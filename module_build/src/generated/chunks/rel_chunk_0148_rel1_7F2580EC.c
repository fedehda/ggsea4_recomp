// DolRecomp output
#include "../generated.h"

static void loop_7F258C18(CPUState* ctx) {
label_7F258C18:
    ctx->downcount -= 5;
    ctx->pc = 0x7F258C18u;
    // 7F258C18: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F258C1Cu;
    // 7F258C1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F258C20u;
    // 7F258C20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F258C24u;
    // 7F258C24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F258C28: bc    16, 0, 0x7F258C18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258C18u;
                return;
            }
            goto label_7F258C18;
        }
    }

    ctx->pc = 0x7F258C2Cu;
}

static void loop_7F258D14(CPUState* ctx) {
label_7F258D14:
    ctx->downcount -= 5;
    ctx->pc = 0x7F258D14u;
    // 7F258D14: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F258D18u;
    // 7F258D18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F258D1Cu;
    // 7F258D1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F258D20u;
    // 7F258D20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F258D24: bc    16, 0, 0x7F258D14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258D14u;
                return;
            }
            goto label_7F258D14;
        }
    }

    ctx->pc = 0x7F258D28u;
}

static void loop_7F25936C(CPUState* ctx) {
label_7F25936C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F25936Cu;
    // 7F25936C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F259370u;
    // 7F259370: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F259374u;
    // 7F259374: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F259378u;
    // 7F259378: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F25937C: bc    16, 0, 0x7F25936C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25936Cu;
                return;
            }
            goto label_7F25936C;
        }
    }

    ctx->pc = 0x7F259380u;
}

static void loop_7F259B50(CPUState* ctx) {
label_7F259B50:
    ctx->downcount -= 5;
    ctx->pc = 0x7F259B50u;
    // 7F259B50: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F259B54u;
    // 7F259B54: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F259B58u;
    // 7F259B58: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F259B5Cu;
    // 7F259B5C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F259B60: bc    16, 0, 0x7F259B50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259B50u;
                return;
            }
            goto label_7F259B50;
        }
    }

    ctx->pc = 0x7F259B64u;
}

static void loop_7F25A160(CPUState* ctx) {
label_7F25A160:
    ctx->downcount -= 5;
    ctx->pc = 0x7F25A160u;
    // 7F25A160: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F25A164u;
    // 7F25A164: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F25A168u;
    // 7F25A168: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F25A16Cu;
    // 7F25A16C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F25A170: bc    16, 0, 0x7F25A160
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A160u;
                return;
            }
            goto label_7F25A160;
        }
    }

    ctx->pc = 0x7F25A174u;
}

static void loop_7F25A26C(CPUState* ctx) {
label_7F25A26C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F25A26Cu;
    // 7F25A26C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F25A270u;
    // 7F25A270: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F25A274u;
    // 7F25A274: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F25A278u;
    // 7F25A278: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F25A27C: bc    16, 0, 0x7F25A26C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A26Cu;
                return;
            }
            goto label_7F25A26C;
        }
    }

    ctx->pc = 0x7F25A280u;
}

void func_7F2580EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2580ECu: goto label_7F2580EC;
    case 0x7F2580F0u: goto label_7F2580F0;
    case 0x7F2580F4u: goto label_7F2580F4;
    case 0x7F2580F8u: goto label_7F2580F8;
    case 0x7F2580FCu: goto label_7F2580FC;
    case 0x7F258100u: goto label_7F258100;
    case 0x7F258104u: goto label_7F258104;
    case 0x7F258108u: goto label_7F258108;
    case 0x7F25810Cu: goto label_7F25810C;
    case 0x7F258110u: goto label_7F258110;
    case 0x7F258114u: goto label_7F258114;
    case 0x7F258118u: goto label_7F258118;
    case 0x7F25811Cu: goto label_7F25811C;
    case 0x7F258120u: goto label_7F258120;
    case 0x7F258124u: goto label_7F258124;
    case 0x7F258128u: goto label_7F258128;
    case 0x7F25812Cu: goto label_7F25812C;
    case 0x7F258130u: goto label_7F258130;
    case 0x7F258134u: goto label_7F258134;
    case 0x7F258138u: goto label_7F258138;
    case 0x7F25813Cu: goto label_7F25813C;
    case 0x7F258140u: goto label_7F258140;
    case 0x7F258144u: goto label_7F258144;
    case 0x7F258148u: goto label_7F258148;
    case 0x7F25814Cu: goto label_7F25814C;
    case 0x7F258150u: goto label_7F258150;
    case 0x7F258154u: goto label_7F258154;
    case 0x7F258158u: goto label_7F258158;
    case 0x7F25815Cu: goto label_7F25815C;
    case 0x7F258160u: goto label_7F258160;
    case 0x7F258164u: goto label_7F258164;
    case 0x7F258168u: goto label_7F258168;
    case 0x7F25816Cu: goto label_7F25816C;
    case 0x7F258170u: goto label_7F258170;
    case 0x7F258174u: goto label_7F258174;
    case 0x7F258178u: goto label_7F258178;
    case 0x7F25817Cu: goto label_7F25817C;
    case 0x7F258180u: goto label_7F258180;
    case 0x7F258184u: goto label_7F258184;
    case 0x7F258188u: goto label_7F258188;
    case 0x7F25818Cu: goto label_7F25818C;
    case 0x7F258190u: goto label_7F258190;
    case 0x7F258194u: goto label_7F258194;
    case 0x7F258198u: goto label_7F258198;
    case 0x7F25819Cu: goto label_7F25819C;
    case 0x7F2581A0u: goto label_7F2581A0;
    case 0x7F2581A4u: goto label_7F2581A4;
    case 0x7F2581A8u: goto label_7F2581A8;
    case 0x7F2581ACu: goto label_7F2581AC;
    case 0x7F2581B0u: goto label_7F2581B0;
    case 0x7F2581B4u: goto label_7F2581B4;
    case 0x7F2581B8u: goto label_7F2581B8;
    case 0x7F2581BCu: goto label_7F2581BC;
    case 0x7F2581C0u: goto label_7F2581C0;
    case 0x7F2581C4u: goto label_7F2581C4;
    case 0x7F2581C8u: goto label_7F2581C8;
    case 0x7F2581CCu: goto label_7F2581CC;
    case 0x7F2581D0u: goto label_7F2581D0;
    case 0x7F2581D4u: goto label_7F2581D4;
    case 0x7F2581D8u: goto label_7F2581D8;
    case 0x7F2581DCu: goto label_7F2581DC;
    case 0x7F2581E0u: goto label_7F2581E0;
    case 0x7F2581E4u: goto label_7F2581E4;
    case 0x7F2581E8u: goto label_7F2581E8;
    case 0x7F2581ECu: goto label_7F2581EC;
    case 0x7F2581F0u: goto label_7F2581F0;
    case 0x7F2581F4u: goto label_7F2581F4;
    case 0x7F2581F8u: goto label_7F2581F8;
    case 0x7F2581FCu: goto label_7F2581FC;
    case 0x7F258200u: goto label_7F258200;
    case 0x7F258204u: goto label_7F258204;
    case 0x7F258208u: goto label_7F258208;
    case 0x7F25820Cu: goto label_7F25820C;
    case 0x7F258210u: goto label_7F258210;
    case 0x7F258214u: goto label_7F258214;
    case 0x7F258218u: goto label_7F258218;
    case 0x7F25821Cu: goto label_7F25821C;
    case 0x7F258220u: goto label_7F258220;
    case 0x7F258224u: goto label_7F258224;
    case 0x7F258228u: goto label_7F258228;
    case 0x7F25822Cu: goto label_7F25822C;
    case 0x7F258230u: goto label_7F258230;
    case 0x7F258234u: goto label_7F258234;
    case 0x7F258238u: goto label_7F258238;
    case 0x7F25823Cu: goto label_7F25823C;
    case 0x7F258240u: goto label_7F258240;
    case 0x7F258244u: goto label_7F258244;
    case 0x7F258248u: goto label_7F258248;
    case 0x7F25824Cu: goto label_7F25824C;
    case 0x7F258250u: goto label_7F258250;
    case 0x7F258254u: goto label_7F258254;
    case 0x7F258258u: goto label_7F258258;
    case 0x7F25825Cu: goto label_7F25825C;
    case 0x7F258260u: goto label_7F258260;
    case 0x7F258264u: goto label_7F258264;
    case 0x7F258268u: goto label_7F258268;
    case 0x7F25826Cu: goto label_7F25826C;
    case 0x7F258270u: goto label_7F258270;
    case 0x7F258274u: goto label_7F258274;
    case 0x7F258278u: goto label_7F258278;
    case 0x7F25827Cu: goto label_7F25827C;
    case 0x7F258280u: goto label_7F258280;
    case 0x7F258284u: goto label_7F258284;
    case 0x7F258288u: goto label_7F258288;
    case 0x7F25828Cu: goto label_7F25828C;
    case 0x7F258290u: goto label_7F258290;
    case 0x7F258294u: goto label_7F258294;
    case 0x7F258298u: goto label_7F258298;
    case 0x7F25829Cu: goto label_7F25829C;
    case 0x7F2582A0u: goto label_7F2582A0;
    case 0x7F2582A4u: goto label_7F2582A4;
    case 0x7F2582A8u: goto label_7F2582A8;
    case 0x7F2582ACu: goto label_7F2582AC;
    case 0x7F2582B0u: goto label_7F2582B0;
    case 0x7F2582B4u: goto label_7F2582B4;
    case 0x7F2582B8u: goto label_7F2582B8;
    case 0x7F2582BCu: goto label_7F2582BC;
    case 0x7F2582C0u: goto label_7F2582C0;
    case 0x7F2582C4u: goto label_7F2582C4;
    case 0x7F2582C8u: goto label_7F2582C8;
    case 0x7F2582CCu: goto label_7F2582CC;
    case 0x7F2582D0u: goto label_7F2582D0;
    case 0x7F2582D4u: goto label_7F2582D4;
    case 0x7F2582D8u: goto label_7F2582D8;
    case 0x7F2582DCu: goto label_7F2582DC;
    case 0x7F2582E0u: goto label_7F2582E0;
    case 0x7F2582E4u: goto label_7F2582E4;
    case 0x7F2582E8u: goto label_7F2582E8;
    case 0x7F2582ECu: goto label_7F2582EC;
    case 0x7F2582F0u: goto label_7F2582F0;
    case 0x7F2582F4u: goto label_7F2582F4;
    case 0x7F2582F8u: goto label_7F2582F8;
    case 0x7F2582FCu: goto label_7F2582FC;
    case 0x7F258300u: goto label_7F258300;
    case 0x7F258304u: goto label_7F258304;
    case 0x7F258308u: goto label_7F258308;
    case 0x7F25830Cu: goto label_7F25830C;
    case 0x7F258310u: goto label_7F258310;
    case 0x7F258314u: goto label_7F258314;
    case 0x7F258318u: goto label_7F258318;
    case 0x7F25831Cu: goto label_7F25831C;
    case 0x7F258320u: goto label_7F258320;
    case 0x7F258324u: goto label_7F258324;
    case 0x7F258328u: goto label_7F258328;
    case 0x7F25832Cu: goto label_7F25832C;
    case 0x7F258330u: goto label_7F258330;
    case 0x7F258334u: goto label_7F258334;
    case 0x7F258338u: goto label_7F258338;
    case 0x7F25833Cu: goto label_7F25833C;
    case 0x7F258340u: goto label_7F258340;
    case 0x7F258344u: goto label_7F258344;
    case 0x7F258348u: goto label_7F258348;
    case 0x7F25834Cu: goto label_7F25834C;
    case 0x7F258350u: goto label_7F258350;
    case 0x7F258354u: goto label_7F258354;
    case 0x7F258358u: goto label_7F258358;
    case 0x7F25835Cu: goto label_7F25835C;
    case 0x7F258360u: goto label_7F258360;
    case 0x7F258364u: goto label_7F258364;
    case 0x7F258368u: goto label_7F258368;
    case 0x7F25836Cu: goto label_7F25836C;
    case 0x7F258370u: goto label_7F258370;
    case 0x7F258374u: goto label_7F258374;
    case 0x7F258378u: goto label_7F258378;
    case 0x7F25837Cu: goto label_7F25837C;
    case 0x7F258380u: goto label_7F258380;
    case 0x7F258384u: goto label_7F258384;
    case 0x7F258388u: goto label_7F258388;
    case 0x7F25838Cu: goto label_7F25838C;
    case 0x7F258390u: goto label_7F258390;
    case 0x7F258394u: goto label_7F258394;
    case 0x7F258398u: goto label_7F258398;
    case 0x7F25839Cu: goto label_7F25839C;
    case 0x7F2583A0u: goto label_7F2583A0;
    case 0x7F2583A4u: goto label_7F2583A4;
    case 0x7F2583A8u: goto label_7F2583A8;
    case 0x7F2583ACu: goto label_7F2583AC;
    case 0x7F2583B0u: goto label_7F2583B0;
    case 0x7F2583B4u: goto label_7F2583B4;
    case 0x7F2583B8u: goto label_7F2583B8;
    case 0x7F2583BCu: goto label_7F2583BC;
    case 0x7F2583C0u: goto label_7F2583C0;
    case 0x7F2583C4u: goto label_7F2583C4;
    case 0x7F2583C8u: goto label_7F2583C8;
    case 0x7F2583CCu: goto label_7F2583CC;
    case 0x7F2583D0u: goto label_7F2583D0;
    case 0x7F2583D4u: goto label_7F2583D4;
    case 0x7F2583D8u: goto label_7F2583D8;
    case 0x7F2583DCu: goto label_7F2583DC;
    case 0x7F2583E0u: goto label_7F2583E0;
    case 0x7F2583E4u: goto label_7F2583E4;
    case 0x7F2583E8u: goto label_7F2583E8;
    case 0x7F2583ECu: goto label_7F2583EC;
    case 0x7F2583F0u: goto label_7F2583F0;
    case 0x7F2583F4u: goto label_7F2583F4;
    case 0x7F2583F8u: goto label_7F2583F8;
    case 0x7F2583FCu: goto label_7F2583FC;
    case 0x7F258400u: goto label_7F258400;
    case 0x7F258404u: goto label_7F258404;
    case 0x7F258408u: goto label_7F258408;
    case 0x7F25840Cu: goto label_7F25840C;
    case 0x7F258410u: goto label_7F258410;
    case 0x7F258414u: goto label_7F258414;
    case 0x7F258418u: goto label_7F258418;
    case 0x7F25841Cu: goto label_7F25841C;
    case 0x7F258420u: goto label_7F258420;
    case 0x7F258424u: goto label_7F258424;
    case 0x7F258428u: goto label_7F258428;
    case 0x7F25842Cu: goto label_7F25842C;
    case 0x7F258430u: goto label_7F258430;
    case 0x7F258434u: goto label_7F258434;
    case 0x7F258438u: goto label_7F258438;
    case 0x7F25843Cu: goto label_7F25843C;
    case 0x7F258440u: goto label_7F258440;
    case 0x7F258444u: goto label_7F258444;
    case 0x7F258448u: goto label_7F258448;
    case 0x7F25844Cu: goto label_7F25844C;
    case 0x7F258450u: goto label_7F258450;
    case 0x7F258454u: goto label_7F258454;
    case 0x7F258458u: goto label_7F258458;
    case 0x7F25845Cu: goto label_7F25845C;
    case 0x7F258460u: goto label_7F258460;
    case 0x7F258464u: goto label_7F258464;
    case 0x7F258468u: goto label_7F258468;
    case 0x7F25846Cu: goto label_7F25846C;
    case 0x7F258470u: goto label_7F258470;
    case 0x7F258474u: goto label_7F258474;
    case 0x7F258478u: goto label_7F258478;
    case 0x7F25847Cu: goto label_7F25847C;
    case 0x7F258480u: goto label_7F258480;
    case 0x7F258484u: goto label_7F258484;
    case 0x7F258488u: goto label_7F258488;
    case 0x7F25848Cu: goto label_7F25848C;
    case 0x7F258490u: goto label_7F258490;
    case 0x7F258494u: goto label_7F258494;
    case 0x7F258498u: goto label_7F258498;
    case 0x7F25849Cu: goto label_7F25849C;
    case 0x7F2584A0u: goto label_7F2584A0;
    case 0x7F2584A4u: goto label_7F2584A4;
    case 0x7F2584A8u: goto label_7F2584A8;
    case 0x7F2584ACu: goto label_7F2584AC;
    case 0x7F2584B0u: goto label_7F2584B0;
    case 0x7F2584B4u: goto label_7F2584B4;
    case 0x7F2584B8u: goto label_7F2584B8;
    case 0x7F2584BCu: goto label_7F2584BC;
    case 0x7F2584C0u: goto label_7F2584C0;
    case 0x7F2584C4u: goto label_7F2584C4;
    case 0x7F2584C8u: goto label_7F2584C8;
    case 0x7F2584CCu: goto label_7F2584CC;
    case 0x7F2584D0u: goto label_7F2584D0;
    case 0x7F2584D4u: goto label_7F2584D4;
    case 0x7F2584D8u: goto label_7F2584D8;
    case 0x7F2584DCu: goto label_7F2584DC;
    case 0x7F2584E0u: goto label_7F2584E0;
    case 0x7F2584E4u: goto label_7F2584E4;
    case 0x7F2584E8u: goto label_7F2584E8;
    case 0x7F2584ECu: goto label_7F2584EC;
    case 0x7F2584F0u: goto label_7F2584F0;
    case 0x7F2584F4u: goto label_7F2584F4;
    case 0x7F2584F8u: goto label_7F2584F8;
    case 0x7F2584FCu: goto label_7F2584FC;
    case 0x7F258500u: goto label_7F258500;
    case 0x7F258504u: goto label_7F258504;
    case 0x7F258508u: goto label_7F258508;
    case 0x7F25850Cu: goto label_7F25850C;
    case 0x7F258510u: goto label_7F258510;
    case 0x7F258514u: goto label_7F258514;
    case 0x7F258518u: goto label_7F258518;
    case 0x7F25851Cu: goto label_7F25851C;
    case 0x7F258520u: goto label_7F258520;
    case 0x7F258524u: goto label_7F258524;
    case 0x7F258528u: goto label_7F258528;
    case 0x7F25852Cu: goto label_7F25852C;
    case 0x7F258530u: goto label_7F258530;
    case 0x7F258534u: goto label_7F258534;
    case 0x7F258538u: goto label_7F258538;
    case 0x7F25853Cu: goto label_7F25853C;
    case 0x7F258540u: goto label_7F258540;
    case 0x7F258544u: goto label_7F258544;
    case 0x7F258548u: goto label_7F258548;
    case 0x7F25854Cu: goto label_7F25854C;
    case 0x7F258550u: goto label_7F258550;
    case 0x7F258554u: goto label_7F258554;
    case 0x7F258558u: goto label_7F258558;
    case 0x7F25855Cu: goto label_7F25855C;
    case 0x7F258560u: goto label_7F258560;
    case 0x7F258564u: goto label_7F258564;
    case 0x7F258568u: goto label_7F258568;
    case 0x7F25856Cu: goto label_7F25856C;
    case 0x7F258570u: goto label_7F258570;
    case 0x7F258574u: goto label_7F258574;
    case 0x7F258578u: goto label_7F258578;
    case 0x7F25857Cu: goto label_7F25857C;
    case 0x7F258580u: goto label_7F258580;
    case 0x7F258584u: goto label_7F258584;
    case 0x7F258588u: goto label_7F258588;
    case 0x7F25858Cu: goto label_7F25858C;
    case 0x7F258590u: goto label_7F258590;
    case 0x7F258594u: goto label_7F258594;
    case 0x7F258598u: goto label_7F258598;
    case 0x7F25859Cu: goto label_7F25859C;
    case 0x7F2585A0u: goto label_7F2585A0;
    case 0x7F2585A4u: goto label_7F2585A4;
    case 0x7F2585A8u: goto label_7F2585A8;
    case 0x7F2585ACu: goto label_7F2585AC;
    case 0x7F2585B0u: goto label_7F2585B0;
    case 0x7F2585B4u: goto label_7F2585B4;
    case 0x7F2585B8u: goto label_7F2585B8;
    case 0x7F2585BCu: goto label_7F2585BC;
    case 0x7F2585C0u: goto label_7F2585C0;
    case 0x7F2585C4u: goto label_7F2585C4;
    case 0x7F2585C8u: goto label_7F2585C8;
    case 0x7F2585CCu: goto label_7F2585CC;
    case 0x7F2585D0u: goto label_7F2585D0;
    case 0x7F2585D4u: goto label_7F2585D4;
    case 0x7F2585D8u: goto label_7F2585D8;
    case 0x7F2585DCu: goto label_7F2585DC;
    case 0x7F2585E0u: goto label_7F2585E0;
    case 0x7F2585E4u: goto label_7F2585E4;
    case 0x7F2585E8u: goto label_7F2585E8;
    case 0x7F2585ECu: goto label_7F2585EC;
    case 0x7F2585F0u: goto label_7F2585F0;
    case 0x7F2585F4u: goto label_7F2585F4;
    case 0x7F2585F8u: goto label_7F2585F8;
    case 0x7F2585FCu: goto label_7F2585FC;
    case 0x7F258600u: goto label_7F258600;
    case 0x7F258604u: goto label_7F258604;
    case 0x7F258608u: goto label_7F258608;
    case 0x7F25860Cu: goto label_7F25860C;
    case 0x7F258610u: goto label_7F258610;
    case 0x7F258614u: goto label_7F258614;
    case 0x7F258618u: goto label_7F258618;
    case 0x7F25861Cu: goto label_7F25861C;
    case 0x7F258620u: goto label_7F258620;
    case 0x7F258624u: goto label_7F258624;
    case 0x7F258628u: goto label_7F258628;
    case 0x7F25862Cu: goto label_7F25862C;
    case 0x7F258630u: goto label_7F258630;
    case 0x7F258634u: goto label_7F258634;
    case 0x7F258638u: goto label_7F258638;
    case 0x7F25863Cu: goto label_7F25863C;
    case 0x7F258640u: goto label_7F258640;
    case 0x7F258644u: goto label_7F258644;
    case 0x7F258648u: goto label_7F258648;
    case 0x7F25864Cu: goto label_7F25864C;
    case 0x7F258650u: goto label_7F258650;
    case 0x7F258654u: goto label_7F258654;
    case 0x7F258658u: goto label_7F258658;
    case 0x7F25865Cu: goto label_7F25865C;
    case 0x7F258660u: goto label_7F258660;
    case 0x7F258664u: goto label_7F258664;
    case 0x7F258668u: goto label_7F258668;
    case 0x7F25866Cu: goto label_7F25866C;
    case 0x7F258670u: goto label_7F258670;
    case 0x7F258674u: goto label_7F258674;
    case 0x7F258678u: goto label_7F258678;
    case 0x7F25867Cu: goto label_7F25867C;
    case 0x7F258680u: goto label_7F258680;
    case 0x7F258684u: goto label_7F258684;
    case 0x7F258688u: goto label_7F258688;
    case 0x7F25868Cu: goto label_7F25868C;
    case 0x7F258690u: goto label_7F258690;
    case 0x7F258694u: goto label_7F258694;
    case 0x7F258698u: goto label_7F258698;
    case 0x7F25869Cu: goto label_7F25869C;
    case 0x7F2586A0u: goto label_7F2586A0;
    case 0x7F2586A4u: goto label_7F2586A4;
    case 0x7F2586A8u: goto label_7F2586A8;
    case 0x7F2586ACu: goto label_7F2586AC;
    case 0x7F2586B0u: goto label_7F2586B0;
    case 0x7F2586B4u: goto label_7F2586B4;
    case 0x7F2586B8u: goto label_7F2586B8;
    case 0x7F2586BCu: goto label_7F2586BC;
    case 0x7F2586C0u: goto label_7F2586C0;
    case 0x7F2586C4u: goto label_7F2586C4;
    case 0x7F2586C8u: goto label_7F2586C8;
    case 0x7F2586CCu: goto label_7F2586CC;
    case 0x7F2586D0u: goto label_7F2586D0;
    case 0x7F2586D4u: goto label_7F2586D4;
    case 0x7F2586D8u: goto label_7F2586D8;
    case 0x7F2586DCu: goto label_7F2586DC;
    case 0x7F2586E0u: goto label_7F2586E0;
    case 0x7F2586E4u: goto label_7F2586E4;
    case 0x7F2586E8u: goto label_7F2586E8;
    case 0x7F2586ECu: goto label_7F2586EC;
    case 0x7F2586F0u: goto label_7F2586F0;
    case 0x7F2586F4u: goto label_7F2586F4;
    case 0x7F2586F8u: goto label_7F2586F8;
    case 0x7F2586FCu: goto label_7F2586FC;
    case 0x7F258700u: goto label_7F258700;
    case 0x7F258704u: goto label_7F258704;
    case 0x7F258708u: goto label_7F258708;
    case 0x7F25870Cu: goto label_7F25870C;
    case 0x7F258710u: goto label_7F258710;
    case 0x7F258714u: goto label_7F258714;
    case 0x7F258718u: goto label_7F258718;
    case 0x7F25871Cu: goto label_7F25871C;
    case 0x7F258720u: goto label_7F258720;
    case 0x7F258724u: goto label_7F258724;
    case 0x7F258728u: goto label_7F258728;
    case 0x7F25872Cu: goto label_7F25872C;
    case 0x7F258730u: goto label_7F258730;
    case 0x7F258734u: goto label_7F258734;
    case 0x7F258738u: goto label_7F258738;
    case 0x7F25873Cu: goto label_7F25873C;
    case 0x7F258740u: goto label_7F258740;
    case 0x7F258744u: goto label_7F258744;
    case 0x7F258748u: goto label_7F258748;
    case 0x7F25874Cu: goto label_7F25874C;
    case 0x7F258750u: goto label_7F258750;
    case 0x7F258754u: goto label_7F258754;
    case 0x7F258758u: goto label_7F258758;
    case 0x7F25875Cu: goto label_7F25875C;
    case 0x7F258760u: goto label_7F258760;
    case 0x7F258764u: goto label_7F258764;
    case 0x7F258768u: goto label_7F258768;
    case 0x7F25876Cu: goto label_7F25876C;
    case 0x7F258770u: goto label_7F258770;
    case 0x7F258774u: goto label_7F258774;
    case 0x7F258778u: goto label_7F258778;
    case 0x7F25877Cu: goto label_7F25877C;
    case 0x7F258780u: goto label_7F258780;
    case 0x7F258784u: goto label_7F258784;
    case 0x7F258788u: goto label_7F258788;
    case 0x7F25878Cu: goto label_7F25878C;
    case 0x7F258790u: goto label_7F258790;
    case 0x7F258794u: goto label_7F258794;
    case 0x7F258798u: goto label_7F258798;
    case 0x7F25879Cu: goto label_7F25879C;
    case 0x7F2587A0u: goto label_7F2587A0;
    case 0x7F2587A4u: goto label_7F2587A4;
    case 0x7F2587A8u: goto label_7F2587A8;
    case 0x7F2587ACu: goto label_7F2587AC;
    case 0x7F2587B0u: goto label_7F2587B0;
    case 0x7F2587B4u: goto label_7F2587B4;
    case 0x7F2587B8u: goto label_7F2587B8;
    case 0x7F2587BCu: goto label_7F2587BC;
    case 0x7F2587C0u: goto label_7F2587C0;
    case 0x7F2587C4u: goto label_7F2587C4;
    case 0x7F2587C8u: goto label_7F2587C8;
    case 0x7F2587CCu: goto label_7F2587CC;
    case 0x7F2587D0u: goto label_7F2587D0;
    case 0x7F2587D4u: goto label_7F2587D4;
    case 0x7F2587D8u: goto label_7F2587D8;
    case 0x7F2587DCu: goto label_7F2587DC;
    case 0x7F2587E0u: goto label_7F2587E0;
    case 0x7F2587E4u: goto label_7F2587E4;
    case 0x7F2587E8u: goto label_7F2587E8;
    case 0x7F2587ECu: goto label_7F2587EC;
    case 0x7F2587F0u: goto label_7F2587F0;
    case 0x7F2587F4u: goto label_7F2587F4;
    case 0x7F2587F8u: goto label_7F2587F8;
    case 0x7F2587FCu: goto label_7F2587FC;
    case 0x7F258800u: goto label_7F258800;
    case 0x7F258804u: goto label_7F258804;
    case 0x7F258808u: goto label_7F258808;
    case 0x7F25880Cu: goto label_7F25880C;
    case 0x7F258810u: goto label_7F258810;
    case 0x7F258814u: goto label_7F258814;
    case 0x7F258818u: goto label_7F258818;
    case 0x7F25881Cu: goto label_7F25881C;
    case 0x7F258820u: goto label_7F258820;
    case 0x7F258824u: goto label_7F258824;
    case 0x7F258828u: goto label_7F258828;
    case 0x7F25882Cu: goto label_7F25882C;
    case 0x7F258830u: goto label_7F258830;
    case 0x7F258834u: goto label_7F258834;
    case 0x7F258838u: goto label_7F258838;
    case 0x7F25883Cu: goto label_7F25883C;
    case 0x7F258840u: goto label_7F258840;
    case 0x7F258844u: goto label_7F258844;
    case 0x7F258848u: goto label_7F258848;
    case 0x7F25884Cu: goto label_7F25884C;
    case 0x7F258850u: goto label_7F258850;
    case 0x7F258854u: goto label_7F258854;
    case 0x7F258858u: goto label_7F258858;
    case 0x7F25885Cu: goto label_7F25885C;
    case 0x7F258860u: goto label_7F258860;
    case 0x7F258864u: goto label_7F258864;
    case 0x7F258868u: goto label_7F258868;
    case 0x7F25886Cu: goto label_7F25886C;
    case 0x7F258870u: goto label_7F258870;
    case 0x7F258874u: goto label_7F258874;
    case 0x7F258878u: goto label_7F258878;
    case 0x7F25887Cu: goto label_7F25887C;
    case 0x7F258880u: goto label_7F258880;
    case 0x7F258884u: goto label_7F258884;
    case 0x7F258888u: goto label_7F258888;
    case 0x7F25888Cu: goto label_7F25888C;
    case 0x7F258890u: goto label_7F258890;
    case 0x7F258894u: goto label_7F258894;
    case 0x7F258898u: goto label_7F258898;
    case 0x7F25889Cu: goto label_7F25889C;
    case 0x7F2588A0u: goto label_7F2588A0;
    case 0x7F2588A4u: goto label_7F2588A4;
    case 0x7F2588A8u: goto label_7F2588A8;
    case 0x7F2588ACu: goto label_7F2588AC;
    case 0x7F2588B0u: goto label_7F2588B0;
    case 0x7F2588B4u: goto label_7F2588B4;
    case 0x7F2588B8u: goto label_7F2588B8;
    case 0x7F2588BCu: goto label_7F2588BC;
    case 0x7F2588C0u: goto label_7F2588C0;
    case 0x7F2588C4u: goto label_7F2588C4;
    case 0x7F2588C8u: goto label_7F2588C8;
    case 0x7F2588CCu: goto label_7F2588CC;
    case 0x7F2588D0u: goto label_7F2588D0;
    case 0x7F2588D4u: goto label_7F2588D4;
    case 0x7F2588D8u: goto label_7F2588D8;
    case 0x7F2588DCu: goto label_7F2588DC;
    case 0x7F2588E0u: goto label_7F2588E0;
    case 0x7F2588E4u: goto label_7F2588E4;
    case 0x7F2588E8u: goto label_7F2588E8;
    case 0x7F2588ECu: goto label_7F2588EC;
    case 0x7F2588F0u: goto label_7F2588F0;
    case 0x7F2588F4u: goto label_7F2588F4;
    case 0x7F2588F8u: goto label_7F2588F8;
    case 0x7F2588FCu: goto label_7F2588FC;
    case 0x7F258900u: goto label_7F258900;
    case 0x7F258904u: goto label_7F258904;
    case 0x7F258908u: goto label_7F258908;
    case 0x7F25890Cu: goto label_7F25890C;
    case 0x7F258910u: goto label_7F258910;
    case 0x7F258914u: goto label_7F258914;
    case 0x7F258918u: goto label_7F258918;
    case 0x7F25891Cu: goto label_7F25891C;
    case 0x7F258920u: goto label_7F258920;
    case 0x7F258924u: goto label_7F258924;
    case 0x7F258928u: goto label_7F258928;
    case 0x7F25892Cu: goto label_7F25892C;
    case 0x7F258930u: goto label_7F258930;
    case 0x7F258934u: goto label_7F258934;
    case 0x7F258938u: goto label_7F258938;
    case 0x7F25893Cu: goto label_7F25893C;
    case 0x7F258940u: goto label_7F258940;
    case 0x7F258944u: goto label_7F258944;
    case 0x7F258948u: goto label_7F258948;
    case 0x7F25894Cu: goto label_7F25894C;
    case 0x7F258950u: goto label_7F258950;
    case 0x7F258954u: goto label_7F258954;
    case 0x7F258958u: goto label_7F258958;
    case 0x7F25895Cu: goto label_7F25895C;
    case 0x7F258960u: goto label_7F258960;
    case 0x7F258964u: goto label_7F258964;
    case 0x7F258968u: goto label_7F258968;
    case 0x7F25896Cu: goto label_7F25896C;
    case 0x7F258970u: goto label_7F258970;
    case 0x7F258974u: goto label_7F258974;
    case 0x7F258978u: goto label_7F258978;
    case 0x7F25897Cu: goto label_7F25897C;
    case 0x7F258980u: goto label_7F258980;
    case 0x7F258984u: goto label_7F258984;
    case 0x7F258988u: goto label_7F258988;
    case 0x7F25898Cu: goto label_7F25898C;
    case 0x7F258990u: goto label_7F258990;
    case 0x7F258994u: goto label_7F258994;
    case 0x7F258998u: goto label_7F258998;
    case 0x7F25899Cu: goto label_7F25899C;
    case 0x7F2589A0u: goto label_7F2589A0;
    case 0x7F2589A4u: goto label_7F2589A4;
    case 0x7F2589A8u: goto label_7F2589A8;
    case 0x7F2589ACu: goto label_7F2589AC;
    case 0x7F2589B0u: goto label_7F2589B0;
    case 0x7F2589B4u: goto label_7F2589B4;
    case 0x7F2589B8u: goto label_7F2589B8;
    case 0x7F2589BCu: goto label_7F2589BC;
    case 0x7F2589C0u: goto label_7F2589C0;
    case 0x7F2589C4u: goto label_7F2589C4;
    case 0x7F2589C8u: goto label_7F2589C8;
    case 0x7F2589CCu: goto label_7F2589CC;
    case 0x7F2589D0u: goto label_7F2589D0;
    case 0x7F2589D4u: goto label_7F2589D4;
    case 0x7F2589D8u: goto label_7F2589D8;
    case 0x7F2589DCu: goto label_7F2589DC;
    case 0x7F2589E0u: goto label_7F2589E0;
    case 0x7F2589E4u: goto label_7F2589E4;
    case 0x7F2589E8u: goto label_7F2589E8;
    case 0x7F2589ECu: goto label_7F2589EC;
    case 0x7F2589F0u: goto label_7F2589F0;
    case 0x7F2589F4u: goto label_7F2589F4;
    case 0x7F2589F8u: goto label_7F2589F8;
    case 0x7F2589FCu: goto label_7F2589FC;
    case 0x7F258A00u: goto label_7F258A00;
    case 0x7F258A04u: goto label_7F258A04;
    case 0x7F258A08u: goto label_7F258A08;
    case 0x7F258A0Cu: goto label_7F258A0C;
    case 0x7F258A10u: goto label_7F258A10;
    case 0x7F258A14u: goto label_7F258A14;
    case 0x7F258A18u: goto label_7F258A18;
    case 0x7F258A1Cu: goto label_7F258A1C;
    case 0x7F258A20u: goto label_7F258A20;
    case 0x7F258A24u: goto label_7F258A24;
    case 0x7F258A28u: goto label_7F258A28;
    case 0x7F258A2Cu: goto label_7F258A2C;
    case 0x7F258A30u: goto label_7F258A30;
    case 0x7F258A34u: goto label_7F258A34;
    case 0x7F258A38u: goto label_7F258A38;
    case 0x7F258A3Cu: goto label_7F258A3C;
    case 0x7F258A40u: goto label_7F258A40;
    case 0x7F258A44u: goto label_7F258A44;
    case 0x7F258A48u: goto label_7F258A48;
    case 0x7F258A4Cu: goto label_7F258A4C;
    case 0x7F258A50u: goto label_7F258A50;
    case 0x7F258A54u: goto label_7F258A54;
    case 0x7F258A58u: goto label_7F258A58;
    case 0x7F258A5Cu: goto label_7F258A5C;
    case 0x7F258A60u: goto label_7F258A60;
    case 0x7F258A64u: goto label_7F258A64;
    case 0x7F258A68u: goto label_7F258A68;
    case 0x7F258A6Cu: goto label_7F258A6C;
    case 0x7F258A70u: goto label_7F258A70;
    case 0x7F258A74u: goto label_7F258A74;
    case 0x7F258A78u: goto label_7F258A78;
    case 0x7F258A7Cu: goto label_7F258A7C;
    case 0x7F258A80u: goto label_7F258A80;
    case 0x7F258A84u: goto label_7F258A84;
    case 0x7F258A88u: goto label_7F258A88;
    case 0x7F258A8Cu: goto label_7F258A8C;
    case 0x7F258A90u: goto label_7F258A90;
    case 0x7F258A94u: goto label_7F258A94;
    case 0x7F258A98u: goto label_7F258A98;
    case 0x7F258A9Cu: goto label_7F258A9C;
    case 0x7F258AA0u: goto label_7F258AA0;
    case 0x7F258AA4u: goto label_7F258AA4;
    case 0x7F258AA8u: goto label_7F258AA8;
    case 0x7F258AACu: goto label_7F258AAC;
    case 0x7F258AB0u: goto label_7F258AB0;
    case 0x7F258AB4u: goto label_7F258AB4;
    case 0x7F258AB8u: goto label_7F258AB8;
    case 0x7F258ABCu: goto label_7F258ABC;
    case 0x7F258AC0u: goto label_7F258AC0;
    case 0x7F258AC4u: goto label_7F258AC4;
    case 0x7F258AC8u: goto label_7F258AC8;
    case 0x7F258ACCu: goto label_7F258ACC;
    case 0x7F258AD0u: goto label_7F258AD0;
    case 0x7F258AD4u: goto label_7F258AD4;
    case 0x7F258AD8u: goto label_7F258AD8;
    case 0x7F258ADCu: goto label_7F258ADC;
    case 0x7F258AE0u: goto label_7F258AE0;
    case 0x7F258AE4u: goto label_7F258AE4;
    case 0x7F258AE8u: goto label_7F258AE8;
    case 0x7F258AECu: goto label_7F258AEC;
    case 0x7F258AF0u: goto label_7F258AF0;
    case 0x7F258AF4u: goto label_7F258AF4;
    case 0x7F258AF8u: goto label_7F258AF8;
    case 0x7F258AFCu: goto label_7F258AFC;
    case 0x7F258B00u: goto label_7F258B00;
    case 0x7F258B04u: goto label_7F258B04;
    case 0x7F258B08u: goto label_7F258B08;
    case 0x7F258B0Cu: goto label_7F258B0C;
    case 0x7F258B10u: goto label_7F258B10;
    case 0x7F258B14u: goto label_7F258B14;
    case 0x7F258B18u: goto label_7F258B18;
    case 0x7F258B1Cu: goto label_7F258B1C;
    case 0x7F258B20u: goto label_7F258B20;
    case 0x7F258B24u: goto label_7F258B24;
    case 0x7F258B28u: goto label_7F258B28;
    case 0x7F258B2Cu: goto label_7F258B2C;
    case 0x7F258B30u: goto label_7F258B30;
    case 0x7F258B34u: goto label_7F258B34;
    case 0x7F258B38u: goto label_7F258B38;
    case 0x7F258B3Cu: goto label_7F258B3C;
    case 0x7F258B40u: goto label_7F258B40;
    case 0x7F258B44u: goto label_7F258B44;
    case 0x7F258B48u: goto label_7F258B48;
    case 0x7F258B4Cu: goto label_7F258B4C;
    case 0x7F258B50u: goto label_7F258B50;
    case 0x7F258B54u: goto label_7F258B54;
    case 0x7F258B58u: goto label_7F258B58;
    case 0x7F258B5Cu: goto label_7F258B5C;
    case 0x7F258B60u: goto label_7F258B60;
    case 0x7F258B64u: goto label_7F258B64;
    case 0x7F258B68u: goto label_7F258B68;
    case 0x7F258B6Cu: goto label_7F258B6C;
    case 0x7F258B70u: goto label_7F258B70;
    case 0x7F258B74u: goto label_7F258B74;
    case 0x7F258B78u: goto label_7F258B78;
    case 0x7F258B7Cu: goto label_7F258B7C;
    case 0x7F258B80u: goto label_7F258B80;
    case 0x7F258B84u: goto label_7F258B84;
    case 0x7F258B88u: goto label_7F258B88;
    case 0x7F258B8Cu: goto label_7F258B8C;
    case 0x7F258B90u: goto label_7F258B90;
    case 0x7F258B94u: goto label_7F258B94;
    case 0x7F258B98u: goto label_7F258B98;
    case 0x7F258B9Cu: goto label_7F258B9C;
    case 0x7F258BA0u: goto label_7F258BA0;
    case 0x7F258BA4u: goto label_7F258BA4;
    case 0x7F258BA8u: goto label_7F258BA8;
    case 0x7F258BACu: goto label_7F258BAC;
    case 0x7F258BB0u: goto label_7F258BB0;
    case 0x7F258BB4u: goto label_7F258BB4;
    case 0x7F258BB8u: goto label_7F258BB8;
    case 0x7F258BBCu: goto label_7F258BBC;
    case 0x7F258BC0u: goto label_7F258BC0;
    case 0x7F258BC4u: goto label_7F258BC4;
    case 0x7F258BC8u: goto label_7F258BC8;
    case 0x7F258BCCu: goto label_7F258BCC;
    case 0x7F258BD0u: goto label_7F258BD0;
    case 0x7F258BD4u: goto label_7F258BD4;
    case 0x7F258BD8u: goto label_7F258BD8;
    case 0x7F258BDCu: goto label_7F258BDC;
    case 0x7F258BE0u: goto label_7F258BE0;
    case 0x7F258BE4u: goto label_7F258BE4;
    case 0x7F258BE8u: goto label_7F258BE8;
    case 0x7F258BECu: goto label_7F258BEC;
    case 0x7F258BF0u: goto label_7F258BF0;
    case 0x7F258BF4u: goto label_7F258BF4;
    case 0x7F258BF8u: goto label_7F258BF8;
    case 0x7F258BFCu: goto label_7F258BFC;
    case 0x7F258C00u: goto label_7F258C00;
    case 0x7F258C04u: goto label_7F258C04;
    case 0x7F258C08u: goto label_7F258C08;
    case 0x7F258C0Cu: goto label_7F258C0C;
    case 0x7F258C10u: goto label_7F258C10;
    case 0x7F258C14u: goto label_7F258C14;
    case 0x7F258C18u: goto label_7F258C18;
    case 0x7F258C1Cu: goto label_7F258C1C;
    case 0x7F258C20u: goto label_7F258C20;
    case 0x7F258C24u: goto label_7F258C24;
    case 0x7F258C28u: goto label_7F258C28;
    case 0x7F258C2Cu: goto label_7F258C2C;
    case 0x7F258C30u: goto label_7F258C30;
    case 0x7F258C34u: goto label_7F258C34;
    case 0x7F258C38u: goto label_7F258C38;
    case 0x7F258C3Cu: goto label_7F258C3C;
    case 0x7F258C40u: goto label_7F258C40;
    case 0x7F258C44u: goto label_7F258C44;
    case 0x7F258C48u: goto label_7F258C48;
    case 0x7F258C4Cu: goto label_7F258C4C;
    case 0x7F258C50u: goto label_7F258C50;
    case 0x7F258C54u: goto label_7F258C54;
    case 0x7F258C58u: goto label_7F258C58;
    case 0x7F258C5Cu: goto label_7F258C5C;
    case 0x7F258C60u: goto label_7F258C60;
    case 0x7F258C64u: goto label_7F258C64;
    case 0x7F258C68u: goto label_7F258C68;
    case 0x7F258C6Cu: goto label_7F258C6C;
    case 0x7F258C70u: goto label_7F258C70;
    case 0x7F258C74u: goto label_7F258C74;
    case 0x7F258C78u: goto label_7F258C78;
    case 0x7F258C7Cu: goto label_7F258C7C;
    case 0x7F258C80u: goto label_7F258C80;
    case 0x7F258C84u: goto label_7F258C84;
    case 0x7F258C88u: goto label_7F258C88;
    case 0x7F258C8Cu: goto label_7F258C8C;
    case 0x7F258C90u: goto label_7F258C90;
    case 0x7F258C94u: goto label_7F258C94;
    case 0x7F258C98u: goto label_7F258C98;
    case 0x7F258C9Cu: goto label_7F258C9C;
    case 0x7F258CA0u: goto label_7F258CA0;
    case 0x7F258CA4u: goto label_7F258CA4;
    case 0x7F258CA8u: goto label_7F258CA8;
    case 0x7F258CACu: goto label_7F258CAC;
    case 0x7F258CB0u: goto label_7F258CB0;
    case 0x7F258CB4u: goto label_7F258CB4;
    case 0x7F258CB8u: goto label_7F258CB8;
    case 0x7F258CBCu: goto label_7F258CBC;
    case 0x7F258CC0u: goto label_7F258CC0;
    case 0x7F258CC4u: goto label_7F258CC4;
    case 0x7F258CC8u: goto label_7F258CC8;
    case 0x7F258CCCu: goto label_7F258CCC;
    case 0x7F258CD0u: goto label_7F258CD0;
    case 0x7F258CD4u: goto label_7F258CD4;
    case 0x7F258CD8u: goto label_7F258CD8;
    case 0x7F258CDCu: goto label_7F258CDC;
    case 0x7F258CE0u: goto label_7F258CE0;
    case 0x7F258CE4u: goto label_7F258CE4;
    case 0x7F258CE8u: goto label_7F258CE8;
    case 0x7F258CECu: goto label_7F258CEC;
    case 0x7F258CF0u: goto label_7F258CF0;
    case 0x7F258CF4u: goto label_7F258CF4;
    case 0x7F258CF8u: goto label_7F258CF8;
    case 0x7F258CFCu: goto label_7F258CFC;
    case 0x7F258D00u: goto label_7F258D00;
    case 0x7F258D04u: goto label_7F258D04;
    case 0x7F258D08u: goto label_7F258D08;
    case 0x7F258D0Cu: goto label_7F258D0C;
    case 0x7F258D10u: goto label_7F258D10;
    case 0x7F258D14u: goto label_7F258D14;
    case 0x7F258D18u: goto label_7F258D18;
    case 0x7F258D1Cu: goto label_7F258D1C;
    case 0x7F258D20u: goto label_7F258D20;
    case 0x7F258D24u: goto label_7F258D24;
    case 0x7F258D28u: goto label_7F258D28;
    case 0x7F258D2Cu: goto label_7F258D2C;
    case 0x7F258D30u: goto label_7F258D30;
    case 0x7F258D34u: goto label_7F258D34;
    case 0x7F258D38u: goto label_7F258D38;
    case 0x7F258D3Cu: goto label_7F258D3C;
    case 0x7F258D40u: goto label_7F258D40;
    case 0x7F258D44u: goto label_7F258D44;
    case 0x7F258D48u: goto label_7F258D48;
    case 0x7F258D4Cu: goto label_7F258D4C;
    case 0x7F258D50u: goto label_7F258D50;
    case 0x7F258D54u: goto label_7F258D54;
    case 0x7F258D58u: goto label_7F258D58;
    case 0x7F258D5Cu: goto label_7F258D5C;
    case 0x7F258D60u: goto label_7F258D60;
    case 0x7F258D64u: goto label_7F258D64;
    case 0x7F258D68u: goto label_7F258D68;
    case 0x7F258D6Cu: goto label_7F258D6C;
    case 0x7F258D70u: goto label_7F258D70;
    case 0x7F258D74u: goto label_7F258D74;
    case 0x7F258D78u: goto label_7F258D78;
    case 0x7F258D7Cu: goto label_7F258D7C;
    case 0x7F258D80u: goto label_7F258D80;
    case 0x7F258D84u: goto label_7F258D84;
    case 0x7F258D88u: goto label_7F258D88;
    case 0x7F258D8Cu: goto label_7F258D8C;
    case 0x7F258D90u: goto label_7F258D90;
    case 0x7F258D94u: goto label_7F258D94;
    case 0x7F258D98u: goto label_7F258D98;
    case 0x7F258D9Cu: goto label_7F258D9C;
    case 0x7F258DA0u: goto label_7F258DA0;
    case 0x7F258DA4u: goto label_7F258DA4;
    case 0x7F258DA8u: goto label_7F258DA8;
    case 0x7F258DACu: goto label_7F258DAC;
    case 0x7F258DB0u: goto label_7F258DB0;
    case 0x7F258DB4u: goto label_7F258DB4;
    case 0x7F258DB8u: goto label_7F258DB8;
    case 0x7F258DBCu: goto label_7F258DBC;
    case 0x7F258DC0u: goto label_7F258DC0;
    case 0x7F258DC4u: goto label_7F258DC4;
    case 0x7F258DC8u: goto label_7F258DC8;
    case 0x7F258DCCu: goto label_7F258DCC;
    case 0x7F258DD0u: goto label_7F258DD0;
    case 0x7F258DD4u: goto label_7F258DD4;
    case 0x7F258DD8u: goto label_7F258DD8;
    case 0x7F258DDCu: goto label_7F258DDC;
    case 0x7F258DE0u: goto label_7F258DE0;
    case 0x7F258DE4u: goto label_7F258DE4;
    case 0x7F258DE8u: goto label_7F258DE8;
    case 0x7F258DECu: goto label_7F258DEC;
    case 0x7F258DF0u: goto label_7F258DF0;
    case 0x7F258DF4u: goto label_7F258DF4;
    case 0x7F258DF8u: goto label_7F258DF8;
    case 0x7F258DFCu: goto label_7F258DFC;
    case 0x7F258E00u: goto label_7F258E00;
    case 0x7F258E04u: goto label_7F258E04;
    case 0x7F258E08u: goto label_7F258E08;
    case 0x7F258E0Cu: goto label_7F258E0C;
    case 0x7F258E10u: goto label_7F258E10;
    case 0x7F258E14u: goto label_7F258E14;
    case 0x7F258E18u: goto label_7F258E18;
    case 0x7F258E1Cu: goto label_7F258E1C;
    case 0x7F258E20u: goto label_7F258E20;
    case 0x7F258E24u: goto label_7F258E24;
    case 0x7F258E28u: goto label_7F258E28;
    case 0x7F258E2Cu: goto label_7F258E2C;
    case 0x7F258E30u: goto label_7F258E30;
    case 0x7F258E34u: goto label_7F258E34;
    case 0x7F258E38u: goto label_7F258E38;
    case 0x7F258E3Cu: goto label_7F258E3C;
    case 0x7F258E40u: goto label_7F258E40;
    case 0x7F258E44u: goto label_7F258E44;
    case 0x7F258E48u: goto label_7F258E48;
    case 0x7F258E4Cu: goto label_7F258E4C;
    case 0x7F258E50u: goto label_7F258E50;
    case 0x7F258E54u: goto label_7F258E54;
    case 0x7F258E58u: goto label_7F258E58;
    case 0x7F258E5Cu: goto label_7F258E5C;
    case 0x7F258E60u: goto label_7F258E60;
    case 0x7F258E64u: goto label_7F258E64;
    case 0x7F258E68u: goto label_7F258E68;
    case 0x7F258E6Cu: goto label_7F258E6C;
    case 0x7F258E70u: goto label_7F258E70;
    case 0x7F258E74u: goto label_7F258E74;
    case 0x7F258E78u: goto label_7F258E78;
    case 0x7F258E7Cu: goto label_7F258E7C;
    case 0x7F258E80u: goto label_7F258E80;
    case 0x7F258E84u: goto label_7F258E84;
    case 0x7F258E88u: goto label_7F258E88;
    case 0x7F258E8Cu: goto label_7F258E8C;
    case 0x7F258E90u: goto label_7F258E90;
    case 0x7F258E94u: goto label_7F258E94;
    case 0x7F258E98u: goto label_7F258E98;
    case 0x7F258E9Cu: goto label_7F258E9C;
    case 0x7F258EA0u: goto label_7F258EA0;
    case 0x7F258EA4u: goto label_7F258EA4;
    case 0x7F258EA8u: goto label_7F258EA8;
    case 0x7F258EACu: goto label_7F258EAC;
    case 0x7F258EB0u: goto label_7F258EB0;
    case 0x7F258EB4u: goto label_7F258EB4;
    case 0x7F258EB8u: goto label_7F258EB8;
    case 0x7F258EBCu: goto label_7F258EBC;
    case 0x7F258EC0u: goto label_7F258EC0;
    case 0x7F258EC4u: goto label_7F258EC4;
    case 0x7F258EC8u: goto label_7F258EC8;
    case 0x7F258ECCu: goto label_7F258ECC;
    case 0x7F258ED0u: goto label_7F258ED0;
    case 0x7F258ED4u: goto label_7F258ED4;
    case 0x7F258ED8u: goto label_7F258ED8;
    case 0x7F258EDCu: goto label_7F258EDC;
    case 0x7F258EE0u: goto label_7F258EE0;
    case 0x7F258EE4u: goto label_7F258EE4;
    case 0x7F258EE8u: goto label_7F258EE8;
    case 0x7F258EECu: goto label_7F258EEC;
    case 0x7F258EF0u: goto label_7F258EF0;
    case 0x7F258EF4u: goto label_7F258EF4;
    case 0x7F258EF8u: goto label_7F258EF8;
    case 0x7F258EFCu: goto label_7F258EFC;
    case 0x7F258F00u: goto label_7F258F00;
    case 0x7F258F04u: goto label_7F258F04;
    case 0x7F258F08u: goto label_7F258F08;
    case 0x7F258F0Cu: goto label_7F258F0C;
    case 0x7F258F10u: goto label_7F258F10;
    case 0x7F258F14u: goto label_7F258F14;
    case 0x7F258F18u: goto label_7F258F18;
    case 0x7F258F1Cu: goto label_7F258F1C;
    case 0x7F258F20u: goto label_7F258F20;
    case 0x7F258F24u: goto label_7F258F24;
    case 0x7F258F28u: goto label_7F258F28;
    case 0x7F258F2Cu: goto label_7F258F2C;
    case 0x7F258F30u: goto label_7F258F30;
    case 0x7F258F34u: goto label_7F258F34;
    case 0x7F258F38u: goto label_7F258F38;
    case 0x7F258F3Cu: goto label_7F258F3C;
    case 0x7F258F40u: goto label_7F258F40;
    case 0x7F258F44u: goto label_7F258F44;
    case 0x7F258F48u: goto label_7F258F48;
    case 0x7F258F4Cu: goto label_7F258F4C;
    case 0x7F258F50u: goto label_7F258F50;
    case 0x7F258F54u: goto label_7F258F54;
    case 0x7F258F58u: goto label_7F258F58;
    case 0x7F258F5Cu: goto label_7F258F5C;
    case 0x7F258F60u: goto label_7F258F60;
    case 0x7F258F64u: goto label_7F258F64;
    case 0x7F258F68u: goto label_7F258F68;
    case 0x7F258F6Cu: goto label_7F258F6C;
    case 0x7F258F70u: goto label_7F258F70;
    case 0x7F258F74u: goto label_7F258F74;
    case 0x7F258F78u: goto label_7F258F78;
    case 0x7F258F7Cu: goto label_7F258F7C;
    case 0x7F258F80u: goto label_7F258F80;
    case 0x7F258F84u: goto label_7F258F84;
    case 0x7F258F88u: goto label_7F258F88;
    case 0x7F258F8Cu: goto label_7F258F8C;
    case 0x7F258F90u: goto label_7F258F90;
    case 0x7F258F94u: goto label_7F258F94;
    case 0x7F258F98u: goto label_7F258F98;
    case 0x7F258F9Cu: goto label_7F258F9C;
    case 0x7F258FA0u: goto label_7F258FA0;
    case 0x7F258FA4u: goto label_7F258FA4;
    case 0x7F258FA8u: goto label_7F258FA8;
    case 0x7F258FACu: goto label_7F258FAC;
    case 0x7F258FB0u: goto label_7F258FB0;
    case 0x7F258FB4u: goto label_7F258FB4;
    case 0x7F258FB8u: goto label_7F258FB8;
    case 0x7F258FBCu: goto label_7F258FBC;
    case 0x7F258FC0u: goto label_7F258FC0;
    case 0x7F258FC4u: goto label_7F258FC4;
    case 0x7F258FC8u: goto label_7F258FC8;
    case 0x7F258FCCu: goto label_7F258FCC;
    case 0x7F258FD0u: goto label_7F258FD0;
    case 0x7F258FD4u: goto label_7F258FD4;
    case 0x7F258FD8u: goto label_7F258FD8;
    case 0x7F258FDCu: goto label_7F258FDC;
    case 0x7F258FE0u: goto label_7F258FE0;
    case 0x7F258FE4u: goto label_7F258FE4;
    case 0x7F258FE8u: goto label_7F258FE8;
    case 0x7F258FECu: goto label_7F258FEC;
    case 0x7F258FF0u: goto label_7F258FF0;
    case 0x7F258FF4u: goto label_7F258FF4;
    case 0x7F258FF8u: goto label_7F258FF8;
    case 0x7F258FFCu: goto label_7F258FFC;
    case 0x7F259000u: goto label_7F259000;
    case 0x7F259004u: goto label_7F259004;
    case 0x7F259008u: goto label_7F259008;
    case 0x7F25900Cu: goto label_7F25900C;
    case 0x7F259010u: goto label_7F259010;
    case 0x7F259014u: goto label_7F259014;
    case 0x7F259018u: goto label_7F259018;
    case 0x7F25901Cu: goto label_7F25901C;
    case 0x7F259020u: goto label_7F259020;
    case 0x7F259024u: goto label_7F259024;
    case 0x7F259028u: goto label_7F259028;
    case 0x7F25902Cu: goto label_7F25902C;
    case 0x7F259030u: goto label_7F259030;
    case 0x7F259034u: goto label_7F259034;
    case 0x7F259038u: goto label_7F259038;
    case 0x7F25903Cu: goto label_7F25903C;
    case 0x7F259040u: goto label_7F259040;
    case 0x7F259044u: goto label_7F259044;
    case 0x7F259048u: goto label_7F259048;
    case 0x7F25904Cu: goto label_7F25904C;
    case 0x7F259050u: goto label_7F259050;
    case 0x7F259054u: goto label_7F259054;
    case 0x7F259058u: goto label_7F259058;
    case 0x7F25905Cu: goto label_7F25905C;
    case 0x7F259060u: goto label_7F259060;
    case 0x7F259064u: goto label_7F259064;
    case 0x7F259068u: goto label_7F259068;
    case 0x7F25906Cu: goto label_7F25906C;
    case 0x7F259070u: goto label_7F259070;
    case 0x7F259074u: goto label_7F259074;
    case 0x7F259078u: goto label_7F259078;
    case 0x7F25907Cu: goto label_7F25907C;
    case 0x7F259080u: goto label_7F259080;
    case 0x7F259084u: goto label_7F259084;
    case 0x7F259088u: goto label_7F259088;
    case 0x7F25908Cu: goto label_7F25908C;
    case 0x7F259090u: goto label_7F259090;
    case 0x7F259094u: goto label_7F259094;
    case 0x7F259098u: goto label_7F259098;
    case 0x7F25909Cu: goto label_7F25909C;
    case 0x7F2590A0u: goto label_7F2590A0;
    case 0x7F2590A4u: goto label_7F2590A4;
    case 0x7F2590A8u: goto label_7F2590A8;
    case 0x7F2590ACu: goto label_7F2590AC;
    case 0x7F2590B0u: goto label_7F2590B0;
    case 0x7F2590B4u: goto label_7F2590B4;
    case 0x7F2590B8u: goto label_7F2590B8;
    case 0x7F2590BCu: goto label_7F2590BC;
    case 0x7F2590C0u: goto label_7F2590C0;
    case 0x7F2590C4u: goto label_7F2590C4;
    case 0x7F2590C8u: goto label_7F2590C8;
    case 0x7F2590CCu: goto label_7F2590CC;
    case 0x7F2590D0u: goto label_7F2590D0;
    case 0x7F2590D4u: goto label_7F2590D4;
    case 0x7F2590D8u: goto label_7F2590D8;
    case 0x7F2590DCu: goto label_7F2590DC;
    case 0x7F2590E0u: goto label_7F2590E0;
    case 0x7F2590E4u: goto label_7F2590E4;
    case 0x7F2590E8u: goto label_7F2590E8;
    case 0x7F2590ECu: goto label_7F2590EC;
    case 0x7F2590F0u: goto label_7F2590F0;
    case 0x7F2590F4u: goto label_7F2590F4;
    case 0x7F2590F8u: goto label_7F2590F8;
    case 0x7F2590FCu: goto label_7F2590FC;
    case 0x7F259100u: goto label_7F259100;
    case 0x7F259104u: goto label_7F259104;
    case 0x7F259108u: goto label_7F259108;
    case 0x7F25910Cu: goto label_7F25910C;
    case 0x7F259110u: goto label_7F259110;
    case 0x7F259114u: goto label_7F259114;
    case 0x7F259118u: goto label_7F259118;
    case 0x7F25911Cu: goto label_7F25911C;
    case 0x7F259120u: goto label_7F259120;
    case 0x7F259124u: goto label_7F259124;
    case 0x7F259128u: goto label_7F259128;
    case 0x7F25912Cu: goto label_7F25912C;
    case 0x7F259130u: goto label_7F259130;
    case 0x7F259134u: goto label_7F259134;
    case 0x7F259138u: goto label_7F259138;
    case 0x7F25913Cu: goto label_7F25913C;
    case 0x7F259140u: goto label_7F259140;
    case 0x7F259144u: goto label_7F259144;
    case 0x7F259148u: goto label_7F259148;
    case 0x7F25914Cu: goto label_7F25914C;
    case 0x7F259150u: goto label_7F259150;
    case 0x7F259154u: goto label_7F259154;
    case 0x7F259158u: goto label_7F259158;
    case 0x7F25915Cu: goto label_7F25915C;
    case 0x7F259160u: goto label_7F259160;
    case 0x7F259164u: goto label_7F259164;
    case 0x7F259168u: goto label_7F259168;
    case 0x7F25916Cu: goto label_7F25916C;
    case 0x7F259170u: goto label_7F259170;
    case 0x7F259174u: goto label_7F259174;
    case 0x7F259178u: goto label_7F259178;
    case 0x7F25917Cu: goto label_7F25917C;
    case 0x7F259180u: goto label_7F259180;
    case 0x7F259184u: goto label_7F259184;
    case 0x7F259188u: goto label_7F259188;
    case 0x7F25918Cu: goto label_7F25918C;
    case 0x7F259190u: goto label_7F259190;
    case 0x7F259194u: goto label_7F259194;
    case 0x7F259198u: goto label_7F259198;
    case 0x7F25919Cu: goto label_7F25919C;
    case 0x7F2591A0u: goto label_7F2591A0;
    case 0x7F2591A4u: goto label_7F2591A4;
    case 0x7F2591A8u: goto label_7F2591A8;
    case 0x7F2591ACu: goto label_7F2591AC;
    case 0x7F2591B0u: goto label_7F2591B0;
    case 0x7F2591B4u: goto label_7F2591B4;
    case 0x7F2591B8u: goto label_7F2591B8;
    case 0x7F2591BCu: goto label_7F2591BC;
    case 0x7F2591C0u: goto label_7F2591C0;
    case 0x7F2591C4u: goto label_7F2591C4;
    case 0x7F2591C8u: goto label_7F2591C8;
    case 0x7F2591CCu: goto label_7F2591CC;
    case 0x7F2591D0u: goto label_7F2591D0;
    case 0x7F2591D4u: goto label_7F2591D4;
    case 0x7F2591D8u: goto label_7F2591D8;
    case 0x7F2591DCu: goto label_7F2591DC;
    case 0x7F2591E0u: goto label_7F2591E0;
    case 0x7F2591E4u: goto label_7F2591E4;
    case 0x7F2591E8u: goto label_7F2591E8;
    case 0x7F2591ECu: goto label_7F2591EC;
    case 0x7F2591F0u: goto label_7F2591F0;
    case 0x7F2591F4u: goto label_7F2591F4;
    case 0x7F2591F8u: goto label_7F2591F8;
    case 0x7F2591FCu: goto label_7F2591FC;
    case 0x7F259200u: goto label_7F259200;
    case 0x7F259204u: goto label_7F259204;
    case 0x7F259208u: goto label_7F259208;
    case 0x7F25920Cu: goto label_7F25920C;
    case 0x7F259210u: goto label_7F259210;
    case 0x7F259214u: goto label_7F259214;
    case 0x7F259218u: goto label_7F259218;
    case 0x7F25921Cu: goto label_7F25921C;
    case 0x7F259220u: goto label_7F259220;
    case 0x7F259224u: goto label_7F259224;
    case 0x7F259228u: goto label_7F259228;
    case 0x7F25922Cu: goto label_7F25922C;
    case 0x7F259230u: goto label_7F259230;
    case 0x7F259234u: goto label_7F259234;
    case 0x7F259238u: goto label_7F259238;
    case 0x7F25923Cu: goto label_7F25923C;
    case 0x7F259240u: goto label_7F259240;
    case 0x7F259244u: goto label_7F259244;
    case 0x7F259248u: goto label_7F259248;
    case 0x7F25924Cu: goto label_7F25924C;
    case 0x7F259250u: goto label_7F259250;
    case 0x7F259254u: goto label_7F259254;
    case 0x7F259258u: goto label_7F259258;
    case 0x7F25925Cu: goto label_7F25925C;
    case 0x7F259260u: goto label_7F259260;
    case 0x7F259264u: goto label_7F259264;
    case 0x7F259268u: goto label_7F259268;
    case 0x7F25926Cu: goto label_7F25926C;
    case 0x7F259270u: goto label_7F259270;
    case 0x7F259274u: goto label_7F259274;
    case 0x7F259278u: goto label_7F259278;
    case 0x7F25927Cu: goto label_7F25927C;
    case 0x7F259280u: goto label_7F259280;
    case 0x7F259284u: goto label_7F259284;
    case 0x7F259288u: goto label_7F259288;
    case 0x7F25928Cu: goto label_7F25928C;
    case 0x7F259290u: goto label_7F259290;
    case 0x7F259294u: goto label_7F259294;
    case 0x7F259298u: goto label_7F259298;
    case 0x7F25929Cu: goto label_7F25929C;
    case 0x7F2592A0u: goto label_7F2592A0;
    case 0x7F2592A4u: goto label_7F2592A4;
    case 0x7F2592A8u: goto label_7F2592A8;
    case 0x7F2592ACu: goto label_7F2592AC;
    case 0x7F2592B0u: goto label_7F2592B0;
    case 0x7F2592B4u: goto label_7F2592B4;
    case 0x7F2592B8u: goto label_7F2592B8;
    case 0x7F2592BCu: goto label_7F2592BC;
    case 0x7F2592C0u: goto label_7F2592C0;
    case 0x7F2592C4u: goto label_7F2592C4;
    case 0x7F2592C8u: goto label_7F2592C8;
    case 0x7F2592CCu: goto label_7F2592CC;
    case 0x7F2592D0u: goto label_7F2592D0;
    case 0x7F2592D4u: goto label_7F2592D4;
    case 0x7F2592D8u: goto label_7F2592D8;
    case 0x7F2592DCu: goto label_7F2592DC;
    case 0x7F2592E0u: goto label_7F2592E0;
    case 0x7F2592E4u: goto label_7F2592E4;
    case 0x7F2592E8u: goto label_7F2592E8;
    case 0x7F2592ECu: goto label_7F2592EC;
    case 0x7F2592F0u: goto label_7F2592F0;
    case 0x7F2592F4u: goto label_7F2592F4;
    case 0x7F2592F8u: goto label_7F2592F8;
    case 0x7F2592FCu: goto label_7F2592FC;
    case 0x7F259300u: goto label_7F259300;
    case 0x7F259304u: goto label_7F259304;
    case 0x7F259308u: goto label_7F259308;
    case 0x7F25930Cu: goto label_7F25930C;
    case 0x7F259310u: goto label_7F259310;
    case 0x7F259314u: goto label_7F259314;
    case 0x7F259318u: goto label_7F259318;
    case 0x7F25931Cu: goto label_7F25931C;
    case 0x7F259320u: goto label_7F259320;
    case 0x7F259324u: goto label_7F259324;
    case 0x7F259328u: goto label_7F259328;
    case 0x7F25932Cu: goto label_7F25932C;
    case 0x7F259330u: goto label_7F259330;
    case 0x7F259334u: goto label_7F259334;
    case 0x7F259338u: goto label_7F259338;
    case 0x7F25933Cu: goto label_7F25933C;
    case 0x7F259340u: goto label_7F259340;
    case 0x7F259344u: goto label_7F259344;
    case 0x7F259348u: goto label_7F259348;
    case 0x7F25934Cu: goto label_7F25934C;
    case 0x7F259350u: goto label_7F259350;
    case 0x7F259354u: goto label_7F259354;
    case 0x7F259358u: goto label_7F259358;
    case 0x7F25935Cu: goto label_7F25935C;
    case 0x7F259360u: goto label_7F259360;
    case 0x7F259364u: goto label_7F259364;
    case 0x7F259368u: goto label_7F259368;
    case 0x7F25936Cu: goto label_7F25936C;
    case 0x7F259370u: goto label_7F259370;
    case 0x7F259374u: goto label_7F259374;
    case 0x7F259378u: goto label_7F259378;
    case 0x7F25937Cu: goto label_7F25937C;
    case 0x7F259380u: goto label_7F259380;
    case 0x7F259384u: goto label_7F259384;
    case 0x7F259388u: goto label_7F259388;
    case 0x7F25938Cu: goto label_7F25938C;
    case 0x7F259390u: goto label_7F259390;
    case 0x7F259394u: goto label_7F259394;
    case 0x7F259398u: goto label_7F259398;
    case 0x7F25939Cu: goto label_7F25939C;
    case 0x7F2593A0u: goto label_7F2593A0;
    case 0x7F2593A4u: goto label_7F2593A4;
    case 0x7F2593A8u: goto label_7F2593A8;
    case 0x7F2593ACu: goto label_7F2593AC;
    case 0x7F2593B0u: goto label_7F2593B0;
    case 0x7F2593B4u: goto label_7F2593B4;
    case 0x7F2593B8u: goto label_7F2593B8;
    case 0x7F2593BCu: goto label_7F2593BC;
    case 0x7F2593C0u: goto label_7F2593C0;
    case 0x7F2593C4u: goto label_7F2593C4;
    case 0x7F2593C8u: goto label_7F2593C8;
    case 0x7F2593CCu: goto label_7F2593CC;
    case 0x7F2593D0u: goto label_7F2593D0;
    case 0x7F2593D4u: goto label_7F2593D4;
    case 0x7F2593D8u: goto label_7F2593D8;
    case 0x7F2593DCu: goto label_7F2593DC;
    case 0x7F2593E0u: goto label_7F2593E0;
    case 0x7F2593E4u: goto label_7F2593E4;
    case 0x7F2593E8u: goto label_7F2593E8;
    case 0x7F2593ECu: goto label_7F2593EC;
    case 0x7F2593F0u: goto label_7F2593F0;
    case 0x7F2593F4u: goto label_7F2593F4;
    case 0x7F2593F8u: goto label_7F2593F8;
    case 0x7F2593FCu: goto label_7F2593FC;
    case 0x7F259400u: goto label_7F259400;
    case 0x7F259404u: goto label_7F259404;
    case 0x7F259408u: goto label_7F259408;
    case 0x7F25940Cu: goto label_7F25940C;
    case 0x7F259410u: goto label_7F259410;
    case 0x7F259414u: goto label_7F259414;
    case 0x7F259418u: goto label_7F259418;
    case 0x7F25941Cu: goto label_7F25941C;
    case 0x7F259420u: goto label_7F259420;
    case 0x7F259424u: goto label_7F259424;
    case 0x7F259428u: goto label_7F259428;
    case 0x7F25942Cu: goto label_7F25942C;
    case 0x7F259430u: goto label_7F259430;
    case 0x7F259434u: goto label_7F259434;
    case 0x7F259438u: goto label_7F259438;
    case 0x7F25943Cu: goto label_7F25943C;
    case 0x7F259440u: goto label_7F259440;
    case 0x7F259444u: goto label_7F259444;
    case 0x7F259448u: goto label_7F259448;
    case 0x7F25944Cu: goto label_7F25944C;
    case 0x7F259450u: goto label_7F259450;
    case 0x7F259454u: goto label_7F259454;
    case 0x7F259458u: goto label_7F259458;
    case 0x7F25945Cu: goto label_7F25945C;
    case 0x7F259460u: goto label_7F259460;
    case 0x7F259464u: goto label_7F259464;
    case 0x7F259468u: goto label_7F259468;
    case 0x7F25946Cu: goto label_7F25946C;
    case 0x7F259470u: goto label_7F259470;
    case 0x7F259474u: goto label_7F259474;
    case 0x7F259478u: goto label_7F259478;
    case 0x7F25947Cu: goto label_7F25947C;
    case 0x7F259480u: goto label_7F259480;
    case 0x7F259484u: goto label_7F259484;
    case 0x7F259488u: goto label_7F259488;
    case 0x7F25948Cu: goto label_7F25948C;
    case 0x7F259490u: goto label_7F259490;
    case 0x7F259494u: goto label_7F259494;
    case 0x7F259498u: goto label_7F259498;
    case 0x7F25949Cu: goto label_7F25949C;
    case 0x7F2594A0u: goto label_7F2594A0;
    case 0x7F2594A4u: goto label_7F2594A4;
    case 0x7F2594A8u: goto label_7F2594A8;
    case 0x7F2594ACu: goto label_7F2594AC;
    case 0x7F2594B0u: goto label_7F2594B0;
    case 0x7F2594B4u: goto label_7F2594B4;
    case 0x7F2594B8u: goto label_7F2594B8;
    case 0x7F2594BCu: goto label_7F2594BC;
    case 0x7F2594C0u: goto label_7F2594C0;
    case 0x7F2594C4u: goto label_7F2594C4;
    case 0x7F2594C8u: goto label_7F2594C8;
    case 0x7F2594CCu: goto label_7F2594CC;
    case 0x7F2594D0u: goto label_7F2594D0;
    case 0x7F2594D4u: goto label_7F2594D4;
    case 0x7F2594D8u: goto label_7F2594D8;
    case 0x7F2594DCu: goto label_7F2594DC;
    case 0x7F2594E0u: goto label_7F2594E0;
    case 0x7F2594E4u: goto label_7F2594E4;
    case 0x7F2594E8u: goto label_7F2594E8;
    case 0x7F2594ECu: goto label_7F2594EC;
    case 0x7F2594F0u: goto label_7F2594F0;
    case 0x7F2594F4u: goto label_7F2594F4;
    case 0x7F2594F8u: goto label_7F2594F8;
    case 0x7F2594FCu: goto label_7F2594FC;
    case 0x7F259500u: goto label_7F259500;
    case 0x7F259504u: goto label_7F259504;
    case 0x7F259508u: goto label_7F259508;
    case 0x7F25950Cu: goto label_7F25950C;
    case 0x7F259510u: goto label_7F259510;
    case 0x7F259514u: goto label_7F259514;
    case 0x7F259518u: goto label_7F259518;
    case 0x7F25951Cu: goto label_7F25951C;
    case 0x7F259520u: goto label_7F259520;
    case 0x7F259524u: goto label_7F259524;
    case 0x7F259528u: goto label_7F259528;
    case 0x7F25952Cu: goto label_7F25952C;
    case 0x7F259530u: goto label_7F259530;
    case 0x7F259534u: goto label_7F259534;
    case 0x7F259538u: goto label_7F259538;
    case 0x7F25953Cu: goto label_7F25953C;
    case 0x7F259540u: goto label_7F259540;
    case 0x7F259544u: goto label_7F259544;
    case 0x7F259548u: goto label_7F259548;
    case 0x7F25954Cu: goto label_7F25954C;
    case 0x7F259550u: goto label_7F259550;
    case 0x7F259554u: goto label_7F259554;
    case 0x7F259558u: goto label_7F259558;
    case 0x7F25955Cu: goto label_7F25955C;
    case 0x7F259560u: goto label_7F259560;
    case 0x7F259564u: goto label_7F259564;
    case 0x7F259568u: goto label_7F259568;
    case 0x7F25956Cu: goto label_7F25956C;
    case 0x7F259570u: goto label_7F259570;
    case 0x7F259574u: goto label_7F259574;
    case 0x7F259578u: goto label_7F259578;
    case 0x7F25957Cu: goto label_7F25957C;
    case 0x7F259580u: goto label_7F259580;
    case 0x7F259584u: goto label_7F259584;
    case 0x7F259588u: goto label_7F259588;
    case 0x7F25958Cu: goto label_7F25958C;
    case 0x7F259590u: goto label_7F259590;
    case 0x7F259594u: goto label_7F259594;
    case 0x7F259598u: goto label_7F259598;
    case 0x7F25959Cu: goto label_7F25959C;
    case 0x7F2595A0u: goto label_7F2595A0;
    case 0x7F2595A4u: goto label_7F2595A4;
    case 0x7F2595A8u: goto label_7F2595A8;
    case 0x7F2595ACu: goto label_7F2595AC;
    case 0x7F2595B0u: goto label_7F2595B0;
    case 0x7F2595B4u: goto label_7F2595B4;
    case 0x7F2595B8u: goto label_7F2595B8;
    case 0x7F2595BCu: goto label_7F2595BC;
    case 0x7F2595C0u: goto label_7F2595C0;
    case 0x7F2595C4u: goto label_7F2595C4;
    case 0x7F2595C8u: goto label_7F2595C8;
    case 0x7F2595CCu: goto label_7F2595CC;
    case 0x7F2595D0u: goto label_7F2595D0;
    case 0x7F2595D4u: goto label_7F2595D4;
    case 0x7F2595D8u: goto label_7F2595D8;
    case 0x7F2595DCu: goto label_7F2595DC;
    case 0x7F2595E0u: goto label_7F2595E0;
    case 0x7F2595E4u: goto label_7F2595E4;
    case 0x7F2595E8u: goto label_7F2595E8;
    case 0x7F2595ECu: goto label_7F2595EC;
    case 0x7F2595F0u: goto label_7F2595F0;
    case 0x7F2595F4u: goto label_7F2595F4;
    case 0x7F2595F8u: goto label_7F2595F8;
    case 0x7F2595FCu: goto label_7F2595FC;
    case 0x7F259600u: goto label_7F259600;
    case 0x7F259604u: goto label_7F259604;
    case 0x7F259608u: goto label_7F259608;
    case 0x7F25960Cu: goto label_7F25960C;
    case 0x7F259610u: goto label_7F259610;
    case 0x7F259614u: goto label_7F259614;
    case 0x7F259618u: goto label_7F259618;
    case 0x7F25961Cu: goto label_7F25961C;
    case 0x7F259620u: goto label_7F259620;
    case 0x7F259624u: goto label_7F259624;
    case 0x7F259628u: goto label_7F259628;
    case 0x7F25962Cu: goto label_7F25962C;
    case 0x7F259630u: goto label_7F259630;
    case 0x7F259634u: goto label_7F259634;
    case 0x7F259638u: goto label_7F259638;
    case 0x7F25963Cu: goto label_7F25963C;
    case 0x7F259640u: goto label_7F259640;
    case 0x7F259644u: goto label_7F259644;
    case 0x7F259648u: goto label_7F259648;
    case 0x7F25964Cu: goto label_7F25964C;
    case 0x7F259650u: goto label_7F259650;
    case 0x7F259654u: goto label_7F259654;
    case 0x7F259658u: goto label_7F259658;
    case 0x7F25965Cu: goto label_7F25965C;
    case 0x7F259660u: goto label_7F259660;
    case 0x7F259664u: goto label_7F259664;
    case 0x7F259668u: goto label_7F259668;
    case 0x7F25966Cu: goto label_7F25966C;
    case 0x7F259670u: goto label_7F259670;
    case 0x7F259674u: goto label_7F259674;
    case 0x7F259678u: goto label_7F259678;
    case 0x7F25967Cu: goto label_7F25967C;
    case 0x7F259680u: goto label_7F259680;
    case 0x7F259684u: goto label_7F259684;
    case 0x7F259688u: goto label_7F259688;
    case 0x7F25968Cu: goto label_7F25968C;
    case 0x7F259690u: goto label_7F259690;
    case 0x7F259694u: goto label_7F259694;
    case 0x7F259698u: goto label_7F259698;
    case 0x7F25969Cu: goto label_7F25969C;
    case 0x7F2596A0u: goto label_7F2596A0;
    case 0x7F2596A4u: goto label_7F2596A4;
    case 0x7F2596A8u: goto label_7F2596A8;
    case 0x7F2596ACu: goto label_7F2596AC;
    case 0x7F2596B0u: goto label_7F2596B0;
    case 0x7F2596B4u: goto label_7F2596B4;
    case 0x7F2596B8u: goto label_7F2596B8;
    case 0x7F2596BCu: goto label_7F2596BC;
    case 0x7F2596C0u: goto label_7F2596C0;
    case 0x7F2596C4u: goto label_7F2596C4;
    case 0x7F2596C8u: goto label_7F2596C8;
    case 0x7F2596CCu: goto label_7F2596CC;
    case 0x7F2596D0u: goto label_7F2596D0;
    case 0x7F2596D4u: goto label_7F2596D4;
    case 0x7F2596D8u: goto label_7F2596D8;
    case 0x7F2596DCu: goto label_7F2596DC;
    case 0x7F2596E0u: goto label_7F2596E0;
    case 0x7F2596E4u: goto label_7F2596E4;
    case 0x7F2596E8u: goto label_7F2596E8;
    case 0x7F2596ECu: goto label_7F2596EC;
    case 0x7F2596F0u: goto label_7F2596F0;
    case 0x7F2596F4u: goto label_7F2596F4;
    case 0x7F2596F8u: goto label_7F2596F8;
    case 0x7F2596FCu: goto label_7F2596FC;
    case 0x7F259700u: goto label_7F259700;
    case 0x7F259704u: goto label_7F259704;
    case 0x7F259708u: goto label_7F259708;
    case 0x7F25970Cu: goto label_7F25970C;
    case 0x7F259710u: goto label_7F259710;
    case 0x7F259714u: goto label_7F259714;
    case 0x7F259718u: goto label_7F259718;
    case 0x7F25971Cu: goto label_7F25971C;
    case 0x7F259720u: goto label_7F259720;
    case 0x7F259724u: goto label_7F259724;
    case 0x7F259728u: goto label_7F259728;
    case 0x7F25972Cu: goto label_7F25972C;
    case 0x7F259730u: goto label_7F259730;
    case 0x7F259734u: goto label_7F259734;
    case 0x7F259738u: goto label_7F259738;
    case 0x7F25973Cu: goto label_7F25973C;
    case 0x7F259740u: goto label_7F259740;
    case 0x7F259744u: goto label_7F259744;
    case 0x7F259748u: goto label_7F259748;
    case 0x7F25974Cu: goto label_7F25974C;
    case 0x7F259750u: goto label_7F259750;
    case 0x7F259754u: goto label_7F259754;
    case 0x7F259758u: goto label_7F259758;
    case 0x7F25975Cu: goto label_7F25975C;
    case 0x7F259760u: goto label_7F259760;
    case 0x7F259764u: goto label_7F259764;
    case 0x7F259768u: goto label_7F259768;
    case 0x7F25976Cu: goto label_7F25976C;
    case 0x7F259770u: goto label_7F259770;
    case 0x7F259774u: goto label_7F259774;
    case 0x7F259778u: goto label_7F259778;
    case 0x7F25977Cu: goto label_7F25977C;
    case 0x7F259780u: goto label_7F259780;
    case 0x7F259784u: goto label_7F259784;
    case 0x7F259788u: goto label_7F259788;
    case 0x7F25978Cu: goto label_7F25978C;
    case 0x7F259790u: goto label_7F259790;
    case 0x7F259794u: goto label_7F259794;
    case 0x7F259798u: goto label_7F259798;
    case 0x7F25979Cu: goto label_7F25979C;
    case 0x7F2597A0u: goto label_7F2597A0;
    case 0x7F2597A4u: goto label_7F2597A4;
    case 0x7F2597A8u: goto label_7F2597A8;
    case 0x7F2597ACu: goto label_7F2597AC;
    case 0x7F2597B0u: goto label_7F2597B0;
    case 0x7F2597B4u: goto label_7F2597B4;
    case 0x7F2597B8u: goto label_7F2597B8;
    case 0x7F2597BCu: goto label_7F2597BC;
    case 0x7F2597C0u: goto label_7F2597C0;
    case 0x7F2597C4u: goto label_7F2597C4;
    case 0x7F2597C8u: goto label_7F2597C8;
    case 0x7F2597CCu: goto label_7F2597CC;
    case 0x7F2597D0u: goto label_7F2597D0;
    case 0x7F2597D4u: goto label_7F2597D4;
    case 0x7F2597D8u: goto label_7F2597D8;
    case 0x7F2597DCu: goto label_7F2597DC;
    case 0x7F2597E0u: goto label_7F2597E0;
    case 0x7F2597E4u: goto label_7F2597E4;
    case 0x7F2597E8u: goto label_7F2597E8;
    case 0x7F2597ECu: goto label_7F2597EC;
    case 0x7F2597F0u: goto label_7F2597F0;
    case 0x7F2597F4u: goto label_7F2597F4;
    case 0x7F2597F8u: goto label_7F2597F8;
    case 0x7F2597FCu: goto label_7F2597FC;
    case 0x7F259800u: goto label_7F259800;
    case 0x7F259804u: goto label_7F259804;
    case 0x7F259808u: goto label_7F259808;
    case 0x7F25980Cu: goto label_7F25980C;
    case 0x7F259810u: goto label_7F259810;
    case 0x7F259814u: goto label_7F259814;
    case 0x7F259818u: goto label_7F259818;
    case 0x7F25981Cu: goto label_7F25981C;
    case 0x7F259820u: goto label_7F259820;
    case 0x7F259824u: goto label_7F259824;
    case 0x7F259828u: goto label_7F259828;
    case 0x7F25982Cu: goto label_7F25982C;
    case 0x7F259830u: goto label_7F259830;
    case 0x7F259834u: goto label_7F259834;
    case 0x7F259838u: goto label_7F259838;
    case 0x7F25983Cu: goto label_7F25983C;
    case 0x7F259840u: goto label_7F259840;
    case 0x7F259844u: goto label_7F259844;
    case 0x7F259848u: goto label_7F259848;
    case 0x7F25984Cu: goto label_7F25984C;
    case 0x7F259850u: goto label_7F259850;
    case 0x7F259854u: goto label_7F259854;
    case 0x7F259858u: goto label_7F259858;
    case 0x7F25985Cu: goto label_7F25985C;
    case 0x7F259860u: goto label_7F259860;
    case 0x7F259864u: goto label_7F259864;
    case 0x7F259868u: goto label_7F259868;
    case 0x7F25986Cu: goto label_7F25986C;
    case 0x7F259870u: goto label_7F259870;
    case 0x7F259874u: goto label_7F259874;
    case 0x7F259878u: goto label_7F259878;
    case 0x7F25987Cu: goto label_7F25987C;
    case 0x7F259880u: goto label_7F259880;
    case 0x7F259884u: goto label_7F259884;
    case 0x7F259888u: goto label_7F259888;
    case 0x7F25988Cu: goto label_7F25988C;
    case 0x7F259890u: goto label_7F259890;
    case 0x7F259894u: goto label_7F259894;
    case 0x7F259898u: goto label_7F259898;
    case 0x7F25989Cu: goto label_7F25989C;
    case 0x7F2598A0u: goto label_7F2598A0;
    case 0x7F2598A4u: goto label_7F2598A4;
    case 0x7F2598A8u: goto label_7F2598A8;
    case 0x7F2598ACu: goto label_7F2598AC;
    case 0x7F2598B0u: goto label_7F2598B0;
    case 0x7F2598B4u: goto label_7F2598B4;
    case 0x7F2598B8u: goto label_7F2598B8;
    case 0x7F2598BCu: goto label_7F2598BC;
    case 0x7F2598C0u: goto label_7F2598C0;
    case 0x7F2598C4u: goto label_7F2598C4;
    case 0x7F2598C8u: goto label_7F2598C8;
    case 0x7F2598CCu: goto label_7F2598CC;
    case 0x7F2598D0u: goto label_7F2598D0;
    case 0x7F2598D4u: goto label_7F2598D4;
    case 0x7F2598D8u: goto label_7F2598D8;
    case 0x7F2598DCu: goto label_7F2598DC;
    case 0x7F2598E0u: goto label_7F2598E0;
    case 0x7F2598E4u: goto label_7F2598E4;
    case 0x7F2598E8u: goto label_7F2598E8;
    case 0x7F2598ECu: goto label_7F2598EC;
    case 0x7F2598F0u: goto label_7F2598F0;
    case 0x7F2598F4u: goto label_7F2598F4;
    case 0x7F2598F8u: goto label_7F2598F8;
    case 0x7F2598FCu: goto label_7F2598FC;
    case 0x7F259900u: goto label_7F259900;
    case 0x7F259904u: goto label_7F259904;
    case 0x7F259908u: goto label_7F259908;
    case 0x7F25990Cu: goto label_7F25990C;
    case 0x7F259910u: goto label_7F259910;
    case 0x7F259914u: goto label_7F259914;
    case 0x7F259918u: goto label_7F259918;
    case 0x7F25991Cu: goto label_7F25991C;
    case 0x7F259920u: goto label_7F259920;
    case 0x7F259924u: goto label_7F259924;
    case 0x7F259928u: goto label_7F259928;
    case 0x7F25992Cu: goto label_7F25992C;
    case 0x7F259930u: goto label_7F259930;
    case 0x7F259934u: goto label_7F259934;
    case 0x7F259938u: goto label_7F259938;
    case 0x7F25993Cu: goto label_7F25993C;
    case 0x7F259940u: goto label_7F259940;
    case 0x7F259944u: goto label_7F259944;
    case 0x7F259948u: goto label_7F259948;
    case 0x7F25994Cu: goto label_7F25994C;
    case 0x7F259950u: goto label_7F259950;
    case 0x7F259954u: goto label_7F259954;
    case 0x7F259958u: goto label_7F259958;
    case 0x7F25995Cu: goto label_7F25995C;
    case 0x7F259960u: goto label_7F259960;
    case 0x7F259964u: goto label_7F259964;
    case 0x7F259968u: goto label_7F259968;
    case 0x7F25996Cu: goto label_7F25996C;
    case 0x7F259970u: goto label_7F259970;
    case 0x7F259974u: goto label_7F259974;
    case 0x7F259978u: goto label_7F259978;
    case 0x7F25997Cu: goto label_7F25997C;
    case 0x7F259980u: goto label_7F259980;
    case 0x7F259984u: goto label_7F259984;
    case 0x7F259988u: goto label_7F259988;
    case 0x7F25998Cu: goto label_7F25998C;
    case 0x7F259990u: goto label_7F259990;
    case 0x7F259994u: goto label_7F259994;
    case 0x7F259998u: goto label_7F259998;
    case 0x7F25999Cu: goto label_7F25999C;
    case 0x7F2599A0u: goto label_7F2599A0;
    case 0x7F2599A4u: goto label_7F2599A4;
    case 0x7F2599A8u: goto label_7F2599A8;
    case 0x7F2599ACu: goto label_7F2599AC;
    case 0x7F2599B0u: goto label_7F2599B0;
    case 0x7F2599B4u: goto label_7F2599B4;
    case 0x7F2599B8u: goto label_7F2599B8;
    case 0x7F2599BCu: goto label_7F2599BC;
    case 0x7F2599C0u: goto label_7F2599C0;
    case 0x7F2599C4u: goto label_7F2599C4;
    case 0x7F2599C8u: goto label_7F2599C8;
    case 0x7F2599CCu: goto label_7F2599CC;
    case 0x7F2599D0u: goto label_7F2599D0;
    case 0x7F2599D4u: goto label_7F2599D4;
    case 0x7F2599D8u: goto label_7F2599D8;
    case 0x7F2599DCu: goto label_7F2599DC;
    case 0x7F2599E0u: goto label_7F2599E0;
    case 0x7F2599E4u: goto label_7F2599E4;
    case 0x7F2599E8u: goto label_7F2599E8;
    case 0x7F2599ECu: goto label_7F2599EC;
    case 0x7F2599F0u: goto label_7F2599F0;
    case 0x7F2599F4u: goto label_7F2599F4;
    case 0x7F2599F8u: goto label_7F2599F8;
    case 0x7F2599FCu: goto label_7F2599FC;
    case 0x7F259A00u: goto label_7F259A00;
    case 0x7F259A04u: goto label_7F259A04;
    case 0x7F259A08u: goto label_7F259A08;
    case 0x7F259A0Cu: goto label_7F259A0C;
    case 0x7F259A10u: goto label_7F259A10;
    case 0x7F259A14u: goto label_7F259A14;
    case 0x7F259A18u: goto label_7F259A18;
    case 0x7F259A1Cu: goto label_7F259A1C;
    case 0x7F259A20u: goto label_7F259A20;
    case 0x7F259A24u: goto label_7F259A24;
    case 0x7F259A28u: goto label_7F259A28;
    case 0x7F259A2Cu: goto label_7F259A2C;
    case 0x7F259A30u: goto label_7F259A30;
    case 0x7F259A34u: goto label_7F259A34;
    case 0x7F259A38u: goto label_7F259A38;
    case 0x7F259A3Cu: goto label_7F259A3C;
    case 0x7F259A40u: goto label_7F259A40;
    case 0x7F259A44u: goto label_7F259A44;
    case 0x7F259A48u: goto label_7F259A48;
    case 0x7F259A4Cu: goto label_7F259A4C;
    case 0x7F259A50u: goto label_7F259A50;
    case 0x7F259A54u: goto label_7F259A54;
    case 0x7F259A58u: goto label_7F259A58;
    case 0x7F259A5Cu: goto label_7F259A5C;
    case 0x7F259A60u: goto label_7F259A60;
    case 0x7F259A64u: goto label_7F259A64;
    case 0x7F259A68u: goto label_7F259A68;
    case 0x7F259A6Cu: goto label_7F259A6C;
    case 0x7F259A70u: goto label_7F259A70;
    case 0x7F259A74u: goto label_7F259A74;
    case 0x7F259A78u: goto label_7F259A78;
    case 0x7F259A7Cu: goto label_7F259A7C;
    case 0x7F259A80u: goto label_7F259A80;
    case 0x7F259A84u: goto label_7F259A84;
    case 0x7F259A88u: goto label_7F259A88;
    case 0x7F259A8Cu: goto label_7F259A8C;
    case 0x7F259A90u: goto label_7F259A90;
    case 0x7F259A94u: goto label_7F259A94;
    case 0x7F259A98u: goto label_7F259A98;
    case 0x7F259A9Cu: goto label_7F259A9C;
    case 0x7F259AA0u: goto label_7F259AA0;
    case 0x7F259AA4u: goto label_7F259AA4;
    case 0x7F259AA8u: goto label_7F259AA8;
    case 0x7F259AACu: goto label_7F259AAC;
    case 0x7F259AB0u: goto label_7F259AB0;
    case 0x7F259AB4u: goto label_7F259AB4;
    case 0x7F259AB8u: goto label_7F259AB8;
    case 0x7F259ABCu: goto label_7F259ABC;
    case 0x7F259AC0u: goto label_7F259AC0;
    case 0x7F259AC4u: goto label_7F259AC4;
    case 0x7F259AC8u: goto label_7F259AC8;
    case 0x7F259ACCu: goto label_7F259ACC;
    case 0x7F259AD0u: goto label_7F259AD0;
    case 0x7F259AD4u: goto label_7F259AD4;
    case 0x7F259AD8u: goto label_7F259AD8;
    case 0x7F259ADCu: goto label_7F259ADC;
    case 0x7F259AE0u: goto label_7F259AE0;
    case 0x7F259AE4u: goto label_7F259AE4;
    case 0x7F259AE8u: goto label_7F259AE8;
    case 0x7F259AECu: goto label_7F259AEC;
    case 0x7F259AF0u: goto label_7F259AF0;
    case 0x7F259AF4u: goto label_7F259AF4;
    case 0x7F259AF8u: goto label_7F259AF8;
    case 0x7F259AFCu: goto label_7F259AFC;
    case 0x7F259B00u: goto label_7F259B00;
    case 0x7F259B04u: goto label_7F259B04;
    case 0x7F259B08u: goto label_7F259B08;
    case 0x7F259B0Cu: goto label_7F259B0C;
    case 0x7F259B10u: goto label_7F259B10;
    case 0x7F259B14u: goto label_7F259B14;
    case 0x7F259B18u: goto label_7F259B18;
    case 0x7F259B1Cu: goto label_7F259B1C;
    case 0x7F259B20u: goto label_7F259B20;
    case 0x7F259B24u: goto label_7F259B24;
    case 0x7F259B28u: goto label_7F259B28;
    case 0x7F259B2Cu: goto label_7F259B2C;
    case 0x7F259B30u: goto label_7F259B30;
    case 0x7F259B34u: goto label_7F259B34;
    case 0x7F259B38u: goto label_7F259B38;
    case 0x7F259B3Cu: goto label_7F259B3C;
    case 0x7F259B40u: goto label_7F259B40;
    case 0x7F259B44u: goto label_7F259B44;
    case 0x7F259B48u: goto label_7F259B48;
    case 0x7F259B4Cu: goto label_7F259B4C;
    case 0x7F259B50u: goto label_7F259B50;
    case 0x7F259B54u: goto label_7F259B54;
    case 0x7F259B58u: goto label_7F259B58;
    case 0x7F259B5Cu: goto label_7F259B5C;
    case 0x7F259B60u: goto label_7F259B60;
    case 0x7F259B64u: goto label_7F259B64;
    case 0x7F259B68u: goto label_7F259B68;
    case 0x7F259B6Cu: goto label_7F259B6C;
    case 0x7F259B70u: goto label_7F259B70;
    case 0x7F259B74u: goto label_7F259B74;
    case 0x7F259B78u: goto label_7F259B78;
    case 0x7F259B7Cu: goto label_7F259B7C;
    case 0x7F259B80u: goto label_7F259B80;
    case 0x7F259B84u: goto label_7F259B84;
    case 0x7F259B88u: goto label_7F259B88;
    case 0x7F259B8Cu: goto label_7F259B8C;
    case 0x7F259B90u: goto label_7F259B90;
    case 0x7F259B94u: goto label_7F259B94;
    case 0x7F259B98u: goto label_7F259B98;
    case 0x7F259B9Cu: goto label_7F259B9C;
    case 0x7F259BA0u: goto label_7F259BA0;
    case 0x7F259BA4u: goto label_7F259BA4;
    case 0x7F259BA8u: goto label_7F259BA8;
    case 0x7F259BACu: goto label_7F259BAC;
    case 0x7F259BB0u: goto label_7F259BB0;
    case 0x7F259BB4u: goto label_7F259BB4;
    case 0x7F259BB8u: goto label_7F259BB8;
    case 0x7F259BBCu: goto label_7F259BBC;
    case 0x7F259BC0u: goto label_7F259BC0;
    case 0x7F259BC4u: goto label_7F259BC4;
    case 0x7F259BC8u: goto label_7F259BC8;
    case 0x7F259BCCu: goto label_7F259BCC;
    case 0x7F259BD0u: goto label_7F259BD0;
    case 0x7F259BD4u: goto label_7F259BD4;
    case 0x7F259BD8u: goto label_7F259BD8;
    case 0x7F259BDCu: goto label_7F259BDC;
    case 0x7F259BE0u: goto label_7F259BE0;
    case 0x7F259BE4u: goto label_7F259BE4;
    case 0x7F259BE8u: goto label_7F259BE8;
    case 0x7F259BECu: goto label_7F259BEC;
    case 0x7F259BF0u: goto label_7F259BF0;
    case 0x7F259BF4u: goto label_7F259BF4;
    case 0x7F259BF8u: goto label_7F259BF8;
    case 0x7F259BFCu: goto label_7F259BFC;
    case 0x7F259C00u: goto label_7F259C00;
    case 0x7F259C04u: goto label_7F259C04;
    case 0x7F259C08u: goto label_7F259C08;
    case 0x7F259C0Cu: goto label_7F259C0C;
    case 0x7F259C10u: goto label_7F259C10;
    case 0x7F259C14u: goto label_7F259C14;
    case 0x7F259C18u: goto label_7F259C18;
    case 0x7F259C1Cu: goto label_7F259C1C;
    case 0x7F259C20u: goto label_7F259C20;
    case 0x7F259C24u: goto label_7F259C24;
    case 0x7F259C28u: goto label_7F259C28;
    case 0x7F259C2Cu: goto label_7F259C2C;
    case 0x7F259C30u: goto label_7F259C30;
    case 0x7F259C34u: goto label_7F259C34;
    case 0x7F259C38u: goto label_7F259C38;
    case 0x7F259C3Cu: goto label_7F259C3C;
    case 0x7F259C40u: goto label_7F259C40;
    case 0x7F259C44u: goto label_7F259C44;
    case 0x7F259C48u: goto label_7F259C48;
    case 0x7F259C4Cu: goto label_7F259C4C;
    case 0x7F259C50u: goto label_7F259C50;
    case 0x7F259C54u: goto label_7F259C54;
    case 0x7F259C58u: goto label_7F259C58;
    case 0x7F259C5Cu: goto label_7F259C5C;
    case 0x7F259C60u: goto label_7F259C60;
    case 0x7F259C64u: goto label_7F259C64;
    case 0x7F259C68u: goto label_7F259C68;
    case 0x7F259C6Cu: goto label_7F259C6C;
    case 0x7F259C70u: goto label_7F259C70;
    case 0x7F259C74u: goto label_7F259C74;
    case 0x7F259C78u: goto label_7F259C78;
    case 0x7F259C7Cu: goto label_7F259C7C;
    case 0x7F259C80u: goto label_7F259C80;
    case 0x7F259C84u: goto label_7F259C84;
    case 0x7F259C88u: goto label_7F259C88;
    case 0x7F259C8Cu: goto label_7F259C8C;
    case 0x7F259C90u: goto label_7F259C90;
    case 0x7F259C94u: goto label_7F259C94;
    case 0x7F259C98u: goto label_7F259C98;
    case 0x7F259C9Cu: goto label_7F259C9C;
    case 0x7F259CA0u: goto label_7F259CA0;
    case 0x7F259CA4u: goto label_7F259CA4;
    case 0x7F259CA8u: goto label_7F259CA8;
    case 0x7F259CACu: goto label_7F259CAC;
    case 0x7F259CB0u: goto label_7F259CB0;
    case 0x7F259CB4u: goto label_7F259CB4;
    case 0x7F259CB8u: goto label_7F259CB8;
    case 0x7F259CBCu: goto label_7F259CBC;
    case 0x7F259CC0u: goto label_7F259CC0;
    case 0x7F259CC4u: goto label_7F259CC4;
    case 0x7F259CC8u: goto label_7F259CC8;
    case 0x7F259CCCu: goto label_7F259CCC;
    case 0x7F259CD0u: goto label_7F259CD0;
    case 0x7F259CD4u: goto label_7F259CD4;
    case 0x7F259CD8u: goto label_7F259CD8;
    case 0x7F259CDCu: goto label_7F259CDC;
    case 0x7F259CE0u: goto label_7F259CE0;
    case 0x7F259CE4u: goto label_7F259CE4;
    case 0x7F259CE8u: goto label_7F259CE8;
    case 0x7F259CECu: goto label_7F259CEC;
    case 0x7F259CF0u: goto label_7F259CF0;
    case 0x7F259CF4u: goto label_7F259CF4;
    case 0x7F259CF8u: goto label_7F259CF8;
    case 0x7F259CFCu: goto label_7F259CFC;
    case 0x7F259D00u: goto label_7F259D00;
    case 0x7F259D04u: goto label_7F259D04;
    case 0x7F259D08u: goto label_7F259D08;
    case 0x7F259D0Cu: goto label_7F259D0C;
    case 0x7F259D10u: goto label_7F259D10;
    case 0x7F259D14u: goto label_7F259D14;
    case 0x7F259D18u: goto label_7F259D18;
    case 0x7F259D1Cu: goto label_7F259D1C;
    case 0x7F259D20u: goto label_7F259D20;
    case 0x7F259D24u: goto label_7F259D24;
    case 0x7F259D28u: goto label_7F259D28;
    case 0x7F259D2Cu: goto label_7F259D2C;
    case 0x7F259D30u: goto label_7F259D30;
    case 0x7F259D34u: goto label_7F259D34;
    case 0x7F259D38u: goto label_7F259D38;
    case 0x7F259D3Cu: goto label_7F259D3C;
    case 0x7F259D40u: goto label_7F259D40;
    case 0x7F259D44u: goto label_7F259D44;
    case 0x7F259D48u: goto label_7F259D48;
    case 0x7F259D4Cu: goto label_7F259D4C;
    case 0x7F259D50u: goto label_7F259D50;
    case 0x7F259D54u: goto label_7F259D54;
    case 0x7F259D58u: goto label_7F259D58;
    case 0x7F259D5Cu: goto label_7F259D5C;
    case 0x7F259D60u: goto label_7F259D60;
    case 0x7F259D64u: goto label_7F259D64;
    case 0x7F259D68u: goto label_7F259D68;
    case 0x7F259D6Cu: goto label_7F259D6C;
    case 0x7F259D70u: goto label_7F259D70;
    case 0x7F259D74u: goto label_7F259D74;
    case 0x7F259D78u: goto label_7F259D78;
    case 0x7F259D7Cu: goto label_7F259D7C;
    case 0x7F259D80u: goto label_7F259D80;
    case 0x7F259D84u: goto label_7F259D84;
    case 0x7F259D88u: goto label_7F259D88;
    case 0x7F259D8Cu: goto label_7F259D8C;
    case 0x7F259D90u: goto label_7F259D90;
    case 0x7F259D94u: goto label_7F259D94;
    case 0x7F259D98u: goto label_7F259D98;
    case 0x7F259D9Cu: goto label_7F259D9C;
    case 0x7F259DA0u: goto label_7F259DA0;
    case 0x7F259DA4u: goto label_7F259DA4;
    case 0x7F259DA8u: goto label_7F259DA8;
    case 0x7F259DACu: goto label_7F259DAC;
    case 0x7F259DB0u: goto label_7F259DB0;
    case 0x7F259DB4u: goto label_7F259DB4;
    case 0x7F259DB8u: goto label_7F259DB8;
    case 0x7F259DBCu: goto label_7F259DBC;
    case 0x7F259DC0u: goto label_7F259DC0;
    case 0x7F259DC4u: goto label_7F259DC4;
    case 0x7F259DC8u: goto label_7F259DC8;
    case 0x7F259DCCu: goto label_7F259DCC;
    case 0x7F259DD0u: goto label_7F259DD0;
    case 0x7F259DD4u: goto label_7F259DD4;
    case 0x7F259DD8u: goto label_7F259DD8;
    case 0x7F259DDCu: goto label_7F259DDC;
    case 0x7F259DE0u: goto label_7F259DE0;
    case 0x7F259DE4u: goto label_7F259DE4;
    case 0x7F259DE8u: goto label_7F259DE8;
    case 0x7F259DECu: goto label_7F259DEC;
    case 0x7F259DF0u: goto label_7F259DF0;
    case 0x7F259DF4u: goto label_7F259DF4;
    case 0x7F259DF8u: goto label_7F259DF8;
    case 0x7F259DFCu: goto label_7F259DFC;
    case 0x7F259E00u: goto label_7F259E00;
    case 0x7F259E04u: goto label_7F259E04;
    case 0x7F259E08u: goto label_7F259E08;
    case 0x7F259E0Cu: goto label_7F259E0C;
    case 0x7F259E10u: goto label_7F259E10;
    case 0x7F259E14u: goto label_7F259E14;
    case 0x7F259E18u: goto label_7F259E18;
    case 0x7F259E1Cu: goto label_7F259E1C;
    case 0x7F259E20u: goto label_7F259E20;
    case 0x7F259E24u: goto label_7F259E24;
    case 0x7F259E28u: goto label_7F259E28;
    case 0x7F259E2Cu: goto label_7F259E2C;
    case 0x7F259E30u: goto label_7F259E30;
    case 0x7F259E34u: goto label_7F259E34;
    case 0x7F259E38u: goto label_7F259E38;
    case 0x7F259E3Cu: goto label_7F259E3C;
    case 0x7F259E40u: goto label_7F259E40;
    case 0x7F259E44u: goto label_7F259E44;
    case 0x7F259E48u: goto label_7F259E48;
    case 0x7F259E4Cu: goto label_7F259E4C;
    case 0x7F259E50u: goto label_7F259E50;
    case 0x7F259E54u: goto label_7F259E54;
    case 0x7F259E58u: goto label_7F259E58;
    case 0x7F259E5Cu: goto label_7F259E5C;
    case 0x7F259E60u: goto label_7F259E60;
    case 0x7F259E64u: goto label_7F259E64;
    case 0x7F259E68u: goto label_7F259E68;
    case 0x7F259E6Cu: goto label_7F259E6C;
    case 0x7F259E70u: goto label_7F259E70;
    case 0x7F259E74u: goto label_7F259E74;
    case 0x7F259E78u: goto label_7F259E78;
    case 0x7F259E7Cu: goto label_7F259E7C;
    case 0x7F259E80u: goto label_7F259E80;
    case 0x7F259E84u: goto label_7F259E84;
    case 0x7F259E88u: goto label_7F259E88;
    case 0x7F259E8Cu: goto label_7F259E8C;
    case 0x7F259E90u: goto label_7F259E90;
    case 0x7F259E94u: goto label_7F259E94;
    case 0x7F259E98u: goto label_7F259E98;
    case 0x7F259E9Cu: goto label_7F259E9C;
    case 0x7F259EA0u: goto label_7F259EA0;
    case 0x7F259EA4u: goto label_7F259EA4;
    case 0x7F259EA8u: goto label_7F259EA8;
    case 0x7F259EACu: goto label_7F259EAC;
    case 0x7F259EB0u: goto label_7F259EB0;
    case 0x7F259EB4u: goto label_7F259EB4;
    case 0x7F259EB8u: goto label_7F259EB8;
    case 0x7F259EBCu: goto label_7F259EBC;
    case 0x7F259EC0u: goto label_7F259EC0;
    case 0x7F259EC4u: goto label_7F259EC4;
    case 0x7F259EC8u: goto label_7F259EC8;
    case 0x7F259ECCu: goto label_7F259ECC;
    case 0x7F259ED0u: goto label_7F259ED0;
    case 0x7F259ED4u: goto label_7F259ED4;
    case 0x7F259ED8u: goto label_7F259ED8;
    case 0x7F259EDCu: goto label_7F259EDC;
    case 0x7F259EE0u: goto label_7F259EE0;
    case 0x7F259EE4u: goto label_7F259EE4;
    case 0x7F259EE8u: goto label_7F259EE8;
    case 0x7F259EECu: goto label_7F259EEC;
    case 0x7F259EF0u: goto label_7F259EF0;
    case 0x7F259EF4u: goto label_7F259EF4;
    case 0x7F259EF8u: goto label_7F259EF8;
    case 0x7F259EFCu: goto label_7F259EFC;
    case 0x7F259F00u: goto label_7F259F00;
    case 0x7F259F04u: goto label_7F259F04;
    case 0x7F259F08u: goto label_7F259F08;
    case 0x7F259F0Cu: goto label_7F259F0C;
    case 0x7F259F10u: goto label_7F259F10;
    case 0x7F259F14u: goto label_7F259F14;
    case 0x7F259F18u: goto label_7F259F18;
    case 0x7F259F1Cu: goto label_7F259F1C;
    case 0x7F259F20u: goto label_7F259F20;
    case 0x7F259F24u: goto label_7F259F24;
    case 0x7F259F28u: goto label_7F259F28;
    case 0x7F259F2Cu: goto label_7F259F2C;
    case 0x7F259F30u: goto label_7F259F30;
    case 0x7F259F34u: goto label_7F259F34;
    case 0x7F259F38u: goto label_7F259F38;
    case 0x7F259F3Cu: goto label_7F259F3C;
    case 0x7F259F40u: goto label_7F259F40;
    case 0x7F259F44u: goto label_7F259F44;
    case 0x7F259F48u: goto label_7F259F48;
    case 0x7F259F4Cu: goto label_7F259F4C;
    case 0x7F259F50u: goto label_7F259F50;
    case 0x7F259F54u: goto label_7F259F54;
    case 0x7F259F58u: goto label_7F259F58;
    case 0x7F259F5Cu: goto label_7F259F5C;
    case 0x7F259F60u: goto label_7F259F60;
    case 0x7F259F64u: goto label_7F259F64;
    case 0x7F259F68u: goto label_7F259F68;
    case 0x7F259F6Cu: goto label_7F259F6C;
    case 0x7F259F70u: goto label_7F259F70;
    case 0x7F259F74u: goto label_7F259F74;
    case 0x7F259F78u: goto label_7F259F78;
    case 0x7F259F7Cu: goto label_7F259F7C;
    case 0x7F259F80u: goto label_7F259F80;
    case 0x7F259F84u: goto label_7F259F84;
    case 0x7F259F88u: goto label_7F259F88;
    case 0x7F259F8Cu: goto label_7F259F8C;
    case 0x7F259F90u: goto label_7F259F90;
    case 0x7F259F94u: goto label_7F259F94;
    case 0x7F259F98u: goto label_7F259F98;
    case 0x7F259F9Cu: goto label_7F259F9C;
    case 0x7F259FA0u: goto label_7F259FA0;
    case 0x7F259FA4u: goto label_7F259FA4;
    case 0x7F259FA8u: goto label_7F259FA8;
    case 0x7F259FACu: goto label_7F259FAC;
    case 0x7F259FB0u: goto label_7F259FB0;
    case 0x7F259FB4u: goto label_7F259FB4;
    case 0x7F259FB8u: goto label_7F259FB8;
    case 0x7F259FBCu: goto label_7F259FBC;
    case 0x7F259FC0u: goto label_7F259FC0;
    case 0x7F259FC4u: goto label_7F259FC4;
    case 0x7F259FC8u: goto label_7F259FC8;
    case 0x7F259FCCu: goto label_7F259FCC;
    case 0x7F259FD0u: goto label_7F259FD0;
    case 0x7F259FD4u: goto label_7F259FD4;
    case 0x7F259FD8u: goto label_7F259FD8;
    case 0x7F259FDCu: goto label_7F259FDC;
    case 0x7F259FE0u: goto label_7F259FE0;
    case 0x7F259FE4u: goto label_7F259FE4;
    case 0x7F259FE8u: goto label_7F259FE8;
    case 0x7F259FECu: goto label_7F259FEC;
    case 0x7F259FF0u: goto label_7F259FF0;
    case 0x7F259FF4u: goto label_7F259FF4;
    case 0x7F259FF8u: goto label_7F259FF8;
    case 0x7F259FFCu: goto label_7F259FFC;
    case 0x7F25A000u: goto label_7F25A000;
    case 0x7F25A004u: goto label_7F25A004;
    case 0x7F25A008u: goto label_7F25A008;
    case 0x7F25A00Cu: goto label_7F25A00C;
    case 0x7F25A010u: goto label_7F25A010;
    case 0x7F25A014u: goto label_7F25A014;
    case 0x7F25A018u: goto label_7F25A018;
    case 0x7F25A01Cu: goto label_7F25A01C;
    case 0x7F25A020u: goto label_7F25A020;
    case 0x7F25A024u: goto label_7F25A024;
    case 0x7F25A028u: goto label_7F25A028;
    case 0x7F25A02Cu: goto label_7F25A02C;
    case 0x7F25A030u: goto label_7F25A030;
    case 0x7F25A034u: goto label_7F25A034;
    case 0x7F25A038u: goto label_7F25A038;
    case 0x7F25A03Cu: goto label_7F25A03C;
    case 0x7F25A040u: goto label_7F25A040;
    case 0x7F25A044u: goto label_7F25A044;
    case 0x7F25A048u: goto label_7F25A048;
    case 0x7F25A04Cu: goto label_7F25A04C;
    case 0x7F25A050u: goto label_7F25A050;
    case 0x7F25A054u: goto label_7F25A054;
    case 0x7F25A058u: goto label_7F25A058;
    case 0x7F25A05Cu: goto label_7F25A05C;
    case 0x7F25A060u: goto label_7F25A060;
    case 0x7F25A064u: goto label_7F25A064;
    case 0x7F25A068u: goto label_7F25A068;
    case 0x7F25A06Cu: goto label_7F25A06C;
    case 0x7F25A070u: goto label_7F25A070;
    case 0x7F25A074u: goto label_7F25A074;
    case 0x7F25A078u: goto label_7F25A078;
    case 0x7F25A07Cu: goto label_7F25A07C;
    case 0x7F25A080u: goto label_7F25A080;
    case 0x7F25A084u: goto label_7F25A084;
    case 0x7F25A088u: goto label_7F25A088;
    case 0x7F25A08Cu: goto label_7F25A08C;
    case 0x7F25A090u: goto label_7F25A090;
    case 0x7F25A094u: goto label_7F25A094;
    case 0x7F25A098u: goto label_7F25A098;
    case 0x7F25A09Cu: goto label_7F25A09C;
    case 0x7F25A0A0u: goto label_7F25A0A0;
    case 0x7F25A0A4u: goto label_7F25A0A4;
    case 0x7F25A0A8u: goto label_7F25A0A8;
    case 0x7F25A0ACu: goto label_7F25A0AC;
    case 0x7F25A0B0u: goto label_7F25A0B0;
    case 0x7F25A0B4u: goto label_7F25A0B4;
    case 0x7F25A0B8u: goto label_7F25A0B8;
    case 0x7F25A0BCu: goto label_7F25A0BC;
    case 0x7F25A0C0u: goto label_7F25A0C0;
    case 0x7F25A0C4u: goto label_7F25A0C4;
    case 0x7F25A0C8u: goto label_7F25A0C8;
    case 0x7F25A0CCu: goto label_7F25A0CC;
    case 0x7F25A0D0u: goto label_7F25A0D0;
    case 0x7F25A0D4u: goto label_7F25A0D4;
    case 0x7F25A0D8u: goto label_7F25A0D8;
    case 0x7F25A0DCu: goto label_7F25A0DC;
    case 0x7F25A0E0u: goto label_7F25A0E0;
    case 0x7F25A0E4u: goto label_7F25A0E4;
    case 0x7F25A0E8u: goto label_7F25A0E8;
    case 0x7F25A0ECu: goto label_7F25A0EC;
    case 0x7F25A0F0u: goto label_7F25A0F0;
    case 0x7F25A0F4u: goto label_7F25A0F4;
    case 0x7F25A0F8u: goto label_7F25A0F8;
    case 0x7F25A0FCu: goto label_7F25A0FC;
    case 0x7F25A100u: goto label_7F25A100;
    case 0x7F25A104u: goto label_7F25A104;
    case 0x7F25A108u: goto label_7F25A108;
    case 0x7F25A10Cu: goto label_7F25A10C;
    case 0x7F25A110u: goto label_7F25A110;
    case 0x7F25A114u: goto label_7F25A114;
    case 0x7F25A118u: goto label_7F25A118;
    case 0x7F25A11Cu: goto label_7F25A11C;
    case 0x7F25A120u: goto label_7F25A120;
    case 0x7F25A124u: goto label_7F25A124;
    case 0x7F25A128u: goto label_7F25A128;
    case 0x7F25A12Cu: goto label_7F25A12C;
    case 0x7F25A130u: goto label_7F25A130;
    case 0x7F25A134u: goto label_7F25A134;
    case 0x7F25A138u: goto label_7F25A138;
    case 0x7F25A13Cu: goto label_7F25A13C;
    case 0x7F25A140u: goto label_7F25A140;
    case 0x7F25A144u: goto label_7F25A144;
    case 0x7F25A148u: goto label_7F25A148;
    case 0x7F25A14Cu: goto label_7F25A14C;
    case 0x7F25A150u: goto label_7F25A150;
    case 0x7F25A154u: goto label_7F25A154;
    case 0x7F25A158u: goto label_7F25A158;
    case 0x7F25A15Cu: goto label_7F25A15C;
    case 0x7F25A160u: goto label_7F25A160;
    case 0x7F25A164u: goto label_7F25A164;
    case 0x7F25A168u: goto label_7F25A168;
    case 0x7F25A16Cu: goto label_7F25A16C;
    case 0x7F25A170u: goto label_7F25A170;
    case 0x7F25A174u: goto label_7F25A174;
    case 0x7F25A178u: goto label_7F25A178;
    case 0x7F25A17Cu: goto label_7F25A17C;
    case 0x7F25A180u: goto label_7F25A180;
    case 0x7F25A184u: goto label_7F25A184;
    case 0x7F25A188u: goto label_7F25A188;
    case 0x7F25A18Cu: goto label_7F25A18C;
    case 0x7F25A190u: goto label_7F25A190;
    case 0x7F25A194u: goto label_7F25A194;
    case 0x7F25A198u: goto label_7F25A198;
    case 0x7F25A19Cu: goto label_7F25A19C;
    case 0x7F25A1A0u: goto label_7F25A1A0;
    case 0x7F25A1A4u: goto label_7F25A1A4;
    case 0x7F25A1A8u: goto label_7F25A1A8;
    case 0x7F25A1ACu: goto label_7F25A1AC;
    case 0x7F25A1B0u: goto label_7F25A1B0;
    case 0x7F25A1B4u: goto label_7F25A1B4;
    case 0x7F25A1B8u: goto label_7F25A1B8;
    case 0x7F25A1BCu: goto label_7F25A1BC;
    case 0x7F25A1C0u: goto label_7F25A1C0;
    case 0x7F25A1C4u: goto label_7F25A1C4;
    case 0x7F25A1C8u: goto label_7F25A1C8;
    case 0x7F25A1CCu: goto label_7F25A1CC;
    case 0x7F25A1D0u: goto label_7F25A1D0;
    case 0x7F25A1D4u: goto label_7F25A1D4;
    case 0x7F25A1D8u: goto label_7F25A1D8;
    case 0x7F25A1DCu: goto label_7F25A1DC;
    case 0x7F25A1E0u: goto label_7F25A1E0;
    case 0x7F25A1E4u: goto label_7F25A1E4;
    case 0x7F25A1E8u: goto label_7F25A1E8;
    case 0x7F25A1ECu: goto label_7F25A1EC;
    case 0x7F25A1F0u: goto label_7F25A1F0;
    case 0x7F25A1F4u: goto label_7F25A1F4;
    case 0x7F25A1F8u: goto label_7F25A1F8;
    case 0x7F25A1FCu: goto label_7F25A1FC;
    case 0x7F25A200u: goto label_7F25A200;
    case 0x7F25A204u: goto label_7F25A204;
    case 0x7F25A208u: goto label_7F25A208;
    case 0x7F25A20Cu: goto label_7F25A20C;
    case 0x7F25A210u: goto label_7F25A210;
    case 0x7F25A214u: goto label_7F25A214;
    case 0x7F25A218u: goto label_7F25A218;
    case 0x7F25A21Cu: goto label_7F25A21C;
    case 0x7F25A220u: goto label_7F25A220;
    case 0x7F25A224u: goto label_7F25A224;
    case 0x7F25A228u: goto label_7F25A228;
    case 0x7F25A22Cu: goto label_7F25A22C;
    case 0x7F25A230u: goto label_7F25A230;
    case 0x7F25A234u: goto label_7F25A234;
    case 0x7F25A238u: goto label_7F25A238;
    case 0x7F25A23Cu: goto label_7F25A23C;
    case 0x7F25A240u: goto label_7F25A240;
    case 0x7F25A244u: goto label_7F25A244;
    case 0x7F25A248u: goto label_7F25A248;
    case 0x7F25A24Cu: goto label_7F25A24C;
    case 0x7F25A250u: goto label_7F25A250;
    case 0x7F25A254u: goto label_7F25A254;
    case 0x7F25A258u: goto label_7F25A258;
    case 0x7F25A25Cu: goto label_7F25A25C;
    case 0x7F25A260u: goto label_7F25A260;
    case 0x7F25A264u: goto label_7F25A264;
    case 0x7F25A268u: goto label_7F25A268;
    case 0x7F25A26Cu: goto label_7F25A26C;
    case 0x7F25A270u: goto label_7F25A270;
    case 0x7F25A274u: goto label_7F25A274;
    case 0x7F25A278u: goto label_7F25A278;
    case 0x7F25A27Cu: goto label_7F25A27C;
    case 0x7F25A280u: goto label_7F25A280;
    case 0x7F25A284u: goto label_7F25A284;
    case 0x7F25A288u: goto label_7F25A288;
    case 0x7F25A28Cu: goto label_7F25A28C;
    case 0x7F25A290u: goto label_7F25A290;
    case 0x7F25A294u: goto label_7F25A294;
    case 0x7F25A298u: goto label_7F25A298;
    case 0x7F25A29Cu: goto label_7F25A29C;
    case 0x7F25A2A0u: goto label_7F25A2A0;
    case 0x7F25A2A4u: goto label_7F25A2A4;
    case 0x7F25A2A8u: goto label_7F25A2A8;
    case 0x7F25A2ACu: goto label_7F25A2AC;
    case 0x7F25A2B0u: goto label_7F25A2B0;
    case 0x7F25A2B4u: goto label_7F25A2B4;
    case 0x7F25A2B8u: goto label_7F25A2B8;
    case 0x7F25A2BCu: goto label_7F25A2BC;
    case 0x7F25A2C0u: goto label_7F25A2C0;
    case 0x7F25A2C4u: goto label_7F25A2C4;
    case 0x7F25A2C8u: goto label_7F25A2C8;
    case 0x7F25A2CCu: goto label_7F25A2CC;
    case 0x7F25A2D0u: goto label_7F25A2D0;
    case 0x7F25A2D4u: goto label_7F25A2D4;
    case 0x7F25A2D8u: goto label_7F25A2D8;
    case 0x7F25A2DCu: goto label_7F25A2DC;
    case 0x7F25A2E0u: goto label_7F25A2E0;
    case 0x7F25A2E4u: goto label_7F25A2E4;
    case 0x7F25A2E8u: goto label_7F25A2E8;
    case 0x7F25A2ECu: goto label_7F25A2EC;
    case 0x7F25A2F0u: goto label_7F25A2F0;
    case 0x7F25A2F4u: goto label_7F25A2F4;
    case 0x7F25A2F8u: goto label_7F25A2F8;
    case 0x7F25A2FCu: goto label_7F25A2FC;
    case 0x7F25A300u: goto label_7F25A300;
    case 0x7F25A304u: goto label_7F25A304;
    case 0x7F25A308u: goto label_7F25A308;
    case 0x7F25A30Cu: goto label_7F25A30C;
    case 0x7F25A310u: goto label_7F25A310;
    case 0x7F25A314u: goto label_7F25A314;
    case 0x7F25A318u: goto label_7F25A318;
    case 0x7F25A31Cu: goto label_7F25A31C;
    case 0x7F25A320u: goto label_7F25A320;
    case 0x7F25A324u: goto label_7F25A324;
    case 0x7F25A328u: goto label_7F25A328;
    case 0x7F25A32Cu: goto label_7F25A32C;
    case 0x7F25A330u: goto label_7F25A330;
    case 0x7F25A334u: goto label_7F25A334;
    case 0x7F25A338u: goto label_7F25A338;
    case 0x7F25A33Cu: goto label_7F25A33C;
    case 0x7F25A340u: goto label_7F25A340;
    case 0x7F25A344u: goto label_7F25A344;
    case 0x7F25A348u: goto label_7F25A348;
    case 0x7F25A34Cu: goto label_7F25A34C;
    case 0x7F25A350u: goto label_7F25A350;
    case 0x7F25A354u: goto label_7F25A354;
    case 0x7F25A358u: goto label_7F25A358;
    case 0x7F25A35Cu: goto label_7F25A35C;
    case 0x7F25A360u: goto label_7F25A360;
    case 0x7F25A364u: goto label_7F25A364;
    case 0x7F25A368u: goto label_7F25A368;
    case 0x7F25A36Cu: goto label_7F25A36C;
    case 0x7F25A370u: goto label_7F25A370;
    case 0x7F25A374u: goto label_7F25A374;
    case 0x7F25A378u: goto label_7F25A378;
    case 0x7F25A37Cu: goto label_7F25A37C;
    case 0x7F25A380u: goto label_7F25A380;
    case 0x7F25A384u: goto label_7F25A384;
    case 0x7F25A388u: goto label_7F25A388;
    case 0x7F25A38Cu: goto label_7F25A38C;
    case 0x7F25A390u: goto label_7F25A390;
    case 0x7F25A394u: goto label_7F25A394;
    case 0x7F25A398u: goto label_7F25A398;
    case 0x7F25A39Cu: goto label_7F25A39C;
    case 0x7F25A3A0u: goto label_7F25A3A0;
    case 0x7F25A3A4u: goto label_7F25A3A4;
    case 0x7F25A3A8u: goto label_7F25A3A8;
    case 0x7F25A3ACu: goto label_7F25A3AC;
    case 0x7F25A3B0u: goto label_7F25A3B0;
    case 0x7F25A3B4u: goto label_7F25A3B4;
    case 0x7F25A3B8u: goto label_7F25A3B8;
    case 0x7F25A3BCu: goto label_7F25A3BC;
    case 0x7F25A3C0u: goto label_7F25A3C0;
    case 0x7F25A3C4u: goto label_7F25A3C4;
    case 0x7F25A3C8u: goto label_7F25A3C8;
    case 0x7F25A3CCu: goto label_7F25A3CC;
    case 0x7F25A3D0u: goto label_7F25A3D0;
    case 0x7F25A3D4u: goto label_7F25A3D4;
    case 0x7F25A3D8u: goto label_7F25A3D8;
    case 0x7F25A3DCu: goto label_7F25A3DC;
    case 0x7F25A3E0u: goto label_7F25A3E0;
    case 0x7F25A3E4u: goto label_7F25A3E4;
    case 0x7F25A3E8u: goto label_7F25A3E8;
    case 0x7F25A3ECu: goto label_7F25A3EC;
    case 0x7F25A3F0u: goto label_7F25A3F0;
    case 0x7F25A3F4u: goto label_7F25A3F4;
    case 0x7F25A3F8u: goto label_7F25A3F8;
    case 0x7F25A3FCu: goto label_7F25A3FC;
    case 0x7F25A400u: goto label_7F25A400;
    case 0x7F25A404u: goto label_7F25A404;
    case 0x7F25A408u: goto label_7F25A408;
    case 0x7F25A40Cu: goto label_7F25A40C;
    case 0x7F25A410u: goto label_7F25A410;
    case 0x7F25A414u: goto label_7F25A414;
    case 0x7F25A418u: goto label_7F25A418;
    case 0x7F25A41Cu: goto label_7F25A41C;
    case 0x7F25A420u: goto label_7F25A420;
    case 0x7F25A424u: goto label_7F25A424;
    case 0x7F25A428u: goto label_7F25A428;
    case 0x7F25A42Cu: goto label_7F25A42C;
    case 0x7F25A430u: goto label_7F25A430;
    case 0x7F25A434u: goto label_7F25A434;
    case 0x7F25A438u: goto label_7F25A438;
    case 0x7F25A43Cu: goto label_7F25A43C;
    case 0x7F25A440u: goto label_7F25A440;
    case 0x7F25A444u: goto label_7F25A444;
    case 0x7F25A448u: goto label_7F25A448;
    case 0x7F25A44Cu: goto label_7F25A44C;
    case 0x7F25A450u: goto label_7F25A450;
    case 0x7F25A454u: goto label_7F25A454;
    case 0x7F25A458u: goto label_7F25A458;
    case 0x7F25A45Cu: goto label_7F25A45C;
    case 0x7F25A460u: goto label_7F25A460;
    case 0x7F25A464u: goto label_7F25A464;
    case 0x7F25A468u: goto label_7F25A468;
    case 0x7F25A46Cu: goto label_7F25A46C;
    case 0x7F25A470u: goto label_7F25A470;
    case 0x7F25A474u: goto label_7F25A474;
    case 0x7F25A478u: goto label_7F25A478;
    case 0x7F25A47Cu: goto label_7F25A47C;
    case 0x7F25A480u: goto label_7F25A480;
    case 0x7F25A484u: goto label_7F25A484;
    case 0x7F25A488u: goto label_7F25A488;
    case 0x7F25A48Cu: goto label_7F25A48C;
    case 0x7F25A490u: goto label_7F25A490;
    case 0x7F25A494u: goto label_7F25A494;
    case 0x7F25A498u: goto label_7F25A498;
    case 0x7F25A49Cu: goto label_7F25A49C;
    case 0x7F25A4A0u: goto label_7F25A4A0;
    case 0x7F25A4A4u: goto label_7F25A4A4;
    case 0x7F25A4A8u: goto label_7F25A4A8;
    case 0x7F25A4ACu: goto label_7F25A4AC;
    case 0x7F25A4B0u: goto label_7F25A4B0;
    case 0x7F25A4B4u: goto label_7F25A4B4;
    case 0x7F25A4B8u: goto label_7F25A4B8;
    case 0x7F25A4BCu: goto label_7F25A4BC;
    case 0x7F25A4C0u: goto label_7F25A4C0;
    case 0x7F25A4C4u: goto label_7F25A4C4;
    case 0x7F25A4C8u: goto label_7F25A4C8;
    case 0x7F25A4CCu: goto label_7F25A4CC;
    case 0x7F25A4D0u: goto label_7F25A4D0;
    case 0x7F25A4D4u: goto label_7F25A4D4;
    case 0x7F25A4D8u: goto label_7F25A4D8;
    case 0x7F25A4DCu: goto label_7F25A4DC;
    case 0x7F25A4E0u: goto label_7F25A4E0;
    case 0x7F25A4E4u: goto label_7F25A4E4;
    case 0x7F25A4E8u: goto label_7F25A4E8;
    case 0x7F25A4ECu: goto label_7F25A4EC;
    case 0x7F25A4F0u: goto label_7F25A4F0;
    case 0x7F25A4F4u: goto label_7F25A4F4;
    case 0x7F25A4F8u: goto label_7F25A4F8;
    case 0x7F25A4FCu: goto label_7F25A4FC;
    case 0x7F25A500u: goto label_7F25A500;
    case 0x7F25A504u: goto label_7F25A504;
    case 0x7F25A508u: goto label_7F25A508;
    case 0x7F25A50Cu: goto label_7F25A50C;
    case 0x7F25A510u: goto label_7F25A510;
    case 0x7F25A514u: goto label_7F25A514;
    case 0x7F25A518u: goto label_7F25A518;
    case 0x7F25A51Cu: goto label_7F25A51C;
    case 0x7F25A520u: goto label_7F25A520;
    case 0x7F25A524u: goto label_7F25A524;
    case 0x7F25A528u: goto label_7F25A528;
    case 0x7F25A52Cu: goto label_7F25A52C;
    case 0x7F25A530u: goto label_7F25A530;
    case 0x7F25A534u: goto label_7F25A534;
    case 0x7F25A538u: goto label_7F25A538;
    case 0x7F25A53Cu: goto label_7F25A53C;
    case 0x7F25A540u: goto label_7F25A540;
    case 0x7F25A544u: goto label_7F25A544;
    case 0x7F25A548u: goto label_7F25A548;
    case 0x7F25A54Cu: goto label_7F25A54C;
    case 0x7F25A550u: goto label_7F25A550;
    case 0x7F25A554u: goto label_7F25A554;
    case 0x7F25A558u: goto label_7F25A558;
    case 0x7F25A55Cu: goto label_7F25A55C;
    case 0x7F25A560u: goto label_7F25A560;
    case 0x7F25A564u: goto label_7F25A564;
    case 0x7F25A568u: goto label_7F25A568;
    case 0x7F25A56Cu: goto label_7F25A56C;
    case 0x7F25A570u: goto label_7F25A570;
    case 0x7F25A574u: goto label_7F25A574;
    case 0x7F25A578u: goto label_7F25A578;
    case 0x7F25A57Cu: goto label_7F25A57C;
    case 0x7F25A580u: goto label_7F25A580;
    case 0x7F25A584u: goto label_7F25A584;
    case 0x7F25A588u: goto label_7F25A588;
    case 0x7F25A58Cu: goto label_7F25A58C;
    case 0x7F25A590u: goto label_7F25A590;
    case 0x7F25A594u: goto label_7F25A594;
    case 0x7F25A598u: goto label_7F25A598;
    case 0x7F25A59Cu: goto label_7F25A59C;
    case 0x7F25A5A0u: goto label_7F25A5A0;
    case 0x7F25A5A4u: goto label_7F25A5A4;
    case 0x7F25A5A8u: goto label_7F25A5A8;
    case 0x7F25A5ACu: goto label_7F25A5AC;
    case 0x7F25A5B0u: goto label_7F25A5B0;
    case 0x7F25A5B4u: goto label_7F25A5B4;
    case 0x7F25A5B8u: goto label_7F25A5B8;
    case 0x7F25A5BCu: goto label_7F25A5BC;
    case 0x7F25A5C0u: goto label_7F25A5C0;
    case 0x7F25A5C4u: goto label_7F25A5C4;
    case 0x7F25A5C8u: goto label_7F25A5C8;
    case 0x7F25A5CCu: goto label_7F25A5CC;
    case 0x7F25A5D0u: goto label_7F25A5D0;
    case 0x7F25A5D4u: goto label_7F25A5D4;
    case 0x7F25A5D8u: goto label_7F25A5D8;
    case 0x7F25A5DCu: goto label_7F25A5DC;
    case 0x7F25A5E0u: goto label_7F25A5E0;
    case 0x7F25A5E4u: goto label_7F25A5E4;
    case 0x7F25A5E8u: goto label_7F25A5E8;
    case 0x7F25A5ECu: goto label_7F25A5EC;
    case 0x7F25A5F0u: goto label_7F25A5F0;
    case 0x7F25A5F4u: goto label_7F25A5F4;
    case 0x7F25A5F8u: goto label_7F25A5F8;
    case 0x7F25A5FCu: goto label_7F25A5FC;
    case 0x7F25A600u: goto label_7F25A600;
    case 0x7F25A604u: goto label_7F25A604;
    case 0x7F25A608u: goto label_7F25A608;
    case 0x7F25A60Cu: goto label_7F25A60C;
    case 0x7F25A610u: goto label_7F25A610;
    case 0x7F25A614u: goto label_7F25A614;
    case 0x7F25A618u: goto label_7F25A618;
    case 0x7F25A61Cu: goto label_7F25A61C;
    case 0x7F25A620u: goto label_7F25A620;
    case 0x7F25A624u: goto label_7F25A624;
    case 0x7F25A628u: goto label_7F25A628;
    case 0x7F25A62Cu: goto label_7F25A62C;
    case 0x7F25A630u: goto label_7F25A630;
    case 0x7F25A634u: goto label_7F25A634;
    case 0x7F25A638u: goto label_7F25A638;
    case 0x7F25A63Cu: goto label_7F25A63C;
    case 0x7F25A640u: goto label_7F25A640;
    case 0x7F25A644u: goto label_7F25A644;
    case 0x7F25A648u: goto label_7F25A648;
    case 0x7F25A64Cu: goto label_7F25A64C;
    case 0x7F25A650u: goto label_7F25A650;
    case 0x7F25A654u: goto label_7F25A654;
    case 0x7F25A658u: goto label_7F25A658;
    case 0x7F25A65Cu: goto label_7F25A65C;
    case 0x7F25A660u: goto label_7F25A660;
    case 0x7F25A664u: goto label_7F25A664;
    case 0x7F25A668u: goto label_7F25A668;
    case 0x7F25A66Cu: goto label_7F25A66C;
    case 0x7F25A670u: goto label_7F25A670;
    case 0x7F25A674u: goto label_7F25A674;
    case 0x7F25A678u: goto label_7F25A678;
    case 0x7F25A67Cu: goto label_7F25A67C;
    case 0x7F25A680u: goto label_7F25A680;
    case 0x7F25A684u: goto label_7F25A684;
    case 0x7F25A688u: goto label_7F25A688;
    case 0x7F25A68Cu: goto label_7F25A68C;
    case 0x7F25A690u: goto label_7F25A690;
    case 0x7F25A694u: goto label_7F25A694;
    case 0x7F25A698u: goto label_7F25A698;
    case 0x7F25A69Cu: goto label_7F25A69C;
    case 0x7F25A6A0u: goto label_7F25A6A0;
    case 0x7F25A6A4u: goto label_7F25A6A4;
    case 0x7F25A6A8u: goto label_7F25A6A8;
    case 0x7F25A6ACu: goto label_7F25A6AC;
    case 0x7F25A6B0u: goto label_7F25A6B0;
    case 0x7F25A6B4u: goto label_7F25A6B4;
    case 0x7F25A6B8u: goto label_7F25A6B8;
    case 0x7F25A6BCu: goto label_7F25A6BC;
    case 0x7F25A6C0u: goto label_7F25A6C0;
    case 0x7F25A6C4u: goto label_7F25A6C4;
    case 0x7F25A6C8u: goto label_7F25A6C8;
    case 0x7F25A6CCu: goto label_7F25A6CC;
    case 0x7F25A6D0u: goto label_7F25A6D0;
    case 0x7F25A6D4u: goto label_7F25A6D4;
    case 0x7F25A6D8u: goto label_7F25A6D8;
    case 0x7F25A6DCu: goto label_7F25A6DC;
    case 0x7F25A6E0u: goto label_7F25A6E0;
    case 0x7F25A6E4u: goto label_7F25A6E4;
    case 0x7F25A6E8u: goto label_7F25A6E8;
    case 0x7F25A6ECu: goto label_7F25A6EC;
    case 0x7F25A6F0u: goto label_7F25A6F0;
    case 0x7F25A6F4u: goto label_7F25A6F4;
    case 0x7F25A6F8u: goto label_7F25A6F8;
    case 0x7F25A6FCu: goto label_7F25A6FC;
    case 0x7F25A700u: goto label_7F25A700;
    case 0x7F25A704u: goto label_7F25A704;
    case 0x7F25A708u: goto label_7F25A708;
    case 0x7F25A70Cu: goto label_7F25A70C;
    case 0x7F25A710u: goto label_7F25A710;
    case 0x7F25A714u: goto label_7F25A714;
    case 0x7F25A718u: goto label_7F25A718;
    case 0x7F25A71Cu: goto label_7F25A71C;
    case 0x7F25A720u: goto label_7F25A720;
    case 0x7F25A724u: goto label_7F25A724;
    case 0x7F25A728u: goto label_7F25A728;
    case 0x7F25A72Cu: goto label_7F25A72C;
    case 0x7F25A730u: goto label_7F25A730;
    case 0x7F25A734u: goto label_7F25A734;
    case 0x7F25A738u: goto label_7F25A738;
    case 0x7F25A73Cu: goto label_7F25A73C;
    case 0x7F25A740u: goto label_7F25A740;
    case 0x7F25A744u: goto label_7F25A744;
    case 0x7F25A748u: goto label_7F25A748;
    case 0x7F25A74Cu: goto label_7F25A74C;
    case 0x7F25A750u: goto label_7F25A750;
    case 0x7F25A754u: goto label_7F25A754;
    case 0x7F25A758u: goto label_7F25A758;
    case 0x7F25A75Cu: goto label_7F25A75C;
    case 0x7F25A760u: goto label_7F25A760;
    case 0x7F25A764u: goto label_7F25A764;
    case 0x7F25A768u: goto label_7F25A768;
    case 0x7F25A76Cu: goto label_7F25A76C;
    case 0x7F25A770u: goto label_7F25A770;
    case 0x7F25A774u: goto label_7F25A774;
    case 0x7F25A778u: goto label_7F25A778;
    case 0x7F25A77Cu: goto label_7F25A77C;
    case 0x7F25A780u: goto label_7F25A780;
    case 0x7F25A784u: goto label_7F25A784;
    case 0x7F25A788u: goto label_7F25A788;
    case 0x7F25A78Cu: goto label_7F25A78C;
    case 0x7F25A790u: goto label_7F25A790;
    case 0x7F25A794u: goto label_7F25A794;
    case 0x7F25A798u: goto label_7F25A798;
    case 0x7F25A79Cu: goto label_7F25A79C;
    case 0x7F25A7A0u: goto label_7F25A7A0;
    case 0x7F25A7A4u: goto label_7F25A7A4;
    case 0x7F25A7A8u: goto label_7F25A7A8;
    case 0x7F25A7ACu: goto label_7F25A7AC;
    case 0x7F25A7B0u: goto label_7F25A7B0;
    case 0x7F25A7B4u: goto label_7F25A7B4;
    case 0x7F25A7B8u: goto label_7F25A7B8;
    case 0x7F25A7BCu: goto label_7F25A7BC;
    case 0x7F25A7C0u: goto label_7F25A7C0;
    case 0x7F25A7C4u: goto label_7F25A7C4;
    case 0x7F25A7C8u: goto label_7F25A7C8;
    case 0x7F25A7CCu: goto label_7F25A7CC;
    case 0x7F25A7D0u: goto label_7F25A7D0;
    case 0x7F25A7D4u: goto label_7F25A7D4;
    case 0x7F25A7D8u: goto label_7F25A7D8;
    case 0x7F25A7DCu: goto label_7F25A7DC;
    case 0x7F25A7E0u: goto label_7F25A7E0;
    case 0x7F25A7E4u: goto label_7F25A7E4;
    case 0x7F25A7E8u: goto label_7F25A7E8;
    case 0x7F25A7ECu: goto label_7F25A7EC;
    case 0x7F25A7F0u: goto label_7F25A7F0;
    case 0x7F25A7F4u: goto label_7F25A7F4;
    case 0x7F25A7F8u: goto label_7F25A7F8;
    case 0x7F25A7FCu: goto label_7F25A7FC;
    case 0x7F25A800u: goto label_7F25A800;
    case 0x7F25A804u: goto label_7F25A804;
    case 0x7F25A808u: goto label_7F25A808;
    case 0x7F25A80Cu: goto label_7F25A80C;
    case 0x7F25A810u: goto label_7F25A810;
    case 0x7F25A814u: goto label_7F25A814;
    case 0x7F25A818u: goto label_7F25A818;
    case 0x7F25A81Cu: goto label_7F25A81C;
    case 0x7F25A820u: goto label_7F25A820;
    case 0x7F25A824u: goto label_7F25A824;
    case 0x7F25A828u: goto label_7F25A828;
    case 0x7F25A82Cu: goto label_7F25A82C;
    case 0x7F25A830u: goto label_7F25A830;
    case 0x7F25A834u: goto label_7F25A834;
    case 0x7F25A838u: goto label_7F25A838;
    case 0x7F25A83Cu: goto label_7F25A83C;
    case 0x7F25A840u: goto label_7F25A840;
    case 0x7F25A844u: goto label_7F25A844;
    case 0x7F25A848u: goto label_7F25A848;
    case 0x7F25A84Cu: goto label_7F25A84C;
    case 0x7F25A850u: goto label_7F25A850;
    case 0x7F25A854u: goto label_7F25A854;
    case 0x7F25A858u: goto label_7F25A858;
    case 0x7F25A85Cu: goto label_7F25A85C;
    case 0x7F25A860u: goto label_7F25A860;
    case 0x7F25A864u: goto label_7F25A864;
    case 0x7F25A868u: goto label_7F25A868;
    case 0x7F25A86Cu: goto label_7F25A86C;
    case 0x7F25A870u: goto label_7F25A870;
    case 0x7F25A874u: goto label_7F25A874;
    case 0x7F25A878u: goto label_7F25A878;
    case 0x7F25A87Cu: goto label_7F25A87C;
    case 0x7F25A880u: goto label_7F25A880;
    case 0x7F25A884u: goto label_7F25A884;
    case 0x7F25A888u: goto label_7F25A888;
    case 0x7F25A88Cu: goto label_7F25A88C;
    case 0x7F25A890u: goto label_7F25A890;
    case 0x7F25A894u: goto label_7F25A894;
    case 0x7F25A898u: goto label_7F25A898;
    case 0x7F25A89Cu: goto label_7F25A89C;
    case 0x7F25A8A0u: goto label_7F25A8A0;
    case 0x7F25A8A4u: goto label_7F25A8A4;
    case 0x7F25A8A8u: goto label_7F25A8A8;
    case 0x7F25A8ACu: goto label_7F25A8AC;
    case 0x7F25A8B0u: goto label_7F25A8B0;
    case 0x7F25A8B4u: goto label_7F25A8B4;
    case 0x7F25A8B8u: goto label_7F25A8B8;
    case 0x7F25A8BCu: goto label_7F25A8BC;
    case 0x7F25A8C0u: goto label_7F25A8C0;
    case 0x7F25A8C4u: goto label_7F25A8C4;
    case 0x7F25A8C8u: goto label_7F25A8C8;
    case 0x7F25A8CCu: goto label_7F25A8CC;
    case 0x7F25A8D0u: goto label_7F25A8D0;
    case 0x7F25A8D4u: goto label_7F25A8D4;
    case 0x7F25A8D8u: goto label_7F25A8D8;
    case 0x7F25A8DCu: goto label_7F25A8DC;
    case 0x7F25A8E0u: goto label_7F25A8E0;
    case 0x7F25A8E4u: goto label_7F25A8E4;
    case 0x7F25A8E8u: goto label_7F25A8E8;
    case 0x7F25A8ECu: goto label_7F25A8EC;
    case 0x7F25A8F0u: goto label_7F25A8F0;
    case 0x7F25A8F4u: goto label_7F25A8F4;
    case 0x7F25A8F8u: goto label_7F25A8F8;
    case 0x7F25A8FCu: goto label_7F25A8FC;
    case 0x7F25A900u: goto label_7F25A900;
    case 0x7F25A904u: goto label_7F25A904;
    case 0x7F25A908u: goto label_7F25A908;
    case 0x7F25A90Cu: goto label_7F25A90C;
    case 0x7F25A910u: goto label_7F25A910;
    case 0x7F25A914u: goto label_7F25A914;
    case 0x7F25A918u: goto label_7F25A918;
    case 0x7F25A91Cu: goto label_7F25A91C;
    case 0x7F25A920u: goto label_7F25A920;
    case 0x7F25A924u: goto label_7F25A924;
    case 0x7F25A928u: goto label_7F25A928;
    case 0x7F25A92Cu: goto label_7F25A92C;
    case 0x7F25A930u: goto label_7F25A930;
    case 0x7F25A934u: goto label_7F25A934;
    case 0x7F25A938u: goto label_7F25A938;
    case 0x7F25A93Cu: goto label_7F25A93C;
    case 0x7F25A940u: goto label_7F25A940;
    case 0x7F25A944u: goto label_7F25A944;
    case 0x7F25A948u: goto label_7F25A948;
    case 0x7F25A94Cu: goto label_7F25A94C;
    case 0x7F25A950u: goto label_7F25A950;
    case 0x7F25A954u: goto label_7F25A954;
    case 0x7F25A958u: goto label_7F25A958;
    case 0x7F25A95Cu: goto label_7F25A95C;
    case 0x7F25A960u: goto label_7F25A960;
    case 0x7F25A964u: goto label_7F25A964;
    case 0x7F25A968u: goto label_7F25A968;
    case 0x7F25A96Cu: goto label_7F25A96C;
    case 0x7F25A970u: goto label_7F25A970;
    case 0x7F25A974u: goto label_7F25A974;
    case 0x7F25A978u: goto label_7F25A978;
    case 0x7F25A97Cu: goto label_7F25A97C;
    case 0x7F25A980u: goto label_7F25A980;
    case 0x7F25A984u: goto label_7F25A984;
    case 0x7F25A988u: goto label_7F25A988;
    case 0x7F25A98Cu: goto label_7F25A98C;
    case 0x7F25A990u: goto label_7F25A990;
    case 0x7F25A994u: goto label_7F25A994;
    case 0x7F25A998u: goto label_7F25A998;
    case 0x7F25A99Cu: goto label_7F25A99C;
    case 0x7F25A9A0u: goto label_7F25A9A0;
    case 0x7F25A9A4u: goto label_7F25A9A4;
    case 0x7F25A9A8u: goto label_7F25A9A8;
    case 0x7F25A9ACu: goto label_7F25A9AC;
    case 0x7F25A9B0u: goto label_7F25A9B0;
    case 0x7F25A9B4u: goto label_7F25A9B4;
    case 0x7F25A9B8u: goto label_7F25A9B8;
    case 0x7F25A9BCu: goto label_7F25A9BC;
    case 0x7F25A9C0u: goto label_7F25A9C0;
    case 0x7F25A9C4u: goto label_7F25A9C4;
    case 0x7F25A9C8u: goto label_7F25A9C8;
    case 0x7F25A9CCu: goto label_7F25A9CC;
    case 0x7F25A9D0u: goto label_7F25A9D0;
    case 0x7F25A9D4u: goto label_7F25A9D4;
    case 0x7F25A9D8u: goto label_7F25A9D8;
    case 0x7F25A9DCu: goto label_7F25A9DC;
    case 0x7F25A9E0u: goto label_7F25A9E0;
    case 0x7F25A9E4u: goto label_7F25A9E4;
    case 0x7F25A9E8u: goto label_7F25A9E8;
    case 0x7F25A9ECu: goto label_7F25A9EC;
    case 0x7F25A9F0u: goto label_7F25A9F0;
    case 0x7F25A9F4u: goto label_7F25A9F4;
    case 0x7F25A9F8u: goto label_7F25A9F8;
    case 0x7F25A9FCu: goto label_7F25A9FC;
    case 0x7F25AA00u: goto label_7F25AA00;
    case 0x7F25AA04u: goto label_7F25AA04;
    case 0x7F25AA08u: goto label_7F25AA08;
    case 0x7F25AA0Cu: goto label_7F25AA0C;
    case 0x7F25AA10u: goto label_7F25AA10;
    case 0x7F25AA14u: goto label_7F25AA14;
    case 0x7F25AA18u: goto label_7F25AA18;
    case 0x7F25AA1Cu: goto label_7F25AA1C;
    case 0x7F25AA20u: goto label_7F25AA20;
    case 0x7F25AA24u: goto label_7F25AA24;
    case 0x7F25AA28u: goto label_7F25AA28;
    case 0x7F25AA2Cu: goto label_7F25AA2C;
    case 0x7F25AA30u: goto label_7F25AA30;
    case 0x7F25AA34u: goto label_7F25AA34;
    case 0x7F25AA38u: goto label_7F25AA38;
    case 0x7F25AA3Cu: goto label_7F25AA3C;
    case 0x7F25AA40u: goto label_7F25AA40;
    case 0x7F25AA44u: goto label_7F25AA44;
    case 0x7F25AA48u: goto label_7F25AA48;
    case 0x7F25AA4Cu: goto label_7F25AA4C;
    case 0x7F25AA50u: goto label_7F25AA50;
    case 0x7F25AA54u: goto label_7F25AA54;
    case 0x7F25AA58u: goto label_7F25AA58;
    case 0x7F25AA5Cu: goto label_7F25AA5C;
    case 0x7F25AA60u: goto label_7F25AA60;
    case 0x7F25AA64u: goto label_7F25AA64;
    case 0x7F25AA68u: goto label_7F25AA68;
    case 0x7F25AA6Cu: goto label_7F25AA6C;
    case 0x7F25AA70u: goto label_7F25AA70;
    case 0x7F25AA74u: goto label_7F25AA74;
    case 0x7F25AA78u: goto label_7F25AA78;
    case 0x7F25AA7Cu: goto label_7F25AA7C;
    case 0x7F25AA80u: goto label_7F25AA80;
    case 0x7F25AA84u: goto label_7F25AA84;
    case 0x7F25AA88u: goto label_7F25AA88;
    case 0x7F25AA8Cu: goto label_7F25AA8C;
    case 0x7F25AA90u: goto label_7F25AA90;
    case 0x7F25AA94u: goto label_7F25AA94;
    case 0x7F25AA98u: goto label_7F25AA98;
    case 0x7F25AA9Cu: goto label_7F25AA9C;
    case 0x7F25AAA0u: goto label_7F25AAA0;
    case 0x7F25AAA4u: goto label_7F25AAA4;
    case 0x7F25AAA8u: goto label_7F25AAA8;
    case 0x7F25AAACu: goto label_7F25AAAC;
    case 0x7F25AAB0u: goto label_7F25AAB0;
    case 0x7F25AAB4u: goto label_7F25AAB4;
    case 0x7F25AAB8u: goto label_7F25AAB8;
    case 0x7F25AABCu: goto label_7F25AABC;
    case 0x7F25AAC0u: goto label_7F25AAC0;
    case 0x7F25AAC4u: goto label_7F25AAC4;
    case 0x7F25AAC8u: goto label_7F25AAC8;
    case 0x7F25AACCu: goto label_7F25AACC;
    case 0x7F25AAD0u: goto label_7F25AAD0;
    case 0x7F25AAD4u: goto label_7F25AAD4;
    case 0x7F25AAD8u: goto label_7F25AAD8;
    case 0x7F25AADCu: goto label_7F25AADC;
    case 0x7F25AAE0u: goto label_7F25AAE0;
    case 0x7F25AAE4u: goto label_7F25AAE4;
    case 0x7F25AAE8u: goto label_7F25AAE8;
    case 0x7F25AAECu: goto label_7F25AAEC;
    case 0x7F25AAF0u: goto label_7F25AAF0;
    case 0x7F25AAF4u: goto label_7F25AAF4;
    case 0x7F25AAF8u: goto label_7F25AAF8;
    case 0x7F25AAFCu: goto label_7F25AAFC;
    case 0x7F25AB00u: goto label_7F25AB00;
    case 0x7F25AB04u: goto label_7F25AB04;
    case 0x7F25AB08u: goto label_7F25AB08;
    case 0x7F25AB0Cu: goto label_7F25AB0C;
    case 0x7F25AB10u: goto label_7F25AB10;
    case 0x7F25AB14u: goto label_7F25AB14;
    case 0x7F25AB18u: goto label_7F25AB18;
    case 0x7F25AB1Cu: goto label_7F25AB1C;
    case 0x7F25AB20u: goto label_7F25AB20;
    case 0x7F25AB24u: goto label_7F25AB24;
    case 0x7F25AB28u: goto label_7F25AB28;
    case 0x7F25AB2Cu: goto label_7F25AB2C;
    case 0x7F25AB30u: goto label_7F25AB30;
    case 0x7F25AB34u: goto label_7F25AB34;
    case 0x7F25AB38u: goto label_7F25AB38;
    case 0x7F25AB3Cu: goto label_7F25AB3C;
    case 0x7F25AB40u: goto label_7F25AB40;
    case 0x7F25AB44u: goto label_7F25AB44;
    case 0x7F25AB48u: goto label_7F25AB48;
    case 0x7F25AB4Cu: goto label_7F25AB4C;
    case 0x7F25AB50u: goto label_7F25AB50;
    case 0x7F25AB54u: goto label_7F25AB54;
    case 0x7F25AB58u: goto label_7F25AB58;
    case 0x7F25AB5Cu: goto label_7F25AB5C;
    case 0x7F25AB60u: goto label_7F25AB60;
    case 0x7F25AB64u: goto label_7F25AB64;
    case 0x7F25AB68u: goto label_7F25AB68;
    case 0x7F25AB6Cu: goto label_7F25AB6C;
    case 0x7F25AB70u: goto label_7F25AB70;
    case 0x7F25AB74u: goto label_7F25AB74;
    case 0x7F25AB78u: goto label_7F25AB78;
    case 0x7F25AB7Cu: goto label_7F25AB7C;
    case 0x7F25AB80u: goto label_7F25AB80;
    case 0x7F25AB84u: goto label_7F25AB84;
    case 0x7F25AB88u: goto label_7F25AB88;
    case 0x7F25AB8Cu: goto label_7F25AB8C;
    case 0x7F25AB90u: goto label_7F25AB90;
    case 0x7F25AB94u: goto label_7F25AB94;
    case 0x7F25AB98u: goto label_7F25AB98;
    case 0x7F25AB9Cu: goto label_7F25AB9C;
    case 0x7F25ABA0u: goto label_7F25ABA0;
    case 0x7F25ABA4u: goto label_7F25ABA4;
    case 0x7F25ABA8u: goto label_7F25ABA8;
    case 0x7F25ABACu: goto label_7F25ABAC;
    case 0x7F25ABB0u: goto label_7F25ABB0;
    case 0x7F25ABB4u: goto label_7F25ABB4;
    case 0x7F25ABB8u: goto label_7F25ABB8;
    case 0x7F25ABBCu: goto label_7F25ABBC;
    case 0x7F25ABC0u: goto label_7F25ABC0;
    case 0x7F25ABC4u: goto label_7F25ABC4;
    case 0x7F25ABC8u: goto label_7F25ABC8;
    case 0x7F25ABCCu: goto label_7F25ABCC;
    case 0x7F25ABD0u: goto label_7F25ABD0;
    case 0x7F25ABD4u: goto label_7F25ABD4;
    case 0x7F25ABD8u: goto label_7F25ABD8;
    case 0x7F25ABDCu: goto label_7F25ABDC;
    case 0x7F25ABE0u: goto label_7F25ABE0;
    case 0x7F25ABE4u: goto label_7F25ABE4;
    case 0x7F25ABE8u: goto label_7F25ABE8;
    case 0x7F25ABECu: goto label_7F25ABEC;
    case 0x7F25ABF0u: goto label_7F25ABF0;
    case 0x7F25ABF4u: goto label_7F25ABF4;
    case 0x7F25ABF8u: goto label_7F25ABF8;
    case 0x7F25ABFCu: goto label_7F25ABFC;
    case 0x7F25AC00u: goto label_7F25AC00;
    case 0x7F25AC04u: goto label_7F25AC04;
    case 0x7F25AC08u: goto label_7F25AC08;
    case 0x7F25AC0Cu: goto label_7F25AC0C;
    case 0x7F25AC10u: goto label_7F25AC10;
    case 0x7F25AC14u: goto label_7F25AC14;
    case 0x7F25AC18u: goto label_7F25AC18;
    case 0x7F25AC1Cu: goto label_7F25AC1C;
    case 0x7F25AC20u: goto label_7F25AC20;
    case 0x7F25AC24u: goto label_7F25AC24;
    case 0x7F25AC28u: goto label_7F25AC28;
    case 0x7F25AC2Cu: goto label_7F25AC2C;
    case 0x7F25AC30u: goto label_7F25AC30;
    case 0x7F25AC34u: goto label_7F25AC34;
    case 0x7F25AC38u: goto label_7F25AC38;
    case 0x7F25AC3Cu: goto label_7F25AC3C;
    case 0x7F25AC40u: goto label_7F25AC40;
    case 0x7F25AC44u: goto label_7F25AC44;
    case 0x7F25AC48u: goto label_7F25AC48;
    case 0x7F25AC4Cu: goto label_7F25AC4C;
    case 0x7F25AC50u: goto label_7F25AC50;
    case 0x7F25AC54u: goto label_7F25AC54;
    case 0x7F25AC58u: goto label_7F25AC58;
    case 0x7F25AC5Cu: goto label_7F25AC5C;
    case 0x7F25AC60u: goto label_7F25AC60;
    case 0x7F25AC64u: goto label_7F25AC64;
    case 0x7F25AC68u: goto label_7F25AC68;
    case 0x7F25AC6Cu: goto label_7F25AC6C;
    case 0x7F25AC70u: goto label_7F25AC70;
    case 0x7F25AC74u: goto label_7F25AC74;
    case 0x7F25AC78u: goto label_7F25AC78;
    case 0x7F25AC7Cu: goto label_7F25AC7C;
    case 0x7F25AC80u: goto label_7F25AC80;
    case 0x7F25AC84u: goto label_7F25AC84;
    case 0x7F25AC88u: goto label_7F25AC88;
    case 0x7F25AC8Cu: goto label_7F25AC8C;
    case 0x7F25AC90u: goto label_7F25AC90;
    case 0x7F25AC94u: goto label_7F25AC94;
    case 0x7F25AC98u: goto label_7F25AC98;
    case 0x7F25AC9Cu: goto label_7F25AC9C;
    case 0x7F25ACA0u: goto label_7F25ACA0;
    case 0x7F25ACA4u: goto label_7F25ACA4;
    case 0x7F25ACA8u: goto label_7F25ACA8;
    case 0x7F25ACACu: goto label_7F25ACAC;
    case 0x7F25ACB0u: goto label_7F25ACB0;
    case 0x7F25ACB4u: goto label_7F25ACB4;
    case 0x7F25ACB8u: goto label_7F25ACB8;
    case 0x7F25ACBCu: goto label_7F25ACBC;
    case 0x7F25ACC0u: goto label_7F25ACC0;
    case 0x7F25ACC4u: goto label_7F25ACC4;
    case 0x7F25ACC8u: goto label_7F25ACC8;
    case 0x7F25ACCCu: goto label_7F25ACCC;
    case 0x7F25ACD0u: goto label_7F25ACD0;
    case 0x7F25ACD4u: goto label_7F25ACD4;
    case 0x7F25ACD8u: goto label_7F25ACD8;
    case 0x7F25ACDCu: goto label_7F25ACDC;
    case 0x7F25ACE0u: goto label_7F25ACE0;
    case 0x7F25ACE4u: goto label_7F25ACE4;
    case 0x7F25ACE8u: goto label_7F25ACE8;
    case 0x7F25ACECu: goto label_7F25ACEC;
    case 0x7F25ACF0u: goto label_7F25ACF0;
    case 0x7F25ACF4u: goto label_7F25ACF4;
    case 0x7F25ACF8u: goto label_7F25ACF8;
    case 0x7F25ACFCu: goto label_7F25ACFC;
    case 0x7F25AD00u: goto label_7F25AD00;
    case 0x7F25AD04u: goto label_7F25AD04;
    case 0x7F25AD08u: goto label_7F25AD08;
    case 0x7F25AD0Cu: goto label_7F25AD0C;
    case 0x7F25AD10u: goto label_7F25AD10;
    case 0x7F25AD14u: goto label_7F25AD14;
    case 0x7F25AD18u: goto label_7F25AD18;
    case 0x7F25AD1Cu: goto label_7F25AD1C;
    case 0x7F25AD20u: goto label_7F25AD20;
    case 0x7F25AD24u: goto label_7F25AD24;
    case 0x7F25AD28u: goto label_7F25AD28;
    case 0x7F25AD2Cu: goto label_7F25AD2C;
    case 0x7F25AD30u: goto label_7F25AD30;
    case 0x7F25AD34u: goto label_7F25AD34;
    case 0x7F25AD38u: goto label_7F25AD38;
    case 0x7F25AD3Cu: goto label_7F25AD3C;
    case 0x7F25AD40u: goto label_7F25AD40;
    case 0x7F25AD44u: goto label_7F25AD44;
    case 0x7F25AD48u: goto label_7F25AD48;
    case 0x7F25AD4Cu: goto label_7F25AD4C;
    case 0x7F25AD50u: goto label_7F25AD50;
    case 0x7F25AD54u: goto label_7F25AD54;
    case 0x7F25AD58u: goto label_7F25AD58;
    case 0x7F25AD5Cu: goto label_7F25AD5C;
    case 0x7F25AD60u: goto label_7F25AD60;
    case 0x7F25AD64u: goto label_7F25AD64;
    case 0x7F25AD68u: goto label_7F25AD68;
    case 0x7F25AD6Cu: goto label_7F25AD6C;
    case 0x7F25AD70u: goto label_7F25AD70;
    case 0x7F25AD74u: goto label_7F25AD74;
    case 0x7F25AD78u: goto label_7F25AD78;
    case 0x7F25AD7Cu: goto label_7F25AD7C;
    case 0x7F25AD80u: goto label_7F25AD80;
    case 0x7F25AD84u: goto label_7F25AD84;
    case 0x7F25AD88u: goto label_7F25AD88;
    case 0x7F25AD8Cu: goto label_7F25AD8C;
    case 0x7F25AD90u: goto label_7F25AD90;
    case 0x7F25AD94u: goto label_7F25AD94;
    case 0x7F25AD98u: goto label_7F25AD98;
    case 0x7F25AD9Cu: goto label_7F25AD9C;
    case 0x7F25ADA0u: goto label_7F25ADA0;
    case 0x7F25ADA4u: goto label_7F25ADA4;
    case 0x7F25ADA8u: goto label_7F25ADA8;
    case 0x7F25ADACu: goto label_7F25ADAC;
    case 0x7F25ADB0u: goto label_7F25ADB0;
    case 0x7F25ADB4u: goto label_7F25ADB4;
    case 0x7F25ADB8u: goto label_7F25ADB8;
    case 0x7F25ADBCu: goto label_7F25ADBC;
    case 0x7F25ADC0u: goto label_7F25ADC0;
    case 0x7F25ADC4u: goto label_7F25ADC4;
    case 0x7F25ADC8u: goto label_7F25ADC8;
    case 0x7F25ADCCu: goto label_7F25ADCC;
    case 0x7F25ADD0u: goto label_7F25ADD0;
    case 0x7F25ADD4u: goto label_7F25ADD4;
    case 0x7F25ADD8u: goto label_7F25ADD8;
    case 0x7F25ADDCu: goto label_7F25ADDC;
    case 0x7F25ADE0u: goto label_7F25ADE0;
    case 0x7F25ADE4u: goto label_7F25ADE4;
    case 0x7F25ADE8u: goto label_7F25ADE8;
    case 0x7F25ADECu: goto label_7F25ADEC;
    case 0x7F25ADF0u: goto label_7F25ADF0;
    case 0x7F25ADF4u: goto label_7F25ADF4;
    case 0x7F25ADF8u: goto label_7F25ADF8;
    case 0x7F25ADFCu: goto label_7F25ADFC;
    case 0x7F25AE00u: goto label_7F25AE00;
    case 0x7F25AE04u: goto label_7F25AE04;
    case 0x7F25AE08u: goto label_7F25AE08;
    case 0x7F25AE0Cu: goto label_7F25AE0C;
    case 0x7F25AE10u: goto label_7F25AE10;
    case 0x7F25AE14u: goto label_7F25AE14;
    case 0x7F25AE18u: goto label_7F25AE18;
    case 0x7F25AE1Cu: goto label_7F25AE1C;
    case 0x7F25AE20u: goto label_7F25AE20;
    case 0x7F25AE24u: goto label_7F25AE24;
    case 0x7F25AE28u: goto label_7F25AE28;
    case 0x7F25AE2Cu: goto label_7F25AE2C;
    case 0x7F25AE30u: goto label_7F25AE30;
    case 0x7F25AE34u: goto label_7F25AE34;
    case 0x7F25AE38u: goto label_7F25AE38;
    case 0x7F25AE3Cu: goto label_7F25AE3C;
    case 0x7F25AE40u: goto label_7F25AE40;
    case 0x7F25AE44u: goto label_7F25AE44;
    case 0x7F25AE48u: goto label_7F25AE48;
    case 0x7F25AE4Cu: goto label_7F25AE4C;
    case 0x7F25AE50u: goto label_7F25AE50;
    case 0x7F25AE54u: goto label_7F25AE54;
    case 0x7F25AE58u: goto label_7F25AE58;
    case 0x7F25AE5Cu: goto label_7F25AE5C;
    case 0x7F25AE60u: goto label_7F25AE60;
    case 0x7F25AE64u: goto label_7F25AE64;
    case 0x7F25AE68u: goto label_7F25AE68;
    case 0x7F25AE6Cu: goto label_7F25AE6C;
    case 0x7F25AE70u: goto label_7F25AE70;
    case 0x7F25AE74u: goto label_7F25AE74;
    case 0x7F25AE78u: goto label_7F25AE78;
    case 0x7F25AE7Cu: goto label_7F25AE7C;
    case 0x7F25AE80u: goto label_7F25AE80;
    case 0x7F25AE84u: goto label_7F25AE84;
    case 0x7F25AE88u: goto label_7F25AE88;
    case 0x7F25AE8Cu: goto label_7F25AE8C;
    case 0x7F25AE90u: goto label_7F25AE90;
    case 0x7F25AE94u: goto label_7F25AE94;
    case 0x7F25AE98u: goto label_7F25AE98;
    case 0x7F25AE9Cu: goto label_7F25AE9C;
    case 0x7F25AEA0u: goto label_7F25AEA0;
    case 0x7F25AEA4u: goto label_7F25AEA4;
    case 0x7F25AEA8u: goto label_7F25AEA8;
    case 0x7F25AEACu: goto label_7F25AEAC;
    case 0x7F25AEB0u: goto label_7F25AEB0;
    case 0x7F25AEB4u: goto label_7F25AEB4;
    case 0x7F25AEB8u: goto label_7F25AEB8;
    case 0x7F25AEBCu: goto label_7F25AEBC;
    case 0x7F25AEC0u: goto label_7F25AEC0;
    case 0x7F25AEC4u: goto label_7F25AEC4;
    case 0x7F25AEC8u: goto label_7F25AEC8;
    case 0x7F25AECCu: goto label_7F25AECC;
    case 0x7F25AED0u: goto label_7F25AED0;
    case 0x7F25AED4u: goto label_7F25AED4;
    case 0x7F25AED8u: goto label_7F25AED8;
    case 0x7F25AEDCu: goto label_7F25AEDC;
    case 0x7F25AEE0u: goto label_7F25AEE0;
    case 0x7F25AEE4u: goto label_7F25AEE4;
    case 0x7F25AEE8u: goto label_7F25AEE8;
    case 0x7F25AEECu: goto label_7F25AEEC;
    case 0x7F25AEF0u: goto label_7F25AEF0;
    case 0x7F25AEF4u: goto label_7F25AEF4;
    case 0x7F25AEF8u: goto label_7F25AEF8;
    case 0x7F25AEFCu: goto label_7F25AEFC;
    case 0x7F25AF00u: goto label_7F25AF00;
    case 0x7F25AF04u: goto label_7F25AF04;
    case 0x7F25AF08u: goto label_7F25AF08;
    case 0x7F25AF0Cu: goto label_7F25AF0C;
    case 0x7F25AF10u: goto label_7F25AF10;
    case 0x7F25AF14u: goto label_7F25AF14;
    case 0x7F25AF18u: goto label_7F25AF18;
    case 0x7F25AF1Cu: goto label_7F25AF1C;
    case 0x7F25AF20u: goto label_7F25AF20;
    case 0x7F25AF24u: goto label_7F25AF24;
    case 0x7F25AF28u: goto label_7F25AF28;
    case 0x7F25AF2Cu: goto label_7F25AF2C;
    case 0x7F25AF30u: goto label_7F25AF30;
    case 0x7F25AF34u: goto label_7F25AF34;
    case 0x7F25AF38u: goto label_7F25AF38;
    case 0x7F25AF3Cu: goto label_7F25AF3C;
    case 0x7F25AF40u: goto label_7F25AF40;
    case 0x7F25AF44u: goto label_7F25AF44;
    case 0x7F25AF48u: goto label_7F25AF48;
    case 0x7F25AF4Cu: goto label_7F25AF4C;
    case 0x7F25AF50u: goto label_7F25AF50;
    case 0x7F25AF54u: goto label_7F25AF54;
    case 0x7F25AF58u: goto label_7F25AF58;
    case 0x7F25AF5Cu: goto label_7F25AF5C;
    case 0x7F25AF60u: goto label_7F25AF60;
    case 0x7F25AF64u: goto label_7F25AF64;
    case 0x7F25AF68u: goto label_7F25AF68;
    case 0x7F25AF6Cu: goto label_7F25AF6C;
    case 0x7F25AF70u: goto label_7F25AF70;
    case 0x7F25AF74u: goto label_7F25AF74;
    case 0x7F25AF78u: goto label_7F25AF78;
    case 0x7F25AF7Cu: goto label_7F25AF7C;
    case 0x7F25AF80u: goto label_7F25AF80;
    case 0x7F25AF84u: goto label_7F25AF84;
    case 0x7F25AF88u: goto label_7F25AF88;
    case 0x7F25AF8Cu: goto label_7F25AF8C;
    case 0x7F25AF90u: goto label_7F25AF90;
    case 0x7F25AF94u: goto label_7F25AF94;
    case 0x7F25AF98u: goto label_7F25AF98;
    case 0x7F25AF9Cu: goto label_7F25AF9C;
    case 0x7F25AFA0u: goto label_7F25AFA0;
    case 0x7F25AFA4u: goto label_7F25AFA4;
    case 0x7F25AFA8u: goto label_7F25AFA8;
    case 0x7F25AFACu: goto label_7F25AFAC;
    case 0x7F25AFB0u: goto label_7F25AFB0;
    case 0x7F25AFB4u: goto label_7F25AFB4;
    case 0x7F25AFB8u: goto label_7F25AFB8;
    case 0x7F25AFBCu: goto label_7F25AFBC;
    case 0x7F25AFC0u: goto label_7F25AFC0;
    case 0x7F25AFC4u: goto label_7F25AFC4;
    case 0x7F25AFC8u: goto label_7F25AFC8;
    case 0x7F25AFCCu: goto label_7F25AFCC;
    case 0x7F25AFD0u: goto label_7F25AFD0;
    case 0x7F25AFD4u: goto label_7F25AFD4;
    case 0x7F25AFD8u: goto label_7F25AFD8;
    case 0x7F25AFDCu: goto label_7F25AFDC;
    case 0x7F25AFE0u: goto label_7F25AFE0;
    case 0x7F25AFE4u: goto label_7F25AFE4;
    case 0x7F25AFE8u: goto label_7F25AFE8;
    case 0x7F25AFECu: goto label_7F25AFEC;
    case 0x7F25AFF0u: goto label_7F25AFF0;
    case 0x7F25AFF4u: goto label_7F25AFF4;
    case 0x7F25AFF8u: goto label_7F25AFF8;
    case 0x7F25AFFCu: goto label_7F25AFFC;
    case 0x7F25B000u: goto label_7F25B000;
    case 0x7F25B004u: goto label_7F25B004;
    case 0x7F25B008u: goto label_7F25B008;
    case 0x7F25B00Cu: goto label_7F25B00C;
    case 0x7F25B010u: goto label_7F25B010;
    case 0x7F25B014u: goto label_7F25B014;
    case 0x7F25B018u: goto label_7F25B018;
    case 0x7F25B01Cu: goto label_7F25B01C;
    case 0x7F25B020u: goto label_7F25B020;
    case 0x7F25B024u: goto label_7F25B024;
    case 0x7F25B028u: goto label_7F25B028;
    case 0x7F25B02Cu: goto label_7F25B02C;
    case 0x7F25B030u: goto label_7F25B030;
    case 0x7F25B034u: goto label_7F25B034;
    case 0x7F25B038u: goto label_7F25B038;
    case 0x7F25B03Cu: goto label_7F25B03C;
    case 0x7F25B040u: goto label_7F25B040;
    case 0x7F25B044u: goto label_7F25B044;
    case 0x7F25B048u: goto label_7F25B048;
    case 0x7F25B04Cu: goto label_7F25B04C;
    case 0x7F25B050u: goto label_7F25B050;
    case 0x7F25B054u: goto label_7F25B054;
    case 0x7F25B058u: goto label_7F25B058;
    case 0x7F25B05Cu: goto label_7F25B05C;
    case 0x7F25B060u: goto label_7F25B060;
    case 0x7F25B064u: goto label_7F25B064;
    case 0x7F25B068u: goto label_7F25B068;
    case 0x7F25B06Cu: goto label_7F25B06C;
    case 0x7F25B070u: goto label_7F25B070;
    case 0x7F25B074u: goto label_7F25B074;
    case 0x7F25B078u: goto label_7F25B078;
    case 0x7F25B07Cu: goto label_7F25B07C;
    case 0x7F25B080u: goto label_7F25B080;
    case 0x7F25B084u: goto label_7F25B084;
    case 0x7F25B088u: goto label_7F25B088;
    case 0x7F25B08Cu: goto label_7F25B08C;
    case 0x7F25B090u: goto label_7F25B090;
    case 0x7F25B094u: goto label_7F25B094;
    case 0x7F25B098u: goto label_7F25B098;
    case 0x7F25B09Cu: goto label_7F25B09C;
    case 0x7F25B0A0u: goto label_7F25B0A0;
    case 0x7F25B0A4u: goto label_7F25B0A4;
    case 0x7F25B0A8u: goto label_7F25B0A8;
    case 0x7F25B0ACu: goto label_7F25B0AC;
    case 0x7F25B0B0u: goto label_7F25B0B0;
    case 0x7F25B0B4u: goto label_7F25B0B4;
    case 0x7F25B0B8u: goto label_7F25B0B8;
    case 0x7F25B0BCu: goto label_7F25B0BC;
    case 0x7F25B0C0u: goto label_7F25B0C0;
    case 0x7F25B0C4u: goto label_7F25B0C4;
    case 0x7F25B0C8u: goto label_7F25B0C8;
    case 0x7F25B0CCu: goto label_7F25B0CC;
    case 0x7F25B0D0u: goto label_7F25B0D0;
    case 0x7F25B0D4u: goto label_7F25B0D4;
    case 0x7F25B0D8u: goto label_7F25B0D8;
    case 0x7F25B0DCu: goto label_7F25B0DC;
    case 0x7F25B0E0u: goto label_7F25B0E0;
    case 0x7F25B0E4u: goto label_7F25B0E4;
    case 0x7F25B0E8u: goto label_7F25B0E8;
    case 0x7F25B0ECu: goto label_7F25B0EC;
    case 0x7F25B0F0u: goto label_7F25B0F0;
    case 0x7F25B0F4u: goto label_7F25B0F4;
    case 0x7F25B0F8u: goto label_7F25B0F8;
    case 0x7F25B0FCu: goto label_7F25B0FC;
    case 0x7F25B100u: goto label_7F25B100;
    case 0x7F25B104u: goto label_7F25B104;
    case 0x7F25B108u: goto label_7F25B108;
    case 0x7F25B10Cu: goto label_7F25B10C;
    case 0x7F25B110u: goto label_7F25B110;
    case 0x7F25B114u: goto label_7F25B114;
    case 0x7F25B118u: goto label_7F25B118;
    case 0x7F25B11Cu: goto label_7F25B11C;
    case 0x7F25B120u: goto label_7F25B120;
    case 0x7F25B124u: goto label_7F25B124;
    case 0x7F25B128u: goto label_7F25B128;
    case 0x7F25B12Cu: goto label_7F25B12C;
    case 0x7F25B130u: goto label_7F25B130;
    case 0x7F25B134u: goto label_7F25B134;
    case 0x7F25B138u: goto label_7F25B138;
    case 0x7F25B13Cu: goto label_7F25B13C;
    case 0x7F25B140u: goto label_7F25B140;
    case 0x7F25B144u: goto label_7F25B144;
    case 0x7F25B148u: goto label_7F25B148;
    case 0x7F25B14Cu: goto label_7F25B14C;
    case 0x7F25B150u: goto label_7F25B150;
    case 0x7F25B154u: goto label_7F25B154;
    case 0x7F25B158u: goto label_7F25B158;
    case 0x7F25B15Cu: goto label_7F25B15C;
    case 0x7F25B160u: goto label_7F25B160;
    case 0x7F25B164u: goto label_7F25B164;
    case 0x7F25B168u: goto label_7F25B168;
    case 0x7F25B16Cu: goto label_7F25B16C;
    case 0x7F25B170u: goto label_7F25B170;
    case 0x7F25B174u: goto label_7F25B174;
    case 0x7F25B178u: goto label_7F25B178;
    case 0x7F25B17Cu: goto label_7F25B17C;
    case 0x7F25B180u: goto label_7F25B180;
    case 0x7F25B184u: goto label_7F25B184;
    case 0x7F25B188u: goto label_7F25B188;
    case 0x7F25B18Cu: goto label_7F25B18C;
    case 0x7F25B190u: goto label_7F25B190;
    case 0x7F25B194u: goto label_7F25B194;
    case 0x7F25B198u: goto label_7F25B198;
    case 0x7F25B19Cu: goto label_7F25B19C;
    case 0x7F25B1A0u: goto label_7F25B1A0;
    case 0x7F25B1A4u: goto label_7F25B1A4;
    case 0x7F25B1A8u: goto label_7F25B1A8;
    case 0x7F25B1ACu: goto label_7F25B1AC;
    case 0x7F25B1B0u: goto label_7F25B1B0;
    case 0x7F25B1B4u: goto label_7F25B1B4;
    case 0x7F25B1B8u: goto label_7F25B1B8;
    case 0x7F25B1BCu: goto label_7F25B1BC;
    case 0x7F25B1C0u: goto label_7F25B1C0;
    case 0x7F25B1C4u: goto label_7F25B1C4;
    case 0x7F25B1C8u: goto label_7F25B1C8;
    case 0x7F25B1CCu: goto label_7F25B1CC;
    case 0x7F25B1D0u: goto label_7F25B1D0;
    case 0x7F25B1D4u: goto label_7F25B1D4;
    case 0x7F25B1D8u: goto label_7F25B1D8;
    case 0x7F25B1DCu: goto label_7F25B1DC;
    case 0x7F25B1E0u: goto label_7F25B1E0;
    case 0x7F25B1E4u: goto label_7F25B1E4;
    case 0x7F25B1E8u: goto label_7F25B1E8;
    case 0x7F25B1ECu: goto label_7F25B1EC;
    case 0x7F25B1F0u: goto label_7F25B1F0;
    case 0x7F25B1F4u: goto label_7F25B1F4;
    case 0x7F25B1F8u: goto label_7F25B1F8;
    case 0x7F25B1FCu: goto label_7F25B1FC;
    case 0x7F25B200u: goto label_7F25B200;
    case 0x7F25B204u: goto label_7F25B204;
    case 0x7F25B208u: goto label_7F25B208;
    case 0x7F25B20Cu: goto label_7F25B20C;
    case 0x7F25B210u: goto label_7F25B210;
    case 0x7F25B214u: goto label_7F25B214;
    case 0x7F25B218u: goto label_7F25B218;
    case 0x7F25B21Cu: goto label_7F25B21C;
    case 0x7F25B220u: goto label_7F25B220;
    case 0x7F25B224u: goto label_7F25B224;
    case 0x7F25B228u: goto label_7F25B228;
    case 0x7F25B22Cu: goto label_7F25B22C;
    case 0x7F25B230u: goto label_7F25B230;
    case 0x7F25B234u: goto label_7F25B234;
    case 0x7F25B238u: goto label_7F25B238;
    case 0x7F25B23Cu: goto label_7F25B23C;
    case 0x7F25B240u: goto label_7F25B240;
    case 0x7F25B244u: goto label_7F25B244;
    case 0x7F25B248u: goto label_7F25B248;
    case 0x7F25B24Cu: goto label_7F25B24C;
    case 0x7F25B250u: goto label_7F25B250;
    case 0x7F25B254u: goto label_7F25B254;
    case 0x7F25B258u: goto label_7F25B258;
    case 0x7F25B25Cu: goto label_7F25B25C;
    case 0x7F25B260u: goto label_7F25B260;
    case 0x7F25B264u: goto label_7F25B264;
    case 0x7F25B268u: goto label_7F25B268;
    case 0x7F25B26Cu: goto label_7F25B26C;
    case 0x7F25B270u: goto label_7F25B270;
    case 0x7F25B274u: goto label_7F25B274;
    case 0x7F25B278u: goto label_7F25B278;
    case 0x7F25B27Cu: goto label_7F25B27C;
    case 0x7F25B280u: goto label_7F25B280;
    case 0x7F25B284u: goto label_7F25B284;
    case 0x7F25B288u: goto label_7F25B288;
    case 0x7F25B28Cu: goto label_7F25B28C;
    case 0x7F25B290u: goto label_7F25B290;
    case 0x7F25B294u: goto label_7F25B294;
    case 0x7F25B298u: goto label_7F25B298;
    case 0x7F25B29Cu: goto label_7F25B29C;
    case 0x7F25B2A0u: goto label_7F25B2A0;
    case 0x7F25B2A4u: goto label_7F25B2A4;
    case 0x7F25B2A8u: goto label_7F25B2A8;
    case 0x7F25B2ACu: goto label_7F25B2AC;
    case 0x7F25B2B0u: goto label_7F25B2B0;
    case 0x7F25B2B4u: goto label_7F25B2B4;
    case 0x7F25B2B8u: goto label_7F25B2B8;
    case 0x7F25B2BCu: goto label_7F25B2BC;
    case 0x7F25B2C0u: goto label_7F25B2C0;
    case 0x7F25B2C4u: goto label_7F25B2C4;
    case 0x7F25B2C8u: goto label_7F25B2C8;
    case 0x7F25B2CCu: goto label_7F25B2CC;
    case 0x7F25B2D0u: goto label_7F25B2D0;
    case 0x7F25B2D4u: goto label_7F25B2D4;
    case 0x7F25B2D8u: goto label_7F25B2D8;
    case 0x7F25B2DCu: goto label_7F25B2DC;
    case 0x7F25B2E0u: goto label_7F25B2E0;
    case 0x7F25B2E4u: goto label_7F25B2E4;
    case 0x7F25B2E8u: goto label_7F25B2E8;
    case 0x7F25B2ECu: goto label_7F25B2EC;
    case 0x7F25B2F0u: goto label_7F25B2F0;
    case 0x7F25B2F4u: goto label_7F25B2F4;
    case 0x7F25B2F8u: goto label_7F25B2F8;
    case 0x7F25B2FCu: goto label_7F25B2FC;
    case 0x7F25B300u: goto label_7F25B300;
    case 0x7F25B304u: goto label_7F25B304;
    case 0x7F25B308u: goto label_7F25B308;
    case 0x7F25B30Cu: goto label_7F25B30C;
    case 0x7F25B310u: goto label_7F25B310;
    case 0x7F25B314u: goto label_7F25B314;
    case 0x7F25B318u: goto label_7F25B318;
    case 0x7F25B31Cu: goto label_7F25B31C;
    case 0x7F25B320u: goto label_7F25B320;
    case 0x7F25B324u: goto label_7F25B324;
    case 0x7F25B328u: goto label_7F25B328;
    case 0x7F25B32Cu: goto label_7F25B32C;
    case 0x7F25B330u: goto label_7F25B330;
    case 0x7F25B334u: goto label_7F25B334;
    case 0x7F25B338u: goto label_7F25B338;
    case 0x7F25B33Cu: goto label_7F25B33C;
    case 0x7F25B340u: goto label_7F25B340;
    case 0x7F25B344u: goto label_7F25B344;
    case 0x7F25B348u: goto label_7F25B348;
    case 0x7F25B34Cu: goto label_7F25B34C;
    case 0x7F25B350u: goto label_7F25B350;
    case 0x7F25B354u: goto label_7F25B354;
    case 0x7F25B358u: goto label_7F25B358;
    case 0x7F25B35Cu: goto label_7F25B35C;
    case 0x7F25B360u: goto label_7F25B360;
    case 0x7F25B364u: goto label_7F25B364;
    case 0x7F25B368u: goto label_7F25B368;
    case 0x7F25B36Cu: goto label_7F25B36C;
    case 0x7F25B370u: goto label_7F25B370;
    case 0x7F25B374u: goto label_7F25B374;
    case 0x7F25B378u: goto label_7F25B378;
    case 0x7F25B37Cu: goto label_7F25B37C;
    case 0x7F25B380u: goto label_7F25B380;
    case 0x7F25B384u: goto label_7F25B384;
    case 0x7F25B388u: goto label_7F25B388;
    case 0x7F25B38Cu: goto label_7F25B38C;
    case 0x7F25B390u: goto label_7F25B390;
    case 0x7F25B394u: goto label_7F25B394;
    case 0x7F25B398u: goto label_7F25B398;
    case 0x7F25B39Cu: goto label_7F25B39C;
    case 0x7F25B3A0u: goto label_7F25B3A0;
    case 0x7F25B3A4u: goto label_7F25B3A4;
    case 0x7F25B3A8u: goto label_7F25B3A8;
    case 0x7F25B3ACu: goto label_7F25B3AC;
    case 0x7F25B3B0u: goto label_7F25B3B0;
    case 0x7F25B3B4u: goto label_7F25B3B4;
    case 0x7F25B3B8u: goto label_7F25B3B8;
    case 0x7F25B3BCu: goto label_7F25B3BC;
    case 0x7F25B3C0u: goto label_7F25B3C0;
    case 0x7F25B3C4u: goto label_7F25B3C4;
    case 0x7F25B3C8u: goto label_7F25B3C8;
    case 0x7F25B3CCu: goto label_7F25B3CC;
    case 0x7F25B3D0u: goto label_7F25B3D0;
    case 0x7F25B3D4u: goto label_7F25B3D4;
    case 0x7F25B3D8u: goto label_7F25B3D8;
    case 0x7F25B3DCu: goto label_7F25B3DC;
    case 0x7F25B3E0u: goto label_7F25B3E0;
    case 0x7F25B3E4u: goto label_7F25B3E4;
    case 0x7F25B3E8u: goto label_7F25B3E8;
    case 0x7F25B3ECu: goto label_7F25B3EC;
    case 0x7F25B3F0u: goto label_7F25B3F0;
    case 0x7F25B3F4u: goto label_7F25B3F4;
    case 0x7F25B3F8u: goto label_7F25B3F8;
    case 0x7F25B3FCu: goto label_7F25B3FC;
    case 0x7F25B400u: goto label_7F25B400;
    case 0x7F25B404u: goto label_7F25B404;
    case 0x7F25B408u: goto label_7F25B408;
    case 0x7F25B40Cu: goto label_7F25B40C;
    case 0x7F25B410u: goto label_7F25B410;
    case 0x7F25B414u: goto label_7F25B414;
    case 0x7F25B418u: goto label_7F25B418;
    case 0x7F25B41Cu: goto label_7F25B41C;
    case 0x7F25B420u: goto label_7F25B420;
    case 0x7F25B424u: goto label_7F25B424;
    case 0x7F25B428u: goto label_7F25B428;
    case 0x7F25B42Cu: goto label_7F25B42C;
    case 0x7F25B430u: goto label_7F25B430;
    case 0x7F25B434u: goto label_7F25B434;
    case 0x7F25B438u: goto label_7F25B438;
    case 0x7F25B43Cu: goto label_7F25B43C;
    case 0x7F25B440u: goto label_7F25B440;
    case 0x7F25B444u: goto label_7F25B444;
    case 0x7F25B448u: goto label_7F25B448;
    case 0x7F25B44Cu: goto label_7F25B44C;
    case 0x7F25B450u: goto label_7F25B450;
    case 0x7F25B454u: goto label_7F25B454;
    case 0x7F25B458u: goto label_7F25B458;
    case 0x7F25B45Cu: goto label_7F25B45C;
    case 0x7F25B460u: goto label_7F25B460;
    case 0x7F25B464u: goto label_7F25B464;
    case 0x7F25B468u: goto label_7F25B468;
    case 0x7F25B46Cu: goto label_7F25B46C;
    case 0x7F25B470u: goto label_7F25B470;
    case 0x7F25B474u: goto label_7F25B474;
    case 0x7F25B478u: goto label_7F25B478;
    case 0x7F25B47Cu: goto label_7F25B47C;
    case 0x7F25B480u: goto label_7F25B480;
    case 0x7F25B484u: goto label_7F25B484;
    case 0x7F25B488u: goto label_7F25B488;
    case 0x7F25B48Cu: goto label_7F25B48C;
    case 0x7F25B490u: goto label_7F25B490;
    case 0x7F25B494u: goto label_7F25B494;
    case 0x7F25B498u: goto label_7F25B498;
    case 0x7F25B49Cu: goto label_7F25B49C;
    case 0x7F25B4A0u: goto label_7F25B4A0;
    case 0x7F25B4A4u: goto label_7F25B4A4;
    case 0x7F25B4A8u: goto label_7F25B4A8;
    case 0x7F25B4ACu: goto label_7F25B4AC;
    case 0x7F25B4B0u: goto label_7F25B4B0;
    case 0x7F25B4B4u: goto label_7F25B4B4;
    case 0x7F25B4B8u: goto label_7F25B4B8;
    case 0x7F25B4BCu: goto label_7F25B4BC;
    case 0x7F25B4C0u: goto label_7F25B4C0;
    case 0x7F25B4C4u: goto label_7F25B4C4;
    case 0x7F25B4C8u: goto label_7F25B4C8;
    case 0x7F25B4CCu: goto label_7F25B4CC;
    case 0x7F25B4D0u: goto label_7F25B4D0;
    case 0x7F25B4D4u: goto label_7F25B4D4;
    case 0x7F25B4D8u: goto label_7F25B4D8;
    case 0x7F25B4DCu: goto label_7F25B4DC;
    case 0x7F25B4E0u: goto label_7F25B4E0;
    case 0x7F25B4E4u: goto label_7F25B4E4;
    case 0x7F25B4E8u: goto label_7F25B4E8;
    case 0x7F25B4ECu: goto label_7F25B4EC;
    case 0x7F25B4F0u: goto label_7F25B4F0;
    case 0x7F25B4F4u: goto label_7F25B4F4;
    case 0x7F25B4F8u: goto label_7F25B4F8;
    case 0x7F25B4FCu: goto label_7F25B4FC;
    case 0x7F25B500u: goto label_7F25B500;
    case 0x7F25B504u: goto label_7F25B504;
    case 0x7F25B508u: goto label_7F25B508;
    case 0x7F25B50Cu: goto label_7F25B50C;
    case 0x7F25B510u: goto label_7F25B510;
    case 0x7F25B514u: goto label_7F25B514;
    case 0x7F25B518u: goto label_7F25B518;
    case 0x7F25B51Cu: goto label_7F25B51C;
    case 0x7F25B520u: goto label_7F25B520;
    case 0x7F25B524u: goto label_7F25B524;
    case 0x7F25B528u: goto label_7F25B528;
    case 0x7F25B52Cu: goto label_7F25B52C;
    case 0x7F25B530u: goto label_7F25B530;
    case 0x7F25B534u: goto label_7F25B534;
    case 0x7F25B538u: goto label_7F25B538;
    case 0x7F25B53Cu: goto label_7F25B53C;
    case 0x7F25B540u: goto label_7F25B540;
    case 0x7F25B544u: goto label_7F25B544;
    case 0x7F25B548u: goto label_7F25B548;
    case 0x7F25B54Cu: goto label_7F25B54C;
    case 0x7F25B550u: goto label_7F25B550;
    case 0x7F25B554u: goto label_7F25B554;
    case 0x7F25B558u: goto label_7F25B558;
    case 0x7F25B55Cu: goto label_7F25B55C;
    case 0x7F25B560u: goto label_7F25B560;
    case 0x7F25B564u: goto label_7F25B564;
    case 0x7F25B568u: goto label_7F25B568;
    case 0x7F25B56Cu: goto label_7F25B56C;
    case 0x7F25B570u: goto label_7F25B570;
    case 0x7F25B574u: goto label_7F25B574;
    case 0x7F25B578u: goto label_7F25B578;
    case 0x7F25B57Cu: goto label_7F25B57C;
    case 0x7F25B580u: goto label_7F25B580;
    case 0x7F25B584u: goto label_7F25B584;
    case 0x7F25B588u: goto label_7F25B588;
    case 0x7F25B58Cu: goto label_7F25B58C;
    case 0x7F25B590u: goto label_7F25B590;
    case 0x7F25B594u: goto label_7F25B594;
    case 0x7F25B598u: goto label_7F25B598;
    case 0x7F25B59Cu: goto label_7F25B59C;
    case 0x7F25B5A0u: goto label_7F25B5A0;
    case 0x7F25B5A4u: goto label_7F25B5A4;
    case 0x7F25B5A8u: goto label_7F25B5A8;
    case 0x7F25B5ACu: goto label_7F25B5AC;
    case 0x7F25B5B0u: goto label_7F25B5B0;
    case 0x7F25B5B4u: goto label_7F25B5B4;
    case 0x7F25B5B8u: goto label_7F25B5B8;
    case 0x7F25B5BCu: goto label_7F25B5BC;
    case 0x7F25B5C0u: goto label_7F25B5C0;
    case 0x7F25B5C4u: goto label_7F25B5C4;
    case 0x7F25B5C8u: goto label_7F25B5C8;
    case 0x7F25B5CCu: goto label_7F25B5CC;
    case 0x7F25B5D0u: goto label_7F25B5D0;
    case 0x7F25B5D4u: goto label_7F25B5D4;
    case 0x7F25B5D8u: goto label_7F25B5D8;
    case 0x7F25B5DCu: goto label_7F25B5DC;
    case 0x7F25B5E0u: goto label_7F25B5E0;
    case 0x7F25B5E4u: goto label_7F25B5E4;
    case 0x7F25B5E8u: goto label_7F25B5E8;
    case 0x7F25B5ECu: goto label_7F25B5EC;
    case 0x7F25B5F0u: goto label_7F25B5F0;
    case 0x7F25B5F4u: goto label_7F25B5F4;
    case 0x7F25B5F8u: goto label_7F25B5F8;
    case 0x7F25B5FCu: goto label_7F25B5FC;
    case 0x7F25B600u: goto label_7F25B600;
    case 0x7F25B604u: goto label_7F25B604;
    case 0x7F25B608u: goto label_7F25B608;
    case 0x7F25B60Cu: goto label_7F25B60C;
    case 0x7F25B610u: goto label_7F25B610;
    case 0x7F25B614u: goto label_7F25B614;
    case 0x7F25B618u: goto label_7F25B618;
    case 0x7F25B61Cu: goto label_7F25B61C;
    case 0x7F25B620u: goto label_7F25B620;
    case 0x7F25B624u: goto label_7F25B624;
    case 0x7F25B628u: goto label_7F25B628;
    case 0x7F25B62Cu: goto label_7F25B62C;
    case 0x7F25B630u: goto label_7F25B630;
    case 0x7F25B634u: goto label_7F25B634;
    case 0x7F25B638u: goto label_7F25B638;
    case 0x7F25B63Cu: goto label_7F25B63C;
    case 0x7F25B640u: goto label_7F25B640;
    case 0x7F25B644u: goto label_7F25B644;
    case 0x7F25B648u: goto label_7F25B648;
    case 0x7F25B64Cu: goto label_7F25B64C;
    case 0x7F25B650u: goto label_7F25B650;
    case 0x7F25B654u: goto label_7F25B654;
    case 0x7F25B658u: goto label_7F25B658;
    case 0x7F25B65Cu: goto label_7F25B65C;
    case 0x7F25B660u: goto label_7F25B660;
    case 0x7F25B664u: goto label_7F25B664;
    case 0x7F25B668u: goto label_7F25B668;
    case 0x7F25B66Cu: goto label_7F25B66C;
    case 0x7F25B670u: goto label_7F25B670;
    case 0x7F25B674u: goto label_7F25B674;
    case 0x7F25B678u: goto label_7F25B678;
    case 0x7F25B67Cu: goto label_7F25B67C;
    case 0x7F25B680u: goto label_7F25B680;
    case 0x7F25B684u: goto label_7F25B684;
    case 0x7F25B688u: goto label_7F25B688;
    case 0x7F25B68Cu: goto label_7F25B68C;
    case 0x7F25B690u: goto label_7F25B690;
    case 0x7F25B694u: goto label_7F25B694;
    case 0x7F25B698u: goto label_7F25B698;
    case 0x7F25B69Cu: goto label_7F25B69C;
    case 0x7F25B6A0u: goto label_7F25B6A0;
    case 0x7F25B6A4u: goto label_7F25B6A4;
    case 0x7F25B6A8u: goto label_7F25B6A8;
    case 0x7F25B6ACu: goto label_7F25B6AC;
    case 0x7F25B6B0u: goto label_7F25B6B0;
    case 0x7F25B6B4u: goto label_7F25B6B4;
    case 0x7F25B6B8u: goto label_7F25B6B8;
    case 0x7F25B6BCu: goto label_7F25B6BC;
    case 0x7F25B6C0u: goto label_7F25B6C0;
    case 0x7F25B6C4u: goto label_7F25B6C4;
    case 0x7F25B6C8u: goto label_7F25B6C8;
    case 0x7F25B6CCu: goto label_7F25B6CC;
    case 0x7F25B6D0u: goto label_7F25B6D0;
    case 0x7F25B6D4u: goto label_7F25B6D4;
    case 0x7F25B6D8u: goto label_7F25B6D8;
    case 0x7F25B6DCu: goto label_7F25B6DC;
    case 0x7F25B6E0u: goto label_7F25B6E0;
    case 0x7F25B6E4u: goto label_7F25B6E4;
    case 0x7F25B6E8u: goto label_7F25B6E8;
    case 0x7F25B6ECu: goto label_7F25B6EC;
    case 0x7F25B6F0u: goto label_7F25B6F0;
    case 0x7F25B6F4u: goto label_7F25B6F4;
    case 0x7F25B6F8u: goto label_7F25B6F8;
    case 0x7F25B6FCu: goto label_7F25B6FC;
    case 0x7F25B700u: goto label_7F25B700;
    case 0x7F25B704u: goto label_7F25B704;
    case 0x7F25B708u: goto label_7F25B708;
    case 0x7F25B70Cu: goto label_7F25B70C;
    case 0x7F25B710u: goto label_7F25B710;
    case 0x7F25B714u: goto label_7F25B714;
    case 0x7F25B718u: goto label_7F25B718;
    case 0x7F25B71Cu: goto label_7F25B71C;
    case 0x7F25B720u: goto label_7F25B720;
    case 0x7F25B724u: goto label_7F25B724;
    case 0x7F25B728u: goto label_7F25B728;
    case 0x7F25B72Cu: goto label_7F25B72C;
    case 0x7F25B730u: goto label_7F25B730;
    case 0x7F25B734u: goto label_7F25B734;
    case 0x7F25B738u: goto label_7F25B738;
    case 0x7F25B73Cu: goto label_7F25B73C;
    case 0x7F25B740u: goto label_7F25B740;
    case 0x7F25B744u: goto label_7F25B744;
    case 0x7F25B748u: goto label_7F25B748;
    case 0x7F25B74Cu: goto label_7F25B74C;
    case 0x7F25B750u: goto label_7F25B750;
    case 0x7F25B754u: goto label_7F25B754;
    case 0x7F25B758u: goto label_7F25B758;
    case 0x7F25B75Cu: goto label_7F25B75C;
    case 0x7F25B760u: goto label_7F25B760;
    case 0x7F25B764u: goto label_7F25B764;
    case 0x7F25B768u: goto label_7F25B768;
    case 0x7F25B76Cu: goto label_7F25B76C;
    case 0x7F25B770u: goto label_7F25B770;
    case 0x7F25B774u: goto label_7F25B774;
    case 0x7F25B778u: goto label_7F25B778;
    case 0x7F25B77Cu: goto label_7F25B77C;
    case 0x7F25B780u: goto label_7F25B780;
    case 0x7F25B784u: goto label_7F25B784;
    case 0x7F25B788u: goto label_7F25B788;
    case 0x7F25B78Cu: goto label_7F25B78C;
    case 0x7F25B790u: goto label_7F25B790;
    case 0x7F25B794u: goto label_7F25B794;
    case 0x7F25B798u: goto label_7F25B798;
    case 0x7F25B79Cu: goto label_7F25B79C;
    case 0x7F25B7A0u: goto label_7F25B7A0;
    case 0x7F25B7A4u: goto label_7F25B7A4;
    case 0x7F25B7A8u: goto label_7F25B7A8;
    case 0x7F25B7ACu: goto label_7F25B7AC;
    case 0x7F25B7B0u: goto label_7F25B7B0;
    case 0x7F25B7B4u: goto label_7F25B7B4;
    case 0x7F25B7B8u: goto label_7F25B7B8;
    case 0x7F25B7BCu: goto label_7F25B7BC;
    case 0x7F25B7C0u: goto label_7F25B7C0;
    case 0x7F25B7C4u: goto label_7F25B7C4;
    case 0x7F25B7C8u: goto label_7F25B7C8;
    case 0x7F25B7CCu: goto label_7F25B7CC;
    case 0x7F25B7D0u: goto label_7F25B7D0;
    case 0x7F25B7D4u: goto label_7F25B7D4;
    case 0x7F25B7D8u: goto label_7F25B7D8;
    case 0x7F25B7DCu: goto label_7F25B7DC;
    case 0x7F25B7E0u: goto label_7F25B7E0;
    case 0x7F25B7E4u: goto label_7F25B7E4;
    case 0x7F25B7E8u: goto label_7F25B7E8;
    case 0x7F25B7ECu: goto label_7F25B7EC;
    case 0x7F25B7F0u: goto label_7F25B7F0;
    case 0x7F25B7F4u: goto label_7F25B7F4;
    case 0x7F25B7F8u: goto label_7F25B7F8;
    case 0x7F25B7FCu: goto label_7F25B7FC;
    case 0x7F25B800u: goto label_7F25B800;
    case 0x7F25B804u: goto label_7F25B804;
    case 0x7F25B808u: goto label_7F25B808;
    case 0x7F25B80Cu: goto label_7F25B80C;
    case 0x7F25B810u: goto label_7F25B810;
    case 0x7F25B814u: goto label_7F25B814;
    case 0x7F25B818u: goto label_7F25B818;
    case 0x7F25B81Cu: goto label_7F25B81C;
    case 0x7F25B820u: goto label_7F25B820;
    case 0x7F25B824u: goto label_7F25B824;
    case 0x7F25B828u: goto label_7F25B828;
    case 0x7F25B82Cu: goto label_7F25B82C;
    case 0x7F25B830u: goto label_7F25B830;
    case 0x7F25B834u: goto label_7F25B834;
    case 0x7F25B838u: goto label_7F25B838;
    case 0x7F25B83Cu: goto label_7F25B83C;
    case 0x7F25B840u: goto label_7F25B840;
    case 0x7F25B844u: goto label_7F25B844;
    case 0x7F25B848u: goto label_7F25B848;
    case 0x7F25B84Cu: goto label_7F25B84C;
    case 0x7F25B850u: goto label_7F25B850;
    case 0x7F25B854u: goto label_7F25B854;
    case 0x7F25B858u: goto label_7F25B858;
    case 0x7F25B85Cu: goto label_7F25B85C;
    case 0x7F25B860u: goto label_7F25B860;
    case 0x7F25B864u: goto label_7F25B864;
    case 0x7F25B868u: goto label_7F25B868;
    case 0x7F25B86Cu: goto label_7F25B86C;
    case 0x7F25B870u: goto label_7F25B870;
    case 0x7F25B874u: goto label_7F25B874;
    case 0x7F25B878u: goto label_7F25B878;
    case 0x7F25B87Cu: goto label_7F25B87C;
    case 0x7F25B880u: goto label_7F25B880;
    case 0x7F25B884u: goto label_7F25B884;
    case 0x7F25B888u: goto label_7F25B888;
    case 0x7F25B88Cu: goto label_7F25B88C;
    case 0x7F25B890u: goto label_7F25B890;
    case 0x7F25B894u: goto label_7F25B894;
    case 0x7F25B898u: goto label_7F25B898;
    case 0x7F25B89Cu: goto label_7F25B89C;
    case 0x7F25B8A0u: goto label_7F25B8A0;
    case 0x7F25B8A4u: goto label_7F25B8A4;
    case 0x7F25B8A8u: goto label_7F25B8A8;
    case 0x7F25B8ACu: goto label_7F25B8AC;
    case 0x7F25B8B0u: goto label_7F25B8B0;
    case 0x7F25B8B4u: goto label_7F25B8B4;
    case 0x7F25B8B8u: goto label_7F25B8B8;
    case 0x7F25B8BCu: goto label_7F25B8BC;
    case 0x7F25B8C0u: goto label_7F25B8C0;
    case 0x7F25B8C4u: goto label_7F25B8C4;
    case 0x7F25B8C8u: goto label_7F25B8C8;
    case 0x7F25B8CCu: goto label_7F25B8CC;
    case 0x7F25B8D0u: goto label_7F25B8D0;
    case 0x7F25B8D4u: goto label_7F25B8D4;
    case 0x7F25B8D8u: goto label_7F25B8D8;
    case 0x7F25B8DCu: goto label_7F25B8DC;
    case 0x7F25B8E0u: goto label_7F25B8E0;
    case 0x7F25B8E4u: goto label_7F25B8E4;
    case 0x7F25B8E8u: goto label_7F25B8E8;
    case 0x7F25B8ECu: goto label_7F25B8EC;
    case 0x7F25B8F0u: goto label_7F25B8F0;
    case 0x7F25B8F4u: goto label_7F25B8F4;
    case 0x7F25B8F8u: goto label_7F25B8F8;
    case 0x7F25B8FCu: goto label_7F25B8FC;
    case 0x7F25B900u: goto label_7F25B900;
    case 0x7F25B904u: goto label_7F25B904;
    case 0x7F25B908u: goto label_7F25B908;
    case 0x7F25B90Cu: goto label_7F25B90C;
    case 0x7F25B910u: goto label_7F25B910;
    case 0x7F25B914u: goto label_7F25B914;
    case 0x7F25B918u: goto label_7F25B918;
    case 0x7F25B91Cu: goto label_7F25B91C;
    case 0x7F25B920u: goto label_7F25B920;
    case 0x7F25B924u: goto label_7F25B924;
    case 0x7F25B928u: goto label_7F25B928;
    case 0x7F25B92Cu: goto label_7F25B92C;
    case 0x7F25B930u: goto label_7F25B930;
    case 0x7F25B934u: goto label_7F25B934;
    case 0x7F25B938u: goto label_7F25B938;
    case 0x7F25B93Cu: goto label_7F25B93C;
    case 0x7F25B940u: goto label_7F25B940;
    case 0x7F25B944u: goto label_7F25B944;
    case 0x7F25B948u: goto label_7F25B948;
    case 0x7F25B94Cu: goto label_7F25B94C;
    case 0x7F25B950u: goto label_7F25B950;
    case 0x7F25B954u: goto label_7F25B954;
    case 0x7F25B958u: goto label_7F25B958;
    case 0x7F25B95Cu: goto label_7F25B95C;
    case 0x7F25B960u: goto label_7F25B960;
    case 0x7F25B964u: goto label_7F25B964;
    case 0x7F25B968u: goto label_7F25B968;
    case 0x7F25B96Cu: goto label_7F25B96C;
    case 0x7F25B970u: goto label_7F25B970;
    case 0x7F25B974u: goto label_7F25B974;
    case 0x7F25B978u: goto label_7F25B978;
    case 0x7F25B97Cu: goto label_7F25B97C;
    case 0x7F25B980u: goto label_7F25B980;
    case 0x7F25B984u: goto label_7F25B984;
    case 0x7F25B988u: goto label_7F25B988;
    case 0x7F25B98Cu: goto label_7F25B98C;
    case 0x7F25B990u: goto label_7F25B990;
    case 0x7F25B994u: goto label_7F25B994;
    case 0x7F25B998u: goto label_7F25B998;
    case 0x7F25B99Cu: goto label_7F25B99C;
    case 0x7F25B9A0u: goto label_7F25B9A0;
    case 0x7F25B9A4u: goto label_7F25B9A4;
    case 0x7F25B9A8u: goto label_7F25B9A8;
    case 0x7F25B9ACu: goto label_7F25B9AC;
    case 0x7F25B9B0u: goto label_7F25B9B0;
    case 0x7F25B9B4u: goto label_7F25B9B4;
    case 0x7F25B9B8u: goto label_7F25B9B8;
    case 0x7F25B9BCu: goto label_7F25B9BC;
    case 0x7F25B9C0u: goto label_7F25B9C0;
    case 0x7F25B9C4u: goto label_7F25B9C4;
    case 0x7F25B9C8u: goto label_7F25B9C8;
    case 0x7F25B9CCu: goto label_7F25B9CC;
    case 0x7F25B9D0u: goto label_7F25B9D0;
    case 0x7F25B9D4u: goto label_7F25B9D4;
    case 0x7F25B9D8u: goto label_7F25B9D8;
    case 0x7F25B9DCu: goto label_7F25B9DC;
    case 0x7F25B9E0u: goto label_7F25B9E0;
    case 0x7F25B9E4u: goto label_7F25B9E4;
    case 0x7F25B9E8u: goto label_7F25B9E8;
    case 0x7F25B9ECu: goto label_7F25B9EC;
    case 0x7F25B9F0u: goto label_7F25B9F0;
    case 0x7F25B9F4u: goto label_7F25B9F4;
    case 0x7F25B9F8u: goto label_7F25B9F8;
    case 0x7F25B9FCu: goto label_7F25B9FC;
    case 0x7F25BA00u: goto label_7F25BA00;
    case 0x7F25BA04u: goto label_7F25BA04;
    case 0x7F25BA08u: goto label_7F25BA08;
    case 0x7F25BA0Cu: goto label_7F25BA0C;
    case 0x7F25BA10u: goto label_7F25BA10;
    case 0x7F25BA14u: goto label_7F25BA14;
    case 0x7F25BA18u: goto label_7F25BA18;
    case 0x7F25BA1Cu: goto label_7F25BA1C;
    case 0x7F25BA20u: goto label_7F25BA20;
    case 0x7F25BA24u: goto label_7F25BA24;
    case 0x7F25BA28u: goto label_7F25BA28;
    case 0x7F25BA2Cu: goto label_7F25BA2C;
    case 0x7F25BA30u: goto label_7F25BA30;
    case 0x7F25BA34u: goto label_7F25BA34;
    case 0x7F25BA38u: goto label_7F25BA38;
    case 0x7F25BA3Cu: goto label_7F25BA3C;
    case 0x7F25BA40u: goto label_7F25BA40;
    case 0x7F25BA44u: goto label_7F25BA44;
    case 0x7F25BA48u: goto label_7F25BA48;
    case 0x7F25BA4Cu: goto label_7F25BA4C;
    case 0x7F25BA50u: goto label_7F25BA50;
    case 0x7F25BA54u: goto label_7F25BA54;
    case 0x7F25BA58u: goto label_7F25BA58;
    case 0x7F25BA5Cu: goto label_7F25BA5C;
    case 0x7F25BA60u: goto label_7F25BA60;
    case 0x7F25BA64u: goto label_7F25BA64;
    case 0x7F25BA68u: goto label_7F25BA68;
    case 0x7F25BA6Cu: goto label_7F25BA6C;
    case 0x7F25BA70u: goto label_7F25BA70;
    case 0x7F25BA74u: goto label_7F25BA74;
    case 0x7F25BA78u: goto label_7F25BA78;
    case 0x7F25BA7Cu: goto label_7F25BA7C;
    case 0x7F25BA80u: goto label_7F25BA80;
    case 0x7F25BA84u: goto label_7F25BA84;
    case 0x7F25BA88u: goto label_7F25BA88;
    case 0x7F25BA8Cu: goto label_7F25BA8C;
    case 0x7F25BA90u: goto label_7F25BA90;
    case 0x7F25BA94u: goto label_7F25BA94;
    case 0x7F25BA98u: goto label_7F25BA98;
    case 0x7F25BA9Cu: goto label_7F25BA9C;
    case 0x7F25BAA0u: goto label_7F25BAA0;
    case 0x7F25BAA4u: goto label_7F25BAA4;
    case 0x7F25BAA8u: goto label_7F25BAA8;
    case 0x7F25BAACu: goto label_7F25BAAC;
    case 0x7F25BAB0u: goto label_7F25BAB0;
    case 0x7F25BAB4u: goto label_7F25BAB4;
    case 0x7F25BAB8u: goto label_7F25BAB8;
    case 0x7F25BABCu: goto label_7F25BABC;
    case 0x7F25BAC0u: goto label_7F25BAC0;
    case 0x7F25BAC4u: goto label_7F25BAC4;
    case 0x7F25BAC8u: goto label_7F25BAC8;
    case 0x7F25BACCu: goto label_7F25BACC;
    case 0x7F25BAD0u: goto label_7F25BAD0;
    case 0x7F25BAD4u: goto label_7F25BAD4;
    case 0x7F25BAD8u: goto label_7F25BAD8;
    case 0x7F25BADCu: goto label_7F25BADC;
    case 0x7F25BAE0u: goto label_7F25BAE0;
    case 0x7F25BAE4u: goto label_7F25BAE4;
    case 0x7F25BAE8u: goto label_7F25BAE8;
    case 0x7F25BAECu: goto label_7F25BAEC;
    case 0x7F25BAF0u: goto label_7F25BAF0;
    case 0x7F25BAF4u: goto label_7F25BAF4;
    case 0x7F25BAF8u: goto label_7F25BAF8;
    case 0x7F25BAFCu: goto label_7F25BAFC;
    case 0x7F25BB00u: goto label_7F25BB00;
    case 0x7F25BB04u: goto label_7F25BB04;
    case 0x7F25BB08u: goto label_7F25BB08;
    case 0x7F25BB0Cu: goto label_7F25BB0C;
    case 0x7F25BB10u: goto label_7F25BB10;
    case 0x7F25BB14u: goto label_7F25BB14;
    case 0x7F25BB18u: goto label_7F25BB18;
    case 0x7F25BB1Cu: goto label_7F25BB1C;
    case 0x7F25BB20u: goto label_7F25BB20;
    case 0x7F25BB24u: goto label_7F25BB24;
    case 0x7F25BB28u: goto label_7F25BB28;
    case 0x7F25BB2Cu: goto label_7F25BB2C;
    case 0x7F25BB30u: goto label_7F25BB30;
    case 0x7F25BB34u: goto label_7F25BB34;
    case 0x7F25BB38u: goto label_7F25BB38;
    case 0x7F25BB3Cu: goto label_7F25BB3C;
    case 0x7F25BB40u: goto label_7F25BB40;
    case 0x7F25BB44u: goto label_7F25BB44;
    case 0x7F25BB48u: goto label_7F25BB48;
    case 0x7F25BB4Cu: goto label_7F25BB4C;
    case 0x7F25BB50u: goto label_7F25BB50;
    case 0x7F25BB54u: goto label_7F25BB54;
    case 0x7F25BB58u: goto label_7F25BB58;
    case 0x7F25BB5Cu: goto label_7F25BB5C;
    case 0x7F25BB60u: goto label_7F25BB60;
    case 0x7F25BB64u: goto label_7F25BB64;
    case 0x7F25BB68u: goto label_7F25BB68;
    case 0x7F25BB6Cu: goto label_7F25BB6C;
    case 0x7F25BB70u: goto label_7F25BB70;
    case 0x7F25BB74u: goto label_7F25BB74;
    case 0x7F25BB78u: goto label_7F25BB78;
    case 0x7F25BB7Cu: goto label_7F25BB7C;
    case 0x7F25BB80u: goto label_7F25BB80;
    case 0x7F25BB84u: goto label_7F25BB84;
    case 0x7F25BB88u: goto label_7F25BB88;
    case 0x7F25BB8Cu: goto label_7F25BB8C;
    case 0x7F25BB90u: goto label_7F25BB90;
    case 0x7F25BB94u: goto label_7F25BB94;
    case 0x7F25BB98u: goto label_7F25BB98;
    case 0x7F25BB9Cu: goto label_7F25BB9C;
    case 0x7F25BBA0u: goto label_7F25BBA0;
    case 0x7F25BBA4u: goto label_7F25BBA4;
    case 0x7F25BBA8u: goto label_7F25BBA8;
    case 0x7F25BBACu: goto label_7F25BBAC;
    case 0x7F25BBB0u: goto label_7F25BBB0;
    case 0x7F25BBB4u: goto label_7F25BBB4;
    case 0x7F25BBB8u: goto label_7F25BBB8;
    case 0x7F25BBBCu: goto label_7F25BBBC;
    case 0x7F25BBC0u: goto label_7F25BBC0;
    case 0x7F25BBC4u: goto label_7F25BBC4;
    case 0x7F25BBC8u: goto label_7F25BBC8;
    case 0x7F25BBCCu: goto label_7F25BBCC;
    case 0x7F25BBD0u: goto label_7F25BBD0;
    case 0x7F25BBD4u: goto label_7F25BBD4;
    case 0x7F25BBD8u: goto label_7F25BBD8;
    case 0x7F25BBDCu: goto label_7F25BBDC;
    case 0x7F25BBE0u: goto label_7F25BBE0;
    case 0x7F25BBE4u: goto label_7F25BBE4;
    case 0x7F25BBE8u: goto label_7F25BBE8;
    case 0x7F25BBECu: goto label_7F25BBEC;
    case 0x7F25BBF0u: goto label_7F25BBF0;
    case 0x7F25BBF4u: goto label_7F25BBF4;
    case 0x7F25BBF8u: goto label_7F25BBF8;
    case 0x7F25BBFCu: goto label_7F25BBFC;
    case 0x7F25BC00u: goto label_7F25BC00;
    case 0x7F25BC04u: goto label_7F25BC04;
    case 0x7F25BC08u: goto label_7F25BC08;
    case 0x7F25BC0Cu: goto label_7F25BC0C;
    case 0x7F25BC10u: goto label_7F25BC10;
    case 0x7F25BC14u: goto label_7F25BC14;
    case 0x7F25BC18u: goto label_7F25BC18;
    case 0x7F25BC1Cu: goto label_7F25BC1C;
    case 0x7F25BC20u: goto label_7F25BC20;
    case 0x7F25BC24u: goto label_7F25BC24;
    case 0x7F25BC28u: goto label_7F25BC28;
    case 0x7F25BC2Cu: goto label_7F25BC2C;
    case 0x7F25BC30u: goto label_7F25BC30;
    case 0x7F25BC34u: goto label_7F25BC34;
    case 0x7F25BC38u: goto label_7F25BC38;
    case 0x7F25BC3Cu: goto label_7F25BC3C;
    case 0x7F25BC40u: goto label_7F25BC40;
    case 0x7F25BC44u: goto label_7F25BC44;
    case 0x7F25BC48u: goto label_7F25BC48;
    case 0x7F25BC4Cu: goto label_7F25BC4C;
    case 0x7F25BC50u: goto label_7F25BC50;
    case 0x7F25BC54u: goto label_7F25BC54;
    case 0x7F25BC58u: goto label_7F25BC58;
    case 0x7F25BC5Cu: goto label_7F25BC5C;
    case 0x7F25BC60u: goto label_7F25BC60;
    case 0x7F25BC64u: goto label_7F25BC64;
    case 0x7F25BC68u: goto label_7F25BC68;
    case 0x7F25BC6Cu: goto label_7F25BC6C;
    case 0x7F25BC70u: goto label_7F25BC70;
    case 0x7F25BC74u: goto label_7F25BC74;
    case 0x7F25BC78u: goto label_7F25BC78;
    case 0x7F25BC7Cu: goto label_7F25BC7C;
    case 0x7F25BC80u: goto label_7F25BC80;
    case 0x7F25BC84u: goto label_7F25BC84;
    case 0x7F25BC88u: goto label_7F25BC88;
    case 0x7F25BC8Cu: goto label_7F25BC8C;
    case 0x7F25BC90u: goto label_7F25BC90;
    case 0x7F25BC94u: goto label_7F25BC94;
    case 0x7F25BC98u: goto label_7F25BC98;
    case 0x7F25BC9Cu: goto label_7F25BC9C;
    case 0x7F25BCA0u: goto label_7F25BCA0;
    case 0x7F25BCA4u: goto label_7F25BCA4;
    case 0x7F25BCA8u: goto label_7F25BCA8;
    case 0x7F25BCACu: goto label_7F25BCAC;
    case 0x7F25BCB0u: goto label_7F25BCB0;
    case 0x7F25BCB4u: goto label_7F25BCB4;
    case 0x7F25BCB8u: goto label_7F25BCB8;
    case 0x7F25BCBCu: goto label_7F25BCBC;
    case 0x7F25BCC0u: goto label_7F25BCC0;
    case 0x7F25BCC4u: goto label_7F25BCC4;
    case 0x7F25BCC8u: goto label_7F25BCC8;
    case 0x7F25BCCCu: goto label_7F25BCCC;
    case 0x7F25BCD0u: goto label_7F25BCD0;
    case 0x7F25BCD4u: goto label_7F25BCD4;
    case 0x7F25BCD8u: goto label_7F25BCD8;
    case 0x7F25BCDCu: goto label_7F25BCDC;
    case 0x7F25BCE0u: goto label_7F25BCE0;
    case 0x7F25BCE4u: goto label_7F25BCE4;
    case 0x7F25BCE8u: goto label_7F25BCE8;
    case 0x7F25BCECu: goto label_7F25BCEC;
    case 0x7F25BCF0u: goto label_7F25BCF0;
    case 0x7F25BCF4u: goto label_7F25BCF4;
    case 0x7F25BCF8u: goto label_7F25BCF8;
    case 0x7F25BCFCu: goto label_7F25BCFC;
    case 0x7F25BD00u: goto label_7F25BD00;
    case 0x7F25BD04u: goto label_7F25BD04;
    case 0x7F25BD08u: goto label_7F25BD08;
    case 0x7F25BD0Cu: goto label_7F25BD0C;
    case 0x7F25BD10u: goto label_7F25BD10;
    case 0x7F25BD14u: goto label_7F25BD14;
    case 0x7F25BD18u: goto label_7F25BD18;
    case 0x7F25BD1Cu: goto label_7F25BD1C;
    case 0x7F25BD20u: goto label_7F25BD20;
    case 0x7F25BD24u: goto label_7F25BD24;
    case 0x7F25BD28u: goto label_7F25BD28;
    case 0x7F25BD2Cu: goto label_7F25BD2C;
    case 0x7F25BD30u: goto label_7F25BD30;
    case 0x7F25BD34u: goto label_7F25BD34;
    case 0x7F25BD38u: goto label_7F25BD38;
    case 0x7F25BD3Cu: goto label_7F25BD3C;
    case 0x7F25BD40u: goto label_7F25BD40;
    case 0x7F25BD44u: goto label_7F25BD44;
    case 0x7F25BD48u: goto label_7F25BD48;
    case 0x7F25BD4Cu: goto label_7F25BD4C;
    case 0x7F25BD50u: goto label_7F25BD50;
    case 0x7F25BD54u: goto label_7F25BD54;
    case 0x7F25BD58u: goto label_7F25BD58;
    case 0x7F25BD5Cu: goto label_7F25BD5C;
    case 0x7F25BD60u: goto label_7F25BD60;
    case 0x7F25BD64u: goto label_7F25BD64;
    case 0x7F25BD68u: goto label_7F25BD68;
    case 0x7F25BD6Cu: goto label_7F25BD6C;
    case 0x7F25BD70u: goto label_7F25BD70;
    case 0x7F25BD74u: goto label_7F25BD74;
    case 0x7F25BD78u: goto label_7F25BD78;
    case 0x7F25BD7Cu: goto label_7F25BD7C;
    case 0x7F25BD80u: goto label_7F25BD80;
    case 0x7F25BD84u: goto label_7F25BD84;
    case 0x7F25BD88u: goto label_7F25BD88;
    case 0x7F25BD8Cu: goto label_7F25BD8C;
    case 0x7F25BD90u: goto label_7F25BD90;
    case 0x7F25BD94u: goto label_7F25BD94;
    case 0x7F25BD98u: goto label_7F25BD98;
    case 0x7F25BD9Cu: goto label_7F25BD9C;
    case 0x7F25BDA0u: goto label_7F25BDA0;
    case 0x7F25BDA4u: goto label_7F25BDA4;
    case 0x7F25BDA8u: goto label_7F25BDA8;
    case 0x7F25BDACu: goto label_7F25BDAC;
    case 0x7F25BDB0u: goto label_7F25BDB0;
    case 0x7F25BDB4u: goto label_7F25BDB4;
    case 0x7F25BDB8u: goto label_7F25BDB8;
    case 0x7F25BDBCu: goto label_7F25BDBC;
    case 0x7F25BDC0u: goto label_7F25BDC0;
    case 0x7F25BDC4u: goto label_7F25BDC4;
    case 0x7F25BDC8u: goto label_7F25BDC8;
    case 0x7F25BDCCu: goto label_7F25BDCC;
    case 0x7F25BDD0u: goto label_7F25BDD0;
    case 0x7F25BDD4u: goto label_7F25BDD4;
    case 0x7F25BDD8u: goto label_7F25BDD8;
    case 0x7F25BDDCu: goto label_7F25BDDC;
    case 0x7F25BDE0u: goto label_7F25BDE0;
    case 0x7F25BDE4u: goto label_7F25BDE4;
    case 0x7F25BDE8u: goto label_7F25BDE8;
    case 0x7F25BDECu: goto label_7F25BDEC;
    case 0x7F25BDF0u: goto label_7F25BDF0;
    case 0x7F25BDF4u: goto label_7F25BDF4;
    case 0x7F25BDF8u: goto label_7F25BDF8;
    case 0x7F25BDFCu: goto label_7F25BDFC;
    case 0x7F25BE00u: goto label_7F25BE00;
    case 0x7F25BE04u: goto label_7F25BE04;
    case 0x7F25BE08u: goto label_7F25BE08;
    case 0x7F25BE0Cu: goto label_7F25BE0C;
    case 0x7F25BE10u: goto label_7F25BE10;
    case 0x7F25BE14u: goto label_7F25BE14;
    case 0x7F25BE18u: goto label_7F25BE18;
    case 0x7F25BE1Cu: goto label_7F25BE1C;
    case 0x7F25BE20u: goto label_7F25BE20;
    case 0x7F25BE24u: goto label_7F25BE24;
    case 0x7F25BE28u: goto label_7F25BE28;
    case 0x7F25BE2Cu: goto label_7F25BE2C;
    case 0x7F25BE30u: goto label_7F25BE30;
    case 0x7F25BE34u: goto label_7F25BE34;
    case 0x7F25BE38u: goto label_7F25BE38;
    case 0x7F25BE3Cu: goto label_7F25BE3C;
    case 0x7F25BE40u: goto label_7F25BE40;
    case 0x7F25BE44u: goto label_7F25BE44;
    case 0x7F25BE48u: goto label_7F25BE48;
    case 0x7F25BE4Cu: goto label_7F25BE4C;
    case 0x7F25BE50u: goto label_7F25BE50;
    case 0x7F25BE54u: goto label_7F25BE54;
    case 0x7F25BE58u: goto label_7F25BE58;
    case 0x7F25BE5Cu: goto label_7F25BE5C;
    case 0x7F25BE60u: goto label_7F25BE60;
    case 0x7F25BE64u: goto label_7F25BE64;
    case 0x7F25BE68u: goto label_7F25BE68;
    case 0x7F25BE6Cu: goto label_7F25BE6C;
    case 0x7F25BE70u: goto label_7F25BE70;
    case 0x7F25BE74u: goto label_7F25BE74;
    case 0x7F25BE78u: goto label_7F25BE78;
    case 0x7F25BE7Cu: goto label_7F25BE7C;
    case 0x7F25BE80u: goto label_7F25BE80;
    case 0x7F25BE84u: goto label_7F25BE84;
    case 0x7F25BE88u: goto label_7F25BE88;
    case 0x7F25BE8Cu: goto label_7F25BE8C;
    case 0x7F25BE90u: goto label_7F25BE90;
    case 0x7F25BE94u: goto label_7F25BE94;
    case 0x7F25BE98u: goto label_7F25BE98;
    case 0x7F25BE9Cu: goto label_7F25BE9C;
    case 0x7F25BEA0u: goto label_7F25BEA0;
    case 0x7F25BEA4u: goto label_7F25BEA4;
    case 0x7F25BEA8u: goto label_7F25BEA8;
    case 0x7F25BEACu: goto label_7F25BEAC;
    case 0x7F25BEB0u: goto label_7F25BEB0;
    case 0x7F25BEB4u: goto label_7F25BEB4;
    case 0x7F25BEB8u: goto label_7F25BEB8;
    case 0x7F25BEBCu: goto label_7F25BEBC;
    case 0x7F25BEC0u: goto label_7F25BEC0;
    case 0x7F25BEC4u: goto label_7F25BEC4;
    case 0x7F25BEC8u: goto label_7F25BEC8;
    case 0x7F25BECCu: goto label_7F25BECC;
    case 0x7F25BED0u: goto label_7F25BED0;
    case 0x7F25BED4u: goto label_7F25BED4;
    case 0x7F25BED8u: goto label_7F25BED8;
    case 0x7F25BEDCu: goto label_7F25BEDC;
    case 0x7F25BEE0u: goto label_7F25BEE0;
    case 0x7F25BEE4u: goto label_7F25BEE4;
    case 0x7F25BEE8u: goto label_7F25BEE8;
    case 0x7F25BEECu: goto label_7F25BEEC;
    case 0x7F25BEF0u: goto label_7F25BEF0;
    case 0x7F25BEF4u: goto label_7F25BEF4;
    case 0x7F25BEF8u: goto label_7F25BEF8;
    case 0x7F25BEFCu: goto label_7F25BEFC;
    case 0x7F25BF00u: goto label_7F25BF00;
    case 0x7F25BF04u: goto label_7F25BF04;
    case 0x7F25BF08u: goto label_7F25BF08;
    case 0x7F25BF0Cu: goto label_7F25BF0C;
    case 0x7F25BF10u: goto label_7F25BF10;
    case 0x7F25BF14u: goto label_7F25BF14;
    case 0x7F25BF18u: goto label_7F25BF18;
    case 0x7F25BF1Cu: goto label_7F25BF1C;
    case 0x7F25BF20u: goto label_7F25BF20;
    case 0x7F25BF24u: goto label_7F25BF24;
    case 0x7F25BF28u: goto label_7F25BF28;
    case 0x7F25BF2Cu: goto label_7F25BF2C;
    case 0x7F25BF30u: goto label_7F25BF30;
    case 0x7F25BF34u: goto label_7F25BF34;
    case 0x7F25BF38u: goto label_7F25BF38;
    case 0x7F25BF3Cu: goto label_7F25BF3C;
    case 0x7F25BF40u: goto label_7F25BF40;
    case 0x7F25BF44u: goto label_7F25BF44;
    case 0x7F25BF48u: goto label_7F25BF48;
    case 0x7F25BF4Cu: goto label_7F25BF4C;
    case 0x7F25BF50u: goto label_7F25BF50;
    case 0x7F25BF54u: goto label_7F25BF54;
    case 0x7F25BF58u: goto label_7F25BF58;
    case 0x7F25BF5Cu: goto label_7F25BF5C;
    case 0x7F25BF60u: goto label_7F25BF60;
    case 0x7F25BF64u: goto label_7F25BF64;
    case 0x7F25BF68u: goto label_7F25BF68;
    case 0x7F25BF6Cu: goto label_7F25BF6C;
    case 0x7F25BF70u: goto label_7F25BF70;
    case 0x7F25BF74u: goto label_7F25BF74;
    case 0x7F25BF78u: goto label_7F25BF78;
    case 0x7F25BF7Cu: goto label_7F25BF7C;
    case 0x7F25BF80u: goto label_7F25BF80;
    case 0x7F25BF84u: goto label_7F25BF84;
    case 0x7F25BF88u: goto label_7F25BF88;
    case 0x7F25BF8Cu: goto label_7F25BF8C;
    case 0x7F25BF90u: goto label_7F25BF90;
    case 0x7F25BF94u: goto label_7F25BF94;
    case 0x7F25BF98u: goto label_7F25BF98;
    case 0x7F25BF9Cu: goto label_7F25BF9C;
    case 0x7F25BFA0u: goto label_7F25BFA0;
    case 0x7F25BFA4u: goto label_7F25BFA4;
    case 0x7F25BFA8u: goto label_7F25BFA8;
    case 0x7F25BFACu: goto label_7F25BFAC;
    case 0x7F25BFB0u: goto label_7F25BFB0;
    case 0x7F25BFB4u: goto label_7F25BFB4;
    case 0x7F25BFB8u: goto label_7F25BFB8;
    case 0x7F25BFBCu: goto label_7F25BFBC;
    case 0x7F25BFC0u: goto label_7F25BFC0;
    case 0x7F25BFC4u: goto label_7F25BFC4;
    case 0x7F25BFC8u: goto label_7F25BFC8;
    case 0x7F25BFCCu: goto label_7F25BFCC;
    case 0x7F25BFD0u: goto label_7F25BFD0;
    case 0x7F25BFD4u: goto label_7F25BFD4;
    case 0x7F25BFD8u: goto label_7F25BFD8;
    case 0x7F25BFDCu: goto label_7F25BFDC;
    case 0x7F25BFE0u: goto label_7F25BFE0;
    case 0x7F25BFE4u: goto label_7F25BFE4;
    case 0x7F25BFE8u: goto label_7F25BFE8;
    case 0x7F25BFECu: goto label_7F25BFEC;
    case 0x7F25BFF0u: goto label_7F25BFF0;
    case 0x7F25BFF4u: goto label_7F25BFF4;
    case 0x7F25BFF8u: goto label_7F25BFF8;
    case 0x7F25BFFCu: goto label_7F25BFFC;
    case 0x7F25C000u: goto label_7F25C000;
    case 0x7F25C004u: goto label_7F25C004;
    case 0x7F25C008u: goto label_7F25C008;
    case 0x7F25C00Cu: goto label_7F25C00C;
    case 0x7F25C010u: goto label_7F25C010;
    case 0x7F25C014u: goto label_7F25C014;
    case 0x7F25C018u: goto label_7F25C018;
    case 0x7F25C01Cu: goto label_7F25C01C;
    case 0x7F25C020u: goto label_7F25C020;
    case 0x7F25C024u: goto label_7F25C024;
    case 0x7F25C028u: goto label_7F25C028;
    case 0x7F25C02Cu: goto label_7F25C02C;
    case 0x7F25C030u: goto label_7F25C030;
    case 0x7F25C034u: goto label_7F25C034;
    case 0x7F25C038u: goto label_7F25C038;
    case 0x7F25C03Cu: goto label_7F25C03C;
    case 0x7F25C040u: goto label_7F25C040;
    case 0x7F25C044u: goto label_7F25C044;
    case 0x7F25C048u: goto label_7F25C048;
    case 0x7F25C04Cu: goto label_7F25C04C;
    case 0x7F25C050u: goto label_7F25C050;
    case 0x7F25C054u: goto label_7F25C054;
    case 0x7F25C058u: goto label_7F25C058;
    case 0x7F25C05Cu: goto label_7F25C05C;
    case 0x7F25C060u: goto label_7F25C060;
    case 0x7F25C064u: goto label_7F25C064;
    case 0x7F25C068u: goto label_7F25C068;
    case 0x7F25C06Cu: goto label_7F25C06C;
    case 0x7F25C070u: goto label_7F25C070;
    case 0x7F25C074u: goto label_7F25C074;
    case 0x7F25C078u: goto label_7F25C078;
    case 0x7F25C07Cu: goto label_7F25C07C;
    case 0x7F25C080u: goto label_7F25C080;
    case 0x7F25C084u: goto label_7F25C084;
    case 0x7F25C088u: goto label_7F25C088;
    case 0x7F25C08Cu: goto label_7F25C08C;
    case 0x7F25C090u: goto label_7F25C090;
    case 0x7F25C094u: goto label_7F25C094;
    case 0x7F25C098u: goto label_7F25C098;
    case 0x7F25C09Cu: goto label_7F25C09C;
    case 0x7F25C0A0u: goto label_7F25C0A0;
    case 0x7F25C0A4u: goto label_7F25C0A4;
    case 0x7F25C0A8u: goto label_7F25C0A8;
    case 0x7F25C0ACu: goto label_7F25C0AC;
    case 0x7F25C0B0u: goto label_7F25C0B0;
    case 0x7F25C0B4u: goto label_7F25C0B4;
    case 0x7F25C0B8u: goto label_7F25C0B8;
    case 0x7F25C0BCu: goto label_7F25C0BC;
    case 0x7F25C0C0u: goto label_7F25C0C0;
    case 0x7F25C0C4u: goto label_7F25C0C4;
    case 0x7F25C0C8u: goto label_7F25C0C8;
    case 0x7F25C0CCu: goto label_7F25C0CC;
    case 0x7F25C0D0u: goto label_7F25C0D0;
    case 0x7F25C0D4u: goto label_7F25C0D4;
    case 0x7F25C0D8u: goto label_7F25C0D8;
    case 0x7F25C0DCu: goto label_7F25C0DC;
    case 0x7F25C0E0u: goto label_7F25C0E0;
    case 0x7F25C0E4u: goto label_7F25C0E4;
    case 0x7F25C0E8u: goto label_7F25C0E8;
    default: return;
    }
label_7F2580EC:
    ctx->pc = 0x7F2580ECu;
    ctx->downcount -= 77;
    // 7F2580EC: add   r11, r28, r11
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F2580F0:
    ctx->pc = 0x7F2580F0u;
    // 7F2580F0: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2580F4:
    ctx->pc = 0x7F2580F4u;
    // 7F2580F4: stw     r19, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F2580F8:
    ctx->pc = 0x7F2580F8u;
    // 7F2580F8: lwz     r20, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F2580FC:
    ctx->pc = 0x7F2580FCu;
    // 7F2580FC: lwz     r19, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F258100:
    ctx->pc = 0x7F258100u;
    // 7F258100: stw     r20, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F258104:
    ctx->pc = 0x7F258104u;
    // 7F258104: stw     r19, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F258108:
    ctx->pc = 0x7F258108u;
    // 7F258108: lwz     r19, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F25810C:
    ctx->pc = 0x7F25810Cu;
    // 7F25810C: lwzx    r19, r19, r0
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[0];
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F258110:
    ctx->pc = 0x7F258110u;
    // 7F258110: rlwinm r19, r19, 4, 0, 27
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[19], 4u) & 0xFFFFFFF0u;
    }

label_7F258114:
    ctx->pc = 0x7F258114u;
    // 7F258114: addi    r19, r19, -32
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(-32);

label_7F258118:
    ctx->pc = 0x7F258118u;
    // 7F258118: add   r21, r31, r19
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F25811C:
    ctx->pc = 0x7F25811Cu;
    // 7F25811C: lwz     r20, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F258120:
    ctx->pc = 0x7F258120u;
    // 7F258120: lwz     r19, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F258124:
    ctx->pc = 0x7F258124u;
    // 7F258124: stw     r20, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F258128:
    ctx->pc = 0x7F258128u;
    // 7F258128: stw     r19, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F25812C:
    ctx->pc = 0x7F25812Cu;
    // 7F25812C: lwz     r20, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F258130:
    ctx->pc = 0x7F258130u;
    // 7F258130: lwz     r19, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F258134:
    ctx->pc = 0x7F258134u;
    // 7F258134: stw     r20, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F258138:
    ctx->pc = 0x7F258138u;
    // 7F258138: stw     r19, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F25813C:
    ctx->pc = 0x7F25813Cu;
    // 7F25813C: lwz     r19, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F258140:
    ctx->pc = 0x7F258140u;
    // 7F258140: add   r19, r19, r24
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F258144:
    ctx->pc = 0x7F258144u;
    // 7F258144: lwz     r21, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F258148:
    ctx->pc = 0x7F258148u;
    // 7F258148: lwz     r20, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F25814C:
    ctx->pc = 0x7F25814Cu;
    // 7F25814C: stw     r21, 32(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F258150:
    ctx->pc = 0x7F258150u;
    // 7F258150: stw     r20, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F258154:
    ctx->pc = 0x7F258154u;
    // 7F258154: lwz     r21, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F258158:
    ctx->pc = 0x7F258158u;
    // 7F258158: lwz     r20, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F25815C:
    ctx->pc = 0x7F25815Cu;
    // 7F25815C: stw     r21, 40(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F258160:
    ctx->pc = 0x7F258160u;
    // 7F258160: stw     r20, 44(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F258164:
    ctx->pc = 0x7F258164u;
    // 7F258164: lwz     r8, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258168:
    ctx->pc = 0x7F258168u;
    // 7F258168: lwzx    r8, r8, r0
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[0];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F25816C:
    ctx->pc = 0x7F25816Cu;
    // 7F25816C: rlwinm r8, r8, 4, 0, 27
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F258170:
    ctx->pc = 0x7F258170u;
    // 7F258170: addi    r8, r8, -48
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-48);

label_7F258174:
    ctx->pc = 0x7F258174u;
    // 7F258174: add   r20, r31, r8
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F258178:
    ctx->pc = 0x7F258178u;
    // 7F258178: lwz     r21, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F25817C:
    ctx->pc = 0x7F25817Cu;
    // 7F25817C: lwz     r8, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258180:
    ctx->pc = 0x7F258180u;
    // 7F258180: stw     r21, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F258184:
    ctx->pc = 0x7F258184u;
    // 7F258184: stw     r8, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F258188:
    ctx->pc = 0x7F258188u;
    // 7F258188: lwz     r21, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F25818C:
    ctx->pc = 0x7F25818Cu;
    // 7F25818C: lwz     r8, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258190:
    ctx->pc = 0x7F258190u;
    // 7F258190: stw     r21, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F258194:
    ctx->pc = 0x7F258194u;
    // 7F258194: stw     r8, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F258198:
    ctx->pc = 0x7F258198u;
    // 7F258198: lwz     r8, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F25819C:
    ctx->pc = 0x7F25819Cu;
    // 7F25819C: lwzx    r0, r8, r0
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581A0:
    ctx->pc = 0x7F2581A0u;
    // 7F2581A0: rlwinm r8, r0, 4, 0, 27
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2581A4:
    ctx->pc = 0x7F2581A4u;
    // 7F2581A4: addi    r0, r8, -32
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(-32);

label_7F2581A8:
    ctx->pc = 0x7F2581A8u;
    // 7F2581A8: add   r21, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F2581AC:
    ctx->pc = 0x7F2581ACu;
    // 7F2581AC: lwz     r8, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2581B0:
    ctx->pc = 0x7F2581B0u;
    // 7F2581B0: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581B4:
    ctx->pc = 0x7F2581B4u;
    // 7F2581B4: stw     r8, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2581B8:
    ctx->pc = 0x7F2581B8u;
    // 7F2581B8: stw     r0, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2581BC:
    ctx->pc = 0x7F2581BCu;
    // 7F2581BC: lwz     r8, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2581C0:
    ctx->pc = 0x7F2581C0u;
    // 7F2581C0: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581C4:
    ctx->pc = 0x7F2581C4u;
    // 7F2581C4: stw     r8, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2581C8:
    ctx->pc = 0x7F2581C8u;
    // 7F2581C8: stw     r0, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2581CC:
    ctx->pc = 0x7F2581CCu;
    // 7F2581CC: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581D0:
    ctx->pc = 0x7F2581D0u;
    // 7F2581D0: add   r21, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F2581D4:
    ctx->pc = 0x7F2581D4u;
    // 7F2581D4: lwz     r8, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2581D8:
    ctx->pc = 0x7F2581D8u;
    // 7F2581D8: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581DC:
    ctx->pc = 0x7F2581DCu;
    // 7F2581DC: stw     r8, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2581E0:
    ctx->pc = 0x7F2581E0u;
    // 7F2581E0: stw     r0, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2581E4:
    ctx->pc = 0x7F2581E4u;
    // 7F2581E4: lwz     r8, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2581E8:
    ctx->pc = 0x7F2581E8u;
    // 7F2581E8: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2581EC:
    ctx->pc = 0x7F2581ECu;
    // 7F2581EC: stw     r8, 40(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2581F0:
    ctx->pc = 0x7F2581F0u;
    // 7F2581F0: stw     r0, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2581F4:
    ctx->pc = 0x7F2581F4u;
    // 7F2581F4: sth     r22, 10(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F2581F8:
    ctx->pc = 0x7F2581F8u;
    // 7F2581F8: sth     r22, 22(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F2581FC:
    ctx->pc = 0x7F2581FCu;
    // 7F2581FC: sth     r12, 34(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_7F258200:
    ctx->pc = 0x7F258200u;
    // 7F258200: sth     r22, 46(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F258204:
    ctx->pc = 0x7F258204u;
    // 7F258204: sth     r22, 58(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F258208:
    ctx->pc = 0x7F258208u;
    // 7F258208: sth     r22, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F25820C:
    ctx->pc = 0x7F25820Cu;
    // 7F25820C: sth     r22, 22(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F258210:
    ctx->pc = 0x7F258210u;
    // 7F258210: sth     r12, 34(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_7F258214:
    ctx->pc = 0x7F258214u;
    // 7F258214: sth     r22, 46(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F258218:
    ctx->pc = 0x7F258218u;
    // 7F258218: sth     r22, 58(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F25821C:
    ctx->pc = 0x7F25821Cu;
    // 7F25821C: bl      0x7F257C5C
    {
            ctx->lr = 0x7F258220u;
            ctx->pc = 0x7F257C5Cu;
            return;
    }

label_7F258220:
    ctx->pc = 0x7F258220u;
    ctx->downcount -= 6;
    // 7F258220: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F258224:
    ctx->pc = 0x7F258224u;
    // 7F258224: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F258228:
    ctx->pc = 0x7F258228u;
    // 7F258228: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25822C:
    ctx->pc = 0x7F25822Cu;
    // 7F25822C: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F258230:
    ctx->pc = 0x7F258230u;
    // 7F258230: addi    r6, r23, 1
    ctx->gpr[6] = ctx->gpr[23] + (u32)(s32)(1);

label_7F258234:
    ctx->pc = 0x7F258234u;
    // 7F258234: bl      0x7F257C5C
    {
            ctx->lr = 0x7F258238u;
            ctx->pc = 0x7F257C5Cu;
            return;
    }

label_7F258238:
    ctx->pc = 0x7F258238u;
    ctx->downcount -= 6;
    // 7F258238: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F25823C:
    ctx->pc = 0x7F25823Cu;
    // 7F25823C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F258240:
    ctx->pc = 0x7F258240u;
    // 7F258240: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F258244:
    ctx->pc = 0x7F258244u;
    // 7F258244: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F258248:
    ctx->pc = 0x7F258248u;
    // 7F258248: addi    r6, r23, 2
    ctx->gpr[6] = ctx->gpr[23] + (u32)(s32)(2);

label_7F25824C:
    ctx->pc = 0x7F25824Cu;
    // 7F25824C: bl      0x7F257C5C
    {
            ctx->lr = 0x7F258250u;
            ctx->pc = 0x7F257C5Cu;
            return;
    }

label_7F258250:
    ctx->pc = 0x7F258250u;
    ctx->downcount -= 6;
    // 7F258250: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258254:
    ctx->pc = 0x7F258254u;
    // 7F258254: add   r4, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258258:
    ctx->pc = 0x7F258258u;
    // 7F258258: lwz     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25825C:
    ctx->pc = 0x7F25825Cu;
    // 7F25825C: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F258260:
    ctx->pc = 0x7F258260u;
    // 7F258260: stw     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258264:
    ctx->pc = 0x7F258264u;
    // 7F258264: b       0x7F2583B0
    {
            goto label_7F2583B0;
    }

label_7F258268:
    ctx->pc = 0x7F258268u;
    ctx->downcount -= 8;
    // 7F258268: rlwinm r3, r23, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[23], 1u) & 0x00000001u;
    }

label_7F25826C:
    ctx->pc = 0x7F25826Cu;
    // 7F25826C: rlwinm r0, r23, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 0u) & 0x00000001u;
    }

label_7F258270:
    ctx->pc = 0x7F258270u;
    // 7F258270: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F258274:
    ctx->pc = 0x7F258274u;
    // 7F258274: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F258278:
    ctx->pc = 0x7F258278u;
    // 7F258278: subf.   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
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

label_7F25827C:
    ctx->pc = 0x7F25827Cu;
    // 7F25827C: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F258280:
    ctx->pc = 0x7F258280u;
    // 7F258280: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F258284:
    ctx->pc = 0x7F258284u;
    // 7F258284: bc    4, 2, 0x7F25828C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25828C;
        }
    }

label_7F258288:
    ctx->pc = 0x7F258288u;
    ctx->downcount -= 1;
    // 7F258288: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F25828C:
    ctx->pc = 0x7F25828Cu;
    ctx->downcount -= 8;
    // 7F25828C: rlwinm r4, r0, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F258290:
    ctx->pc = 0x7F258290u;
    // 7F258290: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F258294:
    ctx->pc = 0x7F258294u;
    // 7F258294: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F258298:
    ctx->pc = 0x7F258298u;
    // 7F258298: sth     r4, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F25829C:
    ctx->pc = 0x7F25829Cu;
    // 7F25829C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2582A0:
    ctx->pc = 0x7F2582A0u;
    // 7F2582A0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2582A4:
    ctx->pc = 0x7F2582A4u;
    // 7F2582A4: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2582A8:
    ctx->pc = 0x7F2582A8u;
    // 7F2582A8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2582ACu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2582AC:
    ctx->pc = 0x7F2582ACu;
    ctx->downcount -= 6;
    // 7F2582AC: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2582B0:
    ctx->pc = 0x7F2582B0u;
    // 7F2582B0: addi    r3, r24, 24
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(24);

label_7F2582B4:
    ctx->pc = 0x7F2582B4u;
    // 7F2582B4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2582B8:
    ctx->pc = 0x7F2582B8u;
    // 7F2582B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2582BC:
    ctx->pc = 0x7F2582BCu;
    // 7F2582BC: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2582C0:
    ctx->pc = 0x7F2582C0u;
    // 7F2582C0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2582C4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2582C4:
    ctx->pc = 0x7F2582C4u;
    ctx->downcount -= 29;
    // 7F2582C4: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2582C8:
    ctx->pc = 0x7F2582C8u;
    // 7F2582C8: rlwinm r4, r23, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[23], 4u) & 0xFFFFFFF0u;
    }

label_7F2582CC:
    ctx->pc = 0x7F2582CCu;
    // 7F2582CC: add   r11, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F2582D0:
    ctx->pc = 0x7F2582D0u;
    // 7F2582D0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2582D4:
    ctx->pc = 0x7F2582D4u;
    // 7F2582D4: add   r9, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F2582D8:
    ctx->pc = 0x7F2582D8u;
    // 7F2582D8: add   r10, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F2582DC:
    ctx->pc = 0x7F2582DCu;
    // 7F2582DC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2582E0:
    ctx->pc = 0x7F2582E0u;
    // 7F2582E0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2582E4:
    ctx->pc = 0x7F2582E4u;
    // 7F2582E4: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2582E8:
    ctx->pc = 0x7F2582E8u;
    // 7F2582E8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2582EC:
    ctx->pc = 0x7F2582ECu;
    // 7F2582EC: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2582F0:
    ctx->pc = 0x7F2582F0u;
    // 7F2582F0: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2582F4:
    ctx->pc = 0x7F2582F4u;
    // 7F2582F4: stw     r8, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2582F8:
    ctx->pc = 0x7F2582F8u;
    // 7F2582F8: stw     r0, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2582FC:
    ctx->pc = 0x7F2582FCu;
    // 7F2582FC: lwz     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258300:
    ctx->pc = 0x7F258300u;
    // 7F258300: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258304:
    ctx->pc = 0x7F258304u;
    // 7F258304: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F258308:
    ctx->pc = 0x7F258308u;
    // 7F258308: stw     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25830C:
    ctx->pc = 0x7F25830Cu;
    // 7F25830C: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258310:
    ctx->pc = 0x7F258310u;
    // 7F258310: add   r9, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F258314:
    ctx->pc = 0x7F258314u;
    // 7F258314: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258318:
    ctx->pc = 0x7F258318u;
    // 7F258318: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25831C:
    ctx->pc = 0x7F25831Cu;
    // 7F25831C: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F258320:
    ctx->pc = 0x7F258320u;
    // 7F258320: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258324:
    ctx->pc = 0x7F258324u;
    // 7F258324: lwz     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F258328:
    ctx->pc = 0x7F258328u;
    // 7F258328: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25832C:
    ctx->pc = 0x7F25832Cu;
    // 7F25832C: stw     r8, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F258330:
    ctx->pc = 0x7F258330u;
    // 7F258330: stw     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258334:
    ctx->pc = 0x7F258334u;
    // 7F258334: bl      0x7F257C5C
    {
            ctx->lr = 0x7F258338u;
            ctx->pc = 0x7F257C5Cu;
            return;
    }

label_7F258338:
    ctx->pc = 0x7F258338u;
    ctx->downcount -= 6;
    // 7F258338: lwz     r3, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25833C:
    ctx->pc = 0x7F25833Cu;
    // 7F25833C: addi    r0, r24, 52
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(52);

label_7F258340:
    ctx->pc = 0x7F258340u;
    // 7F258340: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258344:
    ctx->pc = 0x7F258344u;
    // 7F258344: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F258348:
    ctx->pc = 0x7F258348u;
    // 7F258348: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25834C:
    ctx->pc = 0x7F25834Cu;
    // 7F25834C: bc    4, 1, 0x7F25839C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25839C;
        }
    }

label_7F258350:
    ctx->pc = 0x7F258350u;
    ctx->downcount -= 13;
    // 7F258350: mulli   r4, r23, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[23] * (s64)(s32)12);

label_7F258354:
    ctx->pc = 0x7F258354u;
    // 7F258354: li      r3, 4095
    ctx->gpr[3] = (u32)(s32)(4095);

label_7F258358:
    ctx->pc = 0x7F258358u;
    // 7F258358: addi    r0, r24, 60
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(60);

label_7F25835C:
    ctx->pc = 0x7F25835Cu;
    // 7F25835C: add   r5, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F258360:
    ctx->pc = 0x7F258360u;
    // 7F258360: sth     r3, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F258364:
    ctx->pc = 0x7F258364u;
    // 7F258364: add   r4, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258368:
    ctx->pc = 0x7F258368u;
    // 7F258368: sth     r3, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25836C:
    ctx->pc = 0x7F25836Cu;
    // 7F25836C: lwz     r3, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258370:
    ctx->pc = 0x7F258370u;
    // 7F258370: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258374:
    ctx->pc = 0x7F258374u;
    // 7F258374: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F258378:
    ctx->pc = 0x7F258378u;
    // 7F258378: bc    4, 0, 0x7F25839C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25839C;
        }
    }

label_7F25837C:
    ctx->pc = 0x7F25837Cu;
    ctx->downcount -= 8;
    // 7F25837C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F258380:
    ctx->pc = 0x7F258380u;
    // 7F258380: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F258384:
    ctx->pc = 0x7F258384u;
    // 7F258384: sth     r0, 22(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258388:
    ctx->pc = 0x7F258388u;
    // 7F258388: sth     r0, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25838C:
    ctx->pc = 0x7F25838Cu;
    // 7F25838C: sth     r0, 46(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258390:
    ctx->pc = 0x7F258390u;
    // 7F258390: sth     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258394:
    ctx->pc = 0x7F258394u;
    // 7F258394: sth     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258398:
    ctx->pc = 0x7F258398u;
    // 7F258398: sth     r0, 46(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25839C:
    ctx->pc = 0x7F25839Cu;
    ctx->downcount -= 5;
    // 7F25839C: lwz     r5, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2583A0:
    ctx->pc = 0x7F2583A0u;
    // 7F2583A0: addi    r4, r24, 56
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(56);

label_7F2583A4:
    ctx->pc = 0x7F2583A4u;
    // 7F2583A4: lwzx    r3, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2583A8:
    ctx->pc = 0x7F2583A8u;
    // 7F2583A8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2583AC:
    ctx->pc = 0x7F2583ACu;
    // 7F2583AC: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2583B0:
    ctx->pc = 0x7F2583B0u;
    ctx->downcount -= 6;
    // 7F2583B0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2583B4:
    ctx->pc = 0x7F2583B4u;
    // 7F2583B4: lwz     r0, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2583B8:
    ctx->pc = 0x7F2583B8u;
    // 7F2583B8: addi    r3, r3, 18312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F2583BC:
    ctx->pc = 0x7F2583BCu;
    // 7F2583BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2583C0:
    ctx->pc = 0x7F2583C0u;
    // 7F2583C0: add   r23, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F2583C4:
    ctx->pc = 0x7F2583C4u;
    // 7F2583C4: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F2583C8u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F2583C8:
    ctx->pc = 0x7F2583C8u;
    ctx->downcount -= 14;
    // 7F2583C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2583CC:
    ctx->pc = 0x7F2583CCu;
    // 7F2583CC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2583D0:
    ctx->pc = 0x7F2583D0u;
    // 7F2583D0: addi    r9, r4, 22092
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(22092);

label_7F2583D4:
    ctx->pc = 0x7F2583D4u;
    // 7F2583D4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2583D8:
    ctx->pc = 0x7F2583D8u;
    // 7F2583D8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2583DC:
    ctx->pc = 0x7F2583DCu;
    // 7F2583DC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2583E0:
    ctx->pc = 0x7F2583E0u;
    // 7F2583E0: lfs     f2, 22096(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2583E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2583E4:
    ctx->pc = 0x7F2583E4u;
    // 7F2583E4: addi    r7, r4, 13024
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(13024);

label_7F2583E8:
    ctx->pc = 0x7F2583E8u;
    // 7F2583E8: addi    r8, r3, 13040
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(13040);

label_7F2583EC:
    ctx->pc = 0x7F2583ECu;
    // 7F2583EC: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2583ECu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2583F0:
    ctx->pc = 0x7F2583F0u;
    // 7F2583F0: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2583F4:
    ctx->pc = 0x7F2583F4u;
    // 7F2583F4: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2583F8:
    ctx->pc = 0x7F2583F8u;
    // 7F2583F8: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2583FC:
    ctx->pc = 0x7F2583FCu;
    // 7F2583FC: bl      0x7F275ED0
    {
            ctx->lr = 0x7F258400u;
            ctx->pc = 0x7F275ED0u;
            return;
    }

label_7F258400:
    ctx->pc = 0x7F258400u;
    ctx->downcount -= 3;
    // 7F258400: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F258404:
    ctx->pc = 0x7F258404u;
    // 7F258404: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F258408:
    ctx->pc = 0x7F258408u;
    // 7F258408: bl      0x7F257DAC
    {
            ctx->lr = 0x7F25840Cu;
            ctx->pc = 0x7F257DACu;
            return;
    }

label_7F25840C:
    ctx->pc = 0x7F25840Cu;
    ctx->downcount -= 16;
    // 7F25840C: lwz     r5, 464(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258410:
    ctx->pc = 0x7F258410u;
    // 7F258410: addi    r4, r24, 24
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(24);

label_7F258414:
    ctx->pc = 0x7F258414u;
    // 7F258414: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258418:
    ctx->pc = 0x7F258418u;
    // 7F258418: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25841C:
    ctx->pc = 0x7F25841Cu;
    // 7F25841C: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258420:
    ctx->pc = 0x7F258420u;
    // 7F258420: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258424:
    ctx->pc = 0x7F258424u;
    // 7F258424: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258428:
    ctx->pc = 0x7F258428u;
    // 7F258428: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25842C:
    ctx->pc = 0x7F25842Cu;
    // 7F25842C: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258430:
    ctx->pc = 0x7F258430u;
    // 7F258430: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258434:
    ctx->pc = 0x7F258434u;
    // 7F258434: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258438:
    ctx->pc = 0x7F258438u;
    // 7F258438: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F25843C:
    ctx->pc = 0x7F25843Cu;
    // 7F25843C: addi    r24, r24, 68
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(68);

label_7F258440:
    ctx->pc = 0x7F258440u;
    // 7F258440: lwz     r0, 440(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(440);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258444:
    ctx->pc = 0x7F258444u;
    // 7F258444: cmpw    r26, r0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F258448:
    ctx->pc = 0x7F258448u;
    // 7F258448: bc    12, 0, 0x7F257F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F257F98u;
            return;
        }
    }

label_7F25844C:
    ctx->pc = 0x7F25844Cu;
    ctx->downcount -= 3;
    // 7F25844C: lwz     r0, 452(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258450:
    ctx->pc = 0x7F258450u;
    // 7F258450: cmpwi   r0, 0
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

label_7F258454:
    ctx->pc = 0x7F258454u;
    // 7F258454: bc    12, 0, 0x7F25849C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25849C;
        }
    }

label_7F258458:
    ctx->pc = 0x7F258458u;
    ctx->downcount -= 2;
    // 7F258458: addi    r3, r25, 60
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(60);

label_7F25845C:
    ctx->pc = 0x7F25845Cu;
    // 7F25845C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F258460u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F258460:
    ctx->pc = 0x7F258460u;
    ctx->downcount -= 2;
    // 7F258460: addi    r3, r25, 416
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(416);

label_7F258464:
    ctx->pc = 0x7F258464u;
    // 7F258464: bl      0x7F3B3134
    {
            ctx->lr = 0x7F258468u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F258468:
    ctx->pc = 0x7F258468u;
    ctx->downcount -= 2;
    // 7F258468: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F25846C:
    ctx->pc = 0x7F25846Cu;
    // 7F25846C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F258470u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F258470:
    ctx->pc = 0x7F258470u;
    ctx->downcount -= 6;
    // 7F258470: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F258474:
    ctx->pc = 0x7F258474u;
    // 7F258474: addi    r3, r25, 160
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(160);

label_7F258478:
    ctx->pc = 0x7F258478u;
    // 7F258478: addi    r5, r4, 18316
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18316);

label_7F25847C:
    ctx->pc = 0x7F25847Cu;
    // 7F25847C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F258480:
    ctx->pc = 0x7F258480u;
    // 7F258480: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258484:
    ctx->pc = 0x7F258484u;
    // 7F258484: bl      0x7F014964
    {
            ctx->lr = 0x7F258488u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F258488:
    ctx->pc = 0x7F258488u;
    ctx->downcount -= 2;
    // 7F258488: addi    r3, r25, 160
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(160);

label_7F25848C:
    ctx->pc = 0x7F25848Cu;
    // 7F25848C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F258490u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F258490:
    ctx->pc = 0x7F258490u;
    ctx->downcount -= 3;
    // 7F258490: lwz     r3, 452(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258494:
    ctx->pc = 0x7F258494u;
    // 7F258494: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F258498:
    ctx->pc = 0x7F258498u;
    // 7F258498: stw     r0, 452(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25849C:
    ctx->pc = 0x7F25849Cu;
    ctx->downcount -= 6;
    // 7F25849C: lwz     r3, 444(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2584A0:
    ctx->pc = 0x7F2584A0u;
    // 7F2584A0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2584A4:
    ctx->pc = 0x7F2584A4u;
    // 7F2584A4: stw     r0, 444(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2584A8:
    ctx->pc = 0x7F2584A8u;
    // 7F2584A8: lwz     r0, 440(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(440);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2584AC:
    ctx->pc = 0x7F2584ACu;
    // 7F2584AC: cmpw    r27, r0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2584B0:
    ctx->pc = 0x7F2584B0u;
    // 7F2584B0: bc    12, 0, 0x7F2584BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2584BC;
        }
    }

label_7F2584B4:
    ctx->pc = 0x7F2584B4u;
    ctx->downcount -= 2;
    // 7F2584B4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2584B8:
    ctx->pc = 0x7F2584B8u;
    // 7F2584B8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2584BCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2584BC:
    ctx->pc = 0x7F2584BCu;
    ctx->downcount -= 18;
    // 7F2584BC: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2584BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2584BCu);
        if (ctx->exception) return;
    }

label_7F2584C0:
    ctx->pc = 0x7F2584C0u;
    // 7F2584C0: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2584C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2584C4:
    ctx->pc = 0x7F2584C4u;
    // 7F2584C4: lmw     r19, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2584C8:
    ctx->pc = 0x7F2584C8u;
    // 7F2584C8: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2584CC:
    ctx->pc = 0x7F2584CCu;
    // 7F2584CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2584D0:
    ctx->pc = 0x7F2584D0u;
    // 7F2584D0: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F2584D4:
    ctx->pc = 0x7F2584D4u;
    // 7F2584D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F2584D8:
    ctx->pc = 0x7F2584D8u;
    ctx->downcount -= 7;
    // 7F2584D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2584DC:
    ctx->pc = 0x7F2584DCu;
    // 7F2584DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2584E0:
    ctx->pc = 0x7F2584E0u;
    // 7F2584E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2584E4:
    ctx->pc = 0x7F2584E4u;
    // 7F2584E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2584E8:
    ctx->pc = 0x7F2584E8u;
    // 7F2584E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2584EC:
    ctx->pc = 0x7F2584ECu;
    // 7F2584EC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2584F0:
    ctx->pc = 0x7F2584F0u;
    // 7F2584F0: bl      0x7F01B234
    {
            ctx->lr = 0x7F2584F4u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F2584F4:
    ctx->pc = 0x7F2584F4u;
    ctx->downcount -= 7;
    // 7F2584F4: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2584F8:
    ctx->pc = 0x7F2584F8u;
    // 7F2584F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2584FC:
    ctx->pc = 0x7F2584FCu;
    // 7F2584FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F258500:
    ctx->pc = 0x7F258500u;
    // 7F258500: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258504:
    ctx->pc = 0x7F258504u;
    // 7F258504: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258508:
    ctx->pc = 0x7F258508u;
    // 7F258508: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25850C:
    ctx->pc = 0x7F25850Cu;
    ctx->downcount -= 7;
    // 7F25850C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258510:
    ctx->pc = 0x7F258510u;
    // 7F258510: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258514:
    ctx->pc = 0x7F258514u;
    // 7F258514: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258518:
    ctx->pc = 0x7F258518u;
    // 7F258518: lwz     r12, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F25851C:
    ctx->pc = 0x7F25851Cu;
    // 7F25851C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F258520:
    ctx->pc = 0x7F258520u;
    // 7F258520: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F258524u;
            ctx->pc = target;
            return;
        }
    }

label_7F258524:
    ctx->pc = 0x7F258524u;
    ctx->downcount -= 5;
    // 7F258524: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258528:
    ctx->pc = 0x7F258528u;
    // 7F258528: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25852C:
    ctx->pc = 0x7F25852Cu;
    // 7F25852C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258530:
    ctx->pc = 0x7F258530u;
    // 7F258530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258534:
    ctx->pc = 0x7F258534u;
    ctx->downcount -= 8;
    // 7F258534: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258538:
    ctx->pc = 0x7F258538u;
    // 7F258538: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25853C:
    ctx->pc = 0x7F25853Cu;
    // 7F25853C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258540:
    ctx->pc = 0x7F258540u;
    // 7F258540: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F258544:
    ctx->pc = 0x7F258544u;
    // 7F258544: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258548:
    ctx->pc = 0x7F258548u;
    // 7F258548: lwz     r3, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25854C:
    ctx->pc = 0x7F25854Cu;
    // 7F25854C: cmplwi  r3, 0x0000
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

label_7F258550:
    ctx->pc = 0x7F258550u;
    // 7F258550: bc    12, 2, 0x7F258558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F258558;
        }
    }

label_7F258554:
    ctx->pc = 0x7F258554u;
    ctx->downcount -= 1;
    // 7F258554: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F258558u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F258558:
    ctx->pc = 0x7F258558u;
    ctx->downcount -= 3;
    // 7F258558: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25855C:
    ctx->pc = 0x7F25855Cu;
    // 7F25855C: cmplwi  r3, 0x0000
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

label_7F258560:
    ctx->pc = 0x7F258560u;
    // 7F258560: bc    12, 2, 0x7F25856C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25856C;
        }
    }

label_7F258564:
    ctx->pc = 0x7F258564u;
    ctx->downcount -= 1;
    // 7F258564: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F258568u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F258568:
    ctx->pc = 0x7F258568u;
    ctx->downcount -= 1;
    // 7F258568: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25856C:
    ctx->pc = 0x7F25856Cu;
    ctx->downcount -= 2;
    // 7F25856C: addi    r3, r31, 160
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(160);

label_7F258570:
    ctx->pc = 0x7F258570u;
    // 7F258570: bl      0x7F0146B0
    {
            ctx->lr = 0x7F258574u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F258574:
    ctx->pc = 0x7F258574u;
    ctx->downcount -= 6;
    // 7F258574: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258578:
    ctx->pc = 0x7F258578u;
    // 7F258578: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25857C:
    ctx->pc = 0x7F25857Cu;
    // 7F25857C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258580:
    ctx->pc = 0x7F258580u;
    // 7F258580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258584:
    ctx->pc = 0x7F258584u;
    // 7F258584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258588:
    ctx->pc = 0x7F258588u;
    ctx->downcount -= 27;
    // 7F258588: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25858C:
    ctx->pc = 0x7F25858Cu;
    // 7F25858C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258590:
    ctx->pc = 0x7F258590u;
    // 7F258590: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258594:
    ctx->pc = 0x7F258594u;
    // 7F258594: stfd     f31, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F258598:
    ctx->pc = 0x7F258598u;
    // 7F258598: psq_st   f31, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F258598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F258598u);
        if (ctx->exception) return;
    }

label_7F25859C:
    ctx->pc = 0x7F25859Cu;
    // 7F25859C: stfd     f30, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25859Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2585A0:
    ctx->pc = 0x7F2585A0u;
    // 7F2585A0: psq_st   f30, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2585A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2585A0u);
        if (ctx->exception) return;
    }

label_7F2585A4:
    ctx->pc = 0x7F2585A4u;
    // 7F2585A4: stfd     f29, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2585A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F2585A8:
    ctx->pc = 0x7F2585A8u;
    // 7F2585A8: psq_st   f29, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2585A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F2585A8u);
        if (ctx->exception) return;
    }

label_7F2585AC:
    ctx->pc = 0x7F2585ACu;
    // 7F2585AC: stmw     r20, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2585B0:
    ctx->pc = 0x7F2585B0u;
    // 7F2585B0: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F2585B4:
    ctx->pc = 0x7F2585B4u;
    // 7F2585B4: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2585B8:
    ctx->pc = 0x7F2585B8u;
    // 7F2585B8: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2585BC:
    ctx->pc = 0x7F2585BCu;
    // 7F2585BC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2585C0:
    ctx->pc = 0x7F2585C0u;
    // 7F2585C0: lwz     r4, 18308(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2585C4:
    ctx->pc = 0x7F2585C4u;
    // 7F2585C4: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2585C8:
    ctx->pc = 0x7F2585C8u;
    // 7F2585C8: bl      0x7F2584D8
    {
            ctx->lr = 0x7F2585CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2584D8u;
                return;
            }
            goto label_7F2584D8;
    }

label_7F2585CC:
    ctx->pc = 0x7F2585CCu;
    ctx->downcount -= 2;
    // 7F2585CC: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F2585D0:
    ctx->pc = 0x7F2585D0u;
    // 7F2585D0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2585D4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2585D4:
    ctx->pc = 0x7F2585D4u;
    ctx->downcount -= 2;
    // 7F2585D4: addi    r3, r23, 124
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(124);

label_7F2585D8:
    ctx->pc = 0x7F2585D8u;
    // 7F2585D8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2585DCu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2585DC:
    ctx->pc = 0x7F2585DCu;
    ctx->downcount -= 2;
    // 7F2585DC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2585E0:
    ctx->pc = 0x7F2585E0u;
    // 7F2585E0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2585E4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2585E4:
    ctx->pc = 0x7F2585E4u;
    ctx->downcount -= 9;
    // 7F2585E4: lwz     r29, 440(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(440);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2585E8:
    ctx->pc = 0x7F2585E8u;
    // 7F2585E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2585EC:
    ctx->pc = 0x7F2585ECu;
    // 7F2585EC: stw     r0, 444(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2585F0:
    ctx->pc = 0x7F2585F0u;
    // 7F2585F0: mulli   r21, r29, 68
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)68);

label_7F2585F4:
    ctx->pc = 0x7F2585F4u;
    // 7F2585F4: stw     r0, 448(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2585F8:
    ctx->pc = 0x7F2585F8u;
    // 7F2585F8: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2585FC:
    ctx->pc = 0x7F2585FCu;
    // 7F2585FC: bl      0x7F3C9148
    {
            ctx->lr = 0x7F258600u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F258600:
    ctx->pc = 0x7F258600u;
    ctx->downcount -= 4;
    // 7F258600: stw     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258604:
    ctx->pc = 0x7F258604u;
    // 7F258604: lwz     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258608:
    ctx->pc = 0x7F258608u;
    // 7F258608: cmplwi  r3, 0x0000
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

label_7F25860C:
    ctx->pc = 0x7F25860Cu;
    // 7F25860C: bc    4, 2, 0x7F258618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258618;
        }
    }

label_7F258610:
    ctx->pc = 0x7F258610u;
    ctx->downcount -= 2;
    // 7F258610: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F258614:
    ctx->pc = 0x7F258614u;
    // 7F258614: b       0x7F2589E0
    {
            goto label_7F2589E0;
    }

label_7F258618:
    ctx->pc = 0x7F258618u;
    ctx->downcount -= 2;
    // 7F258618: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F25861C:
    ctx->pc = 0x7F25861Cu;
    // 7F25861C: bl      0x7F3C9120
    {
            ctx->lr = 0x7F258620u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F258620:
    ctx->pc = 0x7F258620u;
    ctx->downcount -= 10;
    // 7F258620: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258624:
    ctx->pc = 0x7F258624u;
    // 7F258624: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F258628:
    ctx->pc = 0x7F258628u;
    // 7F258628: addi    r5, r3, 22100
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22100);

label_7F25862C:
    ctx->pc = 0x7F25862Cu;
    // 7F25862C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258630:
    ctx->pc = 0x7F258630u;
    // 7F258630: lfs     f29, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258630u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F258634:
    ctx->pc = 0x7F258634u;
    // 7F258634: addi    r22, r4, 12832
    ctx->gpr[22] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F258638:
    ctx->pc = 0x7F258638u;
    // 7F258638: addi    r21, r3, 22104
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(22104);

label_7F25863C:
    ctx->pc = 0x7F25863Cu;
    // 7F25863C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F258640:
    ctx->pc = 0x7F258640u;
    // 7F258640: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F258644:
    ctx->pc = 0x7F258644u;
    // 7F258644: b       0x7F2586D4
    {
            goto label_7F2586D4;
    }

label_7F258648:
    ctx->downcount -= 1;
    // 7F258648: bl      0x7F258A78
    {
            ctx->lr = 0x7F25864Cu;
            goto label_7F258A78;
    }

label_7F25864C:
    ctx->pc = 0x7F25864Cu;
    ctx->downcount -= 6;
    // 7F25864C: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25864Cu)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F258650:
    ctx->pc = 0x7F258650u;
    // 7F258650: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258650u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F258654:
    ctx->pc = 0x7F258654u;
    // 7F258654: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258654u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F258658:
    ctx->pc = 0x7F258658u;
    // 7F258658: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25865C:
    ctx->pc = 0x7F25865Cu;
    // 7F25865C: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258660:
    // 7F258660: bl      0x7F258A30
    {
            ctx->lr = 0x7F258664u;
            goto label_7F258A30;
    }

label_7F258664:
    ctx->pc = 0x7F258664u;
    ctx->downcount -= 10;
    // 7F258664: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258664u)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F258668:
    // 7F258668: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25866C:
    ctx->pc = 0x7F25866Cu;
    // 7F25866C: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258670:
    // 7F258670: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F258674:
    // 7F258674: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F258678:
    ctx->pc = 0x7F258678u;
    // 7F258678: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258678u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25867C:
    ctx->pc = 0x7F25867Cu;
    // 7F25867C: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25867Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F258680:
    ctx->pc = 0x7F258680u;
    // 7F258680: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258684:
    ctx->pc = 0x7F258684u;
    // 7F258684: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258688:
    // 7F258688: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F25868Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F25868C:
    ctx->downcount -= 4;
    // 7F25868C: addi    r3, r23, 140
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(140);

label_7F258690:
    // 7F258690: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258694:
    // 7F258694: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F258698:
    // 7F258698: bl      0x7F3B3648
    {
            ctx->lr = 0x7F25869Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F25869C:
    ctx->downcount -= 2;
    // 7F25869C: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F2586A0:
    // 7F2586A0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2586A4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2586A4:
    ctx->pc = 0x7F2586A4u;
    ctx->downcount -= 6;
    // 7F2586A4: lwz     r0, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2586A8:
    // 7F2586A8: addi    r4, r26, 24
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(24);

label_7F2586AC:
    // 7F2586AC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2586B0:
    // 7F2586B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2586B4:
    // 7F2586B4: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2586B8:
    // 7F2586B8: bl      0x7F3B3648
    {
            ctx->lr = 0x7F2586BCu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F2586BC:
    ctx->downcount -= 4;
    // 7F2586BC: addi    r3, r23, 140
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(140);

label_7F2586C0:
    ctx->pc = 0x7F2586C0u;
    // 7F2586C0: lfs     f1, 0(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F2586C0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2586C4:
    // 7F2586C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2586C8:
    // 7F2586C8: bl      0x800261FC
    {
            ctx->lr = 0x7F2586CCu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2586CC:
    ctx->downcount -= 2;
    // 7F2586CC: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2586D0:
    // 7F2586D0: addi    r26, r26, 68
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(68);

label_7F2586D4:
    ctx->downcount -= 2;
    // 7F2586D4: cmpw    r27, r29
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2586D8:
    // 7F2586D8: bc    12, 0, 0x7F258648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258648u;
                return;
            }
            goto label_7F258648;
        }
    }

label_7F2586DC:
    ctx->pc = 0x7F2586DCu;
    ctx->downcount -= 3;
    // 7F2586DC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2586E0:
    ctx->pc = 0x7F2586E0u;
    // 7F2586E0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2586E4:
    ctx->pc = 0x7F2586E4u;
    // 7F2586E4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F2586E8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F2586E8:
    ctx->pc = 0x7F2586E8u;
    ctx->downcount -= 9;
    // 7F2586E8: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F2586EC:
    ctx->pc = 0x7F2586ECu;
    // 7F2586EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2586F0:
    ctx->pc = 0x7F2586F0u;
    // 7F2586F0: stw     r0, 204(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2586F4:
    ctx->pc = 0x7F2586F4u;
    // 7F2586F4: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F2586F8:
    ctx->pc = 0x7F2586F8u;
    // 7F2586F8: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F2586FC:
    ctx->pc = 0x7F2586FCu;
    // 7F2586FC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F258700:
    ctx->pc = 0x7F258700u;
    // 7F258700: stw     r4, 200(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258704:
    ctx->pc = 0x7F258704u;
    // 7F258704: stw     r0, 304(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258708:
    ctx->pc = 0x7F258708u;
    // 7F258708: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25870Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25870C:
    ctx->pc = 0x7F25870Cu;
    ctx->downcount -= 2;
    // 7F25870C: addi    r3, r23, 124
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(124);

label_7F258710:
    ctx->pc = 0x7F258710u;
    // 7F258710: bl      0x7F3B3134
    {
            ctx->lr = 0x7F258714u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F258714:
    ctx->pc = 0x7F258714u;
    ctx->downcount -= 2;
    // 7F258714: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F258718:
    ctx->pc = 0x7F258718u;
    // 7F258718: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F25871Cu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F25871C:
    ctx->pc = 0x7F25871Cu;
    ctx->downcount -= 10;
    // 7F25871C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F258720:
    ctx->pc = 0x7F258720u;
    // 7F258720: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258724:
    ctx->pc = 0x7F258724u;
    // 7F258724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258728:
    ctx->pc = 0x7F258728u;
    // 7F258728: lfs     f29, 22108(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258728u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F25872C:
    ctx->pc = 0x7F25872Cu;
    // 7F25872C: lfs     f30, 22112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25872Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F258730:
    ctx->pc = 0x7F258730u;
    // 7F258730: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F258734:
    ctx->pc = 0x7F258734u;
    // 7F258734: lfd     f31, 22032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258734u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22032);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258738:
    ctx->pc = 0x7F258738u;
    // 7F258738: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F25873C:
    ctx->pc = 0x7F25873Cu;
    // 7F25873C: lis     r21, 17200
    ctx->gpr[21] = ((u32)(s32)(17200) << 16);

label_7F258740:
    ctx->pc = 0x7F258740u;
    // 7F258740: b       0x7F258830
    {
            goto label_7F258830;
    }

label_7F258744:
    ctx->pc = 0x7F258744u;
    ctx->downcount -= 11;
    // 7F258744: lwz     r4, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258748:
    ctx->pc = 0x7F258748u;
    // 7F258748: lwz     r3, 108(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25874C:
    ctx->pc = 0x7F25874Cu;
    // 7F25874C: lwz     r0, 112(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258750:
    // 7F258750: add   r4, r4, r25
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258754:
    ctx->pc = 0x7F258754u;
    // 7F258754: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258758:
    ctx->pc = 0x7F258758u;
    // 7F258758: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25875C:
    ctx->pc = 0x7F25875Cu;
    // 7F25875C: lwz     r3, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258760:
    ctx->pc = 0x7F258760u;
    // 7F258760: lwz     r0, 120(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258764:
    ctx->pc = 0x7F258764u;
    // 7F258764: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258768:
    ctx->pc = 0x7F258768u;
    // 7F258768: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25876C:
    // 7F25876C: bl      0x7F258A78
    {
            ctx->lr = 0x7F258770u;
            goto label_7F258A78;
    }

label_7F258770:
    ctx->pc = 0x7F258770u;
    ctx->downcount -= 5;
    // 7F258770: lwz     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258774:
    ctx->pc = 0x7F258774u;
    // 7F258774: lfsx    f0, r3, r25
    if (!ppc_fp_available_inline(ctx, 0x7F258774u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[25];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258778:
    ctx->pc = 0x7F258778u;
    // 7F258778: fmadds f0, f29, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258778u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F25877C:
    ctx->pc = 0x7F25877Cu;
    // 7F25877C: stfsx    f0, r3, r25
    if (!ppc_fp_available_inline(ctx, 0x7F25877Cu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[25];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258780:
    // 7F258780: bl      0x7F258A78
    {
            ctx->lr = 0x7F258784u;
            goto label_7F258A78;
    }

label_7F258784:
    ctx->pc = 0x7F258784u;
    ctx->downcount -= 6;
    // 7F258784: lwz     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258788:
    // 7F258788: addi    r0, r25, 4
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(4);

label_7F25878C:
    ctx->pc = 0x7F25878Cu;
    // 7F25878C: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F25878Cu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258790:
    ctx->pc = 0x7F258790u;
    // 7F258790: fmadds f0, f29, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258790u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F258794:
    ctx->pc = 0x7F258794u;
    // 7F258794: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F258794u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258798:
    // 7F258798: bl      0x7F258A78
    {
            ctx->lr = 0x7F25879Cu;
            goto label_7F258A78;
    }

label_7F25879C:
    ctx->pc = 0x7F25879Cu;
    ctx->downcount -= 15;
    // 7F25879C: lwz     r4, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2587A0:
    // 7F2587A0: addi    r3, r25, 8
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(8);

label_7F2587A4:
    // 7F2587A4: addi    r0, r25, 52
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(52);

label_7F2587A8:
    ctx->pc = 0x7F2587A8u;
    // 7F2587A8: lfsx    f0, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2587A8u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2587AC:
    ctx->pc = 0x7F2587ACu;
    // 7F2587AC: fmadds f0, f29, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2587ACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F2587B0:
    ctx->pc = 0x7F2587B0u;
    // 7F2587B0: stfsx    f0, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2587B0u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2587B4:
    ctx->pc = 0x7F2587B4u;
    // 7F2587B4: lwz     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2587B8:
    ctx->pc = 0x7F2587B8u;
    // 7F2587B8: stwx    r27, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F2587BC:
    ctx->pc = 0x7F2587BCu;
    // 7F2587BC: lwz     r0, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2587C0:
    // 7F2587C0: add   r3, r0, r25
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2587C4:
    ctx->pc = 0x7F2587C4u;
    // 7F2587C4: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2587C8:
    ctx->pc = 0x7F2587C8u;
    // 7F2587C8: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2587CC:
    ctx->pc = 0x7F2587CCu;
    // 7F2587CC: lwz     r0, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2587D0:
    // 7F2587D0: add   r22, r0, r25
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F2587D4:
    // 7F2587D4: bl      0x7F258A0C
    {
            ctx->lr = 0x7F2587D8u;
            goto label_7F258A0C;
    }

label_7F2587D8:
    ctx->downcount -= 65;
    // 7F2587D8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F2587DC:
    ctx->pc = 0x7F2587DCu;
    // 7F2587DC: lwz     r4, 52(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2587E0:
    // 7F2587E0: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F2587E4:
    ctx->pc = 0x7F2587E4u;
    // 7F2587E4: stw     r21, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F2587E8:
    // 7F2587E8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2587EC:
    // 7F2587EC: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F2587F0:
    // 7F2587F0: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F2587F4:
    // 7F2587F4: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2587F8:
    // 7F2587F8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2587FC:
    ctx->pc = 0x7F2587FCu;
    // 7F2587FC: stw     r0, 60(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258800:
    ctx->pc = 0x7F258800u;
    // 7F258800: lwz     r0, 436(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258804:
    ctx->pc = 0x7F258804u;
    // 7F258804: lwz     r3, 464(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258808:
    // 7F258808: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25880C:
    ctx->pc = 0x7F25880Cu;
    // 7F25880C: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258810:
    // 7F258810: add   r4, r3, r25
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258814:
    ctx->pc = 0x7F258814u;
    // 7F258814: lwz     r3, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258818:
    // 7F258818: addi    r25, r25, 68
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(68);

label_7F25881C:
    ctx->pc = 0x7F25881Cu;
    // 7F25881C: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25881Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258820:
    // 7F258820: addi    r27, r3, 4
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(4);

label_7F258824:
    ctx->pc = 0x7F258824u;
    // 7F258824: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F258824u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F258828:
    ctx->pc = 0x7F258828u;
    // 7F258828: fadds   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258828u)) return;
    ppc_fadds(ctx, 0, 30, 0);

label_7F25882C:
    ctx->pc = 0x7F25882Cu;
    // 7F25882C: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25882Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258830:
    ctx->downcount -= 2;
    // 7F258830: cmpw    r28, r29
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F258834:
    // 7F258834: bc    12, 0, 0x7F258744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258744u;
                return;
            }
            goto label_7F258744;
        }
    }

label_7F258838:
    ctx->pc = 0x7F258838u;
    ctx->downcount -= 7;
    // 7F258838: lwz     r0, 440(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(440);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25883C:
    ctx->pc = 0x7F25883Cu;
    // 7F25883C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F258840:
    ctx->pc = 0x7F258840u;
    // 7F258840: lwz     r4, 184(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258844:
    ctx->pc = 0x7F258844u;
    // 7F258844: rlwinm. r30, r0, 29, 8, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x00FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F258848:
    ctx->pc = 0x7F258848u;
    // 7F258848: rlwinm r29, r0, 5, 0, 26
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_7F25884C:
    ctx->pc = 0x7F25884Cu;
    // 7F25884C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F258850:
    ctx->pc = 0x7F258850u;
    // 7F258850: bc    12, 2, 0x7F258858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F258858;
        }
    }

label_7F258854:
    ctx->pc = 0x7F258854u;
    ctx->downcount -= 1;
    // 7F258854: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F258858:
    ctx->pc = 0x7F258858u;
    ctx->downcount -= 8;
    // 7F258858: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F25885C:
    ctx->pc = 0x7F25885Cu;
    // 7F25885C: lwz     r25, 188(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(188);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F258860:
    ctx->pc = 0x7F258860u;
    // 7F258860: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F258864:
    ctx->pc = 0x7F258864u;
    // 7F258864: addi    r22, r29, -1
    ctx->gpr[22] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F258868:
    ctx->pc = 0x7F258868u;
    // 7F258868: addi    r21, r3, 12832
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F25886C:
    ctx->pc = 0x7F25886Cu;
    // 7F25886C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F258870:
    ctx->pc = 0x7F258870u;
    // 7F258870: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F258874:
    ctx->pc = 0x7F258874u;
    // 7F258874: b       0x7F2588F4
    {
            goto label_7F2588F4;
    }

label_7F258878:
    ctx->downcount -= 3;
    // 7F258878: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F25887C:
    ctx->pc = 0x7F25887Cu;
    // 7F25887C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F258880:
    ctx->pc = 0x7F258880u;
    ctx->downcount -= 10;
    // 7F258880: lwz     r3, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258884:
    // 7F258884: cmpw    r4, r22
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F258888:
    ctx->pc = 0x7F258888u;
    // 7F258888: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25888C:
    ctx->pc = 0x7F25888Cu;
    // 7F25888C: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258890:
    ctx->pc = 0x7F258890u;
    // 7F258890: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258894:
    ctx->pc = 0x7F258894u;
    // 7F258894: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258898:
    ctx->pc = 0x7F258898u;
    // 7F258898: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25889C:
    ctx->pc = 0x7F25889Cu;
    // 7F25889C: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2588A0:
    ctx->pc = 0x7F2588A0u;
    // 7F2588A0: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2588A4:
    // 7F2588A4: bc    4, 0, 0x7F2588B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2588B0;
        }
    }

label_7F2588A8:
    ctx->downcount -= 2;
    // 7F2588A8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2588AC:
    // 7F2588AC: b       0x7F2588BC
    {
            goto label_7F2588BC;
    }

label_7F2588B0:
    ctx->downcount -= 3;
    // 7F2588B0: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F2588B4:
    // 7F2588B4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2588B8:
    // 7F2588B8: b       0x7F2588C4
    {
            goto label_7F2588C4;
    }

label_7F2588BC:
    ctx->downcount -= 2;
    // 7F2588BC: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F2588C0:
    // 7F2588C0: bc    16, 0, 0x7F258880
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258880u;
                return;
            }
            goto label_7F258880;
        }
    }

label_7F2588C4:
    ctx->downcount -= 7;
    // 7F2588C4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F2588C8:
    // 7F2588C8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2588CC:
    // 7F2588CC: rlwinm r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F2588D0:
    // 7F2588D0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2588D4:
    // 7F2588D4: addi    r20, r5, 1
    ctx->gpr[20] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2588D8:
    // 7F2588D8: rlwinm r5, r20, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[20], 4u) & 0xFFFFFFF0u;
    }

label_7F2588DC:
    // 7F2588DC: bl      0x8000519C
    {
            ctx->lr = 0x7F2588E0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2588E0:
    ctx->downcount -= 5;
    // 7F2588E0: rlwinm r0, r20, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 4u) & 0xFFFFFFF0u;
    }

label_7F2588E4:
    // 7F2588E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2588E8:
    // 7F2588E8: add   r26, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F2588EC:
    // 7F2588EC: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2588F0:
    // 7F2588F0: add   r25, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F2588F4:
    ctx->downcount -= 2;
    // 7F2588F4: cmpw    r28, r31
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2588F8:
    // 7F2588F8: bc    12, 0, 0x7F258878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258878u;
                return;
            }
            goto label_7F258878;
        }
    }

label_7F2588FC:
    ctx->pc = 0x7F2588FCu;
    ctx->downcount -= 5;
    // 7F2588FC: lwz     r0, 192(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258900:
    ctx->pc = 0x7F258900u;
    // 7F258900: cmpwi   r30, 0
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

label_7F258904:
    ctx->pc = 0x7F258904u;
    // 7F258904: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_7F258908:
    ctx->pc = 0x7F258908u;
    // 7F258908: or   r22, r0, r0
    {
        ctx->gpr[22] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F25890C:
    ctx->pc = 0x7F25890Cu;
    // 7F25890C: bc    12, 2, 0x7F258914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F258914;
        }
    }

label_7F258910:
    ctx->pc = 0x7F258910u;
    ctx->downcount -= 1;
    // 7F258910: or   r26, r30, r30
    {
        ctx->gpr[26] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F258914:
    ctx->pc = 0x7F258914u;
    ctx->downcount -= 8;
    // 7F258914: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F258918:
    ctx->pc = 0x7F258918u;
    // 7F258918: lwz     r27, 196(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(196);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F25891C:
    ctx->pc = 0x7F25891Cu;
    // 7F25891C: or   r20, r0, r0
    {
        ctx->gpr[20] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F258920:
    ctx->pc = 0x7F258920u;
    // 7F258920: addi    r24, r29, -1
    ctx->gpr[24] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F258924:
    ctx->pc = 0x7F258924u;
    // 7F258924: addi    r25, r3, -28673
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F258928:
    ctx->pc = 0x7F258928u;
    // 7F258928: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25892C:
    ctx->pc = 0x7F25892Cu;
    // 7F25892C: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F258930:
    ctx->pc = 0x7F258930u;
    // 7F258930: b       0x7F2589BC
    {
            goto label_7F2589BC;
    }

label_7F258934:
    ctx->downcount -= 6;
    // 7F258934: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F258938:
    // 7F258938: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25893C:
    // 7F25893C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F258940:
    // 7F258940: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F258944:
    ctx->pc = 0x7F258944u;
    // 7F258944: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F258948:
    ctx->pc = 0x7F258948u;
    ctx->downcount -= 10;
    // 7F258948: stb     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25894C:
    // 7F25894C: cmpw    r6, r24
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F258950:
    ctx->pc = 0x7F258950u;
    // 7F258950: stb     r4, 1(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F258954:
    ctx->pc = 0x7F258954u;
    // 7F258954: stb     r4, 2(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F258958:
    ctx->pc = 0x7F258958u;
    // 7F258958: stb     r4, 3(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25895C:
    ctx->pc = 0x7F25895Cu;
    // 7F25895C: sth     r5, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F258960:
    ctx->pc = 0x7F258960u;
    // 7F258960: sth     r5, 6(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F258964:
    ctx->pc = 0x7F258964u;
    // 7F258964: sth     r3, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F258968:
    ctx->pc = 0x7F258968u;
    // 7F258968: sth     r25, 10(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_7F25896C:
    // 7F25896C: bc    4, 0, 0x7F258978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258978;
        }
    }

label_7F258970:
    ctx->downcount -= 2;
    // 7F258970: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F258974:
    // 7F258974: b       0x7F258984
    {
            goto label_7F258984;
    }

label_7F258978:
    ctx->downcount -= 3;
    // 7F258978: addi    r22, r22, 12
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(12);

label_7F25897C:
    // 7F25897C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F258980:
    // 7F258980: b       0x7F25898C
    {
            goto label_7F25898C;
    }

label_7F258984:
    ctx->downcount -= 2;
    // 7F258984: addi    r22, r22, 12
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(12);

label_7F258988:
    // 7F258988: bc    16, 0, 0x7F258948
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258948u;
                return;
            }
            goto label_7F258948;
        }
    }

label_7F25898C:
    ctx->downcount -= 9;
    // 7F25898C: addi    r0, r6, -1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F258990:
    // 7F258990: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F258994:
    // 7F258994: rlwinm r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F258998:
    // 7F258998: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F25899C:
    // 7F25899C: addi    r28, r5, 1
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2589A0:
    // 7F2589A0: mulli   r5, r28, 12
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)12);

label_7F2589A4:
    // 7F2589A4: bl      0x8000519C
    {
            ctx->lr = 0x7F2589A8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2589A8:
    ctx->downcount -= 7;
    // 7F2589A8: mulli   r0, r28, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)12);

label_7F2589AC:
    // 7F2589AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2589B0:
    // 7F2589B0: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F2589B4:
    // 7F2589B4: add   r20, r20, r0
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F2589B8:
    // 7F2589B8: add   r27, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F2589BC:
    ctx->downcount -= 2;
    // 7F2589BC: cmpw    r21, r26
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2589C0:
    // 7F2589C0: bc    12, 0, 0x7F258934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258934u;
                return;
            }
            goto label_7F258934;
        }
    }

label_7F2589C4:
    ctx->pc = 0x7F2589C4u;
    ctx->downcount -= 6;
    // 7F2589C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2589C8:
    ctx->pc = 0x7F2589C8u;
    // 7F2589C8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2589CC:
    ctx->pc = 0x7F2589CCu;
    // 7F2589CC: addi    r5, r4, 22116
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22116);

label_7F2589D0:
    ctx->pc = 0x7F2589D0u;
    // 7F2589D0: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F2589D4:
    ctx->pc = 0x7F2589D4u;
    // 7F2589D4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2589D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2589D8:
    ctx->pc = 0x7F2589D8u;
    // 7F2589D8: bl      0x7F257988
    {
            ctx->lr = 0x7F2589DCu;
            ctx->pc = 0x7F257988u;
            return;
    }

label_7F2589DC:
    ctx->pc = 0x7F2589DCu;
    ctx->downcount -= 1;
    // 7F2589DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2589E0:
    ctx->pc = 0x7F2589E0u;
    ctx->downcount -= 22;
    // 7F2589E0: psq_l   f31, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2589E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2589E0u);
        if (ctx->exception) return;
    }

label_7F2589E4:
    ctx->pc = 0x7F2589E4u;
    // 7F2589E4: lfd     f31, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2589E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2589E8:
    ctx->pc = 0x7F2589E8u;
    // 7F2589E8: psq_l   f30, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2589E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2589E8u);
        if (ctx->exception) return;
    }

label_7F2589EC:
    ctx->pc = 0x7F2589ECu;
    // 7F2589EC: lfd     f30, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2589ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2589F0:
    ctx->pc = 0x7F2589F0u;
    // 7F2589F0: psq_l   f29, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2589F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2589F0u);
        if (ctx->exception) return;
    }

label_7F2589F4:
    ctx->pc = 0x7F2589F4u;
    // 7F2589F4: lfd     f29, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2589F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2589F8:
    ctx->pc = 0x7F2589F8u;
    // 7F2589F8: lmw     r20, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2589FC:
    ctx->pc = 0x7F2589FCu;
    // 7F2589FC: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258A00:
    ctx->pc = 0x7F258A00u;
    // 7F258A00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258A04:
    ctx->pc = 0x7F258A04u;
    // 7F258A04: addi    r1, r1, 208
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(208);

label_7F258A08:
    ctx->pc = 0x7F258A08u;
    // 7F258A08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258A0C:
    ctx->pc = 0x7F258A0Cu;
    ctx->downcount -= 13;
    // 7F258A0C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F258A10:
    ctx->pc = 0x7F258A10u;
    // 7F258A10: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F258A14:
    ctx->pc = 0x7F258A14u;
    // 7F258A14: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F258A18:
    ctx->pc = 0x7F258A18u;
    // 7F258A18: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258A1C:
    ctx->pc = 0x7F258A1Cu;
    // 7F258A1C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F258A20:
    ctx->pc = 0x7F258A20u;
    // 7F258A20: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F258A24:
    ctx->pc = 0x7F258A24u;
    // 7F258A24: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F258A28:
    ctx->pc = 0x7F258A28u;
    // 7F258A28: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258A2C:
    ctx->pc = 0x7F258A2Cu;
    // 7F258A2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258A30:
    ctx->pc = 0x7F258A30u;
    ctx->downcount -= 4;
    // 7F258A30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258A34:
    ctx->pc = 0x7F258A34u;
    // 7F258A34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258A38:
    ctx->pc = 0x7F258A38u;
    // 7F258A38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258A3C:
    ctx->pc = 0x7F258A3Cu;
    // 7F258A3C: bl      0x7F258A0C
    {
            ctx->lr = 0x7F258A40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258A0Cu;
                return;
            }
            goto label_7F258A0C;
    }

label_7F258A40:
    ctx->pc = 0x7F258A40u;
    ctx->downcount -= 31;
    // 7F258A40: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F258A44:
    ctx->pc = 0x7F258A44u;
    // 7F258A44: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258A48:
    ctx->pc = 0x7F258A48u;
    // 7F258A48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258A4C:
    ctx->pc = 0x7F258A4Cu;
    // 7F258A4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258A50:
    ctx->pc = 0x7F258A50u;
    // 7F258A50: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258A54:
    ctx->pc = 0x7F258A54u;
    // 7F258A54: lfd     f2, 22128(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258A54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22128);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258A58:
    ctx->pc = 0x7F258A58u;
    // 7F258A58: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258A5C:
    ctx->pc = 0x7F258A5Cu;
    // 7F258A5C: lfs     f0, 22120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258A5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258A60:
    ctx->pc = 0x7F258A60u;
    // 7F258A60: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F258A60u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F258A64:
    ctx->pc = 0x7F258A64u;
    // 7F258A64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258A68:
    ctx->pc = 0x7F258A68u;
    // 7F258A68: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258A68u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F258A6C:
    ctx->pc = 0x7F258A6Cu;
    // 7F258A6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258A70:
    ctx->pc = 0x7F258A70u;
    // 7F258A70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258A74:
    ctx->pc = 0x7F258A74u;
    // 7F258A74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258A78:
    ctx->pc = 0x7F258A78u;
    ctx->downcount -= 4;
    // 7F258A78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258A7C:
    ctx->pc = 0x7F258A7Cu;
    // 7F258A7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258A80:
    ctx->pc = 0x7F258A80u;
    // 7F258A80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258A84:
    ctx->pc = 0x7F258A84u;
    // 7F258A84: bl      0x7F258A0C
    {
            ctx->lr = 0x7F258A88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258A0Cu;
                return;
            }
            goto label_7F258A0C;
    }

label_7F258A88:
    ctx->pc = 0x7F258A88u;
    ctx->downcount -= 35;
    // 7F258A88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F258A8C:
    ctx->pc = 0x7F258A8Cu;
    // 7F258A8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258A90:
    ctx->pc = 0x7F258A90u;
    // 7F258A90: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258A94:
    ctx->pc = 0x7F258A94u;
    // 7F258A94: addi    r5, r4, 22128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22128);

label_7F258A98:
    ctx->pc = 0x7F258A98u;
    // 7F258A98: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258A9C:
    ctx->pc = 0x7F258A9Cu;
    // 7F258A9C: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258A9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258AA0:
    ctx->pc = 0x7F258AA0u;
    // 7F258AA0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258AA4:
    ctx->pc = 0x7F258AA4u;
    // 7F258AA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258AA8:
    ctx->pc = 0x7F258AA8u;
    // 7F258AA8: lfs     f1, 22136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258AA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F258AAC:
    ctx->pc = 0x7F258AACu;
    // 7F258AAC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258AB0:
    ctx->pc = 0x7F258AB0u;
    // 7F258AB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258AB4:
    ctx->pc = 0x7F258AB4u;
    // 7F258AB4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F258AB4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F258AB8:
    ctx->pc = 0x7F258AB8u;
    // 7F258AB8: lfs     f0, 22048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258AB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258ABC:
    ctx->pc = 0x7F258ABCu;
    // 7F258ABC: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258ABCu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F258AC0:
    ctx->pc = 0x7F258AC0u;
    // 7F258AC0: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258AC0u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F258AC4:
    ctx->pc = 0x7F258AC4u;
    // 7F258AC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258AC8:
    ctx->pc = 0x7F258AC8u;
    // 7F258AC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258ACC:
    ctx->pc = 0x7F258ACCu;
    // 7F258ACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258AD0:
    ctx->pc = 0x7F258AD0u;
    ctx->downcount -= 18;
    // 7F258AD0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258AD4:
    ctx->pc = 0x7F258AD4u;
    // 7F258AD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258AD8:
    ctx->pc = 0x7F258AD8u;
    // 7F258AD8: lis     r4, 202
    ctx->gpr[4] = ((u32)(s32)(202) << 16);

label_7F258ADC:
    ctx->pc = 0x7F258ADCu;
    // 7F258ADC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258AE0:
    ctx->pc = 0x7F258AE0u;
    // 7F258AE0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F258AE4:
    ctx->pc = 0x7F258AE4u;
    // 7F258AE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258AE8:
    ctx->pc = 0x7F258AE8u;
    // 7F258AE8: addi    r3, r4, 30525
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(30525);

label_7F258AEC:
    ctx->pc = 0x7F258AECu;
    // 7F258AEC: bl      0x7F3B6420
    {
            ctx->lr = 0x7F258AF0u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F258AF0:
    ctx->pc = 0x7F258AF0u;
    ctx->downcount -= 8;
    // 7F258AF0: stw     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258AF4:
    ctx->pc = 0x7F258AF4u;
    // 7F258AF4: lis     r4, 75
    ctx->gpr[4] = ((u32)(s32)(75) << 16);

label_7F258AF8:
    ctx->pc = 0x7F258AF8u;
    // 7F258AF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258AFC:
    ctx->pc = 0x7F258AFCu;
    // 7F258AFC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F258B00:
    ctx->pc = 0x7F258B00u;
    // 7F258B00: addi    r3, r4, 2
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2);

label_7F258B04:
    ctx->pc = 0x7F258B04u;
    // 7F258B04: lwz     r4, 440(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(440);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258B08:
    ctx->pc = 0x7F258B08u;
    // 7F258B08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F258B0C:
    ctx->pc = 0x7F258B0Cu;
    // 7F258B0C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F258B10u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F258B10:
    ctx->pc = 0x7F258B10u;
    ctx->downcount -= 3;
    // 7F258B10: or.   r31, r3, r3
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

label_7F258B14:
    ctx->pc = 0x7F258B14u;
    // 7F258B14: stw     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258B18:
    ctx->pc = 0x7F258B18u;
    // 7F258B18: bc    4, 2, 0x7F258B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258B2C;
        }
    }

label_7F258B1C:
    ctx->pc = 0x7F258B1Cu;
    ctx->downcount -= 4;
    // 7F258B1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F258B20:
    ctx->pc = 0x7F258B20u;
    // 7F258B20: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F258B24:
    ctx->pc = 0x7F258B24u;
    // 7F258B24: stw     r0, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258B28:
    ctx->pc = 0x7F258B28u;
    // 7F258B28: b       0x7F258B5C
    {
            goto label_7F258B5C;
    }

label_7F258B2C:
    ctx->pc = 0x7F258B2Cu;
    ctx->downcount -= 4;
    // 7F258B2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F258B30:
    ctx->pc = 0x7F258B30u;
    // 7F258B30: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F258B34:
    ctx->pc = 0x7F258B34u;
    // 7F258B34: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F258B38:
    ctx->pc = 0x7F258B38u;
    // 7F258B38: bl      0x7F258588
    {
            ctx->lr = 0x7F258B3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258588u;
                return;
            }
            goto label_7F258588;
    }

label_7F258B3C:
    ctx->pc = 0x7F258B3Cu;
    ctx->downcount -= 2;
    // 7F258B3C: cmpwi   r3, 0
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

label_7F258B40:
    ctx->pc = 0x7F258B40u;
    // 7F258B40: bc    4, 0, 0x7F258B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258B4C;
        }
    }

label_7F258B44:
    ctx->pc = 0x7F258B44u;
    ctx->downcount -= 2;
    // 7F258B44: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F258B48:
    ctx->pc = 0x7F258B48u;
    // 7F258B48: b       0x7F258B5C
    {
            goto label_7F258B5C;
    }

label_7F258B4C:
    ctx->pc = 0x7F258B4Cu;
    ctx->downcount -= 4;
    // 7F258B4C: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258B50:
    ctx->pc = 0x7F258B50u;
    // 7F258B50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F258B54:
    ctx->pc = 0x7F258B54u;
    // 7F258B54: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F258B58:
    ctx->pc = 0x7F258B58u;
    // 7F258B58: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258B5C:
    ctx->pc = 0x7F258B5Cu;
    ctx->downcount -= 16;
    // 7F258B5C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F258B60:
    ctx->pc = 0x7F258B60u;
    // 7F258B60: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258B64:
    ctx->pc = 0x7F258B64u;
    // 7F258B64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258B68:
    ctx->pc = 0x7F258B68u;
    // 7F258B68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F258B6C:
    ctx->pc = 0x7F258B6Cu;
    // 7F258B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258B70:
    ctx->pc = 0x7F258B70u;
    ctx->downcount -= 24;
    // 7F258B70: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258B74:
    ctx->pc = 0x7F258B74u;
    // 7F258B74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258B78:
    ctx->pc = 0x7F258B78u;
    // 7F258B78: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258B7C:
    ctx->pc = 0x7F258B7Cu;
    // 7F258B7C: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F258B80:
    ctx->pc = 0x7F258B80u;
    // 7F258B80: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258B80u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F258B84:
    ctx->pc = 0x7F258B84u;
    // 7F258B84: stmw     r24, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F258B88:
    ctx->pc = 0x7F258B88u;
    // 7F258B88: or.   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F258B8C:
    ctx->pc = 0x7F258B8Cu;
    // 7F258B8C: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F258B90:
    ctx->pc = 0x7F258B90u;
    // 7F258B90: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F258B94:
    ctx->pc = 0x7F258B94u;
    // 7F258B94: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F258B98:
    ctx->pc = 0x7F258B98u;
    // 7F258B98: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F258B9C:
    ctx->pc = 0x7F258B9Cu;
    // 7F258B9C: or   r30, r9, r9
    {
        ctx->gpr[30] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F258BA0:
    ctx->pc = 0x7F258BA0u;
    // 7F258BA0: or   r29, r10, r10
    {
        ctx->gpr[29] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F258BA4:
    ctx->pc = 0x7F258BA4u;
    // 7F258BA4: bc    12, 1, 0x7F258BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F258BB0;
        }
    }

label_7F258BA8:
    ctx->pc = 0x7F258BA8u;
    ctx->downcount -= 2;
    // 7F258BA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F258BAC:
    ctx->pc = 0x7F258BACu;
    // 7F258BAC: b       0x7F258CBC
    {
            goto label_7F258CBC;
    }

label_7F258BB0:
    ctx->pc = 0x7F258BB0u;
    ctx->downcount -= 5;
    // 7F258BB0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F258BB4:
    ctx->pc = 0x7F258BB4u;
    // 7F258BB4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F258BB8:
    ctx->pc = 0x7F258BB8u;
    // 7F258BB8: li      r5, 480
    ctx->gpr[5] = (u32)(s32)(480);

label_7F258BBC:
    ctx->pc = 0x7F258BBCu;
    // 7F258BBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F258BC0:
    ctx->pc = 0x7F258BC0u;
    // 7F258BC0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F258BC4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F258BC4:
    ctx->pc = 0x7F258BC4u;
    ctx->downcount -= 2;
    // 7F258BC4: or.   r31, r3, r3
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

label_7F258BC8:
    ctx->pc = 0x7F258BC8u;
    // 7F258BC8: bc    12, 2, 0x7F258CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F258CB8;
        }
    }

label_7F258BCC:
    ctx->pc = 0x7F258BCCu;
    ctx->downcount -= 5;
    // 7F258BCC: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F258BD0:
    ctx->pc = 0x7F258BD0u;
    // 7F258BD0: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F258BD4:
    ctx->pc = 0x7F258BD4u;
    // 7F258BD4: addi    r4, r4, -31476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31476);

label_7F258BD8:
    ctx->pc = 0x7F258BD8u;
    // 7F258BD8: addi    r5, r5, -31436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31436);

label_7F258BDC:
    ctx->pc = 0x7F258BDCu;
    // 7F258BDC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F258BE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F258BE0:
    ctx->pc = 0x7F258BE0u;
    ctx->downcount -= 15;
    // 7F258BE0: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258BE4:
    ctx->pc = 0x7F258BE4u;
    // 7F258BE4: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F258BE8:
    ctx->pc = 0x7F258BE8u;
    // 7F258BE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F258BEC:
    ctx->pc = 0x7F258BECu;
    // 7F258BEC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F258BF0:
    ctx->pc = 0x7F258BF0u;
    // 7F258BF0: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F258BF4:
    ctx->pc = 0x7F258BF4u;
    // 7F258BF4: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F258BF8:
    ctx->pc = 0x7F258BF8u;
    // 7F258BF8: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258BFC:
    ctx->pc = 0x7F258BFCu;
    // 7F258BFC: addi    r5, r31, 56
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(56);

label_7F258C00:
    ctx->pc = 0x7F258C00u;
    // 7F258C00: addi    r4, r25, -4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(-4);

label_7F258C04:
    ctx->pc = 0x7F258C04u;
    // 7F258C04: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F258C08:
    ctx->pc = 0x7F258C08u;
    // 7F258C08: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F258C0C:
    ctx->pc = 0x7F258C0Cu;
    // 7F258C0C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F258C10:
    ctx->pc = 0x7F258C10u;
    // 7F258C10: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258C14:
    ctx->pc = 0x7F258C14u;
    // 7F258C14: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F258C18:
    loop_7F258C18(ctx);
    if (ctx->pc == 0x7F258C2Cu) goto label_7F258C2C;
    return;
label_7F258C1C:
    ctx->pc = 0x7F258C1Cu;
    // 7F258C1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F258C20:
    ctx->pc = 0x7F258C20u;
    // 7F258C20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258C24:
    ctx->pc = 0x7F258C24u;
    // 7F258C24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F258C28:
    // 7F258C28: bc    16, 0, 0x7F258C18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258C18u;
                return;
            }
            goto label_7F258C18;
        }
    }

label_7F258C2C:
    ctx->pc = 0x7F258C2Cu;
    ctx->downcount -= 29;
    // 7F258C2C: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258C30:
    ctx->pc = 0x7F258C30u;
    // 7F258C30: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F258C30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F258C34:
    ctx->pc = 0x7F258C34u;
    // 7F258C34: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258C38:
    ctx->pc = 0x7F258C38u;
    // 7F258C38: lis     r3, 32549
    ctx->gpr[3] = ((u32)(s32)(32549) << 16);

label_7F258C3C:
    ctx->pc = 0x7F258C3Cu;
    // 7F258C3C: addi    r0, r3, 32516
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32516);

label_7F258C40:
    ctx->pc = 0x7F258C40u;
    // 7F258C40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F258C44:
    ctx->pc = 0x7F258C44u;
    // 7F258C44: stw     r5, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F258C48:
    ctx->pc = 0x7F258C48u;
    // 7F258C48: stw     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258C4C:
    ctx->pc = 0x7F258C4Cu;
    // 7F258C4C: lwz     r4, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258C50:
    ctx->pc = 0x7F258C50u;
    // 7F258C50: lwz     r5, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258C54:
    ctx->pc = 0x7F258C54u;
    // 7F258C54: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258C54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F258C58:
    ctx->pc = 0x7F258C58u;
    // 7F258C58: stw     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258C5C:
    ctx->pc = 0x7F258C5Cu;
    // 7F258C5C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258C60:
    ctx->pc = 0x7F258C60u;
    // 7F258C60: stw     r5, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F258C64:
    ctx->pc = 0x7F258C64u;
    // 7F258C64: lwz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F258C68:
    ctx->pc = 0x7F258C68u;
    // 7F258C68: lwz     r5, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258C6C:
    ctx->pc = 0x7F258C6Cu;
    // 7F258C6C: stw     r6, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F258C70:
    ctx->pc = 0x7F258C70u;
    // 7F258C70: stw     r5, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F258C74:
    ctx->pc = 0x7F258C74u;
    // 7F258C74: lwz     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F258C78:
    ctx->pc = 0x7F258C78u;
    // 7F258C78: lwz     r5, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F258C7C:
    ctx->pc = 0x7F258C7Cu;
    // 7F258C7C: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F258C80:
    ctx->pc = 0x7F258C80u;
    // 7F258C80: stw     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F258C84:
    ctx->pc = 0x7F258C84u;
    // 7F258C84: stw     r24, 440(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F258C88:
    ctx->pc = 0x7F258C88u;
    // 7F258C88: stw     r28, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F258C8C:
    ctx->pc = 0x7F258C8Cu;
    // 7F258C8C: stw     r4, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258C90:
    ctx->pc = 0x7F258C90u;
    // 7F258C90: stw     r29, 460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F258C94:
    ctx->pc = 0x7F258C94u;
    // 7F258C94: stw     r30, 456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(456);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F258C98:
    ctx->pc = 0x7F258C98u;
    // 7F258C98: stw     r0, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258C9C:
    ctx->pc = 0x7F258C9Cu;
    // 7F258C9C: bl      0x7F258AD0
    {
            ctx->lr = 0x7F258CA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258AD0u;
                return;
            }
            goto label_7F258AD0;
    }

label_7F258CA0:
    ctx->pc = 0x7F258CA0u;
    ctx->downcount -= 2;
    // 7F258CA0: cmpwi   r3, 0
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

label_7F258CA4:
    ctx->pc = 0x7F258CA4u;
    // 7F258CA4: bc    4, 0, 0x7F258CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258CB8;
        }
    }

label_7F258CA8:
    ctx->pc = 0x7F258CA8u;
    ctx->downcount -= 2;
    // 7F258CA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F258CAC:
    ctx->pc = 0x7F258CACu;
    // 7F258CAC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F258CB0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F258CB0:
    ctx->pc = 0x7F258CB0u;
    ctx->downcount -= 2;
    // 7F258CB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F258CB4:
    ctx->pc = 0x7F258CB4u;
    // 7F258CB4: b       0x7F258CBC
    {
            goto label_7F258CBC;
    }

label_7F258CB8:
    ctx->pc = 0x7F258CB8u;
    ctx->downcount -= 1;
    // 7F258CB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F258CBC:
    ctx->pc = 0x7F258CBCu;
    ctx->downcount -= 17;
    // 7F258CBC: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258CBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258CC0:
    ctx->pc = 0x7F258CC0u;
    // 7F258CC0: lmw     r24, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F258CC4:
    ctx->pc = 0x7F258CC4u;
    // 7F258CC4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258CC8:
    ctx->pc = 0x7F258CC8u;
    // 7F258CC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258CCC:
    ctx->pc = 0x7F258CCCu;
    // 7F258CCC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F258CD0:
    ctx->pc = 0x7F258CD0u;
    // 7F258CD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258CD4:
    ctx->pc = 0x7F258CD4u;
    ctx->downcount -= 27;
    // 7F258CD4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258CD8:
    ctx->pc = 0x7F258CD8u;
    // 7F258CD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258CDC:
    ctx->pc = 0x7F258CDCu;
    // 7F258CDC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258CE0:
    ctx->pc = 0x7F258CE0u;
    // 7F258CE0: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258CE4:
    ctx->pc = 0x7F258CE4u;
    // 7F258CE4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F258CE8:
    ctx->pc = 0x7F258CE8u;
    // 7F258CE8: addi    r5, r1, 76
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(76);

label_7F258CEC:
    ctx->pc = 0x7F258CECu;
    // 7F258CEC: stmw     r30, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F258CF0:
    ctx->pc = 0x7F258CF0u;
    // 7F258CF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258CF4:
    ctx->pc = 0x7F258CF4u;
    // 7F258CF4: addi    r3, r4, 22144
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(22144);

label_7F258CF8:
    ctx->pc = 0x7F258CF8u;
    // 7F258CF8: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258CFC:
    ctx->pc = 0x7F258CFCu;
    // 7F258CFC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258D00:
    ctx->pc = 0x7F258D00u;
    // 7F258D00: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258D04:
    ctx->pc = 0x7F258D04u;
    // 7F258D04: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258D08:
    ctx->pc = 0x7F258D08u;
    // 7F258D08: lwz     r30, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F258D0C:
    ctx->pc = 0x7F258D0Cu;
    // 7F258D0C: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F258D10:
    ctx->pc = 0x7F258D10u;
    // 7F258D10: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F258D14:
    loop_7F258D14(ctx);
    if (ctx->pc == 0x7F258D28u) goto label_7F258D28;
    return;
label_7F258D18:
    ctx->pc = 0x7F258D18u;
    // 7F258D18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F258D1C:
    ctx->pc = 0x7F258D1Cu;
    // 7F258D1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258D20:
    ctx->pc = 0x7F258D20u;
    // 7F258D20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F258D24:
    // 7F258D24: bc    16, 0, 0x7F258D14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258D14u;
                return;
            }
            goto label_7F258D14;
        }
    }

label_7F258D28:
    ctx->pc = 0x7F258D28u;
    ctx->downcount -= 4;
    // 7F258D28: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F258D2C:
    ctx->pc = 0x7F258D2Cu;
    // 7F258D2C: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F258D30:
    ctx->pc = 0x7F258D30u;
    // 7F258D30: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F258D34:
    ctx->pc = 0x7F258D34u;
    // 7F258D34: bl      0x7F3CC430
    {
            ctx->lr = 0x7F258D38u;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F258D38:
    ctx->pc = 0x7F258D38u;
    ctx->downcount -= 4;
    // 7F258D38: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F258D3C:
    ctx->pc = 0x7F258D3Cu;
    // 7F258D3C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F258D40:
    ctx->pc = 0x7F258D40u;
    // 7F258D40: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F258D44:
    ctx->pc = 0x7F258D44u;
    // 7F258D44: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F258D48u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F258D48:
    ctx->pc = 0x7F258D48u;
    ctx->downcount -= 2;
    // 7F258D48: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258D4C:
    ctx->pc = 0x7F258D4Cu;
    // 7F258D4C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F258D50u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F258D50:
    ctx->pc = 0x7F258D50u;
    ctx->downcount -= 4;
    // 7F258D50: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F258D54:
    ctx->pc = 0x7F258D54u;
    // 7F258D54: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258D58:
    ctx->pc = 0x7F258D58u;
    // 7F258D58: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F258D5C:
    ctx->pc = 0x7F258D5Cu;
    // 7F258D5C: bl      0x80025A80
    {
            ctx->lr = 0x7F258D60u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F258D60:
    ctx->pc = 0x7F258D60u;
    ctx->downcount -= 3;
    // 7F258D60: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F258D64:
    ctx->pc = 0x7F258D64u;
    // 7F258D64: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F258D68:
    ctx->pc = 0x7F258D68u;
    // 7F258D68: bl      0x7F3CC430
    {
            ctx->lr = 0x7F258D6Cu;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F258D6C:
    ctx->pc = 0x7F258D6Cu;
    ctx->downcount -= 2;
    // 7F258D6C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F258D70:
    ctx->pc = 0x7F258D70u;
    // 7F258D70: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F258D74u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F258D74:
    ctx->pc = 0x7F258D74u;
    ctx->downcount -= 3;
    // 7F258D74: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F258D78:
    ctx->pc = 0x7F258D78u;
    // 7F258D78: addi    r3, r3, 13056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13056);

label_7F258D7C:
    ctx->pc = 0x7F258D7Cu;
    // 7F258D7C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F258D80u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F258D80:
    ctx->pc = 0x7F258D80u;
    ctx->downcount -= 2;
    // 7F258D80: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258D84:
    ctx->pc = 0x7F258D84u;
    // 7F258D84: bl      0x7F3B2F18
    {
            ctx->lr = 0x7F258D88u;
            ctx->pc = 0x7F3B2F18u;
            return;
    }

label_7F258D88:
    ctx->pc = 0x7F258D88u;
    ctx->downcount -= 5;
    // 7F258D88: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F258D8C:
    ctx->pc = 0x7F258D8Cu;
    // 7F258D8C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258D90:
    ctx->pc = 0x7F258D90u;
    // 7F258D90: addi    r4, r4, -5848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5848);

label_7F258D94:
    ctx->pc = 0x7F258D94u;
    // 7F258D94: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258D98:
    ctx->pc = 0x7F258D98u;
    // 7F258D98: bl      0x7F258DB0
    {
            ctx->lr = 0x7F258D9Cu;
            goto label_7F258DB0;
    }

label_7F258D9C:
    ctx->pc = 0x7F258D9Cu;
    ctx->downcount -= 16;
    // 7F258D9C: lmw     r30, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F258DA0:
    ctx->pc = 0x7F258DA0u;
    // 7F258DA0: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258DA4:
    ctx->pc = 0x7F258DA4u;
    // 7F258DA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258DA8:
    ctx->pc = 0x7F258DA8u;
    // 7F258DA8: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F258DAC:
    ctx->pc = 0x7F258DACu;
    // 7F258DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258DB0:
    ctx->pc = 0x7F258DB0u;
    ctx->downcount -= 7;
    // 7F258DB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258DB4:
    ctx->pc = 0x7F258DB4u;
    // 7F258DB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258DB8:
    ctx->pc = 0x7F258DB8u;
    // 7F258DB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258DBC:
    ctx->pc = 0x7F258DBCu;
    // 7F258DBC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F258DC0:
    ctx->pc = 0x7F258DC0u;
    // 7F258DC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258DC4:
    ctx->pc = 0x7F258DC4u;
    // 7F258DC4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F258DC8:
    ctx->pc = 0x7F258DC8u;
    // 7F258DC8: bl      0x7F01B234
    {
            ctx->lr = 0x7F258DCCu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F258DCC:
    ctx->pc = 0x7F258DCCu;
    ctx->downcount -= 7;
    // 7F258DCC: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F258DD0:
    ctx->pc = 0x7F258DD0u;
    // 7F258DD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258DD4:
    ctx->pc = 0x7F258DD4u;
    // 7F258DD4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F258DD8:
    ctx->pc = 0x7F258DD8u;
    // 7F258DD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258DDC:
    ctx->pc = 0x7F258DDCu;
    // 7F258DDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258DE0:
    ctx->pc = 0x7F258DE0u;
    // 7F258DE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258DE4:
    ctx->pc = 0x7F258DE4u;
    ctx->downcount -= 24;
    // 7F258DE4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258DE8:
    ctx->pc = 0x7F258DE8u;
    // 7F258DE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258DEC:
    ctx->pc = 0x7F258DECu;
    // 7F258DEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258DF0:
    ctx->pc = 0x7F258DF0u;
    // 7F258DF0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258DF4:
    ctx->pc = 0x7F258DF4u;
    // 7F258DF4: addi    r5, r4, 22156
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F258DF8:
    ctx->pc = 0x7F258DF8u;
    // 7F258DF8: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258DF8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F258DFC:
    ctx->pc = 0x7F258DFCu;
    // 7F258DFC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F258E00:
    ctx->pc = 0x7F258E00u;
    // 7F258E00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258E04:
    ctx->pc = 0x7F258E04u;
    // 7F258E04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258E08:
    ctx->pc = 0x7F258E08u;
    // 7F258E08: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F258E0C:
    ctx->pc = 0x7F258E0Cu;
    // 7F258E0C: lfs     f6, 22152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258E0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F258E10:
    ctx->pc = 0x7F258E10u;
    // 7F258E10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258E14:
    ctx->pc = 0x7F258E14u;
    // 7F258E14: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258E18:
    ctx->pc = 0x7F258E18u;
    // 7F258E18: addi    r4, r3, 22160
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22160);

label_7F258E1C:
    ctx->pc = 0x7F258E1Cu;
    // 7F258E1C: fmr    f2, f6
    if (!ppc_fp_available_inline(ctx, 0x7F258E1Cu)) return;
    ctx->fpr[2] = ctx->fpr[6];

label_7F258E20:
    ctx->pc = 0x7F258E20u;
    // 7F258E20: lfs     f5, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258E20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F258E24:
    ctx->pc = 0x7F258E24u;
    // 7F258E24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F258E28:
    ctx->pc = 0x7F258E28u;
    // 7F258E28: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258E28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F258E2C:
    ctx->pc = 0x7F258E2Cu;
    // 7F258E2C: add   r3, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F258E30:
    ctx->pc = 0x7F258E30u;
    // 7F258E30: lwz     r6, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F258E34:
    ctx->pc = 0x7F258E34u;
    // 7F258E34: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F258E38:
    ctx->pc = 0x7F258E38u;
    // 7F258E38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F258E3C:
    ctx->pc = 0x7F258E3Cu;
    // 7F258E3C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F258E40:
    ctx->pc = 0x7F258E40u;
    ctx->downcount -= 11;
    // 7F258E40: fmuls   f0, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x7F258E40u)) return;
    ppc_fmuls(ctx, 0, 4, 5);

label_7F258E44:
    // 7F258E44: add   r4, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F258E48:
    ctx->pc = 0x7F258E48u;
    // 7F258E48: fmadds f5, f3, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x7F258E48u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[6], ctx->fpr[5], true, false, false, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_7F258E4C:
    ctx->pc = 0x7F258E4Cu;
    // 7F258E4C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258E4Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F258E50:
    ctx->pc = 0x7F258E50u;
    // 7F258E50: fcmpo   cr0, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x7F258E50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[2], true);

label_7F258E54:
    ctx->pc = 0x7F258E54u;
    // 7F258E54: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258E54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F258E58:
    ctx->pc = 0x7F258E58u;
    // 7F258E58: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258E5C:
    ctx->pc = 0x7F258E5Cu;
    // 7F258E5C: sth     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258E60:
    ctx->pc = 0x7F258E60u;
    // 7F258E60: sth     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F258E64:
    // 7F258E64: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F258E68:
    // 7F258E68: bc    4, 2, 0x7F258E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258E88;
        }
    }

label_7F258E6C:
    ctx->downcount -= 7;
    // 7F258E6C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F258E70:
    // 7F258E70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258E74:
    ctx->pc = 0x7F258E74u;
    // 7F258E74: lfs     f1, 22152(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258E74u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F258E78:
    ctx->pc = 0x7F258E78u;
    // 7F258E78: lfs     f6, 22164(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258E78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F258E7C:
    ctx->pc = 0x7F258E7Cu;
    // 7F258E7C: fsubs   f0, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258E7Cu)) return;
    ppc_fsubs(ctx, 0, 5, 1);

label_7F258E80:
    ctx->pc = 0x7F258E80u;
    // 7F258E80: fsubs   f5, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258E80u)) return;
    ppc_fsubs(ctx, 5, 1, 0);

label_7F258E84:
    // 7F258E84: b       0x7F258EA4
    {
            goto label_7F258EA4;
    }

label_7F258E88:
    ctx->downcount -= 4;
    // 7F258E88: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258E8C:
    ctx->pc = 0x7F258E8Cu;
    // 7F258E8C: lfs     f0, 22168(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258E8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258E90:
    ctx->pc = 0x7F258E90u;
    // 7F258E90: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258E90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_7F258E94:
    // 7F258E94: bc    4, 0, 0x7F258EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258EA4;
        }
    }

label_7F258E98:
    ctx->downcount -= 3;
    // 7F258E98: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F258E9C:
    ctx->pc = 0x7F258E9Cu;
    // 7F258E9C: fneg    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F258E9Cu)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F258EA0:
    ctx->pc = 0x7F258EA0u;
    // 7F258EA0: lfs     f6, 22152(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F258EA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F258EA4:
    ctx->downcount -= 2;
    // 7F258EA4: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_7F258EA8:
    // 7F258EA8: bc    16, 0, 0x7F258E40
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258E40u;
                return;
            }
            goto label_7F258E40;
        }
    }

label_7F258EAC:
    ctx->pc = 0x7F258EACu;
    ctx->downcount -= 20;
    // 7F258EAC: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258EB0:
    ctx->pc = 0x7F258EB0u;
    // 7F258EB0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F258EB4:
    ctx->pc = 0x7F258EB4u;
    // 7F258EB4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F258EB8:
    ctx->pc = 0x7F258EB8u;
    // 7F258EB8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F258EBC:
    ctx->pc = 0x7F258EBCu;
    // 7F258EBC: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F258EC0:
    ctx->pc = 0x7F258EC0u;
    // 7F258EC0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258EC4:
    ctx->pc = 0x7F258EC4u;
    // 7F258EC4: lfd     f1, 22176(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F258EC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258EC8:
    ctx->pc = 0x7F258EC8u;
    // 7F258EC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258ECC:
    ctx->pc = 0x7F258ECCu;
    // 7F258ECC: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F258ED0:
    ctx->pc = 0x7F258ED0u;
    // 7F258ED0: lfs     f3, 22172(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F258ED0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F258ED4:
    ctx->pc = 0x7F258ED4u;
    // 7F258ED4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F258ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F258ED8:
    ctx->pc = 0x7F258ED8u;
    // 7F258ED8: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258ED8u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F258EDC:
    ctx->pc = 0x7F258EDCu;
    // 7F258EDC: lfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258EDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258EE0:
    ctx->pc = 0x7F258EE0u;
    // 7F258EE0: lfs     f1, 22152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258EE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F258EE4:
    ctx->pc = 0x7F258EE4u;
    // 7F258EE4: fmadds f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258EE4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F258EE8:
    ctx->pc = 0x7F258EE8u;
    // 7F258EE8: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258EE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258EEC:
    ctx->pc = 0x7F258EECu;
    // 7F258EEC: lfs     f2, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258EECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F258EF0:
    ctx->pc = 0x7F258EF0u;
    // 7F258EF0: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258EF0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F258EF4:
    ctx->pc = 0x7F258EF4u;
    // 7F258EF4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F258EF8:
    ctx->pc = 0x7F258EF8u;
    // 7F258EF8: bc    4, 2, 0x7F258F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258F28;
        }
    }

label_7F258EFC:
    ctx->pc = 0x7F258EFCu;
    ctx->downcount -= 4;
    // 7F258EFC: fsubs   f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F258EFCu)) return;
    ppc_fsubs(ctx, 0, 2, 1);

label_7F258F00:
    ctx->pc = 0x7F258F00u;
    // 7F258F00: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258F00u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F258F04:
    ctx->pc = 0x7F258F04u;
    // 7F258F04: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258F04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258F08:
    ctx->pc = 0x7F258F08u;
    // 7F258F08: bl      0x800147F8
    {
            ctx->lr = 0x7F258F0Cu;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F258F0C:
    ctx->pc = 0x7F258F0Cu;
    ctx->downcount -= 7;
    // 7F258F0C: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F258F10:
    ctx->pc = 0x7F258F10u;
    // 7F258F10: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F258F14:
    ctx->pc = 0x7F258F14u;
    // 7F258F14: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F258F18:
    ctx->pc = 0x7F258F18u;
    // 7F258F18: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F258F1C:
    ctx->pc = 0x7F258F1Cu;
    // 7F258F1C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F258F20:
    ctx->pc = 0x7F258F20u;
    // 7F258F20: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258F24:
    ctx->pc = 0x7F258F24u;
    // 7F258F24: b       0x7F258F5C
    {
            goto label_7F258F5C;
    }

label_7F258F28:
    ctx->pc = 0x7F258F28u;
    ctx->downcount -= 4;
    // 7F258F28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F258F2C:
    ctx->pc = 0x7F258F2Cu;
    // 7F258F2C: lfs     f0, 22168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F258F2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F258F30:
    ctx->pc = 0x7F258F30u;
    // 7F258F30: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F258F30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F258F34:
    ctx->pc = 0x7F258F34u;
    // 7F258F34: bc    4, 0, 0x7F258F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258F5C;
        }
    }

label_7F258F38:
    ctx->pc = 0x7F258F38u;
    ctx->downcount -= 3;
    // 7F258F38: fneg    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F258F38u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) ^ 0x8000000000000000ull);

label_7F258F3C:
    ctx->pc = 0x7F258F3Cu;
    // 7F258F3C: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F258F3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F258F40:
    ctx->pc = 0x7F258F40u;
    // 7F258F40: bl      0x800147F8
    {
            ctx->lr = 0x7F258F44u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F258F44:
    ctx->pc = 0x7F258F44u;
    ctx->downcount -= 6;
    // 7F258F44: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F258F48:
    ctx->pc = 0x7F258F48u;
    // 7F258F48: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F258F4C:
    ctx->pc = 0x7F258F4Cu;
    // 7F258F4C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F258F50:
    ctx->pc = 0x7F258F50u;
    // 7F258F50: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F258F54:
    ctx->pc = 0x7F258F54u;
    // 7F258F54: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F258F58:
    ctx->pc = 0x7F258F58u;
    // 7F258F58: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258F5C:
    ctx->pc = 0x7F258F5Cu;
    ctx->downcount -= 6;
    // 7F258F5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258F60:
    ctx->pc = 0x7F258F60u;
    // 7F258F60: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F258F64:
    ctx->pc = 0x7F258F64u;
    // 7F258F64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258F68:
    ctx->pc = 0x7F258F68u;
    // 7F258F68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F258F6C:
    ctx->pc = 0x7F258F6Cu;
    // 7F258F6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258F70:
    ctx->pc = 0x7F258F70u;
    ctx->downcount -= 9;
    // 7F258F70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258F74:
    ctx->pc = 0x7F258F74u;
    // 7F258F74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258F78:
    ctx->pc = 0x7F258F78u;
    // 7F258F78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258F7C:
    ctx->pc = 0x7F258F7Cu;
    // 7F258F7C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F258F80:
    ctx->pc = 0x7F258F80u;
    // 7F258F80: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F258F84:
    ctx->pc = 0x7F258F84u;
    // 7F258F84: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258F88:
    ctx->pc = 0x7F258F88u;
    // 7F258F88: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258F8C:
    ctx->pc = 0x7F258F8Cu;
    // 7F258F8C: cmpwi   r0, 0
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

label_7F258F90:
    ctx->pc = 0x7F258F90u;
    // 7F258F90: bc    4, 2, 0x7F258FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F258FA8;
        }
    }

label_7F258F94:
    ctx->pc = 0x7F258F94u;
    ctx->downcount -= 5;
    // 7F258F94: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258F98:
    ctx->pc = 0x7F258F98u;
    // 7F258F98: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258F9C:
    ctx->pc = 0x7F258F9Cu;
    // 7F258F9C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F258FA0:
    ctx->pc = 0x7F258FA0u;
    // 7F258FA0: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258FA4:
    ctx->pc = 0x7F258FA4u;
    // 7F258FA4: b       0x7F258FD4
    {
            goto label_7F258FD4;
    }

label_7F258FA8:
    ctx->pc = 0x7F258FA8u;
    ctx->downcount -= 9;
    // 7F258FA8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258FAC:
    ctx->pc = 0x7F258FACu;
    // 7F258FAC: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258FB0:
    ctx->pc = 0x7F258FB0u;
    // 7F258FB0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F258FB4:
    ctx->pc = 0x7F258FB4u;
    // 7F258FB4: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258FB8:
    ctx->pc = 0x7F258FB8u;
    // 7F258FB8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F258FBC:
    ctx->pc = 0x7F258FBCu;
    // 7F258FBC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258FC0:
    ctx->pc = 0x7F258FC0u;
    // 7F258FC0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F258FC4:
    ctx->pc = 0x7F258FC4u;
    // 7F258FC4: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258FC8:
    ctx->pc = 0x7F258FC8u;
    // 7F258FC8: bl      0x7F258DE4
    {
            ctx->lr = 0x7F258FCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258DE4u;
                return;
            }
            goto label_7F258DE4;
    }

label_7F258FCC:
    ctx->pc = 0x7F258FCCu;
    ctx->downcount -= 2;
    // 7F258FCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F258FD0:
    ctx->pc = 0x7F258FD0u;
    // 7F258FD0: bl      0x7F258CD4
    {
            ctx->lr = 0x7F258FD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258CD4u;
                return;
            }
            goto label_7F258CD4;
    }

label_7F258FD4:
    ctx->pc = 0x7F258FD4u;
    ctx->downcount -= 6;
    // 7F258FD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F258FD8:
    ctx->pc = 0x7F258FD8u;
    // 7F258FD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F258FDC:
    ctx->pc = 0x7F258FDCu;
    // 7F258FDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F258FE0:
    ctx->pc = 0x7F258FE0u;
    // 7F258FE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F258FE4:
    ctx->pc = 0x7F258FE4u;
    // 7F258FE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F258FE8:
    ctx->pc = 0x7F258FE8u;
    ctx->downcount -= 5;
    // 7F258FE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F258FEC:
    ctx->pc = 0x7F258FECu;
    // 7F258FEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F258FF0:
    ctx->pc = 0x7F258FF0u;
    // 7F258FF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F258FF4:
    ctx->pc = 0x7F258FF4u;
    // 7F258FF4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F258FF8:
    ctx->pc = 0x7F258FF8u;
    // 7F258FF8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F258FFCu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F258FFC:
    ctx->pc = 0x7F258FFCu;
    ctx->downcount -= 5;
    // 7F258FFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259000:
    ctx->pc = 0x7F259000u;
    // 7F259000: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259004:
    ctx->pc = 0x7F259004u;
    // 7F259004: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259008:
    ctx->pc = 0x7F259008u;
    // 7F259008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25900C:
    ctx->pc = 0x7F25900Cu;
    ctx->downcount -= 23;
    // 7F25900C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259010:
    ctx->pc = 0x7F259010u;
    // 7F259010: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259014:
    ctx->pc = 0x7F259014u;
    // 7F259014: lis     r6, 19
    ctx->gpr[6] = ((u32)(s32)(19) << 16);

label_7F259018:
    ctx->pc = 0x7F259018u;
    // 7F259018: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25901C:
    ctx->pc = 0x7F25901Cu;
    // 7F25901C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259020:
    ctx->pc = 0x7F259020u;
    // 7F259020: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259024:
    ctx->pc = 0x7F259024u;
    // 7F259024: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F259028:
    ctx->pc = 0x7F259028u;
    // 7F259028: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25902C:
    ctx->pc = 0x7F25902Cu;
    // 7F25902C: addi    r3, r6, 1
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(1);

label_7F259030:
    ctx->pc = 0x7F259030u;
    // 7F259030: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F259034:
    ctx->pc = 0x7F259034u;
    // 7F259034: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F259038:
    ctx->pc = 0x7F259038u;
    // 7F259038: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25903C:
    ctx->pc = 0x7F25903Cu;
    // 7F25903C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F259040u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F259040:
    ctx->pc = 0x7F259040u;
    ctx->downcount -= 3;
    // 7F259040: or.   r31, r3, r3
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

label_7F259044:
    ctx->pc = 0x7F259044u;
    // 7F259044: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259048:
    ctx->pc = 0x7F259048u;
    // 7F259048: bc    4, 2, 0x7F259054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259054;
        }
    }

label_7F25904C:
    ctx->pc = 0x7F25904Cu;
    ctx->downcount -= 2;
    // 7F25904C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259050:
    ctx->pc = 0x7F259050u;
    // 7F259050: b       0x7F25919C
    {
            goto label_7F25919C;
    }

label_7F259054:
    ctx->pc = 0x7F259054u;
    ctx->downcount -= 3;
    // 7F259054: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F259058:
    ctx->pc = 0x7F259058u;
    // 7F259058: addi    r3, r3, -23184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23184);

label_7F25905C:
    ctx->pc = 0x7F25905Cu;
    // 7F25905C: bl      0x7F3B6420
    {
            ctx->lr = 0x7F259060u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F259060:
    ctx->pc = 0x7F259060u;
    ctx->downcount -= 5;
    // 7F259060: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259064:
    ctx->pc = 0x7F259064u;
    // 7F259064: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F259068:
    ctx->pc = 0x7F259068u;
    // 7F259068: stw     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25906C:
    ctx->pc = 0x7F25906Cu;
    // 7F25906C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F259070:
    ctx->pc = 0x7F259070u;
    // 7F259070: bl      0x7F3C2534
    {
            ctx->lr = 0x7F259074u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F259074:
    ctx->pc = 0x7F259074u;
    ctx->downcount -= 8;
    // 7F259074: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F259078:
    ctx->pc = 0x7F259078u;
    // 7F259078: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F25907C:
    ctx->pc = 0x7F25907Cu;
    // 7F25907C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259080:
    ctx->pc = 0x7F259080u;
    // 7F259080: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F259084:
    ctx->pc = 0x7F259084u;
    // 7F259084: addi    r27, r3, 13072
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(13072);

label_7F259088:
    ctx->pc = 0x7F259088u;
    // 7F259088: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25908C:
    ctx->pc = 0x7F25908Cu;
    // 7F25908C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259090:
    ctx->pc = 0x7F259090u;
    // 7F259090: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F259094:
    ctx->downcount -= 9;
    // 7F259094: add   r3, r31, r7
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F259098:
    // 7F259098: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F25909C:
    ctx->pc = 0x7F25909Cu;
    // 7F25909C: lwz     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2590A0:
    // 7F2590A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2590A4:
    ctx->pc = 0x7F2590A4u;
    // 7F2590A4: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2590A8:
    // 7F2590A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2590AC:
    // 7F2590AC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2590B0:
    ctx->pc = 0x7F2590B0u;
    // 7F2590B0: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F2590B4:
    ctx->downcount -= 2;
    // 7F2590B4: rlwinm. r6, r4, 0, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2590B8:
    // 7F2590B8: bc    12, 2, 0x7F2590DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2590DC;
        }
    }

label_7F2590BC:
    ctx->downcount -= 8;
    // 7F2590BC: add   r11, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F2590C0:
    // 7F2590C0: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F2590C4:
    ctx->pc = 0x7F2590C4u;
    // 7F2590C4: sth     r6, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2590C8:
    // 7F2590C8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2590CC:
    // 7F2590CC: li      r6, 4095
    ctx->gpr[6] = (u32)(s32)(4095);

label_7F2590D0:
    ctx->pc = 0x7F2590D0u;
    // 7F2590D0: sth     r10, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2590D4:
    ctx->pc = 0x7F2590D4u;
    // 7F2590D4: sth     r6, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2590D8:
    // 7F2590D8: b       0x7F2590F8
    {
            goto label_7F2590F8;
    }

label_7F2590DC:
    ctx->downcount -= 7;
    // 7F2590DC: add   r11, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F2590E0:
    // 7F2590E0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2590E4:
    ctx->pc = 0x7F2590E4u;
    // 7F2590E4: sth     r10, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2590E8:
    // 7F2590E8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F2590EC:
    // 7F2590EC: addi    r6, r6, -28673
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28673);

label_7F2590F0:
    ctx->pc = 0x7F2590F0u;
    // 7F2590F0: sth     r10, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2590F4:
    ctx->pc = 0x7F2590F4u;
    // 7F2590F4: sth     r6, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2590F8:
    ctx->downcount -= 23;
    // 7F2590F8: add   r25, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F2590FC:
    // 7F2590FC: li      r26, 32
    ctx->gpr[26] = (u32)(s32)(32);

label_7F259100:
    ctx->pc = 0x7F259100u;
    // 7F259100: stb     r26, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_7F259104:
    // 7F259104: li      r10, 96
    ctx->gpr[10] = (u32)(s32)(96);

label_7F259108:
    // 7F259108: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F25910C:
    // 7F25910C: add   r12, r27, r8
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_7F259110:
    ctx->pc = 0x7F259110u;
    // 7F259110: stb     r26, 1(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_7F259114:
    // 7F259114: add   r11, r3, r8
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F259118:
    // 7F259118: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F25911C:
    // 7F25911C: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F259120:
    ctx->pc = 0x7F259120u;
    // 7F259120: stb     r26, 2(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_7F259124:
    // 7F259124: addi    r9, r9, 12
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(12);

label_7F259128:
    ctx->pc = 0x7F259128u;
    // 7F259128: stb     r10, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F25912C:
    ctx->pc = 0x7F25912Cu;
    // 7F25912C: sth     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F259130:
    ctx->pc = 0x7F259130u;
    // 7F259130: lwz     r10, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F259134:
    ctx->pc = 0x7F259134u;
    // 7F259134: lwz     r6, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259138:
    ctx->pc = 0x7F259138u;
    // 7F259138: stw     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F25913C:
    ctx->pc = 0x7F25913Cu;
    // 7F25913C: stw     r6, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259140:
    ctx->pc = 0x7F259140u;
    // 7F259140: lwz     r10, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F259144:
    ctx->pc = 0x7F259144u;
    // 7F259144: lwz     r6, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259148:
    ctx->pc = 0x7F259148u;
    // 7F259148: stw     r10, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F25914C:
    ctx->pc = 0x7F25914Cu;
    // 7F25914C: stw     r6, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259150:
    // 7F259150: bc    16, 0, 0x7F2590B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2590B4u;
                return;
            }
            goto label_7F2590B4;
        }
    }

label_7F259154:
    ctx->downcount -= 4;
    // 7F259154: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F259158:
    // 7F259158: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F25915C:
    // 7F25915C: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259160:
    // 7F259160: bc    12, 0, 0x7F259094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259094u;
                return;
            }
            goto label_7F259094;
        }
    }

label_7F259164:
    ctx->pc = 0x7F259164u;
    ctx->downcount -= 10;
    // 7F259164: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259168:
    ctx->pc = 0x7F259168u;
    // 7F259168: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F25916C:
    ctx->pc = 0x7F25916Cu;
    // 7F25916C: addi    r4, r3, 22168
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22168);

label_7F259170:
    ctx->pc = 0x7F259170u;
    // 7F259170: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F259174:
    ctx->pc = 0x7F259174u;
    // 7F259174: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F259174u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F259178:
    ctx->pc = 0x7F259178u;
    // 7F259178: stfs     f0, 64(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F259178u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25917C:
    ctx->pc = 0x7F25917Cu;
    // 7F25917C: stw     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259180:
    ctx->pc = 0x7F259180u;
    // 7F259180: stw     r29, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F259184:
    ctx->pc = 0x7F259184u;
    // 7F259184: stw     r30, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F259188:
    ctx->pc = 0x7F259188u;
    // 7F259188: bl      0x7F258CD4
    {
            ctx->lr = 0x7F25918Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258CD4u;
                return;
            }
            goto label_7F258CD4;
    }

label_7F25918C:
    ctx->pc = 0x7F25918Cu;
    ctx->downcount -= 4;
    // 7F25918C: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259190:
    ctx->pc = 0x7F259190u;
    // 7F259190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F259194:
    ctx->pc = 0x7F259194u;
    // 7F259194: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F259198:
    ctx->pc = 0x7F259198u;
    // 7F259198: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25919C:
    ctx->pc = 0x7F25919Cu;
    ctx->downcount -= 16;
    // 7F25919C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2591A0:
    ctx->pc = 0x7F2591A0u;
    // 7F2591A0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2591A4:
    ctx->pc = 0x7F2591A4u;
    // 7F2591A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2591A8:
    ctx->pc = 0x7F2591A8u;
    // 7F2591A8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2591AC:
    ctx->pc = 0x7F2591ACu;
    // 7F2591AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F2591B0:
    ctx->pc = 0x7F2591B0u;
    ctx->downcount -= 21;
    // 7F2591B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2591B4:
    ctx->pc = 0x7F2591B4u;
    // 7F2591B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2591B8:
    ctx->pc = 0x7F2591B8u;
    // 7F2591B8: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F2591BC:
    ctx->pc = 0x7F2591BCu;
    // 7F2591BC: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F2591C0:
    ctx->pc = 0x7F2591C0u;
    // 7F2591C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2591C4:
    ctx->pc = 0x7F2591C4u;
    // 7F2591C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2591C8:
    ctx->pc = 0x7F2591C8u;
    // 7F2591C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2591CC:
    ctx->pc = 0x7F2591CCu;
    // 7F2591CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2591D0:
    ctx->pc = 0x7F2591D0u;
    // 7F2591D0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2591D4:
    ctx->pc = 0x7F2591D4u;
    // 7F2591D4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2591D8:
    ctx->pc = 0x7F2591D8u;
    // 7F2591D8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2591DCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2591DC:
    ctx->pc = 0x7F2591DCu;
    ctx->downcount -= 2;
    // 7F2591DC: or.   r31, r3, r3
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

label_7F2591E0:
    ctx->pc = 0x7F2591E0u;
    // 7F2591E0: bc    12, 2, 0x7F259248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259248;
        }
    }

label_7F2591E4:
    ctx->pc = 0x7F2591E4u;
    ctx->downcount -= 5;
    // 7F2591E4: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F2591E8:
    ctx->pc = 0x7F2591E8u;
    // 7F2591E8: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F2591EC:
    ctx->pc = 0x7F2591ECu;
    // 7F2591EC: addi    r4, r4, -28816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28816);

label_7F2591F0:
    ctx->pc = 0x7F2591F0u;
    // 7F2591F0: addi    r5, r5, -28696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28696);

label_7F2591F4:
    ctx->pc = 0x7F2591F4u;
    // 7F2591F4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2591F8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2591F8:
    ctx->pc = 0x7F2591F8u;
    ctx->downcount -= 14;
    // 7F2591F8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2591FC:
    ctx->pc = 0x7F2591FCu;
    // 7F2591FC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F259200:
    ctx->pc = 0x7F259200u;
    // 7F259200: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F259204:
    ctx->pc = 0x7F259204u;
    // 7F259204: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F259208:
    ctx->pc = 0x7F259208u;
    // 7F259208: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F25920C:
    ctx->pc = 0x7F25920Cu;
    // 7F25920C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F259210:
    ctx->pc = 0x7F259210u;
    // 7F259210: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F259214:
    ctx->pc = 0x7F259214u;
    // 7F259214: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F259218:
    ctx->pc = 0x7F259218u;
    // 7F259218: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25921C:
    ctx->pc = 0x7F25921Cu;
    // 7F25921C: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259220:
    ctx->pc = 0x7F259220u;
    // 7F259220: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259224:
    ctx->pc = 0x7F259224u;
    // 7F259224: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259228:
    ctx->pc = 0x7F259228u;
    // 7F259228: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25922C:
    ctx->pc = 0x7F25922Cu;
    // 7F25922C: bl      0x7F25900C
    {
            ctx->lr = 0x7F259230u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25900Cu;
                return;
            }
            goto label_7F25900C;
    }

label_7F259230:
    ctx->pc = 0x7F259230u;
    ctx->downcount -= 2;
    // 7F259230: cmpwi   r3, 0
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

label_7F259234:
    ctx->pc = 0x7F259234u;
    // 7F259234: bc    4, 0, 0x7F259248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259248;
        }
    }

label_7F259238:
    ctx->pc = 0x7F259238u;
    ctx->downcount -= 2;
    // 7F259238: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25923C:
    ctx->pc = 0x7F25923Cu;
    // 7F25923C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F259240u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F259240:
    ctx->pc = 0x7F259240u;
    ctx->downcount -= 2;
    // 7F259240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F259244:
    ctx->pc = 0x7F259244u;
    // 7F259244: b       0x7F25924C
    {
            goto label_7F25924C;
    }

label_7F259248:
    ctx->pc = 0x7F259248u;
    ctx->downcount -= 1;
    // 7F259248: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25924C:
    ctx->pc = 0x7F25924Cu;
    ctx->downcount -= 16;
    // 7F25924C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F259250:
    ctx->pc = 0x7F259250u;
    // 7F259250: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259254:
    ctx->pc = 0x7F259254u;
    // 7F259254: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259258:
    ctx->pc = 0x7F259258u;
    // 7F259258: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25925C:
    ctx->pc = 0x7F25925Cu;
    // 7F25925C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259260:
    ctx->pc = 0x7F259260u;
    ctx->downcount -= 7;
    // 7F259260: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259264:
    ctx->pc = 0x7F259264u;
    // 7F259264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259268:
    ctx->pc = 0x7F259268u;
    // 7F259268: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25926C:
    ctx->pc = 0x7F25926Cu;
    // 7F25926C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F259270:
    ctx->pc = 0x7F259270u;
    // 7F259270: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259274:
    ctx->pc = 0x7F259274u;
    // 7F259274: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F259278:
    ctx->pc = 0x7F259278u;
    // 7F259278: bl      0x7F012050
    {
            ctx->lr = 0x7F25927Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F25927C:
    ctx->pc = 0x7F25927Cu;
    ctx->downcount -= 2;
    // 7F25927C: cmpwi   r3, 0
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

label_7F259280:
    ctx->pc = 0x7F259280u;
    // 7F259280: bc    4, 2, 0x7F2592D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2592D4;
        }
    }

label_7F259284:
    ctx->pc = 0x7F259284u;
    ctx->downcount -= 3;
    // 7F259284: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259288:
    ctx->pc = 0x7F259288u;
    // 7F259288: rlwinm. r0, r0, 0, 31, 31
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

label_7F25928C:
    ctx->pc = 0x7F25928Cu;
    // 7F25928C: bc    12, 2, 0x7F2592AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2592AC;
        }
    }

label_7F259290:
    ctx->pc = 0x7F259290u;
    ctx->downcount -= 4;
    // 7F259290: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F259294:
    ctx->pc = 0x7F259294u;
    // 7F259294: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F259298:
    ctx->pc = 0x7F259298u;
    // 7F259298: addi    r3, r3, -8556
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8556);

label_7F25929C:
    ctx->pc = 0x7F25929Cu;
    // 7F25929C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F2592A0u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F2592A0:
    ctx->pc = 0x7F2592A0u;
    ctx->downcount -= 3;
    // 7F2592A0: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2592A4:
    ctx->pc = 0x7F2592A4u;
    // 7F2592A4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F2592A8:
    ctx->pc = 0x7F2592A8u;
    // 7F2592A8: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2592AC:
    ctx->pc = 0x7F2592ACu;
    ctx->downcount -= 3;
    // 7F2592AC: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2592B0:
    ctx->pc = 0x7F2592B0u;
    // 7F2592B0: rlwinm. r0, r0, 0, 30, 30
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

label_7F2592B4:
    ctx->pc = 0x7F2592B4u;
    // 7F2592B4: bc    12, 2, 0x7F2592D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2592D4;
        }
    }

label_7F2592B8:
    ctx->pc = 0x7F2592B8u;
    ctx->downcount -= 4;
    // 7F2592B8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2592BC:
    ctx->pc = 0x7F2592BCu;
    // 7F2592BC: li      r4, 514
    ctx->gpr[4] = (u32)(s32)(514);

label_7F2592C0:
    ctx->pc = 0x7F2592C0u;
    // 7F2592C0: addi    r3, r3, -8548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8548);

label_7F2592C4:
    ctx->pc = 0x7F2592C4u;
    // 7F2592C4: bl      0x7F013B6C
    {
            ctx->lr = 0x7F2592C8u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F2592C8:
    ctx->pc = 0x7F2592C8u;
    ctx->downcount -= 3;
    // 7F2592C8: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2592CC:
    ctx->pc = 0x7F2592CCu;
    // 7F2592CC: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F2592D0:
    ctx->pc = 0x7F2592D0u;
    // 7F2592D0: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2592D4:
    ctx->pc = 0x7F2592D4u;
    ctx->downcount -= 3;
    // 7F2592D4: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2592D8:
    ctx->pc = 0x7F2592D8u;
    // 7F2592D8: rlwinm. r0, r3, 0, 30, 30
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

label_7F2592DC:
    ctx->pc = 0x7F2592DCu;
    // 7F2592DC: bc    4, 2, 0x7F2592F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2592F0;
        }
    }

label_7F2592E0:
    ctx->pc = 0x7F2592E0u;
    ctx->downcount -= 2;
    // 7F2592E0: rlwinm. r0, r3, 0, 31, 31
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

label_7F2592E4:
    ctx->pc = 0x7F2592E4u;
    // 7F2592E4: bc    4, 2, 0x7F2592F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2592F0;
        }
    }

label_7F2592E8:
    ctx->pc = 0x7F2592E8u;
    ctx->downcount -= 2;
    // 7F2592E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2592EC:
    ctx->pc = 0x7F2592ECu;
    // 7F2592EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2592F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2592F0:
    ctx->pc = 0x7F2592F0u;
    ctx->downcount -= 6;
    // 7F2592F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2592F4:
    ctx->pc = 0x7F2592F4u;
    // 7F2592F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2592F8:
    ctx->pc = 0x7F2592F8u;
    // 7F2592F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2592FC:
    ctx->pc = 0x7F2592FCu;
    // 7F2592FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259300:
    ctx->pc = 0x7F259300u;
    // 7F259300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259304:
    ctx->pc = 0x7F259304u;
    ctx->downcount -= 7;
    // 7F259304: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259308:
    ctx->pc = 0x7F259308u;
    // 7F259308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25930C:
    ctx->pc = 0x7F25930Cu;
    // 7F25930C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259310:
    ctx->pc = 0x7F259310u;
    // 7F259310: lwz     r12, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F259314:
    ctx->pc = 0x7F259314u;
    // 7F259314: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F259318:
    ctx->pc = 0x7F259318u;
    // 7F259318: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F25931Cu;
            ctx->pc = target;
            return;
        }
    }

label_7F25931C:
    ctx->pc = 0x7F25931Cu;
    ctx->downcount -= 5;
    // 7F25931C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259320:
    ctx->pc = 0x7F259320u;
    // 7F259320: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259324:
    ctx->pc = 0x7F259324u;
    // 7F259324: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259328:
    ctx->pc = 0x7F259328u;
    // 7F259328: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25932C:
    ctx->pc = 0x7F25932Cu;
    ctx->downcount -= 1;
    // 7F25932C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259330:
    ctx->pc = 0x7F259330u;
    ctx->downcount -= 26;
    // 7F259330: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259334:
    ctx->pc = 0x7F259334u;
    // 7F259334: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259338:
    ctx->pc = 0x7F259338u;
    // 7F259338: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25933C:
    ctx->pc = 0x7F25933Cu;
    // 7F25933C: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25933Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F259340:
    ctx->pc = 0x7F259340u;
    // 7F259340: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F259340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F259340u);
        if (ctx->exception) return;
    }

label_7F259344:
    ctx->pc = 0x7F259344u;
    // 7F259344: stmw     r28, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259348:
    ctx->pc = 0x7F259348u;
    // 7F259348: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25934C:
    ctx->pc = 0x7F25934Cu;
    // 7F25934C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F259350:
    ctx->pc = 0x7F259350u;
    // 7F259350: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259354:
    ctx->pc = 0x7F259354u;
    // 7F259354: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F259358:
    ctx->pc = 0x7F259358u;
    // 7F259358: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F25935C:
    ctx->pc = 0x7F25935Cu;
    // 7F25935C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F259360:
    ctx->pc = 0x7F259360u;
    // 7F259360: addi    r5, r1, 44
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259364:
    ctx->pc = 0x7F259364u;
    // 7F259364: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F259368:
    ctx->pc = 0x7F259368u;
    // 7F259368: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F25936C:
    loop_7F25936C(ctx);
    if (ctx->pc == 0x7F259380u) goto label_7F259380;
    return;
label_7F259370:
    ctx->pc = 0x7F259370u;
    // 7F259370: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F259374:
    ctx->pc = 0x7F259374u;
    // 7F259374: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259378:
    ctx->pc = 0x7F259378u;
    // 7F259378: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F25937C:
    // 7F25937C: bc    16, 0, 0x7F25936C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25936Cu;
                return;
            }
            goto label_7F25936C;
        }
    }

label_7F259380:
    ctx->pc = 0x7F259380u;
    ctx->downcount -= 1;
    // 7F259380: bl      0x7F259700
    {
            ctx->lr = 0x7F259384u;
            goto label_7F259700;
    }

label_7F259384:
    ctx->pc = 0x7F259384u;
    ctx->downcount -= 14;
    // 7F259384: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F259388:
    ctx->pc = 0x7F259388u;
    // 7F259388: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25938C:
    ctx->pc = 0x7F25938Cu;
    // 7F25938C: lfs     f2, 22196(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25938Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F259390:
    ctx->pc = 0x7F259390u;
    // 7F259390: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F259394:
    ctx->pc = 0x7F259394u;
    // 7F259394: lfs     f0, 22192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259394u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F259398:
    ctx->pc = 0x7F259398u;
    // 7F259398: li      r0, 2176
    ctx->gpr[0] = (u32)(s32)(2176);

label_7F25939C:
    ctx->pc = 0x7F25939Cu;
    // 7F25939C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2593A0:
    ctx->pc = 0x7F2593A0u;
    // 7F2593A0: sth     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2593A4:
    ctx->pc = 0x7F2593A4u;
    // 7F2593A4: fmadds f31, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2593A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_7F2593A8:
    ctx->pc = 0x7F2593A8u;
    // 7F2593A8: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2593AC:
    ctx->pc = 0x7F2593ACu;
    // 7F2593AC: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2593B0:
    ctx->pc = 0x7F2593B0u;
    // 7F2593B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2593B4:
    ctx->pc = 0x7F2593B4u;
    // 7F2593B4: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2593B8:
    ctx->pc = 0x7F2593B8u;
    // 7F2593B8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2593BCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2593BC:
    ctx->pc = 0x7F2593BCu;
    ctx->downcount -= 4;
    // 7F2593BC: addi    r3, r28, 68
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(68);

label_7F2593C0:
    ctx->pc = 0x7F2593C0u;
    // 7F2593C0: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2593C4:
    ctx->pc = 0x7F2593C4u;
    // 7F2593C4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2593C8:
    ctx->pc = 0x7F2593C8u;
    // 7F2593C8: bl      0x7F3B3648
    {
            ctx->lr = 0x7F2593CCu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F2593CC:
    ctx->pc = 0x7F2593CCu;
    ctx->downcount -= 3;
    // 7F2593CC: rlwinm. r31, r31, 0, 30, 30
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2593D0:
    ctx->pc = 0x7F2593D0u;
    // 7F2593D0: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F2593D4:
    ctx->pc = 0x7F2593D4u;
    // 7F2593D4: bc    12, 2, 0x7F2593DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2593DC;
        }
    }

label_7F2593D8:
    ctx->pc = 0x7F2593D8u;
    ctx->downcount -= 1;
    // 7F2593D8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2593DC:
    ctx->pc = 0x7F2593DCu;
    ctx->downcount -= 8;
    // 7F2593DC: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2593DCu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F2593E0:
    ctx->pc = 0x7F2593E0u;
    // 7F2593E0: lwz     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2593E4:
    ctx->pc = 0x7F2593E4u;
    // 7F2593E4: lwz     r7, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2593E8:
    ctx->pc = 0x7F2593E8u;
    // 7F2593E8: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2593EC:
    ctx->pc = 0x7F2593ECu;
    // 7F2593EC: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2593F0:
    ctx->pc = 0x7F2593F0u;
    // 7F2593F0: addi    r5, r28, 52
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(52);

label_7F2593F4:
    ctx->pc = 0x7F2593F4u;
    // 7F2593F4: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2593F8:
    ctx->pc = 0x7F2593F8u;
    // 7F2593F8: bl      0x7F258B70
    {
            ctx->lr = 0x7F2593FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F258B70u;
                return;
            }
            goto label_7F258B70;
    }

label_7F2593FC:
    ctx->pc = 0x7F2593FCu;
    ctx->downcount -= 2;
    // 7F2593FC: cmplwi  r3, 0x0000
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

label_7F259400:
    ctx->pc = 0x7F259400u;
    // 7F259400: bc    4, 2, 0x7F259418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259418;
        }
    }

label_7F259404:
    ctx->pc = 0x7F259404u;
    ctx->downcount -= 3;
    // 7F259404: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259408:
    ctx->pc = 0x7F259408u;
    // 7F259408: addi    r3, r3, 13248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13248);

label_7F25940C:
    ctx->pc = 0x7F25940Cu;
    // 7F25940C: bl      0x7F275ECC
    {
            ctx->lr = 0x7F259410u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F259410:
    ctx->pc = 0x7F259410u;
    ctx->downcount -= 2;
    // 7F259410: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259414:
    ctx->pc = 0x7F259414u;
    // 7F259414: b       0x7F2596E4
    {
            goto label_7F2596E4;
    }

label_7F259418:
    ctx->pc = 0x7F259418u;
    ctx->downcount -= 2;
    // 7F259418: cmpwi   r31, 0
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

label_7F25941C:
    ctx->pc = 0x7F25941Cu;
    // 7F25941C: bc    4, 2, 0x7F259580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259580;
        }
    }

label_7F259420:
    ctx->pc = 0x7F259420u;
    ctx->downcount -= 15;
    // 7F259420: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F259424:
    ctx->pc = 0x7F259424u;
    // 7F259424: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259428:
    ctx->pc = 0x7F259428u;
    // 7F259428: addi    r6, r4, 22200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22200);

label_7F25942C:
    ctx->pc = 0x7F25942Cu;
    // 7F25942C: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F259430:
    ctx->pc = 0x7F259430u;
    // 7F259430: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F259434:
    ctx->pc = 0x7F259434u;
    // 7F259434: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F259434u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F259438:
    ctx->pc = 0x7F259438u;
    // 7F259438: lfs     f2, 22204(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259438u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25943C:
    ctx->pc = 0x7F25943Cu;
    // 7F25943C: addi    r8, r4, 13216
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13216);

label_7F259440:
    ctx->pc = 0x7F259440u;
    // 7F259440: addi    r5, r5, 13232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13232);

label_7F259444:
    ctx->pc = 0x7F259444u;
    // 7F259444: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F259448:
    ctx->pc = 0x7F259448u;
    // 7F259448: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25944C:
    ctx->pc = 0x7F25944Cu;
    // 7F25944C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F259450:
    ctx->pc = 0x7F259450u;
    // 7F259450: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F259454:
    ctx->pc = 0x7F259454u;
    // 7F259454: li      r9, 20
    ctx->gpr[9] = (u32)(s32)(20);

label_7F259458:
    ctx->pc = 0x7F259458u;
    // 7F259458: bl      0x7F26DDB0
    {
            ctx->lr = 0x7F25945Cu;
            ctx->pc = 0x7F26DDB0u;
            return;
    }

label_7F25945C:
    ctx->pc = 0x7F25945Cu;
    ctx->downcount -= 2;
    // 7F25945C: cmplwi  r3, 0x0000
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

label_7F259460:
    ctx->pc = 0x7F259460u;
    // 7F259460: bc    4, 2, 0x7F259478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259478;
        }
    }

label_7F259464:
    ctx->pc = 0x7F259464u;
    ctx->downcount -= 3;
    // 7F259464: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259468:
    ctx->pc = 0x7F259468u;
    // 7F259468: addi    r3, r3, 13260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13260);

label_7F25946C:
    ctx->pc = 0x7F25946Cu;
    // 7F25946C: bl      0x7F275ECC
    {
            ctx->lr = 0x7F259470u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F259470:
    ctx->pc = 0x7F259470u;
    ctx->downcount -= 2;
    // 7F259470: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259474:
    ctx->pc = 0x7F259474u;
    // 7F259474: b       0x7F2596E4
    {
            goto label_7F2596E4;
    }

label_7F259478:
    ctx->pc = 0x7F259478u;
    ctx->downcount -= 15;
    // 7F259478: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25947C:
    ctx->pc = 0x7F25947Cu;
    // 7F25947C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259480:
    ctx->pc = 0x7F259480u;
    // 7F259480: addi    r6, r4, 22200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22200);

label_7F259484:
    ctx->pc = 0x7F259484u;
    // 7F259484: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F259488:
    ctx->pc = 0x7F259488u;
    // 7F259488: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25948C:
    ctx->pc = 0x7F25948Cu;
    // 7F25948C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25948Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F259490:
    ctx->pc = 0x7F259490u;
    // 7F259490: lfs     f2, 22208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259490u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F259494:
    ctx->pc = 0x7F259494u;
    // 7F259494: addi    r8, r4, 13216
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13216);

label_7F259498:
    ctx->pc = 0x7F259498u;
    // 7F259498: addi    r5, r5, 13232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13232);

label_7F25949C:
    ctx->pc = 0x7F25949Cu;
    // 7F25949C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2594A0:
    ctx->pc = 0x7F2594A0u;
    // 7F2594A0: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2594A4:
    ctx->pc = 0x7F2594A4u;
    // 7F2594A4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2594A8:
    ctx->pc = 0x7F2594A8u;
    // 7F2594A8: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F2594AC:
    ctx->pc = 0x7F2594ACu;
    // 7F2594AC: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F2594B0:
    ctx->pc = 0x7F2594B0u;
    // 7F2594B0: bl      0x7F26DDD4
    {
            ctx->lr = 0x7F2594B4u;
            ctx->pc = 0x7F26DDD4u;
            return;
    }

label_7F2594B4:
    ctx->pc = 0x7F2594B4u;
    ctx->downcount -= 2;
    // 7F2594B4: cmplwi  r3, 0x0000
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

label_7F2594B8:
    ctx->pc = 0x7F2594B8u;
    // 7F2594B8: bc    4, 2, 0x7F2594D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2594D0;
        }
    }

label_7F2594BC:
    ctx->pc = 0x7F2594BCu;
    ctx->downcount -= 3;
    // 7F2594BC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2594C0:
    ctx->pc = 0x7F2594C0u;
    // 7F2594C0: addi    r3, r3, 13276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13276);

label_7F2594C4:
    ctx->pc = 0x7F2594C4u;
    // 7F2594C4: bl      0x7F275ECC
    {
            ctx->lr = 0x7F2594C8u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F2594C8:
    ctx->pc = 0x7F2594C8u;
    ctx->downcount -= 2;
    // 7F2594C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2594CC:
    ctx->pc = 0x7F2594CCu;
    // 7F2594CC: b       0x7F2596E4
    {
            goto label_7F2596E4;
    }

label_7F2594D0:
    ctx->pc = 0x7F2594D0u;
    ctx->downcount -= 15;
    // 7F2594D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2594D4:
    ctx->pc = 0x7F2594D4u;
    // 7F2594D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2594D8:
    ctx->pc = 0x7F2594D8u;
    // 7F2594D8: addi    r6, r4, 22212
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22212);

label_7F2594DC:
    ctx->pc = 0x7F2594DCu;
    // 7F2594DC: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2594E0:
    ctx->pc = 0x7F2594E0u;
    // 7F2594E0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2594E4:
    ctx->pc = 0x7F2594E4u;
    // 7F2594E4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2594E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2594E8:
    ctx->pc = 0x7F2594E8u;
    // 7F2594E8: lfs     f2, 22216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2594E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2594EC:
    ctx->pc = 0x7F2594ECu;
    // 7F2594EC: addi    r8, r4, 13216
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13216);

label_7F2594F0:
    ctx->pc = 0x7F2594F0u;
    // 7F2594F0: addi    r5, r5, 13232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13232);

label_7F2594F4:
    ctx->pc = 0x7F2594F4u;
    // 7F2594F4: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2594F8:
    ctx->pc = 0x7F2594F8u;
    // 7F2594F8: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2594FC:
    ctx->pc = 0x7F2594FCu;
    // 7F2594FC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F259500:
    ctx->pc = 0x7F259500u;
    // 7F259500: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F259504:
    ctx->pc = 0x7F259504u;
    // 7F259504: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F259508:
    ctx->pc = 0x7F259508u;
    // 7F259508: bl      0x7F26DDF8
    {
            ctx->lr = 0x7F25950Cu;
            ctx->pc = 0x7F26DDF8u;
            return;
    }

label_7F25950C:
    ctx->pc = 0x7F25950Cu;
    ctx->downcount -= 2;
    // 7F25950C: cmplwi  r3, 0x0000
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

label_7F259510:
    ctx->pc = 0x7F259510u;
    // 7F259510: bc    4, 2, 0x7F259528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259528;
        }
    }

label_7F259514:
    ctx->pc = 0x7F259514u;
    ctx->downcount -= 3;
    // 7F259514: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259518:
    ctx->pc = 0x7F259518u;
    // 7F259518: addi    r3, r3, 13288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13288);

label_7F25951C:
    ctx->pc = 0x7F25951Cu;
    // 7F25951C: bl      0x7F275ECC
    {
            ctx->lr = 0x7F259520u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F259520:
    ctx->pc = 0x7F259520u;
    ctx->downcount -= 2;
    // 7F259520: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259524:
    ctx->pc = 0x7F259524u;
    // 7F259524: b       0x7F2596E4
    {
            goto label_7F2596E4;
    }

label_7F259528:
    ctx->pc = 0x7F259528u;
    ctx->downcount -= 15;
    // 7F259528: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25952C:
    ctx->pc = 0x7F25952Cu;
    // 7F25952C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259530:
    ctx->pc = 0x7F259530u;
    // 7F259530: addi    r6, r4, 22220
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22220);

label_7F259534:
    ctx->pc = 0x7F259534u;
    // 7F259534: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F259538:
    ctx->pc = 0x7F259538u;
    // 7F259538: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25953C:
    ctx->pc = 0x7F25953Cu;
    // 7F25953C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25953Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F259540:
    ctx->pc = 0x7F259540u;
    // 7F259540: lfs     f2, 22224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259540u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F259544:
    ctx->pc = 0x7F259544u;
    // 7F259544: addi    r8, r4, 13216
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13216);

label_7F259548:
    ctx->pc = 0x7F259548u;
    // 7F259548: addi    r5, r5, 13232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13232);

label_7F25954C:
    ctx->pc = 0x7F25954Cu;
    // 7F25954C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F259550:
    ctx->pc = 0x7F259550u;
    // 7F259550: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F259554:
    ctx->pc = 0x7F259554u;
    // 7F259554: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F259558:
    ctx->pc = 0x7F259558u;
    // 7F259558: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F25955C:
    ctx->pc = 0x7F25955Cu;
    // 7F25955C: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F259560:
    ctx->pc = 0x7F259560u;
    // 7F259560: bl      0x7F26DE1C
    {
            ctx->lr = 0x7F259564u;
            ctx->pc = 0x7F26DE1Cu;
            return;
    }

label_7F259564:
    ctx->pc = 0x7F259564u;
    ctx->downcount -= 2;
    // 7F259564: cmplwi  r3, 0x0000
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

label_7F259568:
    ctx->pc = 0x7F259568u;
    // 7F259568: bc    4, 2, 0x7F259580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259580;
        }
    }

label_7F25956C:
    ctx->pc = 0x7F25956Cu;
    ctx->downcount -= 3;
    // 7F25956C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259570:
    ctx->pc = 0x7F259570u;
    // 7F259570: addi    r3, r3, 13300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13300);

label_7F259574:
    ctx->pc = 0x7F259574u;
    // 7F259574: bl      0x7F275ECC
    {
            ctx->lr = 0x7F259578u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F259578:
    ctx->pc = 0x7F259578u;
    ctx->downcount -= 2;
    // 7F259578: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25957C:
    ctx->pc = 0x7F25957Cu;
    // 7F25957C: b       0x7F2596E4
    {
            goto label_7F2596E4;
    }

label_7F259580:
    ctx->pc = 0x7F259580u;
    ctx->downcount -= 8;
    // 7F259580: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F259584:
    ctx->pc = 0x7F259584u;
    // 7F259584: addi    r4, r1, 96
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(96);

label_7F259588:
    ctx->pc = 0x7F259588u;
    // 7F259588: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F25958C:
    ctx->pc = 0x7F25958Cu;
    // 7F25958C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259590:
    ctx->pc = 0x7F259590u;
    // 7F259590: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259594:
    ctx->pc = 0x7F259594u;
    // 7F259594: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259598:
    ctx->pc = 0x7F259598u;
    // 7F259598: addi    r3, r3, 492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(492);

label_7F25959C:
    ctx->pc = 0x7F25959Cu;
    // 7F25959C: bl      0x800261D8
    {
            ctx->lr = 0x7F2595A0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2595A0:
    ctx->pc = 0x7F2595A0u;
    ctx->downcount -= 3;
    // 7F2595A0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2595A4:
    ctx->pc = 0x7F2595A4u;
    // 7F2595A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2595A8:
    ctx->pc = 0x7F2595A8u;
    // 7F2595A8: bl      0x800260DC
    {
            ctx->lr = 0x7F2595ACu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2595AC:
    ctx->pc = 0x7F2595ACu;
    ctx->downcount -= 1;
    // 7F2595AC: bl      0x80006668
    {
            ctx->lr = 0x7F2595B0u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F2595B0:
    ctx->pc = 0x7F2595B0u;
    ctx->downcount -= 5;
    // 7F2595B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2595B4:
    ctx->pc = 0x7F2595B4u;
    // 7F2595B4: lfs     f0, 22228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2595B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2595B8:
    ctx->pc = 0x7F2595B8u;
    // 7F2595B8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2595B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2595BC:
    ctx->pc = 0x7F2595BCu;
    // 7F2595BC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2595C0:
    ctx->pc = 0x7F2595C0u;
    // 7F2595C0: bc    4, 2, 0x7F2595D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2595D0;
        }
    }

label_7F2595C4:
    ctx->pc = 0x7F2595C4u;
    ctx->downcount -= 3;
    // 7F2595C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2595C8:
    ctx->pc = 0x7F2595C8u;
    // 7F2595C8: lfs     f3, 22232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2595C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2595CC:
    ctx->pc = 0x7F2595CCu;
    // 7F2595CC: b       0x7F2595F8
    {
            goto label_7F2595F8;
    }

label_7F2595D0:
    ctx->pc = 0x7F2595D0u;
    ctx->downcount -= 5;
    // 7F2595D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2595D4:
    ctx->pc = 0x7F2595D4u;
    // 7F2595D4: lfs     f0, 22236(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2595D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2595D8:
    ctx->pc = 0x7F2595D8u;
    // 7F2595D8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2595D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2595DC:
    ctx->pc = 0x7F2595DCu;
    // 7F2595DC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2595E0:
    ctx->pc = 0x7F2595E0u;
    // 7F2595E0: bc    4, 2, 0x7F2595F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2595F0;
        }
    }

label_7F2595E4:
    ctx->pc = 0x7F2595E4u;
    ctx->downcount -= 3;
    // 7F2595E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2595E8:
    ctx->pc = 0x7F2595E8u;
    // 7F2595E8: lfs     f3, 22240(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2595E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2595EC:
    ctx->pc = 0x7F2595ECu;
    // 7F2595EC: b       0x7F2595F8
    {
            goto label_7F2595F8;
    }

label_7F2595F0:
    ctx->pc = 0x7F2595F0u;
    ctx->downcount -= 2;
    // 7F2595F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2595F4:
    ctx->pc = 0x7F2595F4u;
    // 7F2595F4: lfs     f3, 22244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2595F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2595F8:
    ctx->pc = 0x7F2595F8u;
    ctx->downcount -= 4;
    // 7F2595F8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F2595FC:
    ctx->pc = 0x7F2595FCu;
    // 7F2595FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F259600:
    ctx->pc = 0x7F259600u;
    // 7F259600: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F259604:
    ctx->downcount -= 2;
    // 7F259604: rlwinm. r0, r3, 0, 31, 31
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

label_7F259608:
    // 7F259608: bc    12, 2, 0x7F2596A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2596A0;
        }
    }

label_7F25960C:
    ctx->downcount -= 37;
    // 7F25960C: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F259610:
    // 7F259610: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F259614:
    // 7F259614: addi    r5, r5, 13200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13200);

label_7F259618:
    // 7F259618: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F25961C:
    // 7F25961C: addi    r4, r4, 13208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13208);

label_7F259620:
    ctx->pc = 0x7F259620u;
    // 7F259620: lbzx    r5, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F259624:
    ctx->pc = 0x7F259624u;
    // 7F259624: lbzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F259628:
    // 7F259628: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25962C:
    // 7F25962C: extsb r7, r5
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F259630:
    // 7F259630: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F259634:
    // 7F259634: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F259638:
    // 7F259638: addi    r8, r4, 22184
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(22184);

label_7F25963C:
    // 7F25963C: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F259640:
    ctx->pc = 0x7F259640u;
    // 7F259640: stw     r6, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259644:
    // 7F259644: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F259648:
    // 7F259648: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F25964C:
    ctx->pc = 0x7F25964Cu;
    // 7F25964C: stw     r7, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259650:
    // 7F259650: addi    r5, r5, -8548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8548);

label_7F259654:
    ctx->pc = 0x7F259654u;
    // 7F259654: lfd     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F259654u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F259658:
    // 7F259658: addi    r4, r4, -8556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8556);

label_7F25965C:
    ctx->pc = 0x7F25965Cu;
    // 7F25965C: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25965Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F259660:
    ctx->pc = 0x7F259660u;
    // 7F259660: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259664:
    ctx->pc = 0x7F259664u;
    // 7F259664: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F259664u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F259668:
    ctx->pc = 0x7F259668u;
    // 7F259668: stw     r6, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F25966C:
    ctx->pc = 0x7F25966Cu;
    // 7F25966C: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25966Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F259670:
    ctx->pc = 0x7F259670u;
    // 7F259670: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F259670u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_7F259674:
    ctx->pc = 0x7F259674u;
    // 7F259674: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F259674u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F259678:
    ctx->pc = 0x7F259678u;
    // 7F259678: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F259678u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F25967C:
    ctx->pc = 0x7F25967Cu;
    // 7F25967C: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25967Cu)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_7F259680:
    ctx->pc = 0x7F259680u;
    // 7F259680: stfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F259684:
    ctx->pc = 0x7F259684u;
    // 7F259684: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F259684u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F259688:
    ctx->pc = 0x7F259688u;
    // 7F259688: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25968C:
    ctx->pc = 0x7F25968Cu;
    // 7F25968C: stbx    r0, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F259690:
    ctx->pc = 0x7F259690u;
    // 7F259690: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F259694:
    ctx->pc = 0x7F259694u;
    // 7F259694: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259698:
    ctx->pc = 0x7F259698u;
    // 7F259698: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25969C:
    // 7F25969C: b       0x7F2596D0
    {
            goto label_7F2596D0;
    }

label_7F2596A0:
    ctx->downcount -= 12;
    // 7F2596A0: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2596A4:
    // 7F2596A4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2596A8:
    // 7F2596A8: addi    r7, r5, 13200
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(13200);

label_7F2596AC:
    // 7F2596AC: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2596B0:
    // 7F2596B0: addi    r5, r4, 13208
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13208);

label_7F2596B4:
    // 7F2596B4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2596B8:
    ctx->pc = 0x7F2596B8u;
    // 7F2596B8: lbzx    r7, r7, r3
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[3];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F2596BC:
    // 7F2596BC: addi    r6, r6, -8548
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8548);

label_7F2596C0:
    ctx->pc = 0x7F2596C0u;
    // 7F2596C0: lbzx    r0, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2596C4:
    // 7F2596C4: addi    r4, r4, -8556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8556);

label_7F2596C8:
    ctx->pc = 0x7F2596C8u;
    // 7F2596C8: stbx    r7, r6, r3
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F2596CC:
    ctx->pc = 0x7F2596CCu;
    // 7F2596CC: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2596D0:
    ctx->downcount -= 2;
    // 7F2596D0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2596D4:
    // 7F2596D4: bc    16, 0, 0x7F259604
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259604u;
                return;
            }
            goto label_7F259604;
        }
    }

label_7F2596D8:
    ctx->pc = 0x7F2596D8u;
    ctx->downcount -= 3;
    // 7F2596D8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2596DC:
    ctx->pc = 0x7F2596DCu;
    // 7F2596DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2596E0:
    ctx->pc = 0x7F2596E0u;
    // 7F2596E0: stw     r0, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2596E4:
    ctx->pc = 0x7F2596E4u;
    ctx->downcount -= 18;
    // 7F2596E4: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2596E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2596E4u);
        if (ctx->exception) return;
    }

label_7F2596E8:
    ctx->pc = 0x7F2596E8u;
    // 7F2596E8: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2596E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2596EC:
    ctx->pc = 0x7F2596ECu;
    // 7F2596EC: lmw     r28, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2596F0:
    ctx->pc = 0x7F2596F0u;
    // 7F2596F0: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2596F4:
    ctx->pc = 0x7F2596F4u;
    // 7F2596F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2596F8:
    ctx->pc = 0x7F2596F8u;
    // 7F2596F8: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F2596FC:
    ctx->pc = 0x7F2596FCu;
    // 7F2596FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259700:
    ctx->pc = 0x7F259700u;
    ctx->downcount -= 4;
    // 7F259700: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259704:
    ctx->pc = 0x7F259704u;
    // 7F259704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259708:
    ctx->pc = 0x7F259708u;
    // 7F259708: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25970C:
    ctx->pc = 0x7F25970Cu;
    // 7F25970C: bl      0x7F259748
    {
            ctx->lr = 0x7F259710u;
            goto label_7F259748;
    }

label_7F259710:
    ctx->pc = 0x7F259710u;
    ctx->downcount -= 31;
    // 7F259710: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F259714:
    ctx->pc = 0x7F259714u;
    // 7F259714: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259718:
    ctx->pc = 0x7F259718u;
    // 7F259718: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25971C:
    ctx->pc = 0x7F25971Cu;
    // 7F25971C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259720:
    ctx->pc = 0x7F259720u;
    // 7F259720: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259724:
    ctx->pc = 0x7F259724u;
    // 7F259724: lfd     f2, 22256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F259724u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22256);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F259728:
    ctx->pc = 0x7F259728u;
    // 7F259728: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259728u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25972C:
    ctx->pc = 0x7F25972Cu;
    // 7F25972C: lfs     f0, 22248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25972Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F259730:
    ctx->pc = 0x7F259730u;
    // 7F259730: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F259730u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F259734:
    ctx->pc = 0x7F259734u;
    // 7F259734: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259738:
    ctx->pc = 0x7F259738u;
    // 7F259738: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F259738u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F25973C:
    ctx->pc = 0x7F25973Cu;
    // 7F25973C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259740:
    ctx->pc = 0x7F259740u;
    // 7F259740: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259744:
    ctx->pc = 0x7F259744u;
    // 7F259744: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259748:
    ctx->pc = 0x7F259748u;
    ctx->downcount -= 13;
    // 7F259748: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25974C:
    ctx->pc = 0x7F25974Cu;
    // 7F25974C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F259750:
    ctx->pc = 0x7F259750u;
    // 7F259750: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F259754:
    ctx->pc = 0x7F259754u;
    // 7F259754: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259758:
    ctx->pc = 0x7F259758u;
    // 7F259758: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F25975C:
    ctx->pc = 0x7F25975Cu;
    // 7F25975C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F259760:
    ctx->pc = 0x7F259760u;
    // 7F259760: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F259764:
    ctx->pc = 0x7F259764u;
    // 7F259764: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259768:
    ctx->pc = 0x7F259768u;
    // 7F259768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25976C:
    ctx->pc = 0x7F25976Cu;
    ctx->downcount -= 29;
    // 7F25976C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259770:
    ctx->pc = 0x7F259770u;
    // 7F259770: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259774:
    ctx->pc = 0x7F259774u;
    // 7F259774: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259778:
    ctx->pc = 0x7F259778u;
    // 7F259778: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25977C:
    ctx->pc = 0x7F25977Cu;
    // 7F25977C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25977Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F259780:
    ctx->pc = 0x7F259780u;
    // 7F259780: stmw     r23, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259784:
    ctx->pc = 0x7F259784u;
    // 7F259784: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259788:
    ctx->pc = 0x7F259788u;
    // 7F259788: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25978C:
    ctx->pc = 0x7F25978Cu;
    // 7F25978C: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F259790:
    ctx->pc = 0x7F259790u;
    // 7F259790: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F259794:
    ctx->pc = 0x7F259794u;
    // 7F259794: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F259798:
    ctx->pc = 0x7F259798u;
    // 7F259798: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F25979C:
    ctx->pc = 0x7F25979Cu;
    // 7F25979C: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2597A0:
    ctx->pc = 0x7F2597A0u;
    // 7F2597A0: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F2597A4:
    ctx->pc = 0x7F2597A4u;
    // 7F2597A4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2597A8:
    ctx->pc = 0x7F2597A8u;
    // 7F2597A8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F2597AC:
    ctx->pc = 0x7F2597ACu;
    // 7F2597AC: li      r5, 116
    ctx->gpr[5] = (u32)(s32)(116);

label_7F2597B0:
    ctx->pc = 0x7F2597B0u;
    // 7F2597B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2597B4:
    ctx->pc = 0x7F2597B4u;
    // 7F2597B4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2597B8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2597B8:
    ctx->pc = 0x7F2597B8u;
    ctx->downcount -= 2;
    // 7F2597B8: or.   r31, r3, r3
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

label_7F2597BC:
    ctx->pc = 0x7F2597BCu;
    // 7F2597BC: bc    12, 2, 0x7F2598C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2598C0;
        }
    }

label_7F2597C0:
    ctx->pc = 0x7F2597C0u;
    ctx->downcount -= 5;
    // 7F2597C0: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F2597C4:
    ctx->pc = 0x7F2597C4u;
    // 7F2597C4: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F2597C8:
    ctx->pc = 0x7F2597C8u;
    // 7F2597C8: addi    r4, r4, -27900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27900);

label_7F2597CC:
    ctx->pc = 0x7F2597CCu;
    // 7F2597CC: addi    r5, r5, -27860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27860);

label_7F2597D0:
    ctx->pc = 0x7F2597D0u;
    // 7F2597D0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2597D4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2597D4:
    ctx->pc = 0x7F2597D4u;
    ctx->downcount -= 45;
    // 7F2597D4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2597D8:
    ctx->pc = 0x7F2597D8u;
    // 7F2597D8: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F2597DC:
    ctx->pc = 0x7F2597DCu;
    // 7F2597DC: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2597DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2597E0:
    ctx->pc = 0x7F2597E0u;
    // 7F2597E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2597E4:
    ctx->pc = 0x7F2597E4u;
    // 7F2597E4: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F2597E8:
    ctx->pc = 0x7F2597E8u;
    // 7F2597E8: addi    r6, r6, 32548
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F2597EC:
    ctx->pc = 0x7F2597ECu;
    // 7F2597EC: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2597F0:
    ctx->pc = 0x7F2597F0u;
    // 7F2597F0: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F2597F4:
    ctx->pc = 0x7F2597F4u;
    // 7F2597F4: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2597F8:
    ctx->pc = 0x7F2597F8u;
    // 7F2597F8: addi    r0, r5, -28064
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-28064);

label_7F2597FC:
    ctx->pc = 0x7F2597FCu;
    // 7F2597FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F259800:
    ctx->pc = 0x7F259800u;
    // 7F259800: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F259804:
    ctx->pc = 0x7F259804u;
    // 7F259804: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259808:
    ctx->pc = 0x7F259808u;
    // 7F259808: addi    r5, r4, -8560
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8560);

label_7F25980C:
    ctx->pc = 0x7F25980Cu;
    // 7F25980C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F259810:
    ctx->pc = 0x7F259810u;
    // 7F259810: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259814:
    ctx->pc = 0x7F259814u;
    // 7F259814: stw     r6, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259818:
    ctx->pc = 0x7F259818u;
    // 7F259818: stw     r24, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F25981C:
    ctx->pc = 0x7F25981Cu;
    // 7F25981C: lwz     r6, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259820:
    ctx->pc = 0x7F259820u;
    // 7F259820: lwz     r7, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F259824:
    ctx->pc = 0x7F259824u;
    // 7F259824: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F259828:
    ctx->pc = 0x7F259828u;
    // 7F259828: stw     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F25982C:
    ctx->pc = 0x7F25982Cu;
    // 7F25982C: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259830:
    ctx->pc = 0x7F259830u;
    // 7F259830: stw     r7, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259834:
    ctx->pc = 0x7F259834u;
    // 7F259834: lwz     r8, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F259838:
    ctx->pc = 0x7F259838u;
    // 7F259838: lwz     r7, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25983C:
    ctx->pc = 0x7F25983Cu;
    // 7F25983C: stw     r8, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F259840:
    ctx->pc = 0x7F259840u;
    // 7F259840: stw     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259844:
    ctx->pc = 0x7F259844u;
    // 7F259844: lwz     r8, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F259848:
    ctx->pc = 0x7F259848u;
    // 7F259848: lwz     r7, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25984C:
    ctx->pc = 0x7F25984Cu;
    // 7F25984C: stw     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F259850:
    ctx->pc = 0x7F259850u;
    // 7F259850: stw     r7, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259854:
    ctx->pc = 0x7F259854u;
    // 7F259854: lwz     r8, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F259858:
    ctx->pc = 0x7F259858u;
    // 7F259858: lwz     r7, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25985C:
    ctx->pc = 0x7F25985Cu;
    // 7F25985C: stw     r8, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F259860:
    ctx->pc = 0x7F259860u;
    // 7F259860: stw     r7, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259864:
    ctx->pc = 0x7F259864u;
    // 7F259864: stw     r23, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F259868:
    ctx->pc = 0x7F259868u;
    // 7F259868: stw     r27, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F25986C:
    ctx->pc = 0x7F25986Cu;
    // 7F25986C: stw     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259870:
    ctx->pc = 0x7F259870u;
    // 7F259870: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259874:
    ctx->pc = 0x7F259874u;
    // 7F259874: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259878:
    ctx->pc = 0x7F259878u;
    // 7F259878: lwz     r6, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25987C:
    ctx->pc = 0x7F25987Cu;
    // 7F25987C: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F259880:
    ctx->pc = 0x7F259880u;
    // 7F259880: cmpwi   r0, 1
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

label_7F259884:
    ctx->pc = 0x7F259884u;
    // 7F259884: bc    12, 1, 0x7F25988C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25988C;
        }
    }

label_7F259888:
    ctx->pc = 0x7F259888u;
    ctx->downcount -= 1;
    // 7F259888: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F25988C:
    ctx->pc = 0x7F25988Cu;
    ctx->downcount -= 7;
    // 7F25988C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F259890:
    ctx->pc = 0x7F259890u;
    // 7F259890: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F259894:
    ctx->pc = 0x7F259894u;
    // 7F259894: stw     r6, -8560(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8560);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259898:
    ctx->pc = 0x7F259898u;
    // 7F259898: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25989C:
    ctx->pc = 0x7F25989Cu;
    // 7F25989C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2598A0:
    ctx->pc = 0x7F2598A0u;
    // 7F2598A0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2598A4:
    ctx->pc = 0x7F2598A4u;
    // 7F2598A4: bl      0x7F259330
    {
            ctx->lr = 0x7F2598A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259330u;
                return;
            }
            goto label_7F259330;
    }

label_7F2598A8:
    ctx->pc = 0x7F2598A8u;
    ctx->downcount -= 2;
    // 7F2598A8: cmpwi   r3, 0
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

label_7F2598AC:
    ctx->pc = 0x7F2598ACu;
    // 7F2598AC: bc    4, 0, 0x7F2598C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2598C0;
        }
    }

label_7F2598B0:
    ctx->pc = 0x7F2598B0u;
    ctx->downcount -= 2;
    // 7F2598B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2598B4:
    ctx->pc = 0x7F2598B4u;
    // 7F2598B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2598B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2598B8:
    ctx->pc = 0x7F2598B8u;
    ctx->downcount -= 2;
    // 7F2598B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2598BC:
    ctx->pc = 0x7F2598BCu;
    // 7F2598BC: b       0x7F2598C4
    {
            goto label_7F2598C4;
    }

label_7F2598C0:
    ctx->pc = 0x7F2598C0u;
    ctx->downcount -= 1;
    // 7F2598C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2598C4:
    ctx->pc = 0x7F2598C4u;
    ctx->downcount -= 17;
    // 7F2598C4: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2598C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2598C8:
    ctx->pc = 0x7F2598C8u;
    // 7F2598C8: lmw     r23, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2598CC:
    ctx->pc = 0x7F2598CCu;
    // 7F2598CC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2598D0:
    ctx->pc = 0x7F2598D0u;
    // 7F2598D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2598D4:
    ctx->pc = 0x7F2598D4u;
    // 7F2598D4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2598D8:
    ctx->pc = 0x7F2598D8u;
    // 7F2598D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F2598DC:
    ctx->pc = 0x7F2598DCu;
    ctx->downcount -= 7;
    // 7F2598DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2598E0:
    ctx->pc = 0x7F2598E0u;
    // 7F2598E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2598E4:
    ctx->pc = 0x7F2598E4u;
    // 7F2598E4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2598E8:
    ctx->pc = 0x7F2598E8u;
    // 7F2598E8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2598EC:
    ctx->pc = 0x7F2598ECu;
    // 7F2598EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2598F0:
    ctx->pc = 0x7F2598F0u;
    // 7F2598F0: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2598F4:
    ctx->pc = 0x7F2598F4u;
    // 7F2598F4: bl      0x7F25976C
    {
            ctx->lr = 0x7F2598F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25976Cu;
                return;
            }
            goto label_7F25976C;
    }

label_7F2598F8:
    ctx->pc = 0x7F2598F8u;
    ctx->downcount -= 5;
    // 7F2598F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2598FC:
    ctx->pc = 0x7F2598FCu;
    // 7F2598FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259900:
    ctx->pc = 0x7F259900u;
    // 7F259900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259904:
    ctx->pc = 0x7F259904u;
    // 7F259904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259908:
    ctx->pc = 0x7F259908u;
    ctx->downcount -= 6;
    // 7F259908: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25990C:
    ctx->pc = 0x7F25990Cu;
    // 7F25990C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259910:
    ctx->pc = 0x7F259910u;
    // 7F259910: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259914:
    ctx->pc = 0x7F259914u;
    // 7F259914: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F259918:
    ctx->pc = 0x7F259918u;
    // 7F259918: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25991C:
    ctx->pc = 0x7F25991Cu;
    // 7F25991C: bl      0x7F25976C
    {
            ctx->lr = 0x7F259920u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25976Cu;
                return;
            }
            goto label_7F25976C;
    }

label_7F259920:
    ctx->pc = 0x7F259920u;
    ctx->downcount -= 5;
    // 7F259920: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259924:
    ctx->pc = 0x7F259924u;
    // 7F259924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259928:
    ctx->pc = 0x7F259928u;
    // 7F259928: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25992C:
    ctx->pc = 0x7F25992Cu;
    // 7F25992C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259930:
    ctx->pc = 0x7F259930u;
    ctx->downcount -= 19;
    // 7F259930: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259934:
    ctx->pc = 0x7F259934u;
    // 7F259934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259938:
    ctx->pc = 0x7F259938u;
    // 7F259938: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25993C:
    ctx->pc = 0x7F25993Cu;
    // 7F25993C: stmw     r26, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259940:
    ctx->pc = 0x7F259940u;
    // 7F259940: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259944:
    ctx->pc = 0x7F259944u;
    // 7F259944: lwz     r3, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259948:
    ctx->pc = 0x7F259948u;
    // 7F259948: lwz     r27, 168(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(168);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F25994C:
    ctx->pc = 0x7F25994Cu;
    // 7F25994C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259950:
    ctx->pc = 0x7F259950u;
    // 7F259950: bl      0x7F259DD8
    {
            ctx->lr = 0x7F259954u;
            goto label_7F259DD8;
    }

label_7F259954:
    ctx->pc = 0x7F259954u;
    ctx->downcount -= 4;
    // 7F259954: lwz     r4, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259958:
    ctx->pc = 0x7F259958u;
    // 7F259958: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25995C:
    ctx->pc = 0x7F25995Cu;
    // 7F25995C: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259960:
    ctx->pc = 0x7F259960u;
    // 7F259960: bl      0x7F259DA4
    {
            ctx->lr = 0x7F259964u;
            goto label_7F259DA4;
    }

label_7F259964:
    ctx->pc = 0x7F259964u;
    ctx->downcount -= 3;
    // 7F259964: lwz     r0, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259968:
    ctx->pc = 0x7F259968u;
    // 7F259968: cmpwi   r0, 0
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

label_7F25996C:
    ctx->pc = 0x7F25996Cu;
    // 7F25996C: bc    4, 1, 0x7F2599A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2599A0;
        }
    }

label_7F259970:
    ctx->pc = 0x7F259970u;
    ctx->downcount -= 12;
    // 7F259970: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259974:
    ctx->pc = 0x7F259974u;
    // 7F259974: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259978:
    ctx->pc = 0x7F259978u;
    // 7F259978: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F25997C:
    ctx->pc = 0x7F25997Cu;
    // 7F25997C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259980:
    ctx->pc = 0x7F259980u;
    // 7F259980: lwz     r3, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259984:
    ctx->pc = 0x7F259984u;
    // 7F259984: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259988:
    ctx->pc = 0x7F259988u;
    // 7F259988: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F25998C:
    ctx->pc = 0x7F25998Cu;
    // 7F25998C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259990:
    ctx->pc = 0x7F259990u;
    // 7F259990: lwz     r3, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259994:
    ctx->pc = 0x7F259994u;
    // 7F259994: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F259998:
    ctx->pc = 0x7F259998u;
    // 7F259998: stw     r0, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25999C:
    ctx->pc = 0x7F25999Cu;
    // 7F25999C: b       0x7F259D90
    {
            goto label_7F259D90;
    }

label_7F2599A0:
    ctx->pc = 0x7F2599A0u;
    ctx->downcount -= 8;
    // 7F2599A0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2599A4:
    ctx->pc = 0x7F2599A4u;
    // 7F2599A4: lwz     r29, 160(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(160);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2599A8:
    ctx->pc = 0x7F2599A8u;
    // 7F2599A8: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F2599AC:
    ctx->pc = 0x7F2599ACu;
    // 7F2599AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2599B0:
    ctx->pc = 0x7F2599B0u;
    // 7F2599B0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2599B4:
    ctx->pc = 0x7F2599B4u;
    // 7F2599B4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2599B8:
    ctx->pc = 0x7F2599B8u;
    // 7F2599B8: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2599BC:
    ctx->pc = 0x7F2599BCu;
    // 7F2599BC: bc    12, 2, 0x7F259A3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259A3C;
        }
    }

label_7F2599C0:
    ctx->pc = 0x7F2599C0u;
    ctx->downcount -= 6;
    // 7F2599C0: lwz     r4, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2599C4:
    ctx->pc = 0x7F2599C4u;
    // 7F2599C4: addi    r3, r26, 92
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(92);

label_7F2599C8:
    ctx->pc = 0x7F2599C8u;
    // 7F2599C8: lwz     r5, 144(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2599CC:
    ctx->pc = 0x7F2599CCu;
    // 7F2599CC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2599D0:
    ctx->pc = 0x7F2599D0u;
    // 7F2599D0: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2599D4:
    ctx->pc = 0x7F2599D4u;
    // 7F2599D4: bl      0x7F042B74
    {
            ctx->lr = 0x7F2599D8u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2599D8:
    ctx->pc = 0x7F2599D8u;
    ctx->downcount -= 20;
    // 7F2599D8: lwz     r6, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2599DC:
    ctx->pc = 0x7F2599DCu;
    // 7F2599DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2599E0:
    ctx->pc = 0x7F2599E0u;
    // 7F2599E0: addi    r5, r3, -5736
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F2599E4:
    ctx->pc = 0x7F2599E4u;
    // 7F2599E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2599E8:
    ctx->pc = 0x7F2599E8u;
    // 7F2599E8: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2599EC:
    ctx->pc = 0x7F2599ECu;
    // 7F2599EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2599F0:
    ctx->pc = 0x7F2599F0u;
    // 7F2599F0: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2599F4:
    ctx->pc = 0x7F2599F4u;
    // 7F2599F4: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2599F8:
    ctx->pc = 0x7F2599F8u;
    // 7F2599F8: lwz     r6, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2599FC:
    ctx->pc = 0x7F2599FCu;
    // 7F2599FC: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A00:
    ctx->pc = 0x7F259A00u;
    // 7F259A00: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F259A04:
    ctx->pc = 0x7F259A04u;
    // 7F259A04: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259A08:
    ctx->pc = 0x7F259A08u;
    // 7F259A08: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A0C:
    ctx->pc = 0x7F259A0Cu;
    // 7F259A0C: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259A10:
    ctx->pc = 0x7F259A10u;
    // 7F259A10: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F259A14:
    ctx->pc = 0x7F259A14u;
    // 7F259A14: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F259A18:
    ctx->pc = 0x7F259A18u;
    // 7F259A18: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F259A1C:
    ctx->pc = 0x7F259A1Cu;
    // 7F259A1C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F259A20:
    ctx->pc = 0x7F259A20u;
    // 7F259A20: or.   r0, r3, r0
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

label_7F259A24:
    ctx->pc = 0x7F259A24u;
    // 7F259A24: bc    12, 2, 0x7F259A84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259A84;
        }
    }

label_7F259A28:
    ctx->pc = 0x7F259A28u;
    ctx->downcount -= 5;
    // 7F259A28: lwz     r3, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259A2C:
    ctx->pc = 0x7F259A2Cu;
    // 7F259A2C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A30:
    ctx->pc = 0x7F259A30u;
    // 7F259A30: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F259A34:
    ctx->pc = 0x7F259A34u;
    // 7F259A34: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259A38:
    ctx->pc = 0x7F259A38u;
    // 7F259A38: b       0x7F259A84
    {
            goto label_7F259A84;
    }

label_7F259A3C:
    ctx->pc = 0x7F259A3Cu;
    ctx->downcount -= 6;
    // 7F259A3C: lwz     r4, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259A40:
    ctx->pc = 0x7F259A40u;
    // 7F259A40: addi    r3, r26, 48
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(48);

label_7F259A44:
    ctx->pc = 0x7F259A44u;
    // 7F259A44: lwz     r5, 144(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259A48:
    ctx->pc = 0x7F259A48u;
    // 7F259A48: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259A4C:
    ctx->pc = 0x7F259A4Cu;
    // 7F259A4C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259A50:
    ctx->pc = 0x7F259A50u;
    // 7F259A50: bl      0x7F042B74
    {
            ctx->lr = 0x7F259A54u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F259A54:
    ctx->pc = 0x7F259A54u;
    ctx->downcount -= 12;
    // 7F259A54: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259A58:
    ctx->pc = 0x7F259A58u;
    // 7F259A58: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A5C:
    ctx->pc = 0x7F259A5Cu;
    // 7F259A5C: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F259A60:
    ctx->pc = 0x7F259A60u;
    // 7F259A60: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259A64:
    ctx->pc = 0x7F259A64u;
    // 7F259A64: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259A68:
    ctx->pc = 0x7F259A68u;
    // 7F259A68: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A6C:
    ctx->pc = 0x7F259A6Cu;
    // 7F259A6C: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F259A70:
    ctx->pc = 0x7F259A70u;
    // 7F259A70: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259A74:
    ctx->pc = 0x7F259A74u;
    // 7F259A74: lwz     r3, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259A78:
    ctx->pc = 0x7F259A78u;
    // 7F259A78: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259A7C:
    ctx->pc = 0x7F259A7Cu;
    // 7F259A7C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F259A80:
    ctx->pc = 0x7F259A80u;
    // 7F259A80: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259A84:
    ctx->pc = 0x7F259A84u;
    ctx->downcount -= 11;
    // 7F259A84: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F259A88:
    ctx->pc = 0x7F259A88u;
    // 7F259A88: lwz     r3, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259A8C:
    ctx->pc = 0x7F259A8Cu;
    // 7F259A8C: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F259A90:
    ctx->pc = 0x7F259A90u;
    // 7F259A90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F259A94:
    ctx->pc = 0x7F259A94u;
    // 7F259A94: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259A98:
    ctx->pc = 0x7F259A98u;
    // 7F259A98: lwz     r28, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F259A9C:
    ctx->pc = 0x7F259A9Cu;
    // 7F259A9C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259AA0:
    ctx->pc = 0x7F259AA0u;
    // 7F259AA0: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259AA4:
    ctx->pc = 0x7F259AA4u;
    // 7F259AA4: stw     r0, 172(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259AA8:
    ctx->pc = 0x7F259AA8u;
    // 7F259AA8: addi    r27, r3, 2388
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F259AAC:
    ctx->pc = 0x7F259AACu;
    // 7F259AAC: bc    12, 2, 0x7F259AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259AE8;
        }
    }

label_7F259AB0:
    ctx->pc = 0x7F259AB0u;
    ctx->downcount -= 1;
    // 7F259AB0: bc    4, 0, 0x7F259AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259AC0;
        }
    }

label_7F259AB4:
    ctx->pc = 0x7F259AB4u;
    ctx->downcount -= 2;
    // 7F259AB4: cmpwi   r28, 1
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

label_7F259AB8:
    ctx->pc = 0x7F259AB8u;
    // 7F259AB8: bc    4, 0, 0x7F259AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259AD4;
        }
    }

label_7F259ABC:
    ctx->pc = 0x7F259ABCu;
    ctx->downcount -= 1;
    // 7F259ABC: b       0x7F259D90
    {
            goto label_7F259D90;
    }

label_7F259AC0:
    ctx->pc = 0x7F259AC0u;
    ctx->downcount -= 2;
    // 7F259AC0: cmpwi   r28, 12
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259AC4:
    ctx->pc = 0x7F259AC4u;
    // 7F259AC4: bc    4, 0, 0x7F259D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259D90;
        }
    }

label_7F259AC8:
    ctx->pc = 0x7F259AC8u;
    ctx->downcount -= 2;
    // 7F259AC8: cmpwi   r28, 10
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

label_7F259ACC:
    ctx->pc = 0x7F259ACCu;
    // 7F259ACC: bc    4, 0, 0x7F259AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259AE8;
        }
    }

label_7F259AD0:
    ctx->pc = 0x7F259AD0u;
    ctx->downcount -= 1;
    // 7F259AD0: b       0x7F259D90
    {
            goto label_7F259D90;
    }

label_7F259AD4:
    ctx->pc = 0x7F259AD4u;
    ctx->downcount -= 2;
    // 7F259AD4: cmpwi   r29, 1
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

label_7F259AD8:
    ctx->pc = 0x7F259AD8u;
    // 7F259AD8: bc    4, 2, 0x7F259D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259D90;
        }
    }

label_7F259ADC:
    ctx->pc = 0x7F259ADCu;
    ctx->downcount -= 3;
    // 7F259ADC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F259AE0:
    ctx->pc = 0x7F259AE0u;
    // 7F259AE0: stw     r0, 172(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259AE4:
    ctx->pc = 0x7F259AE4u;
    // 7F259AE4: b       0x7F259D90
    {
            goto label_7F259D90;
    }

label_7F259AE8:
    ctx->pc = 0x7F259AE8u;
    ctx->downcount -= 5;
    // 7F259AE8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259AEC:
    ctx->pc = 0x7F259AECu;
    // 7F259AEC: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F259AF0:
    ctx->pc = 0x7F259AF0u;
    // 7F259AF0: addi    r31, r3, 13312
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(13312);

label_7F259AF4:
    ctx->pc = 0x7F259AF4u;
    // 7F259AF4: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259AF8:
    ctx->pc = 0x7F259AF8u;
    // 7F259AF8: bl      0x7F01ED58
    {
            ctx->lr = 0x7F259AFCu;
            ctx->pc = 0x7F01ED58u;
            return;
    }

label_7F259AFC:
    ctx->pc = 0x7F259AFCu;
    ctx->downcount -= 2;
    // 7F259AFC: cmpwi   r3, 0
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

label_7F259B00:
    ctx->pc = 0x7F259B00u;
    // 7F259B00: bc    12, 2, 0x7F259D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259D90;
        }
    }

label_7F259B04:
    ctx->pc = 0x7F259B04u;
    ctx->downcount -= 2;
    // 7F259B04: cmpwi   r29, 1
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

label_7F259B08:
    ctx->pc = 0x7F259B08u;
    // 7F259B08: bc    12, 2, 0x7F259D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259D20;
        }
    }

label_7F259B0C:
    ctx->pc = 0x7F259B0Cu;
    ctx->downcount -= 1;
    // 7F259B0C: bc    4, 0, 0x7F259D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259D64;
        }
    }

label_7F259B10:
    ctx->pc = 0x7F259B10u;
    ctx->downcount -= 2;
    // 7F259B10: cmpwi   r29, 0
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

label_7F259B14:
    ctx->pc = 0x7F259B14u;
    // 7F259B14: bc    4, 0, 0x7F259B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259B1C;
        }
    }

label_7F259B18:
    ctx->pc = 0x7F259B18u;
    ctx->downcount -= 1;
    // 7F259B18: b       0x7F259D64
    {
            goto label_7F259D64;
    }

label_7F259B1C:
    ctx->pc = 0x7F259B1Cu;
    ctx->downcount -= 4;
    // 7F259B1C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F259B20:
    ctx->pc = 0x7F259B20u;
    // 7F259B20: lbz     r0, -6202(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F259B24:
    ctx->pc = 0x7F259B24u;
    // 7F259B24: cmplwi  r0, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259B28:
    ctx->pc = 0x7F259B28u;
    // 7F259B28: bc    12, 2, 0x7F259D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259D90;
        }
    }

label_7F259B2C:
    ctx->pc = 0x7F259B2Cu;
    ctx->downcount -= 5;
    // 7F259B2C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F259B30:
    ctx->pc = 0x7F259B30u;
    // 7F259B30: li      r3, 49
    ctx->gpr[3] = (u32)(s32)(49);

label_7F259B34:
    ctx->pc = 0x7F259B34u;
    // 7F259B34: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F259B38:
    ctx->pc = 0x7F259B38u;
    // 7F259B38: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F259B3C:
    ctx->pc = 0x7F259B3Cu;
    // 7F259B3C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F259B40u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F259B40:
    ctx->pc = 0x7F259B40u;
    ctx->downcount -= 5;
    // 7F259B40: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F259B44:
    ctx->pc = 0x7F259B44u;
    // 7F259B44: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F259B48:
    ctx->pc = 0x7F259B48u;
    // 7F259B48: addi    r4, r27, -4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(-4);

label_7F259B4C:
    ctx->pc = 0x7F259B4Cu;
    // 7F259B4C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F259B50:
    loop_7F259B50(ctx);
    if (ctx->pc == 0x7F259B64u) goto label_7F259B64;
    return;
label_7F259B54:
    ctx->pc = 0x7F259B54u;
    // 7F259B54: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F259B58:
    ctx->pc = 0x7F259B58u;
    // 7F259B58: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259B5C:
    ctx->pc = 0x7F259B5Cu;
    // 7F259B5C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F259B60:
    // 7F259B60: bc    16, 0, 0x7F259B50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259B50u;
                return;
            }
            goto label_7F259B50;
        }
    }

label_7F259B64:
    ctx->pc = 0x7F259B64u;
    ctx->downcount -= 2;
    // 7F259B64: cmplwi  r28, 0x000B
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x000Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259B68:
    ctx->pc = 0x7F259B68u;
    // 7F259B68: bc    4, 2, 0x7F259C34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259C34;
        }
    }

label_7F259B6C:
    ctx->pc = 0x7F259B6Cu;
    ctx->downcount -= 13;
    // 7F259B6C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F259B70:
    ctx->pc = 0x7F259B70u;
    // 7F259B70: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259B74:
    ctx->pc = 0x7F259B74u;
    // 7F259B74: addi    r8, r4, 22264
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(22264);

label_7F259B78:
    ctx->pc = 0x7F259B78u;
    // 7F259B78: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259B7C:
    ctx->pc = 0x7F259B7Cu;
    // 7F259B7C: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F259B80:
    ctx->pc = 0x7F259B80u;
    // 7F259B80: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259B84:
    ctx->pc = 0x7F259B84u;
    // 7F259B84: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259B88:
    ctx->pc = 0x7F259B88u;
    // 7F259B88: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259B8C:
    ctx->pc = 0x7F259B8Cu;
    // 7F259B8C: stw     r7, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F259B90:
    ctx->pc = 0x7F259B90u;
    // 7F259B90: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259B94:
    ctx->pc = 0x7F259B94u;
    // 7F259B94: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F259B98:
    ctx->pc = 0x7F259B98u;
    // 7F259B98: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259B9C:
    ctx->pc = 0x7F259B9Cu;
    // 7F259B9C: bl      0x7F3CC414
    {
            ctx->lr = 0x7F259BA0u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F259BA0:
    ctx->pc = 0x7F259BA0u;
    ctx->downcount -= 4;
    // 7F259BA0: lwz     r4, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259BA4:
    ctx->pc = 0x7F259BA4u;
    // 7F259BA4: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259BA8:
    ctx->pc = 0x7F259BA8u;
    // 7F259BA8: addi    r4, r4, 32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32);

label_7F259BAC:
    ctx->pc = 0x7F259BACu;
    // 7F259BAC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F259BB0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F259BB0:
    ctx->pc = 0x7F259BB0u;
    ctx->downcount -= 4;
    // 7F259BB0: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F259BB4:
    ctx->pc = 0x7F259BB4u;
    // 7F259BB4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F259BB8:
    ctx->pc = 0x7F259BB8u;
    // 7F259BB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259BBC:
    ctx->pc = 0x7F259BBCu;
    // 7F259BBC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F259BC0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F259BC0:
    ctx->pc = 0x7F259BC0u;
    ctx->downcount -= 5;
    // 7F259BC0: lwz     r3, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259BC4:
    ctx->pc = 0x7F259BC4u;
    // 7F259BC4: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259BC8:
    ctx->pc = 0x7F259BC8u;
    // 7F259BC8: addi    r5, r1, 60
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(60);

label_7F259BCC:
    ctx->pc = 0x7F259BCCu;
    // 7F259BCC: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F259BD0:
    ctx->pc = 0x7F259BD0u;
    // 7F259BD0: bl      0x7F10B764
    {
            ctx->lr = 0x7F259BD4u;
            ctx->pc = 0x7F10B764u;
            return;
    }

label_7F259BD4:
    ctx->pc = 0x7F259BD4u;
    ctx->downcount -= 2;
    // 7F259BD4: cmpwi   r3, 0
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

label_7F259BD8:
    ctx->pc = 0x7F259BD8u;
    // 7F259BD8: bc    12, 2, 0x7F259CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259CB4;
        }
    }

label_7F259BDC:
    ctx->pc = 0x7F259BDCu;
    ctx->downcount -= 2;
    // 7F259BDC: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F259BE0:
    ctx->pc = 0x7F259BE0u;
    // 7F259BE0: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F259BE4u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F259BE4:
    ctx->pc = 0x7F259BE4u;
    ctx->downcount -= 2;
    // 7F259BE4: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F259BE8:
    ctx->pc = 0x7F259BE8u;
    // 7F259BE8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F259BECu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F259BEC:
    ctx->pc = 0x7F259BECu;
    ctx->downcount -= 4;
    // 7F259BEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259BF0:
    ctx->pc = 0x7F259BF0u;
    // 7F259BF0: lfs     f0, 22296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259BF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F259BF4:
    ctx->pc = 0x7F259BF4u;
    // 7F259BF4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F259BF4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F259BF8:
    ctx->pc = 0x7F259BF8u;
    // 7F259BF8: bc    4, 1, 0x7F259CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259CB4;
        }
    }

label_7F259BFC:
    ctx->pc = 0x7F259BFCu;
    ctx->downcount -= 6;
    // 7F259BFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F259C00:
    ctx->pc = 0x7F259C00u;
    // 7F259C00: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F259C00u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F259C04:
    ctx->pc = 0x7F259C04u;
    // 7F259C04: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F259C08:
    ctx->pc = 0x7F259C08u;
    // 7F259C08: lfs     f1, 22300(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F259C08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F259C0C:
    ctx->pc = 0x7F259C0Cu;
    // 7F259C0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259C10:
    ctx->pc = 0x7F259C10u;
    // 7F259C10: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F259C14u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F259C14:
    ctx->pc = 0x7F259C14u;
    ctx->downcount -= 4;
    // 7F259C14: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259C18:
    ctx->pc = 0x7F259C18u;
    // 7F259C18: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F259C1C:
    ctx->pc = 0x7F259C1Cu;
    // 7F259C1C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259C20:
    ctx->pc = 0x7F259C20u;
    // 7F259C20: bl      0x800261B4
    {
            ctx->lr = 0x7F259C24u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F259C24:
    ctx->pc = 0x7F259C24u;
    ctx->downcount -= 3;
    // 7F259C24: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_7F259C28:
    ctx->pc = 0x7F259C28u;
    // 7F259C28: addi    r4, r1, 76
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(76);

label_7F259C2C:
    ctx->pc = 0x7F259C2Cu;
    // 7F259C2C: bl      0x7F3CC430
    {
            ctx->lr = 0x7F259C30u;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F259C30:
    ctx->pc = 0x7F259C30u;
    ctx->downcount -= 1;
    // 7F259C30: b       0x7F259CB4
    {
            goto label_7F259CB4;
    }

label_7F259C34:
    ctx->pc = 0x7F259C34u;
    ctx->downcount -= 2;
    // 7F259C34: cmplwi  r28, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259C38:
    ctx->pc = 0x7F259C38u;
    // 7F259C38: bc    4, 2, 0x7F259CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259CB4;
        }
    }

label_7F259C3C:
    ctx->pc = 0x7F259C3Cu;
    ctx->downcount -= 12;
    // 7F259C3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F259C40:
    ctx->pc = 0x7F259C40u;
    // 7F259C40: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259C44:
    ctx->pc = 0x7F259C44u;
    // 7F259C44: addi    r7, r4, 22280
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(22280);

label_7F259C48:
    ctx->pc = 0x7F259C48u;
    // 7F259C48: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F259C4C:
    ctx->pc = 0x7F259C4Cu;
    // 7F259C4C: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259C50:
    ctx->pc = 0x7F259C50u;
    // 7F259C50: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259C54:
    ctx->pc = 0x7F259C54u;
    // 7F259C54: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259C58:
    ctx->pc = 0x7F259C58u;
    // 7F259C58: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259C5C:
    ctx->pc = 0x7F259C5Cu;
    // 7F259C5C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F259C60:
    ctx->pc = 0x7F259C60u;
    // 7F259C60: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F259C64:
    ctx->pc = 0x7F259C64u;
    // 7F259C64: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259C68:
    ctx->pc = 0x7F259C68u;
    // 7F259C68: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F259C6Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F259C6C:
    ctx->pc = 0x7F259C6Cu;
    ctx->downcount -= 4;
    // 7F259C6C: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F259C70:
    ctx->pc = 0x7F259C70u;
    // 7F259C70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F259C74:
    ctx->pc = 0x7F259C74u;
    // 7F259C74: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259C78:
    ctx->pc = 0x7F259C78u;
    // 7F259C78: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F259C7Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F259C7C:
    ctx->pc = 0x7F259C7Cu;
    ctx->downcount -= 5;
    // 7F259C7C: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259C80:
    ctx->pc = 0x7F259C80u;
    // 7F259C80: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F259C84:
    ctx->pc = 0x7F259C84u;
    // 7F259C84: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F259C88:
    ctx->pc = 0x7F259C88u;
    // 7F259C88: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F259C8C:
    ctx->pc = 0x7F259C8Cu;
    // 7F259C8C: bl      0x7F1070C0
    {
            ctx->lr = 0x7F259C90u;
            ctx->pc = 0x7F1070C0u;
            return;
    }

label_7F259C90:
    ctx->pc = 0x7F259C90u;
    ctx->downcount -= 7;
    // 7F259C90: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F259C94:
    ctx->pc = 0x7F259C94u;
    // 7F259C94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F259C98:
    ctx->pc = 0x7F259C98u;
    // 7F259C98: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259C98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F259C9C:
    ctx->pc = 0x7F259C9Cu;
    // 7F259C9C: lfs     f0, 22304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F259C9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F259CA0:
    ctx->pc = 0x7F259CA0u;
    // 7F259CA0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F259CA0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F259CA4:
    ctx->pc = 0x7F259CA4u;
    // 7F259CA4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F259CA4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F259CA8:
    ctx->pc = 0x7F259CA8u;
    // 7F259CA8: bc    4, 1, 0x7F259CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259CB4;
        }
    }

label_7F259CAC:
    ctx->pc = 0x7F259CACu;
    ctx->downcount -= 2;
    // 7F259CAC: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F259CACu)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F259CB0:
    ctx->pc = 0x7F259CB0u;
    // 7F259CB0: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F259CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F259CB4:
    ctx->pc = 0x7F259CB4u;
    ctx->downcount -= 2;
    // 7F259CB4: cmplwi  r28, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259CB8:
    ctx->pc = 0x7F259CB8u;
    // 7F259CB8: bc    4, 2, 0x7F259CD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259CD8;
        }
    }

label_7F259CBC:
    ctx->pc = 0x7F259CBCu;
    ctx->downcount -= 6;
    // 7F259CBC: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259CC0:
    ctx->pc = 0x7F259CC0u;
    // 7F259CC0: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_7F259CC4:
    ctx->pc = 0x7F259CC4u;
    // 7F259CC4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F259CC8:
    ctx->pc = 0x7F259CC8u;
    // 7F259CC8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F259CCC:
    ctx->pc = 0x7F259CCCu;
    // 7F259CCC: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F259CD0:
    ctx->pc = 0x7F259CD0u;
    // 7F259CD0: bl      0x7F2398D0
    {
            ctx->lr = 0x7F259CD4u;
            ctx->pc = 0x7F2398D0u;
            return;
    }

label_7F259CD4:
    ctx->pc = 0x7F259CD4u;
    ctx->downcount -= 1;
    // 7F259CD4: b       0x7F259D14
    {
            goto label_7F259D14;
    }

label_7F259CD8:
    ctx->pc = 0x7F259CD8u;
    ctx->downcount -= 2;
    // 7F259CD8: cmplwi  r28, 0x000B
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x000Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259CDC:
    ctx->pc = 0x7F259CDCu;
    // 7F259CDC: bc    4, 2, 0x7F259CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259CFC;
        }
    }

label_7F259CE0:
    ctx->pc = 0x7F259CE0u;
    ctx->downcount -= 6;
    // 7F259CE0: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259CE4:
    ctx->pc = 0x7F259CE4u;
    // 7F259CE4: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_7F259CE8:
    ctx->pc = 0x7F259CE8u;
    // 7F259CE8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F259CEC:
    ctx->pc = 0x7F259CECu;
    // 7F259CEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F259CF0:
    ctx->pc = 0x7F259CF0u;
    // 7F259CF0: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F259CF4:
    ctx->pc = 0x7F259CF4u;
    // 7F259CF4: bl      0x7F2398D0
    {
            ctx->lr = 0x7F259CF8u;
            ctx->pc = 0x7F2398D0u;
            return;
    }

label_7F259CF8:
    ctx->pc = 0x7F259CF8u;
    ctx->downcount -= 1;
    // 7F259CF8: b       0x7F259D14
    {
            goto label_7F259D14;
    }

label_7F259CFC:
    ctx->pc = 0x7F259CFCu;
    ctx->downcount -= 6;
    // 7F259CFC: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259D00:
    ctx->pc = 0x7F259D00u;
    // 7F259D00: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_7F259D04:
    ctx->pc = 0x7F259D04u;
    // 7F259D04: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F259D08:
    ctx->pc = 0x7F259D08u;
    // 7F259D08: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F259D0C:
    ctx->pc = 0x7F259D0Cu;
    // 7F259D0C: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259D10:
    ctx->pc = 0x7F259D10u;
    // 7F259D10: bl      0x7F2398D0
    {
            ctx->lr = 0x7F259D14u;
            ctx->pc = 0x7F2398D0u;
            return;
    }

label_7F259D14:
    ctx->pc = 0x7F259D14u;
    ctx->downcount -= 3;
    // 7F259D14: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F259D18:
    ctx->pc = 0x7F259D18u;
    // 7F259D18: stw     r0, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259D1C:
    ctx->pc = 0x7F259D1Cu;
    // 7F259D1C: b       0x7F259D64
    {
            goto label_7F259D64;
    }

label_7F259D20:
    ctx->pc = 0x7F259D20u;
    ctx->downcount -= 4;
    // 7F259D20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F259D24:
    ctx->pc = 0x7F259D24u;
    // 7F259D24: lbz     r0, -6201(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6201);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F259D28:
    ctx->pc = 0x7F259D28u;
    // 7F259D28: cmplwi  r0, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F259D2C:
    ctx->pc = 0x7F259D2Cu;
    // 7F259D2C: bc    12, 2, 0x7F259D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259D90;
        }
    }

label_7F259D30:
    ctx->pc = 0x7F259D30u;
    ctx->downcount -= 5;
    // 7F259D30: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F259D34:
    ctx->pc = 0x7F259D34u;
    // 7F259D34: li      r3, 176
    ctx->gpr[3] = (u32)(s32)(176);

label_7F259D38:
    ctx->pc = 0x7F259D38u;
    // 7F259D38: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F259D3C:
    ctx->pc = 0x7F259D3Cu;
    // 7F259D3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F259D40:
    ctx->pc = 0x7F259D40u;
    // 7F259D40: bl      0x7F0117B8
    {
            ctx->lr = 0x7F259D44u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F259D44:
    ctx->pc = 0x7F259D44u;
    ctx->downcount -= 6;
    // 7F259D44: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259D48:
    ctx->pc = 0x7F259D48u;
    // 7F259D48: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259D4C:
    ctx->pc = 0x7F259D4Cu;
    // 7F259D4C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F259D50:
    ctx->pc = 0x7F259D50u;
    // 7F259D50: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F259D54:
    ctx->pc = 0x7F259D54u;
    // 7F259D54: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F259D58:
    ctx->pc = 0x7F259D58u;
    // 7F259D58: bl      0x7F23C890
    {
            ctx->lr = 0x7F259D5Cu;
            ctx->pc = 0x7F23C890u;
            return;
    }

label_7F259D5C:
    ctx->pc = 0x7F259D5Cu;
    ctx->downcount -= 2;
    // 7F259D5C: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F259D60:
    ctx->pc = 0x7F259D60u;
    // 7F259D60: stw     r0, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259D64:
    ctx->pc = 0x7F259D64u;
    ctx->downcount -= 11;
    // 7F259D64: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259D68:
    ctx->pc = 0x7F259D68u;
    // 7F259D68: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F259D6C:
    ctx->pc = 0x7F259D6Cu;
    // 7F259D6C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259D70:
    ctx->pc = 0x7F259D70u;
    // 7F259D70: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F259D74:
    ctx->pc = 0x7F259D74u;
    // 7F259D74: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259D78:
    ctx->pc = 0x7F259D78u;
    // 7F259D78: lwz     r3, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259D7C:
    ctx->pc = 0x7F259D7Cu;
    // 7F259D7C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259D80:
    ctx->pc = 0x7F259D80u;
    // 7F259D80: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F259D84:
    ctx->pc = 0x7F259D84u;
    // 7F259D84: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259D88:
    ctx->pc = 0x7F259D88u;
    // 7F259D88: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259D8C:
    ctx->pc = 0x7F259D8Cu;
    // 7F259D8C: bl      0x7F01EC24
    {
            ctx->lr = 0x7F259D90u;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F259D90:
    ctx->pc = 0x7F259D90u;
    ctx->downcount -= 16;
    // 7F259D90: lmw     r26, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F259D94:
    ctx->pc = 0x7F259D94u;
    // 7F259D94: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259D98:
    ctx->pc = 0x7F259D98u;
    // 7F259D98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259D9C:
    ctx->pc = 0x7F259D9Cu;
    // 7F259D9C: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F259DA0:
    ctx->pc = 0x7F259DA0u;
    // 7F259DA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259DA4:
    ctx->pc = 0x7F259DA4u;
    ctx->downcount -= 7;
    // 7F259DA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259DA8:
    ctx->pc = 0x7F259DA8u;
    // 7F259DA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259DAC:
    ctx->pc = 0x7F259DACu;
    // 7F259DAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259DB0:
    ctx->pc = 0x7F259DB0u;
    // 7F259DB0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F259DB4:
    ctx->pc = 0x7F259DB4u;
    // 7F259DB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259DB8:
    ctx->pc = 0x7F259DB8u;
    // 7F259DB8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F259DBC:
    ctx->pc = 0x7F259DBCu;
    // 7F259DBC: bl      0x7F01B234
    {
            ctx->lr = 0x7F259DC0u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F259DC0:
    ctx->pc = 0x7F259DC0u;
    ctx->downcount -= 7;
    // 7F259DC0: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259DC4:
    ctx->pc = 0x7F259DC4u;
    // 7F259DC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259DC8:
    ctx->pc = 0x7F259DC8u;
    // 7F259DC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F259DCC:
    ctx->pc = 0x7F259DCCu;
    // 7F259DCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259DD0:
    ctx->pc = 0x7F259DD0u;
    // 7F259DD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259DD4:
    ctx->pc = 0x7F259DD4u;
    // 7F259DD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259DD8:
    ctx->pc = 0x7F259DD8u;
    ctx->downcount -= 3;
    // 7F259DD8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F259DDC:
    ctx->pc = 0x7F259DDCu;
    // 7F259DDC: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F259DE0:
    ctx->pc = 0x7F259DE0u;
    // 7F259DE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259DE4:
    ctx->pc = 0x7F259DE4u;
    ctx->downcount -= 10;
    // 7F259DE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259DE8:
    ctx->pc = 0x7F259DE8u;
    // 7F259DE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259DEC:
    ctx->pc = 0x7F259DECu;
    // 7F259DEC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F259DF0:
    ctx->pc = 0x7F259DF0u;
    // 7F259DF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259DF4:
    ctx->pc = 0x7F259DF4u;
    // 7F259DF4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F259DF8:
    ctx->pc = 0x7F259DF8u;
    // 7F259DF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259DFC:
    ctx->pc = 0x7F259DFCu;
    // 7F259DFC: addi    r3, r4, 22156
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F259E00:
    ctx->pc = 0x7F259E00u;
    // 7F259E00: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259E04:
    ctx->pc = 0x7F259E04u;
    // 7F259E04: cmplwi  r3, 0x0000
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

label_7F259E08:
    ctx->pc = 0x7F259E08u;
    // 7F259E08: bc    12, 2, 0x7F259E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259E18;
        }
    }

label_7F259E0C:
    ctx->pc = 0x7F259E0Cu;
    ctx->downcount -= 3;
    // 7F259E0C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259E10:
    ctx->pc = 0x7F259E10u;
    // 7F259E10: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259E14:
    ctx->pc = 0x7F259E14u;
    // 7F259E14: bl      0x7F3B0954
    {
            ctx->lr = 0x7F259E18u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F259E18:
    ctx->pc = 0x7F259E18u;
    ctx->downcount -= 2;
    // 7F259E18: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F259E1C:
    ctx->pc = 0x7F259E1Cu;
    // 7F259E1C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F259E20u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F259E20:
    ctx->pc = 0x7F259E20u;
    ctx->downcount -= 2;
    // 7F259E20: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F259E24:
    ctx->pc = 0x7F259E24u;
    // 7F259E24: bl      0x7F042AAC
    {
            ctx->lr = 0x7F259E28u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F259E28:
    ctx->pc = 0x7F259E28u;
    ctx->downcount -= 11;
    // 7F259E28: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F259E2C:
    ctx->pc = 0x7F259E2Cu;
    // 7F259E2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F259E30:
    ctx->pc = 0x7F259E30u;
    // 7F259E30: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F259E34:
    ctx->pc = 0x7F259E34u;
    // 7F259E34: stw     r0, -5672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259E38:
    ctx->pc = 0x7F259E38u;
    // 7F259E38: stw     r0, -5676(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259E3C:
    ctx->pc = 0x7F259E3Cu;
    // 7F259E3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259E40:
    ctx->pc = 0x7F259E40u;
    // 7F259E40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F259E44:
    ctx->pc = 0x7F259E44u;
    // 7F259E44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259E48:
    ctx->pc = 0x7F259E48u;
    // 7F259E48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F259E4C:
    ctx->pc = 0x7F259E4Cu;
    // 7F259E4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259E50:
    ctx->pc = 0x7F259E50u;
    ctx->downcount -= 26;
    // 7F259E50: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259E54:
    ctx->pc = 0x7F259E54u;
    // 7F259E54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259E58:
    ctx->pc = 0x7F259E58u;
    // 7F259E58: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259E5C:
    ctx->pc = 0x7F259E5Cu;
    // 7F259E5C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259E60:
    ctx->pc = 0x7F259E60u;
    // 7F259E60: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F259E64:
    ctx->pc = 0x7F259E64u;
    // 7F259E64: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F259E68:
    ctx->pc = 0x7F259E68u;
    // 7F259E68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259E6C:
    ctx->pc = 0x7F259E6Cu;
    // 7F259E6C: addi    r27, r30, 48
    ctx->gpr[27] = ctx->gpr[30] + (u32)(s32)(48);

label_7F259E70:
    ctx->pc = 0x7F259E70u;
    // 7F259E70: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F259E74:
    ctx->pc = 0x7F259E74u;
    // 7F259E74: rlwinm r28, r31, 3, 0, 28
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[31], 3u) & 0xFFFFFFF8u;
    }

label_7F259E78:
    ctx->pc = 0x7F259E78u;
    // 7F259E78: addi    r29, r6, 13320
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(13320);

label_7F259E7C:
    ctx->pc = 0x7F259E7Cu;
    // 7F259E7C: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F259E80:
    ctx->pc = 0x7F259E80u;
    // 7F259E80: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259E84:
    ctx->pc = 0x7F259E84u;
    // 7F259E84: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F259E88:
    ctx->pc = 0x7F259E88u;
    // 7F259E88: lwzx    r4, r29, r28
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259E8C:
    ctx->pc = 0x7F259E8Cu;
    // 7F259E8C: bl      0x7F04272C
    {
            ctx->lr = 0x7F259E90u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F259E90:
    ctx->pc = 0x7F259E90u;
    ctx->downcount -= 3;
    // 7F259E90: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259E94:
    ctx->pc = 0x7F259E94u;
    // 7F259E94: cmplwi  r0, 0x0000
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

label_7F259E98:
    ctx->pc = 0x7F259E98u;
    // 7F259E98: bc    4, 2, 0x7F259EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259EA4;
        }
    }

label_7F259E9C:
    ctx->pc = 0x7F259E9Cu;
    ctx->downcount -= 2;
    // 7F259E9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259EA0:
    ctx->pc = 0x7F259EA0u;
    // 7F259EA0: b       0x7F259FB4
    {
            goto label_7F259FB4;
    }

label_7F259EA4:
    ctx->pc = 0x7F259EA4u;
    ctx->downcount -= 4;
    // 7F259EA4: lwz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259EA8:
    ctx->pc = 0x7F259EA8u;
    // 7F259EA8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259EAC:
    ctx->pc = 0x7F259EACu;
    // 7F259EAC: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259EB0:
    ctx->pc = 0x7F259EB0u;
    // 7F259EB0: bl      0x7F042B74
    {
            ctx->lr = 0x7F259EB4u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F259EB4:
    ctx->pc = 0x7F259EB4u;
    ctx->downcount -= 8;
    // 7F259EB4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F259EB8:
    ctx->pc = 0x7F259EB8u;
    // 7F259EB8: addi    r27, r30, 92
    ctx->gpr[27] = ctx->gpr[30] + (u32)(s32)(92);

label_7F259EBC:
    ctx->pc = 0x7F259EBCu;
    // 7F259EBC: addi    r0, r3, 13320
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(13320);

label_7F259EC0:
    ctx->pc = 0x7F259EC0u;
    // 7F259EC0: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F259EC4:
    ctx->pc = 0x7F259EC4u;
    // 7F259EC4: add   r4, r0, r28
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F259EC8:
    ctx->pc = 0x7F259EC8u;
    // 7F259EC8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259ECC:
    ctx->pc = 0x7F259ECCu;
    // 7F259ECC: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259ED0:
    ctx->pc = 0x7F259ED0u;
    // 7F259ED0: bl      0x7F04272C
    {
            ctx->lr = 0x7F259ED4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F259ED4:
    ctx->pc = 0x7F259ED4u;
    ctx->downcount -= 3;
    // 7F259ED4: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259ED8:
    ctx->pc = 0x7F259ED8u;
    // 7F259ED8: cmplwi  r0, 0x0000
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

label_7F259EDC:
    ctx->pc = 0x7F259EDCu;
    // 7F259EDC: bc    4, 2, 0x7F259EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259EE8;
        }
    }

label_7F259EE0:
    ctx->pc = 0x7F259EE0u;
    ctx->downcount -= 2;
    // 7F259EE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F259EE4:
    ctx->pc = 0x7F259EE4u;
    // 7F259EE4: b       0x7F259FB4
    {
            goto label_7F259FB4;
    }

label_7F259EE8:
    ctx->pc = 0x7F259EE8u;
    ctx->downcount -= 4;
    // 7F259EE8: lwz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259EEC:
    ctx->pc = 0x7F259EECu;
    // 7F259EEC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259EF0:
    ctx->pc = 0x7F259EF0u;
    // 7F259EF0: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F259EF4:
    ctx->pc = 0x7F259EF4u;
    // 7F259EF4: bl      0x7F042B74
    {
            ctx->lr = 0x7F259EF8u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F259EF8:
    ctx->pc = 0x7F259EF8u;
    ctx->downcount -= 6;
    // 7F259EF8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F259EFC:
    ctx->pc = 0x7F259EFCu;
    // 7F259EFC: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F259F00:
    ctx->pc = 0x7F259F00u;
    // 7F259F00: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F259F04:
    ctx->pc = 0x7F259F04u;
    // 7F259F04: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F08:
    ctx->pc = 0x7F259F08u;
    // 7F259F08: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F0C:
    ctx->pc = 0x7F259F0Cu;
    // 7F259F0C: bl      0x7F3B0938
    {
            ctx->lr = 0x7F259F10u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F259F10:
    ctx->pc = 0x7F259F10u;
    ctx->downcount -= 17;
    // 7F259F10: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F259F14:
    ctx->pc = 0x7F259F14u;
    // 7F259F14: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F259F18:
    ctx->pc = 0x7F259F18u;
    // 7F259F18: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F259F1C:
    ctx->pc = 0x7F259F1Cu;
    // 7F259F1C: lwzx    r8, r29, r28
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[28];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F259F20:
    ctx->pc = 0x7F259F20u;
    // 7F259F20: addi    r7, r6, -5688
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-5688);

label_7F259F24:
    ctx->pc = 0x7F259F24u;
    // 7F259F24: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F259F28:
    ctx->pc = 0x7F259F28u;
    // 7F259F28: addi    r6, r30, 48
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(48);

label_7F259F2C:
    ctx->pc = 0x7F259F2Cu;
    // 7F259F2C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F259F30:
    ctx->pc = 0x7F259F30u;
    // 7F259F30: or   r0, r27, r27
    {
        ctx->gpr[0] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F259F34:
    ctx->pc = 0x7F259F34u;
    // 7F259F34: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F259F38:
    ctx->pc = 0x7F259F38u;
    // 7F259F38: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F3C:
    ctx->pc = 0x7F259F3Cu;
    // 7F259F3C: stw     r6, -5672(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F259F40:
    ctx->pc = 0x7F259F40u;
    // 7F259F40: stw     r0, -5676(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259F44:
    ctx->pc = 0x7F259F44u;
    // 7F259F44: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F48:
    ctx->pc = 0x7F259F48u;
    // 7F259F48: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259F4C:
    ctx->pc = 0x7F259F4Cu;
    // 7F259F4C: rlwinm. r0, r0, 0, 19, 19
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

label_7F259F50:
    ctx->pc = 0x7F259F50u;
    // 7F259F50: bc    12, 2, 0x7F259F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F259F68;
        }
    }

label_7F259F54:
    ctx->pc = 0x7F259F54u;
    ctx->downcount -= 5;
    // 7F259F54: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F259F58:
    ctx->pc = 0x7F259F58u;
    // 7F259F58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F259F5C:
    ctx->pc = 0x7F259F5Cu;
    // 7F259F5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F259F60:
    ctx->pc = 0x7F259F60u;
    // 7F259F60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F259F64:
    ctx->pc = 0x7F259F64u;
    // 7F259F64: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F259F68u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F259F68:
    ctx->pc = 0x7F259F68u;
    ctx->downcount -= 6;
    // 7F259F68: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F6C:
    ctx->pc = 0x7F259F6Cu;
    // 7F259F6C: cmpwi   r31, 1
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

label_7F259F70:
    ctx->pc = 0x7F259F70u;
    // 7F259F70: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259F74:
    ctx->pc = 0x7F259F74u;
    // 7F259F74: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F259F78:
    ctx->pc = 0x7F259F78u;
    // 7F259F78: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259F7C:
    ctx->pc = 0x7F259F7Cu;
    // 7F259F7C: bc    4, 2, 0x7F259FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F259FB0;
        }
    }

label_7F259F80:
    ctx->pc = 0x7F259F80u;
    ctx->downcount -= 9;
    // 7F259F80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F259F84:
    ctx->pc = 0x7F259F84u;
    // 7F259F84: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F259F88:
    ctx->pc = 0x7F259F88u;
    // 7F259F88: stw     r0, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259F8C:
    ctx->pc = 0x7F259F8Cu;
    // 7F259F8C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F259F90:
    ctx->pc = 0x7F259F90u;
    // 7F259F90: addi    r4, r30, 172
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(172);

label_7F259F94:
    ctx->pc = 0x7F259F94u;
    // 7F259F94: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F98:
    ctx->pc = 0x7F259F98u;
    // 7F259F98: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F259F9C:
    ctx->pc = 0x7F259F9Cu;
    // 7F259F9C: addi    r3, r3, 2388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F259FA0:
    ctx->pc = 0x7F259FA0u;
    // 7F259FA0: bl      0x7F2591B0
    {
            ctx->lr = 0x7F259FA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2591B0u;
                return;
            }
            goto label_7F2591B0;
    }

label_7F259FA4:
    ctx->pc = 0x7F259FA4u;
    ctx->downcount -= 3;
    // 7F259FA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259FA8:
    ctx->pc = 0x7F259FA8u;
    // 7F259FA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F259FAC:
    ctx->pc = 0x7F259FACu;
    // 7F259FAC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F259FB0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F259FB0:
    ctx->pc = 0x7F259FB0u;
    ctx->downcount -= 1;
    // 7F259FB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F259FB4:
    ctx->pc = 0x7F259FB4u;
    ctx->downcount -= 16;
    // 7F259FB4: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F259FB8:
    ctx->pc = 0x7F259FB8u;
    // 7F259FB8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F259FBC:
    ctx->pc = 0x7F259FBCu;
    // 7F259FBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F259FC0:
    ctx->pc = 0x7F259FC0u;
    // 7F259FC0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F259FC4:
    ctx->pc = 0x7F259FC4u;
    // 7F259FC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F259FC8:
    ctx->pc = 0x7F259FC8u;
    ctx->downcount -= 25;
    // 7F259FC8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F259FCC:
    ctx->pc = 0x7F259FCCu;
    // 7F259FCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F259FD0:
    ctx->pc = 0x7F259FD0u;
    // 7F259FD0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F259FD4:
    ctx->pc = 0x7F259FD4u;
    // 7F259FD4: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F259FD8:
    ctx->pc = 0x7F259FD8u;
    // 7F259FD8: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F259FDC:
    ctx->pc = 0x7F259FDCu;
    // 7F259FDC: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F259FE0:
    ctx->pc = 0x7F259FE0u;
    // 7F259FE0: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F259FE4:
    ctx->pc = 0x7F259FE4u;
    // 7F259FE4: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F259FE8:
    ctx->pc = 0x7F259FE8u;
    // 7F259FE8: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F259FEC:
    ctx->pc = 0x7F259FECu;
    // 7F259FEC: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F259FF0:
    ctx->pc = 0x7F259FF0u;
    // 7F259FF0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F259FF4:
    ctx->pc = 0x7F259FF4u;
    // 7F259FF4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F259FF8:
    ctx->pc = 0x7F259FF8u;
    // 7F259FF8: li      r5, 176
    ctx->gpr[5] = (u32)(s32)(176);

label_7F259FFC:
    ctx->pc = 0x7F259FFCu;
    // 7F259FFC: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F25A000:
    ctx->pc = 0x7F25A000u;
    // 7F25A000: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F25A004u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F25A004:
    ctx->pc = 0x7F25A004u;
    ctx->downcount -= 2;
    // 7F25A004: or.   r31, r3, r3
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

label_7F25A008:
    ctx->pc = 0x7F25A008u;
    // 7F25A008: bc    12, 2, 0x7F25A0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A0AC;
        }
    }

label_7F25A00C:
    ctx->pc = 0x7F25A00Cu;
    ctx->downcount -= 5;
    // 7F25A00C: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F25A010:
    ctx->pc = 0x7F25A010u;
    // 7F25A010: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F25A014:
    ctx->pc = 0x7F25A014u;
    // 7F25A014: addi    r4, r4, -26320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26320);

label_7F25A018:
    ctx->pc = 0x7F25A018u;
    // 7F25A018: addi    r5, r5, -25116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25116);

label_7F25A01C:
    ctx->pc = 0x7F25A01Cu;
    // 7F25A01C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F25A020u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F25A020:
    ctx->pc = 0x7F25A020u;
    ctx->downcount -= 15;
    // 7F25A020: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A024:
    ctx->pc = 0x7F25A024u;
    // 7F25A024: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F25A028:
    ctx->pc = 0x7F25A028u;
    // 7F25A028: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F25A02C:
    ctx->pc = 0x7F25A02Cu;
    // 7F25A02C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A030:
    ctx->pc = 0x7F25A030u;
    // 7F25A030: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F25A034:
    ctx->pc = 0x7F25A034u;
    // 7F25A034: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F25A038:
    ctx->pc = 0x7F25A038u;
    // 7F25A038: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25A03C:
    ctx->pc = 0x7F25A03Cu;
    // 7F25A03C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25A040:
    ctx->pc = 0x7F25A040u;
    // 7F25A040: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25A044:
    ctx->pc = 0x7F25A044u;
    // 7F25A044: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25A048:
    ctx->pc = 0x7F25A048u;
    // 7F25A048: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F25A04C:
    ctx->pc = 0x7F25A04Cu;
    // 7F25A04C: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F25A050:
    ctx->pc = 0x7F25A050u;
    // 7F25A050: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F25A054:
    ctx->pc = 0x7F25A054u;
    // 7F25A054: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A058:
    ctx->pc = 0x7F25A058u;
    // 7F25A058: bl      0x7F259E50
    {
            ctx->lr = 0x7F25A05Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259E50u;
                return;
            }
            goto label_7F259E50;
    }

label_7F25A05C:
    ctx->pc = 0x7F25A05Cu;
    ctx->downcount -= 2;
    // 7F25A05C: cmpwi   r3, 0
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

label_7F25A060:
    ctx->pc = 0x7F25A060u;
    // 7F25A060: bc    4, 0, 0x7F25A074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25A074;
        }
    }

label_7F25A064:
    ctx->pc = 0x7F25A064u;
    ctx->downcount -= 2;
    // 7F25A064: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A068:
    ctx->pc = 0x7F25A068u;
    // 7F25A068: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25A06Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25A06C:
    ctx->pc = 0x7F25A06Cu;
    ctx->downcount -= 2;
    // 7F25A06C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25A070:
    ctx->pc = 0x7F25A070u;
    // 7F25A070: b       0x7F25A0B0
    {
            goto label_7F25A0B0;
    }

label_7F25A074:
    ctx->pc = 0x7F25A074u;
    ctx->downcount -= 14;
    // 7F25A074: stw     r25, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F25A078:
    ctx->pc = 0x7F25A078u;
    // 7F25A078: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F25A07C:
    ctx->pc = 0x7F25A07Cu;
    // 7F25A07C: addi    r4, r3, -5852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F25A080:
    ctx->pc = 0x7F25A080u;
    // 7F25A080: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F25A084:
    ctx->pc = 0x7F25A084u;
    // 7F25A084: stw     r26, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F25A088:
    ctx->pc = 0x7F25A088u;
    // 7F25A088: stw     r27, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F25A08C:
    ctx->pc = 0x7F25A08Cu;
    // 7F25A08C: stw     r28, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F25A090:
    ctx->pc = 0x7F25A090u;
    // 7F25A090: stw     r29, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F25A094:
    ctx->pc = 0x7F25A094u;
    // 7F25A094: stw     r30, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F25A098:
    ctx->pc = 0x7F25A098u;
    // 7F25A098: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A09C:
    ctx->pc = 0x7F25A09Cu;
    // 7F25A09C: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A0A0:
    ctx->pc = 0x7F25A0A0u;
    // 7F25A0A0: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A0A4:
    ctx->pc = 0x7F25A0A4u;
    // 7F25A0A4: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F25A0A8:
    ctx->pc = 0x7F25A0A8u;
    // 7F25A0A8: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A0AC:
    ctx->pc = 0x7F25A0ACu;
    ctx->downcount -= 1;
    // 7F25A0AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A0B0:
    ctx->pc = 0x7F25A0B0u;
    ctx->downcount -= 16;
    // 7F25A0B0: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A0B4:
    ctx->pc = 0x7F25A0B4u;
    // 7F25A0B4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A0B8:
    ctx->pc = 0x7F25A0B8u;
    // 7F25A0B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A0BC:
    ctx->pc = 0x7F25A0BCu;
    // 7F25A0BC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F25A0C0:
    ctx->pc = 0x7F25A0C0u;
    // 7F25A0C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A0C4:
    ctx->pc = 0x7F25A0C4u;
    ctx->downcount -= 5;
    // 7F25A0C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A0C8:
    ctx->pc = 0x7F25A0C8u;
    // 7F25A0C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A0CC:
    ctx->pc = 0x7F25A0CCu;
    // 7F25A0CC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F25A0D0:
    ctx->pc = 0x7F25A0D0u;
    // 7F25A0D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A0D4:
    ctx->pc = 0x7F25A0D4u;
    // 7F25A0D4: bl      0x7F259FC8
    {
            ctx->lr = 0x7F25A0D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259FC8u;
                return;
            }
            goto label_7F259FC8;
    }

label_7F25A0D8:
    ctx->pc = 0x7F25A0D8u;
    ctx->downcount -= 5;
    // 7F25A0D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A0DC:
    ctx->pc = 0x7F25A0DCu;
    // 7F25A0DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A0E0:
    ctx->pc = 0x7F25A0E0u;
    // 7F25A0E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A0E4:
    ctx->pc = 0x7F25A0E4u;
    // 7F25A0E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A0E8:
    ctx->pc = 0x7F25A0E8u;
    ctx->downcount -= 5;
    // 7F25A0E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A0EC:
    ctx->pc = 0x7F25A0ECu;
    // 7F25A0EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A0F0:
    ctx->pc = 0x7F25A0F0u;
    // 7F25A0F0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F25A0F4:
    ctx->pc = 0x7F25A0F4u;
    // 7F25A0F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A0F8:
    ctx->pc = 0x7F25A0F8u;
    // 7F25A0F8: bl      0x7F259FC8
    {
            ctx->lr = 0x7F25A0FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F259FC8u;
                return;
            }
            goto label_7F259FC8;
    }

label_7F25A0FC:
    ctx->pc = 0x7F25A0FCu;
    ctx->downcount -= 5;
    // 7F25A0FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A100:
    ctx->pc = 0x7F25A100u;
    // 7F25A100: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A104:
    ctx->pc = 0x7F25A104u;
    // 7F25A104: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A108:
    ctx->pc = 0x7F25A108u;
    // 7F25A108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A10C:
    ctx->pc = 0x7F25A10Cu;
    ctx->downcount -= 21;
    // 7F25A10C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A110:
    ctx->pc = 0x7F25A110u;
    // 7F25A110: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A114:
    ctx->pc = 0x7F25A114u;
    // 7F25A114: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A118:
    ctx->pc = 0x7F25A118u;
    // 7F25A118: rlwinm. r0, r5, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A11C:
    ctx->pc = 0x7F25A11Cu;
    // 7F25A11C: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A120:
    ctx->pc = 0x7F25A120u;
    // 7F25A120: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25A124:
    ctx->pc = 0x7F25A124u;
    // 7F25A124: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A128:
    ctx->pc = 0x7F25A128u;
    // 7F25A128: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A12C:
    ctx->pc = 0x7F25A12Cu;
    // 7F25A12C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F25A130:
    ctx->pc = 0x7F25A130u;
    // 7F25A130: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F25A134:
    ctx->pc = 0x7F25A134u;
    // 7F25A134: bc    12, 2, 0x7F25A144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A144;
        }
    }

label_7F25A138:
    ctx->pc = 0x7F25A138u;
    ctx->downcount -= 3;
    // 7F25A138: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F25A13C:
    ctx->pc = 0x7F25A13Cu;
    // 7F25A13C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25A140:
    ctx->pc = 0x7F25A140u;
    // 7F25A140: bl      0x7F26E308
    {
            ctx->lr = 0x7F25A144u;
            ctx->pc = 0x7F26E308u;
            return;
    }

label_7F25A144:
    ctx->pc = 0x7F25A144u;
    ctx->downcount -= 2;
    // 7F25A144: rlwinm. r0, r29, 0, 29, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000006u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A148:
    ctx->pc = 0x7F25A148u;
    // 7F25A148: bc    12, 2, 0x7F25A1D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A1D4;
        }
    }

label_7F25A14C:
    ctx->pc = 0x7F25A14Cu;
    ctx->downcount -= 6;
    // 7F25A14C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F25A150:
    ctx->pc = 0x7F25A150u;
    // 7F25A150: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F25A154:
    ctx->pc = 0x7F25A154u;
    // 7F25A154: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F25A158:
    ctx->pc = 0x7F25A158u;
    // 7F25A158: li      r27, 32
    ctx->gpr[27] = (u32)(s32)(32);

label_7F25A15C:
    ctx->pc = 0x7F25A15Cu;
    // 7F25A15C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F25A160:
    loop_7F25A160(ctx);
    if (ctx->pc == 0x7F25A174u) goto label_7F25A174;
    return;
label_7F25A164:
    ctx->pc = 0x7F25A164u;
    // 7F25A164: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F25A168:
    ctx->pc = 0x7F25A168u;
    // 7F25A168: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A16C:
    ctx->pc = 0x7F25A16Cu;
    // 7F25A16C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F25A170:
    // 7F25A170: bc    16, 0, 0x7F25A160
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A160u;
                return;
            }
            goto label_7F25A160;
        }
    }

label_7F25A174:
    ctx->pc = 0x7F25A174u;
    ctx->downcount -= 2;
    // 7F25A174: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A178:
    ctx->pc = 0x7F25A178u;
    // 7F25A178: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25A17Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25A17C:
    ctx->pc = 0x7F25A17Cu;
    ctx->downcount -= 7;
    // 7F25A17C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F25A180:
    ctx->pc = 0x7F25A180u;
    // 7F25A180: rlwinm r5, r26, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[26], 4u) & 0xFFFFFFF0u;
    }

label_7F25A184:
    ctx->pc = 0x7F25A184u;
    // 7F25A184: addi    r0, r3, 13336
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(13336);

label_7F25A188:
    ctx->pc = 0x7F25A188u;
    // 7F25A188: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F25A18C:
    ctx->pc = 0x7F25A18Cu;
    // 7F25A18C: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F25A190:
    ctx->pc = 0x7F25A190u;
    // 7F25A190: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25A194:
    ctx->pc = 0x7F25A194u;
    // 7F25A194: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F25A198u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F25A198:
    ctx->pc = 0x7F25A198u;
    ctx->downcount -= 2;
    // 7F25A198: rlwinm. r0, r29, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A19C:
    ctx->pc = 0x7F25A19Cu;
    // 7F25A19C: bc    12, 2, 0x7F25A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A1A4;
        }
    }

label_7F25A1A0:
    ctx->pc = 0x7F25A1A0u;
    ctx->downcount -= 1;
    // 7F25A1A0: ori     r27, r27, 0x0001
    ctx->gpr[27] = ctx->gpr[27] | 0x0001u;

label_7F25A1A4:
    ctx->pc = 0x7F25A1A4u;
    ctx->downcount -= 2;
    // 7F25A1A4: rlwinm. r0, r29, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A1A8:
    ctx->pc = 0x7F25A1A8u;
    // 7F25A1A8: bc    12, 2, 0x7F25A1B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A1B0;
        }
    }

label_7F25A1AC:
    ctx->pc = 0x7F25A1ACu;
    ctx->downcount -= 1;
    // 7F25A1AC: ori     r27, r27, 0x0002
    ctx->gpr[27] = ctx->gpr[27] | 0x0002u;

label_7F25A1B0:
    ctx->pc = 0x7F25A1B0u;
    ctx->downcount -= 9;
    // 7F25A1B0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25A1B4:
    ctx->pc = 0x7F25A1B4u;
    // 7F25A1B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25A1B8:
    ctx->pc = 0x7F25A1B8u;
    // 7F25A1B8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F25A1BC:
    ctx->pc = 0x7F25A1BCu;
    // 7F25A1BC: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F25A1C0:
    ctx->pc = 0x7F25A1C0u;
    // 7F25A1C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F25A1C4:
    ctx->pc = 0x7F25A1C4u;
    // 7F25A1C4: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F25A1C8:
    ctx->pc = 0x7F25A1C8u;
    // 7F25A1C8: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F25A1CC:
    ctx->pc = 0x7F25A1CCu;
    // 7F25A1CC: li      r10, 2
    ctx->gpr[10] = (u32)(s32)(2);

label_7F25A1D0:
    ctx->pc = 0x7F25A1D0u;
    // 7F25A1D0: bl      0x7F27727C
    {
            ctx->lr = 0x7F25A1D4u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F25A1D4:
    ctx->pc = 0x7F25A1D4u;
    ctx->downcount -= 2;
    // 7F25A1D4: rlwinm. r0, r29, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A1D8:
    ctx->pc = 0x7F25A1D8u;
    // 7F25A1D8: bc    12, 2, 0x7F25A1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A1E4;
        }
    }

label_7F25A1DC:
    ctx->pc = 0x7F25A1DCu;
    ctx->downcount -= 2;
    // 7F25A1DC: ori     r0, r31, 0x0008
    ctx->gpr[0] = ctx->gpr[31] | 0x0008u;

label_7F25A1E0:
    ctx->pc = 0x7F25A1E0u;
    // 7F25A1E0: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F25A1E4:
    ctx->pc = 0x7F25A1E4u;
    ctx->downcount -= 2;
    // 7F25A1E4: rlwinm. r0, r29, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A1E8:
    ctx->pc = 0x7F25A1E8u;
    // 7F25A1E8: bc    12, 2, 0x7F25A1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A1F4;
        }
    }

label_7F25A1EC:
    ctx->pc = 0x7F25A1ECu;
    ctx->downcount -= 2;
    // 7F25A1EC: ori     r0, r30, 0x0040
    ctx->gpr[0] = ctx->gpr[30] | 0x0040u;

label_7F25A1F0:
    ctx->pc = 0x7F25A1F0u;
    // 7F25A1F0: extsb r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F25A1F4:
    ctx->pc = 0x7F25A1F4u;
    ctx->downcount -= 4;
    // 7F25A1F4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A1F8:
    ctx->pc = 0x7F25A1F8u;
    // 7F25A1F8: extsb r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[30];
    }

label_7F25A1FC:
    ctx->pc = 0x7F25A1FCu;
    // 7F25A1FC: extsb r5, r31
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[31];
    }

label_7F25A200:
    ctx->pc = 0x7F25A200u;
    // 7F25A200: bl      0x7F260494
    {
            ctx->lr = 0x7F25A204u;
            ctx->pc = 0x7F260494u;
            return;
    }

label_7F25A204:
    ctx->pc = 0x7F25A204u;
    ctx->downcount -= 16;
    // 7F25A204: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A208:
    ctx->pc = 0x7F25A208u;
    // 7F25A208: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A20C:
    ctx->pc = 0x7F25A20Cu;
    // 7F25A20C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A210:
    ctx->pc = 0x7F25A210u;
    // 7F25A210: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F25A214:
    ctx->pc = 0x7F25A214u;
    // 7F25A214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A218:
    ctx->pc = 0x7F25A218u;
    ctx->downcount -= 21;
    // 7F25A218: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A21C:
    ctx->pc = 0x7F25A21Cu;
    // 7F25A21C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A220:
    ctx->pc = 0x7F25A220u;
    // 7F25A220: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A224:
    ctx->pc = 0x7F25A224u;
    // 7F25A224: rlwinm. r0, r5, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A228:
    ctx->pc = 0x7F25A228u;
    // 7F25A228: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A22C:
    ctx->pc = 0x7F25A22Cu;
    // 7F25A22C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25A230:
    ctx->pc = 0x7F25A230u;
    // 7F25A230: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A234:
    ctx->pc = 0x7F25A234u;
    // 7F25A234: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A238:
    ctx->pc = 0x7F25A238u;
    // 7F25A238: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F25A23C:
    ctx->pc = 0x7F25A23Cu;
    // 7F25A23C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F25A240:
    ctx->pc = 0x7F25A240u;
    // 7F25A240: bc    12, 2, 0x7F25A250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A250;
        }
    }

label_7F25A244:
    ctx->pc = 0x7F25A244u;
    ctx->downcount -= 3;
    // 7F25A244: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F25A248:
    ctx->pc = 0x7F25A248u;
    // 7F25A248: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25A24C:
    ctx->pc = 0x7F25A24Cu;
    // 7F25A24C: bl      0x7F26E52C
    {
            ctx->lr = 0x7F25A250u;
            ctx->pc = 0x7F26E52Cu;
            return;
    }

label_7F25A250:
    ctx->pc = 0x7F25A250u;
    ctx->downcount -= 2;
    // 7F25A250: rlwinm. r0, r29, 0, 29, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000006u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A254:
    ctx->pc = 0x7F25A254u;
    // 7F25A254: bc    12, 2, 0x7F25A2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A2E0;
        }
    }

label_7F25A258:
    ctx->pc = 0x7F25A258u;
    ctx->downcount -= 6;
    // 7F25A258: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F25A25C:
    ctx->pc = 0x7F25A25Cu;
    // 7F25A25C: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F25A260:
    ctx->pc = 0x7F25A260u;
    // 7F25A260: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F25A264:
    ctx->pc = 0x7F25A264u;
    // 7F25A264: li      r27, 32
    ctx->gpr[27] = (u32)(s32)(32);

label_7F25A268:
    ctx->pc = 0x7F25A268u;
    // 7F25A268: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F25A26C:
    loop_7F25A26C(ctx);
    if (ctx->pc == 0x7F25A280u) goto label_7F25A280;
    return;
label_7F25A270:
    ctx->pc = 0x7F25A270u;
    // 7F25A270: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F25A274:
    ctx->pc = 0x7F25A274u;
    // 7F25A274: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A278:
    ctx->pc = 0x7F25A278u;
    // 7F25A278: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F25A27C:
    // 7F25A27C: bc    16, 0, 0x7F25A26C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A26Cu;
                return;
            }
            goto label_7F25A26C;
        }
    }

label_7F25A280:
    ctx->pc = 0x7F25A280u;
    ctx->downcount -= 2;
    // 7F25A280: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A284:
    ctx->pc = 0x7F25A284u;
    // 7F25A284: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25A288u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25A288:
    ctx->pc = 0x7F25A288u;
    ctx->downcount -= 7;
    // 7F25A288: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F25A28C:
    ctx->pc = 0x7F25A28Cu;
    // 7F25A28C: rlwinm r5, r26, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[26], 4u) & 0xFFFFFFF0u;
    }

label_7F25A290:
    ctx->pc = 0x7F25A290u;
    // 7F25A290: addi    r0, r3, 13336
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(13336);

label_7F25A294:
    ctx->pc = 0x7F25A294u;
    // 7F25A294: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F25A298:
    ctx->pc = 0x7F25A298u;
    // 7F25A298: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F25A29C:
    ctx->pc = 0x7F25A29Cu;
    // 7F25A29C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25A2A0:
    ctx->pc = 0x7F25A2A0u;
    // 7F25A2A0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F25A2A4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F25A2A4:
    ctx->pc = 0x7F25A2A4u;
    ctx->downcount -= 2;
    // 7F25A2A4: rlwinm. r0, r29, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A2A8:
    ctx->pc = 0x7F25A2A8u;
    // 7F25A2A8: bc    12, 2, 0x7F25A2B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A2B0;
        }
    }

label_7F25A2AC:
    ctx->pc = 0x7F25A2ACu;
    ctx->downcount -= 1;
    // 7F25A2AC: ori     r27, r27, 0x0001
    ctx->gpr[27] = ctx->gpr[27] | 0x0001u;

label_7F25A2B0:
    ctx->pc = 0x7F25A2B0u;
    ctx->downcount -= 2;
    // 7F25A2B0: rlwinm. r0, r29, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A2B4:
    ctx->pc = 0x7F25A2B4u;
    // 7F25A2B4: bc    12, 2, 0x7F25A2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A2BC;
        }
    }

label_7F25A2B8:
    ctx->pc = 0x7F25A2B8u;
    ctx->downcount -= 1;
    // 7F25A2B8: ori     r27, r27, 0x0002
    ctx->gpr[27] = ctx->gpr[27] | 0x0002u;

label_7F25A2BC:
    ctx->pc = 0x7F25A2BCu;
    ctx->downcount -= 9;
    // 7F25A2BC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25A2C0:
    ctx->pc = 0x7F25A2C0u;
    // 7F25A2C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25A2C4:
    ctx->pc = 0x7F25A2C4u;
    // 7F25A2C4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F25A2C8:
    ctx->pc = 0x7F25A2C8u;
    // 7F25A2C8: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F25A2CC:
    ctx->pc = 0x7F25A2CCu;
    // 7F25A2CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F25A2D0:
    ctx->pc = 0x7F25A2D0u;
    // 7F25A2D0: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F25A2D4:
    ctx->pc = 0x7F25A2D4u;
    // 7F25A2D4: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F25A2D8:
    ctx->pc = 0x7F25A2D8u;
    // 7F25A2D8: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F25A2DC:
    ctx->pc = 0x7F25A2DCu;
    // 7F25A2DC: bl      0x7F27727C
    {
            ctx->lr = 0x7F25A2E0u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F25A2E0:
    ctx->pc = 0x7F25A2E0u;
    ctx->downcount -= 2;
    // 7F25A2E0: rlwinm. r0, r29, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A2E4:
    ctx->pc = 0x7F25A2E4u;
    // 7F25A2E4: bc    12, 2, 0x7F25A2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A2F0;
        }
    }

label_7F25A2E8:
    ctx->pc = 0x7F25A2E8u;
    ctx->downcount -= 2;
    // 7F25A2E8: ori     r0, r31, 0x0008
    ctx->gpr[0] = ctx->gpr[31] | 0x0008u;

label_7F25A2EC:
    ctx->pc = 0x7F25A2ECu;
    // 7F25A2EC: extsb r31, r0
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F25A2F0:
    ctx->pc = 0x7F25A2F0u;
    ctx->downcount -= 2;
    // 7F25A2F0: rlwinm. r0, r29, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25A2F4:
    ctx->pc = 0x7F25A2F4u;
    // 7F25A2F4: bc    12, 2, 0x7F25A300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25A300;
        }
    }

label_7F25A2F8:
    ctx->pc = 0x7F25A2F8u;
    ctx->downcount -= 2;
    // 7F25A2F8: ori     r0, r30, 0x0040
    ctx->gpr[0] = ctx->gpr[30] | 0x0040u;

label_7F25A2FC:
    ctx->pc = 0x7F25A2FCu;
    // 7F25A2FC: extsb r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F25A300:
    ctx->pc = 0x7F25A300u;
    ctx->downcount -= 4;
    // 7F25A300: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A304:
    ctx->pc = 0x7F25A304u;
    // 7F25A304: extsb r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[30];
    }

label_7F25A308:
    ctx->pc = 0x7F25A308u;
    // 7F25A308: extsb r5, r31
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[31];
    }

label_7F25A30C:
    ctx->pc = 0x7F25A30Cu;
    // 7F25A30C: bl      0x7F260850
    {
            ctx->lr = 0x7F25A310u;
            ctx->pc = 0x7F260850u;
            return;
    }

label_7F25A310:
    ctx->pc = 0x7F25A310u;
    ctx->downcount -= 16;
    // 7F25A310: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A314:
    ctx->pc = 0x7F25A314u;
    // 7F25A314: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A318:
    ctx->pc = 0x7F25A318u;
    // 7F25A318: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A31C:
    ctx->pc = 0x7F25A31Cu;
    // 7F25A31C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F25A320:
    ctx->pc = 0x7F25A320u;
    // 7F25A320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A324:
    ctx->pc = 0x7F25A324u;
    ctx->downcount -= 8;
    // 7F25A324: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A328:
    ctx->pc = 0x7F25A328u;
    // 7F25A328: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A32C:
    ctx->pc = 0x7F25A32Cu;
    // 7F25A32C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25A330:
    ctx->pc = 0x7F25A330u;
    // 7F25A330: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A334:
    ctx->pc = 0x7F25A334u;
    // 7F25A334: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A338:
    ctx->pc = 0x7F25A338u;
    // 7F25A338: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F25A33C:
    ctx->pc = 0x7F25A33Cu;
    // 7F25A33C: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F25A340:
    ctx->pc = 0x7F25A340u;
    // 7F25A340: bl      0x7F25A10C
    {
            ctx->lr = 0x7F25A344u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A10Cu;
                return;
            }
            goto label_7F25A10C;
    }

label_7F25A344:
    ctx->pc = 0x7F25A344u;
    ctx->downcount -= 5;
    // 7F25A344: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A348:
    ctx->pc = 0x7F25A348u;
    // 7F25A348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A34C:
    ctx->pc = 0x7F25A34Cu;
    // 7F25A34C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A350:
    ctx->pc = 0x7F25A350u;
    // 7F25A350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A354:
    ctx->pc = 0x7F25A354u;
    ctx->downcount -= 8;
    // 7F25A354: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A358:
    ctx->pc = 0x7F25A358u;
    // 7F25A358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A35C:
    ctx->pc = 0x7F25A35Cu;
    // 7F25A35C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25A360:
    ctx->pc = 0x7F25A360u;
    // 7F25A360: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A364:
    ctx->pc = 0x7F25A364u;
    // 7F25A364: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A368:
    ctx->pc = 0x7F25A368u;
    // 7F25A368: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F25A36C:
    ctx->pc = 0x7F25A36Cu;
    // 7F25A36C: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F25A370:
    ctx->pc = 0x7F25A370u;
    // 7F25A370: bl      0x7F25A218
    {
            ctx->lr = 0x7F25A374u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A218u;
                return;
            }
            goto label_7F25A218;
    }

label_7F25A374:
    ctx->pc = 0x7F25A374u;
    ctx->downcount -= 5;
    // 7F25A374: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A378:
    ctx->pc = 0x7F25A378u;
    // 7F25A378: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A37C:
    ctx->pc = 0x7F25A37Cu;
    // 7F25A37C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A380:
    ctx->pc = 0x7F25A380u;
    // 7F25A380: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A384:
    ctx->pc = 0x7F25A384u;
    ctx->downcount -= 56;
    // 7F25A384: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A388:
    ctx->pc = 0x7F25A388u;
    // 7F25A388: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A38C:
    ctx->pc = 0x7F25A38Cu;
    // 7F25A38C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A390:
    ctx->pc = 0x7F25A390u;
    // 7F25A390: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A390u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25A394:
    ctx->pc = 0x7F25A394u;
    // 7F25A394: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25A394u);
        if (ctx->exception) return;
    }

label_7F25A398:
    ctx->pc = 0x7F25A398u;
    // 7F25A398: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25A39C:
    ctx->pc = 0x7F25A39Cu;
    // 7F25A39C: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A39Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25A39Cu);
        if (ctx->exception) return;
    }

label_7F25A3A0:
    ctx->pc = 0x7F25A3A0u;
    // 7F25A3A0: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A3A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F25A3A4:
    ctx->pc = 0x7F25A3A4u;
    // 7F25A3A4: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A3A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F25A3A4u);
        if (ctx->exception) return;
    }

label_7F25A3A8:
    ctx->pc = 0x7F25A3A8u;
    // 7F25A3A8: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F25A3AC:
    ctx->pc = 0x7F25A3ACu;
    // 7F25A3AC: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F25A3ACu);
        if (ctx->exception) return;
    }

label_7F25A3B0:
    ctx->pc = 0x7F25A3B0u;
    // 7F25A3B0: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A3B4:
    ctx->pc = 0x7F25A3B4u;
    // 7F25A3B4: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A3B8:
    ctx->pc = 0x7F25A3B8u;
    // 7F25A3B8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F25A3BC:
    ctx->pc = 0x7F25A3BCu;
    // 7F25A3BC: lwz     r8, 1072(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1072);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F25A3C0:
    ctx->pc = 0x7F25A3C0u;
    // 7F25A3C0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F25A3C4:
    ctx->pc = 0x7F25A3C4u;
    // 7F25A3C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25A3C8:
    ctx->pc = 0x7F25A3C8u;
    // 7F25A3C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25A3CC:
    ctx->pc = 0x7F25A3CCu;
    // 7F25A3CC: lwz     r0, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A3D0:
    ctx->pc = 0x7F25A3D0u;
    // 7F25A3D0: addi    r7, r6, 22328
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(22328);

label_7F25A3D4:
    ctx->pc = 0x7F25A3D4u;
    // 7F25A3D4: addi    r6, r5, 22312
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(22312);

label_7F25A3D8:
    ctx->pc = 0x7F25A3D8u;
    // 7F25A3D8: addi    r5, r4, 22320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22320);

label_7F25A3DC:
    ctx->pc = 0x7F25A3DCu;
    // 7F25A3DC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F25A3E0:
    ctx->pc = 0x7F25A3E0u;
    // 7F25A3E0: addi    r4, r3, 22332
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22332);

label_7F25A3E4:
    ctx->pc = 0x7F25A3E4u;
    // 7F25A3E4: stw     r0, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A3E8:
    ctx->pc = 0x7F25A3E8u;
    // 7F25A3E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25A3EC:
    ctx->pc = 0x7F25A3ECu;
    // 7F25A3EC: lfs     f28, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25A3ECu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F25A3F0:
    ctx->pc = 0x7F25A3F0u;
    // 7F25A3F0: addi    r28, r24, 48
    ctx->gpr[28] = ctx->gpr[24] + (u32)(s32)(48);

label_7F25A3F4:
    ctx->pc = 0x7F25A3F4u;
    // 7F25A3F4: lwz     r7, 1072(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1072);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25A3F8:
    ctx->pc = 0x7F25A3F8u;
    // 7F25A3F8: addi    r23, r3, 22336
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(22336);

label_7F25A3FC:
    ctx->pc = 0x7F25A3FCu;
    // 7F25A3FC: lfs     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25A3FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F25A400:
    ctx->pc = 0x7F25A400u;
    // 7F25A400: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F25A404:
    ctx->pc = 0x7F25A404u;
    // 7F25A404: lwz     r3, 180(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A408:
    ctx->pc = 0x7F25A408u;
    // 7F25A408: addi    r6, r7, 184
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(184);

label_7F25A40C:
    ctx->pc = 0x7F25A40Cu;
    // 7F25A40C: lfd     f30, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25A40Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A410:
    ctx->pc = 0x7F25A410u;
    // 7F25A410: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F25A414:
    ctx->pc = 0x7F25A414u;
    // 7F25A414: subfic  r0, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F25A418:
    ctx->pc = 0x7F25A418u;
    // 7F25A418: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F25A41C:
    ctx->pc = 0x7F25A41Cu;
    // 7F25A41C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F25A420:
    ctx->pc = 0x7F25A420u;
    // 7F25A420: lwzx    r27, r6, r3
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F25A424:
    ctx->pc = 0x7F25A424u;
    // 7F25A424: add   r3, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F25A428:
    ctx->pc = 0x7F25A428u;
    // 7F25A428: lwzx    r26, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F25A42C:
    ctx->pc = 0x7F25A42Cu;
    // 7F25A42C: lwz     r25, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F25A430:
    ctx->pc = 0x7F25A430u;
    // 7F25A430: lis     r22, 17200
    ctx->gpr[22] = ((u32)(s32)(17200) << 16);

label_7F25A434:
    ctx->pc = 0x7F25A434u;
    // 7F25A434: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25A434u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F25A438:
    ctx->pc = 0x7F25A438u;
    // 7F25A438: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F25A43C:
    ctx->downcount -= 1;
    // 7F25A43C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F25A440:
    ctx->pc = 0x7F25A440u;
    ctx->downcount -= 15;
    // 7F25A440: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A444:
    ctx->pc = 0x7F25A444u;
    // 7F25A444: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A448:
    ctx->pc = 0x7F25A448u;
    // 7F25A448: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A44C:
    ctx->pc = 0x7F25A44Cu;
    // 7F25A44C: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A450:
    ctx->pc = 0x7F25A450u;
    // 7F25A450: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A454:
    ctx->pc = 0x7F25A454u;
    // 7F25A454: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A458:
    ctx->pc = 0x7F25A458u;
    // 7F25A458: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A45C:
    ctx->pc = 0x7F25A45Cu;
    // 7F25A45C: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A460:
    ctx->pc = 0x7F25A460u;
    // 7F25A460: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A460u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A464:
    ctx->pc = 0x7F25A464u;
    // 7F25A464: fsubs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F25A464u)) return;
    ppc_fsubs(ctx, 0, 0, 28);

label_7F25A468:
    ctx->pc = 0x7F25A468u;
    // 7F25A468: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A468u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25A46C:
    ctx->pc = 0x7F25A46Cu;
    // 7F25A46C: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A46Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A470:
    ctx->pc = 0x7F25A470u;
    // 7F25A470: fcmpo   cr0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F25A470u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[29], true);

label_7F25A474:
    // 7F25A474: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F25A478:
    // 7F25A478: bc    4, 2, 0x7F25A48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25A48C;
        }
    }

label_7F25A47C:
    ctx->downcount -= 4;
    // 7F25A47C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25A480:
    // 7F25A480: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F25A484:
    ctx->pc = 0x7F25A484u;
    // 7F25A484: lfs     f0, 22312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25A484u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A488:
    ctx->pc = 0x7F25A488u;
    // 7F25A488: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A488u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25A48C:
    ctx->pc = 0x7F25A48Cu;
    ctx->downcount -= 21;
    // 7F25A48C: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A48Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A490:
    // 7F25A490: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25A494:
    ctx->pc = 0x7F25A494u;
    // 7F25A494: stw     r22, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F25A498:
    // 7F25A498: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A49C:
    ctx->pc = 0x7F25A49Cu;
    // 7F25A49C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25A49Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25A4A0:
    // 7F25A4A0: addi    r5, r27, 16
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(16);

label_7F25A4A4:
    ctx->pc = 0x7F25A4A4u;
    // 7F25A4A4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25A4A8:
    ctx->pc = 0x7F25A4A8u;
    // 7F25A4A8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A4AC:
    // 7F25A4AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25A4B0:
    ctx->pc = 0x7F25A4B0u;
    // 7F25A4B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A4B4:
    ctx->pc = 0x7F25A4B4u;
    // 7F25A4B4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A4B8:
    ctx->pc = 0x7F25A4B8u;
    // 7F25A4B8: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F25A4B8u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F25A4BC:
    ctx->pc = 0x7F25A4BCu;
    // 7F25A4BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25A4BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25A4C0:
    ctx->pc = 0x7F25A4C0u;
    // 7F25A4C0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25A4C4:
    ctx->pc = 0x7F25A4C4u;
    // 7F25A4C4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25A4C8:
    ctx->pc = 0x7F25A4C8u;
    // 7F25A4C8: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25A4CC:
    ctx->pc = 0x7F25A4CCu;
    // 7F25A4CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A4D0:
    ctx->pc = 0x7F25A4D0u;
    // 7F25A4D0: stb     r6, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F25A4D4:
    ctx->pc = 0x7F25A4D4u;
    // 7F25A4D4: stb     r0, 15(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25A4D8:
    // 7F25A4D8: addi    r25, r25, 24
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(24);

label_7F25A4DC:
    // 7F25A4DC: bl      0x800261B4
    {
            ctx->lr = 0x7F25A4E0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25A4E0:
    ctx->pc = 0x7F25A4E0u;
    ctx->downcount -= 8;
    // 7F25A4E0: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4E0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A4E4:
    // 7F25A4E4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A4E8:
    ctx->pc = 0x7F25A4E8u;
    // 7F25A4E8: lfs     f1, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4E8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25A4EC:
    // 7F25A4EC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A4F0:
    ctx->pc = 0x7F25A4F0u;
    // 7F25A4F0: fadds   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25A4F0u)) return;
    ppc_fadds(ctx, 0, 0, 31);

label_7F25A4F4:
    // 7F25A4F4: addi    r27, r27, 32
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(32);

label_7F25A4F8:
    ctx->pc = 0x7F25A4F8u;
    // 7F25A4F8: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A4F8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25A4FC:
    // 7F25A4FC: bl      0x800261FC
    {
            ctx->lr = 0x7F25A500u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25A500:
    ctx->downcount -= 5;
    // 7F25A500: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F25A504:
    // 7F25A504: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F25A508:
    // 7F25A508: cmpwi   r30, 32
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

label_7F25A50C:
    // 7F25A50C: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F25A510:
    // 7F25A510: bc    12, 0, 0x7F25A440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A440u;
                return;
            }
            goto label_7F25A440;
        }
    }

label_7F25A514:
    ctx->downcount -= 3;
    // 7F25A514: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F25A518:
    // 7F25A518: cmpwi   r31, 2
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

label_7F25A51C:
    // 7F25A51C: bc    12, 0, 0x7F25A43C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A43Cu;
                return;
            }
            goto label_7F25A43C;
        }
    }

label_7F25A520:
    ctx->pc = 0x7F25A520u;
    ctx->downcount -= 2;
    // 7F25A520: cmpwi   r29, 64
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25A524:
    ctx->pc = 0x7F25A524u;
    // 7F25A524: bc    4, 2, 0x7F25A530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25A530;
        }
    }

label_7F25A528:
    ctx->pc = 0x7F25A528u;
    ctx->downcount -= 2;
    // 7F25A528: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F25A52C:
    ctx->pc = 0x7F25A52Cu;
    // 7F25A52C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25A530u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25A530:
    ctx->pc = 0x7F25A530u;
    ctx->downcount -= 24;
    // 7F25A530: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25A530u);
        if (ctx->exception) return;
    }

label_7F25A534:
    ctx->pc = 0x7F25A534u;
    // 7F25A534: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A538:
    ctx->pc = 0x7F25A538u;
    // 7F25A538: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25A538u);
        if (ctx->exception) return;
    }

label_7F25A53C:
    ctx->pc = 0x7F25A53Cu;
    // 7F25A53C: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A53Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A540:
    ctx->pc = 0x7F25A540u;
    // 7F25A540: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F25A540u);
        if (ctx->exception) return;
    }

label_7F25A544:
    ctx->pc = 0x7F25A544u;
    // 7F25A544: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A548:
    ctx->pc = 0x7F25A548u;
    // 7F25A548: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A548u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F25A548u);
        if (ctx->exception) return;
    }

label_7F25A54C:
    ctx->pc = 0x7F25A54Cu;
    // 7F25A54C: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A54Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A550:
    ctx->pc = 0x7F25A550u;
    // 7F25A550: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A554:
    ctx->pc = 0x7F25A554u;
    // 7F25A554: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A558:
    ctx->pc = 0x7F25A558u;
    // 7F25A558: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A55C:
    ctx->pc = 0x7F25A55Cu;
    // 7F25A55C: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F25A560:
    ctx->pc = 0x7F25A560u;
    // 7F25A560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A564:
    ctx->pc = 0x7F25A564u;
    ctx->downcount -= 7;
    // 7F25A564: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A568:
    ctx->pc = 0x7F25A568u;
    // 7F25A568: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A56C:
    ctx->pc = 0x7F25A56Cu;
    // 7F25A56C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A570:
    ctx->pc = 0x7F25A570u;
    // 7F25A570: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25A574:
    ctx->pc = 0x7F25A574u;
    // 7F25A574: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A578:
    ctx->pc = 0x7F25A578u;
    // 7F25A578: lwz     r3, 1072(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A57C:
    ctx->pc = 0x7F25A57Cu;
    // 7F25A57C: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F25A580u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F25A580:
    ctx->pc = 0x7F25A580u;
    ctx->downcount -= 7;
    // 7F25A580: stw     r3, 1072(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1072);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A584:
    ctx->pc = 0x7F25A584u;
    // 7F25A584: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A588:
    ctx->pc = 0x7F25A588u;
    // 7F25A588: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25A58C:
    ctx->pc = 0x7F25A58Cu;
    // 7F25A58C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A590:
    ctx->pc = 0x7F25A590u;
    // 7F25A590: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A594:
    ctx->pc = 0x7F25A594u;
    // 7F25A594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A598:
    ctx->pc = 0x7F25A598u;
    ctx->downcount -= 37;
    // 7F25A598: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A59C:
    ctx->pc = 0x7F25A59Cu;
    // 7F25A59C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A5A0:
    ctx->pc = 0x7F25A5A0u;
    // 7F25A5A0: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A5A4:
    ctx->pc = 0x7F25A5A4u;
    // 7F25A5A4: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25A5A8:
    ctx->pc = 0x7F25A5A8u;
    // 7F25A5A8: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A5A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25A5A8u);
        if (ctx->exception) return;
    }

label_7F25A5AC:
    ctx->pc = 0x7F25A5ACu;
    // 7F25A5AC: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25A5B0:
    ctx->pc = 0x7F25A5B0u;
    // 7F25A5B0: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A5B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25A5B0u);
        if (ctx->exception) return;
    }

label_7F25A5B4:
    ctx->pc = 0x7F25A5B4u;
    // 7F25A5B4: stmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A5B8:
    ctx->pc = 0x7F25A5B8u;
    // 7F25A5B8: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F25A5BC:
    ctx->pc = 0x7F25A5BCu;
    // 7F25A5BC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F25A5C0:
    ctx->pc = 0x7F25A5C0u;
    // 7F25A5C0: lfs     f1, 22312(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5C0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(22312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25A5C4:
    ctx->pc = 0x7F25A5C4u;
    // 7F25A5C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25A5C8:
    ctx->pc = 0x7F25A5C8u;
    // 7F25A5C8: lfs     f0, 22328(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(22328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A5CC:
    ctx->pc = 0x7F25A5CCu;
    // 7F25A5CC: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A5D0:
    ctx->pc = 0x7F25A5D0u;
    // 7F25A5D0: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25A5D4:
    ctx->pc = 0x7F25A5D4u;
    // 7F25A5D4: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A5D8:
    ctx->pc = 0x7F25A5D8u;
    // 7F25A5D8: or   r23, r6, r6
    {
        ctx->gpr[23] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F25A5DC:
    ctx->pc = 0x7F25A5DCu;
    // 7F25A5DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25A5E0:
    ctx->pc = 0x7F25A5E0u;
    // 7F25A5E0: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25A5E4:
    ctx->pc = 0x7F25A5E4u;
    // 7F25A5E4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25A5E8:
    ctx->pc = 0x7F25A5E8u;
    // 7F25A5E8: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25A5EC:
    ctx->pc = 0x7F25A5ECu;
    // 7F25A5EC: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A5ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25A5F0:
    ctx->pc = 0x7F25A5F0u;
    // 7F25A5F0: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25A5F4:
    ctx->pc = 0x7F25A5F4u;
    // 7F25A5F4: lwz     r0, 164(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A5F8:
    ctx->pc = 0x7F25A5F8u;
    // 7F25A5F8: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F25A5FC:
    ctx->pc = 0x7F25A5FCu;
    // 7F25A5FC: stw     r0, 164(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A600:
    ctx->pc = 0x7F25A600u;
    // 7F25A600: bl      0x7F3C2534
    {
            ctx->lr = 0x7F25A604u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F25A604:
    ctx->pc = 0x7F25A604u;
    ctx->downcount -= 28;
    // 7F25A604: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F25A608:
    ctx->pc = 0x7F25A608u;
    // 7F25A608: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25A60C:
    ctx->pc = 0x7F25A60Cu;
    // 7F25A60C: stw     r0, 204(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A610:
    ctx->pc = 0x7F25A610u;
    // 7F25A610: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25A614:
    ctx->pc = 0x7F25A614u;
    // 7F25A614: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25A618:
    ctx->pc = 0x7F25A618u;
    // 7F25A618: addi    r5, r4, 22344
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22344);

label_7F25A61C:
    ctx->pc = 0x7F25A61Cu;
    // 7F25A61C: stw     r6, 200(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F25A620:
    ctx->pc = 0x7F25A620u;
    // 7F25A620: addi    r4, r3, 22340
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22340);

label_7F25A624:
    ctx->pc = 0x7F25A624u;
    // 7F25A624: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F25A628:
    ctx->pc = 0x7F25A628u;
    // 7F25A628: lfs     f30, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25A628u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F25A62C:
    ctx->pc = 0x7F25A62Cu;
    // 7F25A62C: lwz     r5, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25A630:
    ctx->pc = 0x7F25A630u;
    // 7F25A630: addi    r28, r22, 48
    ctx->gpr[28] = ctx->gpr[22] + (u32)(s32)(48);

label_7F25A634:
    ctx->pc = 0x7F25A634u;
    // 7F25A634: lwz     r0, 52(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A638:
    ctx->pc = 0x7F25A638u;
    // 7F25A638: addi    r31, r3, -28673
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F25A63C:
    ctx->pc = 0x7F25A63Cu;
    // 7F25A63C: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25A63Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F25A640:
    ctx->pc = 0x7F25A640u;
    // 7F25A640: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F25A644:
    ctx->pc = 0x7F25A644u;
    // 7F25A644: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25A648:
    ctx->pc = 0x7F25A648u;
    // 7F25A648: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A64C:
    ctx->pc = 0x7F25A64Cu;
    // 7F25A64C: lwz     r3, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A650:
    ctx->pc = 0x7F25A650u;
    // 7F25A650: lwz     r0, 60(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A654:
    ctx->pc = 0x7F25A654u;
    // 7F25A654: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A658:
    ctx->pc = 0x7F25A658u;
    // 7F25A658: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A65C:
    ctx->pc = 0x7F25A65Cu;
    // 7F25A65C: lwz     r3, 1072(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(1072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A660:
    ctx->pc = 0x7F25A660u;
    // 7F25A660: stw     r6, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F25A664:
    ctx->pc = 0x7F25A664u;
    // 7F25A664: lwz     r25, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F25A668:
    ctx->pc = 0x7F25A668u;
    // 7F25A668: lwz     r24, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F25A66C:
    ctx->pc = 0x7F25A66Cu;
    // 7F25A66C: lwz     r27, 184(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(184);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F25A670:
    ctx->pc = 0x7F25A670u;
    // 7F25A670: lwz     r26, 188(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(188);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F25A674:
    ctx->downcount -= 1;
    // 7F25A674: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F25A678:
    ctx->downcount -= 1;
    // 7F25A678: bl      0x7F25A870
    {
            ctx->lr = 0x7F25A67Cu;
            goto label_7F25A870;
    }

label_7F25A67C:
    ctx->downcount -= 4;
    // 7F25A67C: rlwinm r3, r3, 0, 25, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F25A680:
    // 7F25A680: addi    r0, r3, 768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(768);

label_7F25A684:
    ctx->pc = 0x7F25A684u;
    // 7F25A684: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25A688:
    // 7F25A688: bl      0x7F25A870
    {
            ctx->lr = 0x7F25A68Cu;
            goto label_7F25A870;
    }

label_7F25A68C:
    ctx->downcount -= 6;
    // 7F25A68C: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F25A690:
    // 7F25A690: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25A694:
    ctx->pc = 0x7F25A694u;
    // 7F25A694: sth     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25A698:
    // 7F25A698: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F25A69C:
    ctx->pc = 0x7F25A69Cu;
    // 7F25A69C: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25A6A0:
    // 7F25A6A0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25A6A4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25A6A4:
    ctx->downcount -= 2;
    // 7F25A6A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25A6A8:
    // 7F25A6A8: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F25A6ACu;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F25A6AC:
    ctx->downcount -= 4;
    // 7F25A6AC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A6B0:
    // 7F25A6B0: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25A6B4:
    // 7F25A6B4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25A6B8:
    // 7F25A6B8: bl      0x7F3B3648
    {
            ctx->lr = 0x7F25A6BCu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F25A6BC:
    ctx->downcount -= 1;
    // 7F25A6BC: bl      0x7F25A828
    {
            ctx->lr = 0x7F25A6C0u;
            goto label_7F25A828;
    }

label_7F25A6C0:
    ctx->pc = 0x7F25A6C0u;
    ctx->downcount -= 5;
    // 7F25A6C0: lfs     f0, 1080(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25A6C0u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A6C4:
    // 7F25A6C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A6C8:
    // 7F25A6C8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A6CC:
    ctx->pc = 0x7F25A6CCu;
    // 7F25A6CC: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25A6CCu)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F25A6D0:
    // 7F25A6D0: bl      0x800261FC
    {
            ctx->lr = 0x7F25A6D4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25A6D4:
    ctx->downcount -= 1;
    // 7F25A6D4: bl      0x7F25A828
    {
            ctx->lr = 0x7F25A6D8u;
            goto label_7F25A828;
    }

label_7F25A6D8:
    ctx->pc = 0x7F25A6D8u;
    ctx->downcount -= 6;
    // 7F25A6D8: fmadds f0, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25A6D8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F25A6DC:
    // 7F25A6DC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A6E0:
    // 7F25A6E0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25A6E4:
    // 7F25A6E4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A6E8:
    ctx->pc = 0x7F25A6E8u;
    // 7F25A6E8: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F25A6E8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25A6EC:
    // 7F25A6EC: bl      0x800261B4
    {
            ctx->lr = 0x7F25A6F0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25A6F0:
    ctx->downcount -= 4;
    // 7F25A6F0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25A6F4:
    // 7F25A6F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25A6F8:
    // 7F25A6F8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25A6FC:
    // 7F25A6FC: bl      0x800261B4
    {
            ctx->lr = 0x7F25A700u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25A700:
    ctx->downcount -= 62;
    // 7F25A700: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

label_7F25A704:
    // 7F25A704: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F25A708:
    ctx->pc = 0x7F25A708u;
    // 7F25A708: sth     r9, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A70C:
    // 7F25A70C: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F25A710:
    // 7F25A710: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F25A714:
    // 7F25A714: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F25A718:
    ctx->pc = 0x7F25A718u;
    // 7F25A718: sth     r9, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A71C:
    // 7F25A71C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25A720:
    // 7F25A720: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F25A724:
    // 7F25A724: cmpwi   r29, 32
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25A728:
    ctx->pc = 0x7F25A728u;
    // 7F25A728: sth     r9, 6(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A72C:
    // 7F25A72C: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F25A730:
    ctx->pc = 0x7F25A730u;
    // 7F25A730: sth     r9, 6(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A734:
    ctx->pc = 0x7F25A734u;
    // 7F25A734: sth     r31, 10(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F25A738:
    ctx->pc = 0x7F25A738u;
    // 7F25A738: sth     r31, 10(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F25A73C:
    ctx->pc = 0x7F25A73Cu;
    // 7F25A73C: sth     r9, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A740:
    ctx->pc = 0x7F25A740u;
    // 7F25A740: sth     r9, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A744:
    ctx->pc = 0x7F25A744u;
    // 7F25A744: stb     r8, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F25A748:
    ctx->pc = 0x7F25A748u;
    // 7F25A748: stb     r8, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F25A74C:
    ctx->pc = 0x7F25A74Cu;
    // 7F25A74C: stb     r7, 1(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F25A750:
    ctx->pc = 0x7F25A750u;
    // 7F25A750: stb     r7, 1(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F25A754:
    ctx->pc = 0x7F25A754u;
    // 7F25A754: stb     r6, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F25A758:
    ctx->pc = 0x7F25A758u;
    // 7F25A758: stb     r6, 2(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F25A75C:
    ctx->pc = 0x7F25A75Cu;
    // 7F25A75C: stb     r5, 3(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F25A760:
    ctx->pc = 0x7F25A760u;
    // 7F25A760: stb     r5, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F25A764:
    ctx->pc = 0x7F25A764u;
    // 7F25A764: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A768:
    ctx->pc = 0x7F25A768u;
    // 7F25A768: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A76C:
    ctx->pc = 0x7F25A76Cu;
    // 7F25A76C: stw     r4, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25A770:
    ctx->pc = 0x7F25A770u;
    // 7F25A770: stw     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A774:
    ctx->pc = 0x7F25A774u;
    // 7F25A774: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A778:
    ctx->pc = 0x7F25A778u;
    // 7F25A778: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A77C:
    ctx->pc = 0x7F25A77Cu;
    // 7F25A77C: stw     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25A780:
    ctx->pc = 0x7F25A780u;
    // 7F25A780: stw     r3, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A784:
    // 7F25A784: addi    r27, r27, 32
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(32);

label_7F25A788:
    ctx->pc = 0x7F25A788u;
    // 7F25A788: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A78C:
    ctx->pc = 0x7F25A78Cu;
    // 7F25A78C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A790:
    ctx->pc = 0x7F25A790u;
    // 7F25A790: stw     r4, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25A794:
    ctx->pc = 0x7F25A794u;
    // 7F25A794: stw     r3, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A798:
    ctx->pc = 0x7F25A798u;
    // 7F25A798: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A79C:
    ctx->pc = 0x7F25A79Cu;
    // 7F25A79C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25A7A0:
    ctx->pc = 0x7F25A7A0u;
    // 7F25A7A0: stw     r4, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25A7A4:
    ctx->pc = 0x7F25A7A4u;
    // 7F25A7A4: stw     r3, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A7A8:
    // 7F25A7A8: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F25A7AC:
    ctx->pc = 0x7F25A7ACu;
    // 7F25A7AC: sth     r5, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F25A7B0:
    ctx->pc = 0x7F25A7B0u;
    // 7F25A7B0: sth     r5, 16(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F25A7B4:
    ctx->pc = 0x7F25A7B4u;
    // 7F25A7B4: sth     r5, 18(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F25A7B8:
    ctx->pc = 0x7F25A7B8u;
    // 7F25A7B8: sth     r5, 18(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F25A7BC:
    ctx->pc = 0x7F25A7BCu;
    // 7F25A7BC: sth     r0, 22(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25A7C0:
    ctx->pc = 0x7F25A7C0u;
    // 7F25A7C0: sth     r0, 22(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25A7C4:
    ctx->pc = 0x7F25A7C4u;
    // 7F25A7C4: sth     r9, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A7C8:
    ctx->pc = 0x7F25A7C8u;
    // 7F25A7C8: sth     r9, 20(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F25A7CC:
    ctx->pc = 0x7F25A7CCu;
    // 7F25A7CC: stb     r8, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F25A7D0:
    ctx->pc = 0x7F25A7D0u;
    // 7F25A7D0: stb     r8, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F25A7D4:
    ctx->pc = 0x7F25A7D4u;
    // 7F25A7D4: stb     r7, 13(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F25A7D8:
    ctx->pc = 0x7F25A7D8u;
    // 7F25A7D8: stb     r7, 13(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F25A7DC:
    ctx->pc = 0x7F25A7DCu;
    // 7F25A7DC: stb     r6, 14(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F25A7E0:
    ctx->pc = 0x7F25A7E0u;
    // 7F25A7E0: stb     r6, 14(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F25A7E4:
    ctx->pc = 0x7F25A7E4u;
    // 7F25A7E4: stb     r5, 15(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F25A7E8:
    // 7F25A7E8: addi    r24, r24, 24
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(24);

label_7F25A7EC:
    ctx->pc = 0x7F25A7ECu;
    // 7F25A7EC: stb     r5, 15(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F25A7F0:
    // 7F25A7F0: addi    r25, r25, 24
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(24);

label_7F25A7F4:
    // 7F25A7F4: bc    12, 0, 0x7F25A678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A678u;
                return;
            }
            goto label_7F25A678;
        }
    }

label_7F25A7F8:
    ctx->downcount -= 3;
    // 7F25A7F8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F25A7FC:
    // 7F25A7FC: cmpwi   r30, 2
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

label_7F25A800:
    // 7F25A800: bc    12, 0, 0x7F25A674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A674u;
                return;
            }
            goto label_7F25A674;
        }
    }

label_7F25A804:
    ctx->pc = 0x7F25A804u;
    ctx->downcount -= 20;
    // 7F25A804: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25A804u);
        if (ctx->exception) return;
    }

label_7F25A808:
    ctx->pc = 0x7F25A808u;
    // 7F25A808: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A808u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A80C:
    ctx->pc = 0x7F25A80Cu;
    // 7F25A80C: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25A80Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25A80Cu);
        if (ctx->exception) return;
    }

label_7F25A810:
    ctx->pc = 0x7F25A810u;
    // 7F25A810: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A814:
    ctx->pc = 0x7F25A814u;
    // 7F25A814: lmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A818:
    ctx->pc = 0x7F25A818u;
    // 7F25A818: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A81C:
    ctx->pc = 0x7F25A81Cu;
    // 7F25A81C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A820:
    ctx->pc = 0x7F25A820u;
    // 7F25A820: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F25A824:
    ctx->pc = 0x7F25A824u;
    // 7F25A824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A828:
    ctx->pc = 0x7F25A828u;
    ctx->downcount -= 4;
    // 7F25A828: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A82C:
    ctx->pc = 0x7F25A82Cu;
    // 7F25A82C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A830:
    ctx->pc = 0x7F25A830u;
    // 7F25A830: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A834:
    ctx->pc = 0x7F25A834u;
    // 7F25A834: bl      0x7F25A870
    {
            ctx->lr = 0x7F25A838u;
            goto label_7F25A870;
    }

label_7F25A838:
    ctx->pc = 0x7F25A838u;
    ctx->downcount -= 31;
    // 7F25A838: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25A83C:
    ctx->pc = 0x7F25A83Cu;
    // 7F25A83C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A840:
    ctx->pc = 0x7F25A840u;
    // 7F25A840: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25A844:
    ctx->pc = 0x7F25A844u;
    // 7F25A844: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25A848:
    ctx->pc = 0x7F25A848u;
    // 7F25A848: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A84C:
    ctx->pc = 0x7F25A84Cu;
    // 7F25A84C: lfd     f2, 22352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25A84Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22352);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A850:
    ctx->pc = 0x7F25A850u;
    // 7F25A850: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25A854:
    ctx->pc = 0x7F25A854u;
    // 7F25A854: lfs     f0, 22348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25A854u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25A858:
    ctx->pc = 0x7F25A858u;
    // 7F25A858: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25A858u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25A85C:
    ctx->pc = 0x7F25A85Cu;
    // 7F25A85C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A860:
    ctx->pc = 0x7F25A860u;
    // 7F25A860: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25A860u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F25A864:
    ctx->pc = 0x7F25A864u;
    // 7F25A864: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A868:
    ctx->pc = 0x7F25A868u;
    // 7F25A868: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A86C:
    ctx->pc = 0x7F25A86Cu;
    // 7F25A86C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A870:
    ctx->pc = 0x7F25A870u;
    ctx->downcount -= 13;
    // 7F25A870: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25A874:
    ctx->pc = 0x7F25A874u;
    // 7F25A874: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F25A878:
    ctx->pc = 0x7F25A878u;
    // 7F25A878: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F25A87C:
    ctx->pc = 0x7F25A87Cu;
    // 7F25A87C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A880:
    ctx->pc = 0x7F25A880u;
    // 7F25A880: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F25A884:
    ctx->pc = 0x7F25A884u;
    // 7F25A884: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F25A888:
    ctx->pc = 0x7F25A888u;
    // 7F25A888: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F25A88C:
    ctx->pc = 0x7F25A88Cu;
    // 7F25A88C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A890:
    ctx->pc = 0x7F25A890u;
    // 7F25A890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A894:
    ctx->pc = 0x7F25A894u;
    ctx->downcount -= 18;
    // 7F25A894: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A898:
    ctx->pc = 0x7F25A898u;
    // 7F25A898: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A89C:
    ctx->pc = 0x7F25A89Cu;
    // 7F25A89C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25A8A0:
    ctx->pc = 0x7F25A8A0u;
    // 7F25A8A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A8A4:
    ctx->pc = 0x7F25A8A4u;
    // 7F25A8A4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A8A8:
    ctx->pc = 0x7F25A8A8u;
    // 7F25A8A8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A8AC:
    ctx->pc = 0x7F25A8ACu;
    // 7F25A8AC: addi    r3, r4, 13752
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13752);

label_7F25A8B0:
    ctx->pc = 0x7F25A8B0u;
    // 7F25A8B0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F25A8B4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F25A8B4:
    ctx->pc = 0x7F25A8B4u;
    ctx->downcount -= 1;
    // 7F25A8B4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F25A8B8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F25A8B8:
    ctx->pc = 0x7F25A8B8u;
    ctx->downcount -= 7;
    // 7F25A8B8: lis     r5, 27
    ctx->gpr[5] = ((u32)(s32)(27) << 16);

label_7F25A8BC:
    ctx->pc = 0x7F25A8BCu;
    // 7F25A8BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A8C0:
    ctx->pc = 0x7F25A8C0u;
    // 7F25A8C0: addi    r3, r5, 1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1);

label_7F25A8C4:
    ctx->pc = 0x7F25A8C4u;
    // 7F25A8C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F25A8C8:
    ctx->pc = 0x7F25A8C8u;
    // 7F25A8C8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F25A8CC:
    ctx->pc = 0x7F25A8CCu;
    // 7F25A8CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25A8D0:
    ctx->pc = 0x7F25A8D0u;
    // 7F25A8D0: bl      0x7F3C2408
    {
            ctx->lr = 0x7F25A8D4u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F25A8D4:
    ctx->pc = 0x7F25A8D4u;
    ctx->downcount -= 3;
    // 7F25A8D4: or.   r30, r3, r3
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

label_7F25A8D8:
    ctx->pc = 0x7F25A8D8u;
    // 7F25A8D8: stw     r3, 1072(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1072);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A8DC:
    ctx->pc = 0x7F25A8DCu;
    // 7F25A8DC: bc    4, 2, 0x7F25A8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25A8E8;
        }
    }

label_7F25A8E0:
    ctx->pc = 0x7F25A8E0u;
    ctx->downcount -= 2;
    // 7F25A8E0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25A8E4:
    ctx->pc = 0x7F25A8E4u;
    // 7F25A8E4: b       0x7F25A920
    {
            goto label_7F25A920;
    }

label_7F25A8E8:
    ctx->pc = 0x7F25A8E8u;
    ctx->downcount -= 5;
    // 7F25A8E8: lwz     r6, 1084(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1084);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25A8EC:
    ctx->pc = 0x7F25A8ECu;
    // 7F25A8EC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F25A8F0:
    ctx->pc = 0x7F25A8F0u;
    // 7F25A8F0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25A8F4:
    ctx->pc = 0x7F25A8F4u;
    // 7F25A8F4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A8F8:
    ctx->pc = 0x7F25A8F8u;
    // 7F25A8F8: bl      0x7F25A598
    {
            ctx->lr = 0x7F25A8FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A598u;
                return;
            }
            goto label_7F25A598;
    }

label_7F25A8FC:
    ctx->pc = 0x7F25A8FCu;
    ctx->downcount -= 8;
    // 7F25A8FC: lwz     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A900:
    ctx->pc = 0x7F25A900u;
    // 7F25A900: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F25A904:
    ctx->pc = 0x7F25A904u;
    // 7F25A904: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F25A908:
    ctx->pc = 0x7F25A908u;
    // 7F25A908: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25A90C:
    ctx->pc = 0x7F25A90Cu;
    // 7F25A90C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F25A910:
    ctx->pc = 0x7F25A910u;
    // 7F25A910: stw     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A914:
    ctx->pc = 0x7F25A914u;
    // 7F25A914: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25A918:
    ctx->pc = 0x7F25A918u;
    // 7F25A918: bl      0x7F25A934
    {
            ctx->lr = 0x7F25A91Cu;
            goto label_7F25A934;
    }

label_7F25A91C:
    ctx->pc = 0x7F25A91Cu;
    ctx->downcount -= 1;
    // 7F25A91C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25A920:
    ctx->pc = 0x7F25A920u;
    ctx->downcount -= 16;
    // 7F25A920: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25A924:
    ctx->pc = 0x7F25A924u;
    // 7F25A924: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A928:
    ctx->pc = 0x7F25A928u;
    // 7F25A928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A92C:
    ctx->pc = 0x7F25A92Cu;
    // 7F25A92C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25A930:
    ctx->pc = 0x7F25A930u;
    // 7F25A930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A934:
    ctx->pc = 0x7F25A934u;
    ctx->downcount -= 7;
    // 7F25A934: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A938:
    ctx->pc = 0x7F25A938u;
    // 7F25A938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A93C:
    ctx->pc = 0x7F25A93Cu;
    // 7F25A93C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A940:
    ctx->pc = 0x7F25A940u;
    // 7F25A940: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25A944:
    ctx->pc = 0x7F25A944u;
    // 7F25A944: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A948:
    ctx->pc = 0x7F25A948u;
    // 7F25A948: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25A94C:
    ctx->pc = 0x7F25A94Cu;
    // 7F25A94C: bl      0x7F01B234
    {
            ctx->lr = 0x7F25A950u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F25A950:
    ctx->pc = 0x7F25A950u;
    ctx->downcount -= 7;
    // 7F25A950: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25A954:
    ctx->pc = 0x7F25A954u;
    // 7F25A954: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A958:
    ctx->pc = 0x7F25A958u;
    // 7F25A958: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25A95C:
    ctx->pc = 0x7F25A95Cu;
    // 7F25A95C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25A960:
    ctx->pc = 0x7F25A960u;
    // 7F25A960: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25A964:
    ctx->pc = 0x7F25A964u;
    // 7F25A964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25A968:
    ctx->pc = 0x7F25A968u;
    ctx->downcount -= 22;
    // 7F25A968: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25A96C:
    ctx->pc = 0x7F25A96Cu;
    // 7F25A96C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25A970:
    ctx->pc = 0x7F25A970u;
    // 7F25A970: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F25A974:
    ctx->pc = 0x7F25A974u;
    // 7F25A974: li      r5, 1088
    ctx->gpr[5] = (u32)(s32)(1088);

label_7F25A978:
    ctx->pc = 0x7F25A978u;
    // 7F25A978: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A97C:
    ctx->pc = 0x7F25A97Cu;
    // 7F25A97C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25A980:
    ctx->pc = 0x7F25A980u;
    // 7F25A980: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25A980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25A984:
    ctx->pc = 0x7F25A984u;
    // 7F25A984: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25A984u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F25A988:
    ctx->pc = 0x7F25A988u;
    // 7F25A988: stmw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25A98C:
    ctx->pc = 0x7F25A98Cu;
    // 7F25A98C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25A990:
    ctx->pc = 0x7F25A990u;
    // 7F25A990: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F25A994:
    ctx->pc = 0x7F25A994u;
    // 7F25A994: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F25A998u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F25A998:
    ctx->pc = 0x7F25A998u;
    ctx->downcount -= 2;
    // 7F25A998: or.   r31, r3, r3
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

label_7F25A99C:
    ctx->pc = 0x7F25A99Cu;
    // 7F25A99C: bc    12, 2, 0x7F25AA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25AA04;
        }
    }

label_7F25A9A0:
    ctx->pc = 0x7F25A9A0u;
    ctx->downcount -= 5;
    // 7F25A9A0: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F25A9A4:
    ctx->pc = 0x7F25A9A4u;
    // 7F25A9A4: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F25A9A8:
    ctx->pc = 0x7F25A9A8u;
    // 7F25A9A8: addi    r4, r4, -23676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23676);

label_7F25A9AC:
    ctx->pc = 0x7F25A9ACu;
    // 7F25A9AC: addi    r5, r5, -23196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23196);

label_7F25A9B0:
    ctx->pc = 0x7F25A9B0u;
    // 7F25A9B0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F25A9B4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F25A9B4:
    ctx->pc = 0x7F25A9B4u;
    ctx->downcount -= 14;
    // 7F25A9B4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25A9B8:
    ctx->pc = 0x7F25A9B8u;
    // 7F25A9B8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F25A9BC:
    ctx->pc = 0x7F25A9BCu;
    // 7F25A9BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25A9C0:
    ctx->pc = 0x7F25A9C0u;
    // 7F25A9C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A9C4:
    ctx->pc = 0x7F25A9C4u;
    // 7F25A9C4: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F25A9C8:
    ctx->pc = 0x7F25A9C8u;
    // 7F25A9C8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F25A9CC:
    ctx->pc = 0x7F25A9CCu;
    // 7F25A9CC: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F25A9D0:
    ctx->pc = 0x7F25A9D0u;
    // 7F25A9D0: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25A9D4:
    ctx->pc = 0x7F25A9D4u;
    // 7F25A9D4: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25A9D8:
    ctx->pc = 0x7F25A9D8u;
    // 7F25A9D8: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25A9DC:
    ctx->pc = 0x7F25A9DCu;
    // 7F25A9DC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25A9E0:
    ctx->pc = 0x7F25A9E0u;
    // 7F25A9E0: stfs     f31, 1080(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25A9E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1080);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F25A9E4:
    ctx->pc = 0x7F25A9E4u;
    // 7F25A9E4: stw     r30, 1084(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1084);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F25A9E8:
    ctx->pc = 0x7F25A9E8u;
    // 7F25A9E8: bl      0x7F25A894
    {
            ctx->lr = 0x7F25A9ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25A894u;
                return;
            }
            goto label_7F25A894;
    }

label_7F25A9EC:
    ctx->pc = 0x7F25A9ECu;
    ctx->downcount -= 2;
    // 7F25A9EC: cmpwi   r3, 0
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

label_7F25A9F0:
    ctx->pc = 0x7F25A9F0u;
    // 7F25A9F0: bc    4, 0, 0x7F25AA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25AA04;
        }
    }

label_7F25A9F4:
    ctx->pc = 0x7F25A9F4u;
    ctx->downcount -= 2;
    // 7F25A9F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25A9F8:
    ctx->pc = 0x7F25A9F8u;
    // 7F25A9F8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25A9FCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25A9FC:
    ctx->pc = 0x7F25A9FCu;
    ctx->downcount -= 2;
    // 7F25A9FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25AA00:
    ctx->pc = 0x7F25AA00u;
    // 7F25AA00: b       0x7F25AA08
    {
            goto label_7F25AA08;
    }

label_7F25AA04:
    ctx->pc = 0x7F25AA04u;
    ctx->downcount -= 1;
    // 7F25AA04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25AA08:
    ctx->pc = 0x7F25AA08u;
    ctx->downcount -= 17;
    // 7F25AA08: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AA08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AA0C:
    ctx->pc = 0x7F25AA0Cu;
    // 7F25AA0C: lmw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25AA10:
    ctx->pc = 0x7F25AA10u;
    // 7F25AA10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AA14:
    ctx->pc = 0x7F25AA14u;
    // 7F25AA14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AA18:
    ctx->pc = 0x7F25AA18u;
    // 7F25AA18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25AA1C:
    ctx->pc = 0x7F25AA1Cu;
    // 7F25AA1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AA20:
    ctx->pc = 0x7F25AA20u;
    ctx->downcount -= 28;
    // 7F25AA20: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AA24:
    ctx->pc = 0x7F25AA24u;
    // 7F25AA24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AA28:
    ctx->pc = 0x7F25AA28u;
    // 7F25AA28: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AA2C:
    ctx->pc = 0x7F25AA2Cu;
    // 7F25AA2C: stfd     f31, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AA2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25AA30:
    ctx->pc = 0x7F25AA30u;
    // 7F25AA30: psq_st   f31, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25AA30u);
        if (ctx->exception) return;
    }

label_7F25AA34:
    ctx->pc = 0x7F25AA34u;
    // 7F25AA34: stfd     f30, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AA34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25AA38:
    ctx->pc = 0x7F25AA38u;
    // 7F25AA38: psq_st   f30, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25AA38u);
        if (ctx->exception) return;
    }

label_7F25AA3C:
    ctx->pc = 0x7F25AA3Cu;
    // 7F25AA3C: stmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25AA40:
    ctx->pc = 0x7F25AA40u;
    // 7F25AA40: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AA44:
    ctx->pc = 0x7F25AA44u;
    // 7F25AA44: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F25AA48:
    ctx->pc = 0x7F25AA48u;
    // 7F25AA48: lwz     r5, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25AA4C:
    ctx->pc = 0x7F25AA4Cu;
    // 7F25AA4C: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F25AA50:
    ctx->pc = 0x7F25AA50u;
    // 7F25AA50: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AA54:
    ctx->pc = 0x7F25AA54u;
    // 7F25AA54: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F25AA58:
    ctx->pc = 0x7F25AA58u;
    // 7F25AA58: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AA5C:
    ctx->pc = 0x7F25AA5Cu;
    // 7F25AA5C: lwz     r3, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AA60:
    ctx->pc = 0x7F25AA60u;
    // 7F25AA60: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25AA64:
    ctx->pc = 0x7F25AA64u;
    // 7F25AA64: bl      0x7F25AEF4
    {
            ctx->lr = 0x7F25AA68u;
            goto label_7F25AEF4;
    }

label_7F25AA68:
    ctx->pc = 0x7F25AA68u;
    ctx->downcount -= 35;
    // 7F25AA68: lwz     r4, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25AA6C:
    ctx->pc = 0x7F25AA6Cu;
    // 7F25AA6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AA70:
    ctx->pc = 0x7F25AA70u;
    // 7F25AA70: lfs     f31, 22360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25AA70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F25AA74:
    ctx->pc = 0x7F25AA74u;
    // 7F25AA74: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F25AA78:
    ctx->pc = 0x7F25AA78u;
    // 7F25AA78: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AA7C:
    ctx->pc = 0x7F25AA7Cu;
    // 7F25AA7C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F25AA80:
    ctx->pc = 0x7F25AA80u;
    // 7F25AA80: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F25AA84:
    ctx->pc = 0x7F25AA84u;
    // 7F25AA84: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F25AA88:
    ctx->pc = 0x7F25AA88u;
    // 7F25AA88: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F25AA8C:
    ctx->pc = 0x7F25AA8Cu;
    // 7F25AA8C: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F25AA90:
    ctx->pc = 0x7F25AA90u;
    // 7F25AA90: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AA94:
    ctx->pc = 0x7F25AA94u;
    // 7F25AA94: lwz     r3, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AA98:
    ctx->pc = 0x7F25AA98u;
    // 7F25AA98: lwz     r24, 140(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(140);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F25AA9C:
    ctx->pc = 0x7F25AA9Cu;
    // 7F25AA9C: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25AAA0:
    ctx->pc = 0x7F25AAA0u;
    // 7F25AAA0: addi    r5, r3, 184
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(184);

label_7F25AAA4:
    ctx->pc = 0x7F25AAA4u;
    // 7F25AAA4: addi    r7, r3, 192
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(192);

label_7F25AAA8:
    ctx->pc = 0x7F25AAA8u;
    // 7F25AAA8: lwz     r26, 104(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(104);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F25AAAC:
    ctx->pc = 0x7F25AAACu;
    // 7F25AAAC: subfic  r3, r4, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F25AAB0:
    ctx->pc = 0x7F25AAB0u;
    // 7F25AAB0: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F25AAB4:
    ctx->pc = 0x7F25AAB4u;
    // 7F25AAB4: rlwinm r6, r3, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F25AAB8:
    ctx->pc = 0x7F25AAB8u;
    // 7F25AAB8: lwzx    r31, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25AABC:
    ctx->pc = 0x7F25AABCu;
    // 7F25AABC: mulli   r4, r4, 24
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)24);

label_7F25AAC0:
    ctx->pc = 0x7F25AAC0u;
    // 7F25AAC0: lwzx    r29, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F25AAC4:
    ctx->pc = 0x7F25AAC4u;
    // 7F25AAC4: lwzx    r30, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F25AAC8:
    ctx->pc = 0x7F25AAC8u;
    // 7F25AAC8: lwzx    r28, r7, r6
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[6];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F25AACC:
    ctx->pc = 0x7F25AACCu;
    // 7F25AACC: mulli   r3, r3, 24
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F25AAD0:
    ctx->pc = 0x7F25AAD0u;
    // 7F25AAD0: addi    r23, r4, 164
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(164);

label_7F25AAD4:
    ctx->pc = 0x7F25AAD4u;
    // 7F25AAD4: addi    r22, r3, 164
    ctx->gpr[22] = ctx->gpr[3] + (u32)(s32)(164);

label_7F25AAD8:
    ctx->pc = 0x7F25AAD8u;
    // 7F25AAD8: add   r23, r21, r23
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F25AADC:
    ctx->pc = 0x7F25AADCu;
    // 7F25AADC: add   r22, r21, r22
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F25AAE0:
    ctx->pc = 0x7F25AAE0u;
    // 7F25AAE0: b       0x7F25AE4C
    {
            goto label_7F25AE4C;
    }

label_7F25AAE4:
    ctx->pc = 0x7F25AAE4u;
    ctx->downcount -= 3;
    // 7F25AAE4: lfs     f0, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AAE4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AAE8:
    ctx->pc = 0x7F25AAE8u;
    // 7F25AAE8: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25AAE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F25AAEC:
    // 7F25AAEC: bc    4, 1, 0x7F25AE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25AE24;
        }
    }

label_7F25AAF0:
    ctx->downcount -= 4;
    // 7F25AAF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25AAF4:
    // 7F25AAF4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25AAF8:
    // 7F25AAF8: addi    r4, r24, 4
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(4);

label_7F25AAFC:
    // 7F25AAFC: bl      0x800261B4
    {
            ctx->lr = 0x7F25AB00u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25AB00:
    ctx->downcount -= 4;
    // 7F25AB00: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F25AB04:
    // 7F25AB04: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25AB08:
    // 7F25AB08: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F25AB0C:
    // 7F25AB0C: bl      0x7F114F50
    {
            ctx->lr = 0x7F25AB10u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F25AB10:
    ctx->downcount -= 5;
    // 7F25AB10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25AB14:
    // 7F25AB14: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25AB18:
    ctx->pc = 0x7F25AB18u;
    // 7F25AB18: lfs     f1, 22376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25AB1C:
    // 7F25AB1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AB20:
    // 7F25AB20: bl      0x800261FC
    {
            ctx->lr = 0x7F25AB24u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25AB24:
    ctx->downcount -= 4;
    // 7F25AB24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25AB28:
    // 7F25AB28: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25AB2C:
    // 7F25AB2C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25AB30:
    // 7F25AB30: bl      0x800261B4
    {
            ctx->lr = 0x7F25AB34u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25AB34:
    ctx->pc = 0x7F25AB34u;
    ctx->downcount -= 39;
    // 7F25AB34: lfs     f4, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB34u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F25AB38:
    // 7F25AB38: xoris   r4, r18, 0x8000
    ctx->gpr[4] = ctx->gpr[18] ^ (0x8000u << 16);

label_7F25AB3C:
    // 7F25AB3C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25AB40:
    // 7F25AB40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AB44:
    ctx->pc = 0x7F25AB44u;
    // 7F25AB44: fneg    f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F25AB44u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[4]) ^ 0x8000000000000000ull);

label_7F25AB48:
    // 7F25AB48: addi    r5, r3, 22368
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22368);

label_7F25AB4C:
    ctx->pc = 0x7F25AB4Cu;
    // 7F25AB4C: lfs     f0, 120(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB4Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AB50:
    // 7F25AB50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AB54:
    ctx->pc = 0x7F25AB54u;
    // 7F25AB54: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25AB58:
    ctx->pc = 0x7F25AB58u;
    // 7F25AB58: fdivs   f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AB58u)) return;
    ppc_fdivs(ctx, 3, 1, 0);

label_7F25AB5C:
    ctx->pc = 0x7F25AB5Cu;
    // 7F25AB5C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AB60:
    ctx->pc = 0x7F25AB60u;
    // 7F25AB60: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AB64:
    ctx->pc = 0x7F25AB64u;
    // 7F25AB64: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AB68:
    ctx->pc = 0x7F25AB68u;
    // 7F25AB68: lfs     f0, 22380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AB6C:
    ctx->pc = 0x7F25AB6Cu;
    // 7F25AB6C: fadds   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25AB6Cu)) return;
    ppc_fadds(ctx, 3, 4, 3);

label_7F25AB70:
    ctx->pc = 0x7F25AB70u;
    // 7F25AB70: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25AB70u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25AB74:
    ctx->pc = 0x7F25AB74u;
    // 7F25AB74: stfs     f3, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB74u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F25AB78:
    ctx->pc = 0x7F25AB78u;
    // 7F25AB78: lfs     f2, 24(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB78u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25AB7C:
    ctx->pc = 0x7F25AB7Cu;
    // 7F25AB7C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AB7Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F25AB80:
    ctx->pc = 0x7F25AB80u;
    // 7F25AB80: stfs     f1, 24(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB80u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25AB84:
    ctx->pc = 0x7F25AB84u;
    // 7F25AB84: lfs     f1, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AB84u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25AB88:
    ctx->pc = 0x7F25AB88u;
    // 7F25AB88: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AB88u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F25AB8C:
    // 7F25AB8C: bc    4, 0, 0x7F25ABBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25ABBC;
        }
    }

label_7F25AB90:
    ctx->downcount -= 11;
    // 7F25AB90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25AB94:
    // 7F25AB94: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F25AB98:
    ctx->pc = 0x7F25AB98u;
    // 7F25AB98: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25AB9C:
    // 7F25AB9C: addi    r24, r24, 44
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(44);

label_7F25ABA0:
    // 7F25ABA0: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F25ABA4:
    // 7F25ABA4: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F25ABA8:
    ctx->pc = 0x7F25ABA8u;
    // 7F25ABA8: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ABAC:
    // 7F25ABAC: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F25ABB0:
    ctx->pc = 0x7F25ABB0u;
    // 7F25ABB0: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ABB4:
    // 7F25ABB4: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F25ABB8:
    // 7F25ABB8: b       0x7F25AE3C
    {
            goto label_7F25AE3C;
    }

label_7F25ABBC:
    ctx->pc = 0x7F25ABBCu;
    ctx->downcount -= 10;
    // 7F25ABBC: lfs     f0, 116(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25ABBCu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25ABC0:
    ctx->pc = 0x7F25ABC0u;
    // 7F25ABC0: lhax    r0, r22, r19
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[19];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25ABC4:
    ctx->pc = 0x7F25ABC4u;
    // 7F25ABC4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ABC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ABC8:
    ctx->pc = 0x7F25ABC8u;
    // 7F25ABC8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ABC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ABCC:
    ctx->pc = 0x7F25ABCCu;
    // 7F25ABCC: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25ABD0:
    // 7F25ABD0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F25ABD4:
    ctx->pc = 0x7F25ABD4u;
    // 7F25ABD4: sthx    r0, r23, r19
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[19];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ABD8:
    ctx->pc = 0x7F25ABD8u;
    // 7F25ABD8: lhax    r0, r23, r19
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[19];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25ABDC:
    // 7F25ABDC: cmpwi   r0, 6
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

label_7F25ABE0:
    // 7F25ABE0: bc    12, 0, 0x7F25ABEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25ABEC;
        }
    }

label_7F25ABE4:
    ctx->downcount -= 2;
    // 7F25ABE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25ABE8:
    ctx->pc = 0x7F25ABE8u;
    // 7F25ABE8: sthx    r0, r23, r19
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[19];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ABEC:
    ctx->downcount -= 10;
    // 7F25ABEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25ABF0:
    // 7F25ABF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25ABF4:
    ctx->pc = 0x7F25ABF4u;
    // 7F25ABF4: lfs     f2, 32(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25ABF4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25ABF8:
    ctx->pc = 0x7F25ABF8u;
    // 7F25ABF8: lfs     f1, 22384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25ABF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25ABFC:
    ctx->pc = 0x7F25ABFCu;
    // 7F25ABFC: lfs     f0, 22388(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25ABFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AC00:
    ctx->pc = 0x7F25AC00u;
    // 7F25AC00: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AC00u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F25AC04:
    ctx->pc = 0x7F25AC04u;
    // 7F25AC04: stfs     f1, 32(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC04u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25AC08:
    ctx->pc = 0x7F25AC08u;
    // 7F25AC08: lfs     f1, 32(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC08u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25AC0C:
    ctx->pc = 0x7F25AC0Cu;
    // 7F25AC0C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AC0Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F25AC10:
    // 7F25AC10: bc    4, 0, 0x7F25AC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25AC18;
        }
    }

label_7F25AC14:
    ctx->pc = 0x7F25AC14u;
    ctx->downcount -= 1;
    // 7F25AC14: stfs     f0, 32(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC14u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25AC18:
    ctx->pc = 0x7F25AC18u;
    ctx->downcount -= 13;
    // 7F25AC18: lwz     r0, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AC1C:
    // 7F25AC1C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AC20:
    // 7F25AC20: addi    r4, r3, 22392
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22392);

label_7F25AC24:
    // 7F25AC24: mullw   r5, r0, r20
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[20];
        ctx->gpr[5] = (u32)product;
    }

label_7F25AC28:
    ctx->pc = 0x7F25AC28u;
    // 7F25AC28: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F25AC2C:
    // 7F25AC2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F25AC30:
    // 7F25AC30: rlwinm. r0, r5, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25AC34:
    // 7F25AC34: rlwinm r0, r5, 0, 21, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000007FFu;
    }

label_7F25AC38:
    // 7F25AC38: bc    12, 2, 0x7F25AC40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25AC40;
        }
    }

label_7F25AC3C:
    ctx->downcount -= 1;
    // 7F25AC3C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25AC40:
    ctx->downcount -= 35;
    // 7F25AC40: mullw   r5, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[5] = (u32)product;
    }

label_7F25AC44:
    // 7F25AC44: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25AC48:
    ctx->pc = 0x7F25AC48u;
    // 7F25AC48: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AC4C:
    // 7F25AC4C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25AC50:
    // 7F25AC50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AC54:
    ctx->pc = 0x7F25AC54u;
    // 7F25AC54: lfd     f2, 22368(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22368);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AC58:
    // 7F25AC58: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F25AC5C:
    ctx->pc = 0x7F25AC5Cu;
    // 7F25AC5C: lfs     f0, 22396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AC60:
    ctx->pc = 0x7F25AC60u;
    // 7F25AC60: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AC64:
    ctx->pc = 0x7F25AC64u;
    // 7F25AC64: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AC68:
    ctx->pc = 0x7F25AC68u;
    // 7F25AC68: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25AC68u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25AC6C:
    ctx->pc = 0x7F25AC6Cu;
    // 7F25AC6C: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AC6Cu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F25AC70:
    ctx->pc = 0x7F25AC70u;
    // 7F25AC70: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AC70u)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F25AC74:
    ctx->pc = 0x7F25AC74u;
    // 7F25AC74: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F25AC74u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F25AC78:
    // 7F25AC78: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F25AC7Cu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F25AC7C:
    ctx->pc = 0x7F25AC7Cu;
    ctx->downcount -= 8;
    // 7F25AC7C: lfs     f0, 24(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC7Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AC80:
    ctx->pc = 0x7F25AC80u;
    // 7F25AC80: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AC80u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25AC84:
    ctx->pc = 0x7F25AC84u;
    // 7F25AC84: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F25AC84u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F25AC88:
    ctx->pc = 0x7F25AC88u;
    // 7F25AC88: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AC88u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25AC8C:
    ctx->pc = 0x7F25AC8Cu;
    // 7F25AC8C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25AC90:
    ctx->pc = 0x7F25AC90u;
    // 7F25AC90: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AC94:
    ctx->pc = 0x7F25AC94u;
    // 7F25AC94: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25AC98:
    // 7F25AC98: bl      0x7F008330
    {
            ctx->lr = 0x7F25AC9Cu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F25AC9C:
    ctx->pc = 0x7F25AC9Cu;
    ctx->downcount -= 130;
    // 7F25AC9C: lfs     f0, 24(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25AC9Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25ACA0:
    // 7F25ACA0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25ACA4:
    // 7F25ACA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25ACA8:
    // 7F25ACA8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25ACAC:
    ctx->pc = 0x7F25ACACu;
    // 7F25ACAC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25ACACu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25ACB0:
    // 7F25ACB0: addi    r5, r3, 22400
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22400);

label_7F25ACB4:
    // 7F25ACB4: addi    r6, r4, 22368
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22368);

label_7F25ACB8:
    // 7F25ACB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25ACBC:
    // 7F25ACBC: addi    r4, r3, 22404
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22404);

label_7F25ACC0:
    ctx->pc = 0x7F25ACC0u;
    // 7F25ACC0: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25ACC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F25ACC4:
    ctx->pc = 0x7F25ACC4u;
    // 7F25ACC4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ACC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ACC8:
    // 7F25ACC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25ACCC:
    ctx->pc = 0x7F25ACCCu;
    // 7F25ACCC: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25ACD0:
    // 7F25ACD0: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F25ACD4:
    ctx->pc = 0x7F25ACD4u;
    // 7F25ACD4: lfs     f2, 22396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25ACD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25ACD8:
    ctx->pc = 0x7F25ACD8u;
    // 7F25ACD8: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ACD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ACDC:
    ctx->pc = 0x7F25ACDCu;
    // 7F25ACDC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25ACDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25ACE0:
    ctx->pc = 0x7F25ACE0u;
    // 7F25ACE0: lwz     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25ACE4:
    ctx->pc = 0x7F25ACE4u;
    // 7F25ACE4: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25ACE8:
    ctx->pc = 0x7F25ACE8u;
    // 7F25ACE8: lfd     f7, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25ACE8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25ACEC:
    ctx->pc = 0x7F25ACECu;
    // 7F25ACEC: sth     r5, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F25ACF0:
    ctx->pc = 0x7F25ACF0u;
    // 7F25ACF0: lwz     r0, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25ACF4:
    // 7F25ACF4: add   r0, r0, r27
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F25ACF8:
    ctx->pc = 0x7F25ACF8u;
    // 7F25ACF8: stw     r0, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25ACFC:
    ctx->pc = 0x7F25ACFCu;
    // 7F25ACFC: lwz     r3, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AD00:
    // 7F25AD00: rlwinm r0, r3, 20, 0, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 20u) & 0xFFF00000u;
    }

label_7F25AD04:
    // 7F25AD04: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F25AD08:
    // 7F25AD08: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F25AD0C:
    // 7F25AD0C: rlwinm r0, r0, 12, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFFFFFu;
    }

label_7F25AD10:
    // 7F25AD10: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F25AD14:
    ctx->pc = 0x7F25AD14u;
    // 7F25AD14: stw     r0, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AD18:
    ctx->pc = 0x7F25AD18u;
    // 7F25AD18: lhax    r4, r23, r19
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[19];
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25AD1C:
    ctx->pc = 0x7F25AD1Cu;
    // 7F25AD1C: lfs     f3, 152(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD1Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F25AD20:
    // 7F25AD20: divw   r0, r4, r7
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F25AD24:
    ctx->pc = 0x7F25AD24u;
    // 7F25AD24: lfs     f0, 156(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD24u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AD28:
    ctx->pc = 0x7F25AD28u;
    // 7F25AD28: fmuls   f5, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25AD28u)) return;
    ppc_fmuls(ctx, 5, 4, 3);

label_7F25AD2C:
    ctx->pc = 0x7F25AD2Cu;
    // 7F25AD2C: lwz     r5, 88(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25AD30:
    ctx->pc = 0x7F25AD30u;
    // 7F25AD30: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AD30u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F25AD34:
    ctx->pc = 0x7F25AD34u;
    // 7F25AD34: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AD38:
    // 7F25AD38: mullw   r3, r0, r7
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[3] = (u32)product;
    }

label_7F25AD3C:
    // 7F25AD3C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25AD40:
    ctx->pc = 0x7F25AD40u;
    // 7F25AD40: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AD44:
    ctx->pc = 0x7F25AD44u;
    // 7F25AD44: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F25AD48:
    ctx->pc = 0x7F25AD48u;
    // 7F25AD48: lfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AD4C:
    // 7F25AD4C: subf   r0, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F25AD50:
    // 7F25AD50: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25AD54:
    ctx->pc = 0x7F25AD54u;
    // 7F25AD54: fsubs   f3, f3, f7
    if (!ppc_fp_available_inline(ctx, 0x7F25AD54u)) return;
    ppc_fsubs(ctx, 3, 3, 7);

label_7F25AD58:
    ctx->pc = 0x7F25AD58u;
    // 7F25AD58: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AD5C:
    ctx->pc = 0x7F25AD5Cu;
    // 7F25AD5C: fmadds f8, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AD5Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[8] = ctx->ps1[8] = result;
    }

label_7F25AD60:
    ctx->pc = 0x7F25AD60u;
    // 7F25AD60: lfd     f6, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AD64:
    ctx->pc = 0x7F25AD64u;
    // 7F25AD64: fsubs   f1, f6, f7
    if (!ppc_fp_available_inline(ctx, 0x7F25AD64u)) return;
    ppc_fsubs(ctx, 1, 6, 7);

label_7F25AD68:
    ctx->pc = 0x7F25AD68u;
    // 7F25AD68: fmuls   f0, f2, f8
    if (!ppc_fp_available_inline(ctx, 0x7F25AD68u)) return;
    ppc_fmuls(ctx, 0, 2, 8);

label_7F25AD6C:
    ctx->pc = 0x7F25AD6Cu;
    // 7F25AD6C: fmadds f3, f1, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F25AD6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[5], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_7F25AD70:
    ctx->pc = 0x7F25AD70u;
    // 7F25AD70: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AD70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25AD74:
    ctx->pc = 0x7F25AD74u;
    // 7F25AD74: fmuls   f1, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25AD74u)) return;
    ppc_fmuls(ctx, 1, 2, 3);

label_7F25AD78:
    ctx->pc = 0x7F25AD78u;
    // 7F25AD78: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25AD7C:
    ctx->pc = 0x7F25AD7Cu;
    // 7F25AD7C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AD7Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25AD80:
    ctx->pc = 0x7F25AD80u;
    // 7F25AD80: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AD84:
    ctx->pc = 0x7F25AD84u;
    // 7F25AD84: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25AD88:
    ctx->pc = 0x7F25AD88u;
    // 7F25AD88: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AD8C:
    ctx->pc = 0x7F25AD8Cu;
    // 7F25AD8C: sth     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25AD90:
    ctx->pc = 0x7F25AD90u;
    // 7F25AD90: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25AD94:
    ctx->pc = 0x7F25AD94u;
    // 7F25AD94: lfs     f0, 144(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25AD94u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AD98:
    ctx->pc = 0x7F25AD98u;
    // 7F25AD98: fadds   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25AD98u)) return;
    ppc_fadds(ctx, 0, 0, 3);

label_7F25AD9C:
    ctx->pc = 0x7F25AD9Cu;
    // 7F25AD9C: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AD9Cu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F25ADA0:
    ctx->pc = 0x7F25ADA0u;
    // 7F25ADA0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ADA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ADA4:
    ctx->pc = 0x7F25ADA4u;
    // 7F25ADA4: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ADA8:
    ctx->pc = 0x7F25ADA8u;
    // 7F25ADA8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25ADAC:
    ctx->pc = 0x7F25ADACu;
    // 7F25ADAC: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ADB0:
    ctx->pc = 0x7F25ADB0u;
    // 7F25ADB0: lfs     f0, 148(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADB0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25ADB4:
    ctx->pc = 0x7F25ADB4u;
    // 7F25ADB4: fadds   f0, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F25ADB4u)) return;
    ppc_fadds(ctx, 0, 0, 8);

label_7F25ADB8:
    ctx->pc = 0x7F25ADB8u;
    // 7F25ADB8: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ADB8u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F25ADBC:
    ctx->pc = 0x7F25ADBCu;
    // 7F25ADBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ADBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ADC0:
    ctx->pc = 0x7F25ADC0u;
    // 7F25ADC0: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ADC4:
    ctx->pc = 0x7F25ADC4u;
    // 7F25ADC4: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25ADC8:
    ctx->pc = 0x7F25ADC8u;
    // 7F25ADC8: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25ADCC:
    ctx->pc = 0x7F25ADCCu;
    // 7F25ADCC: lfs     f0, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADCCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25ADD0:
    ctx->pc = 0x7F25ADD0u;
    // 7F25ADD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ADD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ADD4:
    ctx->pc = 0x7F25ADD4u;
    // 7F25ADD4: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ADD8:
    ctx->pc = 0x7F25ADD8u;
    // 7F25ADD8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25ADDC:
    ctx->pc = 0x7F25ADDCu;
    // 7F25ADDC: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25ADE0:
    ctx->pc = 0x7F25ADE0u;
    // 7F25ADE0: lfs     f0, 28(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADE0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25ADE4:
    ctx->pc = 0x7F25ADE4u;
    // 7F25ADE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25ADE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25ADE8:
    ctx->pc = 0x7F25ADE8u;
    // 7F25ADE8: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25ADE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25ADEC:
    ctx->pc = 0x7F25ADECu;
    // 7F25ADEC: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25ADF0:
    ctx->pc = 0x7F25ADF0u;
    // 7F25ADF0: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25ADF4:
    // 7F25ADF4: bl      0x7F25AE88
    {
            ctx->lr = 0x7F25ADF8u;
            goto label_7F25AE88;
    }

label_7F25ADF8:
    ctx->downcount -= 26;
    // 7F25ADF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25ADFC:
    // 7F25ADFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25AE00:
    // 7F25AE00: addi    r5, r3, 22408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22408);

label_7F25AE04:
    ctx->pc = 0x7F25AE04u;
    // 7F25AE04: lfs     f0, 22380(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25AE04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AE08:
    ctx->pc = 0x7F25AE08u;
    // 7F25AE08: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25AE08u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25AE0C:
    // 7F25AE0C: addi    r3, r24, 4
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(4);

label_7F25AE10:
    // 7F25AE10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AE14:
    ctx->pc = 0x7F25AE14u;
    // 7F25AE14: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AE14u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F25AE18:
    ctx->pc = 0x7F25AE18u;
    // 7F25AE18: fdivs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25AE18u)) return;
    ppc_fdivs(ctx, 1, 0, 1);

label_7F25AE1C:
    // 7F25AE1C: bl      0x800261FC
    {
            ctx->lr = 0x7F25AE20u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25AE20:
    ctx->downcount -= 1;
    // 7F25AE20: b       0x7F25AE28
    {
            goto label_7F25AE28;
    }

label_7F25AE24:
    ctx->downcount -= 1;
    // 7F25AE24: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F25AE28:
    ctx->downcount -= 5;
    // 7F25AE28: addi    r24, r24, 44
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(44);

label_7F25AE2C:
    // 7F25AE2C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F25AE30:
    // 7F25AE30: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F25AE34:
    // 7F25AE34: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F25AE38:
    // 7F25AE38: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F25AE3C:
    ctx->downcount -= 4;
    // 7F25AE3C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F25AE40:
    // 7F25AE40: addi    r20, r20, 11
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(11);

label_7F25AE44:
    // 7F25AE44: addi    r19, r19, 2
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(2);

label_7F25AE48:
    // 7F25AE48: addi    r18, r18, 10
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(10);

label_7F25AE4C:
    ctx->downcount -= 2;
    // 7F25AE4C: cmpw    r27, r26
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25AE50:
    // 7F25AE50: bc    12, 0, 0x7F25AAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25AAE4u;
                return;
            }
            goto label_7F25AAE4;
        }
    }

label_7F25AE54:
    ctx->pc = 0x7F25AE54u;
    ctx->downcount -= 2;
    // 7F25AE54: cmpw    r25, r26
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25AE58:
    ctx->pc = 0x7F25AE58u;
    // 7F25AE58: bc    12, 0, 0x7F25AE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25AE64;
        }
    }

label_7F25AE5C:
    ctx->pc = 0x7F25AE5Cu;
    ctx->downcount -= 2;
    // 7F25AE5C: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F25AE60:
    ctx->pc = 0x7F25AE60u;
    // 7F25AE60: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25AE64u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25AE64:
    ctx->pc = 0x7F25AE64u;
    ctx->downcount -= 20;
    // 7F25AE64: psq_l   f31, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25AE64u);
        if (ctx->exception) return;
    }

label_7F25AE68:
    ctx->pc = 0x7F25AE68u;
    // 7F25AE68: lfd     f31, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AE68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AE6C:
    ctx->pc = 0x7F25AE6Cu;
    // 7F25AE6C: psq_l   f30, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AE6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25AE6Cu);
        if (ctx->exception) return;
    }

label_7F25AE70:
    ctx->pc = 0x7F25AE70u;
    // 7F25AE70: lfd     f30, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AE70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AE74:
    ctx->pc = 0x7F25AE74u;
    // 7F25AE74: lmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25AE78:
    ctx->pc = 0x7F25AE78u;
    // 7F25AE78: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AE7C:
    ctx->pc = 0x7F25AE7Cu;
    // 7F25AE7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AE80:
    ctx->pc = 0x7F25AE80u;
    // 7F25AE80: addi    r1, r1, 208
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(208);

label_7F25AE84:
    ctx->pc = 0x7F25AE84u;
    // 7F25AE84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AE88:
    ctx->pc = 0x7F25AE88u;
    ctx->downcount -= 4;
    // 7F25AE88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AE8C:
    ctx->pc = 0x7F25AE8Cu;
    // 7F25AE8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AE90:
    ctx->pc = 0x7F25AE90u;
    // 7F25AE90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AE94:
    ctx->pc = 0x7F25AE94u;
    // 7F25AE94: bl      0x7F25AED0
    {
            ctx->lr = 0x7F25AE98u;
            goto label_7F25AED0;
    }

label_7F25AE98:
    ctx->pc = 0x7F25AE98u;
    ctx->downcount -= 31;
    // 7F25AE98: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25AE9C:
    ctx->pc = 0x7F25AE9Cu;
    // 7F25AE9C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25AEA0:
    ctx->pc = 0x7F25AEA0u;
    // 7F25AEA0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25AEA4:
    ctx->pc = 0x7F25AEA4u;
    // 7F25AEA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25AEA8:
    ctx->pc = 0x7F25AEA8u;
    // 7F25AEA8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AEAC:
    ctx->pc = 0x7F25AEACu;
    // 7F25AEAC: lfd     f2, 22416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25AEACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22416);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AEB0:
    ctx->pc = 0x7F25AEB0u;
    // 7F25AEB0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AEB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25AEB4:
    ctx->pc = 0x7F25AEB4u;
    // 7F25AEB4: lfs     f0, 22412(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25AEB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25AEB8:
    ctx->pc = 0x7F25AEB8u;
    // 7F25AEB8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25AEB8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25AEBC:
    ctx->pc = 0x7F25AEBCu;
    // 7F25AEBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AEC0:
    ctx->pc = 0x7F25AEC0u;
    // 7F25AEC0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25AEC0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F25AEC4:
    ctx->pc = 0x7F25AEC4u;
    // 7F25AEC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AEC8:
    ctx->pc = 0x7F25AEC8u;
    // 7F25AEC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25AECC:
    ctx->pc = 0x7F25AECCu;
    // 7F25AECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AED0:
    ctx->pc = 0x7F25AED0u;
    ctx->downcount -= 13;
    // 7F25AED0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25AED4:
    ctx->pc = 0x7F25AED4u;
    // 7F25AED4: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F25AED8:
    ctx->pc = 0x7F25AED8u;
    // 7F25AED8: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F25AEDC:
    ctx->pc = 0x7F25AEDCu;
    // 7F25AEDC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25AEE0:
    ctx->pc = 0x7F25AEE0u;
    // 7F25AEE0: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F25AEE4:
    ctx->pc = 0x7F25AEE4u;
    // 7F25AEE4: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F25AEE8:
    ctx->pc = 0x7F25AEE8u;
    // 7F25AEE8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F25AEEC:
    ctx->pc = 0x7F25AEECu;
    // 7F25AEEC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25AEF0:
    ctx->pc = 0x7F25AEF0u;
    // 7F25AEF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AEF4:
    ctx->pc = 0x7F25AEF4u;
    ctx->downcount -= 7;
    // 7F25AEF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AEF8:
    ctx->pc = 0x7F25AEF8u;
    // 7F25AEF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AEFC:
    ctx->pc = 0x7F25AEFCu;
    // 7F25AEFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AF00:
    ctx->pc = 0x7F25AF00u;
    // 7F25AF00: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25AF04:
    ctx->pc = 0x7F25AF04u;
    // 7F25AF04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AF08:
    ctx->pc = 0x7F25AF08u;
    // 7F25AF08: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25AF0C:
    ctx->pc = 0x7F25AF0Cu;
    // 7F25AF0C: bl      0x7F01B234
    {
            ctx->lr = 0x7F25AF10u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F25AF10:
    ctx->pc = 0x7F25AF10u;
    ctx->downcount -= 7;
    // 7F25AF10: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25AF14:
    ctx->pc = 0x7F25AF14u;
    // 7F25AF14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AF18:
    ctx->pc = 0x7F25AF18u;
    // 7F25AF18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25AF1C:
    ctx->pc = 0x7F25AF1Cu;
    // 7F25AF1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AF20:
    ctx->pc = 0x7F25AF20u;
    // 7F25AF20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25AF24:
    ctx->pc = 0x7F25AF24u;
    // 7F25AF24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AF28:
    ctx->pc = 0x7F25AF28u;
    ctx->downcount -= 7;
    // 7F25AF28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AF2C:
    ctx->pc = 0x7F25AF2Cu;
    // 7F25AF2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AF30:
    ctx->pc = 0x7F25AF30u;
    // 7F25AF30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AF34:
    ctx->pc = 0x7F25AF34u;
    // 7F25AF34: lwz     r12, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F25AF38:
    ctx->pc = 0x7F25AF38u;
    // 7F25AF38: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F25AF3C:
    ctx->pc = 0x7F25AF3Cu;
    // 7F25AF3C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F25AF40u;
            ctx->pc = target;
            return;
        }
    }

label_7F25AF40:
    ctx->pc = 0x7F25AF40u;
    ctx->downcount -= 5;
    // 7F25AF40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AF44:
    ctx->pc = 0x7F25AF44u;
    // 7F25AF44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AF48:
    ctx->pc = 0x7F25AF48u;
    // 7F25AF48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25AF4C:
    ctx->pc = 0x7F25AF4Cu;
    // 7F25AF4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AF50:
    ctx->pc = 0x7F25AF50u;
    ctx->downcount -= 8;
    // 7F25AF50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AF54:
    ctx->pc = 0x7F25AF54u;
    // 7F25AF54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AF58:
    ctx->pc = 0x7F25AF58u;
    // 7F25AF58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AF5C:
    ctx->pc = 0x7F25AF5Cu;
    // 7F25AF5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25AF60:
    ctx->pc = 0x7F25AF60u;
    // 7F25AF60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AF64:
    ctx->pc = 0x7F25AF64u;
    // 7F25AF64: lwz     r3, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AF68:
    ctx->pc = 0x7F25AF68u;
    // 7F25AF68: cmplwi  r3, 0x0000
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

label_7F25AF6C:
    ctx->pc = 0x7F25AF6Cu;
    // 7F25AF6C: bc    12, 2, 0x7F25AF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25AF74;
        }
    }

label_7F25AF70:
    ctx->pc = 0x7F25AF70u;
    ctx->downcount -= 1;
    // 7F25AF70: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F25AF74u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F25AF74:
    ctx->pc = 0x7F25AF74u;
    ctx->downcount -= 3;
    // 7F25AF74: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AF78:
    ctx->pc = 0x7F25AF78u;
    // 7F25AF78: cmplwi  r3, 0x0000
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

label_7F25AF7C:
    ctx->pc = 0x7F25AF7Cu;
    // 7F25AF7C: bc    12, 2, 0x7F25AF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25AF88;
        }
    }

label_7F25AF80:
    ctx->pc = 0x7F25AF80u;
    ctx->downcount -= 1;
    // 7F25AF80: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F25AF84u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F25AF84:
    ctx->pc = 0x7F25AF84u;
    ctx->downcount -= 1;
    // 7F25AF84: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25AF88:
    ctx->pc = 0x7F25AF88u;
    ctx->downcount -= 6;
    // 7F25AF88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25AF8C:
    ctx->pc = 0x7F25AF8Cu;
    // 7F25AF8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25AF90:
    ctx->pc = 0x7F25AF90u;
    // 7F25AF90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25AF94:
    ctx->pc = 0x7F25AF94u;
    // 7F25AF94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25AF98:
    ctx->pc = 0x7F25AF98u;
    // 7F25AF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25AF9C:
    ctx->pc = 0x7F25AF9Cu;
    ctx->downcount -= 33;
    // 7F25AF9C: stwu     r1, -336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-336);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25AFA0:
    ctx->pc = 0x7F25AFA0u;
    // 7F25AFA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25AFA4:
    ctx->pc = 0x7F25AFA4u;
    // 7F25AFA4: stw     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25AFA8:
    ctx->pc = 0x7F25AFA8u;
    // 7F25AFA8: stfd     f31, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25AFAC:
    ctx->pc = 0x7F25AFACu;
    // 7F25AFAC: psq_st   f31, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25AFACu);
        if (ctx->exception) return;
    }

label_7F25AFB0:
    ctx->pc = 0x7F25AFB0u;
    // 7F25AFB0: stfd     f30, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25AFB4:
    ctx->pc = 0x7F25AFB4u;
    // 7F25AFB4: psq_st   f30, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25AFB4u);
        if (ctx->exception) return;
    }

label_7F25AFB8:
    ctx->pc = 0x7F25AFB8u;
    // 7F25AFB8: stfd     f29, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F25AFBC:
    ctx->pc = 0x7F25AFBCu;
    // 7F25AFBC: psq_st   f29, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F25AFBCu);
        if (ctx->exception) return;
    }

label_7F25AFC0:
    ctx->pc = 0x7F25AFC0u;
    // 7F25AFC0: stfd     f28, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F25AFC4:
    ctx->pc = 0x7F25AFC4u;
    // 7F25AFC4: psq_st   f28, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F25AFC4u);
        if (ctx->exception) return;
    }

label_7F25AFC8:
    ctx->pc = 0x7F25AFC8u;
    // 7F25AFC8: stfd     f27, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F25AFCC:
    ctx->pc = 0x7F25AFCCu;
    // 7F25AFCC: psq_st   f27, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F25AFCCu);
        if (ctx->exception) return;
    }

label_7F25AFD0:
    ctx->pc = 0x7F25AFD0u;
    // 7F25AFD0: stfd     f26, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F25AFD4:
    ctx->pc = 0x7F25AFD4u;
    // 7F25AFD4: psq_st   f26, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F25AFD4u);
        if (ctx->exception) return;
    }

label_7F25AFD8:
    ctx->pc = 0x7F25AFD8u;
    // 7F25AFD8: stfd     f25, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25AFD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F25AFDC:
    ctx->pc = 0x7F25AFDCu;
    // 7F25AFDC: psq_st   f25, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25AFDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F25AFDCu);
        if (ctx->exception) return;
    }

label_7F25AFE0:
    ctx->pc = 0x7F25AFE0u;
    // 7F25AFE0: stmw     r21, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25AFE4:
    ctx->pc = 0x7F25AFE4u;
    // 7F25AFE4: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25AFE8:
    ctx->pc = 0x7F25AFE8u;
    // 7F25AFE8: or   r23, r4, r4
    {
        ctx->gpr[23] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25AFEC:
    ctx->pc = 0x7F25AFECu;
    // 7F25AFEC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25AFF0:
    ctx->pc = 0x7F25AFF0u;
    // 7F25AFF0: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25AFF4:
    ctx->pc = 0x7F25AFF4u;
    // 7F25AFF4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25AFF8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25AFF8:
    ctx->pc = 0x7F25AFF8u;
    ctx->downcount -= 2;
    // 7F25AFF8: addi    r3, r22, 52
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(52);

label_7F25AFFC:
    ctx->pc = 0x7F25AFFCu;
    // 7F25AFFC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F25B000u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F25B000:
    ctx->pc = 0x7F25B000u;
    ctx->downcount -= 2;
    // 7F25B000: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25B004:
    ctx->pc = 0x7F25B004u;
    // 7F25B004: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F25B008u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F25B008:
    ctx->pc = 0x7F25B008u;
    ctx->downcount -= 5;
    // 7F25B008: lwz     r0, 104(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B00C:
    ctx->pc = 0x7F25B00Cu;
    // 7F25B00C: mulli   r3, r0, 44
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F25B010:
    ctx->pc = 0x7F25B010u;
    // 7F25B010: bl      0x7F3C9148
    {
            ctx->lr = 0x7F25B014u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F25B014:
    ctx->pc = 0x7F25B014u;
    ctx->downcount -= 4;
    // 7F25B014: stw     r3, 140(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B018:
    ctx->pc = 0x7F25B018u;
    // 7F25B018: lwz     r3, 140(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B01C:
    ctx->pc = 0x7F25B01Cu;
    // 7F25B01C: cmplwi  r3, 0x0000
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

label_7F25B020:
    ctx->pc = 0x7F25B020u;
    // 7F25B020: bc    4, 2, 0x7F25B02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B02C;
        }
    }

label_7F25B024:
    ctx->pc = 0x7F25B024u;
    ctx->downcount -= 2;
    // 7F25B024: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25B028:
    ctx->pc = 0x7F25B028u;
    // 7F25B028: b       0x7F25B3DC
    {
            goto label_7F25B3DC;
    }

label_7F25B02C:
    ctx->pc = 0x7F25B02Cu;
    ctx->downcount -= 5;
    // 7F25B02C: lwz     r0, 104(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B030:
    ctx->pc = 0x7F25B030u;
    // 7F25B030: mulli   r4, r0, 44
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F25B034:
    ctx->pc = 0x7F25B034u;
    // 7F25B034: bl      0x7F3C9120
    {
            ctx->lr = 0x7F25B038u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F25B038:
    ctx->pc = 0x7F25B038u;
    ctx->downcount -= 6;
    // 7F25B038: lwz     r27, 184(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(184);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F25B03C:
    ctx->pc = 0x7F25B03Cu;
    // 7F25B03C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F25B040:
    ctx->pc = 0x7F25B040u;
    // 7F25B040: lwz     r26, 192(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(192);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F25B044:
    ctx->pc = 0x7F25B044u;
    // 7F25B044: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F25B048:
    ctx->pc = 0x7F25B048u;
    // 7F25B048: lwz     r25, 140(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(140);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F25B04C:
    ctx->pc = 0x7F25B04Cu;
    // 7F25B04C: bl      0x7F3C2534
    {
            ctx->lr = 0x7F25B050u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F25B050:
    ctx->pc = 0x7F25B050u;
    ctx->downcount -= 65;
    // 7F25B050: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F25B054:
    ctx->pc = 0x7F25B054u;
    // 7F25B054: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B058:
    ctx->pc = 0x7F25B058u;
    // 7F25B058: stw     r0, 204(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B05C:
    ctx->pc = 0x7F25B05Cu;
    // 7F25B05C: addi    r5, r3, 22424
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22424);

label_7F25B060:
    ctx->pc = 0x7F25B060u;
    // 7F25B060: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F25B064:
    ctx->pc = 0x7F25B064u;
    // 7F25B064: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25B064u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B068:
    ctx->pc = 0x7F25B068u;
    // 7F25B068: stw     r29, 200(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F25B06C:
    ctx->pc = 0x7F25B06Cu;
    // 7F25B06C: li      r0, 1100
    ctx->gpr[0] = (u32)(s32)(1100);

label_7F25B070:
    ctx->pc = 0x7F25B070u;
    // 7F25B070: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B074:
    ctx->pc = 0x7F25B074u;
    // 7F25B074: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25B078:
    ctx->pc = 0x7F25B078u;
    // 7F25B078: stw     r0, 304(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B07C:
    ctx->pc = 0x7F25B07Cu;
    // 7F25B07C: addi    r9, r4, 22404
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(22404);

label_7F25B080:
    ctx->pc = 0x7F25B080u;
    // 7F25B080: addi    r7, r3, 22428
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(22428);

label_7F25B084:
    ctx->pc = 0x7F25B084u;
    // 7F25B084: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B088:
    ctx->pc = 0x7F25B088u;
    // 7F25B088: lfs     f1, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25B088u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B08C:
    ctx->pc = 0x7F25B08Cu;
    // 7F25B08C: addi    r10, r3, 22400
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(22400);

label_7F25B090:
    ctx->pc = 0x7F25B090u;
    // 7F25B090: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B094:
    ctx->pc = 0x7F25B094u;
    // 7F25B094: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F25B098:
    ctx->pc = 0x7F25B098u;
    // 7F25B098: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B098u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F25B09C:
    ctx->pc = 0x7F25B09Cu;
    // 7F25B09C: addi    r8, r3, 22380
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(22380);

label_7F25B0A0:
    ctx->pc = 0x7F25B0A0u;
    // 7F25B0A0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F25B0A4:
    ctx->pc = 0x7F25B0A4u;
    // 7F25B0A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25B0A8:
    ctx->pc = 0x7F25B0A8u;
    // 7F25B0A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B0AC:
    ctx->pc = 0x7F25B0ACu;
    // 7F25B0AC: lfs     f28, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0ACu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F25B0B0:
    ctx->pc = 0x7F25B0B0u;
    // 7F25B0B0: stfs     f0, 152(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0B0u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B0B4:
    ctx->pc = 0x7F25B0B4u;
    // 7F25B0B4: addi    r28, r1, 80
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(80);

label_7F25B0B8:
    ctx->pc = 0x7F25B0B8u;
    // 7F25B0B8: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0B8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B0BC:
    ctx->pc = 0x7F25B0BCu;
    // 7F25B0BC: lis     r7, 32585
    ctx->gpr[7] = ((u32)(s32)(32585) << 16);

label_7F25B0C0:
    ctx->pc = 0x7F25B0C0u;
    // 7F25B0C0: lfs     f1, 12(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0C0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B0C4:
    ctx->pc = 0x7F25B0C4u;
    // 7F25B0C4: addi    r30, r7, 12832
    ctx->gpr[30] = ctx->gpr[7] + (u32)(s32)(12832);

label_7F25B0C8:
    ctx->pc = 0x7F25B0C8u;
    // 7F25B0C8: lfs     f29, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0C8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F25B0CC:
    ctx->pc = 0x7F25B0CCu;
    // 7F25B0CC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F25B0D0:
    ctx->pc = 0x7F25B0D0u;
    // 7F25B0D0: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B0D0u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F25B0D4:
    ctx->pc = 0x7F25B0D4u;
    // 7F25B0D4: lfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0D4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B0D8:
    ctx->pc = 0x7F25B0D8u;
    // 7F25B0D8: lfs     f30, 22432(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F25B0DC:
    ctx->pc = 0x7F25B0DCu;
    // 7F25B0DC: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F25B0E0:
    ctx->pc = 0x7F25B0E0u;
    // 7F25B0E0: lfd     f31, 22368(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22368);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B0E4:
    ctx->pc = 0x7F25B0E4u;
    // 7F25B0E4: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F25B0E8:
    ctx->pc = 0x7F25B0E8u;
    // 7F25B0E8: stfs     f1, 156(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0E8u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25B0EC:
    ctx->pc = 0x7F25B0ECu;
    // 7F25B0EC: lfs     f26, 22392(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F25B0F0:
    ctx->pc = 0x7F25B0F0u;
    // 7F25B0F0: lfs     f1, 152(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0F0u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B0F4:
    ctx->pc = 0x7F25B0F4u;
    // 7F25B0F4: lfs     f27, 22396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F25B0F8:
    ctx->pc = 0x7F25B0F8u;
    // 7F25B0F8: fmuls   f1, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B0F8u)) return;
    ppc_fmuls(ctx, 1, 28, 1);

label_7F25B0FC:
    ctx->pc = 0x7F25B0FCu;
    // 7F25B0FC: stfs     f1, 144(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B0FCu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25B100:
    ctx->pc = 0x7F25B100u;
    // 7F25B100: lfs     f1, 156(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B100u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B104:
    ctx->pc = 0x7F25B104u;
    // 7F25B104: fmuls   f1, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B104u)) return;
    ppc_fmuls(ctx, 1, 29, 1);

label_7F25B108:
    ctx->pc = 0x7F25B108u;
    // 7F25B108: stfs     f1, 148(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B108u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25B10C:
    ctx->pc = 0x7F25B10Cu;
    // 7F25B10C: stfs     f0, 116(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B10Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B110:
    ctx->pc = 0x7F25B110u;
    // 7F25B110: b       0x7F25B3A8
    {
            goto label_7F25B3A8;
    }

label_7F25B114:
    ctx->pc = 0x7F25B114u;
    ctx->downcount -= 15;
    // 7F25B114: lwz     r5, 100(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B118:
    // 7F25B118: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B11C:
    // 7F25B11C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25B120:
    // 7F25B120: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25B124:
    ctx->pc = 0x7F25B124u;
    // 7F25B124: stw     r5, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B128:
    ctx->pc = 0x7F25B128u;
    // 7F25B128: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B12C:
    ctx->pc = 0x7F25B12Cu;
    // 7F25B12C: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B130:
    ctx->pc = 0x7F25B130u;
    // 7F25B130: lwz     r0, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B134:
    // 7F25B134: mullw   r0, r0, r29
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[0] = (u32)product;
    }

label_7F25B138:
    ctx->pc = 0x7F25B138u;
    // 7F25B138: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B13C:
    // 7F25B13C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F25B140u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F25B140:
    ctx->downcount -= 1;
    // 7F25B140: bl      0x7F25B428
    {
            ctx->lr = 0x7F25B144u;
            goto label_7F25B428;
    }

label_7F25B144:
    ctx->downcount -= 3;
    // 7F25B144: addi    r3, r22, 68
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(68);

label_7F25B148:
    // 7F25B148: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B14C:
    // 7F25B14C: bl      0x800261FC
    {
            ctx->lr = 0x7F25B150u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25B150:
    ctx->downcount -= 4;
    // 7F25B150: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B154:
    // 7F25B154: addi    r4, r25, 4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(4);

label_7F25B158:
    // 7F25B158: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25B15C:
    // 7F25B15C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F25B160u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F25B160:
    ctx->pc = 0x7F25B160u;
    ctx->downcount -= 2;
    // 7F25B160: lwz     r3, 48(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B164:
    // 7F25B164: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F25B168u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F25B168:
    ctx->downcount -= 4;
    // 7F25B168: addi    r3, r25, 4
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(4);

label_7F25B16C:
    // 7F25B16C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25B170:
    // 7F25B170: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B174:
    // 7F25B174: bl      0x7F3B3648
    {
            ctx->lr = 0x7F25B178u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F25B178:
    ctx->downcount -= 4;
    // 7F25B178: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25B17C:
    // 7F25B17C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F25B180:
    // 7F25B180: addi    r4, r25, 4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(4);

label_7F25B184:
    // 7F25B184: bl      0x800261B4
    {
            ctx->lr = 0x7F25B188u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25B188:
    ctx->downcount -= 1;
    // 7F25B188: bl      0x7F25AE88
    {
            ctx->lr = 0x7F25B18Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25AE88u;
                return;
            }
            goto label_7F25AE88;
    }

label_7F25B18C:
    ctx->pc = 0x7F25B18Cu;
    ctx->downcount -= 4;
    // 7F25B18C: lfs     f0, 112(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B18Cu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B190:
    ctx->pc = 0x7F25B190u;
    // 7F25B190: fmadds f0, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F25B190u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F25B194:
    ctx->pc = 0x7F25B194u;
    // 7F25B194: stfs     f0, 24(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B194u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B198:
    // 7F25B198: bl      0x7F25AED0
    {
            ctx->lr = 0x7F25B19Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25AED0u;
                return;
            }
            goto label_7F25AED0;
    }

label_7F25B19C:
    ctx->downcount -= 142;
    // 7F25B19C: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F25B1A0:
    // 7F25B1A0: add   r7, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F25B1A4:
    // 7F25B1A4: divwu   r0, r3, r6
    {
        u32 divisor = ctx->gpr[6];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F25B1A8:
    // 7F25B1A8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F25B1AC:
    ctx->pc = 0x7F25B1ACu;
    // 7F25B1AC: stw     r31, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25B1B0:
    // 7F25B1B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F25B1B4:
    ctx->pc = 0x7F25B1B4u;
    // 7F25B1B4: stw     r31, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25B1B8:
    // 7F25B1B8: mullw   r0, r0, r6
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F25B1BC:
    // 7F25B1BC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F25B1C0:
    ctx->pc = 0x7F25B1C0u;
    // 7F25B1C0: sth     r0, 164(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B1C4:
    ctx->pc = 0x7F25B1C4u;
    // 7F25B1C4: lha     r0, 164(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(164);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25B1C8:
    ctx->pc = 0x7F25B1C8u;
    // 7F25B1C8: sth     r0, 188(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(188);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B1CC:
    ctx->pc = 0x7F25B1CCu;
    // 7F25B1CC: lha     r6, 164(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(164);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25B1D0:
    ctx->pc = 0x7F25B1D0u;
    // 7F25B1D0: lfs     f1, 152(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B1D0u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B1D4:
    // 7F25B1D4: divw   r0, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F25B1D8:
    ctx->pc = 0x7F25B1D8u;
    // 7F25B1D8: lwz     r7, 88(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(88);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25B1DC:
    ctx->pc = 0x7F25B1DCu;
    // 7F25B1DC: lfs     f0, 156(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B1DCu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B1E0:
    ctx->pc = 0x7F25B1E0u;
    // 7F25B1E0: fmuls   f4, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B1E0u)) return;
    ppc_fmuls(ctx, 4, 28, 1);

label_7F25B1E4:
    ctx->pc = 0x7F25B1E4u;
    // 7F25B1E4: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25B1E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F25B1E8:
    ctx->pc = 0x7F25B1E8u;
    // 7F25B1E8: fmuls   f1, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B1E8u)) return;
    ppc_fmuls(ctx, 1, 29, 0);

label_7F25B1EC:
    // 7F25B1EC: mullw   r3, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[3] = (u32)product;
    }

label_7F25B1F0:
    // 7F25B1F0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25B1F4:
    ctx->pc = 0x7F25B1F4u;
    // 7F25B1F4: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B1F8:
    ctx->pc = 0x7F25B1F8u;
    // 7F25B1F8: lfs     f0, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25B1F8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B1FC:
    ctx->pc = 0x7F25B1FCu;
    // 7F25B1FC: lfd     f2, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B200:
    // 7F25B200: subf   r0, r3, r6
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F25B204:
    // 7F25B204: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25B208:
    ctx->pc = 0x7F25B208u;
    // 7F25B208: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25B208u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_7F25B20C:
    ctx->pc = 0x7F25B20Cu;
    // 7F25B20C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B210:
    ctx->pc = 0x7F25B210u;
    // 7F25B210: lfd     f5, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B214:
    ctx->pc = 0x7F25B214u;
    // 7F25B214: fmadds f2, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B214u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F25B218:
    ctx->pc = 0x7F25B218u;
    // 7F25B218: fsubs   f1, f5, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25B218u)) return;
    ppc_fsubs(ctx, 1, 5, 31);

label_7F25B21C:
    ctx->pc = 0x7F25B21Cu;
    // 7F25B21C: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B21Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B220:
    ctx->pc = 0x7F25B220u;
    // 7F25B220: fmadds f1, f1, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F25B220u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[4], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F25B224:
    ctx->pc = 0x7F25B224u;
    // 7F25B224: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B228:
    ctx->pc = 0x7F25B228u;
    // 7F25B228: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B228u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B22C:
    ctx->pc = 0x7F25B22Cu;
    // 7F25B22C: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B230:
    ctx->pc = 0x7F25B230u;
    // 7F25B230: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B234:
    ctx->pc = 0x7F25B234u;
    // 7F25B234: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B238:
    ctx->pc = 0x7F25B238u;
    // 7F25B238: sth     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25B23C:
    ctx->pc = 0x7F25B23Cu;
    // 7F25B23C: sth     r0, 6(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B240:
    ctx->pc = 0x7F25B240u;
    // 7F25B240: lfs     f0, 144(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B240u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B244:
    ctx->pc = 0x7F25B244u;
    // 7F25B244: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B244u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F25B248:
    ctx->pc = 0x7F25B248u;
    // 7F25B248: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B248u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B24C:
    ctx->pc = 0x7F25B24Cu;
    // 7F25B24C: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B24Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B250:
    ctx->pc = 0x7F25B250u;
    // 7F25B250: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B254:
    ctx->pc = 0x7F25B254u;
    // 7F25B254: sth     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B258:
    ctx->pc = 0x7F25B258u;
    // 7F25B258: lfs     f0, 148(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F25B258u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B25C:
    ctx->pc = 0x7F25B25Cu;
    // 7F25B25C: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B25Cu)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F25B260:
    ctx->pc = 0x7F25B260u;
    // 7F25B260: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B260u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B264:
    ctx->pc = 0x7F25B264u;
    // 7F25B264: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B268:
    ctx->pc = 0x7F25B268u;
    // 7F25B268: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B26C:
    ctx->pc = 0x7F25B26Cu;
    // 7F25B26C: sth     r0, 14(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B270:
    ctx->pc = 0x7F25B270u;
    // 7F25B270: lha     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F25B274:
    // 7F25B274: rlwinm. r0, r3, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F25B278:
    // 7F25B278: bc    12, 2, 0x7F25B280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B280;
        }
    }

label_7F25B27C:
    ctx->downcount -= 1;
    // 7F25B27C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F25B280:
    ctx->downcount -= 32;
    // 7F25B280: rlwinm r0, r3, 0, 21, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000007FFu;
    }

label_7F25B284:
    ctx->pc = 0x7F25B284u;
    // 7F25B284: stw     r31, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25B288:
    // 7F25B288: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F25B28C:
    // 7F25B28C: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F25B290:
    // 7F25B290: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F25B294:
    ctx->pc = 0x7F25B294u;
    // 7F25B294: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B298:
    ctx->pc = 0x7F25B298u;
    // 7F25B298: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B29C:
    ctx->pc = 0x7F25B29Cu;
    // 7F25B29C: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F25B29Cu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F25B2A0:
    ctx->pc = 0x7F25B2A0u;
    // 7F25B2A0: fmuls   f0, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B2A0u)) return;
    ppc_fmuls(ctx, 0, 26, 0);

label_7F25B2A4:
    ctx->pc = 0x7F25B2A4u;
    // 7F25B2A4: fdivs   f25, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F25B2A4u)) return;
    ppc_fdivs(ctx, 25, 0, 27);

label_7F25B2A8:
    ctx->pc = 0x7F25B2A8u;
    // 7F25B2A8: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F25B2A8u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F25B2AC:
    // 7F25B2AC: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F25B2B0u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F25B2B0:
    ctx->pc = 0x7F25B2B0u;
    ctx->downcount -= 8;
    // 7F25B2B0: lfs     f0, 24(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B2B0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B2B4:
    ctx->pc = 0x7F25B2B4u;
    // 7F25B2B4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B2B4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25B2B8:
    ctx->pc = 0x7F25B2B8u;
    // 7F25B2B8: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F25B2B8u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F25B2BC:
    ctx->pc = 0x7F25B2BCu;
    // 7F25B2BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B2BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B2C0:
    ctx->pc = 0x7F25B2C0u;
    // 7F25B2C0: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B2C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B2C4:
    ctx->pc = 0x7F25B2C4u;
    // 7F25B2C4: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B2C8:
    ctx->pc = 0x7F25B2C8u;
    // 7F25B2C8: sth     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B2CC:
    // 7F25B2CC: bl      0x7F008330
    {
            ctx->lr = 0x7F25B2D0u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F25B2D0:
    ctx->pc = 0x7F25B2D0u;
    ctx->downcount -= 9;
    // 7F25B2D0: lfs     f0, 24(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B2D0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B2D4:
    ctx->pc = 0x7F25B2D4u;
    // 7F25B2D4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B2D4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25B2D8:
    ctx->pc = 0x7F25B2D8u;
    // 7F25B2D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B2D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25B2DC:
    ctx->pc = 0x7F25B2DCu;
    // 7F25B2DC: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B2DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25B2E0:
    ctx->pc = 0x7F25B2E0u;
    // 7F25B2E0: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B2E4:
    ctx->pc = 0x7F25B2E4u;
    // 7F25B2E4: sth     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25B2E8:
    ctx->pc = 0x7F25B2E8u;
    // 7F25B2E8: lwz     r0, 108(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B2EC:
    // 7F25B2EC: cmpwi   r0, 1
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

label_7F25B2F0:
    // 7F25B2F0: bc    12, 2, 0x7F25B33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B33C;
        }
    }

label_7F25B2F4:
    ctx->downcount -= 1;
    // 7F25B2F4: bc    4, 0, 0x7F25B304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B304;
        }
    }

label_7F25B2F8:
    ctx->downcount -= 2;
    // 7F25B2F8: cmpwi   r0, 0
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

label_7F25B2FC:
    // 7F25B2FC: bc    4, 0, 0x7F25B310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B310;
        }
    }

label_7F25B300:
    ctx->downcount -= 1;
    // 7F25B300: b       0x7F25B390
    {
            goto label_7F25B390;
    }

label_7F25B304:
    ctx->downcount -= 2;
    // 7F25B304: cmpwi   r0, 3
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

label_7F25B308:
    // 7F25B308: bc    4, 0, 0x7F25B390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B390;
        }
    }

label_7F25B30C:
    ctx->downcount -= 1;
    // 7F25B30C: b       0x7F25B368
    {
            goto label_7F25B368;
    }

label_7F25B310:
    ctx->downcount -= 11;
    // 7F25B310: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F25B314:
    // 7F25B314: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B318:
    ctx->pc = 0x7F25B318u;
    // 7F25B318: stb     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B31C:
    // 7F25B31C: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_7F25B320:
    // 7F25B320: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B324:
    ctx->pc = 0x7F25B324u;
    // 7F25B324: lfs     f0, 22436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B324u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B328:
    ctx->pc = 0x7F25B328u;
    // 7F25B328: stb     r4, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25B32C:
    ctx->pc = 0x7F25B32Cu;
    // 7F25B32C: stb     r0, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B330:
    ctx->pc = 0x7F25B330u;
    // 7F25B330: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B334:
    ctx->pc = 0x7F25B334u;
    // 7F25B334: stfs     f0, 28(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B334u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B338:
    // 7F25B338: b       0x7F25B390
    {
            goto label_7F25B390;
    }

label_7F25B33C:
    ctx->downcount -= 11;
    // 7F25B33C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B340:
    // 7F25B340: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B344:
    ctx->pc = 0x7F25B344u;
    // 7F25B344: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B348:
    // 7F25B348: li      r4, 72
    ctx->gpr[4] = (u32)(s32)(72);

label_7F25B34C:
    // 7F25B34C: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F25B350:
    ctx->pc = 0x7F25B350u;
    // 7F25B350: lfs     f0, 22404(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B350u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B354:
    ctx->pc = 0x7F25B354u;
    // 7F25B354: stb     r4, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25B358:
    ctx->pc = 0x7F25B358u;
    // 7F25B358: stb     r4, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25B35C:
    ctx->pc = 0x7F25B35Cu;
    // 7F25B35C: stb     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B360:
    ctx->pc = 0x7F25B360u;
    // 7F25B360: stfs     f0, 28(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B360u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B364:
    // 7F25B364: b       0x7F25B390
    {
            goto label_7F25B390;
    }

label_7F25B368:
    ctx->downcount -= 10;
    // 7F25B368: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B36C:
    // 7F25B36C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B370:
    ctx->pc = 0x7F25B370u;
    // 7F25B370: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B374:
    // 7F25B374: li      r4, 72
    ctx->gpr[4] = (u32)(s32)(72);

label_7F25B378:
    // 7F25B378: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F25B37C:
    ctx->pc = 0x7F25B37Cu;
    // 7F25B37C: lfs     f0, 22404(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B37Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B380:
    ctx->pc = 0x7F25B380u;
    // 7F25B380: stb     r4, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25B384:
    ctx->pc = 0x7F25B384u;
    // 7F25B384: stb     r4, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F25B388:
    ctx->pc = 0x7F25B388u;
    // 7F25B388: stb     r0, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25B38C:
    ctx->pc = 0x7F25B38Cu;
    // 7F25B38C: stfs     f0, 28(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F25B38Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25B390:
    ctx->downcount -= 6;
    // 7F25B390: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F25B394:
    // 7F25B394: addi    r25, r25, 44
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(44);

label_7F25B398:
    // 7F25B398: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F25B39C:
    // 7F25B39C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F25B3A0:
    // 7F25B3A0: addi    r21, r21, 2
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(2);

label_7F25B3A4:
    // 7F25B3A4: addi    r29, r29, 11
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(11);

label_7F25B3A8:
    ctx->pc = 0x7F25B3A8u;
    ctx->downcount -= 3;
    // 7F25B3A8: lwz     r0, 104(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B3AC:
    // 7F25B3AC: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25B3B0:
    // 7F25B3B0: bc    12, 0, 0x7F25B114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B114u;
                return;
            }
            goto label_7F25B114;
        }
    }

label_7F25B3B4:
    ctx->pc = 0x7F25B3B4u;
    ctx->downcount -= 4;
    // 7F25B3B4: lwz     r3, 188(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B3B8:
    ctx->pc = 0x7F25B3B8u;
    // 7F25B3B8: rlwinm r5, r0, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F25B3BC:
    ctx->pc = 0x7F25B3BCu;
    // 7F25B3BC: lwz     r4, 184(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B3C0:
    ctx->pc = 0x7F25B3C0u;
    // 7F25B3C0: bl      0x8000519C
    {
            ctx->lr = 0x7F25B3C4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F25B3C4:
    ctx->pc = 0x7F25B3C4u;
    ctx->downcount -= 5;
    // 7F25B3C4: lwz     r0, 104(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B3C8:
    ctx->pc = 0x7F25B3C8u;
    // 7F25B3C8: lwz     r3, 196(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B3CC:
    ctx->pc = 0x7F25B3CCu;
    // 7F25B3CC: lwz     r4, 192(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B3D0:
    ctx->pc = 0x7F25B3D0u;
    // 7F25B3D0: rlwinm r5, r0, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F25B3D4:
    ctx->pc = 0x7F25B3D4u;
    // 7F25B3D4: bl      0x8000519C
    {
            ctx->lr = 0x7F25B3D8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F25B3D8:
    ctx->pc = 0x7F25B3D8u;
    ctx->downcount -= 1;
    // 7F25B3D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F25B3DC:
    ctx->pc = 0x7F25B3DCu;
    ctx->downcount -= 30;
    // 7F25B3DC: psq_l   f31, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B3DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25B3DCu);
        if (ctx->exception) return;
    }

label_7F25B3E0:
    ctx->pc = 0x7F25B3E0u;
    // 7F25B3E0: lfd     f31, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B3E4:
    ctx->pc = 0x7F25B3E4u;
    // 7F25B3E4: psq_l   f30, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B3E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25B3E4u);
        if (ctx->exception) return;
    }

label_7F25B3E8:
    ctx->pc = 0x7F25B3E8u;
    // 7F25B3E8: lfd     f30, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B3E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B3EC:
    ctx->pc = 0x7F25B3ECu;
    // 7F25B3EC: psq_l   f29, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F25B3ECu);
        if (ctx->exception) return;
    }

label_7F25B3F0:
    ctx->pc = 0x7F25B3F0u;
    // 7F25B3F0: lfd     f29, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B3F4:
    ctx->pc = 0x7F25B3F4u;
    // 7F25B3F4: psq_l   f28, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B3F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F25B3F4u);
        if (ctx->exception) return;
    }

label_7F25B3F8:
    ctx->pc = 0x7F25B3F8u;
    // 7F25B3F8: lfd     f28, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B3FC:
    ctx->pc = 0x7F25B3FCu;
    // 7F25B3FC: psq_l   f27, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F25B3FCu);
        if (ctx->exception) return;
    }

label_7F25B400:
    ctx->pc = 0x7F25B400u;
    // 7F25B400: lfd     f27, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B404:
    ctx->pc = 0x7F25B404u;
    // 7F25B404: psq_l   f26, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F25B404u);
        if (ctx->exception) return;
    }

label_7F25B408:
    ctx->pc = 0x7F25B408u;
    // 7F25B408: lfd     f26, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B40C:
    ctx->pc = 0x7F25B40Cu;
    // 7F25B40C: psq_l   f25, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25B40Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F25B40Cu);
        if (ctx->exception) return;
    }

label_7F25B410:
    ctx->pc = 0x7F25B410u;
    // 7F25B410: lfd     f25, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B414:
    ctx->pc = 0x7F25B414u;
    // 7F25B414: lmw     r21, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25B418:
    ctx->pc = 0x7F25B418u;
    // 7F25B418: lwz     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B41C:
    ctx->pc = 0x7F25B41Cu;
    // 7F25B41C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B420:
    ctx->pc = 0x7F25B420u;
    // 7F25B420: addi    r1, r1, 336
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(336);

label_7F25B424:
    ctx->pc = 0x7F25B424u;
    // 7F25B424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B428:
    ctx->pc = 0x7F25B428u;
    ctx->downcount -= 4;
    // 7F25B428: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B42C:
    ctx->pc = 0x7F25B42Cu;
    // 7F25B42C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B430:
    ctx->pc = 0x7F25B430u;
    // 7F25B430: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B434:
    ctx->pc = 0x7F25B434u;
    // 7F25B434: bl      0x7F25AED0
    {
            ctx->lr = 0x7F25B438u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25AED0u;
                return;
            }
            goto label_7F25AED0;
    }

label_7F25B438:
    ctx->pc = 0x7F25B438u;
    ctx->downcount -= 35;
    // 7F25B438: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25B43C:
    ctx->pc = 0x7F25B43Cu;
    // 7F25B43C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25B440:
    ctx->pc = 0x7F25B440u;
    // 7F25B440: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B444:
    ctx->pc = 0x7F25B444u;
    // 7F25B444: addi    r5, r4, 22416
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22416);

label_7F25B448:
    ctx->pc = 0x7F25B448u;
    // 7F25B448: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25B44C:
    ctx->pc = 0x7F25B44Cu;
    // 7F25B44C: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25B44Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B450:
    ctx->pc = 0x7F25B450u;
    // 7F25B450: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B454:
    ctx->pc = 0x7F25B454u;
    // 7F25B454: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B458:
    ctx->pc = 0x7F25B458u;
    // 7F25B458: lfs     f1, 22440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25B458u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25B45C:
    ctx->pc = 0x7F25B45Cu;
    // 7F25B45C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B45Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B460:
    ctx->pc = 0x7F25B460u;
    // 7F25B460: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B464:
    ctx->pc = 0x7F25B464u;
    // 7F25B464: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B464u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F25B468:
    ctx->pc = 0x7F25B468u;
    // 7F25B468: lfs     f0, 22380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B468u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B46C:
    ctx->pc = 0x7F25B46Cu;
    // 7F25B46C: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B46Cu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F25B470:
    ctx->pc = 0x7F25B470u;
    // 7F25B470: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B470u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F25B474:
    ctx->pc = 0x7F25B474u;
    // 7F25B474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B478:
    ctx->pc = 0x7F25B478u;
    // 7F25B478: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B47C:
    ctx->pc = 0x7F25B47Cu;
    // 7F25B47C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B480:
    ctx->pc = 0x7F25B480u;
    ctx->downcount -= 18;
    // 7F25B480: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B484:
    ctx->pc = 0x7F25B484u;
    // 7F25B484: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B488:
    ctx->pc = 0x7F25B488u;
    // 7F25B488: lis     r4, 74
    ctx->gpr[4] = ((u32)(s32)(74) << 16);

label_7F25B48C:
    ctx->pc = 0x7F25B48Cu;
    // 7F25B48C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B490:
    ctx->pc = 0x7F25B490u;
    // 7F25B490: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25B494:
    ctx->pc = 0x7F25B494u;
    // 7F25B494: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B498:
    ctx->pc = 0x7F25B498u;
    // 7F25B498: addi    r3, r4, 2426
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2426);

label_7F25B49C:
    ctx->pc = 0x7F25B49Cu;
    // 7F25B49C: bl      0x7F3B6420
    {
            ctx->lr = 0x7F25B4A0u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F25B4A0:
    ctx->pc = 0x7F25B4A0u;
    ctx->downcount -= 49;
    // 7F25B4A0: stw     r3, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B4A4:
    ctx->pc = 0x7F25B4A4u;
    // 7F25B4A4: li      r4, 360
    ctx->gpr[4] = (u32)(s32)(360);

label_7F25B4A8:
    ctx->pc = 0x7F25B4A8u;
    // 7F25B4A8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B4AC:
    ctx->pc = 0x7F25B4ACu;
    // 7F25B4AC: lwz     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B4B0:
    ctx->pc = 0x7F25B4B0u;
    // 7F25B4B0: divw   r3, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F25B4B4:
    ctx->pc = 0x7F25B4B4u;
    // 7F25B4B4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F25B4B8:
    ctx->pc = 0x7F25B4B8u;
    // 7F25B4B8: stw     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B4BC:
    ctx->pc = 0x7F25B4BCu;
    // 7F25B4BC: lwz     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B4C0:
    ctx->pc = 0x7F25B4C0u;
    // 7F25B4C0: cmpwi   r0, 0
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

label_7F25B4C4:
    ctx->pc = 0x7F25B4C4u;
    // 7F25B4C4: bc    12, 1, 0x7F25B4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B4DC;
        }
    }

label_7F25B4C8:
    ctx->pc = 0x7F25B4C8u;
    ctx->downcount -= 5;
    // 7F25B4C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B4CC:
    ctx->pc = 0x7F25B4CCu;
    // 7F25B4CC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25B4D0:
    ctx->pc = 0x7F25B4D0u;
    // 7F25B4D0: stw     r0, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B4D4:
    ctx->pc = 0x7F25B4D4u;
    // 7F25B4D4: stw     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B4D8:
    ctx->pc = 0x7F25B4D8u;
    // 7F25B4D8: b       0x7F25B550
    {
            goto label_7F25B550;
    }

label_7F25B4DC:
    ctx->pc = 0x7F25B4DCu;
    ctx->downcount -= 2;
    // 7F25B4DC: cmpwi   r0, 12
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

label_7F25B4E0:
    ctx->pc = 0x7F25B4E0u;
    // 7F25B4E0: bc    4, 1, 0x7F25B4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B4EC;
        }
    }

label_7F25B4E4:
    ctx->pc = 0x7F25B4E4u;
    ctx->downcount -= 2;
    // 7F25B4E4: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F25B4E8:
    ctx->pc = 0x7F25B4E8u;
    // 7F25B4E8: stw     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B4EC:
    ctx->pc = 0x7F25B4ECu;
    ctx->downcount -= 6;
    // 7F25B4EC: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F25B4F0:
    ctx->pc = 0x7F25B4F0u;
    // 7F25B4F0: lwz     r4, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B4F4:
    ctx->pc = 0x7F25B4F4u;
    // 7F25B4F4: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F25B4F8:
    ctx->pc = 0x7F25B4F8u;
    // 7F25B4F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25B4FC:
    ctx->pc = 0x7F25B4FCu;
    // 7F25B4FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25B500:
    ctx->pc = 0x7F25B500u;
    // 7F25B500: bl      0x7F3C2408
    {
            ctx->lr = 0x7F25B504u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F25B504:
    ctx->pc = 0x7F25B504u;
    ctx->downcount -= 3;
    // 7F25B504: or.   r31, r3, r3
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

label_7F25B508:
    ctx->pc = 0x7F25B508u;
    // 7F25B508: stw     r3, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B50C:
    ctx->pc = 0x7F25B50Cu;
    // 7F25B50C: bc    4, 2, 0x7F25B520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B520;
        }
    }

label_7F25B510:
    ctx->pc = 0x7F25B510u;
    ctx->downcount -= 4;
    // 7F25B510: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25B514:
    ctx->pc = 0x7F25B514u;
    // 7F25B514: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25B518:
    ctx->pc = 0x7F25B518u;
    // 7F25B518: stw     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B51C:
    ctx->pc = 0x7F25B51Cu;
    // 7F25B51C: b       0x7F25B550
    {
            goto label_7F25B550;
    }

label_7F25B520:
    ctx->pc = 0x7F25B520u;
    ctx->downcount -= 4;
    // 7F25B520: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F25B524:
    ctx->pc = 0x7F25B524u;
    // 7F25B524: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B528:
    ctx->pc = 0x7F25B528u;
    // 7F25B528: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25B52C:
    ctx->pc = 0x7F25B52Cu;
    // 7F25B52C: bl      0x7F25AF9C
    {
            ctx->lr = 0x7F25B530u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25AF9Cu;
                return;
            }
            goto label_7F25AF9C;
    }

label_7F25B530:
    ctx->pc = 0x7F25B530u;
    ctx->downcount -= 2;
    // 7F25B530: cmpwi   r3, 0
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

label_7F25B534:
    ctx->pc = 0x7F25B534u;
    // 7F25B534: bc    4, 0, 0x7F25B540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B540;
        }
    }

label_7F25B538:
    ctx->pc = 0x7F25B538u;
    ctx->downcount -= 2;
    // 7F25B538: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F25B53C:
    ctx->pc = 0x7F25B53Cu;
    // 7F25B53C: b       0x7F25B550
    {
            goto label_7F25B550;
    }

label_7F25B540:
    ctx->pc = 0x7F25B540u;
    ctx->downcount -= 4;
    // 7F25B540: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B544:
    ctx->pc = 0x7F25B544u;
    // 7F25B544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25B548:
    ctx->pc = 0x7F25B548u;
    // 7F25B548: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F25B54C:
    ctx->pc = 0x7F25B54Cu;
    // 7F25B54C: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B550:
    ctx->pc = 0x7F25B550u;
    ctx->downcount -= 16;
    // 7F25B550: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25B554:
    ctx->pc = 0x7F25B554u;
    // 7F25B554: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B558:
    ctx->pc = 0x7F25B558u;
    // 7F25B558: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B55C:
    ctx->pc = 0x7F25B55Cu;
    // 7F25B55C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25B560:
    ctx->pc = 0x7F25B560u;
    // 7F25B560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B564:
    ctx->pc = 0x7F25B564u;
    ctx->downcount -= 29;
    // 7F25B564: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B568:
    ctx->pc = 0x7F25B568u;
    // 7F25B568: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B56C:
    ctx->pc = 0x7F25B56Cu;
    // 7F25B56C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B570:
    ctx->pc = 0x7F25B570u;
    // 7F25B570: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B570u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25B574:
    ctx->pc = 0x7F25B574u;
    // 7F25B574: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B574u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F25B578:
    ctx->pc = 0x7F25B578u;
    // 7F25B578: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25B57C:
    ctx->pc = 0x7F25B57Cu;
    // 7F25B57C: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B57Cu)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F25B580:
    ctx->pc = 0x7F25B580u;
    // 7F25B580: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25B584:
    ctx->pc = 0x7F25B584u;
    // 7F25B584: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B588:
    ctx->pc = 0x7F25B588u;
    // 7F25B588: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25B58C:
    ctx->pc = 0x7F25B58Cu;
    // 7F25B58C: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25B590:
    ctx->pc = 0x7F25B590u;
    // 7F25B590: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F25B594:
    ctx->pc = 0x7F25B594u;
    // 7F25B594: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F25B598:
    ctx->pc = 0x7F25B598u;
    // 7F25B598: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F25B59C:
    ctx->pc = 0x7F25B59Cu;
    // 7F25B59C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F25B5A0:
    ctx->pc = 0x7F25B5A0u;
    // 7F25B5A0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F25B5A4:
    ctx->pc = 0x7F25B5A4u;
    // 7F25B5A4: li      r5, 212
    ctx->gpr[5] = (u32)(s32)(212);

label_7F25B5A8:
    ctx->pc = 0x7F25B5A8u;
    // 7F25B5A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25B5AC:
    ctx->pc = 0x7F25B5ACu;
    // 7F25B5AC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F25B5B0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F25B5B0:
    ctx->pc = 0x7F25B5B0u;
    ctx->downcount -= 2;
    // 7F25B5B0: or.   r31, r3, r3
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

label_7F25B5B4:
    ctx->pc = 0x7F25B5B4u;
    // 7F25B5B4: bc    12, 2, 0x7F25B678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B678;
        }
    }

label_7F25B5B8:
    ctx->pc = 0x7F25B5B8u;
    ctx->downcount -= 5;
    // 7F25B5B8: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F25B5BC:
    ctx->pc = 0x7F25B5BCu;
    // 7F25B5BC: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F25B5C0:
    ctx->pc = 0x7F25B5C0u;
    // 7F25B5C0: addi    r4, r4, -20696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20696);

label_7F25B5C4:
    ctx->pc = 0x7F25B5C4u;
    // 7F25B5C4: addi    r5, r5, -20656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20656);

label_7F25B5C8:
    ctx->pc = 0x7F25B5C8u;
    // 7F25B5C8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F25B5CCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F25B5CC:
    ctx->pc = 0x7F25B5CCu;
    ctx->downcount -= 37;
    // 7F25B5CC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B5D0:
    ctx->pc = 0x7F25B5D0u;
    // 7F25B5D0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F25B5D4:
    ctx->pc = 0x7F25B5D4u;
    // 7F25B5D4: lis     r3, 32550
    ctx->gpr[3] = ((u32)(s32)(32550) << 16);

label_7F25B5D8:
    ctx->pc = 0x7F25B5D8u;
    // 7F25B5D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25B5DC:
    ctx->pc = 0x7F25B5DCu;
    // 7F25B5DC: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F25B5E0:
    ctx->pc = 0x7F25B5E0u;
    // 7F25B5E0: addi    r4, r4, 32548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F25B5E4:
    ctx->pc = 0x7F25B5E4u;
    // 7F25B5E4: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B5E8:
    ctx->pc = 0x7F25B5E8u;
    // 7F25B5E8: addi    r0, r3, -21984
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21984);

label_7F25B5EC:
    ctx->pc = 0x7F25B5ECu;
    // 7F25B5EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B5F0:
    ctx->pc = 0x7F25B5F0u;
    // 7F25B5F0: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B5F4:
    ctx->pc = 0x7F25B5F4u;
    // 7F25B5F4: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B5F8:
    ctx->pc = 0x7F25B5F8u;
    // 7F25B5F8: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B5FC:
    ctx->pc = 0x7F25B5FCu;
    // 7F25B5FC: stw     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B600:
    ctx->pc = 0x7F25B600u;
    // 7F25B600: stw     r25, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F25B604:
    ctx->pc = 0x7F25B604u;
    // 7F25B604: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B608:
    ctx->pc = 0x7F25B608u;
    // 7F25B608: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B60C:
    ctx->pc = 0x7F25B60Cu;
    // 7F25B60C: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B610:
    ctx->pc = 0x7F25B610u;
    // 7F25B610: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B614:
    ctx->pc = 0x7F25B614u;
    // 7F25B614: lwz     r5, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B618:
    ctx->pc = 0x7F25B618u;
    // 7F25B618: lwz     r4, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B61C:
    ctx->pc = 0x7F25B61Cu;
    // 7F25B61C: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B620:
    ctx->pc = 0x7F25B620u;
    // 7F25B620: stw     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B624:
    ctx->pc = 0x7F25B624u;
    // 7F25B624: lwz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B628:
    ctx->pc = 0x7F25B628u;
    // 7F25B628: lwz     r4, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B62C:
    ctx->pc = 0x7F25B62Cu;
    // 7F25B62C: stw     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B630:
    ctx->pc = 0x7F25B630u;
    // 7F25B630: stw     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B634:
    ctx->pc = 0x7F25B634u;
    // 7F25B634: lwz     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B638:
    ctx->pc = 0x7F25B638u;
    // 7F25B638: lwz     r4, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B63C:
    ctx->pc = 0x7F25B63Cu;
    // 7F25B63C: stw     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B640:
    ctx->pc = 0x7F25B640u;
    // 7F25B640: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B644:
    ctx->pc = 0x7F25B644u;
    // 7F25B644: stw     r28, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F25B648:
    ctx->pc = 0x7F25B648u;
    // 7F25B648: stfs     f30, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25B648u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F25B64C:
    ctx->pc = 0x7F25B64Cu;
    // 7F25B64C: stfs     f31, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25B64Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F25B650:
    ctx->pc = 0x7F25B650u;
    // 7F25B650: stw     r29, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F25B654:
    ctx->pc = 0x7F25B654u;
    // 7F25B654: stw     r30, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F25B658:
    ctx->pc = 0x7F25B658u;
    // 7F25B658: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B65C:
    ctx->pc = 0x7F25B65Cu;
    // 7F25B65C: bl      0x7F25B480
    {
            ctx->lr = 0x7F25B660u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B480u;
                return;
            }
            goto label_7F25B480;
    }

label_7F25B660:
    ctx->pc = 0x7F25B660u;
    ctx->downcount -= 2;
    // 7F25B660: cmpwi   r3, 0
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

label_7F25B664:
    ctx->pc = 0x7F25B664u;
    // 7F25B664: bc    4, 0, 0x7F25B678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B678;
        }
    }

label_7F25B668:
    ctx->pc = 0x7F25B668u;
    ctx->downcount -= 2;
    // 7F25B668: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B66C:
    ctx->pc = 0x7F25B66Cu;
    // 7F25B66C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25B670u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25B670:
    ctx->pc = 0x7F25B670u;
    ctx->downcount -= 2;
    // 7F25B670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25B674:
    ctx->pc = 0x7F25B674u;
    // 7F25B674: b       0x7F25B67C
    {
            goto label_7F25B67C;
    }

label_7F25B678:
    ctx->pc = 0x7F25B678u;
    ctx->downcount -= 1;
    // 7F25B678: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B67C:
    ctx->pc = 0x7F25B67Cu;
    ctx->downcount -= 18;
    // 7F25B67C: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B67Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B680:
    ctx->pc = 0x7F25B680u;
    // 7F25B680: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B684:
    ctx->pc = 0x7F25B684u;
    // 7F25B684: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25B688:
    ctx->pc = 0x7F25B688u;
    // 7F25B688: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B68C:
    ctx->pc = 0x7F25B68Cu;
    // 7F25B68C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B690:
    ctx->pc = 0x7F25B690u;
    // 7F25B690: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F25B694:
    ctx->pc = 0x7F25B694u;
    // 7F25B694: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B698:
    ctx->pc = 0x7F25B698u;
    ctx->downcount -= 5;
    // 7F25B698: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B69C:
    ctx->pc = 0x7F25B69Cu;
    // 7F25B69C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B6A0:
    ctx->pc = 0x7F25B6A0u;
    // 7F25B6A0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F25B6A4:
    ctx->pc = 0x7F25B6A4u;
    // 7F25B6A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B6A8:
    ctx->pc = 0x7F25B6A8u;
    // 7F25B6A8: bl      0x7F25B564
    {
            ctx->lr = 0x7F25B6ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B564u;
                return;
            }
            goto label_7F25B564;
    }

label_7F25B6AC:
    ctx->pc = 0x7F25B6ACu;
    ctx->downcount -= 5;
    // 7F25B6AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B6B0:
    ctx->pc = 0x7F25B6B0u;
    // 7F25B6B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B6B4:
    ctx->pc = 0x7F25B6B4u;
    // 7F25B6B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B6B8:
    ctx->pc = 0x7F25B6B8u;
    // 7F25B6B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B6BC:
    ctx->pc = 0x7F25B6BCu;
    ctx->downcount -= 5;
    // 7F25B6BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B6C0:
    ctx->pc = 0x7F25B6C0u;
    // 7F25B6C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B6C4:
    ctx->pc = 0x7F25B6C4u;
    // 7F25B6C4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F25B6C8:
    ctx->pc = 0x7F25B6C8u;
    // 7F25B6C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B6CC:
    ctx->pc = 0x7F25B6CCu;
    // 7F25B6CC: bl      0x7F25B564
    {
            ctx->lr = 0x7F25B6D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B564u;
                return;
            }
            goto label_7F25B564;
    }

label_7F25B6D0:
    ctx->pc = 0x7F25B6D0u;
    ctx->downcount -= 5;
    // 7F25B6D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B6D4:
    ctx->pc = 0x7F25B6D4u;
    // 7F25B6D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B6D8:
    ctx->pc = 0x7F25B6D8u;
    // 7F25B6D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B6DC:
    ctx->pc = 0x7F25B6DCu;
    // 7F25B6DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B6E0:
    ctx->pc = 0x7F25B6E0u;
    ctx->downcount -= 5;
    // 7F25B6E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B6E4:
    ctx->pc = 0x7F25B6E4u;
    // 7F25B6E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B6E8:
    ctx->pc = 0x7F25B6E8u;
    // 7F25B6E8: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F25B6EC:
    ctx->pc = 0x7F25B6ECu;
    // 7F25B6EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B6F0:
    ctx->pc = 0x7F25B6F0u;
    // 7F25B6F0: bl      0x7F25B564
    {
            ctx->lr = 0x7F25B6F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B564u;
                return;
            }
            goto label_7F25B564;
    }

label_7F25B6F4:
    ctx->pc = 0x7F25B6F4u;
    ctx->downcount -= 5;
    // 7F25B6F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B6F8:
    ctx->pc = 0x7F25B6F8u;
    // 7F25B6F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B6FC:
    ctx->pc = 0x7F25B6FCu;
    // 7F25B6FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B700:
    ctx->pc = 0x7F25B700u;
    // 7F25B700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B704:
    ctx->pc = 0x7F25B704u;
    ctx->downcount -= 4;
    // 7F25B704: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B708:
    ctx->pc = 0x7F25B708u;
    // 7F25B708: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B70C:
    ctx->pc = 0x7F25B70Cu;
    // 7F25B70C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B710:
    ctx->pc = 0x7F25B710u;
    // 7F25B710: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25B714u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25B714:
    ctx->pc = 0x7F25B714u;
    ctx->downcount -= 5;
    // 7F25B714: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B718:
    ctx->pc = 0x7F25B718u;
    // 7F25B718: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B71C:
    ctx->pc = 0x7F25B71Cu;
    // 7F25B71C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B720:
    ctx->pc = 0x7F25B720u;
    // 7F25B720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B724:
    ctx->pc = 0x7F25B724u;
    ctx->downcount -= 7;
    // 7F25B724: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B728:
    ctx->pc = 0x7F25B728u;
    // 7F25B728: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B72C:
    ctx->pc = 0x7F25B72Cu;
    // 7F25B72C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B730:
    ctx->pc = 0x7F25B730u;
    // 7F25B730: lwz     r12, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F25B734:
    ctx->pc = 0x7F25B734u;
    // 7F25B734: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F25B738:
    ctx->pc = 0x7F25B738u;
    // 7F25B738: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F25B73Cu;
            ctx->pc = target;
            return;
        }
    }

label_7F25B73C:
    ctx->pc = 0x7F25B73Cu;
    ctx->downcount -= 5;
    // 7F25B73C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B740:
    ctx->pc = 0x7F25B740u;
    // 7F25B740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B744:
    ctx->pc = 0x7F25B744u;
    // 7F25B744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B748:
    ctx->pc = 0x7F25B748u;
    // 7F25B748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B74C:
    ctx->pc = 0x7F25B74Cu;
    ctx->downcount -= 1;
    // 7F25B74C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B750:
    ctx->pc = 0x7F25B750u;
    ctx->downcount -= 17;
    // 7F25B750: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B754:
    ctx->pc = 0x7F25B754u;
    // 7F25B754: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B758:
    ctx->pc = 0x7F25B758u;
    // 7F25B758: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B75C:
    ctx->pc = 0x7F25B75Cu;
    // 7F25B75C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25B760:
    ctx->pc = 0x7F25B760u;
    // 7F25B760: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B764:
    ctx->pc = 0x7F25B764u;
    // 7F25B764: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F25B768:
    ctx->pc = 0x7F25B768u;
    // 7F25B768: b       0x7F25B830
    {
            goto label_7F25B830;
    }

label_7F25B76C:
    ctx->pc = 0x7F25B76Cu;
    ctx->downcount -= 9;
    // 7F25B76C: lwz     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B770:
    ctx->pc = 0x7F25B770u;
    // 7F25B770: lwz     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B774:
    ctx->pc = 0x7F25B774u;
    // 7F25B774: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B778:
    ctx->pc = 0x7F25B778u;
    // 7F25B778: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B77C:
    ctx->pc = 0x7F25B77Cu;
    // 7F25B77C: lwz     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B780:
    ctx->pc = 0x7F25B780u;
    // 7F25B780: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B784:
    ctx->pc = 0x7F25B784u;
    // 7F25B784: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B788:
    ctx->pc = 0x7F25B788u;
    // 7F25B788: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B78C:
    // 7F25B78C: bl      0x7F25B854
    {
            ctx->lr = 0x7F25B790u;
            goto label_7F25B854;
    }

label_7F25B790:
    ctx->downcount -= 3;
    // 7F25B790: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25B794:
    // 7F25B794: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B798:
    // 7F25B798: bl      0x800261FC
    {
            ctx->lr = 0x7F25B79Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25B79C:
    ctx->downcount -= 1;
    // 7F25B79C: bl      0x7F25B854
    {
            ctx->lr = 0x7F25B7A0u;
            goto label_7F25B854;
    }

label_7F25B7A0:
    ctx->pc = 0x7F25B7A0u;
    ctx->downcount -= 5;
    // 7F25B7A0: lfs     f0, 100(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F25B7A0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B7A4:
    ctx->pc = 0x7F25B7A4u;
    // 7F25B7A4: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B7A8:
    ctx->pc = 0x7F25B7A8u;
    // 7F25B7A8: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B7A8u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F25B7AC:
    // 7F25B7AC: cmpwi   r0, 1
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

label_7F25B7B0:
    // 7F25B7B0: bc    12, 2, 0x7F25B7F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B7F0;
        }
    }

label_7F25B7B4:
    ctx->downcount -= 1;
    // 7F25B7B4: bc    4, 0, 0x7F25B7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B7C4;
        }
    }

label_7F25B7B8:
    ctx->downcount -= 2;
    // 7F25B7B8: cmpwi   r0, 0
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

label_7F25B7BC:
    // 7F25B7BC: bc    4, 0, 0x7F25B7D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B7D0;
        }
    }

label_7F25B7C0:
    ctx->downcount -= 1;
    // 7F25B7C0: b       0x7F25B82C
    {
            goto label_7F25B82C;
    }

label_7F25B7C4:
    ctx->downcount -= 2;
    // 7F25B7C4: cmpwi   r0, 3
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

label_7F25B7C8:
    // 7F25B7C8: bc    4, 0, 0x7F25B82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B82C;
        }
    }

label_7F25B7CC:
    ctx->downcount -= 1;
    // 7F25B7CC: b       0x7F25B810
    {
            goto label_7F25B810;
    }

label_7F25B7D0:
    ctx->pc = 0x7F25B7D0u;
    ctx->downcount -= 7;
    // 7F25B7D0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B7D4:
    // 7F25B7D4: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F25B7D8:
    ctx->pc = 0x7F25B7D8u;
    // 7F25B7D8: lwz     r6, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25B7DC:
    // 7F25B7DC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25B7E0:
    ctx->pc = 0x7F25B7E0u;
    // 7F25B7E0: lfs     f2, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F25B7E0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25B7E4:
    ctx->pc = 0x7F25B7E4u;
    // 7F25B7E4: lwz     r7, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25B7E8:
    // 7F25B7E8: bl      0x7F25B698
    {
            ctx->lr = 0x7F25B7ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B698u;
                return;
            }
            goto label_7F25B698;
    }

label_7F25B7EC:
    ctx->downcount -= 1;
    // 7F25B7EC: b       0x7F25B82C
    {
            goto label_7F25B82C;
    }

label_7F25B7F0:
    ctx->pc = 0x7F25B7F0u;
    ctx->downcount -= 7;
    // 7F25B7F0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B7F4:
    // 7F25B7F4: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F25B7F8:
    ctx->pc = 0x7F25B7F8u;
    // 7F25B7F8: lwz     r6, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25B7FC:
    // 7F25B7FC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25B800:
    ctx->pc = 0x7F25B800u;
    // 7F25B800: lfs     f2, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F25B800u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25B804:
    ctx->pc = 0x7F25B804u;
    // 7F25B804: lwz     r7, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25B808:
    // 7F25B808: bl      0x7F25B6BC
    {
            ctx->lr = 0x7F25B80Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B6BCu;
                return;
            }
            goto label_7F25B6BC;
    }

label_7F25B80C:
    ctx->downcount -= 1;
    // 7F25B80C: b       0x7F25B82C
    {
            goto label_7F25B82C;
    }

label_7F25B810:
    ctx->pc = 0x7F25B810u;
    ctx->downcount -= 7;
    // 7F25B810: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25B814:
    // 7F25B814: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F25B818:
    ctx->pc = 0x7F25B818u;
    // 7F25B818: lwz     r6, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25B81C:
    // 7F25B81C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25B820:
    ctx->pc = 0x7F25B820u;
    // 7F25B820: lfs     f2, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F25B820u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25B824:
    ctx->pc = 0x7F25B824u;
    // 7F25B824: lwz     r7, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F25B828:
    // 7F25B828: bl      0x7F25B6E0
    {
            ctx->lr = 0x7F25B82Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B6E0u;
                return;
            }
            goto label_7F25B6E0;
    }

label_7F25B82C:
    ctx->downcount -= 1;
    // 7F25B82C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F25B830:
    ctx->pc = 0x7F25B830u;
    ctx->downcount -= 3;
    // 7F25B830: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B834:
    // 7F25B834: cmpw    r31, r0
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

label_7F25B838:
    // 7F25B838: bc    12, 0, 0x7F25B76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B76Cu;
                return;
            }
            goto label_7F25B76C;
        }
    }

label_7F25B83C:
    ctx->pc = 0x7F25B83Cu;
    ctx->downcount -= 17;
    // 7F25B83C: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25B840:
    ctx->pc = 0x7F25B840u;
    // 7F25B840: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25B844:
    ctx->pc = 0x7F25B844u;
    // 7F25B844: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B848:
    ctx->pc = 0x7F25B848u;
    // 7F25B848: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B84C:
    ctx->pc = 0x7F25B84Cu;
    // 7F25B84C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F25B850:
    ctx->pc = 0x7F25B850u;
    // 7F25B850: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B854:
    ctx->pc = 0x7F25B854u;
    ctx->downcount -= 4;
    // 7F25B854: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B858:
    ctx->pc = 0x7F25B858u;
    // 7F25B858: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B85C:
    ctx->pc = 0x7F25B85Cu;
    // 7F25B85C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B860:
    ctx->pc = 0x7F25B860u;
    // 7F25B860: bl      0x7F25B89C
    {
            ctx->lr = 0x7F25B864u;
            goto label_7F25B89C;
    }

label_7F25B864:
    ctx->pc = 0x7F25B864u;
    ctx->downcount -= 31;
    // 7F25B864: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25B868:
    ctx->pc = 0x7F25B868u;
    // 7F25B868: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B86C:
    ctx->pc = 0x7F25B86Cu;
    // 7F25B86C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25B870:
    ctx->pc = 0x7F25B870u;
    // 7F25B870: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25B874:
    ctx->pc = 0x7F25B874u;
    // 7F25B874: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B878:
    ctx->pc = 0x7F25B878u;
    // 7F25B878: lfd     f2, 22456(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25B878u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22456);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B87C:
    ctx->pc = 0x7F25B87Cu;
    // 7F25B87C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B87Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B880:
    ctx->pc = 0x7F25B880u;
    // 7F25B880: lfs     f0, 22448(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25B880u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25B884:
    ctx->pc = 0x7F25B884u;
    // 7F25B884: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B884u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25B888:
    ctx->pc = 0x7F25B888u;
    // 7F25B888: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B88C:
    ctx->pc = 0x7F25B88Cu;
    // 7F25B88C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25B88Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F25B890:
    ctx->pc = 0x7F25B890u;
    // 7F25B890: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B894:
    ctx->pc = 0x7F25B894u;
    // 7F25B894: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25B898:
    ctx->pc = 0x7F25B898u;
    // 7F25B898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B89C:
    ctx->pc = 0x7F25B89Cu;
    ctx->downcount -= 13;
    // 7F25B89C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25B8A0:
    ctx->pc = 0x7F25B8A0u;
    // 7F25B8A0: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F25B8A4:
    ctx->pc = 0x7F25B8A4u;
    // 7F25B8A4: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F25B8A8:
    ctx->pc = 0x7F25B8A8u;
    // 7F25B8A8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B8AC:
    ctx->pc = 0x7F25B8ACu;
    // 7F25B8AC: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F25B8B0:
    ctx->pc = 0x7F25B8B0u;
    // 7F25B8B0: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F25B8B4:
    ctx->pc = 0x7F25B8B4u;
    // 7F25B8B4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F25B8B8:
    ctx->pc = 0x7F25B8B8u;
    // 7F25B8B8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25B8BC:
    ctx->pc = 0x7F25B8BCu;
    // 7F25B8BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B8C0:
    ctx->pc = 0x7F25B8C0u;
    ctx->downcount -= 30;
    // 7F25B8C0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25B8C4:
    ctx->pc = 0x7F25B8C4u;
    // 7F25B8C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25B8C8:
    ctx->pc = 0x7F25B8C8u;
    // 7F25B8C8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B8CC:
    ctx->pc = 0x7F25B8CCu;
    // 7F25B8CC: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B8CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25B8D0:
    ctx->pc = 0x7F25B8D0u;
    // 7F25B8D0: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25B8D0u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F25B8D4:
    ctx->pc = 0x7F25B8D4u;
    // 7F25B8D4: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B8D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25B8D8:
    ctx->pc = 0x7F25B8D8u;
    // 7F25B8D8: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25B8D8u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F25B8DC:
    ctx->pc = 0x7F25B8DCu;
    // 7F25B8DC: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25B8E0:
    ctx->pc = 0x7F25B8E0u;
    // 7F25B8E0: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25B8E4:
    ctx->pc = 0x7F25B8E4u;
    // 7F25B8E4: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25B8E8:
    ctx->pc = 0x7F25B8E8u;
    // 7F25B8E8: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25B8EC:
    ctx->pc = 0x7F25B8ECu;
    // 7F25B8EC: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F25B8F0:
    ctx->pc = 0x7F25B8F0u;
    // 7F25B8F0: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F25B8F4:
    ctx->pc = 0x7F25B8F4u;
    // 7F25B8F4: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F25B8F8:
    ctx->pc = 0x7F25B8F8u;
    // 7F25B8F8: or   r30, r9, r9
    {
        ctx->gpr[30] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F25B8FC:
    ctx->pc = 0x7F25B8FCu;
    // 7F25B8FC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F25B900:
    ctx->pc = 0x7F25B900u;
    // 7F25B900: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F25B904:
    ctx->pc = 0x7F25B904u;
    // 7F25B904: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_7F25B908:
    ctx->pc = 0x7F25B908u;
    // 7F25B908: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F25B90C:
    ctx->pc = 0x7F25B90Cu;
    // 7F25B90C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F25B910u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F25B910:
    ctx->pc = 0x7F25B910u;
    ctx->downcount -= 2;
    // 7F25B910: or.   r31, r3, r3
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

label_7F25B914:
    ctx->pc = 0x7F25B914u;
    // 7F25B914: bc    12, 2, 0x7F25B9DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25B9DC;
        }
    }

label_7F25B918:
    ctx->pc = 0x7F25B918u;
    ctx->downcount -= 5;
    // 7F25B918: lis     r4, 32550
    ctx->gpr[4] = ((u32)(s32)(32550) << 16);

label_7F25B91C:
    ctx->pc = 0x7F25B91Cu;
    // 7F25B91C: lis     r5, 32550
    ctx->gpr[5] = ((u32)(s32)(32550) << 16);

label_7F25B920:
    ctx->pc = 0x7F25B920u;
    // 7F25B920: addi    r4, r4, -18652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18652);

label_7F25B924:
    ctx->pc = 0x7F25B924u;
    // 7F25B924: addi    r5, r5, -18612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18612);

label_7F25B928:
    ctx->pc = 0x7F25B928u;
    // 7F25B928: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F25B92Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F25B92C:
    ctx->pc = 0x7F25B92Cu;
    ctx->downcount -= 38;
    // 7F25B92C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B930:
    ctx->pc = 0x7F25B930u;
    // 7F25B930: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F25B934:
    ctx->pc = 0x7F25B934u;
    // 7F25B934: lis     r3, 32550
    ctx->gpr[3] = ((u32)(s32)(32550) << 16);

label_7F25B938:
    ctx->pc = 0x7F25B938u;
    // 7F25B938: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F25B93C:
    ctx->pc = 0x7F25B93Cu;
    // 7F25B93C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F25B940:
    ctx->pc = 0x7F25B940u;
    // 7F25B940: addi    r4, r4, 32548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F25B944:
    ctx->pc = 0x7F25B944u;
    // 7F25B944: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B948:
    ctx->pc = 0x7F25B948u;
    // 7F25B948: addi    r0, r3, -18684
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-18684);

label_7F25B94C:
    ctx->pc = 0x7F25B94Cu;
    // 7F25B94C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B950:
    ctx->pc = 0x7F25B950u;
    // 7F25B950: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B954:
    ctx->pc = 0x7F25B954u;
    // 7F25B954: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B958:
    ctx->pc = 0x7F25B958u;
    // 7F25B958: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B95C:
    ctx->pc = 0x7F25B95Cu;
    // 7F25B95C: stw     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B960:
    ctx->pc = 0x7F25B960u;
    // 7F25B960: stw     r25, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F25B964:
    ctx->pc = 0x7F25B964u;
    // 7F25B964: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B968:
    ctx->pc = 0x7F25B968u;
    // 7F25B968: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B96C:
    ctx->pc = 0x7F25B96Cu;
    // 7F25B96C: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B970:
    ctx->pc = 0x7F25B970u;
    // 7F25B970: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B974:
    ctx->pc = 0x7F25B974u;
    // 7F25B974: lwz     r5, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B978:
    ctx->pc = 0x7F25B978u;
    // 7F25B978: lwz     r4, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B97C:
    ctx->pc = 0x7F25B97Cu;
    // 7F25B97C: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B980:
    ctx->pc = 0x7F25B980u;
    // 7F25B980: stw     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B984:
    ctx->pc = 0x7F25B984u;
    // 7F25B984: lwz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B988:
    ctx->pc = 0x7F25B988u;
    // 7F25B988: lwz     r4, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B98C:
    ctx->pc = 0x7F25B98Cu;
    // 7F25B98C: stw     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B990:
    ctx->pc = 0x7F25B990u;
    // 7F25B990: stw     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B994:
    ctx->pc = 0x7F25B994u;
    // 7F25B994: lwz     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25B998:
    ctx->pc = 0x7F25B998u;
    // 7F25B998: lwz     r4, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25B99C:
    ctx->pc = 0x7F25B99Cu;
    // 7F25B99C: stw     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F25B9A0:
    ctx->pc = 0x7F25B9A0u;
    // 7F25B9A0: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25B9A4:
    ctx->pc = 0x7F25B9A4u;
    // 7F25B9A4: stw     r28, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F25B9A8:
    ctx->pc = 0x7F25B9A8u;
    // 7F25B9A8: stfs     f30, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25B9A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F25B9AC:
    ctx->pc = 0x7F25B9ACu;
    // 7F25B9AC: stfs     f31, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25B9ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F25B9B0:
    ctx->pc = 0x7F25B9B0u;
    // 7F25B9B0: stw     r29, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F25B9B4:
    ctx->pc = 0x7F25B9B4u;
    // 7F25B9B4: stw     r30, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F25B9B8:
    ctx->pc = 0x7F25B9B8u;
    // 7F25B9B8: stw     r24, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F25B9BC:
    ctx->pc = 0x7F25B9BCu;
    // 7F25B9BC: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25B9C0:
    ctx->pc = 0x7F25B9C0u;
    // 7F25B9C0: bl      0x7F25B750
    {
            ctx->lr = 0x7F25B9C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B750u;
                return;
            }
            goto label_7F25B750;
    }

label_7F25B9C4:
    ctx->pc = 0x7F25B9C4u;
    ctx->downcount -= 2;
    // 7F25B9C4: cmpwi   r3, 0
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

label_7F25B9C8:
    ctx->pc = 0x7F25B9C8u;
    // 7F25B9C8: bc    4, 0, 0x7F25B9DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25B9DC;
        }
    }

label_7F25B9CC:
    ctx->pc = 0x7F25B9CCu;
    ctx->downcount -= 2;
    // 7F25B9CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B9D0:
    ctx->pc = 0x7F25B9D0u;
    // 7F25B9D0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25B9D4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25B9D4:
    ctx->pc = 0x7F25B9D4u;
    ctx->downcount -= 2;
    // 7F25B9D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25B9D8:
    ctx->pc = 0x7F25B9D8u;
    // 7F25B9D8: b       0x7F25B9E0
    {
            goto label_7F25B9E0;
    }

label_7F25B9DC:
    ctx->pc = 0x7F25B9DCu;
    ctx->downcount -= 1;
    // 7F25B9DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25B9E0:
    ctx->pc = 0x7F25B9E0u;
    ctx->downcount -= 18;
    // 7F25B9E0: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B9E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B9E4:
    ctx->pc = 0x7F25B9E4u;
    // 7F25B9E4: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25B9E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25B9E8:
    ctx->pc = 0x7F25B9E8u;
    // 7F25B9E8: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25B9EC:
    ctx->pc = 0x7F25B9ECu;
    // 7F25B9EC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25B9F0:
    ctx->pc = 0x7F25B9F0u;
    // 7F25B9F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25B9F4:
    ctx->pc = 0x7F25B9F4u;
    // 7F25B9F4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F25B9F8:
    ctx->pc = 0x7F25B9F8u;
    // 7F25B9F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25B9FC:
    ctx->pc = 0x7F25B9FCu;
    ctx->downcount -= 5;
    // 7F25B9FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BA00:
    ctx->pc = 0x7F25BA00u;
    // 7F25BA00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BA04:
    ctx->pc = 0x7F25BA04u;
    // 7F25BA04: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F25BA08:
    ctx->pc = 0x7F25BA08u;
    // 7F25BA08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BA0C:
    ctx->pc = 0x7F25BA0Cu;
    // 7F25BA0C: bl      0x7F25B8C0
    {
            ctx->lr = 0x7F25BA10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25B8C0u;
                return;
            }
            goto label_7F25B8C0;
    }

label_7F25BA10:
    ctx->pc = 0x7F25BA10u;
    ctx->downcount -= 5;
    // 7F25BA10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BA14:
    ctx->pc = 0x7F25BA14u;
    // 7F25BA14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25BA18:
    ctx->pc = 0x7F25BA18u;
    // 7F25BA18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25BA1C:
    ctx->pc = 0x7F25BA1Cu;
    // 7F25BA1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25BA20:
    ctx->pc = 0x7F25BA20u;
    ctx->downcount -= 28;
    // 7F25BA20: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BA24:
    ctx->pc = 0x7F25BA24u;
    // 7F25BA24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BA28:
    ctx->pc = 0x7F25BA28u;
    // 7F25BA28: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BA2C:
    ctx->pc = 0x7F25BA2Cu;
    // 7F25BA2C: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BA2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25BA30:
    ctx->pc = 0x7F25BA30u;
    // 7F25BA30: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25BA30u);
        if (ctx->exception) return;
    }

label_7F25BA34:
    ctx->pc = 0x7F25BA34u;
    // 7F25BA34: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BA34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25BA38:
    ctx->pc = 0x7F25BA38u;
    // 7F25BA38: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25BA38u);
        if (ctx->exception) return;
    }

label_7F25BA3C:
    ctx->pc = 0x7F25BA3Cu;
    // 7F25BA3C: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25BA40:
    ctx->pc = 0x7F25BA40u;
    // 7F25BA40: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25BA44:
    ctx->pc = 0x7F25BA44u;
    // 7F25BA44: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F25BA48:
    ctx->pc = 0x7F25BA48u;
    // 7F25BA48: lwz     r5, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F25BA4C:
    ctx->pc = 0x7F25BA4Cu;
    // 7F25BA4C: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F25BA50:
    ctx->pc = 0x7F25BA50u;
    // 7F25BA50: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BA54:
    ctx->pc = 0x7F25BA54u;
    // 7F25BA54: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F25BA58:
    ctx->pc = 0x7F25BA58u;
    // 7F25BA58: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BA5C:
    ctx->pc = 0x7F25BA5Cu;
    // 7F25BA5C: lwz     r3, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BA60:
    ctx->pc = 0x7F25BA60u;
    // 7F25BA60: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25BA64:
    ctx->pc = 0x7F25BA64u;
    // 7F25BA64: bl      0x7F25BD14
    {
            ctx->lr = 0x7F25BA68u;
            goto label_7F25BD14;
    }

label_7F25BA68:
    ctx->pc = 0x7F25BA68u;
    ctx->downcount -= 21;
    // 7F25BA68: lwz     r3, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BA6C:
    ctx->pc = 0x7F25BA6Cu;
    // 7F25BA6C: addi    r27, r23, 68
    ctx->gpr[27] = ctx->gpr[23] + (u32)(s32)(68);

label_7F25BA70:
    ctx->pc = 0x7F25BA70u;
    // 7F25BA70: addi    r26, r23, 196
    ctx->gpr[26] = ctx->gpr[23] + (u32)(s32)(196);

label_7F25BA74:
    ctx->pc = 0x7F25BA74u;
    // 7F25BA74: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F25BA78:
    ctx->pc = 0x7F25BA78u;
    // 7F25BA78: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BA7C:
    ctx->pc = 0x7F25BA7Cu;
    // 7F25BA7C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F25BA80:
    ctx->pc = 0x7F25BA80u;
    // 7F25BA80: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BA84:
    ctx->pc = 0x7F25BA84u;
    // 7F25BA84: lwz     r3, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BA88:
    ctx->pc = 0x7F25BA88u;
    // 7F25BA88: lwz     r0, 760(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BA8C:
    ctx->pc = 0x7F25BA8Cu;
    // 7F25BA8C: lwz     r6, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F25BA90:
    ctx->pc = 0x7F25BA90u;
    // 7F25BA90: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F25BA94:
    ctx->pc = 0x7F25BA94u;
    // 7F25BA94: cmpwi   r0, 30
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

label_7F25BA98:
    ctx->pc = 0x7F25BA98u;
    // 7F25BA98: addi    r5, r3, 192
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(192);

label_7F25BA9C:
    ctx->pc = 0x7F25BA9Cu;
    // 7F25BA9C: subfic  r0, r6, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[6]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F25BAA0:
    ctx->pc = 0x7F25BAA0u;
    // 7F25BAA0: rlwinm r3, r6, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F25BAA4:
    ctx->pc = 0x7F25BAA4u;
    // 7F25BAA4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F25BAA8:
    ctx->pc = 0x7F25BAA8u;
    // 7F25BAA8: lwzx    r25, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F25BAAC:
    ctx->pc = 0x7F25BAACu;
    // 7F25BAAC: lwzx    r24, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F25BAB0:
    ctx->pc = 0x7F25BAB0u;
    // 7F25BAB0: lwzx    r30, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F25BAB4:
    ctx->pc = 0x7F25BAB4u;
    // 7F25BAB4: lwzx    r29, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F25BAB8:
    ctx->pc = 0x7F25BAB8u;
    // 7F25BAB8: bc    4, 1, 0x7F25BBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25BBC0;
        }
    }

label_7F25BABC:
    ctx->pc = 0x7F25BABCu;
    ctx->downcount -= 9;
    // 7F25BABC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25BAC0:
    ctx->pc = 0x7F25BAC0u;
    // 7F25BAC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BAC4:
    ctx->pc = 0x7F25BAC4u;
    // 7F25BAC4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F25BAC8:
    ctx->pc = 0x7F25BAC8u;
    // 7F25BAC8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F25BACC:
    ctx->pc = 0x7F25BACCu;
    // 7F25BACC: lfs     f30, 22476(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25BACCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F25BAD0:
    ctx->pc = 0x7F25BAD0u;
    // 7F25BAD0: addi    r31, r6, 22468
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(22468);

label_7F25BAD4:
    ctx->pc = 0x7F25BAD4u;
    // 7F25BAD4: lfs     f31, 22480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25BAD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F25BAD8:
    ctx->pc = 0x7F25BAD8u;
    // 7F25BAD8: addi    r29, r5, 22472
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(22472);

label_7F25BADC:
    ctx->pc = 0x7F25BADCu;
    // 7F25BADC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F25BAE0:
    ctx->pc = 0x7F25BAE0u;
    ctx->downcount -= 4;
    // 7F25BAE0: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25BAE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25BAE4:
    // 7F25BAE4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BAE8:
    // 7F25BAE8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BAEC:
    // 7F25BAEC: bl      0x800261FC
    {
            ctx->lr = 0x7F25BAF0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25BAF0:
    ctx->downcount -= 3;
    // 7F25BAF0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BAF4:
    // 7F25BAF4: addi    r3, r23, 724
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(724);

label_7F25BAF8:
    // 7F25BAF8: bl      0x800260DC
    {
            ctx->lr = 0x7F25BAFCu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F25BAFC:
    ctx->downcount -= 3;
    // 7F25BAFC: addi    r3, r23, 724
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(724);

label_7F25BB00:
    // 7F25BB00: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25BB04:
    // 7F25BB04: bl      0x800261FC
    {
            ctx->lr = 0x7F25BB08u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25BB08:
    ctx->downcount -= 4;
    // 7F25BB08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25BB0C:
    // 7F25BB0C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BB10:
    // 7F25BB10: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25BB14:
    // 7F25BB14: bl      0x800261D8
    {
            ctx->lr = 0x7F25BB18u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F25BB18:
    ctx->downcount -= 4;
    // 7F25BB18: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25BB1C:
    ctx->pc = 0x7F25BB1Cu;
    // 7F25BB1C: lfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB1Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25BB20:
    // 7F25BB20: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25BB24:
    // 7F25BB24: bl      0x800261FC
    {
            ctx->lr = 0x7F25BB28u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25BB28:
    ctx->downcount -= 4;
    // 7F25BB28: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BB2C:
    // 7F25BB2C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BB30:
    // 7F25BB30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25BB34:
    // 7F25BB34: bl      0x800261B4
    {
            ctx->lr = 0x7F25BB38u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25BB38:
    ctx->downcount -= 4;
    // 7F25BB38: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F25BB3C:
    // 7F25BB3C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BB40:
    // 7F25BB40: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F25BB44:
    // 7F25BB44: bl      0x800261B4
    {
            ctx->lr = 0x7F25BB48u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25BB48:
    ctx->pc = 0x7F25BB48u;
    ctx->downcount -= 6;
    // 7F25BB48: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB48u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BB4C:
    ctx->pc = 0x7F25BB4Cu;
    // 7F25BB4C: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F25BB4Cu)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F25BB50:
    ctx->pc = 0x7F25BB50u;
    // 7F25BB50: stfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB50u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25BB54:
    ctx->pc = 0x7F25BB54u;
    // 7F25BB54: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB54u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BB58:
    ctx->pc = 0x7F25BB58u;
    // 7F25BB58: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BB58u)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F25BB5C:
    // 7F25BB5C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F25BB60u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F25BB60:
    ctx->pc = 0x7F25BB60u;
    ctx->downcount -= 9;
    // 7F25BB60: lfs     f0, 60(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB60u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BB64:
    ctx->pc = 0x7F25BB64u;
    // 7F25BB64: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BB64u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BB68:
    ctx->pc = 0x7F25BB68u;
    // 7F25BB68: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BB68u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BB6C:
    ctx->pc = 0x7F25BB6Cu;
    // 7F25BB6C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BB70:
    ctx->pc = 0x7F25BB70u;
    // 7F25BB70: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BB74:
    ctx->pc = 0x7F25BB74u;
    // 7F25BB74: sth     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BB78:
    ctx->pc = 0x7F25BB78u;
    // 7F25BB78: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB78u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BB7C:
    ctx->pc = 0x7F25BB7Cu;
    // 7F25BB7C: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BB7Cu)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F25BB80:
    // 7F25BB80: bl      0x7F008330
    {
            ctx->lr = 0x7F25BB84u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F25BB84:
    ctx->pc = 0x7F25BB84u;
    ctx->downcount -= 14;
    // 7F25BB84: lfs     f0, 60(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F25BB84u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BB88:
    // 7F25BB88: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F25BB8C:
    // 7F25BB8C: cmpwi   r22, 32
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25BB90:
    // 7F25BB90: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F25BB94:
    ctx->pc = 0x7F25BB94u;
    // 7F25BB94: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BB94u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BB98:
    // 7F25BB98: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F25BB9C:
    // 7F25BB9C: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F25BBA0:
    // 7F25BBA0: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F25BBA4:
    ctx->pc = 0x7F25BBA4u;
    // 7F25BBA4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BBA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BBA8:
    ctx->pc = 0x7F25BBA8u;
    // 7F25BBA8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BBA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BBAC:
    ctx->pc = 0x7F25BBACu;
    // 7F25BBAC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BBB0:
    ctx->pc = 0x7F25BBB0u;
    // 7F25BBB0: sth     r0, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BBB4:
    // 7F25BBB4: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F25BBB8:
    // 7F25BBB8: bc    12, 0, 0x7F25BAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25BAE0u;
                return;
            }
            goto label_7F25BAE0;
        }
    }

label_7F25BBBC:
    ctx->pc = 0x7F25BBBCu;
    ctx->downcount -= 1;
    // 7F25BBBC: b       0x7F25BCC8
    {
            goto label_7F25BCC8;
    }

label_7F25BBC0:
    ctx->pc = 0x7F25BBC0u;
    ctx->downcount -= 1;
    // 7F25BBC0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F25BBC4:
    ctx->downcount -= 4;
    // 7F25BBC4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F25BBC8:
    // 7F25BBC8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BBCC:
    // 7F25BBCC: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F25BBD0:
    // 7F25BBD0: bl      0x800261B4
    {
            ctx->lr = 0x7F25BBD4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25BBD4:
    ctx->pc = 0x7F25BBD4u;
    ctx->downcount -= 3;
    // 7F25BBD4: lbz     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F25BBD8:
    // 7F25BBD8: cmplwi  r0, 0x0001
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

label_7F25BBDC:
    // 7F25BBDC: bc    4, 0, 0x7F25BC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25BC04;
        }
    }

label_7F25BBE0:
    ctx->downcount -= 9;
    // 7F25BBE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25BBE4:
    // 7F25BBE4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F25BBE8:
    ctx->pc = 0x7F25BBE8u;
    // 7F25BBE8: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BBEC:
    ctx->pc = 0x7F25BBECu;
    // 7F25BBEC: sth     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BBF0:
    ctx->pc = 0x7F25BBF0u;
    // 7F25BBF0: sth     r0, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BBF4:
    ctx->pc = 0x7F25BBF4u;
    // 7F25BBF4: stb     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BBF8:
    ctx->pc = 0x7F25BBF8u;
    // 7F25BBF8: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BBFC:
    ctx->pc = 0x7F25BBFCu;
    // 7F25BBFC: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BC00:
    // 7F25BC00: b       0x7F25BCA4
    {
            goto label_7F25BCA4;
    }

label_7F25BC04:
    ctx->pc = 0x7F25BC04u;
    ctx->downcount -= 10;
    // 7F25BC04: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BC08:
    // 7F25BC08: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F25BC0C:
    ctx->pc = 0x7F25BC0Cu;
    // 7F25BC0C: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BC10:
    // 7F25BC10: add   r3, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F25BC14:
    // 7F25BC14: rlwinm r0, r3, 29, 0, 2
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0xE0000000u;
    }

label_7F25BC18:
    // 7F25BC18: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F25BC1C:
    // 7F25BC1C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F25BC20:
    // 7F25BC20: rlwinm r0, r0, 3, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFFFu;
    }

label_7F25BC24:
    // 7F25BC24: add.   r0, r0, r3
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

label_7F25BC28:
    // 7F25BC28: bc    4, 2, 0x7F25BC38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25BC38;
        }
    }

label_7F25BC2C:
    ctx->pc = 0x7F25BC2Cu;
    ctx->downcount -= 3;
    // 7F25BC2C: lbz     r3, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F25BC30:
    // 7F25BC30: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F25BC34:
    ctx->pc = 0x7F25BC34u;
    // 7F25BC34: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BC38:
    ctx->downcount -= 10;
    // 7F25BC38: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25BC3C:
    // 7F25BC3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BC40:
    ctx->pc = 0x7F25BC40u;
    // 7F25BC40: lfs     f2, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC40u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25BC44:
    ctx->pc = 0x7F25BC44u;
    // 7F25BC44: lfs     f0, 22476(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BC48:
    ctx->pc = 0x7F25BC48u;
    // 7F25BC48: lfs     f1, 22480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25BC4C:
    ctx->pc = 0x7F25BC4Cu;
    // 7F25BC4C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BC4Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F25BC50:
    ctx->pc = 0x7F25BC50u;
    // 7F25BC50: stfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC50u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25BC54:
    ctx->pc = 0x7F25BC54u;
    // 7F25BC54: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC54u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BC58:
    ctx->pc = 0x7F25BC58u;
    // 7F25BC58: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BC58u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F25BC5C:
    // 7F25BC5C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F25BC60u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F25BC60:
    ctx->pc = 0x7F25BC60u;
    ctx->downcount -= 11;
    // 7F25BC60: lfs     f0, 60(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC60u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BC64:
    // 7F25BC64: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BC68:
    ctx->pc = 0x7F25BC68u;
    // 7F25BC68: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BC68u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BC6C:
    ctx->pc = 0x7F25BC6Cu;
    // 7F25BC6C: lfs     f1, 22480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25BC70:
    ctx->pc = 0x7F25BC70u;
    // 7F25BC70: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BC70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BC74:
    ctx->pc = 0x7F25BC74u;
    // 7F25BC74: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BC78:
    ctx->pc = 0x7F25BC78u;
    // 7F25BC78: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BC7C:
    ctx->pc = 0x7F25BC7Cu;
    // 7F25BC7C: sth     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BC80:
    ctx->pc = 0x7F25BC80u;
    // 7F25BC80: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC80u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BC84:
    ctx->pc = 0x7F25BC84u;
    // 7F25BC84: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BC84u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F25BC88:
    // 7F25BC88: bl      0x7F008330
    {
            ctx->lr = 0x7F25BC8Cu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F25BC8C:
    ctx->pc = 0x7F25BC8Cu;
    ctx->downcount -= 6;
    // 7F25BC8C: lfs     f0, 60(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC8Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BC90:
    ctx->pc = 0x7F25BC90u;
    // 7F25BC90: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BC90u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BC94:
    ctx->pc = 0x7F25BC94u;
    // 7F25BC94: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BC94u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BC98:
    ctx->pc = 0x7F25BC98u;
    // 7F25BC98: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BC98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BC9C:
    ctx->pc = 0x7F25BC9Cu;
    // 7F25BC9C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BCA0:
    ctx->pc = 0x7F25BCA0u;
    // 7F25BCA0: sth     r0, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BCA4:
    ctx->downcount -= 9;
    // 7F25BCA4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F25BCA8:
    // 7F25BCA8: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F25BCAC:
    // 7F25BCAC: cmpwi   r31, 32
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25BCB0:
    // 7F25BCB0: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F25BCB4:
    // 7F25BCB4: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F25BCB8:
    // 7F25BCB8: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F25BCBC:
    // 7F25BCBC: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F25BCC0:
    // 7F25BCC0: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F25BCC4:
    // 7F25BCC4: bc    12, 0, 0x7F25BBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25BBC4u;
                return;
            }
            goto label_7F25BBC4;
        }
    }

label_7F25BCC8:
    ctx->pc = 0x7F25BCC8u;
    ctx->downcount -= 2;
    // 7F25BCC8: cmpwi   r28, 32
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

label_7F25BCCC:
    ctx->pc = 0x7F25BCCCu;
    // 7F25BCCC: bc    12, 0, 0x7F25BCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F25BCE4;
        }
    }

label_7F25BCD0:
    ctx->pc = 0x7F25BCD0u;
    ctx->downcount -= 3;
    // 7F25BCD0: lwz     r0, 760(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BCD4:
    ctx->pc = 0x7F25BCD4u;
    // 7F25BCD4: cmpwi   r0, 0
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

label_7F25BCD8:
    ctx->pc = 0x7F25BCD8u;
    // 7F25BCD8: bc    4, 0, 0x7F25BCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F25BCE4;
        }
    }

label_7F25BCDC:
    ctx->pc = 0x7F25BCDCu;
    ctx->downcount -= 2;
    // 7F25BCDC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F25BCE0:
    ctx->pc = 0x7F25BCE0u;
    // 7F25BCE0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F25BCE4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F25BCE4:
    ctx->pc = 0x7F25BCE4u;
    ctx->downcount -= 23;
    // 7F25BCE4: lwz     r3, 760(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(760);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BCE8:
    ctx->pc = 0x7F25BCE8u;
    // 7F25BCE8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F25BCEC:
    ctx->pc = 0x7F25BCECu;
    // 7F25BCEC: stw     r0, 760(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BCF0:
    ctx->pc = 0x7F25BCF0u;
    // 7F25BCF0: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BCF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25BCF0u);
        if (ctx->exception) return;
    }

label_7F25BCF4:
    ctx->pc = 0x7F25BCF4u;
    // 7F25BCF4: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BCF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BCF8:
    ctx->pc = 0x7F25BCF8u;
    // 7F25BCF8: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BCF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25BCF8u);
        if (ctx->exception) return;
    }

label_7F25BCFC:
    ctx->pc = 0x7F25BCFCu;
    // 7F25BCFC: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BCFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BD00:
    ctx->pc = 0x7F25BD00u;
    // 7F25BD00: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25BD04:
    ctx->pc = 0x7F25BD04u;
    // 7F25BD04: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BD08:
    ctx->pc = 0x7F25BD08u;
    // 7F25BD08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25BD0C:
    ctx->pc = 0x7F25BD0Cu;
    // 7F25BD0C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F25BD10:
    ctx->pc = 0x7F25BD10u;
    // 7F25BD10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25BD14:
    ctx->pc = 0x7F25BD14u;
    ctx->downcount -= 7;
    // 7F25BD14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BD18:
    ctx->pc = 0x7F25BD18u;
    // 7F25BD18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BD1C:
    ctx->pc = 0x7F25BD1Cu;
    // 7F25BD1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BD20:
    ctx->pc = 0x7F25BD20u;
    // 7F25BD20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25BD24:
    ctx->pc = 0x7F25BD24u;
    // 7F25BD24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25BD28:
    ctx->pc = 0x7F25BD28u;
    // 7F25BD28: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25BD2C:
    ctx->pc = 0x7F25BD2Cu;
    // 7F25BD2C: bl      0x7F01B234
    {
            ctx->lr = 0x7F25BD30u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F25BD30:
    ctx->pc = 0x7F25BD30u;
    ctx->downcount -= 7;
    // 7F25BD30: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25BD34:
    ctx->pc = 0x7F25BD34u;
    // 7F25BD34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BD38:
    ctx->pc = 0x7F25BD38u;
    // 7F25BD38: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25BD3C:
    ctx->pc = 0x7F25BD3Cu;
    // 7F25BD3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25BD40:
    ctx->pc = 0x7F25BD40u;
    // 7F25BD40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25BD44:
    ctx->pc = 0x7F25BD44u;
    // 7F25BD44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25BD48:
    ctx->pc = 0x7F25BD48u;
    ctx->downcount -= 7;
    // 7F25BD48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BD4C:
    ctx->pc = 0x7F25BD4Cu;
    // 7F25BD4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BD50:
    ctx->pc = 0x7F25BD50u;
    // 7F25BD50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BD54:
    ctx->pc = 0x7F25BD54u;
    // 7F25BD54: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F25BD58:
    ctx->pc = 0x7F25BD58u;
    // 7F25BD58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25BD5C:
    ctx->pc = 0x7F25BD5Cu;
    // 7F25BD5C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BD60:
    ctx->pc = 0x7F25BD60u;
    // 7F25BD60: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F25BD64u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F25BD64:
    ctx->pc = 0x7F25BD64u;
    ctx->downcount -= 7;
    // 7F25BD64: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25BD68:
    ctx->pc = 0x7F25BD68u;
    // 7F25BD68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BD6C:
    ctx->pc = 0x7F25BD6Cu;
    // 7F25BD6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F25BD70:
    ctx->pc = 0x7F25BD70u;
    // 7F25BD70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25BD74:
    ctx->pc = 0x7F25BD74u;
    // 7F25BD74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25BD78:
    ctx->pc = 0x7F25BD78u;
    // 7F25BD78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25BD7C:
    ctx->pc = 0x7F25BD7Cu;
    ctx->downcount -= 35;
    // 7F25BD7C: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BD80:
    ctx->pc = 0x7F25BD80u;
    // 7F25BD80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BD84:
    ctx->pc = 0x7F25BD84u;
    // 7F25BD84: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BD88:
    ctx->pc = 0x7F25BD88u;
    // 7F25BD88: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BD88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F25BD8C:
    ctx->pc = 0x7F25BD8Cu;
    // 7F25BD8C: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BD8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F25BD8Cu);
        if (ctx->exception) return;
    }

label_7F25BD90:
    ctx->pc = 0x7F25BD90u;
    // 7F25BD90: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BD90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F25BD94:
    ctx->pc = 0x7F25BD94u;
    // 7F25BD94: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BD94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F25BD94u);
        if (ctx->exception) return;
    }

label_7F25BD98:
    ctx->pc = 0x7F25BD98u;
    // 7F25BD98: stfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BD98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F25BD9C:
    ctx->pc = 0x7F25BD9Cu;
    // 7F25BD9C: psq_st   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BD9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F25BD9Cu);
        if (ctx->exception) return;
    }

label_7F25BDA0:
    ctx->pc = 0x7F25BDA0u;
    // 7F25BDA0: stfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BDA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F25BDA4:
    ctx->pc = 0x7F25BDA4u;
    // 7F25BDA4: psq_st   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BDA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F25BDA4u);
        if (ctx->exception) return;
    }

label_7F25BDA8:
    ctx->pc = 0x7F25BDA8u;
    // 7F25BDA8: stfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BDA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F25BDAC:
    ctx->pc = 0x7F25BDACu;
    // 7F25BDAC: psq_st   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BDACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F25BDACu);
        if (ctx->exception) return;
    }

label_7F25BDB0:
    ctx->pc = 0x7F25BDB0u;
    // 7F25BDB0: stfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BDB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F25BDB4:
    ctx->pc = 0x7F25BDB4u;
    // 7F25BDB4: psq_st   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BDB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F25BDB4u);
        if (ctx->exception) return;
    }

label_7F25BDB8:
    ctx->pc = 0x7F25BDB8u;
    // 7F25BDB8: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25BDBC:
    ctx->pc = 0x7F25BDBCu;
    // 7F25BDBC: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_7F25BDC0:
    ctx->pc = 0x7F25BDC0u;
    // 7F25BDC0: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25BDC4:
    ctx->pc = 0x7F25BDC4u;
    // 7F25BDC4: addi    r0, r7, -9536
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-9536);

label_7F25BDC8:
    ctx->pc = 0x7F25BDC8u;
    // 7F25BDC8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25BDCC:
    ctx->pc = 0x7F25BDCCu;
    // 7F25BDCC: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BDD0:
    ctx->pc = 0x7F25BDD0u;
    // 7F25BDD0: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F25BDD4:
    ctx->pc = 0x7F25BDD4u;
    // 7F25BDD4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F25BDD8:
    ctx->pc = 0x7F25BDD8u;
    // 7F25BDD8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25BDDC:
    ctx->pc = 0x7F25BDDCu;
    // 7F25BDDC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F25BDE0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F25BDE0:
    ctx->pc = 0x7F25BDE0u;
    ctx->downcount -= 26;
    // 7F25BDE0: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F25BDE4:
    ctx->pc = 0x7F25BDE4u;
    // 7F25BDE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BDE8:
    ctx->pc = 0x7F25BDE8u;
    // 7F25BDE8: stw     r0, 204(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BDEC:
    ctx->pc = 0x7F25BDECu;
    // 7F25BDEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F25BDF0:
    ctx->pc = 0x7F25BDF0u;
    // 7F25BDF0: lfs     f0, 22464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25BDF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BDF4:
    ctx->pc = 0x7F25BDF4u;
    // 7F25BDF4: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F25BDF8:
    ctx->pc = 0x7F25BDF8u;
    // 7F25BDF8: stw     r0, 200(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BDFC:
    ctx->pc = 0x7F25BDFCu;
    // 7F25BDFC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F25BE00:
    ctx->pc = 0x7F25BE00u;
    // 7F25BE00: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F25BE04:
    ctx->pc = 0x7F25BE04u;
    // 7F25BE04: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F25BE08:
    ctx->pc = 0x7F25BE08u;
    // 7F25BE08: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BE0C:
    ctx->pc = 0x7F25BE0Cu;
    // 7F25BE0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25BE10:
    ctx->pc = 0x7F25BE10u;
    // 7F25BE10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BE14:
    ctx->pc = 0x7F25BE14u;
    // 7F25BE14: lfs     f29, 22484(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE14u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(22484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F25BE18:
    ctx->pc = 0x7F25BE18u;
    // 7F25BE18: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25BE1C:
    ctx->pc = 0x7F25BE1Cu;
    // 7F25BE1C: addi    r31, r24, 68
    ctx->gpr[31] = ctx->gpr[24] + (u32)(s32)(68);

label_7F25BE20:
    ctx->pc = 0x7F25BE20u;
    // 7F25BE20: lfs     f30, 22488(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE20u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(22488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F25BE24:
    ctx->pc = 0x7F25BE24u;
    // 7F25BE24: addi    r30, r24, 196
    ctx->gpr[30] = ctx->gpr[24] + (u32)(s32)(196);

label_7F25BE28:
    ctx->pc = 0x7F25BE28u;
    // 7F25BE28: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25BE2C:
    ctx->pc = 0x7F25BE2Cu;
    // 7F25BE2C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F25BE30:
    ctx->pc = 0x7F25BE30u;
    // 7F25BE30: lfs     f31, 22480(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE30u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F25BE34:
    ctx->pc = 0x7F25BE34u;
    // 7F25BE34: lwz     r29, 184(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(184);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F25BE38:
    ctx->pc = 0x7F25BE38u;
    // 7F25BE38: lwz     r28, 192(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F25BE3C:
    ctx->pc = 0x7F25BE3Cu;
    // 7F25BE3C: lfs     f26, 22500(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F25BE40:
    ctx->pc = 0x7F25BE40u;
    // 7F25BE40: lfs     f27, 22496(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F25BE44:
    ctx->pc = 0x7F25BE44u;
    // 7F25BE44: lfs     f28, 22492(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F25BE48:
    ctx->downcount -= 1;
    // 7F25BE48: bl      0x7F25C024
    {
            ctx->lr = 0x7F25BE4Cu;
            goto label_7F25C024;
    }

label_7F25BE4C:
    ctx->downcount -= 3;
    // 7F25BE4C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F25BE50:
    ctx->pc = 0x7F25BE50u;
    // 7F25BE50: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BE54:
    // 7F25BE54: bl      0x7F25C024
    {
            ctx->lr = 0x7F25BE58u;
            goto label_7F25C024;
    }

label_7F25BE58:
    ctx->downcount -= 3;
    // 7F25BE58: rlwinm r0, r3, 0, 21, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000007FFu;
    }

label_7F25BE5C:
    ctx->pc = 0x7F25BE5Cu;
    // 7F25BE5C: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BE60:
    // 7F25BE60: bl      0x7F25BFDC
    {
            ctx->lr = 0x7F25BE64u;
            goto label_7F25BFDC;
    }

label_7F25BE64:
    ctx->pc = 0x7F25BE64u;
    ctx->downcount -= 5;
    // 7F25BE64: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BE64u)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F25BE68:
    // 7F25BE68: addi    r3, r24, 708
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(708);

label_7F25BE6C:
    // 7F25BE6C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25BE70:
    ctx->pc = 0x7F25BE70u;
    // 7F25BE70: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BE70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F25BE74:
    // 7F25BE74: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F25BE78u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F25BE78:
    ctx->downcount -= 4;
    // 7F25BE78: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F25BE7C:
    // 7F25BE7C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25BE80:
    // 7F25BE80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F25BE84:
    // 7F25BE84: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F25BE88u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F25BE88:
    ctx->downcount -= 4;
    // 7F25BE88: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F25BE8C:
    // 7F25BE8C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F25BE90:
    // 7F25BE90: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25BE94:
    // 7F25BE94: bl      0x800261D8
    {
            ctx->lr = 0x7F25BE98u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F25BE98:
    ctx->downcount -= 3;
    // 7F25BE98: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25BE9C:
    // 7F25BE9C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25BEA0:
    // 7F25BEA0: bl      0x7F114F50
    {
            ctx->lr = 0x7F25BEA4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F25BEA4:
    ctx->downcount -= 1;
    // 7F25BEA4: bl      0x7F25BFDC
    {
            ctx->lr = 0x7F25BEA8u;
            goto label_7F25BFDC;
    }

label_7F25BEA8:
    ctx->pc = 0x7F25BEA8u;
    ctx->downcount -= 4;
    // 7F25BEA8: fmuls   f1, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BEA8u)) return;
    ppc_fmuls(ctx, 1, 30, 1);

label_7F25BEAC:
    // 7F25BEAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25BEB0:
    // 7F25BEB0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F25BEB4:
    // 7F25BEB4: bl      0x800261FC
    {
            ctx->lr = 0x7F25BEB8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25BEB8:
    ctx->downcount -= 7;
    // 7F25BEB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F25BEBC:
    // 7F25BEBC: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F25BEC0:
    ctx->pc = 0x7F25BEC0u;
    // 7F25BEC0: sth     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25BEC4:
    ctx->pc = 0x7F25BEC4u;
    // 7F25BEC4: sth     r3, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F25BEC8:
    ctx->pc = 0x7F25BEC8u;
    // 7F25BEC8: sth     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BECC:
    ctx->pc = 0x7F25BECCu;
    // 7F25BECC: sth     r0, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BED0:
    // 7F25BED0: bl      0x7F25BFDC
    {
            ctx->lr = 0x7F25BED4u;
            goto label_7F25BFDC;
    }

label_7F25BED4:
    ctx->pc = 0x7F25BED4u;
    ctx->downcount -= 4;
    // 7F25BED4: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25BED4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F25BED8:
    ctx->pc = 0x7F25BED8u;
    // 7F25BED8: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25BED8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BEDC:
    ctx->pc = 0x7F25BEDCu;
    // 7F25BEDC: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BEDCu)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F25BEE0:
    // 7F25BEE0: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F25BEE4u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F25BEE4:
    ctx->pc = 0x7F25BEE4u;
    ctx->downcount -= 9;
    // 7F25BEE4: lfs     f0, 60(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25BEE4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BEE8:
    ctx->pc = 0x7F25BEE8u;
    // 7F25BEE8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BEE8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BEEC:
    ctx->pc = 0x7F25BEECu;
    // 7F25BEEC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BEECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BEF0:
    ctx->pc = 0x7F25BEF0u;
    // 7F25BEF0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BEF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BEF4:
    ctx->pc = 0x7F25BEF4u;
    // 7F25BEF4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BEF8:
    ctx->pc = 0x7F25BEF8u;
    // 7F25BEF8: sth     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BEFC:
    ctx->pc = 0x7F25BEFCu;
    // 7F25BEFC: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F25BEFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BF00:
    ctx->pc = 0x7F25BF00u;
    // 7F25BF00: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF00u)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F25BF04:
    // 7F25BF04: bl      0x7F008330
    {
            ctx->lr = 0x7F25BF08u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F25BF08:
    ctx->pc = 0x7F25BF08u;
    ctx->downcount -= 7;
    // 7F25BF08: lfs     f0, 60(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F25BF08u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25BF0C:
    ctx->pc = 0x7F25BF0Cu;
    // 7F25BF0C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BF0Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F25BF10:
    ctx->pc = 0x7F25BF10u;
    // 7F25BF10: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BF14:
    ctx->pc = 0x7F25BF14u;
    // 7F25BF14: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BF14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BF18:
    ctx->pc = 0x7F25BF18u;
    // 7F25BF18: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BF1C:
    ctx->pc = 0x7F25BF1Cu;
    // 7F25BF1C: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F25BF20:
    // 7F25BF20: bl      0x7F25C024
    {
            ctx->lr = 0x7F25BF24u;
            goto label_7F25C024;
    }

label_7F25BF24:
    ctx->downcount -= 6;
    // 7F25BF24: rlwinm r3, r3, 0, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F25BF28:
    // 7F25BF28: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F25BF2C:
    ctx->pc = 0x7F25BF2Cu;
    // 7F25BF2C: stb     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BF30:
    ctx->pc = 0x7F25BF30u;
    // 7F25BF30: stb     r0, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BF34:
    ctx->pc = 0x7F25BF34u;
    // 7F25BF34: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BF38:
    // 7F25BF38: bl      0x7F25BFDC
    {
            ctx->lr = 0x7F25BF3Cu;
            goto label_7F25BFDC;
    }

label_7F25BF3C:
    ctx->pc = 0x7F25BF3Cu;
    ctx->downcount -= 14;
    // 7F25BF3C: fadds   f0, f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F25BF3Cu)) return;
    ppc_fadds(ctx, 0, 26, 1);

label_7F25BF40:
    // 7F25BF40: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F25BF44:
    // 7F25BF44: cmpwi   r27, 32
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F25BF48:
    // 7F25BF48: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F25BF4C:
    // 7F25BF4C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F25BF50:
    // 7F25BF50: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F25BF54:
    ctx->pc = 0x7F25BF54u;
    // 7F25BF54: fmuls   f0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF54u)) return;
    ppc_fmuls(ctx, 0, 27, 0);

label_7F25BF58:
    ctx->pc = 0x7F25BF58u;
    // 7F25BF58: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF58u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F25BF5C:
    ctx->pc = 0x7F25BF5Cu;
    // 7F25BF5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F25BF60:
    ctx->pc = 0x7F25BF60u;
    // 7F25BF60: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BF60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F25BF64:
    ctx->pc = 0x7F25BF64u;
    // 7F25BF64: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BF68:
    ctx->pc = 0x7F25BF68u;
    // 7F25BF68: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F25BF6C:
    // 7F25BF6C: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F25BF70:
    // 7F25BF70: bc    12, 0, 0x7F25BE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25BE48u;
                return;
            }
            goto label_7F25BE48;
        }
    }

label_7F25BF74:
    ctx->pc = 0x7F25BF74u;
    ctx->downcount -= 4;
    // 7F25BF74: lwz     r3, 188(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BF78:
    ctx->pc = 0x7F25BF78u;
    // 7F25BF78: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F25BF7C:
    ctx->pc = 0x7F25BF7Cu;
    // 7F25BF7C: lwz     r4, 184(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25BF80:
    ctx->pc = 0x7F25BF80u;
    // 7F25BF80: bl      0x8000519C
    {
            ctx->lr = 0x7F25BF84u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F25BF84:
    ctx->pc = 0x7F25BF84u;
    ctx->downcount -= 4;
    // 7F25BF84: lwz     r3, 196(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25BF88:
    ctx->pc = 0x7F25BF88u;
    // 7F25BF88: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F25BF8C:
    ctx->pc = 0x7F25BF8Cu;
    // 7F25BF8C: lwz     r4, 192(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25BF90:
    ctx->pc = 0x7F25BF90u;
    // 7F25BF90: bl      0x8000519C
    {
            ctx->lr = 0x7F25BF94u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F25BF94:
    ctx->pc = 0x7F25BF94u;
    ctx->downcount -= 29;
    // 7F25BF94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F25BF98:
    ctx->pc = 0x7F25BF98u;
    // 7F25BF98: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BF98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F25BF98u);
        if (ctx->exception) return;
    }

label_7F25BF9C:
    ctx->pc = 0x7F25BF9Cu;
    // 7F25BF9C: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BF9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFA0:
    ctx->pc = 0x7F25BFA0u;
    // 7F25BFA0: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F25BFA0u);
        if (ctx->exception) return;
    }

label_7F25BFA4:
    ctx->pc = 0x7F25BFA4u;
    // 7F25BFA4: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFA8:
    ctx->pc = 0x7F25BFA8u;
    // 7F25BFA8: psq_l   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F25BFA8u);
        if (ctx->exception) return;
    }

label_7F25BFAC:
    ctx->pc = 0x7F25BFACu;
    // 7F25BFAC: lfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BFACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFB0:
    ctx->pc = 0x7F25BFB0u;
    // 7F25BFB0: psq_l   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F25BFB0u);
        if (ctx->exception) return;
    }

label_7F25BFB4:
    ctx->pc = 0x7F25BFB4u;
    // 7F25BFB4: lfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BFB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFB8:
    ctx->pc = 0x7F25BFB8u;
    // 7F25BFB8: psq_l   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BFB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F25BFB8u);
        if (ctx->exception) return;
    }

label_7F25BFBC:
    ctx->pc = 0x7F25BFBCu;
    // 7F25BFBC: lfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFC0:
    ctx->pc = 0x7F25BFC0u;
    // 7F25BFC0: psq_l   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F25BFC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F25BFC0u);
        if (ctx->exception) return;
    }

label_7F25BFC4:
    ctx->pc = 0x7F25BFC4u;
    // 7F25BFC4: lfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25BFC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25BFC8:
    ctx->pc = 0x7F25BFC8u;
    // 7F25BFC8: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F25BFCC:
    ctx->pc = 0x7F25BFCCu;
    // 7F25BFCC: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25BFD0:
    ctx->pc = 0x7F25BFD0u;
    // 7F25BFD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25BFD4:
    ctx->pc = 0x7F25BFD4u;
    // 7F25BFD4: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F25BFD8:
    ctx->pc = 0x7F25BFD8u;
    // 7F25BFD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25BFDC:
    ctx->pc = 0x7F25BFDCu;
    ctx->downcount -= 4;
    // 7F25BFDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25BFE0:
    ctx->pc = 0x7F25BFE0u;
    // 7F25BFE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25BFE4:
    ctx->pc = 0x7F25BFE4u;
    // 7F25BFE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25BFE8:
    ctx->pc = 0x7F25BFE8u;
    // 7F25BFE8: bl      0x7F25C024
    {
            ctx->lr = 0x7F25BFECu;
            goto label_7F25C024;
    }

label_7F25BFEC:
    ctx->pc = 0x7F25BFECu;
    ctx->downcount -= 31;
    // 7F25BFEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F25BFF0:
    ctx->pc = 0x7F25BFF0u;
    // 7F25BFF0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25BFF4:
    ctx->pc = 0x7F25BFF4u;
    // 7F25BFF4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25BFF8:
    ctx->pc = 0x7F25BFF8u;
    // 7F25BFF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25BFFC:
    ctx->pc = 0x7F25BFFCu;
    // 7F25BFFC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25C000:
    ctx->pc = 0x7F25C000u;
    // 7F25C000: lfd     f2, 22512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25C000u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25C004:
    ctx->pc = 0x7F25C004u;
    // 7F25C004: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F25C004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F25C008:
    ctx->pc = 0x7F25C008u;
    // 7F25C008: lfs     f0, 22504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F25C008u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25C00C:
    ctx->pc = 0x7F25C00Cu;
    // 7F25C00C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F25C00Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F25C010:
    ctx->pc = 0x7F25C010u;
    // 7F25C010: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F25C014:
    ctx->pc = 0x7F25C014u;
    // 7F25C014: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25C014u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F25C018:
    ctx->pc = 0x7F25C018u;
    // 7F25C018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F25C01C:
    ctx->pc = 0x7F25C01Cu;
    // 7F25C01C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F25C020:
    ctx->pc = 0x7F25C020u;
    // 7F25C020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25C024:
    ctx->pc = 0x7F25C024u;
    ctx->downcount -= 13;
    // 7F25C024: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F25C028:
    ctx->pc = 0x7F25C028u;
    // 7F25C028: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F25C02C:
    ctx->pc = 0x7F25C02Cu;
    // 7F25C02C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F25C030:
    ctx->pc = 0x7F25C030u;
    // 7F25C030: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F25C034:
    ctx->pc = 0x7F25C034u;
    // 7F25C034: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F25C038:
    ctx->pc = 0x7F25C038u;
    // 7F25C038: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F25C03C:
    ctx->pc = 0x7F25C03Cu;
    // 7F25C03C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F25C040:
    ctx->pc = 0x7F25C040u;
    // 7F25C040: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25C044:
    ctx->pc = 0x7F25C044u;
    // 7F25C044: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2580EC;
        }
    }

label_7F25C048:
    ctx->pc = 0x7F25C048u;
    ctx->downcount -= 21;
    // 7F25C048: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F25C04C:
    ctx->pc = 0x7F25C04Cu;
    // 7F25C04C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F25C050:
    ctx->pc = 0x7F25C050u;
    // 7F25C050: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F25C054:
    ctx->pc = 0x7F25C054u;
    // 7F25C054: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25C058:
    ctx->pc = 0x7F25C058u;
    // 7F25C058: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F25C05C:
    ctx->pc = 0x7F25C05Cu;
    // 7F25C05C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F25C060:
    ctx->pc = 0x7F25C060u;
    // 7F25C060: addi    r3, r6, 18308
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(18308);

label_7F25C064:
    ctx->pc = 0x7F25C064u;
    // 7F25C064: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F25C068:
    ctx->pc = 0x7F25C068u;
    // 7F25C068: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F25C06C:
    ctx->pc = 0x7F25C06Cu;
    // 7F25C06C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F25C070:
    ctx->pc = 0x7F25C070u;
    // 7F25C070: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F25C074u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F25C074:
    ctx->pc = 0x7F25C074u;
    ctx->downcount -= 8;
    // 7F25C074: stw     r3, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F25C078:
    ctx->pc = 0x7F25C078u;
    // 7F25C078: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F25C07C:
    ctx->pc = 0x7F25C07Cu;
    // 7F25C07C: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F25C080:
    ctx->pc = 0x7F25C080u;
    // 7F25C080: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F25C084:
    ctx->pc = 0x7F25C084u;
    // 7F25C084: stw     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F25C088:
    ctx->pc = 0x7F25C088u;
    // 7F25C088: addi    r4, r30, 724
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(724);

label_7F25C08C:
    ctx->pc = 0x7F25C08Cu;
    // 7F25C08C: stw     r0, 760(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F25C090:
    ctx->pc = 0x7F25C090u;
    // 7F25C090: bl      0x7F114F50
    {
            ctx->lr = 0x7F25C094u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F25C094:
    ctx->pc = 0x7F25C094u;
    ctx->downcount -= 6;
    // 7F25C094: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25C098:
    ctx->pc = 0x7F25C098u;
    // 7F25C098: addi    r3, r30, 724
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(724);

label_7F25C09C:
    ctx->pc = 0x7F25C09Cu;
    // 7F25C09C: addi    r5, r4, 22520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22520);

label_7F25C0A0:
    ctx->pc = 0x7F25C0A0u;
    // 7F25C0A0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25C0A4:
    ctx->pc = 0x7F25C0A4u;
    // 7F25C0A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25C0A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F25C0A8:
    ctx->pc = 0x7F25C0A8u;
    // 7F25C0A8: bl      0x800261FC
    {
            ctx->lr = 0x7F25C0ACu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F25C0AC:
    ctx->pc = 0x7F25C0ACu;
    ctx->downcount -= 4;
    // 7F25C0AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F25C0B0:
    ctx->pc = 0x7F25C0B0u;
    // 7F25C0B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F25C0B4:
    ctx->pc = 0x7F25C0B4u;
    // 7F25C0B4: addi    r5, r30, 708
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(708);

label_7F25C0B8:
    ctx->pc = 0x7F25C0B8u;
    // 7F25C0B8: bl      0x800261B4
    {
            ctx->lr = 0x7F25C0BCu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F25C0BC:
    ctx->pc = 0x7F25C0BCu;
    ctx->downcount -= 1;
    // 7F25C0BC: bl      0x7F25BFDC
    {
            ctx->lr = 0x7F25C0C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F25BFDCu;
                return;
            }
            goto label_7F25BFDC;
    }

label_7F25C0C0:
    ctx->pc = 0x7F25C0C0u;
    ctx->downcount -= 11;
    // 7F25C0C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25C0C4:
    ctx->pc = 0x7F25C0C4u;
    // 7F25C0C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25C0C8:
    ctx->pc = 0x7F25C0C8u;
    // 7F25C0C8: addi    r5, r3, 22528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22528);

label_7F25C0CC:
    ctx->pc = 0x7F25C0CCu;
    // 7F25C0CC: lfs     f0, 22524(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F25C0CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F25C0D0:
    ctx->pc = 0x7F25C0D0u;
    // 7F25C0D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25C0D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F25C0D4:
    ctx->pc = 0x7F25C0D4u;
    // 7F25C0D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F25C0D8:
    ctx->pc = 0x7F25C0D8u;
    // 7F25C0D8: addi    r5, r3, 22532
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22532);

label_7F25C0DC:
    ctx->pc = 0x7F25C0DCu;
    // 7F25C0DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F25C0E0:
    ctx->pc = 0x7F25C0E0u;
    // 7F25C0E0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F25C0E0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F25C0E4:
    ctx->pc = 0x7F25C0E4u;
    // 7F25C0E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F25C0E8:
    ctx->pc = 0x7F25C0E8u;
    // 7F25C0E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F25C0E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    ctx->pc = 0x7F25C0ECu;
    return;
return_dispatch_7F2580EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F258220u: goto label_7F258220;
    case 0x7F258238u: goto label_7F258238;
    case 0x7F258250u: goto label_7F258250;
    case 0x7F2582ACu: goto label_7F2582AC;
    case 0x7F2582C4u: goto label_7F2582C4;
    case 0x7F258338u: goto label_7F258338;
    case 0x7F2583C8u: goto label_7F2583C8;
    case 0x7F258400u: goto label_7F258400;
    case 0x7F25840Cu: goto label_7F25840C;
    case 0x7F258460u: goto label_7F258460;
    case 0x7F258468u: goto label_7F258468;
    case 0x7F258470u: goto label_7F258470;
    case 0x7F258488u: goto label_7F258488;
    case 0x7F258490u: goto label_7F258490;
    case 0x7F2584BCu: goto label_7F2584BC;
    case 0x7F2584F4u: goto label_7F2584F4;
    case 0x7F258524u: goto label_7F258524;
    case 0x7F258558u: goto label_7F258558;
    case 0x7F258568u: goto label_7F258568;
    case 0x7F258574u: goto label_7F258574;
    case 0x7F2585CCu: goto label_7F2585CC;
    case 0x7F2585D4u: goto label_7F2585D4;
    case 0x7F2585DCu: goto label_7F2585DC;
    case 0x7F2585E4u: goto label_7F2585E4;
    case 0x7F258600u: goto label_7F258600;
    case 0x7F258620u: goto label_7F258620;
    case 0x7F25864Cu: goto label_7F25864C;
    case 0x7F258664u: goto label_7F258664;
    case 0x7F25868Cu: goto label_7F25868C;
    case 0x7F25869Cu: goto label_7F25869C;
    case 0x7F2586A4u: goto label_7F2586A4;
    case 0x7F2586BCu: goto label_7F2586BC;
    case 0x7F2586CCu: goto label_7F2586CC;
    case 0x7F2586E8u: goto label_7F2586E8;
    case 0x7F25870Cu: goto label_7F25870C;
    case 0x7F258714u: goto label_7F258714;
    case 0x7F25871Cu: goto label_7F25871C;
    case 0x7F258770u: goto label_7F258770;
    case 0x7F258784u: goto label_7F258784;
    case 0x7F25879Cu: goto label_7F25879C;
    case 0x7F2587D8u: goto label_7F2587D8;
    case 0x7F2588E0u: goto label_7F2588E0;
    case 0x7F2589A8u: goto label_7F2589A8;
    case 0x7F2589DCu: goto label_7F2589DC;
    case 0x7F258A40u: goto label_7F258A40;
    case 0x7F258A88u: goto label_7F258A88;
    case 0x7F258AF0u: goto label_7F258AF0;
    case 0x7F258B10u: goto label_7F258B10;
    case 0x7F258B3Cu: goto label_7F258B3C;
    case 0x7F258BC4u: goto label_7F258BC4;
    case 0x7F258BE0u: goto label_7F258BE0;
    case 0x7F258CA0u: goto label_7F258CA0;
    case 0x7F258CB0u: goto label_7F258CB0;
    case 0x7F258D38u: goto label_7F258D38;
    case 0x7F258D48u: goto label_7F258D48;
    case 0x7F258D50u: goto label_7F258D50;
    case 0x7F258D60u: goto label_7F258D60;
    case 0x7F258D6Cu: goto label_7F258D6C;
    case 0x7F258D74u: goto label_7F258D74;
    case 0x7F258D80u: goto label_7F258D80;
    case 0x7F258D88u: goto label_7F258D88;
    case 0x7F258D9Cu: goto label_7F258D9C;
    case 0x7F258DCCu: goto label_7F258DCC;
    case 0x7F258F0Cu: goto label_7F258F0C;
    case 0x7F258F44u: goto label_7F258F44;
    case 0x7F258FCCu: goto label_7F258FCC;
    case 0x7F258FD4u: goto label_7F258FD4;
    case 0x7F258FFCu: goto label_7F258FFC;
    case 0x7F259040u: goto label_7F259040;
    case 0x7F259060u: goto label_7F259060;
    case 0x7F259074u: goto label_7F259074;
    case 0x7F25918Cu: goto label_7F25918C;
    case 0x7F2591DCu: goto label_7F2591DC;
    case 0x7F2591F8u: goto label_7F2591F8;
    case 0x7F259230u: goto label_7F259230;
    case 0x7F259240u: goto label_7F259240;
    case 0x7F25927Cu: goto label_7F25927C;
    case 0x7F2592A0u: goto label_7F2592A0;
    case 0x7F2592C8u: goto label_7F2592C8;
    case 0x7F2592F0u: goto label_7F2592F0;
    case 0x7F25931Cu: goto label_7F25931C;
    case 0x7F259384u: goto label_7F259384;
    case 0x7F2593BCu: goto label_7F2593BC;
    case 0x7F2593CCu: goto label_7F2593CC;
    case 0x7F2593FCu: goto label_7F2593FC;
    case 0x7F259410u: goto label_7F259410;
    case 0x7F25945Cu: goto label_7F25945C;
    case 0x7F259470u: goto label_7F259470;
    case 0x7F2594B4u: goto label_7F2594B4;
    case 0x7F2594C8u: goto label_7F2594C8;
    case 0x7F25950Cu: goto label_7F25950C;
    case 0x7F259520u: goto label_7F259520;
    case 0x7F259564u: goto label_7F259564;
    case 0x7F259578u: goto label_7F259578;
    case 0x7F2595A0u: goto label_7F2595A0;
    case 0x7F2595ACu: goto label_7F2595AC;
    case 0x7F2595B0u: goto label_7F2595B0;
    case 0x7F259710u: goto label_7F259710;
    case 0x7F2597B8u: goto label_7F2597B8;
    case 0x7F2597D4u: goto label_7F2597D4;
    case 0x7F2598A8u: goto label_7F2598A8;
    case 0x7F2598B8u: goto label_7F2598B8;
    case 0x7F2598F8u: goto label_7F2598F8;
    case 0x7F259920u: goto label_7F259920;
    case 0x7F259954u: goto label_7F259954;
    case 0x7F259964u: goto label_7F259964;
    case 0x7F2599D8u: goto label_7F2599D8;
    case 0x7F259A54u: goto label_7F259A54;
    case 0x7F259AFCu: goto label_7F259AFC;
    case 0x7F259B40u: goto label_7F259B40;
    case 0x7F259BA0u: goto label_7F259BA0;
    case 0x7F259BB0u: goto label_7F259BB0;
    case 0x7F259BC0u: goto label_7F259BC0;
    case 0x7F259BD4u: goto label_7F259BD4;
    case 0x7F259BE4u: goto label_7F259BE4;
    case 0x7F259BECu: goto label_7F259BEC;
    case 0x7F259C14u: goto label_7F259C14;
    case 0x7F259C24u: goto label_7F259C24;
    case 0x7F259C30u: goto label_7F259C30;
    case 0x7F259C6Cu: goto label_7F259C6C;
    case 0x7F259C7Cu: goto label_7F259C7C;
    case 0x7F259C90u: goto label_7F259C90;
    case 0x7F259CD4u: goto label_7F259CD4;
    case 0x7F259CF8u: goto label_7F259CF8;
    case 0x7F259D14u: goto label_7F259D14;
    case 0x7F259D44u: goto label_7F259D44;
    case 0x7F259D5Cu: goto label_7F259D5C;
    case 0x7F259D90u: goto label_7F259D90;
    case 0x7F259DC0u: goto label_7F259DC0;
    case 0x7F259E18u: goto label_7F259E18;
    case 0x7F259E20u: goto label_7F259E20;
    case 0x7F259E28u: goto label_7F259E28;
    case 0x7F259E90u: goto label_7F259E90;
    case 0x7F259EB4u: goto label_7F259EB4;
    case 0x7F259ED4u: goto label_7F259ED4;
    case 0x7F259EF8u: goto label_7F259EF8;
    case 0x7F259F10u: goto label_7F259F10;
    case 0x7F259F68u: goto label_7F259F68;
    case 0x7F259FA4u: goto label_7F259FA4;
    case 0x7F259FB0u: goto label_7F259FB0;
    case 0x7F25A004u: goto label_7F25A004;
    case 0x7F25A020u: goto label_7F25A020;
    case 0x7F25A05Cu: goto label_7F25A05C;
    case 0x7F25A06Cu: goto label_7F25A06C;
    case 0x7F25A0D8u: goto label_7F25A0D8;
    case 0x7F25A0FCu: goto label_7F25A0FC;
    case 0x7F25A144u: goto label_7F25A144;
    case 0x7F25A17Cu: goto label_7F25A17C;
    case 0x7F25A198u: goto label_7F25A198;
    case 0x7F25A1D4u: goto label_7F25A1D4;
    case 0x7F25A204u: goto label_7F25A204;
    case 0x7F25A250u: goto label_7F25A250;
    case 0x7F25A288u: goto label_7F25A288;
    case 0x7F25A2A4u: goto label_7F25A2A4;
    case 0x7F25A2E0u: goto label_7F25A2E0;
    case 0x7F25A310u: goto label_7F25A310;
    case 0x7F25A344u: goto label_7F25A344;
    case 0x7F25A374u: goto label_7F25A374;
    case 0x7F25A4E0u: goto label_7F25A4E0;
    case 0x7F25A500u: goto label_7F25A500;
    case 0x7F25A530u: goto label_7F25A530;
    case 0x7F25A580u: goto label_7F25A580;
    case 0x7F25A604u: goto label_7F25A604;
    case 0x7F25A67Cu: goto label_7F25A67C;
    case 0x7F25A68Cu: goto label_7F25A68C;
    case 0x7F25A6A4u: goto label_7F25A6A4;
    case 0x7F25A6ACu: goto label_7F25A6AC;
    case 0x7F25A6BCu: goto label_7F25A6BC;
    case 0x7F25A6C0u: goto label_7F25A6C0;
    case 0x7F25A6D4u: goto label_7F25A6D4;
    case 0x7F25A6D8u: goto label_7F25A6D8;
    case 0x7F25A6F0u: goto label_7F25A6F0;
    case 0x7F25A700u: goto label_7F25A700;
    case 0x7F25A838u: goto label_7F25A838;
    case 0x7F25A8B4u: goto label_7F25A8B4;
    case 0x7F25A8B8u: goto label_7F25A8B8;
    case 0x7F25A8D4u: goto label_7F25A8D4;
    case 0x7F25A8FCu: goto label_7F25A8FC;
    case 0x7F25A91Cu: goto label_7F25A91C;
    case 0x7F25A950u: goto label_7F25A950;
    case 0x7F25A998u: goto label_7F25A998;
    case 0x7F25A9B4u: goto label_7F25A9B4;
    case 0x7F25A9ECu: goto label_7F25A9EC;
    case 0x7F25A9FCu: goto label_7F25A9FC;
    case 0x7F25AA68u: goto label_7F25AA68;
    case 0x7F25AB00u: goto label_7F25AB00;
    case 0x7F25AB10u: goto label_7F25AB10;
    case 0x7F25AB24u: goto label_7F25AB24;
    case 0x7F25AB34u: goto label_7F25AB34;
    case 0x7F25AC7Cu: goto label_7F25AC7C;
    case 0x7F25AC9Cu: goto label_7F25AC9C;
    case 0x7F25ADF8u: goto label_7F25ADF8;
    case 0x7F25AE20u: goto label_7F25AE20;
    case 0x7F25AE64u: goto label_7F25AE64;
    case 0x7F25AE98u: goto label_7F25AE98;
    case 0x7F25AF10u: goto label_7F25AF10;
    case 0x7F25AF40u: goto label_7F25AF40;
    case 0x7F25AF74u: goto label_7F25AF74;
    case 0x7F25AF84u: goto label_7F25AF84;
    case 0x7F25AFF8u: goto label_7F25AFF8;
    case 0x7F25B000u: goto label_7F25B000;
    case 0x7F25B008u: goto label_7F25B008;
    case 0x7F25B014u: goto label_7F25B014;
    case 0x7F25B038u: goto label_7F25B038;
    case 0x7F25B050u: goto label_7F25B050;
    case 0x7F25B140u: goto label_7F25B140;
    case 0x7F25B144u: goto label_7F25B144;
    case 0x7F25B150u: goto label_7F25B150;
    case 0x7F25B160u: goto label_7F25B160;
    case 0x7F25B168u: goto label_7F25B168;
    case 0x7F25B178u: goto label_7F25B178;
    case 0x7F25B188u: goto label_7F25B188;
    case 0x7F25B18Cu: goto label_7F25B18C;
    case 0x7F25B19Cu: goto label_7F25B19C;
    case 0x7F25B2B0u: goto label_7F25B2B0;
    case 0x7F25B2D0u: goto label_7F25B2D0;
    case 0x7F25B3C4u: goto label_7F25B3C4;
    case 0x7F25B3D8u: goto label_7F25B3D8;
    case 0x7F25B438u: goto label_7F25B438;
    case 0x7F25B4A0u: goto label_7F25B4A0;
    case 0x7F25B504u: goto label_7F25B504;
    case 0x7F25B530u: goto label_7F25B530;
    case 0x7F25B5B0u: goto label_7F25B5B0;
    case 0x7F25B5CCu: goto label_7F25B5CC;
    case 0x7F25B660u: goto label_7F25B660;
    case 0x7F25B670u: goto label_7F25B670;
    case 0x7F25B6ACu: goto label_7F25B6AC;
    case 0x7F25B6D0u: goto label_7F25B6D0;
    case 0x7F25B6F4u: goto label_7F25B6F4;
    case 0x7F25B714u: goto label_7F25B714;
    case 0x7F25B73Cu: goto label_7F25B73C;
    case 0x7F25B790u: goto label_7F25B790;
    case 0x7F25B79Cu: goto label_7F25B79C;
    case 0x7F25B7A0u: goto label_7F25B7A0;
    case 0x7F25B7ECu: goto label_7F25B7EC;
    case 0x7F25B80Cu: goto label_7F25B80C;
    case 0x7F25B82Cu: goto label_7F25B82C;
    case 0x7F25B864u: goto label_7F25B864;
    case 0x7F25B910u: goto label_7F25B910;
    case 0x7F25B92Cu: goto label_7F25B92C;
    case 0x7F25B9C4u: goto label_7F25B9C4;
    case 0x7F25B9D4u: goto label_7F25B9D4;
    case 0x7F25BA10u: goto label_7F25BA10;
    case 0x7F25BA68u: goto label_7F25BA68;
    case 0x7F25BAF0u: goto label_7F25BAF0;
    case 0x7F25BAFCu: goto label_7F25BAFC;
    case 0x7F25BB08u: goto label_7F25BB08;
    case 0x7F25BB18u: goto label_7F25BB18;
    case 0x7F25BB28u: goto label_7F25BB28;
    case 0x7F25BB38u: goto label_7F25BB38;
    case 0x7F25BB48u: goto label_7F25BB48;
    case 0x7F25BB60u: goto label_7F25BB60;
    case 0x7F25BB84u: goto label_7F25BB84;
    case 0x7F25BBD4u: goto label_7F25BBD4;
    case 0x7F25BC60u: goto label_7F25BC60;
    case 0x7F25BC8Cu: goto label_7F25BC8C;
    case 0x7F25BCE4u: goto label_7F25BCE4;
    case 0x7F25BD30u: goto label_7F25BD30;
    case 0x7F25BD64u: goto label_7F25BD64;
    case 0x7F25BDE0u: goto label_7F25BDE0;
    case 0x7F25BE4Cu: goto label_7F25BE4C;
    case 0x7F25BE58u: goto label_7F25BE58;
    case 0x7F25BE64u: goto label_7F25BE64;
    case 0x7F25BE78u: goto label_7F25BE78;
    case 0x7F25BE88u: goto label_7F25BE88;
    case 0x7F25BE98u: goto label_7F25BE98;
    case 0x7F25BEA4u: goto label_7F25BEA4;
    case 0x7F25BEA8u: goto label_7F25BEA8;
    case 0x7F25BEB8u: goto label_7F25BEB8;
    case 0x7F25BED4u: goto label_7F25BED4;
    case 0x7F25BEE4u: goto label_7F25BEE4;
    case 0x7F25BF08u: goto label_7F25BF08;
    case 0x7F25BF24u: goto label_7F25BF24;
    case 0x7F25BF3Cu: goto label_7F25BF3C;
    case 0x7F25BF84u: goto label_7F25BF84;
    case 0x7F25BF94u: goto label_7F25BF94;
    case 0x7F25BFECu: goto label_7F25BFEC;
    case 0x7F25C074u: goto label_7F25C074;
    case 0x7F25C094u: goto label_7F25C094;
    case 0x7F25C0ACu: goto label_7F25C0AC;
    case 0x7F25C0BCu: goto label_7F25C0BC;
    case 0x7F25C0C0u: goto label_7F25C0C0;
    default: return;
    }
}

