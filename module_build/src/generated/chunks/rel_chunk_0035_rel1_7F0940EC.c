// DolRecomp output
#include "../generated.h"

static void loop_7F09422C(CPUState* ctx) {
label_7F09422C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F09422Cu;
    // 7F09422C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F094230u;
    // 7F094230: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F094234u;
    // 7F094234: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F094238u;
    // 7F094238: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F09423C: bc    16, 0, 0x7F09422C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F09422Cu;
                return;
            }
            goto label_7F09422C;
        }
    }

    ctx->pc = 0x7F094240u;
}

static void loop_7F094F18(CPUState* ctx) {
label_7F094F18:
    ctx->downcount -= 5;
    ctx->pc = 0x7F094F18u;
    // 7F094F18: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F094F1Cu;
    // 7F094F1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F094F20u;
    // 7F094F20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F094F24u;
    // 7F094F24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F094F28: bc    16, 0, 0x7F094F18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094F18u;
                return;
            }
            goto label_7F094F18;
        }
    }

    ctx->pc = 0x7F094F2Cu;
}

static void loop_7F097C18(CPUState* ctx) {
label_7F097C18:
    ctx->downcount -= 5;
    ctx->pc = 0x7F097C18u;
    // 7F097C18: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F097C1Cu;
    // 7F097C1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F097C20u;
    // 7F097C20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F097C24u;
    // 7F097C24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F097C28: bc    16, 0, 0x7F097C18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097C18u;
                return;
            }
            goto label_7F097C18;
        }
    }

    ctx->pc = 0x7F097C2Cu;
}

void func_7F0940EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0940ECu: goto label_7F0940EC;
    case 0x7F0940F0u: goto label_7F0940F0;
    case 0x7F0940F4u: goto label_7F0940F4;
    case 0x7F0940F8u: goto label_7F0940F8;
    case 0x7F0940FCu: goto label_7F0940FC;
    case 0x7F094100u: goto label_7F094100;
    case 0x7F094104u: goto label_7F094104;
    case 0x7F094108u: goto label_7F094108;
    case 0x7F09410Cu: goto label_7F09410C;
    case 0x7F094110u: goto label_7F094110;
    case 0x7F094114u: goto label_7F094114;
    case 0x7F094118u: goto label_7F094118;
    case 0x7F09411Cu: goto label_7F09411C;
    case 0x7F094120u: goto label_7F094120;
    case 0x7F094124u: goto label_7F094124;
    case 0x7F094128u: goto label_7F094128;
    case 0x7F09412Cu: goto label_7F09412C;
    case 0x7F094130u: goto label_7F094130;
    case 0x7F094134u: goto label_7F094134;
    case 0x7F094138u: goto label_7F094138;
    case 0x7F09413Cu: goto label_7F09413C;
    case 0x7F094140u: goto label_7F094140;
    case 0x7F094144u: goto label_7F094144;
    case 0x7F094148u: goto label_7F094148;
    case 0x7F09414Cu: goto label_7F09414C;
    case 0x7F094150u: goto label_7F094150;
    case 0x7F094154u: goto label_7F094154;
    case 0x7F094158u: goto label_7F094158;
    case 0x7F09415Cu: goto label_7F09415C;
    case 0x7F094160u: goto label_7F094160;
    case 0x7F094164u: goto label_7F094164;
    case 0x7F094168u: goto label_7F094168;
    case 0x7F09416Cu: goto label_7F09416C;
    case 0x7F094170u: goto label_7F094170;
    case 0x7F094174u: goto label_7F094174;
    case 0x7F094178u: goto label_7F094178;
    case 0x7F09417Cu: goto label_7F09417C;
    case 0x7F094180u: goto label_7F094180;
    case 0x7F094184u: goto label_7F094184;
    case 0x7F094188u: goto label_7F094188;
    case 0x7F09418Cu: goto label_7F09418C;
    case 0x7F094190u: goto label_7F094190;
    case 0x7F094194u: goto label_7F094194;
    case 0x7F094198u: goto label_7F094198;
    case 0x7F09419Cu: goto label_7F09419C;
    case 0x7F0941A0u: goto label_7F0941A0;
    case 0x7F0941A4u: goto label_7F0941A4;
    case 0x7F0941A8u: goto label_7F0941A8;
    case 0x7F0941ACu: goto label_7F0941AC;
    case 0x7F0941B0u: goto label_7F0941B0;
    case 0x7F0941B4u: goto label_7F0941B4;
    case 0x7F0941B8u: goto label_7F0941B8;
    case 0x7F0941BCu: goto label_7F0941BC;
    case 0x7F0941C0u: goto label_7F0941C0;
    case 0x7F0941C4u: goto label_7F0941C4;
    case 0x7F0941C8u: goto label_7F0941C8;
    case 0x7F0941CCu: goto label_7F0941CC;
    case 0x7F0941D0u: goto label_7F0941D0;
    case 0x7F0941D4u: goto label_7F0941D4;
    case 0x7F0941D8u: goto label_7F0941D8;
    case 0x7F0941DCu: goto label_7F0941DC;
    case 0x7F0941E0u: goto label_7F0941E0;
    case 0x7F0941E4u: goto label_7F0941E4;
    case 0x7F0941E8u: goto label_7F0941E8;
    case 0x7F0941ECu: goto label_7F0941EC;
    case 0x7F0941F0u: goto label_7F0941F0;
    case 0x7F0941F4u: goto label_7F0941F4;
    case 0x7F0941F8u: goto label_7F0941F8;
    case 0x7F0941FCu: goto label_7F0941FC;
    case 0x7F094200u: goto label_7F094200;
    case 0x7F094204u: goto label_7F094204;
    case 0x7F094208u: goto label_7F094208;
    case 0x7F09420Cu: goto label_7F09420C;
    case 0x7F094210u: goto label_7F094210;
    case 0x7F094214u: goto label_7F094214;
    case 0x7F094218u: goto label_7F094218;
    case 0x7F09421Cu: goto label_7F09421C;
    case 0x7F094220u: goto label_7F094220;
    case 0x7F094224u: goto label_7F094224;
    case 0x7F094228u: goto label_7F094228;
    case 0x7F09422Cu: goto label_7F09422C;
    case 0x7F094230u: goto label_7F094230;
    case 0x7F094234u: goto label_7F094234;
    case 0x7F094238u: goto label_7F094238;
    case 0x7F09423Cu: goto label_7F09423C;
    case 0x7F094240u: goto label_7F094240;
    case 0x7F094244u: goto label_7F094244;
    case 0x7F094248u: goto label_7F094248;
    case 0x7F09424Cu: goto label_7F09424C;
    case 0x7F094250u: goto label_7F094250;
    case 0x7F094254u: goto label_7F094254;
    case 0x7F094258u: goto label_7F094258;
    case 0x7F09425Cu: goto label_7F09425C;
    case 0x7F094260u: goto label_7F094260;
    case 0x7F094264u: goto label_7F094264;
    case 0x7F094268u: goto label_7F094268;
    case 0x7F09426Cu: goto label_7F09426C;
    case 0x7F094270u: goto label_7F094270;
    case 0x7F094274u: goto label_7F094274;
    case 0x7F094278u: goto label_7F094278;
    case 0x7F09427Cu: goto label_7F09427C;
    case 0x7F094280u: goto label_7F094280;
    case 0x7F094284u: goto label_7F094284;
    case 0x7F094288u: goto label_7F094288;
    case 0x7F09428Cu: goto label_7F09428C;
    case 0x7F094290u: goto label_7F094290;
    case 0x7F094294u: goto label_7F094294;
    case 0x7F094298u: goto label_7F094298;
    case 0x7F09429Cu: goto label_7F09429C;
    case 0x7F0942A0u: goto label_7F0942A0;
    case 0x7F0942A4u: goto label_7F0942A4;
    case 0x7F0942A8u: goto label_7F0942A8;
    case 0x7F0942ACu: goto label_7F0942AC;
    case 0x7F0942B0u: goto label_7F0942B0;
    case 0x7F0942B4u: goto label_7F0942B4;
    case 0x7F0942B8u: goto label_7F0942B8;
    case 0x7F0942BCu: goto label_7F0942BC;
    case 0x7F0942C0u: goto label_7F0942C0;
    case 0x7F0942C4u: goto label_7F0942C4;
    case 0x7F0942C8u: goto label_7F0942C8;
    case 0x7F0942CCu: goto label_7F0942CC;
    case 0x7F0942D0u: goto label_7F0942D0;
    case 0x7F0942D4u: goto label_7F0942D4;
    case 0x7F0942D8u: goto label_7F0942D8;
    case 0x7F0942DCu: goto label_7F0942DC;
    case 0x7F0942E0u: goto label_7F0942E0;
    case 0x7F0942E4u: goto label_7F0942E4;
    case 0x7F0942E8u: goto label_7F0942E8;
    case 0x7F0942ECu: goto label_7F0942EC;
    case 0x7F0942F0u: goto label_7F0942F0;
    case 0x7F0942F4u: goto label_7F0942F4;
    case 0x7F0942F8u: goto label_7F0942F8;
    case 0x7F0942FCu: goto label_7F0942FC;
    case 0x7F094300u: goto label_7F094300;
    case 0x7F094304u: goto label_7F094304;
    case 0x7F094308u: goto label_7F094308;
    case 0x7F09430Cu: goto label_7F09430C;
    case 0x7F094310u: goto label_7F094310;
    case 0x7F094314u: goto label_7F094314;
    case 0x7F094318u: goto label_7F094318;
    case 0x7F09431Cu: goto label_7F09431C;
    case 0x7F094320u: goto label_7F094320;
    case 0x7F094324u: goto label_7F094324;
    case 0x7F094328u: goto label_7F094328;
    case 0x7F09432Cu: goto label_7F09432C;
    case 0x7F094330u: goto label_7F094330;
    case 0x7F094334u: goto label_7F094334;
    case 0x7F094338u: goto label_7F094338;
    case 0x7F09433Cu: goto label_7F09433C;
    case 0x7F094340u: goto label_7F094340;
    case 0x7F094344u: goto label_7F094344;
    case 0x7F094348u: goto label_7F094348;
    case 0x7F09434Cu: goto label_7F09434C;
    case 0x7F094350u: goto label_7F094350;
    case 0x7F094354u: goto label_7F094354;
    case 0x7F094358u: goto label_7F094358;
    case 0x7F09435Cu: goto label_7F09435C;
    case 0x7F094360u: goto label_7F094360;
    case 0x7F094364u: goto label_7F094364;
    case 0x7F094368u: goto label_7F094368;
    case 0x7F09436Cu: goto label_7F09436C;
    case 0x7F094370u: goto label_7F094370;
    case 0x7F094374u: goto label_7F094374;
    case 0x7F094378u: goto label_7F094378;
    case 0x7F09437Cu: goto label_7F09437C;
    case 0x7F094380u: goto label_7F094380;
    case 0x7F094384u: goto label_7F094384;
    case 0x7F094388u: goto label_7F094388;
    case 0x7F09438Cu: goto label_7F09438C;
    case 0x7F094390u: goto label_7F094390;
    case 0x7F094394u: goto label_7F094394;
    case 0x7F094398u: goto label_7F094398;
    case 0x7F09439Cu: goto label_7F09439C;
    case 0x7F0943A0u: goto label_7F0943A0;
    case 0x7F0943A4u: goto label_7F0943A4;
    case 0x7F0943A8u: goto label_7F0943A8;
    case 0x7F0943ACu: goto label_7F0943AC;
    case 0x7F0943B0u: goto label_7F0943B0;
    case 0x7F0943B4u: goto label_7F0943B4;
    case 0x7F0943B8u: goto label_7F0943B8;
    case 0x7F0943BCu: goto label_7F0943BC;
    case 0x7F0943C0u: goto label_7F0943C0;
    case 0x7F0943C4u: goto label_7F0943C4;
    case 0x7F0943C8u: goto label_7F0943C8;
    case 0x7F0943CCu: goto label_7F0943CC;
    case 0x7F0943D0u: goto label_7F0943D0;
    case 0x7F0943D4u: goto label_7F0943D4;
    case 0x7F0943D8u: goto label_7F0943D8;
    case 0x7F0943DCu: goto label_7F0943DC;
    case 0x7F0943E0u: goto label_7F0943E0;
    case 0x7F0943E4u: goto label_7F0943E4;
    case 0x7F0943E8u: goto label_7F0943E8;
    case 0x7F0943ECu: goto label_7F0943EC;
    case 0x7F0943F0u: goto label_7F0943F0;
    case 0x7F0943F4u: goto label_7F0943F4;
    case 0x7F0943F8u: goto label_7F0943F8;
    case 0x7F0943FCu: goto label_7F0943FC;
    case 0x7F094400u: goto label_7F094400;
    case 0x7F094404u: goto label_7F094404;
    case 0x7F094408u: goto label_7F094408;
    case 0x7F09440Cu: goto label_7F09440C;
    case 0x7F094410u: goto label_7F094410;
    case 0x7F094414u: goto label_7F094414;
    case 0x7F094418u: goto label_7F094418;
    case 0x7F09441Cu: goto label_7F09441C;
    case 0x7F094420u: goto label_7F094420;
    case 0x7F094424u: goto label_7F094424;
    case 0x7F094428u: goto label_7F094428;
    case 0x7F09442Cu: goto label_7F09442C;
    case 0x7F094430u: goto label_7F094430;
    case 0x7F094434u: goto label_7F094434;
    case 0x7F094438u: goto label_7F094438;
    case 0x7F09443Cu: goto label_7F09443C;
    case 0x7F094440u: goto label_7F094440;
    case 0x7F094444u: goto label_7F094444;
    case 0x7F094448u: goto label_7F094448;
    case 0x7F09444Cu: goto label_7F09444C;
    case 0x7F094450u: goto label_7F094450;
    case 0x7F094454u: goto label_7F094454;
    case 0x7F094458u: goto label_7F094458;
    case 0x7F09445Cu: goto label_7F09445C;
    case 0x7F094460u: goto label_7F094460;
    case 0x7F094464u: goto label_7F094464;
    case 0x7F094468u: goto label_7F094468;
    case 0x7F09446Cu: goto label_7F09446C;
    case 0x7F094470u: goto label_7F094470;
    case 0x7F094474u: goto label_7F094474;
    case 0x7F094478u: goto label_7F094478;
    case 0x7F09447Cu: goto label_7F09447C;
    case 0x7F094480u: goto label_7F094480;
    case 0x7F094484u: goto label_7F094484;
    case 0x7F094488u: goto label_7F094488;
    case 0x7F09448Cu: goto label_7F09448C;
    case 0x7F094490u: goto label_7F094490;
    case 0x7F094494u: goto label_7F094494;
    case 0x7F094498u: goto label_7F094498;
    case 0x7F09449Cu: goto label_7F09449C;
    case 0x7F0944A0u: goto label_7F0944A0;
    case 0x7F0944A4u: goto label_7F0944A4;
    case 0x7F0944A8u: goto label_7F0944A8;
    case 0x7F0944ACu: goto label_7F0944AC;
    case 0x7F0944B0u: goto label_7F0944B0;
    case 0x7F0944B4u: goto label_7F0944B4;
    case 0x7F0944B8u: goto label_7F0944B8;
    case 0x7F0944BCu: goto label_7F0944BC;
    case 0x7F0944C0u: goto label_7F0944C0;
    case 0x7F0944C4u: goto label_7F0944C4;
    case 0x7F0944C8u: goto label_7F0944C8;
    case 0x7F0944CCu: goto label_7F0944CC;
    case 0x7F0944D0u: goto label_7F0944D0;
    case 0x7F0944D4u: goto label_7F0944D4;
    case 0x7F0944D8u: goto label_7F0944D8;
    case 0x7F0944DCu: goto label_7F0944DC;
    case 0x7F0944E0u: goto label_7F0944E0;
    case 0x7F0944E4u: goto label_7F0944E4;
    case 0x7F0944E8u: goto label_7F0944E8;
    case 0x7F0944ECu: goto label_7F0944EC;
    case 0x7F0944F0u: goto label_7F0944F0;
    case 0x7F0944F4u: goto label_7F0944F4;
    case 0x7F0944F8u: goto label_7F0944F8;
    case 0x7F0944FCu: goto label_7F0944FC;
    case 0x7F094500u: goto label_7F094500;
    case 0x7F094504u: goto label_7F094504;
    case 0x7F094508u: goto label_7F094508;
    case 0x7F09450Cu: goto label_7F09450C;
    case 0x7F094510u: goto label_7F094510;
    case 0x7F094514u: goto label_7F094514;
    case 0x7F094518u: goto label_7F094518;
    case 0x7F09451Cu: goto label_7F09451C;
    case 0x7F094520u: goto label_7F094520;
    case 0x7F094524u: goto label_7F094524;
    case 0x7F094528u: goto label_7F094528;
    case 0x7F09452Cu: goto label_7F09452C;
    case 0x7F094530u: goto label_7F094530;
    case 0x7F094534u: goto label_7F094534;
    case 0x7F094538u: goto label_7F094538;
    case 0x7F09453Cu: goto label_7F09453C;
    case 0x7F094540u: goto label_7F094540;
    case 0x7F094544u: goto label_7F094544;
    case 0x7F094548u: goto label_7F094548;
    case 0x7F09454Cu: goto label_7F09454C;
    case 0x7F094550u: goto label_7F094550;
    case 0x7F094554u: goto label_7F094554;
    case 0x7F094558u: goto label_7F094558;
    case 0x7F09455Cu: goto label_7F09455C;
    case 0x7F094560u: goto label_7F094560;
    case 0x7F094564u: goto label_7F094564;
    case 0x7F094568u: goto label_7F094568;
    case 0x7F09456Cu: goto label_7F09456C;
    case 0x7F094570u: goto label_7F094570;
    case 0x7F094574u: goto label_7F094574;
    case 0x7F094578u: goto label_7F094578;
    case 0x7F09457Cu: goto label_7F09457C;
    case 0x7F094580u: goto label_7F094580;
    case 0x7F094584u: goto label_7F094584;
    case 0x7F094588u: goto label_7F094588;
    case 0x7F09458Cu: goto label_7F09458C;
    case 0x7F094590u: goto label_7F094590;
    case 0x7F094594u: goto label_7F094594;
    case 0x7F094598u: goto label_7F094598;
    case 0x7F09459Cu: goto label_7F09459C;
    case 0x7F0945A0u: goto label_7F0945A0;
    case 0x7F0945A4u: goto label_7F0945A4;
    case 0x7F0945A8u: goto label_7F0945A8;
    case 0x7F0945ACu: goto label_7F0945AC;
    case 0x7F0945B0u: goto label_7F0945B0;
    case 0x7F0945B4u: goto label_7F0945B4;
    case 0x7F0945B8u: goto label_7F0945B8;
    case 0x7F0945BCu: goto label_7F0945BC;
    case 0x7F0945C0u: goto label_7F0945C0;
    case 0x7F0945C4u: goto label_7F0945C4;
    case 0x7F0945C8u: goto label_7F0945C8;
    case 0x7F0945CCu: goto label_7F0945CC;
    case 0x7F0945D0u: goto label_7F0945D0;
    case 0x7F0945D4u: goto label_7F0945D4;
    case 0x7F0945D8u: goto label_7F0945D8;
    case 0x7F0945DCu: goto label_7F0945DC;
    case 0x7F0945E0u: goto label_7F0945E0;
    case 0x7F0945E4u: goto label_7F0945E4;
    case 0x7F0945E8u: goto label_7F0945E8;
    case 0x7F0945ECu: goto label_7F0945EC;
    case 0x7F0945F0u: goto label_7F0945F0;
    case 0x7F0945F4u: goto label_7F0945F4;
    case 0x7F0945F8u: goto label_7F0945F8;
    case 0x7F0945FCu: goto label_7F0945FC;
    case 0x7F094600u: goto label_7F094600;
    case 0x7F094604u: goto label_7F094604;
    case 0x7F094608u: goto label_7F094608;
    case 0x7F09460Cu: goto label_7F09460C;
    case 0x7F094610u: goto label_7F094610;
    case 0x7F094614u: goto label_7F094614;
    case 0x7F094618u: goto label_7F094618;
    case 0x7F09461Cu: goto label_7F09461C;
    case 0x7F094620u: goto label_7F094620;
    case 0x7F094624u: goto label_7F094624;
    case 0x7F094628u: goto label_7F094628;
    case 0x7F09462Cu: goto label_7F09462C;
    case 0x7F094630u: goto label_7F094630;
    case 0x7F094634u: goto label_7F094634;
    case 0x7F094638u: goto label_7F094638;
    case 0x7F09463Cu: goto label_7F09463C;
    case 0x7F094640u: goto label_7F094640;
    case 0x7F094644u: goto label_7F094644;
    case 0x7F094648u: goto label_7F094648;
    case 0x7F09464Cu: goto label_7F09464C;
    case 0x7F094650u: goto label_7F094650;
    case 0x7F094654u: goto label_7F094654;
    case 0x7F094658u: goto label_7F094658;
    case 0x7F09465Cu: goto label_7F09465C;
    case 0x7F094660u: goto label_7F094660;
    case 0x7F094664u: goto label_7F094664;
    case 0x7F094668u: goto label_7F094668;
    case 0x7F09466Cu: goto label_7F09466C;
    case 0x7F094670u: goto label_7F094670;
    case 0x7F094674u: goto label_7F094674;
    case 0x7F094678u: goto label_7F094678;
    case 0x7F09467Cu: goto label_7F09467C;
    case 0x7F094680u: goto label_7F094680;
    case 0x7F094684u: goto label_7F094684;
    case 0x7F094688u: goto label_7F094688;
    case 0x7F09468Cu: goto label_7F09468C;
    case 0x7F094690u: goto label_7F094690;
    case 0x7F094694u: goto label_7F094694;
    case 0x7F094698u: goto label_7F094698;
    case 0x7F09469Cu: goto label_7F09469C;
    case 0x7F0946A0u: goto label_7F0946A0;
    case 0x7F0946A4u: goto label_7F0946A4;
    case 0x7F0946A8u: goto label_7F0946A8;
    case 0x7F0946ACu: goto label_7F0946AC;
    case 0x7F0946B0u: goto label_7F0946B0;
    case 0x7F0946B4u: goto label_7F0946B4;
    case 0x7F0946B8u: goto label_7F0946B8;
    case 0x7F0946BCu: goto label_7F0946BC;
    case 0x7F0946C0u: goto label_7F0946C0;
    case 0x7F0946C4u: goto label_7F0946C4;
    case 0x7F0946C8u: goto label_7F0946C8;
    case 0x7F0946CCu: goto label_7F0946CC;
    case 0x7F0946D0u: goto label_7F0946D0;
    case 0x7F0946D4u: goto label_7F0946D4;
    case 0x7F0946D8u: goto label_7F0946D8;
    case 0x7F0946DCu: goto label_7F0946DC;
    case 0x7F0946E0u: goto label_7F0946E0;
    case 0x7F0946E4u: goto label_7F0946E4;
    case 0x7F0946E8u: goto label_7F0946E8;
    case 0x7F0946ECu: goto label_7F0946EC;
    case 0x7F0946F0u: goto label_7F0946F0;
    case 0x7F0946F4u: goto label_7F0946F4;
    case 0x7F0946F8u: goto label_7F0946F8;
    case 0x7F0946FCu: goto label_7F0946FC;
    case 0x7F094700u: goto label_7F094700;
    case 0x7F094704u: goto label_7F094704;
    case 0x7F094708u: goto label_7F094708;
    case 0x7F09470Cu: goto label_7F09470C;
    case 0x7F094710u: goto label_7F094710;
    case 0x7F094714u: goto label_7F094714;
    case 0x7F094718u: goto label_7F094718;
    case 0x7F09471Cu: goto label_7F09471C;
    case 0x7F094720u: goto label_7F094720;
    case 0x7F094724u: goto label_7F094724;
    case 0x7F094728u: goto label_7F094728;
    case 0x7F09472Cu: goto label_7F09472C;
    case 0x7F094730u: goto label_7F094730;
    case 0x7F094734u: goto label_7F094734;
    case 0x7F094738u: goto label_7F094738;
    case 0x7F09473Cu: goto label_7F09473C;
    case 0x7F094740u: goto label_7F094740;
    case 0x7F094744u: goto label_7F094744;
    case 0x7F094748u: goto label_7F094748;
    case 0x7F09474Cu: goto label_7F09474C;
    case 0x7F094750u: goto label_7F094750;
    case 0x7F094754u: goto label_7F094754;
    case 0x7F094758u: goto label_7F094758;
    case 0x7F09475Cu: goto label_7F09475C;
    case 0x7F094760u: goto label_7F094760;
    case 0x7F094764u: goto label_7F094764;
    case 0x7F094768u: goto label_7F094768;
    case 0x7F09476Cu: goto label_7F09476C;
    case 0x7F094770u: goto label_7F094770;
    case 0x7F094774u: goto label_7F094774;
    case 0x7F094778u: goto label_7F094778;
    case 0x7F09477Cu: goto label_7F09477C;
    case 0x7F094780u: goto label_7F094780;
    case 0x7F094784u: goto label_7F094784;
    case 0x7F094788u: goto label_7F094788;
    case 0x7F09478Cu: goto label_7F09478C;
    case 0x7F094790u: goto label_7F094790;
    case 0x7F094794u: goto label_7F094794;
    case 0x7F094798u: goto label_7F094798;
    case 0x7F09479Cu: goto label_7F09479C;
    case 0x7F0947A0u: goto label_7F0947A0;
    case 0x7F0947A4u: goto label_7F0947A4;
    case 0x7F0947A8u: goto label_7F0947A8;
    case 0x7F0947ACu: goto label_7F0947AC;
    case 0x7F0947B0u: goto label_7F0947B0;
    case 0x7F0947B4u: goto label_7F0947B4;
    case 0x7F0947B8u: goto label_7F0947B8;
    case 0x7F0947BCu: goto label_7F0947BC;
    case 0x7F0947C0u: goto label_7F0947C0;
    case 0x7F0947C4u: goto label_7F0947C4;
    case 0x7F0947C8u: goto label_7F0947C8;
    case 0x7F0947CCu: goto label_7F0947CC;
    case 0x7F0947D0u: goto label_7F0947D0;
    case 0x7F0947D4u: goto label_7F0947D4;
    case 0x7F0947D8u: goto label_7F0947D8;
    case 0x7F0947DCu: goto label_7F0947DC;
    case 0x7F0947E0u: goto label_7F0947E0;
    case 0x7F0947E4u: goto label_7F0947E4;
    case 0x7F0947E8u: goto label_7F0947E8;
    case 0x7F0947ECu: goto label_7F0947EC;
    case 0x7F0947F0u: goto label_7F0947F0;
    case 0x7F0947F4u: goto label_7F0947F4;
    case 0x7F0947F8u: goto label_7F0947F8;
    case 0x7F0947FCu: goto label_7F0947FC;
    case 0x7F094800u: goto label_7F094800;
    case 0x7F094804u: goto label_7F094804;
    case 0x7F094808u: goto label_7F094808;
    case 0x7F09480Cu: goto label_7F09480C;
    case 0x7F094810u: goto label_7F094810;
    case 0x7F094814u: goto label_7F094814;
    case 0x7F094818u: goto label_7F094818;
    case 0x7F09481Cu: goto label_7F09481C;
    case 0x7F094820u: goto label_7F094820;
    case 0x7F094824u: goto label_7F094824;
    case 0x7F094828u: goto label_7F094828;
    case 0x7F09482Cu: goto label_7F09482C;
    case 0x7F094830u: goto label_7F094830;
    case 0x7F094834u: goto label_7F094834;
    case 0x7F094838u: goto label_7F094838;
    case 0x7F09483Cu: goto label_7F09483C;
    case 0x7F094840u: goto label_7F094840;
    case 0x7F094844u: goto label_7F094844;
    case 0x7F094848u: goto label_7F094848;
    case 0x7F09484Cu: goto label_7F09484C;
    case 0x7F094850u: goto label_7F094850;
    case 0x7F094854u: goto label_7F094854;
    case 0x7F094858u: goto label_7F094858;
    case 0x7F09485Cu: goto label_7F09485C;
    case 0x7F094860u: goto label_7F094860;
    case 0x7F094864u: goto label_7F094864;
    case 0x7F094868u: goto label_7F094868;
    case 0x7F09486Cu: goto label_7F09486C;
    case 0x7F094870u: goto label_7F094870;
    case 0x7F094874u: goto label_7F094874;
    case 0x7F094878u: goto label_7F094878;
    case 0x7F09487Cu: goto label_7F09487C;
    case 0x7F094880u: goto label_7F094880;
    case 0x7F094884u: goto label_7F094884;
    case 0x7F094888u: goto label_7F094888;
    case 0x7F09488Cu: goto label_7F09488C;
    case 0x7F094890u: goto label_7F094890;
    case 0x7F094894u: goto label_7F094894;
    case 0x7F094898u: goto label_7F094898;
    case 0x7F09489Cu: goto label_7F09489C;
    case 0x7F0948A0u: goto label_7F0948A0;
    case 0x7F0948A4u: goto label_7F0948A4;
    case 0x7F0948A8u: goto label_7F0948A8;
    case 0x7F0948ACu: goto label_7F0948AC;
    case 0x7F0948B0u: goto label_7F0948B0;
    case 0x7F0948B4u: goto label_7F0948B4;
    case 0x7F0948B8u: goto label_7F0948B8;
    case 0x7F0948BCu: goto label_7F0948BC;
    case 0x7F0948C0u: goto label_7F0948C0;
    case 0x7F0948C4u: goto label_7F0948C4;
    case 0x7F0948C8u: goto label_7F0948C8;
    case 0x7F0948CCu: goto label_7F0948CC;
    case 0x7F0948D0u: goto label_7F0948D0;
    case 0x7F0948D4u: goto label_7F0948D4;
    case 0x7F0948D8u: goto label_7F0948D8;
    case 0x7F0948DCu: goto label_7F0948DC;
    case 0x7F0948E0u: goto label_7F0948E0;
    case 0x7F0948E4u: goto label_7F0948E4;
    case 0x7F0948E8u: goto label_7F0948E8;
    case 0x7F0948ECu: goto label_7F0948EC;
    case 0x7F0948F0u: goto label_7F0948F0;
    case 0x7F0948F4u: goto label_7F0948F4;
    case 0x7F0948F8u: goto label_7F0948F8;
    case 0x7F0948FCu: goto label_7F0948FC;
    case 0x7F094900u: goto label_7F094900;
    case 0x7F094904u: goto label_7F094904;
    case 0x7F094908u: goto label_7F094908;
    case 0x7F09490Cu: goto label_7F09490C;
    case 0x7F094910u: goto label_7F094910;
    case 0x7F094914u: goto label_7F094914;
    case 0x7F094918u: goto label_7F094918;
    case 0x7F09491Cu: goto label_7F09491C;
    case 0x7F094920u: goto label_7F094920;
    case 0x7F094924u: goto label_7F094924;
    case 0x7F094928u: goto label_7F094928;
    case 0x7F09492Cu: goto label_7F09492C;
    case 0x7F094930u: goto label_7F094930;
    case 0x7F094934u: goto label_7F094934;
    case 0x7F094938u: goto label_7F094938;
    case 0x7F09493Cu: goto label_7F09493C;
    case 0x7F094940u: goto label_7F094940;
    case 0x7F094944u: goto label_7F094944;
    case 0x7F094948u: goto label_7F094948;
    case 0x7F09494Cu: goto label_7F09494C;
    case 0x7F094950u: goto label_7F094950;
    case 0x7F094954u: goto label_7F094954;
    case 0x7F094958u: goto label_7F094958;
    case 0x7F09495Cu: goto label_7F09495C;
    case 0x7F094960u: goto label_7F094960;
    case 0x7F094964u: goto label_7F094964;
    case 0x7F094968u: goto label_7F094968;
    case 0x7F09496Cu: goto label_7F09496C;
    case 0x7F094970u: goto label_7F094970;
    case 0x7F094974u: goto label_7F094974;
    case 0x7F094978u: goto label_7F094978;
    case 0x7F09497Cu: goto label_7F09497C;
    case 0x7F094980u: goto label_7F094980;
    case 0x7F094984u: goto label_7F094984;
    case 0x7F094988u: goto label_7F094988;
    case 0x7F09498Cu: goto label_7F09498C;
    case 0x7F094990u: goto label_7F094990;
    case 0x7F094994u: goto label_7F094994;
    case 0x7F094998u: goto label_7F094998;
    case 0x7F09499Cu: goto label_7F09499C;
    case 0x7F0949A0u: goto label_7F0949A0;
    case 0x7F0949A4u: goto label_7F0949A4;
    case 0x7F0949A8u: goto label_7F0949A8;
    case 0x7F0949ACu: goto label_7F0949AC;
    case 0x7F0949B0u: goto label_7F0949B0;
    case 0x7F0949B4u: goto label_7F0949B4;
    case 0x7F0949B8u: goto label_7F0949B8;
    case 0x7F0949BCu: goto label_7F0949BC;
    case 0x7F0949C0u: goto label_7F0949C0;
    case 0x7F0949C4u: goto label_7F0949C4;
    case 0x7F0949C8u: goto label_7F0949C8;
    case 0x7F0949CCu: goto label_7F0949CC;
    case 0x7F0949D0u: goto label_7F0949D0;
    case 0x7F0949D4u: goto label_7F0949D4;
    case 0x7F0949D8u: goto label_7F0949D8;
    case 0x7F0949DCu: goto label_7F0949DC;
    case 0x7F0949E0u: goto label_7F0949E0;
    case 0x7F0949E4u: goto label_7F0949E4;
    case 0x7F0949E8u: goto label_7F0949E8;
    case 0x7F0949ECu: goto label_7F0949EC;
    case 0x7F0949F0u: goto label_7F0949F0;
    case 0x7F0949F4u: goto label_7F0949F4;
    case 0x7F0949F8u: goto label_7F0949F8;
    case 0x7F0949FCu: goto label_7F0949FC;
    case 0x7F094A00u: goto label_7F094A00;
    case 0x7F094A04u: goto label_7F094A04;
    case 0x7F094A08u: goto label_7F094A08;
    case 0x7F094A0Cu: goto label_7F094A0C;
    case 0x7F094A10u: goto label_7F094A10;
    case 0x7F094A14u: goto label_7F094A14;
    case 0x7F094A18u: goto label_7F094A18;
    case 0x7F094A1Cu: goto label_7F094A1C;
    case 0x7F094A20u: goto label_7F094A20;
    case 0x7F094A24u: goto label_7F094A24;
    case 0x7F094A28u: goto label_7F094A28;
    case 0x7F094A2Cu: goto label_7F094A2C;
    case 0x7F094A30u: goto label_7F094A30;
    case 0x7F094A34u: goto label_7F094A34;
    case 0x7F094A38u: goto label_7F094A38;
    case 0x7F094A3Cu: goto label_7F094A3C;
    case 0x7F094A40u: goto label_7F094A40;
    case 0x7F094A44u: goto label_7F094A44;
    case 0x7F094A48u: goto label_7F094A48;
    case 0x7F094A4Cu: goto label_7F094A4C;
    case 0x7F094A50u: goto label_7F094A50;
    case 0x7F094A54u: goto label_7F094A54;
    case 0x7F094A58u: goto label_7F094A58;
    case 0x7F094A5Cu: goto label_7F094A5C;
    case 0x7F094A60u: goto label_7F094A60;
    case 0x7F094A64u: goto label_7F094A64;
    case 0x7F094A68u: goto label_7F094A68;
    case 0x7F094A6Cu: goto label_7F094A6C;
    case 0x7F094A70u: goto label_7F094A70;
    case 0x7F094A74u: goto label_7F094A74;
    case 0x7F094A78u: goto label_7F094A78;
    case 0x7F094A7Cu: goto label_7F094A7C;
    case 0x7F094A80u: goto label_7F094A80;
    case 0x7F094A84u: goto label_7F094A84;
    case 0x7F094A88u: goto label_7F094A88;
    case 0x7F094A8Cu: goto label_7F094A8C;
    case 0x7F094A90u: goto label_7F094A90;
    case 0x7F094A94u: goto label_7F094A94;
    case 0x7F094A98u: goto label_7F094A98;
    case 0x7F094A9Cu: goto label_7F094A9C;
    case 0x7F094AA0u: goto label_7F094AA0;
    case 0x7F094AA4u: goto label_7F094AA4;
    case 0x7F094AA8u: goto label_7F094AA8;
    case 0x7F094AACu: goto label_7F094AAC;
    case 0x7F094AB0u: goto label_7F094AB0;
    case 0x7F094AB4u: goto label_7F094AB4;
    case 0x7F094AB8u: goto label_7F094AB8;
    case 0x7F094ABCu: goto label_7F094ABC;
    case 0x7F094AC0u: goto label_7F094AC0;
    case 0x7F094AC4u: goto label_7F094AC4;
    case 0x7F094AC8u: goto label_7F094AC8;
    case 0x7F094ACCu: goto label_7F094ACC;
    case 0x7F094AD0u: goto label_7F094AD0;
    case 0x7F094AD4u: goto label_7F094AD4;
    case 0x7F094AD8u: goto label_7F094AD8;
    case 0x7F094ADCu: goto label_7F094ADC;
    case 0x7F094AE0u: goto label_7F094AE0;
    case 0x7F094AE4u: goto label_7F094AE4;
    case 0x7F094AE8u: goto label_7F094AE8;
    case 0x7F094AECu: goto label_7F094AEC;
    case 0x7F094AF0u: goto label_7F094AF0;
    case 0x7F094AF4u: goto label_7F094AF4;
    case 0x7F094AF8u: goto label_7F094AF8;
    case 0x7F094AFCu: goto label_7F094AFC;
    case 0x7F094B00u: goto label_7F094B00;
    case 0x7F094B04u: goto label_7F094B04;
    case 0x7F094B08u: goto label_7F094B08;
    case 0x7F094B0Cu: goto label_7F094B0C;
    case 0x7F094B10u: goto label_7F094B10;
    case 0x7F094B14u: goto label_7F094B14;
    case 0x7F094B18u: goto label_7F094B18;
    case 0x7F094B1Cu: goto label_7F094B1C;
    case 0x7F094B20u: goto label_7F094B20;
    case 0x7F094B24u: goto label_7F094B24;
    case 0x7F094B28u: goto label_7F094B28;
    case 0x7F094B2Cu: goto label_7F094B2C;
    case 0x7F094B30u: goto label_7F094B30;
    case 0x7F094B34u: goto label_7F094B34;
    case 0x7F094B38u: goto label_7F094B38;
    case 0x7F094B3Cu: goto label_7F094B3C;
    case 0x7F094B40u: goto label_7F094B40;
    case 0x7F094B44u: goto label_7F094B44;
    case 0x7F094B48u: goto label_7F094B48;
    case 0x7F094B4Cu: goto label_7F094B4C;
    case 0x7F094B50u: goto label_7F094B50;
    case 0x7F094B54u: goto label_7F094B54;
    case 0x7F094B58u: goto label_7F094B58;
    case 0x7F094B5Cu: goto label_7F094B5C;
    case 0x7F094B60u: goto label_7F094B60;
    case 0x7F094B64u: goto label_7F094B64;
    case 0x7F094B68u: goto label_7F094B68;
    case 0x7F094B6Cu: goto label_7F094B6C;
    case 0x7F094B70u: goto label_7F094B70;
    case 0x7F094B74u: goto label_7F094B74;
    case 0x7F094B78u: goto label_7F094B78;
    case 0x7F094B7Cu: goto label_7F094B7C;
    case 0x7F094B80u: goto label_7F094B80;
    case 0x7F094B84u: goto label_7F094B84;
    case 0x7F094B88u: goto label_7F094B88;
    case 0x7F094B8Cu: goto label_7F094B8C;
    case 0x7F094B90u: goto label_7F094B90;
    case 0x7F094B94u: goto label_7F094B94;
    case 0x7F094B98u: goto label_7F094B98;
    case 0x7F094B9Cu: goto label_7F094B9C;
    case 0x7F094BA0u: goto label_7F094BA0;
    case 0x7F094BA4u: goto label_7F094BA4;
    case 0x7F094BA8u: goto label_7F094BA8;
    case 0x7F094BACu: goto label_7F094BAC;
    case 0x7F094BB0u: goto label_7F094BB0;
    case 0x7F094BB4u: goto label_7F094BB4;
    case 0x7F094BB8u: goto label_7F094BB8;
    case 0x7F094BBCu: goto label_7F094BBC;
    case 0x7F094BC0u: goto label_7F094BC0;
    case 0x7F094BC4u: goto label_7F094BC4;
    case 0x7F094BC8u: goto label_7F094BC8;
    case 0x7F094BCCu: goto label_7F094BCC;
    case 0x7F094BD0u: goto label_7F094BD0;
    case 0x7F094BD4u: goto label_7F094BD4;
    case 0x7F094BD8u: goto label_7F094BD8;
    case 0x7F094BDCu: goto label_7F094BDC;
    case 0x7F094BE0u: goto label_7F094BE0;
    case 0x7F094BE4u: goto label_7F094BE4;
    case 0x7F094BE8u: goto label_7F094BE8;
    case 0x7F094BECu: goto label_7F094BEC;
    case 0x7F094BF0u: goto label_7F094BF0;
    case 0x7F094BF4u: goto label_7F094BF4;
    case 0x7F094BF8u: goto label_7F094BF8;
    case 0x7F094BFCu: goto label_7F094BFC;
    case 0x7F094C00u: goto label_7F094C00;
    case 0x7F094C04u: goto label_7F094C04;
    case 0x7F094C08u: goto label_7F094C08;
    case 0x7F094C0Cu: goto label_7F094C0C;
    case 0x7F094C10u: goto label_7F094C10;
    case 0x7F094C14u: goto label_7F094C14;
    case 0x7F094C18u: goto label_7F094C18;
    case 0x7F094C1Cu: goto label_7F094C1C;
    case 0x7F094C20u: goto label_7F094C20;
    case 0x7F094C24u: goto label_7F094C24;
    case 0x7F094C28u: goto label_7F094C28;
    case 0x7F094C2Cu: goto label_7F094C2C;
    case 0x7F094C30u: goto label_7F094C30;
    case 0x7F094C34u: goto label_7F094C34;
    case 0x7F094C38u: goto label_7F094C38;
    case 0x7F094C3Cu: goto label_7F094C3C;
    case 0x7F094C40u: goto label_7F094C40;
    case 0x7F094C44u: goto label_7F094C44;
    case 0x7F094C48u: goto label_7F094C48;
    case 0x7F094C4Cu: goto label_7F094C4C;
    case 0x7F094C50u: goto label_7F094C50;
    case 0x7F094C54u: goto label_7F094C54;
    case 0x7F094C58u: goto label_7F094C58;
    case 0x7F094C5Cu: goto label_7F094C5C;
    case 0x7F094C60u: goto label_7F094C60;
    case 0x7F094C64u: goto label_7F094C64;
    case 0x7F094C68u: goto label_7F094C68;
    case 0x7F094C6Cu: goto label_7F094C6C;
    case 0x7F094C70u: goto label_7F094C70;
    case 0x7F094C74u: goto label_7F094C74;
    case 0x7F094C78u: goto label_7F094C78;
    case 0x7F094C7Cu: goto label_7F094C7C;
    case 0x7F094C80u: goto label_7F094C80;
    case 0x7F094C84u: goto label_7F094C84;
    case 0x7F094C88u: goto label_7F094C88;
    case 0x7F094C8Cu: goto label_7F094C8C;
    case 0x7F094C90u: goto label_7F094C90;
    case 0x7F094C94u: goto label_7F094C94;
    case 0x7F094C98u: goto label_7F094C98;
    case 0x7F094C9Cu: goto label_7F094C9C;
    case 0x7F094CA0u: goto label_7F094CA0;
    case 0x7F094CA4u: goto label_7F094CA4;
    case 0x7F094CA8u: goto label_7F094CA8;
    case 0x7F094CACu: goto label_7F094CAC;
    case 0x7F094CB0u: goto label_7F094CB0;
    case 0x7F094CB4u: goto label_7F094CB4;
    case 0x7F094CB8u: goto label_7F094CB8;
    case 0x7F094CBCu: goto label_7F094CBC;
    case 0x7F094CC0u: goto label_7F094CC0;
    case 0x7F094CC4u: goto label_7F094CC4;
    case 0x7F094CC8u: goto label_7F094CC8;
    case 0x7F094CCCu: goto label_7F094CCC;
    case 0x7F094CD0u: goto label_7F094CD0;
    case 0x7F094CD4u: goto label_7F094CD4;
    case 0x7F094CD8u: goto label_7F094CD8;
    case 0x7F094CDCu: goto label_7F094CDC;
    case 0x7F094CE0u: goto label_7F094CE0;
    case 0x7F094CE4u: goto label_7F094CE4;
    case 0x7F094CE8u: goto label_7F094CE8;
    case 0x7F094CECu: goto label_7F094CEC;
    case 0x7F094CF0u: goto label_7F094CF0;
    case 0x7F094CF4u: goto label_7F094CF4;
    case 0x7F094CF8u: goto label_7F094CF8;
    case 0x7F094CFCu: goto label_7F094CFC;
    case 0x7F094D00u: goto label_7F094D00;
    case 0x7F094D04u: goto label_7F094D04;
    case 0x7F094D08u: goto label_7F094D08;
    case 0x7F094D0Cu: goto label_7F094D0C;
    case 0x7F094D10u: goto label_7F094D10;
    case 0x7F094D14u: goto label_7F094D14;
    case 0x7F094D18u: goto label_7F094D18;
    case 0x7F094D1Cu: goto label_7F094D1C;
    case 0x7F094D20u: goto label_7F094D20;
    case 0x7F094D24u: goto label_7F094D24;
    case 0x7F094D28u: goto label_7F094D28;
    case 0x7F094D2Cu: goto label_7F094D2C;
    case 0x7F094D30u: goto label_7F094D30;
    case 0x7F094D34u: goto label_7F094D34;
    case 0x7F094D38u: goto label_7F094D38;
    case 0x7F094D3Cu: goto label_7F094D3C;
    case 0x7F094D40u: goto label_7F094D40;
    case 0x7F094D44u: goto label_7F094D44;
    case 0x7F094D48u: goto label_7F094D48;
    case 0x7F094D4Cu: goto label_7F094D4C;
    case 0x7F094D50u: goto label_7F094D50;
    case 0x7F094D54u: goto label_7F094D54;
    case 0x7F094D58u: goto label_7F094D58;
    case 0x7F094D5Cu: goto label_7F094D5C;
    case 0x7F094D60u: goto label_7F094D60;
    case 0x7F094D64u: goto label_7F094D64;
    case 0x7F094D68u: goto label_7F094D68;
    case 0x7F094D6Cu: goto label_7F094D6C;
    case 0x7F094D70u: goto label_7F094D70;
    case 0x7F094D74u: goto label_7F094D74;
    case 0x7F094D78u: goto label_7F094D78;
    case 0x7F094D7Cu: goto label_7F094D7C;
    case 0x7F094D80u: goto label_7F094D80;
    case 0x7F094D84u: goto label_7F094D84;
    case 0x7F094D88u: goto label_7F094D88;
    case 0x7F094D8Cu: goto label_7F094D8C;
    case 0x7F094D90u: goto label_7F094D90;
    case 0x7F094D94u: goto label_7F094D94;
    case 0x7F094D98u: goto label_7F094D98;
    case 0x7F094D9Cu: goto label_7F094D9C;
    case 0x7F094DA0u: goto label_7F094DA0;
    case 0x7F094DA4u: goto label_7F094DA4;
    case 0x7F094DA8u: goto label_7F094DA8;
    case 0x7F094DACu: goto label_7F094DAC;
    case 0x7F094DB0u: goto label_7F094DB0;
    case 0x7F094DB4u: goto label_7F094DB4;
    case 0x7F094DB8u: goto label_7F094DB8;
    case 0x7F094DBCu: goto label_7F094DBC;
    case 0x7F094DC0u: goto label_7F094DC0;
    case 0x7F094DC4u: goto label_7F094DC4;
    case 0x7F094DC8u: goto label_7F094DC8;
    case 0x7F094DCCu: goto label_7F094DCC;
    case 0x7F094DD0u: goto label_7F094DD0;
    case 0x7F094DD4u: goto label_7F094DD4;
    case 0x7F094DD8u: goto label_7F094DD8;
    case 0x7F094DDCu: goto label_7F094DDC;
    case 0x7F094DE0u: goto label_7F094DE0;
    case 0x7F094DE4u: goto label_7F094DE4;
    case 0x7F094DE8u: goto label_7F094DE8;
    case 0x7F094DECu: goto label_7F094DEC;
    case 0x7F094DF0u: goto label_7F094DF0;
    case 0x7F094DF4u: goto label_7F094DF4;
    case 0x7F094DF8u: goto label_7F094DF8;
    case 0x7F094DFCu: goto label_7F094DFC;
    case 0x7F094E00u: goto label_7F094E00;
    case 0x7F094E04u: goto label_7F094E04;
    case 0x7F094E08u: goto label_7F094E08;
    case 0x7F094E0Cu: goto label_7F094E0C;
    case 0x7F094E10u: goto label_7F094E10;
    case 0x7F094E14u: goto label_7F094E14;
    case 0x7F094E18u: goto label_7F094E18;
    case 0x7F094E1Cu: goto label_7F094E1C;
    case 0x7F094E20u: goto label_7F094E20;
    case 0x7F094E24u: goto label_7F094E24;
    case 0x7F094E28u: goto label_7F094E28;
    case 0x7F094E2Cu: goto label_7F094E2C;
    case 0x7F094E30u: goto label_7F094E30;
    case 0x7F094E34u: goto label_7F094E34;
    case 0x7F094E38u: goto label_7F094E38;
    case 0x7F094E3Cu: goto label_7F094E3C;
    case 0x7F094E40u: goto label_7F094E40;
    case 0x7F094E44u: goto label_7F094E44;
    case 0x7F094E48u: goto label_7F094E48;
    case 0x7F094E4Cu: goto label_7F094E4C;
    case 0x7F094E50u: goto label_7F094E50;
    case 0x7F094E54u: goto label_7F094E54;
    case 0x7F094E58u: goto label_7F094E58;
    case 0x7F094E5Cu: goto label_7F094E5C;
    case 0x7F094E60u: goto label_7F094E60;
    case 0x7F094E64u: goto label_7F094E64;
    case 0x7F094E68u: goto label_7F094E68;
    case 0x7F094E6Cu: goto label_7F094E6C;
    case 0x7F094E70u: goto label_7F094E70;
    case 0x7F094E74u: goto label_7F094E74;
    case 0x7F094E78u: goto label_7F094E78;
    case 0x7F094E7Cu: goto label_7F094E7C;
    case 0x7F094E80u: goto label_7F094E80;
    case 0x7F094E84u: goto label_7F094E84;
    case 0x7F094E88u: goto label_7F094E88;
    case 0x7F094E8Cu: goto label_7F094E8C;
    case 0x7F094E90u: goto label_7F094E90;
    case 0x7F094E94u: goto label_7F094E94;
    case 0x7F094E98u: goto label_7F094E98;
    case 0x7F094E9Cu: goto label_7F094E9C;
    case 0x7F094EA0u: goto label_7F094EA0;
    case 0x7F094EA4u: goto label_7F094EA4;
    case 0x7F094EA8u: goto label_7F094EA8;
    case 0x7F094EACu: goto label_7F094EAC;
    case 0x7F094EB0u: goto label_7F094EB0;
    case 0x7F094EB4u: goto label_7F094EB4;
    case 0x7F094EB8u: goto label_7F094EB8;
    case 0x7F094EBCu: goto label_7F094EBC;
    case 0x7F094EC0u: goto label_7F094EC0;
    case 0x7F094EC4u: goto label_7F094EC4;
    case 0x7F094EC8u: goto label_7F094EC8;
    case 0x7F094ECCu: goto label_7F094ECC;
    case 0x7F094ED0u: goto label_7F094ED0;
    case 0x7F094ED4u: goto label_7F094ED4;
    case 0x7F094ED8u: goto label_7F094ED8;
    case 0x7F094EDCu: goto label_7F094EDC;
    case 0x7F094EE0u: goto label_7F094EE0;
    case 0x7F094EE4u: goto label_7F094EE4;
    case 0x7F094EE8u: goto label_7F094EE8;
    case 0x7F094EECu: goto label_7F094EEC;
    case 0x7F094EF0u: goto label_7F094EF0;
    case 0x7F094EF4u: goto label_7F094EF4;
    case 0x7F094EF8u: goto label_7F094EF8;
    case 0x7F094EFCu: goto label_7F094EFC;
    case 0x7F094F00u: goto label_7F094F00;
    case 0x7F094F04u: goto label_7F094F04;
    case 0x7F094F08u: goto label_7F094F08;
    case 0x7F094F0Cu: goto label_7F094F0C;
    case 0x7F094F10u: goto label_7F094F10;
    case 0x7F094F14u: goto label_7F094F14;
    case 0x7F094F18u: goto label_7F094F18;
    case 0x7F094F1Cu: goto label_7F094F1C;
    case 0x7F094F20u: goto label_7F094F20;
    case 0x7F094F24u: goto label_7F094F24;
    case 0x7F094F28u: goto label_7F094F28;
    case 0x7F094F2Cu: goto label_7F094F2C;
    case 0x7F094F30u: goto label_7F094F30;
    case 0x7F094F34u: goto label_7F094F34;
    case 0x7F094F38u: goto label_7F094F38;
    case 0x7F094F3Cu: goto label_7F094F3C;
    case 0x7F094F40u: goto label_7F094F40;
    case 0x7F094F44u: goto label_7F094F44;
    case 0x7F094F48u: goto label_7F094F48;
    case 0x7F094F4Cu: goto label_7F094F4C;
    case 0x7F094F50u: goto label_7F094F50;
    case 0x7F094F54u: goto label_7F094F54;
    case 0x7F094F58u: goto label_7F094F58;
    case 0x7F094F5Cu: goto label_7F094F5C;
    case 0x7F094F60u: goto label_7F094F60;
    case 0x7F094F64u: goto label_7F094F64;
    case 0x7F094F68u: goto label_7F094F68;
    case 0x7F094F6Cu: goto label_7F094F6C;
    case 0x7F094F70u: goto label_7F094F70;
    case 0x7F094F74u: goto label_7F094F74;
    case 0x7F094F78u: goto label_7F094F78;
    case 0x7F094F7Cu: goto label_7F094F7C;
    case 0x7F094F80u: goto label_7F094F80;
    case 0x7F094F84u: goto label_7F094F84;
    case 0x7F094F88u: goto label_7F094F88;
    case 0x7F094F8Cu: goto label_7F094F8C;
    case 0x7F094F90u: goto label_7F094F90;
    case 0x7F094F94u: goto label_7F094F94;
    case 0x7F094F98u: goto label_7F094F98;
    case 0x7F094F9Cu: goto label_7F094F9C;
    case 0x7F094FA0u: goto label_7F094FA0;
    case 0x7F094FA4u: goto label_7F094FA4;
    case 0x7F094FA8u: goto label_7F094FA8;
    case 0x7F094FACu: goto label_7F094FAC;
    case 0x7F094FB0u: goto label_7F094FB0;
    case 0x7F094FB4u: goto label_7F094FB4;
    case 0x7F094FB8u: goto label_7F094FB8;
    case 0x7F094FBCu: goto label_7F094FBC;
    case 0x7F094FC0u: goto label_7F094FC0;
    case 0x7F094FC4u: goto label_7F094FC4;
    case 0x7F094FC8u: goto label_7F094FC8;
    case 0x7F094FCCu: goto label_7F094FCC;
    case 0x7F094FD0u: goto label_7F094FD0;
    case 0x7F094FD4u: goto label_7F094FD4;
    case 0x7F094FD8u: goto label_7F094FD8;
    case 0x7F094FDCu: goto label_7F094FDC;
    case 0x7F094FE0u: goto label_7F094FE0;
    case 0x7F094FE4u: goto label_7F094FE4;
    case 0x7F094FE8u: goto label_7F094FE8;
    case 0x7F094FECu: goto label_7F094FEC;
    case 0x7F094FF0u: goto label_7F094FF0;
    case 0x7F094FF4u: goto label_7F094FF4;
    case 0x7F094FF8u: goto label_7F094FF8;
    case 0x7F094FFCu: goto label_7F094FFC;
    case 0x7F095000u: goto label_7F095000;
    case 0x7F095004u: goto label_7F095004;
    case 0x7F095008u: goto label_7F095008;
    case 0x7F09500Cu: goto label_7F09500C;
    case 0x7F095010u: goto label_7F095010;
    case 0x7F095014u: goto label_7F095014;
    case 0x7F095018u: goto label_7F095018;
    case 0x7F09501Cu: goto label_7F09501C;
    case 0x7F095020u: goto label_7F095020;
    case 0x7F095024u: goto label_7F095024;
    case 0x7F095028u: goto label_7F095028;
    case 0x7F09502Cu: goto label_7F09502C;
    case 0x7F095030u: goto label_7F095030;
    case 0x7F095034u: goto label_7F095034;
    case 0x7F095038u: goto label_7F095038;
    case 0x7F09503Cu: goto label_7F09503C;
    case 0x7F095040u: goto label_7F095040;
    case 0x7F095044u: goto label_7F095044;
    case 0x7F095048u: goto label_7F095048;
    case 0x7F09504Cu: goto label_7F09504C;
    case 0x7F095050u: goto label_7F095050;
    case 0x7F095054u: goto label_7F095054;
    case 0x7F095058u: goto label_7F095058;
    case 0x7F09505Cu: goto label_7F09505C;
    case 0x7F095060u: goto label_7F095060;
    case 0x7F095064u: goto label_7F095064;
    case 0x7F095068u: goto label_7F095068;
    case 0x7F09506Cu: goto label_7F09506C;
    case 0x7F095070u: goto label_7F095070;
    case 0x7F095074u: goto label_7F095074;
    case 0x7F095078u: goto label_7F095078;
    case 0x7F09507Cu: goto label_7F09507C;
    case 0x7F095080u: goto label_7F095080;
    case 0x7F095084u: goto label_7F095084;
    case 0x7F095088u: goto label_7F095088;
    case 0x7F09508Cu: goto label_7F09508C;
    case 0x7F095090u: goto label_7F095090;
    case 0x7F095094u: goto label_7F095094;
    case 0x7F095098u: goto label_7F095098;
    case 0x7F09509Cu: goto label_7F09509C;
    case 0x7F0950A0u: goto label_7F0950A0;
    case 0x7F0950A4u: goto label_7F0950A4;
    case 0x7F0950A8u: goto label_7F0950A8;
    case 0x7F0950ACu: goto label_7F0950AC;
    case 0x7F0950B0u: goto label_7F0950B0;
    case 0x7F0950B4u: goto label_7F0950B4;
    case 0x7F0950B8u: goto label_7F0950B8;
    case 0x7F0950BCu: goto label_7F0950BC;
    case 0x7F0950C0u: goto label_7F0950C0;
    case 0x7F0950C4u: goto label_7F0950C4;
    case 0x7F0950C8u: goto label_7F0950C8;
    case 0x7F0950CCu: goto label_7F0950CC;
    case 0x7F0950D0u: goto label_7F0950D0;
    case 0x7F0950D4u: goto label_7F0950D4;
    case 0x7F0950D8u: goto label_7F0950D8;
    case 0x7F0950DCu: goto label_7F0950DC;
    case 0x7F0950E0u: goto label_7F0950E0;
    case 0x7F0950E4u: goto label_7F0950E4;
    case 0x7F0950E8u: goto label_7F0950E8;
    case 0x7F0950ECu: goto label_7F0950EC;
    case 0x7F0950F0u: goto label_7F0950F0;
    case 0x7F0950F4u: goto label_7F0950F4;
    case 0x7F0950F8u: goto label_7F0950F8;
    case 0x7F0950FCu: goto label_7F0950FC;
    case 0x7F095100u: goto label_7F095100;
    case 0x7F095104u: goto label_7F095104;
    case 0x7F095108u: goto label_7F095108;
    case 0x7F09510Cu: goto label_7F09510C;
    case 0x7F095110u: goto label_7F095110;
    case 0x7F095114u: goto label_7F095114;
    case 0x7F095118u: goto label_7F095118;
    case 0x7F09511Cu: goto label_7F09511C;
    case 0x7F095120u: goto label_7F095120;
    case 0x7F095124u: goto label_7F095124;
    case 0x7F095128u: goto label_7F095128;
    case 0x7F09512Cu: goto label_7F09512C;
    case 0x7F095130u: goto label_7F095130;
    case 0x7F095134u: goto label_7F095134;
    case 0x7F095138u: goto label_7F095138;
    case 0x7F09513Cu: goto label_7F09513C;
    case 0x7F095140u: goto label_7F095140;
    case 0x7F095144u: goto label_7F095144;
    case 0x7F095148u: goto label_7F095148;
    case 0x7F09514Cu: goto label_7F09514C;
    case 0x7F095150u: goto label_7F095150;
    case 0x7F095154u: goto label_7F095154;
    case 0x7F095158u: goto label_7F095158;
    case 0x7F09515Cu: goto label_7F09515C;
    case 0x7F095160u: goto label_7F095160;
    case 0x7F095164u: goto label_7F095164;
    case 0x7F095168u: goto label_7F095168;
    case 0x7F09516Cu: goto label_7F09516C;
    case 0x7F095170u: goto label_7F095170;
    case 0x7F095174u: goto label_7F095174;
    case 0x7F095178u: goto label_7F095178;
    case 0x7F09517Cu: goto label_7F09517C;
    case 0x7F095180u: goto label_7F095180;
    case 0x7F095184u: goto label_7F095184;
    case 0x7F095188u: goto label_7F095188;
    case 0x7F09518Cu: goto label_7F09518C;
    case 0x7F095190u: goto label_7F095190;
    case 0x7F095194u: goto label_7F095194;
    case 0x7F095198u: goto label_7F095198;
    case 0x7F09519Cu: goto label_7F09519C;
    case 0x7F0951A0u: goto label_7F0951A0;
    case 0x7F0951A4u: goto label_7F0951A4;
    case 0x7F0951A8u: goto label_7F0951A8;
    case 0x7F0951ACu: goto label_7F0951AC;
    case 0x7F0951B0u: goto label_7F0951B0;
    case 0x7F0951B4u: goto label_7F0951B4;
    case 0x7F0951B8u: goto label_7F0951B8;
    case 0x7F0951BCu: goto label_7F0951BC;
    case 0x7F0951C0u: goto label_7F0951C0;
    case 0x7F0951C4u: goto label_7F0951C4;
    case 0x7F0951C8u: goto label_7F0951C8;
    case 0x7F0951CCu: goto label_7F0951CC;
    case 0x7F0951D0u: goto label_7F0951D0;
    case 0x7F0951D4u: goto label_7F0951D4;
    case 0x7F0951D8u: goto label_7F0951D8;
    case 0x7F0951DCu: goto label_7F0951DC;
    case 0x7F0951E0u: goto label_7F0951E0;
    case 0x7F0951E4u: goto label_7F0951E4;
    case 0x7F0951E8u: goto label_7F0951E8;
    case 0x7F0951ECu: goto label_7F0951EC;
    case 0x7F0951F0u: goto label_7F0951F0;
    case 0x7F0951F4u: goto label_7F0951F4;
    case 0x7F0951F8u: goto label_7F0951F8;
    case 0x7F0951FCu: goto label_7F0951FC;
    case 0x7F095200u: goto label_7F095200;
    case 0x7F095204u: goto label_7F095204;
    case 0x7F095208u: goto label_7F095208;
    case 0x7F09520Cu: goto label_7F09520C;
    case 0x7F095210u: goto label_7F095210;
    case 0x7F095214u: goto label_7F095214;
    case 0x7F095218u: goto label_7F095218;
    case 0x7F09521Cu: goto label_7F09521C;
    case 0x7F095220u: goto label_7F095220;
    case 0x7F095224u: goto label_7F095224;
    case 0x7F095228u: goto label_7F095228;
    case 0x7F09522Cu: goto label_7F09522C;
    case 0x7F095230u: goto label_7F095230;
    case 0x7F095234u: goto label_7F095234;
    case 0x7F095238u: goto label_7F095238;
    case 0x7F09523Cu: goto label_7F09523C;
    case 0x7F095240u: goto label_7F095240;
    case 0x7F095244u: goto label_7F095244;
    case 0x7F095248u: goto label_7F095248;
    case 0x7F09524Cu: goto label_7F09524C;
    case 0x7F095250u: goto label_7F095250;
    case 0x7F095254u: goto label_7F095254;
    case 0x7F095258u: goto label_7F095258;
    case 0x7F09525Cu: goto label_7F09525C;
    case 0x7F095260u: goto label_7F095260;
    case 0x7F095264u: goto label_7F095264;
    case 0x7F095268u: goto label_7F095268;
    case 0x7F09526Cu: goto label_7F09526C;
    case 0x7F095270u: goto label_7F095270;
    case 0x7F095274u: goto label_7F095274;
    case 0x7F095278u: goto label_7F095278;
    case 0x7F09527Cu: goto label_7F09527C;
    case 0x7F095280u: goto label_7F095280;
    case 0x7F095284u: goto label_7F095284;
    case 0x7F095288u: goto label_7F095288;
    case 0x7F09528Cu: goto label_7F09528C;
    case 0x7F095290u: goto label_7F095290;
    case 0x7F095294u: goto label_7F095294;
    case 0x7F095298u: goto label_7F095298;
    case 0x7F09529Cu: goto label_7F09529C;
    case 0x7F0952A0u: goto label_7F0952A0;
    case 0x7F0952A4u: goto label_7F0952A4;
    case 0x7F0952A8u: goto label_7F0952A8;
    case 0x7F0952ACu: goto label_7F0952AC;
    case 0x7F0952B0u: goto label_7F0952B0;
    case 0x7F0952B4u: goto label_7F0952B4;
    case 0x7F0952B8u: goto label_7F0952B8;
    case 0x7F0952BCu: goto label_7F0952BC;
    case 0x7F0952C0u: goto label_7F0952C0;
    case 0x7F0952C4u: goto label_7F0952C4;
    case 0x7F0952C8u: goto label_7F0952C8;
    case 0x7F0952CCu: goto label_7F0952CC;
    case 0x7F0952D0u: goto label_7F0952D0;
    case 0x7F0952D4u: goto label_7F0952D4;
    case 0x7F0952D8u: goto label_7F0952D8;
    case 0x7F0952DCu: goto label_7F0952DC;
    case 0x7F0952E0u: goto label_7F0952E0;
    case 0x7F0952E4u: goto label_7F0952E4;
    case 0x7F0952E8u: goto label_7F0952E8;
    case 0x7F0952ECu: goto label_7F0952EC;
    case 0x7F0952F0u: goto label_7F0952F0;
    case 0x7F0952F4u: goto label_7F0952F4;
    case 0x7F0952F8u: goto label_7F0952F8;
    case 0x7F0952FCu: goto label_7F0952FC;
    case 0x7F095300u: goto label_7F095300;
    case 0x7F095304u: goto label_7F095304;
    case 0x7F095308u: goto label_7F095308;
    case 0x7F09530Cu: goto label_7F09530C;
    case 0x7F095310u: goto label_7F095310;
    case 0x7F095314u: goto label_7F095314;
    case 0x7F095318u: goto label_7F095318;
    case 0x7F09531Cu: goto label_7F09531C;
    case 0x7F095320u: goto label_7F095320;
    case 0x7F095324u: goto label_7F095324;
    case 0x7F095328u: goto label_7F095328;
    case 0x7F09532Cu: goto label_7F09532C;
    case 0x7F095330u: goto label_7F095330;
    case 0x7F095334u: goto label_7F095334;
    case 0x7F095338u: goto label_7F095338;
    case 0x7F09533Cu: goto label_7F09533C;
    case 0x7F095340u: goto label_7F095340;
    case 0x7F095344u: goto label_7F095344;
    case 0x7F095348u: goto label_7F095348;
    case 0x7F09534Cu: goto label_7F09534C;
    case 0x7F095350u: goto label_7F095350;
    case 0x7F095354u: goto label_7F095354;
    case 0x7F095358u: goto label_7F095358;
    case 0x7F09535Cu: goto label_7F09535C;
    case 0x7F095360u: goto label_7F095360;
    case 0x7F095364u: goto label_7F095364;
    case 0x7F095368u: goto label_7F095368;
    case 0x7F09536Cu: goto label_7F09536C;
    case 0x7F095370u: goto label_7F095370;
    case 0x7F095374u: goto label_7F095374;
    case 0x7F095378u: goto label_7F095378;
    case 0x7F09537Cu: goto label_7F09537C;
    case 0x7F095380u: goto label_7F095380;
    case 0x7F095384u: goto label_7F095384;
    case 0x7F095388u: goto label_7F095388;
    case 0x7F09538Cu: goto label_7F09538C;
    case 0x7F095390u: goto label_7F095390;
    case 0x7F095394u: goto label_7F095394;
    case 0x7F095398u: goto label_7F095398;
    case 0x7F09539Cu: goto label_7F09539C;
    case 0x7F0953A0u: goto label_7F0953A0;
    case 0x7F0953A4u: goto label_7F0953A4;
    case 0x7F0953A8u: goto label_7F0953A8;
    case 0x7F0953ACu: goto label_7F0953AC;
    case 0x7F0953B0u: goto label_7F0953B0;
    case 0x7F0953B4u: goto label_7F0953B4;
    case 0x7F0953B8u: goto label_7F0953B8;
    case 0x7F0953BCu: goto label_7F0953BC;
    case 0x7F0953C0u: goto label_7F0953C0;
    case 0x7F0953C4u: goto label_7F0953C4;
    case 0x7F0953C8u: goto label_7F0953C8;
    case 0x7F0953CCu: goto label_7F0953CC;
    case 0x7F0953D0u: goto label_7F0953D0;
    case 0x7F0953D4u: goto label_7F0953D4;
    case 0x7F0953D8u: goto label_7F0953D8;
    case 0x7F0953DCu: goto label_7F0953DC;
    case 0x7F0953E0u: goto label_7F0953E0;
    case 0x7F0953E4u: goto label_7F0953E4;
    case 0x7F0953E8u: goto label_7F0953E8;
    case 0x7F0953ECu: goto label_7F0953EC;
    case 0x7F0953F0u: goto label_7F0953F0;
    case 0x7F0953F4u: goto label_7F0953F4;
    case 0x7F0953F8u: goto label_7F0953F8;
    case 0x7F0953FCu: goto label_7F0953FC;
    case 0x7F095400u: goto label_7F095400;
    case 0x7F095404u: goto label_7F095404;
    case 0x7F095408u: goto label_7F095408;
    case 0x7F09540Cu: goto label_7F09540C;
    case 0x7F095410u: goto label_7F095410;
    case 0x7F095414u: goto label_7F095414;
    case 0x7F095418u: goto label_7F095418;
    case 0x7F09541Cu: goto label_7F09541C;
    case 0x7F095420u: goto label_7F095420;
    case 0x7F095424u: goto label_7F095424;
    case 0x7F095428u: goto label_7F095428;
    case 0x7F09542Cu: goto label_7F09542C;
    case 0x7F095430u: goto label_7F095430;
    case 0x7F095434u: goto label_7F095434;
    case 0x7F095438u: goto label_7F095438;
    case 0x7F09543Cu: goto label_7F09543C;
    case 0x7F095440u: goto label_7F095440;
    case 0x7F095444u: goto label_7F095444;
    case 0x7F095448u: goto label_7F095448;
    case 0x7F09544Cu: goto label_7F09544C;
    case 0x7F095450u: goto label_7F095450;
    case 0x7F095454u: goto label_7F095454;
    case 0x7F095458u: goto label_7F095458;
    case 0x7F09545Cu: goto label_7F09545C;
    case 0x7F095460u: goto label_7F095460;
    case 0x7F095464u: goto label_7F095464;
    case 0x7F095468u: goto label_7F095468;
    case 0x7F09546Cu: goto label_7F09546C;
    case 0x7F095470u: goto label_7F095470;
    case 0x7F095474u: goto label_7F095474;
    case 0x7F095478u: goto label_7F095478;
    case 0x7F09547Cu: goto label_7F09547C;
    case 0x7F095480u: goto label_7F095480;
    case 0x7F095484u: goto label_7F095484;
    case 0x7F095488u: goto label_7F095488;
    case 0x7F09548Cu: goto label_7F09548C;
    case 0x7F095490u: goto label_7F095490;
    case 0x7F095494u: goto label_7F095494;
    case 0x7F095498u: goto label_7F095498;
    case 0x7F09549Cu: goto label_7F09549C;
    case 0x7F0954A0u: goto label_7F0954A0;
    case 0x7F0954A4u: goto label_7F0954A4;
    case 0x7F0954A8u: goto label_7F0954A8;
    case 0x7F0954ACu: goto label_7F0954AC;
    case 0x7F0954B0u: goto label_7F0954B0;
    case 0x7F0954B4u: goto label_7F0954B4;
    case 0x7F0954B8u: goto label_7F0954B8;
    case 0x7F0954BCu: goto label_7F0954BC;
    case 0x7F0954C0u: goto label_7F0954C0;
    case 0x7F0954C4u: goto label_7F0954C4;
    case 0x7F0954C8u: goto label_7F0954C8;
    case 0x7F0954CCu: goto label_7F0954CC;
    case 0x7F0954D0u: goto label_7F0954D0;
    case 0x7F0954D4u: goto label_7F0954D4;
    case 0x7F0954D8u: goto label_7F0954D8;
    case 0x7F0954DCu: goto label_7F0954DC;
    case 0x7F0954E0u: goto label_7F0954E0;
    case 0x7F0954E4u: goto label_7F0954E4;
    case 0x7F0954E8u: goto label_7F0954E8;
    case 0x7F0954ECu: goto label_7F0954EC;
    case 0x7F0954F0u: goto label_7F0954F0;
    case 0x7F0954F4u: goto label_7F0954F4;
    case 0x7F0954F8u: goto label_7F0954F8;
    case 0x7F0954FCu: goto label_7F0954FC;
    case 0x7F095500u: goto label_7F095500;
    case 0x7F095504u: goto label_7F095504;
    case 0x7F095508u: goto label_7F095508;
    case 0x7F09550Cu: goto label_7F09550C;
    case 0x7F095510u: goto label_7F095510;
    case 0x7F095514u: goto label_7F095514;
    case 0x7F095518u: goto label_7F095518;
    case 0x7F09551Cu: goto label_7F09551C;
    case 0x7F095520u: goto label_7F095520;
    case 0x7F095524u: goto label_7F095524;
    case 0x7F095528u: goto label_7F095528;
    case 0x7F09552Cu: goto label_7F09552C;
    case 0x7F095530u: goto label_7F095530;
    case 0x7F095534u: goto label_7F095534;
    case 0x7F095538u: goto label_7F095538;
    case 0x7F09553Cu: goto label_7F09553C;
    case 0x7F095540u: goto label_7F095540;
    case 0x7F095544u: goto label_7F095544;
    case 0x7F095548u: goto label_7F095548;
    case 0x7F09554Cu: goto label_7F09554C;
    case 0x7F095550u: goto label_7F095550;
    case 0x7F095554u: goto label_7F095554;
    case 0x7F095558u: goto label_7F095558;
    case 0x7F09555Cu: goto label_7F09555C;
    case 0x7F095560u: goto label_7F095560;
    case 0x7F095564u: goto label_7F095564;
    case 0x7F095568u: goto label_7F095568;
    case 0x7F09556Cu: goto label_7F09556C;
    case 0x7F095570u: goto label_7F095570;
    case 0x7F095574u: goto label_7F095574;
    case 0x7F095578u: goto label_7F095578;
    case 0x7F09557Cu: goto label_7F09557C;
    case 0x7F095580u: goto label_7F095580;
    case 0x7F095584u: goto label_7F095584;
    case 0x7F095588u: goto label_7F095588;
    case 0x7F09558Cu: goto label_7F09558C;
    case 0x7F095590u: goto label_7F095590;
    case 0x7F095594u: goto label_7F095594;
    case 0x7F095598u: goto label_7F095598;
    case 0x7F09559Cu: goto label_7F09559C;
    case 0x7F0955A0u: goto label_7F0955A0;
    case 0x7F0955A4u: goto label_7F0955A4;
    case 0x7F0955A8u: goto label_7F0955A8;
    case 0x7F0955ACu: goto label_7F0955AC;
    case 0x7F0955B0u: goto label_7F0955B0;
    case 0x7F0955B4u: goto label_7F0955B4;
    case 0x7F0955B8u: goto label_7F0955B8;
    case 0x7F0955BCu: goto label_7F0955BC;
    case 0x7F0955C0u: goto label_7F0955C0;
    case 0x7F0955C4u: goto label_7F0955C4;
    case 0x7F0955C8u: goto label_7F0955C8;
    case 0x7F0955CCu: goto label_7F0955CC;
    case 0x7F0955D0u: goto label_7F0955D0;
    case 0x7F0955D4u: goto label_7F0955D4;
    case 0x7F0955D8u: goto label_7F0955D8;
    case 0x7F0955DCu: goto label_7F0955DC;
    case 0x7F0955E0u: goto label_7F0955E0;
    case 0x7F0955E4u: goto label_7F0955E4;
    case 0x7F0955E8u: goto label_7F0955E8;
    case 0x7F0955ECu: goto label_7F0955EC;
    case 0x7F0955F0u: goto label_7F0955F0;
    case 0x7F0955F4u: goto label_7F0955F4;
    case 0x7F0955F8u: goto label_7F0955F8;
    case 0x7F0955FCu: goto label_7F0955FC;
    case 0x7F095600u: goto label_7F095600;
    case 0x7F095604u: goto label_7F095604;
    case 0x7F095608u: goto label_7F095608;
    case 0x7F09560Cu: goto label_7F09560C;
    case 0x7F095610u: goto label_7F095610;
    case 0x7F095614u: goto label_7F095614;
    case 0x7F095618u: goto label_7F095618;
    case 0x7F09561Cu: goto label_7F09561C;
    case 0x7F095620u: goto label_7F095620;
    case 0x7F095624u: goto label_7F095624;
    case 0x7F095628u: goto label_7F095628;
    case 0x7F09562Cu: goto label_7F09562C;
    case 0x7F095630u: goto label_7F095630;
    case 0x7F095634u: goto label_7F095634;
    case 0x7F095638u: goto label_7F095638;
    case 0x7F09563Cu: goto label_7F09563C;
    case 0x7F095640u: goto label_7F095640;
    case 0x7F095644u: goto label_7F095644;
    case 0x7F095648u: goto label_7F095648;
    case 0x7F09564Cu: goto label_7F09564C;
    case 0x7F095650u: goto label_7F095650;
    case 0x7F095654u: goto label_7F095654;
    case 0x7F095658u: goto label_7F095658;
    case 0x7F09565Cu: goto label_7F09565C;
    case 0x7F095660u: goto label_7F095660;
    case 0x7F095664u: goto label_7F095664;
    case 0x7F095668u: goto label_7F095668;
    case 0x7F09566Cu: goto label_7F09566C;
    case 0x7F095670u: goto label_7F095670;
    case 0x7F095674u: goto label_7F095674;
    case 0x7F095678u: goto label_7F095678;
    case 0x7F09567Cu: goto label_7F09567C;
    case 0x7F095680u: goto label_7F095680;
    case 0x7F095684u: goto label_7F095684;
    case 0x7F095688u: goto label_7F095688;
    case 0x7F09568Cu: goto label_7F09568C;
    case 0x7F095690u: goto label_7F095690;
    case 0x7F095694u: goto label_7F095694;
    case 0x7F095698u: goto label_7F095698;
    case 0x7F09569Cu: goto label_7F09569C;
    case 0x7F0956A0u: goto label_7F0956A0;
    case 0x7F0956A4u: goto label_7F0956A4;
    case 0x7F0956A8u: goto label_7F0956A8;
    case 0x7F0956ACu: goto label_7F0956AC;
    case 0x7F0956B0u: goto label_7F0956B0;
    case 0x7F0956B4u: goto label_7F0956B4;
    case 0x7F0956B8u: goto label_7F0956B8;
    case 0x7F0956BCu: goto label_7F0956BC;
    case 0x7F0956C0u: goto label_7F0956C0;
    case 0x7F0956C4u: goto label_7F0956C4;
    case 0x7F0956C8u: goto label_7F0956C8;
    case 0x7F0956CCu: goto label_7F0956CC;
    case 0x7F0956D0u: goto label_7F0956D0;
    case 0x7F0956D4u: goto label_7F0956D4;
    case 0x7F0956D8u: goto label_7F0956D8;
    case 0x7F0956DCu: goto label_7F0956DC;
    case 0x7F0956E0u: goto label_7F0956E0;
    case 0x7F0956E4u: goto label_7F0956E4;
    case 0x7F0956E8u: goto label_7F0956E8;
    case 0x7F0956ECu: goto label_7F0956EC;
    case 0x7F0956F0u: goto label_7F0956F0;
    case 0x7F0956F4u: goto label_7F0956F4;
    case 0x7F0956F8u: goto label_7F0956F8;
    case 0x7F0956FCu: goto label_7F0956FC;
    case 0x7F095700u: goto label_7F095700;
    case 0x7F095704u: goto label_7F095704;
    case 0x7F095708u: goto label_7F095708;
    case 0x7F09570Cu: goto label_7F09570C;
    case 0x7F095710u: goto label_7F095710;
    case 0x7F095714u: goto label_7F095714;
    case 0x7F095718u: goto label_7F095718;
    case 0x7F09571Cu: goto label_7F09571C;
    case 0x7F095720u: goto label_7F095720;
    case 0x7F095724u: goto label_7F095724;
    case 0x7F095728u: goto label_7F095728;
    case 0x7F09572Cu: goto label_7F09572C;
    case 0x7F095730u: goto label_7F095730;
    case 0x7F095734u: goto label_7F095734;
    case 0x7F095738u: goto label_7F095738;
    case 0x7F09573Cu: goto label_7F09573C;
    case 0x7F095740u: goto label_7F095740;
    case 0x7F095744u: goto label_7F095744;
    case 0x7F095748u: goto label_7F095748;
    case 0x7F09574Cu: goto label_7F09574C;
    case 0x7F095750u: goto label_7F095750;
    case 0x7F095754u: goto label_7F095754;
    case 0x7F095758u: goto label_7F095758;
    case 0x7F09575Cu: goto label_7F09575C;
    case 0x7F095760u: goto label_7F095760;
    case 0x7F095764u: goto label_7F095764;
    case 0x7F095768u: goto label_7F095768;
    case 0x7F09576Cu: goto label_7F09576C;
    case 0x7F095770u: goto label_7F095770;
    case 0x7F095774u: goto label_7F095774;
    case 0x7F095778u: goto label_7F095778;
    case 0x7F09577Cu: goto label_7F09577C;
    case 0x7F095780u: goto label_7F095780;
    case 0x7F095784u: goto label_7F095784;
    case 0x7F095788u: goto label_7F095788;
    case 0x7F09578Cu: goto label_7F09578C;
    case 0x7F095790u: goto label_7F095790;
    case 0x7F095794u: goto label_7F095794;
    case 0x7F095798u: goto label_7F095798;
    case 0x7F09579Cu: goto label_7F09579C;
    case 0x7F0957A0u: goto label_7F0957A0;
    case 0x7F0957A4u: goto label_7F0957A4;
    case 0x7F0957A8u: goto label_7F0957A8;
    case 0x7F0957ACu: goto label_7F0957AC;
    case 0x7F0957B0u: goto label_7F0957B0;
    case 0x7F0957B4u: goto label_7F0957B4;
    case 0x7F0957B8u: goto label_7F0957B8;
    case 0x7F0957BCu: goto label_7F0957BC;
    case 0x7F0957C0u: goto label_7F0957C0;
    case 0x7F0957C4u: goto label_7F0957C4;
    case 0x7F0957C8u: goto label_7F0957C8;
    case 0x7F0957CCu: goto label_7F0957CC;
    case 0x7F0957D0u: goto label_7F0957D0;
    case 0x7F0957D4u: goto label_7F0957D4;
    case 0x7F0957D8u: goto label_7F0957D8;
    case 0x7F0957DCu: goto label_7F0957DC;
    case 0x7F0957E0u: goto label_7F0957E0;
    case 0x7F0957E4u: goto label_7F0957E4;
    case 0x7F0957E8u: goto label_7F0957E8;
    case 0x7F0957ECu: goto label_7F0957EC;
    case 0x7F0957F0u: goto label_7F0957F0;
    case 0x7F0957F4u: goto label_7F0957F4;
    case 0x7F0957F8u: goto label_7F0957F8;
    case 0x7F0957FCu: goto label_7F0957FC;
    case 0x7F095800u: goto label_7F095800;
    case 0x7F095804u: goto label_7F095804;
    case 0x7F095808u: goto label_7F095808;
    case 0x7F09580Cu: goto label_7F09580C;
    case 0x7F095810u: goto label_7F095810;
    case 0x7F095814u: goto label_7F095814;
    case 0x7F095818u: goto label_7F095818;
    case 0x7F09581Cu: goto label_7F09581C;
    case 0x7F095820u: goto label_7F095820;
    case 0x7F095824u: goto label_7F095824;
    case 0x7F095828u: goto label_7F095828;
    case 0x7F09582Cu: goto label_7F09582C;
    case 0x7F095830u: goto label_7F095830;
    case 0x7F095834u: goto label_7F095834;
    case 0x7F095838u: goto label_7F095838;
    case 0x7F09583Cu: goto label_7F09583C;
    case 0x7F095840u: goto label_7F095840;
    case 0x7F095844u: goto label_7F095844;
    case 0x7F095848u: goto label_7F095848;
    case 0x7F09584Cu: goto label_7F09584C;
    case 0x7F095850u: goto label_7F095850;
    case 0x7F095854u: goto label_7F095854;
    case 0x7F095858u: goto label_7F095858;
    case 0x7F09585Cu: goto label_7F09585C;
    case 0x7F095860u: goto label_7F095860;
    case 0x7F095864u: goto label_7F095864;
    case 0x7F095868u: goto label_7F095868;
    case 0x7F09586Cu: goto label_7F09586C;
    case 0x7F095870u: goto label_7F095870;
    case 0x7F095874u: goto label_7F095874;
    case 0x7F095878u: goto label_7F095878;
    case 0x7F09587Cu: goto label_7F09587C;
    case 0x7F095880u: goto label_7F095880;
    case 0x7F095884u: goto label_7F095884;
    case 0x7F095888u: goto label_7F095888;
    case 0x7F09588Cu: goto label_7F09588C;
    case 0x7F095890u: goto label_7F095890;
    case 0x7F095894u: goto label_7F095894;
    case 0x7F095898u: goto label_7F095898;
    case 0x7F09589Cu: goto label_7F09589C;
    case 0x7F0958A0u: goto label_7F0958A0;
    case 0x7F0958A4u: goto label_7F0958A4;
    case 0x7F0958A8u: goto label_7F0958A8;
    case 0x7F0958ACu: goto label_7F0958AC;
    case 0x7F0958B0u: goto label_7F0958B0;
    case 0x7F0958B4u: goto label_7F0958B4;
    case 0x7F0958B8u: goto label_7F0958B8;
    case 0x7F0958BCu: goto label_7F0958BC;
    case 0x7F0958C0u: goto label_7F0958C0;
    case 0x7F0958C4u: goto label_7F0958C4;
    case 0x7F0958C8u: goto label_7F0958C8;
    case 0x7F0958CCu: goto label_7F0958CC;
    case 0x7F0958D0u: goto label_7F0958D0;
    case 0x7F0958D4u: goto label_7F0958D4;
    case 0x7F0958D8u: goto label_7F0958D8;
    case 0x7F0958DCu: goto label_7F0958DC;
    case 0x7F0958E0u: goto label_7F0958E0;
    case 0x7F0958E4u: goto label_7F0958E4;
    case 0x7F0958E8u: goto label_7F0958E8;
    case 0x7F0958ECu: goto label_7F0958EC;
    case 0x7F0958F0u: goto label_7F0958F0;
    case 0x7F0958F4u: goto label_7F0958F4;
    case 0x7F0958F8u: goto label_7F0958F8;
    case 0x7F0958FCu: goto label_7F0958FC;
    case 0x7F095900u: goto label_7F095900;
    case 0x7F095904u: goto label_7F095904;
    case 0x7F095908u: goto label_7F095908;
    case 0x7F09590Cu: goto label_7F09590C;
    case 0x7F095910u: goto label_7F095910;
    case 0x7F095914u: goto label_7F095914;
    case 0x7F095918u: goto label_7F095918;
    case 0x7F09591Cu: goto label_7F09591C;
    case 0x7F095920u: goto label_7F095920;
    case 0x7F095924u: goto label_7F095924;
    case 0x7F095928u: goto label_7F095928;
    case 0x7F09592Cu: goto label_7F09592C;
    case 0x7F095930u: goto label_7F095930;
    case 0x7F095934u: goto label_7F095934;
    case 0x7F095938u: goto label_7F095938;
    case 0x7F09593Cu: goto label_7F09593C;
    case 0x7F095940u: goto label_7F095940;
    case 0x7F095944u: goto label_7F095944;
    case 0x7F095948u: goto label_7F095948;
    case 0x7F09594Cu: goto label_7F09594C;
    case 0x7F095950u: goto label_7F095950;
    case 0x7F095954u: goto label_7F095954;
    case 0x7F095958u: goto label_7F095958;
    case 0x7F09595Cu: goto label_7F09595C;
    case 0x7F095960u: goto label_7F095960;
    case 0x7F095964u: goto label_7F095964;
    case 0x7F095968u: goto label_7F095968;
    case 0x7F09596Cu: goto label_7F09596C;
    case 0x7F095970u: goto label_7F095970;
    case 0x7F095974u: goto label_7F095974;
    case 0x7F095978u: goto label_7F095978;
    case 0x7F09597Cu: goto label_7F09597C;
    case 0x7F095980u: goto label_7F095980;
    case 0x7F095984u: goto label_7F095984;
    case 0x7F095988u: goto label_7F095988;
    case 0x7F09598Cu: goto label_7F09598C;
    case 0x7F095990u: goto label_7F095990;
    case 0x7F095994u: goto label_7F095994;
    case 0x7F095998u: goto label_7F095998;
    case 0x7F09599Cu: goto label_7F09599C;
    case 0x7F0959A0u: goto label_7F0959A0;
    case 0x7F0959A4u: goto label_7F0959A4;
    case 0x7F0959A8u: goto label_7F0959A8;
    case 0x7F0959ACu: goto label_7F0959AC;
    case 0x7F0959B0u: goto label_7F0959B0;
    case 0x7F0959B4u: goto label_7F0959B4;
    case 0x7F0959B8u: goto label_7F0959B8;
    case 0x7F0959BCu: goto label_7F0959BC;
    case 0x7F0959C0u: goto label_7F0959C0;
    case 0x7F0959C4u: goto label_7F0959C4;
    case 0x7F0959C8u: goto label_7F0959C8;
    case 0x7F0959CCu: goto label_7F0959CC;
    case 0x7F0959D0u: goto label_7F0959D0;
    case 0x7F0959D4u: goto label_7F0959D4;
    case 0x7F0959D8u: goto label_7F0959D8;
    case 0x7F0959DCu: goto label_7F0959DC;
    case 0x7F0959E0u: goto label_7F0959E0;
    case 0x7F0959E4u: goto label_7F0959E4;
    case 0x7F0959E8u: goto label_7F0959E8;
    case 0x7F0959ECu: goto label_7F0959EC;
    case 0x7F0959F0u: goto label_7F0959F0;
    case 0x7F0959F4u: goto label_7F0959F4;
    case 0x7F0959F8u: goto label_7F0959F8;
    case 0x7F0959FCu: goto label_7F0959FC;
    case 0x7F095A00u: goto label_7F095A00;
    case 0x7F095A04u: goto label_7F095A04;
    case 0x7F095A08u: goto label_7F095A08;
    case 0x7F095A0Cu: goto label_7F095A0C;
    case 0x7F095A10u: goto label_7F095A10;
    case 0x7F095A14u: goto label_7F095A14;
    case 0x7F095A18u: goto label_7F095A18;
    case 0x7F095A1Cu: goto label_7F095A1C;
    case 0x7F095A20u: goto label_7F095A20;
    case 0x7F095A24u: goto label_7F095A24;
    case 0x7F095A28u: goto label_7F095A28;
    case 0x7F095A2Cu: goto label_7F095A2C;
    case 0x7F095A30u: goto label_7F095A30;
    case 0x7F095A34u: goto label_7F095A34;
    case 0x7F095A38u: goto label_7F095A38;
    case 0x7F095A3Cu: goto label_7F095A3C;
    case 0x7F095A40u: goto label_7F095A40;
    case 0x7F095A44u: goto label_7F095A44;
    case 0x7F095A48u: goto label_7F095A48;
    case 0x7F095A4Cu: goto label_7F095A4C;
    case 0x7F095A50u: goto label_7F095A50;
    case 0x7F095A54u: goto label_7F095A54;
    case 0x7F095A58u: goto label_7F095A58;
    case 0x7F095A5Cu: goto label_7F095A5C;
    case 0x7F095A60u: goto label_7F095A60;
    case 0x7F095A64u: goto label_7F095A64;
    case 0x7F095A68u: goto label_7F095A68;
    case 0x7F095A6Cu: goto label_7F095A6C;
    case 0x7F095A70u: goto label_7F095A70;
    case 0x7F095A74u: goto label_7F095A74;
    case 0x7F095A78u: goto label_7F095A78;
    case 0x7F095A7Cu: goto label_7F095A7C;
    case 0x7F095A80u: goto label_7F095A80;
    case 0x7F095A84u: goto label_7F095A84;
    case 0x7F095A88u: goto label_7F095A88;
    case 0x7F095A8Cu: goto label_7F095A8C;
    case 0x7F095A90u: goto label_7F095A90;
    case 0x7F095A94u: goto label_7F095A94;
    case 0x7F095A98u: goto label_7F095A98;
    case 0x7F095A9Cu: goto label_7F095A9C;
    case 0x7F095AA0u: goto label_7F095AA0;
    case 0x7F095AA4u: goto label_7F095AA4;
    case 0x7F095AA8u: goto label_7F095AA8;
    case 0x7F095AACu: goto label_7F095AAC;
    case 0x7F095AB0u: goto label_7F095AB0;
    case 0x7F095AB4u: goto label_7F095AB4;
    case 0x7F095AB8u: goto label_7F095AB8;
    case 0x7F095ABCu: goto label_7F095ABC;
    case 0x7F095AC0u: goto label_7F095AC0;
    case 0x7F095AC4u: goto label_7F095AC4;
    case 0x7F095AC8u: goto label_7F095AC8;
    case 0x7F095ACCu: goto label_7F095ACC;
    case 0x7F095AD0u: goto label_7F095AD0;
    case 0x7F095AD4u: goto label_7F095AD4;
    case 0x7F095AD8u: goto label_7F095AD8;
    case 0x7F095ADCu: goto label_7F095ADC;
    case 0x7F095AE0u: goto label_7F095AE0;
    case 0x7F095AE4u: goto label_7F095AE4;
    case 0x7F095AE8u: goto label_7F095AE8;
    case 0x7F095AECu: goto label_7F095AEC;
    case 0x7F095AF0u: goto label_7F095AF0;
    case 0x7F095AF4u: goto label_7F095AF4;
    case 0x7F095AF8u: goto label_7F095AF8;
    case 0x7F095AFCu: goto label_7F095AFC;
    case 0x7F095B00u: goto label_7F095B00;
    case 0x7F095B04u: goto label_7F095B04;
    case 0x7F095B08u: goto label_7F095B08;
    case 0x7F095B0Cu: goto label_7F095B0C;
    case 0x7F095B10u: goto label_7F095B10;
    case 0x7F095B14u: goto label_7F095B14;
    case 0x7F095B18u: goto label_7F095B18;
    case 0x7F095B1Cu: goto label_7F095B1C;
    case 0x7F095B20u: goto label_7F095B20;
    case 0x7F095B24u: goto label_7F095B24;
    case 0x7F095B28u: goto label_7F095B28;
    case 0x7F095B2Cu: goto label_7F095B2C;
    case 0x7F095B30u: goto label_7F095B30;
    case 0x7F095B34u: goto label_7F095B34;
    case 0x7F095B38u: goto label_7F095B38;
    case 0x7F095B3Cu: goto label_7F095B3C;
    case 0x7F095B40u: goto label_7F095B40;
    case 0x7F095B44u: goto label_7F095B44;
    case 0x7F095B48u: goto label_7F095B48;
    case 0x7F095B4Cu: goto label_7F095B4C;
    case 0x7F095B50u: goto label_7F095B50;
    case 0x7F095B54u: goto label_7F095B54;
    case 0x7F095B58u: goto label_7F095B58;
    case 0x7F095B5Cu: goto label_7F095B5C;
    case 0x7F095B60u: goto label_7F095B60;
    case 0x7F095B64u: goto label_7F095B64;
    case 0x7F095B68u: goto label_7F095B68;
    case 0x7F095B6Cu: goto label_7F095B6C;
    case 0x7F095B70u: goto label_7F095B70;
    case 0x7F095B74u: goto label_7F095B74;
    case 0x7F095B78u: goto label_7F095B78;
    case 0x7F095B7Cu: goto label_7F095B7C;
    case 0x7F095B80u: goto label_7F095B80;
    case 0x7F095B84u: goto label_7F095B84;
    case 0x7F095B88u: goto label_7F095B88;
    case 0x7F095B8Cu: goto label_7F095B8C;
    case 0x7F095B90u: goto label_7F095B90;
    case 0x7F095B94u: goto label_7F095B94;
    case 0x7F095B98u: goto label_7F095B98;
    case 0x7F095B9Cu: goto label_7F095B9C;
    case 0x7F095BA0u: goto label_7F095BA0;
    case 0x7F095BA4u: goto label_7F095BA4;
    case 0x7F095BA8u: goto label_7F095BA8;
    case 0x7F095BACu: goto label_7F095BAC;
    case 0x7F095BB0u: goto label_7F095BB0;
    case 0x7F095BB4u: goto label_7F095BB4;
    case 0x7F095BB8u: goto label_7F095BB8;
    case 0x7F095BBCu: goto label_7F095BBC;
    case 0x7F095BC0u: goto label_7F095BC0;
    case 0x7F095BC4u: goto label_7F095BC4;
    case 0x7F095BC8u: goto label_7F095BC8;
    case 0x7F095BCCu: goto label_7F095BCC;
    case 0x7F095BD0u: goto label_7F095BD0;
    case 0x7F095BD4u: goto label_7F095BD4;
    case 0x7F095BD8u: goto label_7F095BD8;
    case 0x7F095BDCu: goto label_7F095BDC;
    case 0x7F095BE0u: goto label_7F095BE0;
    case 0x7F095BE4u: goto label_7F095BE4;
    case 0x7F095BE8u: goto label_7F095BE8;
    case 0x7F095BECu: goto label_7F095BEC;
    case 0x7F095BF0u: goto label_7F095BF0;
    case 0x7F095BF4u: goto label_7F095BF4;
    case 0x7F095BF8u: goto label_7F095BF8;
    case 0x7F095BFCu: goto label_7F095BFC;
    case 0x7F095C00u: goto label_7F095C00;
    case 0x7F095C04u: goto label_7F095C04;
    case 0x7F095C08u: goto label_7F095C08;
    case 0x7F095C0Cu: goto label_7F095C0C;
    case 0x7F095C10u: goto label_7F095C10;
    case 0x7F095C14u: goto label_7F095C14;
    case 0x7F095C18u: goto label_7F095C18;
    case 0x7F095C1Cu: goto label_7F095C1C;
    case 0x7F095C20u: goto label_7F095C20;
    case 0x7F095C24u: goto label_7F095C24;
    case 0x7F095C28u: goto label_7F095C28;
    case 0x7F095C2Cu: goto label_7F095C2C;
    case 0x7F095C30u: goto label_7F095C30;
    case 0x7F095C34u: goto label_7F095C34;
    case 0x7F095C38u: goto label_7F095C38;
    case 0x7F095C3Cu: goto label_7F095C3C;
    case 0x7F095C40u: goto label_7F095C40;
    case 0x7F095C44u: goto label_7F095C44;
    case 0x7F095C48u: goto label_7F095C48;
    case 0x7F095C4Cu: goto label_7F095C4C;
    case 0x7F095C50u: goto label_7F095C50;
    case 0x7F095C54u: goto label_7F095C54;
    case 0x7F095C58u: goto label_7F095C58;
    case 0x7F095C5Cu: goto label_7F095C5C;
    case 0x7F095C60u: goto label_7F095C60;
    case 0x7F095C64u: goto label_7F095C64;
    case 0x7F095C68u: goto label_7F095C68;
    case 0x7F095C6Cu: goto label_7F095C6C;
    case 0x7F095C70u: goto label_7F095C70;
    case 0x7F095C74u: goto label_7F095C74;
    case 0x7F095C78u: goto label_7F095C78;
    case 0x7F095C7Cu: goto label_7F095C7C;
    case 0x7F095C80u: goto label_7F095C80;
    case 0x7F095C84u: goto label_7F095C84;
    case 0x7F095C88u: goto label_7F095C88;
    case 0x7F095C8Cu: goto label_7F095C8C;
    case 0x7F095C90u: goto label_7F095C90;
    case 0x7F095C94u: goto label_7F095C94;
    case 0x7F095C98u: goto label_7F095C98;
    case 0x7F095C9Cu: goto label_7F095C9C;
    case 0x7F095CA0u: goto label_7F095CA0;
    case 0x7F095CA4u: goto label_7F095CA4;
    case 0x7F095CA8u: goto label_7F095CA8;
    case 0x7F095CACu: goto label_7F095CAC;
    case 0x7F095CB0u: goto label_7F095CB0;
    case 0x7F095CB4u: goto label_7F095CB4;
    case 0x7F095CB8u: goto label_7F095CB8;
    case 0x7F095CBCu: goto label_7F095CBC;
    case 0x7F095CC0u: goto label_7F095CC0;
    case 0x7F095CC4u: goto label_7F095CC4;
    case 0x7F095CC8u: goto label_7F095CC8;
    case 0x7F095CCCu: goto label_7F095CCC;
    case 0x7F095CD0u: goto label_7F095CD0;
    case 0x7F095CD4u: goto label_7F095CD4;
    case 0x7F095CD8u: goto label_7F095CD8;
    case 0x7F095CDCu: goto label_7F095CDC;
    case 0x7F095CE0u: goto label_7F095CE0;
    case 0x7F095CE4u: goto label_7F095CE4;
    case 0x7F095CE8u: goto label_7F095CE8;
    case 0x7F095CECu: goto label_7F095CEC;
    case 0x7F095CF0u: goto label_7F095CF0;
    case 0x7F095CF4u: goto label_7F095CF4;
    case 0x7F095CF8u: goto label_7F095CF8;
    case 0x7F095CFCu: goto label_7F095CFC;
    case 0x7F095D00u: goto label_7F095D00;
    case 0x7F095D04u: goto label_7F095D04;
    case 0x7F095D08u: goto label_7F095D08;
    case 0x7F095D0Cu: goto label_7F095D0C;
    case 0x7F095D10u: goto label_7F095D10;
    case 0x7F095D14u: goto label_7F095D14;
    case 0x7F095D18u: goto label_7F095D18;
    case 0x7F095D1Cu: goto label_7F095D1C;
    case 0x7F095D20u: goto label_7F095D20;
    case 0x7F095D24u: goto label_7F095D24;
    case 0x7F095D28u: goto label_7F095D28;
    case 0x7F095D2Cu: goto label_7F095D2C;
    case 0x7F095D30u: goto label_7F095D30;
    case 0x7F095D34u: goto label_7F095D34;
    case 0x7F095D38u: goto label_7F095D38;
    case 0x7F095D3Cu: goto label_7F095D3C;
    case 0x7F095D40u: goto label_7F095D40;
    case 0x7F095D44u: goto label_7F095D44;
    case 0x7F095D48u: goto label_7F095D48;
    case 0x7F095D4Cu: goto label_7F095D4C;
    case 0x7F095D50u: goto label_7F095D50;
    case 0x7F095D54u: goto label_7F095D54;
    case 0x7F095D58u: goto label_7F095D58;
    case 0x7F095D5Cu: goto label_7F095D5C;
    case 0x7F095D60u: goto label_7F095D60;
    case 0x7F095D64u: goto label_7F095D64;
    case 0x7F095D68u: goto label_7F095D68;
    case 0x7F095D6Cu: goto label_7F095D6C;
    case 0x7F095D70u: goto label_7F095D70;
    case 0x7F095D74u: goto label_7F095D74;
    case 0x7F095D78u: goto label_7F095D78;
    case 0x7F095D7Cu: goto label_7F095D7C;
    case 0x7F095D80u: goto label_7F095D80;
    case 0x7F095D84u: goto label_7F095D84;
    case 0x7F095D88u: goto label_7F095D88;
    case 0x7F095D8Cu: goto label_7F095D8C;
    case 0x7F095D90u: goto label_7F095D90;
    case 0x7F095D94u: goto label_7F095D94;
    case 0x7F095D98u: goto label_7F095D98;
    case 0x7F095D9Cu: goto label_7F095D9C;
    case 0x7F095DA0u: goto label_7F095DA0;
    case 0x7F095DA4u: goto label_7F095DA4;
    case 0x7F095DA8u: goto label_7F095DA8;
    case 0x7F095DACu: goto label_7F095DAC;
    case 0x7F095DB0u: goto label_7F095DB0;
    case 0x7F095DB4u: goto label_7F095DB4;
    case 0x7F095DB8u: goto label_7F095DB8;
    case 0x7F095DBCu: goto label_7F095DBC;
    case 0x7F095DC0u: goto label_7F095DC0;
    case 0x7F095DC4u: goto label_7F095DC4;
    case 0x7F095DC8u: goto label_7F095DC8;
    case 0x7F095DCCu: goto label_7F095DCC;
    case 0x7F095DD0u: goto label_7F095DD0;
    case 0x7F095DD4u: goto label_7F095DD4;
    case 0x7F095DD8u: goto label_7F095DD8;
    case 0x7F095DDCu: goto label_7F095DDC;
    case 0x7F095DE0u: goto label_7F095DE0;
    case 0x7F095DE4u: goto label_7F095DE4;
    case 0x7F095DE8u: goto label_7F095DE8;
    case 0x7F095DECu: goto label_7F095DEC;
    case 0x7F095DF0u: goto label_7F095DF0;
    case 0x7F095DF4u: goto label_7F095DF4;
    case 0x7F095DF8u: goto label_7F095DF8;
    case 0x7F095DFCu: goto label_7F095DFC;
    case 0x7F095E00u: goto label_7F095E00;
    case 0x7F095E04u: goto label_7F095E04;
    case 0x7F095E08u: goto label_7F095E08;
    case 0x7F095E0Cu: goto label_7F095E0C;
    case 0x7F095E10u: goto label_7F095E10;
    case 0x7F095E14u: goto label_7F095E14;
    case 0x7F095E18u: goto label_7F095E18;
    case 0x7F095E1Cu: goto label_7F095E1C;
    case 0x7F095E20u: goto label_7F095E20;
    case 0x7F095E24u: goto label_7F095E24;
    case 0x7F095E28u: goto label_7F095E28;
    case 0x7F095E2Cu: goto label_7F095E2C;
    case 0x7F095E30u: goto label_7F095E30;
    case 0x7F095E34u: goto label_7F095E34;
    case 0x7F095E38u: goto label_7F095E38;
    case 0x7F095E3Cu: goto label_7F095E3C;
    case 0x7F095E40u: goto label_7F095E40;
    case 0x7F095E44u: goto label_7F095E44;
    case 0x7F095E48u: goto label_7F095E48;
    case 0x7F095E4Cu: goto label_7F095E4C;
    case 0x7F095E50u: goto label_7F095E50;
    case 0x7F095E54u: goto label_7F095E54;
    case 0x7F095E58u: goto label_7F095E58;
    case 0x7F095E5Cu: goto label_7F095E5C;
    case 0x7F095E60u: goto label_7F095E60;
    case 0x7F095E64u: goto label_7F095E64;
    case 0x7F095E68u: goto label_7F095E68;
    case 0x7F095E6Cu: goto label_7F095E6C;
    case 0x7F095E70u: goto label_7F095E70;
    case 0x7F095E74u: goto label_7F095E74;
    case 0x7F095E78u: goto label_7F095E78;
    case 0x7F095E7Cu: goto label_7F095E7C;
    case 0x7F095E80u: goto label_7F095E80;
    case 0x7F095E84u: goto label_7F095E84;
    case 0x7F095E88u: goto label_7F095E88;
    case 0x7F095E8Cu: goto label_7F095E8C;
    case 0x7F095E90u: goto label_7F095E90;
    case 0x7F095E94u: goto label_7F095E94;
    case 0x7F095E98u: goto label_7F095E98;
    case 0x7F095E9Cu: goto label_7F095E9C;
    case 0x7F095EA0u: goto label_7F095EA0;
    case 0x7F095EA4u: goto label_7F095EA4;
    case 0x7F095EA8u: goto label_7F095EA8;
    case 0x7F095EACu: goto label_7F095EAC;
    case 0x7F095EB0u: goto label_7F095EB0;
    case 0x7F095EB4u: goto label_7F095EB4;
    case 0x7F095EB8u: goto label_7F095EB8;
    case 0x7F095EBCu: goto label_7F095EBC;
    case 0x7F095EC0u: goto label_7F095EC0;
    case 0x7F095EC4u: goto label_7F095EC4;
    case 0x7F095EC8u: goto label_7F095EC8;
    case 0x7F095ECCu: goto label_7F095ECC;
    case 0x7F095ED0u: goto label_7F095ED0;
    case 0x7F095ED4u: goto label_7F095ED4;
    case 0x7F095ED8u: goto label_7F095ED8;
    case 0x7F095EDCu: goto label_7F095EDC;
    case 0x7F095EE0u: goto label_7F095EE0;
    case 0x7F095EE4u: goto label_7F095EE4;
    case 0x7F095EE8u: goto label_7F095EE8;
    case 0x7F095EECu: goto label_7F095EEC;
    case 0x7F095EF0u: goto label_7F095EF0;
    case 0x7F095EF4u: goto label_7F095EF4;
    case 0x7F095EF8u: goto label_7F095EF8;
    case 0x7F095EFCu: goto label_7F095EFC;
    case 0x7F095F00u: goto label_7F095F00;
    case 0x7F095F04u: goto label_7F095F04;
    case 0x7F095F08u: goto label_7F095F08;
    case 0x7F095F0Cu: goto label_7F095F0C;
    case 0x7F095F10u: goto label_7F095F10;
    case 0x7F095F14u: goto label_7F095F14;
    case 0x7F095F18u: goto label_7F095F18;
    case 0x7F095F1Cu: goto label_7F095F1C;
    case 0x7F095F20u: goto label_7F095F20;
    case 0x7F095F24u: goto label_7F095F24;
    case 0x7F095F28u: goto label_7F095F28;
    case 0x7F095F2Cu: goto label_7F095F2C;
    case 0x7F095F30u: goto label_7F095F30;
    case 0x7F095F34u: goto label_7F095F34;
    case 0x7F095F38u: goto label_7F095F38;
    case 0x7F095F3Cu: goto label_7F095F3C;
    case 0x7F095F40u: goto label_7F095F40;
    case 0x7F095F44u: goto label_7F095F44;
    case 0x7F095F48u: goto label_7F095F48;
    case 0x7F095F4Cu: goto label_7F095F4C;
    case 0x7F095F50u: goto label_7F095F50;
    case 0x7F095F54u: goto label_7F095F54;
    case 0x7F095F58u: goto label_7F095F58;
    case 0x7F095F5Cu: goto label_7F095F5C;
    case 0x7F095F60u: goto label_7F095F60;
    case 0x7F095F64u: goto label_7F095F64;
    case 0x7F095F68u: goto label_7F095F68;
    case 0x7F095F6Cu: goto label_7F095F6C;
    case 0x7F095F70u: goto label_7F095F70;
    case 0x7F095F74u: goto label_7F095F74;
    case 0x7F095F78u: goto label_7F095F78;
    case 0x7F095F7Cu: goto label_7F095F7C;
    case 0x7F095F80u: goto label_7F095F80;
    case 0x7F095F84u: goto label_7F095F84;
    case 0x7F095F88u: goto label_7F095F88;
    case 0x7F095F8Cu: goto label_7F095F8C;
    case 0x7F095F90u: goto label_7F095F90;
    case 0x7F095F94u: goto label_7F095F94;
    case 0x7F095F98u: goto label_7F095F98;
    case 0x7F095F9Cu: goto label_7F095F9C;
    case 0x7F095FA0u: goto label_7F095FA0;
    case 0x7F095FA4u: goto label_7F095FA4;
    case 0x7F095FA8u: goto label_7F095FA8;
    case 0x7F095FACu: goto label_7F095FAC;
    case 0x7F095FB0u: goto label_7F095FB0;
    case 0x7F095FB4u: goto label_7F095FB4;
    case 0x7F095FB8u: goto label_7F095FB8;
    case 0x7F095FBCu: goto label_7F095FBC;
    case 0x7F095FC0u: goto label_7F095FC0;
    case 0x7F095FC4u: goto label_7F095FC4;
    case 0x7F095FC8u: goto label_7F095FC8;
    case 0x7F095FCCu: goto label_7F095FCC;
    case 0x7F095FD0u: goto label_7F095FD0;
    case 0x7F095FD4u: goto label_7F095FD4;
    case 0x7F095FD8u: goto label_7F095FD8;
    case 0x7F095FDCu: goto label_7F095FDC;
    case 0x7F095FE0u: goto label_7F095FE0;
    case 0x7F095FE4u: goto label_7F095FE4;
    case 0x7F095FE8u: goto label_7F095FE8;
    case 0x7F095FECu: goto label_7F095FEC;
    case 0x7F095FF0u: goto label_7F095FF0;
    case 0x7F095FF4u: goto label_7F095FF4;
    case 0x7F095FF8u: goto label_7F095FF8;
    case 0x7F095FFCu: goto label_7F095FFC;
    case 0x7F096000u: goto label_7F096000;
    case 0x7F096004u: goto label_7F096004;
    case 0x7F096008u: goto label_7F096008;
    case 0x7F09600Cu: goto label_7F09600C;
    case 0x7F096010u: goto label_7F096010;
    case 0x7F096014u: goto label_7F096014;
    case 0x7F096018u: goto label_7F096018;
    case 0x7F09601Cu: goto label_7F09601C;
    case 0x7F096020u: goto label_7F096020;
    case 0x7F096024u: goto label_7F096024;
    case 0x7F096028u: goto label_7F096028;
    case 0x7F09602Cu: goto label_7F09602C;
    case 0x7F096030u: goto label_7F096030;
    case 0x7F096034u: goto label_7F096034;
    case 0x7F096038u: goto label_7F096038;
    case 0x7F09603Cu: goto label_7F09603C;
    case 0x7F096040u: goto label_7F096040;
    case 0x7F096044u: goto label_7F096044;
    case 0x7F096048u: goto label_7F096048;
    case 0x7F09604Cu: goto label_7F09604C;
    case 0x7F096050u: goto label_7F096050;
    case 0x7F096054u: goto label_7F096054;
    case 0x7F096058u: goto label_7F096058;
    case 0x7F09605Cu: goto label_7F09605C;
    case 0x7F096060u: goto label_7F096060;
    case 0x7F096064u: goto label_7F096064;
    case 0x7F096068u: goto label_7F096068;
    case 0x7F09606Cu: goto label_7F09606C;
    case 0x7F096070u: goto label_7F096070;
    case 0x7F096074u: goto label_7F096074;
    case 0x7F096078u: goto label_7F096078;
    case 0x7F09607Cu: goto label_7F09607C;
    case 0x7F096080u: goto label_7F096080;
    case 0x7F096084u: goto label_7F096084;
    case 0x7F096088u: goto label_7F096088;
    case 0x7F09608Cu: goto label_7F09608C;
    case 0x7F096090u: goto label_7F096090;
    case 0x7F096094u: goto label_7F096094;
    case 0x7F096098u: goto label_7F096098;
    case 0x7F09609Cu: goto label_7F09609C;
    case 0x7F0960A0u: goto label_7F0960A0;
    case 0x7F0960A4u: goto label_7F0960A4;
    case 0x7F0960A8u: goto label_7F0960A8;
    case 0x7F0960ACu: goto label_7F0960AC;
    case 0x7F0960B0u: goto label_7F0960B0;
    case 0x7F0960B4u: goto label_7F0960B4;
    case 0x7F0960B8u: goto label_7F0960B8;
    case 0x7F0960BCu: goto label_7F0960BC;
    case 0x7F0960C0u: goto label_7F0960C0;
    case 0x7F0960C4u: goto label_7F0960C4;
    case 0x7F0960C8u: goto label_7F0960C8;
    case 0x7F0960CCu: goto label_7F0960CC;
    case 0x7F0960D0u: goto label_7F0960D0;
    case 0x7F0960D4u: goto label_7F0960D4;
    case 0x7F0960D8u: goto label_7F0960D8;
    case 0x7F0960DCu: goto label_7F0960DC;
    case 0x7F0960E0u: goto label_7F0960E0;
    case 0x7F0960E4u: goto label_7F0960E4;
    case 0x7F0960E8u: goto label_7F0960E8;
    case 0x7F0960ECu: goto label_7F0960EC;
    case 0x7F0960F0u: goto label_7F0960F0;
    case 0x7F0960F4u: goto label_7F0960F4;
    case 0x7F0960F8u: goto label_7F0960F8;
    case 0x7F0960FCu: goto label_7F0960FC;
    case 0x7F096100u: goto label_7F096100;
    case 0x7F096104u: goto label_7F096104;
    case 0x7F096108u: goto label_7F096108;
    case 0x7F09610Cu: goto label_7F09610C;
    case 0x7F096110u: goto label_7F096110;
    case 0x7F096114u: goto label_7F096114;
    case 0x7F096118u: goto label_7F096118;
    case 0x7F09611Cu: goto label_7F09611C;
    case 0x7F096120u: goto label_7F096120;
    case 0x7F096124u: goto label_7F096124;
    case 0x7F096128u: goto label_7F096128;
    case 0x7F09612Cu: goto label_7F09612C;
    case 0x7F096130u: goto label_7F096130;
    case 0x7F096134u: goto label_7F096134;
    case 0x7F096138u: goto label_7F096138;
    case 0x7F09613Cu: goto label_7F09613C;
    case 0x7F096140u: goto label_7F096140;
    case 0x7F096144u: goto label_7F096144;
    case 0x7F096148u: goto label_7F096148;
    case 0x7F09614Cu: goto label_7F09614C;
    case 0x7F096150u: goto label_7F096150;
    case 0x7F096154u: goto label_7F096154;
    case 0x7F096158u: goto label_7F096158;
    case 0x7F09615Cu: goto label_7F09615C;
    case 0x7F096160u: goto label_7F096160;
    case 0x7F096164u: goto label_7F096164;
    case 0x7F096168u: goto label_7F096168;
    case 0x7F09616Cu: goto label_7F09616C;
    case 0x7F096170u: goto label_7F096170;
    case 0x7F096174u: goto label_7F096174;
    case 0x7F096178u: goto label_7F096178;
    case 0x7F09617Cu: goto label_7F09617C;
    case 0x7F096180u: goto label_7F096180;
    case 0x7F096184u: goto label_7F096184;
    case 0x7F096188u: goto label_7F096188;
    case 0x7F09618Cu: goto label_7F09618C;
    case 0x7F096190u: goto label_7F096190;
    case 0x7F096194u: goto label_7F096194;
    case 0x7F096198u: goto label_7F096198;
    case 0x7F09619Cu: goto label_7F09619C;
    case 0x7F0961A0u: goto label_7F0961A0;
    case 0x7F0961A4u: goto label_7F0961A4;
    case 0x7F0961A8u: goto label_7F0961A8;
    case 0x7F0961ACu: goto label_7F0961AC;
    case 0x7F0961B0u: goto label_7F0961B0;
    case 0x7F0961B4u: goto label_7F0961B4;
    case 0x7F0961B8u: goto label_7F0961B8;
    case 0x7F0961BCu: goto label_7F0961BC;
    case 0x7F0961C0u: goto label_7F0961C0;
    case 0x7F0961C4u: goto label_7F0961C4;
    case 0x7F0961C8u: goto label_7F0961C8;
    case 0x7F0961CCu: goto label_7F0961CC;
    case 0x7F0961D0u: goto label_7F0961D0;
    case 0x7F0961D4u: goto label_7F0961D4;
    case 0x7F0961D8u: goto label_7F0961D8;
    case 0x7F0961DCu: goto label_7F0961DC;
    case 0x7F0961E0u: goto label_7F0961E0;
    case 0x7F0961E4u: goto label_7F0961E4;
    case 0x7F0961E8u: goto label_7F0961E8;
    case 0x7F0961ECu: goto label_7F0961EC;
    case 0x7F0961F0u: goto label_7F0961F0;
    case 0x7F0961F4u: goto label_7F0961F4;
    case 0x7F0961F8u: goto label_7F0961F8;
    case 0x7F0961FCu: goto label_7F0961FC;
    case 0x7F096200u: goto label_7F096200;
    case 0x7F096204u: goto label_7F096204;
    case 0x7F096208u: goto label_7F096208;
    case 0x7F09620Cu: goto label_7F09620C;
    case 0x7F096210u: goto label_7F096210;
    case 0x7F096214u: goto label_7F096214;
    case 0x7F096218u: goto label_7F096218;
    case 0x7F09621Cu: goto label_7F09621C;
    case 0x7F096220u: goto label_7F096220;
    case 0x7F096224u: goto label_7F096224;
    case 0x7F096228u: goto label_7F096228;
    case 0x7F09622Cu: goto label_7F09622C;
    case 0x7F096230u: goto label_7F096230;
    case 0x7F096234u: goto label_7F096234;
    case 0x7F096238u: goto label_7F096238;
    case 0x7F09623Cu: goto label_7F09623C;
    case 0x7F096240u: goto label_7F096240;
    case 0x7F096244u: goto label_7F096244;
    case 0x7F096248u: goto label_7F096248;
    case 0x7F09624Cu: goto label_7F09624C;
    case 0x7F096250u: goto label_7F096250;
    case 0x7F096254u: goto label_7F096254;
    case 0x7F096258u: goto label_7F096258;
    case 0x7F09625Cu: goto label_7F09625C;
    case 0x7F096260u: goto label_7F096260;
    case 0x7F096264u: goto label_7F096264;
    case 0x7F096268u: goto label_7F096268;
    case 0x7F09626Cu: goto label_7F09626C;
    case 0x7F096270u: goto label_7F096270;
    case 0x7F096274u: goto label_7F096274;
    case 0x7F096278u: goto label_7F096278;
    case 0x7F09627Cu: goto label_7F09627C;
    case 0x7F096280u: goto label_7F096280;
    case 0x7F096284u: goto label_7F096284;
    case 0x7F096288u: goto label_7F096288;
    case 0x7F09628Cu: goto label_7F09628C;
    case 0x7F096290u: goto label_7F096290;
    case 0x7F096294u: goto label_7F096294;
    case 0x7F096298u: goto label_7F096298;
    case 0x7F09629Cu: goto label_7F09629C;
    case 0x7F0962A0u: goto label_7F0962A0;
    case 0x7F0962A4u: goto label_7F0962A4;
    case 0x7F0962A8u: goto label_7F0962A8;
    case 0x7F0962ACu: goto label_7F0962AC;
    case 0x7F0962B0u: goto label_7F0962B0;
    case 0x7F0962B4u: goto label_7F0962B4;
    case 0x7F0962B8u: goto label_7F0962B8;
    case 0x7F0962BCu: goto label_7F0962BC;
    case 0x7F0962C0u: goto label_7F0962C0;
    case 0x7F0962C4u: goto label_7F0962C4;
    case 0x7F0962C8u: goto label_7F0962C8;
    case 0x7F0962CCu: goto label_7F0962CC;
    case 0x7F0962D0u: goto label_7F0962D0;
    case 0x7F0962D4u: goto label_7F0962D4;
    case 0x7F0962D8u: goto label_7F0962D8;
    case 0x7F0962DCu: goto label_7F0962DC;
    case 0x7F0962E0u: goto label_7F0962E0;
    case 0x7F0962E4u: goto label_7F0962E4;
    case 0x7F0962E8u: goto label_7F0962E8;
    case 0x7F0962ECu: goto label_7F0962EC;
    case 0x7F0962F0u: goto label_7F0962F0;
    case 0x7F0962F4u: goto label_7F0962F4;
    case 0x7F0962F8u: goto label_7F0962F8;
    case 0x7F0962FCu: goto label_7F0962FC;
    case 0x7F096300u: goto label_7F096300;
    case 0x7F096304u: goto label_7F096304;
    case 0x7F096308u: goto label_7F096308;
    case 0x7F09630Cu: goto label_7F09630C;
    case 0x7F096310u: goto label_7F096310;
    case 0x7F096314u: goto label_7F096314;
    case 0x7F096318u: goto label_7F096318;
    case 0x7F09631Cu: goto label_7F09631C;
    case 0x7F096320u: goto label_7F096320;
    case 0x7F096324u: goto label_7F096324;
    case 0x7F096328u: goto label_7F096328;
    case 0x7F09632Cu: goto label_7F09632C;
    case 0x7F096330u: goto label_7F096330;
    case 0x7F096334u: goto label_7F096334;
    case 0x7F096338u: goto label_7F096338;
    case 0x7F09633Cu: goto label_7F09633C;
    case 0x7F096340u: goto label_7F096340;
    case 0x7F096344u: goto label_7F096344;
    case 0x7F096348u: goto label_7F096348;
    case 0x7F09634Cu: goto label_7F09634C;
    case 0x7F096350u: goto label_7F096350;
    case 0x7F096354u: goto label_7F096354;
    case 0x7F096358u: goto label_7F096358;
    case 0x7F09635Cu: goto label_7F09635C;
    case 0x7F096360u: goto label_7F096360;
    case 0x7F096364u: goto label_7F096364;
    case 0x7F096368u: goto label_7F096368;
    case 0x7F09636Cu: goto label_7F09636C;
    case 0x7F096370u: goto label_7F096370;
    case 0x7F096374u: goto label_7F096374;
    case 0x7F096378u: goto label_7F096378;
    case 0x7F09637Cu: goto label_7F09637C;
    case 0x7F096380u: goto label_7F096380;
    case 0x7F096384u: goto label_7F096384;
    case 0x7F096388u: goto label_7F096388;
    case 0x7F09638Cu: goto label_7F09638C;
    case 0x7F096390u: goto label_7F096390;
    case 0x7F096394u: goto label_7F096394;
    case 0x7F096398u: goto label_7F096398;
    case 0x7F09639Cu: goto label_7F09639C;
    case 0x7F0963A0u: goto label_7F0963A0;
    case 0x7F0963A4u: goto label_7F0963A4;
    case 0x7F0963A8u: goto label_7F0963A8;
    case 0x7F0963ACu: goto label_7F0963AC;
    case 0x7F0963B0u: goto label_7F0963B0;
    case 0x7F0963B4u: goto label_7F0963B4;
    case 0x7F0963B8u: goto label_7F0963B8;
    case 0x7F0963BCu: goto label_7F0963BC;
    case 0x7F0963C0u: goto label_7F0963C0;
    case 0x7F0963C4u: goto label_7F0963C4;
    case 0x7F0963C8u: goto label_7F0963C8;
    case 0x7F0963CCu: goto label_7F0963CC;
    case 0x7F0963D0u: goto label_7F0963D0;
    case 0x7F0963D4u: goto label_7F0963D4;
    case 0x7F0963D8u: goto label_7F0963D8;
    case 0x7F0963DCu: goto label_7F0963DC;
    case 0x7F0963E0u: goto label_7F0963E0;
    case 0x7F0963E4u: goto label_7F0963E4;
    case 0x7F0963E8u: goto label_7F0963E8;
    case 0x7F0963ECu: goto label_7F0963EC;
    case 0x7F0963F0u: goto label_7F0963F0;
    case 0x7F0963F4u: goto label_7F0963F4;
    case 0x7F0963F8u: goto label_7F0963F8;
    case 0x7F0963FCu: goto label_7F0963FC;
    case 0x7F096400u: goto label_7F096400;
    case 0x7F096404u: goto label_7F096404;
    case 0x7F096408u: goto label_7F096408;
    case 0x7F09640Cu: goto label_7F09640C;
    case 0x7F096410u: goto label_7F096410;
    case 0x7F096414u: goto label_7F096414;
    case 0x7F096418u: goto label_7F096418;
    case 0x7F09641Cu: goto label_7F09641C;
    case 0x7F096420u: goto label_7F096420;
    case 0x7F096424u: goto label_7F096424;
    case 0x7F096428u: goto label_7F096428;
    case 0x7F09642Cu: goto label_7F09642C;
    case 0x7F096430u: goto label_7F096430;
    case 0x7F096434u: goto label_7F096434;
    case 0x7F096438u: goto label_7F096438;
    case 0x7F09643Cu: goto label_7F09643C;
    case 0x7F096440u: goto label_7F096440;
    case 0x7F096444u: goto label_7F096444;
    case 0x7F096448u: goto label_7F096448;
    case 0x7F09644Cu: goto label_7F09644C;
    case 0x7F096450u: goto label_7F096450;
    case 0x7F096454u: goto label_7F096454;
    case 0x7F096458u: goto label_7F096458;
    case 0x7F09645Cu: goto label_7F09645C;
    case 0x7F096460u: goto label_7F096460;
    case 0x7F096464u: goto label_7F096464;
    case 0x7F096468u: goto label_7F096468;
    case 0x7F09646Cu: goto label_7F09646C;
    case 0x7F096470u: goto label_7F096470;
    case 0x7F096474u: goto label_7F096474;
    case 0x7F096478u: goto label_7F096478;
    case 0x7F09647Cu: goto label_7F09647C;
    case 0x7F096480u: goto label_7F096480;
    case 0x7F096484u: goto label_7F096484;
    case 0x7F096488u: goto label_7F096488;
    case 0x7F09648Cu: goto label_7F09648C;
    case 0x7F096490u: goto label_7F096490;
    case 0x7F096494u: goto label_7F096494;
    case 0x7F096498u: goto label_7F096498;
    case 0x7F09649Cu: goto label_7F09649C;
    case 0x7F0964A0u: goto label_7F0964A0;
    case 0x7F0964A4u: goto label_7F0964A4;
    case 0x7F0964A8u: goto label_7F0964A8;
    case 0x7F0964ACu: goto label_7F0964AC;
    case 0x7F0964B0u: goto label_7F0964B0;
    case 0x7F0964B4u: goto label_7F0964B4;
    case 0x7F0964B8u: goto label_7F0964B8;
    case 0x7F0964BCu: goto label_7F0964BC;
    case 0x7F0964C0u: goto label_7F0964C0;
    case 0x7F0964C4u: goto label_7F0964C4;
    case 0x7F0964C8u: goto label_7F0964C8;
    case 0x7F0964CCu: goto label_7F0964CC;
    case 0x7F0964D0u: goto label_7F0964D0;
    case 0x7F0964D4u: goto label_7F0964D4;
    case 0x7F0964D8u: goto label_7F0964D8;
    case 0x7F0964DCu: goto label_7F0964DC;
    case 0x7F0964E0u: goto label_7F0964E0;
    case 0x7F0964E4u: goto label_7F0964E4;
    case 0x7F0964E8u: goto label_7F0964E8;
    case 0x7F0964ECu: goto label_7F0964EC;
    case 0x7F0964F0u: goto label_7F0964F0;
    case 0x7F0964F4u: goto label_7F0964F4;
    case 0x7F0964F8u: goto label_7F0964F8;
    case 0x7F0964FCu: goto label_7F0964FC;
    case 0x7F096500u: goto label_7F096500;
    case 0x7F096504u: goto label_7F096504;
    case 0x7F096508u: goto label_7F096508;
    case 0x7F09650Cu: goto label_7F09650C;
    case 0x7F096510u: goto label_7F096510;
    case 0x7F096514u: goto label_7F096514;
    case 0x7F096518u: goto label_7F096518;
    case 0x7F09651Cu: goto label_7F09651C;
    case 0x7F096520u: goto label_7F096520;
    case 0x7F096524u: goto label_7F096524;
    case 0x7F096528u: goto label_7F096528;
    case 0x7F09652Cu: goto label_7F09652C;
    case 0x7F096530u: goto label_7F096530;
    case 0x7F096534u: goto label_7F096534;
    case 0x7F096538u: goto label_7F096538;
    case 0x7F09653Cu: goto label_7F09653C;
    case 0x7F096540u: goto label_7F096540;
    case 0x7F096544u: goto label_7F096544;
    case 0x7F096548u: goto label_7F096548;
    case 0x7F09654Cu: goto label_7F09654C;
    case 0x7F096550u: goto label_7F096550;
    case 0x7F096554u: goto label_7F096554;
    case 0x7F096558u: goto label_7F096558;
    case 0x7F09655Cu: goto label_7F09655C;
    case 0x7F096560u: goto label_7F096560;
    case 0x7F096564u: goto label_7F096564;
    case 0x7F096568u: goto label_7F096568;
    case 0x7F09656Cu: goto label_7F09656C;
    case 0x7F096570u: goto label_7F096570;
    case 0x7F096574u: goto label_7F096574;
    case 0x7F096578u: goto label_7F096578;
    case 0x7F09657Cu: goto label_7F09657C;
    case 0x7F096580u: goto label_7F096580;
    case 0x7F096584u: goto label_7F096584;
    case 0x7F096588u: goto label_7F096588;
    case 0x7F09658Cu: goto label_7F09658C;
    case 0x7F096590u: goto label_7F096590;
    case 0x7F096594u: goto label_7F096594;
    case 0x7F096598u: goto label_7F096598;
    case 0x7F09659Cu: goto label_7F09659C;
    case 0x7F0965A0u: goto label_7F0965A0;
    case 0x7F0965A4u: goto label_7F0965A4;
    case 0x7F0965A8u: goto label_7F0965A8;
    case 0x7F0965ACu: goto label_7F0965AC;
    case 0x7F0965B0u: goto label_7F0965B0;
    case 0x7F0965B4u: goto label_7F0965B4;
    case 0x7F0965B8u: goto label_7F0965B8;
    case 0x7F0965BCu: goto label_7F0965BC;
    case 0x7F0965C0u: goto label_7F0965C0;
    case 0x7F0965C4u: goto label_7F0965C4;
    case 0x7F0965C8u: goto label_7F0965C8;
    case 0x7F0965CCu: goto label_7F0965CC;
    case 0x7F0965D0u: goto label_7F0965D0;
    case 0x7F0965D4u: goto label_7F0965D4;
    case 0x7F0965D8u: goto label_7F0965D8;
    case 0x7F0965DCu: goto label_7F0965DC;
    case 0x7F0965E0u: goto label_7F0965E0;
    case 0x7F0965E4u: goto label_7F0965E4;
    case 0x7F0965E8u: goto label_7F0965E8;
    case 0x7F0965ECu: goto label_7F0965EC;
    case 0x7F0965F0u: goto label_7F0965F0;
    case 0x7F0965F4u: goto label_7F0965F4;
    case 0x7F0965F8u: goto label_7F0965F8;
    case 0x7F0965FCu: goto label_7F0965FC;
    case 0x7F096600u: goto label_7F096600;
    case 0x7F096604u: goto label_7F096604;
    case 0x7F096608u: goto label_7F096608;
    case 0x7F09660Cu: goto label_7F09660C;
    case 0x7F096610u: goto label_7F096610;
    case 0x7F096614u: goto label_7F096614;
    case 0x7F096618u: goto label_7F096618;
    case 0x7F09661Cu: goto label_7F09661C;
    case 0x7F096620u: goto label_7F096620;
    case 0x7F096624u: goto label_7F096624;
    case 0x7F096628u: goto label_7F096628;
    case 0x7F09662Cu: goto label_7F09662C;
    case 0x7F096630u: goto label_7F096630;
    case 0x7F096634u: goto label_7F096634;
    case 0x7F096638u: goto label_7F096638;
    case 0x7F09663Cu: goto label_7F09663C;
    case 0x7F096640u: goto label_7F096640;
    case 0x7F096644u: goto label_7F096644;
    case 0x7F096648u: goto label_7F096648;
    case 0x7F09664Cu: goto label_7F09664C;
    case 0x7F096650u: goto label_7F096650;
    case 0x7F096654u: goto label_7F096654;
    case 0x7F096658u: goto label_7F096658;
    case 0x7F09665Cu: goto label_7F09665C;
    case 0x7F096660u: goto label_7F096660;
    case 0x7F096664u: goto label_7F096664;
    case 0x7F096668u: goto label_7F096668;
    case 0x7F09666Cu: goto label_7F09666C;
    case 0x7F096670u: goto label_7F096670;
    case 0x7F096674u: goto label_7F096674;
    case 0x7F096678u: goto label_7F096678;
    case 0x7F09667Cu: goto label_7F09667C;
    case 0x7F096680u: goto label_7F096680;
    case 0x7F096684u: goto label_7F096684;
    case 0x7F096688u: goto label_7F096688;
    case 0x7F09668Cu: goto label_7F09668C;
    case 0x7F096690u: goto label_7F096690;
    case 0x7F096694u: goto label_7F096694;
    case 0x7F096698u: goto label_7F096698;
    case 0x7F09669Cu: goto label_7F09669C;
    case 0x7F0966A0u: goto label_7F0966A0;
    case 0x7F0966A4u: goto label_7F0966A4;
    case 0x7F0966A8u: goto label_7F0966A8;
    case 0x7F0966ACu: goto label_7F0966AC;
    case 0x7F0966B0u: goto label_7F0966B0;
    case 0x7F0966B4u: goto label_7F0966B4;
    case 0x7F0966B8u: goto label_7F0966B8;
    case 0x7F0966BCu: goto label_7F0966BC;
    case 0x7F0966C0u: goto label_7F0966C0;
    case 0x7F0966C4u: goto label_7F0966C4;
    case 0x7F0966C8u: goto label_7F0966C8;
    case 0x7F0966CCu: goto label_7F0966CC;
    case 0x7F0966D0u: goto label_7F0966D0;
    case 0x7F0966D4u: goto label_7F0966D4;
    case 0x7F0966D8u: goto label_7F0966D8;
    case 0x7F0966DCu: goto label_7F0966DC;
    case 0x7F0966E0u: goto label_7F0966E0;
    case 0x7F0966E4u: goto label_7F0966E4;
    case 0x7F0966E8u: goto label_7F0966E8;
    case 0x7F0966ECu: goto label_7F0966EC;
    case 0x7F0966F0u: goto label_7F0966F0;
    case 0x7F0966F4u: goto label_7F0966F4;
    case 0x7F0966F8u: goto label_7F0966F8;
    case 0x7F0966FCu: goto label_7F0966FC;
    case 0x7F096700u: goto label_7F096700;
    case 0x7F096704u: goto label_7F096704;
    case 0x7F096708u: goto label_7F096708;
    case 0x7F09670Cu: goto label_7F09670C;
    case 0x7F096710u: goto label_7F096710;
    case 0x7F096714u: goto label_7F096714;
    case 0x7F096718u: goto label_7F096718;
    case 0x7F09671Cu: goto label_7F09671C;
    case 0x7F096720u: goto label_7F096720;
    case 0x7F096724u: goto label_7F096724;
    case 0x7F096728u: goto label_7F096728;
    case 0x7F09672Cu: goto label_7F09672C;
    case 0x7F096730u: goto label_7F096730;
    case 0x7F096734u: goto label_7F096734;
    case 0x7F096738u: goto label_7F096738;
    case 0x7F09673Cu: goto label_7F09673C;
    case 0x7F096740u: goto label_7F096740;
    case 0x7F096744u: goto label_7F096744;
    case 0x7F096748u: goto label_7F096748;
    case 0x7F09674Cu: goto label_7F09674C;
    case 0x7F096750u: goto label_7F096750;
    case 0x7F096754u: goto label_7F096754;
    case 0x7F096758u: goto label_7F096758;
    case 0x7F09675Cu: goto label_7F09675C;
    case 0x7F096760u: goto label_7F096760;
    case 0x7F096764u: goto label_7F096764;
    case 0x7F096768u: goto label_7F096768;
    case 0x7F09676Cu: goto label_7F09676C;
    case 0x7F096770u: goto label_7F096770;
    case 0x7F096774u: goto label_7F096774;
    case 0x7F096778u: goto label_7F096778;
    case 0x7F09677Cu: goto label_7F09677C;
    case 0x7F096780u: goto label_7F096780;
    case 0x7F096784u: goto label_7F096784;
    case 0x7F096788u: goto label_7F096788;
    case 0x7F09678Cu: goto label_7F09678C;
    case 0x7F096790u: goto label_7F096790;
    case 0x7F096794u: goto label_7F096794;
    case 0x7F096798u: goto label_7F096798;
    case 0x7F09679Cu: goto label_7F09679C;
    case 0x7F0967A0u: goto label_7F0967A0;
    case 0x7F0967A4u: goto label_7F0967A4;
    case 0x7F0967A8u: goto label_7F0967A8;
    case 0x7F0967ACu: goto label_7F0967AC;
    case 0x7F0967B0u: goto label_7F0967B0;
    case 0x7F0967B4u: goto label_7F0967B4;
    case 0x7F0967B8u: goto label_7F0967B8;
    case 0x7F0967BCu: goto label_7F0967BC;
    case 0x7F0967C0u: goto label_7F0967C0;
    case 0x7F0967C4u: goto label_7F0967C4;
    case 0x7F0967C8u: goto label_7F0967C8;
    case 0x7F0967CCu: goto label_7F0967CC;
    case 0x7F0967D0u: goto label_7F0967D0;
    case 0x7F0967D4u: goto label_7F0967D4;
    case 0x7F0967D8u: goto label_7F0967D8;
    case 0x7F0967DCu: goto label_7F0967DC;
    case 0x7F0967E0u: goto label_7F0967E0;
    case 0x7F0967E4u: goto label_7F0967E4;
    case 0x7F0967E8u: goto label_7F0967E8;
    case 0x7F0967ECu: goto label_7F0967EC;
    case 0x7F0967F0u: goto label_7F0967F0;
    case 0x7F0967F4u: goto label_7F0967F4;
    case 0x7F0967F8u: goto label_7F0967F8;
    case 0x7F0967FCu: goto label_7F0967FC;
    case 0x7F096800u: goto label_7F096800;
    case 0x7F096804u: goto label_7F096804;
    case 0x7F096808u: goto label_7F096808;
    case 0x7F09680Cu: goto label_7F09680C;
    case 0x7F096810u: goto label_7F096810;
    case 0x7F096814u: goto label_7F096814;
    case 0x7F096818u: goto label_7F096818;
    case 0x7F09681Cu: goto label_7F09681C;
    case 0x7F096820u: goto label_7F096820;
    case 0x7F096824u: goto label_7F096824;
    case 0x7F096828u: goto label_7F096828;
    case 0x7F09682Cu: goto label_7F09682C;
    case 0x7F096830u: goto label_7F096830;
    case 0x7F096834u: goto label_7F096834;
    case 0x7F096838u: goto label_7F096838;
    case 0x7F09683Cu: goto label_7F09683C;
    case 0x7F096840u: goto label_7F096840;
    case 0x7F096844u: goto label_7F096844;
    case 0x7F096848u: goto label_7F096848;
    case 0x7F09684Cu: goto label_7F09684C;
    case 0x7F096850u: goto label_7F096850;
    case 0x7F096854u: goto label_7F096854;
    case 0x7F096858u: goto label_7F096858;
    case 0x7F09685Cu: goto label_7F09685C;
    case 0x7F096860u: goto label_7F096860;
    case 0x7F096864u: goto label_7F096864;
    case 0x7F096868u: goto label_7F096868;
    case 0x7F09686Cu: goto label_7F09686C;
    case 0x7F096870u: goto label_7F096870;
    case 0x7F096874u: goto label_7F096874;
    case 0x7F096878u: goto label_7F096878;
    case 0x7F09687Cu: goto label_7F09687C;
    case 0x7F096880u: goto label_7F096880;
    case 0x7F096884u: goto label_7F096884;
    case 0x7F096888u: goto label_7F096888;
    case 0x7F09688Cu: goto label_7F09688C;
    case 0x7F096890u: goto label_7F096890;
    case 0x7F096894u: goto label_7F096894;
    case 0x7F096898u: goto label_7F096898;
    case 0x7F09689Cu: goto label_7F09689C;
    case 0x7F0968A0u: goto label_7F0968A0;
    case 0x7F0968A4u: goto label_7F0968A4;
    case 0x7F0968A8u: goto label_7F0968A8;
    case 0x7F0968ACu: goto label_7F0968AC;
    case 0x7F0968B0u: goto label_7F0968B0;
    case 0x7F0968B4u: goto label_7F0968B4;
    case 0x7F0968B8u: goto label_7F0968B8;
    case 0x7F0968BCu: goto label_7F0968BC;
    case 0x7F0968C0u: goto label_7F0968C0;
    case 0x7F0968C4u: goto label_7F0968C4;
    case 0x7F0968C8u: goto label_7F0968C8;
    case 0x7F0968CCu: goto label_7F0968CC;
    case 0x7F0968D0u: goto label_7F0968D0;
    case 0x7F0968D4u: goto label_7F0968D4;
    case 0x7F0968D8u: goto label_7F0968D8;
    case 0x7F0968DCu: goto label_7F0968DC;
    case 0x7F0968E0u: goto label_7F0968E0;
    case 0x7F0968E4u: goto label_7F0968E4;
    case 0x7F0968E8u: goto label_7F0968E8;
    case 0x7F0968ECu: goto label_7F0968EC;
    case 0x7F0968F0u: goto label_7F0968F0;
    case 0x7F0968F4u: goto label_7F0968F4;
    case 0x7F0968F8u: goto label_7F0968F8;
    case 0x7F0968FCu: goto label_7F0968FC;
    case 0x7F096900u: goto label_7F096900;
    case 0x7F096904u: goto label_7F096904;
    case 0x7F096908u: goto label_7F096908;
    case 0x7F09690Cu: goto label_7F09690C;
    case 0x7F096910u: goto label_7F096910;
    case 0x7F096914u: goto label_7F096914;
    case 0x7F096918u: goto label_7F096918;
    case 0x7F09691Cu: goto label_7F09691C;
    case 0x7F096920u: goto label_7F096920;
    case 0x7F096924u: goto label_7F096924;
    case 0x7F096928u: goto label_7F096928;
    case 0x7F09692Cu: goto label_7F09692C;
    case 0x7F096930u: goto label_7F096930;
    case 0x7F096934u: goto label_7F096934;
    case 0x7F096938u: goto label_7F096938;
    case 0x7F09693Cu: goto label_7F09693C;
    case 0x7F096940u: goto label_7F096940;
    case 0x7F096944u: goto label_7F096944;
    case 0x7F096948u: goto label_7F096948;
    case 0x7F09694Cu: goto label_7F09694C;
    case 0x7F096950u: goto label_7F096950;
    case 0x7F096954u: goto label_7F096954;
    case 0x7F096958u: goto label_7F096958;
    case 0x7F09695Cu: goto label_7F09695C;
    case 0x7F096960u: goto label_7F096960;
    case 0x7F096964u: goto label_7F096964;
    case 0x7F096968u: goto label_7F096968;
    case 0x7F09696Cu: goto label_7F09696C;
    case 0x7F096970u: goto label_7F096970;
    case 0x7F096974u: goto label_7F096974;
    case 0x7F096978u: goto label_7F096978;
    case 0x7F09697Cu: goto label_7F09697C;
    case 0x7F096980u: goto label_7F096980;
    case 0x7F096984u: goto label_7F096984;
    case 0x7F096988u: goto label_7F096988;
    case 0x7F09698Cu: goto label_7F09698C;
    case 0x7F096990u: goto label_7F096990;
    case 0x7F096994u: goto label_7F096994;
    case 0x7F096998u: goto label_7F096998;
    case 0x7F09699Cu: goto label_7F09699C;
    case 0x7F0969A0u: goto label_7F0969A0;
    case 0x7F0969A4u: goto label_7F0969A4;
    case 0x7F0969A8u: goto label_7F0969A8;
    case 0x7F0969ACu: goto label_7F0969AC;
    case 0x7F0969B0u: goto label_7F0969B0;
    case 0x7F0969B4u: goto label_7F0969B4;
    case 0x7F0969B8u: goto label_7F0969B8;
    case 0x7F0969BCu: goto label_7F0969BC;
    case 0x7F0969C0u: goto label_7F0969C0;
    case 0x7F0969C4u: goto label_7F0969C4;
    case 0x7F0969C8u: goto label_7F0969C8;
    case 0x7F0969CCu: goto label_7F0969CC;
    case 0x7F0969D0u: goto label_7F0969D0;
    case 0x7F0969D4u: goto label_7F0969D4;
    case 0x7F0969D8u: goto label_7F0969D8;
    case 0x7F0969DCu: goto label_7F0969DC;
    case 0x7F0969E0u: goto label_7F0969E0;
    case 0x7F0969E4u: goto label_7F0969E4;
    case 0x7F0969E8u: goto label_7F0969E8;
    case 0x7F0969ECu: goto label_7F0969EC;
    case 0x7F0969F0u: goto label_7F0969F0;
    case 0x7F0969F4u: goto label_7F0969F4;
    case 0x7F0969F8u: goto label_7F0969F8;
    case 0x7F0969FCu: goto label_7F0969FC;
    case 0x7F096A00u: goto label_7F096A00;
    case 0x7F096A04u: goto label_7F096A04;
    case 0x7F096A08u: goto label_7F096A08;
    case 0x7F096A0Cu: goto label_7F096A0C;
    case 0x7F096A10u: goto label_7F096A10;
    case 0x7F096A14u: goto label_7F096A14;
    case 0x7F096A18u: goto label_7F096A18;
    case 0x7F096A1Cu: goto label_7F096A1C;
    case 0x7F096A20u: goto label_7F096A20;
    case 0x7F096A24u: goto label_7F096A24;
    case 0x7F096A28u: goto label_7F096A28;
    case 0x7F096A2Cu: goto label_7F096A2C;
    case 0x7F096A30u: goto label_7F096A30;
    case 0x7F096A34u: goto label_7F096A34;
    case 0x7F096A38u: goto label_7F096A38;
    case 0x7F096A3Cu: goto label_7F096A3C;
    case 0x7F096A40u: goto label_7F096A40;
    case 0x7F096A44u: goto label_7F096A44;
    case 0x7F096A48u: goto label_7F096A48;
    case 0x7F096A4Cu: goto label_7F096A4C;
    case 0x7F096A50u: goto label_7F096A50;
    case 0x7F096A54u: goto label_7F096A54;
    case 0x7F096A58u: goto label_7F096A58;
    case 0x7F096A5Cu: goto label_7F096A5C;
    case 0x7F096A60u: goto label_7F096A60;
    case 0x7F096A64u: goto label_7F096A64;
    case 0x7F096A68u: goto label_7F096A68;
    case 0x7F096A6Cu: goto label_7F096A6C;
    case 0x7F096A70u: goto label_7F096A70;
    case 0x7F096A74u: goto label_7F096A74;
    case 0x7F096A78u: goto label_7F096A78;
    case 0x7F096A7Cu: goto label_7F096A7C;
    case 0x7F096A80u: goto label_7F096A80;
    case 0x7F096A84u: goto label_7F096A84;
    case 0x7F096A88u: goto label_7F096A88;
    case 0x7F096A8Cu: goto label_7F096A8C;
    case 0x7F096A90u: goto label_7F096A90;
    case 0x7F096A94u: goto label_7F096A94;
    case 0x7F096A98u: goto label_7F096A98;
    case 0x7F096A9Cu: goto label_7F096A9C;
    case 0x7F096AA0u: goto label_7F096AA0;
    case 0x7F096AA4u: goto label_7F096AA4;
    case 0x7F096AA8u: goto label_7F096AA8;
    case 0x7F096AACu: goto label_7F096AAC;
    case 0x7F096AB0u: goto label_7F096AB0;
    case 0x7F096AB4u: goto label_7F096AB4;
    case 0x7F096AB8u: goto label_7F096AB8;
    case 0x7F096ABCu: goto label_7F096ABC;
    case 0x7F096AC0u: goto label_7F096AC0;
    case 0x7F096AC4u: goto label_7F096AC4;
    case 0x7F096AC8u: goto label_7F096AC8;
    case 0x7F096ACCu: goto label_7F096ACC;
    case 0x7F096AD0u: goto label_7F096AD0;
    case 0x7F096AD4u: goto label_7F096AD4;
    case 0x7F096AD8u: goto label_7F096AD8;
    case 0x7F096ADCu: goto label_7F096ADC;
    case 0x7F096AE0u: goto label_7F096AE0;
    case 0x7F096AE4u: goto label_7F096AE4;
    case 0x7F096AE8u: goto label_7F096AE8;
    case 0x7F096AECu: goto label_7F096AEC;
    case 0x7F096AF0u: goto label_7F096AF0;
    case 0x7F096AF4u: goto label_7F096AF4;
    case 0x7F096AF8u: goto label_7F096AF8;
    case 0x7F096AFCu: goto label_7F096AFC;
    case 0x7F096B00u: goto label_7F096B00;
    case 0x7F096B04u: goto label_7F096B04;
    case 0x7F096B08u: goto label_7F096B08;
    case 0x7F096B0Cu: goto label_7F096B0C;
    case 0x7F096B10u: goto label_7F096B10;
    case 0x7F096B14u: goto label_7F096B14;
    case 0x7F096B18u: goto label_7F096B18;
    case 0x7F096B1Cu: goto label_7F096B1C;
    case 0x7F096B20u: goto label_7F096B20;
    case 0x7F096B24u: goto label_7F096B24;
    case 0x7F096B28u: goto label_7F096B28;
    case 0x7F096B2Cu: goto label_7F096B2C;
    case 0x7F096B30u: goto label_7F096B30;
    case 0x7F096B34u: goto label_7F096B34;
    case 0x7F096B38u: goto label_7F096B38;
    case 0x7F096B3Cu: goto label_7F096B3C;
    case 0x7F096B40u: goto label_7F096B40;
    case 0x7F096B44u: goto label_7F096B44;
    case 0x7F096B48u: goto label_7F096B48;
    case 0x7F096B4Cu: goto label_7F096B4C;
    case 0x7F096B50u: goto label_7F096B50;
    case 0x7F096B54u: goto label_7F096B54;
    case 0x7F096B58u: goto label_7F096B58;
    case 0x7F096B5Cu: goto label_7F096B5C;
    case 0x7F096B60u: goto label_7F096B60;
    case 0x7F096B64u: goto label_7F096B64;
    case 0x7F096B68u: goto label_7F096B68;
    case 0x7F096B6Cu: goto label_7F096B6C;
    case 0x7F096B70u: goto label_7F096B70;
    case 0x7F096B74u: goto label_7F096B74;
    case 0x7F096B78u: goto label_7F096B78;
    case 0x7F096B7Cu: goto label_7F096B7C;
    case 0x7F096B80u: goto label_7F096B80;
    case 0x7F096B84u: goto label_7F096B84;
    case 0x7F096B88u: goto label_7F096B88;
    case 0x7F096B8Cu: goto label_7F096B8C;
    case 0x7F096B90u: goto label_7F096B90;
    case 0x7F096B94u: goto label_7F096B94;
    case 0x7F096B98u: goto label_7F096B98;
    case 0x7F096B9Cu: goto label_7F096B9C;
    case 0x7F096BA0u: goto label_7F096BA0;
    case 0x7F096BA4u: goto label_7F096BA4;
    case 0x7F096BA8u: goto label_7F096BA8;
    case 0x7F096BACu: goto label_7F096BAC;
    case 0x7F096BB0u: goto label_7F096BB0;
    case 0x7F096BB4u: goto label_7F096BB4;
    case 0x7F096BB8u: goto label_7F096BB8;
    case 0x7F096BBCu: goto label_7F096BBC;
    case 0x7F096BC0u: goto label_7F096BC0;
    case 0x7F096BC4u: goto label_7F096BC4;
    case 0x7F096BC8u: goto label_7F096BC8;
    case 0x7F096BCCu: goto label_7F096BCC;
    case 0x7F096BD0u: goto label_7F096BD0;
    case 0x7F096BD4u: goto label_7F096BD4;
    case 0x7F096BD8u: goto label_7F096BD8;
    case 0x7F096BDCu: goto label_7F096BDC;
    case 0x7F096BE0u: goto label_7F096BE0;
    case 0x7F096BE4u: goto label_7F096BE4;
    case 0x7F096BE8u: goto label_7F096BE8;
    case 0x7F096BECu: goto label_7F096BEC;
    case 0x7F096BF0u: goto label_7F096BF0;
    case 0x7F096BF4u: goto label_7F096BF4;
    case 0x7F096BF8u: goto label_7F096BF8;
    case 0x7F096BFCu: goto label_7F096BFC;
    case 0x7F096C00u: goto label_7F096C00;
    case 0x7F096C04u: goto label_7F096C04;
    case 0x7F096C08u: goto label_7F096C08;
    case 0x7F096C0Cu: goto label_7F096C0C;
    case 0x7F096C10u: goto label_7F096C10;
    case 0x7F096C14u: goto label_7F096C14;
    case 0x7F096C18u: goto label_7F096C18;
    case 0x7F096C1Cu: goto label_7F096C1C;
    case 0x7F096C20u: goto label_7F096C20;
    case 0x7F096C24u: goto label_7F096C24;
    case 0x7F096C28u: goto label_7F096C28;
    case 0x7F096C2Cu: goto label_7F096C2C;
    case 0x7F096C30u: goto label_7F096C30;
    case 0x7F096C34u: goto label_7F096C34;
    case 0x7F096C38u: goto label_7F096C38;
    case 0x7F096C3Cu: goto label_7F096C3C;
    case 0x7F096C40u: goto label_7F096C40;
    case 0x7F096C44u: goto label_7F096C44;
    case 0x7F096C48u: goto label_7F096C48;
    case 0x7F096C4Cu: goto label_7F096C4C;
    case 0x7F096C50u: goto label_7F096C50;
    case 0x7F096C54u: goto label_7F096C54;
    case 0x7F096C58u: goto label_7F096C58;
    case 0x7F096C5Cu: goto label_7F096C5C;
    case 0x7F096C60u: goto label_7F096C60;
    case 0x7F096C64u: goto label_7F096C64;
    case 0x7F096C68u: goto label_7F096C68;
    case 0x7F096C6Cu: goto label_7F096C6C;
    case 0x7F096C70u: goto label_7F096C70;
    case 0x7F096C74u: goto label_7F096C74;
    case 0x7F096C78u: goto label_7F096C78;
    case 0x7F096C7Cu: goto label_7F096C7C;
    case 0x7F096C80u: goto label_7F096C80;
    case 0x7F096C84u: goto label_7F096C84;
    case 0x7F096C88u: goto label_7F096C88;
    case 0x7F096C8Cu: goto label_7F096C8C;
    case 0x7F096C90u: goto label_7F096C90;
    case 0x7F096C94u: goto label_7F096C94;
    case 0x7F096C98u: goto label_7F096C98;
    case 0x7F096C9Cu: goto label_7F096C9C;
    case 0x7F096CA0u: goto label_7F096CA0;
    case 0x7F096CA4u: goto label_7F096CA4;
    case 0x7F096CA8u: goto label_7F096CA8;
    case 0x7F096CACu: goto label_7F096CAC;
    case 0x7F096CB0u: goto label_7F096CB0;
    case 0x7F096CB4u: goto label_7F096CB4;
    case 0x7F096CB8u: goto label_7F096CB8;
    case 0x7F096CBCu: goto label_7F096CBC;
    case 0x7F096CC0u: goto label_7F096CC0;
    case 0x7F096CC4u: goto label_7F096CC4;
    case 0x7F096CC8u: goto label_7F096CC8;
    case 0x7F096CCCu: goto label_7F096CCC;
    case 0x7F096CD0u: goto label_7F096CD0;
    case 0x7F096CD4u: goto label_7F096CD4;
    case 0x7F096CD8u: goto label_7F096CD8;
    case 0x7F096CDCu: goto label_7F096CDC;
    case 0x7F096CE0u: goto label_7F096CE0;
    case 0x7F096CE4u: goto label_7F096CE4;
    case 0x7F096CE8u: goto label_7F096CE8;
    case 0x7F096CECu: goto label_7F096CEC;
    case 0x7F096CF0u: goto label_7F096CF0;
    case 0x7F096CF4u: goto label_7F096CF4;
    case 0x7F096CF8u: goto label_7F096CF8;
    case 0x7F096CFCu: goto label_7F096CFC;
    case 0x7F096D00u: goto label_7F096D00;
    case 0x7F096D04u: goto label_7F096D04;
    case 0x7F096D08u: goto label_7F096D08;
    case 0x7F096D0Cu: goto label_7F096D0C;
    case 0x7F096D10u: goto label_7F096D10;
    case 0x7F096D14u: goto label_7F096D14;
    case 0x7F096D18u: goto label_7F096D18;
    case 0x7F096D1Cu: goto label_7F096D1C;
    case 0x7F096D20u: goto label_7F096D20;
    case 0x7F096D24u: goto label_7F096D24;
    case 0x7F096D28u: goto label_7F096D28;
    case 0x7F096D2Cu: goto label_7F096D2C;
    case 0x7F096D30u: goto label_7F096D30;
    case 0x7F096D34u: goto label_7F096D34;
    case 0x7F096D38u: goto label_7F096D38;
    case 0x7F096D3Cu: goto label_7F096D3C;
    case 0x7F096D40u: goto label_7F096D40;
    case 0x7F096D44u: goto label_7F096D44;
    case 0x7F096D48u: goto label_7F096D48;
    case 0x7F096D4Cu: goto label_7F096D4C;
    case 0x7F096D50u: goto label_7F096D50;
    case 0x7F096D54u: goto label_7F096D54;
    case 0x7F096D58u: goto label_7F096D58;
    case 0x7F096D5Cu: goto label_7F096D5C;
    case 0x7F096D60u: goto label_7F096D60;
    case 0x7F096D64u: goto label_7F096D64;
    case 0x7F096D68u: goto label_7F096D68;
    case 0x7F096D6Cu: goto label_7F096D6C;
    case 0x7F096D70u: goto label_7F096D70;
    case 0x7F096D74u: goto label_7F096D74;
    case 0x7F096D78u: goto label_7F096D78;
    case 0x7F096D7Cu: goto label_7F096D7C;
    case 0x7F096D80u: goto label_7F096D80;
    case 0x7F096D84u: goto label_7F096D84;
    case 0x7F096D88u: goto label_7F096D88;
    case 0x7F096D8Cu: goto label_7F096D8C;
    case 0x7F096D90u: goto label_7F096D90;
    case 0x7F096D94u: goto label_7F096D94;
    case 0x7F096D98u: goto label_7F096D98;
    case 0x7F096D9Cu: goto label_7F096D9C;
    case 0x7F096DA0u: goto label_7F096DA0;
    case 0x7F096DA4u: goto label_7F096DA4;
    case 0x7F096DA8u: goto label_7F096DA8;
    case 0x7F096DACu: goto label_7F096DAC;
    case 0x7F096DB0u: goto label_7F096DB0;
    case 0x7F096DB4u: goto label_7F096DB4;
    case 0x7F096DB8u: goto label_7F096DB8;
    case 0x7F096DBCu: goto label_7F096DBC;
    case 0x7F096DC0u: goto label_7F096DC0;
    case 0x7F096DC4u: goto label_7F096DC4;
    case 0x7F096DC8u: goto label_7F096DC8;
    case 0x7F096DCCu: goto label_7F096DCC;
    case 0x7F096DD0u: goto label_7F096DD0;
    case 0x7F096DD4u: goto label_7F096DD4;
    case 0x7F096DD8u: goto label_7F096DD8;
    case 0x7F096DDCu: goto label_7F096DDC;
    case 0x7F096DE0u: goto label_7F096DE0;
    case 0x7F096DE4u: goto label_7F096DE4;
    case 0x7F096DE8u: goto label_7F096DE8;
    case 0x7F096DECu: goto label_7F096DEC;
    case 0x7F096DF0u: goto label_7F096DF0;
    case 0x7F096DF4u: goto label_7F096DF4;
    case 0x7F096DF8u: goto label_7F096DF8;
    case 0x7F096DFCu: goto label_7F096DFC;
    case 0x7F096E00u: goto label_7F096E00;
    case 0x7F096E04u: goto label_7F096E04;
    case 0x7F096E08u: goto label_7F096E08;
    case 0x7F096E0Cu: goto label_7F096E0C;
    case 0x7F096E10u: goto label_7F096E10;
    case 0x7F096E14u: goto label_7F096E14;
    case 0x7F096E18u: goto label_7F096E18;
    case 0x7F096E1Cu: goto label_7F096E1C;
    case 0x7F096E20u: goto label_7F096E20;
    case 0x7F096E24u: goto label_7F096E24;
    case 0x7F096E28u: goto label_7F096E28;
    case 0x7F096E2Cu: goto label_7F096E2C;
    case 0x7F096E30u: goto label_7F096E30;
    case 0x7F096E34u: goto label_7F096E34;
    case 0x7F096E38u: goto label_7F096E38;
    case 0x7F096E3Cu: goto label_7F096E3C;
    case 0x7F096E40u: goto label_7F096E40;
    case 0x7F096E44u: goto label_7F096E44;
    case 0x7F096E48u: goto label_7F096E48;
    case 0x7F096E4Cu: goto label_7F096E4C;
    case 0x7F096E50u: goto label_7F096E50;
    case 0x7F096E54u: goto label_7F096E54;
    case 0x7F096E58u: goto label_7F096E58;
    case 0x7F096E5Cu: goto label_7F096E5C;
    case 0x7F096E60u: goto label_7F096E60;
    case 0x7F096E64u: goto label_7F096E64;
    case 0x7F096E68u: goto label_7F096E68;
    case 0x7F096E6Cu: goto label_7F096E6C;
    case 0x7F096E70u: goto label_7F096E70;
    case 0x7F096E74u: goto label_7F096E74;
    case 0x7F096E78u: goto label_7F096E78;
    case 0x7F096E7Cu: goto label_7F096E7C;
    case 0x7F096E80u: goto label_7F096E80;
    case 0x7F096E84u: goto label_7F096E84;
    case 0x7F096E88u: goto label_7F096E88;
    case 0x7F096E8Cu: goto label_7F096E8C;
    case 0x7F096E90u: goto label_7F096E90;
    case 0x7F096E94u: goto label_7F096E94;
    case 0x7F096E98u: goto label_7F096E98;
    case 0x7F096E9Cu: goto label_7F096E9C;
    case 0x7F096EA0u: goto label_7F096EA0;
    case 0x7F096EA4u: goto label_7F096EA4;
    case 0x7F096EA8u: goto label_7F096EA8;
    case 0x7F096EACu: goto label_7F096EAC;
    case 0x7F096EB0u: goto label_7F096EB0;
    case 0x7F096EB4u: goto label_7F096EB4;
    case 0x7F096EB8u: goto label_7F096EB8;
    case 0x7F096EBCu: goto label_7F096EBC;
    case 0x7F096EC0u: goto label_7F096EC0;
    case 0x7F096EC4u: goto label_7F096EC4;
    case 0x7F096EC8u: goto label_7F096EC8;
    case 0x7F096ECCu: goto label_7F096ECC;
    case 0x7F096ED0u: goto label_7F096ED0;
    case 0x7F096ED4u: goto label_7F096ED4;
    case 0x7F096ED8u: goto label_7F096ED8;
    case 0x7F096EDCu: goto label_7F096EDC;
    case 0x7F096EE0u: goto label_7F096EE0;
    case 0x7F096EE4u: goto label_7F096EE4;
    case 0x7F096EE8u: goto label_7F096EE8;
    case 0x7F096EECu: goto label_7F096EEC;
    case 0x7F096EF0u: goto label_7F096EF0;
    case 0x7F096EF4u: goto label_7F096EF4;
    case 0x7F096EF8u: goto label_7F096EF8;
    case 0x7F096EFCu: goto label_7F096EFC;
    case 0x7F096F00u: goto label_7F096F00;
    case 0x7F096F04u: goto label_7F096F04;
    case 0x7F096F08u: goto label_7F096F08;
    case 0x7F096F0Cu: goto label_7F096F0C;
    case 0x7F096F10u: goto label_7F096F10;
    case 0x7F096F14u: goto label_7F096F14;
    case 0x7F096F18u: goto label_7F096F18;
    case 0x7F096F1Cu: goto label_7F096F1C;
    case 0x7F096F20u: goto label_7F096F20;
    case 0x7F096F24u: goto label_7F096F24;
    case 0x7F096F28u: goto label_7F096F28;
    case 0x7F096F2Cu: goto label_7F096F2C;
    case 0x7F096F30u: goto label_7F096F30;
    case 0x7F096F34u: goto label_7F096F34;
    case 0x7F096F38u: goto label_7F096F38;
    case 0x7F096F3Cu: goto label_7F096F3C;
    case 0x7F096F40u: goto label_7F096F40;
    case 0x7F096F44u: goto label_7F096F44;
    case 0x7F096F48u: goto label_7F096F48;
    case 0x7F096F4Cu: goto label_7F096F4C;
    case 0x7F096F50u: goto label_7F096F50;
    case 0x7F096F54u: goto label_7F096F54;
    case 0x7F096F58u: goto label_7F096F58;
    case 0x7F096F5Cu: goto label_7F096F5C;
    case 0x7F096F60u: goto label_7F096F60;
    case 0x7F096F64u: goto label_7F096F64;
    case 0x7F096F68u: goto label_7F096F68;
    case 0x7F096F6Cu: goto label_7F096F6C;
    case 0x7F096F70u: goto label_7F096F70;
    case 0x7F096F74u: goto label_7F096F74;
    case 0x7F096F78u: goto label_7F096F78;
    case 0x7F096F7Cu: goto label_7F096F7C;
    case 0x7F096F80u: goto label_7F096F80;
    case 0x7F096F84u: goto label_7F096F84;
    case 0x7F096F88u: goto label_7F096F88;
    case 0x7F096F8Cu: goto label_7F096F8C;
    case 0x7F096F90u: goto label_7F096F90;
    case 0x7F096F94u: goto label_7F096F94;
    case 0x7F096F98u: goto label_7F096F98;
    case 0x7F096F9Cu: goto label_7F096F9C;
    case 0x7F096FA0u: goto label_7F096FA0;
    case 0x7F096FA4u: goto label_7F096FA4;
    case 0x7F096FA8u: goto label_7F096FA8;
    case 0x7F096FACu: goto label_7F096FAC;
    case 0x7F096FB0u: goto label_7F096FB0;
    case 0x7F096FB4u: goto label_7F096FB4;
    case 0x7F096FB8u: goto label_7F096FB8;
    case 0x7F096FBCu: goto label_7F096FBC;
    case 0x7F096FC0u: goto label_7F096FC0;
    case 0x7F096FC4u: goto label_7F096FC4;
    case 0x7F096FC8u: goto label_7F096FC8;
    case 0x7F096FCCu: goto label_7F096FCC;
    case 0x7F096FD0u: goto label_7F096FD0;
    case 0x7F096FD4u: goto label_7F096FD4;
    case 0x7F096FD8u: goto label_7F096FD8;
    case 0x7F096FDCu: goto label_7F096FDC;
    case 0x7F096FE0u: goto label_7F096FE0;
    case 0x7F096FE4u: goto label_7F096FE4;
    case 0x7F096FE8u: goto label_7F096FE8;
    case 0x7F096FECu: goto label_7F096FEC;
    case 0x7F096FF0u: goto label_7F096FF0;
    case 0x7F096FF4u: goto label_7F096FF4;
    case 0x7F096FF8u: goto label_7F096FF8;
    case 0x7F096FFCu: goto label_7F096FFC;
    case 0x7F097000u: goto label_7F097000;
    case 0x7F097004u: goto label_7F097004;
    case 0x7F097008u: goto label_7F097008;
    case 0x7F09700Cu: goto label_7F09700C;
    case 0x7F097010u: goto label_7F097010;
    case 0x7F097014u: goto label_7F097014;
    case 0x7F097018u: goto label_7F097018;
    case 0x7F09701Cu: goto label_7F09701C;
    case 0x7F097020u: goto label_7F097020;
    case 0x7F097024u: goto label_7F097024;
    case 0x7F097028u: goto label_7F097028;
    case 0x7F09702Cu: goto label_7F09702C;
    case 0x7F097030u: goto label_7F097030;
    case 0x7F097034u: goto label_7F097034;
    case 0x7F097038u: goto label_7F097038;
    case 0x7F09703Cu: goto label_7F09703C;
    case 0x7F097040u: goto label_7F097040;
    case 0x7F097044u: goto label_7F097044;
    case 0x7F097048u: goto label_7F097048;
    case 0x7F09704Cu: goto label_7F09704C;
    case 0x7F097050u: goto label_7F097050;
    case 0x7F097054u: goto label_7F097054;
    case 0x7F097058u: goto label_7F097058;
    case 0x7F09705Cu: goto label_7F09705C;
    case 0x7F097060u: goto label_7F097060;
    case 0x7F097064u: goto label_7F097064;
    case 0x7F097068u: goto label_7F097068;
    case 0x7F09706Cu: goto label_7F09706C;
    case 0x7F097070u: goto label_7F097070;
    case 0x7F097074u: goto label_7F097074;
    case 0x7F097078u: goto label_7F097078;
    case 0x7F09707Cu: goto label_7F09707C;
    case 0x7F097080u: goto label_7F097080;
    case 0x7F097084u: goto label_7F097084;
    case 0x7F097088u: goto label_7F097088;
    case 0x7F09708Cu: goto label_7F09708C;
    case 0x7F097090u: goto label_7F097090;
    case 0x7F097094u: goto label_7F097094;
    case 0x7F097098u: goto label_7F097098;
    case 0x7F09709Cu: goto label_7F09709C;
    case 0x7F0970A0u: goto label_7F0970A0;
    case 0x7F0970A4u: goto label_7F0970A4;
    case 0x7F0970A8u: goto label_7F0970A8;
    case 0x7F0970ACu: goto label_7F0970AC;
    case 0x7F0970B0u: goto label_7F0970B0;
    case 0x7F0970B4u: goto label_7F0970B4;
    case 0x7F0970B8u: goto label_7F0970B8;
    case 0x7F0970BCu: goto label_7F0970BC;
    case 0x7F0970C0u: goto label_7F0970C0;
    case 0x7F0970C4u: goto label_7F0970C4;
    case 0x7F0970C8u: goto label_7F0970C8;
    case 0x7F0970CCu: goto label_7F0970CC;
    case 0x7F0970D0u: goto label_7F0970D0;
    case 0x7F0970D4u: goto label_7F0970D4;
    case 0x7F0970D8u: goto label_7F0970D8;
    case 0x7F0970DCu: goto label_7F0970DC;
    case 0x7F0970E0u: goto label_7F0970E0;
    case 0x7F0970E4u: goto label_7F0970E4;
    case 0x7F0970E8u: goto label_7F0970E8;
    case 0x7F0970ECu: goto label_7F0970EC;
    case 0x7F0970F0u: goto label_7F0970F0;
    case 0x7F0970F4u: goto label_7F0970F4;
    case 0x7F0970F8u: goto label_7F0970F8;
    case 0x7F0970FCu: goto label_7F0970FC;
    case 0x7F097100u: goto label_7F097100;
    case 0x7F097104u: goto label_7F097104;
    case 0x7F097108u: goto label_7F097108;
    case 0x7F09710Cu: goto label_7F09710C;
    case 0x7F097110u: goto label_7F097110;
    case 0x7F097114u: goto label_7F097114;
    case 0x7F097118u: goto label_7F097118;
    case 0x7F09711Cu: goto label_7F09711C;
    case 0x7F097120u: goto label_7F097120;
    case 0x7F097124u: goto label_7F097124;
    case 0x7F097128u: goto label_7F097128;
    case 0x7F09712Cu: goto label_7F09712C;
    case 0x7F097130u: goto label_7F097130;
    case 0x7F097134u: goto label_7F097134;
    case 0x7F097138u: goto label_7F097138;
    case 0x7F09713Cu: goto label_7F09713C;
    case 0x7F097140u: goto label_7F097140;
    case 0x7F097144u: goto label_7F097144;
    case 0x7F097148u: goto label_7F097148;
    case 0x7F09714Cu: goto label_7F09714C;
    case 0x7F097150u: goto label_7F097150;
    case 0x7F097154u: goto label_7F097154;
    case 0x7F097158u: goto label_7F097158;
    case 0x7F09715Cu: goto label_7F09715C;
    case 0x7F097160u: goto label_7F097160;
    case 0x7F097164u: goto label_7F097164;
    case 0x7F097168u: goto label_7F097168;
    case 0x7F09716Cu: goto label_7F09716C;
    case 0x7F097170u: goto label_7F097170;
    case 0x7F097174u: goto label_7F097174;
    case 0x7F097178u: goto label_7F097178;
    case 0x7F09717Cu: goto label_7F09717C;
    case 0x7F097180u: goto label_7F097180;
    case 0x7F097184u: goto label_7F097184;
    case 0x7F097188u: goto label_7F097188;
    case 0x7F09718Cu: goto label_7F09718C;
    case 0x7F097190u: goto label_7F097190;
    case 0x7F097194u: goto label_7F097194;
    case 0x7F097198u: goto label_7F097198;
    case 0x7F09719Cu: goto label_7F09719C;
    case 0x7F0971A0u: goto label_7F0971A0;
    case 0x7F0971A4u: goto label_7F0971A4;
    case 0x7F0971A8u: goto label_7F0971A8;
    case 0x7F0971ACu: goto label_7F0971AC;
    case 0x7F0971B0u: goto label_7F0971B0;
    case 0x7F0971B4u: goto label_7F0971B4;
    case 0x7F0971B8u: goto label_7F0971B8;
    case 0x7F0971BCu: goto label_7F0971BC;
    case 0x7F0971C0u: goto label_7F0971C0;
    case 0x7F0971C4u: goto label_7F0971C4;
    case 0x7F0971C8u: goto label_7F0971C8;
    case 0x7F0971CCu: goto label_7F0971CC;
    case 0x7F0971D0u: goto label_7F0971D0;
    case 0x7F0971D4u: goto label_7F0971D4;
    case 0x7F0971D8u: goto label_7F0971D8;
    case 0x7F0971DCu: goto label_7F0971DC;
    case 0x7F0971E0u: goto label_7F0971E0;
    case 0x7F0971E4u: goto label_7F0971E4;
    case 0x7F0971E8u: goto label_7F0971E8;
    case 0x7F0971ECu: goto label_7F0971EC;
    case 0x7F0971F0u: goto label_7F0971F0;
    case 0x7F0971F4u: goto label_7F0971F4;
    case 0x7F0971F8u: goto label_7F0971F8;
    case 0x7F0971FCu: goto label_7F0971FC;
    case 0x7F097200u: goto label_7F097200;
    case 0x7F097204u: goto label_7F097204;
    case 0x7F097208u: goto label_7F097208;
    case 0x7F09720Cu: goto label_7F09720C;
    case 0x7F097210u: goto label_7F097210;
    case 0x7F097214u: goto label_7F097214;
    case 0x7F097218u: goto label_7F097218;
    case 0x7F09721Cu: goto label_7F09721C;
    case 0x7F097220u: goto label_7F097220;
    case 0x7F097224u: goto label_7F097224;
    case 0x7F097228u: goto label_7F097228;
    case 0x7F09722Cu: goto label_7F09722C;
    case 0x7F097230u: goto label_7F097230;
    case 0x7F097234u: goto label_7F097234;
    case 0x7F097238u: goto label_7F097238;
    case 0x7F09723Cu: goto label_7F09723C;
    case 0x7F097240u: goto label_7F097240;
    case 0x7F097244u: goto label_7F097244;
    case 0x7F097248u: goto label_7F097248;
    case 0x7F09724Cu: goto label_7F09724C;
    case 0x7F097250u: goto label_7F097250;
    case 0x7F097254u: goto label_7F097254;
    case 0x7F097258u: goto label_7F097258;
    case 0x7F09725Cu: goto label_7F09725C;
    case 0x7F097260u: goto label_7F097260;
    case 0x7F097264u: goto label_7F097264;
    case 0x7F097268u: goto label_7F097268;
    case 0x7F09726Cu: goto label_7F09726C;
    case 0x7F097270u: goto label_7F097270;
    case 0x7F097274u: goto label_7F097274;
    case 0x7F097278u: goto label_7F097278;
    case 0x7F09727Cu: goto label_7F09727C;
    case 0x7F097280u: goto label_7F097280;
    case 0x7F097284u: goto label_7F097284;
    case 0x7F097288u: goto label_7F097288;
    case 0x7F09728Cu: goto label_7F09728C;
    case 0x7F097290u: goto label_7F097290;
    case 0x7F097294u: goto label_7F097294;
    case 0x7F097298u: goto label_7F097298;
    case 0x7F09729Cu: goto label_7F09729C;
    case 0x7F0972A0u: goto label_7F0972A0;
    case 0x7F0972A4u: goto label_7F0972A4;
    case 0x7F0972A8u: goto label_7F0972A8;
    case 0x7F0972ACu: goto label_7F0972AC;
    case 0x7F0972B0u: goto label_7F0972B0;
    case 0x7F0972B4u: goto label_7F0972B4;
    case 0x7F0972B8u: goto label_7F0972B8;
    case 0x7F0972BCu: goto label_7F0972BC;
    case 0x7F0972C0u: goto label_7F0972C0;
    case 0x7F0972C4u: goto label_7F0972C4;
    case 0x7F0972C8u: goto label_7F0972C8;
    case 0x7F0972CCu: goto label_7F0972CC;
    case 0x7F0972D0u: goto label_7F0972D0;
    case 0x7F0972D4u: goto label_7F0972D4;
    case 0x7F0972D8u: goto label_7F0972D8;
    case 0x7F0972DCu: goto label_7F0972DC;
    case 0x7F0972E0u: goto label_7F0972E0;
    case 0x7F0972E4u: goto label_7F0972E4;
    case 0x7F0972E8u: goto label_7F0972E8;
    case 0x7F0972ECu: goto label_7F0972EC;
    case 0x7F0972F0u: goto label_7F0972F0;
    case 0x7F0972F4u: goto label_7F0972F4;
    case 0x7F0972F8u: goto label_7F0972F8;
    case 0x7F0972FCu: goto label_7F0972FC;
    case 0x7F097300u: goto label_7F097300;
    case 0x7F097304u: goto label_7F097304;
    case 0x7F097308u: goto label_7F097308;
    case 0x7F09730Cu: goto label_7F09730C;
    case 0x7F097310u: goto label_7F097310;
    case 0x7F097314u: goto label_7F097314;
    case 0x7F097318u: goto label_7F097318;
    case 0x7F09731Cu: goto label_7F09731C;
    case 0x7F097320u: goto label_7F097320;
    case 0x7F097324u: goto label_7F097324;
    case 0x7F097328u: goto label_7F097328;
    case 0x7F09732Cu: goto label_7F09732C;
    case 0x7F097330u: goto label_7F097330;
    case 0x7F097334u: goto label_7F097334;
    case 0x7F097338u: goto label_7F097338;
    case 0x7F09733Cu: goto label_7F09733C;
    case 0x7F097340u: goto label_7F097340;
    case 0x7F097344u: goto label_7F097344;
    case 0x7F097348u: goto label_7F097348;
    case 0x7F09734Cu: goto label_7F09734C;
    case 0x7F097350u: goto label_7F097350;
    case 0x7F097354u: goto label_7F097354;
    case 0x7F097358u: goto label_7F097358;
    case 0x7F09735Cu: goto label_7F09735C;
    case 0x7F097360u: goto label_7F097360;
    case 0x7F097364u: goto label_7F097364;
    case 0x7F097368u: goto label_7F097368;
    case 0x7F09736Cu: goto label_7F09736C;
    case 0x7F097370u: goto label_7F097370;
    case 0x7F097374u: goto label_7F097374;
    case 0x7F097378u: goto label_7F097378;
    case 0x7F09737Cu: goto label_7F09737C;
    case 0x7F097380u: goto label_7F097380;
    case 0x7F097384u: goto label_7F097384;
    case 0x7F097388u: goto label_7F097388;
    case 0x7F09738Cu: goto label_7F09738C;
    case 0x7F097390u: goto label_7F097390;
    case 0x7F097394u: goto label_7F097394;
    case 0x7F097398u: goto label_7F097398;
    case 0x7F09739Cu: goto label_7F09739C;
    case 0x7F0973A0u: goto label_7F0973A0;
    case 0x7F0973A4u: goto label_7F0973A4;
    case 0x7F0973A8u: goto label_7F0973A8;
    case 0x7F0973ACu: goto label_7F0973AC;
    case 0x7F0973B0u: goto label_7F0973B0;
    case 0x7F0973B4u: goto label_7F0973B4;
    case 0x7F0973B8u: goto label_7F0973B8;
    case 0x7F0973BCu: goto label_7F0973BC;
    case 0x7F0973C0u: goto label_7F0973C0;
    case 0x7F0973C4u: goto label_7F0973C4;
    case 0x7F0973C8u: goto label_7F0973C8;
    case 0x7F0973CCu: goto label_7F0973CC;
    case 0x7F0973D0u: goto label_7F0973D0;
    case 0x7F0973D4u: goto label_7F0973D4;
    case 0x7F0973D8u: goto label_7F0973D8;
    case 0x7F0973DCu: goto label_7F0973DC;
    case 0x7F0973E0u: goto label_7F0973E0;
    case 0x7F0973E4u: goto label_7F0973E4;
    case 0x7F0973E8u: goto label_7F0973E8;
    case 0x7F0973ECu: goto label_7F0973EC;
    case 0x7F0973F0u: goto label_7F0973F0;
    case 0x7F0973F4u: goto label_7F0973F4;
    case 0x7F0973F8u: goto label_7F0973F8;
    case 0x7F0973FCu: goto label_7F0973FC;
    case 0x7F097400u: goto label_7F097400;
    case 0x7F097404u: goto label_7F097404;
    case 0x7F097408u: goto label_7F097408;
    case 0x7F09740Cu: goto label_7F09740C;
    case 0x7F097410u: goto label_7F097410;
    case 0x7F097414u: goto label_7F097414;
    case 0x7F097418u: goto label_7F097418;
    case 0x7F09741Cu: goto label_7F09741C;
    case 0x7F097420u: goto label_7F097420;
    case 0x7F097424u: goto label_7F097424;
    case 0x7F097428u: goto label_7F097428;
    case 0x7F09742Cu: goto label_7F09742C;
    case 0x7F097430u: goto label_7F097430;
    case 0x7F097434u: goto label_7F097434;
    case 0x7F097438u: goto label_7F097438;
    case 0x7F09743Cu: goto label_7F09743C;
    case 0x7F097440u: goto label_7F097440;
    case 0x7F097444u: goto label_7F097444;
    case 0x7F097448u: goto label_7F097448;
    case 0x7F09744Cu: goto label_7F09744C;
    case 0x7F097450u: goto label_7F097450;
    case 0x7F097454u: goto label_7F097454;
    case 0x7F097458u: goto label_7F097458;
    case 0x7F09745Cu: goto label_7F09745C;
    case 0x7F097460u: goto label_7F097460;
    case 0x7F097464u: goto label_7F097464;
    case 0x7F097468u: goto label_7F097468;
    case 0x7F09746Cu: goto label_7F09746C;
    case 0x7F097470u: goto label_7F097470;
    case 0x7F097474u: goto label_7F097474;
    case 0x7F097478u: goto label_7F097478;
    case 0x7F09747Cu: goto label_7F09747C;
    case 0x7F097480u: goto label_7F097480;
    case 0x7F097484u: goto label_7F097484;
    case 0x7F097488u: goto label_7F097488;
    case 0x7F09748Cu: goto label_7F09748C;
    case 0x7F097490u: goto label_7F097490;
    case 0x7F097494u: goto label_7F097494;
    case 0x7F097498u: goto label_7F097498;
    case 0x7F09749Cu: goto label_7F09749C;
    case 0x7F0974A0u: goto label_7F0974A0;
    case 0x7F0974A4u: goto label_7F0974A4;
    case 0x7F0974A8u: goto label_7F0974A8;
    case 0x7F0974ACu: goto label_7F0974AC;
    case 0x7F0974B0u: goto label_7F0974B0;
    case 0x7F0974B4u: goto label_7F0974B4;
    case 0x7F0974B8u: goto label_7F0974B8;
    case 0x7F0974BCu: goto label_7F0974BC;
    case 0x7F0974C0u: goto label_7F0974C0;
    case 0x7F0974C4u: goto label_7F0974C4;
    case 0x7F0974C8u: goto label_7F0974C8;
    case 0x7F0974CCu: goto label_7F0974CC;
    case 0x7F0974D0u: goto label_7F0974D0;
    case 0x7F0974D4u: goto label_7F0974D4;
    case 0x7F0974D8u: goto label_7F0974D8;
    case 0x7F0974DCu: goto label_7F0974DC;
    case 0x7F0974E0u: goto label_7F0974E0;
    case 0x7F0974E4u: goto label_7F0974E4;
    case 0x7F0974E8u: goto label_7F0974E8;
    case 0x7F0974ECu: goto label_7F0974EC;
    case 0x7F0974F0u: goto label_7F0974F0;
    case 0x7F0974F4u: goto label_7F0974F4;
    case 0x7F0974F8u: goto label_7F0974F8;
    case 0x7F0974FCu: goto label_7F0974FC;
    case 0x7F097500u: goto label_7F097500;
    case 0x7F097504u: goto label_7F097504;
    case 0x7F097508u: goto label_7F097508;
    case 0x7F09750Cu: goto label_7F09750C;
    case 0x7F097510u: goto label_7F097510;
    case 0x7F097514u: goto label_7F097514;
    case 0x7F097518u: goto label_7F097518;
    case 0x7F09751Cu: goto label_7F09751C;
    case 0x7F097520u: goto label_7F097520;
    case 0x7F097524u: goto label_7F097524;
    case 0x7F097528u: goto label_7F097528;
    case 0x7F09752Cu: goto label_7F09752C;
    case 0x7F097530u: goto label_7F097530;
    case 0x7F097534u: goto label_7F097534;
    case 0x7F097538u: goto label_7F097538;
    case 0x7F09753Cu: goto label_7F09753C;
    case 0x7F097540u: goto label_7F097540;
    case 0x7F097544u: goto label_7F097544;
    case 0x7F097548u: goto label_7F097548;
    case 0x7F09754Cu: goto label_7F09754C;
    case 0x7F097550u: goto label_7F097550;
    case 0x7F097554u: goto label_7F097554;
    case 0x7F097558u: goto label_7F097558;
    case 0x7F09755Cu: goto label_7F09755C;
    case 0x7F097560u: goto label_7F097560;
    case 0x7F097564u: goto label_7F097564;
    case 0x7F097568u: goto label_7F097568;
    case 0x7F09756Cu: goto label_7F09756C;
    case 0x7F097570u: goto label_7F097570;
    case 0x7F097574u: goto label_7F097574;
    case 0x7F097578u: goto label_7F097578;
    case 0x7F09757Cu: goto label_7F09757C;
    case 0x7F097580u: goto label_7F097580;
    case 0x7F097584u: goto label_7F097584;
    case 0x7F097588u: goto label_7F097588;
    case 0x7F09758Cu: goto label_7F09758C;
    case 0x7F097590u: goto label_7F097590;
    case 0x7F097594u: goto label_7F097594;
    case 0x7F097598u: goto label_7F097598;
    case 0x7F09759Cu: goto label_7F09759C;
    case 0x7F0975A0u: goto label_7F0975A0;
    case 0x7F0975A4u: goto label_7F0975A4;
    case 0x7F0975A8u: goto label_7F0975A8;
    case 0x7F0975ACu: goto label_7F0975AC;
    case 0x7F0975B0u: goto label_7F0975B0;
    case 0x7F0975B4u: goto label_7F0975B4;
    case 0x7F0975B8u: goto label_7F0975B8;
    case 0x7F0975BCu: goto label_7F0975BC;
    case 0x7F0975C0u: goto label_7F0975C0;
    case 0x7F0975C4u: goto label_7F0975C4;
    case 0x7F0975C8u: goto label_7F0975C8;
    case 0x7F0975CCu: goto label_7F0975CC;
    case 0x7F0975D0u: goto label_7F0975D0;
    case 0x7F0975D4u: goto label_7F0975D4;
    case 0x7F0975D8u: goto label_7F0975D8;
    case 0x7F0975DCu: goto label_7F0975DC;
    case 0x7F0975E0u: goto label_7F0975E0;
    case 0x7F0975E4u: goto label_7F0975E4;
    case 0x7F0975E8u: goto label_7F0975E8;
    case 0x7F0975ECu: goto label_7F0975EC;
    case 0x7F0975F0u: goto label_7F0975F0;
    case 0x7F0975F4u: goto label_7F0975F4;
    case 0x7F0975F8u: goto label_7F0975F8;
    case 0x7F0975FCu: goto label_7F0975FC;
    case 0x7F097600u: goto label_7F097600;
    case 0x7F097604u: goto label_7F097604;
    case 0x7F097608u: goto label_7F097608;
    case 0x7F09760Cu: goto label_7F09760C;
    case 0x7F097610u: goto label_7F097610;
    case 0x7F097614u: goto label_7F097614;
    case 0x7F097618u: goto label_7F097618;
    case 0x7F09761Cu: goto label_7F09761C;
    case 0x7F097620u: goto label_7F097620;
    case 0x7F097624u: goto label_7F097624;
    case 0x7F097628u: goto label_7F097628;
    case 0x7F09762Cu: goto label_7F09762C;
    case 0x7F097630u: goto label_7F097630;
    case 0x7F097634u: goto label_7F097634;
    case 0x7F097638u: goto label_7F097638;
    case 0x7F09763Cu: goto label_7F09763C;
    case 0x7F097640u: goto label_7F097640;
    case 0x7F097644u: goto label_7F097644;
    case 0x7F097648u: goto label_7F097648;
    case 0x7F09764Cu: goto label_7F09764C;
    case 0x7F097650u: goto label_7F097650;
    case 0x7F097654u: goto label_7F097654;
    case 0x7F097658u: goto label_7F097658;
    case 0x7F09765Cu: goto label_7F09765C;
    case 0x7F097660u: goto label_7F097660;
    case 0x7F097664u: goto label_7F097664;
    case 0x7F097668u: goto label_7F097668;
    case 0x7F09766Cu: goto label_7F09766C;
    case 0x7F097670u: goto label_7F097670;
    case 0x7F097674u: goto label_7F097674;
    case 0x7F097678u: goto label_7F097678;
    case 0x7F09767Cu: goto label_7F09767C;
    case 0x7F097680u: goto label_7F097680;
    case 0x7F097684u: goto label_7F097684;
    case 0x7F097688u: goto label_7F097688;
    case 0x7F09768Cu: goto label_7F09768C;
    case 0x7F097690u: goto label_7F097690;
    case 0x7F097694u: goto label_7F097694;
    case 0x7F097698u: goto label_7F097698;
    case 0x7F09769Cu: goto label_7F09769C;
    case 0x7F0976A0u: goto label_7F0976A0;
    case 0x7F0976A4u: goto label_7F0976A4;
    case 0x7F0976A8u: goto label_7F0976A8;
    case 0x7F0976ACu: goto label_7F0976AC;
    case 0x7F0976B0u: goto label_7F0976B0;
    case 0x7F0976B4u: goto label_7F0976B4;
    case 0x7F0976B8u: goto label_7F0976B8;
    case 0x7F0976BCu: goto label_7F0976BC;
    case 0x7F0976C0u: goto label_7F0976C0;
    case 0x7F0976C4u: goto label_7F0976C4;
    case 0x7F0976C8u: goto label_7F0976C8;
    case 0x7F0976CCu: goto label_7F0976CC;
    case 0x7F0976D0u: goto label_7F0976D0;
    case 0x7F0976D4u: goto label_7F0976D4;
    case 0x7F0976D8u: goto label_7F0976D8;
    case 0x7F0976DCu: goto label_7F0976DC;
    case 0x7F0976E0u: goto label_7F0976E0;
    case 0x7F0976E4u: goto label_7F0976E4;
    case 0x7F0976E8u: goto label_7F0976E8;
    case 0x7F0976ECu: goto label_7F0976EC;
    case 0x7F0976F0u: goto label_7F0976F0;
    case 0x7F0976F4u: goto label_7F0976F4;
    case 0x7F0976F8u: goto label_7F0976F8;
    case 0x7F0976FCu: goto label_7F0976FC;
    case 0x7F097700u: goto label_7F097700;
    case 0x7F097704u: goto label_7F097704;
    case 0x7F097708u: goto label_7F097708;
    case 0x7F09770Cu: goto label_7F09770C;
    case 0x7F097710u: goto label_7F097710;
    case 0x7F097714u: goto label_7F097714;
    case 0x7F097718u: goto label_7F097718;
    case 0x7F09771Cu: goto label_7F09771C;
    case 0x7F097720u: goto label_7F097720;
    case 0x7F097724u: goto label_7F097724;
    case 0x7F097728u: goto label_7F097728;
    case 0x7F09772Cu: goto label_7F09772C;
    case 0x7F097730u: goto label_7F097730;
    case 0x7F097734u: goto label_7F097734;
    case 0x7F097738u: goto label_7F097738;
    case 0x7F09773Cu: goto label_7F09773C;
    case 0x7F097740u: goto label_7F097740;
    case 0x7F097744u: goto label_7F097744;
    case 0x7F097748u: goto label_7F097748;
    case 0x7F09774Cu: goto label_7F09774C;
    case 0x7F097750u: goto label_7F097750;
    case 0x7F097754u: goto label_7F097754;
    case 0x7F097758u: goto label_7F097758;
    case 0x7F09775Cu: goto label_7F09775C;
    case 0x7F097760u: goto label_7F097760;
    case 0x7F097764u: goto label_7F097764;
    case 0x7F097768u: goto label_7F097768;
    case 0x7F09776Cu: goto label_7F09776C;
    case 0x7F097770u: goto label_7F097770;
    case 0x7F097774u: goto label_7F097774;
    case 0x7F097778u: goto label_7F097778;
    case 0x7F09777Cu: goto label_7F09777C;
    case 0x7F097780u: goto label_7F097780;
    case 0x7F097784u: goto label_7F097784;
    case 0x7F097788u: goto label_7F097788;
    case 0x7F09778Cu: goto label_7F09778C;
    case 0x7F097790u: goto label_7F097790;
    case 0x7F097794u: goto label_7F097794;
    case 0x7F097798u: goto label_7F097798;
    case 0x7F09779Cu: goto label_7F09779C;
    case 0x7F0977A0u: goto label_7F0977A0;
    case 0x7F0977A4u: goto label_7F0977A4;
    case 0x7F0977A8u: goto label_7F0977A8;
    case 0x7F0977ACu: goto label_7F0977AC;
    case 0x7F0977B0u: goto label_7F0977B0;
    case 0x7F0977B4u: goto label_7F0977B4;
    case 0x7F0977B8u: goto label_7F0977B8;
    case 0x7F0977BCu: goto label_7F0977BC;
    case 0x7F0977C0u: goto label_7F0977C0;
    case 0x7F0977C4u: goto label_7F0977C4;
    case 0x7F0977C8u: goto label_7F0977C8;
    case 0x7F0977CCu: goto label_7F0977CC;
    case 0x7F0977D0u: goto label_7F0977D0;
    case 0x7F0977D4u: goto label_7F0977D4;
    case 0x7F0977D8u: goto label_7F0977D8;
    case 0x7F0977DCu: goto label_7F0977DC;
    case 0x7F0977E0u: goto label_7F0977E0;
    case 0x7F0977E4u: goto label_7F0977E4;
    case 0x7F0977E8u: goto label_7F0977E8;
    case 0x7F0977ECu: goto label_7F0977EC;
    case 0x7F0977F0u: goto label_7F0977F0;
    case 0x7F0977F4u: goto label_7F0977F4;
    case 0x7F0977F8u: goto label_7F0977F8;
    case 0x7F0977FCu: goto label_7F0977FC;
    case 0x7F097800u: goto label_7F097800;
    case 0x7F097804u: goto label_7F097804;
    case 0x7F097808u: goto label_7F097808;
    case 0x7F09780Cu: goto label_7F09780C;
    case 0x7F097810u: goto label_7F097810;
    case 0x7F097814u: goto label_7F097814;
    case 0x7F097818u: goto label_7F097818;
    case 0x7F09781Cu: goto label_7F09781C;
    case 0x7F097820u: goto label_7F097820;
    case 0x7F097824u: goto label_7F097824;
    case 0x7F097828u: goto label_7F097828;
    case 0x7F09782Cu: goto label_7F09782C;
    case 0x7F097830u: goto label_7F097830;
    case 0x7F097834u: goto label_7F097834;
    case 0x7F097838u: goto label_7F097838;
    case 0x7F09783Cu: goto label_7F09783C;
    case 0x7F097840u: goto label_7F097840;
    case 0x7F097844u: goto label_7F097844;
    case 0x7F097848u: goto label_7F097848;
    case 0x7F09784Cu: goto label_7F09784C;
    case 0x7F097850u: goto label_7F097850;
    case 0x7F097854u: goto label_7F097854;
    case 0x7F097858u: goto label_7F097858;
    case 0x7F09785Cu: goto label_7F09785C;
    case 0x7F097860u: goto label_7F097860;
    case 0x7F097864u: goto label_7F097864;
    case 0x7F097868u: goto label_7F097868;
    case 0x7F09786Cu: goto label_7F09786C;
    case 0x7F097870u: goto label_7F097870;
    case 0x7F097874u: goto label_7F097874;
    case 0x7F097878u: goto label_7F097878;
    case 0x7F09787Cu: goto label_7F09787C;
    case 0x7F097880u: goto label_7F097880;
    case 0x7F097884u: goto label_7F097884;
    case 0x7F097888u: goto label_7F097888;
    case 0x7F09788Cu: goto label_7F09788C;
    case 0x7F097890u: goto label_7F097890;
    case 0x7F097894u: goto label_7F097894;
    case 0x7F097898u: goto label_7F097898;
    case 0x7F09789Cu: goto label_7F09789C;
    case 0x7F0978A0u: goto label_7F0978A0;
    case 0x7F0978A4u: goto label_7F0978A4;
    case 0x7F0978A8u: goto label_7F0978A8;
    case 0x7F0978ACu: goto label_7F0978AC;
    case 0x7F0978B0u: goto label_7F0978B0;
    case 0x7F0978B4u: goto label_7F0978B4;
    case 0x7F0978B8u: goto label_7F0978B8;
    case 0x7F0978BCu: goto label_7F0978BC;
    case 0x7F0978C0u: goto label_7F0978C0;
    case 0x7F0978C4u: goto label_7F0978C4;
    case 0x7F0978C8u: goto label_7F0978C8;
    case 0x7F0978CCu: goto label_7F0978CC;
    case 0x7F0978D0u: goto label_7F0978D0;
    case 0x7F0978D4u: goto label_7F0978D4;
    case 0x7F0978D8u: goto label_7F0978D8;
    case 0x7F0978DCu: goto label_7F0978DC;
    case 0x7F0978E0u: goto label_7F0978E0;
    case 0x7F0978E4u: goto label_7F0978E4;
    case 0x7F0978E8u: goto label_7F0978E8;
    case 0x7F0978ECu: goto label_7F0978EC;
    case 0x7F0978F0u: goto label_7F0978F0;
    case 0x7F0978F4u: goto label_7F0978F4;
    case 0x7F0978F8u: goto label_7F0978F8;
    case 0x7F0978FCu: goto label_7F0978FC;
    case 0x7F097900u: goto label_7F097900;
    case 0x7F097904u: goto label_7F097904;
    case 0x7F097908u: goto label_7F097908;
    case 0x7F09790Cu: goto label_7F09790C;
    case 0x7F097910u: goto label_7F097910;
    case 0x7F097914u: goto label_7F097914;
    case 0x7F097918u: goto label_7F097918;
    case 0x7F09791Cu: goto label_7F09791C;
    case 0x7F097920u: goto label_7F097920;
    case 0x7F097924u: goto label_7F097924;
    case 0x7F097928u: goto label_7F097928;
    case 0x7F09792Cu: goto label_7F09792C;
    case 0x7F097930u: goto label_7F097930;
    case 0x7F097934u: goto label_7F097934;
    case 0x7F097938u: goto label_7F097938;
    case 0x7F09793Cu: goto label_7F09793C;
    case 0x7F097940u: goto label_7F097940;
    case 0x7F097944u: goto label_7F097944;
    case 0x7F097948u: goto label_7F097948;
    case 0x7F09794Cu: goto label_7F09794C;
    case 0x7F097950u: goto label_7F097950;
    case 0x7F097954u: goto label_7F097954;
    case 0x7F097958u: goto label_7F097958;
    case 0x7F09795Cu: goto label_7F09795C;
    case 0x7F097960u: goto label_7F097960;
    case 0x7F097964u: goto label_7F097964;
    case 0x7F097968u: goto label_7F097968;
    case 0x7F09796Cu: goto label_7F09796C;
    case 0x7F097970u: goto label_7F097970;
    case 0x7F097974u: goto label_7F097974;
    case 0x7F097978u: goto label_7F097978;
    case 0x7F09797Cu: goto label_7F09797C;
    case 0x7F097980u: goto label_7F097980;
    case 0x7F097984u: goto label_7F097984;
    case 0x7F097988u: goto label_7F097988;
    case 0x7F09798Cu: goto label_7F09798C;
    case 0x7F097990u: goto label_7F097990;
    case 0x7F097994u: goto label_7F097994;
    case 0x7F097998u: goto label_7F097998;
    case 0x7F09799Cu: goto label_7F09799C;
    case 0x7F0979A0u: goto label_7F0979A0;
    case 0x7F0979A4u: goto label_7F0979A4;
    case 0x7F0979A8u: goto label_7F0979A8;
    case 0x7F0979ACu: goto label_7F0979AC;
    case 0x7F0979B0u: goto label_7F0979B0;
    case 0x7F0979B4u: goto label_7F0979B4;
    case 0x7F0979B8u: goto label_7F0979B8;
    case 0x7F0979BCu: goto label_7F0979BC;
    case 0x7F0979C0u: goto label_7F0979C0;
    case 0x7F0979C4u: goto label_7F0979C4;
    case 0x7F0979C8u: goto label_7F0979C8;
    case 0x7F0979CCu: goto label_7F0979CC;
    case 0x7F0979D0u: goto label_7F0979D0;
    case 0x7F0979D4u: goto label_7F0979D4;
    case 0x7F0979D8u: goto label_7F0979D8;
    case 0x7F0979DCu: goto label_7F0979DC;
    case 0x7F0979E0u: goto label_7F0979E0;
    case 0x7F0979E4u: goto label_7F0979E4;
    case 0x7F0979E8u: goto label_7F0979E8;
    case 0x7F0979ECu: goto label_7F0979EC;
    case 0x7F0979F0u: goto label_7F0979F0;
    case 0x7F0979F4u: goto label_7F0979F4;
    case 0x7F0979F8u: goto label_7F0979F8;
    case 0x7F0979FCu: goto label_7F0979FC;
    case 0x7F097A00u: goto label_7F097A00;
    case 0x7F097A04u: goto label_7F097A04;
    case 0x7F097A08u: goto label_7F097A08;
    case 0x7F097A0Cu: goto label_7F097A0C;
    case 0x7F097A10u: goto label_7F097A10;
    case 0x7F097A14u: goto label_7F097A14;
    case 0x7F097A18u: goto label_7F097A18;
    case 0x7F097A1Cu: goto label_7F097A1C;
    case 0x7F097A20u: goto label_7F097A20;
    case 0x7F097A24u: goto label_7F097A24;
    case 0x7F097A28u: goto label_7F097A28;
    case 0x7F097A2Cu: goto label_7F097A2C;
    case 0x7F097A30u: goto label_7F097A30;
    case 0x7F097A34u: goto label_7F097A34;
    case 0x7F097A38u: goto label_7F097A38;
    case 0x7F097A3Cu: goto label_7F097A3C;
    case 0x7F097A40u: goto label_7F097A40;
    case 0x7F097A44u: goto label_7F097A44;
    case 0x7F097A48u: goto label_7F097A48;
    case 0x7F097A4Cu: goto label_7F097A4C;
    case 0x7F097A50u: goto label_7F097A50;
    case 0x7F097A54u: goto label_7F097A54;
    case 0x7F097A58u: goto label_7F097A58;
    case 0x7F097A5Cu: goto label_7F097A5C;
    case 0x7F097A60u: goto label_7F097A60;
    case 0x7F097A64u: goto label_7F097A64;
    case 0x7F097A68u: goto label_7F097A68;
    case 0x7F097A6Cu: goto label_7F097A6C;
    case 0x7F097A70u: goto label_7F097A70;
    case 0x7F097A74u: goto label_7F097A74;
    case 0x7F097A78u: goto label_7F097A78;
    case 0x7F097A7Cu: goto label_7F097A7C;
    case 0x7F097A80u: goto label_7F097A80;
    case 0x7F097A84u: goto label_7F097A84;
    case 0x7F097A88u: goto label_7F097A88;
    case 0x7F097A8Cu: goto label_7F097A8C;
    case 0x7F097A90u: goto label_7F097A90;
    case 0x7F097A94u: goto label_7F097A94;
    case 0x7F097A98u: goto label_7F097A98;
    case 0x7F097A9Cu: goto label_7F097A9C;
    case 0x7F097AA0u: goto label_7F097AA0;
    case 0x7F097AA4u: goto label_7F097AA4;
    case 0x7F097AA8u: goto label_7F097AA8;
    case 0x7F097AACu: goto label_7F097AAC;
    case 0x7F097AB0u: goto label_7F097AB0;
    case 0x7F097AB4u: goto label_7F097AB4;
    case 0x7F097AB8u: goto label_7F097AB8;
    case 0x7F097ABCu: goto label_7F097ABC;
    case 0x7F097AC0u: goto label_7F097AC0;
    case 0x7F097AC4u: goto label_7F097AC4;
    case 0x7F097AC8u: goto label_7F097AC8;
    case 0x7F097ACCu: goto label_7F097ACC;
    case 0x7F097AD0u: goto label_7F097AD0;
    case 0x7F097AD4u: goto label_7F097AD4;
    case 0x7F097AD8u: goto label_7F097AD8;
    case 0x7F097ADCu: goto label_7F097ADC;
    case 0x7F097AE0u: goto label_7F097AE0;
    case 0x7F097AE4u: goto label_7F097AE4;
    case 0x7F097AE8u: goto label_7F097AE8;
    case 0x7F097AECu: goto label_7F097AEC;
    case 0x7F097AF0u: goto label_7F097AF0;
    case 0x7F097AF4u: goto label_7F097AF4;
    case 0x7F097AF8u: goto label_7F097AF8;
    case 0x7F097AFCu: goto label_7F097AFC;
    case 0x7F097B00u: goto label_7F097B00;
    case 0x7F097B04u: goto label_7F097B04;
    case 0x7F097B08u: goto label_7F097B08;
    case 0x7F097B0Cu: goto label_7F097B0C;
    case 0x7F097B10u: goto label_7F097B10;
    case 0x7F097B14u: goto label_7F097B14;
    case 0x7F097B18u: goto label_7F097B18;
    case 0x7F097B1Cu: goto label_7F097B1C;
    case 0x7F097B20u: goto label_7F097B20;
    case 0x7F097B24u: goto label_7F097B24;
    case 0x7F097B28u: goto label_7F097B28;
    case 0x7F097B2Cu: goto label_7F097B2C;
    case 0x7F097B30u: goto label_7F097B30;
    case 0x7F097B34u: goto label_7F097B34;
    case 0x7F097B38u: goto label_7F097B38;
    case 0x7F097B3Cu: goto label_7F097B3C;
    case 0x7F097B40u: goto label_7F097B40;
    case 0x7F097B44u: goto label_7F097B44;
    case 0x7F097B48u: goto label_7F097B48;
    case 0x7F097B4Cu: goto label_7F097B4C;
    case 0x7F097B50u: goto label_7F097B50;
    case 0x7F097B54u: goto label_7F097B54;
    case 0x7F097B58u: goto label_7F097B58;
    case 0x7F097B5Cu: goto label_7F097B5C;
    case 0x7F097B60u: goto label_7F097B60;
    case 0x7F097B64u: goto label_7F097B64;
    case 0x7F097B68u: goto label_7F097B68;
    case 0x7F097B6Cu: goto label_7F097B6C;
    case 0x7F097B70u: goto label_7F097B70;
    case 0x7F097B74u: goto label_7F097B74;
    case 0x7F097B78u: goto label_7F097B78;
    case 0x7F097B7Cu: goto label_7F097B7C;
    case 0x7F097B80u: goto label_7F097B80;
    case 0x7F097B84u: goto label_7F097B84;
    case 0x7F097B88u: goto label_7F097B88;
    case 0x7F097B8Cu: goto label_7F097B8C;
    case 0x7F097B90u: goto label_7F097B90;
    case 0x7F097B94u: goto label_7F097B94;
    case 0x7F097B98u: goto label_7F097B98;
    case 0x7F097B9Cu: goto label_7F097B9C;
    case 0x7F097BA0u: goto label_7F097BA0;
    case 0x7F097BA4u: goto label_7F097BA4;
    case 0x7F097BA8u: goto label_7F097BA8;
    case 0x7F097BACu: goto label_7F097BAC;
    case 0x7F097BB0u: goto label_7F097BB0;
    case 0x7F097BB4u: goto label_7F097BB4;
    case 0x7F097BB8u: goto label_7F097BB8;
    case 0x7F097BBCu: goto label_7F097BBC;
    case 0x7F097BC0u: goto label_7F097BC0;
    case 0x7F097BC4u: goto label_7F097BC4;
    case 0x7F097BC8u: goto label_7F097BC8;
    case 0x7F097BCCu: goto label_7F097BCC;
    case 0x7F097BD0u: goto label_7F097BD0;
    case 0x7F097BD4u: goto label_7F097BD4;
    case 0x7F097BD8u: goto label_7F097BD8;
    case 0x7F097BDCu: goto label_7F097BDC;
    case 0x7F097BE0u: goto label_7F097BE0;
    case 0x7F097BE4u: goto label_7F097BE4;
    case 0x7F097BE8u: goto label_7F097BE8;
    case 0x7F097BECu: goto label_7F097BEC;
    case 0x7F097BF0u: goto label_7F097BF0;
    case 0x7F097BF4u: goto label_7F097BF4;
    case 0x7F097BF8u: goto label_7F097BF8;
    case 0x7F097BFCu: goto label_7F097BFC;
    case 0x7F097C00u: goto label_7F097C00;
    case 0x7F097C04u: goto label_7F097C04;
    case 0x7F097C08u: goto label_7F097C08;
    case 0x7F097C0Cu: goto label_7F097C0C;
    case 0x7F097C10u: goto label_7F097C10;
    case 0x7F097C14u: goto label_7F097C14;
    case 0x7F097C18u: goto label_7F097C18;
    case 0x7F097C1Cu: goto label_7F097C1C;
    case 0x7F097C20u: goto label_7F097C20;
    case 0x7F097C24u: goto label_7F097C24;
    case 0x7F097C28u: goto label_7F097C28;
    case 0x7F097C2Cu: goto label_7F097C2C;
    case 0x7F097C30u: goto label_7F097C30;
    case 0x7F097C34u: goto label_7F097C34;
    case 0x7F097C38u: goto label_7F097C38;
    case 0x7F097C3Cu: goto label_7F097C3C;
    case 0x7F097C40u: goto label_7F097C40;
    case 0x7F097C44u: goto label_7F097C44;
    case 0x7F097C48u: goto label_7F097C48;
    case 0x7F097C4Cu: goto label_7F097C4C;
    case 0x7F097C50u: goto label_7F097C50;
    case 0x7F097C54u: goto label_7F097C54;
    case 0x7F097C58u: goto label_7F097C58;
    case 0x7F097C5Cu: goto label_7F097C5C;
    case 0x7F097C60u: goto label_7F097C60;
    case 0x7F097C64u: goto label_7F097C64;
    case 0x7F097C68u: goto label_7F097C68;
    case 0x7F097C6Cu: goto label_7F097C6C;
    case 0x7F097C70u: goto label_7F097C70;
    case 0x7F097C74u: goto label_7F097C74;
    case 0x7F097C78u: goto label_7F097C78;
    case 0x7F097C7Cu: goto label_7F097C7C;
    case 0x7F097C80u: goto label_7F097C80;
    case 0x7F097C84u: goto label_7F097C84;
    case 0x7F097C88u: goto label_7F097C88;
    case 0x7F097C8Cu: goto label_7F097C8C;
    case 0x7F097C90u: goto label_7F097C90;
    case 0x7F097C94u: goto label_7F097C94;
    case 0x7F097C98u: goto label_7F097C98;
    case 0x7F097C9Cu: goto label_7F097C9C;
    case 0x7F097CA0u: goto label_7F097CA0;
    case 0x7F097CA4u: goto label_7F097CA4;
    case 0x7F097CA8u: goto label_7F097CA8;
    case 0x7F097CACu: goto label_7F097CAC;
    case 0x7F097CB0u: goto label_7F097CB0;
    case 0x7F097CB4u: goto label_7F097CB4;
    case 0x7F097CB8u: goto label_7F097CB8;
    case 0x7F097CBCu: goto label_7F097CBC;
    case 0x7F097CC0u: goto label_7F097CC0;
    case 0x7F097CC4u: goto label_7F097CC4;
    case 0x7F097CC8u: goto label_7F097CC8;
    case 0x7F097CCCu: goto label_7F097CCC;
    case 0x7F097CD0u: goto label_7F097CD0;
    case 0x7F097CD4u: goto label_7F097CD4;
    case 0x7F097CD8u: goto label_7F097CD8;
    case 0x7F097CDCu: goto label_7F097CDC;
    case 0x7F097CE0u: goto label_7F097CE0;
    case 0x7F097CE4u: goto label_7F097CE4;
    case 0x7F097CE8u: goto label_7F097CE8;
    case 0x7F097CECu: goto label_7F097CEC;
    case 0x7F097CF0u: goto label_7F097CF0;
    case 0x7F097CF4u: goto label_7F097CF4;
    case 0x7F097CF8u: goto label_7F097CF8;
    case 0x7F097CFCu: goto label_7F097CFC;
    case 0x7F097D00u: goto label_7F097D00;
    case 0x7F097D04u: goto label_7F097D04;
    case 0x7F097D08u: goto label_7F097D08;
    case 0x7F097D0Cu: goto label_7F097D0C;
    case 0x7F097D10u: goto label_7F097D10;
    case 0x7F097D14u: goto label_7F097D14;
    case 0x7F097D18u: goto label_7F097D18;
    case 0x7F097D1Cu: goto label_7F097D1C;
    case 0x7F097D20u: goto label_7F097D20;
    case 0x7F097D24u: goto label_7F097D24;
    case 0x7F097D28u: goto label_7F097D28;
    case 0x7F097D2Cu: goto label_7F097D2C;
    case 0x7F097D30u: goto label_7F097D30;
    case 0x7F097D34u: goto label_7F097D34;
    case 0x7F097D38u: goto label_7F097D38;
    case 0x7F097D3Cu: goto label_7F097D3C;
    case 0x7F097D40u: goto label_7F097D40;
    case 0x7F097D44u: goto label_7F097D44;
    case 0x7F097D48u: goto label_7F097D48;
    case 0x7F097D4Cu: goto label_7F097D4C;
    case 0x7F097D50u: goto label_7F097D50;
    case 0x7F097D54u: goto label_7F097D54;
    case 0x7F097D58u: goto label_7F097D58;
    case 0x7F097D5Cu: goto label_7F097D5C;
    case 0x7F097D60u: goto label_7F097D60;
    case 0x7F097D64u: goto label_7F097D64;
    case 0x7F097D68u: goto label_7F097D68;
    case 0x7F097D6Cu: goto label_7F097D6C;
    case 0x7F097D70u: goto label_7F097D70;
    case 0x7F097D74u: goto label_7F097D74;
    case 0x7F097D78u: goto label_7F097D78;
    case 0x7F097D7Cu: goto label_7F097D7C;
    case 0x7F097D80u: goto label_7F097D80;
    case 0x7F097D84u: goto label_7F097D84;
    case 0x7F097D88u: goto label_7F097D88;
    case 0x7F097D8Cu: goto label_7F097D8C;
    case 0x7F097D90u: goto label_7F097D90;
    case 0x7F097D94u: goto label_7F097D94;
    case 0x7F097D98u: goto label_7F097D98;
    case 0x7F097D9Cu: goto label_7F097D9C;
    case 0x7F097DA0u: goto label_7F097DA0;
    case 0x7F097DA4u: goto label_7F097DA4;
    case 0x7F097DA8u: goto label_7F097DA8;
    case 0x7F097DACu: goto label_7F097DAC;
    case 0x7F097DB0u: goto label_7F097DB0;
    case 0x7F097DB4u: goto label_7F097DB4;
    case 0x7F097DB8u: goto label_7F097DB8;
    case 0x7F097DBCu: goto label_7F097DBC;
    case 0x7F097DC0u: goto label_7F097DC0;
    case 0x7F097DC4u: goto label_7F097DC4;
    case 0x7F097DC8u: goto label_7F097DC8;
    case 0x7F097DCCu: goto label_7F097DCC;
    case 0x7F097DD0u: goto label_7F097DD0;
    case 0x7F097DD4u: goto label_7F097DD4;
    case 0x7F097DD8u: goto label_7F097DD8;
    case 0x7F097DDCu: goto label_7F097DDC;
    case 0x7F097DE0u: goto label_7F097DE0;
    case 0x7F097DE4u: goto label_7F097DE4;
    case 0x7F097DE8u: goto label_7F097DE8;
    case 0x7F097DECu: goto label_7F097DEC;
    case 0x7F097DF0u: goto label_7F097DF0;
    case 0x7F097DF4u: goto label_7F097DF4;
    case 0x7F097DF8u: goto label_7F097DF8;
    case 0x7F097DFCu: goto label_7F097DFC;
    case 0x7F097E00u: goto label_7F097E00;
    case 0x7F097E04u: goto label_7F097E04;
    case 0x7F097E08u: goto label_7F097E08;
    case 0x7F097E0Cu: goto label_7F097E0C;
    case 0x7F097E10u: goto label_7F097E10;
    case 0x7F097E14u: goto label_7F097E14;
    case 0x7F097E18u: goto label_7F097E18;
    case 0x7F097E1Cu: goto label_7F097E1C;
    case 0x7F097E20u: goto label_7F097E20;
    case 0x7F097E24u: goto label_7F097E24;
    case 0x7F097E28u: goto label_7F097E28;
    case 0x7F097E2Cu: goto label_7F097E2C;
    case 0x7F097E30u: goto label_7F097E30;
    case 0x7F097E34u: goto label_7F097E34;
    case 0x7F097E38u: goto label_7F097E38;
    case 0x7F097E3Cu: goto label_7F097E3C;
    case 0x7F097E40u: goto label_7F097E40;
    case 0x7F097E44u: goto label_7F097E44;
    case 0x7F097E48u: goto label_7F097E48;
    case 0x7F097E4Cu: goto label_7F097E4C;
    case 0x7F097E50u: goto label_7F097E50;
    case 0x7F097E54u: goto label_7F097E54;
    case 0x7F097E58u: goto label_7F097E58;
    case 0x7F097E5Cu: goto label_7F097E5C;
    case 0x7F097E60u: goto label_7F097E60;
    case 0x7F097E64u: goto label_7F097E64;
    case 0x7F097E68u: goto label_7F097E68;
    case 0x7F097E6Cu: goto label_7F097E6C;
    case 0x7F097E70u: goto label_7F097E70;
    case 0x7F097E74u: goto label_7F097E74;
    case 0x7F097E78u: goto label_7F097E78;
    case 0x7F097E7Cu: goto label_7F097E7C;
    case 0x7F097E80u: goto label_7F097E80;
    case 0x7F097E84u: goto label_7F097E84;
    case 0x7F097E88u: goto label_7F097E88;
    case 0x7F097E8Cu: goto label_7F097E8C;
    case 0x7F097E90u: goto label_7F097E90;
    case 0x7F097E94u: goto label_7F097E94;
    case 0x7F097E98u: goto label_7F097E98;
    case 0x7F097E9Cu: goto label_7F097E9C;
    case 0x7F097EA0u: goto label_7F097EA0;
    case 0x7F097EA4u: goto label_7F097EA4;
    case 0x7F097EA8u: goto label_7F097EA8;
    case 0x7F097EACu: goto label_7F097EAC;
    case 0x7F097EB0u: goto label_7F097EB0;
    case 0x7F097EB4u: goto label_7F097EB4;
    case 0x7F097EB8u: goto label_7F097EB8;
    case 0x7F097EBCu: goto label_7F097EBC;
    case 0x7F097EC0u: goto label_7F097EC0;
    case 0x7F097EC4u: goto label_7F097EC4;
    case 0x7F097EC8u: goto label_7F097EC8;
    case 0x7F097ECCu: goto label_7F097ECC;
    case 0x7F097ED0u: goto label_7F097ED0;
    case 0x7F097ED4u: goto label_7F097ED4;
    case 0x7F097ED8u: goto label_7F097ED8;
    case 0x7F097EDCu: goto label_7F097EDC;
    case 0x7F097EE0u: goto label_7F097EE0;
    case 0x7F097EE4u: goto label_7F097EE4;
    case 0x7F097EE8u: goto label_7F097EE8;
    case 0x7F097EECu: goto label_7F097EEC;
    case 0x7F097EF0u: goto label_7F097EF0;
    case 0x7F097EF4u: goto label_7F097EF4;
    case 0x7F097EF8u: goto label_7F097EF8;
    case 0x7F097EFCu: goto label_7F097EFC;
    case 0x7F097F00u: goto label_7F097F00;
    case 0x7F097F04u: goto label_7F097F04;
    case 0x7F097F08u: goto label_7F097F08;
    case 0x7F097F0Cu: goto label_7F097F0C;
    case 0x7F097F10u: goto label_7F097F10;
    case 0x7F097F14u: goto label_7F097F14;
    case 0x7F097F18u: goto label_7F097F18;
    case 0x7F097F1Cu: goto label_7F097F1C;
    case 0x7F097F20u: goto label_7F097F20;
    case 0x7F097F24u: goto label_7F097F24;
    case 0x7F097F28u: goto label_7F097F28;
    case 0x7F097F2Cu: goto label_7F097F2C;
    case 0x7F097F30u: goto label_7F097F30;
    case 0x7F097F34u: goto label_7F097F34;
    case 0x7F097F38u: goto label_7F097F38;
    case 0x7F097F3Cu: goto label_7F097F3C;
    case 0x7F097F40u: goto label_7F097F40;
    case 0x7F097F44u: goto label_7F097F44;
    case 0x7F097F48u: goto label_7F097F48;
    case 0x7F097F4Cu: goto label_7F097F4C;
    case 0x7F097F50u: goto label_7F097F50;
    case 0x7F097F54u: goto label_7F097F54;
    case 0x7F097F58u: goto label_7F097F58;
    case 0x7F097F5Cu: goto label_7F097F5C;
    case 0x7F097F60u: goto label_7F097F60;
    case 0x7F097F64u: goto label_7F097F64;
    case 0x7F097F68u: goto label_7F097F68;
    case 0x7F097F6Cu: goto label_7F097F6C;
    case 0x7F097F70u: goto label_7F097F70;
    case 0x7F097F74u: goto label_7F097F74;
    case 0x7F097F78u: goto label_7F097F78;
    case 0x7F097F7Cu: goto label_7F097F7C;
    case 0x7F097F80u: goto label_7F097F80;
    case 0x7F097F84u: goto label_7F097F84;
    case 0x7F097F88u: goto label_7F097F88;
    case 0x7F097F8Cu: goto label_7F097F8C;
    case 0x7F097F90u: goto label_7F097F90;
    case 0x7F097F94u: goto label_7F097F94;
    case 0x7F097F98u: goto label_7F097F98;
    case 0x7F097F9Cu: goto label_7F097F9C;
    case 0x7F097FA0u: goto label_7F097FA0;
    case 0x7F097FA4u: goto label_7F097FA4;
    case 0x7F097FA8u: goto label_7F097FA8;
    case 0x7F097FACu: goto label_7F097FAC;
    case 0x7F097FB0u: goto label_7F097FB0;
    case 0x7F097FB4u: goto label_7F097FB4;
    case 0x7F097FB8u: goto label_7F097FB8;
    case 0x7F097FBCu: goto label_7F097FBC;
    case 0x7F097FC0u: goto label_7F097FC0;
    case 0x7F097FC4u: goto label_7F097FC4;
    case 0x7F097FC8u: goto label_7F097FC8;
    case 0x7F097FCCu: goto label_7F097FCC;
    case 0x7F097FD0u: goto label_7F097FD0;
    case 0x7F097FD4u: goto label_7F097FD4;
    case 0x7F097FD8u: goto label_7F097FD8;
    case 0x7F097FDCu: goto label_7F097FDC;
    case 0x7F097FE0u: goto label_7F097FE0;
    case 0x7F097FE4u: goto label_7F097FE4;
    case 0x7F097FE8u: goto label_7F097FE8;
    case 0x7F097FECu: goto label_7F097FEC;
    case 0x7F097FF0u: goto label_7F097FF0;
    case 0x7F097FF4u: goto label_7F097FF4;
    case 0x7F097FF8u: goto label_7F097FF8;
    case 0x7F097FFCu: goto label_7F097FFC;
    case 0x7F098000u: goto label_7F098000;
    case 0x7F098004u: goto label_7F098004;
    case 0x7F098008u: goto label_7F098008;
    case 0x7F09800Cu: goto label_7F09800C;
    case 0x7F098010u: goto label_7F098010;
    case 0x7F098014u: goto label_7F098014;
    case 0x7F098018u: goto label_7F098018;
    case 0x7F09801Cu: goto label_7F09801C;
    case 0x7F098020u: goto label_7F098020;
    case 0x7F098024u: goto label_7F098024;
    case 0x7F098028u: goto label_7F098028;
    case 0x7F09802Cu: goto label_7F09802C;
    case 0x7F098030u: goto label_7F098030;
    case 0x7F098034u: goto label_7F098034;
    case 0x7F098038u: goto label_7F098038;
    case 0x7F09803Cu: goto label_7F09803C;
    case 0x7F098040u: goto label_7F098040;
    case 0x7F098044u: goto label_7F098044;
    case 0x7F098048u: goto label_7F098048;
    case 0x7F09804Cu: goto label_7F09804C;
    case 0x7F098050u: goto label_7F098050;
    case 0x7F098054u: goto label_7F098054;
    case 0x7F098058u: goto label_7F098058;
    case 0x7F09805Cu: goto label_7F09805C;
    case 0x7F098060u: goto label_7F098060;
    case 0x7F098064u: goto label_7F098064;
    case 0x7F098068u: goto label_7F098068;
    case 0x7F09806Cu: goto label_7F09806C;
    case 0x7F098070u: goto label_7F098070;
    case 0x7F098074u: goto label_7F098074;
    case 0x7F098078u: goto label_7F098078;
    case 0x7F09807Cu: goto label_7F09807C;
    case 0x7F098080u: goto label_7F098080;
    case 0x7F098084u: goto label_7F098084;
    case 0x7F098088u: goto label_7F098088;
    case 0x7F09808Cu: goto label_7F09808C;
    case 0x7F098090u: goto label_7F098090;
    case 0x7F098094u: goto label_7F098094;
    case 0x7F098098u: goto label_7F098098;
    case 0x7F09809Cu: goto label_7F09809C;
    case 0x7F0980A0u: goto label_7F0980A0;
    case 0x7F0980A4u: goto label_7F0980A4;
    case 0x7F0980A8u: goto label_7F0980A8;
    case 0x7F0980ACu: goto label_7F0980AC;
    case 0x7F0980B0u: goto label_7F0980B0;
    case 0x7F0980B4u: goto label_7F0980B4;
    case 0x7F0980B8u: goto label_7F0980B8;
    case 0x7F0980BCu: goto label_7F0980BC;
    case 0x7F0980C0u: goto label_7F0980C0;
    case 0x7F0980C4u: goto label_7F0980C4;
    case 0x7F0980C8u: goto label_7F0980C8;
    case 0x7F0980CCu: goto label_7F0980CC;
    case 0x7F0980D0u: goto label_7F0980D0;
    case 0x7F0980D4u: goto label_7F0980D4;
    case 0x7F0980D8u: goto label_7F0980D8;
    case 0x7F0980DCu: goto label_7F0980DC;
    case 0x7F0980E0u: goto label_7F0980E0;
    case 0x7F0980E4u: goto label_7F0980E4;
    case 0x7F0980E8u: goto label_7F0980E8;
    default: return;
    }
label_7F0940EC:
    ctx->pc = 0x7F0940ECu;
    ctx->downcount -= 5;
    // 7F0940EC: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0940F0:
    ctx->pc = 0x7F0940F0u;
    // 7F0940F0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0940F4:
    ctx->pc = 0x7F0940F4u;
    // 7F0940F4: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F0940F8:
    ctx->pc = 0x7F0940F8u;
    // 7F0940F8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0940FC:
    ctx->pc = 0x7F0940FCu;
    // 7F0940FC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F094100u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F094100:
    ctx->pc = 0x7F094100u;
    ctx->downcount -= 5;
    // 7F094100: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094104:
    ctx->pc = 0x7F094104u;
    // 7F094104: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094108:
    ctx->pc = 0x7F094108u;
    // 7F094108: addi    r3, r3, 22796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22796);

label_7F09410C:
    ctx->pc = 0x7F09410Cu;
    // 7F09410C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F094110:
    ctx->pc = 0x7F094110u;
    // 7F094110: bl      0x7F3B3648
    {
            ctx->lr = 0x7F094114u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F094114:
    ctx->pc = 0x7F094114u;
    ctx->downcount -= 18;
    // 7F094114: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F094118:
    ctx->pc = 0x7F094118u;
    // 7F094118: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F094118u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F09411C:
    ctx->pc = 0x7F09411Cu;
    // 7F09411C: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F09411Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094120:
    ctx->pc = 0x7F094120u;
    // 7F094120: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F094124:
    ctx->pc = 0x7F094124u;
    // 7F094124: lfs     f3, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F094128:
    ctx->pc = 0x7F094128u;
    // 7F094128: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F09412C:
    ctx->pc = 0x7F09412Cu;
    // 7F09412C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09412Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F094130:
    ctx->pc = 0x7F094130u;
    // 7F094130: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F094134:
    ctx->pc = 0x7F094134u;
    // 7F094134: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094138:
    ctx->pc = 0x7F094138u;
    // 7F094138: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F09413C:
    ctx->pc = 0x7F09413Cu;
    // 7F09413C: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09413Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094140:
    ctx->pc = 0x7F094140u;
    // 7F094140: lfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F094140u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094144:
    ctx->pc = 0x7F094144u;
    // 7F094144: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094144u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F094148:
    ctx->pc = 0x7F094148u;
    // 7F094148: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F09414C:
    ctx->pc = 0x7F09414Cu;
    // 7F09414C: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F09414Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094150:
    ctx->pc = 0x7F094150u;
    // 7F094150: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094150u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F094154:
    ctx->pc = 0x7F094154u;
    // 7F094154: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094158:
    ctx->pc = 0x7F094158u;
    // 7F094158: bl      0x7F1D2D04
    {
            ctx->lr = 0x7F09415Cu;
            ctx->pc = 0x7F1D2D04u;
            return;
    }

label_7F09415C:
    ctx->pc = 0x7F09415Cu;
    ctx->downcount -= 18;
    // 7F09415C: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F09415Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F09415Cu);
        if (ctx->exception) return;
    }

label_7F094160:
    ctx->pc = 0x7F094160u;
    // 7F094160: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094164:
    ctx->pc = 0x7F094164u;
    // 7F094164: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094168:
    ctx->pc = 0x7F094168u;
    // 7F094168: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09416C:
    ctx->pc = 0x7F09416Cu;
    // 7F09416C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094170:
    ctx->pc = 0x7F094170u;
    // 7F094170: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F094174:
    ctx->pc = 0x7F094174u;
    // 7F094174: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094178:
    ctx->pc = 0x7F094178u;
    ctx->downcount -= 9;
    // 7F094178: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09417C:
    ctx->pc = 0x7F09417Cu;
    // 7F09417C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094180:
    ctx->pc = 0x7F094180u;
    // 7F094180: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094184:
    ctx->pc = 0x7F094184u;
    // 7F094184: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F094188:
    ctx->pc = 0x7F094188u;
    // 7F094188: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F09418C:
    ctx->pc = 0x7F09418Cu;
    // 7F09418C: lha     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094190:
    ctx->pc = 0x7F094190u;
    // 7F094190: extsh. r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F094194:
    ctx->pc = 0x7F094194u;
    // 7F094194: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F094198:
    ctx->pc = 0x7F094198u;
    // 7F094198: bc    4, 0, 0x7F0941A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941A0;
        }
    }

label_7F09419C:
    ctx->pc = 0x7F09419Cu;
    ctx->downcount -= 1;
    // 7F09419C: neg  r4, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F0941A0:
    ctx->pc = 0x7F0941A0u;
    ctx->downcount -= 4;
    // 7F0941A0: lha     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0941A4:
    ctx->pc = 0x7F0941A4u;
    // 7F0941A4: extsh. r0, r5
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

label_7F0941A8:
    ctx->pc = 0x7F0941A8u;
    // 7F0941A8: or   r0, r5, r5
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0941AC:
    ctx->pc = 0x7F0941ACu;
    // 7F0941AC: bc    4, 0, 0x7F0941B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941B4;
        }
    }

label_7F0941B0:
    ctx->pc = 0x7F0941B0u;
    ctx->downcount -= 1;
    // 7F0941B0: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0941B4:
    ctx->pc = 0x7F0941B4u;
    ctx->downcount -= 2;
    // 7F0941B4: subf.   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
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

label_7F0941B8:
    ctx->pc = 0x7F0941B8u;
    // 7F0941B8: bc    4, 0, 0x7F0941E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941E4;
        }
    }

label_7F0941BC:
    ctx->pc = 0x7F0941BCu;
    ctx->downcount -= 2;
    // 7F0941BC: extsh. r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0941C0:
    ctx->pc = 0x7F0941C0u;
    // 7F0941C0: bc    4, 0, 0x7F0941C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941C8;
        }
    }

label_7F0941C4:
    ctx->pc = 0x7F0941C4u;
    ctx->downcount -= 1;
    // 7F0941C4: neg  r6, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[6] = (~a) + 1u;
    }

label_7F0941C8:
    ctx->pc = 0x7F0941C8u;
    ctx->downcount -= 3;
    // 7F0941C8: extsh. r0, r5
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

label_7F0941CC:
    ctx->pc = 0x7F0941CCu;
    // 7F0941CC: or   r0, r5, r5
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0941D0:
    ctx->pc = 0x7F0941D0u;
    // 7F0941D0: bc    4, 0, 0x7F0941D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941D8;
        }
    }

label_7F0941D4:
    ctx->pc = 0x7F0941D4u;
    ctx->downcount -= 1;
    // 7F0941D4: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0941D8:
    ctx->pc = 0x7F0941D8u;
    ctx->downcount -= 3;
    // 7F0941D8: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0941DC:
    ctx->pc = 0x7F0941DCu;
    // 7F0941DC: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F0941E0:
    ctx->pc = 0x7F0941E0u;
    // 7F0941E0: b       0x7F094204
    {
            goto label_7F094204;
    }

label_7F0941E4:
    ctx->pc = 0x7F0941E4u;
    ctx->downcount -= 2;
    // 7F0941E4: extsh. r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0941E8:
    ctx->pc = 0x7F0941E8u;
    // 7F0941E8: bc    4, 0, 0x7F0941F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0941F0;
        }
    }

label_7F0941EC:
    ctx->pc = 0x7F0941ECu;
    ctx->downcount -= 1;
    // 7F0941EC: neg  r6, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[6] = (~a) + 1u;
    }

label_7F0941F0:
    ctx->pc = 0x7F0941F0u;
    ctx->downcount -= 3;
    // 7F0941F0: extsh. r0, r5
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

label_7F0941F4:
    ctx->pc = 0x7F0941F4u;
    // 7F0941F4: or   r0, r5, r5
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0941F8:
    ctx->pc = 0x7F0941F8u;
    // 7F0941F8: bc    4, 0, 0x7F094200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094200;
        }
    }

label_7F0941FC:
    ctx->pc = 0x7F0941FCu;
    ctx->downcount -= 1;
    // 7F0941FC: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F094200:
    ctx->pc = 0x7F094200u;
    ctx->downcount -= 1;
    // 7F094200: subf   r4, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F094204:
    ctx->pc = 0x7F094204u;
    ctx->downcount -= 2;
    // 7F094204: extsh. r0, r5
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

label_7F094208:
    ctx->pc = 0x7F094208u;
    // 7F094208: bc    4, 0, 0x7F094214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094214;
        }
    }

label_7F09420C:
    ctx->pc = 0x7F09420Cu;
    ctx->downcount -= 2;
    // 7F09420C: cmpwi   r4, 2
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

label_7F094210:
    ctx->pc = 0x7F094210u;
    // 7F094210: bc    4, 0, 0x7F09421C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09421C;
        }
    }

label_7F094214:
    ctx->pc = 0x7F094214u;
    ctx->downcount -= 2;
    // 7F094214: extsh. r0, r5
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

label_7F094218:
    ctx->pc = 0x7F094218u;
    // 7F094218: bc    4, 2, 0x7F0942D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0942D4;
        }
    }

label_7F09421C:
    ctx->pc = 0x7F09421Cu;
    ctx->downcount -= 5;
    // 7F09421C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F094220:
    ctx->pc = 0x7F094220u;
    // 7F094220: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094224:
    ctx->pc = 0x7F094224u;
    // 7F094224: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F094228:
    ctx->pc = 0x7F094228u;
    // 7F094228: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F09422C:
    loop_7F09422C(ctx);
    if (ctx->pc == 0x7F094240u) goto label_7F094240;
    return;
label_7F094230:
    ctx->pc = 0x7F094230u;
    // 7F094230: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F094234:
    ctx->pc = 0x7F094234u;
    // 7F094234: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094238:
    ctx->pc = 0x7F094238u;
    // 7F094238: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F09423C:
    // 7F09423C: bc    16, 0, 0x7F09422C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F09422Cu;
                return;
            }
            goto label_7F09422C;
        }
    }

label_7F094240:
    ctx->pc = 0x7F094240u;
    ctx->downcount -= 2;
    // 7F094240: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F094244:
    ctx->pc = 0x7F094244u;
    // 7F094244: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F094248u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F094248:
    ctx->pc = 0x7F094248u;
    ctx->downcount -= 5;
    // 7F094248: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F09424C:
    ctx->pc = 0x7F09424Cu;
    // 7F09424C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F094250:
    ctx->pc = 0x7F094250u;
    // 7F094250: addi    r3, r3, 22812
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22812);

label_7F094254:
    ctx->pc = 0x7F094254u;
    // 7F094254: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F094258:
    ctx->pc = 0x7F094258u;
    // 7F094258: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F09425Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F09425C:
    ctx->pc = 0x7F09425Cu;
    ctx->downcount -= 5;
    // 7F09425C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094260:
    ctx->pc = 0x7F094260u;
    // 7F094260: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094264:
    ctx->pc = 0x7F094264u;
    // 7F094264: addi    r3, r3, 22828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22828);

label_7F094268:
    ctx->pc = 0x7F094268u;
    // 7F094268: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F09426C:
    ctx->pc = 0x7F09426Cu;
    // 7F09426C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F094270u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F094270:
    ctx->pc = 0x7F094270u;
    ctx->downcount -= 10;
    // 7F094270: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094274:
    ctx->pc = 0x7F094274u;
    // 7F094274: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F094278:
    ctx->pc = 0x7F094278u;
    // 7F094278: addi    r5, r4, -6620
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6620);

label_7F09427C:
    ctx->pc = 0x7F09427Cu;
    // 7F09427C: lfs     f2, -6616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09427Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F094280:
    ctx->pc = 0x7F094280u;
    // 7F094280: lis     r4, -14326
    ctx->gpr[4] = ((u32)(s32)(-14326) << 16);

label_7F094284:
    ctx->pc = 0x7F094284u;
    // 7F094284: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F094284u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094288:
    ctx->pc = 0x7F094288u;
    // 7F094288: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F09428C:
    ctx->pc = 0x7F09428Cu;
    // 7F09428C: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F094290:
    ctx->pc = 0x7F094290u;
    // 7F094290: addi    r4, r4, 2560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2560);

label_7F094294:
    ctx->pc = 0x7F094294u;
    // 7F094294: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F094298u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F094298:
    ctx->pc = 0x7F094298u;
    ctx->downcount -= 10;
    // 7F094298: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F09429C:
    ctx->pc = 0x7F09429Cu;
    // 7F09429C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0942A0:
    ctx->pc = 0x7F0942A0u;
    // 7F0942A0: addi    r5, r4, -6620
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6620);

label_7F0942A4:
    ctx->pc = 0x7F0942A4u;
    // 7F0942A4: lfs     f2, -6616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0942A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0942A8:
    ctx->pc = 0x7F0942A8u;
    // 7F0942A8: lis     r4, -14326
    ctx->gpr[4] = ((u32)(s32)(-14326) << 16);

label_7F0942AC:
    ctx->pc = 0x7F0942ACu;
    // 7F0942AC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0942ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0942B0:
    ctx->pc = 0x7F0942B0u;
    // 7F0942B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0942B4:
    ctx->pc = 0x7F0942B4u;
    // 7F0942B4: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F0942B8:
    ctx->pc = 0x7F0942B8u;
    // 7F0942B8: addi    r4, r4, 2560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2560);

label_7F0942BC:
    ctx->pc = 0x7F0942BCu;
    // 7F0942BC: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F0942C0u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F0942C0:
    ctx->pc = 0x7F0942C0u;
    ctx->downcount -= 5;
    // 7F0942C0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0942C4:
    ctx->pc = 0x7F0942C4u;
    // 7F0942C4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0942C8:
    ctx->pc = 0x7F0942C8u;
    // 7F0942C8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0942CC:
    ctx->pc = 0x7F0942CCu;
    // 7F0942CC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0942D0:
    ctx->pc = 0x7F0942D0u;
    // 7F0942D0: b       0x7F0942E4
    {
            goto label_7F0942E4;
    }

label_7F0942D4:
    ctx->pc = 0x7F0942D4u;
    ctx->downcount -= 4;
    // 7F0942D4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0942D8:
    ctx->pc = 0x7F0942D8u;
    // 7F0942D8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0942DC:
    ctx->pc = 0x7F0942DCu;
    // 7F0942DC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0942E0:
    ctx->pc = 0x7F0942E0u;
    // 7F0942E0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0942E4:
    ctx->pc = 0x7F0942E4u;
    ctx->downcount -= 6;
    // 7F0942E4: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0942E8:
    ctx->pc = 0x7F0942E8u;
    // 7F0942E8: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0942EC:
    ctx->pc = 0x7F0942ECu;
    // 7F0942EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0942F0:
    ctx->pc = 0x7F0942F0u;
    // 7F0942F0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0942F4:
    ctx->pc = 0x7F0942F4u;
    // 7F0942F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0942F8:
    ctx->pc = 0x7F0942F8u;
    ctx->downcount -= 168;
    // 7F0942F8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0942FC:
    ctx->pc = 0x7F0942FCu;
    // 7F0942FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F094300:
    ctx->pc = 0x7F094300u;
    // 7F094300: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F094304:
    ctx->pc = 0x7F094304u;
    // 7F094304: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F094308:
    ctx->pc = 0x7F094308u;
    // 7F094308: lha     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09430C:
    ctx->pc = 0x7F09430Cu;
    // 7F09430C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F094310:
    ctx->pc = 0x7F094310u;
    // 7F094310: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094314:
    ctx->pc = 0x7F094314u;
    // 7F094314: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F094318:
    ctx->pc = 0x7F094318u;
    // 7F094318: lfd     f2, -6656(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F094318u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6656);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F09431C:
    ctx->pc = 0x7F09431Cu;
    // 7F09431C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F094320:
    ctx->pc = 0x7F094320u;
    // 7F094320: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F094324:
    ctx->pc = 0x7F094324u;
    // 7F094324: lfs     f3, -6664(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F094324u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F094328:
    ctx->pc = 0x7F094328u;
    // 7F094328: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F09432C:
    ctx->pc = 0x7F09432Cu;
    // 7F09432C: lfs     f4, -6668(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F09432Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-6668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F094330:
    ctx->pc = 0x7F094330u;
    // 7F094330: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F094330u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F094334:
    ctx->pc = 0x7F094334u;
    // 7F094334: lfs     f1, -6672(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F094334u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094338:
    ctx->pc = 0x7F094338u;
    // 7F094338: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09433C:
    ctx->pc = 0x7F09433Cu;
    // 7F09433C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09433Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F094340:
    ctx->pc = 0x7F094340u;
    // 7F094340: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094344:
    ctx->pc = 0x7F094344u;
    // 7F094344: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094348:
    ctx->pc = 0x7F094348u;
    // 7F094348: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094348u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F09434C:
    ctx->pc = 0x7F09434Cu;
    // 7F09434C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094350:
    ctx->pc = 0x7F094350u;
    // 7F094350: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F094350u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F094354:
    ctx->pc = 0x7F094354u;
    // 7F094354: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094358:
    ctx->pc = 0x7F094358u;
    // 7F094358: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F094358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F09435C:
    ctx->pc = 0x7F09435Cu;
    // 7F09435C: lha     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094360:
    ctx->pc = 0x7F094360u;
    // 7F094360: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F094364:
    ctx->pc = 0x7F094364u;
    // 7F094364: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094368:
    ctx->pc = 0x7F094368u;
    // 7F094368: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F09436C:
    ctx->pc = 0x7F09436Cu;
    // 7F09436C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F09436Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F094370:
    ctx->pc = 0x7F094370u;
    // 7F094370: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094370u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F094374:
    ctx->pc = 0x7F094374u;
    // 7F094374: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094374u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F094378:
    ctx->pc = 0x7F094378u;
    // 7F094378: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F094378u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F09437C:
    ctx->pc = 0x7F09437Cu;
    // 7F09437C: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09437Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094380:
    ctx->pc = 0x7F094380u;
    // 7F094380: lha     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094384:
    ctx->pc = 0x7F094384u;
    // 7F094384: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F094388:
    ctx->pc = 0x7F094388u;
    // 7F094388: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09438C:
    ctx->pc = 0x7F09438Cu;
    // 7F09438C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09438Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094390:
    ctx->pc = 0x7F094390u;
    // 7F094390: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F094390u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F094394:
    ctx->pc = 0x7F094394u;
    // 7F094394: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094394u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F094398:
    ctx->pc = 0x7F094398u;
    // 7F094398: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094398u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F09439C:
    ctx->pc = 0x7F09439Cu;
    // 7F09439C: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F09439Cu)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F0943A0:
    ctx->pc = 0x7F0943A0u;
    // 7F0943A0: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0943A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0943A4:
    ctx->pc = 0x7F0943A4u;
    // 7F0943A4: lha     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0943A8:
    ctx->pc = 0x7F0943A8u;
    // 7F0943A8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0943AC:
    ctx->pc = 0x7F0943ACu;
    // 7F0943AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0943B0:
    ctx->pc = 0x7F0943B0u;
    // 7F0943B0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0943B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0943B4:
    ctx->pc = 0x7F0943B4u;
    // 7F0943B4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0943B4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0943B8:
    ctx->pc = 0x7F0943B8u;
    // 7F0943B8: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0943B8u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F0943BC:
    ctx->pc = 0x7F0943BCu;
    // 7F0943BC: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0943BCu)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F0943C0:
    ctx->pc = 0x7F0943C0u;
    // 7F0943C0: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0943C0u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F0943C4:
    ctx->pc = 0x7F0943C4u;
    // 7F0943C4: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0943C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0943C8:
    ctx->pc = 0x7F0943C8u;
    // 7F0943C8: lha     r0, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0943CC:
    ctx->pc = 0x7F0943CCu;
    // 7F0943CC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0943D0:
    ctx->pc = 0x7F0943D0u;
    // 7F0943D0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0943D4:
    ctx->pc = 0x7F0943D4u;
    // 7F0943D4: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0943D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0943D8:
    ctx->pc = 0x7F0943D8u;
    // 7F0943D8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0943D8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0943DC:
    ctx->pc = 0x7F0943DCu;
    // 7F0943DC: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0943DCu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F0943E0:
    ctx->pc = 0x7F0943E0u;
    // 7F0943E0: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0943E0u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F0943E4:
    ctx->pc = 0x7F0943E4u;
    // 7F0943E4: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0943E4u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F0943E8:
    ctx->pc = 0x7F0943E8u;
    // 7F0943E8: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0943E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0943EC:
    ctx->pc = 0x7F0943ECu;
    // 7F0943EC: lha     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0943F0:
    ctx->pc = 0x7F0943F0u;
    // 7F0943F0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0943F4:
    ctx->pc = 0x7F0943F4u;
    // 7F0943F4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0943F8:
    ctx->pc = 0x7F0943F8u;
    // 7F0943F8: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0943F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0943FC:
    ctx->pc = 0x7F0943FCu;
    // 7F0943FC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0943FCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F094400:
    ctx->pc = 0x7F094400u;
    // 7F094400: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094400u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F094404:
    ctx->pc = 0x7F094404u;
    // 7F094404: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094404u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F094408:
    ctx->pc = 0x7F094408u;
    // 7F094408: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F094408u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F09440C:
    ctx->pc = 0x7F09440Cu;
    // 7F09440C: stfs     f0, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09440Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094410:
    ctx->pc = 0x7F094410u;
    // 7F094410: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F094414:
    ctx->pc = 0x7F094414u;
    // 7F094414: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094418:
    ctx->pc = 0x7F094418u;
    ctx->downcount -= 28;
    // 7F094418: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09441C:
    ctx->pc = 0x7F09441Cu;
    // 7F09441C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094420:
    ctx->pc = 0x7F094420u;
    // 7F094420: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094424:
    ctx->pc = 0x7F094424u;
    // 7F094424: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094428:
    ctx->pc = 0x7F094428u;
    // 7F094428: addi    r6, r4, -6612
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-6612);

label_7F09442C:
    ctx->pc = 0x7F09442Cu;
    // 7F09442C: stmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094430:
    ctx->pc = 0x7F094430u;
    // 7F094430: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094434:
    ctx->pc = 0x7F094434u;
    // 7F094434: addi    r30, r29, 64
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(64);

label_7F094438:
    ctx->pc = 0x7F094438u;
    // 7F094438: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09443C:
    ctx->pc = 0x7F09443Cu;
    // 7F09443C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094440:
    ctx->pc = 0x7F094440u;
    // 7F094440: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094444:
    ctx->pc = 0x7F094444u;
    // 7F094444: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094448:
    ctx->pc = 0x7F094448u;
    // 7F094448: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F09444C:
    ctx->pc = 0x7F09444Cu;
    // 7F09444C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094450:
    ctx->pc = 0x7F094450u;
    // 7F094450: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094454:
    ctx->pc = 0x7F094454u;
    // 7F094454: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094458:
    ctx->pc = 0x7F094458u;
    // 7F094458: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09445C:
    ctx->pc = 0x7F09445Cu;
    // 7F09445C: bl      0x7F096B98
    {
            ctx->lr = 0x7F094460u;
            goto label_7F096B98;
    }

label_7F094460:
    ctx->pc = 0x7F094460u;
    ctx->downcount -= 18;
    // 7F094460: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F094464:
    ctx->pc = 0x7F094464u;
    // 7F094464: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F094468:
    ctx->pc = 0x7F094468u;
    // 7F094468: addi    r5, r3, 12808
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F09446C:
    ctx->pc = 0x7F09446Cu;
    // 7F09446C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F094470:
    ctx->pc = 0x7F094470u;
    // 7F094470: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094474:
    ctx->pc = 0x7F094474u;
    // 7F094474: addi    r31, r6, 28408
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(28408);

label_7F094478:
    ctx->pc = 0x7F094478u;
    // 7F094478: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09447C:
    ctx->pc = 0x7F09447Cu;
    // 7F09447C: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094480:
    ctx->pc = 0x7F094480u;
    // 7F094480: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F094480u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094484:
    ctx->pc = 0x7F094484u;
    // 7F094484: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094488:
    ctx->pc = 0x7F094488u;
    // 7F094488: lfs     f1, 2100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094488u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F09448C:
    ctx->pc = 0x7F09448Cu;
    // 7F09448C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09448Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F094490:
    ctx->pc = 0x7F094490u;
    // 7F094490: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F094490u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094494:
    ctx->pc = 0x7F094494u;
    // 7F094494: lfs     f1, 2108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094494u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094498:
    ctx->pc = 0x7F094498u;
    // 7F094498: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F094498u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F09449C:
    ctx->pc = 0x7F09449Cu;
    // 7F09449C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09449Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0944A0:
    ctx->pc = 0x7F0944A0u;
    // 7F0944A0: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0944A0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0944A4:
    ctx->pc = 0x7F0944A4u;
    // 7F0944A4: bl      0x7F0948DC
    {
            ctx->lr = 0x7F0944A8u;
            goto label_7F0948DC;
    }

label_7F0944A8:
    ctx->pc = 0x7F0944A8u;
    ctx->downcount -= 5;
    // 7F0944A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0944AC:
    ctx->pc = 0x7F0944ACu;
    // 7F0944AC: addi    r4, r29, 2156
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2156);

label_7F0944B0:
    ctx->pc = 0x7F0944B0u;
    // 7F0944B0: addi    r5, r29, 2132
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(2132);

label_7F0944B4:
    ctx->pc = 0x7F0944B4u;
    // 7F0944B4: addi    r6, r29, 2148
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(2148);

label_7F0944B8:
    ctx->pc = 0x7F0944B8u;
    // 7F0944B8: bl      0x7F0977F8
    {
            ctx->lr = 0x7F0944BCu;
            goto label_7F0977F8;
    }

label_7F0944BC:
    ctx->pc = 0x7F0944BCu;
    ctx->downcount -= 9;
    // 7F0944BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0944C0:
    ctx->pc = 0x7F0944C0u;
    // 7F0944C0: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0944C4:
    ctx->pc = 0x7F0944C4u;
    // 7F0944C4: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0944C8:
    ctx->pc = 0x7F0944C8u;
    // 7F0944C8: addi    r3, r29, 2508
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2508);

label_7F0944CC:
    ctx->pc = 0x7F0944CCu;
    // 7F0944CC: sth     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0944D0:
    ctx->pc = 0x7F0944D0u;
    // 7F0944D0: addi    r5, r29, 2156
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(2156);

label_7F0944D4:
    ctx->pc = 0x7F0944D4u;
    // 7F0944D4: addi    r6, r29, 2164
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(2164);

label_7F0944D8:
    ctx->pc = 0x7F0944D8u;
    // 7F0944D8: lwz     r4, 2660(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2660);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0944DC:
    ctx->pc = 0x7F0944DCu;
    // 7F0944DC: bl      0x7F09772C
    {
            ctx->lr = 0x7F0944E0u;
            goto label_7F09772C;
    }

label_7F0944E0:
    ctx->pc = 0x7F0944E0u;
    ctx->downcount -= 9;
    // 7F0944E0: lwz     r0, 2664(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0944E4:
    ctx->pc = 0x7F0944E4u;
    // 7F0944E4: addi    r3, r29, 2236
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2236);

label_7F0944E8:
    ctx->pc = 0x7F0944E8u;
    // 7F0944E8: addi    r4, r29, 2508
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2508);

label_7F0944EC:
    ctx->pc = 0x7F0944ECu;
    // 7F0944EC: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0944F0:
    ctx->pc = 0x7F0944F0u;
    // 7F0944F0: sth     r0, 2534(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2534);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0944F4:
    ctx->pc = 0x7F0944F4u;
    // 7F0944F4: lwz     r0, 2664(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0944F8:
    ctx->pc = 0x7F0944F8u;
    // 7F0944F8: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0944FC:
    ctx->pc = 0x7F0944FCu;
    // 7F0944FC: sth     r0, 2542(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2542);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094500:
    ctx->pc = 0x7F094500u;
    // 7F094500: bl      0x7F0942F8
    {
            ctx->lr = 0x7F094504u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0942F8u;
                return;
            }
            goto label_7F0942F8;
    }

label_7F094504:
    ctx->pc = 0x7F094504u;
    ctx->downcount -= 11;
    // 7F094504: lwz     r5, 2156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094508:
    ctx->pc = 0x7F094508u;
    // 7F094508: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F09450C:
    ctx->pc = 0x7F09450Cu;
    // 7F09450C: lwz     r4, 2160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094510:
    ctx->pc = 0x7F094510u;
    // 7F094510: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F094514:
    ctx->pc = 0x7F094514u;
    // 7F094514: lfs     f0, -6648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F094514u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094518:
    ctx->pc = 0x7F094518u;
    // 7F094518: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F09451C:
    ctx->pc = 0x7F09451Cu;
    // 7F09451C: stw     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F094520:
    ctx->pc = 0x7F094520u;
    // 7F094520: stw     r4, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094524:
    ctx->pc = 0x7F094524u;
    // 7F094524: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094528:
    ctx->pc = 0x7F094528u;
    // 7F094528: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F094528u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F09452C:
    ctx->pc = 0x7F09452Cu;
    // 7F09452C: bl      0x7F023170
    {
            ctx->lr = 0x7F094530u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F094530:
    ctx->pc = 0x7F094530u;
    ctx->downcount -= 2;
    // 7F094530: addi    r3, r29, 720
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(720);

label_7F094534:
    ctx->pc = 0x7F094534u;
    // 7F094534: bl      0x7F0427FC
    {
            ctx->lr = 0x7F094538u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F094538:
    ctx->pc = 0x7F094538u;
    ctx->downcount -= 7;
    // 7F094538: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F09453C:
    ctx->pc = 0x7F09453Cu;
    // 7F09453C: lwz     r6, 720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(720);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F094540:
    ctx->pc = 0x7F094540u;
    // 7F094540: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F094544:
    ctx->pc = 0x7F094544u;
    // 7F094544: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F094548:
    ctx->pc = 0x7F094548u;
    // 7F094548: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09454C:
    ctx->pc = 0x7F09454Cu;
    // 7F09454C: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F094550:
    ctx->pc = 0x7F094550u;
    // 7F094550: bl      0x7F014964
    {
            ctx->lr = 0x7F094554u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F094554:
    ctx->pc = 0x7F094554u;
    ctx->downcount -= 4;
    // 7F094554: lwz     r4, 720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094558:
    ctx->pc = 0x7F094558u;
    // 7F094558: lha     r3, 2156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2156);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09455C:
    ctx->pc = 0x7F09455Cu;
    // 7F09455C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F094560:
    ctx->pc = 0x7F094560u;
    // 7F094560: bl      0x7F091928
    {
            ctx->lr = 0x7F094564u;
            ctx->pc = 0x7F091928u;
            return;
    }

label_7F094564:
    ctx->pc = 0x7F094564u;
    ctx->downcount -= 4;
    // 7F094564: lwz     r3, 720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094568:
    ctx->pc = 0x7F094568u;
    // 7F094568: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09456C:
    ctx->pc = 0x7F09456Cu;
    // 7F09456C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F094570:
    ctx->pc = 0x7F094570u;
    // 7F094570: bl      0x7F09199C
    {
            ctx->lr = 0x7F094574u;
            ctx->pc = 0x7F09199Cu;
            return;
    }

label_7F094574:
    ctx->pc = 0x7F094574u;
    ctx->downcount -= 5;
    // 7F094574: lwz     r5, 720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(720);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094578:
    ctx->pc = 0x7F094578u;
    // 7F094578: addi    r3, r29, 2720
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2720);

label_7F09457C:
    ctx->pc = 0x7F09457Cu;
    // 7F09457C: addi    r4, r29, 2756
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2756);

label_7F094580:
    ctx->pc = 0x7F094580u;
    // 7F094580: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F094584:
    ctx->pc = 0x7F094584u;
    // 7F094584: bl      0x7F094D78
    {
            ctx->lr = 0x7F094588u;
            goto label_7F094D78;
    }

label_7F094588:
    ctx->pc = 0x7F094588u;
    ctx->downcount -= 9;
    // 7F094588: lha     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09458C:
    ctx->pc = 0x7F09458Cu;
    // 7F09458C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F094590:
    ctx->pc = 0x7F094590u;
    // 7F094590: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F094594:
    ctx->pc = 0x7F094594u;
    // 7F094594: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094598:
    ctx->pc = 0x7F094598u;
    // 7F094598: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F09459C:
    ctx->pc = 0x7F09459Cu;
    // 7F09459C: lha     r5, 34(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0945A0:
    ctx->pc = 0x7F0945A0u;
    // 7F0945A0: sth     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0945A4:
    ctx->pc = 0x7F0945A4u;
    // 7F0945A4: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0945A8:
    ctx->pc = 0x7F0945A8u;
    // 7F0945A8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0945ACu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0945AC:
    ctx->pc = 0x7F0945ACu;
    ctx->downcount -= 2;
    // 7F0945AC: addi    r3, r29, 764
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(764);

label_7F0945B0:
    ctx->pc = 0x7F0945B0u;
    // 7F0945B0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0945B4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0945B4:
    ctx->pc = 0x7F0945B4u;
    ctx->downcount -= 4;
    // 7F0945B4: lwz     r4, 764(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(764);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0945B8:
    ctx->pc = 0x7F0945B8u;
    // 7F0945B8: lha     r3, 2156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2156);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0945BC:
    ctx->pc = 0x7F0945BCu;
    // 7F0945BC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0945C0:
    ctx->pc = 0x7F0945C0u;
    // 7F0945C0: bl      0x7F091928
    {
            ctx->lr = 0x7F0945C4u;
            ctx->pc = 0x7F091928u;
            return;
    }

label_7F0945C4:
    ctx->pc = 0x7F0945C4u;
    ctx->downcount -= 4;
    // 7F0945C4: lwz     r3, 764(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0945C8:
    ctx->pc = 0x7F0945C8u;
    // 7F0945C8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0945CC:
    ctx->pc = 0x7F0945CCu;
    // 7F0945CC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0945D0:
    ctx->pc = 0x7F0945D0u;
    // 7F0945D0: bl      0x7F09199C
    {
            ctx->lr = 0x7F0945D4u;
            ctx->pc = 0x7F09199Cu;
            return;
    }

label_7F0945D4:
    ctx->pc = 0x7F0945D4u;
    ctx->downcount -= 2;
    // 7F0945D4: addi    r3, r29, 1840
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1840);

label_7F0945D8:
    ctx->pc = 0x7F0945D8u;
    // 7F0945D8: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0945DCu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0945DC:
    ctx->pc = 0x7F0945DCu;
    ctx->downcount -= 2;
    // 7F0945DC: addi    r3, r29, 1928
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1928);

label_7F0945E0:
    ctx->pc = 0x7F0945E0u;
    // 7F0945E0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0945E4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0945E4:
    ctx->pc = 0x7F0945E4u;
    ctx->downcount -= 7;
    // 7F0945E4: lwz     r0, 2636(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0945E8:
    ctx->pc = 0x7F0945E8u;
    // 7F0945E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0945EC:
    ctx->pc = 0x7F0945ECu;
    // 7F0945EC: stw     r0, 2660(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0945F0:
    ctx->pc = 0x7F0945F0u;
    // 7F0945F0: lwz     r12, 2676(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2676);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0945F4:
    ctx->pc = 0x7F0945F4u;
    // 7F0945F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F0945F8:
    ctx->pc = 0x7F0945F8u;
    // 7F0945F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F0945FCu;
            ctx->pc = target;
            return;
        }
    }

label_7F0945FC:
    ctx->pc = 0x7F0945FCu;
    ctx->downcount -= 5;
    // 7F0945FC: addi    r3, r29, 720
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(720);

label_7F094600:
    ctx->pc = 0x7F094600u;
    // 7F094600: addi    r4, r29, 1928
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1928);

label_7F094604:
    ctx->pc = 0x7F094604u;
    // 7F094604: addi    r5, r29, 2132
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(2132);

label_7F094608:
    ctx->pc = 0x7F094608u;
    // 7F094608: addi    r6, r29, 2148
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(2148);

label_7F09460C:
    ctx->pc = 0x7F09460Cu;
    // 7F09460C: bl      0x7F094178
    {
            ctx->lr = 0x7F094610u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094178u;
                return;
            }
            goto label_7F094178;
    }

label_7F094610:
    ctx->pc = 0x7F094610u;
    ctx->downcount -= 3;
    // 7F094610: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F094614:
    ctx->pc = 0x7F094614u;
    // 7F094614: addi    r4, r29, 2700
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2700);

label_7F094618:
    ctx->pc = 0x7F094618u;
    // 7F094618: bl      0x7F096A04
    {
            ctx->lr = 0x7F09461Cu;
            goto label_7F096A04;
    }

label_7F09461C:
    ctx->pc = 0x7F09461Cu;
    ctx->downcount -= 2;
    // 7F09461C: addi    r3, r29, 2716
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2716);

label_7F094620:
    ctx->pc = 0x7F094620u;
    // 7F094620: bl      0x7F093FF0
    {
            ctx->lr = 0x7F094624u;
            ctx->pc = 0x7F093FF0u;
            return;
    }

label_7F094624:
    ctx->pc = 0x7F094624u;
    ctx->downcount -= 48;
    // 7F094624: lfs     f0, 2100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094624u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094628:
    ctx->pc = 0x7F094628u;
    // 7F094628: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F09462C:
    ctx->pc = 0x7F09462Cu;
    // 7F09462C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094630:
    ctx->pc = 0x7F094630u;
    // 7F094630: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094634:
    ctx->pc = 0x7F094634u;
    // 7F094634: lfd     f3, -6656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F094634u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6656);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094638:
    ctx->pc = 0x7F094638u;
    // 7F094638: stfs     f0, 2116(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094638u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F09463C:
    ctx->pc = 0x7F09463Cu;
    // 7F09463C: lha     r0, 2132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2132);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094640:
    ctx->pc = 0x7F094640u;
    // 7F094640: lfs     f1, 2100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094640u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094644:
    ctx->pc = 0x7F094644u;
    // 7F094644: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F094648:
    ctx->pc = 0x7F094648u;
    // 7F094648: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F09464C:
    ctx->pc = 0x7F09464Cu;
    // 7F09464C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094650:
    ctx->pc = 0x7F094650u;
    // 7F094650: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094654:
    ctx->pc = 0x7F094654u;
    // 7F094654: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094658:
    ctx->pc = 0x7F094658u;
    // 7F094658: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094658u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F09465C:
    ctx->pc = 0x7F09465Cu;
    // 7F09465C: stw     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094660:
    ctx->pc = 0x7F094660u;
    // 7F094660: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094660u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F094664:
    ctx->pc = 0x7F094664u;
    // 7F094664: stfs     f0, 2100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094664u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094668:
    ctx->pc = 0x7F094668u;
    // 7F094668: lha     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09466C:
    ctx->pc = 0x7F09466Cu;
    // 7F09466C: lfs     f0, 2100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F09466Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094670:
    ctx->pc = 0x7F094670u;
    // 7F094670: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F094674:
    ctx->pc = 0x7F094674u;
    // 7F094674: lfs     f1, 2116(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094674u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094678:
    ctx->pc = 0x7F094678u;
    // 7F094678: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09467C:
    ctx->pc = 0x7F09467Cu;
    // 7F09467C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F09467Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F094680:
    ctx->pc = 0x7F094680u;
    // 7F094680: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094684:
    ctx->pc = 0x7F094684u;
    // 7F094684: stfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F094684u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F094688:
    ctx->pc = 0x7F094688u;
    // 7F094688: fsubs   f1, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094688u)) return;
    ppc_fsubs(ctx, 1, 2, 3);

label_7F09468C:
    ctx->pc = 0x7F09468Cu;
    // 7F09468C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09468Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F094690:
    ctx->pc = 0x7F094690u;
    // 7F094690: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094690u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094694:
    ctx->pc = 0x7F094694u;
    // 7F094694: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094698:
    ctx->pc = 0x7F094698u;
    // 7F094698: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09469C:
    ctx->pc = 0x7F09469Cu;
    // 7F09469C: sth     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0946A0:
    ctx->pc = 0x7F0946A0u;
    // 7F0946A0: lha     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0946A4:
    ctx->pc = 0x7F0946A4u;
    // 7F0946A4: lfs     f1, 2108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0946A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0946A8:
    ctx->pc = 0x7F0946A8u;
    // 7F0946A8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0946AC:
    ctx->pc = 0x7F0946ACu;
    // 7F0946AC: lfs     f2, 2124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0946ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0946B0:
    ctx->pc = 0x7F0946B0u;
    // 7F0946B0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0946B4:
    ctx->pc = 0x7F0946B4u;
    // 7F0946B4: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0946B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0946B8:
    ctx->pc = 0x7F0946B8u;
    // 7F0946B8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0946B8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F0946BC:
    ctx->pc = 0x7F0946BCu;
    // 7F0946BC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0946BCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0946C0:
    ctx->pc = 0x7F0946C0u;
    // 7F0946C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0946C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0946C4:
    ctx->pc = 0x7F0946C4u;
    // 7F0946C4: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0946C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0946C8:
    ctx->pc = 0x7F0946C8u;
    // 7F0946C8: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0946CC:
    ctx->pc = 0x7F0946CCu;
    // 7F0946CC: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0946D0:
    ctx->pc = 0x7F0946D0u;
    // 7F0946D0: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0946D4:
    ctx->pc = 0x7F0946D4u;
    // 7F0946D4: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0946D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0946D8:
    ctx->pc = 0x7F0946D8u;
    // 7F0946D8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0946D8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F0946DC:
    ctx->pc = 0x7F0946DCu;
    // 7F0946DC: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0946DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F0946E0:
    ctx->pc = 0x7F0946E0u;
    // 7F0946E0: bc    4, 0, 0x7F09475C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09475C;
        }
    }

label_7F0946E4:
    ctx->pc = 0x7F0946E4u;
    ctx->downcount -= 2;
    // 7F0946E4: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0946E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F0946E8:
    ctx->pc = 0x7F0946E8u;
    // 7F0946E8: bc    4, 1, 0x7F0946F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0946F0;
        }
    }

label_7F0946EC:
    ctx->pc = 0x7F0946ECu;
    ctx->downcount -= 1;
    // 7F0946EC: stfs     f1, 2124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0946ECu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0946F0:
    ctx->pc = 0x7F0946F0u;
    ctx->downcount -= 27;
    // 7F0946F0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0946F4:
    ctx->pc = 0x7F0946F4u;
    // 7F0946F4: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0946F8:
    ctx->pc = 0x7F0946F8u;
    // 7F0946F8: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0946FC:
    ctx->pc = 0x7F0946FCu;
    // 7F0946FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094700:
    ctx->pc = 0x7F094700u;
    // 7F094700: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F094704:
    ctx->pc = 0x7F094704u;
    // 7F094704: lfd     f3, -6656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F094704u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6656);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094708:
    ctx->pc = 0x7F094708u;
    // 7F094708: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09470C:
    ctx->pc = 0x7F09470Cu;
    // 7F09470C: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F094710:
    ctx->pc = 0x7F094710u;
    // 7F094710: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094710u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094714:
    ctx->pc = 0x7F094714u;
    // 7F094714: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094718:
    ctx->pc = 0x7F094718u;
    // 7F094718: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094718u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F09471C:
    ctx->pc = 0x7F09471Cu;
    // 7F09471C: stfs     f0, 2108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F09471Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094720:
    ctx->pc = 0x7F094720u;
    // 7F094720: lha     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094724:
    ctx->pc = 0x7F094724u;
    // 7F094724: lfs     f0, 2108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F094724u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094728:
    ctx->pc = 0x7F094728u;
    // 7F094728: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F09472C:
    ctx->pc = 0x7F09472Cu;
    // 7F09472C: lfs     f1, 2124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F09472Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094730:
    ctx->pc = 0x7F094730u;
    // 7F094730: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094734:
    ctx->pc = 0x7F094734u;
    // 7F094734: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F094734u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F094738:
    ctx->pc = 0x7F094738u;
    // 7F094738: lfd     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094738u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F09473C:
    ctx->pc = 0x7F09473Cu;
    // 7F09473C: stfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F09473Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F094740:
    ctx->pc = 0x7F094740u;
    // 7F094740: fsubs   f1, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094740u)) return;
    ppc_fsubs(ctx, 1, 2, 3);

label_7F094744:
    ctx->pc = 0x7F094744u;
    // 7F094744: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094744u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F094748:
    ctx->pc = 0x7F094748u;
    // 7F094748: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094748u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F09474C:
    ctx->pc = 0x7F09474Cu;
    // 7F09474C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09474Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094750:
    ctx->pc = 0x7F094750u;
    // 7F094750: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094754:
    ctx->pc = 0x7F094754u;
    // 7F094754: sth     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094758:
    ctx->pc = 0x7F094758u;
    // 7F094758: b       0x7F094770
    {
            goto label_7F094770;
    }

label_7F09475C:
    ctx->pc = 0x7F09475Cu;
    ctx->downcount -= 5;
    // 7F09475C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094760:
    ctx->pc = 0x7F094760u;
    // 7F094760: stw     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094764:
    ctx->pc = 0x7F094764u;
    // 7F094764: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094768:
    ctx->pc = 0x7F094768u;
    // 7F094768: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094768u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F09476C:
    ctx->pc = 0x7F09476Cu;
    // 7F09476C: stfs     f0, 2108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F09476Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F094770:
    ctx->pc = 0x7F094770u;
    ctx->downcount -= 3;
    // 7F094770: lwz     r3, 2652(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094774:
    ctx->pc = 0x7F094774u;
    // 7F094774: cmpwi   r3, 0
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

label_7F094778:
    ctx->pc = 0x7F094778u;
    // 7F094778: bc    12, 2, 0x7F0947A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0947A4;
        }
    }

label_7F09477C:
    ctx->pc = 0x7F09477Cu;
    ctx->downcount -= 10;
    // 7F09477C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F094780:
    ctx->pc = 0x7F094780u;
    // 7F094780: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F094784:
    ctx->pc = 0x7F094784u;
    // 7F094784: stw     r0, 2652(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094788:
    ctx->pc = 0x7F094788u;
    // 7F094788: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F09478C:
    ctx->pc = 0x7F09478Cu;
    // 7F09478C: lwz     r3, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094790:
    ctx->pc = 0x7F094790u;
    // 7F094790: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094794:
    ctx->pc = 0x7F094794u;
    // 7F094794: ori     r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | 0x0002u;

label_7F094798:
    ctx->pc = 0x7F094798u;
    // 7F094798: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F09479C:
    ctx->pc = 0x7F09479Cu;
    // 7F09479C: stw     r3, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0947A0:
    ctx->pc = 0x7F0947A0u;
    // 7F0947A0: stw     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0947A4:
    ctx->pc = 0x7F0947A4u;
    ctx->downcount -= 3;
    // 7F0947A4: lwz     r3, 2656(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0947A8:
    ctx->pc = 0x7F0947A8u;
    // 7F0947A8: cmpwi   r3, 0
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

label_7F0947AC:
    ctx->pc = 0x7F0947ACu;
    // 7F0947AC: bc    12, 2, 0x7F0947D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0947D8;
        }
    }

label_7F0947B0:
    ctx->pc = 0x7F0947B0u;
    ctx->downcount -= 3;
    // 7F0947B0: addic.  r0, r3, -1
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

label_7F0947B4:
    ctx->pc = 0x7F0947B4u;
    // 7F0947B4: stw     r0, 2656(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0947B8:
    ctx->pc = 0x7F0947B8u;
    // 7F0947B8: bc    4, 2, 0x7F0947D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0947D8;
        }
    }

label_7F0947BC:
    ctx->pc = 0x7F0947BCu;
    ctx->downcount -= 7;
    // 7F0947BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0947C0:
    ctx->pc = 0x7F0947C0u;
    // 7F0947C0: lis     r3, -2
    ctx->gpr[3] = ((u32)(s32)(-2) << 16);

label_7F0947C4:
    ctx->pc = 0x7F0947C4u;
    // 7F0947C4: addi    r5, r4, 28408
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0947C8:
    ctx->pc = 0x7F0947C8u;
    // 7F0947C8: lwz     r4, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0947CC:
    ctx->pc = 0x7F0947CCu;
    // 7F0947CC: addi    r0, r3, -513
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-513);

label_7F0947D0:
    ctx->pc = 0x7F0947D0u;
    // 7F0947D0: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0947D4:
    ctx->pc = 0x7F0947D4u;
    // 7F0947D4: stw     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0947D8:
    ctx->pc = 0x7F0947D8u;
    ctx->downcount -= 5;
    // 7F0947D8: lwz     r5, 720(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(720);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0947DC:
    ctx->pc = 0x7F0947DCu;
    // 7F0947DC: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F0947E0:
    ctx->pc = 0x7F0947E0u;
    // 7F0947E0: addi    r4, r29, 808
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(808);

label_7F0947E4:
    ctx->pc = 0x7F0947E4u;
    // 7F0947E4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0947E8:
    ctx->pc = 0x7F0947E8u;
    // 7F0947E8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0947ECu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0947EC:
    ctx->pc = 0x7F0947ECu;
    ctx->downcount -= 5;
    // 7F0947EC: lwz     r5, 764(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0947F0:
    ctx->pc = 0x7F0947F0u;
    // 7F0947F0: addi    r4, r29, 936
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(936);

label_7F0947F4:
    ctx->pc = 0x7F0947F4u;
    // 7F0947F4: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0947F8:
    ctx->pc = 0x7F0947F8u;
    // 7F0947F8: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0947FC:
    ctx->pc = 0x7F0947FCu;
    // 7F0947FC: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F094800u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F094800:
    ctx->pc = 0x7F094800u;
    ctx->downcount -= 5;
    // 7F094800: lwz     r5, 1840(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1840);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094804:
    ctx->pc = 0x7F094804u;
    // 7F094804: addi    r4, r29, 1064
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1064);

label_7F094808:
    ctx->pc = 0x7F094808u;
    // 7F094808: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F09480C:
    ctx->pc = 0x7F09480Cu;
    // 7F09480C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F094810:
    ctx->pc = 0x7F094810u;
    // 7F094810: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F094814u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F094814:
    ctx->pc = 0x7F094814u;
    ctx->downcount -= 5;
    // 7F094814: lwz     r5, 1884(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1884);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094818:
    ctx->pc = 0x7F094818u;
    // 7F094818: addi    r4, r29, 1192
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1192);

label_7F09481C:
    ctx->pc = 0x7F09481Cu;
    // 7F09481C: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F094820:
    ctx->pc = 0x7F094820u;
    // 7F094820: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F094824:
    ctx->pc = 0x7F094824u;
    // 7F094824: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F094828u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F094828:
    ctx->pc = 0x7F094828u;
    ctx->downcount -= 5;
    // 7F094828: lwz     r5, 1928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1928);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09482C:
    ctx->pc = 0x7F09482Cu;
    // 7F09482C: addi    r4, r29, 1320
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1320);

label_7F094830:
    ctx->pc = 0x7F094830u;
    // 7F094830: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F094834:
    ctx->pc = 0x7F094834u;
    // 7F094834: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F094838:
    ctx->pc = 0x7F094838u;
    // 7F094838: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F09483Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F09483C:
    ctx->pc = 0x7F09483Cu;
    ctx->downcount -= 4;
    // 7F09483C: lwz     r0, 2636(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094840:
    ctx->pc = 0x7F094840u;
    // 7F094840: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F094844:
    ctx->pc = 0x7F094844u;
    // 7F094844: stw     r0, 2704(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094848:
    ctx->pc = 0x7F094848u;
    // 7F094848: bl      0x7F09698C
    {
            ctx->lr = 0x7F09484Cu;
            goto label_7F09698C;
    }

label_7F09484C:
    ctx->pc = 0x7F09484Cu;
    ctx->downcount -= 16;
    // 7F09484C: lmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094850:
    ctx->pc = 0x7F094850u;
    // 7F094850: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094854:
    ctx->pc = 0x7F094854u;
    // 7F094854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094858:
    ctx->pc = 0x7F094858u;
    // 7F094858: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F09485C:
    ctx->pc = 0x7F09485Cu;
    // 7F09485C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094860:
    ctx->pc = 0x7F094860u;
    ctx->downcount -= 7;
    // 7F094860: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094864:
    ctx->pc = 0x7F094864u;
    // 7F094864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094868:
    ctx->pc = 0x7F094868u;
    // 7F094868: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09486C:
    ctx->pc = 0x7F09486Cu;
    // 7F09486C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F094870:
    ctx->pc = 0x7F094870u;
    // 7F094870: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094874:
    ctx->pc = 0x7F094874u;
    // 7F094874: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F094878:
    ctx->pc = 0x7F094878u;
    // 7F094878: bl      0x7F023E10
    {
            ctx->lr = 0x7F09487Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F09487C:
    ctx->pc = 0x7F09487Cu;
    ctx->downcount -= 2;
    // 7F09487C: addi    r3, r31, 720
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(720);

label_7F094880:
    ctx->pc = 0x7F094880u;
    // 7F094880: bl      0x7F042AAC
    {
            ctx->lr = 0x7F094884u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F094884:
    ctx->pc = 0x7F094884u;
    ctx->downcount -= 2;
    // 7F094884: addi    r3, r31, 764
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(764);

label_7F094888:
    ctx->pc = 0x7F094888u;
    // 7F094888: bl      0x7F042AAC
    {
            ctx->lr = 0x7F09488Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F09488C:
    ctx->pc = 0x7F09488Cu;
    ctx->downcount -= 2;
    // 7F09488C: addi    r3, r31, 1840
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1840);

label_7F094890:
    ctx->pc = 0x7F094890u;
    // 7F094890: bl      0x7F042AAC
    {
            ctx->lr = 0x7F094894u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F094894:
    ctx->pc = 0x7F094894u;
    ctx->downcount -= 2;
    // 7F094894: addi    r3, r31, 1884
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1884);

label_7F094898:
    ctx->pc = 0x7F094898u;
    // 7F094898: bl      0x7F042AAC
    {
            ctx->lr = 0x7F09489Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F09489C:
    ctx->pc = 0x7F09489Cu;
    ctx->downcount -= 2;
    // 7F09489C: addi    r3, r31, 1928
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1928);

label_7F0948A0:
    ctx->pc = 0x7F0948A0u;
    // 7F0948A0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0948A4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0948A4:
    ctx->pc = 0x7F0948A4u;
    ctx->downcount -= 2;
    // 7F0948A4: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0948A8:
    ctx->pc = 0x7F0948A8u;
    // 7F0948A8: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0948ACu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0948AC:
    ctx->pc = 0x7F0948ACu;
    ctx->downcount -= 2;
    // 7F0948AC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0948B0:
    ctx->pc = 0x7F0948B0u;
    // 7F0948B0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0948B4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0948B4:
    ctx->pc = 0x7F0948B4u;
    ctx->downcount -= 3;
    // 7F0948B4: addi    r3, r31, 2720
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2720);

label_7F0948B8:
    ctx->pc = 0x7F0948B8u;
    // 7F0948B8: addi    r4, r31, 2756
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2756);

label_7F0948BC:
    ctx->pc = 0x7F0948BCu;
    // 7F0948BC: bl      0x7F094E5C
    {
            ctx->lr = 0x7F0948C0u;
            goto label_7F094E5C;
    }

label_7F0948C0:
    ctx->pc = 0x7F0948C0u;
    ctx->downcount -= 2;
    // 7F0948C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0948C4:
    ctx->pc = 0x7F0948C4u;
    // 7F0948C4: bl      0x7F096910
    {
            ctx->lr = 0x7F0948C8u;
            goto label_7F096910;
    }

label_7F0948C8:
    ctx->pc = 0x7F0948C8u;
    ctx->downcount -= 6;
    // 7F0948C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0948CC:
    ctx->pc = 0x7F0948CCu;
    // 7F0948CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0948D0:
    ctx->pc = 0x7F0948D0u;
    // 7F0948D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0948D4:
    ctx->pc = 0x7F0948D4u;
    // 7F0948D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0948D8:
    ctx->pc = 0x7F0948D8u;
    // 7F0948D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0948DC:
    ctx->pc = 0x7F0948DCu;
    ctx->downcount -= 28;
    // 7F0948DC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0948E0:
    ctx->pc = 0x7F0948E0u;
    // 7F0948E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0948E4:
    ctx->pc = 0x7F0948E4u;
    // 7F0948E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0948E8:
    ctx->pc = 0x7F0948E8u;
    // 7F0948E8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0948EC:
    ctx->pc = 0x7F0948ECu;
    // 7F0948EC: addi    r6, r4, 28936
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(28936);

label_7F0948F0:
    ctx->pc = 0x7F0948F0u;
    // 7F0948F0: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0948F4:
    ctx->pc = 0x7F0948F4u;
    // 7F0948F4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0948F8:
    ctx->pc = 0x7F0948F8u;
    // 7F0948F8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0948FC:
    ctx->pc = 0x7F0948FCu;
    // 7F0948FC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094900:
    ctx->pc = 0x7F094900u;
    // 7F094900: neg  r3, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F094904:
    ctx->pc = 0x7F094904u;
    // 7F094904: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F094908:
    ctx->pc = 0x7F094908u;
    // 7F094908: andc   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] & ~ctx->gpr[4];
    }

label_7F09490C:
    ctx->pc = 0x7F09490Cu;
    // 7F09490C: srawi r3, r3, 31
    {
        u32 sh = 31u;
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

label_7F094910:
    ctx->pc = 0x7F094910u;
    // 7F094910: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F094914:
    ctx->pc = 0x7F094914u;
    // 7F094914: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094918:
    ctx->pc = 0x7F094918u;
    // 7F094918: lwz     r0, 2696(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2696);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09491C:
    ctx->pc = 0x7F09491Cu;
    // 7F09491C: cmpwi   r0, 0
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

label_7F094920:
    ctx->pc = 0x7F094920u;
    // 7F094920: bc    12, 2, 0x7F094B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094B5C;
        }
    }

label_7F094924:
    ctx->pc = 0x7F094924u;
    ctx->downcount -= 2;
    // 7F094924: cmpwi   r3, 0
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

label_7F094928:
    ctx->pc = 0x7F094928u;
    // 7F094928: bc    4, 2, 0x7F094B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094B5C;
        }
    }

label_7F09492C:
    ctx->pc = 0x7F09492Cu;
    ctx->downcount -= 17;
    // 7F09492C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F094930:
    ctx->pc = 0x7F094930u;
    // 7F094930: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F094934:
    ctx->pc = 0x7F094934u;
    // 7F094934: addi    r5, r3, 28940
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(28940);

label_7F094938:
    ctx->pc = 0x7F094938u;
    // 7F094938: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F09493C:
    ctx->pc = 0x7F09493Cu;
    // 7F09493C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094940:
    ctx->pc = 0x7F094940u;
    // 7F094940: addi    r4, r4, 25884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25884);

label_7F094944:
    ctx->pc = 0x7F094944u;
    // 7F094944: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094948:
    ctx->pc = 0x7F094948u;
    // 7F094948: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F09494C:
    ctx->pc = 0x7F09494Cu;
    // 7F09494C: stw     r0, 2696(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094950:
    ctx->pc = 0x7F094950u;
    // 7F094950: lwz     r5, 2676(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2676);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094954:
    ctx->pc = 0x7F094954u;
    // 7F094954: lwzu     r0, 22844(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22844);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F094958:
    ctx->pc = 0x7F094958u;
    // 7F094958: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F09495C:
    ctx->pc = 0x7F09495Cu;
    // 7F09495C: addic   r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F094960:
    ctx->pc = 0x7F094960u;
    // 7F094960: subfe   r4, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F094964:
    ctx->pc = 0x7F094964u;
    // 7F094964: andc.   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F094968:
    ctx->pc = 0x7F094968u;
    // 7F094968: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09496C:
    ctx->pc = 0x7F09496Cu;
    // 7F09496C: bc    12, 2, 0x7F094A38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094A38;
        }
    }

label_7F094970:
    ctx->pc = 0x7F094970u;
    ctx->downcount -= 50;
    // 7F094970: lwz     r3, 2680(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2680);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094974:
    ctx->pc = 0x7F094974u;
    // 7F094974: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F094978:
    ctx->pc = 0x7F094978u;
    // 7F094978: lwz     r7, 2684(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2684);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F09497C:
    ctx->pc = 0x7F09497Cu;
    // 7F09497C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F094980:
    ctx->pc = 0x7F094980u;
    // 7F094980: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094984:
    ctx->pc = 0x7F094984u;
    // 7F094984: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F094988:
    ctx->pc = 0x7F094988u;
    // 7F094988: lwz     r6, 2688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2688);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09498C:
    ctx->pc = 0x7F09498Cu;
    // 7F09498C: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F094990:
    ctx->pc = 0x7F094990u;
    // 7F094990: lfs     f0, 64(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F094990u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094994:
    ctx->pc = 0x7F094994u;
    // 7F094994: lfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F094998:
    ctx->pc = 0x7F094998u;
    // 7F094998: lwz     r5, 2692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2692);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09499C:
    ctx->pc = 0x7F09499Cu;
    // 7F09499C: fadds   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F09499Cu)) return;
    ppc_fadds(ctx, 1, 0, 3);

label_7F0949A0:
    ctx->pc = 0x7F0949A0u;
    // 7F0949A0: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0949A4:
    ctx->pc = 0x7F0949A4u;
    // 7F0949A4: lfd     f2, -6656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0949A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6656);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0949A8:
    ctx->pc = 0x7F0949A8u;
    // 7F0949A8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0949AC:
    ctx->pc = 0x7F0949ACu;
    // 7F0949AC: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0949ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0949B0:
    ctx->pc = 0x7F0949B0u;
    // 7F0949B0: stfs     f1, 64(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0949B4:
    ctx->pc = 0x7F0949B4u;
    // 7F0949B4: lfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0949B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0949B8:
    ctx->pc = 0x7F0949B8u;
    // 7F0949B8: lfs     f1, 2100(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0949BC:
    ctx->pc = 0x7F0949BCu;
    // 7F0949BC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0949C0:
    ctx->pc = 0x7F0949C0u;
    // 7F0949C0: fadds   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0949C0u)) return;
    ppc_fadds(ctx, 1, 1, 3);

label_7F0949C4:
    ctx->pc = 0x7F0949C4u;
    // 7F0949C4: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0949C8:
    ctx->pc = 0x7F0949C8u;
    // 7F0949C8: stfs     f1, 2100(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0949CC:
    ctx->pc = 0x7F0949CCu;
    // 7F0949CC: lfs     f1, 2104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0949D0:
    ctx->pc = 0x7F0949D0u;
    // 7F0949D0: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0949D4:
    ctx->pc = 0x7F0949D4u;
    // 7F0949D4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0949D4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0949D8:
    ctx->pc = 0x7F0949D8u;
    // 7F0949D8: stfs     f0, 2104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0949DC:
    ctx->pc = 0x7F0949DCu;
    // 7F0949DC: lfs     f0, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949DCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0949E0:
    ctx->pc = 0x7F0949E0u;
    // 7F0949E0: fadds   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0949E0u)) return;
    ppc_fadds(ctx, 0, 0, 4);

label_7F0949E4:
    ctx->pc = 0x7F0949E4u;
    // 7F0949E4: stfs     f0, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0949E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0949E8:
    ctx->pc = 0x7F0949E8u;
    // 7F0949E8: lha     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0949EC:
    ctx->pc = 0x7F0949ECu;
    // 7F0949EC: lha     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0949F0:
    ctx->pc = 0x7F0949F0u;
    // 7F0949F0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0949F4:
    ctx->pc = 0x7F0949F4u;
    // 7F0949F4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0949F8:
    ctx->pc = 0x7F0949F8u;
    // 7F0949F8: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0949FC:
    ctx->pc = 0x7F0949FCu;
    // 7F0949FC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094A00:
    ctx->pc = 0x7F094A00u;
    // 7F094A00: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094A00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094A04:
    ctx->pc = 0x7F094A04u;
    // 7F094A04: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094A04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094A08:
    ctx->pc = 0x7F094A08u;
    // 7F094A08: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F094A08u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F094A0C:
    ctx->pc = 0x7F094A0Cu;
    // 7F094A0C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F094A0Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F094A10:
    ctx->pc = 0x7F094A10u;
    // 7F094A10: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F094A10u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F094A14:
    ctx->pc = 0x7F094A14u;
    // 7F094A14: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F094A14u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F094A18:
    ctx->pc = 0x7F094A18u;
    // 7F094A18: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F094A18u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F094A1C:
    ctx->pc = 0x7F094A1Cu;
    // 7F094A1C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094A1Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094A20:
    ctx->pc = 0x7F094A20u;
    // 7F094A20: stfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F094A24:
    ctx->pc = 0x7F094A24u;
    // 7F094A24: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094A28:
    ctx->pc = 0x7F094A28u;
    // 7F094A28: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094A2C:
    ctx->pc = 0x7F094A2Cu;
    // 7F094A2C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094A30:
    ctx->pc = 0x7F094A30u;
    // 7F094A30: sth     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F094A34:
    ctx->pc = 0x7F094A34u;
    // 7F094A34: sth     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094A38:
    ctx->pc = 0x7F094A38u;
    ctx->downcount -= 18;
    // 7F094A38: lwz     r5, 2700(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2700);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094A3C:
    ctx->pc = 0x7F094A3Cu;
    // 7F094A3C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F094A40:
    ctx->pc = 0x7F094A40u;
    // 7F094A40: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F094A44:
    ctx->pc = 0x7F094A44u;
    // 7F094A44: addi    r0, r5, 10
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(10);

label_7F094A48:
    ctx->pc = 0x7F094A48u;
    // 7F094A48: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F094A4C:
    ctx->pc = 0x7F094A4Cu;
    // 7F094A4C: stw     r0, 2700(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2700);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094A50:
    ctx->pc = 0x7F094A50u;
    // 7F094A50: addi    r0, r3, 25884
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25884);

label_7F094A54:
    ctx->pc = 0x7F094A54u;
    // 7F094A54: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094A58:
    ctx->pc = 0x7F094A58u;
    // 7F094A58: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094A5C:
    ctx->pc = 0x7F094A5Cu;
    // 7F094A5C: stw     r4, 2680(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2680);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094A60:
    ctx->pc = 0x7F094A60u;
    // 7F094A60: stw     r3, 2684(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2684);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094A64:
    ctx->pc = 0x7F094A64u;
    // 7F094A64: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094A68:
    ctx->pc = 0x7F094A68u;
    // 7F094A68: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094A6C:
    ctx->pc = 0x7F094A6Cu;
    // 7F094A6C: stw     r4, 2688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2688);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094A70:
    ctx->pc = 0x7F094A70u;
    // 7F094A70: stw     r3, 2692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094A74:
    ctx->pc = 0x7F094A74u;
    // 7F094A74: lwz     r3, 2676(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094A78:
    ctx->pc = 0x7F094A78u;
    // 7F094A78: cmplw   r3, r0
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

label_7F094A7C:
    ctx->pc = 0x7F094A7Cu;
    // 7F094A7C: bc    12, 2, 0x7F094AC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094AC4;
        }
    }

label_7F094A80:
    ctx->pc = 0x7F094A80u;
    ctx->downcount -= 95;
    // 7F094A80: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F094A84:
    ctx->pc = 0x7F094A84u;
    // 7F094A84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094A88:
    ctx->pc = 0x7F094A88u;
    // 7F094A88: addi    r4, r4, 22848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22848);

label_7F094A8C:
    ctx->pc = 0x7F094A8Cu;
    // 7F094A8C: lwz     r5, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094A90:
    ctx->pc = 0x7F094A90u;
    // 7F094A90: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094A94:
    ctx->pc = 0x7F094A94u;
    // 7F094A94: addi    r3, r3, 22852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22852);

label_7F094A98:
    ctx->pc = 0x7F094A98u;
    // 7F094A98: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F094A9C:
    ctx->pc = 0x7F094A9Cu;
    // 7F094A9C: divw   r4, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F094AA0:
    ctx->pc = 0x7F094AA0u;
    // 7F094AA0: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F094AA4:
    ctx->pc = 0x7F094AA4u;
    // 7F094AA4: stw     r4, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F094AA8:
    ctx->pc = 0x7F094AA8u;
    // 7F094AA8: lwz     r4, 2640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094AAC:
    ctx->pc = 0x7F094AACu;
    // 7F094AAC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094AB0:
    ctx->pc = 0x7F094AB0u;
    // 7F094AB0: divw   r3, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F094AB4:
    ctx->pc = 0x7F094AB4u;
    // 7F094AB4: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F094AB8:
    ctx->pc = 0x7F094AB8u;
    // 7F094AB8: stw     r3, 2640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094ABC:
    ctx->pc = 0x7F094ABCu;
    // 7F094ABC: stw     r0, 2652(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094AC0:
    ctx->pc = 0x7F094AC0u;
    // 7F094AC0: b       0x7F094B58
    {
            goto label_7F094B58;
    }

label_7F094AC4:
    ctx->pc = 0x7F094AC4u;
    ctx->downcount -= 49;
    // 7F094AC4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F094AC8:
    ctx->pc = 0x7F094AC8u;
    // 7F094AC8: lwz     r5, 2640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2640);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094ACC:
    ctx->pc = 0x7F094ACCu;
    // 7F094ACC: lwz     r0, 22856(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094AD0:
    ctx->pc = 0x7F094AD0u;
    // 7F094AD0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094AD4:
    ctx->pc = 0x7F094AD4u;
    // 7F094AD4: divw   r0, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F094AD8:
    ctx->pc = 0x7F094AD8u;
    // 7F094AD8: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F094ADC:
    ctx->pc = 0x7F094ADCu;
    // 7F094ADC: stw     r0, 2640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094AE0:
    ctx->pc = 0x7F094AE0u;
    // 7F094AE0: lwz     r0, 22844(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094AE4:
    ctx->pc = 0x7F094AE4u;
    // 7F094AE4: cmpwi   r0, 0
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

label_7F094AE8:
    ctx->pc = 0x7F094AE8u;
    // 7F094AE8: bc    12, 2, 0x7F094B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094B2C;
        }
    }

label_7F094AEC:
    ctx->pc = 0x7F094AECu;
    ctx->downcount -= 4;
    // 7F094AEC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094AF0:
    ctx->pc = 0x7F094AF0u;
    // 7F094AF0: lwz     r0, 22860(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094AF4:
    ctx->pc = 0x7F094AF4u;
    // 7F094AF4: cmpwi   r0, -1
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

label_7F094AF8:
    ctx->pc = 0x7F094AF8u;
    // 7F094AF8: bc    4, 2, 0x7F094B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094B20;
        }
    }

label_7F094AFC:
    ctx->pc = 0x7F094AFCu;
    ctx->downcount -= 6;
    // 7F094AFC: lha     r3, 2630(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2630);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094B00:
    ctx->pc = 0x7F094B00u;
    // 7F094B00: addi    r3, r3, -20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20);

label_7F094B04:
    ctx->pc = 0x7F094B04u;
    // 7F094B04: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F094B08:
    ctx->pc = 0x7F094B08u;
    // 7F094B08: sth     r3, 2630(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F094B0C:
    ctx->pc = 0x7F094B0Cu;
    // 7F094B0C: cmpwi   r0, -950
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-950);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094B10:
    ctx->pc = 0x7F094B10u;
    // 7F094B10: bc    4, 0, 0x7F094B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094B2C;
        }
    }

label_7F094B14:
    ctx->pc = 0x7F094B14u;
    ctx->downcount -= 3;
    // 7F094B14: li      r0, -950
    ctx->gpr[0] = (u32)(s32)(-950);

label_7F094B18:
    ctx->pc = 0x7F094B18u;
    // 7F094B18: sth     r0, 2630(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094B1C:
    ctx->pc = 0x7F094B1Cu;
    // 7F094B1C: b       0x7F094B2C
    {
            goto label_7F094B2C;
    }

label_7F094B20:
    ctx->pc = 0x7F094B20u;
    ctx->downcount -= 2;
    // 7F094B20: cmpwi   r0, 0
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

label_7F094B24:
    ctx->pc = 0x7F094B24u;
    // 7F094B24: bc    12, 2, 0x7F094B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094B2C;
        }
    }

label_7F094B28:
    ctx->pc = 0x7F094B28u;
    ctx->downcount -= 1;
    // 7F094B28: sth     r0, 2630(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094B2C:
    ctx->pc = 0x7F094B2Cu;
    ctx->downcount -= 3;
    // 7F094B2C: lwz     r0, 2656(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094B30:
    ctx->pc = 0x7F094B30u;
    // 7F094B30: cmpwi   r0, 0
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

label_7F094B34:
    ctx->pc = 0x7F094B34u;
    // 7F094B34: bc    4, 2, 0x7F094B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094B50;
        }
    }

label_7F094B38:
    ctx->pc = 0x7F094B38u;
    ctx->downcount -= 6;
    // 7F094B38: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F094B3C:
    ctx->pc = 0x7F094B3Cu;
    // 7F094B3C: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F094B40:
    ctx->pc = 0x7F094B40u;
    // 7F094B40: lwz     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094B44:
    ctx->pc = 0x7F094B44u;
    // 7F094B44: oris    r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | (0x0002u << 16);

label_7F094B48:
    ctx->pc = 0x7F094B48u;
    // 7F094B48: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F094B4C:
    ctx->pc = 0x7F094B4Cu;
    // 7F094B4C: stw     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094B50:
    ctx->pc = 0x7F094B50u;
    ctx->downcount -= 2;
    // 7F094B50: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F094B54:
    ctx->pc = 0x7F094B54u;
    // 7F094B54: stw     r0, 2656(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094B58:
    ctx->pc = 0x7F094B58u;
    ctx->downcount -= 1;
    // 7F094B58: ori     r31, r31, 0x0002
    ctx->gpr[31] = ctx->gpr[31] | 0x0002u;

label_7F094B5C:
    ctx->pc = 0x7F094B5Cu;
    ctx->downcount -= 7;
    // 7F094B5C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F094B60:
    ctx->pc = 0x7F094B60u;
    // 7F094B60: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F094B64:
    ctx->pc = 0x7F094B64u;
    // 7F094B64: addi    r6, r4, 28408
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F094B68:
    ctx->pc = 0x7F094B68u;
    // 7F094B68: addi    r4, r30, 2100
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2100);

label_7F094B6C:
    ctx->pc = 0x7F094B6Cu;
    // 7F094B6C: addi    r5, r30, 2636
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(2636);

label_7F094B70:
    ctx->pc = 0x7F094B70u;
    // 7F094B70: addi    r6, r6, 32
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32);

label_7F094B74:
    ctx->pc = 0x7F094B74u;
    // 7F094B74: bl      0x7F0976E4
    {
            ctx->lr = 0x7F094B78u;
            goto label_7F0976E4;
    }

label_7F094B78:
    ctx->pc = 0x7F094B78u;
    ctx->downcount -= 3;
    // 7F094B78: or   r31, r31, r3
    {
        ctx->gpr[31] = ctx->gpr[31] | ctx->gpr[3];
    }

label_7F094B7C:
    ctx->pc = 0x7F094B7Cu;
    // 7F094B7C: cmpwi   r31, 2
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

label_7F094B80:
    ctx->pc = 0x7F094B80u;
    // 7F094B80: bc    4, 2, 0x7F094BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094BC0;
        }
    }

label_7F094B84:
    ctx->pc = 0x7F094B84u;
    ctx->downcount -= 15;
    // 7F094B84: lha     r4, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F094B88:
    ctx->pc = 0x7F094B88u;
    // 7F094B88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F094B8C:
    ctx->pc = 0x7F094B8Cu;
    // 7F094B8C: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094B90:
    ctx->pc = 0x7F094B90u;
    // 7F094B90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F094B94:
    ctx->pc = 0x7F094B94u;
    // 7F094B94: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F094B98:
    ctx->pc = 0x7F094B98u;
    // 7F094B98: lfd     f2, -6656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F094B98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6656);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094B9C:
    ctx->pc = 0x7F094B9Cu;
    // 7F094B9C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094BA0:
    ctx->pc = 0x7F094BA0u;
    // 7F094BA0: lfs     f0, 2680(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F094BA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094BA4:
    ctx->pc = 0x7F094BA4u;
    // 7F094BA4: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F094BA8:
    ctx->pc = 0x7F094BA8u;
    // 7F094BA8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F094BA8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F094BAC:
    ctx->pc = 0x7F094BACu;
    // 7F094BAC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094BACu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F094BB0:
    ctx->pc = 0x7F094BB0u;
    // 7F094BB0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094BB0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094BB4:
    ctx->pc = 0x7F094BB4u;
    // 7F094BB4: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094BB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094BB8:
    ctx->pc = 0x7F094BB8u;
    // 7F094BB8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094BBC:
    ctx->pc = 0x7F094BBCu;
    // 7F094BBC: sth     r0, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F094BC0:
    ctx->pc = 0x7F094BC0u;
    ctx->downcount -= 16;
    // 7F094BC0: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094BC4:
    ctx->pc = 0x7F094BC4u;
    // 7F094BC4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094BC8:
    ctx->pc = 0x7F094BC8u;
    // 7F094BC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094BCC:
    ctx->pc = 0x7F094BCCu;
    // 7F094BCC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F094BD0:
    ctx->pc = 0x7F094BD0u;
    // 7F094BD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094BD4:
    ctx->pc = 0x7F094BD4u;
    ctx->downcount -= 10;
    // 7F094BD4: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094BD8:
    ctx->pc = 0x7F094BD8u;
    // 7F094BD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F094BDC:
    ctx->pc = 0x7F094BDCu;
    // 7F094BDC: lwz     r8, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F094BE0:
    ctx->pc = 0x7F094BE0u;
    // 7F094BE0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F094BE4:
    ctx->pc = 0x7F094BE4u;
    // 7F094BE4: and   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[7];
    }

label_7F094BE8:
    ctx->pc = 0x7F094BE8u;
    // 7F094BE8: and   r6, r8, r6
    {
        ctx->gpr[6] = ctx->gpr[8] & ctx->gpr[6];
    }

label_7F094BEC:
    ctx->pc = 0x7F094BECu;
    // 7F094BEC: xor   r6, r6, r7
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[7];
    }

label_7F094BF0:
    ctx->pc = 0x7F094BF0u;
    // 7F094BF0: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F094BF4:
    ctx->pc = 0x7F094BF4u;
    // 7F094BF4: or.   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F094BF8:
    ctx->pc = 0x7F094BF8u;
    // 7F094BF8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094BFC:
    ctx->pc = 0x7F094BFCu;
    ctx->downcount -= 5;
    // 7F094BFC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F094C00:
    ctx->pc = 0x7F094C00u;
    // 7F094C00: lwz     r7, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F094C04:
    ctx->pc = 0x7F094C04u;
    // 7F094C04: lwz     r0, 22868(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22868);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C08:
    ctx->pc = 0x7F094C08u;
    // 7F094C08: cmplw   r7, r0
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094C0C:
    ctx->pc = 0x7F094C0Cu;
    // 7F094C0C: bc    4, 2, 0x7F094C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F094C14;
        }
    }

label_7F094C10:
    ctx->pc = 0x7F094C10u;
    ctx->downcount -= 1;
    // 7F094C10: nop
    // nop

label_7F094C14:
    ctx->pc = 0x7F094C14u;
    ctx->downcount -= 5;
    // 7F094C14: lis     r6, 32521
    ctx->gpr[6] = ((u32)(s32)(32521) << 16);

label_7F094C18:
    ctx->pc = 0x7F094C18u;
    // 7F094C18: lwz     r7, 2676(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2676);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F094C1C:
    ctx->pc = 0x7F094C1Cu;
    // 7F094C1C: addi    r0, r6, 25884
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(25884);

label_7F094C20:
    ctx->pc = 0x7F094C20u;
    // 7F094C20: cmplw   r7, r0
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094C24:
    ctx->pc = 0x7F094C24u;
    // 7F094C24: bc    12, 2, 0x7F094C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094C38;
        }
    }

label_7F094C28:
    ctx->pc = 0x7F094C28u;
    ctx->downcount -= 4;
    // 7F094C28: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094C2C:
    ctx->pc = 0x7F094C2Cu;
    // 7F094C2C: addis   r0, r3, -61
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-61) << 16);

label_7F094C30:
    ctx->pc = 0x7F094C30u;
    // 7F094C30: cmplwi  r0, 0x11EC
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x11ECu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094C34:
    ctx->pc = 0x7F094C34u;
    // 7F094C34: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094C38:
    ctx->pc = 0x7F094C38u;
    ctx->downcount -= 6;
    // 7F094C38: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094C3C:
    ctx->pc = 0x7F094C3Cu;
    // 7F094C3C: lwz     r0, 22864(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C40:
    ctx->pc = 0x7F094C40u;
    // 7F094C40: stw     r0, 2696(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094C44:
    ctx->pc = 0x7F094C44u;
    // 7F094C44: lwz     r0, 2696(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2696);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C48:
    ctx->pc = 0x7F094C48u;
    // 7F094C48: cmpwi   r0, 0
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

label_7F094C4C:
    ctx->pc = 0x7F094C4Cu;
    // 7F094C4C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094C50:
    ctx->pc = 0x7F094C50u;
    ctx->downcount -= 21;
    // 7F094C50: lwz     r7, 172(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(172);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F094C54:
    ctx->pc = 0x7F094C54u;
    // 7F094C54: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F094C58:
    ctx->pc = 0x7F094C58u;
    // 7F094C58: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F094C5C:
    ctx->pc = 0x7F094C5Cu;
    // 7F094C5C: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094C60:
    ctx->pc = 0x7F094C60u;
    // 7F094C60: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C64:
    ctx->pc = 0x7F094C64u;
    // 7F094C64: stw     r3, 2680(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2680);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094C68:
    ctx->pc = 0x7F094C68u;
    // 7F094C68: stw     r0, 2684(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094C6C:
    ctx->pc = 0x7F094C6Cu;
    // 7F094C6C: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094C70:
    ctx->pc = 0x7F094C70u;
    // 7F094C70: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C74:
    ctx->pc = 0x7F094C74u;
    // 7F094C74: stw     r3, 2688(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2688);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094C78:
    ctx->pc = 0x7F094C78u;
    // 7F094C78: stw     r0, 2692(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094C7C:
    ctx->pc = 0x7F094C7Cu;
    // 7F094C7C: lwz     r4, 172(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F094C80:
    ctx->pc = 0x7F094C80u;
    // 7F094C80: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094C84:
    ctx->pc = 0x7F094C84u;
    // 7F094C84: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C88:
    ctx->pc = 0x7F094C88u;
    // 7F094C88: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094C8C:
    ctx->pc = 0x7F094C8Cu;
    // 7F094C8C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094C90:
    ctx->pc = 0x7F094C90u;
    // 7F094C90: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094C94:
    ctx->pc = 0x7F094C94u;
    // 7F094C94: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094C98:
    ctx->pc = 0x7F094C98u;
    // 7F094C98: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094C9C:
    ctx->pc = 0x7F094C9Cu;
    // 7F094C9C: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094CA0:
    ctx->pc = 0x7F094CA0u;
    // 7F094CA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094CA4:
    ctx->pc = 0x7F094CA4u;
    ctx->downcount -= 28;
    // 7F094CA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094CA8:
    ctx->pc = 0x7F094CA8u;
    // 7F094CA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094CAC:
    ctx->pc = 0x7F094CACu;
    // 7F094CAC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F094CB0:
    ctx->pc = 0x7F094CB0u;
    // 7F094CB0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F094CB4:
    ctx->pc = 0x7F094CB4u;
    // 7F094CB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094CB8:
    ctx->pc = 0x7F094CB8u;
    // 7F094CB8: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F094CBC:
    ctx->pc = 0x7F094CBCu;
    // 7F094CBC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F094CC0:
    ctx->pc = 0x7F094CC0u;
    // 7F094CC0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094CC4:
    ctx->pc = 0x7F094CC4u;
    // 7F094CC4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094CC8:
    ctx->pc = 0x7F094CC8u;
    // 7F094CC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094CCC:
    ctx->pc = 0x7F094CCCu;
    // 7F094CCC: addi    r7, r4, 22872
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(22872);

label_7F094CD0:
    ctx->pc = 0x7F094CD0u;
    // 7F094CD0: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F094CD4:
    ctx->pc = 0x7F094CD4u;
    // 7F094CD4: addi    r31, r30, 464
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(464);

label_7F094CD8:
    ctx->pc = 0x7F094CD8u;
    // 7F094CD8: addi    r8, r3, 22888
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(22888);

label_7F094CDC:
    ctx->pc = 0x7F094CDCu;
    // 7F094CDC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F094CE0:
    ctx->pc = 0x7F094CE0u;
    // 7F094CE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094CE4:
    ctx->pc = 0x7F094CE4u;
    // 7F094CE4: addi    r4, r4, 16388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16388);

label_7F094CE8:
    ctx->pc = 0x7F094CE8u;
    // 7F094CE8: bl      0x7F014788
    {
            ctx->lr = 0x7F094CECu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F094CEC:
    ctx->pc = 0x7F094CECu;
    ctx->downcount -= 5;
    // 7F094CEC: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F094CF0:
    ctx->pc = 0x7F094CF0u;
    // 7F094CF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094CF4:
    ctx->pc = 0x7F094CF4u;
    // 7F094CF4: addi    r4, r4, 19412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19412);

label_7F094CF8:
    ctx->pc = 0x7F094CF8u;
    // 7F094CF8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F094CFC:
    ctx->pc = 0x7F094CFCu;
    // 7F094CFC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F094D00u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F094D00:
    ctx->pc = 0x7F094D00u;
    ctx->downcount -= 9;
    // 7F094D00: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F094D04:
    ctx->pc = 0x7F094D04u;
    // 7F094D04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094D08:
    ctx->pc = 0x7F094D08u;
    // 7F094D08: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F094D0C:
    ctx->pc = 0x7F094D0Cu;
    // 7F094D0C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F094D10:
    ctx->pc = 0x7F094D10u;
    // 7F094D10: addi    r4, r30, 656
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(656);

label_7F094D14:
    ctx->pc = 0x7F094D14u;
    // 7F094D14: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_7F094D18:
    ctx->pc = 0x7F094D18u;
    // 7F094D18: li      r7, 100
    ctx->gpr[7] = (u32)(s32)(100);

label_7F094D1C:
    ctx->pc = 0x7F094D1Cu;
    // 7F094D1C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F094D20:
    ctx->pc = 0x7F094D20u;
    // 7F094D20: bl      0x7F014B78
    {
            ctx->lr = 0x7F094D24u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F094D24:
    ctx->pc = 0x7F094D24u;
    ctx->downcount -= 6;
    // 7F094D24: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094D28:
    ctx->pc = 0x7F094D28u;
    // 7F094D28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094D2C:
    ctx->pc = 0x7F094D2Cu;
    // 7F094D2C: addi    r5, r4, -6648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6648);

label_7F094D30:
    ctx->pc = 0x7F094D30u;
    // 7F094D30: addi    r4, r30, 688
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(688);

label_7F094D34:
    ctx->pc = 0x7F094D34u;
    // 7F094D34: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F094D34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F094D38:
    ctx->pc = 0x7F094D38u;
    // 7F094D38: bl      0x7F014BE4
    {
            ctx->lr = 0x7F094D3Cu;
            ctx->pc = 0x7F014BE4u;
            return;
    }

label_7F094D3C:
    ctx->pc = 0x7F094D3Cu;
    ctx->downcount -= 4;
    // 7F094D3C: lis     r4, 248
    ctx->gpr[4] = ((u32)(s32)(248) << 16);

label_7F094D40:
    ctx->pc = 0x7F094D40u;
    // 7F094D40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094D44:
    ctx->pc = 0x7F094D44u;
    // 7F094D44: addi    r4, r4, -15186
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15186);

label_7F094D48:
    ctx->pc = 0x7F094D48u;
    // 7F094D48: bl      0x7F01488C
    {
            ctx->lr = 0x7F094D4Cu;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F094D4C:
    ctx->pc = 0x7F094D4Cu;
    ctx->downcount -= 4;
    // 7F094D4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094D50:
    ctx->pc = 0x7F094D50u;
    // 7F094D50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F094D54:
    ctx->pc = 0x7F094D54u;
    // 7F094D54: lis     r5, 2
    ctx->gpr[5] = ((u32)(s32)(2) << 16);

label_7F094D58:
    ctx->pc = 0x7F094D58u;
    // 7F094D58: bl      0x7F014B60
    {
            ctx->lr = 0x7F094D5Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F094D5C:
    ctx->pc = 0x7F094D5Cu;
    ctx->downcount -= 2;
    // 7F094D5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094D60:
    ctx->pc = 0x7F094D60u;
    // 7F094D60: bl      0x7F0148A0
    {
            ctx->lr = 0x7F094D64u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F094D64:
    ctx->pc = 0x7F094D64u;
    ctx->downcount -= 16;
    // 7F094D64: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094D68:
    ctx->pc = 0x7F094D68u;
    // 7F094D68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094D6C:
    ctx->pc = 0x7F094D6Cu;
    // 7F094D6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094D70:
    ctx->pc = 0x7F094D70u;
    // 7F094D70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F094D74:
    ctx->pc = 0x7F094D74u;
    // 7F094D74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094D78:
    ctx->pc = 0x7F094D78u;
    ctx->downcount -= 36;
    // 7F094D78: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094D7C:
    ctx->pc = 0x7F094D7Cu;
    // 7F094D7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094D80:
    ctx->pc = 0x7F094D80u;
    // 7F094D80: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094D84:
    ctx->pc = 0x7F094D84u;
    // 7F094D84: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094D88:
    ctx->pc = 0x7F094D88u;
    // 7F094D88: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F094D8C:
    ctx->pc = 0x7F094D8Cu;
    // 7F094D8C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F094D90:
    ctx->pc = 0x7F094D90u;
    // 7F094D90: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094D94:
    ctx->pc = 0x7F094D94u;
    // 7F094D94: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F094D98:
    ctx->pc = 0x7F094D98u;
    // 7F094D98: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F094D9C:
    ctx->pc = 0x7F094D9Cu;
    // 7F094D9C: addi    r30, r5, 12816
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(12816);

label_7F094DA0:
    ctx->pc = 0x7F094DA0u;
    // 7F094DA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F094DA4:
    ctx->pc = 0x7F094DA4u;
    // 7F094DA4: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F094DA4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094DA8:
    ctx->pc = 0x7F094DA8u;
    // 7F094DA8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094DA8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094DAC:
    ctx->pc = 0x7F094DACu;
    // 7F094DAC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094DACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094DB0:
    ctx->pc = 0x7F094DB0u;
    // 7F094DB0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094DB4:
    ctx->pc = 0x7F094DB4u;
    // 7F094DB4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094DB8:
    ctx->pc = 0x7F094DB8u;
    // 7F094DB8: lfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F094DB8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094DBC:
    ctx->pc = 0x7F094DBCu;
    // 7F094DBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094DBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094DC0:
    ctx->pc = 0x7F094DC0u;
    // 7F094DC0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094DC4:
    ctx->pc = 0x7F094DC4u;
    // 7F094DC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094DC8:
    ctx->pc = 0x7F094DC8u;
    // 7F094DC8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094DCC:
    ctx->pc = 0x7F094DCCu;
    // 7F094DCC: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F094DCCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F094DD0:
    ctx->pc = 0x7F094DD0u;
    // 7F094DD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F094DD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F094DD4:
    ctx->pc = 0x7F094DD4u;
    // 7F094DD4: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F094DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F094DD8:
    ctx->pc = 0x7F094DD8u;
    // 7F094DD8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094DDC:
    ctx->pc = 0x7F094DDCu;
    // 7F094DDC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094DE0:
    ctx->pc = 0x7F094DE0u;
    ctx->downcount -= 4;
    // 7F094DE0: lwzx    r3, r26, r31
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094DE4:
    // 7F094DE4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F094DE8:
    // 7F094DE8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F094DEC:
    // 7F094DEC: bl      0x7F10BF44
    {
            ctx->lr = 0x7F094DF0u;
            ctx->pc = 0x7F10BF44u;
            return;
    }

label_7F094DF0:
    ctx->pc = 0x7F094DF0u;
    ctx->downcount -= 3;
    // 7F094DF0: lwzx    r3, r26, r31
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094DF4:
    // 7F094DF4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094DF8:
    // 7F094DF8: bl      0x7F10C154
    {
            ctx->lr = 0x7F094DFCu;
            ctx->pc = 0x7F10C154u;
            return;
    }

label_7F094DFC:
    ctx->downcount -= 4;
    // 7F094DFC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F094E00:
    // 7F094E00: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F094E04:
    // 7F094E04: cmpwi   r29, 9
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094E08:
    // 7F094E08: bc    12, 0, 0x7F094DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094DE0u;
                return;
            }
            goto label_7F094DE0;
        }
    }

label_7F094E0C:
    ctx->pc = 0x7F094E0Cu;
    ctx->downcount -= 4;
    // 7F094E0C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F094E10:
    ctx->pc = 0x7F094E10u;
    // 7F094E10: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F094E14:
    ctx->pc = 0x7F094E14u;
    // 7F094E14: addi    r30, r3, 12816
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(12816);

label_7F094E18:
    ctx->pc = 0x7F094E18u;
    // 7F094E18: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F094E1C:
    ctx->pc = 0x7F094E1Cu;
    ctx->downcount -= 4;
    // 7F094E1C: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094E20:
    // 7F094E20: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F094E24:
    // 7F094E24: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F094E28:
    // 7F094E28: bl      0x7F10CF70
    {
            ctx->lr = 0x7F094E2Cu;
            ctx->pc = 0x7F10CF70u;
            return;
    }

label_7F094E2C:
    ctx->pc = 0x7F094E2Cu;
    ctx->downcount -= 3;
    // 7F094E2C: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094E30:
    // 7F094E30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094E34:
    // 7F094E34: bl      0x7F10D198
    {
            ctx->lr = 0x7F094E38u;
            ctx->pc = 0x7F10D198u;
            return;
    }

label_7F094E38:
    ctx->downcount -= 4;
    // 7F094E38: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F094E3C:
    // 7F094E3C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F094E40:
    // 7F094E40: cmpwi   r29, 4
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

label_7F094E44:
    // 7F094E44: bc    12, 0, 0x7F094E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094E1Cu;
                return;
            }
            goto label_7F094E1C;
        }
    }

label_7F094E48:
    ctx->pc = 0x7F094E48u;
    ctx->downcount -= 16;
    // 7F094E48: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094E4C:
    ctx->pc = 0x7F094E4Cu;
    // 7F094E4C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094E50:
    ctx->pc = 0x7F094E50u;
    // 7F094E50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094E54:
    ctx->pc = 0x7F094E54u;
    // 7F094E54: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F094E58:
    ctx->pc = 0x7F094E58u;
    // 7F094E58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094E5C:
    ctx->pc = 0x7F094E5Cu;
    ctx->downcount -= 18;
    // 7F094E5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094E60:
    ctx->pc = 0x7F094E60u;
    // 7F094E60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094E64:
    ctx->pc = 0x7F094E64u;
    // 7F094E64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094E68:
    ctx->pc = 0x7F094E68u;
    // 7F094E68: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094E6C:
    ctx->pc = 0x7F094E6Cu;
    // 7F094E6C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094E70:
    ctx->pc = 0x7F094E70u;
    // 7F094E70: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F094E74:
    ctx->pc = 0x7F094E74u;
    // 7F094E74: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F094E78:
    ctx->pc = 0x7F094E78u;
    // 7F094E78: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F094E7C:
    ctx->pc = 0x7F094E7Cu;
    ctx->downcount -= 3;
    // 7F094E7C: lwzx    r3, r28, r31
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094E80:
    // 7F094E80: cmplwi  r3, 0x0000
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

label_7F094E84:
    // 7F094E84: bc    12, 2, 0x7F094E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094E8C;
        }
    }

label_7F094E88:
    ctx->downcount -= 1;
    // 7F094E88: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F094E8Cu;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F094E8C:
    ctx->downcount -= 4;
    // 7F094E8C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F094E90:
    // 7F094E90: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F094E94:
    // 7F094E94: cmpwi   r30, 9
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

label_7F094E98:
    // 7F094E98: bc    12, 0, 0x7F094E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094E7Cu;
                return;
            }
            goto label_7F094E7C;
        }
    }

label_7F094E9C:
    ctx->pc = 0x7F094E9Cu;
    ctx->downcount -= 2;
    // 7F094E9C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F094EA0:
    ctx->pc = 0x7F094EA0u;
    // 7F094EA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F094EA4:
    ctx->pc = 0x7F094EA4u;
    ctx->downcount -= 3;
    // 7F094EA4: lwzx    r3, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F094EA8:
    // 7F094EA8: cmplwi  r3, 0x0000
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

label_7F094EAC:
    // 7F094EAC: bc    12, 2, 0x7F094EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F094EB4;
        }
    }

label_7F094EB0:
    ctx->downcount -= 1;
    // 7F094EB0: bl      0x7F10D51C
    {
            ctx->lr = 0x7F094EB4u;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F094EB4:
    ctx->downcount -= 4;
    // 7F094EB4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F094EB8:
    // 7F094EB8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F094EBC:
    // 7F094EBC: cmpwi   r30, 4
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

label_7F094EC0:
    // 7F094EC0: bc    12, 0, 0x7F094EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094EA4u;
                return;
            }
            goto label_7F094EA4;
        }
    }

label_7F094EC4:
    ctx->pc = 0x7F094EC4u;
    ctx->downcount -= 16;
    // 7F094EC4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094EC8:
    ctx->pc = 0x7F094EC8u;
    // 7F094EC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094ECC:
    ctx->pc = 0x7F094ECCu;
    // 7F094ECC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094ED0:
    ctx->pc = 0x7F094ED0u;
    // 7F094ED0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F094ED4:
    ctx->pc = 0x7F094ED4u;
    // 7F094ED4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094ED8:
    ctx->pc = 0x7F094ED8u;
    ctx->downcount -= 19;
    // 7F094ED8: stwu     r1, -336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-336);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094EDC:
    ctx->pc = 0x7F094EDCu;
    // 7F094EDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094EE0:
    ctx->pc = 0x7F094EE0u;
    // 7F094EE0: stw     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094EE4:
    ctx->pc = 0x7F094EE4u;
    // 7F094EE4: stmw     r24, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094EE8:
    ctx->pc = 0x7F094EE8u;
    // 7F094EE8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094EEC:
    ctx->pc = 0x7F094EECu;
    // 7F094EEC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F094EF0:
    ctx->pc = 0x7F094EF0u;
    // 7F094EF0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F094EF4:
    ctx->pc = 0x7F094EF4u;
    // 7F094EF4: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F094EF8:
    ctx->pc = 0x7F094EF8u;
    // 7F094EF8: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F094EFCu;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F094EFC:
    ctx->pc = 0x7F094EFCu;
    ctx->downcount -= 8;
    // 7F094EFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F094F00:
    ctx->pc = 0x7F094F00u;
    // 7F094F00: li      r0, 36
    ctx->gpr[0] = (u32)(s32)(36);

label_7F094F04:
    ctx->pc = 0x7F094F04u;
    // 7F094F04: addi    r4, r4, -6596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6596);

label_7F094F08:
    ctx->pc = 0x7F094F08u;
    // 7F094F08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094F0C:
    ctx->pc = 0x7F094F0Cu;
    // 7F094F0C: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F094F10:
    ctx->pc = 0x7F094F10u;
    // 7F094F10: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F094F14:
    ctx->pc = 0x7F094F14u;
    // 7F094F14: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F094F18:
    loop_7F094F18(ctx);
    if (ctx->pc == 0x7F094F2Cu) goto label_7F094F2C;
    return;
label_7F094F1C:
    ctx->pc = 0x7F094F1Cu;
    // 7F094F1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F094F20:
    ctx->pc = 0x7F094F20u;
    // 7F094F20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094F24:
    ctx->pc = 0x7F094F24u;
    // 7F094F24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F094F28:
    // 7F094F28: bc    16, 0, 0x7F094F18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094F18u;
                return;
            }
            goto label_7F094F18;
        }
    }

label_7F094F2C:
    ctx->pc = 0x7F094F2Cu;
    ctx->downcount -= 5;
    // 7F094F2C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F094F30:
    ctx->pc = 0x7F094F30u;
    // 7F094F30: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F094F34:
    ctx->pc = 0x7F094F34u;
    // 7F094F34: addi    r25, r3, 22904
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(22904);

label_7F094F38:
    ctx->pc = 0x7F094F38u;
    // 7F094F38: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F094F3C:
    ctx->pc = 0x7F094F3Cu;
    // 7F094F3C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F094F40:
    ctx->downcount -= 8;
    // 7F094F40: add   r4, r25, r27
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F094F44:
    // 7F094F44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094F48:
    ctx->pc = 0x7F094F48u;
    // 7F094F48: lwz     r9, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F094F4C:
    // 7F094F4C: addi    r5, r4, 16
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16);

label_7F094F50:
    // 7F094F50: addi    r6, r4, 32
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(32);

label_7F094F54:
    // 7F094F54: addi    r7, r4, 48
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(48);

label_7F094F58:
    // 7F094F58: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F094F5C:
    // 7F094F5C: bl      0x7F10D22C
    {
            ctx->lr = 0x7F094F60u;
            ctx->pc = 0x7F10D22Cu;
            return;
    }

label_7F094F60:
    ctx->downcount -= 6;
    // 7F094F60: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F094F64:
    ctx->pc = 0x7F094F64u;
    // 7F094F64: stwx    r3, r29, r26
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[26];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094F68:
    // 7F094F68: cmpwi   r24, 4
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

label_7F094F6C:
    // 7F094F6C: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F094F70:
    // 7F094F70: addi    r27, r27, 64
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(64);

label_7F094F74:
    // 7F094F74: bc    12, 0, 0x7F094F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094F40u;
                return;
            }
            goto label_7F094F40;
        }
    }

label_7F094F78:
    ctx->pc = 0x7F094F78u;
    ctx->downcount -= 3;
    // 7F094F78: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F094F7C:
    ctx->pc = 0x7F094F7Cu;
    // 7F094F7C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F094F80:
    ctx->pc = 0x7F094F80u;
    // 7F094F80: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F094F84:
    ctx->downcount -= 8;
    // 7F094F84: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F094F88:
    // 7F094F88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F094F8C:
    // 7F094F8C: add   r4, r4, r26
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F094F90:
    ctx->pc = 0x7F094F90u;
    // 7F094F90: lwz     r6, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F094F94:
    // 7F094F94: addi    r5, r4, 16
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16);

label_7F094F98:
    ctx->pc = 0x7F094F98u;
    // 7F094F98: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094F9C:
    ctx->pc = 0x7F094F9Cu;
    // 7F094F9C: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094FA0:
    // 7F094FA0: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F094FA4u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F094FA4:
    ctx->downcount -= 6;
    // 7F094FA4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F094FA8:
    ctx->pc = 0x7F094FA8u;
    // 7F094FA8: stwx    r3, r28, r27
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[27];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F094FAC:
    // 7F094FAC: cmpwi   r25, 9
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F094FB0:
    // 7F094FB0: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F094FB4:
    // 7F094FB4: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F094FB8:
    // 7F094FB8: bc    12, 0, 0x7F094F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094F84u;
                return;
            }
            goto label_7F094F84;
        }
    }

label_7F094FBC:
    ctx->pc = 0x7F094FBCu;
    ctx->downcount -= 4;
    // 7F094FBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F094FC0:
    ctx->pc = 0x7F094FC0u;
    // 7F094FC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F094FC4:
    ctx->pc = 0x7F094FC4u;
    // 7F094FC4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F094FC8:
    ctx->pc = 0x7F094FC8u;
    // 7F094FC8: bl      0x7F094D78
    {
            ctx->lr = 0x7F094FCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094D78u;
                return;
            }
            goto label_7F094D78;
    }

label_7F094FCC:
    ctx->pc = 0x7F094FCCu;
    ctx->downcount -= 16;
    // 7F094FCC: lmw     r24, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F094FD0:
    ctx->pc = 0x7F094FD0u;
    // 7F094FD0: lwz     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F094FD4:
    ctx->pc = 0x7F094FD4u;
    // 7F094FD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F094FD8:
    ctx->pc = 0x7F094FD8u;
    // 7F094FD8: addi    r1, r1, 336
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(336);

label_7F094FDC:
    ctx->pc = 0x7F094FDCu;
    // 7F094FDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F094FE0:
    ctx->pc = 0x7F094FE0u;
    ctx->downcount -= 20;
    // 7F094FE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F094FE4:
    ctx->pc = 0x7F094FE4u;
    // 7F094FE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F094FE8:
    ctx->pc = 0x7F094FE8u;
    // 7F094FE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F094FEC:
    ctx->pc = 0x7F094FECu;
    // 7F094FEC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F094FF0:
    ctx->pc = 0x7F094FF0u;
    // 7F094FF0: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F094FF4:
    ctx->pc = 0x7F094FF4u;
    // 7F094FF4: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F094FF8:
    ctx->pc = 0x7F094FF8u;
    // 7F094FF8: addi    r29, r27, 64
    ctx->gpr[29] = ctx->gpr[27] + (u32)(s32)(64);

label_7F094FFC:
    ctx->pc = 0x7F094FFCu;
    // 7F094FFC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F095000:
    ctx->pc = 0x7F095000u;
    // 7F095000: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F095004:
    ctx->pc = 0x7F095004u;
    // 7F095004: bl      0x7F022FB4
    {
            ctx->lr = 0x7F095008u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F095008:
    ctx->pc = 0x7F095008u;
    ctx->downcount -= 2;
    // 7F095008: cmpwi   r3, 0
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

label_7F09500C:
    ctx->pc = 0x7F09500Cu;
    // 7F09500C: bc    4, 0, 0x7F095018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095018;
        }
    }

label_7F095010:
    ctx->pc = 0x7F095010u;
    ctx->downcount -= 2;
    // 7F095010: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F095014:
    ctx->pc = 0x7F095014u;
    // 7F095014: b       0x7F0953CC
    {
            goto label_7F0953CC;
    }

label_7F095018:
    ctx->pc = 0x7F095018u;
    ctx->downcount -= 5;
    // 7F095018: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F09501C:
    ctx->pc = 0x7F09501Cu;
    // 7F09501C: li      r4, 237
    ctx->gpr[4] = (u32)(s32)(237);

label_7F095020:
    ctx->pc = 0x7F095020u;
    // 7F095020: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F095024:
    ctx->pc = 0x7F095024u;
    // 7F095024: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F095028:
    ctx->pc = 0x7F095028u;
    // 7F095028: bl      0x7F023F7C
    {
            ctx->lr = 0x7F09502Cu;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F09502C:
    ctx->pc = 0x7F09502Cu;
    ctx->downcount -= 41;
    // 7F09502C: lhz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F095030:
    ctx->pc = 0x7F095030u;
    // 7F095030: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F095034:
    ctx->pc = 0x7F095034u;
    // 7F095034: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F095038:
    ctx->pc = 0x7F095038u;
    // 7F095038: lis     r4, 132
    ctx->gpr[4] = ((u32)(s32)(132) << 16);

label_7F09503C:
    ctx->pc = 0x7F09503Cu;
    // 7F09503C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F095040:
    ctx->pc = 0x7F095040u;
    // 7F095040: addi    r9, r5, 12832
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F095044:
    ctx->pc = 0x7F095044u;
    // 7F095044: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095048:
    ctx->pc = 0x7F095048u;
    // 7F095048: addi    r6, r3, 12808
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F09504C:
    ctx->pc = 0x7F09504Cu;
    // 7F09504C: addi    r31, r27, 720
    ctx->gpr[31] = ctx->gpr[27] + (u32)(s32)(720);

label_7F095050:
    ctx->pc = 0x7F095050u;
    // 7F095050: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F095054:
    ctx->pc = 0x7F095054u;
    // 7F095054: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095058:
    ctx->pc = 0x7F095058u;
    // 7F095058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09505C:
    ctx->pc = 0x7F09505Cu;
    // 7F09505C: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095060:
    ctx->pc = 0x7F095060u;
    // 7F095060: addi    r30, r27, 764
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(764);

label_7F095064:
    ctx->pc = 0x7F095064u;
    // 7F095064: addi    r4, r4, 19740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19740);

label_7F095068:
    ctx->pc = 0x7F095068u;
    // 7F095068: stw     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F09506C:
    ctx->pc = 0x7F09506Cu;
    // 7F09506C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F095070:
    ctx->pc = 0x7F095070u;
    // 7F095070: stw     r7, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095074:
    ctx->pc = 0x7F095074u;
    // 7F095074: lwz     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F095078:
    ctx->pc = 0x7F095078u;
    // 7F095078: lwz     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F09507C:
    ctx->pc = 0x7F09507Cu;
    // 7F09507C: stw     r8, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F095080:
    ctx->pc = 0x7F095080u;
    // 7F095080: stw     r7, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095084:
    ctx->pc = 0x7F095084u;
    // 7F095084: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095088:
    ctx->pc = 0x7F095088u;
    // 7F095088: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09508C:
    ctx->pc = 0x7F09508Cu;
    // 7F09508C: stw     r7, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095090:
    ctx->pc = 0x7F095090u;
    // 7F095090: stw     r6, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095094:
    ctx->pc = 0x7F095094u;
    // 7F095094: lwz     r7, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095098:
    ctx->pc = 0x7F095098u;
    // 7F095098: lwz     r6, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09509C:
    ctx->pc = 0x7F09509Cu;
    // 7F09509C: stw     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0950A0:
    ctx->pc = 0x7F0950A0u;
    // 7F0950A0: stw     r6, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0950A4:
    ctx->pc = 0x7F0950A4u;
    // 7F0950A4: lwz     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0950A8:
    ctx->pc = 0x7F0950A8u;
    // 7F0950A8: lwz     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0950AC:
    ctx->pc = 0x7F0950ACu;
    // 7F0950AC: stw     r7, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0950B0:
    ctx->pc = 0x7F0950B0u;
    // 7F0950B0: stw     r6, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0950B4:
    ctx->pc = 0x7F0950B4u;
    // 7F0950B4: lwz     r7, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0950B8:
    ctx->pc = 0x7F0950B8u;
    // 7F0950B8: lwz     r6, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0950BC:
    ctx->pc = 0x7F0950BCu;
    // 7F0950BC: stw     r7, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0950C0:
    ctx->pc = 0x7F0950C0u;
    // 7F0950C0: stw     r6, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0950C4:
    ctx->pc = 0x7F0950C4u;
    // 7F0950C4: sth     r0, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0950C8:
    ctx->pc = 0x7F0950C8u;
    // 7F0950C8: sth     r0, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0950CC:
    ctx->pc = 0x7F0950CCu;
    // 7F0950CC: bl      0x7F04272C
    {
            ctx->lr = 0x7F0950D0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0950D0:
    ctx->pc = 0x7F0950D0u;
    ctx->downcount -= 3;
    // 7F0950D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0950D4:
    ctx->pc = 0x7F0950D4u;
    // 7F0950D4: addi    r4, r27, 2172
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2172);

label_7F0950D8:
    ctx->pc = 0x7F0950D8u;
    // 7F0950D8: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0950DCu;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0950DC:
    ctx->pc = 0x7F0950DCu;
    ctx->downcount -= 3;
    // 7F0950DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0950E0:
    ctx->pc = 0x7F0950E0u;
    // 7F0950E0: addi    r4, r27, 808
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(808);

label_7F0950E4:
    ctx->pc = 0x7F0950E4u;
    // 7F0950E4: bl      0x7F042B20
    {
            ctx->lr = 0x7F0950E8u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0950E8:
    ctx->pc = 0x7F0950E8u;
    ctx->downcount -= 5;
    // 7F0950E8: lis     r4, 132
    ctx->gpr[4] = ((u32)(s32)(132) << 16);

label_7F0950EC:
    ctx->pc = 0x7F0950ECu;
    // 7F0950EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0950F0:
    ctx->pc = 0x7F0950F0u;
    // 7F0950F0: addi    r4, r4, 19758
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19758);

label_7F0950F4:
    ctx->pc = 0x7F0950F4u;
    // 7F0950F4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0950F8:
    ctx->pc = 0x7F0950F8u;
    // 7F0950F8: bl      0x7F04272C
    {
            ctx->lr = 0x7F0950FCu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0950FC:
    ctx->pc = 0x7F0950FCu;
    ctx->downcount -= 3;
    // 7F0950FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F095100:
    ctx->pc = 0x7F095100u;
    // 7F095100: addi    r4, r27, 2236
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2236);

label_7F095104:
    ctx->pc = 0x7F095104u;
    // 7F095104: bl      0x7F042C1C
    {
            ctx->lr = 0x7F095108u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F095108:
    ctx->pc = 0x7F095108u;
    ctx->downcount -= 3;
    // 7F095108: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F09510C:
    ctx->pc = 0x7F09510Cu;
    // 7F09510C: addi    r4, r27, 936
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(936);

label_7F095110:
    ctx->pc = 0x7F095110u;
    // 7F095110: bl      0x7F042B20
    {
            ctx->lr = 0x7F095114u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F095114:
    ctx->pc = 0x7F095114u;
    ctx->downcount -= 6;
    // 7F095114: addi    r30, r27, 1840
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(1840);

label_7F095118:
    ctx->pc = 0x7F095118u;
    // 7F095118: lis     r4, 152
    ctx->gpr[4] = ((u32)(s32)(152) << 16);

label_7F09511C:
    ctx->pc = 0x7F09511Cu;
    // 7F09511C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F095120:
    ctx->pc = 0x7F095120u;
    // 7F095120: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F095124:
    ctx->pc = 0x7F095124u;
    // 7F095124: addi    r4, r4, -6254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6254);

label_7F095128:
    ctx->pc = 0x7F095128u;
    // 7F095128: bl      0x7F04272C
    {
            ctx->lr = 0x7F09512Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F09512C:
    ctx->pc = 0x7F09512Cu;
    ctx->downcount -= 3;
    // 7F09512C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F095130:
    ctx->pc = 0x7F095130u;
    // 7F095130: addi    r4, r27, 2172
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2172);

label_7F095134:
    ctx->pc = 0x7F095134u;
    // 7F095134: bl      0x7F042C1C
    {
            ctx->lr = 0x7F095138u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F095138:
    ctx->pc = 0x7F095138u;
    ctx->downcount -= 3;
    // 7F095138: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F09513C:
    ctx->pc = 0x7F09513Cu;
    // 7F09513C: addi    r4, r27, 1064
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(1064);

label_7F095140:
    ctx->pc = 0x7F095140u;
    // 7F095140: bl      0x7F042B20
    {
            ctx->lr = 0x7F095144u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F095144:
    ctx->pc = 0x7F095144u;
    ctx->downcount -= 8;
    // 7F095144: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F095148:
    ctx->pc = 0x7F095148u;
    // 7F095148: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09514C:
    ctx->pc = 0x7F09514Cu;
    // 7F09514C: addi    r5, r4, -6308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6308);

label_7F095150:
    ctx->pc = 0x7F095150u;
    // 7F095150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F095154:
    ctx->pc = 0x7F095154u;
    // 7F095154: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F095154u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095158:
    ctx->pc = 0x7F095158u;
    // 7F095158: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F09515C:
    ctx->pc = 0x7F09515Cu;
    // 7F09515C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F095160:
    ctx->pc = 0x7F095160u;
    // 7F095160: bl      0x7F0B1144
    {
            ctx->lr = 0x7F095164u;
            ctx->pc = 0x7F0B1144u;
            return;
    }

label_7F095164:
    ctx->pc = 0x7F095164u;
    ctx->downcount -= 10;
    // 7F095164: lwz     r3, 720(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095168:
    ctx->pc = 0x7F095168u;
    // 7F095168: addi    r26, r27, 1884
    ctx->gpr[26] = ctx->gpr[27] + (u32)(s32)(1884);

label_7F09516C:
    ctx->pc = 0x7F09516Cu;
    // 7F09516C: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095170:
    ctx->pc = 0x7F095170u;
    // 7F095170: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F095174:
    ctx->pc = 0x7F095174u;
    // 7F095174: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F095178:
    ctx->pc = 0x7F095178u;
    // 7F095178: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F09517C:
    ctx->pc = 0x7F09517Cu;
    // 7F09517C: stw     r0, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095180:
    ctx->pc = 0x7F095180u;
    // 7F095180: addi    r4, r4, -28803
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28803);

label_7F095184:
    ctx->pc = 0x7F095184u;
    // 7F095184: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F095188:
    ctx->pc = 0x7F095188u;
    // 7F095188: bl      0x7F04272C
    {
            ctx->lr = 0x7F09518Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F09518C:
    ctx->pc = 0x7F09518Cu;
    ctx->downcount -= 3;
    // 7F09518C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F095190:
    ctx->pc = 0x7F095190u;
    // 7F095190: addi    r4, r27, 2172
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2172);

label_7F095194:
    ctx->pc = 0x7F095194u;
    // 7F095194: bl      0x7F042C1C
    {
            ctx->lr = 0x7F095198u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F095198:
    ctx->pc = 0x7F095198u;
    ctx->downcount -= 3;
    // 7F095198: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F09519C:
    ctx->pc = 0x7F09519Cu;
    // 7F09519C: addi    r4, r27, 1192
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(1192);

label_7F0951A0:
    ctx->pc = 0x7F0951A0u;
    // 7F0951A0: bl      0x7F042B20
    {
            ctx->lr = 0x7F0951A4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0951A4:
    ctx->pc = 0x7F0951A4u;
    ctx->downcount -= 8;
    // 7F0951A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0951A8:
    ctx->pc = 0x7F0951A8u;
    // 7F0951A8: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0951AC:
    ctx->pc = 0x7F0951ACu;
    // 7F0951AC: addi    r5, r4, -6308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6308);

label_7F0951B0:
    ctx->pc = 0x7F0951B0u;
    // 7F0951B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0951B4:
    ctx->pc = 0x7F0951B4u;
    // 7F0951B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0951B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0951B8:
    ctx->pc = 0x7F0951B8u;
    // 7F0951B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0951BC:
    ctx->pc = 0x7F0951BCu;
    // 7F0951BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0951C0:
    ctx->pc = 0x7F0951C0u;
    // 7F0951C0: bl      0x7F0B1144
    {
            ctx->lr = 0x7F0951C4u;
            ctx->pc = 0x7F0B1144u;
            return;
    }

label_7F0951C4:
    ctx->pc = 0x7F0951C4u;
    ctx->downcount -= 10;
    // 7F0951C4: lwz     r3, 720(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0951C8:
    ctx->pc = 0x7F0951C8u;
    // 7F0951C8: addi    r30, r27, 1928
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(1928);

label_7F0951CC:
    ctx->pc = 0x7F0951CCu;
    // 7F0951CC: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0951D0:
    ctx->pc = 0x7F0951D0u;
    // 7F0951D0: lis     r4, 138
    ctx->gpr[4] = ((u32)(s32)(138) << 16);

label_7F0951D4:
    ctx->pc = 0x7F0951D4u;
    // 7F0951D4: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0951D8:
    ctx->pc = 0x7F0951D8u;
    // 7F0951D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0951DC:
    ctx->pc = 0x7F0951DCu;
    // 7F0951DC: stw     r0, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0951E0:
    ctx->pc = 0x7F0951E0u;
    // 7F0951E0: addi    r4, r4, -23556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23556);

label_7F0951E4:
    ctx->pc = 0x7F0951E4u;
    // 7F0951E4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0951E8:
    ctx->pc = 0x7F0951E8u;
    // 7F0951E8: bl      0x7F04272C
    {
            ctx->lr = 0x7F0951ECu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0951EC:
    ctx->pc = 0x7F0951ECu;
    ctx->downcount -= 3;
    // 7F0951EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0951F0:
    ctx->pc = 0x7F0951F0u;
    // 7F0951F0: addi    r4, r27, 2172
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2172);

label_7F0951F4:
    ctx->pc = 0x7F0951F4u;
    // 7F0951F4: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0951F8u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0951F8:
    ctx->pc = 0x7F0951F8u;
    ctx->downcount -= 3;
    // 7F0951F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0951FC:
    ctx->pc = 0x7F0951FCu;
    // 7F0951FC: addi    r4, r27, 1320
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(1320);

label_7F095200:
    ctx->pc = 0x7F095200u;
    // 7F095200: bl      0x7F042B20
    {
            ctx->lr = 0x7F095204u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F095204:
    ctx->pc = 0x7F095204u;
    ctx->downcount -= 6;
    // 7F095204: lwz     r5, 720(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095208:
    ctx->pc = 0x7F095208u;
    // 7F095208: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F09520C:
    ctx->pc = 0x7F09520Cu;
    // 7F09520C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095210:
    ctx->pc = 0x7F095210u;
    // 7F095210: addi    r0, r5, 4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4);

label_7F095214:
    ctx->pc = 0x7F095214u;
    // 7F095214: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095218:
    ctx->pc = 0x7F095218u;
    // 7F095218: bl      0x7F094CA4
    {
            ctx->lr = 0x7F09521Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094CA4u;
                return;
            }
            goto label_7F094CA4;
    }

label_7F09521C:
    ctx->pc = 0x7F09521Cu;
    ctx->downcount -= 82;
    // 7F09521C: stw     r28, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F095220:
    ctx->pc = 0x7F095220u;
    // 7F095220: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095224:
    ctx->pc = 0x7F095224u;
    // 7F095224: addi    r6, r3, -6648
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6648);

label_7F095228:
    ctx->pc = 0x7F095228u;
    // 7F095228: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F09522C:
    ctx->pc = 0x7F09522Cu;
    // 7F09522C: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095230:
    ctx->pc = 0x7F095230u;
    // 7F095230: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F095234:
    ctx->pc = 0x7F095234u;
    // 7F095234: lwz     r0, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095238:
    ctx->pc = 0x7F095238u;
    // 7F095238: addi    r10, r5, 12808
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(12808);

label_7F09523C:
    ctx->pc = 0x7F09523Cu;
    // 7F09523C: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F09523Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095240:
    ctx->pc = 0x7F095240u;
    // 7F095240: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F095244:
    ctx->pc = 0x7F095244u;
    // 7F095244: stw     r7, 2156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2156);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095248:
    ctx->pc = 0x7F095248u;
    // 7F095248: li      r8, -200
    ctx->gpr[8] = (u32)(s32)(-200);

label_7F09524C:
    ctx->pc = 0x7F09524Cu;
    // 7F09524C: li      r7, -2048
    ctx->gpr[7] = (u32)(s32)(-2048);

label_7F095250:
    ctx->pc = 0x7F095250u;
    // 7F095250: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F095254:
    ctx->pc = 0x7F095254u;
    // 7F095254: stw     r0, 2160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095258:
    ctx->pc = 0x7F095258u;
    // 7F095258: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F09525C:
    ctx->pc = 0x7F09525Cu;
    // 7F09525C: addi    r0, r3, 22356
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22356);

label_7F095260:
    ctx->pc = 0x7F095260u;
    // 7F095260: li      r6, 200
    ctx->gpr[6] = (u32)(s32)(200);

label_7F095264:
    ctx->pc = 0x7F095264u;
    // 7F095264: stfs     f0, 2100(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F095264u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095268:
    ctx->pc = 0x7F095268u;
    // 7F095268: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F09526C:
    ctx->pc = 0x7F09526Cu;
    // 7F09526C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F095270:
    ctx->pc = 0x7F095270u;
    // 7F095270: stfs     f0, 2104(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F095270u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095274:
    ctx->pc = 0x7F095274u;
    // 7F095274: stfs     f0, 2108(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F095274u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095278:
    ctx->pc = 0x7F095278u;
    // 7F095278: lwz     r12, 2100(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F09527C:
    ctx->pc = 0x7F09527Cu;
    // 7F09527C: lwz     r11, 2104(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2104);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F095280:
    ctx->pc = 0x7F095280u;
    // 7F095280: stw     r12, 2116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2116);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F095284:
    ctx->pc = 0x7F095284u;
    // 7F095284: stw     r11, 2120(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2120);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F095288:
    ctx->pc = 0x7F095288u;
    // 7F095288: lwz     r12, 2108(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2108);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F09528C:
    ctx->pc = 0x7F09528Cu;
    // 7F09528C: lwz     r11, 2112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2112);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F095290:
    ctx->pc = 0x7F095290u;
    // 7F095290: stw     r12, 2124(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2124);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F095294:
    ctx->pc = 0x7F095294u;
    // 7F095294: stw     r11, 2128(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2128);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F095298:
    ctx->pc = 0x7F095298u;
    // 7F095298: lwz     r30, 2116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2116);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F09529C:
    ctx->pc = 0x7F09529Cu;
    // 7F09529C: lwz     r12, 2120(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2120);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0952A0:
    ctx->pc = 0x7F0952A0u;
    // 7F0952A0: lwz     r11, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0952A4:
    ctx->pc = 0x7F0952A4u;
    // 7F0952A4: stw     r30, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0952A8:
    ctx->pc = 0x7F0952A8u;
    // 7F0952A8: lwz     r10, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0952AC:
    ctx->pc = 0x7F0952ACu;
    // 7F0952AC: stw     r12, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0952B0:
    ctx->pc = 0x7F0952B0u;
    // 7F0952B0: lwz     r30, 2124(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2124);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0952B4:
    ctx->pc = 0x7F0952B4u;
    // 7F0952B4: lwz     r12, 2128(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2128);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0952B8:
    ctx->pc = 0x7F0952B8u;
    // 7F0952B8: stw     r30, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0952BC:
    ctx->pc = 0x7F0952BCu;
    // 7F0952BC: stw     r12, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0952C0:
    ctx->pc = 0x7F0952C0u;
    // 7F0952C0: stw     r11, 2140(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2140);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0952C4:
    ctx->pc = 0x7F0952C4u;
    // 7F0952C4: stw     r10, 2144(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2144);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0952C8:
    ctx->pc = 0x7F0952C8u;
    // 7F0952C8: lwz     r11, 2140(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2140);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0952CC:
    ctx->pc = 0x7F0952CCu;
    // 7F0952CC: lwz     r10, 2144(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2144);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0952D0:
    ctx->pc = 0x7F0952D0u;
    // 7F0952D0: stw     r11, 2132(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2132);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0952D4:
    ctx->pc = 0x7F0952D4u;
    // 7F0952D4: stw     r10, 2136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0952D8:
    ctx->pc = 0x7F0952D8u;
    // 7F0952D8: lwz     r11, 2132(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2132);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0952DC:
    ctx->pc = 0x7F0952DCu;
    // 7F0952DC: lwz     r10, 2136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2136);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0952E0:
    ctx->pc = 0x7F0952E0u;
    // 7F0952E0: stw     r11, 2148(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2148);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0952E4:
    ctx->pc = 0x7F0952E4u;
    // 7F0952E4: stw     r10, 2152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2152);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0952E8:
    ctx->pc = 0x7F0952E8u;
    // 7F0952E8: sth     r8, 2136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2136);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0952EC:
    ctx->pc = 0x7F0952ECu;
    // 7F0952EC: sth     r7, 2152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2152);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0952F0:
    ctx->pc = 0x7F0952F0u;
    // 7F0952F0: sth     r9, 2628(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0952F4:
    ctx->pc = 0x7F0952F4u;
    // 7F0952F4: sth     r9, 2630(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0952F8:
    ctx->pc = 0x7F0952F8u;
    // 7F0952F8: lha     r7, 2132(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2132);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0952FC:
    ctx->pc = 0x7F0952FCu;
    // 7F0952FC: neg  r7, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F095300:
    ctx->pc = 0x7F095300u;
    // 7F095300: sth     r7, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F095304:
    ctx->pc = 0x7F095304u;
    // 7F095304: lha     r7, 2134(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2134);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095308:
    ctx->pc = 0x7F095308u;
    // 7F095308: neg  r7, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F09530C:
    ctx->pc = 0x7F09530Cu;
    // 7F09530C: sth     r7, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F095310:
    ctx->pc = 0x7F095310u;
    // 7F095310: lha     r7, 2136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2136);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095314:
    ctx->pc = 0x7F095314u;
    // 7F095314: lwz     r8, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F095318:
    ctx->pc = 0x7F095318u;
    // 7F095318: neg  r7, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F09531C:
    ctx->pc = 0x7F09531Cu;
    // 7F09531C: sth     r7, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F095320:
    ctx->pc = 0x7F095320u;
    // 7F095320: lwz     r7, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095324:
    ctx->pc = 0x7F095324u;
    // 7F095324: stw     r8, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F095328:
    ctx->pc = 0x7F095328u;
    // 7F095328: stw     r7, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F09532C:
    ctx->pc = 0x7F09532Cu;
    // 7F09532C: stw     r9, 2632(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F095330:
    ctx->pc = 0x7F095330u;
    // 7F095330: stw     r6, 2640(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2640);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095334:
    ctx->pc = 0x7F095334u;
    // 7F095334: stw     r6, 2636(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095338:
    ctx->pc = 0x7F095338u;
    // 7F095338: lwz     r6, 2636(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2636);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09533C:
    ctx->pc = 0x7F09533Cu;
    // 7F09533C: stw     r6, 2660(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2660);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095340:
    ctx->pc = 0x7F095340u;
    // 7F095340: stw     r9, 2664(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F095344:
    ctx->pc = 0x7F095344u;
    // 7F095344: stw     r5, 2716(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2716);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F095348:
    ctx->pc = 0x7F095348u;
    // 7F095348: stw     r0, 2676(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09534C:
    ctx->pc = 0x7F09534Cu;
    // 7F09534C: stw     r9, 2648(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F095350:
    ctx->pc = 0x7F095350u;
    // 7F095350: stw     r9, 2652(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2652);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F095354:
    ctx->pc = 0x7F095354u;
    // 7F095354: lwz     r6, 720(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095358:
    ctx->pc = 0x7F095358u;
    // 7F095358: lwz     r5, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09535C:
    ctx->pc = 0x7F09535Cu;
    // 7F09535C: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F095360:
    ctx->pc = 0x7F095360u;
    // 7F095360: bl      0x7F09701C
    {
            ctx->lr = 0x7F095364u;
            goto label_7F09701C;
    }

label_7F095364:
    ctx->pc = 0x7F095364u;
    ctx->downcount -= 8;
    // 7F095364: stw     r3, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095368:
    ctx->pc = 0x7F095368u;
    // 7F095368: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F09536C:
    ctx->pc = 0x7F09536Cu;
    // 7F09536C: addi    r4, r3, 28964
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28964);

label_7F095370:
    ctx->pc = 0x7F095370u;
    // 7F095370: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F095374:
    ctx->pc = 0x7F095374u;
    // 7F095374: stw     r27, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F095378:
    ctx->pc = 0x7F095378u;
    // 7F095378: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F09537C:
    ctx->pc = 0x7F09537Cu;
    // 7F09537C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F095380:
    ctx->pc = 0x7F095380u;
    // 7F095380: bl      0x7F09C990
    {
            ctx->lr = 0x7F095384u;
            ctx->pc = 0x7F09C990u;
            return;
    }

label_7F095384:
    ctx->pc = 0x7F095384u;
    ctx->downcount -= 11;
    // 7F095384: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095388:
    ctx->pc = 0x7F095388u;
    // 7F095388: addi    r4, r29, 32
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(32);

label_7F09538C:
    ctx->pc = 0x7F09538Cu;
    // 7F09538C: addi    r5, r3, 28408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F095390:
    ctx->pc = 0x7F095390u;
    // 7F095390: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F095394:
    ctx->pc = 0x7F095394u;
    // 7F095394: lwz     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095398:
    ctx->pc = 0x7F095398u;
    // 7F095398: stw     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F09539C:
    ctx->pc = 0x7F09539Cu;
    // 7F09539C: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_7F0953A0:
    ctx->pc = 0x7F0953A0u;
    // 7F0953A0: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0953A4:
    ctx->pc = 0x7F0953A4u;
    // 7F0953A4: stw     r31, 116(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0953A8:
    ctx->pc = 0x7F0953A8u;
    // 7F0953A8: stw     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0953AC:
    ctx->pc = 0x7F0953ACu;
    // 7F0953AC: bl      0x7F0968B4
    {
            ctx->lr = 0x7F0953B0u;
            goto label_7F0968B4;
    }

label_7F0953B0:
    ctx->pc = 0x7F0953B0u;
    ctx->downcount -= 6;
    // 7F0953B0: lwz     r6, 720(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0953B4:
    ctx->pc = 0x7F0953B4u;
    // 7F0953B4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0953B8:
    ctx->pc = 0x7F0953B8u;
    // 7F0953B8: addi    r3, r27, 2720
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(2720);

label_7F0953BC:
    ctx->pc = 0x7F0953BCu;
    // 7F0953BC: addi    r4, r27, 2756
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(2756);

label_7F0953C0:
    ctx->pc = 0x7F0953C0u;
    // 7F0953C0: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F0953C4:
    ctx->pc = 0x7F0953C4u;
    // 7F0953C4: bl      0x7F094ED8
    {
            ctx->lr = 0x7F0953C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094ED8u;
                return;
            }
            goto label_7F094ED8;
    }

label_7F0953C8:
    ctx->pc = 0x7F0953C8u;
    ctx->downcount -= 1;
    // 7F0953C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0953CC:
    ctx->pc = 0x7F0953CCu;
    ctx->downcount -= 16;
    // 7F0953CC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0953D0:
    ctx->pc = 0x7F0953D0u;
    // 7F0953D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0953D4:
    ctx->pc = 0x7F0953D4u;
    // 7F0953D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0953D8:
    ctx->pc = 0x7F0953D8u;
    // 7F0953D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0953DC:
    ctx->pc = 0x7F0953DCu;
    // 7F0953DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0953E0:
    ctx->pc = 0x7F0953E0u;
    ctx->downcount -= 21;
    // 7F0953E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0953E4:
    ctx->pc = 0x7F0953E4u;
    // 7F0953E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0953E8:
    ctx->pc = 0x7F0953E8u;
    // 7F0953E8: li      r5, 2784
    ctx->gpr[5] = (u32)(s32)(2784);

label_7F0953EC:
    ctx->pc = 0x7F0953ECu;
    // 7F0953EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0953F0:
    ctx->pc = 0x7F0953F0u;
    // 7F0953F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0953F4:
    ctx->pc = 0x7F0953F4u;
    // 7F0953F4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0953F8:
    ctx->pc = 0x7F0953F8u;
    // 7F0953F8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0953FC:
    ctx->pc = 0x7F0953FCu;
    // 7F0953FC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F095400:
    ctx->pc = 0x7F095400u;
    // 7F095400: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F095404:
    ctx->pc = 0x7F095404u;
    // 7F095404: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F095408:
    ctx->pc = 0x7F095408u;
    // 7F095408: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F09540Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F09540C:
    ctx->pc = 0x7F09540Cu;
    ctx->downcount -= 2;
    // 7F09540C: or.   r31, r3, r3
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

label_7F095410:
    ctx->pc = 0x7F095410u;
    // 7F095410: bc    12, 2, 0x7F095478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095478;
        }
    }

label_7F095414:
    ctx->pc = 0x7F095414u;
    ctx->downcount -= 5;
    // 7F095414: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F095418:
    ctx->pc = 0x7F095418u;
    // 7F095418: lis     r5, 32521
    ctx->gpr[5] = ((u32)(s32)(32521) << 16);

label_7F09541C:
    ctx->pc = 0x7F09541Cu;
    // 7F09541C: addi    r4, r4, 17432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17432);

label_7F095420:
    ctx->pc = 0x7F095420u;
    // 7F095420: addi    r5, r5, 18528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18528);

label_7F095424:
    ctx->pc = 0x7F095424u;
    // 7F095424: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F095428u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F095428:
    ctx->pc = 0x7F095428u;
    ctx->downcount -= 14;
    // 7F095428: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09542C:
    ctx->pc = 0x7F09542Cu;
    // 7F09542C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F095430:
    ctx->pc = 0x7F095430u;
    // 7F095430: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F095434:
    ctx->pc = 0x7F095434u;
    // 7F095434: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095438:
    ctx->pc = 0x7F095438u;
    // 7F095438: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F09543C:
    ctx->pc = 0x7F09543Cu;
    // 7F09543C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F095440:
    ctx->pc = 0x7F095440u;
    // 7F095440: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F095444:
    ctx->pc = 0x7F095444u;
    // 7F095444: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F095448:
    ctx->pc = 0x7F095448u;
    // 7F095448: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F09544C:
    ctx->pc = 0x7F09544Cu;
    // 7F09544C: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095450:
    ctx->pc = 0x7F095450u;
    // 7F095450: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095454:
    ctx->pc = 0x7F095454u;
    // 7F095454: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095458:
    ctx->pc = 0x7F095458u;
    // 7F095458: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09545C:
    ctx->pc = 0x7F09545Cu;
    // 7F09545C: bl      0x7F094FE0
    {
            ctx->lr = 0x7F095460u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F094FE0u;
                return;
            }
            goto label_7F094FE0;
    }

label_7F095460:
    ctx->pc = 0x7F095460u;
    ctx->downcount -= 2;
    // 7F095460: cmpwi   r3, 0
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

label_7F095464:
    ctx->pc = 0x7F095464u;
    // 7F095464: bc    4, 0, 0x7F095478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095478;
        }
    }

label_7F095468:
    ctx->pc = 0x7F095468u;
    ctx->downcount -= 2;
    // 7F095468: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09546C:
    ctx->pc = 0x7F09546Cu;
    // 7F09546C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F095470u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F095470:
    ctx->pc = 0x7F095470u;
    ctx->downcount -= 2;
    // 7F095470: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F095474:
    ctx->pc = 0x7F095474u;
    // 7F095474: b       0x7F09547C
    {
            goto label_7F09547C;
    }

label_7F095478:
    ctx->pc = 0x7F095478u;
    ctx->downcount -= 1;
    // 7F095478: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09547C:
    ctx->pc = 0x7F09547Cu;
    ctx->downcount -= 16;
    // 7F09547C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F095480:
    ctx->pc = 0x7F095480u;
    // 7F095480: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095484:
    ctx->pc = 0x7F095484u;
    // 7F095484: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F095488:
    ctx->pc = 0x7F095488u;
    // 7F095488: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F09548C:
    ctx->pc = 0x7F09548Cu;
    // 7F09548C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F095490:
    ctx->pc = 0x7F095490u;
    ctx->downcount -= 8;
    // 7F095490: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F095494:
    ctx->pc = 0x7F095494u;
    // 7F095494: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F095498:
    ctx->pc = 0x7F095498u;
    // 7F095498: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09549C:
    ctx->pc = 0x7F09549Cu;
    // 7F09549C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0954A0:
    ctx->pc = 0x7F0954A0u;
    // 7F0954A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0954A4:
    ctx->pc = 0x7F0954A4u;
    // 7F0954A4: lwz     r0, 2652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0954A8:
    ctx->pc = 0x7F0954A8u;
    // 7F0954A8: cmpwi   r0, 0
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

label_7F0954AC:
    ctx->pc = 0x7F0954ACu;
    // 7F0954AC: bc    4, 2, 0x7F0954C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0954C8;
        }
    }

label_7F0954B0:
    ctx->pc = 0x7F0954B0u;
    ctx->downcount -= 4;
    // 7F0954B0: lwz     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0954B4:
    ctx->pc = 0x7F0954B4u;
    // 7F0954B4: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F0954B8:
    ctx->pc = 0x7F0954B8u;
    // 7F0954B8: lwz     r4, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0954BC:
    ctx->pc = 0x7F0954BCu;
    // 7F0954BC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0954C0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0954C0:
    ctx->pc = 0x7F0954C0u;
    ctx->downcount -= 2;
    // 7F0954C0: stw     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0954C4:
    ctx->pc = 0x7F0954C4u;
    // 7F0954C4: b       0x7F0954DC
    {
            goto label_7F0954DC;
    }

label_7F0954C8:
    ctx->pc = 0x7F0954C8u;
    ctx->downcount -= 4;
    // 7F0954C8: lwz     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0954CC:
    ctx->pc = 0x7F0954CCu;
    // 7F0954CC: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F0954D0:
    ctx->pc = 0x7F0954D0u;
    // 7F0954D0: lwz     r4, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0954D4:
    ctx->pc = 0x7F0954D4u;
    // 7F0954D4: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0954D8u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0954D8:
    ctx->pc = 0x7F0954D8u;
    ctx->downcount -= 1;
    // 7F0954D8: stw     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0954DC:
    ctx->pc = 0x7F0954DCu;
    ctx->downcount -= 6;
    // 7F0954DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0954E0:
    ctx->pc = 0x7F0954E0u;
    // 7F0954E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0954E4:
    ctx->pc = 0x7F0954E4u;
    // 7F0954E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0954E8:
    ctx->pc = 0x7F0954E8u;
    // 7F0954E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0954EC:
    ctx->pc = 0x7F0954ECu;
    // 7F0954EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0954F0:
    ctx->pc = 0x7F0954F0u;
    ctx->downcount -= 41;
    // 7F0954F0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0954F4:
    ctx->pc = 0x7F0954F4u;
    // 7F0954F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0954F8:
    ctx->pc = 0x7F0954F8u;
    // 7F0954F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0954FC:
    ctx->pc = 0x7F0954FCu;
    // 7F0954FC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095500:
    ctx->pc = 0x7F095500u;
    // 7F095500: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F095504:
    ctx->pc = 0x7F095504u;
    // 7F095504: addi    r5, r4, -6304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6304);

label_7F095508:
    ctx->pc = 0x7F095508u;
    // 7F095508: stmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F09550C:
    ctx->pc = 0x7F09550Cu;
    // 7F09550C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F095510:
    ctx->pc = 0x7F095510u;
    // 7F095510: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095514:
    ctx->pc = 0x7F095514u;
    // 7F095514: addi    r4, r3, -6656
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6656);

label_7F095518:
    ctx->pc = 0x7F095518u;
    // 7F095518: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09551C:
    ctx->pc = 0x7F09551Cu;
    // 7F09551C: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F09551Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F095520:
    ctx->pc = 0x7F095520u;
    // 7F095520: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F095524:
    ctx->pc = 0x7F095524u;
    // 7F095524: lwz     r8, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F095528:
    ctx->pc = 0x7F095528u;
    // 7F095528: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F09552C:
    ctx->pc = 0x7F09552Cu;
    // 7F09552C: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095530:
    ctx->pc = 0x7F095530u;
    // 7F095530: addi    r30, r31, 64
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(64);

label_7F095534:
    ctx->pc = 0x7F095534u;
    // 7F095534: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095538:
    ctx->pc = 0x7F095538u;
    // 7F095538: addi    r4, r31, 2156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2156);

label_7F09553C:
    ctx->pc = 0x7F09553Cu;
    // 7F09553C: lwz     r5, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095540:
    ctx->pc = 0x7F095540u;
    // 7F095540: stw     r8, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F095544:
    ctx->pc = 0x7F095544u;
    // 7F095544: stw     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095548:
    ctx->pc = 0x7F095548u;
    // 7F095548: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F09554C:
    ctx->pc = 0x7F09554Cu;
    // 7F09554C: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F095550:
    ctx->pc = 0x7F095550u;
    // 7F095550: lwz     r5, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095554:
    ctx->pc = 0x7F095554u;
    // 7F095554: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F095558:
    ctx->pc = 0x7F095558u;
    // 7F095558: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09555C:
    ctx->pc = 0x7F09555Cu;
    // 7F09555C: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09555Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F095560:
    ctx->pc = 0x7F095560u;
    // 7F095560: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F095560u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F095564:
    ctx->pc = 0x7F095564u;
    // 7F095564: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095568:
    ctx->pc = 0x7F095568u;
    // 7F095568: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F09556Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F09556C:
    ctx->pc = 0x7F09556Cu;
    ctx->downcount -= 4;
    // 7F09556C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F095570:
    ctx->pc = 0x7F095570u;
    // 7F095570: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F095574:
    ctx->pc = 0x7F095574u;
    // 7F095574: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F095578:
    ctx->pc = 0x7F095578u;
    // 7F095578: bl      0x7F3B3648
    {
            ctx->lr = 0x7F09557Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F09557C:
    ctx->pc = 0x7F09557Cu;
    ctx->downcount -= 19;
    // 7F09557C: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09557Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095580:
    ctx->pc = 0x7F095580u;
    // 7F095580: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095584:
    ctx->pc = 0x7F095584u;
    // 7F095584: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F095588:
    ctx->pc = 0x7F095588u;
    // 7F095588: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095588u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F09558C:
    ctx->pc = 0x7F09558Cu;
    // 7F09558C: lfs     f0, -6288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09558Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095590:
    ctx->pc = 0x7F095590u;
    // 7F095590: stfd     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F095594:
    ctx->pc = 0x7F095594u;
    // 7F095594: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095598:
    ctx->pc = 0x7F095598u;
    // 7F095598: sth     r0, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09559C:
    ctx->pc = 0x7F09559Cu;
    // 7F09559C: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09559Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0955A0:
    ctx->pc = 0x7F0955A0u;
    // 7F0955A0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0955A0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0955A4:
    ctx->pc = 0x7F0955A4u;
    // 7F0955A4: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0955A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0955A8:
    ctx->pc = 0x7F0955A8u;
    // 7F0955A8: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0955AC:
    ctx->pc = 0x7F0955ACu;
    // 7F0955AC: sth     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0955B0:
    ctx->pc = 0x7F0955B0u;
    // 7F0955B0: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0955B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0955B4:
    ctx->pc = 0x7F0955B4u;
    // 7F0955B4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0955B4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0955B8:
    ctx->pc = 0x7F0955B8u;
    // 7F0955B8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0955B8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0955BC:
    ctx->pc = 0x7F0955BCu;
    // 7F0955BC: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0955BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0955C0:
    ctx->pc = 0x7F0955C0u;
    // 7F0955C0: lwz     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0955C4:
    ctx->pc = 0x7F0955C4u;
    // 7F0955C4: bl      0x7F093820
    {
            ctx->lr = 0x7F0955C8u;
            ctx->pc = 0x7F093820u;
            return;
    }

label_7F0955C8:
    ctx->pc = 0x7F0955C8u;
    ctx->downcount -= 3;
    // 7F0955C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0955CC:
    ctx->pc = 0x7F0955CCu;
    // 7F0955CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0955D0:
    ctx->pc = 0x7F0955D0u;
    // 7F0955D0: bl      0x7F096AD4
    {
            ctx->lr = 0x7F0955D4u;
            goto label_7F096AD4;
    }

label_7F0955D4:
    ctx->pc = 0x7F0955D4u;
    ctx->downcount -= 4;
    // 7F0955D4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0955D8:
    ctx->pc = 0x7F0955D8u;
    // 7F0955D8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0955DC:
    ctx->pc = 0x7F0955DCu;
    // 7F0955DC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0955E0:
    ctx->pc = 0x7F0955E0u;
    // 7F0955E0: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0955E4u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0955E4:
    ctx->pc = 0x7F0955E4u;
    ctx->downcount -= 7;
    // 7F0955E4: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0955E8:
    ctx->pc = 0x7F0955E8u;
    // 7F0955E8: lha     r0, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0955EC:
    ctx->pc = 0x7F0955ECu;
    // 7F0955EC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0955F0:
    ctx->pc = 0x7F0955F0u;
    // 7F0955F0: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0955F4:
    ctx->pc = 0x7F0955F4u;
    // 7F0955F4: lwz     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0955F8:
    ctx->pc = 0x7F0955F8u;
    // 7F0955F8: rlwinm r3, r0, 5, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_7F0955FC:
    ctx->pc = 0x7F0955FCu;
    // 7F0955FC: bl      0x7F02A62C
    {
            ctx->lr = 0x7F095600u;
            ctx->pc = 0x7F02A62Cu;
            return;
    }

label_7F095600:
    ctx->pc = 0x7F095600u;
    ctx->downcount -= 10;
    // 7F095600: mulli   r5, r3, 50
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)50);

label_7F095604:
    ctx->pc = 0x7F095604u;
    // 7F095604: lha     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095608:
    ctx->pc = 0x7F095608u;
    // 7F095608: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09560C:
    ctx->pc = 0x7F09560Cu;
    // 7F09560C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F095610:
    ctx->pc = 0x7F095610u;
    // 7F095610: srawi r5, r5, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[5];
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

label_7F095614:
    ctx->pc = 0x7F095614u;
    // 7F095614: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F095618:
    ctx->pc = 0x7F095618u;
    // 7F095618: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09561C:
    ctx->pc = 0x7F09561Cu;
    // 7F09561C: bl      0x7F3CC990
    {
            ctx->lr = 0x7F095620u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F095620:
    ctx->pc = 0x7F095620u;
    ctx->downcount -= 2;
    // 7F095620: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F095624:
    ctx->pc = 0x7F095624u;
    // 7F095624: bl      0x7F3CC708
    {
            ctx->lr = 0x7F095628u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F095628:
    ctx->pc = 0x7F095628u;
    ctx->downcount -= 8;
    // 7F095628: sth     r3, 2158(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2158);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F09562C:
    ctx->pc = 0x7F09562Cu;
    // 7F09562C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F095630:
    ctx->pc = 0x7F095630u;
    // 7F095630: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F095634:
    ctx->pc = 0x7F095634u;
    // 7F095634: lwz     r3, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095638:
    ctx->pc = 0x7F095638u;
    // 7F095638: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F09563C:
    ctx->pc = 0x7F09563Cu;
    // 7F09563C: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095640:
    ctx->pc = 0x7F095640u;
    // 7F095640: lwz     r3, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095644:
    ctx->pc = 0x7F095644u;
    // 7F095644: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095648u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095648:
    ctx->pc = 0x7F095648u;
    ctx->downcount -= 17;
    // 7F095648: stw     r3, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F09564C:
    ctx->pc = 0x7F09564Cu;
    // 7F09564C: lmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F095650:
    ctx->pc = 0x7F095650u;
    // 7F095650: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095654:
    ctx->pc = 0x7F095654u;
    // 7F095654: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F095658:
    ctx->pc = 0x7F095658u;
    // 7F095658: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F09565C:
    ctx->pc = 0x7F09565Cu;
    // 7F09565C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F095660:
    ctx->pc = 0x7F095660u;
    ctx->downcount -= 17;
    // 7F095660: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F095664:
    ctx->pc = 0x7F095664u;
    // 7F095664: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F095668:
    ctx->pc = 0x7F095668u;
    // 7F095668: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F09566C:
    ctx->pc = 0x7F09566Cu;
    // 7F09566C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F095670:
    ctx->pc = 0x7F095670u;
    // 7F095670: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095674:
    ctx->pc = 0x7F095674u;
    // 7F095674: addi    r9, r4, -6284
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-6284);

label_7F095678:
    ctx->pc = 0x7F095678u;
    // 7F095678: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F09567C:
    ctx->pc = 0x7F09567Cu;
    // 7F09567C: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F095680:
    ctx->pc = 0x7F095680u;
    // 7F095680: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F095684:
    ctx->pc = 0x7F095684u;
    // 7F095684: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095688:
    ctx->pc = 0x7F095688u;
    // 7F095688: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09568C:
    ctx->pc = 0x7F09568Cu;
    // 7F09568C: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095690:
    ctx->pc = 0x7F095690u;
    // 7F095690: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F095694:
    ctx->pc = 0x7F095694u;
    // 7F095694: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095698:
    ctx->pc = 0x7F095698u;
    // 7F095698: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F09569C:
    ctx->pc = 0x7F09569Cu;
    // 7F09569C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0956A0:
    ctx->pc = 0x7F0956A0u;
    // 7F0956A0: bl      0x7F09B1B4
    {
            ctx->lr = 0x7F0956A4u;
            ctx->pc = 0x7F09B1B4u;
            return;
    }

label_7F0956A4:
    ctx->pc = 0x7F0956A4u;
    ctx->downcount -= 10;
    // 7F0956A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0956A8:
    ctx->pc = 0x7F0956A8u;
    // 7F0956A8: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0956A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0956AC:
    ctx->pc = 0x7F0956ACu;
    // 7F0956AC: addi    r4, r3, -6268
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6268);

label_7F0956B0:
    ctx->pc = 0x7F0956B0u;
    // 7F0956B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0956B4:
    ctx->pc = 0x7F0956B4u;
    // 7F0956B4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0956B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0956B8:
    ctx->pc = 0x7F0956B8u;
    // 7F0956B8: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F0956BC:
    ctx->pc = 0x7F0956BCu;
    // 7F0956BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0956C0:
    ctx->pc = 0x7F0956C0u;
    // 7F0956C0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0956C0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0956C4:
    ctx->pc = 0x7F0956C4u;
    // 7F0956C4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0956C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0956C8:
    ctx->pc = 0x7F0956C8u;
    // 7F0956C8: bl      0x7F09B1B4
    {
            ctx->lr = 0x7F0956CCu;
            ctx->pc = 0x7F09B1B4u;
            return;
    }

label_7F0956CC:
    ctx->pc = 0x7F0956CCu;
    ctx->downcount -= 10;
    // 7F0956CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0956D0:
    ctx->pc = 0x7F0956D0u;
    // 7F0956D0: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0956D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0956D4:
    ctx->pc = 0x7F0956D4u;
    // 7F0956D4: addi    r4, r3, -6264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6264);

label_7F0956D8:
    ctx->pc = 0x7F0956D8u;
    // 7F0956D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0956DC:
    ctx->pc = 0x7F0956DCu;
    // 7F0956DC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0956DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0956E0:
    ctx->pc = 0x7F0956E0u;
    // 7F0956E0: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F0956E4:
    ctx->pc = 0x7F0956E4u;
    // 7F0956E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0956E8:
    ctx->pc = 0x7F0956E8u;
    // 7F0956E8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0956E8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0956EC:
    ctx->pc = 0x7F0956ECu;
    // 7F0956EC: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0956ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0956F0:
    ctx->pc = 0x7F0956F0u;
    // 7F0956F0: bl      0x7F09B1B4
    {
            ctx->lr = 0x7F0956F4u;
            ctx->pc = 0x7F09B1B4u;
            return;
    }

label_7F0956F4:
    ctx->pc = 0x7F0956F4u;
    ctx->downcount -= 10;
    // 7F0956F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0956F8:
    ctx->pc = 0x7F0956F8u;
    // 7F0956F8: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0956F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0956FC:
    ctx->pc = 0x7F0956FCu;
    // 7F0956FC: addi    r4, r3, -6260
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6260);

label_7F095700:
    ctx->pc = 0x7F095700u;
    // 7F095700: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F095704:
    ctx->pc = 0x7F095704u;
    // 7F095704: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F095704u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095708:
    ctx->pc = 0x7F095708u;
    // 7F095708: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F09570C:
    ctx->pc = 0x7F09570Cu;
    // 7F09570C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F095710:
    ctx->pc = 0x7F095710u;
    // 7F095710: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095710u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F095714:
    ctx->pc = 0x7F095714u;
    // 7F095714: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095714u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095718:
    ctx->pc = 0x7F095718u;
    // 7F095718: bl      0x7F09B1B4
    {
            ctx->lr = 0x7F09571Cu;
            ctx->pc = 0x7F09B1B4u;
            return;
    }

label_7F09571C:
    ctx->pc = 0x7F09571Cu;
    ctx->downcount -= 10;
    // 7F09571C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095720:
    ctx->pc = 0x7F095720u;
    // 7F095720: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095720u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095724:
    ctx->pc = 0x7F095724u;
    // 7F095724: addi    r4, r3, -6256
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6256);

label_7F095728:
    ctx->pc = 0x7F095728u;
    // 7F095728: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F09572C:
    ctx->pc = 0x7F09572Cu;
    // 7F09572C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F09572Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095730:
    ctx->pc = 0x7F095730u;
    // 7F095730: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F095734:
    ctx->pc = 0x7F095734u;
    // 7F095734: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F095738:
    ctx->pc = 0x7F095738u;
    // 7F095738: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095738u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F09573C:
    ctx->pc = 0x7F09573Cu;
    // 7F09573C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09573Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F095740:
    ctx->pc = 0x7F095740u;
    // 7F095740: bl      0x7F09B1B4
    {
            ctx->lr = 0x7F095744u;
            ctx->pc = 0x7F09B1B4u;
            return;
    }

label_7F095744:
    ctx->pc = 0x7F095744u;
    ctx->downcount -= 5;
    // 7F095744: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095748:
    ctx->pc = 0x7F095748u;
    // 7F095748: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F09574C:
    ctx->pc = 0x7F09574Cu;
    // 7F09574C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F095750:
    ctx->pc = 0x7F095750u;
    // 7F095750: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F095754:
    ctx->pc = 0x7F095754u;
    ctx->downcount -= 6;
    // 7F095754: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F095758:
    ctx->pc = 0x7F095758u;
    // 7F095758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F09575C:
    ctx->pc = 0x7F09575Cu;
    // 7F09575C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095760:
    ctx->pc = 0x7F095760u;
    // 7F095760: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F095764:
    ctx->pc = 0x7F095764u;
    // 7F095764: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F095768:
    ctx->pc = 0x7F095768u;
    // 7F095768: bl      0x7F095490
    {
            ctx->lr = 0x7F09576Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095490u;
                return;
            }
            goto label_7F095490;
    }

label_7F09576C:
    ctx->pc = 0x7F09576Cu;
    ctx->downcount -= 2;
    // 7F09576C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095770:
    ctx->pc = 0x7F095770u;
    // 7F095770: bl      0x7F0954F0
    {
            ctx->lr = 0x7F095774u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F095774:
    ctx->pc = 0x7F095774u;
    ctx->downcount -= 3;
    // 7F095774: lwz     r3, 2708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2708);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095778:
    ctx->pc = 0x7F095778u;
    // 7F095778: cmpwi   r3, 1
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

label_7F09577C:
    ctx->pc = 0x7F09577Cu;
    // 7F09577C: bc    4, 1, 0x7F09578C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09578C;
        }
    }

label_7F095780:
    ctx->pc = 0x7F095780u;
    ctx->downcount -= 3;
    // 7F095780: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F095784:
    ctx->pc = 0x7F095784u;
    // 7F095784: stw     r0, 2708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095788:
    ctx->pc = 0x7F095788u;
    // 7F095788: b       0x7F0957AC
    {
            goto label_7F0957AC;
    }

label_7F09578C:
    ctx->pc = 0x7F09578Cu;
    ctx->downcount -= 1;
    // 7F09578C: bc    4, 2, 0x7F0957AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0957AC;
        }
    }

label_7F095790:
    ctx->pc = 0x7F095790u;
    ctx->downcount -= 3;
    // 7F095790: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095794:
    ctx->pc = 0x7F095794u;
    // 7F095794: stw     r0, 2708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095798:
    ctx->pc = 0x7F095798u;
    // 7F095798: bl      0x7F095660
    {
            ctx->lr = 0x7F09579Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095660u;
                return;
            }
            goto label_7F095660;
    }

label_7F09579C:
    ctx->pc = 0x7F09579Cu;
    ctx->downcount -= 4;
    // 7F09579C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0957A0:
    ctx->pc = 0x7F0957A0u;
    // 7F0957A0: li      r3, 1942
    ctx->gpr[3] = (u32)(s32)(1942);

label_7F0957A4:
    ctx->pc = 0x7F0957A4u;
    // 7F0957A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0957A8:
    ctx->pc = 0x7F0957A8u;
    // 7F0957A8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0957ACu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0957AC:
    ctx->pc = 0x7F0957ACu;
    ctx->downcount -= 4;
    // 7F0957AC: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0957B0:
    ctx->pc = 0x7F0957B0u;
    // 7F0957B0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0957B4:
    ctx->pc = 0x7F0957B4u;
    // 7F0957B4: lha     r4, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0957B8:
    ctx->pc = 0x7F0957B8u;
    // 7F0957B8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0957BCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0957BC:
    ctx->pc = 0x7F0957BCu;
    ctx->downcount -= 6;
    // 7F0957BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0957C0:
    ctx->pc = 0x7F0957C0u;
    // 7F0957C0: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0957C4:
    ctx->pc = 0x7F0957C4u;
    // 7F0957C4: addi    r3, r4, 28408
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0957C8:
    ctx->pc = 0x7F0957C8u;
    // 7F0957C8: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0957CC:
    ctx->pc = 0x7F0957CCu;
    // 7F0957CC: cmpwi   r0, 0
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

label_7F0957D0:
    ctx->pc = 0x7F0957D0u;
    // 7F0957D0: bc    12, 2, 0x7F095830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095830;
        }
    }

label_7F0957D4:
    ctx->pc = 0x7F0957D4u;
    ctx->downcount -= 2;
    // 7F0957D4: cmpwi   r0, 1
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

label_7F0957D8:
    ctx->pc = 0x7F0957D8u;
    // 7F0957D8: bc    4, 2, 0x7F0957EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0957EC;
        }
    }

label_7F0957DC:
    ctx->pc = 0x7F0957DCu;
    ctx->downcount -= 4;
    // 7F0957DC: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F0957E0:
    ctx->pc = 0x7F0957E0u;
    // 7F0957E0: addi    r0, r3, 22596
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22596);

label_7F0957E4:
    ctx->pc = 0x7F0957E4u;
    // 7F0957E4: stw     r0, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0957E8:
    ctx->pc = 0x7F0957E8u;
    // 7F0957E8: b       0x7F095830
    {
            goto label_7F095830;
    }

label_7F0957EC:
    ctx->pc = 0x7F0957ECu;
    ctx->downcount -= 2;
    // 7F0957EC: cmpwi   r0, 3
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

label_7F0957F0:
    ctx->pc = 0x7F0957F0u;
    // 7F0957F0: bc    4, 2, 0x7F095804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095804;
        }
    }

label_7F0957F4:
    ctx->pc = 0x7F0957F4u;
    ctx->downcount -= 4;
    // 7F0957F4: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F0957F8:
    ctx->pc = 0x7F0957F8u;
    // 7F0957F8: addi    r0, r3, 22596
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22596);

label_7F0957FC:
    ctx->pc = 0x7F0957FCu;
    // 7F0957FC: stw     r0, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095800:
    ctx->pc = 0x7F095800u;
    // 7F095800: b       0x7F095830
    {
            goto label_7F095830;
    }

label_7F095804:
    ctx->pc = 0x7F095804u;
    ctx->downcount -= 2;
    // 7F095804: cmpwi   r0, 7
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

label_7F095808:
    ctx->pc = 0x7F095808u;
    // 7F095808: bc    4, 2, 0x7F09581C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09581C;
        }
    }

label_7F09580C:
    ctx->pc = 0x7F09580Cu;
    ctx->downcount -= 4;
    // 7F09580C: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F095810:
    ctx->pc = 0x7F095810u;
    // 7F095810: addi    r0, r3, 25176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25176);

label_7F095814:
    ctx->pc = 0x7F095814u;
    // 7F095814: stw     r0, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095818:
    ctx->pc = 0x7F095818u;
    // 7F095818: b       0x7F095830
    {
            goto label_7F095830;
    }

label_7F09581C:
    ctx->pc = 0x7F09581Cu;
    ctx->downcount -= 2;
    // 7F09581C: cmpwi   r0, 8
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

label_7F095820:
    ctx->pc = 0x7F095820u;
    // 7F095820: bc    4, 2, 0x7F095830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095830;
        }
    }

label_7F095824:
    ctx->pc = 0x7F095824u;
    ctx->downcount -= 3;
    // 7F095824: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F095828:
    ctx->pc = 0x7F095828u;
    // 7F095828: addi    r0, r3, 25544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25544);

label_7F09582C:
    ctx->pc = 0x7F09582Cu;
    // 7F09582C: stw     r0, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095830:
    ctx->pc = 0x7F095830u;
    ctx->downcount -= 6;
    // 7F095830: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095834:
    ctx->pc = 0x7F095834u;
    // 7F095834: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F095838:
    ctx->pc = 0x7F095838u;
    // 7F095838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F09583C:
    ctx->pc = 0x7F09583Cu;
    // 7F09583C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F095840:
    ctx->pc = 0x7F095840u;
    // 7F095840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F095844:
    ctx->pc = 0x7F095844u;
    ctx->downcount -= 19;
    // 7F095844: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F095848:
    ctx->pc = 0x7F095848u;
    // 7F095848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F09584C:
    ctx->pc = 0x7F09584Cu;
    // 7F09584C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095850:
    ctx->pc = 0x7F095850u;
    // 7F095850: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F095854:
    ctx->pc = 0x7F095854u;
    // 7F095854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F095858:
    ctx->pc = 0x7F095858u;
    // 7F095858: addi    r30, r31, 64
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(64);

label_7F09585C:
    ctx->pc = 0x7F09585Cu;
    // 7F09585C: lwz     r0, 2648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095860:
    ctx->pc = 0x7F095860u;
    // 7F095860: cmpwi   r0, 3
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

label_7F095864:
    ctx->pc = 0x7F095864u;
    // 7F095864: bc    12, 2, 0x7F095B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095B54;
        }
    }

label_7F095868:
    ctx->pc = 0x7F095868u;
    ctx->downcount -= 1;
    // 7F095868: bc    4, 0, 0x7F095884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095884;
        }
    }

label_7F09586C:
    ctx->pc = 0x7F09586Cu;
    ctx->downcount -= 2;
    // 7F09586C: cmpwi   r0, 1
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

label_7F095870:
    ctx->pc = 0x7F095870u;
    // 7F095870: bc    12, 2, 0x7F0958A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0958A4;
        }
    }

label_7F095874:
    ctx->pc = 0x7F095874u;
    ctx->downcount -= 1;
    // 7F095874: bc    4, 0, 0x7F095950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095950;
        }
    }

label_7F095878:
    ctx->pc = 0x7F095878u;
    ctx->downcount -= 2;
    // 7F095878: cmpwi   r0, 0
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

label_7F09587C:
    ctx->pc = 0x7F09587Cu;
    // 7F09587C: bc    4, 0, 0x7F095894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095894;
        }
    }

label_7F095880:
    ctx->pc = 0x7F095880u;
    ctx->downcount -= 1;
    // 7F095880: b       0x7F095D14
    {
            goto label_7F095D14;
    }

label_7F095884:
    ctx->pc = 0x7F095884u;
    ctx->downcount -= 2;
    // 7F095884: cmpwi   r0, 5
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

label_7F095888:
    ctx->pc = 0x7F095888u;
    // 7F095888: bc    12, 2, 0x7F095C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095C90;
        }
    }

label_7F09588C:
    ctx->pc = 0x7F09588Cu;
    ctx->downcount -= 1;
    // 7F09588C: bc    4, 0, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095890:
    ctx->pc = 0x7F095890u;
    ctx->downcount -= 1;
    // 7F095890: b       0x7F095C60
    {
            goto label_7F095C60;
    }

label_7F095894:
    ctx->pc = 0x7F095894u;
    ctx->downcount -= 4;
    // 7F095894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F095898:
    ctx->pc = 0x7F095898u;
    // 7F095898: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F09589C:
    ctx->pc = 0x7F09589Cu;
    // 7F09589C: stw     r3, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0958A0:
    ctx->pc = 0x7F0958A0u;
    // 7F0958A0: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0958A4:
    ctx->pc = 0x7F0958A4u;
    ctx->downcount -= 2;
    // 7F0958A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0958A8:
    ctx->pc = 0x7F0958A8u;
    // 7F0958A8: bl      0x7F0954F0
    {
            ctx->lr = 0x7F0958ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F0958AC:
    ctx->pc = 0x7F0958ACu;
    ctx->downcount -= 4;
    // 7F0958AC: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0958B0:
    ctx->pc = 0x7F0958B0u;
    // 7F0958B0: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_7F0958B4:
    ctx->pc = 0x7F0958B4u;
    // 7F0958B4: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F0958B8:
    ctx->pc = 0x7F0958B8u;
    // 7F0958B8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0958BCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0958BC:
    ctx->pc = 0x7F0958BCu;
    ctx->downcount -= 5;
    // 7F0958BC: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0958C0:
    ctx->pc = 0x7F0958C0u;
    // 7F0958C0: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F0958C4:
    ctx->pc = 0x7F0958C4u;
    // 7F0958C4: lwz     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0958C8:
    ctx->pc = 0x7F0958C8u;
    // 7F0958C8: lwz     r4, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0958CC:
    ctx->pc = 0x7F0958CCu;
    // 7F0958CC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0958D0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0958D0:
    ctx->pc = 0x7F0958D0u;
    ctx->downcount -= 7;
    // 7F0958D0: stw     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0958D4:
    ctx->pc = 0x7F0958D4u;
    // 7F0958D4: li      r4, 3500
    ctx->gpr[4] = (u32)(s32)(3500);

label_7F0958D8:
    ctx->pc = 0x7F0958D8u;
    // 7F0958D8: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0958D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0958DC:
    ctx->pc = 0x7F0958DCu;
    // 7F0958DC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0958DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0958E0:
    ctx->pc = 0x7F0958E0u;
    // 7F0958E0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0958E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0958E4:
    ctx->pc = 0x7F0958E4u;
    // 7F0958E4: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0958E8:
    ctx->pc = 0x7F0958E8u;
    // 7F0958E8: bl      0x7F0939F8
    {
            ctx->lr = 0x7F0958ECu;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F0958EC:
    ctx->pc = 0x7F0958ECu;
    ctx->downcount -= 2;
    // 7F0958EC: cmpwi   r3, 10
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

label_7F0958F0:
    ctx->pc = 0x7F0958F0u;
    // 7F0958F0: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F0958F4:
    ctx->pc = 0x7F0958F4u;
    ctx->downcount -= 16;
    // 7F0958F4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0958F8:
    ctx->pc = 0x7F0958F8u;
    // 7F0958F8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0958FC:
    ctx->pc = 0x7F0958FCu;
    // 7F0958FC: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095900:
    ctx->pc = 0x7F095900u;
    // 7F095900: addi    r6, r3, 28408
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F095904:
    ctx->pc = 0x7F095904u;
    // 7F095904: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F095908:
    ctx->pc = 0x7F095908u;
    // 7F095908: li      r4, 1948
    ctx->gpr[4] = (u32)(s32)(1948);

label_7F09590C:
    ctx->pc = 0x7F09590Cu;
    // 7F09590C: lwz     r7, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095910:
    ctx->pc = 0x7F095910u;
    // 7F095910: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F095914:
    ctx->pc = 0x7F095914u;
    // 7F095914: lwz     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095918:
    ctx->pc = 0x7F095918u;
    // 7F095918: stw     r7, 2140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2140);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F09591C:
    ctx->pc = 0x7F09591Cu;
    // 7F09591C: stw     r0, 2144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095920:
    ctx->pc = 0x7F095920u;
    // 7F095920: lwz     r0, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095924:
    ctx->pc = 0x7F095924u;
    // 7F095924: oris    r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | (0x0002u << 16);

label_7F095928:
    ctx->pc = 0x7F095928u;
    // 7F095928: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F09592C:
    ctx->pc = 0x7F09592Cu;
    // 7F09592C: stw     r0, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095930:
    ctx->pc = 0x7F095930u;
    // 7F095930: bl      0x7F011A74
    {
            ctx->lr = 0x7F095934u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F095934:
    ctx->pc = 0x7F095934u;
    ctx->downcount -= 4;
    // 7F095934: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F095938:
    ctx->pc = 0x7F095938u;
    // 7F095938: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F09593C:
    ctx->pc = 0x7F09593Cu;
    // 7F09593C: addi    r3, r3, 22772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22772);

label_7F095940:
    ctx->pc = 0x7F095940u;
    // 7F095940: bl      0x7F013B6C
    {
            ctx->lr = 0x7F095944u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F095944:
    ctx->pc = 0x7F095944u;
    ctx->downcount -= 2;
    // 7F095944: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095948:
    ctx->pc = 0x7F095948u;
    // 7F095948: bl      0x7F096910
    {
            ctx->lr = 0x7F09594Cu;
            goto label_7F096910;
    }

label_7F09594C:
    ctx->pc = 0x7F09594Cu;
    ctx->downcount -= 1;
    // 7F09594C: b       0x7F095D14
    {
            goto label_7F095D14;
    }

label_7F095950:
    ctx->pc = 0x7F095950u;
    ctx->downcount -= 25;
    // 7F095950: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095954:
    ctx->pc = 0x7F095954u;
    // 7F095954: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F095958:
    ctx->pc = 0x7F095958u;
    // 7F095958: addi    r6, r3, -6252
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6252);

label_7F09595C:
    ctx->pc = 0x7F09595Cu;
    // 7F09595C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095960:
    ctx->pc = 0x7F095960u;
    // 7F095960: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095964:
    ctx->pc = 0x7F095964u;
    // 7F095964: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095968:
    ctx->pc = 0x7F095968u;
    // 7F095968: lwz     r8, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F09596C:
    ctx->pc = 0x7F09596Cu;
    // 7F09596C: addi    r5, r3, -6656
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6656);

label_7F095970:
    ctx->pc = 0x7F095970u;
    // 7F095970: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095974:
    ctx->pc = 0x7F095974u;
    // 7F095974: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F095978:
    ctx->pc = 0x7F095978u;
    // 7F095978: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F09597C:
    ctx->pc = 0x7F09597Cu;
    // 7F09597C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F095980:
    ctx->pc = 0x7F095980u;
    // 7F095980: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F095984:
    ctx->pc = 0x7F095984u;
    // 7F095984: addi    r4, r31, 2156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2156);

label_7F095988:
    ctx->pc = 0x7F095988u;
    // 7F095988: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F095988u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F09598C:
    ctx->pc = 0x7F09598Cu;
    // 7F09598C: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F095990:
    ctx->pc = 0x7F095990u;
    // 7F095990: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095994:
    ctx->pc = 0x7F095994u;
    // 7F095994: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095998:
    ctx->pc = 0x7F095998u;
    // 7F095998: lwz     r5, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F09599C:
    ctx->pc = 0x7F09599Cu;
    // 7F09599C: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F0959A0:
    ctx->pc = 0x7F0959A0u;
    // 7F0959A0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0959A4:
    ctx->pc = 0x7F0959A4u;
    // 7F0959A4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0959A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0959A8:
    ctx->pc = 0x7F0959A8u;
    // 7F0959A8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0959A8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0959AC:
    ctx->pc = 0x7F0959ACu;
    // 7F0959AC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0959ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0959B0:
    ctx->pc = 0x7F0959B0u;
    // 7F0959B0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0959B4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0959B4:
    ctx->pc = 0x7F0959B4u;
    ctx->downcount -= 4;
    // 7F0959B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0959B8:
    ctx->pc = 0x7F0959B8u;
    // 7F0959B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0959BC:
    ctx->pc = 0x7F0959BCu;
    // 7F0959BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0959C0:
    ctx->pc = 0x7F0959C0u;
    // 7F0959C0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F0959C4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F0959C4:
    ctx->pc = 0x7F0959C4u;
    ctx->downcount -= 3;
    // 7F0959C4: lha     r3, 2140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2140);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0959C8:
    ctx->pc = 0x7F0959C8u;
    // 7F0959C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0959CC:
    ctx->pc = 0x7F0959CCu;
    // 7F0959CC: bl      0x7F3C98A4
    {
            ctx->lr = 0x7F0959D0u;
            ctx->pc = 0x7F3C98A4u;
            return;
    }

label_7F0959D0:
    ctx->pc = 0x7F0959D0u;
    ctx->downcount -= 4;
    // 7F0959D0: sth     r3, 2140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2140);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0959D4:
    ctx->pc = 0x7F0959D4u;
    // 7F0959D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0959D8:
    ctx->pc = 0x7F0959D8u;
    // 7F0959D8: lha     r3, 2144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2144);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0959DC:
    ctx->pc = 0x7F0959DCu;
    // 7F0959DC: bl      0x7F3C98A4
    {
            ctx->lr = 0x7F0959E0u;
            ctx->pc = 0x7F3C98A4u;
            return;
    }

label_7F0959E0:
    ctx->pc = 0x7F0959E0u;
    ctx->downcount -= 32;
    // 7F0959E0: sth     r3, 2144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2144);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0959E4:
    ctx->pc = 0x7F0959E4u;
    // 7F0959E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0959E8:
    ctx->pc = 0x7F0959E8u;
    // 7F0959E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0959EC:
    ctx->pc = 0x7F0959ECu;
    // 7F0959EC: li      r4, 3072
    ctx->gpr[4] = (u32)(s32)(3072);

label_7F0959F0:
    ctx->pc = 0x7F0959F0u;
    // 7F0959F0: lha     r6, 2140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2140);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0959F4:
    ctx->pc = 0x7F0959F4u;
    // 7F0959F4: addi    r5, r3, -6656
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6656);

label_7F0959F8:
    ctx->pc = 0x7F0959F8u;
    // 7F0959F8: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0959FC:
    ctx->pc = 0x7F0959FCu;
    // 7F0959FC: xoris   r3, r6, 0x8000
    ctx->gpr[3] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F095A00:
    ctx->pc = 0x7F095A00u;
    // 7F095A00: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F095A00u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F095A04:
    ctx->pc = 0x7F095A04u;
    // 7F095A04: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095A08:
    ctx->pc = 0x7F095A08u;
    // 7F095A08: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095A0C:
    ctx->pc = 0x7F095A0Cu;
    // 7F095A0C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F095A10:
    ctx->pc = 0x7F095A10u;
    // 7F095A10: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095A14:
    ctx->pc = 0x7F095A14u;
    // 7F095A14: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F095A14u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F095A18:
    ctx->pc = 0x7F095A18u;
    // 7F095A18: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095A18u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F095A1C:
    ctx->pc = 0x7F095A1Cu;
    // 7F095A1C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095A1Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095A20:
    ctx->pc = 0x7F095A20u;
    // 7F095A20: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095A24:
    ctx->pc = 0x7F095A24u;
    // 7F095A24: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095A28:
    ctx->pc = 0x7F095A28u;
    // 7F095A28: sth     r0, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095A2C:
    ctx->pc = 0x7F095A2Cu;
    // 7F095A2C: lha     r0, 2144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2144);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095A30:
    ctx->pc = 0x7F095A30u;
    // 7F095A30: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095A34:
    ctx->pc = 0x7F095A34u;
    // 7F095A34: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F095A38:
    ctx->pc = 0x7F095A38u;
    // 7F095A38: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095A3C:
    ctx->pc = 0x7F095A3Cu;
    // 7F095A3C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F095A40:
    ctx->pc = 0x7F095A40u;
    // 7F095A40: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F095A40u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F095A44:
    ctx->pc = 0x7F095A44u;
    // 7F095A44: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095A44u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F095A48:
    ctx->pc = 0x7F095A48u;
    // 7F095A48: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095A48u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095A4C:
    ctx->pc = 0x7F095A4Cu;
    // 7F095A4C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095A4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095A50:
    ctx->pc = 0x7F095A50u;
    // 7F095A50: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095A54:
    ctx->pc = 0x7F095A54u;
    // 7F095A54: sth     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095A58:
    ctx->pc = 0x7F095A58u;
    // 7F095A58: lha     r3, 2158(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2158);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095A5C:
    ctx->pc = 0x7F095A5Cu;
    // 7F095A5C: bl      0x7F3C98A4
    {
            ctx->lr = 0x7F095A60u;
            ctx->pc = 0x7F3C98A4u;
            return;
    }

label_7F095A60:
    ctx->pc = 0x7F095A60u;
    ctx->downcount -= 4;
    // 7F095A60: sth     r3, 2158(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2158);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F095A64:
    ctx->pc = 0x7F095A64u;
    // 7F095A64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F095A68:
    ctx->pc = 0x7F095A68u;
    // 7F095A68: lwz     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095A6C:
    ctx->pc = 0x7F095A6Cu;
    // 7F095A6C: bl      0x7F3C9844
    {
            ctx->lr = 0x7F095A70u;
            ctx->pc = 0x7F3C9844u;
            return;
    }

label_7F095A70:
    ctx->pc = 0x7F095A70u;
    ctx->downcount -= 6;
    // 7F095A70: stw     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095A74:
    ctx->pc = 0x7F095A74u;
    // 7F095A74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095A78:
    ctx->pc = 0x7F095A78u;
    // 7F095A78: stw     r0, 2660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095A7C:
    ctx->pc = 0x7F095A7Cu;
    // 7F095A7C: lwz     r0, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095A80:
    ctx->pc = 0x7F095A80u;
    // 7F095A80: cmpwi   r0, 50
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

label_7F095A84:
    ctx->pc = 0x7F095A84u;
    // 7F095A84: bc    4, 0, 0x7F095AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095AE0;
        }
    }

label_7F095A88:
    ctx->pc = 0x7F095A88u;
    ctx->downcount -= 2;
    // 7F095A88: cmpwi   r0, 5
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

label_7F095A8C:
    ctx->pc = 0x7F095A8Cu;
    // 7F095A8C: bc    4, 1, 0x7F095AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095AE0;
        }
    }

label_7F095A90:
    ctx->pc = 0x7F095A90u;
    ctx->downcount -= 10;
    // 7F095A90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095A94:
    ctx->pc = 0x7F095A94u;
    // 7F095A94: lwz     r4, 720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095A98:
    ctx->pc = 0x7F095A98u;
    // 7F095A98: lwz     r5, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095A9C:
    ctx->pc = 0x7F095A9Cu;
    // 7F095A9C: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F095AA0:
    ctx->pc = 0x7F095AA0u;
    // 7F095AA0: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F095AA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095AA4:
    ctx->pc = 0x7F095AA4u;
    // 7F095AA4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F095AA8:
    ctx->pc = 0x7F095AA8u;
    // 7F095AA8: addi    r3, r5, 768
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(768);

label_7F095AAC:
    ctx->pc = 0x7F095AACu;
    // 7F095AAC: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F095AB0:
    ctx->pc = 0x7F095AB0u;
    // 7F095AB0: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F095AB4:
    ctx->pc = 0x7F095AB4u;
    // 7F095AB4: bl      0x7F0940CC
    {
            ctx->lr = 0x7F095AB8u;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F095AB8:
    ctx->pc = 0x7F095AB8u;
    ctx->downcount -= 10;
    // 7F095AB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F095ABC:
    ctx->pc = 0x7F095ABCu;
    // 7F095ABC: lwz     r4, 720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095AC0:
    ctx->pc = 0x7F095AC0u;
    // 7F095AC0: lwz     r5, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095AC4:
    ctx->pc = 0x7F095AC4u;
    // 7F095AC4: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F095AC8:
    ctx->pc = 0x7F095AC8u;
    // 7F095AC8: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F095AC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F095ACC:
    ctx->pc = 0x7F095ACCu;
    // 7F095ACC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F095AD0:
    ctx->pc = 0x7F095AD0u;
    // 7F095AD0: addi    r3, r5, 1092
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1092);

label_7F095AD4:
    ctx->pc = 0x7F095AD4u;
    // 7F095AD4: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F095AD8:
    ctx->pc = 0x7F095AD8u;
    // 7F095AD8: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F095ADC:
    ctx->pc = 0x7F095ADCu;
    // 7F095ADC: bl      0x7F0940CC
    {
            ctx->lr = 0x7F095AE0u;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F095AE0:
    ctx->pc = 0x7F095AE0u;
    ctx->downcount -= 6;
    // 7F095AE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095AE4:
    ctx->pc = 0x7F095AE4u;
    // 7F095AE4: li      r4, -400
    ctx->gpr[4] = (u32)(s32)(-400);

label_7F095AE8:
    ctx->pc = 0x7F095AE8u;
    // 7F095AE8: stw     r0, 2660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095AEC:
    ctx->pc = 0x7F095AECu;
    // 7F095AEC: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F095AF0:
    ctx->pc = 0x7F095AF0u;
    // 7F095AF0: lwz     r3, 2664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095AF4:
    ctx->pc = 0x7F095AF4u;
    // 7F095AF4: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095AF8u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095AF8:
    ctx->pc = 0x7F095AF8u;
    ctx->downcount -= 4;
    // 7F095AF8: stw     r3, 2664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095AFC:
    ctx->pc = 0x7F095AFCu;
    // 7F095AFC: lha     r0, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095B00:
    ctx->pc = 0x7F095B00u;
    // 7F095B00: cmpwi   r0, 0
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

label_7F095B04:
    ctx->pc = 0x7F095B04u;
    // 7F095B04: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095B08:
    ctx->pc = 0x7F095B08u;
    ctx->downcount -= 3;
    // 7F095B08: lha     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095B0C:
    ctx->pc = 0x7F095B0Cu;
    // 7F095B0C: cmpwi   r0, 0
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

label_7F095B10:
    ctx->pc = 0x7F095B10u;
    // 7F095B10: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095B14:
    ctx->pc = 0x7F095B14u;
    ctx->downcount -= 15;
    // 7F095B14: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F095B18:
    ctx->pc = 0x7F095B18u;
    // 7F095B18: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095B1C:
    ctx->pc = 0x7F095B1Cu;
    // 7F095B1C: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095B20:
    ctx->pc = 0x7F095B20u;
    // 7F095B20: addi    r6, r3, 28408
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F095B24:
    ctx->pc = 0x7F095B24u;
    // 7F095B24: lis     r3, -2
    ctx->gpr[3] = ((u32)(s32)(-2) << 16);

label_7F095B28:
    ctx->pc = 0x7F095B28u;
    // 7F095B28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095B2C:
    ctx->pc = 0x7F095B2Cu;
    // 7F095B2C: lwz     r5, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095B30:
    ctx->pc = 0x7F095B30u;
    // 7F095B30: addi    r4, r3, -33
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-33);

label_7F095B34:
    ctx->pc = 0x7F095B34u;
    // 7F095B34: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F095B38:
    ctx->pc = 0x7F095B38u;
    // 7F095B38: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F095B3C:
    ctx->pc = 0x7F095B3Cu;
    // 7F095B3C: stw     r4, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F095B40:
    ctx->pc = 0x7F095B40u;
    // 7F095B40: rlwinm r4, r4, 0, 16, 14
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFEFFFFu;
    }

label_7F095B44:
    ctx->pc = 0x7F095B44u;
    // 7F095B44: stw     r4, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F095B48:
    ctx->pc = 0x7F095B48u;
    // 7F095B48: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095B4C:
    ctx->pc = 0x7F095B4Cu;
    // 7F095B4C: bl      0x7F09287C
    {
            ctx->lr = 0x7F095B50u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095B50:
    ctx->pc = 0x7F095B50u;
    ctx->downcount -= 1;
    // 7F095B50: b       0x7F095D14
    {
            goto label_7F095D14;
    }

label_7F095B54:
    ctx->pc = 0x7F095B54u;
    ctx->downcount -= 7;
    // 7F095B54: lwz     r3, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095B58:
    ctx->pc = 0x7F095B58u;
    // 7F095B58: li      r4, -300
    ctx->gpr[4] = (u32)(s32)(-300);

label_7F095B5C:
    ctx->pc = 0x7F095B5Cu;
    // 7F095B5C: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F095B60:
    ctx->pc = 0x7F095B60u;
    // 7F095B60: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F095B64:
    ctx->pc = 0x7F095B64u;
    // 7F095B64: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095B68:
    ctx->pc = 0x7F095B68u;
    // 7F095B68: lwz     r3, 2664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095B6C:
    ctx->pc = 0x7F095B6Cu;
    // 7F095B6C: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095B70u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095B70:
    ctx->pc = 0x7F095B70u;
    ctx->downcount -= 8;
    // 7F095B70: stw     r3, 2664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095B74:
    ctx->pc = 0x7F095B74u;
    // 7F095B74: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095B78:
    ctx->pc = 0x7F095B78u;
    // 7F095B78: addi    r3, r3, 28944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28944);

label_7F095B7C:
    ctx->pc = 0x7F095B7Cu;
    // 7F095B7C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095B80:
    ctx->pc = 0x7F095B80u;
    // 7F095B80: lwz     r4, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095B84:
    ctx->pc = 0x7F095B84u;
    // 7F095B84: addi    r0, r3, 150
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(150);

label_7F095B88:
    ctx->pc = 0x7F095B88u;
    // 7F095B88: cmpw    r4, r0
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

label_7F095B8C:
    ctx->pc = 0x7F095B8Cu;
    // 7F095B8C: bc    4, 2, 0x7F095B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095B9C;
        }
    }

label_7F095B90:
    ctx->pc = 0x7F095B90u;
    ctx->downcount -= 2;
    // 7F095B90: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F095B94:
    ctx->pc = 0x7F095B94u;
    // 7F095B94: bl      0x7F09287C
    {
            ctx->lr = 0x7F095B98u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095B98:
    ctx->pc = 0x7F095B98u;
    ctx->downcount -= 1;
    // 7F095B98: b       0x7F095C00
    {
            goto label_7F095C00;
    }

label_7F095B9C:
    ctx->pc = 0x7F095B9Cu;
    ctx->downcount -= 3;
    // 7F095B9C: addi    r0, r3, 300
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(300);

label_7F095BA0:
    ctx->pc = 0x7F095BA0u;
    // 7F095BA0: cmpw    r4, r0
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

label_7F095BA4:
    ctx->pc = 0x7F095BA4u;
    // 7F095BA4: bc    4, 2, 0x7F095C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095C00;
        }
    }

label_7F095BA8:
    ctx->pc = 0x7F095BA8u;
    ctx->downcount -= 1;
    // 7F095BA8: bl      0x7F096B74
    {
            ctx->lr = 0x7F095BACu;
            goto label_7F096B74;
    }

label_7F095BAC:
    ctx->pc = 0x7F095BACu;
    ctx->downcount -= 49;
    // 7F095BAC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F095BB0:
    ctx->pc = 0x7F095BB0u;
    // 7F095BB0: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F095BB4:
    ctx->pc = 0x7F095BB4u;
    // 7F095BB4: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F095BB8:
    ctx->pc = 0x7F095BB8u;
    // 7F095BB8: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F095BBC:
    ctx->pc = 0x7F095BBCu;
    // 7F095BBC: cmpwi   r0, 1
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

label_7F095BC0:
    ctx->pc = 0x7F095BC0u;
    // 7F095BC0: bc    12, 2, 0x7F095BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095BEC;
        }
    }

label_7F095BC4:
    ctx->pc = 0x7F095BC4u;
    ctx->downcount -= 1;
    // 7F095BC4: bc    4, 0, 0x7F095BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095BD4;
        }
    }

label_7F095BC8:
    ctx->pc = 0x7F095BC8u;
    ctx->downcount -= 2;
    // 7F095BC8: cmpwi   r0, 0
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

label_7F095BCC:
    ctx->pc = 0x7F095BCCu;
    // 7F095BCC: bc    4, 0, 0x7F095BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095BE0;
        }
    }

label_7F095BD0:
    ctx->pc = 0x7F095BD0u;
    ctx->downcount -= 1;
    // 7F095BD0: b       0x7F095C00
    {
            goto label_7F095C00;
    }

label_7F095BD4:
    ctx->pc = 0x7F095BD4u;
    ctx->downcount -= 2;
    // 7F095BD4: cmpwi   r0, 3
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

label_7F095BD8:
    ctx->pc = 0x7F095BD8u;
    // 7F095BD8: bc    4, 0, 0x7F095C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095C00;
        }
    }

label_7F095BDC:
    ctx->pc = 0x7F095BDCu;
    ctx->downcount -= 1;
    // 7F095BDC: b       0x7F095BF8
    {
            goto label_7F095BF8;
    }

label_7F095BE0:
    ctx->pc = 0x7F095BE0u;
    ctx->downcount -= 2;
    // 7F095BE0: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F095BE4:
    ctx->pc = 0x7F095BE4u;
    // 7F095BE4: bl      0x7F09287C
    {
            ctx->lr = 0x7F095BE8u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095BE8:
    ctx->pc = 0x7F095BE8u;
    ctx->downcount -= 1;
    // 7F095BE8: b       0x7F095C00
    {
            goto label_7F095C00;
    }

label_7F095BEC:
    ctx->pc = 0x7F095BECu;
    ctx->downcount -= 2;
    // 7F095BEC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F095BF0:
    ctx->pc = 0x7F095BF0u;
    // 7F095BF0: bl      0x7F09287C
    {
            ctx->lr = 0x7F095BF4u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095BF4:
    ctx->pc = 0x7F095BF4u;
    ctx->downcount -= 1;
    // 7F095BF4: b       0x7F095C00
    {
            goto label_7F095C00;
    }

label_7F095BF8:
    ctx->pc = 0x7F095BF8u;
    ctx->downcount -= 2;
    // 7F095BF8: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F095BFC:
    ctx->pc = 0x7F095BFCu;
    // 7F095BFC: bl      0x7F09287C
    {
            ctx->lr = 0x7F095C00u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095C00:
    ctx->pc = 0x7F095C00u;
    ctx->downcount -= 1;
    // 7F095C00: bl      0x7F096670
    {
            ctx->lr = 0x7F095C04u;
            goto label_7F096670;
    }

label_7F095C04:
    ctx->pc = 0x7F095C04u;
    ctx->downcount -= 2;
    // 7F095C04: cmpwi   r3, 1
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

label_7F095C08:
    ctx->pc = 0x7F095C08u;
    // 7F095C08: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095C0C:
    ctx->pc = 0x7F095C0Cu;
    ctx->downcount -= 6;
    // 7F095C0C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F095C10:
    ctx->pc = 0x7F095C10u;
    // 7F095C10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095C14:
    ctx->pc = 0x7F095C14u;
    // 7F095C14: stw     r3, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095C18:
    ctx->pc = 0x7F095C18u;
    // 7F095C18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F095C1C:
    ctx->pc = 0x7F095C1Cu;
    // 7F095C1C: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095C20:
    ctx->pc = 0x7F095C20u;
    // 7F095C20: bl      0x7F0940C8
    {
            ctx->lr = 0x7F095C24u;
            ctx->pc = 0x7F0940C8u;
            return;
    }

label_7F095C24:
    ctx->pc = 0x7F095C24u;
    ctx->downcount -= 1;
    // 7F095C24: bl      0x7F09290C
    {
            ctx->lr = 0x7F095C28u;
            ctx->pc = 0x7F09290Cu;
            return;
    }

label_7F095C28:
    ctx->pc = 0x7F095C28u;
    ctx->downcount -= 2;
    // 7F095C28: cmpwi   r3, 0
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

label_7F095C2C:
    ctx->pc = 0x7F095C2Cu;
    // 7F095C2C: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095C30:
    ctx->pc = 0x7F095C30u;
    ctx->downcount -= 3;
    // 7F095C30: lwz     r0, 2712(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095C34:
    ctx->pc = 0x7F095C34u;
    // 7F095C34: rlwinm. r0, r0, 0, 31, 31
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

label_7F095C38:
    ctx->pc = 0x7F095C38u;
    // 7F095C38: bc    12, 2, 0x7F095C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095C48;
        }
    }

label_7F095C3C:
    ctx->pc = 0x7F095C3Cu;
    ctx->downcount -= 2;
    // 7F095C3C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F095C40:
    ctx->pc = 0x7F095C40u;
    // 7F095C40: bl      0x7F09287C
    {
            ctx->lr = 0x7F095C44u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095C44:
    ctx->pc = 0x7F095C44u;
    ctx->downcount -= 1;
    // 7F095C44: b       0x7F095C50
    {
            goto label_7F095C50;
    }

label_7F095C48:
    ctx->pc = 0x7F095C48u;
    ctx->downcount -= 2;
    // 7F095C48: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F095C4C:
    ctx->pc = 0x7F095C4Cu;
    // 7F095C4C: bl      0x7F09287C
    {
            ctx->lr = 0x7F095C50u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095C50:
    ctx->pc = 0x7F095C50u;
    ctx->downcount -= 4;
    // 7F095C50: lwz     r0, 2712(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095C54:
    ctx->pc = 0x7F095C54u;
    // 7F095C54: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F095C58:
    ctx->pc = 0x7F095C58u;
    // 7F095C58: stw     r0, 2712(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2712);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095C5C:
    ctx->pc = 0x7F095C5Cu;
    // 7F095C5C: b       0x7F095D14
    {
            goto label_7F095D14;
    }

label_7F095C60:
    ctx->pc = 0x7F095C60u;
    ctx->downcount -= 6;
    // 7F095C60: lwz     r3, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095C64:
    ctx->pc = 0x7F095C64u;
    // 7F095C64: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F095C68:
    ctx->pc = 0x7F095C68u;
    // 7F095C68: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095C6C:
    ctx->pc = 0x7F095C6Cu;
    // 7F095C6C: lwz     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095C70:
    ctx->pc = 0x7F095C70u;
    // 7F095C70: cmpwi   r0, 2
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

label_7F095C74:
    ctx->pc = 0x7F095C74u;
    // 7F095C74: bc    4, 1, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095C78:
    ctx->pc = 0x7F095C78u;
    ctx->downcount -= 6;
    // 7F095C78: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F095C7C:
    ctx->pc = 0x7F095C7Cu;
    // 7F095C7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095C80:
    ctx->pc = 0x7F095C80u;
    // 7F095C80: addi    r3, r3, 23848
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23848);

label_7F095C84:
    ctx->pc = 0x7F095C84u;
    // 7F095C84: stw     r3, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095C88:
    ctx->pc = 0x7F095C88u;
    // 7F095C88: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095C8C:
    ctx->pc = 0x7F095C8Cu;
    // 7F095C8C: b       0x7F095D14
    {
            goto label_7F095D14;
    }

label_7F095C90:
    ctx->pc = 0x7F095C90u;
    ctx->downcount -= 1;
    // 7F095C90: bl      0x7F0954F0
    {
            ctx->lr = 0x7F095C94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F095C94:
    ctx->pc = 0x7F095C94u;
    ctx->downcount -= 4;
    // 7F095C94: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095C98:
    ctx->pc = 0x7F095C98u;
    // 7F095C98: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_7F095C9C:
    ctx->pc = 0x7F095C9Cu;
    // 7F095C9C: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F095CA0:
    ctx->pc = 0x7F095CA0u;
    // 7F095CA0: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095CA4u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095CA4:
    ctx->pc = 0x7F095CA4u;
    ctx->downcount -= 5;
    // 7F095CA4: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F095CA8:
    ctx->pc = 0x7F095CA8u;
    // 7F095CA8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F095CAC:
    ctx->pc = 0x7F095CACu;
    // 7F095CAC: lwz     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095CB0:
    ctx->pc = 0x7F095CB0u;
    // 7F095CB0: lwz     r4, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095CB4:
    ctx->pc = 0x7F095CB4u;
    // 7F095CB4: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095CB8u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095CB8:
    ctx->pc = 0x7F095CB8u;
    ctx->downcount -= 7;
    // 7F095CB8: stw     r3, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095CBC:
    ctx->pc = 0x7F095CBCu;
    // 7F095CBC: li      r4, 13500
    ctx->gpr[4] = (u32)(s32)(13500);

label_7F095CC0:
    ctx->pc = 0x7F095CC0u;
    // 7F095CC0: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F095CC0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095CC4:
    ctx->pc = 0x7F095CC4u;
    // 7F095CC4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095CC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095CC8:
    ctx->pc = 0x7F095CC8u;
    // 7F095CC8: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095CC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095CCC:
    ctx->pc = 0x7F095CCCu;
    // 7F095CCC: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095CD0:
    ctx->pc = 0x7F095CD0u;
    // 7F095CD0: bl      0x7F0939F8
    {
            ctx->lr = 0x7F095CD4u;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F095CD4:
    ctx->pc = 0x7F095CD4u;
    ctx->downcount -= 2;
    // 7F095CD4: cmpwi   r3, 10
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

label_7F095CD8:
    ctx->pc = 0x7F095CD8u;
    // 7F095CD8: bc    4, 2, 0x7F095D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D14;
        }
    }

label_7F095CDC:
    ctx->pc = 0x7F095CDCu;
    ctx->downcount -= 1;
    // 7F095CDC: bl      0x7F09290C
    {
            ctx->lr = 0x7F095CE0u;
            ctx->pc = 0x7F09290Cu;
            return;
    }

label_7F095CE0:
    ctx->pc = 0x7F095CE0u;
    ctx->downcount -= 2;
    // 7F095CE0: cmpwi   r3, 0
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

label_7F095CE4:
    ctx->pc = 0x7F095CE4u;
    // 7F095CE4: bc    4, 2, 0x7F095CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095CF0;
        }
    }

label_7F095CE8:
    ctx->pc = 0x7F095CE8u;
    ctx->downcount -= 2;
    // 7F095CE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F095CEC:
    ctx->pc = 0x7F095CECu;
    // 7F095CEC: bl      0x7F09287C
    {
            ctx->lr = 0x7F095CF0u;
            ctx->pc = 0x7F09287Cu;
            return;
    }

label_7F095CF0:
    ctx->pc = 0x7F095CF0u;
    ctx->downcount -= 3;
    // 7F095CF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F095CF4:
    ctx->pc = 0x7F095CF4u;
    // 7F095CF4: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095CF8:
    ctx->pc = 0x7F095CF8u;
    // 7F095CF8: bl      0x7F096B74
    {
            ctx->lr = 0x7F095CFCu;
            goto label_7F096B74;
    }

label_7F095CFC:
    ctx->pc = 0x7F095CFCu;
    ctx->downcount -= 49;
    // 7F095CFC: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F095D00:
    ctx->pc = 0x7F095D00u;
    // 7F095D00: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F095D04:
    ctx->pc = 0x7F095D04u;
    // 7F095D04: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F095D08:
    ctx->pc = 0x7F095D08u;
    // 7F095D08: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F095D0C:
    ctx->pc = 0x7F095D0Cu;
    // 7F095D0C: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F095D10:
    ctx->pc = 0x7F095D10u;
    // 7F095D10: stw     r0, 28944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095D14:
    ctx->pc = 0x7F095D14u;
    ctx->downcount -= 16;
    // 7F095D14: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F095D18:
    ctx->pc = 0x7F095D18u;
    // 7F095D18: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095D1C:
    ctx->pc = 0x7F095D1Cu;
    // 7F095D1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F095D20:
    ctx->pc = 0x7F095D20u;
    // 7F095D20: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F095D24:
    ctx->pc = 0x7F095D24u;
    // 7F095D24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F095D28:
    ctx->pc = 0x7F095D28u;
    ctx->downcount -= 19;
    // 7F095D28: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F095D2C:
    ctx->pc = 0x7F095D2Cu;
    // 7F095D2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F095D30:
    ctx->pc = 0x7F095D30u;
    // 7F095D30: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095D34:
    ctx->pc = 0x7F095D34u;
    // 7F095D34: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F095D38:
    ctx->pc = 0x7F095D38u;
    // 7F095D38: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F095D3C:
    ctx->pc = 0x7F095D3Cu;
    // 7F095D3C: addi    r31, r30, 64
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(64);

label_7F095D40:
    ctx->pc = 0x7F095D40u;
    // 7F095D40: lwz     r0, 2648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095D44:
    ctx->pc = 0x7F095D44u;
    // 7F095D44: cmpwi   r0, 3
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

label_7F095D48:
    ctx->pc = 0x7F095D48u;
    // 7F095D48: bc    12, 2, 0x7F095FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095FA0;
        }
    }

label_7F095D4C:
    ctx->pc = 0x7F095D4Cu;
    ctx->downcount -= 1;
    // 7F095D4C: bc    4, 0, 0x7F095D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D68;
        }
    }

label_7F095D50:
    ctx->pc = 0x7F095D50u;
    ctx->downcount -= 2;
    // 7F095D50: cmpwi   r0, 1
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

label_7F095D54:
    ctx->pc = 0x7F095D54u;
    // 7F095D54: bc    12, 2, 0x7F095DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F095DD0;
        }
    }

label_7F095D58:
    ctx->pc = 0x7F095D58u;
    ctx->downcount -= 1;
    // 7F095D58: bc    4, 0, 0x7F095E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095E8C;
        }
    }

label_7F095D5C:
    ctx->pc = 0x7F095D5Cu;
    ctx->downcount -= 2;
    // 7F095D5C: cmpwi   r0, 0
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

label_7F095D60:
    ctx->pc = 0x7F095D60u;
    // 7F095D60: bc    4, 0, 0x7F095D78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095D78;
        }
    }

label_7F095D64:
    ctx->pc = 0x7F095D64u;
    ctx->downcount -= 1;
    // 7F095D64: b       0x7F096224
    {
            goto label_7F096224;
    }

label_7F095D68:
    ctx->pc = 0x7F095D68u;
    ctx->downcount -= 2;
    // 7F095D68: cmpwi   r0, 5
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

label_7F095D6C:
    ctx->pc = 0x7F095D6Cu;
    // 7F095D6C: bc    12, 2, 0x7F09616C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09616C;
        }
    }

label_7F095D70:
    ctx->pc = 0x7F095D70u;
    ctx->downcount -= 1;
    // 7F095D70: bc    4, 0, 0x7F096224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096224;
        }
    }

label_7F095D74:
    ctx->pc = 0x7F095D74u;
    ctx->downcount -= 1;
    // 7F095D74: b       0x7F0960C0
    {
            goto label_7F0960C0;
    }

label_7F095D78:
    ctx->pc = 0x7F095D78u;
    ctx->downcount -= 18;
    // 7F095D78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F095D7C:
    ctx->pc = 0x7F095D7Cu;
    // 7F095D7C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095D80:
    ctx->pc = 0x7F095D80u;
    // 7F095D80: stw     r0, 2632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095D84:
    ctx->pc = 0x7F095D84u;
    // 7F095D84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F095D88:
    ctx->pc = 0x7F095D88u;
    // 7F095D88: li      r0, -300
    ctx->gpr[0] = (u32)(s32)(-300);

label_7F095D8C:
    ctx->pc = 0x7F095D8Cu;
    // 7F095D8C: addi    r6, r3, 28408
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F095D90:
    ctx->pc = 0x7F095D90u;
    // 7F095D90: stw     r4, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F095D94:
    ctx->pc = 0x7F095D94u;
    // 7F095D94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095D98:
    ctx->pc = 0x7F095D98u;
    // 7F095D98: li      r4, 1953
    ctx->gpr[4] = (u32)(s32)(1953);

label_7F095D9C:
    ctx->pc = 0x7F095D9Cu;
    // 7F095D9C: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F095DA0:
    ctx->pc = 0x7F095DA0u;
    // 7F095DA0: stw     r0, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095DA4:
    ctx->pc = 0x7F095DA4u;
    // 7F095DA4: lwz     r0, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095DA8:
    ctx->pc = 0x7F095DA8u;
    // 7F095DA8: oris    r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | (0x0002u << 16);

label_7F095DAC:
    ctx->pc = 0x7F095DACu;
    // 7F095DAC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F095DB0:
    ctx->pc = 0x7F095DB0u;
    // 7F095DB0: stw     r0, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095DB4:
    ctx->pc = 0x7F095DB4u;
    // 7F095DB4: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_7F095DB8:
    ctx->pc = 0x7F095DB8u;
    // 7F095DB8: stw     r0, 88(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095DBC:
    ctx->pc = 0x7F095DBCu;
    // 7F095DBC: bl      0x7F011A74
    {
            ctx->lr = 0x7F095DC0u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F095DC0:
    ctx->pc = 0x7F095DC0u;
    ctx->downcount -= 4;
    // 7F095DC0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F095DC4:
    ctx->pc = 0x7F095DC4u;
    // 7F095DC4: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F095DC8:
    ctx->pc = 0x7F095DC8u;
    // 7F095DC8: addi    r3, r3, 22756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22756);

label_7F095DCC:
    ctx->pc = 0x7F095DCCu;
    // 7F095DCC: bl      0x7F013B6C
    {
            ctx->lr = 0x7F095DD0u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F095DD0:
    ctx->pc = 0x7F095DD0u;
    ctx->downcount -= 4;
    // 7F095DD0: lha     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095DD4:
    ctx->pc = 0x7F095DD4u;
    // 7F095DD4: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F095DD8:
    ctx->pc = 0x7F095DD8u;
    // 7F095DD8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F095DDC:
    ctx->pc = 0x7F095DDCu;
    // 7F095DDC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095DE0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095DE0:
    ctx->pc = 0x7F095DE0u;
    ctx->downcount -= 16;
    // 7F095DE0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F095DE4:
    ctx->pc = 0x7F095DE4u;
    // 7F095DE4: sth     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F095DE8:
    ctx->pc = 0x7F095DE8u;
    // 7F095DE8: addi    r8, r4, 12832
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F095DEC:
    ctx->pc = 0x7F095DECu;
    // 7F095DEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F095DF0:
    ctx->pc = 0x7F095DF0u;
    // 7F095DF0: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095DF4:
    ctx->pc = 0x7F095DF4u;
    // 7F095DF4: addi    r4, r30, 2158
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2158);

label_7F095DF8:
    ctx->pc = 0x7F095DF8u;
    // 7F095DF8: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095DFC:
    ctx->pc = 0x7F095DFCu;
    // 7F095DFC: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095E00:
    ctx->pc = 0x7F095E00u;
    // 7F095E00: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095E04:
    ctx->pc = 0x7F095E04u;
    // 7F095E04: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095E08:
    ctx->pc = 0x7F095E08u;
    // 7F095E08: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095E0C:
    ctx->pc = 0x7F095E0Cu;
    // 7F095E0C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F095E10:
    ctx->pc = 0x7F095E10u;
    // 7F095E10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095E14:
    ctx->pc = 0x7F095E14u;
    // 7F095E14: lwz     r5, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095E18:
    ctx->pc = 0x7F095E18u;
    // 7F095E18: lwz     r6, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095E1C:
    ctx->pc = 0x7F095E1Cu;
    // 7F095E1C: bl      0x7F096688
    {
            ctx->lr = 0x7F095E20u;
            goto label_7F096688;
    }

label_7F095E20:
    ctx->pc = 0x7F095E20u;
    ctx->downcount -= 14;
    // 7F095E20: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095E24:
    ctx->pc = 0x7F095E24u;
    // 7F095E24: li      r4, -250
    ctx->gpr[4] = (u32)(s32)(-250);

label_7F095E28:
    ctx->pc = 0x7F095E28u;
    // 7F095E28: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F095E2C:
    ctx->pc = 0x7F095E2Cu;
    // 7F095E2C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095E2Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095E30:
    ctx->pc = 0x7F095E30u;
    // 7F095E30: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095E34:
    ctx->pc = 0x7F095E34u;
    // 7F095E34: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095E38:
    ctx->pc = 0x7F095E38u;
    // 7F095E38: sth     r0, 2132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095E3C:
    ctx->pc = 0x7F095E3Cu;
    // 7F095E3C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095E40:
    ctx->pc = 0x7F095E40u;
    // 7F095E40: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095E40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095E44:
    ctx->pc = 0x7F095E44u;
    // 7F095E44: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095E48:
    ctx->pc = 0x7F095E48u;
    // 7F095E48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095E4C:
    ctx->pc = 0x7F095E4Cu;
    // 7F095E4C: sth     r0, 2136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2136);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095E50:
    ctx->pc = 0x7F095E50u;
    // 7F095E50: lwz     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095E54:
    ctx->pc = 0x7F095E54u;
    // 7F095E54: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095E58u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095E58:
    ctx->pc = 0x7F095E58u;
    ctx->downcount -= 5;
    // 7F095E58: stw     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095E5C:
    ctx->pc = 0x7F095E5Cu;
    // 7F095E5C: li      r4, -600
    ctx->gpr[4] = (u32)(s32)(-600);

label_7F095E60:
    ctx->pc = 0x7F095E60u;
    // 7F095E60: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F095E64:
    ctx->pc = 0x7F095E64u;
    // 7F095E64: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095E68:
    ctx->pc = 0x7F095E68u;
    // 7F095E68: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095E6Cu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095E6C:
    ctx->pc = 0x7F095E6Cu;
    ctx->downcount -= 5;
    // 7F095E6C: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095E70:
    ctx->pc = 0x7F095E70u;
    // 7F095E70: lha     r0, 2158(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2158);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095E74:
    ctx->pc = 0x7F095E74u;
    // 7F095E74: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F095E78:
    ctx->pc = 0x7F095E78u;
    // 7F095E78: cmpwi   r0, 1800
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1800);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F095E7C:
    ctx->pc = 0x7F095E7Cu;
    // 7F095E7C: bc    4, 0, 0x7F096224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096224;
        }
    }

label_7F095E80:
    ctx->pc = 0x7F095E80u;
    ctx->downcount -= 3;
    // 7F095E80: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F095E84:
    ctx->pc = 0x7F095E84u;
    // 7F095E84: stw     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095E88:
    ctx->pc = 0x7F095E88u;
    // 7F095E88: b       0x7F096224
    {
            goto label_7F096224;
    }

label_7F095E8C:
    ctx->pc = 0x7F095E8Cu;
    ctx->downcount -= 4;
    // 7F095E8C: lha     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095E90:
    ctx->pc = 0x7F095E90u;
    // 7F095E90: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F095E94:
    ctx->pc = 0x7F095E94u;
    // 7F095E94: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F095E98:
    ctx->pc = 0x7F095E98u;
    // 7F095E98: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095E9Cu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095E9C:
    ctx->pc = 0x7F095E9Cu;
    ctx->downcount -= 16;
    // 7F095E9C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F095EA0:
    ctx->pc = 0x7F095EA0u;
    // 7F095EA0: sth     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F095EA4:
    ctx->pc = 0x7F095EA4u;
    // 7F095EA4: addi    r8, r4, 12832
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F095EA8:
    ctx->pc = 0x7F095EA8u;
    // 7F095EA8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F095EAC:
    ctx->pc = 0x7F095EACu;
    // 7F095EAC: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F095EB0:
    ctx->pc = 0x7F095EB0u;
    // 7F095EB0: addi    r4, r30, 2158
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2158);

label_7F095EB4:
    ctx->pc = 0x7F095EB4u;
    // 7F095EB4: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095EB8:
    ctx->pc = 0x7F095EB8u;
    // 7F095EB8: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095EBC:
    ctx->pc = 0x7F095EBCu;
    // 7F095EBC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095EC0:
    ctx->pc = 0x7F095EC0u;
    // 7F095EC0: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F095EC4:
    ctx->pc = 0x7F095EC4u;
    // 7F095EC4: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F095EC8:
    ctx->pc = 0x7F095EC8u;
    // 7F095EC8: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F095ECC:
    ctx->pc = 0x7F095ECCu;
    // 7F095ECC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095ED0:
    ctx->pc = 0x7F095ED0u;
    // 7F095ED0: lwz     r5, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F095ED4:
    ctx->pc = 0x7F095ED4u;
    // 7F095ED4: lwz     r6, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F095ED8:
    ctx->pc = 0x7F095ED8u;
    // 7F095ED8: bl      0x7F096688
    {
            ctx->lr = 0x7F095EDCu;
            goto label_7F096688;
    }

label_7F095EDC:
    ctx->pc = 0x7F095EDCu;
    ctx->downcount -= 14;
    // 7F095EDC: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095EDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095EE0:
    ctx->pc = 0x7F095EE0u;
    // 7F095EE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F095EE4:
    ctx->pc = 0x7F095EE4u;
    // 7F095EE4: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F095EE8:
    ctx->pc = 0x7F095EE8u;
    // 7F095EE8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095EE8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095EEC:
    ctx->pc = 0x7F095EECu;
    // 7F095EEC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095EECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095EF0:
    ctx->pc = 0x7F095EF0u;
    // 7F095EF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095EF4:
    ctx->pc = 0x7F095EF4u;
    // 7F095EF4: sth     r0, 2132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095EF8:
    ctx->pc = 0x7F095EF8u;
    // 7F095EF8: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095EF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F095EFC:
    ctx->pc = 0x7F095EFCu;
    // 7F095EFC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F095EFCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F095F00:
    ctx->pc = 0x7F095F00u;
    // 7F095F00: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F095F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F095F04:
    ctx->pc = 0x7F095F04u;
    // 7F095F04: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095F08:
    ctx->pc = 0x7F095F08u;
    // 7F095F08: sth     r0, 2136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2136);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F095F0C:
    ctx->pc = 0x7F095F0Cu;
    // 7F095F0C: lwz     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095F10:
    ctx->pc = 0x7F095F10u;
    // 7F095F10: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095F14u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095F14:
    ctx->pc = 0x7F095F14u;
    ctx->downcount -= 5;
    // 7F095F14: stw     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095F18:
    ctx->pc = 0x7F095F18u;
    // 7F095F18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F095F1C:
    ctx->pc = 0x7F095F1Cu;
    // 7F095F1C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F095F20:
    ctx->pc = 0x7F095F20u;
    // 7F095F20: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095F24:
    ctx->pc = 0x7F095F24u;
    // 7F095F24: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095F28u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095F28:
    ctx->pc = 0x7F095F28u;
    ctx->downcount -= 4;
    // 7F095F28: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095F2C:
    ctx->pc = 0x7F095F2Cu;
    // 7F095F2C: lwz     r0, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F095F30:
    ctx->pc = 0x7F095F30u;
    // 7F095F30: cmpwi   r0, 0
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

label_7F095F34:
    ctx->pc = 0x7F095F34u;
    // 7F095F34: bc    4, 2, 0x7F096224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096224;
        }
    }

label_7F095F38:
    ctx->pc = 0x7F095F38u;
    ctx->downcount -= 8;
    // 7F095F38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F095F3C:
    ctx->pc = 0x7F095F3Cu;
    // 7F095F3C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F095F40:
    ctx->pc = 0x7F095F40u;
    // 7F095F40: stw     r3, 2632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F095F44:
    ctx->pc = 0x7F095F44u;
    // 7F095F44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095F48:
    ctx->pc = 0x7F095F48u;
    // 7F095F48: li      r4, 1946
    ctx->gpr[4] = (u32)(s32)(1946);

label_7F095F4C:
    ctx->pc = 0x7F095F4Cu;
    // 7F095F4C: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F095F50:
    ctx->pc = 0x7F095F50u;
    // 7F095F50: stw     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095F54:
    ctx->pc = 0x7F095F54u;
    // 7F095F54: bl      0x7F011A74
    {
            ctx->lr = 0x7F095F58u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F095F58:
    ctx->pc = 0x7F095F58u;
    ctx->downcount -= 4;
    // 7F095F58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F095F5C:
    ctx->pc = 0x7F095F5Cu;
    // 7F095F5C: li      r4, 1951
    ctx->gpr[4] = (u32)(s32)(1951);

label_7F095F60:
    ctx->pc = 0x7F095F60u;
    // 7F095F60: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F095F64:
    ctx->pc = 0x7F095F64u;
    // 7F095F64: bl      0x7F011A74
    {
            ctx->lr = 0x7F095F68u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F095F68:
    ctx->pc = 0x7F095F68u;
    ctx->downcount -= 4;
    // 7F095F68: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F095F6C:
    ctx->pc = 0x7F095F6Cu;
    // 7F095F6C: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F095F70:
    ctx->pc = 0x7F095F70u;
    // 7F095F70: addi    r3, r3, 22756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22756);

label_7F095F74:
    ctx->pc = 0x7F095F74u;
    // 7F095F74: bl      0x7F013B6C
    {
            ctx->lr = 0x7F095F78u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F095F78:
    ctx->pc = 0x7F095F78u;
    ctx->downcount -= 10;
    // 7F095F78: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F095F7C:
    ctx->pc = 0x7F095F7Cu;
    // 7F095F7C: lis     r3, -2
    ctx->gpr[3] = ((u32)(s32)(-2) << 16);

label_7F095F80:
    ctx->pc = 0x7F095F80u;
    // 7F095F80: addi    r5, r4, 28408
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F095F84:
    ctx->pc = 0x7F095F84u;
    // 7F095F84: lwz     r4, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F095F88:
    ctx->pc = 0x7F095F88u;
    // 7F095F88: addi    r0, r3, -33
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-33);

label_7F095F8C:
    ctx->pc = 0x7F095F8Cu;
    // 7F095F8C: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F095F90:
    ctx->pc = 0x7F095F90u;
    // 7F095F90: stw     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095F94:
    ctx->pc = 0x7F095F94u;
    // 7F095F94: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F095F98:
    ctx->pc = 0x7F095F98u;
    // 7F095F98: stw     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095F9C:
    ctx->pc = 0x7F095F9Cu;
    // 7F095F9C: b       0x7F096224
    {
            goto label_7F096224;
    }

label_7F095FA0:
    ctx->pc = 0x7F095FA0u;
    ctx->downcount -= 7;
    // 7F095FA0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095FA4:
    ctx->pc = 0x7F095FA4u;
    // 7F095FA4: addi    r4, r3, 28948
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28948);

label_7F095FA8:
    ctx->pc = 0x7F095FA8u;
    // 7F095FA8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F095FAC:
    ctx->pc = 0x7F095FACu;
    // 7F095FAC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F095FB0:
    ctx->pc = 0x7F095FB0u;
    // 7F095FB0: cmpwi   r0, 15
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

label_7F095FB4:
    ctx->pc = 0x7F095FB4u;
    // 7F095FB4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F095FB8:
    ctx->pc = 0x7F095FB8u;
    // 7F095FB8: bc    4, 0, 0x7F095FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F095FC8;
        }
    }

label_7F095FBC:
    ctx->pc = 0x7F095FBCu;
    ctx->downcount -= 3;
    // 7F095FBC: li      r29, 1000
    ctx->gpr[29] = (u32)(s32)(1000);

label_7F095FC0:
    ctx->pc = 0x7F095FC0u;
    // 7F095FC0: li      r28, 100
    ctx->gpr[28] = (u32)(s32)(100);

label_7F095FC4:
    ctx->pc = 0x7F095FC4u;
    // 7F095FC4: b       0x7F095FD0
    {
            goto label_7F095FD0;
    }

label_7F095FC8:
    ctx->pc = 0x7F095FC8u;
    ctx->downcount -= 2;
    // 7F095FC8: li      r29, 2620
    ctx->gpr[29] = (u32)(s32)(2620);

label_7F095FCC:
    ctx->pc = 0x7F095FCCu;
    // 7F095FCC: li      r28, 100
    ctx->gpr[28] = (u32)(s32)(100);

label_7F095FD0:
    ctx->pc = 0x7F095FD0u;
    ctx->downcount -= 2;
    // 7F095FD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F095FD4:
    ctx->pc = 0x7F095FD4u;
    // 7F095FD4: bl      0x7F0954F0
    {
            ctx->lr = 0x7F095FD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F095FD8:
    ctx->pc = 0x7F095FD8u;
    ctx->downcount -= 6;
    // 7F095FD8: srawi r0, r29, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[29];
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

label_7F095FDC:
    ctx->pc = 0x7F095FDCu;
    // 7F095FDC: lha     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F095FE0:
    ctx->pc = 0x7F095FE0u;
    // 7F095FE0: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F095FE4:
    ctx->pc = 0x7F095FE4u;
    // 7F095FE4: srawi r0, r28, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[28];
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

label_7F095FE8:
    ctx->pc = 0x7F095FE8u;
    // 7F095FE8: addze  r5, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F095FEC:
    ctx->pc = 0x7F095FECu;
    // 7F095FEC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F095FF0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F095FF0:
    ctx->pc = 0x7F095FF0u;
    ctx->downcount -= 7;
    // 7F095FF0: sth     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F095FF4:
    ctx->pc = 0x7F095FF4u;
    // 7F095FF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F095FF8:
    ctx->pc = 0x7F095FF8u;
    // 7F095FF8: addi    r5, r3, 28960
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(28960);

label_7F095FFC:
    ctx->pc = 0x7F095FFCu;
    // 7F095FFC: lwz     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096000:
    ctx->pc = 0x7F096000u;
    // 7F096000: lwz     r4, 2640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096004:
    ctx->pc = 0x7F096004u;
    // 7F096004: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096008:
    ctx->pc = 0x7F096008u;
    // 7F096008: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F09600Cu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F09600C:
    ctx->pc = 0x7F09600Cu;
    ctx->downcount -= 10;
    // 7F09600C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F096010:
    ctx->pc = 0x7F096010u;
    // 7F096010: stw     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096014:
    ctx->pc = 0x7F096014u;
    // 7F096014: addi    r6, r4, 28960
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(28960);

label_7F096018:
    ctx->pc = 0x7F096018u;
    // 7F096018: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_7F09601C:
    ctx->pc = 0x7F09601Cu;
    // 7F09601C: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096020:
    ctx->pc = 0x7F096020u;
    // 7F096020: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F096024:
    ctx->pc = 0x7F096024u;
    // 7F096024: addi    r0, r3, 2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2);

label_7F096028:
    ctx->pc = 0x7F096028u;
    // 7F096028: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09602C:
    ctx->pc = 0x7F09602Cu;
    // 7F09602C: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096030:
    ctx->pc = 0x7F096030u;
    // 7F096030: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096034u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096034:
    ctx->pc = 0x7F096034u;
    ctx->downcount -= 7;
    // 7F096034: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096038:
    ctx->pc = 0x7F096038u;
    // 7F096038: li      r4, -3250
    ctx->gpr[4] = (u32)(s32)(-3250);

label_7F09603C:
    ctx->pc = 0x7F09603Cu;
    // 7F09603C: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F09603Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096040:
    ctx->pc = 0x7F096040u;
    // 7F096040: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096040u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096044:
    ctx->pc = 0x7F096044u;
    // 7F096044: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096048:
    ctx->pc = 0x7F096048u;
    // 7F096048: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09604C:
    ctx->pc = 0x7F09604Cu;
    // 7F09604C: bl      0x7F0939F8
    {
            ctx->lr = 0x7F096050u;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F096050:
    ctx->pc = 0x7F096050u;
    ctx->downcount -= 2;
    // 7F096050: cmpwi   r3, 10
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

label_7F096054:
    ctx->pc = 0x7F096054u;
    // 7F096054: bc    4, 2, 0x7F096060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096060;
        }
    }

label_7F096058:
    ctx->pc = 0x7F096058u;
    ctx->downcount -= 2;
    // 7F096058: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F09605C:
    ctx->pc = 0x7F09605Cu;
    // 7F09605C: stw     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096060:
    ctx->pc = 0x7F096060u;
    ctx->downcount -= 3;
    // 7F096060: lwz     r0, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096064:
    ctx->pc = 0x7F096064u;
    // 7F096064: cmpwi   r0, 200
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

label_7F096068:
    ctx->pc = 0x7F096068u;
    // 7F096068: bc    4, 0, 0x7F096224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096224;
        }
    }

label_7F09606C:
    ctx->pc = 0x7F09606Cu;
    ctx->downcount -= 10;
    // 7F09606C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096070:
    ctx->pc = 0x7F096070u;
    // 7F096070: lwz     r4, 720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096074:
    ctx->pc = 0x7F096074u;
    // 7F096074: lwz     r5, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096078:
    ctx->pc = 0x7F096078u;
    // 7F096078: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F09607C:
    ctx->pc = 0x7F09607Cu;
    // 7F09607C: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09607Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096080:
    ctx->pc = 0x7F096080u;
    // 7F096080: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F096084:
    ctx->pc = 0x7F096084u;
    // 7F096084: addi    r3, r5, 768
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(768);

label_7F096088:
    ctx->pc = 0x7F096088u;
    // 7F096088: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F09608C:
    ctx->pc = 0x7F09608Cu;
    // 7F09608C: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F096090:
    ctx->pc = 0x7F096090u;
    // 7F096090: bl      0x7F0940CC
    {
            ctx->lr = 0x7F096094u;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F096094:
    ctx->pc = 0x7F096094u;
    ctx->downcount -= 10;
    // 7F096094: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096098:
    ctx->pc = 0x7F096098u;
    // 7F096098: lwz     r4, 720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F09609C:
    ctx->pc = 0x7F09609Cu;
    // 7F09609C: lwz     r5, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0960A0:
    ctx->pc = 0x7F0960A0u;
    // 7F0960A0: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F0960A4:
    ctx->pc = 0x7F0960A4u;
    // 7F0960A4: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0960A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0960A8:
    ctx->pc = 0x7F0960A8u;
    // 7F0960A8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0960AC:
    ctx->pc = 0x7F0960ACu;
    // 7F0960AC: addi    r3, r5, 1092
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1092);

label_7F0960B0:
    ctx->pc = 0x7F0960B0u;
    // 7F0960B0: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F0960B4:
    ctx->pc = 0x7F0960B4u;
    // 7F0960B4: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F0960B8:
    ctx->pc = 0x7F0960B8u;
    // 7F0960B8: bl      0x7F0940CC
    {
            ctx->lr = 0x7F0960BCu;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F0960BC:
    ctx->pc = 0x7F0960BCu;
    ctx->downcount -= 1;
    // 7F0960BC: b       0x7F096224
    {
            goto label_7F096224;
    }

label_7F0960C0:
    ctx->pc = 0x7F0960C0u;
    ctx->downcount -= 1;
    // 7F0960C0: bl      0x7F0954F0
    {
            ctx->lr = 0x7F0960C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F0960C4:
    ctx->pc = 0x7F0960C4u;
    ctx->downcount -= 4;
    // 7F0960C4: lha     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0960C8:
    ctx->pc = 0x7F0960C8u;
    // 7F0960C8: li      r4, 600
    ctx->gpr[4] = (u32)(s32)(600);

label_7F0960CC:
    ctx->pc = 0x7F0960CCu;
    // 7F0960CC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F0960D0:
    ctx->pc = 0x7F0960D0u;
    // 7F0960D0: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0960D4u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0960D4:
    ctx->pc = 0x7F0960D4u;
    ctx->downcount -= 5;
    // 7F0960D4: sth     r3, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0960D8:
    ctx->pc = 0x7F0960D8u;
    // 7F0960D8: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F0960DC:
    ctx->pc = 0x7F0960DCu;
    // 7F0960DC: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F0960E0:
    ctx->pc = 0x7F0960E0u;
    // 7F0960E0: lwz     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0960E4:
    ctx->pc = 0x7F0960E4u;
    // 7F0960E4: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0960E8u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0960E8:
    ctx->pc = 0x7F0960E8u;
    ctx->downcount -= 5;
    // 7F0960E8: stw     r3, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0960EC:
    ctx->pc = 0x7F0960ECu;
    // 7F0960EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0960F0:
    ctx->pc = 0x7F0960F0u;
    // 7F0960F0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0960F4:
    ctx->pc = 0x7F0960F4u;
    // 7F0960F4: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0960F8:
    ctx->pc = 0x7F0960F8u;
    // 7F0960F8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0960FCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0960FC:
    ctx->pc = 0x7F0960FCu;
    ctx->downcount -= 7;
    // 7F0960FC: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096100:
    ctx->pc = 0x7F096100u;
    // 7F096100: li      r4, -6000
    ctx->gpr[4] = (u32)(s32)(-6000);

label_7F096104:
    ctx->pc = 0x7F096104u;
    // 7F096104: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096104u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096108:
    ctx->pc = 0x7F096108u;
    // 7F096108: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096108u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F09610C:
    ctx->pc = 0x7F09610Cu;
    // 7F09610C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09610Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096110:
    ctx->pc = 0x7F096110u;
    // 7F096110: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096114:
    ctx->pc = 0x7F096114u;
    // 7F096114: bl      0x7F0939F8
    {
            ctx->lr = 0x7F096118u;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F096118:
    ctx->pc = 0x7F096118u;
    ctx->downcount -= 2;
    // 7F096118: cmpwi   r3, 10
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

label_7F09611C:
    ctx->pc = 0x7F09611Cu;
    // 7F09611C: bc    4, 2, 0x7F096154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096154;
        }
    }

label_7F096120:
    ctx->pc = 0x7F096120u;
    ctx->downcount -= 4;
    // 7F096120: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096124:
    ctx->pc = 0x7F096124u;
    // 7F096124: li      r3, 1961
    ctx->gpr[3] = (u32)(s32)(1961);

label_7F096128:
    ctx->pc = 0x7F096128u;
    // 7F096128: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F09612C:
    ctx->pc = 0x7F09612Cu;
    // 7F09612C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F096130u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F096130:
    ctx->pc = 0x7F096130u;
    ctx->downcount -= 5;
    // 7F096130: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F096134:
    ctx->pc = 0x7F096134u;
    // 7F096134: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F096138:
    ctx->pc = 0x7F096138u;
    // 7F096138: stw     r3, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F09613C:
    ctx->pc = 0x7F09613Cu;
    // 7F09613C: stw     r0, 2708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096140:
    ctx->pc = 0x7F096140u;
    // 7F096140: bl      0x7F095660
    {
            ctx->lr = 0x7F096144u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095660u;
                return;
            }
            goto label_7F095660;
    }

label_7F096144:
    ctx->pc = 0x7F096144u;
    ctx->downcount -= 4;
    // 7F096144: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F096148:
    ctx->pc = 0x7F096148u;
    // 7F096148: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F09614C:
    ctx->pc = 0x7F09614Cu;
    // 7F09614C: addi    r3, r3, 23316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23316);

label_7F096150:
    ctx->pc = 0x7F096150u;
    // 7F096150: bl      0x7F013B6C
    {
            ctx->lr = 0x7F096154u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F096154:
    ctx->pc = 0x7F096154u;
    ctx->downcount -= 4;
    // 7F096154: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096158:
    ctx->pc = 0x7F096158u;
    // 7F096158: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F09615C:
    ctx->pc = 0x7F09615Cu;
    // 7F09615C: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F096160:
    ctx->pc = 0x7F096160u;
    // 7F096160: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096164u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096164:
    ctx->pc = 0x7F096164u;
    ctx->downcount -= 2;
    // 7F096164: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096168:
    ctx->pc = 0x7F096168u;
    // 7F096168: b       0x7F096224
    {
            goto label_7F096224;
    }

label_7F09616C:
    ctx->pc = 0x7F09616Cu;
    ctx->downcount -= 10;
    // 7F09616C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096170:
    ctx->pc = 0x7F096170u;
    // 7F096170: lwz     r4, 720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096174:
    ctx->pc = 0x7F096174u;
    // 7F096174: lwz     r5, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096178:
    ctx->pc = 0x7F096178u;
    // 7F096178: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F09617C:
    ctx->pc = 0x7F09617Cu;
    // 7F09617C: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F09617Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096180:
    ctx->pc = 0x7F096180u;
    // 7F096180: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F096184:
    ctx->pc = 0x7F096184u;
    // 7F096184: addi    r3, r5, 768
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(768);

label_7F096188:
    ctx->pc = 0x7F096188u;
    // 7F096188: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F09618C:
    ctx->pc = 0x7F09618Cu;
    // 7F09618C: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F096190:
    ctx->pc = 0x7F096190u;
    // 7F096190: bl      0x7F0940CC
    {
            ctx->lr = 0x7F096194u;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F096194:
    ctx->pc = 0x7F096194u;
    ctx->downcount -= 10;
    // 7F096194: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096198:
    ctx->pc = 0x7F096198u;
    // 7F096198: lwz     r4, 720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F09619C:
    ctx->pc = 0x7F09619Cu;
    // 7F09619C: lwz     r5, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0961A0:
    ctx->pc = 0x7F0961A0u;
    // 7F0961A0: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F0961A4:
    ctx->pc = 0x7F0961A4u;
    // 7F0961A4: lfs     f1, -6308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0961A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0961A8:
    ctx->pc = 0x7F0961A8u;
    // 7F0961A8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0961AC:
    ctx->pc = 0x7F0961ACu;
    // 7F0961AC: addi    r3, r5, 1092
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1092);

label_7F0961B0:
    ctx->pc = 0x7F0961B0u;
    // 7F0961B0: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F0961B4:
    ctx->pc = 0x7F0961B4u;
    // 7F0961B4: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F0961B8:
    ctx->pc = 0x7F0961B8u;
    // 7F0961B8: bl      0x7F0940CC
    {
            ctx->lr = 0x7F0961BCu;
            ctx->pc = 0x7F0940CCu;
            return;
    }

label_7F0961BC:
    ctx->pc = 0x7F0961BCu;
    ctx->downcount -= 4;
    // 7F0961BC: lwz     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0961C0:
    ctx->pc = 0x7F0961C0u;
    // 7F0961C0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0961C4:
    ctx->pc = 0x7F0961C4u;
    // 7F0961C4: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F0961C8:
    ctx->pc = 0x7F0961C8u;
    // 7F0961C8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0961CCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0961CC:
    ctx->pc = 0x7F0961CCu;
    ctx->downcount -= 7;
    // 7F0961CC: stw     r3, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0961D0:
    ctx->pc = 0x7F0961D0u;
    // 7F0961D0: lwz     r3, 2632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0961D4:
    ctx->pc = 0x7F0961D4u;
    // 7F0961D4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0961D8:
    ctx->pc = 0x7F0961D8u;
    // 7F0961D8: stw     r0, 2632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0961DC:
    ctx->pc = 0x7F0961DCu;
    // 7F0961DC: lwz     r0, 2632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0961E0:
    ctx->pc = 0x7F0961E0u;
    // 7F0961E0: cmpwi   r0, 0
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

label_7F0961E4:
    ctx->pc = 0x7F0961E4u;
    // 7F0961E4: bc    4, 1, 0x7F096224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096224;
        }
    }

label_7F0961E8:
    ctx->pc = 0x7F0961E8u;
    ctx->downcount -= 15;
    // 7F0961E8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F0961EC:
    ctx->pc = 0x7F0961ECu;
    // 7F0961EC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0961F0:
    ctx->pc = 0x7F0961F0u;
    // 7F0961F0: stw     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0961F4:
    ctx->pc = 0x7F0961F4u;
    // 7F0961F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0961F8:
    ctx->pc = 0x7F0961F8u;
    // 7F0961F8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0961FC:
    ctx->pc = 0x7F0961FCu;
    // 7F0961FC: li      r6, 750
    ctx->gpr[6] = (u32)(s32)(750);

label_7F096200:
    ctx->pc = 0x7F096200u;
    // 7F096200: stw     r7, 2636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F096204:
    ctx->pc = 0x7F096204u;
    // 7F096204: addi    r5, r4, 28948
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28948);

label_7F096208:
    ctx->pc = 0x7F096208u;
    // 7F096208: addi    r4, r3, 28960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28960);

label_7F09620C:
    ctx->pc = 0x7F09620Cu;
    // 7F09620C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F096210:
    ctx->pc = 0x7F096210u;
    // 7F096210: sth     r6, 2628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F096214:
    ctx->pc = 0x7F096214u;
    // 7F096214: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096218:
    ctx->pc = 0x7F096218u;
    // 7F096218: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F09621C:
    ctx->pc = 0x7F09621Cu;
    // 7F09621C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096220:
    ctx->pc = 0x7F096220u;
    // 7F096220: bl      0x7F0968B4
    {
            ctx->lr = 0x7F096224u;
            goto label_7F0968B4;
    }

label_7F096224:
    ctx->pc = 0x7F096224u;
    ctx->downcount -= 3;
    // 7F096224: lwz     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096228:
    ctx->pc = 0x7F096228u;
    // 7F096228: cmpwi   r0, -1
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

label_7F09622C:
    ctx->pc = 0x7F09622Cu;
    // 7F09622C: bc    4, 2, 0x7F096244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096244;
        }
    }

label_7F096230:
    ctx->pc = 0x7F096230u;
    ctx->downcount -= 5;
    // 7F096230: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F096234:
    ctx->pc = 0x7F096234u;
    // 7F096234: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F096238:
    ctx->pc = 0x7F096238u;
    // 7F096238: addi    r3, r3, 22356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22356);

label_7F09623C:
    ctx->pc = 0x7F09623Cu;
    // 7F09623C: stw     r3, 2676(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096240:
    ctx->pc = 0x7F096240u;
    // 7F096240: stw     r0, 2648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096244:
    ctx->pc = 0x7F096244u;
    ctx->downcount -= 16;
    // 7F096244: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F096248:
    ctx->pc = 0x7F096248u;
    // 7F096248: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09624C:
    ctx->pc = 0x7F09624Cu;
    // 7F09624C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096250:
    ctx->pc = 0x7F096250u;
    // 7F096250: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F096254:
    ctx->pc = 0x7F096254u;
    // 7F096254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096258:
    ctx->pc = 0x7F096258u;
    ctx->downcount -= 6;
    // 7F096258: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09625C:
    ctx->pc = 0x7F09625Cu;
    // 7F09625C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096260:
    ctx->pc = 0x7F096260u;
    // 7F096260: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096264:
    ctx->pc = 0x7F096264u;
    // 7F096264: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F096268:
    ctx->pc = 0x7F096268u;
    // 7F096268: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F09626C:
    ctx->pc = 0x7F09626Cu;
    // 7F09626C: bl      0x7F095490
    {
            ctx->lr = 0x7F096270u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095490u;
                return;
            }
            goto label_7F095490;
    }

label_7F096270:
    ctx->pc = 0x7F096270u;
    ctx->downcount -= 2;
    // 7F096270: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096274:
    ctx->pc = 0x7F096274u;
    // 7F096274: bl      0x7F0954F0
    {
            ctx->lr = 0x7F096278u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F096278:
    ctx->pc = 0x7F096278u;
    ctx->downcount -= 3;
    // 7F096278: lwz     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09627C:
    ctx->pc = 0x7F09627Cu;
    // 7F09627C: cmpwi   r0, 1
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

label_7F096280:
    ctx->pc = 0x7F096280u;
    // 7F096280: bc    12, 2, 0x7F0962F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0962F8;
        }
    }

label_7F096284:
    ctx->pc = 0x7F096284u;
    ctx->downcount -= 1;
    // 7F096284: bc    4, 0, 0x7F096294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096294;
        }
    }

label_7F096288:
    ctx->pc = 0x7F096288u;
    ctx->downcount -= 2;
    // 7F096288: cmpwi   r0, 0
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

label_7F09628C:
    ctx->pc = 0x7F09628Cu;
    // 7F09628C: bc    4, 0, 0x7F0962A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0962A0;
        }
    }

label_7F096290:
    ctx->pc = 0x7F096290u;
    ctx->downcount -= 1;
    // 7F096290: b       0x7F096384
    {
            goto label_7F096384;
    }

label_7F096294:
    ctx->pc = 0x7F096294u;
    ctx->downcount -= 2;
    // 7F096294: cmpwi   r0, 3
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

label_7F096298:
    ctx->pc = 0x7F096298u;
    // 7F096298: bc    4, 0, 0x7F096384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096384;
        }
    }

label_7F09629C:
    ctx->pc = 0x7F09629Cu;
    ctx->downcount -= 1;
    // 7F09629C: b       0x7F096350
    {
            goto label_7F096350;
    }

label_7F0962A0:
    ctx->pc = 0x7F0962A0u;
    ctx->downcount -= 4;
    // 7F0962A0: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0962A4:
    ctx->pc = 0x7F0962A4u;
    // 7F0962A4: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F0962A8:
    ctx->pc = 0x7F0962A8u;
    // 7F0962A8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F0962AC:
    ctx->pc = 0x7F0962ACu;
    // 7F0962AC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0962B0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0962B0:
    ctx->pc = 0x7F0962B0u;
    ctx->downcount -= 7;
    // 7F0962B0: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0962B4:
    ctx->pc = 0x7F0962B4u;
    // 7F0962B4: li      r4, 2000
    ctx->gpr[4] = (u32)(s32)(2000);

label_7F0962B8:
    ctx->pc = 0x7F0962B8u;
    // 7F0962B8: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0962B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0962BC:
    ctx->pc = 0x7F0962BCu;
    // 7F0962BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0962BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0962C0:
    ctx->pc = 0x7F0962C0u;
    // 7F0962C0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0962C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0962C4:
    ctx->pc = 0x7F0962C4u;
    // 7F0962C4: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0962C8:
    ctx->pc = 0x7F0962C8u;
    // 7F0962C8: bl      0x7F0939F8
    {
            ctx->lr = 0x7F0962CCu;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F0962CC:
    ctx->pc = 0x7F0962CCu;
    ctx->downcount -= 2;
    // 7F0962CC: cmpwi   r3, 11
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

label_7F0962D0:
    ctx->pc = 0x7F0962D0u;
    // 7F0962D0: bc    4, 2, 0x7F096384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096384;
        }
    }

label_7F0962D4:
    ctx->pc = 0x7F0962D4u;
    ctx->downcount -= 4;
    // 7F0962D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0962D8:
    ctx->pc = 0x7F0962D8u;
    // 7F0962D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F0962DC:
    ctx->pc = 0x7F0962DCu;
    // 7F0962DC: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0962E0:
    ctx->pc = 0x7F0962E0u;
    // 7F0962E0: bl      0x7F0DC244
    {
            ctx->lr = 0x7F0962E4u;
            ctx->pc = 0x7F0DC244u;
            return;
    }

label_7F0962E4:
    ctx->pc = 0x7F0962E4u;
    ctx->downcount -= 4;
    // 7F0962E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0962E8:
    ctx->pc = 0x7F0962E8u;
    // 7F0962E8: li      r4, 1960
    ctx->gpr[4] = (u32)(s32)(1960);

label_7F0962EC:
    ctx->pc = 0x7F0962ECu;
    // 7F0962EC: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0962F0:
    ctx->pc = 0x7F0962F0u;
    // 7F0962F0: bl      0x7F011A74
    {
            ctx->lr = 0x7F0962F4u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0962F4:
    ctx->pc = 0x7F0962F4u;
    ctx->downcount -= 1;
    // 7F0962F4: b       0x7F096384
    {
            goto label_7F096384;
    }

label_7F0962F8:
    ctx->pc = 0x7F0962F8u;
    ctx->downcount -= 4;
    // 7F0962F8: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0962FC:
    ctx->pc = 0x7F0962FCu;
    // 7F0962FC: li      r4, 1500
    ctx->gpr[4] = (u32)(s32)(1500);

label_7F096300:
    ctx->pc = 0x7F096300u;
    // 7F096300: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F096304:
    ctx->pc = 0x7F096304u;
    // 7F096304: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096308u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096308:
    ctx->pc = 0x7F096308u;
    ctx->downcount -= 7;
    // 7F096308: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F09630C:
    ctx->pc = 0x7F09630Cu;
    // 7F09630C: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F096310:
    ctx->pc = 0x7F096310u;
    // 7F096310: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096310u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096314:
    ctx->pc = 0x7F096314u;
    // 7F096314: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096314u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096318:
    ctx->pc = 0x7F096318u;
    // 7F096318: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F09631C:
    ctx->pc = 0x7F09631Cu;
    // 7F09631C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096320:
    ctx->pc = 0x7F096320u;
    // 7F096320: bl      0x7F0939F8
    {
            ctx->lr = 0x7F096324u;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F096324:
    ctx->pc = 0x7F096324u;
    ctx->downcount -= 2;
    // 7F096324: cmpwi   r3, 13
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

label_7F096328:
    ctx->pc = 0x7F096328u;
    // 7F096328: bc    4, 2, 0x7F096384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096384;
        }
    }

label_7F09632C:
    ctx->pc = 0x7F09632Cu;
    ctx->downcount -= 4;
    // 7F09632C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F096330:
    ctx->pc = 0x7F096330u;
    // 7F096330: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F096334:
    ctx->pc = 0x7F096334u;
    // 7F096334: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096338:
    ctx->pc = 0x7F096338u;
    // 7F096338: bl      0x7F0DC244
    {
            ctx->lr = 0x7F09633Cu;
            ctx->pc = 0x7F0DC244u;
            return;
    }

label_7F09633C:
    ctx->pc = 0x7F09633Cu;
    ctx->downcount -= 4;
    // 7F09633C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F096340:
    ctx->pc = 0x7F096340u;
    // 7F096340: li      r4, 1960
    ctx->gpr[4] = (u32)(s32)(1960);

label_7F096344:
    ctx->pc = 0x7F096344u;
    // 7F096344: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F096348:
    ctx->pc = 0x7F096348u;
    // 7F096348: bl      0x7F011A74
    {
            ctx->lr = 0x7F09634Cu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F09634C:
    ctx->pc = 0x7F09634Cu;
    ctx->downcount -= 1;
    // 7F09634C: b       0x7F096384
    {
            goto label_7F096384;
    }

label_7F096350:
    ctx->pc = 0x7F096350u;
    ctx->downcount -= 4;
    // 7F096350: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096354:
    ctx->pc = 0x7F096354u;
    // 7F096354: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F096358:
    ctx->pc = 0x7F096358u;
    // 7F096358: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F09635C:
    ctx->pc = 0x7F09635Cu;
    // 7F09635C: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096360u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096360:
    ctx->pc = 0x7F096360u;
    ctx->downcount -= 4;
    // 7F096360: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096364:
    ctx->pc = 0x7F096364u;
    // 7F096364: lha     r0, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096368:
    ctx->pc = 0x7F096368u;
    // 7F096368: cmpwi   r0, 750
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(750);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F09636C:
    ctx->pc = 0x7F09636Cu;
    // 7F09636C: bc    4, 2, 0x7F096384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096384;
        }
    }

label_7F096370:
    ctx->pc = 0x7F096370u;
    ctx->downcount -= 5;
    // 7F096370: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F096374:
    ctx->pc = 0x7F096374u;
    // 7F096374: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F096378:
    ctx->pc = 0x7F096378u;
    // 7F096378: addi    r3, r3, 22356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22356);

label_7F09637C:
    ctx->pc = 0x7F09637Cu;
    // 7F09637C: stw     r3, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096380:
    ctx->pc = 0x7F096380u;
    // 7F096380: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096384:
    ctx->pc = 0x7F096384u;
    ctx->downcount -= 5;
    // 7F096384: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096388:
    ctx->pc = 0x7F096388u;
    // 7F096388: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F09638C:
    ctx->pc = 0x7F09638Cu;
    // 7F09638C: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096390:
    ctx->pc = 0x7F096390u;
    // 7F096390: cmpwi   r0, 8
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

label_7F096394:
    ctx->pc = 0x7F096394u;
    // 7F096394: bc    4, 2, 0x7F0963B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0963B4;
        }
    }

label_7F096398:
    ctx->pc = 0x7F096398u;
    ctx->downcount -= 4;
    // 7F096398: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F09639C:
    ctx->pc = 0x7F09639Cu;
    // 7F09639C: lwz     r0, 28952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28952);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0963A0:
    ctx->pc = 0x7F0963A0u;
    // 7F0963A0: cmpwi   r0, 0
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

label_7F0963A4:
    ctx->pc = 0x7F0963A4u;
    // 7F0963A4: bc    12, 2, 0x7F0963B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0963B4;
        }
    }

label_7F0963A8:
    ctx->pc = 0x7F0963A8u;
    ctx->downcount -= 3;
    // 7F0963A8: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F0963AC:
    ctx->pc = 0x7F0963ACu;
    // 7F0963AC: addi    r0, r3, 25544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25544);

label_7F0963B0:
    ctx->pc = 0x7F0963B0u;
    // 7F0963B0: stw     r0, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0963B4:
    ctx->pc = 0x7F0963B4u;
    ctx->downcount -= 6;
    // 7F0963B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0963B8:
    ctx->pc = 0x7F0963B8u;
    // 7F0963B8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0963BC:
    ctx->pc = 0x7F0963BCu;
    // 7F0963BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0963C0:
    ctx->pc = 0x7F0963C0u;
    // 7F0963C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0963C4:
    ctx->pc = 0x7F0963C4u;
    // 7F0963C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0963C8:
    ctx->pc = 0x7F0963C8u;
    ctx->downcount -= 6;
    // 7F0963C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0963CC:
    ctx->pc = 0x7F0963CCu;
    // 7F0963CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0963D0:
    ctx->pc = 0x7F0963D0u;
    // 7F0963D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0963D4:
    ctx->pc = 0x7F0963D4u;
    // 7F0963D4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0963D8:
    ctx->pc = 0x7F0963D8u;
    // 7F0963D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0963DC:
    ctx->pc = 0x7F0963DCu;
    // 7F0963DC: bl      0x7F095490
    {
            ctx->lr = 0x7F0963E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095490u;
                return;
            }
            goto label_7F095490;
    }

label_7F0963E0:
    ctx->pc = 0x7F0963E0u;
    ctx->downcount -= 2;
    // 7F0963E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0963E4:
    ctx->pc = 0x7F0963E4u;
    // 7F0963E4: bl      0x7F0954F0
    {
            ctx->lr = 0x7F0963E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F0963E8:
    ctx->pc = 0x7F0963E8u;
    ctx->downcount -= 3;
    // 7F0963E8: lwz     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0963EC:
    ctx->pc = 0x7F0963ECu;
    // 7F0963EC: cmpwi   r0, 1
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

label_7F0963F0:
    ctx->pc = 0x7F0963F0u;
    // 7F0963F0: bc    12, 2, 0x7F096458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096458;
        }
    }

label_7F0963F4:
    ctx->pc = 0x7F0963F4u;
    ctx->downcount -= 1;
    // 7F0963F4: bc    4, 0, 0x7F096404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096404;
        }
    }

label_7F0963F8:
    ctx->pc = 0x7F0963F8u;
    ctx->downcount -= 2;
    // 7F0963F8: cmpwi   r0, 0
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

label_7F0963FC:
    ctx->pc = 0x7F0963FCu;
    // 7F0963FC: bc    4, 0, 0x7F096410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096410;
        }
    }

label_7F096400:
    ctx->pc = 0x7F096400u;
    ctx->downcount -= 1;
    // 7F096400: b       0x7F096508
    {
            goto label_7F096508;
    }

label_7F096404:
    ctx->pc = 0x7F096404u;
    ctx->downcount -= 2;
    // 7F096404: cmpwi   r0, 3
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

label_7F096408:
    ctx->pc = 0x7F096408u;
    // 7F096408: bc    4, 0, 0x7F096508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096508;
        }
    }

label_7F09640C:
    ctx->pc = 0x7F09640Cu;
    ctx->downcount -= 1;
    // 7F09640C: b       0x7F0964D4
    {
            goto label_7F0964D4;
    }

label_7F096410:
    ctx->pc = 0x7F096410u;
    ctx->downcount -= 4;
    // 7F096410: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096414:
    ctx->pc = 0x7F096414u;
    // 7F096414: li      r4, -750
    ctx->gpr[4] = (u32)(s32)(-750);

label_7F096418:
    ctx->pc = 0x7F096418u;
    // 7F096418: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F09641C:
    ctx->pc = 0x7F09641Cu;
    // 7F09641C: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096420u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096420:
    ctx->pc = 0x7F096420u;
    ctx->downcount -= 7;
    // 7F096420: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096424:
    ctx->pc = 0x7F096424u;
    // 7F096424: li      r4, 2000
    ctx->gpr[4] = (u32)(s32)(2000);

label_7F096428:
    ctx->pc = 0x7F096428u;
    // 7F096428: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096428u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F09642C:
    ctx->pc = 0x7F09642Cu;
    // 7F09642C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09642Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096430:
    ctx->pc = 0x7F096430u;
    // 7F096430: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096430u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096434:
    ctx->pc = 0x7F096434u;
    // 7F096434: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096438:
    ctx->pc = 0x7F096438u;
    // 7F096438: bl      0x7F0939F8
    {
            ctx->lr = 0x7F09643Cu;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F09643C:
    ctx->pc = 0x7F09643Cu;
    ctx->downcount -= 2;
    // 7F09643C: cmpwi   r3, 12
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

label_7F096440:
    ctx->pc = 0x7F096440u;
    // 7F096440: bc    4, 2, 0x7F096508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096508;
        }
    }

label_7F096444:
    ctx->pc = 0x7F096444u;
    ctx->downcount -= 4;
    // 7F096444: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F096448:
    ctx->pc = 0x7F096448u;
    // 7F096448: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F09644C:
    ctx->pc = 0x7F09644Cu;
    // 7F09644C: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096450:
    ctx->pc = 0x7F096450u;
    // 7F096450: bl      0x7F0DC244
    {
            ctx->lr = 0x7F096454u;
            ctx->pc = 0x7F0DC244u;
            return;
    }

label_7F096454:
    ctx->pc = 0x7F096454u;
    ctx->downcount -= 1;
    // 7F096454: b       0x7F096508
    {
            goto label_7F096508;
    }

label_7F096458:
    ctx->pc = 0x7F096458u;
    ctx->downcount -= 4;
    // 7F096458: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09645C:
    ctx->pc = 0x7F09645Cu;
    // 7F09645C: li      r4, -1350
    ctx->gpr[4] = (u32)(s32)(-1350);

label_7F096460:
    ctx->pc = 0x7F096460u;
    // 7F096460: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F096464:
    ctx->pc = 0x7F096464u;
    // 7F096464: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096468u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096468:
    ctx->pc = 0x7F096468u;
    ctx->downcount -= 7;
    // 7F096468: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F09646C:
    ctx->pc = 0x7F09646Cu;
    // 7F09646C: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F096470:
    ctx->pc = 0x7F096470u;
    // 7F096470: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096470u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096474:
    ctx->pc = 0x7F096474u;
    // 7F096474: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096474u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096478:
    ctx->pc = 0x7F096478u;
    // 7F096478: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096478u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F09647C:
    ctx->pc = 0x7F09647Cu;
    // 7F09647C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096480:
    ctx->pc = 0x7F096480u;
    // 7F096480: bl      0x7F0939F8
    {
            ctx->lr = 0x7F096484u;
            ctx->pc = 0x7F0939F8u;
            return;
    }

label_7F096484:
    ctx->pc = 0x7F096484u;
    ctx->downcount -= 2;
    // 7F096484: cmpwi   r3, 14
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F096488:
    ctx->pc = 0x7F096488u;
    // 7F096488: bc    4, 2, 0x7F09649C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09649C;
        }
    }

label_7F09648C:
    ctx->pc = 0x7F09648Cu;
    ctx->downcount -= 4;
    // 7F09648C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F096490:
    ctx->pc = 0x7F096490u;
    // 7F096490: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F096494:
    ctx->pc = 0x7F096494u;
    // 7F096494: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096498:
    ctx->pc = 0x7F096498u;
    // 7F096498: bl      0x7F0DC244
    {
            ctx->lr = 0x7F09649Cu;
            ctx->pc = 0x7F0DC244u;
            return;
    }

label_7F09649C:
    ctx->pc = 0x7F09649Cu;
    ctx->downcount -= 7;
    // 7F09649C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0964A0:
    ctx->pc = 0x7F0964A0u;
    // 7F0964A0: addi    r4, r3, 28956
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28956);

label_7F0964A4:
    ctx->pc = 0x7F0964A4u;
    // 7F0964A4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0964A8:
    ctx->pc = 0x7F0964A8u;
    // 7F0964A8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0964AC:
    ctx->pc = 0x7F0964ACu;
    // 7F0964AC: cmpwi   r0, 18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0964B0:
    ctx->pc = 0x7F0964B0u;
    // 7F0964B0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0964B4:
    ctx->pc = 0x7F0964B4u;
    // 7F0964B4: bc    4, 1, 0x7F096508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096508;
        }
    }

label_7F0964B8:
    ctx->pc = 0x7F0964B8u;
    ctx->downcount -= 6;
    // 7F0964B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0964BC:
    ctx->pc = 0x7F0964BCu;
    // 7F0964BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0964C0:
    ctx->pc = 0x7F0964C0u;
    // 7F0964C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0964C4:
    ctx->pc = 0x7F0964C4u;
    // 7F0964C4: li      r4, 1959
    ctx->gpr[4] = (u32)(s32)(1959);

label_7F0964C8:
    ctx->pc = 0x7F0964C8u;
    // 7F0964C8: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0964CC:
    ctx->pc = 0x7F0964CCu;
    // 7F0964CC: bl      0x7F011A74
    {
            ctx->lr = 0x7F0964D0u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0964D0:
    ctx->pc = 0x7F0964D0u;
    ctx->downcount -= 1;
    // 7F0964D0: b       0x7F096508
    {
            goto label_7F096508;
    }

label_7F0964D4:
    ctx->pc = 0x7F0964D4u;
    ctx->downcount -= 4;
    // 7F0964D4: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0964D8:
    ctx->pc = 0x7F0964D8u;
    // 7F0964D8: li      r4, -750
    ctx->gpr[4] = (u32)(s32)(-750);

label_7F0964DC:
    ctx->pc = 0x7F0964DCu;
    // 7F0964DC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F0964E0:
    ctx->pc = 0x7F0964E0u;
    // 7F0964E0: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0964E4u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0964E4:
    ctx->pc = 0x7F0964E4u;
    ctx->downcount -= 4;
    // 7F0964E4: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0964E8:
    ctx->pc = 0x7F0964E8u;
    // 7F0964E8: lha     r0, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0964EC:
    ctx->pc = 0x7F0964ECu;
    // 7F0964EC: cmpwi   r0, -750
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-750);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0964F0:
    ctx->pc = 0x7F0964F0u;
    // 7F0964F0: bc    4, 2, 0x7F096508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096508;
        }
    }

label_7F0964F4:
    ctx->pc = 0x7F0964F4u;
    ctx->downcount -= 5;
    // 7F0964F4: lis     r3, 32521
    ctx->gpr[3] = ((u32)(s32)(32521) << 16);

label_7F0964F8:
    ctx->pc = 0x7F0964F8u;
    // 7F0964F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0964FC:
    ctx->pc = 0x7F0964FCu;
    // 7F0964FC: addi    r3, r3, 25884
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25884);

label_7F096500:
    ctx->pc = 0x7F096500u;
    // 7F096500: stw     r3, 2676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096504:
    ctx->pc = 0x7F096504u;
    // 7F096504: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096508:
    ctx->pc = 0x7F096508u;
    ctx->downcount -= 6;
    // 7F096508: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09650C:
    ctx->pc = 0x7F09650Cu;
    // 7F09650C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F096510:
    ctx->pc = 0x7F096510u;
    // 7F096510: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096514:
    ctx->pc = 0x7F096514u;
    // 7F096514: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F096518:
    ctx->pc = 0x7F096518u;
    // 7F096518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09651C:
    ctx->pc = 0x7F09651Cu;
    ctx->downcount -= 6;
    // 7F09651C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096520:
    ctx->pc = 0x7F096520u;
    // 7F096520: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096524:
    ctx->pc = 0x7F096524u;
    // 7F096524: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096528:
    ctx->pc = 0x7F096528u;
    // 7F096528: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F09652C:
    ctx->pc = 0x7F09652Cu;
    // 7F09652C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096530:
    ctx->pc = 0x7F096530u;
    // 7F096530: bl      0x7F095490
    {
            ctx->lr = 0x7F096534u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F095490u;
                return;
            }
            goto label_7F095490;
    }

label_7F096534:
    ctx->pc = 0x7F096534u;
    ctx->downcount -= 2;
    // 7F096534: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096538:
    ctx->pc = 0x7F096538u;
    // 7F096538: bl      0x7F0954F0
    {
            ctx->lr = 0x7F09653Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0954F0u;
                return;
            }
            goto label_7F0954F0;
    }

label_7F09653C:
    ctx->pc = 0x7F09653Cu;
    ctx->downcount -= 3;
    // 7F09653C: lwz     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096540:
    ctx->pc = 0x7F096540u;
    // 7F096540: cmpwi   r0, 2
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

label_7F096544:
    ctx->pc = 0x7F096544u;
    // 7F096544: bc    12, 2, 0x7F09659C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09659C;
        }
    }

label_7F096548:
    ctx->pc = 0x7F096548u;
    ctx->downcount -= 1;
    // 7F096548: bc    4, 0, 0x7F096608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096608;
        }
    }

label_7F09654C:
    ctx->pc = 0x7F09654Cu;
    ctx->downcount -= 2;
    // 7F09654C: cmpwi   r0, 0
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

label_7F096550:
    ctx->pc = 0x7F096550u;
    // 7F096550: bc    4, 0, 0x7F096558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096558;
        }
    }

label_7F096554:
    ctx->pc = 0x7F096554u;
    ctx->downcount -= 1;
    // 7F096554: b       0x7F096608
    {
            goto label_7F096608;
    }

label_7F096558:
    ctx->pc = 0x7F096558u;
    ctx->downcount -= 7;
    // 7F096558: li      r0, -1000
    ctx->gpr[0] = (u32)(s32)(-1000);

label_7F09655C:
    ctx->pc = 0x7F09655Cu;
    // 7F09655C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096560:
    ctx->pc = 0x7F096560u;
    // 7F096560: sth     r0, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096564:
    ctx->pc = 0x7F096564u;
    // 7F096564: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F096568:
    ctx->pc = 0x7F096568u;
    // 7F096568: lwz     r3, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09656C:
    ctx->pc = 0x7F09656Cu;
    // 7F09656C: rlwinm. r0, r3, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F096570:
    ctx->pc = 0x7F096570u;
    // 7F096570: bc    12, 2, 0x7F096584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096584;
        }
    }

label_7F096574:
    ctx->pc = 0x7F096574u;
    ctx->downcount -= 4;
    // 7F096574: rlwinm r3, r3, 0, 30, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_7F096578:
    ctx->pc = 0x7F096578u;
    // 7F096578: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F09657C:
    ctx->pc = 0x7F09657Cu;
    // 7F09657C: stw     r3, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096580:
    ctx->pc = 0x7F096580u;
    // 7F096580: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096584:
    ctx->pc = 0x7F096584u;
    ctx->downcount -= 4;
    // 7F096584: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096588:
    ctx->pc = 0x7F096588u;
    // 7F096588: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F09658C:
    ctx->pc = 0x7F09658Cu;
    // 7F09658C: lha     r4, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096590:
    ctx->pc = 0x7F096590u;
    // 7F096590: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096594u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096594:
    ctx->pc = 0x7F096594u;
    ctx->downcount -= 2;
    // 7F096594: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096598:
    ctx->pc = 0x7F096598u;
    // 7F096598: b       0x7F096608
    {
            goto label_7F096608;
    }

label_7F09659C:
    ctx->pc = 0x7F09659Cu;
    ctx->downcount -= 7;
    // 7F09659C: li      r0, -1125
    ctx->gpr[0] = (u32)(s32)(-1125);

label_7F0965A0:
    ctx->pc = 0x7F0965A0u;
    // 7F0965A0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0965A4:
    ctx->pc = 0x7F0965A4u;
    // 7F0965A4: sth     r0, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0965A8:
    ctx->pc = 0x7F0965A8u;
    // 7F0965A8: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0965AC:
    ctx->pc = 0x7F0965ACu;
    // 7F0965AC: lwz     r3, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0965B0:
    ctx->pc = 0x7F0965B0u;
    // 7F0965B0: rlwinm. r0, r3, 0, 28, 28
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

label_7F0965B4:
    ctx->pc = 0x7F0965B4u;
    // 7F0965B4: bc    12, 2, 0x7F0965C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0965C8;
        }
    }

label_7F0965B8:
    ctx->pc = 0x7F0965B8u;
    ctx->downcount -= 4;
    // 7F0965B8: rlwinm r3, r3, 0, 29, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF7u;
    }

label_7F0965BC:
    ctx->pc = 0x7F0965BCu;
    // 7F0965BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0965C0:
    ctx->pc = 0x7F0965C0u;
    // 7F0965C0: stw     r3, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0965C4:
    ctx->pc = 0x7F0965C4u;
    // 7F0965C4: stw     r0, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0965C8:
    ctx->pc = 0x7F0965C8u;
    ctx->downcount -= 3;
    // 7F0965C8: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0965CC:
    ctx->pc = 0x7F0965CCu;
    // 7F0965CC: rlwinm. r0, r0, 0, 27, 27
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

label_7F0965D0:
    ctx->pc = 0x7F0965D0u;
    // 7F0965D0: bc    12, 2, 0x7F0965F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0965F4;
        }
    }

label_7F0965D4:
    ctx->pc = 0x7F0965D4u;
    ctx->downcount -= 6;
    // 7F0965D4: li      r0, -1275
    ctx->gpr[0] = (u32)(s32)(-1275);

label_7F0965D8:
    ctx->pc = 0x7F0965D8u;
    // 7F0965D8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F0965DC:
    ctx->pc = 0x7F0965DCu;
    // 7F0965DC: sth     r0, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0965E0:
    ctx->pc = 0x7F0965E0u;
    // 7F0965E0: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0965E4:
    ctx->pc = 0x7F0965E4u;
    // 7F0965E4: lha     r4, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0965E8:
    ctx->pc = 0x7F0965E8u;
    // 7F0965E8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0965ECu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0965EC:
    ctx->pc = 0x7F0965ECu;
    ctx->downcount -= 2;
    // 7F0965EC: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0965F0:
    ctx->pc = 0x7F0965F0u;
    // 7F0965F0: b       0x7F096608
    {
            goto label_7F096608;
    }

label_7F0965F4:
    ctx->pc = 0x7F0965F4u;
    ctx->downcount -= 4;
    // 7F0965F4: lha     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0965F8:
    ctx->pc = 0x7F0965F8u;
    // 7F0965F8: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F0965FC:
    ctx->pc = 0x7F0965FCu;
    // 7F0965FC: lha     r4, 2630(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2630);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096600:
    ctx->pc = 0x7F096600u;
    // 7F096600: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096604u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096604:
    ctx->pc = 0x7F096604u;
    ctx->downcount -= 1;
    // 7F096604: sth     r3, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096608:
    ctx->pc = 0x7F096608u;
    ctx->downcount -= 6;
    // 7F096608: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09660C:
    ctx->pc = 0x7F09660Cu;
    // 7F09660C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F096610:
    ctx->pc = 0x7F096610u;
    // 7F096610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096614:
    ctx->pc = 0x7F096614u;
    // 7F096614: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096618:
    ctx->pc = 0x7F096618u;
    // 7F096618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09661C:
    ctx->pc = 0x7F09661Cu;
    ctx->downcount -= 5;
    // 7F09661C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096620:
    ctx->pc = 0x7F096620u;
    // 7F096620: addi    r3, r3, 28964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28964);

label_7F096624:
    ctx->pc = 0x7F096624u;
    // 7F096624: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096628:
    ctx->pc = 0x7F096628u;
    // 7F096628: lwz     r3, 2636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09662C:
    ctx->pc = 0x7F09662Cu;
    // 7F09662C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096630:
    ctx->pc = 0x7F096630u;
    ctx->downcount -= 8;
    // 7F096630: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096634:
    ctx->pc = 0x7F096634u;
    // 7F096634: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096638:
    ctx->pc = 0x7F096638u;
    // 7F096638: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F09663C:
    ctx->pc = 0x7F09663Cu;
    // 7F09663C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096640:
    ctx->pc = 0x7F096640u;
    // 7F096640: lwz     r5, 28964(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28964);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096644:
    ctx->pc = 0x7F096644u;
    // 7F096644: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096648:
    ctx->pc = 0x7F096648u;
    // 7F096648: addi    r3, r5, 64
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(64);

label_7F09664C:
    ctx->pc = 0x7F09664Cu;
    // 7F09664C: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F096650u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F096650:
    ctx->pc = 0x7F096650u;
    ctx->downcount -= 9;
    // 7F096650: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096654:
    ctx->pc = 0x7F096654u;
    // 7F096654: addi    r3, r3, 28964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28964);

label_7F096658:
    ctx->pc = 0x7F096658u;
    // 7F096658: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09665C:
    ctx->pc = 0x7F09665Cu;
    // 7F09665C: lha     r3, 2628(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2628);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096660:
    ctx->pc = 0x7F096660u;
    // 7F096660: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096664:
    ctx->pc = 0x7F096664u;
    // 7F096664: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096668:
    ctx->pc = 0x7F096668u;
    // 7F096668: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09666C:
    ctx->pc = 0x7F09666Cu;
    // 7F09666C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096670:
    ctx->pc = 0x7F096670u;
    ctx->downcount -= 6;
    // 7F096670: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096674:
    ctx->pc = 0x7F096674u;
    // 7F096674: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F096678:
    ctx->pc = 0x7F096678u;
    // 7F096678: lwz     r0, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09667C:
    ctx->pc = 0x7F09667Cu;
    // 7F09667C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F096680:
    ctx->pc = 0x7F096680u;
    // 7F096680: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F096684:
    ctx->pc = 0x7F096684u;
    // 7F096684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096688:
    ctx->pc = 0x7F096688u;
    ctx->downcount -= 66;
    // 7F096688: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09668C:
    ctx->pc = 0x7F09668Cu;
    // 7F09668C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096690:
    ctx->pc = 0x7F096690u;
    // 7F096690: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F096694:
    ctx->pc = 0x7F096694u;
    // 7F096694: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F096698:
    ctx->pc = 0x7F096698u;
    // 7F096698: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09669C:
    ctx->pc = 0x7F09669Cu;
    // 7F09669C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0966A0:
    ctx->pc = 0x7F0966A0u;
    // 7F0966A0: lfd     f1, -6656(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0966A0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6656);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0966A4:
    ctx->pc = 0x7F0966A4u;
    // 7F0966A4: stmw     r22, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0966A8:
    ctx->pc = 0x7F0966A8u;
    // 7F0966A8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0966AC:
    ctx->pc = 0x7F0966ACu;
    // 7F0966AC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0966B0:
    ctx->pc = 0x7F0966B0u;
    // 7F0966B0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0966B4:
    ctx->pc = 0x7F0966B4u;
    // 7F0966B4: stw     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0966B8:
    ctx->pc = 0x7F0966B8u;
    // 7F0966B8: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0966BC:
    ctx->pc = 0x7F0966BCu;
    // 7F0966BC: addi    r8, r6, 12832
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F0966C0:
    ctx->pc = 0x7F0966C0u;
    // 7F0966C0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0966C4:
    ctx->pc = 0x7F0966C4u;
    // 7F0966C4: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0966C8:
    ctx->pc = 0x7F0966C8u;
    // 7F0966C8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0966CC:
    ctx->pc = 0x7F0966CCu;
    // 7F0966CC: addi    r11, r6, -6236
    ctx->gpr[11] = ctx->gpr[6] + (u32)(s32)(-6236);

label_7F0966D0:
    ctx->pc = 0x7F0966D0u;
    // 7F0966D0: or   r3, r8, r8
    {
        ctx->gpr[3] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0966D4:
    ctx->pc = 0x7F0966D4u;
    // 7F0966D4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0966D8:
    ctx->pc = 0x7F0966D8u;
    // 7F0966D8: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0966D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0966DC:
    ctx->pc = 0x7F0966DCu;
    // 7F0966DC: addi    r10, r6, -6220
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-6220);

label_7F0966E0:
    ctx->pc = 0x7F0966E0u;
    // 7F0966E0: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0966E4:
    ctx->pc = 0x7F0966E4u;
    // 7F0966E4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0966E4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0966E8:
    ctx->pc = 0x7F0966E8u;
    // 7F0966E8: lwzu     r5, 12808(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12808);
        ctx->gpr[5] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F0966EC:
    ctx->pc = 0x7F0966ECu;
    // 7F0966EC: lwz     r9, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0966F0:
    ctx->pc = 0x7F0966F0u;
    // 7F0966F0: lwz     r22, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F0966F4:
    ctx->pc = 0x7F0966F4u;
    // 7F0966F4: lwz     r23, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F0966F8:
    ctx->pc = 0x7F0966F8u;
    // 7F0966F8: lwz     r24, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F0966FC:
    ctx->pc = 0x7F0966FCu;
    // 7F0966FC: lwz     r25, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F096700:
    ctx->pc = 0x7F096700u;
    // 7F096700: lwz     r26, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F096704:
    ctx->pc = 0x7F096704u;
    // 7F096704: lwz     r27, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F096708:
    ctx->pc = 0x7F096708u;
    // 7F096708: lwz     r28, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F09670C:
    ctx->pc = 0x7F09670Cu;
    // 7F09670C: lwz     r12, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F096710:
    ctx->pc = 0x7F096710u;
    // 7F096710: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F096714:
    ctx->pc = 0x7F096714u;
    // 7F096714: lwz     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F096718:
    ctx->pc = 0x7F096718u;
    // 7F096718: lwz     r8, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F09671C:
    ctx->pc = 0x7F09671Cu;
    // 7F09671C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096720:
    ctx->pc = 0x7F096720u;
    // 7F096720: stw     r9, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F096724:
    ctx->pc = 0x7F096724u;
    // 7F096724: stw     r22, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F096728:
    ctx->pc = 0x7F096728u;
    // 7F096728: stw     r23, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F09672C:
    ctx->pc = 0x7F09672Cu;
    // 7F09672C: stw     r24, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F096730:
    ctx->pc = 0x7F096730u;
    // 7F096730: stw     r25, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F096734:
    ctx->pc = 0x7F096734u;
    // 7F096734: stw     r26, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F096738:
    ctx->pc = 0x7F096738u;
    // 7F096738: stw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F09673C:
    ctx->pc = 0x7F09673Cu;
    // 7F09673C: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F096740:
    ctx->pc = 0x7F096740u;
    // 7F096740: stw     r12, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F096744:
    ctx->pc = 0x7F096744u;
    // 7F096744: stw     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F096748:
    ctx->pc = 0x7F096748u;
    // 7F096748: stw     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F09674C:
    ctx->pc = 0x7F09674Cu;
    // 7F09674C: stw     r8, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F096750:
    ctx->pc = 0x7F096750u;
    // 7F096750: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096754:
    ctx->pc = 0x7F096754u;
    // 7F096754: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F096758:
    ctx->pc = 0x7F096758u;
    // 7F096758: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09675C:
    ctx->pc = 0x7F09675Cu;
    // 7F09675C: lha     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096760:
    ctx->pc = 0x7F096760u;
    // 7F096760: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096764:
    ctx->pc = 0x7F096764u;
    // 7F096764: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F096768u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F096768:
    ctx->pc = 0x7F096768u;
    ctx->downcount -= 4;
    // 7F096768: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09676C:
    ctx->pc = 0x7F09676Cu;
    // 7F09676C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F096770:
    ctx->pc = 0x7F096770u;
    // 7F096770: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096774:
    ctx->pc = 0x7F096774u;
    // 7F096774: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F096778u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F096778:
    ctx->pc = 0x7F096778u;
    ctx->downcount -= 4;
    // 7F096778: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F09677C:
    ctx->pc = 0x7F09677Cu;
    // 7F09677C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F096780:
    ctx->pc = 0x7F096780u;
    // 7F096780: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F096784:
    ctx->pc = 0x7F096784u;
    // 7F096784: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F096788u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F096788:
    ctx->pc = 0x7F096788u;
    ctx->downcount -= 2;
    // 7F096788: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09678C:
    ctx->pc = 0x7F09678Cu;
    // 7F09678C: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F096790u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F096790:
    ctx->pc = 0x7F096790u;
    ctx->downcount -= 34;
    // 7F096790: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F096794:
    ctx->pc = 0x7F096794u;
    // 7F096794: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F096798:
    ctx->pc = 0x7F096798u;
    // 7F096798: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F09679C:
    ctx->pc = 0x7F09679Cu;
    // 7F09679C: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0967A0:
    ctx->pc = 0x7F0967A0u;
    // 7F0967A0: addi    r5, r4, -6656
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6656);

label_7F0967A4:
    ctx->pc = 0x7F0967A4u;
    // 7F0967A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0967A8:
    ctx->pc = 0x7F0967A8u;
    // 7F0967A8: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0967AC:
    ctx->pc = 0x7F0967ACu;
    // 7F0967AC: addi    r4, r3, -6672
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6672);

label_7F0967B0:
    ctx->pc = 0x7F0967B0u;
    // 7F0967B0: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0967B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0967B4:
    ctx->pc = 0x7F0967B4u;
    // 7F0967B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0967B8:
    ctx->pc = 0x7F0967B8u;
    // 7F0967B8: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0967B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0967BC:
    ctx->pc = 0x7F0967BCu;
    // 7F0967BC: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0967BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0967C0:
    ctx->pc = 0x7F0967C0u;
    // 7F0967C0: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0967C0u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F0967C4:
    ctx->pc = 0x7F0967C4u;
    // 7F0967C4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0967C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0967C8:
    ctx->pc = 0x7F0967C8u;
    // 7F0967C8: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0967C8u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_7F0967CC:
    ctx->pc = 0x7F0967CCu;
    // 7F0967CC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0967CCu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F0967D0:
    ctx->pc = 0x7F0967D0u;
    // 7F0967D0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0967D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0967D4:
    ctx->pc = 0x7F0967D4u;
    // 7F0967D4: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F0967D8u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F0967D8:
    ctx->pc = 0x7F0967D8u;
    ctx->downcount -= 35;
    // 7F0967D8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0967DC:
    ctx->pc = 0x7F0967DCu;
    // 7F0967DC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0967E0:
    ctx->pc = 0x7F0967E0u;
    // 7F0967E0: stw     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0967E4:
    ctx->pc = 0x7F0967E4u;
    // 7F0967E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0967E8:
    ctx->pc = 0x7F0967E8u;
    // 7F0967E8: lfd     f2, -6656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0967E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6656);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0967EC:
    ctx->pc = 0x7F0967ECu;
    // 7F0967EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0967F0:
    ctx->pc = 0x7F0967F0u;
    // 7F0967F0: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0967F4:
    ctx->pc = 0x7F0967F4u;
    // 7F0967F4: addi    r6, r3, -6672
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6672);

label_7F0967F8:
    ctx->pc = 0x7F0967F8u;
    // 7F0967F8: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0967F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0967FC:
    ctx->pc = 0x7F0967FCu;
    // 7F0967FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F096800:
    ctx->pc = 0x7F096800u;
    // 7F096800: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096800u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F096804:
    ctx->pc = 0x7F096804u;
    // 7F096804: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F096808:
    ctx->pc = 0x7F096808u;
    // 7F096808: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F09680C:
    ctx->pc = 0x7F09680Cu;
    // 7F09680C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F09680Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F096810:
    ctx->pc = 0x7F096810u;
    // 7F096810: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F096810u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096814:
    ctx->pc = 0x7F096814u;
    // 7F096814: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F096814u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_7F096818:
    ctx->pc = 0x7F096818u;
    // 7F096818: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096818u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F09681C:
    ctx->pc = 0x7F09681Cu;
    // 7F09681C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09681Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096820:
    ctx->pc = 0x7F096820u;
    // 7F096820: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F096824u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F096824:
    ctx->pc = 0x7F096824u;
    ctx->downcount -= 6;
    // 7F096824: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F096828:
    ctx->pc = 0x7F096828u;
    // 7F096828: sth     r31, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F09682C:
    ctx->pc = 0x7F09682Cu;
    // 7F09682C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F096830:
    ctx->pc = 0x7F096830u;
    // 7F096830: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F096834:
    ctx->pc = 0x7F096834u;
    // 7F096834: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F096838:
    ctx->pc = 0x7F096838u;
    // 7F096838: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F09683Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F09683C:
    ctx->pc = 0x7F09683Cu;
    ctx->downcount -= 3;
    // 7F09683C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F096840:
    ctx->pc = 0x7F096840u;
    // 7F096840: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F096844:
    ctx->pc = 0x7F096844u;
    // 7F096844: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F096848u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F096848:
    ctx->pc = 0x7F096848u;
    ctx->downcount -= 4;
    // 7F096848: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F09684C:
    ctx->pc = 0x7F09684Cu;
    // 7F09684C: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F096850:
    ctx->pc = 0x7F096850u;
    // 7F096850: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F096854:
    ctx->pc = 0x7F096854u;
    // 7F096854: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F096858u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F096858:
    ctx->pc = 0x7F096858u;
    ctx->downcount -= 4;
    // 7F096858: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F09685C:
    ctx->pc = 0x7F09685Cu;
    // 7F09685C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096860:
    ctx->pc = 0x7F096860u;
    // 7F096860: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F096864:
    ctx->pc = 0x7F096864u;
    // 7F096864: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F096868u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F096868:
    ctx->pc = 0x7F096868u;
    ctx->downcount -= 4;
    // 7F096868: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F09686C:
    ctx->pc = 0x7F09686Cu;
    // 7F09686C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F096870:
    ctx->pc = 0x7F096870u;
    // 7F096870: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096874:
    ctx->pc = 0x7F096874u;
    // 7F096874: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F096878u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F096878:
    ctx->pc = 0x7F096878u;
    ctx->downcount -= 9;
    // 7F096878: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F09687C:
    ctx->pc = 0x7F09687Cu;
    // 7F09687C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09687Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096880:
    ctx->pc = 0x7F096880u;
    // 7F096880: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F096880u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F096884:
    ctx->pc = 0x7F096884u;
    // 7F096884: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096884u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096888:
    ctx->pc = 0x7F096888u;
    // 7F096888: stfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F09688C:
    ctx->pc = 0x7F09688Cu;
    // 7F09688C: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09688Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096890:
    ctx->pc = 0x7F096890u;
    // 7F096890: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096894:
    ctx->pc = 0x7F096894u;
    // 7F096894: lwz     r4, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096898:
    ctx->pc = 0x7F096898u;
    // 7F096898: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F09689Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F09689C:
    ctx->pc = 0x7F09689Cu;
    ctx->downcount -= 17;
    // 7F09689C: sth     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0968A0:
    ctx->pc = 0x7F0968A0u;
    // 7F0968A0: lmw     r22, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0968A4:
    ctx->pc = 0x7F0968A4u;
    // 7F0968A4: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0968A8:
    ctx->pc = 0x7F0968A8u;
    // 7F0968A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0968AC:
    ctx->pc = 0x7F0968ACu;
    // 7F0968AC: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F0968B0:
    ctx->pc = 0x7F0968B0u;
    // 7F0968B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0968B4:
    ctx->pc = 0x7F0968B4u;
    ctx->downcount -= 9;
    // 7F0968B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0968B8:
    ctx->pc = 0x7F0968B8u;
    // 7F0968B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0968BC:
    ctx->pc = 0x7F0968BCu;
    // 7F0968BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0968C0:
    ctx->pc = 0x7F0968C0u;
    // 7F0968C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0968C4:
    ctx->pc = 0x7F0968C4u;
    // 7F0968C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0968C8:
    ctx->pc = 0x7F0968C8u;
    // 7F0968C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0968CC:
    ctx->pc = 0x7F0968CCu;
    // 7F0968CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0968D0:
    ctx->pc = 0x7F0968D0u;
    // 7F0968D0: lwz     r3, 2772(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2772);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0968D4:
    ctx->pc = 0x7F0968D4u;
    // 7F0968D4: bl      0x80051BB0
    {
            ctx->lr = 0x7F0968D8u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0968D8:
    ctx->pc = 0x7F0968D8u;
    ctx->downcount -= 2;
    // 7F0968D8: cmpwi   r3, 0
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

label_7F0968DC:
    ctx->pc = 0x7F0968DCu;
    // 7F0968DC: bc    4, 2, 0x7F0968FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0968FC;
        }
    }

label_7F0968E0:
    ctx->pc = 0x7F0968E0u;
    ctx->downcount -= 6;
    // 7F0968E0: li      r3, 1958
    ctx->gpr[3] = (u32)(s32)(1958);

label_7F0968E4:
    ctx->pc = 0x7F0968E4u;
    // 7F0968E4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0968E8:
    ctx->pc = 0x7F0968E8u;
    // 7F0968E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0968EC:
    ctx->pc = 0x7F0968ECu;
    // 7F0968EC: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_7F0968F0:
    ctx->pc = 0x7F0968F0u;
    // 7F0968F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0968F4:
    ctx->pc = 0x7F0968F4u;
    // 7F0968F4: bl      0x7F011848
    {
            ctx->lr = 0x7F0968F8u;
            ctx->pc = 0x7F011848u;
            return;
    }

label_7F0968F8:
    ctx->pc = 0x7F0968F8u;
    ctx->downcount -= 1;
    // 7F0968F8: stw     r3, 2772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2772);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0968FC:
    ctx->pc = 0x7F0968FCu;
    ctx->downcount -= 6;
    // 7F0968FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096900:
    ctx->pc = 0x7F096900u;
    // 7F096900: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F096904:
    ctx->pc = 0x7F096904u;
    // 7F096904: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096908:
    ctx->pc = 0x7F096908u;
    // 7F096908: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09690C:
    ctx->pc = 0x7F09690Cu;
    // 7F09690C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096910:
    ctx->pc = 0x7F096910u;
    ctx->downcount -= 12;
    // 7F096910: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096914:
    ctx->pc = 0x7F096914u;
    // 7F096914: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096918:
    ctx->pc = 0x7F096918u;
    // 7F096918: li      r4, 1958
    ctx->gpr[4] = (u32)(s32)(1958);

label_7F09691C:
    ctx->pc = 0x7F09691Cu;
    // 7F09691C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F096920:
    ctx->pc = 0x7F096920u;
    // 7F096920: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096924:
    ctx->pc = 0x7F096924u;
    // 7F096924: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F096928:
    ctx->pc = 0x7F096928u;
    // 7F096928: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F09692C:
    ctx->pc = 0x7F09692Cu;
    // 7F09692C: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F096930:
    ctx->pc = 0x7F096930u;
    // 7F096930: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F096934:
    ctx->pc = 0x7F096934u;
    // 7F096934: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096938:
    ctx->pc = 0x7F096938u;
    // 7F096938: li      r3, 1958
    ctx->gpr[3] = (u32)(s32)(1958);

label_7F09693C:
    ctx->pc = 0x7F09693Cu;
    // 7F09693C: bl      0x800516D4
    {
            ctx->lr = 0x7F096940u;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F096940:
    ctx->pc = 0x7F096940u;
    ctx->downcount -= 8;
    // 7F096940: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F096944:
    ctx->pc = 0x7F096944u;
    // 7F096944: stw     r0, 2772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2772);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096948:
    ctx->pc = 0x7F096948u;
    // 7F096948: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09694C:
    ctx->pc = 0x7F09694Cu;
    // 7F09694C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F096950:
    ctx->pc = 0x7F096950u;
    // 7F096950: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096954:
    ctx->pc = 0x7F096954u;
    // 7F096954: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096958:
    ctx->pc = 0x7F096958u;
    // 7F096958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09695C:
    ctx->pc = 0x7F09695Cu;
    ctx->downcount -= 2;
    // 7F09695C: cmpwi   r3, 0
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

label_7F096960:
    ctx->pc = 0x7F096960u;
    // 7F096960: bc    12, 2, 0x7F096978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096978;
        }
    }

label_7F096964:
    ctx->pc = 0x7F096964u;
    ctx->downcount -= 5;
    // 7F096964: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096968:
    ctx->pc = 0x7F096968u;
    // 7F096968: addi    r3, r3, 28964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28964);

label_7F09696C:
    ctx->pc = 0x7F09696Cu;
    // 7F09696C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096970:
    ctx->pc = 0x7F096970u;
    // 7F096970: addi    r3, r3, 2148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2148);

label_7F096974:
    ctx->pc = 0x7F096974u;
    // 7F096974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096978:
    ctx->pc = 0x7F096978u;
    ctx->downcount -= 5;
    // 7F096978: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F09697C:
    ctx->pc = 0x7F09697Cu;
    // 7F09697C: addi    r3, r3, 28964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28964);

label_7F096980:
    ctx->pc = 0x7F096980u;
    // 7F096980: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096984:
    ctx->pc = 0x7F096984u;
    // 7F096984: addi    r3, r3, 2132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2132);

label_7F096988:
    ctx->pc = 0x7F096988u;
    // 7F096988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09698C:
    ctx->pc = 0x7F09698Cu;
    ctx->downcount -= 9;
    // 7F09698C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096990:
    ctx->pc = 0x7F096990u;
    // 7F096990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096994:
    ctx->pc = 0x7F096994u;
    // 7F096994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F096998:
    ctx->pc = 0x7F096998u;
    // 7F096998: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F09699C:
    ctx->pc = 0x7F09699Cu;
    // 7F09699C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0969A0:
    ctx->pc = 0x7F0969A0u;
    // 7F0969A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0969A4:
    ctx->pc = 0x7F0969A4u;
    // 7F0969A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0969A8:
    ctx->pc = 0x7F0969A8u;
    // 7F0969A8: lwz     r3, 2772(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2772);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0969AC:
    ctx->pc = 0x7F0969ACu;
    // 7F0969AC: bl      0x80051BB0
    {
            ctx->lr = 0x7F0969B0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0969B0:
    ctx->pc = 0x7F0969B0u;
    ctx->downcount -= 2;
    // 7F0969B0: cmpwi   r3, 0
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

label_7F0969B4:
    ctx->pc = 0x7F0969B4u;
    // 7F0969B4: bc    12, 2, 0x7F0969F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0969F0;
        }
    }

label_7F0969B8:
    ctx->pc = 0x7F0969B8u;
    ctx->downcount -= 3;
    // 7F0969B8: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0969BC:
    ctx->pc = 0x7F0969BCu;
    // 7F0969BC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0969C0:
    ctx->pc = 0x7F0969C0u;
    // 7F0969C0: bl      0x7F011718
    {
            ctx->lr = 0x7F0969C4u;
            ctx->pc = 0x7F011718u;
            return;
    }

label_7F0969C4:
    ctx->pc = 0x7F0969C4u;
    ctx->downcount -= 3;
    // 7F0969C4: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F0969C8:
    ctx->pc = 0x7F0969C8u;
    // 7F0969C8: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F0969CC:
    ctx->pc = 0x7F0969CCu;
    // 7F0969CC: bl      0x7F011FD4
    {
            ctx->lr = 0x7F0969D0u;
            ctx->pc = 0x7F011FD4u;
            return;
    }

label_7F0969D0:
    ctx->pc = 0x7F0969D0u;
    ctx->downcount -= 8;
    // 7F0969D0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0969D4:
    ctx->pc = 0x7F0969D4u;
    // 7F0969D4: li      r3, 1958
    ctx->gpr[3] = (u32)(s32)(1958);

label_7F0969D8:
    ctx->pc = 0x7F0969D8u;
    // 7F0969D8: rlwinm r7, r0, 0, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F0969DC:
    ctx->pc = 0x7F0969DCu;
    // 7F0969DC: li      r4, 1958
    ctx->gpr[4] = (u32)(s32)(1958);

label_7F0969E0:
    ctx->pc = 0x7F0969E0u;
    // 7F0969E0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F0969E4:
    ctx->pc = 0x7F0969E4u;
    // 7F0969E4: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0969E8:
    ctx->pc = 0x7F0969E8u;
    // 7F0969E8: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0969EC:
    ctx->pc = 0x7F0969ECu;
    // 7F0969EC: bl      0x800516D4
    {
            ctx->lr = 0x7F0969F0u;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F0969F0:
    ctx->pc = 0x7F0969F0u;
    ctx->downcount -= 6;
    // 7F0969F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0969F4:
    ctx->pc = 0x7F0969F4u;
    // 7F0969F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0969F8:
    ctx->pc = 0x7F0969F8u;
    // 7F0969F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0969FC:
    ctx->pc = 0x7F0969FCu;
    // 7F0969FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096A00:
    ctx->pc = 0x7F096A00u;
    // 7F096A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096A04:
    ctx->pc = 0x7F096A04u;
    ctx->downcount -= 20;
    // 7F096A04: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096A08:
    ctx->pc = 0x7F096A08u;
    // 7F096A08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096A0C:
    ctx->pc = 0x7F096A0Cu;
    // 7F096A0C: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F096A10:
    ctx->pc = 0x7F096A10u;
    // 7F096A10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096A14:
    ctx->pc = 0x7F096A14u;
    // 7F096A14: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F096A18:
    ctx->pc = 0x7F096A18u;
    // 7F096A18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096A1C:
    ctx->pc = 0x7F096A1Cu;
    // 7F096A1C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F096A20:
    ctx->pc = 0x7F096A20u;
    // 7F096A20: lwz     r0, 32304(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096A24:
    ctx->pc = 0x7F096A24u;
    // 7F096A24: rlwinm. r0, r0, 0, 23, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000001FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F096A28:
    ctx->pc = 0x7F096A28u;
    // 7F096A28: bc    4, 2, 0x7F096A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096A34;
        }
    }

label_7F096A2C:
    ctx->pc = 0x7F096A2Cu;
    ctx->downcount -= 2;
    // 7F096A2C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F096A30:
    ctx->pc = 0x7F096A30u;
    // 7F096A30: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096A34:
    ctx->pc = 0x7F096A34u;
    ctx->downcount -= 3;
    // 7F096A34: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096A38:
    ctx->pc = 0x7F096A38u;
    // 7F096A38: cmpwi   r0, 0
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

label_7F096A3C:
    ctx->pc = 0x7F096A3Cu;
    // 7F096A3C: bc    12, 2, 0x7F096AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096AC0;
        }
    }

label_7F096A40:
    ctx->pc = 0x7F096A40u;
    ctx->downcount -= 3;
    // 7F096A40: lwz     r3, 720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096A44:
    ctx->pc = 0x7F096A44u;
    // 7F096A44: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F096A48:
    ctx->pc = 0x7F096A48u;
    // 7F096A48: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F096A4Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F096A4C:
    ctx->pc = 0x7F096A4Cu;
    ctx->downcount -= 5;
    // 7F096A4C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F096A50:
    ctx->pc = 0x7F096A50u;
    // 7F096A50: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F096A54:
    ctx->pc = 0x7F096A54u;
    // 7F096A54: addi    r3, r3, 23160
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23160);

label_7F096A58:
    ctx->pc = 0x7F096A58u;
    // 7F096A58: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F096A5C:
    ctx->pc = 0x7F096A5Cu;
    // 7F096A5C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F096A60u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F096A60:
    ctx->pc = 0x7F096A60u;
    ctx->downcount -= 21;
    // 7F096A60: lwz     r7, 764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(764);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F096A64:
    ctx->pc = 0x7F096A64u;
    // 7F096A64: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096A68:
    ctx->pc = 0x7F096A68u;
    // 7F096A68: addi    r5, r3, -6204
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6204);

label_7F096A6C:
    ctx->pc = 0x7F096A6Cu;
    // 7F096A6C: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096A70:
    ctx->pc = 0x7F096A70u;
    // 7F096A70: lfs     f0, 816(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F096A70u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(816);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096A74:
    ctx->pc = 0x7F096A74u;
    // 7F096A74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F096A78:
    ctx->pc = 0x7F096A78u;
    // 7F096A78: lfs     f3, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F096A7C:
    ctx->pc = 0x7F096A7Cu;
    // 7F096A7C: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F096A80:
    ctx->pc = 0x7F096A80u;
    // 7F096A80: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096A80u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F096A84:
    ctx->pc = 0x7F096A84u;
    // 7F096A84: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F096A88:
    ctx->pc = 0x7F096A88u;
    // 7F096A88: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F096A88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096A8C:
    ctx->pc = 0x7F096A8Cu;
    // 7F096A8C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F096A90:
    ctx->pc = 0x7F096A90u;
    // 7F096A90: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F096A94:
    ctx->pc = 0x7F096A94u;
    // 7F096A94: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096A98:
    ctx->pc = 0x7F096A98u;
    // 7F096A98: lfs     f0, 820(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F096A98u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(820);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096A9C:
    ctx->pc = 0x7F096A9Cu;
    // 7F096A9C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096A9Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F096AA0:
    ctx->pc = 0x7F096AA0u;
    // 7F096AA0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096AA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096AA4:
    ctx->pc = 0x7F096AA4u;
    // 7F096AA4: lfs     f0, 824(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F096AA4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096AA8:
    ctx->pc = 0x7F096AA8u;
    // 7F096AA8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096AA8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F096AAC:
    ctx->pc = 0x7F096AACu;
    // 7F096AAC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096AB0:
    ctx->pc = 0x7F096AB0u;
    // 7F096AB0: bl      0x7F1D2D04
    {
            ctx->lr = 0x7F096AB4u;
            ctx->pc = 0x7F1D2D04u;
            return;
    }

label_7F096AB4:
    ctx->pc = 0x7F096AB4u;
    ctx->downcount -= 3;
    // 7F096AB4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096AB8:
    ctx->pc = 0x7F096AB8u;
    // 7F096AB8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F096ABC:
    ctx->pc = 0x7F096ABCu;
    // 7F096ABC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096AC0:
    ctx->pc = 0x7F096AC0u;
    ctx->downcount -= 16;
    // 7F096AC0: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F096AC4:
    ctx->pc = 0x7F096AC4u;
    // 7F096AC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096AC8:
    ctx->pc = 0x7F096AC8u;
    // 7F096AC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096ACC:
    ctx->pc = 0x7F096ACCu;
    // 7F096ACC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F096AD0:
    ctx->pc = 0x7F096AD0u;
    // 7F096AD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096AD4:
    ctx->pc = 0x7F096AD4u;
    ctx->downcount -= 17;
    // 7F096AD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096AD8:
    ctx->pc = 0x7F096AD8u;
    // 7F096AD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096ADC:
    ctx->pc = 0x7F096ADCu;
    // 7F096ADC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096AE0:
    ctx->pc = 0x7F096AE0u;
    // 7F096AE0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F096AE4:
    ctx->pc = 0x7F096AE4u;
    // 7F096AE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096AE8:
    ctx->pc = 0x7F096AE8u;
    // 7F096AE8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F096AEC:
    ctx->pc = 0x7F096AECu;
    // 7F096AEC: bl      0x7F096B28
    {
            ctx->lr = 0x7F096AF0u;
            goto label_7F096B28;
    }

label_7F096AF0:
    ctx->pc = 0x7F096AF0u;
    ctx->downcount -= 3;
    // 7F096AF0: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F096AF4:
    ctx->pc = 0x7F096AF4u;
    // 7F096AF4: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_7F096AF8:
    ctx->pc = 0x7F096AF8u;
    // 7F096AF8: bl      0x7F096B28
    {
            ctx->lr = 0x7F096AFCu;
            goto label_7F096B28;
    }

label_7F096AFC:
    ctx->pc = 0x7F096AFCu;
    ctx->downcount -= 3;
    // 7F096AFC: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F096B00:
    ctx->pc = 0x7F096B00u;
    // 7F096B00: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F096B04:
    ctx->pc = 0x7F096B04u;
    // 7F096B04: bl      0x7F096B28
    {
            ctx->lr = 0x7F096B08u;
            goto label_7F096B28;
    }

label_7F096B08:
    ctx->pc = 0x7F096B08u;
    ctx->downcount -= 3;
    // 7F096B08: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F096B0C:
    ctx->pc = 0x7F096B0Cu;
    // 7F096B0C: addi    r4, r31, 6
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(6);

label_7F096B10:
    ctx->pc = 0x7F096B10u;
    // 7F096B10: bl      0x7F096B28
    {
            ctx->lr = 0x7F096B14u;
            goto label_7F096B28;
    }

label_7F096B14:
    ctx->pc = 0x7F096B14u;
    ctx->downcount -= 16;
    // 7F096B14: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F096B18:
    ctx->pc = 0x7F096B18u;
    // 7F096B18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096B1C:
    ctx->pc = 0x7F096B1Cu;
    // 7F096B1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096B20:
    ctx->pc = 0x7F096B20u;
    // 7F096B20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096B24:
    ctx->pc = 0x7F096B24u;
    // 7F096B24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096B28:
    ctx->pc = 0x7F096B28u;
    ctx->downcount -= 7;
    // 7F096B28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096B2C:
    ctx->pc = 0x7F096B2Cu;
    // 7F096B2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096B30:
    ctx->pc = 0x7F096B30u;
    // 7F096B30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096B34:
    ctx->pc = 0x7F096B34u;
    // 7F096B34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F096B38:
    ctx->pc = 0x7F096B38u;
    // 7F096B38: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F096B3C:
    ctx->pc = 0x7F096B3Cu;
    // 7F096B3C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F096B3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096B40:
    ctx->pc = 0x7F096B40u;
    // 7F096B40: bl      0x7F096B5C
    {
            ctx->lr = 0x7F096B44u;
            goto label_7F096B5C;
    }

label_7F096B44:
    ctx->pc = 0x7F096B44u;
    ctx->downcount -= 7;
    // 7F096B44: sth     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096B48:
    ctx->pc = 0x7F096B48u;
    // 7F096B48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096B4C:
    ctx->pc = 0x7F096B4Cu;
    // 7F096B4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F096B50:
    ctx->pc = 0x7F096B50u;
    // 7F096B50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096B54:
    ctx->pc = 0x7F096B54u;
    // 7F096B54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096B58:
    ctx->pc = 0x7F096B58u;
    // 7F096B58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096B5C:
    ctx->pc = 0x7F096B5Cu;
    ctx->downcount -= 6;
    // 7F096B5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096B60:
    ctx->pc = 0x7F096B60u;
    // 7F096B60: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F096B60u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F096B64:
    ctx->pc = 0x7F096B64u;
    // 7F096B64: psq_st   f0, 8(r1), 1, 5
    if (!ppc_fp_available_inline(ctx, 0x7F096B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 5u, false, 0x7F096B64u);
        if (ctx->exception) return;
    }

label_7F096B68:
    ctx->pc = 0x7F096B68u;
    // 7F096B68: lha     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096B6C:
    ctx->pc = 0x7F096B6Cu;
    // 7F096B6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F096B70:
    ctx->pc = 0x7F096B70u;
    // 7F096B70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096B74:
    ctx->pc = 0x7F096B74u;
    ctx->downcount -= 13;
    // 7F096B74: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F096B78:
    ctx->pc = 0x7F096B78u;
    // 7F096B78: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F096B7C:
    ctx->pc = 0x7F096B7Cu;
    // 7F096B7C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F096B80:
    ctx->pc = 0x7F096B80u;
    // 7F096B80: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096B84:
    ctx->pc = 0x7F096B84u;
    // 7F096B84: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F096B88:
    ctx->pc = 0x7F096B88u;
    // 7F096B88: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F096B8C:
    ctx->pc = 0x7F096B8Cu;
    // 7F096B8C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F096B90:
    ctx->pc = 0x7F096B90u;
    // 7F096B90: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096B94:
    ctx->pc = 0x7F096B94u;
    // 7F096B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096B98:
    ctx->pc = 0x7F096B98u;
    ctx->downcount -= 3;
    // 7F096B98: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F096B9C:
    ctx->pc = 0x7F096B9Cu;
    // 7F096B9C: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096BA0:
    ctx->pc = 0x7F096BA0u;
    // 7F096BA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096BA4:
    ctx->pc = 0x7F096BA4u;
    ctx->downcount -= 22;
    // 7F096BA4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096BA8:
    ctx->pc = 0x7F096BA8u;
    // 7F096BA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096BAC:
    ctx->pc = 0x7F096BACu;
    // 7F096BAC: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F096BB0:
    ctx->pc = 0x7F096BB0u;
    // 7F096BB0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F096BB4:
    ctx->pc = 0x7F096BB4u;
    // 7F096BB4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096BB8:
    ctx->pc = 0x7F096BB8u;
    // 7F096BB8: addi    r5, r5, 28408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28408);

label_7F096BBC:
    ctx->pc = 0x7F096BBCu;
    // 7F096BBC: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F096BC0:
    ctx->pc = 0x7F096BC0u;
    // 7F096BC0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096BC4:
    ctx->pc = 0x7F096BC4u;
    // 7F096BC4: addi    r29, r4, 23176
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(23176);

label_7F096BC8:
    ctx->pc = 0x7F096BC8u;
    // 7F096BC8: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096BCC:
    ctx->pc = 0x7F096BCCu;
    // 7F096BCC: cmpwi   r0, 0
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

label_7F096BD0:
    ctx->pc = 0x7F096BD0u;
    // 7F096BD0: bc    12, 2, 0x7F096BDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096BDC;
        }
    }

label_7F096BD4:
    ctx->pc = 0x7F096BD4u;
    ctx->downcount -= 2;
    // 7F096BD4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F096BD8:
    ctx->pc = 0x7F096BD8u;
    // 7F096BD8: addi    r29, r3, 23192
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(23192);

label_7F096BDC:
    ctx->pc = 0x7F096BDCu;
    ctx->downcount -= 3;
    // 7F096BDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096BE0:
    ctx->pc = 0x7F096BE0u;
    // 7F096BE0: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F096BE4:
    ctx->pc = 0x7F096BE4u;
    // 7F096BE4: bl      0x7F0970C4
    {
            ctx->lr = 0x7F096BE8u;
            goto label_7F0970C4;
    }

label_7F096BE8:
    ctx->pc = 0x7F096BE8u;
    ctx->downcount -= 2;
    // 7F096BE8: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F096BEC:
    ctx->pc = 0x7F096BECu;
    // 7F096BEC: bl      0x7F04291C
    {
            ctx->lr = 0x7F096BF0u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F096BF0:
    ctx->pc = 0x7F096BF0u;
    ctx->downcount -= 4;
    // 7F096BF0: lha     r3, 790(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(790);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F096BF4:
    ctx->pc = 0x7F096BF4u;
    // 7F096BF4: li      r5, 200
    ctx->gpr[5] = (u32)(s32)(200);

label_7F096BF8:
    ctx->pc = 0x7F096BF8u;
    // 7F096BF8: lwz     r4, 992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(992);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096BFC:
    ctx->pc = 0x7F096BFCu;
    // 7F096BFC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F096C00u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F096C00:
    ctx->pc = 0x7F096C00u;
    ctx->downcount -= 21;
    // 7F096C00: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F096C04:
    ctx->pc = 0x7F096C04u;
    // 7F096C04: sth     r3, 790(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(790);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F096C08:
    ctx->pc = 0x7F096C08u;
    // 7F096C08: addi    r5, r4, 12808
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F096C0C:
    ctx->pc = 0x7F096C0Cu;
    // 7F096C0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096C10:
    ctx->pc = 0x7F096C10u;
    // 7F096C10: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096C14:
    ctx->pc = 0x7F096C14u;
    // 7F096C14: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096C18:
    ctx->pc = 0x7F096C18u;
    // 7F096C18: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F096C1C:
    ctx->pc = 0x7F096C1Cu;
    // 7F096C1C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096C20:
    ctx->pc = 0x7F096C20u;
    // 7F096C20: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096C24:
    ctx->pc = 0x7F096C24u;
    // 7F096C24: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096C28:
    ctx->pc = 0x7F096C28u;
    // 7F096C28: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F096C2C:
    ctx->pc = 0x7F096C2Cu;
    // 7F096C2C: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096C30:
    ctx->pc = 0x7F096C30u;
    // 7F096C30: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096C34:
    ctx->pc = 0x7F096C34u;
    // 7F096C34: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096C38:
    ctx->pc = 0x7F096C38u;
    // 7F096C38: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F096C3C:
    ctx->pc = 0x7F096C3Cu;
    // 7F096C3C: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096C40:
    ctx->pc = 0x7F096C40u;
    // 7F096C40: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096C44:
    ctx->pc = 0x7F096C44u;
    // 7F096C44: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096C48:
    ctx->pc = 0x7F096C48u;
    // 7F096C48: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F096C4C:
    ctx->pc = 0x7F096C4Cu;
    // 7F096C4C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096C50:
    ctx->pc = 0x7F096C50u;
    // 7F096C50: bl      0x7F023170
    {
            ctx->lr = 0x7F096C54u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F096C54:
    ctx->pc = 0x7F096C54u;
    ctx->downcount -= 2;
    // 7F096C54: lwz     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096C58:
    ctx->pc = 0x7F096C58u;
    // 7F096C58: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F096C5Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F096C5C:
    ctx->pc = 0x7F096C5Cu;
    ctx->downcount -= 2;
    // 7F096C5C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F096C60:
    ctx->pc = 0x7F096C60u;
    // 7F096C60: bl      0x7F3B3134
    {
            ctx->lr = 0x7F096C64u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F096C64:
    ctx->pc = 0x7F096C64u;
    ctx->downcount -= 2;
    // 7F096C64: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F096C68:
    ctx->pc = 0x7F096C68u;
    // 7F096C68: bl      0x7F0429C4
    {
            ctx->lr = 0x7F096C6Cu;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F096C6C:
    ctx->pc = 0x7F096C6Cu;
    ctx->downcount -= 3;
    // 7F096C6C: lwz     r0, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096C70:
    ctx->pc = 0x7F096C70u;
    // 7F096C70: cmplwi  r0, 0x0000
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

label_7F096C74:
    ctx->pc = 0x7F096C74u;
    // 7F096C74: bc    12, 2, 0x7F096C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096C98;
        }
    }

label_7F096C78:
    ctx->pc = 0x7F096C78u;
    ctx->downcount -= 3;
    // 7F096C78: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096C7C:
    ctx->pc = 0x7F096C7Cu;
    // 7F096C7C: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F096C80:
    ctx->pc = 0x7F096C80u;
    // 7F096C80: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F096C84u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F096C84:
    ctx->pc = 0x7F096C84u;
    ctx->downcount -= 3;
    // 7F096C84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F096C88:
    ctx->pc = 0x7F096C88u;
    // 7F096C88: addi    r3, r3, 23208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23208);

label_7F096C8C:
    ctx->pc = 0x7F096C8Cu;
    // 7F096C8C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F096C90u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F096C90:
    ctx->pc = 0x7F096C90u;
    ctx->downcount -= 2;
    // 7F096C90: lwz     r3, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096C94:
    ctx->pc = 0x7F096C94u;
    // 7F096C94: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F096C98u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F096C98:
    ctx->pc = 0x7F096C98u;
    ctx->downcount -= 12;
    // 7F096C98: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096C9C:
    ctx->pc = 0x7F096C9Cu;
    // 7F096C9C: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F096CA0:
    ctx->pc = 0x7F096CA0u;
    // 7F096CA0: addi    r4, r30, 860
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(860);

label_7F096CA4:
    ctx->pc = 0x7F096CA4u;
    // 7F096CA4: lfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F096CA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096CA8:
    ctx->pc = 0x7F096CA8u;
    // 7F096CA8: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096CA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096CAC:
    ctx->pc = 0x7F096CACu;
    // 7F096CAC: lfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F096CACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096CB0:
    ctx->pc = 0x7F096CB0u;
    // 7F096CB0: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096CB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096CB4:
    ctx->pc = 0x7F096CB4u;
    // 7F096CB4: lfs     f0, 60(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F096CB4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096CB8:
    ctx->pc = 0x7F096CB8u;
    // 7F096CB8: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F096CB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F096CBC:
    ctx->pc = 0x7F096CBCu;
    // 7F096CBC: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096CC0:
    ctx->pc = 0x7F096CC0u;
    // 7F096CC0: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F096CC4:
    ctx->pc = 0x7F096CC4u;
    // 7F096CC4: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F096CC8u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F096CC8:
    ctx->pc = 0x7F096CC8u;
    ctx->downcount -= 34;
    // 7F096CC8: lwz     r4, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096CCC:
    ctx->pc = 0x7F096CCCu;
    // 7F096CCC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096CD0:
    ctx->pc = 0x7F096CD0u;
    // 7F096CD0: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F096CD4:
    ctx->pc = 0x7F096CD4u;
    // 7F096CD4: lfs     f0, 4380(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F096CD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096CD8:
    ctx->pc = 0x7F096CD8u;
    // 7F096CD8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096CD8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096CDC:
    ctx->pc = 0x7F096CDCu;
    // 7F096CDC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096CE0:
    ctx->pc = 0x7F096CE0u;
    // 7F096CE0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096CE4:
    ctx->pc = 0x7F096CE4u;
    // 7F096CE4: sth     r0, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096CE8:
    ctx->pc = 0x7F096CE8u;
    // 7F096CE8: lfs     f0, 4384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F096CE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096CEC:
    ctx->pc = 0x7F096CECu;
    // 7F096CEC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096CECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096CF0:
    ctx->pc = 0x7F096CF0u;
    // 7F096CF0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096CF4:
    ctx->pc = 0x7F096CF4u;
    // 7F096CF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096CF8:
    ctx->pc = 0x7F096CF8u;
    // 7F096CF8: sth     r0, 218(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(218);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096CFC:
    ctx->pc = 0x7F096CFCu;
    // 7F096CFC: lfs     f0, 4388(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F096CFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F096D00:
    ctx->pc = 0x7F096D00u;
    // 7F096D00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F096D00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F096D04:
    ctx->pc = 0x7F096D04u;
    // 7F096D04: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F096D04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F096D08:
    ctx->pc = 0x7F096D08u;
    // 7F096D08: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096D0C:
    ctx->pc = 0x7F096D0Cu;
    // 7F096D0C: sth     r0, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096D10:
    ctx->pc = 0x7F096D10u;
    // 7F096D10: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F096D14:
    ctx->pc = 0x7F096D14u;
    // 7F096D14: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096D18:
    ctx->pc = 0x7F096D18u;
    // 7F096D18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096D1C:
    ctx->pc = 0x7F096D1Cu;
    // 7F096D1C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F096D20:
    ctx->pc = 0x7F096D20u;
    // 7F096D20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096D24:
    ctx->pc = 0x7F096D24u;
    ctx->downcount -= 22;
    // 7F096D24: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096D28:
    ctx->pc = 0x7F096D28u;
    // 7F096D28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096D2C:
    ctx->pc = 0x7F096D2Cu;
    // 7F096D2C: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F096D30:
    ctx->pc = 0x7F096D30u;
    // 7F096D30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096D34:
    ctx->pc = 0x7F096D34u;
    // 7F096D34: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F096D38:
    ctx->pc = 0x7F096D38u;
    // 7F096D38: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096D3C:
    ctx->pc = 0x7F096D3Cu;
    // 7F096D3C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F096D40:
    ctx->pc = 0x7F096D40u;
    // 7F096D40: addi    r31, r29, 48
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(48);

label_7F096D44:
    ctx->pc = 0x7F096D44u;
    // 7F096D44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096D48:
    ctx->pc = 0x7F096D48u;
    // 7F096D48: lwz     r5, 18312(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F096D4C:
    ctx->pc = 0x7F096D4Cu;
    // 7F096D4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F096D50:
    ctx->pc = 0x7F096D50u;
    // 7F096D50: bl      0x7F022FB4
    {
            ctx->lr = 0x7F096D54u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F096D54:
    ctx->pc = 0x7F096D54u;
    ctx->downcount -= 2;
    // 7F096D54: cmpwi   r3, 0
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

label_7F096D58:
    ctx->pc = 0x7F096D58u;
    // 7F096D58: bc    4, 0, 0x7F096D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096D64;
        }
    }

label_7F096D5C:
    ctx->pc = 0x7F096D5Cu;
    ctx->downcount -= 2;
    // 7F096D5C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F096D60:
    ctx->pc = 0x7F096D60u;
    // 7F096D60: b       0x7F096FA4
    {
            goto label_7F096FA4;
    }

label_7F096D64:
    ctx->pc = 0x7F096D64u;
    ctx->downcount -= 17;
    // 7F096D64: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096D68:
    ctx->pc = 0x7F096D68u;
    // 7F096D68: cmpwi   r30, 0
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

label_7F096D6C:
    ctx->pc = 0x7F096D6Cu;
    // 7F096D6C: addi    r30, r29, 448
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(448);

label_7F096D70:
    ctx->pc = 0x7F096D70u;
    // 7F096D70: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096D74:
    ctx->pc = 0x7F096D74u;
    // 7F096D74: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096D78:
    ctx->pc = 0x7F096D78u;
    // 7F096D78: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096D7C:
    ctx->pc = 0x7F096D7Cu;
    // 7F096D7C: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096D80:
    ctx->pc = 0x7F096D80u;
    // 7F096D80: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096D84:
    ctx->pc = 0x7F096D84u;
    // 7F096D84: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096D88:
    ctx->pc = 0x7F096D88u;
    // 7F096D88: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096D8C:
    ctx->pc = 0x7F096D8Cu;
    // 7F096D8C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096D90:
    ctx->pc = 0x7F096D90u;
    // 7F096D90: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096D94:
    ctx->pc = 0x7F096D94u;
    // 7F096D94: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096D98:
    ctx->pc = 0x7F096D98u;
    // 7F096D98: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096D9C:
    ctx->pc = 0x7F096D9Cu;
    // 7F096D9C: stw     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096DA0:
    ctx->pc = 0x7F096DA0u;
    // 7F096DA0: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096DA4:
    ctx->pc = 0x7F096DA4u;
    // 7F096DA4: bc    4, 2, 0x7F096E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F096E5C;
        }
    }

label_7F096DA8:
    ctx->pc = 0x7F096DA8u;
    ctx->downcount -= 6;
    // 7F096DA8: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F096DAC:
    ctx->pc = 0x7F096DACu;
    // 7F096DAC: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F096DB0:
    ctx->pc = 0x7F096DB0u;
    // 7F096DB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096DB4:
    ctx->pc = 0x7F096DB4u;
    // 7F096DB4: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F096DB8:
    ctx->pc = 0x7F096DB8u;
    // 7F096DB8: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F096DBC:
    ctx->pc = 0x7F096DBCu;
    // 7F096DBC: bl      0x7F04272C
    {
            ctx->lr = 0x7F096DC0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F096DC0:
    ctx->pc = 0x7F096DC0u;
    ctx->downcount -= 29;
    // 7F096DC0: lis     r10, 4
    ctx->gpr[10] = ((u32)(s32)(4) << 16);

label_7F096DC4:
    ctx->pc = 0x7F096DC4u;
    // 7F096DC4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F096DC8:
    ctx->pc = 0x7F096DC8u;
    // 7F096DC8: addi    r0, r10, 22417
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(22417);

label_7F096DCC:
    ctx->pc = 0x7F096DCCu;
    // 7F096DCC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096DD0:
    ctx->pc = 0x7F096DD0u;
    // 7F096DD0: stw     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096DD4:
    ctx->pc = 0x7F096DD4u;
    // 7F096DD4: li      r9, 1934
    ctx->gpr[9] = (u32)(s32)(1934);

label_7F096DD8:
    ctx->pc = 0x7F096DD8u;
    // 7F096DD8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F096DDC:
    ctx->pc = 0x7F096DDCu;
    // 7F096DDC: lfs     f1, -6200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F096DDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096DE0:
    ctx->pc = 0x7F096DE0u;
    // 7F096DE0: sth     r9, 1244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1244);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F096DE4:
    ctx->pc = 0x7F096DE4u;
    // 7F096DE4: li      r0, 1935
    ctx->gpr[0] = (u32)(s32)(1935);

label_7F096DE8:
    ctx->pc = 0x7F096DE8u;
    // 7F096DE8: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F096DEC:
    ctx->pc = 0x7F096DECu;
    // 7F096DEC: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F096DF0:
    ctx->pc = 0x7F096DF0u;
    // 7F096DF0: sth     r0, 1246(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1246);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096DF4:
    ctx->pc = 0x7F096DF4u;
    // 7F096DF4: li      r0, 1936
    ctx->gpr[0] = (u32)(s32)(1936);

label_7F096DF8:
    ctx->pc = 0x7F096DF8u;
    // 7F096DF8: addi    r3, r10, -16498
    ctx->gpr[3] = ctx->gpr[10] + (u32)(s32)(-16498);

label_7F096DFC:
    ctx->pc = 0x7F096DFCu;
    // 7F096DFC: lis     r6, 246
    ctx->gpr[6] = ((u32)(s32)(246) << 16);

label_7F096E00:
    ctx->pc = 0x7F096E00u;
    // 7F096E00: sth     r0, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096E04:
    ctx->pc = 0x7F096E04u;
    // 7F096E04: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F096E08:
    ctx->pc = 0x7F096E08u;
    // 7F096E08: addi    r5, r6, 5933
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(5933);

label_7F096E0C:
    ctx->pc = 0x7F096E0Cu;
    // 7F096E0C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F096E10:
    ctx->pc = 0x7F096E10u;
    // 7F096E10: sth     r9, 1250(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1250);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F096E14:
    ctx->pc = 0x7F096E14u;
    // 7F096E14: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096E18:
    ctx->pc = 0x7F096E18u;
    // 7F096E18: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F096E1C:
    ctx->pc = 0x7F096E1Cu;
    // 7F096E1C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F096E20:
    ctx->pc = 0x7F096E20u;
    // 7F096E20: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F096E24:
    ctx->pc = 0x7F096E24u;
    // 7F096E24: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F096E28:
    ctx->pc = 0x7F096E28u;
    // 7F096E28: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F096E2C:
    ctx->pc = 0x7F096E2Cu;
    // 7F096E2C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096E30:
    ctx->pc = 0x7F096E30u;
    // 7F096E30: bl      0x7F2FDAF0
    {
            ctx->lr = 0x7F096E34u;
            ctx->pc = 0x7F2FDAF0u;
            return;
    }

label_7F096E34:
    ctx->pc = 0x7F096E34u;
    ctx->downcount -= 7;
    // 7F096E34: stw     r3, 1252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096E38:
    ctx->pc = 0x7F096E38u;
    // 7F096E38: lis     r5, 240
    ctx->gpr[5] = ((u32)(s32)(240) << 16);

label_7F096E3C:
    ctx->pc = 0x7F096E3Cu;
    // 7F096E3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096E40:
    ctx->pc = 0x7F096E40u;
    // 7F096E40: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F096E44:
    ctx->pc = 0x7F096E44u;
    // 7F096E44: addi    r5, r5, 27499
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27499);

label_7F096E48:
    ctx->pc = 0x7F096E48u;
    // 7F096E48: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F096E4C:
    ctx->pc = 0x7F096E4Cu;
    // 7F096E4C: bl      0x7F042C2C
    {
            ctx->lr = 0x7F096E50u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F096E50:
    ctx->pc = 0x7F096E50u;
    ctx->downcount -= 3;
    // 7F096E50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F096E54:
    ctx->pc = 0x7F096E54u;
    // 7F096E54: stw     r0, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096E58:
    ctx->pc = 0x7F096E58u;
    // 7F096E58: b       0x7F096F34
    {
            goto label_7F096F34;
    }

label_7F096E5C:
    ctx->pc = 0x7F096E5Cu;
    ctx->downcount -= 6;
    // 7F096E5C: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F096E60:
    ctx->pc = 0x7F096E60u;
    // 7F096E60: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F096E64:
    ctx->pc = 0x7F096E64u;
    // 7F096E64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096E68:
    ctx->pc = 0x7F096E68u;
    // 7F096E68: addi    r4, r4, 14772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14772);

label_7F096E6C:
    ctx->pc = 0x7F096E6Cu;
    // 7F096E6C: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F096E70:
    ctx->pc = 0x7F096E70u;
    // 7F096E70: bl      0x7F04272C
    {
            ctx->lr = 0x7F096E74u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F096E74:
    ctx->pc = 0x7F096E74u;
    ctx->downcount -= 30;
    // 7F096E74: lis     r3, 114
    ctx->gpr[3] = ((u32)(s32)(114) << 16);

label_7F096E78:
    ctx->pc = 0x7F096E78u;
    // 7F096E78: lis     r6, 246
    ctx->gpr[6] = ((u32)(s32)(246) << 16);

label_7F096E7C:
    ctx->pc = 0x7F096E7Cu;
    // 7F096E7C: addi    r0, r3, 6899
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6899);

label_7F096E80:
    ctx->pc = 0x7F096E80u;
    // 7F096E80: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F096E84:
    ctx->pc = 0x7F096E84u;
    // 7F096E84: stw     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096E88:
    ctx->pc = 0x7F096E88u;
    // 7F096E88: li      r10, 1937
    ctx->gpr[10] = (u32)(s32)(1937);

label_7F096E8C:
    ctx->pc = 0x7F096E8Cu;
    // 7F096E8C: addi    r9, r6, 5933
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(5933);

label_7F096E90:
    ctx->pc = 0x7F096E90u;
    // 7F096E90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F096E94:
    ctx->pc = 0x7F096E94u;
    // 7F096E94: sth     r10, 1244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1244);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F096E98:
    ctx->pc = 0x7F096E98u;
    // 7F096E98: li      r0, 1938
    ctx->gpr[0] = (u32)(s32)(1938);

label_7F096E9C:
    ctx->pc = 0x7F096E9Cu;
    // 7F096E9C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F096EA0:
    ctx->pc = 0x7F096EA0u;
    // 7F096EA0: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F096EA4:
    ctx->pc = 0x7F096EA4u;
    // 7F096EA4: sth     r0, 1246(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1246);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096EA8:
    ctx->pc = 0x7F096EA8u;
    // 7F096EA8: li      r0, 1939
    ctx->gpr[0] = (u32)(s32)(1939);

label_7F096EAC:
    ctx->pc = 0x7F096EACu;
    // 7F096EAC: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F096EB0:
    ctx->pc = 0x7F096EB0u;
    // 7F096EB0: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F096EB4:
    ctx->pc = 0x7F096EB4u;
    // 7F096EB4: sth     r0, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096EB8:
    ctx->pc = 0x7F096EB8u;
    // 7F096EB8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F096EBC:
    ctx->pc = 0x7F096EBCu;
    // 7F096EBC: lis     r5, 252
    ctx->gpr[5] = ((u32)(s32)(252) << 16);

label_7F096EC0:
    ctx->pc = 0x7F096EC0u;
    // 7F096EC0: lfs     f1, -6196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F096EC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F096EC4:
    ctx->pc = 0x7F096EC4u;
    // 7F096EC4: sth     r10, 1250(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1250);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F096EC8:
    ctx->pc = 0x7F096EC8u;
    // 7F096EC8: addi    r3, r5, -1681
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1681);

label_7F096ECC:
    ctx->pc = 0x7F096ECCu;
    // 7F096ECC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096ED0:
    ctx->pc = 0x7F096ED0u;
    // 7F096ED0: addi    r4, r4, 10078
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10078);

label_7F096ED4:
    ctx->pc = 0x7F096ED4u;
    // 7F096ED4: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F096ED8:
    ctx->pc = 0x7F096ED8u;
    // 7F096ED8: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F096EDC:
    ctx->pc = 0x7F096EDCu;
    // 7F096EDC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F096EE0:
    ctx->pc = 0x7F096EE0u;
    // 7F096EE0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F096EE4:
    ctx->pc = 0x7F096EE4u;
    // 7F096EE4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096EE8:
    ctx->pc = 0x7F096EE8u;
    // 7F096EE8: bl      0x7F2FDAF0
    {
            ctx->lr = 0x7F096EECu;
            ctx->pc = 0x7F2FDAF0u;
            return;
    }

label_7F096EEC:
    ctx->pc = 0x7F096EECu;
    ctx->downcount -= 7;
    // 7F096EEC: stw     r3, 1252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F096EF0:
    ctx->pc = 0x7F096EF0u;
    // 7F096EF0: lis     r5, 96
    ctx->gpr[5] = ((u32)(s32)(96) << 16);

label_7F096EF4:
    ctx->pc = 0x7F096EF4u;
    // 7F096EF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096EF8:
    ctx->pc = 0x7F096EF8u;
    // 7F096EF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F096EFC:
    ctx->pc = 0x7F096EFCu;
    // 7F096EFC: addi    r5, r5, 27631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27631);

label_7F096F00:
    ctx->pc = 0x7F096F00u;
    // 7F096F00: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F096F04:
    ctx->pc = 0x7F096F04u;
    // 7F096F04: bl      0x7F042C2C
    {
            ctx->lr = 0x7F096F08u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F096F08:
    ctx->pc = 0x7F096F08u;
    ctx->downcount -= 5;
    // 7F096F08: lis     r4, 12
    ctx->gpr[4] = ((u32)(s32)(12) << 16);

label_7F096F0C:
    ctx->pc = 0x7F096F0Cu;
    // 7F096F0C: addi    r3, r29, 492
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(492);

label_7F096F10:
    ctx->pc = 0x7F096F10u;
    // 7F096F10: addi    r4, r4, -13076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13076);

label_7F096F14:
    ctx->pc = 0x7F096F14u;
    // 7F096F14: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F096F18:
    ctx->pc = 0x7F096F18u;
    // 7F096F18: bl      0x7F04272C
    {
            ctx->lr = 0x7F096F1Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F096F1C:
    ctx->pc = 0x7F096F1Cu;
    ctx->downcount -= 3;
    // 7F096F1C: addi    r3, r29, 492
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(492);

label_7F096F20:
    ctx->pc = 0x7F096F20u;
    // 7F096F20: addi    r4, r29, 860
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(860);

label_7F096F24:
    ctx->pc = 0x7F096F24u;
    // 7F096F24: bl      0x7F042B20
    {
            ctx->lr = 0x7F096F28u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F096F28:
    ctx->pc = 0x7F096F28u;
    ctx->downcount -= 3;
    // 7F096F28: lwz     r3, 448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096F2C:
    ctx->pc = 0x7F096F2Cu;
    // 7F096F2C: lwz     r4, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096F30:
    ctx->pc = 0x7F096F30u;
    // 7F096F30: bl      0x7F3B0938
    {
            ctx->lr = 0x7F096F34u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F096F34:
    ctx->pc = 0x7F096F34u;
    ctx->downcount -= 3;
    // 7F096F34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096F38:
    ctx->pc = 0x7F096F38u;
    // 7F096F38: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F096F3C:
    ctx->pc = 0x7F096F3Cu;
    // 7F096F3C: bl      0x7F042B6C
    {
            ctx->lr = 0x7F096F40u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F096F40:
    ctx->pc = 0x7F096F40u;
    ctx->downcount -= 3;
    // 7F096F40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096F44:
    ctx->pc = 0x7F096F44u;
    // 7F096F44: addi    r4, r29, 860
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(860);

label_7F096F48:
    ctx->pc = 0x7F096F48u;
    // 7F096F48: bl      0x7F042B20
    {
            ctx->lr = 0x7F096F4Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F096F4C:
    ctx->pc = 0x7F096F4Cu;
    ctx->downcount -= 8;
    // 7F096F4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096F50:
    ctx->pc = 0x7F096F50u;
    // 7F096F50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F096F54:
    ctx->pc = 0x7F096F54u;
    // 7F096F54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F096F58:
    ctx->pc = 0x7F096F58u;
    // 7F096F58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F096F5C:
    ctx->pc = 0x7F096F5Cu;
    // 7F096F5C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F096F60:
    ctx->pc = 0x7F096F60u;
    // 7F096F60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F096F64:
    ctx->pc = 0x7F096F64u;
    // 7F096F64: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F096F68:
    ctx->pc = 0x7F096F68u;
    // 7F096F68: bl      0x7F042C94
    {
            ctx->lr = 0x7F096F6Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F096F6C:
    ctx->pc = 0x7F096F6Cu;
    ctx->downcount -= 2;
    // 7F096F6C: addi    r3, r29, 448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(448);

label_7F096F70:
    ctx->pc = 0x7F096F70u;
    // 7F096F70: bl      0x7F04291C
    {
            ctx->lr = 0x7F096F74u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F096F74:
    ctx->pc = 0x7F096F74u;
    ctx->downcount -= 3;
    // 7F096F74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F096F78:
    ctx->pc = 0x7F096F78u;
    // 7F096F78: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F096F7C:
    ctx->pc = 0x7F096F7Cu;
    // 7F096F7C: bl      0x7F023E5C
    {
            ctx->lr = 0x7F096F80u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F096F80:
    ctx->pc = 0x7F096F80u;
    ctx->downcount -= 9;
    // 7F096F80: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F096F84:
    ctx->pc = 0x7F096F84u;
    // 7F096F84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F096F88:
    ctx->pc = 0x7F096F88u;
    // 7F096F88: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F096F8C:
    ctx->pc = 0x7F096F8Cu;
    // 7F096F8C: stw     r30, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F096F90:
    ctx->pc = 0x7F096F90u;
    // 7F096F90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F096F94:
    ctx->pc = 0x7F096F94u;
    // 7F096F94: sth     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096F98:
    ctx->pc = 0x7F096F98u;
    // 7F096F98: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F096F9C:
    ctx->pc = 0x7F096F9Cu;
    // 7F096F9C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F096FA0:
    ctx->pc = 0x7F096FA0u;
    // 7F096FA0: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F096FA4:
    ctx->pc = 0x7F096FA4u;
    ctx->downcount -= 16;
    // 7F096FA4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F096FA8:
    ctx->pc = 0x7F096FA8u;
    // 7F096FA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F096FAC:
    ctx->pc = 0x7F096FACu;
    // 7F096FAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F096FB0:
    ctx->pc = 0x7F096FB0u;
    // 7F096FB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F096FB4:
    ctx->pc = 0x7F096FB4u;
    // 7F096FB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F096FB8:
    ctx->pc = 0x7F096FB8u;
    ctx->downcount -= 7;
    // 7F096FB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F096FBC:
    ctx->pc = 0x7F096FBCu;
    // 7F096FBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F096FC0:
    ctx->pc = 0x7F096FC0u;
    // 7F096FC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F096FC4:
    ctx->pc = 0x7F096FC4u;
    // 7F096FC4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F096FC8:
    ctx->pc = 0x7F096FC8u;
    // 7F096FC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F096FCC:
    ctx->pc = 0x7F096FCCu;
    // 7F096FCC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F096FD0:
    ctx->pc = 0x7F096FD0u;
    // 7F096FD0: bl      0x7F023E10
    {
            ctx->lr = 0x7F096FD4u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F096FD4:
    ctx->pc = 0x7F096FD4u;
    ctx->downcount -= 2;
    // 7F096FD4: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F096FD8:
    ctx->pc = 0x7F096FD8u;
    // 7F096FD8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F096FDCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F096FDC:
    ctx->pc = 0x7F096FDCu;
    ctx->downcount -= 3;
    // 7F096FDC: lwz     r3, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096FE0:
    ctx->pc = 0x7F096FE0u;
    // 7F096FE0: cmplwi  r3, 0x0000
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

label_7F096FE4:
    ctx->pc = 0x7F096FE4u;
    // 7F096FE4: bc    12, 2, 0x7F096FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F096FEC;
        }
    }

label_7F096FE8:
    ctx->pc = 0x7F096FE8u;
    ctx->downcount -= 1;
    // 7F096FE8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F096FECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F096FEC:
    ctx->pc = 0x7F096FECu;
    ctx->downcount -= 3;
    // 7F096FEC: lwz     r4, 492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F096FF0:
    ctx->pc = 0x7F096FF0u;
    // 7F096FF0: cmplwi  r4, 0x0000
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

label_7F096FF4:
    ctx->pc = 0x7F096FF4u;
    // 7F096FF4: bc    12, 2, 0x7F097008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097008;
        }
    }

label_7F096FF8:
    ctx->pc = 0x7F096FF8u;
    ctx->downcount -= 2;
    // 7F096FF8: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F096FFC:
    ctx->pc = 0x7F096FFCu;
    // 7F096FFC: bl      0x7F3B0954
    {
            ctx->lr = 0x7F097000u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F097000:
    ctx->pc = 0x7F097000u;
    ctx->downcount -= 2;
    // 7F097000: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F097004:
    ctx->pc = 0x7F097004u;
    // 7F097004: bl      0x7F042AAC
    {
            ctx->lr = 0x7F097008u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F097008:
    ctx->pc = 0x7F097008u;
    ctx->downcount -= 6;
    // 7F097008: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09700C:
    ctx->pc = 0x7F09700Cu;
    // 7F09700C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097010:
    ctx->pc = 0x7F097010u;
    // 7F097010: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097014:
    ctx->pc = 0x7F097014u;
    // 7F097014: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097018:
    ctx->pc = 0x7F097018u;
    // 7F097018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09701C:
    ctx->pc = 0x7F09701Cu;
    ctx->downcount -= 22;
    // 7F09701C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097020:
    ctx->pc = 0x7F097020u;
    // 7F097020: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097024:
    ctx->pc = 0x7F097024u;
    // 7F097024: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F097028:
    ctx->pc = 0x7F097028u;
    // 7F097028: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09702C:
    ctx->pc = 0x7F09702Cu;
    // 7F09702C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F097030:
    ctx->pc = 0x7F097030u;
    // 7F097030: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097034:
    ctx->pc = 0x7F097034u;
    // 7F097034: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F097038:
    ctx->pc = 0x7F097038u;
    // 7F097038: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F09703C:
    ctx->pc = 0x7F09703Cu;
    // 7F09703C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F097040:
    ctx->pc = 0x7F097040u;
    // 7F097040: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F097044:
    ctx->pc = 0x7F097044u;
    // 7F097044: li      r5, 1264
    ctx->gpr[5] = (u32)(s32)(1264);

label_7F097048:
    ctx->pc = 0x7F097048u;
    // 7F097048: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F09704Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F09704C:
    ctx->pc = 0x7F09704Cu;
    ctx->downcount -= 2;
    // 7F09704C: or.   r31, r3, r3
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

label_7F097050:
    ctx->pc = 0x7F097050u;
    // 7F097050: bc    12, 2, 0x7F0970AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0970AC;
        }
    }

label_7F097054:
    ctx->pc = 0x7F097054u;
    ctx->downcount -= 5;
    // 7F097054: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097058:
    ctx->pc = 0x7F097058u;
    // 7F097058: lis     r5, 32521
    ctx->gpr[5] = ((u32)(s32)(32521) << 16);

label_7F09705C:
    ctx->pc = 0x7F09705Cu;
    // 7F09705C: addi    r4, r4, 27556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27556);

label_7F097060:
    ctx->pc = 0x7F097060u;
    // 7F097060: addi    r5, r5, 28600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28600);

label_7F097064:
    ctx->pc = 0x7F097064u;
    // 7F097064: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F097068u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F097068:
    ctx->pc = 0x7F097068u;
    ctx->downcount -= 7;
    // 7F097068: stw     r28, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F09706C:
    ctx->pc = 0x7F09706Cu;
    // 7F09706C: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F097070:
    ctx->pc = 0x7F097070u;
    // 7F097070: cmpwi   r30, 0
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

label_7F097074:
    ctx->pc = 0x7F097074u;
    // 7F097074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097078:
    ctx->pc = 0x7F097078u;
    // 7F097078: stw     r29, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F09707C:
    ctx->pc = 0x7F09707Cu;
    // 7F09707C: addi    r4, r4, 22417
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22417);

label_7F097080:
    ctx->pc = 0x7F097080u;
    // 7F097080: bc    12, 2, 0x7F09708C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09708C;
        }
    }

label_7F097084:
    ctx->pc = 0x7F097084u;
    ctx->downcount -= 2;
    // 7F097084: lis     r4, 114
    ctx->gpr[4] = ((u32)(s32)(114) << 16);

label_7F097088:
    ctx->pc = 0x7F097088u;
    // 7F097088: addi    r4, r4, 6899
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6899);

label_7F09708C:
    ctx->pc = 0x7F09708Cu;
    ctx->downcount -= 2;
    // 7F09708C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F097090:
    ctx->pc = 0x7F097090u;
    // 7F097090: bl      0x7F096D24
    {
            ctx->lr = 0x7F097094u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F096D24u;
                return;
            }
            goto label_7F096D24;
    }

label_7F097094:
    ctx->pc = 0x7F097094u;
    ctx->downcount -= 2;
    // 7F097094: cmpwi   r3, 0
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

label_7F097098:
    ctx->pc = 0x7F097098u;
    // 7F097098: bc    4, 0, 0x7F0970AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0970AC;
        }
    }

label_7F09709C:
    ctx->pc = 0x7F09709Cu;
    ctx->downcount -= 2;
    // 7F09709C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0970A0:
    ctx->pc = 0x7F0970A0u;
    // 7F0970A0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0970A4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0970A4:
    ctx->pc = 0x7F0970A4u;
    ctx->downcount -= 2;
    // 7F0970A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0970A8:
    ctx->pc = 0x7F0970A8u;
    // 7F0970A8: b       0x7F0970B0
    {
            goto label_7F0970B0;
    }

label_7F0970AC:
    ctx->pc = 0x7F0970ACu;
    ctx->downcount -= 1;
    // 7F0970AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0970B0:
    ctx->pc = 0x7F0970B0u;
    ctx->downcount -= 16;
    // 7F0970B0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0970B4:
    ctx->pc = 0x7F0970B4u;
    // 7F0970B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0970B8:
    ctx->pc = 0x7F0970B8u;
    // 7F0970B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0970BC:
    ctx->pc = 0x7F0970BCu;
    // 7F0970BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0970C0:
    ctx->pc = 0x7F0970C0u;
    // 7F0970C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0970C4:
    ctx->pc = 0x7F0970C4u;
    ctx->downcount -= 11;
    // 7F0970C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0970C8:
    ctx->pc = 0x7F0970C8u;
    // 7F0970C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0970CC:
    ctx->pc = 0x7F0970CCu;
    // 7F0970CC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0970D0:
    ctx->pc = 0x7F0970D0u;
    // 7F0970D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0970D4:
    ctx->pc = 0x7F0970D4u;
    // 7F0970D4: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0970D8:
    ctx->pc = 0x7F0970D8u;
    // 7F0970D8: lwz     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0970DC:
    ctx->pc = 0x7F0970DCu;
    // 7F0970DC: stw     r0, 1220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0970E0:
    ctx->pc = 0x7F0970E0u;
    // 7F0970E0: lwz     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0970E4:
    ctx->pc = 0x7F0970E4u;
    // 7F0970E4: rlwinm r0, r0, 0, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF0000u;
    }

label_7F0970E8:
    ctx->pc = 0x7F0970E8u;
    // 7F0970E8: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0970EC:
    ctx->pc = 0x7F0970ECu;
    // 7F0970EC: bl      0x7F097618
    {
            ctx->lr = 0x7F0970F0u;
            goto label_7F097618;
    }

label_7F0970F0:
    ctx->pc = 0x7F0970F0u;
    ctx->downcount -= 5;
    // 7F0970F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0970F4:
    ctx->pc = 0x7F0970F4u;
    // 7F0970F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0970F8:
    ctx->pc = 0x7F0970F8u;
    // 7F0970F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0970FC:
    ctx->pc = 0x7F0970FCu;
    // 7F0970FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097100:
    ctx->pc = 0x7F097100u;
    ctx->downcount -= 6;
    // 7F097100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097104:
    ctx->pc = 0x7F097104u;
    // 7F097104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097108:
    ctx->pc = 0x7F097108u;
    // 7F097108: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09710C:
    ctx->pc = 0x7F09710Cu;
    // 7F09710C: lwz     r4, 1220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097110:
    ctx->pc = 0x7F097110u;
    // 7F097110: rlwinm. r0, r4, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097114:
    ctx->pc = 0x7F097114u;
    // 7F097114: bc    12, 2, 0x7F09712C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09712C;
        }
    }

label_7F097118:
    ctx->pc = 0x7F097118u;
    ctx->downcount -= 3;
    // 7F097118: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F09711C:
    ctx->pc = 0x7F09711Cu;
    // 7F09711C: addi    r4, r4, 30120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30120);

label_7F097120:
    ctx->pc = 0x7F097120u;
    // 7F097120: bl      0x7F09768C
    {
            ctx->lr = 0x7F097124u;
            goto label_7F09768C;
    }

label_7F097124:
    ctx->pc = 0x7F097124u;
    ctx->downcount -= 2;
    // 7F097124: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097128:
    ctx->pc = 0x7F097128u;
    // 7F097128: b       0x7F0971A0
    {
            goto label_7F0971A0;
    }

label_7F09712C:
    ctx->pc = 0x7F09712Cu;
    ctx->downcount -= 2;
    // 7F09712C: rlwinm. r0, r4, 0, 31, 31
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

label_7F097130:
    ctx->pc = 0x7F097130u;
    // 7F097130: bc    12, 2, 0x7F097148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097148;
        }
    }

label_7F097134:
    ctx->pc = 0x7F097134u;
    ctx->downcount -= 3;
    // 7F097134: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097138:
    ctx->pc = 0x7F097138u;
    // 7F097138: addi    r4, r4, 29104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29104);

label_7F09713C:
    ctx->pc = 0x7F09713Cu;
    // 7F09713C: bl      0x7F09768C
    {
            ctx->lr = 0x7F097140u;
            goto label_7F09768C;
    }

label_7F097140:
    ctx->pc = 0x7F097140u;
    ctx->downcount -= 2;
    // 7F097140: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097144:
    ctx->pc = 0x7F097144u;
    // 7F097144: b       0x7F0971A0
    {
            goto label_7F0971A0;
    }

label_7F097148:
    ctx->pc = 0x7F097148u;
    ctx->downcount -= 2;
    // 7F097148: rlwinm. r0, r4, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F09714C:
    ctx->pc = 0x7F09714Cu;
    // 7F09714C: bc    12, 2, 0x7F097164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097164;
        }
    }

label_7F097150:
    ctx->pc = 0x7F097150u;
    ctx->downcount -= 3;
    // 7F097150: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097154:
    ctx->pc = 0x7F097154u;
    // 7F097154: addi    r4, r4, 29464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29464);

label_7F097158:
    ctx->pc = 0x7F097158u;
    // 7F097158: bl      0x7F09768C
    {
            ctx->lr = 0x7F09715Cu;
            goto label_7F09768C;
    }

label_7F09715C:
    ctx->pc = 0x7F09715Cu;
    ctx->downcount -= 2;
    // 7F09715C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097160:
    ctx->pc = 0x7F097160u;
    // 7F097160: b       0x7F0971A0
    {
            goto label_7F0971A0;
    }

label_7F097164:
    ctx->pc = 0x7F097164u;
    ctx->downcount -= 2;
    // 7F097164: rlwinm. r0, r4, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097168:
    ctx->pc = 0x7F097168u;
    // 7F097168: bc    12, 2, 0x7F097180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097180;
        }
    }

label_7F09716C:
    ctx->pc = 0x7F09716Cu;
    ctx->downcount -= 3;
    // 7F09716C: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097170:
    ctx->pc = 0x7F097170u;
    // 7F097170: addi    r4, r4, 29792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29792);

label_7F097174:
    ctx->pc = 0x7F097174u;
    // 7F097174: bl      0x7F09768C
    {
            ctx->lr = 0x7F097178u;
            goto label_7F09768C;
    }

label_7F097178:
    ctx->pc = 0x7F097178u;
    ctx->downcount -= 2;
    // 7F097178: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F09717C:
    ctx->pc = 0x7F09717Cu;
    // 7F09717C: b       0x7F0971A0
    {
            goto label_7F0971A0;
    }

label_7F097180:
    ctx->pc = 0x7F097180u;
    ctx->downcount -= 2;
    // 7F097180: rlwinm. r0, r4, 0, 15, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00010000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097184:
    ctx->pc = 0x7F097184u;
    // 7F097184: bc    4, 2, 0x7F09719C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09719C;
        }
    }

label_7F097188:
    ctx->pc = 0x7F097188u;
    ctx->downcount -= 3;
    // 7F097188: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F09718C:
    ctx->pc = 0x7F09718Cu;
    // 7F09718C: addi    r4, r4, 29176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29176);

label_7F097190:
    ctx->pc = 0x7F097190u;
    // 7F097190: bl      0x7F09768C
    {
            ctx->lr = 0x7F097194u;
            goto label_7F09768C;
    }

label_7F097194:
    ctx->pc = 0x7F097194u;
    ctx->downcount -= 2;
    // 7F097194: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097198:
    ctx->pc = 0x7F097198u;
    // 7F097198: b       0x7F0971A0
    {
            goto label_7F0971A0;
    }

label_7F09719C:
    ctx->pc = 0x7F09719Cu;
    ctx->downcount -= 1;
    // 7F09719C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0971A0:
    ctx->pc = 0x7F0971A0u;
    ctx->downcount -= 5;
    // 7F0971A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0971A4:
    ctx->pc = 0x7F0971A4u;
    // 7F0971A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0971A8:
    ctx->pc = 0x7F0971A8u;
    // 7F0971A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0971AC:
    ctx->pc = 0x7F0971ACu;
    // 7F0971AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0971B0:
    ctx->pc = 0x7F0971B0u;
    ctx->downcount -= 7;
    // 7F0971B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0971B4:
    ctx->pc = 0x7F0971B4u;
    // 7F0971B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0971B8:
    ctx->pc = 0x7F0971B8u;
    // 7F0971B8: cmpwi   r4, 0
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

label_7F0971BC:
    ctx->pc = 0x7F0971BCu;
    // 7F0971BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0971C0:
    ctx->pc = 0x7F0971C0u;
    // 7F0971C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0971C4:
    ctx->pc = 0x7F0971C4u;
    // 7F0971C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0971C8:
    ctx->pc = 0x7F0971C8u;
    // 7F0971C8: bc    4, 2, 0x7F0971D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0971D8;
        }
    }

label_7F0971CC:
    ctx->pc = 0x7F0971CCu;
    ctx->downcount -= 3;
    // 7F0971CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0971D0:
    ctx->pc = 0x7F0971D0u;
    // 7F0971D0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0971D4:
    ctx->pc = 0x7F0971D4u;
    // 7F0971D4: bl      0x7F0976A4
    {
            ctx->lr = 0x7F0971D8u;
            goto label_7F0976A4;
    }

label_7F0971D8:
    ctx->pc = 0x7F0971D8u;
    ctx->downcount -= 2;
    // 7F0971D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0971DC:
    ctx->pc = 0x7F0971DCu;
    // 7F0971DC: bl      0x7F097100
    {
            ctx->lr = 0x7F0971E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F0971E0:
    ctx->pc = 0x7F0971E0u;
    ctx->downcount -= 7;
    // 7F0971E0: cmpwi   r3, 0
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

label_7F0971E4:
    ctx->pc = 0x7F0971E4u;
    // 7F0971E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0971E8:
    ctx->pc = 0x7F0971E8u;
    // 7F0971E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0971EC:
    ctx->pc = 0x7F0971ECu;
    // 7F0971EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0971F0:
    ctx->pc = 0x7F0971F0u;
    // 7F0971F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0971F4:
    ctx->pc = 0x7F0971F4u;
    // 7F0971F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0971F8:
    ctx->pc = 0x7F0971F8u;
    ctx->downcount -= 7;
    // 7F0971F8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0971FC:
    ctx->pc = 0x7F0971FCu;
    // 7F0971FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097200:
    ctx->pc = 0x7F097200u;
    // 7F097200: cmpwi   r4, 0
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

label_7F097204:
    ctx->pc = 0x7F097204u;
    // 7F097204: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097208:
    ctx->pc = 0x7F097208u;
    // 7F097208: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F09720C:
    ctx->pc = 0x7F09720Cu;
    // 7F09720C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097210:
    ctx->pc = 0x7F097210u;
    // 7F097210: bc    4, 2, 0x7F097220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097220;
        }
    }

label_7F097214:
    ctx->pc = 0x7F097214u;
    ctx->downcount -= 3;
    // 7F097214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F097218:
    ctx->pc = 0x7F097218u;
    // 7F097218: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F09721C:
    ctx->pc = 0x7F09721Cu;
    // 7F09721C: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097220u;
            goto label_7F0976A4;
    }

label_7F097220:
    ctx->pc = 0x7F097220u;
    ctx->downcount -= 5;
    // 7F097220: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F097224:
    ctx->pc = 0x7F097224u;
    // 7F097224: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F097228:
    ctx->pc = 0x7F097228u;
    // 7F097228: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09722C:
    ctx->pc = 0x7F09722Cu;
    // 7F09722C: rlwinm. r0, r0, 0, 31, 31
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

label_7F097230:
    ctx->pc = 0x7F097230u;
    // 7F097230: bc    12, 2, 0x7F097260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097260;
        }
    }

label_7F097234:
    ctx->pc = 0x7F097234u;
    ctx->downcount -= 2;
    // 7F097234: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F097238:
    ctx->pc = 0x7F097238u;
    // 7F097238: bl      0x7F02A538
    {
            ctx->lr = 0x7F09723Cu;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F09723C:
    ctx->pc = 0x7F09723Cu;
    ctx->downcount -= 2;
    // 7F09723C: cmpwi   r3, 20
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

label_7F097240:
    ctx->pc = 0x7F097240u;
    // 7F097240: bc    4, 0, 0x7F097260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097260;
        }
    }

label_7F097244:
    ctx->pc = 0x7F097244u;
    ctx->downcount -= 1;
    // 7F097244: bl      0x7F09290C
    {
            ctx->lr = 0x7F097248u;
            ctx->pc = 0x7F09290Cu;
            return;
    }

label_7F097248:
    ctx->pc = 0x7F097248u;
    ctx->downcount -= 2;
    // 7F097248: cmpwi   r3, 0
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

label_7F09724C:
    ctx->pc = 0x7F09724Cu;
    // 7F09724C: bc    4, 2, 0x7F097260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097260;
        }
    }

label_7F097250:
    ctx->pc = 0x7F097250u;
    ctx->downcount -= 4;
    // 7F097250: lha     r4, 1248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097254:
    ctx->pc = 0x7F097254u;
    // 7F097254: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F097258:
    ctx->pc = 0x7F097258u;
    // 7F097258: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F09725C:
    ctx->pc = 0x7F09725Cu;
    // 7F09725C: bl      0x7F011A74
    {
            ctx->lr = 0x7F097260u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F097260:
    ctx->pc = 0x7F097260u;
    ctx->downcount -= 5;
    // 7F097260: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F097264:
    ctx->pc = 0x7F097264u;
    // 7F097264: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F097268:
    ctx->pc = 0x7F097268u;
    // 7F097268: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F09726C:
    ctx->pc = 0x7F09726Cu;
    // 7F09726C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097270:
    ctx->pc = 0x7F097270u;
    // 7F097270: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F097274u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F097274:
    ctx->pc = 0x7F097274u;
    ctx->downcount -= 3;
    // 7F097274: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097278:
    ctx->pc = 0x7F097278u;
    // 7F097278: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F09727C:
    ctx->pc = 0x7F09727Cu;
    // 7F09727C: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F097280u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F097280:
    ctx->pc = 0x7F097280u;
    ctx->downcount -= 12;
    // 7F097280: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F097284:
    ctx->pc = 0x7F097284u;
    // 7F097284: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F097288:
    ctx->pc = 0x7F097288u;
    // 7F097288: addi    r3, r3, -5664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F09728C:
    ctx->pc = 0x7F09728Cu;
    // 7F09728C: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097290:
    ctx->pc = 0x7F097290u;
    // 7F097290: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097294:
    ctx->pc = 0x7F097294u;
    // 7F097294: lha     r5, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097298:
    ctx->pc = 0x7F097298u;
    // 7F097298: lha     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09729C:
    ctx->pc = 0x7F09729Cu;
    // 7F09729C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0972A0:
    ctx->pc = 0x7F0972A0u;
    // 7F0972A0: subf   r3, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0972A4:
    ctx->pc = 0x7F0972A4u;
    // 7F0972A4: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0972A8:
    ctx->pc = 0x7F0972A8u;
    // 7F0972A8: rlwinm. r0, r3, 0, 20, 20
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

label_7F0972AC:
    ctx->pc = 0x7F0972ACu;
    // 7F0972AC: bc    12, 2, 0x7F0972B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0972B4;
        }
    }

label_7F0972B0:
    ctx->pc = 0x7F0972B0u;
    ctx->downcount -= 1;
    // 7F0972B0: addi    r3, r3, -4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F0972B4:
    ctx->pc = 0x7F0972B4u;
    ctx->downcount -= 2;
    // 7F0972B4: cmpwi   r3, -1024
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0972B8:
    ctx->pc = 0x7F0972B8u;
    // 7F0972B8: bc    4, 0, 0x7F0972C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0972C0;
        }
    }

label_7F0972BC:
    ctx->pc = 0x7F0972BCu;
    ctx->downcount -= 1;
    // 7F0972BC: li      r3, -1024
    ctx->gpr[3] = (u32)(s32)(-1024);

label_7F0972C0:
    ctx->pc = 0x7F0972C0u;
    ctx->downcount -= 2;
    // 7F0972C0: cmpwi   r3, 1024
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0972C4:
    ctx->pc = 0x7F0972C4u;
    // 7F0972C4: bc    4, 1, 0x7F0972CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0972CC;
        }
    }

label_7F0972C8:
    ctx->pc = 0x7F0972C8u;
    ctx->downcount -= 1;
    // 7F0972C8: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F0972CC:
    ctx->pc = 0x7F0972CCu;
    ctx->downcount -= 4;
    // 7F0972CC: stw     r3, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0972D0:
    ctx->pc = 0x7F0972D0u;
    // 7F0972D0: lwz     r0, 1220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0972D4:
    ctx->pc = 0x7F0972D4u;
    // 7F0972D4: rlwinm. r0, r0, 0, 15, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00010000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0972D8:
    ctx->pc = 0x7F0972D8u;
    // 7F0972D8: bc    12, 2, 0x7F097304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097304;
        }
    }

label_7F0972DC:
    ctx->pc = 0x7F0972DCu;
    ctx->downcount -= 4;
    // 7F0972DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0972E0:
    ctx->pc = 0x7F0972E0u;
    // 7F0972E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0972E4:
    ctx->pc = 0x7F0972E4u;
    // 7F0972E4: stw     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0972E8:
    ctx->pc = 0x7F0972E8u;
    // 7F0972E8: bl      0x7F097100
    {
            ctx->lr = 0x7F0972ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F0972EC:
    ctx->pc = 0x7F0972ECu;
    ctx->downcount -= 2;
    // 7F0972EC: cmpwi   r3, 0
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

label_7F0972F0:
    ctx->pc = 0x7F0972F0u;
    // 7F0972F0: bc    4, 2, 0x7F097304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097304;
        }
    }

label_7F0972F4:
    ctx->pc = 0x7F0972F4u;
    ctx->downcount -= 4;
    // 7F0972F4: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F0972F8:
    ctx->pc = 0x7F0972F8u;
    // 7F0972F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0972FC:
    ctx->pc = 0x7F0972FCu;
    // 7F0972FC: addi    r4, r4, 29104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29104);

label_7F097300:
    ctx->pc = 0x7F097300u;
    // 7F097300: bl      0x7F09768C
    {
            ctx->lr = 0x7F097304u;
            goto label_7F09768C;
    }

label_7F097304:
    ctx->pc = 0x7F097304u;
    ctx->downcount -= 6;
    // 7F097304: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097308:
    ctx->pc = 0x7F097308u;
    // 7F097308: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F09730C:
    ctx->pc = 0x7F09730Cu;
    // 7F09730C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097310:
    ctx->pc = 0x7F097310u;
    // 7F097310: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F097314:
    ctx->pc = 0x7F097314u;
    // 7F097314: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097318:
    ctx->pc = 0x7F097318u;
    ctx->downcount -= 7;
    // 7F097318: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09731C:
    ctx->pc = 0x7F09731Cu;
    // 7F09731C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097320:
    ctx->pc = 0x7F097320u;
    // 7F097320: cmpwi   r4, 0
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

label_7F097324:
    ctx->pc = 0x7F097324u;
    // 7F097324: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097328:
    ctx->pc = 0x7F097328u;
    // 7F097328: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F09732C:
    ctx->pc = 0x7F09732Cu;
    // 7F09732C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097330:
    ctx->pc = 0x7F097330u;
    // 7F097330: bc    4, 2, 0x7F097340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097340;
        }
    }

label_7F097334:
    ctx->pc = 0x7F097334u;
    ctx->downcount -= 3;
    // 7F097334: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F097338:
    ctx->pc = 0x7F097338u;
    // 7F097338: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F09733C:
    ctx->pc = 0x7F09733Cu;
    // 7F09733C: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097340u;
            goto label_7F0976A4;
    }

label_7F097340:
    ctx->pc = 0x7F097340u;
    ctx->downcount -= 2;
    // 7F097340: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097344:
    ctx->pc = 0x7F097344u;
    // 7F097344: bl      0x7F097100
    {
            ctx->lr = 0x7F097348u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F097348:
    ctx->pc = 0x7F097348u;
    ctx->downcount -= 2;
    // 7F097348: cmpwi   r3, 0
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

label_7F09734C:
    ctx->pc = 0x7F09734Cu;
    // 7F09734C: bc    4, 2, 0x7F097374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097374;
        }
    }

label_7F097350:
    ctx->pc = 0x7F097350u;
    ctx->downcount -= 5;
    // 7F097350: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097354:
    ctx->pc = 0x7F097354u;
    // 7F097354: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097358:
    ctx->pc = 0x7F097358u;
    // 7F097358: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09735C:
    ctx->pc = 0x7F09735Cu;
    // 7F09735C: rlwinm. r0, r0, 0, 29, 29
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

label_7F097360:
    ctx->pc = 0x7F097360u;
    // 7F097360: bc    12, 2, 0x7F097374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097374;
        }
    }

label_7F097364:
    ctx->pc = 0x7F097364u;
    ctx->downcount -= 4;
    // 7F097364: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097368:
    ctx->pc = 0x7F097368u;
    // 7F097368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09736C:
    ctx->pc = 0x7F09736Cu;
    // 7F09736C: addi    r4, r4, 29576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29576);

label_7F097370:
    ctx->pc = 0x7F097370u;
    // 7F097370: bl      0x7F09768C
    {
            ctx->lr = 0x7F097374u;
            goto label_7F09768C;
    }

label_7F097374:
    ctx->pc = 0x7F097374u;
    ctx->downcount -= 6;
    // 7F097374: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097378:
    ctx->pc = 0x7F097378u;
    // 7F097378: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F09737C:
    ctx->pc = 0x7F09737Cu;
    // 7F09737C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097380:
    ctx->pc = 0x7F097380u;
    // 7F097380: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097384:
    ctx->pc = 0x7F097384u;
    // 7F097384: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097388:
    ctx->pc = 0x7F097388u;
    ctx->downcount -= 7;
    // 7F097388: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09738C:
    ctx->pc = 0x7F09738Cu;
    // 7F09738C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097390:
    ctx->pc = 0x7F097390u;
    // 7F097390: cmpwi   r4, 0
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

label_7F097394:
    ctx->pc = 0x7F097394u;
    // 7F097394: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097398:
    ctx->pc = 0x7F097398u;
    // 7F097398: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F09739C:
    ctx->pc = 0x7F09739Cu;
    // 7F09739C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0973A0:
    ctx->pc = 0x7F0973A0u;
    // 7F0973A0: bc    4, 2, 0x7F0973B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0973B0;
        }
    }

label_7F0973A4:
    ctx->pc = 0x7F0973A4u;
    ctx->downcount -= 3;
    // 7F0973A4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0973A8:
    ctx->pc = 0x7F0973A8u;
    // 7F0973A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0973AC:
    ctx->pc = 0x7F0973ACu;
    // 7F0973AC: bl      0x7F0976A4
    {
            ctx->lr = 0x7F0973B0u;
            goto label_7F0976A4;
    }

label_7F0973B0:
    ctx->pc = 0x7F0973B0u;
    ctx->downcount -= 2;
    // 7F0973B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0973B4:
    ctx->pc = 0x7F0973B4u;
    // 7F0973B4: bl      0x7F097100
    {
            ctx->lr = 0x7F0973B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F0973B8:
    ctx->pc = 0x7F0973B8u;
    ctx->downcount -= 2;
    // 7F0973B8: cmpwi   r3, 0
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

label_7F0973BC:
    ctx->pc = 0x7F0973BCu;
    // 7F0973BC: bc    4, 2, 0x7F0973DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0973DC;
        }
    }

label_7F0973C0:
    ctx->pc = 0x7F0973C0u;
    ctx->downcount -= 3;
    // 7F0973C0: lwz     r0, 1220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0973C4:
    ctx->pc = 0x7F0973C4u;
    // 7F0973C4: rlwinm. r0, r0, 0, 14, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00020000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0973C8:
    ctx->pc = 0x7F0973C8u;
    // 7F0973C8: bc    4, 2, 0x7F0973DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0973DC;
        }
    }

label_7F0973CC:
    ctx->pc = 0x7F0973CCu;
    ctx->downcount -= 4;
    // 7F0973CC: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F0973D0:
    ctx->pc = 0x7F0973D0u;
    // 7F0973D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0973D4:
    ctx->pc = 0x7F0973D4u;
    // 7F0973D4: addi    r4, r4, 29680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29680);

label_7F0973D8:
    ctx->pc = 0x7F0973D8u;
    // 7F0973D8: bl      0x7F09768C
    {
            ctx->lr = 0x7F0973DCu;
            goto label_7F09768C;
    }

label_7F0973DC:
    ctx->pc = 0x7F0973DCu;
    ctx->downcount -= 6;
    // 7F0973DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0973E0:
    ctx->pc = 0x7F0973E0u;
    // 7F0973E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0973E4:
    ctx->pc = 0x7F0973E4u;
    // 7F0973E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0973E8:
    ctx->pc = 0x7F0973E8u;
    // 7F0973E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0973EC:
    ctx->pc = 0x7F0973ECu;
    // 7F0973EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0973F0:
    ctx->pc = 0x7F0973F0u;
    ctx->downcount -= 7;
    // 7F0973F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0973F4:
    ctx->pc = 0x7F0973F4u;
    // 7F0973F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0973F8:
    ctx->pc = 0x7F0973F8u;
    // 7F0973F8: cmpwi   r4, 0
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

label_7F0973FC:
    ctx->pc = 0x7F0973FCu;
    // 7F0973FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097400:
    ctx->pc = 0x7F097400u;
    // 7F097400: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097404:
    ctx->pc = 0x7F097404u;
    // 7F097404: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097408:
    ctx->pc = 0x7F097408u;
    // 7F097408: bc    4, 2, 0x7F097418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097418;
        }
    }

label_7F09740C:
    ctx->pc = 0x7F09740Cu;
    ctx->downcount -= 3;
    // 7F09740C: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F097410:
    ctx->pc = 0x7F097410u;
    // 7F097410: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F097414:
    ctx->pc = 0x7F097414u;
    // 7F097414: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097418u;
            goto label_7F0976A4;
    }

label_7F097418:
    ctx->pc = 0x7F097418u;
    ctx->downcount -= 2;
    // 7F097418: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09741C:
    ctx->pc = 0x7F09741Cu;
    // 7F09741C: bl      0x7F097100
    {
            ctx->lr = 0x7F097420u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F097420:
    ctx->pc = 0x7F097420u;
    ctx->downcount -= 2;
    // 7F097420: cmpwi   r3, 0
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

label_7F097424:
    ctx->pc = 0x7F097424u;
    // 7F097424: bc    4, 2, 0x7F09744C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F09744C;
        }
    }

label_7F097428:
    ctx->pc = 0x7F097428u;
    ctx->downcount -= 5;
    // 7F097428: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09742C:
    ctx->pc = 0x7F09742Cu;
    // 7F09742C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097430:
    ctx->pc = 0x7F097430u;
    // 7F097430: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097434:
    ctx->pc = 0x7F097434u;
    // 7F097434: rlwinm. r0, r0, 0, 29, 29
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

label_7F097438:
    ctx->pc = 0x7F097438u;
    // 7F097438: bc    12, 2, 0x7F09744C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09744C;
        }
    }

label_7F09743C:
    ctx->pc = 0x7F09743Cu;
    ctx->downcount -= 4;
    // 7F09743C: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097440:
    ctx->pc = 0x7F097440u;
    // 7F097440: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097444:
    ctx->pc = 0x7F097444u;
    // 7F097444: addi    r4, r4, 29104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29104);

label_7F097448:
    ctx->pc = 0x7F097448u;
    // 7F097448: bl      0x7F09768C
    {
            ctx->lr = 0x7F09744Cu;
            goto label_7F09768C;
    }

label_7F09744C:
    ctx->pc = 0x7F09744Cu;
    ctx->downcount -= 6;
    // 7F09744C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097450:
    ctx->pc = 0x7F097450u;
    // 7F097450: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097454:
    ctx->pc = 0x7F097454u;
    // 7F097454: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097458:
    ctx->pc = 0x7F097458u;
    // 7F097458: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F09745C:
    ctx->pc = 0x7F09745Cu;
    // 7F09745C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097460:
    ctx->pc = 0x7F097460u;
    ctx->downcount -= 7;
    // 7F097460: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097464:
    ctx->pc = 0x7F097464u;
    // 7F097464: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097468:
    ctx->pc = 0x7F097468u;
    // 7F097468: cmpwi   r4, 0
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

label_7F09746C:
    ctx->pc = 0x7F09746Cu;
    // 7F09746C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097470:
    ctx->pc = 0x7F097470u;
    // 7F097470: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097474:
    ctx->pc = 0x7F097474u;
    // 7F097474: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097478:
    ctx->pc = 0x7F097478u;
    // 7F097478: bc    4, 2, 0x7F097488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097488;
        }
    }

label_7F09747C:
    ctx->pc = 0x7F09747Cu;
    ctx->downcount -= 3;
    // 7F09747C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F097480:
    ctx->pc = 0x7F097480u;
    // 7F097480: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F097484:
    ctx->pc = 0x7F097484u;
    // 7F097484: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097488u;
            goto label_7F0976A4;
    }

label_7F097488:
    ctx->pc = 0x7F097488u;
    ctx->downcount -= 2;
    // 7F097488: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09748C:
    ctx->pc = 0x7F09748Cu;
    // 7F09748C: bl      0x7F097100
    {
            ctx->lr = 0x7F097490u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F097490:
    ctx->pc = 0x7F097490u;
    ctx->downcount -= 2;
    // 7F097490: cmpwi   r3, 0
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

label_7F097494:
    ctx->pc = 0x7F097494u;
    // 7F097494: bc    4, 2, 0x7F0974BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0974BC;
        }
    }

label_7F097498:
    ctx->pc = 0x7F097498u;
    ctx->downcount -= 5;
    // 7F097498: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09749C:
    ctx->pc = 0x7F09749Cu;
    // 7F09749C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0974A0:
    ctx->pc = 0x7F0974A0u;
    // 7F0974A0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0974A4:
    ctx->pc = 0x7F0974A4u;
    // 7F0974A4: rlwinm. r0, r0, 0, 29, 29
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

label_7F0974A8:
    ctx->pc = 0x7F0974A8u;
    // 7F0974A8: bc    12, 2, 0x7F0974BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0974BC;
        }
    }

label_7F0974AC:
    ctx->pc = 0x7F0974ACu;
    ctx->downcount -= 4;
    // 7F0974AC: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F0974B0:
    ctx->pc = 0x7F0974B0u;
    // 7F0974B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0974B4:
    ctx->pc = 0x7F0974B4u;
    // 7F0974B4: addi    r4, r4, 29904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29904);

label_7F0974B8:
    ctx->pc = 0x7F0974B8u;
    // 7F0974B8: bl      0x7F09768C
    {
            ctx->lr = 0x7F0974BCu;
            goto label_7F09768C;
    }

label_7F0974BC:
    ctx->pc = 0x7F0974BCu;
    ctx->downcount -= 6;
    // 7F0974BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0974C0:
    ctx->pc = 0x7F0974C0u;
    // 7F0974C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0974C4:
    ctx->pc = 0x7F0974C4u;
    // 7F0974C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0974C8:
    ctx->pc = 0x7F0974C8u;
    // 7F0974C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0974CC:
    ctx->pc = 0x7F0974CCu;
    // 7F0974CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0974D0:
    ctx->pc = 0x7F0974D0u;
    ctx->downcount -= 7;
    // 7F0974D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0974D4:
    ctx->pc = 0x7F0974D4u;
    // 7F0974D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0974D8:
    ctx->pc = 0x7F0974D8u;
    // 7F0974D8: cmpwi   r4, 0
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

label_7F0974DC:
    ctx->pc = 0x7F0974DCu;
    // 7F0974DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0974E0:
    ctx->pc = 0x7F0974E0u;
    // 7F0974E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0974E4:
    ctx->pc = 0x7F0974E4u;
    // 7F0974E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0974E8:
    ctx->pc = 0x7F0974E8u;
    // 7F0974E8: bc    4, 2, 0x7F0974F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0974F8;
        }
    }

label_7F0974EC:
    ctx->pc = 0x7F0974ECu;
    ctx->downcount -= 3;
    // 7F0974EC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0974F0:
    ctx->pc = 0x7F0974F0u;
    // 7F0974F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0974F4:
    ctx->pc = 0x7F0974F4u;
    // 7F0974F4: bl      0x7F0976A4
    {
            ctx->lr = 0x7F0974F8u;
            goto label_7F0976A4;
    }

label_7F0974F8:
    ctx->pc = 0x7F0974F8u;
    ctx->downcount -= 2;
    // 7F0974F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0974FC:
    ctx->pc = 0x7F0974FCu;
    // 7F0974FC: bl      0x7F097100
    {
            ctx->lr = 0x7F097500u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F097500:
    ctx->pc = 0x7F097500u;
    ctx->downcount -= 2;
    // 7F097500: cmpwi   r3, 0
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

label_7F097504:
    ctx->pc = 0x7F097504u;
    // 7F097504: bc    4, 2, 0x7F097524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097524;
        }
    }

label_7F097508:
    ctx->pc = 0x7F097508u;
    ctx->downcount -= 3;
    // 7F097508: lwz     r0, 1220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09750C:
    ctx->pc = 0x7F09750Cu;
    // 7F09750C: rlwinm. r0, r0, 0, 14, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00020000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097510:
    ctx->pc = 0x7F097510u;
    // 7F097510: bc    4, 2, 0x7F097524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097524;
        }
    }

label_7F097514:
    ctx->pc = 0x7F097514u;
    ctx->downcount -= 4;
    // 7F097514: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097518:
    ctx->pc = 0x7F097518u;
    // 7F097518: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09751C:
    ctx->pc = 0x7F09751Cu;
    // 7F09751C: addi    r4, r4, 30008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30008);

label_7F097520:
    ctx->pc = 0x7F097520u;
    // 7F097520: bl      0x7F09768C
    {
            ctx->lr = 0x7F097524u;
            goto label_7F09768C;
    }

label_7F097524:
    ctx->pc = 0x7F097524u;
    ctx->downcount -= 6;
    // 7F097524: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097528:
    ctx->pc = 0x7F097528u;
    // 7F097528: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F09752C:
    ctx->pc = 0x7F09752Cu;
    // 7F09752C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097530:
    ctx->pc = 0x7F097530u;
    // 7F097530: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097534:
    ctx->pc = 0x7F097534u;
    // 7F097534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097538:
    ctx->pc = 0x7F097538u;
    ctx->downcount -= 7;
    // 7F097538: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09753C:
    ctx->pc = 0x7F09753Cu;
    // 7F09753C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097540:
    ctx->pc = 0x7F097540u;
    // 7F097540: cmpwi   r4, 0
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

label_7F097544:
    ctx->pc = 0x7F097544u;
    // 7F097544: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097548:
    ctx->pc = 0x7F097548u;
    // 7F097548: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F09754C:
    ctx->pc = 0x7F09754Cu;
    // 7F09754C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097550:
    ctx->pc = 0x7F097550u;
    // 7F097550: bc    4, 2, 0x7F097560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097560;
        }
    }

label_7F097554:
    ctx->pc = 0x7F097554u;
    ctx->downcount -= 3;
    // 7F097554: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F097558:
    ctx->pc = 0x7F097558u;
    // 7F097558: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F09755C:
    ctx->pc = 0x7F09755Cu;
    // 7F09755C: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097560u;
            goto label_7F0976A4;
    }

label_7F097560:
    ctx->pc = 0x7F097560u;
    ctx->downcount -= 2;
    // 7F097560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097564:
    ctx->pc = 0x7F097564u;
    // 7F097564: bl      0x7F097100
    {
            ctx->lr = 0x7F097568u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097100u;
                return;
            }
            goto label_7F097100;
    }

label_7F097568:
    ctx->pc = 0x7F097568u;
    ctx->downcount -= 2;
    // 7F097568: cmpwi   r3, 0
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

label_7F09756C:
    ctx->pc = 0x7F09756Cu;
    // 7F09756C: bc    4, 2, 0x7F097594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097594;
        }
    }

label_7F097570:
    ctx->pc = 0x7F097570u;
    ctx->downcount -= 5;
    // 7F097570: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097574:
    ctx->pc = 0x7F097574u;
    // 7F097574: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097578:
    ctx->pc = 0x7F097578u;
    // 7F097578: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F09757C:
    ctx->pc = 0x7F09757Cu;
    // 7F09757C: rlwinm. r0, r0, 0, 29, 29
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

label_7F097580:
    ctx->pc = 0x7F097580u;
    // 7F097580: bc    12, 2, 0x7F097594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097594;
        }
    }

label_7F097584:
    ctx->pc = 0x7F097584u;
    ctx->downcount -= 4;
    // 7F097584: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F097588:
    ctx->pc = 0x7F097588u;
    // 7F097588: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F09758C:
    ctx->pc = 0x7F09758Cu;
    // 7F09758C: addi    r4, r4, 29104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29104);

label_7F097590:
    ctx->pc = 0x7F097590u;
    // 7F097590: bl      0x7F09768C
    {
            ctx->lr = 0x7F097594u;
            goto label_7F09768C;
    }

label_7F097594:
    ctx->pc = 0x7F097594u;
    ctx->downcount -= 6;
    // 7F097594: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097598:
    ctx->pc = 0x7F097598u;
    // 7F097598: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F09759C:
    ctx->pc = 0x7F09759Cu;
    // 7F09759C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0975A0:
    ctx->pc = 0x7F0975A0u;
    // 7F0975A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0975A4:
    ctx->pc = 0x7F0975A4u;
    // 7F0975A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0975A8:
    ctx->pc = 0x7F0975A8u;
    ctx->downcount -= 7;
    // 7F0975A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0975AC:
    ctx->pc = 0x7F0975ACu;
    // 7F0975AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0975B0:
    ctx->pc = 0x7F0975B0u;
    // 7F0975B0: cmpwi   r4, 0
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

label_7F0975B4:
    ctx->pc = 0x7F0975B4u;
    // 7F0975B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0975B8:
    ctx->pc = 0x7F0975B8u;
    // 7F0975B8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0975BC:
    ctx->pc = 0x7F0975BCu;
    // 7F0975BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0975C0:
    ctx->pc = 0x7F0975C0u;
    // 7F0975C0: bc    4, 2, 0x7F0975E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0975E0;
        }
    }

label_7F0975C4:
    ctx->pc = 0x7F0975C4u;
    ctx->downcount -= 3;
    // 7F0975C4: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_7F0975C8:
    ctx->pc = 0x7F0975C8u;
    // 7F0975C8: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0975CC:
    ctx->pc = 0x7F0975CCu;
    // 7F0975CC: bl      0x7F0976A4
    {
            ctx->lr = 0x7F0975D0u;
            goto label_7F0976A4;
    }

label_7F0975D0:
    ctx->pc = 0x7F0975D0u;
    ctx->downcount -= 4;
    // 7F0975D0: lha     r4, 1244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1244);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0975D4:
    ctx->pc = 0x7F0975D4u;
    // 7F0975D4: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0975D8:
    ctx->pc = 0x7F0975D8u;
    // 7F0975D8: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0975DC:
    ctx->pc = 0x7F0975DCu;
    // 7F0975DC: bl      0x7F011A74
    {
            ctx->lr = 0x7F0975E0u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0975E0:
    ctx->pc = 0x7F0975E0u;
    ctx->downcount -= 5;
    // 7F0975E0: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0975E4:
    ctx->pc = 0x7F0975E4u;
    // 7F0975E4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0975E8:
    ctx->pc = 0x7F0975E8u;
    // 7F0975E8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0975EC:
    ctx->pc = 0x7F0975ECu;
    // 7F0975EC: rlwinm. r0, r0, 0, 29, 29
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

label_7F0975F0:
    ctx->pc = 0x7F0975F0u;
    // 7F0975F0: bc    12, 2, 0x7F097604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097604;
        }
    }

label_7F0975F4:
    ctx->pc = 0x7F0975F4u;
    ctx->downcount -= 4;
    // 7F0975F4: lis     r4, 32521
    ctx->gpr[4] = ((u32)(s32)(32521) << 16);

label_7F0975F8:
    ctx->pc = 0x7F0975F8u;
    // 7F0975F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0975FC:
    ctx->pc = 0x7F0975FCu;
    // 7F0975FC: addi    r4, r4, 29104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29104);

label_7F097600:
    ctx->pc = 0x7F097600u;
    // 7F097600: bl      0x7F09768C
    {
            ctx->lr = 0x7F097604u;
            goto label_7F09768C;
    }

label_7F097604:
    ctx->pc = 0x7F097604u;
    ctx->downcount -= 6;
    // 7F097604: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097608:
    ctx->pc = 0x7F097608u;
    // 7F097608: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F09760C:
    ctx->pc = 0x7F09760Cu;
    // 7F09760C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097610:
    ctx->pc = 0x7F097610u;
    // 7F097610: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097614:
    ctx->pc = 0x7F097614u;
    // 7F097614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097618:
    ctx->pc = 0x7F097618u;
    ctx->downcount -= 22;
    // 7F097618: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F09761C:
    ctx->pc = 0x7F09761Cu;
    // 7F09761C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097620:
    ctx->pc = 0x7F097620u;
    // 7F097620: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097624:
    ctx->pc = 0x7F097624u;
    // 7F097624: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F097628:
    ctx->pc = 0x7F097628u;
    // 7F097628: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F09762C:
    ctx->pc = 0x7F09762Cu;
    // 7F09762C: lwz     r4, 1208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097630:
    ctx->pc = 0x7F097630u;
    // 7F097630: lwz     r31, 1200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1200);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097634:
    ctx->pc = 0x7F097634u;
    // 7F097634: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F097638:
    ctx->pc = 0x7F097638u;
    // 7F097638: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F09763C:
    ctx->pc = 0x7F09763Cu;
    // 7F09763C: cmplwi  r31, 0x0000
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

label_7F097640:
    ctx->pc = 0x7F097640u;
    // 7F097640: stw     r0, 1208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097644:
    ctx->pc = 0x7F097644u;
    // 7F097644: bc    4, 2, 0x7F097664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097664;
        }
    }

label_7F097648:
    ctx->pc = 0x7F097648u;
    ctx->downcount -= 7;
    // 7F097648: lis     r5, 32521
    ctx->gpr[5] = ((u32)(s32)(32521) << 16);

label_7F09764C:
    ctx->pc = 0x7F09764Cu;
    // 7F09764C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F097650:
    ctx->pc = 0x7F097650u;
    // 7F097650: addi    r0, r5, 29104
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(29104);

label_7F097654:
    ctx->pc = 0x7F097654u;
    // 7F097654: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F097658:
    ctx->pc = 0x7F097658u;
    // 7F097658: stw     r0, 1200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09765C:
    ctx->pc = 0x7F09765Cu;
    // 7F09765C: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F097660:
    ctx->pc = 0x7F097660u;
    // 7F097660: bl      0x7F0976A4
    {
            ctx->lr = 0x7F097664u;
            goto label_7F0976A4;
    }

label_7F097664:
    ctx->pc = 0x7F097664u;
    ctx->downcount -= 6;
    // 7F097664: or   r12, r31, r31
    {
        ctx->gpr[12] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097668:
    ctx->pc = 0x7F097668u;
    // 7F097668: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F09766C:
    ctx->pc = 0x7F09766Cu;
    // 7F09766C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F097670:
    ctx->pc = 0x7F097670u;
    // 7F097670: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F097674:
    ctx->pc = 0x7F097674u;
    // 7F097674: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F097678u;
            ctx->pc = target;
            return;
        }
    }

label_7F097678:
    ctx->pc = 0x7F097678u;
    ctx->downcount -= 16;
    // 7F097678: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F09767C:
    ctx->pc = 0x7F09767Cu;
    // 7F09767C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097680:
    ctx->pc = 0x7F097680u;
    // 7F097680: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097684:
    ctx->pc = 0x7F097684u;
    // 7F097684: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F097688:
    ctx->pc = 0x7F097688u;
    // 7F097688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09768C:
    ctx->pc = 0x7F09768Cu;
    ctx->downcount -= 6;
    // 7F09768C: stw     r4, 1200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F097690:
    ctx->pc = 0x7F097690u;
    // 7F097690: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F097694:
    ctx->pc = 0x7F097694u;
    // 7F097694: stw     r0, 1208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097698:
    ctx->pc = 0x7F097698u;
    // 7F097698: sth     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09769C:
    ctx->pc = 0x7F09769Cu;
    // 7F09769C: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0976A0:
    ctx->pc = 0x7F0976A0u;
    // 7F0976A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0976A4:
    ctx->pc = 0x7F0976A4u;
    ctx->downcount -= 12;
    // 7F0976A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0976A8:
    ctx->pc = 0x7F0976A8u;
    // 7F0976A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0976AC:
    ctx->pc = 0x7F0976ACu;
    // 7F0976AC: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0976B0:
    ctx->pc = 0x7F0976B0u;
    // 7F0976B0: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0976B4:
    ctx->pc = 0x7F0976B4u;
    // 7F0976B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0976B8:
    ctx->pc = 0x7F0976B8u;
    // 7F0976B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0976BC:
    ctx->pc = 0x7F0976BCu;
    // 7F0976BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0976C0:
    ctx->pc = 0x7F0976C0u;
    // 7F0976C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0976C4:
    ctx->pc = 0x7F0976C4u;
    // 7F0976C4: stw     r4, 1216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1216);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0976C8:
    ctx->pc = 0x7F0976C8u;
    // 7F0976C8: addi    r3, r3, 448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(448);

label_7F0976CC:
    ctx->pc = 0x7F0976CCu;
    // 7F0976CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0976D0:
    ctx->pc = 0x7F0976D0u;
    // 7F0976D0: bl      0x7F042C94
    {
            ctx->lr = 0x7F0976D4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0976D4:
    ctx->pc = 0x7F0976D4u;
    ctx->downcount -= 5;
    // 7F0976D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0976D8:
    ctx->pc = 0x7F0976D8u;
    // 7F0976D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0976DC:
    ctx->pc = 0x7F0976DCu;
    // 7F0976DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0976E0:
    ctx->pc = 0x7F0976E0u;
    // 7F0976E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0976E4:
    ctx->pc = 0x7F0976E4u;
    ctx->downcount -= 5;
    // 7F0976E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0976E8:
    ctx->pc = 0x7F0976E8u;
    // 7F0976E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0976EC:
    ctx->pc = 0x7F0976ECu;
    // 7F0976EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0976F0:
    ctx->pc = 0x7F0976F0u;
    // 7F0976F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0976F4:
    ctx->pc = 0x7F0976F4u;
    // 7F0976F4: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0976F8u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0976F8:
    ctx->pc = 0x7F0976F8u;
    ctx->downcount -= 14;
    // 7F0976F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0976FC:
    ctx->pc = 0x7F0976FCu;
    // 7F0976FC: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097700:
    ctx->pc = 0x7F097700u;
    // 7F097700: addi    r4, r3, 23224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(23224);

label_7F097704:
    ctx->pc = 0x7F097704u;
    // 7F097704: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097708:
    ctx->pc = 0x7F097708u;
    // 7F097708: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F09770C:
    ctx->pc = 0x7F09770Cu;
    // 7F09770C: srawi r0, r0, 1
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

label_7F097710:
    ctx->pc = 0x7F097710u;
    // 7F097710: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F097714:
    ctx->pc = 0x7F097714u;
    // 7F097714: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F097718:
    ctx->pc = 0x7F097718u;
    // 7F097718: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09771C:
    ctx->pc = 0x7F09771Cu;
    // 7F09771C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097720:
    ctx->pc = 0x7F097720u;
    // 7F097720: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097724:
    ctx->pc = 0x7F097724u;
    // 7F097724: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097728:
    ctx->pc = 0x7F097728u;
    // 7F097728: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F09772C:
    ctx->pc = 0x7F09772Cu;
    ctx->downcount -= 21;
    // 7F09772C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097730:
    ctx->pc = 0x7F097730u;
    // 7F097730: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097734:
    ctx->pc = 0x7F097734u;
    // 7F097734: lis     r7, 32586
    ctx->gpr[7] = ((u32)(s32)(32586) << 16);

label_7F097738:
    ctx->pc = 0x7F097738u;
    // 7F097738: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09773C:
    ctx->pc = 0x7F09773Cu;
    // 7F09773C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F097740:
    ctx->pc = 0x7F097740u;
    // 7F097740: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097744:
    ctx->pc = 0x7F097744u;
    // 7F097744: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F097748:
    ctx->pc = 0x7F097748u;
    // 7F097748: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F09774C:
    ctx->pc = 0x7F09774Cu;
    // 7F09774C: lwz     r0, 28968(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097750:
    ctx->pc = 0x7F097750u;
    // 7F097750: cmpwi   r0, 0
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

label_7F097754:
    ctx->pc = 0x7F097754u;
    // 7F097754: bc    12, 2, 0x7F09775C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F09775C;
        }
    }

label_7F097758:
    ctx->pc = 0x7F097758u;
    ctx->downcount -= 1;
    // 7F097758: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F09775C:
    ctx->pc = 0x7F09775Cu;
    ctx->downcount -= 59;
    // 7F09775C: rlwinm r3, r4, 12, 0, 19
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 12u) & 0xFFFFF000u;
    }

label_7F097760:
    ctx->pc = 0x7F097760u;
    // 7F097760: li      r0, 1178
    ctx->gpr[0] = (u32)(s32)(1178);

label_7F097764:
    ctx->pc = 0x7F097764u;
    // 7F097764: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F097768:
    ctx->pc = 0x7F097768u;
    // 7F097768: lha     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09776C:
    ctx->pc = 0x7F09776Cu;
    // 7F09776C: cmpwi   r4, 0
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

label_7F097770:
    ctx->pc = 0x7F097770u;
    // 7F097770: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F097774:
    ctx->pc = 0x7F097774u;
    // 7F097774: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097778:
    ctx->pc = 0x7F097778u;
    // 7F097778: lha     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09777C:
    ctx->pc = 0x7F09777Cu;
    // 7F09777C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F097780:
    ctx->pc = 0x7F097780u;
    // 7F097780: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097784:
    ctx->pc = 0x7F097784u;
    // 7F097784: lha     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097788:
    ctx->pc = 0x7F097788u;
    // 7F097788: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F09778C:
    ctx->pc = 0x7F09778Cu;
    // 7F09778C: sth     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097790:
    ctx->pc = 0x7F097790u;
    // 7F097790: lha     r0, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097794:
    ctx->pc = 0x7F097794u;
    // 7F097794: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F097798:
    ctx->pc = 0x7F097798u;
    // 7F097798: sth     r0, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09779C:
    ctx->pc = 0x7F09779Cu;
    // 7F09779C: lha     r3, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0977A0:
    ctx->pc = 0x7F0977A0u;
    // 7F0977A0: lha     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0977A4:
    ctx->pc = 0x7F0977A4u;
    // 7F0977A4: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0977A8:
    ctx->pc = 0x7F0977A8u;
    // 7F0977A8: bc    4, 0, 0x7F0977B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0977B0;
        }
    }

label_7F0977AC:
    ctx->pc = 0x7F0977ACu;
    ctx->downcount -= 1;
    // 7F0977AC: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0977B0:
    ctx->pc = 0x7F0977B0u;
    ctx->downcount -= 4;
    // 7F0977B0: rlwinm r28, r0, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0977B4:
    ctx->pc = 0x7F0977B4u;
    // 7F0977B4: lha     r3, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0977B8:
    ctx->pc = 0x7F0977B8u;
    // 7F0977B8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0977BC:
    ctx->pc = 0x7F0977BCu;
    // 7F0977BC: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F0977C0u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F0977C0:
    ctx->pc = 0x7F0977C0u;
    ctx->downcount -= 4;
    // 7F0977C0: sth     r3, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0977C4:
    ctx->pc = 0x7F0977C4u;
    // 7F0977C4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0977C8:
    ctx->pc = 0x7F0977C8u;
    // 7F0977C8: lha     r3, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0977CC:
    ctx->pc = 0x7F0977CCu;
    // 7F0977CC: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F0977D0u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F0977D0:
    ctx->pc = 0x7F0977D0u;
    ctx->downcount -= 21;
    // 7F0977D0: sth     r3, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0977D4:
    ctx->pc = 0x7F0977D4u;
    // 7F0977D4: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0977D8:
    ctx->pc = 0x7F0977D8u;
    // 7F0977D8: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0977DC:
    ctx->pc = 0x7F0977DCu;
    // 7F0977DC: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0977E0:
    ctx->pc = 0x7F0977E0u;
    // 7F0977E0: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0977E4:
    ctx->pc = 0x7F0977E4u;
    // 7F0977E4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0977E8:
    ctx->pc = 0x7F0977E8u;
    // 7F0977E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0977EC:
    ctx->pc = 0x7F0977ECu;
    // 7F0977EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0977F0:
    ctx->pc = 0x7F0977F0u;
    // 7F0977F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0977F4:
    ctx->pc = 0x7F0977F4u;
    // 7F0977F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F0977F8:
    ctx->pc = 0x7F0977F8u;
    ctx->downcount -= 40;
    // 7F0977F8: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0977FC:
    ctx->pc = 0x7F0977FCu;
    // 7F0977FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097800:
    ctx->pc = 0x7F097800u;
    // 7F097800: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F097804:
    ctx->pc = 0x7F097804u;
    // 7F097804: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097808:
    ctx->pc = 0x7F097808u;
    // 7F097808: stmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F09780C:
    ctx->pc = 0x7F09780Cu;
    // 7F09780C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097810:
    ctx->pc = 0x7F097810u;
    // 7F097810: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F097814:
    ctx->pc = 0x7F097814u;
    // 7F097814: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F097818:
    ctx->pc = 0x7F097818u;
    // 7F097818: addi    r7, r3, 12808
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F09781C:
    ctx->pc = 0x7F09781Cu;
    // 7F09781C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F097820:
    ctx->pc = 0x7F097820u;
    // 7F097820: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F097824:
    ctx->pc = 0x7F097824u;
    // 7F097824: lfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F097824u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097828:
    ctx->pc = 0x7F097828u;
    // 7F097828: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09782C:
    ctx->pc = 0x7F09782Cu;
    // 7F09782C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097830:
    ctx->pc = 0x7F097830u;
    // 7F097830: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097830u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F097834:
    ctx->pc = 0x7F097834u;
    // 7F097834: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F097838:
    ctx->pc = 0x7F097838u;
    // 7F097838: addi    r3, r8, -6176
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(-6176);

label_7F09783C:
    ctx->pc = 0x7F09783Cu;
    // 7F09783C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F097840:
    ctx->pc = 0x7F097840u;
    // 7F097840: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097844:
    ctx->pc = 0x7F097844u;
    // 7F097844: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F097848:
    ctx->pc = 0x7F097848u;
    // 7F097848: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09784C:
    ctx->pc = 0x7F09784Cu;
    // 7F09784C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F097850:
    ctx->pc = 0x7F097850u;
    // 7F097850: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F097854:
    ctx->pc = 0x7F097854u;
    // 7F097854: lha     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097858:
    ctx->pc = 0x7F097858u;
    // 7F097858: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F09785C:
    ctx->pc = 0x7F09785Cu;
    // 7F09785C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097860:
    ctx->pc = 0x7F097860u;
    // 7F097860: lwz     r31, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097864:
    ctx->pc = 0x7F097864u;
    // 7F097864: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F097868:
    ctx->pc = 0x7F097868u;
    // 7F097868: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09786C:
    ctx->pc = 0x7F09786Cu;
    // 7F09786C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F097870u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F097870:
    ctx->pc = 0x7F097870u;
    ctx->downcount -= 82;
    // 7F097870: lha     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097874:
    ctx->pc = 0x7F097874u;
    // 7F097874: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F097878:
    ctx->pc = 0x7F097878u;
    // 7F097878: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F09787C:
    ctx->pc = 0x7F09787Cu;
    // 7F09787C: lha     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097880:
    ctx->pc = 0x7F097880u;
    // 7F097880: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F097884:
    ctx->pc = 0x7F097884u;
    // 7F097884: lha     r3, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097888:
    ctx->pc = 0x7F097888u;
    // 7F097888: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F09788C:
    ctx->pc = 0x7F09788Cu;
    // 7F09788C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F097890:
    ctx->pc = 0x7F097890u;
    // 7F097890: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F097894:
    ctx->pc = 0x7F097894u;
    // 7F097894: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F097898:
    ctx->pc = 0x7F097898u;
    // 7F097898: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F09789C:
    ctx->pc = 0x7F09789Cu;
    // 7F09789C: addi    r5, r3, -6192
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6192);

label_7F0978A0:
    ctx->pc = 0x7F0978A0u;
    // 7F0978A0: lfd     f4, -6184(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0978A0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6184);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0978A4:
    ctx->pc = 0x7F0978A4u;
    // 7F0978A4: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0978A8:
    ctx->pc = 0x7F0978A8u;
    // 7F0978A8: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0978AC:
    ctx->pc = 0x7F0978ACu;
    // 7F0978AC: stw     r4, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0978B0:
    ctx->pc = 0x7F0978B0u;
    // 7F0978B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0978B4:
    ctx->pc = 0x7F0978B4u;
    // 7F0978B4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0978B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0978B8:
    ctx->pc = 0x7F0978B8u;
    // 7F0978B8: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0978B8u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F0978BC:
    ctx->pc = 0x7F0978BCu;
    // 7F0978BC: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0978C0:
    ctx->pc = 0x7F0978C0u;
    // 7F0978C0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0978C4:
    ctx->pc = 0x7F0978C4u;
    // 7F0978C4: lfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0978C8:
    ctx->pc = 0x7F0978C8u;
    // 7F0978C8: fdivs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0978C8u)) return;
    ppc_fdivs(ctx, 2, 0, 3);

label_7F0978CC:
    ctx->pc = 0x7F0978CCu;
    // 7F0978CC: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0978D0:
    ctx->pc = 0x7F0978D0u;
    // 7F0978D0: stw     r6, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0978D4:
    ctx->pc = 0x7F0978D4u;
    // 7F0978D4: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0978D8:
    ctx->pc = 0x7F0978D8u;
    // 7F0978D8: fsubs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0978D8u)) return;
    ppc_fsubs(ctx, 1, 1, 4);

label_7F0978DC:
    ctx->pc = 0x7F0978DCu;
    // 7F0978DC: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0978E0:
    ctx->pc = 0x7F0978E0u;
    // 7F0978E0: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0978E0u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F0978E4:
    ctx->pc = 0x7F0978E4u;
    // 7F0978E4: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0978E4u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F0978E8:
    ctx->pc = 0x7F0978E8u;
    // 7F0978E8: fdivs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0978E8u)) return;
    ppc_fdivs(ctx, 0, 0, 3);

label_7F0978EC:
    ctx->pc = 0x7F0978ECu;
    // 7F0978EC: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0978F0:
    ctx->pc = 0x7F0978F0u;
    // 7F0978F0: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0978F4:
    ctx->pc = 0x7F0978F4u;
    // 7F0978F4: bl      0x7F3B3648
    {
            ctx->lr = 0x7F0978F8u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F0978F8:
    ctx->pc = 0x7F0978F8u;
    ctx->downcount -= 23;
    // 7F0978F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0978FC:
    ctx->pc = 0x7F0978FCu;
    // 7F0978FC: lfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0978FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F097900:
    ctx->pc = 0x7F097900u;
    // 7F097900: lfs     f3, -6192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F097900u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F097904:
    ctx->pc = 0x7F097904u;
    // 7F097904: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097908:
    ctx->pc = 0x7F097908u;
    // 7F097908: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F09790C:
    ctx->pc = 0x7F09790Cu;
    // 7F09790C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F097910:
    ctx->pc = 0x7F097910u;
    // 7F097910: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097914:
    ctx->pc = 0x7F097914u;
    // 7F097914: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F097914u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F097918:
    ctx->pc = 0x7F097918u;
    // 7F097918: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F097918u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F09791C:
    ctx->pc = 0x7F09791Cu;
    // 7F09791C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09791Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F097920:
    ctx->pc = 0x7F097920u;
    // 7F097920: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F097920u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F097924:
    ctx->pc = 0x7F097924u;
    // 7F097924: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F097924u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F097928:
    ctx->pc = 0x7F097928u;
    // 7F097928: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097928u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F09792C:
    ctx->pc = 0x7F09792Cu;
    // 7F09792C: stfd     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F09792Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F097930:
    ctx->pc = 0x7F097930u;
    // 7F097930: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F097934:
    ctx->pc = 0x7F097934u;
    // 7F097934: lwz     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F097938:
    ctx->pc = 0x7F097938u;
    // 7F097938: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F09793C:
    ctx->pc = 0x7F09793Cu;
    // 7F09793C: lwz     r5, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F097940:
    ctx->pc = 0x7F097940u;
    // 7F097940: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097944:
    ctx->pc = 0x7F097944u;
    // 7F097944: sth     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F097948:
    ctx->pc = 0x7F097948u;
    // 7F097948: sth     r5, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F09794C:
    ctx->pc = 0x7F09794Cu;
    // 7F09794C: sth     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097950:
    ctx->pc = 0x7F097950u;
    // 7F097950: bl      0x7F093820
    {
            ctx->lr = 0x7F097954u;
            ctx->pc = 0x7F093820u;
            return;
    }

label_7F097954:
    ctx->pc = 0x7F097954u;
    ctx->downcount -= 4;
    // 7F097954: lha     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097958:
    ctx->pc = 0x7F097958u;
    // 7F097958: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F09795C:
    ctx->pc = 0x7F09795Cu;
    // 7F09795C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F097960:
    ctx->pc = 0x7F097960u;
    // 7F097960: bl      0x7F093820
    {
            ctx->lr = 0x7F097964u;
            ctx->pc = 0x7F093820u;
            return;
    }

label_7F097964:
    ctx->pc = 0x7F097964u;
    ctx->downcount -= 15;
    // 7F097964: lha     r4, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097968:
    ctx->pc = 0x7F097968u;
    // 7F097968: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F09796C:
    ctx->pc = 0x7F09796Cu;
    // 7F09796C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F097970:
    ctx->pc = 0x7F097970u;
    // 7F097970: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F097974:
    ctx->pc = 0x7F097974u;
    // 7F097974: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F097978:
    ctx->pc = 0x7F097978u;
    // 7F097978: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F09797C:
    ctx->pc = 0x7F09797Cu;
    // 7F09797C: addi    r6, r5, -6184
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-6184);

label_7F097980:
    ctx->pc = 0x7F097980u;
    // 7F097980: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097984:
    ctx->pc = 0x7F097984u;
    // 7F097984: stw     r4, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F097988:
    ctx->pc = 0x7F097988u;
    // 7F097988: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F09798C:
    ctx->pc = 0x7F09798Cu;
    // 7F09798C: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F09798Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F097990:
    ctx->pc = 0x7F097990u;
    // 7F097990: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F097994:
    ctx->pc = 0x7F097994u;
    // 7F097994: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F097994u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F097998:
    ctx->pc = 0x7F097998u;
    // 7F097998: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F097998u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F09799C:
    ctx->pc = 0x7F09799Cu;
    // 7F09799C: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0979A0u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0979A0:
    ctx->pc = 0x7F0979A0u;
    ctx->downcount -= 3;
    // 7F0979A0: addi    r3, r31, 1024
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1024);

label_7F0979A4:
    ctx->pc = 0x7F0979A4u;
    // 7F0979A4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0979A8:
    ctx->pc = 0x7F0979A8u;
    // 7F0979A8: bl      0x7F093820
    {
            ctx->lr = 0x7F0979ACu;
            ctx->pc = 0x7F093820u;
            return;
    }

label_7F0979AC:
    ctx->pc = 0x7F0979ACu;
    ctx->downcount -= 16;
    // 7F0979AC: lha     r4, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0979B0:
    ctx->pc = 0x7F0979B0u;
    // 7F0979B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0979B4:
    ctx->pc = 0x7F0979B4u;
    // 7F0979B4: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0979B8:
    ctx->pc = 0x7F0979B8u;
    // 7F0979B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0979BC:
    ctx->pc = 0x7F0979BCu;
    // 7F0979BC: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0979C0:
    ctx->pc = 0x7F0979C0u;
    // 7F0979C0: lfd     f2, -6184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0979C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6184);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0979C4:
    ctx->pc = 0x7F0979C4u;
    // 7F0979C4: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0979C8:
    ctx->pc = 0x7F0979C8u;
    // 7F0979C8: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F0979CC:
    ctx->pc = 0x7F0979CCu;
    // 7F0979CC: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F0979CCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0979D0:
    ctx->pc = 0x7F0979D0u;
    // 7F0979D0: lfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0979D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0979D4:
    ctx->pc = 0x7F0979D4u;
    // 7F0979D4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0979D4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F0979D8:
    ctx->pc = 0x7F0979D8u;
    // 7F0979D8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0979D8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0979DC:
    ctx->pc = 0x7F0979DCu;
    // 7F0979DC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0979DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0979E0:
    ctx->pc = 0x7F0979E0u;
    // 7F0979E0: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0979E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0979E4:
    ctx->pc = 0x7F0979E4u;
    // 7F0979E4: lwz     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0979E8:
    ctx->pc = 0x7F0979E8u;
    // 7F0979E8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0979ECu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0979EC:
    ctx->pc = 0x7F0979ECu;
    ctx->downcount -= 36;
    // 7F0979EC: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0979F0:
    ctx->pc = 0x7F0979F0u;
    // 7F0979F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0979F4:
    ctx->pc = 0x7F0979F4u;
    // 7F0979F4: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0979F8:
    ctx->pc = 0x7F0979F8u;
    // 7F0979F8: lha     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0979FC:
    ctx->pc = 0x7F0979FCu;
    // 7F0979FC: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A00:
    ctx->pc = 0x7F097A00u;
    // 7F097A00: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F097A04:
    ctx->pc = 0x7F097A04u;
    // 7F097A04: lha     r6, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A08:
    ctx->pc = 0x7F097A08u;
    // 7F097A08: mullw   r7, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[7] = (u32)product;
    }

label_7F097A0C:
    ctx->pc = 0x7F097A0Cu;
    // 7F097A0C: lha     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A10:
    ctx->pc = 0x7F097A10u;
    // 7F097A10: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097A14:
    ctx->pc = 0x7F097A14u;
    // 7F097A14: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097A18:
    ctx->pc = 0x7F097A18u;
    // 7F097A18: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F097A1C:
    ctx->pc = 0x7F097A1Cu;
    // 7F097A1C: mullw   r3, r6, r5
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[3] = (u32)product;
    }

label_7F097A20:
    ctx->pc = 0x7F097A20u;
    // 7F097A20: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097A24:
    ctx->pc = 0x7F097A24u;
    // 7F097A24: lha     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A28:
    ctx->pc = 0x7F097A28u;
    // 7F097A28: add   r3, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F097A2C:
    ctx->pc = 0x7F097A2Cu;
    // 7F097A2C: srawi r3, r3, 9
    {
        u32 sh = 9u;
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

label_7F097A30:
    ctx->pc = 0x7F097A30u;
    // 7F097A30: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F097A34:
    ctx->pc = 0x7F097A34u;
    // 7F097A34: sth     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097A38:
    ctx->pc = 0x7F097A38u;
    // 7F097A38: lha     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A3C:
    ctx->pc = 0x7F097A3Cu;
    // 7F097A3C: srawi r5, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
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

label_7F097A40:
    ctx->pc = 0x7F097A40u;
    // 7F097A40: xor   r0, r5, r3
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F097A44:
    ctx->pc = 0x7F097A44u;
    // 7F097A44: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F097A48:
    ctx->pc = 0x7F097A48u;
    // 7F097A48: subfic  r0, r0, 200
    {
        u64 res = (u64)(u32)(s32)(200) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F097A4C:
    ctx->pc = 0x7F097A4Cu;
    // 7F097A4C: srawi r0, r0, 5
    {
        u32 sh = 5u;
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

label_7F097A50:
    ctx->pc = 0x7F097A50u;
    // 7F097A50: addze  r5, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F097A54:
    ctx->pc = 0x7F097A54u;
    // 7F097A54: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F097A58:
    ctx->pc = 0x7F097A58u;
    // 7F097A58: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F097A5Cu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F097A5C:
    ctx->pc = 0x7F097A5Cu;
    ctx->downcount -= 4;
    // 7F097A5C: sth     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F097A60:
    ctx->pc = 0x7F097A60u;
    // 7F097A60: lha     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A64:
    ctx->pc = 0x7F097A64u;
    // 7F097A64: cmpwi   r0, -140
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-140);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F097A68:
    ctx->pc = 0x7F097A68u;
    // 7F097A68: bc    4, 0, 0x7F097A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097A74;
        }
    }

label_7F097A6C:
    ctx->pc = 0x7F097A6Cu;
    ctx->downcount -= 2;
    // 7F097A6C: li      r0, -140
    ctx->gpr[0] = (u32)(s32)(-140);

label_7F097A70:
    ctx->pc = 0x7F097A70u;
    // 7F097A70: sth     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097A74:
    ctx->pc = 0x7F097A74u;
    ctx->downcount -= 3;
    // 7F097A74: lha     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097A78:
    ctx->pc = 0x7F097A78u;
    // 7F097A78: cmpwi   r0, 140
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(140);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F097A7C:
    ctx->pc = 0x7F097A7Cu;
    // 7F097A7C: bc    4, 1, 0x7F097A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097A88;
        }
    }

label_7F097A80:
    ctx->pc = 0x7F097A80u;
    ctx->downcount -= 2;
    // 7F097A80: li      r0, 140
    ctx->gpr[0] = (u32)(s32)(140);

label_7F097A84:
    ctx->pc = 0x7F097A84u;
    // 7F097A84: sth     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097A88:
    ctx->pc = 0x7F097A88u;
    ctx->downcount -= 20;
    // 7F097A88: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F097A88u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097A8C:
    ctx->pc = 0x7F097A8Cu;
    // 7F097A8C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097A8Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F097A90:
    ctx->pc = 0x7F097A90u;
    // 7F097A90: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F097A94:
    ctx->pc = 0x7F097A94u;
    // 7F097A94: lwz     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097A98:
    ctx->pc = 0x7F097A98u;
    // 7F097A98: lmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F097A9C:
    ctx->pc = 0x7F097A9Cu;
    // 7F097A9C: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097AA0:
    ctx->pc = 0x7F097AA0u;
    // 7F097AA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097AA4:
    ctx->pc = 0x7F097AA4u;
    // 7F097AA4: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F097AA8:
    ctx->pc = 0x7F097AA8u;
    // 7F097AA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097AAC:
    ctx->pc = 0x7F097AACu;
    ctx->downcount -= 10;
    // 7F097AAC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097AB0:
    ctx->pc = 0x7F097AB0u;
    // 7F097AB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097AB4:
    ctx->pc = 0x7F097AB4u;
    // 7F097AB4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F097AB8:
    ctx->pc = 0x7F097AB8u;
    // 7F097AB8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097ABC:
    ctx->pc = 0x7F097ABCu;
    // 7F097ABC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F097AC0:
    ctx->pc = 0x7F097AC0u;
    // 7F097AC0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097AC4:
    ctx->pc = 0x7F097AC4u;
    // 7F097AC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097AC8:
    ctx->pc = 0x7F097AC8u;
    // 7F097AC8: addi    r3, r4, -5708
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F097ACC:
    ctx->pc = 0x7F097ACCu;
    // 7F097ACC: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F097AD0:
    ctx->pc = 0x7F097AD0u;
    // 7F097AD0: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F097AD4u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F097AD4:
    ctx->pc = 0x7F097AD4u;
    ctx->downcount -= 5;
    // 7F097AD4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F097AD8:
    ctx->pc = 0x7F097AD8u;
    // 7F097AD8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F097ADC:
    ctx->pc = 0x7F097ADCu;
    // 7F097ADC: lfs     f0, -6168(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F097ADCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097AE0:
    ctx->pc = 0x7F097AE0u;
    // 7F097AE0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F097AE4:
    ctx->pc = 0x7F097AE4u;
    // 7F097AE4: bl      0x7F3CC708
    {
            ctx->lr = 0x7F097AE8u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F097AE8:
    ctx->pc = 0x7F097AE8u;
    ctx->downcount -= 4;
    // 7F097AE8: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F097AEC:
    ctx->pc = 0x7F097AECu;
    // 7F097AEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F097AF0:
    ctx->pc = 0x7F097AF0u;
    // 7F097AF0: stw     r0, 1520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097AF4:
    ctx->pc = 0x7F097AF4u;
    // 7F097AF4: bl      0x7F3CC594
    {
            ctx->lr = 0x7F097AF8u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F097AF8:
    ctx->pc = 0x7F097AF8u;
    ctx->downcount -= 10;
    // 7F097AF8: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F097AF8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F097AFC:
    ctx->pc = 0x7F097AFCu;
    // 7F097AFC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F097B00:
    ctx->pc = 0x7F097B00u;
    // 7F097B00: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097B04:
    ctx->pc = 0x7F097B04u;
    // 7F097B04: stw     r0, 1524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097B08:
    ctx->pc = 0x7F097B08u;
    // 7F097B08: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097B0C:
    ctx->pc = 0x7F097B0Cu;
    // 7F097B0C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097B10:
    ctx->pc = 0x7F097B10u;
    // 7F097B10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097B14:
    ctx->pc = 0x7F097B14u;
    // 7F097B14: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F097B18:
    ctx->pc = 0x7F097B18u;
    // 7F097B18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097B1C:
    ctx->pc = 0x7F097B1Cu;
    ctx->downcount -= 6;
    // 7F097B1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097B20:
    ctx->pc = 0x7F097B20u;
    // 7F097B20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097B24:
    ctx->pc = 0x7F097B24u;
    // 7F097B24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097B28:
    ctx->pc = 0x7F097B28u;
    // 7F097B28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097B2C:
    ctx->pc = 0x7F097B2Cu;
    // 7F097B2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097B30:
    ctx->pc = 0x7F097B30u;
    // 7F097B30: bl      0x7F097AAC
    {
            ctx->lr = 0x7F097B34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097AACu;
                return;
            }
            goto label_7F097AAC;
    }

label_7F097B34:
    ctx->pc = 0x7F097B34u;
    ctx->downcount -= 2;
    // 7F097B34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097B38:
    ctx->pc = 0x7F097B38u;
    // 7F097B38: bl      0x7F09C088
    {
            ctx->lr = 0x7F097B3Cu;
            ctx->pc = 0x7F09C088u;
            return;
    }

label_7F097B3C:
    ctx->pc = 0x7F097B3Cu;
    ctx->downcount -= 2;
    // 7F097B3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097B40:
    ctx->pc = 0x7F097B40u;
    // 7F097B40: bl      0x7F0989D4
    {
            ctx->lr = 0x7F097B44u;
            ctx->pc = 0x7F0989D4u;
            return;
    }

label_7F097B44:
    ctx->pc = 0x7F097B44u;
    ctx->downcount -= 6;
    // 7F097B44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097B48:
    ctx->pc = 0x7F097B48u;
    // 7F097B48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097B4C:
    ctx->pc = 0x7F097B4Cu;
    // 7F097B4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097B50:
    ctx->pc = 0x7F097B50u;
    // 7F097B50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097B54:
    ctx->pc = 0x7F097B54u;
    // 7F097B54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097B58:
    ctx->pc = 0x7F097B58u;
    ctx->downcount -= 6;
    // 7F097B58: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F097B5C:
    ctx->pc = 0x7F097B5Cu;
    // 7F097B5C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F097B60:
    ctx->pc = 0x7F097B60u;
    // 7F097B60: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097B64:
    ctx->pc = 0x7F097B64u;
    // 7F097B64: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097B68:
    ctx->pc = 0x7F097B68u;
    // 7F097B68: cmpwi   r0, 30
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

label_7F097B6C:
    ctx->pc = 0x7F097B6Cu;
    // 7F097B6C: bc    12, 2, 0x7F097BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097BB4;
        }
    }

label_7F097B70:
    ctx->pc = 0x7F097B70u;
    ctx->downcount -= 1;
    // 7F097B70: bc    4, 0, 0x7F097B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097B8C;
        }
    }

label_7F097B74:
    ctx->pc = 0x7F097B74u;
    ctx->downcount -= 2;
    // 7F097B74: cmpwi   r0, 20
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

label_7F097B78:
    ctx->pc = 0x7F097B78u;
    // 7F097B78: bc    12, 2, 0x7F097BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097BAC;
        }
    }

label_7F097B7C:
    ctx->pc = 0x7F097B7Cu;
    ctx->downcount -= 1;
    // 7F097B7C: bc    4, 0, 0x7F097BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097BCC;
        }
    }

label_7F097B80:
    ctx->pc = 0x7F097B80u;
    ctx->downcount -= 2;
    // 7F097B80: cmpwi   r0, 10
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

label_7F097B84:
    ctx->pc = 0x7F097B84u;
    // 7F097B84: bc    12, 2, 0x7F097BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097BA4;
        }
    }

label_7F097B88:
    ctx->pc = 0x7F097B88u;
    ctx->downcount -= 1;
    // 7F097B88: b       0x7F097BCC
    {
            goto label_7F097BCC;
    }

label_7F097B8C:
    ctx->pc = 0x7F097B8Cu;
    ctx->downcount -= 2;
    // 7F097B8C: cmpwi   r0, 50
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

label_7F097B90:
    ctx->pc = 0x7F097B90u;
    // 7F097B90: bc    12, 2, 0x7F097BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097BC4;
        }
    }

label_7F097B94:
    ctx->pc = 0x7F097B94u;
    ctx->downcount -= 1;
    // 7F097B94: bc    4, 0, 0x7F097BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097BCC;
        }
    }

label_7F097B98:
    ctx->pc = 0x7F097B98u;
    ctx->downcount -= 2;
    // 7F097B98: cmpwi   r0, 40
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

label_7F097B9C:
    ctx->pc = 0x7F097B9Cu;
    // 7F097B9C: bc    12, 2, 0x7F097BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097BBC;
        }
    }

label_7F097BA0:
    ctx->pc = 0x7F097BA0u;
    ctx->downcount -= 1;
    // 7F097BA0: b       0x7F097BCC
    {
            goto label_7F097BCC;
    }

label_7F097BA4:
    ctx->pc = 0x7F097BA4u;
    ctx->downcount -= 2;
    // 7F097BA4: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F097BA8:
    ctx->pc = 0x7F097BA8u;
    // 7F097BA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BAC:
    ctx->pc = 0x7F097BACu;
    ctx->downcount -= 2;
    // 7F097BAC: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F097BB0:
    ctx->pc = 0x7F097BB0u;
    // 7F097BB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BB4:
    ctx->pc = 0x7F097BB4u;
    ctx->downcount -= 2;
    // 7F097BB4: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F097BB8:
    ctx->pc = 0x7F097BB8u;
    // 7F097BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BBC:
    ctx->pc = 0x7F097BBCu;
    ctx->downcount -= 2;
    // 7F097BBC: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F097BC0:
    ctx->pc = 0x7F097BC0u;
    // 7F097BC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BC4:
    ctx->pc = 0x7F097BC4u;
    ctx->downcount -= 2;
    // 7F097BC4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_7F097BC8:
    ctx->pc = 0x7F097BC8u;
    // 7F097BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BCC:
    ctx->pc = 0x7F097BCCu;
    ctx->downcount -= 2;
    // 7F097BCC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F097BD0:
    ctx->pc = 0x7F097BD0u;
    // 7F097BD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097BD4:
    ctx->pc = 0x7F097BD4u;
    ctx->downcount -= 12;
    // 7F097BD4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097BD8:
    ctx->pc = 0x7F097BD8u;
    // 7F097BD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097BDC:
    ctx->pc = 0x7F097BDCu;
    // 7F097BDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F097BE0:
    ctx->pc = 0x7F097BE0u;
    // 7F097BE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F097BE4:
    ctx->pc = 0x7F097BE4u;
    // 7F097BE4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097BE8:
    ctx->pc = 0x7F097BE8u;
    // 7F097BE8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097BEC:
    ctx->pc = 0x7F097BECu;
    // 7F097BEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097BF0:
    ctx->pc = 0x7F097BF0u;
    // 7F097BF0: addi    r5, r31, 1544
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(1544);

label_7F097BF4:
    ctx->pc = 0x7F097BF4u;
    // 7F097BF4: lwz     r4, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097BF8:
    ctx->pc = 0x7F097BF8u;
    // 7F097BF8: addi    r3, r4, 4008
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4008);

label_7F097BFC:
    ctx->pc = 0x7F097BFCu;
    // 7F097BFC: addi    r4, r4, 4056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4056);

label_7F097C00:
    ctx->pc = 0x7F097C00u;
    // 7F097C00: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F097C04u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F097C04:
    ctx->pc = 0x7F097C04u;
    ctx->downcount -= 6;
    // 7F097C04: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097C08:
    ctx->pc = 0x7F097C08u;
    // 7F097C08: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F097C0C:
    ctx->pc = 0x7F097C0Cu;
    // 7F097C0C: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F097C10:
    ctx->pc = 0x7F097C10u;
    // 7F097C10: addi    r4, r3, 4004
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4004);

label_7F097C14:
    ctx->pc = 0x7F097C14u;
    // 7F097C14: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F097C18:
    loop_7F097C18(ctx);
    if (ctx->pc == 0x7F097C2Cu) goto label_7F097C2C;
    return;
label_7F097C1C:
    ctx->pc = 0x7F097C1Cu;
    // 7F097C1C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F097C20:
    ctx->pc = 0x7F097C20u;
    // 7F097C20: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F097C24:
    ctx->pc = 0x7F097C24u;
    // 7F097C24: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F097C28:
    // 7F097C28: bc    16, 0, 0x7F097C18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097C18u;
                return;
            }
            goto label_7F097C18;
        }
    }

label_7F097C2C:
    ctx->pc = 0x7F097C2Cu;
    ctx->downcount -= 14;
    // 7F097C2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F097C30:
    ctx->pc = 0x7F097C30u;
    // 7F097C30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F097C34:
    ctx->pc = 0x7F097C34u;
    // 7F097C34: lfs     f0, -6164(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F097C34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097C38:
    ctx->pc = 0x7F097C38u;
    // 7F097C38: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F097C3C:
    ctx->pc = 0x7F097C3Cu;
    // 7F097C3C: lfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097C3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F097C40:
    ctx->pc = 0x7F097C40u;
    // 7F097C40: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F097C44:
    ctx->pc = 0x7F097C44u;
    // 7F097C44: lfs     f1, -6160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F097C44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F097C48:
    ctx->pc = 0x7F097C48u;
    // 7F097C48: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F097C4C:
    ctx->pc = 0x7F097C4Cu;
    // 7F097C4C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097C4Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F097C50:
    ctx->pc = 0x7F097C50u;
    // 7F097C50: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F097C54:
    ctx->pc = 0x7F097C54u;
    // 7F097C54: li      r7, 25
    ctx->gpr[7] = (u32)(s32)(25);

label_7F097C58:
    ctx->pc = 0x7F097C58u;
    // 7F097C58: li      r8, 5
    ctx->gpr[8] = (u32)(s32)(5);

label_7F097C5C:
    ctx->pc = 0x7F097C5Cu;
    // 7F097C5C: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F097C60:
    ctx->pc = 0x7F097C60u;
    // 7F097C60: bl      0x7F1D2598
    {
            ctx->lr = 0x7F097C64u;
            ctx->pc = 0x7F1D2598u;
            return;
    }

label_7F097C64:
    ctx->pc = 0x7F097C64u;
    ctx->downcount -= 6;
    // 7F097C64: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097C68:
    ctx->pc = 0x7F097C68u;
    // 7F097C68: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097C6C:
    ctx->pc = 0x7F097C6Cu;
    // 7F097C6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097C70:
    ctx->pc = 0x7F097C70u;
    // 7F097C70: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F097C74:
    ctx->pc = 0x7F097C74u;
    // 7F097C74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097C78:
    ctx->pc = 0x7F097C78u;
    ctx->downcount -= 27;
    // 7F097C78: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097C7C:
    ctx->pc = 0x7F097C7Cu;
    // 7F097C7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097C80:
    ctx->pc = 0x7F097C80u;
    // 7F097C80: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F097C84:
    ctx->pc = 0x7F097C84u;
    // 7F097C84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097C88:
    ctx->pc = 0x7F097C88u;
    // 7F097C88: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F097C8C:
    ctx->pc = 0x7F097C8Cu;
    // 7F097C8C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F097C90:
    ctx->pc = 0x7F097C90u;
    // 7F097C90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097C94:
    ctx->pc = 0x7F097C94u;
    // 7F097C94: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F097C98:
    ctx->pc = 0x7F097C98u;
    // 7F097C98: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097C9C:
    ctx->pc = 0x7F097C9Cu;
    // 7F097C9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F097CA0:
    ctx->pc = 0x7F097CA0u;
    // 7F097CA0: lwz     r7, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F097CA4:
    ctx->pc = 0x7F097CA4u;
    // 7F097CA4: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F097CA8:
    ctx->pc = 0x7F097CA8u;
    // 7F097CA8: and   r3, r7, r6
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[6];
    }

label_7F097CAC:
    ctx->pc = 0x7F097CACu;
    // 7F097CAC: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F097CB0:
    ctx->pc = 0x7F097CB0u;
    // 7F097CB0: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F097CB4:
    ctx->pc = 0x7F097CB4u;
    // 7F097CB4: or.   r0, r3, r0
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

label_7F097CB8:
    ctx->pc = 0x7F097CB8u;
    // 7F097CB8: bc    12, 2, 0x7F097D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097D70;
        }
    }

label_7F097CBC:
    ctx->pc = 0x7F097CBCu;
    ctx->downcount -= 2;
    // 7F097CBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F097CC0:
    ctx->pc = 0x7F097CC0u;
    // 7F097CC0: bl      0x7F0150C0
    {
            ctx->lr = 0x7F097CC4u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F097CC4:
    ctx->pc = 0x7F097CC4u;
    ctx->downcount -= 12;
    // 7F097CC4: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F097CC8:
    ctx->pc = 0x7F097CC8u;
    // 7F097CC8: lwz     r5, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F097CCC:
    ctx->pc = 0x7F097CCCu;
    // 7F097CCC: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F097CD0:
    ctx->pc = 0x7F097CD0u;
    // 7F097CD0: lwz     r6, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F097CD4:
    ctx->pc = 0x7F097CD4u;
    // 7F097CD4: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F097CD8:
    ctx->pc = 0x7F097CD8u;
    // 7F097CD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F097CDC:
    ctx->pc = 0x7F097CDCu;
    // 7F097CDC: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F097CE0:
    ctx->pc = 0x7F097CE0u;
    // 7F097CE0: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F097CE4:
    ctx->pc = 0x7F097CE4u;
    // 7F097CE4: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F097CE8:
    ctx->pc = 0x7F097CE8u;
    // 7F097CE8: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F097CEC:
    ctx->pc = 0x7F097CECu;
    // 7F097CEC: or.   r0, r3, r0
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

label_7F097CF0:
    ctx->pc = 0x7F097CF0u;
    // 7F097CF0: bc    12, 2, 0x7F097D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097D70;
        }
    }

label_7F097CF4:
    ctx->pc = 0x7F097CF4u;
    ctx->downcount -= 5;
    // 7F097CF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F097CF8:
    ctx->pc = 0x7F097CF8u;
    // 7F097CF8: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F097CFC:
    ctx->pc = 0x7F097CFCu;
    // 7F097CFC: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097D00:
    ctx->pc = 0x7F097D00u;
    // 7F097D00: rlwinm. r0, r0, 0, 14, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00020000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097D04:
    ctx->pc = 0x7F097D04u;
    // 7F097D04: bc    4, 2, 0x7F097D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F097D1C;
        }
    }

label_7F097D08:
    ctx->pc = 0x7F097D08u;
    ctx->downcount -= 4;
    // 7F097D08: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097D0C:
    ctx->pc = 0x7F097D0Cu;
    // 7F097D0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097D10:
    ctx->pc = 0x7F097D10u;
    // 7F097D10: addi    r4, r4, -30668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30668);

label_7F097D14:
    ctx->pc = 0x7F097D14u;
    // 7F097D14: bl      0x7F098A74
    {
            ctx->lr = 0x7F097D18u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097D18:
    ctx->pc = 0x7F097D18u;
    ctx->downcount -= 1;
    // 7F097D18: b       0x7F097D2C
    {
            goto label_7F097D2C;
    }

label_7F097D1C:
    ctx->pc = 0x7F097D1Cu;
    ctx->downcount -= 4;
    // 7F097D1C: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097D20:
    ctx->pc = 0x7F097D20u;
    // 7F097D20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F097D24:
    ctx->pc = 0x7F097D24u;
    // 7F097D24: addi    r4, r4, -30508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30508);

label_7F097D28:
    ctx->pc = 0x7F097D28u;
    // 7F097D28: bl      0x7F098A74
    {
            ctx->lr = 0x7F097D2Cu;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097D2C:
    ctx->pc = 0x7F097D2Cu;
    ctx->downcount -= 3;
    // 7F097D2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F097D30:
    ctx->pc = 0x7F097D30u;
    // 7F097D30: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F097D34:
    ctx->pc = 0x7F097D34u;
    // 7F097D34: bl      0x7F014DF8
    {
            ctx->lr = 0x7F097D38u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F097D38:
    ctx->pc = 0x7F097D38u;
    ctx->downcount -= 4;
    // 7F097D38: lwz     r3, 1364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097D3C:
    ctx->pc = 0x7F097D3Cu;
    // 7F097D3C: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097D40:
    ctx->pc = 0x7F097D40u;
    // 7F097D40: cmpwi   r0, 0
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

label_7F097D44:
    ctx->pc = 0x7F097D44u;
    // 7F097D44: bc    12, 1, 0x7F097D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097D70;
        }
    }

label_7F097D48:
    ctx->pc = 0x7F097D48u;
    ctx->downcount -= 6;
    // 7F097D48: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F097D4C:
    ctx->pc = 0x7F097D4Cu;
    // 7F097D4C: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F097D50:
    ctx->pc = 0x7F097D50u;
    // 7F097D50: lwz     r3, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097D54:
    ctx->pc = 0x7F097D54u;
    // 7F097D54: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F097D58:
    ctx->pc = 0x7F097D58u;
    // 7F097D58: stw     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097D5C:
    ctx->pc = 0x7F097D5Cu;
    // 7F097D5C: bl      0x7F097B58
    {
            ctx->lr = 0x7F097D60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097B58u;
                return;
            }
            goto label_7F097B58;
    }

label_7F097D60:
    ctx->pc = 0x7F097D60u;
    ctx->downcount -= 4;
    // 7F097D60: lwz     r4, 1364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097D64:
    ctx->pc = 0x7F097D64u;
    // 7F097D64: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097D68:
    ctx->pc = 0x7F097D68u;
    // 7F097D68: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F097D6C:
    ctx->pc = 0x7F097D6Cu;
    // 7F097D6C: sth     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097D70:
    ctx->pc = 0x7F097D70u;
    ctx->downcount -= 16;
    // 7F097D70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F097D74:
    ctx->pc = 0x7F097D74u;
    // 7F097D74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097D78:
    ctx->pc = 0x7F097D78u;
    // 7F097D78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097D7C:
    ctx->pc = 0x7F097D7Cu;
    // 7F097D7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F097D80:
    ctx->pc = 0x7F097D80u;
    // 7F097D80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097D84:
    ctx->pc = 0x7F097D84u;
    ctx->downcount -= 6;
    // 7F097D84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097D88:
    ctx->pc = 0x7F097D88u;
    // 7F097D88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097D8C:
    ctx->pc = 0x7F097D8Cu;
    // 7F097D8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097D90:
    ctx->pc = 0x7F097D90u;
    // 7F097D90: lwz     r0, 1476(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097D94:
    ctx->pc = 0x7F097D94u;
    // 7F097D94: rlwinm. r0, r0, 0, 6, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x02000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097D98:
    ctx->pc = 0x7F097D98u;
    // 7F097D98: bc    12, 2, 0x7F097DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097DB0;
        }
    }

label_7F097D9C:
    ctx->pc = 0x7F097D9Cu;
    ctx->downcount -= 3;
    // 7F097D9C: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097DA0:
    ctx->pc = 0x7F097DA0u;
    // 7F097DA0: addi    r4, r4, -30388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30388);

label_7F097DA4:
    ctx->pc = 0x7F097DA4u;
    // 7F097DA4: bl      0x7F098A74
    {
            ctx->lr = 0x7F097DA8u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097DA8:
    ctx->pc = 0x7F097DA8u;
    ctx->downcount -= 2;
    // 7F097DA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097DAC:
    ctx->pc = 0x7F097DACu;
    // 7F097DAC: b       0x7F097DB4
    {
            goto label_7F097DB4;
    }

label_7F097DB0:
    ctx->pc = 0x7F097DB0u;
    ctx->downcount -= 1;
    // 7F097DB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F097DB4:
    ctx->pc = 0x7F097DB4u;
    ctx->downcount -= 5;
    // 7F097DB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097DB8:
    ctx->pc = 0x7F097DB8u;
    // 7F097DB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097DBC:
    ctx->pc = 0x7F097DBCu;
    // 7F097DBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097DC0:
    ctx->pc = 0x7F097DC0u;
    // 7F097DC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097DC4:
    ctx->pc = 0x7F097DC4u;
    ctx->downcount -= 6;
    // 7F097DC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097DC8:
    ctx->pc = 0x7F097DC8u;
    // 7F097DC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097DCC:
    ctx->pc = 0x7F097DCCu;
    // 7F097DCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097DD0:
    ctx->pc = 0x7F097DD0u;
    // 7F097DD0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097DD4:
    ctx->pc = 0x7F097DD4u;
    // 7F097DD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097DD8:
    ctx->pc = 0x7F097DD8u;
    // 7F097DD8: bl      0x7F097D84
    {
            ctx->lr = 0x7F097DDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F097D84u;
                return;
            }
            goto label_7F097D84;
    }

label_7F097DDC:
    ctx->pc = 0x7F097DDCu;
    ctx->downcount -= 2;
    // 7F097DDC: cmpwi   r3, 0
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

label_7F097DE0:
    ctx->pc = 0x7F097DE0u;
    // 7F097DE0: bc    12, 2, 0x7F097DFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097DFC;
        }
    }

label_7F097DE4:
    ctx->pc = 0x7F097DE4u;
    ctx->downcount -= 6;
    // 7F097DE4: lwz     r4, 1204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097DE8:
    ctx->pc = 0x7F097DE8u;
    // 7F097DE8: li      r0, -18
    ctx->gpr[0] = (u32)(s32)(-18);

label_7F097DEC:
    ctx->pc = 0x7F097DECu;
    // 7F097DEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097DF0:
    ctx->pc = 0x7F097DF0u;
    // 7F097DF0: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F097DF4:
    ctx->pc = 0x7F097DF4u;
    // 7F097DF4: stw     r0, 1204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097DF8:
    ctx->pc = 0x7F097DF8u;
    // 7F097DF8: b       0x7F097E00
    {
            goto label_7F097E00;
    }

label_7F097DFC:
    ctx->pc = 0x7F097DFCu;
    ctx->downcount -= 1;
    // 7F097DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F097E00:
    ctx->pc = 0x7F097E00u;
    ctx->downcount -= 6;
    // 7F097E00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097E04:
    ctx->pc = 0x7F097E04u;
    // 7F097E04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097E08:
    ctx->pc = 0x7F097E08u;
    // 7F097E08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097E0C:
    ctx->pc = 0x7F097E0Cu;
    // 7F097E0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097E10:
    ctx->pc = 0x7F097E10u;
    // 7F097E10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097E14:
    ctx->pc = 0x7F097E14u;
    ctx->downcount -= 6;
    // 7F097E14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097E18:
    ctx->pc = 0x7F097E18u;
    // 7F097E18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097E1C:
    ctx->pc = 0x7F097E1Cu;
    // 7F097E1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097E20:
    ctx->pc = 0x7F097E20u;
    // 7F097E20: lwz     r4, 1476(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1476);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097E24:
    ctx->pc = 0x7F097E24u;
    // 7F097E24: rlwinm. r0, r4, 0, 31, 31
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

label_7F097E28:
    ctx->pc = 0x7F097E28u;
    // 7F097E28: bc    12, 2, 0x7F097E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097E40;
        }
    }

label_7F097E2C:
    ctx->pc = 0x7F097E2Cu;
    ctx->downcount -= 3;
    // 7F097E2C: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097E30:
    ctx->pc = 0x7F097E30u;
    // 7F097E30: addi    r4, r4, -32376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32376);

label_7F097E34:
    ctx->pc = 0x7F097E34u;
    // 7F097E34: bl      0x7F098A74
    {
            ctx->lr = 0x7F097E38u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097E38:
    ctx->pc = 0x7F097E38u;
    ctx->downcount -= 2;
    // 7F097E38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097E3C:
    ctx->pc = 0x7F097E3Cu;
    // 7F097E3C: b       0x7F097EB4
    {
            goto label_7F097EB4;
    }

label_7F097E40:
    ctx->pc = 0x7F097E40u;
    ctx->downcount -= 2;
    // 7F097E40: rlwinm. r0, r4, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097E44:
    ctx->pc = 0x7F097E44u;
    // 7F097E44: bc    12, 2, 0x7F097E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097E5C;
        }
    }

label_7F097E48:
    ctx->pc = 0x7F097E48u;
    ctx->downcount -= 3;
    // 7F097E48: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097E4C:
    ctx->pc = 0x7F097E4Cu;
    // 7F097E4C: addi    r4, r4, -32160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32160);

label_7F097E50:
    ctx->pc = 0x7F097E50u;
    // 7F097E50: bl      0x7F098A74
    {
            ctx->lr = 0x7F097E54u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097E54:
    ctx->pc = 0x7F097E54u;
    ctx->downcount -= 2;
    // 7F097E54: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F097E58:
    ctx->pc = 0x7F097E58u;
    // 7F097E58: b       0x7F097EB4
    {
            goto label_7F097EB4;
    }

label_7F097E5C:
    ctx->pc = 0x7F097E5Cu;
    ctx->downcount -= 2;
    // 7F097E5C: rlwinm. r0, r4, 0, 29, 29
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

label_7F097E60:
    ctx->pc = 0x7F097E60u;
    // 7F097E60: bc    12, 2, 0x7F097E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097E78;
        }
    }

label_7F097E64:
    ctx->pc = 0x7F097E64u;
    ctx->downcount -= 3;
    // 7F097E64: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097E68:
    ctx->pc = 0x7F097E68u;
    // 7F097E68: addi    r4, r4, -31904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31904);

label_7F097E6C:
    ctx->pc = 0x7F097E6Cu;
    // 7F097E6C: bl      0x7F098A74
    {
            ctx->lr = 0x7F097E70u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097E70:
    ctx->pc = 0x7F097E70u;
    ctx->downcount -= 2;
    // 7F097E70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097E74:
    ctx->pc = 0x7F097E74u;
    // 7F097E74: b       0x7F097EB4
    {
            goto label_7F097EB4;
    }

label_7F097E78:
    ctx->pc = 0x7F097E78u;
    ctx->downcount -= 2;
    // 7F097E78: rlwinm. r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097E7C:
    ctx->pc = 0x7F097E7Cu;
    // 7F097E7C: bc    12, 2, 0x7F097E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097E94;
        }
    }

label_7F097E80:
    ctx->pc = 0x7F097E80u;
    ctx->downcount -= 3;
    // 7F097E80: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097E84:
    ctx->pc = 0x7F097E84u;
    // 7F097E84: addi    r4, r4, -31364
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31364);

label_7F097E88:
    ctx->pc = 0x7F097E88u;
    // 7F097E88: bl      0x7F098A74
    {
            ctx->lr = 0x7F097E8Cu;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097E8C:
    ctx->pc = 0x7F097E8Cu;
    ctx->downcount -= 2;
    // 7F097E8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097E90:
    ctx->pc = 0x7F097E90u;
    // 7F097E90: b       0x7F097EB4
    {
            goto label_7F097EB4;
    }

label_7F097E94:
    ctx->pc = 0x7F097E94u;
    ctx->downcount -= 2;
    // 7F097E94: rlwinm. r0, r4, 0, 5, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x04000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F097E98:
    ctx->pc = 0x7F097E98u;
    // 7F097E98: bc    12, 2, 0x7F097EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F097EB0;
        }
    }

label_7F097E9C:
    ctx->pc = 0x7F097E9Cu;
    ctx->downcount -= 3;
    // 7F097E9C: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F097EA0:
    ctx->pc = 0x7F097EA0u;
    // 7F097EA0: addi    r4, r4, -30860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30860);

label_7F097EA4:
    ctx->pc = 0x7F097EA4u;
    // 7F097EA4: bl      0x7F098A74
    {
            ctx->lr = 0x7F097EA8u;
            ctx->pc = 0x7F098A74u;
            return;
    }

label_7F097EA8:
    ctx->pc = 0x7F097EA8u;
    ctx->downcount -= 2;
    // 7F097EA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F097EAC:
    ctx->pc = 0x7F097EACu;
    // 7F097EAC: b       0x7F097EB4
    {
            goto label_7F097EB4;
    }

label_7F097EB0:
    ctx->pc = 0x7F097EB0u;
    ctx->downcount -= 1;
    // 7F097EB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F097EB4:
    ctx->pc = 0x7F097EB4u;
    ctx->downcount -= 5;
    // 7F097EB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097EB8:
    ctx->pc = 0x7F097EB8u;
    // 7F097EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097EBC:
    ctx->pc = 0x7F097EBCu;
    // 7F097EBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097EC0:
    ctx->pc = 0x7F097EC0u;
    // 7F097EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097EC4:
    ctx->pc = 0x7F097EC4u;
    ctx->downcount -= 9;
    // 7F097EC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097EC8:
    ctx->pc = 0x7F097EC8u;
    // 7F097EC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097ECC:
    ctx->pc = 0x7F097ECCu;
    // 7F097ECC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F097ED0:
    ctx->pc = 0x7F097ED0u;
    // 7F097ED0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097ED4:
    ctx->pc = 0x7F097ED4u;
    // 7F097ED4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097ED8:
    ctx->pc = 0x7F097ED8u;
    // 7F097ED8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097EDC:
    ctx->pc = 0x7F097EDCu;
    // 7F097EDC: addi    r3, r31, 860
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(860);

label_7F097EE0:
    ctx->pc = 0x7F097EE0u;
    // 7F097EE0: addi    r4, r31, 996
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(996);

label_7F097EE4:
    ctx->pc = 0x7F097EE4u;
    // 7F097EE4: bl      0x7F3CA1BC
    {
            ctx->lr = 0x7F097EE8u;
            ctx->pc = 0x7F3CA1BCu;
            return;
    }

label_7F097EE8:
    ctx->pc = 0x7F097EE8u;
    ctx->downcount -= 4;
    // 7F097EE8: addi    r3, r31, 924
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(924);

label_7F097EEC:
    ctx->pc = 0x7F097EECu;
    // 7F097EEC: addi    r4, r31, 1004
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1004);

label_7F097EF0:
    ctx->pc = 0x7F097EF0u;
    // 7F097EF0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F097EF4:
    ctx->pc = 0x7F097EF4u;
    // 7F097EF4: bl      0x7F3CA1BC
    {
            ctx->lr = 0x7F097EF8u;
            ctx->pc = 0x7F3CA1BCu;
            return;
    }

label_7F097EF8:
    ctx->pc = 0x7F097EF8u;
    ctx->downcount -= 6;
    // 7F097EF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097EFC:
    ctx->pc = 0x7F097EFCu;
    // 7F097EFC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097F00:
    ctx->pc = 0x7F097F00u;
    // 7F097F00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097F04:
    ctx->pc = 0x7F097F04u;
    // 7F097F04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F097F08:
    ctx->pc = 0x7F097F08u;
    // 7F097F08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097F0C:
    ctx->pc = 0x7F097F0Cu;
    ctx->downcount -= 18;
    // 7F097F0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097F10:
    ctx->pc = 0x7F097F10u;
    // 7F097F10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097F14:
    ctx->pc = 0x7F097F14u;
    // 7F097F14: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F097F18:
    ctx->pc = 0x7F097F18u;
    // 7F097F18: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097F1C:
    ctx->pc = 0x7F097F1Cu;
    // 7F097F1C: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F097F20:
    ctx->pc = 0x7F097F20u;
    // 7F097F20: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097F24:
    ctx->pc = 0x7F097F24u;
    // 7F097F24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097F28:
    ctx->pc = 0x7F097F28u;
    // 7F097F28: lwz     r4, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097F2C:
    ctx->pc = 0x7F097F2Cu;
    // 7F097F2C: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097F30:
    ctx->pc = 0x7F097F30u;
    // 7F097F30: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097F34:
    ctx->pc = 0x7F097F34u;
    // 7F097F34: lfs     f0, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F097F34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097F38:
    ctx->pc = 0x7F097F38u;
    // 7F097F38: lfs     f1, 4384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F097F38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F097F3C:
    ctx->pc = 0x7F097F3Cu;
    // 7F097F3C: lwz     r3, 1524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097F40:
    ctx->pc = 0x7F097F40u;
    // 7F097F40: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097F40u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F097F44:
    ctx->pc = 0x7F097F44u;
    // 7F097F44: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097F44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F097F48:
    ctx->pc = 0x7F097F48u;
    // 7F097F48: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097F48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F097F4C:
    ctx->pc = 0x7F097F4Cu;
    // 7F097F4C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097F50:
    ctx->pc = 0x7F097F50u;
    // 7F097F50: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F097F54u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F097F54:
    ctx->pc = 0x7F097F54u;
    ctx->downcount -= 12;
    // 7F097F54: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097F58:
    ctx->pc = 0x7F097F58u;
    // 7F097F58: lwz     r0, 1520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097F5C:
    ctx->pc = 0x7F097F5Cu;
    // 7F097F5C: lha     r3, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097F60:
    ctx->pc = 0x7F097F60u;
    // 7F097F60: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F097F64:
    ctx->pc = 0x7F097F64u;
    // 7F097F64: sth     r0, 998(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(998);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097F68:
    ctx->pc = 0x7F097F68u;
    // 7F097F68: sth     r0, 1006(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1006);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097F6C:
    ctx->pc = 0x7F097F6Cu;
    // 7F097F6C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097F70:
    ctx->pc = 0x7F097F70u;
    // 7F097F70: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097F74:
    ctx->pc = 0x7F097F74u;
    // 7F097F74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097F78:
    ctx->pc = 0x7F097F78u;
    // 7F097F78: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F097F7C:
    ctx->pc = 0x7F097F7Cu;
    // 7F097F7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097F80:
    ctx->pc = 0x7F097F80u;
    ctx->downcount -= 18;
    // 7F097F80: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097F84:
    ctx->pc = 0x7F097F84u;
    // 7F097F84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F097F88:
    ctx->pc = 0x7F097F88u;
    // 7F097F88: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F097F8C:
    ctx->pc = 0x7F097F8Cu;
    // 7F097F8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F097F90:
    ctx->pc = 0x7F097F90u;
    // 7F097F90: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F097F94:
    ctx->pc = 0x7F097F94u;
    // 7F097F94: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F097F98:
    ctx->pc = 0x7F097F98u;
    // 7F097F98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F097F9C:
    ctx->pc = 0x7F097F9Cu;
    // 7F097F9C: lwz     r4, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097FA0:
    ctx->pc = 0x7F097FA0u;
    // 7F097FA0: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097FA4:
    ctx->pc = 0x7F097FA4u;
    // 7F097FA4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097FA8:
    ctx->pc = 0x7F097FA8u;
    // 7F097FA8: lfs     f0, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F097FA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F097FAC:
    ctx->pc = 0x7F097FACu;
    // 7F097FAC: lfs     f1, 4384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F097FACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F097FB0:
    ctx->pc = 0x7F097FB0u;
    // 7F097FB0: lwz     r3, 1524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097FB4:
    ctx->pc = 0x7F097FB4u;
    // 7F097FB4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097FB4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F097FB8:
    ctx->pc = 0x7F097FB8u;
    // 7F097FB8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F097FB8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F097FBC:
    ctx->pc = 0x7F097FBCu;
    // 7F097FBC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F097FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F097FC0:
    ctx->pc = 0x7F097FC0u;
    // 7F097FC0: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F097FC4:
    ctx->pc = 0x7F097FC4u;
    // 7F097FC4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F097FC8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F097FC8:
    ctx->pc = 0x7F097FC8u;
    ctx->downcount -= 13;
    // 7F097FC8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F097FCC:
    ctx->pc = 0x7F097FCCu;
    // 7F097FCC: lwz     r0, 1520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097FD0:
    ctx->pc = 0x7F097FD0u;
    // 7F097FD0: lha     r3, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F097FD4:
    ctx->pc = 0x7F097FD4u;
    // 7F097FD4: addi    r3, r3, -3264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3264);

label_7F097FD8:
    ctx->pc = 0x7F097FD8u;
    // 7F097FD8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F097FDC:
    ctx->pc = 0x7F097FDCu;
    // 7F097FDC: sth     r0, 998(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(998);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097FE0:
    ctx->pc = 0x7F097FE0u;
    // 7F097FE0: sth     r0, 1006(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1006);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F097FE4:
    ctx->pc = 0x7F097FE4u;
    // 7F097FE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F097FE8:
    ctx->pc = 0x7F097FE8u;
    // 7F097FE8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F097FEC:
    ctx->pc = 0x7F097FECu;
    // 7F097FEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F097FF0:
    ctx->pc = 0x7F097FF0u;
    // 7F097FF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F097FF4:
    ctx->pc = 0x7F097FF4u;
    // 7F097FF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F097FF8:
    ctx->pc = 0x7F097FF8u;
    ctx->downcount -= 18;
    // 7F097FF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F097FFC:
    ctx->pc = 0x7F097FFCu;
    // 7F097FFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F098000:
    ctx->pc = 0x7F098000u;
    // 7F098000: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F098004:
    ctx->pc = 0x7F098004u;
    // 7F098004: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F098008:
    ctx->pc = 0x7F098008u;
    // 7F098008: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F09800C:
    ctx->pc = 0x7F09800Cu;
    // 7F09800C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F098010:
    ctx->pc = 0x7F098010u;
    // 7F098010: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F098014:
    ctx->pc = 0x7F098014u;
    // 7F098014: lwz     r4, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F098018:
    ctx->pc = 0x7F098018u;
    // 7F098018: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09801C:
    ctx->pc = 0x7F09801Cu;
    // 7F09801C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F098020:
    ctx->pc = 0x7F098020u;
    // 7F098020: lfs     f0, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F098020u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F098024:
    ctx->pc = 0x7F098024u;
    // 7F098024: lfs     f1, 4384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F098024u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F098028:
    ctx->pc = 0x7F098028u;
    // 7F098028: lwz     r3, 1524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F09802C:
    ctx->pc = 0x7F09802Cu;
    // 7F09802C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F09802Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F098030:
    ctx->pc = 0x7F098030u;
    // 7F098030: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F098030u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F098034:
    ctx->pc = 0x7F098034u;
    // 7F098034: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F098034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F098038:
    ctx->pc = 0x7F098038u;
    // 7F098038: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F09803C:
    ctx->pc = 0x7F09803Cu;
    // 7F09803C: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F098040u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F098040:
    ctx->pc = 0x7F098040u;
    ctx->downcount -= 13;
    // 7F098040: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F098044:
    ctx->pc = 0x7F098044u;
    // 7F098044: lwz     r0, 1520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F098048:
    ctx->pc = 0x7F098048u;
    // 7F098048: lha     r3, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F09804C:
    ctx->pc = 0x7F09804Cu;
    // 7F09804C: addi    r3, r3, -832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-832);

label_7F098050:
    ctx->pc = 0x7F098050u;
    // 7F098050: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F098054:
    ctx->pc = 0x7F098054u;
    // 7F098054: sth     r0, 998(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(998);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F098058:
    ctx->pc = 0x7F098058u;
    // 7F098058: sth     r0, 1006(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1006);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F09805C:
    ctx->pc = 0x7F09805Cu;
    // 7F09805C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F098060:
    ctx->pc = 0x7F098060u;
    // 7F098060: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F098064:
    ctx->pc = 0x7F098064u;
    // 7F098064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F098068:
    ctx->pc = 0x7F098068u;
    // 7F098068: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F09806C:
    ctx->pc = 0x7F09806Cu;
    // 7F09806C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0940EC;
        }
    }

label_7F098070:
    ctx->pc = 0x7F098070u;
    ctx->downcount -= 64;
    // 7F098070: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F098074:
    ctx->pc = 0x7F098074u;
    // 7F098074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F098078:
    ctx->pc = 0x7F098078u;
    // 7F098078: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F09807C:
    ctx->pc = 0x7F09807Cu;
    // 7F09807C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F098080:
    ctx->pc = 0x7F098080u;
    // 7F098080: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F098084:
    ctx->pc = 0x7F098084u;
    // 7F098084: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F098088:
    ctx->pc = 0x7F098088u;
    // 7F098088: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F09808C:
    ctx->pc = 0x7F09808Cu;
    // 7F09808C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F098090:
    ctx->pc = 0x7F098090u;
    // 7F098090: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F098094:
    ctx->pc = 0x7F098094u;
    // 7F098094: lha     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F098098:
    ctx->pc = 0x7F098098u;
    // 7F098098: addi    r31, r3, 2388
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F09809C:
    ctx->pc = 0x7F09809Cu;
    // 7F09809C: divw   r4, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0980A0:
    ctx->pc = 0x7F0980A0u;
    // 7F0980A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0980A4:
    ctx->pc = 0x7F0980A4u;
    // 7F0980A4: addi    r30, r4, -1
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0980A8:
    ctx->pc = 0x7F0980A8u;
    // 7F0980A8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0980ACu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0980AC:
    ctx->pc = 0x7F0980ACu;
    ctx->downcount -= 3;
    // 7F0980AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0980B0:
    ctx->pc = 0x7F0980B0u;
    // 7F0980B0: addi    r3, r3, 23244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23244);

label_7F0980B4:
    ctx->pc = 0x7F0980B4u;
    // 7F0980B4: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0980B8u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0980B8:
    ctx->pc = 0x7F0980B8u;
    ctx->downcount -= 2;
    // 7F0980B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0980BC:
    ctx->pc = 0x7F0980BCu;
    // 7F0980BC: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F0980C0u;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F0980C0:
    ctx->pc = 0x7F0980C0u;
    ctx->downcount -= 11;
    // 7F0980C0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0980C4:
    ctx->pc = 0x7F0980C4u;
    // 7F0980C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0980C8:
    ctx->pc = 0x7F0980C8u;
    // 7F0980C8: addi    r5, r4, 23236
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(23236);

label_7F0980CC:
    ctx->pc = 0x7F0980CCu;
    // 7F0980CC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0980D0:
    ctx->pc = 0x7F0980D0u;
    // 7F0980D0: lbzx    r7, r5, r30
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[30];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0980D4:
    ctx->pc = 0x7F0980D4u;
    // 7F0980D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0980D8:
    ctx->pc = 0x7F0980D8u;
    // 7F0980D8: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F0980DC:
    ctx->pc = 0x7F0980DCu;
    // 7F0980DC: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F0980E0:
    ctx->pc = 0x7F0980E0u;
    // 7F0980E0: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F0980E4:
    ctx->pc = 0x7F0980E4u;
    // 7F0980E4: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F0980E8:
    ctx->pc = 0x7F0980E8u;
    // 7F0980E8: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

    ctx->pc = 0x7F0980ECu;
    return;
return_dispatch_7F0940EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F094100u: goto label_7F094100;
    case 0x7F094114u: goto label_7F094114;
    case 0x7F09415Cu: goto label_7F09415C;
    case 0x7F094248u: goto label_7F094248;
    case 0x7F09425Cu: goto label_7F09425C;
    case 0x7F094270u: goto label_7F094270;
    case 0x7F094298u: goto label_7F094298;
    case 0x7F0942C0u: goto label_7F0942C0;
    case 0x7F094460u: goto label_7F094460;
    case 0x7F0944A8u: goto label_7F0944A8;
    case 0x7F0944BCu: goto label_7F0944BC;
    case 0x7F0944E0u: goto label_7F0944E0;
    case 0x7F094504u: goto label_7F094504;
    case 0x7F094530u: goto label_7F094530;
    case 0x7F094538u: goto label_7F094538;
    case 0x7F094554u: goto label_7F094554;
    case 0x7F094564u: goto label_7F094564;
    case 0x7F094574u: goto label_7F094574;
    case 0x7F094588u: goto label_7F094588;
    case 0x7F0945ACu: goto label_7F0945AC;
    case 0x7F0945B4u: goto label_7F0945B4;
    case 0x7F0945C4u: goto label_7F0945C4;
    case 0x7F0945D4u: goto label_7F0945D4;
    case 0x7F0945DCu: goto label_7F0945DC;
    case 0x7F0945E4u: goto label_7F0945E4;
    case 0x7F0945FCu: goto label_7F0945FC;
    case 0x7F094610u: goto label_7F094610;
    case 0x7F09461Cu: goto label_7F09461C;
    case 0x7F094624u: goto label_7F094624;
    case 0x7F0947ECu: goto label_7F0947EC;
    case 0x7F094800u: goto label_7F094800;
    case 0x7F094814u: goto label_7F094814;
    case 0x7F094828u: goto label_7F094828;
    case 0x7F09483Cu: goto label_7F09483C;
    case 0x7F09484Cu: goto label_7F09484C;
    case 0x7F09487Cu: goto label_7F09487C;
    case 0x7F094884u: goto label_7F094884;
    case 0x7F09488Cu: goto label_7F09488C;
    case 0x7F094894u: goto label_7F094894;
    case 0x7F09489Cu: goto label_7F09489C;
    case 0x7F0948A4u: goto label_7F0948A4;
    case 0x7F0948ACu: goto label_7F0948AC;
    case 0x7F0948B4u: goto label_7F0948B4;
    case 0x7F0948C0u: goto label_7F0948C0;
    case 0x7F0948C8u: goto label_7F0948C8;
    case 0x7F094B78u: goto label_7F094B78;
    case 0x7F094CECu: goto label_7F094CEC;
    case 0x7F094D00u: goto label_7F094D00;
    case 0x7F094D24u: goto label_7F094D24;
    case 0x7F094D3Cu: goto label_7F094D3C;
    case 0x7F094D4Cu: goto label_7F094D4C;
    case 0x7F094D5Cu: goto label_7F094D5C;
    case 0x7F094D64u: goto label_7F094D64;
    case 0x7F094DF0u: goto label_7F094DF0;
    case 0x7F094DFCu: goto label_7F094DFC;
    case 0x7F094E2Cu: goto label_7F094E2C;
    case 0x7F094E38u: goto label_7F094E38;
    case 0x7F094E8Cu: goto label_7F094E8C;
    case 0x7F094EB4u: goto label_7F094EB4;
    case 0x7F094EFCu: goto label_7F094EFC;
    case 0x7F094F60u: goto label_7F094F60;
    case 0x7F094FA4u: goto label_7F094FA4;
    case 0x7F094FCCu: goto label_7F094FCC;
    case 0x7F095008u: goto label_7F095008;
    case 0x7F09502Cu: goto label_7F09502C;
    case 0x7F0950D0u: goto label_7F0950D0;
    case 0x7F0950DCu: goto label_7F0950DC;
    case 0x7F0950E8u: goto label_7F0950E8;
    case 0x7F0950FCu: goto label_7F0950FC;
    case 0x7F095108u: goto label_7F095108;
    case 0x7F095114u: goto label_7F095114;
    case 0x7F09512Cu: goto label_7F09512C;
    case 0x7F095138u: goto label_7F095138;
    case 0x7F095144u: goto label_7F095144;
    case 0x7F095164u: goto label_7F095164;
    case 0x7F09518Cu: goto label_7F09518C;
    case 0x7F095198u: goto label_7F095198;
    case 0x7F0951A4u: goto label_7F0951A4;
    case 0x7F0951C4u: goto label_7F0951C4;
    case 0x7F0951ECu: goto label_7F0951EC;
    case 0x7F0951F8u: goto label_7F0951F8;
    case 0x7F095204u: goto label_7F095204;
    case 0x7F09521Cu: goto label_7F09521C;
    case 0x7F095364u: goto label_7F095364;
    case 0x7F095384u: goto label_7F095384;
    case 0x7F0953B0u: goto label_7F0953B0;
    case 0x7F0953C8u: goto label_7F0953C8;
    case 0x7F09540Cu: goto label_7F09540C;
    case 0x7F095428u: goto label_7F095428;
    case 0x7F095460u: goto label_7F095460;
    case 0x7F095470u: goto label_7F095470;
    case 0x7F0954C0u: goto label_7F0954C0;
    case 0x7F0954D8u: goto label_7F0954D8;
    case 0x7F09556Cu: goto label_7F09556C;
    case 0x7F09557Cu: goto label_7F09557C;
    case 0x7F0955C8u: goto label_7F0955C8;
    case 0x7F0955D4u: goto label_7F0955D4;
    case 0x7F0955E4u: goto label_7F0955E4;
    case 0x7F095600u: goto label_7F095600;
    case 0x7F095620u: goto label_7F095620;
    case 0x7F095628u: goto label_7F095628;
    case 0x7F095648u: goto label_7F095648;
    case 0x7F0956A4u: goto label_7F0956A4;
    case 0x7F0956CCu: goto label_7F0956CC;
    case 0x7F0956F4u: goto label_7F0956F4;
    case 0x7F09571Cu: goto label_7F09571C;
    case 0x7F095744u: goto label_7F095744;
    case 0x7F09576Cu: goto label_7F09576C;
    case 0x7F095774u: goto label_7F095774;
    case 0x7F09579Cu: goto label_7F09579C;
    case 0x7F0957ACu: goto label_7F0957AC;
    case 0x7F0957BCu: goto label_7F0957BC;
    case 0x7F0958ACu: goto label_7F0958AC;
    case 0x7F0958BCu: goto label_7F0958BC;
    case 0x7F0958D0u: goto label_7F0958D0;
    case 0x7F0958ECu: goto label_7F0958EC;
    case 0x7F095934u: goto label_7F095934;
    case 0x7F095944u: goto label_7F095944;
    case 0x7F09594Cu: goto label_7F09594C;
    case 0x7F0959B4u: goto label_7F0959B4;
    case 0x7F0959C4u: goto label_7F0959C4;
    case 0x7F0959D0u: goto label_7F0959D0;
    case 0x7F0959E0u: goto label_7F0959E0;
    case 0x7F095A60u: goto label_7F095A60;
    case 0x7F095A70u: goto label_7F095A70;
    case 0x7F095AB8u: goto label_7F095AB8;
    case 0x7F095AE0u: goto label_7F095AE0;
    case 0x7F095AF8u: goto label_7F095AF8;
    case 0x7F095B50u: goto label_7F095B50;
    case 0x7F095B70u: goto label_7F095B70;
    case 0x7F095B98u: goto label_7F095B98;
    case 0x7F095BACu: goto label_7F095BAC;
    case 0x7F095BE8u: goto label_7F095BE8;
    case 0x7F095BF4u: goto label_7F095BF4;
    case 0x7F095C00u: goto label_7F095C00;
    case 0x7F095C04u: goto label_7F095C04;
    case 0x7F095C24u: goto label_7F095C24;
    case 0x7F095C28u: goto label_7F095C28;
    case 0x7F095C44u: goto label_7F095C44;
    case 0x7F095C50u: goto label_7F095C50;
    case 0x7F095C94u: goto label_7F095C94;
    case 0x7F095CA4u: goto label_7F095CA4;
    case 0x7F095CB8u: goto label_7F095CB8;
    case 0x7F095CD4u: goto label_7F095CD4;
    case 0x7F095CE0u: goto label_7F095CE0;
    case 0x7F095CF0u: goto label_7F095CF0;
    case 0x7F095CFCu: goto label_7F095CFC;
    case 0x7F095DC0u: goto label_7F095DC0;
    case 0x7F095DD0u: goto label_7F095DD0;
    case 0x7F095DE0u: goto label_7F095DE0;
    case 0x7F095E20u: goto label_7F095E20;
    case 0x7F095E58u: goto label_7F095E58;
    case 0x7F095E6Cu: goto label_7F095E6C;
    case 0x7F095E9Cu: goto label_7F095E9C;
    case 0x7F095EDCu: goto label_7F095EDC;
    case 0x7F095F14u: goto label_7F095F14;
    case 0x7F095F28u: goto label_7F095F28;
    case 0x7F095F58u: goto label_7F095F58;
    case 0x7F095F68u: goto label_7F095F68;
    case 0x7F095F78u: goto label_7F095F78;
    case 0x7F095FD8u: goto label_7F095FD8;
    case 0x7F095FF0u: goto label_7F095FF0;
    case 0x7F09600Cu: goto label_7F09600C;
    case 0x7F096034u: goto label_7F096034;
    case 0x7F096050u: goto label_7F096050;
    case 0x7F096094u: goto label_7F096094;
    case 0x7F0960BCu: goto label_7F0960BC;
    case 0x7F0960C4u: goto label_7F0960C4;
    case 0x7F0960D4u: goto label_7F0960D4;
    case 0x7F0960E8u: goto label_7F0960E8;
    case 0x7F0960FCu: goto label_7F0960FC;
    case 0x7F096118u: goto label_7F096118;
    case 0x7F096130u: goto label_7F096130;
    case 0x7F096144u: goto label_7F096144;
    case 0x7F096154u: goto label_7F096154;
    case 0x7F096164u: goto label_7F096164;
    case 0x7F096194u: goto label_7F096194;
    case 0x7F0961BCu: goto label_7F0961BC;
    case 0x7F0961CCu: goto label_7F0961CC;
    case 0x7F096224u: goto label_7F096224;
    case 0x7F096270u: goto label_7F096270;
    case 0x7F096278u: goto label_7F096278;
    case 0x7F0962B0u: goto label_7F0962B0;
    case 0x7F0962CCu: goto label_7F0962CC;
    case 0x7F0962E4u: goto label_7F0962E4;
    case 0x7F0962F4u: goto label_7F0962F4;
    case 0x7F096308u: goto label_7F096308;
    case 0x7F096324u: goto label_7F096324;
    case 0x7F09633Cu: goto label_7F09633C;
    case 0x7F09634Cu: goto label_7F09634C;
    case 0x7F096360u: goto label_7F096360;
    case 0x7F0963E0u: goto label_7F0963E0;
    case 0x7F0963E8u: goto label_7F0963E8;
    case 0x7F096420u: goto label_7F096420;
    case 0x7F09643Cu: goto label_7F09643C;
    case 0x7F096454u: goto label_7F096454;
    case 0x7F096468u: goto label_7F096468;
    case 0x7F096484u: goto label_7F096484;
    case 0x7F09649Cu: goto label_7F09649C;
    case 0x7F0964D0u: goto label_7F0964D0;
    case 0x7F0964E4u: goto label_7F0964E4;
    case 0x7F096534u: goto label_7F096534;
    case 0x7F09653Cu: goto label_7F09653C;
    case 0x7F096594u: goto label_7F096594;
    case 0x7F0965ECu: goto label_7F0965EC;
    case 0x7F096604u: goto label_7F096604;
    case 0x7F096650u: goto label_7F096650;
    case 0x7F096768u: goto label_7F096768;
    case 0x7F096778u: goto label_7F096778;
    case 0x7F096788u: goto label_7F096788;
    case 0x7F096790u: goto label_7F096790;
    case 0x7F0967D8u: goto label_7F0967D8;
    case 0x7F096824u: goto label_7F096824;
    case 0x7F09683Cu: goto label_7F09683C;
    case 0x7F096848u: goto label_7F096848;
    case 0x7F096858u: goto label_7F096858;
    case 0x7F096868u: goto label_7F096868;
    case 0x7F096878u: goto label_7F096878;
    case 0x7F09689Cu: goto label_7F09689C;
    case 0x7F0968D8u: goto label_7F0968D8;
    case 0x7F0968F8u: goto label_7F0968F8;
    case 0x7F096940u: goto label_7F096940;
    case 0x7F0969B0u: goto label_7F0969B0;
    case 0x7F0969C4u: goto label_7F0969C4;
    case 0x7F0969D0u: goto label_7F0969D0;
    case 0x7F0969F0u: goto label_7F0969F0;
    case 0x7F096A4Cu: goto label_7F096A4C;
    case 0x7F096A60u: goto label_7F096A60;
    case 0x7F096AB4u: goto label_7F096AB4;
    case 0x7F096AF0u: goto label_7F096AF0;
    case 0x7F096AFCu: goto label_7F096AFC;
    case 0x7F096B08u: goto label_7F096B08;
    case 0x7F096B14u: goto label_7F096B14;
    case 0x7F096B44u: goto label_7F096B44;
    case 0x7F096BE8u: goto label_7F096BE8;
    case 0x7F096BF0u: goto label_7F096BF0;
    case 0x7F096C00u: goto label_7F096C00;
    case 0x7F096C54u: goto label_7F096C54;
    case 0x7F096C5Cu: goto label_7F096C5C;
    case 0x7F096C64u: goto label_7F096C64;
    case 0x7F096C6Cu: goto label_7F096C6C;
    case 0x7F096C84u: goto label_7F096C84;
    case 0x7F096C90u: goto label_7F096C90;
    case 0x7F096C98u: goto label_7F096C98;
    case 0x7F096CC8u: goto label_7F096CC8;
    case 0x7F096D54u: goto label_7F096D54;
    case 0x7F096DC0u: goto label_7F096DC0;
    case 0x7F096E34u: goto label_7F096E34;
    case 0x7F096E50u: goto label_7F096E50;
    case 0x7F096E74u: goto label_7F096E74;
    case 0x7F096EECu: goto label_7F096EEC;
    case 0x7F096F08u: goto label_7F096F08;
    case 0x7F096F1Cu: goto label_7F096F1C;
    case 0x7F096F28u: goto label_7F096F28;
    case 0x7F096F34u: goto label_7F096F34;
    case 0x7F096F40u: goto label_7F096F40;
    case 0x7F096F4Cu: goto label_7F096F4C;
    case 0x7F096F6Cu: goto label_7F096F6C;
    case 0x7F096F74u: goto label_7F096F74;
    case 0x7F096F80u: goto label_7F096F80;
    case 0x7F096FD4u: goto label_7F096FD4;
    case 0x7F096FDCu: goto label_7F096FDC;
    case 0x7F096FECu: goto label_7F096FEC;
    case 0x7F097000u: goto label_7F097000;
    case 0x7F097008u: goto label_7F097008;
    case 0x7F09704Cu: goto label_7F09704C;
    case 0x7F097068u: goto label_7F097068;
    case 0x7F097094u: goto label_7F097094;
    case 0x7F0970A4u: goto label_7F0970A4;
    case 0x7F0970F0u: goto label_7F0970F0;
    case 0x7F097124u: goto label_7F097124;
    case 0x7F097140u: goto label_7F097140;
    case 0x7F09715Cu: goto label_7F09715C;
    case 0x7F097178u: goto label_7F097178;
    case 0x7F097194u: goto label_7F097194;
    case 0x7F0971D8u: goto label_7F0971D8;
    case 0x7F0971E0u: goto label_7F0971E0;
    case 0x7F097220u: goto label_7F097220;
    case 0x7F09723Cu: goto label_7F09723C;
    case 0x7F097248u: goto label_7F097248;
    case 0x7F097260u: goto label_7F097260;
    case 0x7F097274u: goto label_7F097274;
    case 0x7F097280u: goto label_7F097280;
    case 0x7F0972ECu: goto label_7F0972EC;
    case 0x7F097304u: goto label_7F097304;
    case 0x7F097340u: goto label_7F097340;
    case 0x7F097348u: goto label_7F097348;
    case 0x7F097374u: goto label_7F097374;
    case 0x7F0973B0u: goto label_7F0973B0;
    case 0x7F0973B8u: goto label_7F0973B8;
    case 0x7F0973DCu: goto label_7F0973DC;
    case 0x7F097418u: goto label_7F097418;
    case 0x7F097420u: goto label_7F097420;
    case 0x7F09744Cu: goto label_7F09744C;
    case 0x7F097488u: goto label_7F097488;
    case 0x7F097490u: goto label_7F097490;
    case 0x7F0974BCu: goto label_7F0974BC;
    case 0x7F0974F8u: goto label_7F0974F8;
    case 0x7F097500u: goto label_7F097500;
    case 0x7F097524u: goto label_7F097524;
    case 0x7F097560u: goto label_7F097560;
    case 0x7F097568u: goto label_7F097568;
    case 0x7F097594u: goto label_7F097594;
    case 0x7F0975D0u: goto label_7F0975D0;
    case 0x7F0975E0u: goto label_7F0975E0;
    case 0x7F097604u: goto label_7F097604;
    case 0x7F097664u: goto label_7F097664;
    case 0x7F097678u: goto label_7F097678;
    case 0x7F0976D4u: goto label_7F0976D4;
    case 0x7F0976F8u: goto label_7F0976F8;
    case 0x7F0977C0u: goto label_7F0977C0;
    case 0x7F0977D0u: goto label_7F0977D0;
    case 0x7F097870u: goto label_7F097870;
    case 0x7F0978F8u: goto label_7F0978F8;
    case 0x7F097954u: goto label_7F097954;
    case 0x7F097964u: goto label_7F097964;
    case 0x7F0979A0u: goto label_7F0979A0;
    case 0x7F0979ACu: goto label_7F0979AC;
    case 0x7F0979ECu: goto label_7F0979EC;
    case 0x7F097A5Cu: goto label_7F097A5C;
    case 0x7F097AD4u: goto label_7F097AD4;
    case 0x7F097AE8u: goto label_7F097AE8;
    case 0x7F097AF8u: goto label_7F097AF8;
    case 0x7F097B34u: goto label_7F097B34;
    case 0x7F097B3Cu: goto label_7F097B3C;
    case 0x7F097B44u: goto label_7F097B44;
    case 0x7F097C04u: goto label_7F097C04;
    case 0x7F097C64u: goto label_7F097C64;
    case 0x7F097CC4u: goto label_7F097CC4;
    case 0x7F097D18u: goto label_7F097D18;
    case 0x7F097D2Cu: goto label_7F097D2C;
    case 0x7F097D38u: goto label_7F097D38;
    case 0x7F097D60u: goto label_7F097D60;
    case 0x7F097DA8u: goto label_7F097DA8;
    case 0x7F097DDCu: goto label_7F097DDC;
    case 0x7F097E38u: goto label_7F097E38;
    case 0x7F097E54u: goto label_7F097E54;
    case 0x7F097E70u: goto label_7F097E70;
    case 0x7F097E8Cu: goto label_7F097E8C;
    case 0x7F097EA8u: goto label_7F097EA8;
    case 0x7F097EE8u: goto label_7F097EE8;
    case 0x7F097EF8u: goto label_7F097EF8;
    case 0x7F097F54u: goto label_7F097F54;
    case 0x7F097FC8u: goto label_7F097FC8;
    case 0x7F098040u: goto label_7F098040;
    case 0x7F0980ACu: goto label_7F0980AC;
    case 0x7F0980B8u: goto label_7F0980B8;
    case 0x7F0980C0u: goto label_7F0980C0;
    default: return;
    }
}

