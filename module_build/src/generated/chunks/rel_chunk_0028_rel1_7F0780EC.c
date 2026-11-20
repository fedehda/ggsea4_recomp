// DolRecomp output
#include "../generated.h"

static void loop_7F0793A8(CPUState* ctx) {
label_7F0793A8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0793A8u;
    // 7F0793A8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0793ACu;
    // 7F0793AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0793B0u;
    // 7F0793B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0793B4u;
    // 7F0793B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0793B8: bc    16, 0, 0x7F0793A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0793A8u;
                return;
            }
            goto label_7F0793A8;
        }
    }

    ctx->pc = 0x7F0793BCu;
}

static void loop_7F0793CC(CPUState* ctx) {
label_7F0793CC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0793CCu;
    // 7F0793CC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0793D0u;
    // 7F0793D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0793D4u;
    // 7F0793D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0793D8u;
    // 7F0793D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0793DC: bc    16, 0, 0x7F0793CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0793CCu;
                return;
            }
            goto label_7F0793CC;
        }
    }

    ctx->pc = 0x7F0793E0u;
}

static void loop_7F079408(CPUState* ctx) {
label_7F079408:
    ctx->downcount -= 5;
    ctx->pc = 0x7F079408u;
    // 7F079408: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F07940Cu;
    // 7F07940C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F079410u;
    // 7F079410: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F079414u;
    // 7F079414: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F079418: bc    16, 0, 0x7F079408
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F079408u;
                return;
            }
            goto label_7F079408;
        }
    }

    ctx->pc = 0x7F07941Cu;
}

static void loop_7F07942C(CPUState* ctx) {
label_7F07942C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F07942Cu;
    // 7F07942C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F079430u;
    // 7F079430: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F079434u;
    // 7F079434: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F079438u;
    // 7F079438: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F07943C: bc    16, 0, 0x7F07942C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07942Cu;
                return;
            }
            goto label_7F07942C;
        }
    }

    ctx->pc = 0x7F079440u;
}

static void loop_7F07B544(CPUState* ctx) {
label_7F07B544:
    ctx->downcount -= 6;
    ctx->pc = 0x7F07B544u;
    // 7F07B544: lhax    r5, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F07B548: addi    r0, r3, 4396
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4396);

    // 7F07B54C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F07B550: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

    ctx->pc = 0x7F07B554u;
    // 7F07B554: stwx    r5, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F07B558: bc    16, 0, 0x7F07B544
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B544u;
                return;
            }
            goto label_7F07B544;
        }
    }

    ctx->pc = 0x7F07B55Cu;
}

void func_7F0780EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0780ECu: goto label_7F0780EC;
    case 0x7F0780F0u: goto label_7F0780F0;
    case 0x7F0780F4u: goto label_7F0780F4;
    case 0x7F0780F8u: goto label_7F0780F8;
    case 0x7F0780FCu: goto label_7F0780FC;
    case 0x7F078100u: goto label_7F078100;
    case 0x7F078104u: goto label_7F078104;
    case 0x7F078108u: goto label_7F078108;
    case 0x7F07810Cu: goto label_7F07810C;
    case 0x7F078110u: goto label_7F078110;
    case 0x7F078114u: goto label_7F078114;
    case 0x7F078118u: goto label_7F078118;
    case 0x7F07811Cu: goto label_7F07811C;
    case 0x7F078120u: goto label_7F078120;
    case 0x7F078124u: goto label_7F078124;
    case 0x7F078128u: goto label_7F078128;
    case 0x7F07812Cu: goto label_7F07812C;
    case 0x7F078130u: goto label_7F078130;
    case 0x7F078134u: goto label_7F078134;
    case 0x7F078138u: goto label_7F078138;
    case 0x7F07813Cu: goto label_7F07813C;
    case 0x7F078140u: goto label_7F078140;
    case 0x7F078144u: goto label_7F078144;
    case 0x7F078148u: goto label_7F078148;
    case 0x7F07814Cu: goto label_7F07814C;
    case 0x7F078150u: goto label_7F078150;
    case 0x7F078154u: goto label_7F078154;
    case 0x7F078158u: goto label_7F078158;
    case 0x7F07815Cu: goto label_7F07815C;
    case 0x7F078160u: goto label_7F078160;
    case 0x7F078164u: goto label_7F078164;
    case 0x7F078168u: goto label_7F078168;
    case 0x7F07816Cu: goto label_7F07816C;
    case 0x7F078170u: goto label_7F078170;
    case 0x7F078174u: goto label_7F078174;
    case 0x7F078178u: goto label_7F078178;
    case 0x7F07817Cu: goto label_7F07817C;
    case 0x7F078180u: goto label_7F078180;
    case 0x7F078184u: goto label_7F078184;
    case 0x7F078188u: goto label_7F078188;
    case 0x7F07818Cu: goto label_7F07818C;
    case 0x7F078190u: goto label_7F078190;
    case 0x7F078194u: goto label_7F078194;
    case 0x7F078198u: goto label_7F078198;
    case 0x7F07819Cu: goto label_7F07819C;
    case 0x7F0781A0u: goto label_7F0781A0;
    case 0x7F0781A4u: goto label_7F0781A4;
    case 0x7F0781A8u: goto label_7F0781A8;
    case 0x7F0781ACu: goto label_7F0781AC;
    case 0x7F0781B0u: goto label_7F0781B0;
    case 0x7F0781B4u: goto label_7F0781B4;
    case 0x7F0781B8u: goto label_7F0781B8;
    case 0x7F0781BCu: goto label_7F0781BC;
    case 0x7F0781C0u: goto label_7F0781C0;
    case 0x7F0781C4u: goto label_7F0781C4;
    case 0x7F0781C8u: goto label_7F0781C8;
    case 0x7F0781CCu: goto label_7F0781CC;
    case 0x7F0781D0u: goto label_7F0781D0;
    case 0x7F0781D4u: goto label_7F0781D4;
    case 0x7F0781D8u: goto label_7F0781D8;
    case 0x7F0781DCu: goto label_7F0781DC;
    case 0x7F0781E0u: goto label_7F0781E0;
    case 0x7F0781E4u: goto label_7F0781E4;
    case 0x7F0781E8u: goto label_7F0781E8;
    case 0x7F0781ECu: goto label_7F0781EC;
    case 0x7F0781F0u: goto label_7F0781F0;
    case 0x7F0781F4u: goto label_7F0781F4;
    case 0x7F0781F8u: goto label_7F0781F8;
    case 0x7F0781FCu: goto label_7F0781FC;
    case 0x7F078200u: goto label_7F078200;
    case 0x7F078204u: goto label_7F078204;
    case 0x7F078208u: goto label_7F078208;
    case 0x7F07820Cu: goto label_7F07820C;
    case 0x7F078210u: goto label_7F078210;
    case 0x7F078214u: goto label_7F078214;
    case 0x7F078218u: goto label_7F078218;
    case 0x7F07821Cu: goto label_7F07821C;
    case 0x7F078220u: goto label_7F078220;
    case 0x7F078224u: goto label_7F078224;
    case 0x7F078228u: goto label_7F078228;
    case 0x7F07822Cu: goto label_7F07822C;
    case 0x7F078230u: goto label_7F078230;
    case 0x7F078234u: goto label_7F078234;
    case 0x7F078238u: goto label_7F078238;
    case 0x7F07823Cu: goto label_7F07823C;
    case 0x7F078240u: goto label_7F078240;
    case 0x7F078244u: goto label_7F078244;
    case 0x7F078248u: goto label_7F078248;
    case 0x7F07824Cu: goto label_7F07824C;
    case 0x7F078250u: goto label_7F078250;
    case 0x7F078254u: goto label_7F078254;
    case 0x7F078258u: goto label_7F078258;
    case 0x7F07825Cu: goto label_7F07825C;
    case 0x7F078260u: goto label_7F078260;
    case 0x7F078264u: goto label_7F078264;
    case 0x7F078268u: goto label_7F078268;
    case 0x7F07826Cu: goto label_7F07826C;
    case 0x7F078270u: goto label_7F078270;
    case 0x7F078274u: goto label_7F078274;
    case 0x7F078278u: goto label_7F078278;
    case 0x7F07827Cu: goto label_7F07827C;
    case 0x7F078280u: goto label_7F078280;
    case 0x7F078284u: goto label_7F078284;
    case 0x7F078288u: goto label_7F078288;
    case 0x7F07828Cu: goto label_7F07828C;
    case 0x7F078290u: goto label_7F078290;
    case 0x7F078294u: goto label_7F078294;
    case 0x7F078298u: goto label_7F078298;
    case 0x7F07829Cu: goto label_7F07829C;
    case 0x7F0782A0u: goto label_7F0782A0;
    case 0x7F0782A4u: goto label_7F0782A4;
    case 0x7F0782A8u: goto label_7F0782A8;
    case 0x7F0782ACu: goto label_7F0782AC;
    case 0x7F0782B0u: goto label_7F0782B0;
    case 0x7F0782B4u: goto label_7F0782B4;
    case 0x7F0782B8u: goto label_7F0782B8;
    case 0x7F0782BCu: goto label_7F0782BC;
    case 0x7F0782C0u: goto label_7F0782C0;
    case 0x7F0782C4u: goto label_7F0782C4;
    case 0x7F0782C8u: goto label_7F0782C8;
    case 0x7F0782CCu: goto label_7F0782CC;
    case 0x7F0782D0u: goto label_7F0782D0;
    case 0x7F0782D4u: goto label_7F0782D4;
    case 0x7F0782D8u: goto label_7F0782D8;
    case 0x7F0782DCu: goto label_7F0782DC;
    case 0x7F0782E0u: goto label_7F0782E0;
    case 0x7F0782E4u: goto label_7F0782E4;
    case 0x7F0782E8u: goto label_7F0782E8;
    case 0x7F0782ECu: goto label_7F0782EC;
    case 0x7F0782F0u: goto label_7F0782F0;
    case 0x7F0782F4u: goto label_7F0782F4;
    case 0x7F0782F8u: goto label_7F0782F8;
    case 0x7F0782FCu: goto label_7F0782FC;
    case 0x7F078300u: goto label_7F078300;
    case 0x7F078304u: goto label_7F078304;
    case 0x7F078308u: goto label_7F078308;
    case 0x7F07830Cu: goto label_7F07830C;
    case 0x7F078310u: goto label_7F078310;
    case 0x7F078314u: goto label_7F078314;
    case 0x7F078318u: goto label_7F078318;
    case 0x7F07831Cu: goto label_7F07831C;
    case 0x7F078320u: goto label_7F078320;
    case 0x7F078324u: goto label_7F078324;
    case 0x7F078328u: goto label_7F078328;
    case 0x7F07832Cu: goto label_7F07832C;
    case 0x7F078330u: goto label_7F078330;
    case 0x7F078334u: goto label_7F078334;
    case 0x7F078338u: goto label_7F078338;
    case 0x7F07833Cu: goto label_7F07833C;
    case 0x7F078340u: goto label_7F078340;
    case 0x7F078344u: goto label_7F078344;
    case 0x7F078348u: goto label_7F078348;
    case 0x7F07834Cu: goto label_7F07834C;
    case 0x7F078350u: goto label_7F078350;
    case 0x7F078354u: goto label_7F078354;
    case 0x7F078358u: goto label_7F078358;
    case 0x7F07835Cu: goto label_7F07835C;
    case 0x7F078360u: goto label_7F078360;
    case 0x7F078364u: goto label_7F078364;
    case 0x7F078368u: goto label_7F078368;
    case 0x7F07836Cu: goto label_7F07836C;
    case 0x7F078370u: goto label_7F078370;
    case 0x7F078374u: goto label_7F078374;
    case 0x7F078378u: goto label_7F078378;
    case 0x7F07837Cu: goto label_7F07837C;
    case 0x7F078380u: goto label_7F078380;
    case 0x7F078384u: goto label_7F078384;
    case 0x7F078388u: goto label_7F078388;
    case 0x7F07838Cu: goto label_7F07838C;
    case 0x7F078390u: goto label_7F078390;
    case 0x7F078394u: goto label_7F078394;
    case 0x7F078398u: goto label_7F078398;
    case 0x7F07839Cu: goto label_7F07839C;
    case 0x7F0783A0u: goto label_7F0783A0;
    case 0x7F0783A4u: goto label_7F0783A4;
    case 0x7F0783A8u: goto label_7F0783A8;
    case 0x7F0783ACu: goto label_7F0783AC;
    case 0x7F0783B0u: goto label_7F0783B0;
    case 0x7F0783B4u: goto label_7F0783B4;
    case 0x7F0783B8u: goto label_7F0783B8;
    case 0x7F0783BCu: goto label_7F0783BC;
    case 0x7F0783C0u: goto label_7F0783C0;
    case 0x7F0783C4u: goto label_7F0783C4;
    case 0x7F0783C8u: goto label_7F0783C8;
    case 0x7F0783CCu: goto label_7F0783CC;
    case 0x7F0783D0u: goto label_7F0783D0;
    case 0x7F0783D4u: goto label_7F0783D4;
    case 0x7F0783D8u: goto label_7F0783D8;
    case 0x7F0783DCu: goto label_7F0783DC;
    case 0x7F0783E0u: goto label_7F0783E0;
    case 0x7F0783E4u: goto label_7F0783E4;
    case 0x7F0783E8u: goto label_7F0783E8;
    case 0x7F0783ECu: goto label_7F0783EC;
    case 0x7F0783F0u: goto label_7F0783F0;
    case 0x7F0783F4u: goto label_7F0783F4;
    case 0x7F0783F8u: goto label_7F0783F8;
    case 0x7F0783FCu: goto label_7F0783FC;
    case 0x7F078400u: goto label_7F078400;
    case 0x7F078404u: goto label_7F078404;
    case 0x7F078408u: goto label_7F078408;
    case 0x7F07840Cu: goto label_7F07840C;
    case 0x7F078410u: goto label_7F078410;
    case 0x7F078414u: goto label_7F078414;
    case 0x7F078418u: goto label_7F078418;
    case 0x7F07841Cu: goto label_7F07841C;
    case 0x7F078420u: goto label_7F078420;
    case 0x7F078424u: goto label_7F078424;
    case 0x7F078428u: goto label_7F078428;
    case 0x7F07842Cu: goto label_7F07842C;
    case 0x7F078430u: goto label_7F078430;
    case 0x7F078434u: goto label_7F078434;
    case 0x7F078438u: goto label_7F078438;
    case 0x7F07843Cu: goto label_7F07843C;
    case 0x7F078440u: goto label_7F078440;
    case 0x7F078444u: goto label_7F078444;
    case 0x7F078448u: goto label_7F078448;
    case 0x7F07844Cu: goto label_7F07844C;
    case 0x7F078450u: goto label_7F078450;
    case 0x7F078454u: goto label_7F078454;
    case 0x7F078458u: goto label_7F078458;
    case 0x7F07845Cu: goto label_7F07845C;
    case 0x7F078460u: goto label_7F078460;
    case 0x7F078464u: goto label_7F078464;
    case 0x7F078468u: goto label_7F078468;
    case 0x7F07846Cu: goto label_7F07846C;
    case 0x7F078470u: goto label_7F078470;
    case 0x7F078474u: goto label_7F078474;
    case 0x7F078478u: goto label_7F078478;
    case 0x7F07847Cu: goto label_7F07847C;
    case 0x7F078480u: goto label_7F078480;
    case 0x7F078484u: goto label_7F078484;
    case 0x7F078488u: goto label_7F078488;
    case 0x7F07848Cu: goto label_7F07848C;
    case 0x7F078490u: goto label_7F078490;
    case 0x7F078494u: goto label_7F078494;
    case 0x7F078498u: goto label_7F078498;
    case 0x7F07849Cu: goto label_7F07849C;
    case 0x7F0784A0u: goto label_7F0784A0;
    case 0x7F0784A4u: goto label_7F0784A4;
    case 0x7F0784A8u: goto label_7F0784A8;
    case 0x7F0784ACu: goto label_7F0784AC;
    case 0x7F0784B0u: goto label_7F0784B0;
    case 0x7F0784B4u: goto label_7F0784B4;
    case 0x7F0784B8u: goto label_7F0784B8;
    case 0x7F0784BCu: goto label_7F0784BC;
    case 0x7F0784C0u: goto label_7F0784C0;
    case 0x7F0784C4u: goto label_7F0784C4;
    case 0x7F0784C8u: goto label_7F0784C8;
    case 0x7F0784CCu: goto label_7F0784CC;
    case 0x7F0784D0u: goto label_7F0784D0;
    case 0x7F0784D4u: goto label_7F0784D4;
    case 0x7F0784D8u: goto label_7F0784D8;
    case 0x7F0784DCu: goto label_7F0784DC;
    case 0x7F0784E0u: goto label_7F0784E0;
    case 0x7F0784E4u: goto label_7F0784E4;
    case 0x7F0784E8u: goto label_7F0784E8;
    case 0x7F0784ECu: goto label_7F0784EC;
    case 0x7F0784F0u: goto label_7F0784F0;
    case 0x7F0784F4u: goto label_7F0784F4;
    case 0x7F0784F8u: goto label_7F0784F8;
    case 0x7F0784FCu: goto label_7F0784FC;
    case 0x7F078500u: goto label_7F078500;
    case 0x7F078504u: goto label_7F078504;
    case 0x7F078508u: goto label_7F078508;
    case 0x7F07850Cu: goto label_7F07850C;
    case 0x7F078510u: goto label_7F078510;
    case 0x7F078514u: goto label_7F078514;
    case 0x7F078518u: goto label_7F078518;
    case 0x7F07851Cu: goto label_7F07851C;
    case 0x7F078520u: goto label_7F078520;
    case 0x7F078524u: goto label_7F078524;
    case 0x7F078528u: goto label_7F078528;
    case 0x7F07852Cu: goto label_7F07852C;
    case 0x7F078530u: goto label_7F078530;
    case 0x7F078534u: goto label_7F078534;
    case 0x7F078538u: goto label_7F078538;
    case 0x7F07853Cu: goto label_7F07853C;
    case 0x7F078540u: goto label_7F078540;
    case 0x7F078544u: goto label_7F078544;
    case 0x7F078548u: goto label_7F078548;
    case 0x7F07854Cu: goto label_7F07854C;
    case 0x7F078550u: goto label_7F078550;
    case 0x7F078554u: goto label_7F078554;
    case 0x7F078558u: goto label_7F078558;
    case 0x7F07855Cu: goto label_7F07855C;
    case 0x7F078560u: goto label_7F078560;
    case 0x7F078564u: goto label_7F078564;
    case 0x7F078568u: goto label_7F078568;
    case 0x7F07856Cu: goto label_7F07856C;
    case 0x7F078570u: goto label_7F078570;
    case 0x7F078574u: goto label_7F078574;
    case 0x7F078578u: goto label_7F078578;
    case 0x7F07857Cu: goto label_7F07857C;
    case 0x7F078580u: goto label_7F078580;
    case 0x7F078584u: goto label_7F078584;
    case 0x7F078588u: goto label_7F078588;
    case 0x7F07858Cu: goto label_7F07858C;
    case 0x7F078590u: goto label_7F078590;
    case 0x7F078594u: goto label_7F078594;
    case 0x7F078598u: goto label_7F078598;
    case 0x7F07859Cu: goto label_7F07859C;
    case 0x7F0785A0u: goto label_7F0785A0;
    case 0x7F0785A4u: goto label_7F0785A4;
    case 0x7F0785A8u: goto label_7F0785A8;
    case 0x7F0785ACu: goto label_7F0785AC;
    case 0x7F0785B0u: goto label_7F0785B0;
    case 0x7F0785B4u: goto label_7F0785B4;
    case 0x7F0785B8u: goto label_7F0785B8;
    case 0x7F0785BCu: goto label_7F0785BC;
    case 0x7F0785C0u: goto label_7F0785C0;
    case 0x7F0785C4u: goto label_7F0785C4;
    case 0x7F0785C8u: goto label_7F0785C8;
    case 0x7F0785CCu: goto label_7F0785CC;
    case 0x7F0785D0u: goto label_7F0785D0;
    case 0x7F0785D4u: goto label_7F0785D4;
    case 0x7F0785D8u: goto label_7F0785D8;
    case 0x7F0785DCu: goto label_7F0785DC;
    case 0x7F0785E0u: goto label_7F0785E0;
    case 0x7F0785E4u: goto label_7F0785E4;
    case 0x7F0785E8u: goto label_7F0785E8;
    case 0x7F0785ECu: goto label_7F0785EC;
    case 0x7F0785F0u: goto label_7F0785F0;
    case 0x7F0785F4u: goto label_7F0785F4;
    case 0x7F0785F8u: goto label_7F0785F8;
    case 0x7F0785FCu: goto label_7F0785FC;
    case 0x7F078600u: goto label_7F078600;
    case 0x7F078604u: goto label_7F078604;
    case 0x7F078608u: goto label_7F078608;
    case 0x7F07860Cu: goto label_7F07860C;
    case 0x7F078610u: goto label_7F078610;
    case 0x7F078614u: goto label_7F078614;
    case 0x7F078618u: goto label_7F078618;
    case 0x7F07861Cu: goto label_7F07861C;
    case 0x7F078620u: goto label_7F078620;
    case 0x7F078624u: goto label_7F078624;
    case 0x7F078628u: goto label_7F078628;
    case 0x7F07862Cu: goto label_7F07862C;
    case 0x7F078630u: goto label_7F078630;
    case 0x7F078634u: goto label_7F078634;
    case 0x7F078638u: goto label_7F078638;
    case 0x7F07863Cu: goto label_7F07863C;
    case 0x7F078640u: goto label_7F078640;
    case 0x7F078644u: goto label_7F078644;
    case 0x7F078648u: goto label_7F078648;
    case 0x7F07864Cu: goto label_7F07864C;
    case 0x7F078650u: goto label_7F078650;
    case 0x7F078654u: goto label_7F078654;
    case 0x7F078658u: goto label_7F078658;
    case 0x7F07865Cu: goto label_7F07865C;
    case 0x7F078660u: goto label_7F078660;
    case 0x7F078664u: goto label_7F078664;
    case 0x7F078668u: goto label_7F078668;
    case 0x7F07866Cu: goto label_7F07866C;
    case 0x7F078670u: goto label_7F078670;
    case 0x7F078674u: goto label_7F078674;
    case 0x7F078678u: goto label_7F078678;
    case 0x7F07867Cu: goto label_7F07867C;
    case 0x7F078680u: goto label_7F078680;
    case 0x7F078684u: goto label_7F078684;
    case 0x7F078688u: goto label_7F078688;
    case 0x7F07868Cu: goto label_7F07868C;
    case 0x7F078690u: goto label_7F078690;
    case 0x7F078694u: goto label_7F078694;
    case 0x7F078698u: goto label_7F078698;
    case 0x7F07869Cu: goto label_7F07869C;
    case 0x7F0786A0u: goto label_7F0786A0;
    case 0x7F0786A4u: goto label_7F0786A4;
    case 0x7F0786A8u: goto label_7F0786A8;
    case 0x7F0786ACu: goto label_7F0786AC;
    case 0x7F0786B0u: goto label_7F0786B0;
    case 0x7F0786B4u: goto label_7F0786B4;
    case 0x7F0786B8u: goto label_7F0786B8;
    case 0x7F0786BCu: goto label_7F0786BC;
    case 0x7F0786C0u: goto label_7F0786C0;
    case 0x7F0786C4u: goto label_7F0786C4;
    case 0x7F0786C8u: goto label_7F0786C8;
    case 0x7F0786CCu: goto label_7F0786CC;
    case 0x7F0786D0u: goto label_7F0786D0;
    case 0x7F0786D4u: goto label_7F0786D4;
    case 0x7F0786D8u: goto label_7F0786D8;
    case 0x7F0786DCu: goto label_7F0786DC;
    case 0x7F0786E0u: goto label_7F0786E0;
    case 0x7F0786E4u: goto label_7F0786E4;
    case 0x7F0786E8u: goto label_7F0786E8;
    case 0x7F0786ECu: goto label_7F0786EC;
    case 0x7F0786F0u: goto label_7F0786F0;
    case 0x7F0786F4u: goto label_7F0786F4;
    case 0x7F0786F8u: goto label_7F0786F8;
    case 0x7F0786FCu: goto label_7F0786FC;
    case 0x7F078700u: goto label_7F078700;
    case 0x7F078704u: goto label_7F078704;
    case 0x7F078708u: goto label_7F078708;
    case 0x7F07870Cu: goto label_7F07870C;
    case 0x7F078710u: goto label_7F078710;
    case 0x7F078714u: goto label_7F078714;
    case 0x7F078718u: goto label_7F078718;
    case 0x7F07871Cu: goto label_7F07871C;
    case 0x7F078720u: goto label_7F078720;
    case 0x7F078724u: goto label_7F078724;
    case 0x7F078728u: goto label_7F078728;
    case 0x7F07872Cu: goto label_7F07872C;
    case 0x7F078730u: goto label_7F078730;
    case 0x7F078734u: goto label_7F078734;
    case 0x7F078738u: goto label_7F078738;
    case 0x7F07873Cu: goto label_7F07873C;
    case 0x7F078740u: goto label_7F078740;
    case 0x7F078744u: goto label_7F078744;
    case 0x7F078748u: goto label_7F078748;
    case 0x7F07874Cu: goto label_7F07874C;
    case 0x7F078750u: goto label_7F078750;
    case 0x7F078754u: goto label_7F078754;
    case 0x7F078758u: goto label_7F078758;
    case 0x7F07875Cu: goto label_7F07875C;
    case 0x7F078760u: goto label_7F078760;
    case 0x7F078764u: goto label_7F078764;
    case 0x7F078768u: goto label_7F078768;
    case 0x7F07876Cu: goto label_7F07876C;
    case 0x7F078770u: goto label_7F078770;
    case 0x7F078774u: goto label_7F078774;
    case 0x7F078778u: goto label_7F078778;
    case 0x7F07877Cu: goto label_7F07877C;
    case 0x7F078780u: goto label_7F078780;
    case 0x7F078784u: goto label_7F078784;
    case 0x7F078788u: goto label_7F078788;
    case 0x7F07878Cu: goto label_7F07878C;
    case 0x7F078790u: goto label_7F078790;
    case 0x7F078794u: goto label_7F078794;
    case 0x7F078798u: goto label_7F078798;
    case 0x7F07879Cu: goto label_7F07879C;
    case 0x7F0787A0u: goto label_7F0787A0;
    case 0x7F0787A4u: goto label_7F0787A4;
    case 0x7F0787A8u: goto label_7F0787A8;
    case 0x7F0787ACu: goto label_7F0787AC;
    case 0x7F0787B0u: goto label_7F0787B0;
    case 0x7F0787B4u: goto label_7F0787B4;
    case 0x7F0787B8u: goto label_7F0787B8;
    case 0x7F0787BCu: goto label_7F0787BC;
    case 0x7F0787C0u: goto label_7F0787C0;
    case 0x7F0787C4u: goto label_7F0787C4;
    case 0x7F0787C8u: goto label_7F0787C8;
    case 0x7F0787CCu: goto label_7F0787CC;
    case 0x7F0787D0u: goto label_7F0787D0;
    case 0x7F0787D4u: goto label_7F0787D4;
    case 0x7F0787D8u: goto label_7F0787D8;
    case 0x7F0787DCu: goto label_7F0787DC;
    case 0x7F0787E0u: goto label_7F0787E0;
    case 0x7F0787E4u: goto label_7F0787E4;
    case 0x7F0787E8u: goto label_7F0787E8;
    case 0x7F0787ECu: goto label_7F0787EC;
    case 0x7F0787F0u: goto label_7F0787F0;
    case 0x7F0787F4u: goto label_7F0787F4;
    case 0x7F0787F8u: goto label_7F0787F8;
    case 0x7F0787FCu: goto label_7F0787FC;
    case 0x7F078800u: goto label_7F078800;
    case 0x7F078804u: goto label_7F078804;
    case 0x7F078808u: goto label_7F078808;
    case 0x7F07880Cu: goto label_7F07880C;
    case 0x7F078810u: goto label_7F078810;
    case 0x7F078814u: goto label_7F078814;
    case 0x7F078818u: goto label_7F078818;
    case 0x7F07881Cu: goto label_7F07881C;
    case 0x7F078820u: goto label_7F078820;
    case 0x7F078824u: goto label_7F078824;
    case 0x7F078828u: goto label_7F078828;
    case 0x7F07882Cu: goto label_7F07882C;
    case 0x7F078830u: goto label_7F078830;
    case 0x7F078834u: goto label_7F078834;
    case 0x7F078838u: goto label_7F078838;
    case 0x7F07883Cu: goto label_7F07883C;
    case 0x7F078840u: goto label_7F078840;
    case 0x7F078844u: goto label_7F078844;
    case 0x7F078848u: goto label_7F078848;
    case 0x7F07884Cu: goto label_7F07884C;
    case 0x7F078850u: goto label_7F078850;
    case 0x7F078854u: goto label_7F078854;
    case 0x7F078858u: goto label_7F078858;
    case 0x7F07885Cu: goto label_7F07885C;
    case 0x7F078860u: goto label_7F078860;
    case 0x7F078864u: goto label_7F078864;
    case 0x7F078868u: goto label_7F078868;
    case 0x7F07886Cu: goto label_7F07886C;
    case 0x7F078870u: goto label_7F078870;
    case 0x7F078874u: goto label_7F078874;
    case 0x7F078878u: goto label_7F078878;
    case 0x7F07887Cu: goto label_7F07887C;
    case 0x7F078880u: goto label_7F078880;
    case 0x7F078884u: goto label_7F078884;
    case 0x7F078888u: goto label_7F078888;
    case 0x7F07888Cu: goto label_7F07888C;
    case 0x7F078890u: goto label_7F078890;
    case 0x7F078894u: goto label_7F078894;
    case 0x7F078898u: goto label_7F078898;
    case 0x7F07889Cu: goto label_7F07889C;
    case 0x7F0788A0u: goto label_7F0788A0;
    case 0x7F0788A4u: goto label_7F0788A4;
    case 0x7F0788A8u: goto label_7F0788A8;
    case 0x7F0788ACu: goto label_7F0788AC;
    case 0x7F0788B0u: goto label_7F0788B0;
    case 0x7F0788B4u: goto label_7F0788B4;
    case 0x7F0788B8u: goto label_7F0788B8;
    case 0x7F0788BCu: goto label_7F0788BC;
    case 0x7F0788C0u: goto label_7F0788C0;
    case 0x7F0788C4u: goto label_7F0788C4;
    case 0x7F0788C8u: goto label_7F0788C8;
    case 0x7F0788CCu: goto label_7F0788CC;
    case 0x7F0788D0u: goto label_7F0788D0;
    case 0x7F0788D4u: goto label_7F0788D4;
    case 0x7F0788D8u: goto label_7F0788D8;
    case 0x7F0788DCu: goto label_7F0788DC;
    case 0x7F0788E0u: goto label_7F0788E0;
    case 0x7F0788E4u: goto label_7F0788E4;
    case 0x7F0788E8u: goto label_7F0788E8;
    case 0x7F0788ECu: goto label_7F0788EC;
    case 0x7F0788F0u: goto label_7F0788F0;
    case 0x7F0788F4u: goto label_7F0788F4;
    case 0x7F0788F8u: goto label_7F0788F8;
    case 0x7F0788FCu: goto label_7F0788FC;
    case 0x7F078900u: goto label_7F078900;
    case 0x7F078904u: goto label_7F078904;
    case 0x7F078908u: goto label_7F078908;
    case 0x7F07890Cu: goto label_7F07890C;
    case 0x7F078910u: goto label_7F078910;
    case 0x7F078914u: goto label_7F078914;
    case 0x7F078918u: goto label_7F078918;
    case 0x7F07891Cu: goto label_7F07891C;
    case 0x7F078920u: goto label_7F078920;
    case 0x7F078924u: goto label_7F078924;
    case 0x7F078928u: goto label_7F078928;
    case 0x7F07892Cu: goto label_7F07892C;
    case 0x7F078930u: goto label_7F078930;
    case 0x7F078934u: goto label_7F078934;
    case 0x7F078938u: goto label_7F078938;
    case 0x7F07893Cu: goto label_7F07893C;
    case 0x7F078940u: goto label_7F078940;
    case 0x7F078944u: goto label_7F078944;
    case 0x7F078948u: goto label_7F078948;
    case 0x7F07894Cu: goto label_7F07894C;
    case 0x7F078950u: goto label_7F078950;
    case 0x7F078954u: goto label_7F078954;
    case 0x7F078958u: goto label_7F078958;
    case 0x7F07895Cu: goto label_7F07895C;
    case 0x7F078960u: goto label_7F078960;
    case 0x7F078964u: goto label_7F078964;
    case 0x7F078968u: goto label_7F078968;
    case 0x7F07896Cu: goto label_7F07896C;
    case 0x7F078970u: goto label_7F078970;
    case 0x7F078974u: goto label_7F078974;
    case 0x7F078978u: goto label_7F078978;
    case 0x7F07897Cu: goto label_7F07897C;
    case 0x7F078980u: goto label_7F078980;
    case 0x7F078984u: goto label_7F078984;
    case 0x7F078988u: goto label_7F078988;
    case 0x7F07898Cu: goto label_7F07898C;
    case 0x7F078990u: goto label_7F078990;
    case 0x7F078994u: goto label_7F078994;
    case 0x7F078998u: goto label_7F078998;
    case 0x7F07899Cu: goto label_7F07899C;
    case 0x7F0789A0u: goto label_7F0789A0;
    case 0x7F0789A4u: goto label_7F0789A4;
    case 0x7F0789A8u: goto label_7F0789A8;
    case 0x7F0789ACu: goto label_7F0789AC;
    case 0x7F0789B0u: goto label_7F0789B0;
    case 0x7F0789B4u: goto label_7F0789B4;
    case 0x7F0789B8u: goto label_7F0789B8;
    case 0x7F0789BCu: goto label_7F0789BC;
    case 0x7F0789C0u: goto label_7F0789C0;
    case 0x7F0789C4u: goto label_7F0789C4;
    case 0x7F0789C8u: goto label_7F0789C8;
    case 0x7F0789CCu: goto label_7F0789CC;
    case 0x7F0789D0u: goto label_7F0789D0;
    case 0x7F0789D4u: goto label_7F0789D4;
    case 0x7F0789D8u: goto label_7F0789D8;
    case 0x7F0789DCu: goto label_7F0789DC;
    case 0x7F0789E0u: goto label_7F0789E0;
    case 0x7F0789E4u: goto label_7F0789E4;
    case 0x7F0789E8u: goto label_7F0789E8;
    case 0x7F0789ECu: goto label_7F0789EC;
    case 0x7F0789F0u: goto label_7F0789F0;
    case 0x7F0789F4u: goto label_7F0789F4;
    case 0x7F0789F8u: goto label_7F0789F8;
    case 0x7F0789FCu: goto label_7F0789FC;
    case 0x7F078A00u: goto label_7F078A00;
    case 0x7F078A04u: goto label_7F078A04;
    case 0x7F078A08u: goto label_7F078A08;
    case 0x7F078A0Cu: goto label_7F078A0C;
    case 0x7F078A10u: goto label_7F078A10;
    case 0x7F078A14u: goto label_7F078A14;
    case 0x7F078A18u: goto label_7F078A18;
    case 0x7F078A1Cu: goto label_7F078A1C;
    case 0x7F078A20u: goto label_7F078A20;
    case 0x7F078A24u: goto label_7F078A24;
    case 0x7F078A28u: goto label_7F078A28;
    case 0x7F078A2Cu: goto label_7F078A2C;
    case 0x7F078A30u: goto label_7F078A30;
    case 0x7F078A34u: goto label_7F078A34;
    case 0x7F078A38u: goto label_7F078A38;
    case 0x7F078A3Cu: goto label_7F078A3C;
    case 0x7F078A40u: goto label_7F078A40;
    case 0x7F078A44u: goto label_7F078A44;
    case 0x7F078A48u: goto label_7F078A48;
    case 0x7F078A4Cu: goto label_7F078A4C;
    case 0x7F078A50u: goto label_7F078A50;
    case 0x7F078A54u: goto label_7F078A54;
    case 0x7F078A58u: goto label_7F078A58;
    case 0x7F078A5Cu: goto label_7F078A5C;
    case 0x7F078A60u: goto label_7F078A60;
    case 0x7F078A64u: goto label_7F078A64;
    case 0x7F078A68u: goto label_7F078A68;
    case 0x7F078A6Cu: goto label_7F078A6C;
    case 0x7F078A70u: goto label_7F078A70;
    case 0x7F078A74u: goto label_7F078A74;
    case 0x7F078A78u: goto label_7F078A78;
    case 0x7F078A7Cu: goto label_7F078A7C;
    case 0x7F078A80u: goto label_7F078A80;
    case 0x7F078A84u: goto label_7F078A84;
    case 0x7F078A88u: goto label_7F078A88;
    case 0x7F078A8Cu: goto label_7F078A8C;
    case 0x7F078A90u: goto label_7F078A90;
    case 0x7F078A94u: goto label_7F078A94;
    case 0x7F078A98u: goto label_7F078A98;
    case 0x7F078A9Cu: goto label_7F078A9C;
    case 0x7F078AA0u: goto label_7F078AA0;
    case 0x7F078AA4u: goto label_7F078AA4;
    case 0x7F078AA8u: goto label_7F078AA8;
    case 0x7F078AACu: goto label_7F078AAC;
    case 0x7F078AB0u: goto label_7F078AB0;
    case 0x7F078AB4u: goto label_7F078AB4;
    case 0x7F078AB8u: goto label_7F078AB8;
    case 0x7F078ABCu: goto label_7F078ABC;
    case 0x7F078AC0u: goto label_7F078AC0;
    case 0x7F078AC4u: goto label_7F078AC4;
    case 0x7F078AC8u: goto label_7F078AC8;
    case 0x7F078ACCu: goto label_7F078ACC;
    case 0x7F078AD0u: goto label_7F078AD0;
    case 0x7F078AD4u: goto label_7F078AD4;
    case 0x7F078AD8u: goto label_7F078AD8;
    case 0x7F078ADCu: goto label_7F078ADC;
    case 0x7F078AE0u: goto label_7F078AE0;
    case 0x7F078AE4u: goto label_7F078AE4;
    case 0x7F078AE8u: goto label_7F078AE8;
    case 0x7F078AECu: goto label_7F078AEC;
    case 0x7F078AF0u: goto label_7F078AF0;
    case 0x7F078AF4u: goto label_7F078AF4;
    case 0x7F078AF8u: goto label_7F078AF8;
    case 0x7F078AFCu: goto label_7F078AFC;
    case 0x7F078B00u: goto label_7F078B00;
    case 0x7F078B04u: goto label_7F078B04;
    case 0x7F078B08u: goto label_7F078B08;
    case 0x7F078B0Cu: goto label_7F078B0C;
    case 0x7F078B10u: goto label_7F078B10;
    case 0x7F078B14u: goto label_7F078B14;
    case 0x7F078B18u: goto label_7F078B18;
    case 0x7F078B1Cu: goto label_7F078B1C;
    case 0x7F078B20u: goto label_7F078B20;
    case 0x7F078B24u: goto label_7F078B24;
    case 0x7F078B28u: goto label_7F078B28;
    case 0x7F078B2Cu: goto label_7F078B2C;
    case 0x7F078B30u: goto label_7F078B30;
    case 0x7F078B34u: goto label_7F078B34;
    case 0x7F078B38u: goto label_7F078B38;
    case 0x7F078B3Cu: goto label_7F078B3C;
    case 0x7F078B40u: goto label_7F078B40;
    case 0x7F078B44u: goto label_7F078B44;
    case 0x7F078B48u: goto label_7F078B48;
    case 0x7F078B4Cu: goto label_7F078B4C;
    case 0x7F078B50u: goto label_7F078B50;
    case 0x7F078B54u: goto label_7F078B54;
    case 0x7F078B58u: goto label_7F078B58;
    case 0x7F078B5Cu: goto label_7F078B5C;
    case 0x7F078B60u: goto label_7F078B60;
    case 0x7F078B64u: goto label_7F078B64;
    case 0x7F078B68u: goto label_7F078B68;
    case 0x7F078B6Cu: goto label_7F078B6C;
    case 0x7F078B70u: goto label_7F078B70;
    case 0x7F078B74u: goto label_7F078B74;
    case 0x7F078B78u: goto label_7F078B78;
    case 0x7F078B7Cu: goto label_7F078B7C;
    case 0x7F078B80u: goto label_7F078B80;
    case 0x7F078B84u: goto label_7F078B84;
    case 0x7F078B88u: goto label_7F078B88;
    case 0x7F078B8Cu: goto label_7F078B8C;
    case 0x7F078B90u: goto label_7F078B90;
    case 0x7F078B94u: goto label_7F078B94;
    case 0x7F078B98u: goto label_7F078B98;
    case 0x7F078B9Cu: goto label_7F078B9C;
    case 0x7F078BA0u: goto label_7F078BA0;
    case 0x7F078BA4u: goto label_7F078BA4;
    case 0x7F078BA8u: goto label_7F078BA8;
    case 0x7F078BACu: goto label_7F078BAC;
    case 0x7F078BB0u: goto label_7F078BB0;
    case 0x7F078BB4u: goto label_7F078BB4;
    case 0x7F078BB8u: goto label_7F078BB8;
    case 0x7F078BBCu: goto label_7F078BBC;
    case 0x7F078BC0u: goto label_7F078BC0;
    case 0x7F078BC4u: goto label_7F078BC4;
    case 0x7F078BC8u: goto label_7F078BC8;
    case 0x7F078BCCu: goto label_7F078BCC;
    case 0x7F078BD0u: goto label_7F078BD0;
    case 0x7F078BD4u: goto label_7F078BD4;
    case 0x7F078BD8u: goto label_7F078BD8;
    case 0x7F078BDCu: goto label_7F078BDC;
    case 0x7F078BE0u: goto label_7F078BE0;
    case 0x7F078BE4u: goto label_7F078BE4;
    case 0x7F078BE8u: goto label_7F078BE8;
    case 0x7F078BECu: goto label_7F078BEC;
    case 0x7F078BF0u: goto label_7F078BF0;
    case 0x7F078BF4u: goto label_7F078BF4;
    case 0x7F078BF8u: goto label_7F078BF8;
    case 0x7F078BFCu: goto label_7F078BFC;
    case 0x7F078C00u: goto label_7F078C00;
    case 0x7F078C04u: goto label_7F078C04;
    case 0x7F078C08u: goto label_7F078C08;
    case 0x7F078C0Cu: goto label_7F078C0C;
    case 0x7F078C10u: goto label_7F078C10;
    case 0x7F078C14u: goto label_7F078C14;
    case 0x7F078C18u: goto label_7F078C18;
    case 0x7F078C1Cu: goto label_7F078C1C;
    case 0x7F078C20u: goto label_7F078C20;
    case 0x7F078C24u: goto label_7F078C24;
    case 0x7F078C28u: goto label_7F078C28;
    case 0x7F078C2Cu: goto label_7F078C2C;
    case 0x7F078C30u: goto label_7F078C30;
    case 0x7F078C34u: goto label_7F078C34;
    case 0x7F078C38u: goto label_7F078C38;
    case 0x7F078C3Cu: goto label_7F078C3C;
    case 0x7F078C40u: goto label_7F078C40;
    case 0x7F078C44u: goto label_7F078C44;
    case 0x7F078C48u: goto label_7F078C48;
    case 0x7F078C4Cu: goto label_7F078C4C;
    case 0x7F078C50u: goto label_7F078C50;
    case 0x7F078C54u: goto label_7F078C54;
    case 0x7F078C58u: goto label_7F078C58;
    case 0x7F078C5Cu: goto label_7F078C5C;
    case 0x7F078C60u: goto label_7F078C60;
    case 0x7F078C64u: goto label_7F078C64;
    case 0x7F078C68u: goto label_7F078C68;
    case 0x7F078C6Cu: goto label_7F078C6C;
    case 0x7F078C70u: goto label_7F078C70;
    case 0x7F078C74u: goto label_7F078C74;
    case 0x7F078C78u: goto label_7F078C78;
    case 0x7F078C7Cu: goto label_7F078C7C;
    case 0x7F078C80u: goto label_7F078C80;
    case 0x7F078C84u: goto label_7F078C84;
    case 0x7F078C88u: goto label_7F078C88;
    case 0x7F078C8Cu: goto label_7F078C8C;
    case 0x7F078C90u: goto label_7F078C90;
    case 0x7F078C94u: goto label_7F078C94;
    case 0x7F078C98u: goto label_7F078C98;
    case 0x7F078C9Cu: goto label_7F078C9C;
    case 0x7F078CA0u: goto label_7F078CA0;
    case 0x7F078CA4u: goto label_7F078CA4;
    case 0x7F078CA8u: goto label_7F078CA8;
    case 0x7F078CACu: goto label_7F078CAC;
    case 0x7F078CB0u: goto label_7F078CB0;
    case 0x7F078CB4u: goto label_7F078CB4;
    case 0x7F078CB8u: goto label_7F078CB8;
    case 0x7F078CBCu: goto label_7F078CBC;
    case 0x7F078CC0u: goto label_7F078CC0;
    case 0x7F078CC4u: goto label_7F078CC4;
    case 0x7F078CC8u: goto label_7F078CC8;
    case 0x7F078CCCu: goto label_7F078CCC;
    case 0x7F078CD0u: goto label_7F078CD0;
    case 0x7F078CD4u: goto label_7F078CD4;
    case 0x7F078CD8u: goto label_7F078CD8;
    case 0x7F078CDCu: goto label_7F078CDC;
    case 0x7F078CE0u: goto label_7F078CE0;
    case 0x7F078CE4u: goto label_7F078CE4;
    case 0x7F078CE8u: goto label_7F078CE8;
    case 0x7F078CECu: goto label_7F078CEC;
    case 0x7F078CF0u: goto label_7F078CF0;
    case 0x7F078CF4u: goto label_7F078CF4;
    case 0x7F078CF8u: goto label_7F078CF8;
    case 0x7F078CFCu: goto label_7F078CFC;
    case 0x7F078D00u: goto label_7F078D00;
    case 0x7F078D04u: goto label_7F078D04;
    case 0x7F078D08u: goto label_7F078D08;
    case 0x7F078D0Cu: goto label_7F078D0C;
    case 0x7F078D10u: goto label_7F078D10;
    case 0x7F078D14u: goto label_7F078D14;
    case 0x7F078D18u: goto label_7F078D18;
    case 0x7F078D1Cu: goto label_7F078D1C;
    case 0x7F078D20u: goto label_7F078D20;
    case 0x7F078D24u: goto label_7F078D24;
    case 0x7F078D28u: goto label_7F078D28;
    case 0x7F078D2Cu: goto label_7F078D2C;
    case 0x7F078D30u: goto label_7F078D30;
    case 0x7F078D34u: goto label_7F078D34;
    case 0x7F078D38u: goto label_7F078D38;
    case 0x7F078D3Cu: goto label_7F078D3C;
    case 0x7F078D40u: goto label_7F078D40;
    case 0x7F078D44u: goto label_7F078D44;
    case 0x7F078D48u: goto label_7F078D48;
    case 0x7F078D4Cu: goto label_7F078D4C;
    case 0x7F078D50u: goto label_7F078D50;
    case 0x7F078D54u: goto label_7F078D54;
    case 0x7F078D58u: goto label_7F078D58;
    case 0x7F078D5Cu: goto label_7F078D5C;
    case 0x7F078D60u: goto label_7F078D60;
    case 0x7F078D64u: goto label_7F078D64;
    case 0x7F078D68u: goto label_7F078D68;
    case 0x7F078D6Cu: goto label_7F078D6C;
    case 0x7F078D70u: goto label_7F078D70;
    case 0x7F078D74u: goto label_7F078D74;
    case 0x7F078D78u: goto label_7F078D78;
    case 0x7F078D7Cu: goto label_7F078D7C;
    case 0x7F078D80u: goto label_7F078D80;
    case 0x7F078D84u: goto label_7F078D84;
    case 0x7F078D88u: goto label_7F078D88;
    case 0x7F078D8Cu: goto label_7F078D8C;
    case 0x7F078D90u: goto label_7F078D90;
    case 0x7F078D94u: goto label_7F078D94;
    case 0x7F078D98u: goto label_7F078D98;
    case 0x7F078D9Cu: goto label_7F078D9C;
    case 0x7F078DA0u: goto label_7F078DA0;
    case 0x7F078DA4u: goto label_7F078DA4;
    case 0x7F078DA8u: goto label_7F078DA8;
    case 0x7F078DACu: goto label_7F078DAC;
    case 0x7F078DB0u: goto label_7F078DB0;
    case 0x7F078DB4u: goto label_7F078DB4;
    case 0x7F078DB8u: goto label_7F078DB8;
    case 0x7F078DBCu: goto label_7F078DBC;
    case 0x7F078DC0u: goto label_7F078DC0;
    case 0x7F078DC4u: goto label_7F078DC4;
    case 0x7F078DC8u: goto label_7F078DC8;
    case 0x7F078DCCu: goto label_7F078DCC;
    case 0x7F078DD0u: goto label_7F078DD0;
    case 0x7F078DD4u: goto label_7F078DD4;
    case 0x7F078DD8u: goto label_7F078DD8;
    case 0x7F078DDCu: goto label_7F078DDC;
    case 0x7F078DE0u: goto label_7F078DE0;
    case 0x7F078DE4u: goto label_7F078DE4;
    case 0x7F078DE8u: goto label_7F078DE8;
    case 0x7F078DECu: goto label_7F078DEC;
    case 0x7F078DF0u: goto label_7F078DF0;
    case 0x7F078DF4u: goto label_7F078DF4;
    case 0x7F078DF8u: goto label_7F078DF8;
    case 0x7F078DFCu: goto label_7F078DFC;
    case 0x7F078E00u: goto label_7F078E00;
    case 0x7F078E04u: goto label_7F078E04;
    case 0x7F078E08u: goto label_7F078E08;
    case 0x7F078E0Cu: goto label_7F078E0C;
    case 0x7F078E10u: goto label_7F078E10;
    case 0x7F078E14u: goto label_7F078E14;
    case 0x7F078E18u: goto label_7F078E18;
    case 0x7F078E1Cu: goto label_7F078E1C;
    case 0x7F078E20u: goto label_7F078E20;
    case 0x7F078E24u: goto label_7F078E24;
    case 0x7F078E28u: goto label_7F078E28;
    case 0x7F078E2Cu: goto label_7F078E2C;
    case 0x7F078E30u: goto label_7F078E30;
    case 0x7F078E34u: goto label_7F078E34;
    case 0x7F078E38u: goto label_7F078E38;
    case 0x7F078E3Cu: goto label_7F078E3C;
    case 0x7F078E40u: goto label_7F078E40;
    case 0x7F078E44u: goto label_7F078E44;
    case 0x7F078E48u: goto label_7F078E48;
    case 0x7F078E4Cu: goto label_7F078E4C;
    case 0x7F078E50u: goto label_7F078E50;
    case 0x7F078E54u: goto label_7F078E54;
    case 0x7F078E58u: goto label_7F078E58;
    case 0x7F078E5Cu: goto label_7F078E5C;
    case 0x7F078E60u: goto label_7F078E60;
    case 0x7F078E64u: goto label_7F078E64;
    case 0x7F078E68u: goto label_7F078E68;
    case 0x7F078E6Cu: goto label_7F078E6C;
    case 0x7F078E70u: goto label_7F078E70;
    case 0x7F078E74u: goto label_7F078E74;
    case 0x7F078E78u: goto label_7F078E78;
    case 0x7F078E7Cu: goto label_7F078E7C;
    case 0x7F078E80u: goto label_7F078E80;
    case 0x7F078E84u: goto label_7F078E84;
    case 0x7F078E88u: goto label_7F078E88;
    case 0x7F078E8Cu: goto label_7F078E8C;
    case 0x7F078E90u: goto label_7F078E90;
    case 0x7F078E94u: goto label_7F078E94;
    case 0x7F078E98u: goto label_7F078E98;
    case 0x7F078E9Cu: goto label_7F078E9C;
    case 0x7F078EA0u: goto label_7F078EA0;
    case 0x7F078EA4u: goto label_7F078EA4;
    case 0x7F078EA8u: goto label_7F078EA8;
    case 0x7F078EACu: goto label_7F078EAC;
    case 0x7F078EB0u: goto label_7F078EB0;
    case 0x7F078EB4u: goto label_7F078EB4;
    case 0x7F078EB8u: goto label_7F078EB8;
    case 0x7F078EBCu: goto label_7F078EBC;
    case 0x7F078EC0u: goto label_7F078EC0;
    case 0x7F078EC4u: goto label_7F078EC4;
    case 0x7F078EC8u: goto label_7F078EC8;
    case 0x7F078ECCu: goto label_7F078ECC;
    case 0x7F078ED0u: goto label_7F078ED0;
    case 0x7F078ED4u: goto label_7F078ED4;
    case 0x7F078ED8u: goto label_7F078ED8;
    case 0x7F078EDCu: goto label_7F078EDC;
    case 0x7F078EE0u: goto label_7F078EE0;
    case 0x7F078EE4u: goto label_7F078EE4;
    case 0x7F078EE8u: goto label_7F078EE8;
    case 0x7F078EECu: goto label_7F078EEC;
    case 0x7F078EF0u: goto label_7F078EF0;
    case 0x7F078EF4u: goto label_7F078EF4;
    case 0x7F078EF8u: goto label_7F078EF8;
    case 0x7F078EFCu: goto label_7F078EFC;
    case 0x7F078F00u: goto label_7F078F00;
    case 0x7F078F04u: goto label_7F078F04;
    case 0x7F078F08u: goto label_7F078F08;
    case 0x7F078F0Cu: goto label_7F078F0C;
    case 0x7F078F10u: goto label_7F078F10;
    case 0x7F078F14u: goto label_7F078F14;
    case 0x7F078F18u: goto label_7F078F18;
    case 0x7F078F1Cu: goto label_7F078F1C;
    case 0x7F078F20u: goto label_7F078F20;
    case 0x7F078F24u: goto label_7F078F24;
    case 0x7F078F28u: goto label_7F078F28;
    case 0x7F078F2Cu: goto label_7F078F2C;
    case 0x7F078F30u: goto label_7F078F30;
    case 0x7F078F34u: goto label_7F078F34;
    case 0x7F078F38u: goto label_7F078F38;
    case 0x7F078F3Cu: goto label_7F078F3C;
    case 0x7F078F40u: goto label_7F078F40;
    case 0x7F078F44u: goto label_7F078F44;
    case 0x7F078F48u: goto label_7F078F48;
    case 0x7F078F4Cu: goto label_7F078F4C;
    case 0x7F078F50u: goto label_7F078F50;
    case 0x7F078F54u: goto label_7F078F54;
    case 0x7F078F58u: goto label_7F078F58;
    case 0x7F078F5Cu: goto label_7F078F5C;
    case 0x7F078F60u: goto label_7F078F60;
    case 0x7F078F64u: goto label_7F078F64;
    case 0x7F078F68u: goto label_7F078F68;
    case 0x7F078F6Cu: goto label_7F078F6C;
    case 0x7F078F70u: goto label_7F078F70;
    case 0x7F078F74u: goto label_7F078F74;
    case 0x7F078F78u: goto label_7F078F78;
    case 0x7F078F7Cu: goto label_7F078F7C;
    case 0x7F078F80u: goto label_7F078F80;
    case 0x7F078F84u: goto label_7F078F84;
    case 0x7F078F88u: goto label_7F078F88;
    case 0x7F078F8Cu: goto label_7F078F8C;
    case 0x7F078F90u: goto label_7F078F90;
    case 0x7F078F94u: goto label_7F078F94;
    case 0x7F078F98u: goto label_7F078F98;
    case 0x7F078F9Cu: goto label_7F078F9C;
    case 0x7F078FA0u: goto label_7F078FA0;
    case 0x7F078FA4u: goto label_7F078FA4;
    case 0x7F078FA8u: goto label_7F078FA8;
    case 0x7F078FACu: goto label_7F078FAC;
    case 0x7F078FB0u: goto label_7F078FB0;
    case 0x7F078FB4u: goto label_7F078FB4;
    case 0x7F078FB8u: goto label_7F078FB8;
    case 0x7F078FBCu: goto label_7F078FBC;
    case 0x7F078FC0u: goto label_7F078FC0;
    case 0x7F078FC4u: goto label_7F078FC4;
    case 0x7F078FC8u: goto label_7F078FC8;
    case 0x7F078FCCu: goto label_7F078FCC;
    case 0x7F078FD0u: goto label_7F078FD0;
    case 0x7F078FD4u: goto label_7F078FD4;
    case 0x7F078FD8u: goto label_7F078FD8;
    case 0x7F078FDCu: goto label_7F078FDC;
    case 0x7F078FE0u: goto label_7F078FE0;
    case 0x7F078FE4u: goto label_7F078FE4;
    case 0x7F078FE8u: goto label_7F078FE8;
    case 0x7F078FECu: goto label_7F078FEC;
    case 0x7F078FF0u: goto label_7F078FF0;
    case 0x7F078FF4u: goto label_7F078FF4;
    case 0x7F078FF8u: goto label_7F078FF8;
    case 0x7F078FFCu: goto label_7F078FFC;
    case 0x7F079000u: goto label_7F079000;
    case 0x7F079004u: goto label_7F079004;
    case 0x7F079008u: goto label_7F079008;
    case 0x7F07900Cu: goto label_7F07900C;
    case 0x7F079010u: goto label_7F079010;
    case 0x7F079014u: goto label_7F079014;
    case 0x7F079018u: goto label_7F079018;
    case 0x7F07901Cu: goto label_7F07901C;
    case 0x7F079020u: goto label_7F079020;
    case 0x7F079024u: goto label_7F079024;
    case 0x7F079028u: goto label_7F079028;
    case 0x7F07902Cu: goto label_7F07902C;
    case 0x7F079030u: goto label_7F079030;
    case 0x7F079034u: goto label_7F079034;
    case 0x7F079038u: goto label_7F079038;
    case 0x7F07903Cu: goto label_7F07903C;
    case 0x7F079040u: goto label_7F079040;
    case 0x7F079044u: goto label_7F079044;
    case 0x7F079048u: goto label_7F079048;
    case 0x7F07904Cu: goto label_7F07904C;
    case 0x7F079050u: goto label_7F079050;
    case 0x7F079054u: goto label_7F079054;
    case 0x7F079058u: goto label_7F079058;
    case 0x7F07905Cu: goto label_7F07905C;
    case 0x7F079060u: goto label_7F079060;
    case 0x7F079064u: goto label_7F079064;
    case 0x7F079068u: goto label_7F079068;
    case 0x7F07906Cu: goto label_7F07906C;
    case 0x7F079070u: goto label_7F079070;
    case 0x7F079074u: goto label_7F079074;
    case 0x7F079078u: goto label_7F079078;
    case 0x7F07907Cu: goto label_7F07907C;
    case 0x7F079080u: goto label_7F079080;
    case 0x7F079084u: goto label_7F079084;
    case 0x7F079088u: goto label_7F079088;
    case 0x7F07908Cu: goto label_7F07908C;
    case 0x7F079090u: goto label_7F079090;
    case 0x7F079094u: goto label_7F079094;
    case 0x7F079098u: goto label_7F079098;
    case 0x7F07909Cu: goto label_7F07909C;
    case 0x7F0790A0u: goto label_7F0790A0;
    case 0x7F0790A4u: goto label_7F0790A4;
    case 0x7F0790A8u: goto label_7F0790A8;
    case 0x7F0790ACu: goto label_7F0790AC;
    case 0x7F0790B0u: goto label_7F0790B0;
    case 0x7F0790B4u: goto label_7F0790B4;
    case 0x7F0790B8u: goto label_7F0790B8;
    case 0x7F0790BCu: goto label_7F0790BC;
    case 0x7F0790C0u: goto label_7F0790C0;
    case 0x7F0790C4u: goto label_7F0790C4;
    case 0x7F0790C8u: goto label_7F0790C8;
    case 0x7F0790CCu: goto label_7F0790CC;
    case 0x7F0790D0u: goto label_7F0790D0;
    case 0x7F0790D4u: goto label_7F0790D4;
    case 0x7F0790D8u: goto label_7F0790D8;
    case 0x7F0790DCu: goto label_7F0790DC;
    case 0x7F0790E0u: goto label_7F0790E0;
    case 0x7F0790E4u: goto label_7F0790E4;
    case 0x7F0790E8u: goto label_7F0790E8;
    case 0x7F0790ECu: goto label_7F0790EC;
    case 0x7F0790F0u: goto label_7F0790F0;
    case 0x7F0790F4u: goto label_7F0790F4;
    case 0x7F0790F8u: goto label_7F0790F8;
    case 0x7F0790FCu: goto label_7F0790FC;
    case 0x7F079100u: goto label_7F079100;
    case 0x7F079104u: goto label_7F079104;
    case 0x7F079108u: goto label_7F079108;
    case 0x7F07910Cu: goto label_7F07910C;
    case 0x7F079110u: goto label_7F079110;
    case 0x7F079114u: goto label_7F079114;
    case 0x7F079118u: goto label_7F079118;
    case 0x7F07911Cu: goto label_7F07911C;
    case 0x7F079120u: goto label_7F079120;
    case 0x7F079124u: goto label_7F079124;
    case 0x7F079128u: goto label_7F079128;
    case 0x7F07912Cu: goto label_7F07912C;
    case 0x7F079130u: goto label_7F079130;
    case 0x7F079134u: goto label_7F079134;
    case 0x7F079138u: goto label_7F079138;
    case 0x7F07913Cu: goto label_7F07913C;
    case 0x7F079140u: goto label_7F079140;
    case 0x7F079144u: goto label_7F079144;
    case 0x7F079148u: goto label_7F079148;
    case 0x7F07914Cu: goto label_7F07914C;
    case 0x7F079150u: goto label_7F079150;
    case 0x7F079154u: goto label_7F079154;
    case 0x7F079158u: goto label_7F079158;
    case 0x7F07915Cu: goto label_7F07915C;
    case 0x7F079160u: goto label_7F079160;
    case 0x7F079164u: goto label_7F079164;
    case 0x7F079168u: goto label_7F079168;
    case 0x7F07916Cu: goto label_7F07916C;
    case 0x7F079170u: goto label_7F079170;
    case 0x7F079174u: goto label_7F079174;
    case 0x7F079178u: goto label_7F079178;
    case 0x7F07917Cu: goto label_7F07917C;
    case 0x7F079180u: goto label_7F079180;
    case 0x7F079184u: goto label_7F079184;
    case 0x7F079188u: goto label_7F079188;
    case 0x7F07918Cu: goto label_7F07918C;
    case 0x7F079190u: goto label_7F079190;
    case 0x7F079194u: goto label_7F079194;
    case 0x7F079198u: goto label_7F079198;
    case 0x7F07919Cu: goto label_7F07919C;
    case 0x7F0791A0u: goto label_7F0791A0;
    case 0x7F0791A4u: goto label_7F0791A4;
    case 0x7F0791A8u: goto label_7F0791A8;
    case 0x7F0791ACu: goto label_7F0791AC;
    case 0x7F0791B0u: goto label_7F0791B0;
    case 0x7F0791B4u: goto label_7F0791B4;
    case 0x7F0791B8u: goto label_7F0791B8;
    case 0x7F0791BCu: goto label_7F0791BC;
    case 0x7F0791C0u: goto label_7F0791C0;
    case 0x7F0791C4u: goto label_7F0791C4;
    case 0x7F0791C8u: goto label_7F0791C8;
    case 0x7F0791CCu: goto label_7F0791CC;
    case 0x7F0791D0u: goto label_7F0791D0;
    case 0x7F0791D4u: goto label_7F0791D4;
    case 0x7F0791D8u: goto label_7F0791D8;
    case 0x7F0791DCu: goto label_7F0791DC;
    case 0x7F0791E0u: goto label_7F0791E0;
    case 0x7F0791E4u: goto label_7F0791E4;
    case 0x7F0791E8u: goto label_7F0791E8;
    case 0x7F0791ECu: goto label_7F0791EC;
    case 0x7F0791F0u: goto label_7F0791F0;
    case 0x7F0791F4u: goto label_7F0791F4;
    case 0x7F0791F8u: goto label_7F0791F8;
    case 0x7F0791FCu: goto label_7F0791FC;
    case 0x7F079200u: goto label_7F079200;
    case 0x7F079204u: goto label_7F079204;
    case 0x7F079208u: goto label_7F079208;
    case 0x7F07920Cu: goto label_7F07920C;
    case 0x7F079210u: goto label_7F079210;
    case 0x7F079214u: goto label_7F079214;
    case 0x7F079218u: goto label_7F079218;
    case 0x7F07921Cu: goto label_7F07921C;
    case 0x7F079220u: goto label_7F079220;
    case 0x7F079224u: goto label_7F079224;
    case 0x7F079228u: goto label_7F079228;
    case 0x7F07922Cu: goto label_7F07922C;
    case 0x7F079230u: goto label_7F079230;
    case 0x7F079234u: goto label_7F079234;
    case 0x7F079238u: goto label_7F079238;
    case 0x7F07923Cu: goto label_7F07923C;
    case 0x7F079240u: goto label_7F079240;
    case 0x7F079244u: goto label_7F079244;
    case 0x7F079248u: goto label_7F079248;
    case 0x7F07924Cu: goto label_7F07924C;
    case 0x7F079250u: goto label_7F079250;
    case 0x7F079254u: goto label_7F079254;
    case 0x7F079258u: goto label_7F079258;
    case 0x7F07925Cu: goto label_7F07925C;
    case 0x7F079260u: goto label_7F079260;
    case 0x7F079264u: goto label_7F079264;
    case 0x7F079268u: goto label_7F079268;
    case 0x7F07926Cu: goto label_7F07926C;
    case 0x7F079270u: goto label_7F079270;
    case 0x7F079274u: goto label_7F079274;
    case 0x7F079278u: goto label_7F079278;
    case 0x7F07927Cu: goto label_7F07927C;
    case 0x7F079280u: goto label_7F079280;
    case 0x7F079284u: goto label_7F079284;
    case 0x7F079288u: goto label_7F079288;
    case 0x7F07928Cu: goto label_7F07928C;
    case 0x7F079290u: goto label_7F079290;
    case 0x7F079294u: goto label_7F079294;
    case 0x7F079298u: goto label_7F079298;
    case 0x7F07929Cu: goto label_7F07929C;
    case 0x7F0792A0u: goto label_7F0792A0;
    case 0x7F0792A4u: goto label_7F0792A4;
    case 0x7F0792A8u: goto label_7F0792A8;
    case 0x7F0792ACu: goto label_7F0792AC;
    case 0x7F0792B0u: goto label_7F0792B0;
    case 0x7F0792B4u: goto label_7F0792B4;
    case 0x7F0792B8u: goto label_7F0792B8;
    case 0x7F0792BCu: goto label_7F0792BC;
    case 0x7F0792C0u: goto label_7F0792C0;
    case 0x7F0792C4u: goto label_7F0792C4;
    case 0x7F0792C8u: goto label_7F0792C8;
    case 0x7F0792CCu: goto label_7F0792CC;
    case 0x7F0792D0u: goto label_7F0792D0;
    case 0x7F0792D4u: goto label_7F0792D4;
    case 0x7F0792D8u: goto label_7F0792D8;
    case 0x7F0792DCu: goto label_7F0792DC;
    case 0x7F0792E0u: goto label_7F0792E0;
    case 0x7F0792E4u: goto label_7F0792E4;
    case 0x7F0792E8u: goto label_7F0792E8;
    case 0x7F0792ECu: goto label_7F0792EC;
    case 0x7F0792F0u: goto label_7F0792F0;
    case 0x7F0792F4u: goto label_7F0792F4;
    case 0x7F0792F8u: goto label_7F0792F8;
    case 0x7F0792FCu: goto label_7F0792FC;
    case 0x7F079300u: goto label_7F079300;
    case 0x7F079304u: goto label_7F079304;
    case 0x7F079308u: goto label_7F079308;
    case 0x7F07930Cu: goto label_7F07930C;
    case 0x7F079310u: goto label_7F079310;
    case 0x7F079314u: goto label_7F079314;
    case 0x7F079318u: goto label_7F079318;
    case 0x7F07931Cu: goto label_7F07931C;
    case 0x7F079320u: goto label_7F079320;
    case 0x7F079324u: goto label_7F079324;
    case 0x7F079328u: goto label_7F079328;
    case 0x7F07932Cu: goto label_7F07932C;
    case 0x7F079330u: goto label_7F079330;
    case 0x7F079334u: goto label_7F079334;
    case 0x7F079338u: goto label_7F079338;
    case 0x7F07933Cu: goto label_7F07933C;
    case 0x7F079340u: goto label_7F079340;
    case 0x7F079344u: goto label_7F079344;
    case 0x7F079348u: goto label_7F079348;
    case 0x7F07934Cu: goto label_7F07934C;
    case 0x7F079350u: goto label_7F079350;
    case 0x7F079354u: goto label_7F079354;
    case 0x7F079358u: goto label_7F079358;
    case 0x7F07935Cu: goto label_7F07935C;
    case 0x7F079360u: goto label_7F079360;
    case 0x7F079364u: goto label_7F079364;
    case 0x7F079368u: goto label_7F079368;
    case 0x7F07936Cu: goto label_7F07936C;
    case 0x7F079370u: goto label_7F079370;
    case 0x7F079374u: goto label_7F079374;
    case 0x7F079378u: goto label_7F079378;
    case 0x7F07937Cu: goto label_7F07937C;
    case 0x7F079380u: goto label_7F079380;
    case 0x7F079384u: goto label_7F079384;
    case 0x7F079388u: goto label_7F079388;
    case 0x7F07938Cu: goto label_7F07938C;
    case 0x7F079390u: goto label_7F079390;
    case 0x7F079394u: goto label_7F079394;
    case 0x7F079398u: goto label_7F079398;
    case 0x7F07939Cu: goto label_7F07939C;
    case 0x7F0793A0u: goto label_7F0793A0;
    case 0x7F0793A4u: goto label_7F0793A4;
    case 0x7F0793A8u: goto label_7F0793A8;
    case 0x7F0793ACu: goto label_7F0793AC;
    case 0x7F0793B0u: goto label_7F0793B0;
    case 0x7F0793B4u: goto label_7F0793B4;
    case 0x7F0793B8u: goto label_7F0793B8;
    case 0x7F0793BCu: goto label_7F0793BC;
    case 0x7F0793C0u: goto label_7F0793C0;
    case 0x7F0793C4u: goto label_7F0793C4;
    case 0x7F0793C8u: goto label_7F0793C8;
    case 0x7F0793CCu: goto label_7F0793CC;
    case 0x7F0793D0u: goto label_7F0793D0;
    case 0x7F0793D4u: goto label_7F0793D4;
    case 0x7F0793D8u: goto label_7F0793D8;
    case 0x7F0793DCu: goto label_7F0793DC;
    case 0x7F0793E0u: goto label_7F0793E0;
    case 0x7F0793E4u: goto label_7F0793E4;
    case 0x7F0793E8u: goto label_7F0793E8;
    case 0x7F0793ECu: goto label_7F0793EC;
    case 0x7F0793F0u: goto label_7F0793F0;
    case 0x7F0793F4u: goto label_7F0793F4;
    case 0x7F0793F8u: goto label_7F0793F8;
    case 0x7F0793FCu: goto label_7F0793FC;
    case 0x7F079400u: goto label_7F079400;
    case 0x7F079404u: goto label_7F079404;
    case 0x7F079408u: goto label_7F079408;
    case 0x7F07940Cu: goto label_7F07940C;
    case 0x7F079410u: goto label_7F079410;
    case 0x7F079414u: goto label_7F079414;
    case 0x7F079418u: goto label_7F079418;
    case 0x7F07941Cu: goto label_7F07941C;
    case 0x7F079420u: goto label_7F079420;
    case 0x7F079424u: goto label_7F079424;
    case 0x7F079428u: goto label_7F079428;
    case 0x7F07942Cu: goto label_7F07942C;
    case 0x7F079430u: goto label_7F079430;
    case 0x7F079434u: goto label_7F079434;
    case 0x7F079438u: goto label_7F079438;
    case 0x7F07943Cu: goto label_7F07943C;
    case 0x7F079440u: goto label_7F079440;
    case 0x7F079444u: goto label_7F079444;
    case 0x7F079448u: goto label_7F079448;
    case 0x7F07944Cu: goto label_7F07944C;
    case 0x7F079450u: goto label_7F079450;
    case 0x7F079454u: goto label_7F079454;
    case 0x7F079458u: goto label_7F079458;
    case 0x7F07945Cu: goto label_7F07945C;
    case 0x7F079460u: goto label_7F079460;
    case 0x7F079464u: goto label_7F079464;
    case 0x7F079468u: goto label_7F079468;
    case 0x7F07946Cu: goto label_7F07946C;
    case 0x7F079470u: goto label_7F079470;
    case 0x7F079474u: goto label_7F079474;
    case 0x7F079478u: goto label_7F079478;
    case 0x7F07947Cu: goto label_7F07947C;
    case 0x7F079480u: goto label_7F079480;
    case 0x7F079484u: goto label_7F079484;
    case 0x7F079488u: goto label_7F079488;
    case 0x7F07948Cu: goto label_7F07948C;
    case 0x7F079490u: goto label_7F079490;
    case 0x7F079494u: goto label_7F079494;
    case 0x7F079498u: goto label_7F079498;
    case 0x7F07949Cu: goto label_7F07949C;
    case 0x7F0794A0u: goto label_7F0794A0;
    case 0x7F0794A4u: goto label_7F0794A4;
    case 0x7F0794A8u: goto label_7F0794A8;
    case 0x7F0794ACu: goto label_7F0794AC;
    case 0x7F0794B0u: goto label_7F0794B0;
    case 0x7F0794B4u: goto label_7F0794B4;
    case 0x7F0794B8u: goto label_7F0794B8;
    case 0x7F0794BCu: goto label_7F0794BC;
    case 0x7F0794C0u: goto label_7F0794C0;
    case 0x7F0794C4u: goto label_7F0794C4;
    case 0x7F0794C8u: goto label_7F0794C8;
    case 0x7F0794CCu: goto label_7F0794CC;
    case 0x7F0794D0u: goto label_7F0794D0;
    case 0x7F0794D4u: goto label_7F0794D4;
    case 0x7F0794D8u: goto label_7F0794D8;
    case 0x7F0794DCu: goto label_7F0794DC;
    case 0x7F0794E0u: goto label_7F0794E0;
    case 0x7F0794E4u: goto label_7F0794E4;
    case 0x7F0794E8u: goto label_7F0794E8;
    case 0x7F0794ECu: goto label_7F0794EC;
    case 0x7F0794F0u: goto label_7F0794F0;
    case 0x7F0794F4u: goto label_7F0794F4;
    case 0x7F0794F8u: goto label_7F0794F8;
    case 0x7F0794FCu: goto label_7F0794FC;
    case 0x7F079500u: goto label_7F079500;
    case 0x7F079504u: goto label_7F079504;
    case 0x7F079508u: goto label_7F079508;
    case 0x7F07950Cu: goto label_7F07950C;
    case 0x7F079510u: goto label_7F079510;
    case 0x7F079514u: goto label_7F079514;
    case 0x7F079518u: goto label_7F079518;
    case 0x7F07951Cu: goto label_7F07951C;
    case 0x7F079520u: goto label_7F079520;
    case 0x7F079524u: goto label_7F079524;
    case 0x7F079528u: goto label_7F079528;
    case 0x7F07952Cu: goto label_7F07952C;
    case 0x7F079530u: goto label_7F079530;
    case 0x7F079534u: goto label_7F079534;
    case 0x7F079538u: goto label_7F079538;
    case 0x7F07953Cu: goto label_7F07953C;
    case 0x7F079540u: goto label_7F079540;
    case 0x7F079544u: goto label_7F079544;
    case 0x7F079548u: goto label_7F079548;
    case 0x7F07954Cu: goto label_7F07954C;
    case 0x7F079550u: goto label_7F079550;
    case 0x7F079554u: goto label_7F079554;
    case 0x7F079558u: goto label_7F079558;
    case 0x7F07955Cu: goto label_7F07955C;
    case 0x7F079560u: goto label_7F079560;
    case 0x7F079564u: goto label_7F079564;
    case 0x7F079568u: goto label_7F079568;
    case 0x7F07956Cu: goto label_7F07956C;
    case 0x7F079570u: goto label_7F079570;
    case 0x7F079574u: goto label_7F079574;
    case 0x7F079578u: goto label_7F079578;
    case 0x7F07957Cu: goto label_7F07957C;
    case 0x7F079580u: goto label_7F079580;
    case 0x7F079584u: goto label_7F079584;
    case 0x7F079588u: goto label_7F079588;
    case 0x7F07958Cu: goto label_7F07958C;
    case 0x7F079590u: goto label_7F079590;
    case 0x7F079594u: goto label_7F079594;
    case 0x7F079598u: goto label_7F079598;
    case 0x7F07959Cu: goto label_7F07959C;
    case 0x7F0795A0u: goto label_7F0795A0;
    case 0x7F0795A4u: goto label_7F0795A4;
    case 0x7F0795A8u: goto label_7F0795A8;
    case 0x7F0795ACu: goto label_7F0795AC;
    case 0x7F0795B0u: goto label_7F0795B0;
    case 0x7F0795B4u: goto label_7F0795B4;
    case 0x7F0795B8u: goto label_7F0795B8;
    case 0x7F0795BCu: goto label_7F0795BC;
    case 0x7F0795C0u: goto label_7F0795C0;
    case 0x7F0795C4u: goto label_7F0795C4;
    case 0x7F0795C8u: goto label_7F0795C8;
    case 0x7F0795CCu: goto label_7F0795CC;
    case 0x7F0795D0u: goto label_7F0795D0;
    case 0x7F0795D4u: goto label_7F0795D4;
    case 0x7F0795D8u: goto label_7F0795D8;
    case 0x7F0795DCu: goto label_7F0795DC;
    case 0x7F0795E0u: goto label_7F0795E0;
    case 0x7F0795E4u: goto label_7F0795E4;
    case 0x7F0795E8u: goto label_7F0795E8;
    case 0x7F0795ECu: goto label_7F0795EC;
    case 0x7F0795F0u: goto label_7F0795F0;
    case 0x7F0795F4u: goto label_7F0795F4;
    case 0x7F0795F8u: goto label_7F0795F8;
    case 0x7F0795FCu: goto label_7F0795FC;
    case 0x7F079600u: goto label_7F079600;
    case 0x7F079604u: goto label_7F079604;
    case 0x7F079608u: goto label_7F079608;
    case 0x7F07960Cu: goto label_7F07960C;
    case 0x7F079610u: goto label_7F079610;
    case 0x7F079614u: goto label_7F079614;
    case 0x7F079618u: goto label_7F079618;
    case 0x7F07961Cu: goto label_7F07961C;
    case 0x7F079620u: goto label_7F079620;
    case 0x7F079624u: goto label_7F079624;
    case 0x7F079628u: goto label_7F079628;
    case 0x7F07962Cu: goto label_7F07962C;
    case 0x7F079630u: goto label_7F079630;
    case 0x7F079634u: goto label_7F079634;
    case 0x7F079638u: goto label_7F079638;
    case 0x7F07963Cu: goto label_7F07963C;
    case 0x7F079640u: goto label_7F079640;
    case 0x7F079644u: goto label_7F079644;
    case 0x7F079648u: goto label_7F079648;
    case 0x7F07964Cu: goto label_7F07964C;
    case 0x7F079650u: goto label_7F079650;
    case 0x7F079654u: goto label_7F079654;
    case 0x7F079658u: goto label_7F079658;
    case 0x7F07965Cu: goto label_7F07965C;
    case 0x7F079660u: goto label_7F079660;
    case 0x7F079664u: goto label_7F079664;
    case 0x7F079668u: goto label_7F079668;
    case 0x7F07966Cu: goto label_7F07966C;
    case 0x7F079670u: goto label_7F079670;
    case 0x7F079674u: goto label_7F079674;
    case 0x7F079678u: goto label_7F079678;
    case 0x7F07967Cu: goto label_7F07967C;
    case 0x7F079680u: goto label_7F079680;
    case 0x7F079684u: goto label_7F079684;
    case 0x7F079688u: goto label_7F079688;
    case 0x7F07968Cu: goto label_7F07968C;
    case 0x7F079690u: goto label_7F079690;
    case 0x7F079694u: goto label_7F079694;
    case 0x7F079698u: goto label_7F079698;
    case 0x7F07969Cu: goto label_7F07969C;
    case 0x7F0796A0u: goto label_7F0796A0;
    case 0x7F0796A4u: goto label_7F0796A4;
    case 0x7F0796A8u: goto label_7F0796A8;
    case 0x7F0796ACu: goto label_7F0796AC;
    case 0x7F0796B0u: goto label_7F0796B0;
    case 0x7F0796B4u: goto label_7F0796B4;
    case 0x7F0796B8u: goto label_7F0796B8;
    case 0x7F0796BCu: goto label_7F0796BC;
    case 0x7F0796C0u: goto label_7F0796C0;
    case 0x7F0796C4u: goto label_7F0796C4;
    case 0x7F0796C8u: goto label_7F0796C8;
    case 0x7F0796CCu: goto label_7F0796CC;
    case 0x7F0796D0u: goto label_7F0796D0;
    case 0x7F0796D4u: goto label_7F0796D4;
    case 0x7F0796D8u: goto label_7F0796D8;
    case 0x7F0796DCu: goto label_7F0796DC;
    case 0x7F0796E0u: goto label_7F0796E0;
    case 0x7F0796E4u: goto label_7F0796E4;
    case 0x7F0796E8u: goto label_7F0796E8;
    case 0x7F0796ECu: goto label_7F0796EC;
    case 0x7F0796F0u: goto label_7F0796F0;
    case 0x7F0796F4u: goto label_7F0796F4;
    case 0x7F0796F8u: goto label_7F0796F8;
    case 0x7F0796FCu: goto label_7F0796FC;
    case 0x7F079700u: goto label_7F079700;
    case 0x7F079704u: goto label_7F079704;
    case 0x7F079708u: goto label_7F079708;
    case 0x7F07970Cu: goto label_7F07970C;
    case 0x7F079710u: goto label_7F079710;
    case 0x7F079714u: goto label_7F079714;
    case 0x7F079718u: goto label_7F079718;
    case 0x7F07971Cu: goto label_7F07971C;
    case 0x7F079720u: goto label_7F079720;
    case 0x7F079724u: goto label_7F079724;
    case 0x7F079728u: goto label_7F079728;
    case 0x7F07972Cu: goto label_7F07972C;
    case 0x7F079730u: goto label_7F079730;
    case 0x7F079734u: goto label_7F079734;
    case 0x7F079738u: goto label_7F079738;
    case 0x7F07973Cu: goto label_7F07973C;
    case 0x7F079740u: goto label_7F079740;
    case 0x7F079744u: goto label_7F079744;
    case 0x7F079748u: goto label_7F079748;
    case 0x7F07974Cu: goto label_7F07974C;
    case 0x7F079750u: goto label_7F079750;
    case 0x7F079754u: goto label_7F079754;
    case 0x7F079758u: goto label_7F079758;
    case 0x7F07975Cu: goto label_7F07975C;
    case 0x7F079760u: goto label_7F079760;
    case 0x7F079764u: goto label_7F079764;
    case 0x7F079768u: goto label_7F079768;
    case 0x7F07976Cu: goto label_7F07976C;
    case 0x7F079770u: goto label_7F079770;
    case 0x7F079774u: goto label_7F079774;
    case 0x7F079778u: goto label_7F079778;
    case 0x7F07977Cu: goto label_7F07977C;
    case 0x7F079780u: goto label_7F079780;
    case 0x7F079784u: goto label_7F079784;
    case 0x7F079788u: goto label_7F079788;
    case 0x7F07978Cu: goto label_7F07978C;
    case 0x7F079790u: goto label_7F079790;
    case 0x7F079794u: goto label_7F079794;
    case 0x7F079798u: goto label_7F079798;
    case 0x7F07979Cu: goto label_7F07979C;
    case 0x7F0797A0u: goto label_7F0797A0;
    case 0x7F0797A4u: goto label_7F0797A4;
    case 0x7F0797A8u: goto label_7F0797A8;
    case 0x7F0797ACu: goto label_7F0797AC;
    case 0x7F0797B0u: goto label_7F0797B0;
    case 0x7F0797B4u: goto label_7F0797B4;
    case 0x7F0797B8u: goto label_7F0797B8;
    case 0x7F0797BCu: goto label_7F0797BC;
    case 0x7F0797C0u: goto label_7F0797C0;
    case 0x7F0797C4u: goto label_7F0797C4;
    case 0x7F0797C8u: goto label_7F0797C8;
    case 0x7F0797CCu: goto label_7F0797CC;
    case 0x7F0797D0u: goto label_7F0797D0;
    case 0x7F0797D4u: goto label_7F0797D4;
    case 0x7F0797D8u: goto label_7F0797D8;
    case 0x7F0797DCu: goto label_7F0797DC;
    case 0x7F0797E0u: goto label_7F0797E0;
    case 0x7F0797E4u: goto label_7F0797E4;
    case 0x7F0797E8u: goto label_7F0797E8;
    case 0x7F0797ECu: goto label_7F0797EC;
    case 0x7F0797F0u: goto label_7F0797F0;
    case 0x7F0797F4u: goto label_7F0797F4;
    case 0x7F0797F8u: goto label_7F0797F8;
    case 0x7F0797FCu: goto label_7F0797FC;
    case 0x7F079800u: goto label_7F079800;
    case 0x7F079804u: goto label_7F079804;
    case 0x7F079808u: goto label_7F079808;
    case 0x7F07980Cu: goto label_7F07980C;
    case 0x7F079810u: goto label_7F079810;
    case 0x7F079814u: goto label_7F079814;
    case 0x7F079818u: goto label_7F079818;
    case 0x7F07981Cu: goto label_7F07981C;
    case 0x7F079820u: goto label_7F079820;
    case 0x7F079824u: goto label_7F079824;
    case 0x7F079828u: goto label_7F079828;
    case 0x7F07982Cu: goto label_7F07982C;
    case 0x7F079830u: goto label_7F079830;
    case 0x7F079834u: goto label_7F079834;
    case 0x7F079838u: goto label_7F079838;
    case 0x7F07983Cu: goto label_7F07983C;
    case 0x7F079840u: goto label_7F079840;
    case 0x7F079844u: goto label_7F079844;
    case 0x7F079848u: goto label_7F079848;
    case 0x7F07984Cu: goto label_7F07984C;
    case 0x7F079850u: goto label_7F079850;
    case 0x7F079854u: goto label_7F079854;
    case 0x7F079858u: goto label_7F079858;
    case 0x7F07985Cu: goto label_7F07985C;
    case 0x7F079860u: goto label_7F079860;
    case 0x7F079864u: goto label_7F079864;
    case 0x7F079868u: goto label_7F079868;
    case 0x7F07986Cu: goto label_7F07986C;
    case 0x7F079870u: goto label_7F079870;
    case 0x7F079874u: goto label_7F079874;
    case 0x7F079878u: goto label_7F079878;
    case 0x7F07987Cu: goto label_7F07987C;
    case 0x7F079880u: goto label_7F079880;
    case 0x7F079884u: goto label_7F079884;
    case 0x7F079888u: goto label_7F079888;
    case 0x7F07988Cu: goto label_7F07988C;
    case 0x7F079890u: goto label_7F079890;
    case 0x7F079894u: goto label_7F079894;
    case 0x7F079898u: goto label_7F079898;
    case 0x7F07989Cu: goto label_7F07989C;
    case 0x7F0798A0u: goto label_7F0798A0;
    case 0x7F0798A4u: goto label_7F0798A4;
    case 0x7F0798A8u: goto label_7F0798A8;
    case 0x7F0798ACu: goto label_7F0798AC;
    case 0x7F0798B0u: goto label_7F0798B0;
    case 0x7F0798B4u: goto label_7F0798B4;
    case 0x7F0798B8u: goto label_7F0798B8;
    case 0x7F0798BCu: goto label_7F0798BC;
    case 0x7F0798C0u: goto label_7F0798C0;
    case 0x7F0798C4u: goto label_7F0798C4;
    case 0x7F0798C8u: goto label_7F0798C8;
    case 0x7F0798CCu: goto label_7F0798CC;
    case 0x7F0798D0u: goto label_7F0798D0;
    case 0x7F0798D4u: goto label_7F0798D4;
    case 0x7F0798D8u: goto label_7F0798D8;
    case 0x7F0798DCu: goto label_7F0798DC;
    case 0x7F0798E0u: goto label_7F0798E0;
    case 0x7F0798E4u: goto label_7F0798E4;
    case 0x7F0798E8u: goto label_7F0798E8;
    case 0x7F0798ECu: goto label_7F0798EC;
    case 0x7F0798F0u: goto label_7F0798F0;
    case 0x7F0798F4u: goto label_7F0798F4;
    case 0x7F0798F8u: goto label_7F0798F8;
    case 0x7F0798FCu: goto label_7F0798FC;
    case 0x7F079900u: goto label_7F079900;
    case 0x7F079904u: goto label_7F079904;
    case 0x7F079908u: goto label_7F079908;
    case 0x7F07990Cu: goto label_7F07990C;
    case 0x7F079910u: goto label_7F079910;
    case 0x7F079914u: goto label_7F079914;
    case 0x7F079918u: goto label_7F079918;
    case 0x7F07991Cu: goto label_7F07991C;
    case 0x7F079920u: goto label_7F079920;
    case 0x7F079924u: goto label_7F079924;
    case 0x7F079928u: goto label_7F079928;
    case 0x7F07992Cu: goto label_7F07992C;
    case 0x7F079930u: goto label_7F079930;
    case 0x7F079934u: goto label_7F079934;
    case 0x7F079938u: goto label_7F079938;
    case 0x7F07993Cu: goto label_7F07993C;
    case 0x7F079940u: goto label_7F079940;
    case 0x7F079944u: goto label_7F079944;
    case 0x7F079948u: goto label_7F079948;
    case 0x7F07994Cu: goto label_7F07994C;
    case 0x7F079950u: goto label_7F079950;
    case 0x7F079954u: goto label_7F079954;
    case 0x7F079958u: goto label_7F079958;
    case 0x7F07995Cu: goto label_7F07995C;
    case 0x7F079960u: goto label_7F079960;
    case 0x7F079964u: goto label_7F079964;
    case 0x7F079968u: goto label_7F079968;
    case 0x7F07996Cu: goto label_7F07996C;
    case 0x7F079970u: goto label_7F079970;
    case 0x7F079974u: goto label_7F079974;
    case 0x7F079978u: goto label_7F079978;
    case 0x7F07997Cu: goto label_7F07997C;
    case 0x7F079980u: goto label_7F079980;
    case 0x7F079984u: goto label_7F079984;
    case 0x7F079988u: goto label_7F079988;
    case 0x7F07998Cu: goto label_7F07998C;
    case 0x7F079990u: goto label_7F079990;
    case 0x7F079994u: goto label_7F079994;
    case 0x7F079998u: goto label_7F079998;
    case 0x7F07999Cu: goto label_7F07999C;
    case 0x7F0799A0u: goto label_7F0799A0;
    case 0x7F0799A4u: goto label_7F0799A4;
    case 0x7F0799A8u: goto label_7F0799A8;
    case 0x7F0799ACu: goto label_7F0799AC;
    case 0x7F0799B0u: goto label_7F0799B0;
    case 0x7F0799B4u: goto label_7F0799B4;
    case 0x7F0799B8u: goto label_7F0799B8;
    case 0x7F0799BCu: goto label_7F0799BC;
    case 0x7F0799C0u: goto label_7F0799C0;
    case 0x7F0799C4u: goto label_7F0799C4;
    case 0x7F0799C8u: goto label_7F0799C8;
    case 0x7F0799CCu: goto label_7F0799CC;
    case 0x7F0799D0u: goto label_7F0799D0;
    case 0x7F0799D4u: goto label_7F0799D4;
    case 0x7F0799D8u: goto label_7F0799D8;
    case 0x7F0799DCu: goto label_7F0799DC;
    case 0x7F0799E0u: goto label_7F0799E0;
    case 0x7F0799E4u: goto label_7F0799E4;
    case 0x7F0799E8u: goto label_7F0799E8;
    case 0x7F0799ECu: goto label_7F0799EC;
    case 0x7F0799F0u: goto label_7F0799F0;
    case 0x7F0799F4u: goto label_7F0799F4;
    case 0x7F0799F8u: goto label_7F0799F8;
    case 0x7F0799FCu: goto label_7F0799FC;
    case 0x7F079A00u: goto label_7F079A00;
    case 0x7F079A04u: goto label_7F079A04;
    case 0x7F079A08u: goto label_7F079A08;
    case 0x7F079A0Cu: goto label_7F079A0C;
    case 0x7F079A10u: goto label_7F079A10;
    case 0x7F079A14u: goto label_7F079A14;
    case 0x7F079A18u: goto label_7F079A18;
    case 0x7F079A1Cu: goto label_7F079A1C;
    case 0x7F079A20u: goto label_7F079A20;
    case 0x7F079A24u: goto label_7F079A24;
    case 0x7F079A28u: goto label_7F079A28;
    case 0x7F079A2Cu: goto label_7F079A2C;
    case 0x7F079A30u: goto label_7F079A30;
    case 0x7F079A34u: goto label_7F079A34;
    case 0x7F079A38u: goto label_7F079A38;
    case 0x7F079A3Cu: goto label_7F079A3C;
    case 0x7F079A40u: goto label_7F079A40;
    case 0x7F079A44u: goto label_7F079A44;
    case 0x7F079A48u: goto label_7F079A48;
    case 0x7F079A4Cu: goto label_7F079A4C;
    case 0x7F079A50u: goto label_7F079A50;
    case 0x7F079A54u: goto label_7F079A54;
    case 0x7F079A58u: goto label_7F079A58;
    case 0x7F079A5Cu: goto label_7F079A5C;
    case 0x7F079A60u: goto label_7F079A60;
    case 0x7F079A64u: goto label_7F079A64;
    case 0x7F079A68u: goto label_7F079A68;
    case 0x7F079A6Cu: goto label_7F079A6C;
    case 0x7F079A70u: goto label_7F079A70;
    case 0x7F079A74u: goto label_7F079A74;
    case 0x7F079A78u: goto label_7F079A78;
    case 0x7F079A7Cu: goto label_7F079A7C;
    case 0x7F079A80u: goto label_7F079A80;
    case 0x7F079A84u: goto label_7F079A84;
    case 0x7F079A88u: goto label_7F079A88;
    case 0x7F079A8Cu: goto label_7F079A8C;
    case 0x7F079A90u: goto label_7F079A90;
    case 0x7F079A94u: goto label_7F079A94;
    case 0x7F079A98u: goto label_7F079A98;
    case 0x7F079A9Cu: goto label_7F079A9C;
    case 0x7F079AA0u: goto label_7F079AA0;
    case 0x7F079AA4u: goto label_7F079AA4;
    case 0x7F079AA8u: goto label_7F079AA8;
    case 0x7F079AACu: goto label_7F079AAC;
    case 0x7F079AB0u: goto label_7F079AB0;
    case 0x7F079AB4u: goto label_7F079AB4;
    case 0x7F079AB8u: goto label_7F079AB8;
    case 0x7F079ABCu: goto label_7F079ABC;
    case 0x7F079AC0u: goto label_7F079AC0;
    case 0x7F079AC4u: goto label_7F079AC4;
    case 0x7F079AC8u: goto label_7F079AC8;
    case 0x7F079ACCu: goto label_7F079ACC;
    case 0x7F079AD0u: goto label_7F079AD0;
    case 0x7F079AD4u: goto label_7F079AD4;
    case 0x7F079AD8u: goto label_7F079AD8;
    case 0x7F079ADCu: goto label_7F079ADC;
    case 0x7F079AE0u: goto label_7F079AE0;
    case 0x7F079AE4u: goto label_7F079AE4;
    case 0x7F079AE8u: goto label_7F079AE8;
    case 0x7F079AECu: goto label_7F079AEC;
    case 0x7F079AF0u: goto label_7F079AF0;
    case 0x7F079AF4u: goto label_7F079AF4;
    case 0x7F079AF8u: goto label_7F079AF8;
    case 0x7F079AFCu: goto label_7F079AFC;
    case 0x7F079B00u: goto label_7F079B00;
    case 0x7F079B04u: goto label_7F079B04;
    case 0x7F079B08u: goto label_7F079B08;
    case 0x7F079B0Cu: goto label_7F079B0C;
    case 0x7F079B10u: goto label_7F079B10;
    case 0x7F079B14u: goto label_7F079B14;
    case 0x7F079B18u: goto label_7F079B18;
    case 0x7F079B1Cu: goto label_7F079B1C;
    case 0x7F079B20u: goto label_7F079B20;
    case 0x7F079B24u: goto label_7F079B24;
    case 0x7F079B28u: goto label_7F079B28;
    case 0x7F079B2Cu: goto label_7F079B2C;
    case 0x7F079B30u: goto label_7F079B30;
    case 0x7F079B34u: goto label_7F079B34;
    case 0x7F079B38u: goto label_7F079B38;
    case 0x7F079B3Cu: goto label_7F079B3C;
    case 0x7F079B40u: goto label_7F079B40;
    case 0x7F079B44u: goto label_7F079B44;
    case 0x7F079B48u: goto label_7F079B48;
    case 0x7F079B4Cu: goto label_7F079B4C;
    case 0x7F079B50u: goto label_7F079B50;
    case 0x7F079B54u: goto label_7F079B54;
    case 0x7F079B58u: goto label_7F079B58;
    case 0x7F079B5Cu: goto label_7F079B5C;
    case 0x7F079B60u: goto label_7F079B60;
    case 0x7F079B64u: goto label_7F079B64;
    case 0x7F079B68u: goto label_7F079B68;
    case 0x7F079B6Cu: goto label_7F079B6C;
    case 0x7F079B70u: goto label_7F079B70;
    case 0x7F079B74u: goto label_7F079B74;
    case 0x7F079B78u: goto label_7F079B78;
    case 0x7F079B7Cu: goto label_7F079B7C;
    case 0x7F079B80u: goto label_7F079B80;
    case 0x7F079B84u: goto label_7F079B84;
    case 0x7F079B88u: goto label_7F079B88;
    case 0x7F079B8Cu: goto label_7F079B8C;
    case 0x7F079B90u: goto label_7F079B90;
    case 0x7F079B94u: goto label_7F079B94;
    case 0x7F079B98u: goto label_7F079B98;
    case 0x7F079B9Cu: goto label_7F079B9C;
    case 0x7F079BA0u: goto label_7F079BA0;
    case 0x7F079BA4u: goto label_7F079BA4;
    case 0x7F079BA8u: goto label_7F079BA8;
    case 0x7F079BACu: goto label_7F079BAC;
    case 0x7F079BB0u: goto label_7F079BB0;
    case 0x7F079BB4u: goto label_7F079BB4;
    case 0x7F079BB8u: goto label_7F079BB8;
    case 0x7F079BBCu: goto label_7F079BBC;
    case 0x7F079BC0u: goto label_7F079BC0;
    case 0x7F079BC4u: goto label_7F079BC4;
    case 0x7F079BC8u: goto label_7F079BC8;
    case 0x7F079BCCu: goto label_7F079BCC;
    case 0x7F079BD0u: goto label_7F079BD0;
    case 0x7F079BD4u: goto label_7F079BD4;
    case 0x7F079BD8u: goto label_7F079BD8;
    case 0x7F079BDCu: goto label_7F079BDC;
    case 0x7F079BE0u: goto label_7F079BE0;
    case 0x7F079BE4u: goto label_7F079BE4;
    case 0x7F079BE8u: goto label_7F079BE8;
    case 0x7F079BECu: goto label_7F079BEC;
    case 0x7F079BF0u: goto label_7F079BF0;
    case 0x7F079BF4u: goto label_7F079BF4;
    case 0x7F079BF8u: goto label_7F079BF8;
    case 0x7F079BFCu: goto label_7F079BFC;
    case 0x7F079C00u: goto label_7F079C00;
    case 0x7F079C04u: goto label_7F079C04;
    case 0x7F079C08u: goto label_7F079C08;
    case 0x7F079C0Cu: goto label_7F079C0C;
    case 0x7F079C10u: goto label_7F079C10;
    case 0x7F079C14u: goto label_7F079C14;
    case 0x7F079C18u: goto label_7F079C18;
    case 0x7F079C1Cu: goto label_7F079C1C;
    case 0x7F079C20u: goto label_7F079C20;
    case 0x7F079C24u: goto label_7F079C24;
    case 0x7F079C28u: goto label_7F079C28;
    case 0x7F079C2Cu: goto label_7F079C2C;
    case 0x7F079C30u: goto label_7F079C30;
    case 0x7F079C34u: goto label_7F079C34;
    case 0x7F079C38u: goto label_7F079C38;
    case 0x7F079C3Cu: goto label_7F079C3C;
    case 0x7F079C40u: goto label_7F079C40;
    case 0x7F079C44u: goto label_7F079C44;
    case 0x7F079C48u: goto label_7F079C48;
    case 0x7F079C4Cu: goto label_7F079C4C;
    case 0x7F079C50u: goto label_7F079C50;
    case 0x7F079C54u: goto label_7F079C54;
    case 0x7F079C58u: goto label_7F079C58;
    case 0x7F079C5Cu: goto label_7F079C5C;
    case 0x7F079C60u: goto label_7F079C60;
    case 0x7F079C64u: goto label_7F079C64;
    case 0x7F079C68u: goto label_7F079C68;
    case 0x7F079C6Cu: goto label_7F079C6C;
    case 0x7F079C70u: goto label_7F079C70;
    case 0x7F079C74u: goto label_7F079C74;
    case 0x7F079C78u: goto label_7F079C78;
    case 0x7F079C7Cu: goto label_7F079C7C;
    case 0x7F079C80u: goto label_7F079C80;
    case 0x7F079C84u: goto label_7F079C84;
    case 0x7F079C88u: goto label_7F079C88;
    case 0x7F079C8Cu: goto label_7F079C8C;
    case 0x7F079C90u: goto label_7F079C90;
    case 0x7F079C94u: goto label_7F079C94;
    case 0x7F079C98u: goto label_7F079C98;
    case 0x7F079C9Cu: goto label_7F079C9C;
    case 0x7F079CA0u: goto label_7F079CA0;
    case 0x7F079CA4u: goto label_7F079CA4;
    case 0x7F079CA8u: goto label_7F079CA8;
    case 0x7F079CACu: goto label_7F079CAC;
    case 0x7F079CB0u: goto label_7F079CB0;
    case 0x7F079CB4u: goto label_7F079CB4;
    case 0x7F079CB8u: goto label_7F079CB8;
    case 0x7F079CBCu: goto label_7F079CBC;
    case 0x7F079CC0u: goto label_7F079CC0;
    case 0x7F079CC4u: goto label_7F079CC4;
    case 0x7F079CC8u: goto label_7F079CC8;
    case 0x7F079CCCu: goto label_7F079CCC;
    case 0x7F079CD0u: goto label_7F079CD0;
    case 0x7F079CD4u: goto label_7F079CD4;
    case 0x7F079CD8u: goto label_7F079CD8;
    case 0x7F079CDCu: goto label_7F079CDC;
    case 0x7F079CE0u: goto label_7F079CE0;
    case 0x7F079CE4u: goto label_7F079CE4;
    case 0x7F079CE8u: goto label_7F079CE8;
    case 0x7F079CECu: goto label_7F079CEC;
    case 0x7F079CF0u: goto label_7F079CF0;
    case 0x7F079CF4u: goto label_7F079CF4;
    case 0x7F079CF8u: goto label_7F079CF8;
    case 0x7F079CFCu: goto label_7F079CFC;
    case 0x7F079D00u: goto label_7F079D00;
    case 0x7F079D04u: goto label_7F079D04;
    case 0x7F079D08u: goto label_7F079D08;
    case 0x7F079D0Cu: goto label_7F079D0C;
    case 0x7F079D10u: goto label_7F079D10;
    case 0x7F079D14u: goto label_7F079D14;
    case 0x7F079D18u: goto label_7F079D18;
    case 0x7F079D1Cu: goto label_7F079D1C;
    case 0x7F079D20u: goto label_7F079D20;
    case 0x7F079D24u: goto label_7F079D24;
    case 0x7F079D28u: goto label_7F079D28;
    case 0x7F079D2Cu: goto label_7F079D2C;
    case 0x7F079D30u: goto label_7F079D30;
    case 0x7F079D34u: goto label_7F079D34;
    case 0x7F079D38u: goto label_7F079D38;
    case 0x7F079D3Cu: goto label_7F079D3C;
    case 0x7F079D40u: goto label_7F079D40;
    case 0x7F079D44u: goto label_7F079D44;
    case 0x7F079D48u: goto label_7F079D48;
    case 0x7F079D4Cu: goto label_7F079D4C;
    case 0x7F079D50u: goto label_7F079D50;
    case 0x7F079D54u: goto label_7F079D54;
    case 0x7F079D58u: goto label_7F079D58;
    case 0x7F079D5Cu: goto label_7F079D5C;
    case 0x7F079D60u: goto label_7F079D60;
    case 0x7F079D64u: goto label_7F079D64;
    case 0x7F079D68u: goto label_7F079D68;
    case 0x7F079D6Cu: goto label_7F079D6C;
    case 0x7F079D70u: goto label_7F079D70;
    case 0x7F079D74u: goto label_7F079D74;
    case 0x7F079D78u: goto label_7F079D78;
    case 0x7F079D7Cu: goto label_7F079D7C;
    case 0x7F079D80u: goto label_7F079D80;
    case 0x7F079D84u: goto label_7F079D84;
    case 0x7F079D88u: goto label_7F079D88;
    case 0x7F079D8Cu: goto label_7F079D8C;
    case 0x7F079D90u: goto label_7F079D90;
    case 0x7F079D94u: goto label_7F079D94;
    case 0x7F079D98u: goto label_7F079D98;
    case 0x7F079D9Cu: goto label_7F079D9C;
    case 0x7F079DA0u: goto label_7F079DA0;
    case 0x7F079DA4u: goto label_7F079DA4;
    case 0x7F079DA8u: goto label_7F079DA8;
    case 0x7F079DACu: goto label_7F079DAC;
    case 0x7F079DB0u: goto label_7F079DB0;
    case 0x7F079DB4u: goto label_7F079DB4;
    case 0x7F079DB8u: goto label_7F079DB8;
    case 0x7F079DBCu: goto label_7F079DBC;
    case 0x7F079DC0u: goto label_7F079DC0;
    case 0x7F079DC4u: goto label_7F079DC4;
    case 0x7F079DC8u: goto label_7F079DC8;
    case 0x7F079DCCu: goto label_7F079DCC;
    case 0x7F079DD0u: goto label_7F079DD0;
    case 0x7F079DD4u: goto label_7F079DD4;
    case 0x7F079DD8u: goto label_7F079DD8;
    case 0x7F079DDCu: goto label_7F079DDC;
    case 0x7F079DE0u: goto label_7F079DE0;
    case 0x7F079DE4u: goto label_7F079DE4;
    case 0x7F079DE8u: goto label_7F079DE8;
    case 0x7F079DECu: goto label_7F079DEC;
    case 0x7F079DF0u: goto label_7F079DF0;
    case 0x7F079DF4u: goto label_7F079DF4;
    case 0x7F079DF8u: goto label_7F079DF8;
    case 0x7F079DFCu: goto label_7F079DFC;
    case 0x7F079E00u: goto label_7F079E00;
    case 0x7F079E04u: goto label_7F079E04;
    case 0x7F079E08u: goto label_7F079E08;
    case 0x7F079E0Cu: goto label_7F079E0C;
    case 0x7F079E10u: goto label_7F079E10;
    case 0x7F079E14u: goto label_7F079E14;
    case 0x7F079E18u: goto label_7F079E18;
    case 0x7F079E1Cu: goto label_7F079E1C;
    case 0x7F079E20u: goto label_7F079E20;
    case 0x7F079E24u: goto label_7F079E24;
    case 0x7F079E28u: goto label_7F079E28;
    case 0x7F079E2Cu: goto label_7F079E2C;
    case 0x7F079E30u: goto label_7F079E30;
    case 0x7F079E34u: goto label_7F079E34;
    case 0x7F079E38u: goto label_7F079E38;
    case 0x7F079E3Cu: goto label_7F079E3C;
    case 0x7F079E40u: goto label_7F079E40;
    case 0x7F079E44u: goto label_7F079E44;
    case 0x7F079E48u: goto label_7F079E48;
    case 0x7F079E4Cu: goto label_7F079E4C;
    case 0x7F079E50u: goto label_7F079E50;
    case 0x7F079E54u: goto label_7F079E54;
    case 0x7F079E58u: goto label_7F079E58;
    case 0x7F079E5Cu: goto label_7F079E5C;
    case 0x7F079E60u: goto label_7F079E60;
    case 0x7F079E64u: goto label_7F079E64;
    case 0x7F079E68u: goto label_7F079E68;
    case 0x7F079E6Cu: goto label_7F079E6C;
    case 0x7F079E70u: goto label_7F079E70;
    case 0x7F079E74u: goto label_7F079E74;
    case 0x7F079E78u: goto label_7F079E78;
    case 0x7F079E7Cu: goto label_7F079E7C;
    case 0x7F079E80u: goto label_7F079E80;
    case 0x7F079E84u: goto label_7F079E84;
    case 0x7F079E88u: goto label_7F079E88;
    case 0x7F079E8Cu: goto label_7F079E8C;
    case 0x7F079E90u: goto label_7F079E90;
    case 0x7F079E94u: goto label_7F079E94;
    case 0x7F079E98u: goto label_7F079E98;
    case 0x7F079E9Cu: goto label_7F079E9C;
    case 0x7F079EA0u: goto label_7F079EA0;
    case 0x7F079EA4u: goto label_7F079EA4;
    case 0x7F079EA8u: goto label_7F079EA8;
    case 0x7F079EACu: goto label_7F079EAC;
    case 0x7F079EB0u: goto label_7F079EB0;
    case 0x7F079EB4u: goto label_7F079EB4;
    case 0x7F079EB8u: goto label_7F079EB8;
    case 0x7F079EBCu: goto label_7F079EBC;
    case 0x7F079EC0u: goto label_7F079EC0;
    case 0x7F079EC4u: goto label_7F079EC4;
    case 0x7F079EC8u: goto label_7F079EC8;
    case 0x7F079ECCu: goto label_7F079ECC;
    case 0x7F079ED0u: goto label_7F079ED0;
    case 0x7F079ED4u: goto label_7F079ED4;
    case 0x7F079ED8u: goto label_7F079ED8;
    case 0x7F079EDCu: goto label_7F079EDC;
    case 0x7F079EE0u: goto label_7F079EE0;
    case 0x7F079EE4u: goto label_7F079EE4;
    case 0x7F079EE8u: goto label_7F079EE8;
    case 0x7F079EECu: goto label_7F079EEC;
    case 0x7F079EF0u: goto label_7F079EF0;
    case 0x7F079EF4u: goto label_7F079EF4;
    case 0x7F079EF8u: goto label_7F079EF8;
    case 0x7F079EFCu: goto label_7F079EFC;
    case 0x7F079F00u: goto label_7F079F00;
    case 0x7F079F04u: goto label_7F079F04;
    case 0x7F079F08u: goto label_7F079F08;
    case 0x7F079F0Cu: goto label_7F079F0C;
    case 0x7F079F10u: goto label_7F079F10;
    case 0x7F079F14u: goto label_7F079F14;
    case 0x7F079F18u: goto label_7F079F18;
    case 0x7F079F1Cu: goto label_7F079F1C;
    case 0x7F079F20u: goto label_7F079F20;
    case 0x7F079F24u: goto label_7F079F24;
    case 0x7F079F28u: goto label_7F079F28;
    case 0x7F079F2Cu: goto label_7F079F2C;
    case 0x7F079F30u: goto label_7F079F30;
    case 0x7F079F34u: goto label_7F079F34;
    case 0x7F079F38u: goto label_7F079F38;
    case 0x7F079F3Cu: goto label_7F079F3C;
    case 0x7F079F40u: goto label_7F079F40;
    case 0x7F079F44u: goto label_7F079F44;
    case 0x7F079F48u: goto label_7F079F48;
    case 0x7F079F4Cu: goto label_7F079F4C;
    case 0x7F079F50u: goto label_7F079F50;
    case 0x7F079F54u: goto label_7F079F54;
    case 0x7F079F58u: goto label_7F079F58;
    case 0x7F079F5Cu: goto label_7F079F5C;
    case 0x7F079F60u: goto label_7F079F60;
    case 0x7F079F64u: goto label_7F079F64;
    case 0x7F079F68u: goto label_7F079F68;
    case 0x7F079F6Cu: goto label_7F079F6C;
    case 0x7F079F70u: goto label_7F079F70;
    case 0x7F079F74u: goto label_7F079F74;
    case 0x7F079F78u: goto label_7F079F78;
    case 0x7F079F7Cu: goto label_7F079F7C;
    case 0x7F079F80u: goto label_7F079F80;
    case 0x7F079F84u: goto label_7F079F84;
    case 0x7F079F88u: goto label_7F079F88;
    case 0x7F079F8Cu: goto label_7F079F8C;
    case 0x7F079F90u: goto label_7F079F90;
    case 0x7F079F94u: goto label_7F079F94;
    case 0x7F079F98u: goto label_7F079F98;
    case 0x7F079F9Cu: goto label_7F079F9C;
    case 0x7F079FA0u: goto label_7F079FA0;
    case 0x7F079FA4u: goto label_7F079FA4;
    case 0x7F079FA8u: goto label_7F079FA8;
    case 0x7F079FACu: goto label_7F079FAC;
    case 0x7F079FB0u: goto label_7F079FB0;
    case 0x7F079FB4u: goto label_7F079FB4;
    case 0x7F079FB8u: goto label_7F079FB8;
    case 0x7F079FBCu: goto label_7F079FBC;
    case 0x7F079FC0u: goto label_7F079FC0;
    case 0x7F079FC4u: goto label_7F079FC4;
    case 0x7F079FC8u: goto label_7F079FC8;
    case 0x7F079FCCu: goto label_7F079FCC;
    case 0x7F079FD0u: goto label_7F079FD0;
    case 0x7F079FD4u: goto label_7F079FD4;
    case 0x7F079FD8u: goto label_7F079FD8;
    case 0x7F079FDCu: goto label_7F079FDC;
    case 0x7F079FE0u: goto label_7F079FE0;
    case 0x7F079FE4u: goto label_7F079FE4;
    case 0x7F079FE8u: goto label_7F079FE8;
    case 0x7F079FECu: goto label_7F079FEC;
    case 0x7F079FF0u: goto label_7F079FF0;
    case 0x7F079FF4u: goto label_7F079FF4;
    case 0x7F079FF8u: goto label_7F079FF8;
    case 0x7F079FFCu: goto label_7F079FFC;
    case 0x7F07A000u: goto label_7F07A000;
    case 0x7F07A004u: goto label_7F07A004;
    case 0x7F07A008u: goto label_7F07A008;
    case 0x7F07A00Cu: goto label_7F07A00C;
    case 0x7F07A010u: goto label_7F07A010;
    case 0x7F07A014u: goto label_7F07A014;
    case 0x7F07A018u: goto label_7F07A018;
    case 0x7F07A01Cu: goto label_7F07A01C;
    case 0x7F07A020u: goto label_7F07A020;
    case 0x7F07A024u: goto label_7F07A024;
    case 0x7F07A028u: goto label_7F07A028;
    case 0x7F07A02Cu: goto label_7F07A02C;
    case 0x7F07A030u: goto label_7F07A030;
    case 0x7F07A034u: goto label_7F07A034;
    case 0x7F07A038u: goto label_7F07A038;
    case 0x7F07A03Cu: goto label_7F07A03C;
    case 0x7F07A040u: goto label_7F07A040;
    case 0x7F07A044u: goto label_7F07A044;
    case 0x7F07A048u: goto label_7F07A048;
    case 0x7F07A04Cu: goto label_7F07A04C;
    case 0x7F07A050u: goto label_7F07A050;
    case 0x7F07A054u: goto label_7F07A054;
    case 0x7F07A058u: goto label_7F07A058;
    case 0x7F07A05Cu: goto label_7F07A05C;
    case 0x7F07A060u: goto label_7F07A060;
    case 0x7F07A064u: goto label_7F07A064;
    case 0x7F07A068u: goto label_7F07A068;
    case 0x7F07A06Cu: goto label_7F07A06C;
    case 0x7F07A070u: goto label_7F07A070;
    case 0x7F07A074u: goto label_7F07A074;
    case 0x7F07A078u: goto label_7F07A078;
    case 0x7F07A07Cu: goto label_7F07A07C;
    case 0x7F07A080u: goto label_7F07A080;
    case 0x7F07A084u: goto label_7F07A084;
    case 0x7F07A088u: goto label_7F07A088;
    case 0x7F07A08Cu: goto label_7F07A08C;
    case 0x7F07A090u: goto label_7F07A090;
    case 0x7F07A094u: goto label_7F07A094;
    case 0x7F07A098u: goto label_7F07A098;
    case 0x7F07A09Cu: goto label_7F07A09C;
    case 0x7F07A0A0u: goto label_7F07A0A0;
    case 0x7F07A0A4u: goto label_7F07A0A4;
    case 0x7F07A0A8u: goto label_7F07A0A8;
    case 0x7F07A0ACu: goto label_7F07A0AC;
    case 0x7F07A0B0u: goto label_7F07A0B0;
    case 0x7F07A0B4u: goto label_7F07A0B4;
    case 0x7F07A0B8u: goto label_7F07A0B8;
    case 0x7F07A0BCu: goto label_7F07A0BC;
    case 0x7F07A0C0u: goto label_7F07A0C0;
    case 0x7F07A0C4u: goto label_7F07A0C4;
    case 0x7F07A0C8u: goto label_7F07A0C8;
    case 0x7F07A0CCu: goto label_7F07A0CC;
    case 0x7F07A0D0u: goto label_7F07A0D0;
    case 0x7F07A0D4u: goto label_7F07A0D4;
    case 0x7F07A0D8u: goto label_7F07A0D8;
    case 0x7F07A0DCu: goto label_7F07A0DC;
    case 0x7F07A0E0u: goto label_7F07A0E0;
    case 0x7F07A0E4u: goto label_7F07A0E4;
    case 0x7F07A0E8u: goto label_7F07A0E8;
    case 0x7F07A0ECu: goto label_7F07A0EC;
    case 0x7F07A0F0u: goto label_7F07A0F0;
    case 0x7F07A0F4u: goto label_7F07A0F4;
    case 0x7F07A0F8u: goto label_7F07A0F8;
    case 0x7F07A0FCu: goto label_7F07A0FC;
    case 0x7F07A100u: goto label_7F07A100;
    case 0x7F07A104u: goto label_7F07A104;
    case 0x7F07A108u: goto label_7F07A108;
    case 0x7F07A10Cu: goto label_7F07A10C;
    case 0x7F07A110u: goto label_7F07A110;
    case 0x7F07A114u: goto label_7F07A114;
    case 0x7F07A118u: goto label_7F07A118;
    case 0x7F07A11Cu: goto label_7F07A11C;
    case 0x7F07A120u: goto label_7F07A120;
    case 0x7F07A124u: goto label_7F07A124;
    case 0x7F07A128u: goto label_7F07A128;
    case 0x7F07A12Cu: goto label_7F07A12C;
    case 0x7F07A130u: goto label_7F07A130;
    case 0x7F07A134u: goto label_7F07A134;
    case 0x7F07A138u: goto label_7F07A138;
    case 0x7F07A13Cu: goto label_7F07A13C;
    case 0x7F07A140u: goto label_7F07A140;
    case 0x7F07A144u: goto label_7F07A144;
    case 0x7F07A148u: goto label_7F07A148;
    case 0x7F07A14Cu: goto label_7F07A14C;
    case 0x7F07A150u: goto label_7F07A150;
    case 0x7F07A154u: goto label_7F07A154;
    case 0x7F07A158u: goto label_7F07A158;
    case 0x7F07A15Cu: goto label_7F07A15C;
    case 0x7F07A160u: goto label_7F07A160;
    case 0x7F07A164u: goto label_7F07A164;
    case 0x7F07A168u: goto label_7F07A168;
    case 0x7F07A16Cu: goto label_7F07A16C;
    case 0x7F07A170u: goto label_7F07A170;
    case 0x7F07A174u: goto label_7F07A174;
    case 0x7F07A178u: goto label_7F07A178;
    case 0x7F07A17Cu: goto label_7F07A17C;
    case 0x7F07A180u: goto label_7F07A180;
    case 0x7F07A184u: goto label_7F07A184;
    case 0x7F07A188u: goto label_7F07A188;
    case 0x7F07A18Cu: goto label_7F07A18C;
    case 0x7F07A190u: goto label_7F07A190;
    case 0x7F07A194u: goto label_7F07A194;
    case 0x7F07A198u: goto label_7F07A198;
    case 0x7F07A19Cu: goto label_7F07A19C;
    case 0x7F07A1A0u: goto label_7F07A1A0;
    case 0x7F07A1A4u: goto label_7F07A1A4;
    case 0x7F07A1A8u: goto label_7F07A1A8;
    case 0x7F07A1ACu: goto label_7F07A1AC;
    case 0x7F07A1B0u: goto label_7F07A1B0;
    case 0x7F07A1B4u: goto label_7F07A1B4;
    case 0x7F07A1B8u: goto label_7F07A1B8;
    case 0x7F07A1BCu: goto label_7F07A1BC;
    case 0x7F07A1C0u: goto label_7F07A1C0;
    case 0x7F07A1C4u: goto label_7F07A1C4;
    case 0x7F07A1C8u: goto label_7F07A1C8;
    case 0x7F07A1CCu: goto label_7F07A1CC;
    case 0x7F07A1D0u: goto label_7F07A1D0;
    case 0x7F07A1D4u: goto label_7F07A1D4;
    case 0x7F07A1D8u: goto label_7F07A1D8;
    case 0x7F07A1DCu: goto label_7F07A1DC;
    case 0x7F07A1E0u: goto label_7F07A1E0;
    case 0x7F07A1E4u: goto label_7F07A1E4;
    case 0x7F07A1E8u: goto label_7F07A1E8;
    case 0x7F07A1ECu: goto label_7F07A1EC;
    case 0x7F07A1F0u: goto label_7F07A1F0;
    case 0x7F07A1F4u: goto label_7F07A1F4;
    case 0x7F07A1F8u: goto label_7F07A1F8;
    case 0x7F07A1FCu: goto label_7F07A1FC;
    case 0x7F07A200u: goto label_7F07A200;
    case 0x7F07A204u: goto label_7F07A204;
    case 0x7F07A208u: goto label_7F07A208;
    case 0x7F07A20Cu: goto label_7F07A20C;
    case 0x7F07A210u: goto label_7F07A210;
    case 0x7F07A214u: goto label_7F07A214;
    case 0x7F07A218u: goto label_7F07A218;
    case 0x7F07A21Cu: goto label_7F07A21C;
    case 0x7F07A220u: goto label_7F07A220;
    case 0x7F07A224u: goto label_7F07A224;
    case 0x7F07A228u: goto label_7F07A228;
    case 0x7F07A22Cu: goto label_7F07A22C;
    case 0x7F07A230u: goto label_7F07A230;
    case 0x7F07A234u: goto label_7F07A234;
    case 0x7F07A238u: goto label_7F07A238;
    case 0x7F07A23Cu: goto label_7F07A23C;
    case 0x7F07A240u: goto label_7F07A240;
    case 0x7F07A244u: goto label_7F07A244;
    case 0x7F07A248u: goto label_7F07A248;
    case 0x7F07A24Cu: goto label_7F07A24C;
    case 0x7F07A250u: goto label_7F07A250;
    case 0x7F07A254u: goto label_7F07A254;
    case 0x7F07A258u: goto label_7F07A258;
    case 0x7F07A25Cu: goto label_7F07A25C;
    case 0x7F07A260u: goto label_7F07A260;
    case 0x7F07A264u: goto label_7F07A264;
    case 0x7F07A268u: goto label_7F07A268;
    case 0x7F07A26Cu: goto label_7F07A26C;
    case 0x7F07A270u: goto label_7F07A270;
    case 0x7F07A274u: goto label_7F07A274;
    case 0x7F07A278u: goto label_7F07A278;
    case 0x7F07A27Cu: goto label_7F07A27C;
    case 0x7F07A280u: goto label_7F07A280;
    case 0x7F07A284u: goto label_7F07A284;
    case 0x7F07A288u: goto label_7F07A288;
    case 0x7F07A28Cu: goto label_7F07A28C;
    case 0x7F07A290u: goto label_7F07A290;
    case 0x7F07A294u: goto label_7F07A294;
    case 0x7F07A298u: goto label_7F07A298;
    case 0x7F07A29Cu: goto label_7F07A29C;
    case 0x7F07A2A0u: goto label_7F07A2A0;
    case 0x7F07A2A4u: goto label_7F07A2A4;
    case 0x7F07A2A8u: goto label_7F07A2A8;
    case 0x7F07A2ACu: goto label_7F07A2AC;
    case 0x7F07A2B0u: goto label_7F07A2B0;
    case 0x7F07A2B4u: goto label_7F07A2B4;
    case 0x7F07A2B8u: goto label_7F07A2B8;
    case 0x7F07A2BCu: goto label_7F07A2BC;
    case 0x7F07A2C0u: goto label_7F07A2C0;
    case 0x7F07A2C4u: goto label_7F07A2C4;
    case 0x7F07A2C8u: goto label_7F07A2C8;
    case 0x7F07A2CCu: goto label_7F07A2CC;
    case 0x7F07A2D0u: goto label_7F07A2D0;
    case 0x7F07A2D4u: goto label_7F07A2D4;
    case 0x7F07A2D8u: goto label_7F07A2D8;
    case 0x7F07A2DCu: goto label_7F07A2DC;
    case 0x7F07A2E0u: goto label_7F07A2E0;
    case 0x7F07A2E4u: goto label_7F07A2E4;
    case 0x7F07A2E8u: goto label_7F07A2E8;
    case 0x7F07A2ECu: goto label_7F07A2EC;
    case 0x7F07A2F0u: goto label_7F07A2F0;
    case 0x7F07A2F4u: goto label_7F07A2F4;
    case 0x7F07A2F8u: goto label_7F07A2F8;
    case 0x7F07A2FCu: goto label_7F07A2FC;
    case 0x7F07A300u: goto label_7F07A300;
    case 0x7F07A304u: goto label_7F07A304;
    case 0x7F07A308u: goto label_7F07A308;
    case 0x7F07A30Cu: goto label_7F07A30C;
    case 0x7F07A310u: goto label_7F07A310;
    case 0x7F07A314u: goto label_7F07A314;
    case 0x7F07A318u: goto label_7F07A318;
    case 0x7F07A31Cu: goto label_7F07A31C;
    case 0x7F07A320u: goto label_7F07A320;
    case 0x7F07A324u: goto label_7F07A324;
    case 0x7F07A328u: goto label_7F07A328;
    case 0x7F07A32Cu: goto label_7F07A32C;
    case 0x7F07A330u: goto label_7F07A330;
    case 0x7F07A334u: goto label_7F07A334;
    case 0x7F07A338u: goto label_7F07A338;
    case 0x7F07A33Cu: goto label_7F07A33C;
    case 0x7F07A340u: goto label_7F07A340;
    case 0x7F07A344u: goto label_7F07A344;
    case 0x7F07A348u: goto label_7F07A348;
    case 0x7F07A34Cu: goto label_7F07A34C;
    case 0x7F07A350u: goto label_7F07A350;
    case 0x7F07A354u: goto label_7F07A354;
    case 0x7F07A358u: goto label_7F07A358;
    case 0x7F07A35Cu: goto label_7F07A35C;
    case 0x7F07A360u: goto label_7F07A360;
    case 0x7F07A364u: goto label_7F07A364;
    case 0x7F07A368u: goto label_7F07A368;
    case 0x7F07A36Cu: goto label_7F07A36C;
    case 0x7F07A370u: goto label_7F07A370;
    case 0x7F07A374u: goto label_7F07A374;
    case 0x7F07A378u: goto label_7F07A378;
    case 0x7F07A37Cu: goto label_7F07A37C;
    case 0x7F07A380u: goto label_7F07A380;
    case 0x7F07A384u: goto label_7F07A384;
    case 0x7F07A388u: goto label_7F07A388;
    case 0x7F07A38Cu: goto label_7F07A38C;
    case 0x7F07A390u: goto label_7F07A390;
    case 0x7F07A394u: goto label_7F07A394;
    case 0x7F07A398u: goto label_7F07A398;
    case 0x7F07A39Cu: goto label_7F07A39C;
    case 0x7F07A3A0u: goto label_7F07A3A0;
    case 0x7F07A3A4u: goto label_7F07A3A4;
    case 0x7F07A3A8u: goto label_7F07A3A8;
    case 0x7F07A3ACu: goto label_7F07A3AC;
    case 0x7F07A3B0u: goto label_7F07A3B0;
    case 0x7F07A3B4u: goto label_7F07A3B4;
    case 0x7F07A3B8u: goto label_7F07A3B8;
    case 0x7F07A3BCu: goto label_7F07A3BC;
    case 0x7F07A3C0u: goto label_7F07A3C0;
    case 0x7F07A3C4u: goto label_7F07A3C4;
    case 0x7F07A3C8u: goto label_7F07A3C8;
    case 0x7F07A3CCu: goto label_7F07A3CC;
    case 0x7F07A3D0u: goto label_7F07A3D0;
    case 0x7F07A3D4u: goto label_7F07A3D4;
    case 0x7F07A3D8u: goto label_7F07A3D8;
    case 0x7F07A3DCu: goto label_7F07A3DC;
    case 0x7F07A3E0u: goto label_7F07A3E0;
    case 0x7F07A3E4u: goto label_7F07A3E4;
    case 0x7F07A3E8u: goto label_7F07A3E8;
    case 0x7F07A3ECu: goto label_7F07A3EC;
    case 0x7F07A3F0u: goto label_7F07A3F0;
    case 0x7F07A3F4u: goto label_7F07A3F4;
    case 0x7F07A3F8u: goto label_7F07A3F8;
    case 0x7F07A3FCu: goto label_7F07A3FC;
    case 0x7F07A400u: goto label_7F07A400;
    case 0x7F07A404u: goto label_7F07A404;
    case 0x7F07A408u: goto label_7F07A408;
    case 0x7F07A40Cu: goto label_7F07A40C;
    case 0x7F07A410u: goto label_7F07A410;
    case 0x7F07A414u: goto label_7F07A414;
    case 0x7F07A418u: goto label_7F07A418;
    case 0x7F07A41Cu: goto label_7F07A41C;
    case 0x7F07A420u: goto label_7F07A420;
    case 0x7F07A424u: goto label_7F07A424;
    case 0x7F07A428u: goto label_7F07A428;
    case 0x7F07A42Cu: goto label_7F07A42C;
    case 0x7F07A430u: goto label_7F07A430;
    case 0x7F07A434u: goto label_7F07A434;
    case 0x7F07A438u: goto label_7F07A438;
    case 0x7F07A43Cu: goto label_7F07A43C;
    case 0x7F07A440u: goto label_7F07A440;
    case 0x7F07A444u: goto label_7F07A444;
    case 0x7F07A448u: goto label_7F07A448;
    case 0x7F07A44Cu: goto label_7F07A44C;
    case 0x7F07A450u: goto label_7F07A450;
    case 0x7F07A454u: goto label_7F07A454;
    case 0x7F07A458u: goto label_7F07A458;
    case 0x7F07A45Cu: goto label_7F07A45C;
    case 0x7F07A460u: goto label_7F07A460;
    case 0x7F07A464u: goto label_7F07A464;
    case 0x7F07A468u: goto label_7F07A468;
    case 0x7F07A46Cu: goto label_7F07A46C;
    case 0x7F07A470u: goto label_7F07A470;
    case 0x7F07A474u: goto label_7F07A474;
    case 0x7F07A478u: goto label_7F07A478;
    case 0x7F07A47Cu: goto label_7F07A47C;
    case 0x7F07A480u: goto label_7F07A480;
    case 0x7F07A484u: goto label_7F07A484;
    case 0x7F07A488u: goto label_7F07A488;
    case 0x7F07A48Cu: goto label_7F07A48C;
    case 0x7F07A490u: goto label_7F07A490;
    case 0x7F07A494u: goto label_7F07A494;
    case 0x7F07A498u: goto label_7F07A498;
    case 0x7F07A49Cu: goto label_7F07A49C;
    case 0x7F07A4A0u: goto label_7F07A4A0;
    case 0x7F07A4A4u: goto label_7F07A4A4;
    case 0x7F07A4A8u: goto label_7F07A4A8;
    case 0x7F07A4ACu: goto label_7F07A4AC;
    case 0x7F07A4B0u: goto label_7F07A4B0;
    case 0x7F07A4B4u: goto label_7F07A4B4;
    case 0x7F07A4B8u: goto label_7F07A4B8;
    case 0x7F07A4BCu: goto label_7F07A4BC;
    case 0x7F07A4C0u: goto label_7F07A4C0;
    case 0x7F07A4C4u: goto label_7F07A4C4;
    case 0x7F07A4C8u: goto label_7F07A4C8;
    case 0x7F07A4CCu: goto label_7F07A4CC;
    case 0x7F07A4D0u: goto label_7F07A4D0;
    case 0x7F07A4D4u: goto label_7F07A4D4;
    case 0x7F07A4D8u: goto label_7F07A4D8;
    case 0x7F07A4DCu: goto label_7F07A4DC;
    case 0x7F07A4E0u: goto label_7F07A4E0;
    case 0x7F07A4E4u: goto label_7F07A4E4;
    case 0x7F07A4E8u: goto label_7F07A4E8;
    case 0x7F07A4ECu: goto label_7F07A4EC;
    case 0x7F07A4F0u: goto label_7F07A4F0;
    case 0x7F07A4F4u: goto label_7F07A4F4;
    case 0x7F07A4F8u: goto label_7F07A4F8;
    case 0x7F07A4FCu: goto label_7F07A4FC;
    case 0x7F07A500u: goto label_7F07A500;
    case 0x7F07A504u: goto label_7F07A504;
    case 0x7F07A508u: goto label_7F07A508;
    case 0x7F07A50Cu: goto label_7F07A50C;
    case 0x7F07A510u: goto label_7F07A510;
    case 0x7F07A514u: goto label_7F07A514;
    case 0x7F07A518u: goto label_7F07A518;
    case 0x7F07A51Cu: goto label_7F07A51C;
    case 0x7F07A520u: goto label_7F07A520;
    case 0x7F07A524u: goto label_7F07A524;
    case 0x7F07A528u: goto label_7F07A528;
    case 0x7F07A52Cu: goto label_7F07A52C;
    case 0x7F07A530u: goto label_7F07A530;
    case 0x7F07A534u: goto label_7F07A534;
    case 0x7F07A538u: goto label_7F07A538;
    case 0x7F07A53Cu: goto label_7F07A53C;
    case 0x7F07A540u: goto label_7F07A540;
    case 0x7F07A544u: goto label_7F07A544;
    case 0x7F07A548u: goto label_7F07A548;
    case 0x7F07A54Cu: goto label_7F07A54C;
    case 0x7F07A550u: goto label_7F07A550;
    case 0x7F07A554u: goto label_7F07A554;
    case 0x7F07A558u: goto label_7F07A558;
    case 0x7F07A55Cu: goto label_7F07A55C;
    case 0x7F07A560u: goto label_7F07A560;
    case 0x7F07A564u: goto label_7F07A564;
    case 0x7F07A568u: goto label_7F07A568;
    case 0x7F07A56Cu: goto label_7F07A56C;
    case 0x7F07A570u: goto label_7F07A570;
    case 0x7F07A574u: goto label_7F07A574;
    case 0x7F07A578u: goto label_7F07A578;
    case 0x7F07A57Cu: goto label_7F07A57C;
    case 0x7F07A580u: goto label_7F07A580;
    case 0x7F07A584u: goto label_7F07A584;
    case 0x7F07A588u: goto label_7F07A588;
    case 0x7F07A58Cu: goto label_7F07A58C;
    case 0x7F07A590u: goto label_7F07A590;
    case 0x7F07A594u: goto label_7F07A594;
    case 0x7F07A598u: goto label_7F07A598;
    case 0x7F07A59Cu: goto label_7F07A59C;
    case 0x7F07A5A0u: goto label_7F07A5A0;
    case 0x7F07A5A4u: goto label_7F07A5A4;
    case 0x7F07A5A8u: goto label_7F07A5A8;
    case 0x7F07A5ACu: goto label_7F07A5AC;
    case 0x7F07A5B0u: goto label_7F07A5B0;
    case 0x7F07A5B4u: goto label_7F07A5B4;
    case 0x7F07A5B8u: goto label_7F07A5B8;
    case 0x7F07A5BCu: goto label_7F07A5BC;
    case 0x7F07A5C0u: goto label_7F07A5C0;
    case 0x7F07A5C4u: goto label_7F07A5C4;
    case 0x7F07A5C8u: goto label_7F07A5C8;
    case 0x7F07A5CCu: goto label_7F07A5CC;
    case 0x7F07A5D0u: goto label_7F07A5D0;
    case 0x7F07A5D4u: goto label_7F07A5D4;
    case 0x7F07A5D8u: goto label_7F07A5D8;
    case 0x7F07A5DCu: goto label_7F07A5DC;
    case 0x7F07A5E0u: goto label_7F07A5E0;
    case 0x7F07A5E4u: goto label_7F07A5E4;
    case 0x7F07A5E8u: goto label_7F07A5E8;
    case 0x7F07A5ECu: goto label_7F07A5EC;
    case 0x7F07A5F0u: goto label_7F07A5F0;
    case 0x7F07A5F4u: goto label_7F07A5F4;
    case 0x7F07A5F8u: goto label_7F07A5F8;
    case 0x7F07A5FCu: goto label_7F07A5FC;
    case 0x7F07A600u: goto label_7F07A600;
    case 0x7F07A604u: goto label_7F07A604;
    case 0x7F07A608u: goto label_7F07A608;
    case 0x7F07A60Cu: goto label_7F07A60C;
    case 0x7F07A610u: goto label_7F07A610;
    case 0x7F07A614u: goto label_7F07A614;
    case 0x7F07A618u: goto label_7F07A618;
    case 0x7F07A61Cu: goto label_7F07A61C;
    case 0x7F07A620u: goto label_7F07A620;
    case 0x7F07A624u: goto label_7F07A624;
    case 0x7F07A628u: goto label_7F07A628;
    case 0x7F07A62Cu: goto label_7F07A62C;
    case 0x7F07A630u: goto label_7F07A630;
    case 0x7F07A634u: goto label_7F07A634;
    case 0x7F07A638u: goto label_7F07A638;
    case 0x7F07A63Cu: goto label_7F07A63C;
    case 0x7F07A640u: goto label_7F07A640;
    case 0x7F07A644u: goto label_7F07A644;
    case 0x7F07A648u: goto label_7F07A648;
    case 0x7F07A64Cu: goto label_7F07A64C;
    case 0x7F07A650u: goto label_7F07A650;
    case 0x7F07A654u: goto label_7F07A654;
    case 0x7F07A658u: goto label_7F07A658;
    case 0x7F07A65Cu: goto label_7F07A65C;
    case 0x7F07A660u: goto label_7F07A660;
    case 0x7F07A664u: goto label_7F07A664;
    case 0x7F07A668u: goto label_7F07A668;
    case 0x7F07A66Cu: goto label_7F07A66C;
    case 0x7F07A670u: goto label_7F07A670;
    case 0x7F07A674u: goto label_7F07A674;
    case 0x7F07A678u: goto label_7F07A678;
    case 0x7F07A67Cu: goto label_7F07A67C;
    case 0x7F07A680u: goto label_7F07A680;
    case 0x7F07A684u: goto label_7F07A684;
    case 0x7F07A688u: goto label_7F07A688;
    case 0x7F07A68Cu: goto label_7F07A68C;
    case 0x7F07A690u: goto label_7F07A690;
    case 0x7F07A694u: goto label_7F07A694;
    case 0x7F07A698u: goto label_7F07A698;
    case 0x7F07A69Cu: goto label_7F07A69C;
    case 0x7F07A6A0u: goto label_7F07A6A0;
    case 0x7F07A6A4u: goto label_7F07A6A4;
    case 0x7F07A6A8u: goto label_7F07A6A8;
    case 0x7F07A6ACu: goto label_7F07A6AC;
    case 0x7F07A6B0u: goto label_7F07A6B0;
    case 0x7F07A6B4u: goto label_7F07A6B4;
    case 0x7F07A6B8u: goto label_7F07A6B8;
    case 0x7F07A6BCu: goto label_7F07A6BC;
    case 0x7F07A6C0u: goto label_7F07A6C0;
    case 0x7F07A6C4u: goto label_7F07A6C4;
    case 0x7F07A6C8u: goto label_7F07A6C8;
    case 0x7F07A6CCu: goto label_7F07A6CC;
    case 0x7F07A6D0u: goto label_7F07A6D0;
    case 0x7F07A6D4u: goto label_7F07A6D4;
    case 0x7F07A6D8u: goto label_7F07A6D8;
    case 0x7F07A6DCu: goto label_7F07A6DC;
    case 0x7F07A6E0u: goto label_7F07A6E0;
    case 0x7F07A6E4u: goto label_7F07A6E4;
    case 0x7F07A6E8u: goto label_7F07A6E8;
    case 0x7F07A6ECu: goto label_7F07A6EC;
    case 0x7F07A6F0u: goto label_7F07A6F0;
    case 0x7F07A6F4u: goto label_7F07A6F4;
    case 0x7F07A6F8u: goto label_7F07A6F8;
    case 0x7F07A6FCu: goto label_7F07A6FC;
    case 0x7F07A700u: goto label_7F07A700;
    case 0x7F07A704u: goto label_7F07A704;
    case 0x7F07A708u: goto label_7F07A708;
    case 0x7F07A70Cu: goto label_7F07A70C;
    case 0x7F07A710u: goto label_7F07A710;
    case 0x7F07A714u: goto label_7F07A714;
    case 0x7F07A718u: goto label_7F07A718;
    case 0x7F07A71Cu: goto label_7F07A71C;
    case 0x7F07A720u: goto label_7F07A720;
    case 0x7F07A724u: goto label_7F07A724;
    case 0x7F07A728u: goto label_7F07A728;
    case 0x7F07A72Cu: goto label_7F07A72C;
    case 0x7F07A730u: goto label_7F07A730;
    case 0x7F07A734u: goto label_7F07A734;
    case 0x7F07A738u: goto label_7F07A738;
    case 0x7F07A73Cu: goto label_7F07A73C;
    case 0x7F07A740u: goto label_7F07A740;
    case 0x7F07A744u: goto label_7F07A744;
    case 0x7F07A748u: goto label_7F07A748;
    case 0x7F07A74Cu: goto label_7F07A74C;
    case 0x7F07A750u: goto label_7F07A750;
    case 0x7F07A754u: goto label_7F07A754;
    case 0x7F07A758u: goto label_7F07A758;
    case 0x7F07A75Cu: goto label_7F07A75C;
    case 0x7F07A760u: goto label_7F07A760;
    case 0x7F07A764u: goto label_7F07A764;
    case 0x7F07A768u: goto label_7F07A768;
    case 0x7F07A76Cu: goto label_7F07A76C;
    case 0x7F07A770u: goto label_7F07A770;
    case 0x7F07A774u: goto label_7F07A774;
    case 0x7F07A778u: goto label_7F07A778;
    case 0x7F07A77Cu: goto label_7F07A77C;
    case 0x7F07A780u: goto label_7F07A780;
    case 0x7F07A784u: goto label_7F07A784;
    case 0x7F07A788u: goto label_7F07A788;
    case 0x7F07A78Cu: goto label_7F07A78C;
    case 0x7F07A790u: goto label_7F07A790;
    case 0x7F07A794u: goto label_7F07A794;
    case 0x7F07A798u: goto label_7F07A798;
    case 0x7F07A79Cu: goto label_7F07A79C;
    case 0x7F07A7A0u: goto label_7F07A7A0;
    case 0x7F07A7A4u: goto label_7F07A7A4;
    case 0x7F07A7A8u: goto label_7F07A7A8;
    case 0x7F07A7ACu: goto label_7F07A7AC;
    case 0x7F07A7B0u: goto label_7F07A7B0;
    case 0x7F07A7B4u: goto label_7F07A7B4;
    case 0x7F07A7B8u: goto label_7F07A7B8;
    case 0x7F07A7BCu: goto label_7F07A7BC;
    case 0x7F07A7C0u: goto label_7F07A7C0;
    case 0x7F07A7C4u: goto label_7F07A7C4;
    case 0x7F07A7C8u: goto label_7F07A7C8;
    case 0x7F07A7CCu: goto label_7F07A7CC;
    case 0x7F07A7D0u: goto label_7F07A7D0;
    case 0x7F07A7D4u: goto label_7F07A7D4;
    case 0x7F07A7D8u: goto label_7F07A7D8;
    case 0x7F07A7DCu: goto label_7F07A7DC;
    case 0x7F07A7E0u: goto label_7F07A7E0;
    case 0x7F07A7E4u: goto label_7F07A7E4;
    case 0x7F07A7E8u: goto label_7F07A7E8;
    case 0x7F07A7ECu: goto label_7F07A7EC;
    case 0x7F07A7F0u: goto label_7F07A7F0;
    case 0x7F07A7F4u: goto label_7F07A7F4;
    case 0x7F07A7F8u: goto label_7F07A7F8;
    case 0x7F07A7FCu: goto label_7F07A7FC;
    case 0x7F07A800u: goto label_7F07A800;
    case 0x7F07A804u: goto label_7F07A804;
    case 0x7F07A808u: goto label_7F07A808;
    case 0x7F07A80Cu: goto label_7F07A80C;
    case 0x7F07A810u: goto label_7F07A810;
    case 0x7F07A814u: goto label_7F07A814;
    case 0x7F07A818u: goto label_7F07A818;
    case 0x7F07A81Cu: goto label_7F07A81C;
    case 0x7F07A820u: goto label_7F07A820;
    case 0x7F07A824u: goto label_7F07A824;
    case 0x7F07A828u: goto label_7F07A828;
    case 0x7F07A82Cu: goto label_7F07A82C;
    case 0x7F07A830u: goto label_7F07A830;
    case 0x7F07A834u: goto label_7F07A834;
    case 0x7F07A838u: goto label_7F07A838;
    case 0x7F07A83Cu: goto label_7F07A83C;
    case 0x7F07A840u: goto label_7F07A840;
    case 0x7F07A844u: goto label_7F07A844;
    case 0x7F07A848u: goto label_7F07A848;
    case 0x7F07A84Cu: goto label_7F07A84C;
    case 0x7F07A850u: goto label_7F07A850;
    case 0x7F07A854u: goto label_7F07A854;
    case 0x7F07A858u: goto label_7F07A858;
    case 0x7F07A85Cu: goto label_7F07A85C;
    case 0x7F07A860u: goto label_7F07A860;
    case 0x7F07A864u: goto label_7F07A864;
    case 0x7F07A868u: goto label_7F07A868;
    case 0x7F07A86Cu: goto label_7F07A86C;
    case 0x7F07A870u: goto label_7F07A870;
    case 0x7F07A874u: goto label_7F07A874;
    case 0x7F07A878u: goto label_7F07A878;
    case 0x7F07A87Cu: goto label_7F07A87C;
    case 0x7F07A880u: goto label_7F07A880;
    case 0x7F07A884u: goto label_7F07A884;
    case 0x7F07A888u: goto label_7F07A888;
    case 0x7F07A88Cu: goto label_7F07A88C;
    case 0x7F07A890u: goto label_7F07A890;
    case 0x7F07A894u: goto label_7F07A894;
    case 0x7F07A898u: goto label_7F07A898;
    case 0x7F07A89Cu: goto label_7F07A89C;
    case 0x7F07A8A0u: goto label_7F07A8A0;
    case 0x7F07A8A4u: goto label_7F07A8A4;
    case 0x7F07A8A8u: goto label_7F07A8A8;
    case 0x7F07A8ACu: goto label_7F07A8AC;
    case 0x7F07A8B0u: goto label_7F07A8B0;
    case 0x7F07A8B4u: goto label_7F07A8B4;
    case 0x7F07A8B8u: goto label_7F07A8B8;
    case 0x7F07A8BCu: goto label_7F07A8BC;
    case 0x7F07A8C0u: goto label_7F07A8C0;
    case 0x7F07A8C4u: goto label_7F07A8C4;
    case 0x7F07A8C8u: goto label_7F07A8C8;
    case 0x7F07A8CCu: goto label_7F07A8CC;
    case 0x7F07A8D0u: goto label_7F07A8D0;
    case 0x7F07A8D4u: goto label_7F07A8D4;
    case 0x7F07A8D8u: goto label_7F07A8D8;
    case 0x7F07A8DCu: goto label_7F07A8DC;
    case 0x7F07A8E0u: goto label_7F07A8E0;
    case 0x7F07A8E4u: goto label_7F07A8E4;
    case 0x7F07A8E8u: goto label_7F07A8E8;
    case 0x7F07A8ECu: goto label_7F07A8EC;
    case 0x7F07A8F0u: goto label_7F07A8F0;
    case 0x7F07A8F4u: goto label_7F07A8F4;
    case 0x7F07A8F8u: goto label_7F07A8F8;
    case 0x7F07A8FCu: goto label_7F07A8FC;
    case 0x7F07A900u: goto label_7F07A900;
    case 0x7F07A904u: goto label_7F07A904;
    case 0x7F07A908u: goto label_7F07A908;
    case 0x7F07A90Cu: goto label_7F07A90C;
    case 0x7F07A910u: goto label_7F07A910;
    case 0x7F07A914u: goto label_7F07A914;
    case 0x7F07A918u: goto label_7F07A918;
    case 0x7F07A91Cu: goto label_7F07A91C;
    case 0x7F07A920u: goto label_7F07A920;
    case 0x7F07A924u: goto label_7F07A924;
    case 0x7F07A928u: goto label_7F07A928;
    case 0x7F07A92Cu: goto label_7F07A92C;
    case 0x7F07A930u: goto label_7F07A930;
    case 0x7F07A934u: goto label_7F07A934;
    case 0x7F07A938u: goto label_7F07A938;
    case 0x7F07A93Cu: goto label_7F07A93C;
    case 0x7F07A940u: goto label_7F07A940;
    case 0x7F07A944u: goto label_7F07A944;
    case 0x7F07A948u: goto label_7F07A948;
    case 0x7F07A94Cu: goto label_7F07A94C;
    case 0x7F07A950u: goto label_7F07A950;
    case 0x7F07A954u: goto label_7F07A954;
    case 0x7F07A958u: goto label_7F07A958;
    case 0x7F07A95Cu: goto label_7F07A95C;
    case 0x7F07A960u: goto label_7F07A960;
    case 0x7F07A964u: goto label_7F07A964;
    case 0x7F07A968u: goto label_7F07A968;
    case 0x7F07A96Cu: goto label_7F07A96C;
    case 0x7F07A970u: goto label_7F07A970;
    case 0x7F07A974u: goto label_7F07A974;
    case 0x7F07A978u: goto label_7F07A978;
    case 0x7F07A97Cu: goto label_7F07A97C;
    case 0x7F07A980u: goto label_7F07A980;
    case 0x7F07A984u: goto label_7F07A984;
    case 0x7F07A988u: goto label_7F07A988;
    case 0x7F07A98Cu: goto label_7F07A98C;
    case 0x7F07A990u: goto label_7F07A990;
    case 0x7F07A994u: goto label_7F07A994;
    case 0x7F07A998u: goto label_7F07A998;
    case 0x7F07A99Cu: goto label_7F07A99C;
    case 0x7F07A9A0u: goto label_7F07A9A0;
    case 0x7F07A9A4u: goto label_7F07A9A4;
    case 0x7F07A9A8u: goto label_7F07A9A8;
    case 0x7F07A9ACu: goto label_7F07A9AC;
    case 0x7F07A9B0u: goto label_7F07A9B0;
    case 0x7F07A9B4u: goto label_7F07A9B4;
    case 0x7F07A9B8u: goto label_7F07A9B8;
    case 0x7F07A9BCu: goto label_7F07A9BC;
    case 0x7F07A9C0u: goto label_7F07A9C0;
    case 0x7F07A9C4u: goto label_7F07A9C4;
    case 0x7F07A9C8u: goto label_7F07A9C8;
    case 0x7F07A9CCu: goto label_7F07A9CC;
    case 0x7F07A9D0u: goto label_7F07A9D0;
    case 0x7F07A9D4u: goto label_7F07A9D4;
    case 0x7F07A9D8u: goto label_7F07A9D8;
    case 0x7F07A9DCu: goto label_7F07A9DC;
    case 0x7F07A9E0u: goto label_7F07A9E0;
    case 0x7F07A9E4u: goto label_7F07A9E4;
    case 0x7F07A9E8u: goto label_7F07A9E8;
    case 0x7F07A9ECu: goto label_7F07A9EC;
    case 0x7F07A9F0u: goto label_7F07A9F0;
    case 0x7F07A9F4u: goto label_7F07A9F4;
    case 0x7F07A9F8u: goto label_7F07A9F8;
    case 0x7F07A9FCu: goto label_7F07A9FC;
    case 0x7F07AA00u: goto label_7F07AA00;
    case 0x7F07AA04u: goto label_7F07AA04;
    case 0x7F07AA08u: goto label_7F07AA08;
    case 0x7F07AA0Cu: goto label_7F07AA0C;
    case 0x7F07AA10u: goto label_7F07AA10;
    case 0x7F07AA14u: goto label_7F07AA14;
    case 0x7F07AA18u: goto label_7F07AA18;
    case 0x7F07AA1Cu: goto label_7F07AA1C;
    case 0x7F07AA20u: goto label_7F07AA20;
    case 0x7F07AA24u: goto label_7F07AA24;
    case 0x7F07AA28u: goto label_7F07AA28;
    case 0x7F07AA2Cu: goto label_7F07AA2C;
    case 0x7F07AA30u: goto label_7F07AA30;
    case 0x7F07AA34u: goto label_7F07AA34;
    case 0x7F07AA38u: goto label_7F07AA38;
    case 0x7F07AA3Cu: goto label_7F07AA3C;
    case 0x7F07AA40u: goto label_7F07AA40;
    case 0x7F07AA44u: goto label_7F07AA44;
    case 0x7F07AA48u: goto label_7F07AA48;
    case 0x7F07AA4Cu: goto label_7F07AA4C;
    case 0x7F07AA50u: goto label_7F07AA50;
    case 0x7F07AA54u: goto label_7F07AA54;
    case 0x7F07AA58u: goto label_7F07AA58;
    case 0x7F07AA5Cu: goto label_7F07AA5C;
    case 0x7F07AA60u: goto label_7F07AA60;
    case 0x7F07AA64u: goto label_7F07AA64;
    case 0x7F07AA68u: goto label_7F07AA68;
    case 0x7F07AA6Cu: goto label_7F07AA6C;
    case 0x7F07AA70u: goto label_7F07AA70;
    case 0x7F07AA74u: goto label_7F07AA74;
    case 0x7F07AA78u: goto label_7F07AA78;
    case 0x7F07AA7Cu: goto label_7F07AA7C;
    case 0x7F07AA80u: goto label_7F07AA80;
    case 0x7F07AA84u: goto label_7F07AA84;
    case 0x7F07AA88u: goto label_7F07AA88;
    case 0x7F07AA8Cu: goto label_7F07AA8C;
    case 0x7F07AA90u: goto label_7F07AA90;
    case 0x7F07AA94u: goto label_7F07AA94;
    case 0x7F07AA98u: goto label_7F07AA98;
    case 0x7F07AA9Cu: goto label_7F07AA9C;
    case 0x7F07AAA0u: goto label_7F07AAA0;
    case 0x7F07AAA4u: goto label_7F07AAA4;
    case 0x7F07AAA8u: goto label_7F07AAA8;
    case 0x7F07AAACu: goto label_7F07AAAC;
    case 0x7F07AAB0u: goto label_7F07AAB0;
    case 0x7F07AAB4u: goto label_7F07AAB4;
    case 0x7F07AAB8u: goto label_7F07AAB8;
    case 0x7F07AABCu: goto label_7F07AABC;
    case 0x7F07AAC0u: goto label_7F07AAC0;
    case 0x7F07AAC4u: goto label_7F07AAC4;
    case 0x7F07AAC8u: goto label_7F07AAC8;
    case 0x7F07AACCu: goto label_7F07AACC;
    case 0x7F07AAD0u: goto label_7F07AAD0;
    case 0x7F07AAD4u: goto label_7F07AAD4;
    case 0x7F07AAD8u: goto label_7F07AAD8;
    case 0x7F07AADCu: goto label_7F07AADC;
    case 0x7F07AAE0u: goto label_7F07AAE0;
    case 0x7F07AAE4u: goto label_7F07AAE4;
    case 0x7F07AAE8u: goto label_7F07AAE8;
    case 0x7F07AAECu: goto label_7F07AAEC;
    case 0x7F07AAF0u: goto label_7F07AAF0;
    case 0x7F07AAF4u: goto label_7F07AAF4;
    case 0x7F07AAF8u: goto label_7F07AAF8;
    case 0x7F07AAFCu: goto label_7F07AAFC;
    case 0x7F07AB00u: goto label_7F07AB00;
    case 0x7F07AB04u: goto label_7F07AB04;
    case 0x7F07AB08u: goto label_7F07AB08;
    case 0x7F07AB0Cu: goto label_7F07AB0C;
    case 0x7F07AB10u: goto label_7F07AB10;
    case 0x7F07AB14u: goto label_7F07AB14;
    case 0x7F07AB18u: goto label_7F07AB18;
    case 0x7F07AB1Cu: goto label_7F07AB1C;
    case 0x7F07AB20u: goto label_7F07AB20;
    case 0x7F07AB24u: goto label_7F07AB24;
    case 0x7F07AB28u: goto label_7F07AB28;
    case 0x7F07AB2Cu: goto label_7F07AB2C;
    case 0x7F07AB30u: goto label_7F07AB30;
    case 0x7F07AB34u: goto label_7F07AB34;
    case 0x7F07AB38u: goto label_7F07AB38;
    case 0x7F07AB3Cu: goto label_7F07AB3C;
    case 0x7F07AB40u: goto label_7F07AB40;
    case 0x7F07AB44u: goto label_7F07AB44;
    case 0x7F07AB48u: goto label_7F07AB48;
    case 0x7F07AB4Cu: goto label_7F07AB4C;
    case 0x7F07AB50u: goto label_7F07AB50;
    case 0x7F07AB54u: goto label_7F07AB54;
    case 0x7F07AB58u: goto label_7F07AB58;
    case 0x7F07AB5Cu: goto label_7F07AB5C;
    case 0x7F07AB60u: goto label_7F07AB60;
    case 0x7F07AB64u: goto label_7F07AB64;
    case 0x7F07AB68u: goto label_7F07AB68;
    case 0x7F07AB6Cu: goto label_7F07AB6C;
    case 0x7F07AB70u: goto label_7F07AB70;
    case 0x7F07AB74u: goto label_7F07AB74;
    case 0x7F07AB78u: goto label_7F07AB78;
    case 0x7F07AB7Cu: goto label_7F07AB7C;
    case 0x7F07AB80u: goto label_7F07AB80;
    case 0x7F07AB84u: goto label_7F07AB84;
    case 0x7F07AB88u: goto label_7F07AB88;
    case 0x7F07AB8Cu: goto label_7F07AB8C;
    case 0x7F07AB90u: goto label_7F07AB90;
    case 0x7F07AB94u: goto label_7F07AB94;
    case 0x7F07AB98u: goto label_7F07AB98;
    case 0x7F07AB9Cu: goto label_7F07AB9C;
    case 0x7F07ABA0u: goto label_7F07ABA0;
    case 0x7F07ABA4u: goto label_7F07ABA4;
    case 0x7F07ABA8u: goto label_7F07ABA8;
    case 0x7F07ABACu: goto label_7F07ABAC;
    case 0x7F07ABB0u: goto label_7F07ABB0;
    case 0x7F07ABB4u: goto label_7F07ABB4;
    case 0x7F07ABB8u: goto label_7F07ABB8;
    case 0x7F07ABBCu: goto label_7F07ABBC;
    case 0x7F07ABC0u: goto label_7F07ABC0;
    case 0x7F07ABC4u: goto label_7F07ABC4;
    case 0x7F07ABC8u: goto label_7F07ABC8;
    case 0x7F07ABCCu: goto label_7F07ABCC;
    case 0x7F07ABD0u: goto label_7F07ABD0;
    case 0x7F07ABD4u: goto label_7F07ABD4;
    case 0x7F07ABD8u: goto label_7F07ABD8;
    case 0x7F07ABDCu: goto label_7F07ABDC;
    case 0x7F07ABE0u: goto label_7F07ABE0;
    case 0x7F07ABE4u: goto label_7F07ABE4;
    case 0x7F07ABE8u: goto label_7F07ABE8;
    case 0x7F07ABECu: goto label_7F07ABEC;
    case 0x7F07ABF0u: goto label_7F07ABF0;
    case 0x7F07ABF4u: goto label_7F07ABF4;
    case 0x7F07ABF8u: goto label_7F07ABF8;
    case 0x7F07ABFCu: goto label_7F07ABFC;
    case 0x7F07AC00u: goto label_7F07AC00;
    case 0x7F07AC04u: goto label_7F07AC04;
    case 0x7F07AC08u: goto label_7F07AC08;
    case 0x7F07AC0Cu: goto label_7F07AC0C;
    case 0x7F07AC10u: goto label_7F07AC10;
    case 0x7F07AC14u: goto label_7F07AC14;
    case 0x7F07AC18u: goto label_7F07AC18;
    case 0x7F07AC1Cu: goto label_7F07AC1C;
    case 0x7F07AC20u: goto label_7F07AC20;
    case 0x7F07AC24u: goto label_7F07AC24;
    case 0x7F07AC28u: goto label_7F07AC28;
    case 0x7F07AC2Cu: goto label_7F07AC2C;
    case 0x7F07AC30u: goto label_7F07AC30;
    case 0x7F07AC34u: goto label_7F07AC34;
    case 0x7F07AC38u: goto label_7F07AC38;
    case 0x7F07AC3Cu: goto label_7F07AC3C;
    case 0x7F07AC40u: goto label_7F07AC40;
    case 0x7F07AC44u: goto label_7F07AC44;
    case 0x7F07AC48u: goto label_7F07AC48;
    case 0x7F07AC4Cu: goto label_7F07AC4C;
    case 0x7F07AC50u: goto label_7F07AC50;
    case 0x7F07AC54u: goto label_7F07AC54;
    case 0x7F07AC58u: goto label_7F07AC58;
    case 0x7F07AC5Cu: goto label_7F07AC5C;
    case 0x7F07AC60u: goto label_7F07AC60;
    case 0x7F07AC64u: goto label_7F07AC64;
    case 0x7F07AC68u: goto label_7F07AC68;
    case 0x7F07AC6Cu: goto label_7F07AC6C;
    case 0x7F07AC70u: goto label_7F07AC70;
    case 0x7F07AC74u: goto label_7F07AC74;
    case 0x7F07AC78u: goto label_7F07AC78;
    case 0x7F07AC7Cu: goto label_7F07AC7C;
    case 0x7F07AC80u: goto label_7F07AC80;
    case 0x7F07AC84u: goto label_7F07AC84;
    case 0x7F07AC88u: goto label_7F07AC88;
    case 0x7F07AC8Cu: goto label_7F07AC8C;
    case 0x7F07AC90u: goto label_7F07AC90;
    case 0x7F07AC94u: goto label_7F07AC94;
    case 0x7F07AC98u: goto label_7F07AC98;
    case 0x7F07AC9Cu: goto label_7F07AC9C;
    case 0x7F07ACA0u: goto label_7F07ACA0;
    case 0x7F07ACA4u: goto label_7F07ACA4;
    case 0x7F07ACA8u: goto label_7F07ACA8;
    case 0x7F07ACACu: goto label_7F07ACAC;
    case 0x7F07ACB0u: goto label_7F07ACB0;
    case 0x7F07ACB4u: goto label_7F07ACB4;
    case 0x7F07ACB8u: goto label_7F07ACB8;
    case 0x7F07ACBCu: goto label_7F07ACBC;
    case 0x7F07ACC0u: goto label_7F07ACC0;
    case 0x7F07ACC4u: goto label_7F07ACC4;
    case 0x7F07ACC8u: goto label_7F07ACC8;
    case 0x7F07ACCCu: goto label_7F07ACCC;
    case 0x7F07ACD0u: goto label_7F07ACD0;
    case 0x7F07ACD4u: goto label_7F07ACD4;
    case 0x7F07ACD8u: goto label_7F07ACD8;
    case 0x7F07ACDCu: goto label_7F07ACDC;
    case 0x7F07ACE0u: goto label_7F07ACE0;
    case 0x7F07ACE4u: goto label_7F07ACE4;
    case 0x7F07ACE8u: goto label_7F07ACE8;
    case 0x7F07ACECu: goto label_7F07ACEC;
    case 0x7F07ACF0u: goto label_7F07ACF0;
    case 0x7F07ACF4u: goto label_7F07ACF4;
    case 0x7F07ACF8u: goto label_7F07ACF8;
    case 0x7F07ACFCu: goto label_7F07ACFC;
    case 0x7F07AD00u: goto label_7F07AD00;
    case 0x7F07AD04u: goto label_7F07AD04;
    case 0x7F07AD08u: goto label_7F07AD08;
    case 0x7F07AD0Cu: goto label_7F07AD0C;
    case 0x7F07AD10u: goto label_7F07AD10;
    case 0x7F07AD14u: goto label_7F07AD14;
    case 0x7F07AD18u: goto label_7F07AD18;
    case 0x7F07AD1Cu: goto label_7F07AD1C;
    case 0x7F07AD20u: goto label_7F07AD20;
    case 0x7F07AD24u: goto label_7F07AD24;
    case 0x7F07AD28u: goto label_7F07AD28;
    case 0x7F07AD2Cu: goto label_7F07AD2C;
    case 0x7F07AD30u: goto label_7F07AD30;
    case 0x7F07AD34u: goto label_7F07AD34;
    case 0x7F07AD38u: goto label_7F07AD38;
    case 0x7F07AD3Cu: goto label_7F07AD3C;
    case 0x7F07AD40u: goto label_7F07AD40;
    case 0x7F07AD44u: goto label_7F07AD44;
    case 0x7F07AD48u: goto label_7F07AD48;
    case 0x7F07AD4Cu: goto label_7F07AD4C;
    case 0x7F07AD50u: goto label_7F07AD50;
    case 0x7F07AD54u: goto label_7F07AD54;
    case 0x7F07AD58u: goto label_7F07AD58;
    case 0x7F07AD5Cu: goto label_7F07AD5C;
    case 0x7F07AD60u: goto label_7F07AD60;
    case 0x7F07AD64u: goto label_7F07AD64;
    case 0x7F07AD68u: goto label_7F07AD68;
    case 0x7F07AD6Cu: goto label_7F07AD6C;
    case 0x7F07AD70u: goto label_7F07AD70;
    case 0x7F07AD74u: goto label_7F07AD74;
    case 0x7F07AD78u: goto label_7F07AD78;
    case 0x7F07AD7Cu: goto label_7F07AD7C;
    case 0x7F07AD80u: goto label_7F07AD80;
    case 0x7F07AD84u: goto label_7F07AD84;
    case 0x7F07AD88u: goto label_7F07AD88;
    case 0x7F07AD8Cu: goto label_7F07AD8C;
    case 0x7F07AD90u: goto label_7F07AD90;
    case 0x7F07AD94u: goto label_7F07AD94;
    case 0x7F07AD98u: goto label_7F07AD98;
    case 0x7F07AD9Cu: goto label_7F07AD9C;
    case 0x7F07ADA0u: goto label_7F07ADA0;
    case 0x7F07ADA4u: goto label_7F07ADA4;
    case 0x7F07ADA8u: goto label_7F07ADA8;
    case 0x7F07ADACu: goto label_7F07ADAC;
    case 0x7F07ADB0u: goto label_7F07ADB0;
    case 0x7F07ADB4u: goto label_7F07ADB4;
    case 0x7F07ADB8u: goto label_7F07ADB8;
    case 0x7F07ADBCu: goto label_7F07ADBC;
    case 0x7F07ADC0u: goto label_7F07ADC0;
    case 0x7F07ADC4u: goto label_7F07ADC4;
    case 0x7F07ADC8u: goto label_7F07ADC8;
    case 0x7F07ADCCu: goto label_7F07ADCC;
    case 0x7F07ADD0u: goto label_7F07ADD0;
    case 0x7F07ADD4u: goto label_7F07ADD4;
    case 0x7F07ADD8u: goto label_7F07ADD8;
    case 0x7F07ADDCu: goto label_7F07ADDC;
    case 0x7F07ADE0u: goto label_7F07ADE0;
    case 0x7F07ADE4u: goto label_7F07ADE4;
    case 0x7F07ADE8u: goto label_7F07ADE8;
    case 0x7F07ADECu: goto label_7F07ADEC;
    case 0x7F07ADF0u: goto label_7F07ADF0;
    case 0x7F07ADF4u: goto label_7F07ADF4;
    case 0x7F07ADF8u: goto label_7F07ADF8;
    case 0x7F07ADFCu: goto label_7F07ADFC;
    case 0x7F07AE00u: goto label_7F07AE00;
    case 0x7F07AE04u: goto label_7F07AE04;
    case 0x7F07AE08u: goto label_7F07AE08;
    case 0x7F07AE0Cu: goto label_7F07AE0C;
    case 0x7F07AE10u: goto label_7F07AE10;
    case 0x7F07AE14u: goto label_7F07AE14;
    case 0x7F07AE18u: goto label_7F07AE18;
    case 0x7F07AE1Cu: goto label_7F07AE1C;
    case 0x7F07AE20u: goto label_7F07AE20;
    case 0x7F07AE24u: goto label_7F07AE24;
    case 0x7F07AE28u: goto label_7F07AE28;
    case 0x7F07AE2Cu: goto label_7F07AE2C;
    case 0x7F07AE30u: goto label_7F07AE30;
    case 0x7F07AE34u: goto label_7F07AE34;
    case 0x7F07AE38u: goto label_7F07AE38;
    case 0x7F07AE3Cu: goto label_7F07AE3C;
    case 0x7F07AE40u: goto label_7F07AE40;
    case 0x7F07AE44u: goto label_7F07AE44;
    case 0x7F07AE48u: goto label_7F07AE48;
    case 0x7F07AE4Cu: goto label_7F07AE4C;
    case 0x7F07AE50u: goto label_7F07AE50;
    case 0x7F07AE54u: goto label_7F07AE54;
    case 0x7F07AE58u: goto label_7F07AE58;
    case 0x7F07AE5Cu: goto label_7F07AE5C;
    case 0x7F07AE60u: goto label_7F07AE60;
    case 0x7F07AE64u: goto label_7F07AE64;
    case 0x7F07AE68u: goto label_7F07AE68;
    case 0x7F07AE6Cu: goto label_7F07AE6C;
    case 0x7F07AE70u: goto label_7F07AE70;
    case 0x7F07AE74u: goto label_7F07AE74;
    case 0x7F07AE78u: goto label_7F07AE78;
    case 0x7F07AE7Cu: goto label_7F07AE7C;
    case 0x7F07AE80u: goto label_7F07AE80;
    case 0x7F07AE84u: goto label_7F07AE84;
    case 0x7F07AE88u: goto label_7F07AE88;
    case 0x7F07AE8Cu: goto label_7F07AE8C;
    case 0x7F07AE90u: goto label_7F07AE90;
    case 0x7F07AE94u: goto label_7F07AE94;
    case 0x7F07AE98u: goto label_7F07AE98;
    case 0x7F07AE9Cu: goto label_7F07AE9C;
    case 0x7F07AEA0u: goto label_7F07AEA0;
    case 0x7F07AEA4u: goto label_7F07AEA4;
    case 0x7F07AEA8u: goto label_7F07AEA8;
    case 0x7F07AEACu: goto label_7F07AEAC;
    case 0x7F07AEB0u: goto label_7F07AEB0;
    case 0x7F07AEB4u: goto label_7F07AEB4;
    case 0x7F07AEB8u: goto label_7F07AEB8;
    case 0x7F07AEBCu: goto label_7F07AEBC;
    case 0x7F07AEC0u: goto label_7F07AEC0;
    case 0x7F07AEC4u: goto label_7F07AEC4;
    case 0x7F07AEC8u: goto label_7F07AEC8;
    case 0x7F07AECCu: goto label_7F07AECC;
    case 0x7F07AED0u: goto label_7F07AED0;
    case 0x7F07AED4u: goto label_7F07AED4;
    case 0x7F07AED8u: goto label_7F07AED8;
    case 0x7F07AEDCu: goto label_7F07AEDC;
    case 0x7F07AEE0u: goto label_7F07AEE0;
    case 0x7F07AEE4u: goto label_7F07AEE4;
    case 0x7F07AEE8u: goto label_7F07AEE8;
    case 0x7F07AEECu: goto label_7F07AEEC;
    case 0x7F07AEF0u: goto label_7F07AEF0;
    case 0x7F07AEF4u: goto label_7F07AEF4;
    case 0x7F07AEF8u: goto label_7F07AEF8;
    case 0x7F07AEFCu: goto label_7F07AEFC;
    case 0x7F07AF00u: goto label_7F07AF00;
    case 0x7F07AF04u: goto label_7F07AF04;
    case 0x7F07AF08u: goto label_7F07AF08;
    case 0x7F07AF0Cu: goto label_7F07AF0C;
    case 0x7F07AF10u: goto label_7F07AF10;
    case 0x7F07AF14u: goto label_7F07AF14;
    case 0x7F07AF18u: goto label_7F07AF18;
    case 0x7F07AF1Cu: goto label_7F07AF1C;
    case 0x7F07AF20u: goto label_7F07AF20;
    case 0x7F07AF24u: goto label_7F07AF24;
    case 0x7F07AF28u: goto label_7F07AF28;
    case 0x7F07AF2Cu: goto label_7F07AF2C;
    case 0x7F07AF30u: goto label_7F07AF30;
    case 0x7F07AF34u: goto label_7F07AF34;
    case 0x7F07AF38u: goto label_7F07AF38;
    case 0x7F07AF3Cu: goto label_7F07AF3C;
    case 0x7F07AF40u: goto label_7F07AF40;
    case 0x7F07AF44u: goto label_7F07AF44;
    case 0x7F07AF48u: goto label_7F07AF48;
    case 0x7F07AF4Cu: goto label_7F07AF4C;
    case 0x7F07AF50u: goto label_7F07AF50;
    case 0x7F07AF54u: goto label_7F07AF54;
    case 0x7F07AF58u: goto label_7F07AF58;
    case 0x7F07AF5Cu: goto label_7F07AF5C;
    case 0x7F07AF60u: goto label_7F07AF60;
    case 0x7F07AF64u: goto label_7F07AF64;
    case 0x7F07AF68u: goto label_7F07AF68;
    case 0x7F07AF6Cu: goto label_7F07AF6C;
    case 0x7F07AF70u: goto label_7F07AF70;
    case 0x7F07AF74u: goto label_7F07AF74;
    case 0x7F07AF78u: goto label_7F07AF78;
    case 0x7F07AF7Cu: goto label_7F07AF7C;
    case 0x7F07AF80u: goto label_7F07AF80;
    case 0x7F07AF84u: goto label_7F07AF84;
    case 0x7F07AF88u: goto label_7F07AF88;
    case 0x7F07AF8Cu: goto label_7F07AF8C;
    case 0x7F07AF90u: goto label_7F07AF90;
    case 0x7F07AF94u: goto label_7F07AF94;
    case 0x7F07AF98u: goto label_7F07AF98;
    case 0x7F07AF9Cu: goto label_7F07AF9C;
    case 0x7F07AFA0u: goto label_7F07AFA0;
    case 0x7F07AFA4u: goto label_7F07AFA4;
    case 0x7F07AFA8u: goto label_7F07AFA8;
    case 0x7F07AFACu: goto label_7F07AFAC;
    case 0x7F07AFB0u: goto label_7F07AFB0;
    case 0x7F07AFB4u: goto label_7F07AFB4;
    case 0x7F07AFB8u: goto label_7F07AFB8;
    case 0x7F07AFBCu: goto label_7F07AFBC;
    case 0x7F07AFC0u: goto label_7F07AFC0;
    case 0x7F07AFC4u: goto label_7F07AFC4;
    case 0x7F07AFC8u: goto label_7F07AFC8;
    case 0x7F07AFCCu: goto label_7F07AFCC;
    case 0x7F07AFD0u: goto label_7F07AFD0;
    case 0x7F07AFD4u: goto label_7F07AFD4;
    case 0x7F07AFD8u: goto label_7F07AFD8;
    case 0x7F07AFDCu: goto label_7F07AFDC;
    case 0x7F07AFE0u: goto label_7F07AFE0;
    case 0x7F07AFE4u: goto label_7F07AFE4;
    case 0x7F07AFE8u: goto label_7F07AFE8;
    case 0x7F07AFECu: goto label_7F07AFEC;
    case 0x7F07AFF0u: goto label_7F07AFF0;
    case 0x7F07AFF4u: goto label_7F07AFF4;
    case 0x7F07AFF8u: goto label_7F07AFF8;
    case 0x7F07AFFCu: goto label_7F07AFFC;
    case 0x7F07B000u: goto label_7F07B000;
    case 0x7F07B004u: goto label_7F07B004;
    case 0x7F07B008u: goto label_7F07B008;
    case 0x7F07B00Cu: goto label_7F07B00C;
    case 0x7F07B010u: goto label_7F07B010;
    case 0x7F07B014u: goto label_7F07B014;
    case 0x7F07B018u: goto label_7F07B018;
    case 0x7F07B01Cu: goto label_7F07B01C;
    case 0x7F07B020u: goto label_7F07B020;
    case 0x7F07B024u: goto label_7F07B024;
    case 0x7F07B028u: goto label_7F07B028;
    case 0x7F07B02Cu: goto label_7F07B02C;
    case 0x7F07B030u: goto label_7F07B030;
    case 0x7F07B034u: goto label_7F07B034;
    case 0x7F07B038u: goto label_7F07B038;
    case 0x7F07B03Cu: goto label_7F07B03C;
    case 0x7F07B040u: goto label_7F07B040;
    case 0x7F07B044u: goto label_7F07B044;
    case 0x7F07B048u: goto label_7F07B048;
    case 0x7F07B04Cu: goto label_7F07B04C;
    case 0x7F07B050u: goto label_7F07B050;
    case 0x7F07B054u: goto label_7F07B054;
    case 0x7F07B058u: goto label_7F07B058;
    case 0x7F07B05Cu: goto label_7F07B05C;
    case 0x7F07B060u: goto label_7F07B060;
    case 0x7F07B064u: goto label_7F07B064;
    case 0x7F07B068u: goto label_7F07B068;
    case 0x7F07B06Cu: goto label_7F07B06C;
    case 0x7F07B070u: goto label_7F07B070;
    case 0x7F07B074u: goto label_7F07B074;
    case 0x7F07B078u: goto label_7F07B078;
    case 0x7F07B07Cu: goto label_7F07B07C;
    case 0x7F07B080u: goto label_7F07B080;
    case 0x7F07B084u: goto label_7F07B084;
    case 0x7F07B088u: goto label_7F07B088;
    case 0x7F07B08Cu: goto label_7F07B08C;
    case 0x7F07B090u: goto label_7F07B090;
    case 0x7F07B094u: goto label_7F07B094;
    case 0x7F07B098u: goto label_7F07B098;
    case 0x7F07B09Cu: goto label_7F07B09C;
    case 0x7F07B0A0u: goto label_7F07B0A0;
    case 0x7F07B0A4u: goto label_7F07B0A4;
    case 0x7F07B0A8u: goto label_7F07B0A8;
    case 0x7F07B0ACu: goto label_7F07B0AC;
    case 0x7F07B0B0u: goto label_7F07B0B0;
    case 0x7F07B0B4u: goto label_7F07B0B4;
    case 0x7F07B0B8u: goto label_7F07B0B8;
    case 0x7F07B0BCu: goto label_7F07B0BC;
    case 0x7F07B0C0u: goto label_7F07B0C0;
    case 0x7F07B0C4u: goto label_7F07B0C4;
    case 0x7F07B0C8u: goto label_7F07B0C8;
    case 0x7F07B0CCu: goto label_7F07B0CC;
    case 0x7F07B0D0u: goto label_7F07B0D0;
    case 0x7F07B0D4u: goto label_7F07B0D4;
    case 0x7F07B0D8u: goto label_7F07B0D8;
    case 0x7F07B0DCu: goto label_7F07B0DC;
    case 0x7F07B0E0u: goto label_7F07B0E0;
    case 0x7F07B0E4u: goto label_7F07B0E4;
    case 0x7F07B0E8u: goto label_7F07B0E8;
    case 0x7F07B0ECu: goto label_7F07B0EC;
    case 0x7F07B0F0u: goto label_7F07B0F0;
    case 0x7F07B0F4u: goto label_7F07B0F4;
    case 0x7F07B0F8u: goto label_7F07B0F8;
    case 0x7F07B0FCu: goto label_7F07B0FC;
    case 0x7F07B100u: goto label_7F07B100;
    case 0x7F07B104u: goto label_7F07B104;
    case 0x7F07B108u: goto label_7F07B108;
    case 0x7F07B10Cu: goto label_7F07B10C;
    case 0x7F07B110u: goto label_7F07B110;
    case 0x7F07B114u: goto label_7F07B114;
    case 0x7F07B118u: goto label_7F07B118;
    case 0x7F07B11Cu: goto label_7F07B11C;
    case 0x7F07B120u: goto label_7F07B120;
    case 0x7F07B124u: goto label_7F07B124;
    case 0x7F07B128u: goto label_7F07B128;
    case 0x7F07B12Cu: goto label_7F07B12C;
    case 0x7F07B130u: goto label_7F07B130;
    case 0x7F07B134u: goto label_7F07B134;
    case 0x7F07B138u: goto label_7F07B138;
    case 0x7F07B13Cu: goto label_7F07B13C;
    case 0x7F07B140u: goto label_7F07B140;
    case 0x7F07B144u: goto label_7F07B144;
    case 0x7F07B148u: goto label_7F07B148;
    case 0x7F07B14Cu: goto label_7F07B14C;
    case 0x7F07B150u: goto label_7F07B150;
    case 0x7F07B154u: goto label_7F07B154;
    case 0x7F07B158u: goto label_7F07B158;
    case 0x7F07B15Cu: goto label_7F07B15C;
    case 0x7F07B160u: goto label_7F07B160;
    case 0x7F07B164u: goto label_7F07B164;
    case 0x7F07B168u: goto label_7F07B168;
    case 0x7F07B16Cu: goto label_7F07B16C;
    case 0x7F07B170u: goto label_7F07B170;
    case 0x7F07B174u: goto label_7F07B174;
    case 0x7F07B178u: goto label_7F07B178;
    case 0x7F07B17Cu: goto label_7F07B17C;
    case 0x7F07B180u: goto label_7F07B180;
    case 0x7F07B184u: goto label_7F07B184;
    case 0x7F07B188u: goto label_7F07B188;
    case 0x7F07B18Cu: goto label_7F07B18C;
    case 0x7F07B190u: goto label_7F07B190;
    case 0x7F07B194u: goto label_7F07B194;
    case 0x7F07B198u: goto label_7F07B198;
    case 0x7F07B19Cu: goto label_7F07B19C;
    case 0x7F07B1A0u: goto label_7F07B1A0;
    case 0x7F07B1A4u: goto label_7F07B1A4;
    case 0x7F07B1A8u: goto label_7F07B1A8;
    case 0x7F07B1ACu: goto label_7F07B1AC;
    case 0x7F07B1B0u: goto label_7F07B1B0;
    case 0x7F07B1B4u: goto label_7F07B1B4;
    case 0x7F07B1B8u: goto label_7F07B1B8;
    case 0x7F07B1BCu: goto label_7F07B1BC;
    case 0x7F07B1C0u: goto label_7F07B1C0;
    case 0x7F07B1C4u: goto label_7F07B1C4;
    case 0x7F07B1C8u: goto label_7F07B1C8;
    case 0x7F07B1CCu: goto label_7F07B1CC;
    case 0x7F07B1D0u: goto label_7F07B1D0;
    case 0x7F07B1D4u: goto label_7F07B1D4;
    case 0x7F07B1D8u: goto label_7F07B1D8;
    case 0x7F07B1DCu: goto label_7F07B1DC;
    case 0x7F07B1E0u: goto label_7F07B1E0;
    case 0x7F07B1E4u: goto label_7F07B1E4;
    case 0x7F07B1E8u: goto label_7F07B1E8;
    case 0x7F07B1ECu: goto label_7F07B1EC;
    case 0x7F07B1F0u: goto label_7F07B1F0;
    case 0x7F07B1F4u: goto label_7F07B1F4;
    case 0x7F07B1F8u: goto label_7F07B1F8;
    case 0x7F07B1FCu: goto label_7F07B1FC;
    case 0x7F07B200u: goto label_7F07B200;
    case 0x7F07B204u: goto label_7F07B204;
    case 0x7F07B208u: goto label_7F07B208;
    case 0x7F07B20Cu: goto label_7F07B20C;
    case 0x7F07B210u: goto label_7F07B210;
    case 0x7F07B214u: goto label_7F07B214;
    case 0x7F07B218u: goto label_7F07B218;
    case 0x7F07B21Cu: goto label_7F07B21C;
    case 0x7F07B220u: goto label_7F07B220;
    case 0x7F07B224u: goto label_7F07B224;
    case 0x7F07B228u: goto label_7F07B228;
    case 0x7F07B22Cu: goto label_7F07B22C;
    case 0x7F07B230u: goto label_7F07B230;
    case 0x7F07B234u: goto label_7F07B234;
    case 0x7F07B238u: goto label_7F07B238;
    case 0x7F07B23Cu: goto label_7F07B23C;
    case 0x7F07B240u: goto label_7F07B240;
    case 0x7F07B244u: goto label_7F07B244;
    case 0x7F07B248u: goto label_7F07B248;
    case 0x7F07B24Cu: goto label_7F07B24C;
    case 0x7F07B250u: goto label_7F07B250;
    case 0x7F07B254u: goto label_7F07B254;
    case 0x7F07B258u: goto label_7F07B258;
    case 0x7F07B25Cu: goto label_7F07B25C;
    case 0x7F07B260u: goto label_7F07B260;
    case 0x7F07B264u: goto label_7F07B264;
    case 0x7F07B268u: goto label_7F07B268;
    case 0x7F07B26Cu: goto label_7F07B26C;
    case 0x7F07B270u: goto label_7F07B270;
    case 0x7F07B274u: goto label_7F07B274;
    case 0x7F07B278u: goto label_7F07B278;
    case 0x7F07B27Cu: goto label_7F07B27C;
    case 0x7F07B280u: goto label_7F07B280;
    case 0x7F07B284u: goto label_7F07B284;
    case 0x7F07B288u: goto label_7F07B288;
    case 0x7F07B28Cu: goto label_7F07B28C;
    case 0x7F07B290u: goto label_7F07B290;
    case 0x7F07B294u: goto label_7F07B294;
    case 0x7F07B298u: goto label_7F07B298;
    case 0x7F07B29Cu: goto label_7F07B29C;
    case 0x7F07B2A0u: goto label_7F07B2A0;
    case 0x7F07B2A4u: goto label_7F07B2A4;
    case 0x7F07B2A8u: goto label_7F07B2A8;
    case 0x7F07B2ACu: goto label_7F07B2AC;
    case 0x7F07B2B0u: goto label_7F07B2B0;
    case 0x7F07B2B4u: goto label_7F07B2B4;
    case 0x7F07B2B8u: goto label_7F07B2B8;
    case 0x7F07B2BCu: goto label_7F07B2BC;
    case 0x7F07B2C0u: goto label_7F07B2C0;
    case 0x7F07B2C4u: goto label_7F07B2C4;
    case 0x7F07B2C8u: goto label_7F07B2C8;
    case 0x7F07B2CCu: goto label_7F07B2CC;
    case 0x7F07B2D0u: goto label_7F07B2D0;
    case 0x7F07B2D4u: goto label_7F07B2D4;
    case 0x7F07B2D8u: goto label_7F07B2D8;
    case 0x7F07B2DCu: goto label_7F07B2DC;
    case 0x7F07B2E0u: goto label_7F07B2E0;
    case 0x7F07B2E4u: goto label_7F07B2E4;
    case 0x7F07B2E8u: goto label_7F07B2E8;
    case 0x7F07B2ECu: goto label_7F07B2EC;
    case 0x7F07B2F0u: goto label_7F07B2F0;
    case 0x7F07B2F4u: goto label_7F07B2F4;
    case 0x7F07B2F8u: goto label_7F07B2F8;
    case 0x7F07B2FCu: goto label_7F07B2FC;
    case 0x7F07B300u: goto label_7F07B300;
    case 0x7F07B304u: goto label_7F07B304;
    case 0x7F07B308u: goto label_7F07B308;
    case 0x7F07B30Cu: goto label_7F07B30C;
    case 0x7F07B310u: goto label_7F07B310;
    case 0x7F07B314u: goto label_7F07B314;
    case 0x7F07B318u: goto label_7F07B318;
    case 0x7F07B31Cu: goto label_7F07B31C;
    case 0x7F07B320u: goto label_7F07B320;
    case 0x7F07B324u: goto label_7F07B324;
    case 0x7F07B328u: goto label_7F07B328;
    case 0x7F07B32Cu: goto label_7F07B32C;
    case 0x7F07B330u: goto label_7F07B330;
    case 0x7F07B334u: goto label_7F07B334;
    case 0x7F07B338u: goto label_7F07B338;
    case 0x7F07B33Cu: goto label_7F07B33C;
    case 0x7F07B340u: goto label_7F07B340;
    case 0x7F07B344u: goto label_7F07B344;
    case 0x7F07B348u: goto label_7F07B348;
    case 0x7F07B34Cu: goto label_7F07B34C;
    case 0x7F07B350u: goto label_7F07B350;
    case 0x7F07B354u: goto label_7F07B354;
    case 0x7F07B358u: goto label_7F07B358;
    case 0x7F07B35Cu: goto label_7F07B35C;
    case 0x7F07B360u: goto label_7F07B360;
    case 0x7F07B364u: goto label_7F07B364;
    case 0x7F07B368u: goto label_7F07B368;
    case 0x7F07B36Cu: goto label_7F07B36C;
    case 0x7F07B370u: goto label_7F07B370;
    case 0x7F07B374u: goto label_7F07B374;
    case 0x7F07B378u: goto label_7F07B378;
    case 0x7F07B37Cu: goto label_7F07B37C;
    case 0x7F07B380u: goto label_7F07B380;
    case 0x7F07B384u: goto label_7F07B384;
    case 0x7F07B388u: goto label_7F07B388;
    case 0x7F07B38Cu: goto label_7F07B38C;
    case 0x7F07B390u: goto label_7F07B390;
    case 0x7F07B394u: goto label_7F07B394;
    case 0x7F07B398u: goto label_7F07B398;
    case 0x7F07B39Cu: goto label_7F07B39C;
    case 0x7F07B3A0u: goto label_7F07B3A0;
    case 0x7F07B3A4u: goto label_7F07B3A4;
    case 0x7F07B3A8u: goto label_7F07B3A8;
    case 0x7F07B3ACu: goto label_7F07B3AC;
    case 0x7F07B3B0u: goto label_7F07B3B0;
    case 0x7F07B3B4u: goto label_7F07B3B4;
    case 0x7F07B3B8u: goto label_7F07B3B8;
    case 0x7F07B3BCu: goto label_7F07B3BC;
    case 0x7F07B3C0u: goto label_7F07B3C0;
    case 0x7F07B3C4u: goto label_7F07B3C4;
    case 0x7F07B3C8u: goto label_7F07B3C8;
    case 0x7F07B3CCu: goto label_7F07B3CC;
    case 0x7F07B3D0u: goto label_7F07B3D0;
    case 0x7F07B3D4u: goto label_7F07B3D4;
    case 0x7F07B3D8u: goto label_7F07B3D8;
    case 0x7F07B3DCu: goto label_7F07B3DC;
    case 0x7F07B3E0u: goto label_7F07B3E0;
    case 0x7F07B3E4u: goto label_7F07B3E4;
    case 0x7F07B3E8u: goto label_7F07B3E8;
    case 0x7F07B3ECu: goto label_7F07B3EC;
    case 0x7F07B3F0u: goto label_7F07B3F0;
    case 0x7F07B3F4u: goto label_7F07B3F4;
    case 0x7F07B3F8u: goto label_7F07B3F8;
    case 0x7F07B3FCu: goto label_7F07B3FC;
    case 0x7F07B400u: goto label_7F07B400;
    case 0x7F07B404u: goto label_7F07B404;
    case 0x7F07B408u: goto label_7F07B408;
    case 0x7F07B40Cu: goto label_7F07B40C;
    case 0x7F07B410u: goto label_7F07B410;
    case 0x7F07B414u: goto label_7F07B414;
    case 0x7F07B418u: goto label_7F07B418;
    case 0x7F07B41Cu: goto label_7F07B41C;
    case 0x7F07B420u: goto label_7F07B420;
    case 0x7F07B424u: goto label_7F07B424;
    case 0x7F07B428u: goto label_7F07B428;
    case 0x7F07B42Cu: goto label_7F07B42C;
    case 0x7F07B430u: goto label_7F07B430;
    case 0x7F07B434u: goto label_7F07B434;
    case 0x7F07B438u: goto label_7F07B438;
    case 0x7F07B43Cu: goto label_7F07B43C;
    case 0x7F07B440u: goto label_7F07B440;
    case 0x7F07B444u: goto label_7F07B444;
    case 0x7F07B448u: goto label_7F07B448;
    case 0x7F07B44Cu: goto label_7F07B44C;
    case 0x7F07B450u: goto label_7F07B450;
    case 0x7F07B454u: goto label_7F07B454;
    case 0x7F07B458u: goto label_7F07B458;
    case 0x7F07B45Cu: goto label_7F07B45C;
    case 0x7F07B460u: goto label_7F07B460;
    case 0x7F07B464u: goto label_7F07B464;
    case 0x7F07B468u: goto label_7F07B468;
    case 0x7F07B46Cu: goto label_7F07B46C;
    case 0x7F07B470u: goto label_7F07B470;
    case 0x7F07B474u: goto label_7F07B474;
    case 0x7F07B478u: goto label_7F07B478;
    case 0x7F07B47Cu: goto label_7F07B47C;
    case 0x7F07B480u: goto label_7F07B480;
    case 0x7F07B484u: goto label_7F07B484;
    case 0x7F07B488u: goto label_7F07B488;
    case 0x7F07B48Cu: goto label_7F07B48C;
    case 0x7F07B490u: goto label_7F07B490;
    case 0x7F07B494u: goto label_7F07B494;
    case 0x7F07B498u: goto label_7F07B498;
    case 0x7F07B49Cu: goto label_7F07B49C;
    case 0x7F07B4A0u: goto label_7F07B4A0;
    case 0x7F07B4A4u: goto label_7F07B4A4;
    case 0x7F07B4A8u: goto label_7F07B4A8;
    case 0x7F07B4ACu: goto label_7F07B4AC;
    case 0x7F07B4B0u: goto label_7F07B4B0;
    case 0x7F07B4B4u: goto label_7F07B4B4;
    case 0x7F07B4B8u: goto label_7F07B4B8;
    case 0x7F07B4BCu: goto label_7F07B4BC;
    case 0x7F07B4C0u: goto label_7F07B4C0;
    case 0x7F07B4C4u: goto label_7F07B4C4;
    case 0x7F07B4C8u: goto label_7F07B4C8;
    case 0x7F07B4CCu: goto label_7F07B4CC;
    case 0x7F07B4D0u: goto label_7F07B4D0;
    case 0x7F07B4D4u: goto label_7F07B4D4;
    case 0x7F07B4D8u: goto label_7F07B4D8;
    case 0x7F07B4DCu: goto label_7F07B4DC;
    case 0x7F07B4E0u: goto label_7F07B4E0;
    case 0x7F07B4E4u: goto label_7F07B4E4;
    case 0x7F07B4E8u: goto label_7F07B4E8;
    case 0x7F07B4ECu: goto label_7F07B4EC;
    case 0x7F07B4F0u: goto label_7F07B4F0;
    case 0x7F07B4F4u: goto label_7F07B4F4;
    case 0x7F07B4F8u: goto label_7F07B4F8;
    case 0x7F07B4FCu: goto label_7F07B4FC;
    case 0x7F07B500u: goto label_7F07B500;
    case 0x7F07B504u: goto label_7F07B504;
    case 0x7F07B508u: goto label_7F07B508;
    case 0x7F07B50Cu: goto label_7F07B50C;
    case 0x7F07B510u: goto label_7F07B510;
    case 0x7F07B514u: goto label_7F07B514;
    case 0x7F07B518u: goto label_7F07B518;
    case 0x7F07B51Cu: goto label_7F07B51C;
    case 0x7F07B520u: goto label_7F07B520;
    case 0x7F07B524u: goto label_7F07B524;
    case 0x7F07B528u: goto label_7F07B528;
    case 0x7F07B52Cu: goto label_7F07B52C;
    case 0x7F07B530u: goto label_7F07B530;
    case 0x7F07B534u: goto label_7F07B534;
    case 0x7F07B538u: goto label_7F07B538;
    case 0x7F07B53Cu: goto label_7F07B53C;
    case 0x7F07B540u: goto label_7F07B540;
    case 0x7F07B544u: goto label_7F07B544;
    case 0x7F07B548u: goto label_7F07B548;
    case 0x7F07B54Cu: goto label_7F07B54C;
    case 0x7F07B550u: goto label_7F07B550;
    case 0x7F07B554u: goto label_7F07B554;
    case 0x7F07B558u: goto label_7F07B558;
    case 0x7F07B55Cu: goto label_7F07B55C;
    case 0x7F07B560u: goto label_7F07B560;
    case 0x7F07B564u: goto label_7F07B564;
    case 0x7F07B568u: goto label_7F07B568;
    case 0x7F07B56Cu: goto label_7F07B56C;
    case 0x7F07B570u: goto label_7F07B570;
    case 0x7F07B574u: goto label_7F07B574;
    case 0x7F07B578u: goto label_7F07B578;
    case 0x7F07B57Cu: goto label_7F07B57C;
    case 0x7F07B580u: goto label_7F07B580;
    case 0x7F07B584u: goto label_7F07B584;
    case 0x7F07B588u: goto label_7F07B588;
    case 0x7F07B58Cu: goto label_7F07B58C;
    case 0x7F07B590u: goto label_7F07B590;
    case 0x7F07B594u: goto label_7F07B594;
    case 0x7F07B598u: goto label_7F07B598;
    case 0x7F07B59Cu: goto label_7F07B59C;
    case 0x7F07B5A0u: goto label_7F07B5A0;
    case 0x7F07B5A4u: goto label_7F07B5A4;
    case 0x7F07B5A8u: goto label_7F07B5A8;
    case 0x7F07B5ACu: goto label_7F07B5AC;
    case 0x7F07B5B0u: goto label_7F07B5B0;
    case 0x7F07B5B4u: goto label_7F07B5B4;
    case 0x7F07B5B8u: goto label_7F07B5B8;
    case 0x7F07B5BCu: goto label_7F07B5BC;
    case 0x7F07B5C0u: goto label_7F07B5C0;
    case 0x7F07B5C4u: goto label_7F07B5C4;
    case 0x7F07B5C8u: goto label_7F07B5C8;
    case 0x7F07B5CCu: goto label_7F07B5CC;
    case 0x7F07B5D0u: goto label_7F07B5D0;
    case 0x7F07B5D4u: goto label_7F07B5D4;
    case 0x7F07B5D8u: goto label_7F07B5D8;
    case 0x7F07B5DCu: goto label_7F07B5DC;
    case 0x7F07B5E0u: goto label_7F07B5E0;
    case 0x7F07B5E4u: goto label_7F07B5E4;
    case 0x7F07B5E8u: goto label_7F07B5E8;
    case 0x7F07B5ECu: goto label_7F07B5EC;
    case 0x7F07B5F0u: goto label_7F07B5F0;
    case 0x7F07B5F4u: goto label_7F07B5F4;
    case 0x7F07B5F8u: goto label_7F07B5F8;
    case 0x7F07B5FCu: goto label_7F07B5FC;
    case 0x7F07B600u: goto label_7F07B600;
    case 0x7F07B604u: goto label_7F07B604;
    case 0x7F07B608u: goto label_7F07B608;
    case 0x7F07B60Cu: goto label_7F07B60C;
    case 0x7F07B610u: goto label_7F07B610;
    case 0x7F07B614u: goto label_7F07B614;
    case 0x7F07B618u: goto label_7F07B618;
    case 0x7F07B61Cu: goto label_7F07B61C;
    case 0x7F07B620u: goto label_7F07B620;
    case 0x7F07B624u: goto label_7F07B624;
    case 0x7F07B628u: goto label_7F07B628;
    case 0x7F07B62Cu: goto label_7F07B62C;
    case 0x7F07B630u: goto label_7F07B630;
    case 0x7F07B634u: goto label_7F07B634;
    case 0x7F07B638u: goto label_7F07B638;
    case 0x7F07B63Cu: goto label_7F07B63C;
    case 0x7F07B640u: goto label_7F07B640;
    case 0x7F07B644u: goto label_7F07B644;
    case 0x7F07B648u: goto label_7F07B648;
    case 0x7F07B64Cu: goto label_7F07B64C;
    case 0x7F07B650u: goto label_7F07B650;
    case 0x7F07B654u: goto label_7F07B654;
    case 0x7F07B658u: goto label_7F07B658;
    case 0x7F07B65Cu: goto label_7F07B65C;
    case 0x7F07B660u: goto label_7F07B660;
    case 0x7F07B664u: goto label_7F07B664;
    case 0x7F07B668u: goto label_7F07B668;
    case 0x7F07B66Cu: goto label_7F07B66C;
    case 0x7F07B670u: goto label_7F07B670;
    case 0x7F07B674u: goto label_7F07B674;
    case 0x7F07B678u: goto label_7F07B678;
    case 0x7F07B67Cu: goto label_7F07B67C;
    case 0x7F07B680u: goto label_7F07B680;
    case 0x7F07B684u: goto label_7F07B684;
    case 0x7F07B688u: goto label_7F07B688;
    case 0x7F07B68Cu: goto label_7F07B68C;
    case 0x7F07B690u: goto label_7F07B690;
    case 0x7F07B694u: goto label_7F07B694;
    case 0x7F07B698u: goto label_7F07B698;
    case 0x7F07B69Cu: goto label_7F07B69C;
    case 0x7F07B6A0u: goto label_7F07B6A0;
    case 0x7F07B6A4u: goto label_7F07B6A4;
    case 0x7F07B6A8u: goto label_7F07B6A8;
    case 0x7F07B6ACu: goto label_7F07B6AC;
    case 0x7F07B6B0u: goto label_7F07B6B0;
    case 0x7F07B6B4u: goto label_7F07B6B4;
    case 0x7F07B6B8u: goto label_7F07B6B8;
    case 0x7F07B6BCu: goto label_7F07B6BC;
    case 0x7F07B6C0u: goto label_7F07B6C0;
    case 0x7F07B6C4u: goto label_7F07B6C4;
    case 0x7F07B6C8u: goto label_7F07B6C8;
    case 0x7F07B6CCu: goto label_7F07B6CC;
    case 0x7F07B6D0u: goto label_7F07B6D0;
    case 0x7F07B6D4u: goto label_7F07B6D4;
    case 0x7F07B6D8u: goto label_7F07B6D8;
    case 0x7F07B6DCu: goto label_7F07B6DC;
    case 0x7F07B6E0u: goto label_7F07B6E0;
    case 0x7F07B6E4u: goto label_7F07B6E4;
    case 0x7F07B6E8u: goto label_7F07B6E8;
    case 0x7F07B6ECu: goto label_7F07B6EC;
    case 0x7F07B6F0u: goto label_7F07B6F0;
    case 0x7F07B6F4u: goto label_7F07B6F4;
    case 0x7F07B6F8u: goto label_7F07B6F8;
    case 0x7F07B6FCu: goto label_7F07B6FC;
    case 0x7F07B700u: goto label_7F07B700;
    case 0x7F07B704u: goto label_7F07B704;
    case 0x7F07B708u: goto label_7F07B708;
    case 0x7F07B70Cu: goto label_7F07B70C;
    case 0x7F07B710u: goto label_7F07B710;
    case 0x7F07B714u: goto label_7F07B714;
    case 0x7F07B718u: goto label_7F07B718;
    case 0x7F07B71Cu: goto label_7F07B71C;
    case 0x7F07B720u: goto label_7F07B720;
    case 0x7F07B724u: goto label_7F07B724;
    case 0x7F07B728u: goto label_7F07B728;
    case 0x7F07B72Cu: goto label_7F07B72C;
    case 0x7F07B730u: goto label_7F07B730;
    case 0x7F07B734u: goto label_7F07B734;
    case 0x7F07B738u: goto label_7F07B738;
    case 0x7F07B73Cu: goto label_7F07B73C;
    case 0x7F07B740u: goto label_7F07B740;
    case 0x7F07B744u: goto label_7F07B744;
    case 0x7F07B748u: goto label_7F07B748;
    case 0x7F07B74Cu: goto label_7F07B74C;
    case 0x7F07B750u: goto label_7F07B750;
    case 0x7F07B754u: goto label_7F07B754;
    case 0x7F07B758u: goto label_7F07B758;
    case 0x7F07B75Cu: goto label_7F07B75C;
    case 0x7F07B760u: goto label_7F07B760;
    case 0x7F07B764u: goto label_7F07B764;
    case 0x7F07B768u: goto label_7F07B768;
    case 0x7F07B76Cu: goto label_7F07B76C;
    case 0x7F07B770u: goto label_7F07B770;
    case 0x7F07B774u: goto label_7F07B774;
    case 0x7F07B778u: goto label_7F07B778;
    case 0x7F07B77Cu: goto label_7F07B77C;
    case 0x7F07B780u: goto label_7F07B780;
    case 0x7F07B784u: goto label_7F07B784;
    case 0x7F07B788u: goto label_7F07B788;
    case 0x7F07B78Cu: goto label_7F07B78C;
    case 0x7F07B790u: goto label_7F07B790;
    case 0x7F07B794u: goto label_7F07B794;
    case 0x7F07B798u: goto label_7F07B798;
    case 0x7F07B79Cu: goto label_7F07B79C;
    case 0x7F07B7A0u: goto label_7F07B7A0;
    case 0x7F07B7A4u: goto label_7F07B7A4;
    case 0x7F07B7A8u: goto label_7F07B7A8;
    case 0x7F07B7ACu: goto label_7F07B7AC;
    case 0x7F07B7B0u: goto label_7F07B7B0;
    case 0x7F07B7B4u: goto label_7F07B7B4;
    case 0x7F07B7B8u: goto label_7F07B7B8;
    case 0x7F07B7BCu: goto label_7F07B7BC;
    case 0x7F07B7C0u: goto label_7F07B7C0;
    case 0x7F07B7C4u: goto label_7F07B7C4;
    case 0x7F07B7C8u: goto label_7F07B7C8;
    case 0x7F07B7CCu: goto label_7F07B7CC;
    case 0x7F07B7D0u: goto label_7F07B7D0;
    case 0x7F07B7D4u: goto label_7F07B7D4;
    case 0x7F07B7D8u: goto label_7F07B7D8;
    case 0x7F07B7DCu: goto label_7F07B7DC;
    case 0x7F07B7E0u: goto label_7F07B7E0;
    case 0x7F07B7E4u: goto label_7F07B7E4;
    case 0x7F07B7E8u: goto label_7F07B7E8;
    case 0x7F07B7ECu: goto label_7F07B7EC;
    case 0x7F07B7F0u: goto label_7F07B7F0;
    case 0x7F07B7F4u: goto label_7F07B7F4;
    case 0x7F07B7F8u: goto label_7F07B7F8;
    case 0x7F07B7FCu: goto label_7F07B7FC;
    case 0x7F07B800u: goto label_7F07B800;
    case 0x7F07B804u: goto label_7F07B804;
    case 0x7F07B808u: goto label_7F07B808;
    case 0x7F07B80Cu: goto label_7F07B80C;
    case 0x7F07B810u: goto label_7F07B810;
    case 0x7F07B814u: goto label_7F07B814;
    case 0x7F07B818u: goto label_7F07B818;
    case 0x7F07B81Cu: goto label_7F07B81C;
    case 0x7F07B820u: goto label_7F07B820;
    case 0x7F07B824u: goto label_7F07B824;
    case 0x7F07B828u: goto label_7F07B828;
    case 0x7F07B82Cu: goto label_7F07B82C;
    case 0x7F07B830u: goto label_7F07B830;
    case 0x7F07B834u: goto label_7F07B834;
    case 0x7F07B838u: goto label_7F07B838;
    case 0x7F07B83Cu: goto label_7F07B83C;
    case 0x7F07B840u: goto label_7F07B840;
    case 0x7F07B844u: goto label_7F07B844;
    case 0x7F07B848u: goto label_7F07B848;
    case 0x7F07B84Cu: goto label_7F07B84C;
    case 0x7F07B850u: goto label_7F07B850;
    case 0x7F07B854u: goto label_7F07B854;
    case 0x7F07B858u: goto label_7F07B858;
    case 0x7F07B85Cu: goto label_7F07B85C;
    case 0x7F07B860u: goto label_7F07B860;
    case 0x7F07B864u: goto label_7F07B864;
    case 0x7F07B868u: goto label_7F07B868;
    case 0x7F07B86Cu: goto label_7F07B86C;
    case 0x7F07B870u: goto label_7F07B870;
    case 0x7F07B874u: goto label_7F07B874;
    case 0x7F07B878u: goto label_7F07B878;
    case 0x7F07B87Cu: goto label_7F07B87C;
    case 0x7F07B880u: goto label_7F07B880;
    case 0x7F07B884u: goto label_7F07B884;
    case 0x7F07B888u: goto label_7F07B888;
    case 0x7F07B88Cu: goto label_7F07B88C;
    case 0x7F07B890u: goto label_7F07B890;
    case 0x7F07B894u: goto label_7F07B894;
    case 0x7F07B898u: goto label_7F07B898;
    case 0x7F07B89Cu: goto label_7F07B89C;
    case 0x7F07B8A0u: goto label_7F07B8A0;
    case 0x7F07B8A4u: goto label_7F07B8A4;
    case 0x7F07B8A8u: goto label_7F07B8A8;
    case 0x7F07B8ACu: goto label_7F07B8AC;
    case 0x7F07B8B0u: goto label_7F07B8B0;
    case 0x7F07B8B4u: goto label_7F07B8B4;
    case 0x7F07B8B8u: goto label_7F07B8B8;
    case 0x7F07B8BCu: goto label_7F07B8BC;
    case 0x7F07B8C0u: goto label_7F07B8C0;
    case 0x7F07B8C4u: goto label_7F07B8C4;
    case 0x7F07B8C8u: goto label_7F07B8C8;
    case 0x7F07B8CCu: goto label_7F07B8CC;
    case 0x7F07B8D0u: goto label_7F07B8D0;
    case 0x7F07B8D4u: goto label_7F07B8D4;
    case 0x7F07B8D8u: goto label_7F07B8D8;
    case 0x7F07B8DCu: goto label_7F07B8DC;
    case 0x7F07B8E0u: goto label_7F07B8E0;
    case 0x7F07B8E4u: goto label_7F07B8E4;
    case 0x7F07B8E8u: goto label_7F07B8E8;
    case 0x7F07B8ECu: goto label_7F07B8EC;
    case 0x7F07B8F0u: goto label_7F07B8F0;
    case 0x7F07B8F4u: goto label_7F07B8F4;
    case 0x7F07B8F8u: goto label_7F07B8F8;
    case 0x7F07B8FCu: goto label_7F07B8FC;
    case 0x7F07B900u: goto label_7F07B900;
    case 0x7F07B904u: goto label_7F07B904;
    case 0x7F07B908u: goto label_7F07B908;
    case 0x7F07B90Cu: goto label_7F07B90C;
    case 0x7F07B910u: goto label_7F07B910;
    case 0x7F07B914u: goto label_7F07B914;
    case 0x7F07B918u: goto label_7F07B918;
    case 0x7F07B91Cu: goto label_7F07B91C;
    case 0x7F07B920u: goto label_7F07B920;
    case 0x7F07B924u: goto label_7F07B924;
    case 0x7F07B928u: goto label_7F07B928;
    case 0x7F07B92Cu: goto label_7F07B92C;
    case 0x7F07B930u: goto label_7F07B930;
    case 0x7F07B934u: goto label_7F07B934;
    case 0x7F07B938u: goto label_7F07B938;
    case 0x7F07B93Cu: goto label_7F07B93C;
    case 0x7F07B940u: goto label_7F07B940;
    case 0x7F07B944u: goto label_7F07B944;
    case 0x7F07B948u: goto label_7F07B948;
    case 0x7F07B94Cu: goto label_7F07B94C;
    case 0x7F07B950u: goto label_7F07B950;
    case 0x7F07B954u: goto label_7F07B954;
    case 0x7F07B958u: goto label_7F07B958;
    case 0x7F07B95Cu: goto label_7F07B95C;
    case 0x7F07B960u: goto label_7F07B960;
    case 0x7F07B964u: goto label_7F07B964;
    case 0x7F07B968u: goto label_7F07B968;
    case 0x7F07B96Cu: goto label_7F07B96C;
    case 0x7F07B970u: goto label_7F07B970;
    case 0x7F07B974u: goto label_7F07B974;
    case 0x7F07B978u: goto label_7F07B978;
    case 0x7F07B97Cu: goto label_7F07B97C;
    case 0x7F07B980u: goto label_7F07B980;
    case 0x7F07B984u: goto label_7F07B984;
    case 0x7F07B988u: goto label_7F07B988;
    case 0x7F07B98Cu: goto label_7F07B98C;
    case 0x7F07B990u: goto label_7F07B990;
    case 0x7F07B994u: goto label_7F07B994;
    case 0x7F07B998u: goto label_7F07B998;
    case 0x7F07B99Cu: goto label_7F07B99C;
    case 0x7F07B9A0u: goto label_7F07B9A0;
    case 0x7F07B9A4u: goto label_7F07B9A4;
    case 0x7F07B9A8u: goto label_7F07B9A8;
    case 0x7F07B9ACu: goto label_7F07B9AC;
    case 0x7F07B9B0u: goto label_7F07B9B0;
    case 0x7F07B9B4u: goto label_7F07B9B4;
    case 0x7F07B9B8u: goto label_7F07B9B8;
    case 0x7F07B9BCu: goto label_7F07B9BC;
    case 0x7F07B9C0u: goto label_7F07B9C0;
    case 0x7F07B9C4u: goto label_7F07B9C4;
    case 0x7F07B9C8u: goto label_7F07B9C8;
    case 0x7F07B9CCu: goto label_7F07B9CC;
    case 0x7F07B9D0u: goto label_7F07B9D0;
    case 0x7F07B9D4u: goto label_7F07B9D4;
    case 0x7F07B9D8u: goto label_7F07B9D8;
    case 0x7F07B9DCu: goto label_7F07B9DC;
    case 0x7F07B9E0u: goto label_7F07B9E0;
    case 0x7F07B9E4u: goto label_7F07B9E4;
    case 0x7F07B9E8u: goto label_7F07B9E8;
    case 0x7F07B9ECu: goto label_7F07B9EC;
    case 0x7F07B9F0u: goto label_7F07B9F0;
    case 0x7F07B9F4u: goto label_7F07B9F4;
    case 0x7F07B9F8u: goto label_7F07B9F8;
    case 0x7F07B9FCu: goto label_7F07B9FC;
    case 0x7F07BA00u: goto label_7F07BA00;
    case 0x7F07BA04u: goto label_7F07BA04;
    case 0x7F07BA08u: goto label_7F07BA08;
    case 0x7F07BA0Cu: goto label_7F07BA0C;
    case 0x7F07BA10u: goto label_7F07BA10;
    case 0x7F07BA14u: goto label_7F07BA14;
    case 0x7F07BA18u: goto label_7F07BA18;
    case 0x7F07BA1Cu: goto label_7F07BA1C;
    case 0x7F07BA20u: goto label_7F07BA20;
    case 0x7F07BA24u: goto label_7F07BA24;
    case 0x7F07BA28u: goto label_7F07BA28;
    case 0x7F07BA2Cu: goto label_7F07BA2C;
    case 0x7F07BA30u: goto label_7F07BA30;
    case 0x7F07BA34u: goto label_7F07BA34;
    case 0x7F07BA38u: goto label_7F07BA38;
    case 0x7F07BA3Cu: goto label_7F07BA3C;
    case 0x7F07BA40u: goto label_7F07BA40;
    case 0x7F07BA44u: goto label_7F07BA44;
    case 0x7F07BA48u: goto label_7F07BA48;
    case 0x7F07BA4Cu: goto label_7F07BA4C;
    case 0x7F07BA50u: goto label_7F07BA50;
    case 0x7F07BA54u: goto label_7F07BA54;
    case 0x7F07BA58u: goto label_7F07BA58;
    case 0x7F07BA5Cu: goto label_7F07BA5C;
    case 0x7F07BA60u: goto label_7F07BA60;
    case 0x7F07BA64u: goto label_7F07BA64;
    case 0x7F07BA68u: goto label_7F07BA68;
    case 0x7F07BA6Cu: goto label_7F07BA6C;
    case 0x7F07BA70u: goto label_7F07BA70;
    case 0x7F07BA74u: goto label_7F07BA74;
    case 0x7F07BA78u: goto label_7F07BA78;
    case 0x7F07BA7Cu: goto label_7F07BA7C;
    case 0x7F07BA80u: goto label_7F07BA80;
    case 0x7F07BA84u: goto label_7F07BA84;
    case 0x7F07BA88u: goto label_7F07BA88;
    case 0x7F07BA8Cu: goto label_7F07BA8C;
    case 0x7F07BA90u: goto label_7F07BA90;
    case 0x7F07BA94u: goto label_7F07BA94;
    case 0x7F07BA98u: goto label_7F07BA98;
    case 0x7F07BA9Cu: goto label_7F07BA9C;
    case 0x7F07BAA0u: goto label_7F07BAA0;
    case 0x7F07BAA4u: goto label_7F07BAA4;
    case 0x7F07BAA8u: goto label_7F07BAA8;
    case 0x7F07BAACu: goto label_7F07BAAC;
    case 0x7F07BAB0u: goto label_7F07BAB0;
    case 0x7F07BAB4u: goto label_7F07BAB4;
    case 0x7F07BAB8u: goto label_7F07BAB8;
    case 0x7F07BABCu: goto label_7F07BABC;
    case 0x7F07BAC0u: goto label_7F07BAC0;
    case 0x7F07BAC4u: goto label_7F07BAC4;
    case 0x7F07BAC8u: goto label_7F07BAC8;
    case 0x7F07BACCu: goto label_7F07BACC;
    case 0x7F07BAD0u: goto label_7F07BAD0;
    case 0x7F07BAD4u: goto label_7F07BAD4;
    case 0x7F07BAD8u: goto label_7F07BAD8;
    case 0x7F07BADCu: goto label_7F07BADC;
    case 0x7F07BAE0u: goto label_7F07BAE0;
    case 0x7F07BAE4u: goto label_7F07BAE4;
    case 0x7F07BAE8u: goto label_7F07BAE8;
    case 0x7F07BAECu: goto label_7F07BAEC;
    case 0x7F07BAF0u: goto label_7F07BAF0;
    case 0x7F07BAF4u: goto label_7F07BAF4;
    case 0x7F07BAF8u: goto label_7F07BAF8;
    case 0x7F07BAFCu: goto label_7F07BAFC;
    case 0x7F07BB00u: goto label_7F07BB00;
    case 0x7F07BB04u: goto label_7F07BB04;
    case 0x7F07BB08u: goto label_7F07BB08;
    case 0x7F07BB0Cu: goto label_7F07BB0C;
    case 0x7F07BB10u: goto label_7F07BB10;
    case 0x7F07BB14u: goto label_7F07BB14;
    case 0x7F07BB18u: goto label_7F07BB18;
    case 0x7F07BB1Cu: goto label_7F07BB1C;
    case 0x7F07BB20u: goto label_7F07BB20;
    case 0x7F07BB24u: goto label_7F07BB24;
    case 0x7F07BB28u: goto label_7F07BB28;
    case 0x7F07BB2Cu: goto label_7F07BB2C;
    case 0x7F07BB30u: goto label_7F07BB30;
    case 0x7F07BB34u: goto label_7F07BB34;
    case 0x7F07BB38u: goto label_7F07BB38;
    case 0x7F07BB3Cu: goto label_7F07BB3C;
    case 0x7F07BB40u: goto label_7F07BB40;
    case 0x7F07BB44u: goto label_7F07BB44;
    case 0x7F07BB48u: goto label_7F07BB48;
    case 0x7F07BB4Cu: goto label_7F07BB4C;
    case 0x7F07BB50u: goto label_7F07BB50;
    case 0x7F07BB54u: goto label_7F07BB54;
    case 0x7F07BB58u: goto label_7F07BB58;
    case 0x7F07BB5Cu: goto label_7F07BB5C;
    case 0x7F07BB60u: goto label_7F07BB60;
    case 0x7F07BB64u: goto label_7F07BB64;
    case 0x7F07BB68u: goto label_7F07BB68;
    case 0x7F07BB6Cu: goto label_7F07BB6C;
    case 0x7F07BB70u: goto label_7F07BB70;
    case 0x7F07BB74u: goto label_7F07BB74;
    case 0x7F07BB78u: goto label_7F07BB78;
    case 0x7F07BB7Cu: goto label_7F07BB7C;
    case 0x7F07BB80u: goto label_7F07BB80;
    case 0x7F07BB84u: goto label_7F07BB84;
    case 0x7F07BB88u: goto label_7F07BB88;
    case 0x7F07BB8Cu: goto label_7F07BB8C;
    case 0x7F07BB90u: goto label_7F07BB90;
    case 0x7F07BB94u: goto label_7F07BB94;
    case 0x7F07BB98u: goto label_7F07BB98;
    case 0x7F07BB9Cu: goto label_7F07BB9C;
    case 0x7F07BBA0u: goto label_7F07BBA0;
    case 0x7F07BBA4u: goto label_7F07BBA4;
    case 0x7F07BBA8u: goto label_7F07BBA8;
    case 0x7F07BBACu: goto label_7F07BBAC;
    case 0x7F07BBB0u: goto label_7F07BBB0;
    case 0x7F07BBB4u: goto label_7F07BBB4;
    case 0x7F07BBB8u: goto label_7F07BBB8;
    case 0x7F07BBBCu: goto label_7F07BBBC;
    case 0x7F07BBC0u: goto label_7F07BBC0;
    case 0x7F07BBC4u: goto label_7F07BBC4;
    case 0x7F07BBC8u: goto label_7F07BBC8;
    case 0x7F07BBCCu: goto label_7F07BBCC;
    case 0x7F07BBD0u: goto label_7F07BBD0;
    case 0x7F07BBD4u: goto label_7F07BBD4;
    case 0x7F07BBD8u: goto label_7F07BBD8;
    case 0x7F07BBDCu: goto label_7F07BBDC;
    case 0x7F07BBE0u: goto label_7F07BBE0;
    case 0x7F07BBE4u: goto label_7F07BBE4;
    case 0x7F07BBE8u: goto label_7F07BBE8;
    case 0x7F07BBECu: goto label_7F07BBEC;
    case 0x7F07BBF0u: goto label_7F07BBF0;
    case 0x7F07BBF4u: goto label_7F07BBF4;
    case 0x7F07BBF8u: goto label_7F07BBF8;
    case 0x7F07BBFCu: goto label_7F07BBFC;
    case 0x7F07BC00u: goto label_7F07BC00;
    case 0x7F07BC04u: goto label_7F07BC04;
    case 0x7F07BC08u: goto label_7F07BC08;
    case 0x7F07BC0Cu: goto label_7F07BC0C;
    case 0x7F07BC10u: goto label_7F07BC10;
    case 0x7F07BC14u: goto label_7F07BC14;
    case 0x7F07BC18u: goto label_7F07BC18;
    case 0x7F07BC1Cu: goto label_7F07BC1C;
    case 0x7F07BC20u: goto label_7F07BC20;
    case 0x7F07BC24u: goto label_7F07BC24;
    case 0x7F07BC28u: goto label_7F07BC28;
    case 0x7F07BC2Cu: goto label_7F07BC2C;
    case 0x7F07BC30u: goto label_7F07BC30;
    case 0x7F07BC34u: goto label_7F07BC34;
    case 0x7F07BC38u: goto label_7F07BC38;
    case 0x7F07BC3Cu: goto label_7F07BC3C;
    case 0x7F07BC40u: goto label_7F07BC40;
    case 0x7F07BC44u: goto label_7F07BC44;
    case 0x7F07BC48u: goto label_7F07BC48;
    case 0x7F07BC4Cu: goto label_7F07BC4C;
    case 0x7F07BC50u: goto label_7F07BC50;
    case 0x7F07BC54u: goto label_7F07BC54;
    case 0x7F07BC58u: goto label_7F07BC58;
    case 0x7F07BC5Cu: goto label_7F07BC5C;
    case 0x7F07BC60u: goto label_7F07BC60;
    case 0x7F07BC64u: goto label_7F07BC64;
    case 0x7F07BC68u: goto label_7F07BC68;
    case 0x7F07BC6Cu: goto label_7F07BC6C;
    case 0x7F07BC70u: goto label_7F07BC70;
    case 0x7F07BC74u: goto label_7F07BC74;
    case 0x7F07BC78u: goto label_7F07BC78;
    case 0x7F07BC7Cu: goto label_7F07BC7C;
    case 0x7F07BC80u: goto label_7F07BC80;
    case 0x7F07BC84u: goto label_7F07BC84;
    case 0x7F07BC88u: goto label_7F07BC88;
    case 0x7F07BC8Cu: goto label_7F07BC8C;
    case 0x7F07BC90u: goto label_7F07BC90;
    case 0x7F07BC94u: goto label_7F07BC94;
    case 0x7F07BC98u: goto label_7F07BC98;
    case 0x7F07BC9Cu: goto label_7F07BC9C;
    case 0x7F07BCA0u: goto label_7F07BCA0;
    case 0x7F07BCA4u: goto label_7F07BCA4;
    case 0x7F07BCA8u: goto label_7F07BCA8;
    case 0x7F07BCACu: goto label_7F07BCAC;
    case 0x7F07BCB0u: goto label_7F07BCB0;
    case 0x7F07BCB4u: goto label_7F07BCB4;
    case 0x7F07BCB8u: goto label_7F07BCB8;
    case 0x7F07BCBCu: goto label_7F07BCBC;
    case 0x7F07BCC0u: goto label_7F07BCC0;
    case 0x7F07BCC4u: goto label_7F07BCC4;
    case 0x7F07BCC8u: goto label_7F07BCC8;
    case 0x7F07BCCCu: goto label_7F07BCCC;
    case 0x7F07BCD0u: goto label_7F07BCD0;
    case 0x7F07BCD4u: goto label_7F07BCD4;
    case 0x7F07BCD8u: goto label_7F07BCD8;
    case 0x7F07BCDCu: goto label_7F07BCDC;
    case 0x7F07BCE0u: goto label_7F07BCE0;
    case 0x7F07BCE4u: goto label_7F07BCE4;
    case 0x7F07BCE8u: goto label_7F07BCE8;
    case 0x7F07BCECu: goto label_7F07BCEC;
    case 0x7F07BCF0u: goto label_7F07BCF0;
    case 0x7F07BCF4u: goto label_7F07BCF4;
    case 0x7F07BCF8u: goto label_7F07BCF8;
    case 0x7F07BCFCu: goto label_7F07BCFC;
    case 0x7F07BD00u: goto label_7F07BD00;
    case 0x7F07BD04u: goto label_7F07BD04;
    case 0x7F07BD08u: goto label_7F07BD08;
    case 0x7F07BD0Cu: goto label_7F07BD0C;
    case 0x7F07BD10u: goto label_7F07BD10;
    case 0x7F07BD14u: goto label_7F07BD14;
    case 0x7F07BD18u: goto label_7F07BD18;
    case 0x7F07BD1Cu: goto label_7F07BD1C;
    case 0x7F07BD20u: goto label_7F07BD20;
    case 0x7F07BD24u: goto label_7F07BD24;
    case 0x7F07BD28u: goto label_7F07BD28;
    case 0x7F07BD2Cu: goto label_7F07BD2C;
    case 0x7F07BD30u: goto label_7F07BD30;
    case 0x7F07BD34u: goto label_7F07BD34;
    case 0x7F07BD38u: goto label_7F07BD38;
    case 0x7F07BD3Cu: goto label_7F07BD3C;
    case 0x7F07BD40u: goto label_7F07BD40;
    case 0x7F07BD44u: goto label_7F07BD44;
    case 0x7F07BD48u: goto label_7F07BD48;
    case 0x7F07BD4Cu: goto label_7F07BD4C;
    case 0x7F07BD50u: goto label_7F07BD50;
    case 0x7F07BD54u: goto label_7F07BD54;
    case 0x7F07BD58u: goto label_7F07BD58;
    case 0x7F07BD5Cu: goto label_7F07BD5C;
    case 0x7F07BD60u: goto label_7F07BD60;
    case 0x7F07BD64u: goto label_7F07BD64;
    case 0x7F07BD68u: goto label_7F07BD68;
    case 0x7F07BD6Cu: goto label_7F07BD6C;
    case 0x7F07BD70u: goto label_7F07BD70;
    case 0x7F07BD74u: goto label_7F07BD74;
    case 0x7F07BD78u: goto label_7F07BD78;
    case 0x7F07BD7Cu: goto label_7F07BD7C;
    case 0x7F07BD80u: goto label_7F07BD80;
    case 0x7F07BD84u: goto label_7F07BD84;
    case 0x7F07BD88u: goto label_7F07BD88;
    case 0x7F07BD8Cu: goto label_7F07BD8C;
    case 0x7F07BD90u: goto label_7F07BD90;
    case 0x7F07BD94u: goto label_7F07BD94;
    case 0x7F07BD98u: goto label_7F07BD98;
    case 0x7F07BD9Cu: goto label_7F07BD9C;
    case 0x7F07BDA0u: goto label_7F07BDA0;
    case 0x7F07BDA4u: goto label_7F07BDA4;
    case 0x7F07BDA8u: goto label_7F07BDA8;
    case 0x7F07BDACu: goto label_7F07BDAC;
    case 0x7F07BDB0u: goto label_7F07BDB0;
    case 0x7F07BDB4u: goto label_7F07BDB4;
    case 0x7F07BDB8u: goto label_7F07BDB8;
    case 0x7F07BDBCu: goto label_7F07BDBC;
    case 0x7F07BDC0u: goto label_7F07BDC0;
    case 0x7F07BDC4u: goto label_7F07BDC4;
    case 0x7F07BDC8u: goto label_7F07BDC8;
    case 0x7F07BDCCu: goto label_7F07BDCC;
    case 0x7F07BDD0u: goto label_7F07BDD0;
    case 0x7F07BDD4u: goto label_7F07BDD4;
    case 0x7F07BDD8u: goto label_7F07BDD8;
    case 0x7F07BDDCu: goto label_7F07BDDC;
    case 0x7F07BDE0u: goto label_7F07BDE0;
    case 0x7F07BDE4u: goto label_7F07BDE4;
    case 0x7F07BDE8u: goto label_7F07BDE8;
    case 0x7F07BDECu: goto label_7F07BDEC;
    case 0x7F07BDF0u: goto label_7F07BDF0;
    case 0x7F07BDF4u: goto label_7F07BDF4;
    case 0x7F07BDF8u: goto label_7F07BDF8;
    case 0x7F07BDFCu: goto label_7F07BDFC;
    case 0x7F07BE00u: goto label_7F07BE00;
    case 0x7F07BE04u: goto label_7F07BE04;
    case 0x7F07BE08u: goto label_7F07BE08;
    case 0x7F07BE0Cu: goto label_7F07BE0C;
    case 0x7F07BE10u: goto label_7F07BE10;
    case 0x7F07BE14u: goto label_7F07BE14;
    case 0x7F07BE18u: goto label_7F07BE18;
    case 0x7F07BE1Cu: goto label_7F07BE1C;
    case 0x7F07BE20u: goto label_7F07BE20;
    case 0x7F07BE24u: goto label_7F07BE24;
    case 0x7F07BE28u: goto label_7F07BE28;
    case 0x7F07BE2Cu: goto label_7F07BE2C;
    case 0x7F07BE30u: goto label_7F07BE30;
    case 0x7F07BE34u: goto label_7F07BE34;
    case 0x7F07BE38u: goto label_7F07BE38;
    case 0x7F07BE3Cu: goto label_7F07BE3C;
    case 0x7F07BE40u: goto label_7F07BE40;
    case 0x7F07BE44u: goto label_7F07BE44;
    case 0x7F07BE48u: goto label_7F07BE48;
    case 0x7F07BE4Cu: goto label_7F07BE4C;
    case 0x7F07BE50u: goto label_7F07BE50;
    case 0x7F07BE54u: goto label_7F07BE54;
    case 0x7F07BE58u: goto label_7F07BE58;
    case 0x7F07BE5Cu: goto label_7F07BE5C;
    case 0x7F07BE60u: goto label_7F07BE60;
    case 0x7F07BE64u: goto label_7F07BE64;
    case 0x7F07BE68u: goto label_7F07BE68;
    case 0x7F07BE6Cu: goto label_7F07BE6C;
    case 0x7F07BE70u: goto label_7F07BE70;
    case 0x7F07BE74u: goto label_7F07BE74;
    case 0x7F07BE78u: goto label_7F07BE78;
    case 0x7F07BE7Cu: goto label_7F07BE7C;
    case 0x7F07BE80u: goto label_7F07BE80;
    case 0x7F07BE84u: goto label_7F07BE84;
    case 0x7F07BE88u: goto label_7F07BE88;
    case 0x7F07BE8Cu: goto label_7F07BE8C;
    case 0x7F07BE90u: goto label_7F07BE90;
    case 0x7F07BE94u: goto label_7F07BE94;
    case 0x7F07BE98u: goto label_7F07BE98;
    case 0x7F07BE9Cu: goto label_7F07BE9C;
    case 0x7F07BEA0u: goto label_7F07BEA0;
    case 0x7F07BEA4u: goto label_7F07BEA4;
    case 0x7F07BEA8u: goto label_7F07BEA8;
    case 0x7F07BEACu: goto label_7F07BEAC;
    case 0x7F07BEB0u: goto label_7F07BEB0;
    case 0x7F07BEB4u: goto label_7F07BEB4;
    case 0x7F07BEB8u: goto label_7F07BEB8;
    case 0x7F07BEBCu: goto label_7F07BEBC;
    case 0x7F07BEC0u: goto label_7F07BEC0;
    case 0x7F07BEC4u: goto label_7F07BEC4;
    case 0x7F07BEC8u: goto label_7F07BEC8;
    case 0x7F07BECCu: goto label_7F07BECC;
    case 0x7F07BED0u: goto label_7F07BED0;
    case 0x7F07BED4u: goto label_7F07BED4;
    case 0x7F07BED8u: goto label_7F07BED8;
    case 0x7F07BEDCu: goto label_7F07BEDC;
    case 0x7F07BEE0u: goto label_7F07BEE0;
    case 0x7F07BEE4u: goto label_7F07BEE4;
    case 0x7F07BEE8u: goto label_7F07BEE8;
    case 0x7F07BEECu: goto label_7F07BEEC;
    case 0x7F07BEF0u: goto label_7F07BEF0;
    case 0x7F07BEF4u: goto label_7F07BEF4;
    case 0x7F07BEF8u: goto label_7F07BEF8;
    case 0x7F07BEFCu: goto label_7F07BEFC;
    case 0x7F07BF00u: goto label_7F07BF00;
    case 0x7F07BF04u: goto label_7F07BF04;
    case 0x7F07BF08u: goto label_7F07BF08;
    case 0x7F07BF0Cu: goto label_7F07BF0C;
    case 0x7F07BF10u: goto label_7F07BF10;
    case 0x7F07BF14u: goto label_7F07BF14;
    case 0x7F07BF18u: goto label_7F07BF18;
    case 0x7F07BF1Cu: goto label_7F07BF1C;
    case 0x7F07BF20u: goto label_7F07BF20;
    case 0x7F07BF24u: goto label_7F07BF24;
    case 0x7F07BF28u: goto label_7F07BF28;
    case 0x7F07BF2Cu: goto label_7F07BF2C;
    case 0x7F07BF30u: goto label_7F07BF30;
    case 0x7F07BF34u: goto label_7F07BF34;
    case 0x7F07BF38u: goto label_7F07BF38;
    case 0x7F07BF3Cu: goto label_7F07BF3C;
    case 0x7F07BF40u: goto label_7F07BF40;
    case 0x7F07BF44u: goto label_7F07BF44;
    case 0x7F07BF48u: goto label_7F07BF48;
    case 0x7F07BF4Cu: goto label_7F07BF4C;
    case 0x7F07BF50u: goto label_7F07BF50;
    case 0x7F07BF54u: goto label_7F07BF54;
    case 0x7F07BF58u: goto label_7F07BF58;
    case 0x7F07BF5Cu: goto label_7F07BF5C;
    case 0x7F07BF60u: goto label_7F07BF60;
    case 0x7F07BF64u: goto label_7F07BF64;
    case 0x7F07BF68u: goto label_7F07BF68;
    case 0x7F07BF6Cu: goto label_7F07BF6C;
    case 0x7F07BF70u: goto label_7F07BF70;
    case 0x7F07BF74u: goto label_7F07BF74;
    case 0x7F07BF78u: goto label_7F07BF78;
    case 0x7F07BF7Cu: goto label_7F07BF7C;
    case 0x7F07BF80u: goto label_7F07BF80;
    case 0x7F07BF84u: goto label_7F07BF84;
    case 0x7F07BF88u: goto label_7F07BF88;
    case 0x7F07BF8Cu: goto label_7F07BF8C;
    case 0x7F07BF90u: goto label_7F07BF90;
    case 0x7F07BF94u: goto label_7F07BF94;
    case 0x7F07BF98u: goto label_7F07BF98;
    case 0x7F07BF9Cu: goto label_7F07BF9C;
    case 0x7F07BFA0u: goto label_7F07BFA0;
    case 0x7F07BFA4u: goto label_7F07BFA4;
    case 0x7F07BFA8u: goto label_7F07BFA8;
    case 0x7F07BFACu: goto label_7F07BFAC;
    case 0x7F07BFB0u: goto label_7F07BFB0;
    case 0x7F07BFB4u: goto label_7F07BFB4;
    case 0x7F07BFB8u: goto label_7F07BFB8;
    case 0x7F07BFBCu: goto label_7F07BFBC;
    case 0x7F07BFC0u: goto label_7F07BFC0;
    case 0x7F07BFC4u: goto label_7F07BFC4;
    case 0x7F07BFC8u: goto label_7F07BFC8;
    case 0x7F07BFCCu: goto label_7F07BFCC;
    case 0x7F07BFD0u: goto label_7F07BFD0;
    case 0x7F07BFD4u: goto label_7F07BFD4;
    case 0x7F07BFD8u: goto label_7F07BFD8;
    case 0x7F07BFDCu: goto label_7F07BFDC;
    case 0x7F07BFE0u: goto label_7F07BFE0;
    case 0x7F07BFE4u: goto label_7F07BFE4;
    case 0x7F07BFE8u: goto label_7F07BFE8;
    case 0x7F07BFECu: goto label_7F07BFEC;
    case 0x7F07BFF0u: goto label_7F07BFF0;
    case 0x7F07BFF4u: goto label_7F07BFF4;
    case 0x7F07BFF8u: goto label_7F07BFF8;
    case 0x7F07BFFCu: goto label_7F07BFFC;
    case 0x7F07C000u: goto label_7F07C000;
    case 0x7F07C004u: goto label_7F07C004;
    case 0x7F07C008u: goto label_7F07C008;
    case 0x7F07C00Cu: goto label_7F07C00C;
    case 0x7F07C010u: goto label_7F07C010;
    case 0x7F07C014u: goto label_7F07C014;
    case 0x7F07C018u: goto label_7F07C018;
    case 0x7F07C01Cu: goto label_7F07C01C;
    case 0x7F07C020u: goto label_7F07C020;
    case 0x7F07C024u: goto label_7F07C024;
    case 0x7F07C028u: goto label_7F07C028;
    case 0x7F07C02Cu: goto label_7F07C02C;
    case 0x7F07C030u: goto label_7F07C030;
    case 0x7F07C034u: goto label_7F07C034;
    case 0x7F07C038u: goto label_7F07C038;
    case 0x7F07C03Cu: goto label_7F07C03C;
    case 0x7F07C040u: goto label_7F07C040;
    case 0x7F07C044u: goto label_7F07C044;
    case 0x7F07C048u: goto label_7F07C048;
    case 0x7F07C04Cu: goto label_7F07C04C;
    case 0x7F07C050u: goto label_7F07C050;
    case 0x7F07C054u: goto label_7F07C054;
    case 0x7F07C058u: goto label_7F07C058;
    case 0x7F07C05Cu: goto label_7F07C05C;
    case 0x7F07C060u: goto label_7F07C060;
    case 0x7F07C064u: goto label_7F07C064;
    case 0x7F07C068u: goto label_7F07C068;
    case 0x7F07C06Cu: goto label_7F07C06C;
    case 0x7F07C070u: goto label_7F07C070;
    case 0x7F07C074u: goto label_7F07C074;
    case 0x7F07C078u: goto label_7F07C078;
    case 0x7F07C07Cu: goto label_7F07C07C;
    case 0x7F07C080u: goto label_7F07C080;
    case 0x7F07C084u: goto label_7F07C084;
    case 0x7F07C088u: goto label_7F07C088;
    case 0x7F07C08Cu: goto label_7F07C08C;
    case 0x7F07C090u: goto label_7F07C090;
    case 0x7F07C094u: goto label_7F07C094;
    case 0x7F07C098u: goto label_7F07C098;
    case 0x7F07C09Cu: goto label_7F07C09C;
    case 0x7F07C0A0u: goto label_7F07C0A0;
    case 0x7F07C0A4u: goto label_7F07C0A4;
    case 0x7F07C0A8u: goto label_7F07C0A8;
    case 0x7F07C0ACu: goto label_7F07C0AC;
    case 0x7F07C0B0u: goto label_7F07C0B0;
    case 0x7F07C0B4u: goto label_7F07C0B4;
    case 0x7F07C0B8u: goto label_7F07C0B8;
    case 0x7F07C0BCu: goto label_7F07C0BC;
    case 0x7F07C0C0u: goto label_7F07C0C0;
    case 0x7F07C0C4u: goto label_7F07C0C4;
    case 0x7F07C0C8u: goto label_7F07C0C8;
    case 0x7F07C0CCu: goto label_7F07C0CC;
    case 0x7F07C0D0u: goto label_7F07C0D0;
    case 0x7F07C0D4u: goto label_7F07C0D4;
    case 0x7F07C0D8u: goto label_7F07C0D8;
    case 0x7F07C0DCu: goto label_7F07C0DC;
    case 0x7F07C0E0u: goto label_7F07C0E0;
    case 0x7F07C0E4u: goto label_7F07C0E4;
    case 0x7F07C0E8u: goto label_7F07C0E8;
    default: return;
    }
label_7F0780EC:
    ctx->pc = 0x7F0780ECu;
    ctx->downcount -= 1;
    // 7F0780EC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0780F0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0780F0:
    ctx->pc = 0x7F0780F0u;
    ctx->downcount -= 4;
    // 7F0780F0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0780F4:
    ctx->pc = 0x7F0780F4u;
    // 7F0780F4: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F0780F8:
    ctx->pc = 0x7F0780F8u;
    // 7F0780F8: cmpwi   r26, 3
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0780FC:
    ctx->pc = 0x7F0780FCu;
    // 7F0780FC: bc    12, 0, 0x7F0780AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0780ACu;
            return;
        }
    }

label_7F078100:
    ctx->pc = 0x7F078100u;
    ctx->downcount -= 1;
    // 7F078100: b       0x7F07814C
    {
            goto label_7F07814C;
    }

label_7F078104:
    ctx->pc = 0x7F078104u;
    ctx->downcount -= 6;
    // 7F078104: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078108:
    ctx->pc = 0x7F078108u;
    // 7F078108: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07810C:
    ctx->pc = 0x7F07810Cu;
    // 7F07810C: addi    r27, r4, -8072
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-8072);

label_7F078110:
    ctx->pc = 0x7F078110u;
    // 7F078110: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F078114:
    ctx->pc = 0x7F078114u;
    // 7F078114: addi    r28, r3, 12832
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F078118:
    ctx->pc = 0x7F078118u;
    // 7F078118: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F07811C:
    ctx->downcount -= 8;
    // 7F07811C: addi    r3, r29, 960
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(960);

label_7F078120:
    // 7F078120: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F078124:
    // 7F078124: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F078128:
    // 7F078128: or   r8, r28, r28
    {
        ctx->gpr[8] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07812C:
    // 7F07812C: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F078130:
    // 7F078130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F078134:
    // 7F078134: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F078138:
    // 7F078138: bl      0x7F014788
    {
            ctx->lr = 0x7F07813Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F07813C:
    ctx->downcount -= 4;
    // 7F07813C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F078140:
    // 7F078140: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F078144:
    // 7F078144: cmpwi   r25, 3
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F078148:
    // 7F078148: bc    12, 0, 0x7F07811C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07811Cu;
                return;
            }
            goto label_7F07811C;
        }
    }

label_7F07814C:
    ctx->pc = 0x7F07814Cu;
    ctx->downcount -= 178;
    // 7F07814C: lwz     r0, 1576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078150:
    ctx->pc = 0x7F078150u;
    // 7F078150: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F078154:
    ctx->pc = 0x7F078154u;
    // 7F078154: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_7F078158:
    ctx->pc = 0x7F078158u;
    // 7F078158: rlwinm r0, r0, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F07815C:
    ctx->pc = 0x7F07815Cu;
    // 7F07815C: divw   r0, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F078160:
    ctx->pc = 0x7F078160u;
    // 7F078160: divw   r0, r0, r3
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F078164:
    ctx->pc = 0x7F078164u;
    // 7F078164: stw     r0, 1728(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078168:
    ctx->pc = 0x7F078168u;
    // 7F078168: lwz     r0, 1580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07816C:
    ctx->pc = 0x7F07816Cu;
    // 7F07816C: rlwinm r0, r0, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F078170:
    ctx->pc = 0x7F078170u;
    // 7F078170: divw   r0, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F078174:
    ctx->pc = 0x7F078174u;
    // 7F078174: divw   r0, r0, r3
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F078178:
    ctx->pc = 0x7F078178u;
    // 7F078178: stw     r0, 1732(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07817C:
    ctx->pc = 0x7F07817Cu;
    // 7F07817C: lwz     r3, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078180:
    ctx->pc = 0x7F078180u;
    // 7F078180: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078184:
    ctx->pc = 0x7F078184u;
    // 7F078184: lfs     f3, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078184u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F078188:
    ctx->pc = 0x7F078188u;
    // 7F078188: lfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078188u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F07818C:
    ctx->pc = 0x7F07818Cu;
    // 7F07818C: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07818Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078190:
    ctx->pc = 0x7F078190u;
    // 7F078190: lfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078190u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078194:
    ctx->pc = 0x7F078194u;
    // 7F078194: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078194u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F078198:
    ctx->pc = 0x7F078198u;
    // 7F078198: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078198u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F07819C:
    ctx->pc = 0x7F07819Cu;
    // 7F07819C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07819Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0781A0:
    ctx->pc = 0x7F0781A0u;
    // 7F0781A0: bc    4, 1, 0x7F0781A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0781A8;
        }
    }

label_7F0781A4:
    ctx->pc = 0x7F0781A4u;
    ctx->downcount -= 1;
    // 7F0781A4: b       0x7F0781AC
    {
            goto label_7F0781AC;
    }

label_7F0781A8:
    ctx->pc = 0x7F0781A8u;
    ctx->downcount -= 1;
    // 7F0781A8: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0781A8u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_7F0781AC:
    ctx->pc = 0x7F0781ACu;
    ctx->downcount -= 20;
    // 7F0781AC: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0781ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0781B0:
    ctx->pc = 0x7F0781B0u;
    // 7F0781B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0781B4:
    ctx->pc = 0x7F0781B4u;
    // 7F0781B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0781B8:
    ctx->pc = 0x7F0781B8u;
    // 7F0781B8: lfd     f3, -8088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0781B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8088);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0781BC:
    ctx->pc = 0x7F0781BCu;
    // 7F0781BC: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0781C0:
    ctx->pc = 0x7F0781C0u;
    // 7F0781C0: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0781C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0781C4:
    ctx->pc = 0x7F0781C4u;
    // 7F0781C4: lwz     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0781C8:
    ctx->pc = 0x7F0781C8u;
    // 7F0781C8: stw     r3, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0781CC:
    ctx->pc = 0x7F0781CCu;
    // 7F0781CC: lwz     r4, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0781D0:
    ctx->pc = 0x7F0781D0u;
    // 7F0781D0: lwz     r3, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0781D4:
    ctx->pc = 0x7F0781D4u;
    // 7F0781D4: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0781D8:
    ctx->pc = 0x7F0781D8u;
    // 7F0781D8: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0781DC:
    ctx->pc = 0x7F0781DCu;
    // 7F0781DC: stw     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0781E0:
    ctx->pc = 0x7F0781E0u;
    // 7F0781E0: lfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0781E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0781E4:
    ctx->pc = 0x7F0781E4u;
    // 7F0781E4: lfd     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0781E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0781E8:
    ctx->pc = 0x7F0781E8u;
    // 7F0781E8: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0781E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0781EC:
    ctx->pc = 0x7F0781ECu;
    // 7F0781EC: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0781ECu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F0781F0:
    ctx->pc = 0x7F0781F0u;
    // 7F0781F0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0781F0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0781F4:
    ctx->pc = 0x7F0781F4u;
    // 7F0781F4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0781F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0781F8:
    ctx->pc = 0x7F0781F8u;
    // 7F0781F8: bc    4, 1, 0x7F07820C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07820C;
        }
    }

label_7F0781FC:
    ctx->pc = 0x7F0781FCu;
    ctx->downcount -= 4;
    // 7F0781FC: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078200:
    ctx->pc = 0x7F078200u;
    // 7F078200: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078204:
    ctx->pc = 0x7F078204u;
    // 7F078204: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078208:
    ctx->pc = 0x7F078208u;
    // 7F078208: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F078208u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F07820C:
    ctx->pc = 0x7F07820Cu;
    ctx->downcount -= 91;
    // 7F07820C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07820Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F078210:
    ctx->pc = 0x7F078210u;
    // 7F078210: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F078214:
    ctx->pc = 0x7F078214u;
    // 7F078214: lis     r8, 1
    ctx->gpr[8] = ((u32)(s32)(1) << 16);

label_7F078218:
    ctx->pc = 0x7F078218u;
    // 7F078218: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07821C:
    ctx->pc = 0x7F07821Cu;
    // 7F07821C: addi    r6, r3, -8088
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-8088);

label_7F078220:
    ctx->pc = 0x7F078220u;
    // 7F078220: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078224:
    ctx->pc = 0x7F078224u;
    // 7F078224: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F078228:
    ctx->pc = 0x7F078228u;
    // 7F078228: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07822C:
    ctx->pc = 0x7F07822Cu;
    // 7F07822C: addi    r5, r4, -8080
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8080);

label_7F078230:
    ctx->pc = 0x7F078230u;
    // 7F078230: li      r9, 3
    ctx->gpr[9] = (u32)(s32)(3);

label_7F078234:
    ctx->pc = 0x7F078234u;
    // 7F078234: lwz     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078238:
    ctx->pc = 0x7F078238u;
    // 7F078238: addi    r7, r3, -8028
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-8028);

label_7F07823C:
    ctx->pc = 0x7F07823Cu;
    // 7F07823C: addi    r8, r8, -32336
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-32336);

label_7F078240:
    ctx->pc = 0x7F078240u;
    // 7F078240: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078244:
    ctx->pc = 0x7F078244u;
    // 7F078244: lfd     f5, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F078244u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078248:
    ctx->pc = 0x7F078248u;
    // 7F078248: addi    r3, r31, 1820
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1820);

label_7F07824C:
    ctx->pc = 0x7F07824Cu;
    // 7F07824C: stw     r4, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078250:
    ctx->pc = 0x7F078250u;
    // 7F078250: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F078254:
    ctx->pc = 0x7F078254u;
    // 7F078254: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078254u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F078258:
    ctx->pc = 0x7F078258u;
    // 7F078258: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F07825C:
    ctx->pc = 0x7F07825Cu;
    // 7F07825C: lwz     r10, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F078260:
    ctx->pc = 0x7F078260u;
    // 7F078260: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F078264:
    ctx->pc = 0x7F078264u;
    // 7F078264: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078268:
    ctx->pc = 0x7F078268u;
    // 7F078268: divw   r9, r10, r9
    {
        s32 dividend = (s32)ctx->gpr[10];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F07826C:
    ctx->pc = 0x7F07826Cu;
    // 7F07826C: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F07826Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078270:
    ctx->pc = 0x7F078270u;
    // 7F078270: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078274:
    ctx->pc = 0x7F078274u;
    // 7F078274: stw     r9, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F078278:
    ctx->pc = 0x7F078278u;
    // 7F078278: lwz     r0, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07827C:
    ctx->pc = 0x7F07827Cu;
    // 7F07827C: subf   r0, r0, r8
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F078280:
    ctx->pc = 0x7F078280u;
    // 7F078280: stw     r0, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078284:
    ctx->pc = 0x7F078284u;
    // 7F078284: lwz     r0, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078288:
    ctx->pc = 0x7F078288u;
    // 7F078288: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F07828C:
    ctx->pc = 0x7F07828Cu;
    // 7F07828C: stfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07828Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078290:
    ctx->pc = 0x7F078290u;
    // 7F078290: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F078294:
    ctx->pc = 0x7F078294u;
    // 7F078294: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078298:
    ctx->pc = 0x7F078298u;
    // 7F078298: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07829C:
    ctx->pc = 0x7F07829Cu;
    // 7F07829C: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07829Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0782A0:
    ctx->pc = 0x7F0782A0u;
    // 7F0782A0: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0782A4:
    ctx->pc = 0x7F0782A4u;
    // 7F0782A4: lfd     f2, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0782A8:
    ctx->pc = 0x7F0782A8u;
    // 7F0782A8: fsubs   f4, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0782A8u)) return;
    ppc_fsubs(ctx, 4, 0, 5);

label_7F0782AC:
    ctx->pc = 0x7F0782ACu;
    // 7F0782AC: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0782B0:
    ctx->pc = 0x7F0782B0u;
    // 7F0782B0: fsubs   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0782B0u)) return;
    ppc_fsubs(ctx, 2, 2, 5);

label_7F0782B4:
    ctx->pc = 0x7F0782B4u;
    // 7F0782B4: stfs     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0782B8:
    ctx->pc = 0x7F0782B8u;
    // 7F0782B8: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0782B8u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0782BC:
    ctx->pc = 0x7F0782BCu;
    // 7F0782BC: stfs     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0782C0:
    ctx->pc = 0x7F0782C0u;
    // 7F0782C0: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0782C4:
    ctx->pc = 0x7F0782C4u;
    // 7F0782C4: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0782C8:
    ctx->pc = 0x7F0782C8u;
    // 7F0782C8: stfs     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0782CC:
    ctx->pc = 0x7F0782CCu;
    // 7F0782CC: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0782D0:
    ctx->pc = 0x7F0782D0u;
    // 7F0782D0: stfs     f3, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0782D4:
    ctx->pc = 0x7F0782D4u;
    // 7F0782D4: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0782D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0782D8:
    ctx->pc = 0x7F0782D8u;
    // 7F0782D8: bl      0x7F0773B8
    {
            ctx->lr = 0x7F0782DCu;
            ctx->pc = 0x7F0773B8u;
            return;
    }

label_7F0782DC:
    ctx->pc = 0x7F0782DCu;
    ctx->downcount -= 37;
    // 7F0782DC: lwz     r3, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0782E0:
    ctx->pc = 0x7F0782E0u;
    // 7F0782E0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0782E4:
    ctx->pc = 0x7F0782E4u;
    // 7F0782E4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0782E8:
    ctx->pc = 0x7F0782E8u;
    // 7F0782E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0782EC:
    ctx->pc = 0x7F0782ECu;
    // 7F0782EC: xoris   r8, r3, 0x8000
    ctx->gpr[8] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0782F0:
    ctx->pc = 0x7F0782F0u;
    // 7F0782F0: lfd     f5, -8088(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0782F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8088);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0782F4:
    ctx->pc = 0x7F0782F4u;
    // 7F0782F4: stw     r8, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0782F8:
    ctx->pc = 0x7F0782F8u;
    // 7F0782F8: addi    r6, r4, -8080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-8080);

label_7F0782FC:
    ctx->pc = 0x7F0782FCu;
    // 7F0782FC: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0782FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F078300:
    ctx->pc = 0x7F078300u;
    // 7F078300: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078304:
    ctx->pc = 0x7F078304u;
    // 7F078304: stw     r0, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078308:
    ctx->pc = 0x7F078308u;
    // 7F078308: addi    r7, r3, -8028
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-8028);

label_7F07830C:
    ctx->pc = 0x7F07830Cu;
    // 7F07830C: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F07830Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078310:
    ctx->pc = 0x7F078310u;
    // 7F078310: addi    r3, r31, 1836
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1836);

label_7F078314:
    ctx->pc = 0x7F078314u;
    // 7F078314: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078314u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078318:
    ctx->pc = 0x7F078318u;
    // 7F078318: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F07831C:
    ctx->pc = 0x7F07831Cu;
    // 7F07831C: stw     r8, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078320:
    ctx->pc = 0x7F078320u;
    // 7F078320: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F078324:
    ctx->pc = 0x7F078324u;
    // 7F078324: fsubs   f4, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F078324u)) return;
    ppc_fsubs(ctx, 4, 0, 5);

label_7F078328:
    ctx->pc = 0x7F078328u;
    // 7F078328: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07832C:
    ctx->pc = 0x7F07832Cu;
    // 7F07832C: stw     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078330:
    ctx->pc = 0x7F078330u;
    // 7F078330: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078330u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078334:
    ctx->pc = 0x7F078334u;
    // 7F078334: stw     r8, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078338:
    ctx->pc = 0x7F078338u;
    // 7F078338: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F078338u)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_7F07833C:
    ctx->pc = 0x7F07833Cu;
    // 7F07833C: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078340:
    ctx->pc = 0x7F078340u;
    // 7F078340: lfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078344:
    ctx->pc = 0x7F078344u;
    // 7F078344: stfs     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F078348:
    ctx->pc = 0x7F078348u;
    // 7F078348: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F078348u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F07834C:
    ctx->pc = 0x7F07834Cu;
    // 7F07834C: stfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07834Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078350:
    ctx->pc = 0x7F078350u;
    // 7F078350: stfs     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078354:
    ctx->pc = 0x7F078354u;
    // 7F078354: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F078358:
    ctx->pc = 0x7F078358u;
    // 7F078358: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07835C:
    ctx->pc = 0x7F07835Cu;
    // 7F07835C: stfs     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07835Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078360:
    ctx->pc = 0x7F078360u;
    // 7F078360: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078364:
    ctx->pc = 0x7F078364u;
    // 7F078364: stfs     f3, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078368:
    ctx->pc = 0x7F078368u;
    // 7F078368: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07836C:
    ctx->pc = 0x7F07836Cu;
    // 7F07836C: bl      0x7F0773B8
    {
            ctx->lr = 0x7F078370u;
            ctx->pc = 0x7F0773B8u;
            return;
    }

label_7F078370:
    ctx->pc = 0x7F078370u;
    ctx->downcount -= 39;
    // 7F078370: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078374:
    ctx->pc = 0x7F078374u;
    // 7F078374: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F078378:
    ctx->pc = 0x7F078378u;
    // 7F078378: addi    r4, r3, -8080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8080);

label_7F07837C:
    ctx->pc = 0x7F07837Cu;
    // 7F07837C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078380:
    ctx->pc = 0x7F078380u;
    // 7F078380: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078380u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F078384:
    ctx->pc = 0x7F078384u;
    // 7F078384: addi    r5, r3, -8088
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8088);

label_7F078388:
    ctx->pc = 0x7F078388u;
    // 7F078388: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07838C:
    ctx->pc = 0x7F07838Cu;
    // 7F07838C: stw     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078390:
    ctx->pc = 0x7F078390u;
    // 7F078390: addi    r4, r3, -8028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8028);

label_7F078394:
    ctx->pc = 0x7F078394u;
    // 7F078394: lfd     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078394u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078398:
    ctx->pc = 0x7F078398u;
    // 7F078398: stfs     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F07839C:
    ctx->pc = 0x7F07839Cu;
    // 7F07839C: addi    r3, r31, 1852
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1852);

label_7F0783A0:
    ctx->pc = 0x7F0783A0u;
    // 7F0783A0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0783A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0783A4:
    ctx->pc = 0x7F0783A4u;
    // 7F0783A4: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0783A8:
    ctx->pc = 0x7F0783A8u;
    // 7F0783A8: stfs     f5, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F0783AC:
    ctx->pc = 0x7F0783ACu;
    // 7F0783AC: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0783B0:
    ctx->pc = 0x7F0783B0u;
    // 7F0783B0: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0783B4:
    ctx->pc = 0x7F0783B4u;
    // 7F0783B4: lwz     r7, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0783B8:
    ctx->pc = 0x7F0783B8u;
    // 7F0783B8: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0783BC:
    ctx->pc = 0x7F0783BCu;
    // 7F0783BC: neg  r7, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F0783C0:
    ctx->pc = 0x7F0783C0u;
    // 7F0783C0: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F0783C4:
    ctx->pc = 0x7F0783C4u;
    // 7F0783C4: stw     r0, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0783C8:
    ctx->pc = 0x7F0783C8u;
    // 7F0783C8: stw     r7, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0783CC:
    ctx->pc = 0x7F0783CCu;
    // 7F0783CC: stw     r7, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0783D0:
    ctx->pc = 0x7F0783D0u;
    // 7F0783D0: lfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0783D4:
    ctx->pc = 0x7F0783D4u;
    // 7F0783D4: stw     r7, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0783D8:
    ctx->pc = 0x7F0783D8u;
    // 7F0783D8: lfd     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0783DC:
    ctx->pc = 0x7F0783DCu;
    // 7F0783DC: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0783DCu)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_7F0783E0:
    ctx->pc = 0x7F0783E0u;
    // 7F0783E0: lfd     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0783E4:
    ctx->pc = 0x7F0783E4u;
    // 7F0783E4: fsubs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0783E4u)) return;
    ppc_fsubs(ctx, 1, 1, 4);

label_7F0783E8:
    ctx->pc = 0x7F0783E8u;
    // 7F0783E8: stfs     f5, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F0783EC:
    ctx->pc = 0x7F0783ECu;
    // 7F0783EC: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0783ECu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F0783F0:
    ctx->pc = 0x7F0783F0u;
    // 7F0783F0: stfs     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0783F4:
    ctx->pc = 0x7F0783F4u;
    // 7F0783F4: stfs     f2, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0783F8:
    ctx->pc = 0x7F0783F8u;
    // 7F0783F8: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0783FC:
    ctx->pc = 0x7F0783FCu;
    // 7F0783FC: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0783FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F078400:
    ctx->pc = 0x7F078400u;
    // 7F078400: stfs     f5, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F078404:
    ctx->pc = 0x7F078404u;
    // 7F078404: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078408:
    ctx->pc = 0x7F078408u;
    // 7F078408: bl      0x7F0773B8
    {
            ctx->lr = 0x7F07840Cu;
            ctx->pc = 0x7F0773B8u;
            return;
    }

label_7F07840C:
    ctx->pc = 0x7F07840Cu;
    ctx->downcount -= 38;
    // 7F07840C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078410:
    ctx->pc = 0x7F078410u;
    // 7F078410: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F078414:
    ctx->pc = 0x7F078414u;
    // 7F078414: addi    r4, r3, -8080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8080);

label_7F078418:
    ctx->pc = 0x7F078418u;
    // 7F078418: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07841C:
    ctx->pc = 0x7F07841Cu;
    // 7F07841C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07841Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F078420:
    ctx->pc = 0x7F078420u;
    // 7F078420: addi    r5, r3, -8088
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8088);

label_7F078424:
    ctx->pc = 0x7F078424u;
    // 7F078424: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078428:
    ctx->pc = 0x7F078428u;
    // 7F078428: stw     r0, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07842C:
    ctx->pc = 0x7F07842Cu;
    // 7F07842C: addi    r4, r3, -8028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8028);

label_7F078430:
    ctx->pc = 0x7F078430u;
    // 7F078430: lfd     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078430u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078434:
    ctx->pc = 0x7F078434u;
    // 7F078434: stfs     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F078438:
    ctx->pc = 0x7F078438u;
    // 7F078438: addi    r3, r31, 1868
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1868);

label_7F07843C:
    ctx->pc = 0x7F07843Cu;
    // 7F07843C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07843Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078440:
    ctx->pc = 0x7F078440u;
    // 7F078440: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F078444:
    ctx->pc = 0x7F078444u;
    // 7F078444: stfs     f5, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078444u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F078448:
    ctx->pc = 0x7F078448u;
    // 7F078448: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F07844C:
    ctx->pc = 0x7F07844Cu;
    // 7F07844C: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F078450:
    ctx->pc = 0x7F078450u;
    // 7F078450: lwz     r7, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F078454:
    ctx->pc = 0x7F078454u;
    // 7F078454: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078458:
    ctx->pc = 0x7F078458u;
    // 7F078458: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F07845C:
    ctx->pc = 0x7F07845Cu;
    // 7F07845C: stw     r7, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F078460:
    ctx->pc = 0x7F078460u;
    // 7F078460: stw     r7, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F078464:
    ctx->pc = 0x7F078464u;
    // 7F078464: lfd     f1, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078464u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078468:
    ctx->pc = 0x7F078468u;
    // 7F078468: lfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07846C:
    ctx->pc = 0x7F07846Cu;
    // 7F07846C: fsubs   f3, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F07846Cu)) return;
    ppc_fsubs(ctx, 3, 1, 4);

label_7F078470:
    ctx->pc = 0x7F078470u;
    // 7F078470: stw     r7, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F078474:
    ctx->pc = 0x7F078474u;
    // 7F078474: fsubs   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F078474u)) return;
    ppc_fsubs(ctx, 1, 0, 4);

label_7F078478:
    ctx->pc = 0x7F078478u;
    // 7F078478: stw     r0, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07847C:
    ctx->pc = 0x7F07847Cu;
    // 7F07847C: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07847Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078480:
    ctx->pc = 0x7F078480u;
    // 7F078480: stfs     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F078484:
    ctx->pc = 0x7F078484u;
    // 7F078484: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F078484u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F078488:
    ctx->pc = 0x7F078488u;
    // 7F078488: stfs     f5, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F07848C:
    ctx->pc = 0x7F07848Cu;
    // 7F07848C: stfs     f2, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07848Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F078490:
    ctx->pc = 0x7F078490u;
    // 7F078490: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078490u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078494:
    ctx->pc = 0x7F078494u;
    // 7F078494: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F078498:
    ctx->pc = 0x7F078498u;
    // 7F078498: stfs     f5, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F07849C:
    ctx->pc = 0x7F07849Cu;
    // 7F07849C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07849Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0784A0:
    ctx->pc = 0x7F0784A0u;
    // 7F0784A0: bl      0x7F0773B8
    {
            ctx->lr = 0x7F0784A4u;
            ctx->pc = 0x7F0773B8u;
            return;
    }

label_7F0784A4:
    ctx->pc = 0x7F0784A4u;
    ctx->downcount -= 2;
    // 7F0784A4: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F0784A8:
    ctx->pc = 0x7F0784A8u;
    // 7F0784A8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0784ACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0784AC:
    ctx->pc = 0x7F0784ACu;
    ctx->downcount -= 2;
    // 7F0784AC: cmplwi  r3, 0x0000
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

label_7F0784B0:
    ctx->pc = 0x7F0784B0u;
    // 7F0784B0: bc    12, 2, 0x7F0784BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0784BC;
        }
    }

label_7F0784B4:
    ctx->pc = 0x7F0784B4u;
    ctx->downcount -= 2;
    // 7F0784B4: addi    r4, r31, 2716
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2716);

label_7F0784B8:
    ctx->pc = 0x7F0784B8u;
    // 7F0784B8: bl      0x7F077370
    {
            ctx->lr = 0x7F0784BCu;
            ctx->pc = 0x7F077370u;
            return;
    }

label_7F0784BC:
    ctx->pc = 0x7F0784BCu;
    ctx->downcount -= 2;
    // 7F0784BC: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F0784C0:
    ctx->pc = 0x7F0784C0u;
    // 7F0784C0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0784C4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0784C4:
    ctx->pc = 0x7F0784C4u;
    ctx->downcount -= 2;
    // 7F0784C4: cmplwi  r3, 0x0000
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

label_7F0784C8:
    ctx->pc = 0x7F0784C8u;
    // 7F0784C8: bc    12, 2, 0x7F0784D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0784D8;
        }
    }

label_7F0784CC:
    ctx->pc = 0x7F0784CCu;
    ctx->downcount -= 1;
    // 7F0784CC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0784D0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0784D0:
    ctx->pc = 0x7F0784D0u;
    ctx->downcount -= 2;
    // 7F0784D0: stw     r3, 2952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2952);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0784D4:
    ctx->pc = 0x7F0784D4u;
    // 7F0784D4: b       0x7F0784E0
    {
            goto label_7F0784E0;
    }

label_7F0784D8:
    ctx->pc = 0x7F0784D8u;
    ctx->downcount -= 2;
    // 7F0784D8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0784DC:
    ctx->pc = 0x7F0784DCu;
    // 7F0784DC: stw     r0, 2952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0784E0:
    ctx->pc = 0x7F0784E0u;
    ctx->downcount -= 2;
    // 7F0784E0: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F0784E4:
    ctx->pc = 0x7F0784E4u;
    // 7F0784E4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0784E8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0784E8:
    ctx->pc = 0x7F0784E8u;
    ctx->downcount -= 2;
    // 7F0784E8: cmplwi  r3, 0x0000
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

label_7F0784EC:
    ctx->pc = 0x7F0784ECu;
    // 7F0784EC: bc    12, 2, 0x7F0784FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0784FC;
        }
    }

label_7F0784F0:
    ctx->pc = 0x7F0784F0u;
    ctx->downcount -= 1;
    // 7F0784F0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0784F4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0784F4:
    ctx->pc = 0x7F0784F4u;
    ctx->downcount -= 2;
    // 7F0784F4: stw     r3, 2956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2956);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0784F8:
    ctx->pc = 0x7F0784F8u;
    // 7F0784F8: b       0x7F078504
    {
            goto label_7F078504;
    }

label_7F0784FC:
    ctx->pc = 0x7F0784FCu;
    ctx->downcount -= 2;
    // 7F0784FC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F078500:
    ctx->pc = 0x7F078500u;
    // 7F078500: stw     r0, 2956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078504:
    ctx->pc = 0x7F078504u;
    ctx->downcount -= 49;
    // 7F078504: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F078508:
    ctx->pc = 0x7F078508u;
    // 7F078508: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07850C:
    ctx->pc = 0x7F07850Cu;
    // 7F07850C: stw     r8, 2912(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2912);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078510:
    ctx->pc = 0x7F078510u;
    // 7F078510: li      r5, 1536
    ctx->gpr[5] = (u32)(s32)(1536);

label_7F078514:
    ctx->pc = 0x7F078514u;
    // 7F078514: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F078518:
    ctx->pc = 0x7F078518u;
    // 7F078518: li      r4, 10800
    ctx->gpr[4] = (u32)(s32)(10800);

label_7F07851C:
    ctx->pc = 0x7F07851Cu;
    // 7F07851C: stw     r8, 2916(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2916);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078520:
    ctx->pc = 0x7F078520u;
    // 7F078520: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F078524:
    ctx->pc = 0x7F078524u;
    // 7F078524: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F078528:
    ctx->pc = 0x7F078528u;
    // 7F078528: stw     r8, 2112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2112);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07852C:
    ctx->pc = 0x7F07852Cu;
    // 7F07852C: stw     r8, 2116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2116);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078530:
    ctx->pc = 0x7F078530u;
    // 7F078530: stw     r8, 2140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2140);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078534:
    ctx->pc = 0x7F078534u;
    // 7F078534: stw     r8, 2144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2144);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078538:
    ctx->pc = 0x7F078538u;
    // 7F078538: stw     r8, 2148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2148);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07853C:
    ctx->pc = 0x7F07853Cu;
    // 7F07853C: stw     r8, 2152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2152);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078540:
    ctx->pc = 0x7F078540u;
    // 7F078540: stw     r8, 2156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078544:
    ctx->pc = 0x7F078544u;
    // 7F078544: stw     r5, 2160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F078548:
    ctx->pc = 0x7F078548u;
    // 7F078548: stw     r8, 2164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2164);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07854C:
    ctx->pc = 0x7F07854Cu;
    // 7F07854C: stw     r8, 2128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2128);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078550:
    ctx->pc = 0x7F078550u;
    // 7F078550: stw     r8, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078554:
    ctx->pc = 0x7F078554u;
    // 7F078554: stw     r8, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078558:
    ctx->pc = 0x7F078558u;
    // 7F078558: stw     r8, 2276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2276);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07855C:
    ctx->pc = 0x7F07855Cu;
    // 7F07855C: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F078560:
    ctx->pc = 0x7F078560u;
    // 7F078560: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078564:
    ctx->pc = 0x7F078564u;
    // 7F078564: stw     r6, 2248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2248);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078568:
    ctx->pc = 0x7F078568u;
    // 7F078568: stw     r5, 2252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2252);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07856C:
    ctx->pc = 0x7F07856Cu;
    // 7F07856C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F078570:
    ctx->pc = 0x7F078570u;
    // 7F078570: lwz     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078574:
    ctx->pc = 0x7F078574u;
    // 7F078574: stw     r6, 2256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2256);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078578:
    ctx->pc = 0x7F078578u;
    // 7F078578: stw     r5, 2260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07857C:
    ctx->pc = 0x7F07857Cu;
    // 7F07857C: stw     r8, 1808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1808);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078580:
    ctx->pc = 0x7F078580u;
    // 7F078580: stw     r8, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078584:
    ctx->pc = 0x7F078584u;
    // 7F078584: stw     r8, 2308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2308);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078588:
    ctx->pc = 0x7F078588u;
    // 7F078588: stw     r8, 5452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5452);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07858C:
    ctx->pc = 0x7F07858Cu;
    // 7F07858C: stw     r8, 2924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2924);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078590:
    ctx->pc = 0x7F078590u;
    // 7F078590: stw     r8, 2928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2928);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078594:
    ctx->pc = 0x7F078594u;
    // 7F078594: stw     r8, 2932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2932);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F078598:
    ctx->pc = 0x7F078598u;
    // 7F078598: stw     r4, 2968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2968);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F07859C:
    ctx->pc = 0x7F07859Cu;
    // 7F07859C: stw     r8, 2972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2972);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785A0:
    ctx->pc = 0x7F0785A0u;
    // 7F0785A0: stw     r8, 3052(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3052);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785A4:
    ctx->pc = 0x7F0785A4u;
    // 7F0785A4: stw     r8, 2936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2936);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785A8:
    ctx->pc = 0x7F0785A8u;
    // 7F0785A8: stw     r8, 2940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2940);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785AC:
    ctx->pc = 0x7F0785ACu;
    // 7F0785AC: stw     r8, 3060(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3060);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785B0:
    ctx->pc = 0x7F0785B0u;
    // 7F0785B0: stw     r8, 2944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2944);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785B4:
    ctx->pc = 0x7F0785B4u;
    // 7F0785B4: stw     r8, 3064(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3064);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785B8:
    ctx->pc = 0x7F0785B8u;
    // 7F0785B8: stw     r0, 3068(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0785BC:
    ctx->pc = 0x7F0785BCu;
    // 7F0785BC: stw     r8, 3080(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3080);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785C0:
    ctx->pc = 0x7F0785C0u;
    // 7F0785C0: stw     r8, 3084(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3084);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0785C4:
    ctx->pc = 0x7F0785C4u;
    // 7F0785C4: bl      0x7F02A538
    {
            ctx->lr = 0x7F0785C8u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F0785C8:
    ctx->pc = 0x7F0785C8u;
    ctx->downcount -= 12;
    // 7F0785C8: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F0785CC:
    ctx->pc = 0x7F0785CCu;
    // 7F0785CC: addi    r24, r31, 2312
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(2312);

label_7F0785D0:
    ctx->pc = 0x7F0785D0u;
    // 7F0785D0: stw     r0, 3088(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3088);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0785D4:
    ctx->pc = 0x7F0785D4u;
    // 7F0785D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0785D8:
    ctx->pc = 0x7F0785D8u;
    // 7F0785D8: lis     r4, 13
    ctx->gpr[4] = ((u32)(s32)(13) << 16);

label_7F0785DC:
    ctx->pc = 0x7F0785DCu;
    // 7F0785DC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0785E0:
    ctx->pc = 0x7F0785E0u;
    // 7F0785E0: stw     r0, 3092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3092);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0785E4:
    ctx->pc = 0x7F0785E4u;
    // 7F0785E4: addi    r4, r4, -6614
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6614);

label_7F0785E8:
    ctx->pc = 0x7F0785E8u;
    // 7F0785E8: li      r5, 274
    ctx->gpr[5] = (u32)(s32)(274);

label_7F0785EC:
    ctx->pc = 0x7F0785ECu;
    // 7F0785EC: stw     r0, 3096(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0785F0:
    ctx->pc = 0x7F0785F0u;
    // 7F0785F0: stw     r0, 3100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0785F4:
    ctx->pc = 0x7F0785F4u;
    // 7F0785F4: bl      0x7F04272C
    {
            ctx->lr = 0x7F0785F8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0785F8:
    ctx->pc = 0x7F0785F8u;
    ctx->downcount -= 3;
    // 7F0785F8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0785FC:
    ctx->pc = 0x7F0785FCu;
    // 7F0785FC: addi    r4, r31, 5312
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5312);

label_7F078600:
    ctx->pc = 0x7F078600u;
    // 7F078600: bl      0x7F042C1C
    {
            ctx->lr = 0x7F078604u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F078604:
    ctx->pc = 0x7F078604u;
    ctx->downcount -= 3;
    // 7F078604: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F078608:
    ctx->pc = 0x7F078608u;
    // 7F078608: addi    r4, r31, 2444
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2444);

label_7F07860C:
    ctx->pc = 0x7F07860Cu;
    // 7F07860C: bl      0x7F042B20
    {
            ctx->lr = 0x7F078610u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F078610:
    ctx->pc = 0x7F078610u;
    ctx->downcount -= 9;
    // 7F078610: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F078614:
    ctx->pc = 0x7F078614u;
    // 7F078614: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F078618:
    ctx->pc = 0x7F078618u;
    // 7F078618: addi    r7, r4, 20848
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(20848);

label_7F07861C:
    ctx->pc = 0x7F07861Cu;
    // 7F07861C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F078620:
    ctx->pc = 0x7F078620u;
    // 7F078620: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F078624:
    ctx->pc = 0x7F078624u;
    // 7F078624: addi    r3, r31, 1888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1888);

label_7F078628:
    ctx->pc = 0x7F078628u;
    // 7F078628: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F07862C:
    ctx->pc = 0x7F07862Cu;
    // 7F07862C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F078630:
    ctx->pc = 0x7F078630u;
    // 7F078630: bl      0x7F014788
    {
            ctx->lr = 0x7F078634u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F078634:
    ctx->pc = 0x7F078634u;
    ctx->downcount -= 6;
    // 7F078634: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F078638:
    ctx->pc = 0x7F078638u;
    // 7F078638: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07863C:
    ctx->pc = 0x7F07863Cu;
    // 7F07863C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078640:
    ctx->pc = 0x7F078640u;
    // 7F078640: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F078644:
    ctx->pc = 0x7F078644u;
    // 7F078644: cmpwi   r0, 30
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

label_7F078648:
    ctx->pc = 0x7F078648u;
    // 7F078648: bc    12, 2, 0x7F0786A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0786A4;
        }
    }

label_7F07864C:
    ctx->pc = 0x7F07864Cu;
    ctx->downcount -= 1;
    // 7F07864C: bc    4, 0, 0x7F078668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078668;
        }
    }

label_7F078650:
    ctx->pc = 0x7F078650u;
    ctx->downcount -= 2;
    // 7F078650: cmpwi   r0, 20
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

label_7F078654:
    ctx->pc = 0x7F078654u;
    // 7F078654: bc    12, 2, 0x7F07867C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07867C;
        }
    }

label_7F078658:
    ctx->pc = 0x7F078658u;
    ctx->downcount -= 1;
    // 7F078658: bc    4, 0, 0x7F07867C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07867C;
        }
    }

label_7F07865C:
    ctx->pc = 0x7F07865Cu;
    ctx->downcount -= 2;
    // 7F07865C: cmpwi   r0, 10
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

label_7F078660:
    ctx->pc = 0x7F078660u;
    // 7F078660: bc    12, 2, 0x7F07867C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07867C;
        }
    }

label_7F078664:
    ctx->pc = 0x7F078664u;
    ctx->downcount -= 1;
    // 7F078664: b       0x7F07867C
    {
            goto label_7F07867C;
    }

label_7F078668:
    ctx->pc = 0x7F078668u;
    ctx->downcount -= 2;
    // 7F078668: cmpwi   r0, 50
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

label_7F07866C:
    ctx->pc = 0x7F07866Cu;
    // 7F07866C: bc    12, 2, 0x7F0786F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0786F4;
        }
    }

label_7F078670:
    ctx->pc = 0x7F078670u;
    ctx->downcount -= 1;
    // 7F078670: bc    4, 0, 0x7F07867C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07867C;
        }
    }

label_7F078674:
    ctx->pc = 0x7F078674u;
    ctx->downcount -= 2;
    // 7F078674: cmpwi   r0, 40
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

label_7F078678:
    ctx->pc = 0x7F078678u;
    // 7F078678: bc    12, 2, 0x7F0786CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0786CC;
        }
    }

label_7F07867C:
    ctx->pc = 0x7F07867Cu;
    ctx->downcount -= 9;
    // 7F07867C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F078680:
    ctx->pc = 0x7F078680u;
    // 7F078680: addi    r3, r31, 1888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1888);

label_7F078684:
    ctx->pc = 0x7F078684u;
    // 7F078684: addi    r9, r4, 20864
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(20864);

label_7F078688:
    ctx->pc = 0x7F078688u;
    // 7F078688: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F07868C:
    ctx->pc = 0x7F07868Cu;
    // 7F07868C: addi    r4, r31, 2080
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2080);

label_7F078690:
    ctx->pc = 0x7F078690u;
    // 7F078690: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_7F078694:
    ctx->pc = 0x7F078694u;
    // 7F078694: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F078698:
    ctx->pc = 0x7F078698u;
    // 7F078698: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07869C:
    ctx->pc = 0x7F07869Cu;
    // 7F07869C: bl      0x7F014B78
    {
            ctx->lr = 0x7F0786A0u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0786A0:
    ctx->pc = 0x7F0786A0u;
    ctx->downcount -= 1;
    // 7F0786A0: b       0x7F078718
    {
            goto label_7F078718;
    }

label_7F0786A4:
    ctx->pc = 0x7F0786A4u;
    ctx->downcount -= 9;
    // 7F0786A4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0786A8:
    ctx->pc = 0x7F0786A8u;
    // 7F0786A8: addi    r3, r31, 1888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1888);

label_7F0786AC:
    ctx->pc = 0x7F0786ACu;
    // 7F0786AC: addi    r9, r4, 20864
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(20864);

label_7F0786B0:
    ctx->pc = 0x7F0786B0u;
    // 7F0786B0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0786B4:
    ctx->pc = 0x7F0786B4u;
    // 7F0786B4: addi    r4, r31, 2080
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2080);

label_7F0786B8:
    ctx->pc = 0x7F0786B8u;
    // 7F0786B8: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F0786BC:
    ctx->pc = 0x7F0786BCu;
    // 7F0786BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0786C0:
    ctx->pc = 0x7F0786C0u;
    // 7F0786C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0786C4:
    ctx->pc = 0x7F0786C4u;
    // 7F0786C4: bl      0x7F014B78
    {
            ctx->lr = 0x7F0786C8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0786C8:
    ctx->pc = 0x7F0786C8u;
    ctx->downcount -= 1;
    // 7F0786C8: b       0x7F078718
    {
            goto label_7F078718;
    }

label_7F0786CC:
    ctx->pc = 0x7F0786CCu;
    ctx->downcount -= 9;
    // 7F0786CC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0786D0:
    ctx->pc = 0x7F0786D0u;
    // 7F0786D0: addi    r3, r31, 1888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1888);

label_7F0786D4:
    ctx->pc = 0x7F0786D4u;
    // 7F0786D4: addi    r9, r4, 20864
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(20864);

label_7F0786D8:
    ctx->pc = 0x7F0786D8u;
    // 7F0786D8: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0786DC:
    ctx->pc = 0x7F0786DCu;
    // 7F0786DC: addi    r4, r31, 2080
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2080);

label_7F0786E0:
    ctx->pc = 0x7F0786E0u;
    // 7F0786E0: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_7F0786E4:
    ctx->pc = 0x7F0786E4u;
    // 7F0786E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0786E8:
    ctx->pc = 0x7F0786E8u;
    // 7F0786E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0786EC:
    ctx->pc = 0x7F0786ECu;
    // 7F0786EC: bl      0x7F014B78
    {
            ctx->lr = 0x7F0786F0u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0786F0:
    ctx->pc = 0x7F0786F0u;
    ctx->downcount -= 1;
    // 7F0786F0: b       0x7F078718
    {
            goto label_7F078718;
    }

label_7F0786F4:
    ctx->pc = 0x7F0786F4u;
    ctx->downcount -= 9;
    // 7F0786F4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0786F8:
    ctx->pc = 0x7F0786F8u;
    // 7F0786F8: addi    r3, r31, 1888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1888);

label_7F0786FC:
    ctx->pc = 0x7F0786FCu;
    // 7F0786FC: addi    r9, r4, 20864
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(20864);

label_7F078700:
    ctx->pc = 0x7F078700u;
    // 7F078700: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F078704:
    ctx->pc = 0x7F078704u;
    // 7F078704: addi    r4, r31, 2080
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2080);

label_7F078708:
    ctx->pc = 0x7F078708u;
    // 7F078708: li      r6, 2048
    ctx->gpr[6] = (u32)(s32)(2048);

label_7F07870C:
    ctx->pc = 0x7F07870Cu;
    // 7F07870C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F078710:
    ctx->pc = 0x7F078710u;
    // 7F078710: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F078714:
    ctx->pc = 0x7F078714u;
    // 7F078714: bl      0x7F014B78
    {
            ctx->lr = 0x7F078718u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F078718:
    ctx->pc = 0x7F078718u;
    ctx->downcount -= 6;
    // 7F078718: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07871C:
    ctx->pc = 0x7F07871Cu;
    // 7F07871C: lis     r3, 199
    ctx->gpr[3] = ((u32)(s32)(199) << 16);

label_7F078720:
    ctx->pc = 0x7F078720u;
    // 7F078720: stw     r0, 5496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078724:
    ctx->pc = 0x7F078724u;
    // 7F078724: addi    r3, r3, 28550
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28550);

label_7F078728:
    ctx->pc = 0x7F078728u;
    // 7F078728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07872C:
    ctx->pc = 0x7F07872Cu;
    // 7F07872C: bl      0x7F024B28
    {
            ctx->lr = 0x7F078730u;
            ctx->pc = 0x7F024B28u;
            return;
    }

label_7F078730:
    ctx->pc = 0x7F078730u;
    ctx->downcount -= 4;
    // 7F078730: stw     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078734:
    ctx->pc = 0x7F078734u;
    // 7F078734: lwz     r0, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078738:
    ctx->pc = 0x7F078738u;
    // 7F078738: cmplwi  r0, 0x0000
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

label_7F07873C:
    ctx->pc = 0x7F07873Cu;
    // 7F07873C: bc    4, 2, 0x7F07875C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07875C;
        }
    }

label_7F078740:
    ctx->pc = 0x7F078740u;
    ctx->downcount -= 6;
    // 7F078740: lis     r3, 199
    ctx->gpr[3] = ((u32)(s32)(199) << 16);

label_7F078744:
    ctx->pc = 0x7F078744u;
    // 7F078744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F078748:
    ctx->pc = 0x7F078748u;
    // 7F078748: addi    r3, r3, 28550
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28550);

label_7F07874C:
    ctx->pc = 0x7F07874Cu;
    // 7F07874C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F078750:
    ctx->pc = 0x7F078750u;
    // 7F078750: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F078754:
    ctx->pc = 0x7F078754u;
    // 7F078754: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F078758u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F078758:
    ctx->pc = 0x7F078758u;
    ctx->downcount -= 1;
    // 7F078758: stw     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07875C:
    ctx->pc = 0x7F07875Cu;
    ctx->downcount -= 4;
    // 7F07875C: lwz     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078760:
    ctx->pc = 0x7F078760u;
    // 7F078760: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F078764:
    ctx->pc = 0x7F078764u;
    // 7F078764: li      r5, 1026
    ctx->gpr[5] = (u32)(s32)(1026);

label_7F078768:
    ctx->pc = 0x7F078768u;
    // 7F078768: bl      0x7F026EBC
    {
            ctx->lr = 0x7F07876Cu;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F07876C:
    ctx->pc = 0x7F07876Cu;
    ctx->downcount -= 3;
    // 7F07876C: lwz     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078770:
    ctx->pc = 0x7F078770u;
    // 7F078770: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F078774:
    ctx->pc = 0x7F078774u;
    // 7F078774: bl      0x7F026F4C
    {
            ctx->lr = 0x7F078778u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F078778:
    ctx->pc = 0x7F078778u;
    ctx->downcount -= 4;
    // 7F078778: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07877C:
    ctx->pc = 0x7F07877Cu;
    // 7F07877C: lwz     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078780:
    ctx->pc = 0x7F078780u;
    // 7F078780: lfs     f1, -8096(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078780u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078784:
    ctx->pc = 0x7F078784u;
    // 7F078784: bl      0x7F026F54
    {
            ctx->lr = 0x7F078788u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F078788:
    ctx->pc = 0x7F078788u;
    ctx->downcount -= 6;
    // 7F078788: lwz     r3, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07878C:
    ctx->pc = 0x7F07878Cu;
    // 7F07878C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F078790:
    ctx->pc = 0x7F078790u;
    // 7F078790: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F078794:
    ctx->pc = 0x7F078794u;
    // 7F078794: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F078798:
    ctx->pc = 0x7F078798u;
    // 7F078798: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07879C:
    ctx->pc = 0x7F07879Cu;
    // 7F07879C: bl      0x7F026928
    {
            ctx->lr = 0x7F0787A0u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F0787A0:
    ctx->pc = 0x7F0787A0u;
    ctx->downcount -= 11;
    // 7F0787A0: lwz     r5, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0787A4:
    ctx->pc = 0x7F0787A4u;
    // 7F0787A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0787A8:
    ctx->pc = 0x7F0787A8u;
    // 7F0787A8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0787AC:
    ctx->pc = 0x7F0787ACu;
    // 7F0787AC: lis     r3, 65
    ctx->gpr[3] = ((u32)(s32)(65) << 16);

label_7F0787B0:
    ctx->pc = 0x7F0787B0u;
    // 7F0787B0: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0787B4:
    ctx->pc = 0x7F0787B4u;
    // 7F0787B4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0787B8:
    ctx->pc = 0x7F0787B8u;
    // 7F0787B8: addi    r3, r3, 1787
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1787);

label_7F0787BC:
    ctx->pc = 0x7F0787BCu;
    // 7F0787BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0787C0:
    ctx->pc = 0x7F0787C0u;
    // 7F0787C0: lwz     r5, 5444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0787C4:
    ctx->pc = 0x7F0787C4u;
    // 7F0787C4: sth     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0787C8:
    ctx->pc = 0x7F0787C8u;
    // 7F0787C8: bl      0x7F024B28
    {
            ctx->lr = 0x7F0787CCu;
            ctx->pc = 0x7F024B28u;
            return;
    }

label_7F0787CC:
    ctx->pc = 0x7F0787CCu;
    ctx->downcount -= 4;
    // 7F0787CC: stw     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0787D0:
    ctx->pc = 0x7F0787D0u;
    // 7F0787D0: lwz     r0, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0787D4:
    ctx->pc = 0x7F0787D4u;
    // 7F0787D4: cmplwi  r0, 0x0000
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

label_7F0787D8:
    ctx->pc = 0x7F0787D8u;
    // 7F0787D8: bc    4, 2, 0x7F0787F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0787F8;
        }
    }

label_7F0787DC:
    ctx->pc = 0x7F0787DCu;
    ctx->downcount -= 6;
    // 7F0787DC: lis     r3, 65
    ctx->gpr[3] = ((u32)(s32)(65) << 16);

label_7F0787E0:
    ctx->pc = 0x7F0787E0u;
    // 7F0787E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0787E4:
    ctx->pc = 0x7F0787E4u;
    // 7F0787E4: addi    r3, r3, 1787
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1787);

label_7F0787E8:
    ctx->pc = 0x7F0787E8u;
    // 7F0787E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0787EC:
    ctx->pc = 0x7F0787ECu;
    // 7F0787EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0787F0:
    ctx->pc = 0x7F0787F0u;
    // 7F0787F0: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F0787F4u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F0787F4:
    ctx->pc = 0x7F0787F4u;
    ctx->downcount -= 1;
    // 7F0787F4: stw     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0787F8:
    ctx->pc = 0x7F0787F8u;
    ctx->downcount -= 4;
    // 7F0787F8: lwz     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0787FC:
    ctx->pc = 0x7F0787FCu;
    // 7F0787FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F078800:
    ctx->pc = 0x7F078800u;
    // 7F078800: li      r5, 1026
    ctx->gpr[5] = (u32)(s32)(1026);

label_7F078804:
    ctx->pc = 0x7F078804u;
    // 7F078804: bl      0x7F026EBC
    {
            ctx->lr = 0x7F078808u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F078808:
    ctx->pc = 0x7F078808u;
    ctx->downcount -= 3;
    // 7F078808: lwz     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07880C:
    ctx->pc = 0x7F07880Cu;
    // 7F07880C: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F078810:
    ctx->pc = 0x7F078810u;
    // 7F078810: bl      0x7F026F4C
    {
            ctx->lr = 0x7F078814u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F078814:
    ctx->pc = 0x7F078814u;
    ctx->downcount -= 4;
    // 7F078814: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078818:
    ctx->pc = 0x7F078818u;
    // 7F078818: lwz     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07881C:
    ctx->pc = 0x7F07881Cu;
    // 7F07881C: lfs     f1, -8096(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07881Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078820:
    ctx->pc = 0x7F078820u;
    // 7F078820: bl      0x7F026F54
    {
            ctx->lr = 0x7F078824u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F078824:
    ctx->pc = 0x7F078824u;
    ctx->downcount -= 6;
    // 7F078824: lwz     r3, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078828:
    ctx->pc = 0x7F078828u;
    // 7F078828: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07882C:
    ctx->pc = 0x7F07882Cu;
    // 7F07882C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F078830:
    ctx->pc = 0x7F078830u;
    // 7F078830: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F078834:
    ctx->pc = 0x7F078834u;
    // 7F078834: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F078838:
    ctx->pc = 0x7F078838u;
    // 7F078838: bl      0x7F026928
    {
            ctx->lr = 0x7F07883Cu;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F07883C:
    ctx->pc = 0x7F07883Cu;
    ctx->downcount -= 27;
    // 7F07883C: lwz     r5, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078840:
    ctx->pc = 0x7F078840u;
    // 7F078840: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F078844:
    ctx->pc = 0x7F078844u;
    // 7F078844: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F078848:
    ctx->pc = 0x7F078848u;
    // 7F078848: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07884C:
    ctx->pc = 0x7F07884Cu;
    // 7F07884C: stw     r6, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078850:
    ctx->pc = 0x7F078850u;
    // 7F078850: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F078854:
    ctx->pc = 0x7F078854u;
    // 7F078854: lwz     r4, 5448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078858:
    ctx->pc = 0x7F078858u;
    // 7F078858: sth     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07885C:
    ctx->pc = 0x7F07885Cu;
    // 7F07885C: stw     r6, 3120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078860:
    ctx->pc = 0x7F078860u;
    // 7F078860: stw     r6, 5500(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5500);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078864:
    ctx->pc = 0x7F078864u;
    // 7F078864: stw     r6, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078868:
    ctx->pc = 0x7F078868u;
    // 7F078868: lmw     r24, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07886C:
    ctx->pc = 0x7F07886Cu;
    // 7F07886C: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078870:
    ctx->pc = 0x7F078870u;
    // 7F078870: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F078874:
    ctx->pc = 0x7F078874u;
    // 7F078874: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F078878:
    ctx->pc = 0x7F078878u;
    // 7F078878: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07887C:
    ctx->pc = 0x7F07887Cu;
    ctx->downcount -= 7;
    // 7F07887C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078880:
    ctx->pc = 0x7F078880u;
    // 7F078880: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078884:
    ctx->pc = 0x7F078884u;
    // 7F078884: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078888:
    ctx->pc = 0x7F078888u;
    // 7F078888: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07888C:
    ctx->pc = 0x7F07888Cu;
    // 7F07888C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078890:
    ctx->pc = 0x7F078890u;
    // 7F078890: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F078894:
    ctx->pc = 0x7F078894u;
    // 7F078894: bl      0x7F3C664C
    {
            ctx->lr = 0x7F078898u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F078898:
    ctx->pc = 0x7F078898u;
    ctx->downcount -= 2;
    // 7F078898: cmplwi  r3, 0x0000
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

label_7F07889C:
    ctx->pc = 0x7F07889Cu;
    // 7F07889C: bc    12, 2, 0x7F0788A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0788A8;
        }
    }

label_7F0788A0:
    ctx->pc = 0x7F0788A0u;
    ctx->downcount -= 2;
    // 7F0788A0: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F0788A4:
    ctx->pc = 0x7F0788A4u;
    // 7F0788A4: bl      0x7F077860
    {
            ctx->lr = 0x7F0788A8u;
            ctx->pc = 0x7F077860u;
            return;
    }

label_7F0788A8:
    ctx->pc = 0x7F0788A8u;
    ctx->downcount -= 5;
    // 7F0788A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0788AC:
    ctx->pc = 0x7F0788ACu;
    // 7F0788AC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F0788B0:
    ctx->pc = 0x7F0788B0u;
    // 7F0788B0: lfs     f0, -8028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0788B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0788B4:
    ctx->pc = 0x7F0788B4u;
    // 7F0788B4: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0788B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0788B8:
    ctx->pc = 0x7F0788B8u;
    // 7F0788B8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0788BCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0788BC:
    ctx->pc = 0x7F0788BCu;
    ctx->downcount -= 2;
    // 7F0788BC: cmplwi  r3, 0x0000
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

label_7F0788C0:
    ctx->pc = 0x7F0788C0u;
    // 7F0788C0: bc    12, 2, 0x7F0788DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0788DC;
        }
    }

label_7F0788C4:
    ctx->pc = 0x7F0788C4u;
    ctx->downcount -= 2;
    // 7F0788C4: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F0788C8:
    ctx->pc = 0x7F0788C8u;
    // 7F0788C8: bl      0x7F077860
    {
            ctx->lr = 0x7F0788CCu;
            ctx->pc = 0x7F077860u;
            return;
    }

label_7F0788CC:
    ctx->pc = 0x7F0788CCu;
    ctx->downcount -= 2;
    // 7F0788CC: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_7F0788D0:
    ctx->pc = 0x7F0788D0u;
    // 7F0788D0: bl      0x7F077860
    {
            ctx->lr = 0x7F0788D4u;
            ctx->pc = 0x7F077860u;
            return;
    }

label_7F0788D4:
    ctx->pc = 0x7F0788D4u;
    ctx->downcount -= 2;
    // 7F0788D4: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_7F0788D8:
    ctx->pc = 0x7F0788D8u;
    // 7F0788D8: bl      0x7F077860
    {
            ctx->lr = 0x7F0788DCu;
            ctx->pc = 0x7F077860u;
            return;
    }

label_7F0788DC:
    ctx->pc = 0x7F0788DCu;
    ctx->downcount -= 6;
    // 7F0788DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0788E0:
    ctx->pc = 0x7F0788E0u;
    // 7F0788E0: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F0788E4:
    ctx->pc = 0x7F0788E4u;
    // 7F0788E4: stb     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0788E8:
    ctx->pc = 0x7F0788E8u;
    // 7F0788E8: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F0788EC:
    ctx->pc = 0x7F0788ECu;
    // 7F0788EC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0788ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0788F0:
    ctx->pc = 0x7F0788F0u;
    // 7F0788F0: bl      0x7F182160
    {
            ctx->lr = 0x7F0788F4u;
            ctx->pc = 0x7F182160u;
            return;
    }

label_7F0788F4:
    ctx->pc = 0x7F0788F4u;
    ctx->downcount -= 4;
    // 7F0788F4: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0788F8:
    ctx->pc = 0x7F0788F8u;
    // 7F0788F8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0788FC:
    ctx->pc = 0x7F0788FCu;
    // 7F0788FC: cmplwi  r0, 0x0000
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

label_7F078900:
    ctx->pc = 0x7F078900u;
    // 7F078900: bc    4, 2, 0x7F07890C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07890C;
        }
    }

label_7F078904:
    ctx->pc = 0x7F078904u;
    ctx->downcount -= 2;
    // 7F078904: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F078908:
    ctx->pc = 0x7F078908u;
    // 7F078908: b       0x7F078910
    {
            goto label_7F078910;
    }

label_7F07890C:
    ctx->pc = 0x7F07890Cu;
    ctx->downcount -= 1;
    // 7F07890C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F078910:
    ctx->pc = 0x7F078910u;
    ctx->downcount -= 6;
    // 7F078910: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078914:
    ctx->pc = 0x7F078914u;
    // 7F078914: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F078918:
    ctx->pc = 0x7F078918u;
    // 7F078918: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07891C:
    ctx->pc = 0x7F07891Cu;
    // 7F07891C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F078920:
    ctx->pc = 0x7F078920u;
    // 7F078920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078924:
    ctx->pc = 0x7F078924u;
    ctx->downcount -= 1;
    // 7F078924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078928:
    ctx->pc = 0x7F078928u;
    ctx->downcount -= 5;
    // 7F078928: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07892C:
    ctx->pc = 0x7F07892Cu;
    // 7F07892C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078930:
    ctx->pc = 0x7F078930u;
    // 7F078930: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078934:
    ctx->pc = 0x7F078934u;
    // 7F078934: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078938:
    ctx->pc = 0x7F078938u;
    // 7F078938: bl      0x7F3C8210
    {
            ctx->lr = 0x7F07893Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F07893C:
    ctx->pc = 0x7F07893Cu;
    ctx->downcount -= 5;
    // 7F07893C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078940:
    ctx->pc = 0x7F078940u;
    // 7F078940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F078944:
    ctx->pc = 0x7F078944u;
    // 7F078944: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F078948:
    ctx->pc = 0x7F078948u;
    // 7F078948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07894C:
    ctx->pc = 0x7F07894Cu;
    ctx->downcount -= 21;
    // 7F07894C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078950:
    ctx->pc = 0x7F078950u;
    // 7F078950: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078954:
    ctx->pc = 0x7F078954u;
    // 7F078954: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F078958:
    ctx->pc = 0x7F078958u;
    // 7F078958: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07895C:
    ctx->pc = 0x7F07895Cu;
    // 7F07895C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078960:
    ctx->pc = 0x7F078960u;
    // 7F078960: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F078964:
    ctx->pc = 0x7F078964u;
    // 7F078964: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078968:
    ctx->pc = 0x7F078968u;
    // 7F078968: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07896C:
    ctx->pc = 0x7F07896Cu;
    // 7F07896C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F078970:
    ctx->pc = 0x7F078970u;
    // 7F078970: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F078974:
    ctx->pc = 0x7F078974u;
    // 7F078974: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F078978u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F078978:
    ctx->pc = 0x7F078978u;
    ctx->downcount -= 2;
    // 7F078978: or.   r31, r3, r3
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

label_7F07897C:
    ctx->pc = 0x7F07897Cu;
    // 7F07897C: bc    4, 2, 0x7F078988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078988;
        }
    }

label_7F078980:
    ctx->pc = 0x7F078980u;
    ctx->downcount -= 2;
    // 7F078980: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F078984:
    ctx->pc = 0x7F078984u;
    // 7F078984: b       0x7F0789C8
    {
            goto label_7F0789C8;
    }

label_7F078988:
    ctx->pc = 0x7F078988u;
    ctx->downcount -= 5;
    // 7F078988: lis     r4, 32520
    ctx->gpr[4] = ((u32)(s32)(32520) << 16);

label_7F07898C:
    ctx->pc = 0x7F07898Cu;
    // 7F07898C: lis     r5, 32520
    ctx->gpr[5] = ((u32)(s32)(32520) << 16);

label_7F078990:
    ctx->pc = 0x7F078990u;
    // 7F078990: addi    r4, r4, -30428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30428);

label_7F078994:
    ctx->pc = 0x7F078994u;
    // 7F078994: addi    r5, r5, -30424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30424);

label_7F078998:
    ctx->pc = 0x7F078998u;
    // 7F078998: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F07899Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F07899C:
    ctx->pc = 0x7F07899Cu;
    ctx->downcount -= 4;
    // 7F07899C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0789A0:
    ctx->pc = 0x7F0789A0u;
    // 7F0789A0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0789A4:
    ctx->pc = 0x7F0789A4u;
    // 7F0789A4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0789A8:
    ctx->pc = 0x7F0789A8u;
    // 7F0789A8: bl      0x7F07887C
    {
            ctx->lr = 0x7F0789ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07887Cu;
                return;
            }
            goto label_7F07887C;
    }

label_7F0789AC:
    ctx->pc = 0x7F0789ACu;
    ctx->downcount -= 2;
    // 7F0789AC: cmpwi   r3, 0
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

label_7F0789B0:
    ctx->pc = 0x7F0789B0u;
    // 7F0789B0: bc    4, 0, 0x7F0789C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0789C4;
        }
    }

label_7F0789B4:
    ctx->pc = 0x7F0789B4u;
    ctx->downcount -= 2;
    // 7F0789B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0789B8:
    ctx->pc = 0x7F0789B8u;
    // 7F0789B8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0789BCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0789BC:
    ctx->pc = 0x7F0789BCu;
    ctx->downcount -= 2;
    // 7F0789BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0789C0:
    ctx->pc = 0x7F0789C0u;
    // 7F0789C0: b       0x7F0789C8
    {
            goto label_7F0789C8;
    }

label_7F0789C4:
    ctx->pc = 0x7F0789C4u;
    ctx->downcount -= 1;
    // 7F0789C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0789C8:
    ctx->pc = 0x7F0789C8u;
    ctx->downcount -= 16;
    // 7F0789C8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0789CC:
    ctx->pc = 0x7F0789CCu;
    // 7F0789CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0789D0:
    ctx->pc = 0x7F0789D0u;
    // 7F0789D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0789D4:
    ctx->pc = 0x7F0789D4u;
    // 7F0789D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0789D8:
    ctx->pc = 0x7F0789D8u;
    // 7F0789D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F0789DC:
    ctx->pc = 0x7F0789DCu;
    ctx->downcount -= 19;
    // 7F0789DC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0789E0:
    ctx->pc = 0x7F0789E0u;
    // 7F0789E0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0789E4:
    ctx->pc = 0x7F0789E4u;
    // 7F0789E4: addi    r8, r7, -8020
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-8020);

label_7F0789E8:
    ctx->pc = 0x7F0789E8u;
    // 7F0789E8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0789EC:
    ctx->pc = 0x7F0789ECu;
    // 7F0789EC: addi    r7, r6, -8016
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-8016);

label_7F0789F0:
    ctx->pc = 0x7F0789F0u;
    // 7F0789F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0789F4:
    ctx->pc = 0x7F0789F4u;
    // 7F0789F4: addi    r6, r5, -8008
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-8008);

label_7F0789F8:
    ctx->pc = 0x7F0789F8u;
    // 7F0789F8: li      r0, 49
    ctx->gpr[0] = (u32)(s32)(49);

label_7F0789FC:
    ctx->pc = 0x7F0789FCu;
    // 7F0789FC: addi    r5, r4, -8024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8024);

label_7F078A00:
    ctx->pc = 0x7F078A00u;
    // 7F078A00: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F078A00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078A04:
    ctx->pc = 0x7F078A04u;
    // 7F078A04: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078A04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078A08:
    ctx->pc = 0x7F078A08u;
    // 7F078A08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F078A0C:
    ctx->pc = 0x7F078A0Cu;
    // 7F078A0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078A10:
    ctx->pc = 0x7F078A10u;
    // 7F078A10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F078A14:
    ctx->pc = 0x7F078A14u;
    // 7F078A14: lfs     f4, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F078A14u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F078A18:
    ctx->pc = 0x7F078A18u;
    // 7F078A18: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F078A1C:
    ctx->pc = 0x7F078A1Cu;
    // 7F078A1C: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F078A1Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F078A20:
    ctx->pc = 0x7F078A20u;
    // 7F078A20: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F078A24:
    ctx->downcount -= 83;
    // 7F078A24: add   r7, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F078A28:
    // 7F078A28: add   r8, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F078A2C:
    ctx->pc = 0x7F078A2Cu;
    // 7F078A2C: lha     r0, 4920(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4920);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F078A30:
    // 7F078A30: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F078A34:
    ctx->pc = 0x7F078A34u;
    // 7F078A34: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078A38:
    // 7F078A38: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_7F078A3C:
    // 7F078A3C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F078A40:
    ctx->pc = 0x7F078A40u;
    // 7F078A40: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078A44:
    ctx->pc = 0x7F078A44u;
    // 7F078A44: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078A44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078A48:
    ctx->pc = 0x7F078A48u;
    // 7F078A48: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078A4C:
    ctx->pc = 0x7F078A4Cu;
    // 7F078A4C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078A4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F078A50:
    ctx->pc = 0x7F078A50u;
    // 7F078A50: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078A54:
    ctx->pc = 0x7F078A54u;
    // 7F078A54: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078A54u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F078A58:
    ctx->pc = 0x7F078A58u;
    // 7F078A58: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078A58u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F078A5C:
    ctx->pc = 0x7F078A5Cu;
    // 7F078A5C: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078A5Cu)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F078A60:
    ctx->pc = 0x7F078A60u;
    // 7F078A60: stfs     f0, 4136(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F078A60u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078A64:
    ctx->pc = 0x7F078A64u;
    // 7F078A64: lha     r0, 4922(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4922);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F078A68:
    // 7F078A68: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F078A6C:
    ctx->pc = 0x7F078A6Cu;
    // 7F078A6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078A70:
    ctx->pc = 0x7F078A70u;
    // 7F078A70: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078A70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078A74:
    ctx->pc = 0x7F078A74u;
    // 7F078A74: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078A74u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F078A78:
    ctx->pc = 0x7F078A78u;
    // 7F078A78: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078A78u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F078A7C:
    ctx->pc = 0x7F078A7Cu;
    // 7F078A7C: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078A7Cu)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F078A80:
    ctx->pc = 0x7F078A80u;
    // 7F078A80: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078A80u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F078A84:
    ctx->pc = 0x7F078A84u;
    // 7F078A84: stfs     f0, 4140(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F078A84u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078A88:
    ctx->pc = 0x7F078A88u;
    // 7F078A88: lha     r0, 4924(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4924);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F078A8C:
    // 7F078A8C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F078A90:
    ctx->pc = 0x7F078A90u;
    // 7F078A90: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078A94:
    ctx->pc = 0x7F078A94u;
    // 7F078A94: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078A98:
    ctx->pc = 0x7F078A98u;
    // 7F078A98: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078A98u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F078A9C:
    ctx->pc = 0x7F078A9Cu;
    // 7F078A9C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078A9Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F078AA0:
    ctx->pc = 0x7F078AA0u;
    // 7F078AA0: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078AA0u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F078AA4:
    ctx->pc = 0x7F078AA4u;
    // 7F078AA4: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078AA4u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F078AA8:
    ctx->pc = 0x7F078AA8u;
    // 7F078AA8: stfs     f0, 4144(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F078AA8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078AAC:
    // 7F078AAC: bc    16, 0, 0x7F078A24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078A24u;
                return;
            }
            goto label_7F078A24;
        }
    }

label_7F078AB0:
    ctx->pc = 0x7F078AB0u;
    ctx->downcount -= 2;
    // 7F078AB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F078AB4:
    ctx->pc = 0x7F078AB4u;
    // 7F078AB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078AB8:
    ctx->pc = 0x7F078AB8u;
    ctx->downcount -= 36;
    // 7F078AB8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078AB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078ABC:
    ctx->pc = 0x7F078ABCu;
    // 7F078ABC: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078ABCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078AC0:
    ctx->pc = 0x7F078AC0u;
    // 7F078AC0: fctiwz    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078AC0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F078AC4:
    ctx->pc = 0x7F078AC4u;
    // 7F078AC4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078AC8:
    ctx->pc = 0x7F078AC8u;
    // 7F078AC8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078AC8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078ACC:
    ctx->pc = 0x7F078ACCu;
    // 7F078ACC: fctiwz    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078ACCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[5] = dolrecomp_f64_from_bits(result); }

label_7F078AD0:
    ctx->pc = 0x7F078AD0u;
    // 7F078AD0: lfs     f4, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078AD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F078AD4:
    ctx->pc = 0x7F078AD4u;
    // 7F078AD4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078AD4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F078AD8:
    ctx->pc = 0x7F078AD8u;
    // 7F078AD8: stfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F078ADC:
    ctx->pc = 0x7F078ADCu;
    // 7F078ADC: fctiwz    f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F078ADCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F078AE0:
    ctx->pc = 0x7F078AE0u;
    // 7F078AE0: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078AE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078AE4:
    ctx->pc = 0x7F078AE4u;
    // 7F078AE4: stfd     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078AE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_7F078AE8:
    ctx->pc = 0x7F078AE8u;
    // 7F078AE8: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078AE8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F078AEC:
    ctx->pc = 0x7F078AECu;
    // 7F078AEC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078AECu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F078AF0:
    ctx->pc = 0x7F078AF0u;
    // 7F078AF0: lfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078AF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078AF4:
    ctx->pc = 0x7F078AF4u;
    // 7F078AF4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078AF8:
    ctx->pc = 0x7F078AF8u;
    // 7F078AF8: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F078AF8u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F078AFC:
    ctx->pc = 0x7F078AFCu;
    // 7F078AFC: stfd     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F078B00:
    ctx->pc = 0x7F078B00u;
    // 7F078B00: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078B00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F078B04:
    ctx->pc = 0x7F078B04u;
    // 7F078B04: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078B08:
    ctx->pc = 0x7F078B08u;
    // 7F078B08: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078B0C:
    ctx->pc = 0x7F078B0Cu;
    // 7F078B0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078B0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F078B10:
    ctx->pc = 0x7F078B10u;
    // 7F078B10: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078B14:
    ctx->pc = 0x7F078B14u;
    // 7F078B14: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078B18:
    ctx->pc = 0x7F078B18u;
    // 7F078B18: stfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F078B1C:
    ctx->pc = 0x7F078B1Cu;
    // 7F078B1C: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F078B20:
    ctx->pc = 0x7F078B20u;
    // 7F078B20: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078B24:
    ctx->pc = 0x7F078B24u;
    // 7F078B24: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078B28:
    ctx->pc = 0x7F078B28u;
    // 7F078B28: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078B2C:
    ctx->pc = 0x7F078B2Cu;
    // 7F078B2C: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078B30:
    ctx->pc = 0x7F078B30u;
    // 7F078B30: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F078B34:
    ctx->pc = 0x7F078B34u;
    // 7F078B34: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078B38:
    ctx->pc = 0x7F078B38u;
    // 7F078B38: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078B3C:
    ctx->pc = 0x7F078B3Cu;
    // 7F078B3C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078B40:
    ctx->pc = 0x7F078B40u;
    // 7F078B40: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F078B44:
    ctx->pc = 0x7F078B44u;
    // 7F078B44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078B48:
    ctx->pc = 0x7F078B48u;
    ctx->downcount -= 36;
    // 7F078B48: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078B4C:
    ctx->pc = 0x7F078B4Cu;
    // 7F078B4C: lwz     r8, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F078B50:
    ctx->pc = 0x7F078B50u;
    // 7F078B50: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F078B54:
    ctx->pc = 0x7F078B54u;
    // 7F078B54: lwz     r29, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F078B58:
    ctx->pc = 0x7F078B58u;
    // 7F078B58: lwz     r12, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F078B5C:
    ctx->pc = 0x7F078B5Cu;
    // 7F078B5C: lwz     r6, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F078B60:
    ctx->pc = 0x7F078B60u;
    // 7F078B60: mullw   r10, r29, r8
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[10] = (u32)product;
    }

label_7F078B64:
    ctx->pc = 0x7F078B64u;
    // 7F078B64: lwz     r28, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F078B68:
    ctx->pc = 0x7F078B68u;
    // 7F078B68: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078B6C:
    ctx->pc = 0x7F078B6Cu;
    // 7F078B6C: mullw   r7, r12, r6
    {
        s64 product = (s64)(s32)ctx->gpr[12] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[7] = (u32)product;
    }

label_7F078B70:
    ctx->pc = 0x7F078B70u;
    // 7F078B70: mullw   r9, r28, r0
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[9] = (u32)product;
    }

label_7F078B74:
    ctx->pc = 0x7F078B74u;
    // 7F078B74: add   r10, r7, r10
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F078B78:
    ctx->pc = 0x7F078B78u;
    // 7F078B78: add.   r10, r9, r10
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F078B7C:
    ctx->pc = 0x7F078B7Cu;
    // 7F078B7C: bc    4, 2, 0x7F078BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078BB8;
        }
    }

label_7F078B80:
    ctx->pc = 0x7F078B80u;
    ctx->downcount -= 14;
    // 7F078B80: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078B84:
    ctx->pc = 0x7F078B84u;
    // 7F078B84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078B88:
    ctx->pc = 0x7F078B88u;
    // 7F078B88: lfs     f0, -7996(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078B88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7996);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078B8C:
    ctx->pc = 0x7F078B8Cu;
    // 7F078B8C: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078B90:
    ctx->pc = 0x7F078B90u;
    // 7F078B90: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078B94:
    ctx->pc = 0x7F078B94u;
    // 7F078B94: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078B98:
    ctx->pc = 0x7F078B98u;
    // 7F078B98: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078B9C:
    ctx->pc = 0x7F078B9Cu;
    // 7F078B9C: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078BA0:
    ctx->pc = 0x7F078BA0u;
    // 7F078BA0: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078BA4:
    ctx->pc = 0x7F078BA4u;
    // 7F078BA4: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078BA8:
    ctx->pc = 0x7F078BA8u;
    // 7F078BA8: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F078BAC:
    ctx->pc = 0x7F078BACu;
    // 7F078BAC: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078BB0:
    ctx->pc = 0x7F078BB0u;
    // 7F078BB0: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078BB4:
    ctx->pc = 0x7F078BB4u;
    // 7F078BB4: b       0x7F078C90
    {
            goto label_7F078C90;
    }

label_7F078BB8:
    ctx->pc = 0x7F078BB8u;
    ctx->downcount -= 117;
    // 7F078BB8: lwz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F078BBC:
    ctx->pc = 0x7F078BBCu;
    // 7F078BBC: lis     r11, 17200
    ctx->gpr[11] = ((u32)(s32)(17200) << 16);

label_7F078BC0:
    ctx->pc = 0x7F078BC0u;
    // 7F078BC0: lwz     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F078BC4:
    ctx->pc = 0x7F078BC4u;
    // 7F078BC4: neg  r31, r28
    {
        u32 a = ctx->gpr[28];
        ctx->gpr[31] = (~a) + 1u;
    }

label_7F078BC8:
    ctx->pc = 0x7F078BC8u;
    // 7F078BC8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078BCC:
    ctx->pc = 0x7F078BCCu;
    // 7F078BCC: mullw   r30, r12, r7
    {
        s64 product = (s64)(s32)ctx->gpr[12] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[30] = (u32)product;
    }

label_7F078BD0:
    ctx->pc = 0x7F078BD0u;
    // 7F078BD0: lis     r12, 32582
    ctx->gpr[12] = ((u32)(s32)(32582) << 16);

label_7F078BD4:
    ctx->pc = 0x7F078BD4u;
    // 7F078BD4: lwz     r28, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F078BD8:
    ctx->pc = 0x7F078BD8u;
    // 7F078BD8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F078BDC:
    ctx->pc = 0x7F078BDCu;
    // 7F078BDC: lfd     f2, -8008(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F078BDCu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-8008);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078BE0:
    ctx->pc = 0x7F078BE0u;
    // 7F078BE0: lfs     f0, -7992(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078BE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078BE4:
    ctx->pc = 0x7F078BE4u;
    // 7F078BE4: mullw   r31, r31, r4
    {
        s64 product = (s64)(s32)ctx->gpr[31] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[31] = (u32)product;
    }

label_7F078BE8:
    ctx->pc = 0x7F078BE8u;
    // 7F078BE8: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F078BEC:
    ctx->pc = 0x7F078BECu;
    // 7F078BEC: stw     r11, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F078BF0:
    ctx->pc = 0x7F078BF0u;
    // 7F078BF0: stw     r11, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F078BF4:
    ctx->pc = 0x7F078BF4u;
    // 7F078BF4: mullw   r29, r29, r9
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[29] = (u32)product;
    }

label_7F078BF8:
    ctx->pc = 0x7F078BF8u;
    // 7F078BF8: subf   r12, r30, r31
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_7F078BFC:
    ctx->pc = 0x7F078BFCu;
    // 7F078BFC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078BFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078C00:
    ctx->pc = 0x7F078C00u;
    // 7F078C00: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078C04:
    ctx->pc = 0x7F078C04u;
    // 7F078C04: subf   r11, r29, r12
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[12];
        u32 res = a + b + 1u;
        ctx->gpr[11] = res;
    }

label_7F078C08:
    ctx->pc = 0x7F078C08u;
    // 7F078C08: subf   r11, r28, r11
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[11];
        u32 res = a + b + 1u;
        ctx->gpr[11] = res;
    }

label_7F078C0C:
    ctx->pc = 0x7F078C0Cu;
    // 7F078C0C: rlwinm r11, r11, 12, 0, 19
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 12u) & 0xFFFFF000u;
    }

label_7F078C10:
    ctx->pc = 0x7F078C10u;
    // 7F078C10: divw   r11, r11, r10
    {
        s32 dividend = (s32)ctx->gpr[11];
        s32 divisor = (s32)ctx->gpr[10];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[11] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F078C14:
    ctx->pc = 0x7F078C14u;
    // 7F078C14: mullw   r0, r0, r11
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[11];
        ctx->gpr[0] = (u32)product;
    }

label_7F078C18:
    ctx->pc = 0x7F078C18u;
    // 7F078C18: srawi r10, r0, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[10] = value;
        } else if (sh > 31) {
            ctx->gpr[10] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[10] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F078C1C:
    ctx->pc = 0x7F078C1Cu;
    // 7F078C1C: add   r4, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F078C20:
    ctx->pc = 0x7F078C20u;
    // 7F078C20: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F078C24:
    ctx->pc = 0x7F078C24u;
    // 7F078C24: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078C28:
    ctx->pc = 0x7F078C28u;
    // 7F078C28: mullw   r0, r6, r11
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[11];
        ctx->gpr[0] = (u32)product;
    }

label_7F078C2C:
    ctx->pc = 0x7F078C2Cu;
    // 7F078C2C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078C30:
    ctx->pc = 0x7F078C30u;
    // 7F078C30: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078C30u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F078C34:
    ctx->pc = 0x7F078C34u;
    // 7F078C34: srawi r4, r0, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F078C38:
    ctx->pc = 0x7F078C38u;
    // 7F078C38: mullw   r0, r8, r11
    {
        s64 product = (s64)(s32)ctx->gpr[8] * (s64)(s32)ctx->gpr[11];
        ctx->gpr[0] = (u32)product;
    }

label_7F078C3C:
    ctx->pc = 0x7F078C3Cu;
    // 7F078C3C: add   r4, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F078C40:
    ctx->pc = 0x7F078C40u;
    // 7F078C40: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078C44:
    ctx->pc = 0x7F078C44u;
    // 7F078C44: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F078C48:
    ctx->pc = 0x7F078C48u;
    // 7F078C48: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078C4C:
    ctx->pc = 0x7F078C4Cu;
    // 7F078C4C: srawi r0, r0, 12
    {
        u32 sh = 12u;
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

label_7F078C50:
    ctx->pc = 0x7F078C50u;
    // 7F078C50: add   r0, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F078C54:
    ctx->pc = 0x7F078C54u;
    // 7F078C54: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078C58:
    ctx->pc = 0x7F078C58u;
    // 7F078C58: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F078C5C:
    ctx->pc = 0x7F078C5Cu;
    // 7F078C5C: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078C60:
    ctx->pc = 0x7F078C60u;
    // 7F078C60: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078C60u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F078C64:
    ctx->pc = 0x7F078C64u;
    // 7F078C64: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078C68:
    ctx->pc = 0x7F078C68u;
    // 7F078C68: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078C6C:
    ctx->pc = 0x7F078C6Cu;
    // 7F078C6C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078C70:
    ctx->pc = 0x7F078C70u;
    // 7F078C70: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F078C70u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F078C74:
    ctx->pc = 0x7F078C74u;
    // 7F078C74: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078C78:
    ctx->pc = 0x7F078C78u;
    // 7F078C78: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078C7C:
    ctx->pc = 0x7F078C7Cu;
    // 7F078C7C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078C7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078C80:
    ctx->pc = 0x7F078C80u;
    // 7F078C80: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078C84:
    ctx->pc = 0x7F078C84u;
    // 7F078C84: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078C88:
    ctx->pc = 0x7F078C88u;
    // 7F078C88: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078C8C:
    ctx->pc = 0x7F078C8Cu;
    // 7F078C8C: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F078C90:
    ctx->pc = 0x7F078C90u;
    ctx->downcount -= 13;
    // 7F078C90: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F078C94:
    ctx->pc = 0x7F078C94u;
    // 7F078C94: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F078C98:
    ctx->pc = 0x7F078C98u;
    // 7F078C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078C9C:
    ctx->pc = 0x7F078C9Cu;
    ctx->downcount -= 192;
    // 7F078C9C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F078CA0:
    ctx->pc = 0x7F078CA0u;
    // 7F078CA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078CA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078CA4:
    ctx->pc = 0x7F078CA4u;
    // 7F078CA4: lfs     f0, -8024(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F078CA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078CA8:
    ctx->pc = 0x7F078CA8u;
    // 7F078CA8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078CAC:
    ctx->pc = 0x7F078CACu;
    // 7F078CAC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078CACu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078CB0:
    ctx->pc = 0x7F078CB0u;
    // 7F078CB0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078CB0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078CB4:
    ctx->pc = 0x7F078CB4u;
    // 7F078CB4: stfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078CB8:
    ctx->pc = 0x7F078CB8u;
    // 7F078CB8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078CB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078CBC:
    ctx->pc = 0x7F078CBCu;
    // 7F078CBC: lfs     f2, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078CC0:
    ctx->pc = 0x7F078CC0u;
    // 7F078CC0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078CC0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078CC4:
    ctx->pc = 0x7F078CC4u;
    // 7F078CC4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078CC4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078CC8:
    ctx->pc = 0x7F078CC8u;
    // 7F078CC8: stfs     f1, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078CCC:
    ctx->pc = 0x7F078CCCu;
    // 7F078CCC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078CCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078CD0:
    ctx->pc = 0x7F078CD0u;
    // 7F078CD0: lfs     f2, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078CD4:
    ctx->pc = 0x7F078CD4u;
    // 7F078CD4: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078CD4u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078CD8:
    ctx->pc = 0x7F078CD8u;
    // 7F078CD8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078CD8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078CDC:
    ctx->pc = 0x7F078CDCu;
    // 7F078CDC: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078CE0:
    ctx->pc = 0x7F078CE0u;
    // 7F078CE0: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078CE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078CE4:
    ctx->pc = 0x7F078CE4u;
    // 7F078CE4: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078CE8:
    ctx->pc = 0x7F078CE8u;
    // 7F078CE8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078CE8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078CEC:
    ctx->pc = 0x7F078CECu;
    // 7F078CEC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078CECu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078CF0:
    ctx->pc = 0x7F078CF0u;
    // 7F078CF0: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078CF4:
    ctx->pc = 0x7F078CF4u;
    // 7F078CF4: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078CF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078CF8:
    ctx->pc = 0x7F078CF8u;
    // 7F078CF8: lfs     f2, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078CF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078CFC:
    ctx->pc = 0x7F078CFCu;
    // 7F078CFC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078CFCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078D00:
    ctx->pc = 0x7F078D00u;
    // 7F078D00: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078D00u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078D04:
    ctx->pc = 0x7F078D04u;
    // 7F078D04: stfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078D08:
    ctx->pc = 0x7F078D08u;
    // 7F078D08: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078D08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078D0C:
    ctx->pc = 0x7F078D0Cu;
    // 7F078D0C: lfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078D10:
    ctx->pc = 0x7F078D10u;
    // 7F078D10: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078D10u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078D14:
    ctx->pc = 0x7F078D14u;
    // 7F078D14: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078D14u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078D18:
    ctx->pc = 0x7F078D18u;
    // 7F078D18: stfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078D1C:
    ctx->pc = 0x7F078D1Cu;
    // 7F078D1C: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078D1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078D20:
    ctx->pc = 0x7F078D20u;
    // 7F078D20: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078D24:
    ctx->pc = 0x7F078D24u;
    // 7F078D24: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078D24u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078D28:
    ctx->pc = 0x7F078D28u;
    // 7F078D28: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078D28u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078D2C:
    ctx->pc = 0x7F078D2Cu;
    // 7F078D2C: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078D30:
    ctx->pc = 0x7F078D30u;
    // 7F078D30: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078D30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078D34:
    ctx->pc = 0x7F078D34u;
    // 7F078D34: lfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078D38:
    ctx->pc = 0x7F078D38u;
    // 7F078D38: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078D38u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F078D3C:
    ctx->pc = 0x7F078D3Cu;
    // 7F078D3C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078D3Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F078D40:
    ctx->pc = 0x7F078D40u;
    // 7F078D40: stfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078D44:
    ctx->pc = 0x7F078D44u;
    // 7F078D44: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078D44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078D48:
    ctx->pc = 0x7F078D48u;
    // 7F078D48: lfs     f2, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078D4C:
    ctx->pc = 0x7F078D4Cu;
    // 7F078D4C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078D4Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F078D50:
    ctx->pc = 0x7F078D50u;
    // 7F078D50: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078D50u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F078D54:
    ctx->pc = 0x7F078D54u;
    // 7F078D54: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078D54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078D58:
    ctx->pc = 0x7F078D58u;
    // 7F078D58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078D5C:
    ctx->pc = 0x7F078D5Cu;
    ctx->downcount -= 9;
    // 7F078D5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078D60:
    ctx->pc = 0x7F078D60u;
    // 7F078D60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078D64:
    ctx->pc = 0x7F078D64u;
    // 7F078D64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078D68:
    ctx->pc = 0x7F078D68u;
    // 7F078D68: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078D68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F078D6C:
    ctx->pc = 0x7F078D6Cu;
    // 7F078D6C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078D6Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F078D70:
    ctx->pc = 0x7F078D70u;
    // 7F078D70: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F078D74:
    ctx->pc = 0x7F078D74u;
    // 7F078D74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078D78:
    ctx->pc = 0x7F078D78u;
    // 7F078D78: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F078D7C:
    ctx->pc = 0x7F078D7Cu;
    // 7F078D7C: bl      0x80026020
    {
            ctx->lr = 0x7F078D80u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F078D80:
    ctx->pc = 0x7F078D80u;
    ctx->downcount -= 4;
    // 7F078D80: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F078D80u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F078D84:
    ctx->pc = 0x7F078D84u;
    // 7F078D84: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F078D88:
    ctx->pc = 0x7F078D88u;
    // 7F078D88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078D8C:
    ctx->pc = 0x7F078D8Cu;
    // 7F078D8C: bl      0x80026020
    {
            ctx->lr = 0x7F078D90u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F078D90:
    ctx->pc = 0x7F078D90u;
    ctx->downcount -= 4;
    // 7F078D90: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F078D90u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F078D94:
    ctx->pc = 0x7F078D94u;
    // 7F078D94: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F078D98:
    ctx->pc = 0x7F078D98u;
    // 7F078D98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078D9C:
    ctx->pc = 0x7F078D9Cu;
    // 7F078D9C: bl      0x80026020
    {
            ctx->lr = 0x7F078DA0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F078DA0:
    ctx->pc = 0x7F078DA0u;
    ctx->downcount -= 7;
    // 7F078DA0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078DA4:
    ctx->pc = 0x7F078DA4u;
    // 7F078DA4: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078DA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078DA8:
    ctx->pc = 0x7F078DA8u;
    // 7F078DA8: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F078DAC:
    ctx->pc = 0x7F078DACu;
    // 7F078DAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F078DB0:
    ctx->pc = 0x7F078DB0u;
    // 7F078DB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F078DB4:
    ctx->pc = 0x7F078DB4u;
    // 7F078DB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078DB8:
    ctx->pc = 0x7F078DB8u;
    ctx->downcount -= 23;
    // 7F078DB8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078DBC:
    ctx->pc = 0x7F078DBCu;
    // 7F078DBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078DC0:
    ctx->pc = 0x7F078DC0u;
    // 7F078DC0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078DC4:
    ctx->pc = 0x7F078DC4u;
    // 7F078DC4: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078DC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F078DC8:
    ctx->pc = 0x7F078DC8u;
    // 7F078DC8: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F078DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F078DC8u);
        if (ctx->exception) return;
    }

label_7F078DCC:
    ctx->pc = 0x7F078DCCu;
    // 7F078DCC: stmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F078DD0:
    ctx->pc = 0x7F078DD0u;
    // 7F078DD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078DD4:
    ctx->pc = 0x7F078DD4u;
    // 7F078DD4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F078DD8:
    ctx->pc = 0x7F078DD8u;
    // 7F078DD8: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F078DDC:
    ctx->pc = 0x7F078DDCu;
    // 7F078DDC: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F078DE0:
    ctx->pc = 0x7F078DE0u;
    // 7F078DE0: addi    r5, r31, 2356
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(2356);

label_7F078DE4:
    ctx->pc = 0x7F078DE4u;
    // 7F078DE4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F078DE8:
    ctx->pc = 0x7F078DE8u;
    // 7F078DE8: bl      0x7F078AB8
    {
            ctx->lr = 0x7F078DECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078AB8u;
                return;
            }
            goto label_7F078AB8;
    }

label_7F078DEC:
    ctx->pc = 0x7F078DECu;
    ctx->downcount -= 13;
    // 7F078DEC: lwz     r5, 1816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1816);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F078DF0:
    ctx->pc = 0x7F078DF0u;
    // 7F078DF0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F078DF4:
    ctx->pc = 0x7F078DF4u;
    // 7F078DF4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078DF8:
    ctx->pc = 0x7F078DF8u;
    // 7F078DF8: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078DFC:
    ctx->pc = 0x7F078DFCu;
    // 7F078DFC: neg  r6, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[6] = (~a) + 1u;
    }

label_7F078E00:
    ctx->pc = 0x7F078E00u;
    // 7F078E00: lfd     f1, -8008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078E00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8008);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E04:
    ctx->pc = 0x7F078E04u;
    // 7F078E04: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F078E08:
    ctx->pc = 0x7F078E08u;
    // 7F078E08: lfs     f2, 2356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078E08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078E0C:
    ctx->pc = 0x7F078E0Cu;
    // 7F078E0C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078E10:
    ctx->pc = 0x7F078E10u;
    // 7F078E10: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E14:
    ctx->pc = 0x7F078E14u;
    // 7F078E14: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078E14u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F078E18:
    ctx->pc = 0x7F078E18u;
    // 7F078E18: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078E18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F078E1C:
    ctx->pc = 0x7F078E1Cu;
    // 7F078E1C: bc    4, 0, 0x7F078E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078E28;
        }
    }

label_7F078E20:
    ctx->pc = 0x7F078E20u;
    ctx->downcount -= 2;
    // 7F078E20: addi    r30, r31, 1820
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(1820);

label_7F078E24:
    ctx->pc = 0x7F078E24u;
    // 7F078E24: b       0x7F078E48
    {
            goto label_7F078E48;
    }

label_7F078E28:
    ctx->pc = 0x7F078E28u;
    ctx->downcount -= 7;
    // 7F078E28: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F078E2C:
    ctx->pc = 0x7F078E2Cu;
    // 7F078E2C: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078E30:
    ctx->pc = 0x7F078E30u;
    // 7F078E30: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078E34:
    ctx->pc = 0x7F078E34u;
    // 7F078E34: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078E34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E38:
    ctx->pc = 0x7F078E38u;
    // 7F078E38: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078E38u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F078E3C:
    ctx->pc = 0x7F078E3Cu;
    // 7F078E3C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078E3Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F078E40:
    ctx->pc = 0x7F078E40u;
    // 7F078E40: bc    4, 1, 0x7F078E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078E48;
        }
    }

label_7F078E44:
    ctx->pc = 0x7F078E44u;
    ctx->downcount -= 1;
    // 7F078E44: addi    r30, r31, 1836
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(1836);

label_7F078E48:
    ctx->pc = 0x7F078E48u;
    ctx->downcount -= 11;
    // 7F078E48: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F078E4C:
    ctx->pc = 0x7F078E4Cu;
    // 7F078E4C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F078E50:
    ctx->pc = 0x7F078E50u;
    // 7F078E50: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078E54:
    ctx->pc = 0x7F078E54u;
    // 7F078E54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F078E58:
    ctx->pc = 0x7F078E58u;
    // 7F078E58: lfd     f1, -8008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F078E58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8008);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E5C:
    ctx->pc = 0x7F078E5Cu;
    // 7F078E5C: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078E60:
    ctx->pc = 0x7F078E60u;
    // 7F078E60: lfs     f2, 2364(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078E60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F078E64:
    ctx->pc = 0x7F078E64u;
    // 7F078E64: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078E64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E68:
    ctx->pc = 0x7F078E68u;
    // 7F078E68: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078E68u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F078E6C:
    ctx->pc = 0x7F078E6Cu;
    // 7F078E6C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078E6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F078E70:
    ctx->pc = 0x7F078E70u;
    // 7F078E70: bc    4, 0, 0x7F078E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078E7C;
        }
    }

label_7F078E74:
    ctx->pc = 0x7F078E74u;
    ctx->downcount -= 2;
    // 7F078E74: addi    r30, r31, 1852
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(1852);

label_7F078E78:
    ctx->pc = 0x7F078E78u;
    // 7F078E78: b       0x7F078E9C
    {
            goto label_7F078E9C;
    }

label_7F078E7C:
    ctx->pc = 0x7F078E7Cu;
    ctx->downcount -= 7;
    // 7F078E7C: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F078E80:
    ctx->pc = 0x7F078E80u;
    // 7F078E80: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078E84:
    ctx->pc = 0x7F078E84u;
    // 7F078E84: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078E88:
    ctx->pc = 0x7F078E88u;
    // 7F078E88: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078E8C:
    ctx->pc = 0x7F078E8Cu;
    // 7F078E8C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078E8Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F078E90:
    ctx->pc = 0x7F078E90u;
    // 7F078E90: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078E90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F078E94:
    ctx->pc = 0x7F078E94u;
    // 7F078E94: bc    4, 1, 0x7F078E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078E9C;
        }
    }

label_7F078E98:
    ctx->pc = 0x7F078E98u;
    ctx->downcount -= 1;
    // 7F078E98: addi    r30, r31, 1868
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(1868);

label_7F078E9C:
    ctx->pc = 0x7F078E9Cu;
    ctx->downcount -= 2;
    // 7F078E9C: cmplwi  r30, 0x0000
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

label_7F078EA0:
    ctx->pc = 0x7F078EA0u;
    // 7F078EA0: bc    4, 2, 0x7F078ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078ED4;
        }
    }

label_7F078EA4:
    ctx->pc = 0x7F078EA4u;
    ctx->downcount -= 12;
    // 7F078EA4: lwz     r4, 2356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F078EA8:
    ctx->pc = 0x7F078EA8u;
    // 7F078EA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078EAC:
    ctx->pc = 0x7F078EACu;
    // 7F078EAC: lwz     r0, 2360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078EB0:
    ctx->pc = 0x7F078EB0u;
    // 7F078EB0: lfs     f0, -7992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078EB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078EB4:
    ctx->pc = 0x7F078EB4u;
    // 7F078EB4: stw     r4, 2572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2572);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F078EB8:
    ctx->pc = 0x7F078EB8u;
    // 7F078EB8: stw     r0, 2576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078EBC:
    ctx->pc = 0x7F078EBCu;
    // 7F078EBC: lwz     r3, 2364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078EC0:
    ctx->pc = 0x7F078EC0u;
    // 7F078EC0: lwz     r0, 2368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078EC4:
    ctx->pc = 0x7F078EC4u;
    // 7F078EC4: stw     r3, 2580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2580);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F078EC8:
    ctx->pc = 0x7F078EC8u;
    // 7F078EC8: stw     r0, 2584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078ECC:
    ctx->pc = 0x7F078ECCu;
    // 7F078ECC: stfs     f0, 2300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078ECCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078ED0:
    ctx->pc = 0x7F078ED0u;
    // 7F078ED0: b       0x7F078F78
    {
            goto label_7F078F78;
    }

label_7F078ED4:
    ctx->pc = 0x7F078ED4u;
    ctx->downcount -= 2;
    // 7F078ED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F078ED8:
    ctx->pc = 0x7F078ED8u;
    // 7F078ED8: bl      0x7F026F84
    {
            ctx->lr = 0x7F078EDCu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F078EDC:
    ctx->pc = 0x7F078EDCu;
    ctx->downcount -= 6;
    // 7F078EDC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078EE0:
    ctx->pc = 0x7F078EE0u;
    // 7F078EE0: addi    r3, r31, 2356
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2356);

label_7F078EE4:
    ctx->pc = 0x7F078EE4u;
    // 7F078EE4: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F078EE8:
    ctx->pc = 0x7F078EE8u;
    // 7F078EE8: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F078EEC:
    ctx->pc = 0x7F078EECu;
    // 7F078EEC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F078EF0:
    ctx->pc = 0x7F078EF0u;
    // 7F078EF0: bl      0x80025FFC
    {
            ctx->lr = 0x7F078EF4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F078EF4:
    ctx->pc = 0x7F078EF4u;
    ctx->downcount -= 2;
    // 7F078EF4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F078EF8:
    ctx->pc = 0x7F078EF8u;
    // 7F078EF8: bl      0x80026098
    {
            ctx->lr = 0x7F078EFCu;
            ctx->pc = 0x80026098u;
            return;
    }

label_7F078EFC:
    ctx->pc = 0x7F078EFCu;
    ctx->downcount -= 5;
    // 7F078EFC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F078EFCu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F078F00:
    ctx->pc = 0x7F078F00u;
    // 7F078F00: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F078F04:
    ctx->pc = 0x7F078F04u;
    // 7F078F04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F078F08:
    ctx->pc = 0x7F078F08u;
    // 7F078F08: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F078F0C:
    ctx->pc = 0x7F078F0Cu;
    // 7F078F0C: bl      0x7F078B48
    {
            ctx->lr = 0x7F078F10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F078F10:
    ctx->pc = 0x7F078F10u;
    ctx->downcount -= 12;
    // 7F078F10: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F078F14:
    ctx->pc = 0x7F078F14u;
    // 7F078F14: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F078F18:
    ctx->pc = 0x7F078F18u;
    // 7F078F18: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078F1C:
    ctx->pc = 0x7F078F1Cu;
    // 7F078F1C: addi    r3, r31, 2572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2572);

label_7F078F20:
    ctx->pc = 0x7F078F20u;
    // 7F078F20: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F078F24:
    ctx->pc = 0x7F078F24u;
    // 7F078F24: stw     r6, 2572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2572);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078F28:
    ctx->pc = 0x7F078F28u;
    // 7F078F28: stw     r0, 2576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078F2C:
    ctx->pc = 0x7F078F2Cu;
    // 7F078F2C: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F078F30:
    ctx->pc = 0x7F078F30u;
    // 7F078F30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078F34:
    ctx->pc = 0x7F078F34u;
    // 7F078F34: stw     r6, 2580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2580);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F078F38:
    ctx->pc = 0x7F078F38u;
    // 7F078F38: stw     r0, 2584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078F3C:
    ctx->pc = 0x7F078F3Cu;
    // 7F078F3C: bl      0x80025FFC
    {
            ctx->lr = 0x7F078F40u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F078F40:
    ctx->pc = 0x7F078F40u;
    ctx->downcount -= 2;
    // 7F078F40: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F078F44:
    ctx->pc = 0x7F078F44u;
    // 7F078F44: bl      0x80026098
    {
            ctx->lr = 0x7F078F48u;
            ctx->pc = 0x80026098u;
            return;
    }

label_7F078F48:
    ctx->pc = 0x7F078F48u;
    ctx->downcount -= 5;
    // 7F078F48: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F078F4C:
    ctx->pc = 0x7F078F4Cu;
    // 7F078F4C: stfs     f1, 2300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078F4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F078F50:
    ctx->pc = 0x7F078F50u;
    // 7F078F50: lfs     f0, -8000(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F078F50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078F54:
    ctx->pc = 0x7F078F54u;
    // 7F078F54: fcmpu   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F078F54u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], false);

label_7F078F58:
    ctx->pc = 0x7F078F58u;
    // 7F078F58: bc    12, 2, 0x7F078F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F078F68;
        }
    }

label_7F078F5C:
    ctx->pc = 0x7F078F5Cu;
    ctx->downcount -= 19;
    // 7F078F5C: lfs     f0, 2300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078F5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F078F60:
    ctx->pc = 0x7F078F60u;
    // 7F078F60: fdivs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F078F60u)) return;
    ppc_fdivs(ctx, 0, 0, 31);

label_7F078F64:
    ctx->pc = 0x7F078F64u;
    // 7F078F64: stfs     f0, 2300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078F64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F078F68:
    ctx->pc = 0x7F078F68u;
    ctx->downcount -= 4;
    // 7F078F68: lwz     r3, 2312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078F6C:
    ctx->pc = 0x7F078F6Cu;
    // 7F078F6C: lfs     f1, 2300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F078F6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F078F70:
    ctx->pc = 0x7F078F70u;
    // 7F078F70: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F078F74:
    ctx->pc = 0x7F078F74u;
    // 7F078F74: bl      0x7F078D5C
    {
            ctx->lr = 0x7F078F78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078D5Cu;
                return;
            }
            goto label_7F078D5C;
    }

label_7F078F78:
    ctx->pc = 0x7F078F78u;
    ctx->downcount -= 18;
    // 7F078F78: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F078F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F078F78u);
        if (ctx->exception) return;
    }

label_7F078F7C:
    ctx->pc = 0x7F078F7Cu;
    // 7F078F7C: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F078F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F078F80:
    ctx->pc = 0x7F078F80u;
    // 7F078F80: lmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F078F84:
    ctx->pc = 0x7F078F84u;
    // 7F078F84: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078F88:
    ctx->pc = 0x7F078F88u;
    // 7F078F88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F078F8C:
    ctx->pc = 0x7F078F8Cu;
    // 7F078F8C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F078F90:
    ctx->pc = 0x7F078F90u;
    // 7F078F90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F078F94:
    ctx->pc = 0x7F078F94u;
    ctx->downcount -= 8;
    // 7F078F94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F078F98:
    ctx->pc = 0x7F078F98u;
    // 7F078F98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F078F9C:
    ctx->pc = 0x7F078F9Cu;
    // 7F078F9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F078FA0:
    ctx->pc = 0x7F078FA0u;
    // 7F078FA0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F078FA4:
    ctx->pc = 0x7F078FA4u;
    // 7F078FA4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F078FA8:
    ctx->pc = 0x7F078FA8u;
    // 7F078FA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F078FAC:
    ctx->pc = 0x7F078FACu;
    // 7F078FAC: lwz     r3, 3056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3056);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078FB0:
    ctx->pc = 0x7F078FB0u;
    // 7F078FB0: bl      0x7F3C9624
    {
            ctx->lr = 0x7F078FB4u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F078FB4:
    ctx->pc = 0x7F078FB4u;
    ctx->downcount -= 10;
    // 7F078FB4: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F078FB8:
    ctx->pc = 0x7F078FB8u;
    // 7F078FB8: lis     r6, 108
    ctx->gpr[6] = ((u32)(s32)(108) << 16);

label_7F078FBC:
    ctx->pc = 0x7F078FBCu;
    // 7F078FBC: lis     r5, 42
    ctx->gpr[5] = ((u32)(s32)(42) << 16);

label_7F078FC0:
    ctx->pc = 0x7F078FC0u;
    // 7F078FC0: addi    r4, r4, 20012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20012);

label_7F078FC4:
    ctx->pc = 0x7F078FC4u;
    // 7F078FC4: addi    r6, r6, -4054
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4054);

label_7F078FC8:
    ctx->pc = 0x7F078FC8u;
    // 7F078FC8: addi    r5, r5, -15100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15100);

label_7F078FCC:
    ctx->pc = 0x7F078FCCu;
    // 7F078FCC: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F078FD0:
    ctx->pc = 0x7F078FD0u;
    // 7F078FD0: cmpwi   r3, 0
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

label_7F078FD4:
    ctx->pc = 0x7F078FD4u;
    // 7F078FD4: bc    4, 1, 0x7F079038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079038;
        }
    }

label_7F078FD8:
    ctx->pc = 0x7F078FD8u;
    ctx->downcount -= 5;
    // 7F078FD8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078FDC:
    ctx->pc = 0x7F078FDCu;
    // 7F078FDC: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F078FE0:
    ctx->pc = 0x7F078FE0u;
    // 7F078FE0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F078FE4:
    // 7F078FE4: cmpw    r0, r6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F078FE8:
    // 7F078FE8: bc    12, 2, 0x7F079018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079018;
        }
    }

label_7F078FEC:
    ctx->downcount -= 1;
    // 7F078FEC: bc    4, 0, 0x7F078FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F078FFC;
        }
    }

label_7F078FF0:
    ctx->downcount -= 2;
    // 7F078FF0: cmpw    r0, r5
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

label_7F078FF4:
    // 7F078FF4: bc    12, 2, 0x7F079008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079008;
        }
    }

label_7F078FF8:
    ctx->downcount -= 1;
    // 7F078FF8: b       0x7F079028
    {
            goto label_7F079028;
    }

label_7F078FFC:
    ctx->downcount -= 2;
    // 7F078FFC: cmpw    r0, r4
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

label_7F079000:
    // 7F079000: bc    12, 2, 0x7F079010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079010;
        }
    }

label_7F079004:
    ctx->downcount -= 1;
    // 7F079004: b       0x7F079028
    {
            goto label_7F079028;
    }

label_7F079008:
    ctx->downcount -= 2;
    // 7F079008: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07900C:
    // 7F07900C: b       0x7F07903C
    {
            goto label_7F07903C;
    }

label_7F079010:
    ctx->downcount -= 2;
    // 7F079010: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F079014:
    // 7F079014: b       0x7F07903C
    {
            goto label_7F07903C;
    }

label_7F079018:
    ctx->downcount -= 2;
    // 7F079018: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07901C:
    // 7F07901C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F079020u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F079020:
    ctx->downcount -= 2;
    // 7F079020: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F079024:
    // 7F079024: b       0x7F07903C
    {
            goto label_7F07903C;
    }

label_7F079028:
    ctx->pc = 0x7F079028u;
    ctx->downcount -= 4;
    // 7F079028: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07902C:
    // 7F07902C: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F079030:
    ctx->pc = 0x7F079030u;
    // 7F079030: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079034:
    // 7F079034: bc    16, 0, 0x7F078FD8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078FD8u;
                return;
            }
            goto label_7F078FD8;
        }
    }

label_7F079038:
    ctx->pc = 0x7F079038u;
    ctx->downcount -= 1;
    // 7F079038: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07903C:
    ctx->pc = 0x7F07903Cu;
    ctx->downcount -= 6;
    // 7F07903C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079040:
    ctx->pc = 0x7F079040u;
    // 7F079040: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F079044:
    ctx->pc = 0x7F079044u;
    // 7F079044: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F079048:
    ctx->pc = 0x7F079048u;
    // 7F079048: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07904C:
    ctx->pc = 0x7F07904Cu;
    // 7F07904C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F079050:
    ctx->pc = 0x7F079050u;
    ctx->downcount -= 24;
    // 7F079050: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F079054:
    ctx->pc = 0x7F079054u;
    // 7F079054: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F079058:
    ctx->pc = 0x7F079058u;
    // 7F079058: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07905C:
    ctx->pc = 0x7F07905Cu;
    // 7F07905C: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07905Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F079060:
    ctx->pc = 0x7F079060u;
    // 7F079060: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F079060u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F079060u);
        if (ctx->exception) return;
    }

label_7F079064:
    ctx->pc = 0x7F079064u;
    // 7F079064: stmw     r29, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F079068:
    ctx->pc = 0x7F079068u;
    // 7F079068: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07906C:
    ctx->pc = 0x7F07906Cu;
    // 7F07906C: lwz     r3, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079070:
    ctx->pc = 0x7F079070u;
    // 7F079070: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079074:
    ctx->pc = 0x7F079074u;
    // 7F079074: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F079078:
    ctx->pc = 0x7F079078u;
    // 7F079078: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07907C:
    ctx->pc = 0x7F07907Cu;
    // 7F07907C: lwz     r3, 3084(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079080:
    ctx->pc = 0x7F079080u;
    // 7F079080: cmpwi   r3, 4
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

label_7F079084:
    ctx->pc = 0x7F079084u;
    // 7F079084: bc    4, 0, 0x7F079094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079094;
        }
    }

label_7F079088:
    ctx->pc = 0x7F079088u;
    ctx->downcount -= 3;
    // 7F079088: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F07908C:
    ctx->pc = 0x7F07908Cu;
    // 7F07908C: stw     r0, 3084(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3084);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079090:
    ctx->pc = 0x7F079090u;
    // 7F079090: b       0x7F0790D8
    {
            goto label_7F0790D8;
    }

label_7F079094:
    ctx->pc = 0x7F079094u;
    ctx->downcount -= 4;
    // 7F079094: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F079098:
    ctx->pc = 0x7F079098u;
    // 7F079098: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07909C:
    ctx->pc = 0x7F07909Cu;
    // 7F07909C: cmpwi   r0, 0
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

label_7F0790A0:
    ctx->pc = 0x7F0790A0u;
    // 7F0790A0: bc    12, 2, 0x7F0790D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0790D8;
        }
    }

label_7F0790A4:
    ctx->pc = 0x7F0790A4u;
    ctx->downcount -= 3;
    // 7F0790A4: lwz     r0, 3080(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3080);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0790A8:
    ctx->pc = 0x7F0790A8u;
    // 7F0790A8: cmpwi   r0, 0
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

label_7F0790AC:
    ctx->pc = 0x7F0790ACu;
    // 7F0790AC: bc    4, 2, 0x7F0790D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0790D8;
        }
    }

label_7F0790B0:
    ctx->pc = 0x7F0790B0u;
    ctx->downcount -= 2;
    // 7F0790B0: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F0790B4:
    ctx->pc = 0x7F0790B4u;
    // 7F0790B4: bl      0x7F0208F8
    {
            ctx->lr = 0x7F0790B8u;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F0790B8:
    ctx->pc = 0x7F0790B8u;
    ctx->downcount -= 8;
    // 7F0790B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0790BC:
    ctx->pc = 0x7F0790BCu;
    // 7F0790BC: li      r3, -260
    ctx->gpr[3] = (u32)(s32)(-260);

label_7F0790C0:
    ctx->pc = 0x7F0790C0u;
    // 7F0790C0: addi    r5, r4, 14080
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F0790C4:
    ctx->pc = 0x7F0790C4u;
    // 7F0790C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0790C8:
    ctx->pc = 0x7F0790C8u;
    // 7F0790C8: lwz     r4, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0790CC:
    ctx->pc = 0x7F0790CCu;
    // 7F0790CC: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F0790D0:
    ctx->pc = 0x7F0790D0u;
    // 7F0790D0: stw     r3, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0790D4:
    ctx->pc = 0x7F0790D4u;
    // 7F0790D4: stw     r0, 3080(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0790D8:
    ctx->pc = 0x7F0790D8u;
    ctx->downcount -= 3;
    // 7F0790D8: lwz     r0, 3080(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3080);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0790DC:
    ctx->pc = 0x7F0790DCu;
    // 7F0790DC: cmpwi   r0, 1
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

label_7F0790E0:
    ctx->pc = 0x7F0790E0u;
    // 7F0790E0: bc    4, 2, 0x7F0790FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0790FC;
        }
    }

label_7F0790E4:
    ctx->pc = 0x7F0790E4u;
    ctx->downcount -= 3;
    // 7F0790E4: lwz     r3, 2944(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0790E8:
    ctx->pc = 0x7F0790E8u;
    // 7F0790E8: cmplwi  r3, 0x0000
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

label_7F0790EC:
    ctx->pc = 0x7F0790ECu;
    // 7F0790EC: bc    12, 2, 0x7F0790FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0790FC;
        }
    }

label_7F0790F0:
    ctx->pc = 0x7F0790F0u;
    ctx->downcount -= 1;
    // 7F0790F0: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F0790F4u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F0790F4:
    ctx->pc = 0x7F0790F4u;
    ctx->downcount -= 2;
    // 7F0790F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0790F8:
    ctx->pc = 0x7F0790F8u;
    // 7F0790F8: stw     r0, 2944(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0790FC:
    ctx->pc = 0x7F0790FCu;
    ctx->downcount -= 2;
    // 7F0790FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079100:
    ctx->pc = 0x7F079100u;
    // 7F079100: bl      0x7F078F94
    {
            ctx->lr = 0x7F079104u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078F94u;
                return;
            }
            goto label_7F078F94;
    }

label_7F079104:
    ctx->pc = 0x7F079104u;
    ctx->downcount -= 2;
    // 7F079104: cmpwi   r3, 1
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

label_7F079108:
    ctx->pc = 0x7F079108u;
    // 7F079108: bc    12, 2, 0x7F079134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079134;
        }
    }

label_7F07910C:
    ctx->pc = 0x7F07910Cu;
    ctx->downcount -= 1;
    // 7F07910C: bc    4, 0, 0x7F07911C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07911C;
        }
    }

label_7F079110:
    ctx->pc = 0x7F079110u;
    ctx->downcount -= 2;
    // 7F079110: cmpwi   r3, 0
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

label_7F079114:
    ctx->pc = 0x7F079114u;
    // 7F079114: bc    4, 0, 0x7F079128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079128;
        }
    }

label_7F079118:
    ctx->pc = 0x7F079118u;
    ctx->downcount -= 1;
    // 7F079118: b       0x7F07914C
    {
            goto label_7F07914C;
    }

label_7F07911C:
    ctx->pc = 0x7F07911Cu;
    ctx->downcount -= 2;
    // 7F07911C: cmpwi   r3, 3
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

label_7F079120:
    ctx->pc = 0x7F079120u;
    // 7F079120: bc    4, 0, 0x7F07914C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07914C;
        }
    }

label_7F079124:
    ctx->pc = 0x7F079124u;
    ctx->downcount -= 1;
    // 7F079124: b       0x7F079140
    {
            goto label_7F079140;
    }

label_7F079128:
    ctx->pc = 0x7F079128u;
    ctx->downcount -= 3;
    // 7F079128: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F07912C:
    ctx->pc = 0x7F07912Cu;
    // 7F07912C: stw     r0, 3052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079130:
    ctx->pc = 0x7F079130u;
    // 7F079130: b       0x7F07914C
    {
            goto label_7F07914C;
    }

label_7F079134:
    ctx->pc = 0x7F079134u;
    ctx->downcount -= 3;
    // 7F079134: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079138:
    ctx->pc = 0x7F079138u;
    // 7F079138: stw     r0, 3052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07913C:
    ctx->pc = 0x7F07913Cu;
    // 7F07913C: b       0x7F07914C
    {
            goto label_7F07914C;
    }

label_7F079140:
    ctx->pc = 0x7F079140u;
    ctx->downcount -= 3;
    // 7F079140: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F079144:
    ctx->pc = 0x7F079144u;
    // 7F079144: stw     r0, 3060(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079148:
    ctx->pc = 0x7F079148u;
    // 7F079148: b       0x7F079FE0
    {
            goto label_7F079FE0;
    }

label_7F07914C:
    ctx->pc = 0x7F07914Cu;
    ctx->downcount -= 2;
    // 7F07914C: addi    r3, r29, 432
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(432);

label_7F079150:
    ctx->pc = 0x7F079150u;
    // 7F079150: bl      0x7F04291C
    {
            ctx->lr = 0x7F079154u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F079154:
    ctx->pc = 0x7F079154u;
    ctx->downcount -= 2;
    // 7F079154: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079158:
    ctx->pc = 0x7F079158u;
    // 7F079158: bl      0x7F023170
    {
            ctx->lr = 0x7F07915Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F07915C:
    ctx->pc = 0x7F07915Cu;
    ctx->downcount -= 2;
    // 7F07915C: addi    r3, r29, 432
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(432);

label_7F079160:
    ctx->pc = 0x7F079160u;
    // 7F079160: bl      0x7F0429C4
    {
            ctx->lr = 0x7F079164u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F079164:
    ctx->pc = 0x7F079164u;
    ctx->downcount -= 5;
    // 7F079164: lwz     r5, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079168:
    ctx->pc = 0x7F079168u;
    // 7F079168: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F07916C:
    ctx->pc = 0x7F07916Cu;
    // 7F07916C: addi    r4, r29, 564
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(564);

label_7F079170:
    ctx->pc = 0x7F079170u;
    // 7F079170: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F079174:
    ctx->pc = 0x7F079174u;
    // 7F079174: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F079178u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F079178:
    ctx->pc = 0x7F079178u;
    ctx->downcount -= 3;
    // 7F079178: lwz     r0, 5456(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5456);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07917C:
    ctx->pc = 0x7F07917Cu;
    // 7F07917C: cmplwi  r0, 0x0000
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

label_7F079180:
    ctx->pc = 0x7F079180u;
    // 7F079180: bc    12, 2, 0x7F079264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079264;
        }
    }

label_7F079184:
    ctx->pc = 0x7F079184u;
    ctx->downcount -= 14;
    // 7F079184: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F079188:
    ctx->pc = 0x7F079188u;
    // 7F079188: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F07918C:
    ctx->pc = 0x7F07918Cu;
    // 7F07918C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F079190:
    ctx->pc = 0x7F079190u;
    // 7F079190: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F079194:
    ctx->pc = 0x7F079194u;
    // 7F079194: addi    r8, r6, 20892
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20892);

label_7F079198:
    ctx->pc = 0x7F079198u;
    // 7F079198: addi    r5, r5, 20896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20896);

label_7F07919C:
    ctx->pc = 0x7F07919Cu;
    // 7F07919C: addi    r6, r4, 20900
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20900);

label_7F0791A0:
    ctx->pc = 0x7F0791A0u;
    // 7F0791A0: addi    r7, r3, 20904
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(20904);

label_7F0791A4:
    ctx->pc = 0x7F0791A4u;
    // 7F0791A4: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0791A8:
    ctx->pc = 0x7F0791A8u;
    // 7F0791A8: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F0791AC:
    ctx->pc = 0x7F0791ACu;
    // 7F0791AC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0791B0:
    ctx->pc = 0x7F0791B0u;
    // 7F0791B0: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0791B4:
    ctx->pc = 0x7F0791B4u;
    // 7F0791B4: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0791B8:
    ctx->pc = 0x7F0791B8u;
    // 7F0791B8: bl      0x7F031B64
    {
            ctx->lr = 0x7F0791BCu;
            ctx->pc = 0x7F031B64u;
            return;
    }

label_7F0791BC:
    ctx->pc = 0x7F0791BCu;
    ctx->downcount -= 49;
    // 7F0791BC: lwz     r4, 1600(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1600);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0791C0:
    ctx->pc = 0x7F0791C0u;
    // 7F0791C0: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F0791C4:
    ctx->pc = 0x7F0791C4u;
    // 7F0791C4: lwz     r0, 1596(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0791C8:
    ctx->pc = 0x7F0791C8u;
    // 7F0791C8: rlwinm r7, r3, 0, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F0791CC:
    ctx->pc = 0x7F0791CCu;
    // 7F0791CC: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0791D0:
    ctx->pc = 0x7F0791D0u;
    // 7F0791D0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0791D4:
    ctx->pc = 0x7F0791D4u;
    // 7F0791D4: stw     r4, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0791D8:
    ctx->pc = 0x7F0791D8u;
    // 7F0791D8: addi    r3, r5, -8008
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-8008);

label_7F0791DC:
    ctx->pc = 0x7F0791DCu;
    // 7F0791DC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0791E0:
    ctx->pc = 0x7F0791E0u;
    // 7F0791E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0791E4:
    ctx->pc = 0x7F0791E4u;
    // 7F0791E4: stw     r6, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0791E8:
    ctx->pc = 0x7F0791E8u;
    // 7F0791E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0791EC:
    ctx->pc = 0x7F0791ECu;
    // 7F0791EC: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0791ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0791F0:
    ctx->pc = 0x7F0791F0u;
    // 7F0791F0: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0791F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0791F4:
    ctx->pc = 0x7F0791F4u;
    // 7F0791F4: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0791F8:
    ctx->pc = 0x7F0791F8u;
    // 7F0791F8: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0791F8u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F0791FC:
    ctx->pc = 0x7F0791FCu;
    // 7F0791FC: lfd     f4, -7920(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0791FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7920);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079200:
    ctx->pc = 0x7F079200u;
    // 7F079200: stw     r6, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079204:
    ctx->pc = 0x7F079204u;
    // 7F079204: lfs     f3, -7992(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079204u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F079208:
    ctx->pc = 0x7F079208u;
    // 7F079208: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079208u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07920C:
    ctx->pc = 0x7F07920Cu;
    // 7F07920C: stw     r7, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F079210:
    ctx->pc = 0x7F079210u;
    // 7F079210: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079210u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F079214:
    ctx->pc = 0x7F079214u;
    // 7F079214: stw     r6, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079218:
    ctx->pc = 0x7F079218u;
    // 7F079218: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079218u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F07921C:
    ctx->pc = 0x7F07921Cu;
    // 7F07921C: lfd     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07921Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079220:
    ctx->pc = 0x7F079220u;
    // 7F079220: fsubs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079220u)) return;
    ppc_fsubs(ctx, 1, 1, 4);

label_7F079224:
    ctx->pc = 0x7F079224u;
    // 7F079224: fsubs   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079224u)) return;
    ppc_fsubs(ctx, 0, 3, 0);

label_7F079228:
    ctx->pc = 0x7F079228u;
    // 7F079228: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079228u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F07922C:
    ctx->pc = 0x7F07922Cu;
    // 7F07922C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07922Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F079230:
    ctx->pc = 0x7F079230u;
    // 7F079230: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F079234:
    ctx->pc = 0x7F079234u;
    // 7F079234: lwz     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079238:
    ctx->pc = 0x7F079238u;
    // 7F079238: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F07923C:
    ctx->pc = 0x7F07923Cu;
    // 7F07923C: bl      0x80052050
    {
            ctx->lr = 0x7F079240u;
            ctx->pc = 0x80052050u;
            return;
    }

label_7F079240:
    ctx->pc = 0x7F079240u;
    ctx->downcount -= 5;
    // 7F079240: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F079244:
    ctx->pc = 0x7F079244u;
    // 7F079244: lwz     r3, 5456(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079248:
    ctx->pc = 0x7F079248u;
    // 7F079248: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F07924C:
    ctx->pc = 0x7F07924Cu;
    // 7F07924C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F079250:
    ctx->pc = 0x7F079250u;
    // 7F079250: bl      0x800506B8
    {
            ctx->lr = 0x7F079254u;
            ctx->pc = 0x800506B8u;
            return;
    }

label_7F079254:
    ctx->pc = 0x7F079254u;
    ctx->downcount -= 3;
    // 7F079254: lwz     r3, 5456(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079258:
    ctx->pc = 0x7F079258u;
    // 7F079258: addi    r4, r29, 32
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(32);

label_7F07925C:
    ctx->pc = 0x7F07925Cu;
    // 7F07925C: bl      0x800510DC
    {
            ctx->lr = 0x7F079260u;
            ctx->pc = 0x800510DCu;
            return;
    }

label_7F079260:
    ctx->pc = 0x7F079260u;
    ctx->downcount -= 1;
    // 7F079260: b       0x7F079298
    {
            goto label_7F079298;
    }

label_7F079264:
    ctx->pc = 0x7F079264u;
    ctx->downcount -= 6;
    // 7F079264: li      r3, 2074
    ctx->gpr[3] = (u32)(s32)(2074);

label_7F079268:
    ctx->pc = 0x7F079268u;
    // 7F079268: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07926C:
    ctx->pc = 0x7F07926Cu;
    // 7F07926C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F079270:
    ctx->pc = 0x7F079270u;
    // 7F079270: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F079274:
    ctx->pc = 0x7F079274u;
    // 7F079274: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F079278:
    ctx->pc = 0x7F079278u;
    // 7F079278: bl      0x8004F994
    {
            ctx->lr = 0x7F07927Cu;
            ctx->pc = 0x8004F994u;
            return;
    }

label_7F07927C:
    ctx->pc = 0x7F07927Cu;
    ctx->downcount -= 6;
    // 7F07927C: addi    r5, r29, 32
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079280:
    ctx->pc = 0x7F079280u;
    // 7F079280: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F079284:
    ctx->pc = 0x7F079284u;
    // 7F079284: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F079288:
    ctx->pc = 0x7F079288u;
    // 7F079288: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07928C:
    ctx->pc = 0x7F07928Cu;
    // 7F07928C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F079290:
    ctx->pc = 0x7F079290u;
    // 7F079290: bl      0x80050158
    {
            ctx->lr = 0x7F079294u;
            ctx->pc = 0x80050158u;
            return;
    }

label_7F079294:
    ctx->pc = 0x7F079294u;
    ctx->downcount -= 1;
    // 7F079294: stw     r3, 5456(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5456);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079298:
    ctx->pc = 0x7F079298u;
    ctx->downcount -= 3;
    // 7F079298: lwz     r0, 5464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07929C:
    ctx->pc = 0x7F07929Cu;
    // 7F07929C: cmplwi  r0, 0x0000
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

label_7F0792A0:
    ctx->pc = 0x7F0792A0u;
    // 7F0792A0: bc    12, 2, 0x7F079304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079304;
        }
    }

label_7F0792A4:
    ctx->pc = 0x7F0792A4u;
    ctx->downcount -= 14;
    // 7F0792A4: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F0792A8:
    ctx->pc = 0x7F0792A8u;
    // 7F0792A8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F0792AC:
    ctx->pc = 0x7F0792ACu;
    // 7F0792AC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0792B0:
    ctx->pc = 0x7F0792B0u;
    // 7F0792B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0792B4:
    ctx->pc = 0x7F0792B4u;
    // 7F0792B4: addi    r8, r6, 20892
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20892);

label_7F0792B8:
    ctx->pc = 0x7F0792B8u;
    // 7F0792B8: addi    r5, r5, 20896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20896);

label_7F0792BC:
    ctx->pc = 0x7F0792BCu;
    // 7F0792BC: addi    r6, r4, 20900
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20900);

label_7F0792C0:
    ctx->pc = 0x7F0792C0u;
    // 7F0792C0: addi    r7, r3, 20904
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(20904);

label_7F0792C4:
    ctx->pc = 0x7F0792C4u;
    // 7F0792C4: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0792C8:
    ctx->pc = 0x7F0792C8u;
    // 7F0792C8: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F0792CC:
    ctx->pc = 0x7F0792CCu;
    // 7F0792CC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0792D0:
    ctx->pc = 0x7F0792D0u;
    // 7F0792D0: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0792D4:
    ctx->pc = 0x7F0792D4u;
    // 7F0792D4: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0792D8:
    ctx->pc = 0x7F0792D8u;
    // 7F0792D8: bl      0x7F031B64
    {
            ctx->lr = 0x7F0792DCu;
            ctx->pc = 0x7F031B64u;
            return;
    }

label_7F0792DC:
    ctx->pc = 0x7F0792DCu;
    ctx->downcount -= 2;
    // 7F0792DC: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F0792E0:
    ctx->pc = 0x7F0792E0u;
    // 7F0792E0: bl      0x80052050
    {
            ctx->lr = 0x7F0792E4u;
            ctx->pc = 0x80052050u;
            return;
    }

label_7F0792E4:
    ctx->pc = 0x7F0792E4u;
    ctx->downcount -= 4;
    // 7F0792E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0792E8:
    ctx->pc = 0x7F0792E8u;
    // 7F0792E8: lwz     r3, 5464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0792EC:
    ctx->pc = 0x7F0792ECu;
    // 7F0792EC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0792F0:
    ctx->pc = 0x7F0792F0u;
    // 7F0792F0: bl      0x800506B8
    {
            ctx->lr = 0x7F0792F4u;
            ctx->pc = 0x800506B8u;
            return;
    }

label_7F0792F4:
    ctx->pc = 0x7F0792F4u;
    ctx->downcount -= 3;
    // 7F0792F4: lwz     r3, 5464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0792F8:
    ctx->pc = 0x7F0792F8u;
    // 7F0792F8: addi    r4, r29, 32
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(32);

label_7F0792FC:
    ctx->pc = 0x7F0792FCu;
    // 7F0792FC: bl      0x800510DC
    {
            ctx->lr = 0x7F079300u;
            ctx->pc = 0x800510DCu;
            return;
    }

label_7F079300:
    ctx->pc = 0x7F079300u;
    ctx->downcount -= 1;
    // 7F079300: b       0x7F079338
    {
            goto label_7F079338;
    }

label_7F079304:
    ctx->pc = 0x7F079304u;
    ctx->downcount -= 6;
    // 7F079304: li      r3, 2069
    ctx->gpr[3] = (u32)(s32)(2069);

label_7F079308:
    ctx->pc = 0x7F079308u;
    // 7F079308: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07930C:
    ctx->pc = 0x7F07930Cu;
    // 7F07930C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F079310:
    ctx->pc = 0x7F079310u;
    // 7F079310: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F079314:
    ctx->pc = 0x7F079314u;
    // 7F079314: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F079318:
    ctx->pc = 0x7F079318u;
    // 7F079318: bl      0x8004F994
    {
            ctx->lr = 0x7F07931Cu;
            ctx->pc = 0x8004F994u;
            return;
    }

label_7F07931C:
    ctx->pc = 0x7F07931Cu;
    ctx->downcount -= 6;
    // 7F07931C: addi    r5, r29, 32
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079320:
    ctx->pc = 0x7F079320u;
    // 7F079320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F079324:
    ctx->pc = 0x7F079324u;
    // 7F079324: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F079328:
    ctx->pc = 0x7F079328u;
    // 7F079328: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07932C:
    ctx->pc = 0x7F07932Cu;
    // 7F07932C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F079330:
    ctx->pc = 0x7F079330u;
    // 7F079330: bl      0x80050158
    {
            ctx->lr = 0x7F079334u;
            ctx->pc = 0x80050158u;
            return;
    }

label_7F079334:
    ctx->pc = 0x7F079334u;
    ctx->downcount -= 1;
    // 7F079334: stw     r3, 5464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5464);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079338:
    ctx->pc = 0x7F079338u;
    ctx->downcount -= 9;
    // 7F079338: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07933C:
    ctx->pc = 0x7F07933Cu;
    // 7F07933C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F079340:
    ctx->pc = 0x7F079340u;
    // 7F079340: addi    r4, r3, -7972
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7972);

label_7F079344:
    ctx->pc = 0x7F079344u;
    // 7F079344: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F079348:
    ctx->pc = 0x7F079348u;
    // 7F079348: addi    r5, r5, 20888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20888);

label_7F07934C:
    ctx->pc = 0x7F07934Cu;
    // 7F07934C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07934Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079350:
    ctx->pc = 0x7F079350u;
    // 7F079350: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F079354:
    ctx->pc = 0x7F079354u;
    // 7F079354: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F079358:
    ctx->downcount -= 6;
    // 7F079358: add   r6, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F07935C:
    ctx->pc = 0x7F07935Cu;
    // 7F07935C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07935Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079360:
    ctx->pc = 0x7F079360u;
    // 7F079360: lfs     f2, 628(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F079360u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079364:
    ctx->pc = 0x7F079364u;
    // 7F079364: fmuls   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079364u)) return;
    ppc_fmuls(ctx, 2, 2, 1);

label_7F079368:
    ctx->pc = 0x7F079368u;
    // 7F079368: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079368u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F07936C:
    // 7F07936C: bc    4, 1, 0x7F079374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079374;
        }
    }

label_7F079370:
    ctx->pc = 0x7F079370u;
    ctx->downcount -= 1;
    // 7F079370: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079370u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079374:
    ctx->pc = 0x7F079374u;
    ctx->downcount -= 3;
    // 7F079374: stfs     f2, 628(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F079374u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(628);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079378:
    // 7F079378: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F07937C:
    // 7F07937C: bc    16, 0, 0x7F079358
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F079358u;
                return;
            }
            goto label_7F079358;
        }
    }

label_7F079380:
    ctx->pc = 0x7F079380u;
    ctx->downcount -= 6;
    // 7F079380: lwz     r5, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079384:
    ctx->pc = 0x7F079384u;
    // 7F079384: addi    r3, r29, 476
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(476);

label_7F079388:
    ctx->pc = 0x7F079388u;
    // 7F079388: lwz     r4, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07938C:
    ctx->pc = 0x7F07938Cu;
    // 7F07938C: addi    r0, r5, 2712
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2712);

label_7F079390:
    ctx->pc = 0x7F079390u;
    // 7F079390: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079394:
    ctx->pc = 0x7F079394u;
    // 7F079394: bl      0x7F0427FC
    {
            ctx->lr = 0x7F079398u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F079398:
    ctx->pc = 0x7F079398u;
    ctx->downcount -= 5;
    // 7F079398: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F07939C:
    ctx->pc = 0x7F07939Cu;
    // 7F07939C: addi    r5, r29, 688
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(688);

label_7F0793A0:
    ctx->pc = 0x7F0793A0u;
    // 7F0793A0: addi    r4, r29, 560
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(560);

label_7F0793A4:
    ctx->pc = 0x7F0793A4u;
    // 7F0793A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0793A8:
    loop_7F0793A8(ctx);
    if (ctx->pc == 0x7F0793BCu) goto label_7F0793BC;
    return;
label_7F0793AC:
    ctx->pc = 0x7F0793ACu;
    // 7F0793AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0793B0:
    ctx->pc = 0x7F0793B0u;
    // 7F0793B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0793B4:
    ctx->pc = 0x7F0793B4u;
    // 7F0793B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0793B8:
    // 7F0793B8: bc    16, 0, 0x7F0793A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0793A8u;
                return;
            }
            goto label_7F0793A8;
        }
    }

label_7F0793BC:
    ctx->pc = 0x7F0793BCu;
    ctx->downcount -= 5;
    // 7F0793BC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0793C0:
    ctx->pc = 0x7F0793C0u;
    // 7F0793C0: addi    r5, r29, 752
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(752);

label_7F0793C4:
    ctx->pc = 0x7F0793C4u;
    // 7F0793C4: addi    r4, r29, 624
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(624);

label_7F0793C8:
    ctx->pc = 0x7F0793C8u;
    // 7F0793C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0793CC:
    loop_7F0793CC(ctx);
    if (ctx->pc == 0x7F0793E0u) goto label_7F0793E0;
    return;
label_7F0793D0:
    ctx->pc = 0x7F0793D0u;
    // 7F0793D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0793D4:
    ctx->pc = 0x7F0793D4u;
    // 7F0793D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0793D8:
    ctx->pc = 0x7F0793D8u;
    // 7F0793D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0793DC:
    // 7F0793DC: bc    16, 0, 0x7F0793CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0793CCu;
                return;
            }
            goto label_7F0793CC;
        }
    }

label_7F0793E0:
    ctx->pc = 0x7F0793E0u;
    ctx->downcount -= 6;
    // 7F0793E0: lwz     r5, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0793E4:
    ctx->pc = 0x7F0793E4u;
    // 7F0793E4: addi    r3, r29, 520
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(520);

label_7F0793E8:
    ctx->pc = 0x7F0793E8u;
    // 7F0793E8: lwz     r4, 520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(520);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0793EC:
    ctx->pc = 0x7F0793ECu;
    // 7F0793EC: addi    r0, r5, 3036
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(3036);

label_7F0793F0:
    ctx->pc = 0x7F0793F0u;
    // 7F0793F0: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0793F4:
    ctx->pc = 0x7F0793F4u;
    // 7F0793F4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0793F8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0793F8:
    ctx->pc = 0x7F0793F8u;
    ctx->downcount -= 5;
    // 7F0793F8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0793FC:
    ctx->pc = 0x7F0793FCu;
    // 7F0793FC: addi    r5, r29, 816
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(816);

label_7F079400:
    ctx->pc = 0x7F079400u;
    // 7F079400: addi    r4, r29, 560
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(560);

label_7F079404:
    ctx->pc = 0x7F079404u;
    // 7F079404: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F079408:
    loop_7F079408(ctx);
    if (ctx->pc == 0x7F07941Cu) goto label_7F07941C;
    return;
label_7F07940C:
    ctx->pc = 0x7F07940Cu;
    // 7F07940C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F079410:
    ctx->pc = 0x7F079410u;
    // 7F079410: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079414:
    ctx->pc = 0x7F079414u;
    // 7F079414: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F079418:
    // 7F079418: bc    16, 0, 0x7F079408
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F079408u;
                return;
            }
            goto label_7F079408;
        }
    }

label_7F07941C:
    ctx->pc = 0x7F07941Cu;
    ctx->downcount -= 5;
    // 7F07941C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F079420:
    ctx->pc = 0x7F079420u;
    // 7F079420: addi    r5, r29, 880
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(880);

label_7F079424:
    ctx->pc = 0x7F079424u;
    // 7F079424: addi    r4, r29, 624
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(624);

label_7F079428:
    ctx->pc = 0x7F079428u;
    // 7F079428: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F07942C:
    loop_7F07942C(ctx);
    if (ctx->pc == 0x7F079440u) goto label_7F079440;
    return;
label_7F079430:
    ctx->pc = 0x7F079430u;
    // 7F079430: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F079434:
    ctx->pc = 0x7F079434u;
    // 7F079434: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079438:
    ctx->pc = 0x7F079438u;
    // 7F079438: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F07943C:
    // 7F07943C: bc    16, 0, 0x7F07942C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07942Cu;
                return;
            }
            goto label_7F07942C;
        }
    }

label_7F079440:
    ctx->pc = 0x7F079440u;
    ctx->downcount -= 3;
    // 7F079440: lwz     r0, 2304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079444:
    ctx->pc = 0x7F079444u;
    // 7F079444: cmpwi   r0, 2
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

label_7F079448:
    ctx->pc = 0x7F079448u;
    // 7F079448: bc    12, 2, 0x7F0794F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0794F4;
        }
    }

label_7F07944C:
    ctx->pc = 0x7F07944Cu;
    ctx->downcount -= 1;
    // 7F07944C: bc    4, 0, 0x7F079460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079460;
        }
    }

label_7F079450:
    ctx->pc = 0x7F079450u;
    ctx->downcount -= 2;
    // 7F079450: cmpwi   r0, 0
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

label_7F079454:
    ctx->pc = 0x7F079454u;
    // 7F079454: bc    12, 2, 0x7F079470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079470;
        }
    }

label_7F079458:
    ctx->pc = 0x7F079458u;
    ctx->downcount -= 1;
    // 7F079458: bc    4, 0, 0x7F079484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079484;
        }
    }

label_7F07945C:
    ctx->pc = 0x7F07945Cu;
    ctx->downcount -= 1;
    // 7F07945C: b       0x7F0795D0
    {
            goto label_7F0795D0;
    }

label_7F079460:
    ctx->pc = 0x7F079460u;
    ctx->downcount -= 2;
    // 7F079460: cmpwi   r0, 4
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

label_7F079464:
    ctx->pc = 0x7F079464u;
    // 7F079464: bc    12, 2, 0x7F0795A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0795A0;
        }
    }

label_7F079468:
    ctx->pc = 0x7F079468u;
    ctx->downcount -= 1;
    // 7F079468: bc    4, 0, 0x7F0795D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0795D0;
        }
    }

label_7F07946C:
    ctx->pc = 0x7F07946Cu;
    ctx->downcount -= 1;
    // 7F07946C: b       0x7F079520
    {
            goto label_7F079520;
    }

label_7F079470:
    ctx->pc = 0x7F079470u;
    ctx->downcount -= 5;
    // 7F079470: lwz     r3, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079474:
    ctx->pc = 0x7F079474u;
    // 7F079474: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079478:
    ctx->pc = 0x7F079478u;
    // 7F079478: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F07947C:
    ctx->pc = 0x7F07947Cu;
    // 7F07947C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079480:
    ctx->pc = 0x7F079480u;
    // 7F079480: b       0x7F0795D0
    {
            goto label_7F0795D0;
    }

label_7F079484:
    ctx->pc = 0x7F079484u;
    ctx->downcount -= 11;
    // 7F079484: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079488:
    ctx->pc = 0x7F079488u;
    // 7F079488: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F07948C:
    ctx->pc = 0x7F07948Cu;
    // 7F07948C: addi    r4, r29, 2420
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2420);

label_7F079490:
    ctx->pc = 0x7F079490u;
    // 7F079490: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079494:
    ctx->pc = 0x7F079494u;
    // 7F079494: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079498:
    ctx->pc = 0x7F079498u;
    // 7F079498: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07949C:
    ctx->pc = 0x7F07949Cu;
    // 7F07949C: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0794A0:
    ctx->pc = 0x7F0794A0u;
    // 7F0794A0: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0794A4:
    ctx->pc = 0x7F0794A4u;
    // 7F0794A4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0794A8:
    ctx->pc = 0x7F0794A8u;
    // 7F0794A8: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0794AC:
    ctx->pc = 0x7F0794ACu;
    // 7F0794AC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0794B0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0794B0:
    ctx->pc = 0x7F0794B0u;
    ctx->downcount -= 2;
    // 7F0794B0: addi    r3, r29, 2312
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2312);

label_7F0794B4:
    ctx->pc = 0x7F0794B4u;
    // 7F0794B4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0794B8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0794B8:
    ctx->pc = 0x7F0794B8u;
    ctx->downcount -= 14;
    // 7F0794B8: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794BC:
    ctx->pc = 0x7F0794BCu;
    // 7F0794BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0794C0:
    ctx->pc = 0x7F0794C0u;
    // 7F0794C0: addi    r5, r3, -7968
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7968);

label_7F0794C4:
    ctx->pc = 0x7F0794C4u;
    // 7F0794C4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0794C8:
    ctx->pc = 0x7F0794C8u;
    // 7F0794C8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0794C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0794CC:
    ctx->pc = 0x7F0794CCu;
    // 7F0794CC: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794D0:
    ctx->pc = 0x7F0794D0u;
    // 7F0794D0: stfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0794D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0794D4:
    ctx->pc = 0x7F0794D4u;
    // 7F0794D4: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794D8:
    ctx->pc = 0x7F0794D8u;
    // 7F0794D8: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794DC:
    ctx->pc = 0x7F0794DCu;
    // 7F0794DC: stfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0794DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0794E0:
    ctx->pc = 0x7F0794E0u;
    // 7F0794E0: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794E4:
    ctx->pc = 0x7F0794E4u;
    // 7F0794E4: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794E8:
    ctx->pc = 0x7F0794E8u;
    // 7F0794E8: stfs     f0, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0794E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0794EC:
    ctx->pc = 0x7F0794ECu;
    // 7F0794EC: bl      0x7F078DB8
    {
            ctx->lr = 0x7F0794F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078DB8u;
                return;
            }
            goto label_7F078DB8;
    }

label_7F0794F0:
    ctx->pc = 0x7F0794F0u;
    ctx->downcount -= 1;
    // 7F0794F0: b       0x7F0795D0
    {
            goto label_7F0795D0;
    }

label_7F0794F4:
    ctx->pc = 0x7F0794F4u;
    ctx->downcount -= 10;
    // 7F0794F4: lwz     r4, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0794F8:
    ctx->pc = 0x7F0794F8u;
    // 7F0794F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0794FC:
    ctx->pc = 0x7F0794FCu;
    // 7F0794FC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079500:
    ctx->pc = 0x7F079500u;
    // 7F079500: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079504:
    ctx->pc = 0x7F079504u;
    // 7F079504: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079508:
    ctx->pc = 0x7F079508u;
    // 7F079508: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07950C:
    ctx->pc = 0x7F07950Cu;
    // 7F07950C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079510:
    ctx->pc = 0x7F079510u;
    // 7F079510: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079514:
    ctx->pc = 0x7F079514u;
    // 7F079514: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079518:
    ctx->pc = 0x7F079518u;
    // 7F079518: bl      0x7F078DB8
    {
            ctx->lr = 0x7F07951Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078DB8u;
                return;
            }
            goto label_7F078DB8;
    }

label_7F07951C:
    ctx->pc = 0x7F07951Cu;
    ctx->downcount -= 1;
    // 7F07951C: b       0x7F0795D0
    {
            goto label_7F0795D0;
    }

label_7F079520:
    ctx->pc = 0x7F079520u;
    ctx->downcount -= 15;
    // 7F079520: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079524:
    ctx->pc = 0x7F079524u;
    // 7F079524: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F079528:
    ctx->pc = 0x7F079528u;
    // 7F079528: addi    r4, r29, 2420
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2420);

label_7F07952C:
    ctx->pc = 0x7F07952Cu;
    // 7F07952C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079530:
    ctx->pc = 0x7F079530u;
    // 7F079530: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079534:
    ctx->pc = 0x7F079534u;
    // 7F079534: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079538:
    ctx->pc = 0x7F079538u;
    // 7F079538: lwz     r5, 520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(520);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07953C:
    ctx->pc = 0x7F07953Cu;
    // 7F07953C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079540:
    ctx->pc = 0x7F079540u;
    // 7F079540: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079544:
    ctx->pc = 0x7F079544u;
    // 7F079544: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079548:
    ctx->pc = 0x7F079548u;
    // 7F079548: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07954C:
    ctx->pc = 0x7F07954Cu;
    // 7F07954C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079550:
    ctx->pc = 0x7F079550u;
    // 7F079550: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F079554:
    ctx->pc = 0x7F079554u;
    // 7F079554: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079558:
    ctx->pc = 0x7F079558u;
    // 7F079558: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F07955Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F07955C:
    ctx->pc = 0x7F07955Cu;
    ctx->downcount -= 2;
    // 7F07955C: addi    r3, r29, 2312
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2312);

label_7F079560:
    ctx->pc = 0x7F079560u;
    // 7F079560: bl      0x7F0427FC
    {
            ctx->lr = 0x7F079564u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F079564:
    ctx->pc = 0x7F079564u;
    ctx->downcount -= 14;
    // 7F079564: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079568:
    ctx->pc = 0x7F079568u;
    // 7F079568: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07956C:
    ctx->pc = 0x7F07956Cu;
    // 7F07956C: addi    r5, r3, -7968
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7968);

label_7F079570:
    ctx->pc = 0x7F079570u;
    // 7F079570: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079574:
    ctx->pc = 0x7F079574u;
    // 7F079574: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F079574u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079578:
    ctx->pc = 0x7F079578u;
    // 7F079578: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07957C:
    ctx->pc = 0x7F07957Cu;
    // 7F07957C: stfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07957Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079580:
    ctx->pc = 0x7F079580u;
    // 7F079580: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079584:
    ctx->pc = 0x7F079584u;
    // 7F079584: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079588:
    ctx->pc = 0x7F079588u;
    // 7F079588: stfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079588u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07958C:
    ctx->pc = 0x7F07958Cu;
    // 7F07958C: lwz     r4, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079590:
    ctx->pc = 0x7F079590u;
    // 7F079590: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079594:
    ctx->pc = 0x7F079594u;
    // 7F079594: stfs     f0, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079594u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079598:
    ctx->pc = 0x7F079598u;
    // 7F079598: bl      0x7F078DB8
    {
            ctx->lr = 0x7F07959Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078DB8u;
                return;
            }
            goto label_7F078DB8;
    }

label_7F07959C:
    ctx->pc = 0x7F07959Cu;
    ctx->downcount -= 1;
    // 7F07959C: b       0x7F0795D0
    {
            goto label_7F0795D0;
    }

label_7F0795A0:
    ctx->pc = 0x7F0795A0u;
    ctx->downcount -= 12;
    // 7F0795A0: lwz     r3, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0795A4:
    ctx->pc = 0x7F0795A4u;
    // 7F0795A4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0795A8:
    ctx->pc = 0x7F0795A8u;
    // 7F0795A8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0795AC:
    ctx->pc = 0x7F0795ACu;
    // 7F0795AC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0795B0:
    ctx->pc = 0x7F0795B0u;
    // 7F0795B0: lwz     r3, 520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0795B4:
    ctx->pc = 0x7F0795B4u;
    // 7F0795B4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0795B8:
    ctx->pc = 0x7F0795B8u;
    // 7F0795B8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0795BC:
    ctx->pc = 0x7F0795BCu;
    // 7F0795BC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0795C0:
    ctx->pc = 0x7F0795C0u;
    // 7F0795C0: lwz     r3, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0795C4:
    ctx->pc = 0x7F0795C4u;
    // 7F0795C4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0795C8:
    ctx->pc = 0x7F0795C8u;
    // 7F0795C8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0795CC:
    ctx->pc = 0x7F0795CCu;
    // 7F0795CC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0795D0:
    ctx->pc = 0x7F0795D0u;
    ctx->downcount -= 3;
    // 7F0795D0: lwz     r3, 2308(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0795D4:
    ctx->pc = 0x7F0795D4u;
    // 7F0795D4: cmpwi   r3, 12
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0795D8:
    ctx->pc = 0x7F0795D8u;
    // 7F0795D8: bc    12, 2, 0x7F079730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079730;
        }
    }

label_7F0795DC:
    ctx->pc = 0x7F0795DCu;
    ctx->downcount -= 1;
    // 7F0795DC: bc    4, 0, 0x7F0795F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0795F8;
        }
    }

label_7F0795E0:
    ctx->pc = 0x7F0795E0u;
    ctx->downcount -= 2;
    // 7F0795E0: cmpwi   r3, 0
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

label_7F0795E4:
    ctx->pc = 0x7F0795E4u;
    // 7F0795E4: bc    12, 2, 0x7F079604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079604;
        }
    }

label_7F0795E8:
    ctx->pc = 0x7F0795E8u;
    ctx->downcount -= 1;
    // 7F0795E8: bc    12, 0, 0x7F07982C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07982C;
        }
    }

label_7F0795EC:
    ctx->pc = 0x7F0795ECu;
    ctx->downcount -= 2;
    // 7F0795EC: cmpwi   r3, 11
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0795F0:
    ctx->pc = 0x7F0795F0u;
    // 7F0795F0: bc    4, 0, 0x7F079640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079640;
        }
    }

label_7F0795F4:
    ctx->pc = 0x7F0795F4u;
    ctx->downcount -= 1;
    // 7F0795F4: b       0x7F07982C
    {
            goto label_7F07982C;
    }

label_7F0795F8:
    ctx->pc = 0x7F0795F8u;
    ctx->downcount -= 2;
    // 7F0795F8: cmpwi   r3, 999
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(999);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0795FC:
    ctx->pc = 0x7F0795FCu;
    // 7F0795FC: bc    12, 2, 0x7F079630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079630;
        }
    }

label_7F079600:
    ctx->pc = 0x7F079600u;
    ctx->downcount -= 1;
    // 7F079600: b       0x7F07982C
    {
            goto label_7F07982C;
    }

label_7F079604:
    ctx->pc = 0x7F079604u;
    ctx->downcount -= 3;
    // 7F079604: lwz     r0, 5452(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079608:
    ctx->pc = 0x7F079608u;
    // 7F079608: cmpw    r0, r3
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

label_7F07960C:
    ctx->pc = 0x7F07960Cu;
    // 7F07960C: bc    12, 2, 0x7F079630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079630;
        }
    }

label_7F079610:
    ctx->pc = 0x7F079610u;
    ctx->downcount -= 2;
    // 7F079610: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F079614:
    ctx->pc = 0x7F079614u;
    // 7F079614: bl      0x7F0208F8
    {
            ctx->lr = 0x7F079618u;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F079618:
    ctx->pc = 0x7F079618u;
    ctx->downcount -= 6;
    // 7F079618: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07961C:
    ctx->pc = 0x7F07961Cu;
    // 7F07961C: li      r0, -260
    ctx->gpr[0] = (u32)(s32)(-260);

label_7F079620:
    ctx->pc = 0x7F079620u;
    // 7F079620: addi    r4, r3, 14080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F079624:
    ctx->pc = 0x7F079624u;
    // 7F079624: lwz     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079628:
    ctx->pc = 0x7F079628u;
    // 7F079628: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F07962C:
    ctx->pc = 0x7F07962Cu;
    // 7F07962C: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079630:
    ctx->pc = 0x7F079630u;
    ctx->downcount -= 4;
    // 7F079630: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079634:
    ctx->pc = 0x7F079634u;
    // 7F079634: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079638:
    ctx->pc = 0x7F079638u;
    // 7F079638: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07963C:
    ctx->pc = 0x7F07963Cu;
    // 7F07963C: b       0x7F07982C
    {
            goto label_7F07982C;
    }

label_7F079640:
    ctx->pc = 0x7F079640u;
    ctx->downcount -= 2;
    // 7F079640: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F079644:
    ctx->pc = 0x7F079644u;
    // 7F079644: bl      0x7F0208E4
    {
            ctx->lr = 0x7F079648u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F079648:
    ctx->pc = 0x7F079648u;
    ctx->downcount -= 7;
    // 7F079648: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07964C:
    ctx->pc = 0x7F07964Cu;
    // 7F07964C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079650:
    ctx->pc = 0x7F079650u;
    // 7F079650: addi    r4, r4, 14080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F079654:
    ctx->pc = 0x7F079654u;
    // 7F079654: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079658:
    ctx->pc = 0x7F079658u;
    // 7F079658: ori     r0, r0, 0x0103
    ctx->gpr[0] = ctx->gpr[0] | 0x0103u;

label_7F07965C:
    ctx->pc = 0x7F07965Cu;
    // 7F07965C: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079660:
    ctx->pc = 0x7F079660u;
    // 7F079660: bl      0x7F078DB8
    {
            ctx->lr = 0x7F079664u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078DB8u;
                return;
            }
            goto label_7F078DB8;
    }

label_7F079664:
    ctx->pc = 0x7F079664u;
    ctx->downcount -= 11;
    // 7F079664: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079668:
    ctx->pc = 0x7F079668u;
    // 7F079668: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F07966C:
    ctx->pc = 0x7F07966Cu;
    // 7F07966C: addi    r4, r29, 2420
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2420);

label_7F079670:
    ctx->pc = 0x7F079670u;
    // 7F079670: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079674:
    ctx->pc = 0x7F079674u;
    // 7F079674: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079678:
    ctx->pc = 0x7F079678u;
    // 7F079678: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07967C:
    ctx->pc = 0x7F07967Cu;
    // 7F07967C: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079680:
    ctx->pc = 0x7F079680u;
    // 7F079680: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079684:
    ctx->pc = 0x7F079684u;
    // 7F079684: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F079688:
    ctx->pc = 0x7F079688u;
    // 7F079688: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07968C:
    ctx->pc = 0x7F07968Cu;
    // 7F07968C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F079690u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F079690:
    ctx->pc = 0x7F079690u;
    ctx->downcount -= 2;
    // 7F079690: addi    r3, r29, 2312
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2312);

label_7F079694:
    ctx->pc = 0x7F079694u;
    // 7F079694: bl      0x7F0427FC
    {
            ctx->lr = 0x7F079698u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F079698:
    ctx->pc = 0x7F079698u;
    ctx->downcount -= 5;
    // 7F079698: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07969C:
    ctx->pc = 0x7F07969Cu;
    // 7F07969C: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F0796A0:
    ctx->pc = 0x7F0796A0u;
    // 7F0796A0: addi    r4, r29, 2444
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2444);

label_7F0796A4:
    ctx->pc = 0x7F0796A4u;
    // 7F0796A4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0796A8:
    ctx->pc = 0x7F0796A8u;
    // 7F0796A8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0796ACu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0796AC:
    ctx->pc = 0x7F0796ACu;
    ctx->downcount -= 33;
    // 7F0796AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0796B0:
    ctx->pc = 0x7F0796B0u;
    // 7F0796B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0796B4:
    ctx->pc = 0x7F0796B4u;
    // 7F0796B4: addi    r5, r3, -7964
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7964);

label_7F0796B8:
    ctx->pc = 0x7F0796B8u;
    // 7F0796B8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0796BC:
    ctx->pc = 0x7F0796BCu;
    // 7F0796BC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0796BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0796C0:
    ctx->pc = 0x7F0796C0u;
    // 7F0796C0: addi    r7, r4, -7960
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-7960);

label_7F0796C4:
    ctx->pc = 0x7F0796C4u;
    // 7F0796C4: lwz     r5, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0796C8:
    ctx->pc = 0x7F0796C8u;
    // 7F0796C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0796CC:
    ctx->pc = 0x7F0796CCu;
    // 7F0796CC: addi    r6, r3, -7956
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-7956);

label_7F0796D0:
    ctx->pc = 0x7F0796D0u;
    // 7F0796D0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0796D0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0796D4:
    ctx->pc = 0x7F0796D4u;
    // 7F0796D4: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0796D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0796D8:
    ctx->pc = 0x7F0796D8u;
    // 7F0796D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0796DC:
    ctx->pc = 0x7F0796DCu;
    // 7F0796DC: addi    r5, r4, -7952
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7952);

label_7F0796E0:
    ctx->pc = 0x7F0796E0u;
    // 7F0796E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0796E4:
    ctx->pc = 0x7F0796E4u;
    // 7F0796E4: lwz     r7, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0796E8:
    ctx->pc = 0x7F0796E8u;
    // 7F0796E8: addi    r4, r3, -7948
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7948);

label_7F0796EC:
    ctx->pc = 0x7F0796ECu;
    // 7F0796EC: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0796ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0796F0:
    ctx->pc = 0x7F0796F0u;
    // 7F0796F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0796F4:
    ctx->pc = 0x7F0796F4u;
    // 7F0796F4: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0796F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0796F8:
    ctx->pc = 0x7F0796F8u;
    // 7F0796F8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0796F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0796FC:
    ctx->pc = 0x7F0796FCu;
    // 7F0796FC: lwz     r5, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079700:
    ctx->pc = 0x7F079700u;
    // 7F079700: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079700u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079704:
    ctx->pc = 0x7F079704u;
    // 7F079704: stfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F079704u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079708:
    ctx->pc = 0x7F079708u;
    // 7F079708: lfs     f0, -7944(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079708u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07970C:
    ctx->pc = 0x7F07970Cu;
    // 7F07970C: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079710:
    ctx->pc = 0x7F079710u;
    // 7F079710: stfs     f2, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079710u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079714:
    ctx->pc = 0x7F079714u;
    // 7F079714: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079718:
    ctx->pc = 0x7F079718u;
    // 7F079718: stfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079718u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07971C:
    ctx->pc = 0x7F07971Cu;
    // 7F07971C: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079720:
    ctx->pc = 0x7F079720u;
    // 7F079720: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079720u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079724:
    ctx->pc = 0x7F079724u;
    // 7F079724: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079728:
    ctx->pc = 0x7F079728u;
    // 7F079728: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07972C:
    ctx->pc = 0x7F07972Cu;
    // 7F07972C: b       0x7F07982C
    {
            goto label_7F07982C;
    }

label_7F079730:
    ctx->pc = 0x7F079730u;
    ctx->downcount -= 2;
    // 7F079730: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F079734:
    ctx->pc = 0x7F079734u;
    // 7F079734: bl      0x7F0208E4
    {
            ctx->lr = 0x7F079738u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F079738:
    ctx->pc = 0x7F079738u;
    ctx->downcount -= 7;
    // 7F079738: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07973C:
    ctx->pc = 0x7F07973Cu;
    // 7F07973C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079740:
    ctx->pc = 0x7F079740u;
    // 7F079740: addi    r4, r4, 14080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F079744:
    ctx->pc = 0x7F079744u;
    // 7F079744: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079748:
    ctx->pc = 0x7F079748u;
    // 7F079748: ori     r0, r0, 0x0103
    ctx->gpr[0] = ctx->gpr[0] | 0x0103u;

label_7F07974C:
    ctx->pc = 0x7F07974Cu;
    // 7F07974C: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079750:
    ctx->pc = 0x7F079750u;
    // 7F079750: bl      0x7F078DB8
    {
            ctx->lr = 0x7F079754u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078DB8u;
                return;
            }
            goto label_7F078DB8;
    }

label_7F079754:
    ctx->pc = 0x7F079754u;
    ctx->downcount -= 15;
    // 7F079754: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079758:
    ctx->pc = 0x7F079758u;
    // 7F079758: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F07975C:
    ctx->pc = 0x7F07975Cu;
    // 7F07975C: addi    r4, r29, 2420
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2420);

label_7F079760:
    ctx->pc = 0x7F079760u;
    // 7F079760: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079764:
    ctx->pc = 0x7F079764u;
    // 7F079764: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079768:
    ctx->pc = 0x7F079768u;
    // 7F079768: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07976C:
    ctx->pc = 0x7F07976Cu;
    // 7F07976C: lwz     r5, 520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(520);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079770:
    ctx->pc = 0x7F079770u;
    // 7F079770: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079774:
    ctx->pc = 0x7F079774u;
    // 7F079774: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F079778:
    ctx->pc = 0x7F079778u;
    // 7F079778: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07977C:
    ctx->pc = 0x7F07977Cu;
    // 7F07977C: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079780:
    ctx->pc = 0x7F079780u;
    // 7F079780: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079784:
    ctx->pc = 0x7F079784u;
    // 7F079784: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F079788:
    ctx->pc = 0x7F079788u;
    // 7F079788: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07978C:
    ctx->pc = 0x7F07978Cu;
    // 7F07978C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F079790u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F079790:
    ctx->pc = 0x7F079790u;
    ctx->downcount -= 2;
    // 7F079790: addi    r3, r29, 2312
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2312);

label_7F079794:
    ctx->pc = 0x7F079794u;
    // 7F079794: bl      0x7F0427FC
    {
            ctx->lr = 0x7F079798u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F079798:
    ctx->pc = 0x7F079798u;
    ctx->downcount -= 5;
    // 7F079798: lwz     r5, 2312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07979C:
    ctx->pc = 0x7F07979Cu;
    // 7F07979C: addi    r3, r29, 2572
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2572);

label_7F0797A0:
    ctx->pc = 0x7F0797A0u;
    // 7F0797A0: addi    r4, r29, 2444
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2444);

label_7F0797A4:
    ctx->pc = 0x7F0797A4u;
    // 7F0797A4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0797A8:
    ctx->pc = 0x7F0797A8u;
    // 7F0797A8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0797ACu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0797AC:
    ctx->pc = 0x7F0797ACu;
    ctx->downcount -= 32;
    // 7F0797AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0797B0:
    ctx->pc = 0x7F0797B0u;
    // 7F0797B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0797B4:
    ctx->pc = 0x7F0797B4u;
    // 7F0797B4: addi    r5, r3, -7964
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7964);

label_7F0797B8:
    ctx->pc = 0x7F0797B8u;
    // 7F0797B8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0797BC:
    ctx->pc = 0x7F0797BCu;
    // 7F0797BC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0797BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0797C0:
    ctx->pc = 0x7F0797C0u;
    // 7F0797C0: addi    r7, r4, -7960
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-7960);

label_7F0797C4:
    ctx->pc = 0x7F0797C4u;
    // 7F0797C4: lwz     r5, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0797C8:
    ctx->pc = 0x7F0797C8u;
    // 7F0797C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0797CC:
    ctx->pc = 0x7F0797CCu;
    // 7F0797CC: addi    r6, r3, -7940
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-7940);

label_7F0797D0:
    ctx->pc = 0x7F0797D0u;
    // 7F0797D0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0797D0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0797D4:
    ctx->pc = 0x7F0797D4u;
    // 7F0797D4: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0797D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0797D8:
    ctx->pc = 0x7F0797D8u;
    // 7F0797D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0797DC:
    ctx->pc = 0x7F0797DCu;
    // 7F0797DC: addi    r5, r4, -7952
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7952);

label_7F0797E0:
    ctx->pc = 0x7F0797E0u;
    // 7F0797E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0797E4:
    ctx->pc = 0x7F0797E4u;
    // 7F0797E4: lwz     r7, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0797E8:
    ctx->pc = 0x7F0797E8u;
    // 7F0797E8: addi    r4, r3, -7948
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7948);

label_7F0797EC:
    ctx->pc = 0x7F0797ECu;
    // 7F0797EC: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0797ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0797F0:
    ctx->pc = 0x7F0797F0u;
    // 7F0797F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0797F4:
    ctx->pc = 0x7F0797F4u;
    // 7F0797F4: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0797F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0797F8:
    ctx->pc = 0x7F0797F8u;
    // 7F0797F8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0797F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0797FC:
    ctx->pc = 0x7F0797FCu;
    // 7F0797FC: lwz     r5, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079800:
    ctx->pc = 0x7F079800u;
    // 7F079800: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079800u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079804:
    ctx->pc = 0x7F079804u;
    // 7F079804: stfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F079804u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079808:
    ctx->pc = 0x7F079808u;
    // 7F079808: lfs     f0, -7944(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079808u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07980C:
    ctx->pc = 0x7F07980Cu;
    // 7F07980C: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079810:
    ctx->pc = 0x7F079810u;
    // 7F079810: stfs     f2, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079810u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079814:
    ctx->pc = 0x7F079814u;
    // 7F079814: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079818:
    ctx->pc = 0x7F079818u;
    // 7F079818: stfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079818u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07981C:
    ctx->pc = 0x7F07981Cu;
    // 7F07981C: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079820:
    ctx->pc = 0x7F079820u;
    // 7F079820: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079820u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079824:
    ctx->pc = 0x7F079824u;
    // 7F079824: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079828:
    ctx->pc = 0x7F079828u;
    // 7F079828: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07982C:
    ctx->pc = 0x7F07982Cu;
    ctx->downcount -= 4;
    // 7F07982C: lwz     r3, 5452(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079830:
    ctx->pc = 0x7F079830u;
    // 7F079830: lwz     r0, 2308(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079834:
    ctx->pc = 0x7F079834u;
    // 7F079834: cmpw    r3, r0
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

label_7F079838:
    ctx->pc = 0x7F079838u;
    // 7F079838: bc    12, 2, 0x7F079854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079854;
        }
    }

label_7F07983C:
    ctx->pc = 0x7F07983Cu;
    ctx->downcount -= 3;
    // 7F07983C: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079840:
    ctx->pc = 0x7F079840u;
    // 7F079840: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079844:
    ctx->pc = 0x7F079844u;
    // 7F079844: bl      0x7F026B44
    {
            ctx->lr = 0x7F079848u;
            ctx->pc = 0x7F026B44u;
            return;
    }

label_7F079848:
    ctx->pc = 0x7F079848u;
    ctx->downcount -= 3;
    // 7F079848: lwz     r3, 5444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07984C:
    ctx->pc = 0x7F07984Cu;
    // 7F07984C: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079850:
    ctx->pc = 0x7F079850u;
    // 7F079850: bl      0x7F026B18
    {
            ctx->lr = 0x7F079854u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F079854:
    ctx->pc = 0x7F079854u;
    ctx->downcount -= 6;
    // 7F079854: lwz     r0, 2308(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079858:
    ctx->pc = 0x7F079858u;
    // 7F079858: stw     r0, 5452(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07985C:
    ctx->pc = 0x7F07985Cu;
    // 7F07985C: lwz     r3, 1804(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1804);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079860:
    ctx->pc = 0x7F079860u;
    // 7F079860: addic.  r0, r3, -1
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

label_7F079864:
    ctx->pc = 0x7F079864u;
    // 7F079864: stw     r0, 1804(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079868:
    ctx->pc = 0x7F079868u;
    // 7F079868: bc    4, 0, 0x7F079874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079874;
        }
    }

label_7F07986C:
    ctx->pc = 0x7F07986Cu;
    ctx->downcount -= 2;
    // 7F07986C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079870:
    ctx->pc = 0x7F079870u;
    // 7F079870: stw     r0, 1804(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079874:
    ctx->pc = 0x7F079874u;
    ctx->downcount -= 3;
    // 7F079874: lwz     r3, 1808(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1808);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079878:
    ctx->pc = 0x7F079878u;
    // 7F079878: cmpwi   r3, 0
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

label_7F07987C:
    ctx->pc = 0x7F07987Cu;
    // 7F07987C: bc    4, 1, 0x7F0798E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0798E4;
        }
    }

label_7F079880:
    ctx->pc = 0x7F079880u;
    ctx->downcount -= 5;
    // 7F079880: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F079884:
    ctx->pc = 0x7F079884u;
    // 7F079884: stw     r0, 1808(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079888:
    ctx->pc = 0x7F079888u;
    // 7F079888: lwz     r0, 1808(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07988C:
    ctx->pc = 0x7F07988Cu;
    // 7F07988C: cmpwi   r0, 0
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

label_7F079890:
    ctx->pc = 0x7F079890u;
    // 7F079890: bc    4, 2, 0x7F0798E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0798E4;
        }
    }

label_7F079894:
    ctx->pc = 0x7F079894u;
    ctx->downcount -= 12;
    // 7F079894: lwz     r0, 964(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(964);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079898:
    ctx->pc = 0x7F079898u;
    // 7F079898: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F07989C:
    ctx->pc = 0x7F07989Cu;
    // 7F07989C: stw     r0, 964(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0798A0:
    ctx->pc = 0x7F0798A0u;
    // 7F0798A0: lwz     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0798A4:
    ctx->pc = 0x7F0798A4u;
    // 7F0798A4: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F0798A8:
    ctx->pc = 0x7F0798A8u;
    // 7F0798A8: stw     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0798AC:
    ctx->pc = 0x7F0798ACu;
    // 7F0798AC: lwz     r0, 1348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0798B0:
    ctx->pc = 0x7F0798B0u;
    // 7F0798B0: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F0798B4:
    ctx->pc = 0x7F0798B4u;
    // 7F0798B4: stw     r0, 1348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0798B8:
    ctx->pc = 0x7F0798B8u;
    // 7F0798B8: lwz     r0, 1600(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0798BC:
    ctx->pc = 0x7F0798BCu;
    // 7F0798BC: cmpwi   r0, 0
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

label_7F0798C0:
    ctx->pc = 0x7F0798C0u;
    // 7F0798C0: bc    12, 1, 0x7F0798E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0798E4;
        }
    }

label_7F0798C4:
    ctx->pc = 0x7F0798C4u;
    ctx->downcount -= 3;
    // 7F0798C4: lwz     r0, 2276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0798C8:
    ctx->pc = 0x7F0798C8u;
    // 7F0798C8: cmpwi   r0, 0
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

label_7F0798CC:
    ctx->pc = 0x7F0798CCu;
    // 7F0798CC: bc    4, 2, 0x7F0798E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0798E4;
        }
    }

label_7F0798D0:
    ctx->pc = 0x7F0798D0u;
    ctx->downcount -= 5;
    // 7F0798D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0798D4:
    ctx->pc = 0x7F0798D4u;
    // 7F0798D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0798D8:
    ctx->pc = 0x7F0798D8u;
    // 7F0798D8: stw     r3, 2276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0798DC:
    ctx->pc = 0x7F0798DCu;
    // 7F0798DC: stw     r0, 2112(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0798E0:
    ctx->pc = 0x7F0798E0u;
    // 7F0798E0: stw     r0, 2116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0798E4:
    ctx->pc = 0x7F0798E4u;
    ctx->downcount -= 3;
    // 7F0798E4: lwz     r0, 1720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0798E8:
    ctx->pc = 0x7F0798E8u;
    // 7F0798E8: cmpwi   r0, 3
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

label_7F0798EC:
    ctx->pc = 0x7F0798ECu;
    // 7F0798EC: bc    12, 2, 0x7F07990C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07990C;
        }
    }

label_7F0798F0:
    ctx->pc = 0x7F0798F0u;
    ctx->downcount -= 1;
    // 7F0798F0: bc    4, 0, 0x7F079914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079914;
        }
    }

label_7F0798F4:
    ctx->pc = 0x7F0798F4u;
    ctx->downcount -= 2;
    // 7F0798F4: cmpwi   r0, 2
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

label_7F0798F8:
    ctx->pc = 0x7F0798F8u;
    // 7F0798F8: bc    4, 0, 0x7F079900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079900;
        }
    }

label_7F0798FC:
    ctx->pc = 0x7F0798FCu;
    ctx->downcount -= 1;
    // 7F0798FC: b       0x7F079914
    {
            goto label_7F079914;
    }

label_7F079900:
    ctx->pc = 0x7F079900u;
    ctx->downcount -= 2;
    // 7F079900: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079904:
    ctx->pc = 0x7F079904u;
    // 7F079904: bl      0x7F08F990
    {
            ctx->lr = 0x7F079908u;
            ctx->pc = 0x7F08F990u;
            return;
    }

label_7F079908:
    ctx->pc = 0x7F079908u;
    ctx->downcount -= 1;
    // 7F079908: b       0x7F079914
    {
            goto label_7F079914;
    }

label_7F07990C:
    ctx->pc = 0x7F07990Cu;
    ctx->downcount -= 2;
    // 7F07990C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079910:
    ctx->pc = 0x7F079910u;
    // 7F079910: bl      0x7F08D65C
    {
            ctx->lr = 0x7F079914u;
            ctx->pc = 0x7F08D65Cu;
            return;
    }

label_7F079914:
    ctx->pc = 0x7F079914u;
    ctx->downcount -= 4;
    // 7F079914: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F079918:
    ctx->pc = 0x7F079918u;
    // 7F079918: lwz     r0, -5976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07991C:
    ctx->pc = 0x7F07991Cu;
    // 7F07991C: rlwinm. r0, r0, 0, 31, 31
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

label_7F079920:
    ctx->pc = 0x7F079920u;
    // 7F079920: bc    4, 2, 0x7F07994C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07994C;
        }
    }

label_7F079924:
    ctx->pc = 0x7F079924u;
    ctx->downcount -= 2;
    // 7F079924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F079928:
    ctx->pc = 0x7F079928u;
    // 7F079928: bl      0x7F026F84
    {
            ctx->lr = 0x7F07992Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F07992C:
    ctx->pc = 0x7F07992Cu;
    ctx->downcount -= 8;
    // 7F07992C: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079930:
    ctx->pc = 0x7F079930u;
    // 7F079930: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079934:
    ctx->pc = 0x7F079934u;
    // 7F079934: stw     r4, 3124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079938:
    ctx->pc = 0x7F079938u;
    // 7F079938: stw     r0, 3128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07993C:
    ctx->pc = 0x7F07993Cu;
    // 7F07993C: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079940:
    ctx->pc = 0x7F079940u;
    // 7F079940: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079944:
    ctx->pc = 0x7F079944u;
    // 7F079944: stw     r4, 3132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079948:
    ctx->pc = 0x7F079948u;
    // 7F079948: stw     r0, 3136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07994C:
    ctx->pc = 0x7F07994Cu;
    ctx->downcount -= 18;
    // 7F07994C: lfs     f0, 3124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F07994Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079950:
    ctx->pc = 0x7F079950u;
    // 7F079950: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079954:
    ctx->pc = 0x7F079954u;
    // 7F079954: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F079958:
    ctx->pc = 0x7F079958u;
    // 7F079958: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F07995C:
    ctx->pc = 0x7F07995Cu;
    // 7F07995C: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07995Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079960:
    ctx->pc = 0x7F079960u;
    // 7F079960: lfs     f0, 3128(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079960u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079964:
    ctx->pc = 0x7F079964u;
    // 7F079964: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079968:
    ctx->pc = 0x7F079968u;
    // 7F079968: lfs     f0, 3132(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079968u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07996C:
    ctx->pc = 0x7F07996Cu;
    // 7F07996C: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07996Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079970:
    ctx->pc = 0x7F079970u;
    // 7F079970: lwz     r6, 1736(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1736);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079974:
    ctx->pc = 0x7F079974u;
    // 7F079974: lwz     r0, 1740(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079978:
    ctx->pc = 0x7F079978u;
    // 7F079978: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07997C:
    ctx->pc = 0x7F07997Cu;
    // 7F07997C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079980:
    ctx->pc = 0x7F079980u;
    // 7F079980: lwz     r6, 1744(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1744);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079984:
    ctx->pc = 0x7F079984u;
    // 7F079984: lwz     r0, 1748(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1748);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079988:
    ctx->pc = 0x7F079988u;
    // 7F079988: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07998C:
    ctx->pc = 0x7F07998Cu;
    // 7F07998C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079990:
    ctx->pc = 0x7F079990u;
    // 7F079990: bl      0x7F078AB8
    {
            ctx->lr = 0x7F079994u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078AB8u;
                return;
            }
            goto label_7F078AB8;
    }

label_7F079994:
    ctx->pc = 0x7F079994u;
    ctx->downcount -= 14;
    // 7F079994: lwz     r5, 1816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1816);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079998:
    ctx->pc = 0x7F079998u;
    // 7F079998: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F07999C:
    ctx->pc = 0x7F07999Cu;
    // 7F07999C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0799A0:
    ctx->pc = 0x7F0799A0u;
    // 7F0799A0: stw     r3, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0799A4:
    ctx->pc = 0x7F0799A4u;
    // 7F0799A4: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0799A8:
    ctx->pc = 0x7F0799A8u;
    // 7F0799A8: lfd     f1, -8008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0799A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8008);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0799AC:
    ctx->pc = 0x7F0799ACu;
    // 7F0799AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0799B0:
    ctx->pc = 0x7F0799B0u;
    // 7F0799B0: lfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0799B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0799B4:
    ctx->pc = 0x7F0799B4u;
    // 7F0799B4: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0799B8:
    ctx->pc = 0x7F0799B8u;
    // 7F0799B8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0799BC:
    ctx->pc = 0x7F0799BCu;
    // 7F0799BC: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0799BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0799C0:
    ctx->pc = 0x7F0799C0u;
    // 7F0799C0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0799C0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0799C4:
    ctx->pc = 0x7F0799C4u;
    // 7F0799C4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0799C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0799C8:
    ctx->pc = 0x7F0799C8u;
    // 7F0799C8: bc    4, 0, 0x7F0799E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0799E4;
        }
    }

label_7F0799CC:
    ctx->pc = 0x7F0799CCu;
    ctx->downcount -= 5;
    // 7F0799CC: addi    r30, r29, 1820
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(1820);

label_7F0799D0:
    ctx->pc = 0x7F0799D0u;
    // 7F0799D0: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0799D4:
    ctx->pc = 0x7F0799D4u;
    // 7F0799D4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0799D8:
    ctx->pc = 0x7F0799D8u;
    // 7F0799D8: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F0799DC:
    ctx->pc = 0x7F0799DCu;
    // 7F0799DC: bl      0x7F078B48
    {
            ctx->lr = 0x7F0799E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F0799E0:
    ctx->pc = 0x7F0799E0u;
    ctx->downcount -= 1;
    // 7F0799E0: b       0x7F079A14
    {
            goto label_7F079A14;
    }

label_7F0799E4:
    ctx->pc = 0x7F0799E4u;
    ctx->downcount -= 7;
    // 7F0799E4: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F0799E8:
    ctx->pc = 0x7F0799E8u;
    // 7F0799E8: stw     r3, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0799EC:
    ctx->pc = 0x7F0799ECu;
    // 7F0799EC: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0799F0:
    ctx->pc = 0x7F0799F0u;
    // 7F0799F0: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0799F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0799F4:
    ctx->pc = 0x7F0799F4u;
    // 7F0799F4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0799F4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0799F8:
    ctx->pc = 0x7F0799F8u;
    // 7F0799F8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0799F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0799FC:
    ctx->pc = 0x7F0799FCu;
    // 7F0799FC: bc    4, 1, 0x7F079A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079A14;
        }
    }

label_7F079A00:
    ctx->pc = 0x7F079A00u;
    ctx->downcount -= 5;
    // 7F079A00: addi    r30, r29, 1836
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(1836);

label_7F079A04:
    ctx->pc = 0x7F079A04u;
    // 7F079A04: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F079A08:
    ctx->pc = 0x7F079A08u;
    // 7F079A08: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F079A0C:
    ctx->pc = 0x7F079A0Cu;
    // 7F079A0C: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079A10:
    ctx->pc = 0x7F079A10u;
    // 7F079A10: bl      0x7F078B48
    {
            ctx->lr = 0x7F079A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F079A14:
    ctx->pc = 0x7F079A14u;
    ctx->downcount -= 4;
    // 7F079A14: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079A18:
    ctx->pc = 0x7F079A18u;
    // 7F079A18: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F079A1C:
    ctx->pc = 0x7F079A1Cu;
    // 7F079A1C: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F079A20:
    ctx->pc = 0x7F079A20u;
    // 7F079A20: bl      0x7F078AB8
    {
            ctx->lr = 0x7F079A24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078AB8u;
                return;
            }
            goto label_7F078AB8;
    }

label_7F079A24:
    ctx->pc = 0x7F079A24u;
    ctx->downcount -= 13;
    // 7F079A24: lwz     r5, 1816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1816);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079A28:
    ctx->pc = 0x7F079A28u;
    // 7F079A28: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F079A2C:
    ctx->pc = 0x7F079A2Cu;
    // 7F079A2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F079A30:
    ctx->pc = 0x7F079A30u;
    // 7F079A30: stw     r3, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079A34:
    ctx->pc = 0x7F079A34u;
    // 7F079A34: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F079A38:
    ctx->pc = 0x7F079A38u;
    // 7F079A38: lfd     f1, -8008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079A38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8008);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079A3C:
    ctx->pc = 0x7F079A3Cu;
    // 7F079A3C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F079A40:
    ctx->pc = 0x7F079A40u;
    // 7F079A40: lfs     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079A44:
    ctx->pc = 0x7F079A44u;
    // 7F079A44: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079A48:
    ctx->pc = 0x7F079A48u;
    // 7F079A48: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079A48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079A4C:
    ctx->pc = 0x7F079A4Cu;
    // 7F079A4C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079A4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F079A50:
    ctx->pc = 0x7F079A50u;
    // 7F079A50: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079A50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F079A54:
    ctx->pc = 0x7F079A54u;
    // 7F079A54: bc    4, 0, 0x7F079A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079A70;
        }
    }

label_7F079A58:
    ctx->pc = 0x7F079A58u;
    ctx->downcount -= 5;
    // 7F079A58: addi    r30, r29, 1852
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(1852);

label_7F079A5C:
    ctx->pc = 0x7F079A5Cu;
    // 7F079A5C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F079A60:
    ctx->pc = 0x7F079A60u;
    // 7F079A60: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F079A64:
    ctx->pc = 0x7F079A64u;
    // 7F079A64: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079A68:
    ctx->pc = 0x7F079A68u;
    // 7F079A68: bl      0x7F078B48
    {
            ctx->lr = 0x7F079A6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F079A6C:
    ctx->pc = 0x7F079A6Cu;
    ctx->downcount -= 1;
    // 7F079A6C: b       0x7F079AA0
    {
            goto label_7F079AA0;
    }

label_7F079A70:
    ctx->pc = 0x7F079A70u;
    ctx->downcount -= 7;
    // 7F079A70: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F079A74:
    ctx->pc = 0x7F079A74u;
    // 7F079A74: stw     r3, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079A78:
    ctx->pc = 0x7F079A78u;
    // 7F079A78: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079A7C:
    ctx->pc = 0x7F079A7Cu;
    // 7F079A7C: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079A80:
    ctx->pc = 0x7F079A80u;
    // 7F079A80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079A80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F079A84:
    ctx->pc = 0x7F079A84u;
    // 7F079A84: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079A84u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F079A88:
    ctx->pc = 0x7F079A88u;
    // 7F079A88: bc    4, 1, 0x7F079AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079AA0;
        }
    }

label_7F079A8C:
    ctx->pc = 0x7F079A8Cu;
    ctx->downcount -= 5;
    // 7F079A8C: addi    r30, r29, 1868
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(1868);

label_7F079A90:
    ctx->pc = 0x7F079A90u;
    // 7F079A90: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F079A94:
    ctx->pc = 0x7F079A94u;
    // 7F079A94: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F079A98:
    ctx->pc = 0x7F079A98u;
    // 7F079A98: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079A9C:
    ctx->pc = 0x7F079A9Cu;
    // 7F079A9C: bl      0x7F078B48
    {
            ctx->lr = 0x7F079AA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F079AA0:
    ctx->pc = 0x7F079AA0u;
    ctx->downcount -= 23;
    // 7F079AA0: lfs     f1, 1736(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079AA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079AA4:
    ctx->pc = 0x7F079AA4u;
    // 7F079AA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079AA8:
    ctx->pc = 0x7F079AA8u;
    // 7F079AA8: lfs     f0, 3124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079AA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079AAC:
    ctx->pc = 0x7F079AACu;
    // 7F079AAC: lfs     f4, -7936(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079AACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F079AB0:
    ctx->pc = 0x7F079AB0u;
    // 7F079AB0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079AB0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F079AB4:
    ctx->pc = 0x7F079AB4u;
    // 7F079AB4: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079AB4u)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F079AB8:
    ctx->pc = 0x7F079AB8u;
    // 7F079AB8: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079AB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079ABC:
    ctx->pc = 0x7F079ABCu;
    // 7F079ABC: fmuls   f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079ABCu)) return;
    ppc_fmuls(ctx, 1, 0, 0);

label_7F079AC0:
    ctx->pc = 0x7F079AC0u;
    // 7F079AC0: lfs     f2, 1740(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079AC0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079AC4:
    ctx->pc = 0x7F079AC4u;
    // 7F079AC4: lfs     f0, 3128(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079AC4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079AC8:
    ctx->pc = 0x7F079AC8u;
    // 7F079AC8: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079AC8u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F079ACC:
    ctx->pc = 0x7F079ACCu;
    // 7F079ACC: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079ACCu)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F079AD0:
    ctx->pc = 0x7F079AD0u;
    // 7F079AD0: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079AD4:
    ctx->pc = 0x7F079AD4u;
    // 7F079AD4: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079AD4u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_7F079AD8:
    ctx->pc = 0x7F079AD8u;
    // 7F079AD8: lfs     f3, 1744(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079AD8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F079ADC:
    ctx->pc = 0x7F079ADCu;
    // 7F079ADC: lfs     f2, 3132(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079ADCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079AE0:
    ctx->pc = 0x7F079AE0u;
    // 7F079AE0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079AE0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F079AE4:
    ctx->pc = 0x7F079AE4u;
    // 7F079AE4: fsubs   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079AE4u)) return;
    ppc_fsubs(ctx, 1, 3, 2);

label_7F079AE8:
    ctx->pc = 0x7F079AE8u;
    // 7F079AE8: fmuls   f2, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079AE8u)) return;
    ppc_fmuls(ctx, 2, 1, 4);

label_7F079AEC:
    ctx->pc = 0x7F079AECu;
    // 7F079AEC: fmuls   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079AECu)) return;
    ppc_fmuls(ctx, 1, 2, 2);

label_7F079AF0:
    ctx->pc = 0x7F079AF0u;
    // 7F079AF0: stfs     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079AF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079AF4:
    ctx->pc = 0x7F079AF4u;
    // 7F079AF4: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079AF4u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F079AF8:
    ctx->pc = 0x7F079AF8u;
    // 7F079AF8: bl      0x80006668
    {
            ctx->lr = 0x7F079AFCu;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F079AFC:
    ctx->pc = 0x7F079AFCu;
    ctx->downcount -= 8;
    // 7F079AFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079B00:
    ctx->pc = 0x7F079B00u;
    // 7F079B00: cmplwi  r30, 0x0000
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

label_7F079B04:
    ctx->pc = 0x7F079B04u;
    // 7F079B04: lfs     f0, -7932(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079B04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7932);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B08:
    ctx->pc = 0x7F079B08u;
    // 7F079B08: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079B08u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F079B0C:
    ctx->pc = 0x7F079B0Cu;
    // 7F079B0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079B0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F079B10:
    ctx->pc = 0x7F079B10u;
    // 7F079B10: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F079B14:
    ctx->pc = 0x7F079B14u;
    // 7F079B14: lwz     r31, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F079B18:
    ctx->pc = 0x7F079B18u;
    // 7F079B18: bc    4, 2, 0x7F079B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079B4C;
        }
    }

label_7F079B1C:
    ctx->pc = 0x7F079B1Cu;
    ctx->downcount -= 12;
    // 7F079B1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079B20:
    ctx->pc = 0x7F079B20u;
    // 7F079B20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079B24:
    ctx->pc = 0x7F079B24u;
    // 7F079B24: stw     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079B28:
    ctx->pc = 0x7F079B28u;
    // 7F079B28: lfs     f0, -7992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079B28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B2C:
    ctx->pc = 0x7F079B2Cu;
    // 7F079B2C: lfs     f1, 1736(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B2Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079B30:
    ctx->pc = 0x7F079B30u;
    // 7F079B30: stfs     f1, 2232(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B30u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F079B34:
    ctx->pc = 0x7F079B34u;
    // 7F079B34: lfs     f1, 1740(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B34u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079B38:
    ctx->pc = 0x7F079B38u;
    // 7F079B38: stfs     f1, 2236(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F079B3C:
    ctx->pc = 0x7F079B3Cu;
    // 7F079B3C: lfs     f1, 1744(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B3Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079B40:
    ctx->pc = 0x7F079B40u;
    // 7F079B40: stfs     f1, 2240(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B40u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F079B44:
    ctx->pc = 0x7F079B44u;
    // 7F079B44: stfs     f0, 2296(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079B48:
    ctx->pc = 0x7F079B48u;
    // 7F079B48: b       0x7F079C68
    {
            goto label_7F079C68;
    }

label_7F079B4C:
    ctx->pc = 0x7F079B4Cu;
    ctx->downcount -= 6;
    // 7F079B4C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F079B50:
    ctx->pc = 0x7F079B50u;
    // 7F079B50: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F079B54:
    ctx->pc = 0x7F079B54u;
    // 7F079B54: stw     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079B58:
    ctx->pc = 0x7F079B58u;
    // 7F079B58: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F079B5C:
    ctx->pc = 0x7F079B5Cu;
    // 7F079B5C: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F079B60:
    ctx->pc = 0x7F079B60u;
    // 7F079B60: bl      0x7F078B48
    {
            ctx->lr = 0x7F079B64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078B48u;
                return;
            }
            goto label_7F078B48;
    }

label_7F079B64:
    ctx->pc = 0x7F079B64u;
    ctx->downcount -= 24;
    // 7F079B64: lfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B68:
    ctx->pc = 0x7F079B68u;
    // 7F079B68: stfs     f0, 2232(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B68u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079B6C:
    ctx->pc = 0x7F079B6Cu;
    // 7F079B6C: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B70:
    ctx->pc = 0x7F079B70u;
    // 7F079B70: stfs     f0, 2236(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B70u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079B74:
    ctx->pc = 0x7F079B74u;
    // 7F079B74: lfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B78:
    ctx->pc = 0x7F079B78u;
    // 7F079B78: stfs     f0, 2240(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B78u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079B7C:
    ctx->pc = 0x7F079B7Cu;
    // 7F079B7C: lfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079B80:
    ctx->pc = 0x7F079B80u;
    // 7F079B80: lfs     f0, 3124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B80u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B84:
    ctx->pc = 0x7F079B84u;
    // 7F079B84: lfs     f2, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079B88:
    ctx->pc = 0x7F079B88u;
    // 7F079B88: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079B88u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F079B8C:
    ctx->pc = 0x7F079B8Cu;
    // 7F079B8C: lfs     f3, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F079B90:
    ctx->pc = 0x7F079B90u;
    // 7F079B90: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079B94:
    ctx->pc = 0x7F079B94u;
    // 7F079B94: fmuls   f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079B94u)) return;
    ppc_fmuls(ctx, 1, 0, 0);

label_7F079B98:
    ctx->pc = 0x7F079B98u;
    // 7F079B98: lfs     f0, 3128(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079B98u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079B9C:
    ctx->pc = 0x7F079B9Cu;
    // 7F079B9C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079B9Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F079BA0:
    ctx->pc = 0x7F079BA0u;
    // 7F079BA0: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079BA4:
    ctx->pc = 0x7F079BA4u;
    // 7F079BA4: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079BA4u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_7F079BA8:
    ctx->pc = 0x7F079BA8u;
    // 7F079BA8: lfs     f2, 3132(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079BA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079BAC:
    ctx->pc = 0x7F079BACu;
    // 7F079BAC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079BACu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F079BB0:
    ctx->pc = 0x7F079BB0u;
    // 7F079BB0: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079BB0u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F079BB4:
    ctx->pc = 0x7F079BB4u;
    // 7F079BB4: fmuls   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079BB4u)) return;
    ppc_fmuls(ctx, 1, 2, 2);

label_7F079BB8:
    ctx->pc = 0x7F079BB8u;
    // 7F079BB8: stfs     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079BB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079BBC:
    ctx->pc = 0x7F079BBCu;
    // 7F079BBC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079BBCu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F079BC0:
    ctx->pc = 0x7F079BC0u;
    // 7F079BC0: bl      0x80006668
    {
            ctx->lr = 0x7F079BC4u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F079BC4:
    ctx->pc = 0x7F079BC4u;
    ctx->downcount -= 5;
    // 7F079BC4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079BC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F079BC8:
    ctx->pc = 0x7F079BC8u;
    // 7F079BC8: cmpwi   r31, 0
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

label_7F079BCC:
    ctx->pc = 0x7F079BCCu;
    // 7F079BCC: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079BCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F079BD0:
    ctx->pc = 0x7F079BD0u;
    // 7F079BD0: lwz     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079BD4:
    ctx->pc = 0x7F079BD4u;
    // 7F079BD4: bc    4, 2, 0x7F079BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079BE0;
        }
    }

label_7F079BD8:
    ctx->pc = 0x7F079BD8u;
    ctx->downcount -= 2;
    // 7F079BD8: rlwinm r31, r0, 12, 0, 19
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F079BDC:
    ctx->pc = 0x7F079BDCu;
    // 7F079BDC: b       0x7F079BE8
    {
            goto label_7F079BE8;
    }

label_7F079BE0:
    ctx->pc = 0x7F079BE0u;
    ctx->downcount -= 41;
    // 7F079BE0: rlwinm r0, r0, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F079BE4:
    ctx->pc = 0x7F079BE4u;
    // 7F079BE4: divw   r31, r0, r31
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[31] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F079BE8:
    ctx->pc = 0x7F079BE8u;
    ctx->downcount -= 47;
    // 7F079BE8: xoris   r4, r31, 0x8000
    ctx->gpr[4] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F079BEC:
    ctx->pc = 0x7F079BECu;
    // 7F079BEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F079BF0:
    ctx->pc = 0x7F079BF0u;
    // 7F079BF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079BF4:
    ctx->pc = 0x7F079BF4u;
    // 7F079BF4: stw     r4, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079BF8:
    ctx->pc = 0x7F079BF8u;
    // 7F079BF8: addi    r5, r3, -8008
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8008);

label_7F079BFC:
    ctx->pc = 0x7F079BFCu;
    // 7F079BFC: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079C00:
    ctx->pc = 0x7F079C00u;
    // 7F079C00: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079C04:
    ctx->pc = 0x7F079C04u;
    // 7F079C04: lfd     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F079C04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079C08:
    ctx->pc = 0x7F079C08u;
    // 7F079C08: lfd     f1, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079C0C:
    ctx->pc = 0x7F079C0Cu;
    // 7F079C0C: lfs     f0, -8024(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079C0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079C10:
    ctx->pc = 0x7F079C10u;
    // 7F079C10: fsubs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079C10u)) return;
    ppc_fsubs(ctx, 1, 1, 4);

label_7F079C14:
    ctx->pc = 0x7F079C14u;
    // 7F079C14: stw     r4, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079C18:
    ctx->pc = 0x7F079C18u;
    // 7F079C18: stw     r0, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079C1C:
    ctx->pc = 0x7F079C1Cu;
    // 7F079C1C: fdivs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079C1Cu)) return;
    ppc_fdivs(ctx, 31, 1, 0);

label_7F079C20:
    ctx->pc = 0x7F079C20u;
    // 7F079C20: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079C24:
    ctx->pc = 0x7F079C24u;
    // 7F079C24: stw     r4, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079C28:
    ctx->pc = 0x7F079C28u;
    // 7F079C28: stw     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079C2C:
    ctx->pc = 0x7F079C2Cu;
    // 7F079C2C: stw     r4, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079C30:
    ctx->pc = 0x7F079C30u;
    // 7F079C30: lfd     f1, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079C34:
    ctx->pc = 0x7F079C34u;
    // 7F079C34: fsubs   f3, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079C34u)) return;
    ppc_fsubs(ctx, 3, 1, 4);

label_7F079C38:
    ctx->pc = 0x7F079C38u;
    // 7F079C38: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079C3C:
    ctx->pc = 0x7F079C3Cu;
    // 7F079C3C: fsubs   f2, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079C3Cu)) return;
    ppc_fsubs(ctx, 2, 0, 4);

label_7F079C40:
    ctx->pc = 0x7F079C40u;
    // 7F079C40: lfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079C44:
    ctx->pc = 0x7F079C44u;
    // 7F079C44: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F079C44u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F079C48:
    ctx->pc = 0x7F079C48u;
    // 7F079C48: stfs     f3, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F079C4C:
    ctx->pc = 0x7F079C4Cu;
    // 7F079C4C: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F079C4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F079C50:
    ctx->pc = 0x7F079C50u;
    // 7F079C50: stfs     f2, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F079C54:
    ctx->pc = 0x7F079C54u;
    // 7F079C54: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079C54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079C58:
    ctx->pc = 0x7F079C58u;
    // 7F079C58: lwz     r3, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079C5C:
    ctx->pc = 0x7F079C5Cu;
    // 7F079C5C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F079C60:
    ctx->pc = 0x7F079C60u;
    // 7F079C60: bl      0x7F078D5C
    {
            ctx->lr = 0x7F079C64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F078D5Cu;
                return;
            }
            goto label_7F078D5C;
    }

label_7F079C64:
    ctx->pc = 0x7F079C64u;
    ctx->downcount -= 1;
    // 7F079C64: stfs     f31, 2296(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079C64u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F079C68:
    ctx->pc = 0x7F079C68u;
    ctx->downcount -= 31;
    // 7F079C68: lwz     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079C6C:
    ctx->pc = 0x7F079C6Cu;
    // 7F079C6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079C70:
    ctx->pc = 0x7F079C70u;
    // 7F079C70: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079C74:
    ctx->pc = 0x7F079C74u;
    // 7F079C74: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F079C78:
    ctx->pc = 0x7F079C78u;
    // 7F079C78: addi    r5, r3, -7988
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7988);

label_7F079C7C:
    ctx->pc = 0x7F079C7Cu;
    // 7F079C7C: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079C80:
    ctx->pc = 0x7F079C80u;
    // 7F079C80: stw     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079C84:
    ctx->pc = 0x7F079C84u;
    // 7F079C84: addi    r8, r4, 20908
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(20908);

label_7F079C88:
    ctx->pc = 0x7F079C88u;
    // 7F079C88: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F079C8C:
    ctx->pc = 0x7F079C8Cu;
    // 7F079C8C: stw     r0, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079C90:
    ctx->pc = 0x7F079C90u;
    // 7F079C90: lwz     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079C94:
    ctx->pc = 0x7F079C94u;
    // 7F079C94: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079C98:
    ctx->pc = 0x7F079C98u;
    // 7F079C98: stw     r6, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079C9C:
    ctx->pc = 0x7F079C9Cu;
    // 7F079C9C: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079CA0:
    ctx->pc = 0x7F079CA0u;
    // 7F079CA0: lwz     r12, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F079CA4:
    ctx->pc = 0x7F079CA4u;
    // 7F079CA4: lwz     r11, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F079CA8:
    ctx->pc = 0x7F079CA8u;
    // 7F079CA8: lwz     r10, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F079CAC:
    ctx->pc = 0x7F079CACu;
    // 7F079CAC: lwz     r9, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F079CB0:
    ctx->pc = 0x7F079CB0u;
    // 7F079CB0: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F079CB4:
    ctx->pc = 0x7F079CB4u;
    // 7F079CB4: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079CB8:
    ctx->pc = 0x7F079CB8u;
    // 7F079CB8: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079CBC:
    ctx->pc = 0x7F079CBCu;
    // 7F079CBC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079CC0:
    ctx->pc = 0x7F079CC0u;
    // 7F079CC0: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F079CC4:
    ctx->pc = 0x7F079CC4u;
    // 7F079CC4: stw     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F079CC8:
    ctx->pc = 0x7F079CC8u;
    // 7F079CC8: stw     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F079CCC:
    ctx->pc = 0x7F079CCCu;
    // 7F079CCC: stw     r9, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F079CD0:
    ctx->pc = 0x7F079CD0u;
    // 7F079CD0: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F079CD4:
    ctx->pc = 0x7F079CD4u;
    // 7F079CD4: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079CD8:
    ctx->pc = 0x7F079CD8u;
    // 7F079CD8: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079CDC:
    ctx->pc = 0x7F079CDCu;
    // 7F079CDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079CE0:
    ctx->pc = 0x7F079CE0u;
    // 7F079CE0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F079CE4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F079CE4:
    ctx->pc = 0x7F079CE4u;
    ctx->downcount -= 12;
    // 7F079CE4: lwz     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F079CE8:
    ctx->pc = 0x7F079CE8u;
    // 7F079CE8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079CEC:
    ctx->pc = 0x7F079CECu;
    // 7F079CEC: lwz     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079CF0:
    ctx->pc = 0x7F079CF0u;
    // 7F079CF0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F079CF4:
    ctx->pc = 0x7F079CF4u;
    // 7F079CF4: lwz     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079CF8:
    ctx->pc = 0x7F079CF8u;
    // 7F079CF8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079CFC:
    ctx->pc = 0x7F079CFCu;
    // 7F079CFC: stw     r7, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F079D00:
    ctx->pc = 0x7F079D00u;
    // 7F079D00: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079D04:
    ctx->pc = 0x7F079D04u;
    // 7F079D04: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079D08:
    ctx->pc = 0x7F079D08u;
    // 7F079D08: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079D0C:
    ctx->pc = 0x7F079D0Cu;
    // 7F079D0C: lfs     f1, 2296(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079D0Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079D10:
    ctx->pc = 0x7F079D10u;
    // 7F079D10: bl      0x80026020
    {
            ctx->lr = 0x7F079D14u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F079D14:
    ctx->pc = 0x7F079D14u;
    ctx->downcount -= 4;
    // 7F079D14: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F079D18:
    ctx->pc = 0x7F079D18u;
    // 7F079D18: lfs     f1, 2296(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079D18u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079D1C:
    ctx->pc = 0x7F079D1Cu;
    // 7F079D1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F079D20:
    ctx->pc = 0x7F079D20u;
    // 7F079D20: bl      0x80026020
    {
            ctx->lr = 0x7F079D24u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F079D24:
    ctx->pc = 0x7F079D24u;
    ctx->downcount -= 10;
    // 7F079D24: lwz     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079D28:
    ctx->pc = 0x7F079D28u;
    // 7F079D28: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079D2C:
    ctx->pc = 0x7F079D2Cu;
    // 7F079D2C: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079D30:
    ctx->pc = 0x7F079D30u;
    // 7F079D30: lwz     r4, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079D34:
    ctx->pc = 0x7F079D34u;
    // 7F079D34: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079D38:
    ctx->pc = 0x7F079D38u;
    // 7F079D38: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079D3C:
    ctx->pc = 0x7F079D3Cu;
    // 7F079D3C: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079D40:
    ctx->pc = 0x7F079D40u;
    // 7F079D40: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F079D44:
    ctx->pc = 0x7F079D44u;
    // 7F079D44: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079D48:
    ctx->pc = 0x7F079D48u;
    // 7F079D48: bl      0x7F3B3134
    {
            ctx->lr = 0x7F079D4Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F079D4C:
    ctx->pc = 0x7F079D4Cu;
    ctx->downcount -= 2;
    // 7F079D4C: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079D50:
    ctx->pc = 0x7F079D50u;
    // 7F079D50: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F079D54u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F079D54:
    ctx->pc = 0x7F079D54u;
    ctx->downcount -= 6;
    // 7F079D54: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F079D58:
    ctx->pc = 0x7F079D58u;
    // 7F079D58: addi    r3, r29, 960
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(960);

label_7F079D5C:
    ctx->pc = 0x7F079D5Cu;
    // 7F079D5C: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F079D60:
    ctx->pc = 0x7F079D60u;
    // 7F079D60: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079D64:
    ctx->pc = 0x7F079D64u;
    // 7F079D64: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079D68:
    ctx->pc = 0x7F079D68u;
    // 7F079D68: bl      0x7F014964
    {
            ctx->lr = 0x7F079D6Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F079D6C:
    ctx->pc = 0x7F079D6Cu;
    ctx->downcount -= 5;
    // 7F079D6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079D70:
    ctx->pc = 0x7F079D70u;
    // 7F079D70: lfs     f1, 2296(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079D70u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079D74:
    ctx->pc = 0x7F079D74u;
    // 7F079D74: addi    r3, r3, -8072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8072);

label_7F079D78:
    ctx->pc = 0x7F079D78u;
    // 7F079D78: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F079D7C:
    ctx->pc = 0x7F079D7Cu;
    // 7F079D7C: bl      0x80026020
    {
            ctx->lr = 0x7F079D80u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F079D80:
    ctx->pc = 0x7F079D80u;
    ctx->downcount -= 3;
    // 7F079D80: addi    r3, r29, 960
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(960);

label_7F079D84:
    ctx->pc = 0x7F079D84u;
    // 7F079D84: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F079D88:
    ctx->pc = 0x7F079D88u;
    // 7F079D88: bl      0x7F0148D4
    {
            ctx->lr = 0x7F079D8Cu;
            ctx->pc = 0x7F0148D4u;
            return;
    }

label_7F079D8C:
    ctx->pc = 0x7F079D8Cu;
    ctx->downcount -= 3;
    // 7F079D8C: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079D90:
    ctx->pc = 0x7F079D90u;
    // 7F079D90: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F079D94:
    ctx->pc = 0x7F079D94u;
    // 7F079D94: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F079D98u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F079D98:
    ctx->pc = 0x7F079D98u;
    ctx->downcount -= 4;
    // 7F079D98: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F079D9C:
    ctx->pc = 0x7F079D9Cu;
    // 7F079D9C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F079DA0:
    ctx->pc = 0x7F079DA0u;
    // 7F079DA0: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079DA4:
    ctx->pc = 0x7F079DA4u;
    // 7F079DA4: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F079DA8u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F079DA8:
    ctx->pc = 0x7F079DA8u;
    ctx->downcount -= 2;
    // 7F079DA8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079DAC:
    ctx->pc = 0x7F079DACu;
    // 7F079DAC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F079DB0u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F079DB0:
    ctx->pc = 0x7F079DB0u;
    ctx->downcount -= 2;
    // 7F079DB0: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079DB4:
    ctx->pc = 0x7F079DB4u;
    // 7F079DB4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F079DB8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F079DB8:
    ctx->pc = 0x7F079DB8u;
    ctx->downcount -= 6;
    // 7F079DB8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F079DBC:
    ctx->pc = 0x7F079DBCu;
    // 7F079DBC: addi    r3, r29, 1152
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1152);

label_7F079DC0:
    ctx->pc = 0x7F079DC0u;
    // 7F079DC0: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F079DC4:
    ctx->pc = 0x7F079DC4u;
    // 7F079DC4: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079DC8:
    ctx->pc = 0x7F079DC8u;
    // 7F079DC8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079DCC:
    ctx->pc = 0x7F079DCCu;
    // 7F079DCC: bl      0x7F014964
    {
            ctx->lr = 0x7F079DD0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F079DD0:
    ctx->pc = 0x7F079DD0u;
    ctx->downcount -= 3;
    // 7F079DD0: addi    r3, r29, 1152
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1152);

label_7F079DD4:
    ctx->pc = 0x7F079DD4u;
    // 7F079DD4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F079DD8:
    ctx->pc = 0x7F079DD8u;
    // 7F079DD8: bl      0x7F0148D4
    {
            ctx->lr = 0x7F079DDCu;
            ctx->pc = 0x7F0148D4u;
            return;
    }

label_7F079DDC:
    ctx->pc = 0x7F079DDCu;
    ctx->downcount -= 3;
    // 7F079DDC: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F079DE0:
    ctx->pc = 0x7F079DE0u;
    // 7F079DE0: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F079DE4:
    ctx->pc = 0x7F079DE4u;
    // 7F079DE4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F079DE8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F079DE8:
    ctx->pc = 0x7F079DE8u;
    ctx->downcount -= 4;
    // 7F079DE8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F079DEC:
    ctx->pc = 0x7F079DECu;
    // 7F079DEC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F079DF0:
    ctx->pc = 0x7F079DF0u;
    // 7F079DF0: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079DF4:
    ctx->pc = 0x7F079DF4u;
    // 7F079DF4: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F079DF8u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F079DF8:
    ctx->pc = 0x7F079DF8u;
    ctx->downcount -= 2;
    // 7F079DF8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F079DFC:
    ctx->pc = 0x7F079DFCu;
    // 7F079DFC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F079E00u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F079E00:
    ctx->pc = 0x7F079E00u;
    ctx->downcount -= 2;
    // 7F079E00: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079E04:
    ctx->pc = 0x7F079E04u;
    // 7F079E04: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F079E08u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F079E08:
    ctx->pc = 0x7F079E08u;
    ctx->downcount -= 6;
    // 7F079E08: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F079E0C:
    ctx->pc = 0x7F079E0Cu;
    // 7F079E0C: addi    r3, r29, 1344
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1344);

label_7F079E10:
    ctx->pc = 0x7F079E10u;
    // 7F079E10: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F079E14:
    ctx->pc = 0x7F079E14u;
    // 7F079E14: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_7F079E18:
    ctx->pc = 0x7F079E18u;
    // 7F079E18: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F079E1C:
    ctx->pc = 0x7F079E1Cu;
    // 7F079E1C: bl      0x7F014964
    {
            ctx->lr = 0x7F079E20u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F079E20:
    ctx->pc = 0x7F079E20u;
    ctx->downcount -= 3;
    // 7F079E20: addi    r3, r29, 1344
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1344);

label_7F079E24:
    ctx->pc = 0x7F079E24u;
    // 7F079E24: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F079E28:
    ctx->pc = 0x7F079E28u;
    // 7F079E28: bl      0x7F0148D4
    {
            ctx->lr = 0x7F079E2Cu;
            ctx->pc = 0x7F0148D4u;
            return;
    }

label_7F079E2C:
    ctx->pc = 0x7F079E2Cu;
    ctx->downcount -= 3;
    // 7F079E2C: lwz     r0, 1720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E30:
    ctx->pc = 0x7F079E30u;
    // 7F079E30: cmpwi   r0, 2
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

label_7F079E34:
    ctx->pc = 0x7F079E34u;
    // 7F079E34: bc    4, 2, 0x7F079E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079E5C;
        }
    }

label_7F079E38:
    ctx->pc = 0x7F079E38u;
    ctx->downcount -= 9;
    // 7F079E38: lwz     r0, 964(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(964);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E3C:
    ctx->pc = 0x7F079E3Cu;
    // 7F079E3C: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_7F079E40:
    ctx->pc = 0x7F079E40u;
    // 7F079E40: stw     r0, 964(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079E44:
    ctx->pc = 0x7F079E44u;
    // 7F079E44: lwz     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E48:
    ctx->pc = 0x7F079E48u;
    // 7F079E48: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_7F079E4C:
    ctx->pc = 0x7F079E4Cu;
    // 7F079E4C: stw     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079E50:
    ctx->pc = 0x7F079E50u;
    // 7F079E50: lwz     r0, 1348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E54:
    ctx->pc = 0x7F079E54u;
    // 7F079E54: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_7F079E58:
    ctx->pc = 0x7F079E58u;
    // 7F079E58: stw     r0, 1348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079E5C:
    ctx->pc = 0x7F079E5Cu;
    ctx->downcount -= 2;
    // 7F079E5C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079E60:
    ctx->pc = 0x7F079E60u;
    // 7F079E60: bl      0x7F07A198
    {
            ctx->lr = 0x7F079E64u;
            goto label_7F07A198;
    }

label_7F079E64:
    ctx->pc = 0x7F079E64u;
    ctx->downcount -= 3;
    // 7F079E64: lwz     r0, 5492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E68:
    ctx->pc = 0x7F079E68u;
    // 7F079E68: cmpwi   r0, 0
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

label_7F079E6C:
    ctx->pc = 0x7F079E6Cu;
    // 7F079E6C: bc    4, 2, 0x7F079E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079E80;
        }
    }

label_7F079E70:
    ctx->pc = 0x7F079E70u;
    ctx->downcount -= 4;
    // 7F079E70: lwz     r3, 5496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079E74:
    ctx->pc = 0x7F079E74u;
    // 7F079E74: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F079E78:
    ctx->pc = 0x7F079E78u;
    // 7F079E78: stw     r0, 5496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079E7C:
    ctx->pc = 0x7F079E7Cu;
    // 7F079E7C: b       0x7F079E88
    {
            goto label_7F079E88;
    }

label_7F079E80:
    ctx->pc = 0x7F079E80u;
    ctx->downcount -= 2;
    // 7F079E80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079E84:
    ctx->pc = 0x7F079E84u;
    // 7F079E84: stw     r0, 5496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079E88:
    ctx->pc = 0x7F079E88u;
    ctx->downcount -= 3;
    // 7F079E88: lwz     r0, 1720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E8C:
    ctx->pc = 0x7F079E8Cu;
    // 7F079E8C: cmpwi   r0, 2
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

label_7F079E90:
    ctx->pc = 0x7F079E90u;
    // 7F079E90: bc    12, 2, 0x7F079EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079EE4;
        }
    }

label_7F079E94:
    ctx->pc = 0x7F079E94u;
    ctx->downcount -= 3;
    // 7F079E94: lwz     r0, 5496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5496);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F079E98:
    ctx->pc = 0x7F079E98u;
    // 7F079E98: cmpwi   r0, 800
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(800);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F079E9C:
    ctx->pc = 0x7F079E9Cu;
    // 7F079E9C: bc    12, 0, 0x7F079EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079EE4;
        }
    }

label_7F079EA0:
    ctx->pc = 0x7F079EA0u;
    ctx->downcount -= 4;
    // 7F079EA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079EA4:
    ctx->pc = 0x7F079EA4u;
    // 7F079EA4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F079EA8:
    ctx->pc = 0x7F079EA8u;
    // 7F079EA8: stw     r0, 5496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079EAC:
    ctx->pc = 0x7F079EACu;
    // 7F079EAC: bl      0x7F02A538
    {
            ctx->lr = 0x7F079EB0u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F079EB0:
    ctx->pc = 0x7F079EB0u;
    ctx->downcount -= 2;
    // 7F079EB0: cmpwi   r3, 1
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

label_7F079EB4:
    ctx->pc = 0x7F079EB4u;
    // 7F079EB4: bc    12, 2, 0x7F079ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F079ED8;
        }
    }

label_7F079EB8:
    ctx->pc = 0x7F079EB8u;
    ctx->downcount -= 1;
    // 7F079EB8: bc    4, 0, 0x7F079EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079EE4;
        }
    }

label_7F079EBC:
    ctx->pc = 0x7F079EBCu;
    ctx->downcount -= 2;
    // 7F079EBC: cmpwi   r3, 0
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

label_7F079EC0:
    ctx->pc = 0x7F079EC0u;
    // 7F079EC0: bc    4, 0, 0x7F079EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079EC8;
        }
    }

label_7F079EC4:
    ctx->pc = 0x7F079EC4u;
    ctx->downcount -= 1;
    // 7F079EC4: b       0x7F079EE4
    {
            goto label_7F079EE4;
    }

label_7F079EC8:
    ctx->pc = 0x7F079EC8u;
    ctx->downcount -= 3;
    // 7F079EC8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079ECC:
    ctx->pc = 0x7F079ECCu;
    // 7F079ECC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F079ED0:
    ctx->pc = 0x7F079ED0u;
    // 7F079ED0: bl      0x7F0895E4
    {
            ctx->lr = 0x7F079ED4u;
            ctx->pc = 0x7F0895E4u;
            return;
    }

label_7F079ED4:
    ctx->pc = 0x7F079ED4u;
    ctx->downcount -= 1;
    // 7F079ED4: b       0x7F079EE4
    {
            goto label_7F079EE4;
    }

label_7F079ED8:
    ctx->pc = 0x7F079ED8u;
    ctx->downcount -= 3;
    // 7F079ED8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079EDC:
    ctx->pc = 0x7F079EDCu;
    // 7F079EDC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F079EE0:
    ctx->pc = 0x7F079EE0u;
    // 7F079EE0: bl      0x7F0895E4
    {
            ctx->lr = 0x7F079EE4u;
            ctx->pc = 0x7F0895E4u;
            return;
    }

label_7F079EE4:
    ctx->pc = 0x7F079EE4u;
    ctx->downcount -= 5;
    // 7F079EE4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F079EE8:
    ctx->pc = 0x7F079EE8u;
    // 7F079EE8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F079EEC:
    ctx->pc = 0x7F079EECu;
    // 7F079EEC: addi    r0, r3, -5536
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5536);

label_7F079EF0:
    ctx->pc = 0x7F079EF0u;
    // 7F079EF0: cmpw    r31, r0
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

label_7F079EF4:
    ctx->pc = 0x7F079EF4u;
    // 7F079EF4: bc    4, 1, 0x7F079EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079EFC;
        }
    }

label_7F079EF8:
    ctx->pc = 0x7F079EF8u;
    ctx->downcount -= 1;
    // 7F079EF8: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F079EFC:
    ctx->pc = 0x7F079EFCu;
    ctx->downcount -= 6;
    // 7F079EFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079F00:
    ctx->pc = 0x7F079F00u;
    // 7F079F00: lfs     f3, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F079F00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F079F04:
    ctx->pc = 0x7F079F04u;
    // 7F079F04: lfs     f2, -8000(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079F04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F079F08:
    ctx->pc = 0x7F079F08u;
    // 7F079F08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F079F0C:
    ctx->pc = 0x7F079F0Cu;
    // 7F079F0C: fcmpo   cr0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079F0Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[2], true);

label_7F079F10:
    ctx->pc = 0x7F079F10u;
    // 7F079F10: bc    4, 0, 0x7F079F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079F44;
        }
    }

label_7F079F14:
    ctx->pc = 0x7F079F14u;
    ctx->downcount -= 24;
    // 7F079F14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F079F18:
    ctx->pc = 0x7F079F18u;
    // 7F079F18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079F1C:
    ctx->pc = 0x7F079F1Cu;
    // 7F079F1C: lfs     f1, -7928(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079F1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F079F20:
    ctx->pc = 0x7F079F20u;
    // 7F079F20: lfs     f0, -7924(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079F20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F079F24:
    ctx->pc = 0x7F079F24u;
    // 7F079F24: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F079F24u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_7F079F28:
    ctx->pc = 0x7F079F28u;
    // 7F079F28: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079F28u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F079F2C:
    ctx->pc = 0x7F079F2Cu;
    // 7F079F2C: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F079F2Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F079F30:
    ctx->pc = 0x7F079F30u;
    // 7F079F30: bc    4, 0, 0x7F079F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079F38;
        }
    }

label_7F079F34:
    ctx->pc = 0x7F079F34u;
    ctx->downcount -= 1;
    // 7F079F34: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079F34u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F079F38:
    ctx->pc = 0x7F079F38u;
    ctx->downcount -= 3;
    // 7F079F38: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F079F38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F079F3C:
    ctx->pc = 0x7F079F3Cu;
    // 7F079F3C: stfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079F3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F079F40:
    ctx->pc = 0x7F079F40u;
    // 7F079F40: lwz     r6, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F079F44:
    ctx->pc = 0x7F079F44u;
    ctx->downcount -= 48;
    // 7F079F44: lis     r3, 3
    ctx->gpr[3] = ((u32)(s32)(3) << 16);

label_7F079F48:
    ctx->pc = 0x7F079F48u;
    // 7F079F48: rlwinm r4, r5, 7, 0, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 7u) & 0xFFFFFF80u;
    }

label_7F079F4C:
    ctx->pc = 0x7F079F4Cu;
    // 7F079F4C: addi    r0, r3, -16608
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16608);

label_7F079F50:
    ctx->pc = 0x7F079F50u;
    // 7F079F50: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F079F54:
    ctx->pc = 0x7F079F54u;
    // 7F079F54: subfic  r0, r0, 128
    {
        u64 res = (u64)(u32)(s32)(128) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F079F58:
    ctx->pc = 0x7F079F58u;
    // 7F079F58: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F079F5C:
    ctx->pc = 0x7F079F5Cu;
    // 7F079F5C: srawi r0, r0, 1
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

label_7F079F60:
    ctx->pc = 0x7F079F60u;
    // 7F079F60: addze.  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F079F64:
    ctx->pc = 0x7F079F64u;
    // 7F079F64: bc    4, 0, 0x7F079F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F079F6C;
        }
    }

label_7F079F68:
    ctx->pc = 0x7F079F68u;
    ctx->downcount -= 1;
    // 7F079F68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079F6C:
    ctx->pc = 0x7F079F6Cu;
    ctx->downcount -= 29;
    // 7F079F6C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F079F70:
    ctx->pc = 0x7F079F70u;
    // 7F079F70: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F079F74:
    ctx->pc = 0x7F079F74u;
    // 7F079F74: stw     r6, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079F78:
    ctx->pc = 0x7F079F78u;
    // 7F079F78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F079F7C:
    ctx->pc = 0x7F079F7Cu;
    // 7F079F7C: lwz     r4, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079F80:
    ctx->pc = 0x7F079F80u;
    // 7F079F80: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F079F84:
    ctx->pc = 0x7F079F84u;
    // 7F079F84: stw     r5, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079F88:
    ctx->pc = 0x7F079F88u;
    // 7F079F88: lfd     f1, -8008(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079F88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8008);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079F8C:
    ctx->pc = 0x7F079F8Cu;
    // 7F079F8C: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F079F90:
    ctx->pc = 0x7F079F90u;
    // 7F079F90: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079F90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079F94:
    ctx->pc = 0x7F079F94u;
    // 7F079F94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079F98:
    ctx->pc = 0x7F079F98u;
    // 7F079F98: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079F9C:
    ctx->pc = 0x7F079F9Cu;
    // 7F079F9C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079F9Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F079FA0:
    ctx->pc = 0x7F079FA0u;
    // 7F079FA0: stw     r6, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F079FA4:
    ctx->pc = 0x7F079FA4u;
    // 7F079FA4: stw     r5, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079FA8:
    ctx->pc = 0x7F079FA8u;
    // 7F079FA8: stfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F079FA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079FAC:
    ctx->pc = 0x7F079FACu;
    // 7F079FAC: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079FB0:
    ctx->pc = 0x7F079FB0u;
    // 7F079FB0: lwz     r4, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F079FB4:
    ctx->pc = 0x7F079FB4u;
    // 7F079FB4: stw     r3, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F079FB8:
    ctx->pc = 0x7F079FB8u;
    // 7F079FB8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079FB8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F079FBC:
    ctx->pc = 0x7F079FBCu;
    // 7F079FBC: lwz     r3, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079FC0:
    ctx->pc = 0x7F079FC0u;
    // 7F079FC0: stw     r5, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F079FC4:
    ctx->pc = 0x7F079FC4u;
    // 7F079FC4: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079FC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079FC8:
    ctx->pc = 0x7F079FC8u;
    // 7F079FC8: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F079FCC:
    ctx->pc = 0x7F079FCCu;
    // 7F079FCC: lwz     r3, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079FD0:
    ctx->pc = 0x7F079FD0u;
    // 7F079FD0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F079FD0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F079FD4:
    ctx->pc = 0x7F079FD4u;
    // 7F079FD4: lwz     r3, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F079FD8:
    ctx->pc = 0x7F079FD8u;
    // 7F079FD8: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F079FD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F079FDC:
    ctx->pc = 0x7F079FDCu;
    // 7F079FDC: stb     r0, 1568(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1568);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F079FE0:
    ctx->pc = 0x7F079FE0u;
    ctx->downcount -= 6;
    // 7F079FE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F079FE4:
    ctx->pc = 0x7F079FE4u;
    // 7F079FE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F079FE8:
    ctx->pc = 0x7F079FE8u;
    // 7F079FE8: stw     r0, 2264(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F079FEC:
    ctx->pc = 0x7F079FECu;
    // 7F079FEC: lha     r0, 66(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F079FF0:
    ctx->pc = 0x7F079FF0u;
    // 7F079FF0: sth     r0, 5414(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5414);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F079FF4:
    ctx->pc = 0x7F079FF4u;
    // 7F079FF4: bl      0x7F0789DC
    {
            ctx->lr = 0x7F079FF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0789DCu;
                return;
            }
            goto label_7F0789DC;
    }

label_7F079FF8:
    ctx->pc = 0x7F079FF8u;
    ctx->downcount -= 18;
    // 7F079FF8: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F079FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F079FF8u);
        if (ctx->exception) return;
    }

label_7F079FFC:
    ctx->pc = 0x7F079FFCu;
    // 7F079FFC: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F079FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A000:
    ctx->pc = 0x7F07A000u;
    // 7F07A000: lmw     r29, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07A004:
    ctx->pc = 0x7F07A004u;
    // 7F07A004: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A008:
    ctx->pc = 0x7F07A008u;
    // 7F07A008: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A00C:
    ctx->pc = 0x7F07A00Cu;
    // 7F07A00C: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F07A010:
    ctx->pc = 0x7F07A010u;
    // 7F07A010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A014:
    ctx->pc = 0x7F07A014u;
    ctx->downcount -= 7;
    // 7F07A014: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A018:
    ctx->pc = 0x7F07A018u;
    // 7F07A018: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A01C:
    ctx->pc = 0x7F07A01Cu;
    // 7F07A01C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A020:
    ctx->pc = 0x7F07A020u;
    // 7F07A020: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07A024:
    ctx->pc = 0x7F07A024u;
    // 7F07A024: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A028:
    ctx->pc = 0x7F07A028u;
    // 7F07A028: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07A02C:
    ctx->pc = 0x7F07A02Cu;
    // 7F07A02C: bl      0x7F24E030
    {
            ctx->lr = 0x7F07A030u;
            ctx->pc = 0x7F24E030u;
            return;
    }

label_7F07A030:
    ctx->pc = 0x7F07A030u;
    ctx->downcount -= 2;
    // 7F07A030: addi    r3, r31, 5408
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(5408);

label_7F07A034:
    ctx->pc = 0x7F07A034u;
    // 7F07A034: bl      0x7F012144
    {
            ctx->lr = 0x7F07A038u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F07A038:
    ctx->pc = 0x7F07A038u;
    ctx->downcount -= 2;
    // 7F07A038: addi    r3, r31, 2608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2608);

label_7F07A03C:
    ctx->pc = 0x7F07A03Cu;
    // 7F07A03C: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F07A040u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F07A040:
    ctx->pc = 0x7F07A040u;
    ctx->downcount -= 2;
    // 7F07A040: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F07A044:
    ctx->pc = 0x7F07A044u;
    // 7F07A044: bl      0x7F01808C
    {
            ctx->lr = 0x7F07A048u;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F07A048:
    ctx->pc = 0x7F07A048u;
    ctx->downcount -= 2;
    // 7F07A048: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F07A04C:
    ctx->pc = 0x7F07A04Cu;
    // 7F07A04C: bl      0x7F0208F8
    {
            ctx->lr = 0x7F07A050u;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F07A050:
    ctx->pc = 0x7F07A050u;
    ctx->downcount -= 9;
    // 7F07A050: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07A054:
    ctx->pc = 0x7F07A054u;
    // 7F07A054: li      r0, -260
    ctx->gpr[0] = (u32)(s32)(-260);

label_7F07A058:
    ctx->pc = 0x7F07A058u;
    // 7F07A058: addi    r4, r3, 14080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F07A05C:
    ctx->pc = 0x7F07A05Cu;
    // 7F07A05C: lwz     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A060:
    ctx->pc = 0x7F07A060u;
    // 7F07A060: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F07A064:
    ctx->pc = 0x7F07A064u;
    // 7F07A064: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A068:
    ctx->pc = 0x7F07A068u;
    // 7F07A068: lwz     r3, 1884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1884);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A06C:
    ctx->pc = 0x7F07A06Cu;
    // 7F07A06C: cmpwi   r3, 0
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

label_7F07A070:
    ctx->pc = 0x7F07A070u;
    // 7F07A070: bc    12, 0, 0x7F07A094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A094;
        }
    }

label_7F07A074:
    ctx->pc = 0x7F07A074u;
    ctx->downcount -= 3;
    // 7F07A074: lwz     r0, 3080(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3080);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A078:
    ctx->pc = 0x7F07A078u;
    // 7F07A078: cmpwi   r0, 1
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

label_7F07A07C:
    ctx->pc = 0x7F07A07Cu;
    // 7F07A07C: bc    12, 2, 0x7F07A094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A094;
        }
    }

label_7F07A080:
    ctx->pc = 0x7F07A080u;
    ctx->downcount -= 3;
    // 7F07A080: lwz     r0, 3120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A084:
    ctx->pc = 0x7F07A084u;
    // 7F07A084: cmpwi   r0, 1
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

label_7F07A088:
    ctx->pc = 0x7F07A088u;
    // 7F07A088: bc    4, 2, 0x7F07A094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A094;
        }
    }

label_7F07A08C:
    ctx->pc = 0x7F07A08Cu;
    ctx->downcount -= 2;
    // 7F07A08C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07A090:
    ctx->pc = 0x7F07A090u;
    // 7F07A090: bl      0x7F3C7728
    {
            ctx->lr = 0x7F07A094u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F07A094:
    ctx->pc = 0x7F07A094u;
    ctx->downcount -= 3;
    // 7F07A094: lwz     r3, 2948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2948);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A098:
    ctx->pc = 0x7F07A098u;
    // 7F07A098: cmplwi  r3, 0x0000
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

label_7F07A09C:
    ctx->pc = 0x7F07A09Cu;
    // 7F07A09C: bc    12, 2, 0x7F07A0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A0AC;
        }
    }

label_7F07A0A0:
    ctx->pc = 0x7F07A0A0u;
    ctx->downcount -= 1;
    // 7F07A0A0: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07A0A4u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07A0A4:
    ctx->pc = 0x7F07A0A4u;
    ctx->downcount -= 2;
    // 7F07A0A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A0A8:
    ctx->pc = 0x7F07A0A8u;
    // 7F07A0A8: stw     r0, 2948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A0AC:
    ctx->pc = 0x7F07A0ACu;
    ctx->downcount -= 3;
    // 7F07A0AC: lwz     r3, 2944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A0B0:
    ctx->pc = 0x7F07A0B0u;
    // 7F07A0B0: cmplwi  r3, 0x0000
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

label_7F07A0B4:
    ctx->pc = 0x7F07A0B4u;
    // 7F07A0B4: bc    12, 2, 0x7F07A0C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A0C4;
        }
    }

label_7F07A0B8:
    ctx->pc = 0x7F07A0B8u;
    ctx->downcount -= 1;
    // 7F07A0B8: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07A0BCu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07A0BC:
    ctx->pc = 0x7F07A0BCu;
    ctx->downcount -= 2;
    // 7F07A0BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A0C0:
    ctx->pc = 0x7F07A0C0u;
    // 7F07A0C0: stw     r0, 2944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A0C4:
    ctx->pc = 0x7F07A0C4u;
    ctx->downcount -= 3;
    // 7F07A0C4: lwz     r3, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A0C8:
    ctx->pc = 0x7F07A0C8u;
    // 7F07A0C8: cmplwi  r3, 0x0000
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

label_7F07A0CC:
    ctx->pc = 0x7F07A0CCu;
    // 7F07A0CC: bc    12, 2, 0x7F07A0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A0E8;
        }
    }

label_7F07A0D0:
    ctx->pc = 0x7F07A0D0u;
    ctx->downcount -= 4;
    // 7F07A0D0: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F07A0D4:
    ctx->pc = 0x7F07A0D4u;
    // 7F07A0D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A0D8:
    ctx->pc = 0x7F07A0D8u;
    // 7F07A0D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A0DC:
    ctx->pc = 0x7F07A0DCu;
    // 7F07A0DC: bl      0x80051688
    {
            ctx->lr = 0x7F07A0E0u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F07A0E0:
    ctx->pc = 0x7F07A0E0u;
    ctx->downcount -= 2;
    // 7F07A0E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A0E4:
    ctx->pc = 0x7F07A0E4u;
    // 7F07A0E4: stw     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A0E8:
    ctx->pc = 0x7F07A0E8u;
    ctx->downcount -= 3;
    // 7F07A0E8: lwz     r3, 5456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A0EC:
    ctx->pc = 0x7F07A0ECu;
    // 7F07A0EC: cmplwi  r3, 0x0000
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

label_7F07A0F0:
    ctx->pc = 0x7F07A0F0u;
    // 7F07A0F0: bc    12, 2, 0x7F07A10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A10C;
        }
    }

label_7F07A0F4:
    ctx->pc = 0x7F07A0F4u;
    ctx->downcount -= 4;
    // 7F07A0F4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F07A0F8:
    ctx->pc = 0x7F07A0F8u;
    // 7F07A0F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A0FC:
    ctx->pc = 0x7F07A0FCu;
    // 7F07A0FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A100:
    ctx->pc = 0x7F07A100u;
    // 7F07A100: bl      0x80051688
    {
            ctx->lr = 0x7F07A104u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F07A104:
    ctx->pc = 0x7F07A104u;
    ctx->downcount -= 2;
    // 7F07A104: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A108:
    ctx->pc = 0x7F07A108u;
    // 7F07A108: stw     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A10C:
    ctx->pc = 0x7F07A10Cu;
    ctx->downcount -= 3;
    // 7F07A10C: lwz     r3, 5464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A110:
    ctx->pc = 0x7F07A110u;
    // 7F07A110: cmplwi  r3, 0x0000
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

label_7F07A114:
    ctx->pc = 0x7F07A114u;
    // 7F07A114: bc    12, 2, 0x7F07A130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A130;
        }
    }

label_7F07A118:
    ctx->pc = 0x7F07A118u;
    ctx->downcount -= 4;
    // 7F07A118: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F07A11C:
    ctx->pc = 0x7F07A11Cu;
    // 7F07A11C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A120:
    ctx->pc = 0x7F07A120u;
    // 7F07A120: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A124:
    ctx->pc = 0x7F07A124u;
    // 7F07A124: bl      0x80051688
    {
            ctx->lr = 0x7F07A128u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F07A128:
    ctx->pc = 0x7F07A128u;
    ctx->downcount -= 2;
    // 7F07A128: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A12C:
    ctx->pc = 0x7F07A12Cu;
    // 7F07A12C: stw     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A130:
    ctx->pc = 0x7F07A130u;
    ctx->downcount -= 5;
    // 7F07A130: lwz     r3, 5484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5484);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A134:
    ctx->pc = 0x7F07A134u;
    // 7F07A134: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F07A138:
    ctx->pc = 0x7F07A138u;
    // 7F07A138: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A13C:
    ctx->pc = 0x7F07A13Cu;
    // 7F07A13C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A140:
    ctx->pc = 0x7F07A140u;
    // 7F07A140: bl      0x80051688
    {
            ctx->lr = 0x7F07A144u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F07A144:
    ctx->pc = 0x7F07A144u;
    ctx->downcount -= 2;
    // 7F07A144: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F07A148:
    ctx->pc = 0x7F07A148u;
    // 7F07A148: bl      0x7F023E10
    {
            ctx->lr = 0x7F07A14Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F07A14C:
    ctx->pc = 0x7F07A14Cu;
    ctx->downcount -= 2;
    // 7F07A14C: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F07A150:
    ctx->pc = 0x7F07A150u;
    // 7F07A150: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07A154u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07A154:
    ctx->pc = 0x7F07A154u;
    ctx->downcount -= 2;
    // 7F07A154: addi    r3, r31, 476
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(476);

label_7F07A158:
    ctx->pc = 0x7F07A158u;
    // 7F07A158: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07A15Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07A15C:
    ctx->pc = 0x7F07A15Cu;
    ctx->downcount -= 2;
    // 7F07A15C: addi    r3, r31, 520
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(520);

label_7F07A160:
    ctx->pc = 0x7F07A160u;
    // 7F07A160: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07A164u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07A164:
    ctx->pc = 0x7F07A164u;
    ctx->downcount -= 2;
    // 7F07A164: addi    r3, r31, 2312
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2312);

label_7F07A168:
    ctx->pc = 0x7F07A168u;
    // 7F07A168: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07A16Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07A16C:
    ctx->pc = 0x7F07A16Cu;
    ctx->downcount -= 2;
    // 7F07A16C: addi    r3, r31, 960
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(960);

label_7F07A170:
    ctx->pc = 0x7F07A170u;
    // 7F07A170: bl      0x7F0146B0
    {
            ctx->lr = 0x7F07A174u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F07A174:
    ctx->pc = 0x7F07A174u;
    ctx->downcount -= 2;
    // 7F07A174: addi    r3, r31, 1152
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1152);

label_7F07A178:
    ctx->pc = 0x7F07A178u;
    // 7F07A178: bl      0x7F0146B0
    {
            ctx->lr = 0x7F07A17Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F07A17C:
    ctx->pc = 0x7F07A17Cu;
    ctx->downcount -= 2;
    // 7F07A17C: addi    r3, r31, 1344
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1344);

label_7F07A180:
    ctx->pc = 0x7F07A180u;
    // 7F07A180: bl      0x7F0146B0
    {
            ctx->lr = 0x7F07A184u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F07A184:
    ctx->pc = 0x7F07A184u;
    ctx->downcount -= 6;
    // 7F07A184: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A188:
    ctx->pc = 0x7F07A188u;
    // 7F07A188: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07A18C:
    ctx->pc = 0x7F07A18Cu;
    // 7F07A18C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A190:
    ctx->pc = 0x7F07A190u;
    // 7F07A190: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A194:
    ctx->pc = 0x7F07A194u;
    // 7F07A194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A198:
    ctx->pc = 0x7F07A198u;
    ctx->downcount -= 21;
    // 7F07A198: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A19C:
    ctx->pc = 0x7F07A19Cu;
    // 7F07A19C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A1A0:
    ctx->pc = 0x7F07A1A0u;
    // 7F07A1A0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A1A4:
    ctx->pc = 0x7F07A1A4u;
    // 7F07A1A4: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A1A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F07A1A8:
    ctx->pc = 0x7F07A1A8u;
    // 7F07A1A8: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F07A1A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F07A1A8u);
        if (ctx->exception) return;
    }

label_7F07A1AC:
    ctx->pc = 0x7F07A1ACu;
    // 7F07A1AC: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07A1B0:
    ctx->pc = 0x7F07A1B0u;
    // 7F07A1B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A1B4:
    ctx->pc = 0x7F07A1B4u;
    // 7F07A1B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07A1B8:
    ctx->pc = 0x7F07A1B8u;
    // 7F07A1B8: lwz     r0, 3052(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3052);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A1BC:
    ctx->pc = 0x7F07A1BCu;
    // 7F07A1BC: cmpwi   r0, 0
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

label_7F07A1C0:
    ctx->pc = 0x7F07A1C0u;
    // 7F07A1C0: bc    4, 2, 0x7F07A65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A65C;
        }
    }

label_7F07A1C4:
    ctx->pc = 0x7F07A1C4u;
    ctx->downcount -= 3;
    // 7F07A1C4: lwz     r0, 1720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A1C8:
    ctx->pc = 0x7F07A1C8u;
    // 7F07A1C8: cmpwi   r0, 2
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

label_7F07A1CC:
    ctx->pc = 0x7F07A1CCu;
    // 7F07A1CC: bc    12, 2, 0x7F07A1D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A1D8;
        }
    }

label_7F07A1D0:
    ctx->pc = 0x7F07A1D0u;
    ctx->downcount -= 2;
    // 7F07A1D0: cmpwi   r0, 3
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

label_7F07A1D4:
    ctx->pc = 0x7F07A1D4u;
    // 7F07A1D4: bc    4, 2, 0x7F07A65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A65C;
        }
    }

label_7F07A1D8:
    ctx->pc = 0x7F07A1D8u;
    ctx->downcount -= 3;
    // 7F07A1D8: lwz     r0, 5504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A1DC:
    ctx->pc = 0x7F07A1DCu;
    // 7F07A1DC: cmpwi   r0, 0
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

label_7F07A1E0:
    ctx->pc = 0x7F07A1E0u;
    // 7F07A1E0: bc    4, 2, 0x7F07A1F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A1F0;
        }
    }

label_7F07A1E4:
    ctx->pc = 0x7F07A1E4u;
    ctx->downcount -= 3;
    // 7F07A1E4: lwz     r0, 3092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A1E8:
    ctx->pc = 0x7F07A1E8u;
    // 7F07A1E8: cmpwi   r0, 0
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

label_7F07A1EC:
    ctx->pc = 0x7F07A1ECu;
    // 7F07A1EC: bc    12, 2, 0x7F07A204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A204;
        }
    }

label_7F07A1F0:
    ctx->pc = 0x7F07A1F0u;
    ctx->downcount -= 5;
    // 7F07A1F0: lwz     r3, 5504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5504);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A1F4:
    ctx->pc = 0x7F07A1F4u;
    // 7F07A1F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A1F8:
    ctx->pc = 0x7F07A1F8u;
    // 7F07A1F8: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F07A1FC:
    ctx->pc = 0x7F07A1FCu;
    // 7F07A1FC: stw     r3, 5504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5504);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A200:
    ctx->pc = 0x7F07A200u;
    // 7F07A200: stw     r0, 5492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A204:
    ctx->pc = 0x7F07A204u;
    ctx->downcount -= 3;
    // 7F07A204: lwz     r3, 5492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A208:
    ctx->pc = 0x7F07A208u;
    // 7F07A208: cmpwi   r3, 0
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

label_7F07A20C:
    ctx->pc = 0x7F07A20Cu;
    // 7F07A20C: bc    4, 1, 0x7F07A2DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A2DC;
        }
    }

label_7F07A210:
    ctx->pc = 0x7F07A210u;
    ctx->downcount -= 5;
    // 7F07A210: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F07A214:
    ctx->pc = 0x7F07A214u;
    // 7F07A214: stw     r0, 5492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A218:
    ctx->pc = 0x7F07A218u;
    // 7F07A218: lwz     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A21C:
    ctx->pc = 0x7F07A21Cu;
    // 7F07A21C: cmplwi  r0, 0x0000
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

label_7F07A220:
    ctx->pc = 0x7F07A220u;
    // 7F07A220: bc    4, 2, 0x7F07A300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A300;
        }
    }

label_7F07A224:
    ctx->pc = 0x7F07A224u;
    ctx->downcount -= 6;
    // 7F07A224: li      r3, 2021
    ctx->gpr[3] = (u32)(s32)(2021);

label_7F07A228:
    ctx->pc = 0x7F07A228u;
    // 7F07A228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07A22C:
    ctx->pc = 0x7F07A22Cu;
    // 7F07A22C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A230:
    ctx->pc = 0x7F07A230u;
    // 7F07A230: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A234:
    ctx->pc = 0x7F07A234u;
    // 7F07A234: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07A238:
    ctx->pc = 0x7F07A238u;
    // 7F07A238: bl      0x8004F994
    {
            ctx->lr = 0x7F07A23Cu;
            ctx->pc = 0x8004F994u;
            return;
    }

label_7F07A23C:
    ctx->pc = 0x7F07A23Cu;
    ctx->downcount -= 6;
    // 7F07A23C: addi    r5, r31, 32
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(32);

label_7F07A240:
    ctx->pc = 0x7F07A240u;
    // 7F07A240: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07A244:
    ctx->pc = 0x7F07A244u;
    // 7F07A244: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F07A248:
    ctx->pc = 0x7F07A248u;
    // 7F07A248: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07A24C:
    ctx->pc = 0x7F07A24Cu;
    // 7F07A24C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07A250:
    ctx->pc = 0x7F07A250u;
    // 7F07A250: bl      0x80050158
    {
            ctx->lr = 0x7F07A254u;
            ctx->pc = 0x80050158u;
            return;
    }

label_7F07A254:
    ctx->pc = 0x7F07A254u;
    ctx->downcount -= 23;
    // 7F07A254: stw     r3, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A258:
    ctx->pc = 0x7F07A258u;
    // 7F07A258: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A25C:
    ctx->pc = 0x7F07A25Cu;
    // 7F07A25C: lfs     f0, -7904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07A25Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A260:
    ctx->pc = 0x7F07A260u;
    // 7F07A260: li      r0, 80
    ctx->gpr[0] = (u32)(s32)(80);

label_7F07A264:
    ctx->pc = 0x7F07A264u;
    // 7F07A264: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A264u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F07A268:
    ctx->pc = 0x7F07A268u;
    // 7F07A268: lfs     f1, 2216(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A268u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A26C:
    ctx->pc = 0x7F07A26Cu;
    // 7F07A26C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A26Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F07A270:
    ctx->pc = 0x7F07A270u;
    // 7F07A270: stfs     f1, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A270u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07A274:
    ctx->pc = 0x7F07A274u;
    // 7F07A274: stfs     f0, 5472(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A274u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5472);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A278:
    ctx->pc = 0x7F07A278u;
    // 7F07A278: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A278u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A27C:
    ctx->pc = 0x7F07A27Cu;
    // 7F07A27C: lfs     f0, 2224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A27Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A280:
    ctx->pc = 0x7F07A280u;
    // 7F07A280: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A280u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F07A284:
    ctx->pc = 0x7F07A284u;
    // 7F07A284: stfs     f0, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A284u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A288:
    ctx->pc = 0x7F07A288u;
    // 7F07A288: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A28C:
    ctx->pc = 0x7F07A28Cu;
    // 7F07A28C: lwz     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A290:
    ctx->pc = 0x7F07A290u;
    // 7F07A290: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F07A294:
    ctx->pc = 0x7F07A294u;
    // 7F07A294: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A298:
    ctx->pc = 0x7F07A298u;
    // 7F07A298: lfs     f1, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A298u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A29C:
    ctx->pc = 0x7F07A29Cu;
    // 7F07A29C: lfs     f0, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A29Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A2A0:
    ctx->pc = 0x7F07A2A0u;
    // 7F07A2A0: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A2A0u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F07A2A4:
    ctx->pc = 0x7F07A2A4u;
    // 7F07A2A4: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A2A4u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_7F07A2A8:
    ctx->pc = 0x7F07A2A8u;
    // 7F07A2A8: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A2A8u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F07A2AC:
    ctx->pc = 0x7F07A2ACu;
    // 7F07A2AC: bl      0x80006668
    {
            ctx->lr = 0x7F07A2B0u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F07A2B0:
    ctx->pc = 0x7F07A2B0u;
    ctx->downcount -= 4;
    // 7F07A2B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A2B4:
    ctx->pc = 0x7F07A2B4u;
    // 7F07A2B4: lfs     f0, -7904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07A2B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A2B8:
    ctx->pc = 0x7F07A2B8u;
    // 7F07A2B8: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A2B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F07A2BC:
    ctx->pc = 0x7F07A2BCu;
    // 7F07A2BC: bc    12, 2, 0x7F07A300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A300;
        }
    }

label_7F07A2C0:
    ctx->pc = 0x7F07A2C0u;
    ctx->downcount -= 39;
    // 7F07A2C0: lfs     f0, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A2C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A2C4:
    ctx->pc = 0x7F07A2C4u;
    // 7F07A2C4: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A2C4u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F07A2C8:
    ctx->pc = 0x7F07A2C8u;
    // 7F07A2C8: stfs     f0, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A2C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A2CC:
    ctx->pc = 0x7F07A2CCu;
    // 7F07A2CC: lfs     f0, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A2CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A2D0:
    ctx->pc = 0x7F07A2D0u;
    // 7F07A2D0: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A2D0u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F07A2D4:
    ctx->pc = 0x7F07A2D4u;
    // 7F07A2D4: stfs     f0, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A2D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A2D8:
    ctx->pc = 0x7F07A2D8u;
    // 7F07A2D8: b       0x7F07A300
    {
            goto label_7F07A300;
    }

label_7F07A2DC:
    ctx->pc = 0x7F07A2DCu;
    ctx->downcount -= 3;
    // 7F07A2DC: lwz     r3, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A2E0:
    ctx->pc = 0x7F07A2E0u;
    // 7F07A2E0: cmplwi  r3, 0x0000
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

label_7F07A2E4:
    ctx->pc = 0x7F07A2E4u;
    // 7F07A2E4: bc    12, 2, 0x7F07A300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A300;
        }
    }

label_7F07A2E8:
    ctx->pc = 0x7F07A2E8u;
    ctx->downcount -= 4;
    // 7F07A2E8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F07A2EC:
    ctx->pc = 0x7F07A2ECu;
    // 7F07A2EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A2F0:
    ctx->pc = 0x7F07A2F0u;
    // 7F07A2F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A2F4:
    ctx->pc = 0x7F07A2F4u;
    // 7F07A2F4: bl      0x80051688
    {
            ctx->lr = 0x7F07A2F8u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F07A2F8:
    ctx->pc = 0x7F07A2F8u;
    ctx->downcount -= 2;
    // 7F07A2F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A2FC:
    ctx->pc = 0x7F07A2FCu;
    // 7F07A2FC: stw     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A300:
    ctx->pc = 0x7F07A300u;
    ctx->downcount -= 3;
    // 7F07A300: lwz     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A304:
    ctx->pc = 0x7F07A304u;
    // 7F07A304: cmpwi   r0, 0
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

label_7F07A308:
    ctx->pc = 0x7F07A308u;
    // 7F07A308: bc    4, 1, 0x7F07A3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A3C0;
        }
    }

label_7F07A30C:
    ctx->pc = 0x7F07A30Cu;
    ctx->downcount -= 3;
    // 7F07A30C: lwz     r0, 1720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A310:
    ctx->pc = 0x7F07A310u;
    // 7F07A310: cmpwi   r0, 2
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

label_7F07A314:
    ctx->pc = 0x7F07A314u;
    // 7F07A314: bc    4, 2, 0x7F07A328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A328;
        }
    }

label_7F07A318:
    ctx->pc = 0x7F07A318u;
    ctx->downcount -= 4;
    // 7F07A318: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A31C:
    ctx->pc = 0x7F07A31Cu;
    // 7F07A31C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F07A320:
    ctx->pc = 0x7F07A320u;
    // 7F07A320: stw     r0, 5504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A324:
    ctx->pc = 0x7F07A324u;
    // 7F07A324: b       0x7F07A338
    {
            goto label_7F07A338;
    }

label_7F07A328:
    ctx->pc = 0x7F07A328u;
    ctx->downcount -= 4;
    // 7F07A328: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07A32C:
    ctx->pc = 0x7F07A32Cu;
    // 7F07A32C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07A330:
    ctx->pc = 0x7F07A330u;
    // 7F07A330: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A334:
    ctx->pc = 0x7F07A334u;
    // 7F07A334: lha     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07A338:
    ctx->pc = 0x7F07A338u;
    ctx->downcount -= 2;
    // 7F07A338: cmpwi   r3, 30
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

label_7F07A33C:
    ctx->pc = 0x7F07A33Cu;
    // 7F07A33C: bc    12, 2, 0x7F07A390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A390;
        }
    }

label_7F07A340:
    ctx->pc = 0x7F07A340u;
    ctx->downcount -= 1;
    // 7F07A340: bc    4, 0, 0x7F07A35C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A35C;
        }
    }

label_7F07A344:
    ctx->pc = 0x7F07A344u;
    ctx->downcount -= 2;
    // 7F07A344: cmpwi   r3, 20
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

label_7F07A348:
    ctx->pc = 0x7F07A348u;
    // 7F07A348: bc    12, 2, 0x7F07A380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A380;
        }
    }

label_7F07A34C:
    ctx->pc = 0x7F07A34Cu;
    ctx->downcount -= 1;
    // 7F07A34C: bc    4, 0, 0x7F07A370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A370;
        }
    }

label_7F07A350:
    ctx->pc = 0x7F07A350u;
    ctx->downcount -= 2;
    // 7F07A350: cmpwi   r3, 10
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

label_7F07A354:
    ctx->pc = 0x7F07A354u;
    // 7F07A354: bc    12, 2, 0x7F07A370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A370;
        }
    }

label_7F07A358:
    ctx->pc = 0x7F07A358u;
    ctx->downcount -= 1;
    // 7F07A358: b       0x7F07A370
    {
            goto label_7F07A370;
    }

label_7F07A35C:
    ctx->pc = 0x7F07A35Cu;
    ctx->downcount -= 2;
    // 7F07A35C: cmpwi   r3, 50
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

label_7F07A360:
    ctx->pc = 0x7F07A360u;
    // 7F07A360: bc    12, 2, 0x7F07A3B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A3B0;
        }
    }

label_7F07A364:
    ctx->pc = 0x7F07A364u;
    ctx->downcount -= 1;
    // 7F07A364: bc    4, 0, 0x7F07A370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A370;
        }
    }

label_7F07A368:
    ctx->pc = 0x7F07A368u;
    ctx->downcount -= 2;
    // 7F07A368: cmpwi   r3, 40
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

label_7F07A36C:
    ctx->pc = 0x7F07A36Cu;
    // 7F07A36C: bc    12, 2, 0x7F07A3A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A3A0;
        }
    }

label_7F07A370:
    ctx->pc = 0x7F07A370u;
    ctx->downcount -= 4;
    // 7F07A370: lwz     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A374:
    ctx->pc = 0x7F07A374u;
    // 7F07A374: addi    r0, r3, -3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3);

label_7F07A378:
    ctx->pc = 0x7F07A378u;
    // 7F07A378: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A37C:
    ctx->pc = 0x7F07A37Cu;
    // 7F07A37C: b       0x7F07A3C8
    {
            goto label_7F07A3C8;
    }

label_7F07A380:
    ctx->pc = 0x7F07A380u;
    ctx->downcount -= 4;
    // 7F07A380: lwz     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A384:
    ctx->pc = 0x7F07A384u;
    // 7F07A384: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F07A388:
    ctx->pc = 0x7F07A388u;
    // 7F07A388: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A38C:
    ctx->pc = 0x7F07A38Cu;
    // 7F07A38C: b       0x7F07A3C8
    {
            goto label_7F07A3C8;
    }

label_7F07A390:
    ctx->pc = 0x7F07A390u;
    ctx->downcount -= 4;
    // 7F07A390: lwz     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A394:
    ctx->pc = 0x7F07A394u;
    // 7F07A394: addi    r0, r3, -5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5);

label_7F07A398:
    ctx->pc = 0x7F07A398u;
    // 7F07A398: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A39C:
    ctx->pc = 0x7F07A39Cu;
    // 7F07A39C: b       0x7F07A3C8
    {
            goto label_7F07A3C8;
    }

label_7F07A3A0:
    ctx->pc = 0x7F07A3A0u;
    ctx->downcount -= 4;
    // 7F07A3A0: lwz     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A3A4:
    ctx->pc = 0x7F07A3A4u;
    // 7F07A3A4: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_7F07A3A8:
    ctx->pc = 0x7F07A3A8u;
    // 7F07A3A8: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A3AC:
    ctx->pc = 0x7F07A3ACu;
    // 7F07A3AC: b       0x7F07A3C8
    {
            goto label_7F07A3C8;
    }

label_7F07A3B0:
    ctx->pc = 0x7F07A3B0u;
    ctx->downcount -= 4;
    // 7F07A3B0: lwz     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A3B4:
    ctx->pc = 0x7F07A3B4u;
    // 7F07A3B4: addi    r0, r3, -10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-10);

label_7F07A3B8:
    ctx->pc = 0x7F07A3B8u;
    // 7F07A3B8: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A3BC:
    ctx->pc = 0x7F07A3BCu;
    // 7F07A3BC: b       0x7F07A3C8
    {
            goto label_7F07A3C8;
    }

label_7F07A3C0:
    ctx->pc = 0x7F07A3C0u;
    ctx->downcount -= 2;
    // 7F07A3C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A3C4:
    ctx->pc = 0x7F07A3C4u;
    // 7F07A3C4: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A3C8:
    ctx->pc = 0x7F07A3C8u;
    ctx->downcount -= 3;
    // 7F07A3C8: lwz     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A3CC:
    ctx->pc = 0x7F07A3CCu;
    // 7F07A3CC: cmplwi  r0, 0x0000
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

label_7F07A3D0:
    ctx->pc = 0x7F07A3D0u;
    // 7F07A3D0: bc    12, 2, 0x7F07A40C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A40C;
        }
    }

label_7F07A3D4:
    ctx->pc = 0x7F07A3D4u;
    ctx->downcount -= 7;
    // 7F07A3D4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F07A3D8:
    ctx->pc = 0x7F07A3D8u;
    // 7F07A3D8: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F07A3DC:
    ctx->pc = 0x7F07A3DCu;
    // 7F07A3DC: addi    r7, r4, -1536
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-1536);

label_7F07A3E0:
    ctx->pc = 0x7F07A3E0u;
    // 7F07A3E0: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_7F07A3E4:
    ctx->pc = 0x7F07A3E4u;
    // 7F07A3E4: li      r5, 99
    ctx->gpr[5] = (u32)(s32)(99);

label_7F07A3E8:
    ctx->pc = 0x7F07A3E8u;
    // 7F07A3E8: li      r6, 20000
    ctx->gpr[6] = (u32)(s32)(20000);

label_7F07A3EC:
    ctx->pc = 0x7F07A3ECu;
    // 7F07A3EC: bl      0x7F031B64
    {
            ctx->lr = 0x7F07A3F0u;
            ctx->pc = 0x7F031B64u;
            return;
    }

label_7F07A3F0:
    ctx->pc = 0x7F07A3F0u;
    ctx->downcount -= 2;
    // 7F07A3F0: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F07A3F4:
    ctx->pc = 0x7F07A3F4u;
    // 7F07A3F4: bl      0x80052050
    {
            ctx->lr = 0x7F07A3F8u;
            ctx->pc = 0x80052050u;
            return;
    }

label_7F07A3F8:
    ctx->pc = 0x7F07A3F8u;
    ctx->downcount -= 5;
    // 7F07A3F8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A3FC:
    ctx->pc = 0x7F07A3FCu;
    // 7F07A3FC: lwz     r3, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A400:
    ctx->pc = 0x7F07A400u;
    // 7F07A400: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F07A404:
    ctx->pc = 0x7F07A404u;
    // 7F07A404: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F07A408:
    ctx->pc = 0x7F07A408u;
    // 7F07A408: bl      0x800506B8
    {
            ctx->lr = 0x7F07A40Cu;
            ctx->pc = 0x800506B8u;
            return;
    }

label_7F07A40C:
    ctx->pc = 0x7F07A40Cu;
    ctx->downcount -= 3;
    // 7F07A40C: lwz     r0, 2128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A410:
    ctx->pc = 0x7F07A410u;
    // 7F07A410: cmpwi   r0, 1
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

label_7F07A414:
    ctx->pc = 0x7F07A414u;
    // 7F07A414: bc    4, 2, 0x7F07A570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A570;
        }
    }

label_7F07A418:
    ctx->pc = 0x7F07A418u;
    ctx->downcount -= 51;
    // 7F07A418: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F07A41C:
    ctx->pc = 0x7F07A41Cu;
    // 7F07A41C: lwz     r4, 1620(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1620);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A420:
    ctx->pc = 0x7F07A420u;
    // 7F07A420: addi    r3, r3, 32304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F07A424:
    ctx->pc = 0x7F07A424u;
    // 7F07A424: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A428:
    ctx->pc = 0x7F07A428u;
    // 7F07A428: divw   r0, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F07A42C:
    ctx->pc = 0x7F07A42Cu;
    // 7F07A42C: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F07A430:
    ctx->pc = 0x7F07A430u;
    // 7F07A430: subf.   r0, r0, r3
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

label_7F07A434:
    ctx->pc = 0x7F07A434u;
    // 7F07A434: bc    4, 2, 0x7F07A570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A570;
        }
    }

label_7F07A438:
    ctx->pc = 0x7F07A438u;
    ctx->downcount -= 3;
    // 7F07A438: lwz     r0, 5504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A43C:
    ctx->pc = 0x7F07A43Cu;
    // 7F07A43C: cmpwi   r0, 0
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

label_7F07A440:
    ctx->pc = 0x7F07A440u;
    // 7F07A440: bc    4, 2, 0x7F07A570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A570;
        }
    }

label_7F07A444:
    ctx->pc = 0x7F07A444u;
    ctx->downcount -= 5;
    // 7F07A444: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_7F07A448:
    ctx->pc = 0x7F07A448u;
    // 7F07A448: stw     r0, 5492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A44C:
    ctx->pc = 0x7F07A44Cu;
    // 7F07A44C: lwz     r0, 1720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A450:
    ctx->pc = 0x7F07A450u;
    // 7F07A450: cmpwi   r0, 2
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

label_7F07A454:
    ctx->pc = 0x7F07A454u;
    // 7F07A454: bc    4, 2, 0x7F07A4A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A4A0;
        }
    }

label_7F07A458:
    ctx->pc = 0x7F07A458u;
    ctx->downcount -= 6;
    // 7F07A458: lwz     r3, 3088(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3088);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A45C:
    ctx->pc = 0x7F07A45Cu;
    // 7F07A45C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F07A460:
    ctx->pc = 0x7F07A460u;
    // 7F07A460: stw     r0, 3088(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3088);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A464:
    ctx->pc = 0x7F07A464u;
    // 7F07A464: lwz     r0, 3088(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3088);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A468:
    ctx->pc = 0x7F07A468u;
    // 7F07A468: cmpwi   r0, 0
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

label_7F07A46C:
    ctx->pc = 0x7F07A46Cu;
    // 7F07A46C: bc    4, 0, 0x7F07A48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A48C;
        }
    }

label_7F07A470:
    ctx->pc = 0x7F07A470u;
    ctx->downcount -= 2;
    // 7F07A470: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F07A474:
    ctx->pc = 0x7F07A474u;
    // 7F07A474: bl      0x7F02A538
    {
            ctx->lr = 0x7F07A478u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F07A478:
    ctx->pc = 0x7F07A478u;
    ctx->downcount -= 5;
    // 7F07A478: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F07A47C:
    ctx->pc = 0x7F07A47Cu;
    // 7F07A47C: stw     r0, 3088(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3088);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A480:
    ctx->pc = 0x7F07A480u;
    // 7F07A480: lwz     r0, 3092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A484:
    ctx->pc = 0x7F07A484u;
    // 7F07A484: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F07A488:
    ctx->pc = 0x7F07A488u;
    // 7F07A488: stw     r0, 3092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3092);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A48C:
    ctx->pc = 0x7F07A48Cu;
    ctx->downcount -= 3;
    // 7F07A48C: lwz     r0, 3092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A490:
    ctx->pc = 0x7F07A490u;
    // 7F07A490: cmpwi   r0, 0
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

label_7F07A494:
    ctx->pc = 0x7F07A494u;
    // 7F07A494: bc    12, 2, 0x7F07A4A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A4A0;
        }
    }

label_7F07A498:
    ctx->pc = 0x7F07A498u;
    ctx->downcount -= 2;
    // 7F07A498: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07A49C:
    ctx->pc = 0x7F07A49Cu;
    // 7F07A49C: b       0x7F07A65C
    {
            goto label_7F07A65C;
    }

label_7F07A4A0:
    ctx->pc = 0x7F07A4A0u;
    ctx->downcount -= 53;
    // 7F07A4A0: lwz     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A4A4:
    ctx->pc = 0x7F07A4A4u;
    // 7F07A4A4: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F07A4A8:
    ctx->pc = 0x7F07A4A8u;
    // 7F07A4A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A4AC:
    ctx->pc = 0x7F07A4ACu;
    // 7F07A4AC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F07A4B0:
    ctx->pc = 0x7F07A4B0u;
    // 7F07A4B0: mulli   r9, r0, 5
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F07A4B4:
    ctx->pc = 0x7F07A4B4u;
    // 7F07A4B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07A4B8:
    ctx->pc = 0x7F07A4B8u;
    // 7F07A4B8: lwz     r6, 2216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2216);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F07A4BC:
    ctx->pc = 0x7F07A4BCu;
    // 7F07A4BC: addi    r8, r3, -7912
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7912);

label_7F07A4C0:
    ctx->pc = 0x7F07A4C0u;
    // 7F07A4C0: lwz     r0, 2220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A4C4:
    ctx->pc = 0x7F07A4C4u;
    // 7F07A4C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A4C8:
    ctx->pc = 0x7F07A4C8u;
    // 7F07A4C8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07A4CC:
    ctx->pc = 0x7F07A4CCu;
    // 7F07A4CC: xoris   r6, r9, 0x8000
    ctx->gpr[6] = ctx->gpr[9] ^ (0x8000u << 16);

label_7F07A4D0:
    ctx->pc = 0x7F07A4D0u;
    // 7F07A4D0: addi    r30, r5, -7900
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-7900);

label_7F07A4D4:
    ctx->pc = 0x7F07A4D4u;
    // 7F07A4D4: addi    r12, r4, -7896
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(-7896);

label_7F07A4D8:
    ctx->pc = 0x7F07A4D8u;
    // 7F07A4D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A4DC:
    ctx->pc = 0x7F07A4DCu;
    // 7F07A4DC: addi    r11, r3, -7892
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(-7892);

label_7F07A4E0:
    ctx->pc = 0x7F07A4E0u;
    // 7F07A4E0: lfd     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F07A4E0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A4E4:
    ctx->pc = 0x7F07A4E4u;
    // 7F07A4E4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F07A4E8:
    ctx->pc = 0x7F07A4E8u;
    // 7F07A4E8: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07A4EC:
    ctx->pc = 0x7F07A4ECu;
    // 7F07A4EC: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F07A4F0:
    ctx->pc = 0x7F07A4F0u;
    // 7F07A4F0: lwz     r9, 2224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2224);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F07A4F4:
    ctx->pc = 0x7F07A4F4u;
    // 7F07A4F4: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F07A4F8:
    ctx->pc = 0x7F07A4F8u;
    // 7F07A4F8: lwz     r10, 2228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2228);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F07A4FC:
    ctx->pc = 0x7F07A4FCu;
    // 7F07A4FC: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A500:
    ctx->pc = 0x7F07A500u;
    // 7F07A500: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F07A504:
    ctx->pc = 0x7F07A504u;
    // 7F07A504: addi    r6, r31, 4920
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4920);

label_7F07A508:
    ctx->pc = 0x7F07A508u;
    // 7F07A508: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A508u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F07A50C:
    ctx->pc = 0x7F07A50Cu;
    // 7F07A50C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F07A510:
    ctx->pc = 0x7F07A510u;
    // 7F07A510: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A510u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A514:
    ctx->pc = 0x7F07A514u;
    // 7F07A514: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07A518:
    ctx->pc = 0x7F07A518u;
    // 7F07A518: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F07A51C:
    ctx->pc = 0x7F07A51Cu;
    // 7F07A51C: li      r9, 3
    ctx->gpr[9] = (u32)(s32)(3);

label_7F07A520:
    ctx->pc = 0x7F07A520u;
    // 7F07A520: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A520u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F07A524:
    ctx->pc = 0x7F07A524u;
    // 7F07A524: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A524u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A528:
    ctx->pc = 0x7F07A528u;
    // 7F07A528: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F07A52C:
    ctx->pc = 0x7F07A52Cu;
    // 7F07A52C: li      r10, 4
    ctx->gpr[10] = (u32)(s32)(4);

label_7F07A530:
    ctx->pc = 0x7F07A530u;
    // 7F07A530: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A534:
    ctx->pc = 0x7F07A534u;
    // 7F07A534: lfs     f4, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A534u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F07A538:
    ctx->pc = 0x7F07A538u;
    // 7F07A538: fsubs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F07A538u)) return;
    ppc_fsubs(ctx, 1, 1, 31);

label_7F07A53C:
    ctx->pc = 0x7F07A53Cu;
    // 7F07A53C: lfs     f2, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F07A53Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F07A540:
    ctx->pc = 0x7F07A540u;
    // 7F07A540: fnmsubs f5, f4, f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F07A540u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[31], ctx->fpr[3], true, true, true, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_7F07A544:
    ctx->pc = 0x7F07A544u;
    // 7F07A544: lfs     f3, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F07A544u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F07A548:
    ctx->pc = 0x7F07A548u;
    // 7F07A548: lfs     f4, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F07A548u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F07A54C:
    ctx->pc = 0x7F07A54Cu;
    // 7F07A54C: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A54Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07A550:
    ctx->pc = 0x7F07A550u;
    // 7F07A550: stfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A550u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F07A554:
    ctx->pc = 0x7F07A554u;
    // 7F07A554: lfs     f1, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A554u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A558:
    ctx->pc = 0x7F07A558u;
    // 7F07A558: fnmsubs f0, f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A558u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[31], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F07A55C:
    ctx->pc = 0x7F07A55Cu;
    // 7F07A55C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A55Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A560:
    ctx->pc = 0x7F07A560u;
    // 7F07A560: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A564:
    ctx->pc = 0x7F07A564u;
    // 7F07A564: lfs     f1, 2296(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A564u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A568:
    ctx->pc = 0x7F07A568u;
    // 7F07A568: bl      0x7F0761B0
    {
            ctx->lr = 0x7F07A56Cu;
            ctx->pc = 0x7F0761B0u;
            return;
    }

label_7F07A56C:
    ctx->pc = 0x7F07A56Cu;
    ctx->downcount -= 1;
    // 7F07A56C: b       0x7F07A65C
    {
            goto label_7F07A65C;
    }

label_7F07A570:
    ctx->pc = 0x7F07A570u;
    ctx->downcount -= 3;
    // 7F07A570: lwz     r0, 5460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5460);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A574:
    ctx->pc = 0x7F07A574u;
    // 7F07A574: cmplwi  r0, 0x0000
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

label_7F07A578:
    ctx->pc = 0x7F07A578u;
    // 7F07A578: bc    4, 2, 0x7F07A5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A5B8;
        }
    }

label_7F07A57C:
    ctx->pc = 0x7F07A57Cu;
    ctx->downcount -= 17;
    // 7F07A57C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_7F07A580:
    ctx->pc = 0x7F07A580u;
    // 7F07A580: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F07A584:
    ctx->pc = 0x7F07A584u;
    // 7F07A584: stw     r3, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A588:
    ctx->pc = 0x7F07A588u;
    // 7F07A588: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A58C:
    ctx->pc = 0x7F07A58Cu;
    // 7F07A58C: lfd     f1, -7912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07A58Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7912);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A590:
    ctx->pc = 0x7F07A590u;
    // 7F07A590: lwz     r4, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A594:
    ctx->pc = 0x7F07A594u;
    // 7F07A594: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A598:
    ctx->pc = 0x7F07A598u;
    // 7F07A598: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F07A59C:
    ctx->pc = 0x7F07A59Cu;
    // 7F07A59C: stw     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A5A0:
    ctx->pc = 0x7F07A5A0u;
    // 7F07A5A0: lwz     r0, 5508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A5A4:
    ctx->pc = 0x7F07A5A4u;
    // 7F07A5A4: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F07A5A8:
    ctx->pc = 0x7F07A5A8u;
    // 7F07A5A8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F07A5AC:
    ctx->pc = 0x7F07A5ACu;
    // 7F07A5AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A5B0:
    ctx->pc = 0x7F07A5B0u;
    // 7F07A5B0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A5B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A5B4:
    ctx->pc = 0x7F07A5B4u;
    // 7F07A5B4: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F07A5B4u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F07A5B8:
    ctx->pc = 0x7F07A5B8u;
    ctx->downcount -= 40;
    // 7F07A5B8: lwz     r0, 2216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A5BC:
    ctx->pc = 0x7F07A5BCu;
    // 7F07A5BC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F07A5C0:
    ctx->pc = 0x7F07A5C0u;
    // 7F07A5C0: lwz     r6, 2220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2220);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F07A5C4:
    ctx->pc = 0x7F07A5C4u;
    // 7F07A5C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07A5C8:
    ctx->pc = 0x7F07A5C8u;
    // 7F07A5C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07A5CC:
    ctx->pc = 0x7F07A5CCu;
    // 7F07A5CC: addi    r9, r5, -7900
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-7900);

label_7F07A5D0:
    ctx->pc = 0x7F07A5D0u;
    // 7F07A5D0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A5D4:
    ctx->pc = 0x7F07A5D4u;
    // 7F07A5D4: addi    r12, r4, -7896
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(-7896);

label_7F07A5D8:
    ctx->pc = 0x7F07A5D8u;
    // 7F07A5D8: addi    r11, r3, -7892
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(-7892);

label_7F07A5DC:
    ctx->pc = 0x7F07A5DCu;
    // 7F07A5DC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F07A5E0:
    ctx->pc = 0x7F07A5E0u;
    // 7F07A5E0: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07A5E4:
    ctx->pc = 0x7F07A5E4u;
    // 7F07A5E4: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F07A5E8:
    ctx->pc = 0x7F07A5E8u;
    // 7F07A5E8: lfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A5E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F07A5EC:
    ctx->pc = 0x7F07A5ECu;
    // 7F07A5EC: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F07A5F0:
    ctx->pc = 0x7F07A5F0u;
    // 7F07A5F0: lwz     r8, 2224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2224);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F07A5F4:
    ctx->pc = 0x7F07A5F4u;
    // 7F07A5F4: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A5F8:
    ctx->pc = 0x7F07A5F8u;
    // 7F07A5F8: lwz     r10, 2228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2228);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F07A5FC:
    ctx->pc = 0x7F07A5FCu;
    // 7F07A5FC: addi    r6, r31, 4920
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4920);

label_7F07A600:
    ctx->pc = 0x7F07A600u;
    // 7F07A600: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A604:
    ctx->pc = 0x7F07A604u;
    // 7F07A604: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07A608:
    ctx->pc = 0x7F07A608u;
    // 7F07A608: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07A60C:
    ctx->pc = 0x7F07A60Cu;
    // 7F07A60C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07A610:
    ctx->pc = 0x7F07A610u;
    // 7F07A610: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F07A610u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_7F07A614:
    ctx->pc = 0x7F07A614u;
    // 7F07A614: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F07A614u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F07A618:
    ctx->pc = 0x7F07A618u;
    // 7F07A618: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F07A61C:
    ctx->pc = 0x7F07A61Cu;
    // 7F07A61C: li      r9, 3
    ctx->gpr[9] = (u32)(s32)(3);

label_7F07A620:
    ctx->pc = 0x7F07A620u;
    // 7F07A620: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07A624:
    ctx->pc = 0x7F07A624u;
    // 7F07A624: li      r10, 4
    ctx->gpr[10] = (u32)(s32)(4);

label_7F07A628:
    ctx->pc = 0x7F07A628u;
    // 7F07A628: lfs     f5, 5476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A628u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F07A62C:
    ctx->pc = 0x7F07A62Cu;
    // 7F07A62C: lfs     f3, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F07A62Cu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F07A630:
    ctx->pc = 0x7F07A630u;
    // 7F07A630: fnmsubs f5, f5, f31, f4
    if (!ppc_fp_available_inline(ctx, 0x7F07A630u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[31], ctx->fpr[4], true, true, true, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_7F07A634:
    ctx->pc = 0x7F07A634u;
    // 7F07A634: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F07A638:
    ctx->pc = 0x7F07A638u;
    // 7F07A638: lfs     f4, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F07A638u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F07A63C:
    ctx->pc = 0x7F07A63Cu;
    // 7F07A63C: stfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A63Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F07A640:
    ctx->pc = 0x7F07A640u;
    // 7F07A640: lfs     f1, 5468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A640u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A644:
    ctx->pc = 0x7F07A644u;
    // 7F07A644: fnmsubs f0, f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07A644u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[31], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F07A648:
    ctx->pc = 0x7F07A648u;
    // 7F07A648: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07A64C:
    ctx->pc = 0x7F07A64Cu;
    // 7F07A64C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A650:
    ctx->pc = 0x7F07A650u;
    // 7F07A650: lfs     f1, 2296(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07A650u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07A654:
    ctx->pc = 0x7F07A654u;
    // 7F07A654: bl      0x7F0761B0
    {
            ctx->lr = 0x7F07A658u;
            ctx->pc = 0x7F0761B0u;
            return;
    }

label_7F07A658:
    ctx->pc = 0x7F07A658u;
    ctx->downcount -= 1;
    // 7F07A658: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F07A65C:
    ctx->pc = 0x7F07A65Cu;
    ctx->downcount -= 18;
    // 7F07A65C: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F07A65Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F07A65Cu);
        if (ctx->exception) return;
    }

label_7F07A660:
    ctx->pc = 0x7F07A660u;
    // 7F07A660: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F07A660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F07A664:
    ctx->pc = 0x7F07A664u;
    // 7F07A664: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07A668:
    ctx->pc = 0x7F07A668u;
    // 7F07A668: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A66C:
    ctx->pc = 0x7F07A66Cu;
    // 7F07A66C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A670:
    ctx->pc = 0x7F07A670u;
    // 7F07A670: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F07A674:
    ctx->pc = 0x7F07A674u;
    // 7F07A674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A678:
    ctx->pc = 0x7F07A678u;
    ctx->downcount -= 9;
    // 7F07A678: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A67C:
    ctx->pc = 0x7F07A67Cu;
    // 7F07A67C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A680:
    ctx->pc = 0x7F07A680u;
    // 7F07A680: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F07A684:
    ctx->pc = 0x7F07A684u;
    // 7F07A684: li      r5, 2182
    ctx->gpr[5] = (u32)(s32)(2182);

label_7F07A688:
    ctx->pc = 0x7F07A688u;
    // 7F07A688: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A68C:
    ctx->pc = 0x7F07A68Cu;
    // 7F07A68C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07A690:
    ctx->pc = 0x7F07A690u;
    // 7F07A690: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A694:
    ctx->pc = 0x7F07A694u;
    // 7F07A694: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07A698:
    ctx->pc = 0x7F07A698u;
    // 7F07A698: bl      0x7F011698
    {
            ctx->lr = 0x7F07A69Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F07A69C:
    ctx->pc = 0x7F07A69Cu;
    ctx->downcount -= 11;
    // 7F07A69C: addi    r0, r31, 48
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07A6A0:
    ctx->pc = 0x7F07A6A0u;
    // 7F07A6A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07A6A4:
    ctx->pc = 0x7F07A6A4u;
    // 7F07A6A4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A6A8:
    ctx->pc = 0x7F07A6A8u;
    // 7F07A6A8: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F07A6AC:
    ctx->pc = 0x7F07A6ACu;
    // 7F07A6AC: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F07A6B0:
    ctx->pc = 0x7F07A6B0u;
    // 7F07A6B0: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F07A6B4:
    ctx->pc = 0x7F07A6B4u;
    // 7F07A6B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07A6B8:
    ctx->pc = 0x7F07A6B8u;
    // 7F07A6B8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07A6BC:
    ctx->pc = 0x7F07A6BCu;
    // 7F07A6BC: li      r9, 20
    ctx->gpr[9] = (u32)(s32)(20);

label_7F07A6C0:
    ctx->pc = 0x7F07A6C0u;
    // 7F07A6C0: li      r10, -1
    ctx->gpr[10] = (u32)(s32)(-1);

label_7F07A6C4:
    ctx->pc = 0x7F07A6C4u;
    // 7F07A6C4: bl      0x7F1F3158
    {
            ctx->lr = 0x7F07A6C8u;
            ctx->pc = 0x7F1F3158u;
            return;
    }

label_7F07A6C8:
    ctx->pc = 0x7F07A6C8u;
    ctx->downcount -= 3;
    // 7F07A6C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07A6CC:
    ctx->pc = 0x7F07A6CCu;
    // 7F07A6CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07A6D0:
    ctx->pc = 0x7F07A6D0u;
    // 7F07A6D0: bl      0x7F21E1A0
    {
            ctx->lr = 0x7F07A6D4u;
            ctx->pc = 0x7F21E1A0u;
            return;
    }

label_7F07A6D4:
    ctx->pc = 0x7F07A6D4u;
    ctx->downcount -= 3;
    // 7F07A6D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A6D8:
    ctx->pc = 0x7F07A6D8u;
    // 7F07A6D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A6DC:
    ctx->pc = 0x7F07A6DCu;
    // 7F07A6DC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07A6E0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07A6E0:
    ctx->pc = 0x7F07A6E0u;
    ctx->downcount -= 11;
    // 7F07A6E0: lwz     r3, 4668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4668);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A6E4:
    ctx->pc = 0x7F07A6E4u;
    // 7F07A6E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A6E8:
    ctx->pc = 0x7F07A6E8u;
    // 7F07A6E8: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_7F07A6EC:
    ctx->pc = 0x7F07A6ECu;
    // 7F07A6EC: stw     r3, 4668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4668);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A6F0:
    ctx->pc = 0x7F07A6F0u;
    // 7F07A6F0: stw     r0, 4676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A6F4:
    ctx->pc = 0x7F07A6F4u;
    // 7F07A6F4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07A6F8:
    ctx->pc = 0x7F07A6F8u;
    // 7F07A6F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A6FC:
    ctx->pc = 0x7F07A6FCu;
    // 7F07A6FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A700:
    ctx->pc = 0x7F07A700u;
    // 7F07A700: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07A704:
    ctx->pc = 0x7F07A704u;
    // 7F07A704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A708:
    ctx->pc = 0x7F07A708u;
    ctx->downcount -= 18;
    // 7F07A708: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A70C:
    ctx->pc = 0x7F07A70Cu;
    // 7F07A70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A710:
    ctx->pc = 0x7F07A710u;
    // 7F07A710: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A714:
    ctx->pc = 0x7F07A714u;
    // 7F07A714: stmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07A718:
    ctx->pc = 0x7F07A718u;
    // 7F07A718: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A71C:
    ctx->pc = 0x7F07A71Cu;
    // 7F07A71C: lwz     r3, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A720:
    ctx->pc = 0x7F07A720u;
    // 7F07A720: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A724:
    ctx->pc = 0x7F07A724u;
    // 7F07A724: bl      0x7F07A9F4
    {
            ctx->lr = 0x7F07A728u;
            goto label_7F07A9F4;
    }

label_7F07A728:
    ctx->pc = 0x7F07A728u;
    ctx->downcount -= 4;
    // 7F07A728: lwz     r4, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A72C:
    ctx->pc = 0x7F07A72Cu;
    // 7F07A72C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A730:
    ctx->pc = 0x7F07A730u;
    // 7F07A730: lwz     r4, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A734:
    ctx->pc = 0x7F07A734u;
    // 7F07A734: bl      0x7F07A9C0
    {
            ctx->lr = 0x7F07A738u;
            goto label_7F07A9C0;
    }

label_7F07A738:
    ctx->pc = 0x7F07A738u;
    ctx->downcount -= 8;
    // 7F07A738: lwz     r3, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A73C:
    ctx->pc = 0x7F07A73Cu;
    // 7F07A73C: lwz     r4, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A740:
    ctx->pc = 0x7F07A740u;
    // 7F07A740: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A744:
    ctx->pc = 0x7F07A744u;
    // 7F07A744: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07A748:
    ctx->pc = 0x7F07A748u;
    // 7F07A748: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A74C:
    ctx->pc = 0x7F07A74Cu;
    // 7F07A74C: lwz     r30, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F07A750:
    ctx->pc = 0x7F07A750u;
    // 7F07A750: rlwinm. r0, r0, 0, 18, 19
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

label_7F07A754:
    ctx->pc = 0x7F07A754u;
    // 7F07A754: bc    12, 2, 0x7F07A76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A76C;
        }
    }

label_7F07A758:
    ctx->pc = 0x7F07A758u;
    ctx->downcount -= 5;
    // 7F07A758: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A75C:
    ctx->pc = 0x7F07A75Cu;
    // 7F07A75C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A760:
    ctx->pc = 0x7F07A760u;
    // 7F07A760: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F07A764:
    ctx->pc = 0x7F07A764u;
    // 7F07A764: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A768:
    ctx->pc = 0x7F07A768u;
    // 7F07A768: b       0x7F07A77C
    {
            goto label_7F07A77C;
    }

label_7F07A76C:
    ctx->pc = 0x7F07A76Cu;
    ctx->downcount -= 4;
    // 7F07A76C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A770:
    ctx->pc = 0x7F07A770u;
    // 7F07A770: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A774:
    ctx->pc = 0x7F07A774u;
    // 7F07A774: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F07A778:
    ctx->pc = 0x7F07A778u;
    // 7F07A778: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A77C:
    ctx->pc = 0x7F07A77Cu;
    ctx->downcount -= 8;
    // 7F07A77C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F07A780:
    ctx->pc = 0x7F07A780u;
    // 7F07A780: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07A784:
    ctx->pc = 0x7F07A784u;
    // 7F07A784: and   r0, r30, r0
    {
        ctx->gpr[0] = ctx->gpr[30] & ctx->gpr[0];
    }

label_7F07A788:
    ctx->pc = 0x7F07A788u;
    // 7F07A788: and   r4, r31, r5
    {
        ctx->gpr[4] = ctx->gpr[31] & ctx->gpr[5];
    }

label_7F07A78C:
    ctx->pc = 0x7F07A78Cu;
    // 7F07A78C: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F07A790:
    ctx->pc = 0x7F07A790u;
    // 7F07A790: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F07A794:
    ctx->pc = 0x7F07A794u;
    // 7F07A794: or.   r0, r3, r0
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

label_7F07A798:
    ctx->pc = 0x7F07A798u;
    // 7F07A798: bc    4, 2, 0x7F07A7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A7B4;
        }
    }

label_7F07A79C:
    ctx->pc = 0x7F07A79Cu;
    ctx->downcount -= 6;
    // 7F07A79C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F07A7A0:
    ctx->pc = 0x7F07A7A0u;
    // 7F07A7A0: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F07A7A4:
    ctx->pc = 0x7F07A7A4u;
    // 7F07A7A4: and   r3, r30, r3
    {
        ctx->gpr[3] = ctx->gpr[30] & ctx->gpr[3];
    }

label_7F07A7A8:
    ctx->pc = 0x7F07A7A8u;
    // 7F07A7A8: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F07A7AC:
    ctx->pc = 0x7F07A7ACu;
    // 7F07A7AC: or.   r0, r3, r0
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

label_7F07A7B0:
    ctx->pc = 0x7F07A7B0u;
    // 7F07A7B0: bc    12, 2, 0x7F07A874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A874;
        }
    }

label_7F07A7B4:
    ctx->pc = 0x7F07A7B4u;
    ctx->downcount -= 7;
    // 7F07A7B4: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A7B8:
    ctx->pc = 0x7F07A7B8u;
    // 7F07A7B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07A7BC:
    ctx->pc = 0x7F07A7BCu;
    // 7F07A7BC: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07A7C0:
    ctx->pc = 0x7F07A7C0u;
    // 7F07A7C0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F07A7C4:
    ctx->pc = 0x7F07A7C4u;
    // 7F07A7C4: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07A7C8:
    ctx->pc = 0x7F07A7C8u;
    // 7F07A7C8: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07A7CC:
    ctx->pc = 0x7F07A7CCu;
    // 7F07A7CC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F07A7D0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F07A7D0:
    ctx->pc = 0x7F07A7D0u;
    ctx->downcount -= 3;
    // 7F07A7D0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F07A7D4:
    ctx->pc = 0x7F07A7D4u;
    // 7F07A7D4: addi    r3, r3, 20928
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20928);

label_7F07A7D8:
    ctx->pc = 0x7F07A7D8u;
    // 7F07A7D8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F07A7DCu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F07A7DC:
    ctx->pc = 0x7F07A7DCu;
    ctx->downcount -= 2;
    // 7F07A7DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F07A7E0:
    ctx->pc = 0x7F07A7E0u;
    // 7F07A7E0: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F07A7E4u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F07A7E4:
    ctx->pc = 0x7F07A7E4u;
    ctx->downcount -= 2;
    // 7F07A7E4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A7E8:
    ctx->pc = 0x7F07A7E8u;
    // 7F07A7E8: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F07A7ECu;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F07A7EC:
    ctx->pc = 0x7F07A7ECu;
    ctx->downcount -= 8;
    // 7F07A7EC: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F07A7F0:
    ctx->pc = 0x7F07A7F0u;
    // 7F07A7F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07A7F4:
    ctx->pc = 0x7F07A7F4u;
    // 7F07A7F4: and   r3, r30, r0
    {
        ctx->gpr[3] = ctx->gpr[30] & ctx->gpr[0];
    }

label_7F07A7F8:
    ctx->pc = 0x7F07A7F8u;
    // 7F07A7F8: and   r0, r31, r4
    {
        ctx->gpr[0] = ctx->gpr[31] & ctx->gpr[4];
    }

label_7F07A7FC:
    ctx->pc = 0x7F07A7FCu;
    // 7F07A7FC: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F07A800:
    ctx->pc = 0x7F07A800u;
    // 7F07A800: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F07A804:
    ctx->pc = 0x7F07A804u;
    // 7F07A804: or.   r0, r3, r0
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

label_7F07A808:
    ctx->pc = 0x7F07A808u;
    // 7F07A808: bc    12, 2, 0x7F07A83C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A83C;
        }
    }

label_7F07A80C:
    ctx->pc = 0x7F07A80Cu;
    ctx->downcount -= 11;
    // 7F07A80C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07A810:
    ctx->pc = 0x7F07A810u;
    // 7F07A810: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A814:
    ctx->pc = 0x7F07A814u;
    // 7F07A814: addi    r5, r4, 27972
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27972);

label_7F07A818:
    ctx->pc = 0x7F07A818u;
    // 7F07A818: li      r4, 273
    ctx->gpr[4] = (u32)(s32)(273);

label_7F07A81C:
    ctx->pc = 0x7F07A81Cu;
    // 7F07A81C: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F07A820:
    ctx->pc = 0x7F07A820u;
    // 7F07A820: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F07A824:
    ctx->pc = 0x7F07A824u;
    // 7F07A824: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F07A828:
    ctx->pc = 0x7F07A828u;
    // 7F07A828: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F07A82C:
    ctx->pc = 0x7F07A82Cu;
    // 7F07A82C: li      r9, 500
    ctx->gpr[9] = (u32)(s32)(500);

label_7F07A830:
    ctx->pc = 0x7F07A830u;
    // 7F07A830: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F07A834:
    ctx->pc = 0x7F07A834u;
    // 7F07A834: bl      0x7F27727C
    {
            ctx->lr = 0x7F07A838u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F07A838:
    ctx->pc = 0x7F07A838u;
    ctx->downcount -= 1;
    // 7F07A838: b       0x7F07A868
    {
            goto label_7F07A868;
    }

label_7F07A83C:
    ctx->pc = 0x7F07A83Cu;
    ctx->downcount -= 11;
    // 7F07A83C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07A840:
    ctx->pc = 0x7F07A840u;
    // 7F07A840: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A844:
    ctx->pc = 0x7F07A844u;
    // 7F07A844: addi    r5, r4, 27972
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27972);

label_7F07A848:
    ctx->pc = 0x7F07A848u;
    // 7F07A848: li      r4, 291
    ctx->gpr[4] = (u32)(s32)(291);

label_7F07A84C:
    ctx->pc = 0x7F07A84Cu;
    // 7F07A84C: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F07A850:
    ctx->pc = 0x7F07A850u;
    // 7F07A850: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F07A854:
    ctx->pc = 0x7F07A854u;
    // 7F07A854: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_7F07A858:
    ctx->pc = 0x7F07A858u;
    // 7F07A858: li      r8, 10000
    ctx->gpr[8] = (u32)(s32)(10000);

label_7F07A85C:
    ctx->pc = 0x7F07A85Cu;
    // 7F07A85C: li      r9, 750
    ctx->gpr[9] = (u32)(s32)(750);

label_7F07A860:
    ctx->pc = 0x7F07A860u;
    // 7F07A860: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F07A864:
    ctx->pc = 0x7F07A864u;
    // 7F07A864: bl      0x7F27727C
    {
            ctx->lr = 0x7F07A868u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F07A868:
    ctx->pc = 0x7F07A868u;
    ctx->downcount -= 3;
    // 7F07A868: lwz     r3, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A86C:
    ctx->pc = 0x7F07A86Cu;
    // 7F07A86C: li      r4, 2111
    ctx->gpr[4] = (u32)(s32)(2111);

label_7F07A870:
    ctx->pc = 0x7F07A870u;
    // 7F07A870: bl      0x7F011A44
    {
            ctx->lr = 0x7F07A874u;
            ctx->pc = 0x7F011A44u;
            return;
    }

label_7F07A874:
    ctx->pc = 0x7F07A874u;
    ctx->downcount -= 16;
    // 7F07A874: lmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07A878:
    ctx->pc = 0x7F07A878u;
    // 7F07A878: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A87C:
    ctx->pc = 0x7F07A87Cu;
    // 7F07A87C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A880:
    ctx->pc = 0x7F07A880u;
    // 7F07A880: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F07A884:
    ctx->pc = 0x7F07A884u;
    // 7F07A884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A888:
    ctx->pc = 0x7F07A888u;
    ctx->downcount -= 5;
    // 7F07A888: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A88C:
    ctx->pc = 0x7F07A88Cu;
    // 7F07A88C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A890:
    ctx->pc = 0x7F07A890u;
    // 7F07A890: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F07A894:
    ctx->pc = 0x7F07A894u;
    // 7F07A894: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A898:
    ctx->pc = 0x7F07A898u;
    // 7F07A898: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07A89Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07A89C:
    ctx->pc = 0x7F07A89Cu;
    ctx->downcount -= 5;
    // 7F07A89C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A8A0:
    ctx->pc = 0x7F07A8A0u;
    // 7F07A8A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A8A4:
    ctx->pc = 0x7F07A8A4u;
    // 7F07A8A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A8A8:
    ctx->pc = 0x7F07A8A8u;
    // 7F07A8A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A8AC:
    ctx->pc = 0x7F07A8ACu;
    ctx->downcount -= 23;
    // 7F07A8AC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A8B0:
    ctx->pc = 0x7F07A8B0u;
    // 7F07A8B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A8B4:
    ctx->pc = 0x7F07A8B4u;
    // 7F07A8B4: lis     r7, 128
    ctx->gpr[7] = ((u32)(s32)(128) << 16);

label_7F07A8B8:
    ctx->pc = 0x7F07A8B8u;
    // 7F07A8B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A8BC:
    ctx->pc = 0x7F07A8BCu;
    // 7F07A8BC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07A8C0:
    ctx->pc = 0x7F07A8C0u;
    // 7F07A8C0: addi    r31, r3, 32
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(32);

label_7F07A8C4:
    ctx->pc = 0x7F07A8C4u;
    // 7F07A8C4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07A8C8:
    ctx->pc = 0x7F07A8C8u;
    // 7F07A8C8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F07A8CC:
    ctx->pc = 0x7F07A8CCu;
    // 7F07A8CC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F07A8D0:
    ctx->pc = 0x7F07A8D0u;
    // 7F07A8D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A8D4:
    ctx->pc = 0x7F07A8D4u;
    // 7F07A8D4: addi    r4, r7, 27727
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(27727);

label_7F07A8D8:
    ctx->pc = 0x7F07A8D8u;
    // 7F07A8D8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F07A8DC:
    ctx->pc = 0x7F07A8DCu;
    // 7F07A8DC: bl      0x7F04272C
    {
            ctx->lr = 0x7F07A8E0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F07A8E0:
    ctx->pc = 0x7F07A8E0u;
    ctx->downcount -= 3;
    // 7F07A8E0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07A8E4:
    ctx->pc = 0x7F07A8E4u;
    // 7F07A8E4: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07A8E8:
    ctx->pc = 0x7F07A8E8u;
    // 7F07A8E8: bl      0x7F07A9C0
    {
            ctx->lr = 0x7F07A8ECu;
            goto label_7F07A9C0;
    }

label_7F07A8EC:
    ctx->pc = 0x7F07A8ECu;
    ctx->downcount -= 4;
    // 7F07A8EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A8F0:
    ctx->pc = 0x7F07A8F0u;
    // 7F07A8F0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07A8F4:
    ctx->pc = 0x7F07A8F4u;
    // 7F07A8F4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07A8F8:
    ctx->pc = 0x7F07A8F8u;
    // 7F07A8F8: bl      0x7F042B74
    {
            ctx->lr = 0x7F07A8FCu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F07A8FC:
    ctx->pc = 0x7F07A8FCu;
    ctx->downcount -= 17;
    // 7F07A8FC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07A900:
    ctx->pc = 0x7F07A900u;
    // 7F07A900: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07A904:
    ctx->pc = 0x7F07A904u;
    // 7F07A904: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A908:
    ctx->pc = 0x7F07A908u;
    // 7F07A908: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A90C:
    ctx->pc = 0x7F07A90Cu;
    // 7F07A90C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07A910:
    ctx->pc = 0x7F07A910u;
    // 7F07A910: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A914:
    ctx->pc = 0x7F07A914u;
    ctx->downcount -= 24;
    // 7F07A914: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A918:
    ctx->pc = 0x7F07A918u;
    // 7F07A918: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A91C:
    ctx->pc = 0x7F07A91Cu;
    // 7F07A91C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A920:
    ctx->pc = 0x7F07A920u;
    // 7F07A920: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07A924:
    ctx->pc = 0x7F07A924u;
    // 7F07A924: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A928:
    ctx->pc = 0x7F07A928u;
    // 7F07A928: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07A92C:
    ctx->pc = 0x7F07A92Cu;
    // 7F07A92C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F07A930:
    ctx->pc = 0x7F07A930u;
    // 7F07A930: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F07A934:
    ctx->pc = 0x7F07A934u;
    // 7F07A934: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F07A938:
    ctx->pc = 0x7F07A938u;
    // 7F07A938: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F07A93C:
    ctx->pc = 0x7F07A93Cu;
    // 7F07A93C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F07A940:
    ctx->pc = 0x7F07A940u;
    // 7F07A940: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F07A944:
    ctx->pc = 0x7F07A944u;
    // 7F07A944: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07A948:
    ctx->pc = 0x7F07A948u;
    // 7F07A948: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F07A94Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F07A94C:
    ctx->pc = 0x7F07A94Cu;
    ctx->downcount -= 2;
    // 7F07A94C: or.   r31, r3, r3
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

label_7F07A950:
    ctx->pc = 0x7F07A950u;
    // 7F07A950: bc    12, 2, 0x7F07A9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07A9A8;
        }
    }

label_7F07A954:
    ctx->pc = 0x7F07A954u;
    ctx->downcount -= 5;
    // 7F07A954: lis     r4, 32520
    ctx->gpr[4] = ((u32)(s32)(32520) << 16);

label_7F07A958:
    ctx->pc = 0x7F07A958u;
    // 7F07A958: lis     r5, 32520
    ctx->gpr[5] = ((u32)(s32)(32520) << 16);

label_7F07A95C:
    ctx->pc = 0x7F07A95Cu;
    // 7F07A95C: addi    r4, r4, -22776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22776);

label_7F07A960:
    ctx->pc = 0x7F07A960u;
    // 7F07A960: addi    r5, r5, -22392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22392);

label_7F07A964:
    ctx->pc = 0x7F07A964u;
    // 7F07A964: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F07A968u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F07A968:
    ctx->pc = 0x7F07A968u;
    ctx->downcount -= 5;
    // 7F07A968: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A96C:
    ctx->pc = 0x7F07A96Cu;
    // 7F07A96C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F07A970:
    ctx->pc = 0x7F07A970u;
    // 7F07A970: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07A974:
    ctx->pc = 0x7F07A974u;
    // 7F07A974: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F07A978:
    ctx->pc = 0x7F07A978u;
    // 7F07A978: bl      0x7F07A8AC
    {
            ctx->lr = 0x7F07A97Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07A8ACu;
                return;
            }
            goto label_7F07A8AC;
    }

label_7F07A97C:
    ctx->pc = 0x7F07A97Cu;
    ctx->downcount -= 2;
    // 7F07A97C: cmpwi   r3, 0
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

label_7F07A980:
    ctx->pc = 0x7F07A980u;
    // 7F07A980: bc    4, 0, 0x7F07A994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07A994;
        }
    }

label_7F07A984:
    ctx->pc = 0x7F07A984u;
    ctx->downcount -= 2;
    // 7F07A984: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A988:
    ctx->pc = 0x7F07A988u;
    // 7F07A988: bl      0x7F3C8210
    {
            ctx->lr = 0x7F07A98Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F07A98C:
    ctx->pc = 0x7F07A98Cu;
    ctx->downcount -= 2;
    // 7F07A98C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07A990:
    ctx->pc = 0x7F07A990u;
    // 7F07A990: b       0x7F07A9AC
    {
            goto label_7F07A9AC;
    }

label_7F07A994:
    ctx->pc = 0x7F07A994u;
    ctx->downcount -= 5;
    // 7F07A994: stw     r26, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F07A998:
    ctx->pc = 0x7F07A998u;
    // 7F07A998: stw     r27, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F07A99C:
    ctx->pc = 0x7F07A99Cu;
    // 7F07A99C: stw     r28, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F07A9A0:
    ctx->pc = 0x7F07A9A0u;
    // 7F07A9A0: stw     r29, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F07A9A4:
    ctx->pc = 0x7F07A9A4u;
    // 7F07A9A4: stw     r30, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F07A9A8:
    ctx->pc = 0x7F07A9A8u;
    ctx->downcount -= 1;
    // 7F07A9A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07A9AC:
    ctx->pc = 0x7F07A9ACu;
    ctx->downcount -= 16;
    // 7F07A9AC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07A9B0:
    ctx->pc = 0x7F07A9B0u;
    // 7F07A9B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A9B4:
    ctx->pc = 0x7F07A9B4u;
    // 7F07A9B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A9B8:
    ctx->pc = 0x7F07A9B8u;
    // 7F07A9B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07A9BC:
    ctx->pc = 0x7F07A9BCu;
    // 7F07A9BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A9C0:
    ctx->pc = 0x7F07A9C0u;
    ctx->downcount -= 7;
    // 7F07A9C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07A9C4:
    ctx->pc = 0x7F07A9C4u;
    // 7F07A9C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07A9C8:
    ctx->pc = 0x7F07A9C8u;
    // 7F07A9C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07A9CC:
    ctx->pc = 0x7F07A9CCu;
    // 7F07A9CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07A9D0:
    ctx->pc = 0x7F07A9D0u;
    // 7F07A9D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07A9D4:
    ctx->pc = 0x7F07A9D4u;
    // 7F07A9D4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07A9D8:
    ctx->pc = 0x7F07A9D8u;
    // 7F07A9D8: bl      0x7F01B234
    {
            ctx->lr = 0x7F07A9DCu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F07A9DC:
    ctx->pc = 0x7F07A9DCu;
    ctx->downcount -= 7;
    // 7F07A9DC: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A9E0:
    ctx->pc = 0x7F07A9E0u;
    // 7F07A9E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07A9E4:
    ctx->pc = 0x7F07A9E4u;
    // 7F07A9E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07A9E8:
    ctx->pc = 0x7F07A9E8u;
    // 7F07A9E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07A9EC:
    ctx->pc = 0x7F07A9ECu;
    // 7F07A9EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07A9F0:
    ctx->pc = 0x7F07A9F0u;
    // 7F07A9F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07A9F4:
    ctx->pc = 0x7F07A9F4u;
    ctx->downcount -= 3;
    // 7F07A9F4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07A9F8:
    ctx->pc = 0x7F07A9F8u;
    // 7F07A9F8: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07A9FC:
    ctx->pc = 0x7F07A9FCu;
    // 7F07A9FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AA00:
    ctx->pc = 0x7F07AA00u;
    ctx->downcount -= 5;
    // 7F07AA00: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AA04:
    ctx->pc = 0x7F07AA04u;
    // 7F07AA04: addi    r3, r3, 27960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27960);

label_7F07AA08:
    ctx->pc = 0x7F07AA08u;
    // 7F07AA08: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AA0C:
    ctx->pc = 0x7F07AA0Cu;
    // 7F07AA0C: cmplwi  r3, 0x0000
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

label_7F07AA10:
    ctx->pc = 0x7F07AA10u;
    // 7F07AA10: bc    12, 2, 0x7F07AA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AA54;
        }
    }

label_7F07AA14:
    ctx->pc = 0x7F07AA14u;
    ctx->downcount -= 3;
    // 7F07AA14: lha     r0, 4282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4282);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AA18:
    ctx->pc = 0x7F07AA18u;
    // 7F07AA18: cmpwi   r0, 2
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

label_7F07AA1C:
    ctx->pc = 0x7F07AA1Cu;
    // 7F07AA1C: bc    12, 2, 0x7F07AA4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AA4C;
        }
    }

label_7F07AA20:
    ctx->pc = 0x7F07AA20u;
    ctx->downcount -= 1;
    // 7F07AA20: bc    4, 0, 0x7F07AA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AA30;
        }
    }

label_7F07AA24:
    ctx->pc = 0x7F07AA24u;
    ctx->downcount -= 2;
    // 7F07AA24: cmpwi   r0, 1
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

label_7F07AA28:
    ctx->pc = 0x7F07AA28u;
    // 7F07AA28: bc    4, 0, 0x7F07AA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AA3C;
        }
    }

label_7F07AA2C:
    ctx->pc = 0x7F07AA2Cu;
    ctx->downcount -= 1;
    // 7F07AA2C: b       0x7F07AA54
    {
            goto label_7F07AA54;
    }

label_7F07AA30:
    ctx->pc = 0x7F07AA30u;
    ctx->downcount -= 2;
    // 7F07AA30: cmpwi   r0, 4
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

label_7F07AA34:
    ctx->pc = 0x7F07AA34u;
    // 7F07AA34: bc    4, 0, 0x7F07AA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AA54;
        }
    }

label_7F07AA38:
    ctx->pc = 0x7F07AA38u;
    ctx->downcount -= 1;
    // 7F07AA38: b       0x7F07AA44
    {
            goto label_7F07AA44;
    }

label_7F07AA3C:
    ctx->pc = 0x7F07AA3Cu;
    ctx->downcount -= 2;
    // 7F07AA3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07AA40:
    ctx->pc = 0x7F07AA40u;
    // 7F07AA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AA44:
    ctx->pc = 0x7F07AA44u;
    ctx->downcount -= 2;
    // 7F07AA44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07AA48:
    ctx->pc = 0x7F07AA48u;
    // 7F07AA48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AA4C:
    ctx->pc = 0x7F07AA4Cu;
    ctx->downcount -= 2;
    // 7F07AA4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F07AA50:
    ctx->pc = 0x7F07AA50u;
    // 7F07AA50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AA54:
    ctx->pc = 0x7F07AA54u;
    ctx->downcount -= 2;
    // 7F07AA54: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07AA58:
    ctx->pc = 0x7F07AA58u;
    // 7F07AA58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AA5C:
    ctx->pc = 0x7F07AA5Cu;
    ctx->downcount -= 21;
    // 7F07AA5C: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F07AA60:
    ctx->pc = 0x7F07AA60u;
    // 7F07AA60: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F07AA64:
    ctx->pc = 0x7F07AA64u;
    // 7F07AA64: addi    r11, r7, -5736
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(-5736);

label_7F07AA68:
    ctx->pc = 0x7F07AA68u;
    // 7F07AA68: lwz     r10, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F07AA6C:
    ctx->pc = 0x7F07AA6Cu;
    // 7F07AA6C: lis     r7, -32768
    ctx->gpr[7] = ((u32)(s32)(-32768) << 16);

label_7F07AA70:
    ctx->pc = 0x7F07AA70u;
    // 7F07AA70: addi    r0, r7, -1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-1);

label_7F07AA74:
    ctx->pc = 0x7F07AA74u;
    // 7F07AA74: lwz     r9, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F07AA78:
    ctx->pc = 0x7F07AA78u;
    // 7F07AA78: or   r10, r10, r4
    {
        ctx->gpr[10] = ctx->gpr[10] | ctx->gpr[4];
    }

label_7F07AA7C:
    ctx->pc = 0x7F07AA7Cu;
    // 7F07AA7C: lwzu     r4, -5744(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-5744);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

label_7F07AA80:
    ctx->pc = 0x7F07AA80u;
    // 7F07AA80: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F07AA84:
    ctx->pc = 0x7F07AA84u;
    // 7F07AA84: or   r9, r9, r3
    {
        ctx->gpr[9] = ctx->gpr[9] | ctx->gpr[3];
    }

label_7F07AA88:
    ctx->pc = 0x7F07AA88u;
    // 7F07AA88: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_7F07AA8C:
    ctx->pc = 0x7F07AA8Cu;
    // 7F07AA8C: lwz     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07AA90:
    ctx->pc = 0x7F07AA90u;
    // 7F07AA90: and   r3, r6, r7
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[7];
    }

label_7F07AA94:
    ctx->pc = 0x7F07AA94u;
    // 7F07AA94: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F07AA98:
    ctx->pc = 0x7F07AA98u;
    // 7F07AA98: or   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F07AA9C:
    ctx->pc = 0x7F07AA9Cu;
    // 7F07AA9C: stw     r10, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F07AAA0:
    ctx->pc = 0x7F07AAA0u;
    // 7F07AAA0: stw     r9, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F07AAA4:
    ctx->pc = 0x7F07AAA4u;
    // 7F07AAA4: stw     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07AAA8:
    ctx->pc = 0x7F07AAA8u;
    // 7F07AAA8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AAAC:
    ctx->pc = 0x7F07AAACu;
    // 7F07AAAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AAB0:
    ctx->pc = 0x7F07AAB0u;
    ctx->downcount -= 17;
    // 7F07AAB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07AAB4:
    ctx->pc = 0x7F07AAB4u;
    // 7F07AAB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07AAB8:
    ctx->pc = 0x7F07AAB8u;
    // 7F07AAB8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AABC:
    ctx->pc = 0x7F07AABCu;
    // 7F07AABC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07AAC0:
    ctx->pc = 0x7F07AAC0u;
    // 7F07AAC0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07AAC4:
    ctx->pc = 0x7F07AAC4u;
    // 7F07AAC4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F07AAC8:
    ctx->pc = 0x7F07AAC8u;
    // 7F07AAC8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F07AACC:
    ctx->downcount -= 5;
    // 7F07AACC: addi    r4, r31, 676
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(676);

label_7F07AAD0:
    // 7F07AAD0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07AAD4:
    // 7F07AAD4: addi    r3, r29, 448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(448);

label_7F07AAD8:
    // 7F07AAD8: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F07AADC:
    // 7F07AADC: bl      0x7F01E454
    {
            ctx->lr = 0x7F07AAE0u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F07AAE0:
    ctx->downcount -= 4;
    // 7F07AAE0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F07AAE4:
    // 7F07AAE4: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F07AAE8:
    // 7F07AAE8: cmpwi   r30, 21
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07AAEC:
    // 7F07AAEC: bc    12, 0, 0x7F07AACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07AACCu;
                return;
            }
            goto label_7F07AACC;
        }
    }

label_7F07AAF0:
    ctx->pc = 0x7F07AAF0u;
    ctx->downcount -= 16;
    // 7F07AAF0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07AAF4:
    ctx->pc = 0x7F07AAF4u;
    // 7F07AAF4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AAF8:
    ctx->pc = 0x7F07AAF8u;
    // 7F07AAF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07AAFC:
    ctx->pc = 0x7F07AAFCu;
    // 7F07AAFC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07AB00:
    ctx->pc = 0x7F07AB00u;
    // 7F07AB00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AB04:
    ctx->pc = 0x7F07AB04u;
    ctx->downcount -= 7;
    // 7F07AB04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07AB08:
    ctx->pc = 0x7F07AB08u;
    // 7F07AB08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07AB0C:
    ctx->pc = 0x7F07AB0Cu;
    // 7F07AB0C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F07AB10:
    ctx->pc = 0x7F07AB10u;
    // 7F07AB10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB14:
    ctx->pc = 0x7F07AB14u;
    // 7F07AB14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07AB18:
    ctx->pc = 0x7F07AB18u;
    // 7F07AB18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07AB1C:
    ctx->pc = 0x7F07AB1Cu;
    // 7F07AB1C: bl      0x7F07D0F4
    {
            ctx->lr = 0x7F07AB20u;
            ctx->pc = 0x7F07D0F4u;
            return;
    }

label_7F07AB20:
    ctx->pc = 0x7F07AB20u;
    ctx->downcount -= 2;
    // 7F07AB20: cmpwi   r3, 0
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

label_7F07AB24:
    ctx->pc = 0x7F07AB24u;
    // 7F07AB24: bc    12, 2, 0x7F07AB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AB40;
        }
    }

label_7F07AB28:
    ctx->pc = 0x7F07AB28u;
    ctx->downcount -= 6;
    // 7F07AB28: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F07AB2C:
    ctx->pc = 0x7F07AB2Cu;
    // 7F07AB2C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F07AB30:
    ctx->pc = 0x7F07AB30u;
    // 7F07AB30: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AB34:
    ctx->pc = 0x7F07AB34u;
    // 7F07AB34: stw     r0, -6656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB38:
    ctx->pc = 0x7F07AB38u;
    // 7F07AB38: stw     r0, 28020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB3C:
    ctx->pc = 0x7F07AB3Cu;
    // 7F07AB3C: b       0x7F07AB54
    {
            goto label_7F07AB54;
    }

label_7F07AB40:
    ctx->pc = 0x7F07AB40u;
    ctx->downcount -= 5;
    // 7F07AB40: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07AB44:
    ctx->pc = 0x7F07AB44u;
    // 7F07AB44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07AB48:
    ctx->pc = 0x7F07AB48u;
    // 7F07AB48: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F07AB4C:
    ctx->pc = 0x7F07AB4Cu;
    // 7F07AB4C: stw     r0, 28020(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB50:
    ctx->pc = 0x7F07AB50u;
    // 7F07AB50: stw     r0, -6656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB54:
    ctx->pc = 0x7F07AB54u;
    ctx->downcount -= 3;
    // 7F07AB54: lhz     r0, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07AB58:
    ctx->pc = 0x7F07AB58u;
    // 7F07AB58: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07AB5C:
    ctx->pc = 0x7F07AB5Cu;
    // 7F07AB5C: bc    4, 2, 0x7F07AB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AB70;
        }
    }

label_7F07AB60:
    ctx->pc = 0x7F07AB60u;
    ctx->downcount -= 4;
    // 7F07AB60: addi    r3, r31, 4700
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4700);

label_7F07AB64:
    ctx->pc = 0x7F07AB64u;
    // 7F07AB64: addi    r4, r31, 4704
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4704);

label_7F07AB68:
    ctx->pc = 0x7F07AB68u;
    // 7F07AB68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07AB6C:
    ctx->pc = 0x7F07AB6Cu;
    // 7F07AB6C: bl      0x7F07BB50
    {
            ctx->lr = 0x7F07AB70u;
            goto label_7F07BB50;
    }

label_7F07AB70:
    ctx->pc = 0x7F07AB70u;
    ctx->downcount -= 5;
    // 7F07AB70: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07AB74:
    ctx->pc = 0x7F07AB74u;
    // 7F07AB74: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07AB78:
    ctx->pc = 0x7F07AB78u;
    // 7F07AB78: addi    r0, r4, 14080
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F07AB7C:
    ctx->pc = 0x7F07AB7Cu;
    // 7F07AB7C: stw     r0, 4308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AB80:
    ctx->pc = 0x7F07AB80u;
    // 7F07AB80: bl      0x7F04291C
    {
            ctx->lr = 0x7F07AB84u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F07AB84:
    ctx->pc = 0x7F07AB84u;
    ctx->downcount -= 2;
    // 7F07AB84: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07AB88:
    ctx->pc = 0x7F07AB88u;
    // 7F07AB88: bl      0x7F023170
    {
            ctx->lr = 0x7F07AB8Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F07AB8C:
    ctx->pc = 0x7F07AB8Cu;
    ctx->downcount -= 2;
    // 7F07AB8C: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07AB90:
    ctx->pc = 0x7F07AB90u;
    // 7F07AB90: bl      0x7F0429C4
    {
            ctx->lr = 0x7F07AB94u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F07AB94:
    ctx->pc = 0x7F07AB94u;
    ctx->downcount -= 7;
    // 7F07AB94: lwz     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AB98:
    ctx->pc = 0x7F07AB98u;
    // 7F07AB98: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07AB9C:
    ctx->pc = 0x7F07AB9Cu;
    // 7F07AB9C: addi    r4, r31, 844
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(844);

label_7F07ABA0:
    ctx->pc = 0x7F07ABA0u;
    // 7F07ABA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07ABA4:
    ctx->pc = 0x7F07ABA4u;
    // 7F07ABA4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F07ABA8:
    ctx->pc = 0x7F07ABA8u;
    // 7F07ABA8: stw     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ABAC:
    ctx->pc = 0x7F07ABACu;
    // 7F07ABAC: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F07ABB0u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F07ABB0:
    ctx->pc = 0x7F07ABB0u;
    ctx->downcount -= 4;
    // 7F07ABB0: lfs     f0, 460(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07ABB4:
    ctx->pc = 0x7F07ABB4u;
    // 7F07ABB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07ABB8:
    ctx->pc = 0x7F07ABB8u;
    // 7F07ABB8: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07ABBC:
    ctx->pc = 0x7F07ABBCu;
    // 7F07ABBC: bl      0x7F07CDB4
    {
            ctx->lr = 0x7F07ABC0u;
            ctx->pc = 0x7F07CDB4u;
            return;
    }

label_7F07ABC0:
    ctx->pc = 0x7F07ABC0u;
    ctx->downcount -= 8;
    // 7F07ABC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07ABC4:
    ctx->pc = 0x7F07ABC4u;
    // 7F07ABC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07ABC8:
    ctx->pc = 0x7F07ABC8u;
    // 7F07ABC8: stw     r0, 500(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ABCC:
    ctx->pc = 0x7F07ABCCu;
    // 7F07ABCC: lfs     f0, -7872(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07ABD0:
    ctx->pc = 0x7F07ABD0u;
    // 7F07ABD0: stw     r0, 496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ABD4:
    ctx->pc = 0x7F07ABD4u;
    // 7F07ABD4: lfs     f1, 4008(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07ABD8:
    ctx->pc = 0x7F07ABD8u;
    // 7F07ABD8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07ABD8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F07ABDC:
    ctx->pc = 0x7F07ABDCu;
    // 7F07ABDC: bc    4, 0, 0x7F07ABF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07ABF0;
        }
    }

label_7F07ABE0:
    ctx->pc = 0x7F07ABE0u;
    ctx->downcount -= 3;
    // 7F07ABE0: lbz     r0, 202(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F07ABE4:
    ctx->pc = 0x7F07ABE4u;
    // 7F07ABE4: extsb. r0, r0
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

label_7F07ABE8:
    ctx->pc = 0x7F07ABE8u;
    // 7F07ABE8: bc    12, 2, 0x7F07ABF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07ABF0;
        }
    }

label_7F07ABEC:
    ctx->pc = 0x7F07ABECu;
    ctx->downcount -= 1;
    // 7F07ABEC: stfs     f0, 4008(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07ABF0:
    ctx->pc = 0x7F07ABF0u;
    ctx->downcount -= 21;
    // 7F07ABF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07ABF4:
    ctx->pc = 0x7F07ABF4u;
    // 7F07ABF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07ABF8:
    ctx->pc = 0x7F07ABF8u;
    // 7F07ABF8: lfs     f1, 4008(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07ABF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07ABFC:
    ctx->pc = 0x7F07ABFCu;
    // 7F07ABFC: addi    r5, r3, 27988
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(27988);

label_7F07AC00:
    ctx->pc = 0x7F07AC00u;
    // 7F07AC00: lfs     f0, -7768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07AC00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7768);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07AC04:
    ctx->pc = 0x7F07AC04u;
    // 7F07AC04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07AC08:
    ctx->pc = 0x7F07AC08u;
    // 7F07AC08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC0C:
    ctx->pc = 0x7F07AC0Cu;
    // 7F07AC0C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F07AC0Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F07AC10:
    ctx->pc = 0x7F07AC10u;
    // 7F07AC10: stfs     f0, 4008(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F07AC10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07AC14:
    ctx->pc = 0x7F07AC14u;
    // 7F07AC14: sth     r6, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F07AC18:
    ctx->pc = 0x7F07AC18u;
    // 7F07AC18: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07AC1C:
    ctx->pc = 0x7F07AC1Cu;
    // 7F07AC1C: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AC20:
    ctx->pc = 0x7F07AC20u;
    // 7F07AC20: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F07AC24:
    ctx->pc = 0x7F07AC24u;
    // 7F07AC24: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AC28:
    ctx->pc = 0x7F07AC28u;
    // 7F07AC28: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07AC2C:
    ctx->pc = 0x7F07AC2Cu;
    // 7F07AC2C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AC30:
    ctx->pc = 0x7F07AC30u;
    // 7F07AC30: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F07AC34:
    ctx->pc = 0x7F07AC34u;
    // 7F07AC34: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AC38:
    ctx->pc = 0x7F07AC38u;
    // 7F07AC38: stw     r6, 3956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07AC3C:
    ctx->pc = 0x7F07AC3Cu;
    // 7F07AC3C: stw     r6, 3952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3952);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07AC40:
    ctx->pc = 0x7F07AC40u;
    // 7F07AC40: bl      0x7F08459C
    {
            ctx->lr = 0x7F07AC44u;
            ctx->pc = 0x7F08459Cu;
            return;
    }

label_7F07AC44:
    ctx->pc = 0x7F07AC44u;
    ctx->downcount -= 2;
    // 7F07AC44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC48:
    ctx->pc = 0x7F07AC48u;
    // 7F07AC48: bl      0x7F07E230
    {
            ctx->lr = 0x7F07AC4Cu;
            ctx->pc = 0x7F07E230u;
            return;
    }

label_7F07AC4C:
    ctx->pc = 0x7F07AC4Cu;
    ctx->downcount -= 2;
    // 7F07AC4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC50:
    ctx->pc = 0x7F07AC50u;
    // 7F07AC50: bl      0x7F07CA40
    {
            ctx->lr = 0x7F07AC54u;
            ctx->pc = 0x7F07CA40u;
            return;
    }

label_7F07AC54:
    ctx->pc = 0x7F07AC54u;
    ctx->downcount -= 2;
    // 7F07AC54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC58:
    ctx->pc = 0x7F07AC58u;
    // 7F07AC58: bl      0x7F07BE18
    {
            ctx->lr = 0x7F07AC5Cu;
            goto label_7F07BE18;
    }

label_7F07AC5C:
    ctx->pc = 0x7F07AC5Cu;
    ctx->downcount -= 4;
    // 7F07AC5C: lwz     r3, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AC60:
    ctx->pc = 0x7F07AC60u;
    // 7F07AC60: lha     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AC64:
    ctx->pc = 0x7F07AC64u;
    // 7F07AC64: cmpwi   r0, 0
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

label_7F07AC68:
    ctx->pc = 0x7F07AC68u;
    // 7F07AC68: bc    12, 1, 0x7F07AC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AC78;
        }
    }

label_7F07AC6C:
    ctx->pc = 0x7F07AC6Cu;
    ctx->downcount -= 3;
    // 7F07AC6C: addi    r3, r31, 4200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F07AC70:
    ctx->pc = 0x7F07AC70u;
    // 7F07AC70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F07AC74:
    ctx->pc = 0x7F07AC74u;
    // 7F07AC74: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F07AC78u;
            ctx->pc = 0x7F03C1CCu;
            return;
    }

label_7F07AC78:
    ctx->pc = 0x7F07AC78u;
    ctx->downcount -= 2;
    // 7F07AC78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC7C:
    ctx->pc = 0x7F07AC7Cu;
    // 7F07AC7C: bl      0x7F07BF68
    {
            ctx->lr = 0x7F07AC80u;
            goto label_7F07BF68;
    }

label_7F07AC80:
    ctx->pc = 0x7F07AC80u;
    ctx->downcount -= 2;
    // 7F07AC80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07AC84:
    ctx->pc = 0x7F07AC84u;
    // 7F07AC84: bl      0x7F07AAB0
    {
            ctx->lr = 0x7F07AC88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07AAB0u;
                return;
            }
            goto label_7F07AAB0;
    }

label_7F07AC88:
    ctx->pc = 0x7F07AC88u;
    ctx->downcount -= 6;
    // 7F07AC88: lha     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AC8C:
    ctx->pc = 0x7F07AC8Cu;
    // 7F07AC8C: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F07AC90:
    ctx->pc = 0x7F07AC90u;
    // 7F07AC90: sth     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07AC94:
    ctx->pc = 0x7F07AC94u;
    // 7F07AC94: lha     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AC98:
    ctx->pc = 0x7F07AC98u;
    // 7F07AC98: cmpwi   r3, 2048
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

label_7F07AC9C:
    ctx->pc = 0x7F07AC9Cu;
    // 7F07AC9C: bc    4, 1, 0x7F07ACA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07ACA8;
        }
    }

label_7F07ACA0:
    ctx->pc = 0x7F07ACA0u;
    ctx->downcount -= 2;
    // 7F07ACA0: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F07ACA4:
    ctx->pc = 0x7F07ACA4u;
    // 7F07ACA4: sth     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07ACA8:
    ctx->pc = 0x7F07ACA8u;
    ctx->downcount -= 3;
    // 7F07ACA8: lwz     r3, 4696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07ACAC:
    ctx->pc = 0x7F07ACACu;
    // 7F07ACAC: cmplwi  r3, 0x0000
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

label_7F07ACB0:
    ctx->pc = 0x7F07ACB0u;
    // 7F07ACB0: bc    12, 2, 0x7F07AD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD2C;
        }
    }

label_7F07ACB4:
    ctx->pc = 0x7F07ACB4u;
    ctx->downcount -= 2;
    // 7F07ACB4: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07ACB8:
    ctx->pc = 0x7F07ACB8u;
    // 7F07ACB8: bl      0x7F026F84
    {
            ctx->lr = 0x7F07ACBCu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F07ACBC:
    ctx->pc = 0x7F07ACBCu;
    ctx->downcount -= 4;
    // 7F07ACBC: lwz     r5, 4696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4696);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07ACC0:
    ctx->pc = 0x7F07ACC0u;
    // 7F07ACC0: lwz     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07ACC4:
    ctx->pc = 0x7F07ACC4u;
    // 7F07ACC4: cmplwi  r0, 0x0000
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

label_7F07ACC8:
    ctx->pc = 0x7F07ACC8u;
    // 7F07ACC8: bc    4, 2, 0x7F07ACD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07ACD4;
        }
    }

label_7F07ACCC:
    ctx->pc = 0x7F07ACCCu;
    ctx->downcount -= 2;
    // 7F07ACCC: cmplw   r3, r5
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07ACD0:
    ctx->pc = 0x7F07ACD0u;
    // 7F07ACD0: bc    4, 2, 0x7F07AD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD04;
        }
    }

label_7F07ACD4:
    ctx->pc = 0x7F07ACD4u;
    ctx->downcount -= 4;
    // 7F07ACD4: lwz     r4, 152(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07ACD8:
    ctx->pc = 0x7F07ACD8u;
    // 7F07ACD8: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07ACDC:
    ctx->pc = 0x7F07ACDCu;
    // 7F07ACDC: cmpw    r4, r0
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

label_7F07ACE0:
    ctx->pc = 0x7F07ACE0u;
    // 7F07ACE0: bc    4, 1, 0x7F07ACF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07ACF8;
        }
    }

label_7F07ACE4:
    ctx->pc = 0x7F07ACE4u;
    ctx->downcount -= 1;
    // 7F07ACE4: bc    4, 2, 0x7F07AD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD04;
        }
    }

label_7F07ACE8:
    ctx->pc = 0x7F07ACE8u;
    ctx->downcount -= 4;
    // 7F07ACE8: lwz     r4, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07ACEC:
    ctx->pc = 0x7F07ACECu;
    // 7F07ACEC: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07ACF0:
    ctx->pc = 0x7F07ACF0u;
    // 7F07ACF0: cmplw   r4, r0
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

label_7F07ACF4:
    ctx->pc = 0x7F07ACF4u;
    // 7F07ACF4: bc    12, 1, 0x7F07AD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD04;
        }
    }

label_7F07ACF8:
    ctx->pc = 0x7F07ACF8u;
    ctx->downcount -= 2;
    // 7F07ACF8: lwz     r3, 148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07ACFC:
    ctx->pc = 0x7F07ACFCu;
    // 7F07ACFC: bl      0x7F026B18
    {
            ctx->lr = 0x7F07AD00u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F07AD00:
    ctx->pc = 0x7F07AD00u;
    ctx->downcount -= 1;
    // 7F07AD00: b       0x7F07AD2C
    {
            goto label_7F07AD2C;
    }

label_7F07AD04:
    ctx->pc = 0x7F07AD04u;
    ctx->downcount -= 11;
    // 7F07AD04: lwz     r3, 148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AD08:
    ctx->pc = 0x7F07AD08u;
    // 7F07AD08: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07AD0C:
    ctx->pc = 0x7F07AD0Cu;
    // 7F07AD0C: addi    r4, r4, 21648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21648);

label_7F07AD10:
    ctx->pc = 0x7F07AD10u;
    // 7F07AD10: mulli   r0, r3, 2272
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)2272);

label_7F07AD14:
    ctx->pc = 0x7F07AD14u;
    // 7F07AD14: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07AD18:
    ctx->pc = 0x7F07AD18u;
    // 7F07AD18: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F07AD1C:
    ctx->pc = 0x7F07AD1Cu;
    // 7F07AD1C: lwz     r0, 2296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AD20:
    ctx->pc = 0x7F07AD20u;
    // 7F07AD20: rlwinm. r0, r0, 0, 19, 19
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

label_7F07AD24:
    ctx->pc = 0x7F07AD24u;
    // 7F07AD24: bc    12, 2, 0x7F07AD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD2C;
        }
    }

label_7F07AD28:
    ctx->pc = 0x7F07AD28u;
    ctx->downcount -= 1;
    // 7F07AD28: bl      0x7F026B18
    {
            ctx->lr = 0x7F07AD2Cu;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F07AD2C:
    ctx->pc = 0x7F07AD2Cu;
    ctx->downcount -= 4;
    // 7F07AD2C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F07AD30:
    ctx->pc = 0x7F07AD30u;
    // 7F07AD30: lwz     r0, 21144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AD34:
    ctx->pc = 0x7F07AD34u;
    // 7F07AD34: cmpwi   r0, 0
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

label_7F07AD38:
    ctx->pc = 0x7F07AD38u;
    // 7F07AD38: bc    12, 2, 0x7F07AD5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD5C;
        }
    }

label_7F07AD3C:
    ctx->pc = 0x7F07AD3Cu;
    ctx->downcount -= 3;
    // 7F07AD3C: lwz     r3, 4552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AD40:
    ctx->pc = 0x7F07AD40u;
    // 7F07AD40: cmplwi  r3, 0x0000
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

label_7F07AD44:
    ctx->pc = 0x7F07AD44u;
    // 7F07AD44: bc    12, 2, 0x7F07AD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD4C;
        }
    }

label_7F07AD48:
    ctx->pc = 0x7F07AD48u;
    ctx->downcount -= 1;
    // 7F07AD48: bl      0x7F306938
    {
            ctx->lr = 0x7F07AD4Cu;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F07AD4C:
    ctx->pc = 0x7F07AD4Cu;
    ctx->downcount -= 3;
    // 7F07AD4C: lwz     r3, 4556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AD50:
    ctx->pc = 0x7F07AD50u;
    // 7F07AD50: cmplwi  r3, 0x0000
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

label_7F07AD54:
    ctx->pc = 0x7F07AD54u;
    // 7F07AD54: bc    12, 2, 0x7F07AD5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AD5C;
        }
    }

label_7F07AD58:
    ctx->pc = 0x7F07AD58u;
    ctx->downcount -= 1;
    // 7F07AD58: bl      0x7F306938
    {
            ctx->lr = 0x7F07AD5Cu;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F07AD5C:
    ctx->pc = 0x7F07AD5Cu;
    ctx->downcount -= 10;
    // 7F07AD5C: lwz     r4, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07AD60:
    ctx->pc = 0x7F07AD60u;
    // 7F07AD60: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AD64:
    ctx->pc = 0x7F07AD64u;
    // 7F07AD64: addi    r7, r3, 28052
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(28052);

label_7F07AD68:
    ctx->pc = 0x7F07AD68u;
    // 7F07AD68: addi    r3, r31, 976
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(976);

label_7F07AD6C:
    ctx->pc = 0x7F07AD6Cu;
    // 7F07AD6C: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AD70:
    ctx->pc = 0x7F07AD70u;
    // 7F07AD70: addi    r4, r31, 3472
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3472);

label_7F07AD74:
    ctx->pc = 0x7F07AD74u;
    // 7F07AD74: addi    r5, r31, 448
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07AD78:
    ctx->pc = 0x7F07AD78u;
    // 7F07AD78: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07AD7C:
    ctx->pc = 0x7F07AD7Cu;
    // 7F07AD7C: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AD80:
    ctx->pc = 0x7F07AD80u;
    // 7F07AD80: bl      0x7F0B1F28
    {
            ctx->lr = 0x7F07AD84u;
            ctx->pc = 0x7F0B1F28u;
            return;
    }

label_7F07AD84:
    ctx->pc = 0x7F07AD84u;
    ctx->downcount -= 11;
    // 7F07AD84: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07AD88:
    ctx->pc = 0x7F07AD88u;
    // 7F07AD88: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AD8C:
    ctx->pc = 0x7F07AD8Cu;
    // 7F07AD8C: addi    r0, r31, 48
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07AD90:
    ctx->pc = 0x7F07AD90u;
    // 7F07AD90: stw     r31, 27960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27960);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07AD94:
    ctx->pc = 0x7F07AD94u;
    // 7F07AD94: stw     r0, 27984(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AD98:
    ctx->pc = 0x7F07AD98u;
    // 7F07AD98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AD9C:
    ctx->pc = 0x7F07AD9Cu;
    // 7F07AD9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07ADA0:
    ctx->pc = 0x7F07ADA0u;
    // 7F07ADA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07ADA4:
    ctx->pc = 0x7F07ADA4u;
    // 7F07ADA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07ADA8:
    ctx->pc = 0x7F07ADA8u;
    // 7F07ADA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07ADAC:
    ctx->pc = 0x7F07ADACu;
    ctx->downcount -= 13;
    // 7F07ADAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07ADB0:
    ctx->pc = 0x7F07ADB0u;
    // 7F07ADB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07ADB4:
    ctx->pc = 0x7F07ADB4u;
    // 7F07ADB4: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F07ADB8:
    ctx->pc = 0x7F07ADB8u;
    // 7F07ADB8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07ADBC:
    ctx->pc = 0x7F07ADBCu;
    // 7F07ADBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ADC0:
    ctx->pc = 0x7F07ADC0u;
    // 7F07ADC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07ADC4:
    ctx->pc = 0x7F07ADC4u;
    // 7F07ADC4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07ADC8:
    ctx->pc = 0x7F07ADC8u;
    // 7F07ADC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07ADCC:
    ctx->pc = 0x7F07ADCCu;
    // 7F07ADCC: stw     r0, 27960(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(27960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ADD0:
    ctx->pc = 0x7F07ADD0u;
    // 7F07ADD0: stw     r0, 28020(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ADD4:
    ctx->pc = 0x7F07ADD4u;
    // 7F07ADD4: lhz     r0, 3968(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07ADD8:
    ctx->pc = 0x7F07ADD8u;
    // 7F07ADD8: cmplwi  r0, 0x0001
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

label_7F07ADDC:
    ctx->pc = 0x7F07ADDCu;
    // 7F07ADDC: bc    12, 1, 0x7F07ADF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07ADF4;
        }
    }

label_7F07ADE0:
    ctx->pc = 0x7F07ADE0u;
    ctx->downcount -= 5;
    // 7F07ADE0: lwz     r4, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07ADE4:
    ctx->pc = 0x7F07ADE4u;
    // 7F07ADE4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07ADE8:
    ctx->pc = 0x7F07ADE8u;
    // 7F07ADE8: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07ADEC:
    ctx->pc = 0x7F07ADECu;
    // 7F07ADEC: stw     r0, 28052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07ADF0:
    ctx->pc = 0x7F07ADF0u;
    // 7F07ADF0: b       0x7F07AE00
    {
            goto label_7F07AE00;
    }

label_7F07ADF4:
    ctx->pc = 0x7F07ADF4u;
    ctx->downcount -= 2;
    // 7F07ADF4: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07ADF8:
    ctx->pc = 0x7F07ADF8u;
    // 7F07ADF8: bc    4, 2, 0x7F07AE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07AE00;
        }
    }

label_7F07ADFC:
    ctx->pc = 0x7F07ADFCu;
    ctx->downcount -= 1;
    // 7F07ADFC: bl      0x7F07DD44
    {
            ctx->lr = 0x7F07AE00u;
            ctx->pc = 0x7F07DD44u;
            return;
    }

label_7F07AE00:
    ctx->pc = 0x7F07AE00u;
    ctx->downcount -= 3;
    // 7F07AE00: lhz     r0, 3972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3972);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07AE04:
    ctx->pc = 0x7F07AE04u;
    // 7F07AE04: cmplwi  r0, 0x0008
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

label_7F07AE08:
    ctx->pc = 0x7F07AE08u;
    // 7F07AE08: bc    12, 2, 0x7F07AE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AE18;
        }
    }

label_7F07AE0C:
    ctx->pc = 0x7F07AE0Cu;
    ctx->downcount -= 3;
    // 7F07AE0C: lwz     r0, 4628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AE10:
    ctx->pc = 0x7F07AE10u;
    // 7F07AE10: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AE14:
    ctx->pc = 0x7F07AE14u;
    // 7F07AE14: stw     r0, 28048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AE18:
    ctx->pc = 0x7F07AE18u;
    ctx->downcount -= 4;
    // 7F07AE18: lwz     r3, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AE1C:
    ctx->pc = 0x7F07AE1Cu;
    // 7F07AE1C: lha     r5, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AE20:
    ctx->pc = 0x7F07AE20u;
    // 7F07AE20: extsh. r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F07AE24:
    ctx->pc = 0x7F07AE24u;
    // 7F07AE24: bc    12, 1, 0x7F07AE50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AE50;
        }
    }

label_7F07AE28:
    ctx->pc = 0x7F07AE28u;
    ctx->downcount -= 10;
    // 7F07AE28: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07AE2C:
    ctx->pc = 0x7F07AE2Cu;
    // 7F07AE2C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F07AE30:
    ctx->pc = 0x7F07AE30u;
    // 7F07AE30: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07AE34:
    ctx->pc = 0x7F07AE34u;
    // 7F07AE34: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07AE38:
    ctx->pc = 0x7F07AE38u;
    // 7F07AE38: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F07AE3C:
    ctx->pc = 0x7F07AE3Cu;
    // 7F07AE3C: lha     r0, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AE40:
    ctx->pc = 0x7F07AE40u;
    // 7F07AE40: stw     r0, 15424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AE44:
    ctx->pc = 0x7F07AE44u;
    // 7F07AE44: lha     r0, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AE48:
    ctx->pc = 0x7F07AE48u;
    // 7F07AE48: stw     r0, 15428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AE4C:
    ctx->pc = 0x7F07AE4Cu;
    // 7F07AE4C: b       0x7F07AE68
    {
            goto label_7F07AE68;
    }

label_7F07AE50:
    ctx->pc = 0x7F07AE50u;
    ctx->downcount -= 6;
    // 7F07AE50: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F07AE54:
    ctx->pc = 0x7F07AE54u;
    // 7F07AE54: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F07AE58:
    ctx->pc = 0x7F07AE58u;
    // 7F07AE58: stw     r5, 15424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15424);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07AE5C:
    ctx->pc = 0x7F07AE5Cu;
    // 7F07AE5C: lwz     r4, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07AE60:
    ctx->pc = 0x7F07AE60u;
    // 7F07AE60: lha     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07AE64:
    ctx->pc = 0x7F07AE64u;
    // 7F07AE64: stw     r0, 15428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AE68:
    ctx->pc = 0x7F07AE68u;
    ctx->downcount -= 2;
    // 7F07AE68: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07AE6C:
    ctx->pc = 0x7F07AE6Cu;
    // 7F07AE6C: bl      0x7F023E10
    {
            ctx->lr = 0x7F07AE70u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F07AE70:
    ctx->pc = 0x7F07AE70u;
    ctx->downcount -= 2;
    // 7F07AE70: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07AE74:
    ctx->pc = 0x7F07AE74u;
    // 7F07AE74: bl      0x7F042AAC
    {
            ctx->lr = 0x7F07AE78u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F07AE78:
    ctx->pc = 0x7F07AE78u;
    ctx->downcount -= 2;
    // 7F07AE78: addi    r3, r31, 4096
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F07AE7C:
    ctx->pc = 0x7F07AE7Cu;
    // 7F07AE7C: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F07AE80u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F07AE80:
    ctx->pc = 0x7F07AE80u;
    ctx->downcount -= 2;
    // 7F07AE80: addi    r3, r31, 976
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(976);

label_7F07AE84:
    ctx->pc = 0x7F07AE84u;
    // 7F07AE84: bl      0x7F0146B0
    {
            ctx->lr = 0x7F07AE88u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F07AE88:
    ctx->pc = 0x7F07AE88u;
    ctx->downcount -= 3;
    // 7F07AE88: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AE8C:
    ctx->pc = 0x7F07AE8Cu;
    // 7F07AE8C: cmplwi  r3, 0x0000
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

label_7F07AE90:
    ctx->pc = 0x7F07AE90u;
    // 7F07AE90: bc    12, 2, 0x7F07AE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AE98;
        }
    }

label_7F07AE94:
    ctx->pc = 0x7F07AE94u;
    ctx->downcount -= 1;
    // 7F07AE94: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07AE98u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07AE98:
    ctx->pc = 0x7F07AE98u;
    ctx->downcount -= 3;
    // 7F07AE98: lwz     r3, 3944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AE9C:
    ctx->pc = 0x7F07AE9Cu;
    // 7F07AE9C: cmplwi  r3, 0x0000
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

label_7F07AEA0:
    ctx->pc = 0x7F07AEA0u;
    // 7F07AEA0: bc    12, 2, 0x7F07AEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AEA8;
        }
    }

label_7F07AEA4:
    ctx->pc = 0x7F07AEA4u;
    ctx->downcount -= 1;
    // 7F07AEA4: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07AEA8u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07AEA8:
    ctx->pc = 0x7F07AEA8u;
    ctx->downcount -= 3;
    // 7F07AEA8: lwz     r3, 3964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3964);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEAC:
    ctx->pc = 0x7F07AEACu;
    // 7F07AEAC: cmplwi  r3, 0x0000
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

label_7F07AEB0:
    ctx->pc = 0x7F07AEB0u;
    // 7F07AEB0: bc    12, 2, 0x7F07AEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AEB8;
        }
    }

label_7F07AEB4:
    ctx->pc = 0x7F07AEB4u;
    ctx->downcount -= 1;
    // 7F07AEB4: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07AEB8u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07AEB8:
    ctx->pc = 0x7F07AEB8u;
    ctx->downcount -= 2;
    // 7F07AEB8: lwz     r3, 4696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEBC:
    ctx->pc = 0x7F07AEBCu;
    // 7F07AEBC: bl      0x7F0259FC
    {
            ctx->lr = 0x7F07AEC0u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F07AEC0:
    ctx->pc = 0x7F07AEC0u;
    ctx->downcount -= 2;
    // 7F07AEC0: lwz     r3, 492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEC4:
    ctx->pc = 0x7F07AEC4u;
    // 7F07AEC4: bl      0x7F2D23E8
    {
            ctx->lr = 0x7F07AEC8u;
            ctx->pc = 0x7F2D23E8u;
            return;
    }

label_7F07AEC8:
    ctx->pc = 0x7F07AEC8u;
    ctx->downcount -= 1;
    // 7F07AEC8: bl      0x7F09116C
    {
            ctx->lr = 0x7F07AECCu;
            ctx->pc = 0x7F09116Cu;
            return;
    }

label_7F07AECC:
    ctx->pc = 0x7F07AECCu;
    ctx->downcount -= 6;
    // 7F07AECC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07AED0:
    ctx->pc = 0x7F07AED0u;
    // 7F07AED0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07AED4:
    ctx->pc = 0x7F07AED4u;
    // 7F07AED4: stw     r0, 22120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AED8:
    ctx->pc = 0x7F07AED8u;
    // 7F07AED8: lwz     r3, 4552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEDC:
    ctx->pc = 0x7F07AEDCu;
    // 7F07AEDC: cmplwi  r3, 0x0000
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

label_7F07AEE0:
    ctx->pc = 0x7F07AEE0u;
    // 7F07AEE0: bc    12, 2, 0x7F07AEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AEE8;
        }
    }

label_7F07AEE4:
    ctx->pc = 0x7F07AEE4u;
    ctx->downcount -= 1;
    // 7F07AEE4: bl      0x7F306768
    {
            ctx->lr = 0x7F07AEE8u;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F07AEE8:
    ctx->pc = 0x7F07AEE8u;
    ctx->downcount -= 3;
    // 7F07AEE8: lwz     r3, 4556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEEC:
    ctx->pc = 0x7F07AEECu;
    // 7F07AEEC: cmplwi  r3, 0x0000
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

label_7F07AEF0:
    ctx->pc = 0x7F07AEF0u;
    // 7F07AEF0: bc    12, 2, 0x7F07AEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AEF8;
        }
    }

label_7F07AEF4:
    ctx->pc = 0x7F07AEF4u;
    ctx->downcount -= 1;
    // 7F07AEF4: bl      0x7F306768
    {
            ctx->lr = 0x7F07AEF8u;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F07AEF8:
    ctx->pc = 0x7F07AEF8u;
    ctx->downcount -= 3;
    // 7F07AEF8: lwz     r3, 4572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4572);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AEFC:
    ctx->pc = 0x7F07AEFCu;
    // 7F07AEFC: cmplwi  r3, 0x0000
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

label_7F07AF00:
    ctx->pc = 0x7F07AF00u;
    // 7F07AF00: bc    12, 2, 0x7F07AF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AF08;
        }
    }

label_7F07AF04:
    ctx->pc = 0x7F07AF04u;
    ctx->downcount -= 1;
    // 7F07AF04: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07AF08u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07AF08:
    ctx->pc = 0x7F07AF08u;
    ctx->downcount -= 3;
    // 7F07AF08: lwz     r3, 4700(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4700);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07AF0C:
    ctx->pc = 0x7F07AF0Cu;
    // 7F07AF0C: cmplwi  r3, 0x0000
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

label_7F07AF10:
    ctx->pc = 0x7F07AF10u;
    // 7F07AF10: bc    12, 2, 0x7F07AF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07AF20;
        }
    }

label_7F07AF14:
    ctx->pc = 0x7F07AF14u;
    ctx->downcount -= 1;
    // 7F07AF14: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F07AF18u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F07AF18:
    ctx->pc = 0x7F07AF18u;
    ctx->downcount -= 2;
    // 7F07AF18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07AF1C:
    ctx->pc = 0x7F07AF1Cu;
    // 7F07AF1C: stw     r0, 4700(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4700);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AF20:
    ctx->pc = 0x7F07AF20u;
    ctx->downcount -= 6;
    // 7F07AF20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AF24:
    ctx->pc = 0x7F07AF24u;
    // 7F07AF24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07AF28:
    ctx->pc = 0x7F07AF28u;
    // 7F07AF28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07AF2C:
    ctx->pc = 0x7F07AF2Cu;
    // 7F07AF2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07AF30:
    ctx->pc = 0x7F07AF30u;
    // 7F07AF30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AF34:
    ctx->pc = 0x7F07AF34u;
    ctx->downcount -= 2;
    // 7F07AF34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07AF38:
    ctx->pc = 0x7F07AF38u;
    // 7F07AF38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07AF3C:
    ctx->pc = 0x7F07AF3Cu;
    ctx->downcount -= 54;
    // 7F07AF3C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07AF40:
    ctx->pc = 0x7F07AF40u;
    // 7F07AF40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07AF44:
    ctx->pc = 0x7F07AF44u;
    // 7F07AF44: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F07AF48:
    ctx->pc = 0x7F07AF48u;
    // 7F07AF48: addi    r12, r3, 976
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(976);

label_7F07AF4C:
    ctx->pc = 0x7F07AF4Cu;
    // 7F07AF4C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AF50:
    ctx->pc = 0x7F07AF50u;
    // 7F07AF50: addi    r7, r6, -7764
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-7764);

label_7F07AF54:
    ctx->pc = 0x7F07AF54u;
    // 7F07AF54: lis     r6, 4
    ctx->gpr[6] = ((u32)(s32)(4) << 16);

label_7F07AF58:
    ctx->pc = 0x7F07AF58u;
    // 7F07AF58: addi    r11, r1, 8
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(8);

label_7F07AF5C:
    ctx->pc = 0x7F07AF5Cu;
    // 7F07AF5C: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07AF60:
    ctx->pc = 0x7F07AF60u;
    // 7F07AF60: addi    r31, r3, 3856
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(3856);

label_7F07AF64:
    ctx->pc = 0x7F07AF64u;
    // 7F07AF64: addi    r10, r3, 3920
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(3920);

label_7F07AF68:
    ctx->pc = 0x7F07AF68u;
    // 7F07AF68: addi    r9, r3, 48
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(48);

label_7F07AF6C:
    ctx->pc = 0x7F07AF6Cu;
    // 7F07AF6C: addi    r8, r3, 448
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(448);

label_7F07AF70:
    ctx->pc = 0x7F07AF70u;
    // 7F07AF70: addi    r6, r6, 22417
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22417);

label_7F07AF74:
    ctx->pc = 0x7F07AF74u;
    // 7F07AF74: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AF78:
    ctx->pc = 0x7F07AF78u;
    // 7F07AF78: lwz     r28, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F07AF7C:
    ctx->pc = 0x7F07AF7Cu;
    // 7F07AF7C: lwz     r29, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F07AF80:
    ctx->pc = 0x7F07AF80u;
    // 7F07AF80: lwz     r30, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F07AF84:
    ctx->pc = 0x7F07AF84u;
    // 7F07AF84: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F07AF88:
    ctx->pc = 0x7F07AF88u;
    // 7F07AF88: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F07AF8C:
    ctx->pc = 0x7F07AF8Cu;
    // 7F07AF8C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F07AF90:
    ctx->pc = 0x7F07AF90u;
    // 7F07AF90: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AF94:
    ctx->pc = 0x7F07AF94u;
    // 7F07AF94: addi    r0, r3, 3472
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3472);

label_7F07AF98:
    ctx->pc = 0x7F07AF98u;
    // 7F07AF98: stw     r28, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F07AF9C:
    ctx->pc = 0x7F07AF9Cu;
    // 7F07AF9C: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F07AFA0:
    ctx->pc = 0x7F07AFA0u;
    // 7F07AFA0: stw     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F07AFA4:
    ctx->pc = 0x7F07AFA4u;
    // 7F07AFA4: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07AFA8:
    ctx->pc = 0x7F07AFA8u;
    // 7F07AFA8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07AFAC:
    ctx->pc = 0x7F07AFACu;
    // 7F07AFAC: stw     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F07AFB0:
    ctx->pc = 0x7F07AFB0u;
    // 7F07AFB0: stw     r11, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F07AFB4:
    ctx->pc = 0x7F07AFB4u;
    // 7F07AFB4: lwz     r11, 4560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4560);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F07AFB8:
    ctx->pc = 0x7F07AFB8u;
    // 7F07AFB8: stw     r11, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F07AFBC:
    ctx->pc = 0x7F07AFBCu;
    // 7F07AFBC: lwz     r11, 4564(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4564);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F07AFC0:
    ctx->pc = 0x7F07AFC0u;
    // 7F07AFC0: stw     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F07AFC4:
    ctx->pc = 0x7F07AFC4u;
    // 7F07AFC4: stw     r10, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F07AFC8:
    ctx->pc = 0x7F07AFC8u;
    // 7F07AFC8: stw     r9, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F07AFCC:
    ctx->pc = 0x7F07AFCCu;
    // 7F07AFCC: stw     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F07AFD0:
    ctx->pc = 0x7F07AFD0u;
    // 7F07AFD0: stw     r7, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F07AFD4:
    ctx->pc = 0x7F07AFD4u;
    // 7F07AFD4: stw     r6, 3660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3660);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07AFD8:
    ctx->pc = 0x7F07AFD8u;
    // 7F07AFD8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F07AFDC:
    ctx->pc = 0x7F07AFDCu;
    // 7F07AFDC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07AFE0:
    ctx->pc = 0x7F07AFE0u;
    // 7F07AFE0: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F07AFE4:
    ctx->pc = 0x7F07AFE4u;
    // 7F07AFE4: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07AFE8:
    ctx->pc = 0x7F07AFE8u;
    // 7F07AFE8: bl      0x7F0B1A5C
    {
            ctx->lr = 0x7F07AFECu;
            ctx->pc = 0x7F0B1A5Cu;
            return;
    }

label_7F07AFEC:
    ctx->pc = 0x7F07AFECu;
    ctx->downcount -= 16;
    // 7F07AFEC: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07AFF0:
    ctx->pc = 0x7F07AFF0u;
    // 7F07AFF0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07AFF4:
    ctx->pc = 0x7F07AFF4u;
    // 7F07AFF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07AFF8:
    ctx->pc = 0x7F07AFF8u;
    // 7F07AFF8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F07AFFC:
    ctx->pc = 0x7F07AFFCu;
    // 7F07AFFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B000:
    ctx->pc = 0x7F07B000u;
    ctx->downcount -= 21;
    // 7F07B000: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B004:
    ctx->pc = 0x7F07B004u;
    // 7F07B004: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B008:
    ctx->pc = 0x7F07B008u;
    // 7F07B008: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F07B00C:
    ctx->pc = 0x7F07B00Cu;
    // 7F07B00C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F07B010:
    ctx->pc = 0x7F07B010u;
    // 7F07B010: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B014:
    ctx->pc = 0x7F07B014u;
    // 7F07B014: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B018:
    ctx->pc = 0x7F07B018u;
    // 7F07B018: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B01C:
    ctx->pc = 0x7F07B01Cu;
    // 7F07B01C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07B020:
    ctx->pc = 0x7F07B020u;
    // 7F07B020: addi    r4, r31, 448
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07B024:
    ctx->pc = 0x7F07B024u;
    // 7F07B024: addi    r6, r31, 3952
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F07B028:
    ctx->pc = 0x7F07B028u;
    // 7F07B028: bl      0x7F07A914
    {
            ctx->lr = 0x7F07B02Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07A914u;
                return;
            }
            goto label_7F07A914;
    }

label_7F07B02C:
    ctx->pc = 0x7F07B02Cu;
    ctx->downcount -= 3;
    // 7F07B02C: stw     r3, 3944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3944);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B030:
    ctx->pc = 0x7F07B030u;
    // 7F07B030: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F07B034:
    ctx->pc = 0x7F07B034u;
    // 7F07B034: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B038u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B038:
    ctx->pc = 0x7F07B038u;
    ctx->downcount -= 2;
    // 7F07B038: cmplwi  r3, 0x0000
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

label_7F07B03C:
    ctx->pc = 0x7F07B03Cu;
    // 7F07B03C: bc    12, 2, 0x7F07B080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B080;
        }
    }

label_7F07B040:
    ctx->pc = 0x7F07B040u;
    ctx->downcount -= 5;
    // 7F07B040: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B044:
    ctx->pc = 0x7F07B044u;
    // 7F07B044: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F07B048:
    ctx->pc = 0x7F07B048u;
    // 7F07B048: addi    r29, r3, 13880
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07B04C:
    ctx->pc = 0x7F07B04Cu;
    // 7F07B04C: li      r30, 10
    ctx->gpr[30] = (u32)(s32)(10);

label_7F07B050:
    ctx->pc = 0x7F07B050u;
    // 7F07B050: b       0x7F07B05C
    {
            goto label_7F07B05C;
    }

label_7F07B054:
    ctx->downcount -= 1;
    // 7F07B054: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F07B058u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F07B058:
    ctx->downcount -= 1;
    // 7F07B058: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F07B05C:
    ctx->pc = 0x7F07B05Cu;
    ctx->downcount -= 45;
    // 7F07B05C: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B060:
    ctx->pc = 0x7F07B060u;
    // 7F07B060: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B064:
    // 7F07B064: divw   r3, r0, r30
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[30];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F07B068:
    // 7F07B068: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F07B06C:
    // 7F07B06C: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B070:
    // 7F07B070: bc    12, 0, 0x7F07B054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B054u;
                return;
            }
            goto label_7F07B054;
        }
    }

label_7F07B074:
    ctx->pc = 0x7F07B074u;
    ctx->downcount -= 1;
    // 7F07B074: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F07B078u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F07B078:
    ctx->pc = 0x7F07B078u;
    ctx->downcount -= 2;
    // 7F07B078: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07B07C:
    ctx->pc = 0x7F07B07Cu;
    // 7F07B07C: stw     r3, 27972(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27972);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B080:
    ctx->pc = 0x7F07B080u;
    ctx->downcount -= 10;
    // 7F07B080: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F07B084:
    ctx->pc = 0x7F07B084u;
    // 7F07B084: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07B088:
    ctx->pc = 0x7F07B088u;
    // 7F07B088: sth     r0, 3960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B08C:
    ctx->pc = 0x7F07B08Cu;
    // 7F07B08C: addi    r0, r31, 3980
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(3980);

label_7F07B090:
    ctx->pc = 0x7F07B090u;
    // 7F07B090: addi    r5, r4, 27980
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27980);

label_7F07B094:
    ctx->pc = 0x7F07B094u;
    // 7F07B094: lis     r3, 32520
    ctx->gpr[3] = ((u32)(s32)(32520) << 16);

label_7F07B098:
    ctx->pc = 0x7F07B098u;
    // 7F07B098: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B09C:
    ctx->pc = 0x7F07B09Cu;
    // 7F07B09C: addi    r4, r3, 9040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9040);

label_7F07B0A0:
    ctx->pc = 0x7F07B0A0u;
    // 7F07B0A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B0A4:
    ctx->pc = 0x7F07B0A4u;
    // 7F07B0A4: bl      0x7F07CF30
    {
            ctx->lr = 0x7F07B0A8u;
            ctx->pc = 0x7F07CF30u;
            return;
    }

label_7F07B0A8:
    ctx->pc = 0x7F07B0A8u;
    ctx->downcount -= 4;
    // 7F07B0A8: addi    r3, r31, 4044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4044);

label_7F07B0AC:
    ctx->pc = 0x7F07B0ACu;
    // 7F07B0AC: addi    r4, r31, 212
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(212);

label_7F07B0B0:
    ctx->pc = 0x7F07B0B0u;
    // 7F07B0B0: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07B0B4:
    ctx->pc = 0x7F07B0B4u;
    // 7F07B0B4: bl      0x7F056DE8
    {
            ctx->lr = 0x7F07B0B8u;
            ctx->pc = 0x7F056DE8u;
            return;
    }

label_7F07B0B8:
    ctx->pc = 0x7F07B0B8u;
    ctx->downcount -= 9;
    // 7F07B0B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B0BC:
    ctx->pc = 0x7F07B0BCu;
    // 7F07B0BC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F07B0C0:
    ctx->pc = 0x7F07B0C0u;
    // 7F07B0C0: addi    r3, r3, 14080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F07B0C4:
    ctx->pc = 0x7F07B0C4u;
    // 7F07B0C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B0C8:
    ctx->pc = 0x7F07B0C8u;
    // 7F07B0C8: stw     r3, 4308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B0CC:
    ctx->pc = 0x7F07B0CCu;
    // 7F07B0CC: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F07B0D0:
    ctx->pc = 0x7F07B0D0u;
    // 7F07B0D0: sth     r4, 3974(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3974);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F07B0D4:
    ctx->pc = 0x7F07B0D4u;
    // 7F07B0D4: stw     r0, 3964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B0D8:
    ctx->pc = 0x7F07B0D8u;
    // 7F07B0D8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B0DCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B0DC:
    ctx->pc = 0x7F07B0DCu;
    ctx->downcount -= 2;
    // 7F07B0DC: cmplwi  r3, 0x0000
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

label_7F07B0E0:
    ctx->pc = 0x7F07B0E0u;
    // 7F07B0E0: bc    12, 2, 0x7F07B0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B0F0;
        }
    }

label_7F07B0E4:
    ctx->pc = 0x7F07B0E4u;
    ctx->downcount -= 1;
    // 7F07B0E4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B0E8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B0E8:
    ctx->pc = 0x7F07B0E8u;
    ctx->downcount -= 2;
    // 7F07B0E8: addi    r4, r31, 4292
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4292);

label_7F07B0EC:
    ctx->pc = 0x7F07B0ECu;
    // 7F07B0EC: bl      0x7F3C6904
    {
            ctx->lr = 0x7F07B0F0u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F07B0F0:
    ctx->pc = 0x7F07B0F0u;
    ctx->downcount -= 2;
    // 7F07B0F0: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F07B0F4:
    ctx->pc = 0x7F07B0F4u;
    // 7F07B0F4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B0F8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B0F8:
    ctx->pc = 0x7F07B0F8u;
    ctx->downcount -= 2;
    // 7F07B0F8: cmplwi  r3, 0x0000
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

label_7F07B0FC:
    ctx->pc = 0x7F07B0FCu;
    // 7F07B0FC: bc    12, 2, 0x7F07B16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B16C;
        }
    }

label_7F07B100:
    ctx->pc = 0x7F07B100u;
    ctx->downcount -= 1;
    // 7F07B100: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B104u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B104:
    ctx->pc = 0x7F07B104u;
    ctx->downcount -= 1;
    // 7F07B104: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B108u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B108:
    ctx->pc = 0x7F07B108u;
    ctx->downcount -= 4;
    // 7F07B108: sth     r3, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F07B10C:
    ctx->pc = 0x7F07B10Cu;
    // 7F07B10C: lhz     r0, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07B110:
    ctx->pc = 0x7F07B110u;
    // 7F07B110: cmplwi  r0, 0x0001
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

label_7F07B114:
    ctx->pc = 0x7F07B114u;
    // 7F07B114: bc    12, 2, 0x7F07B120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B120;
        }
    }

label_7F07B118:
    ctx->pc = 0x7F07B118u;
    ctx->downcount -= 2;
    // 7F07B118: cmplwi  r0, 0x0002
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

label_7F07B11C:
    ctx->pc = 0x7F07B11Cu;
    // 7F07B11C: bc    4, 2, 0x7F07B130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B130;
        }
    }

label_7F07B120:
    ctx->pc = 0x7F07B120u;
    ctx->downcount -= 4;
    // 7F07B120: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07B124:
    ctx->pc = 0x7F07B124u;
    // 7F07B124: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F07B128:
    ctx->pc = 0x7F07B128u;
    // 7F07B128: stw     r0, 27964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B12C:
    ctx->pc = 0x7F07B12Cu;
    // 7F07B12C: b       0x7F07B13C
    {
            goto label_7F07B13C;
    }

label_7F07B130:
    ctx->pc = 0x7F07B130u;
    ctx->downcount -= 3;
    // 7F07B130: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07B134:
    ctx->pc = 0x7F07B134u;
    // 7F07B134: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B138:
    ctx->pc = 0x7F07B138u;
    // 7F07B138: stw     r0, 27964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B13C:
    ctx->pc = 0x7F07B13Cu;
    ctx->downcount -= 3;
    // 7F07B13C: lhz     r0, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07B140:
    ctx->pc = 0x7F07B140u;
    // 7F07B140: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B144:
    ctx->pc = 0x7F07B144u;
    // 7F07B144: bc    4, 2, 0x7F07B16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B16C;
        }
    }

label_7F07B148:
    ctx->pc = 0x7F07B148u;
    ctx->downcount -= 2;
    // 7F07B148: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B14C:
    ctx->pc = 0x7F07B14Cu;
    // 7F07B14C: bl      0x7F3CA7CC
    {
            ctx->lr = 0x7F07B150u;
            ctx->pc = 0x7F3CA7CCu;
            return;
    }

label_7F07B150:
    ctx->pc = 0x7F07B150u;
    ctx->downcount -= 7;
    // 7F07B150: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B154:
    ctx->pc = 0x7F07B154u;
    // 7F07B154: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B158:
    ctx->pc = 0x7F07B158u;
    // 7F07B158: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07B15C:
    ctx->pc = 0x7F07B15Cu;
    // 7F07B15C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B160:
    ctx->pc = 0x7F07B160u;
    // 7F07B160: sth     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B164:
    ctx->pc = 0x7F07B164u;
    // 7F07B164: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B168:
    ctx->pc = 0x7F07B168u;
    // 7F07B168: sth     r0, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B16C:
    ctx->pc = 0x7F07B16Cu;
    ctx->downcount -= 2;
    // 7F07B16C: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F07B170:
    ctx->pc = 0x7F07B170u;
    // 7F07B170: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B174u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B174:
    ctx->pc = 0x7F07B174u;
    ctx->downcount -= 2;
    // 7F07B174: cmplwi  r3, 0x0000
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

label_7F07B178:
    ctx->pc = 0x7F07B178u;
    // 7F07B178: bc    12, 2, 0x7F07B198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B198;
        }
    }

label_7F07B17C:
    ctx->pc = 0x7F07B17Cu;
    ctx->downcount -= 1;
    // 7F07B17C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B180u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B180:
    ctx->pc = 0x7F07B180u;
    ctx->downcount -= 1;
    // 7F07B180: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B184u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B184:
    ctx->pc = 0x7F07B184u;
    ctx->downcount -= 2;
    // 7F07B184: cmpwi   r3, 1
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

label_7F07B188:
    ctx->pc = 0x7F07B188u;
    // 7F07B188: bc    4, 2, 0x7F07B198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B198;
        }
    }

label_7F07B18C:
    ctx->pc = 0x7F07B18Cu;
    ctx->downcount -= 3;
    // 7F07B18C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B190:
    ctx->pc = 0x7F07B190u;
    // 7F07B190: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F07B194:
    ctx->pc = 0x7F07B194u;
    // 7F07B194: bl      0x7F07D0AC
    {
            ctx->lr = 0x7F07B198u;
            ctx->pc = 0x7F07D0ACu;
            return;
    }

label_7F07B198:
    ctx->pc = 0x7F07B198u;
    ctx->downcount -= 2;
    // 7F07B198: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F07B19C:
    ctx->pc = 0x7F07B19Cu;
    // 7F07B19C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B1A0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B1A0:
    ctx->pc = 0x7F07B1A0u;
    ctx->downcount -= 2;
    // 7F07B1A0: cmplwi  r3, 0x0000
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

label_7F07B1A4:
    ctx->pc = 0x7F07B1A4u;
    // 7F07B1A4: bc    12, 2, 0x7F07B1B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B1B4;
        }
    }

label_7F07B1A8:
    ctx->pc = 0x7F07B1A8u;
    ctx->downcount -= 1;
    // 7F07B1A8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B1ACu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B1AC:
    ctx->pc = 0x7F07B1ACu;
    ctx->downcount -= 1;
    // 7F07B1AC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B1B0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B1B0:
    ctx->pc = 0x7F07B1B0u;
    ctx->downcount -= 1;
    // 7F07B1B0: sth     r3, 3972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3972);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F07B1B4:
    ctx->pc = 0x7F07B1B4u;
    ctx->downcount -= 3;
    // 7F07B1B4: lhz     r0, 3972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3972);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07B1B8:
    ctx->pc = 0x7F07B1B8u;
    // 7F07B1B8: cmplwi  r0, 0x0008
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

label_7F07B1BC:
    ctx->pc = 0x7F07B1BCu;
    // 7F07B1BC: bc    4, 2, 0x7F07B1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B1F8;
        }
    }

label_7F07B1C0:
    ctx->pc = 0x7F07B1C0u;
    ctx->downcount -= 5;
    // 7F07B1C0: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B1C4:
    ctx->pc = 0x7F07B1C4u;
    // 7F07B1C4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B1C8:
    ctx->pc = 0x7F07B1C8u;
    // 7F07B1C8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B1CC:
    ctx->pc = 0x7F07B1CCu;
    // 7F07B1CC: cmpwi   r0, 8
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

label_7F07B1D0:
    ctx->pc = 0x7F07B1D0u;
    // 7F07B1D0: bc    12, 2, 0x7F07B1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B1F8;
        }
    }

label_7F07B1D4:
    ctx->pc = 0x7F07B1D4u;
    ctx->downcount -= 9;
    // 7F07B1D4: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F07B1D8:
    ctx->pc = 0x7F07B1D8u;
    // 7F07B1D8: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07B1DC:
    ctx->pc = 0x7F07B1DCu;
    // 7F07B1DC: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F07B1E0:
    ctx->pc = 0x7F07B1E0u;
    // 7F07B1E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07B1E4:
    ctx->pc = 0x7F07B1E4u;
    // 7F07B1E4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F07B1E8:
    ctx->pc = 0x7F07B1E8u;
    // 7F07B1E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07B1EC:
    ctx->pc = 0x7F07B1ECu;
    // 7F07B1EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07B1F0:
    ctx->pc = 0x7F07B1F0u;
    // 7F07B1F0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07B1F4:
    ctx->pc = 0x7F07B1F4u;
    // 7F07B1F4: bl      0x7F042C94
    {
            ctx->lr = 0x7F07B1F8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F07B1F8:
    ctx->pc = 0x7F07B1F8u;
    ctx->downcount -= 2;
    // 7F07B1F8: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F07B1FC:
    ctx->pc = 0x7F07B1FCu;
    // 7F07B1FC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B200u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B200:
    ctx->pc = 0x7F07B200u;
    ctx->downcount -= 2;
    // 7F07B200: cmplwi  r3, 0x0000
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

label_7F07B204:
    ctx->pc = 0x7F07B204u;
    // 7F07B204: bc    12, 2, 0x7F07B218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B218;
        }
    }

label_7F07B208:
    ctx->pc = 0x7F07B208u;
    ctx->downcount -= 1;
    // 7F07B208: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B20Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B20C:
    ctx->pc = 0x7F07B20Cu;
    ctx->downcount -= 1;
    // 7F07B20C: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B210u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B210:
    ctx->pc = 0x7F07B210u;
    ctx->downcount -= 2;
    // 7F07B210: stw     r3, 4312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B214:
    ctx->pc = 0x7F07B214u;
    // 7F07B214: b       0x7F07B220
    {
            goto label_7F07B220;
    }

label_7F07B218:
    ctx->pc = 0x7F07B218u;
    ctx->downcount -= 2;
    // 7F07B218: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F07B21C:
    ctx->pc = 0x7F07B21Cu;
    // 7F07B21C: stw     r0, 4312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B220:
    ctx->pc = 0x7F07B220u;
    ctx->downcount -= 2;
    // 7F07B220: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F07B224:
    ctx->pc = 0x7F07B224u;
    // 7F07B224: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B228u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B228:
    ctx->pc = 0x7F07B228u;
    ctx->downcount -= 2;
    // 7F07B228: cmplwi  r3, 0x0000
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

label_7F07B22C:
    ctx->pc = 0x7F07B22Cu;
    // 7F07B22C: bc    12, 2, 0x7F07B250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B250;
        }
    }

label_7F07B230:
    ctx->pc = 0x7F07B230u;
    ctx->downcount -= 1;
    // 7F07B230: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B234u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B234:
    ctx->pc = 0x7F07B234u;
    ctx->downcount -= 1;
    // 7F07B234: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B238u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B238:
    ctx->pc = 0x7F07B238u;
    ctx->downcount -= 6;
    // 7F07B238: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07B23C:
    ctx->pc = 0x7F07B23Cu;
    // 7F07B23C: stw     r3, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B240:
    ctx->pc = 0x7F07B240u;
    // 7F07B240: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F07B244:
    ctx->pc = 0x7F07B244u;
    // 7F07B244: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B248:
    ctx->pc = 0x7F07B248u;
    // 7F07B248: lha     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B24C:
    ctx->pc = 0x7F07B24Cu;
    // 7F07B24C: stw     r0, 4564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B250:
    ctx->pc = 0x7F07B250u;
    ctx->downcount -= 3;
    // 7F07B250: lwz     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B254:
    ctx->pc = 0x7F07B254u;
    // 7F07B254: cmpwi   r0, 0
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

label_7F07B258:
    ctx->pc = 0x7F07B258u;
    // 7F07B258: bc    12, 1, 0x7F07B274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B274;
        }
    }

label_7F07B25C:
    ctx->pc = 0x7F07B25Cu;
    ctx->downcount -= 6;
    // 7F07B25C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F07B260:
    ctx->pc = 0x7F07B260u;
    // 7F07B260: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F07B264:
    ctx->pc = 0x7F07B264u;
    // 7F07B264: lwz     r0, 15424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B268:
    ctx->pc = 0x7F07B268u;
    // 7F07B268: stw     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B26C:
    ctx->pc = 0x7F07B26Cu;
    // 7F07B26C: lwz     r0, 15428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15428);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B270:
    ctx->pc = 0x7F07B270u;
    // 7F07B270: stw     r0, 4564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B274:
    ctx->pc = 0x7F07B274u;
    ctx->downcount -= 3;
    // 7F07B274: lwz     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B278:
    ctx->pc = 0x7F07B278u;
    // 7F07B278: cmpwi   r0, 33
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(33);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B27C:
    ctx->pc = 0x7F07B27Cu;
    // 7F07B27C: bc    4, 0, 0x7F07B288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B288;
        }
    }

label_7F07B280:
    ctx->pc = 0x7F07B280u;
    ctx->downcount -= 2;
    // 7F07B280: li      r0, 33
    ctx->gpr[0] = (u32)(s32)(33);

label_7F07B284:
    ctx->pc = 0x7F07B284u;
    // 7F07B284: stw     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B288:
    ctx->pc = 0x7F07B288u;
    ctx->downcount -= 3;
    // 7F07B288: lwz     r0, 4564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B28C:
    ctx->pc = 0x7F07B28Cu;
    // 7F07B28C: cmpwi   r0, 10
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

label_7F07B290:
    ctx->pc = 0x7F07B290u;
    // 7F07B290: bc    4, 0, 0x7F07B29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B29C;
        }
    }

label_7F07B294:
    ctx->pc = 0x7F07B294u;
    ctx->downcount -= 2;
    // 7F07B294: lwz     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B298:
    ctx->pc = 0x7F07B298u;
    // 7F07B298: stw     r0, 4564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B29C:
    ctx->pc = 0x7F07B29Cu;
    ctx->downcount -= 9;
    // 7F07B29C: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F07B2A0:
    ctx->pc = 0x7F07B2A0u;
    // 7F07B2A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07B2A4:
    ctx->pc = 0x7F07B2A4u;
    // 7F07B2A4: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F07B2A8:
    ctx->pc = 0x7F07B2A8u;
    // 7F07B2A8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B2AC:
    ctx->pc = 0x7F07B2ACu;
    // 7F07B2AC: lwz     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B2B0:
    ctx->pc = 0x7F07B2B0u;
    // 7F07B2B0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B2B4:
    ctx->pc = 0x7F07B2B4u;
    // 7F07B2B4: lwz     r3, 4516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B2B8:
    ctx->pc = 0x7F07B2B8u;
    // 7F07B2B8: cmpwi   r3, 0
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

label_7F07B2BC:
    ctx->pc = 0x7F07B2BCu;
    // 7F07B2BC: bc    4, 1, 0x7F07B2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B2C8;
        }
    }

label_7F07B2C0:
    ctx->pc = 0x7F07B2C0u;
    ctx->downcount -= 2;
    // 7F07B2C0: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F07B2C4:
    ctx->pc = 0x7F07B2C4u;
    // 7F07B2C4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F07B2C8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F07B2C8:
    ctx->pc = 0x7F07B2C8u;
    ctx->downcount -= 3;
    // 7F07B2C8: lhz     r0, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07B2CC:
    ctx->pc = 0x7F07B2CCu;
    // 7F07B2CC: cmplwi  r0, 0x0002
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

label_7F07B2D0:
    ctx->pc = 0x7F07B2D0u;
    // 7F07B2D0: bc    12, 2, 0x7F07B2DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B2DC;
        }
    }

label_7F07B2D4:
    ctx->pc = 0x7F07B2D4u;
    ctx->downcount -= 2;
    // 7F07B2D4: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B2D8:
    ctx->pc = 0x7F07B2D8u;
    // 7F07B2D8: bc    4, 2, 0x7F07B2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B2FC;
        }
    }

label_7F07B2DC:
    ctx->pc = 0x7F07B2DCu;
    ctx->downcount -= 8;
    // 7F07B2DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B2E0:
    ctx->pc = 0x7F07B2E0u;
    // 7F07B2E0: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07B2E4:
    ctx->pc = 0x7F07B2E4u;
    // 7F07B2E4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B2E8:
    ctx->pc = 0x7F07B2E8u;
    // 7F07B2E8: lha     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B2EC:
    ctx->pc = 0x7F07B2ECu;
    // 7F07B2EC: stw     r0, 4560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B2F0:
    ctx->pc = 0x7F07B2F0u;
    // 7F07B2F0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B2F4:
    ctx->pc = 0x7F07B2F4u;
    // 7F07B2F4: lha     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B2F8:
    ctx->pc = 0x7F07B2F8u;
    // 7F07B2F8: stw     r0, 4564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B2FC:
    ctx->pc = 0x7F07B2FCu;
    ctx->downcount -= 6;
    // 7F07B2FC: lis     r3, 32520
    ctx->gpr[3] = ((u32)(s32)(32520) << 16);

label_7F07B300:
    ctx->pc = 0x7F07B300u;
    // 7F07B300: lis     r5, 32520
    ctx->gpr[5] = ((u32)(s32)(32520) << 16);

label_7F07B304:
    ctx->pc = 0x7F07B304u;
    // 7F07B304: addi    r4, r3, -16436
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16436);

label_7F07B308:
    ctx->pc = 0x7F07B308u;
    // 7F07B308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B30C:
    ctx->pc = 0x7F07B30Cu;
    // 7F07B30C: addi    r5, r5, -13424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13424);

label_7F07B310:
    ctx->pc = 0x7F07B310u;
    // 7F07B310: bl      0x7F07AF3C
    {
            ctx->lr = 0x7F07B314u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07AF3Cu;
                return;
            }
            goto label_7F07AF3C;
    }

label_7F07B314:
    ctx->pc = 0x7F07B314u;
    ctx->downcount -= 4;
    // 7F07B314: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F07B318:
    ctx->pc = 0x7F07B318u;
    // 7F07B318: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B31C:
    ctx->pc = 0x7F07B31Cu;
    // 7F07B31C: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F07B320:
    ctx->pc = 0x7F07B320u;
    // 7F07B320: bl      0x7F2D8CF0
    {
            ctx->lr = 0x7F07B324u;
            ctx->pc = 0x7F2D8CF0u;
            return;
    }

label_7F07B324:
    ctx->pc = 0x7F07B324u;
    ctx->downcount -= 3;
    // 7F07B324: stw     r3, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B328:
    ctx->pc = 0x7F07B328u;
    // 7F07B328: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_7F07B32C:
    ctx->pc = 0x7F07B32Cu;
    // 7F07B32C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B330u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B330:
    ctx->pc = 0x7F07B330u;
    ctx->downcount -= 2;
    // 7F07B330: cmplwi  r3, 0x0000
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

label_7F07B334:
    ctx->pc = 0x7F07B334u;
    // 7F07B334: bc    12, 2, 0x7F07B464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B464;
        }
    }

label_7F07B338:
    ctx->pc = 0x7F07B338u;
    ctx->downcount -= 7;
    // 7F07B338: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B33C:
    ctx->pc = 0x7F07B33Cu;
    // 7F07B33C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F07B340:
    ctx->pc = 0x7F07B340u;
    // 7F07B340: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07B344:
    ctx->pc = 0x7F07B344u;
    // 7F07B344: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B348:
    ctx->pc = 0x7F07B348u;
    // 7F07B348: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B34C:
    ctx->pc = 0x7F07B34Cu;
    // 7F07B34C: cmpwi   r0, 30
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

label_7F07B350:
    ctx->pc = 0x7F07B350u;
    // 7F07B350: bc    12, 2, 0x7F07B390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B390;
        }
    }

label_7F07B354:
    ctx->pc = 0x7F07B354u;
    ctx->downcount -= 1;
    // 7F07B354: bc    4, 0, 0x7F07B370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B370;
        }
    }

label_7F07B358:
    ctx->pc = 0x7F07B358u;
    ctx->downcount -= 2;
    // 7F07B358: cmpwi   r0, 20
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

label_7F07B35C:
    ctx->pc = 0x7F07B35Cu;
    // 7F07B35C: bc    12, 2, 0x7F07B388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B388;
        }
    }

label_7F07B360:
    ctx->pc = 0x7F07B360u;
    ctx->downcount -= 1;
    // 7F07B360: bc    4, 0, 0x7F07B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B3A4;
        }
    }

label_7F07B364:
    ctx->pc = 0x7F07B364u;
    ctx->downcount -= 2;
    // 7F07B364: cmpwi   r0, 10
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

label_7F07B368:
    ctx->pc = 0x7F07B368u;
    // 7F07B368: bc    12, 2, 0x7F07B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B3A4;
        }
    }

label_7F07B36C:
    ctx->pc = 0x7F07B36Cu;
    ctx->downcount -= 1;
    // 7F07B36C: b       0x7F07B3A4
    {
            goto label_7F07B3A4;
    }

label_7F07B370:
    ctx->pc = 0x7F07B370u;
    ctx->downcount -= 2;
    // 7F07B370: cmpwi   r0, 50
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

label_7F07B374:
    ctx->pc = 0x7F07B374u;
    // 7F07B374: bc    12, 2, 0x7F07B3A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B3A0;
        }
    }

label_7F07B378:
    ctx->pc = 0x7F07B378u;
    ctx->downcount -= 1;
    // 7F07B378: bc    4, 0, 0x7F07B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B3A4;
        }
    }

label_7F07B37C:
    ctx->pc = 0x7F07B37Cu;
    ctx->downcount -= 2;
    // 7F07B37C: cmpwi   r0, 40
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

label_7F07B380:
    ctx->pc = 0x7F07B380u;
    // 7F07B380: bc    12, 2, 0x7F07B398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B398;
        }
    }

label_7F07B384:
    ctx->pc = 0x7F07B384u;
    ctx->downcount -= 1;
    // 7F07B384: b       0x7F07B3A4
    {
            goto label_7F07B3A4;
    }

label_7F07B388:
    ctx->pc = 0x7F07B388u;
    ctx->downcount -= 2;
    // 7F07B388: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F07B38C:
    ctx->pc = 0x7F07B38Cu;
    // 7F07B38C: b       0x7F07B3A4
    {
            goto label_7F07B3A4;
    }

label_7F07B390:
    ctx->pc = 0x7F07B390u;
    ctx->downcount -= 2;
    // 7F07B390: li      r28, 2
    ctx->gpr[28] = (u32)(s32)(2);

label_7F07B394:
    ctx->pc = 0x7F07B394u;
    // 7F07B394: b       0x7F07B3A4
    {
            goto label_7F07B3A4;
    }

label_7F07B398:
    ctx->pc = 0x7F07B398u;
    ctx->downcount -= 2;
    // 7F07B398: li      r28, 3
    ctx->gpr[28] = (u32)(s32)(3);

label_7F07B39C:
    ctx->pc = 0x7F07B39Cu;
    // 7F07B39C: b       0x7F07B3A4
    {
            goto label_7F07B3A4;
    }

label_7F07B3A0:
    ctx->pc = 0x7F07B3A0u;
    ctx->downcount -= 1;
    // 7F07B3A0: li      r28, 4
    ctx->gpr[28] = (u32)(s32)(4);

label_7F07B3A4:
    ctx->pc = 0x7F07B3A4u;
    ctx->downcount -= 3;
    // 7F07B3A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B3A8:
    ctx->pc = 0x7F07B3A8u;
    // 7F07B3A8: stw     r0, 4616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B3AC:
    ctx->pc = 0x7F07B3ACu;
    // 7F07B3AC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F07B3B0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F07B3B0:
    ctx->pc = 0x7F07B3B0u;
    ctx->downcount -= 2;
    // 7F07B3B0: stw     r3, 4576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4576);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B3B4:
    ctx->pc = 0x7F07B3B4u;
    // 7F07B3B4: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F07B3B8u;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F07B3B8:
    ctx->pc = 0x7F07B3B8u;
    ctx->downcount -= 2;
    // 7F07B3B8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F07B3BC:
    ctx->pc = 0x7F07B3BCu;
    // 7F07B3BC: b       0x7F07B3C8
    {
            goto label_7F07B3C8;
    }

label_7F07B3C0:
    ctx->downcount -= 1;
    // 7F07B3C0: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F07B3C4u;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F07B3C4:
    ctx->downcount -= 1;
    // 7F07B3C4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F07B3C8:
    ctx->downcount -= 2;
    // 7F07B3C8: cmpw    r29, r28
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

label_7F07B3CC:
    // 7F07B3CC: bc    12, 0, 0x7F07B3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B3C0u;
                return;
            }
            goto label_7F07B3C0;
        }
    }

label_7F07B3D0:
    ctx->pc = 0x7F07B3D0u;
    ctx->downcount -= 1;
    // 7F07B3D0: bl      0x7F3C6640
    {
            ctx->lr = 0x7F07B3D4u;
            ctx->pc = 0x7F3C6640u;
            return;
    }

label_7F07B3D4:
    ctx->pc = 0x7F07B3D4u;
    ctx->downcount -= 1;
    // 7F07B3D4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F07B3D8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F07B3D8:
    ctx->pc = 0x7F07B3D8u;
    ctx->downcount -= 2;
    // 7F07B3D8: stw     r3, 4612(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4612);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B3DC:
    ctx->pc = 0x7F07B3DCu;
    // 7F07B3DC: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F07B3E0u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F07B3E0:
    ctx->pc = 0x7F07B3E0u;
    ctx->downcount -= 2;
    // 7F07B3E0: stw     r3, 4604(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4604);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B3E4:
    ctx->pc = 0x7F07B3E4u;
    // 7F07B3E4: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F07B3E8u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F07B3E8:
    ctx->pc = 0x7F07B3E8u;
    ctx->downcount -= 1;
    // 7F07B3E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F07B3ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F07B3EC:
    ctx->pc = 0x7F07B3ECu;
    ctx->downcount -= 8;
    // 7F07B3EC: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F07B3F0:
    ctx->pc = 0x7F07B3F0u;
    // 7F07B3F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07B3F4:
    ctx->pc = 0x7F07B3F4u;
    // 7F07B3F4: stb     r0, 4592(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4592);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F07B3F8:
    ctx->pc = 0x7F07B3F8u;
    // 7F07B3F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B3FC:
    ctx->pc = 0x7F07B3FCu;
    // 7F07B3FC: sth     r3, 4598(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4598);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F07B400:
    ctx->pc = 0x7F07B400u;
    // 7F07B400: sth     r0, 4596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4596);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B404:
    ctx->pc = 0x7F07B404u;
    // 7F07B404: lwz     r3, 4612(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4612);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B408:
    ctx->pc = 0x7F07B408u;
    // 7F07B408: bl      0x7F37CE50
    {
            ctx->lr = 0x7F07B40Cu;
            ctx->pc = 0x7F37CE50u;
            return;
    }

label_7F07B40C:
    ctx->pc = 0x7F07B40Cu;
    ctx->downcount -= 2;
    // 7F07B40C: cmpwi   r3, 0
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

label_7F07B410:
    ctx->pc = 0x7F07B410u;
    // 7F07B410: bc    12, 2, 0x7F07B420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B420;
        }
    }

label_7F07B414:
    ctx->pc = 0x7F07B414u;
    ctx->downcount -= 3;
    // 7F07B414: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F07B418:
    ctx->pc = 0x7F07B418u;
    // 7F07B418: sth     r0, 4596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4596);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B41C:
    ctx->pc = 0x7F07B41Cu;
    // 7F07B41C: b       0x7F07B478
    {
            goto label_7F07B478;
    }

label_7F07B420:
    ctx->pc = 0x7F07B420u;
    ctx->downcount -= 3;
    // 7F07B420: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07B424:
    ctx->pc = 0x7F07B424u;
    // 7F07B424: addi    r4, r31, 4616
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4616);

label_7F07B428:
    ctx->pc = 0x7F07B428u;
    // 7F07B428: bl      0x7F17D79C
    {
            ctx->lr = 0x7F07B42Cu;
            ctx->pc = 0x7F17D79Cu;
            return;
    }

label_7F07B42C:
    ctx->pc = 0x7F07B42Cu;
    ctx->downcount -= 3;
    // 7F07B42C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B430:
    ctx->pc = 0x7F07B430u;
    // 7F07B430: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B434:
    ctx->pc = 0x7F07B434u;
    // 7F07B434: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07B438u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07B438:
    ctx->pc = 0x7F07B438u;
    ctx->downcount -= 7;
    // 7F07B438: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B43C:
    ctx->pc = 0x7F07B43Cu;
    // 7F07B43C: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F07B440:
    ctx->pc = 0x7F07B440u;
    // 7F07B440: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F07B444:
    ctx->pc = 0x7F07B444u;
    // 7F07B444: addi    r6, r31, 4616
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4616);

label_7F07B448:
    ctx->pc = 0x7F07B448u;
    // 7F07B448: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F07B44C:
    ctx->pc = 0x7F07B44Cu;
    // 7F07B44C: addi    r4, r4, -32696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32696);

label_7F07B450:
    ctx->pc = 0x7F07B450u;
    // 7F07B450: bl      0x7F2136D0
    {
            ctx->lr = 0x7F07B454u;
            ctx->pc = 0x7F2136D0u;
            return;
    }

label_7F07B454:
    ctx->pc = 0x7F07B454u;
    ctx->downcount -= 3;
    // 7F07B454: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B458:
    ctx->pc = 0x7F07B458u;
    // 7F07B458: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B45C:
    ctx->pc = 0x7F07B45Cu;
    // 7F07B45C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07B460u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07B460:
    ctx->pc = 0x7F07B460u;
    ctx->downcount -= 1;
    // 7F07B460: b       0x7F07B478
    {
            goto label_7F07B478;
    }

label_7F07B464:
    ctx->pc = 0x7F07B464u;
    ctx->downcount -= 5;
    // 7F07B464: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07B468:
    ctx->pc = 0x7F07B468u;
    // 7F07B468: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B46C:
    ctx->pc = 0x7F07B46Cu;
    // 7F07B46C: stw     r3, 4612(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4612);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B470:
    ctx->pc = 0x7F07B470u;
    // 7F07B470: sth     r0, 4598(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4598);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B474:
    ctx->pc = 0x7F07B474u;
    // 7F07B474: sth     r0, 4596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4596);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07B478:
    ctx->pc = 0x7F07B478u;
    ctx->downcount -= 19;
    // 7F07B478: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F07B47C:
    ctx->pc = 0x7F07B47Cu;
    // 7F07B47C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B480:
    ctx->pc = 0x7F07B480u;
    // 7F07B480: stw     r0, 4684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B484:
    ctx->pc = 0x7F07B484u;
    // 7F07B484: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B488:
    ctx->pc = 0x7F07B488u;
    // 7F07B488: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B48C:
    ctx->pc = 0x7F07B48Cu;
    // 7F07B48C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B490:
    ctx->pc = 0x7F07B490u;
    // 7F07B490: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F07B494:
    ctx->pc = 0x7F07B494u;
    // 7F07B494: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B498:
    ctx->pc = 0x7F07B498u;
    ctx->downcount -= 17;
    // 7F07B498: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B49C:
    ctx->pc = 0x7F07B49Cu;
    // 7F07B49C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B4A0:
    ctx->pc = 0x7F07B4A0u;
    // 7F07B4A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B4A4:
    ctx->pc = 0x7F07B4A4u;
    // 7F07B4A4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B4A8:
    ctx->pc = 0x7F07B4A8u;
    // 7F07B4A8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B4AC:
    ctx->pc = 0x7F07B4ACu;
    // 7F07B4AC: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F07B4B0:
    ctx->pc = 0x7F07B4B0u;
    // 7F07B4B0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B4B4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B4B4:
    ctx->pc = 0x7F07B4B4u;
    ctx->downcount -= 2;
    // 7F07B4B4: cmplwi  r3, 0x0000
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

label_7F07B4B8:
    ctx->pc = 0x7F07B4B8u;
    // 7F07B4B8: bc    12, 2, 0x7F07B4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B4EC;
        }
    }

label_7F07B4BC:
    ctx->pc = 0x7F07B4BCu;
    ctx->downcount -= 2;
    // 7F07B4BC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F07B4C0:
    ctx->pc = 0x7F07B4C0u;
    // 7F07B4C0: addi    r30, r30, 4248
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4248);

label_7F07B4C4:
    ctx->downcount -= 1;
    // 7F07B4C4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B4C8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B4C8:
    ctx->downcount -= 2;
    // 7F07B4C8: cmplwi  r3, 0x0000
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

label_7F07B4CC:
    // 7F07B4CC: bc    12, 2, 0x7F07B504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B504;
        }
    }

label_7F07B4D0:
    ctx->downcount -= 2;
    // 7F07B4D0: cmpwi   r31, 5
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

label_7F07B4D4:
    // 7F07B4D4: bc    12, 2, 0x7F07B504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B504;
        }
    }

label_7F07B4D8:
    ctx->downcount -= 1;
    // 7F07B4D8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B4DCu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B4DC:
    ctx->pc = 0x7F07B4DCu;
    ctx->downcount -= 4;
    // 7F07B4DC: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B4E0:
    // 7F07B4E0: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F07B4E4:
    // 7F07B4E4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F07B4E8:
    // 7F07B4E8: b       0x7F07B4C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B4C4u;
                return;
            }
            goto label_7F07B4C4;
    }

label_7F07B4EC:
    ctx->pc = 0x7F07B4ECu;
    ctx->downcount -= 6;
    // 7F07B4EC: lis     r4, 43
    ctx->gpr[4] = ((u32)(s32)(43) << 16);

label_7F07B4F0:
    ctx->pc = 0x7F07B4F0u;
    // 7F07B4F0: lis     r3, 174
    ctx->gpr[3] = ((u32)(s32)(174) << 16);

label_7F07B4F4:
    ctx->pc = 0x7F07B4F4u;
    // 7F07B4F4: addi    r0, r4, -6801
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6801);

label_7F07B4F8:
    ctx->pc = 0x7F07B4F8u;
    // 7F07B4F8: stw     r0, 4248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B4FC:
    ctx->pc = 0x7F07B4FCu;
    // 7F07B4FC: addi    r0, r3, -9623
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9623);

label_7F07B500:
    ctx->pc = 0x7F07B500u;
    // 7F07B500: stw     r0, 4252(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B504:
    ctx->pc = 0x7F07B504u;
    ctx->downcount -= 16;
    // 7F07B504: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B508:
    ctx->pc = 0x7F07B508u;
    // 7F07B508: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B50C:
    ctx->pc = 0x7F07B50Cu;
    // 7F07B50C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B510:
    ctx->pc = 0x7F07B510u;
    // 7F07B510: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07B514:
    ctx->pc = 0x7F07B514u;
    // 7F07B514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B518:
    ctx->pc = 0x7F07B518u;
    ctx->downcount -= 22;
    // 7F07B518: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B51C:
    ctx->pc = 0x7F07B51Cu;
    // 7F07B51C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B520:
    ctx->pc = 0x7F07B520u;
    // 7F07B520: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07B524:
    ctx->pc = 0x7F07B524u;
    // 7F07B524: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B528:
    ctx->pc = 0x7F07B528u;
    // 7F07B528: addi    r6, r4, -7748
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-7748);

label_7F07B52C:
    ctx->pc = 0x7F07B52Cu;
    // 7F07B52C: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F07B530:
    ctx->pc = 0x7F07B530u;
    // 7F07B530: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07B534:
    ctx->pc = 0x7F07B534u;
    // 7F07B534: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B538:
    ctx->pc = 0x7F07B538u;
    // 7F07B538: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B53C:
    ctx->pc = 0x7F07B53Cu;
    // 7F07B53C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B540:
    ctx->pc = 0x7F07B540u;
    // 7F07B540: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F07B544:
    loop_7F07B544(ctx);
    if (ctx->pc == 0x7F07B55Cu) goto label_7F07B55C;
    return;
label_7F07B548:
    // 7F07B548: addi    r0, r3, 4396
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4396);

label_7F07B54C:
    // 7F07B54C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F07B550:
    // 7F07B550: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_7F07B554:
    ctx->pc = 0x7F07B554u;
    // 7F07B554: stwx    r5, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07B558:
    // 7F07B558: bc    16, 0, 0x7F07B544
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B544u;
                return;
            }
            goto label_7F07B544;
        }
    }

label_7F07B55C:
    ctx->pc = 0x7F07B55Cu;
    ctx->downcount -= 2;
    // 7F07B55C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F07B560:
    ctx->pc = 0x7F07B560u;
    // 7F07B560: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B564u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B564:
    ctx->pc = 0x7F07B564u;
    ctx->downcount -= 2;
    // 7F07B564: cmplwi  r3, 0x0000
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

label_7F07B568:
    ctx->pc = 0x7F07B568u;
    // 7F07B568: bc    12, 2, 0x7F07B59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B59C;
        }
    }

label_7F07B56C:
    ctx->pc = 0x7F07B56Cu;
    ctx->downcount -= 2;
    // 7F07B56C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F07B570:
    ctx->pc = 0x7F07B570u;
    // 7F07B570: addi    r30, r30, 4320
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4320);

label_7F07B574:
    ctx->downcount -= 1;
    // 7F07B574: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B578u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B578:
    ctx->downcount -= 2;
    // 7F07B578: cmplwi  r3, 0x0000
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

label_7F07B57C:
    // 7F07B57C: bc    12, 2, 0x7F07B59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B59C;
        }
    }

label_7F07B580:
    ctx->downcount -= 2;
    // 7F07B580: cmpwi   r31, 19
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

label_7F07B584:
    // 7F07B584: bc    12, 2, 0x7F07B59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B59C;
        }
    }

label_7F07B588:
    ctx->downcount -= 1;
    // 7F07B588: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B58Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B58C:
    ctx->pc = 0x7F07B58Cu;
    ctx->downcount -= 4;
    // 7F07B58C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B590:
    // 7F07B590: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F07B594:
    // 7F07B594: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F07B598:
    // 7F07B598: b       0x7F07B574
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B574u;
                return;
            }
            goto label_7F07B574;
    }

label_7F07B59C:
    ctx->pc = 0x7F07B59Cu;
    ctx->downcount -= 16;
    // 7F07B59C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B5A0:
    ctx->pc = 0x7F07B5A0u;
    // 7F07B5A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B5A4:
    ctx->pc = 0x7F07B5A4u;
    // 7F07B5A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B5A8:
    ctx->pc = 0x7F07B5A8u;
    // 7F07B5A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07B5AC:
    ctx->pc = 0x7F07B5ACu;
    // 7F07B5AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B5B0:
    ctx->pc = 0x7F07B5B0u;
    ctx->downcount -= 17;
    // 7F07B5B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B5B4:
    ctx->pc = 0x7F07B5B4u;
    // 7F07B5B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B5B8:
    ctx->pc = 0x7F07B5B8u;
    // 7F07B5B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B5BC:
    ctx->pc = 0x7F07B5BCu;
    // 7F07B5BC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B5C0:
    ctx->pc = 0x7F07B5C0u;
    // 7F07B5C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B5C4:
    ctx->pc = 0x7F07B5C4u;
    // 7F07B5C4: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F07B5C8:
    ctx->pc = 0x7F07B5C8u;
    // 7F07B5C8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B5CCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B5CC:
    ctx->pc = 0x7F07B5CCu;
    ctx->downcount -= 2;
    // 7F07B5CC: cmplwi  r3, 0x0000
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

label_7F07B5D0:
    ctx->pc = 0x7F07B5D0u;
    // 7F07B5D0: bc    12, 2, 0x7F07B604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B604;
        }
    }

label_7F07B5D4:
    ctx->pc = 0x7F07B5D4u;
    ctx->downcount -= 2;
    // 7F07B5D4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F07B5D8:
    ctx->pc = 0x7F07B5D8u;
    // 7F07B5D8: addi    r30, r30, 4472
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4472);

label_7F07B5DC:
    ctx->downcount -= 1;
    // 7F07B5DC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B5E0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B5E0:
    ctx->downcount -= 2;
    // 7F07B5E0: cmplwi  r3, 0x0000
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

label_7F07B5E4:
    // 7F07B5E4: bc    12, 2, 0x7F07B604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B604;
        }
    }

label_7F07B5E8:
    ctx->downcount -= 2;
    // 7F07B5E8: cmpwi   r31, 12
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B5EC:
    // 7F07B5EC: bc    12, 2, 0x7F07B604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B604;
        }
    }

label_7F07B5F0:
    ctx->downcount -= 1;
    // 7F07B5F0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B5F4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B5F4:
    ctx->pc = 0x7F07B5F4u;
    ctx->downcount -= 4;
    // 7F07B5F4: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B5F8:
    // 7F07B5F8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F07B5FC:
    // 7F07B5FC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F07B600:
    // 7F07B600: b       0x7F07B5DC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B5DCu;
                return;
            }
            goto label_7F07B5DC;
    }

label_7F07B604:
    ctx->pc = 0x7F07B604u;
    ctx->downcount -= 16;
    // 7F07B604: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B608:
    ctx->pc = 0x7F07B608u;
    // 7F07B608: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B60C:
    ctx->pc = 0x7F07B60Cu;
    // 7F07B60C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B610:
    ctx->pc = 0x7F07B610u;
    // 7F07B610: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07B614:
    ctx->pc = 0x7F07B614u;
    // 7F07B614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B618:
    ctx->pc = 0x7F07B618u;
    ctx->downcount -= 17;
    // 7F07B618: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B61C:
    ctx->pc = 0x7F07B61Cu;
    // 7F07B61C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B620:
    ctx->pc = 0x7F07B620u;
    // 7F07B620: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B624:
    ctx->pc = 0x7F07B624u;
    // 7F07B624: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B628:
    ctx->pc = 0x7F07B628u;
    // 7F07B628: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B62C:
    ctx->pc = 0x7F07B62Cu;
    // 7F07B62C: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F07B630:
    ctx->pc = 0x7F07B630u;
    // 7F07B630: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07B634u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07B634:
    ctx->pc = 0x7F07B634u;
    ctx->downcount -= 2;
    // 7F07B634: cmplwi  r3, 0x0000
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

label_7F07B638:
    ctx->pc = 0x7F07B638u;
    // 7F07B638: bc    12, 2, 0x7F07B66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B66C;
        }
    }

label_7F07B63C:
    ctx->pc = 0x7F07B63Cu;
    ctx->downcount -= 2;
    // 7F07B63C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F07B640:
    ctx->pc = 0x7F07B640u;
    // 7F07B640: addi    r30, r30, 4520
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4520);

label_7F07B644:
    ctx->downcount -= 1;
    // 7F07B644: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F07B648u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F07B648:
    ctx->downcount -= 2;
    // 7F07B648: cmplwi  r3, 0x0000
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

label_7F07B64C:
    // 7F07B64C: bc    12, 2, 0x7F07B66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B66C;
        }
    }

label_7F07B650:
    ctx->downcount -= 2;
    // 7F07B650: cmpwi   r31, 8
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B654:
    // 7F07B654: bc    12, 2, 0x7F07B66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07B66C;
        }
    }

label_7F07B658:
    ctx->downcount -= 1;
    // 7F07B658: bl      0x7F3C674C
    {
            ctx->lr = 0x7F07B65Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F07B65C:
    ctx->pc = 0x7F07B65Cu;
    ctx->downcount -= 4;
    // 7F07B65C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B660:
    // 7F07B660: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F07B664:
    // 7F07B664: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F07B668:
    // 7F07B668: b       0x7F07B644
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B644u;
                return;
            }
            goto label_7F07B644;
    }

label_7F07B66C:
    ctx->pc = 0x7F07B66Cu;
    ctx->downcount -= 16;
    // 7F07B66C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B670:
    ctx->pc = 0x7F07B670u;
    // 7F07B670: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B674:
    ctx->pc = 0x7F07B674u;
    // 7F07B674: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B678:
    ctx->pc = 0x7F07B678u;
    // 7F07B678: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07B67C:
    ctx->pc = 0x7F07B67Cu;
    // 7F07B67C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B680:
    ctx->pc = 0x7F07B680u;
    ctx->downcount -= 18;
    // 7F07B680: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B684:
    ctx->pc = 0x7F07B684u;
    // 7F07B684: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B688:
    ctx->pc = 0x7F07B688u;
    // 7F07B688: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B68C:
    ctx->pc = 0x7F07B68Cu;
    // 7F07B68C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B690:
    ctx->pc = 0x7F07B690u;
    // 7F07B690: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B694:
    ctx->pc = 0x7F07B694u;
    // 7F07B694: addi    r29, r30, 48
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(48);

label_7F07B698:
    ctx->pc = 0x7F07B698u;
    // 7F07B698: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07B69C:
    ctx->pc = 0x7F07B69Cu;
    // 7F07B69C: bl      0x7F07BCB8
    {
            ctx->lr = 0x7F07B6A0u;
            goto label_7F07BCB8;
    }

label_7F07B6A0:
    ctx->pc = 0x7F07B6A0u;
    ctx->downcount -= 9;
    // 7F07B6A0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07B6A4:
    ctx->pc = 0x7F07B6A4u;
    // 7F07B6A4: addi    r31, r30, 448
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(448);

label_7F07B6A8:
    ctx->pc = 0x7F07B6A8u;
    // 7F07B6A8: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F07B6AC:
    ctx->pc = 0x7F07B6ACu;
    // 7F07B6AC: stw     r31, 28004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28004);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07B6B0:
    ctx->pc = 0x7F07B6B0u;
    // 7F07B6B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B6B4:
    ctx->pc = 0x7F07B6B4u;
    // 7F07B6B4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07B6B8:
    ctx->pc = 0x7F07B6B8u;
    // 7F07B6B8: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F07B6BC:
    ctx->pc = 0x7F07B6BCu;
    // 7F07B6BC: addi    r6, r30, 844
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(844);

label_7F07B6C0:
    ctx->pc = 0x7F07B6C0u;
    // 7F07B6C0: bl      0x7F07BD6C
    {
            ctx->lr = 0x7F07B6C4u;
            goto label_7F07BD6C;
    }

label_7F07B6C4:
    ctx->pc = 0x7F07B6C4u;
    ctx->downcount -= 6;
    // 7F07B6C4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B6C8:
    ctx->pc = 0x7F07B6C8u;
    // 7F07B6C8: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F07B6CC:
    ctx->pc = 0x7F07B6CCu;
    // 7F07B6CC: li      r5, 87
    ctx->gpr[5] = (u32)(s32)(87);

label_7F07B6D0:
    ctx->pc = 0x7F07B6D0u;
    // 7F07B6D0: li      r6, 87
    ctx->gpr[6] = (u32)(s32)(87);

label_7F07B6D4:
    ctx->pc = 0x7F07B6D4u;
    // 7F07B6D4: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F07B6D8:
    ctx->pc = 0x7F07B6D8u;
    // 7F07B6D8: bl      0x7F306788
    {
            ctx->lr = 0x7F07B6DCu;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F07B6DC:
    ctx->pc = 0x7F07B6DCu;
    ctx->downcount -= 3;
    // 7F07B6DC: cmplwi  r3, 0x0000
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

label_7F07B6E0:
    ctx->pc = 0x7F07B6E0u;
    // 7F07B6E0: stw     r3, 4552(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4552);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B6E4:
    ctx->pc = 0x7F07B6E4u;
    // 7F07B6E4: bc    4, 2, 0x7F07B6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B6F0;
        }
    }

label_7F07B6E8:
    ctx->pc = 0x7F07B6E8u;
    ctx->downcount -= 2;
    // 7F07B6E8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07B6EC:
    ctx->pc = 0x7F07B6ECu;
    // 7F07B6EC: b       0x7F07B918
    {
            goto label_7F07B918;
    }

label_7F07B6F0:
    ctx->pc = 0x7F07B6F0u;
    ctx->downcount -= 6;
    // 7F07B6F0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B6F4:
    ctx->pc = 0x7F07B6F4u;
    // 7F07B6F4: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F07B6F8:
    ctx->pc = 0x7F07B6F8u;
    // 7F07B6F8: li      r5, 87
    ctx->gpr[5] = (u32)(s32)(87);

label_7F07B6FC:
    ctx->pc = 0x7F07B6FCu;
    // 7F07B6FC: li      r6, 87
    ctx->gpr[6] = (u32)(s32)(87);

label_7F07B700:
    ctx->pc = 0x7F07B700u;
    // 7F07B700: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F07B704:
    ctx->pc = 0x7F07B704u;
    // 7F07B704: bl      0x7F306788
    {
            ctx->lr = 0x7F07B708u;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F07B708:
    ctx->pc = 0x7F07B708u;
    ctx->downcount -= 3;
    // 7F07B708: cmplwi  r3, 0x0000
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

label_7F07B70C:
    ctx->pc = 0x7F07B70Cu;
    // 7F07B70C: stw     r3, 4556(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B710:
    ctx->pc = 0x7F07B710u;
    // 7F07B710: bc    4, 2, 0x7F07B71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B71C;
        }
    }

label_7F07B714:
    ctx->pc = 0x7F07B714u;
    ctx->downcount -= 2;
    // 7F07B714: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07B718:
    ctx->pc = 0x7F07B718u;
    // 7F07B718: b       0x7F07B918
    {
            goto label_7F07B918;
    }

label_7F07B71C:
    ctx->pc = 0x7F07B71Cu;
    ctx->downcount -= 15;
    // 7F07B71C: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B720:
    ctx->pc = 0x7F07B720u;
    // 7F07B720: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07B724:
    ctx->pc = 0x7F07B724u;
    // 7F07B724: addi    r4, r3, -7872
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7872);

label_7F07B728:
    ctx->pc = 0x7F07B728u;
    // 7F07B728: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07B728u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07B72C:
    ctx->pc = 0x7F07B72Cu;
    // 7F07B72C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07B730:
    ctx->pc = 0x7F07B730u;
    // 7F07B730: lwz     r5, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B734:
    ctx->pc = 0x7F07B734u;
    // 7F07B734: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B738:
    ctx->pc = 0x7F07B738u;
    // 7F07B738: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07B738u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07B73C:
    ctx->pc = 0x7F07B73Cu;
    // 7F07B73C: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B740:
    ctx->pc = 0x7F07B740u;
    // 7F07B740: lwz     r5, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B744:
    ctx->pc = 0x7F07B744u;
    // 7F07B744: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07B744u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07B748:
    ctx->pc = 0x7F07B748u;
    // 7F07B748: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B74C:
    ctx->pc = 0x7F07B74Cu;
    // 7F07B74C: lwz     r5, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07B750:
    ctx->pc = 0x7F07B750u;
    // 7F07B750: stfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07B750u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07B754:
    ctx->pc = 0x7F07B754u;
    // 7F07B754: bl      0x7F2D2410
    {
            ctx->lr = 0x7F07B758u;
            ctx->pc = 0x7F2D2410u;
            return;
    }

label_7F07B758:
    ctx->pc = 0x7F07B758u;
    ctx->downcount -= 3;
    // 7F07B758: stw     r3, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B75C:
    ctx->pc = 0x7F07B75Cu;
    // 7F07B75C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B760:
    ctx->pc = 0x7F07B760u;
    // 7F07B760: bl      0x7F07B5B0
    {
            ctx->lr = 0x7F07B764u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B5B0u;
                return;
            }
            goto label_7F07B5B0;
    }

label_7F07B764:
    ctx->pc = 0x7F07B764u;
    ctx->downcount -= 2;
    // 7F07B764: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B768:
    ctx->pc = 0x7F07B768u;
    // 7F07B768: bl      0x7F07B000
    {
            ctx->lr = 0x7F07B76Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B000u;
                return;
            }
            goto label_7F07B000;
    }

label_7F07B76C:
    ctx->pc = 0x7F07B76Cu;
    ctx->downcount -= 2;
    // 7F07B76C: cmpwi   r3, 0
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

label_7F07B770:
    ctx->pc = 0x7F07B770u;
    // 7F07B770: bc    4, 0, 0x7F07B77C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B77C;
        }
    }

label_7F07B774:
    ctx->pc = 0x7F07B774u;
    ctx->downcount -= 2;
    // 7F07B774: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07B778:
    ctx->pc = 0x7F07B778u;
    // 7F07B778: b       0x7F07B918
    {
            goto label_7F07B918;
    }

label_7F07B77C:
    ctx->pc = 0x7F07B77Cu;
    ctx->downcount -= 2;
    // 7F07B77C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B780:
    ctx->pc = 0x7F07B780u;
    // 7F07B780: bl      0x7F07AF34
    {
            ctx->lr = 0x7F07B784u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07AF34u;
                return;
            }
            goto label_7F07AF34;
    }

label_7F07B784:
    ctx->pc = 0x7F07B784u;
    ctx->downcount -= 2;
    // 7F07B784: cmpwi   r3, 0
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

label_7F07B788:
    ctx->pc = 0x7F07B788u;
    // 7F07B788: bc    4, 0, 0x7F07B794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B794;
        }
    }

label_7F07B78C:
    ctx->pc = 0x7F07B78Cu;
    ctx->downcount -= 2;
    // 7F07B78C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F07B790:
    ctx->pc = 0x7F07B790u;
    // 7F07B790: b       0x7F07B918
    {
            goto label_7F07B918;
    }

label_7F07B794:
    ctx->pc = 0x7F07B794u;
    ctx->downcount -= 2;
    // 7F07B794: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B798:
    ctx->pc = 0x7F07B798u;
    // 7F07B798: bl      0x7F07BE28
    {
            ctx->lr = 0x7F07B79Cu;
            goto label_7F07BE28;
    }

label_7F07B79C:
    ctx->pc = 0x7F07B79Cu;
    ctx->downcount -= 2;
    // 7F07B79C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B7A0:
    ctx->pc = 0x7F07B7A0u;
    // 7F07B7A0: bl      0x7F07BEBC
    {
            ctx->lr = 0x7F07B7A4u;
            goto label_7F07BEBC;
    }

label_7F07B7A4:
    ctx->pc = 0x7F07B7A4u;
    ctx->downcount -= 4;
    // 7F07B7A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B7A8:
    ctx->pc = 0x7F07B7A8u;
    // 7F07B7A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B7AC:
    ctx->pc = 0x7F07B7ACu;
    // 7F07B7AC: stw     r0, 4316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B7B0:
    ctx->pc = 0x7F07B7B0u;
    // 7F07B7B0: bl      0x7F07B518
    {
            ctx->lr = 0x7F07B7B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B518u;
                return;
            }
            goto label_7F07B518;
    }

label_7F07B7B4:
    ctx->pc = 0x7F07B7B4u;
    ctx->downcount -= 2;
    // 7F07B7B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B7B8:
    ctx->pc = 0x7F07B7B8u;
    // 7F07B7B8: bl      0x7F07B618
    {
            ctx->lr = 0x7F07B7BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B618u;
                return;
            }
            goto label_7F07B618;
    }

label_7F07B7BC:
    ctx->pc = 0x7F07B7BCu;
    ctx->downcount -= 2;
    // 7F07B7BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B7C0:
    ctx->pc = 0x7F07B7C0u;
    // 7F07B7C0: bl      0x7F07B498
    {
            ctx->lr = 0x7F07B7C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B498u;
                return;
            }
            goto label_7F07B498;
    }

label_7F07B7C4:
    ctx->pc = 0x7F07B7C4u;
    ctx->downcount -= 6;
    // 7F07B7C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B7C8:
    ctx->pc = 0x7F07B7C8u;
    // 7F07B7C8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07B7CC:
    ctx->pc = 0x7F07B7CCu;
    // 7F07B7CC: stw     r0, 4620(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4620);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B7D0:
    ctx->pc = 0x7F07B7D0u;
    // 7F07B7D0: stw     r0, 4624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B7D4:
    ctx->pc = 0x7F07B7D4u;
    // 7F07B7D4: stw     r0, 27976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B7D8:
    ctx->pc = 0x7F07B7D8u;
    // 7F07B7D8: bl      0x7F052614
    {
            ctx->lr = 0x7F07B7DCu;
            ctx->pc = 0x7F052614u;
            return;
    }

label_7F07B7DC:
    ctx->pc = 0x7F07B7DCu;
    ctx->downcount -= 2;
    // 7F07B7DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B7E0:
    ctx->pc = 0x7F07B7E0u;
    // 7F07B7E0: bl      0x7F07CCC4
    {
            ctx->lr = 0x7F07B7E4u;
            ctx->pc = 0x7F07CCC4u;
            return;
    }

label_7F07B7E4:
    ctx->pc = 0x7F07B7E4u;
    ctx->downcount -= 6;
    // 7F07B7E4: stw     r3, 4572(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4572);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B7E8:
    ctx->pc = 0x7F07B7E8u;
    // 7F07B7E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B7EC:
    ctx->pc = 0x7F07B7ECu;
    // 7F07B7EC: stw     r0, 4640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B7F0:
    ctx->pc = 0x7F07B7F0u;
    // 7F07B7F0: lhz     r0, 3968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07B7F4:
    ctx->pc = 0x7F07B7F4u;
    // 7F07B7F4: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07B7F8:
    ctx->pc = 0x7F07B7F8u;
    // 7F07B7F8: bc    4, 2, 0x7F07B860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07B860;
        }
    }

label_7F07B7FC:
    ctx->pc = 0x7F07B7FCu;
    ctx->downcount -= 18;
    // 7F07B7FC: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F07B800:
    ctx->pc = 0x7F07B800u;
    // 7F07B800: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07B804:
    ctx->pc = 0x7F07B804u;
    // 7F07B804: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F07B808:
    ctx->pc = 0x7F07B808u;
    // 7F07B808: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F07B80C:
    ctx->pc = 0x7F07B80Cu;
    // 7F07B80C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07B810:
    ctx->pc = 0x7F07B810u;
    // 7F07B810: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B814:
    ctx->pc = 0x7F07B814u;
    // 7F07B814: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F07B818:
    ctx->pc = 0x7F07B818u;
    // 7F07B818: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F07B81C:
    ctx->pc = 0x7F07B81Cu;
    // 7F07B81C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F07B820:
    ctx->pc = 0x7F07B820u;
    // 7F07B820: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F07B824:
    ctx->pc = 0x7F07B824u;
    // 7F07B824: lfs     f1, -7708(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07B824u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07B828:
    ctx->pc = 0x7F07B828u;
    // 7F07B828: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F07B82C:
    ctx->pc = 0x7F07B82Cu;
    // 7F07B82C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B830:
    ctx->pc = 0x7F07B830u;
    // 7F07B830: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F07B834:
    ctx->pc = 0x7F07B834u;
    // 7F07B834: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F07B838:
    ctx->pc = 0x7F07B838u;
    // 7F07B838: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07B83C:
    ctx->pc = 0x7F07B83Cu;
    // 7F07B83C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F07B840:
    ctx->pc = 0x7F07B840u;
    // 7F07B840: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F07B844u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F07B844:
    ctx->pc = 0x7F07B844u;
    ctx->downcount -= 3;
    // 7F07B844: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B848:
    ctx->pc = 0x7F07B848u;
    // 7F07B848: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B84C:
    ctx->pc = 0x7F07B84Cu;
    // 7F07B84C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07B850u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07B850:
    ctx->pc = 0x7F07B850u;
    ctx->downcount -= 3;
    // 7F07B850: addi    r3, r30, 4700
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4700);

label_7F07B854:
    ctx->pc = 0x7F07B854u;
    // 7F07B854: addi    r4, r30, 4704
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4704);

label_7F07B858:
    ctx->pc = 0x7F07B858u;
    // 7F07B858: bl      0x7F07B92C
    {
            ctx->lr = 0x7F07B85Cu;
            goto label_7F07B92C;
    }

label_7F07B85C:
    ctx->pc = 0x7F07B85Cu;
    ctx->downcount -= 1;
    // 7F07B85C: b       0x7F07B8B4
    {
            goto label_7F07B8B4;
    }

label_7F07B860:
    ctx->pc = 0x7F07B860u;
    ctx->downcount -= 18;
    // 7F07B860: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F07B864:
    ctx->pc = 0x7F07B864u;
    // 7F07B864: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07B868:
    ctx->pc = 0x7F07B868u;
    // 7F07B868: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F07B86C:
    ctx->pc = 0x7F07B86Cu;
    // 7F07B86C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F07B870:
    ctx->pc = 0x7F07B870u;
    // 7F07B870: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07B874:
    ctx->pc = 0x7F07B874u;
    // 7F07B874: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B878:
    ctx->pc = 0x7F07B878u;
    // 7F07B878: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F07B87C:
    ctx->pc = 0x7F07B87Cu;
    // 7F07B87C: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F07B880:
    ctx->pc = 0x7F07B880u;
    // 7F07B880: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F07B884:
    ctx->pc = 0x7F07B884u;
    // 7F07B884: lis     r4, 122
    ctx->gpr[4] = ((u32)(s32)(122) << 16);

label_7F07B888:
    ctx->pc = 0x7F07B888u;
    // 7F07B888: lfs     f1, -7708(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F07B888u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07B88C:
    ctx->pc = 0x7F07B88Cu;
    // 7F07B88C: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F07B890:
    ctx->pc = 0x7F07B890u;
    // 7F07B890: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07B894:
    ctx->pc = 0x7F07B894u;
    // 7F07B894: addi    r4, r4, -2035
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2035);

label_7F07B898:
    ctx->pc = 0x7F07B898u;
    // 7F07B898: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F07B89C:
    ctx->pc = 0x7F07B89Cu;
    // 7F07B89C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07B8A0:
    ctx->pc = 0x7F07B8A0u;
    // 7F07B8A0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F07B8A4:
    ctx->pc = 0x7F07B8A4u;
    // 7F07B8A4: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F07B8A8u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F07B8A8:
    ctx->pc = 0x7F07B8A8u;
    ctx->downcount -= 3;
    // 7F07B8A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B8AC:
    ctx->pc = 0x7F07B8ACu;
    // 7F07B8AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B8B0:
    ctx->pc = 0x7F07B8B0u;
    // 7F07B8B0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07B8B4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07B8B4:
    ctx->pc = 0x7F07B8B4u;
    ctx->downcount -= 7;
    // 7F07B8B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07B8B8:
    ctx->pc = 0x7F07B8B8u;
    // 7F07B8B8: addi    r4, r30, 1360
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1360);

label_7F07B8BC:
    ctx->pc = 0x7F07B8BCu;
    // 7F07B8BC: stw     r0, 4632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B8C0:
    ctx->pc = 0x7F07B8C0u;
    // 7F07B8C0: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F07B8C4:
    ctx->pc = 0x7F07B8C4u;
    // 7F07B8C4: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B8C8:
    ctx->pc = 0x7F07B8C8u;
    // 7F07B8C8: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F07B8CC:
    ctx->pc = 0x7F07B8CCu;
    // 7F07B8CC: bl      0x7F22DD68
    {
            ctx->lr = 0x7F07B8D0u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F07B8D0:
    ctx->pc = 0x7F07B8D0u;
    ctx->downcount -= 4;
    // 7F07B8D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B8D4:
    ctx->pc = 0x7F07B8D4u;
    // 7F07B8D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B8D8:
    ctx->pc = 0x7F07B8D8u;
    // 7F07B8D8: stw     r4, 4636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4636);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F07B8DC:
    ctx->pc = 0x7F07B8DCu;
    // 7F07B8DC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F07B8E0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F07B8E0:
    ctx->pc = 0x7F07B8E0u;
    ctx->downcount -= 2;
    // 7F07B8E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07B8E4:
    ctx->pc = 0x7F07B8E4u;
    // 7F07B8E4: bl      0x7F07CE60
    {
            ctx->lr = 0x7F07B8E8u;
            ctx->pc = 0x7F07CE60u;
            return;
    }

label_7F07B8E8:
    ctx->pc = 0x7F07B8E8u;
    ctx->downcount -= 10;
    // 7F07B8E8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07B8EC:
    ctx->pc = 0x7F07B8ECu;
    // 7F07B8EC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F07B8F0:
    ctx->pc = 0x7F07B8F0u;
    // 7F07B8F0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B8F4:
    ctx->pc = 0x7F07B8F4u;
    // 7F07B8F4: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07B8F8:
    ctx->pc = 0x7F07B8F8u;
    // 7F07B8F8: subfic  r0, r0, 60
    {
        u64 res = (u64)(u32)(s32)(60) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F07B8FC:
    ctx->pc = 0x7F07B8FCu;
    // 7F07B8FC: mulli   r0, r0, 6
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)6);

label_7F07B900:
    ctx->pc = 0x7F07B900u;
    // 7F07B900: stw     r0, 4656(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B904:
    ctx->pc = 0x7F07B904u;
    // 7F07B904: bl      0x7F3CA838
    {
            ctx->lr = 0x7F07B908u;
            ctx->pc = 0x7F3CA838u;
            return;
    }

label_7F07B908:
    ctx->pc = 0x7F07B908u;
    ctx->downcount -= 3;
    // 7F07B908: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B90C:
    ctx->pc = 0x7F07B90Cu;
    // 7F07B90C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07B910:
    ctx->pc = 0x7F07B910u;
    // 7F07B910: bl      0x7F3CA8C4
    {
            ctx->lr = 0x7F07B914u;
            ctx->pc = 0x7F3CA8C4u;
            return;
    }

label_7F07B914:
    ctx->pc = 0x7F07B914u;
    ctx->downcount -= 1;
    // 7F07B914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B918:
    ctx->pc = 0x7F07B918u;
    ctx->downcount -= 16;
    // 7F07B918: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07B91C:
    ctx->pc = 0x7F07B91Cu;
    // 7F07B91C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B920:
    ctx->pc = 0x7F07B920u;
    // 7F07B920: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07B924:
    ctx->pc = 0x7F07B924u;
    // 7F07B924: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07B928:
    ctx->pc = 0x7F07B928u;
    // 7F07B928: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07B92C:
    ctx->pc = 0x7F07B92Cu;
    ctx->downcount -= 22;
    // 7F07B92C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07B930:
    ctx->pc = 0x7F07B930u;
    // 7F07B930: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07B934:
    ctx->pc = 0x7F07B934u;
    // 7F07B934: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F07B938:
    ctx->pc = 0x7F07B938u;
    // 7F07B938: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07B93C:
    ctx->pc = 0x7F07B93Cu;
    // 7F07B93C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07B940:
    ctx->pc = 0x7F07B940u;
    // 7F07B940: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07B944:
    ctx->pc = 0x7F07B944u;
    // 7F07B944: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B948:
    ctx->pc = 0x7F07B948u;
    // 7F07B948: li      r3, 720
    ctx->gpr[3] = (u32)(s32)(720);

label_7F07B94C:
    ctx->pc = 0x7F07B94Cu;
    // 7F07B94C: lwz     r4, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07B950:
    ctx->pc = 0x7F07B950u;
    // 7F07B950: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07B954:
    ctx->pc = 0x7F07B954u;
    // 7F07B954: addi    r4, r4, 110
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(110);

label_7F07B958:
    ctx->pc = 0x7F07B958u;
    // 7F07B958: bl      0x7F19CE98
    {
            ctx->lr = 0x7F07B95Cu;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F07B95C:
    ctx->pc = 0x7F07B95Cu;
    ctx->downcount -= 3;
    // 7F07B95C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07B960:
    ctx->pc = 0x7F07B960u;
    // 7F07B960: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07B964:
    ctx->pc = 0x7F07B964u;
    // 7F07B964: bl      0x7F19C738
    {
            ctx->lr = 0x7F07B968u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F07B968:
    ctx->pc = 0x7F07B968u;
    ctx->downcount -= 4;
    // 7F07B968: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F07B96C:
    ctx->pc = 0x7F07B96Cu;
    // 7F07B96C: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F07B970:
    ctx->pc = 0x7F07B970u;
    // 7F07B970: cmplwi  r0, 0x0007
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

label_7F07B974:
    ctx->pc = 0x7F07B974u;
    // 7F07B974: bc    12, 1, 0x7F07BAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07BAF0;
        }
    }

label_7F07B978:
    ctx->pc = 0x7F07B978u;
    ctx->downcount -= 7;
    // 7F07B978: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F07B97C:
    ctx->pc = 0x7F07B97Cu;
    // 7F07B97C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F07B980:
    ctx->pc = 0x7F07B980u;
    // 7F07B980: addi    r3, r3, 21148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21148);

label_7F07B984:
    ctx->pc = 0x7F07B984u;
    // 7F07B984: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07B988:
    ctx->pc = 0x7F07B988u;
    // 7F07B988: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F07B98C:
    ctx->pc = 0x7F07B98Cu;
    // 7F07B98C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F07B990:
    ctx->pc = 0x7F07B990u;
    ctx->downcount -= 4;
    // 7F07B990: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07B994:
    ctx->pc = 0x7F07B994u;
    // 7F07B994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07B998:
    ctx->pc = 0x7F07B998u;
    // 7F07B998: addi    r3, r3, 25259
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25259);

label_7F07B99C:
    ctx->pc = 0x7F07B99Cu;
    // 7F07B99C: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07B9A0u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07B9A0:
    ctx->pc = 0x7F07B9A0u;
    ctx->downcount -= 7;
    // 7F07B9A0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B9A4:
    ctx->pc = 0x7F07B9A4u;
    // 7F07B9A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B9A8:
    ctx->pc = 0x7F07B9A8u;
    // 7F07B9A8: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F07B9AC:
    ctx->pc = 0x7F07B9ACu;
    // 7F07B9AC: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F07B9B0:
    ctx->pc = 0x7F07B9B0u;
    // 7F07B9B0: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07B9B4:
    ctx->pc = 0x7F07B9B4u;
    // 7F07B9B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07B9B8:
    ctx->pc = 0x7F07B9B8u;
    // 7F07B9B8: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07B9BCu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07B9BC:
    ctx->pc = 0x7F07B9BCu;
    ctx->downcount -= 1;
    // 7F07B9BC: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07B9C0:
    ctx->pc = 0x7F07B9C0u;
    ctx->downcount -= 5;
    // 7F07B9C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B9C4:
    ctx->pc = 0x7F07B9C4u;
    // 7F07B9C4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F07B9C8:
    ctx->pc = 0x7F07B9C8u;
    // 7F07B9C8: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07B9CC:
    ctx->pc = 0x7F07B9CCu;
    // 7F07B9CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07B9D0:
    ctx->pc = 0x7F07B9D0u;
    // 7F07B9D0: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07B9D4u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07B9D4:
    ctx->pc = 0x7F07B9D4u;
    ctx->downcount -= 4;
    // 7F07B9D4: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07B9D8:
    ctx->pc = 0x7F07B9D8u;
    // 7F07B9D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07B9DC:
    ctx->pc = 0x7F07B9DCu;
    // 7F07B9DC: addi    r3, r3, 25259
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25259);

label_7F07B9E0:
    ctx->pc = 0x7F07B9E0u;
    // 7F07B9E0: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07B9E4u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07B9E4:
    ctx->pc = 0x7F07B9E4u;
    ctx->downcount -= 2;
    // 7F07B9E4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07B9E8:
    ctx->pc = 0x7F07B9E8u;
    // 7F07B9E8: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07B9EC:
    ctx->pc = 0x7F07B9ECu;
    ctx->downcount -= 5;
    // 7F07B9EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07B9F0:
    ctx->pc = 0x7F07B9F0u;
    // 7F07B9F0: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F07B9F4:
    ctx->pc = 0x7F07B9F4u;
    // 7F07B9F4: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07B9F8:
    ctx->pc = 0x7F07B9F8u;
    // 7F07B9F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07B9FC:
    ctx->pc = 0x7F07B9FCu;
    // 7F07B9FC: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BA00u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BA00:
    ctx->pc = 0x7F07BA00u;
    ctx->downcount -= 4;
    // 7F07BA00: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BA04:
    ctx->pc = 0x7F07BA04u;
    // 7F07BA04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BA08:
    ctx->pc = 0x7F07BA08u;
    // 7F07BA08: addi    r3, r3, 25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25260);

label_7F07BA0C:
    ctx->pc = 0x7F07BA0Cu;
    // 7F07BA0C: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BA10u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BA10:
    ctx->pc = 0x7F07BA10u;
    ctx->downcount -= 2;
    // 7F07BA10: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BA14:
    ctx->pc = 0x7F07BA14u;
    // 7F07BA14: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07BA18:
    ctx->pc = 0x7F07BA18u;
    ctx->downcount -= 5;
    // 7F07BA18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BA1C:
    ctx->pc = 0x7F07BA1Cu;
    // 7F07BA1C: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_7F07BA20:
    ctx->pc = 0x7F07BA20u;
    // 7F07BA20: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07BA24:
    ctx->pc = 0x7F07BA24u;
    // 7F07BA24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BA28:
    ctx->pc = 0x7F07BA28u;
    // 7F07BA28: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BA2Cu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BA2C:
    ctx->pc = 0x7F07BA2Cu;
    ctx->downcount -= 4;
    // 7F07BA2C: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BA30:
    ctx->pc = 0x7F07BA30u;
    // 7F07BA30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BA34:
    ctx->pc = 0x7F07BA34u;
    // 7F07BA34: addi    r3, r3, 25261
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25261);

label_7F07BA38:
    ctx->pc = 0x7F07BA38u;
    // 7F07BA38: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BA3Cu;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BA3C:
    ctx->pc = 0x7F07BA3Cu;
    ctx->downcount -= 2;
    // 7F07BA3C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BA40:
    ctx->pc = 0x7F07BA40u;
    // 7F07BA40: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07BA44:
    ctx->pc = 0x7F07BA44u;
    ctx->downcount -= 5;
    // 7F07BA44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BA48:
    ctx->pc = 0x7F07BA48u;
    // 7F07BA48: li      r4, 95
    ctx->gpr[4] = (u32)(s32)(95);

label_7F07BA4C:
    ctx->pc = 0x7F07BA4Cu;
    // 7F07BA4C: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07BA50:
    ctx->pc = 0x7F07BA50u;
    // 7F07BA50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BA54:
    ctx->pc = 0x7F07BA54u;
    // 7F07BA54: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BA58u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BA58:
    ctx->pc = 0x7F07BA58u;
    ctx->downcount -= 4;
    // 7F07BA58: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BA5C:
    ctx->pc = 0x7F07BA5Cu;
    // 7F07BA5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BA60:
    ctx->pc = 0x7F07BA60u;
    // 7F07BA60: addi    r3, r3, 25263
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25263);

label_7F07BA64:
    ctx->pc = 0x7F07BA64u;
    // 7F07BA64: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BA68u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BA68:
    ctx->pc = 0x7F07BA68u;
    ctx->downcount -= 2;
    // 7F07BA68: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BA6C:
    ctx->pc = 0x7F07BA6Cu;
    // 7F07BA6C: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07BA70:
    ctx->pc = 0x7F07BA70u;
    ctx->downcount -= 5;
    // 7F07BA70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BA74:
    ctx->pc = 0x7F07BA74u;
    // 7F07BA74: li      r4, 35
    ctx->gpr[4] = (u32)(s32)(35);

label_7F07BA78:
    ctx->pc = 0x7F07BA78u;
    // 7F07BA78: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07BA7C:
    ctx->pc = 0x7F07BA7Cu;
    // 7F07BA7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BA80:
    ctx->pc = 0x7F07BA80u;
    // 7F07BA80: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BA84u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BA84:
    ctx->pc = 0x7F07BA84u;
    ctx->downcount -= 4;
    // 7F07BA84: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BA88:
    ctx->pc = 0x7F07BA88u;
    // 7F07BA88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BA8C:
    ctx->pc = 0x7F07BA8Cu;
    // 7F07BA8C: addi    r3, r3, 25273
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25273);

label_7F07BA90:
    ctx->pc = 0x7F07BA90u;
    // 7F07BA90: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BA94u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BA94:
    ctx->pc = 0x7F07BA94u;
    ctx->downcount -= 2;
    // 7F07BA94: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BA98:
    ctx->pc = 0x7F07BA98u;
    // 7F07BA98: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07BA9C:
    ctx->pc = 0x7F07BA9Cu;
    ctx->downcount -= 5;
    // 7F07BA9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BAA0:
    ctx->pc = 0x7F07BAA0u;
    // 7F07BAA0: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F07BAA4:
    ctx->pc = 0x7F07BAA4u;
    // 7F07BAA4: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07BAA8:
    ctx->pc = 0x7F07BAA8u;
    // 7F07BAA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BAAC:
    ctx->pc = 0x7F07BAACu;
    // 7F07BAAC: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BAB0u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BAB0:
    ctx->pc = 0x7F07BAB0u;
    ctx->downcount -= 4;
    // 7F07BAB0: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BAB4:
    ctx->pc = 0x7F07BAB4u;
    // 7F07BAB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BAB8:
    ctx->pc = 0x7F07BAB8u;
    // 7F07BAB8: addi    r3, r3, 25259
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25259);

label_7F07BABC:
    ctx->pc = 0x7F07BABCu;
    // 7F07BABC: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BAC0u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BAC0:
    ctx->pc = 0x7F07BAC0u;
    ctx->downcount -= 2;
    // 7F07BAC0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BAC4:
    ctx->pc = 0x7F07BAC4u;
    // 7F07BAC4: b       0x7F07BAF0
    {
            goto label_7F07BAF0;
    }

label_7F07BAC8:
    ctx->pc = 0x7F07BAC8u;
    ctx->downcount -= 5;
    // 7F07BAC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BACC:
    ctx->pc = 0x7F07BACCu;
    // 7F07BACC: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F07BAD0:
    ctx->pc = 0x7F07BAD0u;
    // 7F07BAD0: li      r5, 350
    ctx->gpr[5] = (u32)(s32)(350);

label_7F07BAD4:
    ctx->pc = 0x7F07BAD4u;
    // 7F07BAD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BAD8:
    ctx->pc = 0x7F07BAD8u;
    // 7F07BAD8: bl      0x7F0B9990
    {
            ctx->lr = 0x7F07BADCu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F07BADC:
    ctx->pc = 0x7F07BADCu;
    ctx->downcount -= 4;
    // 7F07BADC: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F07BAE0:
    ctx->pc = 0x7F07BAE0u;
    // 7F07BAE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BAE4:
    ctx->pc = 0x7F07BAE4u;
    // 7F07BAE4: addi    r3, r3, 25264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25264);

label_7F07BAE8:
    ctx->pc = 0x7F07BAE8u;
    // 7F07BAE8: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F07BAECu;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F07BAEC:
    ctx->pc = 0x7F07BAECu;
    ctx->downcount -= 1;
    // 7F07BAEC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BAF0:
    ctx->pc = 0x7F07BAF0u;
    ctx->downcount -= 11;
    // 7F07BAF0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F07BAF4:
    ctx->pc = 0x7F07BAF4u;
    // 7F07BAF4: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07BAF8:
    ctx->pc = 0x7F07BAF8u;
    // 7F07BAF8: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F07BAFC:
    ctx->pc = 0x7F07BAFCu;
    // 7F07BAFC: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07BB00:
    ctx->pc = 0x7F07BB00u;
    // 7F07BB00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BB04:
    ctx->pc = 0x7F07BB04u;
    // 7F07BB04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07BB08:
    ctx->pc = 0x7F07BB08u;
    // 7F07BB08: li      r6, 720
    ctx->gpr[6] = (u32)(s32)(720);

label_7F07BB0C:
    ctx->pc = 0x7F07BB0Cu;
    // 7F07BB0C: addi    r7, r7, 110
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(110);

label_7F07BB10:
    ctx->pc = 0x7F07BB10u;
    // 7F07BB10: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07BB14:
    ctx->pc = 0x7F07BB14u;
    // 7F07BB14: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07BB18:
    ctx->pc = 0x7F07BB18u;
    // 7F07BB18: bl      0x7F19C814
    {
            ctx->lr = 0x7F07BB1Cu;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F07BB1C:
    ctx->pc = 0x7F07BB1Cu;
    ctx->downcount -= 65;
    // 7F07BB1C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F07BB20:
    ctx->pc = 0x7F07BB20u;
    // 7F07BB20: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F07BB24:
    ctx->pc = 0x7F07BB24u;
    // 7F07BB24: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07BB28:
    ctx->pc = 0x7F07BB28u;
    // 7F07BB28: srawi r3, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[3] = value;
        } else if (sh > 31) {
            ctx->gpr[3] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[3] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F07BB2C:
    ctx->pc = 0x7F07BB2Cu;
    // 7F07BB2C: mulli   r3, r3, 18
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)18);

label_7F07BB30:
    ctx->pc = 0x7F07BB30u;
    // 7F07BB30: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F07BB34:
    ctx->pc = 0x7F07BB34u;
    // 7F07BB34: subfic  r0, r0, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F07BB38:
    ctx->pc = 0x7F07BB38u;
    // 7F07BB38: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BB3C:
    ctx->pc = 0x7F07BB3Cu;
    // 7F07BB3C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07BB40:
    ctx->pc = 0x7F07BB40u;
    // 7F07BB40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BB44:
    ctx->pc = 0x7F07BB44u;
    // 7F07BB44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BB48:
    ctx->pc = 0x7F07BB48u;
    // 7F07BB48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07BB4C:
    ctx->pc = 0x7F07BB4Cu;
    // 7F07BB4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BB50:
    ctx->pc = 0x7F07BB50u;
    ctx->downcount -= 18;
    // 7F07BB50: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BB54:
    ctx->pc = 0x7F07BB54u;
    // 7F07BB54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BB58:
    ctx->pc = 0x7F07BB58u;
    // 7F07BB58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BB5C:
    ctx->pc = 0x7F07BB5Cu;
    // 7F07BB5C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07BB60:
    ctx->pc = 0x7F07BB60u;
    // 7F07BB60: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BB64:
    ctx->pc = 0x7F07BB64u;
    // 7F07BB64: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07BB68:
    ctx->pc = 0x7F07BB68u;
    // 7F07BB68: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F07BB6C:
    ctx->pc = 0x7F07BB6Cu;
    // 7F07BB6C: bl      0x7F3CA848
    {
            ctx->lr = 0x7F07BB70u;
            ctx->pc = 0x7F3CA848u;
            return;
    }

label_7F07BB70:
    ctx->pc = 0x7F07BB70u;
    ctx->downcount -= 2;
    // 7F07BB70: cmpwi   r3, 0
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

label_7F07BB74:
    ctx->pc = 0x7F07BB74u;
    // 7F07BB74: bc    12, 2, 0x7F07BBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07BBDC;
        }
    }

label_7F07BB78:
    ctx->pc = 0x7F07BB78u;
    ctx->downcount -= 3;
    // 7F07BB78: cmpwi   r31, 0
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

label_7F07BB7C:
    ctx->pc = 0x7F07BB7Cu;
    // 7F07BB7C: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F07BB80:
    ctx->pc = 0x7F07BB80u;
    // 7F07BB80: bc    12, 2, 0x7F07BB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07BB88;
        }
    }

label_7F07BB84:
    ctx->pc = 0x7F07BB84u;
    ctx->downcount -= 1;
    // 7F07BB84: li      r11, 100
    ctx->gpr[11] = (u32)(s32)(100);

label_7F07BB88:
    ctx->pc = 0x7F07BB88u;
    ctx->downcount -= 62;
    // 7F07BB88: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07BB8C:
    ctx->pc = 0x7F07BB8Cu;
    // 7F07BB8C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07BB90:
    ctx->pc = 0x7F07BB90u;
    // 7F07BB90: addi    r5, r3, 19356
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19356);

label_7F07BB94:
    ctx->pc = 0x7F07BB94u;
    // 7F07BB94: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F07BB98:
    ctx->pc = 0x7F07BB98u;
    // 7F07BB98: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07BB9C:
    ctx->pc = 0x7F07BB9Cu;
    // 7F07BB9C: lis     r3, -32623
    ctx->gpr[3] = ((u32)(s32)(-32623) << 16);

label_7F07BBA0:
    ctx->pc = 0x7F07BBA0u;
    // 7F07BBA0: addi    r7, r3, -28528
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-28528);

label_7F07BBA4:
    ctx->pc = 0x7F07BBA4u;
    // 7F07BBA4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F07BBA8:
    ctx->pc = 0x7F07BBA8u;
    // 7F07BBA8: addi    r6, r5, 110
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(110);

label_7F07BBAC:
    ctx->pc = 0x7F07BBACu;
    // 7F07BBAC: subfic  r5, r11, 378
    {
        u64 res = (u64)(u32)(s32)(378) + (u64)(~ctx->gpr[11]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F07BBB0:
    ctx->pc = 0x7F07BBB0u;
    // 7F07BBB0: mulli   r3, r6, 18
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)18);

label_7F07BBB4:
    ctx->pc = 0x7F07BBB4u;
    // 7F07BBB4: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07BBB8:
    ctx->pc = 0x7F07BBB8u;
    // 7F07BBB8: addi    r6, r4, 540
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(540);

label_7F07BBBC:
    ctx->pc = 0x7F07BBBCu;
    // 7F07BBBC: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F07BBC0:
    ctx->pc = 0x7F07BBC0u;
    // 7F07BBC0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07BBC4:
    ctx->pc = 0x7F07BBC4u;
    // 7F07BBC4: divw   r7, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F07BBC8:
    ctx->pc = 0x7F07BBC8u;
    // 7F07BBC8: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07BBCC:
    ctx->pc = 0x7F07BBCCu;
    // 7F07BBCC: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F07BBD0:
    ctx->pc = 0x7F07BBD0u;
    // 7F07BBD0: addi    r0, r7, 378
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(378);

label_7F07BBD4:
    ctx->pc = 0x7F07BBD4u;
    // 7F07BBD4: subf   r7, r11, r0
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F07BBD8:
    ctx->pc = 0x7F07BBD8u;
    // 7F07BBD8: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F07BBDCu;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F07BBDC:
    ctx->pc = 0x7F07BBDCu;
    ctx->downcount -= 16;
    // 7F07BBDC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07BBE0:
    ctx->pc = 0x7F07BBE0u;
    // 7F07BBE0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BBE4:
    ctx->pc = 0x7F07BBE4u;
    // 7F07BBE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BBE8:
    ctx->pc = 0x7F07BBE8u;
    // 7F07BBE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07BBEC:
    ctx->pc = 0x7F07BBECu;
    // 7F07BBEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BBF0:
    ctx->pc = 0x7F07BBF0u;
    ctx->downcount -= 21;
    // 7F07BBF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BBF4:
    ctx->pc = 0x7F07BBF4u;
    // 7F07BBF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BBF8:
    ctx->pc = 0x7F07BBF8u;
    // 7F07BBF8: li      r5, 4720
    ctx->gpr[5] = (u32)(s32)(4720);

label_7F07BBFC:
    ctx->pc = 0x7F07BBFCu;
    // 7F07BBFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BC00:
    ctx->pc = 0x7F07BC00u;
    // 7F07BC00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BC04:
    ctx->pc = 0x7F07BC04u;
    // 7F07BC04: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07BC08:
    ctx->pc = 0x7F07BC08u;
    // 7F07BC08: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BC0C:
    ctx->pc = 0x7F07BC0Cu;
    // 7F07BC0C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07BC10:
    ctx->pc = 0x7F07BC10u;
    // 7F07BC10: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F07BC14:
    ctx->pc = 0x7F07BC14u;
    // 7F07BC14: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F07BC18:
    ctx->pc = 0x7F07BC18u;
    // 7F07BC18: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F07BC1Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F07BC1C:
    ctx->pc = 0x7F07BC1Cu;
    ctx->downcount -= 2;
    // 7F07BC1C: or.   r31, r3, r3
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

label_7F07BC20:
    ctx->pc = 0x7F07BC20u;
    // 7F07BC20: bc    4, 2, 0x7F07BC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07BC2C;
        }
    }

label_7F07BC24:
    ctx->pc = 0x7F07BC24u;
    ctx->downcount -= 2;
    // 7F07BC24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BC28:
    ctx->pc = 0x7F07BC28u;
    // 7F07BC28: b       0x7F07BCA4
    {
            goto label_7F07BCA4;
    }

label_7F07BC2C:
    ctx->pc = 0x7F07BC2Cu;
    ctx->downcount -= 5;
    // 7F07BC2C: lis     r4, 32520
    ctx->gpr[4] = ((u32)(s32)(32520) << 16);

label_7F07BC30:
    ctx->pc = 0x7F07BC30u;
    // 7F07BC30: lis     r5, 32520
    ctx->gpr[5] = ((u32)(s32)(32520) << 16);

label_7F07BC34:
    ctx->pc = 0x7F07BC34u;
    // 7F07BC34: addi    r4, r4, -21756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21756);

label_7F07BC38:
    ctx->pc = 0x7F07BC38u;
    // 7F07BC38: addi    r5, r5, -21076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21076);

label_7F07BC3C:
    ctx->pc = 0x7F07BC3Cu;
    // 7F07BC3C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F07BC40u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F07BC40:
    ctx->pc = 0x7F07BC40u;
    ctx->downcount -= 14;
    // 7F07BC40: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BC44:
    ctx->pc = 0x7F07BC44u;
    // 7F07BC44: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F07BC48:
    ctx->pc = 0x7F07BC48u;
    // 7F07BC48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BC4C:
    ctx->pc = 0x7F07BC4Cu;
    // 7F07BC4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07BC50:
    ctx->pc = 0x7F07BC50u;
    // 7F07BC50: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F07BC54:
    ctx->pc = 0x7F07BC54u;
    // 7F07BC54: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F07BC58:
    ctx->pc = 0x7F07BC58u;
    // 7F07BC58: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F07BC5C:
    ctx->pc = 0x7F07BC5Cu;
    // 7F07BC5C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07BC60:
    ctx->pc = 0x7F07BC60u;
    // 7F07BC60: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BC64:
    ctx->pc = 0x7F07BC64u;
    // 7F07BC64: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07BC68:
    ctx->pc = 0x7F07BC68u;
    // 7F07BC68: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07BC6C:
    ctx->pc = 0x7F07BC6Cu;
    // 7F07BC6C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F07BC70:
    ctx->pc = 0x7F07BC70u;
    // 7F07BC70: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BC74:
    ctx->pc = 0x7F07BC74u;
    // 7F07BC74: bl      0x7F07B680
    {
            ctx->lr = 0x7F07BC78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07B680u;
                return;
            }
            goto label_7F07B680;
    }

label_7F07BC78:
    ctx->pc = 0x7F07BC78u;
    ctx->downcount -= 2;
    // 7F07BC78: cmpwi   r3, 0
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

label_7F07BC7C:
    ctx->pc = 0x7F07BC7Cu;
    // 7F07BC7C: bc    4, 0, 0x7F07BCA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07BCA0;
        }
    }

label_7F07BC80:
    ctx->pc = 0x7F07BC80u;
    ctx->downcount -= 6;
    // 7F07BC80: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F07BC84:
    ctx->pc = 0x7F07BC84u;
    // 7F07BC84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F07BC88:
    ctx->pc = 0x7F07BC88u;
    // 7F07BC88: addi    r4, r3, 27960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27960);

label_7F07BC8C:
    ctx->pc = 0x7F07BC8Cu;
    // 7F07BC8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07BC90:
    ctx->pc = 0x7F07BC90u;
    // 7F07BC90: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BC94:
    ctx->pc = 0x7F07BC94u;
    // 7F07BC94: bl      0x7F3C8210
    {
            ctx->lr = 0x7F07BC98u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F07BC98:
    ctx->pc = 0x7F07BC98u;
    ctx->downcount -= 2;
    // 7F07BC98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BC9C:
    ctx->pc = 0x7F07BC9Cu;
    // 7F07BC9C: b       0x7F07BCA4
    {
            goto label_7F07BCA4;
    }

label_7F07BCA0:
    ctx->pc = 0x7F07BCA0u;
    ctx->downcount -= 1;
    // 7F07BCA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07BCA4:
    ctx->pc = 0x7F07BCA4u;
    ctx->downcount -= 16;
    // 7F07BCA4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07BCA8:
    ctx->pc = 0x7F07BCA8u;
    // 7F07BCA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BCAC:
    ctx->pc = 0x7F07BCACu;
    // 7F07BCAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BCB0:
    ctx->pc = 0x7F07BCB0u;
    // 7F07BCB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07BCB4:
    ctx->pc = 0x7F07BCB4u;
    // 7F07BCB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BCB8:
    ctx->pc = 0x7F07BCB8u;
    ctx->downcount -= 17;
    // 7F07BCB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BCBC:
    ctx->pc = 0x7F07BCBCu;
    // 7F07BCBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BCC0:
    ctx->pc = 0x7F07BCC0u;
    // 7F07BCC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BCC4:
    ctx->pc = 0x7F07BCC4u;
    // 7F07BCC4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BCC8:
    ctx->pc = 0x7F07BCC8u;
    // 7F07BCC8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07BCCC:
    ctx->pc = 0x7F07BCCCu;
    // 7F07BCCC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BCD0:
    ctx->pc = 0x7F07BCD0u;
    // 7F07BCD0: bl      0x7F022FB4
    {
            ctx->lr = 0x7F07BCD4u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F07BCD4:
    ctx->pc = 0x7F07BCD4u;
    ctx->downcount -= 5;
    // 7F07BCD4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07BCD8:
    ctx->pc = 0x7F07BCD8u;
    // 7F07BCD8: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F07BCDC:
    ctx->pc = 0x7F07BCDCu;
    // 7F07BCDC: lfs     f0, -7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07BCDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F07BCE0:
    ctx->pc = 0x7F07BCE0u;
    // 7F07BCE0: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F07BCE0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F07BCE4:
    ctx->pc = 0x7F07BCE4u;
    // 7F07BCE4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07BCE8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07BCE8:
    ctx->pc = 0x7F07BCE8u;
    ctx->downcount -= 3;
    // 7F07BCE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BCEC:
    ctx->pc = 0x7F07BCECu;
    // 7F07BCEC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F07BCF0:
    ctx->pc = 0x7F07BCF0u;
    // 7F07BCF0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F07BCF4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F07BCF4:
    ctx->pc = 0x7F07BCF4u;
    ctx->downcount -= 4;
    // 7F07BCF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BCF8:
    ctx->pc = 0x7F07BCF8u;
    // 7F07BCF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BCFC:
    ctx->pc = 0x7F07BCFCu;
    // 7F07BCFC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07BD00:
    ctx->pc = 0x7F07BD00u;
    // 7F07BD00: bl      0x7F0242F4
    {
            ctx->lr = 0x7F07BD04u;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F07BD04:
    ctx->pc = 0x7F07BD04u;
    ctx->downcount -= 5;
    // 7F07BD04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD08:
    ctx->pc = 0x7F07BD08u;
    // 7F07BD08: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F07BD0C:
    ctx->pc = 0x7F07BD0Cu;
    // 7F07BD0C: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F07BD10:
    ctx->pc = 0x7F07BD10u;
    // 7F07BD10: li      r6, 450
    ctx->gpr[6] = (u32)(s32)(450);

label_7F07BD14:
    ctx->pc = 0x7F07BD14u;
    // 7F07BD14: bl      0x7F023F7C
    {
            ctx->lr = 0x7F07BD18u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F07BD18:
    ctx->pc = 0x7F07BD18u;
    ctx->downcount -= 2;
    // 7F07BD18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD1C:
    ctx->pc = 0x7F07BD1Cu;
    // 7F07BD1C: bl      0x7F023FEC
    {
            ctx->lr = 0x7F07BD20u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F07BD20:
    ctx->pc = 0x7F07BD20u;
    ctx->downcount -= 2;
    // 7F07BD20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD24:
    ctx->pc = 0x7F07BD24u;
    // 7F07BD24: bl      0x7F024034
    {
            ctx->lr = 0x7F07BD28u;
            ctx->pc = 0x7F024034u;
            return;
    }

label_7F07BD28:
    ctx->pc = 0x7F07BD28u;
    ctx->downcount -= 2;
    // 7F07BD28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD2C:
    ctx->pc = 0x7F07BD2Cu;
    // 7F07BD2C: bl      0x7F023FDC
    {
            ctx->lr = 0x7F07BD30u;
            ctx->pc = 0x7F023FDCu;
            return;
    }

label_7F07BD30:
    ctx->pc = 0x7F07BD30u;
    ctx->downcount -= 2;
    // 7F07BD30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD34:
    ctx->pc = 0x7F07BD34u;
    // 7F07BD34: bl      0x7F023FCC
    {
            ctx->lr = 0x7F07BD38u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F07BD38:
    ctx->pc = 0x7F07BD38u;
    ctx->downcount -= 2;
    // 7F07BD38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BD3C:
    ctx->pc = 0x7F07BD3Cu;
    // 7F07BD3C: bl      0x7F023EA8
    {
            ctx->lr = 0x7F07BD40u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F07BD40:
    ctx->pc = 0x7F07BD40u;
    ctx->downcount -= 22;
    // 7F07BD40: lwz     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BD44:
    ctx->pc = 0x7F07BD44u;
    // 7F07BD44: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F07BD48:
    ctx->pc = 0x7F07BD48u;
    // 7F07BD48: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BD4C:
    ctx->pc = 0x7F07BD4Cu;
    // 7F07BD4C: lwz     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BD50:
    ctx->pc = 0x7F07BD50u;
    // 7F07BD50: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F07BD54:
    ctx->pc = 0x7F07BD54u;
    // 7F07BD54: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BD58:
    ctx->pc = 0x7F07BD58u;
    // 7F07BD58: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07BD5C:
    ctx->pc = 0x7F07BD5Cu;
    // 7F07BD5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BD60:
    ctx->pc = 0x7F07BD60u;
    // 7F07BD60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BD64:
    ctx->pc = 0x7F07BD64u;
    // 7F07BD64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07BD68:
    ctx->pc = 0x7F07BD68u;
    // 7F07BD68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BD6C:
    ctx->pc = 0x7F07BD6Cu;
    ctx->downcount -= 20;
    // 7F07BD6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BD70:
    ctx->pc = 0x7F07BD70u;
    // 7F07BD70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BD74:
    ctx->pc = 0x7F07BD74u;
    // 7F07BD74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BD78:
    ctx->pc = 0x7F07BD78u;
    // 7F07BD78: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07BD7C:
    ctx->pc = 0x7F07BD7Cu;
    // 7F07BD7C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F07BD80:
    ctx->pc = 0x7F07BD80u;
    // 7F07BD80: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BD84:
    ctx->pc = 0x7F07BD84u;
    // 7F07BD84: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07BD88:
    ctx->pc = 0x7F07BD88u;
    // 7F07BD88: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F07BD8C:
    ctx->pc = 0x7F07BD8Cu;
    // 7F07BD8C: li      r5, 290
    ctx->gpr[5] = (u32)(s32)(290);

label_7F07BD90:
    ctx->pc = 0x7F07BD90u;
    // 7F07BD90: bl      0x7F04272C
    {
            ctx->lr = 0x7F07BD94u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F07BD94:
    ctx->pc = 0x7F07BD94u;
    ctx->downcount -= 4;
    // 7F07BD94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BD98:
    ctx->pc = 0x7F07BD98u;
    // 7F07BD98: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F07BD9C:
    ctx->pc = 0x7F07BD9Cu;
    // 7F07BD9C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F07BDA0:
    ctx->pc = 0x7F07BDA0u;
    // 7F07BDA0: bl      0x7F042C28
    {
            ctx->lr = 0x7F07BDA4u;
            ctx->pc = 0x7F042C28u;
            return;
    }

label_7F07BDA4:
    ctx->pc = 0x7F07BDA4u;
    ctx->downcount -= 3;
    // 7F07BDA4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BDA8:
    ctx->pc = 0x7F07BDA8u;
    // 7F07BDA8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07BDAC:
    ctx->pc = 0x7F07BDACu;
    // 7F07BDAC: bl      0x7F042B20
    {
            ctx->lr = 0x7F07BDB0u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F07BDB0:
    ctx->pc = 0x7F07BDB0u;
    ctx->downcount -= 6;
    // 7F07BDB0: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F07BDB4:
    ctx->pc = 0x7F07BDB4u;
    // 7F07BDB4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BDB8:
    ctx->pc = 0x7F07BDB8u;
    // 7F07BDB8: addi    r5, r4, -15700
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-15700);

label_7F07BDBC:
    ctx->pc = 0x7F07BDBCu;
    // 7F07BDBC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F07BDC0:
    ctx->pc = 0x7F07BDC0u;
    // 7F07BDC0: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F07BDC4:
    ctx->pc = 0x7F07BDC4u;
    // 7F07BDC4: bl      0x7F042C2C
    {
            ctx->lr = 0x7F07BDC8u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F07BDC8:
    ctx->pc = 0x7F07BDC8u;
    ctx->downcount -= 3;
    // 7F07BDC8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BDCC:
    ctx->pc = 0x7F07BDCCu;
    // 7F07BDCC: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F07BDD0:
    ctx->pc = 0x7F07BDD0u;
    // 7F07BDD0: bl      0x7F042B6C
    {
            ctx->lr = 0x7F07BDD4u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F07BDD4:
    ctx->pc = 0x7F07BDD4u;
    ctx->downcount -= 9;
    // 7F07BDD4: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F07BDD8:
    ctx->pc = 0x7F07BDD8u;
    // 7F07BDD8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BDDC:
    ctx->pc = 0x7F07BDDCu;
    // 7F07BDDC: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F07BDE0:
    ctx->pc = 0x7F07BDE0u;
    // 7F07BDE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BDE4:
    ctx->pc = 0x7F07BDE4u;
    // 7F07BDE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F07BDE8:
    ctx->pc = 0x7F07BDE8u;
    // 7F07BDE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BDEC:
    ctx->pc = 0x7F07BDECu;
    // 7F07BDEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F07BDF0:
    ctx->pc = 0x7F07BDF0u;
    // 7F07BDF0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F07BDF4:
    ctx->pc = 0x7F07BDF4u;
    // 7F07BDF4: bl      0x7F042C94
    {
            ctx->lr = 0x7F07BDF8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F07BDF8:
    ctx->pc = 0x7F07BDF8u;
    ctx->downcount -= 3;
    // 7F07BDF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F07BDFC:
    ctx->pc = 0x7F07BDFCu;
    // 7F07BDFC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F07BE00:
    ctx->pc = 0x7F07BE00u;
    // 7F07BE00: bl      0x7F023E5C
    {
            ctx->lr = 0x7F07BE04u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F07BE04:
    ctx->pc = 0x7F07BE04u;
    ctx->downcount -= 16;
    // 7F07BE04: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F07BE08:
    ctx->pc = 0x7F07BE08u;
    // 7F07BE08: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BE0C:
    ctx->pc = 0x7F07BE0Cu;
    // 7F07BE0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BE10:
    ctx->pc = 0x7F07BE10u;
    // 7F07BE10: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07BE14:
    ctx->pc = 0x7F07BE14u;
    // 7F07BE14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BE18:
    ctx->pc = 0x7F07BE18u;
    ctx->downcount -= 4;
    // 7F07BE18: lwz     r4, 1140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F07BE1C:
    ctx->pc = 0x7F07BE1Cu;
    // 7F07BE1C: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BE20:
    ctx->pc = 0x7F07BE20u;
    // 7F07BE20: sth     r0, 4120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F07BE24:
    ctx->pc = 0x7F07BE24u;
    // 7F07BE24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BE28:
    ctx->pc = 0x7F07BE28u;
    ctx->downcount -= 22;
    // 7F07BE28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BE2C:
    ctx->pc = 0x7F07BE2Cu;
    // 7F07BE2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BE30:
    ctx->pc = 0x7F07BE30u;
    // 7F07BE30: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F07BE34:
    ctx->pc = 0x7F07BE34u;
    // 7F07BE34: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F07BE38:
    ctx->pc = 0x7F07BE38u;
    // 7F07BE38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BE3C:
    ctx->pc = 0x7F07BE3Cu;
    // 7F07BE3C: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F07BE40:
    ctx->pc = 0x7F07BE40u;
    // 7F07BE40: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F07BE44:
    ctx->pc = 0x7F07BE44u;
    // 7F07BE44: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F07BE48:
    ctx->pc = 0x7F07BE48u;
    // 7F07BE48: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07BE4C:
    ctx->pc = 0x7F07BE4Cu;
    // 7F07BE4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BE50:
    ctx->pc = 0x7F07BE50u;
    // 7F07BE50: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F07BE54:
    ctx->pc = 0x7F07BE54u;
    // 7F07BE54: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BE58:
    ctx->pc = 0x7F07BE58u;
    // 7F07BE58: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F07BE5C:
    ctx->pc = 0x7F07BE5Cu;
    // 7F07BE5C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BE60:
    ctx->pc = 0x7F07BE60u;
    // 7F07BE60: lwz     r3, 13880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F07BE64:
    ctx->pc = 0x7F07BE64u;
    // 7F07BE64: addi    r4, r6, 21180
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(21180);

label_7F07BE68:
    ctx->pc = 0x7F07BE68u;
    // 7F07BE68: lwz     r8, 15424(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15424);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F07BE6C:
    ctx->pc = 0x7F07BE6Cu;
    // 7F07BE6C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F07BE70:
    ctx->pc = 0x7F07BE70u;
    // 7F07BE70: lha     r9, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BE74:
    ctx->pc = 0x7F07BE74u;
    // 7F07BE74: addi    r3, r31, 4096
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F07BE78:
    ctx->pc = 0x7F07BE78u;
    // 7F07BE78: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_7F07BE7C:
    ctx->pc = 0x7F07BE7Cu;
    // 7F07BE7C: bl      0x7F27E314
    {
            ctx->lr = 0x7F07BE80u;
            ctx->pc = 0x7F27E314u;
            return;
    }

label_7F07BE80:
    ctx->pc = 0x7F07BE80u;
    ctx->downcount -= 3;
    // 7F07BE80: addi    r3, r31, 4096
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F07BE84:
    ctx->pc = 0x7F07BE84u;
    // 7F07BE84: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F07BE88:
    ctx->pc = 0x7F07BE88u;
    // 7F07BE88: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F07BE8Cu;
            ctx->pc = 0x7F27E4C4u;
            return;
    }

label_7F07BE8C:
    ctx->pc = 0x7F07BE8Cu;
    ctx->downcount -= 2;
    // 7F07BE8C: addi    r3, r31, 4096
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F07BE90:
    ctx->pc = 0x7F07BE90u;
    // 7F07BE90: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F07BE94u;
            ctx->pc = 0x7F27E0C8u;
            return;
    }

label_7F07BE94:
    ctx->pc = 0x7F07BE94u;
    ctx->downcount -= 2;
    // 7F07BE94: addi    r3, r31, 4096
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F07BE98:
    ctx->pc = 0x7F07BE98u;
    // 7F07BE98: bl      0x7F27E638
    {
            ctx->lr = 0x7F07BE9Cu;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F07BE9C:
    ctx->pc = 0x7F07BE9Cu;
    ctx->downcount -= 2;
    // 7F07BE9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07BEA0:
    ctx->pc = 0x7F07BEA0u;
    // 7F07BEA0: bl      0x7F2BB23C
    {
            ctx->lr = 0x7F07BEA4u;
            ctx->pc = 0x7F2BB23Cu;
            return;
    }

label_7F07BEA4:
    ctx->pc = 0x7F07BEA4u;
    ctx->downcount -= 7;
    // 7F07BEA4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BEA8:
    ctx->pc = 0x7F07BEA8u;
    // 7F07BEA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BEAC:
    ctx->pc = 0x7F07BEACu;
    // 7F07BEAC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07BEB0:
    ctx->pc = 0x7F07BEB0u;
    // 7F07BEB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BEB4:
    ctx->pc = 0x7F07BEB4u;
    // 7F07BEB4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F07BEB8:
    ctx->pc = 0x7F07BEB8u;
    // 7F07BEB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BEBC:
    ctx->pc = 0x7F07BEBCu;
    ctx->downcount -= 10;
    // 7F07BEBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BEC0:
    ctx->pc = 0x7F07BEC0u;
    // 7F07BEC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BEC4:
    ctx->pc = 0x7F07BEC4u;
    // 7F07BEC4: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F07BEC8:
    ctx->pc = 0x7F07BEC8u;
    // 7F07BEC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BECC:
    ctx->pc = 0x7F07BECCu;
    // 7F07BECC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F07BED0:
    ctx->pc = 0x7F07BED0u;
    // 7F07BED0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BED4:
    ctx->pc = 0x7F07BED4u;
    // 7F07BED4: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F07BED8:
    ctx->pc = 0x7F07BED8u;
    // 7F07BED8: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F07BEDC:
    ctx->pc = 0x7F07BEDCu;
    // 7F07BEDC: addi    r3, r31, 4200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F07BEE0:
    ctx->pc = 0x7F07BEE0u;
    // 7F07BEE0: bl      0x7F0120F4
    {
            ctx->lr = 0x7F07BEE4u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F07BEE4:
    ctx->pc = 0x7F07BEE4u;
    ctx->downcount -= 7;
    // 7F07BEE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07BEE8:
    ctx->pc = 0x7F07BEE8u;
    // 7F07BEE8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F07BEEC:
    ctx->pc = 0x7F07BEECu;
    // 7F07BEEC: addi    r5, r3, -7776
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7776);

label_7F07BEF0:
    ctx->pc = 0x7F07BEF0u;
    // 7F07BEF0: lfs     f2, -7700(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F07BEF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F07BEF4:
    ctx->pc = 0x7F07BEF4u;
    // 7F07BEF4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07BEF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07BEF8:
    ctx->pc = 0x7F07BEF8u;
    // 7F07BEF8: addi    r3, r31, 4200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F07BEFC:
    ctx->pc = 0x7F07BEFCu;
    // 7F07BEFC: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F07BF00u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F07BF00:
    ctx->pc = 0x7F07BF00u;
    ctx->downcount -= 3;
    // 7F07BF00: lhz     r0, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07BF04:
    ctx->pc = 0x7F07BF04u;
    // 7F07BF04: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07BF08:
    ctx->pc = 0x7F07BF08u;
    // 7F07BF08: bc    4, 2, 0x7F07BF30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07BF30;
        }
    }

label_7F07BF0C:
    ctx->pc = 0x7F07BF0Cu;
    ctx->downcount -= 8;
    // 7F07BF0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07BF10:
    ctx->pc = 0x7F07BF10u;
    // 7F07BF10: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BF14:
    ctx->pc = 0x7F07BF14u;
    // 7F07BF14: addi    r5, r3, -7696
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7696);

label_7F07BF18:
    ctx->pc = 0x7F07BF18u;
    // 7F07BF18: addi    r3, r31, 4200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F07BF1C:
    ctx->pc = 0x7F07BF1Cu;
    // 7F07BF1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07BF1Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07BF20:
    ctx->pc = 0x7F07BF20u;
    // 7F07BF20: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F07BF24:
    ctx->pc = 0x7F07BF24u;
    // 7F07BF24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BF28:
    ctx->pc = 0x7F07BF28u;
    // 7F07BF28: bl      0x7F041A9C
    {
            ctx->lr = 0x7F07BF2Cu;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F07BF2C:
    ctx->pc = 0x7F07BF2Cu;
    ctx->downcount -= 1;
    // 7F07BF2C: b       0x7F07BF50
    {
            goto label_7F07BF50;
    }

label_7F07BF30:
    ctx->pc = 0x7F07BF30u;
    ctx->downcount -= 8;
    // 7F07BF30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F07BF34:
    ctx->pc = 0x7F07BF34u;
    // 7F07BF34: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BF38:
    ctx->pc = 0x7F07BF38u;
    // 7F07BF38: addi    r5, r3, -7696
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7696);

label_7F07BF3C:
    ctx->pc = 0x7F07BF3Cu;
    // 7F07BF3C: addi    r3, r31, 4200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F07BF40:
    ctx->pc = 0x7F07BF40u;
    // 7F07BF40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07BF40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07BF44:
    ctx->pc = 0x7F07BF44u;
    // 7F07BF44: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F07BF48:
    ctx->pc = 0x7F07BF48u;
    // 7F07BF48: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F07BF4C:
    ctx->pc = 0x7F07BF4Cu;
    // 7F07BF4C: bl      0x7F041A9C
    {
            ctx->lr = 0x7F07BF50u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F07BF50:
    ctx->pc = 0x7F07BF50u;
    ctx->downcount -= 7;
    // 7F07BF50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BF54:
    ctx->pc = 0x7F07BF54u;
    // 7F07BF54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BF58:
    ctx->pc = 0x7F07BF58u;
    // 7F07BF58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F07BF5C:
    ctx->pc = 0x7F07BF5Cu;
    // 7F07BF5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BF60:
    ctx->pc = 0x7F07BF60u;
    // 7F07BF60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07BF64:
    ctx->pc = 0x7F07BF64u;
    // 7F07BF64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BF68:
    ctx->pc = 0x7F07BF68u;
    ctx->downcount -= 6;
    // 7F07BF68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BF6C:
    ctx->pc = 0x7F07BF6Cu;
    // 7F07BF6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BF70:
    ctx->pc = 0x7F07BF70u;
    // 7F07BF70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BF74:
    ctx->pc = 0x7F07BF74u;
    // 7F07BF74: lhz     r0, 3968(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F07BF78:
    ctx->pc = 0x7F07BF78u;
    // 7F07BF78: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07BF7C:
    ctx->pc = 0x7F07BF7Cu;
    // 7F07BF7C: bc    4, 2, 0x7F07BFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07BFA0;
        }
    }

label_7F07BF80:
    ctx->pc = 0x7F07BF80u;
    ctx->downcount -= 7;
    // 7F07BF80: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F07BF84:
    ctx->pc = 0x7F07BF84u;
    // 7F07BF84: lha     r4, 82(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BF88:
    ctx->pc = 0x7F07BF88u;
    // 7F07BF88: lfs     f1, -7696(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07BF88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07BF8C:
    ctx->pc = 0x7F07BF8Cu;
    // 7F07BF8C: addi    r3, r3, 4200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4200);

label_7F07BF90:
    ctx->pc = 0x7F07BF90u;
    // 7F07BF90: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F07BF94:
    ctx->pc = 0x7F07BF94u;
    // 7F07BF94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07BF98:
    ctx->pc = 0x7F07BF98u;
    // 7F07BF98: bl      0x7F041A9C
    {
            ctx->lr = 0x7F07BF9Cu;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F07BF9C:
    ctx->pc = 0x7F07BF9Cu;
    ctx->downcount -= 1;
    // 7F07BF9C: b       0x7F07BFBC
    {
            goto label_7F07BFBC;
    }

label_7F07BFA0:
    ctx->pc = 0x7F07BFA0u;
    ctx->downcount -= 7;
    // 7F07BFA0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F07BFA4:
    ctx->pc = 0x7F07BFA4u;
    // 7F07BFA4: lha     r4, 82(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F07BFA8:
    ctx->pc = 0x7F07BFA8u;
    // 7F07BFA8: lfs     f1, -7696(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F07BFA8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F07BFAC:
    ctx->pc = 0x7F07BFACu;
    // 7F07BFAC: addi    r3, r3, 4200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4200);

label_7F07BFB0:
    ctx->pc = 0x7F07BFB0u;
    // 7F07BFB0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F07BFB4:
    ctx->pc = 0x7F07BFB4u;
    // 7F07BFB4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F07BFB8:
    ctx->pc = 0x7F07BFB8u;
    // 7F07BFB8: bl      0x7F041A9C
    {
            ctx->lr = 0x7F07BFBCu;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F07BFBC:
    ctx->pc = 0x7F07BFBCu;
    ctx->downcount -= 5;
    // 7F07BFBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07BFC0:
    ctx->pc = 0x7F07BFC0u;
    // 7F07BFC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F07BFC4:
    ctx->pc = 0x7F07BFC4u;
    // 7F07BFC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F07BFC8:
    ctx->pc = 0x7F07BFC8u;
    // 7F07BFC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0780EC;
        }
    }

label_7F07BFCC:
    ctx->pc = 0x7F07BFCCu;
    ctx->downcount -= 22;
    // 7F07BFCC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F07BFD0:
    ctx->pc = 0x7F07BFD0u;
    // 7F07BFD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F07BFD4:
    ctx->pc = 0x7F07BFD4u;
    // 7F07BFD4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07BFD8:
    ctx->pc = 0x7F07BFD8u;
    // 7F07BFD8: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_7F07BFDC:
    ctx->pc = 0x7F07BFDCu;
    // 7F07BFDC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F07BFE0:
    ctx->pc = 0x7F07BFE0u;
    // 7F07BFE0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F07BFE4:
    ctx->pc = 0x7F07BFE4u;
    // 7F07BFE4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07BFE8:
    ctx->pc = 0x7F07BFE8u;
    // 7F07BFE8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F07BFEC:
    ctx->pc = 0x7F07BFECu;
    // 7F07BFEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07BFF0:
    ctx->pc = 0x7F07BFF0u;
    // 7F07BFF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07BFF4:
    ctx->pc = 0x7F07BFF4u;
    // 7F07BFF4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F07BFF8:
    ctx->downcount -= 4;
    // 7F07BFF8: addi    r0, r3, 976
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(976);

label_7F07BFFC:
    // 7F07BFFC: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F07C000:
    // 7F07C000: cmplw   r30, r0
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F07C004:
    // 7F07C004: bc    4, 2, 0x7F07C010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F07C010;
        }
    }

label_7F07C008:
    ctx->downcount -= 2;
    // 7F07C008: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F07C00C:
    // 7F07C00C: b       0x7F07C01C
    {
            goto label_7F07C01C;
    }

label_7F07C010:
    ctx->downcount -= 3;
    // 7F07C010: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F07C014:
    // 7F07C014: addi    r3, r3, 192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(192);

label_7F07C018:
    // 7F07C018: bc    16, 0, 0x7F07BFF8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07BFF8u;
                return;
            }
            goto label_7F07BFF8;
        }
    }

label_7F07C01C:
    ctx->pc = 0x7F07C01Cu;
    ctx->downcount -= 3;
    // 7F07C01C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07C020:
    ctx->pc = 0x7F07C020u;
    // 7F07C020: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F07C024:
    ctx->pc = 0x7F07C024u;
    // 7F07C024: bl      0x7F07D0F4
    {
            ctx->lr = 0x7F07C028u;
            ctx->pc = 0x7F07D0F4u;
            return;
    }

label_7F07C028:
    ctx->pc = 0x7F07C028u;
    ctx->downcount -= 2;
    // 7F07C028: cmpwi   r3, 0
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

label_7F07C02C:
    ctx->pc = 0x7F07C02Cu;
    // 7F07C02C: bc    12, 2, 0x7F07C03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07C03C;
        }
    }

label_7F07C030:
    ctx->pc = 0x7F07C030u;
    ctx->downcount -= 2;
    // 7F07C030: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07C034:
    ctx->pc = 0x7F07C034u;
    // 7F07C034: bl      0x7F07E364
    {
            ctx->lr = 0x7F07C038u;
            ctx->pc = 0x7F07E364u;
            return;
    }

label_7F07C038:
    ctx->pc = 0x7F07C038u;
    ctx->downcount -= 1;
    // 7F07C038: b       0x7F07CA2C
    {
            ctx->pc = 0x7F07CA2Cu;
            return;
    }

label_7F07C03C:
    ctx->pc = 0x7F07C03Cu;
    ctx->downcount -= 7;
    // 7F07C03C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F07C040:
    ctx->pc = 0x7F07C040u;
    // 7F07C040: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F07C044:
    ctx->pc = 0x7F07C044u;
    // 7F07C044: addi    r5, r3, 14080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F07C048:
    ctx->pc = 0x7F07C048u;
    // 7F07C048: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F07C04C:
    ctx->pc = 0x7F07C04Cu;
    // 7F07C04C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F07C050:
    ctx->pc = 0x7F07C050u;
    // 7F07C050: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F07C054:
    ctx->downcount -= 4;
    // 7F07C054: add   r4, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F07C058:
    ctx->pc = 0x7F07C058u;
    // 7F07C058: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07C05C:
    // 7F07C05C: andi.   r0, r0, 0x0103
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

label_7F07C060:
    // 7F07C060: bc    12, 2, 0x7F07C06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F07C06C;
        }
    }

label_7F07C064:
    ctx->downcount -= 2;
    // 7F07C064: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F07C068:
    // 7F07C068: b       0x7F07C074
    {
            goto label_7F07C074;
    }

label_7F07C06C:
    ctx->downcount -= 2;
    // 7F07C06C: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_7F07C070:
    // 7F07C070: bc    16, 0, 0x7F07C054
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F07C054u;
                return;
            }
            goto label_7F07C054;
        }
    }

label_7F07C074:
    ctx->pc = 0x7F07C074u;
    ctx->downcount -= 2;
    // 7F07C074: cmpwi   r6, 0
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

label_7F07C078:
    ctx->pc = 0x7F07C078u;
    // 7F07C078: bc    4, 2, 0x7F07CA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F07CA2Cu;
            return;
        }
    }

label_7F07C07C:
    ctx->pc = 0x7F07C07Cu;
    ctx->downcount -= 10;
    // 7F07C07C: lwz     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07C080:
    ctx->pc = 0x7F07C080u;
    // 7F07C080: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07C084:
    ctx->pc = 0x7F07C084u;
    // 7F07C084: lwz     r5, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07C088:
    ctx->pc = 0x7F07C088u;
    // 7F07C088: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F07C08C:
    ctx->pc = 0x7F07C08Cu;
    // 7F07C08C: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F07C090:
    ctx->pc = 0x7F07C090u;
    // 7F07C090: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F07C094:
    ctx->pc = 0x7F07C094u;
    // 7F07C094: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F07C098:
    ctx->pc = 0x7F07C098u;
    // 7F07C098: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F07C09C:
    ctx->pc = 0x7F07C09Cu;
    // 7F07C09C: or.   r0, r3, r0
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

label_7F07C0A0:
    ctx->pc = 0x7F07C0A0u;
    // 7F07C0A0: bc    12, 2, 0x7F07C9B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F07C9B8u;
            return;
        }
    }

label_7F07C0A4:
    ctx->pc = 0x7F07C0A4u;
    ctx->downcount -= 3;
    // 7F07C0A4: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F07C0A8:
    ctx->pc = 0x7F07C0A8u;
    // 7F07C0A8: rlwinm. r0, r0, 0, 31, 31
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

label_7F07C0AC:
    ctx->pc = 0x7F07C0ACu;
    // 7F07C0AC: bc    12, 2, 0x7F07CA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F07CA2Cu;
            return;
        }
    }

label_7F07C0B0:
    ctx->pc = 0x7F07C0B0u;
    ctx->downcount -= 3;
    // 7F07C0B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F07C0B4:
    ctx->pc = 0x7F07C0B4u;
    // 7F07C0B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F07C0B8:
    ctx->pc = 0x7F07C0B8u;
    // 7F07C0B8: bl      0x7F07D140
    {
            ctx->lr = 0x7F07C0BCu;
            ctx->pc = 0x7F07D140u;
            return;
    }

label_7F07C0BC:
    ctx->pc = 0x7F07C0BCu;
    ctx->downcount -= 2;
    // 7F07C0BC: cmpwi   r3, 0
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

label_7F07C0C0:
    ctx->pc = 0x7F07C0C0u;
    // 7F07C0C0: bc    4, 2, 0x7F07C864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F07C864u;
            return;
        }
    }

label_7F07C0C4:
    ctx->pc = 0x7F07C0C4u;
    ctx->downcount -= 10;
    // 7F07C0C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F07C0C8:
    ctx->pc = 0x7F07C0C8u;
    // 7F07C0C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F07C0CC:
    ctx->pc = 0x7F07C0CCu;
    // 7F07C0CC: stw     r0, 4624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F07C0D0:
    ctx->pc = 0x7F07C0D0u;
    // 7F07C0D0: li      r0, 769
    ctx->gpr[0] = (u32)(s32)(769);

label_7F07C0D4:
    ctx->pc = 0x7F07C0D4u;
    // 7F07C0D4: lwz     r5, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F07C0D8:
    ctx->pc = 0x7F07C0D8u;
    // 7F07C0D8: lwz     r6, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F07C0DC:
    ctx->pc = 0x7F07C0DCu;
    // 7F07C0DC: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F07C0E0:
    ctx->pc = 0x7F07C0E0u;
    // 7F07C0E0: and   r3, r6, r4
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F07C0E4:
    ctx->pc = 0x7F07C0E4u;
    // 7F07C0E4: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F07C0E8:
    ctx->pc = 0x7F07C0E8u;
    // 7F07C0E8: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

    ctx->pc = 0x7F07C0ECu;
    return;
return_dispatch_7F0780EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0780F0u: goto label_7F0780F0;
    case 0x7F07813Cu: goto label_7F07813C;
    case 0x7F0782DCu: goto label_7F0782DC;
    case 0x7F078370u: goto label_7F078370;
    case 0x7F07840Cu: goto label_7F07840C;
    case 0x7F0784A4u: goto label_7F0784A4;
    case 0x7F0784ACu: goto label_7F0784AC;
    case 0x7F0784BCu: goto label_7F0784BC;
    case 0x7F0784C4u: goto label_7F0784C4;
    case 0x7F0784D0u: goto label_7F0784D0;
    case 0x7F0784E8u: goto label_7F0784E8;
    case 0x7F0784F4u: goto label_7F0784F4;
    case 0x7F0785C8u: goto label_7F0785C8;
    case 0x7F0785F8u: goto label_7F0785F8;
    case 0x7F078604u: goto label_7F078604;
    case 0x7F078610u: goto label_7F078610;
    case 0x7F078634u: goto label_7F078634;
    case 0x7F0786A0u: goto label_7F0786A0;
    case 0x7F0786C8u: goto label_7F0786C8;
    case 0x7F0786F0u: goto label_7F0786F0;
    case 0x7F078718u: goto label_7F078718;
    case 0x7F078730u: goto label_7F078730;
    case 0x7F078758u: goto label_7F078758;
    case 0x7F07876Cu: goto label_7F07876C;
    case 0x7F078778u: goto label_7F078778;
    case 0x7F078788u: goto label_7F078788;
    case 0x7F0787A0u: goto label_7F0787A0;
    case 0x7F0787CCu: goto label_7F0787CC;
    case 0x7F0787F4u: goto label_7F0787F4;
    case 0x7F078808u: goto label_7F078808;
    case 0x7F078814u: goto label_7F078814;
    case 0x7F078824u: goto label_7F078824;
    case 0x7F07883Cu: goto label_7F07883C;
    case 0x7F078898u: goto label_7F078898;
    case 0x7F0788A8u: goto label_7F0788A8;
    case 0x7F0788BCu: goto label_7F0788BC;
    case 0x7F0788CCu: goto label_7F0788CC;
    case 0x7F0788D4u: goto label_7F0788D4;
    case 0x7F0788DCu: goto label_7F0788DC;
    case 0x7F0788F4u: goto label_7F0788F4;
    case 0x7F07893Cu: goto label_7F07893C;
    case 0x7F078978u: goto label_7F078978;
    case 0x7F07899Cu: goto label_7F07899C;
    case 0x7F0789ACu: goto label_7F0789AC;
    case 0x7F0789BCu: goto label_7F0789BC;
    case 0x7F078D80u: goto label_7F078D80;
    case 0x7F078D90u: goto label_7F078D90;
    case 0x7F078DA0u: goto label_7F078DA0;
    case 0x7F078DECu: goto label_7F078DEC;
    case 0x7F078EDCu: goto label_7F078EDC;
    case 0x7F078EF4u: goto label_7F078EF4;
    case 0x7F078EFCu: goto label_7F078EFC;
    case 0x7F078F10u: goto label_7F078F10;
    case 0x7F078F40u: goto label_7F078F40;
    case 0x7F078F48u: goto label_7F078F48;
    case 0x7F078F78u: goto label_7F078F78;
    case 0x7F078FB4u: goto label_7F078FB4;
    case 0x7F079020u: goto label_7F079020;
    case 0x7F0790B8u: goto label_7F0790B8;
    case 0x7F0790F4u: goto label_7F0790F4;
    case 0x7F079104u: goto label_7F079104;
    case 0x7F079154u: goto label_7F079154;
    case 0x7F07915Cu: goto label_7F07915C;
    case 0x7F079164u: goto label_7F079164;
    case 0x7F079178u: goto label_7F079178;
    case 0x7F0791BCu: goto label_7F0791BC;
    case 0x7F079240u: goto label_7F079240;
    case 0x7F079254u: goto label_7F079254;
    case 0x7F079260u: goto label_7F079260;
    case 0x7F07927Cu: goto label_7F07927C;
    case 0x7F079294u: goto label_7F079294;
    case 0x7F0792DCu: goto label_7F0792DC;
    case 0x7F0792E4u: goto label_7F0792E4;
    case 0x7F0792F4u: goto label_7F0792F4;
    case 0x7F079300u: goto label_7F079300;
    case 0x7F07931Cu: goto label_7F07931C;
    case 0x7F079334u: goto label_7F079334;
    case 0x7F079398u: goto label_7F079398;
    case 0x7F0793F8u: goto label_7F0793F8;
    case 0x7F0794B0u: goto label_7F0794B0;
    case 0x7F0794B8u: goto label_7F0794B8;
    case 0x7F0794F0u: goto label_7F0794F0;
    case 0x7F07951Cu: goto label_7F07951C;
    case 0x7F07955Cu: goto label_7F07955C;
    case 0x7F079564u: goto label_7F079564;
    case 0x7F07959Cu: goto label_7F07959C;
    case 0x7F079618u: goto label_7F079618;
    case 0x7F079648u: goto label_7F079648;
    case 0x7F079664u: goto label_7F079664;
    case 0x7F079690u: goto label_7F079690;
    case 0x7F079698u: goto label_7F079698;
    case 0x7F0796ACu: goto label_7F0796AC;
    case 0x7F079738u: goto label_7F079738;
    case 0x7F079754u: goto label_7F079754;
    case 0x7F079790u: goto label_7F079790;
    case 0x7F079798u: goto label_7F079798;
    case 0x7F0797ACu: goto label_7F0797AC;
    case 0x7F079848u: goto label_7F079848;
    case 0x7F079854u: goto label_7F079854;
    case 0x7F079908u: goto label_7F079908;
    case 0x7F079914u: goto label_7F079914;
    case 0x7F07992Cu: goto label_7F07992C;
    case 0x7F079994u: goto label_7F079994;
    case 0x7F0799E0u: goto label_7F0799E0;
    case 0x7F079A14u: goto label_7F079A14;
    case 0x7F079A24u: goto label_7F079A24;
    case 0x7F079A6Cu: goto label_7F079A6C;
    case 0x7F079AA0u: goto label_7F079AA0;
    case 0x7F079AFCu: goto label_7F079AFC;
    case 0x7F079B64u: goto label_7F079B64;
    case 0x7F079BC4u: goto label_7F079BC4;
    case 0x7F079C64u: goto label_7F079C64;
    case 0x7F079CE4u: goto label_7F079CE4;
    case 0x7F079D14u: goto label_7F079D14;
    case 0x7F079D24u: goto label_7F079D24;
    case 0x7F079D4Cu: goto label_7F079D4C;
    case 0x7F079D54u: goto label_7F079D54;
    case 0x7F079D6Cu: goto label_7F079D6C;
    case 0x7F079D80u: goto label_7F079D80;
    case 0x7F079D8Cu: goto label_7F079D8C;
    case 0x7F079D98u: goto label_7F079D98;
    case 0x7F079DA8u: goto label_7F079DA8;
    case 0x7F079DB0u: goto label_7F079DB0;
    case 0x7F079DB8u: goto label_7F079DB8;
    case 0x7F079DD0u: goto label_7F079DD0;
    case 0x7F079DDCu: goto label_7F079DDC;
    case 0x7F079DE8u: goto label_7F079DE8;
    case 0x7F079DF8u: goto label_7F079DF8;
    case 0x7F079E00u: goto label_7F079E00;
    case 0x7F079E08u: goto label_7F079E08;
    case 0x7F079E20u: goto label_7F079E20;
    case 0x7F079E2Cu: goto label_7F079E2C;
    case 0x7F079E64u: goto label_7F079E64;
    case 0x7F079EB0u: goto label_7F079EB0;
    case 0x7F079ED4u: goto label_7F079ED4;
    case 0x7F079EE4u: goto label_7F079EE4;
    case 0x7F079FF8u: goto label_7F079FF8;
    case 0x7F07A030u: goto label_7F07A030;
    case 0x7F07A038u: goto label_7F07A038;
    case 0x7F07A040u: goto label_7F07A040;
    case 0x7F07A048u: goto label_7F07A048;
    case 0x7F07A050u: goto label_7F07A050;
    case 0x7F07A094u: goto label_7F07A094;
    case 0x7F07A0A4u: goto label_7F07A0A4;
    case 0x7F07A0BCu: goto label_7F07A0BC;
    case 0x7F07A0E0u: goto label_7F07A0E0;
    case 0x7F07A104u: goto label_7F07A104;
    case 0x7F07A128u: goto label_7F07A128;
    case 0x7F07A144u: goto label_7F07A144;
    case 0x7F07A14Cu: goto label_7F07A14C;
    case 0x7F07A154u: goto label_7F07A154;
    case 0x7F07A15Cu: goto label_7F07A15C;
    case 0x7F07A164u: goto label_7F07A164;
    case 0x7F07A16Cu: goto label_7F07A16C;
    case 0x7F07A174u: goto label_7F07A174;
    case 0x7F07A17Cu: goto label_7F07A17C;
    case 0x7F07A184u: goto label_7F07A184;
    case 0x7F07A23Cu: goto label_7F07A23C;
    case 0x7F07A254u: goto label_7F07A254;
    case 0x7F07A2B0u: goto label_7F07A2B0;
    case 0x7F07A2F8u: goto label_7F07A2F8;
    case 0x7F07A3F0u: goto label_7F07A3F0;
    case 0x7F07A3F8u: goto label_7F07A3F8;
    case 0x7F07A40Cu: goto label_7F07A40C;
    case 0x7F07A478u: goto label_7F07A478;
    case 0x7F07A56Cu: goto label_7F07A56C;
    case 0x7F07A658u: goto label_7F07A658;
    case 0x7F07A69Cu: goto label_7F07A69C;
    case 0x7F07A6C8u: goto label_7F07A6C8;
    case 0x7F07A6D4u: goto label_7F07A6D4;
    case 0x7F07A6E0u: goto label_7F07A6E0;
    case 0x7F07A728u: goto label_7F07A728;
    case 0x7F07A738u: goto label_7F07A738;
    case 0x7F07A7D0u: goto label_7F07A7D0;
    case 0x7F07A7DCu: goto label_7F07A7DC;
    case 0x7F07A7E4u: goto label_7F07A7E4;
    case 0x7F07A7ECu: goto label_7F07A7EC;
    case 0x7F07A838u: goto label_7F07A838;
    case 0x7F07A868u: goto label_7F07A868;
    case 0x7F07A874u: goto label_7F07A874;
    case 0x7F07A89Cu: goto label_7F07A89C;
    case 0x7F07A8E0u: goto label_7F07A8E0;
    case 0x7F07A8ECu: goto label_7F07A8EC;
    case 0x7F07A8FCu: goto label_7F07A8FC;
    case 0x7F07A94Cu: goto label_7F07A94C;
    case 0x7F07A968u: goto label_7F07A968;
    case 0x7F07A97Cu: goto label_7F07A97C;
    case 0x7F07A98Cu: goto label_7F07A98C;
    case 0x7F07A9DCu: goto label_7F07A9DC;
    case 0x7F07AAE0u: goto label_7F07AAE0;
    case 0x7F07AB20u: goto label_7F07AB20;
    case 0x7F07AB70u: goto label_7F07AB70;
    case 0x7F07AB84u: goto label_7F07AB84;
    case 0x7F07AB8Cu: goto label_7F07AB8C;
    case 0x7F07AB94u: goto label_7F07AB94;
    case 0x7F07ABB0u: goto label_7F07ABB0;
    case 0x7F07ABC0u: goto label_7F07ABC0;
    case 0x7F07AC44u: goto label_7F07AC44;
    case 0x7F07AC4Cu: goto label_7F07AC4C;
    case 0x7F07AC54u: goto label_7F07AC54;
    case 0x7F07AC5Cu: goto label_7F07AC5C;
    case 0x7F07AC78u: goto label_7F07AC78;
    case 0x7F07AC80u: goto label_7F07AC80;
    case 0x7F07AC88u: goto label_7F07AC88;
    case 0x7F07ACBCu: goto label_7F07ACBC;
    case 0x7F07AD00u: goto label_7F07AD00;
    case 0x7F07AD2Cu: goto label_7F07AD2C;
    case 0x7F07AD4Cu: goto label_7F07AD4C;
    case 0x7F07AD5Cu: goto label_7F07AD5C;
    case 0x7F07AD84u: goto label_7F07AD84;
    case 0x7F07AE00u: goto label_7F07AE00;
    case 0x7F07AE70u: goto label_7F07AE70;
    case 0x7F07AE78u: goto label_7F07AE78;
    case 0x7F07AE80u: goto label_7F07AE80;
    case 0x7F07AE88u: goto label_7F07AE88;
    case 0x7F07AE98u: goto label_7F07AE98;
    case 0x7F07AEA8u: goto label_7F07AEA8;
    case 0x7F07AEB8u: goto label_7F07AEB8;
    case 0x7F07AEC0u: goto label_7F07AEC0;
    case 0x7F07AEC8u: goto label_7F07AEC8;
    case 0x7F07AECCu: goto label_7F07AECC;
    case 0x7F07AEE8u: goto label_7F07AEE8;
    case 0x7F07AEF8u: goto label_7F07AEF8;
    case 0x7F07AF08u: goto label_7F07AF08;
    case 0x7F07AF18u: goto label_7F07AF18;
    case 0x7F07AFECu: goto label_7F07AFEC;
    case 0x7F07B02Cu: goto label_7F07B02C;
    case 0x7F07B038u: goto label_7F07B038;
    case 0x7F07B058u: goto label_7F07B058;
    case 0x7F07B078u: goto label_7F07B078;
    case 0x7F07B0A8u: goto label_7F07B0A8;
    case 0x7F07B0B8u: goto label_7F07B0B8;
    case 0x7F07B0DCu: goto label_7F07B0DC;
    case 0x7F07B0E8u: goto label_7F07B0E8;
    case 0x7F07B0F0u: goto label_7F07B0F0;
    case 0x7F07B0F8u: goto label_7F07B0F8;
    case 0x7F07B104u: goto label_7F07B104;
    case 0x7F07B108u: goto label_7F07B108;
    case 0x7F07B150u: goto label_7F07B150;
    case 0x7F07B174u: goto label_7F07B174;
    case 0x7F07B180u: goto label_7F07B180;
    case 0x7F07B184u: goto label_7F07B184;
    case 0x7F07B198u: goto label_7F07B198;
    case 0x7F07B1A0u: goto label_7F07B1A0;
    case 0x7F07B1ACu: goto label_7F07B1AC;
    case 0x7F07B1B0u: goto label_7F07B1B0;
    case 0x7F07B1F8u: goto label_7F07B1F8;
    case 0x7F07B200u: goto label_7F07B200;
    case 0x7F07B20Cu: goto label_7F07B20C;
    case 0x7F07B210u: goto label_7F07B210;
    case 0x7F07B228u: goto label_7F07B228;
    case 0x7F07B234u: goto label_7F07B234;
    case 0x7F07B238u: goto label_7F07B238;
    case 0x7F07B2C8u: goto label_7F07B2C8;
    case 0x7F07B314u: goto label_7F07B314;
    case 0x7F07B324u: goto label_7F07B324;
    case 0x7F07B330u: goto label_7F07B330;
    case 0x7F07B3B0u: goto label_7F07B3B0;
    case 0x7F07B3B8u: goto label_7F07B3B8;
    case 0x7F07B3C4u: goto label_7F07B3C4;
    case 0x7F07B3D4u: goto label_7F07B3D4;
    case 0x7F07B3D8u: goto label_7F07B3D8;
    case 0x7F07B3E0u: goto label_7F07B3E0;
    case 0x7F07B3E8u: goto label_7F07B3E8;
    case 0x7F07B3ECu: goto label_7F07B3EC;
    case 0x7F07B40Cu: goto label_7F07B40C;
    case 0x7F07B42Cu: goto label_7F07B42C;
    case 0x7F07B438u: goto label_7F07B438;
    case 0x7F07B454u: goto label_7F07B454;
    case 0x7F07B460u: goto label_7F07B460;
    case 0x7F07B4B4u: goto label_7F07B4B4;
    case 0x7F07B4C8u: goto label_7F07B4C8;
    case 0x7F07B4DCu: goto label_7F07B4DC;
    case 0x7F07B564u: goto label_7F07B564;
    case 0x7F07B578u: goto label_7F07B578;
    case 0x7F07B58Cu: goto label_7F07B58C;
    case 0x7F07B5CCu: goto label_7F07B5CC;
    case 0x7F07B5E0u: goto label_7F07B5E0;
    case 0x7F07B5F4u: goto label_7F07B5F4;
    case 0x7F07B634u: goto label_7F07B634;
    case 0x7F07B648u: goto label_7F07B648;
    case 0x7F07B65Cu: goto label_7F07B65C;
    case 0x7F07B6A0u: goto label_7F07B6A0;
    case 0x7F07B6C4u: goto label_7F07B6C4;
    case 0x7F07B6DCu: goto label_7F07B6DC;
    case 0x7F07B708u: goto label_7F07B708;
    case 0x7F07B758u: goto label_7F07B758;
    case 0x7F07B764u: goto label_7F07B764;
    case 0x7F07B76Cu: goto label_7F07B76C;
    case 0x7F07B784u: goto label_7F07B784;
    case 0x7F07B79Cu: goto label_7F07B79C;
    case 0x7F07B7A4u: goto label_7F07B7A4;
    case 0x7F07B7B4u: goto label_7F07B7B4;
    case 0x7F07B7BCu: goto label_7F07B7BC;
    case 0x7F07B7C4u: goto label_7F07B7C4;
    case 0x7F07B7DCu: goto label_7F07B7DC;
    case 0x7F07B7E4u: goto label_7F07B7E4;
    case 0x7F07B844u: goto label_7F07B844;
    case 0x7F07B850u: goto label_7F07B850;
    case 0x7F07B85Cu: goto label_7F07B85C;
    case 0x7F07B8A8u: goto label_7F07B8A8;
    case 0x7F07B8B4u: goto label_7F07B8B4;
    case 0x7F07B8D0u: goto label_7F07B8D0;
    case 0x7F07B8E0u: goto label_7F07B8E0;
    case 0x7F07B8E8u: goto label_7F07B8E8;
    case 0x7F07B908u: goto label_7F07B908;
    case 0x7F07B914u: goto label_7F07B914;
    case 0x7F07B95Cu: goto label_7F07B95C;
    case 0x7F07B968u: goto label_7F07B968;
    case 0x7F07B9A0u: goto label_7F07B9A0;
    case 0x7F07B9BCu: goto label_7F07B9BC;
    case 0x7F07B9D4u: goto label_7F07B9D4;
    case 0x7F07B9E4u: goto label_7F07B9E4;
    case 0x7F07BA00u: goto label_7F07BA00;
    case 0x7F07BA10u: goto label_7F07BA10;
    case 0x7F07BA2Cu: goto label_7F07BA2C;
    case 0x7F07BA3Cu: goto label_7F07BA3C;
    case 0x7F07BA58u: goto label_7F07BA58;
    case 0x7F07BA68u: goto label_7F07BA68;
    case 0x7F07BA84u: goto label_7F07BA84;
    case 0x7F07BA94u: goto label_7F07BA94;
    case 0x7F07BAB0u: goto label_7F07BAB0;
    case 0x7F07BAC0u: goto label_7F07BAC0;
    case 0x7F07BADCu: goto label_7F07BADC;
    case 0x7F07BAECu: goto label_7F07BAEC;
    case 0x7F07BB1Cu: goto label_7F07BB1C;
    case 0x7F07BB70u: goto label_7F07BB70;
    case 0x7F07BBDCu: goto label_7F07BBDC;
    case 0x7F07BC1Cu: goto label_7F07BC1C;
    case 0x7F07BC40u: goto label_7F07BC40;
    case 0x7F07BC78u: goto label_7F07BC78;
    case 0x7F07BC98u: goto label_7F07BC98;
    case 0x7F07BCD4u: goto label_7F07BCD4;
    case 0x7F07BCE8u: goto label_7F07BCE8;
    case 0x7F07BCF4u: goto label_7F07BCF4;
    case 0x7F07BD04u: goto label_7F07BD04;
    case 0x7F07BD18u: goto label_7F07BD18;
    case 0x7F07BD20u: goto label_7F07BD20;
    case 0x7F07BD28u: goto label_7F07BD28;
    case 0x7F07BD30u: goto label_7F07BD30;
    case 0x7F07BD38u: goto label_7F07BD38;
    case 0x7F07BD40u: goto label_7F07BD40;
    case 0x7F07BD94u: goto label_7F07BD94;
    case 0x7F07BDA4u: goto label_7F07BDA4;
    case 0x7F07BDB0u: goto label_7F07BDB0;
    case 0x7F07BDC8u: goto label_7F07BDC8;
    case 0x7F07BDD4u: goto label_7F07BDD4;
    case 0x7F07BDF8u: goto label_7F07BDF8;
    case 0x7F07BE04u: goto label_7F07BE04;
    case 0x7F07BE80u: goto label_7F07BE80;
    case 0x7F07BE8Cu: goto label_7F07BE8C;
    case 0x7F07BE94u: goto label_7F07BE94;
    case 0x7F07BE9Cu: goto label_7F07BE9C;
    case 0x7F07BEA4u: goto label_7F07BEA4;
    case 0x7F07BEE4u: goto label_7F07BEE4;
    case 0x7F07BF00u: goto label_7F07BF00;
    case 0x7F07BF2Cu: goto label_7F07BF2C;
    case 0x7F07BF50u: goto label_7F07BF50;
    case 0x7F07BF9Cu: goto label_7F07BF9C;
    case 0x7F07BFBCu: goto label_7F07BFBC;
    case 0x7F07C028u: goto label_7F07C028;
    case 0x7F07C038u: goto label_7F07C038;
    case 0x7F07C0BCu: goto label_7F07C0BC;
    default: return;
    }
}

