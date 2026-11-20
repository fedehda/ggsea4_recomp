// DolRecomp output
#include "../generated.h"

static void loop_7F274FA8(CPUState* ctx) {
label_7F274FA8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F274FA8u;
    // 7F274FA8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F274FACu;
    // 7F274FAC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F274FB0u;
    // 7F274FB0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F274FB4u;
    // 7F274FB4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F274FB8: bc    16, 0, 0x7F274FA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274FA8u;
                return;
            }
            goto label_7F274FA8;
        }
    }

    ctx->pc = 0x7F274FBCu;
}

static void loop_7F275E34(CPUState* ctx) {
label_7F275E34:
    ctx->downcount -= 5;
    ctx->pc = 0x7F275E34u;
    // 7F275E34: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F275E38u;
    // 7F275E38: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F275E3Cu;
    // 7F275E3C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F275E40u;
    // 7F275E40: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F275E44: bc    16, 0, 0x7F275E34
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F275E34u;
                return;
            }
            goto label_7F275E34;
        }
    }

    ctx->pc = 0x7F275E48u;
}

static void loop_7F2761AC(CPUState* ctx) {
label_7F2761AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2761ACu;
    // 7F2761AC: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2761B0u;
    // 7F2761B0: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F2761B4u;
    // 7F2761B4: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2761B8u;
    // 7F2761B8: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F2761BC: bc    16, 0, 0x7F2761AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2761ACu;
                return;
            }
            goto label_7F2761AC;
        }
    }

    ctx->pc = 0x7F2761C0u;
}

static void loop_7F276274(CPUState* ctx) {
label_7F276274:
    ctx->downcount -= 5;
    ctx->pc = 0x7F276274u;
    // 7F276274: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F276278u;
    // 7F276278: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F27627Cu;
    // 7F27627C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F276280u;
    // 7F276280: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F276284: bc    16, 0, 0x7F276274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276274u;
                return;
            }
            goto label_7F276274;
        }
    }

    ctx->pc = 0x7F276288u;
}

static void loop_7F277144(CPUState* ctx) {
label_7F277144:
    ctx->downcount -= 5;
    ctx->pc = 0x7F277144u;
    // 7F277144: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F277148u;
    // 7F277148: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F27714Cu;
    // 7F27714C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F277150u;
    // 7F277150: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F277154: bc    16, 0, 0x7F277144
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277144u;
                return;
            }
            goto label_7F277144;
        }
    }

    ctx->pc = 0x7F277158u;
}

void func_7F2740EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2740ECu: goto label_7F2740EC;
    case 0x7F2740F0u: goto label_7F2740F0;
    case 0x7F2740F4u: goto label_7F2740F4;
    case 0x7F2740F8u: goto label_7F2740F8;
    case 0x7F2740FCu: goto label_7F2740FC;
    case 0x7F274100u: goto label_7F274100;
    case 0x7F274104u: goto label_7F274104;
    case 0x7F274108u: goto label_7F274108;
    case 0x7F27410Cu: goto label_7F27410C;
    case 0x7F274110u: goto label_7F274110;
    case 0x7F274114u: goto label_7F274114;
    case 0x7F274118u: goto label_7F274118;
    case 0x7F27411Cu: goto label_7F27411C;
    case 0x7F274120u: goto label_7F274120;
    case 0x7F274124u: goto label_7F274124;
    case 0x7F274128u: goto label_7F274128;
    case 0x7F27412Cu: goto label_7F27412C;
    case 0x7F274130u: goto label_7F274130;
    case 0x7F274134u: goto label_7F274134;
    case 0x7F274138u: goto label_7F274138;
    case 0x7F27413Cu: goto label_7F27413C;
    case 0x7F274140u: goto label_7F274140;
    case 0x7F274144u: goto label_7F274144;
    case 0x7F274148u: goto label_7F274148;
    case 0x7F27414Cu: goto label_7F27414C;
    case 0x7F274150u: goto label_7F274150;
    case 0x7F274154u: goto label_7F274154;
    case 0x7F274158u: goto label_7F274158;
    case 0x7F27415Cu: goto label_7F27415C;
    case 0x7F274160u: goto label_7F274160;
    case 0x7F274164u: goto label_7F274164;
    case 0x7F274168u: goto label_7F274168;
    case 0x7F27416Cu: goto label_7F27416C;
    case 0x7F274170u: goto label_7F274170;
    case 0x7F274174u: goto label_7F274174;
    case 0x7F274178u: goto label_7F274178;
    case 0x7F27417Cu: goto label_7F27417C;
    case 0x7F274180u: goto label_7F274180;
    case 0x7F274184u: goto label_7F274184;
    case 0x7F274188u: goto label_7F274188;
    case 0x7F27418Cu: goto label_7F27418C;
    case 0x7F274190u: goto label_7F274190;
    case 0x7F274194u: goto label_7F274194;
    case 0x7F274198u: goto label_7F274198;
    case 0x7F27419Cu: goto label_7F27419C;
    case 0x7F2741A0u: goto label_7F2741A0;
    case 0x7F2741A4u: goto label_7F2741A4;
    case 0x7F2741A8u: goto label_7F2741A8;
    case 0x7F2741ACu: goto label_7F2741AC;
    case 0x7F2741B0u: goto label_7F2741B0;
    case 0x7F2741B4u: goto label_7F2741B4;
    case 0x7F2741B8u: goto label_7F2741B8;
    case 0x7F2741BCu: goto label_7F2741BC;
    case 0x7F2741C0u: goto label_7F2741C0;
    case 0x7F2741C4u: goto label_7F2741C4;
    case 0x7F2741C8u: goto label_7F2741C8;
    case 0x7F2741CCu: goto label_7F2741CC;
    case 0x7F2741D0u: goto label_7F2741D0;
    case 0x7F2741D4u: goto label_7F2741D4;
    case 0x7F2741D8u: goto label_7F2741D8;
    case 0x7F2741DCu: goto label_7F2741DC;
    case 0x7F2741E0u: goto label_7F2741E0;
    case 0x7F2741E4u: goto label_7F2741E4;
    case 0x7F2741E8u: goto label_7F2741E8;
    case 0x7F2741ECu: goto label_7F2741EC;
    case 0x7F2741F0u: goto label_7F2741F0;
    case 0x7F2741F4u: goto label_7F2741F4;
    case 0x7F2741F8u: goto label_7F2741F8;
    case 0x7F2741FCu: goto label_7F2741FC;
    case 0x7F274200u: goto label_7F274200;
    case 0x7F274204u: goto label_7F274204;
    case 0x7F274208u: goto label_7F274208;
    case 0x7F27420Cu: goto label_7F27420C;
    case 0x7F274210u: goto label_7F274210;
    case 0x7F274214u: goto label_7F274214;
    case 0x7F274218u: goto label_7F274218;
    case 0x7F27421Cu: goto label_7F27421C;
    case 0x7F274220u: goto label_7F274220;
    case 0x7F274224u: goto label_7F274224;
    case 0x7F274228u: goto label_7F274228;
    case 0x7F27422Cu: goto label_7F27422C;
    case 0x7F274230u: goto label_7F274230;
    case 0x7F274234u: goto label_7F274234;
    case 0x7F274238u: goto label_7F274238;
    case 0x7F27423Cu: goto label_7F27423C;
    case 0x7F274240u: goto label_7F274240;
    case 0x7F274244u: goto label_7F274244;
    case 0x7F274248u: goto label_7F274248;
    case 0x7F27424Cu: goto label_7F27424C;
    case 0x7F274250u: goto label_7F274250;
    case 0x7F274254u: goto label_7F274254;
    case 0x7F274258u: goto label_7F274258;
    case 0x7F27425Cu: goto label_7F27425C;
    case 0x7F274260u: goto label_7F274260;
    case 0x7F274264u: goto label_7F274264;
    case 0x7F274268u: goto label_7F274268;
    case 0x7F27426Cu: goto label_7F27426C;
    case 0x7F274270u: goto label_7F274270;
    case 0x7F274274u: goto label_7F274274;
    case 0x7F274278u: goto label_7F274278;
    case 0x7F27427Cu: goto label_7F27427C;
    case 0x7F274280u: goto label_7F274280;
    case 0x7F274284u: goto label_7F274284;
    case 0x7F274288u: goto label_7F274288;
    case 0x7F27428Cu: goto label_7F27428C;
    case 0x7F274290u: goto label_7F274290;
    case 0x7F274294u: goto label_7F274294;
    case 0x7F274298u: goto label_7F274298;
    case 0x7F27429Cu: goto label_7F27429C;
    case 0x7F2742A0u: goto label_7F2742A0;
    case 0x7F2742A4u: goto label_7F2742A4;
    case 0x7F2742A8u: goto label_7F2742A8;
    case 0x7F2742ACu: goto label_7F2742AC;
    case 0x7F2742B0u: goto label_7F2742B0;
    case 0x7F2742B4u: goto label_7F2742B4;
    case 0x7F2742B8u: goto label_7F2742B8;
    case 0x7F2742BCu: goto label_7F2742BC;
    case 0x7F2742C0u: goto label_7F2742C0;
    case 0x7F2742C4u: goto label_7F2742C4;
    case 0x7F2742C8u: goto label_7F2742C8;
    case 0x7F2742CCu: goto label_7F2742CC;
    case 0x7F2742D0u: goto label_7F2742D0;
    case 0x7F2742D4u: goto label_7F2742D4;
    case 0x7F2742D8u: goto label_7F2742D8;
    case 0x7F2742DCu: goto label_7F2742DC;
    case 0x7F2742E0u: goto label_7F2742E0;
    case 0x7F2742E4u: goto label_7F2742E4;
    case 0x7F2742E8u: goto label_7F2742E8;
    case 0x7F2742ECu: goto label_7F2742EC;
    case 0x7F2742F0u: goto label_7F2742F0;
    case 0x7F2742F4u: goto label_7F2742F4;
    case 0x7F2742F8u: goto label_7F2742F8;
    case 0x7F2742FCu: goto label_7F2742FC;
    case 0x7F274300u: goto label_7F274300;
    case 0x7F274304u: goto label_7F274304;
    case 0x7F274308u: goto label_7F274308;
    case 0x7F27430Cu: goto label_7F27430C;
    case 0x7F274310u: goto label_7F274310;
    case 0x7F274314u: goto label_7F274314;
    case 0x7F274318u: goto label_7F274318;
    case 0x7F27431Cu: goto label_7F27431C;
    case 0x7F274320u: goto label_7F274320;
    case 0x7F274324u: goto label_7F274324;
    case 0x7F274328u: goto label_7F274328;
    case 0x7F27432Cu: goto label_7F27432C;
    case 0x7F274330u: goto label_7F274330;
    case 0x7F274334u: goto label_7F274334;
    case 0x7F274338u: goto label_7F274338;
    case 0x7F27433Cu: goto label_7F27433C;
    case 0x7F274340u: goto label_7F274340;
    case 0x7F274344u: goto label_7F274344;
    case 0x7F274348u: goto label_7F274348;
    case 0x7F27434Cu: goto label_7F27434C;
    case 0x7F274350u: goto label_7F274350;
    case 0x7F274354u: goto label_7F274354;
    case 0x7F274358u: goto label_7F274358;
    case 0x7F27435Cu: goto label_7F27435C;
    case 0x7F274360u: goto label_7F274360;
    case 0x7F274364u: goto label_7F274364;
    case 0x7F274368u: goto label_7F274368;
    case 0x7F27436Cu: goto label_7F27436C;
    case 0x7F274370u: goto label_7F274370;
    case 0x7F274374u: goto label_7F274374;
    case 0x7F274378u: goto label_7F274378;
    case 0x7F27437Cu: goto label_7F27437C;
    case 0x7F274380u: goto label_7F274380;
    case 0x7F274384u: goto label_7F274384;
    case 0x7F274388u: goto label_7F274388;
    case 0x7F27438Cu: goto label_7F27438C;
    case 0x7F274390u: goto label_7F274390;
    case 0x7F274394u: goto label_7F274394;
    case 0x7F274398u: goto label_7F274398;
    case 0x7F27439Cu: goto label_7F27439C;
    case 0x7F2743A0u: goto label_7F2743A0;
    case 0x7F2743A4u: goto label_7F2743A4;
    case 0x7F2743A8u: goto label_7F2743A8;
    case 0x7F2743ACu: goto label_7F2743AC;
    case 0x7F2743B0u: goto label_7F2743B0;
    case 0x7F2743B4u: goto label_7F2743B4;
    case 0x7F2743B8u: goto label_7F2743B8;
    case 0x7F2743BCu: goto label_7F2743BC;
    case 0x7F2743C0u: goto label_7F2743C0;
    case 0x7F2743C4u: goto label_7F2743C4;
    case 0x7F2743C8u: goto label_7F2743C8;
    case 0x7F2743CCu: goto label_7F2743CC;
    case 0x7F2743D0u: goto label_7F2743D0;
    case 0x7F2743D4u: goto label_7F2743D4;
    case 0x7F2743D8u: goto label_7F2743D8;
    case 0x7F2743DCu: goto label_7F2743DC;
    case 0x7F2743E0u: goto label_7F2743E0;
    case 0x7F2743E4u: goto label_7F2743E4;
    case 0x7F2743E8u: goto label_7F2743E8;
    case 0x7F2743ECu: goto label_7F2743EC;
    case 0x7F2743F0u: goto label_7F2743F0;
    case 0x7F2743F4u: goto label_7F2743F4;
    case 0x7F2743F8u: goto label_7F2743F8;
    case 0x7F2743FCu: goto label_7F2743FC;
    case 0x7F274400u: goto label_7F274400;
    case 0x7F274404u: goto label_7F274404;
    case 0x7F274408u: goto label_7F274408;
    case 0x7F27440Cu: goto label_7F27440C;
    case 0x7F274410u: goto label_7F274410;
    case 0x7F274414u: goto label_7F274414;
    case 0x7F274418u: goto label_7F274418;
    case 0x7F27441Cu: goto label_7F27441C;
    case 0x7F274420u: goto label_7F274420;
    case 0x7F274424u: goto label_7F274424;
    case 0x7F274428u: goto label_7F274428;
    case 0x7F27442Cu: goto label_7F27442C;
    case 0x7F274430u: goto label_7F274430;
    case 0x7F274434u: goto label_7F274434;
    case 0x7F274438u: goto label_7F274438;
    case 0x7F27443Cu: goto label_7F27443C;
    case 0x7F274440u: goto label_7F274440;
    case 0x7F274444u: goto label_7F274444;
    case 0x7F274448u: goto label_7F274448;
    case 0x7F27444Cu: goto label_7F27444C;
    case 0x7F274450u: goto label_7F274450;
    case 0x7F274454u: goto label_7F274454;
    case 0x7F274458u: goto label_7F274458;
    case 0x7F27445Cu: goto label_7F27445C;
    case 0x7F274460u: goto label_7F274460;
    case 0x7F274464u: goto label_7F274464;
    case 0x7F274468u: goto label_7F274468;
    case 0x7F27446Cu: goto label_7F27446C;
    case 0x7F274470u: goto label_7F274470;
    case 0x7F274474u: goto label_7F274474;
    case 0x7F274478u: goto label_7F274478;
    case 0x7F27447Cu: goto label_7F27447C;
    case 0x7F274480u: goto label_7F274480;
    case 0x7F274484u: goto label_7F274484;
    case 0x7F274488u: goto label_7F274488;
    case 0x7F27448Cu: goto label_7F27448C;
    case 0x7F274490u: goto label_7F274490;
    case 0x7F274494u: goto label_7F274494;
    case 0x7F274498u: goto label_7F274498;
    case 0x7F27449Cu: goto label_7F27449C;
    case 0x7F2744A0u: goto label_7F2744A0;
    case 0x7F2744A4u: goto label_7F2744A4;
    case 0x7F2744A8u: goto label_7F2744A8;
    case 0x7F2744ACu: goto label_7F2744AC;
    case 0x7F2744B0u: goto label_7F2744B0;
    case 0x7F2744B4u: goto label_7F2744B4;
    case 0x7F2744B8u: goto label_7F2744B8;
    case 0x7F2744BCu: goto label_7F2744BC;
    case 0x7F2744C0u: goto label_7F2744C0;
    case 0x7F2744C4u: goto label_7F2744C4;
    case 0x7F2744C8u: goto label_7F2744C8;
    case 0x7F2744CCu: goto label_7F2744CC;
    case 0x7F2744D0u: goto label_7F2744D0;
    case 0x7F2744D4u: goto label_7F2744D4;
    case 0x7F2744D8u: goto label_7F2744D8;
    case 0x7F2744DCu: goto label_7F2744DC;
    case 0x7F2744E0u: goto label_7F2744E0;
    case 0x7F2744E4u: goto label_7F2744E4;
    case 0x7F2744E8u: goto label_7F2744E8;
    case 0x7F2744ECu: goto label_7F2744EC;
    case 0x7F2744F0u: goto label_7F2744F0;
    case 0x7F2744F4u: goto label_7F2744F4;
    case 0x7F2744F8u: goto label_7F2744F8;
    case 0x7F2744FCu: goto label_7F2744FC;
    case 0x7F274500u: goto label_7F274500;
    case 0x7F274504u: goto label_7F274504;
    case 0x7F274508u: goto label_7F274508;
    case 0x7F27450Cu: goto label_7F27450C;
    case 0x7F274510u: goto label_7F274510;
    case 0x7F274514u: goto label_7F274514;
    case 0x7F274518u: goto label_7F274518;
    case 0x7F27451Cu: goto label_7F27451C;
    case 0x7F274520u: goto label_7F274520;
    case 0x7F274524u: goto label_7F274524;
    case 0x7F274528u: goto label_7F274528;
    case 0x7F27452Cu: goto label_7F27452C;
    case 0x7F274530u: goto label_7F274530;
    case 0x7F274534u: goto label_7F274534;
    case 0x7F274538u: goto label_7F274538;
    case 0x7F27453Cu: goto label_7F27453C;
    case 0x7F274540u: goto label_7F274540;
    case 0x7F274544u: goto label_7F274544;
    case 0x7F274548u: goto label_7F274548;
    case 0x7F27454Cu: goto label_7F27454C;
    case 0x7F274550u: goto label_7F274550;
    case 0x7F274554u: goto label_7F274554;
    case 0x7F274558u: goto label_7F274558;
    case 0x7F27455Cu: goto label_7F27455C;
    case 0x7F274560u: goto label_7F274560;
    case 0x7F274564u: goto label_7F274564;
    case 0x7F274568u: goto label_7F274568;
    case 0x7F27456Cu: goto label_7F27456C;
    case 0x7F274570u: goto label_7F274570;
    case 0x7F274574u: goto label_7F274574;
    case 0x7F274578u: goto label_7F274578;
    case 0x7F27457Cu: goto label_7F27457C;
    case 0x7F274580u: goto label_7F274580;
    case 0x7F274584u: goto label_7F274584;
    case 0x7F274588u: goto label_7F274588;
    case 0x7F27458Cu: goto label_7F27458C;
    case 0x7F274590u: goto label_7F274590;
    case 0x7F274594u: goto label_7F274594;
    case 0x7F274598u: goto label_7F274598;
    case 0x7F27459Cu: goto label_7F27459C;
    case 0x7F2745A0u: goto label_7F2745A0;
    case 0x7F2745A4u: goto label_7F2745A4;
    case 0x7F2745A8u: goto label_7F2745A8;
    case 0x7F2745ACu: goto label_7F2745AC;
    case 0x7F2745B0u: goto label_7F2745B0;
    case 0x7F2745B4u: goto label_7F2745B4;
    case 0x7F2745B8u: goto label_7F2745B8;
    case 0x7F2745BCu: goto label_7F2745BC;
    case 0x7F2745C0u: goto label_7F2745C0;
    case 0x7F2745C4u: goto label_7F2745C4;
    case 0x7F2745C8u: goto label_7F2745C8;
    case 0x7F2745CCu: goto label_7F2745CC;
    case 0x7F2745D0u: goto label_7F2745D0;
    case 0x7F2745D4u: goto label_7F2745D4;
    case 0x7F2745D8u: goto label_7F2745D8;
    case 0x7F2745DCu: goto label_7F2745DC;
    case 0x7F2745E0u: goto label_7F2745E0;
    case 0x7F2745E4u: goto label_7F2745E4;
    case 0x7F2745E8u: goto label_7F2745E8;
    case 0x7F2745ECu: goto label_7F2745EC;
    case 0x7F2745F0u: goto label_7F2745F0;
    case 0x7F2745F4u: goto label_7F2745F4;
    case 0x7F2745F8u: goto label_7F2745F8;
    case 0x7F2745FCu: goto label_7F2745FC;
    case 0x7F274600u: goto label_7F274600;
    case 0x7F274604u: goto label_7F274604;
    case 0x7F274608u: goto label_7F274608;
    case 0x7F27460Cu: goto label_7F27460C;
    case 0x7F274610u: goto label_7F274610;
    case 0x7F274614u: goto label_7F274614;
    case 0x7F274618u: goto label_7F274618;
    case 0x7F27461Cu: goto label_7F27461C;
    case 0x7F274620u: goto label_7F274620;
    case 0x7F274624u: goto label_7F274624;
    case 0x7F274628u: goto label_7F274628;
    case 0x7F27462Cu: goto label_7F27462C;
    case 0x7F274630u: goto label_7F274630;
    case 0x7F274634u: goto label_7F274634;
    case 0x7F274638u: goto label_7F274638;
    case 0x7F27463Cu: goto label_7F27463C;
    case 0x7F274640u: goto label_7F274640;
    case 0x7F274644u: goto label_7F274644;
    case 0x7F274648u: goto label_7F274648;
    case 0x7F27464Cu: goto label_7F27464C;
    case 0x7F274650u: goto label_7F274650;
    case 0x7F274654u: goto label_7F274654;
    case 0x7F274658u: goto label_7F274658;
    case 0x7F27465Cu: goto label_7F27465C;
    case 0x7F274660u: goto label_7F274660;
    case 0x7F274664u: goto label_7F274664;
    case 0x7F274668u: goto label_7F274668;
    case 0x7F27466Cu: goto label_7F27466C;
    case 0x7F274670u: goto label_7F274670;
    case 0x7F274674u: goto label_7F274674;
    case 0x7F274678u: goto label_7F274678;
    case 0x7F27467Cu: goto label_7F27467C;
    case 0x7F274680u: goto label_7F274680;
    case 0x7F274684u: goto label_7F274684;
    case 0x7F274688u: goto label_7F274688;
    case 0x7F27468Cu: goto label_7F27468C;
    case 0x7F274690u: goto label_7F274690;
    case 0x7F274694u: goto label_7F274694;
    case 0x7F274698u: goto label_7F274698;
    case 0x7F27469Cu: goto label_7F27469C;
    case 0x7F2746A0u: goto label_7F2746A0;
    case 0x7F2746A4u: goto label_7F2746A4;
    case 0x7F2746A8u: goto label_7F2746A8;
    case 0x7F2746ACu: goto label_7F2746AC;
    case 0x7F2746B0u: goto label_7F2746B0;
    case 0x7F2746B4u: goto label_7F2746B4;
    case 0x7F2746B8u: goto label_7F2746B8;
    case 0x7F2746BCu: goto label_7F2746BC;
    case 0x7F2746C0u: goto label_7F2746C0;
    case 0x7F2746C4u: goto label_7F2746C4;
    case 0x7F2746C8u: goto label_7F2746C8;
    case 0x7F2746CCu: goto label_7F2746CC;
    case 0x7F2746D0u: goto label_7F2746D0;
    case 0x7F2746D4u: goto label_7F2746D4;
    case 0x7F2746D8u: goto label_7F2746D8;
    case 0x7F2746DCu: goto label_7F2746DC;
    case 0x7F2746E0u: goto label_7F2746E0;
    case 0x7F2746E4u: goto label_7F2746E4;
    case 0x7F2746E8u: goto label_7F2746E8;
    case 0x7F2746ECu: goto label_7F2746EC;
    case 0x7F2746F0u: goto label_7F2746F0;
    case 0x7F2746F4u: goto label_7F2746F4;
    case 0x7F2746F8u: goto label_7F2746F8;
    case 0x7F2746FCu: goto label_7F2746FC;
    case 0x7F274700u: goto label_7F274700;
    case 0x7F274704u: goto label_7F274704;
    case 0x7F274708u: goto label_7F274708;
    case 0x7F27470Cu: goto label_7F27470C;
    case 0x7F274710u: goto label_7F274710;
    case 0x7F274714u: goto label_7F274714;
    case 0x7F274718u: goto label_7F274718;
    case 0x7F27471Cu: goto label_7F27471C;
    case 0x7F274720u: goto label_7F274720;
    case 0x7F274724u: goto label_7F274724;
    case 0x7F274728u: goto label_7F274728;
    case 0x7F27472Cu: goto label_7F27472C;
    case 0x7F274730u: goto label_7F274730;
    case 0x7F274734u: goto label_7F274734;
    case 0x7F274738u: goto label_7F274738;
    case 0x7F27473Cu: goto label_7F27473C;
    case 0x7F274740u: goto label_7F274740;
    case 0x7F274744u: goto label_7F274744;
    case 0x7F274748u: goto label_7F274748;
    case 0x7F27474Cu: goto label_7F27474C;
    case 0x7F274750u: goto label_7F274750;
    case 0x7F274754u: goto label_7F274754;
    case 0x7F274758u: goto label_7F274758;
    case 0x7F27475Cu: goto label_7F27475C;
    case 0x7F274760u: goto label_7F274760;
    case 0x7F274764u: goto label_7F274764;
    case 0x7F274768u: goto label_7F274768;
    case 0x7F27476Cu: goto label_7F27476C;
    case 0x7F274770u: goto label_7F274770;
    case 0x7F274774u: goto label_7F274774;
    case 0x7F274778u: goto label_7F274778;
    case 0x7F27477Cu: goto label_7F27477C;
    case 0x7F274780u: goto label_7F274780;
    case 0x7F274784u: goto label_7F274784;
    case 0x7F274788u: goto label_7F274788;
    case 0x7F27478Cu: goto label_7F27478C;
    case 0x7F274790u: goto label_7F274790;
    case 0x7F274794u: goto label_7F274794;
    case 0x7F274798u: goto label_7F274798;
    case 0x7F27479Cu: goto label_7F27479C;
    case 0x7F2747A0u: goto label_7F2747A0;
    case 0x7F2747A4u: goto label_7F2747A4;
    case 0x7F2747A8u: goto label_7F2747A8;
    case 0x7F2747ACu: goto label_7F2747AC;
    case 0x7F2747B0u: goto label_7F2747B0;
    case 0x7F2747B4u: goto label_7F2747B4;
    case 0x7F2747B8u: goto label_7F2747B8;
    case 0x7F2747BCu: goto label_7F2747BC;
    case 0x7F2747C0u: goto label_7F2747C0;
    case 0x7F2747C4u: goto label_7F2747C4;
    case 0x7F2747C8u: goto label_7F2747C8;
    case 0x7F2747CCu: goto label_7F2747CC;
    case 0x7F2747D0u: goto label_7F2747D0;
    case 0x7F2747D4u: goto label_7F2747D4;
    case 0x7F2747D8u: goto label_7F2747D8;
    case 0x7F2747DCu: goto label_7F2747DC;
    case 0x7F2747E0u: goto label_7F2747E0;
    case 0x7F2747E4u: goto label_7F2747E4;
    case 0x7F2747E8u: goto label_7F2747E8;
    case 0x7F2747ECu: goto label_7F2747EC;
    case 0x7F2747F0u: goto label_7F2747F0;
    case 0x7F2747F4u: goto label_7F2747F4;
    case 0x7F2747F8u: goto label_7F2747F8;
    case 0x7F2747FCu: goto label_7F2747FC;
    case 0x7F274800u: goto label_7F274800;
    case 0x7F274804u: goto label_7F274804;
    case 0x7F274808u: goto label_7F274808;
    case 0x7F27480Cu: goto label_7F27480C;
    case 0x7F274810u: goto label_7F274810;
    case 0x7F274814u: goto label_7F274814;
    case 0x7F274818u: goto label_7F274818;
    case 0x7F27481Cu: goto label_7F27481C;
    case 0x7F274820u: goto label_7F274820;
    case 0x7F274824u: goto label_7F274824;
    case 0x7F274828u: goto label_7F274828;
    case 0x7F27482Cu: goto label_7F27482C;
    case 0x7F274830u: goto label_7F274830;
    case 0x7F274834u: goto label_7F274834;
    case 0x7F274838u: goto label_7F274838;
    case 0x7F27483Cu: goto label_7F27483C;
    case 0x7F274840u: goto label_7F274840;
    case 0x7F274844u: goto label_7F274844;
    case 0x7F274848u: goto label_7F274848;
    case 0x7F27484Cu: goto label_7F27484C;
    case 0x7F274850u: goto label_7F274850;
    case 0x7F274854u: goto label_7F274854;
    case 0x7F274858u: goto label_7F274858;
    case 0x7F27485Cu: goto label_7F27485C;
    case 0x7F274860u: goto label_7F274860;
    case 0x7F274864u: goto label_7F274864;
    case 0x7F274868u: goto label_7F274868;
    case 0x7F27486Cu: goto label_7F27486C;
    case 0x7F274870u: goto label_7F274870;
    case 0x7F274874u: goto label_7F274874;
    case 0x7F274878u: goto label_7F274878;
    case 0x7F27487Cu: goto label_7F27487C;
    case 0x7F274880u: goto label_7F274880;
    case 0x7F274884u: goto label_7F274884;
    case 0x7F274888u: goto label_7F274888;
    case 0x7F27488Cu: goto label_7F27488C;
    case 0x7F274890u: goto label_7F274890;
    case 0x7F274894u: goto label_7F274894;
    case 0x7F274898u: goto label_7F274898;
    case 0x7F27489Cu: goto label_7F27489C;
    case 0x7F2748A0u: goto label_7F2748A0;
    case 0x7F2748A4u: goto label_7F2748A4;
    case 0x7F2748A8u: goto label_7F2748A8;
    case 0x7F2748ACu: goto label_7F2748AC;
    case 0x7F2748B0u: goto label_7F2748B0;
    case 0x7F2748B4u: goto label_7F2748B4;
    case 0x7F2748B8u: goto label_7F2748B8;
    case 0x7F2748BCu: goto label_7F2748BC;
    case 0x7F2748C0u: goto label_7F2748C0;
    case 0x7F2748C4u: goto label_7F2748C4;
    case 0x7F2748C8u: goto label_7F2748C8;
    case 0x7F2748CCu: goto label_7F2748CC;
    case 0x7F2748D0u: goto label_7F2748D0;
    case 0x7F2748D4u: goto label_7F2748D4;
    case 0x7F2748D8u: goto label_7F2748D8;
    case 0x7F2748DCu: goto label_7F2748DC;
    case 0x7F2748E0u: goto label_7F2748E0;
    case 0x7F2748E4u: goto label_7F2748E4;
    case 0x7F2748E8u: goto label_7F2748E8;
    case 0x7F2748ECu: goto label_7F2748EC;
    case 0x7F2748F0u: goto label_7F2748F0;
    case 0x7F2748F4u: goto label_7F2748F4;
    case 0x7F2748F8u: goto label_7F2748F8;
    case 0x7F2748FCu: goto label_7F2748FC;
    case 0x7F274900u: goto label_7F274900;
    case 0x7F274904u: goto label_7F274904;
    case 0x7F274908u: goto label_7F274908;
    case 0x7F27490Cu: goto label_7F27490C;
    case 0x7F274910u: goto label_7F274910;
    case 0x7F274914u: goto label_7F274914;
    case 0x7F274918u: goto label_7F274918;
    case 0x7F27491Cu: goto label_7F27491C;
    case 0x7F274920u: goto label_7F274920;
    case 0x7F274924u: goto label_7F274924;
    case 0x7F274928u: goto label_7F274928;
    case 0x7F27492Cu: goto label_7F27492C;
    case 0x7F274930u: goto label_7F274930;
    case 0x7F274934u: goto label_7F274934;
    case 0x7F274938u: goto label_7F274938;
    case 0x7F27493Cu: goto label_7F27493C;
    case 0x7F274940u: goto label_7F274940;
    case 0x7F274944u: goto label_7F274944;
    case 0x7F274948u: goto label_7F274948;
    case 0x7F27494Cu: goto label_7F27494C;
    case 0x7F274950u: goto label_7F274950;
    case 0x7F274954u: goto label_7F274954;
    case 0x7F274958u: goto label_7F274958;
    case 0x7F27495Cu: goto label_7F27495C;
    case 0x7F274960u: goto label_7F274960;
    case 0x7F274964u: goto label_7F274964;
    case 0x7F274968u: goto label_7F274968;
    case 0x7F27496Cu: goto label_7F27496C;
    case 0x7F274970u: goto label_7F274970;
    case 0x7F274974u: goto label_7F274974;
    case 0x7F274978u: goto label_7F274978;
    case 0x7F27497Cu: goto label_7F27497C;
    case 0x7F274980u: goto label_7F274980;
    case 0x7F274984u: goto label_7F274984;
    case 0x7F274988u: goto label_7F274988;
    case 0x7F27498Cu: goto label_7F27498C;
    case 0x7F274990u: goto label_7F274990;
    case 0x7F274994u: goto label_7F274994;
    case 0x7F274998u: goto label_7F274998;
    case 0x7F27499Cu: goto label_7F27499C;
    case 0x7F2749A0u: goto label_7F2749A0;
    case 0x7F2749A4u: goto label_7F2749A4;
    case 0x7F2749A8u: goto label_7F2749A8;
    case 0x7F2749ACu: goto label_7F2749AC;
    case 0x7F2749B0u: goto label_7F2749B0;
    case 0x7F2749B4u: goto label_7F2749B4;
    case 0x7F2749B8u: goto label_7F2749B8;
    case 0x7F2749BCu: goto label_7F2749BC;
    case 0x7F2749C0u: goto label_7F2749C0;
    case 0x7F2749C4u: goto label_7F2749C4;
    case 0x7F2749C8u: goto label_7F2749C8;
    case 0x7F2749CCu: goto label_7F2749CC;
    case 0x7F2749D0u: goto label_7F2749D0;
    case 0x7F2749D4u: goto label_7F2749D4;
    case 0x7F2749D8u: goto label_7F2749D8;
    case 0x7F2749DCu: goto label_7F2749DC;
    case 0x7F2749E0u: goto label_7F2749E0;
    case 0x7F2749E4u: goto label_7F2749E4;
    case 0x7F2749E8u: goto label_7F2749E8;
    case 0x7F2749ECu: goto label_7F2749EC;
    case 0x7F2749F0u: goto label_7F2749F0;
    case 0x7F2749F4u: goto label_7F2749F4;
    case 0x7F2749F8u: goto label_7F2749F8;
    case 0x7F2749FCu: goto label_7F2749FC;
    case 0x7F274A00u: goto label_7F274A00;
    case 0x7F274A04u: goto label_7F274A04;
    case 0x7F274A08u: goto label_7F274A08;
    case 0x7F274A0Cu: goto label_7F274A0C;
    case 0x7F274A10u: goto label_7F274A10;
    case 0x7F274A14u: goto label_7F274A14;
    case 0x7F274A18u: goto label_7F274A18;
    case 0x7F274A1Cu: goto label_7F274A1C;
    case 0x7F274A20u: goto label_7F274A20;
    case 0x7F274A24u: goto label_7F274A24;
    case 0x7F274A28u: goto label_7F274A28;
    case 0x7F274A2Cu: goto label_7F274A2C;
    case 0x7F274A30u: goto label_7F274A30;
    case 0x7F274A34u: goto label_7F274A34;
    case 0x7F274A38u: goto label_7F274A38;
    case 0x7F274A3Cu: goto label_7F274A3C;
    case 0x7F274A40u: goto label_7F274A40;
    case 0x7F274A44u: goto label_7F274A44;
    case 0x7F274A48u: goto label_7F274A48;
    case 0x7F274A4Cu: goto label_7F274A4C;
    case 0x7F274A50u: goto label_7F274A50;
    case 0x7F274A54u: goto label_7F274A54;
    case 0x7F274A58u: goto label_7F274A58;
    case 0x7F274A5Cu: goto label_7F274A5C;
    case 0x7F274A60u: goto label_7F274A60;
    case 0x7F274A64u: goto label_7F274A64;
    case 0x7F274A68u: goto label_7F274A68;
    case 0x7F274A6Cu: goto label_7F274A6C;
    case 0x7F274A70u: goto label_7F274A70;
    case 0x7F274A74u: goto label_7F274A74;
    case 0x7F274A78u: goto label_7F274A78;
    case 0x7F274A7Cu: goto label_7F274A7C;
    case 0x7F274A80u: goto label_7F274A80;
    case 0x7F274A84u: goto label_7F274A84;
    case 0x7F274A88u: goto label_7F274A88;
    case 0x7F274A8Cu: goto label_7F274A8C;
    case 0x7F274A90u: goto label_7F274A90;
    case 0x7F274A94u: goto label_7F274A94;
    case 0x7F274A98u: goto label_7F274A98;
    case 0x7F274A9Cu: goto label_7F274A9C;
    case 0x7F274AA0u: goto label_7F274AA0;
    case 0x7F274AA4u: goto label_7F274AA4;
    case 0x7F274AA8u: goto label_7F274AA8;
    case 0x7F274AACu: goto label_7F274AAC;
    case 0x7F274AB0u: goto label_7F274AB0;
    case 0x7F274AB4u: goto label_7F274AB4;
    case 0x7F274AB8u: goto label_7F274AB8;
    case 0x7F274ABCu: goto label_7F274ABC;
    case 0x7F274AC0u: goto label_7F274AC0;
    case 0x7F274AC4u: goto label_7F274AC4;
    case 0x7F274AC8u: goto label_7F274AC8;
    case 0x7F274ACCu: goto label_7F274ACC;
    case 0x7F274AD0u: goto label_7F274AD0;
    case 0x7F274AD4u: goto label_7F274AD4;
    case 0x7F274AD8u: goto label_7F274AD8;
    case 0x7F274ADCu: goto label_7F274ADC;
    case 0x7F274AE0u: goto label_7F274AE0;
    case 0x7F274AE4u: goto label_7F274AE4;
    case 0x7F274AE8u: goto label_7F274AE8;
    case 0x7F274AECu: goto label_7F274AEC;
    case 0x7F274AF0u: goto label_7F274AF0;
    case 0x7F274AF4u: goto label_7F274AF4;
    case 0x7F274AF8u: goto label_7F274AF8;
    case 0x7F274AFCu: goto label_7F274AFC;
    case 0x7F274B00u: goto label_7F274B00;
    case 0x7F274B04u: goto label_7F274B04;
    case 0x7F274B08u: goto label_7F274B08;
    case 0x7F274B0Cu: goto label_7F274B0C;
    case 0x7F274B10u: goto label_7F274B10;
    case 0x7F274B14u: goto label_7F274B14;
    case 0x7F274B18u: goto label_7F274B18;
    case 0x7F274B1Cu: goto label_7F274B1C;
    case 0x7F274B20u: goto label_7F274B20;
    case 0x7F274B24u: goto label_7F274B24;
    case 0x7F274B28u: goto label_7F274B28;
    case 0x7F274B2Cu: goto label_7F274B2C;
    case 0x7F274B30u: goto label_7F274B30;
    case 0x7F274B34u: goto label_7F274B34;
    case 0x7F274B38u: goto label_7F274B38;
    case 0x7F274B3Cu: goto label_7F274B3C;
    case 0x7F274B40u: goto label_7F274B40;
    case 0x7F274B44u: goto label_7F274B44;
    case 0x7F274B48u: goto label_7F274B48;
    case 0x7F274B4Cu: goto label_7F274B4C;
    case 0x7F274B50u: goto label_7F274B50;
    case 0x7F274B54u: goto label_7F274B54;
    case 0x7F274B58u: goto label_7F274B58;
    case 0x7F274B5Cu: goto label_7F274B5C;
    case 0x7F274B60u: goto label_7F274B60;
    case 0x7F274B64u: goto label_7F274B64;
    case 0x7F274B68u: goto label_7F274B68;
    case 0x7F274B6Cu: goto label_7F274B6C;
    case 0x7F274B70u: goto label_7F274B70;
    case 0x7F274B74u: goto label_7F274B74;
    case 0x7F274B78u: goto label_7F274B78;
    case 0x7F274B7Cu: goto label_7F274B7C;
    case 0x7F274B80u: goto label_7F274B80;
    case 0x7F274B84u: goto label_7F274B84;
    case 0x7F274B88u: goto label_7F274B88;
    case 0x7F274B8Cu: goto label_7F274B8C;
    case 0x7F274B90u: goto label_7F274B90;
    case 0x7F274B94u: goto label_7F274B94;
    case 0x7F274B98u: goto label_7F274B98;
    case 0x7F274B9Cu: goto label_7F274B9C;
    case 0x7F274BA0u: goto label_7F274BA0;
    case 0x7F274BA4u: goto label_7F274BA4;
    case 0x7F274BA8u: goto label_7F274BA8;
    case 0x7F274BACu: goto label_7F274BAC;
    case 0x7F274BB0u: goto label_7F274BB0;
    case 0x7F274BB4u: goto label_7F274BB4;
    case 0x7F274BB8u: goto label_7F274BB8;
    case 0x7F274BBCu: goto label_7F274BBC;
    case 0x7F274BC0u: goto label_7F274BC0;
    case 0x7F274BC4u: goto label_7F274BC4;
    case 0x7F274BC8u: goto label_7F274BC8;
    case 0x7F274BCCu: goto label_7F274BCC;
    case 0x7F274BD0u: goto label_7F274BD0;
    case 0x7F274BD4u: goto label_7F274BD4;
    case 0x7F274BD8u: goto label_7F274BD8;
    case 0x7F274BDCu: goto label_7F274BDC;
    case 0x7F274BE0u: goto label_7F274BE0;
    case 0x7F274BE4u: goto label_7F274BE4;
    case 0x7F274BE8u: goto label_7F274BE8;
    case 0x7F274BECu: goto label_7F274BEC;
    case 0x7F274BF0u: goto label_7F274BF0;
    case 0x7F274BF4u: goto label_7F274BF4;
    case 0x7F274BF8u: goto label_7F274BF8;
    case 0x7F274BFCu: goto label_7F274BFC;
    case 0x7F274C00u: goto label_7F274C00;
    case 0x7F274C04u: goto label_7F274C04;
    case 0x7F274C08u: goto label_7F274C08;
    case 0x7F274C0Cu: goto label_7F274C0C;
    case 0x7F274C10u: goto label_7F274C10;
    case 0x7F274C14u: goto label_7F274C14;
    case 0x7F274C18u: goto label_7F274C18;
    case 0x7F274C1Cu: goto label_7F274C1C;
    case 0x7F274C20u: goto label_7F274C20;
    case 0x7F274C24u: goto label_7F274C24;
    case 0x7F274C28u: goto label_7F274C28;
    case 0x7F274C2Cu: goto label_7F274C2C;
    case 0x7F274C30u: goto label_7F274C30;
    case 0x7F274C34u: goto label_7F274C34;
    case 0x7F274C38u: goto label_7F274C38;
    case 0x7F274C3Cu: goto label_7F274C3C;
    case 0x7F274C40u: goto label_7F274C40;
    case 0x7F274C44u: goto label_7F274C44;
    case 0x7F274C48u: goto label_7F274C48;
    case 0x7F274C4Cu: goto label_7F274C4C;
    case 0x7F274C50u: goto label_7F274C50;
    case 0x7F274C54u: goto label_7F274C54;
    case 0x7F274C58u: goto label_7F274C58;
    case 0x7F274C5Cu: goto label_7F274C5C;
    case 0x7F274C60u: goto label_7F274C60;
    case 0x7F274C64u: goto label_7F274C64;
    case 0x7F274C68u: goto label_7F274C68;
    case 0x7F274C6Cu: goto label_7F274C6C;
    case 0x7F274C70u: goto label_7F274C70;
    case 0x7F274C74u: goto label_7F274C74;
    case 0x7F274C78u: goto label_7F274C78;
    case 0x7F274C7Cu: goto label_7F274C7C;
    case 0x7F274C80u: goto label_7F274C80;
    case 0x7F274C84u: goto label_7F274C84;
    case 0x7F274C88u: goto label_7F274C88;
    case 0x7F274C8Cu: goto label_7F274C8C;
    case 0x7F274C90u: goto label_7F274C90;
    case 0x7F274C94u: goto label_7F274C94;
    case 0x7F274C98u: goto label_7F274C98;
    case 0x7F274C9Cu: goto label_7F274C9C;
    case 0x7F274CA0u: goto label_7F274CA0;
    case 0x7F274CA4u: goto label_7F274CA4;
    case 0x7F274CA8u: goto label_7F274CA8;
    case 0x7F274CACu: goto label_7F274CAC;
    case 0x7F274CB0u: goto label_7F274CB0;
    case 0x7F274CB4u: goto label_7F274CB4;
    case 0x7F274CB8u: goto label_7F274CB8;
    case 0x7F274CBCu: goto label_7F274CBC;
    case 0x7F274CC0u: goto label_7F274CC0;
    case 0x7F274CC4u: goto label_7F274CC4;
    case 0x7F274CC8u: goto label_7F274CC8;
    case 0x7F274CCCu: goto label_7F274CCC;
    case 0x7F274CD0u: goto label_7F274CD0;
    case 0x7F274CD4u: goto label_7F274CD4;
    case 0x7F274CD8u: goto label_7F274CD8;
    case 0x7F274CDCu: goto label_7F274CDC;
    case 0x7F274CE0u: goto label_7F274CE0;
    case 0x7F274CE4u: goto label_7F274CE4;
    case 0x7F274CE8u: goto label_7F274CE8;
    case 0x7F274CECu: goto label_7F274CEC;
    case 0x7F274CF0u: goto label_7F274CF0;
    case 0x7F274CF4u: goto label_7F274CF4;
    case 0x7F274CF8u: goto label_7F274CF8;
    case 0x7F274CFCu: goto label_7F274CFC;
    case 0x7F274D00u: goto label_7F274D00;
    case 0x7F274D04u: goto label_7F274D04;
    case 0x7F274D08u: goto label_7F274D08;
    case 0x7F274D0Cu: goto label_7F274D0C;
    case 0x7F274D10u: goto label_7F274D10;
    case 0x7F274D14u: goto label_7F274D14;
    case 0x7F274D18u: goto label_7F274D18;
    case 0x7F274D1Cu: goto label_7F274D1C;
    case 0x7F274D20u: goto label_7F274D20;
    case 0x7F274D24u: goto label_7F274D24;
    case 0x7F274D28u: goto label_7F274D28;
    case 0x7F274D2Cu: goto label_7F274D2C;
    case 0x7F274D30u: goto label_7F274D30;
    case 0x7F274D34u: goto label_7F274D34;
    case 0x7F274D38u: goto label_7F274D38;
    case 0x7F274D3Cu: goto label_7F274D3C;
    case 0x7F274D40u: goto label_7F274D40;
    case 0x7F274D44u: goto label_7F274D44;
    case 0x7F274D48u: goto label_7F274D48;
    case 0x7F274D4Cu: goto label_7F274D4C;
    case 0x7F274D50u: goto label_7F274D50;
    case 0x7F274D54u: goto label_7F274D54;
    case 0x7F274D58u: goto label_7F274D58;
    case 0x7F274D5Cu: goto label_7F274D5C;
    case 0x7F274D60u: goto label_7F274D60;
    case 0x7F274D64u: goto label_7F274D64;
    case 0x7F274D68u: goto label_7F274D68;
    case 0x7F274D6Cu: goto label_7F274D6C;
    case 0x7F274D70u: goto label_7F274D70;
    case 0x7F274D74u: goto label_7F274D74;
    case 0x7F274D78u: goto label_7F274D78;
    case 0x7F274D7Cu: goto label_7F274D7C;
    case 0x7F274D80u: goto label_7F274D80;
    case 0x7F274D84u: goto label_7F274D84;
    case 0x7F274D88u: goto label_7F274D88;
    case 0x7F274D8Cu: goto label_7F274D8C;
    case 0x7F274D90u: goto label_7F274D90;
    case 0x7F274D94u: goto label_7F274D94;
    case 0x7F274D98u: goto label_7F274D98;
    case 0x7F274D9Cu: goto label_7F274D9C;
    case 0x7F274DA0u: goto label_7F274DA0;
    case 0x7F274DA4u: goto label_7F274DA4;
    case 0x7F274DA8u: goto label_7F274DA8;
    case 0x7F274DACu: goto label_7F274DAC;
    case 0x7F274DB0u: goto label_7F274DB0;
    case 0x7F274DB4u: goto label_7F274DB4;
    case 0x7F274DB8u: goto label_7F274DB8;
    case 0x7F274DBCu: goto label_7F274DBC;
    case 0x7F274DC0u: goto label_7F274DC0;
    case 0x7F274DC4u: goto label_7F274DC4;
    case 0x7F274DC8u: goto label_7F274DC8;
    case 0x7F274DCCu: goto label_7F274DCC;
    case 0x7F274DD0u: goto label_7F274DD0;
    case 0x7F274DD4u: goto label_7F274DD4;
    case 0x7F274DD8u: goto label_7F274DD8;
    case 0x7F274DDCu: goto label_7F274DDC;
    case 0x7F274DE0u: goto label_7F274DE0;
    case 0x7F274DE4u: goto label_7F274DE4;
    case 0x7F274DE8u: goto label_7F274DE8;
    case 0x7F274DECu: goto label_7F274DEC;
    case 0x7F274DF0u: goto label_7F274DF0;
    case 0x7F274DF4u: goto label_7F274DF4;
    case 0x7F274DF8u: goto label_7F274DF8;
    case 0x7F274DFCu: goto label_7F274DFC;
    case 0x7F274E00u: goto label_7F274E00;
    case 0x7F274E04u: goto label_7F274E04;
    case 0x7F274E08u: goto label_7F274E08;
    case 0x7F274E0Cu: goto label_7F274E0C;
    case 0x7F274E10u: goto label_7F274E10;
    case 0x7F274E14u: goto label_7F274E14;
    case 0x7F274E18u: goto label_7F274E18;
    case 0x7F274E1Cu: goto label_7F274E1C;
    case 0x7F274E20u: goto label_7F274E20;
    case 0x7F274E24u: goto label_7F274E24;
    case 0x7F274E28u: goto label_7F274E28;
    case 0x7F274E2Cu: goto label_7F274E2C;
    case 0x7F274E30u: goto label_7F274E30;
    case 0x7F274E34u: goto label_7F274E34;
    case 0x7F274E38u: goto label_7F274E38;
    case 0x7F274E3Cu: goto label_7F274E3C;
    case 0x7F274E40u: goto label_7F274E40;
    case 0x7F274E44u: goto label_7F274E44;
    case 0x7F274E48u: goto label_7F274E48;
    case 0x7F274E4Cu: goto label_7F274E4C;
    case 0x7F274E50u: goto label_7F274E50;
    case 0x7F274E54u: goto label_7F274E54;
    case 0x7F274E58u: goto label_7F274E58;
    case 0x7F274E5Cu: goto label_7F274E5C;
    case 0x7F274E60u: goto label_7F274E60;
    case 0x7F274E64u: goto label_7F274E64;
    case 0x7F274E68u: goto label_7F274E68;
    case 0x7F274E6Cu: goto label_7F274E6C;
    case 0x7F274E70u: goto label_7F274E70;
    case 0x7F274E74u: goto label_7F274E74;
    case 0x7F274E78u: goto label_7F274E78;
    case 0x7F274E7Cu: goto label_7F274E7C;
    case 0x7F274E80u: goto label_7F274E80;
    case 0x7F274E84u: goto label_7F274E84;
    case 0x7F274E88u: goto label_7F274E88;
    case 0x7F274E8Cu: goto label_7F274E8C;
    case 0x7F274E90u: goto label_7F274E90;
    case 0x7F274E94u: goto label_7F274E94;
    case 0x7F274E98u: goto label_7F274E98;
    case 0x7F274E9Cu: goto label_7F274E9C;
    case 0x7F274EA0u: goto label_7F274EA0;
    case 0x7F274EA4u: goto label_7F274EA4;
    case 0x7F274EA8u: goto label_7F274EA8;
    case 0x7F274EACu: goto label_7F274EAC;
    case 0x7F274EB0u: goto label_7F274EB0;
    case 0x7F274EB4u: goto label_7F274EB4;
    case 0x7F274EB8u: goto label_7F274EB8;
    case 0x7F274EBCu: goto label_7F274EBC;
    case 0x7F274EC0u: goto label_7F274EC0;
    case 0x7F274EC4u: goto label_7F274EC4;
    case 0x7F274EC8u: goto label_7F274EC8;
    case 0x7F274ECCu: goto label_7F274ECC;
    case 0x7F274ED0u: goto label_7F274ED0;
    case 0x7F274ED4u: goto label_7F274ED4;
    case 0x7F274ED8u: goto label_7F274ED8;
    case 0x7F274EDCu: goto label_7F274EDC;
    case 0x7F274EE0u: goto label_7F274EE0;
    case 0x7F274EE4u: goto label_7F274EE4;
    case 0x7F274EE8u: goto label_7F274EE8;
    case 0x7F274EECu: goto label_7F274EEC;
    case 0x7F274EF0u: goto label_7F274EF0;
    case 0x7F274EF4u: goto label_7F274EF4;
    case 0x7F274EF8u: goto label_7F274EF8;
    case 0x7F274EFCu: goto label_7F274EFC;
    case 0x7F274F00u: goto label_7F274F00;
    case 0x7F274F04u: goto label_7F274F04;
    case 0x7F274F08u: goto label_7F274F08;
    case 0x7F274F0Cu: goto label_7F274F0C;
    case 0x7F274F10u: goto label_7F274F10;
    case 0x7F274F14u: goto label_7F274F14;
    case 0x7F274F18u: goto label_7F274F18;
    case 0x7F274F1Cu: goto label_7F274F1C;
    case 0x7F274F20u: goto label_7F274F20;
    case 0x7F274F24u: goto label_7F274F24;
    case 0x7F274F28u: goto label_7F274F28;
    case 0x7F274F2Cu: goto label_7F274F2C;
    case 0x7F274F30u: goto label_7F274F30;
    case 0x7F274F34u: goto label_7F274F34;
    case 0x7F274F38u: goto label_7F274F38;
    case 0x7F274F3Cu: goto label_7F274F3C;
    case 0x7F274F40u: goto label_7F274F40;
    case 0x7F274F44u: goto label_7F274F44;
    case 0x7F274F48u: goto label_7F274F48;
    case 0x7F274F4Cu: goto label_7F274F4C;
    case 0x7F274F50u: goto label_7F274F50;
    case 0x7F274F54u: goto label_7F274F54;
    case 0x7F274F58u: goto label_7F274F58;
    case 0x7F274F5Cu: goto label_7F274F5C;
    case 0x7F274F60u: goto label_7F274F60;
    case 0x7F274F64u: goto label_7F274F64;
    case 0x7F274F68u: goto label_7F274F68;
    case 0x7F274F6Cu: goto label_7F274F6C;
    case 0x7F274F70u: goto label_7F274F70;
    case 0x7F274F74u: goto label_7F274F74;
    case 0x7F274F78u: goto label_7F274F78;
    case 0x7F274F7Cu: goto label_7F274F7C;
    case 0x7F274F80u: goto label_7F274F80;
    case 0x7F274F84u: goto label_7F274F84;
    case 0x7F274F88u: goto label_7F274F88;
    case 0x7F274F8Cu: goto label_7F274F8C;
    case 0x7F274F90u: goto label_7F274F90;
    case 0x7F274F94u: goto label_7F274F94;
    case 0x7F274F98u: goto label_7F274F98;
    case 0x7F274F9Cu: goto label_7F274F9C;
    case 0x7F274FA0u: goto label_7F274FA0;
    case 0x7F274FA4u: goto label_7F274FA4;
    case 0x7F274FA8u: goto label_7F274FA8;
    case 0x7F274FACu: goto label_7F274FAC;
    case 0x7F274FB0u: goto label_7F274FB0;
    case 0x7F274FB4u: goto label_7F274FB4;
    case 0x7F274FB8u: goto label_7F274FB8;
    case 0x7F274FBCu: goto label_7F274FBC;
    case 0x7F274FC0u: goto label_7F274FC0;
    case 0x7F274FC4u: goto label_7F274FC4;
    case 0x7F274FC8u: goto label_7F274FC8;
    case 0x7F274FCCu: goto label_7F274FCC;
    case 0x7F274FD0u: goto label_7F274FD0;
    case 0x7F274FD4u: goto label_7F274FD4;
    case 0x7F274FD8u: goto label_7F274FD8;
    case 0x7F274FDCu: goto label_7F274FDC;
    case 0x7F274FE0u: goto label_7F274FE0;
    case 0x7F274FE4u: goto label_7F274FE4;
    case 0x7F274FE8u: goto label_7F274FE8;
    case 0x7F274FECu: goto label_7F274FEC;
    case 0x7F274FF0u: goto label_7F274FF0;
    case 0x7F274FF4u: goto label_7F274FF4;
    case 0x7F274FF8u: goto label_7F274FF8;
    case 0x7F274FFCu: goto label_7F274FFC;
    case 0x7F275000u: goto label_7F275000;
    case 0x7F275004u: goto label_7F275004;
    case 0x7F275008u: goto label_7F275008;
    case 0x7F27500Cu: goto label_7F27500C;
    case 0x7F275010u: goto label_7F275010;
    case 0x7F275014u: goto label_7F275014;
    case 0x7F275018u: goto label_7F275018;
    case 0x7F27501Cu: goto label_7F27501C;
    case 0x7F275020u: goto label_7F275020;
    case 0x7F275024u: goto label_7F275024;
    case 0x7F275028u: goto label_7F275028;
    case 0x7F27502Cu: goto label_7F27502C;
    case 0x7F275030u: goto label_7F275030;
    case 0x7F275034u: goto label_7F275034;
    case 0x7F275038u: goto label_7F275038;
    case 0x7F27503Cu: goto label_7F27503C;
    case 0x7F275040u: goto label_7F275040;
    case 0x7F275044u: goto label_7F275044;
    case 0x7F275048u: goto label_7F275048;
    case 0x7F27504Cu: goto label_7F27504C;
    case 0x7F275050u: goto label_7F275050;
    case 0x7F275054u: goto label_7F275054;
    case 0x7F275058u: goto label_7F275058;
    case 0x7F27505Cu: goto label_7F27505C;
    case 0x7F275060u: goto label_7F275060;
    case 0x7F275064u: goto label_7F275064;
    case 0x7F275068u: goto label_7F275068;
    case 0x7F27506Cu: goto label_7F27506C;
    case 0x7F275070u: goto label_7F275070;
    case 0x7F275074u: goto label_7F275074;
    case 0x7F275078u: goto label_7F275078;
    case 0x7F27507Cu: goto label_7F27507C;
    case 0x7F275080u: goto label_7F275080;
    case 0x7F275084u: goto label_7F275084;
    case 0x7F275088u: goto label_7F275088;
    case 0x7F27508Cu: goto label_7F27508C;
    case 0x7F275090u: goto label_7F275090;
    case 0x7F275094u: goto label_7F275094;
    case 0x7F275098u: goto label_7F275098;
    case 0x7F27509Cu: goto label_7F27509C;
    case 0x7F2750A0u: goto label_7F2750A0;
    case 0x7F2750A4u: goto label_7F2750A4;
    case 0x7F2750A8u: goto label_7F2750A8;
    case 0x7F2750ACu: goto label_7F2750AC;
    case 0x7F2750B0u: goto label_7F2750B0;
    case 0x7F2750B4u: goto label_7F2750B4;
    case 0x7F2750B8u: goto label_7F2750B8;
    case 0x7F2750BCu: goto label_7F2750BC;
    case 0x7F2750C0u: goto label_7F2750C0;
    case 0x7F2750C4u: goto label_7F2750C4;
    case 0x7F2750C8u: goto label_7F2750C8;
    case 0x7F2750CCu: goto label_7F2750CC;
    case 0x7F2750D0u: goto label_7F2750D0;
    case 0x7F2750D4u: goto label_7F2750D4;
    case 0x7F2750D8u: goto label_7F2750D8;
    case 0x7F2750DCu: goto label_7F2750DC;
    case 0x7F2750E0u: goto label_7F2750E0;
    case 0x7F2750E4u: goto label_7F2750E4;
    case 0x7F2750E8u: goto label_7F2750E8;
    case 0x7F2750ECu: goto label_7F2750EC;
    case 0x7F2750F0u: goto label_7F2750F0;
    case 0x7F2750F4u: goto label_7F2750F4;
    case 0x7F2750F8u: goto label_7F2750F8;
    case 0x7F2750FCu: goto label_7F2750FC;
    case 0x7F275100u: goto label_7F275100;
    case 0x7F275104u: goto label_7F275104;
    case 0x7F275108u: goto label_7F275108;
    case 0x7F27510Cu: goto label_7F27510C;
    case 0x7F275110u: goto label_7F275110;
    case 0x7F275114u: goto label_7F275114;
    case 0x7F275118u: goto label_7F275118;
    case 0x7F27511Cu: goto label_7F27511C;
    case 0x7F275120u: goto label_7F275120;
    case 0x7F275124u: goto label_7F275124;
    case 0x7F275128u: goto label_7F275128;
    case 0x7F27512Cu: goto label_7F27512C;
    case 0x7F275130u: goto label_7F275130;
    case 0x7F275134u: goto label_7F275134;
    case 0x7F275138u: goto label_7F275138;
    case 0x7F27513Cu: goto label_7F27513C;
    case 0x7F275140u: goto label_7F275140;
    case 0x7F275144u: goto label_7F275144;
    case 0x7F275148u: goto label_7F275148;
    case 0x7F27514Cu: goto label_7F27514C;
    case 0x7F275150u: goto label_7F275150;
    case 0x7F275154u: goto label_7F275154;
    case 0x7F275158u: goto label_7F275158;
    case 0x7F27515Cu: goto label_7F27515C;
    case 0x7F275160u: goto label_7F275160;
    case 0x7F275164u: goto label_7F275164;
    case 0x7F275168u: goto label_7F275168;
    case 0x7F27516Cu: goto label_7F27516C;
    case 0x7F275170u: goto label_7F275170;
    case 0x7F275174u: goto label_7F275174;
    case 0x7F275178u: goto label_7F275178;
    case 0x7F27517Cu: goto label_7F27517C;
    case 0x7F275180u: goto label_7F275180;
    case 0x7F275184u: goto label_7F275184;
    case 0x7F275188u: goto label_7F275188;
    case 0x7F27518Cu: goto label_7F27518C;
    case 0x7F275190u: goto label_7F275190;
    case 0x7F275194u: goto label_7F275194;
    case 0x7F275198u: goto label_7F275198;
    case 0x7F27519Cu: goto label_7F27519C;
    case 0x7F2751A0u: goto label_7F2751A0;
    case 0x7F2751A4u: goto label_7F2751A4;
    case 0x7F2751A8u: goto label_7F2751A8;
    case 0x7F2751ACu: goto label_7F2751AC;
    case 0x7F2751B0u: goto label_7F2751B0;
    case 0x7F2751B4u: goto label_7F2751B4;
    case 0x7F2751B8u: goto label_7F2751B8;
    case 0x7F2751BCu: goto label_7F2751BC;
    case 0x7F2751C0u: goto label_7F2751C0;
    case 0x7F2751C4u: goto label_7F2751C4;
    case 0x7F2751C8u: goto label_7F2751C8;
    case 0x7F2751CCu: goto label_7F2751CC;
    case 0x7F2751D0u: goto label_7F2751D0;
    case 0x7F2751D4u: goto label_7F2751D4;
    case 0x7F2751D8u: goto label_7F2751D8;
    case 0x7F2751DCu: goto label_7F2751DC;
    case 0x7F2751E0u: goto label_7F2751E0;
    case 0x7F2751E4u: goto label_7F2751E4;
    case 0x7F2751E8u: goto label_7F2751E8;
    case 0x7F2751ECu: goto label_7F2751EC;
    case 0x7F2751F0u: goto label_7F2751F0;
    case 0x7F2751F4u: goto label_7F2751F4;
    case 0x7F2751F8u: goto label_7F2751F8;
    case 0x7F2751FCu: goto label_7F2751FC;
    case 0x7F275200u: goto label_7F275200;
    case 0x7F275204u: goto label_7F275204;
    case 0x7F275208u: goto label_7F275208;
    case 0x7F27520Cu: goto label_7F27520C;
    case 0x7F275210u: goto label_7F275210;
    case 0x7F275214u: goto label_7F275214;
    case 0x7F275218u: goto label_7F275218;
    case 0x7F27521Cu: goto label_7F27521C;
    case 0x7F275220u: goto label_7F275220;
    case 0x7F275224u: goto label_7F275224;
    case 0x7F275228u: goto label_7F275228;
    case 0x7F27522Cu: goto label_7F27522C;
    case 0x7F275230u: goto label_7F275230;
    case 0x7F275234u: goto label_7F275234;
    case 0x7F275238u: goto label_7F275238;
    case 0x7F27523Cu: goto label_7F27523C;
    case 0x7F275240u: goto label_7F275240;
    case 0x7F275244u: goto label_7F275244;
    case 0x7F275248u: goto label_7F275248;
    case 0x7F27524Cu: goto label_7F27524C;
    case 0x7F275250u: goto label_7F275250;
    case 0x7F275254u: goto label_7F275254;
    case 0x7F275258u: goto label_7F275258;
    case 0x7F27525Cu: goto label_7F27525C;
    case 0x7F275260u: goto label_7F275260;
    case 0x7F275264u: goto label_7F275264;
    case 0x7F275268u: goto label_7F275268;
    case 0x7F27526Cu: goto label_7F27526C;
    case 0x7F275270u: goto label_7F275270;
    case 0x7F275274u: goto label_7F275274;
    case 0x7F275278u: goto label_7F275278;
    case 0x7F27527Cu: goto label_7F27527C;
    case 0x7F275280u: goto label_7F275280;
    case 0x7F275284u: goto label_7F275284;
    case 0x7F275288u: goto label_7F275288;
    case 0x7F27528Cu: goto label_7F27528C;
    case 0x7F275290u: goto label_7F275290;
    case 0x7F275294u: goto label_7F275294;
    case 0x7F275298u: goto label_7F275298;
    case 0x7F27529Cu: goto label_7F27529C;
    case 0x7F2752A0u: goto label_7F2752A0;
    case 0x7F2752A4u: goto label_7F2752A4;
    case 0x7F2752A8u: goto label_7F2752A8;
    case 0x7F2752ACu: goto label_7F2752AC;
    case 0x7F2752B0u: goto label_7F2752B0;
    case 0x7F2752B4u: goto label_7F2752B4;
    case 0x7F2752B8u: goto label_7F2752B8;
    case 0x7F2752BCu: goto label_7F2752BC;
    case 0x7F2752C0u: goto label_7F2752C0;
    case 0x7F2752C4u: goto label_7F2752C4;
    case 0x7F2752C8u: goto label_7F2752C8;
    case 0x7F2752CCu: goto label_7F2752CC;
    case 0x7F2752D0u: goto label_7F2752D0;
    case 0x7F2752D4u: goto label_7F2752D4;
    case 0x7F2752D8u: goto label_7F2752D8;
    case 0x7F2752DCu: goto label_7F2752DC;
    case 0x7F2752E0u: goto label_7F2752E0;
    case 0x7F2752E4u: goto label_7F2752E4;
    case 0x7F2752E8u: goto label_7F2752E8;
    case 0x7F2752ECu: goto label_7F2752EC;
    case 0x7F2752F0u: goto label_7F2752F0;
    case 0x7F2752F4u: goto label_7F2752F4;
    case 0x7F2752F8u: goto label_7F2752F8;
    case 0x7F2752FCu: goto label_7F2752FC;
    case 0x7F275300u: goto label_7F275300;
    case 0x7F275304u: goto label_7F275304;
    case 0x7F275308u: goto label_7F275308;
    case 0x7F27530Cu: goto label_7F27530C;
    case 0x7F275310u: goto label_7F275310;
    case 0x7F275314u: goto label_7F275314;
    case 0x7F275318u: goto label_7F275318;
    case 0x7F27531Cu: goto label_7F27531C;
    case 0x7F275320u: goto label_7F275320;
    case 0x7F275324u: goto label_7F275324;
    case 0x7F275328u: goto label_7F275328;
    case 0x7F27532Cu: goto label_7F27532C;
    case 0x7F275330u: goto label_7F275330;
    case 0x7F275334u: goto label_7F275334;
    case 0x7F275338u: goto label_7F275338;
    case 0x7F27533Cu: goto label_7F27533C;
    case 0x7F275340u: goto label_7F275340;
    case 0x7F275344u: goto label_7F275344;
    case 0x7F275348u: goto label_7F275348;
    case 0x7F27534Cu: goto label_7F27534C;
    case 0x7F275350u: goto label_7F275350;
    case 0x7F275354u: goto label_7F275354;
    case 0x7F275358u: goto label_7F275358;
    case 0x7F27535Cu: goto label_7F27535C;
    case 0x7F275360u: goto label_7F275360;
    case 0x7F275364u: goto label_7F275364;
    case 0x7F275368u: goto label_7F275368;
    case 0x7F27536Cu: goto label_7F27536C;
    case 0x7F275370u: goto label_7F275370;
    case 0x7F275374u: goto label_7F275374;
    case 0x7F275378u: goto label_7F275378;
    case 0x7F27537Cu: goto label_7F27537C;
    case 0x7F275380u: goto label_7F275380;
    case 0x7F275384u: goto label_7F275384;
    case 0x7F275388u: goto label_7F275388;
    case 0x7F27538Cu: goto label_7F27538C;
    case 0x7F275390u: goto label_7F275390;
    case 0x7F275394u: goto label_7F275394;
    case 0x7F275398u: goto label_7F275398;
    case 0x7F27539Cu: goto label_7F27539C;
    case 0x7F2753A0u: goto label_7F2753A0;
    case 0x7F2753A4u: goto label_7F2753A4;
    case 0x7F2753A8u: goto label_7F2753A8;
    case 0x7F2753ACu: goto label_7F2753AC;
    case 0x7F2753B0u: goto label_7F2753B0;
    case 0x7F2753B4u: goto label_7F2753B4;
    case 0x7F2753B8u: goto label_7F2753B8;
    case 0x7F2753BCu: goto label_7F2753BC;
    case 0x7F2753C0u: goto label_7F2753C0;
    case 0x7F2753C4u: goto label_7F2753C4;
    case 0x7F2753C8u: goto label_7F2753C8;
    case 0x7F2753CCu: goto label_7F2753CC;
    case 0x7F2753D0u: goto label_7F2753D0;
    case 0x7F2753D4u: goto label_7F2753D4;
    case 0x7F2753D8u: goto label_7F2753D8;
    case 0x7F2753DCu: goto label_7F2753DC;
    case 0x7F2753E0u: goto label_7F2753E0;
    case 0x7F2753E4u: goto label_7F2753E4;
    case 0x7F2753E8u: goto label_7F2753E8;
    case 0x7F2753ECu: goto label_7F2753EC;
    case 0x7F2753F0u: goto label_7F2753F0;
    case 0x7F2753F4u: goto label_7F2753F4;
    case 0x7F2753F8u: goto label_7F2753F8;
    case 0x7F2753FCu: goto label_7F2753FC;
    case 0x7F275400u: goto label_7F275400;
    case 0x7F275404u: goto label_7F275404;
    case 0x7F275408u: goto label_7F275408;
    case 0x7F27540Cu: goto label_7F27540C;
    case 0x7F275410u: goto label_7F275410;
    case 0x7F275414u: goto label_7F275414;
    case 0x7F275418u: goto label_7F275418;
    case 0x7F27541Cu: goto label_7F27541C;
    case 0x7F275420u: goto label_7F275420;
    case 0x7F275424u: goto label_7F275424;
    case 0x7F275428u: goto label_7F275428;
    case 0x7F27542Cu: goto label_7F27542C;
    case 0x7F275430u: goto label_7F275430;
    case 0x7F275434u: goto label_7F275434;
    case 0x7F275438u: goto label_7F275438;
    case 0x7F27543Cu: goto label_7F27543C;
    case 0x7F275440u: goto label_7F275440;
    case 0x7F275444u: goto label_7F275444;
    case 0x7F275448u: goto label_7F275448;
    case 0x7F27544Cu: goto label_7F27544C;
    case 0x7F275450u: goto label_7F275450;
    case 0x7F275454u: goto label_7F275454;
    case 0x7F275458u: goto label_7F275458;
    case 0x7F27545Cu: goto label_7F27545C;
    case 0x7F275460u: goto label_7F275460;
    case 0x7F275464u: goto label_7F275464;
    case 0x7F275468u: goto label_7F275468;
    case 0x7F27546Cu: goto label_7F27546C;
    case 0x7F275470u: goto label_7F275470;
    case 0x7F275474u: goto label_7F275474;
    case 0x7F275478u: goto label_7F275478;
    case 0x7F27547Cu: goto label_7F27547C;
    case 0x7F275480u: goto label_7F275480;
    case 0x7F275484u: goto label_7F275484;
    case 0x7F275488u: goto label_7F275488;
    case 0x7F27548Cu: goto label_7F27548C;
    case 0x7F275490u: goto label_7F275490;
    case 0x7F275494u: goto label_7F275494;
    case 0x7F275498u: goto label_7F275498;
    case 0x7F27549Cu: goto label_7F27549C;
    case 0x7F2754A0u: goto label_7F2754A0;
    case 0x7F2754A4u: goto label_7F2754A4;
    case 0x7F2754A8u: goto label_7F2754A8;
    case 0x7F2754ACu: goto label_7F2754AC;
    case 0x7F2754B0u: goto label_7F2754B0;
    case 0x7F2754B4u: goto label_7F2754B4;
    case 0x7F2754B8u: goto label_7F2754B8;
    case 0x7F2754BCu: goto label_7F2754BC;
    case 0x7F2754C0u: goto label_7F2754C0;
    case 0x7F2754C4u: goto label_7F2754C4;
    case 0x7F2754C8u: goto label_7F2754C8;
    case 0x7F2754CCu: goto label_7F2754CC;
    case 0x7F2754D0u: goto label_7F2754D0;
    case 0x7F2754D4u: goto label_7F2754D4;
    case 0x7F2754D8u: goto label_7F2754D8;
    case 0x7F2754DCu: goto label_7F2754DC;
    case 0x7F2754E0u: goto label_7F2754E0;
    case 0x7F2754E4u: goto label_7F2754E4;
    case 0x7F2754E8u: goto label_7F2754E8;
    case 0x7F2754ECu: goto label_7F2754EC;
    case 0x7F2754F0u: goto label_7F2754F0;
    case 0x7F2754F4u: goto label_7F2754F4;
    case 0x7F2754F8u: goto label_7F2754F8;
    case 0x7F2754FCu: goto label_7F2754FC;
    case 0x7F275500u: goto label_7F275500;
    case 0x7F275504u: goto label_7F275504;
    case 0x7F275508u: goto label_7F275508;
    case 0x7F27550Cu: goto label_7F27550C;
    case 0x7F275510u: goto label_7F275510;
    case 0x7F275514u: goto label_7F275514;
    case 0x7F275518u: goto label_7F275518;
    case 0x7F27551Cu: goto label_7F27551C;
    case 0x7F275520u: goto label_7F275520;
    case 0x7F275524u: goto label_7F275524;
    case 0x7F275528u: goto label_7F275528;
    case 0x7F27552Cu: goto label_7F27552C;
    case 0x7F275530u: goto label_7F275530;
    case 0x7F275534u: goto label_7F275534;
    case 0x7F275538u: goto label_7F275538;
    case 0x7F27553Cu: goto label_7F27553C;
    case 0x7F275540u: goto label_7F275540;
    case 0x7F275544u: goto label_7F275544;
    case 0x7F275548u: goto label_7F275548;
    case 0x7F27554Cu: goto label_7F27554C;
    case 0x7F275550u: goto label_7F275550;
    case 0x7F275554u: goto label_7F275554;
    case 0x7F275558u: goto label_7F275558;
    case 0x7F27555Cu: goto label_7F27555C;
    case 0x7F275560u: goto label_7F275560;
    case 0x7F275564u: goto label_7F275564;
    case 0x7F275568u: goto label_7F275568;
    case 0x7F27556Cu: goto label_7F27556C;
    case 0x7F275570u: goto label_7F275570;
    case 0x7F275574u: goto label_7F275574;
    case 0x7F275578u: goto label_7F275578;
    case 0x7F27557Cu: goto label_7F27557C;
    case 0x7F275580u: goto label_7F275580;
    case 0x7F275584u: goto label_7F275584;
    case 0x7F275588u: goto label_7F275588;
    case 0x7F27558Cu: goto label_7F27558C;
    case 0x7F275590u: goto label_7F275590;
    case 0x7F275594u: goto label_7F275594;
    case 0x7F275598u: goto label_7F275598;
    case 0x7F27559Cu: goto label_7F27559C;
    case 0x7F2755A0u: goto label_7F2755A0;
    case 0x7F2755A4u: goto label_7F2755A4;
    case 0x7F2755A8u: goto label_7F2755A8;
    case 0x7F2755ACu: goto label_7F2755AC;
    case 0x7F2755B0u: goto label_7F2755B0;
    case 0x7F2755B4u: goto label_7F2755B4;
    case 0x7F2755B8u: goto label_7F2755B8;
    case 0x7F2755BCu: goto label_7F2755BC;
    case 0x7F2755C0u: goto label_7F2755C0;
    case 0x7F2755C4u: goto label_7F2755C4;
    case 0x7F2755C8u: goto label_7F2755C8;
    case 0x7F2755CCu: goto label_7F2755CC;
    case 0x7F2755D0u: goto label_7F2755D0;
    case 0x7F2755D4u: goto label_7F2755D4;
    case 0x7F2755D8u: goto label_7F2755D8;
    case 0x7F2755DCu: goto label_7F2755DC;
    case 0x7F2755E0u: goto label_7F2755E0;
    case 0x7F2755E4u: goto label_7F2755E4;
    case 0x7F2755E8u: goto label_7F2755E8;
    case 0x7F2755ECu: goto label_7F2755EC;
    case 0x7F2755F0u: goto label_7F2755F0;
    case 0x7F2755F4u: goto label_7F2755F4;
    case 0x7F2755F8u: goto label_7F2755F8;
    case 0x7F2755FCu: goto label_7F2755FC;
    case 0x7F275600u: goto label_7F275600;
    case 0x7F275604u: goto label_7F275604;
    case 0x7F275608u: goto label_7F275608;
    case 0x7F27560Cu: goto label_7F27560C;
    case 0x7F275610u: goto label_7F275610;
    case 0x7F275614u: goto label_7F275614;
    case 0x7F275618u: goto label_7F275618;
    case 0x7F27561Cu: goto label_7F27561C;
    case 0x7F275620u: goto label_7F275620;
    case 0x7F275624u: goto label_7F275624;
    case 0x7F275628u: goto label_7F275628;
    case 0x7F27562Cu: goto label_7F27562C;
    case 0x7F275630u: goto label_7F275630;
    case 0x7F275634u: goto label_7F275634;
    case 0x7F275638u: goto label_7F275638;
    case 0x7F27563Cu: goto label_7F27563C;
    case 0x7F275640u: goto label_7F275640;
    case 0x7F275644u: goto label_7F275644;
    case 0x7F275648u: goto label_7F275648;
    case 0x7F27564Cu: goto label_7F27564C;
    case 0x7F275650u: goto label_7F275650;
    case 0x7F275654u: goto label_7F275654;
    case 0x7F275658u: goto label_7F275658;
    case 0x7F27565Cu: goto label_7F27565C;
    case 0x7F275660u: goto label_7F275660;
    case 0x7F275664u: goto label_7F275664;
    case 0x7F275668u: goto label_7F275668;
    case 0x7F27566Cu: goto label_7F27566C;
    case 0x7F275670u: goto label_7F275670;
    case 0x7F275674u: goto label_7F275674;
    case 0x7F275678u: goto label_7F275678;
    case 0x7F27567Cu: goto label_7F27567C;
    case 0x7F275680u: goto label_7F275680;
    case 0x7F275684u: goto label_7F275684;
    case 0x7F275688u: goto label_7F275688;
    case 0x7F27568Cu: goto label_7F27568C;
    case 0x7F275690u: goto label_7F275690;
    case 0x7F275694u: goto label_7F275694;
    case 0x7F275698u: goto label_7F275698;
    case 0x7F27569Cu: goto label_7F27569C;
    case 0x7F2756A0u: goto label_7F2756A0;
    case 0x7F2756A4u: goto label_7F2756A4;
    case 0x7F2756A8u: goto label_7F2756A8;
    case 0x7F2756ACu: goto label_7F2756AC;
    case 0x7F2756B0u: goto label_7F2756B0;
    case 0x7F2756B4u: goto label_7F2756B4;
    case 0x7F2756B8u: goto label_7F2756B8;
    case 0x7F2756BCu: goto label_7F2756BC;
    case 0x7F2756C0u: goto label_7F2756C0;
    case 0x7F2756C4u: goto label_7F2756C4;
    case 0x7F2756C8u: goto label_7F2756C8;
    case 0x7F2756CCu: goto label_7F2756CC;
    case 0x7F2756D0u: goto label_7F2756D0;
    case 0x7F2756D4u: goto label_7F2756D4;
    case 0x7F2756D8u: goto label_7F2756D8;
    case 0x7F2756DCu: goto label_7F2756DC;
    case 0x7F2756E0u: goto label_7F2756E0;
    case 0x7F2756E4u: goto label_7F2756E4;
    case 0x7F2756E8u: goto label_7F2756E8;
    case 0x7F2756ECu: goto label_7F2756EC;
    case 0x7F2756F0u: goto label_7F2756F0;
    case 0x7F2756F4u: goto label_7F2756F4;
    case 0x7F2756F8u: goto label_7F2756F8;
    case 0x7F2756FCu: goto label_7F2756FC;
    case 0x7F275700u: goto label_7F275700;
    case 0x7F275704u: goto label_7F275704;
    case 0x7F275708u: goto label_7F275708;
    case 0x7F27570Cu: goto label_7F27570C;
    case 0x7F275710u: goto label_7F275710;
    case 0x7F275714u: goto label_7F275714;
    case 0x7F275718u: goto label_7F275718;
    case 0x7F27571Cu: goto label_7F27571C;
    case 0x7F275720u: goto label_7F275720;
    case 0x7F275724u: goto label_7F275724;
    case 0x7F275728u: goto label_7F275728;
    case 0x7F27572Cu: goto label_7F27572C;
    case 0x7F275730u: goto label_7F275730;
    case 0x7F275734u: goto label_7F275734;
    case 0x7F275738u: goto label_7F275738;
    case 0x7F27573Cu: goto label_7F27573C;
    case 0x7F275740u: goto label_7F275740;
    case 0x7F275744u: goto label_7F275744;
    case 0x7F275748u: goto label_7F275748;
    case 0x7F27574Cu: goto label_7F27574C;
    case 0x7F275750u: goto label_7F275750;
    case 0x7F275754u: goto label_7F275754;
    case 0x7F275758u: goto label_7F275758;
    case 0x7F27575Cu: goto label_7F27575C;
    case 0x7F275760u: goto label_7F275760;
    case 0x7F275764u: goto label_7F275764;
    case 0x7F275768u: goto label_7F275768;
    case 0x7F27576Cu: goto label_7F27576C;
    case 0x7F275770u: goto label_7F275770;
    case 0x7F275774u: goto label_7F275774;
    case 0x7F275778u: goto label_7F275778;
    case 0x7F27577Cu: goto label_7F27577C;
    case 0x7F275780u: goto label_7F275780;
    case 0x7F275784u: goto label_7F275784;
    case 0x7F275788u: goto label_7F275788;
    case 0x7F27578Cu: goto label_7F27578C;
    case 0x7F275790u: goto label_7F275790;
    case 0x7F275794u: goto label_7F275794;
    case 0x7F275798u: goto label_7F275798;
    case 0x7F27579Cu: goto label_7F27579C;
    case 0x7F2757A0u: goto label_7F2757A0;
    case 0x7F2757A4u: goto label_7F2757A4;
    case 0x7F2757A8u: goto label_7F2757A8;
    case 0x7F2757ACu: goto label_7F2757AC;
    case 0x7F2757B0u: goto label_7F2757B0;
    case 0x7F2757B4u: goto label_7F2757B4;
    case 0x7F2757B8u: goto label_7F2757B8;
    case 0x7F2757BCu: goto label_7F2757BC;
    case 0x7F2757C0u: goto label_7F2757C0;
    case 0x7F2757C4u: goto label_7F2757C4;
    case 0x7F2757C8u: goto label_7F2757C8;
    case 0x7F2757CCu: goto label_7F2757CC;
    case 0x7F2757D0u: goto label_7F2757D0;
    case 0x7F2757D4u: goto label_7F2757D4;
    case 0x7F2757D8u: goto label_7F2757D8;
    case 0x7F2757DCu: goto label_7F2757DC;
    case 0x7F2757E0u: goto label_7F2757E0;
    case 0x7F2757E4u: goto label_7F2757E4;
    case 0x7F2757E8u: goto label_7F2757E8;
    case 0x7F2757ECu: goto label_7F2757EC;
    case 0x7F2757F0u: goto label_7F2757F0;
    case 0x7F2757F4u: goto label_7F2757F4;
    case 0x7F2757F8u: goto label_7F2757F8;
    case 0x7F2757FCu: goto label_7F2757FC;
    case 0x7F275800u: goto label_7F275800;
    case 0x7F275804u: goto label_7F275804;
    case 0x7F275808u: goto label_7F275808;
    case 0x7F27580Cu: goto label_7F27580C;
    case 0x7F275810u: goto label_7F275810;
    case 0x7F275814u: goto label_7F275814;
    case 0x7F275818u: goto label_7F275818;
    case 0x7F27581Cu: goto label_7F27581C;
    case 0x7F275820u: goto label_7F275820;
    case 0x7F275824u: goto label_7F275824;
    case 0x7F275828u: goto label_7F275828;
    case 0x7F27582Cu: goto label_7F27582C;
    case 0x7F275830u: goto label_7F275830;
    case 0x7F275834u: goto label_7F275834;
    case 0x7F275838u: goto label_7F275838;
    case 0x7F27583Cu: goto label_7F27583C;
    case 0x7F275840u: goto label_7F275840;
    case 0x7F275844u: goto label_7F275844;
    case 0x7F275848u: goto label_7F275848;
    case 0x7F27584Cu: goto label_7F27584C;
    case 0x7F275850u: goto label_7F275850;
    case 0x7F275854u: goto label_7F275854;
    case 0x7F275858u: goto label_7F275858;
    case 0x7F27585Cu: goto label_7F27585C;
    case 0x7F275860u: goto label_7F275860;
    case 0x7F275864u: goto label_7F275864;
    case 0x7F275868u: goto label_7F275868;
    case 0x7F27586Cu: goto label_7F27586C;
    case 0x7F275870u: goto label_7F275870;
    case 0x7F275874u: goto label_7F275874;
    case 0x7F275878u: goto label_7F275878;
    case 0x7F27587Cu: goto label_7F27587C;
    case 0x7F275880u: goto label_7F275880;
    case 0x7F275884u: goto label_7F275884;
    case 0x7F275888u: goto label_7F275888;
    case 0x7F27588Cu: goto label_7F27588C;
    case 0x7F275890u: goto label_7F275890;
    case 0x7F275894u: goto label_7F275894;
    case 0x7F275898u: goto label_7F275898;
    case 0x7F27589Cu: goto label_7F27589C;
    case 0x7F2758A0u: goto label_7F2758A0;
    case 0x7F2758A4u: goto label_7F2758A4;
    case 0x7F2758A8u: goto label_7F2758A8;
    case 0x7F2758ACu: goto label_7F2758AC;
    case 0x7F2758B0u: goto label_7F2758B0;
    case 0x7F2758B4u: goto label_7F2758B4;
    case 0x7F2758B8u: goto label_7F2758B8;
    case 0x7F2758BCu: goto label_7F2758BC;
    case 0x7F2758C0u: goto label_7F2758C0;
    case 0x7F2758C4u: goto label_7F2758C4;
    case 0x7F2758C8u: goto label_7F2758C8;
    case 0x7F2758CCu: goto label_7F2758CC;
    case 0x7F2758D0u: goto label_7F2758D0;
    case 0x7F2758D4u: goto label_7F2758D4;
    case 0x7F2758D8u: goto label_7F2758D8;
    case 0x7F2758DCu: goto label_7F2758DC;
    case 0x7F2758E0u: goto label_7F2758E0;
    case 0x7F2758E4u: goto label_7F2758E4;
    case 0x7F2758E8u: goto label_7F2758E8;
    case 0x7F2758ECu: goto label_7F2758EC;
    case 0x7F2758F0u: goto label_7F2758F0;
    case 0x7F2758F4u: goto label_7F2758F4;
    case 0x7F2758F8u: goto label_7F2758F8;
    case 0x7F2758FCu: goto label_7F2758FC;
    case 0x7F275900u: goto label_7F275900;
    case 0x7F275904u: goto label_7F275904;
    case 0x7F275908u: goto label_7F275908;
    case 0x7F27590Cu: goto label_7F27590C;
    case 0x7F275910u: goto label_7F275910;
    case 0x7F275914u: goto label_7F275914;
    case 0x7F275918u: goto label_7F275918;
    case 0x7F27591Cu: goto label_7F27591C;
    case 0x7F275920u: goto label_7F275920;
    case 0x7F275924u: goto label_7F275924;
    case 0x7F275928u: goto label_7F275928;
    case 0x7F27592Cu: goto label_7F27592C;
    case 0x7F275930u: goto label_7F275930;
    case 0x7F275934u: goto label_7F275934;
    case 0x7F275938u: goto label_7F275938;
    case 0x7F27593Cu: goto label_7F27593C;
    case 0x7F275940u: goto label_7F275940;
    case 0x7F275944u: goto label_7F275944;
    case 0x7F275948u: goto label_7F275948;
    case 0x7F27594Cu: goto label_7F27594C;
    case 0x7F275950u: goto label_7F275950;
    case 0x7F275954u: goto label_7F275954;
    case 0x7F275958u: goto label_7F275958;
    case 0x7F27595Cu: goto label_7F27595C;
    case 0x7F275960u: goto label_7F275960;
    case 0x7F275964u: goto label_7F275964;
    case 0x7F275968u: goto label_7F275968;
    case 0x7F27596Cu: goto label_7F27596C;
    case 0x7F275970u: goto label_7F275970;
    case 0x7F275974u: goto label_7F275974;
    case 0x7F275978u: goto label_7F275978;
    case 0x7F27597Cu: goto label_7F27597C;
    case 0x7F275980u: goto label_7F275980;
    case 0x7F275984u: goto label_7F275984;
    case 0x7F275988u: goto label_7F275988;
    case 0x7F27598Cu: goto label_7F27598C;
    case 0x7F275990u: goto label_7F275990;
    case 0x7F275994u: goto label_7F275994;
    case 0x7F275998u: goto label_7F275998;
    case 0x7F27599Cu: goto label_7F27599C;
    case 0x7F2759A0u: goto label_7F2759A0;
    case 0x7F2759A4u: goto label_7F2759A4;
    case 0x7F2759A8u: goto label_7F2759A8;
    case 0x7F2759ACu: goto label_7F2759AC;
    case 0x7F2759B0u: goto label_7F2759B0;
    case 0x7F2759B4u: goto label_7F2759B4;
    case 0x7F2759B8u: goto label_7F2759B8;
    case 0x7F2759BCu: goto label_7F2759BC;
    case 0x7F2759C0u: goto label_7F2759C0;
    case 0x7F2759C4u: goto label_7F2759C4;
    case 0x7F2759C8u: goto label_7F2759C8;
    case 0x7F2759CCu: goto label_7F2759CC;
    case 0x7F2759D0u: goto label_7F2759D0;
    case 0x7F2759D4u: goto label_7F2759D4;
    case 0x7F2759D8u: goto label_7F2759D8;
    case 0x7F2759DCu: goto label_7F2759DC;
    case 0x7F2759E0u: goto label_7F2759E0;
    case 0x7F2759E4u: goto label_7F2759E4;
    case 0x7F2759E8u: goto label_7F2759E8;
    case 0x7F2759ECu: goto label_7F2759EC;
    case 0x7F2759F0u: goto label_7F2759F0;
    case 0x7F2759F4u: goto label_7F2759F4;
    case 0x7F2759F8u: goto label_7F2759F8;
    case 0x7F2759FCu: goto label_7F2759FC;
    case 0x7F275A00u: goto label_7F275A00;
    case 0x7F275A04u: goto label_7F275A04;
    case 0x7F275A08u: goto label_7F275A08;
    case 0x7F275A0Cu: goto label_7F275A0C;
    case 0x7F275A10u: goto label_7F275A10;
    case 0x7F275A14u: goto label_7F275A14;
    case 0x7F275A18u: goto label_7F275A18;
    case 0x7F275A1Cu: goto label_7F275A1C;
    case 0x7F275A20u: goto label_7F275A20;
    case 0x7F275A24u: goto label_7F275A24;
    case 0x7F275A28u: goto label_7F275A28;
    case 0x7F275A2Cu: goto label_7F275A2C;
    case 0x7F275A30u: goto label_7F275A30;
    case 0x7F275A34u: goto label_7F275A34;
    case 0x7F275A38u: goto label_7F275A38;
    case 0x7F275A3Cu: goto label_7F275A3C;
    case 0x7F275A40u: goto label_7F275A40;
    case 0x7F275A44u: goto label_7F275A44;
    case 0x7F275A48u: goto label_7F275A48;
    case 0x7F275A4Cu: goto label_7F275A4C;
    case 0x7F275A50u: goto label_7F275A50;
    case 0x7F275A54u: goto label_7F275A54;
    case 0x7F275A58u: goto label_7F275A58;
    case 0x7F275A5Cu: goto label_7F275A5C;
    case 0x7F275A60u: goto label_7F275A60;
    case 0x7F275A64u: goto label_7F275A64;
    case 0x7F275A68u: goto label_7F275A68;
    case 0x7F275A6Cu: goto label_7F275A6C;
    case 0x7F275A70u: goto label_7F275A70;
    case 0x7F275A74u: goto label_7F275A74;
    case 0x7F275A78u: goto label_7F275A78;
    case 0x7F275A7Cu: goto label_7F275A7C;
    case 0x7F275A80u: goto label_7F275A80;
    case 0x7F275A84u: goto label_7F275A84;
    case 0x7F275A88u: goto label_7F275A88;
    case 0x7F275A8Cu: goto label_7F275A8C;
    case 0x7F275A90u: goto label_7F275A90;
    case 0x7F275A94u: goto label_7F275A94;
    case 0x7F275A98u: goto label_7F275A98;
    case 0x7F275A9Cu: goto label_7F275A9C;
    case 0x7F275AA0u: goto label_7F275AA0;
    case 0x7F275AA4u: goto label_7F275AA4;
    case 0x7F275AA8u: goto label_7F275AA8;
    case 0x7F275AACu: goto label_7F275AAC;
    case 0x7F275AB0u: goto label_7F275AB0;
    case 0x7F275AB4u: goto label_7F275AB4;
    case 0x7F275AB8u: goto label_7F275AB8;
    case 0x7F275ABCu: goto label_7F275ABC;
    case 0x7F275AC0u: goto label_7F275AC0;
    case 0x7F275AC4u: goto label_7F275AC4;
    case 0x7F275AC8u: goto label_7F275AC8;
    case 0x7F275ACCu: goto label_7F275ACC;
    case 0x7F275AD0u: goto label_7F275AD0;
    case 0x7F275AD4u: goto label_7F275AD4;
    case 0x7F275AD8u: goto label_7F275AD8;
    case 0x7F275ADCu: goto label_7F275ADC;
    case 0x7F275AE0u: goto label_7F275AE0;
    case 0x7F275AE4u: goto label_7F275AE4;
    case 0x7F275AE8u: goto label_7F275AE8;
    case 0x7F275AECu: goto label_7F275AEC;
    case 0x7F275AF0u: goto label_7F275AF0;
    case 0x7F275AF4u: goto label_7F275AF4;
    case 0x7F275AF8u: goto label_7F275AF8;
    case 0x7F275AFCu: goto label_7F275AFC;
    case 0x7F275B00u: goto label_7F275B00;
    case 0x7F275B04u: goto label_7F275B04;
    case 0x7F275B08u: goto label_7F275B08;
    case 0x7F275B0Cu: goto label_7F275B0C;
    case 0x7F275B10u: goto label_7F275B10;
    case 0x7F275B14u: goto label_7F275B14;
    case 0x7F275B18u: goto label_7F275B18;
    case 0x7F275B1Cu: goto label_7F275B1C;
    case 0x7F275B20u: goto label_7F275B20;
    case 0x7F275B24u: goto label_7F275B24;
    case 0x7F275B28u: goto label_7F275B28;
    case 0x7F275B2Cu: goto label_7F275B2C;
    case 0x7F275B30u: goto label_7F275B30;
    case 0x7F275B34u: goto label_7F275B34;
    case 0x7F275B38u: goto label_7F275B38;
    case 0x7F275B3Cu: goto label_7F275B3C;
    case 0x7F275B40u: goto label_7F275B40;
    case 0x7F275B44u: goto label_7F275B44;
    case 0x7F275B48u: goto label_7F275B48;
    case 0x7F275B4Cu: goto label_7F275B4C;
    case 0x7F275B50u: goto label_7F275B50;
    case 0x7F275B54u: goto label_7F275B54;
    case 0x7F275B58u: goto label_7F275B58;
    case 0x7F275B5Cu: goto label_7F275B5C;
    case 0x7F275B60u: goto label_7F275B60;
    case 0x7F275B64u: goto label_7F275B64;
    case 0x7F275B68u: goto label_7F275B68;
    case 0x7F275B6Cu: goto label_7F275B6C;
    case 0x7F275B70u: goto label_7F275B70;
    case 0x7F275B74u: goto label_7F275B74;
    case 0x7F275B78u: goto label_7F275B78;
    case 0x7F275B7Cu: goto label_7F275B7C;
    case 0x7F275B80u: goto label_7F275B80;
    case 0x7F275B84u: goto label_7F275B84;
    case 0x7F275B88u: goto label_7F275B88;
    case 0x7F275B8Cu: goto label_7F275B8C;
    case 0x7F275B90u: goto label_7F275B90;
    case 0x7F275B94u: goto label_7F275B94;
    case 0x7F275B98u: goto label_7F275B98;
    case 0x7F275B9Cu: goto label_7F275B9C;
    case 0x7F275BA0u: goto label_7F275BA0;
    case 0x7F275BA4u: goto label_7F275BA4;
    case 0x7F275BA8u: goto label_7F275BA8;
    case 0x7F275BACu: goto label_7F275BAC;
    case 0x7F275BB0u: goto label_7F275BB0;
    case 0x7F275BB4u: goto label_7F275BB4;
    case 0x7F275BB8u: goto label_7F275BB8;
    case 0x7F275BBCu: goto label_7F275BBC;
    case 0x7F275BC0u: goto label_7F275BC0;
    case 0x7F275BC4u: goto label_7F275BC4;
    case 0x7F275BC8u: goto label_7F275BC8;
    case 0x7F275BCCu: goto label_7F275BCC;
    case 0x7F275BD0u: goto label_7F275BD0;
    case 0x7F275BD4u: goto label_7F275BD4;
    case 0x7F275BD8u: goto label_7F275BD8;
    case 0x7F275BDCu: goto label_7F275BDC;
    case 0x7F275BE0u: goto label_7F275BE0;
    case 0x7F275BE4u: goto label_7F275BE4;
    case 0x7F275BE8u: goto label_7F275BE8;
    case 0x7F275BECu: goto label_7F275BEC;
    case 0x7F275BF0u: goto label_7F275BF0;
    case 0x7F275BF4u: goto label_7F275BF4;
    case 0x7F275BF8u: goto label_7F275BF8;
    case 0x7F275BFCu: goto label_7F275BFC;
    case 0x7F275C00u: goto label_7F275C00;
    case 0x7F275C04u: goto label_7F275C04;
    case 0x7F275C08u: goto label_7F275C08;
    case 0x7F275C0Cu: goto label_7F275C0C;
    case 0x7F275C10u: goto label_7F275C10;
    case 0x7F275C14u: goto label_7F275C14;
    case 0x7F275C18u: goto label_7F275C18;
    case 0x7F275C1Cu: goto label_7F275C1C;
    case 0x7F275C20u: goto label_7F275C20;
    case 0x7F275C24u: goto label_7F275C24;
    case 0x7F275C28u: goto label_7F275C28;
    case 0x7F275C2Cu: goto label_7F275C2C;
    case 0x7F275C30u: goto label_7F275C30;
    case 0x7F275C34u: goto label_7F275C34;
    case 0x7F275C38u: goto label_7F275C38;
    case 0x7F275C3Cu: goto label_7F275C3C;
    case 0x7F275C40u: goto label_7F275C40;
    case 0x7F275C44u: goto label_7F275C44;
    case 0x7F275C48u: goto label_7F275C48;
    case 0x7F275C4Cu: goto label_7F275C4C;
    case 0x7F275C50u: goto label_7F275C50;
    case 0x7F275C54u: goto label_7F275C54;
    case 0x7F275C58u: goto label_7F275C58;
    case 0x7F275C5Cu: goto label_7F275C5C;
    case 0x7F275C60u: goto label_7F275C60;
    case 0x7F275C64u: goto label_7F275C64;
    case 0x7F275C68u: goto label_7F275C68;
    case 0x7F275C6Cu: goto label_7F275C6C;
    case 0x7F275C70u: goto label_7F275C70;
    case 0x7F275C74u: goto label_7F275C74;
    case 0x7F275C78u: goto label_7F275C78;
    case 0x7F275C7Cu: goto label_7F275C7C;
    case 0x7F275C80u: goto label_7F275C80;
    case 0x7F275C84u: goto label_7F275C84;
    case 0x7F275C88u: goto label_7F275C88;
    case 0x7F275C8Cu: goto label_7F275C8C;
    case 0x7F275C90u: goto label_7F275C90;
    case 0x7F275C94u: goto label_7F275C94;
    case 0x7F275C98u: goto label_7F275C98;
    case 0x7F275C9Cu: goto label_7F275C9C;
    case 0x7F275CA0u: goto label_7F275CA0;
    case 0x7F275CA4u: goto label_7F275CA4;
    case 0x7F275CA8u: goto label_7F275CA8;
    case 0x7F275CACu: goto label_7F275CAC;
    case 0x7F275CB0u: goto label_7F275CB0;
    case 0x7F275CB4u: goto label_7F275CB4;
    case 0x7F275CB8u: goto label_7F275CB8;
    case 0x7F275CBCu: goto label_7F275CBC;
    case 0x7F275CC0u: goto label_7F275CC0;
    case 0x7F275CC4u: goto label_7F275CC4;
    case 0x7F275CC8u: goto label_7F275CC8;
    case 0x7F275CCCu: goto label_7F275CCC;
    case 0x7F275CD0u: goto label_7F275CD0;
    case 0x7F275CD4u: goto label_7F275CD4;
    case 0x7F275CD8u: goto label_7F275CD8;
    case 0x7F275CDCu: goto label_7F275CDC;
    case 0x7F275CE0u: goto label_7F275CE0;
    case 0x7F275CE4u: goto label_7F275CE4;
    case 0x7F275CE8u: goto label_7F275CE8;
    case 0x7F275CECu: goto label_7F275CEC;
    case 0x7F275CF0u: goto label_7F275CF0;
    case 0x7F275CF4u: goto label_7F275CF4;
    case 0x7F275CF8u: goto label_7F275CF8;
    case 0x7F275CFCu: goto label_7F275CFC;
    case 0x7F275D00u: goto label_7F275D00;
    case 0x7F275D04u: goto label_7F275D04;
    case 0x7F275D08u: goto label_7F275D08;
    case 0x7F275D0Cu: goto label_7F275D0C;
    case 0x7F275D10u: goto label_7F275D10;
    case 0x7F275D14u: goto label_7F275D14;
    case 0x7F275D18u: goto label_7F275D18;
    case 0x7F275D1Cu: goto label_7F275D1C;
    case 0x7F275D20u: goto label_7F275D20;
    case 0x7F275D24u: goto label_7F275D24;
    case 0x7F275D28u: goto label_7F275D28;
    case 0x7F275D2Cu: goto label_7F275D2C;
    case 0x7F275D30u: goto label_7F275D30;
    case 0x7F275D34u: goto label_7F275D34;
    case 0x7F275D38u: goto label_7F275D38;
    case 0x7F275D3Cu: goto label_7F275D3C;
    case 0x7F275D40u: goto label_7F275D40;
    case 0x7F275D44u: goto label_7F275D44;
    case 0x7F275D48u: goto label_7F275D48;
    case 0x7F275D4Cu: goto label_7F275D4C;
    case 0x7F275D50u: goto label_7F275D50;
    case 0x7F275D54u: goto label_7F275D54;
    case 0x7F275D58u: goto label_7F275D58;
    case 0x7F275D5Cu: goto label_7F275D5C;
    case 0x7F275D60u: goto label_7F275D60;
    case 0x7F275D64u: goto label_7F275D64;
    case 0x7F275D68u: goto label_7F275D68;
    case 0x7F275D6Cu: goto label_7F275D6C;
    case 0x7F275D70u: goto label_7F275D70;
    case 0x7F275D74u: goto label_7F275D74;
    case 0x7F275D78u: goto label_7F275D78;
    case 0x7F275D7Cu: goto label_7F275D7C;
    case 0x7F275D80u: goto label_7F275D80;
    case 0x7F275D84u: goto label_7F275D84;
    case 0x7F275D88u: goto label_7F275D88;
    case 0x7F275D8Cu: goto label_7F275D8C;
    case 0x7F275D90u: goto label_7F275D90;
    case 0x7F275D94u: goto label_7F275D94;
    case 0x7F275D98u: goto label_7F275D98;
    case 0x7F275D9Cu: goto label_7F275D9C;
    case 0x7F275DA0u: goto label_7F275DA0;
    case 0x7F275DA4u: goto label_7F275DA4;
    case 0x7F275DA8u: goto label_7F275DA8;
    case 0x7F275DACu: goto label_7F275DAC;
    case 0x7F275DB0u: goto label_7F275DB0;
    case 0x7F275DB4u: goto label_7F275DB4;
    case 0x7F275DB8u: goto label_7F275DB8;
    case 0x7F275DBCu: goto label_7F275DBC;
    case 0x7F275DC0u: goto label_7F275DC0;
    case 0x7F275DC4u: goto label_7F275DC4;
    case 0x7F275DC8u: goto label_7F275DC8;
    case 0x7F275DCCu: goto label_7F275DCC;
    case 0x7F275DD0u: goto label_7F275DD0;
    case 0x7F275DD4u: goto label_7F275DD4;
    case 0x7F275DD8u: goto label_7F275DD8;
    case 0x7F275DDCu: goto label_7F275DDC;
    case 0x7F275DE0u: goto label_7F275DE0;
    case 0x7F275DE4u: goto label_7F275DE4;
    case 0x7F275DE8u: goto label_7F275DE8;
    case 0x7F275DECu: goto label_7F275DEC;
    case 0x7F275DF0u: goto label_7F275DF0;
    case 0x7F275DF4u: goto label_7F275DF4;
    case 0x7F275DF8u: goto label_7F275DF8;
    case 0x7F275DFCu: goto label_7F275DFC;
    case 0x7F275E00u: goto label_7F275E00;
    case 0x7F275E04u: goto label_7F275E04;
    case 0x7F275E08u: goto label_7F275E08;
    case 0x7F275E0Cu: goto label_7F275E0C;
    case 0x7F275E10u: goto label_7F275E10;
    case 0x7F275E14u: goto label_7F275E14;
    case 0x7F275E18u: goto label_7F275E18;
    case 0x7F275E1Cu: goto label_7F275E1C;
    case 0x7F275E20u: goto label_7F275E20;
    case 0x7F275E24u: goto label_7F275E24;
    case 0x7F275E28u: goto label_7F275E28;
    case 0x7F275E2Cu: goto label_7F275E2C;
    case 0x7F275E30u: goto label_7F275E30;
    case 0x7F275E34u: goto label_7F275E34;
    case 0x7F275E38u: goto label_7F275E38;
    case 0x7F275E3Cu: goto label_7F275E3C;
    case 0x7F275E40u: goto label_7F275E40;
    case 0x7F275E44u: goto label_7F275E44;
    case 0x7F275E48u: goto label_7F275E48;
    case 0x7F275E4Cu: goto label_7F275E4C;
    case 0x7F275E50u: goto label_7F275E50;
    case 0x7F275E54u: goto label_7F275E54;
    case 0x7F275E58u: goto label_7F275E58;
    case 0x7F275E5Cu: goto label_7F275E5C;
    case 0x7F275E60u: goto label_7F275E60;
    case 0x7F275E64u: goto label_7F275E64;
    case 0x7F275E68u: goto label_7F275E68;
    case 0x7F275E6Cu: goto label_7F275E6C;
    case 0x7F275E70u: goto label_7F275E70;
    case 0x7F275E74u: goto label_7F275E74;
    case 0x7F275E78u: goto label_7F275E78;
    case 0x7F275E7Cu: goto label_7F275E7C;
    case 0x7F275E80u: goto label_7F275E80;
    case 0x7F275E84u: goto label_7F275E84;
    case 0x7F275E88u: goto label_7F275E88;
    case 0x7F275E8Cu: goto label_7F275E8C;
    case 0x7F275E90u: goto label_7F275E90;
    case 0x7F275E94u: goto label_7F275E94;
    case 0x7F275E98u: goto label_7F275E98;
    case 0x7F275E9Cu: goto label_7F275E9C;
    case 0x7F275EA0u: goto label_7F275EA0;
    case 0x7F275EA4u: goto label_7F275EA4;
    case 0x7F275EA8u: goto label_7F275EA8;
    case 0x7F275EACu: goto label_7F275EAC;
    case 0x7F275EB0u: goto label_7F275EB0;
    case 0x7F275EB4u: goto label_7F275EB4;
    case 0x7F275EB8u: goto label_7F275EB8;
    case 0x7F275EBCu: goto label_7F275EBC;
    case 0x7F275EC0u: goto label_7F275EC0;
    case 0x7F275EC4u: goto label_7F275EC4;
    case 0x7F275EC8u: goto label_7F275EC8;
    case 0x7F275ECCu: goto label_7F275ECC;
    case 0x7F275ED0u: goto label_7F275ED0;
    case 0x7F275ED4u: goto label_7F275ED4;
    case 0x7F275ED8u: goto label_7F275ED8;
    case 0x7F275EDCu: goto label_7F275EDC;
    case 0x7F275EE0u: goto label_7F275EE0;
    case 0x7F275EE4u: goto label_7F275EE4;
    case 0x7F275EE8u: goto label_7F275EE8;
    case 0x7F275EECu: goto label_7F275EEC;
    case 0x7F275EF0u: goto label_7F275EF0;
    case 0x7F275EF4u: goto label_7F275EF4;
    case 0x7F275EF8u: goto label_7F275EF8;
    case 0x7F275EFCu: goto label_7F275EFC;
    case 0x7F275F00u: goto label_7F275F00;
    case 0x7F275F04u: goto label_7F275F04;
    case 0x7F275F08u: goto label_7F275F08;
    case 0x7F275F0Cu: goto label_7F275F0C;
    case 0x7F275F10u: goto label_7F275F10;
    case 0x7F275F14u: goto label_7F275F14;
    case 0x7F275F18u: goto label_7F275F18;
    case 0x7F275F1Cu: goto label_7F275F1C;
    case 0x7F275F20u: goto label_7F275F20;
    case 0x7F275F24u: goto label_7F275F24;
    case 0x7F275F28u: goto label_7F275F28;
    case 0x7F275F2Cu: goto label_7F275F2C;
    case 0x7F275F30u: goto label_7F275F30;
    case 0x7F275F34u: goto label_7F275F34;
    case 0x7F275F38u: goto label_7F275F38;
    case 0x7F275F3Cu: goto label_7F275F3C;
    case 0x7F275F40u: goto label_7F275F40;
    case 0x7F275F44u: goto label_7F275F44;
    case 0x7F275F48u: goto label_7F275F48;
    case 0x7F275F4Cu: goto label_7F275F4C;
    case 0x7F275F50u: goto label_7F275F50;
    case 0x7F275F54u: goto label_7F275F54;
    case 0x7F275F58u: goto label_7F275F58;
    case 0x7F275F5Cu: goto label_7F275F5C;
    case 0x7F275F60u: goto label_7F275F60;
    case 0x7F275F64u: goto label_7F275F64;
    case 0x7F275F68u: goto label_7F275F68;
    case 0x7F275F6Cu: goto label_7F275F6C;
    case 0x7F275F70u: goto label_7F275F70;
    case 0x7F275F74u: goto label_7F275F74;
    case 0x7F275F78u: goto label_7F275F78;
    case 0x7F275F7Cu: goto label_7F275F7C;
    case 0x7F275F80u: goto label_7F275F80;
    case 0x7F275F84u: goto label_7F275F84;
    case 0x7F275F88u: goto label_7F275F88;
    case 0x7F275F8Cu: goto label_7F275F8C;
    case 0x7F275F90u: goto label_7F275F90;
    case 0x7F275F94u: goto label_7F275F94;
    case 0x7F275F98u: goto label_7F275F98;
    case 0x7F275F9Cu: goto label_7F275F9C;
    case 0x7F275FA0u: goto label_7F275FA0;
    case 0x7F275FA4u: goto label_7F275FA4;
    case 0x7F275FA8u: goto label_7F275FA8;
    case 0x7F275FACu: goto label_7F275FAC;
    case 0x7F275FB0u: goto label_7F275FB0;
    case 0x7F275FB4u: goto label_7F275FB4;
    case 0x7F275FB8u: goto label_7F275FB8;
    case 0x7F275FBCu: goto label_7F275FBC;
    case 0x7F275FC0u: goto label_7F275FC0;
    case 0x7F275FC4u: goto label_7F275FC4;
    case 0x7F275FC8u: goto label_7F275FC8;
    case 0x7F275FCCu: goto label_7F275FCC;
    case 0x7F275FD0u: goto label_7F275FD0;
    case 0x7F275FD4u: goto label_7F275FD4;
    case 0x7F275FD8u: goto label_7F275FD8;
    case 0x7F275FDCu: goto label_7F275FDC;
    case 0x7F275FE0u: goto label_7F275FE0;
    case 0x7F275FE4u: goto label_7F275FE4;
    case 0x7F275FE8u: goto label_7F275FE8;
    case 0x7F275FECu: goto label_7F275FEC;
    case 0x7F275FF0u: goto label_7F275FF0;
    case 0x7F275FF4u: goto label_7F275FF4;
    case 0x7F275FF8u: goto label_7F275FF8;
    case 0x7F275FFCu: goto label_7F275FFC;
    case 0x7F276000u: goto label_7F276000;
    case 0x7F276004u: goto label_7F276004;
    case 0x7F276008u: goto label_7F276008;
    case 0x7F27600Cu: goto label_7F27600C;
    case 0x7F276010u: goto label_7F276010;
    case 0x7F276014u: goto label_7F276014;
    case 0x7F276018u: goto label_7F276018;
    case 0x7F27601Cu: goto label_7F27601C;
    case 0x7F276020u: goto label_7F276020;
    case 0x7F276024u: goto label_7F276024;
    case 0x7F276028u: goto label_7F276028;
    case 0x7F27602Cu: goto label_7F27602C;
    case 0x7F276030u: goto label_7F276030;
    case 0x7F276034u: goto label_7F276034;
    case 0x7F276038u: goto label_7F276038;
    case 0x7F27603Cu: goto label_7F27603C;
    case 0x7F276040u: goto label_7F276040;
    case 0x7F276044u: goto label_7F276044;
    case 0x7F276048u: goto label_7F276048;
    case 0x7F27604Cu: goto label_7F27604C;
    case 0x7F276050u: goto label_7F276050;
    case 0x7F276054u: goto label_7F276054;
    case 0x7F276058u: goto label_7F276058;
    case 0x7F27605Cu: goto label_7F27605C;
    case 0x7F276060u: goto label_7F276060;
    case 0x7F276064u: goto label_7F276064;
    case 0x7F276068u: goto label_7F276068;
    case 0x7F27606Cu: goto label_7F27606C;
    case 0x7F276070u: goto label_7F276070;
    case 0x7F276074u: goto label_7F276074;
    case 0x7F276078u: goto label_7F276078;
    case 0x7F27607Cu: goto label_7F27607C;
    case 0x7F276080u: goto label_7F276080;
    case 0x7F276084u: goto label_7F276084;
    case 0x7F276088u: goto label_7F276088;
    case 0x7F27608Cu: goto label_7F27608C;
    case 0x7F276090u: goto label_7F276090;
    case 0x7F276094u: goto label_7F276094;
    case 0x7F276098u: goto label_7F276098;
    case 0x7F27609Cu: goto label_7F27609C;
    case 0x7F2760A0u: goto label_7F2760A0;
    case 0x7F2760A4u: goto label_7F2760A4;
    case 0x7F2760A8u: goto label_7F2760A8;
    case 0x7F2760ACu: goto label_7F2760AC;
    case 0x7F2760B0u: goto label_7F2760B0;
    case 0x7F2760B4u: goto label_7F2760B4;
    case 0x7F2760B8u: goto label_7F2760B8;
    case 0x7F2760BCu: goto label_7F2760BC;
    case 0x7F2760C0u: goto label_7F2760C0;
    case 0x7F2760C4u: goto label_7F2760C4;
    case 0x7F2760C8u: goto label_7F2760C8;
    case 0x7F2760CCu: goto label_7F2760CC;
    case 0x7F2760D0u: goto label_7F2760D0;
    case 0x7F2760D4u: goto label_7F2760D4;
    case 0x7F2760D8u: goto label_7F2760D8;
    case 0x7F2760DCu: goto label_7F2760DC;
    case 0x7F2760E0u: goto label_7F2760E0;
    case 0x7F2760E4u: goto label_7F2760E4;
    case 0x7F2760E8u: goto label_7F2760E8;
    case 0x7F2760ECu: goto label_7F2760EC;
    case 0x7F2760F0u: goto label_7F2760F0;
    case 0x7F2760F4u: goto label_7F2760F4;
    case 0x7F2760F8u: goto label_7F2760F8;
    case 0x7F2760FCu: goto label_7F2760FC;
    case 0x7F276100u: goto label_7F276100;
    case 0x7F276104u: goto label_7F276104;
    case 0x7F276108u: goto label_7F276108;
    case 0x7F27610Cu: goto label_7F27610C;
    case 0x7F276110u: goto label_7F276110;
    case 0x7F276114u: goto label_7F276114;
    case 0x7F276118u: goto label_7F276118;
    case 0x7F27611Cu: goto label_7F27611C;
    case 0x7F276120u: goto label_7F276120;
    case 0x7F276124u: goto label_7F276124;
    case 0x7F276128u: goto label_7F276128;
    case 0x7F27612Cu: goto label_7F27612C;
    case 0x7F276130u: goto label_7F276130;
    case 0x7F276134u: goto label_7F276134;
    case 0x7F276138u: goto label_7F276138;
    case 0x7F27613Cu: goto label_7F27613C;
    case 0x7F276140u: goto label_7F276140;
    case 0x7F276144u: goto label_7F276144;
    case 0x7F276148u: goto label_7F276148;
    case 0x7F27614Cu: goto label_7F27614C;
    case 0x7F276150u: goto label_7F276150;
    case 0x7F276154u: goto label_7F276154;
    case 0x7F276158u: goto label_7F276158;
    case 0x7F27615Cu: goto label_7F27615C;
    case 0x7F276160u: goto label_7F276160;
    case 0x7F276164u: goto label_7F276164;
    case 0x7F276168u: goto label_7F276168;
    case 0x7F27616Cu: goto label_7F27616C;
    case 0x7F276170u: goto label_7F276170;
    case 0x7F276174u: goto label_7F276174;
    case 0x7F276178u: goto label_7F276178;
    case 0x7F27617Cu: goto label_7F27617C;
    case 0x7F276180u: goto label_7F276180;
    case 0x7F276184u: goto label_7F276184;
    case 0x7F276188u: goto label_7F276188;
    case 0x7F27618Cu: goto label_7F27618C;
    case 0x7F276190u: goto label_7F276190;
    case 0x7F276194u: goto label_7F276194;
    case 0x7F276198u: goto label_7F276198;
    case 0x7F27619Cu: goto label_7F27619C;
    case 0x7F2761A0u: goto label_7F2761A0;
    case 0x7F2761A4u: goto label_7F2761A4;
    case 0x7F2761A8u: goto label_7F2761A8;
    case 0x7F2761ACu: goto label_7F2761AC;
    case 0x7F2761B0u: goto label_7F2761B0;
    case 0x7F2761B4u: goto label_7F2761B4;
    case 0x7F2761B8u: goto label_7F2761B8;
    case 0x7F2761BCu: goto label_7F2761BC;
    case 0x7F2761C0u: goto label_7F2761C0;
    case 0x7F2761C4u: goto label_7F2761C4;
    case 0x7F2761C8u: goto label_7F2761C8;
    case 0x7F2761CCu: goto label_7F2761CC;
    case 0x7F2761D0u: goto label_7F2761D0;
    case 0x7F2761D4u: goto label_7F2761D4;
    case 0x7F2761D8u: goto label_7F2761D8;
    case 0x7F2761DCu: goto label_7F2761DC;
    case 0x7F2761E0u: goto label_7F2761E0;
    case 0x7F2761E4u: goto label_7F2761E4;
    case 0x7F2761E8u: goto label_7F2761E8;
    case 0x7F2761ECu: goto label_7F2761EC;
    case 0x7F2761F0u: goto label_7F2761F0;
    case 0x7F2761F4u: goto label_7F2761F4;
    case 0x7F2761F8u: goto label_7F2761F8;
    case 0x7F2761FCu: goto label_7F2761FC;
    case 0x7F276200u: goto label_7F276200;
    case 0x7F276204u: goto label_7F276204;
    case 0x7F276208u: goto label_7F276208;
    case 0x7F27620Cu: goto label_7F27620C;
    case 0x7F276210u: goto label_7F276210;
    case 0x7F276214u: goto label_7F276214;
    case 0x7F276218u: goto label_7F276218;
    case 0x7F27621Cu: goto label_7F27621C;
    case 0x7F276220u: goto label_7F276220;
    case 0x7F276224u: goto label_7F276224;
    case 0x7F276228u: goto label_7F276228;
    case 0x7F27622Cu: goto label_7F27622C;
    case 0x7F276230u: goto label_7F276230;
    case 0x7F276234u: goto label_7F276234;
    case 0x7F276238u: goto label_7F276238;
    case 0x7F27623Cu: goto label_7F27623C;
    case 0x7F276240u: goto label_7F276240;
    case 0x7F276244u: goto label_7F276244;
    case 0x7F276248u: goto label_7F276248;
    case 0x7F27624Cu: goto label_7F27624C;
    case 0x7F276250u: goto label_7F276250;
    case 0x7F276254u: goto label_7F276254;
    case 0x7F276258u: goto label_7F276258;
    case 0x7F27625Cu: goto label_7F27625C;
    case 0x7F276260u: goto label_7F276260;
    case 0x7F276264u: goto label_7F276264;
    case 0x7F276268u: goto label_7F276268;
    case 0x7F27626Cu: goto label_7F27626C;
    case 0x7F276270u: goto label_7F276270;
    case 0x7F276274u: goto label_7F276274;
    case 0x7F276278u: goto label_7F276278;
    case 0x7F27627Cu: goto label_7F27627C;
    case 0x7F276280u: goto label_7F276280;
    case 0x7F276284u: goto label_7F276284;
    case 0x7F276288u: goto label_7F276288;
    case 0x7F27628Cu: goto label_7F27628C;
    case 0x7F276290u: goto label_7F276290;
    case 0x7F276294u: goto label_7F276294;
    case 0x7F276298u: goto label_7F276298;
    case 0x7F27629Cu: goto label_7F27629C;
    case 0x7F2762A0u: goto label_7F2762A0;
    case 0x7F2762A4u: goto label_7F2762A4;
    case 0x7F2762A8u: goto label_7F2762A8;
    case 0x7F2762ACu: goto label_7F2762AC;
    case 0x7F2762B0u: goto label_7F2762B0;
    case 0x7F2762B4u: goto label_7F2762B4;
    case 0x7F2762B8u: goto label_7F2762B8;
    case 0x7F2762BCu: goto label_7F2762BC;
    case 0x7F2762C0u: goto label_7F2762C0;
    case 0x7F2762C4u: goto label_7F2762C4;
    case 0x7F2762C8u: goto label_7F2762C8;
    case 0x7F2762CCu: goto label_7F2762CC;
    case 0x7F2762D0u: goto label_7F2762D0;
    case 0x7F2762D4u: goto label_7F2762D4;
    case 0x7F2762D8u: goto label_7F2762D8;
    case 0x7F2762DCu: goto label_7F2762DC;
    case 0x7F2762E0u: goto label_7F2762E0;
    case 0x7F2762E4u: goto label_7F2762E4;
    case 0x7F2762E8u: goto label_7F2762E8;
    case 0x7F2762ECu: goto label_7F2762EC;
    case 0x7F2762F0u: goto label_7F2762F0;
    case 0x7F2762F4u: goto label_7F2762F4;
    case 0x7F2762F8u: goto label_7F2762F8;
    case 0x7F2762FCu: goto label_7F2762FC;
    case 0x7F276300u: goto label_7F276300;
    case 0x7F276304u: goto label_7F276304;
    case 0x7F276308u: goto label_7F276308;
    case 0x7F27630Cu: goto label_7F27630C;
    case 0x7F276310u: goto label_7F276310;
    case 0x7F276314u: goto label_7F276314;
    case 0x7F276318u: goto label_7F276318;
    case 0x7F27631Cu: goto label_7F27631C;
    case 0x7F276320u: goto label_7F276320;
    case 0x7F276324u: goto label_7F276324;
    case 0x7F276328u: goto label_7F276328;
    case 0x7F27632Cu: goto label_7F27632C;
    case 0x7F276330u: goto label_7F276330;
    case 0x7F276334u: goto label_7F276334;
    case 0x7F276338u: goto label_7F276338;
    case 0x7F27633Cu: goto label_7F27633C;
    case 0x7F276340u: goto label_7F276340;
    case 0x7F276344u: goto label_7F276344;
    case 0x7F276348u: goto label_7F276348;
    case 0x7F27634Cu: goto label_7F27634C;
    case 0x7F276350u: goto label_7F276350;
    case 0x7F276354u: goto label_7F276354;
    case 0x7F276358u: goto label_7F276358;
    case 0x7F27635Cu: goto label_7F27635C;
    case 0x7F276360u: goto label_7F276360;
    case 0x7F276364u: goto label_7F276364;
    case 0x7F276368u: goto label_7F276368;
    case 0x7F27636Cu: goto label_7F27636C;
    case 0x7F276370u: goto label_7F276370;
    case 0x7F276374u: goto label_7F276374;
    case 0x7F276378u: goto label_7F276378;
    case 0x7F27637Cu: goto label_7F27637C;
    case 0x7F276380u: goto label_7F276380;
    case 0x7F276384u: goto label_7F276384;
    case 0x7F276388u: goto label_7F276388;
    case 0x7F27638Cu: goto label_7F27638C;
    case 0x7F276390u: goto label_7F276390;
    case 0x7F276394u: goto label_7F276394;
    case 0x7F276398u: goto label_7F276398;
    case 0x7F27639Cu: goto label_7F27639C;
    case 0x7F2763A0u: goto label_7F2763A0;
    case 0x7F2763A4u: goto label_7F2763A4;
    case 0x7F2763A8u: goto label_7F2763A8;
    case 0x7F2763ACu: goto label_7F2763AC;
    case 0x7F2763B0u: goto label_7F2763B0;
    case 0x7F2763B4u: goto label_7F2763B4;
    case 0x7F2763B8u: goto label_7F2763B8;
    case 0x7F2763BCu: goto label_7F2763BC;
    case 0x7F2763C0u: goto label_7F2763C0;
    case 0x7F2763C4u: goto label_7F2763C4;
    case 0x7F2763C8u: goto label_7F2763C8;
    case 0x7F2763CCu: goto label_7F2763CC;
    case 0x7F2763D0u: goto label_7F2763D0;
    case 0x7F2763D4u: goto label_7F2763D4;
    case 0x7F2763D8u: goto label_7F2763D8;
    case 0x7F2763DCu: goto label_7F2763DC;
    case 0x7F2763E0u: goto label_7F2763E0;
    case 0x7F2763E4u: goto label_7F2763E4;
    case 0x7F2763E8u: goto label_7F2763E8;
    case 0x7F2763ECu: goto label_7F2763EC;
    case 0x7F2763F0u: goto label_7F2763F0;
    case 0x7F2763F4u: goto label_7F2763F4;
    case 0x7F2763F8u: goto label_7F2763F8;
    case 0x7F2763FCu: goto label_7F2763FC;
    case 0x7F276400u: goto label_7F276400;
    case 0x7F276404u: goto label_7F276404;
    case 0x7F276408u: goto label_7F276408;
    case 0x7F27640Cu: goto label_7F27640C;
    case 0x7F276410u: goto label_7F276410;
    case 0x7F276414u: goto label_7F276414;
    case 0x7F276418u: goto label_7F276418;
    case 0x7F27641Cu: goto label_7F27641C;
    case 0x7F276420u: goto label_7F276420;
    case 0x7F276424u: goto label_7F276424;
    case 0x7F276428u: goto label_7F276428;
    case 0x7F27642Cu: goto label_7F27642C;
    case 0x7F276430u: goto label_7F276430;
    case 0x7F276434u: goto label_7F276434;
    case 0x7F276438u: goto label_7F276438;
    case 0x7F27643Cu: goto label_7F27643C;
    case 0x7F276440u: goto label_7F276440;
    case 0x7F276444u: goto label_7F276444;
    case 0x7F276448u: goto label_7F276448;
    case 0x7F27644Cu: goto label_7F27644C;
    case 0x7F276450u: goto label_7F276450;
    case 0x7F276454u: goto label_7F276454;
    case 0x7F276458u: goto label_7F276458;
    case 0x7F27645Cu: goto label_7F27645C;
    case 0x7F276460u: goto label_7F276460;
    case 0x7F276464u: goto label_7F276464;
    case 0x7F276468u: goto label_7F276468;
    case 0x7F27646Cu: goto label_7F27646C;
    case 0x7F276470u: goto label_7F276470;
    case 0x7F276474u: goto label_7F276474;
    case 0x7F276478u: goto label_7F276478;
    case 0x7F27647Cu: goto label_7F27647C;
    case 0x7F276480u: goto label_7F276480;
    case 0x7F276484u: goto label_7F276484;
    case 0x7F276488u: goto label_7F276488;
    case 0x7F27648Cu: goto label_7F27648C;
    case 0x7F276490u: goto label_7F276490;
    case 0x7F276494u: goto label_7F276494;
    case 0x7F276498u: goto label_7F276498;
    case 0x7F27649Cu: goto label_7F27649C;
    case 0x7F2764A0u: goto label_7F2764A0;
    case 0x7F2764A4u: goto label_7F2764A4;
    case 0x7F2764A8u: goto label_7F2764A8;
    case 0x7F2764ACu: goto label_7F2764AC;
    case 0x7F2764B0u: goto label_7F2764B0;
    case 0x7F2764B4u: goto label_7F2764B4;
    case 0x7F2764B8u: goto label_7F2764B8;
    case 0x7F2764BCu: goto label_7F2764BC;
    case 0x7F2764C0u: goto label_7F2764C0;
    case 0x7F2764C4u: goto label_7F2764C4;
    case 0x7F2764C8u: goto label_7F2764C8;
    case 0x7F2764CCu: goto label_7F2764CC;
    case 0x7F2764D0u: goto label_7F2764D0;
    case 0x7F2764D4u: goto label_7F2764D4;
    case 0x7F2764D8u: goto label_7F2764D8;
    case 0x7F2764DCu: goto label_7F2764DC;
    case 0x7F2764E0u: goto label_7F2764E0;
    case 0x7F2764E4u: goto label_7F2764E4;
    case 0x7F2764E8u: goto label_7F2764E8;
    case 0x7F2764ECu: goto label_7F2764EC;
    case 0x7F2764F0u: goto label_7F2764F0;
    case 0x7F2764F4u: goto label_7F2764F4;
    case 0x7F2764F8u: goto label_7F2764F8;
    case 0x7F2764FCu: goto label_7F2764FC;
    case 0x7F276500u: goto label_7F276500;
    case 0x7F276504u: goto label_7F276504;
    case 0x7F276508u: goto label_7F276508;
    case 0x7F27650Cu: goto label_7F27650C;
    case 0x7F276510u: goto label_7F276510;
    case 0x7F276514u: goto label_7F276514;
    case 0x7F276518u: goto label_7F276518;
    case 0x7F27651Cu: goto label_7F27651C;
    case 0x7F276520u: goto label_7F276520;
    case 0x7F276524u: goto label_7F276524;
    case 0x7F276528u: goto label_7F276528;
    case 0x7F27652Cu: goto label_7F27652C;
    case 0x7F276530u: goto label_7F276530;
    case 0x7F276534u: goto label_7F276534;
    case 0x7F276538u: goto label_7F276538;
    case 0x7F27653Cu: goto label_7F27653C;
    case 0x7F276540u: goto label_7F276540;
    case 0x7F276544u: goto label_7F276544;
    case 0x7F276548u: goto label_7F276548;
    case 0x7F27654Cu: goto label_7F27654C;
    case 0x7F276550u: goto label_7F276550;
    case 0x7F276554u: goto label_7F276554;
    case 0x7F276558u: goto label_7F276558;
    case 0x7F27655Cu: goto label_7F27655C;
    case 0x7F276560u: goto label_7F276560;
    case 0x7F276564u: goto label_7F276564;
    case 0x7F276568u: goto label_7F276568;
    case 0x7F27656Cu: goto label_7F27656C;
    case 0x7F276570u: goto label_7F276570;
    case 0x7F276574u: goto label_7F276574;
    case 0x7F276578u: goto label_7F276578;
    case 0x7F27657Cu: goto label_7F27657C;
    case 0x7F276580u: goto label_7F276580;
    case 0x7F276584u: goto label_7F276584;
    case 0x7F276588u: goto label_7F276588;
    case 0x7F27658Cu: goto label_7F27658C;
    case 0x7F276590u: goto label_7F276590;
    case 0x7F276594u: goto label_7F276594;
    case 0x7F276598u: goto label_7F276598;
    case 0x7F27659Cu: goto label_7F27659C;
    case 0x7F2765A0u: goto label_7F2765A0;
    case 0x7F2765A4u: goto label_7F2765A4;
    case 0x7F2765A8u: goto label_7F2765A8;
    case 0x7F2765ACu: goto label_7F2765AC;
    case 0x7F2765B0u: goto label_7F2765B0;
    case 0x7F2765B4u: goto label_7F2765B4;
    case 0x7F2765B8u: goto label_7F2765B8;
    case 0x7F2765BCu: goto label_7F2765BC;
    case 0x7F2765C0u: goto label_7F2765C0;
    case 0x7F2765C4u: goto label_7F2765C4;
    case 0x7F2765C8u: goto label_7F2765C8;
    case 0x7F2765CCu: goto label_7F2765CC;
    case 0x7F2765D0u: goto label_7F2765D0;
    case 0x7F2765D4u: goto label_7F2765D4;
    case 0x7F2765D8u: goto label_7F2765D8;
    case 0x7F2765DCu: goto label_7F2765DC;
    case 0x7F2765E0u: goto label_7F2765E0;
    case 0x7F2765E4u: goto label_7F2765E4;
    case 0x7F2765E8u: goto label_7F2765E8;
    case 0x7F2765ECu: goto label_7F2765EC;
    case 0x7F2765F0u: goto label_7F2765F0;
    case 0x7F2765F4u: goto label_7F2765F4;
    case 0x7F2765F8u: goto label_7F2765F8;
    case 0x7F2765FCu: goto label_7F2765FC;
    case 0x7F276600u: goto label_7F276600;
    case 0x7F276604u: goto label_7F276604;
    case 0x7F276608u: goto label_7F276608;
    case 0x7F27660Cu: goto label_7F27660C;
    case 0x7F276610u: goto label_7F276610;
    case 0x7F276614u: goto label_7F276614;
    case 0x7F276618u: goto label_7F276618;
    case 0x7F27661Cu: goto label_7F27661C;
    case 0x7F276620u: goto label_7F276620;
    case 0x7F276624u: goto label_7F276624;
    case 0x7F276628u: goto label_7F276628;
    case 0x7F27662Cu: goto label_7F27662C;
    case 0x7F276630u: goto label_7F276630;
    case 0x7F276634u: goto label_7F276634;
    case 0x7F276638u: goto label_7F276638;
    case 0x7F27663Cu: goto label_7F27663C;
    case 0x7F276640u: goto label_7F276640;
    case 0x7F276644u: goto label_7F276644;
    case 0x7F276648u: goto label_7F276648;
    case 0x7F27664Cu: goto label_7F27664C;
    case 0x7F276650u: goto label_7F276650;
    case 0x7F276654u: goto label_7F276654;
    case 0x7F276658u: goto label_7F276658;
    case 0x7F27665Cu: goto label_7F27665C;
    case 0x7F276660u: goto label_7F276660;
    case 0x7F276664u: goto label_7F276664;
    case 0x7F276668u: goto label_7F276668;
    case 0x7F27666Cu: goto label_7F27666C;
    case 0x7F276670u: goto label_7F276670;
    case 0x7F276674u: goto label_7F276674;
    case 0x7F276678u: goto label_7F276678;
    case 0x7F27667Cu: goto label_7F27667C;
    case 0x7F276680u: goto label_7F276680;
    case 0x7F276684u: goto label_7F276684;
    case 0x7F276688u: goto label_7F276688;
    case 0x7F27668Cu: goto label_7F27668C;
    case 0x7F276690u: goto label_7F276690;
    case 0x7F276694u: goto label_7F276694;
    case 0x7F276698u: goto label_7F276698;
    case 0x7F27669Cu: goto label_7F27669C;
    case 0x7F2766A0u: goto label_7F2766A0;
    case 0x7F2766A4u: goto label_7F2766A4;
    case 0x7F2766A8u: goto label_7F2766A8;
    case 0x7F2766ACu: goto label_7F2766AC;
    case 0x7F2766B0u: goto label_7F2766B0;
    case 0x7F2766B4u: goto label_7F2766B4;
    case 0x7F2766B8u: goto label_7F2766B8;
    case 0x7F2766BCu: goto label_7F2766BC;
    case 0x7F2766C0u: goto label_7F2766C0;
    case 0x7F2766C4u: goto label_7F2766C4;
    case 0x7F2766C8u: goto label_7F2766C8;
    case 0x7F2766CCu: goto label_7F2766CC;
    case 0x7F2766D0u: goto label_7F2766D0;
    case 0x7F2766D4u: goto label_7F2766D4;
    case 0x7F2766D8u: goto label_7F2766D8;
    case 0x7F2766DCu: goto label_7F2766DC;
    case 0x7F2766E0u: goto label_7F2766E0;
    case 0x7F2766E4u: goto label_7F2766E4;
    case 0x7F2766E8u: goto label_7F2766E8;
    case 0x7F2766ECu: goto label_7F2766EC;
    case 0x7F2766F0u: goto label_7F2766F0;
    case 0x7F2766F4u: goto label_7F2766F4;
    case 0x7F2766F8u: goto label_7F2766F8;
    case 0x7F2766FCu: goto label_7F2766FC;
    case 0x7F276700u: goto label_7F276700;
    case 0x7F276704u: goto label_7F276704;
    case 0x7F276708u: goto label_7F276708;
    case 0x7F27670Cu: goto label_7F27670C;
    case 0x7F276710u: goto label_7F276710;
    case 0x7F276714u: goto label_7F276714;
    case 0x7F276718u: goto label_7F276718;
    case 0x7F27671Cu: goto label_7F27671C;
    case 0x7F276720u: goto label_7F276720;
    case 0x7F276724u: goto label_7F276724;
    case 0x7F276728u: goto label_7F276728;
    case 0x7F27672Cu: goto label_7F27672C;
    case 0x7F276730u: goto label_7F276730;
    case 0x7F276734u: goto label_7F276734;
    case 0x7F276738u: goto label_7F276738;
    case 0x7F27673Cu: goto label_7F27673C;
    case 0x7F276740u: goto label_7F276740;
    case 0x7F276744u: goto label_7F276744;
    case 0x7F276748u: goto label_7F276748;
    case 0x7F27674Cu: goto label_7F27674C;
    case 0x7F276750u: goto label_7F276750;
    case 0x7F276754u: goto label_7F276754;
    case 0x7F276758u: goto label_7F276758;
    case 0x7F27675Cu: goto label_7F27675C;
    case 0x7F276760u: goto label_7F276760;
    case 0x7F276764u: goto label_7F276764;
    case 0x7F276768u: goto label_7F276768;
    case 0x7F27676Cu: goto label_7F27676C;
    case 0x7F276770u: goto label_7F276770;
    case 0x7F276774u: goto label_7F276774;
    case 0x7F276778u: goto label_7F276778;
    case 0x7F27677Cu: goto label_7F27677C;
    case 0x7F276780u: goto label_7F276780;
    case 0x7F276784u: goto label_7F276784;
    case 0x7F276788u: goto label_7F276788;
    case 0x7F27678Cu: goto label_7F27678C;
    case 0x7F276790u: goto label_7F276790;
    case 0x7F276794u: goto label_7F276794;
    case 0x7F276798u: goto label_7F276798;
    case 0x7F27679Cu: goto label_7F27679C;
    case 0x7F2767A0u: goto label_7F2767A0;
    case 0x7F2767A4u: goto label_7F2767A4;
    case 0x7F2767A8u: goto label_7F2767A8;
    case 0x7F2767ACu: goto label_7F2767AC;
    case 0x7F2767B0u: goto label_7F2767B0;
    case 0x7F2767B4u: goto label_7F2767B4;
    case 0x7F2767B8u: goto label_7F2767B8;
    case 0x7F2767BCu: goto label_7F2767BC;
    case 0x7F2767C0u: goto label_7F2767C0;
    case 0x7F2767C4u: goto label_7F2767C4;
    case 0x7F2767C8u: goto label_7F2767C8;
    case 0x7F2767CCu: goto label_7F2767CC;
    case 0x7F2767D0u: goto label_7F2767D0;
    case 0x7F2767D4u: goto label_7F2767D4;
    case 0x7F2767D8u: goto label_7F2767D8;
    case 0x7F2767DCu: goto label_7F2767DC;
    case 0x7F2767E0u: goto label_7F2767E0;
    case 0x7F2767E4u: goto label_7F2767E4;
    case 0x7F2767E8u: goto label_7F2767E8;
    case 0x7F2767ECu: goto label_7F2767EC;
    case 0x7F2767F0u: goto label_7F2767F0;
    case 0x7F2767F4u: goto label_7F2767F4;
    case 0x7F2767F8u: goto label_7F2767F8;
    case 0x7F2767FCu: goto label_7F2767FC;
    case 0x7F276800u: goto label_7F276800;
    case 0x7F276804u: goto label_7F276804;
    case 0x7F276808u: goto label_7F276808;
    case 0x7F27680Cu: goto label_7F27680C;
    case 0x7F276810u: goto label_7F276810;
    case 0x7F276814u: goto label_7F276814;
    case 0x7F276818u: goto label_7F276818;
    case 0x7F27681Cu: goto label_7F27681C;
    case 0x7F276820u: goto label_7F276820;
    case 0x7F276824u: goto label_7F276824;
    case 0x7F276828u: goto label_7F276828;
    case 0x7F27682Cu: goto label_7F27682C;
    case 0x7F276830u: goto label_7F276830;
    case 0x7F276834u: goto label_7F276834;
    case 0x7F276838u: goto label_7F276838;
    case 0x7F27683Cu: goto label_7F27683C;
    case 0x7F276840u: goto label_7F276840;
    case 0x7F276844u: goto label_7F276844;
    case 0x7F276848u: goto label_7F276848;
    case 0x7F27684Cu: goto label_7F27684C;
    case 0x7F276850u: goto label_7F276850;
    case 0x7F276854u: goto label_7F276854;
    case 0x7F276858u: goto label_7F276858;
    case 0x7F27685Cu: goto label_7F27685C;
    case 0x7F276860u: goto label_7F276860;
    case 0x7F276864u: goto label_7F276864;
    case 0x7F276868u: goto label_7F276868;
    case 0x7F27686Cu: goto label_7F27686C;
    case 0x7F276870u: goto label_7F276870;
    case 0x7F276874u: goto label_7F276874;
    case 0x7F276878u: goto label_7F276878;
    case 0x7F27687Cu: goto label_7F27687C;
    case 0x7F276880u: goto label_7F276880;
    case 0x7F276884u: goto label_7F276884;
    case 0x7F276888u: goto label_7F276888;
    case 0x7F27688Cu: goto label_7F27688C;
    case 0x7F276890u: goto label_7F276890;
    case 0x7F276894u: goto label_7F276894;
    case 0x7F276898u: goto label_7F276898;
    case 0x7F27689Cu: goto label_7F27689C;
    case 0x7F2768A0u: goto label_7F2768A0;
    case 0x7F2768A4u: goto label_7F2768A4;
    case 0x7F2768A8u: goto label_7F2768A8;
    case 0x7F2768ACu: goto label_7F2768AC;
    case 0x7F2768B0u: goto label_7F2768B0;
    case 0x7F2768B4u: goto label_7F2768B4;
    case 0x7F2768B8u: goto label_7F2768B8;
    case 0x7F2768BCu: goto label_7F2768BC;
    case 0x7F2768C0u: goto label_7F2768C0;
    case 0x7F2768C4u: goto label_7F2768C4;
    case 0x7F2768C8u: goto label_7F2768C8;
    case 0x7F2768CCu: goto label_7F2768CC;
    case 0x7F2768D0u: goto label_7F2768D0;
    case 0x7F2768D4u: goto label_7F2768D4;
    case 0x7F2768D8u: goto label_7F2768D8;
    case 0x7F2768DCu: goto label_7F2768DC;
    case 0x7F2768E0u: goto label_7F2768E0;
    case 0x7F2768E4u: goto label_7F2768E4;
    case 0x7F2768E8u: goto label_7F2768E8;
    case 0x7F2768ECu: goto label_7F2768EC;
    case 0x7F2768F0u: goto label_7F2768F0;
    case 0x7F2768F4u: goto label_7F2768F4;
    case 0x7F2768F8u: goto label_7F2768F8;
    case 0x7F2768FCu: goto label_7F2768FC;
    case 0x7F276900u: goto label_7F276900;
    case 0x7F276904u: goto label_7F276904;
    case 0x7F276908u: goto label_7F276908;
    case 0x7F27690Cu: goto label_7F27690C;
    case 0x7F276910u: goto label_7F276910;
    case 0x7F276914u: goto label_7F276914;
    case 0x7F276918u: goto label_7F276918;
    case 0x7F27691Cu: goto label_7F27691C;
    case 0x7F276920u: goto label_7F276920;
    case 0x7F276924u: goto label_7F276924;
    case 0x7F276928u: goto label_7F276928;
    case 0x7F27692Cu: goto label_7F27692C;
    case 0x7F276930u: goto label_7F276930;
    case 0x7F276934u: goto label_7F276934;
    case 0x7F276938u: goto label_7F276938;
    case 0x7F27693Cu: goto label_7F27693C;
    case 0x7F276940u: goto label_7F276940;
    case 0x7F276944u: goto label_7F276944;
    case 0x7F276948u: goto label_7F276948;
    case 0x7F27694Cu: goto label_7F27694C;
    case 0x7F276950u: goto label_7F276950;
    case 0x7F276954u: goto label_7F276954;
    case 0x7F276958u: goto label_7F276958;
    case 0x7F27695Cu: goto label_7F27695C;
    case 0x7F276960u: goto label_7F276960;
    case 0x7F276964u: goto label_7F276964;
    case 0x7F276968u: goto label_7F276968;
    case 0x7F27696Cu: goto label_7F27696C;
    case 0x7F276970u: goto label_7F276970;
    case 0x7F276974u: goto label_7F276974;
    case 0x7F276978u: goto label_7F276978;
    case 0x7F27697Cu: goto label_7F27697C;
    case 0x7F276980u: goto label_7F276980;
    case 0x7F276984u: goto label_7F276984;
    case 0x7F276988u: goto label_7F276988;
    case 0x7F27698Cu: goto label_7F27698C;
    case 0x7F276990u: goto label_7F276990;
    case 0x7F276994u: goto label_7F276994;
    case 0x7F276998u: goto label_7F276998;
    case 0x7F27699Cu: goto label_7F27699C;
    case 0x7F2769A0u: goto label_7F2769A0;
    case 0x7F2769A4u: goto label_7F2769A4;
    case 0x7F2769A8u: goto label_7F2769A8;
    case 0x7F2769ACu: goto label_7F2769AC;
    case 0x7F2769B0u: goto label_7F2769B0;
    case 0x7F2769B4u: goto label_7F2769B4;
    case 0x7F2769B8u: goto label_7F2769B8;
    case 0x7F2769BCu: goto label_7F2769BC;
    case 0x7F2769C0u: goto label_7F2769C0;
    case 0x7F2769C4u: goto label_7F2769C4;
    case 0x7F2769C8u: goto label_7F2769C8;
    case 0x7F2769CCu: goto label_7F2769CC;
    case 0x7F2769D0u: goto label_7F2769D0;
    case 0x7F2769D4u: goto label_7F2769D4;
    case 0x7F2769D8u: goto label_7F2769D8;
    case 0x7F2769DCu: goto label_7F2769DC;
    case 0x7F2769E0u: goto label_7F2769E0;
    case 0x7F2769E4u: goto label_7F2769E4;
    case 0x7F2769E8u: goto label_7F2769E8;
    case 0x7F2769ECu: goto label_7F2769EC;
    case 0x7F2769F0u: goto label_7F2769F0;
    case 0x7F2769F4u: goto label_7F2769F4;
    case 0x7F2769F8u: goto label_7F2769F8;
    case 0x7F2769FCu: goto label_7F2769FC;
    case 0x7F276A00u: goto label_7F276A00;
    case 0x7F276A04u: goto label_7F276A04;
    case 0x7F276A08u: goto label_7F276A08;
    case 0x7F276A0Cu: goto label_7F276A0C;
    case 0x7F276A10u: goto label_7F276A10;
    case 0x7F276A14u: goto label_7F276A14;
    case 0x7F276A18u: goto label_7F276A18;
    case 0x7F276A1Cu: goto label_7F276A1C;
    case 0x7F276A20u: goto label_7F276A20;
    case 0x7F276A24u: goto label_7F276A24;
    case 0x7F276A28u: goto label_7F276A28;
    case 0x7F276A2Cu: goto label_7F276A2C;
    case 0x7F276A30u: goto label_7F276A30;
    case 0x7F276A34u: goto label_7F276A34;
    case 0x7F276A38u: goto label_7F276A38;
    case 0x7F276A3Cu: goto label_7F276A3C;
    case 0x7F276A40u: goto label_7F276A40;
    case 0x7F276A44u: goto label_7F276A44;
    case 0x7F276A48u: goto label_7F276A48;
    case 0x7F276A4Cu: goto label_7F276A4C;
    case 0x7F276A50u: goto label_7F276A50;
    case 0x7F276A54u: goto label_7F276A54;
    case 0x7F276A58u: goto label_7F276A58;
    case 0x7F276A5Cu: goto label_7F276A5C;
    case 0x7F276A60u: goto label_7F276A60;
    case 0x7F276A64u: goto label_7F276A64;
    case 0x7F276A68u: goto label_7F276A68;
    case 0x7F276A6Cu: goto label_7F276A6C;
    case 0x7F276A70u: goto label_7F276A70;
    case 0x7F276A74u: goto label_7F276A74;
    case 0x7F276A78u: goto label_7F276A78;
    case 0x7F276A7Cu: goto label_7F276A7C;
    case 0x7F276A80u: goto label_7F276A80;
    case 0x7F276A84u: goto label_7F276A84;
    case 0x7F276A88u: goto label_7F276A88;
    case 0x7F276A8Cu: goto label_7F276A8C;
    case 0x7F276A90u: goto label_7F276A90;
    case 0x7F276A94u: goto label_7F276A94;
    case 0x7F276A98u: goto label_7F276A98;
    case 0x7F276A9Cu: goto label_7F276A9C;
    case 0x7F276AA0u: goto label_7F276AA0;
    case 0x7F276AA4u: goto label_7F276AA4;
    case 0x7F276AA8u: goto label_7F276AA8;
    case 0x7F276AACu: goto label_7F276AAC;
    case 0x7F276AB0u: goto label_7F276AB0;
    case 0x7F276AB4u: goto label_7F276AB4;
    case 0x7F276AB8u: goto label_7F276AB8;
    case 0x7F276ABCu: goto label_7F276ABC;
    case 0x7F276AC0u: goto label_7F276AC0;
    case 0x7F276AC4u: goto label_7F276AC4;
    case 0x7F276AC8u: goto label_7F276AC8;
    case 0x7F276ACCu: goto label_7F276ACC;
    case 0x7F276AD0u: goto label_7F276AD0;
    case 0x7F276AD4u: goto label_7F276AD4;
    case 0x7F276AD8u: goto label_7F276AD8;
    case 0x7F276ADCu: goto label_7F276ADC;
    case 0x7F276AE0u: goto label_7F276AE0;
    case 0x7F276AE4u: goto label_7F276AE4;
    case 0x7F276AE8u: goto label_7F276AE8;
    case 0x7F276AECu: goto label_7F276AEC;
    case 0x7F276AF0u: goto label_7F276AF0;
    case 0x7F276AF4u: goto label_7F276AF4;
    case 0x7F276AF8u: goto label_7F276AF8;
    case 0x7F276AFCu: goto label_7F276AFC;
    case 0x7F276B00u: goto label_7F276B00;
    case 0x7F276B04u: goto label_7F276B04;
    case 0x7F276B08u: goto label_7F276B08;
    case 0x7F276B0Cu: goto label_7F276B0C;
    case 0x7F276B10u: goto label_7F276B10;
    case 0x7F276B14u: goto label_7F276B14;
    case 0x7F276B18u: goto label_7F276B18;
    case 0x7F276B1Cu: goto label_7F276B1C;
    case 0x7F276B20u: goto label_7F276B20;
    case 0x7F276B24u: goto label_7F276B24;
    case 0x7F276B28u: goto label_7F276B28;
    case 0x7F276B2Cu: goto label_7F276B2C;
    case 0x7F276B30u: goto label_7F276B30;
    case 0x7F276B34u: goto label_7F276B34;
    case 0x7F276B38u: goto label_7F276B38;
    case 0x7F276B3Cu: goto label_7F276B3C;
    case 0x7F276B40u: goto label_7F276B40;
    case 0x7F276B44u: goto label_7F276B44;
    case 0x7F276B48u: goto label_7F276B48;
    case 0x7F276B4Cu: goto label_7F276B4C;
    case 0x7F276B50u: goto label_7F276B50;
    case 0x7F276B54u: goto label_7F276B54;
    case 0x7F276B58u: goto label_7F276B58;
    case 0x7F276B5Cu: goto label_7F276B5C;
    case 0x7F276B60u: goto label_7F276B60;
    case 0x7F276B64u: goto label_7F276B64;
    case 0x7F276B68u: goto label_7F276B68;
    case 0x7F276B6Cu: goto label_7F276B6C;
    case 0x7F276B70u: goto label_7F276B70;
    case 0x7F276B74u: goto label_7F276B74;
    case 0x7F276B78u: goto label_7F276B78;
    case 0x7F276B7Cu: goto label_7F276B7C;
    case 0x7F276B80u: goto label_7F276B80;
    case 0x7F276B84u: goto label_7F276B84;
    case 0x7F276B88u: goto label_7F276B88;
    case 0x7F276B8Cu: goto label_7F276B8C;
    case 0x7F276B90u: goto label_7F276B90;
    case 0x7F276B94u: goto label_7F276B94;
    case 0x7F276B98u: goto label_7F276B98;
    case 0x7F276B9Cu: goto label_7F276B9C;
    case 0x7F276BA0u: goto label_7F276BA0;
    case 0x7F276BA4u: goto label_7F276BA4;
    case 0x7F276BA8u: goto label_7F276BA8;
    case 0x7F276BACu: goto label_7F276BAC;
    case 0x7F276BB0u: goto label_7F276BB0;
    case 0x7F276BB4u: goto label_7F276BB4;
    case 0x7F276BB8u: goto label_7F276BB8;
    case 0x7F276BBCu: goto label_7F276BBC;
    case 0x7F276BC0u: goto label_7F276BC0;
    case 0x7F276BC4u: goto label_7F276BC4;
    case 0x7F276BC8u: goto label_7F276BC8;
    case 0x7F276BCCu: goto label_7F276BCC;
    case 0x7F276BD0u: goto label_7F276BD0;
    case 0x7F276BD4u: goto label_7F276BD4;
    case 0x7F276BD8u: goto label_7F276BD8;
    case 0x7F276BDCu: goto label_7F276BDC;
    case 0x7F276BE0u: goto label_7F276BE0;
    case 0x7F276BE4u: goto label_7F276BE4;
    case 0x7F276BE8u: goto label_7F276BE8;
    case 0x7F276BECu: goto label_7F276BEC;
    case 0x7F276BF0u: goto label_7F276BF0;
    case 0x7F276BF4u: goto label_7F276BF4;
    case 0x7F276BF8u: goto label_7F276BF8;
    case 0x7F276BFCu: goto label_7F276BFC;
    case 0x7F276C00u: goto label_7F276C00;
    case 0x7F276C04u: goto label_7F276C04;
    case 0x7F276C08u: goto label_7F276C08;
    case 0x7F276C0Cu: goto label_7F276C0C;
    case 0x7F276C10u: goto label_7F276C10;
    case 0x7F276C14u: goto label_7F276C14;
    case 0x7F276C18u: goto label_7F276C18;
    case 0x7F276C1Cu: goto label_7F276C1C;
    case 0x7F276C20u: goto label_7F276C20;
    case 0x7F276C24u: goto label_7F276C24;
    case 0x7F276C28u: goto label_7F276C28;
    case 0x7F276C2Cu: goto label_7F276C2C;
    case 0x7F276C30u: goto label_7F276C30;
    case 0x7F276C34u: goto label_7F276C34;
    case 0x7F276C38u: goto label_7F276C38;
    case 0x7F276C3Cu: goto label_7F276C3C;
    case 0x7F276C40u: goto label_7F276C40;
    case 0x7F276C44u: goto label_7F276C44;
    case 0x7F276C48u: goto label_7F276C48;
    case 0x7F276C4Cu: goto label_7F276C4C;
    case 0x7F276C50u: goto label_7F276C50;
    case 0x7F276C54u: goto label_7F276C54;
    case 0x7F276C58u: goto label_7F276C58;
    case 0x7F276C5Cu: goto label_7F276C5C;
    case 0x7F276C60u: goto label_7F276C60;
    case 0x7F276C64u: goto label_7F276C64;
    case 0x7F276C68u: goto label_7F276C68;
    case 0x7F276C6Cu: goto label_7F276C6C;
    case 0x7F276C70u: goto label_7F276C70;
    case 0x7F276C74u: goto label_7F276C74;
    case 0x7F276C78u: goto label_7F276C78;
    case 0x7F276C7Cu: goto label_7F276C7C;
    case 0x7F276C80u: goto label_7F276C80;
    case 0x7F276C84u: goto label_7F276C84;
    case 0x7F276C88u: goto label_7F276C88;
    case 0x7F276C8Cu: goto label_7F276C8C;
    case 0x7F276C90u: goto label_7F276C90;
    case 0x7F276C94u: goto label_7F276C94;
    case 0x7F276C98u: goto label_7F276C98;
    case 0x7F276C9Cu: goto label_7F276C9C;
    case 0x7F276CA0u: goto label_7F276CA0;
    case 0x7F276CA4u: goto label_7F276CA4;
    case 0x7F276CA8u: goto label_7F276CA8;
    case 0x7F276CACu: goto label_7F276CAC;
    case 0x7F276CB0u: goto label_7F276CB0;
    case 0x7F276CB4u: goto label_7F276CB4;
    case 0x7F276CB8u: goto label_7F276CB8;
    case 0x7F276CBCu: goto label_7F276CBC;
    case 0x7F276CC0u: goto label_7F276CC0;
    case 0x7F276CC4u: goto label_7F276CC4;
    case 0x7F276CC8u: goto label_7F276CC8;
    case 0x7F276CCCu: goto label_7F276CCC;
    case 0x7F276CD0u: goto label_7F276CD0;
    case 0x7F276CD4u: goto label_7F276CD4;
    case 0x7F276CD8u: goto label_7F276CD8;
    case 0x7F276CDCu: goto label_7F276CDC;
    case 0x7F276CE0u: goto label_7F276CE0;
    case 0x7F276CE4u: goto label_7F276CE4;
    case 0x7F276CE8u: goto label_7F276CE8;
    case 0x7F276CECu: goto label_7F276CEC;
    case 0x7F276CF0u: goto label_7F276CF0;
    case 0x7F276CF4u: goto label_7F276CF4;
    case 0x7F276CF8u: goto label_7F276CF8;
    case 0x7F276CFCu: goto label_7F276CFC;
    case 0x7F276D00u: goto label_7F276D00;
    case 0x7F276D04u: goto label_7F276D04;
    case 0x7F276D08u: goto label_7F276D08;
    case 0x7F276D0Cu: goto label_7F276D0C;
    case 0x7F276D10u: goto label_7F276D10;
    case 0x7F276D14u: goto label_7F276D14;
    case 0x7F276D18u: goto label_7F276D18;
    case 0x7F276D1Cu: goto label_7F276D1C;
    case 0x7F276D20u: goto label_7F276D20;
    case 0x7F276D24u: goto label_7F276D24;
    case 0x7F276D28u: goto label_7F276D28;
    case 0x7F276D2Cu: goto label_7F276D2C;
    case 0x7F276D30u: goto label_7F276D30;
    case 0x7F276D34u: goto label_7F276D34;
    case 0x7F276D38u: goto label_7F276D38;
    case 0x7F276D3Cu: goto label_7F276D3C;
    case 0x7F276D40u: goto label_7F276D40;
    case 0x7F276D44u: goto label_7F276D44;
    case 0x7F276D48u: goto label_7F276D48;
    case 0x7F276D4Cu: goto label_7F276D4C;
    case 0x7F276D50u: goto label_7F276D50;
    case 0x7F276D54u: goto label_7F276D54;
    case 0x7F276D58u: goto label_7F276D58;
    case 0x7F276D5Cu: goto label_7F276D5C;
    case 0x7F276D60u: goto label_7F276D60;
    case 0x7F276D64u: goto label_7F276D64;
    case 0x7F276D68u: goto label_7F276D68;
    case 0x7F276D6Cu: goto label_7F276D6C;
    case 0x7F276D70u: goto label_7F276D70;
    case 0x7F276D74u: goto label_7F276D74;
    case 0x7F276D78u: goto label_7F276D78;
    case 0x7F276D7Cu: goto label_7F276D7C;
    case 0x7F276D80u: goto label_7F276D80;
    case 0x7F276D84u: goto label_7F276D84;
    case 0x7F276D88u: goto label_7F276D88;
    case 0x7F276D8Cu: goto label_7F276D8C;
    case 0x7F276D90u: goto label_7F276D90;
    case 0x7F276D94u: goto label_7F276D94;
    case 0x7F276D98u: goto label_7F276D98;
    case 0x7F276D9Cu: goto label_7F276D9C;
    case 0x7F276DA0u: goto label_7F276DA0;
    case 0x7F276DA4u: goto label_7F276DA4;
    case 0x7F276DA8u: goto label_7F276DA8;
    case 0x7F276DACu: goto label_7F276DAC;
    case 0x7F276DB0u: goto label_7F276DB0;
    case 0x7F276DB4u: goto label_7F276DB4;
    case 0x7F276DB8u: goto label_7F276DB8;
    case 0x7F276DBCu: goto label_7F276DBC;
    case 0x7F276DC0u: goto label_7F276DC0;
    case 0x7F276DC4u: goto label_7F276DC4;
    case 0x7F276DC8u: goto label_7F276DC8;
    case 0x7F276DCCu: goto label_7F276DCC;
    case 0x7F276DD0u: goto label_7F276DD0;
    case 0x7F276DD4u: goto label_7F276DD4;
    case 0x7F276DD8u: goto label_7F276DD8;
    case 0x7F276DDCu: goto label_7F276DDC;
    case 0x7F276DE0u: goto label_7F276DE0;
    case 0x7F276DE4u: goto label_7F276DE4;
    case 0x7F276DE8u: goto label_7F276DE8;
    case 0x7F276DECu: goto label_7F276DEC;
    case 0x7F276DF0u: goto label_7F276DF0;
    case 0x7F276DF4u: goto label_7F276DF4;
    case 0x7F276DF8u: goto label_7F276DF8;
    case 0x7F276DFCu: goto label_7F276DFC;
    case 0x7F276E00u: goto label_7F276E00;
    case 0x7F276E04u: goto label_7F276E04;
    case 0x7F276E08u: goto label_7F276E08;
    case 0x7F276E0Cu: goto label_7F276E0C;
    case 0x7F276E10u: goto label_7F276E10;
    case 0x7F276E14u: goto label_7F276E14;
    case 0x7F276E18u: goto label_7F276E18;
    case 0x7F276E1Cu: goto label_7F276E1C;
    case 0x7F276E20u: goto label_7F276E20;
    case 0x7F276E24u: goto label_7F276E24;
    case 0x7F276E28u: goto label_7F276E28;
    case 0x7F276E2Cu: goto label_7F276E2C;
    case 0x7F276E30u: goto label_7F276E30;
    case 0x7F276E34u: goto label_7F276E34;
    case 0x7F276E38u: goto label_7F276E38;
    case 0x7F276E3Cu: goto label_7F276E3C;
    case 0x7F276E40u: goto label_7F276E40;
    case 0x7F276E44u: goto label_7F276E44;
    case 0x7F276E48u: goto label_7F276E48;
    case 0x7F276E4Cu: goto label_7F276E4C;
    case 0x7F276E50u: goto label_7F276E50;
    case 0x7F276E54u: goto label_7F276E54;
    case 0x7F276E58u: goto label_7F276E58;
    case 0x7F276E5Cu: goto label_7F276E5C;
    case 0x7F276E60u: goto label_7F276E60;
    case 0x7F276E64u: goto label_7F276E64;
    case 0x7F276E68u: goto label_7F276E68;
    case 0x7F276E6Cu: goto label_7F276E6C;
    case 0x7F276E70u: goto label_7F276E70;
    case 0x7F276E74u: goto label_7F276E74;
    case 0x7F276E78u: goto label_7F276E78;
    case 0x7F276E7Cu: goto label_7F276E7C;
    case 0x7F276E80u: goto label_7F276E80;
    case 0x7F276E84u: goto label_7F276E84;
    case 0x7F276E88u: goto label_7F276E88;
    case 0x7F276E8Cu: goto label_7F276E8C;
    case 0x7F276E90u: goto label_7F276E90;
    case 0x7F276E94u: goto label_7F276E94;
    case 0x7F276E98u: goto label_7F276E98;
    case 0x7F276E9Cu: goto label_7F276E9C;
    case 0x7F276EA0u: goto label_7F276EA0;
    case 0x7F276EA4u: goto label_7F276EA4;
    case 0x7F276EA8u: goto label_7F276EA8;
    case 0x7F276EACu: goto label_7F276EAC;
    case 0x7F276EB0u: goto label_7F276EB0;
    case 0x7F276EB4u: goto label_7F276EB4;
    case 0x7F276EB8u: goto label_7F276EB8;
    case 0x7F276EBCu: goto label_7F276EBC;
    case 0x7F276EC0u: goto label_7F276EC0;
    case 0x7F276EC4u: goto label_7F276EC4;
    case 0x7F276EC8u: goto label_7F276EC8;
    case 0x7F276ECCu: goto label_7F276ECC;
    case 0x7F276ED0u: goto label_7F276ED0;
    case 0x7F276ED4u: goto label_7F276ED4;
    case 0x7F276ED8u: goto label_7F276ED8;
    case 0x7F276EDCu: goto label_7F276EDC;
    case 0x7F276EE0u: goto label_7F276EE0;
    case 0x7F276EE4u: goto label_7F276EE4;
    case 0x7F276EE8u: goto label_7F276EE8;
    case 0x7F276EECu: goto label_7F276EEC;
    case 0x7F276EF0u: goto label_7F276EF0;
    case 0x7F276EF4u: goto label_7F276EF4;
    case 0x7F276EF8u: goto label_7F276EF8;
    case 0x7F276EFCu: goto label_7F276EFC;
    case 0x7F276F00u: goto label_7F276F00;
    case 0x7F276F04u: goto label_7F276F04;
    case 0x7F276F08u: goto label_7F276F08;
    case 0x7F276F0Cu: goto label_7F276F0C;
    case 0x7F276F10u: goto label_7F276F10;
    case 0x7F276F14u: goto label_7F276F14;
    case 0x7F276F18u: goto label_7F276F18;
    case 0x7F276F1Cu: goto label_7F276F1C;
    case 0x7F276F20u: goto label_7F276F20;
    case 0x7F276F24u: goto label_7F276F24;
    case 0x7F276F28u: goto label_7F276F28;
    case 0x7F276F2Cu: goto label_7F276F2C;
    case 0x7F276F30u: goto label_7F276F30;
    case 0x7F276F34u: goto label_7F276F34;
    case 0x7F276F38u: goto label_7F276F38;
    case 0x7F276F3Cu: goto label_7F276F3C;
    case 0x7F276F40u: goto label_7F276F40;
    case 0x7F276F44u: goto label_7F276F44;
    case 0x7F276F48u: goto label_7F276F48;
    case 0x7F276F4Cu: goto label_7F276F4C;
    case 0x7F276F50u: goto label_7F276F50;
    case 0x7F276F54u: goto label_7F276F54;
    case 0x7F276F58u: goto label_7F276F58;
    case 0x7F276F5Cu: goto label_7F276F5C;
    case 0x7F276F60u: goto label_7F276F60;
    case 0x7F276F64u: goto label_7F276F64;
    case 0x7F276F68u: goto label_7F276F68;
    case 0x7F276F6Cu: goto label_7F276F6C;
    case 0x7F276F70u: goto label_7F276F70;
    case 0x7F276F74u: goto label_7F276F74;
    case 0x7F276F78u: goto label_7F276F78;
    case 0x7F276F7Cu: goto label_7F276F7C;
    case 0x7F276F80u: goto label_7F276F80;
    case 0x7F276F84u: goto label_7F276F84;
    case 0x7F276F88u: goto label_7F276F88;
    case 0x7F276F8Cu: goto label_7F276F8C;
    case 0x7F276F90u: goto label_7F276F90;
    case 0x7F276F94u: goto label_7F276F94;
    case 0x7F276F98u: goto label_7F276F98;
    case 0x7F276F9Cu: goto label_7F276F9C;
    case 0x7F276FA0u: goto label_7F276FA0;
    case 0x7F276FA4u: goto label_7F276FA4;
    case 0x7F276FA8u: goto label_7F276FA8;
    case 0x7F276FACu: goto label_7F276FAC;
    case 0x7F276FB0u: goto label_7F276FB0;
    case 0x7F276FB4u: goto label_7F276FB4;
    case 0x7F276FB8u: goto label_7F276FB8;
    case 0x7F276FBCu: goto label_7F276FBC;
    case 0x7F276FC0u: goto label_7F276FC0;
    case 0x7F276FC4u: goto label_7F276FC4;
    case 0x7F276FC8u: goto label_7F276FC8;
    case 0x7F276FCCu: goto label_7F276FCC;
    case 0x7F276FD0u: goto label_7F276FD0;
    case 0x7F276FD4u: goto label_7F276FD4;
    case 0x7F276FD8u: goto label_7F276FD8;
    case 0x7F276FDCu: goto label_7F276FDC;
    case 0x7F276FE0u: goto label_7F276FE0;
    case 0x7F276FE4u: goto label_7F276FE4;
    case 0x7F276FE8u: goto label_7F276FE8;
    case 0x7F276FECu: goto label_7F276FEC;
    case 0x7F276FF0u: goto label_7F276FF0;
    case 0x7F276FF4u: goto label_7F276FF4;
    case 0x7F276FF8u: goto label_7F276FF8;
    case 0x7F276FFCu: goto label_7F276FFC;
    case 0x7F277000u: goto label_7F277000;
    case 0x7F277004u: goto label_7F277004;
    case 0x7F277008u: goto label_7F277008;
    case 0x7F27700Cu: goto label_7F27700C;
    case 0x7F277010u: goto label_7F277010;
    case 0x7F277014u: goto label_7F277014;
    case 0x7F277018u: goto label_7F277018;
    case 0x7F27701Cu: goto label_7F27701C;
    case 0x7F277020u: goto label_7F277020;
    case 0x7F277024u: goto label_7F277024;
    case 0x7F277028u: goto label_7F277028;
    case 0x7F27702Cu: goto label_7F27702C;
    case 0x7F277030u: goto label_7F277030;
    case 0x7F277034u: goto label_7F277034;
    case 0x7F277038u: goto label_7F277038;
    case 0x7F27703Cu: goto label_7F27703C;
    case 0x7F277040u: goto label_7F277040;
    case 0x7F277044u: goto label_7F277044;
    case 0x7F277048u: goto label_7F277048;
    case 0x7F27704Cu: goto label_7F27704C;
    case 0x7F277050u: goto label_7F277050;
    case 0x7F277054u: goto label_7F277054;
    case 0x7F277058u: goto label_7F277058;
    case 0x7F27705Cu: goto label_7F27705C;
    case 0x7F277060u: goto label_7F277060;
    case 0x7F277064u: goto label_7F277064;
    case 0x7F277068u: goto label_7F277068;
    case 0x7F27706Cu: goto label_7F27706C;
    case 0x7F277070u: goto label_7F277070;
    case 0x7F277074u: goto label_7F277074;
    case 0x7F277078u: goto label_7F277078;
    case 0x7F27707Cu: goto label_7F27707C;
    case 0x7F277080u: goto label_7F277080;
    case 0x7F277084u: goto label_7F277084;
    case 0x7F277088u: goto label_7F277088;
    case 0x7F27708Cu: goto label_7F27708C;
    case 0x7F277090u: goto label_7F277090;
    case 0x7F277094u: goto label_7F277094;
    case 0x7F277098u: goto label_7F277098;
    case 0x7F27709Cu: goto label_7F27709C;
    case 0x7F2770A0u: goto label_7F2770A0;
    case 0x7F2770A4u: goto label_7F2770A4;
    case 0x7F2770A8u: goto label_7F2770A8;
    case 0x7F2770ACu: goto label_7F2770AC;
    case 0x7F2770B0u: goto label_7F2770B0;
    case 0x7F2770B4u: goto label_7F2770B4;
    case 0x7F2770B8u: goto label_7F2770B8;
    case 0x7F2770BCu: goto label_7F2770BC;
    case 0x7F2770C0u: goto label_7F2770C0;
    case 0x7F2770C4u: goto label_7F2770C4;
    case 0x7F2770C8u: goto label_7F2770C8;
    case 0x7F2770CCu: goto label_7F2770CC;
    case 0x7F2770D0u: goto label_7F2770D0;
    case 0x7F2770D4u: goto label_7F2770D4;
    case 0x7F2770D8u: goto label_7F2770D8;
    case 0x7F2770DCu: goto label_7F2770DC;
    case 0x7F2770E0u: goto label_7F2770E0;
    case 0x7F2770E4u: goto label_7F2770E4;
    case 0x7F2770E8u: goto label_7F2770E8;
    case 0x7F2770ECu: goto label_7F2770EC;
    case 0x7F2770F0u: goto label_7F2770F0;
    case 0x7F2770F4u: goto label_7F2770F4;
    case 0x7F2770F8u: goto label_7F2770F8;
    case 0x7F2770FCu: goto label_7F2770FC;
    case 0x7F277100u: goto label_7F277100;
    case 0x7F277104u: goto label_7F277104;
    case 0x7F277108u: goto label_7F277108;
    case 0x7F27710Cu: goto label_7F27710C;
    case 0x7F277110u: goto label_7F277110;
    case 0x7F277114u: goto label_7F277114;
    case 0x7F277118u: goto label_7F277118;
    case 0x7F27711Cu: goto label_7F27711C;
    case 0x7F277120u: goto label_7F277120;
    case 0x7F277124u: goto label_7F277124;
    case 0x7F277128u: goto label_7F277128;
    case 0x7F27712Cu: goto label_7F27712C;
    case 0x7F277130u: goto label_7F277130;
    case 0x7F277134u: goto label_7F277134;
    case 0x7F277138u: goto label_7F277138;
    case 0x7F27713Cu: goto label_7F27713C;
    case 0x7F277140u: goto label_7F277140;
    case 0x7F277144u: goto label_7F277144;
    case 0x7F277148u: goto label_7F277148;
    case 0x7F27714Cu: goto label_7F27714C;
    case 0x7F277150u: goto label_7F277150;
    case 0x7F277154u: goto label_7F277154;
    case 0x7F277158u: goto label_7F277158;
    case 0x7F27715Cu: goto label_7F27715C;
    case 0x7F277160u: goto label_7F277160;
    case 0x7F277164u: goto label_7F277164;
    case 0x7F277168u: goto label_7F277168;
    case 0x7F27716Cu: goto label_7F27716C;
    case 0x7F277170u: goto label_7F277170;
    case 0x7F277174u: goto label_7F277174;
    case 0x7F277178u: goto label_7F277178;
    case 0x7F27717Cu: goto label_7F27717C;
    case 0x7F277180u: goto label_7F277180;
    case 0x7F277184u: goto label_7F277184;
    case 0x7F277188u: goto label_7F277188;
    case 0x7F27718Cu: goto label_7F27718C;
    case 0x7F277190u: goto label_7F277190;
    case 0x7F277194u: goto label_7F277194;
    case 0x7F277198u: goto label_7F277198;
    case 0x7F27719Cu: goto label_7F27719C;
    case 0x7F2771A0u: goto label_7F2771A0;
    case 0x7F2771A4u: goto label_7F2771A4;
    case 0x7F2771A8u: goto label_7F2771A8;
    case 0x7F2771ACu: goto label_7F2771AC;
    case 0x7F2771B0u: goto label_7F2771B0;
    case 0x7F2771B4u: goto label_7F2771B4;
    case 0x7F2771B8u: goto label_7F2771B8;
    case 0x7F2771BCu: goto label_7F2771BC;
    case 0x7F2771C0u: goto label_7F2771C0;
    case 0x7F2771C4u: goto label_7F2771C4;
    case 0x7F2771C8u: goto label_7F2771C8;
    case 0x7F2771CCu: goto label_7F2771CC;
    case 0x7F2771D0u: goto label_7F2771D0;
    case 0x7F2771D4u: goto label_7F2771D4;
    case 0x7F2771D8u: goto label_7F2771D8;
    case 0x7F2771DCu: goto label_7F2771DC;
    case 0x7F2771E0u: goto label_7F2771E0;
    case 0x7F2771E4u: goto label_7F2771E4;
    case 0x7F2771E8u: goto label_7F2771E8;
    case 0x7F2771ECu: goto label_7F2771EC;
    case 0x7F2771F0u: goto label_7F2771F0;
    case 0x7F2771F4u: goto label_7F2771F4;
    case 0x7F2771F8u: goto label_7F2771F8;
    case 0x7F2771FCu: goto label_7F2771FC;
    case 0x7F277200u: goto label_7F277200;
    case 0x7F277204u: goto label_7F277204;
    case 0x7F277208u: goto label_7F277208;
    case 0x7F27720Cu: goto label_7F27720C;
    case 0x7F277210u: goto label_7F277210;
    case 0x7F277214u: goto label_7F277214;
    case 0x7F277218u: goto label_7F277218;
    case 0x7F27721Cu: goto label_7F27721C;
    case 0x7F277220u: goto label_7F277220;
    case 0x7F277224u: goto label_7F277224;
    case 0x7F277228u: goto label_7F277228;
    case 0x7F27722Cu: goto label_7F27722C;
    case 0x7F277230u: goto label_7F277230;
    case 0x7F277234u: goto label_7F277234;
    case 0x7F277238u: goto label_7F277238;
    case 0x7F27723Cu: goto label_7F27723C;
    case 0x7F277240u: goto label_7F277240;
    case 0x7F277244u: goto label_7F277244;
    case 0x7F277248u: goto label_7F277248;
    case 0x7F27724Cu: goto label_7F27724C;
    case 0x7F277250u: goto label_7F277250;
    case 0x7F277254u: goto label_7F277254;
    case 0x7F277258u: goto label_7F277258;
    case 0x7F27725Cu: goto label_7F27725C;
    case 0x7F277260u: goto label_7F277260;
    case 0x7F277264u: goto label_7F277264;
    case 0x7F277268u: goto label_7F277268;
    case 0x7F27726Cu: goto label_7F27726C;
    case 0x7F277270u: goto label_7F277270;
    case 0x7F277274u: goto label_7F277274;
    case 0x7F277278u: goto label_7F277278;
    case 0x7F27727Cu: goto label_7F27727C;
    case 0x7F277280u: goto label_7F277280;
    case 0x7F277284u: goto label_7F277284;
    case 0x7F277288u: goto label_7F277288;
    case 0x7F27728Cu: goto label_7F27728C;
    case 0x7F277290u: goto label_7F277290;
    case 0x7F277294u: goto label_7F277294;
    case 0x7F277298u: goto label_7F277298;
    case 0x7F27729Cu: goto label_7F27729C;
    case 0x7F2772A0u: goto label_7F2772A0;
    case 0x7F2772A4u: goto label_7F2772A4;
    case 0x7F2772A8u: goto label_7F2772A8;
    case 0x7F2772ACu: goto label_7F2772AC;
    case 0x7F2772B0u: goto label_7F2772B0;
    case 0x7F2772B4u: goto label_7F2772B4;
    case 0x7F2772B8u: goto label_7F2772B8;
    case 0x7F2772BCu: goto label_7F2772BC;
    case 0x7F2772C0u: goto label_7F2772C0;
    case 0x7F2772C4u: goto label_7F2772C4;
    case 0x7F2772C8u: goto label_7F2772C8;
    case 0x7F2772CCu: goto label_7F2772CC;
    case 0x7F2772D0u: goto label_7F2772D0;
    case 0x7F2772D4u: goto label_7F2772D4;
    case 0x7F2772D8u: goto label_7F2772D8;
    case 0x7F2772DCu: goto label_7F2772DC;
    case 0x7F2772E0u: goto label_7F2772E0;
    case 0x7F2772E4u: goto label_7F2772E4;
    case 0x7F2772E8u: goto label_7F2772E8;
    case 0x7F2772ECu: goto label_7F2772EC;
    case 0x7F2772F0u: goto label_7F2772F0;
    case 0x7F2772F4u: goto label_7F2772F4;
    case 0x7F2772F8u: goto label_7F2772F8;
    case 0x7F2772FCu: goto label_7F2772FC;
    case 0x7F277300u: goto label_7F277300;
    case 0x7F277304u: goto label_7F277304;
    case 0x7F277308u: goto label_7F277308;
    case 0x7F27730Cu: goto label_7F27730C;
    case 0x7F277310u: goto label_7F277310;
    case 0x7F277314u: goto label_7F277314;
    case 0x7F277318u: goto label_7F277318;
    case 0x7F27731Cu: goto label_7F27731C;
    case 0x7F277320u: goto label_7F277320;
    case 0x7F277324u: goto label_7F277324;
    case 0x7F277328u: goto label_7F277328;
    case 0x7F27732Cu: goto label_7F27732C;
    case 0x7F277330u: goto label_7F277330;
    case 0x7F277334u: goto label_7F277334;
    case 0x7F277338u: goto label_7F277338;
    case 0x7F27733Cu: goto label_7F27733C;
    case 0x7F277340u: goto label_7F277340;
    case 0x7F277344u: goto label_7F277344;
    case 0x7F277348u: goto label_7F277348;
    case 0x7F27734Cu: goto label_7F27734C;
    case 0x7F277350u: goto label_7F277350;
    case 0x7F277354u: goto label_7F277354;
    case 0x7F277358u: goto label_7F277358;
    case 0x7F27735Cu: goto label_7F27735C;
    case 0x7F277360u: goto label_7F277360;
    case 0x7F277364u: goto label_7F277364;
    case 0x7F277368u: goto label_7F277368;
    case 0x7F27736Cu: goto label_7F27736C;
    case 0x7F277370u: goto label_7F277370;
    case 0x7F277374u: goto label_7F277374;
    case 0x7F277378u: goto label_7F277378;
    case 0x7F27737Cu: goto label_7F27737C;
    case 0x7F277380u: goto label_7F277380;
    case 0x7F277384u: goto label_7F277384;
    case 0x7F277388u: goto label_7F277388;
    case 0x7F27738Cu: goto label_7F27738C;
    case 0x7F277390u: goto label_7F277390;
    case 0x7F277394u: goto label_7F277394;
    case 0x7F277398u: goto label_7F277398;
    case 0x7F27739Cu: goto label_7F27739C;
    case 0x7F2773A0u: goto label_7F2773A0;
    case 0x7F2773A4u: goto label_7F2773A4;
    case 0x7F2773A8u: goto label_7F2773A8;
    case 0x7F2773ACu: goto label_7F2773AC;
    case 0x7F2773B0u: goto label_7F2773B0;
    case 0x7F2773B4u: goto label_7F2773B4;
    case 0x7F2773B8u: goto label_7F2773B8;
    case 0x7F2773BCu: goto label_7F2773BC;
    case 0x7F2773C0u: goto label_7F2773C0;
    case 0x7F2773C4u: goto label_7F2773C4;
    case 0x7F2773C8u: goto label_7F2773C8;
    case 0x7F2773CCu: goto label_7F2773CC;
    case 0x7F2773D0u: goto label_7F2773D0;
    case 0x7F2773D4u: goto label_7F2773D4;
    case 0x7F2773D8u: goto label_7F2773D8;
    case 0x7F2773DCu: goto label_7F2773DC;
    case 0x7F2773E0u: goto label_7F2773E0;
    case 0x7F2773E4u: goto label_7F2773E4;
    case 0x7F2773E8u: goto label_7F2773E8;
    case 0x7F2773ECu: goto label_7F2773EC;
    case 0x7F2773F0u: goto label_7F2773F0;
    case 0x7F2773F4u: goto label_7F2773F4;
    case 0x7F2773F8u: goto label_7F2773F8;
    case 0x7F2773FCu: goto label_7F2773FC;
    case 0x7F277400u: goto label_7F277400;
    case 0x7F277404u: goto label_7F277404;
    case 0x7F277408u: goto label_7F277408;
    case 0x7F27740Cu: goto label_7F27740C;
    case 0x7F277410u: goto label_7F277410;
    case 0x7F277414u: goto label_7F277414;
    case 0x7F277418u: goto label_7F277418;
    case 0x7F27741Cu: goto label_7F27741C;
    case 0x7F277420u: goto label_7F277420;
    case 0x7F277424u: goto label_7F277424;
    case 0x7F277428u: goto label_7F277428;
    case 0x7F27742Cu: goto label_7F27742C;
    case 0x7F277430u: goto label_7F277430;
    case 0x7F277434u: goto label_7F277434;
    case 0x7F277438u: goto label_7F277438;
    case 0x7F27743Cu: goto label_7F27743C;
    case 0x7F277440u: goto label_7F277440;
    case 0x7F277444u: goto label_7F277444;
    case 0x7F277448u: goto label_7F277448;
    case 0x7F27744Cu: goto label_7F27744C;
    case 0x7F277450u: goto label_7F277450;
    case 0x7F277454u: goto label_7F277454;
    case 0x7F277458u: goto label_7F277458;
    case 0x7F27745Cu: goto label_7F27745C;
    case 0x7F277460u: goto label_7F277460;
    case 0x7F277464u: goto label_7F277464;
    case 0x7F277468u: goto label_7F277468;
    case 0x7F27746Cu: goto label_7F27746C;
    case 0x7F277470u: goto label_7F277470;
    case 0x7F277474u: goto label_7F277474;
    case 0x7F277478u: goto label_7F277478;
    case 0x7F27747Cu: goto label_7F27747C;
    case 0x7F277480u: goto label_7F277480;
    case 0x7F277484u: goto label_7F277484;
    case 0x7F277488u: goto label_7F277488;
    case 0x7F27748Cu: goto label_7F27748C;
    case 0x7F277490u: goto label_7F277490;
    case 0x7F277494u: goto label_7F277494;
    case 0x7F277498u: goto label_7F277498;
    case 0x7F27749Cu: goto label_7F27749C;
    case 0x7F2774A0u: goto label_7F2774A0;
    case 0x7F2774A4u: goto label_7F2774A4;
    case 0x7F2774A8u: goto label_7F2774A8;
    case 0x7F2774ACu: goto label_7F2774AC;
    case 0x7F2774B0u: goto label_7F2774B0;
    case 0x7F2774B4u: goto label_7F2774B4;
    case 0x7F2774B8u: goto label_7F2774B8;
    case 0x7F2774BCu: goto label_7F2774BC;
    case 0x7F2774C0u: goto label_7F2774C0;
    case 0x7F2774C4u: goto label_7F2774C4;
    case 0x7F2774C8u: goto label_7F2774C8;
    case 0x7F2774CCu: goto label_7F2774CC;
    case 0x7F2774D0u: goto label_7F2774D0;
    case 0x7F2774D4u: goto label_7F2774D4;
    case 0x7F2774D8u: goto label_7F2774D8;
    case 0x7F2774DCu: goto label_7F2774DC;
    case 0x7F2774E0u: goto label_7F2774E0;
    case 0x7F2774E4u: goto label_7F2774E4;
    case 0x7F2774E8u: goto label_7F2774E8;
    case 0x7F2774ECu: goto label_7F2774EC;
    case 0x7F2774F0u: goto label_7F2774F0;
    case 0x7F2774F4u: goto label_7F2774F4;
    case 0x7F2774F8u: goto label_7F2774F8;
    case 0x7F2774FCu: goto label_7F2774FC;
    case 0x7F277500u: goto label_7F277500;
    case 0x7F277504u: goto label_7F277504;
    case 0x7F277508u: goto label_7F277508;
    case 0x7F27750Cu: goto label_7F27750C;
    case 0x7F277510u: goto label_7F277510;
    case 0x7F277514u: goto label_7F277514;
    case 0x7F277518u: goto label_7F277518;
    case 0x7F27751Cu: goto label_7F27751C;
    case 0x7F277520u: goto label_7F277520;
    case 0x7F277524u: goto label_7F277524;
    case 0x7F277528u: goto label_7F277528;
    case 0x7F27752Cu: goto label_7F27752C;
    case 0x7F277530u: goto label_7F277530;
    case 0x7F277534u: goto label_7F277534;
    case 0x7F277538u: goto label_7F277538;
    case 0x7F27753Cu: goto label_7F27753C;
    case 0x7F277540u: goto label_7F277540;
    case 0x7F277544u: goto label_7F277544;
    case 0x7F277548u: goto label_7F277548;
    case 0x7F27754Cu: goto label_7F27754C;
    case 0x7F277550u: goto label_7F277550;
    case 0x7F277554u: goto label_7F277554;
    case 0x7F277558u: goto label_7F277558;
    case 0x7F27755Cu: goto label_7F27755C;
    case 0x7F277560u: goto label_7F277560;
    case 0x7F277564u: goto label_7F277564;
    case 0x7F277568u: goto label_7F277568;
    case 0x7F27756Cu: goto label_7F27756C;
    case 0x7F277570u: goto label_7F277570;
    case 0x7F277574u: goto label_7F277574;
    case 0x7F277578u: goto label_7F277578;
    case 0x7F27757Cu: goto label_7F27757C;
    case 0x7F277580u: goto label_7F277580;
    case 0x7F277584u: goto label_7F277584;
    case 0x7F277588u: goto label_7F277588;
    case 0x7F27758Cu: goto label_7F27758C;
    case 0x7F277590u: goto label_7F277590;
    case 0x7F277594u: goto label_7F277594;
    case 0x7F277598u: goto label_7F277598;
    case 0x7F27759Cu: goto label_7F27759C;
    case 0x7F2775A0u: goto label_7F2775A0;
    case 0x7F2775A4u: goto label_7F2775A4;
    case 0x7F2775A8u: goto label_7F2775A8;
    case 0x7F2775ACu: goto label_7F2775AC;
    case 0x7F2775B0u: goto label_7F2775B0;
    case 0x7F2775B4u: goto label_7F2775B4;
    case 0x7F2775B8u: goto label_7F2775B8;
    case 0x7F2775BCu: goto label_7F2775BC;
    case 0x7F2775C0u: goto label_7F2775C0;
    case 0x7F2775C4u: goto label_7F2775C4;
    case 0x7F2775C8u: goto label_7F2775C8;
    case 0x7F2775CCu: goto label_7F2775CC;
    case 0x7F2775D0u: goto label_7F2775D0;
    case 0x7F2775D4u: goto label_7F2775D4;
    case 0x7F2775D8u: goto label_7F2775D8;
    case 0x7F2775DCu: goto label_7F2775DC;
    case 0x7F2775E0u: goto label_7F2775E0;
    case 0x7F2775E4u: goto label_7F2775E4;
    case 0x7F2775E8u: goto label_7F2775E8;
    case 0x7F2775ECu: goto label_7F2775EC;
    case 0x7F2775F0u: goto label_7F2775F0;
    case 0x7F2775F4u: goto label_7F2775F4;
    case 0x7F2775F8u: goto label_7F2775F8;
    case 0x7F2775FCu: goto label_7F2775FC;
    case 0x7F277600u: goto label_7F277600;
    case 0x7F277604u: goto label_7F277604;
    case 0x7F277608u: goto label_7F277608;
    case 0x7F27760Cu: goto label_7F27760C;
    case 0x7F277610u: goto label_7F277610;
    case 0x7F277614u: goto label_7F277614;
    case 0x7F277618u: goto label_7F277618;
    case 0x7F27761Cu: goto label_7F27761C;
    case 0x7F277620u: goto label_7F277620;
    case 0x7F277624u: goto label_7F277624;
    case 0x7F277628u: goto label_7F277628;
    case 0x7F27762Cu: goto label_7F27762C;
    case 0x7F277630u: goto label_7F277630;
    case 0x7F277634u: goto label_7F277634;
    case 0x7F277638u: goto label_7F277638;
    case 0x7F27763Cu: goto label_7F27763C;
    case 0x7F277640u: goto label_7F277640;
    case 0x7F277644u: goto label_7F277644;
    case 0x7F277648u: goto label_7F277648;
    case 0x7F27764Cu: goto label_7F27764C;
    case 0x7F277650u: goto label_7F277650;
    case 0x7F277654u: goto label_7F277654;
    case 0x7F277658u: goto label_7F277658;
    case 0x7F27765Cu: goto label_7F27765C;
    case 0x7F277660u: goto label_7F277660;
    case 0x7F277664u: goto label_7F277664;
    case 0x7F277668u: goto label_7F277668;
    case 0x7F27766Cu: goto label_7F27766C;
    case 0x7F277670u: goto label_7F277670;
    case 0x7F277674u: goto label_7F277674;
    case 0x7F277678u: goto label_7F277678;
    case 0x7F27767Cu: goto label_7F27767C;
    case 0x7F277680u: goto label_7F277680;
    case 0x7F277684u: goto label_7F277684;
    case 0x7F277688u: goto label_7F277688;
    case 0x7F27768Cu: goto label_7F27768C;
    case 0x7F277690u: goto label_7F277690;
    case 0x7F277694u: goto label_7F277694;
    case 0x7F277698u: goto label_7F277698;
    case 0x7F27769Cu: goto label_7F27769C;
    case 0x7F2776A0u: goto label_7F2776A0;
    case 0x7F2776A4u: goto label_7F2776A4;
    case 0x7F2776A8u: goto label_7F2776A8;
    case 0x7F2776ACu: goto label_7F2776AC;
    case 0x7F2776B0u: goto label_7F2776B0;
    case 0x7F2776B4u: goto label_7F2776B4;
    case 0x7F2776B8u: goto label_7F2776B8;
    case 0x7F2776BCu: goto label_7F2776BC;
    case 0x7F2776C0u: goto label_7F2776C0;
    case 0x7F2776C4u: goto label_7F2776C4;
    case 0x7F2776C8u: goto label_7F2776C8;
    case 0x7F2776CCu: goto label_7F2776CC;
    case 0x7F2776D0u: goto label_7F2776D0;
    case 0x7F2776D4u: goto label_7F2776D4;
    case 0x7F2776D8u: goto label_7F2776D8;
    case 0x7F2776DCu: goto label_7F2776DC;
    case 0x7F2776E0u: goto label_7F2776E0;
    case 0x7F2776E4u: goto label_7F2776E4;
    case 0x7F2776E8u: goto label_7F2776E8;
    case 0x7F2776ECu: goto label_7F2776EC;
    case 0x7F2776F0u: goto label_7F2776F0;
    case 0x7F2776F4u: goto label_7F2776F4;
    case 0x7F2776F8u: goto label_7F2776F8;
    case 0x7F2776FCu: goto label_7F2776FC;
    case 0x7F277700u: goto label_7F277700;
    case 0x7F277704u: goto label_7F277704;
    case 0x7F277708u: goto label_7F277708;
    case 0x7F27770Cu: goto label_7F27770C;
    case 0x7F277710u: goto label_7F277710;
    case 0x7F277714u: goto label_7F277714;
    case 0x7F277718u: goto label_7F277718;
    case 0x7F27771Cu: goto label_7F27771C;
    case 0x7F277720u: goto label_7F277720;
    case 0x7F277724u: goto label_7F277724;
    case 0x7F277728u: goto label_7F277728;
    case 0x7F27772Cu: goto label_7F27772C;
    case 0x7F277730u: goto label_7F277730;
    case 0x7F277734u: goto label_7F277734;
    case 0x7F277738u: goto label_7F277738;
    case 0x7F27773Cu: goto label_7F27773C;
    case 0x7F277740u: goto label_7F277740;
    case 0x7F277744u: goto label_7F277744;
    case 0x7F277748u: goto label_7F277748;
    case 0x7F27774Cu: goto label_7F27774C;
    case 0x7F277750u: goto label_7F277750;
    case 0x7F277754u: goto label_7F277754;
    case 0x7F277758u: goto label_7F277758;
    case 0x7F27775Cu: goto label_7F27775C;
    case 0x7F277760u: goto label_7F277760;
    case 0x7F277764u: goto label_7F277764;
    case 0x7F277768u: goto label_7F277768;
    case 0x7F27776Cu: goto label_7F27776C;
    case 0x7F277770u: goto label_7F277770;
    case 0x7F277774u: goto label_7F277774;
    case 0x7F277778u: goto label_7F277778;
    case 0x7F27777Cu: goto label_7F27777C;
    case 0x7F277780u: goto label_7F277780;
    case 0x7F277784u: goto label_7F277784;
    case 0x7F277788u: goto label_7F277788;
    case 0x7F27778Cu: goto label_7F27778C;
    case 0x7F277790u: goto label_7F277790;
    case 0x7F277794u: goto label_7F277794;
    case 0x7F277798u: goto label_7F277798;
    case 0x7F27779Cu: goto label_7F27779C;
    case 0x7F2777A0u: goto label_7F2777A0;
    case 0x7F2777A4u: goto label_7F2777A4;
    case 0x7F2777A8u: goto label_7F2777A8;
    case 0x7F2777ACu: goto label_7F2777AC;
    case 0x7F2777B0u: goto label_7F2777B0;
    case 0x7F2777B4u: goto label_7F2777B4;
    case 0x7F2777B8u: goto label_7F2777B8;
    case 0x7F2777BCu: goto label_7F2777BC;
    case 0x7F2777C0u: goto label_7F2777C0;
    case 0x7F2777C4u: goto label_7F2777C4;
    case 0x7F2777C8u: goto label_7F2777C8;
    case 0x7F2777CCu: goto label_7F2777CC;
    case 0x7F2777D0u: goto label_7F2777D0;
    case 0x7F2777D4u: goto label_7F2777D4;
    case 0x7F2777D8u: goto label_7F2777D8;
    case 0x7F2777DCu: goto label_7F2777DC;
    case 0x7F2777E0u: goto label_7F2777E0;
    case 0x7F2777E4u: goto label_7F2777E4;
    case 0x7F2777E8u: goto label_7F2777E8;
    case 0x7F2777ECu: goto label_7F2777EC;
    case 0x7F2777F0u: goto label_7F2777F0;
    case 0x7F2777F4u: goto label_7F2777F4;
    case 0x7F2777F8u: goto label_7F2777F8;
    case 0x7F2777FCu: goto label_7F2777FC;
    case 0x7F277800u: goto label_7F277800;
    case 0x7F277804u: goto label_7F277804;
    case 0x7F277808u: goto label_7F277808;
    case 0x7F27780Cu: goto label_7F27780C;
    case 0x7F277810u: goto label_7F277810;
    case 0x7F277814u: goto label_7F277814;
    case 0x7F277818u: goto label_7F277818;
    case 0x7F27781Cu: goto label_7F27781C;
    case 0x7F277820u: goto label_7F277820;
    case 0x7F277824u: goto label_7F277824;
    case 0x7F277828u: goto label_7F277828;
    case 0x7F27782Cu: goto label_7F27782C;
    case 0x7F277830u: goto label_7F277830;
    case 0x7F277834u: goto label_7F277834;
    case 0x7F277838u: goto label_7F277838;
    case 0x7F27783Cu: goto label_7F27783C;
    case 0x7F277840u: goto label_7F277840;
    case 0x7F277844u: goto label_7F277844;
    case 0x7F277848u: goto label_7F277848;
    case 0x7F27784Cu: goto label_7F27784C;
    case 0x7F277850u: goto label_7F277850;
    case 0x7F277854u: goto label_7F277854;
    case 0x7F277858u: goto label_7F277858;
    case 0x7F27785Cu: goto label_7F27785C;
    case 0x7F277860u: goto label_7F277860;
    case 0x7F277864u: goto label_7F277864;
    case 0x7F277868u: goto label_7F277868;
    case 0x7F27786Cu: goto label_7F27786C;
    case 0x7F277870u: goto label_7F277870;
    case 0x7F277874u: goto label_7F277874;
    case 0x7F277878u: goto label_7F277878;
    case 0x7F27787Cu: goto label_7F27787C;
    case 0x7F277880u: goto label_7F277880;
    case 0x7F277884u: goto label_7F277884;
    case 0x7F277888u: goto label_7F277888;
    case 0x7F27788Cu: goto label_7F27788C;
    case 0x7F277890u: goto label_7F277890;
    case 0x7F277894u: goto label_7F277894;
    case 0x7F277898u: goto label_7F277898;
    case 0x7F27789Cu: goto label_7F27789C;
    case 0x7F2778A0u: goto label_7F2778A0;
    case 0x7F2778A4u: goto label_7F2778A4;
    case 0x7F2778A8u: goto label_7F2778A8;
    case 0x7F2778ACu: goto label_7F2778AC;
    case 0x7F2778B0u: goto label_7F2778B0;
    case 0x7F2778B4u: goto label_7F2778B4;
    case 0x7F2778B8u: goto label_7F2778B8;
    case 0x7F2778BCu: goto label_7F2778BC;
    case 0x7F2778C0u: goto label_7F2778C0;
    case 0x7F2778C4u: goto label_7F2778C4;
    case 0x7F2778C8u: goto label_7F2778C8;
    case 0x7F2778CCu: goto label_7F2778CC;
    case 0x7F2778D0u: goto label_7F2778D0;
    case 0x7F2778D4u: goto label_7F2778D4;
    case 0x7F2778D8u: goto label_7F2778D8;
    case 0x7F2778DCu: goto label_7F2778DC;
    case 0x7F2778E0u: goto label_7F2778E0;
    case 0x7F2778E4u: goto label_7F2778E4;
    case 0x7F2778E8u: goto label_7F2778E8;
    case 0x7F2778ECu: goto label_7F2778EC;
    case 0x7F2778F0u: goto label_7F2778F0;
    case 0x7F2778F4u: goto label_7F2778F4;
    case 0x7F2778F8u: goto label_7F2778F8;
    case 0x7F2778FCu: goto label_7F2778FC;
    case 0x7F277900u: goto label_7F277900;
    case 0x7F277904u: goto label_7F277904;
    case 0x7F277908u: goto label_7F277908;
    case 0x7F27790Cu: goto label_7F27790C;
    case 0x7F277910u: goto label_7F277910;
    case 0x7F277914u: goto label_7F277914;
    case 0x7F277918u: goto label_7F277918;
    case 0x7F27791Cu: goto label_7F27791C;
    case 0x7F277920u: goto label_7F277920;
    case 0x7F277924u: goto label_7F277924;
    case 0x7F277928u: goto label_7F277928;
    case 0x7F27792Cu: goto label_7F27792C;
    case 0x7F277930u: goto label_7F277930;
    case 0x7F277934u: goto label_7F277934;
    case 0x7F277938u: goto label_7F277938;
    case 0x7F27793Cu: goto label_7F27793C;
    case 0x7F277940u: goto label_7F277940;
    case 0x7F277944u: goto label_7F277944;
    case 0x7F277948u: goto label_7F277948;
    case 0x7F27794Cu: goto label_7F27794C;
    case 0x7F277950u: goto label_7F277950;
    case 0x7F277954u: goto label_7F277954;
    case 0x7F277958u: goto label_7F277958;
    case 0x7F27795Cu: goto label_7F27795C;
    case 0x7F277960u: goto label_7F277960;
    case 0x7F277964u: goto label_7F277964;
    case 0x7F277968u: goto label_7F277968;
    case 0x7F27796Cu: goto label_7F27796C;
    case 0x7F277970u: goto label_7F277970;
    case 0x7F277974u: goto label_7F277974;
    case 0x7F277978u: goto label_7F277978;
    case 0x7F27797Cu: goto label_7F27797C;
    case 0x7F277980u: goto label_7F277980;
    case 0x7F277984u: goto label_7F277984;
    case 0x7F277988u: goto label_7F277988;
    case 0x7F27798Cu: goto label_7F27798C;
    case 0x7F277990u: goto label_7F277990;
    case 0x7F277994u: goto label_7F277994;
    case 0x7F277998u: goto label_7F277998;
    case 0x7F27799Cu: goto label_7F27799C;
    case 0x7F2779A0u: goto label_7F2779A0;
    case 0x7F2779A4u: goto label_7F2779A4;
    case 0x7F2779A8u: goto label_7F2779A8;
    case 0x7F2779ACu: goto label_7F2779AC;
    case 0x7F2779B0u: goto label_7F2779B0;
    case 0x7F2779B4u: goto label_7F2779B4;
    case 0x7F2779B8u: goto label_7F2779B8;
    case 0x7F2779BCu: goto label_7F2779BC;
    case 0x7F2779C0u: goto label_7F2779C0;
    case 0x7F2779C4u: goto label_7F2779C4;
    case 0x7F2779C8u: goto label_7F2779C8;
    case 0x7F2779CCu: goto label_7F2779CC;
    case 0x7F2779D0u: goto label_7F2779D0;
    case 0x7F2779D4u: goto label_7F2779D4;
    case 0x7F2779D8u: goto label_7F2779D8;
    case 0x7F2779DCu: goto label_7F2779DC;
    case 0x7F2779E0u: goto label_7F2779E0;
    case 0x7F2779E4u: goto label_7F2779E4;
    case 0x7F2779E8u: goto label_7F2779E8;
    case 0x7F2779ECu: goto label_7F2779EC;
    case 0x7F2779F0u: goto label_7F2779F0;
    case 0x7F2779F4u: goto label_7F2779F4;
    case 0x7F2779F8u: goto label_7F2779F8;
    case 0x7F2779FCu: goto label_7F2779FC;
    case 0x7F277A00u: goto label_7F277A00;
    case 0x7F277A04u: goto label_7F277A04;
    case 0x7F277A08u: goto label_7F277A08;
    case 0x7F277A0Cu: goto label_7F277A0C;
    case 0x7F277A10u: goto label_7F277A10;
    case 0x7F277A14u: goto label_7F277A14;
    case 0x7F277A18u: goto label_7F277A18;
    case 0x7F277A1Cu: goto label_7F277A1C;
    case 0x7F277A20u: goto label_7F277A20;
    case 0x7F277A24u: goto label_7F277A24;
    case 0x7F277A28u: goto label_7F277A28;
    case 0x7F277A2Cu: goto label_7F277A2C;
    case 0x7F277A30u: goto label_7F277A30;
    case 0x7F277A34u: goto label_7F277A34;
    case 0x7F277A38u: goto label_7F277A38;
    case 0x7F277A3Cu: goto label_7F277A3C;
    case 0x7F277A40u: goto label_7F277A40;
    case 0x7F277A44u: goto label_7F277A44;
    case 0x7F277A48u: goto label_7F277A48;
    case 0x7F277A4Cu: goto label_7F277A4C;
    case 0x7F277A50u: goto label_7F277A50;
    case 0x7F277A54u: goto label_7F277A54;
    case 0x7F277A58u: goto label_7F277A58;
    case 0x7F277A5Cu: goto label_7F277A5C;
    case 0x7F277A60u: goto label_7F277A60;
    case 0x7F277A64u: goto label_7F277A64;
    case 0x7F277A68u: goto label_7F277A68;
    case 0x7F277A6Cu: goto label_7F277A6C;
    case 0x7F277A70u: goto label_7F277A70;
    case 0x7F277A74u: goto label_7F277A74;
    case 0x7F277A78u: goto label_7F277A78;
    case 0x7F277A7Cu: goto label_7F277A7C;
    case 0x7F277A80u: goto label_7F277A80;
    case 0x7F277A84u: goto label_7F277A84;
    case 0x7F277A88u: goto label_7F277A88;
    case 0x7F277A8Cu: goto label_7F277A8C;
    case 0x7F277A90u: goto label_7F277A90;
    case 0x7F277A94u: goto label_7F277A94;
    case 0x7F277A98u: goto label_7F277A98;
    case 0x7F277A9Cu: goto label_7F277A9C;
    case 0x7F277AA0u: goto label_7F277AA0;
    case 0x7F277AA4u: goto label_7F277AA4;
    case 0x7F277AA8u: goto label_7F277AA8;
    case 0x7F277AACu: goto label_7F277AAC;
    case 0x7F277AB0u: goto label_7F277AB0;
    case 0x7F277AB4u: goto label_7F277AB4;
    case 0x7F277AB8u: goto label_7F277AB8;
    case 0x7F277ABCu: goto label_7F277ABC;
    case 0x7F277AC0u: goto label_7F277AC0;
    case 0x7F277AC4u: goto label_7F277AC4;
    case 0x7F277AC8u: goto label_7F277AC8;
    case 0x7F277ACCu: goto label_7F277ACC;
    case 0x7F277AD0u: goto label_7F277AD0;
    case 0x7F277AD4u: goto label_7F277AD4;
    case 0x7F277AD8u: goto label_7F277AD8;
    case 0x7F277ADCu: goto label_7F277ADC;
    case 0x7F277AE0u: goto label_7F277AE0;
    case 0x7F277AE4u: goto label_7F277AE4;
    case 0x7F277AE8u: goto label_7F277AE8;
    case 0x7F277AECu: goto label_7F277AEC;
    case 0x7F277AF0u: goto label_7F277AF0;
    case 0x7F277AF4u: goto label_7F277AF4;
    case 0x7F277AF8u: goto label_7F277AF8;
    case 0x7F277AFCu: goto label_7F277AFC;
    case 0x7F277B00u: goto label_7F277B00;
    case 0x7F277B04u: goto label_7F277B04;
    case 0x7F277B08u: goto label_7F277B08;
    case 0x7F277B0Cu: goto label_7F277B0C;
    case 0x7F277B10u: goto label_7F277B10;
    case 0x7F277B14u: goto label_7F277B14;
    case 0x7F277B18u: goto label_7F277B18;
    case 0x7F277B1Cu: goto label_7F277B1C;
    case 0x7F277B20u: goto label_7F277B20;
    case 0x7F277B24u: goto label_7F277B24;
    case 0x7F277B28u: goto label_7F277B28;
    case 0x7F277B2Cu: goto label_7F277B2C;
    case 0x7F277B30u: goto label_7F277B30;
    case 0x7F277B34u: goto label_7F277B34;
    case 0x7F277B38u: goto label_7F277B38;
    case 0x7F277B3Cu: goto label_7F277B3C;
    case 0x7F277B40u: goto label_7F277B40;
    case 0x7F277B44u: goto label_7F277B44;
    case 0x7F277B48u: goto label_7F277B48;
    case 0x7F277B4Cu: goto label_7F277B4C;
    case 0x7F277B50u: goto label_7F277B50;
    case 0x7F277B54u: goto label_7F277B54;
    case 0x7F277B58u: goto label_7F277B58;
    case 0x7F277B5Cu: goto label_7F277B5C;
    case 0x7F277B60u: goto label_7F277B60;
    case 0x7F277B64u: goto label_7F277B64;
    case 0x7F277B68u: goto label_7F277B68;
    case 0x7F277B6Cu: goto label_7F277B6C;
    case 0x7F277B70u: goto label_7F277B70;
    case 0x7F277B74u: goto label_7F277B74;
    case 0x7F277B78u: goto label_7F277B78;
    case 0x7F277B7Cu: goto label_7F277B7C;
    case 0x7F277B80u: goto label_7F277B80;
    case 0x7F277B84u: goto label_7F277B84;
    case 0x7F277B88u: goto label_7F277B88;
    case 0x7F277B8Cu: goto label_7F277B8C;
    case 0x7F277B90u: goto label_7F277B90;
    case 0x7F277B94u: goto label_7F277B94;
    case 0x7F277B98u: goto label_7F277B98;
    case 0x7F277B9Cu: goto label_7F277B9C;
    case 0x7F277BA0u: goto label_7F277BA0;
    case 0x7F277BA4u: goto label_7F277BA4;
    case 0x7F277BA8u: goto label_7F277BA8;
    case 0x7F277BACu: goto label_7F277BAC;
    case 0x7F277BB0u: goto label_7F277BB0;
    case 0x7F277BB4u: goto label_7F277BB4;
    case 0x7F277BB8u: goto label_7F277BB8;
    case 0x7F277BBCu: goto label_7F277BBC;
    case 0x7F277BC0u: goto label_7F277BC0;
    case 0x7F277BC4u: goto label_7F277BC4;
    case 0x7F277BC8u: goto label_7F277BC8;
    case 0x7F277BCCu: goto label_7F277BCC;
    case 0x7F277BD0u: goto label_7F277BD0;
    case 0x7F277BD4u: goto label_7F277BD4;
    case 0x7F277BD8u: goto label_7F277BD8;
    case 0x7F277BDCu: goto label_7F277BDC;
    case 0x7F277BE0u: goto label_7F277BE0;
    case 0x7F277BE4u: goto label_7F277BE4;
    case 0x7F277BE8u: goto label_7F277BE8;
    case 0x7F277BECu: goto label_7F277BEC;
    case 0x7F277BF0u: goto label_7F277BF0;
    case 0x7F277BF4u: goto label_7F277BF4;
    case 0x7F277BF8u: goto label_7F277BF8;
    case 0x7F277BFCu: goto label_7F277BFC;
    case 0x7F277C00u: goto label_7F277C00;
    case 0x7F277C04u: goto label_7F277C04;
    case 0x7F277C08u: goto label_7F277C08;
    case 0x7F277C0Cu: goto label_7F277C0C;
    case 0x7F277C10u: goto label_7F277C10;
    case 0x7F277C14u: goto label_7F277C14;
    case 0x7F277C18u: goto label_7F277C18;
    case 0x7F277C1Cu: goto label_7F277C1C;
    case 0x7F277C20u: goto label_7F277C20;
    case 0x7F277C24u: goto label_7F277C24;
    case 0x7F277C28u: goto label_7F277C28;
    case 0x7F277C2Cu: goto label_7F277C2C;
    case 0x7F277C30u: goto label_7F277C30;
    case 0x7F277C34u: goto label_7F277C34;
    case 0x7F277C38u: goto label_7F277C38;
    case 0x7F277C3Cu: goto label_7F277C3C;
    case 0x7F277C40u: goto label_7F277C40;
    case 0x7F277C44u: goto label_7F277C44;
    case 0x7F277C48u: goto label_7F277C48;
    case 0x7F277C4Cu: goto label_7F277C4C;
    case 0x7F277C50u: goto label_7F277C50;
    case 0x7F277C54u: goto label_7F277C54;
    case 0x7F277C58u: goto label_7F277C58;
    case 0x7F277C5Cu: goto label_7F277C5C;
    case 0x7F277C60u: goto label_7F277C60;
    case 0x7F277C64u: goto label_7F277C64;
    case 0x7F277C68u: goto label_7F277C68;
    case 0x7F277C6Cu: goto label_7F277C6C;
    case 0x7F277C70u: goto label_7F277C70;
    case 0x7F277C74u: goto label_7F277C74;
    case 0x7F277C78u: goto label_7F277C78;
    case 0x7F277C7Cu: goto label_7F277C7C;
    case 0x7F277C80u: goto label_7F277C80;
    case 0x7F277C84u: goto label_7F277C84;
    case 0x7F277C88u: goto label_7F277C88;
    case 0x7F277C8Cu: goto label_7F277C8C;
    case 0x7F277C90u: goto label_7F277C90;
    case 0x7F277C94u: goto label_7F277C94;
    case 0x7F277C98u: goto label_7F277C98;
    case 0x7F277C9Cu: goto label_7F277C9C;
    case 0x7F277CA0u: goto label_7F277CA0;
    case 0x7F277CA4u: goto label_7F277CA4;
    case 0x7F277CA8u: goto label_7F277CA8;
    case 0x7F277CACu: goto label_7F277CAC;
    case 0x7F277CB0u: goto label_7F277CB0;
    case 0x7F277CB4u: goto label_7F277CB4;
    case 0x7F277CB8u: goto label_7F277CB8;
    case 0x7F277CBCu: goto label_7F277CBC;
    case 0x7F277CC0u: goto label_7F277CC0;
    case 0x7F277CC4u: goto label_7F277CC4;
    case 0x7F277CC8u: goto label_7F277CC8;
    case 0x7F277CCCu: goto label_7F277CCC;
    case 0x7F277CD0u: goto label_7F277CD0;
    case 0x7F277CD4u: goto label_7F277CD4;
    case 0x7F277CD8u: goto label_7F277CD8;
    case 0x7F277CDCu: goto label_7F277CDC;
    case 0x7F277CE0u: goto label_7F277CE0;
    case 0x7F277CE4u: goto label_7F277CE4;
    case 0x7F277CE8u: goto label_7F277CE8;
    case 0x7F277CECu: goto label_7F277CEC;
    case 0x7F277CF0u: goto label_7F277CF0;
    case 0x7F277CF4u: goto label_7F277CF4;
    case 0x7F277CF8u: goto label_7F277CF8;
    case 0x7F277CFCu: goto label_7F277CFC;
    case 0x7F277D00u: goto label_7F277D00;
    case 0x7F277D04u: goto label_7F277D04;
    case 0x7F277D08u: goto label_7F277D08;
    case 0x7F277D0Cu: goto label_7F277D0C;
    case 0x7F277D10u: goto label_7F277D10;
    case 0x7F277D14u: goto label_7F277D14;
    case 0x7F277D18u: goto label_7F277D18;
    case 0x7F277D1Cu: goto label_7F277D1C;
    case 0x7F277D20u: goto label_7F277D20;
    case 0x7F277D24u: goto label_7F277D24;
    case 0x7F277D28u: goto label_7F277D28;
    case 0x7F277D2Cu: goto label_7F277D2C;
    case 0x7F277D30u: goto label_7F277D30;
    case 0x7F277D34u: goto label_7F277D34;
    case 0x7F277D38u: goto label_7F277D38;
    case 0x7F277D3Cu: goto label_7F277D3C;
    case 0x7F277D40u: goto label_7F277D40;
    case 0x7F277D44u: goto label_7F277D44;
    case 0x7F277D48u: goto label_7F277D48;
    case 0x7F277D4Cu: goto label_7F277D4C;
    case 0x7F277D50u: goto label_7F277D50;
    case 0x7F277D54u: goto label_7F277D54;
    case 0x7F277D58u: goto label_7F277D58;
    case 0x7F277D5Cu: goto label_7F277D5C;
    case 0x7F277D60u: goto label_7F277D60;
    case 0x7F277D64u: goto label_7F277D64;
    case 0x7F277D68u: goto label_7F277D68;
    case 0x7F277D6Cu: goto label_7F277D6C;
    case 0x7F277D70u: goto label_7F277D70;
    case 0x7F277D74u: goto label_7F277D74;
    case 0x7F277D78u: goto label_7F277D78;
    case 0x7F277D7Cu: goto label_7F277D7C;
    case 0x7F277D80u: goto label_7F277D80;
    case 0x7F277D84u: goto label_7F277D84;
    case 0x7F277D88u: goto label_7F277D88;
    case 0x7F277D8Cu: goto label_7F277D8C;
    case 0x7F277D90u: goto label_7F277D90;
    case 0x7F277D94u: goto label_7F277D94;
    case 0x7F277D98u: goto label_7F277D98;
    case 0x7F277D9Cu: goto label_7F277D9C;
    case 0x7F277DA0u: goto label_7F277DA0;
    case 0x7F277DA4u: goto label_7F277DA4;
    case 0x7F277DA8u: goto label_7F277DA8;
    case 0x7F277DACu: goto label_7F277DAC;
    case 0x7F277DB0u: goto label_7F277DB0;
    case 0x7F277DB4u: goto label_7F277DB4;
    case 0x7F277DB8u: goto label_7F277DB8;
    case 0x7F277DBCu: goto label_7F277DBC;
    case 0x7F277DC0u: goto label_7F277DC0;
    case 0x7F277DC4u: goto label_7F277DC4;
    case 0x7F277DC8u: goto label_7F277DC8;
    case 0x7F277DCCu: goto label_7F277DCC;
    case 0x7F277DD0u: goto label_7F277DD0;
    case 0x7F277DD4u: goto label_7F277DD4;
    case 0x7F277DD8u: goto label_7F277DD8;
    case 0x7F277DDCu: goto label_7F277DDC;
    case 0x7F277DE0u: goto label_7F277DE0;
    case 0x7F277DE4u: goto label_7F277DE4;
    case 0x7F277DE8u: goto label_7F277DE8;
    case 0x7F277DECu: goto label_7F277DEC;
    case 0x7F277DF0u: goto label_7F277DF0;
    case 0x7F277DF4u: goto label_7F277DF4;
    case 0x7F277DF8u: goto label_7F277DF8;
    case 0x7F277DFCu: goto label_7F277DFC;
    case 0x7F277E00u: goto label_7F277E00;
    case 0x7F277E04u: goto label_7F277E04;
    case 0x7F277E08u: goto label_7F277E08;
    case 0x7F277E0Cu: goto label_7F277E0C;
    case 0x7F277E10u: goto label_7F277E10;
    case 0x7F277E14u: goto label_7F277E14;
    case 0x7F277E18u: goto label_7F277E18;
    case 0x7F277E1Cu: goto label_7F277E1C;
    case 0x7F277E20u: goto label_7F277E20;
    case 0x7F277E24u: goto label_7F277E24;
    case 0x7F277E28u: goto label_7F277E28;
    case 0x7F277E2Cu: goto label_7F277E2C;
    case 0x7F277E30u: goto label_7F277E30;
    case 0x7F277E34u: goto label_7F277E34;
    case 0x7F277E38u: goto label_7F277E38;
    case 0x7F277E3Cu: goto label_7F277E3C;
    case 0x7F277E40u: goto label_7F277E40;
    case 0x7F277E44u: goto label_7F277E44;
    case 0x7F277E48u: goto label_7F277E48;
    case 0x7F277E4Cu: goto label_7F277E4C;
    case 0x7F277E50u: goto label_7F277E50;
    case 0x7F277E54u: goto label_7F277E54;
    case 0x7F277E58u: goto label_7F277E58;
    case 0x7F277E5Cu: goto label_7F277E5C;
    case 0x7F277E60u: goto label_7F277E60;
    case 0x7F277E64u: goto label_7F277E64;
    case 0x7F277E68u: goto label_7F277E68;
    case 0x7F277E6Cu: goto label_7F277E6C;
    case 0x7F277E70u: goto label_7F277E70;
    case 0x7F277E74u: goto label_7F277E74;
    case 0x7F277E78u: goto label_7F277E78;
    case 0x7F277E7Cu: goto label_7F277E7C;
    case 0x7F277E80u: goto label_7F277E80;
    case 0x7F277E84u: goto label_7F277E84;
    case 0x7F277E88u: goto label_7F277E88;
    case 0x7F277E8Cu: goto label_7F277E8C;
    case 0x7F277E90u: goto label_7F277E90;
    case 0x7F277E94u: goto label_7F277E94;
    case 0x7F277E98u: goto label_7F277E98;
    case 0x7F277E9Cu: goto label_7F277E9C;
    case 0x7F277EA0u: goto label_7F277EA0;
    case 0x7F277EA4u: goto label_7F277EA4;
    case 0x7F277EA8u: goto label_7F277EA8;
    case 0x7F277EACu: goto label_7F277EAC;
    case 0x7F277EB0u: goto label_7F277EB0;
    case 0x7F277EB4u: goto label_7F277EB4;
    case 0x7F277EB8u: goto label_7F277EB8;
    case 0x7F277EBCu: goto label_7F277EBC;
    case 0x7F277EC0u: goto label_7F277EC0;
    case 0x7F277EC4u: goto label_7F277EC4;
    case 0x7F277EC8u: goto label_7F277EC8;
    case 0x7F277ECCu: goto label_7F277ECC;
    case 0x7F277ED0u: goto label_7F277ED0;
    case 0x7F277ED4u: goto label_7F277ED4;
    case 0x7F277ED8u: goto label_7F277ED8;
    case 0x7F277EDCu: goto label_7F277EDC;
    case 0x7F277EE0u: goto label_7F277EE0;
    case 0x7F277EE4u: goto label_7F277EE4;
    case 0x7F277EE8u: goto label_7F277EE8;
    case 0x7F277EECu: goto label_7F277EEC;
    case 0x7F277EF0u: goto label_7F277EF0;
    case 0x7F277EF4u: goto label_7F277EF4;
    case 0x7F277EF8u: goto label_7F277EF8;
    case 0x7F277EFCu: goto label_7F277EFC;
    case 0x7F277F00u: goto label_7F277F00;
    case 0x7F277F04u: goto label_7F277F04;
    case 0x7F277F08u: goto label_7F277F08;
    case 0x7F277F0Cu: goto label_7F277F0C;
    case 0x7F277F10u: goto label_7F277F10;
    case 0x7F277F14u: goto label_7F277F14;
    case 0x7F277F18u: goto label_7F277F18;
    case 0x7F277F1Cu: goto label_7F277F1C;
    case 0x7F277F20u: goto label_7F277F20;
    case 0x7F277F24u: goto label_7F277F24;
    case 0x7F277F28u: goto label_7F277F28;
    case 0x7F277F2Cu: goto label_7F277F2C;
    case 0x7F277F30u: goto label_7F277F30;
    case 0x7F277F34u: goto label_7F277F34;
    case 0x7F277F38u: goto label_7F277F38;
    case 0x7F277F3Cu: goto label_7F277F3C;
    case 0x7F277F40u: goto label_7F277F40;
    case 0x7F277F44u: goto label_7F277F44;
    case 0x7F277F48u: goto label_7F277F48;
    case 0x7F277F4Cu: goto label_7F277F4C;
    case 0x7F277F50u: goto label_7F277F50;
    case 0x7F277F54u: goto label_7F277F54;
    case 0x7F277F58u: goto label_7F277F58;
    case 0x7F277F5Cu: goto label_7F277F5C;
    case 0x7F277F60u: goto label_7F277F60;
    case 0x7F277F64u: goto label_7F277F64;
    case 0x7F277F68u: goto label_7F277F68;
    case 0x7F277F6Cu: goto label_7F277F6C;
    case 0x7F277F70u: goto label_7F277F70;
    case 0x7F277F74u: goto label_7F277F74;
    case 0x7F277F78u: goto label_7F277F78;
    case 0x7F277F7Cu: goto label_7F277F7C;
    case 0x7F277F80u: goto label_7F277F80;
    case 0x7F277F84u: goto label_7F277F84;
    case 0x7F277F88u: goto label_7F277F88;
    case 0x7F277F8Cu: goto label_7F277F8C;
    case 0x7F277F90u: goto label_7F277F90;
    case 0x7F277F94u: goto label_7F277F94;
    case 0x7F277F98u: goto label_7F277F98;
    case 0x7F277F9Cu: goto label_7F277F9C;
    case 0x7F277FA0u: goto label_7F277FA0;
    case 0x7F277FA4u: goto label_7F277FA4;
    case 0x7F277FA8u: goto label_7F277FA8;
    case 0x7F277FACu: goto label_7F277FAC;
    case 0x7F277FB0u: goto label_7F277FB0;
    case 0x7F277FB4u: goto label_7F277FB4;
    case 0x7F277FB8u: goto label_7F277FB8;
    case 0x7F277FBCu: goto label_7F277FBC;
    case 0x7F277FC0u: goto label_7F277FC0;
    case 0x7F277FC4u: goto label_7F277FC4;
    case 0x7F277FC8u: goto label_7F277FC8;
    case 0x7F277FCCu: goto label_7F277FCC;
    case 0x7F277FD0u: goto label_7F277FD0;
    case 0x7F277FD4u: goto label_7F277FD4;
    case 0x7F277FD8u: goto label_7F277FD8;
    case 0x7F277FDCu: goto label_7F277FDC;
    case 0x7F277FE0u: goto label_7F277FE0;
    case 0x7F277FE4u: goto label_7F277FE4;
    case 0x7F277FE8u: goto label_7F277FE8;
    case 0x7F277FECu: goto label_7F277FEC;
    case 0x7F277FF0u: goto label_7F277FF0;
    case 0x7F277FF4u: goto label_7F277FF4;
    case 0x7F277FF8u: goto label_7F277FF8;
    case 0x7F277FFCu: goto label_7F277FFC;
    case 0x7F278000u: goto label_7F278000;
    case 0x7F278004u: goto label_7F278004;
    case 0x7F278008u: goto label_7F278008;
    case 0x7F27800Cu: goto label_7F27800C;
    case 0x7F278010u: goto label_7F278010;
    case 0x7F278014u: goto label_7F278014;
    case 0x7F278018u: goto label_7F278018;
    case 0x7F27801Cu: goto label_7F27801C;
    case 0x7F278020u: goto label_7F278020;
    case 0x7F278024u: goto label_7F278024;
    case 0x7F278028u: goto label_7F278028;
    case 0x7F27802Cu: goto label_7F27802C;
    case 0x7F278030u: goto label_7F278030;
    case 0x7F278034u: goto label_7F278034;
    case 0x7F278038u: goto label_7F278038;
    case 0x7F27803Cu: goto label_7F27803C;
    case 0x7F278040u: goto label_7F278040;
    case 0x7F278044u: goto label_7F278044;
    case 0x7F278048u: goto label_7F278048;
    case 0x7F27804Cu: goto label_7F27804C;
    case 0x7F278050u: goto label_7F278050;
    case 0x7F278054u: goto label_7F278054;
    case 0x7F278058u: goto label_7F278058;
    case 0x7F27805Cu: goto label_7F27805C;
    case 0x7F278060u: goto label_7F278060;
    case 0x7F278064u: goto label_7F278064;
    case 0x7F278068u: goto label_7F278068;
    case 0x7F27806Cu: goto label_7F27806C;
    case 0x7F278070u: goto label_7F278070;
    case 0x7F278074u: goto label_7F278074;
    case 0x7F278078u: goto label_7F278078;
    case 0x7F27807Cu: goto label_7F27807C;
    case 0x7F278080u: goto label_7F278080;
    case 0x7F278084u: goto label_7F278084;
    case 0x7F278088u: goto label_7F278088;
    case 0x7F27808Cu: goto label_7F27808C;
    case 0x7F278090u: goto label_7F278090;
    case 0x7F278094u: goto label_7F278094;
    case 0x7F278098u: goto label_7F278098;
    case 0x7F27809Cu: goto label_7F27809C;
    case 0x7F2780A0u: goto label_7F2780A0;
    case 0x7F2780A4u: goto label_7F2780A4;
    case 0x7F2780A8u: goto label_7F2780A8;
    case 0x7F2780ACu: goto label_7F2780AC;
    case 0x7F2780B0u: goto label_7F2780B0;
    case 0x7F2780B4u: goto label_7F2780B4;
    case 0x7F2780B8u: goto label_7F2780B8;
    case 0x7F2780BCu: goto label_7F2780BC;
    case 0x7F2780C0u: goto label_7F2780C0;
    case 0x7F2780C4u: goto label_7F2780C4;
    case 0x7F2780C8u: goto label_7F2780C8;
    case 0x7F2780CCu: goto label_7F2780CC;
    case 0x7F2780D0u: goto label_7F2780D0;
    case 0x7F2780D4u: goto label_7F2780D4;
    case 0x7F2780D8u: goto label_7F2780D8;
    case 0x7F2780DCu: goto label_7F2780DC;
    case 0x7F2780E0u: goto label_7F2780E0;
    case 0x7F2780E4u: goto label_7F2780E4;
    case 0x7F2780E8u: goto label_7F2780E8;
    default: return;
    }
label_7F2740EC:
    ctx->pc = 0x7F2740ECu;
    ctx->downcount -= 7;
    // 7F2740EC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2740F0:
    ctx->pc = 0x7F2740F0u;
    // 7F2740F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2740F4:
    ctx->pc = 0x7F2740F4u;
    // 7F2740F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2740F8:
    ctx->pc = 0x7F2740F8u;
    // 7F2740F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2740FC:
    ctx->pc = 0x7F2740FCu;
    // 7F2740FC: lwz     r0, 22156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274100:
    ctx->pc = 0x7F274100u;
    // 7F274100: cmplwi  r0, 0x0000
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

label_7F274104:
    ctx->pc = 0x7F274104u;
    // 7F274104: bc    12, 2, 0x7F27411C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27411C;
        }
    }

label_7F274108:
    ctx->pc = 0x7F274108u;
    ctx->downcount -= 5;
    // 7F274108: lwz     r3, 492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27410C:
    ctx->pc = 0x7F27410Cu;
    // 7F27410C: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274110:
    ctx->pc = 0x7F274110u;
    // 7F274110: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274114:
    ctx->pc = 0x7F274114u;
    // 7F274114: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274118:
    ctx->pc = 0x7F274118u;
    // 7F274118: bl      0x7F3B0954
    {
            ctx->lr = 0x7F27411Cu;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F27411C:
    ctx->pc = 0x7F27411Cu;
    ctx->downcount -= 2;
    // 7F27411C: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F274120:
    ctx->pc = 0x7F274120u;
    // 7F274120: bl      0x7F042AAC
    {
            ctx->lr = 0x7F274124u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F274124:
    ctx->pc = 0x7F274124u;
    ctx->downcount -= 2;
    // 7F274124: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F274128:
    ctx->pc = 0x7F274128u;
    // 7F274128: bl      0x7F042AAC
    {
            ctx->lr = 0x7F27412Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F27412C:
    ctx->pc = 0x7F27412Cu;
    ctx->downcount -= 4;
    // 7F27412C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274130:
    ctx->pc = 0x7F274130u;
    // 7F274130: lwz     r0, -7668(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274134:
    ctx->pc = 0x7F274134u;
    // 7F274134: cmplwi  r0, 0x0000
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

label_7F274138:
    ctx->pc = 0x7F274138u;
    // 7F274138: bc    12, 2, 0x7F274168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274168;
        }
    }

label_7F27413C:
    ctx->pc = 0x7F27413Cu;
    ctx->downcount -= 3;
    // 7F27413C: lwz     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274140:
    ctx->pc = 0x7F274140u;
    // 7F274140: cmplwi  r0, 0x0000
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

label_7F274144:
    ctx->pc = 0x7F274144u;
    // 7F274144: bc    4, 2, 0x7F274168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274168;
        }
    }

label_7F274148:
    ctx->pc = 0x7F274148u;
    ctx->downcount -= 2;
    // 7F274148: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27414C:
    ctx->pc = 0x7F27414Cu;
    // 7F27414C: bl      0x7F3C89FC
    {
            ctx->lr = 0x7F274150u;
            ctx->pc = 0x7F3C89FCu;
            return;
    }

label_7F274150:
    ctx->pc = 0x7F274150u;
    ctx->downcount -= 2;
    // 7F274150: cmpwi   r3, 0
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

label_7F274154:
    ctx->pc = 0x7F274154u;
    // 7F274154: bc    4, 2, 0x7F274168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274168;
        }
    }

label_7F274158:
    ctx->pc = 0x7F274158u;
    ctx->downcount -= 4;
    // 7F274158: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27415C:
    ctx->pc = 0x7F27415Cu;
    // 7F27415C: addi    r3, r3, -7668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7668);

label_7F274160:
    ctx->pc = 0x7F274160u;
    // 7F274160: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274164:
    ctx->pc = 0x7F274164u;
    // 7F274164: bl      0x7F3C81DC
    {
            ctx->lr = 0x7F274168u;
            ctx->pc = 0x7F3C81DCu;
            return;
    }

label_7F274168:
    ctx->pc = 0x7F274168u;
    ctx->downcount -= 5;
    // 7F274168: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27416C:
    ctx->pc = 0x7F27416Cu;
    // 7F27416C: addi    r3, r3, -5672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5672);

label_7F274170:
    ctx->pc = 0x7F274170u;
    // 7F274170: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274174:
    ctx->pc = 0x7F274174u;
    // 7F274174: cmplwi  r3, 0x0000
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

label_7F274178:
    ctx->pc = 0x7F274178u;
    // 7F274178: bc    12, 2, 0x7F27418C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27418C;
        }
    }

label_7F27417C:
    ctx->pc = 0x7F27417Cu;
    ctx->downcount -= 4;
    // 7F27417C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274180:
    ctx->pc = 0x7F274180u;
    // 7F274180: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274184:
    ctx->pc = 0x7F274184u;
    // 7F274184: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F274188:
    ctx->pc = 0x7F274188u;
    // 7F274188: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27418C:
    ctx->pc = 0x7F27418Cu;
    ctx->downcount -= 5;
    // 7F27418C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274190:
    ctx->pc = 0x7F274190u;
    // 7F274190: addi    r3, r3, -5676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5676);

label_7F274194:
    ctx->pc = 0x7F274194u;
    // 7F274194: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274198:
    ctx->pc = 0x7F274198u;
    // 7F274198: cmplwi  r3, 0x0000
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

label_7F27419C:
    ctx->pc = 0x7F27419Cu;
    // 7F27419C: bc    12, 2, 0x7F2741B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2741B0;
        }
    }

label_7F2741A0:
    ctx->pc = 0x7F2741A0u;
    ctx->downcount -= 4;
    // 7F2741A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2741A4:
    ctx->pc = 0x7F2741A4u;
    // 7F2741A4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2741A8:
    ctx->pc = 0x7F2741A8u;
    // 7F2741A8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2741AC:
    ctx->pc = 0x7F2741ACu;
    // 7F2741AC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2741B0:
    ctx->pc = 0x7F2741B0u;
    ctx->downcount -= 2;
    // 7F2741B0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2741B4:
    ctx->pc = 0x7F2741B4u;
    // 7F2741B4: bl      0x7F272CAC
    {
            ctx->lr = 0x7F2741B8u;
            ctx->pc = 0x7F272CACu;
            return;
    }

label_7F2741B8:
    ctx->pc = 0x7F2741B8u;
    ctx->downcount -= 2;
    // 7F2741B8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2741BC:
    ctx->pc = 0x7F2741BCu;
    // 7F2741BC: bl      0x7F272D00
    {
            ctx->lr = 0x7F2741C0u;
            ctx->pc = 0x7F272D00u;
            return;
    }

label_7F2741C0:
    ctx->pc = 0x7F2741C0u;
    ctx->downcount -= 10;
    // 7F2741C0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2741C4:
    ctx->pc = 0x7F2741C4u;
    // 7F2741C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2741C8:
    ctx->pc = 0x7F2741C8u;
    // 7F2741C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2741CC:
    ctx->pc = 0x7F2741CCu;
    // 7F2741CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2741D0:
    ctx->pc = 0x7F2741D0u;
    // 7F2741D0: stw     r0, -5684(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2741D4:
    ctx->pc = 0x7F2741D4u;
    // 7F2741D4: stw     r0, -8000(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2741D8:
    ctx->pc = 0x7F2741D8u;
    // 7F2741D8: stw     r0, -7980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2741DC:
    ctx->pc = 0x7F2741DCu;
    // 7F2741DC: lwz     r3, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2741E0:
    ctx->pc = 0x7F2741E0u;
    // 7F2741E0: cmplwi  r3, 0x0000
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

label_7F2741E4:
    ctx->pc = 0x7F2741E4u;
    // 7F2741E4: bc    12, 2, 0x7F2741F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2741F4;
        }
    }

label_7F2741E8:
    ctx->pc = 0x7F2741E8u;
    ctx->downcount -= 1;
    // 7F2741E8: bl      0x7F3B6B0C
    {
            ctx->lr = 0x7F2741ECu;
            ctx->pc = 0x7F3B6B0Cu;
            return;
    }

label_7F2741EC:
    ctx->pc = 0x7F2741ECu;
    ctx->downcount -= 2;
    // 7F2741EC: lwz     r3, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2741F0:
    ctx->pc = 0x7F2741F0u;
    // 7F2741F0: bl      0x7F3B6AEC
    {
            ctx->lr = 0x7F2741F4u;
            ctx->pc = 0x7F3B6AECu;
            return;
    }

label_7F2741F4:
    ctx->pc = 0x7F2741F4u;
    ctx->downcount -= 6;
    // 7F2741F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2741F8:
    ctx->pc = 0x7F2741F8u;
    // 7F2741F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2741FC:
    ctx->pc = 0x7F2741FCu;
    // 7F2741FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274200:
    ctx->pc = 0x7F274200u;
    // 7F274200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F274204:
    ctx->pc = 0x7F274204u;
    // 7F274204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274208:
    ctx->pc = 0x7F274208u;
    ctx->downcount -= 22;
    // 7F274208: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27420C:
    ctx->pc = 0x7F27420Cu;
    // 7F27420C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274210:
    ctx->pc = 0x7F274210u;
    // 7F274210: addi    r7, r4, 24824
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(24824);

label_7F274214:
    ctx->pc = 0x7F274214u;
    // 7F274214: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F274218:
    ctx->pc = 0x7F274218u;
    // 7F274218: addi    r4, r3, 24832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24832);

label_7F27421C:
    ctx->pc = 0x7F27421Cu;
    // 7F27421C: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F27421Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274220:
    ctx->pc = 0x7F274220u;
    // 7F274220: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274220u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274224:
    ctx->pc = 0x7F274224u;
    // 7F274224: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F274228:
    ctx->pc = 0x7F274228u;
    // 7F274228: stfsu     f1, -7632(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274228u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7632);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
        ctx->gpr[6] = ea;
    }

label_7F27422C:
    ctx->pc = 0x7F27422Cu;
    // 7F27422C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274230:
    ctx->pc = 0x7F274230u;
    // 7F274230: stfsu     f1, -7648(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274230u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7648);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
        ctx->gpr[5] = ea;
    }

label_7F274234:
    ctx->pc = 0x7F274234u;
    // 7F274234: stfsu     f0, -7664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274234u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7664);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
        ctx->gpr[3] = ea;
    }

label_7F274238:
    ctx->pc = 0x7F274238u;
    // 7F274238: stfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274238u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27423C:
    ctx->pc = 0x7F27423Cu;
    // 7F27423C: stfs     f1, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27423Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274240:
    ctx->pc = 0x7F274240u;
    // 7F274240: stfs     f1, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274240u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274244:
    ctx->pc = 0x7F274244u;
    // 7F274244: stfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274244u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274248:
    ctx->pc = 0x7F274248u;
    // 7F274248: stfs     f1, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274248u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27424C:
    ctx->pc = 0x7F27424Cu;
    // 7F27424C: stfs     f1, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27424Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274250:
    ctx->pc = 0x7F274250u;
    // 7F274250: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274250u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274254:
    ctx->pc = 0x7F274254u;
    // 7F274254: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274254u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274258:
    ctx->pc = 0x7F274258u;
    // 7F274258: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274258u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27425C:
    ctx->pc = 0x7F27425Cu;
    // 7F27425C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274260:
    ctx->pc = 0x7F274260u;
    ctx->downcount -= 26;
    // 7F274260: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274264:
    ctx->pc = 0x7F274264u;
    // 7F274264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274268:
    ctx->pc = 0x7F274268u;
    // 7F274268: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27426C:
    ctx->pc = 0x7F27426Cu;
    // 7F27426C: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27426Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F274270:
    ctx->pc = 0x7F274270u;
    // 7F274270: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F274270u);
        if (ctx->exception) return;
    }

label_7F274274:
    ctx->pc = 0x7F274274u;
    // 7F274274: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F274278:
    ctx->pc = 0x7F274278u;
    // 7F274278: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274278u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F274278u);
        if (ctx->exception) return;
    }

label_7F27427C:
    ctx->pc = 0x7F27427Cu;
    // 7F27427C: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27427Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F274280:
    ctx->pc = 0x7F274280u;
    // 7F274280: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F274280u);
        if (ctx->exception) return;
    }

label_7F274284:
    ctx->pc = 0x7F274284u;
    // 7F274284: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F274288:
    ctx->pc = 0x7F274288u;
    // 7F274288: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27428C:
    ctx->pc = 0x7F27428Cu;
    // 7F27428C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F274290:
    ctx->pc = 0x7F274290u;
    // 7F274290: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F274294:
    ctx->pc = 0x7F274294u;
    // 7F274294: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F274298:
    ctx->pc = 0x7F274298u;
    // 7F274298: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27429C:
    ctx->pc = 0x7F27429Cu;
    // 7F27429C: bl      0x7F274208
    {
            ctx->lr = 0x7F2742A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274208u;
                return;
            }
            goto label_7F274208;
    }

label_7F2742A0:
    ctx->pc = 0x7F2742A0u;
    ctx->downcount -= 7;
    // 7F2742A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2742A4:
    ctx->pc = 0x7F2742A4u;
    // 7F2742A4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2742A8:
    ctx->pc = 0x7F2742A8u;
    // 7F2742A8: lis     r4, 37
    ctx->gpr[4] = ((u32)(s32)(37) << 16);

label_7F2742AC:
    ctx->pc = 0x7F2742ACu;
    // 7F2742AC: stw     r0, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2742B0:
    ctx->pc = 0x7F2742B0u;
    // 7F2742B0: addi    r3, r3, 16268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16268);

label_7F2742B4:
    ctx->pc = 0x7F2742B4u;
    // 7F2742B4: addi    r26, r4, 15242
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(15242);

label_7F2742B8:
    ctx->pc = 0x7F2742B8u;
    // 7F2742B8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2742BCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2742BC:
    ctx->pc = 0x7F2742BCu;
    ctx->downcount -= 2;
    // 7F2742BC: cmpw    r27, r3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2742C0:
    ctx->pc = 0x7F2742C0u;
    // 7F2742C0: bc    4, 2, 0x7F274310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274310;
        }
    }

label_7F2742C4:
    ctx->pc = 0x7F2742C4u;
    ctx->downcount -= 3;
    // 7F2742C4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2742C8:
    ctx->pc = 0x7F2742C8u;
    // 7F2742C8: addi    r3, r3, 16276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16276);

label_7F2742CC:
    ctx->pc = 0x7F2742CCu;
    // 7F2742CC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2742D0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2742D0:
    ctx->pc = 0x7F2742D0u;
    ctx->downcount -= 4;
    // 7F2742D0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2742D4:
    ctx->pc = 0x7F2742D4u;
    // 7F2742D4: stw     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2742D8:
    ctx->pc = 0x7F2742D8u;
    // 7F2742D8: addi    r3, r4, 16292
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16292);

label_7F2742DC:
    ctx->pc = 0x7F2742DCu;
    // 7F2742DC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2742E0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2742E0:
    ctx->pc = 0x7F2742E0u;
    ctx->downcount -= 4;
    // 7F2742E0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2742E4:
    ctx->pc = 0x7F2742E4u;
    // 7F2742E4: stw     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2742E8:
    ctx->pc = 0x7F2742E8u;
    // 7F2742E8: addi    r3, r4, 16308
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16308);

label_7F2742EC:
    ctx->pc = 0x7F2742ECu;
    // 7F2742EC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2742F0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2742F0:
    ctx->pc = 0x7F2742F0u;
    ctx->downcount -= 4;
    // 7F2742F0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2742F4:
    ctx->pc = 0x7F2742F4u;
    // 7F2742F4: stw     r3, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2742F8:
    ctx->pc = 0x7F2742F8u;
    // 7F2742F8: addi    r3, r4, 16324
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16324);

label_7F2742FC:
    ctx->pc = 0x7F2742FCu;
    // 7F2742FC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274300u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274300:
    ctx->pc = 0x7F274300u;
    ctx->downcount -= 4;
    // 7F274300: lis     r4, 37
    ctx->gpr[4] = ((u32)(s32)(37) << 16);

label_7F274304:
    ctx->pc = 0x7F274304u;
    // 7F274304: stw     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274308:
    ctx->pc = 0x7F274308u;
    // 7F274308: addi    r26, r4, 15242
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(15242);

label_7F27430C:
    ctx->pc = 0x7F27430Cu;
    // 7F27430C: b       0x7F27448C
    {
            goto label_7F27448C;
    }

label_7F274310:
    ctx->pc = 0x7F274310u;
    ctx->downcount -= 3;
    // 7F274310: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274314:
    ctx->pc = 0x7F274314u;
    // 7F274314: addi    r3, r3, 16340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16340);

label_7F274318:
    ctx->pc = 0x7F274318u;
    // 7F274318: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F27431Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F27431C:
    ctx->pc = 0x7F27431Cu;
    ctx->downcount -= 2;
    // 7F27431C: cmpw    r27, r3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F274320:
    ctx->pc = 0x7F274320u;
    // 7F274320: bc    4, 2, 0x7F274370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274370;
        }
    }

label_7F274324:
    ctx->pc = 0x7F274324u;
    ctx->downcount -= 3;
    // 7F274324: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274328:
    ctx->pc = 0x7F274328u;
    // 7F274328: addi    r3, r3, 16348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16348);

label_7F27432C:
    ctx->pc = 0x7F27432Cu;
    // 7F27432C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274330u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274330:
    ctx->pc = 0x7F274330u;
    ctx->downcount -= 4;
    // 7F274330: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274334:
    ctx->pc = 0x7F274334u;
    // 7F274334: stw     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274338:
    ctx->pc = 0x7F274338u;
    // 7F274338: addi    r3, r4, 16364
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16364);

label_7F27433C:
    ctx->pc = 0x7F27433Cu;
    // 7F27433C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274340u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274340:
    ctx->pc = 0x7F274340u;
    ctx->downcount -= 4;
    // 7F274340: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274344:
    ctx->pc = 0x7F274344u;
    // 7F274344: stw     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274348:
    ctx->pc = 0x7F274348u;
    // 7F274348: addi    r3, r4, 16380
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16380);

label_7F27434C:
    ctx->pc = 0x7F27434Cu;
    // 7F27434C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274350u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274350:
    ctx->pc = 0x7F274350u;
    ctx->downcount -= 4;
    // 7F274350: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274354:
    ctx->pc = 0x7F274354u;
    // 7F274354: stw     r3, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274358:
    ctx->pc = 0x7F274358u;
    // 7F274358: addi    r3, r4, 16396
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16396);

label_7F27435C:
    ctx->pc = 0x7F27435Cu;
    // 7F27435C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274360u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274360:
    ctx->pc = 0x7F274360u;
    ctx->downcount -= 4;
    // 7F274360: lis     r4, 38
    ctx->gpr[4] = ((u32)(s32)(38) << 16);

label_7F274364:
    ctx->pc = 0x7F274364u;
    // 7F274364: stw     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274368:
    ctx->pc = 0x7F274368u;
    // 7F274368: addi    r26, r4, -17526
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-17526);

label_7F27436C:
    ctx->pc = 0x7F27436Cu;
    // 7F27436C: b       0x7F27448C
    {
            goto label_7F27448C;
    }

label_7F274370:
    ctx->pc = 0x7F274370u;
    ctx->downcount -= 3;
    // 7F274370: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274374:
    ctx->pc = 0x7F274374u;
    // 7F274374: addi    r3, r3, 16412
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16412);

label_7F274378:
    ctx->pc = 0x7F274378u;
    // 7F274378: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F27437Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F27437C:
    ctx->pc = 0x7F27437Cu;
    ctx->downcount -= 2;
    // 7F27437C: cmpw    r27, r3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F274380:
    ctx->pc = 0x7F274380u;
    // 7F274380: bc    4, 2, 0x7F2743D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2743D0;
        }
    }

label_7F274384:
    ctx->pc = 0x7F274384u;
    ctx->downcount -= 3;
    // 7F274384: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274388:
    ctx->pc = 0x7F274388u;
    // 7F274388: addi    r3, r3, 16420
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16420);

label_7F27438C:
    ctx->pc = 0x7F27438Cu;
    // 7F27438C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274390u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274390:
    ctx->pc = 0x7F274390u;
    ctx->downcount -= 4;
    // 7F274390: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274394:
    ctx->pc = 0x7F274394u;
    // 7F274394: stw     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274398:
    ctx->pc = 0x7F274398u;
    // 7F274398: addi    r3, r4, 16436
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16436);

label_7F27439C:
    ctx->pc = 0x7F27439Cu;
    // 7F27439C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2743A0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2743A0:
    ctx->pc = 0x7F2743A0u;
    ctx->downcount -= 4;
    // 7F2743A0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2743A4:
    ctx->pc = 0x7F2743A4u;
    // 7F2743A4: stw     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2743A8:
    ctx->pc = 0x7F2743A8u;
    // 7F2743A8: addi    r3, r4, 16452
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16452);

label_7F2743AC:
    ctx->pc = 0x7F2743ACu;
    // 7F2743AC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2743B0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2743B0:
    ctx->pc = 0x7F2743B0u;
    ctx->downcount -= 4;
    // 7F2743B0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2743B4:
    ctx->pc = 0x7F2743B4u;
    // 7F2743B4: stw     r3, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2743B8:
    ctx->pc = 0x7F2743B8u;
    // 7F2743B8: addi    r3, r4, 16468
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16468);

label_7F2743BC:
    ctx->pc = 0x7F2743BCu;
    // 7F2743BC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2743C0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2743C0:
    ctx->pc = 0x7F2743C0u;
    ctx->downcount -= 4;
    // 7F2743C0: lis     r4, 38
    ctx->gpr[4] = ((u32)(s32)(38) << 16);

label_7F2743C4:
    ctx->pc = 0x7F2743C4u;
    // 7F2743C4: stw     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2743C8:
    ctx->pc = 0x7F2743C8u;
    // 7F2743C8: addi    r26, r4, 15242
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(15242);

label_7F2743CC:
    ctx->pc = 0x7F2743CCu;
    // 7F2743CC: b       0x7F27448C
    {
            goto label_7F27448C;
    }

label_7F2743D0:
    ctx->pc = 0x7F2743D0u;
    ctx->downcount -= 3;
    // 7F2743D0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2743D4:
    ctx->pc = 0x7F2743D4u;
    // 7F2743D4: addi    r3, r3, 16484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16484);

label_7F2743D8:
    ctx->pc = 0x7F2743D8u;
    // 7F2743D8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2743DCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2743DC:
    ctx->pc = 0x7F2743DCu;
    ctx->downcount -= 2;
    // 7F2743DC: cmpw    r27, r3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2743E0:
    ctx->pc = 0x7F2743E0u;
    // 7F2743E0: bc    4, 2, 0x7F274430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274430;
        }
    }

label_7F2743E4:
    ctx->pc = 0x7F2743E4u;
    ctx->downcount -= 3;
    // 7F2743E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2743E8:
    ctx->pc = 0x7F2743E8u;
    // 7F2743E8: addi    r3, r3, 16492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16492);

label_7F2743EC:
    ctx->pc = 0x7F2743ECu;
    // 7F2743EC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2743F0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2743F0:
    ctx->pc = 0x7F2743F0u;
    ctx->downcount -= 4;
    // 7F2743F0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2743F4:
    ctx->pc = 0x7F2743F4u;
    // 7F2743F4: stw     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2743F8:
    ctx->pc = 0x7F2743F8u;
    // 7F2743F8: addi    r3, r4, 16508
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16508);

label_7F2743FC:
    ctx->pc = 0x7F2743FCu;
    // 7F2743FC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274400u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274400:
    ctx->pc = 0x7F274400u;
    ctx->downcount -= 4;
    // 7F274400: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274404:
    ctx->pc = 0x7F274404u;
    // 7F274404: stw     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274408:
    ctx->pc = 0x7F274408u;
    // 7F274408: addi    r3, r4, 16524
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16524);

label_7F27440C:
    ctx->pc = 0x7F27440Cu;
    // 7F27440C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274410u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274410:
    ctx->pc = 0x7F274410u;
    ctx->downcount -= 4;
    // 7F274410: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274414:
    ctx->pc = 0x7F274414u;
    // 7F274414: stw     r3, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274418:
    ctx->pc = 0x7F274418u;
    // 7F274418: addi    r3, r4, 16540
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16540);

label_7F27441C:
    ctx->pc = 0x7F27441Cu;
    // 7F27441C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274420u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274420:
    ctx->pc = 0x7F274420u;
    ctx->downcount -= 4;
    // 7F274420: lis     r4, 39
    ctx->gpr[4] = ((u32)(s32)(39) << 16);

label_7F274424:
    ctx->pc = 0x7F274424u;
    // 7F274424: stw     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274428:
    ctx->pc = 0x7F274428u;
    // 7F274428: addi    r26, r4, -17526
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-17526);

label_7F27442C:
    ctx->pc = 0x7F27442Cu;
    // 7F27442C: b       0x7F27448C
    {
            goto label_7F27448C;
    }

label_7F274430:
    ctx->pc = 0x7F274430u;
    ctx->downcount -= 3;
    // 7F274430: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274434:
    ctx->pc = 0x7F274434u;
    // 7F274434: addi    r3, r3, 16556
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16556);

label_7F274438:
    ctx->pc = 0x7F274438u;
    // 7F274438: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F27443Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F27443C:
    ctx->pc = 0x7F27443Cu;
    ctx->downcount -= 2;
    // 7F27443C: cmpw    r27, r3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F274440:
    ctx->pc = 0x7F274440u;
    // 7F274440: bc    4, 2, 0x7F27448C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27448C;
        }
    }

label_7F274444:
    ctx->pc = 0x7F274444u;
    ctx->downcount -= 3;
    // 7F274444: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274448:
    ctx->pc = 0x7F274448u;
    // 7F274448: addi    r3, r3, 16564
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16564);

label_7F27444C:
    ctx->pc = 0x7F27444Cu;
    // 7F27444C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274450u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274450:
    ctx->pc = 0x7F274450u;
    ctx->downcount -= 4;
    // 7F274450: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274454:
    ctx->pc = 0x7F274454u;
    // 7F274454: stw     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274458:
    ctx->pc = 0x7F274458u;
    // 7F274458: addi    r3, r4, 16580
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16580);

label_7F27445C:
    ctx->pc = 0x7F27445Cu;
    // 7F27445C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274460u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274460:
    ctx->pc = 0x7F274460u;
    ctx->downcount -= 4;
    // 7F274460: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274464:
    ctx->pc = 0x7F274464u;
    // 7F274464: stw     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274468:
    ctx->pc = 0x7F274468u;
    // 7F274468: addi    r3, r4, 16596
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16596);

label_7F27446C:
    ctx->pc = 0x7F27446Cu;
    // 7F27446C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274470u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274470:
    ctx->pc = 0x7F274470u;
    ctx->downcount -= 4;
    // 7F274470: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274474:
    ctx->pc = 0x7F274474u;
    // 7F274474: stw     r3, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274478:
    ctx->pc = 0x7F274478u;
    // 7F274478: addi    r3, r4, 16612
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16612);

label_7F27447C:
    ctx->pc = 0x7F27447Cu;
    // 7F27447C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274480u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274480:
    ctx->pc = 0x7F274480u;
    ctx->downcount -= 3;
    // 7F274480: lis     r4, 39
    ctx->gpr[4] = ((u32)(s32)(39) << 16);

label_7F274484:
    ctx->pc = 0x7F274484u;
    // 7F274484: stw     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274488:
    ctx->pc = 0x7F274488u;
    // 7F274488: addi    r26, r4, 15242
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(15242);

label_7F27448C:
    ctx->pc = 0x7F27448Cu;
    ctx->downcount -= 10;
    // 7F27448C: stw     r26, 572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F274490:
    ctx->pc = 0x7F274490u;
    // 7F274490: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274494:
    ctx->pc = 0x7F274494u;
    // 7F274494: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274498:
    ctx->pc = 0x7F274498u;
    // 7F274498: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27449C:
    ctx->pc = 0x7F27449Cu;
    // 7F27449C: stw     r0, 548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2744A0:
    ctx->pc = 0x7F2744A0u;
    // 7F2744A0: addi    r3, r3, -7988
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7988);

label_7F2744A4:
    ctx->pc = 0x7F2744A4u;
    // 7F2744A4: stw     r0, -7976(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2744A8:
    ctx->pc = 0x7F2744A8u;
    // 7F2744A8: stw     r0, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2744AC:
    ctx->pc = 0x7F2744ACu;
    // 7F2744AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2744B0:
    ctx->pc = 0x7F2744B0u;
    // 7F2744B0: bl      0x7F01ED70
    {
            ctx->lr = 0x7F2744B4u;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F2744B4:
    ctx->pc = 0x7F2744B4u;
    ctx->downcount -= 8;
    // 7F2744B4: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2744B8:
    ctx->pc = 0x7F2744B8u;
    // 7F2744B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2744BC:
    ctx->pc = 0x7F2744BCu;
    // 7F2744BC: lfs     f0, 24940(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2744BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2744C0:
    ctx->pc = 0x7F2744C0u;
    // 7F2744C0: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2744C4:
    ctx->pc = 0x7F2744C4u;
    // 7F2744C4: stfs     f0, 152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2744C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2744C8:
    ctx->pc = 0x7F2744C8u;
    // 7F2744C8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2744CC:
    ctx->pc = 0x7F2744CCu;
    // 7F2744CC: cmpwi   r0, 0
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

label_7F2744D0:
    ctx->pc = 0x7F2744D0u;
    // 7F2744D0: bc    12, 1, 0x7F2744E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2744E0;
        }
    }

label_7F2744D4:
    ctx->pc = 0x7F2744D4u;
    ctx->downcount -= 3;
    // 7F2744D4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F2744D8:
    ctx->pc = 0x7F2744D8u;
    // 7F2744D8: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2744DC:
    ctx->pc = 0x7F2744DCu;
    // 7F2744DC: b       0x7F274538
    {
            goto label_7F274538;
    }

label_7F2744E0:
    ctx->pc = 0x7F2744E0u;
    ctx->downcount -= 2;
    // 7F2744E0: cmpwi   r0, 5
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

label_7F2744E4:
    ctx->pc = 0x7F2744E4u;
    // 7F2744E4: bc    12, 1, 0x7F2744F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2744F4;
        }
    }

label_7F2744E8:
    ctx->pc = 0x7F2744E8u;
    ctx->downcount -= 3;
    // 7F2744E8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F2744EC:
    ctx->pc = 0x7F2744ECu;
    // 7F2744EC: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2744F0:
    ctx->pc = 0x7F2744F0u;
    // 7F2744F0: b       0x7F274538
    {
            goto label_7F274538;
    }

label_7F2744F4:
    ctx->pc = 0x7F2744F4u;
    ctx->downcount -= 2;
    // 7F2744F4: cmpwi   r0, 10
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

label_7F2744F8:
    ctx->pc = 0x7F2744F8u;
    // 7F2744F8: bc    12, 1, 0x7F274508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274508;
        }
    }

label_7F2744FC:
    ctx->pc = 0x7F2744FCu;
    ctx->downcount -= 3;
    // 7F2744FC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F274500:
    ctx->pc = 0x7F274500u;
    // 7F274500: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274504:
    ctx->pc = 0x7F274504u;
    // 7F274504: b       0x7F274538
    {
            goto label_7F274538;
    }

label_7F274508:
    ctx->pc = 0x7F274508u;
    ctx->downcount -= 2;
    // 7F274508: cmpwi   r0, 15
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

label_7F27450C:
    ctx->pc = 0x7F27450Cu;
    // 7F27450C: bc    12, 1, 0x7F27451C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27451C;
        }
    }

label_7F274510:
    ctx->pc = 0x7F274510u;
    ctx->downcount -= 3;
    // 7F274510: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F274514:
    ctx->pc = 0x7F274514u;
    // 7F274514: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274518:
    ctx->pc = 0x7F274518u;
    // 7F274518: b       0x7F274538
    {
            goto label_7F274538;
    }

label_7F27451C:
    ctx->pc = 0x7F27451Cu;
    ctx->downcount -= 2;
    // 7F27451C: cmpwi   r0, 20
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

label_7F274520:
    ctx->pc = 0x7F274520u;
    // 7F274520: bc    12, 1, 0x7F274530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274530;
        }
    }

label_7F274524:
    ctx->pc = 0x7F274524u;
    ctx->downcount -= 3;
    // 7F274524: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F274528:
    ctx->pc = 0x7F274528u;
    // 7F274528: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27452C:
    ctx->pc = 0x7F27452Cu;
    // 7F27452C: b       0x7F274538
    {
            goto label_7F274538;
    }

label_7F274530:
    ctx->pc = 0x7F274530u;
    ctx->downcount -= 2;
    // 7F274530: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274534:
    ctx->pc = 0x7F274534u;
    // 7F274534: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274538:
    ctx->pc = 0x7F274538u;
    ctx->downcount -= 16;
    // 7F274538: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27453C:
    ctx->pc = 0x7F27453Cu;
    // 7F27453C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F274540:
    ctx->pc = 0x7F274540u;
    // 7F274540: lfs     f0, 24808(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274540u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274544:
    ctx->pc = 0x7F274544u;
    // 7F274544: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F274548:
    ctx->pc = 0x7F274548u;
    // 7F274548: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F27454C:
    ctx->pc = 0x7F27454Cu;
    // 7F27454C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F274550:
    ctx->pc = 0x7F274550u;
    // 7F274550: stfs     f0, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274550u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274554:
    ctx->pc = 0x7F274554u;
    // 7F274554: addi    r7, r6, -8000
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-8000);

label_7F274558:
    ctx->pc = 0x7F274558u;
    // 7F274558: addi    r6, r4, -7996
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-7996);

label_7F27455C:
    ctx->pc = 0x7F27455Cu;
    // 7F27455C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274560:
    ctx->pc = 0x7F274560u;
    // 7F274560: stfs     f0, 148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274560u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274564:
    ctx->pc = 0x7F274564u;
    // 7F274564: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F274568:
    ctx->pc = 0x7F274568u;
    // 7F274568: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_7F27456C:
    ctx->pc = 0x7F27456Cu;
    // 7F27456C: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274570:
    ctx->pc = 0x7F274570u;
    // 7F274570: stw     r26, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F274574:
    ctx->pc = 0x7F274574u;
    // 7F274574: bl      0x7F04272C
    {
            ctx->lr = 0x7F274578u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F274578:
    ctx->pc = 0x7F274578u;
    ctx->downcount -= 3;
    // 7F274578: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27457C:
    ctx->pc = 0x7F27457Cu;
    // 7F27457C: cmplwi  r4, 0x0000
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

label_7F274580:
    ctx->pc = 0x7F274580u;
    // 7F274580: bc    4, 2, 0x7F27458C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27458C;
        }
    }

label_7F274584:
    ctx->pc = 0x7F274584u;
    ctx->downcount -= 2;
    // 7F274584: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274588:
    ctx->pc = 0x7F274588u;
    // 7F274588: b       0x7F274814
    {
            goto label_7F274814;
    }

label_7F27458C:
    ctx->pc = 0x7F27458Cu;
    ctx->downcount -= 5;
    // 7F27458C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F274590:
    ctx->pc = 0x7F274590u;
    // 7F274590: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F274594:
    ctx->pc = 0x7F274594u;
    // 7F274594: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274598:
    ctx->pc = 0x7F274598u;
    // 7F274598: addi    r4, r31, 156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(156);

label_7F27459C:
    ctx->pc = 0x7F27459Cu;
    // 7F27459C: bl      0x7F042C1C
    {
            ctx->lr = 0x7F2745A0u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F2745A0:
    ctx->pc = 0x7F2745A0u;
    ctx->downcount -= 3;
    // 7F2745A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2745A4:
    ctx->pc = 0x7F2745A4u;
    // 7F2745A4: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2745A8:
    ctx->pc = 0x7F2745A8u;
    // 7F2745A8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2745ACu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2745AC:
    ctx->pc = 0x7F2745ACu;
    ctx->downcount -= 12;
    // 7F2745AC: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745B0:
    ctx->pc = 0x7F2745B0u;
    // 7F2745B0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2745B4:
    ctx->pc = 0x7F2745B4u;
    // 7F2745B4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2745B8:
    ctx->pc = 0x7F2745B8u;
    // 7F2745B8: stw     r4, 460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2745BC:
    ctx->pc = 0x7F2745BCu;
    // 7F2745BC: stw     r0, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2745C0:
    ctx->pc = 0x7F2745C0u;
    // 7F2745C0: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745C4:
    ctx->pc = 0x7F2745C4u;
    // 7F2745C4: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2745C8:
    ctx->pc = 0x7F2745C8u;
    // 7F2745C8: stw     r4, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2745CC:
    ctx->pc = 0x7F2745CCu;
    // 7F2745CC: stw     r0, 472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2745D0:
    ctx->pc = 0x7F2745D0u;
    // 7F2745D0: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745D4:
    ctx->pc = 0x7F2745D4u;
    // 7F2745D4: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2745D8:
    ctx->pc = 0x7F2745D8u;
    // 7F2745D8: bl      0x7F042B74
    {
            ctx->lr = 0x7F2745DCu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2745DC:
    ctx->pc = 0x7F2745DCu;
    ctx->downcount -= 4;
    // 7F2745DC: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2745E0:
    ctx->pc = 0x7F2745E0u;
    // 7F2745E0: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745E4:
    ctx->pc = 0x7F2745E4u;
    // 7F2745E4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2745E8:
    ctx->pc = 0x7F2745E8u;
    // 7F2745E8: bl      0x7F3B0938
    {
            ctx->lr = 0x7F2745ECu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F2745EC:
    ctx->pc = 0x7F2745ECu;
    ctx->downcount -= 5;
    // 7F2745EC: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745F0:
    ctx->pc = 0x7F2745F0u;
    // 7F2745F0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2745F4:
    ctx->pc = 0x7F2745F4u;
    // 7F2745F4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745F8:
    ctx->pc = 0x7F2745F8u;
    // 7F2745F8: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2745FC:
    ctx->pc = 0x7F2745FCu;
    // 7F2745FC: bl      0x7F042B20
    {
            ctx->lr = 0x7F274600u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F274600:
    ctx->pc = 0x7F274600u;
    ctx->downcount -= 21;
    // 7F274600: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274604:
    ctx->pc = 0x7F274604u;
    // 7F274604: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274608:
    ctx->pc = 0x7F274608u;
    // 7F274608: stw     r0, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27460C:
    ctx->pc = 0x7F27460Cu;
    // 7F27460C: addi    r5, r3, 24840
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(24840);

label_7F274610:
    ctx->pc = 0x7F274610u;
    // 7F274610: addi    r26, r31, 100
    ctx->gpr[26] = ctx->gpr[31] + (u32)(s32)(100);

label_7F274614:
    ctx->pc = 0x7F274614u;
    // 7F274614: lis     r4, 177
    ctx->gpr[4] = ((u32)(s32)(177) << 16);

label_7F274618:
    ctx->pc = 0x7F274618u;
    // 7F274618: lwz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27461C:
    ctx->pc = 0x7F27461Cu;
    // 7F27461C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F274620:
    ctx->pc = 0x7F274620u;
    // 7F274620: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274620u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274624:
    ctx->pc = 0x7F274624u;
    // 7F274624: addi    r4, r4, 29837
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29837);

label_7F274628:
    ctx->pc = 0x7F274628u;
    // 7F274628: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27462C:
    ctx->pc = 0x7F27462Cu;
    // 7F27462C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F274630:
    ctx->pc = 0x7F274630u;
    // 7F274630: lwz     r6, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F274634:
    ctx->pc = 0x7F274634u;
    // 7F274634: lwz     r6, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F274638:
    ctx->pc = 0x7F274638u;
    // 7F274638: lfs     f2, 100(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274638u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27463C:
    ctx->pc = 0x7F27463Cu;
    // 7F27463C: lfs     f1, 88(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27463Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274640:
    ctx->pc = 0x7F274640u;
    // 7F274640: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F274640u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F274644:
    ctx->pc = 0x7F274644u;
    // 7F274644: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F274644u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F274648:
    ctx->pc = 0x7F274648u;
    // 7F274648: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F274648u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F27464C:
    ctx->pc = 0x7F27464Cu;
    // 7F27464C: stfs     f0, 516(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27464Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274650:
    ctx->pc = 0x7F274650u;
    // 7F274650: bl      0x7F04272C
    {
            ctx->lr = 0x7F274654u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F274654:
    ctx->pc = 0x7F274654u;
    ctx->downcount -= 3;
    // 7F274654: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274658:
    ctx->pc = 0x7F274658u;
    // 7F274658: cmplwi  r0, 0x0000
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

label_7F27465C:
    ctx->pc = 0x7F27465Cu;
    // 7F27465C: bc    4, 2, 0x7F274668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274668;
        }
    }

label_7F274660:
    ctx->pc = 0x7F274660u;
    ctx->downcount -= 2;
    // 7F274660: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274664:
    ctx->pc = 0x7F274664u;
    // 7F274664: b       0x7F274814
    {
            goto label_7F274814;
    }

label_7F274668:
    ctx->pc = 0x7F274668u;
    ctx->downcount -= 3;
    // 7F274668: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27466C:
    ctx->pc = 0x7F27466Cu;
    // 7F27466C: addi    r4, r31, 156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(156);

label_7F274670:
    ctx->pc = 0x7F274670u;
    // 7F274670: bl      0x7F042C1C
    {
            ctx->lr = 0x7F274674u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F274674:
    ctx->pc = 0x7F274674u;
    ctx->downcount -= 4;
    // 7F274674: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274678:
    ctx->pc = 0x7F274678u;
    // 7F274678: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27467C:
    ctx->pc = 0x7F27467Cu;
    // 7F27467C: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F274680:
    ctx->pc = 0x7F274680u;
    // 7F274680: bl      0x7F042B74
    {
            ctx->lr = 0x7F274684u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F274684:
    ctx->pc = 0x7F274684u;
    ctx->downcount -= 12;
    // 7F274684: lwz     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F274688:
    ctx->pc = 0x7F274688u;
    // 7F274688: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27468C:
    ctx->pc = 0x7F27468Cu;
    // 7F27468C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274690:
    ctx->pc = 0x7F274690u;
    // 7F274690: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F274694:
    ctx->pc = 0x7F274694u;
    // 7F274694: lwz     r5, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F274698:
    ctx->pc = 0x7F274698u;
    // 7F274698: ori     r5, r5, 0x3000
    ctx->gpr[5] = ctx->gpr[5] | 0x3000u;

label_7F27469C:
    ctx->pc = 0x7F27469Cu;
    // 7F27469C: stw     r5, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2746A0:
    ctx->pc = 0x7F2746A0u;
    // 7F2746A0: stw     r0, -7668(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2746A4:
    ctx->pc = 0x7F2746A4u;
    // 7F2746A4: stw     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2746A8:
    ctx->pc = 0x7F2746A8u;
    // 7F2746A8: lwz     r0, 14280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2746AC:
    ctx->pc = 0x7F2746ACu;
    // 7F2746AC: cmpwi   r0, 0
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

label_7F2746B0:
    ctx->pc = 0x7F2746B0u;
    // 7F2746B0: bc    12, 2, 0x7F274740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274740;
        }
    }

label_7F2746B4:
    ctx->pc = 0x7F2746B4u;
    ctx->downcount -= 21;
    // 7F2746B4: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2746B8:
    ctx->pc = 0x7F2746B8u;
    // 7F2746B8: addi    r4, r30, 196
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(196);

label_7F2746BC:
    ctx->pc = 0x7F2746BCu;
    // 7F2746BC: lfs     f4, 516(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2746BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2746C0:
    ctx->pc = 0x7F2746C0u;
    // 7F2746C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2746C4:
    ctx->pc = 0x7F2746C4u;
    // 7F2746C4: lwz     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2746C8:
    ctx->pc = 0x7F2746C8u;
    // 7F2746C8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2746CC:
    ctx->pc = 0x7F2746CCu;
    // 7F2746CC: lwz     r6, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2746D0:
    ctx->pc = 0x7F2746D0u;
    // 7F2746D0: lwz     r6, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2746D4:
    ctx->pc = 0x7F2746D4u;
    // 7F2746D4: lfs     f2, 92(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746D4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2746D8:
    ctx->pc = 0x7F2746D8u;
    // 7F2746D8: lfs     f0, 80(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2746DC:
    ctx->pc = 0x7F2746DCu;
    // 7F2746DC: lfs     f3, 96(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2746E0:
    ctx->pc = 0x7F2746E0u;
    // 7F2746E0: lfs     f1, 84(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2746E4:
    ctx->pc = 0x7F2746E4u;
    // 7F2746E4: fsubs   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2746E4u)) return;
    ppc_fsubs(ctx, 31, 2, 0);

label_7F2746E8:
    ctx->pc = 0x7F2746E8u;
    // 7F2746E8: lfs     f2, 100(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2746EC:
    ctx->pc = 0x7F2746ECu;
    // 7F2746EC: lfs     f0, 88(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2746ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2746F0:
    ctx->pc = 0x7F2746F0u;
    // 7F2746F0: fsubs   f30, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2746F0u)) return;
    ppc_fsubs(ctx, 30, 3, 1);

label_7F2746F4:
    ctx->pc = 0x7F2746F4u;
    // 7F2746F4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2746F4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F2746F8:
    ctx->pc = 0x7F2746F8u;
    // 7F2746F8: fsubs   f29, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2746F8u)) return;
    ppc_fsubs(ctx, 29, 2, 0);

label_7F2746FC:
    ctx->pc = 0x7F2746FCu;
    // 7F2746FC: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2746FCu)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_7F274700:
    ctx->pc = 0x7F274700u;
    // 7F274700: fmr    f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F274700u)) return;
    ctx->fpr[2] = ctx->fpr[29];

label_7F274704:
    ctx->pc = 0x7F274704u;
    // 7F274704: bl      0x7F1ED070
    {
            ctx->lr = 0x7F274708u;
            ctx->pc = 0x7F1ED070u;
            return;
    }

label_7F274708:
    ctx->pc = 0x7F274708u;
    ctx->downcount -= 3;
    // 7F274708: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27470C:
    ctx->pc = 0x7F27470Cu;
    // 7F27470C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274710:
    ctx->pc = 0x7F274710u;
    // 7F274710: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F274714u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F274714:
    ctx->pc = 0x7F274714u;
    ctx->downcount -= 9;
    // 7F274714: stfs     f31, 520(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274714u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(520);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F274718:
    ctx->pc = 0x7F274718u;
    // 7F274718: lis     r3, 37
    ctx->gpr[3] = ((u32)(s32)(37) << 16);

label_7F27471C:
    ctx->pc = 0x7F27471Cu;
    // 7F27471C: addi    r4, r3, 15242
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15242);

label_7F274720:
    ctx->pc = 0x7F274720u;
    // 7F274720: stfs     f30, 524(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274720u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(524);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F274724:
    ctx->pc = 0x7F274724u;
    // 7F274724: stfs     f29, 528(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274724u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F274728:
    ctx->pc = 0x7F274728u;
    // 7F274728: lfs     f0, 516(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274728u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27472C:
    ctx->pc = 0x7F27472Cu;
    // 7F27472C: stfs     f0, 532(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27472Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(532);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274730:
    ctx->pc = 0x7F274730u;
    // 7F274730: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274734:
    ctx->pc = 0x7F274734u;
    // 7F274734: bl      0x7F1C315C
    {
            ctx->lr = 0x7F274738u;
            ctx->pc = 0x7F1C315Cu;
            return;
    }

label_7F274738:
    ctx->pc = 0x7F274738u;
    ctx->downcount -= 2;
    // 7F274738: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27473C:
    ctx->pc = 0x7F27473Cu;
    // 7F27473C: stw     r3, -7668(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7668);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274740:
    ctx->pc = 0x7F274740u;
    ctx->downcount -= 6;
    // 7F274740: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F274744:
    ctx->pc = 0x7F274744u;
    // 7F274744: lwz     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274748:
    ctx->pc = 0x7F274748u;
    // 7F274748: lwz     r28, -7980(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7980);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F27474C:
    ctx->pc = 0x7F27474Cu;
    // 7F27474C: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_7F274750:
    ctx->pc = 0x7F274750u;
    // 7F274750: addi    r26, r3, 768
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(768);

label_7F274754:
    ctx->pc = 0x7F274754u;
    // 7F274754: b       0x7F27478C
    {
            goto label_7F27478C;
    }

label_7F274758:
    ctx->downcount -= 3;
    // 7F274758: srawi r28, r28, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[28];
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

label_7F27475C:
    // 7F27475C: rlwinm. r0, r28, 0, 31, 31
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

label_7F274760:
    // 7F274760: bc    12, 2, 0x7F274784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274784;
        }
    }

label_7F274764:
    ctx->downcount -= 2;
    // 7F274764: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F274768:
    // 7F274768: bl      0x7F1ECBF4
    {
            ctx->lr = 0x7F27476Cu;
            ctx->pc = 0x7F1ECBF4u;
            return;
    }

label_7F27476C:
    ctx->downcount -= 3;
    // 7F27476C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274770:
    // 7F274770: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274774:
    // 7F274774: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F274778u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F274778:
    ctx->pc = 0x7F274778u;
    ctx->downcount -= 3;
    // 7F274778: lwz     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27477C:
    // 7F27477C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F274780:
    ctx->pc = 0x7F274780u;
    // 7F274780: stw     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274784:
    ctx->downcount -= 2;
    // 7F274784: addi    r26, r26, 324
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(324);

label_7F274788:
    // 7F274788: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F27478C:
    ctx->pc = 0x7F27478Cu;
    ctx->downcount -= 4;
    // 7F27478C: lwz     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274790:
    ctx->pc = 0x7F274790u;
    // 7F274790: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F274794:
    // 7F274794: cmpw    r27, r0
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

label_7F274798:
    // 7F274798: bc    12, 0, 0x7F274758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274758u;
                return;
            }
            goto label_7F274758;
        }
    }

label_7F27479C:
    ctx->pc = 0x7F27479Cu;
    ctx->downcount -= 7;
    // 7F27479C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2747A0:
    ctx->pc = 0x7F2747A0u;
    // 7F2747A0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2747A4:
    ctx->pc = 0x7F2747A4u;
    // 7F2747A4: addi    r3, r3, -7988
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7988);

label_7F2747A8:
    ctx->pc = 0x7F2747A8u;
    // 7F2747A8: addi    r0, r31, 56
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(56);

label_7F2747AC:
    ctx->pc = 0x7F2747ACu;
    // 7F2747AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2747B0:
    ctx->pc = 0x7F2747B0u;
    // 7F2747B0: stw     r0, -5684(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2747B4:
    ctx->pc = 0x7F2747B4u;
    // 7F2747B4: bl      0x7F272CAC
    {
            ctx->lr = 0x7F2747B8u;
            ctx->pc = 0x7F272CACu;
            return;
    }

label_7F2747B8:
    ctx->pc = 0x7F2747B8u;
    ctx->downcount -= 4;
    // 7F2747B8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2747BC:
    ctx->pc = 0x7F2747BCu;
    // 7F2747BC: addi    r3, r3, -7988
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7988);

label_7F2747C0:
    ctx->pc = 0x7F2747C0u;
    // 7F2747C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2747C4:
    ctx->pc = 0x7F2747C4u;
    // 7F2747C4: bl      0x7F272D00
    {
            ctx->lr = 0x7F2747C8u;
            ctx->pc = 0x7F272D00u;
            return;
    }

label_7F2747C8:
    ctx->pc = 0x7F2747C8u;
    ctx->downcount -= 13;
    // 7F2747C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2747CC:
    ctx->pc = 0x7F2747CCu;
    // 7F2747CC: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F2747D0:
    ctx->pc = 0x7F2747D0u;
    // 7F2747D0: addi    r5, r4, -5660
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F2747D4:
    ctx->pc = 0x7F2747D4u;
    // 7F2747D4: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2747D8:
    ctx->pc = 0x7F2747D8u;
    // 7F2747D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2747DC:
    ctx->pc = 0x7F2747DCu;
    // 7F2747DC: lwz     r0, 4064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2747E0:
    ctx->pc = 0x7F2747E0u;
    // 7F2747E0: lwz     r5, 4068(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4068);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2747E4:
    ctx->pc = 0x7F2747E4u;
    // 7F2747E4: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F2747E8:
    ctx->pc = 0x7F2747E8u;
    // 7F2747E8: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F2747EC:
    ctx->pc = 0x7F2747ECu;
    // 7F2747EC: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F2747F0:
    ctx->pc = 0x7F2747F0u;
    // 7F2747F0: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F2747F4:
    ctx->pc = 0x7F2747F4u;
    // 7F2747F4: or.   r0, r3, r0
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

label_7F2747F8:
    ctx->pc = 0x7F2747F8u;
    // 7F2747F8: bc    4, 2, 0x7F274810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274810;
        }
    }

label_7F2747FC:
    ctx->pc = 0x7F2747FCu;
    ctx->downcount -= 5;
    // 7F2747FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F274800:
    ctx->pc = 0x7F274800u;
    // 7F274800: li      r3, 2162
    ctx->gpr[3] = (u32)(s32)(2162);

label_7F274804:
    ctx->pc = 0x7F274804u;
    // 7F274804: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F274808:
    ctx->pc = 0x7F274808u;
    // 7F274808: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27480C:
    ctx->pc = 0x7F27480Cu;
    // 7F27480C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F274810u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F274810:
    ctx->pc = 0x7F274810u;
    ctx->downcount -= 1;
    // 7F274810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F274814:
    ctx->pc = 0x7F274814u;
    ctx->downcount -= 22;
    // 7F274814: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F274814u);
        if (ctx->exception) return;
    }

label_7F274818:
    ctx->pc = 0x7F274818u;
    // 7F274818: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27481C:
    ctx->pc = 0x7F27481Cu;
    // 7F27481C: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27481Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F27481Cu);
        if (ctx->exception) return;
    }

label_7F274820:
    ctx->pc = 0x7F274820u;
    // 7F274820: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F274824:
    ctx->pc = 0x7F274824u;
    // 7F274824: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F274824u);
        if (ctx->exception) return;
    }

label_7F274828:
    ctx->pc = 0x7F274828u;
    // 7F274828: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27482C:
    ctx->pc = 0x7F27482Cu;
    // 7F27482C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F274830:
    ctx->pc = 0x7F274830u;
    // 7F274830: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274834:
    ctx->pc = 0x7F274834u;
    // 7F274834: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274838:
    ctx->pc = 0x7F274838u;
    // 7F274838: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F27483C:
    ctx->pc = 0x7F27483Cu;
    // 7F27483C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274840:
    ctx->pc = 0x7F274840u;
    ctx->downcount -= 29;
    // 7F274840: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274844:
    ctx->pc = 0x7F274844u;
    // 7F274844: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274848:
    ctx->pc = 0x7F274848u;
    // 7F274848: lis     r9, 32585
    ctx->gpr[9] = ((u32)(s32)(32585) << 16);

label_7F27484C:
    ctx->pc = 0x7F27484Cu;
    // 7F27484C: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F274850:
    ctx->pc = 0x7F274850u;
    // 7F274850: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274854:
    ctx->pc = 0x7F274854u;
    // 7F274854: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F274858:
    ctx->pc = 0x7F274858u;
    // 7F274858: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27485C:
    ctx->pc = 0x7F27485Cu;
    // 7F27485C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F274860:
    ctx->pc = 0x7F274860u;
    // 7F274860: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F274864:
    ctx->pc = 0x7F274864u;
    // 7F274864: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F274868:
    ctx->pc = 0x7F274868u;
    // 7F274868: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27486C:
    ctx->pc = 0x7F27486Cu;
    // 7F27486C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F274870:
    ctx->pc = 0x7F274870u;
    // 7F274870: li      r5, 704
    ctx->gpr[5] = (u32)(s32)(704);

label_7F274874:
    ctx->pc = 0x7F274874u;
    // 7F274874: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F274878:
    ctx->pc = 0x7F274878u;
    // 7F274878: lwz     r3, 13880(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27487C:
    ctx->pc = 0x7F27487Cu;
    // 7F27487C: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F274880:
    ctx->pc = 0x7F274880u;
    // 7F274880: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F274884:
    ctx->pc = 0x7F274884u;
    // 7F274884: stw     r0, -7988(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-7988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274888:
    ctx->pc = 0x7F274888u;
    // 7F274888: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27488Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27488C:
    ctx->pc = 0x7F27488Cu;
    ctx->downcount -= 2;
    // 7F27488C: or.   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F274890:
    ctx->pc = 0x7F274890u;
    // 7F274890: bc    12, 2, 0x7F27491C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27491C;
        }
    }

label_7F274894:
    ctx->pc = 0x7F274894u;
    ctx->downcount -= 5;
    // 7F274894: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F274898:
    ctx->pc = 0x7F274898u;
    // 7F274898: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F27489C:
    ctx->pc = 0x7F27489Cu;
    // 7F27489C: addi    r4, r4, 14800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14800);

label_7F2748A0:
    ctx->pc = 0x7F2748A0u;
    // 7F2748A0: addi    r5, r5, 16612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16612);

label_7F2748A4:
    ctx->pc = 0x7F2748A4u;
    // 7F2748A4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2748A8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2748A8:
    ctx->pc = 0x7F2748A8u;
    ctx->downcount -= 16;
    // 7F2748A8: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2748AC:
    ctx->pc = 0x7F2748ACu;
    // 7F2748AC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2748B0:
    ctx->pc = 0x7F2748B0u;
    // 7F2748B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2748B4:
    ctx->pc = 0x7F2748B4u;
    // 7F2748B4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2748B8:
    ctx->pc = 0x7F2748B8u;
    // 7F2748B8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2748BC:
    ctx->pc = 0x7F2748BCu;
    // 7F2748BC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2748C0:
    ctx->pc = 0x7F2748C0u;
    // 7F2748C0: stw     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2748C4:
    ctx->pc = 0x7F2748C4u;
    // 7F2748C4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2748C8:
    ctx->pc = 0x7F2748C8u;
    // 7F2748C8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2748CC:
    ctx->pc = 0x7F2748CCu;
    // 7F2748CC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2748D0:
    ctx->pc = 0x7F2748D0u;
    // 7F2748D0: stw     r8, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2748D4:
    ctx->pc = 0x7F2748D4u;
    // 7F2748D4: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2748D8:
    ctx->pc = 0x7F2748D8u;
    // 7F2748D8: stw     r8, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2748DC:
    ctx->pc = 0x7F2748DCu;
    // 7F2748DC: stw     r8, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2748E0:
    ctx->pc = 0x7F2748E0u;
    // 7F2748E0: stw     r0, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2748E4:
    ctx->pc = 0x7F2748E4u;
    // 7F2748E4: bl      0x7F274260
    {
            ctx->lr = 0x7F2748E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274260u;
                return;
            }
            goto label_7F274260;
    }

label_7F2748E8:
    ctx->pc = 0x7F2748E8u;
    ctx->downcount -= 2;
    // 7F2748E8: cmpwi   r3, 0
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

label_7F2748EC:
    ctx->pc = 0x7F2748ECu;
    // 7F2748EC: bc    4, 0, 0x7F274900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274900;
        }
    }

label_7F2748F0:
    ctx->pc = 0x7F2748F0u;
    ctx->downcount -= 2;
    // 7F2748F0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2748F4:
    ctx->pc = 0x7F2748F4u;
    // 7F2748F4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2748F8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2748F8:
    ctx->pc = 0x7F2748F8u;
    ctx->downcount -= 2;
    // 7F2748F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2748FC:
    ctx->pc = 0x7F2748FCu;
    // 7F2748FC: b       0x7F274920
    {
            goto label_7F274920;
    }

label_7F274900:
    ctx->pc = 0x7F274900u;
    ctx->downcount -= 7;
    // 7F274900: stw     r28, 488(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F274904:
    ctx->pc = 0x7F274904u;
    // 7F274904: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274908:
    ctx->pc = 0x7F274908u;
    // 7F274908: stw     r29, 492(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F27490C:
    ctx->pc = 0x7F27490Cu;
    // 7F27490C: stw     r30, 496(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F274910:
    ctx->pc = 0x7F274910u;
    // 7F274910: stw     r31, 500(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F274914:
    ctx->pc = 0x7F274914u;
    // 7F274914: lwz     r0, -5852(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274918:
    ctx->pc = 0x7F274918u;
    // 7F274918: stw     r0, 508(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27491C:
    ctx->pc = 0x7F27491Cu;
    ctx->downcount -= 1;
    // 7F27491C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F274920:
    ctx->pc = 0x7F274920u;
    ctx->downcount -= 16;
    // 7F274920: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F274924:
    ctx->pc = 0x7F274924u;
    // 7F274924: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274928:
    ctx->pc = 0x7F274928u;
    // 7F274928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27492C:
    ctx->pc = 0x7F27492Cu;
    // 7F27492C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274930:
    ctx->pc = 0x7F274930u;
    // 7F274930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274934:
    ctx->pc = 0x7F274934u;
    ctx->downcount -= 21;
    // 7F274934: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274938:
    ctx->pc = 0x7F274938u;
    // 7F274938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27493C:
    ctx->pc = 0x7F27493Cu;
    // 7F27493C: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F274940:
    ctx->pc = 0x7F274940u;
    // 7F274940: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274944:
    ctx->pc = 0x7F274944u;
    // 7F274944: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F274948:
    ctx->pc = 0x7F274948u;
    // 7F274948: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27494C:
    ctx->pc = 0x7F27494Cu;
    // 7F27494C: addi    r3, r7, 16268
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(16268);

label_7F274950:
    ctx->pc = 0x7F274950u;
    // 7F274950: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F274954:
    ctx->pc = 0x7F274954u;
    // 7F274954: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F274958:
    ctx->pc = 0x7F274958u;
    // 7F274958: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27495C:
    ctx->pc = 0x7F27495Cu;
    // 7F27495C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274960u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274960:
    ctx->pc = 0x7F274960u;
    ctx->downcount -= 6;
    // 7F274960: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274964:
    ctx->pc = 0x7F274964u;
    // 7F274964: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F274968:
    ctx->pc = 0x7F274968u;
    // 7F274968: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27496C:
    ctx->pc = 0x7F27496Cu;
    // 7F27496C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F274970:
    ctx->pc = 0x7F274970u;
    // 7F274970: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274974:
    ctx->pc = 0x7F274974u;
    // 7F274974: bl      0x7F274840
    {
            ctx->lr = 0x7F274978u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274840u;
                return;
            }
            goto label_7F274840;
    }

label_7F274978:
    ctx->pc = 0x7F274978u;
    ctx->downcount -= 16;
    // 7F274978: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27497C:
    ctx->pc = 0x7F27497Cu;
    // 7F27497C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274980:
    ctx->pc = 0x7F274980u;
    // 7F274980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274984:
    ctx->pc = 0x7F274984u;
    // 7F274984: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274988:
    ctx->pc = 0x7F274988u;
    // 7F274988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27498C:
    ctx->pc = 0x7F27498Cu;
    ctx->downcount -= 21;
    // 7F27498C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274990:
    ctx->pc = 0x7F274990u;
    // 7F274990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274994:
    ctx->pc = 0x7F274994u;
    // 7F274994: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F274998:
    ctx->pc = 0x7F274998u;
    // 7F274998: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27499C:
    ctx->pc = 0x7F27499Cu;
    // 7F27499C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2749A0:
    ctx->pc = 0x7F2749A0u;
    // 7F2749A0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2749A4:
    ctx->pc = 0x7F2749A4u;
    // 7F2749A4: addi    r3, r7, 16340
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(16340);

label_7F2749A8:
    ctx->pc = 0x7F2749A8u;
    // 7F2749A8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2749AC:
    ctx->pc = 0x7F2749ACu;
    // 7F2749AC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2749B0:
    ctx->pc = 0x7F2749B0u;
    // 7F2749B0: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2749B4:
    ctx->pc = 0x7F2749B4u;
    // 7F2749B4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2749B8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2749B8:
    ctx->pc = 0x7F2749B8u;
    ctx->downcount -= 6;
    // 7F2749B8: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2749BC:
    ctx->pc = 0x7F2749BCu;
    // 7F2749BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2749C0:
    ctx->pc = 0x7F2749C0u;
    // 7F2749C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2749C4:
    ctx->pc = 0x7F2749C4u;
    // 7F2749C4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2749C8:
    ctx->pc = 0x7F2749C8u;
    // 7F2749C8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2749CC:
    ctx->pc = 0x7F2749CCu;
    // 7F2749CC: bl      0x7F274840
    {
            ctx->lr = 0x7F2749D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274840u;
                return;
            }
            goto label_7F274840;
    }

label_7F2749D0:
    ctx->pc = 0x7F2749D0u;
    ctx->downcount -= 16;
    // 7F2749D0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2749D4:
    ctx->pc = 0x7F2749D4u;
    // 7F2749D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2749D8:
    ctx->pc = 0x7F2749D8u;
    // 7F2749D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2749DC:
    ctx->pc = 0x7F2749DCu;
    // 7F2749DC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2749E0:
    ctx->pc = 0x7F2749E0u;
    // 7F2749E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2749E4:
    ctx->pc = 0x7F2749E4u;
    ctx->downcount -= 21;
    // 7F2749E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2749E8:
    ctx->pc = 0x7F2749E8u;
    // 7F2749E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2749EC:
    ctx->pc = 0x7F2749ECu;
    // 7F2749EC: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F2749F0:
    ctx->pc = 0x7F2749F0u;
    // 7F2749F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2749F4:
    ctx->pc = 0x7F2749F4u;
    // 7F2749F4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2749F8:
    ctx->pc = 0x7F2749F8u;
    // 7F2749F8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2749FC:
    ctx->pc = 0x7F2749FCu;
    // 7F2749FC: addi    r3, r7, 16412
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(16412);

label_7F274A00:
    ctx->pc = 0x7F274A00u;
    // 7F274A00: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F274A04:
    ctx->pc = 0x7F274A04u;
    // 7F274A04: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F274A08:
    ctx->pc = 0x7F274A08u;
    // 7F274A08: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F274A0C:
    ctx->pc = 0x7F274A0Cu;
    // 7F274A0C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274A10u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274A10:
    ctx->pc = 0x7F274A10u;
    ctx->downcount -= 6;
    // 7F274A10: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274A14:
    ctx->pc = 0x7F274A14u;
    // 7F274A14: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F274A18:
    ctx->pc = 0x7F274A18u;
    // 7F274A18: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F274A1C:
    ctx->pc = 0x7F274A1Cu;
    // 7F274A1C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F274A20:
    ctx->pc = 0x7F274A20u;
    // 7F274A20: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274A24:
    ctx->pc = 0x7F274A24u;
    // 7F274A24: bl      0x7F274840
    {
            ctx->lr = 0x7F274A28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274840u;
                return;
            }
            goto label_7F274840;
    }

label_7F274A28:
    ctx->pc = 0x7F274A28u;
    ctx->downcount -= 16;
    // 7F274A28: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F274A2C:
    ctx->pc = 0x7F274A2Cu;
    // 7F274A2C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274A30:
    ctx->pc = 0x7F274A30u;
    // 7F274A30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274A34:
    ctx->pc = 0x7F274A34u;
    // 7F274A34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274A38:
    ctx->pc = 0x7F274A38u;
    // 7F274A38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274A3C:
    ctx->pc = 0x7F274A3Cu;
    ctx->downcount -= 5;
    // 7F274A3C: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F274A40:
    ctx->pc = 0x7F274A40u;
    // 7F274A40: addi    r5, r3, 444
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(444);

label_7F274A44:
    ctx->pc = 0x7F274A44u;
    // 7F274A44: li      r3, 19
    ctx->gpr[3] = (u32)(s32)(19);

label_7F274A48:
    ctx->pc = 0x7F274A48u;
    // 7F274A48: cmpwi   r0, 19
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

label_7F274A4C:
    ctx->pc = 0x7F274A4Cu;
    // 7F274A4C: bc    4, 0, 0x7F274A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274A54;
        }
    }

label_7F274A50:
    ctx->pc = 0x7F274A50u;
    ctx->downcount -= 1;
    // 7F274A50: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F274A54:
    ctx->pc = 0x7F274A54u;
    ctx->downcount -= 4;
    // 7F274A54: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F274A58:
    ctx->pc = 0x7F274A58u;
    // 7F274A58: cmpwi   r3, 0
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

label_7F274A5C:
    ctx->pc = 0x7F274A5Cu;
    // 7F274A5C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274A60:
    ctx->downcount -= 2;
    // 7F274A60: rlwinm. r0, r4, 0, 31, 31
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

label_7F274A64:
    // 7F274A64: bc    4, 2, 0x7F274A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274A78;
        }
    }

label_7F274A68:
    ctx->pc = 0x7F274A68u;
    ctx->downcount -= 4;
    // 7F274A68: lwz     r0, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274A6C:
    // 7F274A6C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F274A70:
    ctx->pc = 0x7F274A70u;
    // 7F274A70: stw     r0, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274A74:
    // 7F274A74: b       0x7F274A84
    {
            goto label_7F274A84;
    }

label_7F274A78:
    ctx->pc = 0x7F274A78u;
    ctx->downcount -= 3;
    // 7F274A78: lwz     r0, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274A7C:
    // 7F274A7C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F274A80:
    ctx->pc = 0x7F274A80u;
    // 7F274A80: stw     r0, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274A84:
    ctx->downcount -= 3;
    // 7F274A84: srawi r4, r4, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[4];
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

label_7F274A88:
    // 7F274A88: addi    r5, r5, 324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(324);

label_7F274A8C:
    // 7F274A8C: bc    16, 0, 0x7F274A60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274A60u;
                return;
            }
            goto label_7F274A60;
        }
    }

label_7F274A90:
    ctx->pc = 0x7F274A90u;
    ctx->downcount -= 1;
    // 7F274A90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274A94:
    ctx->pc = 0x7F274A94u;
    ctx->downcount -= 18;
    // 7F274A94: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274A98:
    ctx->pc = 0x7F274A98u;
    // 7F274A98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274A9C:
    ctx->pc = 0x7F274A9Cu;
    // 7F274A9C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274AA0:
    ctx->pc = 0x7F274AA0u;
    // 7F274AA0: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F274AA4:
    ctx->pc = 0x7F274AA4u;
    // 7F274AA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274AA8:
    ctx->pc = 0x7F274AA8u;
    // 7F274AA8: lwz     r0, 500(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274AAC:
    ctx->pc = 0x7F274AACu;
    // 7F274AAC: cmpwi   r0, 0
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

label_7F274AB0:
    ctx->pc = 0x7F274AB0u;
    // 7F274AB0: bc    4, 1, 0x7F274BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274BFC;
        }
    }

label_7F274AB4:
    ctx->pc = 0x7F274AB4u;
    ctx->downcount -= 3;
    // 7F274AB4: lwz     r3, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274AB8:
    ctx->pc = 0x7F274AB8u;
    // 7F274AB8: addi    r4, r3, 32
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32);

label_7F274ABC:
    ctx->pc = 0x7F274ABCu;
    // 7F274ABC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F274AC0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F274AC0:
    ctx->pc = 0x7F274AC0u;
    ctx->downcount -= 12;
    // 7F274AC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274AC4:
    ctx->pc = 0x7F274AC4u;
    // 7F274AC4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274AC8:
    ctx->pc = 0x7F274AC8u;
    // 7F274AC8: addi    r5, r3, 24808
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(24808);

label_7F274ACC:
    ctx->pc = 0x7F274ACCu;
    // 7F274ACC: lfs     f0, 24976(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274ACCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274AD0:
    ctx->pc = 0x7F274AD0u;
    // 7F274AD0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274AD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274AD4:
    ctx->pc = 0x7F274AD4u;
    // 7F274AD4: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F274AD8:
    ctx->pc = 0x7F274AD8u;
    // 7F274AD8: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274ADC:
    ctx->pc = 0x7F274ADCu;
    // 7F274ADC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274AE0:
    ctx->pc = 0x7F274AE0u;
    // 7F274AE0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F274AE4:
    ctx->pc = 0x7F274AE4u;
    // 7F274AE4: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274AE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274AE8:
    ctx->pc = 0x7F274AE8u;
    // 7F274AE8: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274AE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274AEC:
    ctx->pc = 0x7F274AECu;
    // 7F274AEC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F274AF0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F274AF0:
    ctx->pc = 0x7F274AF0u;
    ctx->downcount -= 16;
    // 7F274AF0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F274AF4:
    ctx->pc = 0x7F274AF4u;
    // 7F274AF4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F274AF8:
    ctx->pc = 0x7F274AF8u;
    // 7F274AF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274AFC:
    ctx->pc = 0x7F274AFCu;
    // 7F274AFC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274B00:
    ctx->pc = 0x7F274B00u;
    // 7F274B00: addi    r7, r6, 24808
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(24808);

label_7F274B04:
    ctx->pc = 0x7F274B04u;
    // 7F274B04: addi    r6, r5, 24976
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(24976);

label_7F274B08:
    ctx->pc = 0x7F274B08u;
    // 7F274B08: addi    r5, r4, 24980
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(24980);

label_7F274B0C:
    ctx->pc = 0x7F274B0Cu;
    // 7F274B0C: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F274B0Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F274B10:
    ctx->pc = 0x7F274B10u;
    // 7F274B10: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F274B10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274B14:
    ctx->pc = 0x7F274B14u;
    // 7F274B14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274B18:
    ctx->pc = 0x7F274B18u;
    // 7F274B18: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274B18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274B1C:
    ctx->pc = 0x7F274B1Cu;
    // 7F274B1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F274B20:
    ctx->pc = 0x7F274B20u;
    // 7F274B20: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274B20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F274B24:
    ctx->pc = 0x7F274B24u;
    // 7F274B24: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274B24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274B28:
    ctx->pc = 0x7F274B28u;
    // 7F274B28: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274B2C:
    ctx->pc = 0x7F274B2Cu;
    // 7F274B2C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F274B30u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F274B30:
    ctx->pc = 0x7F274B30u;
    ctx->downcount -= 3;
    // 7F274B30: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F274B34:
    ctx->pc = 0x7F274B34u;
    // 7F274B34: addi    r3, r3, 16656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16656);

label_7F274B38:
    ctx->pc = 0x7F274B38u;
    // 7F274B38: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274B3Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274B3C:
    ctx->pc = 0x7F274B3Cu;
    ctx->downcount -= 4;
    // 7F274B3C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274B40:
    ctx->pc = 0x7F274B40u;
    // 7F274B40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274B44:
    ctx->pc = 0x7F274B44u;
    // 7F274B44: addi    r3, r4, 16640
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16640);

label_7F274B48:
    ctx->pc = 0x7F274B48u;
    // 7F274B48: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274B4Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274B4C:
    ctx->pc = 0x7F274B4Cu;
    ctx->downcount -= 4;
    // 7F274B4C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F274B50:
    ctx->pc = 0x7F274B50u;
    // 7F274B50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274B54:
    ctx->pc = 0x7F274B54u;
    // 7F274B54: addi    r3, r4, 16628
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16628);

label_7F274B58:
    ctx->pc = 0x7F274B58u;
    // 7F274B58: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F274B5Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F274B5C:
    ctx->pc = 0x7F274B5Cu;
    ctx->downcount -= 23;
    // 7F274B5C: lwz     r0, 496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(496);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274B60:
    ctx->pc = 0x7F274B60u;
    // 7F274B60: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F274B64:
    ctx->pc = 0x7F274B64u;
    // 7F274B64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274B68:
    ctx->pc = 0x7F274B68u;
    // 7F274B68: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F274B6C:
    ctx->pc = 0x7F274B6Cu;
    // 7F274B6C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274B70:
    ctx->pc = 0x7F274B70u;
    // 7F274B70: addi    r11, r5, 18308
    ctx->gpr[11] = ctx->gpr[5] + (u32)(s32)(18308);

label_7F274B74:
    ctx->pc = 0x7F274B74u;
    // 7F274B74: addi    r10, r1, 32
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274B78:
    ctx->pc = 0x7F274B78u;
    // 7F274B78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274B7C:
    ctx->pc = 0x7F274B7Cu;
    // 7F274B7C: lwz     r6, 500(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(500);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F274B80:
    ctx->pc = 0x7F274B80u;
    // 7F274B80: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F274B84:
    ctx->pc = 0x7F274B84u;
    // 7F274B84: lfs     f1, 24984(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274B84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274B88:
    ctx->pc = 0x7F274B88u;
    // 7F274B88: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F274B8C:
    ctx->pc = 0x7F274B8Cu;
    // 7F274B8C: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F274B90:
    ctx->pc = 0x7F274B90u;
    // 7F274B90: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274B94:
    ctx->pc = 0x7F274B94u;
    // 7F274B94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F274B98:
    ctx->pc = 0x7F274B98u;
    // 7F274B98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F274B9C:
    ctx->pc = 0x7F274B9Cu;
    // 7F274B9C: stw     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F274BA0:
    ctx->pc = 0x7F274BA0u;
    // 7F274BA0: addi    r9, r1, 48
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(48);

label_7F274BA4:
    ctx->pc = 0x7F274BA4u;
    // 7F274BA4: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F274BA8:
    ctx->pc = 0x7F274BA8u;
    // 7F274BA8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F274BAC:
    ctx->pc = 0x7F274BACu;
    // 7F274BAC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274BB0:
    ctx->pc = 0x7F274BB0u;
    // 7F274BB0: lwz     r4, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274BB4:
    ctx->pc = 0x7F274BB4u;
    // 7F274BB4: bl      0x7F1C62E0
    {
            ctx->lr = 0x7F274BB8u;
            ctx->pc = 0x7F1C62E0u;
            return;
    }

label_7F274BB8:
    ctx->pc = 0x7F274BB8u;
    ctx->downcount -= 5;
    // 7F274BB8: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F274BBC:
    ctx->pc = 0x7F274BBCu;
    // 7F274BBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F274BC0:
    ctx->pc = 0x7F274BC0u;
    // 7F274BC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F274BC4:
    ctx->pc = 0x7F274BC4u;
    // 7F274BC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F274BC8:
    ctx->pc = 0x7F274BC8u;
    // 7F274BC8: bl      0x7F012018
    {
            ctx->lr = 0x7F274BCCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F274BCC:
    ctx->pc = 0x7F274BCCu;
    ctx->downcount -= 5;
    // 7F274BCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F274BD0:
    ctx->pc = 0x7F274BD0u;
    // 7F274BD0: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F274BD4:
    ctx->pc = 0x7F274BD4u;
    // 7F274BD4: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F274BD8:
    ctx->pc = 0x7F274BD8u;
    // 7F274BD8: or.   r0, r4, r0
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

label_7F274BDC:
    ctx->pc = 0x7F274BDCu;
    // 7F274BDC: bc    12, 2, 0x7F274BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274BF0;
        }
    }

label_7F274BE0:
    ctx->pc = 0x7F274BE0u;
    ctx->downcount -= 4;
    // 7F274BE0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F274BE4:
    ctx->pc = 0x7F274BE4u;
    // 7F274BE4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F274BE8:
    ctx->pc = 0x7F274BE8u;
    // 7F274BE8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274BEC:
    ctx->pc = 0x7F274BECu;
    // 7F274BEC: sth     r5, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F274BF0:
    ctx->pc = 0x7F274BF0u;
    ctx->downcount -= 3;
    // 7F274BF0: lwz     r3, 496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274BF4:
    ctx->pc = 0x7F274BF4u;
    // 7F274BF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F274BF8:
    ctx->pc = 0x7F274BF8u;
    // 7F274BF8: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F274BFCu;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F274BFC:
    ctx->pc = 0x7F274BFCu;
    ctx->downcount -= 16;
    // 7F274BFC: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F274C00:
    ctx->pc = 0x7F274C00u;
    // 7F274C00: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274C04:
    ctx->pc = 0x7F274C04u;
    // 7F274C04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274C08:
    ctx->pc = 0x7F274C08u;
    // 7F274C08: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F274C0C:
    ctx->pc = 0x7F274C0Cu;
    // 7F274C0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274C10:
    ctx->pc = 0x7F274C10u;
    ctx->downcount -= 12;
    // 7F274C10: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274C14:
    ctx->pc = 0x7F274C14u;
    // 7F274C14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274C18:
    ctx->pc = 0x7F274C18u;
    // 7F274C18: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274C1C:
    ctx->pc = 0x7F274C1Cu;
    // 7F274C1C: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274C1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F274C20:
    ctx->pc = 0x7F274C20u;
    // 7F274C20: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274C20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F274C20u);
        if (ctx->exception) return;
    }

label_7F274C24:
    ctx->pc = 0x7F274C24u;
    // 7F274C24: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F274C28:
    ctx->pc = 0x7F274C28u;
    // 7F274C28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274C2C:
    ctx->pc = 0x7F274C2Cu;
    // 7F274C2C: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F274C30:
    ctx->pc = 0x7F274C30u;
    // 7F274C30: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F274C34:
    ctx->pc = 0x7F274C34u;
    // 7F274C34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F274C38:
    ctx->pc = 0x7F274C38u;
    // 7F274C38: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F274C3C:
    ctx->pc = 0x7F274C3Cu;
    // 7F274C3C: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F274C40u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F274C40:
    ctx->pc = 0x7F274C40u;
    ctx->downcount -= 4;
    // 7F274C40: lwz     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274C44:
    ctx->pc = 0x7F274C44u;
    // 7F274C44: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274C48:
    ctx->pc = 0x7F274C48u;
    // 7F274C48: cmpwi   r0, 0
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

label_7F274C4C:
    ctx->pc = 0x7F274C4Cu;
    // 7F274C4C: bc    12, 2, 0x7F274C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274C74;
        }
    }

label_7F274C50:
    ctx->pc = 0x7F274C50u;
    ctx->downcount -= 2;
    // 7F274C50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274C54:
    ctx->pc = 0x7F274C54u;
    // 7F274C54: bl      0x7F274A94
    {
            ctx->lr = 0x7F274C58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274A94u;
                return;
            }
            goto label_7F274A94;
    }

label_7F274C58:
    ctx->pc = 0x7F274C58u;
    ctx->downcount -= 6;
    // 7F274C58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274C5C:
    ctx->pc = 0x7F274C5Cu;
    // 7F274C5C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F274C60:
    ctx->pc = 0x7F274C60u;
    // 7F274C60: addi    r4, r3, -7992
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7992);

label_7F274C64:
    ctx->pc = 0x7F274C64u;
    // 7F274C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274C68:
    ctx->pc = 0x7F274C68u;
    // 7F274C68: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274C6C:
    ctx->pc = 0x7F274C6Cu;
    // 7F274C6C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F274C70u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F274C70:
    ctx->pc = 0x7F274C70u;
    ctx->downcount -= 1;
    // 7F274C70: b       0x7F274DB8
    {
            goto label_7F274DB8;
    }

label_7F274C74:
    ctx->pc = 0x7F274C74u;
    ctx->downcount -= 3;
    // 7F274C74: lwz     r3, 508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274C78:
    ctx->pc = 0x7F274C78u;
    // 7F274C78: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274C7C:
    ctx->pc = 0x7F274C7Cu;
    // 7F274C7C: bl      0x7F274DD4
    {
            ctx->lr = 0x7F274C80u;
            goto label_7F274DD4;
    }

label_7F274C80:
    ctx->pc = 0x7F274C80u;
    ctx->downcount -= 10;
    // 7F274C80: lwz     r0, 512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(512);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274C84:
    ctx->pc = 0x7F274C84u;
    // 7F274C84: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F274C88:
    ctx->pc = 0x7F274C88u;
    // 7F274C88: lwz     r5, 508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(508);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F274C8C:
    ctx->pc = 0x7F274C8Cu;
    // 7F274C8C: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F274C90:
    ctx->pc = 0x7F274C90u;
    // 7F274C90: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274C94:
    ctx->pc = 0x7F274C94u;
    // 7F274C94: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F274C98:
    ctx->pc = 0x7F274C98u;
    // 7F274C98: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F274C9C:
    ctx->pc = 0x7F274C9Cu;
    // 7F274C9C: bl      0x7F3CC414
    {
            ctx->lr = 0x7F274CA0u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F274CA0:
    ctx->pc = 0x7F274CA0u;
    ctx->downcount -= 4;
    // 7F274CA0: lwz     r4, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274CA4:
    ctx->pc = 0x7F274CA4u;
    // 7F274CA4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F274CA8:
    ctx->pc = 0x7F274CA8u;
    // 7F274CA8: addi    r4, r4, 32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32);

label_7F274CAC:
    ctx->pc = 0x7F274CACu;
    // 7F274CAC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F274CB0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F274CB0:
    ctx->pc = 0x7F274CB0u;
    ctx->downcount -= 4;
    // 7F274CB0: addi    r3, r31, 156
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(156);

label_7F274CB4:
    ctx->pc = 0x7F274CB4u;
    // 7F274CB4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F274CB8:
    ctx->pc = 0x7F274CB8u;
    // 7F274CB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F274CBC:
    ctx->pc = 0x7F274CBCu;
    // 7F274CBC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F274CC0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F274CC0:
    ctx->pc = 0x7F274CC0u;
    ctx->downcount -= 3;
    // 7F274CC0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F274CC4:
    ctx->pc = 0x7F274CC4u;
    // 7F274CC4: addi    r4, r31, 92
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(92);

label_7F274CC8:
    ctx->pc = 0x7F274CC8u;
    // 7F274CC8: bl      0x7F3CC430
    {
            ctx->lr = 0x7F274CCCu;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F274CCC:
    ctx->pc = 0x7F274CCCu;
    ctx->downcount -= 2;
    // 7F274CCC: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F274CD0:
    ctx->pc = 0x7F274CD0u;
    // 7F274CD0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F274CD4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F274CD4:
    ctx->pc = 0x7F274CD4u;
    ctx->downcount -= 2;
    // 7F274CD4: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F274CD8:
    ctx->pc = 0x7F274CD8u;
    // 7F274CD8: bl      0x7F0427FC
    {
            ctx->lr = 0x7F274CDCu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F274CDC:
    ctx->pc = 0x7F274CDCu;
    ctx->downcount -= 4;
    // 7F274CDC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274CE0:
    ctx->pc = 0x7F274CE0u;
    // 7F274CE0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F274CE4:
    ctx->pc = 0x7F274CE4u;
    // 7F274CE4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F274CE8:
    ctx->pc = 0x7F274CE8u;
    // 7F274CE8: bl      0x7F3CC414
    {
            ctx->lr = 0x7F274CECu;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F274CEC:
    ctx->pc = 0x7F274CECu;
    ctx->downcount -= 9;
    // 7F274CEC: lfs     f2, 480(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274CECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F274CF0:
    ctx->pc = 0x7F274CF0u;
    // 7F274CF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274CF4:
    ctx->pc = 0x7F274CF4u;
    // 7F274CF4: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274CF8:
    ctx->pc = 0x7F274CF8u;
    // 7F274CF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274CFC:
    ctx->pc = 0x7F274CFCu;
    // 7F274CFC: lfs     f0, 24884(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274CFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24884);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274D00:
    ctx->pc = 0x7F274D00u;
    // 7F274D00: fsubs   f31, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F274D00u)) return;
    ppc_fsubs(ctx, 31, 2, 1);

label_7F274D04:
    ctx->pc = 0x7F274D04u;
    // 7F274D04: lfs     f1, 24880(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274D04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274D08:
    ctx->pc = 0x7F274D08u;
    // 7F274D08: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F274D08u)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_7F274D0C:
    ctx->pc = 0x7F274D0Cu;
    // 7F274D0C: bl      0x7F0172FC
    {
            ctx->lr = 0x7F274D10u;
            ctx->pc = 0x7F0172FCu;
            return;
    }

label_7F274D10:
    ctx->pc = 0x7F274D10u;
    ctx->downcount -= 7;
    // 7F274D10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274D14:
    ctx->pc = 0x7F274D14u;
    // 7F274D14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274D18:
    ctx->pc = 0x7F274D18u;
    // 7F274D18: lfs     f0, 24888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274D18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274D1C:
    ctx->pc = 0x7F274D1Cu;
    // 7F274D1C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F274D1Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F274D20:
    ctx->pc = 0x7F274D20u;
    // 7F274D20: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F274D20u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_7F274D24:
    ctx->pc = 0x7F274D24u;
    // 7F274D24: lfs     f1, 24880(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274D24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274D28:
    ctx->pc = 0x7F274D28u;
    // 7F274D28: bl      0x7F0172FC
    {
            ctx->lr = 0x7F274D2Cu;
            ctx->pc = 0x7F0172FCu;
            return;
    }

label_7F274D2C:
    ctx->pc = 0x7F274D2Cu;
    ctx->downcount -= 11;
    // 7F274D2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274D30:
    ctx->pc = 0x7F274D30u;
    // 7F274D30: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274D34:
    ctx->pc = 0x7F274D34u;
    // 7F274D34: addi    r5, r3, 24892
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(24892);

label_7F274D38:
    ctx->pc = 0x7F274D38u;
    // 7F274D38: lfs     f2, 24856(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274D38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24856);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F274D3C:
    ctx->pc = 0x7F274D3Cu;
    // 7F274D3C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F274D3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274D40:
    ctx->pc = 0x7F274D40u;
    // 7F274D40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274D44:
    ctx->pc = 0x7F274D44u;
    // 7F274D44: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F274D44u)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F274D48:
    ctx->pc = 0x7F274D48u;
    // 7F274D48: lfs     f0, 24808(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274D48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F274D4C:
    ctx->pc = 0x7F274D4Cu;
    // 7F274D4C: fmuls   f5, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F274D4Cu)) return;
    ppc_fmuls(ctx, 5, 2, 4);

label_7F274D50:
    ctx->pc = 0x7F274D50u;
    // 7F274D50: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F274D50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_7F274D54:
    ctx->pc = 0x7F274D54u;
    // 7F274D54: bc    4, 1, 0x7F274D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274D5C;
        }
    }

label_7F274D58:
    ctx->pc = 0x7F274D58u;
    ctx->downcount -= 1;
    // 7F274D58: fmr    f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F274D58u)) return;
    ctx->fpr[5] = ctx->fpr[0];

label_7F274D5C:
    ctx->pc = 0x7F274D5Cu;
    ctx->downcount -= 21;
    // 7F274D5C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F274D60:
    ctx->pc = 0x7F274D60u;
    // 7F274D60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F274D64:
    ctx->pc = 0x7F274D64u;
    // 7F274D64: lfs     f1, 24908(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F274D64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24908);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F274D68:
    ctx->pc = 0x7F274D68u;
    // 7F274D68: fneg    f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F274D68u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F274D6C:
    ctx->pc = 0x7F274D6Cu;
    // 7F274D6C: lfs     f2, 492(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F274D70:
    ctx->pc = 0x7F274D70u;
    // 7F274D70: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274D74:
    ctx->pc = 0x7F274D74u;
    // 7F274D74: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F274D74u)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_7F274D78:
    ctx->pc = 0x7F274D78u;
    // 7F274D78: lfs     f3, 24904(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F274D78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F274D7C:
    ctx->pc = 0x7F274D7Cu;
    // 7F274D7C: fneg    f4, f31
    if (!ppc_fp_available_inline(ctx, 0x7F274D7Cu)) return;
    ctx->fpr[4] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F274D80:
    ctx->pc = 0x7F274D80u;
    // 7F274D80: fmadds f2, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F274D80u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F274D84:
    ctx->pc = 0x7F274D84u;
    // 7F274D84: stfs     f2, 492(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F274D88:
    ctx->pc = 0x7F274D88u;
    // 7F274D88: fneg    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F274D88u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) ^ 0x8000000000000000ull);

label_7F274D8C:
    ctx->pc = 0x7F274D8Cu;
    // 7F274D8C: stfs     f5, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F274D90:
    ctx->pc = 0x7F274D90u;
    // 7F274D90: stfs     f0, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F274D94:
    ctx->pc = 0x7F274D94u;
    // 7F274D94: stfs     f1, 388(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274D98:
    ctx->pc = 0x7F274D98u;
    // 7F274D98: stfs     f2, 404(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F274D9C:
    ctx->pc = 0x7F274D9Cu;
    // 7F274D9C: stfs     f2, 412(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274D9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F274DA0:
    ctx->pc = 0x7F274DA0u;
    // 7F274DA0: stfs     f1, 428(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274DA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F274DA4:
    ctx->pc = 0x7F274DA4u;
    // 7F274DA4: stfs     f4, 452(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274DA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F274DA8:
    ctx->pc = 0x7F274DA8u;
    // 7F274DA8: stfs     f4, 468(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F274DA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F274DAC:
    ctx->pc = 0x7F274DACu;
    // 7F274DAC: bl      0x7F272CAC
    {
            ctx->lr = 0x7F274DB0u;
            ctx->pc = 0x7F272CACu;
            return;
    }

label_7F274DB0:
    ctx->pc = 0x7F274DB0u;
    ctx->downcount -= 2;
    // 7F274DB0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274DB4:
    ctx->pc = 0x7F274DB4u;
    // 7F274DB4: bl      0x7F272D00
    {
            ctx->lr = 0x7F274DB8u;
            ctx->pc = 0x7F272D00u;
            return;
    }

label_7F274DB8:
    ctx->pc = 0x7F274DB8u;
    ctx->downcount -= 8;
    // 7F274DB8: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F274DB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F274DB8u);
        if (ctx->exception) return;
    }

label_7F274DBC:
    ctx->pc = 0x7F274DBCu;
    // 7F274DBC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274DC0:
    ctx->pc = 0x7F274DC0u;
    // 7F274DC0: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F274DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F274DC4:
    ctx->pc = 0x7F274DC4u;
    // 7F274DC4: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F274DC8:
    ctx->pc = 0x7F274DC8u;
    // 7F274DC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274DCC:
    ctx->pc = 0x7F274DCCu;
    // 7F274DCC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F274DD0:
    ctx->pc = 0x7F274DD0u;
    // 7F274DD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274DD4:
    ctx->pc = 0x7F274DD4u;
    ctx->downcount -= 3;
    // 7F274DD4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F274DD8:
    ctx->pc = 0x7F274DD8u;
    // 7F274DD8: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274DDC:
    ctx->pc = 0x7F274DDCu;
    // 7F274DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274DE0:
    ctx->pc = 0x7F274DE0u;
    ctx->downcount -= 9;
    // 7F274DE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274DE4:
    ctx->pc = 0x7F274DE4u;
    // 7F274DE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274DE8:
    ctx->pc = 0x7F274DE8u;
    // 7F274DE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274DEC:
    ctx->pc = 0x7F274DECu;
    // 7F274DEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F274DF0:
    ctx->pc = 0x7F274DF0u;
    // 7F274DF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274DF4:
    ctx->pc = 0x7F274DF4u;
    // 7F274DF4: lwz     r3, 508(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274DF8:
    ctx->pc = 0x7F274DF8u;
    // 7F274DF8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274DFC:
    ctx->pc = 0x7F274DFCu;
    // 7F274DFC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274E00:
    ctx->pc = 0x7F274E00u;
    // 7F274E00: bl      0x7F3B0954
    {
            ctx->lr = 0x7F274E04u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F274E04:
    ctx->pc = 0x7F274E04u;
    ctx->downcount -= 2;
    // 7F274E04: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F274E08:
    ctx->pc = 0x7F274E08u;
    // 7F274E08: bl      0x7F042AAC
    {
            ctx->lr = 0x7F274E0Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F274E0C:
    ctx->pc = 0x7F274E0Cu;
    ctx->downcount -= 5;
    // 7F274E0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F274E10:
    ctx->pc = 0x7F274E10u;
    // 7F274E10: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F274E14:
    ctx->pc = 0x7F274E14u;
    // 7F274E14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F274E18:
    ctx->pc = 0x7F274E18u;
    // 7F274E18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F274E1C:
    ctx->pc = 0x7F274E1Cu;
    // 7F274E1C: bl      0x7F042E08
    {
            ctx->lr = 0x7F274E20u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F274E20:
    ctx->pc = 0x7F274E20u;
    ctx->downcount -= 6;
    // 7F274E20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274E24:
    ctx->pc = 0x7F274E24u;
    // 7F274E24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F274E28:
    ctx->pc = 0x7F274E28u;
    // 7F274E28: addi    r4, r3, -7992
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7992);

label_7F274E2C:
    ctx->pc = 0x7F274E2Cu;
    // 7F274E2C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274E30:
    ctx->pc = 0x7F274E30u;
    // 7F274E30: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274E34:
    ctx->pc = 0x7F274E34u;
    // 7F274E34: bl      0x7F272CAC
    {
            ctx->lr = 0x7F274E38u;
            ctx->pc = 0x7F272CACu;
            return;
    }

label_7F274E38:
    ctx->pc = 0x7F274E38u;
    ctx->downcount -= 2;
    // 7F274E38: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274E3C:
    ctx->pc = 0x7F274E3Cu;
    // 7F274E3C: bl      0x7F272D00
    {
            ctx->lr = 0x7F274E40u;
            ctx->pc = 0x7F272D00u;
            return;
    }

label_7F274E40:
    ctx->pc = 0x7F274E40u;
    ctx->downcount -= 6;
    // 7F274E40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274E44:
    ctx->pc = 0x7F274E44u;
    // 7F274E44: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F274E48:
    ctx->pc = 0x7F274E48u;
    // 7F274E48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F274E4C:
    ctx->pc = 0x7F274E4Cu;
    // 7F274E4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F274E50:
    ctx->pc = 0x7F274E50u;
    // 7F274E50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F274E54:
    ctx->pc = 0x7F274E54u;
    ctx->downcount -= 20;
    // 7F274E54: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F274E58:
    ctx->pc = 0x7F274E58u;
    // 7F274E58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F274E5C:
    ctx->pc = 0x7F274E5Cu;
    // 7F274E5C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274E60:
    ctx->pc = 0x7F274E60u;
    // 7F274E60: stmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F274E64:
    ctx->pc = 0x7F274E64u;
    // 7F274E64: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F274E68:
    ctx->pc = 0x7F274E68u;
    // 7F274E68: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F274E6C:
    ctx->pc = 0x7F274E6Cu;
    // 7F274E6C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F274E70:
    ctx->pc = 0x7F274E70u;
    // 7F274E70: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F274E74:
    ctx->pc = 0x7F274E74u;
    // 7F274E74: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F274E78:
    ctx->pc = 0x7F274E78u;
    // 7F274E78: bl      0x7F274208
    {
            ctx->lr = 0x7F274E7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274208u;
                return;
            }
            goto label_7F274208;
    }

label_7F274E7C:
    ctx->pc = 0x7F274E7Cu;
    ctx->downcount -= 1;
    // 7F274E7C: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F274E80u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F274E80:
    ctx->pc = 0x7F274E80u;
    ctx->downcount -= 5;
    // 7F274E80: stw     r3, 496(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274E84:
    ctx->pc = 0x7F274E84u;
    // 7F274E84: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F274E88:
    ctx->pc = 0x7F274E88u;
    // 7F274E88: lwz     r0, 22156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274E8C:
    ctx->pc = 0x7F274E8Cu;
    // 7F274E8C: cmplwi  r0, 0x0000
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

label_7F274E90:
    ctx->pc = 0x7F274E90u;
    // 7F274E90: bc    12, 2, 0x7F274EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274EC0;
        }
    }

label_7F274E94:
    ctx->pc = 0x7F274E94u;
    ctx->downcount -= 4;
    // 7F274E94: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274E98:
    ctx->pc = 0x7F274E98u;
    // 7F274E98: lwz     r0, -8000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274E9C:
    ctx->pc = 0x7F274E9Cu;
    // 7F274E9C: cmplwi  r0, 0x0000
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

label_7F274EA0:
    ctx->pc = 0x7F274EA0u;
    // 7F274EA0: bc    12, 2, 0x7F274EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274EC0;
        }
    }

label_7F274EA4:
    ctx->pc = 0x7F274EA4u;
    ctx->downcount -= 7;
    // 7F274EA4: lwz     r3, 496(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274EA8:
    ctx->pc = 0x7F274EA8u;
    // 7F274EA8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F274EAC:
    ctx->pc = 0x7F274EACu;
    // 7F274EAC: addi    r4, r4, 332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(332);

label_7F274EB0:
    ctx->pc = 0x7F274EB0u;
    // 7F274EB0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F274EB4:
    ctx->pc = 0x7F274EB4u;
    // 7F274EB4: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274EB8:
    ctx->pc = 0x7F274EB8u;
    // 7F274EB8: rlwinm. r0, r0, 0, 28, 28
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

label_7F274EBC:
    ctx->pc = 0x7F274EBCu;
    // 7F274EBC: bc    4, 2, 0x7F274EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274EC8;
        }
    }

label_7F274EC0:
    ctx->pc = 0x7F274EC0u;
    ctx->downcount -= 2;
    // 7F274EC0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274EC4:
    ctx->pc = 0x7F274EC4u;
    // 7F274EC4: b       0x7F2750F4
    {
            goto label_7F2750F4;
    }

label_7F274EC8:
    ctx->pc = 0x7F274EC8u;
    ctx->downcount -= 1;
    // 7F274EC8: bl      0x7F01ED70
    {
            ctx->lr = 0x7F274ECCu;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F274ECC:
    ctx->pc = 0x7F274ECCu;
    ctx->downcount -= 8;
    // 7F274ECC: stw     r3, 500(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274ED0:
    ctx->pc = 0x7F274ED0u;
    // 7F274ED0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F274ED4:
    ctx->pc = 0x7F274ED4u;
    // 7F274ED4: addi    r31, r26, 48
    ctx->gpr[31] = ctx->gpr[26] + (u32)(s32)(48);

label_7F274ED8:
    ctx->pc = 0x7F274ED8u;
    // 7F274ED8: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F274EDC:
    ctx->pc = 0x7F274EDCu;
    // 7F274EDC: lwz     r4, -7996(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7996);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274EE0:
    ctx->pc = 0x7F274EE0u;
    // 7F274EE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274EE4:
    ctx->pc = 0x7F274EE4u;
    // 7F274EE4: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_7F274EE8:
    ctx->pc = 0x7F274EE8u;
    // 7F274EE8: bl      0x7F04272C
    {
            ctx->lr = 0x7F274EECu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F274EEC:
    ctx->pc = 0x7F274EECu;
    ctx->downcount -= 3;
    // 7F274EEC: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274EF0:
    ctx->pc = 0x7F274EF0u;
    // 7F274EF0: cmplwi  r4, 0x0000
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

label_7F274EF4:
    ctx->pc = 0x7F274EF4u;
    // 7F274EF4: bc    4, 2, 0x7F274F00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F274F00;
        }
    }

label_7F274EF8:
    ctx->pc = 0x7F274EF8u;
    ctx->downcount -= 2;
    // 7F274EF8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F274EFC:
    ctx->pc = 0x7F274EFCu;
    // 7F274EFC: b       0x7F2750F4
    {
            goto label_7F2750F4;
    }

label_7F274F00:
    ctx->pc = 0x7F274F00u;
    ctx->downcount -= 7;
    // 7F274F00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F274F04:
    ctx->pc = 0x7F274F04u;
    // 7F274F04: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F274F08:
    ctx->pc = 0x7F274F08u;
    // 7F274F08: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274F0C:
    ctx->pc = 0x7F274F0Cu;
    // 7F274F0C: addi    r3, r3, -7668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7668);

label_7F274F10:
    ctx->pc = 0x7F274F10u;
    // 7F274F10: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274F14:
    ctx->pc = 0x7F274F14u;
    // 7F274F14: cmplwi  r3, 0x0000
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

label_7F274F18:
    ctx->pc = 0x7F274F18u;
    // 7F274F18: bc    12, 2, 0x7F274F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F274F24;
        }
    }

label_7F274F1C:
    ctx->pc = 0x7F274F1Cu;
    ctx->downcount -= 2;
    // 7F274F1C: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274F20:
    ctx->pc = 0x7F274F20u;
    // 7F274F20: bl      0x7F1C2E6C
    {
            ctx->lr = 0x7F274F24u;
            ctx->pc = 0x7F1C2E6Cu;
            return;
    }

label_7F274F24:
    ctx->pc = 0x7F274F24u;
    ctx->downcount -= 3;
    // 7F274F24: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274F28:
    ctx->pc = 0x7F274F28u;
    // 7F274F28: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274F2C:
    ctx->pc = 0x7F274F2Cu;
    // 7F274F2C: bl      0x7F3B0938
    {
            ctx->lr = 0x7F274F30u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F274F30:
    ctx->pc = 0x7F274F30u;
    ctx->downcount -= 3;
    // 7F274F30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274F34:
    ctx->pc = 0x7F274F34u;
    // 7F274F34: addi    r4, r26, 172
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(172);

label_7F274F38:
    ctx->pc = 0x7F274F38u;
    // 7F274F38: bl      0x7F042C1C
    {
            ctx->lr = 0x7F274F3Cu;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F274F3C:
    ctx->pc = 0x7F274F3Cu;
    ctx->downcount -= 4;
    // 7F274F3C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274F40:
    ctx->pc = 0x7F274F40u;
    // 7F274F40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F274F44:
    ctx->pc = 0x7F274F44u;
    // 7F274F44: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F274F48:
    ctx->pc = 0x7F274F48u;
    // 7F274F48: bl      0x7F042B20
    {
            ctx->lr = 0x7F274F4Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F274F4C:
    ctx->pc = 0x7F274F4Cu;
    ctx->downcount -= 14;
    // 7F274F4C: lwz     r5, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F274F50:
    ctx->pc = 0x7F274F50u;
    // 7F274F50: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F274F54:
    ctx->pc = 0x7F274F54u;
    // 7F274F54: lwz     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274F58:
    ctx->pc = 0x7F274F58u;
    // 7F274F58: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F274F5C:
    ctx->pc = 0x7F274F5Cu;
    // 7F274F5C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274F60:
    ctx->pc = 0x7F274F60u;
    // 7F274F60: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274F64:
    ctx->pc = 0x7F274F64u;
    // 7F274F64: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F274F68:
    ctx->pc = 0x7F274F68u;
    // 7F274F68: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F274F6C:
    ctx->pc = 0x7F274F6Cu;
    // 7F274F6C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F274F70:
    ctx->pc = 0x7F274F70u;
    // 7F274F70: addi    r0, r5, 2048
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2048);

label_7F274F74:
    ctx->pc = 0x7F274F74u;
    // 7F274F74: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F274F78:
    ctx->pc = 0x7F274F78u;
    // 7F274F78: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F274F7C:
    ctx->pc = 0x7F274F7Cu;
    // 7F274F7C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F274F80:
    ctx->pc = 0x7F274F80u;
    // 7F274F80: bl      0x7F3CC414
    {
            ctx->lr = 0x7F274F84u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F274F84:
    ctx->pc = 0x7F274F84u;
    ctx->downcount -= 3;
    // 7F274F84: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274F88:
    ctx->pc = 0x7F274F88u;
    // 7F274F88: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F274F8C:
    ctx->pc = 0x7F274F8Cu;
    // 7F274F8C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F274F90u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F274F90:
    ctx->pc = 0x7F274F90u;
    ctx->downcount -= 2;
    // 7F274F90: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F274F94:
    ctx->pc = 0x7F274F94u;
    // 7F274F94: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F274F98u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F274F98:
    ctx->pc = 0x7F274F98u;
    ctx->downcount -= 5;
    // 7F274F98: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F274F9C:
    ctx->pc = 0x7F274F9Cu;
    // 7F274F9C: addi    r5, r26, 88
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(88);

label_7F274FA0:
    ctx->pc = 0x7F274FA0u;
    // 7F274FA0: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_7F274FA4:
    ctx->pc = 0x7F274FA4u;
    // 7F274FA4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F274FA8:
    loop_7F274FA8(ctx);
    if (ctx->pc == 0x7F274FBCu) goto label_7F274FBC;
    return;
label_7F274FAC:
    ctx->pc = 0x7F274FACu;
    // 7F274FAC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F274FB0:
    ctx->pc = 0x7F274FB0u;
    // 7F274FB0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F274FB4:
    ctx->pc = 0x7F274FB4u;
    // 7F274FB4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F274FB8:
    // 7F274FB8: bc    16, 0, 0x7F274FA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274FA8u;
                return;
            }
            goto label_7F274FA8;
        }
    }

label_7F274FBC:
    ctx->pc = 0x7F274FBCu;
    ctx->downcount -= 8;
    // 7F274FBC: mulli   r3, r29, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)324);

label_7F274FC0:
    ctx->pc = 0x7F274FC0u;
    // 7F274FC0: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F274FC4:
    ctx->pc = 0x7F274FC4u;
    // 7F274FC4: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F274FC8:
    ctx->pc = 0x7F274FC8u;
    // 7F274FC8: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F274FCC:
    ctx->pc = 0x7F274FCCu;
    // 7F274FCC: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F274FD0:
    ctx->pc = 0x7F274FD0u;
    // 7F274FD0: bl      0x7F3CC414
    {
            ctx->lr = 0x7F274FD4u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F274FD4:
    ctx->pc = 0x7F274FD4u;
    ctx->downcount -= 3;
    // 7F274FD4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F274FD8:
    ctx->pc = 0x7F274FD8u;
    // 7F274FD8: addi    r4, r27, 32
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(32);

label_7F274FDC:
    ctx->pc = 0x7F274FDCu;
    // 7F274FDC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F274FE0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F274FE0:
    ctx->pc = 0x7F274FE0u;
    ctx->downcount -= 4;
    // 7F274FE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F274FE4:
    ctx->pc = 0x7F274FE4u;
    // 7F274FE4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274FE8:
    ctx->pc = 0x7F274FE8u;
    // 7F274FE8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F274FEC:
    ctx->pc = 0x7F274FECu;
    // 7F274FEC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F274FF0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F274FF0:
    ctx->pc = 0x7F274FF0u;
    ctx->downcount -= 3;
    // 7F274FF0: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F274FF4:
    ctx->pc = 0x7F274FF4u;
    // 7F274FF4: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F274FF8:
    ctx->pc = 0x7F274FF8u;
    // 7F274FF8: bl      0x7F3CC430
    {
            ctx->lr = 0x7F274FFCu;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F274FFC:
    ctx->pc = 0x7F274FFCu;
    ctx->downcount -= 2;
    // 7F274FFC: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F275000:
    ctx->pc = 0x7F275000u;
    // 7F275000: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F275004u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F275004:
    ctx->pc = 0x7F275004u;
    ctx->downcount -= 2;
    // 7F275004: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275008:
    ctx->pc = 0x7F275008u;
    // 7F275008: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F27500Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F27500C:
    ctx->pc = 0x7F27500Cu;
    ctx->downcount -= 4;
    // 7F27500C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275010:
    ctx->pc = 0x7F275010u;
    // 7F275010: addi    r4, r26, 476
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(476);

label_7F275014:
    ctx->pc = 0x7F275014u;
    // 7F275014: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F275018:
    ctx->pc = 0x7F275018u;
    // 7F275018: bl      0x7F3CC414
    {
            ctx->lr = 0x7F27501Cu;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F27501C:
    ctx->pc = 0x7F27501Cu;
    ctx->downcount -= 9;
    // 7F27501C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F275020:
    ctx->pc = 0x7F275020u;
    // 7F275020: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F275024:
    ctx->pc = 0x7F275024u;
    // 7F275024: stw     r0, 520(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275028:
    ctx->pc = 0x7F275028u;
    // 7F275028: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27502C:
    ctx->pc = 0x7F27502Cu;
    // 7F27502C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F275030:
    ctx->pc = 0x7F275030u;
    // 7F275030: lwz     r5, -8000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F275034:
    ctx->pc = 0x7F275034u;
    // 7F275034: stw     r0, -7992(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275038:
    ctx->pc = 0x7F275038u;
    // 7F275038: cmplwi  r5, 0x0000
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

label_7F27503C:
    ctx->pc = 0x7F27503Cu;
    // 7F27503C: bc    12, 2, 0x7F275050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275050;
        }
    }

label_7F275040:
    ctx->pc = 0x7F275040u;
    ctx->downcount -= 4;
    // 7F275040: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275044:
    ctx->pc = 0x7F275044u;
    // 7F275044: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275048:
    ctx->pc = 0x7F275048u;
    // 7F275048: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27504C:
    ctx->pc = 0x7F27504Cu;
    // 7F27504C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275050:
    ctx->pc = 0x7F275050u;
    ctx->downcount -= 5;
    // 7F275050: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F275054:
    ctx->pc = 0x7F275054u;
    // 7F275054: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275058:
    ctx->pc = 0x7F275058u;
    // 7F275058: addi    r4, r4, -7984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7984);

label_7F27505C:
    ctx->pc = 0x7F27505Cu;
    // 7F27505C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275060:
    ctx->pc = 0x7F275060u;
    // 7F275060: bl      0x7F274A3C
    {
            ctx->lr = 0x7F275064u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274A3Cu;
                return;
            }
            goto label_7F274A3C;
    }

label_7F275064:
    ctx->pc = 0x7F275064u;
    ctx->downcount -= 4;
    // 7F275064: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F275068:
    ctx->pc = 0x7F275068u;
    // 7F275068: lwz     r0, 14280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27506C:
    ctx->pc = 0x7F27506Cu;
    // 7F27506C: cmpwi   r0, 0
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

label_7F275070:
    ctx->pc = 0x7F275070u;
    // 7F275070: bc    12, 2, 0x7F2750E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2750E0;
        }
    }

label_7F275074:
    ctx->pc = 0x7F275074u;
    ctx->downcount -= 24;
    // 7F275074: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F275078:
    ctx->pc = 0x7F275078u;
    // 7F275078: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27507C:
    ctx->pc = 0x7F27507Cu;
    // 7F27507C: lfs     f4, 24916(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27507Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24916);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F275080:
    ctx->pc = 0x7F275080u;
    // 7F275080: addi    r4, r27, 196
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(196);

label_7F275084:
    ctx->pc = 0x7F275084u;
    // 7F275084: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F275088:
    ctx->pc = 0x7F275088u;
    // 7F275088: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F27508C:
    ctx->pc = 0x7F27508Cu;
    // 7F27508C: lwz     r3, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275090:
    ctx->pc = 0x7F275090u;
    // 7F275090: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275094:
    ctx->pc = 0x7F275094u;
    // 7F275094: lfs     f1, 92(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275094u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275098:
    ctx->pc = 0x7F275098u;
    // 7F275098: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275098u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27509C:
    ctx->pc = 0x7F27509Cu;
    // 7F27509C: lfs     f5, 96(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27509Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F2750A0:
    ctx->pc = 0x7F2750A0u;
    // 7F2750A0: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2750A0u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F2750A4:
    ctx->pc = 0x7F2750A4u;
    // 7F2750A4: lfs     f3, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2750A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2750A8:
    ctx->pc = 0x7F2750A8u;
    // 7F2750A8: lfs     f2, 100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2750A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2750AC:
    ctx->pc = 0x7F2750ACu;
    // 7F2750AC: lfs     f0, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2750ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2750B0:
    ctx->pc = 0x7F2750B0u;
    // 7F2750B0: fsubs   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2750B0u)) return;
    ppc_fsubs(ctx, 3, 5, 3);

label_7F2750B4:
    ctx->pc = 0x7F2750B4u;
    // 7F2750B4: stfs     f1, 528(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2750B4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(528);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2750B8:
    ctx->pc = 0x7F2750B8u;
    // 7F2750B8: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2750B8u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F2750BC:
    ctx->pc = 0x7F2750BCu;
    // 7F2750BC: stfs     f3, 532(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2750BCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(532);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2750C0:
    ctx->pc = 0x7F2750C0u;
    // 7F2750C0: stfs     f2, 536(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2750C0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(536);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2750C4:
    ctx->pc = 0x7F2750C4u;
    // 7F2750C4: stfs     f4, 540(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2750C4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(540);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F2750C8:
    ctx->pc = 0x7F2750C8u;
    // 7F2750C8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2750CC:
    ctx->pc = 0x7F2750CCu;
    // 7F2750CC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2750D0:
    ctx->pc = 0x7F2750D0u;
    // 7F2750D0: bl      0x7F1ED070
    {
            ctx->lr = 0x7F2750D4u;
            ctx->pc = 0x7F1ED070u;
            return;
    }

label_7F2750D4:
    ctx->pc = 0x7F2750D4u;
    ctx->downcount -= 3;
    // 7F2750D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2750D8:
    ctx->pc = 0x7F2750D8u;
    // 7F2750D8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2750DC:
    ctx->pc = 0x7F2750DCu;
    // 7F2750DC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2750E0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2750E0:
    ctx->pc = 0x7F2750E0u;
    ctx->downcount -= 2;
    // 7F2750E0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2750E4:
    ctx->pc = 0x7F2750E4u;
    // 7F2750E4: bl      0x7F272CAC
    {
            ctx->lr = 0x7F2750E8u;
            ctx->pc = 0x7F272CACu;
            return;
    }

label_7F2750E8:
    ctx->pc = 0x7F2750E8u;
    ctx->downcount -= 2;
    // 7F2750E8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2750EC:
    ctx->pc = 0x7F2750ECu;
    // 7F2750EC: bl      0x7F272D00
    {
            ctx->lr = 0x7F2750F0u;
            ctx->pc = 0x7F272D00u;
            return;
    }

label_7F2750F0:
    ctx->pc = 0x7F2750F0u;
    ctx->downcount -= 1;
    // 7F2750F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2750F4:
    ctx->pc = 0x7F2750F4u;
    ctx->downcount -= 16;
    // 7F2750F4: lmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2750F8:
    ctx->pc = 0x7F2750F8u;
    // 7F2750F8: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2750FC:
    ctx->pc = 0x7F2750FCu;
    // 7F2750FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275100:
    ctx->pc = 0x7F275100u;
    // 7F275100: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F275104:
    ctx->pc = 0x7F275104u;
    // 7F275104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275108:
    ctx->pc = 0x7F275108u;
    ctx->downcount -= 24;
    // 7F275108: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27510C:
    ctx->pc = 0x7F27510Cu;
    // 7F27510C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275110:
    ctx->pc = 0x7F275110u;
    // 7F275110: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275114:
    ctx->pc = 0x7F275114u;
    // 7F275114: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275118:
    ctx->pc = 0x7F275118u;
    // 7F275118: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27511C:
    ctx->pc = 0x7F27511Cu;
    // 7F27511C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275120:
    ctx->pc = 0x7F275120u;
    // 7F275120: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F275124:
    ctx->pc = 0x7F275124u;
    // 7F275124: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F275128:
    ctx->pc = 0x7F275128u;
    // 7F275128: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27512C:
    ctx->pc = 0x7F27512Cu;
    // 7F27512C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F275130:
    ctx->pc = 0x7F275130u;
    // 7F275130: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F275134:
    ctx->pc = 0x7F275134u;
    // 7F275134: li      r5, 544
    ctx->gpr[5] = (u32)(s32)(544);

label_7F275138:
    ctx->pc = 0x7F275138u;
    // 7F275138: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F27513C:
    ctx->pc = 0x7F27513Cu;
    // 7F27513C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F275140u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F275140:
    ctx->pc = 0x7F275140u;
    ctx->downcount -= 2;
    // 7F275140: or.   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F275144:
    ctx->pc = 0x7F275144u;
    // 7F275144: bc    12, 2, 0x7F2751E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2751E4;
        }
    }

label_7F275148:
    ctx->pc = 0x7F275148u;
    ctx->downcount -= 17;
    // 7F275148: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27514C:
    ctx->pc = 0x7F27514Cu;
    // 7F27514C: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F275150:
    ctx->pc = 0x7F275150u;
    // 7F275150: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275154:
    ctx->pc = 0x7F275154u;
    // 7F275154: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F275158:
    ctx->pc = 0x7F275158u;
    // 7F275158: addi    r4, r4, 19472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19472);

label_7F27515C:
    ctx->pc = 0x7F27515Cu;
    // 7F27515C: stw     r6, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F275160:
    ctx->pc = 0x7F275160u;
    // 7F275160: addi    r5, r5, 19936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19936);

label_7F275164:
    ctx->pc = 0x7F275164u;
    // 7F275164: stw     r0, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275168:
    ctx->pc = 0x7F275168u;
    // 7F275168: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27516C:
    ctx->pc = 0x7F27516Cu;
    // 7F27516C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275170:
    ctx->pc = 0x7F275170u;
    // 7F275170: stw     r6, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F275174:
    ctx->pc = 0x7F275174u;
    // 7F275174: stw     r0, 168(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275178:
    ctx->pc = 0x7F275178u;
    // 7F275178: stw     r28, 504(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F27517C:
    ctx->pc = 0x7F27517Cu;
    // 7F27517C: stw     r29, 508(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F275180:
    ctx->pc = 0x7F275180u;
    // 7F275180: stw     r30, 512(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F275184:
    ctx->pc = 0x7F275184u;
    // 7F275184: stw     r26, 516(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F275188:
    ctx->pc = 0x7F275188u;
    // 7F275188: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27518Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27518C:
    ctx->pc = 0x7F27518Cu;
    ctx->downcount -= 16;
    // 7F27518C: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275190:
    ctx->pc = 0x7F275190u;
    // 7F275190: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F275194:
    ctx->pc = 0x7F275194u;
    // 7F275194: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F275198:
    ctx->pc = 0x7F275198u;
    // 7F275198: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27519C:
    ctx->pc = 0x7F27519Cu;
    // 7F27519C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2751A0:
    ctx->pc = 0x7F2751A0u;
    // 7F2751A0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2751A4:
    ctx->pc = 0x7F2751A4u;
    // 7F2751A4: stw     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2751A8:
    ctx->pc = 0x7F2751A8u;
    // 7F2751A8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2751AC:
    ctx->pc = 0x7F2751ACu;
    // 7F2751AC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2751B0:
    ctx->pc = 0x7F2751B0u;
    // 7F2751B0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2751B4:
    ctx->pc = 0x7F2751B4u;
    // 7F2751B4: stw     r8, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2751B8:
    ctx->pc = 0x7F2751B8u;
    // 7F2751B8: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2751BC:
    ctx->pc = 0x7F2751BCu;
    // 7F2751BC: stw     r8, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2751C0:
    ctx->pc = 0x7F2751C0u;
    // 7F2751C0: stw     r8, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2751C4:
    ctx->pc = 0x7F2751C4u;
    // 7F2751C4: stw     r0, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2751C8:
    ctx->pc = 0x7F2751C8u;
    // 7F2751C8: bl      0x7F274E54
    {
            ctx->lr = 0x7F2751CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F274E54u;
                return;
            }
            goto label_7F274E54;
    }

label_7F2751CC:
    ctx->pc = 0x7F2751CCu;
    ctx->downcount -= 2;
    // 7F2751CC: cmpwi   r3, 0
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

label_7F2751D0:
    ctx->pc = 0x7F2751D0u;
    // 7F2751D0: bc    4, 0, 0x7F2751E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2751E4;
        }
    }

label_7F2751D4:
    ctx->pc = 0x7F2751D4u;
    ctx->downcount -= 2;
    // 7F2751D4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2751D8:
    ctx->pc = 0x7F2751D8u;
    // 7F2751D8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2751DCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2751DC:
    ctx->pc = 0x7F2751DCu;
    ctx->downcount -= 2;
    // 7F2751DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2751E0:
    ctx->pc = 0x7F2751E0u;
    // 7F2751E0: b       0x7F2751FC
    {
            goto label_7F2751FC;
    }

label_7F2751E4:
    ctx->pc = 0x7F2751E4u;
    ctx->downcount -= 5;
    // 7F2751E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2751E8:
    ctx->pc = 0x7F2751E8u;
    // 7F2751E8: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F2751EC:
    ctx->pc = 0x7F2751ECu;
    // 7F2751EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2751F0:
    ctx->pc = 0x7F2751F0u;
    // 7F2751F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2751F4:
    ctx->pc = 0x7F2751F4u;
    // 7F2751F4: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2751F8u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2751F8:
    ctx->pc = 0x7F2751F8u;
    ctx->downcount -= 1;
    // 7F2751F8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2751FC:
    ctx->pc = 0x7F2751FCu;
    ctx->downcount -= 16;
    // 7F2751FC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F275200:
    ctx->pc = 0x7F275200u;
    // 7F275200: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275204:
    ctx->pc = 0x7F275204u;
    // 7F275204: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275208:
    ctx->pc = 0x7F275208u;
    // 7F275208: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27520C:
    ctx->pc = 0x7F27520Cu;
    // 7F27520C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275210:
    ctx->pc = 0x7F275210u;
    ctx->downcount -= 17;
    // 7F275210: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275214:
    ctx->pc = 0x7F275214u;
    // 7F275214: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275218:
    ctx->pc = 0x7F275218u;
    // 7F275218: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27521C:
    ctx->pc = 0x7F27521Cu;
    // 7F27521C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275220:
    ctx->pc = 0x7F275220u;
    // 7F275220: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275224:
    ctx->pc = 0x7F275224u;
    // 7F275224: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275228:
    ctx->pc = 0x7F275228u;
    // 7F275228: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F27522Cu;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F27522C:
    ctx->pc = 0x7F27522Cu;
    ctx->downcount -= 2;
    // 7F27522C: cmpwi   r3, 23
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(23);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F275230:
    ctx->pc = 0x7F275230u;
    // 7F275230: bc    12, 2, 0x7F275274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275274;
        }
    }

label_7F275234:
    ctx->pc = 0x7F275234u;
    ctx->downcount -= 1;
    // 7F275234: bc    4, 0, 0x7F275250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275250;
        }
    }

label_7F275238:
    ctx->pc = 0x7F275238u;
    ctx->downcount -= 2;
    // 7F275238: cmpwi   r3, 16
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27523C:
    ctx->pc = 0x7F27523Cu;
    // 7F27523C: bc    12, 2, 0x7F27525C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27525C;
        }
    }

label_7F275240:
    ctx->pc = 0x7F275240u;
    ctx->downcount -= 1;
    // 7F275240: bc    12, 0, 0x7F27528C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27528C;
        }
    }

label_7F275244:
    ctx->pc = 0x7F275244u;
    ctx->downcount -= 2;
    // 7F275244: cmpwi   r3, 22
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F275248:
    ctx->pc = 0x7F275248u;
    // 7F275248: bc    4, 0, 0x7F275268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275268;
        }
    }

label_7F27524C:
    ctx->pc = 0x7F27524Cu;
    ctx->downcount -= 1;
    // 7F27524C: b       0x7F27528C
    {
            goto label_7F27528C;
    }

label_7F275250:
    ctx->pc = 0x7F275250u;
    ctx->downcount -= 2;
    // 7F275250: cmpwi   r3, 26
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(26);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F275254:
    ctx->pc = 0x7F275254u;
    // 7F275254: bc    12, 2, 0x7F275280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275280;
        }
    }

label_7F275258:
    ctx->pc = 0x7F275258u;
    ctx->downcount -= 1;
    // 7F275258: b       0x7F27528C
    {
            goto label_7F27528C;
    }

label_7F27525C:
    ctx->pc = 0x7F27525Cu;
    ctx->downcount -= 3;
    // 7F27525C: lis     r3, 37
    ctx->gpr[3] = ((u32)(s32)(37) << 16);

label_7F275260:
    ctx->pc = 0x7F275260u;
    // 7F275260: addi    r3, r3, 15242
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15242);

label_7F275264:
    ctx->pc = 0x7F275264u;
    // 7F275264: b       0x7F275294
    {
            goto label_7F275294;
    }

label_7F275268:
    ctx->pc = 0x7F275268u;
    ctx->downcount -= 3;
    // 7F275268: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F27526C:
    ctx->pc = 0x7F27526Cu;
    // 7F27526C: addi    r3, r3, -17526
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17526);

label_7F275270:
    ctx->pc = 0x7F275270u;
    // 7F275270: b       0x7F275294
    {
            goto label_7F275294;
    }

label_7F275274:
    ctx->pc = 0x7F275274u;
    ctx->downcount -= 3;
    // 7F275274: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F275278:
    ctx->pc = 0x7F275278u;
    // 7F275278: addi    r3, r3, 15242
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15242);

label_7F27527C:
    ctx->pc = 0x7F27527Cu;
    // 7F27527C: b       0x7F275294
    {
            goto label_7F275294;
    }

label_7F275280:
    ctx->pc = 0x7F275280u;
    ctx->downcount -= 3;
    // 7F275280: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F275284:
    ctx->pc = 0x7F275284u;
    // 7F275284: addi    r3, r3, -17526
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17526);

label_7F275288:
    ctx->pc = 0x7F275288u;
    // 7F275288: b       0x7F275294
    {
            goto label_7F275294;
    }

label_7F27528C:
    ctx->pc = 0x7F27528Cu;
    ctx->downcount -= 2;
    // 7F27528C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F275290:
    ctx->pc = 0x7F275290u;
    // 7F275290: b       0x7F2752B4
    {
            goto label_7F2752B4;
    }

label_7F275294:
    ctx->pc = 0x7F275294u;
    ctx->downcount -= 8;
    // 7F275294: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F275298:
    ctx->pc = 0x7F275298u;
    // 7F275298: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F27529C:
    ctx->pc = 0x7F27529Cu;
    // 7F27529C: addi    r5, r4, -7972
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7972);

label_7F2752A0:
    ctx->pc = 0x7F2752A0u;
    // 7F2752A0: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2752A4:
    ctx->pc = 0x7F2752A4u;
    // 7F2752A4: addi    r7, r6, 8160
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(8160);

label_7F2752A8:
    ctx->pc = 0x7F2752A8u;
    // 7F2752A8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2752AC:
    ctx->pc = 0x7F2752ACu;
    // 7F2752AC: li      r6, 19
    ctx->gpr[6] = (u32)(s32)(19);

label_7F2752B0:
    ctx->pc = 0x7F2752B0u;
    // 7F2752B0: bl      0x7F1EEA9C
    {
            ctx->lr = 0x7F2752B4u;
            ctx->pc = 0x7F1EEA9Cu;
            return;
    }

label_7F2752B4:
    ctx->pc = 0x7F2752B4u;
    ctx->downcount -= 16;
    // 7F2752B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2752B8:
    ctx->pc = 0x7F2752B8u;
    // 7F2752B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2752BC:
    ctx->pc = 0x7F2752BCu;
    // 7F2752BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2752C0:
    ctx->pc = 0x7F2752C0u;
    // 7F2752C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2752C4:
    ctx->pc = 0x7F2752C4u;
    // 7F2752C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2752C8:
    ctx->pc = 0x7F2752C8u;
    ctx->downcount -= 18;
    // 7F2752C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2752CC:
    ctx->pc = 0x7F2752CCu;
    // 7F2752CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2752D0:
    ctx->pc = 0x7F2752D0u;
    // 7F2752D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2752D4:
    ctx->pc = 0x7F2752D4u;
    // 7F2752D4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2752D8:
    ctx->pc = 0x7F2752D8u;
    // 7F2752D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2752DC:
    ctx->pc = 0x7F2752DCu;
    // 7F2752DC: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2752E0:
    ctx->pc = 0x7F2752E0u;
    // 7F2752E0: cmplwi  r0, 0x0000
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

label_7F2752E4:
    ctx->pc = 0x7F2752E4u;
    // 7F2752E4: bc    12, 2, 0x7F27530C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27530C;
        }
    }

label_7F2752E8:
    ctx->pc = 0x7F2752E8u;
    ctx->downcount -= 3;
    // 7F2752E8: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2752EC:
    ctx->pc = 0x7F2752ECu;
    // 7F2752EC: cmplwi  r3, 0x0000
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

label_7F2752F0:
    ctx->pc = 0x7F2752F0u;
    // 7F2752F0: bc    12, 2, 0x7F27530C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27530C;
        }
    }

label_7F2752F4:
    ctx->pc = 0x7F2752F4u;
    ctx->downcount -= 3;
    // 7F2752F4: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2752F8:
    ctx->pc = 0x7F2752F8u;
    // 7F2752F8: cmplwi  r0, 0x0000
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

label_7F2752FC:
    ctx->pc = 0x7F2752FCu;
    // 7F2752FC: bc    12, 2, 0x7F27530C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27530C;
        }
    }

label_7F275300:
    ctx->pc = 0x7F275300u;
    ctx->downcount -= 3;
    // 7F275300: lwz     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275304:
    ctx->pc = 0x7F275304u;
    // 7F275304: cmplwi  r0, 0x0000
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

label_7F275308:
    ctx->pc = 0x7F275308u;
    // 7F275308: bc    4, 2, 0x7F275318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275318;
        }
    }

label_7F27530C:
    ctx->pc = 0x7F27530Cu;
    ctx->downcount -= 2;
    // 7F27530C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F275310:
    ctx->pc = 0x7F275310u;
    // 7F275310: bl      0x7F3C8210
    {
            ctx->lr = 0x7F275314u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F275314:
    ctx->pc = 0x7F275314u;
    ctx->downcount -= 1;
    // 7F275314: b       0x7F275AC0
    {
            goto label_7F275AC0;
    }

label_7F275318:
    ctx->pc = 0x7F275318u;
    ctx->downcount -= 3;
    // 7F275318: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27531C:
    ctx->pc = 0x7F27531Cu;
    // 7F27531C: cmplwi  r4, 0x0000
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

label_7F275320:
    ctx->pc = 0x7F275320u;
    // 7F275320: bc    12, 2, 0x7F275384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275384;
        }
    }

label_7F275324:
    ctx->pc = 0x7F275324u;
    ctx->downcount -= 3;
    // 7F275324: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275328:
    ctx->pc = 0x7F275328u;
    // 7F275328: rlwinm. r0, r0, 0, 19, 19
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

label_7F27532C:
    ctx->pc = 0x7F27532Cu;
    // 7F27532C: bc    12, 2, 0x7F275404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275404;
        }
    }

label_7F275330:
    ctx->pc = 0x7F275330u;
    ctx->downcount -= 2;
    // 7F275330: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F275334:
    ctx->pc = 0x7F275334u;
    // 7F275334: bl      0x7F012050
    {
            ctx->lr = 0x7F275338u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F275338:
    ctx->pc = 0x7F275338u;
    ctx->downcount -= 2;
    // 7F275338: cmpwi   r3, 0
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

label_7F27533C:
    ctx->pc = 0x7F27533Cu;
    // 7F27533C: bc    4, 2, 0x7F275404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275404;
        }
    }

label_7F275340:
    ctx->pc = 0x7F275340u;
    ctx->downcount -= 17;
    // 7F275340: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275344:
    ctx->pc = 0x7F275344u;
    // 7F275344: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275348:
    ctx->pc = 0x7F275348u;
    // 7F275348: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F27534C:
    ctx->pc = 0x7F27534Cu;
    // 7F27534C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275350:
    ctx->pc = 0x7F275350u;
    // 7F275350: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275354:
    ctx->pc = 0x7F275354u;
    // 7F275354: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275358:
    ctx->pc = 0x7F275358u;
    // 7F275358: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F27535C:
    ctx->pc = 0x7F27535Cu;
    // 7F27535C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275360:
    ctx->pc = 0x7F275360u;
    // 7F275360: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275364:
    ctx->pc = 0x7F275364u;
    // 7F275364: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275368:
    ctx->pc = 0x7F275368u;
    // 7F275368: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F27536C:
    ctx->pc = 0x7F27536Cu;
    // 7F27536C: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275370:
    ctx->pc = 0x7F275370u;
    // 7F275370: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275374:
    ctx->pc = 0x7F275374u;
    // 7F275374: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275378:
    ctx->pc = 0x7F275378u;
    // 7F275378: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F27537C:
    ctx->pc = 0x7F27537Cu;
    // 7F27537C: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275380:
    ctx->pc = 0x7F275380u;
    // 7F275380: b       0x7F275404
    {
            goto label_7F275404;
    }

label_7F275384:
    ctx->pc = 0x7F275384u;
    ctx->downcount -= 4;
    // 7F275384: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275388:
    ctx->pc = 0x7F275388u;
    // 7F275388: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27538C:
    ctx->pc = 0x7F27538Cu;
    // 7F27538C: rlwinm. r0, r0, 0, 19, 19
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

label_7F275390:
    ctx->pc = 0x7F275390u;
    // 7F275390: bc    12, 2, 0x7F275404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275404;
        }
    }

label_7F275394:
    ctx->pc = 0x7F275394u;
    ctx->downcount -= 2;
    // 7F275394: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F275398:
    ctx->pc = 0x7F275398u;
    // 7F275398: bl      0x7F012050
    {
            ctx->lr = 0x7F27539Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F27539C:
    ctx->pc = 0x7F27539Cu;
    ctx->downcount -= 2;
    // 7F27539C: cmpwi   r3, 0
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

label_7F2753A0:
    ctx->pc = 0x7F2753A0u;
    // 7F2753A0: bc    4, 2, 0x7F275404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275404;
        }
    }

label_7F2753A4:
    ctx->pc = 0x7F2753A4u;
    ctx->downcount -= 24;
    // 7F2753A4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753A8:
    ctx->pc = 0x7F2753A8u;
    // 7F2753A8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753AC:
    ctx->pc = 0x7F2753ACu;
    // 7F2753AC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2753B0:
    ctx->pc = 0x7F2753B0u;
    // 7F2753B0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2753B4:
    ctx->pc = 0x7F2753B4u;
    // 7F2753B4: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753B8:
    ctx->pc = 0x7F2753B8u;
    // 7F2753B8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753BC:
    ctx->pc = 0x7F2753BCu;
    // 7F2753BC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2753C0:
    ctx->pc = 0x7F2753C0u;
    // 7F2753C0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2753C4:
    ctx->pc = 0x7F2753C4u;
    // 7F2753C4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753C8:
    ctx->pc = 0x7F2753C8u;
    // 7F2753C8: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753CC:
    ctx->pc = 0x7F2753CCu;
    // 7F2753CC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2753D0:
    ctx->pc = 0x7F2753D0u;
    // 7F2753D0: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2753D4:
    ctx->pc = 0x7F2753D4u;
    // 7F2753D4: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753D8:
    ctx->pc = 0x7F2753D8u;
    // 7F2753D8: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753DC:
    ctx->pc = 0x7F2753DCu;
    // 7F2753DC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2753E0:
    ctx->pc = 0x7F2753E0u;
    // 7F2753E0: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2753E4:
    ctx->pc = 0x7F2753E4u;
    // 7F2753E4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753E8:
    ctx->pc = 0x7F2753E8u;
    // 7F2753E8: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753EC:
    ctx->pc = 0x7F2753ECu;
    // 7F2753EC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2753F0:
    ctx->pc = 0x7F2753F0u;
    // 7F2753F0: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2753F4:
    ctx->pc = 0x7F2753F4u;
    // 7F2753F4: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2753F8:
    ctx->pc = 0x7F2753F8u;
    // 7F2753F8: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2753FC:
    ctx->pc = 0x7F2753FCu;
    // 7F2753FC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F275400:
    ctx->pc = 0x7F275400u;
    // 7F275400: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275404:
    ctx->pc = 0x7F275404u;
    ctx->downcount -= 8;
    // 7F275404: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275408:
    ctx->pc = 0x7F275408u;
    // 7F275408: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27540C:
    ctx->pc = 0x7F27540Cu;
    // 7F27540C: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275410:
    ctx->pc = 0x7F275410u;
    // 7F275410: stw     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275414:
    ctx->pc = 0x7F275414u;
    // 7F275414: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275418:
    ctx->pc = 0x7F275418u;
    // 7F275418: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27541C:
    ctx->pc = 0x7F27541Cu;
    // 7F27541C: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275420:
    ctx->pc = 0x7F275420u;
    // 7F275420: bl      0x7F275B10
    {
            ctx->lr = 0x7F275424u;
            goto label_7F275B10;
    }

label_7F275424:
    ctx->pc = 0x7F275424u;
    ctx->downcount -= 4;
    // 7F275424: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275428:
    ctx->pc = 0x7F275428u;
    // 7F275428: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27542C:
    ctx->pc = 0x7F27542Cu;
    // 7F27542C: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275430:
    ctx->pc = 0x7F275430u;
    // 7F275430: bl      0x7F275B10
    {
            ctx->lr = 0x7F275434u;
            goto label_7F275B10;
    }

label_7F275434:
    ctx->pc = 0x7F275434u;
    ctx->downcount -= 8;
    // 7F275434: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275438:
    ctx->pc = 0x7F275438u;
    // 7F275438: lwz     r4, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27543C:
    ctx->pc = 0x7F27543Cu;
    // 7F27543C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275440:
    ctx->pc = 0x7F275440u;
    // 7F275440: rlwinm r31, r4, 1, 0, 30
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F275444:
    ctx->pc = 0x7F275444u;
    // 7F275444: rlwinm r30, r4, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F275448:
    ctx->pc = 0x7F275448u;
    // 7F275448: rlwinm r0, r0, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Fu;
    }

label_7F27544C:
    ctx->pc = 0x7F27544Cu;
    // 7F27544C: cmplwi  r0, 0x0006
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

label_7F275450:
    ctx->pc = 0x7F275450u;
    // 7F275450: bc    12, 1, 0x7F2756EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2756EC;
        }
    }

label_7F275454:
    ctx->pc = 0x7F275454u;
    ctx->downcount -= 7;
    // 7F275454: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275458:
    ctx->pc = 0x7F275458u;
    // 7F275458: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F27545C:
    ctx->pc = 0x7F27545Cu;
    // 7F27545C: addi    r3, r3, 18124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18124);

label_7F275460:
    ctx->pc = 0x7F275460u;
    // 7F275460: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275464:
    ctx->pc = 0x7F275464u;
    // 7F275464: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F275468:
    ctx->pc = 0x7F275468u;
    // 7F275468: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F27546C:
    ctx->pc = 0x7F27546Cu;
    ctx->downcount -= 11;
    // 7F27546C: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275470:
    ctx->pc = 0x7F275470u;
    // 7F275470: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275474:
    ctx->pc = 0x7F275474u;
    // 7F275474: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F275478:
    ctx->pc = 0x7F275478u;
    // 7F275478: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27547C:
    ctx->pc = 0x7F27547Cu;
    // 7F27547C: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275480:
    ctx->pc = 0x7F275480u;
    // 7F275480: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275484:
    ctx->pc = 0x7F275484u;
    // 7F275484: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F275488:
    ctx->pc = 0x7F275488u;
    // 7F275488: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27548C:
    ctx->pc = 0x7F27548Cu;
    // 7F27548C: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275490:
    ctx->pc = 0x7F275490u;
    // 7F275490: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275494:
    ctx->pc = 0x7F275494u;
    // 7F275494: bl      0x7F275AD4
    {
            ctx->lr = 0x7F275498u;
            goto label_7F275AD4;
    }

label_7F275498:
    ctx->pc = 0x7F275498u;
    ctx->downcount -= 1;
    // 7F275498: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F27549C:
    ctx->pc = 0x7F27549Cu;
    ctx->downcount -= 11;
    // 7F27549C: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2754A0:
    ctx->pc = 0x7F2754A0u;
    // 7F2754A0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2754A4:
    ctx->pc = 0x7F2754A4u;
    // 7F2754A4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2754A8:
    ctx->pc = 0x7F2754A8u;
    // 7F2754A8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2754AC:
    ctx->pc = 0x7F2754ACu;
    // 7F2754AC: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2754B0:
    ctx->pc = 0x7F2754B0u;
    // 7F2754B0: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2754B4:
    ctx->pc = 0x7F2754B4u;
    // 7F2754B4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2754B8:
    ctx->pc = 0x7F2754B8u;
    // 7F2754B8: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2754BC:
    ctx->pc = 0x7F2754BCu;
    // 7F2754BC: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2754C0:
    ctx->pc = 0x7F2754C0u;
    // 7F2754C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2754C4:
    ctx->pc = 0x7F2754C4u;
    // 7F2754C4: bl      0x7F275AD4
    {
            ctx->lr = 0x7F2754C8u;
            goto label_7F275AD4;
    }

label_7F2754C8:
    ctx->pc = 0x7F2754C8u;
    ctx->downcount -= 5;
    // 7F2754C8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2754CC:
    ctx->pc = 0x7F2754CCu;
    // 7F2754CC: rlwinm r4, r30, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 4u) & 0xFFFFFFF0u;
    }

label_7F2754D0:
    ctx->pc = 0x7F2754D0u;
    // 7F2754D0: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F2754D4:
    ctx->pc = 0x7F2754D4u;
    // 7F2754D4: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2754D8:
    ctx->pc = 0x7F2754D8u;
    // 7F2754D8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2754DCu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2754DC:
    ctx->pc = 0x7F2754DCu;
    ctx->downcount -= 5;
    // 7F2754DC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2754E0:
    ctx->pc = 0x7F2754E0u;
    // 7F2754E0: rlwinm r4, r30, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 3u) & 0xFFFFFFF8u;
    }

label_7F2754E4:
    ctx->pc = 0x7F2754E4u;
    // 7F2754E4: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F2754E8:
    ctx->pc = 0x7F2754E8u;
    // 7F2754E8: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2754EC:
    ctx->pc = 0x7F2754ECu;
    // 7F2754EC: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F2754F0u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F2754F0:
    ctx->pc = 0x7F2754F0u;
    ctx->downcount -= 1;
    // 7F2754F0: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F2754F4:
    ctx->pc = 0x7F2754F4u;
    ctx->downcount -= 21;
    // 7F2754F4: lwz     r5, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2754F8:
    ctx->pc = 0x7F2754F8u;
    // 7F2754F8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2754FC:
    ctx->pc = 0x7F2754FCu;
    // 7F2754FC: addi    r3, r3, 16736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16736);

label_7F275500:
    ctx->pc = 0x7F275500u;
    // 7F275500: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F275504:
    ctx->pc = 0x7F275504u;
    // 7F275504: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275508:
    ctx->pc = 0x7F275508u;
    // 7F275508: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27550C:
    ctx->pc = 0x7F27550Cu;
    // 7F27550C: rlwinm r0, r4, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F275510:
    ctx->pc = 0x7F275510u;
    // 7F275510: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275514:
    ctx->pc = 0x7F275514u;
    // 7F275514: lwz     r4, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275518:
    ctx->pc = 0x7F275518u;
    // 7F275518: lwz     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27551C:
    ctx->pc = 0x7F27551Cu;
    // 7F27551C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275520:
    ctx->pc = 0x7F275520u;
    // 7F275520: stw     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275524:
    ctx->pc = 0x7F275524u;
    // 7F275524: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275528:
    ctx->pc = 0x7F275528u;
    // 7F275528: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27552C:
    ctx->pc = 0x7F27552Cu;
    // 7F27552C: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F275530:
    ctx->pc = 0x7F275530u;
    // 7F275530: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275534:
    ctx->pc = 0x7F275534u;
    // 7F275534: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F275538:
    ctx->pc = 0x7F275538u;
    // 7F275538: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27553C:
    ctx->pc = 0x7F27553Cu;
    // 7F27553C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F275540u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F275540:
    ctx->pc = 0x7F275540u;
    ctx->downcount -= 6;
    // 7F275540: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F275544:
    ctx->pc = 0x7F275544u;
    // 7F275544: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275548:
    ctx->pc = 0x7F275548u;
    // 7F275548: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27554C:
    ctx->pc = 0x7F27554Cu;
    // 7F27554C: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F275550:
    ctx->pc = 0x7F275550u;
    // 7F275550: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275554:
    ctx->pc = 0x7F275554u;
    // 7F275554: bl      0x7F3B3134
    {
            ctx->lr = 0x7F275558u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F275558:
    ctx->pc = 0x7F275558u;
    ctx->downcount -= 6;
    // 7F275558: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F27555C:
    ctx->pc = 0x7F27555Cu;
    // 7F27555C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275560:
    ctx->pc = 0x7F275560u;
    // 7F275560: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F275564:
    ctx->pc = 0x7F275564u;
    // 7F275564: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F275568:
    ctx->pc = 0x7F275568u;
    // 7F275568: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27556C:
    ctx->pc = 0x7F27556Cu;
    // 7F27556C: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F275570u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F275570:
    ctx->pc = 0x7F275570u;
    ctx->downcount -= 1;
    // 7F275570: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F275574:
    ctx->pc = 0x7F275574u;
    ctx->downcount -= 11;
    // 7F275574: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275578:
    ctx->pc = 0x7F275578u;
    // 7F275578: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27557C:
    ctx->pc = 0x7F27557Cu;
    // 7F27557C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275580:
    ctx->pc = 0x7F275580u;
    // 7F275580: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275584:
    ctx->pc = 0x7F275584u;
    // 7F275584: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275588:
    ctx->pc = 0x7F275588u;
    // 7F275588: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27558C:
    ctx->pc = 0x7F27558Cu;
    // 7F27558C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275590:
    ctx->pc = 0x7F275590u;
    // 7F275590: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275594:
    ctx->pc = 0x7F275594u;
    // 7F275594: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275598:
    ctx->pc = 0x7F275598u;
    // 7F275598: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27559C:
    ctx->pc = 0x7F27559Cu;
    // 7F27559C: bl      0x7F275AD4
    {
            ctx->lr = 0x7F2755A0u;
            goto label_7F275AD4;
    }

label_7F2755A0:
    ctx->pc = 0x7F2755A0u;
    ctx->downcount -= 6;
    // 7F2755A0: addi    r0, r30, 2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2);

label_7F2755A4:
    ctx->pc = 0x7F2755A4u;
    // 7F2755A4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2755A8:
    ctx->pc = 0x7F2755A8u;
    // 7F2755A8: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2755AC:
    ctx->pc = 0x7F2755ACu;
    // 7F2755AC: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F2755B0:
    ctx->pc = 0x7F2755B0u;
    // 7F2755B0: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2755B4:
    ctx->pc = 0x7F2755B4u;
    // 7F2755B4: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2755B8u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2755B8:
    ctx->pc = 0x7F2755B8u;
    ctx->downcount -= 6;
    // 7F2755B8: addi    r0, r30, 2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2);

label_7F2755BC:
    ctx->pc = 0x7F2755BCu;
    // 7F2755BC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2755C0:
    ctx->pc = 0x7F2755C0u;
    // 7F2755C0: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2755C4:
    ctx->pc = 0x7F2755C4u;
    // 7F2755C4: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F2755C8:
    ctx->pc = 0x7F2755C8u;
    // 7F2755C8: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2755CC:
    ctx->pc = 0x7F2755CCu;
    // 7F2755CC: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F2755D0u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F2755D0:
    ctx->pc = 0x7F2755D0u;
    ctx->downcount -= 1;
    // 7F2755D0: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F2755D4:
    ctx->pc = 0x7F2755D4u;
    ctx->downcount -= 13;
    // 7F2755D4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2755D8:
    ctx->pc = 0x7F2755D8u;
    // 7F2755D8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2755DC:
    ctx->pc = 0x7F2755DCu;
    // 7F2755DC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2755E0:
    ctx->pc = 0x7F2755E0u;
    // 7F2755E0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2755E4:
    ctx->pc = 0x7F2755E4u;
    // 7F2755E4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2755E8:
    ctx->pc = 0x7F2755E8u;
    // 7F2755E8: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2755EC:
    ctx->pc = 0x7F2755ECu;
    // 7F2755EC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2755F0:
    ctx->pc = 0x7F2755F0u;
    // 7F2755F0: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2755F4:
    ctx->pc = 0x7F2755F4u;
    // 7F2755F4: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2755F8:
    ctx->pc = 0x7F2755F8u;
    // 7F2755F8: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2755FC:
    ctx->pc = 0x7F2755FCu;
    // 7F2755FC: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275600:
    ctx->pc = 0x7F275600u;
    // 7F275600: rlwinm. r0, r0, 0, 19, 19
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

label_7F275604:
    ctx->pc = 0x7F275604u;
    // 7F275604: bc    4, 2, 0x7F275630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275630;
        }
    }

label_7F275608:
    ctx->pc = 0x7F275608u;
    ctx->downcount -= 7;
    // 7F275608: lwz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27560C:
    ctx->pc = 0x7F27560Cu;
    // 7F27560C: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275610:
    ctx->pc = 0x7F275610u;
    // 7F275610: lwz     r4, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275614:
    ctx->pc = 0x7F275614u;
    // 7F275614: lwz     r5, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F275618:
    ctx->pc = 0x7F275618u;
    // 7F275618: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F27561C:
    ctx->pc = 0x7F27561Cu;
    // 7F27561C: lwz     r6, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F275620:
    ctx->pc = 0x7F275620u;
    // 7F275620: bl      0x7F26BA7C
    {
            ctx->lr = 0x7F275624u;
            ctx->pc = 0x7F26BA7Cu;
            return;
    }

label_7F275624:
    ctx->pc = 0x7F275624u;
    ctx->downcount -= 3;
    // 7F275624: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275628:
    ctx->pc = 0x7F275628u;
    // 7F275628: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27562C:
    ctx->pc = 0x7F27562Cu;
    // 7F27562C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F275630u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F275630:
    ctx->pc = 0x7F275630u;
    ctx->downcount -= 5;
    // 7F275630: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275634:
    ctx->pc = 0x7F275634u;
    // 7F275634: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275638:
    ctx->pc = 0x7F275638u;
    // 7F275638: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_7F27563C:
    ctx->pc = 0x7F27563Cu;
    // 7F27563C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275640:
    ctx->pc = 0x7F275640u;
    // 7F275640: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F275644:
    ctx->pc = 0x7F275644u;
    ctx->downcount -= 10;
    // 7F275644: lwz     r4, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275648:
    ctx->pc = 0x7F275648u;
    // 7F275648: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27564C:
    ctx->pc = 0x7F27564Cu;
    // 7F27564C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275650:
    ctx->pc = 0x7F275650u;
    // 7F275650: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F275654:
    ctx->pc = 0x7F275654u;
    // 7F275654: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275658:
    ctx->pc = 0x7F275658u;
    // 7F275658: lwz     r4, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27565C:
    ctx->pc = 0x7F27565Cu;
    // 7F27565C: lwz     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275660:
    ctx->pc = 0x7F275660u;
    // 7F275660: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F275664:
    ctx->pc = 0x7F275664u;
    // 7F275664: stw     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275668:
    ctx->pc = 0x7F275668u;
    // 7F275668: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27566Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27566C:
    ctx->pc = 0x7F27566Cu;
    ctx->downcount -= 1;
    // 7F27566C: b       0x7F2756EC
    {
            goto label_7F2756EC;
    }

label_7F275670:
    ctx->pc = 0x7F275670u;
    ctx->downcount -= 21;
    // 7F275670: lwz     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F275674:
    ctx->pc = 0x7F275674u;
    // 7F275674: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275678:
    ctx->pc = 0x7F275678u;
    // 7F275678: addi    r3, r3, 16736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16736);

label_7F27567C:
    ctx->pc = 0x7F27567Cu;
    // 7F27567C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F275680:
    ctx->pc = 0x7F275680u;
    // 7F275680: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275684:
    ctx->pc = 0x7F275684u;
    // 7F275684: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275688:
    ctx->pc = 0x7F275688u;
    // 7F275688: rlwinm r0, r4, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F27568C:
    ctx->pc = 0x7F27568Cu;
    // 7F27568C: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275690:
    ctx->pc = 0x7F275690u;
    // 7F275690: lwz     r4, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275694:
    ctx->pc = 0x7F275694u;
    // 7F275694: lwz     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275698:
    ctx->pc = 0x7F275698u;
    // 7F275698: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F27569C:
    ctx->pc = 0x7F27569Cu;
    // 7F27569C: stw     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2756A0:
    ctx->pc = 0x7F2756A0u;
    // 7F2756A0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2756A4:
    ctx->pc = 0x7F2756A4u;
    // 7F2756A4: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2756A8:
    ctx->pc = 0x7F2756A8u;
    // 7F2756A8: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F2756AC:
    ctx->pc = 0x7F2756ACu;
    // 7F2756AC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2756B0:
    ctx->pc = 0x7F2756B0u;
    // 7F2756B0: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F2756B4:
    ctx->pc = 0x7F2756B4u;
    // 7F2756B4: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2756B8:
    ctx->pc = 0x7F2756B8u;
    // 7F2756B8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2756BCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2756BC:
    ctx->pc = 0x7F2756BCu;
    ctx->downcount -= 6;
    // 7F2756BC: addi    r0, r30, 3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(3);

label_7F2756C0:
    ctx->pc = 0x7F2756C0u;
    // 7F2756C0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2756C4:
    ctx->pc = 0x7F2756C4u;
    // 7F2756C4: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2756C8:
    ctx->pc = 0x7F2756C8u;
    // 7F2756C8: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F2756CC:
    ctx->pc = 0x7F2756CCu;
    // 7F2756CC: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2756D0:
    ctx->pc = 0x7F2756D0u;
    // 7F2756D0: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2756D4u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2756D4:
    ctx->pc = 0x7F2756D4u;
    ctx->downcount -= 6;
    // 7F2756D4: addi    r0, r30, 3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(3);

label_7F2756D8:
    ctx->pc = 0x7F2756D8u;
    // 7F2756D8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2756DC:
    ctx->pc = 0x7F2756DCu;
    // 7F2756DC: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2756E0:
    ctx->pc = 0x7F2756E0u;
    // 7F2756E0: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F2756E4:
    ctx->pc = 0x7F2756E4u;
    // 7F2756E4: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2756E8:
    ctx->pc = 0x7F2756E8u;
    // 7F2756E8: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F2756ECu;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F2756EC:
    ctx->pc = 0x7F2756ECu;
    ctx->downcount -= 2;
    // 7F2756EC: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2756F0:
    ctx->pc = 0x7F2756F0u;
    // 7F2756F0: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F2756F4u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F2756F4:
    ctx->pc = 0x7F2756F4u;
    ctx->downcount -= 5;
    // 7F2756F4: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2756F8:
    ctx->pc = 0x7F2756F8u;
    // 7F2756F8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2756FC:
    ctx->pc = 0x7F2756FCu;
    // 7F2756FC: rlwinm r0, r0, 28, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x0000000Fu;
    }

label_7F275700:
    ctx->pc = 0x7F275700u;
    // 7F275700: cmplwi  r0, 0x0006
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

label_7F275704:
    ctx->pc = 0x7F275704u;
    // 7F275704: bc    12, 1, 0x7F275974
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275974;
        }
    }

label_7F275708:
    ctx->pc = 0x7F275708u;
    ctx->downcount -= 7;
    // 7F275708: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27570C:
    ctx->pc = 0x7F27570Cu;
    // 7F27570C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F275710:
    ctx->pc = 0x7F275710u;
    // 7F275710: addi    r3, r3, 18096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18096);

label_7F275714:
    ctx->pc = 0x7F275714u;
    // 7F275714: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275718:
    ctx->pc = 0x7F275718u;
    // 7F275718: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27571C:
    ctx->pc = 0x7F27571Cu;
    // 7F27571C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F275720:
    ctx->pc = 0x7F275720u;
    ctx->downcount -= 11;
    // 7F275720: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275724:
    ctx->pc = 0x7F275724u;
    // 7F275724: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275728:
    ctx->pc = 0x7F275728u;
    // 7F275728: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27572C:
    ctx->pc = 0x7F27572Cu;
    // 7F27572C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275730:
    ctx->pc = 0x7F275730u;
    // 7F275730: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275734:
    ctx->pc = 0x7F275734u;
    // 7F275734: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275738:
    ctx->pc = 0x7F275738u;
    // 7F275738: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27573C:
    ctx->pc = 0x7F27573Cu;
    // 7F27573C: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275740:
    ctx->pc = 0x7F275740u;
    // 7F275740: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275744:
    ctx->pc = 0x7F275744u;
    // 7F275744: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275748:
    ctx->pc = 0x7F275748u;
    // 7F275748: bl      0x7F275AD4
    {
            ctx->lr = 0x7F27574Cu;
            goto label_7F275AD4;
    }

label_7F27574C:
    ctx->pc = 0x7F27574Cu;
    ctx->downcount -= 1;
    // 7F27574C: b       0x7F275974
    {
            goto label_7F275974;
    }

label_7F275750:
    ctx->pc = 0x7F275750u;
    ctx->downcount -= 11;
    // 7F275750: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275754:
    ctx->pc = 0x7F275754u;
    // 7F275754: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275758:
    ctx->pc = 0x7F275758u;
    // 7F275758: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F27575C:
    ctx->pc = 0x7F27575Cu;
    // 7F27575C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275760:
    ctx->pc = 0x7F275760u;
    // 7F275760: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275764:
    ctx->pc = 0x7F275764u;
    // 7F275764: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275768:
    ctx->pc = 0x7F275768u;
    // 7F275768: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F27576C:
    ctx->pc = 0x7F27576Cu;
    // 7F27576C: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275770:
    ctx->pc = 0x7F275770u;
    // 7F275770: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275774:
    ctx->pc = 0x7F275774u;
    // 7F275774: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275778:
    ctx->pc = 0x7F275778u;
    // 7F275778: bl      0x7F275AD4
    {
            ctx->lr = 0x7F27577Cu;
            goto label_7F275AD4;
    }

label_7F27577C:
    ctx->pc = 0x7F27577Cu;
    ctx->downcount -= 5;
    // 7F27577C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275780:
    ctx->pc = 0x7F275780u;
    // 7F275780: rlwinm r4, r30, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 4u) & 0xFFFFFFF0u;
    }

label_7F275784:
    ctx->pc = 0x7F275784u;
    // 7F275784: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F275788:
    ctx->pc = 0x7F275788u;
    // 7F275788: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27578C:
    ctx->pc = 0x7F27578Cu;
    // 7F27578C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F275790u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F275790:
    ctx->pc = 0x7F275790u;
    ctx->downcount -= 5;
    // 7F275790: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275794:
    ctx->pc = 0x7F275794u;
    // 7F275794: rlwinm r4, r30, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 3u) & 0xFFFFFFF8u;
    }

label_7F275798:
    ctx->pc = 0x7F275798u;
    // 7F275798: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F27579C:
    ctx->pc = 0x7F27579Cu;
    // 7F27579C: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2757A0:
    ctx->pc = 0x7F2757A0u;
    // 7F2757A0: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F2757A4u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F2757A4:
    ctx->pc = 0x7F2757A4u;
    ctx->downcount -= 1;
    // 7F2757A4: b       0x7F275974
    {
            goto label_7F275974;
    }

label_7F2757A8:
    ctx->pc = 0x7F2757A8u;
    ctx->downcount -= 21;
    // 7F2757A8: lwz     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2757AC:
    ctx->pc = 0x7F2757ACu;
    // 7F2757AC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2757B0:
    ctx->pc = 0x7F2757B0u;
    // 7F2757B0: addi    r3, r3, 16736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16736);

label_7F2757B4:
    ctx->pc = 0x7F2757B4u;
    // 7F2757B4: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F2757B8:
    ctx->pc = 0x7F2757B8u;
    // 7F2757B8: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2757BC:
    ctx->pc = 0x7F2757BCu;
    // 7F2757BC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2757C0:
    ctx->pc = 0x7F2757C0u;
    // 7F2757C0: rlwinm r0, r4, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F2757C4:
    ctx->pc = 0x7F2757C4u;
    // 7F2757C4: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2757C8:
    ctx->pc = 0x7F2757C8u;
    // 7F2757C8: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2757CC:
    ctx->pc = 0x7F2757CCu;
    // 7F2757CC: lwz     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2757D0:
    ctx->pc = 0x7F2757D0u;
    // 7F2757D0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2757D4:
    ctx->pc = 0x7F2757D4u;
    // 7F2757D4: stw     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2757D8:
    ctx->pc = 0x7F2757D8u;
    // 7F2757D8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2757DC:
    ctx->pc = 0x7F2757DCu;
    // 7F2757DC: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2757E0:
    ctx->pc = 0x7F2757E0u;
    // 7F2757E0: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F2757E4:
    ctx->pc = 0x7F2757E4u;
    // 7F2757E4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2757E8:
    ctx->pc = 0x7F2757E8u;
    // 7F2757E8: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F2757EC:
    ctx->pc = 0x7F2757ECu;
    // 7F2757EC: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2757F0:
    ctx->pc = 0x7F2757F0u;
    // 7F2757F0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2757F4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2757F4:
    ctx->pc = 0x7F2757F4u;
    ctx->downcount -= 6;
    // 7F2757F4: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2757F8:
    ctx->pc = 0x7F2757F8u;
    // 7F2757F8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2757FC:
    ctx->pc = 0x7F2757FCu;
    // 7F2757FC: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F275800:
    ctx->pc = 0x7F275800u;
    // 7F275800: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F275804:
    ctx->pc = 0x7F275804u;
    // 7F275804: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275808:
    ctx->pc = 0x7F275808u;
    // 7F275808: bl      0x7F3B3134
    {
            ctx->lr = 0x7F27580Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F27580C:
    ctx->pc = 0x7F27580Cu;
    ctx->downcount -= 6;
    // 7F27580C: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F275810:
    ctx->pc = 0x7F275810u;
    // 7F275810: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275814:
    ctx->pc = 0x7F275814u;
    // 7F275814: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F275818:
    ctx->pc = 0x7F275818u;
    // 7F275818: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F27581C:
    ctx->pc = 0x7F27581Cu;
    // 7F27581C: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275820:
    ctx->pc = 0x7F275820u;
    // 7F275820: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F275824u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F275824:
    ctx->pc = 0x7F275824u;
    ctx->downcount -= 1;
    // 7F275824: b       0x7F275974
    {
            goto label_7F275974;
    }

label_7F275828:
    ctx->pc = 0x7F275828u;
    ctx->downcount -= 11;
    // 7F275828: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27582C:
    ctx->pc = 0x7F27582Cu;
    // 7F27582C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275830:
    ctx->pc = 0x7F275830u;
    // 7F275830: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275834:
    ctx->pc = 0x7F275834u;
    // 7F275834: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275838:
    ctx->pc = 0x7F275838u;
    // 7F275838: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27583C:
    ctx->pc = 0x7F27583Cu;
    // 7F27583C: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275840:
    ctx->pc = 0x7F275840u;
    // 7F275840: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275844:
    ctx->pc = 0x7F275844u;
    // 7F275844: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275848:
    ctx->pc = 0x7F275848u;
    // 7F275848: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27584C:
    ctx->pc = 0x7F27584Cu;
    // 7F27584C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275850:
    ctx->pc = 0x7F275850u;
    // 7F275850: bl      0x7F275AD4
    {
            ctx->lr = 0x7F275854u;
            goto label_7F275AD4;
    }

label_7F275854:
    ctx->pc = 0x7F275854u;
    ctx->downcount -= 6;
    // 7F275854: addi    r0, r30, 2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2);

label_7F275858:
    ctx->pc = 0x7F275858u;
    // 7F275858: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27585C:
    ctx->pc = 0x7F27585Cu;
    // 7F27585C: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F275860:
    ctx->pc = 0x7F275860u;
    // 7F275860: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F275864:
    ctx->pc = 0x7F275864u;
    // 7F275864: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275868:
    ctx->pc = 0x7F275868u;
    // 7F275868: bl      0x7F3B3134
    {
            ctx->lr = 0x7F27586Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F27586C:
    ctx->pc = 0x7F27586Cu;
    ctx->downcount -= 6;
    // 7F27586C: addi    r0, r30, 2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2);

label_7F275870:
    ctx->pc = 0x7F275870u;
    // 7F275870: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275874:
    ctx->pc = 0x7F275874u;
    // 7F275874: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F275878:
    ctx->pc = 0x7F275878u;
    // 7F275878: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F27587C:
    ctx->pc = 0x7F27587Cu;
    // 7F27587C: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275880:
    ctx->pc = 0x7F275880u;
    // 7F275880: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F275884u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F275884:
    ctx->pc = 0x7F275884u;
    ctx->downcount -= 1;
    // 7F275884: b       0x7F275974
    {
            goto label_7F275974;
    }

label_7F275888:
    ctx->pc = 0x7F275888u;
    ctx->downcount -= 13;
    // 7F275888: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27588C:
    ctx->pc = 0x7F27588Cu;
    // 7F27588C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275890:
    ctx->pc = 0x7F275890u;
    // 7F275890: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275894:
    ctx->pc = 0x7F275894u;
    // 7F275894: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275898:
    ctx->pc = 0x7F275898u;
    // 7F275898: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27589C:
    ctx->pc = 0x7F27589Cu;
    // 7F27589C: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2758A0:
    ctx->pc = 0x7F2758A0u;
    // 7F2758A0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2758A4:
    ctx->pc = 0x7F2758A4u;
    // 7F2758A4: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2758A8:
    ctx->pc = 0x7F2758A8u;
    // 7F2758A8: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2758AC:
    ctx->pc = 0x7F2758ACu;
    // 7F2758AC: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2758B0:
    ctx->pc = 0x7F2758B0u;
    // 7F2758B0: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2758B4:
    ctx->pc = 0x7F2758B4u;
    // 7F2758B4: rlwinm. r0, r0, 0, 19, 19
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

label_7F2758B8:
    ctx->pc = 0x7F2758B8u;
    // 7F2758B8: bc    4, 2, 0x7F2758E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2758E4;
        }
    }

label_7F2758BC:
    ctx->pc = 0x7F2758BCu;
    ctx->downcount -= 7;
    // 7F2758BC: lwz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2758C0:
    ctx->pc = 0x7F2758C0u;
    // 7F2758C0: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2758C4:
    ctx->pc = 0x7F2758C4u;
    // 7F2758C4: lwz     r4, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2758C8:
    ctx->pc = 0x7F2758C8u;
    // 7F2758C8: lwz     r5, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2758CC:
    ctx->pc = 0x7F2758CCu;
    // 7F2758CC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2758D0:
    ctx->pc = 0x7F2758D0u;
    // 7F2758D0: lwz     r6, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2758D4:
    ctx->pc = 0x7F2758D4u;
    // 7F2758D4: bl      0x7F26BA7C
    {
            ctx->lr = 0x7F2758D8u;
            ctx->pc = 0x7F26BA7Cu;
            return;
    }

label_7F2758D8:
    ctx->pc = 0x7F2758D8u;
    ctx->downcount -= 3;
    // 7F2758D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2758DC:
    ctx->pc = 0x7F2758DCu;
    // 7F2758DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2758E0:
    ctx->pc = 0x7F2758E0u;
    // 7F2758E0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2758E4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2758E4:
    ctx->pc = 0x7F2758E4u;
    ctx->downcount -= 5;
    // 7F2758E4: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2758E8:
    ctx->pc = 0x7F2758E8u;
    // 7F2758E8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2758EC:
    ctx->pc = 0x7F2758ECu;
    // 7F2758EC: rlwinm r0, r0, 0, 26, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_7F2758F0:
    ctx->pc = 0x7F2758F0u;
    // 7F2758F0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2758F4:
    ctx->pc = 0x7F2758F4u;
    // 7F2758F4: b       0x7F275974
    {
            goto label_7F275974;
    }

label_7F2758F8:
    ctx->pc = 0x7F2758F8u;
    ctx->downcount -= 21;
    // 7F2758F8: lwz     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2758FC:
    ctx->pc = 0x7F2758FCu;
    // 7F2758FC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275900:
    ctx->pc = 0x7F275900u;
    // 7F275900: addi    r3, r3, 16736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16736);

label_7F275904:
    ctx->pc = 0x7F275904u;
    // 7F275904: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F275908:
    ctx->pc = 0x7F275908u;
    // 7F275908: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27590C:
    ctx->pc = 0x7F27590Cu;
    // 7F27590C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275910:
    ctx->pc = 0x7F275910u;
    // 7F275910: rlwinm r0, r4, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F275914:
    ctx->pc = 0x7F275914u;
    // 7F275914: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275918:
    ctx->pc = 0x7F275918u;
    // 7F275918: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27591C:
    ctx->pc = 0x7F27591Cu;
    // 7F27591C: lwz     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275920:
    ctx->pc = 0x7F275920u;
    // 7F275920: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F275924:
    ctx->pc = 0x7F275924u;
    // 7F275924: stw     r0, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275928:
    ctx->pc = 0x7F275928u;
    // 7F275928: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27592C:
    ctx->pc = 0x7F27592Cu;
    // 7F27592C: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275930:
    ctx->pc = 0x7F275930u;
    // 7F275930: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F275934:
    ctx->pc = 0x7F275934u;
    // 7F275934: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275938:
    ctx->pc = 0x7F275938u;
    // 7F275938: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F27593C:
    ctx->pc = 0x7F27593Cu;
    // 7F27593C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275940:
    ctx->pc = 0x7F275940u;
    // 7F275940: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F275944u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F275944:
    ctx->pc = 0x7F275944u;
    ctx->downcount -= 6;
    // 7F275944: addi    r0, r30, 3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(3);

label_7F275948:
    ctx->pc = 0x7F275948u;
    // 7F275948: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27594C:
    ctx->pc = 0x7F27594Cu;
    // 7F27594C: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F275950:
    ctx->pc = 0x7F275950u;
    // 7F275950: addi    r0, r3, 16848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16848);

label_7F275954:
    ctx->pc = 0x7F275954u;
    // 7F275954: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275958:
    ctx->pc = 0x7F275958u;
    // 7F275958: bl      0x7F3B3134
    {
            ctx->lr = 0x7F27595Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F27595C:
    ctx->pc = 0x7F27595Cu;
    ctx->downcount -= 6;
    // 7F27595C: addi    r0, r30, 3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(3);

label_7F275960:
    ctx->pc = 0x7F275960u;
    // 7F275960: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275964:
    ctx->pc = 0x7F275964u;
    // 7F275964: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F275968:
    ctx->pc = 0x7F275968u;
    // 7F275968: addi    r0, r3, 17680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17680);

label_7F27596C:
    ctx->pc = 0x7F27596Cu;
    // 7F27596C: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F275970:
    ctx->pc = 0x7F275970u;
    // 7F275970: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F275974u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F275974:
    ctx->pc = 0x7F275974u;
    ctx->downcount -= 2;
    // 7F275974: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275978:
    ctx->pc = 0x7F275978u;
    // 7F275978: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F27597Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F27597C:
    ctx->pc = 0x7F27597Cu;
    ctx->downcount -= 5;
    // 7F27597C: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275980:
    ctx->pc = 0x7F275980u;
    // 7F275980: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275984:
    ctx->pc = 0x7F275984u;
    // 7F275984: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275988:
    ctx->pc = 0x7F275988u;
    // 7F275988: rlwinm. r4, r0, 0, 18, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27598C:
    ctx->pc = 0x7F27598Cu;
    // 7F27598C: bc    12, 2, 0x7F2759C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2759C0;
        }
    }

label_7F275990:
    ctx->pc = 0x7F275990u;
    ctx->downcount -= 12;
    // 7F275990: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275994:
    ctx->pc = 0x7F275994u;
    // 7F275994: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275998:
    ctx->pc = 0x7F275998u;
    // 7F275998: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F27599C:
    ctx->pc = 0x7F27599Cu;
    // 7F27599C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2759A0:
    ctx->pc = 0x7F2759A0u;
    // 7F2759A0: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2759A4:
    ctx->pc = 0x7F2759A4u;
    // 7F2759A4: lwz     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2759A8:
    ctx->pc = 0x7F2759A8u;
    // 7F2759A8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2759AC:
    ctx->pc = 0x7F2759ACu;
    // 7F2759AC: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2759B0:
    ctx->pc = 0x7F2759B0u;
    // 7F2759B0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2759B4:
    ctx->pc = 0x7F2759B4u;
    // 7F2759B4: rlwinm r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
    }

label_7F2759B8:
    ctx->pc = 0x7F2759B8u;
    // 7F2759B8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F2759BC:
    ctx->pc = 0x7F2759BCu;
    // 7F2759BC: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2759C0:
    ctx->pc = 0x7F2759C0u;
    ctx->downcount -= 2;
    // 7F2759C0: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F2759C4:
    ctx->pc = 0x7F2759C4u;
    // 7F2759C4: bl      0x7F012050
    {
            ctx->lr = 0x7F2759C8u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2759C8:
    ctx->pc = 0x7F2759C8u;
    ctx->downcount -= 2;
    // 7F2759C8: cmpwi   r3, 0
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

label_7F2759CC:
    ctx->pc = 0x7F2759CCu;
    // 7F2759CC: bc    4, 2, 0x7F275AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275AC0;
        }
    }

label_7F2759D0:
    ctx->pc = 0x7F2759D0u;
    ctx->downcount -= 5;
    // 7F2759D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2759D4:
    ctx->pc = 0x7F2759D4u;
    // 7F2759D4: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2759D8:
    ctx->pc = 0x7F2759D8u;
    // 7F2759D8: lwz     r0, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2759DC:
    ctx->pc = 0x7F2759DCu;
    // 7F2759DC: cmplw   r4, r0
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

label_7F2759E0:
    ctx->pc = 0x7F2759E0u;
    // 7F2759E0: bc    4, 2, 0x7F275AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275AC0;
        }
    }

label_7F2759E4:
    ctx->pc = 0x7F2759E4u;
    ctx->downcount -= 4;
    // 7F2759E4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2759E8:
    ctx->pc = 0x7F2759E8u;
    // 7F2759E8: lwz     r0, 2580(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2759EC:
    ctx->pc = 0x7F2759ECu;
    // 7F2759EC: rlwinm. r0, r0, 0, 19, 19
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

label_7F2759F0:
    ctx->pc = 0x7F2759F0u;
    // 7F2759F0: bc    12, 2, 0x7F275A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275A34;
        }
    }

label_7F2759F4:
    ctx->pc = 0x7F2759F4u;
    ctx->downcount -= 16;
    // 7F2759F4: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2759F8:
    ctx->pc = 0x7F2759F8u;
    // 7F2759F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2759FC:
    ctx->pc = 0x7F2759FCu;
    // 7F2759FC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F275A00:
    ctx->pc = 0x7F275A00u;
    // 7F275A00: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A04:
    ctx->pc = 0x7F275A04u;
    // 7F275A04: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A08:
    ctx->pc = 0x7F275A08u;
    // 7F275A08: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A0C:
    ctx->pc = 0x7F275A0Cu;
    // 7F275A0C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F275A10:
    ctx->pc = 0x7F275A10u;
    // 7F275A10: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A14:
    ctx->pc = 0x7F275A14u;
    // 7F275A14: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A18:
    ctx->pc = 0x7F275A18u;
    // 7F275A18: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A1C:
    ctx->pc = 0x7F275A1Cu;
    // 7F275A1C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F275A20:
    ctx->pc = 0x7F275A20u;
    // 7F275A20: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A24:
    ctx->pc = 0x7F275A24u;
    // 7F275A24: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A28:
    ctx->pc = 0x7F275A28u;
    // 7F275A28: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A2C:
    ctx->pc = 0x7F275A2Cu;
    // 7F275A2C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F275A30:
    ctx->pc = 0x7F275A30u;
    // 7F275A30: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A34:
    ctx->pc = 0x7F275A34u;
    ctx->downcount -= 5;
    // 7F275A34: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A38:
    ctx->pc = 0x7F275A38u;
    // 7F275A38: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A3C:
    ctx->pc = 0x7F275A3Cu;
    // 7F275A3C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A40:
    ctx->pc = 0x7F275A40u;
    // 7F275A40: rlwinm. r0, r0, 0, 7, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x01000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F275A44:
    ctx->pc = 0x7F275A44u;
    // 7F275A44: bc    12, 2, 0x7F275A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275A7C;
        }
    }

label_7F275A48:
    ctx->pc = 0x7F275A48u;
    ctx->downcount -= 1;
    // 7F275A48: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F275A4Cu;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F275A4C:
    ctx->pc = 0x7F275A4Cu;
    ctx->downcount -= 2;
    // 7F275A4C: cmpwi   r3, 8
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

label_7F275A50:
    ctx->pc = 0x7F275A50u;
    // 7F275A50: bc    4, 2, 0x7F275AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275AA0;
        }
    }

label_7F275A54:
    ctx->pc = 0x7F275A54u;
    ctx->downcount -= 5;
    // 7F275A54: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F275A58:
    ctx->pc = 0x7F275A58u;
    // 7F275A58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F275A5C:
    ctx->pc = 0x7F275A5Cu;
    // 7F275A5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F275A60:
    ctx->pc = 0x7F275A60u;
    // 7F275A60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F275A64:
    ctx->pc = 0x7F275A64u;
    // 7F275A64: bl      0x7F012018
    {
            ctx->lr = 0x7F275A68u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F275A68:
    ctx->pc = 0x7F275A68u;
    ctx->downcount -= 5;
    // 7F275A68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F275A6C:
    ctx->pc = 0x7F275A6Cu;
    // 7F275A6C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F275A70:
    ctx->pc = 0x7F275A70u;
    // 7F275A70: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F275A74:
    ctx->pc = 0x7F275A74u;
    // 7F275A74: or.   r0, r4, r0
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

label_7F275A78:
    ctx->pc = 0x7F275A78u;
    // 7F275A78: bc    4, 2, 0x7F275AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275AA0;
        }
    }

label_7F275A7C:
    ctx->pc = 0x7F275A7Cu;
    ctx->downcount -= 9;
    // 7F275A7C: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A80:
    ctx->pc = 0x7F275A80u;
    // 7F275A80: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A84:
    ctx->pc = 0x7F275A84u;
    // 7F275A84: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F275A88:
    ctx->pc = 0x7F275A88u;
    // 7F275A88: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A8C:
    ctx->pc = 0x7F275A8Cu;
    // 7F275A8C: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275A90:
    ctx->pc = 0x7F275A90u;
    // 7F275A90: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275A94:
    ctx->pc = 0x7F275A94u;
    // 7F275A94: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F275A98:
    ctx->pc = 0x7F275A98u;
    // 7F275A98: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275A9C:
    ctx->pc = 0x7F275A9Cu;
    // 7F275A9C: b       0x7F275AC0
    {
            goto label_7F275AC0;
    }

label_7F275AA0:
    ctx->pc = 0x7F275AA0u;
    ctx->downcount -= 8;
    // 7F275AA0: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275AA4:
    ctx->pc = 0x7F275AA4u;
    // 7F275AA4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275AA8:
    ctx->pc = 0x7F275AA8u;
    // 7F275AA8: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F275AAC:
    ctx->pc = 0x7F275AACu;
    // 7F275AAC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275AB0:
    ctx->pc = 0x7F275AB0u;
    // 7F275AB0: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275AB4:
    ctx->pc = 0x7F275AB4u;
    // 7F275AB4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275AB8:
    ctx->pc = 0x7F275AB8u;
    // 7F275AB8: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F275ABC:
    ctx->pc = 0x7F275ABCu;
    // 7F275ABC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275AC0:
    ctx->pc = 0x7F275AC0u;
    ctx->downcount -= 16;
    // 7F275AC0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F275AC4:
    ctx->pc = 0x7F275AC4u;
    // 7F275AC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275AC8:
    ctx->pc = 0x7F275AC8u;
    // 7F275AC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275ACC:
    ctx->pc = 0x7F275ACCu;
    // 7F275ACC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F275AD0:
    ctx->pc = 0x7F275AD0u;
    // 7F275AD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275AD4:
    ctx->pc = 0x7F275AD4u;
    ctx->downcount -= 6;
    // 7F275AD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275AD8:
    ctx->pc = 0x7F275AD8u;
    // 7F275AD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275ADC:
    ctx->pc = 0x7F275ADCu;
    // 7F275ADC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275AE0:
    ctx->pc = 0x7F275AE0u;
    // 7F275AE0: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275AE4:
    ctx->pc = 0x7F275AE4u;
    // 7F275AE4: cmplwi  r0, 0x0000
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

label_7F275AE8:
    ctx->pc = 0x7F275AE8u;
    // 7F275AE8: bc    12, 2, 0x7F275AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275AF8;
        }
    }

label_7F275AEC:
    ctx->pc = 0x7F275AECu;
    ctx->downcount -= 2;
    // 7F275AEC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F275AF0:
    ctx->pc = 0x7F275AF0u;
    // 7F275AF0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F275AF4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F275AF4:
    ctx->pc = 0x7F275AF4u;
    ctx->downcount -= 1;
    // 7F275AF4: b       0x7F275B00
    {
            goto label_7F275B00;
    }

label_7F275AF8:
    ctx->pc = 0x7F275AF8u;
    ctx->downcount -= 2;
    // 7F275AF8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F275AFC:
    ctx->pc = 0x7F275AFCu;
    // 7F275AFC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F275B00u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F275B00:
    ctx->pc = 0x7F275B00u;
    ctx->downcount -= 5;
    // 7F275B00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275B04:
    ctx->pc = 0x7F275B04u;
    // 7F275B04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275B08:
    ctx->pc = 0x7F275B08u;
    // 7F275B08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F275B0C:
    ctx->pc = 0x7F275B0Cu;
    // 7F275B0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275B10:
    ctx->pc = 0x7F275B10u;
    ctx->downcount -= 7;
    // 7F275B10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275B14:
    ctx->pc = 0x7F275B14u;
    // 7F275B14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275B18:
    ctx->pc = 0x7F275B18u;
    // 7F275B18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275B1C:
    ctx->pc = 0x7F275B1Cu;
    // 7F275B1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F275B20:
    ctx->pc = 0x7F275B20u;
    // 7F275B20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275B24:
    ctx->pc = 0x7F275B24u;
    // 7F275B24: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275B28:
    ctx->pc = 0x7F275B28u;
    // 7F275B28: bl      0x7F01B234
    {
            ctx->lr = 0x7F275B2Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F275B2C:
    ctx->pc = 0x7F275B2Cu;
    ctx->downcount -= 7;
    // 7F275B2C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275B30:
    ctx->pc = 0x7F275B30u;
    // 7F275B30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275B34:
    ctx->pc = 0x7F275B34u;
    // 7F275B34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F275B38:
    ctx->pc = 0x7F275B38u;
    // 7F275B38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275B3C:
    ctx->pc = 0x7F275B3Cu;
    // 7F275B3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F275B40:
    ctx->pc = 0x7F275B40u;
    // 7F275B40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275B44:
    ctx->pc = 0x7F275B44u;
    ctx->downcount -= 8;
    // 7F275B44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275B48:
    ctx->pc = 0x7F275B48u;
    // 7F275B48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275B4C:
    ctx->pc = 0x7F275B4Cu;
    // 7F275B4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275B50:
    ctx->pc = 0x7F275B50u;
    // 7F275B50: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F275B54:
    ctx->pc = 0x7F275B54u;
    // 7F275B54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275B58:
    ctx->pc = 0x7F275B58u;
    // 7F275B58: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275B5C:
    ctx->pc = 0x7F275B5Cu;
    // 7F275B5C: cmplwi  r0, 0x0000
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

label_7F275B60:
    ctx->pc = 0x7F275B60u;
    // 7F275B60: bc    12, 2, 0x7F275B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275B90;
        }
    }

label_7F275B64:
    ctx->pc = 0x7F275B64u;
    ctx->downcount -= 1;
    // 7F275B64: bl      0x7F3C89FC
    {
            ctx->lr = 0x7F275B68u;
            ctx->pc = 0x7F3C89FCu;
            return;
    }

label_7F275B68:
    ctx->pc = 0x7F275B68u;
    ctx->downcount -= 2;
    // 7F275B68: cmpwi   r3, 0
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

label_7F275B6C:
    ctx->pc = 0x7F275B6Cu;
    // 7F275B6C: bc    4, 2, 0x7F275B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275B80;
        }
    }

label_7F275B70:
    ctx->pc = 0x7F275B70u;
    ctx->downcount -= 4;
    // 7F275B70: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275B74:
    ctx->pc = 0x7F275B74u;
    // 7F275B74: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275B78:
    ctx->pc = 0x7F275B78u;
    // 7F275B78: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275B7C:
    ctx->pc = 0x7F275B7Cu;
    // 7F275B7C: bl      0x7F3B0954
    {
            ctx->lr = 0x7F275B80u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F275B80:
    ctx->pc = 0x7F275B80u;
    ctx->downcount -= 2;
    // 7F275B80: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275B84:
    ctx->pc = 0x7F275B84u;
    // 7F275B84: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F275B88u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F275B88:
    ctx->pc = 0x7F275B88u;
    ctx->downcount -= 2;
    // 7F275B88: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275B8C:
    ctx->pc = 0x7F275B8Cu;
    // 7F275B8C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F275B90u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F275B90:
    ctx->pc = 0x7F275B90u;
    ctx->downcount -= 3;
    // 7F275B90: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275B94:
    ctx->pc = 0x7F275B94u;
    // 7F275B94: cmplwi  r0, 0x0000
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

label_7F275B98:
    ctx->pc = 0x7F275B98u;
    // 7F275B98: bc    12, 2, 0x7F275BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275BCC;
        }
    }

label_7F275B9C:
    ctx->pc = 0x7F275B9Cu;
    ctx->downcount -= 2;
    // 7F275B9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275BA0:
    ctx->pc = 0x7F275BA0u;
    // 7F275BA0: bl      0x7F3C89FC
    {
            ctx->lr = 0x7F275BA4u;
            ctx->pc = 0x7F3C89FCu;
            return;
    }

label_7F275BA4:
    ctx->pc = 0x7F275BA4u;
    ctx->downcount -= 2;
    // 7F275BA4: cmpwi   r3, 0
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

label_7F275BA8:
    ctx->pc = 0x7F275BA8u;
    // 7F275BA8: bc    4, 2, 0x7F275BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275BBC;
        }
    }

label_7F275BAC:
    ctx->pc = 0x7F275BACu;
    ctx->downcount -= 4;
    // 7F275BAC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275BB0:
    ctx->pc = 0x7F275BB0u;
    // 7F275BB0: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275BB4:
    ctx->pc = 0x7F275BB4u;
    // 7F275BB4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275BB8:
    ctx->pc = 0x7F275BB8u;
    // 7F275BB8: bl      0x7F3B0954
    {
            ctx->lr = 0x7F275BBCu;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F275BBC:
    ctx->pc = 0x7F275BBCu;
    ctx->downcount -= 2;
    // 7F275BBC: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275BC0:
    ctx->pc = 0x7F275BC0u;
    // 7F275BC0: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F275BC4u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F275BC4:
    ctx->pc = 0x7F275BC4u;
    ctx->downcount -= 2;
    // 7F275BC4: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275BC8:
    ctx->pc = 0x7F275BC8u;
    // 7F275BC8: bl      0x7F3B0820
    {
            ctx->lr = 0x7F275BCCu;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F275BCC:
    ctx->pc = 0x7F275BCCu;
    ctx->downcount -= 6;
    // 7F275BCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275BD0:
    ctx->pc = 0x7F275BD0u;
    // 7F275BD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F275BD4:
    ctx->pc = 0x7F275BD4u;
    // 7F275BD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275BD8:
    ctx->pc = 0x7F275BD8u;
    // 7F275BD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F275BDC:
    ctx->pc = 0x7F275BDCu;
    // 7F275BDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275BE0:
    ctx->pc = 0x7F275BE0u;
    ctx->downcount -= 17;
    // 7F275BE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275BE4:
    ctx->pc = 0x7F275BE4u;
    // 7F275BE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275BE8:
    ctx->pc = 0x7F275BE8u;
    // 7F275BE8: cmpwi   r7, 13
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F275BEC:
    ctx->pc = 0x7F275BECu;
    // 7F275BEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275BF0:
    ctx->pc = 0x7F275BF0u;
    // 7F275BF0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275BF4:
    ctx->pc = 0x7F275BF4u;
    // 7F275BF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275BF8:
    ctx->pc = 0x7F275BF8u;
    // 7F275BF8: bc    12, 0, 0x7F275C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275C04;
        }
    }

label_7F275BFC:
    ctx->pc = 0x7F275BFCu;
    ctx->downcount -= 2;
    // 7F275BFC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F275C00:
    ctx->pc = 0x7F275C00u;
    // 7F275C00: b       0x7F275CFC
    {
            goto label_7F275CFC;
    }

label_7F275C04:
    ctx->pc = 0x7F275C04u;
    ctx->downcount -= 7;
    // 7F275C04: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F275C08:
    ctx->pc = 0x7F275C08u;
    // 7F275C08: stw     r5, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F275C0C:
    ctx->pc = 0x7F275C0Cu;
    // 7F275C0C: stw     r6, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F275C10:
    ctx->pc = 0x7F275C10u;
    // 7F275C10: stw     r7, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F275C14:
    ctx->pc = 0x7F275C14u;
    // 7F275C14: lwz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275C18:
    ctx->pc = 0x7F275C18u;
    // 7F275C18: cmpwi   r0, 13
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

label_7F275C1C:
    ctx->pc = 0x7F275C1Cu;
    // 7F275C1C: bc    4, 1, 0x7F275C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275C28;
        }
    }

label_7F275C20:
    ctx->pc = 0x7F275C20u;
    ctx->downcount -= 2;
    // 7F275C20: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F275C24:
    ctx->pc = 0x7F275C24u;
    // 7F275C24: b       0x7F275CFC
    {
            goto label_7F275CFC;
    }

label_7F275C28:
    ctx->pc = 0x7F275C28u;
    ctx->downcount -= 6;
    // 7F275C28: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F275C2C:
    ctx->pc = 0x7F275C2Cu;
    // 7F275C2C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F275C30:
    ctx->pc = 0x7F275C30u;
    // 7F275C30: addi    r3, r3, 16672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16672);

label_7F275C34:
    ctx->pc = 0x7F275C34u;
    // 7F275C34: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F275C38:
    ctx->pc = 0x7F275C38u;
    // 7F275C38: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275C3C:
    ctx->pc = 0x7F275C3Cu;
    // 7F275C3C: bl      0x7F3C8470
    {
            ctx->lr = 0x7F275C40u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F275C40:
    ctx->pc = 0x7F275C40u;
    ctx->downcount -= 1;
    // 7F275C40: bl      0x7F3C8480
    {
            ctx->lr = 0x7F275C44u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F275C44:
    ctx->pc = 0x7F275C44u;
    ctx->downcount -= 4;
    // 7F275C44: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_7F275C48:
    ctx->pc = 0x7F275C48u;
    // 7F275C48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275C4C:
    ctx->pc = 0x7F275C4Cu;
    // 7F275C4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F275C50:
    ctx->pc = 0x7F275C50u;
    // 7F275C50: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F275C54u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F275C54:
    ctx->pc = 0x7F275C54u;
    ctx->downcount -= 4;
    // 7F275C54: stw     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275C58:
    ctx->pc = 0x7F275C58u;
    // 7F275C58: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275C5C:
    ctx->pc = 0x7F275C5Cu;
    // 7F275C5C: cmplwi  r3, 0x0000
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

label_7F275C60:
    ctx->pc = 0x7F275C60u;
    // 7F275C60: bc    4, 2, 0x7F275C6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275C6C;
        }
    }

label_7F275C64:
    ctx->pc = 0x7F275C64u;
    ctx->downcount -= 2;
    // 7F275C64: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F275C68:
    ctx->pc = 0x7F275C68u;
    // 7F275C68: b       0x7F275CFC
    {
            goto label_7F275CFC;
    }

label_7F275C6C:
    ctx->pc = 0x7F275C6Cu;
    ctx->downcount -= 1;
    // 7F275C6C: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F275C70u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F275C70:
    ctx->pc = 0x7F275C70u;
    ctx->downcount -= 4;
    // 7F275C70: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275C74:
    ctx->pc = 0x7F275C74u;
    // 7F275C74: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275C78:
    ctx->pc = 0x7F275C78u;
    // 7F275C78: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275C7C:
    ctx->pc = 0x7F275C7Cu;
    // 7F275C7C: bl      0x7F3B0938
    {
            ctx->lr = 0x7F275C80u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F275C80:
    ctx->pc = 0x7F275C80u;
    ctx->downcount -= 5;
    // 7F275C80: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275C84:
    ctx->pc = 0x7F275C84u;
    // 7F275C84: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275C88:
    ctx->pc = 0x7F275C88u;
    // 7F275C88: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275C8C:
    ctx->pc = 0x7F275C8Cu;
    // 7F275C8C: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275C90:
    ctx->pc = 0x7F275C90u;
    // 7F275C90: bl      0x7F3BC518
    {
            ctx->lr = 0x7F275C94u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F275C94:
    ctx->pc = 0x7F275C94u;
    ctx->downcount -= 4;
    // 7F275C94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275C98:
    ctx->pc = 0x7F275C98u;
    // 7F275C98: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_7F275C9C:
    ctx->pc = 0x7F275C9Cu;
    // 7F275C9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F275CA0:
    ctx->pc = 0x7F275CA0u;
    // 7F275CA0: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F275CA4u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F275CA4:
    ctx->pc = 0x7F275CA4u;
    ctx->downcount -= 4;
    // 7F275CA4: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275CA8:
    ctx->pc = 0x7F275CA8u;
    // 7F275CA8: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275CAC:
    ctx->pc = 0x7F275CACu;
    // 7F275CAC: cmplwi  r3, 0x0000
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

label_7F275CB0:
    ctx->pc = 0x7F275CB0u;
    // 7F275CB0: bc    4, 2, 0x7F275CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275CBC;
        }
    }

label_7F275CB4:
    ctx->pc = 0x7F275CB4u;
    ctx->downcount -= 2;
    // 7F275CB4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F275CB8:
    ctx->pc = 0x7F275CB8u;
    // 7F275CB8: b       0x7F275CFC
    {
            goto label_7F275CFC;
    }

label_7F275CBC:
    ctx->pc = 0x7F275CBCu;
    ctx->downcount -= 1;
    // 7F275CBC: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F275CC0u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F275CC0:
    ctx->pc = 0x7F275CC0u;
    ctx->downcount -= 4;
    // 7F275CC0: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275CC4:
    ctx->pc = 0x7F275CC4u;
    // 7F275CC4: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CC8:
    ctx->pc = 0x7F275CC8u;
    // 7F275CC8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275CCC:
    ctx->pc = 0x7F275CCCu;
    // 7F275CCC: bl      0x7F3B0938
    {
            ctx->lr = 0x7F275CD0u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F275CD0:
    ctx->pc = 0x7F275CD0u;
    ctx->downcount -= 5;
    // 7F275CD0: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CD4:
    ctx->pc = 0x7F275CD4u;
    // 7F275CD4: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275CD8:
    ctx->pc = 0x7F275CD8u;
    // 7F275CD8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CDC:
    ctx->pc = 0x7F275CDCu;
    // 7F275CDC: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CE0:
    ctx->pc = 0x7F275CE0u;
    // 7F275CE0: bl      0x7F3BC518
    {
            ctx->lr = 0x7F275CE4u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F275CE4:
    ctx->pc = 0x7F275CE4u;
    ctx->downcount -= 6;
    // 7F275CE4: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CE8:
    ctx->pc = 0x7F275CE8u;
    // 7F275CE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F275CEC:
    ctx->pc = 0x7F275CECu;
    // 7F275CEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F275CF0:
    ctx->pc = 0x7F275CF0u;
    // 7F275CF0: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275CF4:
    ctx->pc = 0x7F275CF4u;
    // 7F275CF4: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275CF8:
    ctx->pc = 0x7F275CF8u;
    // 7F275CF8: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275CFC:
    ctx->pc = 0x7F275CFCu;
    ctx->downcount -= 16;
    // 7F275CFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F275D00:
    ctx->pc = 0x7F275D00u;
    // 7F275D00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275D04:
    ctx->pc = 0x7F275D04u;
    // 7F275D04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275D08:
    ctx->pc = 0x7F275D08u;
    // 7F275D08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F275D0C:
    ctx->pc = 0x7F275D0Cu;
    // 7F275D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275D10:
    ctx->pc = 0x7F275D10u;
    ctx->downcount -= 23;
    // 7F275D10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275D14:
    ctx->pc = 0x7F275D14u;
    // 7F275D14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275D18:
    ctx->pc = 0x7F275D18u;
    // 7F275D18: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275D1C:
    ctx->pc = 0x7F275D1Cu;
    // 7F275D1C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275D20:
    ctx->pc = 0x7F275D20u;
    // 7F275D20: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275D24:
    ctx->pc = 0x7F275D24u;
    // 7F275D24: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275D28:
    ctx->pc = 0x7F275D28u;
    // 7F275D28: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F275D2C:
    ctx->pc = 0x7F275D2Cu;
    // 7F275D2C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F275D30:
    ctx->pc = 0x7F275D30u;
    // 7F275D30: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F275D34:
    ctx->pc = 0x7F275D34u;
    // 7F275D34: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F275D38:
    ctx->pc = 0x7F275D38u;
    // 7F275D38: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F275D3C:
    ctx->pc = 0x7F275D3Cu;
    // 7F275D3C: li      r6, 112
    ctx->gpr[6] = (u32)(s32)(112);

label_7F275D40:
    ctx->pc = 0x7F275D40u;
    // 7F275D40: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F275D44u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F275D44:
    ctx->pc = 0x7F275D44u;
    ctx->downcount -= 2;
    // 7F275D44: or.   r31, r3, r3
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

label_7F275D48:
    ctx->pc = 0x7F275D48u;
    // 7F275D48: bc    12, 2, 0x7F275DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F275DB8;
        }
    }

label_7F275D4C:
    ctx->pc = 0x7F275D4Cu;
    ctx->downcount -= 5;
    // 7F275D4C: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F275D50:
    ctx->pc = 0x7F275D50u;
    // 7F275D50: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F275D54:
    ctx->pc = 0x7F275D54u;
    // 7F275D54: addi    r4, r4, 21192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21192);

label_7F275D58:
    ctx->pc = 0x7F275D58u;
    // 7F275D58: addi    r5, r5, 23364
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23364);

label_7F275D5C:
    ctx->pc = 0x7F275D5Cu;
    // 7F275D5C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F275D60u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F275D60:
    ctx->pc = 0x7F275D60u;
    ctx->downcount -= 16;
    // 7F275D60: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275D64:
    ctx->pc = 0x7F275D64u;
    // 7F275D64: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F275D68:
    ctx->pc = 0x7F275D68u;
    // 7F275D68: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F275D6C:
    ctx->pc = 0x7F275D6Cu;
    // 7F275D6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275D70:
    ctx->pc = 0x7F275D70u;
    // 7F275D70: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F275D74:
    ctx->pc = 0x7F275D74u;
    // 7F275D74: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F275D78:
    ctx->pc = 0x7F275D78u;
    // 7F275D78: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F275D7C:
    ctx->pc = 0x7F275D7Cu;
    // 7F275D7C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F275D80:
    ctx->pc = 0x7F275D80u;
    // 7F275D80: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275D84:
    ctx->pc = 0x7F275D84u;
    // 7F275D84: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F275D88:
    ctx->pc = 0x7F275D88u;
    // 7F275D88: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F275D8C:
    ctx->pc = 0x7F275D8Cu;
    // 7F275D8C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F275D90:
    ctx->pc = 0x7F275D90u;
    // 7F275D90: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F275D94:
    ctx->pc = 0x7F275D94u;
    // 7F275D94: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F275D98:
    ctx->pc = 0x7F275D98u;
    // 7F275D98: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275D9C:
    ctx->pc = 0x7F275D9Cu;
    // 7F275D9C: bl      0x7F275BE0
    {
            ctx->lr = 0x7F275DA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F275BE0u;
                return;
            }
            goto label_7F275BE0;
    }

label_7F275DA0:
    ctx->pc = 0x7F275DA0u;
    ctx->downcount -= 2;
    // 7F275DA0: cmpwi   r3, 0
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

label_7F275DA4:
    ctx->pc = 0x7F275DA4u;
    // 7F275DA4: bc    4, 0, 0x7F275DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275DB8;
        }
    }

label_7F275DA8:
    ctx->pc = 0x7F275DA8u;
    ctx->downcount -= 2;
    // 7F275DA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275DAC:
    ctx->pc = 0x7F275DACu;
    // 7F275DAC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F275DB0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F275DB0:
    ctx->pc = 0x7F275DB0u;
    ctx->downcount -= 2;
    // 7F275DB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F275DB4:
    ctx->pc = 0x7F275DB4u;
    // 7F275DB4: b       0x7F275DBC
    {
            goto label_7F275DBC;
    }

label_7F275DB8:
    ctx->pc = 0x7F275DB8u;
    ctx->downcount -= 1;
    // 7F275DB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275DBC:
    ctx->pc = 0x7F275DBCu;
    ctx->downcount -= 16;
    // 7F275DBC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F275DC0:
    ctx->pc = 0x7F275DC0u;
    // 7F275DC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275DC4:
    ctx->pc = 0x7F275DC4u;
    // 7F275DC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275DC8:
    ctx->pc = 0x7F275DC8u;
    // 7F275DC8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F275DCC:
    ctx->pc = 0x7F275DCCu;
    // 7F275DCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275DD0:
    ctx->pc = 0x7F275DD0u;
    ctx->downcount -= 36;
    // 7F275DD0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275DD4:
    ctx->pc = 0x7F275DD4u;
    // 7F275DD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275DD8:
    ctx->pc = 0x7F275DD8u;
    // 7F275DD8: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F275DDC:
    ctx->pc = 0x7F275DDCu;
    // 7F275DDC: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F275DE0:
    ctx->pc = 0x7F275DE0u;
    // 7F275DE0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275DE4:
    ctx->pc = 0x7F275DE4u;
    // 7F275DE4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F275DE8:
    ctx->pc = 0x7F275DE8u;
    // 7F275DE8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275DEC:
    ctx->pc = 0x7F275DECu;
    // 7F275DEC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275DF0:
    ctx->pc = 0x7F275DF0u;
    // 7F275DF0: addi    r4, r6, -1148
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-1148);

label_7F275DF4:
    ctx->pc = 0x7F275DF4u;
    // 7F275DF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F275DF8:
    ctx->pc = 0x7F275DF8u;
    // 7F275DF8: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F275DFC:
    ctx->pc = 0x7F275DFCu;
    // 7F275DFC: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F275E00:
    ctx->pc = 0x7F275E00u;
    // 7F275E00: lwz     r9, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F275E04:
    ctx->pc = 0x7F275E04u;
    // 7F275E04: lwz     r8, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F275E08:
    ctx->pc = 0x7F275E08u;
    // 7F275E08: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F275E0C:
    ctx->pc = 0x7F275E0Cu;
    // 7F275E0C: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F275E10:
    ctx->pc = 0x7F275E10u;
    // 7F275E10: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F275E14:
    ctx->pc = 0x7F275E14u;
    // 7F275E14: stwu     r11, -1052(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
        ctx->gpr[7] = ea;
    }

label_7F275E18:
    ctx->pc = 0x7F275E18u;
    // 7F275E18: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F275E1C:
    ctx->pc = 0x7F275E1Cu;
    // 7F275E1C: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F275E20:
    ctx->pc = 0x7F275E20u;
    // 7F275E20: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F275E24:
    ctx->pc = 0x7F275E24u;
    // 7F275E24: stw     r10, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F275E28:
    ctx->pc = 0x7F275E28u;
    // 7F275E28: stw     r9, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F275E2C:
    ctx->pc = 0x7F275E2Cu;
    // 7F275E2C: stw     r8, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F275E30:
    ctx->pc = 0x7F275E30u;
    // 7F275E30: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F275E34:
    loop_7F275E34(ctx);
    if (ctx->pc == 0x7F275E48u) goto label_7F275E48;
    return;
label_7F275E38:
    ctx->pc = 0x7F275E38u;
    // 7F275E38: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F275E3C:
    ctx->pc = 0x7F275E3Cu;
    // 7F275E3C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275E40:
    ctx->pc = 0x7F275E40u;
    // 7F275E40: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F275E44:
    // 7F275E44: bc    16, 0, 0x7F275E34
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F275E34u;
                return;
            }
            goto label_7F275E34;
        }
    }

label_7F275E48:
    ctx->pc = 0x7F275E48u;
    ctx->downcount -= 6;
    // 7F275E48: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F275E4C:
    ctx->pc = 0x7F275E4Cu;
    // 7F275E4C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F275E50:
    ctx->pc = 0x7F275E50u;
    // 7F275E50: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F275E54:
    ctx->pc = 0x7F275E54u;
    // 7F275E54: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F275E58:
    ctx->pc = 0x7F275E58u;
    // 7F275E58: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275E5C:
    ctx->pc = 0x7F275E5Cu;
    // 7F275E5C: bl      0x7F114508
    {
            ctx->lr = 0x7F275E60u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F275E60:
    ctx->pc = 0x7F275E60u;
    ctx->downcount -= 38;
    // 7F275E60: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F275E64:
    ctx->pc = 0x7F275E64u;
    // 7F275E64: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F275E64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275E68:
    ctx->pc = 0x7F275E68u;
    // 7F275E68: addi    r5, r3, -1052
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F275E6C:
    ctx->pc = 0x7F275E6Cu;
    // 7F275E6C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275E70:
    ctx->pc = 0x7F275E70u;
    // 7F275E70: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F275E74:
    ctx->pc = 0x7F275E74u;
    // 7F275E74: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275E78:
    ctx->pc = 0x7F275E78u;
    // 7F275E78: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F275E7C:
    ctx->pc = 0x7F275E7Cu;
    // 7F275E7C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275E7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275E80:
    ctx->pc = 0x7F275E80u;
    // 7F275E80: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275E84:
    ctx->pc = 0x7F275E84u;
    // 7F275E84: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F275E84u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F275E88:
    ctx->pc = 0x7F275E88u;
    // 7F275E88: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F275E8C:
    ctx->pc = 0x7F275E8Cu;
    // 7F275E8C: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275E90:
    ctx->pc = 0x7F275E90u;
    // 7F275E90: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275E90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275E94:
    ctx->pc = 0x7F275E94u;
    // 7F275E94: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F275E94u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275E98:
    ctx->pc = 0x7F275E98u;
    // 7F275E98: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275E9C:
    ctx->pc = 0x7F275E9Cu;
    // 7F275E9C: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F275E9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F275EA0:
    ctx->pc = 0x7F275EA0u;
    // 7F275EA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275EA4:
    ctx->pc = 0x7F275EA4u;
    // 7F275EA4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275EA4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F275EA8:
    ctx->pc = 0x7F275EA8u;
    // 7F275EA8: stfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F275EA8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F275EAC:
    ctx->pc = 0x7F275EACu;
    // 7F275EAC: lfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F275EACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275EB0:
    ctx->pc = 0x7F275EB0u;
    // 7F275EB0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F275EB0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F275EB4:
    ctx->pc = 0x7F275EB4u;
    // 7F275EB4: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F275EB4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275EB8:
    ctx->pc = 0x7F275EB8u;
    // 7F275EB8: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F275EBC:
    ctx->pc = 0x7F275EBCu;
    // 7F275EBC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F275EC0:
    ctx->pc = 0x7F275EC0u;
    // 7F275EC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F275EC4:
    ctx->pc = 0x7F275EC4u;
    // 7F275EC4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F275EC8:
    ctx->pc = 0x7F275EC8u;
    // 7F275EC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275ECC:
    ctx->pc = 0x7F275ECCu;
    ctx->downcount -= 1;
    // 7F275ECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F275ED0:
    ctx->pc = 0x7F275ED0u;
    ctx->downcount -= 25;
    // 7F275ED0: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F275ED4:
    ctx->pc = 0x7F275ED4u;
    // 7F275ED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F275ED8:
    ctx->pc = 0x7F275ED8u;
    // 7F275ED8: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F275EDC:
    ctx->pc = 0x7F275EDCu;
    // 7F275EDC: stfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275EDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F275EE0:
    ctx->pc = 0x7F275EE0u;
    // 7F275EE0: psq_st   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F275EE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F275EE0u);
        if (ctx->exception) return;
    }

label_7F275EE4:
    ctx->pc = 0x7F275EE4u;
    // 7F275EE4: stmw     r27, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F275EE8:
    ctx->pc = 0x7F275EE8u;
    // 7F275EE8: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F275EE8u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F275EEC:
    ctx->pc = 0x7F275EECu;
    // 7F275EEC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F275EF0:
    ctx->pc = 0x7F275EF0u;
    // 7F275EF0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F275EF4:
    ctx->pc = 0x7F275EF4u;
    // 7F275EF4: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F275EF8:
    ctx->pc = 0x7F275EF8u;
    // 7F275EF8: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F275EFC:
    ctx->pc = 0x7F275EFCu;
    // 7F275EFC: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F275F00:
    ctx->pc = 0x7F275F00u;
    // 7F275F00: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F275F04:
    ctx->pc = 0x7F275F04u;
    // 7F275F04: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275F08:
    ctx->pc = 0x7F275F08u;
    // 7F275F08: bl      0x7F3CC594
    {
            ctx->lr = 0x7F275F0Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F275F0C:
    ctx->pc = 0x7F275F0Cu;
    ctx->downcount -= 4;
    // 7F275F0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F275F10:
    ctx->pc = 0x7F275F10u;
    // 7F275F10: lfs     f0, 24992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275F10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275F14:
    ctx->pc = 0x7F275F14u;
    // 7F275F14: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F275F18:
    ctx->pc = 0x7F275F18u;
    // 7F275F18: bc    4, 2, 0x7F275F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F275F24;
        }
    }

label_7F275F1C:
    ctx->pc = 0x7F275F1Cu;
    ctx->downcount -= 2;
    // 7F275F1C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F275F20:
    ctx->pc = 0x7F275F20u;
    // 7F275F20: lfs     f1, 25000(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275F20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275F24:
    ctx->pc = 0x7F275F24u;
    ctx->downcount -= 34;
    // 7F275F24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F275F28:
    ctx->pc = 0x7F275F28u;
    // 7F275F28: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F275F2C:
    ctx->pc = 0x7F275F2Cu;
    // 7F275F2C: lfs     f2, 25004(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275F2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F275F30:
    ctx->pc = 0x7F275F30u;
    // 7F275F30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F275F34:
    ctx->pc = 0x7F275F34u;
    // 7F275F34: lfs     f3, 24996(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F275F34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24996);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F275F38:
    ctx->pc = 0x7F275F38u;
    // 7F275F38: fmuls   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F275F38u)) return;
    ppc_fmuls(ctx, 2, 2, 31);

label_7F275F3C:
    ctx->pc = 0x7F275F3Cu;
    // 7F275F3C: lfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F275F3Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275F40:
    ctx->pc = 0x7F275F40u;
    // 7F275F40: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F40u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F275F44:
    ctx->pc = 0x7F275F44u;
    // 7F275F44: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F44u)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F275F48:
    ctx->pc = 0x7F275F48u;
    // 7F275F48: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F48u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F275F4C:
    ctx->pc = 0x7F275F4Cu;
    // 7F275F4C: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275F4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275F50:
    ctx->pc = 0x7F275F50u;
    // 7F275F50: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F275F50u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275F54:
    ctx->pc = 0x7F275F54u;
    // 7F275F54: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F54u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F275F58:
    ctx->pc = 0x7F275F58u;
    // 7F275F58: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275F58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275F5C:
    ctx->pc = 0x7F275F5Cu;
    // 7F275F5C: lfs     f0, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F275F5Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275F60:
    ctx->pc = 0x7F275F60u;
    // 7F275F60: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F275F60u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F275F64:
    ctx->pc = 0x7F275F64u;
    // 7F275F64: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275F64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275F68:
    ctx->pc = 0x7F275F68u;
    // 7F275F68: bl      0x7F026F84
    {
            ctx->lr = 0x7F275F6Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F275F6C:
    ctx->pc = 0x7F275F6Cu;
    ctx->downcount -= 4;
    // 7F275F6C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F275F70:
    ctx->pc = 0x7F275F70u;
    // 7F275F70: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F275F74:
    ctx->pc = 0x7F275F74u;
    // 7F275F74: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_7F275F78:
    ctx->pc = 0x7F275F78u;
    // 7F275F78: bl      0x800261B4
    {
            ctx->lr = 0x7F275F7Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F275F7C:
    ctx->pc = 0x7F275F7Cu;
    ctx->downcount -= 7;
    // 7F275F7C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F275F80:
    ctx->pc = 0x7F275F80u;
    // 7F275F80: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F275F84:
    ctx->pc = 0x7F275F84u;
    // 7F275F84: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_7F275F88:
    ctx->pc = 0x7F275F88u;
    // 7F275F88: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F275F8C:
    ctx->pc = 0x7F275F8Cu;
    // 7F275F8C: li      r7, 8196
    ctx->gpr[7] = (u32)(s32)(8196);

label_7F275F90:
    ctx->pc = 0x7F275F90u;
    // 7F275F90: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F275F94:
    ctx->pc = 0x7F275F94u;
    // 7F275F94: bl      0x7F10B744
    {
            ctx->lr = 0x7F275F98u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F275F98:
    ctx->pc = 0x7F275F98u;
    ctx->downcount -= 2;
    // 7F275F98: cmpwi   r3, 1
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

label_7F275F9C:
    ctx->pc = 0x7F275F9Cu;
    // 7F275F9C: bc    4, 2, 0x7F276018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276018;
        }
    }

label_7F275FA0:
    ctx->pc = 0x7F275FA0u;
    ctx->downcount -= 2;
    // 7F275FA0: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F275FA4:
    ctx->pc = 0x7F275FA4u;
    // 7F275FA4: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F275FA8u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F275FA8:
    ctx->pc = 0x7F275FA8u;
    ctx->downcount -= 3;
    // 7F275FA8: addi    r3, r1, 84
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(84);

label_7F275FAC:
    ctx->pc = 0x7F275FACu;
    // 7F275FAC: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F275FB0:
    ctx->pc = 0x7F275FB0u;
    // 7F275FB0: bl      0x7F10B784
    {
            ctx->lr = 0x7F275FB4u;
            ctx->pc = 0x7F10B784u;
            return;
    }

label_7F275FB4:
    ctx->pc = 0x7F275FB4u;
    ctx->downcount -= 15;
    // 7F275FB4: lfs     f3, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F275FB8:
    ctx->pc = 0x7F275FB8u;
    // 7F275FB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F275FBC:
    ctx->pc = 0x7F275FBCu;
    // 7F275FBC: lfs     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F275FC0:
    ctx->pc = 0x7F275FC0u;
    // 7F275FC0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275FC4:
    ctx->pc = 0x7F275FC4u;
    // 7F275FC4: lfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F275FC8:
    ctx->pc = 0x7F275FC8u;
    // 7F275FC8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275FCC:
    ctx->pc = 0x7F275FCCu;
    // 7F275FCC: fsubs   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F275FCCu)) return;
    ppc_fsubs(ctx, 3, 3, 2);

label_7F275FD0:
    ctx->pc = 0x7F275FD0u;
    // 7F275FD0: lfs     f2, 24992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F275FD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F275FD4:
    ctx->pc = 0x7F275FD4u;
    // 7F275FD4: lfs     f0, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F275FD8:
    ctx->pc = 0x7F275FD8u;
    // 7F275FD8: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F275FDC:
    ctx->pc = 0x7F275FDCu;
    // 7F275FDC: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F275FE0:
    ctx->pc = 0x7F275FE0u;
    // 7F275FE0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F275FE0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F275FE4:
    ctx->pc = 0x7F275FE4u;
    // 7F275FE4: stfs     f3, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F275FE8:
    ctx->pc = 0x7F275FE8u;
    // 7F275FE8: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F275FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F275FEC:
    ctx->pc = 0x7F275FECu;
    // 7F275FEC: bl      0x7F3B3800
    {
            ctx->lr = 0x7F275FF0u;
            ctx->pc = 0x7F3B3800u;
            return;
    }

label_7F275FF0:
    ctx->pc = 0x7F275FF0u;
    ctx->downcount -= 4;
    // 7F275FF0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275FF4:
    ctx->pc = 0x7F275FF4u;
    // 7F275FF4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F275FF8:
    ctx->pc = 0x7F275FF8u;
    // 7F275FF8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F275FFC:
    ctx->pc = 0x7F275FFCu;
    // 7F275FFC: bl      0x7F115684
    {
            ctx->lr = 0x7F276000u;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F276000:
    ctx->pc = 0x7F276000u;
    ctx->downcount -= 4;
    // 7F276000: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F276004:
    ctx->pc = 0x7F276004u;
    // 7F276004: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F276008:
    ctx->pc = 0x7F276008u;
    // 7F276008: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27600C:
    ctx->pc = 0x7F27600Cu;
    // 7F27600C: bl      0x800261B4
    {
            ctx->lr = 0x7F276010u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F276010:
    ctx->pc = 0x7F276010u;
    ctx->downcount -= 2;
    // 7F276010: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F276014:
    ctx->pc = 0x7F276014u;
    // 7F276014: b       0x7F276078
    {
            goto label_7F276078;
    }

label_7F276018:
    ctx->pc = 0x7F276018u;
    ctx->downcount -= 2;
    // 7F276018: cmpwi   r3, 2
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

label_7F27601C:
    ctx->pc = 0x7F27601Cu;
    // 7F27601C: bc    4, 2, 0x7F276050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276050;
        }
    }

label_7F276020:
    ctx->pc = 0x7F276020u;
    ctx->downcount -= 2;
    // 7F276020: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F276024:
    ctx->pc = 0x7F276024u;
    // 7F276024: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F276028u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F276028:
    ctx->pc = 0x7F276028u;
    ctx->downcount -= 4;
    // 7F276028: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27602C:
    ctx->pc = 0x7F27602Cu;
    // 7F27602C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276030:
    ctx->pc = 0x7F276030u;
    // 7F276030: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276034:
    ctx->pc = 0x7F276034u;
    // 7F276034: bl      0x7F115684
    {
            ctx->lr = 0x7F276038u;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F276038:
    ctx->pc = 0x7F276038u;
    ctx->downcount -= 4;
    // 7F276038: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F27603C:
    ctx->pc = 0x7F27603Cu;
    // 7F27603C: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F276040:
    ctx->pc = 0x7F276040u;
    // 7F276040: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276044:
    ctx->pc = 0x7F276044u;
    // 7F276044: bl      0x800261B4
    {
            ctx->lr = 0x7F276048u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F276048:
    ctx->pc = 0x7F276048u;
    ctx->downcount -= 2;
    // 7F276048: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F27604C:
    ctx->pc = 0x7F27604Cu;
    // 7F27604C: b       0x7F276078
    {
            goto label_7F276078;
    }

label_7F276050:
    ctx->pc = 0x7F276050u;
    ctx->downcount -= 10;
    // 7F276050: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276054:
    ctx->pc = 0x7F276054u;
    // 7F276054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F276058:
    ctx->pc = 0x7F276058u;
    // 7F276058: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27605C:
    ctx->pc = 0x7F27605Cu;
    // 7F27605C: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276060:
    ctx->pc = 0x7F276060u;
    // 7F276060: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276064:
    ctx->pc = 0x7F276064u;
    // 7F276064: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276068:
    ctx->pc = 0x7F276068u;
    // 7F276068: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27606C:
    ctx->pc = 0x7F27606Cu;
    // 7F27606C: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276070:
    ctx->pc = 0x7F276070u;
    // 7F276070: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276074:
    ctx->pc = 0x7F276074u;
    // 7F276074: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276078:
    ctx->pc = 0x7F276078u;
    ctx->downcount -= 18;
    // 7F276078: psq_l   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F276078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F276078u);
        if (ctx->exception) return;
    }

label_7F27607C:
    ctx->pc = 0x7F27607Cu;
    // 7F27607C: lfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27607Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276080:
    ctx->pc = 0x7F276080u;
    // 7F276080: lmw     r27, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F276084:
    ctx->pc = 0x7F276084u;
    // 7F276084: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276088:
    ctx->pc = 0x7F276088u;
    // 7F276088: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27608C:
    ctx->pc = 0x7F27608Cu;
    // 7F27608C: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_7F276090:
    ctx->pc = 0x7F276090u;
    // 7F276090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276094:
    ctx->pc = 0x7F276094u;
    ctx->downcount -= 20;
    // 7F276094: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276098:
    ctx->pc = 0x7F276098u;
    // 7F276098: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27609C:
    ctx->pc = 0x7F27609Cu;
    // 7F27609C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2760A0:
    ctx->pc = 0x7F2760A0u;
    // 7F2760A0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2760A4:
    ctx->pc = 0x7F2760A4u;
    // 7F2760A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2760A8:
    ctx->pc = 0x7F2760A8u;
    // 7F2760A8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2760AC:
    ctx->pc = 0x7F2760ACu;
    // 7F2760AC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2760B0:
    ctx->pc = 0x7F2760B0u;
    // 7F2760B0: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2760B4:
    ctx->pc = 0x7F2760B4u;
    // 7F2760B4: cmplwi  r0, 0x0002
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

label_7F2760B8:
    ctx->pc = 0x7F2760B8u;
    // 7F2760B8: bc    4, 2, 0x7F276100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276100;
        }
    }

label_7F2760BC:
    ctx->pc = 0x7F2760BCu;
    ctx->downcount -= 2;
    // 7F2760BC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2760C0:
    ctx->pc = 0x7F2760C0u;
    // 7F2760C0: bl      0x7F0151A0
    {
            ctx->lr = 0x7F2760C4u;
            ctx->pc = 0x7F0151A0u;
            return;
    }

label_7F2760C4:
    ctx->pc = 0x7F2760C4u;
    ctx->downcount -= 9;
    // 7F2760C4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F2760C8:
    ctx->pc = 0x7F2760C8u;
    // 7F2760C8: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_7F2760CC:
    ctx->pc = 0x7F2760CCu;
    // 7F2760CC: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F2760D0:
    ctx->pc = 0x7F2760D0u;
    // 7F2760D0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2760D4:
    ctx->pc = 0x7F2760D4u;
    // 7F2760D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2760D8:
    ctx->pc = 0x7F2760D8u;
    // 7F2760D8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2760DC:
    ctx->pc = 0x7F2760DCu;
    // 7F2760DC: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_7F2760E0:
    ctx->pc = 0x7F2760E0u;
    // 7F2760E0: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F2760E4:
    ctx->pc = 0x7F2760E4u;
    // 7F2760E4: bl      0x7F10B744
    {
            ctx->lr = 0x7F2760E8u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F2760E8:
    ctx->pc = 0x7F2760E8u;
    ctx->downcount -= 2;
    // 7F2760E8: cmpwi   r3, 0
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

label_7F2760EC:
    ctx->pc = 0x7F2760ECu;
    // 7F2760EC: bc    12, 2, 0x7F276100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276100;
        }
    }

label_7F2760F0:
    ctx->pc = 0x7F2760F0u;
    ctx->downcount -= 3;
    // 7F2760F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2760F4:
    ctx->pc = 0x7F2760F4u;
    // 7F2760F4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2760F8:
    ctx->pc = 0x7F2760F8u;
    // 7F2760F8: bl      0x7F01521C
    {
            ctx->lr = 0x7F2760FCu;
            ctx->pc = 0x7F01521Cu;
            return;
    }

label_7F2760FC:
    ctx->pc = 0x7F2760FCu;
    ctx->downcount -= 1;
    // 7F2760FC: b       0x7F276158
    {
            goto label_7F276158;
    }

label_7F276100:
    ctx->pc = 0x7F276100u;
    ctx->downcount -= 3;
    // 7F276100: lhz     r0, 756(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276104:
    ctx->pc = 0x7F276104u;
    // 7F276104: rlwinm. r3, r0, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276108:
    ctx->pc = 0x7F276108u;
    // 7F276108: bc    12, 2, 0x7F276114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276114;
        }
    }

label_7F27610C:
    ctx->pc = 0x7F27610Cu;
    ctx->downcount -= 2;
    // 7F27610C: rlwinm. r0, r0, 0, 16, 16
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

label_7F276110:
    ctx->pc = 0x7F276110u;
    // 7F276110: bc    4, 2, 0x7F276150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276150;
        }
    }

label_7F276114:
    ctx->pc = 0x7F276114u;
    ctx->downcount -= 2;
    // 7F276114: cmpwi   r3, 0
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

label_7F276118:
    ctx->pc = 0x7F276118u;
    // 7F276118: bc    12, 2, 0x7F276150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276150;
        }
    }

label_7F27611C:
    ctx->pc = 0x7F27611Cu;
    ctx->downcount -= 13;
    // 7F27611C: lwz     r5, 752(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(752);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276120:
    ctx->pc = 0x7F276120u;
    // 7F276120: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276124:
    ctx->pc = 0x7F276124u;
    // 7F276124: lwz     r4, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276128:
    ctx->pc = 0x7F276128u;
    // 7F276128: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27612C:
    ctx->pc = 0x7F27612Cu;
    // 7F27612C: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F276130:
    ctx->pc = 0x7F276130u;
    // 7F276130: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F276134:
    ctx->pc = 0x7F276134u;
    // 7F276134: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276138:
    ctx->pc = 0x7F276138u;
    // 7F276138: stw     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27613C:
    ctx->pc = 0x7F27613Cu;
    // 7F27613C: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276140:
    ctx->pc = 0x7F276140u;
    // 7F276140: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276144:
    ctx->pc = 0x7F276144u;
    // 7F276144: lwz     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276148:
    ctx->pc = 0x7F276148u;
    // 7F276148: stw     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27614C:
    ctx->pc = 0x7F27614Cu;
    // 7F27614C: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276150:
    ctx->pc = 0x7F276150u;
    ctx->downcount -= 2;
    // 7F276150: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276154:
    ctx->pc = 0x7F276154u;
    // 7F276154: bl      0x7F3C8210
    {
            ctx->lr = 0x7F276158u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F276158:
    ctx->pc = 0x7F276158u;
    ctx->downcount -= 16;
    // 7F276158: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27615C:
    ctx->pc = 0x7F27615Cu;
    // 7F27615C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276160:
    ctx->pc = 0x7F276160u;
    // 7F276160: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F276164:
    ctx->pc = 0x7F276164u;
    // 7F276164: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F276168:
    ctx->pc = 0x7F276168u;
    // 7F276168: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27616C:
    ctx->pc = 0x7F27616Cu;
    ctx->downcount -= 18;
    // 7F27616C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276170:
    ctx->pc = 0x7F276170u;
    // 7F276170: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F276174:
    ctx->pc = 0x7F276174u;
    // 7F276174: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276178:
    ctx->pc = 0x7F276178u;
    // 7F276178: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27617C:
    ctx->pc = 0x7F27617Cu;
    // 7F27617C: lhz     r0, 756(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276180:
    ctx->pc = 0x7F276180u;
    // 7F276180: lwz     r7, 860(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(860);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276184:
    ctx->pc = 0x7F276184u;
    // 7F276184: rlwinm. r0, r0, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276188:
    ctx->pc = 0x7F276188u;
    // 7F276188: bc    12, 2, 0x7F276220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276220;
        }
    }

label_7F27618C:
    ctx->pc = 0x7F27618Cu;
    ctx->downcount -= 2;
    // 7F27618C: cmpwi   r7, 0
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

label_7F276190:
    ctx->pc = 0x7F276190u;
    // 7F276190: bc    4, 2, 0x7F276198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276198;
        }
    }

label_7F276194:
    ctx->pc = 0x7F276194u;
    ctx->downcount -= 1;
    // 7F276194: b       0x7F276220
    {
            goto label_7F276220;
    }

label_7F276198:
    ctx->pc = 0x7F276198u;
    ctx->downcount -= 6;
    // 7F276198: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F27619C:
    ctx->pc = 0x7F27619Cu;
    // 7F27619C: addi    r31, r3, 776
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(776);

label_7F2761A0:
    ctx->pc = 0x7F2761A0u;
    // 7F2761A0: addi    r6, r1, 4
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(4);

label_7F2761A4:
    ctx->pc = 0x7F2761A4u;
    // 7F2761A4: addi    r5, r3, 684
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(684);

label_7F2761A8:
    ctx->pc = 0x7F2761A8u;
    // 7F2761A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2761AC:
    loop_7F2761AC(ctx);
    if (ctx->pc == 0x7F2761C0u) goto label_7F2761C0;
    return;
label_7F2761B0:
    ctx->pc = 0x7F2761B0u;
    // 7F2761B0: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F2761B4:
    ctx->pc = 0x7F2761B4u;
    // 7F2761B4: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2761B8:
    ctx->pc = 0x7F2761B8u;
    // 7F2761B8: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F2761BC:
    // 7F2761BC: bc    16, 0, 0x7F2761AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2761ACu;
                return;
            }
            goto label_7F2761AC;
        }
    }

label_7F2761C0:
    ctx->pc = 0x7F2761C0u;
    ctx->downcount -= 8;
    // 7F2761C0: lfs     f0, 656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2761C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2761C4:
    ctx->pc = 0x7F2761C4u;
    // 7F2761C4: cmpwi   r7, 2
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2761C8:
    ctx->pc = 0x7F2761C8u;
    // 7F2761C8: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2761C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2761CC:
    ctx->pc = 0x7F2761CCu;
    // 7F2761CC: lfs     f0, 660(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2761CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2761D0:
    ctx->pc = 0x7F2761D0u;
    // 7F2761D0: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2761D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2761D4:
    ctx->pc = 0x7F2761D4u;
    // 7F2761D4: lfs     f0, 664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2761D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2761D8:
    ctx->pc = 0x7F2761D8u;
    // 7F2761D8: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2761D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2761DC:
    ctx->pc = 0x7F2761DCu;
    // 7F2761DC: bc    4, 2, 0x7F2761F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2761F8;
        }
    }

label_7F2761E0:
    ctx->pc = 0x7F2761E0u;
    ctx->downcount -= 3;
    // 7F2761E0: lwz     r0, 856(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2761E4:
    ctx->pc = 0x7F2761E4u;
    // 7F2761E4: rlwinm. r0, r0, 0, 19, 19
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

label_7F2761E8:
    ctx->pc = 0x7F2761E8u;
    // 7F2761E8: bc    4, 2, 0x7F276220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276220;
        }
    }

label_7F2761EC:
    ctx->pc = 0x7F2761ECu;
    ctx->downcount -= 3;
    // 7F2761EC: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2761F0:
    ctx->pc = 0x7F2761F0u;
    // 7F2761F0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2761F4:
    ctx->pc = 0x7F2761F4u;
    // 7F2761F4: b       0x7F276208
    {
            goto label_7F276208;
    }

label_7F2761F8:
    ctx->pc = 0x7F2761F8u;
    ctx->downcount -= 3;
    // 7F2761F8: lwz     r0, 856(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2761FC:
    ctx->pc = 0x7F2761FCu;
    // 7F2761FC: rlwinm. r0, r0, 0, 19, 19
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

label_7F276200:
    ctx->pc = 0x7F276200u;
    // 7F276200: bc    4, 2, 0x7F276220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276220;
        }
    }

label_7F276204:
    ctx->pc = 0x7F276204u;
    ctx->downcount -= 1;
    // 7F276204: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F276208:
    ctx->pc = 0x7F276208u;
    ctx->downcount -= 2;
    // 7F276208: lwz     r3, 856(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27620C:
    ctx->pc = 0x7F27620Cu;
    // 7F27620C: bl      0x7F0910B8
    {
            ctx->lr = 0x7F276210u;
            ctx->pc = 0x7F0910B8u;
            return;
    }

label_7F276210:
    ctx->pc = 0x7F276210u;
    ctx->downcount -= 4;
    // 7F276210: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276214:
    ctx->pc = 0x7F276214u;
    // 7F276214: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276218:
    ctx->pc = 0x7F276218u;
    // 7F276218: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27621C:
    ctx->pc = 0x7F27621Cu;
    // 7F27621C: bl      0x7F0183BC
    {
            ctx->lr = 0x7F276220u;
            ctx->pc = 0x7F0183BCu;
            return;
    }

label_7F276220:
    ctx->pc = 0x7F276220u;
    ctx->downcount -= 16;
    // 7F276220: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F276224:
    ctx->pc = 0x7F276224u;
    // 7F276224: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276228:
    ctx->pc = 0x7F276228u;
    // 7F276228: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27622C:
    ctx->pc = 0x7F27622Cu;
    // 7F27622C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F276230:
    ctx->pc = 0x7F276230u;
    // 7F276230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276234:
    ctx->pc = 0x7F276234u;
    ctx->downcount -= 9;
    // 7F276234: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276238:
    ctx->pc = 0x7F276238u;
    // 7F276238: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27623C:
    ctx->pc = 0x7F27623Cu;
    // 7F27623C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276240:
    ctx->pc = 0x7F276240u;
    // 7F276240: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F276244:
    ctx->pc = 0x7F276244u;
    // 7F276244: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276248:
    ctx->pc = 0x7F276248u;
    // 7F276248: lhz     r0, 756(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27624C:
    ctx->pc = 0x7F27624Cu;
    // 7F27624C: lwz     r6, 860(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(860);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F276250:
    ctx->pc = 0x7F276250u;
    // 7F276250: rlwinm. r0, r0, 0, 30, 30
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

label_7F276254:
    ctx->pc = 0x7F276254u;
    // 7F276254: bc    12, 2, 0x7F2763D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2763D0;
        }
    }

label_7F276258:
    ctx->pc = 0x7F276258u;
    ctx->downcount -= 2;
    // 7F276258: cmpwi   r6, 0
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

label_7F27625C:
    ctx->pc = 0x7F27625Cu;
    // 7F27625C: bc    4, 2, 0x7F276264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276264;
        }
    }

label_7F276260:
    ctx->pc = 0x7F276260u;
    ctx->downcount -= 1;
    // 7F276260: b       0x7F2763D0
    {
            goto label_7F2763D0;
    }

label_7F276264:
    ctx->pc = 0x7F276264u;
    ctx->downcount -= 5;
    // 7F276264: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F276268:
    ctx->pc = 0x7F276268u;
    // 7F276268: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_7F27626C:
    ctx->pc = 0x7F27626Cu;
    // 7F27626C: addi    r4, r31, 684
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(684);

label_7F276270:
    ctx->pc = 0x7F276270u;
    // 7F276270: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F276274:
    loop_7F276274(ctx);
    if (ctx->pc == 0x7F276288u) goto label_7F276288;
    return;
label_7F276278:
    ctx->pc = 0x7F276278u;
    // 7F276278: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F27627C:
    ctx->pc = 0x7F27627Cu;
    // 7F27627C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276280:
    ctx->pc = 0x7F276280u;
    // 7F276280: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F276284:
    // 7F276284: bc    16, 0, 0x7F276274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276274u;
                return;
            }
            goto label_7F276274;
        }
    }

label_7F276288:
    ctx->pc = 0x7F276288u;
    ctx->downcount -= 11;
    // 7F276288: lfs     f0, 656(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276288u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27628C:
    ctx->pc = 0x7F27628Cu;
    // 7F27628C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F276290:
    ctx->pc = 0x7F276290u;
    // 7F276290: cmpwi   r6, 2
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F276294:
    ctx->pc = 0x7F276294u;
    // 7F276294: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F276298:
    ctx->pc = 0x7F276298u;
    // 7F276298: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27629C:
    ctx->pc = 0x7F27629Cu;
    // 7F27629C: lfs     f0, 660(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27629Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2762A0:
    ctx->pc = 0x7F2762A0u;
    // 7F2762A0: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2762A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2762A4:
    ctx->pc = 0x7F2762A4u;
    // 7F2762A4: lfs     f0, 664(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2762A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2762A8:
    ctx->pc = 0x7F2762A8u;
    // 7F2762A8: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2762A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2762AC:
    ctx->pc = 0x7F2762ACu;
    // 7F2762AC: stw     r0, -7616(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2762B0:
    ctx->pc = 0x7F2762B0u;
    // 7F2762B0: bc    4, 2, 0x7F276310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276310;
        }
    }

label_7F2762B4:
    ctx->pc = 0x7F2762B4u;
    ctx->downcount -= 3;
    // 7F2762B4: lwz     r3, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2762B8:
    ctx->pc = 0x7F2762B8u;
    // 7F2762B8: rlwinm. r0, r3, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2762BC:
    ctx->pc = 0x7F2762BCu;
    // 7F2762BC: bc    4, 2, 0x7F2763D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2763D0;
        }
    }

label_7F2762C0:
    ctx->pc = 0x7F2762C0u;
    ctx->downcount -= 2;
    // 7F2762C0: rlwinm. r0, r3, 0, 23, 23
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

label_7F2762C4:
    ctx->pc = 0x7F2762C4u;
    // 7F2762C4: bc    12, 2, 0x7F2762E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2762E0;
        }
    }

label_7F2762C8:
    ctx->pc = 0x7F2762C8u;
    ctx->downcount -= 1;
    // 7F2762C8: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F2762CCu;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F2762CC:
    ctx->pc = 0x7F2762CCu;
    ctx->downcount -= 2;
    // 7F2762CC: cmpwi   r3, 0
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

label_7F2762D0:
    ctx->pc = 0x7F2762D0u;
    // 7F2762D0: bc    12, 2, 0x7F2762E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2762E0;
        }
    }

label_7F2762D4:
    ctx->pc = 0x7F2762D4u;
    ctx->downcount -= 3;
    // 7F2762D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2762D8:
    ctx->pc = 0x7F2762D8u;
    // 7F2762D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2762DC:
    ctx->pc = 0x7F2762DCu;
    // 7F2762DC: stw     r0, -7616(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2762E0:
    ctx->pc = 0x7F2762E0u;
    ctx->downcount -= 9;
    // 7F2762E0: lfs     f0, 788(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2762E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2762E4:
    ctx->pc = 0x7F2762E4u;
    // 7F2762E4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2762E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2762E8:
    ctx->pc = 0x7F2762E8u;
    // 7F2762E8: lfs     f1, 820(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2762E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2762EC:
    ctx->pc = 0x7F2762ECu;
    // 7F2762EC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2762ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2762F0:
    ctx->pc = 0x7F2762F0u;
    // 7F2762F0: lfs     f0, 804(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2762F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2762F4:
    ctx->pc = 0x7F2762F4u;
    // 7F2762F4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2762F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2762F8:
    ctx->pc = 0x7F2762F8u;
    // 7F2762F8: lwz     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2762FC:
    ctx->pc = 0x7F2762FCu;
    // 7F2762FC: rlwinm. r0, r0, 0, 7, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x01000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276300:
    ctx->pc = 0x7F276300u;
    // 7F276300: bc    12, 2, 0x7F276368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276368;
        }
    }

label_7F276304:
    ctx->pc = 0x7F276304u;
    ctx->downcount -= 3;
    // 7F276304: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276304u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276308:
    ctx->pc = 0x7F276308u;
    // 7F276308: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27630C:
    ctx->pc = 0x7F27630Cu;
    // 7F27630C: b       0x7F276368
    {
            goto label_7F276368;
    }

label_7F276310:
    ctx->pc = 0x7F276310u;
    ctx->downcount -= 3;
    // 7F276310: lwz     r3, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276314:
    ctx->pc = 0x7F276314u;
    // 7F276314: rlwinm. r0, r3, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276318:
    ctx->pc = 0x7F276318u;
    // 7F276318: bc    4, 2, 0x7F2763D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2763D0;
        }
    }

label_7F27631C:
    ctx->pc = 0x7F27631Cu;
    ctx->downcount -= 2;
    // 7F27631C: rlwinm. r0, r3, 0, 23, 23
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

label_7F276320:
    ctx->pc = 0x7F276320u;
    // 7F276320: bc    12, 2, 0x7F27633C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27633C;
        }
    }

label_7F276324:
    ctx->pc = 0x7F276324u;
    ctx->downcount -= 1;
    // 7F276324: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F276328u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F276328:
    ctx->pc = 0x7F276328u;
    ctx->downcount -= 2;
    // 7F276328: cmpwi   r3, 0
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

label_7F27632C:
    ctx->pc = 0x7F27632Cu;
    // 7F27632C: bc    12, 2, 0x7F27633C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27633C;
        }
    }

label_7F276330:
    ctx->pc = 0x7F276330u;
    ctx->downcount -= 3;
    // 7F276330: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F276334:
    ctx->pc = 0x7F276334u;
    // 7F276334: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F276338:
    ctx->pc = 0x7F276338u;
    // 7F276338: stw     r0, -7616(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27633C:
    ctx->pc = 0x7F27633Cu;
    ctx->downcount -= 11;
    // 7F27633C: lfs     f2, 796(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27633Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(796);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276340:
    ctx->pc = 0x7F276340u;
    // 7F276340: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276344:
    ctx->pc = 0x7F276344u;
    // 7F276344: lfs     f1, 780(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276344u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F276348:
    ctx->pc = 0x7F276348u;
    // 7F276348: lfs     f0, 25008(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276348u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27634C:
    ctx->pc = 0x7F27634Cu;
    // 7F27634C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27634Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F276350:
    ctx->pc = 0x7F276350u;
    // 7F276350: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276354:
    ctx->pc = 0x7F276354u;
    // 7F276354: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F276358:
    ctx->pc = 0x7F276358u;
    // 7F276358: lfs     f1, 776(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276358u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27635C:
    ctx->pc = 0x7F27635Cu;
    // 7F27635C: lfs     f0, 792(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27635Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F276360:
    ctx->pc = 0x7F276360u;
    // 7F276360: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F276360u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F276364:
    ctx->pc = 0x7F276364u;
    // 7F276364: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276368:
    ctx->pc = 0x7F276368u;
    ctx->downcount -= 3;
    // 7F276368: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27636C:
    ctx->pc = 0x7F27636Cu;
    // 7F27636C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276370:
    ctx->pc = 0x7F276370u;
    // 7F276370: bl      0x7F114F50
    {
            ctx->lr = 0x7F276374u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F276374:
    ctx->pc = 0x7F276374u;
    ctx->downcount -= 2;
    // 7F276374: lwz     r3, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276378:
    ctx->pc = 0x7F276378u;
    // 7F276378: bl      0x7F0910B8
    {
            ctx->lr = 0x7F27637Cu;
            ctx->pc = 0x7F0910B8u;
            return;
    }

label_7F27637C:
    ctx->pc = 0x7F27637Cu;
    ctx->downcount -= 3;
    // 7F27637C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F276380:
    ctx->pc = 0x7F276380u;
    // 7F276380: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276384:
    ctx->pc = 0x7F276384u;
    // 7F276384: bl      0x7F018110
    {
            ctx->lr = 0x7F276388u;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F276388:
    ctx->pc = 0x7F276388u;
    ctx->downcount -= 6;
    // 7F276388: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27638C:
    ctx->pc = 0x7F27638Cu;
    // 7F27638C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F276390:
    ctx->pc = 0x7F276390u;
    // 7F276390: stw     r0, -7616(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276394:
    ctx->pc = 0x7F276394u;
    // 7F276394: lhz     r3, 756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(756);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F276398:
    ctx->pc = 0x7F276398u;
    // 7F276398: rlwinm. r0, r3, 0, 17, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00006000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27639C:
    ctx->pc = 0x7F27639Cu;
    // 7F27639C: bc    12, 2, 0x7F2763D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2763D0;
        }
    }

label_7F2763A0:
    ctx->pc = 0x7F2763A0u;
    ctx->downcount -= 3;
    // 7F2763A0: rlwinm. r0, r3, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2763A4:
    ctx->pc = 0x7F2763A4u;
    // 7F2763A4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2763A8:
    ctx->pc = 0x7F2763A8u;
    // 7F2763A8: bc    12, 2, 0x7F2763B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2763B0;
        }
    }

label_7F2763AC:
    ctx->pc = 0x7F2763ACu;
    ctx->downcount -= 1;
    // 7F2763AC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2763B0:
    ctx->pc = 0x7F2763B0u;
    ctx->downcount -= 4;
    // 7F2763B0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2763B4:
    ctx->pc = 0x7F2763B4u;
    // 7F2763B4: lwz     r0, 17712(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2763B8:
    ctx->pc = 0x7F2763B8u;
    // 7F2763B8: cmpwi   r0, 9
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

label_7F2763BC:
    ctx->pc = 0x7F2763BCu;
    // 7F2763BC: bc    12, 0, 0x7F2763C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2763C4;
        }
    }

label_7F2763C0:
    ctx->pc = 0x7F2763C0u;
    ctx->downcount -= 1;
    // 7F2763C0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2763C4:
    ctx->pc = 0x7F2763C4u;
    ctx->downcount -= 3;
    // 7F2763C4: lwz     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2763C8:
    ctx->pc = 0x7F2763C8u;
    // 7F2763C8: addi    r4, r31, 656
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(656);

label_7F2763CC:
    ctx->pc = 0x7F2763CCu;
    // 7F2763CC: bl      0x7F022090
    {
            ctx->lr = 0x7F2763D0u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F2763D0:
    ctx->pc = 0x7F2763D0u;
    ctx->downcount -= 6;
    // 7F2763D0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2763D4:
    ctx->pc = 0x7F2763D4u;
    // 7F2763D4: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2763D8:
    ctx->pc = 0x7F2763D8u;
    // 7F2763D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2763DC:
    ctx->pc = 0x7F2763DCu;
    // 7F2763DC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2763E0:
    ctx->pc = 0x7F2763E0u;
    // 7F2763E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2763E4:
    ctx->pc = 0x7F2763E4u;
    ctx->downcount -= 20;
    // 7F2763E4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2763E8:
    ctx->pc = 0x7F2763E8u;
    // 7F2763E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2763EC:
    ctx->pc = 0x7F2763ECu;
    // 7F2763EC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2763F0:
    ctx->pc = 0x7F2763F0u;
    // 7F2763F0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2763F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2763F4:
    ctx->pc = 0x7F2763F4u;
    // 7F2763F4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2763F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2763F4u);
        if (ctx->exception) return;
    }

label_7F2763F8:
    ctx->pc = 0x7F2763F8u;
    // 7F2763F8: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2763FC:
    ctx->pc = 0x7F2763FCu;
    // 7F2763FC: lhz     r0, 762(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(762);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276400:
    ctx->pc = 0x7F276400u;
    // 7F276400: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276404:
    ctx->pc = 0x7F276404u;
    // 7F276404: rlwinm. r0, r0, 0, 31, 31
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

label_7F276408:
    ctx->pc = 0x7F276408u;
    // 7F276408: bc    12, 2, 0x7F27644C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27644C;
        }
    }

label_7F27640C:
    ctx->pc = 0x7F27640Cu;
    ctx->downcount -= 4;
    // 7F27640C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F276410:
    ctx->pc = 0x7F276410u;
    // 7F276410: addi    r3, r3, 18308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F276414:
    ctx->pc = 0x7F276414u;
    // 7F276414: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276418:
    ctx->pc = 0x7F276418u;
    // 7F276418: bl      0x7F276864
    {
            ctx->lr = 0x7F27641Cu;
            goto label_7F276864;
    }

label_7F27641C:
    ctx->pc = 0x7F27641Cu;
    ctx->downcount -= 2;
    // 7F27641C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276420:
    ctx->pc = 0x7F276420u;
    // 7F276420: bl      0x7F276234
    {
            ctx->lr = 0x7F276424u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276234u;
                return;
            }
            goto label_7F276234;
    }

label_7F276424:
    ctx->pc = 0x7F276424u;
    ctx->downcount -= 2;
    // 7F276424: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276428:
    ctx->pc = 0x7F276428u;
    // 7F276428: bl      0x7F27616C
    {
            ctx->lr = 0x7F27642Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27616Cu;
                return;
            }
            goto label_7F27616C;
    }

label_7F27642C:
    ctx->pc = 0x7F27642Cu;
    ctx->downcount -= 5;
    // 7F27642C: lwz     r5, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276430:
    ctx->pc = 0x7F276430u;
    // 7F276430: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_7F276434:
    ctx->pc = 0x7F276434u;
    // 7F276434: addi    r4, r31, 432
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(432);

label_7F276438:
    ctx->pc = 0x7F276438u;
    // 7F276438: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F27643C:
    ctx->pc = 0x7F27643Cu;
    // 7F27643C: bl      0x7F0171F4
    {
            ctx->lr = 0x7F276440u;
            ctx->pc = 0x7F0171F4u;
            return;
    }

label_7F276440:
    ctx->pc = 0x7F276440u;
    ctx->downcount -= 2;
    // 7F276440: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276444:
    ctx->pc = 0x7F276444u;
    // 7F276444: bl      0x7F3C8210
    {
            ctx->lr = 0x7F276448u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F276448:
    ctx->pc = 0x7F276448u;
    ctx->downcount -= 1;
    // 7F276448: b       0x7F276828
    {
            goto label_7F276828;
    }

label_7F27644C:
    ctx->pc = 0x7F27644Cu;
    ctx->downcount -= 10;
    // 7F27644C: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276450:
    ctx->pc = 0x7F276450u;
    // 7F276450: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F276454:
    ctx->pc = 0x7F276454u;
    // 7F276454: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276458:
    ctx->pc = 0x7F276458u;
    // 7F276458: stw     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27645C:
    ctx->pc = 0x7F27645Cu;
    // 7F27645C: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276460:
    ctx->pc = 0x7F276460u;
    // 7F276460: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276464:
    ctx->pc = 0x7F276464u;
    // 7F276464: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276468:
    ctx->pc = 0x7F276468u;
    // 7F276468: stw     r4, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27646C:
    ctx->pc = 0x7F27646Cu;
    // 7F27646C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276470:
    ctx->pc = 0x7F276470u;
    // 7F276470: bl      0x7F023170
    {
            ctx->lr = 0x7F276474u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F276474:
    ctx->pc = 0x7F276474u;
    ctx->downcount -= 13;
    // 7F276474: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276478:
    ctx->pc = 0x7F276478u;
    // 7F276478: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27647C:
    ctx->pc = 0x7F27647Cu;
    // 7F27647C: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276480:
    ctx->pc = 0x7F276480u;
    // 7F276480: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276484:
    ctx->pc = 0x7F276484u;
    // 7F276484: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276488:
    ctx->pc = 0x7F276488u;
    // 7F276488: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27648C:
    ctx->pc = 0x7F27648Cu;
    // 7F27648C: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276490:
    ctx->pc = 0x7F276490u;
    // 7F276490: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276494:
    ctx->pc = 0x7F276494u;
    // 7F276494: lhz     r3, 758(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(758);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F276498:
    ctx->pc = 0x7F276498u;
    // 7F276498: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27649C:
    ctx->pc = 0x7F27649Cu;
    // 7F27649C: rlwinm. r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2764A0:
    ctx->pc = 0x7F2764A0u;
    // 7F2764A0: sth     r3, 758(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(758);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2764A4:
    ctx->pc = 0x7F2764A4u;
    // 7F2764A4: bc    4, 2, 0x7F27656C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27656C;
        }
    }

label_7F2764A8:
    ctx->pc = 0x7F2764A8u;
    ctx->downcount -= 3;
    // 7F2764A8: lbz     r0, 187(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2764AC:
    ctx->pc = 0x7F2764ACu;
    // 7F2764AC: extsb. r0, r0
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

label_7F2764B0:
    ctx->pc = 0x7F2764B0u;
    // 7F2764B0: bc    4, 1, 0x7F27653C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27653C;
        }
    }

label_7F2764B4:
    ctx->pc = 0x7F2764B4u;
    ctx->downcount -= 2;
    // 7F2764B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2764B8:
    ctx->pc = 0x7F2764B8u;
    // 7F2764B8: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F2764BCu;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F2764BC:
    ctx->pc = 0x7F2764BCu;
    ctx->downcount -= 3;
    // 7F2764BC: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2764C0:
    ctx->pc = 0x7F2764C0u;
    // 7F2764C0: addi    r4, r31, 656
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(656);

label_7F2764C4:
    ctx->pc = 0x7F2764C4u;
    // 7F2764C4: bl      0x7F3CC608
    {
            ctx->lr = 0x7F2764C8u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F2764C8:
    ctx->pc = 0x7F2764C8u;
    ctx->downcount -= 4;
    // 7F2764C8: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2764C8u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2764CC:
    ctx->pc = 0x7F2764CCu;
    // 7F2764CC: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2764D0:
    ctx->pc = 0x7F2764D0u;
    // 7F2764D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2764D4:
    ctx->pc = 0x7F2764D4u;
    // 7F2764D4: bl      0x7F3CC608
    {
            ctx->lr = 0x7F2764D8u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F2764D8:
    ctx->pc = 0x7F2764D8u;
    ctx->downcount -= 2;
    // 7F2764D8: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2764D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_7F2764DC:
    ctx->pc = 0x7F2764DCu;
    // 7F2764DC: bc    4, 0, 0x7F276518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276518;
        }
    }

label_7F2764E0:
    ctx->pc = 0x7F2764E0u;
    ctx->downcount -= 11;
    // 7F2764E0: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2764E4:
    ctx->pc = 0x7F2764E4u;
    // 7F2764E4: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_7F2764E8:
    ctx->pc = 0x7F2764E8u;
    // 7F2764E8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2764EC:
    ctx->pc = 0x7F2764ECu;
    // 7F2764EC: addi    r4, r31, 856
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(856);

label_7F2764F0:
    ctx->pc = 0x7F2764F0u;
    // 7F2764F0: stw     r5, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2764F4:
    ctx->pc = 0x7F2764F4u;
    // 7F2764F4: stw     r0, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2764F8:
    ctx->pc = 0x7F2764F8u;
    // 7F2764F8: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2764FC:
    ctx->pc = 0x7F2764FCu;
    // 7F2764FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276500:
    ctx->pc = 0x7F276500u;
    // 7F276500: stw     r5, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F276504:
    ctx->pc = 0x7F276504u;
    // 7F276504: stw     r0, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276508:
    ctx->pc = 0x7F276508u;
    // 7F276508: bl      0x7F10B784
    {
            ctx->lr = 0x7F27650Cu;
            ctx->pc = 0x7F10B784u;
            return;
    }

label_7F27650C:
    ctx->pc = 0x7F27650Cu;
    ctx->downcount -= 1;
    // 7F27650C: bl      0x7F10B7E4
    {
            ctx->lr = 0x7F276510u;
            ctx->pc = 0x7F10B7E4u;
            return;
    }

label_7F276510:
    ctx->pc = 0x7F276510u;
    ctx->downcount -= 2;
    // 7F276510: stw     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276514:
    ctx->pc = 0x7F276514u;
    // 7F276514: b       0x7F27655C
    {
            goto label_7F27655C;
    }

label_7F276518:
    ctx->pc = 0x7F276518u;
    ctx->downcount -= 9;
    // 7F276518: lwz     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27651C:
    ctx->pc = 0x7F27651Cu;
    // 7F27651C: lwz     r0, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276520:
    ctx->pc = 0x7F276520u;
    // 7F276520: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276524:
    ctx->pc = 0x7F276524u;
    // 7F276524: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276528:
    ctx->pc = 0x7F276528u;
    // 7F276528: lwz     r3, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27652C:
    ctx->pc = 0x7F27652Cu;
    // 7F27652C: lwz     r0, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276530:
    ctx->pc = 0x7F276530u;
    // 7F276530: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276534:
    ctx->pc = 0x7F276534u;
    // 7F276534: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276538:
    ctx->pc = 0x7F276538u;
    // 7F276538: b       0x7F27655C
    {
            goto label_7F27655C;
    }

label_7F27653C:
    ctx->pc = 0x7F27653Cu;
    ctx->downcount -= 8;
    // 7F27653C: lwz     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276540:
    ctx->pc = 0x7F276540u;
    // 7F276540: lwz     r0, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276544:
    ctx->pc = 0x7F276544u;
    // 7F276544: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276548:
    ctx->pc = 0x7F276548u;
    // 7F276548: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27654C:
    ctx->pc = 0x7F27654Cu;
    // 7F27654C: lwz     r3, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276550:
    ctx->pc = 0x7F276550u;
    // 7F276550: lwz     r0, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276554:
    ctx->pc = 0x7F276554u;
    // 7F276554: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276558:
    ctx->pc = 0x7F276558u;
    // 7F276558: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27655C:
    ctx->pc = 0x7F27655Cu;
    ctx->downcount -= 4;
    // 7F27655C: lhz     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276560:
    ctx->pc = 0x7F276560u;
    // 7F276560: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F276564:
    ctx->pc = 0x7F276564u;
    // 7F276564: sth     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F276568:
    ctx->pc = 0x7F276568u;
    // 7F276568: b       0x7F2765A0
    {
            goto label_7F2765A0;
    }

label_7F27656C:
    ctx->pc = 0x7F27656Cu;
    ctx->downcount -= 3;
    // 7F27656C: lbz     r0, 187(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F276570:
    ctx->pc = 0x7F276570u;
    // 7F276570: extsb. r0, r0
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

label_7F276574:
    ctx->pc = 0x7F276574u;
    // 7F276574: bc    4, 1, 0x7F2765A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2765A0;
        }
    }

label_7F276578:
    ctx->pc = 0x7F276578u;
    ctx->downcount -= 3;
    // 7F276578: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_7F27657C:
    ctx->pc = 0x7F27657Cu;
    // 7F27657C: addi    r4, r31, 856
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(856);

label_7F276580:
    ctx->pc = 0x7F276580u;
    // 7F276580: bl      0x7F10B784
    {
            ctx->lr = 0x7F276584u;
            ctx->pc = 0x7F10B784u;
            return;
    }

label_7F276584:
    ctx->pc = 0x7F276584u;
    ctx->downcount -= 2;
    // 7F276584: addi    r3, r31, 656
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(656);

label_7F276588:
    ctx->pc = 0x7F276588u;
    // 7F276588: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F27658Cu;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F27658C:
    ctx->pc = 0x7F27658Cu;
    ctx->downcount -= 1;
    // 7F27658C: bl      0x7F10B7E4
    {
            ctx->lr = 0x7F276590u;
            ctx->pc = 0x7F10B7E4u;
            return;
    }

label_7F276590:
    ctx->pc = 0x7F276590u;
    ctx->downcount -= 4;
    // 7F276590: stw     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276594:
    ctx->pc = 0x7F276594u;
    // 7F276594: lhz     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276598:
    ctx->pc = 0x7F276598u;
    // 7F276598: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F27659C:
    ctx->pc = 0x7F27659Cu;
    // 7F27659C: sth     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2765A0:
    ctx->pc = 0x7F2765A0u;
    ctx->downcount -= 3;
    // 7F2765A0: lhz     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2765A4:
    ctx->pc = 0x7F2765A4u;
    // 7F2765A4: rlwinm. r0, r0, 0, 30, 30
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

label_7F2765A8:
    ctx->pc = 0x7F2765A8u;
    // 7F2765A8: bc    4, 2, 0x7F27665C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27665C;
        }
    }

label_7F2765AC:
    ctx->pc = 0x7F2765ACu;
    ctx->downcount -= 4;
    // 7F2765AC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2765B0:
    ctx->pc = 0x7F2765B0u;
    // 7F2765B0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2765B4:
    ctx->pc = 0x7F2765B4u;
    // 7F2765B4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2765B8:
    ctx->pc = 0x7F2765B8u;
    // 7F2765B8: bl      0x800261D8
    {
            ctx->lr = 0x7F2765BCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2765BC:
    ctx->pc = 0x7F2765BCu;
    ctx->downcount -= 8;
    // 7F2765BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2765C0:
    ctx->pc = 0x7F2765C0u;
    // 7F2765C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2765C4:
    ctx->pc = 0x7F2765C4u;
    // 7F2765C4: addi    r5, r3, 25012
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25012);

label_7F2765C8:
    ctx->pc = 0x7F2765C8u;
    // 7F2765C8: lfs     f2, 25016(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2765C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2765CC:
    ctx->pc = 0x7F2765CCu;
    // 7F2765CC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2765CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2765D0:
    ctx->pc = 0x7F2765D0u;
    // 7F2765D0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2765D4:
    ctx->pc = 0x7F2765D4u;
    // 7F2765D4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2765D8:
    ctx->pc = 0x7F2765D8u;
    // 7F2765D8: bl      0x7F23A52C
    {
            ctx->lr = 0x7F2765DCu;
            ctx->pc = 0x7F23A52Cu;
            return;
    }

label_7F2765DC:
    ctx->pc = 0x7F2765DCu;
    ctx->downcount -= 2;
    // 7F2765DC: cmpwi   r3, 0
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

label_7F2765E0:
    ctx->pc = 0x7F2765E0u;
    // 7F2765E0: bc    12, 2, 0x7F27665C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27665C;
        }
    }

label_7F2765E4:
    ctx->pc = 0x7F2765E4u;
    ctx->downcount -= 10;
    // 7F2765E4: lhz     r4, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F2765E8:
    ctx->pc = 0x7F2765E8u;
    // 7F2765E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2765EC:
    ctx->pc = 0x7F2765ECu;
    // 7F2765EC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2765F0:
    ctx->pc = 0x7F2765F0u;
    // 7F2765F0: ori     r4, r4, 0x0002
    ctx->gpr[4] = ctx->gpr[4] | 0x0002u;

label_7F2765F4:
    ctx->pc = 0x7F2765F4u;
    // 7F2765F4: addi    r3, r3, 19560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19560);

label_7F2765F8:
    ctx->pc = 0x7F2765F8u;
    // 7F2765F8: sth     r4, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2765FC:
    ctx->pc = 0x7F2765FCu;
    // 7F2765FC: stw     r0, 864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276600:
    ctx->pc = 0x7F276600u;
    // 7F276600: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276604:
    ctx->pc = 0x7F276604u;
    // 7F276604: cmpwi   r3, 0
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

label_7F276608:
    ctx->pc = 0x7F276608u;
    // 7F276608: bc    12, 2, 0x7F276618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276618;
        }
    }

label_7F27660C:
    ctx->pc = 0x7F27660Cu;
    ctx->downcount -= 3;
    // 7F27660C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F276610:
    ctx->pc = 0x7F276610u;
    // 7F276610: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F276614:
    ctx->pc = 0x7F276614u;
    // 7F276614: bl      0x7F0117B8
    {
            ctx->lr = 0x7F276618u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F276618:
    ctx->pc = 0x7F276618u;
    ctx->downcount -= 3;
    // 7F276618: lwz     r0, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27661C:
    ctx->pc = 0x7F27661Cu;
    // 7F27661C: cmplwi  r0, 0x0001
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

label_7F276620:
    ctx->pc = 0x7F276620u;
    // 7F276620: bc    4, 2, 0x7F27665C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27665C;
        }
    }

label_7F276624:
    ctx->pc = 0x7F276624u;
    ctx->downcount -= 6;
    // 7F276624: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F276628:
    ctx->pc = 0x7F276628u;
    // 7F276628: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27662C:
    ctx->pc = 0x7F27662Cu;
    // 7F27662C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276630:
    ctx->pc = 0x7F276630u;
    // 7F276630: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F276634:
    ctx->pc = 0x7F276634u;
    // 7F276634: cmpwi   r0, 1
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

label_7F276638:
    ctx->pc = 0x7F276638u;
    // 7F276638: bc    4, 2, 0x7F27665C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27665C;
        }
    }

label_7F27663C:
    ctx->pc = 0x7F27663Cu;
    ctx->downcount -= 3;
    // 7F27663C: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F276640:
    ctx->pc = 0x7F276640u;
    // 7F276640: cmpwi   r0, 40
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

label_7F276644:
    ctx->pc = 0x7F276644u;
    // 7F276644: bc    4, 0, 0x7F276650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276650;
        }
    }

label_7F276648:
    ctx->pc = 0x7F276648u;
    ctx->downcount -= 2;
    // 7F276648: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27664C:
    ctx->pc = 0x7F27664Cu;
    // 7F27664C: stw     r0, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276650:
    ctx->pc = 0x7F276650u;
    ctx->downcount -= 3;
    // 7F276650: lwz     r0, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276654:
    ctx->pc = 0x7F276654u;
    // 7F276654: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F276658:
    ctx->pc = 0x7F276658u;
    // 7F276658: stw     r0, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27665C:
    ctx->pc = 0x7F27665Cu;
    ctx->downcount -= 3;
    // 7F27665C: lhz     r0, 762(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(762);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276660:
    ctx->pc = 0x7F276660u;
    // 7F276660: rlwinm. r0, r0, 0, 30, 30
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

label_7F276664:
    ctx->pc = 0x7F276664u;
    // 7F276664: bc    12, 2, 0x7F2766C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2766C0;
        }
    }

label_7F276668:
    ctx->pc = 0x7F276668u;
    ctx->downcount -= 3;
    // 7F276668: lwz     r0, 864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27666C:
    ctx->pc = 0x7F27666Cu;
    // 7F27666C: rlwinm. r0, r0, 0, 31, 31
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

label_7F276670:
    ctx->pc = 0x7F276670u;
    // 7F276670: bc    12, 2, 0x7F2766B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2766B4;
        }
    }

label_7F276674:
    ctx->pc = 0x7F276674u;
    ctx->downcount -= 8;
    // 7F276674: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F276678:
    ctx->pc = 0x7F276678u;
    // 7F276678: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27667C:
    ctx->pc = 0x7F27667Cu;
    // 7F27667C: lfs     f1, 19564(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27667Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F276680:
    ctx->pc = 0x7F276680u;
    // 7F276680: lfs     f0, 25020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276680u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F276684:
    ctx->pc = 0x7F276684u;
    // 7F276684: lfs     f2, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276688:
    ctx->pc = 0x7F276688u;
    // 7F276688: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F276688u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F27668C:
    ctx->pc = 0x7F27668Cu;
    // 7F27668C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27668Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F276690:
    ctx->pc = 0x7F276690u;
    // 7F276690: bc    4, 1, 0x7F2766B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2766B4;
        }
    }

label_7F276694:
    ctx->pc = 0x7F276694u;
    ctx->downcount -= 21;
    // 7F276694: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F276698:
    ctx->pc = 0x7F276698u;
    // 7F276698: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276698u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27669C:
    ctx->pc = 0x7F27669Cu;
    // 7F27669C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27669Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F2766A0:
    ctx->pc = 0x7F2766A0u;
    // 7F2766A0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2766A0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2766A4:
    ctx->pc = 0x7F2766A4u;
    // 7F2766A4: bl      0x7F276844
    {
            ctx->lr = 0x7F2766A8u;
            goto label_7F276844;
    }

label_7F2766A8:
    ctx->pc = 0x7F2766A8u;
    ctx->downcount -= 3;
    // 7F2766A8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2766AC:
    ctx->pc = 0x7F2766ACu;
    // 7F2766AC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2766B0:
    ctx->pc = 0x7F2766B0u;
    // 7F2766B0: bl      0x7F1C9BA4
    {
            ctx->lr = 0x7F2766B4u;
            ctx->pc = 0x7F1C9BA4u;
            return;
    }

label_7F2766B4:
    ctx->pc = 0x7F2766B4u;
    ctx->downcount -= 3;
    // 7F2766B4: lwz     r3, 864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2766B8:
    ctx->pc = 0x7F2766B8u;
    // 7F2766B8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2766BC:
    ctx->pc = 0x7F2766BCu;
    // 7F2766BC: stw     r0, 864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2766C0:
    ctx->pc = 0x7F2766C0u;
    ctx->downcount -= 3;
    // 7F2766C0: lhz     r0, 756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2766C4:
    ctx->pc = 0x7F2766C4u;
    // 7F2766C4: rlwinm. r0, r0, 0, 24, 24
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

label_7F2766C8:
    ctx->pc = 0x7F2766C8u;
    // 7F2766C8: bc    4, 2, 0x7F2766F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2766F0;
        }
    }

label_7F2766CC:
    ctx->pc = 0x7F2766CCu;
    ctx->downcount -= 7;
    // 7F2766CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2766D0:
    ctx->pc = 0x7F2766D0u;
    // 7F2766D0: addi    r30, r31, 432
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(432);

label_7F2766D4:
    ctx->pc = 0x7F2766D4u;
    // 7F2766D4: lwz     r6, 18308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18308);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2766D8:
    ctx->pc = 0x7F2766D8u;
    // 7F2766D8: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2766DC:
    ctx->pc = 0x7F2766DCu;
    // 7F2766DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2766E0:
    ctx->pc = 0x7F2766E0u;
    // 7F2766E0: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2766E4:
    ctx->pc = 0x7F2766E4u;
    // 7F2766E4: bl      0x7F014A08
    {
            ctx->lr = 0x7F2766E8u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F2766E8:
    ctx->pc = 0x7F2766E8u;
    ctx->downcount -= 2;
    // 7F2766E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2766EC:
    ctx->pc = 0x7F2766ECu;
    // 7F2766EC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2766F0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2766F0:
    ctx->pc = 0x7F2766F0u;
    ctx->downcount -= 3;
    // 7F2766F0: lhz     r0, 756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2766F4:
    ctx->pc = 0x7F2766F4u;
    // 7F2766F4: rlwinm. r3, r0, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2766F8:
    ctx->pc = 0x7F2766F8u;
    // 7F2766F8: bc    12, 2, 0x7F27671C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27671C;
        }
    }

label_7F2766FC:
    ctx->pc = 0x7F2766FCu;
    ctx->downcount -= 2;
    // 7F2766FC: rlwinm. r0, r0, 0, 16, 16
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

label_7F276700:
    ctx->pc = 0x7F276700u;
    // 7F276700: bc    12, 2, 0x7F27671C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27671C;
        }
    }

label_7F276704:
    ctx->pc = 0x7F276704u;
    ctx->downcount -= 3;
    // 7F276704: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F276708:
    ctx->pc = 0x7F276708u;
    // 7F276708: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F27670C:
    ctx->pc = 0x7F27670Cu;
    // 7F27670C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F276710u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F276710:
    ctx->pc = 0x7F276710u;
    ctx->downcount -= 2;
    // 7F276710: lwz     r3, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276714:
    ctx->pc = 0x7F276714u;
    // 7F276714: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F276718u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F276718:
    ctx->pc = 0x7F276718u;
    ctx->downcount -= 1;
    // 7F276718: b       0x7F276828
    {
            goto label_7F276828;
    }

label_7F27671C:
    ctx->pc = 0x7F27671Cu;
    ctx->downcount -= 2;
    // 7F27671C: cmpwi   r3, 0
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

label_7F276720:
    ctx->pc = 0x7F276720u;
    // 7F276720: bc    12, 2, 0x7F276828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276828;
        }
    }

label_7F276724:
    ctx->pc = 0x7F276724u;
    ctx->downcount -= 7;
    // 7F276724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276728:
    ctx->pc = 0x7F276728u;
    // 7F276728: lfs     f0, 25024(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276728u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27672C:
    ctx->pc = 0x7F27672Cu;
    // 7F27672C: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27672Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276730:
    ctx->pc = 0x7F276730u;
    // 7F276730: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276730u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276734:
    ctx->pc = 0x7F276734u;
    // 7F276734: lhz     r3, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F276738:
    ctx->pc = 0x7F276738u;
    // 7F276738: cmplwi  r3, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27673C:
    ctx->pc = 0x7F27673Cu;
    // 7F27673C: bc    4, 0, 0x7F276784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276784;
        }
    }

label_7F276740:
    ctx->pc = 0x7F276740u;
    ctx->downcount -= 5;
    // 7F276740: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F276744:
    ctx->pc = 0x7F276744u;
    // 7F276744: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F276748:
    ctx->pc = 0x7F276748u;
    // 7F276748: sth     r3, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27674C:
    ctx->pc = 0x7F27674Cu;
    // 7F27674C: cmplwi  r0, 0x0002
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

label_7F276750:
    ctx->pc = 0x7F276750u;
    // 7F276750: bc    4, 2, 0x7F276764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276764;
        }
    }

label_7F276754:
    ctx->pc = 0x7F276754u;
    ctx->downcount -= 4;
    // 7F276754: lwz     r3, 752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(752);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276758:
    ctx->pc = 0x7F276758u;
    // 7F276758: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27675C:
    ctx->pc = 0x7F27675Cu;
    // 7F27675C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F276760:
    ctx->pc = 0x7F276760u;
    // 7F276760: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276764:
    ctx->pc = 0x7F276764u;
    ctx->downcount -= 8;
    // 7F276764: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276768:
    ctx->pc = 0x7F276768u;
    // 7F276768: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27676C:
    ctx->pc = 0x7F27676Cu;
    // 7F27676C: stw     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276770:
    ctx->pc = 0x7F276770u;
    // 7F276770: stw     r0, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276774:
    ctx->pc = 0x7F276774u;
    // 7F276774: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276778:
    ctx->pc = 0x7F276778u;
    // 7F276778: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27677C:
    ctx->pc = 0x7F27677Cu;
    // 7F27677C: stw     r3, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276780:
    ctx->pc = 0x7F276780u;
    // 7F276780: stw     r0, 684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276784:
    ctx->pc = 0x7F276784u;
    ctx->downcount -= 41;
    // 7F276784: lwz     r3, 752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(752);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276788:
    ctx->pc = 0x7F276788u;
    // 7F276788: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27678C:
    ctx->pc = 0x7F27678Cu;
    // 7F27678C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F276790:
    ctx->pc = 0x7F276790u;
    // 7F276790: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276794:
    ctx->pc = 0x7F276794u;
    // 7F276794: lwz     r5, 752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(752);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276798:
    ctx->pc = 0x7F276798u;
    // 7F276798: lwz     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27679C:
    ctx->pc = 0x7F27679Cu;
    // 7F27679C: lwz     r4, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2767A0:
    ctx->pc = 0x7F2767A0u;
    // 7F2767A0: lwz     r0, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2767A4:
    ctx->pc = 0x7F2767A4u;
    // 7F2767A4: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F2767A8:
    ctx->pc = 0x7F2767A8u;
    // 7F2767A8: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2767AC:
    ctx->pc = 0x7F2767ACu;
    // 7F2767AC: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2767B0:
    ctx->pc = 0x7F2767B0u;
    // 7F2767B0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2767B4:
    ctx->pc = 0x7F2767B4u;
    // 7F2767B4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2767B8:
    ctx->pc = 0x7F2767B8u;
    // 7F2767B8: lwz     r3, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2767BC:
    ctx->pc = 0x7F2767BCu;
    // 7F2767BC: lwz     r0, 684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2767C0:
    ctx->pc = 0x7F2767C0u;
    // 7F2767C0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2767C4:
    ctx->pc = 0x7F2767C4u;
    // 7F2767C4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2767C8:
    ctx->pc = 0x7F2767C8u;
    // 7F2767C8: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2767CC:
    ctx->pc = 0x7F2767CCu;
    // 7F2767CC: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2767D0:
    ctx->pc = 0x7F2767D0u;
    // 7F2767D0: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2767D4:
    ctx->pc = 0x7F2767D4u;
    // 7F2767D4: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2767D8:
    ctx->pc = 0x7F2767D8u;
    // 7F2767D8: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2767DC:
    ctx->pc = 0x7F2767DCu;
    // 7F2767DC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2767E0:
    ctx->pc = 0x7F2767E0u;
    // 7F2767E0: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2767E4:
    ctx->pc = 0x7F2767E4u;
    // 7F2767E4: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2767E8:
    ctx->pc = 0x7F2767E8u;
    // 7F2767E8: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2767EC:
    ctx->pc = 0x7F2767ECu;
    // 7F2767EC: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2767F0:
    ctx->pc = 0x7F2767F0u;
    // 7F2767F0: stw     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2767F4:
    ctx->pc = 0x7F2767F4u;
    // 7F2767F4: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2767F8:
    ctx->pc = 0x7F2767F8u;
    // 7F2767F8: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2767FC:
    ctx->pc = 0x7F2767FCu;
    // 7F2767FC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276800:
    ctx->pc = 0x7F276800u;
    // 7F276800: stw     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276804:
    ctx->pc = 0x7F276804u;
    // 7F276804: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276808:
    ctx->pc = 0x7F276808u;
    // 7F276808: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27680C:
    ctx->pc = 0x7F27680Cu;
    // 7F27680C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276810:
    ctx->pc = 0x7F276810u;
    // 7F276810: stw     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276814:
    ctx->pc = 0x7F276814u;
    // 7F276814: stw     r0, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276818:
    ctx->pc = 0x7F276818u;
    // 7F276818: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27681C:
    ctx->pc = 0x7F27681Cu;
    // 7F27681C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276820:
    ctx->pc = 0x7F276820u;
    // 7F276820: stw     r3, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276824:
    ctx->pc = 0x7F276824u;
    // 7F276824: stw     r0, 684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276828:
    ctx->pc = 0x7F276828u;
    ctx->downcount -= 18;
    // 7F276828: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F276828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F276828u);
        if (ctx->exception) return;
    }

label_7F27682C:
    ctx->pc = 0x7F27682Cu;
    // 7F27682C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27682Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276830:
    ctx->pc = 0x7F276830u;
    // 7F276830: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F276834:
    ctx->pc = 0x7F276834u;
    // 7F276834: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276838:
    ctx->pc = 0x7F276838u;
    // 7F276838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27683C:
    ctx->pc = 0x7F27683Cu;
    // 7F27683C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F276840:
    ctx->pc = 0x7F276840u;
    // 7F276840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276844:
    ctx->pc = 0x7F276844u;
    ctx->downcount -= 8;
    // 7F276844: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276848:
    ctx->pc = 0x7F276848u;
    // 7F276848: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276848u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27684C:
    ctx->pc = 0x7F27684Cu;
    // 7F27684C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276850:
    ctx->pc = 0x7F276850u;
    // 7F276850: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F276854:
    ctx->pc = 0x7F276854u;
    // 7F276854: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276858:
    ctx->pc = 0x7F276858u;
    // 7F276858: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27685C:
    ctx->pc = 0x7F27685Cu;
    // 7F27685C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F276860:
    ctx->pc = 0x7F276860u;
    // 7F276860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276864:
    ctx->pc = 0x7F276864u;
    ctx->downcount -= 3;
    // 7F276864: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F276868:
    ctx->pc = 0x7F276868u;
    // 7F276868: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27686C:
    ctx->pc = 0x7F27686Cu;
    // 7F27686C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276870:
    ctx->pc = 0x7F276870u;
    ctx->downcount -= 7;
    // 7F276870: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276874:
    ctx->pc = 0x7F276874u;
    // 7F276874: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F276878:
    ctx->pc = 0x7F276878u;
    // 7F276878: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27687C:
    ctx->pc = 0x7F27687Cu;
    // 7F27687C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F276880:
    ctx->pc = 0x7F276880u;
    // 7F276880: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276884:
    ctx->pc = 0x7F276884u;
    // 7F276884: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F276888:
    ctx->pc = 0x7F276888u;
    // 7F276888: bl      0x7F023E10
    {
            ctx->lr = 0x7F27688Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F27688C:
    ctx->pc = 0x7F27688Cu;
    ctx->downcount -= 3;
    // 7F27688C: lhz     r0, 756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276890:
    ctx->pc = 0x7F276890u;
    // 7F276890: rlwinm. r3, r0, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276894:
    ctx->pc = 0x7F276894u;
    // 7F276894: bc    12, 2, 0x7F2768B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2768B4;
        }
    }

label_7F276898:
    ctx->pc = 0x7F276898u;
    ctx->downcount -= 2;
    // 7F276898: rlwinm. r0, r0, 0, 16, 16
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

label_7F27689C:
    ctx->pc = 0x7F27689Cu;
    // 7F27689C: bc    12, 2, 0x7F2768B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2768B4;
        }
    }

label_7F2768A0:
    ctx->pc = 0x7F2768A0u;
    ctx->downcount -= 2;
    // 7F2768A0: lwz     r3, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2768A4:
    ctx->pc = 0x7F2768A4u;
    // 7F2768A4: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F2768A8u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F2768A8:
    ctx->pc = 0x7F2768A8u;
    ctx->downcount -= 2;
    // 7F2768A8: lwz     r3, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2768AC:
    ctx->pc = 0x7F2768ACu;
    // 7F2768AC: bl      0x7F3B0820
    {
            ctx->lr = 0x7F2768B0u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F2768B0:
    ctx->pc = 0x7F2768B0u;
    ctx->downcount -= 1;
    // 7F2768B0: b       0x7F2768C4
    {
            goto label_7F2768C4;
    }

label_7F2768B4:
    ctx->pc = 0x7F2768B4u;
    ctx->downcount -= 2;
    // 7F2768B4: cmpwi   r3, 0
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

label_7F2768B8:
    ctx->pc = 0x7F2768B8u;
    // 7F2768B8: bc    12, 2, 0x7F2768C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2768C4;
        }
    }

label_7F2768BC:
    ctx->pc = 0x7F2768BCu;
    ctx->downcount -= 2;
    // 7F2768BC: lwz     r3, 752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(752);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2768C0:
    ctx->pc = 0x7F2768C0u;
    // 7F2768C0: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2768C4u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2768C4:
    ctx->pc = 0x7F2768C4u;
    ctx->downcount -= 6;
    // 7F2768C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2768C8:
    ctx->pc = 0x7F2768C8u;
    // 7F2768C8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2768CC:
    ctx->pc = 0x7F2768CCu;
    // 7F2768CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2768D0:
    ctx->pc = 0x7F2768D0u;
    // 7F2768D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2768D4:
    ctx->pc = 0x7F2768D4u;
    // 7F2768D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2768D8:
    ctx->pc = 0x7F2768D8u;
    ctx->downcount -= 29;
    // 7F2768D8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2768DC:
    ctx->pc = 0x7F2768DCu;
    // 7F2768DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2768E0:
    ctx->pc = 0x7F2768E0u;
    // 7F2768E0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2768E4:
    ctx->pc = 0x7F2768E4u;
    // 7F2768E4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2768E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2768E8:
    ctx->pc = 0x7F2768E8u;
    // 7F2768E8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2768E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2768E8u);
        if (ctx->exception) return;
    }

label_7F2768EC:
    ctx->pc = 0x7F2768ECu;
    // 7F2768EC: stmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2768F0:
    ctx->pc = 0x7F2768F0u;
    // 7F2768F0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2768F4:
    ctx->pc = 0x7F2768F4u;
    // 7F2768F4: lis     r7, 32586
    ctx->gpr[7] = ((u32)(s32)(32586) << 16);

label_7F2768F8:
    ctx->pc = 0x7F2768F8u;
    // 7F2768F8: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2768FC:
    ctx->pc = 0x7F2768FCu;
    // 7F2768FC: lhz     r29, 756(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(756);
        ctx->gpr[29] = mem_read16(ctx, ea);
    }

label_7F276900:
    ctx->pc = 0x7F276900u;
    // 7F276900: addi    r30, r25, 32
    ctx->gpr[30] = ctx->gpr[25] + (u32)(s32)(32);

label_7F276904:
    ctx->pc = 0x7F276904u;
    // 7F276904: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F276908:
    ctx->pc = 0x7F276908u;
    // 7F276908: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27690C:
    ctx->pc = 0x7F27690Cu;
    // 7F27690C: lwz     r5, 18308(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(18308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276910:
    ctx->pc = 0x7F276910u;
    // 7F276910: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276914:
    ctx->pc = 0x7F276914u;
    // 7F276914: addi    r31, r25, 688
    ctx->gpr[31] = ctx->gpr[25] + (u32)(s32)(688);

label_7F276918:
    ctx->pc = 0x7F276918u;
    // 7F276918: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27691C:
    ctx->pc = 0x7F27691Cu;
    // 7F27691C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F276920:
    ctx->pc = 0x7F276920u;
    // 7F276920: bl      0x7F022FB4
    {
            ctx->lr = 0x7F276924u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F276924:
    ctx->pc = 0x7F276924u;
    ctx->downcount -= 2;
    // 7F276924: cmpwi   r3, 0
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

label_7F276928:
    ctx->pc = 0x7F276928u;
    // 7F276928: bc    4, 0, 0x7F276934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276934;
        }
    }

label_7F27692C:
    ctx->pc = 0x7F27692Cu;
    ctx->downcount -= 2;
    // 7F27692C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F276930:
    ctx->pc = 0x7F276930u;
    // 7F276930: b       0x7F276C84
    {
            goto label_7F276C84;
    }

label_7F276934:
    ctx->pc = 0x7F276934u;
    ctx->downcount -= 18;
    // 7F276934: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276934u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F276938:
    ctx->pc = 0x7F276938u;
    // 7F276938: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27693C:
    ctx->pc = 0x7F27693Cu;
    // 7F27693C: addi    r4, r3, 12808
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F276940:
    ctx->pc = 0x7F276940u;
    // 7F276940: rlwinm. r0, r29, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276944:
    ctx->pc = 0x7F276944u;
    // 7F276944: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F276944u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276948:
    ctx->pc = 0x7F276948u;
    // 7F276948: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276948u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27694C:
    ctx->pc = 0x7F27694Cu;
    // 7F27694C: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27694Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276950:
    ctx->pc = 0x7F276950u;
    // 7F276950: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F276950u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F276954:
    ctx->pc = 0x7F276954u;
    // 7F276954: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F276954u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276958:
    ctx->pc = 0x7F276958u;
    // 7F276958: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27695C:
    ctx->pc = 0x7F27695Cu;
    // 7F27695C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276960:
    ctx->pc = 0x7F276960u;
    // 7F276960: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276964:
    ctx->pc = 0x7F276964u;
    // 7F276964: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276968:
    ctx->pc = 0x7F276968u;
    // 7F276968: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27696C:
    ctx->pc = 0x7F27696Cu;
    // 7F27696C: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276970:
    ctx->pc = 0x7F276970u;
    // 7F276970: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276974:
    ctx->pc = 0x7F276974u;
    // 7F276974: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276978:
    ctx->pc = 0x7F276978u;
    // 7F276978: bc    4, 2, 0x7F276A48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276A48;
        }
    }

label_7F27697C:
    ctx->pc = 0x7F27697Cu;
    ctx->downcount -= 15;
    // 7F27697C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276980:
    ctx->pc = 0x7F276980u;
    // 7F276980: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276984:
    ctx->pc = 0x7F276984u;
    // 7F276984: stw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F276988:
    ctx->pc = 0x7F276988u;
    // 7F276988: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27698C:
    ctx->pc = 0x7F27698Cu;
    // 7F27698C: lfs     f2, 25008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27698Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276990:
    ctx->pc = 0x7F276990u;
    // 7F276990: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276994:
    ctx->pc = 0x7F276994u;
    // 7F276994: lfd     f1, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276994u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276998:
    ctx->pc = 0x7F276998u;
    // 7F276998: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27699C:
    ctx->pc = 0x7F27699Cu;
    // 7F27699C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27699Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2769A0:
    ctx->pc = 0x7F2769A0u;
    // 7F2769A0: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2769A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2769A4:
    ctx->pc = 0x7F2769A4u;
    // 7F2769A4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2769A4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2769A8:
    ctx->pc = 0x7F2769A8u;
    // 7F2769A8: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2769A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2769AC:
    ctx->pc = 0x7F2769ACu;
    // 7F2769AC: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2769ACu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2769B0:
    ctx->pc = 0x7F2769B0u;
    // 7F2769B0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2769B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2769B4:
    ctx->pc = 0x7F2769B4u;
    // 7F2769B4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2769B8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2769B8:
    ctx->pc = 0x7F2769B8u;
    ctx->downcount -= 4;
    // 7F2769B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2769BC:
    ctx->pc = 0x7F2769BCu;
    // 7F2769BC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2769C0:
    ctx->pc = 0x7F2769C0u;
    // 7F2769C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2769C4:
    ctx->pc = 0x7F2769C4u;
    // 7F2769C4: bl      0x7F3B3648
    {
            ctx->lr = 0x7F2769C8u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F2769C8:
    ctx->pc = 0x7F2769C8u;
    ctx->downcount -= 2;
    // 7F2769C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2769CC:
    ctx->pc = 0x7F2769CCu;
    // 7F2769CC: bl      0x7F3CC594
    {
            ctx->lr = 0x7F2769D0u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F2769D0:
    ctx->pc = 0x7F2769D0u;
    ctx->downcount -= 10;
    // 7F2769D0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2769D4:
    ctx->pc = 0x7F2769D4u;
    // 7F2769D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2769D8:
    ctx->pc = 0x7F2769D8u;
    // 7F2769D8: stw     r27, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F2769DC:
    ctx->pc = 0x7F2769DCu;
    // 7F2769DC: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F2769E0:
    ctx->pc = 0x7F2769E0u;
    // 7F2769E0: lfd     f2, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2769E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2769E4:
    ctx->pc = 0x7F2769E4u;
    // 7F2769E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2769E8:
    ctx->pc = 0x7F2769E8u;
    // 7F2769E8: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2769EC:
    ctx->pc = 0x7F2769ECu;
    // 7F2769EC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2769ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2769F0:
    ctx->pc = 0x7F2769F0u;
    // 7F2769F0: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2769F0u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F2769F4:
    ctx->pc = 0x7F2769F4u;
    // 7F2769F4: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F2769F8u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F2769F8:
    ctx->pc = 0x7F2769F8u;
    ctx->downcount -= 19;
    // 7F2769F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2769FC:
    ctx->pc = 0x7F2769FCu;
    // 7F2769FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276A00:
    ctx->pc = 0x7F276A00u;
    // 7F276A00: stw     r26, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F276A04:
    ctx->pc = 0x7F276A04u;
    // 7F276A04: addi    r4, r3, 25032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25032);

label_7F276A08:
    ctx->pc = 0x7F276A08u;
    // 7F276A08: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F276A0C:
    ctx->pc = 0x7F276A0Cu;
    // 7F276A0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276A10:
    ctx->pc = 0x7F276A10u;
    // 7F276A10: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276A14:
    ctx->pc = 0x7F276A14u;
    // 7F276A14: addi    r6, r5, 25008
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(25008);

label_7F276A18:
    ctx->pc = 0x7F276A18u;
    // 7F276A18: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F276A18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276A1C:
    ctx->pc = 0x7F276A1Cu;
    // 7F276A1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276A20:
    ctx->pc = 0x7F276A20u;
    // 7F276A20: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276A24:
    ctx->pc = 0x7F276A24u;
    // 7F276A24: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F276A28:
    ctx->pc = 0x7F276A28u;
    // 7F276A28: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F276A28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276A2C:
    ctx->pc = 0x7F276A2Cu;
    // 7F276A2C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276A2Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F276A30:
    ctx->pc = 0x7F276A30u;
    // 7F276A30: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276A34:
    ctx->pc = 0x7F276A34u;
    // 7F276A34: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F276A34u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F276A38:
    ctx->pc = 0x7F276A38u;
    // 7F276A38: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276A3C:
    ctx->pc = 0x7F276A3Cu;
    // 7F276A3C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276A40:
    ctx->pc = 0x7F276A40u;
    // 7F276A40: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F276A44u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F276A44:
    ctx->pc = 0x7F276A44u;
    ctx->downcount -= 1;
    // 7F276A44: b       0x7F276B08
    {
            goto label_7F276B08;
    }

label_7F276A48:
    ctx->pc = 0x7F276A48u;
    ctx->downcount -= 14;
    // 7F276A48: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276A4C:
    ctx->pc = 0x7F276A4Cu;
    // 7F276A4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276A50:
    ctx->pc = 0x7F276A50u;
    // 7F276A50: stw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F276A54:
    ctx->pc = 0x7F276A54u;
    // 7F276A54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F276A58:
    ctx->pc = 0x7F276A58u;
    // 7F276A58: lfs     f2, 25008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F276A58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276A5C:
    ctx->pc = 0x7F276A5Cu;
    // 7F276A5C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276A60:
    ctx->pc = 0x7F276A60u;
    // 7F276A60: lfd     f1, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276A60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276A64:
    ctx->pc = 0x7F276A64u;
    // 7F276A64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276A68:
    ctx->pc = 0x7F276A68u;
    // 7F276A68: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276A6C:
    ctx->pc = 0x7F276A6Cu;
    // 7F276A6C: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276A70:
    ctx->pc = 0x7F276A70u;
    // 7F276A70: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276A70u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F276A74:
    ctx->pc = 0x7F276A74u;
    // 7F276A74: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276A78:
    ctx->pc = 0x7F276A78u;
    // 7F276A78: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276A7C:
    ctx->pc = 0x7F276A7Cu;
    // 7F276A7C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F276A80u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F276A80:
    ctx->pc = 0x7F276A80u;
    ctx->downcount -= 4;
    // 7F276A80: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276A84:
    ctx->pc = 0x7F276A84u;
    // 7F276A84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F276A88:
    ctx->pc = 0x7F276A88u;
    // 7F276A88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276A8C:
    ctx->pc = 0x7F276A8Cu;
    // 7F276A8C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F276A90u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F276A90:
    ctx->pc = 0x7F276A90u;
    ctx->downcount -= 2;
    // 7F276A90: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276A94:
    ctx->pc = 0x7F276A94u;
    // 7F276A94: bl      0x7F3CC594
    {
            ctx->lr = 0x7F276A98u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F276A98:
    ctx->pc = 0x7F276A98u;
    ctx->downcount -= 10;
    // 7F276A98: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276A9C:
    ctx->pc = 0x7F276A9Cu;
    // 7F276A9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276AA0:
    ctx->pc = 0x7F276AA0u;
    // 7F276AA0: stw     r27, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F276AA4:
    ctx->pc = 0x7F276AA4u;
    // 7F276AA4: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F276AA8:
    ctx->pc = 0x7F276AA8u;
    // 7F276AA8: lfd     f2, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276AA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276AAC:
    ctx->pc = 0x7F276AACu;
    // 7F276AAC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276AB0:
    ctx->pc = 0x7F276AB0u;
    // 7F276AB0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276AB4:
    ctx->pc = 0x7F276AB4u;
    // 7F276AB4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276AB8:
    ctx->pc = 0x7F276AB8u;
    // 7F276AB8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F276AB8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F276ABC:
    ctx->pc = 0x7F276ABCu;
    // 7F276ABC: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F276AC0u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F276AC0:
    ctx->pc = 0x7F276AC0u;
    ctx->downcount -= 18;
    // 7F276AC0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276AC4:
    ctx->pc = 0x7F276AC4u;
    // 7F276AC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276AC8:
    ctx->pc = 0x7F276AC8u;
    // 7F276AC8: stw     r26, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F276ACC:
    ctx->pc = 0x7F276ACCu;
    // 7F276ACC: addi    r4, r3, 25032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25032);

label_7F276AD0:
    ctx->pc = 0x7F276AD0u;
    // 7F276AD0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F276AD4:
    ctx->pc = 0x7F276AD4u;
    // 7F276AD4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276AD8:
    ctx->pc = 0x7F276AD8u;
    // 7F276AD8: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276ADC:
    ctx->pc = 0x7F276ADCu;
    // 7F276ADC: addi    r6, r5, 25008
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(25008);

label_7F276AE0:
    ctx->pc = 0x7F276AE0u;
    // 7F276AE0: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F276AE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276AE4:
    ctx->pc = 0x7F276AE4u;
    // 7F276AE4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276AE8:
    ctx->pc = 0x7F276AE8u;
    // 7F276AE8: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276AE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276AEC:
    ctx->pc = 0x7F276AECu;
    // 7F276AEC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F276AF0:
    ctx->pc = 0x7F276AF0u;
    // 7F276AF0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F276AF0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276AF4:
    ctx->pc = 0x7F276AF4u;
    // 7F276AF4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276AF4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F276AF8:
    ctx->pc = 0x7F276AF8u;
    // 7F276AF8: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276AFC:
    ctx->pc = 0x7F276AFCu;
    // 7F276AFC: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F276B00:
    ctx->pc = 0x7F276B00u;
    // 7F276B00: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276B04:
    ctx->pc = 0x7F276B04u;
    // 7F276B04: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F276B08u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F276B08:
    ctx->pc = 0x7F276B08u;
    ctx->downcount -= 2;
    // 7F276B08: rlwinm. r31, r29, 0, 27, 27
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276B0C:
    ctx->pc = 0x7F276B0Cu;
    // 7F276B0C: bc    12, 2, 0x7F276B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276B5C;
        }
    }

label_7F276B10:
    ctx->pc = 0x7F276B10u;
    ctx->downcount -= 19;
    // 7F276B10: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276B14:
    ctx->pc = 0x7F276B14u;
    // 7F276B14: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F276B18:
    ctx->pc = 0x7F276B18u;
    // 7F276B18: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276B1C:
    ctx->pc = 0x7F276B1Cu;
    // 7F276B1C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F276B20:
    ctx->pc = 0x7F276B20u;
    // 7F276B20: stw     r26, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F276B24:
    ctx->pc = 0x7F276B24u;
    // 7F276B24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F276B28:
    ctx->pc = 0x7F276B28u;
    // 7F276B28: lfd     f1, 25032(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F276B28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276B2C:
    ctx->pc = 0x7F276B2Cu;
    // 7F276B2C: stw     r4, 656(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276B30:
    ctx->pc = 0x7F276B30u;
    // 7F276B30: stw     r3, 660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276B34:
    ctx->pc = 0x7F276B34u;
    // 7F276B34: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276B38:
    ctx->pc = 0x7F276B38u;
    // 7F276B38: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276B3C:
    ctx->pc = 0x7F276B3Cu;
    // 7F276B3C: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F276B40:
    ctx->pc = 0x7F276B40u;
    // 7F276B40: stw     r4, 664(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276B44:
    ctx->pc = 0x7F276B44u;
    // 7F276B44: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276B44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276B48:
    ctx->pc = 0x7F276B48u;
    // 7F276B48: stw     r3, 668(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276B4C:
    ctx->pc = 0x7F276B4Cu;
    // 7F276B4C: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276B4Cu)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F276B50:
    ctx->pc = 0x7F276B50u;
    // 7F276B50: stw     r0, 856(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276B54:
    ctx->pc = 0x7F276B54u;
    // 7F276B54: stw     r0, 860(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276B58:
    ctx->pc = 0x7F276B58u;
    // 7F276B58: b       0x7F276BF4
    {
            goto label_7F276BF4;
    }

label_7F276B5C:
    ctx->pc = 0x7F276B5Cu;
    ctx->downcount -= 7;
    // 7F276B5C: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276B60:
    ctx->pc = 0x7F276B60u;
    // 7F276B60: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276B64:
    ctx->pc = 0x7F276B64u;
    // 7F276B64: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276B68:
    ctx->pc = 0x7F276B68u;
    // 7F276B68: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F276B6C:
    ctx->pc = 0x7F276B6Cu;
    // 7F276B6C: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_7F276B70:
    ctx->pc = 0x7F276B70u;
    // 7F276B70: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F276B74:
    ctx->pc = 0x7F276B74u;
    // 7F276B74: bl      0x7F10B744
    {
            ctx->lr = 0x7F276B78u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F276B78:
    ctx->pc = 0x7F276B78u;
    ctx->downcount -= 3;
    // 7F276B78: cmplwi  r3, 0x0000
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

label_7F276B7C:
    ctx->pc = 0x7F276B7Cu;
    // 7F276B7C: stw     r3, 860(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276B80:
    ctx->pc = 0x7F276B80u;
    // 7F276B80: bc    12, 2, 0x7F276BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276BB0;
        }
    }

label_7F276B84:
    ctx->pc = 0x7F276B84u;
    ctx->downcount -= 2;
    // 7F276B84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276B88:
    ctx->pc = 0x7F276B88u;
    // 7F276B88: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F276B8Cu;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F276B8C:
    ctx->pc = 0x7F276B8Cu;
    ctx->downcount -= 2;
    // 7F276B8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276B90:
    ctx->pc = 0x7F276B90u;
    // 7F276B90: bl      0x7F3CC594
    {
            ctx->lr = 0x7F276B94u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F276B94:
    ctx->pc = 0x7F276B94u;
    ctx->downcount -= 3;
    // 7F276B94: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276B94u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F276B98:
    ctx->pc = 0x7F276B98u;
    // 7F276B98: addi    r3, r25, 656
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(656);

label_7F276B9C:
    ctx->pc = 0x7F276B9Cu;
    // 7F276B9C: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F276BA0u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F276BA0:
    ctx->pc = 0x7F276BA0u;
    ctx->downcount -= 3;
    // 7F276BA0: addi    r3, r25, 776
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(776);

label_7F276BA4:
    ctx->pc = 0x7F276BA4u;
    // 7F276BA4: addi    r4, r25, 856
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(856);

label_7F276BA8:
    ctx->pc = 0x7F276BA8u;
    // 7F276BA8: bl      0x7F10B784
    {
            ctx->lr = 0x7F276BACu;
            ctx->pc = 0x7F10B784u;
            return;
    }

label_7F276BAC:
    ctx->pc = 0x7F276BACu;
    ctx->downcount -= 1;
    // 7F276BAC: b       0x7F276BF4
    {
            goto label_7F276BF4;
    }

label_7F276BB0:
    ctx->pc = 0x7F276BB0u;
    ctx->downcount -= 17;
    // 7F276BB0: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276BB4:
    ctx->pc = 0x7F276BB4u;
    // 7F276BB4: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F276BB8:
    ctx->pc = 0x7F276BB8u;
    // 7F276BB8: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276BBC:
    ctx->pc = 0x7F276BBCu;
    // 7F276BBC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F276BC0:
    ctx->pc = 0x7F276BC0u;
    // 7F276BC0: stw     r26, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F276BC4:
    ctx->pc = 0x7F276BC4u;
    // 7F276BC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F276BC8:
    ctx->pc = 0x7F276BC8u;
    // 7F276BC8: lfd     f1, 25032(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F276BC8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276BCC:
    ctx->pc = 0x7F276BCCu;
    // 7F276BCC: stw     r4, 656(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276BD0:
    ctx->pc = 0x7F276BD0u;
    // 7F276BD0: stw     r3, 660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276BD4:
    ctx->pc = 0x7F276BD4u;
    // 7F276BD4: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F276BD8:
    ctx->pc = 0x7F276BD8u;
    // 7F276BD8: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276BDC:
    ctx->pc = 0x7F276BDCu;
    // 7F276BDC: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276BE0:
    ctx->pc = 0x7F276BE0u;
    // 7F276BE0: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276BE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276BE4:
    ctx->pc = 0x7F276BE4u;
    // 7F276BE4: stw     r4, 664(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276BE8:
    ctx->pc = 0x7F276BE8u;
    // 7F276BE8: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276BE8u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F276BEC:
    ctx->pc = 0x7F276BECu;
    // 7F276BEC: stw     r3, 668(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276BF0:
    ctx->pc = 0x7F276BF0u;
    // 7F276BF0: stw     r0, 856(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276BF4:
    ctx->pc = 0x7F276BF4u;
    ctx->downcount -= 31;
    // 7F276BF4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276BF8:
    ctx->pc = 0x7F276BF8u;
    // 7F276BF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276BFC:
    ctx->pc = 0x7F276BFCu;
    // 7F276BFC: stw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F276C00:
    ctx->pc = 0x7F276C00u;
    // 7F276C00: cmpwi   r31, 0
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

label_7F276C04:
    ctx->pc = 0x7F276C04u;
    // 7F276C04: lfd     f1, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276C04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276C08:
    ctx->pc = 0x7F276C08u;
    // 7F276C08: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276C0C:
    ctx->pc = 0x7F276C0Cu;
    // 7F276C0C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276C0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276C10:
    ctx->pc = 0x7F276C10u;
    // 7F276C10: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276C10u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F276C14:
    ctx->pc = 0x7F276C14u;
    // 7F276C14: fdivs   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F276C14u)) return;
    ppc_fdivs(ctx, 0, 31, 0);

label_7F276C18:
    ctx->pc = 0x7F276C18u;
    // 7F276C18: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F276C18u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F276C1C:
    ctx->pc = 0x7F276C1Cu;
    // 7F276C1C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276C1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F276C20:
    ctx->pc = 0x7F276C20u;
    // 7F276C20: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F276C24:
    ctx->pc = 0x7F276C24u;
    // 7F276C24: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F276C28:
    ctx->pc = 0x7F276C28u;
    // 7F276C28: sth     r0, 758(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(758);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F276C2C:
    ctx->pc = 0x7F276C2Cu;
    // 7F276C2C: bc    12, 2, 0x7F276C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276C40;
        }
    }

label_7F276C30:
    ctx->pc = 0x7F276C30u;
    ctx->downcount -= 4;
    // 7F276C30: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276C34:
    ctx->pc = 0x7F276C34u;
    // 7F276C34: ori     r0, r0, 0x0403
    ctx->gpr[0] = ctx->gpr[0] | 0x0403u;

label_7F276C38:
    ctx->pc = 0x7F276C38u;
    // 7F276C38: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F276C3C:
    ctx->pc = 0x7F276C3Cu;
    // 7F276C3C: b       0x7F276C80
    {
            goto label_7F276C80;
    }

label_7F276C40:
    ctx->pc = 0x7F276C40u;
    ctx->downcount -= 5;
    // 7F276C40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276C44:
    ctx->pc = 0x7F276C44u;
    // 7F276C44: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276C48:
    ctx->pc = 0x7F276C48u;
    // 7F276C48: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276C4C:
    ctx->pc = 0x7F276C4Cu;
    // 7F276C4C: rlwinm r6, r28, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0xFFFFFFFEu;
    }

label_7F276C50:
    ctx->pc = 0x7F276C50u;
    // 7F276C50: bl      0x7F023F7C
    {
            ctx->lr = 0x7F276C54u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F276C54:
    ctx->pc = 0x7F276C54u;
    ctx->downcount -= 11;
    // 7F276C54: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F276C58:
    ctx->pc = 0x7F276C58u;
    // 7F276C58: stw     r0, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276C5C:
    ctx->pc = 0x7F276C5Cu;
    // 7F276C5C: lwz     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276C60:
    ctx->pc = 0x7F276C60u;
    // 7F276C60: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_7F276C64:
    ctx->pc = 0x7F276C64u;
    // 7F276C64: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276C68:
    ctx->pc = 0x7F276C68u;
    // 7F276C68: lwz     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276C6C:
    ctx->pc = 0x7F276C6Cu;
    // 7F276C6C: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_7F276C70:
    ctx->pc = 0x7F276C70u;
    // 7F276C70: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276C74:
    ctx->pc = 0x7F276C74u;
    // 7F276C74: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276C78:
    ctx->pc = 0x7F276C78u;
    // 7F276C78: ori     r0, r0, 0x0102
    ctx->gpr[0] = ctx->gpr[0] | 0x0102u;

label_7F276C7C:
    ctx->pc = 0x7F276C7Cu;
    // 7F276C7C: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F276C80:
    ctx->pc = 0x7F276C80u;
    ctx->downcount -= 1;
    // 7F276C80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F276C84:
    ctx->pc = 0x7F276C84u;
    ctx->downcount -= 18;
    // 7F276C84: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F276C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F276C84u);
        if (ctx->exception) return;
    }

label_7F276C88:
    ctx->pc = 0x7F276C88u;
    // 7F276C88: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276C88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276C8C:
    ctx->pc = 0x7F276C8Cu;
    // 7F276C8C: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F276C90:
    ctx->pc = 0x7F276C90u;
    // 7F276C90: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276C94:
    ctx->pc = 0x7F276C94u;
    // 7F276C94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F276C98:
    ctx->pc = 0x7F276C98u;
    // 7F276C98: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F276C9C:
    ctx->pc = 0x7F276C9Cu;
    // 7F276C9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276CA0:
    ctx->pc = 0x7F276CA0u;
    ctx->downcount -= 33;
    // 7F276CA0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276CA4:
    ctx->pc = 0x7F276CA4u;
    // 7F276CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F276CA8:
    ctx->pc = 0x7F276CA8u;
    // 7F276CA8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276CAC:
    ctx->pc = 0x7F276CACu;
    // 7F276CAC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F276CB0:
    ctx->pc = 0x7F276CB0u;
    // 7F276CB0: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F276CB4:
    ctx->pc = 0x7F276CB4u;
    // 7F276CB4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276CB8:
    ctx->pc = 0x7F276CB8u;
    // 7F276CB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276CBC:
    ctx->pc = 0x7F276CBCu;
    // 7F276CBC: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F276CC0:
    ctx->pc = 0x7F276CC0u;
    // 7F276CC0: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F276CC4:
    ctx->pc = 0x7F276CC4u;
    // 7F276CC4: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F276CC8:
    ctx->pc = 0x7F276CC8u;
    // 7F276CC8: lfd     f1, 25032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276CC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25032);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276CCC:
    ctx->pc = 0x7F276CCCu;
    // 7F276CCC: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F276CD0:
    ctx->pc = 0x7F276CD0u;
    // 7F276CD0: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276CD4:
    ctx->pc = 0x7F276CD4u;
    // 7F276CD4: addi    r31, r26, 432
    ctx->gpr[31] = ctx->gpr[26] + (u32)(s32)(432);

label_7F276CD8:
    ctx->pc = 0x7F276CD8u;
    // 7F276CD8: addi    r30, r26, 624
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(624);

label_7F276CDC:
    ctx->pc = 0x7F276CDCu;
    // 7F276CDC: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F276CE0:
    ctx->pc = 0x7F276CE0u;
    // 7F276CE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F276CE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F276CE4:
    ctx->pc = 0x7F276CE4u;
    // 7F276CE4: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276CE8:
    ctx->pc = 0x7F276CE8u;
    // 7F276CE8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276CEC:
    ctx->pc = 0x7F276CECu;
    // 7F276CEC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F276CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F276CF0:
    ctx->pc = 0x7F276CF0u;
    // 7F276CF0: lhz     r0, 756(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F276CF4:
    ctx->pc = 0x7F276CF4u;
    // 7F276CF4: rlwinm. r0, r0, 0, 23, 23
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

label_7F276CF8:
    ctx->pc = 0x7F276CF8u;
    // 7F276CF8: bc    12, 2, 0x7F276D2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276D2C;
        }
    }

label_7F276CFC:
    ctx->pc = 0x7F276CFCu;
    ctx->downcount -= 11;
    // 7F276CFC: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F276D00:
    ctx->pc = 0x7F276D00u;
    // 7F276D00: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F276D04:
    ctx->pc = 0x7F276D04u;
    // 7F276D04: addi    r5, r5, 18308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18308);

label_7F276D08:
    ctx->pc = 0x7F276D08u;
    // 7F276D08: lis     r7, 1285
    ctx->gpr[7] = ((u32)(s32)(1285) << 16);

label_7F276D0C:
    ctx->pc = 0x7F276D0Cu;
    // 7F276D0C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276D10:
    ctx->pc = 0x7F276D10u;
    // 7F276D10: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F276D14:
    ctx->pc = 0x7F276D14u;
    // 7F276D14: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F276D18:
    ctx->pc = 0x7F276D18u;
    // 7F276D18: addi    r4, r7, 1024
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(1024);

label_7F276D1C:
    ctx->pc = 0x7F276D1Cu;
    // 7F276D1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276D20:
    ctx->pc = 0x7F276D20u;
    // 7F276D20: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F276D24:
    ctx->pc = 0x7F276D24u;
    // 7F276D24: bl      0x7F014788
    {
            ctx->lr = 0x7F276D28u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F276D28:
    ctx->pc = 0x7F276D28u;
    ctx->downcount -= 1;
    // 7F276D28: b       0x7F276D58
    {
            goto label_7F276D58;
    }

label_7F276D2C:
    ctx->pc = 0x7F276D2Cu;
    ctx->downcount -= 11;
    // 7F276D2C: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F276D30:
    ctx->pc = 0x7F276D30u;
    // 7F276D30: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F276D34:
    ctx->pc = 0x7F276D34u;
    // 7F276D34: addi    r5, r5, 18308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18308);

label_7F276D38:
    ctx->pc = 0x7F276D38u;
    // 7F276D38: lis     r7, 1281
    ctx->gpr[7] = ((u32)(s32)(1281) << 16);

label_7F276D3C:
    ctx->pc = 0x7F276D3Cu;
    // 7F276D3C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F276D40:
    ctx->pc = 0x7F276D40u;
    // 7F276D40: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F276D44:
    ctx->pc = 0x7F276D44u;
    // 7F276D44: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F276D48:
    ctx->pc = 0x7F276D48u;
    // 7F276D48: addi    r4, r7, 1024
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(1024);

label_7F276D4C:
    ctx->pc = 0x7F276D4Cu;
    // 7F276D4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276D50:
    ctx->pc = 0x7F276D50u;
    // 7F276D50: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F276D54:
    ctx->pc = 0x7F276D54u;
    // 7F276D54: bl      0x7F014788
    {
            ctx->lr = 0x7F276D58u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F276D58:
    ctx->pc = 0x7F276D58u;
    ctx->downcount -= 3;
    // 7F276D58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276D5C:
    ctx->pc = 0x7F276D5Cu;
    // 7F276D5C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276D60:
    ctx->pc = 0x7F276D60u;
    // 7F276D60: bl      0x7F01488C
    {
            ctx->lr = 0x7F276D64u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F276D64:
    ctx->pc = 0x7F276D64u;
    ctx->downcount -= 2;
    // 7F276D64: rlwinm. r0, r29, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F276D68:
    ctx->pc = 0x7F276D68u;
    // 7F276D68: bc    12, 2, 0x7F276D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276D94;
        }
    }

label_7F276D6C:
    ctx->pc = 0x7F276D6Cu;
    ctx->downcount -= 4;
    // 7F276D6C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276D70:
    ctx->pc = 0x7F276D70u;
    // 7F276D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F276D74:
    ctx->pc = 0x7F276D74u;
    // 7F276D74: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F276D78:
    ctx->pc = 0x7F276D78u;
    // 7F276D78: bl      0x8000E18C
    {
            ctx->lr = 0x7F276D7Cu;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F276D7C:
    ctx->pc = 0x7F276D7Cu;
    ctx->downcount -= 5;
    // 7F276D7C: lis     r0, 4096
    ctx->gpr[0] = ((u32)(s32)(4096) << 16);

label_7F276D80:
    ctx->pc = 0x7F276D80u;
    // 7F276D80: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F276D84:
    ctx->pc = 0x7F276D84u;
    // 7F276D84: or   r5, r3, r0
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F276D88:
    ctx->pc = 0x7F276D88u;
    // 7F276D88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276D8C:
    ctx->pc = 0x7F276D8Cu;
    // 7F276D8C: bl      0x7F014B60
    {
            ctx->lr = 0x7F276D90u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F276D90:
    ctx->pc = 0x7F276D90u;
    ctx->downcount -= 1;
    // 7F276D90: b       0x7F276DB4
    {
            goto label_7F276DB4;
    }

label_7F276D94:
    ctx->pc = 0x7F276D94u;
    ctx->downcount -= 4;
    // 7F276D94: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F276D98:
    ctx->pc = 0x7F276D98u;
    // 7F276D98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F276D9C:
    ctx->pc = 0x7F276D9Cu;
    // 7F276D9C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F276DA0:
    ctx->pc = 0x7F276DA0u;
    // 7F276DA0: bl      0x8000E18C
    {
            ctx->lr = 0x7F276DA4u;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F276DA4:
    ctx->pc = 0x7F276DA4u;
    ctx->downcount -= 4;
    // 7F276DA4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276DA8:
    ctx->pc = 0x7F276DA8u;
    // 7F276DA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276DAC:
    ctx->pc = 0x7F276DACu;
    // 7F276DAC: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F276DB0:
    ctx->pc = 0x7F276DB0u;
    // 7F276DB0: bl      0x7F014B60
    {
            ctx->lr = 0x7F276DB4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F276DB4:
    ctx->pc = 0x7F276DB4u;
    ctx->downcount -= 10;
    // 7F276DB4: lwz     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276DB8:
    ctx->pc = 0x7F276DB8u;
    // 7F276DB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276DBC:
    ctx->pc = 0x7F276DBCu;
    // 7F276DBC: lwz     r0, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276DC0:
    ctx->pc = 0x7F276DC0u;
    // 7F276DC0: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276DC4:
    ctx->pc = 0x7F276DC4u;
    // 7F276DC4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276DC8:
    ctx->pc = 0x7F276DC8u;
    // 7F276DC8: lwz     r4, 56(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F276DCC:
    ctx->pc = 0x7F276DCCu;
    // 7F276DCC: lwz     r0, 60(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276DD0:
    ctx->pc = 0x7F276DD0u;
    // 7F276DD0: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276DD4:
    ctx->pc = 0x7F276DD4u;
    // 7F276DD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276DD8:
    ctx->pc = 0x7F276DD8u;
    // 7F276DD8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F276DDCu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F276DDC:
    ctx->pc = 0x7F276DDCu;
    ctx->downcount -= 4;
    // 7F276DDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F276DE0:
    ctx->pc = 0x7F276DE0u;
    // 7F276DE0: lfs     f2, 25040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F276DE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F276DE4:
    ctx->pc = 0x7F276DE4u;
    // 7F276DE4: fcmpo   cr0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F276DE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[2], true);

label_7F276DE8:
    ctx->pc = 0x7F276DE8u;
    // 7F276DE8: bc    4, 1, 0x7F276E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276E00;
        }
    }

label_7F276DEC:
    ctx->pc = 0x7F276DECu;
    ctx->downcount -= 5;
    // 7F276DEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F276DF0:
    ctx->pc = 0x7F276DF0u;
    // 7F276DF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276DF4:
    ctx->pc = 0x7F276DF4u;
    // 7F276DF4: lfs     f1, 25008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F276DF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F276DF8:
    ctx->pc = 0x7F276DF8u;
    // 7F276DF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276DFC:
    ctx->pc = 0x7F276DFCu;
    // 7F276DFC: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F276E00u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F276E00:
    ctx->pc = 0x7F276E00u;
    ctx->downcount -= 8;
    // 7F276E00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276E04:
    ctx->pc = 0x7F276E04u;
    // 7F276E04: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F276E08:
    ctx->pc = 0x7F276E08u;
    // 7F276E08: rlwinm r8, r27, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x0000FFFFu;
    }

label_7F276E0C:
    ctx->pc = 0x7F276E0Cu;
    // 7F276E0C: addi    r9, r1, 8
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(8);

label_7F276E10:
    ctx->pc = 0x7F276E10u;
    // 7F276E10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F276E14:
    ctx->pc = 0x7F276E14u;
    // 7F276E14: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F276E18:
    ctx->pc = 0x7F276E18u;
    // 7F276E18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F276E1C:
    ctx->pc = 0x7F276E1Cu;
    // 7F276E1C: bl      0x7F014B78
    {
            ctx->lr = 0x7F276E20u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F276E20:
    ctx->pc = 0x7F276E20u;
    ctx->downcount -= 5;
    // 7F276E20: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F276E24:
    ctx->pc = 0x7F276E24u;
    // 7F276E24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F276E28:
    ctx->pc = 0x7F276E28u;
    // 7F276E28: addi    r4, r4, 24724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24724);

label_7F276E2C:
    ctx->pc = 0x7F276E2Cu;
    // 7F276E2C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F276E30:
    ctx->pc = 0x7F276E30u;
    // 7F276E30: bl      0x7F014B6C
    {
            ctx->lr = 0x7F276E34u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F276E34:
    ctx->pc = 0x7F276E34u;
    ctx->downcount -= 16;
    // 7F276E34: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F276E38:
    ctx->pc = 0x7F276E38u;
    // 7F276E38: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F276E3C:
    ctx->pc = 0x7F276E3Cu;
    // 7F276E3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F276E40:
    ctx->pc = 0x7F276E40u;
    // 7F276E40: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F276E44:
    ctx->pc = 0x7F276E44u;
    // 7F276E44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F276E48:
    ctx->pc = 0x7F276E48u;
    ctx->downcount -= 22;
    // 7F276E48: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F276E4C:
    ctx->pc = 0x7F276E4Cu;
    // 7F276E4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F276E50:
    ctx->pc = 0x7F276E50u;
    // 7F276E50: lis     r5, 17
    ctx->gpr[5] = ((u32)(s32)(17) << 16);

label_7F276E54:
    ctx->pc = 0x7F276E54u;
    // 7F276E54: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F276E58:
    ctx->pc = 0x7F276E58u;
    // 7F276E58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276E5C:
    ctx->pc = 0x7F276E5Cu;
    // 7F276E5C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F276E60:
    ctx->pc = 0x7F276E60u;
    // 7F276E60: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F276E64:
    ctx->pc = 0x7F276E64u;
    // 7F276E64: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F276E68:
    ctx->pc = 0x7F276E68u;
    // 7F276E68: addi    r3, r5, 1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1);

label_7F276E6C:
    ctx->pc = 0x7F276E6Cu;
    // 7F276E6C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F276E70:
    ctx->pc = 0x7F276E70u;
    // 7F276E70: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F276E74:
    ctx->pc = 0x7F276E74u;
    // 7F276E74: bl      0x7F3C2408
    {
            ctx->lr = 0x7F276E78u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F276E78:
    ctx->pc = 0x7F276E78u;
    ctx->downcount -= 3;
    // 7F276E78: or.   r31, r3, r3
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

label_7F276E7C:
    ctx->pc = 0x7F276E7Cu;
    // 7F276E7C: stw     r3, 752(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(752);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F276E80:
    ctx->pc = 0x7F276E80u;
    // 7F276E80: bc    4, 2, 0x7F276E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F276E8C;
        }
    }

label_7F276E84:
    ctx->pc = 0x7F276E84u;
    ctx->downcount -= 2;
    // 7F276E84: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F276E88:
    ctx->pc = 0x7F276E88u;
    // 7F276E88: b       0x7F277080
    {
            goto label_7F277080;
    }

label_7F276E8C:
    ctx->pc = 0x7F276E8Cu;
    ctx->downcount -= 13;
    // 7F276E8C: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F276E90:
    ctx->pc = 0x7F276E90u;
    // 7F276E90: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F276E94:
    ctx->pc = 0x7F276E94u;
    // 7F276E94: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F276E98:
    ctx->pc = 0x7F276E98u;
    // 7F276E98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F276E9C:
    ctx->pc = 0x7F276E9Cu;
    // 7F276E9C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_7F276EA0:
    ctx->pc = 0x7F276EA0u;
    // 7F276EA0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F276EA4:
    ctx->pc = 0x7F276EA4u;
    // 7F276EA4: stw     r4, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F276EA8:
    ctx->pc = 0x7F276EA8u;
    // 7F276EA8: rlwinm r0, r30, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000040u;
    }

label_7F276EAC:
    ctx->pc = 0x7F276EACu;
    // 7F276EAC: rlwinm r5, r30, 0, 21, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000400u;
    }

label_7F276EB0:
    ctx->pc = 0x7F276EB0u;
    // 7F276EB0: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F276EB4:
    ctx->pc = 0x7F276EB4u;
    // 7F276EB4: addi    r8, r7, -28673
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-28673);

label_7F276EB8:
    ctx->pc = 0x7F276EB8u;
    // 7F276EB8: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F276EBC:
    ctx->downcount -= 29;
    // 7F276EBC: add   r7, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F276EC0:
    ctx->pc = 0x7F276EC0u;
    // 7F276EC0: lwz     r9, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276EC4:
    ctx->pc = 0x7F276EC4u;
    // 7F276EC4: lwz     r6, 192(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F276EC8:
    // 7F276EC8: cmpwi   r0, 0
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

label_7F276ECC:
    ctx->pc = 0x7F276ECCu;
    // 7F276ECC: lwz     r10, 184(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(184);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F276ED0:
    ctx->pc = 0x7F276ED0u;
    // 7F276ED0: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276ED4:
    ctx->pc = 0x7F276ED4u;
    // 7F276ED4: stw     r9, 32(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276ED8:
    ctx->pc = 0x7F276ED8u;
    // 7F276ED8: stw     r7, 36(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276EDC:
    ctx->pc = 0x7F276EDCu;
    // 7F276EDC: lwz     r9, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276EE0:
    ctx->pc = 0x7F276EE0u;
    // 7F276EE0: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276EE4:
    ctx->pc = 0x7F276EE4u;
    // 7F276EE4: stw     r9, 40(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276EE8:
    ctx->pc = 0x7F276EE8u;
    // 7F276EE8: stw     r7, 44(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276EEC:
    ctx->pc = 0x7F276EECu;
    // 7F276EEC: lwz     r9, 32(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276EF0:
    ctx->pc = 0x7F276EF0u;
    // 7F276EF0: lwz     r7, 36(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276EF4:
    ctx->pc = 0x7F276EF4u;
    // 7F276EF4: stw     r9, 16(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276EF8:
    ctx->pc = 0x7F276EF8u;
    // 7F276EF8: stw     r7, 20(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276EFC:
    ctx->pc = 0x7F276EFCu;
    // 7F276EFC: lwz     r9, 40(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(40);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276F00:
    ctx->pc = 0x7F276F00u;
    // 7F276F00: lwz     r7, 44(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276F04:
    ctx->pc = 0x7F276F04u;
    // 7F276F04: stw     r9, 24(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276F08:
    ctx->pc = 0x7F276F08u;
    // 7F276F08: stw     r7, 28(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276F0C:
    ctx->pc = 0x7F276F0Cu;
    // 7F276F0C: lwz     r9, 16(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276F10:
    ctx->pc = 0x7F276F10u;
    // 7F276F10: lwz     r7, 20(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276F14:
    ctx->pc = 0x7F276F14u;
    // 7F276F14: stw     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276F18:
    ctx->pc = 0x7F276F18u;
    // 7F276F18: stw     r7, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276F1C:
    ctx->pc = 0x7F276F1Cu;
    // 7F276F1C: lwz     r9, 24(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F276F20:
    ctx->pc = 0x7F276F20u;
    // 7F276F20: lwz     r7, 28(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F276F24:
    ctx->pc = 0x7F276F24u;
    // 7F276F24: stw     r9, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F276F28:
    ctx->pc = 0x7F276F28u;
    // 7F276F28: stw     r7, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F276F2C:
    // 7F276F2C: bc    12, 2, 0x7F276F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276F74;
        }
    }

label_7F276F30:
    ctx->downcount -= 17;
    // 7F276F30: li      r11, 64
    ctx->gpr[11] = (u32)(s32)(64);

label_7F276F34:
    // 7F276F34: li      r10, 164
    ctx->gpr[10] = (u32)(s32)(164);

label_7F276F38:
    ctx->pc = 0x7F276F38u;
    // 7F276F38: stb     r11, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276F3C:
    // 7F276F3C: li      r9, 32
    ctx->gpr[9] = (u32)(s32)(32);

label_7F276F40:
    // 7F276F40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F276F44:
    ctx->pc = 0x7F276F44u;
    // 7F276F44: stb     r11, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276F48:
    ctx->pc = 0x7F276F48u;
    // 7F276F48: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276F4C:
    ctx->pc = 0x7F276F4Cu;
    // 7F276F4C: stb     r10, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F50:
    ctx->pc = 0x7F276F50u;
    // 7F276F50: stb     r10, 13(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F54:
    ctx->pc = 0x7F276F54u;
    // 7F276F54: stb     r10, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F58:
    ctx->pc = 0x7F276F58u;
    // 7F276F58: stb     r9, 26(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276F5C:
    ctx->pc = 0x7F276F5Cu;
    // 7F276F5C: stb     r9, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276F60:
    ctx->pc = 0x7F276F60u;
    // 7F276F60: stb     r9, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276F64:
    ctx->pc = 0x7F276F64u;
    // 7F276F64: stb     r7, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276F68:
    ctx->pc = 0x7F276F68u;
    // 7F276F68: stb     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276F6C:
    ctx->pc = 0x7F276F6Cu;
    // 7F276F6C: stb     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276F70:
    // 7F276F70: b       0x7F277020
    {
            goto label_7F277020;
    }

label_7F276F74:
    ctx->downcount -= 2;
    // 7F276F74: cmpwi   r5, 0
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

label_7F276F78:
    // 7F276F78: bc    12, 2, 0x7F276FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F276FBC;
        }
    }

label_7F276F7C:
    ctx->downcount -= 16;
    // 7F276F7C: li      r10, 255
    ctx->gpr[10] = (u32)(s32)(255);

label_7F276F80:
    // 7F276F80: li      r9, 64
    ctx->gpr[9] = (u32)(s32)(64);

label_7F276F84:
    ctx->pc = 0x7F276F84u;
    // 7F276F84: stb     r10, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F88:
    // 7F276F88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F276F8C:
    ctx->pc = 0x7F276F8Cu;
    // 7F276F8C: stb     r10, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F90:
    ctx->pc = 0x7F276F90u;
    // 7F276F90: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276F94:
    ctx->pc = 0x7F276F94u;
    // 7F276F94: stb     r9, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276F98:
    ctx->pc = 0x7F276F98u;
    // 7F276F98: stb     r9, 13(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276F9C:
    ctx->pc = 0x7F276F9Cu;
    // 7F276F9C: stb     r9, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FA0:
    ctx->pc = 0x7F276FA0u;
    // 7F276FA0: stb     r9, 26(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FA4:
    ctx->pc = 0x7F276FA4u;
    // 7F276FA4: stb     r9, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FA8:
    ctx->pc = 0x7F276FA8u;
    // 7F276FA8: stb     r9, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FAC:
    ctx->pc = 0x7F276FACu;
    // 7F276FAC: stb     r7, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276FB0:
    ctx->pc = 0x7F276FB0u;
    // 7F276FB0: stb     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276FB4:
    ctx->pc = 0x7F276FB4u;
    // 7F276FB4: stb     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F276FB8:
    // 7F276FB8: b       0x7F277020
    {
            goto label_7F277020;
    }

label_7F276FBC:
    ctx->downcount -= 25;
    // 7F276FBC: li      r11, 130
    ctx->gpr[11] = (u32)(s32)(130);

label_7F276FC0:
    // 7F276FC0: li      r10, 85
    ctx->gpr[10] = (u32)(s32)(85);

label_7F276FC4:
    ctx->pc = 0x7F276FC4u;
    // 7F276FC4: stb     r11, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276FC8:
    // 7F276FC8: li      r9, 42
    ctx->gpr[9] = (u32)(s32)(42);

label_7F276FCC:
    // 7F276FCC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F276FD0:
    ctx->pc = 0x7F276FD0u;
    // 7F276FD0: stb     r11, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276FD4:
    ctx->pc = 0x7F276FD4u;
    // 7F276FD4: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F276FD8:
    ctx->pc = 0x7F276FD8u;
    // 7F276FD8: stb     r10, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276FDC:
    ctx->pc = 0x7F276FDCu;
    // 7F276FDC: stb     r10, 13(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276FE0:
    ctx->pc = 0x7F276FE0u;
    // 7F276FE0: stb     r10, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F276FE4:
    ctx->pc = 0x7F276FE4u;
    // 7F276FE4: stb     r9, 26(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FE8:
    ctx->pc = 0x7F276FE8u;
    // 7F276FE8: stb     r9, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FEC:
    ctx->pc = 0x7F276FECu;
    // 7F276FEC: stb     r9, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FF0:
    ctx->pc = 0x7F276FF0u;
    // 7F276FF0: lbz     r9, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F276FF4:
    // 7F276FF4: rlwinm r9, r9, 31, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 31u) & 0x000000FFu;
    }

label_7F276FF8:
    ctx->pc = 0x7F276FF8u;
    // 7F276FF8: stb     r9, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F276FFC:
    ctx->pc = 0x7F276FFCu;
    // 7F276FFC: lbz     r9, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F277000:
    // 7F277000: rlwinm r9, r9, 31, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 31u) & 0x000000FFu;
    }

label_7F277004:
    ctx->pc = 0x7F277004u;
    // 7F277004: stb     r9, 13(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F277008:
    ctx->pc = 0x7F277008u;
    // 7F277008: lbz     r9, 26(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(26);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F27700C:
    // 7F27700C: rlwinm r9, r9, 31, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 31u) & 0x000000FFu;
    }

label_7F277010:
    ctx->pc = 0x7F277010u;
    // 7F277010: stb     r9, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F277014:
    ctx->pc = 0x7F277014u;
    // 7F277014: stb     r7, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F277018:
    ctx->pc = 0x7F277018u;
    // 7F277018: stb     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27701C:
    ctx->pc = 0x7F27701Cu;
    // 7F27701C: stb     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F277020:
    ctx->downcount -= 16;
    // 7F277020: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F277024:
    // 7F277024: li      r11, 64
    ctx->gpr[11] = (u32)(s32)(64);

label_7F277028:
    ctx->pc = 0x7F277028u;
    // 7F277028: stb     r7, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27702C:
    // 7F27702C: li      r10, 128
    ctx->gpr[10] = (u32)(s32)(128);

label_7F277030:
    // 7F277030: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

label_7F277034:
    // 7F277034: li      r7, 4095
    ctx->gpr[7] = (u32)(s32)(4095);

label_7F277038:
    ctx->pc = 0x7F277038u;
    // 7F277038: stb     r11, 15(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F27703C:
    // 7F27703C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F277040:
    ctx->pc = 0x7F277040u;
    // 7F277040: stb     r10, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F277044:
    ctx->pc = 0x7F277044u;
    // 7F277044: sth     r9, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F277048:
    ctx->pc = 0x7F277048u;
    // 7F277048: sth     r9, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F27704C:
    ctx->pc = 0x7F27704Cu;
    // 7F27704C: sth     r9, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F277050:
    ctx->pc = 0x7F277050u;
    // 7F277050: sth     r8, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F277054:
    ctx->pc = 0x7F277054u;
    // 7F277054: sth     r7, 22(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F277058:
    ctx->pc = 0x7F277058u;
    // 7F277058: sth     r7, 34(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F27705C:
    // 7F27705C: bc    16, 0, 0x7F276EBC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276EBCu;
                return;
            }
            goto label_7F276EBC;
        }
    }

label_7F277060:
    ctx->pc = 0x7F277060u;
    ctx->downcount -= 4;
    // 7F277060: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F277064:
    ctx->pc = 0x7F277064u;
    // 7F277064: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277068:
    ctx->pc = 0x7F277068u;
    // 7F277068: addi    r3, r3, 12924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12924);

label_7F27706C:
    ctx->pc = 0x7F27706Cu;
    // 7F27706C: bl      0x80025A3C
    {
            ctx->lr = 0x7F277070u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F277070:
    ctx->pc = 0x7F277070u;
    ctx->downcount -= 4;
    // 7F277070: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277074:
    ctx->pc = 0x7F277074u;
    // 7F277074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277078:
    ctx->pc = 0x7F277078u;
    // 7F277078: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27707C:
    ctx->pc = 0x7F27707Cu;
    // 7F27707C: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277080:
    ctx->pc = 0x7F277080u;
    ctx->downcount -= 16;
    // 7F277080: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F277084:
    ctx->pc = 0x7F277084u;
    // 7F277084: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277088:
    ctx->pc = 0x7F277088u;
    // 7F277088: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27708C:
    ctx->pc = 0x7F27708Cu;
    // 7F27708C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F277090:
    ctx->pc = 0x7F277090u;
    // 7F277090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277094:
    ctx->pc = 0x7F277094u;
    ctx->downcount -= 9;
    // 7F277094: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277098:
    ctx->pc = 0x7F277098u;
    // 7F277098: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27709C:
    ctx->pc = 0x7F27709Cu;
    // 7F27709C: lis     r4, 81
    ctx->gpr[4] = ((u32)(s32)(81) << 16);

label_7F2770A0:
    ctx->pc = 0x7F2770A0u;
    // 7F2770A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2770A4:
    ctx->pc = 0x7F2770A4u;
    // 7F2770A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2770A8:
    ctx->pc = 0x7F2770A8u;
    // 7F2770A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2770AC:
    ctx->pc = 0x7F2770ACu;
    // 7F2770AC: addi    r3, r4, 12159
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(12159);

label_7F2770B0:
    ctx->pc = 0x7F2770B0u;
    // 7F2770B0: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2770B4:
    ctx->pc = 0x7F2770B4u;
    // 7F2770B4: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2770B8u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2770B8:
    ctx->pc = 0x7F2770B8u;
    ctx->downcount -= 1;
    // 7F2770B8: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2770BCu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2770BC:
    ctx->pc = 0x7F2770BCu;
    ctx->downcount -= 3;
    // 7F2770BC: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_7F2770C0:
    ctx->pc = 0x7F2770C0u;
    // 7F2770C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2770C4:
    ctx->pc = 0x7F2770C4u;
    // 7F2770C4: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F2770C8u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F2770C8:
    ctx->pc = 0x7F2770C8u;
    ctx->downcount -= 4;
    // 7F2770C8: stw     r3, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2770CC:
    ctx->pc = 0x7F2770CCu;
    // 7F2770CC: lwz     r3, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2770D0:
    ctx->pc = 0x7F2770D0u;
    // 7F2770D0: cmplwi  r3, 0x0000
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

label_7F2770D4:
    ctx->pc = 0x7F2770D4u;
    // 7F2770D4: bc    4, 2, 0x7F2770E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2770E0;
        }
    }

label_7F2770D8:
    ctx->pc = 0x7F2770D8u;
    ctx->downcount -= 2;
    // 7F2770D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2770DC:
    ctx->pc = 0x7F2770DCu;
    // 7F2770DC: b       0x7F2770E8
    {
            goto label_7F2770E8;
    }

label_7F2770E0:
    ctx->pc = 0x7F2770E0u;
    ctx->downcount -= 1;
    // 7F2770E0: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F2770E4u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F2770E4:
    ctx->pc = 0x7F2770E4u;
    ctx->downcount -= 1;
    // 7F2770E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2770E8:
    ctx->pc = 0x7F2770E8u;
    ctx->downcount -= 6;
    // 7F2770E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2770EC:
    ctx->pc = 0x7F2770ECu;
    // 7F2770EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2770F0:
    ctx->pc = 0x7F2770F0u;
    // 7F2770F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2770F4:
    ctx->pc = 0x7F2770F4u;
    // 7F2770F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2770F8:
    ctx->pc = 0x7F2770F8u;
    // 7F2770F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2770FC:
    ctx->pc = 0x7F2770FCu;
    ctx->downcount -= 29;
    // 7F2770FC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277100:
    ctx->pc = 0x7F277100u;
    // 7F277100: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277104:
    ctx->pc = 0x7F277104u;
    // 7F277104: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277108:
    ctx->pc = 0x7F277108u;
    // 7F277108: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F27710C:
    ctx->pc = 0x7F27710Cu;
    // 7F27710C: stmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F277110:
    ctx->pc = 0x7F277110u;
    // 7F277110: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277114:
    ctx->pc = 0x7F277114u;
    // 7F277114: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F277118:
    ctx->pc = 0x7F277118u;
    // 7F277118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27711C:
    ctx->pc = 0x7F27711Cu;
    // 7F27711C: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F277120:
    ctx->pc = 0x7F277120u;
    // 7F277120: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F277124:
    ctx->pc = 0x7F277124u;
    // 7F277124: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F277128:
    ctx->pc = 0x7F277128u;
    // 7F277128: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F27712C:
    ctx->pc = 0x7F27712Cu;
    // 7F27712C: or   r30, r9, r9
    {
        ctx->gpr[30] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F277130:
    ctx->pc = 0x7F277130u;
    // 7F277130: addi    r5, r24, 684
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(684);

label_7F277134:
    ctx->pc = 0x7F277134u;
    // 7F277134: addi    r4, r25, -4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(-4);

label_7F277138:
    ctx->pc = 0x7F277138u;
    // 7F277138: lwz     r31, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27713C:
    ctx->pc = 0x7F27713Cu;
    // 7F27713C: sth     r3, 762(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(762);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F277140:
    ctx->pc = 0x7F277140u;
    // 7F277140: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F277144:
    loop_7F277144(ctx);
    if (ctx->pc == 0x7F277158u) goto label_7F277158;
    return;
label_7F277148:
    ctx->pc = 0x7F277148u;
    // 7F277148: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F27714C:
    ctx->pc = 0x7F27714Cu;
    // 7F27714C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277150:
    ctx->pc = 0x7F277150u;
    // 7F277150: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F277154:
    // 7F277154: bc    16, 0, 0x7F277144
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277144u;
                return;
            }
            goto label_7F277144;
        }
    }

label_7F277158:
    ctx->pc = 0x7F277158u;
    ctx->downcount -= 3;
    // 7F277158: rlwinm. r0, r26, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27715C:
    ctx->pc = 0x7F27715Cu;
    // 7F27715C: sth     r26, 756(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(756);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F277160:
    ctx->pc = 0x7F277160u;
    // 7F277160: bc    12, 2, 0x7F2771C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2771C0;
        }
    }

label_7F277164:
    ctx->pc = 0x7F277164u;
    ctx->downcount -= 22;
    // 7F277164: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F277168:
    ctx->pc = 0x7F277168u;
    // 7F277168: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27716C:
    ctx->pc = 0x7F27716Cu;
    // 7F27716C: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F277170:
    ctx->pc = 0x7F277170u;
    // 7F277170: addi    r4, r3, 25032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25032);

label_7F277174:
    ctx->pc = 0x7F277174u;
    // 7F277174: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F277178:
    ctx->pc = 0x7F277178u;
    // 7F277178: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27717C:
    ctx->pc = 0x7F27717Cu;
    // 7F27717C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277180:
    ctx->pc = 0x7F277180u;
    // 7F277180: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F277180u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F277184:
    ctx->pc = 0x7F277184u;
    // 7F277184: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F277184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F277188:
    ctx->pc = 0x7F277188u;
    // 7F277188: lfs     f2, 25044(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F277188u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(25044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27718C:
    ctx->pc = 0x7F27718Cu;
    // 7F27718C: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F27718Cu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F277190:
    ctx->pc = 0x7F277190u;
    // 7F277190: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F277194:
    ctx->pc = 0x7F277194u;
    // 7F277194: lfd     f1, 25048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F277194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25048);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F277198:
    ctx->pc = 0x7F277198u;
    // 7F277198: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27719C:
    ctx->pc = 0x7F27719Cu;
    // 7F27719C: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27719Cu)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_7F2771A0:
    ctx->pc = 0x7F2771A0u;
    // 7F2771A0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2771A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2771A4:
    ctx->pc = 0x7F2771A4u;
    // 7F2771A4: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2771A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F2771A8:
    ctx->pc = 0x7F2771A8u;
    // 7F2771A8: fsub   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2771A8u)) return;
    ppc_fsub(ctx, 0, 0, 3);

label_7F2771AC:
    ctx->pc = 0x7F2771ACu;
    // 7F2771AC: stfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2771ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F2771B0:
    ctx->pc = 0x7F2771B0u;
    // 7F2771B0: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2771B0u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_7F2771B4:
    ctx->pc = 0x7F2771B4u;
    // 7F2771B4: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2771B8:
    ctx->pc = 0x7F2771B8u;
    // 7F2771B8: bl      0x8000DBEC
    {
            ctx->lr = 0x7F2771BCu;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F2771BC:
    ctx->pc = 0x7F2771BCu;
    ctx->downcount -= 1;
    // 7F2771BC: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2771C0:
    ctx->pc = 0x7F2771C0u;
    ctx->downcount -= 5;
    // 7F2771C0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2771C4:
    ctx->pc = 0x7F2771C4u;
    // 7F2771C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2771C8:
    ctx->pc = 0x7F2771C8u;
    // 7F2771C8: or   r5, r10, r10
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F2771CC:
    ctx->pc = 0x7F2771CCu;
    // 7F2771CC: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2771D0:
    ctx->pc = 0x7F2771D0u;
    // 7F2771D0: bl      0x7F2768D8
    {
            ctx->lr = 0x7F2771D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2768D8u;
                return;
            }
            goto label_7F2768D8;
    }

label_7F2771D4:
    ctx->pc = 0x7F2771D4u;
    ctx->downcount -= 2;
    // 7F2771D4: cmpwi   r3, 0
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

label_7F2771D8:
    ctx->pc = 0x7F2771D8u;
    // 7F2771D8: bc    4, 0, 0x7F2771E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2771E4;
        }
    }

label_7F2771DC:
    ctx->pc = 0x7F2771DCu;
    ctx->downcount -= 2;
    // 7F2771DC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2771E0:
    ctx->pc = 0x7F2771E0u;
    // 7F2771E0: b       0x7F277268
    {
            goto label_7F277268;
    }

label_7F2771E4:
    ctx->pc = 0x7F2771E4u;
    ctx->downcount -= 7;
    // 7F2771E4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2771E8:
    ctx->pc = 0x7F2771E8u;
    // 7F2771E8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2771EC:
    ctx->pc = 0x7F2771ECu;
    // 7F2771EC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2771F0:
    ctx->pc = 0x7F2771F0u;
    // 7F2771F0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2771F4:
    ctx->pc = 0x7F2771F4u;
    // 7F2771F4: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2771F8:
    ctx->pc = 0x7F2771F8u;
    // 7F2771F8: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2771FC:
    ctx->pc = 0x7F2771FCu;
    // 7F2771FC: bl      0x7F276CA0
    {
            ctx->lr = 0x7F277200u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276CA0u;
                return;
            }
            goto label_7F276CA0;
    }

label_7F277200:
    ctx->pc = 0x7F277200u;
    ctx->downcount -= 2;
    // 7F277200: rlwinm. r3, r26, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F277204:
    ctx->pc = 0x7F277204u;
    // 7F277204: bc    12, 2, 0x7F277238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277238;
        }
    }

label_7F277208:
    ctx->pc = 0x7F277208u;
    ctx->downcount -= 3;
    // 7F277208: lhz     r0, 756(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(756);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27720C:
    ctx->pc = 0x7F27720Cu;
    // 7F27720C: rlwinm. r0, r0, 0, 16, 16
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

label_7F277210:
    ctx->pc = 0x7F277210u;
    // 7F277210: bc    12, 2, 0x7F277238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277238;
        }
    }

label_7F277214:
    ctx->pc = 0x7F277214u;
    ctx->downcount -= 5;
    // 7F277214: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F277218:
    ctx->pc = 0x7F277218u;
    // 7F277218: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27721C:
    ctx->pc = 0x7F27721Cu;
    // 7F27721C: sth     r0, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F277220:
    ctx->pc = 0x7F277220u;
    // 7F277220: sth     r0, 76(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(76);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F277224:
    ctx->pc = 0x7F277224u;
    // 7F277224: bl      0x7F277094
    {
            ctx->lr = 0x7F277228u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277094u;
                return;
            }
            goto label_7F277094;
    }

label_7F277228:
    ctx->pc = 0x7F277228u;
    ctx->downcount -= 2;
    // 7F277228: cmpwi   r3, 0
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

label_7F27722C:
    ctx->pc = 0x7F27722Cu;
    // 7F27722C: bc    4, 0, 0x7F277264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277264;
        }
    }

label_7F277230:
    ctx->pc = 0x7F277230u;
    ctx->downcount -= 2;
    // 7F277230: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F277234:
    ctx->pc = 0x7F277234u;
    // 7F277234: b       0x7F277268
    {
            goto label_7F277268;
    }

label_7F277238:
    ctx->pc = 0x7F277238u;
    ctx->downcount -= 2;
    // 7F277238: cmplwi  r3, 0x0000
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

label_7F27723C:
    ctx->pc = 0x7F27723Cu;
    // 7F27723C: bc    12, 2, 0x7F277264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277264;
        }
    }

label_7F277240:
    ctx->pc = 0x7F277240u;
    ctx->downcount -= 5;
    // 7F277240: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F277244:
    ctx->pc = 0x7F277244u;
    // 7F277244: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F277248:
    ctx->pc = 0x7F277248u;
    // 7F277248: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27724C:
    ctx->pc = 0x7F27724Cu;
    // 7F27724C: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F277250:
    ctx->pc = 0x7F277250u;
    // 7F277250: bl      0x7F276E48
    {
            ctx->lr = 0x7F277254u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F276E48u;
                return;
            }
            goto label_7F276E48;
    }

label_7F277254:
    ctx->pc = 0x7F277254u;
    ctx->downcount -= 2;
    // 7F277254: cmpwi   r3, 0
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

label_7F277258:
    ctx->pc = 0x7F277258u;
    // 7F277258: bc    4, 0, 0x7F277264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277264;
        }
    }

label_7F27725C:
    ctx->pc = 0x7F27725Cu;
    ctx->downcount -= 2;
    // 7F27725C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F277260:
    ctx->pc = 0x7F277260u;
    // 7F277260: b       0x7F277268
    {
            goto label_7F277268;
    }

label_7F277264:
    ctx->pc = 0x7F277264u;
    ctx->downcount -= 1;
    // 7F277264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277268:
    ctx->pc = 0x7F277268u;
    ctx->downcount -= 16;
    // 7F277268: lmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27726C:
    ctx->pc = 0x7F27726Cu;
    // 7F27726C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277270:
    ctx->pc = 0x7F277270u;
    // 7F277270: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277274:
    ctx->pc = 0x7F277274u;
    // 7F277274: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F277278:
    ctx->pc = 0x7F277278u;
    // 7F277278: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27727C:
    ctx->pc = 0x7F27727Cu;
    ctx->downcount -= 27;
    // 7F27727C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277280:
    ctx->pc = 0x7F277280u;
    // 7F277280: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277284:
    ctx->pc = 0x7F277284u;
    // 7F277284: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277288:
    ctx->pc = 0x7F277288u;
    // 7F277288: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27728C:
    ctx->pc = 0x7F27728Cu;
    // 7F27728C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277290:
    ctx->pc = 0x7F277290u;
    // 7F277290: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F277294:
    ctx->pc = 0x7F277294u;
    // 7F277294: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F277298:
    ctx->pc = 0x7F277298u;
    // 7F277298: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27729C:
    ctx->pc = 0x7F27729Cu;
    // 7F27729C: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2772A0:
    ctx->pc = 0x7F2772A0u;
    // 7F2772A0: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2772A4:
    ctx->pc = 0x7F2772A4u;
    // 7F2772A4: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2772A8:
    ctx->pc = 0x7F2772A8u;
    // 7F2772A8: or   r30, r10, r10
    {
        ctx->gpr[30] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F2772AC:
    ctx->pc = 0x7F2772ACu;
    // 7F2772AC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F2772B0:
    ctx->pc = 0x7F2772B0u;
    // 7F2772B0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2772B4:
    ctx->pc = 0x7F2772B4u;
    // 7F2772B4: li      r5, 880
    ctx->gpr[5] = (u32)(s32)(880);

label_7F2772B8:
    ctx->pc = 0x7F2772B8u;
    // 7F2772B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2772BC:
    ctx->pc = 0x7F2772BCu;
    // 7F2772BC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2772C0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2772C0:
    ctx->pc = 0x7F2772C0u;
    ctx->downcount -= 2;
    // 7F2772C0: or.   r31, r3, r3
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

label_7F2772C4:
    ctx->pc = 0x7F2772C4u;
    // 7F2772C4: bc    12, 2, 0x7F277324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277324;
        }
    }

label_7F2772C8:
    ctx->pc = 0x7F2772C8u;
    ctx->downcount -= 5;
    // 7F2772C8: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F2772CC:
    ctx->pc = 0x7F2772CCu;
    // 7F2772CC: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F2772D0:
    ctx->pc = 0x7F2772D0u;
    // 7F2772D0: addi    r4, r4, 25572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25572);

label_7F2772D4:
    ctx->pc = 0x7F2772D4u;
    // 7F2772D4: addi    r5, r5, 26736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26736);

label_7F2772D8:
    ctx->pc = 0x7F2772D8u;
    // 7F2772D8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2772DCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2772DC:
    ctx->pc = 0x7F2772DCu;
    ctx->downcount -= 10;
    // 7F2772DC: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2772E0:
    ctx->pc = 0x7F2772E0u;
    // 7F2772E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2772E4:
    ctx->pc = 0x7F2772E4u;
    // 7F2772E4: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2772E8:
    ctx->pc = 0x7F2772E8u;
    // 7F2772E8: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2772EC:
    ctx->pc = 0x7F2772ECu;
    // 7F2772EC: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2772F0:
    ctx->pc = 0x7F2772F0u;
    // 7F2772F0: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2772F4:
    ctx->pc = 0x7F2772F4u;
    // 7F2772F4: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2772F8:
    ctx->pc = 0x7F2772F8u;
    // 7F2772F8: or   r9, r28, r28
    {
        ctx->gpr[9] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2772FC:
    ctx->pc = 0x7F2772FCu;
    // 7F2772FC: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F277300:
    ctx->pc = 0x7F277300u;
    // 7F277300: bl      0x7F2770FC
    {
            ctx->lr = 0x7F277304u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2770FCu;
                return;
            }
            goto label_7F2770FC;
    }

label_7F277304:
    ctx->pc = 0x7F277304u;
    ctx->downcount -= 2;
    // 7F277304: cmpwi   r3, 0
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

label_7F277308:
    ctx->pc = 0x7F277308u;
    // 7F277308: bc    4, 0, 0x7F27731C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27731C;
        }
    }

label_7F27730C:
    ctx->pc = 0x7F27730Cu;
    ctx->downcount -= 2;
    // 7F27730C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277310:
    ctx->pc = 0x7F277310u;
    // 7F277310: bl      0x7F3C8210
    {
            ctx->lr = 0x7F277314u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F277314:
    ctx->pc = 0x7F277314u;
    ctx->downcount -= 2;
    // 7F277314: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277318:
    ctx->pc = 0x7F277318u;
    // 7F277318: b       0x7F277328
    {
            goto label_7F277328;
    }

label_7F27731C:
    ctx->pc = 0x7F27731Cu;
    ctx->downcount -= 2;
    // 7F27731C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F277320:
    ctx->pc = 0x7F277320u;
    // 7F277320: bl      0x7F2568E4
    {
            ctx->lr = 0x7F277324u;
            ctx->pc = 0x7F2568E4u;
            return;
    }

label_7F277324:
    ctx->pc = 0x7F277324u;
    ctx->downcount -= 1;
    // 7F277324: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277328:
    ctx->pc = 0x7F277328u;
    ctx->downcount -= 16;
    // 7F277328: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27732C:
    ctx->pc = 0x7F27732Cu;
    // 7F27732C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277330:
    ctx->pc = 0x7F277330u;
    // 7F277330: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277334:
    ctx->pc = 0x7F277334u;
    // 7F277334: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F277338:
    ctx->pc = 0x7F277338u;
    // 7F277338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27733C:
    ctx->pc = 0x7F27733Cu;
    ctx->downcount -= 7;
    // 7F27733C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277340:
    ctx->pc = 0x7F277340u;
    // 7F277340: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277344:
    ctx->pc = 0x7F277344u;
    // 7F277344: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F277348:
    ctx->pc = 0x7F277348u;
    // 7F277348: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27734C:
    ctx->pc = 0x7F27734Cu;
    // 7F27734C: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F277350:
    ctx->pc = 0x7F277350u;
    // 7F277350: cmpw    r4, r0
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

label_7F277354:
    ctx->pc = 0x7F277354u;
    // 7F277354: bc    12, 2, 0x7F277368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277368;
        }
    }

label_7F277358:
    ctx->pc = 0x7F277358u;
    ctx->downcount -= 1;
    // 7F277358: bc    4, 0, 0x7F277380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277380;
        }
    }

label_7F27735C:
    ctx->pc = 0x7F27735Cu;
    ctx->downcount -= 2;
    // 7F27735C: cmpwi   r4, 2
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

label_7F277360:
    ctx->pc = 0x7F277360u;
    // 7F277360: bc    12, 2, 0x7F277368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277368;
        }
    }

label_7F277364:
    ctx->pc = 0x7F277364u;
    ctx->downcount -= 1;
    // 7F277364: b       0x7F277380
    {
            goto label_7F277380;
    }

label_7F277368:
    ctx->pc = 0x7F277368u;
    ctx->downcount -= 4;
    // 7F277368: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27736C:
    ctx->pc = 0x7F27736Cu;
    // 7F27736C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F277370:
    ctx->pc = 0x7F277370u;
    // 7F277370: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277374:
    ctx->pc = 0x7F277374u;
    // 7F277374: bl      0x7F3C8210
    {
            ctx->lr = 0x7F277378u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F277378:
    ctx->pc = 0x7F277378u;
    ctx->downcount -= 2;
    // 7F277378: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27737C:
    ctx->pc = 0x7F27737Cu;
    // 7F27737C: b       0x7F277384
    {
            goto label_7F277384;
    }

label_7F277380:
    ctx->pc = 0x7F277380u;
    ctx->downcount -= 1;
    // 7F277380: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277384:
    ctx->pc = 0x7F277384u;
    ctx->downcount -= 5;
    // 7F277384: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277388:
    ctx->pc = 0x7F277388u;
    // 7F277388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27738C:
    ctx->pc = 0x7F27738Cu;
    // 7F27738C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277390:
    ctx->pc = 0x7F277390u;
    // 7F277390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277394:
    ctx->pc = 0x7F277394u;
    ctx->downcount -= 7;
    // 7F277394: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277398:
    ctx->pc = 0x7F277398u;
    // 7F277398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27739C:
    ctx->pc = 0x7F27739Cu;
    // 7F27739C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2773A0:
    ctx->pc = 0x7F2773A0u;
    // 7F2773A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2773A4:
    ctx->pc = 0x7F2773A4u;
    // 7F2773A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2773A8:
    ctx->pc = 0x7F2773A8u;
    // 7F2773A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2773AC:
    ctx->pc = 0x7F2773ACu;
    // 7F2773AC: bl      0x7F026F84
    {
            ctx->lr = 0x7F2773B0u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F2773B0:
    ctx->pc = 0x7F2773B0u;
    ctx->downcount -= 11;
    // 7F2773B0: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2773B4:
    ctx->pc = 0x7F2773B4u;
    // 7F2773B4: lwz     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2773B8:
    ctx->pc = 0x7F2773B8u;
    // 7F2773B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2773BC:
    ctx->pc = 0x7F2773BCu;
    // 7F2773BC: stw     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2773C0:
    ctx->pc = 0x7F2773C0u;
    // 7F2773C0: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2773C4:
    ctx->pc = 0x7F2773C4u;
    // 7F2773C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2773C8:
    ctx->pc = 0x7F2773C8u;
    // 7F2773C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2773CC:
    ctx->pc = 0x7F2773CCu;
    // 7F2773CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2773D0:
    ctx->pc = 0x7F2773D0u;
    // 7F2773D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2773D4:
    ctx->pc = 0x7F2773D4u;
    // 7F2773D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2773D8:
    ctx->pc = 0x7F2773D8u;
    ctx->downcount -= 8;
    // 7F2773D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2773DC:
    ctx->pc = 0x7F2773DCu;
    // 7F2773DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2773E0:
    ctx->pc = 0x7F2773E0u;
    // 7F2773E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2773E4:
    ctx->pc = 0x7F2773E4u;
    // 7F2773E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2773E8:
    ctx->pc = 0x7F2773E8u;
    // 7F2773E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2773EC:
    ctx->pc = 0x7F2773ECu;
    // 7F2773EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2773F0:
    ctx->pc = 0x7F2773F0u;
    // 7F2773F0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2773F4:
    ctx->pc = 0x7F2773F4u;
    // 7F2773F4: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F2773F8u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F2773F8:
    ctx->pc = 0x7F2773F8u;
    ctx->downcount -= 11;
    // 7F2773F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2773FC:
    ctx->pc = 0x7F2773FCu;
    // 7F2773FC: lis     r3, 32551
    ctx->gpr[3] = ((u32)(s32)(32551) << 16);

label_7F277400:
    ctx->pc = 0x7F277400u;
    // 7F277400: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277404:
    ctx->pc = 0x7F277404u;
    // 7F277404: addi    r0, r3, 29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29796);

label_7F277408:
    ctx->pc = 0x7F277408u;
    // 7F277408: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27740C:
    ctx->pc = 0x7F27740Cu;
    // 7F27740C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277410:
    ctx->pc = 0x7F277410u;
    // 7F277410: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277414:
    ctx->pc = 0x7F277414u;
    // 7F277414: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277418:
    ctx->pc = 0x7F277418u;
    // 7F277418: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27741C:
    ctx->pc = 0x7F27741Cu;
    // 7F27741C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277420:
    ctx->pc = 0x7F277420u;
    ctx->downcount -= 7;
    // 7F277420: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277424:
    ctx->pc = 0x7F277424u;
    // 7F277424: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277428:
    ctx->pc = 0x7F277428u;
    // 7F277428: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27742C:
    ctx->pc = 0x7F27742Cu;
    // 7F27742C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277430:
    ctx->pc = 0x7F277430u;
    // 7F277430: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277434:
    ctx->pc = 0x7F277434u;
    // 7F277434: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277438:
    ctx->pc = 0x7F277438u;
    // 7F277438: bl      0x7F026F84
    {
            ctx->lr = 0x7F27743Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F27743C:
    ctx->pc = 0x7F27743Cu;
    ctx->downcount -= 11;
    // 7F27743C: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277440:
    ctx->pc = 0x7F277440u;
    // 7F277440: lwz     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277444:
    ctx->pc = 0x7F277444u;
    // 7F277444: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277448:
    ctx->pc = 0x7F277448u;
    // 7F277448: stw     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27744C:
    ctx->pc = 0x7F27744Cu;
    // 7F27744C: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277450:
    ctx->pc = 0x7F277450u;
    // 7F277450: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277454:
    ctx->pc = 0x7F277454u;
    // 7F277454: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277458:
    ctx->pc = 0x7F277458u;
    // 7F277458: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27745C:
    ctx->pc = 0x7F27745Cu;
    // 7F27745C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277460:
    ctx->pc = 0x7F277460u;
    // 7F277460: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277464:
    ctx->pc = 0x7F277464u;
    ctx->downcount -= 9;
    // 7F277464: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277468:
    ctx->pc = 0x7F277468u;
    // 7F277468: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27746C:
    ctx->pc = 0x7F27746Cu;
    // 7F27746C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F277470:
    ctx->pc = 0x7F277470u;
    // 7F277470: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277474:
    ctx->pc = 0x7F277474u;
    // 7F277474: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277478:
    ctx->pc = 0x7F277478u;
    // 7F277478: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27747C:
    ctx->pc = 0x7F27747Cu;
    // 7F27747C: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277480:
    ctx->pc = 0x7F277480u;
    // 7F277480: rlwinm. r0, r0, 0, 29, 30
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

label_7F277484:
    ctx->pc = 0x7F277484u;
    // 7F277484: bc    12, 2, 0x7F277490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277490;
        }
    }

label_7F277488:
    ctx->pc = 0x7F277488u;
    ctx->downcount -= 2;
    // 7F277488: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F27748C:
    ctx->pc = 0x7F27748Cu;
    // 7F27748C: b       0x7F2774F0
    {
            goto label_7F2774F0;
    }

label_7F277490:
    ctx->pc = 0x7F277490u;
    ctx->downcount -= 4;
    // 7F277490: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277494:
    ctx->pc = 0x7F277494u;
    // 7F277494: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277498:
    ctx->pc = 0x7F277498u;
    // 7F277498: cmpw    r4, r0
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

label_7F27749C:
    ctx->pc = 0x7F27749Cu;
    // 7F27749C: bc    4, 0, 0x7F2774B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2774B8;
        }
    }

label_7F2774A0:
    ctx->pc = 0x7F2774A0u;
    ctx->downcount -= 2;
    // 7F2774A0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2774A4:
    ctx->pc = 0x7F2774A4u;
    // 7F2774A4: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F2774A8u;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F2774A8:
    ctx->pc = 0x7F2774A8u;
    ctx->downcount -= 4;
    // 7F2774A8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2774AC:
    ctx->pc = 0x7F2774ACu;
    // 7F2774AC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2774B0:
    ctx->pc = 0x7F2774B0u;
    // 7F2774B0: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2774B4:
    ctx->pc = 0x7F2774B4u;
    // 7F2774B4: b       0x7F2774EC
    {
            goto label_7F2774EC;
    }

label_7F2774B8:
    ctx->pc = 0x7F2774B8u;
    ctx->downcount -= 2;
    // 7F2774B8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2774BC:
    ctx->pc = 0x7F2774BCu;
    // 7F2774BC: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F2774C0u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F2774C0:
    ctx->pc = 0x7F2774C0u;
    ctx->downcount -= 2;
    // 7F2774C0: cmpwi   r3, 0
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

label_7F2774C4:
    ctx->pc = 0x7F2774C4u;
    // 7F2774C4: bc    4, 2, 0x7F2774EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2774EC;
        }
    }

label_7F2774C8:
    ctx->pc = 0x7F2774C8u;
    ctx->downcount -= 2;
    // 7F2774C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2774CC:
    ctx->pc = 0x7F2774CCu;
    // 7F2774CC: bl      0x7F277394
    {
            ctx->lr = 0x7F2774D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277394u;
                return;
            }
            goto label_7F277394;
    }

label_7F2774D0:
    ctx->pc = 0x7F2774D0u;
    ctx->downcount -= 2;
    // 7F2774D0: cmpwi   r3, 0
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

label_7F2774D4:
    ctx->pc = 0x7F2774D4u;
    // 7F2774D4: bc    4, 0, 0x7F2774E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2774E0;
        }
    }

label_7F2774D8:
    ctx->pc = 0x7F2774D8u;
    ctx->downcount -= 2;
    // 7F2774D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2774DC:
    ctx->pc = 0x7F2774DCu;
    // 7F2774DC: b       0x7F2774F0
    {
            goto label_7F2774F0;
    }

label_7F2774E0:
    ctx->pc = 0x7F2774E0u;
    ctx->downcount -= 3;
    // 7F2774E0: lis     r3, 32551
    ctx->gpr[3] = ((u32)(s32)(32551) << 16);

label_7F2774E4:
    ctx->pc = 0x7F2774E4u;
    // 7F2774E4: addi    r0, r3, 29728
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29728);

label_7F2774E8:
    ctx->pc = 0x7F2774E8u;
    // 7F2774E8: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2774EC:
    ctx->pc = 0x7F2774ECu;
    ctx->downcount -= 1;
    // 7F2774EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2774F0:
    ctx->pc = 0x7F2774F0u;
    ctx->downcount -= 6;
    // 7F2774F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2774F4:
    ctx->pc = 0x7F2774F4u;
    // 7F2774F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2774F8:
    ctx->pc = 0x7F2774F8u;
    // 7F2774F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2774FC:
    ctx->pc = 0x7F2774FCu;
    // 7F2774FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277500:
    ctx->pc = 0x7F277500u;
    // 7F277500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277504:
    ctx->pc = 0x7F277504u;
    ctx->downcount -= 9;
    // 7F277504: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277508:
    ctx->pc = 0x7F277508u;
    // 7F277508: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27750C:
    ctx->pc = 0x7F27750Cu;
    // 7F27750C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F277510:
    ctx->pc = 0x7F277510u;
    // 7F277510: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277514:
    ctx->pc = 0x7F277514u;
    // 7F277514: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277518:
    ctx->pc = 0x7F277518u;
    // 7F277518: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27751C:
    ctx->pc = 0x7F27751Cu;
    // 7F27751C: lbz     r0, 4444(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F277520:
    ctx->pc = 0x7F277520u;
    // 7F277520: extsb. r0, r0
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

label_7F277524:
    ctx->pc = 0x7F277524u;
    // 7F277524: bc    4, 2, 0x7F277558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277558;
        }
    }

label_7F277528:
    ctx->pc = 0x7F277528u;
    ctx->downcount -= 3;
    // 7F277528: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27752C:
    ctx->pc = 0x7F27752Cu;
    // 7F27752C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F277530:
    ctx->pc = 0x7F277530u;
    // 7F277530: bl      0x7F2509BC
    {
            ctx->lr = 0x7F277534u;
            ctx->pc = 0x7F2509BCu;
            return;
    }

label_7F277534:
    ctx->pc = 0x7F277534u;
    ctx->downcount -= 2;
    // 7F277534: cmpwi   r3, 0
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

label_7F277538:
    ctx->pc = 0x7F277538u;
    // 7F277538: bc    4, 1, 0x7F27754C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27754C;
        }
    }

label_7F27753C:
    ctx->pc = 0x7F27753Cu;
    ctx->downcount -= 4;
    // 7F27753C: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277540:
    ctx->pc = 0x7F277540u;
    // 7F277540: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_7F277544:
    ctx->pc = 0x7F277544u;
    // 7F277544: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277548:
    ctx->pc = 0x7F277548u;
    // 7F277548: b       0x7F277558
    {
            goto label_7F277558;
    }

label_7F27754C:
    ctx->pc = 0x7F27754Cu;
    ctx->downcount -= 3;
    // 7F27754C: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277550:
    ctx->pc = 0x7F277550u;
    // 7F277550: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F277554:
    ctx->pc = 0x7F277554u;
    // 7F277554: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277558:
    ctx->pc = 0x7F277558u;
    ctx->downcount -= 2;
    // 7F277558: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F27755C:
    ctx->pc = 0x7F27755Cu;
    // 7F27755C: bl      0x7F277644
    {
            ctx->lr = 0x7F277560u;
            goto label_7F277644;
    }

label_7F277560:
    ctx->pc = 0x7F277560u;
    ctx->downcount -= 2;
    // 7F277560: cmpwi   r3, 0
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

label_7F277564:
    ctx->pc = 0x7F277564u;
    // 7F277564: bc    4, 2, 0x7F277574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277574;
        }
    }

label_7F277568:
    ctx->pc = 0x7F277568u;
    ctx->downcount -= 1;
    // 7F277568: bl      0x7F01F590
    {
            ctx->lr = 0x7F27756Cu;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F27756C:
    ctx->pc = 0x7F27756Cu;
    ctx->downcount -= 2;
    // 7F27756C: cmpwi   r3, 1
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

label_7F277570:
    ctx->pc = 0x7F277570u;
    // 7F277570: bc    4, 2, 0x7F277580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277580;
        }
    }

label_7F277574:
    ctx->pc = 0x7F277574u;
    ctx->downcount -= 2;
    // 7F277574: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277578:
    ctx->pc = 0x7F277578u;
    // 7F277578: bl      0x7F2773D8
    {
            ctx->lr = 0x7F27757Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2773D8u;
                return;
            }
            goto label_7F2773D8;
    }

label_7F27757C:
    ctx->pc = 0x7F27757Cu;
    ctx->downcount -= 1;
    // 7F27757C: b       0x7F2775B0
    {
            goto label_7F2775B0;
    }

label_7F277580:
    ctx->pc = 0x7F277580u;
    ctx->downcount -= 5;
    // 7F277580: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F277584:
    ctx->pc = 0x7F277584u;
    // 7F277584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277588:
    ctx->pc = 0x7F277588u;
    // 7F277588: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27758C:
    ctx->pc = 0x7F27758Cu;
    // 7F27758C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F277590:
    ctx->pc = 0x7F277590u;
    // 7F277590: bl      0x7F012018
    {
            ctx->lr = 0x7F277594u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F277594:
    ctx->pc = 0x7F277594u;
    ctx->downcount -= 5;
    // 7F277594: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F277598:
    ctx->pc = 0x7F277598u;
    // 7F277598: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27759C:
    ctx->pc = 0x7F27759Cu;
    // 7F27759C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2775A0:
    ctx->pc = 0x7F2775A0u;
    // 7F2775A0: or.   r0, r4, r0
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

label_7F2775A4:
    ctx->pc = 0x7F2775A4u;
    // 7F2775A4: bc    4, 2, 0x7F2775B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2775B0;
        }
    }

label_7F2775A8:
    ctx->pc = 0x7F2775A8u;
    ctx->downcount -= 2;
    // 7F2775A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2775AC:
    ctx->pc = 0x7F2775ACu;
    // 7F2775AC: bl      0x7F2773D8
    {
            ctx->lr = 0x7F2775B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2773D8u;
                return;
            }
            goto label_7F2773D8;
    }

label_7F2775B0:
    ctx->pc = 0x7F2775B0u;
    ctx->downcount -= 5;
    // 7F2775B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2775B4:
    ctx->pc = 0x7F2775B4u;
    // 7F2775B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2775B8:
    ctx->pc = 0x7F2775B8u;
    // 7F2775B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2775BC:
    ctx->pc = 0x7F2775BCu;
    // 7F2775BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2775C0:
    ctx->pc = 0x7F2775C0u;
    // 7F2775C0: bl      0x7F012018
    {
            ctx->lr = 0x7F2775C4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2775C4:
    ctx->pc = 0x7F2775C4u;
    ctx->downcount -= 5;
    // 7F2775C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2775C8:
    ctx->pc = 0x7F2775C8u;
    // 7F2775C8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2775CC:
    ctx->pc = 0x7F2775CCu;
    // 7F2775CC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2775D0:
    ctx->pc = 0x7F2775D0u;
    // 7F2775D0: or.   r0, r4, r0
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

label_7F2775D4:
    ctx->pc = 0x7F2775D4u;
    // 7F2775D4: bc    12, 2, 0x7F2775FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2775FC;
        }
    }

label_7F2775D8:
    ctx->pc = 0x7F2775D8u;
    ctx->downcount -= 3;
    // 7F2775D8: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2775DC:
    ctx->pc = 0x7F2775DCu;
    // 7F2775DC: cmpwi   r0, 0
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

label_7F2775E0:
    ctx->pc = 0x7F2775E0u;
    // 7F2775E0: bc    4, 2, 0x7F27761C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27761C;
        }
    }

label_7F2775E4:
    ctx->pc = 0x7F2775E4u;
    ctx->downcount -= 3;
    // 7F2775E4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2775E8:
    ctx->pc = 0x7F2775E8u;
    // 7F2775E8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2775EC:
    ctx->pc = 0x7F2775ECu;
    // 7F2775EC: bl      0x7F2E4A0C
    {
            ctx->lr = 0x7F2775F0u;
            ctx->pc = 0x7F2E4A0Cu;
            return;
    }

label_7F2775F0:
    ctx->pc = 0x7F2775F0u;
    ctx->downcount -= 3;
    // 7F2775F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2775F4:
    ctx->pc = 0x7F2775F4u;
    // 7F2775F4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2775F8:
    ctx->pc = 0x7F2775F8u;
    // 7F2775F8: b       0x7F27761C
    {
            goto label_7F27761C;
    }

label_7F2775FC:
    ctx->pc = 0x7F2775FCu;
    ctx->downcount -= 3;
    // 7F2775FC: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277600:
    ctx->pc = 0x7F277600u;
    // 7F277600: cmpwi   r0, 1
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

label_7F277604:
    ctx->pc = 0x7F277604u;
    // 7F277604: bc    4, 2, 0x7F27761C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27761C;
        }
    }

label_7F277608:
    ctx->pc = 0x7F277608u;
    ctx->downcount -= 3;
    // 7F277608: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27760C:
    ctx->pc = 0x7F27760Cu;
    // 7F27760C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F277610:
    ctx->pc = 0x7F277610u;
    // 7F277610: bl      0x7F2E4A44
    {
            ctx->lr = 0x7F277614u;
            ctx->pc = 0x7F2E4A44u;
            return;
    }

label_7F277614:
    ctx->pc = 0x7F277614u;
    ctx->downcount -= 2;
    // 7F277614: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F277618:
    ctx->pc = 0x7F277618u;
    // 7F277618: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27761C:
    ctx->pc = 0x7F27761Cu;
    ctx->downcount -= 5;
    // 7F27761C: lwz     r12, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F277620:
    ctx->pc = 0x7F277620u;
    // 7F277620: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277624:
    ctx->pc = 0x7F277624u;
    // 7F277624: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F277628:
    ctx->pc = 0x7F277628u;
    // 7F277628: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F27762Cu;
            ctx->pc = target;
            return;
        }
    }

label_7F27762C:
    ctx->pc = 0x7F27762Cu;
    ctx->downcount -= 7;
    // 7F27762C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277630:
    ctx->pc = 0x7F277630u;
    // 7F277630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277634:
    ctx->pc = 0x7F277634u;
    // 7F277634: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277638:
    ctx->pc = 0x7F277638u;
    // 7F277638: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27763C:
    ctx->pc = 0x7F27763Cu;
    // 7F27763C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277640:
    ctx->pc = 0x7F277640u;
    // 7F277640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277644:
    ctx->pc = 0x7F277644u;
    ctx->downcount -= 4;
    // 7F277644: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F277648:
    ctx->pc = 0x7F277648u;
    // 7F277648: lwz     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27764C:
    ctx->pc = 0x7F27764Cu;
    // 7F27764C: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F277650:
    ctx->pc = 0x7F277650u;
    // 7F277650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277654:
    ctx->pc = 0x7F277654u;
    ctx->downcount -= 6;
    // 7F277654: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277658:
    ctx->pc = 0x7F277658u;
    // 7F277658: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27765C:
    ctx->pc = 0x7F27765Cu;
    // 7F27765C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277660:
    ctx->pc = 0x7F277660u;
    // 7F277660: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277664:
    ctx->pc = 0x7F277664u;
    // 7F277664: cmpwi   r3, 0
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

label_7F277668:
    ctx->pc = 0x7F277668u;
    // 7F277668: bc    12, 0, 0x7F277670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277670;
        }
    }

label_7F27766C:
    ctx->pc = 0x7F27766Cu;
    ctx->downcount -= 1;
    // 7F27766C: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F277670u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F277670:
    ctx->pc = 0x7F277670u;
    ctx->downcount -= 5;
    // 7F277670: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277674:
    ctx->pc = 0x7F277674u;
    // 7F277674: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277678:
    ctx->pc = 0x7F277678u;
    // 7F277678: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27767C:
    ctx->pc = 0x7F27767Cu;
    // 7F27767C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277680:
    ctx->pc = 0x7F277680u;
    ctx->downcount -= 8;
    // 7F277680: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277684:
    ctx->pc = 0x7F277684u;
    // 7F277684: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277688:
    ctx->pc = 0x7F277688u;
    // 7F277688: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F27768C:
    ctx->pc = 0x7F27768Cu;
    // 7F27768C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277690:
    ctx->pc = 0x7F277690u;
    // 7F277690: addi    r4, r4, 29500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29500);

label_7F277694:
    ctx->pc = 0x7F277694u;
    // 7F277694: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277698:
    ctx->pc = 0x7F277698u;
    // 7F277698: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27769C:
    ctx->pc = 0x7F27769Cu;
    // 7F27769C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F2776A0u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F2776A0:
    ctx->pc = 0x7F2776A0u;
    ctx->downcount -= 7;
    // 7F2776A0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2776A4:
    ctx->pc = 0x7F2776A4u;
    // 7F2776A4: li      r3, 3405
    ctx->gpr[3] = (u32)(s32)(3405);

label_7F2776A8:
    ctx->pc = 0x7F2776A8u;
    // 7F2776A8: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2776AC:
    ctx->pc = 0x7F2776ACu;
    // 7F2776AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2776B0:
    ctx->pc = 0x7F2776B0u;
    // 7F2776B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2776B4:
    ctx->pc = 0x7F2776B4u;
    // 7F2776B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2776B8:
    ctx->pc = 0x7F2776B8u;
    // 7F2776B8: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F2776BCu;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F2776BC:
    ctx->pc = 0x7F2776BCu;
    ctx->downcount -= 2;
    // 7F2776BC: cmpwi   r3, 0
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

label_7F2776C0:
    ctx->pc = 0x7F2776C0u;
    // 7F2776C0: bc    4, 0, 0x7F2776CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2776CC;
        }
    }

label_7F2776C4:
    ctx->pc = 0x7F2776C4u;
    ctx->downcount -= 2;
    // 7F2776C4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2776C8:
    ctx->pc = 0x7F2776C8u;
    // 7F2776C8: b       0x7F277700
    {
            goto label_7F277700;
    }

label_7F2776CC:
    ctx->pc = 0x7F2776CCu;
    ctx->downcount -= 3;
    // 7F2776CC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2776D0:
    ctx->pc = 0x7F2776D0u;
    // 7F2776D0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2776D4:
    ctx->pc = 0x7F2776D4u;
    // 7F2776D4: bl      0x7F2E4BD0
    {
            ctx->lr = 0x7F2776D8u;
            ctx->pc = 0x7F2E4BD0u;
            return;
    }

label_7F2776D8:
    ctx->pc = 0x7F2776D8u;
    ctx->downcount -= 10;
    // 7F2776D8: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2776DC:
    ctx->pc = 0x7F2776DCu;
    // 7F2776DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2776E0:
    ctx->pc = 0x7F2776E0u;
    // 7F2776E0: lis     r3, 32551
    ctx->gpr[3] = ((u32)(s32)(32551) << 16);

label_7F2776E4:
    ctx->pc = 0x7F2776E4u;
    // 7F2776E4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F2776E8:
    ctx->pc = 0x7F2776E8u;
    // 7F2776E8: stw     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2776EC:
    ctx->pc = 0x7F2776ECu;
    // 7F2776EC: addi    r4, r3, 29796
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29796);

label_7F2776F0:
    ctx->pc = 0x7F2776F0u;
    // 7F2776F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2776F4:
    ctx->pc = 0x7F2776F4u;
    // 7F2776F4: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2776F8:
    ctx->pc = 0x7F2776F8u;
    // 7F2776F8: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2776FC:
    ctx->pc = 0x7F2776FCu;
    // 7F2776FC: stw     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277700:
    ctx->pc = 0x7F277700u;
    ctx->downcount -= 6;
    // 7F277700: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277704:
    ctx->pc = 0x7F277704u;
    // 7F277704: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277708:
    ctx->pc = 0x7F277708u;
    // 7F277708: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27770C:
    ctx->pc = 0x7F27770Cu;
    // 7F27770C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277710:
    ctx->pc = 0x7F277710u;
    // 7F277710: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277714:
    ctx->pc = 0x7F277714u;
    ctx->downcount -= 5;
    // 7F277714: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277718:
    ctx->pc = 0x7F277718u;
    // 7F277718: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27771C:
    ctx->pc = 0x7F27771Cu;
    // 7F27771C: cmpwi   r4, 1
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

label_7F277720:
    ctx->pc = 0x7F277720u;
    // 7F277720: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277724:
    ctx->pc = 0x7F277724u;
    // 7F277724: bc    12, 2, 0x7F277754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277754;
        }
    }

label_7F277728:
    ctx->pc = 0x7F277728u;
    ctx->downcount -= 1;
    // 7F277728: bc    4, 0, 0x7F277770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277770;
        }
    }

label_7F27772C:
    ctx->pc = 0x7F27772Cu;
    ctx->downcount -= 2;
    // 7F27772C: cmpwi   r4, 0
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

label_7F277730:
    ctx->pc = 0x7F277730u;
    // 7F277730: bc    4, 0, 0x7F277738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277738;
        }
    }

label_7F277734:
    ctx->pc = 0x7F277734u;
    ctx->downcount -= 1;
    // 7F277734: b       0x7F277770
    {
            goto label_7F277770;
    }

label_7F277738:
    ctx->pc = 0x7F277738u;
    ctx->downcount -= 6;
    // 7F277738: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27773C:
    ctx->pc = 0x7F27773Cu;
    // 7F27773C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F277740:
    ctx->pc = 0x7F277740u;
    // 7F277740: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_7F277744:
    ctx->pc = 0x7F277744u;
    // 7F277744: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277748:
    ctx->pc = 0x7F277748u;
    // 7F277748: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27774C:
    ctx->pc = 0x7F27774Cu;
    // 7F27774C: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F277750u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F277750:
    ctx->pc = 0x7F277750u;
    ctx->downcount -= 1;
    // 7F277750: b       0x7F277778
    {
            goto label_7F277778;
    }

label_7F277754:
    ctx->pc = 0x7F277754u;
    ctx->downcount -= 6;
    // 7F277754: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277758:
    ctx->pc = 0x7F277758u;
    // 7F277758: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27775C:
    ctx->pc = 0x7F27775Cu;
    // 7F27775C: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F277760:
    ctx->pc = 0x7F277760u;
    // 7F277760: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277764:
    ctx->pc = 0x7F277764u;
    // 7F277764: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277768:
    ctx->pc = 0x7F277768u;
    // 7F277768: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F27776Cu;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F27776C:
    ctx->pc = 0x7F27776Cu;
    ctx->downcount -= 1;
    // 7F27776C: b       0x7F277778
    {
            goto label_7F277778;
    }

label_7F277770:
    ctx->pc = 0x7F277770u;
    ctx->downcount -= 1;
    // 7F277770: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F277774u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F277774:
    ctx->pc = 0x7F277774u;
    ctx->downcount -= 1;
    // 7F277774: b       0x7F27777C
    {
            goto label_7F27777C;
    }

label_7F277778:
    ctx->pc = 0x7F277778u;
    ctx->downcount -= 1;
    // 7F277778: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27777C:
    ctx->pc = 0x7F27777Cu;
    ctx->downcount -= 5;
    // 7F27777C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277780:
    ctx->pc = 0x7F277780u;
    // 7F277780: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277784:
    ctx->pc = 0x7F277784u;
    // 7F277784: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277788:
    ctx->pc = 0x7F277788u;
    // 7F277788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27778C:
    ctx->pc = 0x7F27778Cu;
    ctx->downcount -= 9;
    // 7F27778C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277790:
    ctx->pc = 0x7F277790u;
    // 7F277790: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277794:
    ctx->pc = 0x7F277794u;
    // 7F277794: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F277798:
    ctx->pc = 0x7F277798u;
    // 7F277798: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27779C:
    ctx->pc = 0x7F27779Cu;
    // 7F27779C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2777A0:
    ctx->pc = 0x7F2777A0u;
    // 7F2777A0: li      r5, 84
    ctx->gpr[5] = (u32)(s32)(84);

label_7F2777A4:
    ctx->pc = 0x7F2777A4u;
    // 7F2777A4: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F2777A8:
    ctx->pc = 0x7F2777A8u;
    // 7F2777A8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2777AC:
    ctx->pc = 0x7F2777ACu;
    // 7F2777AC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2777B0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2777B0:
    ctx->pc = 0x7F2777B0u;
    ctx->downcount -= 2;
    // 7F2777B0: or.   r31, r3, r3
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

label_7F2777B4:
    ctx->pc = 0x7F2777B4u;
    // 7F2777B4: bc    4, 2, 0x7F2777C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2777C0;
        }
    }

label_7F2777B8:
    ctx->pc = 0x7F2777B8u;
    ctx->downcount -= 2;
    // 7F2777B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2777BC:
    ctx->pc = 0x7F2777BCu;
    // 7F2777BC: b       0x7F277840
    {
            goto label_7F277840;
    }

label_7F2777C0:
    ctx->pc = 0x7F2777C0u;
    ctx->downcount -= 5;
    // 7F2777C0: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F2777C4:
    ctx->pc = 0x7F2777C4u;
    // 7F2777C4: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F2777C8:
    ctx->pc = 0x7F2777C8u;
    // 7F2777C8: addi    r4, r4, 29956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29956);

label_7F2777CC:
    ctx->pc = 0x7F2777CCu;
    // 7F2777CC: addi    r5, r5, 30292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30292);

label_7F2777D0:
    ctx->pc = 0x7F2777D0u;
    // 7F2777D0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2777D4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2777D4:
    ctx->pc = 0x7F2777D4u;
    ctx->downcount -= 12;
    // 7F2777D4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2777D8:
    ctx->pc = 0x7F2777D8u;
    // 7F2777D8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2777DC:
    ctx->pc = 0x7F2777DCu;
    // 7F2777DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2777E0:
    ctx->pc = 0x7F2777E0u;
    // 7F2777E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2777E4:
    ctx->pc = 0x7F2777E4u;
    // 7F2777E4: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F2777E8:
    ctx->pc = 0x7F2777E8u;
    // 7F2777E8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2777EC:
    ctx->pc = 0x7F2777ECu;
    // 7F2777EC: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2777F0:
    ctx->pc = 0x7F2777F0u;
    // 7F2777F0: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2777F4:
    ctx->pc = 0x7F2777F4u;
    // 7F2777F4: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2777F8:
    ctx->pc = 0x7F2777F8u;
    // 7F2777F8: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2777FC:
    ctx->pc = 0x7F2777FCu;
    // 7F2777FC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277800:
    ctx->pc = 0x7F277800u;
    // 7F277800: bl      0x7F277680
    {
            ctx->lr = 0x7F277804u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277680u;
                return;
            }
            goto label_7F277680;
    }

label_7F277804:
    ctx->pc = 0x7F277804u;
    ctx->downcount -= 2;
    // 7F277804: cmpwi   r3, 0
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

label_7F277808:
    ctx->pc = 0x7F277808u;
    // 7F277808: bc    4, 0, 0x7F27781C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27781C;
        }
    }

label_7F27780C:
    ctx->pc = 0x7F27780Cu;
    ctx->downcount -= 2;
    // 7F27780C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277810:
    ctx->pc = 0x7F277810u;
    // 7F277810: bl      0x7F3C8210
    {
            ctx->lr = 0x7F277814u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F277814:
    ctx->pc = 0x7F277814u;
    ctx->downcount -= 2;
    // 7F277814: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277818:
    ctx->pc = 0x7F277818u;
    // 7F277818: b       0x7F277840
    {
            goto label_7F277840;
    }

label_7F27781C:
    ctx->pc = 0x7F27781Cu;
    ctx->downcount -= 4;
    // 7F27781C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F277820:
    ctx->pc = 0x7F277820u;
    // 7F277820: lbz     r0, 4444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F277824:
    ctx->pc = 0x7F277824u;
    // 7F277824: extsb. r0, r0
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

label_7F277828:
    ctx->pc = 0x7F277828u;
    // 7F277828: bc    12, 2, 0x7F27783C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27783C;
        }
    }

label_7F27782C:
    ctx->pc = 0x7F27782Cu;
    ctx->downcount -= 4;
    // 7F27782C: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F277830:
    ctx->pc = 0x7F277830u;
    // 7F277830: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277834:
    ctx->pc = 0x7F277834u;
    // 7F277834: addi    r4, r4, 30484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30484);

label_7F277838:
    ctx->pc = 0x7F277838u;
    // 7F277838: bl      0x7F3C8990
    {
            ctx->lr = 0x7F27783Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F27783C:
    ctx->pc = 0x7F27783Cu;
    ctx->downcount -= 1;
    // 7F27783C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277840:
    ctx->pc = 0x7F277840u;
    ctx->downcount -= 6;
    // 7F277840: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277844:
    ctx->pc = 0x7F277844u;
    // 7F277844: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277848:
    ctx->pc = 0x7F277848u;
    // 7F277848: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27784C:
    ctx->pc = 0x7F27784Cu;
    // 7F27784C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277850:
    ctx->pc = 0x7F277850u;
    // 7F277850: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277854:
    ctx->pc = 0x7F277854u;
    ctx->downcount -= 19;
    // 7F277854: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277858:
    ctx->pc = 0x7F277858u;
    // 7F277858: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27785C:
    ctx->pc = 0x7F27785Cu;
    // 7F27785C: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F277860:
    ctx->pc = 0x7F277860u;
    // 7F277860: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277864:
    ctx->pc = 0x7F277864u;
    // 7F277864: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F277868:
    ctx->pc = 0x7F277868u;
    // 7F277868: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27786C:
    ctx->pc = 0x7F27786Cu;
    // 7F27786C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277870:
    ctx->pc = 0x7F277870u;
    // 7F277870: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277874:
    ctx->pc = 0x7F277874u;
    // 7F277874: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F277878u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F277878:
    ctx->pc = 0x7F277878u;
    ctx->downcount -= 4;
    // 7F277878: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27787C:
    ctx->pc = 0x7F27787Cu;
    // 7F27787C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277880:
    ctx->pc = 0x7F277880u;
    // 7F277880: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F277884:
    ctx->pc = 0x7F277884u;
    // 7F277884: bl      0x7F3C9624
    {
            ctx->lr = 0x7F277888u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F277888:
    ctx->pc = 0x7F277888u;
    ctx->downcount -= 6;
    // 7F277888: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27788C:
    ctx->pc = 0x7F27788Cu;
    // 7F27788C: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277890:
    ctx->pc = 0x7F277890u;
    // 7F277890: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F277894:
    ctx->pc = 0x7F277894u;
    // 7F277894: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F277898:
    ctx->pc = 0x7F277898u;
    // 7F277898: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27789C:
    ctx->pc = 0x7F27789Cu;
    // 7F27789C: b       0x7F277970
    {
            goto label_7F277970;
    }

label_7F2778A0:
    ctx->pc = 0x7F2778A0u;
    ctx->downcount -= 5;
    // 7F2778A0: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2778A4:
    ctx->pc = 0x7F2778A4u;
    // 7F2778A4: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2778A8:
    ctx->pc = 0x7F2778A8u;
    // 7F2778A8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2778AC:
    // 7F2778AC: cmpwi   r0, 2
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

label_7F2778B0:
    // 7F2778B0: bc    12, 2, 0x7F27791C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27791C;
        }
    }

label_7F2778B4:
    ctx->downcount -= 1;
    // 7F2778B4: bc    4, 0, 0x7F2778C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2778C8;
        }
    }

label_7F2778B8:
    ctx->downcount -= 2;
    // 7F2778B8: cmpwi   r0, 0
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

label_7F2778BC:
    // 7F2778BC: bc    12, 2, 0x7F2778D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2778D4;
        }
    }

label_7F2778C0:
    ctx->downcount -= 1;
    // 7F2778C0: bc    4, 0, 0x7F2778F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2778F8;
        }
    }

label_7F2778C4:
    ctx->downcount -= 1;
    // 7F2778C4: b       0x7F277964
    {
            goto label_7F277964;
    }

label_7F2778C8:
    ctx->downcount -= 2;
    // 7F2778C8: cmpwi   r0, 4
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

label_7F2778CC:
    // 7F2778CC: bc    4, 0, 0x7F277964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277964;
        }
    }

label_7F2778D0:
    ctx->downcount -= 1;
    // 7F2778D0: b       0x7F27793C
    {
            goto label_7F27793C;
    }

label_7F2778D4:
    ctx->pc = 0x7F2778D4u;
    ctx->downcount -= 3;
    // 7F2778D4: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2778D8:
    // 7F2778D8: cmpwi   r0, 0
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

label_7F2778DC:
    // 7F2778DC: bc    4, 2, 0x7F277964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277964;
        }
    }

label_7F2778E0:
    ctx->pc = 0x7F2778E0u;
    ctx->downcount -= 6;
    // 7F2778E0: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2778E4:
    // 7F2778E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2778E8:
    // 7F2778E8: rlwinm r4, r4, 0, 17, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF7FFFu;
    }

label_7F2778EC:
    ctx->pc = 0x7F2778ECu;
    // 7F2778EC: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2778F0:
    ctx->pc = 0x7F2778F0u;
    // 7F2778F0: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2778F4:
    // 7F2778F4: b       0x7F277964
    {
            goto label_7F277964;
    }

label_7F2778F8:
    ctx->pc = 0x7F2778F8u;
    ctx->downcount -= 3;
    // 7F2778F8: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2778FC:
    // 7F2778FC: cmpwi   r0, 0
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

label_7F277900:
    // 7F277900: bc    4, 2, 0x7F277964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277964;
        }
    }

label_7F277904:
    ctx->pc = 0x7F277904u;
    ctx->downcount -= 6;
    // 7F277904: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277908:
    // 7F277908: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27790C:
    // 7F27790C: ori     r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] | 0x8000u;

label_7F277910:
    ctx->pc = 0x7F277910u;
    // 7F277910: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277914:
    ctx->pc = 0x7F277914u;
    // 7F277914: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277918:
    // 7F277918: b       0x7F277964
    {
            goto label_7F277964;
    }

label_7F27791C:
    ctx->pc = 0x7F27791Cu;
    ctx->downcount -= 8;
    // 7F27791C: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F277920:
    // 7F277920: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F277924:
    // 7F277924: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F277928:
    // 7F277928: rlwinm r5, r5, 0, 17, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFF7FFFu;
    }

label_7F27792C:
    ctx->pc = 0x7F27792Cu;
    // 7F27792C: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277930:
    ctx->pc = 0x7F277930u;
    // 7F277930: stw     r4, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277934:
    ctx->pc = 0x7F277934u;
    // 7F277934: stw     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277938:
    // 7F277938: b       0x7F277964
    {
            goto label_7F277964;
    }

label_7F27793C:
    ctx->pc = 0x7F27793Cu;
    ctx->downcount -= 3;
    // 7F27793C: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277940:
    // 7F277940: cmpwi   r0, 1
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

label_7F277944:
    // 7F277944: bc    4, 2, 0x7F277964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277964;
        }
    }

label_7F277948:
    ctx->pc = 0x7F277948u;
    ctx->downcount -= 7;
    // 7F277948: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27794C:
    // 7F27794C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F277950:
    // 7F277950: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F277954:
    // 7F277954: ori     r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] | 0x8000u;

label_7F277958:
    ctx->pc = 0x7F277958u;
    // 7F277958: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27795C:
    ctx->pc = 0x7F27795Cu;
    // 7F27795C: stw     r4, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277960:
    ctx->pc = 0x7F277960u;
    // 7F277960: stw     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277964:
    ctx->pc = 0x7F277964u;
    ctx->downcount -= 3;
    // 7F277964: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277968:
    // 7F277968: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_7F27796C:
    ctx->pc = 0x7F27796Cu;
    // 7F27796C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277970:
    ctx->downcount -= 2;
    // 7F277970: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F277974:
    // 7F277974: bc    4, 0, 0x7F2778A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2778A0u;
                return;
            }
            goto label_7F2778A0;
        }
    }

label_7F277978:
    ctx->pc = 0x7F277978u;
    ctx->downcount -= 16;
    // 7F277978: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27797C:
    ctx->pc = 0x7F27797Cu;
    // 7F27797C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277980:
    ctx->pc = 0x7F277980u;
    // 7F277980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277984:
    ctx->pc = 0x7F277984u;
    // 7F277984: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F277988:
    ctx->pc = 0x7F277988u;
    // 7F277988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F27798C:
    ctx->pc = 0x7F27798Cu;
    ctx->downcount -= 7;
    // 7F27798C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277990:
    ctx->pc = 0x7F277990u;
    // 7F277990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277994:
    ctx->pc = 0x7F277994u;
    // 7F277994: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277998:
    ctx->pc = 0x7F277998u;
    // 7F277998: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27799C:
    ctx->pc = 0x7F27799Cu;
    // 7F27799C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2779A0:
    ctx->pc = 0x7F2779A0u;
    // 7F2779A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2779A4:
    ctx->pc = 0x7F2779A4u;
    // 7F2779A4: bl      0x7F026F84
    {
            ctx->lr = 0x7F2779A8u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F2779A8:
    ctx->pc = 0x7F2779A8u;
    ctx->downcount -= 11;
    // 7F2779A8: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2779AC:
    ctx->pc = 0x7F2779ACu;
    // 7F2779AC: lwz     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2779B0:
    ctx->pc = 0x7F2779B0u;
    // 7F2779B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2779B4:
    ctx->pc = 0x7F2779B4u;
    // 7F2779B4: stw     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2779B8:
    ctx->pc = 0x7F2779B8u;
    // 7F2779B8: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2779BC:
    ctx->pc = 0x7F2779BCu;
    // 7F2779BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2779C0:
    ctx->pc = 0x7F2779C0u;
    // 7F2779C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2779C4:
    ctx->pc = 0x7F2779C4u;
    // 7F2779C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2779C8:
    ctx->pc = 0x7F2779C8u;
    // 7F2779C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2779CC:
    ctx->pc = 0x7F2779CCu;
    // 7F2779CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F2779D0:
    ctx->pc = 0x7F2779D0u;
    ctx->downcount -= 9;
    // 7F2779D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2779D4:
    ctx->pc = 0x7F2779D4u;
    // 7F2779D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2779D8:
    ctx->pc = 0x7F2779D8u;
    // 7F2779D8: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F2779DC:
    ctx->pc = 0x7F2779DCu;
    // 7F2779DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2779E0:
    ctx->pc = 0x7F2779E0u;
    // 7F2779E0: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F2779E4:
    ctx->pc = 0x7F2779E4u;
    // 7F2779E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2779E8:
    ctx->pc = 0x7F2779E8u;
    // 7F2779E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2779EC:
    ctx->pc = 0x7F2779ECu;
    // 7F2779EC: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2779F0:
    ctx->pc = 0x7F2779F0u;
    // 7F2779F0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2779F4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2779F4:
    ctx->pc = 0x7F2779F4u;
    ctx->downcount -= 2;
    // 7F2779F4: cmplwi  r3, 0x0000
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

label_7F2779F8:
    ctx->pc = 0x7F2779F8u;
    // 7F2779F8: bc    4, 2, 0x7F277A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277A0C;
        }
    }

label_7F2779FC:
    ctx->pc = 0x7F2779FCu;
    ctx->downcount -= 3;
    // 7F2779FC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F277A00:
    ctx->pc = 0x7F277A00u;
    // 7F277A00: addi    r3, r3, 18152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18152);

label_7F277A04:
    ctx->pc = 0x7F277A04u;
    // 7F277A04: bl      0x7F275ECC
    {
            ctx->lr = 0x7F277A08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F275ECCu;
                return;
            }
            goto label_7F275ECC;
    }

label_7F277A08:
    ctx->pc = 0x7F277A08u;
    ctx->downcount -= 1;
    // 7F277A08: b       0x7F277A2C
    {
            goto label_7F277A2C;
    }

label_7F277A0C:
    ctx->pc = 0x7F277A0Cu;
    ctx->downcount -= 8;
    // 7F277A0C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277A10:
    ctx->pc = 0x7F277A10u;
    // 7F277A10: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F277A14:
    ctx->pc = 0x7F277A14u;
    // 7F277A14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F277A18:
    ctx->pc = 0x7F277A18u;
    // 7F277A18: ori     r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] | 0x8000u;

label_7F277A1C:
    ctx->pc = 0x7F277A1Cu;
    // 7F277A1C: addi    r0, r4, 31364
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31364);

label_7F277A20:
    ctx->pc = 0x7F277A20u;
    // 7F277A20: stw     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F277A24:
    ctx->pc = 0x7F277A24u;
    // 7F277A24: stw     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277A28:
    ctx->pc = 0x7F277A28u;
    // 7F277A28: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277A2C:
    ctx->pc = 0x7F277A2Cu;
    ctx->downcount -= 6;
    // 7F277A2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277A30:
    ctx->pc = 0x7F277A30u;
    // 7F277A30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277A34:
    ctx->pc = 0x7F277A34u;
    // 7F277A34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277A38:
    ctx->pc = 0x7F277A38u;
    // 7F277A38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277A3C:
    ctx->pc = 0x7F277A3Cu;
    // 7F277A3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277A40:
    ctx->pc = 0x7F277A40u;
    ctx->downcount -= 7;
    // 7F277A40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277A44:
    ctx->pc = 0x7F277A44u;
    // 7F277A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277A48:
    ctx->pc = 0x7F277A48u;
    // 7F277A48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277A4C:
    ctx->pc = 0x7F277A4Cu;
    // 7F277A4C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277A50:
    ctx->pc = 0x7F277A50u;
    // 7F277A50: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277A54:
    ctx->pc = 0x7F277A54u;
    // 7F277A54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277A58:
    ctx->pc = 0x7F277A58u;
    // 7F277A58: bl      0x7F026F84
    {
            ctx->lr = 0x7F277A5Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F277A5C:
    ctx->pc = 0x7F277A5Cu;
    ctx->downcount -= 11;
    // 7F277A5C: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277A60:
    ctx->pc = 0x7F277A60u;
    // 7F277A60: lwz     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277A64:
    ctx->pc = 0x7F277A64u;
    // 7F277A64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277A68:
    ctx->pc = 0x7F277A68u;
    // 7F277A68: stw     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277A6C:
    ctx->pc = 0x7F277A6Cu;
    // 7F277A6C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277A70:
    ctx->pc = 0x7F277A70u;
    // 7F277A70: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277A74:
    ctx->pc = 0x7F277A74u;
    // 7F277A74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277A78:
    ctx->pc = 0x7F277A78u;
    // 7F277A78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277A7C:
    ctx->pc = 0x7F277A7Cu;
    // 7F277A7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277A80:
    ctx->pc = 0x7F277A80u;
    // 7F277A80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277A84:
    ctx->pc = 0x7F277A84u;
    ctx->downcount -= 9;
    // 7F277A84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277A88:
    ctx->pc = 0x7F277A88u;
    // 7F277A88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277A8C:
    ctx->pc = 0x7F277A8Cu;
    // 7F277A8C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F277A90:
    ctx->pc = 0x7F277A90u;
    // 7F277A90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277A94:
    ctx->pc = 0x7F277A94u;
    // 7F277A94: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277A98:
    ctx->pc = 0x7F277A98u;
    // 7F277A98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277A9C:
    ctx->pc = 0x7F277A9Cu;
    // 7F277A9C: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277AA0:
    ctx->pc = 0x7F277AA0u;
    // 7F277AA0: rlwinm. r0, r0, 0, 29, 30
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

label_7F277AA4:
    ctx->pc = 0x7F277AA4u;
    // 7F277AA4: bc    12, 2, 0x7F277AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277AB0;
        }
    }

label_7F277AA8:
    ctx->pc = 0x7F277AA8u;
    ctx->downcount -= 2;
    // 7F277AA8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F277AAC:
    ctx->pc = 0x7F277AACu;
    // 7F277AAC: b       0x7F277B10
    {
            goto label_7F277B10;
    }

label_7F277AB0:
    ctx->pc = 0x7F277AB0u;
    ctx->downcount -= 4;
    // 7F277AB0: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277AB4:
    ctx->pc = 0x7F277AB4u;
    // 7F277AB4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277AB8:
    ctx->pc = 0x7F277AB8u;
    // 7F277AB8: cmpw    r4, r0
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

label_7F277ABC:
    ctx->pc = 0x7F277ABCu;
    // 7F277ABC: bc    4, 0, 0x7F277AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277AD8;
        }
    }

label_7F277AC0:
    ctx->pc = 0x7F277AC0u;
    ctx->downcount -= 2;
    // 7F277AC0: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277AC4:
    ctx->pc = 0x7F277AC4u;
    // 7F277AC4: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F277AC8u;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F277AC8:
    ctx->pc = 0x7F277AC8u;
    ctx->downcount -= 4;
    // 7F277AC8: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277ACC:
    ctx->pc = 0x7F277ACCu;
    // 7F277ACC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F277AD0:
    ctx->pc = 0x7F277AD0u;
    // 7F277AD0: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277AD4:
    ctx->pc = 0x7F277AD4u;
    // 7F277AD4: b       0x7F277B0C
    {
            goto label_7F277B0C;
    }

label_7F277AD8:
    ctx->pc = 0x7F277AD8u;
    ctx->downcount -= 2;
    // 7F277AD8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277ADC:
    ctx->pc = 0x7F277ADCu;
    // 7F277ADC: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F277AE0u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F277AE0:
    ctx->pc = 0x7F277AE0u;
    ctx->downcount -= 2;
    // 7F277AE0: cmpwi   r3, 0
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

label_7F277AE4:
    ctx->pc = 0x7F277AE4u;
    // 7F277AE4: bc    4, 2, 0x7F277B0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277B0C;
        }
    }

label_7F277AE8:
    ctx->pc = 0x7F277AE8u;
    ctx->downcount -= 2;
    // 7F277AE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277AEC:
    ctx->pc = 0x7F277AECu;
    // 7F277AEC: bl      0x7F27798C
    {
            ctx->lr = 0x7F277AF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27798Cu;
                return;
            }
            goto label_7F27798C;
    }

label_7F277AF0:
    ctx->pc = 0x7F277AF0u;
    ctx->downcount -= 2;
    // 7F277AF0: cmpwi   r3, 0
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

label_7F277AF4:
    ctx->pc = 0x7F277AF4u;
    // 7F277AF4: bc    4, 0, 0x7F277B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277B00;
        }
    }

label_7F277AF8:
    ctx->pc = 0x7F277AF8u;
    ctx->downcount -= 2;
    // 7F277AF8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F277AFC:
    ctx->pc = 0x7F277AFCu;
    // 7F277AFC: b       0x7F277B10
    {
            goto label_7F277B10;
    }

label_7F277B00:
    ctx->pc = 0x7F277B00u;
    ctx->downcount -= 3;
    // 7F277B00: lis     r3, 32551
    ctx->gpr[3] = ((u32)(s32)(32551) << 16);

label_7F277B04:
    ctx->pc = 0x7F277B04u;
    // 7F277B04: addi    r0, r3, 31296
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31296);

label_7F277B08:
    ctx->pc = 0x7F277B08u;
    // 7F277B08: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277B0C:
    ctx->pc = 0x7F277B0Cu;
    ctx->downcount -= 1;
    // 7F277B0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277B10:
    ctx->pc = 0x7F277B10u;
    ctx->downcount -= 6;
    // 7F277B10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B14:
    ctx->pc = 0x7F277B14u;
    // 7F277B14: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277B18:
    ctx->pc = 0x7F277B18u;
    // 7F277B18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277B1C:
    ctx->pc = 0x7F277B1Cu;
    // 7F277B1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277B20:
    ctx->pc = 0x7F277B20u;
    // 7F277B20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277B24:
    ctx->pc = 0x7F277B24u;
    ctx->downcount -= 6;
    // 7F277B24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277B28:
    ctx->pc = 0x7F277B28u;
    // 7F277B28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277B2C:
    ctx->pc = 0x7F277B2Cu;
    // 7F277B2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277B30:
    ctx->pc = 0x7F277B30u;
    // 7F277B30: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277B34:
    ctx->pc = 0x7F277B34u;
    // 7F277B34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277B38:
    ctx->pc = 0x7F277B38u;
    // 7F277B38: bl      0x7F277854
    {
            ctx->lr = 0x7F277B3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277854u;
                return;
            }
            goto label_7F277854;
    }

label_7F277B3C:
    ctx->pc = 0x7F277B3Cu;
    ctx->downcount -= 4;
    // 7F277B3C: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F277B40:
    ctx->pc = 0x7F277B40u;
    // 7F277B40: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277B44:
    ctx->pc = 0x7F277B44u;
    // 7F277B44: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F277B48:
    ctx->pc = 0x7F277B48u;
    // 7F277B48: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F277B4Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F277B4C:
    ctx->pc = 0x7F277B4Cu;
    ctx->downcount -= 4;
    // 7F277B4C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F277B50:
    ctx->pc = 0x7F277B50u;
    // 7F277B50: lwz     r0, 19248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B54:
    ctx->pc = 0x7F277B54u;
    // 7F277B54: rlwinm. r0, r0, 0, 4, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x08000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F277B58:
    ctx->pc = 0x7F277B58u;
    // 7F277B58: bc    12, 2, 0x7F277B78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277B78;
        }
    }

label_7F277B5C:
    ctx->pc = 0x7F277B5Cu;
    ctx->downcount -= 3;
    // 7F277B5C: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B60:
    ctx->pc = 0x7F277B60u;
    // 7F277B60: cmpwi   r0, 0
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

label_7F277B64:
    ctx->pc = 0x7F277B64u;
    // 7F277B64: bc    4, 2, 0x7F277B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277B90;
        }
    }

label_7F277B68:
    ctx->pc = 0x7F277B68u;
    ctx->downcount -= 4;
    // 7F277B68: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B6C:
    ctx->pc = 0x7F277B6Cu;
    // 7F277B6C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F277B70:
    ctx->pc = 0x7F277B70u;
    // 7F277B70: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277B74:
    ctx->pc = 0x7F277B74u;
    // 7F277B74: b       0x7F277B90
    {
            goto label_7F277B90;
    }

label_7F277B78:
    ctx->pc = 0x7F277B78u;
    ctx->downcount -= 3;
    // 7F277B78: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B7C:
    ctx->pc = 0x7F277B7Cu;
    // 7F277B7C: cmpwi   r0, 0
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

label_7F277B80:
    ctx->pc = 0x7F277B80u;
    // 7F277B80: bc    4, 2, 0x7F277B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277B90;
        }
    }

label_7F277B84:
    ctx->pc = 0x7F277B84u;
    ctx->downcount -= 3;
    // 7F277B84: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277B88:
    ctx->pc = 0x7F277B88u;
    // 7F277B88: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F277B8C:
    ctx->pc = 0x7F277B8Cu;
    // 7F277B8C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277B90:
    ctx->pc = 0x7F277B90u;
    ctx->downcount -= 1;
    // 7F277B90: bl      0x7F01F590
    {
            ctx->lr = 0x7F277B94u;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F277B94:
    ctx->pc = 0x7F277B94u;
    ctx->downcount -= 4;
    // 7F277B94: subfic  r0, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F277B98:
    ctx->pc = 0x7F277B98u;
    // 7F277B98: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F277B9C:
    ctx->pc = 0x7F277B9Cu;
    // 7F277B9C: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F277BA0:
    ctx->pc = 0x7F277BA0u;
    // 7F277BA0: bl      0x7F277BDC
    {
            ctx->lr = 0x7F277BA4u;
            goto label_7F277BDC;
    }

label_7F277BA4:
    ctx->pc = 0x7F277BA4u;
    ctx->downcount -= 2;
    // 7F277BA4: cmpwi   r3, 0
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

label_7F277BA8:
    ctx->pc = 0x7F277BA8u;
    // 7F277BA8: bc    12, 2, 0x7F277BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277BB4;
        }
    }

label_7F277BAC:
    ctx->pc = 0x7F277BACu;
    ctx->downcount -= 2;
    // 7F277BAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277BB0:
    ctx->pc = 0x7F277BB0u;
    // 7F277BB0: bl      0x7F2779D0
    {
            ctx->lr = 0x7F277BB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2779D0u;
                return;
            }
            goto label_7F2779D0;
    }

label_7F277BB4:
    ctx->pc = 0x7F277BB4u;
    ctx->downcount -= 5;
    // 7F277BB4: lwz     r12, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F277BB8:
    ctx->pc = 0x7F277BB8u;
    // 7F277BB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277BBC:
    ctx->pc = 0x7F277BBCu;
    // 7F277BBC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F277BC0:
    ctx->pc = 0x7F277BC0u;
    // 7F277BC0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F277BC4u;
            ctx->pc = target;
            return;
        }
    }

label_7F277BC4:
    ctx->pc = 0x7F277BC4u;
    ctx->downcount -= 7;
    // 7F277BC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277BC8:
    ctx->pc = 0x7F277BC8u;
    // 7F277BC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277BCC:
    ctx->pc = 0x7F277BCCu;
    // 7F277BCC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277BD0:
    ctx->pc = 0x7F277BD0u;
    // 7F277BD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277BD4:
    ctx->pc = 0x7F277BD4u;
    // 7F277BD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277BD8:
    ctx->pc = 0x7F277BD8u;
    // 7F277BD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277BDC:
    ctx->pc = 0x7F277BDCu;
    ctx->downcount -= 4;
    // 7F277BDC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F277BE0:
    ctx->pc = 0x7F277BE0u;
    // 7F277BE0: lwz     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277BE4:
    ctx->pc = 0x7F277BE4u;
    // 7F277BE4: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F277BE8:
    ctx->pc = 0x7F277BE8u;
    // 7F277BE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277BEC:
    ctx->pc = 0x7F277BECu;
    ctx->downcount -= 6;
    // 7F277BEC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277BF0:
    ctx->pc = 0x7F277BF0u;
    // 7F277BF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277BF4:
    ctx->pc = 0x7F277BF4u;
    // 7F277BF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277BF8:
    ctx->pc = 0x7F277BF8u;
    // 7F277BF8: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277BFC:
    ctx->pc = 0x7F277BFCu;
    // 7F277BFC: cmpwi   r3, 0
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

label_7F277C00:
    ctx->pc = 0x7F277C00u;
    // 7F277C00: bc    12, 0, 0x7F277C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277C08;
        }
    }

label_7F277C04:
    ctx->pc = 0x7F277C04u;
    ctx->downcount -= 1;
    // 7F277C04: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F277C08u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F277C08:
    ctx->pc = 0x7F277C08u;
    ctx->downcount -= 5;
    // 7F277C08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277C0C:
    ctx->pc = 0x7F277C0Cu;
    // 7F277C0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277C10:
    ctx->pc = 0x7F277C10u;
    // 7F277C10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277C14:
    ctx->pc = 0x7F277C14u;
    // 7F277C14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277C18:
    ctx->pc = 0x7F277C18u;
    ctx->downcount -= 25;
    // 7F277C18: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277C1C:
    ctx->pc = 0x7F277C1Cu;
    // 7F277C1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277C20:
    ctx->pc = 0x7F277C20u;
    // 7F277C20: li      r6, 8192
    ctx->gpr[6] = (u32)(s32)(8192);

label_7F277C24:
    ctx->pc = 0x7F277C24u;
    // 7F277C24: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277C28:
    ctx->pc = 0x7F277C28u;
    // 7F277C28: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F277C2C:
    ctx->pc = 0x7F277C2Cu;
    // 7F277C2C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F277C30:
    ctx->pc = 0x7F277C30u;
    // 7F277C30: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277C34:
    ctx->pc = 0x7F277C34u;
    // 7F277C34: lis     r3, 165
    ctx->gpr[3] = ((u32)(s32)(165) << 16);

label_7F277C38:
    ctx->pc = 0x7F277C38u;
    // 7F277C38: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F277C3C:
    ctx->pc = 0x7F277C3Cu;
    // 7F277C3C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F277C40:
    ctx->pc = 0x7F277C40u;
    // 7F277C40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F277C44:
    ctx->pc = 0x7F277C44u;
    // 7F277C44: addi    r3, r3, 22455
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22455);

label_7F277C48:
    ctx->pc = 0x7F277C48u;
    // 7F277C48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F277C4C:
    ctx->pc = 0x7F277C4Cu;
    // 7F277C4C: stw     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277C50:
    ctx->pc = 0x7F277C50u;
    // 7F277C50: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F277C54u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F277C54:
    ctx->pc = 0x7F277C54u;
    ctx->downcount -= 2;
    // 7F277C54: cmpwi   r3, 0
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

label_7F277C58:
    ctx->pc = 0x7F277C58u;
    // 7F277C58: bc    4, 0, 0x7F277C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277C64;
        }
    }

label_7F277C5C:
    ctx->pc = 0x7F277C5Cu;
    ctx->downcount -= 2;
    // 7F277C5C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F277C60:
    ctx->pc = 0x7F277C60u;
    // 7F277C60: b       0x7F277CA4
    {
            goto label_7F277CA4;
    }

label_7F277C64:
    ctx->pc = 0x7F277C64u;
    ctx->downcount -= 3;
    // 7F277C64: stw     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277C68:
    ctx->pc = 0x7F277C68u;
    // 7F277C68: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277C6C:
    ctx->pc = 0x7F277C6Cu;
    // 7F277C6C: bl      0x7F2E4BD0
    {
            ctx->lr = 0x7F277C70u;
            ctx->pc = 0x7F2E4BD0u;
            return;
    }

label_7F277C70:
    ctx->pc = 0x7F277C70u;
    ctx->downcount -= 13;
    // 7F277C70: stw     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277C74:
    ctx->pc = 0x7F277C74u;
    // 7F277C74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F277C78:
    ctx->pc = 0x7F277C78u;
    // 7F277C78: lis     r3, 32551
    ctx->gpr[3] = ((u32)(s32)(32551) << 16);

label_7F277C7C:
    ctx->pc = 0x7F277C7Cu;
    // 7F277C7C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F277C80:
    ctx->pc = 0x7F277C80u;
    // 7F277C80: stw     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277C84:
    ctx->pc = 0x7F277C84u;
    // 7F277C84: addi    r4, r3, 31364
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31364);

label_7F277C88:
    ctx->pc = 0x7F277C88u;
    // 7F277C88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277C8C:
    ctx->pc = 0x7F277C8Cu;
    // 7F277C8C: stw     r4, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277C90:
    ctx->pc = 0x7F277C90u;
    // 7F277C90: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277C94:
    ctx->pc = 0x7F277C94u;
    // 7F277C94: stw     r30, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F277C98:
    ctx->pc = 0x7F277C98u;
    // 7F277C98: stw     r31, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277C9C:
    ctx->pc = 0x7F277C9Cu;
    // 7F277C9C: stw     r5, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277CA0:
    ctx->pc = 0x7F277CA0u;
    // 7F277CA0: stw     r5, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277CA4:
    ctx->pc = 0x7F277CA4u;
    ctx->downcount -= 16;
    // 7F277CA4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F277CA8:
    ctx->pc = 0x7F277CA8u;
    // 7F277CA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277CAC:
    ctx->pc = 0x7F277CACu;
    // 7F277CAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277CB0:
    ctx->pc = 0x7F277CB0u;
    // 7F277CB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F277CB4:
    ctx->pc = 0x7F277CB4u;
    // 7F277CB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277CB8:
    ctx->pc = 0x7F277CB8u;
    ctx->downcount -= 21;
    // 7F277CB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277CBC:
    ctx->pc = 0x7F277CBCu;
    // 7F277CBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277CC0:
    ctx->pc = 0x7F277CC0u;
    // 7F277CC0: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F277CC4:
    ctx->pc = 0x7F277CC4u;
    // 7F277CC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F277CC8:
    ctx->pc = 0x7F277CC8u;
    // 7F277CC8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277CCC:
    ctx->pc = 0x7F277CCCu;
    // 7F277CCC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F277CD0:
    ctx->pc = 0x7F277CD0u;
    // 7F277CD0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277CD4:
    ctx->pc = 0x7F277CD4u;
    // 7F277CD4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F277CD8:
    ctx->pc = 0x7F277CD8u;
    // 7F277CD8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F277CDC:
    ctx->pc = 0x7F277CDCu;
    // 7F277CDC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F277CE0:
    ctx->pc = 0x7F277CE0u;
    // 7F277CE0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F277CE4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F277CE4:
    ctx->pc = 0x7F277CE4u;
    ctx->downcount -= 2;
    // 7F277CE4: or.   r31, r3, r3
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

label_7F277CE8:
    ctx->pc = 0x7F277CE8u;
    // 7F277CE8: bc    12, 2, 0x7F277D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277D50;
        }
    }

label_7F277CEC:
    ctx->pc = 0x7F277CECu;
    ctx->downcount -= 5;
    // 7F277CEC: lis     r4, 32551
    ctx->gpr[4] = ((u32)(s32)(32551) << 16);

label_7F277CF0:
    ctx->pc = 0x7F277CF0u;
    // 7F277CF0: lis     r5, 32551
    ctx->gpr[5] = ((u32)(s32)(32551) << 16);

label_7F277CF4:
    ctx->pc = 0x7F277CF4u;
    // 7F277CF4: addi    r4, r4, 31524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31524);

label_7F277CF8:
    ctx->pc = 0x7F277CF8u;
    // 7F277CF8: addi    r5, r5, 31724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31724);

label_7F277CFC:
    ctx->pc = 0x7F277CFCu;
    // 7F277CFC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F277D00u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F277D00:
    ctx->pc = 0x7F277D00u;
    ctx->downcount -= 14;
    // 7F277D00: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277D04:
    ctx->pc = 0x7F277D04u;
    // 7F277D04: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F277D08:
    ctx->pc = 0x7F277D08u;
    // 7F277D08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F277D0C:
    ctx->pc = 0x7F277D0Cu;
    // 7F277D0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277D10:
    ctx->pc = 0x7F277D10u;
    // 7F277D10: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F277D14:
    ctx->pc = 0x7F277D14u;
    // 7F277D14: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F277D18:
    ctx->pc = 0x7F277D18u;
    // 7F277D18: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F277D1C:
    ctx->pc = 0x7F277D1Cu;
    // 7F277D1C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F277D20:
    ctx->pc = 0x7F277D20u;
    // 7F277D20: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F277D24:
    ctx->pc = 0x7F277D24u;
    // 7F277D24: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F277D28:
    ctx->pc = 0x7F277D28u;
    // 7F277D28: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F277D2C:
    ctx->pc = 0x7F277D2Cu;
    // 7F277D2C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F277D30:
    ctx->pc = 0x7F277D30u;
    // 7F277D30: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277D34:
    ctx->pc = 0x7F277D34u;
    // 7F277D34: bl      0x7F277C18
    {
            ctx->lr = 0x7F277D38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F277C18u;
                return;
            }
            goto label_7F277C18;
    }

label_7F277D38:
    ctx->pc = 0x7F277D38u;
    ctx->downcount -= 2;
    // 7F277D38: cmpwi   r3, 0
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

label_7F277D3C:
    ctx->pc = 0x7F277D3Cu;
    // 7F277D3C: bc    4, 0, 0x7F277D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277D50;
        }
    }

label_7F277D40:
    ctx->pc = 0x7F277D40u;
    ctx->downcount -= 2;
    // 7F277D40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277D44:
    ctx->pc = 0x7F277D44u;
    // 7F277D44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F277D48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F277D48:
    ctx->pc = 0x7F277D48u;
    ctx->downcount -= 2;
    // 7F277D48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F277D4C:
    ctx->pc = 0x7F277D4Cu;
    // 7F277D4C: b       0x7F277D54
    {
            goto label_7F277D54;
    }

label_7F277D50:
    ctx->pc = 0x7F277D50u;
    ctx->downcount -= 1;
    // 7F277D50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F277D54:
    ctx->pc = 0x7F277D54u;
    ctx->downcount -= 16;
    // 7F277D54: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F277D58:
    ctx->pc = 0x7F277D58u;
    // 7F277D58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277D5C:
    ctx->pc = 0x7F277D5Cu;
    // 7F277D5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277D60:
    ctx->pc = 0x7F277D60u;
    // 7F277D60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F277D64:
    ctx->pc = 0x7F277D64u;
    // 7F277D64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277D68:
    ctx->pc = 0x7F277D68u;
    ctx->downcount -= 15;
    // 7F277D68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277D6C:
    ctx->pc = 0x7F277D6Cu;
    // 7F277D6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277D70:
    ctx->pc = 0x7F277D70u;
    // 7F277D70: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F277D74:
    ctx->pc = 0x7F277D74u;
    // 7F277D74: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F277D78:
    ctx->pc = 0x7F277D78u;
    // 7F277D78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277D7C:
    ctx->pc = 0x7F277D7Cu;
    // 7F277D7C: addi    r5, r3, 19248
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19248);

label_7F277D80:
    ctx->pc = 0x7F277D80u;
    // 7F277D80: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F277D84:
    ctx->pc = 0x7F277D84u;
    // 7F277D84: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_7F277D88:
    ctx->pc = 0x7F277D88u;
    // 7F277D88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F277D8C:
    ctx->pc = 0x7F277D8Cu;
    // 7F277D8C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277D90:
    ctx->pc = 0x7F277D90u;
    // 7F277D90: lwz     r31, -7608(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7608);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277D94:
    ctx->pc = 0x7F277D94u;
    // 7F277D94: oris    r4, r4, 0x2000
    ctx->gpr[4] = ctx->gpr[4] | (0x2000u << 16);

label_7F277D98:
    ctx->pc = 0x7F277D98u;
    // 7F277D98: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277D9C:
    ctx->pc = 0x7F277D9Cu;
    // 7F277D9C: stw     r0, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277DA0:
    ctx->pc = 0x7F277DA0u;
    // 7F277DA0: bl      0x7F01ED70
    {
            ctx->lr = 0x7F277DA4u;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F277DA4:
    ctx->pc = 0x7F277DA4u;
    ctx->downcount -= 10;
    // 7F277DA4: stw     r3, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277DA8:
    ctx->pc = 0x7F277DA8u;
    // 7F277DA8: lis     r3, 32555
    ctx->gpr[3] = ((u32)(s32)(32555) << 16);

label_7F277DAC:
    ctx->pc = 0x7F277DACu;
    // 7F277DAC: addi    r0, r3, 3112
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3112);

label_7F277DB0:
    ctx->pc = 0x7F277DB0u;
    // 7F277DB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F277DB4:
    ctx->pc = 0x7F277DB4u;
    // 7F277DB4: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277DB8:
    ctx->pc = 0x7F277DB8u;
    // 7F277DB8: li      r0, 300
    ctx->gpr[0] = (u32)(s32)(300);

label_7F277DBC:
    ctx->pc = 0x7F277DBCu;
    // 7F277DBC: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_7F277DC0:
    ctx->pc = 0x7F277DC0u;
    // 7F277DC0: stw     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F277DC4:
    ctx->pc = 0x7F277DC4u;
    // 7F277DC4: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277DC8:
    ctx->pc = 0x7F277DC8u;
    // 7F277DC8: bl      0x7F01ED70
    {
            ctx->lr = 0x7F277DCCu;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F277DCC:
    ctx->pc = 0x7F277DCCu;
    ctx->downcount -= 3;
    // 7F277DCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277DD0:
    ctx->pc = 0x7F277DD0u;
    // 7F277DD0: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_7F277DD4:
    ctx->pc = 0x7F277DD4u;
    // 7F277DD4: bl      0x7F01ECC8
    {
            ctx->lr = 0x7F277DD8u;
            ctx->pc = 0x7F01ECC8u;
            return;
    }

label_7F277DD8:
    ctx->pc = 0x7F277DD8u;
    ctx->downcount -= 12;
    // 7F277DD8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F277DDC:
    ctx->pc = 0x7F277DDCu;
    // 7F277DDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F277DE0:
    ctx->pc = 0x7F277DE0u;
    // 7F277DE0: addi    r7, r3, 13880
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F277DE4:
    ctx->pc = 0x7F277DE4u;
    // 7F277DE4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F277DE8:
    ctx->pc = 0x7F277DE8u;
    // 7F277DE8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F277DEC:
    ctx->pc = 0x7F277DECu;
    // 7F277DEC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F277DF0:
    ctx->pc = 0x7F277DF0u;
    // 7F277DF0: li      r5, 34
    ctx->gpr[5] = (u32)(s32)(34);

label_7F277DF4:
    ctx->pc = 0x7F277DF4u;
    // 7F277DF4: lha     r6, 296(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(296);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F277DF8:
    ctx->pc = 0x7F277DF8u;
    // 7F277DF8: stw     r6, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F277DFC:
    ctx->pc = 0x7F277DFCu;
    // 7F277DFC: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F277E00:
    ctx->pc = 0x7F277E00u;
    // 7F277E00: sth     r0, 296(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F277E04:
    ctx->pc = 0x7F277E04u;
    // 7F277E04: bl      0x7F011698
    {
            ctx->lr = 0x7F277E08u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F277E08:
    ctx->pc = 0x7F277E08u;
    ctx->downcount -= 2;
    // 7F277E08: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F277E0C:
    ctx->pc = 0x7F277E0Cu;
    // 7F277E0C: bl      0x7F0180A0
    {
            ctx->lr = 0x7F277E10u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F277E10:
    ctx->pc = 0x7F277E10u;
    ctx->downcount -= 6;
    // 7F277E10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277E14:
    ctx->pc = 0x7F277E14u;
    // 7F277E14: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277E18:
    ctx->pc = 0x7F277E18u;
    // 7F277E18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F277E1C:
    ctx->pc = 0x7F277E1Cu;
    // 7F277E1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F277E20:
    ctx->pc = 0x7F277E20u;
    // 7F277E20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2740EC;
        }
    }

label_7F277E24:
    ctx->pc = 0x7F277E24u;
    ctx->downcount -= 21;
    // 7F277E24: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F277E28:
    ctx->pc = 0x7F277E28u;
    // 7F277E28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F277E2C:
    ctx->pc = 0x7F277E2Cu;
    // 7F277E2C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F277E30:
    ctx->pc = 0x7F277E30u;
    // 7F277E30: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277E34:
    ctx->pc = 0x7F277E34u;
    // 7F277E34: stmw     r29, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F277E38:
    ctx->pc = 0x7F277E38u;
    // 7F277E38: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F277E3C:
    ctx->pc = 0x7F277E3Cu;
    // 7F277E3C: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F277E40:
    ctx->pc = 0x7F277E40u;
    // 7F277E40: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E44:
    ctx->pc = 0x7F277E44u;
    // 7F277E44: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F277E48:
    ctx->pc = 0x7F277E48u;
    // 7F277E48: cmpwi   r0, 27
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(27);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F277E4C:
    ctx->pc = 0x7F277E4Cu;
    // 7F277E4C: bc    4, 2, 0x7F277F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F277F08;
        }
    }

label_7F277E50:
    ctx->pc = 0x7F277E50u;
    ctx->downcount -= 3;
    // 7F277E50: lha     r0, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F277E54:
    ctx->pc = 0x7F277E54u;
    // 7F277E54: cmpwi   r0, 0
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

label_7F277E58:
    ctx->pc = 0x7F277E58u;
    // 7F277E58: bc    12, 2, 0x7F277E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277E80;
        }
    }

label_7F277E5C:
    ctx->pc = 0x7F277E5Cu;
    ctx->downcount -= 9;
    // 7F277E5C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E60:
    ctx->pc = 0x7F277E60u;
    // 7F277E60: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277E64:
    ctx->pc = 0x7F277E64u;
    // 7F277E64: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F277E68:
    ctx->pc = 0x7F277E68u;
    // 7F277E68: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277E6C:
    ctx->pc = 0x7F277E6Cu;
    // 7F277E6C: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E70:
    ctx->pc = 0x7F277E70u;
    // 7F277E70: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277E74:
    ctx->pc = 0x7F277E74u;
    // 7F277E74: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F277E78:
    ctx->pc = 0x7F277E78u;
    // 7F277E78: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277E7C:
    ctx->pc = 0x7F277E7Cu;
    // 7F277E7C: b       0x7F277F28
    {
            goto label_7F277F28;
    }

label_7F277E80:
    ctx->pc = 0x7F277E80u;
    ctx->downcount -= 8;
    // 7F277E80: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F277E84:
    ctx->pc = 0x7F277E84u;
    // 7F277E84: lwz     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277E88:
    ctx->pc = 0x7F277E88u;
    // 7F277E88: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F277E8C:
    ctx->pc = 0x7F277E8Cu;
    // 7F277E8C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E90:
    ctx->pc = 0x7F277E90u;
    // 7F277E90: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E94:
    ctx->pc = 0x7F277E94u;
    // 7F277E94: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277E98:
    ctx->pc = 0x7F277E98u;
    // 7F277E98: and.   r0, r3, r0
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

label_7F277E9C:
    ctx->pc = 0x7F277E9Cu;
    // 7F277E9C: bc    12, 2, 0x7F277ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277ED4;
        }
    }

label_7F277EA0:
    ctx->pc = 0x7F277EA0u;
    ctx->downcount -= 13;
    // 7F277EA0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277EA4:
    ctx->pc = 0x7F277EA4u;
    // 7F277EA4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EA8:
    ctx->pc = 0x7F277EA8u;
    // 7F277EA8: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F277EAC:
    ctx->pc = 0x7F277EACu;
    // 7F277EAC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277EB0:
    ctx->pc = 0x7F277EB0u;
    // 7F277EB0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277EB4:
    ctx->pc = 0x7F277EB4u;
    // 7F277EB4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EB8:
    ctx->pc = 0x7F277EB8u;
    // 7F277EB8: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F277EBC:
    ctx->pc = 0x7F277EBCu;
    // 7F277EBC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277EC0:
    ctx->pc = 0x7F277EC0u;
    // 7F277EC0: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277EC4:
    ctx->pc = 0x7F277EC4u;
    // 7F277EC4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EC8:
    ctx->pc = 0x7F277EC8u;
    // 7F277EC8: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F277ECC:
    ctx->pc = 0x7F277ECCu;
    // 7F277ECC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277ED0:
    ctx->pc = 0x7F277ED0u;
    // 7F277ED0: b       0x7F277F28
    {
            goto label_7F277F28;
    }

label_7F277ED4:
    ctx->pc = 0x7F277ED4u;
    ctx->downcount -= 13;
    // 7F277ED4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277ED8:
    ctx->pc = 0x7F277ED8u;
    // 7F277ED8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EDC:
    ctx->pc = 0x7F277EDCu;
    // 7F277EDC: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F277EE0:
    ctx->pc = 0x7F277EE0u;
    // 7F277EE0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277EE4:
    ctx->pc = 0x7F277EE4u;
    // 7F277EE4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277EE8:
    ctx->pc = 0x7F277EE8u;
    // 7F277EE8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EEC:
    ctx->pc = 0x7F277EECu;
    // 7F277EEC: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F277EF0:
    ctx->pc = 0x7F277EF0u;
    // 7F277EF0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277EF4:
    ctx->pc = 0x7F277EF4u;
    // 7F277EF4: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277EF8:
    ctx->pc = 0x7F277EF8u;
    // 7F277EF8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277EFC:
    ctx->pc = 0x7F277EFCu;
    // 7F277EFC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F277F00:
    ctx->pc = 0x7F277F00u;
    // 7F277F00: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277F04:
    ctx->pc = 0x7F277F04u;
    // 7F277F04: b       0x7F277F28
    {
            goto label_7F277F28;
    }

label_7F277F08:
    ctx->pc = 0x7F277F08u;
    ctx->downcount -= 8;
    // 7F277F08: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F0C:
    ctx->pc = 0x7F277F0Cu;
    // 7F277F0C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F10:
    ctx->pc = 0x7F277F10u;
    // 7F277F10: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F277F14:
    ctx->pc = 0x7F277F14u;
    // 7F277F14: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277F18:
    ctx->pc = 0x7F277F18u;
    // 7F277F18: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F1C:
    ctx->pc = 0x7F277F1Cu;
    // 7F277F1C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F20:
    ctx->pc = 0x7F277F20u;
    // 7F277F20: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F277F24:
    ctx->pc = 0x7F277F24u;
    // 7F277F24: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277F28:
    ctx->pc = 0x7F277F28u;
    ctx->downcount -= 8;
    // 7F277F28: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F277F2C:
    ctx->pc = 0x7F277F2Cu;
    // 7F277F2C: lwz     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F30:
    ctx->pc = 0x7F277F30u;
    // 7F277F30: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F277F34:
    ctx->pc = 0x7F277F34u;
    // 7F277F34: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F38:
    ctx->pc = 0x7F277F38u;
    // 7F277F38: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F3C:
    ctx->pc = 0x7F277F3Cu;
    // 7F277F3C: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F40:
    ctx->pc = 0x7F277F40u;
    // 7F277F40: and.   r0, r3, r0
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

label_7F277F44:
    ctx->pc = 0x7F277F44u;
    // 7F277F44: bc    12, 2, 0x7F277F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F277F7C;
        }
    }

label_7F277F48:
    ctx->pc = 0x7F277F48u;
    ctx->downcount -= 13;
    // 7F277F48: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F277F4C:
    ctx->pc = 0x7F277F4Cu;
    // 7F277F4C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F277F50:
    ctx->pc = 0x7F277F50u;
    // 7F277F50: lwz     r0, -5852(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F54:
    ctx->pc = 0x7F277F54u;
    // 7F277F54: addi    r3, r3, -5768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5768);

label_7F277F58:
    ctx->pc = 0x7F277F58u;
    // 7F277F58: lwz     r5, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F277F5C:
    ctx->pc = 0x7F277F5Cu;
    // 7F277F5C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F277F60:
    ctx->pc = 0x7F277F60u;
    // 7F277F60: lwzx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277F64:
    ctx->pc = 0x7F277F64u;
    // 7F277F64: lwz     r31, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277F68:
    ctx->pc = 0x7F277F68u;
    // 7F277F68: lwz     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F6C:
    ctx->pc = 0x7F277F6Cu;
    // 7F277F6C: lwz     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F70:
    ctx->pc = 0x7F277F70u;
    // 7F277F70: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277F74:
    ctx->pc = 0x7F277F74u;
    // 7F277F74: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277F78:
    ctx->pc = 0x7F277F78u;
    // 7F277F78: b       0x7F277F9C
    {
            goto label_7F277F9C;
    }

label_7F277F7C:
    ctx->pc = 0x7F277F7Cu;
    ctx->downcount -= 8;
    // 7F277F7C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F277F80:
    ctx->pc = 0x7F277F80u;
    // 7F277F80: lwz     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F277F84:
    ctx->pc = 0x7F277F84u;
    // 7F277F84: lwz     r4, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F277F88:
    ctx->pc = 0x7F277F88u;
    // 7F277F88: lwz     r31, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F277F8C:
    ctx->pc = 0x7F277F8Cu;
    // 7F277F8C: lwz     r3, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277F90:
    ctx->pc = 0x7F277F90u;
    // 7F277F90: lwz     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277F94:
    ctx->pc = 0x7F277F94u;
    // 7F277F94: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F277F98:
    ctx->pc = 0x7F277F98u;
    // 7F277F98: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F277F9C:
    ctx->pc = 0x7F277F9Cu;
    ctx->downcount -= 6;
    // 7F277F9C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F277FA0:
    ctx->pc = 0x7F277FA0u;
    // 7F277FA0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F277FA4:
    ctx->pc = 0x7F277FA4u;
    // 7F277FA4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277FA8:
    ctx->pc = 0x7F277FA8u;
    // 7F277FA8: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F277FAC:
    ctx->pc = 0x7F277FACu;
    // 7F277FAC: cmpwi   r0, 12
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

label_7F277FB0:
    ctx->pc = 0x7F277FB0u;
    // 7F277FB0: bc    12, 2, 0x7F278614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F278614u;
            return;
        }
    }

label_7F277FB4:
    ctx->pc = 0x7F277FB4u;
    ctx->downcount -= 2;
    // 7F277FB4: cmpwi   r0, 25
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

label_7F277FB8:
    ctx->pc = 0x7F277FB8u;
    // 7F277FB8: bc    12, 2, 0x7F278614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F278614u;
            return;
        }
    }

label_7F277FBC:
    ctx->pc = 0x7F277FBCu;
    ctx->downcount -= 12;
    // 7F277FBC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F277FC0:
    ctx->pc = 0x7F277FC0u;
    // 7F277FC0: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F277FC4:
    ctx->pc = 0x7F277FC4u;
    // 7F277FC4: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F277FC8:
    ctx->pc = 0x7F277FC8u;
    // 7F277FC8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F277FCC:
    ctx->pc = 0x7F277FCCu;
    // 7F277FCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F277FD0:
    ctx->pc = 0x7F277FD0u;
    // 7F277FD0: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F277FD4:
    ctx->pc = 0x7F277FD4u;
    // 7F277FD4: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F277FD8:
    ctx->pc = 0x7F277FD8u;
    // 7F277FD8: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F277FDC:
    ctx->pc = 0x7F277FDCu;
    // 7F277FDC: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F277FE0:
    ctx->pc = 0x7F277FE0u;
    // 7F277FE0: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F277FE4:
    ctx->pc = 0x7F277FE4u;
    // 7F277FE4: or.   r0, r3, r0
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

label_7F277FE8:
    ctx->pc = 0x7F277FE8u;
    // 7F277FE8: bc    12, 2, 0x7F278008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F278008;
        }
    }

label_7F277FEC:
    ctx->pc = 0x7F277FECu;
    ctx->downcount -= 7;
    // 7F277FEC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F277FF0:
    ctx->pc = 0x7F277FF0u;
    // 7F277FF0: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F277FF4:
    ctx->pc = 0x7F277FF4u;
    // 7F277FF4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277FF8:
    ctx->pc = 0x7F277FF8u;
    // 7F277FF8: lwz     r3, 2624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F277FFC:
    ctx->pc = 0x7F277FFCu;
    // 7F277FFC: addis   r0, r3, -123
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-123) << 16);

label_7F278000:
    ctx->pc = 0x7F278000u;
    // 7F278000: cmplwi  r0, 0x73C4
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x73C4u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F278004:
    ctx->pc = 0x7F278004u;
    // 7F278004: bc    4, 2, 0x7F278614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F278614u;
            return;
        }
    }

label_7F278008:
    ctx->pc = 0x7F278008u;
    ctx->downcount -= 13;
    // 7F278008: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27800C:
    ctx->pc = 0x7F27800Cu;
    // 7F27800C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F278010:
    ctx->pc = 0x7F278010u;
    // 7F278010: addi    r6, r3, -5744
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5744);

label_7F278014:
    ctx->pc = 0x7F278014u;
    // 7F278014: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F278018:
    ctx->pc = 0x7F278018u;
    // 7F278018: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27801C:
    ctx->pc = 0x7F27801Cu;
    // 7F27801C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_7F278020:
    ctx->pc = 0x7F278020u;
    // 7F278020: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F278024:
    ctx->pc = 0x7F278024u;
    // 7F278024: and   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F278028:
    ctx->pc = 0x7F278028u;
    // 7F278028: and   r3, r6, r5
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F27802C:
    ctx->pc = 0x7F27802Cu;
    // 7F27802C: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F278030:
    ctx->pc = 0x7F278030u;
    // 7F278030: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F278034:
    ctx->pc = 0x7F278034u;
    // 7F278034: or.   r0, r3, r0
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

label_7F278038:
    ctx->pc = 0x7F278038u;
    // 7F278038: bc    12, 2, 0x7F278040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F278040;
        }
    }

label_7F27803C:
    ctx->pc = 0x7F27803Cu;
    ctx->downcount -= 1;
    // 7F27803C: b       0x7F278614
    {
            ctx->pc = 0x7F278614u;
            return;
    }

label_7F278040:
    ctx->pc = 0x7F278040u;
    ctx->downcount -= 3;
    // 7F278040: lwz     r12, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F278044:
    ctx->pc = 0x7F278044u;
    // 7F278044: cmplwi  r12, 0x0000
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

label_7F278048:
    ctx->pc = 0x7F278048u;
    // 7F278048: bc    12, 2, 0x7F2780C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2780C4;
        }
    }

label_7F27804C:
    ctx->pc = 0x7F27804Cu;
    ctx->downcount -= 7;
    // 7F27804C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F278050:
    ctx->pc = 0x7F278050u;
    // 7F278050: lwz     r4, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F278054:
    ctx->pc = 0x7F278054u;
    // 7F278054: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F278058:
    ctx->pc = 0x7F278058u;
    // 7F278058: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27805C:
    ctx->pc = 0x7F27805Cu;
    // 7F27805C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F278060:
    ctx->pc = 0x7F278060u;
    // 7F278060: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F278064u;
            ctx->pc = target;
            return;
        }
    }

label_7F278064:
    ctx->pc = 0x7F278064u;
    ctx->downcount -= 2;
    // 7F278064: cmpwi   r3, 1
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

label_7F278068:
    ctx->pc = 0x7F278068u;
    // 7F278068: bc    4, 2, 0x7F278078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F278078;
        }
    }

label_7F27806C:
    ctx->pc = 0x7F27806Cu;
    ctx->downcount -= 3;
    // 7F27806C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F278070:
    ctx->pc = 0x7F278070u;
    // 7F278070: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F278074:
    ctx->pc = 0x7F278074u;
    // 7F278074: b       0x7F2780B4
    {
            goto label_7F2780B4;
    }

label_7F278078:
    ctx->pc = 0x7F278078u;
    ctx->downcount -= 2;
    // 7F278078: cmpwi   r3, 2
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

label_7F27807C:
    ctx->pc = 0x7F27807Cu;
    // 7F27807C: bc    4, 2, 0x7F2780B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2780B4;
        }
    }

label_7F278080:
    ctx->pc = 0x7F278080u;
    ctx->downcount -= 13;
    // 7F278080: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F278084:
    ctx->pc = 0x7F278084u;
    // 7F278084: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F278088:
    ctx->pc = 0x7F278088u;
    // 7F278088: addi    r6, r4, 19248
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(19248);

label_7F27808C:
    ctx->pc = 0x7F27808Cu;
    // 7F27808C: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F278090:
    ctx->pc = 0x7F278090u;
    // 7F278090: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F278094:
    ctx->pc = 0x7F278094u;
    // 7F278094: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F278098:
    ctx->pc = 0x7F278098u;
    // 7F278098: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27809C:
    ctx->pc = 0x7F27809Cu;
    // 7F27809C: rlwinm r5, r5, 0, 3, 1
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xDFFFFFFFu;
    }

label_7F2780A0:
    ctx->pc = 0x7F2780A0u;
    // 7F2780A0: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2780A4:
    ctx->pc = 0x7F2780A4u;
    // 7F2780A4: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2780A8:
    ctx->pc = 0x7F2780A8u;
    // 7F2780A8: sth     r5, 296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2780AC:
    ctx->pc = 0x7F2780ACu;
    // 7F2780AC: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2780B0:
    ctx->pc = 0x7F2780B0u;
    // 7F2780B0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2780B4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2780B4:
    ctx->pc = 0x7F2780B4u;
    ctx->downcount -= 4;
    // 7F2780B4: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2780B8:
    ctx->pc = 0x7F2780B8u;
    // 7F2780B8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2780BC:
    ctx->pc = 0x7F2780BCu;
    // 7F2780BC: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2780C0:
    ctx->pc = 0x7F2780C0u;
    // 7F2780C0: b       0x7F27823C
    {
            ctx->pc = 0x7F27823Cu;
            return;
    }

label_7F2780C4:
    ctx->pc = 0x7F2780C4u;
    ctx->downcount -= 51;
    // 7F2780C4: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F2780C8:
    ctx->pc = 0x7F2780C8u;
    // 7F2780C8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_7F2780CC:
    ctx->pc = 0x7F2780CCu;
    // 7F2780CC: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F2780D0:
    ctx->pc = 0x7F2780D0u;
    // 7F2780D0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2780D4:
    ctx->pc = 0x7F2780D4u;
    // 7F2780D4: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2780D8:
    ctx->pc = 0x7F2780D8u;
    // 7F2780D8: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F2780DC:
    ctx->pc = 0x7F2780DCu;
    // 7F2780DC: subf.   r0, r0, r4
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

label_7F2780E0:
    ctx->pc = 0x7F2780E0u;
    // 7F2780E0: bc    4, 2, 0x7F278100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F278100u;
            return;
        }
    }

label_7F2780E4:
    ctx->pc = 0x7F2780E4u;
    ctx->downcount -= 2;
    // 7F2780E4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2780E8:
    ctx->pc = 0x7F2780E8u;
    // 7F2780E8: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2780ECu;
    return;
return_dispatch_7F2740EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F27411Cu: goto label_7F27411C;
    case 0x7F274124u: goto label_7F274124;
    case 0x7F27412Cu: goto label_7F27412C;
    case 0x7F274150u: goto label_7F274150;
    case 0x7F274168u: goto label_7F274168;
    case 0x7F2741B8u: goto label_7F2741B8;
    case 0x7F2741C0u: goto label_7F2741C0;
    case 0x7F2741ECu: goto label_7F2741EC;
    case 0x7F2741F4u: goto label_7F2741F4;
    case 0x7F2742A0u: goto label_7F2742A0;
    case 0x7F2742BCu: goto label_7F2742BC;
    case 0x7F2742D0u: goto label_7F2742D0;
    case 0x7F2742E0u: goto label_7F2742E0;
    case 0x7F2742F0u: goto label_7F2742F0;
    case 0x7F274300u: goto label_7F274300;
    case 0x7F27431Cu: goto label_7F27431C;
    case 0x7F274330u: goto label_7F274330;
    case 0x7F274340u: goto label_7F274340;
    case 0x7F274350u: goto label_7F274350;
    case 0x7F274360u: goto label_7F274360;
    case 0x7F27437Cu: goto label_7F27437C;
    case 0x7F274390u: goto label_7F274390;
    case 0x7F2743A0u: goto label_7F2743A0;
    case 0x7F2743B0u: goto label_7F2743B0;
    case 0x7F2743C0u: goto label_7F2743C0;
    case 0x7F2743DCu: goto label_7F2743DC;
    case 0x7F2743F0u: goto label_7F2743F0;
    case 0x7F274400u: goto label_7F274400;
    case 0x7F274410u: goto label_7F274410;
    case 0x7F274420u: goto label_7F274420;
    case 0x7F27443Cu: goto label_7F27443C;
    case 0x7F274450u: goto label_7F274450;
    case 0x7F274460u: goto label_7F274460;
    case 0x7F274470u: goto label_7F274470;
    case 0x7F274480u: goto label_7F274480;
    case 0x7F2744B4u: goto label_7F2744B4;
    case 0x7F274578u: goto label_7F274578;
    case 0x7F2745A0u: goto label_7F2745A0;
    case 0x7F2745ACu: goto label_7F2745AC;
    case 0x7F2745DCu: goto label_7F2745DC;
    case 0x7F2745ECu: goto label_7F2745EC;
    case 0x7F274600u: goto label_7F274600;
    case 0x7F274654u: goto label_7F274654;
    case 0x7F274674u: goto label_7F274674;
    case 0x7F274684u: goto label_7F274684;
    case 0x7F274708u: goto label_7F274708;
    case 0x7F274714u: goto label_7F274714;
    case 0x7F274738u: goto label_7F274738;
    case 0x7F27476Cu: goto label_7F27476C;
    case 0x7F274778u: goto label_7F274778;
    case 0x7F2747B8u: goto label_7F2747B8;
    case 0x7F2747C8u: goto label_7F2747C8;
    case 0x7F274810u: goto label_7F274810;
    case 0x7F27488Cu: goto label_7F27488C;
    case 0x7F2748A8u: goto label_7F2748A8;
    case 0x7F2748E8u: goto label_7F2748E8;
    case 0x7F2748F8u: goto label_7F2748F8;
    case 0x7F274960u: goto label_7F274960;
    case 0x7F274978u: goto label_7F274978;
    case 0x7F2749B8u: goto label_7F2749B8;
    case 0x7F2749D0u: goto label_7F2749D0;
    case 0x7F274A10u: goto label_7F274A10;
    case 0x7F274A28u: goto label_7F274A28;
    case 0x7F274AC0u: goto label_7F274AC0;
    case 0x7F274AF0u: goto label_7F274AF0;
    case 0x7F274B30u: goto label_7F274B30;
    case 0x7F274B3Cu: goto label_7F274B3C;
    case 0x7F274B4Cu: goto label_7F274B4C;
    case 0x7F274B5Cu: goto label_7F274B5C;
    case 0x7F274BB8u: goto label_7F274BB8;
    case 0x7F274BCCu: goto label_7F274BCC;
    case 0x7F274BFCu: goto label_7F274BFC;
    case 0x7F274C40u: goto label_7F274C40;
    case 0x7F274C58u: goto label_7F274C58;
    case 0x7F274C70u: goto label_7F274C70;
    case 0x7F274C80u: goto label_7F274C80;
    case 0x7F274CA0u: goto label_7F274CA0;
    case 0x7F274CB0u: goto label_7F274CB0;
    case 0x7F274CC0u: goto label_7F274CC0;
    case 0x7F274CCCu: goto label_7F274CCC;
    case 0x7F274CD4u: goto label_7F274CD4;
    case 0x7F274CDCu: goto label_7F274CDC;
    case 0x7F274CECu: goto label_7F274CEC;
    case 0x7F274D10u: goto label_7F274D10;
    case 0x7F274D2Cu: goto label_7F274D2C;
    case 0x7F274DB0u: goto label_7F274DB0;
    case 0x7F274DB8u: goto label_7F274DB8;
    case 0x7F274E04u: goto label_7F274E04;
    case 0x7F274E0Cu: goto label_7F274E0C;
    case 0x7F274E20u: goto label_7F274E20;
    case 0x7F274E38u: goto label_7F274E38;
    case 0x7F274E40u: goto label_7F274E40;
    case 0x7F274E7Cu: goto label_7F274E7C;
    case 0x7F274E80u: goto label_7F274E80;
    case 0x7F274ECCu: goto label_7F274ECC;
    case 0x7F274EECu: goto label_7F274EEC;
    case 0x7F274F24u: goto label_7F274F24;
    case 0x7F274F30u: goto label_7F274F30;
    case 0x7F274F3Cu: goto label_7F274F3C;
    case 0x7F274F4Cu: goto label_7F274F4C;
    case 0x7F274F84u: goto label_7F274F84;
    case 0x7F274F90u: goto label_7F274F90;
    case 0x7F274F98u: goto label_7F274F98;
    case 0x7F274FD4u: goto label_7F274FD4;
    case 0x7F274FE0u: goto label_7F274FE0;
    case 0x7F274FF0u: goto label_7F274FF0;
    case 0x7F274FFCu: goto label_7F274FFC;
    case 0x7F275004u: goto label_7F275004;
    case 0x7F27500Cu: goto label_7F27500C;
    case 0x7F27501Cu: goto label_7F27501C;
    case 0x7F275064u: goto label_7F275064;
    case 0x7F2750D4u: goto label_7F2750D4;
    case 0x7F2750E0u: goto label_7F2750E0;
    case 0x7F2750E8u: goto label_7F2750E8;
    case 0x7F2750F0u: goto label_7F2750F0;
    case 0x7F275140u: goto label_7F275140;
    case 0x7F27518Cu: goto label_7F27518C;
    case 0x7F2751CCu: goto label_7F2751CC;
    case 0x7F2751DCu: goto label_7F2751DC;
    case 0x7F2751F8u: goto label_7F2751F8;
    case 0x7F27522Cu: goto label_7F27522C;
    case 0x7F2752B4u: goto label_7F2752B4;
    case 0x7F275314u: goto label_7F275314;
    case 0x7F275338u: goto label_7F275338;
    case 0x7F27539Cu: goto label_7F27539C;
    case 0x7F275424u: goto label_7F275424;
    case 0x7F275434u: goto label_7F275434;
    case 0x7F275498u: goto label_7F275498;
    case 0x7F2754C8u: goto label_7F2754C8;
    case 0x7F2754DCu: goto label_7F2754DC;
    case 0x7F2754F0u: goto label_7F2754F0;
    case 0x7F275540u: goto label_7F275540;
    case 0x7F275558u: goto label_7F275558;
    case 0x7F275570u: goto label_7F275570;
    case 0x7F2755A0u: goto label_7F2755A0;
    case 0x7F2755B8u: goto label_7F2755B8;
    case 0x7F2755D0u: goto label_7F2755D0;
    case 0x7F275624u: goto label_7F275624;
    case 0x7F275630u: goto label_7F275630;
    case 0x7F27566Cu: goto label_7F27566C;
    case 0x7F2756BCu: goto label_7F2756BC;
    case 0x7F2756D4u: goto label_7F2756D4;
    case 0x7F2756ECu: goto label_7F2756EC;
    case 0x7F2756F4u: goto label_7F2756F4;
    case 0x7F27574Cu: goto label_7F27574C;
    case 0x7F27577Cu: goto label_7F27577C;
    case 0x7F275790u: goto label_7F275790;
    case 0x7F2757A4u: goto label_7F2757A4;
    case 0x7F2757F4u: goto label_7F2757F4;
    case 0x7F27580Cu: goto label_7F27580C;
    case 0x7F275824u: goto label_7F275824;
    case 0x7F275854u: goto label_7F275854;
    case 0x7F27586Cu: goto label_7F27586C;
    case 0x7F275884u: goto label_7F275884;
    case 0x7F2758D8u: goto label_7F2758D8;
    case 0x7F2758E4u: goto label_7F2758E4;
    case 0x7F275944u: goto label_7F275944;
    case 0x7F27595Cu: goto label_7F27595C;
    case 0x7F275974u: goto label_7F275974;
    case 0x7F27597Cu: goto label_7F27597C;
    case 0x7F2759C8u: goto label_7F2759C8;
    case 0x7F275A4Cu: goto label_7F275A4C;
    case 0x7F275A68u: goto label_7F275A68;
    case 0x7F275AF4u: goto label_7F275AF4;
    case 0x7F275B00u: goto label_7F275B00;
    case 0x7F275B2Cu: goto label_7F275B2C;
    case 0x7F275B68u: goto label_7F275B68;
    case 0x7F275B80u: goto label_7F275B80;
    case 0x7F275B88u: goto label_7F275B88;
    case 0x7F275B90u: goto label_7F275B90;
    case 0x7F275BA4u: goto label_7F275BA4;
    case 0x7F275BBCu: goto label_7F275BBC;
    case 0x7F275BC4u: goto label_7F275BC4;
    case 0x7F275BCCu: goto label_7F275BCC;
    case 0x7F275C40u: goto label_7F275C40;
    case 0x7F275C44u: goto label_7F275C44;
    case 0x7F275C54u: goto label_7F275C54;
    case 0x7F275C70u: goto label_7F275C70;
    case 0x7F275C80u: goto label_7F275C80;
    case 0x7F275C94u: goto label_7F275C94;
    case 0x7F275CA4u: goto label_7F275CA4;
    case 0x7F275CC0u: goto label_7F275CC0;
    case 0x7F275CD0u: goto label_7F275CD0;
    case 0x7F275CE4u: goto label_7F275CE4;
    case 0x7F275D44u: goto label_7F275D44;
    case 0x7F275D60u: goto label_7F275D60;
    case 0x7F275DA0u: goto label_7F275DA0;
    case 0x7F275DB0u: goto label_7F275DB0;
    case 0x7F275E60u: goto label_7F275E60;
    case 0x7F275F0Cu: goto label_7F275F0C;
    case 0x7F275F6Cu: goto label_7F275F6C;
    case 0x7F275F7Cu: goto label_7F275F7C;
    case 0x7F275F98u: goto label_7F275F98;
    case 0x7F275FA8u: goto label_7F275FA8;
    case 0x7F275FB4u: goto label_7F275FB4;
    case 0x7F275FF0u: goto label_7F275FF0;
    case 0x7F276000u: goto label_7F276000;
    case 0x7F276010u: goto label_7F276010;
    case 0x7F276028u: goto label_7F276028;
    case 0x7F276038u: goto label_7F276038;
    case 0x7F276048u: goto label_7F276048;
    case 0x7F2760C4u: goto label_7F2760C4;
    case 0x7F2760E8u: goto label_7F2760E8;
    case 0x7F2760FCu: goto label_7F2760FC;
    case 0x7F276158u: goto label_7F276158;
    case 0x7F276210u: goto label_7F276210;
    case 0x7F276220u: goto label_7F276220;
    case 0x7F2762CCu: goto label_7F2762CC;
    case 0x7F276328u: goto label_7F276328;
    case 0x7F276374u: goto label_7F276374;
    case 0x7F27637Cu: goto label_7F27637C;
    case 0x7F276388u: goto label_7F276388;
    case 0x7F2763D0u: goto label_7F2763D0;
    case 0x7F27641Cu: goto label_7F27641C;
    case 0x7F276424u: goto label_7F276424;
    case 0x7F27642Cu: goto label_7F27642C;
    case 0x7F276440u: goto label_7F276440;
    case 0x7F276448u: goto label_7F276448;
    case 0x7F276474u: goto label_7F276474;
    case 0x7F2764BCu: goto label_7F2764BC;
    case 0x7F2764C8u: goto label_7F2764C8;
    case 0x7F2764D8u: goto label_7F2764D8;
    case 0x7F27650Cu: goto label_7F27650C;
    case 0x7F276510u: goto label_7F276510;
    case 0x7F276584u: goto label_7F276584;
    case 0x7F27658Cu: goto label_7F27658C;
    case 0x7F276590u: goto label_7F276590;
    case 0x7F2765BCu: goto label_7F2765BC;
    case 0x7F2765DCu: goto label_7F2765DC;
    case 0x7F276618u: goto label_7F276618;
    case 0x7F2766A8u: goto label_7F2766A8;
    case 0x7F2766B4u: goto label_7F2766B4;
    case 0x7F2766E8u: goto label_7F2766E8;
    case 0x7F2766F0u: goto label_7F2766F0;
    case 0x7F276710u: goto label_7F276710;
    case 0x7F276718u: goto label_7F276718;
    case 0x7F27688Cu: goto label_7F27688C;
    case 0x7F2768A8u: goto label_7F2768A8;
    case 0x7F2768B0u: goto label_7F2768B0;
    case 0x7F2768C4u: goto label_7F2768C4;
    case 0x7F276924u: goto label_7F276924;
    case 0x7F2769B8u: goto label_7F2769B8;
    case 0x7F2769C8u: goto label_7F2769C8;
    case 0x7F2769D0u: goto label_7F2769D0;
    case 0x7F2769F8u: goto label_7F2769F8;
    case 0x7F276A44u: goto label_7F276A44;
    case 0x7F276A80u: goto label_7F276A80;
    case 0x7F276A90u: goto label_7F276A90;
    case 0x7F276A98u: goto label_7F276A98;
    case 0x7F276AC0u: goto label_7F276AC0;
    case 0x7F276B08u: goto label_7F276B08;
    case 0x7F276B78u: goto label_7F276B78;
    case 0x7F276B8Cu: goto label_7F276B8C;
    case 0x7F276B94u: goto label_7F276B94;
    case 0x7F276BA0u: goto label_7F276BA0;
    case 0x7F276BACu: goto label_7F276BAC;
    case 0x7F276C54u: goto label_7F276C54;
    case 0x7F276D28u: goto label_7F276D28;
    case 0x7F276D58u: goto label_7F276D58;
    case 0x7F276D64u: goto label_7F276D64;
    case 0x7F276D7Cu: goto label_7F276D7C;
    case 0x7F276D90u: goto label_7F276D90;
    case 0x7F276DA4u: goto label_7F276DA4;
    case 0x7F276DB4u: goto label_7F276DB4;
    case 0x7F276DDCu: goto label_7F276DDC;
    case 0x7F276E00u: goto label_7F276E00;
    case 0x7F276E20u: goto label_7F276E20;
    case 0x7F276E34u: goto label_7F276E34;
    case 0x7F276E78u: goto label_7F276E78;
    case 0x7F277070u: goto label_7F277070;
    case 0x7F2770B8u: goto label_7F2770B8;
    case 0x7F2770BCu: goto label_7F2770BC;
    case 0x7F2770C8u: goto label_7F2770C8;
    case 0x7F2770E4u: goto label_7F2770E4;
    case 0x7F2771BCu: goto label_7F2771BC;
    case 0x7F2771D4u: goto label_7F2771D4;
    case 0x7F277200u: goto label_7F277200;
    case 0x7F277228u: goto label_7F277228;
    case 0x7F277254u: goto label_7F277254;
    case 0x7F2772C0u: goto label_7F2772C0;
    case 0x7F2772DCu: goto label_7F2772DC;
    case 0x7F277304u: goto label_7F277304;
    case 0x7F277314u: goto label_7F277314;
    case 0x7F277324u: goto label_7F277324;
    case 0x7F277378u: goto label_7F277378;
    case 0x7F2773B0u: goto label_7F2773B0;
    case 0x7F2773F8u: goto label_7F2773F8;
    case 0x7F27743Cu: goto label_7F27743C;
    case 0x7F2774A8u: goto label_7F2774A8;
    case 0x7F2774C0u: goto label_7F2774C0;
    case 0x7F2774D0u: goto label_7F2774D0;
    case 0x7F277534u: goto label_7F277534;
    case 0x7F277560u: goto label_7F277560;
    case 0x7F27756Cu: goto label_7F27756C;
    case 0x7F27757Cu: goto label_7F27757C;
    case 0x7F277594u: goto label_7F277594;
    case 0x7F2775B0u: goto label_7F2775B0;
    case 0x7F2775C4u: goto label_7F2775C4;
    case 0x7F2775F0u: goto label_7F2775F0;
    case 0x7F277614u: goto label_7F277614;
    case 0x7F27762Cu: goto label_7F27762C;
    case 0x7F277670u: goto label_7F277670;
    case 0x7F2776A0u: goto label_7F2776A0;
    case 0x7F2776BCu: goto label_7F2776BC;
    case 0x7F2776D8u: goto label_7F2776D8;
    case 0x7F277750u: goto label_7F277750;
    case 0x7F27776Cu: goto label_7F27776C;
    case 0x7F277774u: goto label_7F277774;
    case 0x7F2777B0u: goto label_7F2777B0;
    case 0x7F2777D4u: goto label_7F2777D4;
    case 0x7F277804u: goto label_7F277804;
    case 0x7F277814u: goto label_7F277814;
    case 0x7F27783Cu: goto label_7F27783C;
    case 0x7F277878u: goto label_7F277878;
    case 0x7F277888u: goto label_7F277888;
    case 0x7F2779A8u: goto label_7F2779A8;
    case 0x7F2779F4u: goto label_7F2779F4;
    case 0x7F277A08u: goto label_7F277A08;
    case 0x7F277A5Cu: goto label_7F277A5C;
    case 0x7F277AC8u: goto label_7F277AC8;
    case 0x7F277AE0u: goto label_7F277AE0;
    case 0x7F277AF0u: goto label_7F277AF0;
    case 0x7F277B3Cu: goto label_7F277B3C;
    case 0x7F277B4Cu: goto label_7F277B4C;
    case 0x7F277B94u: goto label_7F277B94;
    case 0x7F277BA4u: goto label_7F277BA4;
    case 0x7F277BB4u: goto label_7F277BB4;
    case 0x7F277BC4u: goto label_7F277BC4;
    case 0x7F277C08u: goto label_7F277C08;
    case 0x7F277C54u: goto label_7F277C54;
    case 0x7F277C70u: goto label_7F277C70;
    case 0x7F277CE4u: goto label_7F277CE4;
    case 0x7F277D00u: goto label_7F277D00;
    case 0x7F277D38u: goto label_7F277D38;
    case 0x7F277D48u: goto label_7F277D48;
    case 0x7F277DA4u: goto label_7F277DA4;
    case 0x7F277DCCu: goto label_7F277DCC;
    case 0x7F277DD8u: goto label_7F277DD8;
    case 0x7F277E08u: goto label_7F277E08;
    case 0x7F277E10u: goto label_7F277E10;
    case 0x7F278064u: goto label_7F278064;
    case 0x7F2780B4u: goto label_7F2780B4;
    default: return;
    }
}

