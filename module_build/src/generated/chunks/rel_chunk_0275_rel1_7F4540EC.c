// DolRecomp output
#include "../generated.h"

static void loop_7F454108(CPUState* ctx) {
label_7F454108:
    ctx->downcount -= 5;
    ctx->pc = 0x7F454108u;
    // 7F454108: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F45410Cu;
    // 7F45410C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F454110u;
    // 7F454110: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F454114u;
    // 7F454114: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F454118: bc    16, 0, 0x7F454108
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454108u;
                return;
            }
            goto label_7F454108;
        }
    }

    ctx->pc = 0x7F45411Cu;
}

static void loop_7F4545E8(CPUState* ctx) {
label_7F4545E8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F4545E8u;
    // 7F4545E8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F4545ECu;
    // 7F4545EC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F4545F0u;
    // 7F4545F0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F4545F4u;
    // 7F4545F4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F4545F8: bc    16, 0, 0x7F4545E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4545E8u;
                return;
            }
            goto label_7F4545E8;
        }
    }

    ctx->pc = 0x7F4545FCu;
}

static void loop_7F45467C(CPUState* ctx) {
label_7F45467C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F45467Cu;
    // 7F45467C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F454680u;
    // 7F454680: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F454684u;
    // 7F454684: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F454688u;
    // 7F454688: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F45468C: bc    16, 0, 0x7F45467C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45467Cu;
                return;
            }
            goto label_7F45467C;
        }
    }

    ctx->pc = 0x7F454690u;
}

static void loop_7F454F50(CPUState* ctx) {
label_7F454F50:
    ctx->downcount -= 4;
    // 7F454F50: addi    r0, r5, 76
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(76);

    // 7F454F54: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x7F454F58u;
    // 7F454F58: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    // 7F454F5C: bc    16, 0, 0x7F454F50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454F50u;
                return;
            }
            goto label_7F454F50;
        }
    }

    ctx->pc = 0x7F454F60u;
}

void func_7F4540EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F4540ECu: goto label_7F4540EC;
    case 0x7F4540F0u: goto label_7F4540F0;
    case 0x7F4540F4u: goto label_7F4540F4;
    case 0x7F4540F8u: goto label_7F4540F8;
    case 0x7F4540FCu: goto label_7F4540FC;
    case 0x7F454100u: goto label_7F454100;
    case 0x7F454104u: goto label_7F454104;
    case 0x7F454108u: goto label_7F454108;
    case 0x7F45410Cu: goto label_7F45410C;
    case 0x7F454110u: goto label_7F454110;
    case 0x7F454114u: goto label_7F454114;
    case 0x7F454118u: goto label_7F454118;
    case 0x7F45411Cu: goto label_7F45411C;
    case 0x7F454120u: goto label_7F454120;
    case 0x7F454124u: goto label_7F454124;
    case 0x7F454128u: goto label_7F454128;
    case 0x7F45412Cu: goto label_7F45412C;
    case 0x7F454130u: goto label_7F454130;
    case 0x7F454134u: goto label_7F454134;
    case 0x7F454138u: goto label_7F454138;
    case 0x7F45413Cu: goto label_7F45413C;
    case 0x7F454140u: goto label_7F454140;
    case 0x7F454144u: goto label_7F454144;
    case 0x7F454148u: goto label_7F454148;
    case 0x7F45414Cu: goto label_7F45414C;
    case 0x7F454150u: goto label_7F454150;
    case 0x7F454154u: goto label_7F454154;
    case 0x7F454158u: goto label_7F454158;
    case 0x7F45415Cu: goto label_7F45415C;
    case 0x7F454160u: goto label_7F454160;
    case 0x7F454164u: goto label_7F454164;
    case 0x7F454168u: goto label_7F454168;
    case 0x7F45416Cu: goto label_7F45416C;
    case 0x7F454170u: goto label_7F454170;
    case 0x7F454174u: goto label_7F454174;
    case 0x7F454178u: goto label_7F454178;
    case 0x7F45417Cu: goto label_7F45417C;
    case 0x7F454180u: goto label_7F454180;
    case 0x7F454184u: goto label_7F454184;
    case 0x7F454188u: goto label_7F454188;
    case 0x7F45418Cu: goto label_7F45418C;
    case 0x7F454190u: goto label_7F454190;
    case 0x7F454194u: goto label_7F454194;
    case 0x7F454198u: goto label_7F454198;
    case 0x7F45419Cu: goto label_7F45419C;
    case 0x7F4541A0u: goto label_7F4541A0;
    case 0x7F4541A4u: goto label_7F4541A4;
    case 0x7F4541A8u: goto label_7F4541A8;
    case 0x7F4541ACu: goto label_7F4541AC;
    case 0x7F4541B0u: goto label_7F4541B0;
    case 0x7F4541B4u: goto label_7F4541B4;
    case 0x7F4541B8u: goto label_7F4541B8;
    case 0x7F4541BCu: goto label_7F4541BC;
    case 0x7F4541C0u: goto label_7F4541C0;
    case 0x7F4541C4u: goto label_7F4541C4;
    case 0x7F4541C8u: goto label_7F4541C8;
    case 0x7F4541CCu: goto label_7F4541CC;
    case 0x7F4541D0u: goto label_7F4541D0;
    case 0x7F4541D4u: goto label_7F4541D4;
    case 0x7F4541D8u: goto label_7F4541D8;
    case 0x7F4541DCu: goto label_7F4541DC;
    case 0x7F4541E0u: goto label_7F4541E0;
    case 0x7F4541E4u: goto label_7F4541E4;
    case 0x7F4541E8u: goto label_7F4541E8;
    case 0x7F4541ECu: goto label_7F4541EC;
    case 0x7F4541F0u: goto label_7F4541F0;
    case 0x7F4541F4u: goto label_7F4541F4;
    case 0x7F4541F8u: goto label_7F4541F8;
    case 0x7F4541FCu: goto label_7F4541FC;
    case 0x7F454200u: goto label_7F454200;
    case 0x7F454204u: goto label_7F454204;
    case 0x7F454208u: goto label_7F454208;
    case 0x7F45420Cu: goto label_7F45420C;
    case 0x7F454210u: goto label_7F454210;
    case 0x7F454214u: goto label_7F454214;
    case 0x7F454218u: goto label_7F454218;
    case 0x7F45421Cu: goto label_7F45421C;
    case 0x7F454220u: goto label_7F454220;
    case 0x7F454224u: goto label_7F454224;
    case 0x7F454228u: goto label_7F454228;
    case 0x7F45422Cu: goto label_7F45422C;
    case 0x7F454230u: goto label_7F454230;
    case 0x7F454234u: goto label_7F454234;
    case 0x7F454238u: goto label_7F454238;
    case 0x7F45423Cu: goto label_7F45423C;
    case 0x7F454240u: goto label_7F454240;
    case 0x7F454244u: goto label_7F454244;
    case 0x7F454248u: goto label_7F454248;
    case 0x7F45424Cu: goto label_7F45424C;
    case 0x7F454250u: goto label_7F454250;
    case 0x7F454254u: goto label_7F454254;
    case 0x7F454258u: goto label_7F454258;
    case 0x7F45425Cu: goto label_7F45425C;
    case 0x7F454260u: goto label_7F454260;
    case 0x7F454264u: goto label_7F454264;
    case 0x7F454268u: goto label_7F454268;
    case 0x7F45426Cu: goto label_7F45426C;
    case 0x7F454270u: goto label_7F454270;
    case 0x7F454274u: goto label_7F454274;
    case 0x7F454278u: goto label_7F454278;
    case 0x7F45427Cu: goto label_7F45427C;
    case 0x7F454280u: goto label_7F454280;
    case 0x7F454284u: goto label_7F454284;
    case 0x7F454288u: goto label_7F454288;
    case 0x7F45428Cu: goto label_7F45428C;
    case 0x7F454290u: goto label_7F454290;
    case 0x7F454294u: goto label_7F454294;
    case 0x7F454298u: goto label_7F454298;
    case 0x7F45429Cu: goto label_7F45429C;
    case 0x7F4542A0u: goto label_7F4542A0;
    case 0x7F4542A4u: goto label_7F4542A4;
    case 0x7F4542A8u: goto label_7F4542A8;
    case 0x7F4542ACu: goto label_7F4542AC;
    case 0x7F4542B0u: goto label_7F4542B0;
    case 0x7F4542B4u: goto label_7F4542B4;
    case 0x7F4542B8u: goto label_7F4542B8;
    case 0x7F4542BCu: goto label_7F4542BC;
    case 0x7F4542C0u: goto label_7F4542C0;
    case 0x7F4542C4u: goto label_7F4542C4;
    case 0x7F4542C8u: goto label_7F4542C8;
    case 0x7F4542CCu: goto label_7F4542CC;
    case 0x7F4542D0u: goto label_7F4542D0;
    case 0x7F4542D4u: goto label_7F4542D4;
    case 0x7F4542D8u: goto label_7F4542D8;
    case 0x7F4542DCu: goto label_7F4542DC;
    case 0x7F4542E0u: goto label_7F4542E0;
    case 0x7F4542E4u: goto label_7F4542E4;
    case 0x7F4542E8u: goto label_7F4542E8;
    case 0x7F4542ECu: goto label_7F4542EC;
    case 0x7F4542F0u: goto label_7F4542F0;
    case 0x7F4542F4u: goto label_7F4542F4;
    case 0x7F4542F8u: goto label_7F4542F8;
    case 0x7F4542FCu: goto label_7F4542FC;
    case 0x7F454300u: goto label_7F454300;
    case 0x7F454304u: goto label_7F454304;
    case 0x7F454308u: goto label_7F454308;
    case 0x7F45430Cu: goto label_7F45430C;
    case 0x7F454310u: goto label_7F454310;
    case 0x7F454314u: goto label_7F454314;
    case 0x7F454318u: goto label_7F454318;
    case 0x7F45431Cu: goto label_7F45431C;
    case 0x7F454320u: goto label_7F454320;
    case 0x7F454324u: goto label_7F454324;
    case 0x7F454328u: goto label_7F454328;
    case 0x7F45432Cu: goto label_7F45432C;
    case 0x7F454330u: goto label_7F454330;
    case 0x7F454334u: goto label_7F454334;
    case 0x7F454338u: goto label_7F454338;
    case 0x7F45433Cu: goto label_7F45433C;
    case 0x7F454340u: goto label_7F454340;
    case 0x7F454344u: goto label_7F454344;
    case 0x7F454348u: goto label_7F454348;
    case 0x7F45434Cu: goto label_7F45434C;
    case 0x7F454350u: goto label_7F454350;
    case 0x7F454354u: goto label_7F454354;
    case 0x7F454358u: goto label_7F454358;
    case 0x7F45435Cu: goto label_7F45435C;
    case 0x7F454360u: goto label_7F454360;
    case 0x7F454364u: goto label_7F454364;
    case 0x7F454368u: goto label_7F454368;
    case 0x7F45436Cu: goto label_7F45436C;
    case 0x7F454370u: goto label_7F454370;
    case 0x7F454374u: goto label_7F454374;
    case 0x7F454378u: goto label_7F454378;
    case 0x7F45437Cu: goto label_7F45437C;
    case 0x7F454380u: goto label_7F454380;
    case 0x7F454384u: goto label_7F454384;
    case 0x7F454388u: goto label_7F454388;
    case 0x7F45438Cu: goto label_7F45438C;
    case 0x7F454390u: goto label_7F454390;
    case 0x7F454394u: goto label_7F454394;
    case 0x7F454398u: goto label_7F454398;
    case 0x7F45439Cu: goto label_7F45439C;
    case 0x7F4543A0u: goto label_7F4543A0;
    case 0x7F4543A4u: goto label_7F4543A4;
    case 0x7F4543A8u: goto label_7F4543A8;
    case 0x7F4543ACu: goto label_7F4543AC;
    case 0x7F4543B0u: goto label_7F4543B0;
    case 0x7F4543B4u: goto label_7F4543B4;
    case 0x7F4543B8u: goto label_7F4543B8;
    case 0x7F4543BCu: goto label_7F4543BC;
    case 0x7F4543C0u: goto label_7F4543C0;
    case 0x7F4543C4u: goto label_7F4543C4;
    case 0x7F4543C8u: goto label_7F4543C8;
    case 0x7F4543CCu: goto label_7F4543CC;
    case 0x7F4543D0u: goto label_7F4543D0;
    case 0x7F4543D4u: goto label_7F4543D4;
    case 0x7F4543D8u: goto label_7F4543D8;
    case 0x7F4543DCu: goto label_7F4543DC;
    case 0x7F4543E0u: goto label_7F4543E0;
    case 0x7F4543E4u: goto label_7F4543E4;
    case 0x7F4543E8u: goto label_7F4543E8;
    case 0x7F4543ECu: goto label_7F4543EC;
    case 0x7F4543F0u: goto label_7F4543F0;
    case 0x7F4543F4u: goto label_7F4543F4;
    case 0x7F4543F8u: goto label_7F4543F8;
    case 0x7F4543FCu: goto label_7F4543FC;
    case 0x7F454400u: goto label_7F454400;
    case 0x7F454404u: goto label_7F454404;
    case 0x7F454408u: goto label_7F454408;
    case 0x7F45440Cu: goto label_7F45440C;
    case 0x7F454410u: goto label_7F454410;
    case 0x7F454414u: goto label_7F454414;
    case 0x7F454418u: goto label_7F454418;
    case 0x7F45441Cu: goto label_7F45441C;
    case 0x7F454420u: goto label_7F454420;
    case 0x7F454424u: goto label_7F454424;
    case 0x7F454428u: goto label_7F454428;
    case 0x7F45442Cu: goto label_7F45442C;
    case 0x7F454430u: goto label_7F454430;
    case 0x7F454434u: goto label_7F454434;
    case 0x7F454438u: goto label_7F454438;
    case 0x7F45443Cu: goto label_7F45443C;
    case 0x7F454440u: goto label_7F454440;
    case 0x7F454444u: goto label_7F454444;
    case 0x7F454448u: goto label_7F454448;
    case 0x7F45444Cu: goto label_7F45444C;
    case 0x7F454450u: goto label_7F454450;
    case 0x7F454454u: goto label_7F454454;
    case 0x7F454458u: goto label_7F454458;
    case 0x7F45445Cu: goto label_7F45445C;
    case 0x7F454460u: goto label_7F454460;
    case 0x7F454464u: goto label_7F454464;
    case 0x7F454468u: goto label_7F454468;
    case 0x7F45446Cu: goto label_7F45446C;
    case 0x7F454470u: goto label_7F454470;
    case 0x7F454474u: goto label_7F454474;
    case 0x7F454478u: goto label_7F454478;
    case 0x7F45447Cu: goto label_7F45447C;
    case 0x7F454480u: goto label_7F454480;
    case 0x7F454484u: goto label_7F454484;
    case 0x7F454488u: goto label_7F454488;
    case 0x7F45448Cu: goto label_7F45448C;
    case 0x7F454490u: goto label_7F454490;
    case 0x7F454494u: goto label_7F454494;
    case 0x7F454498u: goto label_7F454498;
    case 0x7F45449Cu: goto label_7F45449C;
    case 0x7F4544A0u: goto label_7F4544A0;
    case 0x7F4544A4u: goto label_7F4544A4;
    case 0x7F4544A8u: goto label_7F4544A8;
    case 0x7F4544ACu: goto label_7F4544AC;
    case 0x7F4544B0u: goto label_7F4544B0;
    case 0x7F4544B4u: goto label_7F4544B4;
    case 0x7F4544B8u: goto label_7F4544B8;
    case 0x7F4544BCu: goto label_7F4544BC;
    case 0x7F4544C0u: goto label_7F4544C0;
    case 0x7F4544C4u: goto label_7F4544C4;
    case 0x7F4544C8u: goto label_7F4544C8;
    case 0x7F4544CCu: goto label_7F4544CC;
    case 0x7F4544D0u: goto label_7F4544D0;
    case 0x7F4544D4u: goto label_7F4544D4;
    case 0x7F4544D8u: goto label_7F4544D8;
    case 0x7F4544DCu: goto label_7F4544DC;
    case 0x7F4544E0u: goto label_7F4544E0;
    case 0x7F4544E4u: goto label_7F4544E4;
    case 0x7F4544E8u: goto label_7F4544E8;
    case 0x7F4544ECu: goto label_7F4544EC;
    case 0x7F4544F0u: goto label_7F4544F0;
    case 0x7F4544F4u: goto label_7F4544F4;
    case 0x7F4544F8u: goto label_7F4544F8;
    case 0x7F4544FCu: goto label_7F4544FC;
    case 0x7F454500u: goto label_7F454500;
    case 0x7F454504u: goto label_7F454504;
    case 0x7F454508u: goto label_7F454508;
    case 0x7F45450Cu: goto label_7F45450C;
    case 0x7F454510u: goto label_7F454510;
    case 0x7F454514u: goto label_7F454514;
    case 0x7F454518u: goto label_7F454518;
    case 0x7F45451Cu: goto label_7F45451C;
    case 0x7F454520u: goto label_7F454520;
    case 0x7F454524u: goto label_7F454524;
    case 0x7F454528u: goto label_7F454528;
    case 0x7F45452Cu: goto label_7F45452C;
    case 0x7F454530u: goto label_7F454530;
    case 0x7F454534u: goto label_7F454534;
    case 0x7F454538u: goto label_7F454538;
    case 0x7F45453Cu: goto label_7F45453C;
    case 0x7F454540u: goto label_7F454540;
    case 0x7F454544u: goto label_7F454544;
    case 0x7F454548u: goto label_7F454548;
    case 0x7F45454Cu: goto label_7F45454C;
    case 0x7F454550u: goto label_7F454550;
    case 0x7F454554u: goto label_7F454554;
    case 0x7F454558u: goto label_7F454558;
    case 0x7F45455Cu: goto label_7F45455C;
    case 0x7F454560u: goto label_7F454560;
    case 0x7F454564u: goto label_7F454564;
    case 0x7F454568u: goto label_7F454568;
    case 0x7F45456Cu: goto label_7F45456C;
    case 0x7F454570u: goto label_7F454570;
    case 0x7F454574u: goto label_7F454574;
    case 0x7F454578u: goto label_7F454578;
    case 0x7F45457Cu: goto label_7F45457C;
    case 0x7F454580u: goto label_7F454580;
    case 0x7F454584u: goto label_7F454584;
    case 0x7F454588u: goto label_7F454588;
    case 0x7F45458Cu: goto label_7F45458C;
    case 0x7F454590u: goto label_7F454590;
    case 0x7F454594u: goto label_7F454594;
    case 0x7F454598u: goto label_7F454598;
    case 0x7F45459Cu: goto label_7F45459C;
    case 0x7F4545A0u: goto label_7F4545A0;
    case 0x7F4545A4u: goto label_7F4545A4;
    case 0x7F4545A8u: goto label_7F4545A8;
    case 0x7F4545ACu: goto label_7F4545AC;
    case 0x7F4545B0u: goto label_7F4545B0;
    case 0x7F4545B4u: goto label_7F4545B4;
    case 0x7F4545B8u: goto label_7F4545B8;
    case 0x7F4545BCu: goto label_7F4545BC;
    case 0x7F4545C0u: goto label_7F4545C0;
    case 0x7F4545C4u: goto label_7F4545C4;
    case 0x7F4545C8u: goto label_7F4545C8;
    case 0x7F4545CCu: goto label_7F4545CC;
    case 0x7F4545D0u: goto label_7F4545D0;
    case 0x7F4545D4u: goto label_7F4545D4;
    case 0x7F4545D8u: goto label_7F4545D8;
    case 0x7F4545DCu: goto label_7F4545DC;
    case 0x7F4545E0u: goto label_7F4545E0;
    case 0x7F4545E4u: goto label_7F4545E4;
    case 0x7F4545E8u: goto label_7F4545E8;
    case 0x7F4545ECu: goto label_7F4545EC;
    case 0x7F4545F0u: goto label_7F4545F0;
    case 0x7F4545F4u: goto label_7F4545F4;
    case 0x7F4545F8u: goto label_7F4545F8;
    case 0x7F4545FCu: goto label_7F4545FC;
    case 0x7F454600u: goto label_7F454600;
    case 0x7F454604u: goto label_7F454604;
    case 0x7F454608u: goto label_7F454608;
    case 0x7F45460Cu: goto label_7F45460C;
    case 0x7F454610u: goto label_7F454610;
    case 0x7F454614u: goto label_7F454614;
    case 0x7F454618u: goto label_7F454618;
    case 0x7F45461Cu: goto label_7F45461C;
    case 0x7F454620u: goto label_7F454620;
    case 0x7F454624u: goto label_7F454624;
    case 0x7F454628u: goto label_7F454628;
    case 0x7F45462Cu: goto label_7F45462C;
    case 0x7F454630u: goto label_7F454630;
    case 0x7F454634u: goto label_7F454634;
    case 0x7F454638u: goto label_7F454638;
    case 0x7F45463Cu: goto label_7F45463C;
    case 0x7F454640u: goto label_7F454640;
    case 0x7F454644u: goto label_7F454644;
    case 0x7F454648u: goto label_7F454648;
    case 0x7F45464Cu: goto label_7F45464C;
    case 0x7F454650u: goto label_7F454650;
    case 0x7F454654u: goto label_7F454654;
    case 0x7F454658u: goto label_7F454658;
    case 0x7F45465Cu: goto label_7F45465C;
    case 0x7F454660u: goto label_7F454660;
    case 0x7F454664u: goto label_7F454664;
    case 0x7F454668u: goto label_7F454668;
    case 0x7F45466Cu: goto label_7F45466C;
    case 0x7F454670u: goto label_7F454670;
    case 0x7F454674u: goto label_7F454674;
    case 0x7F454678u: goto label_7F454678;
    case 0x7F45467Cu: goto label_7F45467C;
    case 0x7F454680u: goto label_7F454680;
    case 0x7F454684u: goto label_7F454684;
    case 0x7F454688u: goto label_7F454688;
    case 0x7F45468Cu: goto label_7F45468C;
    case 0x7F454690u: goto label_7F454690;
    case 0x7F454694u: goto label_7F454694;
    case 0x7F454698u: goto label_7F454698;
    case 0x7F45469Cu: goto label_7F45469C;
    case 0x7F4546A0u: goto label_7F4546A0;
    case 0x7F4546A4u: goto label_7F4546A4;
    case 0x7F4546A8u: goto label_7F4546A8;
    case 0x7F4546ACu: goto label_7F4546AC;
    case 0x7F4546B0u: goto label_7F4546B0;
    case 0x7F4546B4u: goto label_7F4546B4;
    case 0x7F4546B8u: goto label_7F4546B8;
    case 0x7F4546BCu: goto label_7F4546BC;
    case 0x7F4546C0u: goto label_7F4546C0;
    case 0x7F4546C4u: goto label_7F4546C4;
    case 0x7F4546C8u: goto label_7F4546C8;
    case 0x7F4546CCu: goto label_7F4546CC;
    case 0x7F4546D0u: goto label_7F4546D0;
    case 0x7F4546D4u: goto label_7F4546D4;
    case 0x7F4546D8u: goto label_7F4546D8;
    case 0x7F4546DCu: goto label_7F4546DC;
    case 0x7F4546E0u: goto label_7F4546E0;
    case 0x7F4546E4u: goto label_7F4546E4;
    case 0x7F4546E8u: goto label_7F4546E8;
    case 0x7F4546ECu: goto label_7F4546EC;
    case 0x7F4546F0u: goto label_7F4546F0;
    case 0x7F4546F4u: goto label_7F4546F4;
    case 0x7F4546F8u: goto label_7F4546F8;
    case 0x7F4546FCu: goto label_7F4546FC;
    case 0x7F454700u: goto label_7F454700;
    case 0x7F454704u: goto label_7F454704;
    case 0x7F454708u: goto label_7F454708;
    case 0x7F45470Cu: goto label_7F45470C;
    case 0x7F454710u: goto label_7F454710;
    case 0x7F454714u: goto label_7F454714;
    case 0x7F454718u: goto label_7F454718;
    case 0x7F45471Cu: goto label_7F45471C;
    case 0x7F454720u: goto label_7F454720;
    case 0x7F454724u: goto label_7F454724;
    case 0x7F454728u: goto label_7F454728;
    case 0x7F45472Cu: goto label_7F45472C;
    case 0x7F454730u: goto label_7F454730;
    case 0x7F454734u: goto label_7F454734;
    case 0x7F454738u: goto label_7F454738;
    case 0x7F45473Cu: goto label_7F45473C;
    case 0x7F454740u: goto label_7F454740;
    case 0x7F454744u: goto label_7F454744;
    case 0x7F454748u: goto label_7F454748;
    case 0x7F45474Cu: goto label_7F45474C;
    case 0x7F454750u: goto label_7F454750;
    case 0x7F454754u: goto label_7F454754;
    case 0x7F454758u: goto label_7F454758;
    case 0x7F45475Cu: goto label_7F45475C;
    case 0x7F454760u: goto label_7F454760;
    case 0x7F454764u: goto label_7F454764;
    case 0x7F454768u: goto label_7F454768;
    case 0x7F45476Cu: goto label_7F45476C;
    case 0x7F454770u: goto label_7F454770;
    case 0x7F454774u: goto label_7F454774;
    case 0x7F454778u: goto label_7F454778;
    case 0x7F45477Cu: goto label_7F45477C;
    case 0x7F454780u: goto label_7F454780;
    case 0x7F454784u: goto label_7F454784;
    case 0x7F454788u: goto label_7F454788;
    case 0x7F45478Cu: goto label_7F45478C;
    case 0x7F454790u: goto label_7F454790;
    case 0x7F454794u: goto label_7F454794;
    case 0x7F454798u: goto label_7F454798;
    case 0x7F45479Cu: goto label_7F45479C;
    case 0x7F4547A0u: goto label_7F4547A0;
    case 0x7F4547A4u: goto label_7F4547A4;
    case 0x7F4547A8u: goto label_7F4547A8;
    case 0x7F4547ACu: goto label_7F4547AC;
    case 0x7F4547B0u: goto label_7F4547B0;
    case 0x7F4547B4u: goto label_7F4547B4;
    case 0x7F4547B8u: goto label_7F4547B8;
    case 0x7F4547BCu: goto label_7F4547BC;
    case 0x7F4547C0u: goto label_7F4547C0;
    case 0x7F4547C4u: goto label_7F4547C4;
    case 0x7F4547C8u: goto label_7F4547C8;
    case 0x7F4547CCu: goto label_7F4547CC;
    case 0x7F4547D0u: goto label_7F4547D0;
    case 0x7F4547D4u: goto label_7F4547D4;
    case 0x7F4547D8u: goto label_7F4547D8;
    case 0x7F4547DCu: goto label_7F4547DC;
    case 0x7F4547E0u: goto label_7F4547E0;
    case 0x7F4547E4u: goto label_7F4547E4;
    case 0x7F4547E8u: goto label_7F4547E8;
    case 0x7F4547ECu: goto label_7F4547EC;
    case 0x7F4547F0u: goto label_7F4547F0;
    case 0x7F4547F4u: goto label_7F4547F4;
    case 0x7F4547F8u: goto label_7F4547F8;
    case 0x7F4547FCu: goto label_7F4547FC;
    case 0x7F454800u: goto label_7F454800;
    case 0x7F454804u: goto label_7F454804;
    case 0x7F454808u: goto label_7F454808;
    case 0x7F45480Cu: goto label_7F45480C;
    case 0x7F454810u: goto label_7F454810;
    case 0x7F454814u: goto label_7F454814;
    case 0x7F454818u: goto label_7F454818;
    case 0x7F45481Cu: goto label_7F45481C;
    case 0x7F454820u: goto label_7F454820;
    case 0x7F454824u: goto label_7F454824;
    case 0x7F454828u: goto label_7F454828;
    case 0x7F45482Cu: goto label_7F45482C;
    case 0x7F454830u: goto label_7F454830;
    case 0x7F454834u: goto label_7F454834;
    case 0x7F454838u: goto label_7F454838;
    case 0x7F45483Cu: goto label_7F45483C;
    case 0x7F454840u: goto label_7F454840;
    case 0x7F454844u: goto label_7F454844;
    case 0x7F454848u: goto label_7F454848;
    case 0x7F45484Cu: goto label_7F45484C;
    case 0x7F454850u: goto label_7F454850;
    case 0x7F454854u: goto label_7F454854;
    case 0x7F454858u: goto label_7F454858;
    case 0x7F45485Cu: goto label_7F45485C;
    case 0x7F454860u: goto label_7F454860;
    case 0x7F454864u: goto label_7F454864;
    case 0x7F454868u: goto label_7F454868;
    case 0x7F45486Cu: goto label_7F45486C;
    case 0x7F454870u: goto label_7F454870;
    case 0x7F454874u: goto label_7F454874;
    case 0x7F454878u: goto label_7F454878;
    case 0x7F45487Cu: goto label_7F45487C;
    case 0x7F454880u: goto label_7F454880;
    case 0x7F454884u: goto label_7F454884;
    case 0x7F454888u: goto label_7F454888;
    case 0x7F45488Cu: goto label_7F45488C;
    case 0x7F454890u: goto label_7F454890;
    case 0x7F454894u: goto label_7F454894;
    case 0x7F454898u: goto label_7F454898;
    case 0x7F45489Cu: goto label_7F45489C;
    case 0x7F4548A0u: goto label_7F4548A0;
    case 0x7F4548A4u: goto label_7F4548A4;
    case 0x7F4548A8u: goto label_7F4548A8;
    case 0x7F4548ACu: goto label_7F4548AC;
    case 0x7F4548B0u: goto label_7F4548B0;
    case 0x7F4548B4u: goto label_7F4548B4;
    case 0x7F4548B8u: goto label_7F4548B8;
    case 0x7F4548BCu: goto label_7F4548BC;
    case 0x7F4548C0u: goto label_7F4548C0;
    case 0x7F4548C4u: goto label_7F4548C4;
    case 0x7F4548C8u: goto label_7F4548C8;
    case 0x7F4548CCu: goto label_7F4548CC;
    case 0x7F4548D0u: goto label_7F4548D0;
    case 0x7F4548D4u: goto label_7F4548D4;
    case 0x7F4548D8u: goto label_7F4548D8;
    case 0x7F4548DCu: goto label_7F4548DC;
    case 0x7F4548E0u: goto label_7F4548E0;
    case 0x7F4548E4u: goto label_7F4548E4;
    case 0x7F4548E8u: goto label_7F4548E8;
    case 0x7F4548ECu: goto label_7F4548EC;
    case 0x7F4548F0u: goto label_7F4548F0;
    case 0x7F4548F4u: goto label_7F4548F4;
    case 0x7F4548F8u: goto label_7F4548F8;
    case 0x7F4548FCu: goto label_7F4548FC;
    case 0x7F454900u: goto label_7F454900;
    case 0x7F454904u: goto label_7F454904;
    case 0x7F454908u: goto label_7F454908;
    case 0x7F45490Cu: goto label_7F45490C;
    case 0x7F454910u: goto label_7F454910;
    case 0x7F454914u: goto label_7F454914;
    case 0x7F454918u: goto label_7F454918;
    case 0x7F45491Cu: goto label_7F45491C;
    case 0x7F454920u: goto label_7F454920;
    case 0x7F454924u: goto label_7F454924;
    case 0x7F454928u: goto label_7F454928;
    case 0x7F45492Cu: goto label_7F45492C;
    case 0x7F454930u: goto label_7F454930;
    case 0x7F454934u: goto label_7F454934;
    case 0x7F454938u: goto label_7F454938;
    case 0x7F45493Cu: goto label_7F45493C;
    case 0x7F454940u: goto label_7F454940;
    case 0x7F454944u: goto label_7F454944;
    case 0x7F454948u: goto label_7F454948;
    case 0x7F45494Cu: goto label_7F45494C;
    case 0x7F454950u: goto label_7F454950;
    case 0x7F454954u: goto label_7F454954;
    case 0x7F454958u: goto label_7F454958;
    case 0x7F45495Cu: goto label_7F45495C;
    case 0x7F454960u: goto label_7F454960;
    case 0x7F454964u: goto label_7F454964;
    case 0x7F454968u: goto label_7F454968;
    case 0x7F45496Cu: goto label_7F45496C;
    case 0x7F454970u: goto label_7F454970;
    case 0x7F454974u: goto label_7F454974;
    case 0x7F454978u: goto label_7F454978;
    case 0x7F45497Cu: goto label_7F45497C;
    case 0x7F454980u: goto label_7F454980;
    case 0x7F454984u: goto label_7F454984;
    case 0x7F454988u: goto label_7F454988;
    case 0x7F45498Cu: goto label_7F45498C;
    case 0x7F454990u: goto label_7F454990;
    case 0x7F454994u: goto label_7F454994;
    case 0x7F454998u: goto label_7F454998;
    case 0x7F45499Cu: goto label_7F45499C;
    case 0x7F4549A0u: goto label_7F4549A0;
    case 0x7F4549A4u: goto label_7F4549A4;
    case 0x7F4549A8u: goto label_7F4549A8;
    case 0x7F4549ACu: goto label_7F4549AC;
    case 0x7F4549B0u: goto label_7F4549B0;
    case 0x7F4549B4u: goto label_7F4549B4;
    case 0x7F4549B8u: goto label_7F4549B8;
    case 0x7F4549BCu: goto label_7F4549BC;
    case 0x7F4549C0u: goto label_7F4549C0;
    case 0x7F4549C4u: goto label_7F4549C4;
    case 0x7F4549C8u: goto label_7F4549C8;
    case 0x7F4549CCu: goto label_7F4549CC;
    case 0x7F4549D0u: goto label_7F4549D0;
    case 0x7F4549D4u: goto label_7F4549D4;
    case 0x7F4549D8u: goto label_7F4549D8;
    case 0x7F4549DCu: goto label_7F4549DC;
    case 0x7F4549E0u: goto label_7F4549E0;
    case 0x7F4549E4u: goto label_7F4549E4;
    case 0x7F4549E8u: goto label_7F4549E8;
    case 0x7F4549ECu: goto label_7F4549EC;
    case 0x7F4549F0u: goto label_7F4549F0;
    case 0x7F4549F4u: goto label_7F4549F4;
    case 0x7F4549F8u: goto label_7F4549F8;
    case 0x7F4549FCu: goto label_7F4549FC;
    case 0x7F454A00u: goto label_7F454A00;
    case 0x7F454A04u: goto label_7F454A04;
    case 0x7F454A08u: goto label_7F454A08;
    case 0x7F454A0Cu: goto label_7F454A0C;
    case 0x7F454A10u: goto label_7F454A10;
    case 0x7F454A14u: goto label_7F454A14;
    case 0x7F454A18u: goto label_7F454A18;
    case 0x7F454A1Cu: goto label_7F454A1C;
    case 0x7F454A20u: goto label_7F454A20;
    case 0x7F454A24u: goto label_7F454A24;
    case 0x7F454A28u: goto label_7F454A28;
    case 0x7F454A2Cu: goto label_7F454A2C;
    case 0x7F454A30u: goto label_7F454A30;
    case 0x7F454A34u: goto label_7F454A34;
    case 0x7F454A38u: goto label_7F454A38;
    case 0x7F454A3Cu: goto label_7F454A3C;
    case 0x7F454A40u: goto label_7F454A40;
    case 0x7F454A44u: goto label_7F454A44;
    case 0x7F454A48u: goto label_7F454A48;
    case 0x7F454A4Cu: goto label_7F454A4C;
    case 0x7F454A50u: goto label_7F454A50;
    case 0x7F454A54u: goto label_7F454A54;
    case 0x7F454A58u: goto label_7F454A58;
    case 0x7F454A5Cu: goto label_7F454A5C;
    case 0x7F454A60u: goto label_7F454A60;
    case 0x7F454A64u: goto label_7F454A64;
    case 0x7F454A68u: goto label_7F454A68;
    case 0x7F454A6Cu: goto label_7F454A6C;
    case 0x7F454A70u: goto label_7F454A70;
    case 0x7F454A74u: goto label_7F454A74;
    case 0x7F454A78u: goto label_7F454A78;
    case 0x7F454A7Cu: goto label_7F454A7C;
    case 0x7F454A80u: goto label_7F454A80;
    case 0x7F454A84u: goto label_7F454A84;
    case 0x7F454A88u: goto label_7F454A88;
    case 0x7F454A8Cu: goto label_7F454A8C;
    case 0x7F454A90u: goto label_7F454A90;
    case 0x7F454A94u: goto label_7F454A94;
    case 0x7F454A98u: goto label_7F454A98;
    case 0x7F454A9Cu: goto label_7F454A9C;
    case 0x7F454AA0u: goto label_7F454AA0;
    case 0x7F454AA4u: goto label_7F454AA4;
    case 0x7F454AA8u: goto label_7F454AA8;
    case 0x7F454AACu: goto label_7F454AAC;
    case 0x7F454AB0u: goto label_7F454AB0;
    case 0x7F454AB4u: goto label_7F454AB4;
    case 0x7F454AB8u: goto label_7F454AB8;
    case 0x7F454ABCu: goto label_7F454ABC;
    case 0x7F454AC0u: goto label_7F454AC0;
    case 0x7F454AC4u: goto label_7F454AC4;
    case 0x7F454AC8u: goto label_7F454AC8;
    case 0x7F454ACCu: goto label_7F454ACC;
    case 0x7F454AD0u: goto label_7F454AD0;
    case 0x7F454AD4u: goto label_7F454AD4;
    case 0x7F454AD8u: goto label_7F454AD8;
    case 0x7F454ADCu: goto label_7F454ADC;
    case 0x7F454AE0u: goto label_7F454AE0;
    case 0x7F454AE4u: goto label_7F454AE4;
    case 0x7F454AE8u: goto label_7F454AE8;
    case 0x7F454AECu: goto label_7F454AEC;
    case 0x7F454AF0u: goto label_7F454AF0;
    case 0x7F454AF4u: goto label_7F454AF4;
    case 0x7F454AF8u: goto label_7F454AF8;
    case 0x7F454AFCu: goto label_7F454AFC;
    case 0x7F454B00u: goto label_7F454B00;
    case 0x7F454B04u: goto label_7F454B04;
    case 0x7F454B08u: goto label_7F454B08;
    case 0x7F454B0Cu: goto label_7F454B0C;
    case 0x7F454B10u: goto label_7F454B10;
    case 0x7F454B14u: goto label_7F454B14;
    case 0x7F454B18u: goto label_7F454B18;
    case 0x7F454B1Cu: goto label_7F454B1C;
    case 0x7F454B20u: goto label_7F454B20;
    case 0x7F454B24u: goto label_7F454B24;
    case 0x7F454B28u: goto label_7F454B28;
    case 0x7F454B2Cu: goto label_7F454B2C;
    case 0x7F454B30u: goto label_7F454B30;
    case 0x7F454B34u: goto label_7F454B34;
    case 0x7F454B38u: goto label_7F454B38;
    case 0x7F454B3Cu: goto label_7F454B3C;
    case 0x7F454B40u: goto label_7F454B40;
    case 0x7F454B44u: goto label_7F454B44;
    case 0x7F454B48u: goto label_7F454B48;
    case 0x7F454B4Cu: goto label_7F454B4C;
    case 0x7F454B50u: goto label_7F454B50;
    case 0x7F454B54u: goto label_7F454B54;
    case 0x7F454B58u: goto label_7F454B58;
    case 0x7F454B5Cu: goto label_7F454B5C;
    case 0x7F454B60u: goto label_7F454B60;
    case 0x7F454B64u: goto label_7F454B64;
    case 0x7F454B68u: goto label_7F454B68;
    case 0x7F454B6Cu: goto label_7F454B6C;
    case 0x7F454B70u: goto label_7F454B70;
    case 0x7F454B74u: goto label_7F454B74;
    case 0x7F454B78u: goto label_7F454B78;
    case 0x7F454B7Cu: goto label_7F454B7C;
    case 0x7F454B80u: goto label_7F454B80;
    case 0x7F454B84u: goto label_7F454B84;
    case 0x7F454B88u: goto label_7F454B88;
    case 0x7F454B8Cu: goto label_7F454B8C;
    case 0x7F454B90u: goto label_7F454B90;
    case 0x7F454B94u: goto label_7F454B94;
    case 0x7F454B98u: goto label_7F454B98;
    case 0x7F454B9Cu: goto label_7F454B9C;
    case 0x7F454BA0u: goto label_7F454BA0;
    case 0x7F454BA4u: goto label_7F454BA4;
    case 0x7F454BA8u: goto label_7F454BA8;
    case 0x7F454BACu: goto label_7F454BAC;
    case 0x7F454BB0u: goto label_7F454BB0;
    case 0x7F454BB4u: goto label_7F454BB4;
    case 0x7F454BB8u: goto label_7F454BB8;
    case 0x7F454BBCu: goto label_7F454BBC;
    case 0x7F454BC0u: goto label_7F454BC0;
    case 0x7F454BC4u: goto label_7F454BC4;
    case 0x7F454BC8u: goto label_7F454BC8;
    case 0x7F454BCCu: goto label_7F454BCC;
    case 0x7F454BD0u: goto label_7F454BD0;
    case 0x7F454BD4u: goto label_7F454BD4;
    case 0x7F454BD8u: goto label_7F454BD8;
    case 0x7F454BDCu: goto label_7F454BDC;
    case 0x7F454BE0u: goto label_7F454BE0;
    case 0x7F454BE4u: goto label_7F454BE4;
    case 0x7F454BE8u: goto label_7F454BE8;
    case 0x7F454BECu: goto label_7F454BEC;
    case 0x7F454BF0u: goto label_7F454BF0;
    case 0x7F454BF4u: goto label_7F454BF4;
    case 0x7F454BF8u: goto label_7F454BF8;
    case 0x7F454BFCu: goto label_7F454BFC;
    case 0x7F454C00u: goto label_7F454C00;
    case 0x7F454C04u: goto label_7F454C04;
    case 0x7F454C08u: goto label_7F454C08;
    case 0x7F454C0Cu: goto label_7F454C0C;
    case 0x7F454C10u: goto label_7F454C10;
    case 0x7F454C14u: goto label_7F454C14;
    case 0x7F454C18u: goto label_7F454C18;
    case 0x7F454C1Cu: goto label_7F454C1C;
    case 0x7F454C20u: goto label_7F454C20;
    case 0x7F454C24u: goto label_7F454C24;
    case 0x7F454C28u: goto label_7F454C28;
    case 0x7F454C2Cu: goto label_7F454C2C;
    case 0x7F454C30u: goto label_7F454C30;
    case 0x7F454C34u: goto label_7F454C34;
    case 0x7F454C38u: goto label_7F454C38;
    case 0x7F454C3Cu: goto label_7F454C3C;
    case 0x7F454C40u: goto label_7F454C40;
    case 0x7F454C44u: goto label_7F454C44;
    case 0x7F454C48u: goto label_7F454C48;
    case 0x7F454C4Cu: goto label_7F454C4C;
    case 0x7F454C50u: goto label_7F454C50;
    case 0x7F454C54u: goto label_7F454C54;
    case 0x7F454C58u: goto label_7F454C58;
    case 0x7F454C5Cu: goto label_7F454C5C;
    case 0x7F454C60u: goto label_7F454C60;
    case 0x7F454C64u: goto label_7F454C64;
    case 0x7F454C68u: goto label_7F454C68;
    case 0x7F454C6Cu: goto label_7F454C6C;
    case 0x7F454C70u: goto label_7F454C70;
    case 0x7F454C74u: goto label_7F454C74;
    case 0x7F454C78u: goto label_7F454C78;
    case 0x7F454C7Cu: goto label_7F454C7C;
    case 0x7F454C80u: goto label_7F454C80;
    case 0x7F454C84u: goto label_7F454C84;
    case 0x7F454C88u: goto label_7F454C88;
    case 0x7F454C8Cu: goto label_7F454C8C;
    case 0x7F454C90u: goto label_7F454C90;
    case 0x7F454C94u: goto label_7F454C94;
    case 0x7F454C98u: goto label_7F454C98;
    case 0x7F454C9Cu: goto label_7F454C9C;
    case 0x7F454CA0u: goto label_7F454CA0;
    case 0x7F454CA4u: goto label_7F454CA4;
    case 0x7F454CA8u: goto label_7F454CA8;
    case 0x7F454CACu: goto label_7F454CAC;
    case 0x7F454CB0u: goto label_7F454CB0;
    case 0x7F454CB4u: goto label_7F454CB4;
    case 0x7F454CB8u: goto label_7F454CB8;
    case 0x7F454CBCu: goto label_7F454CBC;
    case 0x7F454CC0u: goto label_7F454CC0;
    case 0x7F454CC4u: goto label_7F454CC4;
    case 0x7F454CC8u: goto label_7F454CC8;
    case 0x7F454CCCu: goto label_7F454CCC;
    case 0x7F454CD0u: goto label_7F454CD0;
    case 0x7F454CD4u: goto label_7F454CD4;
    case 0x7F454CD8u: goto label_7F454CD8;
    case 0x7F454CDCu: goto label_7F454CDC;
    case 0x7F454CE0u: goto label_7F454CE0;
    case 0x7F454CE4u: goto label_7F454CE4;
    case 0x7F454CE8u: goto label_7F454CE8;
    case 0x7F454CECu: goto label_7F454CEC;
    case 0x7F454CF0u: goto label_7F454CF0;
    case 0x7F454CF4u: goto label_7F454CF4;
    case 0x7F454CF8u: goto label_7F454CF8;
    case 0x7F454CFCu: goto label_7F454CFC;
    case 0x7F454D00u: goto label_7F454D00;
    case 0x7F454D04u: goto label_7F454D04;
    case 0x7F454D08u: goto label_7F454D08;
    case 0x7F454D0Cu: goto label_7F454D0C;
    case 0x7F454D10u: goto label_7F454D10;
    case 0x7F454D14u: goto label_7F454D14;
    case 0x7F454D18u: goto label_7F454D18;
    case 0x7F454D1Cu: goto label_7F454D1C;
    case 0x7F454D20u: goto label_7F454D20;
    case 0x7F454D24u: goto label_7F454D24;
    case 0x7F454D28u: goto label_7F454D28;
    case 0x7F454D2Cu: goto label_7F454D2C;
    case 0x7F454D30u: goto label_7F454D30;
    case 0x7F454D34u: goto label_7F454D34;
    case 0x7F454D38u: goto label_7F454D38;
    case 0x7F454D3Cu: goto label_7F454D3C;
    case 0x7F454D40u: goto label_7F454D40;
    case 0x7F454D44u: goto label_7F454D44;
    case 0x7F454D48u: goto label_7F454D48;
    case 0x7F454D4Cu: goto label_7F454D4C;
    case 0x7F454D50u: goto label_7F454D50;
    case 0x7F454D54u: goto label_7F454D54;
    case 0x7F454D58u: goto label_7F454D58;
    case 0x7F454D5Cu: goto label_7F454D5C;
    case 0x7F454D60u: goto label_7F454D60;
    case 0x7F454D64u: goto label_7F454D64;
    case 0x7F454D68u: goto label_7F454D68;
    case 0x7F454D6Cu: goto label_7F454D6C;
    case 0x7F454D70u: goto label_7F454D70;
    case 0x7F454D74u: goto label_7F454D74;
    case 0x7F454D78u: goto label_7F454D78;
    case 0x7F454D7Cu: goto label_7F454D7C;
    case 0x7F454D80u: goto label_7F454D80;
    case 0x7F454D84u: goto label_7F454D84;
    case 0x7F454D88u: goto label_7F454D88;
    case 0x7F454D8Cu: goto label_7F454D8C;
    case 0x7F454D90u: goto label_7F454D90;
    case 0x7F454D94u: goto label_7F454D94;
    case 0x7F454D98u: goto label_7F454D98;
    case 0x7F454D9Cu: goto label_7F454D9C;
    case 0x7F454DA0u: goto label_7F454DA0;
    case 0x7F454DA4u: goto label_7F454DA4;
    case 0x7F454DA8u: goto label_7F454DA8;
    case 0x7F454DACu: goto label_7F454DAC;
    case 0x7F454DB0u: goto label_7F454DB0;
    case 0x7F454DB4u: goto label_7F454DB4;
    case 0x7F454DB8u: goto label_7F454DB8;
    case 0x7F454DBCu: goto label_7F454DBC;
    case 0x7F454DC0u: goto label_7F454DC0;
    case 0x7F454DC4u: goto label_7F454DC4;
    case 0x7F454DC8u: goto label_7F454DC8;
    case 0x7F454DCCu: goto label_7F454DCC;
    case 0x7F454DD0u: goto label_7F454DD0;
    case 0x7F454DD4u: goto label_7F454DD4;
    case 0x7F454DD8u: goto label_7F454DD8;
    case 0x7F454DDCu: goto label_7F454DDC;
    case 0x7F454DE0u: goto label_7F454DE0;
    case 0x7F454DE4u: goto label_7F454DE4;
    case 0x7F454DE8u: goto label_7F454DE8;
    case 0x7F454DECu: goto label_7F454DEC;
    case 0x7F454DF0u: goto label_7F454DF0;
    case 0x7F454DF4u: goto label_7F454DF4;
    case 0x7F454DF8u: goto label_7F454DF8;
    case 0x7F454DFCu: goto label_7F454DFC;
    case 0x7F454E00u: goto label_7F454E00;
    case 0x7F454E04u: goto label_7F454E04;
    case 0x7F454E08u: goto label_7F454E08;
    case 0x7F454E0Cu: goto label_7F454E0C;
    case 0x7F454E10u: goto label_7F454E10;
    case 0x7F454E14u: goto label_7F454E14;
    case 0x7F454E18u: goto label_7F454E18;
    case 0x7F454E1Cu: goto label_7F454E1C;
    case 0x7F454E20u: goto label_7F454E20;
    case 0x7F454E24u: goto label_7F454E24;
    case 0x7F454E28u: goto label_7F454E28;
    case 0x7F454E2Cu: goto label_7F454E2C;
    case 0x7F454E30u: goto label_7F454E30;
    case 0x7F454E34u: goto label_7F454E34;
    case 0x7F454E38u: goto label_7F454E38;
    case 0x7F454E3Cu: goto label_7F454E3C;
    case 0x7F454E40u: goto label_7F454E40;
    case 0x7F454E44u: goto label_7F454E44;
    case 0x7F454E48u: goto label_7F454E48;
    case 0x7F454E4Cu: goto label_7F454E4C;
    case 0x7F454E50u: goto label_7F454E50;
    case 0x7F454E54u: goto label_7F454E54;
    case 0x7F454E58u: goto label_7F454E58;
    case 0x7F454E5Cu: goto label_7F454E5C;
    case 0x7F454E60u: goto label_7F454E60;
    case 0x7F454E64u: goto label_7F454E64;
    case 0x7F454E68u: goto label_7F454E68;
    case 0x7F454E6Cu: goto label_7F454E6C;
    case 0x7F454E70u: goto label_7F454E70;
    case 0x7F454E74u: goto label_7F454E74;
    case 0x7F454E78u: goto label_7F454E78;
    case 0x7F454E7Cu: goto label_7F454E7C;
    case 0x7F454E80u: goto label_7F454E80;
    case 0x7F454E84u: goto label_7F454E84;
    case 0x7F454E88u: goto label_7F454E88;
    case 0x7F454E8Cu: goto label_7F454E8C;
    case 0x7F454E90u: goto label_7F454E90;
    case 0x7F454E94u: goto label_7F454E94;
    case 0x7F454E98u: goto label_7F454E98;
    case 0x7F454E9Cu: goto label_7F454E9C;
    case 0x7F454EA0u: goto label_7F454EA0;
    case 0x7F454EA4u: goto label_7F454EA4;
    case 0x7F454EA8u: goto label_7F454EA8;
    case 0x7F454EACu: goto label_7F454EAC;
    case 0x7F454EB0u: goto label_7F454EB0;
    case 0x7F454EB4u: goto label_7F454EB4;
    case 0x7F454EB8u: goto label_7F454EB8;
    case 0x7F454EBCu: goto label_7F454EBC;
    case 0x7F454EC0u: goto label_7F454EC0;
    case 0x7F454EC4u: goto label_7F454EC4;
    case 0x7F454EC8u: goto label_7F454EC8;
    case 0x7F454ECCu: goto label_7F454ECC;
    case 0x7F454ED0u: goto label_7F454ED0;
    case 0x7F454ED4u: goto label_7F454ED4;
    case 0x7F454ED8u: goto label_7F454ED8;
    case 0x7F454EDCu: goto label_7F454EDC;
    case 0x7F454EE0u: goto label_7F454EE0;
    case 0x7F454EE4u: goto label_7F454EE4;
    case 0x7F454EE8u: goto label_7F454EE8;
    case 0x7F454EECu: goto label_7F454EEC;
    case 0x7F454EF0u: goto label_7F454EF0;
    case 0x7F454EF4u: goto label_7F454EF4;
    case 0x7F454EF8u: goto label_7F454EF8;
    case 0x7F454EFCu: goto label_7F454EFC;
    case 0x7F454F00u: goto label_7F454F00;
    case 0x7F454F04u: goto label_7F454F04;
    case 0x7F454F08u: goto label_7F454F08;
    case 0x7F454F0Cu: goto label_7F454F0C;
    case 0x7F454F10u: goto label_7F454F10;
    case 0x7F454F14u: goto label_7F454F14;
    case 0x7F454F18u: goto label_7F454F18;
    case 0x7F454F1Cu: goto label_7F454F1C;
    case 0x7F454F20u: goto label_7F454F20;
    case 0x7F454F24u: goto label_7F454F24;
    case 0x7F454F28u: goto label_7F454F28;
    case 0x7F454F2Cu: goto label_7F454F2C;
    case 0x7F454F30u: goto label_7F454F30;
    case 0x7F454F34u: goto label_7F454F34;
    case 0x7F454F38u: goto label_7F454F38;
    case 0x7F454F3Cu: goto label_7F454F3C;
    case 0x7F454F40u: goto label_7F454F40;
    case 0x7F454F44u: goto label_7F454F44;
    case 0x7F454F48u: goto label_7F454F48;
    case 0x7F454F4Cu: goto label_7F454F4C;
    case 0x7F454F50u: goto label_7F454F50;
    case 0x7F454F54u: goto label_7F454F54;
    case 0x7F454F58u: goto label_7F454F58;
    case 0x7F454F5Cu: goto label_7F454F5C;
    case 0x7F454F60u: goto label_7F454F60;
    case 0x7F454F64u: goto label_7F454F64;
    case 0x7F454F68u: goto label_7F454F68;
    case 0x7F454F6Cu: goto label_7F454F6C;
    case 0x7F454F70u: goto label_7F454F70;
    case 0x7F454F74u: goto label_7F454F74;
    case 0x7F454F78u: goto label_7F454F78;
    case 0x7F454F7Cu: goto label_7F454F7C;
    case 0x7F454F80u: goto label_7F454F80;
    case 0x7F454F84u: goto label_7F454F84;
    case 0x7F454F88u: goto label_7F454F88;
    case 0x7F454F8Cu: goto label_7F454F8C;
    case 0x7F454F90u: goto label_7F454F90;
    case 0x7F454F94u: goto label_7F454F94;
    case 0x7F454F98u: goto label_7F454F98;
    case 0x7F454F9Cu: goto label_7F454F9C;
    case 0x7F454FA0u: goto label_7F454FA0;
    case 0x7F454FA4u: goto label_7F454FA4;
    case 0x7F454FA8u: goto label_7F454FA8;
    case 0x7F454FACu: goto label_7F454FAC;
    case 0x7F454FB0u: goto label_7F454FB0;
    case 0x7F454FB4u: goto label_7F454FB4;
    case 0x7F454FB8u: goto label_7F454FB8;
    case 0x7F454FBCu: goto label_7F454FBC;
    case 0x7F454FC0u: goto label_7F454FC0;
    case 0x7F454FC4u: goto label_7F454FC4;
    case 0x7F454FC8u: goto label_7F454FC8;
    case 0x7F454FCCu: goto label_7F454FCC;
    case 0x7F454FD0u: goto label_7F454FD0;
    case 0x7F454FD4u: goto label_7F454FD4;
    case 0x7F454FD8u: goto label_7F454FD8;
    case 0x7F454FDCu: goto label_7F454FDC;
    case 0x7F454FE0u: goto label_7F454FE0;
    case 0x7F454FE4u: goto label_7F454FE4;
    case 0x7F454FE8u: goto label_7F454FE8;
    case 0x7F454FECu: goto label_7F454FEC;
    case 0x7F454FF0u: goto label_7F454FF0;
    case 0x7F454FF4u: goto label_7F454FF4;
    case 0x7F454FF8u: goto label_7F454FF8;
    case 0x7F454FFCu: goto label_7F454FFC;
    case 0x7F455000u: goto label_7F455000;
    case 0x7F455004u: goto label_7F455004;
    case 0x7F455008u: goto label_7F455008;
    case 0x7F45500Cu: goto label_7F45500C;
    case 0x7F455010u: goto label_7F455010;
    case 0x7F455014u: goto label_7F455014;
    case 0x7F455018u: goto label_7F455018;
    case 0x7F45501Cu: goto label_7F45501C;
    case 0x7F455020u: goto label_7F455020;
    case 0x7F455024u: goto label_7F455024;
    case 0x7F455028u: goto label_7F455028;
    case 0x7F45502Cu: goto label_7F45502C;
    case 0x7F455030u: goto label_7F455030;
    case 0x7F455034u: goto label_7F455034;
    case 0x7F455038u: goto label_7F455038;
    case 0x7F45503Cu: goto label_7F45503C;
    case 0x7F455040u: goto label_7F455040;
    case 0x7F455044u: goto label_7F455044;
    case 0x7F455048u: goto label_7F455048;
    case 0x7F45504Cu: goto label_7F45504C;
    case 0x7F455050u: goto label_7F455050;
    case 0x7F455054u: goto label_7F455054;
    case 0x7F455058u: goto label_7F455058;
    case 0x7F45505Cu: goto label_7F45505C;
    case 0x7F455060u: goto label_7F455060;
    case 0x7F455064u: goto label_7F455064;
    case 0x7F455068u: goto label_7F455068;
    case 0x7F45506Cu: goto label_7F45506C;
    case 0x7F455070u: goto label_7F455070;
    case 0x7F455074u: goto label_7F455074;
    case 0x7F455078u: goto label_7F455078;
    case 0x7F45507Cu: goto label_7F45507C;
    case 0x7F455080u: goto label_7F455080;
    case 0x7F455084u: goto label_7F455084;
    case 0x7F455088u: goto label_7F455088;
    case 0x7F45508Cu: goto label_7F45508C;
    case 0x7F455090u: goto label_7F455090;
    case 0x7F455094u: goto label_7F455094;
    case 0x7F455098u: goto label_7F455098;
    case 0x7F45509Cu: goto label_7F45509C;
    case 0x7F4550A0u: goto label_7F4550A0;
    case 0x7F4550A4u: goto label_7F4550A4;
    case 0x7F4550A8u: goto label_7F4550A8;
    case 0x7F4550ACu: goto label_7F4550AC;
    case 0x7F4550B0u: goto label_7F4550B0;
    case 0x7F4550B4u: goto label_7F4550B4;
    case 0x7F4550B8u: goto label_7F4550B8;
    case 0x7F4550BCu: goto label_7F4550BC;
    case 0x7F4550C0u: goto label_7F4550C0;
    case 0x7F4550C4u: goto label_7F4550C4;
    case 0x7F4550C8u: goto label_7F4550C8;
    case 0x7F4550CCu: goto label_7F4550CC;
    case 0x7F4550D0u: goto label_7F4550D0;
    case 0x7F4550D4u: goto label_7F4550D4;
    case 0x7F4550D8u: goto label_7F4550D8;
    case 0x7F4550DCu: goto label_7F4550DC;
    case 0x7F4550E0u: goto label_7F4550E0;
    case 0x7F4550E4u: goto label_7F4550E4;
    case 0x7F4550E8u: goto label_7F4550E8;
    case 0x7F4550ECu: goto label_7F4550EC;
    case 0x7F4550F0u: goto label_7F4550F0;
    case 0x7F4550F4u: goto label_7F4550F4;
    case 0x7F4550F8u: goto label_7F4550F8;
    case 0x7F4550FCu: goto label_7F4550FC;
    case 0x7F455100u: goto label_7F455100;
    case 0x7F455104u: goto label_7F455104;
    case 0x7F455108u: goto label_7F455108;
    case 0x7F45510Cu: goto label_7F45510C;
    case 0x7F455110u: goto label_7F455110;
    case 0x7F455114u: goto label_7F455114;
    case 0x7F455118u: goto label_7F455118;
    case 0x7F45511Cu: goto label_7F45511C;
    case 0x7F455120u: goto label_7F455120;
    case 0x7F455124u: goto label_7F455124;
    case 0x7F455128u: goto label_7F455128;
    case 0x7F45512Cu: goto label_7F45512C;
    case 0x7F455130u: goto label_7F455130;
    case 0x7F455134u: goto label_7F455134;
    case 0x7F455138u: goto label_7F455138;
    case 0x7F45513Cu: goto label_7F45513C;
    case 0x7F455140u: goto label_7F455140;
    case 0x7F455144u: goto label_7F455144;
    case 0x7F455148u: goto label_7F455148;
    case 0x7F45514Cu: goto label_7F45514C;
    case 0x7F455150u: goto label_7F455150;
    case 0x7F455154u: goto label_7F455154;
    case 0x7F455158u: goto label_7F455158;
    case 0x7F45515Cu: goto label_7F45515C;
    case 0x7F455160u: goto label_7F455160;
    case 0x7F455164u: goto label_7F455164;
    case 0x7F455168u: goto label_7F455168;
    case 0x7F45516Cu: goto label_7F45516C;
    case 0x7F455170u: goto label_7F455170;
    case 0x7F455174u: goto label_7F455174;
    case 0x7F455178u: goto label_7F455178;
    case 0x7F45517Cu: goto label_7F45517C;
    case 0x7F455180u: goto label_7F455180;
    case 0x7F455184u: goto label_7F455184;
    case 0x7F455188u: goto label_7F455188;
    case 0x7F45518Cu: goto label_7F45518C;
    case 0x7F455190u: goto label_7F455190;
    case 0x7F455194u: goto label_7F455194;
    case 0x7F455198u: goto label_7F455198;
    case 0x7F45519Cu: goto label_7F45519C;
    case 0x7F4551A0u: goto label_7F4551A0;
    case 0x7F4551A4u: goto label_7F4551A4;
    case 0x7F4551A8u: goto label_7F4551A8;
    case 0x7F4551ACu: goto label_7F4551AC;
    case 0x7F4551B0u: goto label_7F4551B0;
    case 0x7F4551B4u: goto label_7F4551B4;
    case 0x7F4551B8u: goto label_7F4551B8;
    case 0x7F4551BCu: goto label_7F4551BC;
    case 0x7F4551C0u: goto label_7F4551C0;
    case 0x7F4551C4u: goto label_7F4551C4;
    case 0x7F4551C8u: goto label_7F4551C8;
    case 0x7F4551CCu: goto label_7F4551CC;
    case 0x7F4551D0u: goto label_7F4551D0;
    case 0x7F4551D4u: goto label_7F4551D4;
    case 0x7F4551D8u: goto label_7F4551D8;
    case 0x7F4551DCu: goto label_7F4551DC;
    case 0x7F4551E0u: goto label_7F4551E0;
    case 0x7F4551E4u: goto label_7F4551E4;
    case 0x7F4551E8u: goto label_7F4551E8;
    case 0x7F4551ECu: goto label_7F4551EC;
    case 0x7F4551F0u: goto label_7F4551F0;
    case 0x7F4551F4u: goto label_7F4551F4;
    case 0x7F4551F8u: goto label_7F4551F8;
    case 0x7F4551FCu: goto label_7F4551FC;
    case 0x7F455200u: goto label_7F455200;
    case 0x7F455204u: goto label_7F455204;
    case 0x7F455208u: goto label_7F455208;
    case 0x7F45520Cu: goto label_7F45520C;
    case 0x7F455210u: goto label_7F455210;
    case 0x7F455214u: goto label_7F455214;
    case 0x7F455218u: goto label_7F455218;
    case 0x7F45521Cu: goto label_7F45521C;
    case 0x7F455220u: goto label_7F455220;
    case 0x7F455224u: goto label_7F455224;
    case 0x7F455228u: goto label_7F455228;
    case 0x7F45522Cu: goto label_7F45522C;
    case 0x7F455230u: goto label_7F455230;
    case 0x7F455234u: goto label_7F455234;
    case 0x7F455238u: goto label_7F455238;
    case 0x7F45523Cu: goto label_7F45523C;
    case 0x7F455240u: goto label_7F455240;
    case 0x7F455244u: goto label_7F455244;
    case 0x7F455248u: goto label_7F455248;
    case 0x7F45524Cu: goto label_7F45524C;
    case 0x7F455250u: goto label_7F455250;
    case 0x7F455254u: goto label_7F455254;
    case 0x7F455258u: goto label_7F455258;
    case 0x7F45525Cu: goto label_7F45525C;
    case 0x7F455260u: goto label_7F455260;
    case 0x7F455264u: goto label_7F455264;
    case 0x7F455268u: goto label_7F455268;
    case 0x7F45526Cu: goto label_7F45526C;
    case 0x7F455270u: goto label_7F455270;
    case 0x7F455274u: goto label_7F455274;
    case 0x7F455278u: goto label_7F455278;
    case 0x7F45527Cu: goto label_7F45527C;
    case 0x7F455280u: goto label_7F455280;
    case 0x7F455284u: goto label_7F455284;
    case 0x7F455288u: goto label_7F455288;
    case 0x7F45528Cu: goto label_7F45528C;
    case 0x7F455290u: goto label_7F455290;
    case 0x7F455294u: goto label_7F455294;
    case 0x7F455298u: goto label_7F455298;
    case 0x7F45529Cu: goto label_7F45529C;
    case 0x7F4552A0u: goto label_7F4552A0;
    case 0x7F4552A4u: goto label_7F4552A4;
    case 0x7F4552A8u: goto label_7F4552A8;
    case 0x7F4552ACu: goto label_7F4552AC;
    case 0x7F4552B0u: goto label_7F4552B0;
    case 0x7F4552B4u: goto label_7F4552B4;
    case 0x7F4552B8u: goto label_7F4552B8;
    case 0x7F4552BCu: goto label_7F4552BC;
    case 0x7F4552C0u: goto label_7F4552C0;
    case 0x7F4552C4u: goto label_7F4552C4;
    case 0x7F4552C8u: goto label_7F4552C8;
    case 0x7F4552CCu: goto label_7F4552CC;
    case 0x7F4552D0u: goto label_7F4552D0;
    case 0x7F4552D4u: goto label_7F4552D4;
    case 0x7F4552D8u: goto label_7F4552D8;
    case 0x7F4552DCu: goto label_7F4552DC;
    case 0x7F4552E0u: goto label_7F4552E0;
    case 0x7F4552E4u: goto label_7F4552E4;
    case 0x7F4552E8u: goto label_7F4552E8;
    case 0x7F4552ECu: goto label_7F4552EC;
    case 0x7F4552F0u: goto label_7F4552F0;
    case 0x7F4552F4u: goto label_7F4552F4;
    case 0x7F4552F8u: goto label_7F4552F8;
    case 0x7F4552FCu: goto label_7F4552FC;
    case 0x7F455300u: goto label_7F455300;
    case 0x7F455304u: goto label_7F455304;
    case 0x7F455308u: goto label_7F455308;
    case 0x7F45530Cu: goto label_7F45530C;
    case 0x7F455310u: goto label_7F455310;
    case 0x7F455314u: goto label_7F455314;
    case 0x7F455318u: goto label_7F455318;
    case 0x7F45531Cu: goto label_7F45531C;
    case 0x7F455320u: goto label_7F455320;
    case 0x7F455324u: goto label_7F455324;
    case 0x7F455328u: goto label_7F455328;
    case 0x7F45532Cu: goto label_7F45532C;
    case 0x7F455330u: goto label_7F455330;
    case 0x7F455334u: goto label_7F455334;
    case 0x7F455338u: goto label_7F455338;
    case 0x7F45533Cu: goto label_7F45533C;
    case 0x7F455340u: goto label_7F455340;
    case 0x7F455344u: goto label_7F455344;
    case 0x7F455348u: goto label_7F455348;
    case 0x7F45534Cu: goto label_7F45534C;
    case 0x7F455350u: goto label_7F455350;
    case 0x7F455354u: goto label_7F455354;
    case 0x7F455358u: goto label_7F455358;
    case 0x7F45535Cu: goto label_7F45535C;
    case 0x7F455360u: goto label_7F455360;
    case 0x7F455364u: goto label_7F455364;
    case 0x7F455368u: goto label_7F455368;
    case 0x7F45536Cu: goto label_7F45536C;
    case 0x7F455370u: goto label_7F455370;
    case 0x7F455374u: goto label_7F455374;
    case 0x7F455378u: goto label_7F455378;
    case 0x7F45537Cu: goto label_7F45537C;
    case 0x7F455380u: goto label_7F455380;
    case 0x7F455384u: goto label_7F455384;
    case 0x7F455388u: goto label_7F455388;
    case 0x7F45538Cu: goto label_7F45538C;
    case 0x7F455390u: goto label_7F455390;
    case 0x7F455394u: goto label_7F455394;
    case 0x7F455398u: goto label_7F455398;
    case 0x7F45539Cu: goto label_7F45539C;
    case 0x7F4553A0u: goto label_7F4553A0;
    case 0x7F4553A4u: goto label_7F4553A4;
    case 0x7F4553A8u: goto label_7F4553A8;
    case 0x7F4553ACu: goto label_7F4553AC;
    case 0x7F4553B0u: goto label_7F4553B0;
    case 0x7F4553B4u: goto label_7F4553B4;
    case 0x7F4553B8u: goto label_7F4553B8;
    case 0x7F4553BCu: goto label_7F4553BC;
    case 0x7F4553C0u: goto label_7F4553C0;
    case 0x7F4553C4u: goto label_7F4553C4;
    case 0x7F4553C8u: goto label_7F4553C8;
    case 0x7F4553CCu: goto label_7F4553CC;
    case 0x7F4553D0u: goto label_7F4553D0;
    case 0x7F4553D4u: goto label_7F4553D4;
    case 0x7F4553D8u: goto label_7F4553D8;
    case 0x7F4553DCu: goto label_7F4553DC;
    case 0x7F4553E0u: goto label_7F4553E0;
    case 0x7F4553E4u: goto label_7F4553E4;
    case 0x7F4553E8u: goto label_7F4553E8;
    case 0x7F4553ECu: goto label_7F4553EC;
    case 0x7F4553F0u: goto label_7F4553F0;
    case 0x7F4553F4u: goto label_7F4553F4;
    case 0x7F4553F8u: goto label_7F4553F8;
    case 0x7F4553FCu: goto label_7F4553FC;
    case 0x7F455400u: goto label_7F455400;
    case 0x7F455404u: goto label_7F455404;
    case 0x7F455408u: goto label_7F455408;
    case 0x7F45540Cu: goto label_7F45540C;
    case 0x7F455410u: goto label_7F455410;
    case 0x7F455414u: goto label_7F455414;
    case 0x7F455418u: goto label_7F455418;
    case 0x7F45541Cu: goto label_7F45541C;
    case 0x7F455420u: goto label_7F455420;
    case 0x7F455424u: goto label_7F455424;
    case 0x7F455428u: goto label_7F455428;
    case 0x7F45542Cu: goto label_7F45542C;
    case 0x7F455430u: goto label_7F455430;
    case 0x7F455434u: goto label_7F455434;
    case 0x7F455438u: goto label_7F455438;
    case 0x7F45543Cu: goto label_7F45543C;
    case 0x7F455440u: goto label_7F455440;
    case 0x7F455444u: goto label_7F455444;
    case 0x7F455448u: goto label_7F455448;
    case 0x7F45544Cu: goto label_7F45544C;
    case 0x7F455450u: goto label_7F455450;
    case 0x7F455454u: goto label_7F455454;
    case 0x7F455458u: goto label_7F455458;
    case 0x7F45545Cu: goto label_7F45545C;
    case 0x7F455460u: goto label_7F455460;
    case 0x7F455464u: goto label_7F455464;
    case 0x7F455468u: goto label_7F455468;
    case 0x7F45546Cu: goto label_7F45546C;
    case 0x7F455470u: goto label_7F455470;
    case 0x7F455474u: goto label_7F455474;
    case 0x7F455478u: goto label_7F455478;
    case 0x7F45547Cu: goto label_7F45547C;
    case 0x7F455480u: goto label_7F455480;
    case 0x7F455484u: goto label_7F455484;
    case 0x7F455488u: goto label_7F455488;
    case 0x7F45548Cu: goto label_7F45548C;
    case 0x7F455490u: goto label_7F455490;
    case 0x7F455494u: goto label_7F455494;
    case 0x7F455498u: goto label_7F455498;
    case 0x7F45549Cu: goto label_7F45549C;
    case 0x7F4554A0u: goto label_7F4554A0;
    case 0x7F4554A4u: goto label_7F4554A4;
    case 0x7F4554A8u: goto label_7F4554A8;
    case 0x7F4554ACu: goto label_7F4554AC;
    case 0x7F4554B0u: goto label_7F4554B0;
    case 0x7F4554B4u: goto label_7F4554B4;
    case 0x7F4554B8u: goto label_7F4554B8;
    case 0x7F4554BCu: goto label_7F4554BC;
    case 0x7F4554C0u: goto label_7F4554C0;
    case 0x7F4554C4u: goto label_7F4554C4;
    case 0x7F4554C8u: goto label_7F4554C8;
    case 0x7F4554CCu: goto label_7F4554CC;
    case 0x7F4554D0u: goto label_7F4554D0;
    case 0x7F4554D4u: goto label_7F4554D4;
    case 0x7F4554D8u: goto label_7F4554D8;
    case 0x7F4554DCu: goto label_7F4554DC;
    case 0x7F4554E0u: goto label_7F4554E0;
    case 0x7F4554E4u: goto label_7F4554E4;
    case 0x7F4554E8u: goto label_7F4554E8;
    case 0x7F4554ECu: goto label_7F4554EC;
    case 0x7F4554F0u: goto label_7F4554F0;
    case 0x7F4554F4u: goto label_7F4554F4;
    case 0x7F4554F8u: goto label_7F4554F8;
    case 0x7F4554FCu: goto label_7F4554FC;
    case 0x7F455500u: goto label_7F455500;
    case 0x7F455504u: goto label_7F455504;
    case 0x7F455508u: goto label_7F455508;
    case 0x7F45550Cu: goto label_7F45550C;
    case 0x7F455510u: goto label_7F455510;
    case 0x7F455514u: goto label_7F455514;
    case 0x7F455518u: goto label_7F455518;
    case 0x7F45551Cu: goto label_7F45551C;
    case 0x7F455520u: goto label_7F455520;
    case 0x7F455524u: goto label_7F455524;
    case 0x7F455528u: goto label_7F455528;
    case 0x7F45552Cu: goto label_7F45552C;
    case 0x7F455530u: goto label_7F455530;
    case 0x7F455534u: goto label_7F455534;
    case 0x7F455538u: goto label_7F455538;
    case 0x7F45553Cu: goto label_7F45553C;
    case 0x7F455540u: goto label_7F455540;
    case 0x7F455544u: goto label_7F455544;
    case 0x7F455548u: goto label_7F455548;
    case 0x7F45554Cu: goto label_7F45554C;
    case 0x7F455550u: goto label_7F455550;
    case 0x7F455554u: goto label_7F455554;
    case 0x7F455558u: goto label_7F455558;
    case 0x7F45555Cu: goto label_7F45555C;
    case 0x7F455560u: goto label_7F455560;
    case 0x7F455564u: goto label_7F455564;
    case 0x7F455568u: goto label_7F455568;
    case 0x7F45556Cu: goto label_7F45556C;
    case 0x7F455570u: goto label_7F455570;
    case 0x7F455574u: goto label_7F455574;
    case 0x7F455578u: goto label_7F455578;
    case 0x7F45557Cu: goto label_7F45557C;
    case 0x7F455580u: goto label_7F455580;
    case 0x7F455584u: goto label_7F455584;
    case 0x7F455588u: goto label_7F455588;
    case 0x7F45558Cu: goto label_7F45558C;
    case 0x7F455590u: goto label_7F455590;
    case 0x7F455594u: goto label_7F455594;
    case 0x7F455598u: goto label_7F455598;
    case 0x7F45559Cu: goto label_7F45559C;
    case 0x7F4555A0u: goto label_7F4555A0;
    case 0x7F4555A4u: goto label_7F4555A4;
    case 0x7F4555A8u: goto label_7F4555A8;
    case 0x7F4555ACu: goto label_7F4555AC;
    case 0x7F4555B0u: goto label_7F4555B0;
    case 0x7F4555B4u: goto label_7F4555B4;
    case 0x7F4555B8u: goto label_7F4555B8;
    case 0x7F4555BCu: goto label_7F4555BC;
    case 0x7F4555C0u: goto label_7F4555C0;
    case 0x7F4555C4u: goto label_7F4555C4;
    case 0x7F4555C8u: goto label_7F4555C8;
    case 0x7F4555CCu: goto label_7F4555CC;
    case 0x7F4555D0u: goto label_7F4555D0;
    case 0x7F4555D4u: goto label_7F4555D4;
    case 0x7F4555D8u: goto label_7F4555D8;
    case 0x7F4555DCu: goto label_7F4555DC;
    case 0x7F4555E0u: goto label_7F4555E0;
    case 0x7F4555E4u: goto label_7F4555E4;
    case 0x7F4555E8u: goto label_7F4555E8;
    case 0x7F4555ECu: goto label_7F4555EC;
    case 0x7F4555F0u: goto label_7F4555F0;
    case 0x7F4555F4u: goto label_7F4555F4;
    case 0x7F4555F8u: goto label_7F4555F8;
    case 0x7F4555FCu: goto label_7F4555FC;
    case 0x7F455600u: goto label_7F455600;
    case 0x7F455604u: goto label_7F455604;
    case 0x7F455608u: goto label_7F455608;
    case 0x7F45560Cu: goto label_7F45560C;
    case 0x7F455610u: goto label_7F455610;
    case 0x7F455614u: goto label_7F455614;
    case 0x7F455618u: goto label_7F455618;
    case 0x7F45561Cu: goto label_7F45561C;
    case 0x7F455620u: goto label_7F455620;
    case 0x7F455624u: goto label_7F455624;
    case 0x7F455628u: goto label_7F455628;
    case 0x7F45562Cu: goto label_7F45562C;
    case 0x7F455630u: goto label_7F455630;
    case 0x7F455634u: goto label_7F455634;
    case 0x7F455638u: goto label_7F455638;
    case 0x7F45563Cu: goto label_7F45563C;
    case 0x7F455640u: goto label_7F455640;
    case 0x7F455644u: goto label_7F455644;
    case 0x7F455648u: goto label_7F455648;
    case 0x7F45564Cu: goto label_7F45564C;
    case 0x7F455650u: goto label_7F455650;
    case 0x7F455654u: goto label_7F455654;
    case 0x7F455658u: goto label_7F455658;
    case 0x7F45565Cu: goto label_7F45565C;
    case 0x7F455660u: goto label_7F455660;
    case 0x7F455664u: goto label_7F455664;
    case 0x7F455668u: goto label_7F455668;
    case 0x7F45566Cu: goto label_7F45566C;
    case 0x7F455670u: goto label_7F455670;
    case 0x7F455674u: goto label_7F455674;
    case 0x7F455678u: goto label_7F455678;
    case 0x7F45567Cu: goto label_7F45567C;
    case 0x7F455680u: goto label_7F455680;
    case 0x7F455684u: goto label_7F455684;
    case 0x7F455688u: goto label_7F455688;
    case 0x7F45568Cu: goto label_7F45568C;
    case 0x7F455690u: goto label_7F455690;
    case 0x7F455694u: goto label_7F455694;
    case 0x7F455698u: goto label_7F455698;
    case 0x7F45569Cu: goto label_7F45569C;
    case 0x7F4556A0u: goto label_7F4556A0;
    case 0x7F4556A4u: goto label_7F4556A4;
    case 0x7F4556A8u: goto label_7F4556A8;
    case 0x7F4556ACu: goto label_7F4556AC;
    case 0x7F4556B0u: goto label_7F4556B0;
    case 0x7F4556B4u: goto label_7F4556B4;
    case 0x7F4556B8u: goto label_7F4556B8;
    case 0x7F4556BCu: goto label_7F4556BC;
    case 0x7F4556C0u: goto label_7F4556C0;
    case 0x7F4556C4u: goto label_7F4556C4;
    case 0x7F4556C8u: goto label_7F4556C8;
    case 0x7F4556CCu: goto label_7F4556CC;
    case 0x7F4556D0u: goto label_7F4556D0;
    case 0x7F4556D4u: goto label_7F4556D4;
    case 0x7F4556D8u: goto label_7F4556D8;
    case 0x7F4556DCu: goto label_7F4556DC;
    case 0x7F4556E0u: goto label_7F4556E0;
    case 0x7F4556E4u: goto label_7F4556E4;
    case 0x7F4556E8u: goto label_7F4556E8;
    case 0x7F4556ECu: goto label_7F4556EC;
    case 0x7F4556F0u: goto label_7F4556F0;
    case 0x7F4556F4u: goto label_7F4556F4;
    case 0x7F4556F8u: goto label_7F4556F8;
    case 0x7F4556FCu: goto label_7F4556FC;
    case 0x7F455700u: goto label_7F455700;
    case 0x7F455704u: goto label_7F455704;
    case 0x7F455708u: goto label_7F455708;
    case 0x7F45570Cu: goto label_7F45570C;
    case 0x7F455710u: goto label_7F455710;
    case 0x7F455714u: goto label_7F455714;
    case 0x7F455718u: goto label_7F455718;
    case 0x7F45571Cu: goto label_7F45571C;
    case 0x7F455720u: goto label_7F455720;
    case 0x7F455724u: goto label_7F455724;
    case 0x7F455728u: goto label_7F455728;
    case 0x7F45572Cu: goto label_7F45572C;
    case 0x7F455730u: goto label_7F455730;
    case 0x7F455734u: goto label_7F455734;
    case 0x7F455738u: goto label_7F455738;
    case 0x7F45573Cu: goto label_7F45573C;
    case 0x7F455740u: goto label_7F455740;
    case 0x7F455744u: goto label_7F455744;
    case 0x7F455748u: goto label_7F455748;
    case 0x7F45574Cu: goto label_7F45574C;
    case 0x7F455750u: goto label_7F455750;
    case 0x7F455754u: goto label_7F455754;
    case 0x7F455758u: goto label_7F455758;
    case 0x7F45575Cu: goto label_7F45575C;
    case 0x7F455760u: goto label_7F455760;
    case 0x7F455764u: goto label_7F455764;
    case 0x7F455768u: goto label_7F455768;
    case 0x7F45576Cu: goto label_7F45576C;
    case 0x7F455770u: goto label_7F455770;
    case 0x7F455774u: goto label_7F455774;
    case 0x7F455778u: goto label_7F455778;
    case 0x7F45577Cu: goto label_7F45577C;
    case 0x7F455780u: goto label_7F455780;
    case 0x7F455784u: goto label_7F455784;
    case 0x7F455788u: goto label_7F455788;
    case 0x7F45578Cu: goto label_7F45578C;
    case 0x7F455790u: goto label_7F455790;
    case 0x7F455794u: goto label_7F455794;
    case 0x7F455798u: goto label_7F455798;
    case 0x7F45579Cu: goto label_7F45579C;
    case 0x7F4557A0u: goto label_7F4557A0;
    case 0x7F4557A4u: goto label_7F4557A4;
    case 0x7F4557A8u: goto label_7F4557A8;
    case 0x7F4557ACu: goto label_7F4557AC;
    case 0x7F4557B0u: goto label_7F4557B0;
    case 0x7F4557B4u: goto label_7F4557B4;
    case 0x7F4557B8u: goto label_7F4557B8;
    case 0x7F4557BCu: goto label_7F4557BC;
    case 0x7F4557C0u: goto label_7F4557C0;
    case 0x7F4557C4u: goto label_7F4557C4;
    case 0x7F4557C8u: goto label_7F4557C8;
    case 0x7F4557CCu: goto label_7F4557CC;
    case 0x7F4557D0u: goto label_7F4557D0;
    case 0x7F4557D4u: goto label_7F4557D4;
    case 0x7F4557D8u: goto label_7F4557D8;
    case 0x7F4557DCu: goto label_7F4557DC;
    case 0x7F4557E0u: goto label_7F4557E0;
    case 0x7F4557E4u: goto label_7F4557E4;
    case 0x7F4557E8u: goto label_7F4557E8;
    case 0x7F4557ECu: goto label_7F4557EC;
    case 0x7F4557F0u: goto label_7F4557F0;
    case 0x7F4557F4u: goto label_7F4557F4;
    case 0x7F4557F8u: goto label_7F4557F8;
    case 0x7F4557FCu: goto label_7F4557FC;
    case 0x7F455800u: goto label_7F455800;
    case 0x7F455804u: goto label_7F455804;
    case 0x7F455808u: goto label_7F455808;
    case 0x7F45580Cu: goto label_7F45580C;
    case 0x7F455810u: goto label_7F455810;
    case 0x7F455814u: goto label_7F455814;
    case 0x7F455818u: goto label_7F455818;
    case 0x7F45581Cu: goto label_7F45581C;
    case 0x7F455820u: goto label_7F455820;
    case 0x7F455824u: goto label_7F455824;
    case 0x7F455828u: goto label_7F455828;
    case 0x7F45582Cu: goto label_7F45582C;
    case 0x7F455830u: goto label_7F455830;
    case 0x7F455834u: goto label_7F455834;
    case 0x7F455838u: goto label_7F455838;
    case 0x7F45583Cu: goto label_7F45583C;
    case 0x7F455840u: goto label_7F455840;
    case 0x7F455844u: goto label_7F455844;
    case 0x7F455848u: goto label_7F455848;
    case 0x7F45584Cu: goto label_7F45584C;
    case 0x7F455850u: goto label_7F455850;
    case 0x7F455854u: goto label_7F455854;
    case 0x7F455858u: goto label_7F455858;
    case 0x7F45585Cu: goto label_7F45585C;
    case 0x7F455860u: goto label_7F455860;
    case 0x7F455864u: goto label_7F455864;
    case 0x7F455868u: goto label_7F455868;
    case 0x7F45586Cu: goto label_7F45586C;
    case 0x7F455870u: goto label_7F455870;
    case 0x7F455874u: goto label_7F455874;
    case 0x7F455878u: goto label_7F455878;
    case 0x7F45587Cu: goto label_7F45587C;
    case 0x7F455880u: goto label_7F455880;
    case 0x7F455884u: goto label_7F455884;
    case 0x7F455888u: goto label_7F455888;
    case 0x7F45588Cu: goto label_7F45588C;
    case 0x7F455890u: goto label_7F455890;
    case 0x7F455894u: goto label_7F455894;
    case 0x7F455898u: goto label_7F455898;
    case 0x7F45589Cu: goto label_7F45589C;
    case 0x7F4558A0u: goto label_7F4558A0;
    case 0x7F4558A4u: goto label_7F4558A4;
    case 0x7F4558A8u: goto label_7F4558A8;
    case 0x7F4558ACu: goto label_7F4558AC;
    case 0x7F4558B0u: goto label_7F4558B0;
    case 0x7F4558B4u: goto label_7F4558B4;
    case 0x7F4558B8u: goto label_7F4558B8;
    case 0x7F4558BCu: goto label_7F4558BC;
    case 0x7F4558C0u: goto label_7F4558C0;
    case 0x7F4558C4u: goto label_7F4558C4;
    case 0x7F4558C8u: goto label_7F4558C8;
    case 0x7F4558CCu: goto label_7F4558CC;
    case 0x7F4558D0u: goto label_7F4558D0;
    case 0x7F4558D4u: goto label_7F4558D4;
    case 0x7F4558D8u: goto label_7F4558D8;
    case 0x7F4558DCu: goto label_7F4558DC;
    case 0x7F4558E0u: goto label_7F4558E0;
    case 0x7F4558E4u: goto label_7F4558E4;
    case 0x7F4558E8u: goto label_7F4558E8;
    case 0x7F4558ECu: goto label_7F4558EC;
    case 0x7F4558F0u: goto label_7F4558F0;
    case 0x7F4558F4u: goto label_7F4558F4;
    case 0x7F4558F8u: goto label_7F4558F8;
    case 0x7F4558FCu: goto label_7F4558FC;
    case 0x7F455900u: goto label_7F455900;
    case 0x7F455904u: goto label_7F455904;
    case 0x7F455908u: goto label_7F455908;
    case 0x7F45590Cu: goto label_7F45590C;
    case 0x7F455910u: goto label_7F455910;
    case 0x7F455914u: goto label_7F455914;
    case 0x7F455918u: goto label_7F455918;
    case 0x7F45591Cu: goto label_7F45591C;
    case 0x7F455920u: goto label_7F455920;
    case 0x7F455924u: goto label_7F455924;
    case 0x7F455928u: goto label_7F455928;
    case 0x7F45592Cu: goto label_7F45592C;
    case 0x7F455930u: goto label_7F455930;
    case 0x7F455934u: goto label_7F455934;
    case 0x7F455938u: goto label_7F455938;
    case 0x7F45593Cu: goto label_7F45593C;
    case 0x7F455940u: goto label_7F455940;
    case 0x7F455944u: goto label_7F455944;
    case 0x7F455948u: goto label_7F455948;
    case 0x7F45594Cu: goto label_7F45594C;
    case 0x7F455950u: goto label_7F455950;
    case 0x7F455954u: goto label_7F455954;
    case 0x7F455958u: goto label_7F455958;
    case 0x7F45595Cu: goto label_7F45595C;
    case 0x7F455960u: goto label_7F455960;
    case 0x7F455964u: goto label_7F455964;
    case 0x7F455968u: goto label_7F455968;
    case 0x7F45596Cu: goto label_7F45596C;
    case 0x7F455970u: goto label_7F455970;
    case 0x7F455974u: goto label_7F455974;
    case 0x7F455978u: goto label_7F455978;
    case 0x7F45597Cu: goto label_7F45597C;
    case 0x7F455980u: goto label_7F455980;
    case 0x7F455984u: goto label_7F455984;
    case 0x7F455988u: goto label_7F455988;
    case 0x7F45598Cu: goto label_7F45598C;
    case 0x7F455990u: goto label_7F455990;
    case 0x7F455994u: goto label_7F455994;
    case 0x7F455998u: goto label_7F455998;
    case 0x7F45599Cu: goto label_7F45599C;
    case 0x7F4559A0u: goto label_7F4559A0;
    case 0x7F4559A4u: goto label_7F4559A4;
    case 0x7F4559A8u: goto label_7F4559A8;
    case 0x7F4559ACu: goto label_7F4559AC;
    case 0x7F4559B0u: goto label_7F4559B0;
    case 0x7F4559B4u: goto label_7F4559B4;
    case 0x7F4559B8u: goto label_7F4559B8;
    case 0x7F4559BCu: goto label_7F4559BC;
    case 0x7F4559C0u: goto label_7F4559C0;
    case 0x7F4559C4u: goto label_7F4559C4;
    case 0x7F4559C8u: goto label_7F4559C8;
    case 0x7F4559CCu: goto label_7F4559CC;
    case 0x7F4559D0u: goto label_7F4559D0;
    case 0x7F4559D4u: goto label_7F4559D4;
    case 0x7F4559D8u: goto label_7F4559D8;
    case 0x7F4559DCu: goto label_7F4559DC;
    case 0x7F4559E0u: goto label_7F4559E0;
    case 0x7F4559E4u: goto label_7F4559E4;
    case 0x7F4559E8u: goto label_7F4559E8;
    case 0x7F4559ECu: goto label_7F4559EC;
    case 0x7F4559F0u: goto label_7F4559F0;
    case 0x7F4559F4u: goto label_7F4559F4;
    case 0x7F4559F8u: goto label_7F4559F8;
    case 0x7F4559FCu: goto label_7F4559FC;
    case 0x7F455A00u: goto label_7F455A00;
    case 0x7F455A04u: goto label_7F455A04;
    case 0x7F455A08u: goto label_7F455A08;
    case 0x7F455A0Cu: goto label_7F455A0C;
    case 0x7F455A10u: goto label_7F455A10;
    case 0x7F455A14u: goto label_7F455A14;
    case 0x7F455A18u: goto label_7F455A18;
    case 0x7F455A1Cu: goto label_7F455A1C;
    case 0x7F455A20u: goto label_7F455A20;
    case 0x7F455A24u: goto label_7F455A24;
    case 0x7F455A28u: goto label_7F455A28;
    case 0x7F455A2Cu: goto label_7F455A2C;
    case 0x7F455A30u: goto label_7F455A30;
    case 0x7F455A34u: goto label_7F455A34;
    case 0x7F455A38u: goto label_7F455A38;
    case 0x7F455A3Cu: goto label_7F455A3C;
    case 0x7F455A40u: goto label_7F455A40;
    case 0x7F455A44u: goto label_7F455A44;
    case 0x7F455A48u: goto label_7F455A48;
    case 0x7F455A4Cu: goto label_7F455A4C;
    case 0x7F455A50u: goto label_7F455A50;
    case 0x7F455A54u: goto label_7F455A54;
    case 0x7F455A58u: goto label_7F455A58;
    case 0x7F455A5Cu: goto label_7F455A5C;
    case 0x7F455A60u: goto label_7F455A60;
    case 0x7F455A64u: goto label_7F455A64;
    case 0x7F455A68u: goto label_7F455A68;
    case 0x7F455A6Cu: goto label_7F455A6C;
    case 0x7F455A70u: goto label_7F455A70;
    case 0x7F455A74u: goto label_7F455A74;
    case 0x7F455A78u: goto label_7F455A78;
    case 0x7F455A7Cu: goto label_7F455A7C;
    case 0x7F455A80u: goto label_7F455A80;
    case 0x7F455A84u: goto label_7F455A84;
    case 0x7F455A88u: goto label_7F455A88;
    case 0x7F455A8Cu: goto label_7F455A8C;
    case 0x7F455A90u: goto label_7F455A90;
    case 0x7F455A94u: goto label_7F455A94;
    case 0x7F455A98u: goto label_7F455A98;
    case 0x7F455A9Cu: goto label_7F455A9C;
    case 0x7F455AA0u: goto label_7F455AA0;
    case 0x7F455AA4u: goto label_7F455AA4;
    case 0x7F455AA8u: goto label_7F455AA8;
    case 0x7F455AACu: goto label_7F455AAC;
    case 0x7F455AB0u: goto label_7F455AB0;
    case 0x7F455AB4u: goto label_7F455AB4;
    case 0x7F455AB8u: goto label_7F455AB8;
    case 0x7F455ABCu: goto label_7F455ABC;
    case 0x7F455AC0u: goto label_7F455AC0;
    case 0x7F455AC4u: goto label_7F455AC4;
    case 0x7F455AC8u: goto label_7F455AC8;
    case 0x7F455ACCu: goto label_7F455ACC;
    case 0x7F455AD0u: goto label_7F455AD0;
    case 0x7F455AD4u: goto label_7F455AD4;
    case 0x7F455AD8u: goto label_7F455AD8;
    case 0x7F455ADCu: goto label_7F455ADC;
    case 0x7F455AE0u: goto label_7F455AE0;
    case 0x7F455AE4u: goto label_7F455AE4;
    case 0x7F455AE8u: goto label_7F455AE8;
    case 0x7F455AECu: goto label_7F455AEC;
    case 0x7F455AF0u: goto label_7F455AF0;
    case 0x7F455AF4u: goto label_7F455AF4;
    case 0x7F455AF8u: goto label_7F455AF8;
    case 0x7F455AFCu: goto label_7F455AFC;
    case 0x7F455B00u: goto label_7F455B00;
    case 0x7F455B04u: goto label_7F455B04;
    case 0x7F455B08u: goto label_7F455B08;
    case 0x7F455B0Cu: goto label_7F455B0C;
    case 0x7F455B10u: goto label_7F455B10;
    case 0x7F455B14u: goto label_7F455B14;
    case 0x7F455B18u: goto label_7F455B18;
    case 0x7F455B1Cu: goto label_7F455B1C;
    case 0x7F455B20u: goto label_7F455B20;
    case 0x7F455B24u: goto label_7F455B24;
    case 0x7F455B28u: goto label_7F455B28;
    case 0x7F455B2Cu: goto label_7F455B2C;
    case 0x7F455B30u: goto label_7F455B30;
    case 0x7F455B34u: goto label_7F455B34;
    case 0x7F455B38u: goto label_7F455B38;
    case 0x7F455B3Cu: goto label_7F455B3C;
    case 0x7F455B40u: goto label_7F455B40;
    case 0x7F455B44u: goto label_7F455B44;
    case 0x7F455B48u: goto label_7F455B48;
    case 0x7F455B4Cu: goto label_7F455B4C;
    case 0x7F455B50u: goto label_7F455B50;
    case 0x7F455B54u: goto label_7F455B54;
    case 0x7F455B58u: goto label_7F455B58;
    case 0x7F455B5Cu: goto label_7F455B5C;
    case 0x7F455B60u: goto label_7F455B60;
    case 0x7F455B64u: goto label_7F455B64;
    case 0x7F455B68u: goto label_7F455B68;
    case 0x7F455B6Cu: goto label_7F455B6C;
    case 0x7F455B70u: goto label_7F455B70;
    case 0x7F455B74u: goto label_7F455B74;
    case 0x7F455B78u: goto label_7F455B78;
    case 0x7F455B7Cu: goto label_7F455B7C;
    case 0x7F455B80u: goto label_7F455B80;
    case 0x7F455B84u: goto label_7F455B84;
    case 0x7F455B88u: goto label_7F455B88;
    case 0x7F455B8Cu: goto label_7F455B8C;
    case 0x7F455B90u: goto label_7F455B90;
    case 0x7F455B94u: goto label_7F455B94;
    case 0x7F455B98u: goto label_7F455B98;
    case 0x7F455B9Cu: goto label_7F455B9C;
    case 0x7F455BA0u: goto label_7F455BA0;
    case 0x7F455BA4u: goto label_7F455BA4;
    case 0x7F455BA8u: goto label_7F455BA8;
    case 0x7F455BACu: goto label_7F455BAC;
    case 0x7F455BB0u: goto label_7F455BB0;
    case 0x7F455BB4u: goto label_7F455BB4;
    case 0x7F455BB8u: goto label_7F455BB8;
    case 0x7F455BBCu: goto label_7F455BBC;
    case 0x7F455BC0u: goto label_7F455BC0;
    case 0x7F455BC4u: goto label_7F455BC4;
    case 0x7F455BC8u: goto label_7F455BC8;
    case 0x7F455BCCu: goto label_7F455BCC;
    case 0x7F455BD0u: goto label_7F455BD0;
    case 0x7F455BD4u: goto label_7F455BD4;
    case 0x7F455BD8u: goto label_7F455BD8;
    case 0x7F455BDCu: goto label_7F455BDC;
    case 0x7F455BE0u: goto label_7F455BE0;
    case 0x7F455BE4u: goto label_7F455BE4;
    case 0x7F455BE8u: goto label_7F455BE8;
    case 0x7F455BECu: goto label_7F455BEC;
    case 0x7F455BF0u: goto label_7F455BF0;
    case 0x7F455BF4u: goto label_7F455BF4;
    case 0x7F455BF8u: goto label_7F455BF8;
    case 0x7F455BFCu: goto label_7F455BFC;
    case 0x7F455C00u: goto label_7F455C00;
    case 0x7F455C04u: goto label_7F455C04;
    case 0x7F455C08u: goto label_7F455C08;
    case 0x7F455C0Cu: goto label_7F455C0C;
    case 0x7F455C10u: goto label_7F455C10;
    case 0x7F455C14u: goto label_7F455C14;
    case 0x7F455C18u: goto label_7F455C18;
    case 0x7F455C1Cu: goto label_7F455C1C;
    case 0x7F455C20u: goto label_7F455C20;
    case 0x7F455C24u: goto label_7F455C24;
    case 0x7F455C28u: goto label_7F455C28;
    case 0x7F455C2Cu: goto label_7F455C2C;
    case 0x7F455C30u: goto label_7F455C30;
    case 0x7F455C34u: goto label_7F455C34;
    case 0x7F455C38u: goto label_7F455C38;
    case 0x7F455C3Cu: goto label_7F455C3C;
    case 0x7F455C40u: goto label_7F455C40;
    case 0x7F455C44u: goto label_7F455C44;
    case 0x7F455C48u: goto label_7F455C48;
    case 0x7F455C4Cu: goto label_7F455C4C;
    case 0x7F455C50u: goto label_7F455C50;
    case 0x7F455C54u: goto label_7F455C54;
    case 0x7F455C58u: goto label_7F455C58;
    case 0x7F455C5Cu: goto label_7F455C5C;
    case 0x7F455C60u: goto label_7F455C60;
    case 0x7F455C64u: goto label_7F455C64;
    case 0x7F455C68u: goto label_7F455C68;
    case 0x7F455C6Cu: goto label_7F455C6C;
    case 0x7F455C70u: goto label_7F455C70;
    case 0x7F455C74u: goto label_7F455C74;
    case 0x7F455C78u: goto label_7F455C78;
    case 0x7F455C7Cu: goto label_7F455C7C;
    case 0x7F455C80u: goto label_7F455C80;
    case 0x7F455C84u: goto label_7F455C84;
    case 0x7F455C88u: goto label_7F455C88;
    case 0x7F455C8Cu: goto label_7F455C8C;
    case 0x7F455C90u: goto label_7F455C90;
    case 0x7F455C94u: goto label_7F455C94;
    case 0x7F455C98u: goto label_7F455C98;
    case 0x7F455C9Cu: goto label_7F455C9C;
    case 0x7F455CA0u: goto label_7F455CA0;
    case 0x7F455CA4u: goto label_7F455CA4;
    case 0x7F455CA8u: goto label_7F455CA8;
    case 0x7F455CACu: goto label_7F455CAC;
    case 0x7F455CB0u: goto label_7F455CB0;
    case 0x7F455CB4u: goto label_7F455CB4;
    case 0x7F455CB8u: goto label_7F455CB8;
    case 0x7F455CBCu: goto label_7F455CBC;
    case 0x7F455CC0u: goto label_7F455CC0;
    case 0x7F455CC4u: goto label_7F455CC4;
    case 0x7F455CC8u: goto label_7F455CC8;
    case 0x7F455CCCu: goto label_7F455CCC;
    case 0x7F455CD0u: goto label_7F455CD0;
    case 0x7F455CD4u: goto label_7F455CD4;
    case 0x7F455CD8u: goto label_7F455CD8;
    case 0x7F455CDCu: goto label_7F455CDC;
    case 0x7F455CE0u: goto label_7F455CE0;
    case 0x7F455CE4u: goto label_7F455CE4;
    case 0x7F455CE8u: goto label_7F455CE8;
    case 0x7F455CECu: goto label_7F455CEC;
    case 0x7F455CF0u: goto label_7F455CF0;
    case 0x7F455CF4u: goto label_7F455CF4;
    case 0x7F455CF8u: goto label_7F455CF8;
    case 0x7F455CFCu: goto label_7F455CFC;
    case 0x7F455D00u: goto label_7F455D00;
    case 0x7F455D04u: goto label_7F455D04;
    case 0x7F455D08u: goto label_7F455D08;
    case 0x7F455D0Cu: goto label_7F455D0C;
    case 0x7F455D10u: goto label_7F455D10;
    case 0x7F455D14u: goto label_7F455D14;
    case 0x7F455D18u: goto label_7F455D18;
    case 0x7F455D1Cu: goto label_7F455D1C;
    case 0x7F455D20u: goto label_7F455D20;
    case 0x7F455D24u: goto label_7F455D24;
    case 0x7F455D28u: goto label_7F455D28;
    case 0x7F455D2Cu: goto label_7F455D2C;
    case 0x7F455D30u: goto label_7F455D30;
    case 0x7F455D34u: goto label_7F455D34;
    case 0x7F455D38u: goto label_7F455D38;
    case 0x7F455D3Cu: goto label_7F455D3C;
    case 0x7F455D40u: goto label_7F455D40;
    case 0x7F455D44u: goto label_7F455D44;
    case 0x7F455D48u: goto label_7F455D48;
    case 0x7F455D4Cu: goto label_7F455D4C;
    case 0x7F455D50u: goto label_7F455D50;
    case 0x7F455D54u: goto label_7F455D54;
    case 0x7F455D58u: goto label_7F455D58;
    case 0x7F455D5Cu: goto label_7F455D5C;
    case 0x7F455D60u: goto label_7F455D60;
    case 0x7F455D64u: goto label_7F455D64;
    case 0x7F455D68u: goto label_7F455D68;
    case 0x7F455D6Cu: goto label_7F455D6C;
    case 0x7F455D70u: goto label_7F455D70;
    case 0x7F455D74u: goto label_7F455D74;
    case 0x7F455D78u: goto label_7F455D78;
    case 0x7F455D7Cu: goto label_7F455D7C;
    case 0x7F455D80u: goto label_7F455D80;
    case 0x7F455D84u: goto label_7F455D84;
    case 0x7F455D88u: goto label_7F455D88;
    case 0x7F455D8Cu: goto label_7F455D8C;
    case 0x7F455D90u: goto label_7F455D90;
    case 0x7F455D94u: goto label_7F455D94;
    case 0x7F455D98u: goto label_7F455D98;
    case 0x7F455D9Cu: goto label_7F455D9C;
    case 0x7F455DA0u: goto label_7F455DA0;
    case 0x7F455DA4u: goto label_7F455DA4;
    case 0x7F455DA8u: goto label_7F455DA8;
    case 0x7F455DACu: goto label_7F455DAC;
    case 0x7F455DB0u: goto label_7F455DB0;
    case 0x7F455DB4u: goto label_7F455DB4;
    case 0x7F455DB8u: goto label_7F455DB8;
    case 0x7F455DBCu: goto label_7F455DBC;
    case 0x7F455DC0u: goto label_7F455DC0;
    case 0x7F455DC4u: goto label_7F455DC4;
    case 0x7F455DC8u: goto label_7F455DC8;
    case 0x7F455DCCu: goto label_7F455DCC;
    case 0x7F455DD0u: goto label_7F455DD0;
    case 0x7F455DD4u: goto label_7F455DD4;
    case 0x7F455DD8u: goto label_7F455DD8;
    case 0x7F455DDCu: goto label_7F455DDC;
    case 0x7F455DE0u: goto label_7F455DE0;
    case 0x7F455DE4u: goto label_7F455DE4;
    case 0x7F455DE8u: goto label_7F455DE8;
    case 0x7F455DECu: goto label_7F455DEC;
    case 0x7F455DF0u: goto label_7F455DF0;
    case 0x7F455DF4u: goto label_7F455DF4;
    case 0x7F455DF8u: goto label_7F455DF8;
    case 0x7F455DFCu: goto label_7F455DFC;
    case 0x7F455E00u: goto label_7F455E00;
    case 0x7F455E04u: goto label_7F455E04;
    case 0x7F455E08u: goto label_7F455E08;
    case 0x7F455E0Cu: goto label_7F455E0C;
    case 0x7F455E10u: goto label_7F455E10;
    case 0x7F455E14u: goto label_7F455E14;
    case 0x7F455E18u: goto label_7F455E18;
    case 0x7F455E1Cu: goto label_7F455E1C;
    case 0x7F455E20u: goto label_7F455E20;
    case 0x7F455E24u: goto label_7F455E24;
    case 0x7F455E28u: goto label_7F455E28;
    case 0x7F455E2Cu: goto label_7F455E2C;
    case 0x7F455E30u: goto label_7F455E30;
    case 0x7F455E34u: goto label_7F455E34;
    case 0x7F455E38u: goto label_7F455E38;
    case 0x7F455E3Cu: goto label_7F455E3C;
    case 0x7F455E40u: goto label_7F455E40;
    case 0x7F455E44u: goto label_7F455E44;
    case 0x7F455E48u: goto label_7F455E48;
    case 0x7F455E4Cu: goto label_7F455E4C;
    case 0x7F455E50u: goto label_7F455E50;
    case 0x7F455E54u: goto label_7F455E54;
    case 0x7F455E58u: goto label_7F455E58;
    case 0x7F455E5Cu: goto label_7F455E5C;
    case 0x7F455E60u: goto label_7F455E60;
    case 0x7F455E64u: goto label_7F455E64;
    case 0x7F455E68u: goto label_7F455E68;
    case 0x7F455E6Cu: goto label_7F455E6C;
    case 0x7F455E70u: goto label_7F455E70;
    case 0x7F455E74u: goto label_7F455E74;
    case 0x7F455E78u: goto label_7F455E78;
    case 0x7F455E7Cu: goto label_7F455E7C;
    case 0x7F455E80u: goto label_7F455E80;
    case 0x7F455E84u: goto label_7F455E84;
    case 0x7F455E88u: goto label_7F455E88;
    case 0x7F455E8Cu: goto label_7F455E8C;
    case 0x7F455E90u: goto label_7F455E90;
    case 0x7F455E94u: goto label_7F455E94;
    case 0x7F455E98u: goto label_7F455E98;
    case 0x7F455E9Cu: goto label_7F455E9C;
    case 0x7F455EA0u: goto label_7F455EA0;
    case 0x7F455EA4u: goto label_7F455EA4;
    case 0x7F455EA8u: goto label_7F455EA8;
    case 0x7F455EACu: goto label_7F455EAC;
    case 0x7F455EB0u: goto label_7F455EB0;
    case 0x7F455EB4u: goto label_7F455EB4;
    case 0x7F455EB8u: goto label_7F455EB8;
    case 0x7F455EBCu: goto label_7F455EBC;
    case 0x7F455EC0u: goto label_7F455EC0;
    case 0x7F455EC4u: goto label_7F455EC4;
    case 0x7F455EC8u: goto label_7F455EC8;
    case 0x7F455ECCu: goto label_7F455ECC;
    case 0x7F455ED0u: goto label_7F455ED0;
    case 0x7F455ED4u: goto label_7F455ED4;
    case 0x7F455ED8u: goto label_7F455ED8;
    case 0x7F455EDCu: goto label_7F455EDC;
    case 0x7F455EE0u: goto label_7F455EE0;
    case 0x7F455EE4u: goto label_7F455EE4;
    case 0x7F455EE8u: goto label_7F455EE8;
    case 0x7F455EECu: goto label_7F455EEC;
    case 0x7F455EF0u: goto label_7F455EF0;
    case 0x7F455EF4u: goto label_7F455EF4;
    case 0x7F455EF8u: goto label_7F455EF8;
    case 0x7F455EFCu: goto label_7F455EFC;
    case 0x7F455F00u: goto label_7F455F00;
    case 0x7F455F04u: goto label_7F455F04;
    case 0x7F455F08u: goto label_7F455F08;
    case 0x7F455F0Cu: goto label_7F455F0C;
    case 0x7F455F10u: goto label_7F455F10;
    case 0x7F455F14u: goto label_7F455F14;
    case 0x7F455F18u: goto label_7F455F18;
    case 0x7F455F1Cu: goto label_7F455F1C;
    case 0x7F455F20u: goto label_7F455F20;
    case 0x7F455F24u: goto label_7F455F24;
    case 0x7F455F28u: goto label_7F455F28;
    case 0x7F455F2Cu: goto label_7F455F2C;
    case 0x7F455F30u: goto label_7F455F30;
    case 0x7F455F34u: goto label_7F455F34;
    case 0x7F455F38u: goto label_7F455F38;
    case 0x7F455F3Cu: goto label_7F455F3C;
    case 0x7F455F40u: goto label_7F455F40;
    case 0x7F455F44u: goto label_7F455F44;
    case 0x7F455F48u: goto label_7F455F48;
    case 0x7F455F4Cu: goto label_7F455F4C;
    case 0x7F455F50u: goto label_7F455F50;
    case 0x7F455F54u: goto label_7F455F54;
    case 0x7F455F58u: goto label_7F455F58;
    case 0x7F455F5Cu: goto label_7F455F5C;
    case 0x7F455F60u: goto label_7F455F60;
    case 0x7F455F64u: goto label_7F455F64;
    case 0x7F455F68u: goto label_7F455F68;
    case 0x7F455F6Cu: goto label_7F455F6C;
    case 0x7F455F70u: goto label_7F455F70;
    case 0x7F455F74u: goto label_7F455F74;
    case 0x7F455F78u: goto label_7F455F78;
    case 0x7F455F7Cu: goto label_7F455F7C;
    case 0x7F455F80u: goto label_7F455F80;
    case 0x7F455F84u: goto label_7F455F84;
    case 0x7F455F88u: goto label_7F455F88;
    case 0x7F455F8Cu: goto label_7F455F8C;
    case 0x7F455F90u: goto label_7F455F90;
    case 0x7F455F94u: goto label_7F455F94;
    case 0x7F455F98u: goto label_7F455F98;
    case 0x7F455F9Cu: goto label_7F455F9C;
    case 0x7F455FA0u: goto label_7F455FA0;
    case 0x7F455FA4u: goto label_7F455FA4;
    case 0x7F455FA8u: goto label_7F455FA8;
    case 0x7F455FACu: goto label_7F455FAC;
    case 0x7F455FB0u: goto label_7F455FB0;
    case 0x7F455FB4u: goto label_7F455FB4;
    case 0x7F455FB8u: goto label_7F455FB8;
    case 0x7F455FBCu: goto label_7F455FBC;
    case 0x7F455FC0u: goto label_7F455FC0;
    case 0x7F455FC4u: goto label_7F455FC4;
    case 0x7F455FC8u: goto label_7F455FC8;
    case 0x7F455FCCu: goto label_7F455FCC;
    case 0x7F455FD0u: goto label_7F455FD0;
    case 0x7F455FD4u: goto label_7F455FD4;
    case 0x7F455FD8u: goto label_7F455FD8;
    case 0x7F455FDCu: goto label_7F455FDC;
    case 0x7F455FE0u: goto label_7F455FE0;
    case 0x7F455FE4u: goto label_7F455FE4;
    case 0x7F455FE8u: goto label_7F455FE8;
    case 0x7F455FECu: goto label_7F455FEC;
    case 0x7F455FF0u: goto label_7F455FF0;
    case 0x7F455FF4u: goto label_7F455FF4;
    case 0x7F455FF8u: goto label_7F455FF8;
    case 0x7F455FFCu: goto label_7F455FFC;
    case 0x7F456000u: goto label_7F456000;
    case 0x7F456004u: goto label_7F456004;
    case 0x7F456008u: goto label_7F456008;
    case 0x7F45600Cu: goto label_7F45600C;
    case 0x7F456010u: goto label_7F456010;
    case 0x7F456014u: goto label_7F456014;
    case 0x7F456018u: goto label_7F456018;
    case 0x7F45601Cu: goto label_7F45601C;
    case 0x7F456020u: goto label_7F456020;
    case 0x7F456024u: goto label_7F456024;
    case 0x7F456028u: goto label_7F456028;
    case 0x7F45602Cu: goto label_7F45602C;
    case 0x7F456030u: goto label_7F456030;
    case 0x7F456034u: goto label_7F456034;
    case 0x7F456038u: goto label_7F456038;
    case 0x7F45603Cu: goto label_7F45603C;
    case 0x7F456040u: goto label_7F456040;
    case 0x7F456044u: goto label_7F456044;
    case 0x7F456048u: goto label_7F456048;
    case 0x7F45604Cu: goto label_7F45604C;
    case 0x7F456050u: goto label_7F456050;
    case 0x7F456054u: goto label_7F456054;
    case 0x7F456058u: goto label_7F456058;
    case 0x7F45605Cu: goto label_7F45605C;
    case 0x7F456060u: goto label_7F456060;
    case 0x7F456064u: goto label_7F456064;
    case 0x7F456068u: goto label_7F456068;
    case 0x7F45606Cu: goto label_7F45606C;
    case 0x7F456070u: goto label_7F456070;
    case 0x7F456074u: goto label_7F456074;
    case 0x7F456078u: goto label_7F456078;
    case 0x7F45607Cu: goto label_7F45607C;
    case 0x7F456080u: goto label_7F456080;
    case 0x7F456084u: goto label_7F456084;
    case 0x7F456088u: goto label_7F456088;
    case 0x7F45608Cu: goto label_7F45608C;
    case 0x7F456090u: goto label_7F456090;
    case 0x7F456094u: goto label_7F456094;
    case 0x7F456098u: goto label_7F456098;
    case 0x7F45609Cu: goto label_7F45609C;
    case 0x7F4560A0u: goto label_7F4560A0;
    case 0x7F4560A4u: goto label_7F4560A4;
    case 0x7F4560A8u: goto label_7F4560A8;
    case 0x7F4560ACu: goto label_7F4560AC;
    case 0x7F4560B0u: goto label_7F4560B0;
    case 0x7F4560B4u: goto label_7F4560B4;
    case 0x7F4560B8u: goto label_7F4560B8;
    case 0x7F4560BCu: goto label_7F4560BC;
    case 0x7F4560C0u: goto label_7F4560C0;
    case 0x7F4560C4u: goto label_7F4560C4;
    case 0x7F4560C8u: goto label_7F4560C8;
    case 0x7F4560CCu: goto label_7F4560CC;
    case 0x7F4560D0u: goto label_7F4560D0;
    case 0x7F4560D4u: goto label_7F4560D4;
    case 0x7F4560D8u: goto label_7F4560D8;
    case 0x7F4560DCu: goto label_7F4560DC;
    case 0x7F4560E0u: goto label_7F4560E0;
    case 0x7F4560E4u: goto label_7F4560E4;
    case 0x7F4560E8u: goto label_7F4560E8;
    case 0x7F4560ECu: goto label_7F4560EC;
    case 0x7F4560F0u: goto label_7F4560F0;
    case 0x7F4560F4u: goto label_7F4560F4;
    case 0x7F4560F8u: goto label_7F4560F8;
    case 0x7F4560FCu: goto label_7F4560FC;
    case 0x7F456100u: goto label_7F456100;
    case 0x7F456104u: goto label_7F456104;
    case 0x7F456108u: goto label_7F456108;
    case 0x7F45610Cu: goto label_7F45610C;
    case 0x7F456110u: goto label_7F456110;
    case 0x7F456114u: goto label_7F456114;
    case 0x7F456118u: goto label_7F456118;
    case 0x7F45611Cu: goto label_7F45611C;
    case 0x7F456120u: goto label_7F456120;
    case 0x7F456124u: goto label_7F456124;
    case 0x7F456128u: goto label_7F456128;
    case 0x7F45612Cu: goto label_7F45612C;
    case 0x7F456130u: goto label_7F456130;
    case 0x7F456134u: goto label_7F456134;
    case 0x7F456138u: goto label_7F456138;
    case 0x7F45613Cu: goto label_7F45613C;
    case 0x7F456140u: goto label_7F456140;
    case 0x7F456144u: goto label_7F456144;
    case 0x7F456148u: goto label_7F456148;
    case 0x7F45614Cu: goto label_7F45614C;
    case 0x7F456150u: goto label_7F456150;
    case 0x7F456154u: goto label_7F456154;
    case 0x7F456158u: goto label_7F456158;
    case 0x7F45615Cu: goto label_7F45615C;
    case 0x7F456160u: goto label_7F456160;
    case 0x7F456164u: goto label_7F456164;
    case 0x7F456168u: goto label_7F456168;
    case 0x7F45616Cu: goto label_7F45616C;
    case 0x7F456170u: goto label_7F456170;
    case 0x7F456174u: goto label_7F456174;
    case 0x7F456178u: goto label_7F456178;
    case 0x7F45617Cu: goto label_7F45617C;
    case 0x7F456180u: goto label_7F456180;
    case 0x7F456184u: goto label_7F456184;
    case 0x7F456188u: goto label_7F456188;
    case 0x7F45618Cu: goto label_7F45618C;
    case 0x7F456190u: goto label_7F456190;
    case 0x7F456194u: goto label_7F456194;
    case 0x7F456198u: goto label_7F456198;
    case 0x7F45619Cu: goto label_7F45619C;
    case 0x7F4561A0u: goto label_7F4561A0;
    case 0x7F4561A4u: goto label_7F4561A4;
    case 0x7F4561A8u: goto label_7F4561A8;
    case 0x7F4561ACu: goto label_7F4561AC;
    case 0x7F4561B0u: goto label_7F4561B0;
    case 0x7F4561B4u: goto label_7F4561B4;
    case 0x7F4561B8u: goto label_7F4561B8;
    case 0x7F4561BCu: goto label_7F4561BC;
    case 0x7F4561C0u: goto label_7F4561C0;
    case 0x7F4561C4u: goto label_7F4561C4;
    case 0x7F4561C8u: goto label_7F4561C8;
    case 0x7F4561CCu: goto label_7F4561CC;
    case 0x7F4561D0u: goto label_7F4561D0;
    case 0x7F4561D4u: goto label_7F4561D4;
    case 0x7F4561D8u: goto label_7F4561D8;
    case 0x7F4561DCu: goto label_7F4561DC;
    case 0x7F4561E0u: goto label_7F4561E0;
    case 0x7F4561E4u: goto label_7F4561E4;
    case 0x7F4561E8u: goto label_7F4561E8;
    case 0x7F4561ECu: goto label_7F4561EC;
    case 0x7F4561F0u: goto label_7F4561F0;
    case 0x7F4561F4u: goto label_7F4561F4;
    case 0x7F4561F8u: goto label_7F4561F8;
    case 0x7F4561FCu: goto label_7F4561FC;
    case 0x7F456200u: goto label_7F456200;
    case 0x7F456204u: goto label_7F456204;
    case 0x7F456208u: goto label_7F456208;
    case 0x7F45620Cu: goto label_7F45620C;
    case 0x7F456210u: goto label_7F456210;
    case 0x7F456214u: goto label_7F456214;
    case 0x7F456218u: goto label_7F456218;
    case 0x7F45621Cu: goto label_7F45621C;
    case 0x7F456220u: goto label_7F456220;
    case 0x7F456224u: goto label_7F456224;
    case 0x7F456228u: goto label_7F456228;
    case 0x7F45622Cu: goto label_7F45622C;
    case 0x7F456230u: goto label_7F456230;
    case 0x7F456234u: goto label_7F456234;
    case 0x7F456238u: goto label_7F456238;
    case 0x7F45623Cu: goto label_7F45623C;
    case 0x7F456240u: goto label_7F456240;
    case 0x7F456244u: goto label_7F456244;
    case 0x7F456248u: goto label_7F456248;
    case 0x7F45624Cu: goto label_7F45624C;
    case 0x7F456250u: goto label_7F456250;
    case 0x7F456254u: goto label_7F456254;
    case 0x7F456258u: goto label_7F456258;
    case 0x7F45625Cu: goto label_7F45625C;
    case 0x7F456260u: goto label_7F456260;
    case 0x7F456264u: goto label_7F456264;
    case 0x7F456268u: goto label_7F456268;
    case 0x7F45626Cu: goto label_7F45626C;
    case 0x7F456270u: goto label_7F456270;
    case 0x7F456274u: goto label_7F456274;
    case 0x7F456278u: goto label_7F456278;
    case 0x7F45627Cu: goto label_7F45627C;
    case 0x7F456280u: goto label_7F456280;
    case 0x7F456284u: goto label_7F456284;
    case 0x7F456288u: goto label_7F456288;
    case 0x7F45628Cu: goto label_7F45628C;
    case 0x7F456290u: goto label_7F456290;
    case 0x7F456294u: goto label_7F456294;
    case 0x7F456298u: goto label_7F456298;
    case 0x7F45629Cu: goto label_7F45629C;
    case 0x7F4562A0u: goto label_7F4562A0;
    case 0x7F4562A4u: goto label_7F4562A4;
    case 0x7F4562A8u: goto label_7F4562A8;
    case 0x7F4562ACu: goto label_7F4562AC;
    case 0x7F4562B0u: goto label_7F4562B0;
    case 0x7F4562B4u: goto label_7F4562B4;
    case 0x7F4562B8u: goto label_7F4562B8;
    case 0x7F4562BCu: goto label_7F4562BC;
    case 0x7F4562C0u: goto label_7F4562C0;
    case 0x7F4562C4u: goto label_7F4562C4;
    case 0x7F4562C8u: goto label_7F4562C8;
    case 0x7F4562CCu: goto label_7F4562CC;
    case 0x7F4562D0u: goto label_7F4562D0;
    case 0x7F4562D4u: goto label_7F4562D4;
    case 0x7F4562D8u: goto label_7F4562D8;
    case 0x7F4562DCu: goto label_7F4562DC;
    case 0x7F4562E0u: goto label_7F4562E0;
    case 0x7F4562E4u: goto label_7F4562E4;
    case 0x7F4562E8u: goto label_7F4562E8;
    case 0x7F4562ECu: goto label_7F4562EC;
    case 0x7F4562F0u: goto label_7F4562F0;
    case 0x7F4562F4u: goto label_7F4562F4;
    case 0x7F4562F8u: goto label_7F4562F8;
    case 0x7F4562FCu: goto label_7F4562FC;
    case 0x7F456300u: goto label_7F456300;
    case 0x7F456304u: goto label_7F456304;
    case 0x7F456308u: goto label_7F456308;
    case 0x7F45630Cu: goto label_7F45630C;
    case 0x7F456310u: goto label_7F456310;
    case 0x7F456314u: goto label_7F456314;
    case 0x7F456318u: goto label_7F456318;
    case 0x7F45631Cu: goto label_7F45631C;
    case 0x7F456320u: goto label_7F456320;
    case 0x7F456324u: goto label_7F456324;
    case 0x7F456328u: goto label_7F456328;
    case 0x7F45632Cu: goto label_7F45632C;
    case 0x7F456330u: goto label_7F456330;
    case 0x7F456334u: goto label_7F456334;
    case 0x7F456338u: goto label_7F456338;
    case 0x7F45633Cu: goto label_7F45633C;
    case 0x7F456340u: goto label_7F456340;
    case 0x7F456344u: goto label_7F456344;
    case 0x7F456348u: goto label_7F456348;
    case 0x7F45634Cu: goto label_7F45634C;
    case 0x7F456350u: goto label_7F456350;
    case 0x7F456354u: goto label_7F456354;
    case 0x7F456358u: goto label_7F456358;
    case 0x7F45635Cu: goto label_7F45635C;
    case 0x7F456360u: goto label_7F456360;
    case 0x7F456364u: goto label_7F456364;
    case 0x7F456368u: goto label_7F456368;
    case 0x7F45636Cu: goto label_7F45636C;
    case 0x7F456370u: goto label_7F456370;
    case 0x7F456374u: goto label_7F456374;
    case 0x7F456378u: goto label_7F456378;
    case 0x7F45637Cu: goto label_7F45637C;
    case 0x7F456380u: goto label_7F456380;
    case 0x7F456384u: goto label_7F456384;
    case 0x7F456388u: goto label_7F456388;
    case 0x7F45638Cu: goto label_7F45638C;
    case 0x7F456390u: goto label_7F456390;
    case 0x7F456394u: goto label_7F456394;
    case 0x7F456398u: goto label_7F456398;
    case 0x7F45639Cu: goto label_7F45639C;
    case 0x7F4563A0u: goto label_7F4563A0;
    case 0x7F4563A4u: goto label_7F4563A4;
    case 0x7F4563A8u: goto label_7F4563A8;
    case 0x7F4563ACu: goto label_7F4563AC;
    case 0x7F4563B0u: goto label_7F4563B0;
    case 0x7F4563B4u: goto label_7F4563B4;
    case 0x7F4563B8u: goto label_7F4563B8;
    case 0x7F4563BCu: goto label_7F4563BC;
    case 0x7F4563C0u: goto label_7F4563C0;
    case 0x7F4563C4u: goto label_7F4563C4;
    case 0x7F4563C8u: goto label_7F4563C8;
    case 0x7F4563CCu: goto label_7F4563CC;
    case 0x7F4563D0u: goto label_7F4563D0;
    case 0x7F4563D4u: goto label_7F4563D4;
    case 0x7F4563D8u: goto label_7F4563D8;
    case 0x7F4563DCu: goto label_7F4563DC;
    case 0x7F4563E0u: goto label_7F4563E0;
    case 0x7F4563E4u: goto label_7F4563E4;
    case 0x7F4563E8u: goto label_7F4563E8;
    case 0x7F4563ECu: goto label_7F4563EC;
    case 0x7F4563F0u: goto label_7F4563F0;
    case 0x7F4563F4u: goto label_7F4563F4;
    case 0x7F4563F8u: goto label_7F4563F8;
    case 0x7F4563FCu: goto label_7F4563FC;
    case 0x7F456400u: goto label_7F456400;
    case 0x7F456404u: goto label_7F456404;
    case 0x7F456408u: goto label_7F456408;
    case 0x7F45640Cu: goto label_7F45640C;
    case 0x7F456410u: goto label_7F456410;
    case 0x7F456414u: goto label_7F456414;
    case 0x7F456418u: goto label_7F456418;
    case 0x7F45641Cu: goto label_7F45641C;
    case 0x7F456420u: goto label_7F456420;
    case 0x7F456424u: goto label_7F456424;
    case 0x7F456428u: goto label_7F456428;
    case 0x7F45642Cu: goto label_7F45642C;
    case 0x7F456430u: goto label_7F456430;
    case 0x7F456434u: goto label_7F456434;
    case 0x7F456438u: goto label_7F456438;
    case 0x7F45643Cu: goto label_7F45643C;
    case 0x7F456440u: goto label_7F456440;
    case 0x7F456444u: goto label_7F456444;
    case 0x7F456448u: goto label_7F456448;
    case 0x7F45644Cu: goto label_7F45644C;
    case 0x7F456450u: goto label_7F456450;
    case 0x7F456454u: goto label_7F456454;
    case 0x7F456458u: goto label_7F456458;
    case 0x7F45645Cu: goto label_7F45645C;
    case 0x7F456460u: goto label_7F456460;
    case 0x7F456464u: goto label_7F456464;
    case 0x7F456468u: goto label_7F456468;
    case 0x7F45646Cu: goto label_7F45646C;
    case 0x7F456470u: goto label_7F456470;
    case 0x7F456474u: goto label_7F456474;
    case 0x7F456478u: goto label_7F456478;
    case 0x7F45647Cu: goto label_7F45647C;
    case 0x7F456480u: goto label_7F456480;
    case 0x7F456484u: goto label_7F456484;
    case 0x7F456488u: goto label_7F456488;
    case 0x7F45648Cu: goto label_7F45648C;
    case 0x7F456490u: goto label_7F456490;
    case 0x7F456494u: goto label_7F456494;
    case 0x7F456498u: goto label_7F456498;
    case 0x7F45649Cu: goto label_7F45649C;
    case 0x7F4564A0u: goto label_7F4564A0;
    case 0x7F4564A4u: goto label_7F4564A4;
    case 0x7F4564A8u: goto label_7F4564A8;
    case 0x7F4564ACu: goto label_7F4564AC;
    case 0x7F4564B0u: goto label_7F4564B0;
    case 0x7F4564B4u: goto label_7F4564B4;
    case 0x7F4564B8u: goto label_7F4564B8;
    case 0x7F4564BCu: goto label_7F4564BC;
    case 0x7F4564C0u: goto label_7F4564C0;
    case 0x7F4564C4u: goto label_7F4564C4;
    case 0x7F4564C8u: goto label_7F4564C8;
    case 0x7F4564CCu: goto label_7F4564CC;
    case 0x7F4564D0u: goto label_7F4564D0;
    case 0x7F4564D4u: goto label_7F4564D4;
    case 0x7F4564D8u: goto label_7F4564D8;
    case 0x7F4564DCu: goto label_7F4564DC;
    case 0x7F4564E0u: goto label_7F4564E0;
    case 0x7F4564E4u: goto label_7F4564E4;
    case 0x7F4564E8u: goto label_7F4564E8;
    case 0x7F4564ECu: goto label_7F4564EC;
    case 0x7F4564F0u: goto label_7F4564F0;
    case 0x7F4564F4u: goto label_7F4564F4;
    case 0x7F4564F8u: goto label_7F4564F8;
    case 0x7F4564FCu: goto label_7F4564FC;
    case 0x7F456500u: goto label_7F456500;
    case 0x7F456504u: goto label_7F456504;
    case 0x7F456508u: goto label_7F456508;
    case 0x7F45650Cu: goto label_7F45650C;
    case 0x7F456510u: goto label_7F456510;
    case 0x7F456514u: goto label_7F456514;
    case 0x7F456518u: goto label_7F456518;
    case 0x7F45651Cu: goto label_7F45651C;
    case 0x7F456520u: goto label_7F456520;
    case 0x7F456524u: goto label_7F456524;
    case 0x7F456528u: goto label_7F456528;
    case 0x7F45652Cu: goto label_7F45652C;
    case 0x7F456530u: goto label_7F456530;
    case 0x7F456534u: goto label_7F456534;
    case 0x7F456538u: goto label_7F456538;
    case 0x7F45653Cu: goto label_7F45653C;
    case 0x7F456540u: goto label_7F456540;
    case 0x7F456544u: goto label_7F456544;
    case 0x7F456548u: goto label_7F456548;
    case 0x7F45654Cu: goto label_7F45654C;
    case 0x7F456550u: goto label_7F456550;
    case 0x7F456554u: goto label_7F456554;
    case 0x7F456558u: goto label_7F456558;
    case 0x7F45655Cu: goto label_7F45655C;
    case 0x7F456560u: goto label_7F456560;
    case 0x7F456564u: goto label_7F456564;
    case 0x7F456568u: goto label_7F456568;
    case 0x7F45656Cu: goto label_7F45656C;
    case 0x7F456570u: goto label_7F456570;
    case 0x7F456574u: goto label_7F456574;
    case 0x7F456578u: goto label_7F456578;
    case 0x7F45657Cu: goto label_7F45657C;
    case 0x7F456580u: goto label_7F456580;
    case 0x7F456584u: goto label_7F456584;
    case 0x7F456588u: goto label_7F456588;
    case 0x7F45658Cu: goto label_7F45658C;
    case 0x7F456590u: goto label_7F456590;
    case 0x7F456594u: goto label_7F456594;
    case 0x7F456598u: goto label_7F456598;
    case 0x7F45659Cu: goto label_7F45659C;
    case 0x7F4565A0u: goto label_7F4565A0;
    case 0x7F4565A4u: goto label_7F4565A4;
    case 0x7F4565A8u: goto label_7F4565A8;
    case 0x7F4565ACu: goto label_7F4565AC;
    case 0x7F4565B0u: goto label_7F4565B0;
    case 0x7F4565B4u: goto label_7F4565B4;
    case 0x7F4565B8u: goto label_7F4565B8;
    case 0x7F4565BCu: goto label_7F4565BC;
    case 0x7F4565C0u: goto label_7F4565C0;
    case 0x7F4565C4u: goto label_7F4565C4;
    case 0x7F4565C8u: goto label_7F4565C8;
    case 0x7F4565CCu: goto label_7F4565CC;
    case 0x7F4565D0u: goto label_7F4565D0;
    case 0x7F4565D4u: goto label_7F4565D4;
    case 0x7F4565D8u: goto label_7F4565D8;
    case 0x7F4565DCu: goto label_7F4565DC;
    case 0x7F4565E0u: goto label_7F4565E0;
    case 0x7F4565E4u: goto label_7F4565E4;
    case 0x7F4565E8u: goto label_7F4565E8;
    case 0x7F4565ECu: goto label_7F4565EC;
    case 0x7F4565F0u: goto label_7F4565F0;
    case 0x7F4565F4u: goto label_7F4565F4;
    case 0x7F4565F8u: goto label_7F4565F8;
    case 0x7F4565FCu: goto label_7F4565FC;
    case 0x7F456600u: goto label_7F456600;
    case 0x7F456604u: goto label_7F456604;
    case 0x7F456608u: goto label_7F456608;
    case 0x7F45660Cu: goto label_7F45660C;
    case 0x7F456610u: goto label_7F456610;
    case 0x7F456614u: goto label_7F456614;
    case 0x7F456618u: goto label_7F456618;
    case 0x7F45661Cu: goto label_7F45661C;
    case 0x7F456620u: goto label_7F456620;
    case 0x7F456624u: goto label_7F456624;
    case 0x7F456628u: goto label_7F456628;
    case 0x7F45662Cu: goto label_7F45662C;
    case 0x7F456630u: goto label_7F456630;
    case 0x7F456634u: goto label_7F456634;
    case 0x7F456638u: goto label_7F456638;
    case 0x7F45663Cu: goto label_7F45663C;
    case 0x7F456640u: goto label_7F456640;
    case 0x7F456644u: goto label_7F456644;
    case 0x7F456648u: goto label_7F456648;
    case 0x7F45664Cu: goto label_7F45664C;
    case 0x7F456650u: goto label_7F456650;
    case 0x7F456654u: goto label_7F456654;
    case 0x7F456658u: goto label_7F456658;
    case 0x7F45665Cu: goto label_7F45665C;
    case 0x7F456660u: goto label_7F456660;
    case 0x7F456664u: goto label_7F456664;
    case 0x7F456668u: goto label_7F456668;
    case 0x7F45666Cu: goto label_7F45666C;
    case 0x7F456670u: goto label_7F456670;
    case 0x7F456674u: goto label_7F456674;
    case 0x7F456678u: goto label_7F456678;
    case 0x7F45667Cu: goto label_7F45667C;
    case 0x7F456680u: goto label_7F456680;
    case 0x7F456684u: goto label_7F456684;
    case 0x7F456688u: goto label_7F456688;
    case 0x7F45668Cu: goto label_7F45668C;
    case 0x7F456690u: goto label_7F456690;
    case 0x7F456694u: goto label_7F456694;
    case 0x7F456698u: goto label_7F456698;
    case 0x7F45669Cu: goto label_7F45669C;
    case 0x7F4566A0u: goto label_7F4566A0;
    case 0x7F4566A4u: goto label_7F4566A4;
    case 0x7F4566A8u: goto label_7F4566A8;
    case 0x7F4566ACu: goto label_7F4566AC;
    case 0x7F4566B0u: goto label_7F4566B0;
    case 0x7F4566B4u: goto label_7F4566B4;
    case 0x7F4566B8u: goto label_7F4566B8;
    case 0x7F4566BCu: goto label_7F4566BC;
    case 0x7F4566C0u: goto label_7F4566C0;
    case 0x7F4566C4u: goto label_7F4566C4;
    case 0x7F4566C8u: goto label_7F4566C8;
    case 0x7F4566CCu: goto label_7F4566CC;
    case 0x7F4566D0u: goto label_7F4566D0;
    case 0x7F4566D4u: goto label_7F4566D4;
    case 0x7F4566D8u: goto label_7F4566D8;
    case 0x7F4566DCu: goto label_7F4566DC;
    case 0x7F4566E0u: goto label_7F4566E0;
    case 0x7F4566E4u: goto label_7F4566E4;
    case 0x7F4566E8u: goto label_7F4566E8;
    case 0x7F4566ECu: goto label_7F4566EC;
    case 0x7F4566F0u: goto label_7F4566F0;
    case 0x7F4566F4u: goto label_7F4566F4;
    case 0x7F4566F8u: goto label_7F4566F8;
    case 0x7F4566FCu: goto label_7F4566FC;
    case 0x7F456700u: goto label_7F456700;
    case 0x7F456704u: goto label_7F456704;
    case 0x7F456708u: goto label_7F456708;
    case 0x7F45670Cu: goto label_7F45670C;
    case 0x7F456710u: goto label_7F456710;
    case 0x7F456714u: goto label_7F456714;
    case 0x7F456718u: goto label_7F456718;
    case 0x7F45671Cu: goto label_7F45671C;
    case 0x7F456720u: goto label_7F456720;
    case 0x7F456724u: goto label_7F456724;
    case 0x7F456728u: goto label_7F456728;
    case 0x7F45672Cu: goto label_7F45672C;
    case 0x7F456730u: goto label_7F456730;
    case 0x7F456734u: goto label_7F456734;
    case 0x7F456738u: goto label_7F456738;
    case 0x7F45673Cu: goto label_7F45673C;
    case 0x7F456740u: goto label_7F456740;
    case 0x7F456744u: goto label_7F456744;
    case 0x7F456748u: goto label_7F456748;
    case 0x7F45674Cu: goto label_7F45674C;
    case 0x7F456750u: goto label_7F456750;
    case 0x7F456754u: goto label_7F456754;
    case 0x7F456758u: goto label_7F456758;
    case 0x7F45675Cu: goto label_7F45675C;
    case 0x7F456760u: goto label_7F456760;
    case 0x7F456764u: goto label_7F456764;
    case 0x7F456768u: goto label_7F456768;
    case 0x7F45676Cu: goto label_7F45676C;
    case 0x7F456770u: goto label_7F456770;
    case 0x7F456774u: goto label_7F456774;
    case 0x7F456778u: goto label_7F456778;
    case 0x7F45677Cu: goto label_7F45677C;
    case 0x7F456780u: goto label_7F456780;
    case 0x7F456784u: goto label_7F456784;
    case 0x7F456788u: goto label_7F456788;
    case 0x7F45678Cu: goto label_7F45678C;
    case 0x7F456790u: goto label_7F456790;
    case 0x7F456794u: goto label_7F456794;
    case 0x7F456798u: goto label_7F456798;
    case 0x7F45679Cu: goto label_7F45679C;
    case 0x7F4567A0u: goto label_7F4567A0;
    case 0x7F4567A4u: goto label_7F4567A4;
    case 0x7F4567A8u: goto label_7F4567A8;
    case 0x7F4567ACu: goto label_7F4567AC;
    case 0x7F4567B0u: goto label_7F4567B0;
    case 0x7F4567B4u: goto label_7F4567B4;
    case 0x7F4567B8u: goto label_7F4567B8;
    case 0x7F4567BCu: goto label_7F4567BC;
    case 0x7F4567C0u: goto label_7F4567C0;
    case 0x7F4567C4u: goto label_7F4567C4;
    case 0x7F4567C8u: goto label_7F4567C8;
    case 0x7F4567CCu: goto label_7F4567CC;
    case 0x7F4567D0u: goto label_7F4567D0;
    case 0x7F4567D4u: goto label_7F4567D4;
    case 0x7F4567D8u: goto label_7F4567D8;
    case 0x7F4567DCu: goto label_7F4567DC;
    case 0x7F4567E0u: goto label_7F4567E0;
    case 0x7F4567E4u: goto label_7F4567E4;
    case 0x7F4567E8u: goto label_7F4567E8;
    case 0x7F4567ECu: goto label_7F4567EC;
    case 0x7F4567F0u: goto label_7F4567F0;
    case 0x7F4567F4u: goto label_7F4567F4;
    case 0x7F4567F8u: goto label_7F4567F8;
    case 0x7F4567FCu: goto label_7F4567FC;
    case 0x7F456800u: goto label_7F456800;
    case 0x7F456804u: goto label_7F456804;
    case 0x7F456808u: goto label_7F456808;
    case 0x7F45680Cu: goto label_7F45680C;
    case 0x7F456810u: goto label_7F456810;
    case 0x7F456814u: goto label_7F456814;
    case 0x7F456818u: goto label_7F456818;
    case 0x7F45681Cu: goto label_7F45681C;
    case 0x7F456820u: goto label_7F456820;
    case 0x7F456824u: goto label_7F456824;
    case 0x7F456828u: goto label_7F456828;
    case 0x7F45682Cu: goto label_7F45682C;
    case 0x7F456830u: goto label_7F456830;
    case 0x7F456834u: goto label_7F456834;
    case 0x7F456838u: goto label_7F456838;
    case 0x7F45683Cu: goto label_7F45683C;
    case 0x7F456840u: goto label_7F456840;
    case 0x7F456844u: goto label_7F456844;
    case 0x7F456848u: goto label_7F456848;
    case 0x7F45684Cu: goto label_7F45684C;
    case 0x7F456850u: goto label_7F456850;
    case 0x7F456854u: goto label_7F456854;
    case 0x7F456858u: goto label_7F456858;
    case 0x7F45685Cu: goto label_7F45685C;
    case 0x7F456860u: goto label_7F456860;
    case 0x7F456864u: goto label_7F456864;
    case 0x7F456868u: goto label_7F456868;
    case 0x7F45686Cu: goto label_7F45686C;
    case 0x7F456870u: goto label_7F456870;
    case 0x7F456874u: goto label_7F456874;
    case 0x7F456878u: goto label_7F456878;
    case 0x7F45687Cu: goto label_7F45687C;
    case 0x7F456880u: goto label_7F456880;
    case 0x7F456884u: goto label_7F456884;
    case 0x7F456888u: goto label_7F456888;
    case 0x7F45688Cu: goto label_7F45688C;
    case 0x7F456890u: goto label_7F456890;
    case 0x7F456894u: goto label_7F456894;
    case 0x7F456898u: goto label_7F456898;
    case 0x7F45689Cu: goto label_7F45689C;
    case 0x7F4568A0u: goto label_7F4568A0;
    case 0x7F4568A4u: goto label_7F4568A4;
    case 0x7F4568A8u: goto label_7F4568A8;
    case 0x7F4568ACu: goto label_7F4568AC;
    case 0x7F4568B0u: goto label_7F4568B0;
    case 0x7F4568B4u: goto label_7F4568B4;
    case 0x7F4568B8u: goto label_7F4568B8;
    case 0x7F4568BCu: goto label_7F4568BC;
    case 0x7F4568C0u: goto label_7F4568C0;
    case 0x7F4568C4u: goto label_7F4568C4;
    case 0x7F4568C8u: goto label_7F4568C8;
    case 0x7F4568CCu: goto label_7F4568CC;
    case 0x7F4568D0u: goto label_7F4568D0;
    case 0x7F4568D4u: goto label_7F4568D4;
    case 0x7F4568D8u: goto label_7F4568D8;
    case 0x7F4568DCu: goto label_7F4568DC;
    case 0x7F4568E0u: goto label_7F4568E0;
    case 0x7F4568E4u: goto label_7F4568E4;
    case 0x7F4568E8u: goto label_7F4568E8;
    case 0x7F4568ECu: goto label_7F4568EC;
    case 0x7F4568F0u: goto label_7F4568F0;
    case 0x7F4568F4u: goto label_7F4568F4;
    case 0x7F4568F8u: goto label_7F4568F8;
    case 0x7F4568FCu: goto label_7F4568FC;
    case 0x7F456900u: goto label_7F456900;
    case 0x7F456904u: goto label_7F456904;
    case 0x7F456908u: goto label_7F456908;
    case 0x7F45690Cu: goto label_7F45690C;
    case 0x7F456910u: goto label_7F456910;
    case 0x7F456914u: goto label_7F456914;
    case 0x7F456918u: goto label_7F456918;
    case 0x7F45691Cu: goto label_7F45691C;
    case 0x7F456920u: goto label_7F456920;
    case 0x7F456924u: goto label_7F456924;
    case 0x7F456928u: goto label_7F456928;
    case 0x7F45692Cu: goto label_7F45692C;
    case 0x7F456930u: goto label_7F456930;
    case 0x7F456934u: goto label_7F456934;
    case 0x7F456938u: goto label_7F456938;
    case 0x7F45693Cu: goto label_7F45693C;
    case 0x7F456940u: goto label_7F456940;
    case 0x7F456944u: goto label_7F456944;
    case 0x7F456948u: goto label_7F456948;
    case 0x7F45694Cu: goto label_7F45694C;
    case 0x7F456950u: goto label_7F456950;
    case 0x7F456954u: goto label_7F456954;
    case 0x7F456958u: goto label_7F456958;
    case 0x7F45695Cu: goto label_7F45695C;
    case 0x7F456960u: goto label_7F456960;
    case 0x7F456964u: goto label_7F456964;
    case 0x7F456968u: goto label_7F456968;
    case 0x7F45696Cu: goto label_7F45696C;
    case 0x7F456970u: goto label_7F456970;
    case 0x7F456974u: goto label_7F456974;
    case 0x7F456978u: goto label_7F456978;
    case 0x7F45697Cu: goto label_7F45697C;
    case 0x7F456980u: goto label_7F456980;
    case 0x7F456984u: goto label_7F456984;
    case 0x7F456988u: goto label_7F456988;
    case 0x7F45698Cu: goto label_7F45698C;
    case 0x7F456990u: goto label_7F456990;
    case 0x7F456994u: goto label_7F456994;
    case 0x7F456998u: goto label_7F456998;
    case 0x7F45699Cu: goto label_7F45699C;
    case 0x7F4569A0u: goto label_7F4569A0;
    case 0x7F4569A4u: goto label_7F4569A4;
    case 0x7F4569A8u: goto label_7F4569A8;
    case 0x7F4569ACu: goto label_7F4569AC;
    case 0x7F4569B0u: goto label_7F4569B0;
    case 0x7F4569B4u: goto label_7F4569B4;
    case 0x7F4569B8u: goto label_7F4569B8;
    case 0x7F4569BCu: goto label_7F4569BC;
    case 0x7F4569C0u: goto label_7F4569C0;
    case 0x7F4569C4u: goto label_7F4569C4;
    case 0x7F4569C8u: goto label_7F4569C8;
    case 0x7F4569CCu: goto label_7F4569CC;
    case 0x7F4569D0u: goto label_7F4569D0;
    case 0x7F4569D4u: goto label_7F4569D4;
    case 0x7F4569D8u: goto label_7F4569D8;
    case 0x7F4569DCu: goto label_7F4569DC;
    case 0x7F4569E0u: goto label_7F4569E0;
    case 0x7F4569E4u: goto label_7F4569E4;
    case 0x7F4569E8u: goto label_7F4569E8;
    case 0x7F4569ECu: goto label_7F4569EC;
    case 0x7F4569F0u: goto label_7F4569F0;
    case 0x7F4569F4u: goto label_7F4569F4;
    case 0x7F4569F8u: goto label_7F4569F8;
    case 0x7F4569FCu: goto label_7F4569FC;
    case 0x7F456A00u: goto label_7F456A00;
    case 0x7F456A04u: goto label_7F456A04;
    case 0x7F456A08u: goto label_7F456A08;
    case 0x7F456A0Cu: goto label_7F456A0C;
    case 0x7F456A10u: goto label_7F456A10;
    case 0x7F456A14u: goto label_7F456A14;
    case 0x7F456A18u: goto label_7F456A18;
    case 0x7F456A1Cu: goto label_7F456A1C;
    case 0x7F456A20u: goto label_7F456A20;
    case 0x7F456A24u: goto label_7F456A24;
    case 0x7F456A28u: goto label_7F456A28;
    case 0x7F456A2Cu: goto label_7F456A2C;
    case 0x7F456A30u: goto label_7F456A30;
    case 0x7F456A34u: goto label_7F456A34;
    case 0x7F456A38u: goto label_7F456A38;
    case 0x7F456A3Cu: goto label_7F456A3C;
    case 0x7F456A40u: goto label_7F456A40;
    case 0x7F456A44u: goto label_7F456A44;
    case 0x7F456A48u: goto label_7F456A48;
    case 0x7F456A4Cu: goto label_7F456A4C;
    case 0x7F456A50u: goto label_7F456A50;
    case 0x7F456A54u: goto label_7F456A54;
    case 0x7F456A58u: goto label_7F456A58;
    case 0x7F456A5Cu: goto label_7F456A5C;
    case 0x7F456A60u: goto label_7F456A60;
    case 0x7F456A64u: goto label_7F456A64;
    case 0x7F456A68u: goto label_7F456A68;
    case 0x7F456A6Cu: goto label_7F456A6C;
    case 0x7F456A70u: goto label_7F456A70;
    case 0x7F456A74u: goto label_7F456A74;
    case 0x7F456A78u: goto label_7F456A78;
    case 0x7F456A7Cu: goto label_7F456A7C;
    case 0x7F456A80u: goto label_7F456A80;
    case 0x7F456A84u: goto label_7F456A84;
    case 0x7F456A88u: goto label_7F456A88;
    case 0x7F456A8Cu: goto label_7F456A8C;
    case 0x7F456A90u: goto label_7F456A90;
    case 0x7F456A94u: goto label_7F456A94;
    case 0x7F456A98u: goto label_7F456A98;
    case 0x7F456A9Cu: goto label_7F456A9C;
    case 0x7F456AA0u: goto label_7F456AA0;
    case 0x7F456AA4u: goto label_7F456AA4;
    case 0x7F456AA8u: goto label_7F456AA8;
    case 0x7F456AACu: goto label_7F456AAC;
    case 0x7F456AB0u: goto label_7F456AB0;
    case 0x7F456AB4u: goto label_7F456AB4;
    case 0x7F456AB8u: goto label_7F456AB8;
    case 0x7F456ABCu: goto label_7F456ABC;
    case 0x7F456AC0u: goto label_7F456AC0;
    case 0x7F456AC4u: goto label_7F456AC4;
    case 0x7F456AC8u: goto label_7F456AC8;
    case 0x7F456ACCu: goto label_7F456ACC;
    case 0x7F456AD0u: goto label_7F456AD0;
    case 0x7F456AD4u: goto label_7F456AD4;
    case 0x7F456AD8u: goto label_7F456AD8;
    case 0x7F456ADCu: goto label_7F456ADC;
    case 0x7F456AE0u: goto label_7F456AE0;
    case 0x7F456AE4u: goto label_7F456AE4;
    case 0x7F456AE8u: goto label_7F456AE8;
    case 0x7F456AECu: goto label_7F456AEC;
    case 0x7F456AF0u: goto label_7F456AF0;
    case 0x7F456AF4u: goto label_7F456AF4;
    case 0x7F456AF8u: goto label_7F456AF8;
    case 0x7F456AFCu: goto label_7F456AFC;
    case 0x7F456B00u: goto label_7F456B00;
    case 0x7F456B04u: goto label_7F456B04;
    case 0x7F456B08u: goto label_7F456B08;
    case 0x7F456B0Cu: goto label_7F456B0C;
    case 0x7F456B10u: goto label_7F456B10;
    case 0x7F456B14u: goto label_7F456B14;
    case 0x7F456B18u: goto label_7F456B18;
    case 0x7F456B1Cu: goto label_7F456B1C;
    case 0x7F456B20u: goto label_7F456B20;
    case 0x7F456B24u: goto label_7F456B24;
    case 0x7F456B28u: goto label_7F456B28;
    case 0x7F456B2Cu: goto label_7F456B2C;
    case 0x7F456B30u: goto label_7F456B30;
    case 0x7F456B34u: goto label_7F456B34;
    case 0x7F456B38u: goto label_7F456B38;
    case 0x7F456B3Cu: goto label_7F456B3C;
    case 0x7F456B40u: goto label_7F456B40;
    case 0x7F456B44u: goto label_7F456B44;
    case 0x7F456B48u: goto label_7F456B48;
    case 0x7F456B4Cu: goto label_7F456B4C;
    case 0x7F456B50u: goto label_7F456B50;
    case 0x7F456B54u: goto label_7F456B54;
    case 0x7F456B58u: goto label_7F456B58;
    case 0x7F456B5Cu: goto label_7F456B5C;
    case 0x7F456B60u: goto label_7F456B60;
    case 0x7F456B64u: goto label_7F456B64;
    case 0x7F456B68u: goto label_7F456B68;
    case 0x7F456B6Cu: goto label_7F456B6C;
    case 0x7F456B70u: goto label_7F456B70;
    case 0x7F456B74u: goto label_7F456B74;
    case 0x7F456B78u: goto label_7F456B78;
    case 0x7F456B7Cu: goto label_7F456B7C;
    case 0x7F456B80u: goto label_7F456B80;
    case 0x7F456B84u: goto label_7F456B84;
    case 0x7F456B88u: goto label_7F456B88;
    case 0x7F456B8Cu: goto label_7F456B8C;
    case 0x7F456B90u: goto label_7F456B90;
    case 0x7F456B94u: goto label_7F456B94;
    case 0x7F456B98u: goto label_7F456B98;
    case 0x7F456B9Cu: goto label_7F456B9C;
    case 0x7F456BA0u: goto label_7F456BA0;
    case 0x7F456BA4u: goto label_7F456BA4;
    case 0x7F456BA8u: goto label_7F456BA8;
    case 0x7F456BACu: goto label_7F456BAC;
    case 0x7F456BB0u: goto label_7F456BB0;
    case 0x7F456BB4u: goto label_7F456BB4;
    case 0x7F456BB8u: goto label_7F456BB8;
    case 0x7F456BBCu: goto label_7F456BBC;
    case 0x7F456BC0u: goto label_7F456BC0;
    case 0x7F456BC4u: goto label_7F456BC4;
    case 0x7F456BC8u: goto label_7F456BC8;
    case 0x7F456BCCu: goto label_7F456BCC;
    case 0x7F456BD0u: goto label_7F456BD0;
    case 0x7F456BD4u: goto label_7F456BD4;
    case 0x7F456BD8u: goto label_7F456BD8;
    case 0x7F456BDCu: goto label_7F456BDC;
    case 0x7F456BE0u: goto label_7F456BE0;
    case 0x7F456BE4u: goto label_7F456BE4;
    case 0x7F456BE8u: goto label_7F456BE8;
    case 0x7F456BECu: goto label_7F456BEC;
    case 0x7F456BF0u: goto label_7F456BF0;
    case 0x7F456BF4u: goto label_7F456BF4;
    case 0x7F456BF8u: goto label_7F456BF8;
    case 0x7F456BFCu: goto label_7F456BFC;
    case 0x7F456C00u: goto label_7F456C00;
    case 0x7F456C04u: goto label_7F456C04;
    case 0x7F456C08u: goto label_7F456C08;
    case 0x7F456C0Cu: goto label_7F456C0C;
    case 0x7F456C10u: goto label_7F456C10;
    case 0x7F456C14u: goto label_7F456C14;
    case 0x7F456C18u: goto label_7F456C18;
    case 0x7F456C1Cu: goto label_7F456C1C;
    case 0x7F456C20u: goto label_7F456C20;
    case 0x7F456C24u: goto label_7F456C24;
    case 0x7F456C28u: goto label_7F456C28;
    case 0x7F456C2Cu: goto label_7F456C2C;
    case 0x7F456C30u: goto label_7F456C30;
    case 0x7F456C34u: goto label_7F456C34;
    case 0x7F456C38u: goto label_7F456C38;
    case 0x7F456C3Cu: goto label_7F456C3C;
    case 0x7F456C40u: goto label_7F456C40;
    case 0x7F456C44u: goto label_7F456C44;
    case 0x7F456C48u: goto label_7F456C48;
    case 0x7F456C4Cu: goto label_7F456C4C;
    case 0x7F456C50u: goto label_7F456C50;
    case 0x7F456C54u: goto label_7F456C54;
    case 0x7F456C58u: goto label_7F456C58;
    case 0x7F456C5Cu: goto label_7F456C5C;
    case 0x7F456C60u: goto label_7F456C60;
    case 0x7F456C64u: goto label_7F456C64;
    case 0x7F456C68u: goto label_7F456C68;
    case 0x7F456C6Cu: goto label_7F456C6C;
    case 0x7F456C70u: goto label_7F456C70;
    case 0x7F456C74u: goto label_7F456C74;
    case 0x7F456C78u: goto label_7F456C78;
    case 0x7F456C7Cu: goto label_7F456C7C;
    case 0x7F456C80u: goto label_7F456C80;
    case 0x7F456C84u: goto label_7F456C84;
    case 0x7F456C88u: goto label_7F456C88;
    case 0x7F456C8Cu: goto label_7F456C8C;
    case 0x7F456C90u: goto label_7F456C90;
    case 0x7F456C94u: goto label_7F456C94;
    case 0x7F456C98u: goto label_7F456C98;
    case 0x7F456C9Cu: goto label_7F456C9C;
    case 0x7F456CA0u: goto label_7F456CA0;
    case 0x7F456CA4u: goto label_7F456CA4;
    case 0x7F456CA8u: goto label_7F456CA8;
    case 0x7F456CACu: goto label_7F456CAC;
    case 0x7F456CB0u: goto label_7F456CB0;
    case 0x7F456CB4u: goto label_7F456CB4;
    case 0x7F456CB8u: goto label_7F456CB8;
    case 0x7F456CBCu: goto label_7F456CBC;
    case 0x7F456CC0u: goto label_7F456CC0;
    case 0x7F456CC4u: goto label_7F456CC4;
    case 0x7F456CC8u: goto label_7F456CC8;
    case 0x7F456CCCu: goto label_7F456CCC;
    case 0x7F456CD0u: goto label_7F456CD0;
    case 0x7F456CD4u: goto label_7F456CD4;
    case 0x7F456CD8u: goto label_7F456CD8;
    case 0x7F456CDCu: goto label_7F456CDC;
    case 0x7F456CE0u: goto label_7F456CE0;
    case 0x7F456CE4u: goto label_7F456CE4;
    case 0x7F456CE8u: goto label_7F456CE8;
    case 0x7F456CECu: goto label_7F456CEC;
    case 0x7F456CF0u: goto label_7F456CF0;
    case 0x7F456CF4u: goto label_7F456CF4;
    case 0x7F456CF8u: goto label_7F456CF8;
    case 0x7F456CFCu: goto label_7F456CFC;
    case 0x7F456D00u: goto label_7F456D00;
    case 0x7F456D04u: goto label_7F456D04;
    case 0x7F456D08u: goto label_7F456D08;
    case 0x7F456D0Cu: goto label_7F456D0C;
    case 0x7F456D10u: goto label_7F456D10;
    case 0x7F456D14u: goto label_7F456D14;
    case 0x7F456D18u: goto label_7F456D18;
    case 0x7F456D1Cu: goto label_7F456D1C;
    case 0x7F456D20u: goto label_7F456D20;
    case 0x7F456D24u: goto label_7F456D24;
    case 0x7F456D28u: goto label_7F456D28;
    case 0x7F456D2Cu: goto label_7F456D2C;
    case 0x7F456D30u: goto label_7F456D30;
    case 0x7F456D34u: goto label_7F456D34;
    case 0x7F456D38u: goto label_7F456D38;
    case 0x7F456D3Cu: goto label_7F456D3C;
    case 0x7F456D40u: goto label_7F456D40;
    case 0x7F456D44u: goto label_7F456D44;
    case 0x7F456D48u: goto label_7F456D48;
    case 0x7F456D4Cu: goto label_7F456D4C;
    case 0x7F456D50u: goto label_7F456D50;
    case 0x7F456D54u: goto label_7F456D54;
    case 0x7F456D58u: goto label_7F456D58;
    case 0x7F456D5Cu: goto label_7F456D5C;
    case 0x7F456D60u: goto label_7F456D60;
    case 0x7F456D64u: goto label_7F456D64;
    case 0x7F456D68u: goto label_7F456D68;
    case 0x7F456D6Cu: goto label_7F456D6C;
    case 0x7F456D70u: goto label_7F456D70;
    case 0x7F456D74u: goto label_7F456D74;
    case 0x7F456D78u: goto label_7F456D78;
    case 0x7F456D7Cu: goto label_7F456D7C;
    case 0x7F456D80u: goto label_7F456D80;
    case 0x7F456D84u: goto label_7F456D84;
    case 0x7F456D88u: goto label_7F456D88;
    case 0x7F456D8Cu: goto label_7F456D8C;
    case 0x7F456D90u: goto label_7F456D90;
    case 0x7F456D94u: goto label_7F456D94;
    case 0x7F456D98u: goto label_7F456D98;
    case 0x7F456D9Cu: goto label_7F456D9C;
    case 0x7F456DA0u: goto label_7F456DA0;
    case 0x7F456DA4u: goto label_7F456DA4;
    case 0x7F456DA8u: goto label_7F456DA8;
    case 0x7F456DACu: goto label_7F456DAC;
    case 0x7F456DB0u: goto label_7F456DB0;
    case 0x7F456DB4u: goto label_7F456DB4;
    case 0x7F456DB8u: goto label_7F456DB8;
    case 0x7F456DBCu: goto label_7F456DBC;
    case 0x7F456DC0u: goto label_7F456DC0;
    case 0x7F456DC4u: goto label_7F456DC4;
    case 0x7F456DC8u: goto label_7F456DC8;
    case 0x7F456DCCu: goto label_7F456DCC;
    case 0x7F456DD0u: goto label_7F456DD0;
    case 0x7F456DD4u: goto label_7F456DD4;
    case 0x7F456DD8u: goto label_7F456DD8;
    case 0x7F456DDCu: goto label_7F456DDC;
    case 0x7F456DE0u: goto label_7F456DE0;
    case 0x7F456DE4u: goto label_7F456DE4;
    case 0x7F456DE8u: goto label_7F456DE8;
    case 0x7F456DECu: goto label_7F456DEC;
    case 0x7F456DF0u: goto label_7F456DF0;
    case 0x7F456DF4u: goto label_7F456DF4;
    case 0x7F456DF8u: goto label_7F456DF8;
    case 0x7F456DFCu: goto label_7F456DFC;
    case 0x7F456E00u: goto label_7F456E00;
    case 0x7F456E04u: goto label_7F456E04;
    case 0x7F456E08u: goto label_7F456E08;
    case 0x7F456E0Cu: goto label_7F456E0C;
    case 0x7F456E10u: goto label_7F456E10;
    case 0x7F456E14u: goto label_7F456E14;
    case 0x7F456E18u: goto label_7F456E18;
    case 0x7F456E1Cu: goto label_7F456E1C;
    case 0x7F456E20u: goto label_7F456E20;
    case 0x7F456E24u: goto label_7F456E24;
    case 0x7F456E28u: goto label_7F456E28;
    case 0x7F456E2Cu: goto label_7F456E2C;
    case 0x7F456E30u: goto label_7F456E30;
    case 0x7F456E34u: goto label_7F456E34;
    case 0x7F456E38u: goto label_7F456E38;
    case 0x7F456E3Cu: goto label_7F456E3C;
    case 0x7F456E40u: goto label_7F456E40;
    case 0x7F456E44u: goto label_7F456E44;
    case 0x7F456E48u: goto label_7F456E48;
    case 0x7F456E4Cu: goto label_7F456E4C;
    case 0x7F456E50u: goto label_7F456E50;
    case 0x7F456E54u: goto label_7F456E54;
    case 0x7F456E58u: goto label_7F456E58;
    case 0x7F456E5Cu: goto label_7F456E5C;
    case 0x7F456E60u: goto label_7F456E60;
    case 0x7F456E64u: goto label_7F456E64;
    case 0x7F456E68u: goto label_7F456E68;
    case 0x7F456E6Cu: goto label_7F456E6C;
    case 0x7F456E70u: goto label_7F456E70;
    case 0x7F456E74u: goto label_7F456E74;
    case 0x7F456E78u: goto label_7F456E78;
    case 0x7F456E7Cu: goto label_7F456E7C;
    case 0x7F456E80u: goto label_7F456E80;
    case 0x7F456E84u: goto label_7F456E84;
    case 0x7F456E88u: goto label_7F456E88;
    case 0x7F456E8Cu: goto label_7F456E8C;
    case 0x7F456E90u: goto label_7F456E90;
    case 0x7F456E94u: goto label_7F456E94;
    case 0x7F456E98u: goto label_7F456E98;
    case 0x7F456E9Cu: goto label_7F456E9C;
    case 0x7F456EA0u: goto label_7F456EA0;
    case 0x7F456EA4u: goto label_7F456EA4;
    case 0x7F456EA8u: goto label_7F456EA8;
    case 0x7F456EACu: goto label_7F456EAC;
    case 0x7F456EB0u: goto label_7F456EB0;
    case 0x7F456EB4u: goto label_7F456EB4;
    case 0x7F456EB8u: goto label_7F456EB8;
    case 0x7F456EBCu: goto label_7F456EBC;
    case 0x7F456EC0u: goto label_7F456EC0;
    case 0x7F456EC4u: goto label_7F456EC4;
    case 0x7F456EC8u: goto label_7F456EC8;
    case 0x7F456ECCu: goto label_7F456ECC;
    case 0x7F456ED0u: goto label_7F456ED0;
    case 0x7F456ED4u: goto label_7F456ED4;
    case 0x7F456ED8u: goto label_7F456ED8;
    case 0x7F456EDCu: goto label_7F456EDC;
    case 0x7F456EE0u: goto label_7F456EE0;
    case 0x7F456EE4u: goto label_7F456EE4;
    case 0x7F456EE8u: goto label_7F456EE8;
    case 0x7F456EECu: goto label_7F456EEC;
    case 0x7F456EF0u: goto label_7F456EF0;
    case 0x7F456EF4u: goto label_7F456EF4;
    case 0x7F456EF8u: goto label_7F456EF8;
    case 0x7F456EFCu: goto label_7F456EFC;
    case 0x7F456F00u: goto label_7F456F00;
    case 0x7F456F04u: goto label_7F456F04;
    case 0x7F456F08u: goto label_7F456F08;
    case 0x7F456F0Cu: goto label_7F456F0C;
    case 0x7F456F10u: goto label_7F456F10;
    case 0x7F456F14u: goto label_7F456F14;
    case 0x7F456F18u: goto label_7F456F18;
    case 0x7F456F1Cu: goto label_7F456F1C;
    case 0x7F456F20u: goto label_7F456F20;
    case 0x7F456F24u: goto label_7F456F24;
    case 0x7F456F28u: goto label_7F456F28;
    case 0x7F456F2Cu: goto label_7F456F2C;
    case 0x7F456F30u: goto label_7F456F30;
    case 0x7F456F34u: goto label_7F456F34;
    case 0x7F456F38u: goto label_7F456F38;
    case 0x7F456F3Cu: goto label_7F456F3C;
    case 0x7F456F40u: goto label_7F456F40;
    case 0x7F456F44u: goto label_7F456F44;
    case 0x7F456F48u: goto label_7F456F48;
    case 0x7F456F4Cu: goto label_7F456F4C;
    case 0x7F456F50u: goto label_7F456F50;
    case 0x7F456F54u: goto label_7F456F54;
    case 0x7F456F58u: goto label_7F456F58;
    case 0x7F456F5Cu: goto label_7F456F5C;
    case 0x7F456F60u: goto label_7F456F60;
    case 0x7F456F64u: goto label_7F456F64;
    case 0x7F456F68u: goto label_7F456F68;
    case 0x7F456F6Cu: goto label_7F456F6C;
    case 0x7F456F70u: goto label_7F456F70;
    case 0x7F456F74u: goto label_7F456F74;
    case 0x7F456F78u: goto label_7F456F78;
    case 0x7F456F7Cu: goto label_7F456F7C;
    case 0x7F456F80u: goto label_7F456F80;
    case 0x7F456F84u: goto label_7F456F84;
    case 0x7F456F88u: goto label_7F456F88;
    case 0x7F456F8Cu: goto label_7F456F8C;
    case 0x7F456F90u: goto label_7F456F90;
    case 0x7F456F94u: goto label_7F456F94;
    case 0x7F456F98u: goto label_7F456F98;
    case 0x7F456F9Cu: goto label_7F456F9C;
    case 0x7F456FA0u: goto label_7F456FA0;
    case 0x7F456FA4u: goto label_7F456FA4;
    case 0x7F456FA8u: goto label_7F456FA8;
    case 0x7F456FACu: goto label_7F456FAC;
    case 0x7F456FB0u: goto label_7F456FB0;
    case 0x7F456FB4u: goto label_7F456FB4;
    case 0x7F456FB8u: goto label_7F456FB8;
    case 0x7F456FBCu: goto label_7F456FBC;
    case 0x7F456FC0u: goto label_7F456FC0;
    case 0x7F456FC4u: goto label_7F456FC4;
    case 0x7F456FC8u: goto label_7F456FC8;
    case 0x7F456FCCu: goto label_7F456FCC;
    case 0x7F456FD0u: goto label_7F456FD0;
    case 0x7F456FD4u: goto label_7F456FD4;
    case 0x7F456FD8u: goto label_7F456FD8;
    case 0x7F456FDCu: goto label_7F456FDC;
    case 0x7F456FE0u: goto label_7F456FE0;
    case 0x7F456FE4u: goto label_7F456FE4;
    case 0x7F456FE8u: goto label_7F456FE8;
    case 0x7F456FECu: goto label_7F456FEC;
    case 0x7F456FF0u: goto label_7F456FF0;
    case 0x7F456FF4u: goto label_7F456FF4;
    case 0x7F456FF8u: goto label_7F456FF8;
    case 0x7F456FFCu: goto label_7F456FFC;
    case 0x7F457000u: goto label_7F457000;
    case 0x7F457004u: goto label_7F457004;
    case 0x7F457008u: goto label_7F457008;
    case 0x7F45700Cu: goto label_7F45700C;
    case 0x7F457010u: goto label_7F457010;
    case 0x7F457014u: goto label_7F457014;
    case 0x7F457018u: goto label_7F457018;
    case 0x7F45701Cu: goto label_7F45701C;
    case 0x7F457020u: goto label_7F457020;
    case 0x7F457024u: goto label_7F457024;
    case 0x7F457028u: goto label_7F457028;
    case 0x7F45702Cu: goto label_7F45702C;
    case 0x7F457030u: goto label_7F457030;
    case 0x7F457034u: goto label_7F457034;
    case 0x7F457038u: goto label_7F457038;
    case 0x7F45703Cu: goto label_7F45703C;
    case 0x7F457040u: goto label_7F457040;
    case 0x7F457044u: goto label_7F457044;
    case 0x7F457048u: goto label_7F457048;
    case 0x7F45704Cu: goto label_7F45704C;
    case 0x7F457050u: goto label_7F457050;
    case 0x7F457054u: goto label_7F457054;
    case 0x7F457058u: goto label_7F457058;
    case 0x7F45705Cu: goto label_7F45705C;
    case 0x7F457060u: goto label_7F457060;
    case 0x7F457064u: goto label_7F457064;
    case 0x7F457068u: goto label_7F457068;
    case 0x7F45706Cu: goto label_7F45706C;
    case 0x7F457070u: goto label_7F457070;
    case 0x7F457074u: goto label_7F457074;
    case 0x7F457078u: goto label_7F457078;
    case 0x7F45707Cu: goto label_7F45707C;
    case 0x7F457080u: goto label_7F457080;
    case 0x7F457084u: goto label_7F457084;
    case 0x7F457088u: goto label_7F457088;
    case 0x7F45708Cu: goto label_7F45708C;
    case 0x7F457090u: goto label_7F457090;
    case 0x7F457094u: goto label_7F457094;
    case 0x7F457098u: goto label_7F457098;
    case 0x7F45709Cu: goto label_7F45709C;
    case 0x7F4570A0u: goto label_7F4570A0;
    case 0x7F4570A4u: goto label_7F4570A4;
    case 0x7F4570A8u: goto label_7F4570A8;
    case 0x7F4570ACu: goto label_7F4570AC;
    case 0x7F4570B0u: goto label_7F4570B0;
    case 0x7F4570B4u: goto label_7F4570B4;
    case 0x7F4570B8u: goto label_7F4570B8;
    case 0x7F4570BCu: goto label_7F4570BC;
    case 0x7F4570C0u: goto label_7F4570C0;
    case 0x7F4570C4u: goto label_7F4570C4;
    case 0x7F4570C8u: goto label_7F4570C8;
    case 0x7F4570CCu: goto label_7F4570CC;
    case 0x7F4570D0u: goto label_7F4570D0;
    case 0x7F4570D4u: goto label_7F4570D4;
    case 0x7F4570D8u: goto label_7F4570D8;
    case 0x7F4570DCu: goto label_7F4570DC;
    case 0x7F4570E0u: goto label_7F4570E0;
    case 0x7F4570E4u: goto label_7F4570E4;
    case 0x7F4570E8u: goto label_7F4570E8;
    case 0x7F4570ECu: goto label_7F4570EC;
    case 0x7F4570F0u: goto label_7F4570F0;
    case 0x7F4570F4u: goto label_7F4570F4;
    case 0x7F4570F8u: goto label_7F4570F8;
    case 0x7F4570FCu: goto label_7F4570FC;
    case 0x7F457100u: goto label_7F457100;
    case 0x7F457104u: goto label_7F457104;
    case 0x7F457108u: goto label_7F457108;
    case 0x7F45710Cu: goto label_7F45710C;
    case 0x7F457110u: goto label_7F457110;
    case 0x7F457114u: goto label_7F457114;
    case 0x7F457118u: goto label_7F457118;
    case 0x7F45711Cu: goto label_7F45711C;
    case 0x7F457120u: goto label_7F457120;
    case 0x7F457124u: goto label_7F457124;
    case 0x7F457128u: goto label_7F457128;
    case 0x7F45712Cu: goto label_7F45712C;
    case 0x7F457130u: goto label_7F457130;
    case 0x7F457134u: goto label_7F457134;
    case 0x7F457138u: goto label_7F457138;
    case 0x7F45713Cu: goto label_7F45713C;
    case 0x7F457140u: goto label_7F457140;
    case 0x7F457144u: goto label_7F457144;
    case 0x7F457148u: goto label_7F457148;
    case 0x7F45714Cu: goto label_7F45714C;
    case 0x7F457150u: goto label_7F457150;
    case 0x7F457154u: goto label_7F457154;
    case 0x7F457158u: goto label_7F457158;
    case 0x7F45715Cu: goto label_7F45715C;
    case 0x7F457160u: goto label_7F457160;
    case 0x7F457164u: goto label_7F457164;
    case 0x7F457168u: goto label_7F457168;
    case 0x7F45716Cu: goto label_7F45716C;
    case 0x7F457170u: goto label_7F457170;
    case 0x7F457174u: goto label_7F457174;
    case 0x7F457178u: goto label_7F457178;
    case 0x7F45717Cu: goto label_7F45717C;
    case 0x7F457180u: goto label_7F457180;
    case 0x7F457184u: goto label_7F457184;
    case 0x7F457188u: goto label_7F457188;
    case 0x7F45718Cu: goto label_7F45718C;
    case 0x7F457190u: goto label_7F457190;
    case 0x7F457194u: goto label_7F457194;
    case 0x7F457198u: goto label_7F457198;
    case 0x7F45719Cu: goto label_7F45719C;
    case 0x7F4571A0u: goto label_7F4571A0;
    case 0x7F4571A4u: goto label_7F4571A4;
    case 0x7F4571A8u: goto label_7F4571A8;
    case 0x7F4571ACu: goto label_7F4571AC;
    case 0x7F4571B0u: goto label_7F4571B0;
    case 0x7F4571B4u: goto label_7F4571B4;
    case 0x7F4571B8u: goto label_7F4571B8;
    case 0x7F4571BCu: goto label_7F4571BC;
    case 0x7F4571C0u: goto label_7F4571C0;
    case 0x7F4571C4u: goto label_7F4571C4;
    case 0x7F4571C8u: goto label_7F4571C8;
    case 0x7F4571CCu: goto label_7F4571CC;
    case 0x7F4571D0u: goto label_7F4571D0;
    case 0x7F4571D4u: goto label_7F4571D4;
    case 0x7F4571D8u: goto label_7F4571D8;
    case 0x7F4571DCu: goto label_7F4571DC;
    case 0x7F4571E0u: goto label_7F4571E0;
    case 0x7F4571E4u: goto label_7F4571E4;
    case 0x7F4571E8u: goto label_7F4571E8;
    case 0x7F4571ECu: goto label_7F4571EC;
    case 0x7F4571F0u: goto label_7F4571F0;
    case 0x7F4571F4u: goto label_7F4571F4;
    case 0x7F4571F8u: goto label_7F4571F8;
    case 0x7F4571FCu: goto label_7F4571FC;
    case 0x7F457200u: goto label_7F457200;
    case 0x7F457204u: goto label_7F457204;
    case 0x7F457208u: goto label_7F457208;
    case 0x7F45720Cu: goto label_7F45720C;
    case 0x7F457210u: goto label_7F457210;
    case 0x7F457214u: goto label_7F457214;
    case 0x7F457218u: goto label_7F457218;
    case 0x7F45721Cu: goto label_7F45721C;
    case 0x7F457220u: goto label_7F457220;
    case 0x7F457224u: goto label_7F457224;
    case 0x7F457228u: goto label_7F457228;
    case 0x7F45722Cu: goto label_7F45722C;
    case 0x7F457230u: goto label_7F457230;
    case 0x7F457234u: goto label_7F457234;
    case 0x7F457238u: goto label_7F457238;
    case 0x7F45723Cu: goto label_7F45723C;
    case 0x7F457240u: goto label_7F457240;
    case 0x7F457244u: goto label_7F457244;
    case 0x7F457248u: goto label_7F457248;
    case 0x7F45724Cu: goto label_7F45724C;
    case 0x7F457250u: goto label_7F457250;
    case 0x7F457254u: goto label_7F457254;
    case 0x7F457258u: goto label_7F457258;
    case 0x7F45725Cu: goto label_7F45725C;
    case 0x7F457260u: goto label_7F457260;
    case 0x7F457264u: goto label_7F457264;
    case 0x7F457268u: goto label_7F457268;
    case 0x7F45726Cu: goto label_7F45726C;
    case 0x7F457270u: goto label_7F457270;
    case 0x7F457274u: goto label_7F457274;
    case 0x7F457278u: goto label_7F457278;
    case 0x7F45727Cu: goto label_7F45727C;
    case 0x7F457280u: goto label_7F457280;
    case 0x7F457284u: goto label_7F457284;
    case 0x7F457288u: goto label_7F457288;
    case 0x7F45728Cu: goto label_7F45728C;
    case 0x7F457290u: goto label_7F457290;
    case 0x7F457294u: goto label_7F457294;
    case 0x7F457298u: goto label_7F457298;
    case 0x7F45729Cu: goto label_7F45729C;
    case 0x7F4572A0u: goto label_7F4572A0;
    case 0x7F4572A4u: goto label_7F4572A4;
    case 0x7F4572A8u: goto label_7F4572A8;
    case 0x7F4572ACu: goto label_7F4572AC;
    case 0x7F4572B0u: goto label_7F4572B0;
    case 0x7F4572B4u: goto label_7F4572B4;
    case 0x7F4572B8u: goto label_7F4572B8;
    case 0x7F4572BCu: goto label_7F4572BC;
    case 0x7F4572C0u: goto label_7F4572C0;
    case 0x7F4572C4u: goto label_7F4572C4;
    case 0x7F4572C8u: goto label_7F4572C8;
    case 0x7F4572CCu: goto label_7F4572CC;
    case 0x7F4572D0u: goto label_7F4572D0;
    case 0x7F4572D4u: goto label_7F4572D4;
    case 0x7F4572D8u: goto label_7F4572D8;
    case 0x7F4572DCu: goto label_7F4572DC;
    case 0x7F4572E0u: goto label_7F4572E0;
    case 0x7F4572E4u: goto label_7F4572E4;
    case 0x7F4572E8u: goto label_7F4572E8;
    case 0x7F4572ECu: goto label_7F4572EC;
    case 0x7F4572F0u: goto label_7F4572F0;
    case 0x7F4572F4u: goto label_7F4572F4;
    case 0x7F4572F8u: goto label_7F4572F8;
    case 0x7F4572FCu: goto label_7F4572FC;
    case 0x7F457300u: goto label_7F457300;
    case 0x7F457304u: goto label_7F457304;
    case 0x7F457308u: goto label_7F457308;
    case 0x7F45730Cu: goto label_7F45730C;
    case 0x7F457310u: goto label_7F457310;
    case 0x7F457314u: goto label_7F457314;
    case 0x7F457318u: goto label_7F457318;
    case 0x7F45731Cu: goto label_7F45731C;
    case 0x7F457320u: goto label_7F457320;
    case 0x7F457324u: goto label_7F457324;
    case 0x7F457328u: goto label_7F457328;
    case 0x7F45732Cu: goto label_7F45732C;
    case 0x7F457330u: goto label_7F457330;
    case 0x7F457334u: goto label_7F457334;
    case 0x7F457338u: goto label_7F457338;
    case 0x7F45733Cu: goto label_7F45733C;
    case 0x7F457340u: goto label_7F457340;
    case 0x7F457344u: goto label_7F457344;
    case 0x7F457348u: goto label_7F457348;
    case 0x7F45734Cu: goto label_7F45734C;
    case 0x7F457350u: goto label_7F457350;
    case 0x7F457354u: goto label_7F457354;
    case 0x7F457358u: goto label_7F457358;
    case 0x7F45735Cu: goto label_7F45735C;
    case 0x7F457360u: goto label_7F457360;
    case 0x7F457364u: goto label_7F457364;
    case 0x7F457368u: goto label_7F457368;
    case 0x7F45736Cu: goto label_7F45736C;
    case 0x7F457370u: goto label_7F457370;
    case 0x7F457374u: goto label_7F457374;
    case 0x7F457378u: goto label_7F457378;
    case 0x7F45737Cu: goto label_7F45737C;
    case 0x7F457380u: goto label_7F457380;
    case 0x7F457384u: goto label_7F457384;
    case 0x7F457388u: goto label_7F457388;
    case 0x7F45738Cu: goto label_7F45738C;
    case 0x7F457390u: goto label_7F457390;
    case 0x7F457394u: goto label_7F457394;
    case 0x7F457398u: goto label_7F457398;
    case 0x7F45739Cu: goto label_7F45739C;
    case 0x7F4573A0u: goto label_7F4573A0;
    case 0x7F4573A4u: goto label_7F4573A4;
    case 0x7F4573A8u: goto label_7F4573A8;
    case 0x7F4573ACu: goto label_7F4573AC;
    case 0x7F4573B0u: goto label_7F4573B0;
    case 0x7F4573B4u: goto label_7F4573B4;
    case 0x7F4573B8u: goto label_7F4573B8;
    case 0x7F4573BCu: goto label_7F4573BC;
    case 0x7F4573C0u: goto label_7F4573C0;
    case 0x7F4573C4u: goto label_7F4573C4;
    case 0x7F4573C8u: goto label_7F4573C8;
    case 0x7F4573CCu: goto label_7F4573CC;
    case 0x7F4573D0u: goto label_7F4573D0;
    case 0x7F4573D4u: goto label_7F4573D4;
    case 0x7F4573D8u: goto label_7F4573D8;
    case 0x7F4573DCu: goto label_7F4573DC;
    case 0x7F4573E0u: goto label_7F4573E0;
    case 0x7F4573E4u: goto label_7F4573E4;
    case 0x7F4573E8u: goto label_7F4573E8;
    case 0x7F4573ECu: goto label_7F4573EC;
    case 0x7F4573F0u: goto label_7F4573F0;
    case 0x7F4573F4u: goto label_7F4573F4;
    case 0x7F4573F8u: goto label_7F4573F8;
    case 0x7F4573FCu: goto label_7F4573FC;
    case 0x7F457400u: goto label_7F457400;
    case 0x7F457404u: goto label_7F457404;
    case 0x7F457408u: goto label_7F457408;
    case 0x7F45740Cu: goto label_7F45740C;
    case 0x7F457410u: goto label_7F457410;
    case 0x7F457414u: goto label_7F457414;
    case 0x7F457418u: goto label_7F457418;
    case 0x7F45741Cu: goto label_7F45741C;
    case 0x7F457420u: goto label_7F457420;
    case 0x7F457424u: goto label_7F457424;
    case 0x7F457428u: goto label_7F457428;
    case 0x7F45742Cu: goto label_7F45742C;
    case 0x7F457430u: goto label_7F457430;
    case 0x7F457434u: goto label_7F457434;
    case 0x7F457438u: goto label_7F457438;
    case 0x7F45743Cu: goto label_7F45743C;
    case 0x7F457440u: goto label_7F457440;
    case 0x7F457444u: goto label_7F457444;
    case 0x7F457448u: goto label_7F457448;
    case 0x7F45744Cu: goto label_7F45744C;
    case 0x7F457450u: goto label_7F457450;
    case 0x7F457454u: goto label_7F457454;
    case 0x7F457458u: goto label_7F457458;
    case 0x7F45745Cu: goto label_7F45745C;
    case 0x7F457460u: goto label_7F457460;
    case 0x7F457464u: goto label_7F457464;
    case 0x7F457468u: goto label_7F457468;
    case 0x7F45746Cu: goto label_7F45746C;
    case 0x7F457470u: goto label_7F457470;
    case 0x7F457474u: goto label_7F457474;
    case 0x7F457478u: goto label_7F457478;
    case 0x7F45747Cu: goto label_7F45747C;
    case 0x7F457480u: goto label_7F457480;
    case 0x7F457484u: goto label_7F457484;
    case 0x7F457488u: goto label_7F457488;
    case 0x7F45748Cu: goto label_7F45748C;
    case 0x7F457490u: goto label_7F457490;
    case 0x7F457494u: goto label_7F457494;
    case 0x7F457498u: goto label_7F457498;
    case 0x7F45749Cu: goto label_7F45749C;
    case 0x7F4574A0u: goto label_7F4574A0;
    case 0x7F4574A4u: goto label_7F4574A4;
    case 0x7F4574A8u: goto label_7F4574A8;
    case 0x7F4574ACu: goto label_7F4574AC;
    case 0x7F4574B0u: goto label_7F4574B0;
    case 0x7F4574B4u: goto label_7F4574B4;
    case 0x7F4574B8u: goto label_7F4574B8;
    case 0x7F4574BCu: goto label_7F4574BC;
    case 0x7F4574C0u: goto label_7F4574C0;
    case 0x7F4574C4u: goto label_7F4574C4;
    case 0x7F4574C8u: goto label_7F4574C8;
    case 0x7F4574CCu: goto label_7F4574CC;
    case 0x7F4574D0u: goto label_7F4574D0;
    case 0x7F4574D4u: goto label_7F4574D4;
    case 0x7F4574D8u: goto label_7F4574D8;
    case 0x7F4574DCu: goto label_7F4574DC;
    case 0x7F4574E0u: goto label_7F4574E0;
    case 0x7F4574E4u: goto label_7F4574E4;
    case 0x7F4574E8u: goto label_7F4574E8;
    case 0x7F4574ECu: goto label_7F4574EC;
    case 0x7F4574F0u: goto label_7F4574F0;
    case 0x7F4574F4u: goto label_7F4574F4;
    case 0x7F4574F8u: goto label_7F4574F8;
    case 0x7F4574FCu: goto label_7F4574FC;
    case 0x7F457500u: goto label_7F457500;
    case 0x7F457504u: goto label_7F457504;
    case 0x7F457508u: goto label_7F457508;
    case 0x7F45750Cu: goto label_7F45750C;
    case 0x7F457510u: goto label_7F457510;
    case 0x7F457514u: goto label_7F457514;
    case 0x7F457518u: goto label_7F457518;
    case 0x7F45751Cu: goto label_7F45751C;
    case 0x7F457520u: goto label_7F457520;
    case 0x7F457524u: goto label_7F457524;
    case 0x7F457528u: goto label_7F457528;
    case 0x7F45752Cu: goto label_7F45752C;
    case 0x7F457530u: goto label_7F457530;
    case 0x7F457534u: goto label_7F457534;
    case 0x7F457538u: goto label_7F457538;
    case 0x7F45753Cu: goto label_7F45753C;
    case 0x7F457540u: goto label_7F457540;
    case 0x7F457544u: goto label_7F457544;
    case 0x7F457548u: goto label_7F457548;
    case 0x7F45754Cu: goto label_7F45754C;
    case 0x7F457550u: goto label_7F457550;
    case 0x7F457554u: goto label_7F457554;
    case 0x7F457558u: goto label_7F457558;
    case 0x7F45755Cu: goto label_7F45755C;
    case 0x7F457560u: goto label_7F457560;
    case 0x7F457564u: goto label_7F457564;
    case 0x7F457568u: goto label_7F457568;
    case 0x7F45756Cu: goto label_7F45756C;
    case 0x7F457570u: goto label_7F457570;
    case 0x7F457574u: goto label_7F457574;
    case 0x7F457578u: goto label_7F457578;
    case 0x7F45757Cu: goto label_7F45757C;
    case 0x7F457580u: goto label_7F457580;
    case 0x7F457584u: goto label_7F457584;
    case 0x7F457588u: goto label_7F457588;
    case 0x7F45758Cu: goto label_7F45758C;
    case 0x7F457590u: goto label_7F457590;
    case 0x7F457594u: goto label_7F457594;
    case 0x7F457598u: goto label_7F457598;
    case 0x7F45759Cu: goto label_7F45759C;
    case 0x7F4575A0u: goto label_7F4575A0;
    case 0x7F4575A4u: goto label_7F4575A4;
    case 0x7F4575A8u: goto label_7F4575A8;
    case 0x7F4575ACu: goto label_7F4575AC;
    case 0x7F4575B0u: goto label_7F4575B0;
    case 0x7F4575B4u: goto label_7F4575B4;
    case 0x7F4575B8u: goto label_7F4575B8;
    case 0x7F4575BCu: goto label_7F4575BC;
    case 0x7F4575C0u: goto label_7F4575C0;
    case 0x7F4575C4u: goto label_7F4575C4;
    case 0x7F4575C8u: goto label_7F4575C8;
    case 0x7F4575CCu: goto label_7F4575CC;
    case 0x7F4575D0u: goto label_7F4575D0;
    case 0x7F4575D4u: goto label_7F4575D4;
    case 0x7F4575D8u: goto label_7F4575D8;
    case 0x7F4575DCu: goto label_7F4575DC;
    case 0x7F4575E0u: goto label_7F4575E0;
    case 0x7F4575E4u: goto label_7F4575E4;
    case 0x7F4575E8u: goto label_7F4575E8;
    case 0x7F4575ECu: goto label_7F4575EC;
    case 0x7F4575F0u: goto label_7F4575F0;
    case 0x7F4575F4u: goto label_7F4575F4;
    case 0x7F4575F8u: goto label_7F4575F8;
    case 0x7F4575FCu: goto label_7F4575FC;
    case 0x7F457600u: goto label_7F457600;
    case 0x7F457604u: goto label_7F457604;
    case 0x7F457608u: goto label_7F457608;
    case 0x7F45760Cu: goto label_7F45760C;
    case 0x7F457610u: goto label_7F457610;
    case 0x7F457614u: goto label_7F457614;
    case 0x7F457618u: goto label_7F457618;
    case 0x7F45761Cu: goto label_7F45761C;
    case 0x7F457620u: goto label_7F457620;
    case 0x7F457624u: goto label_7F457624;
    case 0x7F457628u: goto label_7F457628;
    case 0x7F45762Cu: goto label_7F45762C;
    case 0x7F457630u: goto label_7F457630;
    case 0x7F457634u: goto label_7F457634;
    case 0x7F457638u: goto label_7F457638;
    case 0x7F45763Cu: goto label_7F45763C;
    case 0x7F457640u: goto label_7F457640;
    case 0x7F457644u: goto label_7F457644;
    case 0x7F457648u: goto label_7F457648;
    case 0x7F45764Cu: goto label_7F45764C;
    case 0x7F457650u: goto label_7F457650;
    case 0x7F457654u: goto label_7F457654;
    case 0x7F457658u: goto label_7F457658;
    case 0x7F45765Cu: goto label_7F45765C;
    case 0x7F457660u: goto label_7F457660;
    case 0x7F457664u: goto label_7F457664;
    case 0x7F457668u: goto label_7F457668;
    case 0x7F45766Cu: goto label_7F45766C;
    case 0x7F457670u: goto label_7F457670;
    case 0x7F457674u: goto label_7F457674;
    case 0x7F457678u: goto label_7F457678;
    case 0x7F45767Cu: goto label_7F45767C;
    case 0x7F457680u: goto label_7F457680;
    case 0x7F457684u: goto label_7F457684;
    case 0x7F457688u: goto label_7F457688;
    case 0x7F45768Cu: goto label_7F45768C;
    case 0x7F457690u: goto label_7F457690;
    case 0x7F457694u: goto label_7F457694;
    case 0x7F457698u: goto label_7F457698;
    case 0x7F45769Cu: goto label_7F45769C;
    case 0x7F4576A0u: goto label_7F4576A0;
    case 0x7F4576A4u: goto label_7F4576A4;
    case 0x7F4576A8u: goto label_7F4576A8;
    case 0x7F4576ACu: goto label_7F4576AC;
    case 0x7F4576B0u: goto label_7F4576B0;
    case 0x7F4576B4u: goto label_7F4576B4;
    case 0x7F4576B8u: goto label_7F4576B8;
    case 0x7F4576BCu: goto label_7F4576BC;
    case 0x7F4576C0u: goto label_7F4576C0;
    case 0x7F4576C4u: goto label_7F4576C4;
    case 0x7F4576C8u: goto label_7F4576C8;
    case 0x7F4576CCu: goto label_7F4576CC;
    case 0x7F4576D0u: goto label_7F4576D0;
    case 0x7F4576D4u: goto label_7F4576D4;
    case 0x7F4576D8u: goto label_7F4576D8;
    case 0x7F4576DCu: goto label_7F4576DC;
    case 0x7F4576E0u: goto label_7F4576E0;
    case 0x7F4576E4u: goto label_7F4576E4;
    case 0x7F4576E8u: goto label_7F4576E8;
    case 0x7F4576ECu: goto label_7F4576EC;
    case 0x7F4576F0u: goto label_7F4576F0;
    case 0x7F4576F4u: goto label_7F4576F4;
    case 0x7F4576F8u: goto label_7F4576F8;
    case 0x7F4576FCu: goto label_7F4576FC;
    case 0x7F457700u: goto label_7F457700;
    case 0x7F457704u: goto label_7F457704;
    case 0x7F457708u: goto label_7F457708;
    case 0x7F45770Cu: goto label_7F45770C;
    case 0x7F457710u: goto label_7F457710;
    case 0x7F457714u: goto label_7F457714;
    case 0x7F457718u: goto label_7F457718;
    case 0x7F45771Cu: goto label_7F45771C;
    case 0x7F457720u: goto label_7F457720;
    case 0x7F457724u: goto label_7F457724;
    case 0x7F457728u: goto label_7F457728;
    case 0x7F45772Cu: goto label_7F45772C;
    case 0x7F457730u: goto label_7F457730;
    case 0x7F457734u: goto label_7F457734;
    case 0x7F457738u: goto label_7F457738;
    case 0x7F45773Cu: goto label_7F45773C;
    case 0x7F457740u: goto label_7F457740;
    case 0x7F457744u: goto label_7F457744;
    case 0x7F457748u: goto label_7F457748;
    case 0x7F45774Cu: goto label_7F45774C;
    case 0x7F457750u: goto label_7F457750;
    case 0x7F457754u: goto label_7F457754;
    case 0x7F457758u: goto label_7F457758;
    case 0x7F45775Cu: goto label_7F45775C;
    case 0x7F457760u: goto label_7F457760;
    case 0x7F457764u: goto label_7F457764;
    case 0x7F457768u: goto label_7F457768;
    case 0x7F45776Cu: goto label_7F45776C;
    case 0x7F457770u: goto label_7F457770;
    case 0x7F457774u: goto label_7F457774;
    case 0x7F457778u: goto label_7F457778;
    case 0x7F45777Cu: goto label_7F45777C;
    case 0x7F457780u: goto label_7F457780;
    case 0x7F457784u: goto label_7F457784;
    case 0x7F457788u: goto label_7F457788;
    case 0x7F45778Cu: goto label_7F45778C;
    case 0x7F457790u: goto label_7F457790;
    case 0x7F457794u: goto label_7F457794;
    case 0x7F457798u: goto label_7F457798;
    case 0x7F45779Cu: goto label_7F45779C;
    case 0x7F4577A0u: goto label_7F4577A0;
    case 0x7F4577A4u: goto label_7F4577A4;
    case 0x7F4577A8u: goto label_7F4577A8;
    case 0x7F4577ACu: goto label_7F4577AC;
    case 0x7F4577B0u: goto label_7F4577B0;
    case 0x7F4577B4u: goto label_7F4577B4;
    case 0x7F4577B8u: goto label_7F4577B8;
    case 0x7F4577BCu: goto label_7F4577BC;
    case 0x7F4577C0u: goto label_7F4577C0;
    case 0x7F4577C4u: goto label_7F4577C4;
    case 0x7F4577C8u: goto label_7F4577C8;
    case 0x7F4577CCu: goto label_7F4577CC;
    case 0x7F4577D0u: goto label_7F4577D0;
    case 0x7F4577D4u: goto label_7F4577D4;
    case 0x7F4577D8u: goto label_7F4577D8;
    case 0x7F4577DCu: goto label_7F4577DC;
    case 0x7F4577E0u: goto label_7F4577E0;
    case 0x7F4577E4u: goto label_7F4577E4;
    case 0x7F4577E8u: goto label_7F4577E8;
    case 0x7F4577ECu: goto label_7F4577EC;
    case 0x7F4577F0u: goto label_7F4577F0;
    case 0x7F4577F4u: goto label_7F4577F4;
    case 0x7F4577F8u: goto label_7F4577F8;
    case 0x7F4577FCu: goto label_7F4577FC;
    case 0x7F457800u: goto label_7F457800;
    case 0x7F457804u: goto label_7F457804;
    case 0x7F457808u: goto label_7F457808;
    case 0x7F45780Cu: goto label_7F45780C;
    case 0x7F457810u: goto label_7F457810;
    case 0x7F457814u: goto label_7F457814;
    case 0x7F457818u: goto label_7F457818;
    case 0x7F45781Cu: goto label_7F45781C;
    case 0x7F457820u: goto label_7F457820;
    case 0x7F457824u: goto label_7F457824;
    case 0x7F457828u: goto label_7F457828;
    case 0x7F45782Cu: goto label_7F45782C;
    case 0x7F457830u: goto label_7F457830;
    case 0x7F457834u: goto label_7F457834;
    case 0x7F457838u: goto label_7F457838;
    case 0x7F45783Cu: goto label_7F45783C;
    case 0x7F457840u: goto label_7F457840;
    case 0x7F457844u: goto label_7F457844;
    case 0x7F457848u: goto label_7F457848;
    case 0x7F45784Cu: goto label_7F45784C;
    case 0x7F457850u: goto label_7F457850;
    case 0x7F457854u: goto label_7F457854;
    case 0x7F457858u: goto label_7F457858;
    case 0x7F45785Cu: goto label_7F45785C;
    case 0x7F457860u: goto label_7F457860;
    case 0x7F457864u: goto label_7F457864;
    case 0x7F457868u: goto label_7F457868;
    case 0x7F45786Cu: goto label_7F45786C;
    case 0x7F457870u: goto label_7F457870;
    case 0x7F457874u: goto label_7F457874;
    case 0x7F457878u: goto label_7F457878;
    case 0x7F45787Cu: goto label_7F45787C;
    case 0x7F457880u: goto label_7F457880;
    case 0x7F457884u: goto label_7F457884;
    case 0x7F457888u: goto label_7F457888;
    case 0x7F45788Cu: goto label_7F45788C;
    case 0x7F457890u: goto label_7F457890;
    case 0x7F457894u: goto label_7F457894;
    case 0x7F457898u: goto label_7F457898;
    case 0x7F45789Cu: goto label_7F45789C;
    case 0x7F4578A0u: goto label_7F4578A0;
    case 0x7F4578A4u: goto label_7F4578A4;
    case 0x7F4578A8u: goto label_7F4578A8;
    case 0x7F4578ACu: goto label_7F4578AC;
    case 0x7F4578B0u: goto label_7F4578B0;
    case 0x7F4578B4u: goto label_7F4578B4;
    case 0x7F4578B8u: goto label_7F4578B8;
    case 0x7F4578BCu: goto label_7F4578BC;
    case 0x7F4578C0u: goto label_7F4578C0;
    case 0x7F4578C4u: goto label_7F4578C4;
    case 0x7F4578C8u: goto label_7F4578C8;
    case 0x7F4578CCu: goto label_7F4578CC;
    case 0x7F4578D0u: goto label_7F4578D0;
    case 0x7F4578D4u: goto label_7F4578D4;
    case 0x7F4578D8u: goto label_7F4578D8;
    case 0x7F4578DCu: goto label_7F4578DC;
    case 0x7F4578E0u: goto label_7F4578E0;
    case 0x7F4578E4u: goto label_7F4578E4;
    case 0x7F4578E8u: goto label_7F4578E8;
    case 0x7F4578ECu: goto label_7F4578EC;
    case 0x7F4578F0u: goto label_7F4578F0;
    case 0x7F4578F4u: goto label_7F4578F4;
    case 0x7F4578F8u: goto label_7F4578F8;
    case 0x7F4578FCu: goto label_7F4578FC;
    case 0x7F457900u: goto label_7F457900;
    case 0x7F457904u: goto label_7F457904;
    case 0x7F457908u: goto label_7F457908;
    case 0x7F45790Cu: goto label_7F45790C;
    case 0x7F457910u: goto label_7F457910;
    case 0x7F457914u: goto label_7F457914;
    case 0x7F457918u: goto label_7F457918;
    case 0x7F45791Cu: goto label_7F45791C;
    case 0x7F457920u: goto label_7F457920;
    case 0x7F457924u: goto label_7F457924;
    case 0x7F457928u: goto label_7F457928;
    case 0x7F45792Cu: goto label_7F45792C;
    case 0x7F457930u: goto label_7F457930;
    case 0x7F457934u: goto label_7F457934;
    case 0x7F457938u: goto label_7F457938;
    case 0x7F45793Cu: goto label_7F45793C;
    case 0x7F457940u: goto label_7F457940;
    case 0x7F457944u: goto label_7F457944;
    case 0x7F457948u: goto label_7F457948;
    case 0x7F45794Cu: goto label_7F45794C;
    case 0x7F457950u: goto label_7F457950;
    case 0x7F457954u: goto label_7F457954;
    case 0x7F457958u: goto label_7F457958;
    case 0x7F45795Cu: goto label_7F45795C;
    case 0x7F457960u: goto label_7F457960;
    case 0x7F457964u: goto label_7F457964;
    case 0x7F457968u: goto label_7F457968;
    case 0x7F45796Cu: goto label_7F45796C;
    case 0x7F457970u: goto label_7F457970;
    case 0x7F457974u: goto label_7F457974;
    case 0x7F457978u: goto label_7F457978;
    case 0x7F45797Cu: goto label_7F45797C;
    case 0x7F457980u: goto label_7F457980;
    case 0x7F457984u: goto label_7F457984;
    case 0x7F457988u: goto label_7F457988;
    case 0x7F45798Cu: goto label_7F45798C;
    case 0x7F457990u: goto label_7F457990;
    case 0x7F457994u: goto label_7F457994;
    case 0x7F457998u: goto label_7F457998;
    case 0x7F45799Cu: goto label_7F45799C;
    case 0x7F4579A0u: goto label_7F4579A0;
    case 0x7F4579A4u: goto label_7F4579A4;
    case 0x7F4579A8u: goto label_7F4579A8;
    case 0x7F4579ACu: goto label_7F4579AC;
    case 0x7F4579B0u: goto label_7F4579B0;
    case 0x7F4579B4u: goto label_7F4579B4;
    case 0x7F4579B8u: goto label_7F4579B8;
    case 0x7F4579BCu: goto label_7F4579BC;
    case 0x7F4579C0u: goto label_7F4579C0;
    case 0x7F4579C4u: goto label_7F4579C4;
    case 0x7F4579C8u: goto label_7F4579C8;
    case 0x7F4579CCu: goto label_7F4579CC;
    case 0x7F4579D0u: goto label_7F4579D0;
    case 0x7F4579D4u: goto label_7F4579D4;
    case 0x7F4579D8u: goto label_7F4579D8;
    case 0x7F4579DCu: goto label_7F4579DC;
    case 0x7F4579E0u: goto label_7F4579E0;
    case 0x7F4579E4u: goto label_7F4579E4;
    case 0x7F4579E8u: goto label_7F4579E8;
    case 0x7F4579ECu: goto label_7F4579EC;
    case 0x7F4579F0u: goto label_7F4579F0;
    case 0x7F4579F4u: goto label_7F4579F4;
    case 0x7F4579F8u: goto label_7F4579F8;
    case 0x7F4579FCu: goto label_7F4579FC;
    case 0x7F457A00u: goto label_7F457A00;
    case 0x7F457A04u: goto label_7F457A04;
    case 0x7F457A08u: goto label_7F457A08;
    case 0x7F457A0Cu: goto label_7F457A0C;
    case 0x7F457A10u: goto label_7F457A10;
    case 0x7F457A14u: goto label_7F457A14;
    case 0x7F457A18u: goto label_7F457A18;
    case 0x7F457A1Cu: goto label_7F457A1C;
    case 0x7F457A20u: goto label_7F457A20;
    case 0x7F457A24u: goto label_7F457A24;
    case 0x7F457A28u: goto label_7F457A28;
    case 0x7F457A2Cu: goto label_7F457A2C;
    case 0x7F457A30u: goto label_7F457A30;
    case 0x7F457A34u: goto label_7F457A34;
    case 0x7F457A38u: goto label_7F457A38;
    case 0x7F457A3Cu: goto label_7F457A3C;
    case 0x7F457A40u: goto label_7F457A40;
    case 0x7F457A44u: goto label_7F457A44;
    case 0x7F457A48u: goto label_7F457A48;
    case 0x7F457A4Cu: goto label_7F457A4C;
    case 0x7F457A50u: goto label_7F457A50;
    case 0x7F457A54u: goto label_7F457A54;
    case 0x7F457A58u: goto label_7F457A58;
    case 0x7F457A5Cu: goto label_7F457A5C;
    case 0x7F457A60u: goto label_7F457A60;
    case 0x7F457A64u: goto label_7F457A64;
    case 0x7F457A68u: goto label_7F457A68;
    case 0x7F457A6Cu: goto label_7F457A6C;
    case 0x7F457A70u: goto label_7F457A70;
    case 0x7F457A74u: goto label_7F457A74;
    case 0x7F457A78u: goto label_7F457A78;
    case 0x7F457A7Cu: goto label_7F457A7C;
    case 0x7F457A80u: goto label_7F457A80;
    case 0x7F457A84u: goto label_7F457A84;
    case 0x7F457A88u: goto label_7F457A88;
    case 0x7F457A8Cu: goto label_7F457A8C;
    case 0x7F457A90u: goto label_7F457A90;
    case 0x7F457A94u: goto label_7F457A94;
    case 0x7F457A98u: goto label_7F457A98;
    case 0x7F457A9Cu: goto label_7F457A9C;
    case 0x7F457AA0u: goto label_7F457AA0;
    case 0x7F457AA4u: goto label_7F457AA4;
    case 0x7F457AA8u: goto label_7F457AA8;
    case 0x7F457AACu: goto label_7F457AAC;
    case 0x7F457AB0u: goto label_7F457AB0;
    case 0x7F457AB4u: goto label_7F457AB4;
    case 0x7F457AB8u: goto label_7F457AB8;
    case 0x7F457ABCu: goto label_7F457ABC;
    case 0x7F457AC0u: goto label_7F457AC0;
    case 0x7F457AC4u: goto label_7F457AC4;
    case 0x7F457AC8u: goto label_7F457AC8;
    case 0x7F457ACCu: goto label_7F457ACC;
    case 0x7F457AD0u: goto label_7F457AD0;
    case 0x7F457AD4u: goto label_7F457AD4;
    case 0x7F457AD8u: goto label_7F457AD8;
    case 0x7F457ADCu: goto label_7F457ADC;
    case 0x7F457AE0u: goto label_7F457AE0;
    case 0x7F457AE4u: goto label_7F457AE4;
    case 0x7F457AE8u: goto label_7F457AE8;
    case 0x7F457AECu: goto label_7F457AEC;
    case 0x7F457AF0u: goto label_7F457AF0;
    case 0x7F457AF4u: goto label_7F457AF4;
    case 0x7F457AF8u: goto label_7F457AF8;
    case 0x7F457AFCu: goto label_7F457AFC;
    case 0x7F457B00u: goto label_7F457B00;
    case 0x7F457B04u: goto label_7F457B04;
    case 0x7F457B08u: goto label_7F457B08;
    case 0x7F457B0Cu: goto label_7F457B0C;
    case 0x7F457B10u: goto label_7F457B10;
    case 0x7F457B14u: goto label_7F457B14;
    case 0x7F457B18u: goto label_7F457B18;
    case 0x7F457B1Cu: goto label_7F457B1C;
    case 0x7F457B20u: goto label_7F457B20;
    case 0x7F457B24u: goto label_7F457B24;
    case 0x7F457B28u: goto label_7F457B28;
    case 0x7F457B2Cu: goto label_7F457B2C;
    case 0x7F457B30u: goto label_7F457B30;
    case 0x7F457B34u: goto label_7F457B34;
    case 0x7F457B38u: goto label_7F457B38;
    case 0x7F457B3Cu: goto label_7F457B3C;
    case 0x7F457B40u: goto label_7F457B40;
    case 0x7F457B44u: goto label_7F457B44;
    case 0x7F457B48u: goto label_7F457B48;
    case 0x7F457B4Cu: goto label_7F457B4C;
    case 0x7F457B50u: goto label_7F457B50;
    case 0x7F457B54u: goto label_7F457B54;
    case 0x7F457B58u: goto label_7F457B58;
    case 0x7F457B5Cu: goto label_7F457B5C;
    case 0x7F457B60u: goto label_7F457B60;
    case 0x7F457B64u: goto label_7F457B64;
    case 0x7F457B68u: goto label_7F457B68;
    case 0x7F457B6Cu: goto label_7F457B6C;
    case 0x7F457B70u: goto label_7F457B70;
    case 0x7F457B74u: goto label_7F457B74;
    case 0x7F457B78u: goto label_7F457B78;
    case 0x7F457B7Cu: goto label_7F457B7C;
    case 0x7F457B80u: goto label_7F457B80;
    case 0x7F457B84u: goto label_7F457B84;
    case 0x7F457B88u: goto label_7F457B88;
    case 0x7F457B8Cu: goto label_7F457B8C;
    case 0x7F457B90u: goto label_7F457B90;
    case 0x7F457B94u: goto label_7F457B94;
    case 0x7F457B98u: goto label_7F457B98;
    case 0x7F457B9Cu: goto label_7F457B9C;
    case 0x7F457BA0u: goto label_7F457BA0;
    case 0x7F457BA4u: goto label_7F457BA4;
    case 0x7F457BA8u: goto label_7F457BA8;
    case 0x7F457BACu: goto label_7F457BAC;
    case 0x7F457BB0u: goto label_7F457BB0;
    case 0x7F457BB4u: goto label_7F457BB4;
    case 0x7F457BB8u: goto label_7F457BB8;
    case 0x7F457BBCu: goto label_7F457BBC;
    case 0x7F457BC0u: goto label_7F457BC0;
    case 0x7F457BC4u: goto label_7F457BC4;
    case 0x7F457BC8u: goto label_7F457BC8;
    case 0x7F457BCCu: goto label_7F457BCC;
    case 0x7F457BD0u: goto label_7F457BD0;
    case 0x7F457BD4u: goto label_7F457BD4;
    case 0x7F457BD8u: goto label_7F457BD8;
    case 0x7F457BDCu: goto label_7F457BDC;
    case 0x7F457BE0u: goto label_7F457BE0;
    case 0x7F457BE4u: goto label_7F457BE4;
    case 0x7F457BE8u: goto label_7F457BE8;
    case 0x7F457BECu: goto label_7F457BEC;
    case 0x7F457BF0u: goto label_7F457BF0;
    case 0x7F457BF4u: goto label_7F457BF4;
    case 0x7F457BF8u: goto label_7F457BF8;
    case 0x7F457BFCu: goto label_7F457BFC;
    case 0x7F457C00u: goto label_7F457C00;
    case 0x7F457C04u: goto label_7F457C04;
    case 0x7F457C08u: goto label_7F457C08;
    case 0x7F457C0Cu: goto label_7F457C0C;
    case 0x7F457C10u: goto label_7F457C10;
    case 0x7F457C14u: goto label_7F457C14;
    case 0x7F457C18u: goto label_7F457C18;
    case 0x7F457C1Cu: goto label_7F457C1C;
    case 0x7F457C20u: goto label_7F457C20;
    case 0x7F457C24u: goto label_7F457C24;
    case 0x7F457C28u: goto label_7F457C28;
    case 0x7F457C2Cu: goto label_7F457C2C;
    case 0x7F457C30u: goto label_7F457C30;
    case 0x7F457C34u: goto label_7F457C34;
    case 0x7F457C38u: goto label_7F457C38;
    case 0x7F457C3Cu: goto label_7F457C3C;
    case 0x7F457C40u: goto label_7F457C40;
    case 0x7F457C44u: goto label_7F457C44;
    case 0x7F457C48u: goto label_7F457C48;
    case 0x7F457C4Cu: goto label_7F457C4C;
    case 0x7F457C50u: goto label_7F457C50;
    case 0x7F457C54u: goto label_7F457C54;
    case 0x7F457C58u: goto label_7F457C58;
    case 0x7F457C5Cu: goto label_7F457C5C;
    case 0x7F457C60u: goto label_7F457C60;
    case 0x7F457C64u: goto label_7F457C64;
    case 0x7F457C68u: goto label_7F457C68;
    case 0x7F457C6Cu: goto label_7F457C6C;
    case 0x7F457C70u: goto label_7F457C70;
    case 0x7F457C74u: goto label_7F457C74;
    case 0x7F457C78u: goto label_7F457C78;
    case 0x7F457C7Cu: goto label_7F457C7C;
    case 0x7F457C80u: goto label_7F457C80;
    case 0x7F457C84u: goto label_7F457C84;
    case 0x7F457C88u: goto label_7F457C88;
    case 0x7F457C8Cu: goto label_7F457C8C;
    case 0x7F457C90u: goto label_7F457C90;
    case 0x7F457C94u: goto label_7F457C94;
    case 0x7F457C98u: goto label_7F457C98;
    case 0x7F457C9Cu: goto label_7F457C9C;
    case 0x7F457CA0u: goto label_7F457CA0;
    case 0x7F457CA4u: goto label_7F457CA4;
    case 0x7F457CA8u: goto label_7F457CA8;
    case 0x7F457CACu: goto label_7F457CAC;
    case 0x7F457CB0u: goto label_7F457CB0;
    case 0x7F457CB4u: goto label_7F457CB4;
    case 0x7F457CB8u: goto label_7F457CB8;
    case 0x7F457CBCu: goto label_7F457CBC;
    case 0x7F457CC0u: goto label_7F457CC0;
    case 0x7F457CC4u: goto label_7F457CC4;
    case 0x7F457CC8u: goto label_7F457CC8;
    case 0x7F457CCCu: goto label_7F457CCC;
    case 0x7F457CD0u: goto label_7F457CD0;
    case 0x7F457CD4u: goto label_7F457CD4;
    case 0x7F457CD8u: goto label_7F457CD8;
    case 0x7F457CDCu: goto label_7F457CDC;
    case 0x7F457CE0u: goto label_7F457CE0;
    case 0x7F457CE4u: goto label_7F457CE4;
    case 0x7F457CE8u: goto label_7F457CE8;
    case 0x7F457CECu: goto label_7F457CEC;
    case 0x7F457CF0u: goto label_7F457CF0;
    case 0x7F457CF4u: goto label_7F457CF4;
    case 0x7F457CF8u: goto label_7F457CF8;
    case 0x7F457CFCu: goto label_7F457CFC;
    case 0x7F457D00u: goto label_7F457D00;
    case 0x7F457D04u: goto label_7F457D04;
    case 0x7F457D08u: goto label_7F457D08;
    case 0x7F457D0Cu: goto label_7F457D0C;
    case 0x7F457D10u: goto label_7F457D10;
    case 0x7F457D14u: goto label_7F457D14;
    case 0x7F457D18u: goto label_7F457D18;
    case 0x7F457D1Cu: goto label_7F457D1C;
    case 0x7F457D20u: goto label_7F457D20;
    case 0x7F457D24u: goto label_7F457D24;
    case 0x7F457D28u: goto label_7F457D28;
    case 0x7F457D2Cu: goto label_7F457D2C;
    case 0x7F457D30u: goto label_7F457D30;
    case 0x7F457D34u: goto label_7F457D34;
    case 0x7F457D38u: goto label_7F457D38;
    case 0x7F457D3Cu: goto label_7F457D3C;
    case 0x7F457D40u: goto label_7F457D40;
    case 0x7F457D44u: goto label_7F457D44;
    case 0x7F457D48u: goto label_7F457D48;
    case 0x7F457D4Cu: goto label_7F457D4C;
    case 0x7F457D50u: goto label_7F457D50;
    case 0x7F457D54u: goto label_7F457D54;
    case 0x7F457D58u: goto label_7F457D58;
    case 0x7F457D5Cu: goto label_7F457D5C;
    case 0x7F457D60u: goto label_7F457D60;
    case 0x7F457D64u: goto label_7F457D64;
    case 0x7F457D68u: goto label_7F457D68;
    case 0x7F457D6Cu: goto label_7F457D6C;
    case 0x7F457D70u: goto label_7F457D70;
    case 0x7F457D74u: goto label_7F457D74;
    case 0x7F457D78u: goto label_7F457D78;
    case 0x7F457D7Cu: goto label_7F457D7C;
    case 0x7F457D80u: goto label_7F457D80;
    case 0x7F457D84u: goto label_7F457D84;
    case 0x7F457D88u: goto label_7F457D88;
    case 0x7F457D8Cu: goto label_7F457D8C;
    case 0x7F457D90u: goto label_7F457D90;
    case 0x7F457D94u: goto label_7F457D94;
    case 0x7F457D98u: goto label_7F457D98;
    case 0x7F457D9Cu: goto label_7F457D9C;
    case 0x7F457DA0u: goto label_7F457DA0;
    case 0x7F457DA4u: goto label_7F457DA4;
    case 0x7F457DA8u: goto label_7F457DA8;
    case 0x7F457DACu: goto label_7F457DAC;
    case 0x7F457DB0u: goto label_7F457DB0;
    case 0x7F457DB4u: goto label_7F457DB4;
    case 0x7F457DB8u: goto label_7F457DB8;
    case 0x7F457DBCu: goto label_7F457DBC;
    case 0x7F457DC0u: goto label_7F457DC0;
    case 0x7F457DC4u: goto label_7F457DC4;
    case 0x7F457DC8u: goto label_7F457DC8;
    case 0x7F457DCCu: goto label_7F457DCC;
    case 0x7F457DD0u: goto label_7F457DD0;
    case 0x7F457DD4u: goto label_7F457DD4;
    case 0x7F457DD8u: goto label_7F457DD8;
    case 0x7F457DDCu: goto label_7F457DDC;
    case 0x7F457DE0u: goto label_7F457DE0;
    case 0x7F457DE4u: goto label_7F457DE4;
    case 0x7F457DE8u: goto label_7F457DE8;
    case 0x7F457DECu: goto label_7F457DEC;
    case 0x7F457DF0u: goto label_7F457DF0;
    case 0x7F457DF4u: goto label_7F457DF4;
    case 0x7F457DF8u: goto label_7F457DF8;
    case 0x7F457DFCu: goto label_7F457DFC;
    case 0x7F457E00u: goto label_7F457E00;
    case 0x7F457E04u: goto label_7F457E04;
    case 0x7F457E08u: goto label_7F457E08;
    case 0x7F457E0Cu: goto label_7F457E0C;
    case 0x7F457E10u: goto label_7F457E10;
    case 0x7F457E14u: goto label_7F457E14;
    case 0x7F457E18u: goto label_7F457E18;
    case 0x7F457E1Cu: goto label_7F457E1C;
    case 0x7F457E20u: goto label_7F457E20;
    case 0x7F457E24u: goto label_7F457E24;
    case 0x7F457E28u: goto label_7F457E28;
    case 0x7F457E2Cu: goto label_7F457E2C;
    case 0x7F457E30u: goto label_7F457E30;
    case 0x7F457E34u: goto label_7F457E34;
    case 0x7F457E38u: goto label_7F457E38;
    case 0x7F457E3Cu: goto label_7F457E3C;
    case 0x7F457E40u: goto label_7F457E40;
    case 0x7F457E44u: goto label_7F457E44;
    case 0x7F457E48u: goto label_7F457E48;
    case 0x7F457E4Cu: goto label_7F457E4C;
    case 0x7F457E50u: goto label_7F457E50;
    case 0x7F457E54u: goto label_7F457E54;
    case 0x7F457E58u: goto label_7F457E58;
    case 0x7F457E5Cu: goto label_7F457E5C;
    case 0x7F457E60u: goto label_7F457E60;
    case 0x7F457E64u: goto label_7F457E64;
    case 0x7F457E68u: goto label_7F457E68;
    case 0x7F457E6Cu: goto label_7F457E6C;
    case 0x7F457E70u: goto label_7F457E70;
    case 0x7F457E74u: goto label_7F457E74;
    case 0x7F457E78u: goto label_7F457E78;
    case 0x7F457E7Cu: goto label_7F457E7C;
    case 0x7F457E80u: goto label_7F457E80;
    case 0x7F457E84u: goto label_7F457E84;
    case 0x7F457E88u: goto label_7F457E88;
    case 0x7F457E8Cu: goto label_7F457E8C;
    case 0x7F457E90u: goto label_7F457E90;
    case 0x7F457E94u: goto label_7F457E94;
    case 0x7F457E98u: goto label_7F457E98;
    case 0x7F457E9Cu: goto label_7F457E9C;
    case 0x7F457EA0u: goto label_7F457EA0;
    case 0x7F457EA4u: goto label_7F457EA4;
    case 0x7F457EA8u: goto label_7F457EA8;
    case 0x7F457EACu: goto label_7F457EAC;
    case 0x7F457EB0u: goto label_7F457EB0;
    case 0x7F457EB4u: goto label_7F457EB4;
    case 0x7F457EB8u: goto label_7F457EB8;
    case 0x7F457EBCu: goto label_7F457EBC;
    case 0x7F457EC0u: goto label_7F457EC0;
    case 0x7F457EC4u: goto label_7F457EC4;
    case 0x7F457EC8u: goto label_7F457EC8;
    case 0x7F457ECCu: goto label_7F457ECC;
    case 0x7F457ED0u: goto label_7F457ED0;
    case 0x7F457ED4u: goto label_7F457ED4;
    case 0x7F457ED8u: goto label_7F457ED8;
    case 0x7F457EDCu: goto label_7F457EDC;
    case 0x7F457EE0u: goto label_7F457EE0;
    case 0x7F457EE4u: goto label_7F457EE4;
    case 0x7F457EE8u: goto label_7F457EE8;
    case 0x7F457EECu: goto label_7F457EEC;
    case 0x7F457EF0u: goto label_7F457EF0;
    case 0x7F457EF4u: goto label_7F457EF4;
    case 0x7F457EF8u: goto label_7F457EF8;
    case 0x7F457EFCu: goto label_7F457EFC;
    case 0x7F457F00u: goto label_7F457F00;
    case 0x7F457F04u: goto label_7F457F04;
    case 0x7F457F08u: goto label_7F457F08;
    case 0x7F457F0Cu: goto label_7F457F0C;
    case 0x7F457F10u: goto label_7F457F10;
    case 0x7F457F14u: goto label_7F457F14;
    case 0x7F457F18u: goto label_7F457F18;
    case 0x7F457F1Cu: goto label_7F457F1C;
    case 0x7F457F20u: goto label_7F457F20;
    case 0x7F457F24u: goto label_7F457F24;
    case 0x7F457F28u: goto label_7F457F28;
    case 0x7F457F2Cu: goto label_7F457F2C;
    case 0x7F457F30u: goto label_7F457F30;
    case 0x7F457F34u: goto label_7F457F34;
    case 0x7F457F38u: goto label_7F457F38;
    case 0x7F457F3Cu: goto label_7F457F3C;
    case 0x7F457F40u: goto label_7F457F40;
    case 0x7F457F44u: goto label_7F457F44;
    case 0x7F457F48u: goto label_7F457F48;
    case 0x7F457F4Cu: goto label_7F457F4C;
    case 0x7F457F50u: goto label_7F457F50;
    case 0x7F457F54u: goto label_7F457F54;
    case 0x7F457F58u: goto label_7F457F58;
    case 0x7F457F5Cu: goto label_7F457F5C;
    case 0x7F457F60u: goto label_7F457F60;
    case 0x7F457F64u: goto label_7F457F64;
    case 0x7F457F68u: goto label_7F457F68;
    case 0x7F457F6Cu: goto label_7F457F6C;
    case 0x7F457F70u: goto label_7F457F70;
    case 0x7F457F74u: goto label_7F457F74;
    case 0x7F457F78u: goto label_7F457F78;
    case 0x7F457F7Cu: goto label_7F457F7C;
    case 0x7F457F80u: goto label_7F457F80;
    case 0x7F457F84u: goto label_7F457F84;
    case 0x7F457F88u: goto label_7F457F88;
    case 0x7F457F8Cu: goto label_7F457F8C;
    case 0x7F457F90u: goto label_7F457F90;
    case 0x7F457F94u: goto label_7F457F94;
    case 0x7F457F98u: goto label_7F457F98;
    case 0x7F457F9Cu: goto label_7F457F9C;
    case 0x7F457FA0u: goto label_7F457FA0;
    case 0x7F457FA4u: goto label_7F457FA4;
    case 0x7F457FA8u: goto label_7F457FA8;
    case 0x7F457FACu: goto label_7F457FAC;
    case 0x7F457FB0u: goto label_7F457FB0;
    case 0x7F457FB4u: goto label_7F457FB4;
    case 0x7F457FB8u: goto label_7F457FB8;
    case 0x7F457FBCu: goto label_7F457FBC;
    case 0x7F457FC0u: goto label_7F457FC0;
    case 0x7F457FC4u: goto label_7F457FC4;
    case 0x7F457FC8u: goto label_7F457FC8;
    case 0x7F457FCCu: goto label_7F457FCC;
    case 0x7F457FD0u: goto label_7F457FD0;
    case 0x7F457FD4u: goto label_7F457FD4;
    case 0x7F457FD8u: goto label_7F457FD8;
    case 0x7F457FDCu: goto label_7F457FDC;
    case 0x7F457FE0u: goto label_7F457FE0;
    case 0x7F457FE4u: goto label_7F457FE4;
    case 0x7F457FE8u: goto label_7F457FE8;
    case 0x7F457FECu: goto label_7F457FEC;
    case 0x7F457FF0u: goto label_7F457FF0;
    case 0x7F457FF4u: goto label_7F457FF4;
    case 0x7F457FF8u: goto label_7F457FF8;
    case 0x7F457FFCu: goto label_7F457FFC;
    case 0x7F458000u: goto label_7F458000;
    case 0x7F458004u: goto label_7F458004;
    case 0x7F458008u: goto label_7F458008;
    case 0x7F45800Cu: goto label_7F45800C;
    case 0x7F458010u: goto label_7F458010;
    case 0x7F458014u: goto label_7F458014;
    case 0x7F458018u: goto label_7F458018;
    case 0x7F45801Cu: goto label_7F45801C;
    case 0x7F458020u: goto label_7F458020;
    case 0x7F458024u: goto label_7F458024;
    case 0x7F458028u: goto label_7F458028;
    case 0x7F45802Cu: goto label_7F45802C;
    case 0x7F458030u: goto label_7F458030;
    case 0x7F458034u: goto label_7F458034;
    case 0x7F458038u: goto label_7F458038;
    case 0x7F45803Cu: goto label_7F45803C;
    case 0x7F458040u: goto label_7F458040;
    case 0x7F458044u: goto label_7F458044;
    case 0x7F458048u: goto label_7F458048;
    case 0x7F45804Cu: goto label_7F45804C;
    case 0x7F458050u: goto label_7F458050;
    case 0x7F458054u: goto label_7F458054;
    case 0x7F458058u: goto label_7F458058;
    case 0x7F45805Cu: goto label_7F45805C;
    case 0x7F458060u: goto label_7F458060;
    case 0x7F458064u: goto label_7F458064;
    case 0x7F458068u: goto label_7F458068;
    case 0x7F45806Cu: goto label_7F45806C;
    case 0x7F458070u: goto label_7F458070;
    case 0x7F458074u: goto label_7F458074;
    case 0x7F458078u: goto label_7F458078;
    case 0x7F45807Cu: goto label_7F45807C;
    case 0x7F458080u: goto label_7F458080;
    case 0x7F458084u: goto label_7F458084;
    case 0x7F458088u: goto label_7F458088;
    case 0x7F45808Cu: goto label_7F45808C;
    case 0x7F458090u: goto label_7F458090;
    case 0x7F458094u: goto label_7F458094;
    case 0x7F458098u: goto label_7F458098;
    case 0x7F45809Cu: goto label_7F45809C;
    case 0x7F4580A0u: goto label_7F4580A0;
    case 0x7F4580A4u: goto label_7F4580A4;
    case 0x7F4580A8u: goto label_7F4580A8;
    case 0x7F4580ACu: goto label_7F4580AC;
    case 0x7F4580B0u: goto label_7F4580B0;
    case 0x7F4580B4u: goto label_7F4580B4;
    case 0x7F4580B8u: goto label_7F4580B8;
    case 0x7F4580BCu: goto label_7F4580BC;
    case 0x7F4580C0u: goto label_7F4580C0;
    case 0x7F4580C4u: goto label_7F4580C4;
    case 0x7F4580C8u: goto label_7F4580C8;
    case 0x7F4580CCu: goto label_7F4580CC;
    case 0x7F4580D0u: goto label_7F4580D0;
    case 0x7F4580D4u: goto label_7F4580D4;
    case 0x7F4580D8u: goto label_7F4580D8;
    case 0x7F4580DCu: goto label_7F4580DC;
    case 0x7F4580E0u: goto label_7F4580E0;
    case 0x7F4580E4u: goto label_7F4580E4;
    case 0x7F4580E8u: goto label_7F4580E8;
    default: return;
    }
label_7F4540EC:
    ctx->pc = 0x7F4540ECu;
    ctx->downcount -= 1;
    // 7F4540EC: bc    12, 1, 0x7F4540BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F4540BCu;
            return;
        }
    }

label_7F4540F0:
    ctx->pc = 0x7F4540F0u;
    ctx->downcount -= 9;
    // 7F4540F0: mulli   r3, r9, 40
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[9] * (s64)(s32)40);

label_7F4540F4:
    ctx->pc = 0x7F4540F4u;
    // 7F4540F4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F4540F8:
    ctx->pc = 0x7F4540F8u;
    // 7F4540F8: addi    r4, r1, 4
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(4);

label_7F4540FC:
    ctx->pc = 0x7F4540FCu;
    // 7F4540FC: add   r3, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F454100:
    ctx->pc = 0x7F454100u;
    // 7F454100: addi    r5, r3, 104
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(104);

label_7F454104:
    ctx->pc = 0x7F454104u;
    // 7F454104: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F454108:
    loop_7F454108(ctx);
    if (ctx->pc == 0x7F45411Cu) goto label_7F45411C;
    return;
label_7F45410C:
    ctx->pc = 0x7F45410Cu;
    // 7F45410C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F454110:
    ctx->pc = 0x7F454110u;
    // 7F454110: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454114:
    ctx->pc = 0x7F454114u;
    // 7F454114: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F454118:
    // 7F454118: bc    16, 0, 0x7F454108
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454108u;
                return;
            }
            goto label_7F454108;
        }
    }

label_7F45411C:
    ctx->pc = 0x7F45411Cu;
    ctx->downcount -= 17;
    // 7F45411C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F454120:
    ctx->pc = 0x7F454120u;
    // 7F454120: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F454124:
    ctx->pc = 0x7F454124u;
    // 7F454124: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454128:
    ctx->pc = 0x7F454128u;
    // 7F454128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45412C:
    ctx->pc = 0x7F45412Cu;
    // 7F45412C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F454130:
    ctx->pc = 0x7F454130u;
    // 7F454130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454134:
    ctx->pc = 0x7F454134u;
    ctx->downcount -= 4;
    // 7F454134: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F454138:
    ctx->pc = 0x7F454138u;
    // 7F454138: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

label_7F45413C:
    ctx->pc = 0x7F45413Cu;
    // 7F45413C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F454140:
    ctx->pc = 0x7F454140u;
    ctx->downcount -= 3;
    // 7F454140: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454144:
    // 7F454144: cmplwi  r0, 0x0000
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

label_7F454148:
    // 7F454148: bc    12, 2, 0x7F454164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454164;
        }
    }

label_7F45414C:
    ctx->pc = 0x7F45414Cu;
    ctx->downcount -= 3;
    // 7F45414C: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454150:
    // 7F454150: cmpw    r0, r4
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

label_7F454154:
    // 7F454154: bc    4, 2, 0x7F454164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454164;
        }
    }

label_7F454158:
    ctx->pc = 0x7F454158u;
    ctx->downcount -= 3;
    // 7F454158: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45415C:
    // 7F45415C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F454160:
    ctx->pc = 0x7F454160u;
    // 7F454160: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454164:
    ctx->downcount -= 2;
    // 7F454164: addi    r3, r3, 40
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(40);

label_7F454168:
    // 7F454168: bc    16, 0, 0x7F454140
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454140u;
                return;
            }
            goto label_7F454140;
        }
    }

label_7F45416C:
    ctx->pc = 0x7F45416Cu;
    ctx->downcount -= 1;
    // 7F45416C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454170:
    ctx->pc = 0x7F454170u;
    ctx->downcount -= 4;
    // 7F454170: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F454174:
    ctx->pc = 0x7F454174u;
    // 7F454174: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

label_7F454178:
    ctx->pc = 0x7F454178u;
    // 7F454178: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F45417C:
    ctx->pc = 0x7F45417Cu;
    ctx->downcount -= 3;
    // 7F45417C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454180:
    // 7F454180: cmplwi  r0, 0x0000
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

label_7F454184:
    // 7F454184: bc    12, 2, 0x7F4541A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4541A0;
        }
    }

label_7F454188:
    ctx->pc = 0x7F454188u;
    ctx->downcount -= 3;
    // 7F454188: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45418C:
    // 7F45418C: cmpw    r0, r4
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

label_7F454190:
    // 7F454190: bc    4, 2, 0x7F4541A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4541A0;
        }
    }

label_7F454194:
    ctx->pc = 0x7F454194u;
    ctx->downcount -= 3;
    // 7F454194: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454198:
    // 7F454198: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F45419C:
    ctx->pc = 0x7F45419Cu;
    // 7F45419C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4541A0:
    ctx->downcount -= 2;
    // 7F4541A0: addi    r3, r3, 40
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(40);

label_7F4541A4:
    // 7F4541A4: bc    16, 0, 0x7F45417C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45417Cu;
                return;
            }
            goto label_7F45417C;
        }
    }

label_7F4541A8:
    ctx->pc = 0x7F4541A8u;
    ctx->downcount -= 1;
    // 7F4541A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4541AC:
    ctx->pc = 0x7F4541ACu;
    ctx->downcount -= 11;
    // 7F4541AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4541B0:
    ctx->pc = 0x7F4541B0u;
    // 7F4541B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4541B4:
    ctx->pc = 0x7F4541B4u;
    // 7F4541B4: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F4541B8:
    ctx->pc = 0x7F4541B8u;
    // 7F4541B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4541BC:
    ctx->pc = 0x7F4541BCu;
    // 7F4541BC: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F4541C0:
    ctx->pc = 0x7F4541C0u;
    // 7F4541C0: addi    r4, r4, -1656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1656);

label_7F4541C4:
    ctx->pc = 0x7F4541C4u;
    // 7F4541C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4541C8:
    ctx->pc = 0x7F4541C8u;
    // 7F4541C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4541CC:
    ctx->pc = 0x7F4541CCu;
    // 7F4541CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4541D0:
    ctx->pc = 0x7F4541D0u;
    // 7F4541D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4541D4:
    ctx->pc = 0x7F4541D4u;
    ctx->downcount -= 4;
    // 7F4541D4: lwz     r5, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4541D8:
    ctx->pc = 0x7F4541D8u;
    // 7F4541D8: lwzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4541DC:
    // 7F4541DC: cmpw    r5, r0
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

label_7F4541E0:
    // 7F4541E0: bc    4, 2, 0x7F45420C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45420C;
        }
    }

label_7F4541E4:
    ctx->downcount -= 6;
    // 7F4541E4: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F4541E8:
    // 7F4541E8: addi    r0, r4, -1656
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1656);

label_7F4541EC:
    // 7F4541EC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F4541F0:
    ctx->pc = 0x7F4541F0u;
    // 7F4541F0: lwzu     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F4541F4:
    // 7F4541F4: cmpwi   r0, 0
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

label_7F4541F8:
    // 7F4541F8: bc    4, 1, 0x7F454214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454214;
        }
    }

label_7F4541FC:
    ctx->pc = 0x7F4541FCu;
    ctx->downcount -= 4;
    // 7F4541FC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454200:
    // 7F454200: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F454204:
    ctx->pc = 0x7F454204u;
    // 7F454204: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454208:
    // 7F454208: b       0x7F454214
    {
            goto label_7F454214;
    }

label_7F45420C:
    ctx->downcount -= 2;
    // 7F45420C: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F454210:
    // 7F454210: bc    16, 0, 0x7F4541D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4541D4u;
                return;
            }
            goto label_7F4541D4;
        }
    }

label_7F454214:
    ctx->pc = 0x7F454214u;
    ctx->downcount -= 2;
    // 7F454214: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F454218:
    ctx->pc = 0x7F454218u;
    // 7F454218: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F45421Cu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F45421C:
    ctx->pc = 0x7F45421Cu;
    ctx->downcount -= 2;
    // 7F45421C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F454220:
    ctx->pc = 0x7F454220u;
    // 7F454220: bl      0x7F3B0820
    {
            ctx->lr = 0x7F454224u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F454224:
    ctx->pc = 0x7F454224u;
    ctx->downcount -= 6;
    // 7F454224: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454228:
    ctx->pc = 0x7F454228u;
    // 7F454228: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45422C:
    ctx->pc = 0x7F45422Cu;
    // 7F45422C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F454230:
    ctx->pc = 0x7F454230u;
    // 7F454230: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F454234:
    ctx->pc = 0x7F454234u;
    // 7F454234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454238:
    ctx->pc = 0x7F454238u;
    ctx->downcount -= 22;
    // 7F454238: stwu     r1, -384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-384);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45423C:
    ctx->pc = 0x7F45423Cu;
    // 7F45423C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F454240:
    ctx->pc = 0x7F454240u;
    // 7F454240: stw     r0, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454244:
    ctx->pc = 0x7F454244u;
    // 7F454244: stfd     f31, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F454248:
    ctx->pc = 0x7F454248u;
    // 7F454248: psq_st   f31, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F454248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F454248u);
        if (ctx->exception) return;
    }

label_7F45424C:
    ctx->pc = 0x7F45424Cu;
    // 7F45424C: stmw     r14, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F454250:
    ctx->pc = 0x7F454250u;
    // 7F454250: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454254:
    ctx->pc = 0x7F454254u;
    // 7F454254: lwz     r3, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454258:
    ctx->pc = 0x7F454258u;
    // 7F454258: addi    r0, r15, 56
    ctx->gpr[0] = ctx->gpr[15] + (u32)(s32)(56);

label_7F45425C:
    ctx->pc = 0x7F45425Cu;
    // 7F45425C: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454260:
    ctx->pc = 0x7F454260u;
    // 7F454260: rlwinm. r0, r3, 0, 31, 31
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

label_7F454264:
    ctx->pc = 0x7F454264u;
    // 7F454264: bc    12, 2, 0x7F4542D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4542D0;
        }
    }

label_7F454268:
    ctx->pc = 0x7F454268u;
    ctx->downcount -= 2;
    // 7F454268: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F45426C:
    ctx->pc = 0x7F45426Cu;
    // 7F45426C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F454270:
    ctx->downcount -= 4;
    // 7F454270: add   r5, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F454274:
    ctx->pc = 0x7F454274u;
    // 7F454274: lwz     r4, 76(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454278:
    // 7F454278: cmplwi  r4, 0x0000
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

label_7F45427C:
    // 7F45427C: bc    12, 2, 0x7F45428C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45428C;
        }
    }

label_7F454280:
    ctx->pc = 0x7F454280u;
    ctx->downcount -= 3;
    // 7F454280: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454284:
    // 7F454284: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F454288:
    ctx->pc = 0x7F454288u;
    // 7F454288: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45428C:
    ctx->downcount -= 4;
    // 7F45428C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F454290:
    // 7F454290: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F454294:
    ctx->pc = 0x7F454294u;
    // 7F454294: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F454298:
    ctx->downcount -= 4;
    // 7F454298: addi    r0, r4, 128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(128);

label_7F45429C:
    ctx->pc = 0x7F45429Cu;
    // 7F45429C: lwzx    r6, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4542A0:
    // 7F4542A0: cmplwi  r6, 0x0000
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

label_7F4542A4:
    // 7F4542A4: bc    12, 2, 0x7F4542B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4542B4;
        }
    }

label_7F4542A8:
    ctx->pc = 0x7F4542A8u;
    ctx->downcount -= 3;
    // 7F4542A8: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4542AC:
    // 7F4542AC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F4542B0:
    ctx->pc = 0x7F4542B0u;
    // 7F4542B0: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4542B4:
    ctx->downcount -= 2;
    // 7F4542B4: addi    r4, r4, 40
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(40);

label_7F4542B8:
    // 7F4542B8: bc    16, 0, 0x7F454298
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454298u;
                return;
            }
            goto label_7F454298;
        }
    }

label_7F4542BC:
    ctx->downcount -= 4;
    // 7F4542BC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F4542C0:
    // 7F4542C0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F4542C4:
    // 7F4542C4: cmpwi   r7, 4
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4542C8:
    // 7F4542C8: bc    12, 0, 0x7F454270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454270u;
                return;
            }
            goto label_7F454270;
        }
    }

label_7F4542CC:
    ctx->pc = 0x7F4542CCu;
    ctx->downcount -= 1;
    // 7F4542CC: b       0x7F454C34
    {
            goto label_7F454C34;
    }

label_7F4542D0:
    ctx->pc = 0x7F4542D0u;
    ctx->downcount -= 5;
    // 7F4542D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4542D4:
    ctx->pc = 0x7F4542D4u;
    // 7F4542D4: addi    r28, r1, 72
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(72);

label_7F4542D8:
    ctx->pc = 0x7F4542D8u;
    // 7F4542D8: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4542DC:
    ctx->pc = 0x7F4542DCu;
    // 7F4542DC: addi    r27, r1, 184
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(184);

label_7F4542E0:
    ctx->pc = 0x7F4542E0u;
    // 7F4542E0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F4542E4:
    ctx->downcount -= 5;
    // 7F4542E4: add   r26, r15, r31
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F4542E8:
    ctx->pc = 0x7F4542E8u;
    // 7F4542E8: lwz     r20, 48(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(48);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F4542EC:
    ctx->pc = 0x7F4542ECu;
    // 7F4542EC: lwz     r22, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F4542F0:
    // 7F4542F0: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F4542F4:
    // 7F4542F4: bl      0x7F4532A0
    {
            ctx->lr = 0x7F4542F8u;
            ctx->pc = 0x7F4532A0u;
            return;
    }

label_7F4542F8:
    ctx->downcount -= 3;
    // 7F4542F8: cmplwi  r22, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4542FC:
    ctx->pc = 0x7F4542FCu;
    // 7F4542FC: lwzx    r18, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F454300:
    // 7F454300: bc    4, 2, 0x7F454334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454334;
        }
    }

label_7F454304:
    ctx->downcount -= 2;
    // 7F454304: cmplwi  r18, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[18]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454308:
    // 7F454308: bc    12, 2, 0x7F454C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454C10;
        }
    }

label_7F45430C:
    ctx->pc = 0x7F45430Cu;
    ctx->downcount -= 4;
    // 7F45430C: lwz     r5, 52(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F454310:
    // 7F454310: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F454314:
    // 7F454314: addi    r4, r26, 76
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(76);

label_7F454318:
    // 7F454318: bl      0x7F453860
    {
            ctx->lr = 0x7F45431Cu;
            ctx->pc = 0x7F453860u;
            return;
    }

label_7F45431C:
    ctx->downcount -= 2;
    // 7F45431C: cmpwi   r3, 0
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

label_7F454320:
    // 7F454320: bc    4, 0, 0x7F454330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454330;
        }
    }

label_7F454324:
    ctx->downcount -= 2;
    // 7F454324: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F454328:
    // 7F454328: bl      0x7F3C8210
    {
            ctx->lr = 0x7F45432Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F45432C:
    ctx->downcount -= 1;
    // 7F45432C: b       0x7F454C34
    {
            goto label_7F454C34;
    }

label_7F454330:
    ctx->pc = 0x7F454330u;
    ctx->downcount -= 1;
    // 7F454330: lwz     r22, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F454334:
    ctx->downcount -= 2;
    // 7F454334: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F454338:
    // 7F454338: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_7F45433C:
    ctx->downcount -= 4;
    // 7F45433C: addi    r0, r14, 128
    ctx->gpr[0] = ctx->gpr[14] + (u32)(s32)(128);

label_7F454340:
    ctx->pc = 0x7F454340u;
    // 7F454340: lwzx    r0, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454344:
    // 7F454344: cmplwi  r0, 0x0000
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

label_7F454348:
    // 7F454348: bc    4, 2, 0x7F454384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454384;
        }
    }

label_7F45434C:
    ctx->downcount -= 4;
    // 7F45434C: add   r6, r15, r14
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[14];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F454350:
    ctx->pc = 0x7F454350u;
    // 7F454350: lwz     r0, 108(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454354:
    // 7F454354: cmplwi  r0, 0x0000
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

label_7F454358:
    // 7F454358: bc    12, 2, 0x7F454384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454384;
        }
    }

label_7F45435C:
    ctx->downcount -= 5;
    // 7F45435C: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_7F454360:
    ctx->pc = 0x7F454360u;
    // 7F454360: lwz     r5, 112(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F454364:
    // 7F454364: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F454368:
    // 7F454368: add   r4, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F45436C:
    // 7F45436C: bl      0x7F453BE4
    {
            ctx->lr = 0x7F454370u;
            ctx->pc = 0x7F453BE4u;
            return;
    }

label_7F454370:
    ctx->downcount -= 2;
    // 7F454370: cmpwi   r3, 0
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

label_7F454374:
    // 7F454374: bc    4, 0, 0x7F454384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454384;
        }
    }

label_7F454378:
    ctx->downcount -= 2;
    // 7F454378: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F45437C:
    // 7F45437C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F454380u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F454380:
    ctx->downcount -= 1;
    // 7F454380: b       0x7F454C34
    {
            goto label_7F454C34;
    }

label_7F454384:
    ctx->downcount -= 4;
    // 7F454384: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F454388:
    // 7F454388: addi    r14, r14, 40
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(40);

label_7F45438C:
    // 7F45438C: cmpwi   r16, 8
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454390:
    // 7F454390: bc    12, 0, 0x7F45433C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45433Cu;
                return;
            }
            goto label_7F45433C;
        }
    }

label_7F454394:
    ctx->downcount -= 2;
    // 7F454394: cmplwi  r18, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[18]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454398:
    // 7F454398: bc    4, 2, 0x7F4543E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4543E8;
        }
    }

label_7F45439C:
    ctx->downcount -= 2;
    // 7F45439C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4543A0:
    // 7F4543A0: bl      0x7F4541AC
    {
            ctx->lr = 0x7F4543A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4541ACu;
                return;
            }
            goto label_7F4541AC;
    }

label_7F4543A4:
    ctx->downcount -= 4;
    // 7F4543A4: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F4543A8:
    // 7F4543A8: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_7F4543AC:
    ctx->pc = 0x7F4543ACu;
    // 7F4543AC: stw     r16, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F4543B0:
    // 7F4543B0: or   r18, r16, r16
    {
        ctx->gpr[18] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F4543B4:
    ctx->downcount -= 4;
    // 7F4543B4: addi    r17, r14, 128
    ctx->gpr[17] = ctx->gpr[14] + (u32)(s32)(128);

label_7F4543B8:
    ctx->pc = 0x7F4543B8u;
    // 7F4543B8: lwzx    r3, r26, r17
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[17];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4543BC:
    // 7F4543BC: cmplwi  r3, 0x0000
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

label_7F4543C0:
    // 7F4543C0: bc    12, 2, 0x7F4543D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4543D4;
        }
    }

label_7F4543C4:
    ctx->downcount -= 1;
    // 7F4543C4: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F4543C8u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F4543C8:
    ctx->pc = 0x7F4543C8u;
    ctx->downcount -= 2;
    // 7F4543C8: lwzx    r3, r26, r17
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[17];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4543CC:
    // 7F4543CC: bl      0x7F3B0820
    {
            ctx->lr = 0x7F4543D0u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F4543D0:
    ctx->pc = 0x7F4543D0u;
    ctx->downcount -= 1;
    // 7F4543D0: stwx    r16, r26, r17
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[17];
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F4543D4:
    ctx->downcount -= 4;
    // 7F4543D4: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F4543D8:
    // 7F4543D8: addi    r14, r14, 40
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(40);

label_7F4543DC:
    // 7F4543DC: cmpwi   r18, 8
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4543E0:
    // 7F4543E0: bc    12, 0, 0x7F4543B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4543B4u;
                return;
            }
            goto label_7F4543B4;
        }
    }

label_7F4543E4:
    ctx->downcount -= 1;
    // 7F4543E4: b       0x7F454C10
    {
            goto label_7F454C10;
    }

label_7F4543E8:
    ctx->downcount -= 5;
    // 7F4543E8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4543EC:
    // 7F4543EC: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F4543F0:
    // 7F4543F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4543F4:
    ctx->pc = 0x7F4543F4u;
    // 7F4543F4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4543F8:
    ctx->downcount -= 4;
    // 7F4543F8: addi    r0, r3, 108
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(108);

label_7F4543FC:
    ctx->pc = 0x7F4543FCu;
    // 7F4543FC: lwzx    r0, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454400:
    // 7F454400: cmplwi  r0, 0x0000
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

label_7F454404:
    // 7F454404: bc    12, 2, 0x7F45440C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45440C;
        }
    }

label_7F454408:
    ctx->downcount -= 1;
    // 7F454408: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F45440C:
    ctx->downcount -= 2;
    // 7F45440C: addi    r3, r3, 40
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(40);

label_7F454410:
    // 7F454410: bc    16, 0, 0x7F4543F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4543F8u;
                return;
            }
            goto label_7F4543F8;
        }
    }

label_7F454414:
    ctx->pc = 0x7F454414u;
    ctx->downcount -= 9;
    // 7F454414: lwz     r0, 80(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454418:
    // 7F454418: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F45441C:
    ctx->pc = 0x7F45441Cu;
    // 7F45441C: lwz     r5, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F454420:
    // 7F454420: addi    r17, r18, 64
    ctx->gpr[17] = ctx->gpr[18] + (u32)(s32)(64);

label_7F454424:
    // 7F454424: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F454428:
    ctx->pc = 0x7F454428u;
    // 7F454428: stw     r0, 80(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45442C:
    ctx->pc = 0x7F45442Cu;
    // 7F45442C: lwz     r4, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454430:
    // 7F454430: addi    r4, r4, 492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(492);

label_7F454434:
    // 7F454434: bl      0x7F44CAA4
    {
            ctx->lr = 0x7F454438u;
            ctx->pc = 0x7F44CAA4u;
            return;
    }

label_7F454438:
    ctx->downcount -= 3;
    // 7F454438: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F45443C:
    // 7F45443C: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454440:
    // 7F454440: bl      0x7F453568
    {
            ctx->lr = 0x7F454444u;
            ctx->pc = 0x7F453568u;
            return;
    }

label_7F454444:
    ctx->downcount -= 4;
    // 7F454444: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454448:
    ctx->pc = 0x7F454448u;
    // 7F454448: lfs     f0, -7520(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454448u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45444C:
    ctx->pc = 0x7F45444Cu;
    // 7F45444C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45444Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F454450:
    // 7F454450: bc    4, 0, 0x7F4544C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4544C0;
        }
    }

label_7F454454:
    ctx->downcount -= 6;
    // 7F454454: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454458:
    // 7F454458: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F45445C:
    // 7F45445C: addi    r5, r4, -7456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7456);

label_7F454460:
    // 7F454460: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F454464:
    ctx->pc = 0x7F454464u;
    // 7F454464: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F454464u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454468:
    // 7F454468: bl      0x7F44D538
    {
            ctx->lr = 0x7F45446Cu;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F45446C:
    ctx->downcount -= 5;
    // 7F45446C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454470:
    // 7F454470: addi    r3, r18, 16
    ctx->gpr[3] = ctx->gpr[18] + (u32)(s32)(16);

label_7F454474:
    ctx->pc = 0x7F454474u;
    // 7F454474: lfs     f1, -7456(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454474u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454478:
    // 7F454478: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45447C:
    // 7F45447C: bl      0x7F44D538
    {
            ctx->lr = 0x7F454480u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454480:
    ctx->downcount -= 5;
    // 7F454480: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454484:
    // 7F454484: addi    r3, r18, 32
    ctx->gpr[3] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454488:
    ctx->pc = 0x7F454488u;
    // 7F454488: lfs     f1, -7456(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454488u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45448C:
    // 7F45448C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454490:
    // 7F454490: bl      0x7F44D538
    {
            ctx->lr = 0x7F454494u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454494:
    ctx->downcount -= 6;
    // 7F454494: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454498:
    // 7F454498: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F45449C:
    // 7F45449C: addi    r5, r4, -7456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7456);

label_7F4544A0:
    // 7F4544A0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F4544A4:
    ctx->pc = 0x7F4544A4u;
    // 7F4544A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4544A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4544A8:
    // 7F4544A8: bl      0x7F44D538
    {
            ctx->lr = 0x7F4544ACu;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F4544AC:
    ctx->downcount -= 5;
    // 7F4544AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4544B0:
    ctx->pc = 0x7F4544B0u;
    // 7F4544B0: lfs     f1, 16(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F4544B0u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4544B4:
    ctx->pc = 0x7F4544B4u;
    // 7F4544B4: lfs     f0, -7456(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4544B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4544B8:
    ctx->pc = 0x7F4544B8u;
    // 7F4544B8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4544B8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4544BC:
    ctx->pc = 0x7F4544BCu;
    // 7F4544BC: stfs     f0, 16(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F4544BCu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4544C0:
    ctx->pc = 0x7F4544C0u;
    ctx->downcount -= 3;
    // 7F4544C0: lwz     r0, 92(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4544C4:
    // 7F4544C4: rlwinm. r0, r0, 0, 30, 30
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

label_7F4544C8:
    // 7F4544C8: bc    12, 2, 0x7F454598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454598;
        }
    }

label_7F4544CC:
    ctx->downcount -= 3;
    // 7F4544CC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4544D0:
    // 7F4544D0: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F4544D4:
    // 7F4544D4: bl      0x7F453568
    {
            ctx->lr = 0x7F4544D8u;
            ctx->pc = 0x7F453568u;
            return;
    }

label_7F4544D8:
    ctx->downcount -= 6;
    // 7F4544D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4544DC:
    ctx->pc = 0x7F4544DCu;
    // 7F4544DC: lfs     f0, 96(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F4544DCu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4544E0:
    ctx->pc = 0x7F4544E0u;
    // 7F4544E0: lfs     f2, -7472(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4544E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4544E4:
    ctx->pc = 0x7F4544E4u;
    // 7F4544E4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4544E4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F4544E8:
    ctx->pc = 0x7F4544E8u;
    // 7F4544E8: fadds   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4544E8u)) return;
    ppc_fadds(ctx, 1, 2, 0);

label_7F4544EC:
    // 7F4544EC: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F4544F0u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F4544F0:
    ctx->pc = 0x7F4544F0u;
    ctx->downcount -= 2;
    // 7F4544F0: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4544F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_7F4544F4:
    // 7F4544F4: bc    4, 0, 0x7F454598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454598;
        }
    }

label_7F4544F8:
    ctx->pc = 0x7F4544F8u;
    ctx->downcount -= 12;
    // 7F4544F8: lwz     r8, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F4544FC:
    // 7F4544FC: addi    r5, r1, 248
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(248);

label_7F454500:
    ctx->pc = 0x7F454500u;
    // 7F454500: lwz     r7, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F454504:
    // 7F454504: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454508:
    ctx->pc = 0x7F454508u;
    // 7F454508: lwz     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F45450C:
    // 7F45450C: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454510:
    ctx->pc = 0x7F454510u;
    // 7F454510: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454514:
    ctx->pc = 0x7F454514u;
    // 7F454514: stw     r8, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F454518:
    ctx->pc = 0x7F454518u;
    // 7F454518: stw     r7, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45451C:
    ctx->pc = 0x7F45451Cu;
    // 7F45451C: stw     r6, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F454520:
    ctx->pc = 0x7F454520u;
    // 7F454520: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454524:
    // 7F454524: bl      0x7F1156FC
    {
            ctx->lr = 0x7F454528u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F454528:
    ctx->downcount -= 3;
    // 7F454528: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F45452C:
    // 7F45452C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454530:
    // 7F454530: bl      0x7F114F50
    {
            ctx->lr = 0x7F454534u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F454534:
    ctx->downcount -= 3;
    // 7F454534: addi    r3, r1, 248
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(248);

label_7F454538:
    // 7F454538: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45453C:
    // 7F45453C: bl      0x7F114F50
    {
            ctx->lr = 0x7F454540u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F454540:
    ctx->downcount -= 4;
    // 7F454540: addi    r3, r1, 232
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(232);

label_7F454544:
    // 7F454544: addi    r4, r1, 248
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(248);

label_7F454548:
    // 7F454548: addi    r5, r1, 216
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(216);

label_7F45454C:
    // 7F45454C: bl      0x7F1156FC
    {
            ctx->lr = 0x7F454550u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F454550:
    ctx->pc = 0x7F454550u;
    ctx->downcount -= 2;
    // 7F454550: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F454550u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F454554:
    // 7F454554: bl      0x7F113B44
    {
            ctx->lr = 0x7F454558u;
            ctx->pc = 0x7F113B44u;
            return;
    }

label_7F454558:
    ctx->downcount -= 8;
    // 7F454558: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45455C:
    ctx->pc = 0x7F45455Cu;
    // 7F45455C: lfs     f0, 96(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F45455Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454560:
    ctx->pc = 0x7F454560u;
    // 7F454560: lfs     f2, -7472(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454560u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F454564:
    // 7F454564: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454568:
    // 7F454568: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45456C:
    ctx->pc = 0x7F45456Cu;
    // 7F45456C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45456Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F454570:
    ctx->pc = 0x7F454570u;
    // 7F454570: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454570u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F454574:
    // 7F454574: bl      0x7F453478
    {
            ctx->lr = 0x7F454578u;
            ctx->pc = 0x7F453478u;
            return;
    }

label_7F454578:
    ctx->pc = 0x7F454578u;
    ctx->downcount -= 8;
    // 7F454578: lwz     r5, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45457C:
    ctx->pc = 0x7F45457Cu;
    // 7F45457C: lwz     r4, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454580:
    ctx->pc = 0x7F454580u;
    // 7F454580: lwz     r3, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454584:
    ctx->pc = 0x7F454584u;
    // 7F454584: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454588:
    ctx->pc = 0x7F454588u;
    // 7F454588: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45458C:
    ctx->pc = 0x7F45458Cu;
    // 7F45458C: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F454590:
    ctx->pc = 0x7F454590u;
    // 7F454590: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454594:
    ctx->pc = 0x7F454594u;
    // 7F454594: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454598:
    ctx->downcount -= 6;
    // 7F454598: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45459C:
    // 7F45459C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4545A0:
    // 7F4545A0: addi    r5, r4, -7456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7456);

label_7F4545A4:
    // 7F4545A4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F4545A8:
    ctx->pc = 0x7F4545A8u;
    // 7F4545A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4545A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4545AC:
    // 7F4545AC: bl      0x80026020
    {
            ctx->lr = 0x7F4545B0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F4545B0:
    ctx->downcount -= 3;
    // 7F4545B0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F4545B4:
    // 7F4545B4: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F4545B8:
    // 7F4545B8: bl      0x7F453568
    {
            ctx->lr = 0x7F4545BCu;
            ctx->pc = 0x7F453568u;
            return;
    }

label_7F4545BC:
    ctx->downcount -= 5;
    // 7F4545BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4545C0:
    ctx->pc = 0x7F4545C0u;
    // 7F4545C0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4545C0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F4545C4:
    ctx->pc = 0x7F4545C4u;
    // 7F4545C4: lfs     f0, -7444(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4545C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4545C8:
    ctx->pc = 0x7F4545C8u;
    // 7F4545C8: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4545C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F4545CC:
    // 7F4545CC: bc    4, 0, 0x7F454600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454600;
        }
    }

label_7F4545D0:
    ctx->downcount -= 7;
    // 7F4545D0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4545D4:
    // 7F4545D4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4545D8:
    // 7F4545D8: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F4545DC:
    // 7F4545DC: addi    r5, r1, 212
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(212);

label_7F4545E0:
    // 7F4545E0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F4545E4:
    ctx->pc = 0x7F4545E4u;
    // 7F4545E4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4545E8:
    loop_7F4545E8(ctx);
    if (ctx->pc == 0x7F4545FCu) goto label_7F4545FC;
    return;
label_7F4545EC:
    ctx->pc = 0x7F4545ECu;
    // 7F4545EC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F4545F0:
    ctx->pc = 0x7F4545F0u;
    // 7F4545F0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4545F4:
    ctx->pc = 0x7F4545F4u;
    // 7F4545F4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F4545F8:
    // 7F4545F8: bc    16, 0, 0x7F4545E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4545E8u;
                return;
            }
            goto label_7F4545E8;
        }
    }

label_7F4545FC:
    ctx->downcount -= 1;
    // 7F4545FC: b       0x7F454630
    {
            goto label_7F454630;
    }

label_7F454600:
    ctx->downcount -= 4;
    // 7F454600: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F454604:
    // 7F454604: addi    r5, r18, 32
    ctx->gpr[5] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454608:
    // 7F454608: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45460C:
    // 7F45460C: bl      0x7F1156FC
    {
            ctx->lr = 0x7F454610u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F454610:
    ctx->downcount -= 3;
    // 7F454610: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F454614:
    // 7F454614: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454618:
    // 7F454618: bl      0x7F114F50
    {
            ctx->lr = 0x7F45461Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F45461C:
    ctx->pc = 0x7F45461Cu;
    ctx->downcount -= 2;
    // 7F45461C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F45461Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F454620:
    // 7F454620: bl      0x7F113B44
    {
            ctx->lr = 0x7F454624u;
            ctx->pc = 0x7F113B44u;
            return;
    }

label_7F454624:
    ctx->downcount -= 3;
    // 7F454624: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454628:
    // 7F454628: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F45462C:
    // 7F45462C: bl      0x7F4535CC
    {
            ctx->lr = 0x7F454630u;
            ctx->pc = 0x7F4535CCu;
            return;
    }

label_7F454630:
    ctx->downcount -= 3;
    // 7F454630: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F454634:
    // 7F454634: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454638:
    // 7F454638: bl      0x7F453568
    {
            ctx->lr = 0x7F45463Cu;
            ctx->pc = 0x7F453568u;
            return;
    }

label_7F45463C:
    ctx->downcount -= 5;
    // 7F45463C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454640:
    ctx->pc = 0x7F454640u;
    // 7F454640: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454640u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F454644:
    ctx->pc = 0x7F454644u;
    // 7F454644: lfs     f0, -7440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454644u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454648:
    ctx->pc = 0x7F454648u;
    // 7F454648: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454648u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F45464C:
    // 7F45464C: bc    4, 0, 0x7F4546A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4546A4;
        }
    }

label_7F454650:
    ctx->downcount -= 3;
    // 7F454650: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F454654:
    // 7F454654: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F454658:
    // 7F454658: bl      0x7F1146A0
    {
            ctx->lr = 0x7F45465Cu;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F45465C:
    ctx->downcount -= 4;
    // 7F45465C: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454660:
    // 7F454660: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F454664:
    // 7F454664: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454668:
    // 7F454668: bl      0x80025A80
    {
            ctx->lr = 0x7F45466Cu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F45466C:
    ctx->downcount -= 5;
    // 7F45466C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F454670:
    // 7F454670: addi    r5, r1, 148
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(148);

label_7F454674:
    // 7F454674: addi    r4, r18, -4
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(-4);

label_7F454678:
    ctx->pc = 0x7F454678u;
    // 7F454678: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F45467C:
    loop_7F45467C(ctx);
    if (ctx->pc == 0x7F454690u) goto label_7F454690;
    return;
label_7F454680:
    ctx->pc = 0x7F454680u;
    // 7F454680: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F454684:
    ctx->pc = 0x7F454684u;
    // 7F454684: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454688:
    ctx->pc = 0x7F454688u;
    // 7F454688: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F45468C:
    // 7F45468C: bc    16, 0, 0x7F45467C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45467Cu;
                return;
            }
            goto label_7F45467C;
        }
    }

label_7F454690:
    ctx->pc = 0x7F454690u;
    ctx->downcount -= 4;
    // 7F454690: lfs     f1, 432(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F454690u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454694:
    // 7F454694: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F454698:
    // 7F454698: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F45469C:
    // 7F45469C: bl      0x7F44D538
    {
            ctx->lr = 0x7F4546A0u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F4546A0:
    ctx->downcount -= 1;
    // 7F4546A0: b       0x7F454760
    {
            goto label_7F454760;
    }

label_7F4546A4:
    ctx->pc = 0x7F4546A4u;
    ctx->downcount -= 12;
    // 7F4546A4: lwz     r6, 32(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4546A8:
    // 7F4546A8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4546AC:
    ctx->pc = 0x7F4546ACu;
    // 7F4546AC: lwz     r0, 36(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4546B0:
    // 7F4546B0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4546B4:
    // 7F4546B4: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_7F4546B8:
    ctx->pc = 0x7F4546B8u;
    // 7F4546B8: stw     r6, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4546BC:
    ctx->pc = 0x7F4546BCu;
    // 7F4546BC: stw     r0, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4546C0:
    ctx->pc = 0x7F4546C0u;
    // 7F4546C0: lwz     r6, 40(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4546C4:
    ctx->pc = 0x7F4546C4u;
    // 7F4546C4: lwz     r0, 44(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4546C8:
    ctx->pc = 0x7F4546C8u;
    // 7F4546C8: stw     r6, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4546CC:
    ctx->pc = 0x7F4546CCu;
    // 7F4546CC: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4546D0:
    // 7F4546D0: bl      0x7F1156FC
    {
            ctx->lr = 0x7F4546D4u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F4546D4:
    ctx->downcount -= 3;
    // 7F4546D4: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_7F4546D8:
    // 7F4546D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4546DC:
    // 7F4546DC: bl      0x7F114F50
    {
            ctx->lr = 0x7F4546E0u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F4546E0:
    ctx->downcount -= 4;
    // 7F4546E0: addi    r3, r1, 168
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(168);

label_7F4546E4:
    // 7F4546E4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4546E8:
    // 7F4546E8: addi    r5, r1, 152
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(152);

label_7F4546EC:
    // 7F4546EC: bl      0x7F1156FC
    {
            ctx->lr = 0x7F4546F0u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F4546F0:
    ctx->downcount -= 13;
    // 7F4546F0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F4546F4:
    // 7F4546F4: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_7F4546F8:
    // 7F4546F8: addi    r8, r4, 12832
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F4546FC:
    // 7F4546FC: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F454700:
    ctx->pc = 0x7F454700u;
    // 7F454700: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F454704:
    ctx->pc = 0x7F454704u;
    // 7F454704: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454708:
    ctx->pc = 0x7F454708u;
    // 7F454708: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45470C:
    ctx->pc = 0x7F45470Cu;
    // 7F45470C: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454710:
    ctx->pc = 0x7F454710u;
    // 7F454710: stw     r7, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F454714:
    ctx->pc = 0x7F454714u;
    // 7F454714: stw     r6, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F454718:
    ctx->pc = 0x7F454718u;
    // 7F454718: stw     r5, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45471C:
    ctx->pc = 0x7F45471Cu;
    // 7F45471C: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454720:
    // 7F454720: bl      0x7F1146A0
    {
            ctx->lr = 0x7F454724u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F454724:
    ctx->downcount -= 4;
    // 7F454724: addi    r3, r1, 216
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454728:
    // 7F454728: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F45472C:
    // 7F45472C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454730:
    // 7F454730: bl      0x80025A80
    {
            ctx->lr = 0x7F454734u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F454734:
    ctx->downcount -= 23;
    // 7F454734: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454738:
    // 7F454738: addi    r3, r1, 168
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(168);

label_7F45473C:
    // 7F45473C: addi    r5, r4, -7456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7456);

label_7F454740:
    ctx->pc = 0x7F454740u;
    // 7F454740: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F454740u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454744:
    // 7F454744: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454748:
    ctx->pc = 0x7F454748u;
    // 7F454748: fdivs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F454748u)) return;
    ppc_fdivs(ctx, 1, 0, 31);

label_7F45474C:
    // 7F45474C: bl      0x7F44D538
    {
            ctx->lr = 0x7F454750u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454750:
    ctx->pc = 0x7F454750u;
    ctx->downcount -= 4;
    // 7F454750: lfs     f1, 432(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F454750u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454754:
    // 7F454754: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F454758:
    // 7F454758: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F45475C:
    // 7F45475C: bl      0x7F44D538
    {
            ctx->lr = 0x7F454760u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454760:
    ctx->downcount -= 3;
    // 7F454760: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F454764:
    // 7F454764: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F454768:
    // 7F454768: b       0x7F45492C
    {
            goto label_7F45492C;
    }

label_7F45476C:
    ctx->pc = 0x7F45476Cu;
    ctx->downcount -= 15;
    // 7F45476C: lwz     r4, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454770:
    // 7F454770: addi    r0, r23, 492
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(492);

label_7F454774:
    // 7F454774: or   r5, r17, r17
    {
        ctx->gpr[5] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F454778:
    // 7F454778: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F45477C:
    // 7F45477C: add   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F454780:
    // 7F454780: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F454784:
    ctx->pc = 0x7F454784u;
    // 7F454784: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454788:
    ctx->pc = 0x7F454788u;
    // 7F454788: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45478C:
    ctx->pc = 0x7F45478Cu;
    // 7F45478C: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F454790:
    ctx->pc = 0x7F454790u;
    // 7F454790: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454794:
    ctx->pc = 0x7F454794u;
    // 7F454794: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454798:
    ctx->pc = 0x7F454798u;
    // 7F454798: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45479C:
    ctx->pc = 0x7F45479Cu;
    // 7F45479C: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4547A0:
    ctx->pc = 0x7F4547A0u;
    // 7F4547A0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4547A4:
    // 7F4547A4: bl      0x7F453730
    {
            ctx->lr = 0x7F4547A8u;
            ctx->pc = 0x7F453730u;
            return;
    }

label_7F4547A8:
    ctx->downcount -= 2;
    // 7F4547A8: cmpwi   r3, 0
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

label_7F4547AC:
    // 7F4547AC: bc    12, 2, 0x7F454814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454814;
        }
    }

label_7F4547B0:
    ctx->downcount -= 2;
    // 7F4547B0: cmpwi   r3, -1
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

label_7F4547B4:
    // 7F4547B4: bc    12, 2, 0x7F4547D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4547D4;
        }
    }

label_7F4547B8:
    ctx->downcount -= 3;
    // 7F4547B8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F4547BC:
    // 7F4547BC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4547C0:
    // 7F4547C0: bl      0x7F453518
    {
            ctx->lr = 0x7F4547C4u;
            ctx->pc = 0x7F453518u;
            return;
    }

label_7F4547C4:
    ctx->downcount -= 4;
    // 7F4547C4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4547C8:
    ctx->pc = 0x7F4547C8u;
    // 7F4547C8: lfs     f0, -7436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4547C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4547CC:
    ctx->pc = 0x7F4547CCu;
    // 7F4547CC: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4547CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F4547D0:
    // 7F4547D0: bc    4, 0, 0x7F454814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454814;
        }
    }

label_7F4547D4:
    ctx->pc = 0x7F4547D4u;
    ctx->downcount -= 16;
    // 7F4547D4: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4547D8:
    // 7F4547D8: addi    r0, r23, 492
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(492);

label_7F4547DC:
    // 7F4547DC: add   r5, r22, r23
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F4547E0:
    // 7F4547E0: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F4547E4:
    ctx->pc = 0x7F4547E4u;
    // 7F4547E4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4547E8:
    ctx->pc = 0x7F4547E8u;
    // 7F4547E8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4547EC:
    ctx->pc = 0x7F4547ECu;
    // 7F4547EC: stw     r3, 492(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4547F0:
    ctx->pc = 0x7F4547F0u;
    // 7F4547F0: stw     r0, 496(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4547F4:
    ctx->pc = 0x7F4547F4u;
    // 7F4547F4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4547F8:
    ctx->pc = 0x7F4547F8u;
    // 7F4547F8: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4547FC:
    ctx->pc = 0x7F4547FCu;
    // 7F4547FC: stw     r3, 500(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454800:
    ctx->pc = 0x7F454800u;
    // 7F454800: stw     r0, 504(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454804:
    ctx->pc = 0x7F454804u;
    // 7F454804: lwz     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454808:
    // 7F454808: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F45480C:
    ctx->pc = 0x7F45480Cu;
    // 7F45480C: stw     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454810:
    // 7F454810: b       0x7F454924
    {
            goto label_7F454924;
    }

label_7F454814:
    ctx->downcount -= 8;
    // 7F454814: add   r14, r22, r23
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[14] = res;
    }

label_7F454818:
    ctx->pc = 0x7F454818u;
    // 7F454818: lwz     r0, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45481C:
    // 7F45481C: addi    r3, r23, 444
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(444);

label_7F454820:
    // 7F454820: addi    r4, r1, 216
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454824:
    // 7F454824: addi    r24, r14, 444
    ctx->gpr[24] = ctx->gpr[14] + (u32)(s32)(444);

label_7F454828:
    // 7F454828: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F45482C:
    // 7F45482C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F454830:
    // 7F454830: bl      0x80025A80
    {
            ctx->lr = 0x7F454834u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F454834:
    ctx->downcount -= 4;
    // 7F454834: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F454838:
    // 7F454838: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F45483C:
    // 7F45483C: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F454840:
    // 7F454840: bl      0x80025A80
    {
            ctx->lr = 0x7F454844u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F454844:
    ctx->downcount -= 13;
    // 7F454844: xoris   r3, r16, 0x8000
    ctx->gpr[3] = ctx->gpr[16] ^ (0x8000u << 16);

label_7F454848:
    // 7F454848: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F45484C:
    ctx->pc = 0x7F45484Cu;
    // 7F45484C: stw     r3, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454850:
    // 7F454850: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454854:
    ctx->pc = 0x7F454854u;
    // 7F454854: lfd     f1, -7512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454854u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454858:
    // 7F454858: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F45485C:
    ctx->pc = 0x7F45485Cu;
    // 7F45485C: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454860:
    // 7F454860: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454864:
    ctx->pc = 0x7F454864u;
    // 7F454864: lfs     f2, 428(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F454864u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F454868:
    ctx->pc = 0x7F454868u;
    // 7F454868: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454868u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45486C:
    ctx->pc = 0x7F45486Cu;
    // 7F45486C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45486Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454870:
    ctx->pc = 0x7F454870u;
    // 7F454870: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454870u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F454874:
    // 7F454874: bl      0x7F44D538
    {
            ctx->lr = 0x7F454878u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454878:
    ctx->downcount -= 4;
    // 7F454878: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F45487C:
    // 7F45487C: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F454880:
    // 7F454880: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454884:
    // 7F454884: bl      0x7F44CA80
    {
            ctx->lr = 0x7F454888u;
            ctx->pc = 0x7F44CA80u;
            return;
    }

label_7F454888:
    ctx->pc = 0x7F454888u;
    ctx->downcount -= 13;
    // 7F454888: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45488C:
    // 7F45488C: cmpwi   r21, 0
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

label_7F454890:
    ctx->pc = 0x7F454890u;
    // 7F454890: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454894:
    ctx->pc = 0x7F454894u;
    // 7F454894: stw     r3, 492(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454898:
    ctx->pc = 0x7F454898u;
    // 7F454898: stw     r0, 496(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45489C:
    ctx->pc = 0x7F45489Cu;
    // 7F45489C: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4548A0:
    ctx->pc = 0x7F4548A0u;
    // 7F4548A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4548A4:
    ctx->pc = 0x7F4548A4u;
    // 7F4548A4: stw     r3, 500(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4548A8:
    ctx->pc = 0x7F4548A8u;
    // 7F4548A8: stw     r0, 504(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4548AC:
    ctx->pc = 0x7F4548ACu;
    // 7F4548AC: lwz     r0, 636(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4548B0:
    // 7F4548B0: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F4548B4:
    ctx->pc = 0x7F4548B4u;
    // 7F4548B4: stw     r0, 636(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4548B8:
    // 7F4548B8: bc    12, 2, 0x7F4548E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4548E0;
        }
    }

label_7F4548BC:
    ctx->downcount -= 4;
    // 7F4548BC: addi    r3, r22, 336
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(336);

label_7F4548C0:
    // 7F4548C0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4548C4:
    // 7F4548C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4548C8:
    // 7F4548C8: bl      0x7F453404
    {
            ctx->lr = 0x7F4548CCu;
            ctx->pc = 0x7F453404u;
            return;
    }

label_7F4548CC:
    ctx->downcount -= 4;
    // 7F4548CC: addi    r3, r22, 352
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(352);

label_7F4548D0:
    // 7F4548D0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4548D4:
    // 7F4548D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4548D8:
    // 7F4548D8: bl      0x7F453390
    {
            ctx->lr = 0x7F4548DCu;
            ctx->pc = 0x7F453390u;
            return;
    }

label_7F4548DC:
    ctx->downcount -= 1;
    // 7F4548DC: b       0x7F454924
    {
            goto label_7F454924;
    }

label_7F4548E0:
    ctx->pc = 0x7F4548E0u;
    ctx->downcount -= 17;
    // 7F4548E0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4548E4:
    // 7F4548E4: li      r21, 1
    ctx->gpr[21] = (u32)(s32)(1);

label_7F4548E8:
    ctx->pc = 0x7F4548E8u;
    // 7F4548E8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4548EC:
    ctx->pc = 0x7F4548ECu;
    // 7F4548EC: stw     r3, 336(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4548F0:
    ctx->pc = 0x7F4548F0u;
    // 7F4548F0: stw     r0, 340(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4548F4:
    ctx->pc = 0x7F4548F4u;
    // 7F4548F4: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4548F8:
    ctx->pc = 0x7F4548F8u;
    // 7F4548F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4548FC:
    ctx->pc = 0x7F4548FCu;
    // 7F4548FC: stw     r3, 344(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454900:
    ctx->pc = 0x7F454900u;
    // 7F454900: stw     r0, 348(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454904:
    ctx->pc = 0x7F454904u;
    // 7F454904: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454908:
    ctx->pc = 0x7F454908u;
    // 7F454908: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45490C:
    ctx->pc = 0x7F45490Cu;
    // 7F45490C: stw     r3, 352(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454910:
    ctx->pc = 0x7F454910u;
    // 7F454910: stw     r0, 356(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454914:
    ctx->pc = 0x7F454914u;
    // 7F454914: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454918:
    ctx->pc = 0x7F454918u;
    // 7F454918: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45491C:
    ctx->pc = 0x7F45491Cu;
    // 7F45491C: stw     r3, 360(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454920:
    ctx->pc = 0x7F454920u;
    // 7F454920: stw     r0, 364(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454924:
    ctx->downcount -= 2;
    // 7F454924: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F454928:
    // 7F454928: addi    r23, r23, 324
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(324);

label_7F45492C:
    ctx->pc = 0x7F45492Cu;
    ctx->downcount -= 3;
    // 7F45492C: lwz     r0, 72(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454930:
    // 7F454930: cmpw    r19, r0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454934:
    // 7F454934: bc    12, 0, 0x7F45476C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45476Cu;
                return;
            }
            goto label_7F45476C;
        }
    }

label_7F454938:
    ctx->downcount -= 22;
    // 7F454938: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45493C:
    ctx->pc = 0x7F45493Cu;
    // 7F45493C: lfs     f0, 336(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F45493Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454940:
    ctx->pc = 0x7F454940u;
    // 7F454940: lfs     f1, -7432(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454940u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454944:
    // 7F454944: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F454948:
    // 7F454948: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F45494C:
    ctx->pc = 0x7F45494Cu;
    // 7F45494C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45494Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454950:
    ctx->pc = 0x7F454950u;
    // 7F454950: stfs     f0, 336(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454950u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454954:
    ctx->pc = 0x7F454954u;
    // 7F454954: lfs     f0, 340(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454954u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454958:
    ctx->pc = 0x7F454958u;
    // 7F454958: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454958u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F45495C:
    ctx->pc = 0x7F45495Cu;
    // 7F45495C: stfs     f0, 340(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F45495Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454960:
    ctx->pc = 0x7F454960u;
    // 7F454960: lfs     f0, 344(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454960u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454964:
    ctx->pc = 0x7F454964u;
    // 7F454964: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454964u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454968:
    ctx->pc = 0x7F454968u;
    // 7F454968: stfs     f0, 344(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454968u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45496C:
    ctx->pc = 0x7F45496Cu;
    // 7F45496C: lfs     f0, 352(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F45496Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454970:
    ctx->pc = 0x7F454970u;
    // 7F454970: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454970u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F454974:
    ctx->pc = 0x7F454974u;
    // 7F454974: stfs     f0, 352(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454974u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454978:
    ctx->pc = 0x7F454978u;
    // 7F454978: lfs     f0, 356(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454978u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45497C:
    ctx->pc = 0x7F45497Cu;
    // 7F45497C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45497Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F454980:
    ctx->pc = 0x7F454980u;
    // 7F454980: stfs     f0, 356(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454980u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454984:
    ctx->pc = 0x7F454984u;
    // 7F454984: lfs     f0, 360(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F454984u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454988:
    ctx->pc = 0x7F454988u;
    // 7F454988: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454988u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F45498C:
    ctx->pc = 0x7F45498Cu;
    // 7F45498C: stfs     f0, 360(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F45498Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454990:
    ctx->downcount -= 4;
    // 7F454990: addi    r0, r30, 128
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(128);

label_7F454994:
    ctx->pc = 0x7F454994u;
    // 7F454994: lwzx    r25, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F454998:
    // 7F454998: cmplwi  r25, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F45499C:
    // 7F45499C: bc    12, 2, 0x7F454C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454C00;
        }
    }

label_7F4549A0:
    ctx->downcount -= 7;
    // 7F4549A0: add   r14, r15, r30
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[14] = res;
    }

label_7F4549A4:
    // 7F4549A4: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F4549A8:
    ctx->pc = 0x7F4549A8u;
    // 7F4549A8: lwz     r0, 120(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4549AC:
    // 7F4549AC: addi    r16, r16, -1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(-1);

label_7F4549B0:
    ctx->pc = 0x7F4549B0u;
    // 7F4549B0: lwz     r19, 108(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(108);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F4549B4:
    // 7F4549B4: rlwinm. r0, r0, 0, 31, 31
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

label_7F4549B8:
    // 7F4549B8: bc    12, 2, 0x7F4549CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4549CC;
        }
    }

label_7F4549BC:
    ctx->pc = 0x7F4549BCu;
    ctx->downcount -= 4;
    // 7F4549BC: lwz     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4549C0:
    // 7F4549C0: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F4549C4:
    ctx->pc = 0x7F4549C4u;
    // 7F4549C4: stw     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4549C8:
    // 7F4549C8: b       0x7F454C00
    {
            goto label_7F454C00;
    }

label_7F4549CC:
    ctx->pc = 0x7F4549CCu;
    ctx->downcount -= 6;
    // 7F4549CC: lwz     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4549D0:
    // 7F4549D0: or   r22, r20, r20
    {
        ctx->gpr[22] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F4549D4:
    // 7F4549D4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4549D8:
    // 7F4549D8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F4549DC:
    ctx->pc = 0x7F4549DCu;
    // 7F4549DC: stw     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4549E0:
    // 7F4549E0: b       0x7F454BA4
    {
            goto label_7F454BA4;
    }

label_7F4549E4:
    ctx->pc = 0x7F4549E4u;
    ctx->downcount -= 15;
    // 7F4549E4: lwz     r4, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4549E8:
    // 7F4549E8: addi    r0, r29, 492
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(492);

label_7F4549EC:
    // 7F4549EC: or   r5, r17, r17
    {
        ctx->gpr[5] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F4549F0:
    // 7F4549F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4549F4:
    // 7F4549F4: add   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F4549F8:
    // 7F4549F8: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F4549FC:
    ctx->pc = 0x7F4549FCu;
    // 7F4549FC: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454A00:
    ctx->pc = 0x7F454A00u;
    // 7F454A00: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A04:
    ctx->pc = 0x7F454A04u;
    // 7F454A04: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F454A08:
    ctx->pc = 0x7F454A08u;
    // 7F454A08: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454A0C:
    ctx->pc = 0x7F454A0Cu;
    // 7F454A0C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454A10:
    ctx->pc = 0x7F454A10u;
    // 7F454A10: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A14:
    ctx->pc = 0x7F454A14u;
    // 7F454A14: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F454A18:
    ctx->pc = 0x7F454A18u;
    // 7F454A18: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454A1C:
    // 7F454A1C: bl      0x7F453730
    {
            ctx->lr = 0x7F454A20u;
            ctx->pc = 0x7F453730u;
            return;
    }

label_7F454A20:
    ctx->downcount -= 2;
    // 7F454A20: cmpwi   r3, 0
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

label_7F454A24:
    // 7F454A24: bc    12, 2, 0x7F454A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454A8C;
        }
    }

label_7F454A28:
    ctx->downcount -= 2;
    // 7F454A28: cmpwi   r3, -1
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

label_7F454A2C:
    // 7F454A2C: bc    12, 2, 0x7F454A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454A4C;
        }
    }

label_7F454A30:
    ctx->downcount -= 3;
    // 7F454A30: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F454A34:
    // 7F454A34: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F454A38:
    // 7F454A38: bl      0x7F453518
    {
            ctx->lr = 0x7F454A3Cu;
            ctx->pc = 0x7F453518u;
            return;
    }

label_7F454A3C:
    ctx->downcount -= 4;
    // 7F454A3C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454A40:
    ctx->pc = 0x7F454A40u;
    // 7F454A40: lfs     f0, -7436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454A40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454A44:
    ctx->pc = 0x7F454A44u;
    // 7F454A44: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454A44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F454A48:
    // 7F454A48: bc    4, 0, 0x7F454A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454A8C;
        }
    }

label_7F454A4C:
    ctx->pc = 0x7F454A4Cu;
    ctx->downcount -= 16;
    // 7F454A4C: lwz     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454A50:
    // 7F454A50: addi    r0, r29, 492
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(492);

label_7F454A54:
    // 7F454A54: add   r5, r25, r29
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F454A58:
    // 7F454A58: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F454A5C:
    ctx->pc = 0x7F454A5Cu;
    // 7F454A5C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454A60:
    ctx->pc = 0x7F454A60u;
    // 7F454A60: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A64:
    ctx->pc = 0x7F454A64u;
    // 7F454A64: stw     r3, 492(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454A68:
    ctx->pc = 0x7F454A68u;
    // 7F454A68: stw     r0, 496(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454A6C:
    ctx->pc = 0x7F454A6Cu;
    // 7F454A6C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454A70:
    ctx->pc = 0x7F454A70u;
    // 7F454A70: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A74:
    ctx->pc = 0x7F454A74u;
    // 7F454A74: stw     r3, 500(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454A78:
    ctx->pc = 0x7F454A78u;
    // 7F454A78: stw     r0, 504(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454A7C:
    ctx->pc = 0x7F454A7Cu;
    // 7F454A7C: lwz     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A80:
    // 7F454A80: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F454A84:
    ctx->pc = 0x7F454A84u;
    // 7F454A84: stw     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454A88:
    // 7F454A88: b       0x7F454B9C
    {
            goto label_7F454B9C;
    }

label_7F454A8C:
    ctx->downcount -= 8;
    // 7F454A8C: add   r23, r25, r29
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F454A90:
    ctx->pc = 0x7F454A90u;
    // 7F454A90: lwz     r0, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454A94:
    // 7F454A94: addi    r3, r29, 444
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(444);

label_7F454A98:
    // 7F454A98: addi    r4, r1, 216
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(216);

label_7F454A9C:
    // 7F454A9C: addi    r24, r23, 444
    ctx->gpr[24] = ctx->gpr[23] + (u32)(s32)(444);

label_7F454AA0:
    // 7F454AA0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F454AA4:
    // 7F454AA4: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F454AA8:
    // 7F454AA8: bl      0x80025A80
    {
            ctx->lr = 0x7F454AACu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F454AAC:
    ctx->downcount -= 4;
    // 7F454AAC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F454AB0:
    // 7F454AB0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F454AB4:
    // 7F454AB4: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F454AB8:
    // 7F454AB8: bl      0x80025A80
    {
            ctx->lr = 0x7F454ABCu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F454ABC:
    ctx->downcount -= 13;
    // 7F454ABC: xoris   r3, r16, 0x8000
    ctx->gpr[3] = ctx->gpr[16] ^ (0x8000u << 16);

label_7F454AC0:
    // 7F454AC0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F454AC4:
    ctx->pc = 0x7F454AC4u;
    // 7F454AC4: stw     r3, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454AC8:
    // 7F454AC8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454ACC:
    ctx->pc = 0x7F454ACCu;
    // 7F454ACC: lfd     f1, -7512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454ACCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454AD0:
    // 7F454AD0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F454AD4:
    ctx->pc = 0x7F454AD4u;
    // 7F454AD4: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454AD8:
    // 7F454AD8: addi    r4, r18, 32
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(32);

label_7F454ADC:
    ctx->pc = 0x7F454ADCu;
    // 7F454ADC: lfs     f2, 428(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F454ADCu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F454AE0:
    ctx->pc = 0x7F454AE0u;
    // 7F454AE0: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454AE4:
    ctx->pc = 0x7F454AE4u;
    // 7F454AE4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454AE4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454AE8:
    ctx->pc = 0x7F454AE8u;
    // 7F454AE8: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454AE8u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F454AEC:
    // 7F454AEC: bl      0x7F44D538
    {
            ctx->lr = 0x7F454AF0u;
            ctx->pc = 0x7F44D538u;
            return;
    }

label_7F454AF0:
    ctx->downcount -= 4;
    // 7F454AF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F454AF4:
    // 7F454AF4: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F454AF8:
    // 7F454AF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454AFC:
    // 7F454AFC: bl      0x7F44CA80
    {
            ctx->lr = 0x7F454B00u;
            ctx->pc = 0x7F44CA80u;
            return;
    }

label_7F454B00:
    ctx->pc = 0x7F454B00u;
    ctx->downcount -= 13;
    // 7F454B00: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B04:
    // 7F454B04: cmpwi   r20, 0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454B08:
    ctx->pc = 0x7F454B08u;
    // 7F454B08: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B0C:
    ctx->pc = 0x7F454B0Cu;
    // 7F454B0C: stw     r3, 492(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B10:
    ctx->pc = 0x7F454B10u;
    // 7F454B10: stw     r0, 496(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B14:
    ctx->pc = 0x7F454B14u;
    // 7F454B14: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B18:
    ctx->pc = 0x7F454B18u;
    // 7F454B18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B1C:
    ctx->pc = 0x7F454B1Cu;
    // 7F454B1C: stw     r3, 500(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B20:
    ctx->pc = 0x7F454B20u;
    // 7F454B20: stw     r0, 504(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B24:
    ctx->pc = 0x7F454B24u;
    // 7F454B24: lwz     r0, 636(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B28:
    // 7F454B28: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F454B2C:
    ctx->pc = 0x7F454B2Cu;
    // 7F454B2C: stw     r0, 636(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B30:
    // 7F454B30: bc    12, 2, 0x7F454B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454B58;
        }
    }

label_7F454B34:
    ctx->downcount -= 4;
    // 7F454B34: addi    r3, r25, 336
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(336);

label_7F454B38:
    // 7F454B38: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F454B3C:
    // 7F454B3C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454B40:
    // 7F454B40: bl      0x7F453404
    {
            ctx->lr = 0x7F454B44u;
            ctx->pc = 0x7F453404u;
            return;
    }

label_7F454B44:
    ctx->downcount -= 4;
    // 7F454B44: addi    r3, r25, 352
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(352);

label_7F454B48:
    // 7F454B48: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F454B4C:
    // 7F454B4C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454B50:
    // 7F454B50: bl      0x7F453390
    {
            ctx->lr = 0x7F454B54u;
            ctx->pc = 0x7F453390u;
            return;
    }

label_7F454B54:
    ctx->downcount -= 1;
    // 7F454B54: b       0x7F454B9C
    {
            goto label_7F454B9C;
    }

label_7F454B58:
    ctx->pc = 0x7F454B58u;
    ctx->downcount -= 17;
    // 7F454B58: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B5C:
    // 7F454B5C: li      r20, 1
    ctx->gpr[20] = (u32)(s32)(1);

label_7F454B60:
    ctx->pc = 0x7F454B60u;
    // 7F454B60: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B64:
    ctx->pc = 0x7F454B64u;
    // 7F454B64: stw     r3, 336(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B68:
    ctx->pc = 0x7F454B68u;
    // 7F454B68: stw     r0, 340(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B6C:
    ctx->pc = 0x7F454B6Cu;
    // 7F454B6C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B70:
    ctx->pc = 0x7F454B70u;
    // 7F454B70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B74:
    ctx->pc = 0x7F454B74u;
    // 7F454B74: stw     r3, 344(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B78:
    ctx->pc = 0x7F454B78u;
    // 7F454B78: stw     r0, 348(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B7C:
    ctx->pc = 0x7F454B7Cu;
    // 7F454B7C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B80:
    ctx->pc = 0x7F454B80u;
    // 7F454B80: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B84:
    ctx->pc = 0x7F454B84u;
    // 7F454B84: stw     r3, 352(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B88:
    ctx->pc = 0x7F454B88u;
    // 7F454B88: stw     r0, 356(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B8C:
    ctx->pc = 0x7F454B8Cu;
    // 7F454B8C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454B90:
    ctx->pc = 0x7F454B90u;
    // 7F454B90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454B94:
    ctx->pc = 0x7F454B94u;
    // 7F454B94: stw     r3, 360(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454B98:
    ctx->pc = 0x7F454B98u;
    // 7F454B98: stw     r0, 364(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454B9C:
    ctx->downcount -= 2;
    // 7F454B9C: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F454BA0:
    // 7F454BA0: addi    r29, r29, 324
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(324);

label_7F454BA4:
    ctx->pc = 0x7F454BA4u;
    ctx->downcount -= 3;
    // 7F454BA4: lwz     r0, 116(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454BA8:
    // 7F454BA8: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454BAC:
    // 7F454BAC: bc    12, 0, 0x7F4549E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4549E4u;
                return;
            }
            goto label_7F4549E4;
        }
    }

label_7F454BB0:
    ctx->downcount -= 20;
    // 7F454BB0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454BB4:
    ctx->pc = 0x7F454BB4u;
    // 7F454BB4: lfs     f0, 336(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BB4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BB8:
    ctx->pc = 0x7F454BB8u;
    // 7F454BB8: lfs     f1, -7432(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454BB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454BBC:
    ctx->pc = 0x7F454BBCu;
    // 7F454BBC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BBCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454BC0:
    ctx->pc = 0x7F454BC0u;
    // 7F454BC0: stfs     f0, 336(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BC0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454BC4:
    ctx->pc = 0x7F454BC4u;
    // 7F454BC4: lfs     f0, 340(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BC4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BC8:
    ctx->pc = 0x7F454BC8u;
    // 7F454BC8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BC8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454BCC:
    ctx->pc = 0x7F454BCCu;
    // 7F454BCC: stfs     f0, 340(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BCCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454BD0:
    ctx->pc = 0x7F454BD0u;
    // 7F454BD0: lfs     f0, 344(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BD0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BD4:
    ctx->pc = 0x7F454BD4u;
    // 7F454BD4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BD4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F454BD8:
    ctx->pc = 0x7F454BD8u;
    // 7F454BD8: stfs     f0, 344(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BD8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454BDC:
    ctx->pc = 0x7F454BDCu;
    // 7F454BDC: lfs     f0, 352(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BDCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BE0:
    ctx->pc = 0x7F454BE0u;
    // 7F454BE0: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BE0u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F454BE4:
    ctx->pc = 0x7F454BE4u;
    // 7F454BE4: stfs     f0, 352(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BE4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454BE8:
    ctx->pc = 0x7F454BE8u;
    // 7F454BE8: lfs     f0, 356(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BE8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BEC:
    ctx->pc = 0x7F454BECu;
    // 7F454BEC: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BECu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F454BF0:
    ctx->pc = 0x7F454BF0u;
    // 7F454BF0: stfs     f0, 356(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BF0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454BF4:
    ctx->pc = 0x7F454BF4u;
    // 7F454BF4: lfs     f0, 360(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BF4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454BF8:
    ctx->pc = 0x7F454BF8u;
    // 7F454BF8: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454BF8u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F454BFC:
    ctx->pc = 0x7F454BFCu;
    // 7F454BFC: stfs     f0, 360(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F454BFCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454C00:
    ctx->downcount -= 4;
    // 7F454C00: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F454C04:
    // 7F454C04: addi    r30, r30, 40
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(40);

label_7F454C08:
    // 7F454C08: cmpwi   r21, 8
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454C0C:
    // 7F454C0C: bc    12, 0, 0x7F454990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454990u;
                return;
            }
            goto label_7F454990;
        }
    }

label_7F454C10:
    ctx->pc = 0x7F454C10u;
    ctx->downcount -= 7;
    // 7F454C10: lwz     r3, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454C14:
    // 7F454C14: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F454C18:
    // 7F454C18: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F454C1C:
    // 7F454C1C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454C20:
    ctx->pc = 0x7F454C20u;
    // 7F454C20: stw     r3, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454C24:
    // 7F454C24: cmpwi   r0, 4
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

label_7F454C28:
    // 7F454C28: bc    12, 0, 0x7F4542E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4542E4u;
                return;
            }
            goto label_7F4542E4;
        }
    }

label_7F454C2C:
    ctx->pc = 0x7F454C2Cu;
    ctx->downcount -= 2;
    // 7F454C2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F454C30:
    ctx->pc = 0x7F454C30u;
    // 7F454C30: stw     r0, 436(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454C34:
    ctx->pc = 0x7F454C34u;
    ctx->downcount -= 18;
    // 7F454C34: psq_l   f31, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F454C34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F454C34u);
        if (ctx->exception) return;
    }

label_7F454C38:
    ctx->pc = 0x7F454C38u;
    // 7F454C38: lfd     f31, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454C3C:
    ctx->pc = 0x7F454C3Cu;
    // 7F454C3C: lmw     r14, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F454C40:
    ctx->pc = 0x7F454C40u;
    // 7F454C40: lwz     r0, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454C44:
    ctx->pc = 0x7F454C44u;
    // 7F454C44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F454C48:
    ctx->pc = 0x7F454C48u;
    // 7F454C48: addi    r1, r1, 384
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(384);

label_7F454C4C:
    ctx->pc = 0x7F454C4Cu;
    // 7F454C4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454C50:
    ctx->pc = 0x7F454C50u;
    ctx->downcount -= 17;
    // 7F454C50: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F454C54:
    ctx->pc = 0x7F454C54u;
    // 7F454C54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F454C58:
    ctx->pc = 0x7F454C58u;
    // 7F454C58: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454C5C:
    ctx->pc = 0x7F454C5Cu;
    // 7F454C5C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F454C60:
    ctx->pc = 0x7F454C60u;
    // 7F454C60: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454C64:
    ctx->pc = 0x7F454C64u;
    // 7F454C64: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F454C68:
    ctx->pc = 0x7F454C68u;
    // 7F454C68: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F454C6C:
    ctx->downcount -= 4;
    // 7F454C6C: add   r29, r25, r31
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F454C70:
    ctx->pc = 0x7F454C70u;
    // 7F454C70: lwz     r3, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454C74:
    // 7F454C74: cmplwi  r3, 0x0000
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

label_7F454C78:
    // 7F454C78: bc    12, 2, 0x7F454C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454C80;
        }
    }

label_7F454C7C:
    ctx->downcount -= 1;
    // 7F454C7C: bl      0x7F4541AC
    {
            ctx->lr = 0x7F454C80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4541ACu;
                return;
            }
            goto label_7F4541AC;
    }

label_7F454C80:
    ctx->downcount -= 2;
    // 7F454C80: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F454C84:
    // 7F454C84: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F454C88:
    ctx->downcount -= 4;
    // 7F454C88: addi    r28, r30, 128
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(128);

label_7F454C8C:
    ctx->pc = 0x7F454C8Cu;
    // 7F454C8C: lwzx    r3, r29, r28
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[28];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454C90:
    // 7F454C90: cmplwi  r3, 0x0000
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

label_7F454C94:
    // 7F454C94: bc    12, 2, 0x7F454CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454CA4;
        }
    }

label_7F454C98:
    ctx->downcount -= 1;
    // 7F454C98: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F454C9Cu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F454C9C:
    ctx->pc = 0x7F454C9Cu;
    ctx->downcount -= 2;
    // 7F454C9C: lwzx    r3, r29, r28
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[28];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454CA0:
    // 7F454CA0: bl      0x7F3B0820
    {
            ctx->lr = 0x7F454CA4u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F454CA4:
    ctx->downcount -= 4;
    // 7F454CA4: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F454CA8:
    // 7F454CA8: addi    r30, r30, 40
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(40);

label_7F454CAC:
    // 7F454CAC: cmpwi   r26, 8
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454CB0:
    // 7F454CB0: bc    12, 0, 0x7F454C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454C88u;
                return;
            }
            goto label_7F454C88;
        }
    }

label_7F454CB4:
    ctx->downcount -= 4;
    // 7F454CB4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F454CB8:
    // 7F454CB8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F454CBC:
    // 7F454CBC: cmpwi   r27, 4
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

label_7F454CC0:
    // 7F454CC0: bc    12, 0, 0x7F454C6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454C6Cu;
                return;
            }
            goto label_7F454C6C;
        }
    }

label_7F454CC4:
    ctx->pc = 0x7F454CC4u;
    ctx->downcount -= 16;
    // 7F454CC4: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F454CC8:
    ctx->pc = 0x7F454CC8u;
    // 7F454CC8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454CCC:
    ctx->pc = 0x7F454CCCu;
    // 7F454CCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F454CD0:
    ctx->pc = 0x7F454CD0u;
    // 7F454CD0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F454CD4:
    ctx->pc = 0x7F454CD4u;
    // 7F454CD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454CD8:
    ctx->pc = 0x7F454CD8u;
    ctx->downcount -= 6;
    // 7F454CD8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F454CDC:
    ctx->pc = 0x7F454CDCu;
    // 7F454CDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F454CE0:
    ctx->pc = 0x7F454CE0u;
    // 7F454CE0: cmpwi   r4, 5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454CE4:
    ctx->pc = 0x7F454CE4u;
    // 7F454CE4: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F454CE8:
    ctx->pc = 0x7F454CE8u;
    // 7F454CE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454CEC:
    ctx->pc = 0x7F454CECu;
    // 7F454CEC: bc    12, 2, 0x7F454E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454E70;
        }
    }

label_7F454CF0:
    ctx->pc = 0x7F454CF0u;
    ctx->downcount -= 1;
    // 7F454CF0: bc    4, 0, 0x7F454D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454D1C;
        }
    }

label_7F454CF4:
    ctx->pc = 0x7F454CF4u;
    ctx->downcount -= 2;
    // 7F454CF4: cmpwi   r4, 2
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

label_7F454CF8:
    ctx->pc = 0x7F454CF8u;
    // 7F454CF8: bc    12, 2, 0x7F454D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454D60;
        }
    }

label_7F454CFC:
    ctx->pc = 0x7F454CFCu;
    ctx->downcount -= 1;
    // 7F454CFC: bc    4, 0, 0x7F454D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454D10;
        }
    }

label_7F454D00:
    ctx->pc = 0x7F454D00u;
    ctx->downcount -= 2;
    // 7F454D00: cmpwi   r4, 0
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

label_7F454D04:
    ctx->pc = 0x7F454D04u;
    // 7F454D04: bc    12, 2, 0x7F454D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454D40;
        }
    }

label_7F454D08:
    ctx->pc = 0x7F454D08u;
    ctx->downcount -= 1;
    // 7F454D08: bc    4, 0, 0x7F454D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454D50;
        }
    }

label_7F454D0C:
    ctx->pc = 0x7F454D0Cu;
    ctx->downcount -= 1;
    // 7F454D0C: b       0x7F454F0C
    {
            goto label_7F454F0C;
    }

label_7F454D10:
    ctx->pc = 0x7F454D10u;
    ctx->downcount -= 2;
    // 7F454D10: cmpwi   r4, 4
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

label_7F454D14:
    ctx->pc = 0x7F454D14u;
    // 7F454D14: bc    4, 0, 0x7F454E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454E5C;
        }
    }

label_7F454D18:
    ctx->pc = 0x7F454D18u;
    ctx->downcount -= 1;
    // 7F454D18: b       0x7F454DC8
    {
            goto label_7F454DC8;
    }

label_7F454D1C:
    ctx->pc = 0x7F454D1Cu;
    ctx->downcount -= 4;
    // 7F454D1C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F454D20:
    ctx->pc = 0x7F454D20u;
    // 7F454D20: addi    r0, r5, -32768
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-32768);

label_7F454D24:
    ctx->pc = 0x7F454D24u;
    // 7F454D24: cmpw    r4, r0
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

label_7F454D28:
    ctx->pc = 0x7F454D28u;
    // 7F454D28: bc    12, 2, 0x7F454EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454EE8;
        }
    }

label_7F454D2C:
    ctx->pc = 0x7F454D2Cu;
    ctx->downcount -= 1;
    // 7F454D2C: bc    4, 0, 0x7F454F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454F0C;
        }
    }

label_7F454D30:
    ctx->pc = 0x7F454D30u;
    ctx->downcount -= 2;
    // 7F454D30: cmpwi   r4, 7
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F454D34:
    ctx->pc = 0x7F454D34u;
    // 7F454D34: bc    12, 2, 0x7F454E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454E88;
        }
    }

label_7F454D38:
    ctx->pc = 0x7F454D38u;
    ctx->downcount -= 1;
    // 7F454D38: bc    4, 0, 0x7F454F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454F0C;
        }
    }

label_7F454D3C:
    ctx->pc = 0x7F454D3Cu;
    ctx->downcount -= 1;
    // 7F454D3C: b       0x7F454E7C
    {
            goto label_7F454E7C;
    }

label_7F454D40:
    ctx->pc = 0x7F454D40u;
    ctx->downcount -= 4;
    // 7F454D40: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D44:
    ctx->pc = 0x7F454D44u;
    // 7F454D44: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F454D48:
    ctx->pc = 0x7F454D48u;
    // 7F454D48: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454D4C:
    ctx->pc = 0x7F454D4Cu;
    // 7F454D4C: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454D50:
    ctx->pc = 0x7F454D50u;
    ctx->downcount -= 4;
    // 7F454D50: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D54:
    ctx->pc = 0x7F454D54u;
    // 7F454D54: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F454D58:
    ctx->pc = 0x7F454D58u;
    // 7F454D58: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454D5C:
    ctx->pc = 0x7F454D5Cu;
    // 7F454D5C: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454D60:
    ctx->pc = 0x7F454D60u;
    ctx->downcount -= 4;
    // 7F454D60: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F454D64:
    ctx->pc = 0x7F454D64u;
    // 7F454D64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F454D68:
    ctx->pc = 0x7F454D68u;
    // 7F454D68: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F454D6C:
    ctx->downcount -= 4;
    // 7F454D6C: addi    r0, r4, 76
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(76);

label_7F454D70:
    ctx->pc = 0x7F454D70u;
    // 7F454D70: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F454D74:
    // 7F454D74: cmplwi  r5, 0x0000
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

label_7F454D78:
    // 7F454D78: bc    12, 2, 0x7F454D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454D9C;
        }
    }

label_7F454D7C:
    ctx->pc = 0x7F454D7Cu;
    ctx->downcount -= 8;
    // 7F454D7C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D80:
    ctx->pc = 0x7F454D80u;
    // 7F454D80: stb     r0, 116(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(116);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F454D84:
    ctx->pc = 0x7F454D84u;
    // 7F454D84: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D88:
    ctx->pc = 0x7F454D88u;
    // 7F454D88: stb     r0, 117(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(117);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F454D8C:
    ctx->pc = 0x7F454D8Cu;
    // 7F454D8C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D90:
    ctx->pc = 0x7F454D90u;
    // 7F454D90: stb     r0, 118(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(118);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F454D94:
    ctx->pc = 0x7F454D94u;
    // 7F454D94: lwz     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454D98:
    ctx->pc = 0x7F454D98u;
    // 7F454D98: stb     r0, 119(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(119);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F454D9C:
    ctx->downcount -= 2;
    // 7F454D9C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F454DA0:
    // 7F454DA0: bc    16, 0, 0x7F454D6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454D6Cu;
                return;
            }
            goto label_7F454D6C;
        }
    }

label_7F454DA4:
    ctx->pc = 0x7F454DA4u;
    ctx->downcount -= 9;
    // 7F454DA4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DA8:
    ctx->pc = 0x7F454DA8u;
    // 7F454DA8: sth     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F454DAC:
    ctx->pc = 0x7F454DACu;
    // 7F454DAC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DB0:
    ctx->pc = 0x7F454DB0u;
    // 7F454DB0: sth     r0, 102(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(102);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F454DB4:
    ctx->pc = 0x7F454DB4u;
    // 7F454DB4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DB8:
    ctx->pc = 0x7F454DB8u;
    // 7F454DB8: sth     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F454DBC:
    ctx->pc = 0x7F454DBCu;
    // 7F454DBC: lwz     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DC0:
    ctx->pc = 0x7F454DC0u;
    // 7F454DC0: sth     r0, 106(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F454DC4:
    ctx->pc = 0x7F454DC4u;
    // 7F454DC4: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454DC8:
    ctx->pc = 0x7F454DC8u;
    ctx->downcount -= 3;
    // 7F454DC8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DCC:
    ctx->pc = 0x7F454DCCu;
    // 7F454DCC: cmpwi   r0, 0
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

label_7F454DD0:
    ctx->pc = 0x7F454DD0u;
    // 7F454DD0: bc    4, 0, 0x7F454DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454DE0;
        }
    }

label_7F454DD4:
    ctx->pc = 0x7F454DD4u;
    ctx->downcount -= 3;
    // 7F454DD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F454DD8:
    ctx->pc = 0x7F454DD8u;
    // 7F454DD8: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454DDC:
    ctx->pc = 0x7F454DDCu;
    // 7F454DDC: b       0x7F454DF0
    {
            goto label_7F454DF0;
    }

label_7F454DE0:
    ctx->pc = 0x7F454DE0u;
    ctx->downcount -= 2;
    // 7F454DE0: cmpwi   r0, 90
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

label_7F454DE4:
    ctx->pc = 0x7F454DE4u;
    // 7F454DE4: bc    4, 1, 0x7F454DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454DF0;
        }
    }

label_7F454DE8:
    ctx->pc = 0x7F454DE8u;
    ctx->downcount -= 2;
    // 7F454DE8: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F454DEC:
    ctx->pc = 0x7F454DECu;
    // 7F454DEC: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454DF0:
    ctx->pc = 0x7F454DF0u;
    ctx->downcount -= 3;
    // 7F454DF0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454DF4:
    ctx->pc = 0x7F454DF4u;
    // 7F454DF4: cmpwi   r0, 0
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

label_7F454DF8:
    ctx->pc = 0x7F454DF8u;
    // 7F454DF8: bc    4, 2, 0x7F454E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454E0C;
        }
    }

label_7F454DFC:
    ctx->pc = 0x7F454DFCu;
    ctx->downcount -= 4;
    // 7F454DFC: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454E00:
    ctx->pc = 0x7F454E00u;
    // 7F454E00: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F454E04:
    ctx->pc = 0x7F454E04u;
    // 7F454E04: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454E08:
    ctx->pc = 0x7F454E08u;
    // 7F454E08: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454E0C:
    ctx->pc = 0x7F454E0Cu;
    ctx->downcount -= 36;
    // 7F454E0C: lwz     r4, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454E10:
    ctx->pc = 0x7F454E10u;
    // 7F454E10: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F454E14:
    ctx->pc = 0x7F454E14u;
    // 7F454E14: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F454E18:
    ctx->pc = 0x7F454E18u;
    // 7F454E18: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F454E1C:
    ctx->pc = 0x7F454E1Cu;
    // 7F454E1C: ori     r8, r4, 0x0002
    ctx->gpr[8] = ctx->gpr[4] | 0x0002u;

label_7F454E20:
    ctx->pc = 0x7F454E20u;
    // 7F454E20: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454E24:
    ctx->pc = 0x7F454E24u;
    // 7F454E24: stw     r8, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F454E28:
    ctx->pc = 0x7F454E28u;
    // 7F454E28: lfd     f2, -7512(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F454E28u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454E2C:
    ctx->pc = 0x7F454E2Cu;
    // 7F454E2C: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454E30:
    ctx->pc = 0x7F454E30u;
    // 7F454E30: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454E34:
    ctx->pc = 0x7F454E34u;
    // 7F454E34: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F454E38:
    ctx->pc = 0x7F454E38u;
    // 7F454E38: lfs     f3, -7516(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F454E38u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F454E3C:
    ctx->pc = 0x7F454E3Cu;
    // 7F454E3C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454E40:
    ctx->pc = 0x7F454E40u;
    // 7F454E40: lfs     f0, -7428(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454E40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454E44:
    ctx->pc = 0x7F454E44u;
    // 7F454E44: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454E48:
    ctx->pc = 0x7F454E48u;
    // 7F454E48: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F454E48u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F454E4C:
    ctx->pc = 0x7F454E4Cu;
    // 7F454E4C: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F454E4Cu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F454E50:
    ctx->pc = 0x7F454E50u;
    // 7F454E50: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454E50u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F454E54:
    ctx->pc = 0x7F454E54u;
    // 7F454E54: stfs     f0, 96(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454E54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454E58:
    ctx->pc = 0x7F454E58u;
    // 7F454E58: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454E5C:
    ctx->pc = 0x7F454E5Cu;
    ctx->downcount -= 4;
    // 7F454E5C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454E60:
    ctx->pc = 0x7F454E60u;
    // 7F454E60: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F454E64:
    ctx->pc = 0x7F454E64u;
    // 7F454E64: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F454E68:
    ctx->pc = 0x7F454E68u;
    // 7F454E68: bl      0x7F453AFC
    {
            ctx->lr = 0x7F454E6Cu;
            ctx->pc = 0x7F453AFCu;
            return;
    }

label_7F454E6C:
    ctx->pc = 0x7F454E6Cu;
    ctx->downcount -= 1;
    // 7F454E6C: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454E70:
    ctx->pc = 0x7F454E70u;
    ctx->downcount -= 2;
    // 7F454E70: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454E74:
    ctx->pc = 0x7F454E74u;
    // 7F454E74: bl      0x7F454134
    {
            ctx->lr = 0x7F454E78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454134u;
                return;
            }
            goto label_7F454134;
    }

label_7F454E78:
    ctx->pc = 0x7F454E78u;
    ctx->downcount -= 1;
    // 7F454E78: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454E7C:
    ctx->pc = 0x7F454E7Cu;
    ctx->downcount -= 2;
    // 7F454E7C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454E80:
    ctx->pc = 0x7F454E80u;
    // 7F454E80: bl      0x7F454170
    {
            ctx->lr = 0x7F454E84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454170u;
                return;
            }
            goto label_7F454170;
    }

label_7F454E84:
    ctx->pc = 0x7F454E84u;
    ctx->downcount -= 1;
    // 7F454E84: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454E88:
    ctx->pc = 0x7F454E88u;
    ctx->downcount -= 24;
    // 7F454E88: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454E8C:
    ctx->pc = 0x7F454E8Cu;
    // 7F454E8C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F454E90:
    ctx->pc = 0x7F454E90u;
    // 7F454E90: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F454E94:
    ctx->pc = 0x7F454E94u;
    // 7F454E94: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F454E98:
    ctx->pc = 0x7F454E98u;
    // 7F454E98: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F454E9C:
    ctx->pc = 0x7F454E9Cu;
    // 7F454E9C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454EA0:
    ctx->pc = 0x7F454EA0u;
    // 7F454EA0: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F454EA4:
    ctx->pc = 0x7F454EA4u;
    // 7F454EA4: lfd     f2, -7512(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F454EA4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454EA8:
    ctx->pc = 0x7F454EA8u;
    // 7F454EA8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454EAC:
    ctx->pc = 0x7F454EACu;
    // 7F454EAC: lfs     f3, -7424(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F454EACu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-7424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F454EB0:
    ctx->pc = 0x7F454EB0u;
    // 7F454EB0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454EB4:
    ctx->pc = 0x7F454EB4u;
    // 7F454EB4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454EB8:
    ctx->pc = 0x7F454EB8u;
    // 7F454EB8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F454EB8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F454EBC:
    ctx->pc = 0x7F454EBCu;
    // 7F454EBC: lfs     f1, -7420(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454EBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454EC0:
    ctx->pc = 0x7F454EC0u;
    // 7F454EC0: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454EC0u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F454EC4:
    ctx->pc = 0x7F454EC4u;
    // 7F454EC4: stfs     f0, 428(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454EC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(428);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454EC8:
    ctx->pc = 0x7F454EC8u;
    // 7F454EC8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454ECC:
    ctx->pc = 0x7F454ECCu;
    // 7F454ECC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F454ED0:
    ctx->pc = 0x7F454ED0u;
    // 7F454ED0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454ED4:
    ctx->pc = 0x7F454ED4u;
    // 7F454ED4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F454ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F454ED8:
    ctx->pc = 0x7F454ED8u;
    // 7F454ED8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F454ED8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F454EDC:
    ctx->pc = 0x7F454EDCu;
    // 7F454EDC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F454EDCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F454EE0:
    ctx->pc = 0x7F454EE0u;
    // 7F454EE0: stfs     f0, 432(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454EE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454EE4:
    ctx->pc = 0x7F454EE4u;
    // 7F454EE4: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454EE8:
    ctx->pc = 0x7F454EE8u;
    ctx->downcount -= 9;
    // 7F454EE8: lwz     r4, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454EEC:
    ctx->pc = 0x7F454EECu;
    // 7F454EEC: lwz     r0, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454EF0:
    ctx->pc = 0x7F454EF0u;
    // 7F454EF0: stw     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F454EF4:
    ctx->pc = 0x7F454EF4u;
    // 7F454EF4: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454EF8:
    ctx->pc = 0x7F454EF8u;
    // 7F454EF8: lwz     r4, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F454EFC:
    ctx->pc = 0x7F454EFCu;
    // 7F454EFC: lwz     r0, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454F00:
    ctx->pc = 0x7F454F00u;
    // 7F454F00: stw     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F454F04:
    ctx->pc = 0x7F454F04u;
    // 7F454F04: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454F08:
    ctx->pc = 0x7F454F08u;
    // 7F454F08: b       0x7F454F18
    {
            goto label_7F454F18;
    }

label_7F454F0C:
    ctx->pc = 0x7F454F0Cu;
    ctx->downcount -= 2;
    // 7F454F0C: or   r5, r6, r6
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F454F10:
    ctx->pc = 0x7F454F10u;
    // 7F454F10: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F454F14u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F454F14:
    ctx->pc = 0x7F454F14u;
    ctx->downcount -= 1;
    // 7F454F14: b       0x7F454F1C
    {
            goto label_7F454F1C;
    }

label_7F454F18:
    ctx->pc = 0x7F454F18u;
    ctx->downcount -= 1;
    // 7F454F18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F454F1C:
    ctx->pc = 0x7F454F1Cu;
    ctx->downcount -= 5;
    // 7F454F1C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454F20:
    ctx->pc = 0x7F454F20u;
    // 7F454F20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F454F24:
    ctx->pc = 0x7F454F24u;
    // 7F454F24: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F454F28:
    ctx->pc = 0x7F454F28u;
    // 7F454F28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F454F2C:
    ctx->pc = 0x7F454F2Cu;
    ctx->downcount -= 10;
    // 7F454F2C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F454F30:
    ctx->pc = 0x7F454F30u;
    // 7F454F30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F454F34:
    ctx->pc = 0x7F454F34u;
    // 7F454F34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F454F38:
    ctx->pc = 0x7F454F38u;
    // 7F454F38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454F3C:
    ctx->pc = 0x7F454F3Cu;
    // 7F454F3C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F454F40:
    ctx->pc = 0x7F454F40u;
    // 7F454F40: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F454F44:
    ctx->pc = 0x7F454F44u;
    // 7F454F44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F454F48:
    ctx->pc = 0x7F454F48u;
    // 7F454F48: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F454F4C:
    ctx->pc = 0x7F454F4Cu;
    // 7F454F4C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F454F50:
    loop_7F454F50(ctx);
    if (ctx->pc == 0x7F454F60u) goto label_7F454F60;
    return;
label_7F454F54:
    // 7F454F54: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F454F58:
    ctx->pc = 0x7F454F58u;
    // 7F454F58: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454F5C:
    // 7F454F5C: bc    16, 0, 0x7F454F50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454F50u;
                return;
            }
            goto label_7F454F50;
        }
    }

label_7F454F60:
    ctx->pc = 0x7F454F60u;
    ctx->downcount -= 8;
    // 7F454F60: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454F64:
    ctx->pc = 0x7F454F64u;
    // 7F454F64: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F454F68:
    ctx->pc = 0x7F454F68u;
    // 7F454F68: lfs     f0, -7416(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454F68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454F6C:
    ctx->pc = 0x7F454F6Cu;
    // 7F454F6C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F454F70:
    ctx->pc = 0x7F454F70u;
    // 7F454F70: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454F74:
    ctx->pc = 0x7F454F74u;
    // 7F454F74: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F454F78:
    ctx->pc = 0x7F454F78u;
    // 7F454F78: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F454F78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F454F7C:
    ctx->pc = 0x7F454F7Cu;
    // 7F454F7C: bl      0x7F3C8470
    {
            ctx->lr = 0x7F454F80u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F454F80:
    ctx->pc = 0x7F454F80u;
    ctx->downcount -= 1;
    // 7F454F80: bl      0x7F3C8480
    {
            ctx->lr = 0x7F454F84u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F454F84:
    ctx->pc = 0x7F454F84u;
    ctx->downcount -= 4;
    // 7F454F84: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F454F88:
    ctx->pc = 0x7F454F88u;
    // 7F454F88: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F454F8C:
    ctx->pc = 0x7F454F8Cu;
    // 7F454F8C: cmplwi  r3, 0x0000
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

label_7F454F90:
    ctx->pc = 0x7F454F90u;
    // 7F454F90: bc    4, 2, 0x7F454F9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F454F9C;
        }
    }

label_7F454F94:
    ctx->pc = 0x7F454F94u;
    ctx->downcount -= 2;
    // 7F454F94: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F454F98:
    ctx->pc = 0x7F454F98u;
    // 7F454F98: b       0x7F455004
    {
            goto label_7F455004;
    }

label_7F454F9C:
    ctx->pc = 0x7F454F9Cu;
    ctx->downcount -= 3;
    // 7F454F9C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454FA0:
    ctx->pc = 0x7F454FA0u;
    // 7F454FA0: cmplwi  r0, 0x0000
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

label_7F454FA4:
    ctx->pc = 0x7F454FA4u;
    // 7F454FA4: bc    12, 2, 0x7F454FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F454FB0;
        }
    }

label_7F454FA8:
    ctx->pc = 0x7F454FA8u;
    ctx->downcount -= 2;
    // 7F454FA8: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454FAC:
    ctx->pc = 0x7F454FACu;
    // 7F454FAC: b       0x7F454FB8
    {
            goto label_7F454FB8;
    }

label_7F454FB0:
    ctx->pc = 0x7F454FB0u;
    ctx->downcount -= 2;
    // 7F454FB0: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F454FB4:
    ctx->pc = 0x7F454FB4u;
    // 7F454FB4: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F454FB8:
    ctx->pc = 0x7F454FB8u;
    ctx->downcount -= 10;
    // 7F454FB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F454FBC:
    ctx->pc = 0x7F454FBCu;
    // 7F454FBC: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F454FC0:
    ctx->pc = 0x7F454FC0u;
    // 7F454FC0: sth     r6, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F454FC4:
    ctx->pc = 0x7F454FC4u;
    // 7F454FC4: addi    r3, r31, 108
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(108);

label_7F454FC8:
    ctx->pc = 0x7F454FC8u;
    // 7F454FC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F454FCC:
    ctx->pc = 0x7F454FCCu;
    // 7F454FCC: li      r5, 320
    ctx->gpr[5] = (u32)(s32)(320);

label_7F454FD0:
    ctx->pc = 0x7F454FD0u;
    // 7F454FD0: sth     r6, 102(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(102);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F454FD4:
    ctx->pc = 0x7F454FD4u;
    // 7F454FD4: sth     r6, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F454FD8:
    ctx->pc = 0x7F454FD8u;
    // 7F454FD8: sth     r0, 106(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F454FDC:
    ctx->pc = 0x7F454FDCu;
    // 7F454FDC: bl      0x800050B4
    {
            ctx->lr = 0x7F454FE0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F454FE0:
    ctx->pc = 0x7F454FE0u;
    ctx->downcount -= 9;
    // 7F454FE0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F454FE4:
    ctx->pc = 0x7F454FE4u;
    // 7F454FE4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F454FE8:
    ctx->pc = 0x7F454FE8u;
    // 7F454FE8: lfs     f1, -7412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F454FE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F454FEC:
    ctx->pc = 0x7F454FECu;
    // 7F454FEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F454FF0:
    ctx->pc = 0x7F454FF0u;
    // 7F454FF0: lfs     f0, -7408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F454FF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F454FF4:
    ctx->pc = 0x7F454FF4u;
    // 7F454FF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F454FF8:
    ctx->pc = 0x7F454FF8u;
    // 7F454FF8: stfs     f1, 428(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F454FF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F454FFC:
    ctx->pc = 0x7F454FFCu;
    // 7F454FFC: stfs     f0, 432(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F454FFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455000:
    ctx->pc = 0x7F455000u;
    // 7F455000: stw     r0, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455004:
    ctx->pc = 0x7F455004u;
    ctx->downcount -= 6;
    // 7F455004: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455008:
    ctx->pc = 0x7F455008u;
    // 7F455008: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45500C:
    ctx->pc = 0x7F45500Cu;
    // 7F45500C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455010:
    ctx->pc = 0x7F455010u;
    // 7F455010: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F455014:
    ctx->pc = 0x7F455014u;
    // 7F455014: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455018:
    ctx->pc = 0x7F455018u;
    ctx->downcount -= 23;
    // 7F455018: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45501C:
    ctx->pc = 0x7F45501Cu;
    // 7F45501C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455020:
    ctx->pc = 0x7F455020u;
    // 7F455020: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455024:
    ctx->pc = 0x7F455024u;
    // 7F455024: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455028:
    ctx->pc = 0x7F455028u;
    // 7F455028: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45502C:
    ctx->pc = 0x7F45502Cu;
    // 7F45502C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F455030:
    ctx->pc = 0x7F455030u;
    // 7F455030: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455034:
    ctx->pc = 0x7F455034u;
    // 7F455034: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F455038:
    ctx->pc = 0x7F455038u;
    // 7F455038: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F45503C:
    ctx->pc = 0x7F45503Cu;
    // 7F45503C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F455040:
    ctx->pc = 0x7F455040u;
    // 7F455040: li      r5, 440
    ctx->gpr[5] = (u32)(s32)(440);

label_7F455044:
    ctx->pc = 0x7F455044u;
    // 7F455044: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F455048:
    ctx->pc = 0x7F455048u;
    // 7F455048: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F45504Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F45504C:
    ctx->pc = 0x7F45504Cu;
    ctx->downcount -= 2;
    // 7F45504C: or.   r31, r3, r3
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

label_7F455050:
    ctx->pc = 0x7F455050u;
    // 7F455050: bc    12, 2, 0x7F4550EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4550EC;
        }
    }

label_7F455054:
    ctx->pc = 0x7F455054u;
    ctx->downcount -= 15;
    // 7F455054: stw     r27, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F455058:
    ctx->pc = 0x7F455058u;
    // 7F455058: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F45505C:
    ctx->pc = 0x7F45505Cu;
    // 7F45505C: lis     r5, 32581
    ctx->gpr[5] = ((u32)(s32)(32581) << 16);

label_7F455060:
    ctx->pc = 0x7F455060u;
    // 7F455060: lwz     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455064:
    ctx->pc = 0x7F455064u;
    // 7F455064: addi    r4, r4, 16952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16952);

label_7F455068:
    ctx->pc = 0x7F455068u;
    // 7F455068: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45506C:
    ctx->pc = 0x7F45506Cu;
    // 7F45506C: addi    r5, r5, 19536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19536);

label_7F455070:
    ctx->pc = 0x7F455070u;
    // 7F455070: stw     r6, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455074:
    ctx->pc = 0x7F455074u;
    // 7F455074: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455078:
    ctx->pc = 0x7F455078u;
    // 7F455078: lwz     r6, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F45507C:
    ctx->pc = 0x7F45507Cu;
    // 7F45507C: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455080:
    ctx->pc = 0x7F455080u;
    // 7F455080: stw     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455084:
    ctx->pc = 0x7F455084u;
    // 7F455084: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455088:
    ctx->pc = 0x7F455088u;
    // 7F455088: stw     r30, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F45508C:
    ctx->pc = 0x7F45508Cu;
    // 7F45508C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F455090u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F455090:
    ctx->pc = 0x7F455090u;
    ctx->downcount -= 13;
    // 7F455090: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455094:
    ctx->pc = 0x7F455094u;
    // 7F455094: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F455098:
    ctx->pc = 0x7F455098u;
    // 7F455098: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F45509C:
    ctx->pc = 0x7F45509Cu;
    // 7F45509C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4550A0:
    ctx->pc = 0x7F4550A0u;
    // 7F4550A0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F4550A4:
    ctx->pc = 0x7F4550A4u;
    // 7F4550A4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F4550A8:
    ctx->pc = 0x7F4550A8u;
    // 7F4550A8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4550AC:
    ctx->pc = 0x7F4550ACu;
    // 7F4550AC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4550B0:
    ctx->pc = 0x7F4550B0u;
    // 7F4550B0: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F4550B4:
    ctx->pc = 0x7F4550B4u;
    // 7F4550B4: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F4550B8:
    ctx->pc = 0x7F4550B8u;
    // 7F4550B8: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F4550BC:
    ctx->pc = 0x7F4550BCu;
    // 7F4550BC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4550C0:
    ctx->pc = 0x7F4550C0u;
    // 7F4550C0: bl      0x7F454F2C
    {
            ctx->lr = 0x7F4550C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F454F2Cu;
                return;
            }
            goto label_7F454F2C;
    }

label_7F4550C4:
    ctx->pc = 0x7F4550C4u;
    ctx->downcount -= 2;
    // 7F4550C4: cmpwi   r3, 0
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

label_7F4550C8:
    ctx->pc = 0x7F4550C8u;
    // 7F4550C8: bc    4, 0, 0x7F4550DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4550DC;
        }
    }

label_7F4550CC:
    ctx->pc = 0x7F4550CCu;
    ctx->downcount -= 2;
    // 7F4550CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4550D0:
    ctx->pc = 0x7F4550D0u;
    // 7F4550D0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F4550D4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F4550D4:
    ctx->pc = 0x7F4550D4u;
    ctx->downcount -= 2;
    // 7F4550D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4550D8:
    ctx->pc = 0x7F4550D8u;
    // 7F4550D8: b       0x7F4550F0
    {
            goto label_7F4550F0;
    }

label_7F4550DC:
    ctx->pc = 0x7F4550DCu;
    ctx->downcount -= 4;
    // 7F4550DC: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F4550E0:
    ctx->pc = 0x7F4550E0u;
    // 7F4550E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4550E4:
    ctx->pc = 0x7F4550E4u;
    // 7F4550E4: addi    r4, r4, 19672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19672);

label_7F4550E8:
    ctx->pc = 0x7F4550E8u;
    // 7F4550E8: bl      0x7F3C8990
    {
            ctx->lr = 0x7F4550ECu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F4550EC:
    ctx->pc = 0x7F4550ECu;
    ctx->downcount -= 1;
    // 7F4550EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4550F0:
    ctx->pc = 0x7F4550F0u;
    ctx->downcount -= 16;
    // 7F4550F0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4550F4:
    ctx->pc = 0x7F4550F4u;
    // 7F4550F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4550F8:
    ctx->pc = 0x7F4550F8u;
    // 7F4550F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4550FC:
    ctx->pc = 0x7F4550FCu;
    // 7F4550FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F455100:
    ctx->pc = 0x7F455100u;
    // 7F455100: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455104:
    ctx->pc = 0x7F455104u;
    ctx->downcount -= 4;
    // 7F455104: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455108:
    ctx->pc = 0x7F455108u;
    // 7F455108: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45510C:
    ctx->pc = 0x7F45510Cu;
    // 7F45510C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455110:
    ctx->pc = 0x7F455110u;
    // 7F455110: bl      0x7F3C8210
    {
            ctx->lr = 0x7F455114u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F455114:
    ctx->pc = 0x7F455114u;
    ctx->downcount -= 5;
    // 7F455114: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455118:
    ctx->pc = 0x7F455118u;
    // 7F455118: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45511C:
    ctx->pc = 0x7F45511Cu;
    // 7F45511C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F455120:
    ctx->pc = 0x7F455120u;
    // 7F455120: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455124:
    ctx->pc = 0x7F455124u;
    ctx->downcount -= 5;
    // 7F455124: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455128:
    ctx->pc = 0x7F455128u;
    // 7F455128: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45512C:
    ctx->pc = 0x7F45512Cu;
    // 7F45512C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455130:
    ctx->pc = 0x7F455130u;
    // 7F455130: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455134:
    ctx->pc = 0x7F455134u;
    // 7F455134: bl      0x7F3C2440
    {
            ctx->lr = 0x7F455138u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F455138:
    ctx->pc = 0x7F455138u;
    ctx->downcount -= 5;
    // 7F455138: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45513C:
    ctx->pc = 0x7F45513Cu;
    // 7F45513C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455140:
    ctx->pc = 0x7F455140u;
    // 7F455140: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F455144:
    ctx->pc = 0x7F455144u;
    // 7F455144: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455148:
    ctx->pc = 0x7F455148u;
    ctx->downcount -= 23;
    // 7F455148: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45514C:
    ctx->pc = 0x7F45514Cu;
    // 7F45514C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455150:
    ctx->pc = 0x7F455150u;
    // 7F455150: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455154:
    ctx->pc = 0x7F455154u;
    // 7F455154: stfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455158:
    ctx->pc = 0x7F455158u;
    // 7F455158: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F455158u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F45515C:
    ctx->pc = 0x7F45515Cu;
    // 7F45515C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45515Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F455160:
    ctx->pc = 0x7F455160u;
    // 7F455160: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455160u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F455164:
    ctx->pc = 0x7F455164u;
    // 7F455164: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455168:
    ctx->pc = 0x7F455168u;
    // 7F455168: or.   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F45516C:
    ctx->pc = 0x7F45516Cu;
    // 7F45516C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455170:
    ctx->pc = 0x7F455170u;
    // 7F455170: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455174:
    ctx->pc = 0x7F455174u;
    // 7F455174: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F455178:
    ctx->pc = 0x7F455178u;
    // 7F455178: bc    4, 2, 0x7F45518C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45518C;
        }
    }

label_7F45517C:
    ctx->pc = 0x7F45517Cu;
    ctx->downcount -= 2;
    // 7F45517C: cmplwi  r28, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F455180:
    ctx->pc = 0x7F455180u;
    // 7F455180: bc    4, 2, 0x7F45518C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45518C;
        }
    }

label_7F455184:
    ctx->pc = 0x7F455184u;
    ctx->downcount -= 2;
    // 7F455184: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F455188:
    ctx->pc = 0x7F455188u;
    // 7F455188: b       0x7F4554BC
    {
            goto label_7F4554BC;
    }

label_7F45518C:
    ctx->pc = 0x7F45518Cu;
    ctx->downcount -= 2;
    // 7F45518C: cmplwi  r30, 0x0000
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

label_7F455190:
    ctx->pc = 0x7F455190u;
    // 7F455190: bc    12, 2, 0x7F4551B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4551B8;
        }
    }

label_7F455194:
    ctx->pc = 0x7F455194u;
    ctx->downcount -= 6;
    // 7F455194: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F455198:
    ctx->pc = 0x7F455198u;
    // 7F455198: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F45519C:
    ctx->pc = 0x7F45519Cu;
    // 7F45519C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F4551A0:
    ctx->pc = 0x7F4551A0u;
    // 7F4551A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F4551A4:
    ctx->pc = 0x7F4551A4u;
    // 7F4551A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4551A8:
    ctx->pc = 0x7F4551A8u;
    // 7F4551A8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F4551ACu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F4551AC:
    ctx->pc = 0x7F4551ACu;
    ctx->downcount -= 3;
    // 7F4551AC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4551B0:
    ctx->pc = 0x7F4551B0u;
    // 7F4551B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4551B4:
    ctx->pc = 0x7F4551B4u;
    // 7F4551B4: b       0x7F4551EC
    {
            goto label_7F4551EC;
    }

label_7F4551B8:
    ctx->pc = 0x7F4551B8u;
    ctx->downcount -= 2;
    // 7F4551B8: cmplwi  r28, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4551BC:
    ctx->pc = 0x7F4551BCu;
    // 7F4551BC: bc    12, 2, 0x7F4551E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4551E4;
        }
    }

label_7F4551C0:
    ctx->pc = 0x7F4551C0u;
    ctx->downcount -= 6;
    // 7F4551C0: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F4551C4:
    ctx->pc = 0x7F4551C4u;
    // 7F4551C4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4551C8:
    ctx->pc = 0x7F4551C8u;
    // 7F4551C8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F4551CC:
    ctx->pc = 0x7F4551CCu;
    // 7F4551CC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F4551D0:
    ctx->pc = 0x7F4551D0u;
    // 7F4551D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4551D4:
    ctx->pc = 0x7F4551D4u;
    // 7F4551D4: bl      0x7F3C2408
    {
            ctx->lr = 0x7F4551D8u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F4551D8:
    ctx->pc = 0x7F4551D8u;
    ctx->downcount -= 3;
    // 7F4551D8: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4551DC:
    ctx->pc = 0x7F4551DCu;
    // 7F4551DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4551E0:
    ctx->pc = 0x7F4551E0u;
    // 7F4551E0: b       0x7F4551EC
    {
            goto label_7F4551EC;
    }

label_7F4551E4:
    ctx->pc = 0x7F4551E4u;
    ctx->downcount -= 2;
    // 7F4551E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4551E8:
    ctx->pc = 0x7F4551E8u;
    // 7F4551E8: b       0x7F4554BC
    {
            goto label_7F4554BC;
    }

label_7F4551EC:
    ctx->pc = 0x7F4551ECu;
    ctx->downcount -= 2;
    // 7F4551EC: cmplwi  r31, 0x0000
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

label_7F4551F0:
    ctx->pc = 0x7F4551F0u;
    // 7F4551F0: bc    4, 2, 0x7F4551FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4551FC;
        }
    }

label_7F4551F4:
    ctx->pc = 0x7F4551F4u;
    ctx->downcount -= 2;
    // 7F4551F4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4551F8:
    ctx->pc = 0x7F4551F8u;
    // 7F4551F8: b       0x7F4554BC
    {
            goto label_7F4554BC;
    }

label_7F4551FC:
    ctx->pc = 0x7F4551FCu;
    ctx->downcount -= 20;
    // 7F4551FC: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4551FCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F455200:
    ctx->pc = 0x7F455200u;
    // 7F455200: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F455204:
    ctx->pc = 0x7F455204u;
    // 7F455204: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F455208:
    ctx->pc = 0x7F455208u;
    // 7F455208: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45520C:
    ctx->pc = 0x7F45520Cu;
    // 7F45520C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F455210:
    ctx->pc = 0x7F455210u;
    // 7F455210: cmplwi  r30, 0x0000
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

label_7F455214:
    ctx->pc = 0x7F455214u;
    // 7F455214: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F455218:
    ctx->pc = 0x7F455218u;
    // 7F455218: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F45521C:
    ctx->pc = 0x7F45521Cu;
    // 7F45521C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455220:
    ctx->pc = 0x7F455220u;
    // 7F455220: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455224:
    ctx->pc = 0x7F455224u;
    // 7F455224: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455228:
    ctx->pc = 0x7F455228u;
    // 7F455228: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45522C:
    ctx->pc = 0x7F45522Cu;
    // 7F45522C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455230:
    ctx->pc = 0x7F455230u;
    // 7F455230: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455234:
    ctx->pc = 0x7F455234u;
    // 7F455234: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455238:
    ctx->pc = 0x7F455238u;
    // 7F455238: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45523C:
    ctx->pc = 0x7F45523Cu;
    // 7F45523C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F455240:
    ctx->pc = 0x7F455240u;
    // 7F455240: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F455244:
    ctx->pc = 0x7F455244u;
    // 7F455244: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455248:
    ctx->pc = 0x7F455248u;
    // 7F455248: bc    12, 2, 0x7F4552E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4552E4;
        }
    }

label_7F45524C:
    ctx->pc = 0x7F45524Cu;
    ctx->downcount -= 33;
    // 7F45524C: lwz     r9, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F455250:
    ctx->pc = 0x7F455250u;
    // 7F455250: fctiwz    f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F455250u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[30], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F455254:
    ctx->pc = 0x7F455254u;
    // 7F455254: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455258:
    ctx->pc = 0x7F455258u;
    // 7F455258: rlwinm r6, r29, 24, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[29], 24u) & 0x000000FFu;
    }

label_7F45525C:
    ctx->pc = 0x7F45525Cu;
    // 7F45525C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455260:
    ctx->pc = 0x7F455260u;
    // 7F455260: rlwinm r4, r29, 16, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 16u) & 0x000000FFu;
    }

label_7F455264:
    ctx->pc = 0x7F455264u;
    // 7F455264: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F455268:
    ctx->pc = 0x7F455268u;
    // 7F455268: rlwinm r0, r29, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 8u) & 0x000000FFu;
    }

label_7F45526C:
    ctx->pc = 0x7F45526Cu;
    // 7F45526C: stw     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455270:
    ctx->pc = 0x7F455270u;
    // 7F455270: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F455274:
    ctx->pc = 0x7F455274u;
    // 7F455274: lwz     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F455278:
    ctx->pc = 0x7F455278u;
    // 7F455278: stw     r3, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45527C:
    ctx->pc = 0x7F45527Cu;
    // 7F45527C: lwz     r7, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F455280:
    ctx->pc = 0x7F455280u;
    // 7F455280: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455284:
    ctx->pc = 0x7F455284u;
    // 7F455284: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455284u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F455288:
    ctx->pc = 0x7F455288u;
    // 7F455288: stw     r7, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45528C:
    ctx->pc = 0x7F45528Cu;
    // 7F45528C: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F455290:
    ctx->pc = 0x7F455290u;
    // 7F455290: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F455294:
    ctx->pc = 0x7F455294u;
    // 7F455294: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455298:
    ctx->pc = 0x7F455298u;
    // 7F455298: sth     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F45529C:
    ctx->pc = 0x7F45529Cu;
    // 7F45529C: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552A0:
    ctx->pc = 0x7F4552A0u;
    // 7F4552A0: sth     r7, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F4552A4:
    ctx->pc = 0x7F4552A4u;
    // 7F4552A4: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552A8:
    ctx->pc = 0x7F4552A8u;
    // 7F4552A8: stb     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F4552AC:
    ctx->pc = 0x7F4552ACu;
    // 7F4552AC: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552B0:
    ctx->pc = 0x7F4552B0u;
    // 7F4552B0: stb     r6, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F4552B4:
    ctx->pc = 0x7F4552B4u;
    // 7F4552B4: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552B8:
    ctx->pc = 0x7F4552B8u;
    // 7F4552B8: stb     r4, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F4552BC:
    ctx->pc = 0x7F4552BCu;
    // 7F4552BC: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552C0:
    ctx->pc = 0x7F4552C0u;
    // 7F4552C0: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4552C4:
    ctx->pc = 0x7F4552C4u;
    // 7F4552C4: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552C8:
    ctx->pc = 0x7F4552C8u;
    // 7F4552C8: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4552CC:
    ctx->pc = 0x7F4552CCu;
    // 7F4552CC: bl      0x8000519C
    {
            ctx->lr = 0x7F4552D0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4552D0:
    ctx->pc = 0x7F4552D0u;
    ctx->downcount -= 4;
    // 7F4552D0: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4552D4:
    ctx->pc = 0x7F4552D4u;
    // 7F4552D4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F4552D8:
    ctx->pc = 0x7F4552D8u;
    // 7F4552D8: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4552DC:
    ctx->pc = 0x7F4552DCu;
    // 7F4552DC: bl      0x8000519C
    {
            ctx->lr = 0x7F4552E0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4552E0:
    ctx->pc = 0x7F4552E0u;
    ctx->downcount -= 1;
    // 7F4552E0: b       0x7F4554B8
    {
            goto label_7F4554B8;
    }

label_7F4552E4:
    ctx->pc = 0x7F4552E4u;
    ctx->downcount -= 2;
    // 7F4552E4: cmplwi  r28, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4552E8:
    ctx->pc = 0x7F4552E8u;
    // 7F4552E8: bc    12, 2, 0x7F4554B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4554B8;
        }
    }

label_7F4552EC:
    ctx->pc = 0x7F4552ECu;
    ctx->downcount -= 14;
    // 7F4552EC: lwz     r30, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F4552F0:
    ctx->pc = 0x7F4552F0u;
    // 7F4552F0: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F4552F0u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F4552F4:
    ctx->pc = 0x7F4552F4u;
    // 7F4552F4: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F4552F8:
    ctx->pc = 0x7F4552F8u;
    // 7F4552F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4552FC:
    ctx->pc = 0x7F4552FCu;
    // 7F4552FC: lwz     r5, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455300:
    ctx->pc = 0x7F455300u;
    // 7F455300: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455304:
    ctx->pc = 0x7F455304u;
    // 7F455304: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455308:
    ctx->pc = 0x7F455308u;
    // 7F455308: stw     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45530C:
    ctx->pc = 0x7F45530Cu;
    // 7F45530C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455310:
    ctx->pc = 0x7F455310u;
    // 7F455310: lwz     r5, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455314:
    ctx->pc = 0x7F455314u;
    // 7F455314: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455318:
    ctx->pc = 0x7F455318u;
    // 7F455318: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45531C:
    ctx->pc = 0x7F45531Cu;
    // 7F45531C: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455320:
    ctx->pc = 0x7F455320u;
    // 7F455320: bl      0x800261FC
    {
            ctx->lr = 0x7F455324u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F455324:
    ctx->pc = 0x7F455324u;
    ctx->downcount -= 4;
    // 7F455324: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F455328:
    ctx->pc = 0x7F455328u;
    // 7F455328: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F45532C:
    ctx->pc = 0x7F45532Cu;
    // 7F45532C: addi    r5, r30, 16
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16);

label_7F455330:
    ctx->pc = 0x7F455330u;
    // 7F455330: bl      0x800261B4
    {
            ctx->lr = 0x7F455334u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455334:
    ctx->pc = 0x7F455334u;
    ctx->downcount -= 31;
    // 7F455334: li      r8, 4096
    ctx->gpr[8] = (u32)(s32)(4096);

label_7F455338:
    ctx->pc = 0x7F455338u;
    // 7F455338: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F45533C:
    ctx->pc = 0x7F45533Cu;
    // 7F45533C: sth     r8, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F455340:
    ctx->pc = 0x7F455340u;
    // 7F455340: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F455344:
    ctx->pc = 0x7F455344u;
    // 7F455344: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F455348:
    ctx->pc = 0x7F455348u;
    // 7F455348: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45534C:
    ctx->pc = 0x7F45534Cu;
    // 7F45534C: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F455350:
    ctx->pc = 0x7F455350u;
    // 7F455350: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F455354:
    ctx->pc = 0x7F455354u;
    // 7F455354: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F455358:
    ctx->pc = 0x7F455358u;
    // 7F455358: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F455358u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F45535C:
    ctx->pc = 0x7F45535Cu;
    // 7F45535C: stb     r7, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F455360:
    ctx->pc = 0x7F455360u;
    // 7F455360: addi    r3, r28, 16
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(16);

label_7F455364:
    ctx->pc = 0x7F455364u;
    // 7F455364: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455368:
    ctx->pc = 0x7F455368u;
    // 7F455368: stb     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45536C:
    ctx->pc = 0x7F45536Cu;
    // 7F45536C: stb     r6, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455370:
    ctx->pc = 0x7F455370u;
    // 7F455370: stb     r5, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F455374:
    ctx->pc = 0x7F455374u;
    // 7F455374: sth     r8, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F455378:
    ctx->pc = 0x7F455378u;
    // 7F455378: sth     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45537C:
    ctx->pc = 0x7F45537Cu;
    // 7F45537C: stb     r7, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F455380:
    ctx->pc = 0x7F455380u;
    // 7F455380: stb     r6, 13(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455384:
    ctx->pc = 0x7F455384u;
    // 7F455384: stb     r6, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455388:
    ctx->pc = 0x7F455388u;
    // 7F455388: stb     r5, 15(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F45538C:
    ctx->pc = 0x7F45538Cu;
    // 7F45538C: lwz     r5, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455390:
    ctx->pc = 0x7F455390u;
    // 7F455390: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455394:
    ctx->pc = 0x7F455394u;
    // 7F455394: stw     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455398:
    ctx->pc = 0x7F455398u;
    // 7F455398: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45539C:
    ctx->pc = 0x7F45539Cu;
    // 7F45539C: lwz     r5, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4553A0:
    ctx->pc = 0x7F4553A0u;
    // 7F4553A0: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4553A4:
    ctx->pc = 0x7F4553A4u;
    // 7F4553A4: stw     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F4553A8:
    ctx->pc = 0x7F4553A8u;
    // 7F4553A8: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4553AC:
    ctx->pc = 0x7F4553ACu;
    // 7F4553AC: bl      0x800261FC
    {
            ctx->lr = 0x7F4553B0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F4553B0:
    ctx->pc = 0x7F4553B0u;
    ctx->downcount -= 4;
    // 7F4553B0: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F4553B4:
    ctx->pc = 0x7F4553B4u;
    // 7F4553B4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4553B8:
    ctx->pc = 0x7F4553B8u;
    // 7F4553B8: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F4553BC:
    ctx->pc = 0x7F4553BCu;
    // 7F4553BC: bl      0x800261B4
    {
            ctx->lr = 0x7F4553C0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F4553C0:
    ctx->pc = 0x7F4553C0u;
    ctx->downcount -= 31;
    // 7F4553C0: li      r8, 4096
    ctx->gpr[8] = (u32)(s32)(4096);

label_7F4553C4:
    ctx->pc = 0x7F4553C4u;
    // 7F4553C4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F4553C8:
    ctx->pc = 0x7F4553C8u;
    // 7F4553C8: sth     r8, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F4553CC:
    ctx->pc = 0x7F4553CCu;
    // 7F4553CC: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F4553D0:
    ctx->pc = 0x7F4553D0u;
    // 7F4553D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4553D4:
    ctx->pc = 0x7F4553D4u;
    // 7F4553D4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F4553D8:
    ctx->pc = 0x7F4553D8u;
    // 7F4553D8: sth     r0, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4553DC:
    ctx->pc = 0x7F4553DCu;
    // 7F4553DC: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F4553E0:
    ctx->pc = 0x7F4553E0u;
    // 7F4553E0: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F4553E4:
    ctx->pc = 0x7F4553E4u;
    // 7F4553E4: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F4553E4u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F4553E8:
    ctx->pc = 0x7F4553E8u;
    // 7F4553E8: stb     r7, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F4553EC:
    ctx->pc = 0x7F4553ECu;
    // 7F4553EC: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F4553F0:
    ctx->pc = 0x7F4553F0u;
    // 7F4553F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4553F4:
    ctx->pc = 0x7F4553F4u;
    // 7F4553F4: stb     r6, 25(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F4553F8:
    ctx->pc = 0x7F4553F8u;
    // 7F4553F8: stb     r7, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F4553FC:
    ctx->pc = 0x7F4553FCu;
    // 7F4553FC: stb     r5, 27(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F455400:
    ctx->pc = 0x7F455400u;
    // 7F455400: sth     r8, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F455404:
    ctx->pc = 0x7F455404u;
    // 7F455404: sth     r0, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F455408:
    ctx->pc = 0x7F455408u;
    // 7F455408: stb     r7, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F45540C:
    ctx->pc = 0x7F45540Cu;
    // 7F45540C: stb     r6, 37(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455410:
    ctx->pc = 0x7F455410u;
    // 7F455410: stb     r7, 38(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F455414:
    ctx->pc = 0x7F455414u;
    // 7F455414: stb     r5, 39(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F455418:
    ctx->pc = 0x7F455418u;
    // 7F455418: lwz     r5, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45541C:
    ctx->pc = 0x7F45541Cu;
    // 7F45541C: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455420:
    ctx->pc = 0x7F455420u;
    // 7F455420: stw     r5, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455424:
    ctx->pc = 0x7F455424u;
    // 7F455424: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455428:
    ctx->pc = 0x7F455428u;
    // 7F455428: lwz     r5, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45542C:
    ctx->pc = 0x7F45542Cu;
    // 7F45542C: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455430:
    ctx->pc = 0x7F455430u;
    // 7F455430: stw     r5, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455434:
    ctx->pc = 0x7F455434u;
    // 7F455434: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455438:
    ctx->pc = 0x7F455438u;
    // 7F455438: bl      0x800261FC
    {
            ctx->lr = 0x7F45543Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F45543C:
    ctx->pc = 0x7F45543Cu;
    ctx->downcount -= 4;
    // 7F45543C: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F455440:
    ctx->pc = 0x7F455440u;
    // 7F455440: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455444:
    ctx->pc = 0x7F455444u;
    // 7F455444: addi    r5, r30, 80
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(80);

label_7F455448:
    ctx->pc = 0x7F455448u;
    // 7F455448: bl      0x800261B4
    {
            ctx->lr = 0x7F45544Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F45544C:
    ctx->pc = 0x7F45544Cu;
    ctx->downcount -= 23;
    // 7F45544C: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_7F455450:
    ctx->pc = 0x7F455450u;
    // 7F455450: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F455454:
    ctx->pc = 0x7F455454u;
    // 7F455454: sth     r7, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F455458:
    ctx->pc = 0x7F455458u;
    // 7F455458: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F45545C:
    ctx->pc = 0x7F45545Cu;
    // 7F45545C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F455460:
    ctx->pc = 0x7F455460u;
    // 7F455460: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F455464:
    ctx->pc = 0x7F455464u;
    // 7F455464: sth     r0, 58(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F455468:
    ctx->pc = 0x7F455468u;
    // 7F455468: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F45546C:
    ctx->pc = 0x7F45546Cu;
    // 7F45546C: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F455470:
    ctx->pc = 0x7F455470u;
    // 7F455470: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F455474:
    ctx->pc = 0x7F455474u;
    // 7F455474: stb     r6, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455478:
    ctx->pc = 0x7F455478u;
    // 7F455478: stb     r6, 49(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45547C:
    ctx->pc = 0x7F45547Cu;
    // 7F45547C: stb     r4, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F455480:
    ctx->pc = 0x7F455480u;
    // 7F455480: stb     r3, 51(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(51);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F455484:
    ctx->pc = 0x7F455484u;
    // 7F455484: sth     r7, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F455488:
    ctx->pc = 0x7F455488u;
    // 7F455488: sth     r0, 70(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45548C:
    ctx->pc = 0x7F45548Cu;
    // 7F45548C: stb     r6, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455490:
    ctx->pc = 0x7F455490u;
    // 7F455490: stb     r6, 61(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F455494:
    ctx->pc = 0x7F455494u;
    // 7F455494: stb     r4, 62(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F455498:
    ctx->pc = 0x7F455498u;
    // 7F455498: stb     r3, 63(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(63);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F45549C:
    ctx->pc = 0x7F45549Cu;
    // 7F45549C: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4554A0:
    ctx->pc = 0x7F4554A0u;
    // 7F4554A0: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4554A4:
    ctx->pc = 0x7F4554A4u;
    // 7F4554A4: bl      0x8000519C
    {
            ctx->lr = 0x7F4554A8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4554A8:
    ctx->pc = 0x7F4554A8u;
    ctx->downcount -= 4;
    // 7F4554A8: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4554AC:
    ctx->pc = 0x7F4554ACu;
    // 7F4554AC: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F4554B0:
    ctx->pc = 0x7F4554B0u;
    // 7F4554B0: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4554B4:
    ctx->pc = 0x7F4554B4u;
    // 7F4554B4: bl      0x8000519C
    {
            ctx->lr = 0x7F4554B8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4554B8:
    ctx->pc = 0x7F4554B8u;
    ctx->downcount -= 1;
    // 7F4554B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F4554BC:
    ctx->pc = 0x7F4554BCu;
    ctx->downcount -= 18;
    // 7F4554BC: lfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4554BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4554C0:
    ctx->pc = 0x7F4554C0u;
    // 7F4554C0: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4554C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4554C4:
    ctx->pc = 0x7F4554C4u;
    // 7F4554C4: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4554C8:
    ctx->pc = 0x7F4554C8u;
    // 7F4554C8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4554CC:
    ctx->pc = 0x7F4554CCu;
    // 7F4554CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4554D0:
    ctx->pc = 0x7F4554D0u;
    // 7F4554D0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F4554D4:
    ctx->pc = 0x7F4554D4u;
    // 7F4554D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4554D8:
    ctx->pc = 0x7F4554D8u;
    ctx->downcount -= 26;
    // 7F4554D8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4554DC:
    ctx->pc = 0x7F4554DCu;
    // 7F4554DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4554E0:
    ctx->pc = 0x7F4554E0u;
    // 7F4554E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4554E4:
    ctx->pc = 0x7F4554E4u;
    // 7F4554E4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4554E8:
    ctx->pc = 0x7F4554E8u;
    // 7F4554E8: stfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4554E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F4554EC:
    ctx->pc = 0x7F4554ECu;
    // 7F4554EC: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4554ECu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F4554F0:
    ctx->pc = 0x7F4554F0u;
    // 7F4554F0: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4554F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F4554F4:
    ctx->pc = 0x7F4554F4u;
    // 7F4554F4: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4554F4u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F4554F8:
    ctx->pc = 0x7F4554F8u;
    // 7F4554F8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4554FC:
    ctx->pc = 0x7F4554FCu;
    // 7F4554FC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455500:
    ctx->pc = 0x7F455500u;
    // 7F455500: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F455504:
    ctx->pc = 0x7F455504u;
    // 7F455504: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455508:
    ctx->pc = 0x7F455508u;
    // 7F455508: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F45550C:
    ctx->pc = 0x7F45550Cu;
    // 7F45550C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F455510:
    ctx->pc = 0x7F455510u;
    // 7F455510: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_7F455514:
    ctx->pc = 0x7F455514u;
    // 7F455514: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F455518u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F455518:
    ctx->pc = 0x7F455518u;
    ctx->downcount -= 2;
    // 7F455518: or.   r31, r3, r3
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

label_7F45551C:
    ctx->pc = 0x7F45551Cu;
    // 7F45551C: bc    12, 2, 0x7F455590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F455590;
        }
    }

label_7F455520:
    ctx->pc = 0x7F455520u;
    ctx->downcount -= 5;
    // 7F455520: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F455524:
    ctx->pc = 0x7F455524u;
    // 7F455524: lis     r5, 32581
    ctx->gpr[5] = ((u32)(s32)(32581) << 16);

label_7F455528:
    ctx->pc = 0x7F455528u;
    // 7F455528: addi    r4, r4, 20740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20740);

label_7F45552C:
    ctx->pc = 0x7F45552Cu;
    // 7F45552C: addi    r5, r5, 20772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20772);

label_7F455530:
    ctx->pc = 0x7F455530u;
    // 7F455530: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F455534u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F455534:
    ctx->pc = 0x7F455534u;
    ctx->downcount -= 17;
    // 7F455534: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455538:
    ctx->pc = 0x7F455538u;
    // 7F455538: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F45553C:
    ctx->pc = 0x7F45553Cu;
    // 7F45553C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F455540:
    ctx->pc = 0x7F455540u;
    // 7F455540: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F455540u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F455544:
    ctx->pc = 0x7F455544u;
    // 7F455544: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F455548:
    ctx->pc = 0x7F455548u;
    // 7F455548: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F455548u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F45554C:
    ctx->pc = 0x7F45554Cu;
    // 7F45554C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455550:
    ctx->pc = 0x7F455550u;
    // 7F455550: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F455554:
    ctx->pc = 0x7F455554u;
    // 7F455554: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455558:
    ctx->pc = 0x7F455558u;
    // 7F455558: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45555C:
    ctx->pc = 0x7F45555Cu;
    // 7F45555C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F455560:
    ctx->pc = 0x7F455560u;
    // 7F455560: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F455564:
    ctx->pc = 0x7F455564u;
    // 7F455564: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455568:
    ctx->pc = 0x7F455568u;
    // 7F455568: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45556C:
    ctx->pc = 0x7F45556Cu;
    // 7F45556C: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F455570:
    ctx->pc = 0x7F455570u;
    // 7F455570: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455574:
    ctx->pc = 0x7F455574u;
    // 7F455574: bl      0x7F455148
    {
            ctx->lr = 0x7F455578u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455148u;
                return;
            }
            goto label_7F455148;
    }

label_7F455578:
    ctx->pc = 0x7F455578u;
    ctx->downcount -= 2;
    // 7F455578: cmpwi   r3, 0
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

label_7F45557C:
    ctx->pc = 0x7F45557Cu;
    // 7F45557C: bc    4, 0, 0x7F455590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F455590;
        }
    }

label_7F455580:
    ctx->pc = 0x7F455580u;
    ctx->downcount -= 2;
    // 7F455580: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455584:
    ctx->pc = 0x7F455584u;
    // 7F455584: bl      0x7F3C8210
    {
            ctx->lr = 0x7F455588u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F455588:
    ctx->pc = 0x7F455588u;
    ctx->downcount -= 2;
    // 7F455588: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45558C:
    ctx->pc = 0x7F45558Cu;
    // 7F45558C: b       0x7F455594
    {
            goto label_7F455594;
    }

label_7F455590:
    ctx->pc = 0x7F455590u;
    ctx->downcount -= 1;
    // 7F455590: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455594:
    ctx->pc = 0x7F455594u;
    ctx->downcount -= 18;
    // 7F455594: lfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455598:
    ctx->pc = 0x7F455598u;
    // 7F455598: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45559C:
    ctx->pc = 0x7F45559Cu;
    // 7F45559C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4555A0:
    ctx->pc = 0x7F4555A0u;
    // 7F4555A0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4555A4:
    ctx->pc = 0x7F4555A4u;
    // 7F4555A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4555A8:
    ctx->pc = 0x7F4555A8u;
    // 7F4555A8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F4555AC:
    ctx->pc = 0x7F4555ACu;
    // 7F4555AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4555B0:
    ctx->pc = 0x7F4555B0u;
    ctx->downcount -= 17;
    // 7F4555B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4555B4:
    ctx->pc = 0x7F4555B4u;
    // 7F4555B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4555B8:
    ctx->pc = 0x7F4555B8u;
    // 7F4555B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4555BC:
    ctx->pc = 0x7F4555BCu;
    // 7F4555BC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4555C0:
    ctx->pc = 0x7F4555C0u;
    // 7F4555C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4555C4:
    ctx->pc = 0x7F4555C4u;
    // 7F4555C4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4555C8:
    ctx->pc = 0x7F4555C8u;
    // 7F4555C8: bl      0x7F4555FC
    {
            ctx->lr = 0x7F4555CCu;
            goto label_7F4555FC;
    }

label_7F4555CC:
    ctx->pc = 0x7F4555CCu;
    ctx->downcount -= 66;
    // 7F4555CC: subf   r4, r30, r31
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F4555D0:
    ctx->pc = 0x7F4555D0u;
    // 7F4555D0: rlwinm r5, r3, 24, 8, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x00FFFFFFu;
    }

label_7F4555D4:
    ctx->pc = 0x7F4555D4u;
    // 7F4555D4: addi    r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1);

label_7F4555D8:
    ctx->pc = 0x7F4555D8u;
    // 7F4555D8: divw   r0, r5, r3
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F4555DC:
    ctx->pc = 0x7F4555DCu;
    // 7F4555DC: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F4555E0:
    ctx->pc = 0x7F4555E0u;
    // 7F4555E0: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F4555E4:
    ctx->pc = 0x7F4555E4u;
    // 7F4555E4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4555E8:
    ctx->pc = 0x7F4555E8u;
    // 7F4555E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4555EC:
    ctx->pc = 0x7F4555ECu;
    // 7F4555EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4555F0:
    ctx->pc = 0x7F4555F0u;
    // 7F4555F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4555F4:
    ctx->pc = 0x7F4555F4u;
    // 7F4555F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4555F8:
    ctx->pc = 0x7F4555F8u;
    // 7F4555F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4555FC:
    ctx->pc = 0x7F4555FCu;
    ctx->downcount -= 13;
    // 7F4555FC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F455600:
    ctx->pc = 0x7F455600u;
    // 7F455600: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F455604:
    ctx->pc = 0x7F455604u;
    // 7F455604: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F455608:
    ctx->pc = 0x7F455608u;
    // 7F455608: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45560C:
    ctx->pc = 0x7F45560Cu;
    // 7F45560C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F455610:
    ctx->pc = 0x7F455610u;
    // 7F455610: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F455614:
    ctx->pc = 0x7F455614u;
    // 7F455614: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F455618:
    ctx->pc = 0x7F455618u;
    // 7F455618: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45561C:
    ctx->pc = 0x7F45561Cu;
    // 7F45561C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455620:
    ctx->pc = 0x7F455620u;
    ctx->downcount -= 20;
    // 7F455620: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455624:
    ctx->pc = 0x7F455624u;
    // 7F455624: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455628:
    ctx->pc = 0x7F455628u;
    // 7F455628: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45562C:
    ctx->pc = 0x7F45562Cu;
    // 7F45562C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45562Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455630:
    ctx->pc = 0x7F455630u;
    // 7F455630: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455630u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455630u);
        if (ctx->exception) return;
    }

label_7F455634:
    ctx->pc = 0x7F455634u;
    // 7F455634: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455638:
    ctx->pc = 0x7F455638u;
    // 7F455638: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455638u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F45563C:
    ctx->pc = 0x7F45563Cu;
    // 7F45563C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455640:
    ctx->pc = 0x7F455640u;
    // 7F455640: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F455644:
    ctx->pc = 0x7F455644u;
    // 7F455644: bl      0x7F4555FC
    {
            ctx->lr = 0x7F455648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555FCu;
                return;
            }
            goto label_7F4555FC;
    }

label_7F455648:
    ctx->pc = 0x7F455648u;
    ctx->downcount -= 77;
    // 7F455648: subf   r4, r30, r31
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F45564C:
    ctx->pc = 0x7F45564Cu;
    // 7F45564C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F455650:
    ctx->pc = 0x7F455650u;
    // 7F455650: rlwinm r5, r3, 24, 8, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x00FFFFFFu;
    }

label_7F455654:
    ctx->pc = 0x7F455654u;
    // 7F455654: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455658:
    ctx->pc = 0x7F455658u;
    // 7F455658: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F45565C:
    ctx->pc = 0x7F45565Cu;
    // 7F45565C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455660:
    ctx->pc = 0x7F455660u;
    // 7F455660: divw   r0, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F455664:
    ctx->pc = 0x7F455664u;
    // 7F455664: lfd     f1, -7392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455664u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7392);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455668:
    ctx->pc = 0x7F455668u;
    // 7F455668: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F45566C:
    ctx->pc = 0x7F45566Cu;
    // 7F45566C: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F455670:
    ctx->pc = 0x7F455670u;
    // 7F455670: add   r0, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F455674:
    ctx->pc = 0x7F455674u;
    // 7F455674: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F455678:
    ctx->pc = 0x7F455678u;
    // 7F455678: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45567C:
    ctx->pc = 0x7F45567Cu;
    // 7F45567C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45567Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455680:
    ctx->pc = 0x7F455680u;
    // 7F455680: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455680u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F455684:
    ctx->pc = 0x7F455684u;
    // 7F455684: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455684u)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F455688:
    ctx->pc = 0x7F455688u;
    // 7F455688: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F455688u);
        if (ctx->exception) return;
    }

label_7F45568C:
    ctx->pc = 0x7F45568Cu;
    // 7F45568C: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45568Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455690:
    ctx->pc = 0x7F455690u;
    // 7F455690: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F455694:
    ctx->pc = 0x7F455694u;
    // 7F455694: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455698:
    ctx->pc = 0x7F455698u;
    // 7F455698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45569C:
    ctx->pc = 0x7F45569Cu;
    // 7F45569C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F4556A0:
    ctx->pc = 0x7F4556A0u;
    // 7F4556A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4556A4:
    ctx->pc = 0x7F4556A4u;
    ctx->downcount -= 4;
    // 7F4556A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4556A8:
    ctx->pc = 0x7F4556A8u;
    // 7F4556A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4556AC:
    ctx->pc = 0x7F4556ACu;
    // 7F4556AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4556B0:
    ctx->pc = 0x7F4556B0u;
    // 7F4556B0: bl      0x80026098
    {
            ctx->lr = 0x7F4556B4u;
            ctx->pc = 0x80026098u;
            return;
    }

label_7F4556B4:
    ctx->pc = 0x7F4556B4u;
    ctx->downcount -= 5;
    // 7F4556B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4556B8:
    ctx->pc = 0x7F4556B8u;
    // 7F4556B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4556BC:
    ctx->pc = 0x7F4556BCu;
    // 7F4556BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4556C0:
    ctx->pc = 0x7F4556C0u;
    // 7F4556C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4556C4:
    ctx->pc = 0x7F4556C4u;
    ctx->downcount -= 5;
    // 7F4556C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4556C8:
    ctx->pc = 0x7F4556C8u;
    // 7F4556C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4556CC:
    ctx->pc = 0x7F4556CCu;
    // 7F4556CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4556D0:
    ctx->pc = 0x7F4556D0u;
    // 7F4556D0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4556D4:
    ctx->pc = 0x7F4556D4u;
    // 7F4556D4: bl      0x800261D8
    {
            ctx->lr = 0x7F4556D8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F4556D8:
    ctx->pc = 0x7F4556D8u;
    ctx->downcount -= 2;
    // 7F4556D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4556DC:
    ctx->pc = 0x7F4556DCu;
    // 7F4556DC: bl      0x7F4556A4
    {
            ctx->lr = 0x7F4556E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556A4u;
                return;
            }
            goto label_7F4556A4;
    }

label_7F4556E0:
    ctx->pc = 0x7F4556E0u;
    ctx->downcount -= 5;
    // 7F4556E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4556E4:
    ctx->pc = 0x7F4556E4u;
    // 7F4556E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4556E8:
    ctx->pc = 0x7F4556E8u;
    // 7F4556E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4556EC:
    ctx->pc = 0x7F4556ECu;
    // 7F4556EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4556F0:
    ctx->pc = 0x7F4556F0u;
    ctx->downcount -= 19;
    // 7F4556F0: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F4556F4:
    ctx->pc = 0x7F4556F4u;
    // 7F4556F4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4556F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4556F8:
    ctx->pc = 0x7F4556F8u;
    // 7F4556F8: lfs     f0, -7384(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4556F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4556FC:
    ctx->pc = 0x7F4556FCu;
    // 7F4556FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4556FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F455700:
    ctx->pc = 0x7F455700u;
    // 7F455700: fsubs   f4, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455700u)) return;
    ppc_fsubs(ctx, 4, 0, 1);

label_7F455704:
    ctx->pc = 0x7F455704u;
    // 7F455704: fmuls   f0, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F455704u)) return;
    ppc_fmuls(ctx, 0, 2, 4);

label_7F455708:
    ctx->pc = 0x7F455708u;
    // 7F455708: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455708u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F45570C:
    ctx->pc = 0x7F45570Cu;
    // 7F45570C: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45570Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455710:
    ctx->pc = 0x7F455710u;
    // 7F455710: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455710u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455714:
    ctx->pc = 0x7F455714u;
    // 7F455714: lfs     f2, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455714u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F455718:
    ctx->pc = 0x7F455718u;
    // 7F455718: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F455718u)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F45571C:
    ctx->pc = 0x7F45571Cu;
    // 7F45571C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45571Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F455720:
    ctx->pc = 0x7F455720u;
    // 7F455720: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455720u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455724:
    ctx->pc = 0x7F455724u;
    // 7F455724: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455724u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455728:
    ctx->pc = 0x7F455728u;
    // 7F455728: lfs     f2, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455728u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F45572C:
    ctx->pc = 0x7F45572Cu;
    // 7F45572C: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F45572Cu)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F455730:
    ctx->pc = 0x7F455730u;
    // 7F455730: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455730u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F455734:
    ctx->pc = 0x7F455734u;
    // 7F455734: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455734u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455738:
    ctx->pc = 0x7F455738u;
    // 7F455738: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F45573C:
    ctx->pc = 0x7F45573Cu;
    ctx->downcount -= 24;
    // 7F45573C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455740:
    ctx->pc = 0x7F455740u;
    // 7F455740: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455744:
    ctx->pc = 0x7F455744u;
    // 7F455744: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455748:
    ctx->pc = 0x7F455748u;
    // 7F455748: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F45574C:
    ctx->pc = 0x7F45574Cu;
    // 7F45574C: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45574Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F45574Cu);
        if (ctx->exception) return;
    }

label_7F455750:
    ctx->pc = 0x7F455750u;
    // 7F455750: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455754:
    ctx->pc = 0x7F455754u;
    // 7F455754: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455754u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F455758:
    ctx->pc = 0x7F455758u;
    // 7F455758: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45575C:
    ctx->pc = 0x7F45575Cu;
    // 7F45575C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455760:
    ctx->pc = 0x7F455760u;
    // 7F455760: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455764:
    ctx->pc = 0x7F455764u;
    // 7F455764: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F455768:
    ctx->pc = 0x7F455768u;
    // 7F455768: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F45576C:
    ctx->pc = 0x7F45576Cu;
    // 7F45576C: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F455770:
    ctx->pc = 0x7F455770u;
    // 7F455770: bl      0x800261D8
    {
            ctx->lr = 0x7F455774u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F455774:
    ctx->pc = 0x7F455774u;
    ctx->downcount -= 4;
    // 7F455774: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455778:
    ctx->pc = 0x7F455778u;
    // 7F455778: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45577C:
    ctx->pc = 0x7F45577Cu;
    // 7F45577C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455780:
    ctx->pc = 0x7F455780u;
    // 7F455780: bl      0x800261D8
    {
            ctx->lr = 0x7F455784u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F455784:
    ctx->pc = 0x7F455784u;
    ctx->downcount -= 4;
    // 7F455784: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F455788:
    ctx->pc = 0x7F455788u;
    // 7F455788: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F45578C:
    ctx->pc = 0x7F45578Cu;
    // 7F45578C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455790:
    ctx->pc = 0x7F455790u;
    // 7F455790: bl      0x7F1156FC
    {
            ctx->lr = 0x7F455794u;
            ctx->pc = 0x7F1156FCu;
            return;
    }

label_7F455794:
    ctx->pc = 0x7F455794u;
    ctx->downcount -= 10;
    // 7F455794: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455798:
    ctx->pc = 0x7F455798u;
    // 7F455798: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455798u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45579C:
    ctx->pc = 0x7F45579Cu;
    // 7F45579C: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45579Cu)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F4557A0:
    ctx->pc = 0x7F4557A0u;
    // 7F4557A0: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4557A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4557A4:
    ctx->pc = 0x7F4557A4u;
    // 7F4557A4: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4557A4u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_7F4557A8:
    ctx->pc = 0x7F4557A8u;
    // 7F4557A8: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4557A8u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_7F4557AC:
    ctx->pc = 0x7F4557ACu;
    // 7F4557AC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4557ACu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4557B0:
    ctx->pc = 0x7F4557B0u;
    // 7F4557B0: fadds   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4557B0u)) return;
    ppc_fadds(ctx, 1, 2, 0);

label_7F4557B4:
    ctx->pc = 0x7F4557B4u;
    // 7F4557B4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4557B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4557B8:
    ctx->pc = 0x7F4557B8u;
    // 7F4557B8: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F4557BCu;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F4557BC:
    ctx->pc = 0x7F4557BCu;
    ctx->downcount -= 23;
    // 7F4557BC: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4557BCu)) return;
    ppc_frsp(ctx, 0, 1);

label_7F4557C0:
    ctx->pc = 0x7F4557C0u;
    // 7F4557C0: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4557C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4557C4:
    ctx->pc = 0x7F4557C4u;
    // 7F4557C4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4557C8:
    ctx->pc = 0x7F4557C8u;
    // 7F4557C8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4557CC:
    ctx->pc = 0x7F4557CCu;
    // 7F4557CC: fdivs   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4557CCu)) return;
    ppc_fdivs(ctx, 1, 31, 0);

label_7F4557D0:
    ctx->pc = 0x7F4557D0u;
    // 7F4557D0: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4557D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4557D4:
    ctx->pc = 0x7F4557D4u;
    // 7F4557D4: bl      0x80026020
    {
            ctx->lr = 0x7F4557D8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F4557D8:
    ctx->pc = 0x7F4557D8u;
    ctx->downcount -= 21;
    // 7F4557D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4557DC:
    ctx->pc = 0x7F4557DCu;
    // 7F4557DC: lfs     f0, -7384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4557DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4557E0:
    ctx->pc = 0x7F4557E0u;
    // 7F4557E0: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F4557E0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4557E4:
    ctx->pc = 0x7F4557E4u;
    // 7F4557E4: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4557E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F4557E4u);
        if (ctx->exception) return;
    }

label_7F4557E8:
    ctx->pc = 0x7F4557E8u;
    // 7F4557E8: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4557E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4557EC:
    ctx->pc = 0x7F4557ECu;
    // 7F4557EC: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4557F0:
    ctx->pc = 0x7F4557F0u;
    // 7F4557F0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4557F4:
    ctx->pc = 0x7F4557F4u;
    // 7F4557F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4557F8:
    ctx->pc = 0x7F4557F8u;
    // 7F4557F8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F4557FC:
    ctx->pc = 0x7F4557FCu;
    // 7F4557FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455800:
    ctx->pc = 0x7F455800u;
    ctx->downcount -= 11;
    // 7F455800: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455804:
    ctx->pc = 0x7F455804u;
    // 7F455804: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455808:
    ctx->pc = 0x7F455808u;
    // 7F455808: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45580C:
    ctx->pc = 0x7F45580Cu;
    // 7F45580C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45580Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455810:
    ctx->pc = 0x7F455810u;
    // 7F455810: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455810u);
        if (ctx->exception) return;
    }

label_7F455814:
    ctx->pc = 0x7F455814u;
    // 7F455814: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F455818:
    ctx->pc = 0x7F455818u;
    // 7F455818: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F455818u);
        if (ctx->exception) return;
    }

label_7F45581C:
    ctx->pc = 0x7F45581Cu;
    // 7F45581C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F455820:
    ctx->pc = 0x7F455820u;
    // 7F455820: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455824:
    ctx->pc = 0x7F455824u;
    // 7F455824: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455824u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F455828:
    ctx->pc = 0x7F455828u;
    // 7F455828: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F45582Cu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F45582C:
    ctx->pc = 0x7F45582Cu;
    ctx->downcount -= 3;
    // 7F45582C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45582Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F455830:
    ctx->pc = 0x7F455830u;
    // 7F455830: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F455830u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F455834:
    ctx->pc = 0x7F455834u;
    // 7F455834: bl      0x7F008330
    {
            ctx->lr = 0x7F455838u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F455838:
    ctx->pc = 0x7F455838u;
    ctx->downcount -= 20;
    // 7F455838: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455838u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45583C:
    ctx->pc = 0x7F45583Cu;
    // 7F45583C: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F45583Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F455840:
    ctx->pc = 0x7F455840u;
    // 7F455840: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455840u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F455844:
    ctx->pc = 0x7F455844u;
    // 7F455844: fmsubs f0, f2, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455844u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[31], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F455848:
    ctx->pc = 0x7F455848u;
    // 7F455848: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455848u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45584C:
    ctx->pc = 0x7F45584Cu;
    // 7F45584C: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F45584Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455850:
    ctx->pc = 0x7F455850u;
    // 7F455850: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455850u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F455854:
    ctx->pc = 0x7F455854u;
    // 7F455854: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F455854u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F455858:
    ctx->pc = 0x7F455858u;
    // 7F455858: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455858u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F45585C:
    ctx->pc = 0x7F45585Cu;
    // 7F45585C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F45585Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455860:
    ctx->pc = 0x7F455860u;
    // 7F455860: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F455860u);
        if (ctx->exception) return;
    }

label_7F455864:
    ctx->pc = 0x7F455864u;
    // 7F455864: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455864u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455868:
    ctx->pc = 0x7F455868u;
    // 7F455868: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455868u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F455868u);
        if (ctx->exception) return;
    }

label_7F45586C:
    ctx->pc = 0x7F45586Cu;
    // 7F45586C: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45586Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455870:
    ctx->pc = 0x7F455870u;
    // 7F455870: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455874:
    ctx->pc = 0x7F455874u;
    // 7F455874: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F455878:
    ctx->pc = 0x7F455878u;
    // 7F455878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45587C:
    ctx->pc = 0x7F45587Cu;
    // 7F45587C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F455880:
    ctx->pc = 0x7F455880u;
    // 7F455880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455884:
    ctx->pc = 0x7F455884u;
    ctx->downcount -= 11;
    // 7F455884: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455888:
    ctx->pc = 0x7F455888u;
    // 7F455888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45588C:
    ctx->pc = 0x7F45588Cu;
    // 7F45588C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455890:
    ctx->pc = 0x7F455890u;
    // 7F455890: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455894:
    ctx->pc = 0x7F455894u;
    // 7F455894: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455894u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455894u);
        if (ctx->exception) return;
    }

label_7F455898:
    ctx->pc = 0x7F455898u;
    // 7F455898: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455898u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F45589C:
    ctx->pc = 0x7F45589Cu;
    // 7F45589C: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45589Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F45589Cu);
        if (ctx->exception) return;
    }

label_7F4558A0:
    ctx->pc = 0x7F4558A0u;
    // 7F4558A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4558A4:
    ctx->pc = 0x7F4558A4u;
    // 7F4558A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4558A8:
    ctx->pc = 0x7F4558A8u;
    // 7F4558A8: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4558A8u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F4558AC:
    ctx->pc = 0x7F4558ACu;
    // 7F4558AC: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F4558B0u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F4558B0:
    ctx->pc = 0x7F4558B0u;
    ctx->downcount -= 3;
    // 7F4558B0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4558B0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F4558B4:
    ctx->pc = 0x7F4558B4u;
    // 7F4558B4: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F4558B4u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F4558B8:
    ctx->pc = 0x7F4558B8u;
    // 7F4558B8: bl      0x7F008330
    {
            ctx->lr = 0x7F4558BCu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F4558BC:
    ctx->pc = 0x7F4558BCu;
    ctx->downcount -= 20;
    // 7F4558BC: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4558C0:
    ctx->pc = 0x7F4558C0u;
    // 7F4558C0: lfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4558C4:
    ctx->pc = 0x7F4558C4u;
    // 7F4558C4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4558C4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F4558C8:
    ctx->pc = 0x7F4558C8u;
    // 7F4558C8: fmsubs f0, f2, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4558C8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[31], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F4558CC:
    ctx->pc = 0x7F4558CCu;
    // 7F4558CC: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4558D0:
    ctx->pc = 0x7F4558D0u;
    // 7F4558D0: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4558D4:
    ctx->pc = 0x7F4558D4u;
    // 7F4558D4: lfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4558D8:
    ctx->pc = 0x7F4558D8u;
    // 7F4558D8: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4558D8u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F4558DC:
    ctx->pc = 0x7F4558DCu;
    // 7F4558DC: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4558DCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F4558E0:
    ctx->pc = 0x7F4558E0u;
    // 7F4558E0: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4558E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4558E4:
    ctx->pc = 0x7F4558E4u;
    // 7F4558E4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4558E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F4558E4u);
        if (ctx->exception) return;
    }

label_7F4558E8:
    ctx->pc = 0x7F4558E8u;
    // 7F4558E8: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4558E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4558EC:
    ctx->pc = 0x7F4558ECu;
    // 7F4558EC: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4558ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F4558ECu);
        if (ctx->exception) return;
    }

label_7F4558F0:
    ctx->pc = 0x7F4558F0u;
    // 7F4558F0: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4558F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4558F4:
    ctx->pc = 0x7F4558F4u;
    // 7F4558F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4558F8:
    ctx->pc = 0x7F4558F8u;
    // 7F4558F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4558FC:
    ctx->pc = 0x7F4558FCu;
    // 7F4558FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455900:
    ctx->pc = 0x7F455900u;
    // 7F455900: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F455904:
    ctx->pc = 0x7F455904u;
    // 7F455904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455908:
    ctx->pc = 0x7F455908u;
    ctx->downcount -= 47;
    // 7F455908: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45590C:
    ctx->pc = 0x7F45590Cu;
    // 7F45590C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455910:
    ctx->pc = 0x7F455910u;
    // 7F455910: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455914:
    ctx->pc = 0x7F455914u;
    // 7F455914: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455918:
    ctx->pc = 0x7F455918u;
    // 7F455918: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455918u);
        if (ctx->exception) return;
    }

label_7F45591C:
    ctx->pc = 0x7F45591Cu;
    // 7F45591C: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45591Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F455920:
    ctx->pc = 0x7F455920u;
    // 7F455920: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455920u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F455920u);
        if (ctx->exception) return;
    }

label_7F455924:
    ctx->pc = 0x7F455924u;
    // 7F455924: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F455928:
    ctx->pc = 0x7F455928u;
    // 7F455928: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455928u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F455928u);
        if (ctx->exception) return;
    }

label_7F45592C:
    ctx->pc = 0x7F45592Cu;
    // 7F45592C: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45592Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F455930:
    ctx->pc = 0x7F455930u;
    // 7F455930: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F455930u);
        if (ctx->exception) return;
    }

label_7F455934:
    ctx->pc = 0x7F455934u;
    // 7F455934: stmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455938:
    ctx->pc = 0x7F455938u;
    // 7F455938: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45593C:
    ctx->pc = 0x7F45593Cu;
    // 7F45593C: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F455940:
    ctx->pc = 0x7F455940u;
    // 7F455940: lfs     f29, -7384(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F455940u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F455944:
    ctx->pc = 0x7F455944u;
    // 7F455944: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F455948:
    ctx->pc = 0x7F455948u;
    // 7F455948: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45594C:
    ctx->pc = 0x7F45594Cu;
    // 7F45594C: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F455950:
    ctx->pc = 0x7F455950u;
    // 7F455950: lwz     r27, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F455954:
    ctx->pc = 0x7F455954u;
    // 7F455954: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455958:
    ctx->pc = 0x7F455958u;
    // 7F455958: lwz     r28, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F45595C:
    ctx->pc = 0x7F45595Cu;
    // 7F45595C: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45595Cu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F455960:
    ctx->pc = 0x7F455960u;
    // 7F455960: lwz     r29, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F455964:
    ctx->pc = 0x7F455964u;
    // 7F455964: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455968:
    ctx->pc = 0x7F455968u;
    // 7F455968: stfs     f29, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F45596C:
    ctx->pc = 0x7F45596Cu;
    // 7F45596C: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455970:
    ctx->pc = 0x7F455970u;
    // 7F455970: lfs     f30, -7400(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F455970u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-7400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F455974:
    ctx->pc = 0x7F455974u;
    // 7F455974: stw     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F455978:
    ctx->pc = 0x7F455978u;
    // 7F455978: neg  r26, r23
    {
        u32 a = ctx->gpr[23];
        ctx->gpr[26] = (~a) + 1u;
    }

label_7F45597C:
    ctx->pc = 0x7F45597Cu;
    // 7F45597C: lwz     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F455980:
    ctx->pc = 0x7F455980u;
    // 7F455980: rlwinm r25, r6, 0, 16, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_7F455984:
    ctx->pc = 0x7F455984u;
    // 7F455984: stw     r28, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F455988:
    ctx->pc = 0x7F455988u;
    // 7F455988: addi    r31, r4, -7380
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-7380);

label_7F45598C:
    ctx->pc = 0x7F45598Cu;
    // 7F45598C: lfs     f31, -7376(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F45598Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F455990:
    ctx->pc = 0x7F455990u;
    // 7F455990: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F455994:
    ctx->pc = 0x7F455994u;
    // 7F455994: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F455998:
    ctx->pc = 0x7F455998u;
    // 7F455998: b       0x7F455A14
    {
            goto label_7F455A14;
    }

label_7F45599C:
    ctx->pc = 0x7F45599Cu;
    ctx->downcount -= 7;
    // 7F45599C: stw     r27, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F4559A0:
    // 7F4559A0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4559A4:
    // 7F4559A4: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4559A8:
    ctx->pc = 0x7F4559A8u;
    // 7F4559A8: stw     r28, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F4559AC:
    ctx->pc = 0x7F4559ACu;
    // 7F4559AC: stw     r29, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F4559B0:
    ctx->pc = 0x7F4559B0u;
    // 7F4559B0: stw     r30, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F4559B4:
    // 7F4559B4: bl      0x7F114F50
    {
            ctx->lr = 0x7F4559B8u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F4559B8:
    ctx->pc = 0x7F4559B8u;
    ctx->downcount -= 4;
    // 7F4559B8: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4559B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4559BC:
    // 7F4559BC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F4559C0:
    // 7F4559C0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F4559C4:
    // 7F4559C4: bl      0x7F455620
    {
            ctx->lr = 0x7F4559C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F4559C8:
    ctx->pc = 0x7F4559C8u;
    ctx->downcount -= 20;
    // 7F4559C8: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4559C8u)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F4559CC:
    // 7F4559CC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4559D0:
    ctx->pc = 0x7F4559D0u;
    // 7F4559D0: fdivs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4559D0u)) return;
    ppc_fdivs(ctx, 1, 0, 31);

label_7F4559D4:
    // 7F4559D4: bl      0x7F455800
    {
            ctx->lr = 0x7F4559D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455800u;
                return;
            }
            goto label_7F455800;
    }

label_7F4559D8:
    ctx->pc = 0x7F4559D8u;
    ctx->downcount -= 4;
    // 7F4559D8: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4559D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4559DC:
    // 7F4559DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F4559E0:
    // 7F4559E0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F4559E4:
    // 7F4559E4: bl      0x7F455620
    {
            ctx->lr = 0x7F4559E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F4559E8:
    ctx->pc = 0x7F4559E8u;
    ctx->downcount -= 20;
    // 7F4559E8: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4559E8u)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F4559EC:
    // 7F4559EC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4559F0:
    ctx->pc = 0x7F4559F0u;
    // 7F4559F0: fdivs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4559F0u)) return;
    ppc_fdivs(ctx, 1, 0, 31);

label_7F4559F4:
    // 7F4559F4: bl      0x7F455884
    {
            ctx->lr = 0x7F4559F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455884u;
                return;
            }
            goto label_7F455884;
    }

label_7F4559F8:
    ctx->pc = 0x7F4559F8u;
    ctx->downcount -= 4;
    // 7F4559F8: fmr    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F4559F8u)) return;
    ctx->fpr[1] = ctx->fpr[28];

label_7F4559FC:
    // 7F4559FC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F455A00:
    // 7F455A00: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F455A04:
    // 7F455A04: bl      0x80026020
    {
            ctx->lr = 0x7F455A08u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F455A08:
    ctx->pc = 0x7F455A08u;
    ctx->downcount -= 3;
    // 7F455A08: stfs     f29, 12(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F455A08u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F455A0C:
    // 7F455A0C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F455A10:
    // 7F455A10: addi    r22, r22, 16
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(16);

label_7F455A14:
    ctx->downcount -= 2;
    // 7F455A14: cmpw    r24, r25
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F455A18:
    // 7F455A18: bc    12, 0, 0x7F45599C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45599Cu;
                return;
            }
            goto label_7F45599C;
        }
    }

label_7F455A1C:
    ctx->pc = 0x7F455A1Cu;
    ctx->downcount -= 24;
    // 7F455A1C: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F455A1Cu);
        if (ctx->exception) return;
    }

label_7F455A20:
    ctx->pc = 0x7F455A20u;
    // 7F455A20: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455A24:
    ctx->pc = 0x7F455A24u;
    // 7F455A24: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F455A24u);
        if (ctx->exception) return;
    }

label_7F455A28:
    ctx->pc = 0x7F455A28u;
    // 7F455A28: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455A2C:
    ctx->pc = 0x7F455A2Cu;
    // 7F455A2C: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455A2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F455A2Cu);
        if (ctx->exception) return;
    }

label_7F455A30:
    ctx->pc = 0x7F455A30u;
    // 7F455A30: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455A34:
    ctx->pc = 0x7F455A34u;
    // 7F455A34: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F455A34u);
        if (ctx->exception) return;
    }

label_7F455A38:
    ctx->pc = 0x7F455A38u;
    // 7F455A38: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455A3C:
    ctx->pc = 0x7F455A3Cu;
    // 7F455A3C: lmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F455A40:
    ctx->pc = 0x7F455A40u;
    // 7F455A40: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455A44:
    ctx->pc = 0x7F455A44u;
    // 7F455A44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455A48:
    ctx->pc = 0x7F455A48u;
    // 7F455A48: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F455A4C:
    ctx->pc = 0x7F455A4Cu;
    // 7F455A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455A50:
    ctx->pc = 0x7F455A50u;
    ctx->downcount -= 22;
    // 7F455A50: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455A54:
    ctx->pc = 0x7F455A54u;
    // 7F455A54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455A58:
    ctx->pc = 0x7F455A58u;
    // 7F455A58: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455A5C:
    ctx->pc = 0x7F455A5Cu;
    // 7F455A5C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455A60:
    ctx->pc = 0x7F455A60u;
    // 7F455A60: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455A60u);
        if (ctx->exception) return;
    }

label_7F455A64:
    ctx->pc = 0x7F455A64u;
    // 7F455A64: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455A68:
    ctx->pc = 0x7F455A68u;
    // 7F455A68: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455A68u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F455A6C:
    ctx->pc = 0x7F455A6Cu;
    // 7F455A6C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F455A70:
    ctx->pc = 0x7F455A70u;
    // 7F455A70: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455A74:
    ctx->pc = 0x7F455A74u;
    // 7F455A74: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455A78:
    ctx->pc = 0x7F455A78u;
    // 7F455A78: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455A7C:
    ctx->pc = 0x7F455A7Cu;
    // 7F455A7C: bl      0x7F114F50
    {
            ctx->lr = 0x7F455A80u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F455A80:
    ctx->pc = 0x7F455A80u;
    ctx->downcount -= 4;
    // 7F455A80: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F455A80u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F455A84:
    ctx->pc = 0x7F455A84u;
    // 7F455A84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455A88:
    ctx->pc = 0x7F455A88u;
    // 7F455A88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455A8C:
    ctx->pc = 0x7F455A8Cu;
    // 7F455A8C: bl      0x80026020
    {
            ctx->lr = 0x7F455A90u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F455A90:
    ctx->pc = 0x7F455A90u;
    ctx->downcount -= 4;
    // 7F455A90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455A94:
    ctx->pc = 0x7F455A94u;
    // 7F455A94: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455A98:
    ctx->pc = 0x7F455A98u;
    // 7F455A98: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F455A9C:
    ctx->pc = 0x7F455A9Cu;
    // 7F455A9C: bl      0x800261B4
    {
            ctx->lr = 0x7F455AA0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455AA0:
    ctx->pc = 0x7F455AA0u;
    ctx->downcount -= 21;
    // 7F455AA0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455AA4:
    ctx->pc = 0x7F455AA4u;
    // 7F455AA4: lfs     f0, -7384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455AA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455AA8:
    ctx->pc = 0x7F455AA8u;
    // 7F455AA8: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F455AA8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455AAC:
    ctx->pc = 0x7F455AACu;
    // 7F455AAC: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F455AACu);
        if (ctx->exception) return;
    }

label_7F455AB0:
    ctx->pc = 0x7F455AB0u;
    // 7F455AB0: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455AB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455AB4:
    ctx->pc = 0x7F455AB4u;
    // 7F455AB4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F455AB8:
    ctx->pc = 0x7F455AB8u;
    // 7F455AB8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455ABC:
    ctx->pc = 0x7F455ABCu;
    // 7F455ABC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455AC0:
    ctx->pc = 0x7F455AC0u;
    // 7F455AC0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F455AC4:
    ctx->pc = 0x7F455AC4u;
    // 7F455AC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455AC8:
    ctx->pc = 0x7F455AC8u;
    ctx->downcount -= 23;
    // 7F455AC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455ACC:
    ctx->pc = 0x7F455ACCu;
    // 7F455ACC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455AD0:
    ctx->pc = 0x7F455AD0u;
    // 7F455AD0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455AD4:
    ctx->pc = 0x7F455AD4u;
    // 7F455AD4: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F455AD8:
    ctx->pc = 0x7F455AD8u;
    // 7F455AD8: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F455AD8u);
        if (ctx->exception) return;
    }

label_7F455ADC:
    ctx->pc = 0x7F455ADCu;
    // 7F455ADC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455AE0:
    ctx->pc = 0x7F455AE0u;
    // 7F455AE0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455AE0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F455AE4:
    ctx->pc = 0x7F455AE4u;
    // 7F455AE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455AE8:
    ctx->pc = 0x7F455AE8u;
    // 7F455AE8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F455AEC:
    ctx->pc = 0x7F455AECu;
    // 7F455AEC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F455AF0:
    ctx->pc = 0x7F455AF0u;
    // 7F455AF0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455AF4:
    ctx->pc = 0x7F455AF4u;
    // 7F455AF4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455AF8:
    ctx->pc = 0x7F455AF8u;
    // 7F455AF8: bl      0x800261D8
    {
            ctx->lr = 0x7F455AFCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F455AFC:
    ctx->pc = 0x7F455AFCu;
    ctx->downcount -= 3;
    // 7F455AFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B00:
    ctx->pc = 0x7F455B00u;
    // 7F455B00: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B04:
    ctx->pc = 0x7F455B04u;
    // 7F455B04: bl      0x7F114F50
    {
            ctx->lr = 0x7F455B08u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F455B08:
    ctx->pc = 0x7F455B08u;
    ctx->downcount -= 4;
    // 7F455B08: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F455B08u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F455B0C:
    ctx->pc = 0x7F455B0Cu;
    // 7F455B0C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B10:
    ctx->pc = 0x7F455B10u;
    // 7F455B10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B14:
    ctx->pc = 0x7F455B14u;
    // 7F455B14: bl      0x80026020
    {
            ctx->lr = 0x7F455B18u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F455B18:
    ctx->pc = 0x7F455B18u;
    ctx->downcount -= 4;
    // 7F455B18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455B1C:
    ctx->pc = 0x7F455B1Cu;
    // 7F455B1C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B20:
    ctx->pc = 0x7F455B20u;
    // 7F455B20: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F455B24:
    ctx->pc = 0x7F455B24u;
    // 7F455B24: bl      0x800261B4
    {
            ctx->lr = 0x7F455B28u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455B28:
    ctx->pc = 0x7F455B28u;
    ctx->downcount -= 21;
    // 7F455B28: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455B2C:
    ctx->pc = 0x7F455B2Cu;
    // 7F455B2C: lfs     f0, -7384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455B2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455B30:
    ctx->pc = 0x7F455B30u;
    // 7F455B30: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F455B30u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455B34:
    ctx->pc = 0x7F455B34u;
    // 7F455B34: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F455B34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F455B34u);
        if (ctx->exception) return;
    }

label_7F455B38:
    ctx->pc = 0x7F455B38u;
    // 7F455B38: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455B3C:
    ctx->pc = 0x7F455B3Cu;
    // 7F455B3C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F455B40:
    ctx->pc = 0x7F455B40u;
    // 7F455B40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455B44:
    ctx->pc = 0x7F455B44u;
    // 7F455B44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455B48:
    ctx->pc = 0x7F455B48u;
    // 7F455B48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F455B4C:
    ctx->pc = 0x7F455B4Cu;
    // 7F455B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455B50:
    ctx->pc = 0x7F455B50u;
    ctx->downcount -= 4;
    // 7F455B50: rlwinm r0, r5, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_7F455B54:
    ctx->pc = 0x7F455B54u;
    // 7F455B54: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455B58:
    ctx->pc = 0x7F455B58u;
    // 7F455B58: cmpwi   r0, 2
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

label_7F455B5C:
    ctx->pc = 0x7F455B5Cu;
    // 7F455B5C: bc    12, 2, 0x7F455B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F455B80;
        }
    }

label_7F455B60:
    ctx->pc = 0x7F455B60u;
    ctx->downcount -= 1;
    // 7F455B60: bc    4, 0, 0x7F455B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F455B74;
        }
    }

label_7F455B64:
    ctx->pc = 0x7F455B64u;
    ctx->downcount -= 2;
    // 7F455B64: cmpwi   r0, 0
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

label_7F455B68:
    ctx->pc = 0x7F455B68u;
    // 7F455B68: bc    12, 2, 0x7F455B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F455B80;
        }
    }

label_7F455B6C:
    ctx->pc = 0x7F455B6Cu;
    ctx->downcount -= 1;
    // 7F455B6C: bc    4, 0, 0x7F455BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F455BF4;
        }
    }

label_7F455B70:
    ctx->pc = 0x7F455B70u;
    ctx->downcount -= 1;
    // 7F455B70: b       0x7F455C4C
    {
            goto label_7F455C4C;
    }

label_7F455B74:
    ctx->pc = 0x7F455B74u;
    ctx->downcount -= 2;
    // 7F455B74: cmpwi   r0, 4
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

label_7F455B78:
    ctx->pc = 0x7F455B78u;
    // 7F455B78: bc    4, 0, 0x7F455C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F455C4C;
        }
    }

label_7F455B7C:
    ctx->pc = 0x7F455B7Cu;
    ctx->downcount -= 1;
    // 7F455B7C: b       0x7F455BF4
    {
            goto label_7F455BF4;
    }

label_7F455B80:
    ctx->pc = 0x7F455B80u;
    ctx->downcount -= 29;
    // 7F455B80: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F455B84:
    ctx->pc = 0x7F455B84u;
    // 7F455B84: rlwinm r0, r4, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0x000000FFu;
    }

label_7F455B88:
    ctx->pc = 0x7F455B88u;
    // 7F455B88: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F455B8C:
    ctx->pc = 0x7F455B8Cu;
    // 7F455B8C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455B90:
    ctx->pc = 0x7F455B90u;
    // 7F455B90: addi    r8, r5, -7368
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-7368);

label_7F455B94:
    ctx->pc = 0x7F455B94u;
    // 7F455B94: rlwinm r6, r4, 16, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x000000FFu;
    }

label_7F455B98:
    ctx->pc = 0x7F455B98u;
    // 7F455B98: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F455B9C:
    ctx->pc = 0x7F455B9Cu;
    // 7F455B9C: rlwinm r5, r4, 24, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x000000FFu;
    }

label_7F455BA0:
    ctx->pc = 0x7F455BA0u;
    // 7F455BA0: lfd     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F455BA0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455BA4:
    ctx->pc = 0x7F455BA4u;
    // 7F455BA4: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_7F455BA8:
    ctx->pc = 0x7F455BA8u;
    // 7F455BA8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455BAC:
    ctx->pc = 0x7F455BACu;
    // 7F455BAC: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455BB0:
    ctx->pc = 0x7F455BB0u;
    // 7F455BB0: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455BB0u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F455BB4:
    ctx->pc = 0x7F455BB4u;
    // 7F455BB4: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F455BB8:
    ctx->pc = 0x7F455BB8u;
    // 7F455BB8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455BB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455BBC:
    ctx->pc = 0x7F455BBCu;
    // 7F455BBC: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455BC0:
    ctx->pc = 0x7F455BC0u;
    // 7F455BC0: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455BC0u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F455BC4:
    ctx->pc = 0x7F455BC4u;
    // 7F455BC4: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F455BC8:
    ctx->pc = 0x7F455BC8u;
    // 7F455BC8: stfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455BC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F455BCC:
    ctx->pc = 0x7F455BCCu;
    // 7F455BCC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455BCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455BD0:
    ctx->pc = 0x7F455BD0u;
    // 7F455BD0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455BD4:
    ctx->pc = 0x7F455BD4u;
    // 7F455BD4: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455BD4u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F455BD8:
    ctx->pc = 0x7F455BD8u;
    // 7F455BD8: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F455BDC:
    ctx->pc = 0x7F455BDCu;
    // 7F455BDC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455BE0:
    ctx->pc = 0x7F455BE0u;
    // 7F455BE0: stfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455BE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F455BE4:
    ctx->pc = 0x7F455BE4u;
    // 7F455BE4: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455BE4u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F455BE8:
    ctx->pc = 0x7F455BE8u;
    // 7F455BE8: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455BE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F455BEC:
    ctx->pc = 0x7F455BECu;
    // 7F455BEC: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455BECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455BF0:
    ctx->pc = 0x7F455BF0u;
    // 7F455BF0: b       0x7F455C4C
    {
            goto label_7F455C4C;
    }

label_7F455BF4:
    ctx->pc = 0x7F455BF4u;
    ctx->downcount -= 22;
    // 7F455BF4: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F455BF8:
    ctx->pc = 0x7F455BF8u;
    // 7F455BF8: rlwinm r0, r4, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0x000000FFu;
    }

label_7F455BFC:
    ctx->pc = 0x7F455BFCu;
    // 7F455BFC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F455C00:
    ctx->pc = 0x7F455C00u;
    // 7F455C00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455C04:
    ctx->pc = 0x7F455C04u;
    // 7F455C04: addi    r7, r5, -7368
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-7368);

label_7F455C08:
    ctx->pc = 0x7F455C08u;
    // 7F455C08: rlwinm r0, r4, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x000000FFu;
    }

label_7F455C0C:
    ctx->pc = 0x7F455C0Cu;
    // 7F455C0C: stw     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455C10:
    ctx->pc = 0x7F455C10u;
    // 7F455C10: rlwinm r5, r4, 16, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x000000FFu;
    }

label_7F455C14:
    ctx->pc = 0x7F455C14u;
    // 7F455C14: lfd     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F455C14u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455C18:
    ctx->pc = 0x7F455C18u;
    // 7F455C18: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455C18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455C1C:
    ctx->pc = 0x7F455C1Cu;
    // 7F455C1C: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455C20:
    ctx->pc = 0x7F455C20u;
    // 7F455C20: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455C20u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F455C24:
    ctx->pc = 0x7F455C24u;
    // 7F455C24: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455C28:
    ctx->pc = 0x7F455C28u;
    // 7F455C28: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455C2C:
    ctx->pc = 0x7F455C2Cu;
    // 7F455C2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455C30:
    ctx->pc = 0x7F455C30u;
    // 7F455C30: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455C30u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F455C34:
    ctx->pc = 0x7F455C34u;
    // 7F455C34: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455C38:
    ctx->pc = 0x7F455C38u;
    // 7F455C38: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455C3C:
    ctx->pc = 0x7F455C3Cu;
    // 7F455C3C: stfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455C3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F455C40:
    ctx->pc = 0x7F455C40u;
    // 7F455C40: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F455C40u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F455C44:
    ctx->pc = 0x7F455C44u;
    // 7F455C44: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455C44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F455C48:
    ctx->pc = 0x7F455C48u;
    // 7F455C48: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455C48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455C4C:
    ctx->pc = 0x7F455C4Cu;
    ctx->downcount -= 2;
    // 7F455C4C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F455C50:
    ctx->pc = 0x7F455C50u;
    // 7F455C50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455C54:
    ctx->pc = 0x7F455C54u;
    ctx->downcount -= 23;
    // 7F455C54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455C58:
    ctx->pc = 0x7F455C58u;
    // 7F455C58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455C5C:
    ctx->pc = 0x7F455C5Cu;
    // 7F455C5C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F455C60:
    ctx->pc = 0x7F455C60u;
    // 7F455C60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455C64:
    ctx->pc = 0x7F455C64u;
    // 7F455C64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F455C68:
    ctx->pc = 0x7F455C68u;
    // 7F455C68: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455C6C:
    ctx->pc = 0x7F455C6Cu;
    // 7F455C6C: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455C70:
    ctx->pc = 0x7F455C70u;
    // 7F455C70: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C74:
    ctx->pc = 0x7F455C74u;
    // 7F455C74: stb     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C78:
    ctx->pc = 0x7F455C78u;
    // 7F455C78: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C7C:
    ctx->pc = 0x7F455C7Cu;
    // 7F455C7C: stb     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C80:
    ctx->pc = 0x7F455C80u;
    // 7F455C80: stb     r0, 13(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C84:
    ctx->pc = 0x7F455C84u;
    // 7F455C84: stb     r0, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C88:
    ctx->pc = 0x7F455C88u;
    // 7F455C88: stb     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C8C:
    ctx->pc = 0x7F455C8Cu;
    // 7F455C8C: stb     r0, 49(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C90:
    ctx->pc = 0x7F455C90u;
    // 7F455C90: stb     r0, 50(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C94:
    ctx->pc = 0x7F455C94u;
    // 7F455C94: stb     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C98:
    ctx->pc = 0x7F455C98u;
    // 7F455C98: stb     r0, 61(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455C9C:
    ctx->pc = 0x7F455C9Cu;
    // 7F455C9C: stb     r0, 62(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455CA0:
    ctx->pc = 0x7F455CA0u;
    // 7F455CA0: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455CA4:
    ctx->pc = 0x7F455CA4u;
    // 7F455CA4: lwz     r3, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455CA8:
    ctx->pc = 0x7F455CA8u;
    // 7F455CA8: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455CAC:
    ctx->pc = 0x7F455CACu;
    // 7F455CAC: bl      0x8000519C
    {
            ctx->lr = 0x7F455CB0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F455CB0:
    ctx->pc = 0x7F455CB0u;
    ctx->downcount -= 5;
    // 7F455CB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455CB4:
    ctx->pc = 0x7F455CB4u;
    // 7F455CB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455CB8:
    ctx->pc = 0x7F455CB8u;
    // 7F455CB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F455CBC:
    ctx->pc = 0x7F455CBCu;
    // 7F455CBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455CC0:
    ctx->pc = 0x7F455CC0u;
    ctx->downcount -= 34;
    // 7F455CC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455CC4:
    ctx->pc = 0x7F455CC4u;
    // 7F455CC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455CC8:
    ctx->pc = 0x7F455CC8u;
    // 7F455CC8: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F455CCC:
    ctx->pc = 0x7F455CCCu;
    // 7F455CCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455CD0:
    ctx->pc = 0x7F455CD0u;
    // 7F455CD0: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455CD4:
    ctx->pc = 0x7F455CD4u;
    // 7F455CD4: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455CD8:
    ctx->pc = 0x7F455CD8u;
    // 7F455CD8: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455CDC:
    ctx->pc = 0x7F455CDCu;
    // 7F455CDC: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455CE0:
    ctx->pc = 0x7F455CE0u;
    // 7F455CE0: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455CE4:
    ctx->pc = 0x7F455CE4u;
    // 7F455CE4: stb     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455CE8:
    ctx->pc = 0x7F455CE8u;
    // 7F455CE8: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455CEC:
    ctx->pc = 0x7F455CECu;
    // 7F455CEC: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455CF0:
    ctx->pc = 0x7F455CF0u;
    // 7F455CF0: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455CF4:
    ctx->pc = 0x7F455CF4u;
    // 7F455CF4: stb     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455CF8:
    ctx->pc = 0x7F455CF8u;
    // 7F455CF8: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455CFC:
    ctx->pc = 0x7F455CFCu;
    // 7F455CFC: stb     r0, 13(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D00:
    ctx->pc = 0x7F455D00u;
    // 7F455D00: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D04:
    ctx->pc = 0x7F455D04u;
    // 7F455D04: stb     r0, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D08:
    ctx->pc = 0x7F455D08u;
    // 7F455D08: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D0C:
    ctx->pc = 0x7F455D0Cu;
    // 7F455D0C: stb     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D10:
    ctx->pc = 0x7F455D10u;
    // 7F455D10: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D14:
    ctx->pc = 0x7F455D14u;
    // 7F455D14: stb     r0, 49(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D18:
    ctx->pc = 0x7F455D18u;
    // 7F455D18: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D1C:
    ctx->pc = 0x7F455D1Cu;
    // 7F455D1C: stb     r0, 50(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D20:
    ctx->pc = 0x7F455D20u;
    // 7F455D20: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D24:
    ctx->pc = 0x7F455D24u;
    // 7F455D24: stb     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D28:
    ctx->pc = 0x7F455D28u;
    // 7F455D28: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D2C:
    ctx->pc = 0x7F455D2Cu;
    // 7F455D2C: stb     r0, 61(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D30:
    ctx->pc = 0x7F455D30u;
    // 7F455D30: lbz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F455D34:
    ctx->pc = 0x7F455D34u;
    // 7F455D34: stb     r0, 62(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F455D38:
    ctx->pc = 0x7F455D38u;
    // 7F455D38: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455D3C:
    ctx->pc = 0x7F455D3Cu;
    // 7F455D3C: lwz     r3, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455D40:
    ctx->pc = 0x7F455D40u;
    // 7F455D40: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455D44:
    ctx->pc = 0x7F455D44u;
    // 7F455D44: bl      0x8000519C
    {
            ctx->lr = 0x7F455D48u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F455D48:
    ctx->pc = 0x7F455D48u;
    ctx->downcount -= 5;
    // 7F455D48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455D4C:
    ctx->pc = 0x7F455D4Cu;
    // 7F455D4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F455D50:
    ctx->pc = 0x7F455D50u;
    // 7F455D50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F455D54:
    ctx->pc = 0x7F455D54u;
    // 7F455D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F455D58:
    ctx->pc = 0x7F455D58u;
    ctx->downcount -= 23;
    // 7F455D58: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F455D5C:
    ctx->pc = 0x7F455D5Cu;
    // 7F455D5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F455D60:
    ctx->pc = 0x7F455D60u;
    // 7F455D60: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455D64:
    ctx->pc = 0x7F455D64u;
    // 7F455D64: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F455D68:
    ctx->pc = 0x7F455D68u;
    // 7F455D68: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455D6C:
    ctx->pc = 0x7F455D6Cu;
    // 7F455D6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F455D70:
    ctx->pc = 0x7F455D70u;
    // 7F455D70: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455D74:
    ctx->pc = 0x7F455D74u;
    // 7F455D74: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455D78:
    ctx->pc = 0x7F455D78u;
    // 7F455D78: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F455D7C:
    ctx->pc = 0x7F455D7Cu;
    // 7F455D7C: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455D80:
    ctx->pc = 0x7F455D80u;
    // 7F455D80: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F455D84:
    ctx->pc = 0x7F455D84u;
    // 7F455D84: lwz     r29, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F455D88:
    ctx->pc = 0x7F455D88u;
    // 7F455D88: bl      0x7F026F84
    {
            ctx->lr = 0x7F455D8Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F455D8C:
    ctx->pc = 0x7F455D8Cu;
    ctx->downcount -= 9;
    // 7F455D8C: lwz     r5, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455D90:
    ctx->pc = 0x7F455D90u;
    // 7F455D90: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455D94:
    ctx->pc = 0x7F455D94u;
    // 7F455D94: rlwinm r4, r29, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F455D98:
    ctx->pc = 0x7F455D98u;
    // 7F455D98: addi    r3, r28, 68
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(68);

label_7F455D9C:
    ctx->pc = 0x7F455D9Cu;
    // 7F455D9C: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F455DA0:
    ctx->pc = 0x7F455DA0u;
    // 7F455DA0: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F455DA4:
    ctx->pc = 0x7F455DA4u;
    // 7F455DA4: lwz     r31, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F455DA8:
    ctx->pc = 0x7F455DA8u;
    // 7F455DA8: lwz     r30, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F455DAC:
    ctx->pc = 0x7F455DACu;
    // 7F455DAC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F455DB0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F455DB0:
    ctx->pc = 0x7F455DB0u;
    ctx->downcount -= 5;
    // 7F455DB0: lfs     f1, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455DB0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455DB4:
    ctx->pc = 0x7F455DB4u;
    // 7F455DB4: addi    r3, r28, 224
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(224);

label_7F455DB8:
    ctx->pc = 0x7F455DB8u;
    // 7F455DB8: addi    r4, r28, 116
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(116);

label_7F455DBC:
    ctx->pc = 0x7F455DBCu;
    // 7F455DBC: addi    r5, r28, 100
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(100);

label_7F455DC0:
    ctx->pc = 0x7F455DC0u;
    // 7F455DC0: bl      0x7F455A50
    {
            ctx->lr = 0x7F455DC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455A50u;
                return;
            }
            goto label_7F455A50;
    }

label_7F455DC4:
    ctx->pc = 0x7F455DC4u;
    ctx->downcount -= 5;
    // 7F455DC4: lwz     r0, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455DC8:
    ctx->pc = 0x7F455DC8u;
    // 7F455DC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455DCC:
    ctx->pc = 0x7F455DCCu;
    // 7F455DCC: lfs     f1, -7360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455DCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455DD0:
    ctx->pc = 0x7F455DD0u;
    // 7F455DD0: cmpwi   r0, 0
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

label_7F455DD4:
    ctx->pc = 0x7F455DD4u;
    // 7F455DD4: bc    12, 2, 0x7F455E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F455E4C;
        }
    }

label_7F455DD8:
    ctx->pc = 0x7F455DD8u;
    ctx->downcount -= 7;
    // 7F455DD8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455DDC:
    ctx->pc = 0x7F455DDCu;
    // 7F455DDC: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455DE0:
    ctx->pc = 0x7F455DE0u;
    // 7F455DE0: addi    r5, r4, -7356
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7356);

label_7F455DE4:
    ctx->pc = 0x7F455DE4u;
    // 7F455DE4: addi    r4, r28, 116
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(116);

label_7F455DE8:
    ctx->pc = 0x7F455DE8u;
    // 7F455DE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455DE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455DEC:
    ctx->pc = 0x7F455DECu;
    // 7F455DEC: addi    r5, r28, 224
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(224);

label_7F455DF0:
    ctx->pc = 0x7F455DF0u;
    // 7F455DF0: bl      0x7F4556F0
    {
            ctx->lr = 0x7F455DF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556F0u;
                return;
            }
            goto label_7F4556F0;
    }

label_7F455DF4:
    ctx->pc = 0x7F455DF4u;
    ctx->downcount -= 7;
    // 7F455DF4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455DF8:
    ctx->pc = 0x7F455DF8u;
    // 7F455DF8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F455DFC:
    ctx->pc = 0x7F455DFCu;
    // 7F455DFC: addi    r5, r3, -7352
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7352);

label_7F455E00:
    ctx->pc = 0x7F455E00u;
    // 7F455E00: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455E04:
    ctx->pc = 0x7F455E04u;
    // 7F455E04: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455E04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455E08:
    ctx->pc = 0x7F455E08u;
    // 7F455E08: stfs     f0, 172(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455E08u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455E0C:
    ctx->pc = 0x7F455E0Cu;
    // 7F455E0C: bl      0x7F4556C4
    {
            ctx->lr = 0x7F455E10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556C4u;
                return;
            }
            goto label_7F4556C4;
    }

label_7F455E10:
    ctx->pc = 0x7F455E10u;
    ctx->downcount -= 15;
    // 7F455E10: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455E14:
    ctx->pc = 0x7F455E14u;
    // 7F455E14: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F455E18:
    ctx->pc = 0x7F455E18u;
    // 7F455E18: addi    r4, r3, -7348
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7348);

label_7F455E1C:
    ctx->pc = 0x7F455E1Cu;
    // 7F455E1C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455E20:
    ctx->pc = 0x7F455E20u;
    // 7F455E20: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455E20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455E24:
    ctx->pc = 0x7F455E24u;
    // 7F455E24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455E28:
    ctx->pc = 0x7F455E28u;
    // 7F455E28: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455E28u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F455E2C:
    ctx->pc = 0x7F455E2Cu;
    // 7F455E2C: lfd     f1, -7328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455E2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7328);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455E30:
    ctx->pc = 0x7F455E30u;
    // 7F455E30: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F455E30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F455E34:
    ctx->pc = 0x7F455E34u;
    // 7F455E34: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455E34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F455E38:
    ctx->pc = 0x7F455E38u;
    // 7F455E38: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455E3C:
    ctx->pc = 0x7F455E3Cu;
    // 7F455E3C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F455E40:
    ctx->pc = 0x7F455E40u;
    // 7F455E40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455E44:
    ctx->pc = 0x7F455E44u;
    // 7F455E44: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F455E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F455E48:
    ctx->pc = 0x7F455E48u;
    // 7F455E48: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455E48u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F455E4C:
    ctx->pc = 0x7F455E4Cu;
    ctx->downcount -= 7;
    // 7F455E4C: lfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455E4Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455E50:
    ctx->pc = 0x7F455E50u;
    // 7F455E50: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F455E54:
    ctx->pc = 0x7F455E54u;
    // 7F455E54: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455E58:
    ctx->pc = 0x7F455E58u;
    // 7F455E58: addi    r4, r28, 116
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(116);

label_7F455E5C:
    ctx->pc = 0x7F455E5Cu;
    // 7F455E5C: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455E5Cu)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F455E60:
    ctx->pc = 0x7F455E60u;
    // 7F455E60: addi    r5, r28, 224
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(224);

label_7F455E64:
    ctx->pc = 0x7F455E64u;
    // 7F455E64: bl      0x7F45573C
    {
            ctx->lr = 0x7F455E68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45573Cu;
                return;
            }
            goto label_7F45573C;
    }

label_7F455E68:
    ctx->pc = 0x7F455E68u;
    ctx->downcount -= 5;
    // 7F455E68: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455E6C:
    ctx->pc = 0x7F455E6Cu;
    // 7F455E6C: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455E70:
    ctx->pc = 0x7F455E70u;
    // 7F455E70: lfs     f1, -7356(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455E70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455E74:
    ctx->pc = 0x7F455E74u;
    // 7F455E74: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455E78:
    ctx->pc = 0x7F455E78u;
    // 7F455E78: bl      0x80026020
    {
            ctx->lr = 0x7F455E7Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F455E7C:
    ctx->pc = 0x7F455E7Cu;
    ctx->downcount -= 12;
    // 7F455E7C: lwz     r6, 116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(116);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455E80:
    ctx->pc = 0x7F455E80u;
    // 7F455E80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455E84:
    ctx->pc = 0x7F455E84u;
    // 7F455E84: lwz     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455E88:
    ctx->pc = 0x7F455E88u;
    // 7F455E88: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F455E8C:
    ctx->pc = 0x7F455E8Cu;
    // 7F455E8C: addi    r4, r28, 160
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455E90:
    ctx->pc = 0x7F455E90u;
    // 7F455E90: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455E94:
    ctx->pc = 0x7F455E94u;
    // 7F455E94: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455E98:
    ctx->pc = 0x7F455E98u;
    // 7F455E98: lwz     r6, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455E9C:
    ctx->pc = 0x7F455E9Cu;
    // 7F455E9C: lwz     r0, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455EA0:
    ctx->pc = 0x7F455EA0u;
    // 7F455EA0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455EA4:
    ctx->pc = 0x7F455EA4u;
    // 7F455EA4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455EA8:
    ctx->pc = 0x7F455EA8u;
    // 7F455EA8: bl      0x800261B4
    {
            ctx->lr = 0x7F455EACu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455EAC:
    ctx->pc = 0x7F455EACu;
    ctx->downcount -= 16;
    // 7F455EAC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455EB0:
    ctx->pc = 0x7F455EB0u;
    // 7F455EB0: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F455EB4:
    ctx->pc = 0x7F455EB4u;
    // 7F455EB4: addi    r5, r4, -7352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7352);

label_7F455EB8:
    ctx->pc = 0x7F455EB8u;
    // 7F455EB8: addi    r4, r28, 160
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455EBC:
    ctx->pc = 0x7F455EBCu;
    // 7F455EBC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455EBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455EC0:
    ctx->pc = 0x7F455EC0u;
    // 7F455EC0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455EC4:
    ctx->pc = 0x7F455EC4u;
    // 7F455EC4: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455EC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455EC8:
    ctx->pc = 0x7F455EC8u;
    // 7F455EC8: lwz     r6, 224(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(224);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455ECC:
    ctx->pc = 0x7F455ECCu;
    // 7F455ECC: lwz     r0, 228(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455ED0:
    ctx->pc = 0x7F455ED0u;
    // 7F455ED0: stw     r6, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455ED4:
    ctx->pc = 0x7F455ED4u;
    // 7F455ED4: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455ED8:
    ctx->pc = 0x7F455ED8u;
    // 7F455ED8: lwz     r6, 232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455EDC:
    ctx->pc = 0x7F455EDCu;
    // 7F455EDC: lwz     r0, 236(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455EE0:
    ctx->pc = 0x7F455EE0u;
    // 7F455EE0: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455EE4:
    ctx->pc = 0x7F455EE4u;
    // 7F455EE4: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455EE8:
    ctx->pc = 0x7F455EE8u;
    // 7F455EE8: bl      0x800261B4
    {
            ctx->lr = 0x7F455EECu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455EEC:
    ctx->pc = 0x7F455EECu;
    ctx->downcount -= 27;
    // 7F455EEC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455EF0:
    ctx->pc = 0x7F455EF0u;
    // 7F455EF0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455EF4:
    ctx->pc = 0x7F455EF4u;
    // 7F455EF4: addi    r5, r3, -7352
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7352);

label_7F455EF8:
    ctx->pc = 0x7F455EF8u;
    // 7F455EF8: lfs     f1, -7344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455EF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455EFC:
    ctx->pc = 0x7F455EFCu;
    // 7F455EFC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455EFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455F00:
    ctx->pc = 0x7F455F00u;
    // 7F455F00: addi    r3, r28, 160
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455F04:
    ctx->pc = 0x7F455F04u;
    // 7F455F04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455F08:
    ctx->pc = 0x7F455F08u;
    // 7F455F08: stfs     f0, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455F08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455F0C:
    ctx->pc = 0x7F455F0Cu;
    // 7F455F0C: lwz     r5, 116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455F10:
    ctx->pc = 0x7F455F10u;
    // 7F455F10: lwz     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F14:
    ctx->pc = 0x7F455F14u;
    // 7F455F14: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455F18:
    ctx->pc = 0x7F455F18u;
    // 7F455F18: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F1C:
    ctx->pc = 0x7F455F1Cu;
    // 7F455F1C: lwz     r5, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455F20:
    ctx->pc = 0x7F455F20u;
    // 7F455F20: lwz     r0, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F24:
    ctx->pc = 0x7F455F24u;
    // 7F455F24: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455F28:
    ctx->pc = 0x7F455F28u;
    // 7F455F28: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F2C:
    ctx->pc = 0x7F455F2Cu;
    // 7F455F2C: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455F2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455F30:
    ctx->pc = 0x7F455F30u;
    // 7F455F30: lwz     r5, 224(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455F34:
    ctx->pc = 0x7F455F34u;
    // 7F455F34: lwz     r0, 228(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F38:
    ctx->pc = 0x7F455F38u;
    // 7F455F38: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455F3C:
    ctx->pc = 0x7F455F3Cu;
    // 7F455F3C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F40:
    ctx->pc = 0x7F455F40u;
    // 7F455F40: lwz     r5, 232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(232);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F455F44:
    ctx->pc = 0x7F455F44u;
    // 7F455F44: lwz     r0, 236(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F48:
    ctx->pc = 0x7F455F48u;
    // 7F455F48: stw     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F455F4C:
    ctx->pc = 0x7F455F4Cu;
    // 7F455F4C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F50:
    ctx->pc = 0x7F455F50u;
    // 7F455F50: stfs     f0, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455F50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455F54:
    ctx->pc = 0x7F455F54u;
    // 7F455F54: bl      0x80026020
    {
            ctx->lr = 0x7F455F58u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F455F58:
    ctx->pc = 0x7F455F58u;
    ctx->downcount -= 12;
    // 7F455F58: lwz     r6, 116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(116);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455F5C:
    ctx->pc = 0x7F455F5Cu;
    // 7F455F5C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F455F60:
    ctx->pc = 0x7F455F60u;
    // 7F455F60: lwz     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F64:
    ctx->pc = 0x7F455F64u;
    // 7F455F64: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455F68:
    ctx->pc = 0x7F455F68u;
    // 7F455F68: addi    r4, r28, 160
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455F6C:
    ctx->pc = 0x7F455F6Cu;
    // 7F455F6C: stw     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455F70:
    ctx->pc = 0x7F455F70u;
    // 7F455F70: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F74:
    ctx->pc = 0x7F455F74u;
    // 7F455F74: lwz     r6, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455F78:
    ctx->pc = 0x7F455F78u;
    // 7F455F78: lwz     r0, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455F7C:
    ctx->pc = 0x7F455F7Cu;
    // 7F455F7C: stw     r6, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455F80:
    ctx->pc = 0x7F455F80u;
    // 7F455F80: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455F84:
    ctx->pc = 0x7F455F84u;
    // 7F455F84: bl      0x800261B4
    {
            ctx->lr = 0x7F455F88u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455F88:
    ctx->pc = 0x7F455F88u;
    ctx->downcount -= 16;
    // 7F455F88: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F455F8C:
    ctx->pc = 0x7F455F8Cu;
    // 7F455F8C: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F455F90:
    ctx->pc = 0x7F455F90u;
    // 7F455F90: addi    r5, r4, -7352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7352);

label_7F455F94:
    ctx->pc = 0x7F455F94u;
    // 7F455F94: addi    r4, r28, 160
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(160);

label_7F455F98:
    ctx->pc = 0x7F455F98u;
    // 7F455F98: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F455F98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455F9C:
    ctx->pc = 0x7F455F9Cu;
    // 7F455F9C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F455FA0:
    ctx->pc = 0x7F455FA0u;
    // 7F455FA0: stfs     f0, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455FA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455FA4:
    ctx->pc = 0x7F455FA4u;
    // 7F455FA4: lwz     r6, 224(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(224);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455FA8:
    ctx->pc = 0x7F455FA8u;
    // 7F455FA8: lwz     r0, 228(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455FAC:
    ctx->pc = 0x7F455FACu;
    // 7F455FAC: stw     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455FB0:
    ctx->pc = 0x7F455FB0u;
    // 7F455FB0: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455FB4:
    ctx->pc = 0x7F455FB4u;
    // 7F455FB4: lwz     r6, 232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F455FB8:
    ctx->pc = 0x7F455FB8u;
    // 7F455FB8: lwz     r0, 236(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F455FBC:
    ctx->pc = 0x7F455FBCu;
    // 7F455FBC: stw     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F455FC0:
    ctx->pc = 0x7F455FC0u;
    // 7F455FC0: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F455FC4:
    ctx->pc = 0x7F455FC4u;
    // 7F455FC4: bl      0x800261B4
    {
            ctx->lr = 0x7F455FC8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F455FC8:
    ctx->pc = 0x7F455FC8u;
    ctx->downcount -= 5;
    // 7F455FC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455FCC:
    ctx->pc = 0x7F455FCCu;
    // 7F455FCC: lfs     f0, -7352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455FCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455FD0:
    ctx->pc = 0x7F455FD0u;
    // 7F455FD0: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F455FD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F455FD4:
    ctx->pc = 0x7F455FD4u;
    // 7F455FD4: lwz     r3, 136(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F455FD8:
    ctx->pc = 0x7F455FD8u;
    // 7F455FD8: bl      0x7F3B6420
    {
            ctx->lr = 0x7F455FDCu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F455FDC:
    ctx->pc = 0x7F455FDCu;
    ctx->downcount -= 15;
    // 7F455FDC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F455FE0:
    ctx->pc = 0x7F455FE0u;
    // 7F455FE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F455FE4:
    ctx->pc = 0x7F455FE4u;
    // 7F455FE4: lfs     f1, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455FE4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F455FE8:
    ctx->pc = 0x7F455FE8u;
    // 7F455FE8: lfs     f2, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F455FE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F455FEC:
    ctx->pc = 0x7F455FECu;
    // 7F455FEC: lfs     f0, -7352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F455FECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F455FF0:
    ctx->pc = 0x7F455FF0u;
    // 7F455FF0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F455FF0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F455FF4:
    ctx->pc = 0x7F455FF4u;
    // 7F455FF4: stfs     f1, 148(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455FF4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F455FF8:
    ctx->pc = 0x7F455FF8u;
    // 7F455FF8: lfs     f3, 144(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455FF8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F455FFC:
    ctx->pc = 0x7F455FFCu;
    // 7F455FFC: lfs     f2, 148(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F455FFCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F456000:
    ctx->pc = 0x7F456000u;
    // 7F456000: lfs     f1, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F456000u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456004:
    ctx->pc = 0x7F456004u;
    // 7F456004: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456004u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F456008:
    ctx->pc = 0x7F456008u;
    // 7F456008: stfs     f1, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F456008u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F45600C:
    ctx->pc = 0x7F45600Cu;
    // 7F45600C: lfs     f1, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F45600Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456010:
    ctx->pc = 0x7F456010u;
    // 7F456010: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456010u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F456014:
    ctx->pc = 0x7F456014u;
    // 7F456014: bc    4, 1, 0x7F45603C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45603C;
        }
    }

label_7F456018:
    ctx->pc = 0x7F456018u;
    ctx->downcount -= 8;
    // 7F456018: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456018u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F45601C:
    ctx->pc = 0x7F45601Cu;
    // 7F45601C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456020:
    ctx->pc = 0x7F456020u;
    // 7F456020: addi    r4, r3, -7340
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7340);

label_7F456024:
    ctx->pc = 0x7F456024u;
    // 7F456024: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F456028:
    ctx->pc = 0x7F456028u;
    // 7F456028: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456028u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45602C:
    ctx->pc = 0x7F45602Cu;
    // 7F45602C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F456030:
    ctx->pc = 0x7F456030u;
    // 7F456030: stfs     f0, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F456030u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F456034:
    ctx->pc = 0x7F456034u;
    // 7F456034: bl      0x7F455620
    {
            ctx->lr = 0x7F456038u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F456038:
    ctx->pc = 0x7F456038u;
    ctx->downcount -= 1;
    // 7F456038: stfs     f1, 144(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F456038u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F45603C:
    ctx->pc = 0x7F45603Cu;
    ctx->downcount -= 13;
    // 7F45603C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456040:
    ctx->pc = 0x7F456040u;
    // 7F456040: lwz     r3, 132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456044:
    ctx->pc = 0x7F456044u;
    // 7F456044: lfs     f0, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F456044u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456048:
    ctx->pc = 0x7F456048u;
    // 7F456048: lfs     f1, -7336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456048u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45604C:
    ctx->pc = 0x7F45604Cu;
    // 7F45604C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F456050:
    ctx->pc = 0x7F456050u;
    // 7F456050: stw     r0, 132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456054:
    ctx->pc = 0x7F456054u;
    // 7F456054: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456054u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F456058:
    ctx->pc = 0x7F456058u;
    // 7F456058: lwz     r0, 132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45605C:
    ctx->pc = 0x7F45605Cu;
    // 7F45605C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45605Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456060:
    ctx->pc = 0x7F456060u;
    // 7F456060: cmpwi   r0, 0
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

label_7F456064:
    ctx->pc = 0x7F456064u;
    // 7F456064: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456068:
    ctx->pc = 0x7F456068u;
    // 7F456068: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45606C:
    ctx->pc = 0x7F45606Cu;
    // 7F45606C: bc    4, 0, 0x7F456174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456174;
        }
    }

label_7F456070:
    ctx->pc = 0x7F456070u;
    ctx->downcount -= 6;
    // 7F456070: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F456074:
    ctx->pc = 0x7F456074u;
    // 7F456074: stw     r0, 132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456078:
    ctx->pc = 0x7F456078u;
    // 7F456078: lbz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F45607C:
    ctx->pc = 0x7F45607Cu;
    // 7F45607C: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456080:
    ctx->pc = 0x7F456080u;
    // 7F456080: cmplw   r3, r0
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

label_7F456084:
    ctx->pc = 0x7F456084u;
    // 7F456084: bc    12, 2, 0x7F4560D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4560D4;
        }
    }

label_7F456088:
    ctx->pc = 0x7F456088u;
    ctx->downcount -= 19;
    // 7F456088: sth     r5, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45608C:
    ctx->pc = 0x7F45608Cu;
    // 7F45608C: sth     r5, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456090:
    ctx->pc = 0x7F456090u;
    // 7F456090: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456094:
    ctx->pc = 0x7F456094u;
    // 7F456094: stb     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456098:
    ctx->pc = 0x7F456098u;
    // 7F456098: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F45609C:
    ctx->pc = 0x7F45609Cu;
    // 7F45609C: stb     r0, 25(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4560A0:
    ctx->pc = 0x7F4560A0u;
    // 7F4560A0: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F4560A4:
    ctx->pc = 0x7F4560A4u;
    // 7F4560A4: stb     r0, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4560A8:
    ctx->pc = 0x7F4560A8u;
    // 7F4560A8: sth     r5, 30(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560AC:
    ctx->pc = 0x7F4560ACu;
    // 7F4560AC: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F4560B0:
    ctx->pc = 0x7F4560B0u;
    // 7F4560B0: stb     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4560B4:
    ctx->pc = 0x7F4560B4u;
    // 7F4560B4: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F4560B8:
    ctx->pc = 0x7F4560B8u;
    // 7F4560B8: stb     r0, 37(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4560BC:
    ctx->pc = 0x7F4560BCu;
    // 7F4560BC: lbz     r0, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F4560C0:
    ctx->pc = 0x7F4560C0u;
    // 7F4560C0: stb     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4560C4:
    ctx->pc = 0x7F4560C4u;
    // 7F4560C4: sth     r5, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560C8:
    ctx->pc = 0x7F4560C8u;
    // 7F4560C8: sth     r5, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560CC:
    ctx->pc = 0x7F4560CCu;
    // 7F4560CC: sth     r5, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560D0:
    ctx->pc = 0x7F4560D0u;
    // 7F4560D0: b       0x7F45618C
    {
            goto label_7F45618C;
    }

label_7F4560D4:
    ctx->pc = 0x7F4560D4u;
    ctx->downcount -= 40;
    // 7F4560D4: sth     r5, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560D8:
    ctx->pc = 0x7F4560D8u;
    // 7F4560D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F4560DC:
    ctx->pc = 0x7F4560DCu;
    // 7F4560DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4560E0:
    ctx->pc = 0x7F4560E0u;
    // 7F4560E0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4560E4:
    ctx->pc = 0x7F4560E4u;
    // 7F4560E4: sth     r5, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4560E8:
    ctx->pc = 0x7F4560E8u;
    // 7F4560E8: lfd     f2, -7320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4560E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7320);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4560EC:
    ctx->pc = 0x7F4560ECu;
    // 7F4560EC: lbz     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F4560F0:
    ctx->pc = 0x7F4560F0u;
    // 7F4560F0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4560F4:
    ctx->pc = 0x7F4560F4u;
    // 7F4560F4: lfs     f1, -7332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4560F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4560F8:
    ctx->pc = 0x7F4560F8u;
    // 7F4560F8: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4560FC:
    ctx->pc = 0x7F4560FCu;
    // 7F4560FC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4560FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456100:
    ctx->pc = 0x7F456100u;
    // 7F456100: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456104:
    ctx->pc = 0x7F456104u;
    // 7F456104: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F456104u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F456108:
    ctx->pc = 0x7F456108u;
    // 7F456108: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456108u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F45610C:
    ctx->pc = 0x7F45610Cu;
    // 7F45610C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45610Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456110:
    ctx->pc = 0x7F456110u;
    // 7F456110: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456114:
    ctx->pc = 0x7F456114u;
    // 7F456114: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456118:
    ctx->pc = 0x7F456118u;
    // 7F456118: stb     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45611C:
    ctx->pc = 0x7F45611Cu;
    // 7F45611C: lbz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456120:
    ctx->pc = 0x7F456120u;
    // 7F456120: stb     r0, 25(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456124:
    ctx->pc = 0x7F456124u;
    // 7F456124: lbz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456128:
    ctx->pc = 0x7F456128u;
    // 7F456128: stb     r0, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45612C:
    ctx->pc = 0x7F45612Cu;
    // 7F45612C: sth     r5, 30(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456130:
    ctx->pc = 0x7F456130u;
    // 7F456130: lbz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456134:
    ctx->pc = 0x7F456134u;
    // 7F456134: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456138:
    ctx->pc = 0x7F456138u;
    // 7F456138: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45613C:
    ctx->pc = 0x7F45613Cu;
    // 7F45613C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F45613Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F456140:
    ctx->pc = 0x7F456140u;
    // 7F456140: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456140u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F456144:
    ctx->pc = 0x7F456144u;
    // 7F456144: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456144u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456148:
    ctx->pc = 0x7F456148u;
    // 7F456148: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45614C:
    ctx->pc = 0x7F45614Cu;
    // 7F45614C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456150:
    ctx->pc = 0x7F456150u;
    // 7F456150: stb     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456154:
    ctx->pc = 0x7F456154u;
    // 7F456154: lbz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456158:
    ctx->pc = 0x7F456158u;
    // 7F456158: stb     r0, 37(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45615C:
    ctx->pc = 0x7F45615Cu;
    // 7F45615C: lbz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F456160:
    ctx->pc = 0x7F456160u;
    // 7F456160: stb     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456164:
    ctx->pc = 0x7F456164u;
    // 7F456164: sth     r5, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456168:
    ctx->pc = 0x7F456168u;
    // 7F456168: sth     r5, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45616C:
    ctx->pc = 0x7F45616Cu;
    // 7F45616C: sth     r5, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456170:
    ctx->pc = 0x7F456170u;
    // 7F456170: b       0x7F45618C
    {
            goto label_7F45618C;
    }

label_7F456174:
    ctx->pc = 0x7F456174u;
    ctx->downcount -= 6;
    // 7F456174: sth     r5, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456178:
    ctx->pc = 0x7F456178u;
    // 7F456178: sth     r5, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45617C:
    ctx->pc = 0x7F45617Cu;
    // 7F45617C: sth     r5, 30(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456180:
    ctx->pc = 0x7F456180u;
    // 7F456180: sth     r5, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456184:
    ctx->pc = 0x7F456184u;
    // 7F456184: sth     r5, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456188:
    ctx->pc = 0x7F456188u;
    // 7F456188: sth     r5, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45618C:
    ctx->pc = 0x7F45618Cu;
    ctx->downcount -= 16;
    // 7F45618C: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F456190:
    ctx->pc = 0x7F456190u;
    // 7F456190: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456194:
    ctx->pc = 0x7F456194u;
    // 7F456194: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F456198:
    ctx->pc = 0x7F456198u;
    // 7F456198: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F45619C:
    ctx->pc = 0x7F45619Cu;
    // 7F45619C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4561A0:
    ctx->pc = 0x7F4561A0u;
    ctx->downcount -= 5;
    // 7F4561A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4561A4:
    ctx->pc = 0x7F4561A4u;
    // 7F4561A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4561A8:
    ctx->pc = 0x7F4561A8u;
    // 7F4561A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4561AC:
    ctx->pc = 0x7F4561ACu;
    // 7F4561AC: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4561B0:
    ctx->pc = 0x7F4561B0u;
    // 7F4561B0: bl      0x7F3C2440
    {
            ctx->lr = 0x7F4561B4u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F4561B4:
    ctx->pc = 0x7F4561B4u;
    ctx->downcount -= 5;
    // 7F4561B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4561B8:
    ctx->pc = 0x7F4561B8u;
    // 7F4561B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4561BC:
    ctx->pc = 0x7F4561BCu;
    // 7F4561BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4561C0:
    ctx->pc = 0x7F4561C0u;
    // 7F4561C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4561C4:
    ctx->pc = 0x7F4561C4u;
    ctx->downcount -= 6;
    // 7F4561C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4561C8:
    ctx->pc = 0x7F4561C8u;
    // 7F4561C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4561CC:
    ctx->pc = 0x7F4561CCu;
    // 7F4561CC: cmpwi   r4, 4
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

label_7F4561D0:
    ctx->pc = 0x7F4561D0u;
    // 7F4561D0: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4561D4:
    ctx->pc = 0x7F4561D4u;
    // 7F4561D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4561D8:
    ctx->pc = 0x7F4561D8u;
    // 7F4561D8: bc    12, 2, 0x7F45626C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45626C;
        }
    }

label_7F4561DC:
    ctx->pc = 0x7F4561DCu;
    ctx->downcount -= 1;
    // 7F4561DC: bc    4, 0, 0x7F456204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456204;
        }
    }

label_7F4561E0:
    ctx->pc = 0x7F4561E0u;
    ctx->downcount -= 2;
    // 7F4561E0: cmpwi   r4, 1
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

label_7F4561E4:
    ctx->pc = 0x7F4561E4u;
    // 7F4561E4: bc    12, 2, 0x7F456238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456238;
        }
    }

label_7F4561E8:
    ctx->pc = 0x7F4561E8u;
    ctx->downcount -= 1;
    // 7F4561E8: bc    4, 0, 0x7F4561F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4561F8;
        }
    }

label_7F4561EC:
    ctx->pc = 0x7F4561ECu;
    ctx->downcount -= 2;
    // 7F4561EC: cmpwi   r4, 0
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

label_7F4561F0:
    ctx->pc = 0x7F4561F0u;
    // 7F4561F0: bc    4, 0, 0x7F456224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456224;
        }
    }

label_7F4561F4:
    ctx->pc = 0x7F4561F4u;
    ctx->downcount -= 1;
    // 7F4561F4: b       0x7F456294
    {
            goto label_7F456294;
    }

label_7F4561F8:
    ctx->pc = 0x7F4561F8u;
    ctx->downcount -= 2;
    // 7F4561F8: cmpwi   r4, 3
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

label_7F4561FC:
    ctx->pc = 0x7F4561FCu;
    // 7F4561FC: bc    4, 0, 0x7F45625C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45625C;
        }
    }

label_7F456200:
    ctx->pc = 0x7F456200u;
    ctx->downcount -= 1;
    // 7F456200: b       0x7F45624C
    {
            goto label_7F45624C;
    }

label_7F456204:
    ctx->pc = 0x7F456204u;
    ctx->downcount -= 4;
    // 7F456204: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F456208:
    ctx->pc = 0x7F456208u;
    // 7F456208: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F45620C:
    ctx->pc = 0x7F45620Cu;
    // 7F45620C: cmpw    r4, r0
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

label_7F456210:
    ctx->pc = 0x7F456210u;
    // 7F456210: bc    12, 2, 0x7F456284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456284;
        }
    }

label_7F456214:
    ctx->pc = 0x7F456214u;
    ctx->downcount -= 1;
    // 7F456214: bc    4, 0, 0x7F456294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456294;
        }
    }

label_7F456218:
    ctx->pc = 0x7F456218u;
    ctx->downcount -= 2;
    // 7F456218: cmpwi   r4, 6
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

label_7F45621C:
    ctx->pc = 0x7F45621Cu;
    // 7F45621C: bc    4, 0, 0x7F456294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456294;
        }
    }

label_7F456220:
    ctx->pc = 0x7F456220u;
    ctx->downcount -= 1;
    // 7F456220: b       0x7F456278
    {
            goto label_7F456278;
    }

label_7F456224:
    ctx->pc = 0x7F456224u;
    ctx->downcount -= 5;
    // 7F456224: lwz     r3, 156(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456228:
    ctx->pc = 0x7F456228u;
    // 7F456228: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45622C:
    ctx->pc = 0x7F45622Cu;
    // 7F45622C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F456230:
    ctx->pc = 0x7F456230u;
    // 7F456230: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456234:
    ctx->pc = 0x7F456234u;
    // 7F456234: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F456238:
    ctx->pc = 0x7F456238u;
    ctx->downcount -= 5;
    // 7F456238: lwz     r3, 156(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45623C:
    ctx->pc = 0x7F45623Cu;
    // 7F45623C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456240:
    ctx->pc = 0x7F456240u;
    // 7F456240: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F456244:
    ctx->pc = 0x7F456244u;
    // 7F456244: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456248:
    ctx->pc = 0x7F456248u;
    // 7F456248: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F45624C:
    ctx->pc = 0x7F45624Cu;
    ctx->downcount -= 3;
    // 7F45624C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F456250:
    ctx->pc = 0x7F456250u;
    // 7F456250: stw     r0, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456254:
    ctx->pc = 0x7F456254u;
    // 7F456254: bl      0x7F455C54
    {
            ctx->lr = 0x7F456258u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455C54u;
                return;
            }
            goto label_7F455C54;
    }

label_7F456258:
    ctx->pc = 0x7F456258u;
    ctx->downcount -= 1;
    // 7F456258: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F45625C:
    ctx->pc = 0x7F45625Cu;
    ctx->downcount -= 3;
    // 7F45625C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F456260:
    ctx->pc = 0x7F456260u;
    // 7F456260: stw     r0, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456264:
    ctx->pc = 0x7F456264u;
    // 7F456264: bl      0x7F455CC0
    {
            ctx->lr = 0x7F456268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455CC0u;
                return;
            }
            goto label_7F455CC0;
    }

label_7F456268:
    ctx->pc = 0x7F456268u;
    ctx->downcount -= 1;
    // 7F456268: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F45626C:
    ctx->pc = 0x7F45626Cu;
    ctx->downcount -= 3;
    // 7F45626C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F456270:
    ctx->pc = 0x7F456270u;
    // 7F456270: stw     r0, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456274:
    ctx->pc = 0x7F456274u;
    // 7F456274: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F456278:
    ctx->pc = 0x7F456278u;
    ctx->downcount -= 3;
    // 7F456278: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F45627C:
    ctx->pc = 0x7F45627Cu;
    // 7F45627C: stw     r0, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456280:
    ctx->pc = 0x7F456280u;
    // 7F456280: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F456284:
    ctx->pc = 0x7F456284u;
    ctx->downcount -= 3;
    // 7F456284: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F456288:
    ctx->pc = 0x7F456288u;
    // 7F456288: addi    r4, r6, 68
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(68);

label_7F45628C:
    ctx->pc = 0x7F45628Cu;
    // 7F45628C: bl      0x80025A3C
    {
            ctx->lr = 0x7F456290u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F456290:
    ctx->pc = 0x7F456290u;
    ctx->downcount -= 1;
    // 7F456290: b       0x7F4562A0
    {
            goto label_7F4562A0;
    }

label_7F456294:
    ctx->pc = 0x7F456294u;
    ctx->downcount -= 2;
    // 7F456294: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F456298:
    ctx->pc = 0x7F456298u;
    // 7F456298: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F45629Cu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F45629C:
    ctx->pc = 0x7F45629Cu;
    ctx->downcount -= 1;
    // 7F45629C: b       0x7F4562A4
    {
            goto label_7F4562A4;
    }

label_7F4562A0:
    ctx->pc = 0x7F4562A0u;
    ctx->downcount -= 1;
    // 7F4562A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4562A4:
    ctx->pc = 0x7F4562A4u;
    ctx->downcount -= 5;
    // 7F4562A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4562A8:
    ctx->pc = 0x7F4562A8u;
    // 7F4562A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4562AC:
    ctx->pc = 0x7F4562ACu;
    // 7F4562AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4562B0:
    ctx->pc = 0x7F4562B0u;
    // 7F4562B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4562B4:
    ctx->pc = 0x7F4562B4u;
    ctx->downcount -= 25;
    // 7F4562B4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4562B8:
    ctx->pc = 0x7F4562B8u;
    // 7F4562B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4562BC:
    ctx->pc = 0x7F4562BCu;
    // 7F4562BC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4562C0:
    ctx->pc = 0x7F4562C0u;
    // 7F4562C0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4562C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F4562C4:
    ctx->pc = 0x7F4562C4u;
    // 7F4562C4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4562C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F4562C4u);
        if (ctx->exception) return;
    }

label_7F4562C8:
    ctx->pc = 0x7F4562C8u;
    // 7F4562C8: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4562C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F4562CC:
    ctx->pc = 0x7F4562CCu;
    // 7F4562CC: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4562CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F4562CCu);
        if (ctx->exception) return;
    }

label_7F4562D0:
    ctx->pc = 0x7F4562D0u;
    // 7F4562D0: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4562D4:
    ctx->pc = 0x7F4562D4u;
    // 7F4562D4: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4562D4u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F4562D8:
    ctx->pc = 0x7F4562D8u;
    // 7F4562D8: cmplwi  r4, 0x0000
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

label_7F4562DC:
    ctx->pc = 0x7F4562DCu;
    // 7F4562DC: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4562DCu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F4562E0:
    ctx->pc = 0x7F4562E0u;
    // 7F4562E0: lbz     r28, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[28] = mem_read8(ctx, ea);
    }

label_7F4562E4:
    ctx->pc = 0x7F4562E4u;
    // 7F4562E4: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4562E8:
    ctx->pc = 0x7F4562E8u;
    // 7F4562E8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F4562EC:
    ctx->pc = 0x7F4562ECu;
    // 7F4562EC: bc    4, 2, 0x7F4562F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4562F8;
        }
    }

label_7F4562F0:
    ctx->pc = 0x7F4562F0u;
    ctx->downcount -= 2;
    // 7F4562F0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4562F4:
    ctx->pc = 0x7F4562F4u;
    // 7F4562F4: b       0x7F456710
    {
            goto label_7F456710;
    }

label_7F4562F8:
    ctx->pc = 0x7F4562F8u;
    ctx->downcount -= 3;
    // 7F4562F8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4562FC:
    ctx->pc = 0x7F4562FCu;
    // 7F4562FC: addi    r4, r27, 68
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(68);

label_7F456300:
    ctx->pc = 0x7F456300u;
    // 7F456300: bl      0x80025A3C
    {
            ctx->lr = 0x7F456304u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F456304:
    ctx->pc = 0x7F456304u;
    ctx->downcount -= 8;
    // 7F456304: stfs     f30, 48(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F456304u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F456308:
    ctx->pc = 0x7F456308u;
    // 7F456308: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F45630C:
    ctx->pc = 0x7F45630Cu;
    // 7F45630C: addi    r0, r3, -23184
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23184);

label_7F456310:
    ctx->pc = 0x7F456310u;
    // 7F456310: stfs     f31, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F456310u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F456314:
    ctx->pc = 0x7F456314u;
    // 7F456314: stb     r29, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F456318:
    ctx->pc = 0x7F456318u;
    // 7F456318: stw     r0, 136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45631C:
    ctx->pc = 0x7F45631Cu;
    // 7F45631C: lwz     r3, 136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456320:
    ctx->pc = 0x7F456320u;
    // 7F456320: bl      0x7F3B6420
    {
            ctx->lr = 0x7F456324u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F456324:
    ctx->pc = 0x7F456324u;
    ctx->downcount -= 7;
    // 7F456324: lis     r5, 91
    ctx->gpr[5] = ((u32)(s32)(91) << 16);

label_7F456328:
    ctx->pc = 0x7F456328u;
    // 7F456328: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45632C:
    ctx->pc = 0x7F45632Cu;
    // 7F45632C: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_7F456330:
    ctx->pc = 0x7F456330u;
    // 7F456330: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F456334:
    ctx->pc = 0x7F456334u;
    // 7F456334: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F456338:
    ctx->pc = 0x7F456338u;
    // 7F456338: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45633C:
    ctx->pc = 0x7F45633Cu;
    // 7F45633C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F456340u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F456340:
    ctx->pc = 0x7F456340u;
    ctx->downcount -= 3;
    // 7F456340: or.   r31, r3, r3
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

label_7F456344:
    ctx->pc = 0x7F456344u;
    // 7F456344: stw     r31, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456348:
    ctx->pc = 0x7F456348u;
    // 7F456348: bc    4, 2, 0x7F456354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456354;
        }
    }

label_7F45634C:
    ctx->pc = 0x7F45634Cu;
    ctx->downcount -= 2;
    // 7F45634C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F456350:
    ctx->pc = 0x7F456350u;
    // 7F456350: b       0x7F456710
    {
            goto label_7F456710;
    }

label_7F456354:
    ctx->pc = 0x7F456354u;
    ctx->downcount -= 2;
    // 7F456354: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F456358:
    ctx->pc = 0x7F456358u;
    // 7F456358: bl      0x7F3C2534
    {
            ctx->lr = 0x7F45635Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F45635C:
    ctx->pc = 0x7F45635Cu;
    ctx->downcount -= 22;
    // 7F45635C: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F456360:
    ctx->pc = 0x7F456360u;
    // 7F456360: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456364:
    ctx->pc = 0x7F456364u;
    // 7F456364: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456368:
    ctx->pc = 0x7F456368u;
    // 7F456368: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F45636C:
    ctx->pc = 0x7F45636Cu;
    // 7F45636C: addi    r4, r3, -7352
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7352);

label_7F456370:
    ctx->pc = 0x7F456370u;
    // 7F456370: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F456374:
    ctx->pc = 0x7F456374u;
    // 7F456374: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456378:
    ctx->pc = 0x7F456378u;
    // 7F456378: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F45637C:
    ctx->pc = 0x7F45637Cu;
    // 7F45637C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45637Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456380:
    ctx->pc = 0x7F456380u;
    // 7F456380: addi    r5, r3, -6704
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F456384:
    ctx->pc = 0x7F456384u;
    // 7F456384: lwz     r30, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F456388:
    ctx->pc = 0x7F456388u;
    // 7F456388: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45638C:
    ctx->pc = 0x7F45638Cu;
    // 7F45638C: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F456390:
    ctx->pc = 0x7F456390u;
    // 7F456390: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F456394:
    ctx->pc = 0x7F456394u;
    // 7F456394: stfs     f0, 152(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F456394u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F456398:
    ctx->pc = 0x7F456398u;
    // 7F456398: stw     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45639C:
    ctx->pc = 0x7F45639Cu;
    // 7F45639C: stw     r0, 64(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4563A0:
    ctx->pc = 0x7F4563A0u;
    // 7F4563A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4563A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4563A4:
    ctx->pc = 0x7F4563A4u;
    // 7F4563A4: lfs     f0, 152(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4563A4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4563A8:
    ctx->pc = 0x7F4563A8u;
    // 7F4563A8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4563A8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4563AC:
    ctx->pc = 0x7F4563ACu;
    // 7F4563AC: stfs     f0, 148(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4563ACu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4563B0:
    ctx->pc = 0x7F4563B0u;
    // 7F4563B0: bl      0x7F4555B0
    {
            ctx->lr = 0x7F4563B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F4563B4:
    ctx->pc = 0x7F4563B4u;
    ctx->downcount -= 6;
    // 7F4563B4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4563B8:
    ctx->pc = 0x7F4563B8u;
    // 7F4563B8: stw     r3, 132(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4563BC:
    ctx->pc = 0x7F4563BCu;
    // 7F4563BC: lfs     f1, -7312(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4563BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4563C0:
    ctx->pc = 0x7F4563C0u;
    // 7F4563C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4563C4:
    ctx->pc = 0x7F4563C4u;
    // 7F4563C4: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F4563C8:
    ctx->pc = 0x7F4563C8u;
    // 7F4563C8: bl      0x7F455620
    {
            ctx->lr = 0x7F4563CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F4563CC:
    ctx->pc = 0x7F4563CCu;
    ctx->downcount -= 7;
    // 7F4563CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4563D0:
    ctx->pc = 0x7F4563D0u;
    // 7F4563D0: stfs     f1, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4563D0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4563D4:
    ctx->pc = 0x7F4563D4u;
    // 7F4563D4: addi    r4, r3, -7340
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7340);

label_7F4563D8:
    ctx->pc = 0x7F4563D8u;
    // 7F4563D8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F4563DC:
    ctx->pc = 0x7F4563DCu;
    // 7F4563DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4563DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4563E0:
    ctx->pc = 0x7F4563E0u;
    // 7F4563E0: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F4563E4:
    ctx->pc = 0x7F4563E4u;
    // 7F4563E4: bl      0x7F455620
    {
            ctx->lr = 0x7F4563E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F4563E8:
    ctx->pc = 0x7F4563E8u;
    ctx->downcount -= 69;
    // 7F4563E8: stfs     f1, 144(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4563E8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4563EC:
    ctx->pc = 0x7F4563ECu;
    // 7F4563EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4563F0:
    ctx->pc = 0x7F4563F0u;
    // 7F4563F0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4563F4:
    ctx->pc = 0x7F4563F4u;
    // 7F4563F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4563F8:
    ctx->pc = 0x7F4563F8u;
    // 7F4563F8: lwzu     r0, 12832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12832);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F4563FC:
    ctx->pc = 0x7F4563FCu;
    // 7F4563FC: addi    r5, r4, -7336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7336);

label_7F456400:
    ctx->pc = 0x7F456400u;
    // 7F456400: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456400u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456404:
    ctx->pc = 0x7F456404u;
    // 7F456404: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F456408:
    ctx->pc = 0x7F456408u;
    // 7F456408: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45640C:
    ctx->pc = 0x7F45640Cu;
    // 7F45640C: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F456410:
    ctx->pc = 0x7F456410u;
    // 7F456410: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456414:
    ctx->pc = 0x7F456414u;
    // 7F456414: addi    r0, r4, -28673
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28673);

label_7F456418:
    ctx->pc = 0x7F456418u;
    // 7F456418: stw     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45641C:
    ctx->pc = 0x7F45641Cu;
    // 7F45641C: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456420:
    ctx->pc = 0x7F456420u;
    // 7F456420: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456424:
    ctx->pc = 0x7F456424u;
    // 7F456424: stw     r7, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456428:
    ctx->pc = 0x7F456428u;
    // 7F456428: stw     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45642C:
    ctx->pc = 0x7F45642Cu;
    // 7F45642C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456430:
    ctx->pc = 0x7F456430u;
    // 7F456430: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456434:
    ctx->pc = 0x7F456434u;
    // 7F456434: stw     r7, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456438:
    ctx->pc = 0x7F456438u;
    // 7F456438: stw     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45643C:
    ctx->pc = 0x7F45643Cu;
    // 7F45643C: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456440:
    ctx->pc = 0x7F456440u;
    // 7F456440: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456444:
    ctx->pc = 0x7F456444u;
    // 7F456444: stw     r7, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456448:
    ctx->pc = 0x7F456448u;
    // 7F456448: stw     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45644C:
    ctx->pc = 0x7F45644Cu;
    // 7F45644C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456450:
    ctx->pc = 0x7F456450u;
    // 7F456450: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456454:
    ctx->pc = 0x7F456454u;
    // 7F456454: stw     r7, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456458:
    ctx->pc = 0x7F456458u;
    // 7F456458: stw     r4, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45645C:
    ctx->pc = 0x7F45645Cu;
    // 7F45645C: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456460:
    ctx->pc = 0x7F456460u;
    // 7F456460: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456464:
    ctx->pc = 0x7F456464u;
    // 7F456464: stw     r7, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456468:
    ctx->pc = 0x7F456468u;
    // 7F456468: stw     r4, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45646C:
    ctx->pc = 0x7F45646Cu;
    // 7F45646C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456470:
    ctx->pc = 0x7F456470u;
    // 7F456470: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456474:
    ctx->pc = 0x7F456474u;
    // 7F456474: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456478:
    ctx->pc = 0x7F456478u;
    // 7F456478: stw     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45647C:
    ctx->pc = 0x7F45647Cu;
    // 7F45647C: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456480:
    ctx->pc = 0x7F456480u;
    // 7F456480: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456484:
    ctx->pc = 0x7F456484u;
    // 7F456484: stw     r7, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456488:
    ctx->pc = 0x7F456488u;
    // 7F456488: stw     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45648C:
    ctx->pc = 0x7F45648Cu;
    // 7F45648C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F456490:
    ctx->pc = 0x7F456490u;
    // 7F456490: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456494:
    ctx->pc = 0x7F456494u;
    // 7F456494: stw     r7, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F456498:
    ctx->pc = 0x7F456498u;
    // 7F456498: stw     r4, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F45649C:
    ctx->pc = 0x7F45649Cu;
    // 7F45649C: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4564A0:
    ctx->pc = 0x7F4564A0u;
    // 7F4564A0: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4564A4:
    ctx->pc = 0x7F4564A4u;
    // 7F4564A4: stw     r7, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4564A8:
    ctx->pc = 0x7F4564A8u;
    // 7F4564A8: stw     r4, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4564AC:
    ctx->pc = 0x7F4564ACu;
    // 7F4564AC: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4564B0:
    ctx->pc = 0x7F4564B0u;
    // 7F4564B0: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4564B4:
    ctx->pc = 0x7F4564B4u;
    // 7F4564B4: stw     r7, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4564B8:
    ctx->pc = 0x7F4564B8u;
    // 7F4564B8: stw     r4, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4564BC:
    ctx->pc = 0x7F4564BCu;
    // 7F4564BC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4564C0:
    ctx->pc = 0x7F4564C0u;
    // 7F4564C0: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4564C4:
    ctx->pc = 0x7F4564C4u;
    // 7F4564C4: stw     r4, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4564C8:
    ctx->pc = 0x7F4564C8u;
    // 7F4564C8: stw     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4564CC:
    ctx->pc = 0x7F4564CCu;
    // 7F4564CC: sth     r6, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F4564D0:
    ctx->pc = 0x7F4564D0u;
    // 7F4564D0: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4564D0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4564D4:
    ctx->pc = 0x7F4564D4u;
    // 7F4564D4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4564D4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4564D8:
    ctx->pc = 0x7F4564D8u;
    // 7F4564D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4564D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4564DC:
    ctx->pc = 0x7F4564DCu;
    // 7F4564DC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4564DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4564E0:
    ctx->pc = 0x7F4564E0u;
    // 7F4564E0: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4564E4:
    ctx->pc = 0x7F4564E4u;
    // 7F4564E4: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F4564E8:
    ctx->pc = 0x7F4564E8u;
    // 7F4564E8: sth     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F4564EC:
    ctx->pc = 0x7F4564ECu;
    // 7F4564EC: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4564F0:
    ctx->pc = 0x7F4564F0u;
    // 7F4564F0: lwz     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4564F4:
    ctx->pc = 0x7F4564F4u;
    // 7F4564F4: cmpwi   r0, 0
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

label_7F4564F8:
    ctx->pc = 0x7F4564F8u;
    // 7F4564F8: bc    4, 1, 0x7F45650C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45650C;
        }
    }

label_7F4564FC:
    ctx->pc = 0x7F4564FCu;
    ctx->downcount -= 4;
    // 7F4564FC: stb     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F456500:
    ctx->pc = 0x7F456500u;
    // 7F456500: stb     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F456504:
    ctx->pc = 0x7F456504u;
    // 7F456504: stb     r6, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F456508:
    ctx->pc = 0x7F456508u;
    // 7F456508: b       0x7F456518
    {
            goto label_7F456518;
    }

label_7F45650C:
    ctx->pc = 0x7F45650Cu;
    ctx->downcount -= 3;
    // 7F45650C: stb     r28, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456510:
    ctx->pc = 0x7F456510u;
    // 7F456510: stb     r28, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456514:
    ctx->pc = 0x7F456514u;
    // 7F456514: stb     r28, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456518:
    ctx->pc = 0x7F456518u;
    ctx->downcount -= 20;
    // 7F456518: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F45651C:
    ctx->pc = 0x7F45651Cu;
    // 7F45651C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456520:
    ctx->pc = 0x7F456520u;
    // 7F456520: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456524:
    ctx->pc = 0x7F456524u;
    // 7F456524: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F456528:
    ctx->pc = 0x7F456528u;
    // 7F456528: addi    r4, r3, -7336
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7336);

label_7F45652C:
    ctx->pc = 0x7F45652Cu;
    // 7F45652C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F456530:
    ctx->pc = 0x7F456530u;
    // 7F456530: sth     r5, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456534:
    ctx->pc = 0x7F456534u;
    // 7F456534: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F456538:
    ctx->pc = 0x7F456538u;
    // 7F456538: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456538u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45653C:
    ctx->pc = 0x7F45653Cu;
    // 7F45653C: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F45653Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456540:
    ctx->pc = 0x7F456540u;
    // 7F456540: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456540u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F456544:
    ctx->pc = 0x7F456544u;
    // 7F456544: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456544u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456548:
    ctx->pc = 0x7F456548u;
    // 7F456548: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456548u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45654C:
    ctx->pc = 0x7F45654Cu;
    // 7F45654C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456550:
    ctx->pc = 0x7F456550u;
    // 7F456550: sth     r3, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F456554:
    ctx->pc = 0x7F456554u;
    // 7F456554: sth     r5, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F456558:
    ctx->pc = 0x7F456558u;
    // 7F456558: sth     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45655C:
    ctx->pc = 0x7F45655Cu;
    // 7F45655C: lwz     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456560:
    ctx->pc = 0x7F456560u;
    // 7F456560: cmpwi   r0, 0
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

label_7F456564:
    ctx->pc = 0x7F456564u;
    // 7F456564: bc    4, 1, 0x7F45657C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45657C;
        }
    }

label_7F456568:
    ctx->pc = 0x7F456568u;
    ctx->downcount -= 5;
    // 7F456568: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F45656C:
    ctx->pc = 0x7F45656Cu;
    // 7F45656C: stb     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456570:
    ctx->pc = 0x7F456570u;
    // 7F456570: stb     r0, 13(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456574:
    ctx->pc = 0x7F456574u;
    // 7F456574: stb     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456578:
    ctx->pc = 0x7F456578u;
    // 7F456578: b       0x7F456588
    {
            goto label_7F456588;
    }

label_7F45657C:
    ctx->pc = 0x7F45657Cu;
    ctx->downcount -= 3;
    // 7F45657C: stb     r28, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456580:
    ctx->pc = 0x7F456580u;
    // 7F456580: stb     r28, 13(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456584:
    ctx->pc = 0x7F456584u;
    // 7F456584: stb     r28, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456588:
    ctx->pc = 0x7F456588u;
    ctx->downcount -= 46;
    // 7F456588: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F45658C:
    ctx->pc = 0x7F45658Cu;
    // 7F45658C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456590:
    ctx->pc = 0x7F456590u;
    // 7F456590: stb     r7, 15(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F456594:
    ctx->pc = 0x7F456594u;
    // 7F456594: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F456598:
    ctx->pc = 0x7F456598u;
    // 7F456598: addi    r5, r3, -7336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7336);

label_7F45659C:
    ctx->pc = 0x7F45659Cu;
    // 7F45659C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F4565A0:
    ctx->pc = 0x7F4565A0u;
    // 7F4565A0: sth     r6, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F4565A4:
    ctx->pc = 0x7F4565A4u;
    // 7F4565A4: li      r3, 4095
    ctx->gpr[3] = (u32)(s32)(4095);

label_7F4565A8:
    ctx->pc = 0x7F4565A8u;
    // 7F4565A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4565A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4565AC:
    ctx->pc = 0x7F4565ACu;
    // 7F4565AC: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4565ACu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4565B0:
    ctx->pc = 0x7F4565B0u;
    // 7F4565B0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4565B0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4565B4:
    ctx->pc = 0x7F4565B4u;
    // 7F4565B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4565B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4565B8:
    ctx->pc = 0x7F4565B8u;
    // 7F4565B8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4565B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4565BC:
    ctx->pc = 0x7F4565BCu;
    // 7F4565BC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4565C0:
    ctx->pc = 0x7F4565C0u;
    // 7F4565C0: sth     r0, 30(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4565C4:
    ctx->pc = 0x7F4565C4u;
    // 7F4565C4: sth     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F4565C8:
    ctx->pc = 0x7F4565C8u;
    // 7F4565C8: sth     r3, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F4565CC:
    ctx->pc = 0x7F4565CCu;
    // 7F4565CC: stb     r28, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4565D0:
    ctx->pc = 0x7F4565D0u;
    // 7F4565D0: stb     r28, 25(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4565D4:
    ctx->pc = 0x7F4565D4u;
    // 7F4565D4: stb     r28, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4565D8:
    ctx->pc = 0x7F4565D8u;
    // 7F4565D8: stb     r7, 27(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F4565DC:
    ctx->pc = 0x7F4565DCu;
    // 7F4565DC: sth     r4, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F4565E0:
    ctx->pc = 0x7F4565E0u;
    // 7F4565E0: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4565E0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4565E4:
    ctx->pc = 0x7F4565E4u;
    // 7F4565E4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4565E4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4565E8:
    ctx->pc = 0x7F4565E8u;
    // 7F4565E8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4565E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4565EC:
    ctx->pc = 0x7F4565ECu;
    // 7F4565EC: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4565ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4565F0:
    ctx->pc = 0x7F4565F0u;
    // 7F4565F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4565F4:
    ctx->pc = 0x7F4565F4u;
    // 7F4565F4: sth     r0, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4565F8:
    ctx->pc = 0x7F4565F8u;
    // 7F4565F8: sth     r4, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F4565FC:
    ctx->pc = 0x7F4565FCu;
    // 7F4565FC: sth     r3, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F456600:
    ctx->pc = 0x7F456600u;
    // 7F456600: stb     r28, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456604:
    ctx->pc = 0x7F456604u;
    // 7F456604: stb     r28, 37(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456608:
    ctx->pc = 0x7F456608u;
    // 7F456608: stb     r28, 38(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F45660C:
    ctx->pc = 0x7F45660Cu;
    // 7F45660C: stb     r7, 39(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F456610:
    ctx->pc = 0x7F456610u;
    // 7F456610: sth     r6, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F456614:
    ctx->pc = 0x7F456614u;
    // 7F456614: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F456614u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456618:
    ctx->pc = 0x7F456618u;
    // 7F456618: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456618u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F45661C:
    ctx->pc = 0x7F45661Cu;
    // 7F45661C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45661Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456620:
    ctx->pc = 0x7F456620u;
    // 7F456620: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456624:
    ctx->pc = 0x7F456624u;
    // 7F456624: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456628:
    ctx->pc = 0x7F456628u;
    // 7F456628: sth     r0, 54(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45662C:
    ctx->pc = 0x7F45662Cu;
    // 7F45662C: sth     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F456630:
    ctx->pc = 0x7F456630u;
    // 7F456630: sth     r3, 58(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F456634:
    ctx->pc = 0x7F456634u;
    // 7F456634: lwz     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456638:
    ctx->pc = 0x7F456638u;
    // 7F456638: cmpwi   r0, 0
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

label_7F45663C:
    ctx->pc = 0x7F45663Cu;
    // 7F45663C: bc    4, 1, 0x7F456650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456650;
        }
    }

label_7F456640:
    ctx->pc = 0x7F456640u;
    ctx->downcount -= 4;
    // 7F456640: stb     r6, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F456644:
    ctx->pc = 0x7F456644u;
    // 7F456644: stb     r6, 49(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F456648:
    ctx->pc = 0x7F456648u;
    // 7F456648: stb     r6, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45664C:
    ctx->pc = 0x7F45664Cu;
    // 7F45664C: b       0x7F45665C
    {
            goto label_7F45665C;
    }

label_7F456650:
    ctx->pc = 0x7F456650u;
    ctx->downcount -= 3;
    // 7F456650: stb     r28, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456654:
    ctx->pc = 0x7F456654u;
    // 7F456654: stb     r28, 49(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F456658:
    ctx->pc = 0x7F456658u;
    // 7F456658: stb     r28, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F45665C:
    ctx->pc = 0x7F45665Cu;
    ctx->downcount -= 18;
    // 7F45665C: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F456660:
    ctx->pc = 0x7F456660u;
    // 7F456660: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456664:
    ctx->pc = 0x7F456664u;
    // 7F456664: stb     r0, 51(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(51);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456668:
    ctx->pc = 0x7F456668u;
    // 7F456668: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F45666C:
    ctx->pc = 0x7F45666Cu;
    // 7F45666C: lfs     f1, -7336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45666Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456670:
    ctx->pc = 0x7F456670u;
    // 7F456670: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F456674:
    ctx->pc = 0x7F456674u;
    // 7F456674: sth     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F456678:
    ctx->pc = 0x7F456678u;
    // 7F456678: lfs     f0, 140(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F456678u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45667C:
    ctx->pc = 0x7F45667Cu;
    // 7F45667C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45667Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F456680:
    ctx->pc = 0x7F456680u;
    // 7F456680: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456680u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456684:
    ctx->pc = 0x7F456684u;
    // 7F456684: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456688:
    ctx->pc = 0x7F456688u;
    // 7F456688: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45668C:
    ctx->pc = 0x7F45668Cu;
    // 7F45668C: sth     r3, 66(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F456690:
    ctx->pc = 0x7F456690u;
    // 7F456690: sth     r4, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F456694:
    ctx->pc = 0x7F456694u;
    // 7F456694: sth     r0, 70(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456698:
    ctx->pc = 0x7F456698u;
    // 7F456698: lwz     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45669C:
    ctx->pc = 0x7F45669Cu;
    // 7F45669C: cmpwi   r0, 0
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

label_7F4566A0:
    ctx->pc = 0x7F4566A0u;
    // 7F4566A0: bc    4, 1, 0x7F4566B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4566B8;
        }
    }

label_7F4566A4:
    ctx->pc = 0x7F4566A4u;
    ctx->downcount -= 5;
    // 7F4566A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4566A8:
    ctx->pc = 0x7F4566A8u;
    // 7F4566A8: stb     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4566AC:
    ctx->pc = 0x7F4566ACu;
    // 7F4566AC: stb     r0, 61(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4566B0:
    ctx->pc = 0x7F4566B0u;
    // 7F4566B0: stb     r0, 62(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4566B4:
    ctx->pc = 0x7F4566B4u;
    // 7F4566B4: b       0x7F4566C4
    {
            goto label_7F4566C4;
    }

label_7F4566B8:
    ctx->pc = 0x7F4566B8u;
    ctx->downcount -= 3;
    // 7F4566B8: stb     r28, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4566BC:
    ctx->pc = 0x7F4566BCu;
    // 7F4566BC: stb     r28, 61(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(61);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4566C0:
    ctx->pc = 0x7F4566C0u;
    // 7F4566C0: stb     r28, 62(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F4566C4:
    ctx->pc = 0x7F4566C4u;
    ctx->downcount -= 6;
    // 7F4566C4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F4566C8:
    ctx->pc = 0x7F4566C8u;
    // 7F4566C8: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F4566CC:
    ctx->pc = 0x7F4566CCu;
    // 7F4566CC: stb     r0, 63(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(63);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4566D0:
    ctx->pc = 0x7F4566D0u;
    // 7F4566D0: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4566D4:
    ctx->pc = 0x7F4566D4u;
    // 7F4566D4: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4566D8:
    ctx->pc = 0x7F4566D8u;
    // 7F4566D8: bl      0x8000519C
    {
            ctx->lr = 0x7F4566DCu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4566DC:
    ctx->pc = 0x7F4566DCu;
    ctx->downcount -= 4;
    // 7F4566DC: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4566E0:
    ctx->pc = 0x7F4566E0u;
    // 7F4566E0: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F4566E4:
    ctx->pc = 0x7F4566E4u;
    // 7F4566E4: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4566E8:
    ctx->pc = 0x7F4566E8u;
    // 7F4566E8: bl      0x8000519C
    {
            ctx->lr = 0x7F4566ECu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4566EC:
    ctx->pc = 0x7F4566ECu;
    ctx->downcount -= 8;
    // 7F4566EC: lwz     r5, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4566F0:
    ctx->pc = 0x7F4566F0u;
    // 7F4566F0: lis     r3, 32581
    ctx->gpr[3] = ((u32)(s32)(32581) << 16);

label_7F4566F4:
    ctx->pc = 0x7F4566F4u;
    // 7F4566F4: addi    r4, r3, 25028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25028);

label_7F4566F8:
    ctx->pc = 0x7F4566F8u;
    // 7F4566F8: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4566FC:
    ctx->pc = 0x7F4566FCu;
    // 7F4566FC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F456700:
    ctx->pc = 0x7F456700u;
    // 7F456700: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F456704:
    ctx->pc = 0x7F456704u;
    // 7F456704: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456708:
    ctx->pc = 0x7F456708u;
    // 7F456708: bl      0x7F3C8990
    {
            ctx->lr = 0x7F45670Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F45670C:
    ctx->pc = 0x7F45670Cu;
    ctx->downcount -= 1;
    // 7F45670C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F456710:
    ctx->pc = 0x7F456710u;
    ctx->downcount -= 20;
    // 7F456710: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456710u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F456710u);
        if (ctx->exception) return;
    }

label_7F456714:
    ctx->pc = 0x7F456714u;
    // 7F456714: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456714u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456718:
    ctx->pc = 0x7F456718u;
    // 7F456718: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456718u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F456718u);
        if (ctx->exception) return;
    }

label_7F45671C:
    ctx->pc = 0x7F45671Cu;
    // 7F45671C: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45671Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456720:
    ctx->pc = 0x7F456720u;
    // 7F456720: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F456724:
    ctx->pc = 0x7F456724u;
    // 7F456724: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456728:
    ctx->pc = 0x7F456728u;
    // 7F456728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45672C:
    ctx->pc = 0x7F45672Cu;
    // 7F45672C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F456730:
    ctx->pc = 0x7F456730u;
    // 7F456730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456734:
    ctx->pc = 0x7F456734u;
    ctx->downcount -= 25;
    // 7F456734: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456738:
    ctx->pc = 0x7F456738u;
    // 7F456738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45673C:
    ctx->pc = 0x7F45673Cu;
    // 7F45673C: li      r5, 240
    ctx->gpr[5] = (u32)(s32)(240);

label_7F456740:
    ctx->pc = 0x7F456740u;
    // 7F456740: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F456744:
    ctx->pc = 0x7F456744u;
    // 7F456744: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456748:
    ctx->pc = 0x7F456748u;
    // 7F456748: stfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F45674C:
    ctx->pc = 0x7F45674Cu;
    // 7F45674C: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F45674Cu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F456750:
    ctx->pc = 0x7F456750u;
    // 7F456750: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F456754:
    ctx->pc = 0x7F456754u;
    // 7F456754: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456754u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F456758:
    ctx->pc = 0x7F456758u;
    // 7F456758: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45675C:
    ctx->pc = 0x7F45675Cu;
    // 7F45675C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F456760:
    ctx->pc = 0x7F456760u;
    // 7F456760: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F456764:
    ctx->pc = 0x7F456764u;
    // 7F456764: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F456768:
    ctx->pc = 0x7F456768u;
    // 7F456768: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F45676C:
    ctx->pc = 0x7F45676Cu;
    // 7F45676C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F456770u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F456770:
    ctx->pc = 0x7F456770u;
    ctx->downcount -= 2;
    // 7F456770: or.   r31, r3, r3
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

label_7F456774:
    ctx->pc = 0x7F456774u;
    // 7F456774: bc    12, 2, 0x7F4567E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4567E4;
        }
    }

label_7F456778:
    ctx->pc = 0x7F456778u;
    ctx->downcount -= 5;
    // 7F456778: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F45677C:
    ctx->pc = 0x7F45677Cu;
    // 7F45677C: lis     r5, 32581
    ctx->gpr[5] = ((u32)(s32)(32581) << 16);

label_7F456780:
    ctx->pc = 0x7F456780u;
    // 7F456780: addi    r4, r4, 23896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23896);

label_7F456784:
    ctx->pc = 0x7F456784u;
    // 7F456784: addi    r5, r5, 24992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24992);

label_7F456788:
    ctx->pc = 0x7F456788u;
    // 7F456788: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F45678Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F45678C:
    ctx->pc = 0x7F45678Cu;
    ctx->downcount -= 16;
    // 7F45678C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456790:
    ctx->pc = 0x7F456790u;
    // 7F456790: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F456794:
    ctx->pc = 0x7F456794u;
    // 7F456794: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F456798:
    ctx->pc = 0x7F456798u;
    // 7F456798: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F456798u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F45679C:
    ctx->pc = 0x7F45679Cu;
    // 7F45679C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F4567A0:
    ctx->pc = 0x7F4567A0u;
    // 7F4567A0: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4567A0u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F4567A4:
    ctx->pc = 0x7F4567A4u;
    // 7F4567A4: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4567A8:
    ctx->pc = 0x7F4567A8u;
    // 7F4567A8: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F4567AC:
    ctx->pc = 0x7F4567ACu;
    // 7F4567AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4567B0:
    ctx->pc = 0x7F4567B0u;
    // 7F4567B0: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4567B4:
    ctx->pc = 0x7F4567B4u;
    // 7F4567B4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4567B8:
    ctx->pc = 0x7F4567B8u;
    // 7F4567B8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4567BC:
    ctx->pc = 0x7F4567BCu;
    // 7F4567BC: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4567C0:
    ctx->pc = 0x7F4567C0u;
    // 7F4567C0: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4567C4:
    ctx->pc = 0x7F4567C4u;
    // 7F4567C4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4567C8:
    ctx->pc = 0x7F4567C8u;
    // 7F4567C8: bl      0x7F4562B4
    {
            ctx->lr = 0x7F4567CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4562B4u;
                return;
            }
            goto label_7F4562B4;
    }

label_7F4567CC:
    ctx->pc = 0x7F4567CCu;
    ctx->downcount -= 2;
    // 7F4567CC: cmpwi   r3, 0
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

label_7F4567D0:
    ctx->pc = 0x7F4567D0u;
    // 7F4567D0: bc    4, 0, 0x7F4567E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4567E4;
        }
    }

label_7F4567D4:
    ctx->pc = 0x7F4567D4u;
    ctx->downcount -= 2;
    // 7F4567D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4567D8:
    ctx->pc = 0x7F4567D8u;
    // 7F4567D8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F4567DCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F4567DC:
    ctx->pc = 0x7F4567DCu;
    ctx->downcount -= 2;
    // 7F4567DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4567E0:
    ctx->pc = 0x7F4567E0u;
    // 7F4567E0: b       0x7F4567E8
    {
            goto label_7F4567E8;
    }

label_7F4567E4:
    ctx->pc = 0x7F4567E4u;
    ctx->downcount -= 1;
    // 7F4567E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4567E8:
    ctx->pc = 0x7F4567E8u;
    ctx->downcount -= 18;
    // 7F4567E8: lfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4567E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4567EC:
    ctx->pc = 0x7F4567ECu;
    // 7F4567EC: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4567ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4567F0:
    ctx->pc = 0x7F4567F0u;
    // 7F4567F0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4567F4:
    ctx->pc = 0x7F4567F4u;
    // 7F4567F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4567F8:
    ctx->pc = 0x7F4567F8u;
    // 7F4567F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4567FC:
    ctx->pc = 0x7F4567FCu;
    // 7F4567FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F456800:
    ctx->pc = 0x7F456800u;
    // 7F456800: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456804:
    ctx->pc = 0x7F456804u;
    ctx->downcount -= 35;
    // 7F456804: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456808:
    ctx->pc = 0x7F456808u;
    // 7F456808: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45680C:
    ctx->pc = 0x7F45680Cu;
    // 7F45680C: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456810:
    ctx->pc = 0x7F456810u;
    // 7F456810: stfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F456814:
    ctx->pc = 0x7F456814u;
    // 7F456814: psq_st   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F456814u);
        if (ctx->exception) return;
    }

label_7F456818:
    ctx->pc = 0x7F456818u;
    // 7F456818: stfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F45681C:
    ctx->pc = 0x7F45681Cu;
    // 7F45681C: psq_st   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45681Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F45681Cu);
        if (ctx->exception) return;
    }

label_7F456820:
    ctx->pc = 0x7F456820u;
    // 7F456820: stfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F456824:
    ctx->pc = 0x7F456824u;
    // 7F456824: psq_st   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F456824u);
        if (ctx->exception) return;
    }

label_7F456828:
    ctx->pc = 0x7F456828u;
    // 7F456828: stfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F45682C:
    ctx->pc = 0x7F45682Cu;
    // 7F45682C: psq_st   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45682Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F45682Cu);
        if (ctx->exception) return;
    }

label_7F456830:
    ctx->pc = 0x7F456830u;
    // 7F456830: stfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F456834:
    ctx->pc = 0x7F456834u;
    // 7F456834: psq_st   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456834u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F456834u);
        if (ctx->exception) return;
    }

label_7F456838:
    ctx->pc = 0x7F456838u;
    // 7F456838: stfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456838u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F45683C:
    ctx->pc = 0x7F45683Cu;
    // 7F45683C: psq_st   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45683Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F45683Cu);
        if (ctx->exception) return;
    }

label_7F456840:
    ctx->pc = 0x7F456840u;
    // 7F456840: stfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456840u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F456844:
    ctx->pc = 0x7F456844u;
    // 7F456844: psq_st   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456844u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F456844u);
        if (ctx->exception) return;
    }

label_7F456848:
    ctx->pc = 0x7F456848u;
    // 7F456848: stfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456848u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F45684C:
    ctx->pc = 0x7F45684Cu;
    // 7F45684C: psq_st   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45684Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F45684Cu);
        if (ctx->exception) return;
    }

label_7F456850:
    ctx->pc = 0x7F456850u;
    // 7F456850: stmw     r23, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F456854:
    ctx->pc = 0x7F456854u;
    // 7F456854: lis     r5, 216
    ctx->gpr[5] = ((u32)(s32)(216) << 16);

label_7F456858:
    ctx->pc = 0x7F456858u;
    // 7F456858: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45685C:
    ctx->pc = 0x7F45685Cu;
    // 7F45685C: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F456860:
    ctx->pc = 0x7F456860u;
    // 7F456860: addi    r3, r5, -10071
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-10071);

label_7F456864:
    ctx->pc = 0x7F456864u;
    // 7F456864: bl      0x7F3B6420
    {
            ctx->lr = 0x7F456868u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F456868:
    ctx->pc = 0x7F456868u;
    ctx->downcount -= 26;
    // 7F456868: lwz     r11, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F45686C:
    ctx->pc = 0x7F45686Cu;
    // 7F45686C: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F456870:
    ctx->pc = 0x7F456870u;
    // 7F456870: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456874:
    ctx->pc = 0x7F456874u;
    // 7F456874: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456878:
    ctx->pc = 0x7F456878u;
    // 7F456878: addi    r9, r8, -7304
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(-7304);

label_7F45687C:
    ctx->pc = 0x7F45687Cu;
    // 7F45687C: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F456880:
    ctx->pc = 0x7F456880u;
    // 7F456880: addi    r8, r7, -7280
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-7280);

label_7F456884:
    ctx->pc = 0x7F456884u;
    // 7F456884: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F456888:
    ctx->pc = 0x7F456888u;
    // 7F456888: addi    r7, r6, -7300
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-7300);

label_7F45688C:
    ctx->pc = 0x7F45688Cu;
    // 7F45688C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F456890:
    ctx->pc = 0x7F456890u;
    // 7F456890: addi    r6, r5, -7296
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-7296);

label_7F456894:
    ctx->pc = 0x7F456894u;
    // 7F456894: lis     r10, 32585
    ctx->gpr[10] = ((u32)(s32)(32585) << 16);

label_7F456898:
    ctx->pc = 0x7F456898u;
    // 7F456898: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F45689C:
    ctx->pc = 0x7F45689Cu;
    // 7F45689C: lwz     r28, 192(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F4568A0:
    ctx->pc = 0x7F4568A0u;
    // 7F4568A0: lwz     r27, 196(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(196);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F4568A4:
    ctx->pc = 0x7F4568A4u;
    // 7F4568A4: addi    r30, r10, 32528
    ctx->gpr[30] = ctx->gpr[10] + (u32)(s32)(32528);

label_7F4568A8:
    ctx->pc = 0x7F4568A8u;
    // 7F4568A8: lfs     f28, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F4568A8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F4568AC:
    ctx->pc = 0x7F4568ACu;
    // 7F4568AC: addi    r23, r5, -7292
    ctx->gpr[23] = ctx->gpr[5] + (u32)(s32)(-7292);

label_7F4568B0:
    ctx->pc = 0x7F4568B0u;
    // 7F4568B0: lfd     f29, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F4568B0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4568B4:
    ctx->pc = 0x7F4568B4u;
    // 7F4568B4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4568B8:
    ctx->pc = 0x7F4568B8u;
    // 7F4568B8: lfs     f30, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F4568B8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F4568BC:
    ctx->pc = 0x7F4568BCu;
    // 7F4568BC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F4568C0:
    ctx->pc = 0x7F4568C0u;
    // 7F4568C0: lfs     f31, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4568C0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F4568C4:
    ctx->pc = 0x7F4568C4u;
    // 7F4568C4: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F4568C8:
    ctx->pc = 0x7F4568C8u;
    // 7F4568C8: lfs     f26, -7284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4568C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F4568CC:
    ctx->pc = 0x7F4568CCu;
    // 7F4568CC: lfs     f27, -7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4568CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F4568D0:
    ctx->downcount -= 6;
    // 7F4568D0: addi    r0, r29, 73
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(73);

label_7F4568D4:
    // 7F4568D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4568D8:
    ctx->pc = 0x7F4568D8u;
    // 7F4568D8: stbx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F4568DC:
    // 7F4568DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4568E0:
    // 7F4568E0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4568E4:
    // 7F4568E4: bl      0x7F4555B0
    {
            ctx->lr = 0x7F4568E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F4568E8:
    ctx->pc = 0x7F4568E8u;
    ctx->downcount -= 36;
    // 7F4568E8: stb     r3, 72(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F4568EC:
    // 7F4568EC: li      r3, -10
    ctx->gpr[3] = (u32)(s32)(-10);

label_7F4568F0:
    // 7F4568F0: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F4568F4:
    ctx->pc = 0x7F4568F4u;
    // 7F4568F4: lbz     r0, 72(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F4568F8:
    // 7F4568F8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F4568FC:
    // 7F4568FC: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F456900:
    // 7F456900: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F456904:
    ctx->pc = 0x7F456904u;
    // 7F456904: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456904u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456908:
    ctx->pc = 0x7F456908u;
    // 7F456908: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456908u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F45690C:
    ctx->pc = 0x7F45690Cu;
    // 7F45690C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45690Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456910:
    ctx->pc = 0x7F456910u;
    // 7F456910: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456914:
    ctx->pc = 0x7F456914u;
    // 7F456914: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456918:
    ctx->pc = 0x7F456918u;
    // 7F456918: sth     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45691C:
    ctx->pc = 0x7F45691Cu;
    // 7F45691C: sth     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456920:
    ctx->pc = 0x7F456920u;
    // 7F456920: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456920u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456924:
    ctx->pc = 0x7F456924u;
    // 7F456924: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456924u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F456928:
    ctx->pc = 0x7F456928u;
    // 7F456928: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456928u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F45692C:
    ctx->pc = 0x7F45692Cu;
    // 7F45692C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45692Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456930:
    ctx->pc = 0x7F456930u;
    // 7F456930: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456934:
    ctx->pc = 0x7F456934u;
    // 7F456934: sth     r0, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456938:
    ctx->pc = 0x7F456938u;
    // 7F456938: sth     r0, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45693C:
    ctx->pc = 0x7F45693Cu;
    // 7F45693C: lfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F45693Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456940:
    ctx->pc = 0x7F456940u;
    // 7F456940: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456940u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F456944:
    ctx->pc = 0x7F456944u;
    // 7F456944: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456944u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456948:
    ctx->pc = 0x7F456948u;
    // 7F456948: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45694C:
    ctx->pc = 0x7F45694Cu;
    // 7F45694C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456950:
    ctx->pc = 0x7F456950u;
    // 7F456950: sth     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456954:
    ctx->pc = 0x7F456954u;
    // 7F456954: sth     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456958:
    ctx->pc = 0x7F456958u;
    // 7F456958: lfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456958u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45695C:
    ctx->pc = 0x7F45695Cu;
    // 7F45695C: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45695Cu)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F456960:
    ctx->pc = 0x7F456960u;
    // 7F456960: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456960u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456964:
    ctx->pc = 0x7F456964u;
    // 7F456964: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456968:
    ctx->pc = 0x7F456968u;
    // 7F456968: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45696C:
    ctx->pc = 0x7F45696Cu;
    // 7F45696C: sth     r0, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456970:
    ctx->pc = 0x7F456970u;
    // 7F456970: sth     r0, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456974:
    // 7F456974: bl      0x7F4555B0
    {
            ctx->lr = 0x7F456978u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F456978:
    ctx->downcount -= 9;
    // 7F456978: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F45697C:
    ctx->pc = 0x7F45697Cu;
    // 7F45697C: stw     r31, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456980:
    ctx->pc = 0x7F456980u;
    // 7F456980: lfs     f0, 68(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456980u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456984:
    ctx->pc = 0x7F456984u;
    // 7F456984: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456988:
    ctx->pc = 0x7F456988u;
    // 7F456988: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45698C:
    ctx->pc = 0x7F45698Cu;
    // 7F45698C: fsubs   f1, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F45698Cu)) return;
    ppc_fsubs(ctx, 1, 1, 29);

label_7F456990:
    ctx->pc = 0x7F456990u;
    // 7F456990: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456990u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F456994:
    ctx->pc = 0x7F456994u;
    // 7F456994: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F456994u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F456998:
    // 7F456998: bc    4, 1, 0x7F4569A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4569A4;
        }
    }

label_7F45699C:
    ctx->downcount -= 2;
    // 7F45699C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4569A0:
    ctx->pc = 0x7F4569A0u;
    // 7F4569A0: lfs     f0, -7300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4569A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4569A4:
    ctx->pc = 0x7F4569A4u;
    ctx->downcount -= 2;
    // 7F4569A4: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4569A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F4569A8:
    // 7F4569A8: bc    4, 0, 0x7F4569B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4569B4;
        }
    }

label_7F4569AC:
    ctx->downcount -= 2;
    // 7F4569AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4569B0:
    ctx->pc = 0x7F4569B0u;
    // 7F4569B0: lfs     f0, -7296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4569B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4569B4:
    ctx->pc = 0x7F4569B4u;
    ctx->downcount -= 8;
    // 7F4569B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4569B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4569B8:
    // 7F4569B8: li      r3, -10
    ctx->gpr[3] = (u32)(s32)(-10);

label_7F4569BC:
    // 7F4569BC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F4569C0:
    ctx->pc = 0x7F4569C0u;
    // 7F4569C0: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4569C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4569C4:
    ctx->pc = 0x7F4569C4u;
    // 7F4569C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4569C8:
    ctx->pc = 0x7F4569C8u;
    // 7F4569C8: stb     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4569CC:
    ctx->pc = 0x7F4569CCu;
    // 7F4569CC: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4569D0:
    // 7F4569D0: bl      0x7F4555B0
    {
            ctx->lr = 0x7F4569D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F4569D4:
    ctx->downcount -= 9;
    // 7F4569D4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F4569D8:
    ctx->pc = 0x7F4569D8u;
    // 7F4569D8: stw     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4569DC:
    ctx->pc = 0x7F4569DCu;
    // 7F4569DC: lfs     f0, 64(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F4569DCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4569E0:
    ctx->pc = 0x7F4569E0u;
    // 7F4569E0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4569E4:
    ctx->pc = 0x7F4569E4u;
    // 7F4569E4: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4569E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4569E8:
    ctx->pc = 0x7F4569E8u;
    // 7F4569E8: fsubs   f1, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F4569E8u)) return;
    ppc_fsubs(ctx, 1, 1, 29);

label_7F4569EC:
    ctx->pc = 0x7F4569ECu;
    // 7F4569EC: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4569ECu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F4569F0:
    ctx->pc = 0x7F4569F0u;
    // 7F4569F0: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F4569F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F4569F4:
    // 7F4569F4: bc    4, 1, 0x7F456A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456A00;
        }
    }

label_7F4569F8:
    ctx->downcount -= 2;
    // 7F4569F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4569FC:
    ctx->pc = 0x7F4569FCu;
    // 7F4569FC: lfs     f0, -7300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4569FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456A00:
    ctx->pc = 0x7F456A00u;
    ctx->downcount -= 2;
    // 7F456A00: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F456A00u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F456A04:
    // 7F456A04: bc    4, 0, 0x7F456A10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456A10;
        }
    }

label_7F456A08:
    ctx->downcount -= 2;
    // 7F456A08: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456A0C:
    ctx->pc = 0x7F456A0Cu;
    // 7F456A0C: lfs     f0, -7296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F456A0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456A10:
    ctx->pc = 0x7F456A10u;
    ctx->downcount -= 8;
    // 7F456A10: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456A10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456A14:
    // 7F456A14: li      r3, -10
    ctx->gpr[3] = (u32)(s32)(-10);

label_7F456A18:
    // 7F456A18: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F456A1C:
    ctx->pc = 0x7F456A1Cu;
    // 7F456A1C: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456A20:
    ctx->pc = 0x7F456A20u;
    // 7F456A20: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456A24:
    ctx->pc = 0x7F456A24u;
    // 7F456A24: stb     r0, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456A28:
    ctx->pc = 0x7F456A28u;
    // 7F456A28: stb     r0, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456A2C:
    // 7F456A2C: bl      0x7F4555B0
    {
            ctx->lr = 0x7F456A30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F456A30:
    ctx->downcount -= 9;
    // 7F456A30: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F456A34:
    ctx->pc = 0x7F456A34u;
    // 7F456A34: stw     r31, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456A38:
    ctx->pc = 0x7F456A38u;
    // 7F456A38: lfs     f0, 60(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456A38u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456A3C:
    ctx->pc = 0x7F456A3Cu;
    // 7F456A3C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456A40:
    ctx->pc = 0x7F456A40u;
    // 7F456A40: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456A44:
    ctx->pc = 0x7F456A44u;
    // 7F456A44: fsubs   f1, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F456A44u)) return;
    ppc_fsubs(ctx, 1, 1, 29);

label_7F456A48:
    ctx->pc = 0x7F456A48u;
    // 7F456A48: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456A48u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F456A4C:
    ctx->pc = 0x7F456A4Cu;
    // 7F456A4C: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F456A4Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F456A50:
    // 7F456A50: bc    4, 1, 0x7F456A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456A5C;
        }
    }

label_7F456A54:
    ctx->downcount -= 2;
    // 7F456A54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456A58:
    ctx->pc = 0x7F456A58u;
    // 7F456A58: lfs     f0, -7300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F456A58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456A5C:
    ctx->pc = 0x7F456A5Cu;
    ctx->downcount -= 2;
    // 7F456A5C: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F456A5Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F456A60:
    // 7F456A60: bc    4, 0, 0x7F456A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456A6C;
        }
    }

label_7F456A64:
    ctx->downcount -= 2;
    // 7F456A64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456A68:
    ctx->pc = 0x7F456A68u;
    // 7F456A68: lfs     f0, -7296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F456A68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456A6C:
    ctx->pc = 0x7F456A6Cu;
    ctx->downcount -= 12;
    // 7F456A6C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456A6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456A70:
    // 7F456A70: subfic  r0, r24, 48
    {
        u64 res = (u64)(u32)(s32)(48) + (u64)(~ctx->gpr[24]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F456A74:
    ctx->pc = 0x7F456A74u;
    // 7F456A74: lfs     f1, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F456A74u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456A78:
    // 7F456A78: li      r3, -314
    ctx->gpr[3] = (u32)(s32)(-314);

label_7F456A7C:
    // 7F456A7C: li      r4, 314
    ctx->gpr[4] = (u32)(s32)(314);

label_7F456A80:
    ctx->pc = 0x7F456A80u;
    // 7F456A80: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456A84:
    ctx->pc = 0x7F456A84u;
    // 7F456A84: lwz     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F456A88:
    ctx->pc = 0x7F456A88u;
    // 7F456A88: stb     r5, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F456A8C:
    ctx->pc = 0x7F456A8Cu;
    // 7F456A8C: stb     r5, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F456A90:
    ctx->pc = 0x7F456A90u;
    // 7F456A90: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456A94:
    ctx->pc = 0x7F456A94u;
    // 7F456A94: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456A98:
    // 7F456A98: bl      0x7F455620
    {
            ctx->lr = 0x7F456A9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F456A9C:
    ctx->pc = 0x7F456A9Cu;
    ctx->downcount -= 4;
    // 7F456A9C: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456A9Cu)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F456AA0:
    // 7F456AA0: li      r3, -24
    ctx->gpr[3] = (u32)(s32)(-24);

label_7F456AA4:
    // 7F456AA4: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_7F456AA8:
    // 7F456AA8: bl      0x7F4555B0
    {
            ctx->lr = 0x7F456AACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F456AAC:
    ctx->downcount -= 7;
    // 7F456AAC: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F456AB0:
    ctx->pc = 0x7F456AB0u;
    // 7F456AB0: stw     r31, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456AB4:
    ctx->pc = 0x7F456AB4u;
    // 7F456AB4: fmr    f1, f24
    if (!ppc_fp_available_inline(ctx, 0x7F456AB4u)) return;
    ctx->fpr[1] = ctx->fpr[24];

label_7F456AB8:
    ctx->pc = 0x7F456AB8u;
    // 7F456AB8: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456ABC:
    ctx->pc = 0x7F456ABCu;
    // 7F456ABC: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456AC0:
    ctx->pc = 0x7F456AC0u;
    // 7F456AC0: fsubs   f25, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F456AC0u)) return;
    ppc_fsubs(ctx, 25, 0, 29);

label_7F456AC4:
    // 7F456AC4: bl      0x7F008330
    {
            ctx->lr = 0x7F456AC8u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F456AC8:
    ctx->downcount -= 17;
    // 7F456AC8: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F456ACC:
    ctx->pc = 0x7F456ACCu;
    // 7F456ACC: stw     r31, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456AD0:
    ctx->pc = 0x7F456AD0u;
    // 7F456AD0: lfs     f0, 52(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456AD0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456AD4:
    ctx->pc = 0x7F456AD4u;
    // 7F456AD4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456AD8:
    ctx->pc = 0x7F456AD8u;
    // 7F456AD8: lfd     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456ADC:
    ctx->pc = 0x7F456ADCu;
    // 7F456ADC: fsubs   f2, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F456ADCu)) return;
    ppc_fsubs(ctx, 2, 2, 29);

label_7F456AE0:
    ctx->pc = 0x7F456AE0u;
    // 7F456AE0: fnmsubs f2, f26, f2, f27
    if (!ppc_fp_available_inline(ctx, 0x7F456AE0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[26], ctx->fpr[2], ctx->fpr[27], true, true, true, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F456AE4:
    ctx->pc = 0x7F456AE4u;
    // 7F456AE4: fadds   f25, f2, f25
    if (!ppc_fp_available_inline(ctx, 0x7F456AE4u)) return;
    ppc_fadds(ctx, 25, 2, 25);

label_7F456AE8:
    ctx->pc = 0x7F456AE8u;
    // 7F456AE8: fmuls   f2, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456AE8u)) return;
    ppc_fmuls(ctx, 2, 25, 1);

label_7F456AEC:
    ctx->pc = 0x7F456AECu;
    // 7F456AEC: fmr    f1, f24
    if (!ppc_fp_available_inline(ctx, 0x7F456AECu)) return;
    ctx->fpr[1] = ctx->fpr[24];

label_7F456AF0:
    ctx->pc = 0x7F456AF0u;
    // 7F456AF0: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F456AF0u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_7F456AF4:
    ctx->pc = 0x7F456AF4u;
    // 7F456AF4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456AF4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456AF8:
    ctx->pc = 0x7F456AF8u;
    // 7F456AF8: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456AFC:
    ctx->pc = 0x7F456AFCu;
    // 7F456AFC: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456B00:
    ctx->pc = 0x7F456B00u;
    // 7F456B00: sth     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456B04:
    ctx->pc = 0x7F456B04u;
    // 7F456B04: sth     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456B08:
    // 7F456B08: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F456B0Cu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F456B0C:
    ctx->pc = 0x7F456B0Cu;
    ctx->downcount -= 14;
    // 7F456B0C: fmuls   f1, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456B0Cu)) return;
    ppc_fmuls(ctx, 1, 25, 1);

label_7F456B10:
    ctx->pc = 0x7F456B10u;
    // 7F456B10: lfs     f0, 52(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456B10u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456B14:
    // 7F456B14: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F456B18:
    // 7F456B18: addi    r24, r24, 12
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(12);

label_7F456B1C:
    // 7F456B1C: cmpwi   r29, 4
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

label_7F456B20:
    ctx->pc = 0x7F456B20u;
    // 7F456B20: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456B20u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F456B24:
    ctx->pc = 0x7F456B24u;
    // 7F456B24: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456B24u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456B28:
    ctx->pc = 0x7F456B28u;
    // 7F456B28: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456B2C:
    ctx->pc = 0x7F456B2Cu;
    // 7F456B2C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456B30:
    ctx->pc = 0x7F456B30u;
    // 7F456B30: sth     r0, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456B34:
    // 7F456B34: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F456B38:
    ctx->pc = 0x7F456B38u;
    // 7F456B38: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F456B3C:
    // 7F456B3C: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F456B40:
    // 7F456B40: bc    12, 0, 0x7F4568D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4568D0u;
                return;
            }
            goto label_7F4568D0;
        }
    }

label_7F456B44:
    ctx->pc = 0x7F456B44u;
    ctx->downcount -= 2;
    // 7F456B44: cmpwi   r26, 0
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

label_7F456B48:
    ctx->pc = 0x7F456B48u;
    // 7F456B48: bc    12, 2, 0x7F456B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456B64;
        }
    }

label_7F456B4C:
    ctx->pc = 0x7F456B4Cu;
    ctx->downcount -= 3;
    // 7F456B4C: lwz     r3, 160(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456B50:
    ctx->pc = 0x7F456B50u;
    // 7F456B50: cmplwi  r3, 0x0000
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

label_7F456B54:
    ctx->pc = 0x7F456B54u;
    // 7F456B54: bc    12, 2, 0x7F456B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456B64;
        }
    }

label_7F456B58:
    ctx->pc = 0x7F456B58u;
    ctx->downcount -= 3;
    // 7F456B58: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F456B5C:
    ctx->pc = 0x7F456B5Cu;
    // 7F456B5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F456B60:
    ctx->pc = 0x7F456B60u;
    // 7F456B60: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F456B64u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F456B64:
    ctx->pc = 0x7F456B64u;
    ctx->downcount -= 34;
    // 7F456B64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F456B68:
    ctx->pc = 0x7F456B68u;
    // 7F456B68: stw     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456B6C:
    ctx->pc = 0x7F456B6Cu;
    // 7F456B6C: psq_l   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F456B6Cu);
        if (ctx->exception) return;
    }

label_7F456B70:
    ctx->pc = 0x7F456B70u;
    // 7F456B70: lfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B74:
    ctx->pc = 0x7F456B74u;
    // 7F456B74: psq_l   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F456B74u);
        if (ctx->exception) return;
    }

label_7F456B78:
    ctx->pc = 0x7F456B78u;
    // 7F456B78: lfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B7C:
    ctx->pc = 0x7F456B7Cu;
    // 7F456B7C: psq_l   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F456B7Cu);
        if (ctx->exception) return;
    }

label_7F456B80:
    ctx->pc = 0x7F456B80u;
    // 7F456B80: lfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B84:
    ctx->pc = 0x7F456B84u;
    // 7F456B84: psq_l   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F456B84u);
        if (ctx->exception) return;
    }

label_7F456B88:
    ctx->pc = 0x7F456B88u;
    // 7F456B88: lfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B8C:
    ctx->pc = 0x7F456B8Cu;
    // 7F456B8C: psq_l   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F456B8Cu);
        if (ctx->exception) return;
    }

label_7F456B90:
    ctx->pc = 0x7F456B90u;
    // 7F456B90: lfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B94:
    ctx->pc = 0x7F456B94u;
    // 7F456B94: psq_l   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F456B94u);
        if (ctx->exception) return;
    }

label_7F456B98:
    ctx->pc = 0x7F456B98u;
    // 7F456B98: lfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456B9C:
    ctx->pc = 0x7F456B9Cu;
    // 7F456B9C: psq_l   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F456B9Cu);
        if (ctx->exception) return;
    }

label_7F456BA0:
    ctx->pc = 0x7F456BA0u;
    // 7F456BA0: lfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456BA4:
    ctx->pc = 0x7F456BA4u;
    // 7F456BA4: psq_l   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F456BA4u);
        if (ctx->exception) return;
    }

label_7F456BA8:
    ctx->pc = 0x7F456BA8u;
    // 7F456BA8: lfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456BAC:
    ctx->pc = 0x7F456BACu;
    // 7F456BAC: lmw     r23, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F456BB0:
    ctx->pc = 0x7F456BB0u;
    // 7F456BB0: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456BB4:
    ctx->pc = 0x7F456BB4u;
    // 7F456BB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F456BB8:
    ctx->pc = 0x7F456BB8u;
    // 7F456BB8: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_7F456BBC:
    ctx->pc = 0x7F456BBCu;
    // 7F456BBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456BC0:
    ctx->pc = 0x7F456BC0u;
    ctx->downcount -= 29;
    // 7F456BC0: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456BC4:
    ctx->pc = 0x7F456BC4u;
    // 7F456BC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F456BC8:
    ctx->pc = 0x7F456BC8u;
    // 7F456BC8: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456BCC:
    ctx->pc = 0x7F456BCCu;
    // 7F456BCC: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456BCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F456BD0:
    ctx->pc = 0x7F456BD0u;
    // 7F456BD0: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456BD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F456BD0u);
        if (ctx->exception) return;
    }

label_7F456BD4:
    ctx->pc = 0x7F456BD4u;
    // 7F456BD4: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456BD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F456BD8:
    ctx->pc = 0x7F456BD8u;
    // 7F456BD8: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456BD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F456BD8u);
        if (ctx->exception) return;
    }

label_7F456BDC:
    ctx->pc = 0x7F456BDCu;
    // 7F456BDC: stfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F456BE0:
    ctx->pc = 0x7F456BE0u;
    // 7F456BE0: psq_st   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456BE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F456BE0u);
        if (ctx->exception) return;
    }

label_7F456BE4:
    ctx->pc = 0x7F456BE4u;
    // 7F456BE4: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F456BE8:
    ctx->pc = 0x7F456BE8u;
    // 7F456BE8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F456BEC:
    ctx->pc = 0x7F456BECu;
    // 7F456BEC: lfs     f0, 152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F456BECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F456BF0:
    ctx->pc = 0x7F456BF0u;
    // 7F456BF0: lfs     f1, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456BF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456BF4:
    ctx->pc = 0x7F456BF4u;
    // 7F456BF4: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F456BF8:
    ctx->pc = 0x7F456BF8u;
    // 7F456BF8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456BF8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F456BFC:
    ctx->pc = 0x7F456BFCu;
    // 7F456BFC: stfs     f0, 148(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456BFCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F456C00:
    ctx->pc = 0x7F456C00u;
    // 7F456C00: lwz     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456C04:
    ctx->pc = 0x7F456C04u;
    // 7F456C04: cmpwi   r0, 0
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

label_7F456C08:
    ctx->pc = 0x7F456C08u;
    // 7F456C08: bc    12, 2, 0x7F456E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456E28;
        }
    }

label_7F456C0C:
    ctx->pc = 0x7F456C0Cu;
    ctx->downcount -= 27;
    // 7F456C0C: lwz     r6, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F456C10:
    ctx->pc = 0x7F456C10u;
    // 7F456C10: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456C14:
    ctx->pc = 0x7F456C14u;
    // 7F456C14: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456C18:
    ctx->pc = 0x7F456C18u;
    // 7F456C18: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F456C1C:
    ctx->pc = 0x7F456C1Cu;
    // 7F456C1C: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456C20:
    ctx->pc = 0x7F456C20u;
    // 7F456C20: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F456C24:
    ctx->pc = 0x7F456C24u;
    // 7F456C24: lfd     f30, -7280(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456C24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7280);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456C28:
    ctx->pc = 0x7F456C28u;
    // 7F456C28: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F456C2C:
    ctx->pc = 0x7F456C2Cu;
    // 7F456C2C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F456C30:
    ctx->pc = 0x7F456C30u;
    // 7F456C30: lfs     f31, -7272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F456C30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F456C34:
    ctx->pc = 0x7F456C34u;
    // 7F456C34: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456C38:
    ctx->pc = 0x7F456C38u;
    // 7F456C38: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F456C3C:
    ctx->pc = 0x7F456C3Cu;
    // 7F456C3C: lfs     f29, -7268(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456C3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F456C40:
    ctx->pc = 0x7F456C40u;
    // 7F456C40: lwz     r4, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456C44:
    ctx->pc = 0x7F456C44u;
    // 7F456C44: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456C48:
    ctx->pc = 0x7F456C48u;
    // 7F456C48: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F456C4C:
    ctx->pc = 0x7F456C4Cu;
    // 7F456C4C: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456C50:
    ctx->pc = 0x7F456C50u;
    // 7F456C50: lwz     r3, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456C54:
    ctx->pc = 0x7F456C54u;
    // 7F456C54: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456C58:
    ctx->pc = 0x7F456C58u;
    // 7F456C58: addi    r5, r3, 192
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(192);

label_7F456C5C:
    ctx->pc = 0x7F456C5Cu;
    // 7F456C5C: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F456C60:
    ctx->pc = 0x7F456C60u;
    // 7F456C60: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F456C64:
    ctx->pc = 0x7F456C64u;
    // 7F456C64: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F456C68:
    ctx->pc = 0x7F456C68u;
    // 7F456C68: lwzx    r27, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F456C6C:
    ctx->pc = 0x7F456C6Cu;
    // 7F456C6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F456C70:
    ctx->pc = 0x7F456C70u;
    // 7F456C70: lwz     r28, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F456C74:
    ctx->pc = 0x7F456C74u;
    // 7F456C74: lwzx    r26, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F456C78:
    ctx->downcount -= 19;
    // 7F456C78: subfic  r3, r30, 4
    {
        u64 res = (u64)(u32)(s32)(4) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F456C7C:
    // 7F456C7C: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F456C80:
    // 7F456C80: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F456C84:
    ctx->pc = 0x7F456C84u;
    // 7F456C84: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456C88:
    ctx->pc = 0x7F456C88u;
    // 7F456C88: lfs     f2, 52(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456C88u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F456C8C:
    // 7F456C8C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F456C90:
    ctx->pc = 0x7F456C90u;
    // 7F456C90: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F456C94:
    // 7F456C94: addi    r4, r25, 132
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(132);

label_7F456C98:
    // 7F456C98: addi    r5, r25, 116
    ctx->gpr[5] = ctx->gpr[25] + (u32)(s32)(116);

label_7F456C9C:
    ctx->pc = 0x7F456C9Cu;
    // 7F456C9C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456C9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456CA0:
    ctx->pc = 0x7F456CA0u;
    // 7F456CA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456CA4:
    ctx->pc = 0x7F456CA4u;
    // 7F456CA4: fsubs   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F456CA4u)) return;
    ppc_fsubs(ctx, 1, 0, 30);

label_7F456CA8:
    ctx->pc = 0x7F456CA8u;
    // 7F456CA8: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456CAC:
    ctx->pc = 0x7F456CACu;
    // 7F456CAC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456CB0:
    ctx->pc = 0x7F456CB0u;
    // 7F456CB0: fmadds f1, f29, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F456CB0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F456CB4:
    ctx->pc = 0x7F456CB4u;
    // 7F456CB4: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F456CB4u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F456CB8:
    ctx->pc = 0x7F456CB8u;
    // 7F456CB8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456CB8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F456CBC:
    ctx->pc = 0x7F456CBCu;
    // 7F456CBC: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456CBCu)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F456CC0:
    // 7F456CC0: bl      0x7F455A50
    {
            ctx->lr = 0x7F456CC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455A50u;
                return;
            }
            goto label_7F455A50;
    }

label_7F456CC4:
    ctx->downcount -= 6;
    // 7F456CC4: addi    r0, r30, 73
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(73);

label_7F456CC8:
    // 7F456CC8: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F456CCC:
    ctx->pc = 0x7F456CCCu;
    // 7F456CCC: lbzx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F456CD0:
    // 7F456CD0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F456CD4:
    // 7F456CD4: cmpwi   r3, 1
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

label_7F456CD8:
    // 7F456CD8: bc    4, 2, 0x7F456D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456D3C;
        }
    }

label_7F456CDC:
    ctx->pc = 0x7F456CDCu;
    ctx->downcount -= 19;
    // 7F456CDC: lbz     r5, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F456CE0:
    // 7F456CE0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F456CE4:
    // 7F456CE4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456CE8:
    // 7F456CE8: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F456CEC:
    ctx->pc = 0x7F456CECu;
    // 7F456CEC: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F456CF0:
    ctx->pc = 0x7F456CF0u;
    // 7F456CF0: lfd     f1, -7248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456CF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456CF4:
    ctx->pc = 0x7F456CF4u;
    // 7F456CF4: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F456CF8:
    ctx->pc = 0x7F456CF8u;
    // 7F456CF8: lfs     f3, -7264(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F456CF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F456CFC:
    ctx->pc = 0x7F456CFCu;
    // 7F456CFC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456CFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456D00:
    ctx->pc = 0x7F456D00u;
    // 7F456D00: lfs     f2, 148(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456D00u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F456D04:
    ctx->pc = 0x7F456D04u;
    // 7F456D04: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456D04u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F456D08:
    ctx->pc = 0x7F456D08u;
    // 7F456D08: fnmsubs f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456D08u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F456D0C:
    ctx->pc = 0x7F456D0Cu;
    // 7F456D0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456D0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456D10:
    ctx->pc = 0x7F456D10u;
    // 7F456D10: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456D10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456D14:
    ctx->pc = 0x7F456D14u;
    // 7F456D14: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456D18:
    ctx->pc = 0x7F456D18u;
    // 7F456D18: stb     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F456D1C:
    ctx->pc = 0x7F456D1Cu;
    // 7F456D1C: lbz     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F456D20:
    // 7F456D20: cmplwi  r3, 0x0038
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0038u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F456D24:
    // 7F456D24: bc    4, 0, 0x7F456DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456DCC;
        }
    }

label_7F456D28:
    ctx->downcount -= 5;
    // 7F456D28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F456D2C:
    // 7F456D2C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F456D30:
    ctx->pc = 0x7F456D30u;
    // 7F456D30: stb     r4, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F456D34:
    ctx->pc = 0x7F456D34u;
    // 7F456D34: stbx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F456D38:
    // 7F456D38: b       0x7F456DCC
    {
            goto label_7F456DCC;
    }

label_7F456D3C:
    ctx->downcount -= 2;
    // 7F456D3C: cmpwi   r3, 2
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

label_7F456D40:
    // 7F456D40: bc    4, 2, 0x7F456D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456D58;
        }
    }

label_7F456D44:
    ctx->downcount -= 5;
    // 7F456D44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F456D48:
    // 7F456D48: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F456D4C:
    ctx->pc = 0x7F456D4Cu;
    // 7F456D4C: stb     r4, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F456D50:
    ctx->pc = 0x7F456D50u;
    // 7F456D50: stbx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F456D54:
    // 7F456D54: b       0x7F456DCC
    {
            goto label_7F456DCC;
    }

label_7F456D58:
    ctx->downcount -= 2;
    // 7F456D58: cmpwi   r3, 3
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

label_7F456D5C:
    // 7F456D5C: bc    4, 2, 0x7F456D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456D70;
        }
    }

label_7F456D60:
    ctx->downcount -= 4;
    // 7F456D60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F456D64:
    // 7F456D64: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F456D68:
    ctx->pc = 0x7F456D68u;
    // 7F456D68: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F456D6C:
    // 7F456D6C: b       0x7F456DCC
    {
            goto label_7F456DCC;
    }

label_7F456D70:
    ctx->pc = 0x7F456D70u;
    ctx->downcount -= 19;
    // 7F456D70: lbz     r5, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F456D74:
    // 7F456D74: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F456D78:
    // 7F456D78: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456D7C:
    // 7F456D7C: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F456D80:
    ctx->pc = 0x7F456D80u;
    // 7F456D80: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F456D84:
    ctx->pc = 0x7F456D84u;
    // 7F456D84: lfd     f1, -7248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456D84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456D88:
    ctx->pc = 0x7F456D88u;
    // 7F456D88: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F456D8C:
    ctx->pc = 0x7F456D8Cu;
    // 7F456D8C: lfs     f3, -7260(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F456D8Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F456D90:
    ctx->pc = 0x7F456D90u;
    // 7F456D90: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456D94:
    ctx->pc = 0x7F456D94u;
    // 7F456D94: lfs     f2, 148(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F456D94u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F456D98:
    ctx->pc = 0x7F456D98u;
    // 7F456D98: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456D98u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F456D9C:
    ctx->pc = 0x7F456D9Cu;
    // 7F456D9C: fmadds f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456D9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F456DA0:
    ctx->pc = 0x7F456DA0u;
    // 7F456DA0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F456DA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F456DA4:
    ctx->pc = 0x7F456DA4u;
    // 7F456DA4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456DA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F456DA8:
    ctx->pc = 0x7F456DA8u;
    // 7F456DA8: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456DAC:
    ctx->pc = 0x7F456DACu;
    // 7F456DAC: stb     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F456DB0:
    ctx->pc = 0x7F456DB0u;
    // 7F456DB0: lbz     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F456DB4:
    // 7F456DB4: cmplwi  r3, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F456DB8:
    // 7F456DB8: bc    4, 1, 0x7F456DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456DCC;
        }
    }

label_7F456DBC:
    ctx->downcount -= 4;
    // 7F456DBC: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F456DC0:
    // 7F456DC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F456DC4:
    ctx->pc = 0x7F456DC4u;
    // 7F456DC4: stb     r4, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F456DC8:
    ctx->pc = 0x7F456DC8u;
    // 7F456DC8: stbx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F456DCC:
    ctx->downcount -= 5;
    // 7F456DCC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F456DD0:
    // 7F456DD0: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F456DD4:
    // 7F456DD4: cmpwi   r30, 4
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

label_7F456DD8:
    // 7F456DD8: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F456DDC:
    // 7F456DDC: bc    12, 0, 0x7F456C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F456C78u;
                return;
            }
            goto label_7F456C78;
        }
    }

label_7F456DE0:
    ctx->pc = 0x7F456DE0u;
    ctx->downcount -= 2;
    // 7F456DE0: cmpwi   r29, 4
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

label_7F456DE4:
    ctx->pc = 0x7F456DE4u;
    // 7F456DE4: bc    12, 0, 0x7F456E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456E04;
        }
    }

label_7F456DE8:
    ctx->pc = 0x7F456DE8u;
    ctx->downcount -= 7;
    // 7F456DE8: lwz     r4, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F456DEC:
    ctx->pc = 0x7F456DECu;
    // 7F456DEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F456DF0:
    ctx->pc = 0x7F456DF0u;
    // 7F456DF0: lwz     r3, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456DF4:
    ctx->pc = 0x7F456DF4u;
    // 7F456DF4: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F456DF8:
    ctx->pc = 0x7F456DF8u;
    // 7F456DF8: stw     r3, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F456DFC:
    ctx->pc = 0x7F456DFCu;
    // 7F456DFC: stw     r0, 80(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456E00:
    ctx->pc = 0x7F456E00u;
    // 7F456E00: b       0x7F456E28
    {
            goto label_7F456E28;
    }

label_7F456E04:
    ctx->pc = 0x7F456E04u;
    ctx->downcount -= 9;
    // 7F456E04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F456E08:
    ctx->pc = 0x7F456E08u;
    // 7F456E08: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F456E0C:
    ctx->pc = 0x7F456E0Cu;
    // 7F456E0C: addi    r5, r3, -7256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7256);

label_7F456E10:
    ctx->pc = 0x7F456E10u;
    // 7F456E10: lfs     f2, -7252(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F456E10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F456E14:
    ctx->pc = 0x7F456E14u;
    // 7F456E14: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F456E14u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F456E18:
    ctx->pc = 0x7F456E18u;
    // 7F456E18: addi    r3, r25, 132
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(132);

label_7F456E1C:
    ctx->pc = 0x7F456E1Cu;
    // 7F456E1C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F456E20:
    ctx->pc = 0x7F456E20u;
    // 7F456E20: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F456E24:
    ctx->pc = 0x7F456E24u;
    // 7F456E24: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F456E28u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F456E28:
    ctx->pc = 0x7F456E28u;
    ctx->downcount -= 22;
    // 7F456E28: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F456E28u);
        if (ctx->exception) return;
    }

label_7F456E2C:
    ctx->pc = 0x7F456E2Cu;
    // 7F456E2C: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456E2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456E30:
    ctx->pc = 0x7F456E30u;
    // 7F456E30: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F456E30u);
        if (ctx->exception) return;
    }

label_7F456E34:
    ctx->pc = 0x7F456E34u;
    // 7F456E34: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456E34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456E38:
    ctx->pc = 0x7F456E38u;
    // 7F456E38: psq_l   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F456E38u);
        if (ctx->exception) return;
    }

label_7F456E3C:
    ctx->pc = 0x7F456E3Cu;
    // 7F456E3C: lfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F456E40:
    ctx->pc = 0x7F456E40u;
    // 7F456E40: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F456E44:
    ctx->pc = 0x7F456E44u;
    // 7F456E44: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456E48:
    ctx->pc = 0x7F456E48u;
    // 7F456E48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F456E4C:
    ctx->pc = 0x7F456E4Cu;
    // 7F456E4C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F456E50:
    ctx->pc = 0x7F456E50u;
    // 7F456E50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456E54:
    ctx->pc = 0x7F456E54u;
    ctx->downcount -= 5;
    // 7F456E54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456E58:
    ctx->pc = 0x7F456E58u;
    // 7F456E58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F456E5C:
    ctx->pc = 0x7F456E5Cu;
    // 7F456E5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456E60:
    ctx->pc = 0x7F456E60u;
    // 7F456E60: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456E64:
    ctx->pc = 0x7F456E64u;
    // 7F456E64: bl      0x7F3C2440
    {
            ctx->lr = 0x7F456E68u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F456E68:
    ctx->pc = 0x7F456E68u;
    ctx->downcount -= 5;
    // 7F456E68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456E6C:
    ctx->pc = 0x7F456E6Cu;
    // 7F456E6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F456E70:
    ctx->pc = 0x7F456E70u;
    // 7F456E70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F456E74:
    ctx->pc = 0x7F456E74u;
    // 7F456E74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456E78:
    ctx->pc = 0x7F456E78u;
    ctx->downcount -= 6;
    // 7F456E78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456E7C:
    ctx->pc = 0x7F456E7Cu;
    // 7F456E7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F456E80:
    ctx->pc = 0x7F456E80u;
    // 7F456E80: cmpwi   r4, 3
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

label_7F456E84:
    ctx->pc = 0x7F456E84u;
    // 7F456E84: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F456E88:
    ctx->pc = 0x7F456E88u;
    // 7F456E88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456E8C:
    ctx->pc = 0x7F456E8Cu;
    // 7F456E8C: bc    12, 2, 0x7F456F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456F14;
        }
    }

label_7F456E90:
    ctx->pc = 0x7F456E90u;
    ctx->downcount -= 1;
    // 7F456E90: bc    4, 0, 0x7F456EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456EAC;
        }
    }

label_7F456E94:
    ctx->pc = 0x7F456E94u;
    ctx->downcount -= 2;
    // 7F456E94: cmpwi   r4, 1
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

label_7F456E98:
    ctx->pc = 0x7F456E98u;
    // 7F456E98: bc    12, 2, 0x7F456EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456EE4;
        }
    }

label_7F456E9C:
    ctx->pc = 0x7F456E9Cu;
    ctx->downcount -= 1;
    // 7F456E9C: bc    4, 0, 0x7F456EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456EFC;
        }
    }

label_7F456EA0:
    ctx->pc = 0x7F456EA0u;
    ctx->downcount -= 2;
    // 7F456EA0: cmpwi   r4, 0
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

label_7F456EA4:
    ctx->pc = 0x7F456EA4u;
    // 7F456EA4: bc    4, 0, 0x7F456ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456ECC;
        }
    }

label_7F456EA8:
    ctx->pc = 0x7F456EA8u;
    ctx->downcount -= 1;
    // 7F456EA8: b       0x7F456F54
    {
            goto label_7F456F54;
    }

label_7F456EAC:
    ctx->pc = 0x7F456EACu;
    ctx->downcount -= 4;
    // 7F456EAC: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F456EB0:
    ctx->pc = 0x7F456EB0u;
    // 7F456EB0: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F456EB4:
    ctx->pc = 0x7F456EB4u;
    // 7F456EB4: cmpw    r4, r0
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

label_7F456EB8:
    ctx->pc = 0x7F456EB8u;
    // 7F456EB8: bc    12, 2, 0x7F456F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456F44;
        }
    }

label_7F456EBC:
    ctx->pc = 0x7F456EBCu;
    ctx->downcount -= 1;
    // 7F456EBC: bc    4, 0, 0x7F456F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456F54;
        }
    }

label_7F456EC0:
    ctx->pc = 0x7F456EC0u;
    ctx->downcount -= 2;
    // 7F456EC0: cmpwi   r4, 5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F456EC4:
    ctx->pc = 0x7F456EC4u;
    // 7F456EC4: bc    4, 0, 0x7F456F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456F54;
        }
    }

label_7F456EC8:
    ctx->pc = 0x7F456EC8u;
    ctx->downcount -= 1;
    // 7F456EC8: b       0x7F456F2C
    {
            goto label_7F456F2C;
    }

label_7F456ECC:
    ctx->pc = 0x7F456ECCu;
    ctx->downcount -= 3;
    // 7F456ECC: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456ED0:
    ctx->pc = 0x7F456ED0u;
    // 7F456ED0: cmpwi   r0, 0
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

label_7F456ED4:
    ctx->pc = 0x7F456ED4u;
    // 7F456ED4: bc    4, 2, 0x7F456F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456F60;
        }
    }

label_7F456ED8:
    ctx->pc = 0x7F456ED8u;
    ctx->downcount -= 2;
    // 7F456ED8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F456EDC:
    ctx->pc = 0x7F456EDCu;
    // 7F456EDC: bl      0x7F456804
    {
            ctx->lr = 0x7F456EE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F456804u;
                return;
            }
            goto label_7F456804;
    }

label_7F456EE0:
    ctx->pc = 0x7F456EE0u;
    ctx->downcount -= 1;
    // 7F456EE0: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456EE4:
    ctx->pc = 0x7F456EE4u;
    ctx->downcount -= 3;
    // 7F456EE4: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456EE8:
    ctx->pc = 0x7F456EE8u;
    // 7F456EE8: cmpwi   r0, 0
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

label_7F456EEC:
    ctx->pc = 0x7F456EECu;
    // 7F456EEC: bc    4, 2, 0x7F456F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456F60;
        }
    }

label_7F456EF0:
    ctx->pc = 0x7F456EF0u;
    ctx->downcount -= 2;
    // 7F456EF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F456EF4:
    ctx->pc = 0x7F456EF4u;
    // 7F456EF4: bl      0x7F456804
    {
            ctx->lr = 0x7F456EF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F456804u;
                return;
            }
            goto label_7F456804;
    }

label_7F456EF8:
    ctx->pc = 0x7F456EF8u;
    ctx->downcount -= 1;
    // 7F456EF8: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456EFC:
    ctx->pc = 0x7F456EFCu;
    ctx->downcount -= 3;
    // 7F456EFC: lwz     r3, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456F00:
    ctx->pc = 0x7F456F00u;
    // 7F456F00: cmplwi  r3, 0x0000
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

label_7F456F04:
    ctx->pc = 0x7F456F04u;
    // 7F456F04: bc    12, 2, 0x7F456F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456F60;
        }
    }

label_7F456F08:
    ctx->pc = 0x7F456F08u;
    ctx->downcount -= 2;
    // 7F456F08: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F456F0C:
    ctx->pc = 0x7F456F0Cu;
    // 7F456F0C: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F456F10u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F456F10:
    ctx->pc = 0x7F456F10u;
    ctx->downcount -= 1;
    // 7F456F10: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456F14:
    ctx->pc = 0x7F456F14u;
    ctx->downcount -= 3;
    // 7F456F14: lwz     r3, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456F18:
    ctx->pc = 0x7F456F18u;
    // 7F456F18: cmplwi  r3, 0x0000
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

label_7F456F1C:
    ctx->pc = 0x7F456F1Cu;
    // 7F456F1C: bc    12, 2, 0x7F456F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456F60;
        }
    }

label_7F456F20:
    ctx->pc = 0x7F456F20u;
    ctx->downcount -= 2;
    // 7F456F20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F456F24:
    ctx->pc = 0x7F456F24u;
    // 7F456F24: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F456F28u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F456F28:
    ctx->pc = 0x7F456F28u;
    ctx->downcount -= 1;
    // 7F456F28: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456F2C:
    ctx->pc = 0x7F456F2Cu;
    ctx->downcount -= 3;
    // 7F456F2C: lwz     r3, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F456F30:
    ctx->pc = 0x7F456F30u;
    // 7F456F30: cmplwi  r3, 0x0000
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

label_7F456F34:
    ctx->pc = 0x7F456F34u;
    // 7F456F34: bc    12, 2, 0x7F456F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F456F60;
        }
    }

label_7F456F38:
    ctx->pc = 0x7F456F38u;
    ctx->downcount -= 2;
    // 7F456F38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F456F3C:
    ctx->pc = 0x7F456F3Cu;
    // 7F456F3C: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F456F40u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F456F40:
    ctx->pc = 0x7F456F40u;
    ctx->downcount -= 1;
    // 7F456F40: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456F44:
    ctx->pc = 0x7F456F44u;
    ctx->downcount -= 3;
    // 7F456F44: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F456F48:
    ctx->pc = 0x7F456F48u;
    // 7F456F48: addi    r4, r6, 84
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(84);

label_7F456F4C:
    ctx->pc = 0x7F456F4Cu;
    // 7F456F4C: bl      0x80025A3C
    {
            ctx->lr = 0x7F456F50u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F456F50:
    ctx->pc = 0x7F456F50u;
    ctx->downcount -= 1;
    // 7F456F50: b       0x7F456F60
    {
            goto label_7F456F60;
    }

label_7F456F54:
    ctx->pc = 0x7F456F54u;
    ctx->downcount -= 2;
    // 7F456F54: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F456F58:
    ctx->pc = 0x7F456F58u;
    // 7F456F58: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F456F5Cu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F456F5C:
    ctx->pc = 0x7F456F5Cu;
    ctx->downcount -= 1;
    // 7F456F5C: b       0x7F456F64
    {
            goto label_7F456F64;
    }

label_7F456F60:
    ctx->pc = 0x7F456F60u;
    ctx->downcount -= 1;
    // 7F456F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F456F64:
    ctx->pc = 0x7F456F64u;
    ctx->downcount -= 5;
    // 7F456F64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F456F68:
    ctx->pc = 0x7F456F68u;
    // 7F456F68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F456F6C:
    ctx->pc = 0x7F456F6Cu;
    // 7F456F6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F456F70:
    ctx->pc = 0x7F456F70u;
    // 7F456F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F456F74:
    ctx->pc = 0x7F456F74u;
    ctx->downcount -= 22;
    // 7F456F74: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F456F78:
    ctx->pc = 0x7F456F78u;
    // 7F456F78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F456F7C:
    ctx->pc = 0x7F456F7Cu;
    // 7F456F7C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F456F80:
    ctx->pc = 0x7F456F80u;
    // 7F456F80: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F456F80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F456F84:
    ctx->pc = 0x7F456F84u;
    // 7F456F84: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F456F84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F456F84u);
        if (ctx->exception) return;
    }

label_7F456F88:
    ctx->pc = 0x7F456F88u;
    // 7F456F88: stmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F456F8C:
    ctx->pc = 0x7F456F8Cu;
    // 7F456F8C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F456F8Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F456F90:
    ctx->pc = 0x7F456F90u;
    // 7F456F90: cmplwi  r4, 0x0000
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

label_7F456F94:
    ctx->pc = 0x7F456F94u;
    // 7F456F94: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F456F98:
    ctx->pc = 0x7F456F98u;
    // 7F456F98: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F456F9C:
    ctx->pc = 0x7F456F9Cu;
    // 7F456F9C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F456FA0:
    ctx->pc = 0x7F456FA0u;
    // 7F456FA0: bc    4, 2, 0x7F456FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F456FAC;
        }
    }

label_7F456FA4:
    ctx->pc = 0x7F456FA4u;
    ctx->downcount -= 2;
    // 7F456FA4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F456FA8:
    ctx->pc = 0x7F456FA8u;
    // 7F456FA8: b       0x7F457224
    {
            goto label_7F457224;
    }

label_7F456FAC:
    ctx->pc = 0x7F456FACu;
    ctx->downcount -= 4;
    // 7F456FAC: stw     r4, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F456FB0:
    ctx->pc = 0x7F456FB0u;
    // 7F456FB0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F456FB4:
    ctx->pc = 0x7F456FB4u;
    // 7F456FB4: addi    r4, r27, 84
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(84);

label_7F456FB8:
    ctx->pc = 0x7F456FB8u;
    // 7F456FB8: bl      0x80025A3C
    {
            ctx->lr = 0x7F456FBCu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F456FBC:
    ctx->pc = 0x7F456FBCu;
    ctx->downcount -= 4;
    // 7F456FBC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F456FC0:
    ctx->pc = 0x7F456FC0u;
    // 7F456FC0: addi    r3, r27, 56
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(56);

label_7F456FC4:
    ctx->pc = 0x7F456FC4u;
    // 7F456FC4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F456FC8:
    ctx->pc = 0x7F456FC8u;
    // 7F456FC8: bl      0x7F455B50
    {
            ctx->lr = 0x7F456FCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455B50u;
                return;
            }
            goto label_7F455B50;
    }

label_7F456FCC:
    ctx->pc = 0x7F456FCCu;
    ctx->downcount -= 3;
    // 7F456FCC: lis     r3, 216
    ctx->gpr[3] = ((u32)(s32)(216) << 16);

label_7F456FD0:
    ctx->pc = 0x7F456FD0u;
    // 7F456FD0: addi    r3, r3, -10071
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10071);

label_7F456FD4:
    ctx->pc = 0x7F456FD4u;
    // 7F456FD4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F456FD8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F456FD8:
    ctx->pc = 0x7F456FD8u;
    ctx->downcount -= 7;
    // 7F456FD8: lis     r5, 10
    ctx->gpr[5] = ((u32)(s32)(10) << 16);

label_7F456FDC:
    ctx->pc = 0x7F456FDCu;
    // 7F456FDC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F456FE0:
    ctx->pc = 0x7F456FE0u;
    // 7F456FE0: addi    r3, r5, 5
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(5);

label_7F456FE4:
    ctx->pc = 0x7F456FE4u;
    // 7F456FE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F456FE8:
    ctx->pc = 0x7F456FE8u;
    // 7F456FE8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F456FEC:
    ctx->pc = 0x7F456FECu;
    // 7F456FEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F456FF0:
    ctx->pc = 0x7F456FF0u;
    // 7F456FF0: bl      0x7F3C2408
    {
            ctx->lr = 0x7F456FF4u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F456FF4:
    ctx->pc = 0x7F456FF4u;
    ctx->downcount -= 3;
    // 7F456FF4: or.   r31, r3, r3
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

label_7F456FF8:
    ctx->pc = 0x7F456FF8u;
    // 7F456FF8: stw     r31, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F456FFC:
    ctx->pc = 0x7F456FFCu;
    // 7F456FFC: bc    4, 2, 0x7F457008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457008;
        }
    }

label_7F457000:
    ctx->pc = 0x7F457000u;
    ctx->downcount -= 2;
    // 7F457000: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F457004:
    ctx->pc = 0x7F457004u;
    // 7F457004: b       0x7F457224
    {
            goto label_7F457224;
    }

label_7F457008:
    ctx->pc = 0x7F457008u;
    ctx->downcount -= 2;
    // 7F457008: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F45700C:
    ctx->pc = 0x7F45700Cu;
    // 7F45700C: bl      0x7F3C2534
    {
            ctx->lr = 0x7F457010u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F457010:
    ctx->pc = 0x7F457010u;
    ctx->downcount -= 20;
    // 7F457010: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F457014:
    ctx->pc = 0x7F457014u;
    // 7F457014: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457018:
    ctx->pc = 0x7F457018u;
    // 7F457018: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45701C:
    ctx->pc = 0x7F45701Cu;
    // 7F45701C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F457020:
    ctx->pc = 0x7F457020u;
    // 7F457020: addi    r4, r3, -7240
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7240);

label_7F457024:
    ctx->pc = 0x7F457024u;
    // 7F457024: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F457028:
    ctx->pc = 0x7F457028u;
    // 7F457028: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45702C:
    ctx->pc = 0x7F45702Cu;
    // 7F45702C: addi    r5, r3, -6704
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F457030:
    ctx->pc = 0x7F457030u;
    // 7F457030: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457030u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457034:
    ctx->pc = 0x7F457034u;
    // 7F457034: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457038:
    ctx->pc = 0x7F457038u;
    // 7F457038: lwz     r30, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F45703C:
    ctx->pc = 0x7F45703Cu;
    // 7F45703C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F457040:
    ctx->pc = 0x7F457040u;
    // 7F457040: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F457044:
    ctx->pc = 0x7F457044u;
    // 7F457044: stfs     f0, 152(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F457044u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457048:
    ctx->pc = 0x7F457048u;
    // 7F457048: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457048u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45704C:
    ctx->pc = 0x7F45704Cu;
    // 7F45704C: lfs     f0, 152(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F45704Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457050:
    ctx->pc = 0x7F457050u;
    // 7F457050: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457050u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F457054:
    ctx->pc = 0x7F457054u;
    // 7F457054: stfs     f0, 148(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F457054u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457058:
    ctx->pc = 0x7F457058u;
    // 7F457058: stfs     f31, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F457058u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F45705C:
    ctx->pc = 0x7F45705Cu;
    // 7F45705C: bl      0x7F4555B0
    {
            ctx->lr = 0x7F457060u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F457060:
    ctx->pc = 0x7F457060u;
    ctx->downcount -= 14;
    // 7F457060: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457064:
    ctx->pc = 0x7F457064u;
    // 7F457064: stb     r3, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F457068:
    ctx->pc = 0x7F457068u;
    // 7F457068: addi    r5, r4, -7304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7304);

label_7F45706C:
    ctx->pc = 0x7F45706Cu;
    // 7F45706C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F457070:
    ctx->pc = 0x7F457070u;
    // 7F457070: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F457074:
    ctx->pc = 0x7F457074u;
    // 7F457074: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F457078:
    ctx->pc = 0x7F457078u;
    // 7F457078: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457078u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45707C:
    ctx->pc = 0x7F45707Cu;
    // 7F45707C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F457080:
    ctx->pc = 0x7F457080u;
    // 7F457080: stw     r6, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F457084:
    ctx->pc = 0x7F457084u;
    // 7F457084: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F457088:
    ctx->pc = 0x7F457088u;
    // 7F457088: addi    r3, r3, 32528
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32528);

label_7F45708C:
    ctx->pc = 0x7F45708Cu;
    // 7F45708C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F457090:
    ctx->pc = 0x7F457090u;
    // 7F457090: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F457094:
    ctx->downcount -= 72;
    // 7F457094: addi    r6, r5, 73
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(73);

label_7F457098:
    // 7F457098: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F45709C:
    ctx->pc = 0x7F45709Cu;
    // 7F45709C: stbx    r0, r27, r6
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4570A0:
    // 7F4570A0: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F4570A4:
    ctx->pc = 0x7F4570A4u;
    // 7F4570A4: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4570A8:
    ctx->pc = 0x7F4570A8u;
    // 7F4570A8: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4570AC:
    ctx->pc = 0x7F4570ACu;
    // 7F4570AC: stw     r7, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4570B0:
    ctx->pc = 0x7F4570B0u;
    // 7F4570B0: stw     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4570B4:
    ctx->pc = 0x7F4570B4u;
    // 7F4570B4: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4570B8:
    ctx->pc = 0x7F4570B8u;
    // 7F4570B8: lwz     r6, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4570BC:
    ctx->pc = 0x7F4570BCu;
    // 7F4570BC: stw     r7, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4570C0:
    ctx->pc = 0x7F4570C0u;
    // 7F4570C0: stw     r6, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4570C4:
    // 7F4570C4: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F4570C8:
    ctx->pc = 0x7F4570C8u;
    // 7F4570C8: lbz     r6, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F4570CC:
    // 7F4570CC: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F4570D0:
    // 7F4570D0: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F4570D4:
    ctx->pc = 0x7F4570D4u;
    // 7F4570D4: lfsx    f0, r3, r6
    if (!ppc_fp_available_inline(ctx, 0x7F4570D4u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4570D8:
    ctx->pc = 0x7F4570D8u;
    // 7F4570D8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4570D8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4570DC:
    ctx->pc = 0x7F4570DCu;
    // 7F4570DC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4570DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4570E0:
    ctx->pc = 0x7F4570E0u;
    // 7F4570E0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4570E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4570E4:
    ctx->pc = 0x7F4570E4u;
    // 7F4570E4: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4570E8:
    ctx->pc = 0x7F4570E8u;
    // 7F4570E8: sth     r6, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F4570EC:
    ctx->pc = 0x7F4570ECu;
    // 7F4570EC: lbz     r6, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F4570F0:
    // 7F4570F0: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F4570F4:
    // 7F4570F4: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F4570F8:
    // 7F4570F8: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F4570FC:
    ctx->pc = 0x7F4570FCu;
    // 7F4570FC: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4570FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457100:
    ctx->pc = 0x7F457100u;
    // 7F457100: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457100u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F457104:
    ctx->pc = 0x7F457104u;
    // 7F457104: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457104u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457108:
    ctx->pc = 0x7F457108u;
    // 7F457108: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45710C:
    ctx->pc = 0x7F45710Cu;
    // 7F45710C: lwz     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457110:
    ctx->pc = 0x7F457110u;
    // 7F457110: sth     r6, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F457114:
    ctx->pc = 0x7F457114u;
    // 7F457114: lbz     r6, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F457118:
    // 7F457118: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F45711C:
    // 7F45711C: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F457120:
    // 7F457120: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F457124:
    ctx->pc = 0x7F457124u;
    // 7F457124: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F457124u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457128:
    ctx->pc = 0x7F457128u;
    // 7F457128: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457128u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F45712C:
    ctx->pc = 0x7F45712Cu;
    // 7F45712C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45712Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457130:
    ctx->pc = 0x7F457130u;
    // 7F457130: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457134:
    ctx->pc = 0x7F457134u;
    // 7F457134: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457138:
    ctx->pc = 0x7F457138u;
    // 7F457138: sth     r6, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F45713C:
    ctx->pc = 0x7F45713Cu;
    // 7F45713C: lbz     r6, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F457140:
    // 7F457140: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F457144:
    // 7F457144: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F457148:
    // 7F457148: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F45714C:
    ctx->pc = 0x7F45714Cu;
    // 7F45714C: lfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F45714Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457150:
    ctx->pc = 0x7F457150u;
    // 7F457150: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457150u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F457154:
    ctx->pc = 0x7F457154u;
    // 7F457154: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457154u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457158:
    ctx->pc = 0x7F457158u;
    // 7F457158: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45715C:
    ctx->pc = 0x7F45715Cu;
    // 7F45715C: lwz     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457160:
    ctx->pc = 0x7F457160u;
    // 7F457160: sth     r6, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F457164:
    ctx->pc = 0x7F457164u;
    // 7F457164: lfs     f0, 68(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F457164u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457168:
    ctx->pc = 0x7F457168u;
    // 7F457168: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457168u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F45716C:
    ctx->pc = 0x7F45716Cu;
    // 7F45716C: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45716Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457170:
    ctx->pc = 0x7F457170u;
    // 7F457170: lwz     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457174:
    ctx->pc = 0x7F457174u;
    // 7F457174: stb     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F457178:
    ctx->pc = 0x7F457178u;
    // 7F457178: lfs     f0, 64(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F457178u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45717C:
    ctx->pc = 0x7F45717Cu;
    // 7F45717C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45717Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457180:
    ctx->pc = 0x7F457180u;
    // 7F457180: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457180u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457184:
    ctx->pc = 0x7F457184u;
    // 7F457184: lwz     r6, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457188:
    ctx->pc = 0x7F457188u;
    // 7F457188: stb     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45718C:
    ctx->pc = 0x7F45718Cu;
    // 7F45718C: lfs     f0, 60(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F45718Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457190:
    ctx->pc = 0x7F457190u;
    // 7F457190: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457190u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457194:
    ctx->pc = 0x7F457194u;
    // 7F457194: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457198:
    ctx->pc = 0x7F457198u;
    // 7F457198: lwz     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F45719C:
    ctx->pc = 0x7F45719Cu;
    // 7F45719C: stb     r6, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F4571A0:
    ctx->pc = 0x7F4571A0u;
    // 7F4571A0: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4571A4:
    ctx->pc = 0x7F4571A4u;
    // 7F4571A4: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4571A8:
    ctx->pc = 0x7F4571A8u;
    // 7F4571A8: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4571AC:
    // 7F4571AC: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F4571B0:
    // 7F4571B0: bc    16, 0, 0x7F457094
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457094u;
                return;
            }
            goto label_7F457094;
        }
    }

label_7F4571B4:
    ctx->pc = 0x7F4571B4u;
    ctx->downcount -= 4;
    // 7F4571B4: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4571B8:
    ctx->pc = 0x7F4571B8u;
    // 7F4571B8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F4571BC:
    ctx->pc = 0x7F4571BCu;
    // 7F4571BC: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4571C0:
    ctx->pc = 0x7F4571C0u;
    // 7F4571C0: bl      0x8000519C
    {
            ctx->lr = 0x7F4571C4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4571C4:
    ctx->pc = 0x7F4571C4u;
    ctx->downcount -= 4;
    // 7F4571C4: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4571C8:
    ctx->pc = 0x7F4571C8u;
    // 7F4571C8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F4571CC:
    ctx->pc = 0x7F4571CCu;
    // 7F4571CC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4571D0:
    ctx->pc = 0x7F4571D0u;
    // 7F4571D0: bl      0x8000519C
    {
            ctx->lr = 0x7F4571D4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F4571D4:
    ctx->pc = 0x7F4571D4u;
    ctx->downcount -= 8;
    // 7F4571D4: lwz     r5, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4571D8:
    ctx->pc = 0x7F4571D8u;
    // 7F4571D8: lis     r3, 32581
    ctx->gpr[3] = ((u32)(s32)(32581) << 16);

label_7F4571DC:
    ctx->pc = 0x7F4571DCu;
    // 7F4571DC: addi    r4, r3, 28280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28280);

label_7F4571E0:
    ctx->pc = 0x7F4571E0u;
    // 7F4571E0: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4571E4:
    ctx->pc = 0x7F4571E4u;
    // 7F4571E4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4571E8:
    ctx->pc = 0x7F4571E8u;
    // 7F4571E8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F4571EC:
    ctx->pc = 0x7F4571ECu;
    // 7F4571EC: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4571F0:
    ctx->pc = 0x7F4571F0u;
    // 7F4571F0: bl      0x7F3C8990
    {
            ctx->lr = 0x7F4571F4u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F4571F4:
    ctx->pc = 0x7F4571F4u;
    ctx->downcount -= 3;
    // 7F4571F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4571F8:
    ctx->pc = 0x7F4571F8u;
    // 7F4571F8: addi    r3, r27, 84
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(84);

label_7F4571FC:
    ctx->pc = 0x7F4571FCu;
    // 7F4571FC: bl      0x7F457AC8
    {
            ctx->lr = 0x7F457200u;
            goto label_7F457AC8;
    }

label_7F457200:
    ctx->pc = 0x7F457200u;
    ctx->downcount -= 4;
    // 7F457200: stw     r3, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F457204:
    ctx->pc = 0x7F457204u;
    // 7F457204: lwz     r4, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457208:
    ctx->pc = 0x7F457208u;
    // 7F457208: cmplwi  r4, 0x0000
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

label_7F45720C:
    ctx->pc = 0x7F45720Cu;
    // 7F45720C: bc    4, 2, 0x7F457218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457218;
        }
    }

label_7F457210:
    ctx->pc = 0x7F457210u;
    ctx->downcount -= 2;
    // 7F457210: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F457214:
    ctx->pc = 0x7F457214u;
    // 7F457214: b       0x7F457224
    {
            goto label_7F457224;
    }

label_7F457218:
    ctx->pc = 0x7F457218u;
    ctx->downcount -= 2;
    // 7F457218: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F45721C:
    ctx->pc = 0x7F45721Cu;
    // 7F45721C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F457220u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F457220:
    ctx->pc = 0x7F457220u;
    ctx->downcount -= 1;
    // 7F457220: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F457224:
    ctx->pc = 0x7F457224u;
    ctx->downcount -= 18;
    // 7F457224: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F457224u);
        if (ctx->exception) return;
    }

label_7F457228:
    ctx->pc = 0x7F457228u;
    // 7F457228: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457228u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45722C:
    ctx->pc = 0x7F45722Cu;
    // 7F45722C: lmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457230:
    ctx->pc = 0x7F457230u;
    // 7F457230: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457234:
    ctx->pc = 0x7F457234u;
    // 7F457234: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457238:
    ctx->pc = 0x7F457238u;
    // 7F457238: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F45723C:
    ctx->pc = 0x7F45723Cu;
    // 7F45723C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457240:
    ctx->pc = 0x7F457240u;
    ctx->downcount -= 24;
    // 7F457240: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457244:
    ctx->pc = 0x7F457244u;
    // 7F457244: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457248:
    ctx->pc = 0x7F457248u;
    // 7F457248: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45724C:
    ctx->pc = 0x7F45724Cu;
    // 7F45724C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457250:
    ctx->pc = 0x7F457250u;
    // 7F457250: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F457254:
    ctx->pc = 0x7F457254u;
    // 7F457254: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F457254u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F457258:
    ctx->pc = 0x7F457258u;
    // 7F457258: stmw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45725C:
    ctx->pc = 0x7F45725Cu;
    // 7F45725C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457260:
    ctx->pc = 0x7F457260u;
    // 7F457260: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F457264:
    ctx->pc = 0x7F457264u;
    // 7F457264: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F457268:
    ctx->pc = 0x7F457268u;
    // 7F457268: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F45726C:
    ctx->pc = 0x7F45726Cu;
    // 7F45726C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F457270:
    ctx->pc = 0x7F457270u;
    // 7F457270: li      r5, 244
    ctx->gpr[5] = (u32)(s32)(244);

label_7F457274:
    ctx->pc = 0x7F457274u;
    // 7F457274: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F457278u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F457278:
    ctx->pc = 0x7F457278u;
    ctx->downcount -= 2;
    // 7F457278: or.   r31, r3, r3
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

label_7F45727C:
    ctx->pc = 0x7F45727Cu;
    // 7F45727C: bc    12, 2, 0x7F4572EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4572EC;
        }
    }

label_7F457280:
    ctx->pc = 0x7F457280u;
    ctx->downcount -= 5;
    // 7F457280: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F457284:
    ctx->pc = 0x7F457284u;
    // 7F457284: lis     r5, 32581
    ctx->gpr[5] = ((u32)(s32)(32581) << 16);

label_7F457288:
    ctx->pc = 0x7F457288u;
    // 7F457288: addi    r4, r4, 27584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27584);

label_7F45728C:
    ctx->pc = 0x7F45728Cu;
    // 7F45728C: addi    r5, r5, 28244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28244);

label_7F457290:
    ctx->pc = 0x7F457290u;
    // 7F457290: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F457294u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F457294:
    ctx->pc = 0x7F457294u;
    ctx->downcount -= 16;
    // 7F457294: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457298:
    ctx->pc = 0x7F457298u;
    // 7F457298: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F45729C:
    ctx->pc = 0x7F45729Cu;
    // 7F45729C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4572A0:
    ctx->pc = 0x7F4572A0u;
    // 7F4572A0: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F4572A0u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F4572A4:
    ctx->pc = 0x7F4572A4u;
    // 7F4572A4: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F4572A8:
    ctx->pc = 0x7F4572A8u;
    // 7F4572A8: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F4572AC:
    ctx->pc = 0x7F4572ACu;
    // 7F4572AC: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4572B0:
    ctx->pc = 0x7F4572B0u;
    // 7F4572B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4572B4:
    ctx->pc = 0x7F4572B4u;
    // 7F4572B4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4572B8:
    ctx->pc = 0x7F4572B8u;
    // 7F4572B8: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4572BC:
    ctx->pc = 0x7F4572BCu;
    // 7F4572BC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4572C0:
    ctx->pc = 0x7F4572C0u;
    // 7F4572C0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4572C4:
    ctx->pc = 0x7F4572C4u;
    // 7F4572C4: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4572C8:
    ctx->pc = 0x7F4572C8u;
    // 7F4572C8: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4572CC:
    ctx->pc = 0x7F4572CCu;
    // 7F4572CC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4572D0:
    ctx->pc = 0x7F4572D0u;
    // 7F4572D0: bl      0x7F456F74
    {
            ctx->lr = 0x7F4572D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F456F74u;
                return;
            }
            goto label_7F456F74;
    }

label_7F4572D4:
    ctx->pc = 0x7F4572D4u;
    ctx->downcount -= 2;
    // 7F4572D4: cmpwi   r3, 0
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

label_7F4572D8:
    ctx->pc = 0x7F4572D8u;
    // 7F4572D8: bc    4, 0, 0x7F4572EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4572EC;
        }
    }

label_7F4572DC:
    ctx->pc = 0x7F4572DCu;
    ctx->downcount -= 2;
    // 7F4572DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4572E0:
    ctx->pc = 0x7F4572E0u;
    // 7F4572E0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F4572E4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F4572E4:
    ctx->pc = 0x7F4572E4u;
    ctx->downcount -= 2;
    // 7F4572E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4572E8:
    ctx->pc = 0x7F4572E8u;
    // 7F4572E8: b       0x7F4572F0
    {
            goto label_7F4572F0;
    }

label_7F4572EC:
    ctx->pc = 0x7F4572ECu;
    ctx->downcount -= 1;
    // 7F4572EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4572F0:
    ctx->pc = 0x7F4572F0u;
    ctx->downcount -= 17;
    // 7F4572F0: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4572F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4572F4:
    ctx->pc = 0x7F4572F4u;
    // 7F4572F4: lmw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4572F8:
    ctx->pc = 0x7F4572F8u;
    // 7F4572F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4572FC:
    ctx->pc = 0x7F4572FCu;
    // 7F4572FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457300:
    ctx->pc = 0x7F457300u;
    // 7F457300: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F457304:
    ctx->pc = 0x7F457304u;
    // 7F457304: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457308:
    ctx->pc = 0x7F457308u;
    ctx->downcount -= 19;
    // 7F457308: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45730C:
    ctx->pc = 0x7F45730Cu;
    // 7F45730C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457310:
    ctx->pc = 0x7F457310u;
    // 7F457310: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457314:
    ctx->pc = 0x7F457314u;
    // 7F457314: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F457318:
    ctx->pc = 0x7F457318u;
    // 7F457318: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45731C:
    ctx->pc = 0x7F45731Cu;
    // 7F45731C: addi    r28, r26, 72
    ctx->gpr[28] = ctx->gpr[26] + (u32)(s32)(72);

label_7F457320:
    ctx->pc = 0x7F457320u;
    // 7F457320: addi    r4, r26, 1872
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(1872);

label_7F457324:
    ctx->pc = 0x7F457324u;
    // 7F457324: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457328:
    ctx->pc = 0x7F457328u;
    // 7F457328: bl      0x80025A3C
    {
            ctx->lr = 0x7F45732Cu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F45732C:
    ctx->pc = 0x7F45732Cu;
    ctx->downcount -= 4;
    // 7F45732C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F457330:
    ctx->pc = 0x7F457330u;
    // 7F457330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457334:
    ctx->pc = 0x7F457334u;
    // 7F457334: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F457338:
    ctx->pc = 0x7F457338u;
    ctx->downcount -= 3;
    // 7F457338: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45733C:
    // 7F45733C: cmpwi   r0, 0
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

label_7F457340:
    // 7F457340: bc    4, 2, 0x7F457430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457430;
        }
    }

label_7F457344:
    ctx->downcount -= 28;
    // 7F457344: rlwinm r29, r3, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F457348:
    // 7F457348: rlwinm r0, r3, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F45734C:
    // 7F45734C: add   r30, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F457350:
    // 7F457350: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457354:
    ctx->pc = 0x7F457354u;
    // 7F457354: lwz     r4, 1936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457358:
    // 7F457358: add   r31, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F45735C:
    // 7F45735C: addi    r5, r3, -7232
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7232);

label_7F457360:
    ctx->pc = 0x7F457360u;
    // 7F457360: lwz     r6, 1920(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F457364:
    ctx->pc = 0x7F457364u;
    // 7F457364: lwz     r27, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F457368:
    // 7F457368: addi    r3, r26, 1904
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(1904);

label_7F45736C:
    ctx->pc = 0x7F45736Cu;
    // 7F45736C: lwz     r0, 1924(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457370:
    // 7F457370: addi    r4, r31, 1360
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1360);

label_7F457374:
    ctx->pc = 0x7F457374u;
    // 7F457374: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457374u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457378:
    ctx->pc = 0x7F457378u;
    // 7F457378: stw     r6, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F45737C:
    ctx->pc = 0x7F45737Cu;
    // 7F45737C: stw     r0, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457380:
    ctx->pc = 0x7F457380u;
    // 7F457380: lwz     r5, 1928(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1928);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F457384:
    ctx->pc = 0x7F457384u;
    // 7F457384: lwz     r0, 1932(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457388:
    ctx->pc = 0x7F457388u;
    // 7F457388: stw     r5, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45738C:
    ctx->pc = 0x7F45738Cu;
    // 7F45738C: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457390:
    ctx->pc = 0x7F457390u;
    // 7F457390: lwz     r5, 1920(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1920);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F457394:
    ctx->pc = 0x7F457394u;
    // 7F457394: lwz     r0, 1924(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457398:
    ctx->pc = 0x7F457398u;
    // 7F457398: stw     r5, 848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45739C:
    ctx->pc = 0x7F45739Cu;
    // 7F45739C: stw     r0, 852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4573A0:
    ctx->pc = 0x7F4573A0u;
    // 7F4573A0: lwz     r5, 1928(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1928);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4573A4:
    ctx->pc = 0x7F4573A4u;
    // 7F4573A4: lwz     r0, 1932(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4573A8:
    ctx->pc = 0x7F4573A8u;
    // 7F4573A8: stw     r5, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F4573AC:
    ctx->pc = 0x7F4573ACu;
    // 7F4573AC: stw     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4573B0:
    // 7F4573B0: bl      0x800261FC
    {
            ctx->lr = 0x7F4573B4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F4573B4:
    ctx->downcount -= 5;
    // 7F4573B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4573B8:
    // 7F4573B8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4573BC:
    ctx->pc = 0x7F4573BCu;
    // 7F4573BC: lfs     f0, -7228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4573BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4573C0:
    ctx->pc = 0x7F4573C0u;
    // 7F4573C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4573C4:
    ctx->pc = 0x7F4573C4u;
    ctx->downcount -= 11;
    // 7F4573C4: lwz     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4573C8:
    ctx->pc = 0x7F4573C8u;
    // 7F4573C8: lwz     r0, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4573CC:
    ctx->pc = 0x7F4573CCu;
    // 7F4573CC: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4573D0:
    ctx->pc = 0x7F4573D0u;
    // 7F4573D0: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4573D4:
    ctx->pc = 0x7F4573D4u;
    // 7F4573D4: lwz     r3, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4573D8:
    ctx->pc = 0x7F4573D8u;
    // 7F4573D8: lwz     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4573DC:
    ctx->pc = 0x7F4573DCu;
    // 7F4573DC: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4573E0:
    ctx->pc = 0x7F4573E0u;
    // 7F4573E0: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4573E4:
    ctx->pc = 0x7F4573E4u;
    // 7F4573E4: stfs     f0, 12(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F4573E4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4573E8:
    // 7F4573E8: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F4573EC:
    // 7F4573EC: bc    16, 0, 0x7F4573C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4573C4u;
                return;
            }
            goto label_7F4573C4;
        }
    }

label_7F4573F0:
    ctx->pc = 0x7F4573F0u;
    ctx->downcount -= 5;
    // 7F4573F0: lwz     r4, 1936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4573F4:
    // 7F4573F4: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F4573F8:
    ctx->pc = 0x7F4573F8u;
    // 7F4573F8: lwz     r3, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4573FC:
    ctx->pc = 0x7F4573FCu;
    // 7F4573FC: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457400:
    // 7F457400: bl      0x8000519C
    {
            ctx->lr = 0x7F457404u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F457404:
    ctx->downcount -= 11;
    // 7F457404: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457408:
    // 7F457408: add   r3, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F45740C:
    ctx->pc = 0x7F45740Cu;
    // 7F45740C: lfs     f0, -7224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45740Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457410:
    // 7F457410: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F457414:
    ctx->pc = 0x7F457414u;
    // 7F457414: stfs     f0, 200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457414u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457418:
    ctx->pc = 0x7F457418u;
    // 7F457418: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45741C:
    ctx->pc = 0x7F45741Cu;
    // 7F45741C: lwz     r3, 1936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457420:
    ctx->pc = 0x7F457420u;
    // 7F457420: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457424:
    // 7F457424: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F457428:
    ctx->pc = 0x7F457428u;
    // 7F457428: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45742C:
    // 7F45742C: b       0x7F45743C
    {
            goto label_7F45743C;
    }

label_7F457430:
    ctx->downcount -= 3;
    // 7F457430: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F457434:
    // 7F457434: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F457438:
    // 7F457438: bc    16, 0, 0x7F457338
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457338u;
                return;
            }
            goto label_7F457338;
        }
    }

label_7F45743C:
    ctx->pc = 0x7F45743Cu;
    ctx->downcount -= 16;
    // 7F45743C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457440:
    ctx->pc = 0x7F457440u;
    // 7F457440: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457444:
    ctx->pc = 0x7F457444u;
    // 7F457444: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457448:
    ctx->pc = 0x7F457448u;
    // 7F457448: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F45744C:
    ctx->pc = 0x7F45744Cu;
    // 7F45744C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457450:
    ctx->pc = 0x7F457450u;
    ctx->downcount -= 22;
    // 7F457450: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457454:
    ctx->pc = 0x7F457454u;
    // 7F457454: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457458:
    ctx->pc = 0x7F457458u;
    // 7F457458: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F45745C:
    ctx->pc = 0x7F45745Cu;
    // 7F45745C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457460:
    ctx->pc = 0x7F457460u;
    // 7F457460: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F457464:
    ctx->pc = 0x7F457464u;
    // 7F457464: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457468:
    ctx->pc = 0x7F457468u;
    // 7F457468: lfs     f0, 332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457468u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45746C:
    ctx->pc = 0x7F45746Cu;
    // 7F45746C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457470:
    ctx->pc = 0x7F457470u;
    // 7F457470: lfs     f1, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457470u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457474:
    ctx->pc = 0x7F457474u;
    // 7F457474: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457474u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F457478:
    ctx->pc = 0x7F457478u;
    // 7F457478: stfs     f0, 328(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F457478u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(328);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45747C:
    ctx->pc = 0x7F45747Cu;
    // 7F45747C: bl      0x7F026F84
    {
            ctx->lr = 0x7F457480u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F457480:
    ctx->pc = 0x7F457480u;
    ctx->downcount -= 5;
    // 7F457480: addi    r29, r24, 72
    ctx->gpr[29] = ctx->gpr[24] + (u32)(s32)(72);

label_7F457484:
    ctx->pc = 0x7F457484u;
    // 7F457484: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457488:
    ctx->pc = 0x7F457488u;
    // 7F457488: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F45748C:
    ctx->pc = 0x7F45748Cu;
    // 7F45748C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F457490:
    ctx->pc = 0x7F457490u;
    // 7F457490: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F457494:
    ctx->pc = 0x7F457494u;
    ctx->downcount -= 3;
    // 7F457494: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457498:
    // 7F457498: cmpwi   r0, 0
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

label_7F45749C:
    // 7F45749C: bc    12, 2, 0x7F457698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F457698;
        }
    }

label_7F4574A0:
    ctx->downcount -= 5;
    // 7F4574A0: add   r31, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F4574A4:
    ctx->pc = 0x7F4574A4u;
    // 7F4574A4: lwz     r3, 1936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4574A8:
    ctx->pc = 0x7F4574A8u;
    // 7F4574A8: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4574AC:
    // 7F4574AC: rlwinm. r0, r0, 0, 18, 19
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

label_7F4574B0:
    // 7F4574B0: bc    12, 2, 0x7F4574C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4574C0;
        }
    }

label_7F4574B4:
    ctx->downcount -= 3;
    // 7F4574B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4574B8:
    ctx->pc = 0x7F4574B8u;
    // 7F4574B8: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4574BC:
    // 7F4574BC: b       0x7F457698
    {
            goto label_7F457698;
    }

label_7F4574C0:
    ctx->pc = 0x7F4574C0u;
    ctx->downcount -= 15;
    // 7F4574C0: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4574C4:
    // 7F4574C4: add   r5, r24, r23
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F4574C8:
    // 7F4574C8: addi    r27, r5, 336
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(336);

label_7F4574CC:
    // 7F4574CC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F4574D0:
    // 7F4574D0: addi    r26, r5, 848
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(848);

label_7F4574D4:
    ctx->pc = 0x7F4574D4u;
    // 7F4574D4: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4574D8:
    ctx->pc = 0x7F4574D8u;
    // 7F4574D8: lwz     r4, 1936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4574DC:
    ctx->pc = 0x7F4574DCu;
    // 7F4574DC: lfs     f1, 200(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4574DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4574E0:
    ctx->pc = 0x7F4574E0u;
    // 7F4574E0: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4574E4:
    ctx->pc = 0x7F4574E4u;
    // 7F4574E4: lfs     f0, 68(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F4574E4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4574E8:
    // 7F4574E8: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4574EC:
    // 7F4574EC: addi    r0, r3, 184
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(184);

label_7F4574F0:
    ctx->pc = 0x7F4574F0u;
    // 7F4574F0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4574F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F4574F4:
    ctx->pc = 0x7F4574F4u;
    // 7F4574F4: lwzx    r28, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F4574F8:
    // 7F4574F8: bc    4, 1, 0x7F45750C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45750C;
        }
    }

label_7F4574FC:
    ctx->pc = 0x7F4574FCu;
    ctx->downcount -= 4;
    // 7F4574FC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457500:
    // 7F457500: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F457504:
    ctx->pc = 0x7F457504u;
    // 7F457504: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457508:
    // 7F457508: b       0x7F457698
    {
            goto label_7F457698;
    }

label_7F45750C:
    ctx->pc = 0x7F45750Cu;
    ctx->downcount -= 4;
    // 7F45750C: lfs     f1, 328(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F45750Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457510:
    // 7F457510: addi    r3, r5, 1360
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1360);

label_7F457514:
    // 7F457514: addi    r4, r24, 2064
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457518:
    // 7F457518: bl      0x80026020
    {
            ctx->lr = 0x7F45751Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F45751C:
    ctx->downcount -= 4;
    // 7F45751C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457520:
    // 7F457520: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457524:
    // 7F457524: addi    r4, r24, 2064
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457528:
    // 7F457528: bl      0x800261B4
    {
            ctx->lr = 0x7F45752Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F45752C:
    ctx->downcount -= 3;
    // 7F45752C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457530:
    // 7F457530: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457534:
    // 7F457534: bl      0x7F4556C4
    {
            ctx->lr = 0x7F457538u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556C4u;
                return;
            }
            goto label_7F4556C4;
    }

label_7F457538:
    ctx->downcount -= 4;
    // 7F457538: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45753C:
    ctx->pc = 0x7F45753Cu;
    // 7F45753C: lfs     f0, -7220(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45753Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457540:
    ctx->pc = 0x7F457540u;
    // 7F457540: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457540u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F457544:
    // 7F457544: bc    4, 1, 0x7F45755C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45755C;
        }
    }

label_7F457548:
    ctx->pc = 0x7F457548u;
    ctx->downcount -= 5;
    // 7F457548: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457548u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F45754C:
    // 7F45754C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457550:
    // 7F457550: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457554:
    // 7F457554: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457558:
    // 7F457558: bl      0x7F455AC8
    {
            ctx->lr = 0x7F45755Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455AC8u;
                return;
            }
            goto label_7F455AC8;
    }

label_7F45755C:
    ctx->downcount -= 6;
    // 7F45755C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457560:
    // 7F457560: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457564:
    ctx->pc = 0x7F457564u;
    // 7F457564: lfs     f1, -7216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457564u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457568:
    // 7F457568: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F45756C:
    // 7F45756C: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457570:
    // 7F457570: bl      0x7F4556F0
    {
            ctx->lr = 0x7F457574u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556F0u;
                return;
            }
            goto label_7F4556F0;
    }

label_7F457574:
    ctx->downcount -= 7;
    // 7F457574: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457578:
    // 7F457578: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F45757C:
    // 7F45757C: addi    r5, r3, -7228
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7228);

label_7F457580:
    // 7F457580: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457584:
    ctx->pc = 0x7F457584u;
    // 7F457584: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457584u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457588:
    ctx->pc = 0x7F457588u;
    // 7F457588: stfs     f0, 2076(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F457588u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2076);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45758C:
    // 7F45758C: bl      0x7F4556C4
    {
            ctx->lr = 0x7F457590u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556C4u;
                return;
            }
            goto label_7F4556C4;
    }

label_7F457590:
    ctx->downcount -= 12;
    // 7F457590: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457594:
    // 7F457594: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457598:
    // 7F457598: addi    r5, r4, -7212
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7212);

label_7F45759C:
    ctx->pc = 0x7F45759Cu;
    // 7F45759C: lfs     f0, -7208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45759Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4575A0:
    ctx->pc = 0x7F4575A0u;
    // 7F4575A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4575A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4575A4:
    // 7F4575A4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4575A8:
    // 7F4575A8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F4575AC:
    // 7F4575AC: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F4575B0:
    ctx->pc = 0x7F4575B0u;
    // 7F4575B0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4575B0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F4575B4:
    // 7F4575B4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4575B8:
    ctx->pc = 0x7F4575B8u;
    // 7F4575B8: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4575B8u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F4575BC:
    // 7F4575BC: bl      0x7F45573C
    {
            ctx->lr = 0x7F4575C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45573Cu;
                return;
            }
            goto label_7F45573C;
    }

label_7F4575C0:
    ctx->downcount -= 6;
    // 7F4575C0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4575C4:
    // 7F4575C4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4575C8:
    // 7F4575C8: addi    r5, r4, -7204
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7204);

label_7F4575CC:
    // 7F4575CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4575D0:
    ctx->pc = 0x7F4575D0u;
    // 7F4575D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4575D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4575D4:
    // 7F4575D4: bl      0x80026020
    {
            ctx->lr = 0x7F4575D8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F4575D8:
    ctx->downcount -= 4;
    // 7F4575D8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4575DC:
    // 7F4575DC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F4575E0:
    // 7F4575E0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4575E4:
    // 7F4575E4: bl      0x800261B4
    {
            ctx->lr = 0x7F4575E8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F4575E8:
    ctx->downcount -= 4;
    // 7F4575E8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F4575EC:
    // 7F4575EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4575F0:
    // 7F4575F0: addi    r5, r28, 16
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(16);

label_7F4575F4:
    // 7F4575F4: bl      0x800261B4
    {
            ctx->lr = 0x7F4575F8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F4575F8:
    ctx->downcount -= 6;
    // 7F4575F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4575FC:
    // 7F4575FC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457600:
    ctx->pc = 0x7F457600u;
    // 7F457600: lfs     f1, -7200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457600u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457604:
    // 7F457604: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457608:
    // 7F457608: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F45760C:
    // 7F45760C: bl      0x7F4556F0
    {
            ctx->lr = 0x7F457610u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556F0u;
                return;
            }
            goto label_7F4556F0;
    }

label_7F457610:
    ctx->downcount -= 4;
    // 7F457610: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457614:
    // 7F457614: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F457618:
    // 7F457618: addi    r5, r28, 32
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(32);

label_7F45761C:
    // 7F45761C: bl      0x800261B4
    {
            ctx->lr = 0x7F457620u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457620:
    ctx->downcount -= 4;
    // 7F457620: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457624:
    // 7F457624: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F457628:
    // 7F457628: addi    r5, r28, 48
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(48);

label_7F45762C:
    // 7F45762C: bl      0x800261B4
    {
            ctx->lr = 0x7F457630u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457630:
    ctx->downcount -= 6;
    // 7F457630: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457634:
    // 7F457634: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F457638:
    ctx->pc = 0x7F457638u;
    // 7F457638: lfs     f1, -7216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457638u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45763C:
    // 7F45763C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457640:
    // 7F457640: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F457644:
    // 7F457644: bl      0x7F4556F0
    {
            ctx->lr = 0x7F457648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4556F0u;
                return;
            }
            goto label_7F4556F0;
    }

label_7F457648:
    ctx->downcount -= 4;
    // 7F457648: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F45764C:
    // 7F45764C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F457650:
    // 7F457650: addi    r5, r28, 64
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(64);

label_7F457654:
    // 7F457654: bl      0x800261B4
    {
            ctx->lr = 0x7F457658u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457658:
    ctx->downcount -= 4;
    // 7F457658: addi    r3, r24, 2064
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(2064);

label_7F45765C:
    // 7F45765C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F457660:
    // 7F457660: addi    r5, r28, 80
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(80);

label_7F457664:
    // 7F457664: bl      0x800261B4
    {
            ctx->lr = 0x7F457668u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457668:
    ctx->downcount -= 4;
    // 7F457668: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F45766C:
    // 7F45766C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F457670:
    // 7F457670: addi    r5, r28, 96
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(96);

label_7F457674:
    // 7F457674: bl      0x800261B4
    {
            ctx->lr = 0x7F457678u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457678:
    ctx->downcount -= 4;
    // 7F457678: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F45767C:
    // 7F45767C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F457680:
    // 7F457680: addi    r5, r28, 112
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(112);

label_7F457684:
    // 7F457684: bl      0x800261B4
    {
            ctx->lr = 0x7F457688u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F457688:
    ctx->pc = 0x7F457688u;
    ctx->downcount -= 4;
    // 7F457688: lfs     f1, 200(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F457688u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45768C:
    ctx->pc = 0x7F45768Cu;
    // 7F45768C: lfs     f0, 328(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F45768Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457690:
    ctx->pc = 0x7F457690u;
    // 7F457690: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457690u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F457694:
    ctx->pc = 0x7F457694u;
    // 7F457694: stfs     f0, 200(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F457694u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457698:
    ctx->downcount -= 6;
    // 7F457698: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F45769C:
    // 7F45769C: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F4576A0:
    // 7F4576A0: cmpwi   r30, 32
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

label_7F4576A4:
    // 7F4576A4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F4576A8:
    // 7F4576A8: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F4576AC:
    // 7F4576AC: bc    12, 0, 0x7F457494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457494u;
                return;
            }
            goto label_7F457494;
        }
    }

label_7F4576B0:
    ctx->pc = 0x7F4576B0u;
    ctx->downcount -= 16;
    // 7F4576B0: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4576B4:
    ctx->pc = 0x7F4576B4u;
    // 7F4576B4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4576B8:
    ctx->pc = 0x7F4576B8u;
    // 7F4576B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4576BC:
    ctx->pc = 0x7F4576BCu;
    // 7F4576BC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F4576C0:
    ctx->pc = 0x7F4576C0u;
    // 7F4576C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4576C4:
    ctx->pc = 0x7F4576C4u;
    ctx->downcount -= 17;
    // 7F4576C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4576C8:
    ctx->pc = 0x7F4576C8u;
    // 7F4576C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4576CC:
    ctx->pc = 0x7F4576CCu;
    // 7F4576CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4576D0:
    ctx->pc = 0x7F4576D0u;
    // 7F4576D0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4576D4:
    ctx->pc = 0x7F4576D4u;
    // 7F4576D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4576D8:
    ctx->pc = 0x7F4576D8u;
    // 7F4576D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F4576DC:
    ctx->pc = 0x7F4576DCu;
    // 7F4576DC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F4576E0:
    ctx->downcount -= 3;
    // 7F4576E0: addi    r0, r31, 1936
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(1936);

label_7F4576E4:
    ctx->pc = 0x7F4576E4u;
    // 7F4576E4: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4576E8:
    // 7F4576E8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F4576ECu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F4576EC:
    ctx->downcount -= 4;
    // 7F4576EC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F4576F0:
    // 7F4576F0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F4576F4:
    // 7F4576F4: cmpwi   r30, 32
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

label_7F4576F8:
    // 7F4576F8: bc    12, 0, 0x7F4576E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4576E0u;
                return;
            }
            goto label_7F4576E0;
        }
    }

label_7F4576FC:
    ctx->pc = 0x7F4576FCu;
    ctx->downcount -= 16;
    // 7F4576FC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457700:
    ctx->pc = 0x7F457700u;
    // 7F457700: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457704:
    ctx->pc = 0x7F457704u;
    // 7F457704: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457708:
    ctx->pc = 0x7F457708u;
    // 7F457708: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F45770C:
    ctx->pc = 0x7F45770Cu;
    // 7F45770C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457710:
    ctx->pc = 0x7F457710u;
    ctx->downcount -= 5;
    // 7F457710: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457714:
    ctx->pc = 0x7F457714u;
    // 7F457714: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457718:
    ctx->pc = 0x7F457718u;
    // 7F457718: cmpwi   r4, 3
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

label_7F45771C:
    ctx->pc = 0x7F45771Cu;
    // 7F45771C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457720:
    ctx->pc = 0x7F457720u;
    // 7F457720: bc    12, 2, 0x7F457758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F457758;
        }
    }

label_7F457724:
    ctx->pc = 0x7F457724u;
    ctx->downcount -= 1;
    // 7F457724: bc    4, 0, 0x7F45773C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45773C;
        }
    }

label_7F457728:
    ctx->pc = 0x7F457728u;
    ctx->downcount -= 2;
    // 7F457728: cmpwi   r4, 2
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

label_7F45772C:
    ctx->pc = 0x7F45772Cu;
    // 7F45772C: bc    4, 0, 0x7F457750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457750;
        }
    }

label_7F457730:
    ctx->pc = 0x7F457730u;
    ctx->downcount -= 2;
    // 7F457730: cmpwi   r4, 0
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

label_7F457734:
    ctx->pc = 0x7F457734u;
    // 7F457734: bc    4, 0, 0x7F45778C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45778C;
        }
    }

label_7F457738:
    ctx->pc = 0x7F457738u;
    ctx->downcount -= 1;
    // 7F457738: b       0x7F457784
    {
            goto label_7F457784;
    }

label_7F45773C:
    ctx->pc = 0x7F45773Cu;
    ctx->downcount -= 4;
    // 7F45773C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F457740:
    ctx->pc = 0x7F457740u;
    // 7F457740: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F457744:
    ctx->pc = 0x7F457744u;
    // 7F457744: cmpw    r4, r0
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

label_7F457748:
    ctx->pc = 0x7F457748u;
    // 7F457748: bc    12, 2, 0x7F45778C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45778C;
        }
    }

label_7F45774C:
    ctx->pc = 0x7F45774Cu;
    ctx->downcount -= 1;
    // 7F45774C: b       0x7F457784
    {
            goto label_7F457784;
    }

label_7F457750:
    ctx->pc = 0x7F457750u;
    ctx->downcount -= 1;
    // 7F457750: bl      0x7F457308
    {
            ctx->lr = 0x7F457754u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457308u;
                return;
            }
            goto label_7F457308;
    }

label_7F457754:
    ctx->pc = 0x7F457754u;
    ctx->downcount -= 1;
    // 7F457754: b       0x7F45778C
    {
            goto label_7F45778C;
    }

label_7F457758:
    ctx->pc = 0x7F457758u;
    ctx->downcount -= 11;
    // 7F457758: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45775C:
    ctx->pc = 0x7F45775Cu;
    // 7F45775C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F457760:
    ctx->pc = 0x7F457760u;
    // 7F457760: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457764:
    ctx->pc = 0x7F457764u;
    // 7F457764: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457768:
    ctx->pc = 0x7F457768u;
    // 7F457768: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F45776C:
    ctx->pc = 0x7F45776Cu;
    // 7F45776C: lfd     f1, -7192(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45776Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7192);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457770:
    ctx->pc = 0x7F457770u;
    // 7F457770: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457774:
    ctx->pc = 0x7F457774u;
    // 7F457774: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457778:
    ctx->pc = 0x7F457778u;
    // 7F457778: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F457778u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F45777C:
    ctx->pc = 0x7F45777Cu;
    // 7F45777C: stfs     f0, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45777Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457780:
    ctx->pc = 0x7F457780u;
    // 7F457780: b       0x7F45778C
    {
            goto label_7F45778C;
    }

label_7F457784:
    ctx->pc = 0x7F457784u;
    ctx->downcount -= 1;
    // 7F457784: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F457788u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F457788:
    ctx->pc = 0x7F457788u;
    ctx->downcount -= 1;
    // 7F457788: b       0x7F457790
    {
            goto label_7F457790;
    }

label_7F45778C:
    ctx->pc = 0x7F45778Cu;
    ctx->downcount -= 1;
    // 7F45778C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457790:
    ctx->pc = 0x7F457790u;
    ctx->downcount -= 5;
    // 7F457790: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457794:
    ctx->pc = 0x7F457794u;
    // 7F457794: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457798:
    ctx->pc = 0x7F457798u;
    // 7F457798: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45779C:
    ctx->pc = 0x7F45779Cu;
    // 7F45779C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F4577A0:
    ctx->pc = 0x7F4577A0u;
    ctx->downcount -= 22;
    // 7F4577A0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4577A4:
    ctx->pc = 0x7F4577A4u;
    // 7F4577A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4577A8:
    ctx->pc = 0x7F4577A8u;
    // 7F4577A8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4577AC:
    ctx->pc = 0x7F4577ACu;
    // 7F4577AC: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4577ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F4577B0:
    ctx->pc = 0x7F4577B0u;
    // 7F4577B0: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4577B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F4577B0u);
        if (ctx->exception) return;
    }

label_7F4577B4:
    ctx->pc = 0x7F4577B4u;
    // 7F4577B4: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4577B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F4577B8:
    ctx->pc = 0x7F4577B8u;
    // 7F4577B8: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F4577B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F4577B8u);
        if (ctx->exception) return;
    }

label_7F4577BC:
    ctx->pc = 0x7F4577BCu;
    // 7F4577BC: stmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4577C0:
    ctx->pc = 0x7F4577C0u;
    // 7F4577C0: cmplwi  r4, 0x0000
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

label_7F4577C4:
    ctx->pc = 0x7F4577C4u;
    // 7F4577C4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4577C8:
    ctx->pc = 0x7F4577C8u;
    // 7F4577C8: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F4577CC:
    ctx->pc = 0x7F4577CCu;
    // 7F4577CC: bc    4, 2, 0x7F4577D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4577D8;
        }
    }

label_7F4577D0:
    ctx->pc = 0x7F4577D0u;
    ctx->downcount -= 2;
    // 7F4577D0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4577D4:
    ctx->pc = 0x7F4577D4u;
    // 7F4577D4: b       0x7F457AA4
    {
            goto label_7F457AA4;
    }

label_7F4577D8:
    ctx->pc = 0x7F4577D8u;
    ctx->downcount -= 4;
    // 7F4577D8: stw     r4, 64(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4577DC:
    ctx->pc = 0x7F4577DCu;
    // 7F4577DC: addi    r4, r26, 1872
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(1872);

label_7F4577E0:
    ctx->pc = 0x7F4577E0u;
    // 7F4577E0: lwz     r3, 64(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4577E4:
    ctx->pc = 0x7F4577E4u;
    // 7F4577E4: bl      0x80025A3C
    {
            ctx->lr = 0x7F4577E8u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F4577E8:
    ctx->pc = 0x7F4577E8u;
    ctx->downcount -= 4;
    // 7F4577E8: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F4577EC:
    ctx->pc = 0x7F4577ECu;
    // 7F4577EC: addi    r3, r26, 48
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(48);

label_7F4577F0:
    ctx->pc = 0x7F4577F0u;
    // 7F4577F0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F4577F4:
    ctx->pc = 0x7F4577F4u;
    // 7F4577F4: bl      0x7F455B50
    {
            ctx->lr = 0x7F4577F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455B50u;
                return;
            }
            goto label_7F455B50;
    }

label_7F4577F8:
    ctx->pc = 0x7F4577F8u;
    ctx->downcount -= 6;
    // 7F4577F8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4577FC:
    ctx->pc = 0x7F4577FCu;
    // 7F4577FC: lis     r3, 102
    ctx->gpr[3] = ((u32)(s32)(102) << 16);

label_7F457800:
    ctx->pc = 0x7F457800u;
    // 7F457800: lfs     f0, -7184(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457800u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457804:
    ctx->pc = 0x7F457804u;
    // 7F457804: addi    r3, r3, 30416
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30416);

label_7F457808:
    ctx->pc = 0x7F457808u;
    // 7F457808: stfs     f0, 68(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F457808u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45780C:
    ctx->pc = 0x7F45780Cu;
    // 7F45780C: bl      0x7F3B6420
    {
            ctx->lr = 0x7F457810u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F457810:
    ctx->pc = 0x7F457810u;
    ctx->downcount -= 6;
    // 7F457810: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F457814:
    ctx->pc = 0x7F457814u;
    // 7F457814: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457818:
    ctx->pc = 0x7F457818u;
    // 7F457818: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F45781C:
    ctx->pc = 0x7F45781Cu;
    // 7F45781C: lis     r29, 75
    ctx->gpr[29] = ((u32)(s32)(75) << 16);

label_7F457820:
    ctx->pc = 0x7F457820u;
    // 7F457820: or   r25, r24, r24
    {
        ctx->gpr[25] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F457824:
    ctx->pc = 0x7F457824u;
    // 7F457824: li      r27, 72
    ctx->gpr[27] = (u32)(s32)(72);

label_7F457828:
    ctx->downcount -= 5;
    // 7F457828: addi    r3, r29, 2
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2);

label_7F45782C:
    // 7F45782C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F457830:
    // 7F457830: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F457834:
    // 7F457834: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F457838:
    // 7F457838: bl      0x7F3C2408
    {
            ctx->lr = 0x7F45783Cu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F45783C:
    ctx->downcount -= 4;
    // 7F45783C: or.   r28, r3, r3
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

label_7F457840:
    // 7F457840: addi    r0, r24, 1936
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(1936);

label_7F457844:
    ctx->pc = 0x7F457844u;
    // 7F457844: stwx    r28, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F457848:
    // 7F457848: bc    4, 2, 0x7F457854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457854;
        }
    }

label_7F45784C:
    ctx->downcount -= 2;
    // 7F45784C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F457850:
    // 7F457850: b       0x7F457AA4
    {
            goto label_7F457AA4;
    }

label_7F457854:
    ctx->downcount -= 2;
    // 7F457854: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F457858:
    // 7F457858: bl      0x7F3C2534
    {
            ctx->lr = 0x7F45785Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F45785C:
    ctx->pc = 0x7F45785Cu;
    ctx->downcount -= 6;
    // 7F45785C: stw     r27, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F457860:
    // 7F457860: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F457864:
    // 7F457864: cmpwi   r30, 32
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

label_7F457868:
    // 7F457868: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F45786C:
    ctx->pc = 0x7F45786Cu;
    // 7F45786C: stw     r25, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F457870:
    // 7F457870: bc    12, 0, 0x7F457828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457828u;
                return;
            }
            goto label_7F457828;
        }
    }

label_7F457874:
    ctx->pc = 0x7F457874u;
    ctx->downcount -= 21;
    // 7F457874: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457878:
    ctx->pc = 0x7F457878u;
    // 7F457878: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F45787C:
    ctx->pc = 0x7F45787Cu;
    // 7F45787C: addi    r4, r3, -7228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7228);

label_7F457880:
    ctx->pc = 0x7F457880u;
    // 7F457880: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F457884:
    ctx->pc = 0x7F457884u;
    // 7F457884: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457884u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457888:
    ctx->pc = 0x7F457888u;
    // 7F457888: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45788C:
    ctx->pc = 0x7F45788Cu;
    // 7F45788C: addi    r4, r3, -7180
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7180);

label_7F457890:
    ctx->pc = 0x7F457890u;
    // 7F457890: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F457894:
    ctx->pc = 0x7F457894u;
    // 7F457894: stfs     f0, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F457894u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457898:
    ctx->pc = 0x7F457898u;
    // 7F457898: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F45789C:
    ctx->pc = 0x7F45789Cu;
    // 7F45789C: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45789Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F4578A0:
    ctx->pc = 0x7F4578A0u;
    // 7F4578A0: addi    r30, r5, 12832
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F4578A4:
    ctx->pc = 0x7F4578A4u;
    // 7F4578A4: lfs     f1, -6704(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F4578A4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4578A8:
    ctx->pc = 0x7F4578A8u;
    // 7F4578A8: addi    r31, r3, 32592
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(32592);

label_7F4578AC:
    ctx->pc = 0x7F4578ACu;
    // 7F4578AC: lfs     f0, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F4578ACu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4578B0:
    ctx->pc = 0x7F4578B0u;
    // 7F4578B0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F4578B4:
    ctx->pc = 0x7F4578B4u;
    // 7F4578B4: lfs     f30, -7224(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4578B4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F4578B8:
    ctx->pc = 0x7F4578B8u;
    // 7F4578B8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F4578BC:
    ctx->pc = 0x7F4578BCu;
    // 7F4578BC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4578BCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F4578C0:
    ctx->pc = 0x7F4578C0u;
    // 7F4578C0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F4578C4:
    ctx->pc = 0x7F4578C4u;
    // 7F4578C4: stfs     f0, 328(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F4578C4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(328);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4578C8:
    ctx->downcount -= 37;
    // 7F4578C8: add   r29, r26, r24
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F4578CC:
    // 7F4578CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4578D0:
    ctx->pc = 0x7F4578D0u;
    // 7F4578D0: lwz     r27, 1936(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1936);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F4578D4:
    // 7F4578D4: add   r9, r26, r25
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F4578D8:
    // 7F4578D8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4578DC:
    // 7F4578DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4578E0:
    ctx->pc = 0x7F4578E0u;
    // 7F4578E0: lwz     r4, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4578E4:
    // 7F4578E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4578E8:
    ctx->pc = 0x7F4578E8u;
    // 7F4578E8: lwz     r5, 192(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4578EC:
    ctx->pc = 0x7F4578ECu;
    // 7F4578EC: stw     r7, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F4578F0:
    ctx->pc = 0x7F4578F0u;
    // 7F4578F0: stfs     f30, 200(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F4578F0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F4578F4:
    ctx->pc = 0x7F4578F4u;
    // 7F4578F4: lwz     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F4578F8:
    ctx->pc = 0x7F4578F8u;
    // 7F4578F8: lwz     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4578FC:
    ctx->pc = 0x7F4578FCu;
    // 7F4578FC: stw     r8, 336(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457900:
    ctx->pc = 0x7F457900u;
    // 7F457900: stw     r7, 340(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457904:
    ctx->pc = 0x7F457904u;
    // 7F457904: lwz     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457908:
    ctx->pc = 0x7F457908u;
    // 7F457908: lwz     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45790C:
    ctx->pc = 0x7F45790Cu;
    // 7F45790C: stw     r8, 344(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457910:
    ctx->pc = 0x7F457910u;
    // 7F457910: stw     r7, 348(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457914:
    ctx->pc = 0x7F457914u;
    // 7F457914: lwz     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457918:
    ctx->pc = 0x7F457918u;
    // 7F457918: lwz     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45791C:
    ctx->pc = 0x7F45791Cu;
    // 7F45791C: stw     r8, 848(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457920:
    ctx->pc = 0x7F457920u;
    // 7F457920: stw     r7, 852(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457924:
    ctx->pc = 0x7F457924u;
    // 7F457924: lwz     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457928:
    ctx->pc = 0x7F457928u;
    // 7F457928: lwz     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45792C:
    ctx->pc = 0x7F45792Cu;
    // 7F45792C: stw     r8, 856(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457930:
    ctx->pc = 0x7F457930u;
    // 7F457930: stw     r7, 860(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457934:
    ctx->pc = 0x7F457934u;
    // 7F457934: lwz     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457938:
    ctx->pc = 0x7F457938u;
    // 7F457938: lwz     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45793C:
    ctx->pc = 0x7F45793Cu;
    // 7F45793C: stw     r8, 1360(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1360);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457940:
    ctx->pc = 0x7F457940u;
    // 7F457940: stw     r7, 1364(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1364);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457944:
    ctx->pc = 0x7F457944u;
    // 7F457944: lwz     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457948:
    ctx->pc = 0x7F457948u;
    // 7F457948: lwz     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45794C:
    ctx->pc = 0x7F45794Cu;
    // 7F45794C: stw     r8, 1368(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1368);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457950:
    ctx->pc = 0x7F457950u;
    // 7F457950: stw     r7, 1372(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1372);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457954:
    ctx->pc = 0x7F457954u;
    // 7F457954: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F457958:
    ctx->pc = 0x7F457958u;
    ctx->downcount -= 26;
    // 7F457958: lwz     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F45795C:
    // 7F45795C: add   r9, r31, r6
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F457960:
    ctx->pc = 0x7F457960u;
    // 7F457960: lwz     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F457964:
    // 7F457964: cmpwi   r3, 2
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

label_7F457968:
    // 7F457968: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F45796C:
    ctx->pc = 0x7F45796Cu;
    // 7F45796C: stw     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457970:
    ctx->pc = 0x7F457970u;
    // 7F457970: stw     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457974:
    ctx->pc = 0x7F457974u;
    // 7F457974: lwz     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F457978:
    ctx->pc = 0x7F457978u;
    // 7F457978: lwz     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45797C:
    ctx->pc = 0x7F45797Cu;
    // 7F45797C: stw     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F457980:
    ctx->pc = 0x7F457980u;
    // 7F457980: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F457984:
    // 7F457984: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F457988:
    ctx->pc = 0x7F457988u;
    // 7F457988: lfs     f0, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F457988u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45798C:
    ctx->pc = 0x7F45798Cu;
    // 7F45798C: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45798Cu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F457990:
    ctx->pc = 0x7F457990u;
    // 7F457990: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457990u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457994:
    ctx->pc = 0x7F457994u;
    // 7F457994: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457998:
    ctx->pc = 0x7F457998u;
    // 7F457998: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45799C:
    ctx->pc = 0x7F45799Cu;
    // 7F45799C: sth     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F4579A0:
    ctx->pc = 0x7F4579A0u;
    // 7F4579A0: lfs     f0, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F4579A0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4579A4:
    ctx->pc = 0x7F4579A4u;
    // 7F4579A4: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4579A4u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F4579A8:
    ctx->pc = 0x7F4579A8u;
    // 7F4579A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4579A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4579AC:
    ctx->pc = 0x7F4579ACu;
    // 7F4579AC: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4579ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4579B0:
    ctx->pc = 0x7F4579B0u;
    // 7F4579B0: lwz     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F4579B4:
    ctx->pc = 0x7F4579B4u;
    // 7F4579B4: sth     r7, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F4579B8:
    ctx->pc = 0x7F4579B8u;
    // 7F4579B8: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4579BC:
    // 7F4579BC: bc    4, 0, 0x7F4579D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4579D0;
        }
    }

label_7F4579C0:
    ctx->downcount -= 4;
    // 7F4579C0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_7F4579C4:
    // 7F4579C4: addi    r0, r7, -28673
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-28673);

label_7F4579C8:
    ctx->pc = 0x7F4579C8u;
    // 7F4579C8: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4579CC:
    // 7F4579CC: b       0x7F4579D8
    {
            goto label_7F4579D8;
    }

label_7F4579D0:
    ctx->downcount -= 2;
    // 7F4579D0: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F4579D4:
    ctx->pc = 0x7F4579D4u;
    // 7F4579D4: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4579D8:
    ctx->pc = 0x7F4579D8u;
    ctx->downcount -= 17;
    // 7F4579D8: lfs     f0, 60(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F4579D8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4579DC:
    // 7F4579DC: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4579E0:
    ctx->pc = 0x7F4579E0u;
    // 7F4579E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4579E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4579E4:
    ctx->pc = 0x7F4579E4u;
    // 7F4579E4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4579E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4579E8:
    ctx->pc = 0x7F4579E8u;
    // 7F4579E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4579EC:
    ctx->pc = 0x7F4579ECu;
    // 7F4579EC: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4579F0:
    ctx->pc = 0x7F4579F0u;
    // 7F4579F0: lfs     f0, 56(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F4579F0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4579F4:
    ctx->pc = 0x7F4579F4u;
    // 7F4579F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4579F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F4579F8:
    ctx->pc = 0x7F4579F8u;
    // 7F4579F8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4579F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F4579FC:
    ctx->pc = 0x7F4579FCu;
    // 7F4579FC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457A00:
    ctx->pc = 0x7F457A00u;
    // 7F457A00: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457A04:
    ctx->pc = 0x7F457A04u;
    // 7F457A04: lfs     f0, 52(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F457A04u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457A08:
    ctx->pc = 0x7F457A08u;
    // 7F457A08: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457A08u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457A0C:
    ctx->pc = 0x7F457A0Cu;
    // 7F457A0C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457A0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457A10:
    ctx->pc = 0x7F457A10u;
    // 7F457A10: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457A14:
    ctx->pc = 0x7F457A14u;
    // 7F457A14: stb     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457A18:
    // 7F457A18: bc    4, 0, 0x7F457A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457A34;
        }
    }

label_7F457A1C:
    ctx->pc = 0x7F457A1Cu;
    ctx->downcount -= 6;
    // 7F457A1C: lfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F457A1Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457A20:
    ctx->pc = 0x7F457A20u;
    // 7F457A20: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457A20u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457A24:
    ctx->pc = 0x7F457A24u;
    // 7F457A24: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457A28:
    ctx->pc = 0x7F457A28u;
    // 7F457A28: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457A2C:
    ctx->pc = 0x7F457A2Cu;
    // 7F457A2C: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457A30:
    // 7F457A30: b       0x7F457A3C
    {
            goto label_7F457A3C;
    }

label_7F457A34:
    ctx->downcount -= 2;
    // 7F457A34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F457A38:
    ctx->pc = 0x7F457A38u;
    // 7F457A38: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457A3C:
    ctx->downcount -= 4;
    // 7F457A3C: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F457A40:
    // 7F457A40: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F457A44:
    // 7F457A44: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

label_7F457A48:
    // 7F457A48: bc    16, 0, 0x7F457958
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457958u;
                return;
            }
            goto label_7F457958;
        }
    }

label_7F457A4C:
    ctx->pc = 0x7F457A4Cu;
    ctx->downcount -= 4;
    // 7F457A4C: lwz     r3, 188(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457A50:
    // 7F457A50: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F457A54:
    ctx->pc = 0x7F457A54u;
    // 7F457A54: lwz     r4, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457A58:
    // 7F457A58: bl      0x8000519C
    {
            ctx->lr = 0x7F457A5Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F457A5C:
    ctx->pc = 0x7F457A5Cu;
    ctx->downcount -= 4;
    // 7F457A5C: lwz     r3, 196(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457A60:
    // 7F457A60: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F457A64:
    ctx->pc = 0x7F457A64u;
    // 7F457A64: lwz     r4, 192(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457A68:
    // 7F457A68: bl      0x8000519C
    {
            ctx->lr = 0x7F457A6Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F457A6C:
    ctx->pc = 0x7F457A6Cu;
    ctx->downcount -= 9;
    // 7F457A6C: lwz     r3, 1936(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457A70:
    // 7F457A70: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F457A74:
    // 7F457A74: cmpwi   r28, 32
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F457A78:
    // 7F457A78: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F457A7C:
    ctx->pc = 0x7F457A7Cu;
    // 7F457A7C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457A80:
    // 7F457A80: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F457A84:
    // 7F457A84: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F457A88:
    ctx->pc = 0x7F457A88u;
    // 7F457A88: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457A8C:
    // 7F457A8C: bc    12, 0, 0x7F4578C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4578C8u;
                return;
            }
            goto label_7F4578C8;
        }
    }

label_7F457A90:
    ctx->pc = 0x7F457A90u;
    ctx->downcount -= 4;
    // 7F457A90: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F457A94:
    ctx->pc = 0x7F457A94u;
    // 7F457A94: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F457A98:
    ctx->pc = 0x7F457A98u;
    // 7F457A98: addi    r4, r4, 30480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30480);

label_7F457A9C:
    ctx->pc = 0x7F457A9Cu;
    // 7F457A9C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F457AA0u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F457AA0:
    ctx->pc = 0x7F457AA0u;
    ctx->downcount -= 1;
    // 7F457AA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F457AA4:
    ctx->pc = 0x7F457AA4u;
    ctx->downcount -= 20;
    // 7F457AA4: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F457AA4u);
        if (ctx->exception) return;
    }

label_7F457AA8:
    ctx->pc = 0x7F457AA8u;
    // 7F457AA8: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457AA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457AAC:
    ctx->pc = 0x7F457AACu;
    // 7F457AAC: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F457AACu);
        if (ctx->exception) return;
    }

label_7F457AB0:
    ctx->pc = 0x7F457AB0u;
    // 7F457AB0: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457AB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457AB4:
    ctx->pc = 0x7F457AB4u;
    // 7F457AB4: lmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457AB8:
    ctx->pc = 0x7F457AB8u;
    // 7F457AB8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457ABC:
    ctx->pc = 0x7F457ABCu;
    // 7F457ABC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457AC0:
    ctx->pc = 0x7F457AC0u;
    // 7F457AC0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F457AC4:
    ctx->pc = 0x7F457AC4u;
    // 7F457AC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457AC8:
    ctx->pc = 0x7F457AC8u;
    ctx->downcount -= 21;
    // 7F457AC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457ACC:
    ctx->pc = 0x7F457ACCu;
    // 7F457ACC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457AD0:
    ctx->pc = 0x7F457AD0u;
    // 7F457AD0: li      r5, 2144
    ctx->gpr[5] = (u32)(s32)(2144);

label_7F457AD4:
    ctx->pc = 0x7F457AD4u;
    // 7F457AD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F457AD8:
    ctx->pc = 0x7F457AD8u;
    // 7F457AD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457ADC:
    ctx->pc = 0x7F457ADCu;
    // 7F457ADC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F457AE0:
    ctx->pc = 0x7F457AE0u;
    // 7F457AE0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457AE4:
    ctx->pc = 0x7F457AE4u;
    // 7F457AE4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F457AE8:
    ctx->pc = 0x7F457AE8u;
    // 7F457AE8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F457AEC:
    ctx->pc = 0x7F457AECu;
    // 7F457AEC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F457AF0:
    ctx->pc = 0x7F457AF0u;
    // 7F457AF0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F457AF4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F457AF4:
    ctx->pc = 0x7F457AF4u;
    ctx->downcount -= 2;
    // 7F457AF4: or.   r31, r3, r3
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

label_7F457AF8:
    ctx->pc = 0x7F457AF8u;
    // 7F457AF8: bc    12, 2, 0x7F457B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F457B60;
        }
    }

label_7F457AFC:
    ctx->pc = 0x7F457AFCu;
    ctx->downcount -= 5;
    // 7F457AFC: lis     r4, 32581
    ctx->gpr[4] = ((u32)(s32)(32581) << 16);

label_7F457B00:
    ctx->pc = 0x7F457B00u;
    // 7F457B00: lis     r5, 32581
    ctx->gpr[5] = ((u32)(s32)(32581) << 16);

label_7F457B04:
    ctx->pc = 0x7F457B04u;
    // 7F457B04: addi    r4, r4, 29776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29776);

label_7F457B08:
    ctx->pc = 0x7F457B08u;
    // 7F457B08: addi    r5, r5, 30404
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30404);

label_7F457B0C:
    ctx->pc = 0x7F457B0Cu;
    // 7F457B0C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F457B10u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F457B10:
    ctx->pc = 0x7F457B10u;
    ctx->downcount -= 14;
    // 7F457B10: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457B14:
    ctx->pc = 0x7F457B14u;
    // 7F457B14: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F457B18:
    ctx->pc = 0x7F457B18u;
    // 7F457B18: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F457B1C:
    ctx->pc = 0x7F457B1Cu;
    // 7F457B1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F457B20:
    ctx->pc = 0x7F457B20u;
    // 7F457B20: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F457B24:
    ctx->pc = 0x7F457B24u;
    // 7F457B24: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F457B28:
    ctx->pc = 0x7F457B28u;
    // 7F457B28: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F457B2C:
    ctx->pc = 0x7F457B2Cu;
    // 7F457B2C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F457B30:
    ctx->pc = 0x7F457B30u;
    // 7F457B30: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F457B34:
    ctx->pc = 0x7F457B34u;
    // 7F457B34: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F457B38:
    ctx->pc = 0x7F457B38u;
    // 7F457B38: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F457B3C:
    ctx->pc = 0x7F457B3Cu;
    // 7F457B3C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F457B40:
    ctx->pc = 0x7F457B40u;
    // 7F457B40: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457B44:
    ctx->pc = 0x7F457B44u;
    // 7F457B44: bl      0x7F4577A0
    {
            ctx->lr = 0x7F457B48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4577A0u;
                return;
            }
            goto label_7F4577A0;
    }

label_7F457B48:
    ctx->pc = 0x7F457B48u;
    ctx->downcount -= 2;
    // 7F457B48: cmpwi   r3, 0
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

label_7F457B4C:
    ctx->pc = 0x7F457B4Cu;
    // 7F457B4C: bc    4, 0, 0x7F457B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457B60;
        }
    }

label_7F457B50:
    ctx->pc = 0x7F457B50u;
    ctx->downcount -= 2;
    // 7F457B50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F457B54:
    ctx->pc = 0x7F457B54u;
    // 7F457B54: bl      0x7F3C8210
    {
            ctx->lr = 0x7F457B58u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F457B58:
    ctx->pc = 0x7F457B58u;
    ctx->downcount -= 2;
    // 7F457B58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457B5C:
    ctx->pc = 0x7F457B5Cu;
    // 7F457B5C: b       0x7F457B64
    {
            goto label_7F457B64;
    }

label_7F457B60:
    ctx->pc = 0x7F457B60u;
    ctx->downcount -= 1;
    // 7F457B60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F457B64:
    ctx->pc = 0x7F457B64u;
    ctx->downcount -= 16;
    // 7F457B64: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457B68:
    ctx->pc = 0x7F457B68u;
    // 7F457B68: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457B6C:
    ctx->pc = 0x7F457B6Cu;
    // 7F457B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457B70:
    ctx->pc = 0x7F457B70u;
    // 7F457B70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F457B74:
    ctx->pc = 0x7F457B74u;
    // 7F457B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457B78:
    ctx->pc = 0x7F457B78u;
    ctx->downcount -= 28;
    // 7F457B78: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457B7C:
    ctx->pc = 0x7F457B7Cu;
    // 7F457B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457B80:
    ctx->pc = 0x7F457B80u;
    // 7F457B80: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457B84:
    ctx->pc = 0x7F457B84u;
    // 7F457B84: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457B84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F457B88:
    ctx->pc = 0x7F457B88u;
    // 7F457B88: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F457B88u);
        if (ctx->exception) return;
    }

label_7F457B8C:
    ctx->pc = 0x7F457B8Cu;
    // 7F457B8C: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457B8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F457B90:
    ctx->pc = 0x7F457B90u;
    // 7F457B90: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F457B90u);
        if (ctx->exception) return;
    }

label_7F457B94:
    ctx->pc = 0x7F457B94u;
    // 7F457B94: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457B94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F457B98:
    ctx->pc = 0x7F457B98u;
    // 7F457B98: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F457B98u);
        if (ctx->exception) return;
    }

label_7F457B9C:
    ctx->pc = 0x7F457B9Cu;
    // 7F457B9C: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F457BA0:
    ctx->pc = 0x7F457BA0u;
    // 7F457BA0: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F457BA0u);
        if (ctx->exception) return;
    }

label_7F457BA4:
    ctx->pc = 0x7F457BA4u;
    // 7F457BA4: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F457BA8:
    ctx->pc = 0x7F457BA8u;
    // 7F457BA8: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F457BA8u);
        if (ctx->exception) return;
    }

label_7F457BAC:
    ctx->pc = 0x7F457BACu;
    // 7F457BAC: stmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F457BB0:
    ctx->pc = 0x7F457BB0u;
    // 7F457BB0: lis     r4, 137
    ctx->gpr[4] = ((u32)(s32)(137) << 16);

label_7F457BB4:
    ctx->pc = 0x7F457BB4u;
    // 7F457BB4: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457BB8:
    ctx->pc = 0x7F457BB8u;
    // 7F457BB8: addi    r3, r4, -28514
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-28514);

label_7F457BBC:
    ctx->pc = 0x7F457BBCu;
    // 7F457BBC: bl      0x7F3B6420
    {
            ctx->lr = 0x7F457BC0u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F457BC0:
    ctx->pc = 0x7F457BC0u;
    ctx->downcount -= 7;
    // 7F457BC0: lis     r5, 14
    ctx->gpr[5] = ((u32)(s32)(14) << 16);

label_7F457BC4:
    ctx->pc = 0x7F457BC4u;
    // 7F457BC4: or   r14, r3, r3
    {
        ctx->gpr[14] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457BC8:
    ctx->pc = 0x7F457BC8u;
    // 7F457BC8: addi    r3, r5, 5
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(5);

label_7F457BCC:
    ctx->pc = 0x7F457BCCu;
    // 7F457BCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F457BD0:
    ctx->pc = 0x7F457BD0u;
    // 7F457BD0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F457BD4:
    ctx->pc = 0x7F457BD4u;
    // 7F457BD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F457BD8:
    ctx->pc = 0x7F457BD8u;
    // 7F457BD8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F457BDCu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F457BDC:
    ctx->pc = 0x7F457BDCu;
    ctx->downcount -= 3;
    // 7F457BDC: or.   r29, r3, r3
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

label_7F457BE0:
    ctx->pc = 0x7F457BE0u;
    // 7F457BE0: stw     r29, 3316(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(3316);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F457BE4:
    ctx->pc = 0x7F457BE4u;
    // 7F457BE4: bc    4, 2, 0x7F457BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457BF0;
        }
    }

label_7F457BE8:
    ctx->pc = 0x7F457BE8u;
    ctx->downcount -= 2;
    // 7F457BE8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F457BEC:
    ctx->pc = 0x7F457BECu;
    // 7F457BEC: b       0x7F457F18
    {
            goto label_7F457F18;
    }

label_7F457BF0:
    ctx->pc = 0x7F457BF0u;
    ctx->downcount -= 2;
    // 7F457BF0: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F457BF4:
    ctx->pc = 0x7F457BF4u;
    // 7F457BF4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F457BF8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F457BF8:
    ctx->pc = 0x7F457BF8u;
    ctx->downcount -= 81;
    // 7F457BF8: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F457BFC:
    ctx->pc = 0x7F457BFCu;
    // 7F457BFC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F457C00:
    ctx->pc = 0x7F457C00u;
    // 7F457C00: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457C04:
    ctx->pc = 0x7F457C04u;
    // 7F457C04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F457C08:
    ctx->pc = 0x7F457C08u;
    // 7F457C08: addi    r7, r6, -7156
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-7156);

label_7F457C0C:
    ctx->pc = 0x7F457C0Cu;
    // 7F457C0C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F457C10:
    ctx->pc = 0x7F457C10u;
    // 7F457C10: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457C14:
    ctx->pc = 0x7F457C14u;
    // 7F457C14: addi    r6, r5, -7152
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-7152);

label_7F457C18:
    ctx->pc = 0x7F457C18u;
    // 7F457C18: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457C1C:
    ctx->pc = 0x7F457C1Cu;
    // 7F457C1C: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F457C1Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457C20:
    ctx->pc = 0x7F457C20u;
    // 7F457C20: lfs     f5, 76(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457C20u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F457C24:
    ctx->pc = 0x7F457C24u;
    // 7F457C24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457C28:
    ctx->pc = 0x7F457C28u;
    // 7F457C28: addi    r5, r4, -7148
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7148);

label_7F457C2C:
    ctx->pc = 0x7F457C2Cu;
    // 7F457C2C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F457C2Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F457C30:
    ctx->pc = 0x7F457C30u;
    // 7F457C30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457C30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457C34:
    ctx->pc = 0x7F457C34u;
    // 7F457C34: addi    r4, r3, -7144
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7144);

label_7F457C38:
    ctx->pc = 0x7F457C38u;
    // 7F457C38: fmuls   f3, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F457C38u)) return;
    ppc_fmuls(ctx, 3, 0, 5);

label_7F457C3C:
    ctx->pc = 0x7F457C3Cu;
    // 7F457C3C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457C3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457C40:
    ctx->pc = 0x7F457C40u;
    // 7F457C40: lfs     f4, 72(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457C40u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F457C44:
    ctx->pc = 0x7F457C44u;
    // 7F457C44: fmuls   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F457C44u)) return;
    ppc_fmuls(ctx, 2, 2, 5);

label_7F457C48:
    ctx->pc = 0x7F457C48u;
    // 7F457C48: fmuls   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F457C48u)) return;
    ppc_fmuls(ctx, 1, 1, 5);

label_7F457C4C:
    ctx->pc = 0x7F457C4Cu;
    // 7F457C4C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457C50:
    ctx->pc = 0x7F457C50u;
    // 7F457C50: fmuls   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F457C50u)) return;
    ppc_fmuls(ctx, 0, 0, 5);

label_7F457C54:
    ctx->pc = 0x7F457C54u;
    // 7F457C54: lfs     f5, 68(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457C54u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F457C58:
    ctx->pc = 0x7F457C58u;
    // 7F457C58: fctiwz    f6, f4
    if (!ppc_fp_available_inline(ctx, 0x7F457C58u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[6] = dolrecomp_f64_from_bits(result); }

label_7F457C5C:
    ctx->pc = 0x7F457C5Cu;
    // 7F457C5C: lfs     f4, 64(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457C5Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F457C60:
    ctx->pc = 0x7F457C60u;
    // 7F457C60: fctiwz    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F457C60u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[5], true, &result)) ctx->fpr[5] = dolrecomp_f64_from_bits(result); }

label_7F457C64:
    ctx->pc = 0x7F457C64u;
    // 7F457C64: addi    r9, r3, -7176
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-7176);

label_7F457C68:
    ctx->pc = 0x7F457C68u;
    // 7F457C68: stfd     f6, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_7F457C6C:
    ctx->pc = 0x7F457C6Cu;
    // 7F457C6C: fctiwz    f4, f4
    if (!ppc_fp_available_inline(ctx, 0x7F457C6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[4] = dolrecomp_f64_from_bits(result); }

label_7F457C70:
    ctx->pc = 0x7F457C70u;
    // 7F457C70: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F457C70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F457C74:
    ctx->pc = 0x7F457C74u;
    // 7F457C74: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F457C78:
    ctx->pc = 0x7F457C78u;
    // 7F457C78: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457C7C:
    ctx->pc = 0x7F457C7Cu;
    // 7F457C7C: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F457C7Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F457C80:
    ctx->pc = 0x7F457C80u;
    // 7F457C80: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F457C80u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F457C84:
    ctx->pc = 0x7F457C84u;
    // 7F457C84: stfd     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_7F457C88:
    ctx->pc = 0x7F457C88u;
    // 7F457C88: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457C88u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457C8C:
    ctx->pc = 0x7F457C8Cu;
    // 7F457C8C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F457C90:
    ctx->pc = 0x7F457C90u;
    // 7F457C90: stb     r0, 78(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(78);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457C94:
    ctx->pc = 0x7F457C94u;
    // 7F457C94: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457C98:
    ctx->pc = 0x7F457C98u;
    // 7F457C98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457C9C:
    ctx->pc = 0x7F457C9Cu;
    // 7F457C9C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457CA0:
    ctx->pc = 0x7F457CA0u;
    // 7F457CA0: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457CA4:
    ctx->pc = 0x7F457CA4u;
    // 7F457CA4: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F457CA8:
    ctx->pc = 0x7F457CA8u;
    // 7F457CA8: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F457CAC:
    ctx->pc = 0x7F457CACu;
    // 7F457CAC: lwz     r17, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F457CB0:
    ctx->pc = 0x7F457CB0u;
    // 7F457CB0: stfd     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_7F457CB4:
    ctx->pc = 0x7F457CB4u;
    // 7F457CB4: addi    r21, r15, 1204
    ctx->gpr[21] = ctx->gpr[15] + (u32)(s32)(1204);

label_7F457CB8:
    ctx->pc = 0x7F457CB8u;
    // 7F457CB8: lwz     r16, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F457CBC:
    ctx->pc = 0x7F457CBCu;
    // 7F457CBC: addi    r20, r15, 2228
    ctx->gpr[20] = ctx->gpr[15] + (u32)(s32)(2228);

label_7F457CC0:
    ctx->pc = 0x7F457CC0u;
    // 7F457CC0: stb     r0, 77(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(77);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457CC4:
    ctx->pc = 0x7F457CC4u;
    // 7F457CC4: addi    r28, r15, 97
    ctx->gpr[28] = ctx->gpr[15] + (u32)(s32)(97);

label_7F457CC8:
    ctx->pc = 0x7F457CC8u;
    // 7F457CC8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457CCC:
    ctx->pc = 0x7F457CCCu;
    // 7F457CCC: addi    r24, r15, 692
    ctx->gpr[24] = ctx->gpr[15] + (u32)(s32)(692);

label_7F457CD0:
    ctx->pc = 0x7F457CD0u;
    // 7F457CD0: lfs     f27, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F457CD0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F457CD4:
    ctx->pc = 0x7F457CD4u;
    // 7F457CD4: addi    r23, r15, 948
    ctx->gpr[23] = ctx->gpr[15] + (u32)(s32)(948);

label_7F457CD8:
    ctx->pc = 0x7F457CD8u;
    // 7F457CD8: stfd     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F457CDC:
    ctx->pc = 0x7F457CDCu;
    // 7F457CDC: addi    r27, r15, 162
    ctx->gpr[27] = ctx->gpr[15] + (u32)(s32)(162);

label_7F457CE0:
    ctx->pc = 0x7F457CE0u;
    // 7F457CE0: lwz     r14, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_7F457CE4:
    ctx->pc = 0x7F457CE4u;
    // 7F457CE4: addi    r22, r15, 436
    ctx->gpr[22] = ctx->gpr[15] + (u32)(s32)(436);

label_7F457CE8:
    ctx->pc = 0x7F457CE8u;
    // 7F457CE8: stb     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457CEC:
    ctx->pc = 0x7F457CECu;
    // 7F457CEC: addi    r26, r15, 290
    ctx->gpr[26] = ctx->gpr[15] + (u32)(s32)(290);

label_7F457CF0:
    ctx->pc = 0x7F457CF0u;
    // 7F457CF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457CF4:
    ctx->pc = 0x7F457CF4u;
    // 7F457CF4: addi    r19, r15, 3300
    ctx->gpr[19] = ctx->gpr[15] + (u32)(s32)(3300);

label_7F457CF8:
    ctx->pc = 0x7F457CF8u;
    // 7F457CF8: stfs     f27, 420(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457CF8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(420);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F457CFC:
    ctx->pc = 0x7F457CFCu;
    // 7F457CFC: addi    r18, r15, 3284
    ctx->gpr[18] = ctx->gpr[15] + (u32)(s32)(3284);

label_7F457D00:
    ctx->pc = 0x7F457D00u;
    // 7F457D00: lfs     f28, -7160(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F457D00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F457D04:
    ctx->pc = 0x7F457D04u;
    // 7F457D04: addi    r30, r8, -7140
    ctx->gpr[30] = ctx->gpr[8] + (u32)(s32)(-7140);

label_7F457D08:
    ctx->pc = 0x7F457D08u;
    // 7F457D08: stfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457D08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F457D0C:
    ctx->pc = 0x7F457D0Cu;
    // 7F457D0C: addi    r31, r7, -7136
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(-7136);

label_7F457D10:
    ctx->pc = 0x7F457D10u;
    // 7F457D10: lfs     f29, -7132(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457D10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F457D14:
    ctx->pc = 0x7F457D14u;
    // 7F457D14: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F457D18:
    ctx->pc = 0x7F457D18u;
    // 7F457D18: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457D1C:
    ctx->pc = 0x7F457D1Cu;
    // 7F457D1C: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457D20:
    ctx->pc = 0x7F457D20u;
    // 7F457D20: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457D20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F457D24:
    ctx->pc = 0x7F457D24u;
    // 7F457D24: lfs     f30, -7128(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F457D24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F457D28:
    ctx->pc = 0x7F457D28u;
    // 7F457D28: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457D2C:
    ctx->pc = 0x7F457D2Cu;
    // 7F457D2C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457D30:
    ctx->pc = 0x7F457D30u;
    // 7F457D30: stfs     f27, 424(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457D30u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(424);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F457D34:
    ctx->pc = 0x7F457D34u;
    // 7F457D34: lfd     f31, -7168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457D34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7168);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457D38:
    ctx->pc = 0x7F457D38u;
    // 7F457D38: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457D3C:
    ctx->downcount -= 6;
    // 7F457D3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F457D40:
    ctx->pc = 0x7F457D40u;
    // 7F457D40: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F457D40u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457D44:
    ctx->pc = 0x7F457D44u;
    // 7F457D44: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457D48:
    // 7F457D48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457D4C:
    ctx->pc = 0x7F457D4Cu;
    // 7F457D4C: lwz     r4, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457D50:
    // 7F457D50: bl      0x7F455620
    {
            ctx->lr = 0x7F457D54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F457D54:
    ctx->downcount -= 5;
    // 7F457D54: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F457D58:
    // 7F457D58: addi    r3, r15, 3324
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(3324);

label_7F457D5C:
    // 7F457D5C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F457D60:
    // 7F457D60: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F457D64:
    // 7F457D64: bl      0x7F455908
    {
            ctx->lr = 0x7F457D68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455908u;
                return;
            }
            goto label_7F455908;
    }

label_7F457D68:
    ctx->downcount -= 4;
    // 7F457D68: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F457D6C:
    // 7F457D6C: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F457D70:
    // 7F457D70: addi    r5, r15, 3324
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(3324);

label_7F457D74:
    // 7F457D74: bl      0x7F44CA80
    {
            ctx->lr = 0x7F457D78u;
            ctx->pc = 0x7F44CA80u;
            return;
    }

label_7F457D78:
    ctx->pc = 0x7F457D78u;
    ctx->downcount -= 20;
    // 7F457D78: stfs     f28, 12(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F457D78u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

label_7F457D7C:
    // 7F457D7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F457D80:
    // 7F457D80: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F457D84:
    ctx->pc = 0x7F457D84u;
    // 7F457D84: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F457D84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457D88:
    ctx->pc = 0x7F457D88u;
    // 7F457D88: sth     r5, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F457D8C:
    // 7F457D8C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F457D90:
    // 7F457D90: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F457D94:
    // 7F457D94: addi    r17, r17, 16
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(16);

label_7F457D98:
    ctx->pc = 0x7F457D98u;
    // 7F457D98: sth     r5, 6(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F457D9C:
    ctx->pc = 0x7F457D9Cu;
    // 7F457D9C: sth     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F457DA0:
    ctx->pc = 0x7F457DA0u;
    // 7F457DA0: sth     r0, 14(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F457DA4:
    ctx->pc = 0x7F457DA4u;
    // 7F457DA4: lbz     r0, 78(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(78);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F457DA8:
    ctx->pc = 0x7F457DA8u;
    // 7F457DA8: stb     r0, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457DAC:
    ctx->pc = 0x7F457DACu;
    // 7F457DAC: lbz     r0, 77(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(77);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F457DB0:
    ctx->pc = 0x7F457DB0u;
    // 7F457DB0: stb     r0, 1(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457DB4:
    ctx->pc = 0x7F457DB4u;
    // 7F457DB4: lbz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F457DB8:
    ctx->pc = 0x7F457DB8u;
    // 7F457DB8: stb     r0, 2(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F457DBC:
    ctx->pc = 0x7F457DBCu;
    // 7F457DBC: stb     r5, 3(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F457DC0:
    ctx->pc = 0x7F457DC0u;
    // 7F457DC0: stfs     f27, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F457DC0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F457DC4:
    // 7F457DC4: bl      0x7F455620
    {
            ctx->lr = 0x7F457DC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F457DC8:
    ctx->pc = 0x7F457DC8u;
    ctx->downcount -= 7;
    // 7F457DC8: lfs     f0, 56(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457DC8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457DCC:
    // 7F457DCC: li      r3, -500
    ctx->gpr[3] = (u32)(s32)(-500);

label_7F457DD0:
    // 7F457DD0: li      r4, 500
    ctx->gpr[4] = (u32)(s32)(500);

label_7F457DD4:
    ctx->pc = 0x7F457DD4u;
    // 7F457DD4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F457DD4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F457DD8:
    ctx->pc = 0x7F457DD8u;
    // 7F457DD8: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F457DD8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457DDC:
    ctx->pc = 0x7F457DDCu;
    // 7F457DDC: stfs     f0, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F457DDCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457DE0:
    // 7F457DE0: bl      0x7F455620
    {
            ctx->lr = 0x7F457DE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F457DE4:
    ctx->pc = 0x7F457DE4u;
    ctx->downcount -= 25;
    // 7F457DE4: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F457DE4u)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F457DE8:
    // 7F457DE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457DEC:
    // 7F457DEC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F457DF0:
    ctx->pc = 0x7F457DF0u;
    // 7F457DF0: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F457DF0u)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F457DF4:
    ctx->pc = 0x7F457DF4u;
    // 7F457DF4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457DF4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F457DF8:
    ctx->pc = 0x7F457DF8u;
    // 7F457DF8: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457DF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F457DFC:
    ctx->pc = 0x7F457DFCu;
    // 7F457DFC: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457E00:
    ctx->pc = 0x7F457E00u;
    // 7F457E00: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F457E04:
    // 7F457E04: bl      0x7F4555B0
    {
            ctx->lr = 0x7F457E08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F457E08:
    ctx->pc = 0x7F457E08u;
    ctx->downcount -= 4;
    // 7F457E08: sth     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F457E0C:
    // 7F457E0C: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F457E10:
    ctx->pc = 0x7F457E10u;
    // 7F457E10: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457E14:
    // 7F457E14: bl      0x7F4555B0
    {
            ctx->lr = 0x7F457E18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4555B0u;
                return;
            }
            goto label_7F4555B0;
    }

label_7F457E18:
    ctx->downcount -= 15;
    // 7F457E18: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F457E1C:
    // 7F457E1C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F457E20:
    ctx->pc = 0x7F457E20u;
    // 7F457E20: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457E24:
    // 7F457E24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F457E28:
    ctx->pc = 0x7F457E28u;
    // 7F457E28: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F457E28u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457E2C:
    ctx->pc = 0x7F457E2Cu;
    // 7F457E2C: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F457E30:
    // 7F457E30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F457E34:
    ctx->pc = 0x7F457E34u;
    // 7F457E34: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457E38:
    ctx->pc = 0x7F457E38u;
    // 7F457E38: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457E3C:
    ctx->pc = 0x7F457E3Cu;
    // 7F457E3C: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F457E3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F457E40:
    ctx->pc = 0x7F457E40u;
    // 7F457E40: stfs     f0, 0(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F457E40u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457E44:
    ctx->pc = 0x7F457E44u;
    // 7F457E44: sth     r0, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F457E48:
    ctx->pc = 0x7F457E48u;
    // 7F457E48: sth     r0, 10(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F457E4C:
    // 7F457E4C: addi    r16, r16, 16
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(16);

label_7F457E50:
    // 7F457E50: bl      0x7F455620
    {
            ctx->lr = 0x7F457E54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F457E54:
    ctx->downcount -= 5;
    // 7F457E54: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F457E58:
    // 7F457E58: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F457E5C:
    // 7F457E5C: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_7F457E60:
    // 7F457E60: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F457E64:
    // 7F457E64: bl      0x7F455908
    {
            ctx->lr = 0x7F457E68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455908u;
                return;
            }
            goto label_7F455908;
    }

label_7F457E68:
    ctx->pc = 0x7F457E68u;
    ctx->downcount -= 5;
    // 7F457E68: stfs     f27, 12(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F457E68u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F457E6C:
    // 7F457E6C: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_7F457E70:
    ctx->pc = 0x7F457E70u;
    // 7F457E70: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F457E70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457E74:
    // 7F457E74: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_7F457E78:
    // 7F457E78: bl      0x7F455620
    {
            ctx->lr = 0x7F457E7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F455620u;
                return;
            }
            goto label_7F455620;
    }

label_7F457E7C:
    ctx->downcount -= 3;
    // 7F457E7C: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F457E80:
    // 7F457E80: addi    r3, r15, 80
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(80);

label_7F457E84:
    // 7F457E84: bl      0x80026020
    {
            ctx->lr = 0x7F457E88u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F457E88:
    ctx->downcount -= 12;
    // 7F457E88: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F457E8C:
    ctx->pc = 0x7F457E8Cu;
    // 7F457E8C: stfs     f27, 12(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F457E8Cu)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F457E90:
    // 7F457E90: cmpwi   r25, 64
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F457E94:
    // 7F457E94: addi    r21, r21, 16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(16);

label_7F457E98:
    // 7F457E98: addi    r20, r20, 16
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(16);

label_7F457E9C:
    // 7F457E9C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F457EA0:
    // 7F457EA0: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F457EA4:
    // 7F457EA4: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F457EA8:
    // 7F457EA8: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

label_7F457EAC:
    // 7F457EAC: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F457EB0:
    // 7F457EB0: addi    r26, r26, 2
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(2);

label_7F457EB4:
    // 7F457EB4: bc    12, 0, 0x7F457D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F457D3Cu;
                return;
            }
            goto label_7F457D3C;
        }
    }

label_7F457EB8:
    ctx->pc = 0x7F457EB8u;
    ctx->downcount -= 4;
    // 7F457EB8: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457EBC:
    ctx->pc = 0x7F457EBCu;
    // 7F457EBC: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F457EC0:
    ctx->pc = 0x7F457EC0u;
    // 7F457EC0: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457EC4:
    ctx->pc = 0x7F457EC4u;
    // 7F457EC4: bl      0x8000519C
    {
            ctx->lr = 0x7F457EC8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F457EC8:
    ctx->pc = 0x7F457EC8u;
    ctx->downcount -= 4;
    // 7F457EC8: lwz     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F457ECC:
    ctx->pc = 0x7F457ECCu;
    // 7F457ECC: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F457ED0:
    ctx->pc = 0x7F457ED0u;
    // 7F457ED0: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457ED4:
    ctx->pc = 0x7F457ED4u;
    // 7F457ED4: bl      0x8000519C
    {
            ctx->lr = 0x7F457ED8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F457ED8:
    ctx->pc = 0x7F457ED8u;
    ctx->downcount -= 10;
    // 7F457ED8: lwz     r4, 3316(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(3316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457EDC:
    ctx->pc = 0x7F457EDCu;
    // 7F457EDC: addi    r3, r15, 3252
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(3252);

label_7F457EE0:
    ctx->pc = 0x7F457EE0u;
    // 7F457EE0: addi    r5, r15, 80
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(80);

label_7F457EE4:
    ctx->pc = 0x7F457EE4u;
    // 7F457EE4: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457EE8:
    ctx->pc = 0x7F457EE8u;
    // 7F457EE8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F457EEC:
    ctx->pc = 0x7F457EECu;
    // 7F457EEC: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457EF0:
    ctx->pc = 0x7F457EF0u;
    // 7F457EF0: lfs     f1, 76(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457EF0u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457EF4:
    ctx->pc = 0x7F457EF4u;
    // 7F457EF4: lwz     r4, 52(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F457EF8:
    ctx->pc = 0x7F457EF8u;
    // 7F457EF8: lfs     f2, 56(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F457EF8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F457EFC:
    ctx->pc = 0x7F457EFCu;
    // 7F457EFC: bl      0x7F45905C
    {
            ctx->lr = 0x7F457F00u;
            ctx->pc = 0x7F45905Cu;
            return;
    }

label_7F457F00:
    ctx->pc = 0x7F457F00u;
    ctx->downcount -= 5;
    // 7F457F00: stw     r3, 3320(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(3320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F457F04:
    ctx->pc = 0x7F457F04u;
    // 7F457F04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F457F08:
    ctx->pc = 0x7F457F08u;
    // 7F457F08: lwz     r0, 3320(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457F0C:
    ctx->pc = 0x7F457F0Cu;
    // 7F457F0C: cmplwi  r0, 0x0000
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

label_7F457F10:
    ctx->pc = 0x7F457F10u;
    // 7F457F10: bc    4, 2, 0x7F457F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F457F18;
        }
    }

label_7F457F14:
    ctx->pc = 0x7F457F14u;
    ctx->downcount -= 1;
    // 7F457F14: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F457F18:
    ctx->pc = 0x7F457F18u;
    ctx->downcount -= 26;
    // 7F457F18: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F457F18u);
        if (ctx->exception) return;
    }

label_7F457F1C:
    ctx->pc = 0x7F457F1Cu;
    // 7F457F1C: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457F20:
    ctx->pc = 0x7F457F20u;
    // 7F457F20: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F457F20u);
        if (ctx->exception) return;
    }

label_7F457F24:
    ctx->pc = 0x7F457F24u;
    // 7F457F24: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457F28:
    ctx->pc = 0x7F457F28u;
    // 7F457F28: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F457F28u);
        if (ctx->exception) return;
    }

label_7F457F2C:
    ctx->pc = 0x7F457F2Cu;
    // 7F457F2C: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457F30:
    ctx->pc = 0x7F457F30u;
    // 7F457F30: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F457F30u);
        if (ctx->exception) return;
    }

label_7F457F34:
    ctx->pc = 0x7F457F34u;
    // 7F457F34: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457F38:
    ctx->pc = 0x7F457F38u;
    // 7F457F38: psq_l   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F457F38u);
        if (ctx->exception) return;
    }

label_7F457F3C:
    ctx->pc = 0x7F457F3Cu;
    // 7F457F3C: lfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457F40:
    ctx->pc = 0x7F457F40u;
    // 7F457F40: lmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F457F44:
    ctx->pc = 0x7F457F44u;
    // 7F457F44: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F457F48:
    ctx->pc = 0x7F457F48u;
    // 7F457F48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F457F4C:
    ctx->pc = 0x7F457F4Cu;
    // 7F457F4C: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F457F50:
    ctx->pc = 0x7F457F50u;
    // 7F457F50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4540EC;
        }
    }

label_7F457F54:
    ctx->pc = 0x7F457F54u;
    ctx->downcount -= 32;
    // 7F457F54: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F457F58:
    ctx->pc = 0x7F457F58u;
    // 7F457F58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F457F5C:
    ctx->pc = 0x7F457F5Cu;
    // 7F457F5C: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F457F60:
    ctx->pc = 0x7F457F60u;
    // 7F457F60: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F457F64:
    ctx->pc = 0x7F457F64u;
    // 7F457F64: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F457F64u);
        if (ctx->exception) return;
    }

label_7F457F68:
    ctx->pc = 0x7F457F68u;
    // 7F457F68: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F457F6C:
    ctx->pc = 0x7F457F6Cu;
    // 7F457F6C: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F457F6Cu);
        if (ctx->exception) return;
    }

label_7F457F70:
    ctx->pc = 0x7F457F70u;
    // 7F457F70: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F457F74:
    ctx->pc = 0x7F457F74u;
    // 7F457F74: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F457F74u);
        if (ctx->exception) return;
    }

label_7F457F78:
    ctx->pc = 0x7F457F78u;
    // 7F457F78: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F457F7C:
    ctx->pc = 0x7F457F7Cu;
    // 7F457F7C: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F457F7Cu);
        if (ctx->exception) return;
    }

label_7F457F80:
    ctx->pc = 0x7F457F80u;
    // 7F457F80: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F457F84:
    ctx->pc = 0x7F457F84u;
    // 7F457F84: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F457F84u);
        if (ctx->exception) return;
    }

label_7F457F88:
    ctx->pc = 0x7F457F88u;
    // 7F457F88: stfd     f26, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F457F8C:
    ctx->pc = 0x7F457F8Cu;
    // 7F457F8C: psq_st   f26, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F457F8Cu);
        if (ctx->exception) return;
    }

label_7F457F90:
    ctx->pc = 0x7F457F90u;
    // 7F457F90: stfd     f25, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F457F90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F457F94:
    ctx->pc = 0x7F457F94u;
    // 7F457F94: psq_st   f25, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F457F94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F457F94u);
        if (ctx->exception) return;
    }

label_7F457F98:
    ctx->pc = 0x7F457F98u;
    // 7F457F98: stmw     r17, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F457F9C:
    ctx->pc = 0x7F457F9Cu;
    // 7F457F9C: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F457FA0:
    ctx->pc = 0x7F457FA0u;
    // 7F457FA0: lbz     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F457FA4:
    ctx->pc = 0x7F457FA4u;
    // 7F457FA4: extsb. r0, r0
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

label_7F457FA8:
    ctx->pc = 0x7F457FA8u;
    // 7F457FA8: bc    12, 2, 0x7F4582F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F4582F4u;
            return;
        }
    }

label_7F457FAC:
    ctx->pc = 0x7F457FACu;
    ctx->downcount -= 61;
    // 7F457FAC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F457FB0:
    ctx->pc = 0x7F457FB0u;
    // 7F457FB0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457FB4:
    ctx->pc = 0x7F457FB4u;
    // 7F457FB4: addi    r5, r3, -6704
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F457FB8:
    ctx->pc = 0x7F457FB8u;
    // 7F457FB8: lfs     f0, 432(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F457FB8u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F457FBC:
    ctx->pc = 0x7F457FBCu;
    // 7F457FBC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457FBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457FC0:
    ctx->pc = 0x7F457FC0u;
    // 7F457FC0: addi    r7, r4, -7124
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-7124);

label_7F457FC4:
    ctx->pc = 0x7F457FC4u;
    // 7F457FC4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457FC8:
    ctx->pc = 0x7F457FC8u;
    // 7F457FC8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F457FCC:
    ctx->pc = 0x7F457FCCu;
    // 7F457FCC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F457FCCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F457FD0:
    ctx->pc = 0x7F457FD0u;
    // 7F457FD0: addi    r5, r3, -7116
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7116);

label_7F457FD4:
    ctx->pc = 0x7F457FD4u;
    // 7F457FD4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457FD8:
    ctx->pc = 0x7F457FD8u;
    // 7F457FD8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F457FD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F457FDC:
    ctx->pc = 0x7F457FDCu;
    // 7F457FDC: addi    r6, r3, -7120
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-7120);

label_7F457FE0:
    ctx->pc = 0x7F457FE0u;
    // 7F457FE0: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F457FE0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F457FE4:
    ctx->pc = 0x7F457FE4u;
    // 7F457FE4: stfs     f0, 428(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F457FE4u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(428);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F457FE8:
    ctx->pc = 0x7F457FE8u;
    // 7F457FE8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F457FEC:
    ctx->pc = 0x7F457FECu;
    // 7F457FEC: lfd     f31, -7168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F457FECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7168);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F457FF0:
    ctx->pc = 0x7F457FF0u;
    // 7F457FF0: addi    r20, r17, 1204
    ctx->gpr[20] = ctx->gpr[17] + (u32)(s32)(1204);

label_7F457FF4:
    ctx->pc = 0x7F457FF4u;
    // 7F457FF4: lwz     r5, 3316(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(3316);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F457FF8:
    ctx->pc = 0x7F457FF8u;
    // 7F457FF8: addi    r19, r17, 2228
    ctx->gpr[19] = ctx->gpr[17] + (u32)(s32)(2228);

label_7F457FFC:
    ctx->pc = 0x7F457FFCu;
    // 7F457FFC: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F457FFCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F458000:
    ctx->pc = 0x7F458000u;
    // 7F458000: addi    r30, r17, 97
    ctx->gpr[30] = ctx->gpr[17] + (u32)(s32)(97);

label_7F458004:
    ctx->pc = 0x7F458004u;
    // 7F458004: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F458008:
    ctx->pc = 0x7F458008u;
    // 7F458008: addi    r25, r17, 692
    ctx->gpr[25] = ctx->gpr[17] + (u32)(s32)(692);

label_7F45800C:
    ctx->pc = 0x7F45800Cu;
    // 7F45800C: lfs     f30, -7160(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45800Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F458010:
    ctx->pc = 0x7F458010u;
    // 7F458010: addi    r24, r17, 948
    ctx->gpr[24] = ctx->gpr[17] + (u32)(s32)(948);

label_7F458014:
    ctx->pc = 0x7F458014u;
    // 7F458014: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F458018:
    ctx->pc = 0x7F458018u;
    // 7F458018: addi    r28, r17, 162
    ctx->gpr[28] = ctx->gpr[17] + (u32)(s32)(162);

label_7F45801C:
    ctx->pc = 0x7F45801Cu;
    // 7F45801C: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F458020:
    ctx->pc = 0x7F458020u;
    // 7F458020: addi    r23, r17, 436
    ctx->gpr[23] = ctx->gpr[17] + (u32)(s32)(436);

label_7F458024:
    ctx->pc = 0x7F458024u;
    // 7F458024: addi    r29, r17, 290
    ctx->gpr[29] = ctx->gpr[17] + (u32)(s32)(290);

label_7F458028:
    ctx->pc = 0x7F458028u;
    // 7F458028: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F45802C:
    ctx->pc = 0x7F45802Cu;
    // 7F45802C: lwz     r3, 3316(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(3316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F458030:
    ctx->pc = 0x7F458030u;
    // 7F458030: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F458034:
    ctx->pc = 0x7F458034u;
    // 7F458034: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F458038:
    ctx->pc = 0x7F458038u;
    // 7F458038: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45803C:
    ctx->pc = 0x7F45803Cu;
    // 7F45803C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F458040:
    ctx->pc = 0x7F458040u;
    // 7F458040: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F458044:
    ctx->pc = 0x7F458044u;
    // 7F458044: lwz     r3, 3316(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(3316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F458048:
    ctx->pc = 0x7F458048u;
    // 7F458048: lfs     f5, 56(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F458048u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F45804C:
    ctx->pc = 0x7F45804Cu;
    // 7F45804C: lfs     f0, 76(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F45804Cu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F458050:
    ctx->pc = 0x7F458050u;
    // 7F458050: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F458054:
    ctx->pc = 0x7F458054u;
    // 7F458054: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F458058:
    ctx->pc = 0x7F458058u;
    // 7F458058: fmuls   f3, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x7F458058u)) return;
    ppc_fmuls(ctx, 3, 4, 5);

label_7F45805C:
    ctx->pc = 0x7F45805Cu;
    // 7F45805C: lfs     f29, 428(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F45805Cu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F458060:
    ctx->pc = 0x7F458060u;
    // 7F458060: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F458060u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F458064:
    ctx->pc = 0x7F458064u;
    // 7F458064: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F458068:
    ctx->pc = 0x7F458068u;
    // 7F458068: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F45806C:
    ctx->pc = 0x7F45806Cu;
    // 7F45806C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F458070:
    ctx->pc = 0x7F458070u;
    // 7F458070: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F458074:
    ctx->pc = 0x7F458074u;
    // 7F458074: fmuls   f28, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F458074u)) return;
    ppc_fmuls(ctx, 28, 3, 29);

label_7F458078:
    ctx->pc = 0x7F458078u;
    // 7F458078: fmuls   f27, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F458078u)) return;
    ppc_fmuls(ctx, 27, 2, 5);

label_7F45807C:
    ctx->pc = 0x7F45807Cu;
    // 7F45807C: lwzx    r22, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F458080:
    ctx->pc = 0x7F458080u;
    // 7F458080: fmuls   f26, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F458080u)) return;
    ppc_fmuls(ctx, 26, 0, 29);

label_7F458084:
    ctx->pc = 0x7F458084u;
    // 7F458084: lwzx    r21, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F458088:
    ctx->pc = 0x7F458088u;
    // 7F458088: fmuls   f25, f4, f29
    if (!ppc_fp_available_inline(ctx, 0x7F458088u)) return;
    ppc_fmuls(ctx, 25, 4, 29);

label_7F45808C:
    ctx->pc = 0x7F45808Cu;
    // 7F45808C: lwz     r18, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F458090:
    ctx->pc = 0x7F458090u;
    // 7F458090: lfs     f1, 428(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F458090u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F458094:
    ctx->pc = 0x7F458094u;
    // 7F458094: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F458098:
    ctx->pc = 0x7F458098u;
    // 7F458098: addi    r4, r17, 3324
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(3324);

label_7F45809C:
    ctx->pc = 0x7F45809Cu;
    // 7F45809C: bl      0x80026020
    {
            ctx->lr = 0x7F4580A0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F4580A0:
    ctx->pc = 0x7F4580A0u;
    ctx->downcount -= 4;
    // 7F4580A0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F4580A4:
    ctx->pc = 0x7F4580A4u;
    // 7F4580A4: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F4580A8:
    ctx->pc = 0x7F4580A8u;
    // 7F4580A8: addi    r5, r17, 3324
    ctx->gpr[5] = ctx->gpr[17] + (u32)(s32)(3324);

label_7F4580AC:
    ctx->pc = 0x7F4580ACu;
    // 7F4580AC: bl      0x7F44CA80
    {
            ctx->lr = 0x7F4580B0u;
            ctx->pc = 0x7F44CA80u;
            return;
    }

label_7F4580B0:
    ctx->pc = 0x7F4580B0u;
    ctx->downcount -= 4;
    // 7F4580B0: lfs     f0, 424(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F4580B0u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4580B4:
    ctx->pc = 0x7F4580B4u;
    // 7F4580B4: fcmpo   cr0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F4580B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[25], true);

label_7F4580B8:
    ctx->pc = 0x7F4580B8u;
    // 7F4580B8: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F4580BC:
    ctx->pc = 0x7F4580BCu;
    // 7F4580BC: bc    4, 2, 0x7F4580E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4580E8;
        }
    }

label_7F4580C0:
    ctx->pc = 0x7F4580C0u;
    ctx->downcount -= 4;
    // 7F4580C0: lfs     f0, 420(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F4580C0u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4580C4:
    ctx->pc = 0x7F4580C4u;
    // 7F4580C4: fcmpo   cr0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F4580C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[29], true);

label_7F4580C8:
    ctx->pc = 0x7F4580C8u;
    // 7F4580C8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F4580CC:
    ctx->pc = 0x7F4580CCu;
    // 7F4580CC: bc    4, 2, 0x7F4580E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4580E8;
        }
    }

label_7F4580D0:
    ctx->pc = 0x7F4580D0u;
    ctx->downcount -= 6;
    // 7F4580D0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4580D4:
    ctx->pc = 0x7F4580D4u;
    // 7F4580D4: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F4580D8:
    ctx->pc = 0x7F4580D8u;
    // 7F4580D8: addi    r5, r4, -7112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7112);

label_7F4580DC:
    ctx->pc = 0x7F4580DCu;
    // 7F4580DC: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F4580E0:
    ctx->pc = 0x7F4580E0u;
    // 7F4580E0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4580E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4580E4:
    ctx->pc = 0x7F4580E4u;
    // 7F4580E4: bl      0x80026020
    {
            ctx->lr = 0x7F4580E8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F4580E8:
    ctx->pc = 0x7F4580E8u;
    ctx->downcount -= 1;
    // 7F4580E8: lfs     f1, 428(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F4580E8u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    ctx->pc = 0x7F4580ECu;
    return;
return_dispatch_7F4540EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F45421Cu: goto label_7F45421C;
    case 0x7F454224u: goto label_7F454224;
    case 0x7F4542F8u: goto label_7F4542F8;
    case 0x7F45431Cu: goto label_7F45431C;
    case 0x7F45432Cu: goto label_7F45432C;
    case 0x7F454370u: goto label_7F454370;
    case 0x7F454380u: goto label_7F454380;
    case 0x7F4543A4u: goto label_7F4543A4;
    case 0x7F4543C8u: goto label_7F4543C8;
    case 0x7F4543D0u: goto label_7F4543D0;
    case 0x7F454438u: goto label_7F454438;
    case 0x7F454444u: goto label_7F454444;
    case 0x7F45446Cu: goto label_7F45446C;
    case 0x7F454480u: goto label_7F454480;
    case 0x7F454494u: goto label_7F454494;
    case 0x7F4544ACu: goto label_7F4544AC;
    case 0x7F4544D8u: goto label_7F4544D8;
    case 0x7F4544F0u: goto label_7F4544F0;
    case 0x7F454528u: goto label_7F454528;
    case 0x7F454534u: goto label_7F454534;
    case 0x7F454540u: goto label_7F454540;
    case 0x7F454550u: goto label_7F454550;
    case 0x7F454558u: goto label_7F454558;
    case 0x7F454578u: goto label_7F454578;
    case 0x7F4545B0u: goto label_7F4545B0;
    case 0x7F4545BCu: goto label_7F4545BC;
    case 0x7F454610u: goto label_7F454610;
    case 0x7F45461Cu: goto label_7F45461C;
    case 0x7F454624u: goto label_7F454624;
    case 0x7F454630u: goto label_7F454630;
    case 0x7F45463Cu: goto label_7F45463C;
    case 0x7F45465Cu: goto label_7F45465C;
    case 0x7F45466Cu: goto label_7F45466C;
    case 0x7F4546A0u: goto label_7F4546A0;
    case 0x7F4546D4u: goto label_7F4546D4;
    case 0x7F4546E0u: goto label_7F4546E0;
    case 0x7F4546F0u: goto label_7F4546F0;
    case 0x7F454724u: goto label_7F454724;
    case 0x7F454734u: goto label_7F454734;
    case 0x7F454750u: goto label_7F454750;
    case 0x7F454760u: goto label_7F454760;
    case 0x7F4547A8u: goto label_7F4547A8;
    case 0x7F4547C4u: goto label_7F4547C4;
    case 0x7F454834u: goto label_7F454834;
    case 0x7F454844u: goto label_7F454844;
    case 0x7F454878u: goto label_7F454878;
    case 0x7F454888u: goto label_7F454888;
    case 0x7F4548CCu: goto label_7F4548CC;
    case 0x7F4548DCu: goto label_7F4548DC;
    case 0x7F454A20u: goto label_7F454A20;
    case 0x7F454A3Cu: goto label_7F454A3C;
    case 0x7F454AACu: goto label_7F454AAC;
    case 0x7F454ABCu: goto label_7F454ABC;
    case 0x7F454AF0u: goto label_7F454AF0;
    case 0x7F454B00u: goto label_7F454B00;
    case 0x7F454B44u: goto label_7F454B44;
    case 0x7F454B54u: goto label_7F454B54;
    case 0x7F454C80u: goto label_7F454C80;
    case 0x7F454C9Cu: goto label_7F454C9C;
    case 0x7F454CA4u: goto label_7F454CA4;
    case 0x7F454E6Cu: goto label_7F454E6C;
    case 0x7F454E78u: goto label_7F454E78;
    case 0x7F454E84u: goto label_7F454E84;
    case 0x7F454F14u: goto label_7F454F14;
    case 0x7F454F80u: goto label_7F454F80;
    case 0x7F454F84u: goto label_7F454F84;
    case 0x7F454FE0u: goto label_7F454FE0;
    case 0x7F45504Cu: goto label_7F45504C;
    case 0x7F455090u: goto label_7F455090;
    case 0x7F4550C4u: goto label_7F4550C4;
    case 0x7F4550D4u: goto label_7F4550D4;
    case 0x7F4550ECu: goto label_7F4550EC;
    case 0x7F455114u: goto label_7F455114;
    case 0x7F455138u: goto label_7F455138;
    case 0x7F4551ACu: goto label_7F4551AC;
    case 0x7F4551D8u: goto label_7F4551D8;
    case 0x7F4552D0u: goto label_7F4552D0;
    case 0x7F4552E0u: goto label_7F4552E0;
    case 0x7F455324u: goto label_7F455324;
    case 0x7F455334u: goto label_7F455334;
    case 0x7F4553B0u: goto label_7F4553B0;
    case 0x7F4553C0u: goto label_7F4553C0;
    case 0x7F45543Cu: goto label_7F45543C;
    case 0x7F45544Cu: goto label_7F45544C;
    case 0x7F4554A8u: goto label_7F4554A8;
    case 0x7F4554B8u: goto label_7F4554B8;
    case 0x7F455518u: goto label_7F455518;
    case 0x7F455534u: goto label_7F455534;
    case 0x7F455578u: goto label_7F455578;
    case 0x7F455588u: goto label_7F455588;
    case 0x7F4555CCu: goto label_7F4555CC;
    case 0x7F455648u: goto label_7F455648;
    case 0x7F4556B4u: goto label_7F4556B4;
    case 0x7F4556D8u: goto label_7F4556D8;
    case 0x7F4556E0u: goto label_7F4556E0;
    case 0x7F455774u: goto label_7F455774;
    case 0x7F455784u: goto label_7F455784;
    case 0x7F455794u: goto label_7F455794;
    case 0x7F4557BCu: goto label_7F4557BC;
    case 0x7F4557D8u: goto label_7F4557D8;
    case 0x7F45582Cu: goto label_7F45582C;
    case 0x7F455838u: goto label_7F455838;
    case 0x7F4558B0u: goto label_7F4558B0;
    case 0x7F4558BCu: goto label_7F4558BC;
    case 0x7F4559B8u: goto label_7F4559B8;
    case 0x7F4559C8u: goto label_7F4559C8;
    case 0x7F4559D8u: goto label_7F4559D8;
    case 0x7F4559E8u: goto label_7F4559E8;
    case 0x7F4559F8u: goto label_7F4559F8;
    case 0x7F455A08u: goto label_7F455A08;
    case 0x7F455A80u: goto label_7F455A80;
    case 0x7F455A90u: goto label_7F455A90;
    case 0x7F455AA0u: goto label_7F455AA0;
    case 0x7F455AFCu: goto label_7F455AFC;
    case 0x7F455B08u: goto label_7F455B08;
    case 0x7F455B18u: goto label_7F455B18;
    case 0x7F455B28u: goto label_7F455B28;
    case 0x7F455CB0u: goto label_7F455CB0;
    case 0x7F455D48u: goto label_7F455D48;
    case 0x7F455D8Cu: goto label_7F455D8C;
    case 0x7F455DB0u: goto label_7F455DB0;
    case 0x7F455DC4u: goto label_7F455DC4;
    case 0x7F455DF4u: goto label_7F455DF4;
    case 0x7F455E10u: goto label_7F455E10;
    case 0x7F455E68u: goto label_7F455E68;
    case 0x7F455E7Cu: goto label_7F455E7C;
    case 0x7F455EACu: goto label_7F455EAC;
    case 0x7F455EECu: goto label_7F455EEC;
    case 0x7F455F58u: goto label_7F455F58;
    case 0x7F455F88u: goto label_7F455F88;
    case 0x7F455FC8u: goto label_7F455FC8;
    case 0x7F455FDCu: goto label_7F455FDC;
    case 0x7F456038u: goto label_7F456038;
    case 0x7F4561B4u: goto label_7F4561B4;
    case 0x7F456258u: goto label_7F456258;
    case 0x7F456268u: goto label_7F456268;
    case 0x7F456290u: goto label_7F456290;
    case 0x7F45629Cu: goto label_7F45629C;
    case 0x7F456304u: goto label_7F456304;
    case 0x7F456324u: goto label_7F456324;
    case 0x7F456340u: goto label_7F456340;
    case 0x7F45635Cu: goto label_7F45635C;
    case 0x7F4563B4u: goto label_7F4563B4;
    case 0x7F4563CCu: goto label_7F4563CC;
    case 0x7F4563E8u: goto label_7F4563E8;
    case 0x7F4566DCu: goto label_7F4566DC;
    case 0x7F4566ECu: goto label_7F4566EC;
    case 0x7F45670Cu: goto label_7F45670C;
    case 0x7F456770u: goto label_7F456770;
    case 0x7F45678Cu: goto label_7F45678C;
    case 0x7F4567CCu: goto label_7F4567CC;
    case 0x7F4567DCu: goto label_7F4567DC;
    case 0x7F456868u: goto label_7F456868;
    case 0x7F4568E8u: goto label_7F4568E8;
    case 0x7F456978u: goto label_7F456978;
    case 0x7F4569D4u: goto label_7F4569D4;
    case 0x7F456A30u: goto label_7F456A30;
    case 0x7F456A9Cu: goto label_7F456A9C;
    case 0x7F456AACu: goto label_7F456AAC;
    case 0x7F456AC8u: goto label_7F456AC8;
    case 0x7F456B0Cu: goto label_7F456B0C;
    case 0x7F456B64u: goto label_7F456B64;
    case 0x7F456CC4u: goto label_7F456CC4;
    case 0x7F456E28u: goto label_7F456E28;
    case 0x7F456E68u: goto label_7F456E68;
    case 0x7F456EE0u: goto label_7F456EE0;
    case 0x7F456EF8u: goto label_7F456EF8;
    case 0x7F456F10u: goto label_7F456F10;
    case 0x7F456F28u: goto label_7F456F28;
    case 0x7F456F40u: goto label_7F456F40;
    case 0x7F456F50u: goto label_7F456F50;
    case 0x7F456F5Cu: goto label_7F456F5C;
    case 0x7F456FBCu: goto label_7F456FBC;
    case 0x7F456FCCu: goto label_7F456FCC;
    case 0x7F456FD8u: goto label_7F456FD8;
    case 0x7F456FF4u: goto label_7F456FF4;
    case 0x7F457010u: goto label_7F457010;
    case 0x7F457060u: goto label_7F457060;
    case 0x7F4571C4u: goto label_7F4571C4;
    case 0x7F4571D4u: goto label_7F4571D4;
    case 0x7F4571F4u: goto label_7F4571F4;
    case 0x7F457200u: goto label_7F457200;
    case 0x7F457220u: goto label_7F457220;
    case 0x7F457278u: goto label_7F457278;
    case 0x7F457294u: goto label_7F457294;
    case 0x7F4572D4u: goto label_7F4572D4;
    case 0x7F4572E4u: goto label_7F4572E4;
    case 0x7F45732Cu: goto label_7F45732C;
    case 0x7F4573B4u: goto label_7F4573B4;
    case 0x7F457404u: goto label_7F457404;
    case 0x7F457480u: goto label_7F457480;
    case 0x7F45751Cu: goto label_7F45751C;
    case 0x7F45752Cu: goto label_7F45752C;
    case 0x7F457538u: goto label_7F457538;
    case 0x7F45755Cu: goto label_7F45755C;
    case 0x7F457574u: goto label_7F457574;
    case 0x7F457590u: goto label_7F457590;
    case 0x7F4575C0u: goto label_7F4575C0;
    case 0x7F4575D8u: goto label_7F4575D8;
    case 0x7F4575E8u: goto label_7F4575E8;
    case 0x7F4575F8u: goto label_7F4575F8;
    case 0x7F457610u: goto label_7F457610;
    case 0x7F457620u: goto label_7F457620;
    case 0x7F457630u: goto label_7F457630;
    case 0x7F457648u: goto label_7F457648;
    case 0x7F457658u: goto label_7F457658;
    case 0x7F457668u: goto label_7F457668;
    case 0x7F457678u: goto label_7F457678;
    case 0x7F457688u: goto label_7F457688;
    case 0x7F4576ECu: goto label_7F4576EC;
    case 0x7F457754u: goto label_7F457754;
    case 0x7F457788u: goto label_7F457788;
    case 0x7F4577E8u: goto label_7F4577E8;
    case 0x7F4577F8u: goto label_7F4577F8;
    case 0x7F457810u: goto label_7F457810;
    case 0x7F45783Cu: goto label_7F45783C;
    case 0x7F45785Cu: goto label_7F45785C;
    case 0x7F457A5Cu: goto label_7F457A5C;
    case 0x7F457A6Cu: goto label_7F457A6C;
    case 0x7F457AA0u: goto label_7F457AA0;
    case 0x7F457AF4u: goto label_7F457AF4;
    case 0x7F457B10u: goto label_7F457B10;
    case 0x7F457B48u: goto label_7F457B48;
    case 0x7F457B58u: goto label_7F457B58;
    case 0x7F457BC0u: goto label_7F457BC0;
    case 0x7F457BDCu: goto label_7F457BDC;
    case 0x7F457BF8u: goto label_7F457BF8;
    case 0x7F457D54u: goto label_7F457D54;
    case 0x7F457D68u: goto label_7F457D68;
    case 0x7F457D78u: goto label_7F457D78;
    case 0x7F457DC8u: goto label_7F457DC8;
    case 0x7F457DE4u: goto label_7F457DE4;
    case 0x7F457E08u: goto label_7F457E08;
    case 0x7F457E18u: goto label_7F457E18;
    case 0x7F457E54u: goto label_7F457E54;
    case 0x7F457E68u: goto label_7F457E68;
    case 0x7F457E7Cu: goto label_7F457E7C;
    case 0x7F457E88u: goto label_7F457E88;
    case 0x7F457EC8u: goto label_7F457EC8;
    case 0x7F457ED8u: goto label_7F457ED8;
    case 0x7F457F00u: goto label_7F457F00;
    case 0x7F4580A0u: goto label_7F4580A0;
    case 0x7F4580B0u: goto label_7F4580B0;
    case 0x7F4580E8u: goto label_7F4580E8;
    default: return;
    }
}

