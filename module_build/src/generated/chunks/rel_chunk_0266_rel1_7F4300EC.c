// DolRecomp output
#include "../generated.h"

static void loop_7F430724(CPUState* ctx) {
label_7F430724:
    ctx->downcount -= 5;
    ctx->pc = 0x7F430724u;
    // 7F430724: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F430728u;
    // 7F430728: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F43072Cu;
    // 7F43072C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F430730u;
    // 7F430730: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F430734: bc    16, 0, 0x7F430724
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430724u;
                return;
            }
            goto label_7F430724;
        }
    }

    ctx->pc = 0x7F430738u;
}

static void loop_7F4320D0(CPUState* ctx) {
label_7F4320D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F4320D0u;
    // 7F4320D0: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F4320D4u;
    // 7F4320D4: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F4320D8u;
    // 7F4320D8: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F4320DCu;
    // 7F4320DC: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F4320E0: bc    16, 0, 0x7F4320D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4320D0u;
                return;
            }
            goto label_7F4320D0;
        }
    }

    ctx->pc = 0x7F4320E4u;
}

static void loop_7F432200(CPUState* ctx) {
label_7F432200:
    ctx->downcount -= 5;
    ctx->pc = 0x7F432200u;
    // 7F432200: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F432204u;
    // 7F432204: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F432208u;
    // 7F432208: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F43220Cu;
    // 7F43220C: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F432210: bc    16, 0, 0x7F432200
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432200u;
                return;
            }
            goto label_7F432200;
        }
    }

    ctx->pc = 0x7F432214u;
}

static void loop_7F433D0C(CPUState* ctx) {
label_7F433D0C:
    ctx->downcount -= 10;
    ctx->pc = 0x7F433D0Cu;
    // 7F433D0C: lbz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x7F433D10u;
    // 7F433D10: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F433D14u;
    // 7F433D14: lbz     r0, 49(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(49);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x7F433D18u;
    // 7F433D18: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F433D1Cu;
    // 7F433D1C: lbz     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x7F433D20u;
    // 7F433D20: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F433D24u;
    // 7F433D24: lbz     r0, 51(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(51);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x7F433D28u;
    // 7F433D28: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F433D2C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    // 7F433D30: bc    16, 0, 0x7F433D0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433D0Cu;
                return;
            }
            goto label_7F433D0C;
        }
    }

    ctx->pc = 0x7F433D34u;
}

static void loop_7F433E3C(CPUState* ctx) {
label_7F433E3C:
    ctx->downcount -= 7;
    ctx->pc = 0x7F433E3Cu;
    // 7F433E3C: stb     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E40u;
    // 7F433E40: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E44u;
    // 7F433E44: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E48u;
    // 7F433E48: stb     r4, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E4Cu;
    // 7F433E4C: sth     r3, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    // 7F433E50: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

    // 7F433E54: bc    16, 0, 0x7F433E3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433E3Cu;
                return;
            }
            goto label_7F433E3C;
        }
    }

    ctx->pc = 0x7F433E58u;
}

static void loop_7F433E68(CPUState* ctx) {
label_7F433E68:
    ctx->downcount -= 7;
    ctx->pc = 0x7F433E68u;
    // 7F433E68: stb     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E6Cu;
    // 7F433E6C: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E70u;
    // 7F433E70: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E74u;
    // 7F433E74: stb     r4, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F433E78u;
    // 7F433E78: sth     r3, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    // 7F433E7C: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

    // 7F433E80: bc    16, 0, 0x7F433E68
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433E68u;
                return;
            }
            goto label_7F433E68;
        }
    }

    ctx->pc = 0x7F433E84u;
}

void func_7F4300EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F4300ECu: goto label_7F4300EC;
    case 0x7F4300F0u: goto label_7F4300F0;
    case 0x7F4300F4u: goto label_7F4300F4;
    case 0x7F4300F8u: goto label_7F4300F8;
    case 0x7F4300FCu: goto label_7F4300FC;
    case 0x7F430100u: goto label_7F430100;
    case 0x7F430104u: goto label_7F430104;
    case 0x7F430108u: goto label_7F430108;
    case 0x7F43010Cu: goto label_7F43010C;
    case 0x7F430110u: goto label_7F430110;
    case 0x7F430114u: goto label_7F430114;
    case 0x7F430118u: goto label_7F430118;
    case 0x7F43011Cu: goto label_7F43011C;
    case 0x7F430120u: goto label_7F430120;
    case 0x7F430124u: goto label_7F430124;
    case 0x7F430128u: goto label_7F430128;
    case 0x7F43012Cu: goto label_7F43012C;
    case 0x7F430130u: goto label_7F430130;
    case 0x7F430134u: goto label_7F430134;
    case 0x7F430138u: goto label_7F430138;
    case 0x7F43013Cu: goto label_7F43013C;
    case 0x7F430140u: goto label_7F430140;
    case 0x7F430144u: goto label_7F430144;
    case 0x7F430148u: goto label_7F430148;
    case 0x7F43014Cu: goto label_7F43014C;
    case 0x7F430150u: goto label_7F430150;
    case 0x7F430154u: goto label_7F430154;
    case 0x7F430158u: goto label_7F430158;
    case 0x7F43015Cu: goto label_7F43015C;
    case 0x7F430160u: goto label_7F430160;
    case 0x7F430164u: goto label_7F430164;
    case 0x7F430168u: goto label_7F430168;
    case 0x7F43016Cu: goto label_7F43016C;
    case 0x7F430170u: goto label_7F430170;
    case 0x7F430174u: goto label_7F430174;
    case 0x7F430178u: goto label_7F430178;
    case 0x7F43017Cu: goto label_7F43017C;
    case 0x7F430180u: goto label_7F430180;
    case 0x7F430184u: goto label_7F430184;
    case 0x7F430188u: goto label_7F430188;
    case 0x7F43018Cu: goto label_7F43018C;
    case 0x7F430190u: goto label_7F430190;
    case 0x7F430194u: goto label_7F430194;
    case 0x7F430198u: goto label_7F430198;
    case 0x7F43019Cu: goto label_7F43019C;
    case 0x7F4301A0u: goto label_7F4301A0;
    case 0x7F4301A4u: goto label_7F4301A4;
    case 0x7F4301A8u: goto label_7F4301A8;
    case 0x7F4301ACu: goto label_7F4301AC;
    case 0x7F4301B0u: goto label_7F4301B0;
    case 0x7F4301B4u: goto label_7F4301B4;
    case 0x7F4301B8u: goto label_7F4301B8;
    case 0x7F4301BCu: goto label_7F4301BC;
    case 0x7F4301C0u: goto label_7F4301C0;
    case 0x7F4301C4u: goto label_7F4301C4;
    case 0x7F4301C8u: goto label_7F4301C8;
    case 0x7F4301CCu: goto label_7F4301CC;
    case 0x7F4301D0u: goto label_7F4301D0;
    case 0x7F4301D4u: goto label_7F4301D4;
    case 0x7F4301D8u: goto label_7F4301D8;
    case 0x7F4301DCu: goto label_7F4301DC;
    case 0x7F4301E0u: goto label_7F4301E0;
    case 0x7F4301E4u: goto label_7F4301E4;
    case 0x7F4301E8u: goto label_7F4301E8;
    case 0x7F4301ECu: goto label_7F4301EC;
    case 0x7F4301F0u: goto label_7F4301F0;
    case 0x7F4301F4u: goto label_7F4301F4;
    case 0x7F4301F8u: goto label_7F4301F8;
    case 0x7F4301FCu: goto label_7F4301FC;
    case 0x7F430200u: goto label_7F430200;
    case 0x7F430204u: goto label_7F430204;
    case 0x7F430208u: goto label_7F430208;
    case 0x7F43020Cu: goto label_7F43020C;
    case 0x7F430210u: goto label_7F430210;
    case 0x7F430214u: goto label_7F430214;
    case 0x7F430218u: goto label_7F430218;
    case 0x7F43021Cu: goto label_7F43021C;
    case 0x7F430220u: goto label_7F430220;
    case 0x7F430224u: goto label_7F430224;
    case 0x7F430228u: goto label_7F430228;
    case 0x7F43022Cu: goto label_7F43022C;
    case 0x7F430230u: goto label_7F430230;
    case 0x7F430234u: goto label_7F430234;
    case 0x7F430238u: goto label_7F430238;
    case 0x7F43023Cu: goto label_7F43023C;
    case 0x7F430240u: goto label_7F430240;
    case 0x7F430244u: goto label_7F430244;
    case 0x7F430248u: goto label_7F430248;
    case 0x7F43024Cu: goto label_7F43024C;
    case 0x7F430250u: goto label_7F430250;
    case 0x7F430254u: goto label_7F430254;
    case 0x7F430258u: goto label_7F430258;
    case 0x7F43025Cu: goto label_7F43025C;
    case 0x7F430260u: goto label_7F430260;
    case 0x7F430264u: goto label_7F430264;
    case 0x7F430268u: goto label_7F430268;
    case 0x7F43026Cu: goto label_7F43026C;
    case 0x7F430270u: goto label_7F430270;
    case 0x7F430274u: goto label_7F430274;
    case 0x7F430278u: goto label_7F430278;
    case 0x7F43027Cu: goto label_7F43027C;
    case 0x7F430280u: goto label_7F430280;
    case 0x7F430284u: goto label_7F430284;
    case 0x7F430288u: goto label_7F430288;
    case 0x7F43028Cu: goto label_7F43028C;
    case 0x7F430290u: goto label_7F430290;
    case 0x7F430294u: goto label_7F430294;
    case 0x7F430298u: goto label_7F430298;
    case 0x7F43029Cu: goto label_7F43029C;
    case 0x7F4302A0u: goto label_7F4302A0;
    case 0x7F4302A4u: goto label_7F4302A4;
    case 0x7F4302A8u: goto label_7F4302A8;
    case 0x7F4302ACu: goto label_7F4302AC;
    case 0x7F4302B0u: goto label_7F4302B0;
    case 0x7F4302B4u: goto label_7F4302B4;
    case 0x7F4302B8u: goto label_7F4302B8;
    case 0x7F4302BCu: goto label_7F4302BC;
    case 0x7F4302C0u: goto label_7F4302C0;
    case 0x7F4302C4u: goto label_7F4302C4;
    case 0x7F4302C8u: goto label_7F4302C8;
    case 0x7F4302CCu: goto label_7F4302CC;
    case 0x7F4302D0u: goto label_7F4302D0;
    case 0x7F4302D4u: goto label_7F4302D4;
    case 0x7F4302D8u: goto label_7F4302D8;
    case 0x7F4302DCu: goto label_7F4302DC;
    case 0x7F4302E0u: goto label_7F4302E0;
    case 0x7F4302E4u: goto label_7F4302E4;
    case 0x7F4302E8u: goto label_7F4302E8;
    case 0x7F4302ECu: goto label_7F4302EC;
    case 0x7F4302F0u: goto label_7F4302F0;
    case 0x7F4302F4u: goto label_7F4302F4;
    case 0x7F4302F8u: goto label_7F4302F8;
    case 0x7F4302FCu: goto label_7F4302FC;
    case 0x7F430300u: goto label_7F430300;
    case 0x7F430304u: goto label_7F430304;
    case 0x7F430308u: goto label_7F430308;
    case 0x7F43030Cu: goto label_7F43030C;
    case 0x7F430310u: goto label_7F430310;
    case 0x7F430314u: goto label_7F430314;
    case 0x7F430318u: goto label_7F430318;
    case 0x7F43031Cu: goto label_7F43031C;
    case 0x7F430320u: goto label_7F430320;
    case 0x7F430324u: goto label_7F430324;
    case 0x7F430328u: goto label_7F430328;
    case 0x7F43032Cu: goto label_7F43032C;
    case 0x7F430330u: goto label_7F430330;
    case 0x7F430334u: goto label_7F430334;
    case 0x7F430338u: goto label_7F430338;
    case 0x7F43033Cu: goto label_7F43033C;
    case 0x7F430340u: goto label_7F430340;
    case 0x7F430344u: goto label_7F430344;
    case 0x7F430348u: goto label_7F430348;
    case 0x7F43034Cu: goto label_7F43034C;
    case 0x7F430350u: goto label_7F430350;
    case 0x7F430354u: goto label_7F430354;
    case 0x7F430358u: goto label_7F430358;
    case 0x7F43035Cu: goto label_7F43035C;
    case 0x7F430360u: goto label_7F430360;
    case 0x7F430364u: goto label_7F430364;
    case 0x7F430368u: goto label_7F430368;
    case 0x7F43036Cu: goto label_7F43036C;
    case 0x7F430370u: goto label_7F430370;
    case 0x7F430374u: goto label_7F430374;
    case 0x7F430378u: goto label_7F430378;
    case 0x7F43037Cu: goto label_7F43037C;
    case 0x7F430380u: goto label_7F430380;
    case 0x7F430384u: goto label_7F430384;
    case 0x7F430388u: goto label_7F430388;
    case 0x7F43038Cu: goto label_7F43038C;
    case 0x7F430390u: goto label_7F430390;
    case 0x7F430394u: goto label_7F430394;
    case 0x7F430398u: goto label_7F430398;
    case 0x7F43039Cu: goto label_7F43039C;
    case 0x7F4303A0u: goto label_7F4303A0;
    case 0x7F4303A4u: goto label_7F4303A4;
    case 0x7F4303A8u: goto label_7F4303A8;
    case 0x7F4303ACu: goto label_7F4303AC;
    case 0x7F4303B0u: goto label_7F4303B0;
    case 0x7F4303B4u: goto label_7F4303B4;
    case 0x7F4303B8u: goto label_7F4303B8;
    case 0x7F4303BCu: goto label_7F4303BC;
    case 0x7F4303C0u: goto label_7F4303C0;
    case 0x7F4303C4u: goto label_7F4303C4;
    case 0x7F4303C8u: goto label_7F4303C8;
    case 0x7F4303CCu: goto label_7F4303CC;
    case 0x7F4303D0u: goto label_7F4303D0;
    case 0x7F4303D4u: goto label_7F4303D4;
    case 0x7F4303D8u: goto label_7F4303D8;
    case 0x7F4303DCu: goto label_7F4303DC;
    case 0x7F4303E0u: goto label_7F4303E0;
    case 0x7F4303E4u: goto label_7F4303E4;
    case 0x7F4303E8u: goto label_7F4303E8;
    case 0x7F4303ECu: goto label_7F4303EC;
    case 0x7F4303F0u: goto label_7F4303F0;
    case 0x7F4303F4u: goto label_7F4303F4;
    case 0x7F4303F8u: goto label_7F4303F8;
    case 0x7F4303FCu: goto label_7F4303FC;
    case 0x7F430400u: goto label_7F430400;
    case 0x7F430404u: goto label_7F430404;
    case 0x7F430408u: goto label_7F430408;
    case 0x7F43040Cu: goto label_7F43040C;
    case 0x7F430410u: goto label_7F430410;
    case 0x7F430414u: goto label_7F430414;
    case 0x7F430418u: goto label_7F430418;
    case 0x7F43041Cu: goto label_7F43041C;
    case 0x7F430420u: goto label_7F430420;
    case 0x7F430424u: goto label_7F430424;
    case 0x7F430428u: goto label_7F430428;
    case 0x7F43042Cu: goto label_7F43042C;
    case 0x7F430430u: goto label_7F430430;
    case 0x7F430434u: goto label_7F430434;
    case 0x7F430438u: goto label_7F430438;
    case 0x7F43043Cu: goto label_7F43043C;
    case 0x7F430440u: goto label_7F430440;
    case 0x7F430444u: goto label_7F430444;
    case 0x7F430448u: goto label_7F430448;
    case 0x7F43044Cu: goto label_7F43044C;
    case 0x7F430450u: goto label_7F430450;
    case 0x7F430454u: goto label_7F430454;
    case 0x7F430458u: goto label_7F430458;
    case 0x7F43045Cu: goto label_7F43045C;
    case 0x7F430460u: goto label_7F430460;
    case 0x7F430464u: goto label_7F430464;
    case 0x7F430468u: goto label_7F430468;
    case 0x7F43046Cu: goto label_7F43046C;
    case 0x7F430470u: goto label_7F430470;
    case 0x7F430474u: goto label_7F430474;
    case 0x7F430478u: goto label_7F430478;
    case 0x7F43047Cu: goto label_7F43047C;
    case 0x7F430480u: goto label_7F430480;
    case 0x7F430484u: goto label_7F430484;
    case 0x7F430488u: goto label_7F430488;
    case 0x7F43048Cu: goto label_7F43048C;
    case 0x7F430490u: goto label_7F430490;
    case 0x7F430494u: goto label_7F430494;
    case 0x7F430498u: goto label_7F430498;
    case 0x7F43049Cu: goto label_7F43049C;
    case 0x7F4304A0u: goto label_7F4304A0;
    case 0x7F4304A4u: goto label_7F4304A4;
    case 0x7F4304A8u: goto label_7F4304A8;
    case 0x7F4304ACu: goto label_7F4304AC;
    case 0x7F4304B0u: goto label_7F4304B0;
    case 0x7F4304B4u: goto label_7F4304B4;
    case 0x7F4304B8u: goto label_7F4304B8;
    case 0x7F4304BCu: goto label_7F4304BC;
    case 0x7F4304C0u: goto label_7F4304C0;
    case 0x7F4304C4u: goto label_7F4304C4;
    case 0x7F4304C8u: goto label_7F4304C8;
    case 0x7F4304CCu: goto label_7F4304CC;
    case 0x7F4304D0u: goto label_7F4304D0;
    case 0x7F4304D4u: goto label_7F4304D4;
    case 0x7F4304D8u: goto label_7F4304D8;
    case 0x7F4304DCu: goto label_7F4304DC;
    case 0x7F4304E0u: goto label_7F4304E0;
    case 0x7F4304E4u: goto label_7F4304E4;
    case 0x7F4304E8u: goto label_7F4304E8;
    case 0x7F4304ECu: goto label_7F4304EC;
    case 0x7F4304F0u: goto label_7F4304F0;
    case 0x7F4304F4u: goto label_7F4304F4;
    case 0x7F4304F8u: goto label_7F4304F8;
    case 0x7F4304FCu: goto label_7F4304FC;
    case 0x7F430500u: goto label_7F430500;
    case 0x7F430504u: goto label_7F430504;
    case 0x7F430508u: goto label_7F430508;
    case 0x7F43050Cu: goto label_7F43050C;
    case 0x7F430510u: goto label_7F430510;
    case 0x7F430514u: goto label_7F430514;
    case 0x7F430518u: goto label_7F430518;
    case 0x7F43051Cu: goto label_7F43051C;
    case 0x7F430520u: goto label_7F430520;
    case 0x7F430524u: goto label_7F430524;
    case 0x7F430528u: goto label_7F430528;
    case 0x7F43052Cu: goto label_7F43052C;
    case 0x7F430530u: goto label_7F430530;
    case 0x7F430534u: goto label_7F430534;
    case 0x7F430538u: goto label_7F430538;
    case 0x7F43053Cu: goto label_7F43053C;
    case 0x7F430540u: goto label_7F430540;
    case 0x7F430544u: goto label_7F430544;
    case 0x7F430548u: goto label_7F430548;
    case 0x7F43054Cu: goto label_7F43054C;
    case 0x7F430550u: goto label_7F430550;
    case 0x7F430554u: goto label_7F430554;
    case 0x7F430558u: goto label_7F430558;
    case 0x7F43055Cu: goto label_7F43055C;
    case 0x7F430560u: goto label_7F430560;
    case 0x7F430564u: goto label_7F430564;
    case 0x7F430568u: goto label_7F430568;
    case 0x7F43056Cu: goto label_7F43056C;
    case 0x7F430570u: goto label_7F430570;
    case 0x7F430574u: goto label_7F430574;
    case 0x7F430578u: goto label_7F430578;
    case 0x7F43057Cu: goto label_7F43057C;
    case 0x7F430580u: goto label_7F430580;
    case 0x7F430584u: goto label_7F430584;
    case 0x7F430588u: goto label_7F430588;
    case 0x7F43058Cu: goto label_7F43058C;
    case 0x7F430590u: goto label_7F430590;
    case 0x7F430594u: goto label_7F430594;
    case 0x7F430598u: goto label_7F430598;
    case 0x7F43059Cu: goto label_7F43059C;
    case 0x7F4305A0u: goto label_7F4305A0;
    case 0x7F4305A4u: goto label_7F4305A4;
    case 0x7F4305A8u: goto label_7F4305A8;
    case 0x7F4305ACu: goto label_7F4305AC;
    case 0x7F4305B0u: goto label_7F4305B0;
    case 0x7F4305B4u: goto label_7F4305B4;
    case 0x7F4305B8u: goto label_7F4305B8;
    case 0x7F4305BCu: goto label_7F4305BC;
    case 0x7F4305C0u: goto label_7F4305C0;
    case 0x7F4305C4u: goto label_7F4305C4;
    case 0x7F4305C8u: goto label_7F4305C8;
    case 0x7F4305CCu: goto label_7F4305CC;
    case 0x7F4305D0u: goto label_7F4305D0;
    case 0x7F4305D4u: goto label_7F4305D4;
    case 0x7F4305D8u: goto label_7F4305D8;
    case 0x7F4305DCu: goto label_7F4305DC;
    case 0x7F4305E0u: goto label_7F4305E0;
    case 0x7F4305E4u: goto label_7F4305E4;
    case 0x7F4305E8u: goto label_7F4305E8;
    case 0x7F4305ECu: goto label_7F4305EC;
    case 0x7F4305F0u: goto label_7F4305F0;
    case 0x7F4305F4u: goto label_7F4305F4;
    case 0x7F4305F8u: goto label_7F4305F8;
    case 0x7F4305FCu: goto label_7F4305FC;
    case 0x7F430600u: goto label_7F430600;
    case 0x7F430604u: goto label_7F430604;
    case 0x7F430608u: goto label_7F430608;
    case 0x7F43060Cu: goto label_7F43060C;
    case 0x7F430610u: goto label_7F430610;
    case 0x7F430614u: goto label_7F430614;
    case 0x7F430618u: goto label_7F430618;
    case 0x7F43061Cu: goto label_7F43061C;
    case 0x7F430620u: goto label_7F430620;
    case 0x7F430624u: goto label_7F430624;
    case 0x7F430628u: goto label_7F430628;
    case 0x7F43062Cu: goto label_7F43062C;
    case 0x7F430630u: goto label_7F430630;
    case 0x7F430634u: goto label_7F430634;
    case 0x7F430638u: goto label_7F430638;
    case 0x7F43063Cu: goto label_7F43063C;
    case 0x7F430640u: goto label_7F430640;
    case 0x7F430644u: goto label_7F430644;
    case 0x7F430648u: goto label_7F430648;
    case 0x7F43064Cu: goto label_7F43064C;
    case 0x7F430650u: goto label_7F430650;
    case 0x7F430654u: goto label_7F430654;
    case 0x7F430658u: goto label_7F430658;
    case 0x7F43065Cu: goto label_7F43065C;
    case 0x7F430660u: goto label_7F430660;
    case 0x7F430664u: goto label_7F430664;
    case 0x7F430668u: goto label_7F430668;
    case 0x7F43066Cu: goto label_7F43066C;
    case 0x7F430670u: goto label_7F430670;
    case 0x7F430674u: goto label_7F430674;
    case 0x7F430678u: goto label_7F430678;
    case 0x7F43067Cu: goto label_7F43067C;
    case 0x7F430680u: goto label_7F430680;
    case 0x7F430684u: goto label_7F430684;
    case 0x7F430688u: goto label_7F430688;
    case 0x7F43068Cu: goto label_7F43068C;
    case 0x7F430690u: goto label_7F430690;
    case 0x7F430694u: goto label_7F430694;
    case 0x7F430698u: goto label_7F430698;
    case 0x7F43069Cu: goto label_7F43069C;
    case 0x7F4306A0u: goto label_7F4306A0;
    case 0x7F4306A4u: goto label_7F4306A4;
    case 0x7F4306A8u: goto label_7F4306A8;
    case 0x7F4306ACu: goto label_7F4306AC;
    case 0x7F4306B0u: goto label_7F4306B0;
    case 0x7F4306B4u: goto label_7F4306B4;
    case 0x7F4306B8u: goto label_7F4306B8;
    case 0x7F4306BCu: goto label_7F4306BC;
    case 0x7F4306C0u: goto label_7F4306C0;
    case 0x7F4306C4u: goto label_7F4306C4;
    case 0x7F4306C8u: goto label_7F4306C8;
    case 0x7F4306CCu: goto label_7F4306CC;
    case 0x7F4306D0u: goto label_7F4306D0;
    case 0x7F4306D4u: goto label_7F4306D4;
    case 0x7F4306D8u: goto label_7F4306D8;
    case 0x7F4306DCu: goto label_7F4306DC;
    case 0x7F4306E0u: goto label_7F4306E0;
    case 0x7F4306E4u: goto label_7F4306E4;
    case 0x7F4306E8u: goto label_7F4306E8;
    case 0x7F4306ECu: goto label_7F4306EC;
    case 0x7F4306F0u: goto label_7F4306F0;
    case 0x7F4306F4u: goto label_7F4306F4;
    case 0x7F4306F8u: goto label_7F4306F8;
    case 0x7F4306FCu: goto label_7F4306FC;
    case 0x7F430700u: goto label_7F430700;
    case 0x7F430704u: goto label_7F430704;
    case 0x7F430708u: goto label_7F430708;
    case 0x7F43070Cu: goto label_7F43070C;
    case 0x7F430710u: goto label_7F430710;
    case 0x7F430714u: goto label_7F430714;
    case 0x7F430718u: goto label_7F430718;
    case 0x7F43071Cu: goto label_7F43071C;
    case 0x7F430720u: goto label_7F430720;
    case 0x7F430724u: goto label_7F430724;
    case 0x7F430728u: goto label_7F430728;
    case 0x7F43072Cu: goto label_7F43072C;
    case 0x7F430730u: goto label_7F430730;
    case 0x7F430734u: goto label_7F430734;
    case 0x7F430738u: goto label_7F430738;
    case 0x7F43073Cu: goto label_7F43073C;
    case 0x7F430740u: goto label_7F430740;
    case 0x7F430744u: goto label_7F430744;
    case 0x7F430748u: goto label_7F430748;
    case 0x7F43074Cu: goto label_7F43074C;
    case 0x7F430750u: goto label_7F430750;
    case 0x7F430754u: goto label_7F430754;
    case 0x7F430758u: goto label_7F430758;
    case 0x7F43075Cu: goto label_7F43075C;
    case 0x7F430760u: goto label_7F430760;
    case 0x7F430764u: goto label_7F430764;
    case 0x7F430768u: goto label_7F430768;
    case 0x7F43076Cu: goto label_7F43076C;
    case 0x7F430770u: goto label_7F430770;
    case 0x7F430774u: goto label_7F430774;
    case 0x7F430778u: goto label_7F430778;
    case 0x7F43077Cu: goto label_7F43077C;
    case 0x7F430780u: goto label_7F430780;
    case 0x7F430784u: goto label_7F430784;
    case 0x7F430788u: goto label_7F430788;
    case 0x7F43078Cu: goto label_7F43078C;
    case 0x7F430790u: goto label_7F430790;
    case 0x7F430794u: goto label_7F430794;
    case 0x7F430798u: goto label_7F430798;
    case 0x7F43079Cu: goto label_7F43079C;
    case 0x7F4307A0u: goto label_7F4307A0;
    case 0x7F4307A4u: goto label_7F4307A4;
    case 0x7F4307A8u: goto label_7F4307A8;
    case 0x7F4307ACu: goto label_7F4307AC;
    case 0x7F4307B0u: goto label_7F4307B0;
    case 0x7F4307B4u: goto label_7F4307B4;
    case 0x7F4307B8u: goto label_7F4307B8;
    case 0x7F4307BCu: goto label_7F4307BC;
    case 0x7F4307C0u: goto label_7F4307C0;
    case 0x7F4307C4u: goto label_7F4307C4;
    case 0x7F4307C8u: goto label_7F4307C8;
    case 0x7F4307CCu: goto label_7F4307CC;
    case 0x7F4307D0u: goto label_7F4307D0;
    case 0x7F4307D4u: goto label_7F4307D4;
    case 0x7F4307D8u: goto label_7F4307D8;
    case 0x7F4307DCu: goto label_7F4307DC;
    case 0x7F4307E0u: goto label_7F4307E0;
    case 0x7F4307E4u: goto label_7F4307E4;
    case 0x7F4307E8u: goto label_7F4307E8;
    case 0x7F4307ECu: goto label_7F4307EC;
    case 0x7F4307F0u: goto label_7F4307F0;
    case 0x7F4307F4u: goto label_7F4307F4;
    case 0x7F4307F8u: goto label_7F4307F8;
    case 0x7F4307FCu: goto label_7F4307FC;
    case 0x7F430800u: goto label_7F430800;
    case 0x7F430804u: goto label_7F430804;
    case 0x7F430808u: goto label_7F430808;
    case 0x7F43080Cu: goto label_7F43080C;
    case 0x7F430810u: goto label_7F430810;
    case 0x7F430814u: goto label_7F430814;
    case 0x7F430818u: goto label_7F430818;
    case 0x7F43081Cu: goto label_7F43081C;
    case 0x7F430820u: goto label_7F430820;
    case 0x7F430824u: goto label_7F430824;
    case 0x7F430828u: goto label_7F430828;
    case 0x7F43082Cu: goto label_7F43082C;
    case 0x7F430830u: goto label_7F430830;
    case 0x7F430834u: goto label_7F430834;
    case 0x7F430838u: goto label_7F430838;
    case 0x7F43083Cu: goto label_7F43083C;
    case 0x7F430840u: goto label_7F430840;
    case 0x7F430844u: goto label_7F430844;
    case 0x7F430848u: goto label_7F430848;
    case 0x7F43084Cu: goto label_7F43084C;
    case 0x7F430850u: goto label_7F430850;
    case 0x7F430854u: goto label_7F430854;
    case 0x7F430858u: goto label_7F430858;
    case 0x7F43085Cu: goto label_7F43085C;
    case 0x7F430860u: goto label_7F430860;
    case 0x7F430864u: goto label_7F430864;
    case 0x7F430868u: goto label_7F430868;
    case 0x7F43086Cu: goto label_7F43086C;
    case 0x7F430870u: goto label_7F430870;
    case 0x7F430874u: goto label_7F430874;
    case 0x7F430878u: goto label_7F430878;
    case 0x7F43087Cu: goto label_7F43087C;
    case 0x7F430880u: goto label_7F430880;
    case 0x7F430884u: goto label_7F430884;
    case 0x7F430888u: goto label_7F430888;
    case 0x7F43088Cu: goto label_7F43088C;
    case 0x7F430890u: goto label_7F430890;
    case 0x7F430894u: goto label_7F430894;
    case 0x7F430898u: goto label_7F430898;
    case 0x7F43089Cu: goto label_7F43089C;
    case 0x7F4308A0u: goto label_7F4308A0;
    case 0x7F4308A4u: goto label_7F4308A4;
    case 0x7F4308A8u: goto label_7F4308A8;
    case 0x7F4308ACu: goto label_7F4308AC;
    case 0x7F4308B0u: goto label_7F4308B0;
    case 0x7F4308B4u: goto label_7F4308B4;
    case 0x7F4308B8u: goto label_7F4308B8;
    case 0x7F4308BCu: goto label_7F4308BC;
    case 0x7F4308C0u: goto label_7F4308C0;
    case 0x7F4308C4u: goto label_7F4308C4;
    case 0x7F4308C8u: goto label_7F4308C8;
    case 0x7F4308CCu: goto label_7F4308CC;
    case 0x7F4308D0u: goto label_7F4308D0;
    case 0x7F4308D4u: goto label_7F4308D4;
    case 0x7F4308D8u: goto label_7F4308D8;
    case 0x7F4308DCu: goto label_7F4308DC;
    case 0x7F4308E0u: goto label_7F4308E0;
    case 0x7F4308E4u: goto label_7F4308E4;
    case 0x7F4308E8u: goto label_7F4308E8;
    case 0x7F4308ECu: goto label_7F4308EC;
    case 0x7F4308F0u: goto label_7F4308F0;
    case 0x7F4308F4u: goto label_7F4308F4;
    case 0x7F4308F8u: goto label_7F4308F8;
    case 0x7F4308FCu: goto label_7F4308FC;
    case 0x7F430900u: goto label_7F430900;
    case 0x7F430904u: goto label_7F430904;
    case 0x7F430908u: goto label_7F430908;
    case 0x7F43090Cu: goto label_7F43090C;
    case 0x7F430910u: goto label_7F430910;
    case 0x7F430914u: goto label_7F430914;
    case 0x7F430918u: goto label_7F430918;
    case 0x7F43091Cu: goto label_7F43091C;
    case 0x7F430920u: goto label_7F430920;
    case 0x7F430924u: goto label_7F430924;
    case 0x7F430928u: goto label_7F430928;
    case 0x7F43092Cu: goto label_7F43092C;
    case 0x7F430930u: goto label_7F430930;
    case 0x7F430934u: goto label_7F430934;
    case 0x7F430938u: goto label_7F430938;
    case 0x7F43093Cu: goto label_7F43093C;
    case 0x7F430940u: goto label_7F430940;
    case 0x7F430944u: goto label_7F430944;
    case 0x7F430948u: goto label_7F430948;
    case 0x7F43094Cu: goto label_7F43094C;
    case 0x7F430950u: goto label_7F430950;
    case 0x7F430954u: goto label_7F430954;
    case 0x7F430958u: goto label_7F430958;
    case 0x7F43095Cu: goto label_7F43095C;
    case 0x7F430960u: goto label_7F430960;
    case 0x7F430964u: goto label_7F430964;
    case 0x7F430968u: goto label_7F430968;
    case 0x7F43096Cu: goto label_7F43096C;
    case 0x7F430970u: goto label_7F430970;
    case 0x7F430974u: goto label_7F430974;
    case 0x7F430978u: goto label_7F430978;
    case 0x7F43097Cu: goto label_7F43097C;
    case 0x7F430980u: goto label_7F430980;
    case 0x7F430984u: goto label_7F430984;
    case 0x7F430988u: goto label_7F430988;
    case 0x7F43098Cu: goto label_7F43098C;
    case 0x7F430990u: goto label_7F430990;
    case 0x7F430994u: goto label_7F430994;
    case 0x7F430998u: goto label_7F430998;
    case 0x7F43099Cu: goto label_7F43099C;
    case 0x7F4309A0u: goto label_7F4309A0;
    case 0x7F4309A4u: goto label_7F4309A4;
    case 0x7F4309A8u: goto label_7F4309A8;
    case 0x7F4309ACu: goto label_7F4309AC;
    case 0x7F4309B0u: goto label_7F4309B0;
    case 0x7F4309B4u: goto label_7F4309B4;
    case 0x7F4309B8u: goto label_7F4309B8;
    case 0x7F4309BCu: goto label_7F4309BC;
    case 0x7F4309C0u: goto label_7F4309C0;
    case 0x7F4309C4u: goto label_7F4309C4;
    case 0x7F4309C8u: goto label_7F4309C8;
    case 0x7F4309CCu: goto label_7F4309CC;
    case 0x7F4309D0u: goto label_7F4309D0;
    case 0x7F4309D4u: goto label_7F4309D4;
    case 0x7F4309D8u: goto label_7F4309D8;
    case 0x7F4309DCu: goto label_7F4309DC;
    case 0x7F4309E0u: goto label_7F4309E0;
    case 0x7F4309E4u: goto label_7F4309E4;
    case 0x7F4309E8u: goto label_7F4309E8;
    case 0x7F4309ECu: goto label_7F4309EC;
    case 0x7F4309F0u: goto label_7F4309F0;
    case 0x7F4309F4u: goto label_7F4309F4;
    case 0x7F4309F8u: goto label_7F4309F8;
    case 0x7F4309FCu: goto label_7F4309FC;
    case 0x7F430A00u: goto label_7F430A00;
    case 0x7F430A04u: goto label_7F430A04;
    case 0x7F430A08u: goto label_7F430A08;
    case 0x7F430A0Cu: goto label_7F430A0C;
    case 0x7F430A10u: goto label_7F430A10;
    case 0x7F430A14u: goto label_7F430A14;
    case 0x7F430A18u: goto label_7F430A18;
    case 0x7F430A1Cu: goto label_7F430A1C;
    case 0x7F430A20u: goto label_7F430A20;
    case 0x7F430A24u: goto label_7F430A24;
    case 0x7F430A28u: goto label_7F430A28;
    case 0x7F430A2Cu: goto label_7F430A2C;
    case 0x7F430A30u: goto label_7F430A30;
    case 0x7F430A34u: goto label_7F430A34;
    case 0x7F430A38u: goto label_7F430A38;
    case 0x7F430A3Cu: goto label_7F430A3C;
    case 0x7F430A40u: goto label_7F430A40;
    case 0x7F430A44u: goto label_7F430A44;
    case 0x7F430A48u: goto label_7F430A48;
    case 0x7F430A4Cu: goto label_7F430A4C;
    case 0x7F430A50u: goto label_7F430A50;
    case 0x7F430A54u: goto label_7F430A54;
    case 0x7F430A58u: goto label_7F430A58;
    case 0x7F430A5Cu: goto label_7F430A5C;
    case 0x7F430A60u: goto label_7F430A60;
    case 0x7F430A64u: goto label_7F430A64;
    case 0x7F430A68u: goto label_7F430A68;
    case 0x7F430A6Cu: goto label_7F430A6C;
    case 0x7F430A70u: goto label_7F430A70;
    case 0x7F430A74u: goto label_7F430A74;
    case 0x7F430A78u: goto label_7F430A78;
    case 0x7F430A7Cu: goto label_7F430A7C;
    case 0x7F430A80u: goto label_7F430A80;
    case 0x7F430A84u: goto label_7F430A84;
    case 0x7F430A88u: goto label_7F430A88;
    case 0x7F430A8Cu: goto label_7F430A8C;
    case 0x7F430A90u: goto label_7F430A90;
    case 0x7F430A94u: goto label_7F430A94;
    case 0x7F430A98u: goto label_7F430A98;
    case 0x7F430A9Cu: goto label_7F430A9C;
    case 0x7F430AA0u: goto label_7F430AA0;
    case 0x7F430AA4u: goto label_7F430AA4;
    case 0x7F430AA8u: goto label_7F430AA8;
    case 0x7F430AACu: goto label_7F430AAC;
    case 0x7F430AB0u: goto label_7F430AB0;
    case 0x7F430AB4u: goto label_7F430AB4;
    case 0x7F430AB8u: goto label_7F430AB8;
    case 0x7F430ABCu: goto label_7F430ABC;
    case 0x7F430AC0u: goto label_7F430AC0;
    case 0x7F430AC4u: goto label_7F430AC4;
    case 0x7F430AC8u: goto label_7F430AC8;
    case 0x7F430ACCu: goto label_7F430ACC;
    case 0x7F430AD0u: goto label_7F430AD0;
    case 0x7F430AD4u: goto label_7F430AD4;
    case 0x7F430AD8u: goto label_7F430AD8;
    case 0x7F430ADCu: goto label_7F430ADC;
    case 0x7F430AE0u: goto label_7F430AE0;
    case 0x7F430AE4u: goto label_7F430AE4;
    case 0x7F430AE8u: goto label_7F430AE8;
    case 0x7F430AECu: goto label_7F430AEC;
    case 0x7F430AF0u: goto label_7F430AF0;
    case 0x7F430AF4u: goto label_7F430AF4;
    case 0x7F430AF8u: goto label_7F430AF8;
    case 0x7F430AFCu: goto label_7F430AFC;
    case 0x7F430B00u: goto label_7F430B00;
    case 0x7F430B04u: goto label_7F430B04;
    case 0x7F430B08u: goto label_7F430B08;
    case 0x7F430B0Cu: goto label_7F430B0C;
    case 0x7F430B10u: goto label_7F430B10;
    case 0x7F430B14u: goto label_7F430B14;
    case 0x7F430B18u: goto label_7F430B18;
    case 0x7F430B1Cu: goto label_7F430B1C;
    case 0x7F430B20u: goto label_7F430B20;
    case 0x7F430B24u: goto label_7F430B24;
    case 0x7F430B28u: goto label_7F430B28;
    case 0x7F430B2Cu: goto label_7F430B2C;
    case 0x7F430B30u: goto label_7F430B30;
    case 0x7F430B34u: goto label_7F430B34;
    case 0x7F430B38u: goto label_7F430B38;
    case 0x7F430B3Cu: goto label_7F430B3C;
    case 0x7F430B40u: goto label_7F430B40;
    case 0x7F430B44u: goto label_7F430B44;
    case 0x7F430B48u: goto label_7F430B48;
    case 0x7F430B4Cu: goto label_7F430B4C;
    case 0x7F430B50u: goto label_7F430B50;
    case 0x7F430B54u: goto label_7F430B54;
    case 0x7F430B58u: goto label_7F430B58;
    case 0x7F430B5Cu: goto label_7F430B5C;
    case 0x7F430B60u: goto label_7F430B60;
    case 0x7F430B64u: goto label_7F430B64;
    case 0x7F430B68u: goto label_7F430B68;
    case 0x7F430B6Cu: goto label_7F430B6C;
    case 0x7F430B70u: goto label_7F430B70;
    case 0x7F430B74u: goto label_7F430B74;
    case 0x7F430B78u: goto label_7F430B78;
    case 0x7F430B7Cu: goto label_7F430B7C;
    case 0x7F430B80u: goto label_7F430B80;
    case 0x7F430B84u: goto label_7F430B84;
    case 0x7F430B88u: goto label_7F430B88;
    case 0x7F430B8Cu: goto label_7F430B8C;
    case 0x7F430B90u: goto label_7F430B90;
    case 0x7F430B94u: goto label_7F430B94;
    case 0x7F430B98u: goto label_7F430B98;
    case 0x7F430B9Cu: goto label_7F430B9C;
    case 0x7F430BA0u: goto label_7F430BA0;
    case 0x7F430BA4u: goto label_7F430BA4;
    case 0x7F430BA8u: goto label_7F430BA8;
    case 0x7F430BACu: goto label_7F430BAC;
    case 0x7F430BB0u: goto label_7F430BB0;
    case 0x7F430BB4u: goto label_7F430BB4;
    case 0x7F430BB8u: goto label_7F430BB8;
    case 0x7F430BBCu: goto label_7F430BBC;
    case 0x7F430BC0u: goto label_7F430BC0;
    case 0x7F430BC4u: goto label_7F430BC4;
    case 0x7F430BC8u: goto label_7F430BC8;
    case 0x7F430BCCu: goto label_7F430BCC;
    case 0x7F430BD0u: goto label_7F430BD0;
    case 0x7F430BD4u: goto label_7F430BD4;
    case 0x7F430BD8u: goto label_7F430BD8;
    case 0x7F430BDCu: goto label_7F430BDC;
    case 0x7F430BE0u: goto label_7F430BE0;
    case 0x7F430BE4u: goto label_7F430BE4;
    case 0x7F430BE8u: goto label_7F430BE8;
    case 0x7F430BECu: goto label_7F430BEC;
    case 0x7F430BF0u: goto label_7F430BF0;
    case 0x7F430BF4u: goto label_7F430BF4;
    case 0x7F430BF8u: goto label_7F430BF8;
    case 0x7F430BFCu: goto label_7F430BFC;
    case 0x7F430C00u: goto label_7F430C00;
    case 0x7F430C04u: goto label_7F430C04;
    case 0x7F430C08u: goto label_7F430C08;
    case 0x7F430C0Cu: goto label_7F430C0C;
    case 0x7F430C10u: goto label_7F430C10;
    case 0x7F430C14u: goto label_7F430C14;
    case 0x7F430C18u: goto label_7F430C18;
    case 0x7F430C1Cu: goto label_7F430C1C;
    case 0x7F430C20u: goto label_7F430C20;
    case 0x7F430C24u: goto label_7F430C24;
    case 0x7F430C28u: goto label_7F430C28;
    case 0x7F430C2Cu: goto label_7F430C2C;
    case 0x7F430C30u: goto label_7F430C30;
    case 0x7F430C34u: goto label_7F430C34;
    case 0x7F430C38u: goto label_7F430C38;
    case 0x7F430C3Cu: goto label_7F430C3C;
    case 0x7F430C40u: goto label_7F430C40;
    case 0x7F430C44u: goto label_7F430C44;
    case 0x7F430C48u: goto label_7F430C48;
    case 0x7F430C4Cu: goto label_7F430C4C;
    case 0x7F430C50u: goto label_7F430C50;
    case 0x7F430C54u: goto label_7F430C54;
    case 0x7F430C58u: goto label_7F430C58;
    case 0x7F430C5Cu: goto label_7F430C5C;
    case 0x7F430C60u: goto label_7F430C60;
    case 0x7F430C64u: goto label_7F430C64;
    case 0x7F430C68u: goto label_7F430C68;
    case 0x7F430C6Cu: goto label_7F430C6C;
    case 0x7F430C70u: goto label_7F430C70;
    case 0x7F430C74u: goto label_7F430C74;
    case 0x7F430C78u: goto label_7F430C78;
    case 0x7F430C7Cu: goto label_7F430C7C;
    case 0x7F430C80u: goto label_7F430C80;
    case 0x7F430C84u: goto label_7F430C84;
    case 0x7F430C88u: goto label_7F430C88;
    case 0x7F430C8Cu: goto label_7F430C8C;
    case 0x7F430C90u: goto label_7F430C90;
    case 0x7F430C94u: goto label_7F430C94;
    case 0x7F430C98u: goto label_7F430C98;
    case 0x7F430C9Cu: goto label_7F430C9C;
    case 0x7F430CA0u: goto label_7F430CA0;
    case 0x7F430CA4u: goto label_7F430CA4;
    case 0x7F430CA8u: goto label_7F430CA8;
    case 0x7F430CACu: goto label_7F430CAC;
    case 0x7F430CB0u: goto label_7F430CB0;
    case 0x7F430CB4u: goto label_7F430CB4;
    case 0x7F430CB8u: goto label_7F430CB8;
    case 0x7F430CBCu: goto label_7F430CBC;
    case 0x7F430CC0u: goto label_7F430CC0;
    case 0x7F430CC4u: goto label_7F430CC4;
    case 0x7F430CC8u: goto label_7F430CC8;
    case 0x7F430CCCu: goto label_7F430CCC;
    case 0x7F430CD0u: goto label_7F430CD0;
    case 0x7F430CD4u: goto label_7F430CD4;
    case 0x7F430CD8u: goto label_7F430CD8;
    case 0x7F430CDCu: goto label_7F430CDC;
    case 0x7F430CE0u: goto label_7F430CE0;
    case 0x7F430CE4u: goto label_7F430CE4;
    case 0x7F430CE8u: goto label_7F430CE8;
    case 0x7F430CECu: goto label_7F430CEC;
    case 0x7F430CF0u: goto label_7F430CF0;
    case 0x7F430CF4u: goto label_7F430CF4;
    case 0x7F430CF8u: goto label_7F430CF8;
    case 0x7F430CFCu: goto label_7F430CFC;
    case 0x7F430D00u: goto label_7F430D00;
    case 0x7F430D04u: goto label_7F430D04;
    case 0x7F430D08u: goto label_7F430D08;
    case 0x7F430D0Cu: goto label_7F430D0C;
    case 0x7F430D10u: goto label_7F430D10;
    case 0x7F430D14u: goto label_7F430D14;
    case 0x7F430D18u: goto label_7F430D18;
    case 0x7F430D1Cu: goto label_7F430D1C;
    case 0x7F430D20u: goto label_7F430D20;
    case 0x7F430D24u: goto label_7F430D24;
    case 0x7F430D28u: goto label_7F430D28;
    case 0x7F430D2Cu: goto label_7F430D2C;
    case 0x7F430D30u: goto label_7F430D30;
    case 0x7F430D34u: goto label_7F430D34;
    case 0x7F430D38u: goto label_7F430D38;
    case 0x7F430D3Cu: goto label_7F430D3C;
    case 0x7F430D40u: goto label_7F430D40;
    case 0x7F430D44u: goto label_7F430D44;
    case 0x7F430D48u: goto label_7F430D48;
    case 0x7F430D4Cu: goto label_7F430D4C;
    case 0x7F430D50u: goto label_7F430D50;
    case 0x7F430D54u: goto label_7F430D54;
    case 0x7F430D58u: goto label_7F430D58;
    case 0x7F430D5Cu: goto label_7F430D5C;
    case 0x7F430D60u: goto label_7F430D60;
    case 0x7F430D64u: goto label_7F430D64;
    case 0x7F430D68u: goto label_7F430D68;
    case 0x7F430D6Cu: goto label_7F430D6C;
    case 0x7F430D70u: goto label_7F430D70;
    case 0x7F430D74u: goto label_7F430D74;
    case 0x7F430D78u: goto label_7F430D78;
    case 0x7F430D7Cu: goto label_7F430D7C;
    case 0x7F430D80u: goto label_7F430D80;
    case 0x7F430D84u: goto label_7F430D84;
    case 0x7F430D88u: goto label_7F430D88;
    case 0x7F430D8Cu: goto label_7F430D8C;
    case 0x7F430D90u: goto label_7F430D90;
    case 0x7F430D94u: goto label_7F430D94;
    case 0x7F430D98u: goto label_7F430D98;
    case 0x7F430D9Cu: goto label_7F430D9C;
    case 0x7F430DA0u: goto label_7F430DA0;
    case 0x7F430DA4u: goto label_7F430DA4;
    case 0x7F430DA8u: goto label_7F430DA8;
    case 0x7F430DACu: goto label_7F430DAC;
    case 0x7F430DB0u: goto label_7F430DB0;
    case 0x7F430DB4u: goto label_7F430DB4;
    case 0x7F430DB8u: goto label_7F430DB8;
    case 0x7F430DBCu: goto label_7F430DBC;
    case 0x7F430DC0u: goto label_7F430DC0;
    case 0x7F430DC4u: goto label_7F430DC4;
    case 0x7F430DC8u: goto label_7F430DC8;
    case 0x7F430DCCu: goto label_7F430DCC;
    case 0x7F430DD0u: goto label_7F430DD0;
    case 0x7F430DD4u: goto label_7F430DD4;
    case 0x7F430DD8u: goto label_7F430DD8;
    case 0x7F430DDCu: goto label_7F430DDC;
    case 0x7F430DE0u: goto label_7F430DE0;
    case 0x7F430DE4u: goto label_7F430DE4;
    case 0x7F430DE8u: goto label_7F430DE8;
    case 0x7F430DECu: goto label_7F430DEC;
    case 0x7F430DF0u: goto label_7F430DF0;
    case 0x7F430DF4u: goto label_7F430DF4;
    case 0x7F430DF8u: goto label_7F430DF8;
    case 0x7F430DFCu: goto label_7F430DFC;
    case 0x7F430E00u: goto label_7F430E00;
    case 0x7F430E04u: goto label_7F430E04;
    case 0x7F430E08u: goto label_7F430E08;
    case 0x7F430E0Cu: goto label_7F430E0C;
    case 0x7F430E10u: goto label_7F430E10;
    case 0x7F430E14u: goto label_7F430E14;
    case 0x7F430E18u: goto label_7F430E18;
    case 0x7F430E1Cu: goto label_7F430E1C;
    case 0x7F430E20u: goto label_7F430E20;
    case 0x7F430E24u: goto label_7F430E24;
    case 0x7F430E28u: goto label_7F430E28;
    case 0x7F430E2Cu: goto label_7F430E2C;
    case 0x7F430E30u: goto label_7F430E30;
    case 0x7F430E34u: goto label_7F430E34;
    case 0x7F430E38u: goto label_7F430E38;
    case 0x7F430E3Cu: goto label_7F430E3C;
    case 0x7F430E40u: goto label_7F430E40;
    case 0x7F430E44u: goto label_7F430E44;
    case 0x7F430E48u: goto label_7F430E48;
    case 0x7F430E4Cu: goto label_7F430E4C;
    case 0x7F430E50u: goto label_7F430E50;
    case 0x7F430E54u: goto label_7F430E54;
    case 0x7F430E58u: goto label_7F430E58;
    case 0x7F430E5Cu: goto label_7F430E5C;
    case 0x7F430E60u: goto label_7F430E60;
    case 0x7F430E64u: goto label_7F430E64;
    case 0x7F430E68u: goto label_7F430E68;
    case 0x7F430E6Cu: goto label_7F430E6C;
    case 0x7F430E70u: goto label_7F430E70;
    case 0x7F430E74u: goto label_7F430E74;
    case 0x7F430E78u: goto label_7F430E78;
    case 0x7F430E7Cu: goto label_7F430E7C;
    case 0x7F430E80u: goto label_7F430E80;
    case 0x7F430E84u: goto label_7F430E84;
    case 0x7F430E88u: goto label_7F430E88;
    case 0x7F430E8Cu: goto label_7F430E8C;
    case 0x7F430E90u: goto label_7F430E90;
    case 0x7F430E94u: goto label_7F430E94;
    case 0x7F430E98u: goto label_7F430E98;
    case 0x7F430E9Cu: goto label_7F430E9C;
    case 0x7F430EA0u: goto label_7F430EA0;
    case 0x7F430EA4u: goto label_7F430EA4;
    case 0x7F430EA8u: goto label_7F430EA8;
    case 0x7F430EACu: goto label_7F430EAC;
    case 0x7F430EB0u: goto label_7F430EB0;
    case 0x7F430EB4u: goto label_7F430EB4;
    case 0x7F430EB8u: goto label_7F430EB8;
    case 0x7F430EBCu: goto label_7F430EBC;
    case 0x7F430EC0u: goto label_7F430EC0;
    case 0x7F430EC4u: goto label_7F430EC4;
    case 0x7F430EC8u: goto label_7F430EC8;
    case 0x7F430ECCu: goto label_7F430ECC;
    case 0x7F430ED0u: goto label_7F430ED0;
    case 0x7F430ED4u: goto label_7F430ED4;
    case 0x7F430ED8u: goto label_7F430ED8;
    case 0x7F430EDCu: goto label_7F430EDC;
    case 0x7F430EE0u: goto label_7F430EE0;
    case 0x7F430EE4u: goto label_7F430EE4;
    case 0x7F430EE8u: goto label_7F430EE8;
    case 0x7F430EECu: goto label_7F430EEC;
    case 0x7F430EF0u: goto label_7F430EF0;
    case 0x7F430EF4u: goto label_7F430EF4;
    case 0x7F430EF8u: goto label_7F430EF8;
    case 0x7F430EFCu: goto label_7F430EFC;
    case 0x7F430F00u: goto label_7F430F00;
    case 0x7F430F04u: goto label_7F430F04;
    case 0x7F430F08u: goto label_7F430F08;
    case 0x7F430F0Cu: goto label_7F430F0C;
    case 0x7F430F10u: goto label_7F430F10;
    case 0x7F430F14u: goto label_7F430F14;
    case 0x7F430F18u: goto label_7F430F18;
    case 0x7F430F1Cu: goto label_7F430F1C;
    case 0x7F430F20u: goto label_7F430F20;
    case 0x7F430F24u: goto label_7F430F24;
    case 0x7F430F28u: goto label_7F430F28;
    case 0x7F430F2Cu: goto label_7F430F2C;
    case 0x7F430F30u: goto label_7F430F30;
    case 0x7F430F34u: goto label_7F430F34;
    case 0x7F430F38u: goto label_7F430F38;
    case 0x7F430F3Cu: goto label_7F430F3C;
    case 0x7F430F40u: goto label_7F430F40;
    case 0x7F430F44u: goto label_7F430F44;
    case 0x7F430F48u: goto label_7F430F48;
    case 0x7F430F4Cu: goto label_7F430F4C;
    case 0x7F430F50u: goto label_7F430F50;
    case 0x7F430F54u: goto label_7F430F54;
    case 0x7F430F58u: goto label_7F430F58;
    case 0x7F430F5Cu: goto label_7F430F5C;
    case 0x7F430F60u: goto label_7F430F60;
    case 0x7F430F64u: goto label_7F430F64;
    case 0x7F430F68u: goto label_7F430F68;
    case 0x7F430F6Cu: goto label_7F430F6C;
    case 0x7F430F70u: goto label_7F430F70;
    case 0x7F430F74u: goto label_7F430F74;
    case 0x7F430F78u: goto label_7F430F78;
    case 0x7F430F7Cu: goto label_7F430F7C;
    case 0x7F430F80u: goto label_7F430F80;
    case 0x7F430F84u: goto label_7F430F84;
    case 0x7F430F88u: goto label_7F430F88;
    case 0x7F430F8Cu: goto label_7F430F8C;
    case 0x7F430F90u: goto label_7F430F90;
    case 0x7F430F94u: goto label_7F430F94;
    case 0x7F430F98u: goto label_7F430F98;
    case 0x7F430F9Cu: goto label_7F430F9C;
    case 0x7F430FA0u: goto label_7F430FA0;
    case 0x7F430FA4u: goto label_7F430FA4;
    case 0x7F430FA8u: goto label_7F430FA8;
    case 0x7F430FACu: goto label_7F430FAC;
    case 0x7F430FB0u: goto label_7F430FB0;
    case 0x7F430FB4u: goto label_7F430FB4;
    case 0x7F430FB8u: goto label_7F430FB8;
    case 0x7F430FBCu: goto label_7F430FBC;
    case 0x7F430FC0u: goto label_7F430FC0;
    case 0x7F430FC4u: goto label_7F430FC4;
    case 0x7F430FC8u: goto label_7F430FC8;
    case 0x7F430FCCu: goto label_7F430FCC;
    case 0x7F430FD0u: goto label_7F430FD0;
    case 0x7F430FD4u: goto label_7F430FD4;
    case 0x7F430FD8u: goto label_7F430FD8;
    case 0x7F430FDCu: goto label_7F430FDC;
    case 0x7F430FE0u: goto label_7F430FE0;
    case 0x7F430FE4u: goto label_7F430FE4;
    case 0x7F430FE8u: goto label_7F430FE8;
    case 0x7F430FECu: goto label_7F430FEC;
    case 0x7F430FF0u: goto label_7F430FF0;
    case 0x7F430FF4u: goto label_7F430FF4;
    case 0x7F430FF8u: goto label_7F430FF8;
    case 0x7F430FFCu: goto label_7F430FFC;
    case 0x7F431000u: goto label_7F431000;
    case 0x7F431004u: goto label_7F431004;
    case 0x7F431008u: goto label_7F431008;
    case 0x7F43100Cu: goto label_7F43100C;
    case 0x7F431010u: goto label_7F431010;
    case 0x7F431014u: goto label_7F431014;
    case 0x7F431018u: goto label_7F431018;
    case 0x7F43101Cu: goto label_7F43101C;
    case 0x7F431020u: goto label_7F431020;
    case 0x7F431024u: goto label_7F431024;
    case 0x7F431028u: goto label_7F431028;
    case 0x7F43102Cu: goto label_7F43102C;
    case 0x7F431030u: goto label_7F431030;
    case 0x7F431034u: goto label_7F431034;
    case 0x7F431038u: goto label_7F431038;
    case 0x7F43103Cu: goto label_7F43103C;
    case 0x7F431040u: goto label_7F431040;
    case 0x7F431044u: goto label_7F431044;
    case 0x7F431048u: goto label_7F431048;
    case 0x7F43104Cu: goto label_7F43104C;
    case 0x7F431050u: goto label_7F431050;
    case 0x7F431054u: goto label_7F431054;
    case 0x7F431058u: goto label_7F431058;
    case 0x7F43105Cu: goto label_7F43105C;
    case 0x7F431060u: goto label_7F431060;
    case 0x7F431064u: goto label_7F431064;
    case 0x7F431068u: goto label_7F431068;
    case 0x7F43106Cu: goto label_7F43106C;
    case 0x7F431070u: goto label_7F431070;
    case 0x7F431074u: goto label_7F431074;
    case 0x7F431078u: goto label_7F431078;
    case 0x7F43107Cu: goto label_7F43107C;
    case 0x7F431080u: goto label_7F431080;
    case 0x7F431084u: goto label_7F431084;
    case 0x7F431088u: goto label_7F431088;
    case 0x7F43108Cu: goto label_7F43108C;
    case 0x7F431090u: goto label_7F431090;
    case 0x7F431094u: goto label_7F431094;
    case 0x7F431098u: goto label_7F431098;
    case 0x7F43109Cu: goto label_7F43109C;
    case 0x7F4310A0u: goto label_7F4310A0;
    case 0x7F4310A4u: goto label_7F4310A4;
    case 0x7F4310A8u: goto label_7F4310A8;
    case 0x7F4310ACu: goto label_7F4310AC;
    case 0x7F4310B0u: goto label_7F4310B0;
    case 0x7F4310B4u: goto label_7F4310B4;
    case 0x7F4310B8u: goto label_7F4310B8;
    case 0x7F4310BCu: goto label_7F4310BC;
    case 0x7F4310C0u: goto label_7F4310C0;
    case 0x7F4310C4u: goto label_7F4310C4;
    case 0x7F4310C8u: goto label_7F4310C8;
    case 0x7F4310CCu: goto label_7F4310CC;
    case 0x7F4310D0u: goto label_7F4310D0;
    case 0x7F4310D4u: goto label_7F4310D4;
    case 0x7F4310D8u: goto label_7F4310D8;
    case 0x7F4310DCu: goto label_7F4310DC;
    case 0x7F4310E0u: goto label_7F4310E0;
    case 0x7F4310E4u: goto label_7F4310E4;
    case 0x7F4310E8u: goto label_7F4310E8;
    case 0x7F4310ECu: goto label_7F4310EC;
    case 0x7F4310F0u: goto label_7F4310F0;
    case 0x7F4310F4u: goto label_7F4310F4;
    case 0x7F4310F8u: goto label_7F4310F8;
    case 0x7F4310FCu: goto label_7F4310FC;
    case 0x7F431100u: goto label_7F431100;
    case 0x7F431104u: goto label_7F431104;
    case 0x7F431108u: goto label_7F431108;
    case 0x7F43110Cu: goto label_7F43110C;
    case 0x7F431110u: goto label_7F431110;
    case 0x7F431114u: goto label_7F431114;
    case 0x7F431118u: goto label_7F431118;
    case 0x7F43111Cu: goto label_7F43111C;
    case 0x7F431120u: goto label_7F431120;
    case 0x7F431124u: goto label_7F431124;
    case 0x7F431128u: goto label_7F431128;
    case 0x7F43112Cu: goto label_7F43112C;
    case 0x7F431130u: goto label_7F431130;
    case 0x7F431134u: goto label_7F431134;
    case 0x7F431138u: goto label_7F431138;
    case 0x7F43113Cu: goto label_7F43113C;
    case 0x7F431140u: goto label_7F431140;
    case 0x7F431144u: goto label_7F431144;
    case 0x7F431148u: goto label_7F431148;
    case 0x7F43114Cu: goto label_7F43114C;
    case 0x7F431150u: goto label_7F431150;
    case 0x7F431154u: goto label_7F431154;
    case 0x7F431158u: goto label_7F431158;
    case 0x7F43115Cu: goto label_7F43115C;
    case 0x7F431160u: goto label_7F431160;
    case 0x7F431164u: goto label_7F431164;
    case 0x7F431168u: goto label_7F431168;
    case 0x7F43116Cu: goto label_7F43116C;
    case 0x7F431170u: goto label_7F431170;
    case 0x7F431174u: goto label_7F431174;
    case 0x7F431178u: goto label_7F431178;
    case 0x7F43117Cu: goto label_7F43117C;
    case 0x7F431180u: goto label_7F431180;
    case 0x7F431184u: goto label_7F431184;
    case 0x7F431188u: goto label_7F431188;
    case 0x7F43118Cu: goto label_7F43118C;
    case 0x7F431190u: goto label_7F431190;
    case 0x7F431194u: goto label_7F431194;
    case 0x7F431198u: goto label_7F431198;
    case 0x7F43119Cu: goto label_7F43119C;
    case 0x7F4311A0u: goto label_7F4311A0;
    case 0x7F4311A4u: goto label_7F4311A4;
    case 0x7F4311A8u: goto label_7F4311A8;
    case 0x7F4311ACu: goto label_7F4311AC;
    case 0x7F4311B0u: goto label_7F4311B0;
    case 0x7F4311B4u: goto label_7F4311B4;
    case 0x7F4311B8u: goto label_7F4311B8;
    case 0x7F4311BCu: goto label_7F4311BC;
    case 0x7F4311C0u: goto label_7F4311C0;
    case 0x7F4311C4u: goto label_7F4311C4;
    case 0x7F4311C8u: goto label_7F4311C8;
    case 0x7F4311CCu: goto label_7F4311CC;
    case 0x7F4311D0u: goto label_7F4311D0;
    case 0x7F4311D4u: goto label_7F4311D4;
    case 0x7F4311D8u: goto label_7F4311D8;
    case 0x7F4311DCu: goto label_7F4311DC;
    case 0x7F4311E0u: goto label_7F4311E0;
    case 0x7F4311E4u: goto label_7F4311E4;
    case 0x7F4311E8u: goto label_7F4311E8;
    case 0x7F4311ECu: goto label_7F4311EC;
    case 0x7F4311F0u: goto label_7F4311F0;
    case 0x7F4311F4u: goto label_7F4311F4;
    case 0x7F4311F8u: goto label_7F4311F8;
    case 0x7F4311FCu: goto label_7F4311FC;
    case 0x7F431200u: goto label_7F431200;
    case 0x7F431204u: goto label_7F431204;
    case 0x7F431208u: goto label_7F431208;
    case 0x7F43120Cu: goto label_7F43120C;
    case 0x7F431210u: goto label_7F431210;
    case 0x7F431214u: goto label_7F431214;
    case 0x7F431218u: goto label_7F431218;
    case 0x7F43121Cu: goto label_7F43121C;
    case 0x7F431220u: goto label_7F431220;
    case 0x7F431224u: goto label_7F431224;
    case 0x7F431228u: goto label_7F431228;
    case 0x7F43122Cu: goto label_7F43122C;
    case 0x7F431230u: goto label_7F431230;
    case 0x7F431234u: goto label_7F431234;
    case 0x7F431238u: goto label_7F431238;
    case 0x7F43123Cu: goto label_7F43123C;
    case 0x7F431240u: goto label_7F431240;
    case 0x7F431244u: goto label_7F431244;
    case 0x7F431248u: goto label_7F431248;
    case 0x7F43124Cu: goto label_7F43124C;
    case 0x7F431250u: goto label_7F431250;
    case 0x7F431254u: goto label_7F431254;
    case 0x7F431258u: goto label_7F431258;
    case 0x7F43125Cu: goto label_7F43125C;
    case 0x7F431260u: goto label_7F431260;
    case 0x7F431264u: goto label_7F431264;
    case 0x7F431268u: goto label_7F431268;
    case 0x7F43126Cu: goto label_7F43126C;
    case 0x7F431270u: goto label_7F431270;
    case 0x7F431274u: goto label_7F431274;
    case 0x7F431278u: goto label_7F431278;
    case 0x7F43127Cu: goto label_7F43127C;
    case 0x7F431280u: goto label_7F431280;
    case 0x7F431284u: goto label_7F431284;
    case 0x7F431288u: goto label_7F431288;
    case 0x7F43128Cu: goto label_7F43128C;
    case 0x7F431290u: goto label_7F431290;
    case 0x7F431294u: goto label_7F431294;
    case 0x7F431298u: goto label_7F431298;
    case 0x7F43129Cu: goto label_7F43129C;
    case 0x7F4312A0u: goto label_7F4312A0;
    case 0x7F4312A4u: goto label_7F4312A4;
    case 0x7F4312A8u: goto label_7F4312A8;
    case 0x7F4312ACu: goto label_7F4312AC;
    case 0x7F4312B0u: goto label_7F4312B0;
    case 0x7F4312B4u: goto label_7F4312B4;
    case 0x7F4312B8u: goto label_7F4312B8;
    case 0x7F4312BCu: goto label_7F4312BC;
    case 0x7F4312C0u: goto label_7F4312C0;
    case 0x7F4312C4u: goto label_7F4312C4;
    case 0x7F4312C8u: goto label_7F4312C8;
    case 0x7F4312CCu: goto label_7F4312CC;
    case 0x7F4312D0u: goto label_7F4312D0;
    case 0x7F4312D4u: goto label_7F4312D4;
    case 0x7F4312D8u: goto label_7F4312D8;
    case 0x7F4312DCu: goto label_7F4312DC;
    case 0x7F4312E0u: goto label_7F4312E0;
    case 0x7F4312E4u: goto label_7F4312E4;
    case 0x7F4312E8u: goto label_7F4312E8;
    case 0x7F4312ECu: goto label_7F4312EC;
    case 0x7F4312F0u: goto label_7F4312F0;
    case 0x7F4312F4u: goto label_7F4312F4;
    case 0x7F4312F8u: goto label_7F4312F8;
    case 0x7F4312FCu: goto label_7F4312FC;
    case 0x7F431300u: goto label_7F431300;
    case 0x7F431304u: goto label_7F431304;
    case 0x7F431308u: goto label_7F431308;
    case 0x7F43130Cu: goto label_7F43130C;
    case 0x7F431310u: goto label_7F431310;
    case 0x7F431314u: goto label_7F431314;
    case 0x7F431318u: goto label_7F431318;
    case 0x7F43131Cu: goto label_7F43131C;
    case 0x7F431320u: goto label_7F431320;
    case 0x7F431324u: goto label_7F431324;
    case 0x7F431328u: goto label_7F431328;
    case 0x7F43132Cu: goto label_7F43132C;
    case 0x7F431330u: goto label_7F431330;
    case 0x7F431334u: goto label_7F431334;
    case 0x7F431338u: goto label_7F431338;
    case 0x7F43133Cu: goto label_7F43133C;
    case 0x7F431340u: goto label_7F431340;
    case 0x7F431344u: goto label_7F431344;
    case 0x7F431348u: goto label_7F431348;
    case 0x7F43134Cu: goto label_7F43134C;
    case 0x7F431350u: goto label_7F431350;
    case 0x7F431354u: goto label_7F431354;
    case 0x7F431358u: goto label_7F431358;
    case 0x7F43135Cu: goto label_7F43135C;
    case 0x7F431360u: goto label_7F431360;
    case 0x7F431364u: goto label_7F431364;
    case 0x7F431368u: goto label_7F431368;
    case 0x7F43136Cu: goto label_7F43136C;
    case 0x7F431370u: goto label_7F431370;
    case 0x7F431374u: goto label_7F431374;
    case 0x7F431378u: goto label_7F431378;
    case 0x7F43137Cu: goto label_7F43137C;
    case 0x7F431380u: goto label_7F431380;
    case 0x7F431384u: goto label_7F431384;
    case 0x7F431388u: goto label_7F431388;
    case 0x7F43138Cu: goto label_7F43138C;
    case 0x7F431390u: goto label_7F431390;
    case 0x7F431394u: goto label_7F431394;
    case 0x7F431398u: goto label_7F431398;
    case 0x7F43139Cu: goto label_7F43139C;
    case 0x7F4313A0u: goto label_7F4313A0;
    case 0x7F4313A4u: goto label_7F4313A4;
    case 0x7F4313A8u: goto label_7F4313A8;
    case 0x7F4313ACu: goto label_7F4313AC;
    case 0x7F4313B0u: goto label_7F4313B0;
    case 0x7F4313B4u: goto label_7F4313B4;
    case 0x7F4313B8u: goto label_7F4313B8;
    case 0x7F4313BCu: goto label_7F4313BC;
    case 0x7F4313C0u: goto label_7F4313C0;
    case 0x7F4313C4u: goto label_7F4313C4;
    case 0x7F4313C8u: goto label_7F4313C8;
    case 0x7F4313CCu: goto label_7F4313CC;
    case 0x7F4313D0u: goto label_7F4313D0;
    case 0x7F4313D4u: goto label_7F4313D4;
    case 0x7F4313D8u: goto label_7F4313D8;
    case 0x7F4313DCu: goto label_7F4313DC;
    case 0x7F4313E0u: goto label_7F4313E0;
    case 0x7F4313E4u: goto label_7F4313E4;
    case 0x7F4313E8u: goto label_7F4313E8;
    case 0x7F4313ECu: goto label_7F4313EC;
    case 0x7F4313F0u: goto label_7F4313F0;
    case 0x7F4313F4u: goto label_7F4313F4;
    case 0x7F4313F8u: goto label_7F4313F8;
    case 0x7F4313FCu: goto label_7F4313FC;
    case 0x7F431400u: goto label_7F431400;
    case 0x7F431404u: goto label_7F431404;
    case 0x7F431408u: goto label_7F431408;
    case 0x7F43140Cu: goto label_7F43140C;
    case 0x7F431410u: goto label_7F431410;
    case 0x7F431414u: goto label_7F431414;
    case 0x7F431418u: goto label_7F431418;
    case 0x7F43141Cu: goto label_7F43141C;
    case 0x7F431420u: goto label_7F431420;
    case 0x7F431424u: goto label_7F431424;
    case 0x7F431428u: goto label_7F431428;
    case 0x7F43142Cu: goto label_7F43142C;
    case 0x7F431430u: goto label_7F431430;
    case 0x7F431434u: goto label_7F431434;
    case 0x7F431438u: goto label_7F431438;
    case 0x7F43143Cu: goto label_7F43143C;
    case 0x7F431440u: goto label_7F431440;
    case 0x7F431444u: goto label_7F431444;
    case 0x7F431448u: goto label_7F431448;
    case 0x7F43144Cu: goto label_7F43144C;
    case 0x7F431450u: goto label_7F431450;
    case 0x7F431454u: goto label_7F431454;
    case 0x7F431458u: goto label_7F431458;
    case 0x7F43145Cu: goto label_7F43145C;
    case 0x7F431460u: goto label_7F431460;
    case 0x7F431464u: goto label_7F431464;
    case 0x7F431468u: goto label_7F431468;
    case 0x7F43146Cu: goto label_7F43146C;
    case 0x7F431470u: goto label_7F431470;
    case 0x7F431474u: goto label_7F431474;
    case 0x7F431478u: goto label_7F431478;
    case 0x7F43147Cu: goto label_7F43147C;
    case 0x7F431480u: goto label_7F431480;
    case 0x7F431484u: goto label_7F431484;
    case 0x7F431488u: goto label_7F431488;
    case 0x7F43148Cu: goto label_7F43148C;
    case 0x7F431490u: goto label_7F431490;
    case 0x7F431494u: goto label_7F431494;
    case 0x7F431498u: goto label_7F431498;
    case 0x7F43149Cu: goto label_7F43149C;
    case 0x7F4314A0u: goto label_7F4314A0;
    case 0x7F4314A4u: goto label_7F4314A4;
    case 0x7F4314A8u: goto label_7F4314A8;
    case 0x7F4314ACu: goto label_7F4314AC;
    case 0x7F4314B0u: goto label_7F4314B0;
    case 0x7F4314B4u: goto label_7F4314B4;
    case 0x7F4314B8u: goto label_7F4314B8;
    case 0x7F4314BCu: goto label_7F4314BC;
    case 0x7F4314C0u: goto label_7F4314C0;
    case 0x7F4314C4u: goto label_7F4314C4;
    case 0x7F4314C8u: goto label_7F4314C8;
    case 0x7F4314CCu: goto label_7F4314CC;
    case 0x7F4314D0u: goto label_7F4314D0;
    case 0x7F4314D4u: goto label_7F4314D4;
    case 0x7F4314D8u: goto label_7F4314D8;
    case 0x7F4314DCu: goto label_7F4314DC;
    case 0x7F4314E0u: goto label_7F4314E0;
    case 0x7F4314E4u: goto label_7F4314E4;
    case 0x7F4314E8u: goto label_7F4314E8;
    case 0x7F4314ECu: goto label_7F4314EC;
    case 0x7F4314F0u: goto label_7F4314F0;
    case 0x7F4314F4u: goto label_7F4314F4;
    case 0x7F4314F8u: goto label_7F4314F8;
    case 0x7F4314FCu: goto label_7F4314FC;
    case 0x7F431500u: goto label_7F431500;
    case 0x7F431504u: goto label_7F431504;
    case 0x7F431508u: goto label_7F431508;
    case 0x7F43150Cu: goto label_7F43150C;
    case 0x7F431510u: goto label_7F431510;
    case 0x7F431514u: goto label_7F431514;
    case 0x7F431518u: goto label_7F431518;
    case 0x7F43151Cu: goto label_7F43151C;
    case 0x7F431520u: goto label_7F431520;
    case 0x7F431524u: goto label_7F431524;
    case 0x7F431528u: goto label_7F431528;
    case 0x7F43152Cu: goto label_7F43152C;
    case 0x7F431530u: goto label_7F431530;
    case 0x7F431534u: goto label_7F431534;
    case 0x7F431538u: goto label_7F431538;
    case 0x7F43153Cu: goto label_7F43153C;
    case 0x7F431540u: goto label_7F431540;
    case 0x7F431544u: goto label_7F431544;
    case 0x7F431548u: goto label_7F431548;
    case 0x7F43154Cu: goto label_7F43154C;
    case 0x7F431550u: goto label_7F431550;
    case 0x7F431554u: goto label_7F431554;
    case 0x7F431558u: goto label_7F431558;
    case 0x7F43155Cu: goto label_7F43155C;
    case 0x7F431560u: goto label_7F431560;
    case 0x7F431564u: goto label_7F431564;
    case 0x7F431568u: goto label_7F431568;
    case 0x7F43156Cu: goto label_7F43156C;
    case 0x7F431570u: goto label_7F431570;
    case 0x7F431574u: goto label_7F431574;
    case 0x7F431578u: goto label_7F431578;
    case 0x7F43157Cu: goto label_7F43157C;
    case 0x7F431580u: goto label_7F431580;
    case 0x7F431584u: goto label_7F431584;
    case 0x7F431588u: goto label_7F431588;
    case 0x7F43158Cu: goto label_7F43158C;
    case 0x7F431590u: goto label_7F431590;
    case 0x7F431594u: goto label_7F431594;
    case 0x7F431598u: goto label_7F431598;
    case 0x7F43159Cu: goto label_7F43159C;
    case 0x7F4315A0u: goto label_7F4315A0;
    case 0x7F4315A4u: goto label_7F4315A4;
    case 0x7F4315A8u: goto label_7F4315A8;
    case 0x7F4315ACu: goto label_7F4315AC;
    case 0x7F4315B0u: goto label_7F4315B0;
    case 0x7F4315B4u: goto label_7F4315B4;
    case 0x7F4315B8u: goto label_7F4315B8;
    case 0x7F4315BCu: goto label_7F4315BC;
    case 0x7F4315C0u: goto label_7F4315C0;
    case 0x7F4315C4u: goto label_7F4315C4;
    case 0x7F4315C8u: goto label_7F4315C8;
    case 0x7F4315CCu: goto label_7F4315CC;
    case 0x7F4315D0u: goto label_7F4315D0;
    case 0x7F4315D4u: goto label_7F4315D4;
    case 0x7F4315D8u: goto label_7F4315D8;
    case 0x7F4315DCu: goto label_7F4315DC;
    case 0x7F4315E0u: goto label_7F4315E0;
    case 0x7F4315E4u: goto label_7F4315E4;
    case 0x7F4315E8u: goto label_7F4315E8;
    case 0x7F4315ECu: goto label_7F4315EC;
    case 0x7F4315F0u: goto label_7F4315F0;
    case 0x7F4315F4u: goto label_7F4315F4;
    case 0x7F4315F8u: goto label_7F4315F8;
    case 0x7F4315FCu: goto label_7F4315FC;
    case 0x7F431600u: goto label_7F431600;
    case 0x7F431604u: goto label_7F431604;
    case 0x7F431608u: goto label_7F431608;
    case 0x7F43160Cu: goto label_7F43160C;
    case 0x7F431610u: goto label_7F431610;
    case 0x7F431614u: goto label_7F431614;
    case 0x7F431618u: goto label_7F431618;
    case 0x7F43161Cu: goto label_7F43161C;
    case 0x7F431620u: goto label_7F431620;
    case 0x7F431624u: goto label_7F431624;
    case 0x7F431628u: goto label_7F431628;
    case 0x7F43162Cu: goto label_7F43162C;
    case 0x7F431630u: goto label_7F431630;
    case 0x7F431634u: goto label_7F431634;
    case 0x7F431638u: goto label_7F431638;
    case 0x7F43163Cu: goto label_7F43163C;
    case 0x7F431640u: goto label_7F431640;
    case 0x7F431644u: goto label_7F431644;
    case 0x7F431648u: goto label_7F431648;
    case 0x7F43164Cu: goto label_7F43164C;
    case 0x7F431650u: goto label_7F431650;
    case 0x7F431654u: goto label_7F431654;
    case 0x7F431658u: goto label_7F431658;
    case 0x7F43165Cu: goto label_7F43165C;
    case 0x7F431660u: goto label_7F431660;
    case 0x7F431664u: goto label_7F431664;
    case 0x7F431668u: goto label_7F431668;
    case 0x7F43166Cu: goto label_7F43166C;
    case 0x7F431670u: goto label_7F431670;
    case 0x7F431674u: goto label_7F431674;
    case 0x7F431678u: goto label_7F431678;
    case 0x7F43167Cu: goto label_7F43167C;
    case 0x7F431680u: goto label_7F431680;
    case 0x7F431684u: goto label_7F431684;
    case 0x7F431688u: goto label_7F431688;
    case 0x7F43168Cu: goto label_7F43168C;
    case 0x7F431690u: goto label_7F431690;
    case 0x7F431694u: goto label_7F431694;
    case 0x7F431698u: goto label_7F431698;
    case 0x7F43169Cu: goto label_7F43169C;
    case 0x7F4316A0u: goto label_7F4316A0;
    case 0x7F4316A4u: goto label_7F4316A4;
    case 0x7F4316A8u: goto label_7F4316A8;
    case 0x7F4316ACu: goto label_7F4316AC;
    case 0x7F4316B0u: goto label_7F4316B0;
    case 0x7F4316B4u: goto label_7F4316B4;
    case 0x7F4316B8u: goto label_7F4316B8;
    case 0x7F4316BCu: goto label_7F4316BC;
    case 0x7F4316C0u: goto label_7F4316C0;
    case 0x7F4316C4u: goto label_7F4316C4;
    case 0x7F4316C8u: goto label_7F4316C8;
    case 0x7F4316CCu: goto label_7F4316CC;
    case 0x7F4316D0u: goto label_7F4316D0;
    case 0x7F4316D4u: goto label_7F4316D4;
    case 0x7F4316D8u: goto label_7F4316D8;
    case 0x7F4316DCu: goto label_7F4316DC;
    case 0x7F4316E0u: goto label_7F4316E0;
    case 0x7F4316E4u: goto label_7F4316E4;
    case 0x7F4316E8u: goto label_7F4316E8;
    case 0x7F4316ECu: goto label_7F4316EC;
    case 0x7F4316F0u: goto label_7F4316F0;
    case 0x7F4316F4u: goto label_7F4316F4;
    case 0x7F4316F8u: goto label_7F4316F8;
    case 0x7F4316FCu: goto label_7F4316FC;
    case 0x7F431700u: goto label_7F431700;
    case 0x7F431704u: goto label_7F431704;
    case 0x7F431708u: goto label_7F431708;
    case 0x7F43170Cu: goto label_7F43170C;
    case 0x7F431710u: goto label_7F431710;
    case 0x7F431714u: goto label_7F431714;
    case 0x7F431718u: goto label_7F431718;
    case 0x7F43171Cu: goto label_7F43171C;
    case 0x7F431720u: goto label_7F431720;
    case 0x7F431724u: goto label_7F431724;
    case 0x7F431728u: goto label_7F431728;
    case 0x7F43172Cu: goto label_7F43172C;
    case 0x7F431730u: goto label_7F431730;
    case 0x7F431734u: goto label_7F431734;
    case 0x7F431738u: goto label_7F431738;
    case 0x7F43173Cu: goto label_7F43173C;
    case 0x7F431740u: goto label_7F431740;
    case 0x7F431744u: goto label_7F431744;
    case 0x7F431748u: goto label_7F431748;
    case 0x7F43174Cu: goto label_7F43174C;
    case 0x7F431750u: goto label_7F431750;
    case 0x7F431754u: goto label_7F431754;
    case 0x7F431758u: goto label_7F431758;
    case 0x7F43175Cu: goto label_7F43175C;
    case 0x7F431760u: goto label_7F431760;
    case 0x7F431764u: goto label_7F431764;
    case 0x7F431768u: goto label_7F431768;
    case 0x7F43176Cu: goto label_7F43176C;
    case 0x7F431770u: goto label_7F431770;
    case 0x7F431774u: goto label_7F431774;
    case 0x7F431778u: goto label_7F431778;
    case 0x7F43177Cu: goto label_7F43177C;
    case 0x7F431780u: goto label_7F431780;
    case 0x7F431784u: goto label_7F431784;
    case 0x7F431788u: goto label_7F431788;
    case 0x7F43178Cu: goto label_7F43178C;
    case 0x7F431790u: goto label_7F431790;
    case 0x7F431794u: goto label_7F431794;
    case 0x7F431798u: goto label_7F431798;
    case 0x7F43179Cu: goto label_7F43179C;
    case 0x7F4317A0u: goto label_7F4317A0;
    case 0x7F4317A4u: goto label_7F4317A4;
    case 0x7F4317A8u: goto label_7F4317A8;
    case 0x7F4317ACu: goto label_7F4317AC;
    case 0x7F4317B0u: goto label_7F4317B0;
    case 0x7F4317B4u: goto label_7F4317B4;
    case 0x7F4317B8u: goto label_7F4317B8;
    case 0x7F4317BCu: goto label_7F4317BC;
    case 0x7F4317C0u: goto label_7F4317C0;
    case 0x7F4317C4u: goto label_7F4317C4;
    case 0x7F4317C8u: goto label_7F4317C8;
    case 0x7F4317CCu: goto label_7F4317CC;
    case 0x7F4317D0u: goto label_7F4317D0;
    case 0x7F4317D4u: goto label_7F4317D4;
    case 0x7F4317D8u: goto label_7F4317D8;
    case 0x7F4317DCu: goto label_7F4317DC;
    case 0x7F4317E0u: goto label_7F4317E0;
    case 0x7F4317E4u: goto label_7F4317E4;
    case 0x7F4317E8u: goto label_7F4317E8;
    case 0x7F4317ECu: goto label_7F4317EC;
    case 0x7F4317F0u: goto label_7F4317F0;
    case 0x7F4317F4u: goto label_7F4317F4;
    case 0x7F4317F8u: goto label_7F4317F8;
    case 0x7F4317FCu: goto label_7F4317FC;
    case 0x7F431800u: goto label_7F431800;
    case 0x7F431804u: goto label_7F431804;
    case 0x7F431808u: goto label_7F431808;
    case 0x7F43180Cu: goto label_7F43180C;
    case 0x7F431810u: goto label_7F431810;
    case 0x7F431814u: goto label_7F431814;
    case 0x7F431818u: goto label_7F431818;
    case 0x7F43181Cu: goto label_7F43181C;
    case 0x7F431820u: goto label_7F431820;
    case 0x7F431824u: goto label_7F431824;
    case 0x7F431828u: goto label_7F431828;
    case 0x7F43182Cu: goto label_7F43182C;
    case 0x7F431830u: goto label_7F431830;
    case 0x7F431834u: goto label_7F431834;
    case 0x7F431838u: goto label_7F431838;
    case 0x7F43183Cu: goto label_7F43183C;
    case 0x7F431840u: goto label_7F431840;
    case 0x7F431844u: goto label_7F431844;
    case 0x7F431848u: goto label_7F431848;
    case 0x7F43184Cu: goto label_7F43184C;
    case 0x7F431850u: goto label_7F431850;
    case 0x7F431854u: goto label_7F431854;
    case 0x7F431858u: goto label_7F431858;
    case 0x7F43185Cu: goto label_7F43185C;
    case 0x7F431860u: goto label_7F431860;
    case 0x7F431864u: goto label_7F431864;
    case 0x7F431868u: goto label_7F431868;
    case 0x7F43186Cu: goto label_7F43186C;
    case 0x7F431870u: goto label_7F431870;
    case 0x7F431874u: goto label_7F431874;
    case 0x7F431878u: goto label_7F431878;
    case 0x7F43187Cu: goto label_7F43187C;
    case 0x7F431880u: goto label_7F431880;
    case 0x7F431884u: goto label_7F431884;
    case 0x7F431888u: goto label_7F431888;
    case 0x7F43188Cu: goto label_7F43188C;
    case 0x7F431890u: goto label_7F431890;
    case 0x7F431894u: goto label_7F431894;
    case 0x7F431898u: goto label_7F431898;
    case 0x7F43189Cu: goto label_7F43189C;
    case 0x7F4318A0u: goto label_7F4318A0;
    case 0x7F4318A4u: goto label_7F4318A4;
    case 0x7F4318A8u: goto label_7F4318A8;
    case 0x7F4318ACu: goto label_7F4318AC;
    case 0x7F4318B0u: goto label_7F4318B0;
    case 0x7F4318B4u: goto label_7F4318B4;
    case 0x7F4318B8u: goto label_7F4318B8;
    case 0x7F4318BCu: goto label_7F4318BC;
    case 0x7F4318C0u: goto label_7F4318C0;
    case 0x7F4318C4u: goto label_7F4318C4;
    case 0x7F4318C8u: goto label_7F4318C8;
    case 0x7F4318CCu: goto label_7F4318CC;
    case 0x7F4318D0u: goto label_7F4318D0;
    case 0x7F4318D4u: goto label_7F4318D4;
    case 0x7F4318D8u: goto label_7F4318D8;
    case 0x7F4318DCu: goto label_7F4318DC;
    case 0x7F4318E0u: goto label_7F4318E0;
    case 0x7F4318E4u: goto label_7F4318E4;
    case 0x7F4318E8u: goto label_7F4318E8;
    case 0x7F4318ECu: goto label_7F4318EC;
    case 0x7F4318F0u: goto label_7F4318F0;
    case 0x7F4318F4u: goto label_7F4318F4;
    case 0x7F4318F8u: goto label_7F4318F8;
    case 0x7F4318FCu: goto label_7F4318FC;
    case 0x7F431900u: goto label_7F431900;
    case 0x7F431904u: goto label_7F431904;
    case 0x7F431908u: goto label_7F431908;
    case 0x7F43190Cu: goto label_7F43190C;
    case 0x7F431910u: goto label_7F431910;
    case 0x7F431914u: goto label_7F431914;
    case 0x7F431918u: goto label_7F431918;
    case 0x7F43191Cu: goto label_7F43191C;
    case 0x7F431920u: goto label_7F431920;
    case 0x7F431924u: goto label_7F431924;
    case 0x7F431928u: goto label_7F431928;
    case 0x7F43192Cu: goto label_7F43192C;
    case 0x7F431930u: goto label_7F431930;
    case 0x7F431934u: goto label_7F431934;
    case 0x7F431938u: goto label_7F431938;
    case 0x7F43193Cu: goto label_7F43193C;
    case 0x7F431940u: goto label_7F431940;
    case 0x7F431944u: goto label_7F431944;
    case 0x7F431948u: goto label_7F431948;
    case 0x7F43194Cu: goto label_7F43194C;
    case 0x7F431950u: goto label_7F431950;
    case 0x7F431954u: goto label_7F431954;
    case 0x7F431958u: goto label_7F431958;
    case 0x7F43195Cu: goto label_7F43195C;
    case 0x7F431960u: goto label_7F431960;
    case 0x7F431964u: goto label_7F431964;
    case 0x7F431968u: goto label_7F431968;
    case 0x7F43196Cu: goto label_7F43196C;
    case 0x7F431970u: goto label_7F431970;
    case 0x7F431974u: goto label_7F431974;
    case 0x7F431978u: goto label_7F431978;
    case 0x7F43197Cu: goto label_7F43197C;
    case 0x7F431980u: goto label_7F431980;
    case 0x7F431984u: goto label_7F431984;
    case 0x7F431988u: goto label_7F431988;
    case 0x7F43198Cu: goto label_7F43198C;
    case 0x7F431990u: goto label_7F431990;
    case 0x7F431994u: goto label_7F431994;
    case 0x7F431998u: goto label_7F431998;
    case 0x7F43199Cu: goto label_7F43199C;
    case 0x7F4319A0u: goto label_7F4319A0;
    case 0x7F4319A4u: goto label_7F4319A4;
    case 0x7F4319A8u: goto label_7F4319A8;
    case 0x7F4319ACu: goto label_7F4319AC;
    case 0x7F4319B0u: goto label_7F4319B0;
    case 0x7F4319B4u: goto label_7F4319B4;
    case 0x7F4319B8u: goto label_7F4319B8;
    case 0x7F4319BCu: goto label_7F4319BC;
    case 0x7F4319C0u: goto label_7F4319C0;
    case 0x7F4319C4u: goto label_7F4319C4;
    case 0x7F4319C8u: goto label_7F4319C8;
    case 0x7F4319CCu: goto label_7F4319CC;
    case 0x7F4319D0u: goto label_7F4319D0;
    case 0x7F4319D4u: goto label_7F4319D4;
    case 0x7F4319D8u: goto label_7F4319D8;
    case 0x7F4319DCu: goto label_7F4319DC;
    case 0x7F4319E0u: goto label_7F4319E0;
    case 0x7F4319E4u: goto label_7F4319E4;
    case 0x7F4319E8u: goto label_7F4319E8;
    case 0x7F4319ECu: goto label_7F4319EC;
    case 0x7F4319F0u: goto label_7F4319F0;
    case 0x7F4319F4u: goto label_7F4319F4;
    case 0x7F4319F8u: goto label_7F4319F8;
    case 0x7F4319FCu: goto label_7F4319FC;
    case 0x7F431A00u: goto label_7F431A00;
    case 0x7F431A04u: goto label_7F431A04;
    case 0x7F431A08u: goto label_7F431A08;
    case 0x7F431A0Cu: goto label_7F431A0C;
    case 0x7F431A10u: goto label_7F431A10;
    case 0x7F431A14u: goto label_7F431A14;
    case 0x7F431A18u: goto label_7F431A18;
    case 0x7F431A1Cu: goto label_7F431A1C;
    case 0x7F431A20u: goto label_7F431A20;
    case 0x7F431A24u: goto label_7F431A24;
    case 0x7F431A28u: goto label_7F431A28;
    case 0x7F431A2Cu: goto label_7F431A2C;
    case 0x7F431A30u: goto label_7F431A30;
    case 0x7F431A34u: goto label_7F431A34;
    case 0x7F431A38u: goto label_7F431A38;
    case 0x7F431A3Cu: goto label_7F431A3C;
    case 0x7F431A40u: goto label_7F431A40;
    case 0x7F431A44u: goto label_7F431A44;
    case 0x7F431A48u: goto label_7F431A48;
    case 0x7F431A4Cu: goto label_7F431A4C;
    case 0x7F431A50u: goto label_7F431A50;
    case 0x7F431A54u: goto label_7F431A54;
    case 0x7F431A58u: goto label_7F431A58;
    case 0x7F431A5Cu: goto label_7F431A5C;
    case 0x7F431A60u: goto label_7F431A60;
    case 0x7F431A64u: goto label_7F431A64;
    case 0x7F431A68u: goto label_7F431A68;
    case 0x7F431A6Cu: goto label_7F431A6C;
    case 0x7F431A70u: goto label_7F431A70;
    case 0x7F431A74u: goto label_7F431A74;
    case 0x7F431A78u: goto label_7F431A78;
    case 0x7F431A7Cu: goto label_7F431A7C;
    case 0x7F431A80u: goto label_7F431A80;
    case 0x7F431A84u: goto label_7F431A84;
    case 0x7F431A88u: goto label_7F431A88;
    case 0x7F431A8Cu: goto label_7F431A8C;
    case 0x7F431A90u: goto label_7F431A90;
    case 0x7F431A94u: goto label_7F431A94;
    case 0x7F431A98u: goto label_7F431A98;
    case 0x7F431A9Cu: goto label_7F431A9C;
    case 0x7F431AA0u: goto label_7F431AA0;
    case 0x7F431AA4u: goto label_7F431AA4;
    case 0x7F431AA8u: goto label_7F431AA8;
    case 0x7F431AACu: goto label_7F431AAC;
    case 0x7F431AB0u: goto label_7F431AB0;
    case 0x7F431AB4u: goto label_7F431AB4;
    case 0x7F431AB8u: goto label_7F431AB8;
    case 0x7F431ABCu: goto label_7F431ABC;
    case 0x7F431AC0u: goto label_7F431AC0;
    case 0x7F431AC4u: goto label_7F431AC4;
    case 0x7F431AC8u: goto label_7F431AC8;
    case 0x7F431ACCu: goto label_7F431ACC;
    case 0x7F431AD0u: goto label_7F431AD0;
    case 0x7F431AD4u: goto label_7F431AD4;
    case 0x7F431AD8u: goto label_7F431AD8;
    case 0x7F431ADCu: goto label_7F431ADC;
    case 0x7F431AE0u: goto label_7F431AE0;
    case 0x7F431AE4u: goto label_7F431AE4;
    case 0x7F431AE8u: goto label_7F431AE8;
    case 0x7F431AECu: goto label_7F431AEC;
    case 0x7F431AF0u: goto label_7F431AF0;
    case 0x7F431AF4u: goto label_7F431AF4;
    case 0x7F431AF8u: goto label_7F431AF8;
    case 0x7F431AFCu: goto label_7F431AFC;
    case 0x7F431B00u: goto label_7F431B00;
    case 0x7F431B04u: goto label_7F431B04;
    case 0x7F431B08u: goto label_7F431B08;
    case 0x7F431B0Cu: goto label_7F431B0C;
    case 0x7F431B10u: goto label_7F431B10;
    case 0x7F431B14u: goto label_7F431B14;
    case 0x7F431B18u: goto label_7F431B18;
    case 0x7F431B1Cu: goto label_7F431B1C;
    case 0x7F431B20u: goto label_7F431B20;
    case 0x7F431B24u: goto label_7F431B24;
    case 0x7F431B28u: goto label_7F431B28;
    case 0x7F431B2Cu: goto label_7F431B2C;
    case 0x7F431B30u: goto label_7F431B30;
    case 0x7F431B34u: goto label_7F431B34;
    case 0x7F431B38u: goto label_7F431B38;
    case 0x7F431B3Cu: goto label_7F431B3C;
    case 0x7F431B40u: goto label_7F431B40;
    case 0x7F431B44u: goto label_7F431B44;
    case 0x7F431B48u: goto label_7F431B48;
    case 0x7F431B4Cu: goto label_7F431B4C;
    case 0x7F431B50u: goto label_7F431B50;
    case 0x7F431B54u: goto label_7F431B54;
    case 0x7F431B58u: goto label_7F431B58;
    case 0x7F431B5Cu: goto label_7F431B5C;
    case 0x7F431B60u: goto label_7F431B60;
    case 0x7F431B64u: goto label_7F431B64;
    case 0x7F431B68u: goto label_7F431B68;
    case 0x7F431B6Cu: goto label_7F431B6C;
    case 0x7F431B70u: goto label_7F431B70;
    case 0x7F431B74u: goto label_7F431B74;
    case 0x7F431B78u: goto label_7F431B78;
    case 0x7F431B7Cu: goto label_7F431B7C;
    case 0x7F431B80u: goto label_7F431B80;
    case 0x7F431B84u: goto label_7F431B84;
    case 0x7F431B88u: goto label_7F431B88;
    case 0x7F431B8Cu: goto label_7F431B8C;
    case 0x7F431B90u: goto label_7F431B90;
    case 0x7F431B94u: goto label_7F431B94;
    case 0x7F431B98u: goto label_7F431B98;
    case 0x7F431B9Cu: goto label_7F431B9C;
    case 0x7F431BA0u: goto label_7F431BA0;
    case 0x7F431BA4u: goto label_7F431BA4;
    case 0x7F431BA8u: goto label_7F431BA8;
    case 0x7F431BACu: goto label_7F431BAC;
    case 0x7F431BB0u: goto label_7F431BB0;
    case 0x7F431BB4u: goto label_7F431BB4;
    case 0x7F431BB8u: goto label_7F431BB8;
    case 0x7F431BBCu: goto label_7F431BBC;
    case 0x7F431BC0u: goto label_7F431BC0;
    case 0x7F431BC4u: goto label_7F431BC4;
    case 0x7F431BC8u: goto label_7F431BC8;
    case 0x7F431BCCu: goto label_7F431BCC;
    case 0x7F431BD0u: goto label_7F431BD0;
    case 0x7F431BD4u: goto label_7F431BD4;
    case 0x7F431BD8u: goto label_7F431BD8;
    case 0x7F431BDCu: goto label_7F431BDC;
    case 0x7F431BE0u: goto label_7F431BE0;
    case 0x7F431BE4u: goto label_7F431BE4;
    case 0x7F431BE8u: goto label_7F431BE8;
    case 0x7F431BECu: goto label_7F431BEC;
    case 0x7F431BF0u: goto label_7F431BF0;
    case 0x7F431BF4u: goto label_7F431BF4;
    case 0x7F431BF8u: goto label_7F431BF8;
    case 0x7F431BFCu: goto label_7F431BFC;
    case 0x7F431C00u: goto label_7F431C00;
    case 0x7F431C04u: goto label_7F431C04;
    case 0x7F431C08u: goto label_7F431C08;
    case 0x7F431C0Cu: goto label_7F431C0C;
    case 0x7F431C10u: goto label_7F431C10;
    case 0x7F431C14u: goto label_7F431C14;
    case 0x7F431C18u: goto label_7F431C18;
    case 0x7F431C1Cu: goto label_7F431C1C;
    case 0x7F431C20u: goto label_7F431C20;
    case 0x7F431C24u: goto label_7F431C24;
    case 0x7F431C28u: goto label_7F431C28;
    case 0x7F431C2Cu: goto label_7F431C2C;
    case 0x7F431C30u: goto label_7F431C30;
    case 0x7F431C34u: goto label_7F431C34;
    case 0x7F431C38u: goto label_7F431C38;
    case 0x7F431C3Cu: goto label_7F431C3C;
    case 0x7F431C40u: goto label_7F431C40;
    case 0x7F431C44u: goto label_7F431C44;
    case 0x7F431C48u: goto label_7F431C48;
    case 0x7F431C4Cu: goto label_7F431C4C;
    case 0x7F431C50u: goto label_7F431C50;
    case 0x7F431C54u: goto label_7F431C54;
    case 0x7F431C58u: goto label_7F431C58;
    case 0x7F431C5Cu: goto label_7F431C5C;
    case 0x7F431C60u: goto label_7F431C60;
    case 0x7F431C64u: goto label_7F431C64;
    case 0x7F431C68u: goto label_7F431C68;
    case 0x7F431C6Cu: goto label_7F431C6C;
    case 0x7F431C70u: goto label_7F431C70;
    case 0x7F431C74u: goto label_7F431C74;
    case 0x7F431C78u: goto label_7F431C78;
    case 0x7F431C7Cu: goto label_7F431C7C;
    case 0x7F431C80u: goto label_7F431C80;
    case 0x7F431C84u: goto label_7F431C84;
    case 0x7F431C88u: goto label_7F431C88;
    case 0x7F431C8Cu: goto label_7F431C8C;
    case 0x7F431C90u: goto label_7F431C90;
    case 0x7F431C94u: goto label_7F431C94;
    case 0x7F431C98u: goto label_7F431C98;
    case 0x7F431C9Cu: goto label_7F431C9C;
    case 0x7F431CA0u: goto label_7F431CA0;
    case 0x7F431CA4u: goto label_7F431CA4;
    case 0x7F431CA8u: goto label_7F431CA8;
    case 0x7F431CACu: goto label_7F431CAC;
    case 0x7F431CB0u: goto label_7F431CB0;
    case 0x7F431CB4u: goto label_7F431CB4;
    case 0x7F431CB8u: goto label_7F431CB8;
    case 0x7F431CBCu: goto label_7F431CBC;
    case 0x7F431CC0u: goto label_7F431CC0;
    case 0x7F431CC4u: goto label_7F431CC4;
    case 0x7F431CC8u: goto label_7F431CC8;
    case 0x7F431CCCu: goto label_7F431CCC;
    case 0x7F431CD0u: goto label_7F431CD0;
    case 0x7F431CD4u: goto label_7F431CD4;
    case 0x7F431CD8u: goto label_7F431CD8;
    case 0x7F431CDCu: goto label_7F431CDC;
    case 0x7F431CE0u: goto label_7F431CE0;
    case 0x7F431CE4u: goto label_7F431CE4;
    case 0x7F431CE8u: goto label_7F431CE8;
    case 0x7F431CECu: goto label_7F431CEC;
    case 0x7F431CF0u: goto label_7F431CF0;
    case 0x7F431CF4u: goto label_7F431CF4;
    case 0x7F431CF8u: goto label_7F431CF8;
    case 0x7F431CFCu: goto label_7F431CFC;
    case 0x7F431D00u: goto label_7F431D00;
    case 0x7F431D04u: goto label_7F431D04;
    case 0x7F431D08u: goto label_7F431D08;
    case 0x7F431D0Cu: goto label_7F431D0C;
    case 0x7F431D10u: goto label_7F431D10;
    case 0x7F431D14u: goto label_7F431D14;
    case 0x7F431D18u: goto label_7F431D18;
    case 0x7F431D1Cu: goto label_7F431D1C;
    case 0x7F431D20u: goto label_7F431D20;
    case 0x7F431D24u: goto label_7F431D24;
    case 0x7F431D28u: goto label_7F431D28;
    case 0x7F431D2Cu: goto label_7F431D2C;
    case 0x7F431D30u: goto label_7F431D30;
    case 0x7F431D34u: goto label_7F431D34;
    case 0x7F431D38u: goto label_7F431D38;
    case 0x7F431D3Cu: goto label_7F431D3C;
    case 0x7F431D40u: goto label_7F431D40;
    case 0x7F431D44u: goto label_7F431D44;
    case 0x7F431D48u: goto label_7F431D48;
    case 0x7F431D4Cu: goto label_7F431D4C;
    case 0x7F431D50u: goto label_7F431D50;
    case 0x7F431D54u: goto label_7F431D54;
    case 0x7F431D58u: goto label_7F431D58;
    case 0x7F431D5Cu: goto label_7F431D5C;
    case 0x7F431D60u: goto label_7F431D60;
    case 0x7F431D64u: goto label_7F431D64;
    case 0x7F431D68u: goto label_7F431D68;
    case 0x7F431D6Cu: goto label_7F431D6C;
    case 0x7F431D70u: goto label_7F431D70;
    case 0x7F431D74u: goto label_7F431D74;
    case 0x7F431D78u: goto label_7F431D78;
    case 0x7F431D7Cu: goto label_7F431D7C;
    case 0x7F431D80u: goto label_7F431D80;
    case 0x7F431D84u: goto label_7F431D84;
    case 0x7F431D88u: goto label_7F431D88;
    case 0x7F431D8Cu: goto label_7F431D8C;
    case 0x7F431D90u: goto label_7F431D90;
    case 0x7F431D94u: goto label_7F431D94;
    case 0x7F431D98u: goto label_7F431D98;
    case 0x7F431D9Cu: goto label_7F431D9C;
    case 0x7F431DA0u: goto label_7F431DA0;
    case 0x7F431DA4u: goto label_7F431DA4;
    case 0x7F431DA8u: goto label_7F431DA8;
    case 0x7F431DACu: goto label_7F431DAC;
    case 0x7F431DB0u: goto label_7F431DB0;
    case 0x7F431DB4u: goto label_7F431DB4;
    case 0x7F431DB8u: goto label_7F431DB8;
    case 0x7F431DBCu: goto label_7F431DBC;
    case 0x7F431DC0u: goto label_7F431DC0;
    case 0x7F431DC4u: goto label_7F431DC4;
    case 0x7F431DC8u: goto label_7F431DC8;
    case 0x7F431DCCu: goto label_7F431DCC;
    case 0x7F431DD0u: goto label_7F431DD0;
    case 0x7F431DD4u: goto label_7F431DD4;
    case 0x7F431DD8u: goto label_7F431DD8;
    case 0x7F431DDCu: goto label_7F431DDC;
    case 0x7F431DE0u: goto label_7F431DE0;
    case 0x7F431DE4u: goto label_7F431DE4;
    case 0x7F431DE8u: goto label_7F431DE8;
    case 0x7F431DECu: goto label_7F431DEC;
    case 0x7F431DF0u: goto label_7F431DF0;
    case 0x7F431DF4u: goto label_7F431DF4;
    case 0x7F431DF8u: goto label_7F431DF8;
    case 0x7F431DFCu: goto label_7F431DFC;
    case 0x7F431E00u: goto label_7F431E00;
    case 0x7F431E04u: goto label_7F431E04;
    case 0x7F431E08u: goto label_7F431E08;
    case 0x7F431E0Cu: goto label_7F431E0C;
    case 0x7F431E10u: goto label_7F431E10;
    case 0x7F431E14u: goto label_7F431E14;
    case 0x7F431E18u: goto label_7F431E18;
    case 0x7F431E1Cu: goto label_7F431E1C;
    case 0x7F431E20u: goto label_7F431E20;
    case 0x7F431E24u: goto label_7F431E24;
    case 0x7F431E28u: goto label_7F431E28;
    case 0x7F431E2Cu: goto label_7F431E2C;
    case 0x7F431E30u: goto label_7F431E30;
    case 0x7F431E34u: goto label_7F431E34;
    case 0x7F431E38u: goto label_7F431E38;
    case 0x7F431E3Cu: goto label_7F431E3C;
    case 0x7F431E40u: goto label_7F431E40;
    case 0x7F431E44u: goto label_7F431E44;
    case 0x7F431E48u: goto label_7F431E48;
    case 0x7F431E4Cu: goto label_7F431E4C;
    case 0x7F431E50u: goto label_7F431E50;
    case 0x7F431E54u: goto label_7F431E54;
    case 0x7F431E58u: goto label_7F431E58;
    case 0x7F431E5Cu: goto label_7F431E5C;
    case 0x7F431E60u: goto label_7F431E60;
    case 0x7F431E64u: goto label_7F431E64;
    case 0x7F431E68u: goto label_7F431E68;
    case 0x7F431E6Cu: goto label_7F431E6C;
    case 0x7F431E70u: goto label_7F431E70;
    case 0x7F431E74u: goto label_7F431E74;
    case 0x7F431E78u: goto label_7F431E78;
    case 0x7F431E7Cu: goto label_7F431E7C;
    case 0x7F431E80u: goto label_7F431E80;
    case 0x7F431E84u: goto label_7F431E84;
    case 0x7F431E88u: goto label_7F431E88;
    case 0x7F431E8Cu: goto label_7F431E8C;
    case 0x7F431E90u: goto label_7F431E90;
    case 0x7F431E94u: goto label_7F431E94;
    case 0x7F431E98u: goto label_7F431E98;
    case 0x7F431E9Cu: goto label_7F431E9C;
    case 0x7F431EA0u: goto label_7F431EA0;
    case 0x7F431EA4u: goto label_7F431EA4;
    case 0x7F431EA8u: goto label_7F431EA8;
    case 0x7F431EACu: goto label_7F431EAC;
    case 0x7F431EB0u: goto label_7F431EB0;
    case 0x7F431EB4u: goto label_7F431EB4;
    case 0x7F431EB8u: goto label_7F431EB8;
    case 0x7F431EBCu: goto label_7F431EBC;
    case 0x7F431EC0u: goto label_7F431EC0;
    case 0x7F431EC4u: goto label_7F431EC4;
    case 0x7F431EC8u: goto label_7F431EC8;
    case 0x7F431ECCu: goto label_7F431ECC;
    case 0x7F431ED0u: goto label_7F431ED0;
    case 0x7F431ED4u: goto label_7F431ED4;
    case 0x7F431ED8u: goto label_7F431ED8;
    case 0x7F431EDCu: goto label_7F431EDC;
    case 0x7F431EE0u: goto label_7F431EE0;
    case 0x7F431EE4u: goto label_7F431EE4;
    case 0x7F431EE8u: goto label_7F431EE8;
    case 0x7F431EECu: goto label_7F431EEC;
    case 0x7F431EF0u: goto label_7F431EF0;
    case 0x7F431EF4u: goto label_7F431EF4;
    case 0x7F431EF8u: goto label_7F431EF8;
    case 0x7F431EFCu: goto label_7F431EFC;
    case 0x7F431F00u: goto label_7F431F00;
    case 0x7F431F04u: goto label_7F431F04;
    case 0x7F431F08u: goto label_7F431F08;
    case 0x7F431F0Cu: goto label_7F431F0C;
    case 0x7F431F10u: goto label_7F431F10;
    case 0x7F431F14u: goto label_7F431F14;
    case 0x7F431F18u: goto label_7F431F18;
    case 0x7F431F1Cu: goto label_7F431F1C;
    case 0x7F431F20u: goto label_7F431F20;
    case 0x7F431F24u: goto label_7F431F24;
    case 0x7F431F28u: goto label_7F431F28;
    case 0x7F431F2Cu: goto label_7F431F2C;
    case 0x7F431F30u: goto label_7F431F30;
    case 0x7F431F34u: goto label_7F431F34;
    case 0x7F431F38u: goto label_7F431F38;
    case 0x7F431F3Cu: goto label_7F431F3C;
    case 0x7F431F40u: goto label_7F431F40;
    case 0x7F431F44u: goto label_7F431F44;
    case 0x7F431F48u: goto label_7F431F48;
    case 0x7F431F4Cu: goto label_7F431F4C;
    case 0x7F431F50u: goto label_7F431F50;
    case 0x7F431F54u: goto label_7F431F54;
    case 0x7F431F58u: goto label_7F431F58;
    case 0x7F431F5Cu: goto label_7F431F5C;
    case 0x7F431F60u: goto label_7F431F60;
    case 0x7F431F64u: goto label_7F431F64;
    case 0x7F431F68u: goto label_7F431F68;
    case 0x7F431F6Cu: goto label_7F431F6C;
    case 0x7F431F70u: goto label_7F431F70;
    case 0x7F431F74u: goto label_7F431F74;
    case 0x7F431F78u: goto label_7F431F78;
    case 0x7F431F7Cu: goto label_7F431F7C;
    case 0x7F431F80u: goto label_7F431F80;
    case 0x7F431F84u: goto label_7F431F84;
    case 0x7F431F88u: goto label_7F431F88;
    case 0x7F431F8Cu: goto label_7F431F8C;
    case 0x7F431F90u: goto label_7F431F90;
    case 0x7F431F94u: goto label_7F431F94;
    case 0x7F431F98u: goto label_7F431F98;
    case 0x7F431F9Cu: goto label_7F431F9C;
    case 0x7F431FA0u: goto label_7F431FA0;
    case 0x7F431FA4u: goto label_7F431FA4;
    case 0x7F431FA8u: goto label_7F431FA8;
    case 0x7F431FACu: goto label_7F431FAC;
    case 0x7F431FB0u: goto label_7F431FB0;
    case 0x7F431FB4u: goto label_7F431FB4;
    case 0x7F431FB8u: goto label_7F431FB8;
    case 0x7F431FBCu: goto label_7F431FBC;
    case 0x7F431FC0u: goto label_7F431FC0;
    case 0x7F431FC4u: goto label_7F431FC4;
    case 0x7F431FC8u: goto label_7F431FC8;
    case 0x7F431FCCu: goto label_7F431FCC;
    case 0x7F431FD0u: goto label_7F431FD0;
    case 0x7F431FD4u: goto label_7F431FD4;
    case 0x7F431FD8u: goto label_7F431FD8;
    case 0x7F431FDCu: goto label_7F431FDC;
    case 0x7F431FE0u: goto label_7F431FE0;
    case 0x7F431FE4u: goto label_7F431FE4;
    case 0x7F431FE8u: goto label_7F431FE8;
    case 0x7F431FECu: goto label_7F431FEC;
    case 0x7F431FF0u: goto label_7F431FF0;
    case 0x7F431FF4u: goto label_7F431FF4;
    case 0x7F431FF8u: goto label_7F431FF8;
    case 0x7F431FFCu: goto label_7F431FFC;
    case 0x7F432000u: goto label_7F432000;
    case 0x7F432004u: goto label_7F432004;
    case 0x7F432008u: goto label_7F432008;
    case 0x7F43200Cu: goto label_7F43200C;
    case 0x7F432010u: goto label_7F432010;
    case 0x7F432014u: goto label_7F432014;
    case 0x7F432018u: goto label_7F432018;
    case 0x7F43201Cu: goto label_7F43201C;
    case 0x7F432020u: goto label_7F432020;
    case 0x7F432024u: goto label_7F432024;
    case 0x7F432028u: goto label_7F432028;
    case 0x7F43202Cu: goto label_7F43202C;
    case 0x7F432030u: goto label_7F432030;
    case 0x7F432034u: goto label_7F432034;
    case 0x7F432038u: goto label_7F432038;
    case 0x7F43203Cu: goto label_7F43203C;
    case 0x7F432040u: goto label_7F432040;
    case 0x7F432044u: goto label_7F432044;
    case 0x7F432048u: goto label_7F432048;
    case 0x7F43204Cu: goto label_7F43204C;
    case 0x7F432050u: goto label_7F432050;
    case 0x7F432054u: goto label_7F432054;
    case 0x7F432058u: goto label_7F432058;
    case 0x7F43205Cu: goto label_7F43205C;
    case 0x7F432060u: goto label_7F432060;
    case 0x7F432064u: goto label_7F432064;
    case 0x7F432068u: goto label_7F432068;
    case 0x7F43206Cu: goto label_7F43206C;
    case 0x7F432070u: goto label_7F432070;
    case 0x7F432074u: goto label_7F432074;
    case 0x7F432078u: goto label_7F432078;
    case 0x7F43207Cu: goto label_7F43207C;
    case 0x7F432080u: goto label_7F432080;
    case 0x7F432084u: goto label_7F432084;
    case 0x7F432088u: goto label_7F432088;
    case 0x7F43208Cu: goto label_7F43208C;
    case 0x7F432090u: goto label_7F432090;
    case 0x7F432094u: goto label_7F432094;
    case 0x7F432098u: goto label_7F432098;
    case 0x7F43209Cu: goto label_7F43209C;
    case 0x7F4320A0u: goto label_7F4320A0;
    case 0x7F4320A4u: goto label_7F4320A4;
    case 0x7F4320A8u: goto label_7F4320A8;
    case 0x7F4320ACu: goto label_7F4320AC;
    case 0x7F4320B0u: goto label_7F4320B0;
    case 0x7F4320B4u: goto label_7F4320B4;
    case 0x7F4320B8u: goto label_7F4320B8;
    case 0x7F4320BCu: goto label_7F4320BC;
    case 0x7F4320C0u: goto label_7F4320C0;
    case 0x7F4320C4u: goto label_7F4320C4;
    case 0x7F4320C8u: goto label_7F4320C8;
    case 0x7F4320CCu: goto label_7F4320CC;
    case 0x7F4320D0u: goto label_7F4320D0;
    case 0x7F4320D4u: goto label_7F4320D4;
    case 0x7F4320D8u: goto label_7F4320D8;
    case 0x7F4320DCu: goto label_7F4320DC;
    case 0x7F4320E0u: goto label_7F4320E0;
    case 0x7F4320E4u: goto label_7F4320E4;
    case 0x7F4320E8u: goto label_7F4320E8;
    case 0x7F4320ECu: goto label_7F4320EC;
    case 0x7F4320F0u: goto label_7F4320F0;
    case 0x7F4320F4u: goto label_7F4320F4;
    case 0x7F4320F8u: goto label_7F4320F8;
    case 0x7F4320FCu: goto label_7F4320FC;
    case 0x7F432100u: goto label_7F432100;
    case 0x7F432104u: goto label_7F432104;
    case 0x7F432108u: goto label_7F432108;
    case 0x7F43210Cu: goto label_7F43210C;
    case 0x7F432110u: goto label_7F432110;
    case 0x7F432114u: goto label_7F432114;
    case 0x7F432118u: goto label_7F432118;
    case 0x7F43211Cu: goto label_7F43211C;
    case 0x7F432120u: goto label_7F432120;
    case 0x7F432124u: goto label_7F432124;
    case 0x7F432128u: goto label_7F432128;
    case 0x7F43212Cu: goto label_7F43212C;
    case 0x7F432130u: goto label_7F432130;
    case 0x7F432134u: goto label_7F432134;
    case 0x7F432138u: goto label_7F432138;
    case 0x7F43213Cu: goto label_7F43213C;
    case 0x7F432140u: goto label_7F432140;
    case 0x7F432144u: goto label_7F432144;
    case 0x7F432148u: goto label_7F432148;
    case 0x7F43214Cu: goto label_7F43214C;
    case 0x7F432150u: goto label_7F432150;
    case 0x7F432154u: goto label_7F432154;
    case 0x7F432158u: goto label_7F432158;
    case 0x7F43215Cu: goto label_7F43215C;
    case 0x7F432160u: goto label_7F432160;
    case 0x7F432164u: goto label_7F432164;
    case 0x7F432168u: goto label_7F432168;
    case 0x7F43216Cu: goto label_7F43216C;
    case 0x7F432170u: goto label_7F432170;
    case 0x7F432174u: goto label_7F432174;
    case 0x7F432178u: goto label_7F432178;
    case 0x7F43217Cu: goto label_7F43217C;
    case 0x7F432180u: goto label_7F432180;
    case 0x7F432184u: goto label_7F432184;
    case 0x7F432188u: goto label_7F432188;
    case 0x7F43218Cu: goto label_7F43218C;
    case 0x7F432190u: goto label_7F432190;
    case 0x7F432194u: goto label_7F432194;
    case 0x7F432198u: goto label_7F432198;
    case 0x7F43219Cu: goto label_7F43219C;
    case 0x7F4321A0u: goto label_7F4321A0;
    case 0x7F4321A4u: goto label_7F4321A4;
    case 0x7F4321A8u: goto label_7F4321A8;
    case 0x7F4321ACu: goto label_7F4321AC;
    case 0x7F4321B0u: goto label_7F4321B0;
    case 0x7F4321B4u: goto label_7F4321B4;
    case 0x7F4321B8u: goto label_7F4321B8;
    case 0x7F4321BCu: goto label_7F4321BC;
    case 0x7F4321C0u: goto label_7F4321C0;
    case 0x7F4321C4u: goto label_7F4321C4;
    case 0x7F4321C8u: goto label_7F4321C8;
    case 0x7F4321CCu: goto label_7F4321CC;
    case 0x7F4321D0u: goto label_7F4321D0;
    case 0x7F4321D4u: goto label_7F4321D4;
    case 0x7F4321D8u: goto label_7F4321D8;
    case 0x7F4321DCu: goto label_7F4321DC;
    case 0x7F4321E0u: goto label_7F4321E0;
    case 0x7F4321E4u: goto label_7F4321E4;
    case 0x7F4321E8u: goto label_7F4321E8;
    case 0x7F4321ECu: goto label_7F4321EC;
    case 0x7F4321F0u: goto label_7F4321F0;
    case 0x7F4321F4u: goto label_7F4321F4;
    case 0x7F4321F8u: goto label_7F4321F8;
    case 0x7F4321FCu: goto label_7F4321FC;
    case 0x7F432200u: goto label_7F432200;
    case 0x7F432204u: goto label_7F432204;
    case 0x7F432208u: goto label_7F432208;
    case 0x7F43220Cu: goto label_7F43220C;
    case 0x7F432210u: goto label_7F432210;
    case 0x7F432214u: goto label_7F432214;
    case 0x7F432218u: goto label_7F432218;
    case 0x7F43221Cu: goto label_7F43221C;
    case 0x7F432220u: goto label_7F432220;
    case 0x7F432224u: goto label_7F432224;
    case 0x7F432228u: goto label_7F432228;
    case 0x7F43222Cu: goto label_7F43222C;
    case 0x7F432230u: goto label_7F432230;
    case 0x7F432234u: goto label_7F432234;
    case 0x7F432238u: goto label_7F432238;
    case 0x7F43223Cu: goto label_7F43223C;
    case 0x7F432240u: goto label_7F432240;
    case 0x7F432244u: goto label_7F432244;
    case 0x7F432248u: goto label_7F432248;
    case 0x7F43224Cu: goto label_7F43224C;
    case 0x7F432250u: goto label_7F432250;
    case 0x7F432254u: goto label_7F432254;
    case 0x7F432258u: goto label_7F432258;
    case 0x7F43225Cu: goto label_7F43225C;
    case 0x7F432260u: goto label_7F432260;
    case 0x7F432264u: goto label_7F432264;
    case 0x7F432268u: goto label_7F432268;
    case 0x7F43226Cu: goto label_7F43226C;
    case 0x7F432270u: goto label_7F432270;
    case 0x7F432274u: goto label_7F432274;
    case 0x7F432278u: goto label_7F432278;
    case 0x7F43227Cu: goto label_7F43227C;
    case 0x7F432280u: goto label_7F432280;
    case 0x7F432284u: goto label_7F432284;
    case 0x7F432288u: goto label_7F432288;
    case 0x7F43228Cu: goto label_7F43228C;
    case 0x7F432290u: goto label_7F432290;
    case 0x7F432294u: goto label_7F432294;
    case 0x7F432298u: goto label_7F432298;
    case 0x7F43229Cu: goto label_7F43229C;
    case 0x7F4322A0u: goto label_7F4322A0;
    case 0x7F4322A4u: goto label_7F4322A4;
    case 0x7F4322A8u: goto label_7F4322A8;
    case 0x7F4322ACu: goto label_7F4322AC;
    case 0x7F4322B0u: goto label_7F4322B0;
    case 0x7F4322B4u: goto label_7F4322B4;
    case 0x7F4322B8u: goto label_7F4322B8;
    case 0x7F4322BCu: goto label_7F4322BC;
    case 0x7F4322C0u: goto label_7F4322C0;
    case 0x7F4322C4u: goto label_7F4322C4;
    case 0x7F4322C8u: goto label_7F4322C8;
    case 0x7F4322CCu: goto label_7F4322CC;
    case 0x7F4322D0u: goto label_7F4322D0;
    case 0x7F4322D4u: goto label_7F4322D4;
    case 0x7F4322D8u: goto label_7F4322D8;
    case 0x7F4322DCu: goto label_7F4322DC;
    case 0x7F4322E0u: goto label_7F4322E0;
    case 0x7F4322E4u: goto label_7F4322E4;
    case 0x7F4322E8u: goto label_7F4322E8;
    case 0x7F4322ECu: goto label_7F4322EC;
    case 0x7F4322F0u: goto label_7F4322F0;
    case 0x7F4322F4u: goto label_7F4322F4;
    case 0x7F4322F8u: goto label_7F4322F8;
    case 0x7F4322FCu: goto label_7F4322FC;
    case 0x7F432300u: goto label_7F432300;
    case 0x7F432304u: goto label_7F432304;
    case 0x7F432308u: goto label_7F432308;
    case 0x7F43230Cu: goto label_7F43230C;
    case 0x7F432310u: goto label_7F432310;
    case 0x7F432314u: goto label_7F432314;
    case 0x7F432318u: goto label_7F432318;
    case 0x7F43231Cu: goto label_7F43231C;
    case 0x7F432320u: goto label_7F432320;
    case 0x7F432324u: goto label_7F432324;
    case 0x7F432328u: goto label_7F432328;
    case 0x7F43232Cu: goto label_7F43232C;
    case 0x7F432330u: goto label_7F432330;
    case 0x7F432334u: goto label_7F432334;
    case 0x7F432338u: goto label_7F432338;
    case 0x7F43233Cu: goto label_7F43233C;
    case 0x7F432340u: goto label_7F432340;
    case 0x7F432344u: goto label_7F432344;
    case 0x7F432348u: goto label_7F432348;
    case 0x7F43234Cu: goto label_7F43234C;
    case 0x7F432350u: goto label_7F432350;
    case 0x7F432354u: goto label_7F432354;
    case 0x7F432358u: goto label_7F432358;
    case 0x7F43235Cu: goto label_7F43235C;
    case 0x7F432360u: goto label_7F432360;
    case 0x7F432364u: goto label_7F432364;
    case 0x7F432368u: goto label_7F432368;
    case 0x7F43236Cu: goto label_7F43236C;
    case 0x7F432370u: goto label_7F432370;
    case 0x7F432374u: goto label_7F432374;
    case 0x7F432378u: goto label_7F432378;
    case 0x7F43237Cu: goto label_7F43237C;
    case 0x7F432380u: goto label_7F432380;
    case 0x7F432384u: goto label_7F432384;
    case 0x7F432388u: goto label_7F432388;
    case 0x7F43238Cu: goto label_7F43238C;
    case 0x7F432390u: goto label_7F432390;
    case 0x7F432394u: goto label_7F432394;
    case 0x7F432398u: goto label_7F432398;
    case 0x7F43239Cu: goto label_7F43239C;
    case 0x7F4323A0u: goto label_7F4323A0;
    case 0x7F4323A4u: goto label_7F4323A4;
    case 0x7F4323A8u: goto label_7F4323A8;
    case 0x7F4323ACu: goto label_7F4323AC;
    case 0x7F4323B0u: goto label_7F4323B0;
    case 0x7F4323B4u: goto label_7F4323B4;
    case 0x7F4323B8u: goto label_7F4323B8;
    case 0x7F4323BCu: goto label_7F4323BC;
    case 0x7F4323C0u: goto label_7F4323C0;
    case 0x7F4323C4u: goto label_7F4323C4;
    case 0x7F4323C8u: goto label_7F4323C8;
    case 0x7F4323CCu: goto label_7F4323CC;
    case 0x7F4323D0u: goto label_7F4323D0;
    case 0x7F4323D4u: goto label_7F4323D4;
    case 0x7F4323D8u: goto label_7F4323D8;
    case 0x7F4323DCu: goto label_7F4323DC;
    case 0x7F4323E0u: goto label_7F4323E0;
    case 0x7F4323E4u: goto label_7F4323E4;
    case 0x7F4323E8u: goto label_7F4323E8;
    case 0x7F4323ECu: goto label_7F4323EC;
    case 0x7F4323F0u: goto label_7F4323F0;
    case 0x7F4323F4u: goto label_7F4323F4;
    case 0x7F4323F8u: goto label_7F4323F8;
    case 0x7F4323FCu: goto label_7F4323FC;
    case 0x7F432400u: goto label_7F432400;
    case 0x7F432404u: goto label_7F432404;
    case 0x7F432408u: goto label_7F432408;
    case 0x7F43240Cu: goto label_7F43240C;
    case 0x7F432410u: goto label_7F432410;
    case 0x7F432414u: goto label_7F432414;
    case 0x7F432418u: goto label_7F432418;
    case 0x7F43241Cu: goto label_7F43241C;
    case 0x7F432420u: goto label_7F432420;
    case 0x7F432424u: goto label_7F432424;
    case 0x7F432428u: goto label_7F432428;
    case 0x7F43242Cu: goto label_7F43242C;
    case 0x7F432430u: goto label_7F432430;
    case 0x7F432434u: goto label_7F432434;
    case 0x7F432438u: goto label_7F432438;
    case 0x7F43243Cu: goto label_7F43243C;
    case 0x7F432440u: goto label_7F432440;
    case 0x7F432444u: goto label_7F432444;
    case 0x7F432448u: goto label_7F432448;
    case 0x7F43244Cu: goto label_7F43244C;
    case 0x7F432450u: goto label_7F432450;
    case 0x7F432454u: goto label_7F432454;
    case 0x7F432458u: goto label_7F432458;
    case 0x7F43245Cu: goto label_7F43245C;
    case 0x7F432460u: goto label_7F432460;
    case 0x7F432464u: goto label_7F432464;
    case 0x7F432468u: goto label_7F432468;
    case 0x7F43246Cu: goto label_7F43246C;
    case 0x7F432470u: goto label_7F432470;
    case 0x7F432474u: goto label_7F432474;
    case 0x7F432478u: goto label_7F432478;
    case 0x7F43247Cu: goto label_7F43247C;
    case 0x7F432480u: goto label_7F432480;
    case 0x7F432484u: goto label_7F432484;
    case 0x7F432488u: goto label_7F432488;
    case 0x7F43248Cu: goto label_7F43248C;
    case 0x7F432490u: goto label_7F432490;
    case 0x7F432494u: goto label_7F432494;
    case 0x7F432498u: goto label_7F432498;
    case 0x7F43249Cu: goto label_7F43249C;
    case 0x7F4324A0u: goto label_7F4324A0;
    case 0x7F4324A4u: goto label_7F4324A4;
    case 0x7F4324A8u: goto label_7F4324A8;
    case 0x7F4324ACu: goto label_7F4324AC;
    case 0x7F4324B0u: goto label_7F4324B0;
    case 0x7F4324B4u: goto label_7F4324B4;
    case 0x7F4324B8u: goto label_7F4324B8;
    case 0x7F4324BCu: goto label_7F4324BC;
    case 0x7F4324C0u: goto label_7F4324C0;
    case 0x7F4324C4u: goto label_7F4324C4;
    case 0x7F4324C8u: goto label_7F4324C8;
    case 0x7F4324CCu: goto label_7F4324CC;
    case 0x7F4324D0u: goto label_7F4324D0;
    case 0x7F4324D4u: goto label_7F4324D4;
    case 0x7F4324D8u: goto label_7F4324D8;
    case 0x7F4324DCu: goto label_7F4324DC;
    case 0x7F4324E0u: goto label_7F4324E0;
    case 0x7F4324E4u: goto label_7F4324E4;
    case 0x7F4324E8u: goto label_7F4324E8;
    case 0x7F4324ECu: goto label_7F4324EC;
    case 0x7F4324F0u: goto label_7F4324F0;
    case 0x7F4324F4u: goto label_7F4324F4;
    case 0x7F4324F8u: goto label_7F4324F8;
    case 0x7F4324FCu: goto label_7F4324FC;
    case 0x7F432500u: goto label_7F432500;
    case 0x7F432504u: goto label_7F432504;
    case 0x7F432508u: goto label_7F432508;
    case 0x7F43250Cu: goto label_7F43250C;
    case 0x7F432510u: goto label_7F432510;
    case 0x7F432514u: goto label_7F432514;
    case 0x7F432518u: goto label_7F432518;
    case 0x7F43251Cu: goto label_7F43251C;
    case 0x7F432520u: goto label_7F432520;
    case 0x7F432524u: goto label_7F432524;
    case 0x7F432528u: goto label_7F432528;
    case 0x7F43252Cu: goto label_7F43252C;
    case 0x7F432530u: goto label_7F432530;
    case 0x7F432534u: goto label_7F432534;
    case 0x7F432538u: goto label_7F432538;
    case 0x7F43253Cu: goto label_7F43253C;
    case 0x7F432540u: goto label_7F432540;
    case 0x7F432544u: goto label_7F432544;
    case 0x7F432548u: goto label_7F432548;
    case 0x7F43254Cu: goto label_7F43254C;
    case 0x7F432550u: goto label_7F432550;
    case 0x7F432554u: goto label_7F432554;
    case 0x7F432558u: goto label_7F432558;
    case 0x7F43255Cu: goto label_7F43255C;
    case 0x7F432560u: goto label_7F432560;
    case 0x7F432564u: goto label_7F432564;
    case 0x7F432568u: goto label_7F432568;
    case 0x7F43256Cu: goto label_7F43256C;
    case 0x7F432570u: goto label_7F432570;
    case 0x7F432574u: goto label_7F432574;
    case 0x7F432578u: goto label_7F432578;
    case 0x7F43257Cu: goto label_7F43257C;
    case 0x7F432580u: goto label_7F432580;
    case 0x7F432584u: goto label_7F432584;
    case 0x7F432588u: goto label_7F432588;
    case 0x7F43258Cu: goto label_7F43258C;
    case 0x7F432590u: goto label_7F432590;
    case 0x7F432594u: goto label_7F432594;
    case 0x7F432598u: goto label_7F432598;
    case 0x7F43259Cu: goto label_7F43259C;
    case 0x7F4325A0u: goto label_7F4325A0;
    case 0x7F4325A4u: goto label_7F4325A4;
    case 0x7F4325A8u: goto label_7F4325A8;
    case 0x7F4325ACu: goto label_7F4325AC;
    case 0x7F4325B0u: goto label_7F4325B0;
    case 0x7F4325B4u: goto label_7F4325B4;
    case 0x7F4325B8u: goto label_7F4325B8;
    case 0x7F4325BCu: goto label_7F4325BC;
    case 0x7F4325C0u: goto label_7F4325C0;
    case 0x7F4325C4u: goto label_7F4325C4;
    case 0x7F4325C8u: goto label_7F4325C8;
    case 0x7F4325CCu: goto label_7F4325CC;
    case 0x7F4325D0u: goto label_7F4325D0;
    case 0x7F4325D4u: goto label_7F4325D4;
    case 0x7F4325D8u: goto label_7F4325D8;
    case 0x7F4325DCu: goto label_7F4325DC;
    case 0x7F4325E0u: goto label_7F4325E0;
    case 0x7F4325E4u: goto label_7F4325E4;
    case 0x7F4325E8u: goto label_7F4325E8;
    case 0x7F4325ECu: goto label_7F4325EC;
    case 0x7F4325F0u: goto label_7F4325F0;
    case 0x7F4325F4u: goto label_7F4325F4;
    case 0x7F4325F8u: goto label_7F4325F8;
    case 0x7F4325FCu: goto label_7F4325FC;
    case 0x7F432600u: goto label_7F432600;
    case 0x7F432604u: goto label_7F432604;
    case 0x7F432608u: goto label_7F432608;
    case 0x7F43260Cu: goto label_7F43260C;
    case 0x7F432610u: goto label_7F432610;
    case 0x7F432614u: goto label_7F432614;
    case 0x7F432618u: goto label_7F432618;
    case 0x7F43261Cu: goto label_7F43261C;
    case 0x7F432620u: goto label_7F432620;
    case 0x7F432624u: goto label_7F432624;
    case 0x7F432628u: goto label_7F432628;
    case 0x7F43262Cu: goto label_7F43262C;
    case 0x7F432630u: goto label_7F432630;
    case 0x7F432634u: goto label_7F432634;
    case 0x7F432638u: goto label_7F432638;
    case 0x7F43263Cu: goto label_7F43263C;
    case 0x7F432640u: goto label_7F432640;
    case 0x7F432644u: goto label_7F432644;
    case 0x7F432648u: goto label_7F432648;
    case 0x7F43264Cu: goto label_7F43264C;
    case 0x7F432650u: goto label_7F432650;
    case 0x7F432654u: goto label_7F432654;
    case 0x7F432658u: goto label_7F432658;
    case 0x7F43265Cu: goto label_7F43265C;
    case 0x7F432660u: goto label_7F432660;
    case 0x7F432664u: goto label_7F432664;
    case 0x7F432668u: goto label_7F432668;
    case 0x7F43266Cu: goto label_7F43266C;
    case 0x7F432670u: goto label_7F432670;
    case 0x7F432674u: goto label_7F432674;
    case 0x7F432678u: goto label_7F432678;
    case 0x7F43267Cu: goto label_7F43267C;
    case 0x7F432680u: goto label_7F432680;
    case 0x7F432684u: goto label_7F432684;
    case 0x7F432688u: goto label_7F432688;
    case 0x7F43268Cu: goto label_7F43268C;
    case 0x7F432690u: goto label_7F432690;
    case 0x7F432694u: goto label_7F432694;
    case 0x7F432698u: goto label_7F432698;
    case 0x7F43269Cu: goto label_7F43269C;
    case 0x7F4326A0u: goto label_7F4326A0;
    case 0x7F4326A4u: goto label_7F4326A4;
    case 0x7F4326A8u: goto label_7F4326A8;
    case 0x7F4326ACu: goto label_7F4326AC;
    case 0x7F4326B0u: goto label_7F4326B0;
    case 0x7F4326B4u: goto label_7F4326B4;
    case 0x7F4326B8u: goto label_7F4326B8;
    case 0x7F4326BCu: goto label_7F4326BC;
    case 0x7F4326C0u: goto label_7F4326C0;
    case 0x7F4326C4u: goto label_7F4326C4;
    case 0x7F4326C8u: goto label_7F4326C8;
    case 0x7F4326CCu: goto label_7F4326CC;
    case 0x7F4326D0u: goto label_7F4326D0;
    case 0x7F4326D4u: goto label_7F4326D4;
    case 0x7F4326D8u: goto label_7F4326D8;
    case 0x7F4326DCu: goto label_7F4326DC;
    case 0x7F4326E0u: goto label_7F4326E0;
    case 0x7F4326E4u: goto label_7F4326E4;
    case 0x7F4326E8u: goto label_7F4326E8;
    case 0x7F4326ECu: goto label_7F4326EC;
    case 0x7F4326F0u: goto label_7F4326F0;
    case 0x7F4326F4u: goto label_7F4326F4;
    case 0x7F4326F8u: goto label_7F4326F8;
    case 0x7F4326FCu: goto label_7F4326FC;
    case 0x7F432700u: goto label_7F432700;
    case 0x7F432704u: goto label_7F432704;
    case 0x7F432708u: goto label_7F432708;
    case 0x7F43270Cu: goto label_7F43270C;
    case 0x7F432710u: goto label_7F432710;
    case 0x7F432714u: goto label_7F432714;
    case 0x7F432718u: goto label_7F432718;
    case 0x7F43271Cu: goto label_7F43271C;
    case 0x7F432720u: goto label_7F432720;
    case 0x7F432724u: goto label_7F432724;
    case 0x7F432728u: goto label_7F432728;
    case 0x7F43272Cu: goto label_7F43272C;
    case 0x7F432730u: goto label_7F432730;
    case 0x7F432734u: goto label_7F432734;
    case 0x7F432738u: goto label_7F432738;
    case 0x7F43273Cu: goto label_7F43273C;
    case 0x7F432740u: goto label_7F432740;
    case 0x7F432744u: goto label_7F432744;
    case 0x7F432748u: goto label_7F432748;
    case 0x7F43274Cu: goto label_7F43274C;
    case 0x7F432750u: goto label_7F432750;
    case 0x7F432754u: goto label_7F432754;
    case 0x7F432758u: goto label_7F432758;
    case 0x7F43275Cu: goto label_7F43275C;
    case 0x7F432760u: goto label_7F432760;
    case 0x7F432764u: goto label_7F432764;
    case 0x7F432768u: goto label_7F432768;
    case 0x7F43276Cu: goto label_7F43276C;
    case 0x7F432770u: goto label_7F432770;
    case 0x7F432774u: goto label_7F432774;
    case 0x7F432778u: goto label_7F432778;
    case 0x7F43277Cu: goto label_7F43277C;
    case 0x7F432780u: goto label_7F432780;
    case 0x7F432784u: goto label_7F432784;
    case 0x7F432788u: goto label_7F432788;
    case 0x7F43278Cu: goto label_7F43278C;
    case 0x7F432790u: goto label_7F432790;
    case 0x7F432794u: goto label_7F432794;
    case 0x7F432798u: goto label_7F432798;
    case 0x7F43279Cu: goto label_7F43279C;
    case 0x7F4327A0u: goto label_7F4327A0;
    case 0x7F4327A4u: goto label_7F4327A4;
    case 0x7F4327A8u: goto label_7F4327A8;
    case 0x7F4327ACu: goto label_7F4327AC;
    case 0x7F4327B0u: goto label_7F4327B0;
    case 0x7F4327B4u: goto label_7F4327B4;
    case 0x7F4327B8u: goto label_7F4327B8;
    case 0x7F4327BCu: goto label_7F4327BC;
    case 0x7F4327C0u: goto label_7F4327C0;
    case 0x7F4327C4u: goto label_7F4327C4;
    case 0x7F4327C8u: goto label_7F4327C8;
    case 0x7F4327CCu: goto label_7F4327CC;
    case 0x7F4327D0u: goto label_7F4327D0;
    case 0x7F4327D4u: goto label_7F4327D4;
    case 0x7F4327D8u: goto label_7F4327D8;
    case 0x7F4327DCu: goto label_7F4327DC;
    case 0x7F4327E0u: goto label_7F4327E0;
    case 0x7F4327E4u: goto label_7F4327E4;
    case 0x7F4327E8u: goto label_7F4327E8;
    case 0x7F4327ECu: goto label_7F4327EC;
    case 0x7F4327F0u: goto label_7F4327F0;
    case 0x7F4327F4u: goto label_7F4327F4;
    case 0x7F4327F8u: goto label_7F4327F8;
    case 0x7F4327FCu: goto label_7F4327FC;
    case 0x7F432800u: goto label_7F432800;
    case 0x7F432804u: goto label_7F432804;
    case 0x7F432808u: goto label_7F432808;
    case 0x7F43280Cu: goto label_7F43280C;
    case 0x7F432810u: goto label_7F432810;
    case 0x7F432814u: goto label_7F432814;
    case 0x7F432818u: goto label_7F432818;
    case 0x7F43281Cu: goto label_7F43281C;
    case 0x7F432820u: goto label_7F432820;
    case 0x7F432824u: goto label_7F432824;
    case 0x7F432828u: goto label_7F432828;
    case 0x7F43282Cu: goto label_7F43282C;
    case 0x7F432830u: goto label_7F432830;
    case 0x7F432834u: goto label_7F432834;
    case 0x7F432838u: goto label_7F432838;
    case 0x7F43283Cu: goto label_7F43283C;
    case 0x7F432840u: goto label_7F432840;
    case 0x7F432844u: goto label_7F432844;
    case 0x7F432848u: goto label_7F432848;
    case 0x7F43284Cu: goto label_7F43284C;
    case 0x7F432850u: goto label_7F432850;
    case 0x7F432854u: goto label_7F432854;
    case 0x7F432858u: goto label_7F432858;
    case 0x7F43285Cu: goto label_7F43285C;
    case 0x7F432860u: goto label_7F432860;
    case 0x7F432864u: goto label_7F432864;
    case 0x7F432868u: goto label_7F432868;
    case 0x7F43286Cu: goto label_7F43286C;
    case 0x7F432870u: goto label_7F432870;
    case 0x7F432874u: goto label_7F432874;
    case 0x7F432878u: goto label_7F432878;
    case 0x7F43287Cu: goto label_7F43287C;
    case 0x7F432880u: goto label_7F432880;
    case 0x7F432884u: goto label_7F432884;
    case 0x7F432888u: goto label_7F432888;
    case 0x7F43288Cu: goto label_7F43288C;
    case 0x7F432890u: goto label_7F432890;
    case 0x7F432894u: goto label_7F432894;
    case 0x7F432898u: goto label_7F432898;
    case 0x7F43289Cu: goto label_7F43289C;
    case 0x7F4328A0u: goto label_7F4328A0;
    case 0x7F4328A4u: goto label_7F4328A4;
    case 0x7F4328A8u: goto label_7F4328A8;
    case 0x7F4328ACu: goto label_7F4328AC;
    case 0x7F4328B0u: goto label_7F4328B0;
    case 0x7F4328B4u: goto label_7F4328B4;
    case 0x7F4328B8u: goto label_7F4328B8;
    case 0x7F4328BCu: goto label_7F4328BC;
    case 0x7F4328C0u: goto label_7F4328C0;
    case 0x7F4328C4u: goto label_7F4328C4;
    case 0x7F4328C8u: goto label_7F4328C8;
    case 0x7F4328CCu: goto label_7F4328CC;
    case 0x7F4328D0u: goto label_7F4328D0;
    case 0x7F4328D4u: goto label_7F4328D4;
    case 0x7F4328D8u: goto label_7F4328D8;
    case 0x7F4328DCu: goto label_7F4328DC;
    case 0x7F4328E0u: goto label_7F4328E0;
    case 0x7F4328E4u: goto label_7F4328E4;
    case 0x7F4328E8u: goto label_7F4328E8;
    case 0x7F4328ECu: goto label_7F4328EC;
    case 0x7F4328F0u: goto label_7F4328F0;
    case 0x7F4328F4u: goto label_7F4328F4;
    case 0x7F4328F8u: goto label_7F4328F8;
    case 0x7F4328FCu: goto label_7F4328FC;
    case 0x7F432900u: goto label_7F432900;
    case 0x7F432904u: goto label_7F432904;
    case 0x7F432908u: goto label_7F432908;
    case 0x7F43290Cu: goto label_7F43290C;
    case 0x7F432910u: goto label_7F432910;
    case 0x7F432914u: goto label_7F432914;
    case 0x7F432918u: goto label_7F432918;
    case 0x7F43291Cu: goto label_7F43291C;
    case 0x7F432920u: goto label_7F432920;
    case 0x7F432924u: goto label_7F432924;
    case 0x7F432928u: goto label_7F432928;
    case 0x7F43292Cu: goto label_7F43292C;
    case 0x7F432930u: goto label_7F432930;
    case 0x7F432934u: goto label_7F432934;
    case 0x7F432938u: goto label_7F432938;
    case 0x7F43293Cu: goto label_7F43293C;
    case 0x7F432940u: goto label_7F432940;
    case 0x7F432944u: goto label_7F432944;
    case 0x7F432948u: goto label_7F432948;
    case 0x7F43294Cu: goto label_7F43294C;
    case 0x7F432950u: goto label_7F432950;
    case 0x7F432954u: goto label_7F432954;
    case 0x7F432958u: goto label_7F432958;
    case 0x7F43295Cu: goto label_7F43295C;
    case 0x7F432960u: goto label_7F432960;
    case 0x7F432964u: goto label_7F432964;
    case 0x7F432968u: goto label_7F432968;
    case 0x7F43296Cu: goto label_7F43296C;
    case 0x7F432970u: goto label_7F432970;
    case 0x7F432974u: goto label_7F432974;
    case 0x7F432978u: goto label_7F432978;
    case 0x7F43297Cu: goto label_7F43297C;
    case 0x7F432980u: goto label_7F432980;
    case 0x7F432984u: goto label_7F432984;
    case 0x7F432988u: goto label_7F432988;
    case 0x7F43298Cu: goto label_7F43298C;
    case 0x7F432990u: goto label_7F432990;
    case 0x7F432994u: goto label_7F432994;
    case 0x7F432998u: goto label_7F432998;
    case 0x7F43299Cu: goto label_7F43299C;
    case 0x7F4329A0u: goto label_7F4329A0;
    case 0x7F4329A4u: goto label_7F4329A4;
    case 0x7F4329A8u: goto label_7F4329A8;
    case 0x7F4329ACu: goto label_7F4329AC;
    case 0x7F4329B0u: goto label_7F4329B0;
    case 0x7F4329B4u: goto label_7F4329B4;
    case 0x7F4329B8u: goto label_7F4329B8;
    case 0x7F4329BCu: goto label_7F4329BC;
    case 0x7F4329C0u: goto label_7F4329C0;
    case 0x7F4329C4u: goto label_7F4329C4;
    case 0x7F4329C8u: goto label_7F4329C8;
    case 0x7F4329CCu: goto label_7F4329CC;
    case 0x7F4329D0u: goto label_7F4329D0;
    case 0x7F4329D4u: goto label_7F4329D4;
    case 0x7F4329D8u: goto label_7F4329D8;
    case 0x7F4329DCu: goto label_7F4329DC;
    case 0x7F4329E0u: goto label_7F4329E0;
    case 0x7F4329E4u: goto label_7F4329E4;
    case 0x7F4329E8u: goto label_7F4329E8;
    case 0x7F4329ECu: goto label_7F4329EC;
    case 0x7F4329F0u: goto label_7F4329F0;
    case 0x7F4329F4u: goto label_7F4329F4;
    case 0x7F4329F8u: goto label_7F4329F8;
    case 0x7F4329FCu: goto label_7F4329FC;
    case 0x7F432A00u: goto label_7F432A00;
    case 0x7F432A04u: goto label_7F432A04;
    case 0x7F432A08u: goto label_7F432A08;
    case 0x7F432A0Cu: goto label_7F432A0C;
    case 0x7F432A10u: goto label_7F432A10;
    case 0x7F432A14u: goto label_7F432A14;
    case 0x7F432A18u: goto label_7F432A18;
    case 0x7F432A1Cu: goto label_7F432A1C;
    case 0x7F432A20u: goto label_7F432A20;
    case 0x7F432A24u: goto label_7F432A24;
    case 0x7F432A28u: goto label_7F432A28;
    case 0x7F432A2Cu: goto label_7F432A2C;
    case 0x7F432A30u: goto label_7F432A30;
    case 0x7F432A34u: goto label_7F432A34;
    case 0x7F432A38u: goto label_7F432A38;
    case 0x7F432A3Cu: goto label_7F432A3C;
    case 0x7F432A40u: goto label_7F432A40;
    case 0x7F432A44u: goto label_7F432A44;
    case 0x7F432A48u: goto label_7F432A48;
    case 0x7F432A4Cu: goto label_7F432A4C;
    case 0x7F432A50u: goto label_7F432A50;
    case 0x7F432A54u: goto label_7F432A54;
    case 0x7F432A58u: goto label_7F432A58;
    case 0x7F432A5Cu: goto label_7F432A5C;
    case 0x7F432A60u: goto label_7F432A60;
    case 0x7F432A64u: goto label_7F432A64;
    case 0x7F432A68u: goto label_7F432A68;
    case 0x7F432A6Cu: goto label_7F432A6C;
    case 0x7F432A70u: goto label_7F432A70;
    case 0x7F432A74u: goto label_7F432A74;
    case 0x7F432A78u: goto label_7F432A78;
    case 0x7F432A7Cu: goto label_7F432A7C;
    case 0x7F432A80u: goto label_7F432A80;
    case 0x7F432A84u: goto label_7F432A84;
    case 0x7F432A88u: goto label_7F432A88;
    case 0x7F432A8Cu: goto label_7F432A8C;
    case 0x7F432A90u: goto label_7F432A90;
    case 0x7F432A94u: goto label_7F432A94;
    case 0x7F432A98u: goto label_7F432A98;
    case 0x7F432A9Cu: goto label_7F432A9C;
    case 0x7F432AA0u: goto label_7F432AA0;
    case 0x7F432AA4u: goto label_7F432AA4;
    case 0x7F432AA8u: goto label_7F432AA8;
    case 0x7F432AACu: goto label_7F432AAC;
    case 0x7F432AB0u: goto label_7F432AB0;
    case 0x7F432AB4u: goto label_7F432AB4;
    case 0x7F432AB8u: goto label_7F432AB8;
    case 0x7F432ABCu: goto label_7F432ABC;
    case 0x7F432AC0u: goto label_7F432AC0;
    case 0x7F432AC4u: goto label_7F432AC4;
    case 0x7F432AC8u: goto label_7F432AC8;
    case 0x7F432ACCu: goto label_7F432ACC;
    case 0x7F432AD0u: goto label_7F432AD0;
    case 0x7F432AD4u: goto label_7F432AD4;
    case 0x7F432AD8u: goto label_7F432AD8;
    case 0x7F432ADCu: goto label_7F432ADC;
    case 0x7F432AE0u: goto label_7F432AE0;
    case 0x7F432AE4u: goto label_7F432AE4;
    case 0x7F432AE8u: goto label_7F432AE8;
    case 0x7F432AECu: goto label_7F432AEC;
    case 0x7F432AF0u: goto label_7F432AF0;
    case 0x7F432AF4u: goto label_7F432AF4;
    case 0x7F432AF8u: goto label_7F432AF8;
    case 0x7F432AFCu: goto label_7F432AFC;
    case 0x7F432B00u: goto label_7F432B00;
    case 0x7F432B04u: goto label_7F432B04;
    case 0x7F432B08u: goto label_7F432B08;
    case 0x7F432B0Cu: goto label_7F432B0C;
    case 0x7F432B10u: goto label_7F432B10;
    case 0x7F432B14u: goto label_7F432B14;
    case 0x7F432B18u: goto label_7F432B18;
    case 0x7F432B1Cu: goto label_7F432B1C;
    case 0x7F432B20u: goto label_7F432B20;
    case 0x7F432B24u: goto label_7F432B24;
    case 0x7F432B28u: goto label_7F432B28;
    case 0x7F432B2Cu: goto label_7F432B2C;
    case 0x7F432B30u: goto label_7F432B30;
    case 0x7F432B34u: goto label_7F432B34;
    case 0x7F432B38u: goto label_7F432B38;
    case 0x7F432B3Cu: goto label_7F432B3C;
    case 0x7F432B40u: goto label_7F432B40;
    case 0x7F432B44u: goto label_7F432B44;
    case 0x7F432B48u: goto label_7F432B48;
    case 0x7F432B4Cu: goto label_7F432B4C;
    case 0x7F432B50u: goto label_7F432B50;
    case 0x7F432B54u: goto label_7F432B54;
    case 0x7F432B58u: goto label_7F432B58;
    case 0x7F432B5Cu: goto label_7F432B5C;
    case 0x7F432B60u: goto label_7F432B60;
    case 0x7F432B64u: goto label_7F432B64;
    case 0x7F432B68u: goto label_7F432B68;
    case 0x7F432B6Cu: goto label_7F432B6C;
    case 0x7F432B70u: goto label_7F432B70;
    case 0x7F432B74u: goto label_7F432B74;
    case 0x7F432B78u: goto label_7F432B78;
    case 0x7F432B7Cu: goto label_7F432B7C;
    case 0x7F432B80u: goto label_7F432B80;
    case 0x7F432B84u: goto label_7F432B84;
    case 0x7F432B88u: goto label_7F432B88;
    case 0x7F432B8Cu: goto label_7F432B8C;
    case 0x7F432B90u: goto label_7F432B90;
    case 0x7F432B94u: goto label_7F432B94;
    case 0x7F432B98u: goto label_7F432B98;
    case 0x7F432B9Cu: goto label_7F432B9C;
    case 0x7F432BA0u: goto label_7F432BA0;
    case 0x7F432BA4u: goto label_7F432BA4;
    case 0x7F432BA8u: goto label_7F432BA8;
    case 0x7F432BACu: goto label_7F432BAC;
    case 0x7F432BB0u: goto label_7F432BB0;
    case 0x7F432BB4u: goto label_7F432BB4;
    case 0x7F432BB8u: goto label_7F432BB8;
    case 0x7F432BBCu: goto label_7F432BBC;
    case 0x7F432BC0u: goto label_7F432BC0;
    case 0x7F432BC4u: goto label_7F432BC4;
    case 0x7F432BC8u: goto label_7F432BC8;
    case 0x7F432BCCu: goto label_7F432BCC;
    case 0x7F432BD0u: goto label_7F432BD0;
    case 0x7F432BD4u: goto label_7F432BD4;
    case 0x7F432BD8u: goto label_7F432BD8;
    case 0x7F432BDCu: goto label_7F432BDC;
    case 0x7F432BE0u: goto label_7F432BE0;
    case 0x7F432BE4u: goto label_7F432BE4;
    case 0x7F432BE8u: goto label_7F432BE8;
    case 0x7F432BECu: goto label_7F432BEC;
    case 0x7F432BF0u: goto label_7F432BF0;
    case 0x7F432BF4u: goto label_7F432BF4;
    case 0x7F432BF8u: goto label_7F432BF8;
    case 0x7F432BFCu: goto label_7F432BFC;
    case 0x7F432C00u: goto label_7F432C00;
    case 0x7F432C04u: goto label_7F432C04;
    case 0x7F432C08u: goto label_7F432C08;
    case 0x7F432C0Cu: goto label_7F432C0C;
    case 0x7F432C10u: goto label_7F432C10;
    case 0x7F432C14u: goto label_7F432C14;
    case 0x7F432C18u: goto label_7F432C18;
    case 0x7F432C1Cu: goto label_7F432C1C;
    case 0x7F432C20u: goto label_7F432C20;
    case 0x7F432C24u: goto label_7F432C24;
    case 0x7F432C28u: goto label_7F432C28;
    case 0x7F432C2Cu: goto label_7F432C2C;
    case 0x7F432C30u: goto label_7F432C30;
    case 0x7F432C34u: goto label_7F432C34;
    case 0x7F432C38u: goto label_7F432C38;
    case 0x7F432C3Cu: goto label_7F432C3C;
    case 0x7F432C40u: goto label_7F432C40;
    case 0x7F432C44u: goto label_7F432C44;
    case 0x7F432C48u: goto label_7F432C48;
    case 0x7F432C4Cu: goto label_7F432C4C;
    case 0x7F432C50u: goto label_7F432C50;
    case 0x7F432C54u: goto label_7F432C54;
    case 0x7F432C58u: goto label_7F432C58;
    case 0x7F432C5Cu: goto label_7F432C5C;
    case 0x7F432C60u: goto label_7F432C60;
    case 0x7F432C64u: goto label_7F432C64;
    case 0x7F432C68u: goto label_7F432C68;
    case 0x7F432C6Cu: goto label_7F432C6C;
    case 0x7F432C70u: goto label_7F432C70;
    case 0x7F432C74u: goto label_7F432C74;
    case 0x7F432C78u: goto label_7F432C78;
    case 0x7F432C7Cu: goto label_7F432C7C;
    case 0x7F432C80u: goto label_7F432C80;
    case 0x7F432C84u: goto label_7F432C84;
    case 0x7F432C88u: goto label_7F432C88;
    case 0x7F432C8Cu: goto label_7F432C8C;
    case 0x7F432C90u: goto label_7F432C90;
    case 0x7F432C94u: goto label_7F432C94;
    case 0x7F432C98u: goto label_7F432C98;
    case 0x7F432C9Cu: goto label_7F432C9C;
    case 0x7F432CA0u: goto label_7F432CA0;
    case 0x7F432CA4u: goto label_7F432CA4;
    case 0x7F432CA8u: goto label_7F432CA8;
    case 0x7F432CACu: goto label_7F432CAC;
    case 0x7F432CB0u: goto label_7F432CB0;
    case 0x7F432CB4u: goto label_7F432CB4;
    case 0x7F432CB8u: goto label_7F432CB8;
    case 0x7F432CBCu: goto label_7F432CBC;
    case 0x7F432CC0u: goto label_7F432CC0;
    case 0x7F432CC4u: goto label_7F432CC4;
    case 0x7F432CC8u: goto label_7F432CC8;
    case 0x7F432CCCu: goto label_7F432CCC;
    case 0x7F432CD0u: goto label_7F432CD0;
    case 0x7F432CD4u: goto label_7F432CD4;
    case 0x7F432CD8u: goto label_7F432CD8;
    case 0x7F432CDCu: goto label_7F432CDC;
    case 0x7F432CE0u: goto label_7F432CE0;
    case 0x7F432CE4u: goto label_7F432CE4;
    case 0x7F432CE8u: goto label_7F432CE8;
    case 0x7F432CECu: goto label_7F432CEC;
    case 0x7F432CF0u: goto label_7F432CF0;
    case 0x7F432CF4u: goto label_7F432CF4;
    case 0x7F432CF8u: goto label_7F432CF8;
    case 0x7F432CFCu: goto label_7F432CFC;
    case 0x7F432D00u: goto label_7F432D00;
    case 0x7F432D04u: goto label_7F432D04;
    case 0x7F432D08u: goto label_7F432D08;
    case 0x7F432D0Cu: goto label_7F432D0C;
    case 0x7F432D10u: goto label_7F432D10;
    case 0x7F432D14u: goto label_7F432D14;
    case 0x7F432D18u: goto label_7F432D18;
    case 0x7F432D1Cu: goto label_7F432D1C;
    case 0x7F432D20u: goto label_7F432D20;
    case 0x7F432D24u: goto label_7F432D24;
    case 0x7F432D28u: goto label_7F432D28;
    case 0x7F432D2Cu: goto label_7F432D2C;
    case 0x7F432D30u: goto label_7F432D30;
    case 0x7F432D34u: goto label_7F432D34;
    case 0x7F432D38u: goto label_7F432D38;
    case 0x7F432D3Cu: goto label_7F432D3C;
    case 0x7F432D40u: goto label_7F432D40;
    case 0x7F432D44u: goto label_7F432D44;
    case 0x7F432D48u: goto label_7F432D48;
    case 0x7F432D4Cu: goto label_7F432D4C;
    case 0x7F432D50u: goto label_7F432D50;
    case 0x7F432D54u: goto label_7F432D54;
    case 0x7F432D58u: goto label_7F432D58;
    case 0x7F432D5Cu: goto label_7F432D5C;
    case 0x7F432D60u: goto label_7F432D60;
    case 0x7F432D64u: goto label_7F432D64;
    case 0x7F432D68u: goto label_7F432D68;
    case 0x7F432D6Cu: goto label_7F432D6C;
    case 0x7F432D70u: goto label_7F432D70;
    case 0x7F432D74u: goto label_7F432D74;
    case 0x7F432D78u: goto label_7F432D78;
    case 0x7F432D7Cu: goto label_7F432D7C;
    case 0x7F432D80u: goto label_7F432D80;
    case 0x7F432D84u: goto label_7F432D84;
    case 0x7F432D88u: goto label_7F432D88;
    case 0x7F432D8Cu: goto label_7F432D8C;
    case 0x7F432D90u: goto label_7F432D90;
    case 0x7F432D94u: goto label_7F432D94;
    case 0x7F432D98u: goto label_7F432D98;
    case 0x7F432D9Cu: goto label_7F432D9C;
    case 0x7F432DA0u: goto label_7F432DA0;
    case 0x7F432DA4u: goto label_7F432DA4;
    case 0x7F432DA8u: goto label_7F432DA8;
    case 0x7F432DACu: goto label_7F432DAC;
    case 0x7F432DB0u: goto label_7F432DB0;
    case 0x7F432DB4u: goto label_7F432DB4;
    case 0x7F432DB8u: goto label_7F432DB8;
    case 0x7F432DBCu: goto label_7F432DBC;
    case 0x7F432DC0u: goto label_7F432DC0;
    case 0x7F432DC4u: goto label_7F432DC4;
    case 0x7F432DC8u: goto label_7F432DC8;
    case 0x7F432DCCu: goto label_7F432DCC;
    case 0x7F432DD0u: goto label_7F432DD0;
    case 0x7F432DD4u: goto label_7F432DD4;
    case 0x7F432DD8u: goto label_7F432DD8;
    case 0x7F432DDCu: goto label_7F432DDC;
    case 0x7F432DE0u: goto label_7F432DE0;
    case 0x7F432DE4u: goto label_7F432DE4;
    case 0x7F432DE8u: goto label_7F432DE8;
    case 0x7F432DECu: goto label_7F432DEC;
    case 0x7F432DF0u: goto label_7F432DF0;
    case 0x7F432DF4u: goto label_7F432DF4;
    case 0x7F432DF8u: goto label_7F432DF8;
    case 0x7F432DFCu: goto label_7F432DFC;
    case 0x7F432E00u: goto label_7F432E00;
    case 0x7F432E04u: goto label_7F432E04;
    case 0x7F432E08u: goto label_7F432E08;
    case 0x7F432E0Cu: goto label_7F432E0C;
    case 0x7F432E10u: goto label_7F432E10;
    case 0x7F432E14u: goto label_7F432E14;
    case 0x7F432E18u: goto label_7F432E18;
    case 0x7F432E1Cu: goto label_7F432E1C;
    case 0x7F432E20u: goto label_7F432E20;
    case 0x7F432E24u: goto label_7F432E24;
    case 0x7F432E28u: goto label_7F432E28;
    case 0x7F432E2Cu: goto label_7F432E2C;
    case 0x7F432E30u: goto label_7F432E30;
    case 0x7F432E34u: goto label_7F432E34;
    case 0x7F432E38u: goto label_7F432E38;
    case 0x7F432E3Cu: goto label_7F432E3C;
    case 0x7F432E40u: goto label_7F432E40;
    case 0x7F432E44u: goto label_7F432E44;
    case 0x7F432E48u: goto label_7F432E48;
    case 0x7F432E4Cu: goto label_7F432E4C;
    case 0x7F432E50u: goto label_7F432E50;
    case 0x7F432E54u: goto label_7F432E54;
    case 0x7F432E58u: goto label_7F432E58;
    case 0x7F432E5Cu: goto label_7F432E5C;
    case 0x7F432E60u: goto label_7F432E60;
    case 0x7F432E64u: goto label_7F432E64;
    case 0x7F432E68u: goto label_7F432E68;
    case 0x7F432E6Cu: goto label_7F432E6C;
    case 0x7F432E70u: goto label_7F432E70;
    case 0x7F432E74u: goto label_7F432E74;
    case 0x7F432E78u: goto label_7F432E78;
    case 0x7F432E7Cu: goto label_7F432E7C;
    case 0x7F432E80u: goto label_7F432E80;
    case 0x7F432E84u: goto label_7F432E84;
    case 0x7F432E88u: goto label_7F432E88;
    case 0x7F432E8Cu: goto label_7F432E8C;
    case 0x7F432E90u: goto label_7F432E90;
    case 0x7F432E94u: goto label_7F432E94;
    case 0x7F432E98u: goto label_7F432E98;
    case 0x7F432E9Cu: goto label_7F432E9C;
    case 0x7F432EA0u: goto label_7F432EA0;
    case 0x7F432EA4u: goto label_7F432EA4;
    case 0x7F432EA8u: goto label_7F432EA8;
    case 0x7F432EACu: goto label_7F432EAC;
    case 0x7F432EB0u: goto label_7F432EB0;
    case 0x7F432EB4u: goto label_7F432EB4;
    case 0x7F432EB8u: goto label_7F432EB8;
    case 0x7F432EBCu: goto label_7F432EBC;
    case 0x7F432EC0u: goto label_7F432EC0;
    case 0x7F432EC4u: goto label_7F432EC4;
    case 0x7F432EC8u: goto label_7F432EC8;
    case 0x7F432ECCu: goto label_7F432ECC;
    case 0x7F432ED0u: goto label_7F432ED0;
    case 0x7F432ED4u: goto label_7F432ED4;
    case 0x7F432ED8u: goto label_7F432ED8;
    case 0x7F432EDCu: goto label_7F432EDC;
    case 0x7F432EE0u: goto label_7F432EE0;
    case 0x7F432EE4u: goto label_7F432EE4;
    case 0x7F432EE8u: goto label_7F432EE8;
    case 0x7F432EECu: goto label_7F432EEC;
    case 0x7F432EF0u: goto label_7F432EF0;
    case 0x7F432EF4u: goto label_7F432EF4;
    case 0x7F432EF8u: goto label_7F432EF8;
    case 0x7F432EFCu: goto label_7F432EFC;
    case 0x7F432F00u: goto label_7F432F00;
    case 0x7F432F04u: goto label_7F432F04;
    case 0x7F432F08u: goto label_7F432F08;
    case 0x7F432F0Cu: goto label_7F432F0C;
    case 0x7F432F10u: goto label_7F432F10;
    case 0x7F432F14u: goto label_7F432F14;
    case 0x7F432F18u: goto label_7F432F18;
    case 0x7F432F1Cu: goto label_7F432F1C;
    case 0x7F432F20u: goto label_7F432F20;
    case 0x7F432F24u: goto label_7F432F24;
    case 0x7F432F28u: goto label_7F432F28;
    case 0x7F432F2Cu: goto label_7F432F2C;
    case 0x7F432F30u: goto label_7F432F30;
    case 0x7F432F34u: goto label_7F432F34;
    case 0x7F432F38u: goto label_7F432F38;
    case 0x7F432F3Cu: goto label_7F432F3C;
    case 0x7F432F40u: goto label_7F432F40;
    case 0x7F432F44u: goto label_7F432F44;
    case 0x7F432F48u: goto label_7F432F48;
    case 0x7F432F4Cu: goto label_7F432F4C;
    case 0x7F432F50u: goto label_7F432F50;
    case 0x7F432F54u: goto label_7F432F54;
    case 0x7F432F58u: goto label_7F432F58;
    case 0x7F432F5Cu: goto label_7F432F5C;
    case 0x7F432F60u: goto label_7F432F60;
    case 0x7F432F64u: goto label_7F432F64;
    case 0x7F432F68u: goto label_7F432F68;
    case 0x7F432F6Cu: goto label_7F432F6C;
    case 0x7F432F70u: goto label_7F432F70;
    case 0x7F432F74u: goto label_7F432F74;
    case 0x7F432F78u: goto label_7F432F78;
    case 0x7F432F7Cu: goto label_7F432F7C;
    case 0x7F432F80u: goto label_7F432F80;
    case 0x7F432F84u: goto label_7F432F84;
    case 0x7F432F88u: goto label_7F432F88;
    case 0x7F432F8Cu: goto label_7F432F8C;
    case 0x7F432F90u: goto label_7F432F90;
    case 0x7F432F94u: goto label_7F432F94;
    case 0x7F432F98u: goto label_7F432F98;
    case 0x7F432F9Cu: goto label_7F432F9C;
    case 0x7F432FA0u: goto label_7F432FA0;
    case 0x7F432FA4u: goto label_7F432FA4;
    case 0x7F432FA8u: goto label_7F432FA8;
    case 0x7F432FACu: goto label_7F432FAC;
    case 0x7F432FB0u: goto label_7F432FB0;
    case 0x7F432FB4u: goto label_7F432FB4;
    case 0x7F432FB8u: goto label_7F432FB8;
    case 0x7F432FBCu: goto label_7F432FBC;
    case 0x7F432FC0u: goto label_7F432FC0;
    case 0x7F432FC4u: goto label_7F432FC4;
    case 0x7F432FC8u: goto label_7F432FC8;
    case 0x7F432FCCu: goto label_7F432FCC;
    case 0x7F432FD0u: goto label_7F432FD0;
    case 0x7F432FD4u: goto label_7F432FD4;
    case 0x7F432FD8u: goto label_7F432FD8;
    case 0x7F432FDCu: goto label_7F432FDC;
    case 0x7F432FE0u: goto label_7F432FE0;
    case 0x7F432FE4u: goto label_7F432FE4;
    case 0x7F432FE8u: goto label_7F432FE8;
    case 0x7F432FECu: goto label_7F432FEC;
    case 0x7F432FF0u: goto label_7F432FF0;
    case 0x7F432FF4u: goto label_7F432FF4;
    case 0x7F432FF8u: goto label_7F432FF8;
    case 0x7F432FFCu: goto label_7F432FFC;
    case 0x7F433000u: goto label_7F433000;
    case 0x7F433004u: goto label_7F433004;
    case 0x7F433008u: goto label_7F433008;
    case 0x7F43300Cu: goto label_7F43300C;
    case 0x7F433010u: goto label_7F433010;
    case 0x7F433014u: goto label_7F433014;
    case 0x7F433018u: goto label_7F433018;
    case 0x7F43301Cu: goto label_7F43301C;
    case 0x7F433020u: goto label_7F433020;
    case 0x7F433024u: goto label_7F433024;
    case 0x7F433028u: goto label_7F433028;
    case 0x7F43302Cu: goto label_7F43302C;
    case 0x7F433030u: goto label_7F433030;
    case 0x7F433034u: goto label_7F433034;
    case 0x7F433038u: goto label_7F433038;
    case 0x7F43303Cu: goto label_7F43303C;
    case 0x7F433040u: goto label_7F433040;
    case 0x7F433044u: goto label_7F433044;
    case 0x7F433048u: goto label_7F433048;
    case 0x7F43304Cu: goto label_7F43304C;
    case 0x7F433050u: goto label_7F433050;
    case 0x7F433054u: goto label_7F433054;
    case 0x7F433058u: goto label_7F433058;
    case 0x7F43305Cu: goto label_7F43305C;
    case 0x7F433060u: goto label_7F433060;
    case 0x7F433064u: goto label_7F433064;
    case 0x7F433068u: goto label_7F433068;
    case 0x7F43306Cu: goto label_7F43306C;
    case 0x7F433070u: goto label_7F433070;
    case 0x7F433074u: goto label_7F433074;
    case 0x7F433078u: goto label_7F433078;
    case 0x7F43307Cu: goto label_7F43307C;
    case 0x7F433080u: goto label_7F433080;
    case 0x7F433084u: goto label_7F433084;
    case 0x7F433088u: goto label_7F433088;
    case 0x7F43308Cu: goto label_7F43308C;
    case 0x7F433090u: goto label_7F433090;
    case 0x7F433094u: goto label_7F433094;
    case 0x7F433098u: goto label_7F433098;
    case 0x7F43309Cu: goto label_7F43309C;
    case 0x7F4330A0u: goto label_7F4330A0;
    case 0x7F4330A4u: goto label_7F4330A4;
    case 0x7F4330A8u: goto label_7F4330A8;
    case 0x7F4330ACu: goto label_7F4330AC;
    case 0x7F4330B0u: goto label_7F4330B0;
    case 0x7F4330B4u: goto label_7F4330B4;
    case 0x7F4330B8u: goto label_7F4330B8;
    case 0x7F4330BCu: goto label_7F4330BC;
    case 0x7F4330C0u: goto label_7F4330C0;
    case 0x7F4330C4u: goto label_7F4330C4;
    case 0x7F4330C8u: goto label_7F4330C8;
    case 0x7F4330CCu: goto label_7F4330CC;
    case 0x7F4330D0u: goto label_7F4330D0;
    case 0x7F4330D4u: goto label_7F4330D4;
    case 0x7F4330D8u: goto label_7F4330D8;
    case 0x7F4330DCu: goto label_7F4330DC;
    case 0x7F4330E0u: goto label_7F4330E0;
    case 0x7F4330E4u: goto label_7F4330E4;
    case 0x7F4330E8u: goto label_7F4330E8;
    case 0x7F4330ECu: goto label_7F4330EC;
    case 0x7F4330F0u: goto label_7F4330F0;
    case 0x7F4330F4u: goto label_7F4330F4;
    case 0x7F4330F8u: goto label_7F4330F8;
    case 0x7F4330FCu: goto label_7F4330FC;
    case 0x7F433100u: goto label_7F433100;
    case 0x7F433104u: goto label_7F433104;
    case 0x7F433108u: goto label_7F433108;
    case 0x7F43310Cu: goto label_7F43310C;
    case 0x7F433110u: goto label_7F433110;
    case 0x7F433114u: goto label_7F433114;
    case 0x7F433118u: goto label_7F433118;
    case 0x7F43311Cu: goto label_7F43311C;
    case 0x7F433120u: goto label_7F433120;
    case 0x7F433124u: goto label_7F433124;
    case 0x7F433128u: goto label_7F433128;
    case 0x7F43312Cu: goto label_7F43312C;
    case 0x7F433130u: goto label_7F433130;
    case 0x7F433134u: goto label_7F433134;
    case 0x7F433138u: goto label_7F433138;
    case 0x7F43313Cu: goto label_7F43313C;
    case 0x7F433140u: goto label_7F433140;
    case 0x7F433144u: goto label_7F433144;
    case 0x7F433148u: goto label_7F433148;
    case 0x7F43314Cu: goto label_7F43314C;
    case 0x7F433150u: goto label_7F433150;
    case 0x7F433154u: goto label_7F433154;
    case 0x7F433158u: goto label_7F433158;
    case 0x7F43315Cu: goto label_7F43315C;
    case 0x7F433160u: goto label_7F433160;
    case 0x7F433164u: goto label_7F433164;
    case 0x7F433168u: goto label_7F433168;
    case 0x7F43316Cu: goto label_7F43316C;
    case 0x7F433170u: goto label_7F433170;
    case 0x7F433174u: goto label_7F433174;
    case 0x7F433178u: goto label_7F433178;
    case 0x7F43317Cu: goto label_7F43317C;
    case 0x7F433180u: goto label_7F433180;
    case 0x7F433184u: goto label_7F433184;
    case 0x7F433188u: goto label_7F433188;
    case 0x7F43318Cu: goto label_7F43318C;
    case 0x7F433190u: goto label_7F433190;
    case 0x7F433194u: goto label_7F433194;
    case 0x7F433198u: goto label_7F433198;
    case 0x7F43319Cu: goto label_7F43319C;
    case 0x7F4331A0u: goto label_7F4331A0;
    case 0x7F4331A4u: goto label_7F4331A4;
    case 0x7F4331A8u: goto label_7F4331A8;
    case 0x7F4331ACu: goto label_7F4331AC;
    case 0x7F4331B0u: goto label_7F4331B0;
    case 0x7F4331B4u: goto label_7F4331B4;
    case 0x7F4331B8u: goto label_7F4331B8;
    case 0x7F4331BCu: goto label_7F4331BC;
    case 0x7F4331C0u: goto label_7F4331C0;
    case 0x7F4331C4u: goto label_7F4331C4;
    case 0x7F4331C8u: goto label_7F4331C8;
    case 0x7F4331CCu: goto label_7F4331CC;
    case 0x7F4331D0u: goto label_7F4331D0;
    case 0x7F4331D4u: goto label_7F4331D4;
    case 0x7F4331D8u: goto label_7F4331D8;
    case 0x7F4331DCu: goto label_7F4331DC;
    case 0x7F4331E0u: goto label_7F4331E0;
    case 0x7F4331E4u: goto label_7F4331E4;
    case 0x7F4331E8u: goto label_7F4331E8;
    case 0x7F4331ECu: goto label_7F4331EC;
    case 0x7F4331F0u: goto label_7F4331F0;
    case 0x7F4331F4u: goto label_7F4331F4;
    case 0x7F4331F8u: goto label_7F4331F8;
    case 0x7F4331FCu: goto label_7F4331FC;
    case 0x7F433200u: goto label_7F433200;
    case 0x7F433204u: goto label_7F433204;
    case 0x7F433208u: goto label_7F433208;
    case 0x7F43320Cu: goto label_7F43320C;
    case 0x7F433210u: goto label_7F433210;
    case 0x7F433214u: goto label_7F433214;
    case 0x7F433218u: goto label_7F433218;
    case 0x7F43321Cu: goto label_7F43321C;
    case 0x7F433220u: goto label_7F433220;
    case 0x7F433224u: goto label_7F433224;
    case 0x7F433228u: goto label_7F433228;
    case 0x7F43322Cu: goto label_7F43322C;
    case 0x7F433230u: goto label_7F433230;
    case 0x7F433234u: goto label_7F433234;
    case 0x7F433238u: goto label_7F433238;
    case 0x7F43323Cu: goto label_7F43323C;
    case 0x7F433240u: goto label_7F433240;
    case 0x7F433244u: goto label_7F433244;
    case 0x7F433248u: goto label_7F433248;
    case 0x7F43324Cu: goto label_7F43324C;
    case 0x7F433250u: goto label_7F433250;
    case 0x7F433254u: goto label_7F433254;
    case 0x7F433258u: goto label_7F433258;
    case 0x7F43325Cu: goto label_7F43325C;
    case 0x7F433260u: goto label_7F433260;
    case 0x7F433264u: goto label_7F433264;
    case 0x7F433268u: goto label_7F433268;
    case 0x7F43326Cu: goto label_7F43326C;
    case 0x7F433270u: goto label_7F433270;
    case 0x7F433274u: goto label_7F433274;
    case 0x7F433278u: goto label_7F433278;
    case 0x7F43327Cu: goto label_7F43327C;
    case 0x7F433280u: goto label_7F433280;
    case 0x7F433284u: goto label_7F433284;
    case 0x7F433288u: goto label_7F433288;
    case 0x7F43328Cu: goto label_7F43328C;
    case 0x7F433290u: goto label_7F433290;
    case 0x7F433294u: goto label_7F433294;
    case 0x7F433298u: goto label_7F433298;
    case 0x7F43329Cu: goto label_7F43329C;
    case 0x7F4332A0u: goto label_7F4332A0;
    case 0x7F4332A4u: goto label_7F4332A4;
    case 0x7F4332A8u: goto label_7F4332A8;
    case 0x7F4332ACu: goto label_7F4332AC;
    case 0x7F4332B0u: goto label_7F4332B0;
    case 0x7F4332B4u: goto label_7F4332B4;
    case 0x7F4332B8u: goto label_7F4332B8;
    case 0x7F4332BCu: goto label_7F4332BC;
    case 0x7F4332C0u: goto label_7F4332C0;
    case 0x7F4332C4u: goto label_7F4332C4;
    case 0x7F4332C8u: goto label_7F4332C8;
    case 0x7F4332CCu: goto label_7F4332CC;
    case 0x7F4332D0u: goto label_7F4332D0;
    case 0x7F4332D4u: goto label_7F4332D4;
    case 0x7F4332D8u: goto label_7F4332D8;
    case 0x7F4332DCu: goto label_7F4332DC;
    case 0x7F4332E0u: goto label_7F4332E0;
    case 0x7F4332E4u: goto label_7F4332E4;
    case 0x7F4332E8u: goto label_7F4332E8;
    case 0x7F4332ECu: goto label_7F4332EC;
    case 0x7F4332F0u: goto label_7F4332F0;
    case 0x7F4332F4u: goto label_7F4332F4;
    case 0x7F4332F8u: goto label_7F4332F8;
    case 0x7F4332FCu: goto label_7F4332FC;
    case 0x7F433300u: goto label_7F433300;
    case 0x7F433304u: goto label_7F433304;
    case 0x7F433308u: goto label_7F433308;
    case 0x7F43330Cu: goto label_7F43330C;
    case 0x7F433310u: goto label_7F433310;
    case 0x7F433314u: goto label_7F433314;
    case 0x7F433318u: goto label_7F433318;
    case 0x7F43331Cu: goto label_7F43331C;
    case 0x7F433320u: goto label_7F433320;
    case 0x7F433324u: goto label_7F433324;
    case 0x7F433328u: goto label_7F433328;
    case 0x7F43332Cu: goto label_7F43332C;
    case 0x7F433330u: goto label_7F433330;
    case 0x7F433334u: goto label_7F433334;
    case 0x7F433338u: goto label_7F433338;
    case 0x7F43333Cu: goto label_7F43333C;
    case 0x7F433340u: goto label_7F433340;
    case 0x7F433344u: goto label_7F433344;
    case 0x7F433348u: goto label_7F433348;
    case 0x7F43334Cu: goto label_7F43334C;
    case 0x7F433350u: goto label_7F433350;
    case 0x7F433354u: goto label_7F433354;
    case 0x7F433358u: goto label_7F433358;
    case 0x7F43335Cu: goto label_7F43335C;
    case 0x7F433360u: goto label_7F433360;
    case 0x7F433364u: goto label_7F433364;
    case 0x7F433368u: goto label_7F433368;
    case 0x7F43336Cu: goto label_7F43336C;
    case 0x7F433370u: goto label_7F433370;
    case 0x7F433374u: goto label_7F433374;
    case 0x7F433378u: goto label_7F433378;
    case 0x7F43337Cu: goto label_7F43337C;
    case 0x7F433380u: goto label_7F433380;
    case 0x7F433384u: goto label_7F433384;
    case 0x7F433388u: goto label_7F433388;
    case 0x7F43338Cu: goto label_7F43338C;
    case 0x7F433390u: goto label_7F433390;
    case 0x7F433394u: goto label_7F433394;
    case 0x7F433398u: goto label_7F433398;
    case 0x7F43339Cu: goto label_7F43339C;
    case 0x7F4333A0u: goto label_7F4333A0;
    case 0x7F4333A4u: goto label_7F4333A4;
    case 0x7F4333A8u: goto label_7F4333A8;
    case 0x7F4333ACu: goto label_7F4333AC;
    case 0x7F4333B0u: goto label_7F4333B0;
    case 0x7F4333B4u: goto label_7F4333B4;
    case 0x7F4333B8u: goto label_7F4333B8;
    case 0x7F4333BCu: goto label_7F4333BC;
    case 0x7F4333C0u: goto label_7F4333C0;
    case 0x7F4333C4u: goto label_7F4333C4;
    case 0x7F4333C8u: goto label_7F4333C8;
    case 0x7F4333CCu: goto label_7F4333CC;
    case 0x7F4333D0u: goto label_7F4333D0;
    case 0x7F4333D4u: goto label_7F4333D4;
    case 0x7F4333D8u: goto label_7F4333D8;
    case 0x7F4333DCu: goto label_7F4333DC;
    case 0x7F4333E0u: goto label_7F4333E0;
    case 0x7F4333E4u: goto label_7F4333E4;
    case 0x7F4333E8u: goto label_7F4333E8;
    case 0x7F4333ECu: goto label_7F4333EC;
    case 0x7F4333F0u: goto label_7F4333F0;
    case 0x7F4333F4u: goto label_7F4333F4;
    case 0x7F4333F8u: goto label_7F4333F8;
    case 0x7F4333FCu: goto label_7F4333FC;
    case 0x7F433400u: goto label_7F433400;
    case 0x7F433404u: goto label_7F433404;
    case 0x7F433408u: goto label_7F433408;
    case 0x7F43340Cu: goto label_7F43340C;
    case 0x7F433410u: goto label_7F433410;
    case 0x7F433414u: goto label_7F433414;
    case 0x7F433418u: goto label_7F433418;
    case 0x7F43341Cu: goto label_7F43341C;
    case 0x7F433420u: goto label_7F433420;
    case 0x7F433424u: goto label_7F433424;
    case 0x7F433428u: goto label_7F433428;
    case 0x7F43342Cu: goto label_7F43342C;
    case 0x7F433430u: goto label_7F433430;
    case 0x7F433434u: goto label_7F433434;
    case 0x7F433438u: goto label_7F433438;
    case 0x7F43343Cu: goto label_7F43343C;
    case 0x7F433440u: goto label_7F433440;
    case 0x7F433444u: goto label_7F433444;
    case 0x7F433448u: goto label_7F433448;
    case 0x7F43344Cu: goto label_7F43344C;
    case 0x7F433450u: goto label_7F433450;
    case 0x7F433454u: goto label_7F433454;
    case 0x7F433458u: goto label_7F433458;
    case 0x7F43345Cu: goto label_7F43345C;
    case 0x7F433460u: goto label_7F433460;
    case 0x7F433464u: goto label_7F433464;
    case 0x7F433468u: goto label_7F433468;
    case 0x7F43346Cu: goto label_7F43346C;
    case 0x7F433470u: goto label_7F433470;
    case 0x7F433474u: goto label_7F433474;
    case 0x7F433478u: goto label_7F433478;
    case 0x7F43347Cu: goto label_7F43347C;
    case 0x7F433480u: goto label_7F433480;
    case 0x7F433484u: goto label_7F433484;
    case 0x7F433488u: goto label_7F433488;
    case 0x7F43348Cu: goto label_7F43348C;
    case 0x7F433490u: goto label_7F433490;
    case 0x7F433494u: goto label_7F433494;
    case 0x7F433498u: goto label_7F433498;
    case 0x7F43349Cu: goto label_7F43349C;
    case 0x7F4334A0u: goto label_7F4334A0;
    case 0x7F4334A4u: goto label_7F4334A4;
    case 0x7F4334A8u: goto label_7F4334A8;
    case 0x7F4334ACu: goto label_7F4334AC;
    case 0x7F4334B0u: goto label_7F4334B0;
    case 0x7F4334B4u: goto label_7F4334B4;
    case 0x7F4334B8u: goto label_7F4334B8;
    case 0x7F4334BCu: goto label_7F4334BC;
    case 0x7F4334C0u: goto label_7F4334C0;
    case 0x7F4334C4u: goto label_7F4334C4;
    case 0x7F4334C8u: goto label_7F4334C8;
    case 0x7F4334CCu: goto label_7F4334CC;
    case 0x7F4334D0u: goto label_7F4334D0;
    case 0x7F4334D4u: goto label_7F4334D4;
    case 0x7F4334D8u: goto label_7F4334D8;
    case 0x7F4334DCu: goto label_7F4334DC;
    case 0x7F4334E0u: goto label_7F4334E0;
    case 0x7F4334E4u: goto label_7F4334E4;
    case 0x7F4334E8u: goto label_7F4334E8;
    case 0x7F4334ECu: goto label_7F4334EC;
    case 0x7F4334F0u: goto label_7F4334F0;
    case 0x7F4334F4u: goto label_7F4334F4;
    case 0x7F4334F8u: goto label_7F4334F8;
    case 0x7F4334FCu: goto label_7F4334FC;
    case 0x7F433500u: goto label_7F433500;
    case 0x7F433504u: goto label_7F433504;
    case 0x7F433508u: goto label_7F433508;
    case 0x7F43350Cu: goto label_7F43350C;
    case 0x7F433510u: goto label_7F433510;
    case 0x7F433514u: goto label_7F433514;
    case 0x7F433518u: goto label_7F433518;
    case 0x7F43351Cu: goto label_7F43351C;
    case 0x7F433520u: goto label_7F433520;
    case 0x7F433524u: goto label_7F433524;
    case 0x7F433528u: goto label_7F433528;
    case 0x7F43352Cu: goto label_7F43352C;
    case 0x7F433530u: goto label_7F433530;
    case 0x7F433534u: goto label_7F433534;
    case 0x7F433538u: goto label_7F433538;
    case 0x7F43353Cu: goto label_7F43353C;
    case 0x7F433540u: goto label_7F433540;
    case 0x7F433544u: goto label_7F433544;
    case 0x7F433548u: goto label_7F433548;
    case 0x7F43354Cu: goto label_7F43354C;
    case 0x7F433550u: goto label_7F433550;
    case 0x7F433554u: goto label_7F433554;
    case 0x7F433558u: goto label_7F433558;
    case 0x7F43355Cu: goto label_7F43355C;
    case 0x7F433560u: goto label_7F433560;
    case 0x7F433564u: goto label_7F433564;
    case 0x7F433568u: goto label_7F433568;
    case 0x7F43356Cu: goto label_7F43356C;
    case 0x7F433570u: goto label_7F433570;
    case 0x7F433574u: goto label_7F433574;
    case 0x7F433578u: goto label_7F433578;
    case 0x7F43357Cu: goto label_7F43357C;
    case 0x7F433580u: goto label_7F433580;
    case 0x7F433584u: goto label_7F433584;
    case 0x7F433588u: goto label_7F433588;
    case 0x7F43358Cu: goto label_7F43358C;
    case 0x7F433590u: goto label_7F433590;
    case 0x7F433594u: goto label_7F433594;
    case 0x7F433598u: goto label_7F433598;
    case 0x7F43359Cu: goto label_7F43359C;
    case 0x7F4335A0u: goto label_7F4335A0;
    case 0x7F4335A4u: goto label_7F4335A4;
    case 0x7F4335A8u: goto label_7F4335A8;
    case 0x7F4335ACu: goto label_7F4335AC;
    case 0x7F4335B0u: goto label_7F4335B0;
    case 0x7F4335B4u: goto label_7F4335B4;
    case 0x7F4335B8u: goto label_7F4335B8;
    case 0x7F4335BCu: goto label_7F4335BC;
    case 0x7F4335C0u: goto label_7F4335C0;
    case 0x7F4335C4u: goto label_7F4335C4;
    case 0x7F4335C8u: goto label_7F4335C8;
    case 0x7F4335CCu: goto label_7F4335CC;
    case 0x7F4335D0u: goto label_7F4335D0;
    case 0x7F4335D4u: goto label_7F4335D4;
    case 0x7F4335D8u: goto label_7F4335D8;
    case 0x7F4335DCu: goto label_7F4335DC;
    case 0x7F4335E0u: goto label_7F4335E0;
    case 0x7F4335E4u: goto label_7F4335E4;
    case 0x7F4335E8u: goto label_7F4335E8;
    case 0x7F4335ECu: goto label_7F4335EC;
    case 0x7F4335F0u: goto label_7F4335F0;
    case 0x7F4335F4u: goto label_7F4335F4;
    case 0x7F4335F8u: goto label_7F4335F8;
    case 0x7F4335FCu: goto label_7F4335FC;
    case 0x7F433600u: goto label_7F433600;
    case 0x7F433604u: goto label_7F433604;
    case 0x7F433608u: goto label_7F433608;
    case 0x7F43360Cu: goto label_7F43360C;
    case 0x7F433610u: goto label_7F433610;
    case 0x7F433614u: goto label_7F433614;
    case 0x7F433618u: goto label_7F433618;
    case 0x7F43361Cu: goto label_7F43361C;
    case 0x7F433620u: goto label_7F433620;
    case 0x7F433624u: goto label_7F433624;
    case 0x7F433628u: goto label_7F433628;
    case 0x7F43362Cu: goto label_7F43362C;
    case 0x7F433630u: goto label_7F433630;
    case 0x7F433634u: goto label_7F433634;
    case 0x7F433638u: goto label_7F433638;
    case 0x7F43363Cu: goto label_7F43363C;
    case 0x7F433640u: goto label_7F433640;
    case 0x7F433644u: goto label_7F433644;
    case 0x7F433648u: goto label_7F433648;
    case 0x7F43364Cu: goto label_7F43364C;
    case 0x7F433650u: goto label_7F433650;
    case 0x7F433654u: goto label_7F433654;
    case 0x7F433658u: goto label_7F433658;
    case 0x7F43365Cu: goto label_7F43365C;
    case 0x7F433660u: goto label_7F433660;
    case 0x7F433664u: goto label_7F433664;
    case 0x7F433668u: goto label_7F433668;
    case 0x7F43366Cu: goto label_7F43366C;
    case 0x7F433670u: goto label_7F433670;
    case 0x7F433674u: goto label_7F433674;
    case 0x7F433678u: goto label_7F433678;
    case 0x7F43367Cu: goto label_7F43367C;
    case 0x7F433680u: goto label_7F433680;
    case 0x7F433684u: goto label_7F433684;
    case 0x7F433688u: goto label_7F433688;
    case 0x7F43368Cu: goto label_7F43368C;
    case 0x7F433690u: goto label_7F433690;
    case 0x7F433694u: goto label_7F433694;
    case 0x7F433698u: goto label_7F433698;
    case 0x7F43369Cu: goto label_7F43369C;
    case 0x7F4336A0u: goto label_7F4336A0;
    case 0x7F4336A4u: goto label_7F4336A4;
    case 0x7F4336A8u: goto label_7F4336A8;
    case 0x7F4336ACu: goto label_7F4336AC;
    case 0x7F4336B0u: goto label_7F4336B0;
    case 0x7F4336B4u: goto label_7F4336B4;
    case 0x7F4336B8u: goto label_7F4336B8;
    case 0x7F4336BCu: goto label_7F4336BC;
    case 0x7F4336C0u: goto label_7F4336C0;
    case 0x7F4336C4u: goto label_7F4336C4;
    case 0x7F4336C8u: goto label_7F4336C8;
    case 0x7F4336CCu: goto label_7F4336CC;
    case 0x7F4336D0u: goto label_7F4336D0;
    case 0x7F4336D4u: goto label_7F4336D4;
    case 0x7F4336D8u: goto label_7F4336D8;
    case 0x7F4336DCu: goto label_7F4336DC;
    case 0x7F4336E0u: goto label_7F4336E0;
    case 0x7F4336E4u: goto label_7F4336E4;
    case 0x7F4336E8u: goto label_7F4336E8;
    case 0x7F4336ECu: goto label_7F4336EC;
    case 0x7F4336F0u: goto label_7F4336F0;
    case 0x7F4336F4u: goto label_7F4336F4;
    case 0x7F4336F8u: goto label_7F4336F8;
    case 0x7F4336FCu: goto label_7F4336FC;
    case 0x7F433700u: goto label_7F433700;
    case 0x7F433704u: goto label_7F433704;
    case 0x7F433708u: goto label_7F433708;
    case 0x7F43370Cu: goto label_7F43370C;
    case 0x7F433710u: goto label_7F433710;
    case 0x7F433714u: goto label_7F433714;
    case 0x7F433718u: goto label_7F433718;
    case 0x7F43371Cu: goto label_7F43371C;
    case 0x7F433720u: goto label_7F433720;
    case 0x7F433724u: goto label_7F433724;
    case 0x7F433728u: goto label_7F433728;
    case 0x7F43372Cu: goto label_7F43372C;
    case 0x7F433730u: goto label_7F433730;
    case 0x7F433734u: goto label_7F433734;
    case 0x7F433738u: goto label_7F433738;
    case 0x7F43373Cu: goto label_7F43373C;
    case 0x7F433740u: goto label_7F433740;
    case 0x7F433744u: goto label_7F433744;
    case 0x7F433748u: goto label_7F433748;
    case 0x7F43374Cu: goto label_7F43374C;
    case 0x7F433750u: goto label_7F433750;
    case 0x7F433754u: goto label_7F433754;
    case 0x7F433758u: goto label_7F433758;
    case 0x7F43375Cu: goto label_7F43375C;
    case 0x7F433760u: goto label_7F433760;
    case 0x7F433764u: goto label_7F433764;
    case 0x7F433768u: goto label_7F433768;
    case 0x7F43376Cu: goto label_7F43376C;
    case 0x7F433770u: goto label_7F433770;
    case 0x7F433774u: goto label_7F433774;
    case 0x7F433778u: goto label_7F433778;
    case 0x7F43377Cu: goto label_7F43377C;
    case 0x7F433780u: goto label_7F433780;
    case 0x7F433784u: goto label_7F433784;
    case 0x7F433788u: goto label_7F433788;
    case 0x7F43378Cu: goto label_7F43378C;
    case 0x7F433790u: goto label_7F433790;
    case 0x7F433794u: goto label_7F433794;
    case 0x7F433798u: goto label_7F433798;
    case 0x7F43379Cu: goto label_7F43379C;
    case 0x7F4337A0u: goto label_7F4337A0;
    case 0x7F4337A4u: goto label_7F4337A4;
    case 0x7F4337A8u: goto label_7F4337A8;
    case 0x7F4337ACu: goto label_7F4337AC;
    case 0x7F4337B0u: goto label_7F4337B0;
    case 0x7F4337B4u: goto label_7F4337B4;
    case 0x7F4337B8u: goto label_7F4337B8;
    case 0x7F4337BCu: goto label_7F4337BC;
    case 0x7F4337C0u: goto label_7F4337C0;
    case 0x7F4337C4u: goto label_7F4337C4;
    case 0x7F4337C8u: goto label_7F4337C8;
    case 0x7F4337CCu: goto label_7F4337CC;
    case 0x7F4337D0u: goto label_7F4337D0;
    case 0x7F4337D4u: goto label_7F4337D4;
    case 0x7F4337D8u: goto label_7F4337D8;
    case 0x7F4337DCu: goto label_7F4337DC;
    case 0x7F4337E0u: goto label_7F4337E0;
    case 0x7F4337E4u: goto label_7F4337E4;
    case 0x7F4337E8u: goto label_7F4337E8;
    case 0x7F4337ECu: goto label_7F4337EC;
    case 0x7F4337F0u: goto label_7F4337F0;
    case 0x7F4337F4u: goto label_7F4337F4;
    case 0x7F4337F8u: goto label_7F4337F8;
    case 0x7F4337FCu: goto label_7F4337FC;
    case 0x7F433800u: goto label_7F433800;
    case 0x7F433804u: goto label_7F433804;
    case 0x7F433808u: goto label_7F433808;
    case 0x7F43380Cu: goto label_7F43380C;
    case 0x7F433810u: goto label_7F433810;
    case 0x7F433814u: goto label_7F433814;
    case 0x7F433818u: goto label_7F433818;
    case 0x7F43381Cu: goto label_7F43381C;
    case 0x7F433820u: goto label_7F433820;
    case 0x7F433824u: goto label_7F433824;
    case 0x7F433828u: goto label_7F433828;
    case 0x7F43382Cu: goto label_7F43382C;
    case 0x7F433830u: goto label_7F433830;
    case 0x7F433834u: goto label_7F433834;
    case 0x7F433838u: goto label_7F433838;
    case 0x7F43383Cu: goto label_7F43383C;
    case 0x7F433840u: goto label_7F433840;
    case 0x7F433844u: goto label_7F433844;
    case 0x7F433848u: goto label_7F433848;
    case 0x7F43384Cu: goto label_7F43384C;
    case 0x7F433850u: goto label_7F433850;
    case 0x7F433854u: goto label_7F433854;
    case 0x7F433858u: goto label_7F433858;
    case 0x7F43385Cu: goto label_7F43385C;
    case 0x7F433860u: goto label_7F433860;
    case 0x7F433864u: goto label_7F433864;
    case 0x7F433868u: goto label_7F433868;
    case 0x7F43386Cu: goto label_7F43386C;
    case 0x7F433870u: goto label_7F433870;
    case 0x7F433874u: goto label_7F433874;
    case 0x7F433878u: goto label_7F433878;
    case 0x7F43387Cu: goto label_7F43387C;
    case 0x7F433880u: goto label_7F433880;
    case 0x7F433884u: goto label_7F433884;
    case 0x7F433888u: goto label_7F433888;
    case 0x7F43388Cu: goto label_7F43388C;
    case 0x7F433890u: goto label_7F433890;
    case 0x7F433894u: goto label_7F433894;
    case 0x7F433898u: goto label_7F433898;
    case 0x7F43389Cu: goto label_7F43389C;
    case 0x7F4338A0u: goto label_7F4338A0;
    case 0x7F4338A4u: goto label_7F4338A4;
    case 0x7F4338A8u: goto label_7F4338A8;
    case 0x7F4338ACu: goto label_7F4338AC;
    case 0x7F4338B0u: goto label_7F4338B0;
    case 0x7F4338B4u: goto label_7F4338B4;
    case 0x7F4338B8u: goto label_7F4338B8;
    case 0x7F4338BCu: goto label_7F4338BC;
    case 0x7F4338C0u: goto label_7F4338C0;
    case 0x7F4338C4u: goto label_7F4338C4;
    case 0x7F4338C8u: goto label_7F4338C8;
    case 0x7F4338CCu: goto label_7F4338CC;
    case 0x7F4338D0u: goto label_7F4338D0;
    case 0x7F4338D4u: goto label_7F4338D4;
    case 0x7F4338D8u: goto label_7F4338D8;
    case 0x7F4338DCu: goto label_7F4338DC;
    case 0x7F4338E0u: goto label_7F4338E0;
    case 0x7F4338E4u: goto label_7F4338E4;
    case 0x7F4338E8u: goto label_7F4338E8;
    case 0x7F4338ECu: goto label_7F4338EC;
    case 0x7F4338F0u: goto label_7F4338F0;
    case 0x7F4338F4u: goto label_7F4338F4;
    case 0x7F4338F8u: goto label_7F4338F8;
    case 0x7F4338FCu: goto label_7F4338FC;
    case 0x7F433900u: goto label_7F433900;
    case 0x7F433904u: goto label_7F433904;
    case 0x7F433908u: goto label_7F433908;
    case 0x7F43390Cu: goto label_7F43390C;
    case 0x7F433910u: goto label_7F433910;
    case 0x7F433914u: goto label_7F433914;
    case 0x7F433918u: goto label_7F433918;
    case 0x7F43391Cu: goto label_7F43391C;
    case 0x7F433920u: goto label_7F433920;
    case 0x7F433924u: goto label_7F433924;
    case 0x7F433928u: goto label_7F433928;
    case 0x7F43392Cu: goto label_7F43392C;
    case 0x7F433930u: goto label_7F433930;
    case 0x7F433934u: goto label_7F433934;
    case 0x7F433938u: goto label_7F433938;
    case 0x7F43393Cu: goto label_7F43393C;
    case 0x7F433940u: goto label_7F433940;
    case 0x7F433944u: goto label_7F433944;
    case 0x7F433948u: goto label_7F433948;
    case 0x7F43394Cu: goto label_7F43394C;
    case 0x7F433950u: goto label_7F433950;
    case 0x7F433954u: goto label_7F433954;
    case 0x7F433958u: goto label_7F433958;
    case 0x7F43395Cu: goto label_7F43395C;
    case 0x7F433960u: goto label_7F433960;
    case 0x7F433964u: goto label_7F433964;
    case 0x7F433968u: goto label_7F433968;
    case 0x7F43396Cu: goto label_7F43396C;
    case 0x7F433970u: goto label_7F433970;
    case 0x7F433974u: goto label_7F433974;
    case 0x7F433978u: goto label_7F433978;
    case 0x7F43397Cu: goto label_7F43397C;
    case 0x7F433980u: goto label_7F433980;
    case 0x7F433984u: goto label_7F433984;
    case 0x7F433988u: goto label_7F433988;
    case 0x7F43398Cu: goto label_7F43398C;
    case 0x7F433990u: goto label_7F433990;
    case 0x7F433994u: goto label_7F433994;
    case 0x7F433998u: goto label_7F433998;
    case 0x7F43399Cu: goto label_7F43399C;
    case 0x7F4339A0u: goto label_7F4339A0;
    case 0x7F4339A4u: goto label_7F4339A4;
    case 0x7F4339A8u: goto label_7F4339A8;
    case 0x7F4339ACu: goto label_7F4339AC;
    case 0x7F4339B0u: goto label_7F4339B0;
    case 0x7F4339B4u: goto label_7F4339B4;
    case 0x7F4339B8u: goto label_7F4339B8;
    case 0x7F4339BCu: goto label_7F4339BC;
    case 0x7F4339C0u: goto label_7F4339C0;
    case 0x7F4339C4u: goto label_7F4339C4;
    case 0x7F4339C8u: goto label_7F4339C8;
    case 0x7F4339CCu: goto label_7F4339CC;
    case 0x7F4339D0u: goto label_7F4339D0;
    case 0x7F4339D4u: goto label_7F4339D4;
    case 0x7F4339D8u: goto label_7F4339D8;
    case 0x7F4339DCu: goto label_7F4339DC;
    case 0x7F4339E0u: goto label_7F4339E0;
    case 0x7F4339E4u: goto label_7F4339E4;
    case 0x7F4339E8u: goto label_7F4339E8;
    case 0x7F4339ECu: goto label_7F4339EC;
    case 0x7F4339F0u: goto label_7F4339F0;
    case 0x7F4339F4u: goto label_7F4339F4;
    case 0x7F4339F8u: goto label_7F4339F8;
    case 0x7F4339FCu: goto label_7F4339FC;
    case 0x7F433A00u: goto label_7F433A00;
    case 0x7F433A04u: goto label_7F433A04;
    case 0x7F433A08u: goto label_7F433A08;
    case 0x7F433A0Cu: goto label_7F433A0C;
    case 0x7F433A10u: goto label_7F433A10;
    case 0x7F433A14u: goto label_7F433A14;
    case 0x7F433A18u: goto label_7F433A18;
    case 0x7F433A1Cu: goto label_7F433A1C;
    case 0x7F433A20u: goto label_7F433A20;
    case 0x7F433A24u: goto label_7F433A24;
    case 0x7F433A28u: goto label_7F433A28;
    case 0x7F433A2Cu: goto label_7F433A2C;
    case 0x7F433A30u: goto label_7F433A30;
    case 0x7F433A34u: goto label_7F433A34;
    case 0x7F433A38u: goto label_7F433A38;
    case 0x7F433A3Cu: goto label_7F433A3C;
    case 0x7F433A40u: goto label_7F433A40;
    case 0x7F433A44u: goto label_7F433A44;
    case 0x7F433A48u: goto label_7F433A48;
    case 0x7F433A4Cu: goto label_7F433A4C;
    case 0x7F433A50u: goto label_7F433A50;
    case 0x7F433A54u: goto label_7F433A54;
    case 0x7F433A58u: goto label_7F433A58;
    case 0x7F433A5Cu: goto label_7F433A5C;
    case 0x7F433A60u: goto label_7F433A60;
    case 0x7F433A64u: goto label_7F433A64;
    case 0x7F433A68u: goto label_7F433A68;
    case 0x7F433A6Cu: goto label_7F433A6C;
    case 0x7F433A70u: goto label_7F433A70;
    case 0x7F433A74u: goto label_7F433A74;
    case 0x7F433A78u: goto label_7F433A78;
    case 0x7F433A7Cu: goto label_7F433A7C;
    case 0x7F433A80u: goto label_7F433A80;
    case 0x7F433A84u: goto label_7F433A84;
    case 0x7F433A88u: goto label_7F433A88;
    case 0x7F433A8Cu: goto label_7F433A8C;
    case 0x7F433A90u: goto label_7F433A90;
    case 0x7F433A94u: goto label_7F433A94;
    case 0x7F433A98u: goto label_7F433A98;
    case 0x7F433A9Cu: goto label_7F433A9C;
    case 0x7F433AA0u: goto label_7F433AA0;
    case 0x7F433AA4u: goto label_7F433AA4;
    case 0x7F433AA8u: goto label_7F433AA8;
    case 0x7F433AACu: goto label_7F433AAC;
    case 0x7F433AB0u: goto label_7F433AB0;
    case 0x7F433AB4u: goto label_7F433AB4;
    case 0x7F433AB8u: goto label_7F433AB8;
    case 0x7F433ABCu: goto label_7F433ABC;
    case 0x7F433AC0u: goto label_7F433AC0;
    case 0x7F433AC4u: goto label_7F433AC4;
    case 0x7F433AC8u: goto label_7F433AC8;
    case 0x7F433ACCu: goto label_7F433ACC;
    case 0x7F433AD0u: goto label_7F433AD0;
    case 0x7F433AD4u: goto label_7F433AD4;
    case 0x7F433AD8u: goto label_7F433AD8;
    case 0x7F433ADCu: goto label_7F433ADC;
    case 0x7F433AE0u: goto label_7F433AE0;
    case 0x7F433AE4u: goto label_7F433AE4;
    case 0x7F433AE8u: goto label_7F433AE8;
    case 0x7F433AECu: goto label_7F433AEC;
    case 0x7F433AF0u: goto label_7F433AF0;
    case 0x7F433AF4u: goto label_7F433AF4;
    case 0x7F433AF8u: goto label_7F433AF8;
    case 0x7F433AFCu: goto label_7F433AFC;
    case 0x7F433B00u: goto label_7F433B00;
    case 0x7F433B04u: goto label_7F433B04;
    case 0x7F433B08u: goto label_7F433B08;
    case 0x7F433B0Cu: goto label_7F433B0C;
    case 0x7F433B10u: goto label_7F433B10;
    case 0x7F433B14u: goto label_7F433B14;
    case 0x7F433B18u: goto label_7F433B18;
    case 0x7F433B1Cu: goto label_7F433B1C;
    case 0x7F433B20u: goto label_7F433B20;
    case 0x7F433B24u: goto label_7F433B24;
    case 0x7F433B28u: goto label_7F433B28;
    case 0x7F433B2Cu: goto label_7F433B2C;
    case 0x7F433B30u: goto label_7F433B30;
    case 0x7F433B34u: goto label_7F433B34;
    case 0x7F433B38u: goto label_7F433B38;
    case 0x7F433B3Cu: goto label_7F433B3C;
    case 0x7F433B40u: goto label_7F433B40;
    case 0x7F433B44u: goto label_7F433B44;
    case 0x7F433B48u: goto label_7F433B48;
    case 0x7F433B4Cu: goto label_7F433B4C;
    case 0x7F433B50u: goto label_7F433B50;
    case 0x7F433B54u: goto label_7F433B54;
    case 0x7F433B58u: goto label_7F433B58;
    case 0x7F433B5Cu: goto label_7F433B5C;
    case 0x7F433B60u: goto label_7F433B60;
    case 0x7F433B64u: goto label_7F433B64;
    case 0x7F433B68u: goto label_7F433B68;
    case 0x7F433B6Cu: goto label_7F433B6C;
    case 0x7F433B70u: goto label_7F433B70;
    case 0x7F433B74u: goto label_7F433B74;
    case 0x7F433B78u: goto label_7F433B78;
    case 0x7F433B7Cu: goto label_7F433B7C;
    case 0x7F433B80u: goto label_7F433B80;
    case 0x7F433B84u: goto label_7F433B84;
    case 0x7F433B88u: goto label_7F433B88;
    case 0x7F433B8Cu: goto label_7F433B8C;
    case 0x7F433B90u: goto label_7F433B90;
    case 0x7F433B94u: goto label_7F433B94;
    case 0x7F433B98u: goto label_7F433B98;
    case 0x7F433B9Cu: goto label_7F433B9C;
    case 0x7F433BA0u: goto label_7F433BA0;
    case 0x7F433BA4u: goto label_7F433BA4;
    case 0x7F433BA8u: goto label_7F433BA8;
    case 0x7F433BACu: goto label_7F433BAC;
    case 0x7F433BB0u: goto label_7F433BB0;
    case 0x7F433BB4u: goto label_7F433BB4;
    case 0x7F433BB8u: goto label_7F433BB8;
    case 0x7F433BBCu: goto label_7F433BBC;
    case 0x7F433BC0u: goto label_7F433BC0;
    case 0x7F433BC4u: goto label_7F433BC4;
    case 0x7F433BC8u: goto label_7F433BC8;
    case 0x7F433BCCu: goto label_7F433BCC;
    case 0x7F433BD0u: goto label_7F433BD0;
    case 0x7F433BD4u: goto label_7F433BD4;
    case 0x7F433BD8u: goto label_7F433BD8;
    case 0x7F433BDCu: goto label_7F433BDC;
    case 0x7F433BE0u: goto label_7F433BE0;
    case 0x7F433BE4u: goto label_7F433BE4;
    case 0x7F433BE8u: goto label_7F433BE8;
    case 0x7F433BECu: goto label_7F433BEC;
    case 0x7F433BF0u: goto label_7F433BF0;
    case 0x7F433BF4u: goto label_7F433BF4;
    case 0x7F433BF8u: goto label_7F433BF8;
    case 0x7F433BFCu: goto label_7F433BFC;
    case 0x7F433C00u: goto label_7F433C00;
    case 0x7F433C04u: goto label_7F433C04;
    case 0x7F433C08u: goto label_7F433C08;
    case 0x7F433C0Cu: goto label_7F433C0C;
    case 0x7F433C10u: goto label_7F433C10;
    case 0x7F433C14u: goto label_7F433C14;
    case 0x7F433C18u: goto label_7F433C18;
    case 0x7F433C1Cu: goto label_7F433C1C;
    case 0x7F433C20u: goto label_7F433C20;
    case 0x7F433C24u: goto label_7F433C24;
    case 0x7F433C28u: goto label_7F433C28;
    case 0x7F433C2Cu: goto label_7F433C2C;
    case 0x7F433C30u: goto label_7F433C30;
    case 0x7F433C34u: goto label_7F433C34;
    case 0x7F433C38u: goto label_7F433C38;
    case 0x7F433C3Cu: goto label_7F433C3C;
    case 0x7F433C40u: goto label_7F433C40;
    case 0x7F433C44u: goto label_7F433C44;
    case 0x7F433C48u: goto label_7F433C48;
    case 0x7F433C4Cu: goto label_7F433C4C;
    case 0x7F433C50u: goto label_7F433C50;
    case 0x7F433C54u: goto label_7F433C54;
    case 0x7F433C58u: goto label_7F433C58;
    case 0x7F433C5Cu: goto label_7F433C5C;
    case 0x7F433C60u: goto label_7F433C60;
    case 0x7F433C64u: goto label_7F433C64;
    case 0x7F433C68u: goto label_7F433C68;
    case 0x7F433C6Cu: goto label_7F433C6C;
    case 0x7F433C70u: goto label_7F433C70;
    case 0x7F433C74u: goto label_7F433C74;
    case 0x7F433C78u: goto label_7F433C78;
    case 0x7F433C7Cu: goto label_7F433C7C;
    case 0x7F433C80u: goto label_7F433C80;
    case 0x7F433C84u: goto label_7F433C84;
    case 0x7F433C88u: goto label_7F433C88;
    case 0x7F433C8Cu: goto label_7F433C8C;
    case 0x7F433C90u: goto label_7F433C90;
    case 0x7F433C94u: goto label_7F433C94;
    case 0x7F433C98u: goto label_7F433C98;
    case 0x7F433C9Cu: goto label_7F433C9C;
    case 0x7F433CA0u: goto label_7F433CA0;
    case 0x7F433CA4u: goto label_7F433CA4;
    case 0x7F433CA8u: goto label_7F433CA8;
    case 0x7F433CACu: goto label_7F433CAC;
    case 0x7F433CB0u: goto label_7F433CB0;
    case 0x7F433CB4u: goto label_7F433CB4;
    case 0x7F433CB8u: goto label_7F433CB8;
    case 0x7F433CBCu: goto label_7F433CBC;
    case 0x7F433CC0u: goto label_7F433CC0;
    case 0x7F433CC4u: goto label_7F433CC4;
    case 0x7F433CC8u: goto label_7F433CC8;
    case 0x7F433CCCu: goto label_7F433CCC;
    case 0x7F433CD0u: goto label_7F433CD0;
    case 0x7F433CD4u: goto label_7F433CD4;
    case 0x7F433CD8u: goto label_7F433CD8;
    case 0x7F433CDCu: goto label_7F433CDC;
    case 0x7F433CE0u: goto label_7F433CE0;
    case 0x7F433CE4u: goto label_7F433CE4;
    case 0x7F433CE8u: goto label_7F433CE8;
    case 0x7F433CECu: goto label_7F433CEC;
    case 0x7F433CF0u: goto label_7F433CF0;
    case 0x7F433CF4u: goto label_7F433CF4;
    case 0x7F433CF8u: goto label_7F433CF8;
    case 0x7F433CFCu: goto label_7F433CFC;
    case 0x7F433D00u: goto label_7F433D00;
    case 0x7F433D04u: goto label_7F433D04;
    case 0x7F433D08u: goto label_7F433D08;
    case 0x7F433D0Cu: goto label_7F433D0C;
    case 0x7F433D10u: goto label_7F433D10;
    case 0x7F433D14u: goto label_7F433D14;
    case 0x7F433D18u: goto label_7F433D18;
    case 0x7F433D1Cu: goto label_7F433D1C;
    case 0x7F433D20u: goto label_7F433D20;
    case 0x7F433D24u: goto label_7F433D24;
    case 0x7F433D28u: goto label_7F433D28;
    case 0x7F433D2Cu: goto label_7F433D2C;
    case 0x7F433D30u: goto label_7F433D30;
    case 0x7F433D34u: goto label_7F433D34;
    case 0x7F433D38u: goto label_7F433D38;
    case 0x7F433D3Cu: goto label_7F433D3C;
    case 0x7F433D40u: goto label_7F433D40;
    case 0x7F433D44u: goto label_7F433D44;
    case 0x7F433D48u: goto label_7F433D48;
    case 0x7F433D4Cu: goto label_7F433D4C;
    case 0x7F433D50u: goto label_7F433D50;
    case 0x7F433D54u: goto label_7F433D54;
    case 0x7F433D58u: goto label_7F433D58;
    case 0x7F433D5Cu: goto label_7F433D5C;
    case 0x7F433D60u: goto label_7F433D60;
    case 0x7F433D64u: goto label_7F433D64;
    case 0x7F433D68u: goto label_7F433D68;
    case 0x7F433D6Cu: goto label_7F433D6C;
    case 0x7F433D70u: goto label_7F433D70;
    case 0x7F433D74u: goto label_7F433D74;
    case 0x7F433D78u: goto label_7F433D78;
    case 0x7F433D7Cu: goto label_7F433D7C;
    case 0x7F433D80u: goto label_7F433D80;
    case 0x7F433D84u: goto label_7F433D84;
    case 0x7F433D88u: goto label_7F433D88;
    case 0x7F433D8Cu: goto label_7F433D8C;
    case 0x7F433D90u: goto label_7F433D90;
    case 0x7F433D94u: goto label_7F433D94;
    case 0x7F433D98u: goto label_7F433D98;
    case 0x7F433D9Cu: goto label_7F433D9C;
    case 0x7F433DA0u: goto label_7F433DA0;
    case 0x7F433DA4u: goto label_7F433DA4;
    case 0x7F433DA8u: goto label_7F433DA8;
    case 0x7F433DACu: goto label_7F433DAC;
    case 0x7F433DB0u: goto label_7F433DB0;
    case 0x7F433DB4u: goto label_7F433DB4;
    case 0x7F433DB8u: goto label_7F433DB8;
    case 0x7F433DBCu: goto label_7F433DBC;
    case 0x7F433DC0u: goto label_7F433DC0;
    case 0x7F433DC4u: goto label_7F433DC4;
    case 0x7F433DC8u: goto label_7F433DC8;
    case 0x7F433DCCu: goto label_7F433DCC;
    case 0x7F433DD0u: goto label_7F433DD0;
    case 0x7F433DD4u: goto label_7F433DD4;
    case 0x7F433DD8u: goto label_7F433DD8;
    case 0x7F433DDCu: goto label_7F433DDC;
    case 0x7F433DE0u: goto label_7F433DE0;
    case 0x7F433DE4u: goto label_7F433DE4;
    case 0x7F433DE8u: goto label_7F433DE8;
    case 0x7F433DECu: goto label_7F433DEC;
    case 0x7F433DF0u: goto label_7F433DF0;
    case 0x7F433DF4u: goto label_7F433DF4;
    case 0x7F433DF8u: goto label_7F433DF8;
    case 0x7F433DFCu: goto label_7F433DFC;
    case 0x7F433E00u: goto label_7F433E00;
    case 0x7F433E04u: goto label_7F433E04;
    case 0x7F433E08u: goto label_7F433E08;
    case 0x7F433E0Cu: goto label_7F433E0C;
    case 0x7F433E10u: goto label_7F433E10;
    case 0x7F433E14u: goto label_7F433E14;
    case 0x7F433E18u: goto label_7F433E18;
    case 0x7F433E1Cu: goto label_7F433E1C;
    case 0x7F433E20u: goto label_7F433E20;
    case 0x7F433E24u: goto label_7F433E24;
    case 0x7F433E28u: goto label_7F433E28;
    case 0x7F433E2Cu: goto label_7F433E2C;
    case 0x7F433E30u: goto label_7F433E30;
    case 0x7F433E34u: goto label_7F433E34;
    case 0x7F433E38u: goto label_7F433E38;
    case 0x7F433E3Cu: goto label_7F433E3C;
    case 0x7F433E40u: goto label_7F433E40;
    case 0x7F433E44u: goto label_7F433E44;
    case 0x7F433E48u: goto label_7F433E48;
    case 0x7F433E4Cu: goto label_7F433E4C;
    case 0x7F433E50u: goto label_7F433E50;
    case 0x7F433E54u: goto label_7F433E54;
    case 0x7F433E58u: goto label_7F433E58;
    case 0x7F433E5Cu: goto label_7F433E5C;
    case 0x7F433E60u: goto label_7F433E60;
    case 0x7F433E64u: goto label_7F433E64;
    case 0x7F433E68u: goto label_7F433E68;
    case 0x7F433E6Cu: goto label_7F433E6C;
    case 0x7F433E70u: goto label_7F433E70;
    case 0x7F433E74u: goto label_7F433E74;
    case 0x7F433E78u: goto label_7F433E78;
    case 0x7F433E7Cu: goto label_7F433E7C;
    case 0x7F433E80u: goto label_7F433E80;
    case 0x7F433E84u: goto label_7F433E84;
    case 0x7F433E88u: goto label_7F433E88;
    case 0x7F433E8Cu: goto label_7F433E8C;
    case 0x7F433E90u: goto label_7F433E90;
    case 0x7F433E94u: goto label_7F433E94;
    case 0x7F433E98u: goto label_7F433E98;
    case 0x7F433E9Cu: goto label_7F433E9C;
    case 0x7F433EA0u: goto label_7F433EA0;
    case 0x7F433EA4u: goto label_7F433EA4;
    case 0x7F433EA8u: goto label_7F433EA8;
    case 0x7F433EACu: goto label_7F433EAC;
    case 0x7F433EB0u: goto label_7F433EB0;
    case 0x7F433EB4u: goto label_7F433EB4;
    case 0x7F433EB8u: goto label_7F433EB8;
    case 0x7F433EBCu: goto label_7F433EBC;
    case 0x7F433EC0u: goto label_7F433EC0;
    case 0x7F433EC4u: goto label_7F433EC4;
    case 0x7F433EC8u: goto label_7F433EC8;
    case 0x7F433ECCu: goto label_7F433ECC;
    case 0x7F433ED0u: goto label_7F433ED0;
    case 0x7F433ED4u: goto label_7F433ED4;
    case 0x7F433ED8u: goto label_7F433ED8;
    case 0x7F433EDCu: goto label_7F433EDC;
    case 0x7F433EE0u: goto label_7F433EE0;
    case 0x7F433EE4u: goto label_7F433EE4;
    case 0x7F433EE8u: goto label_7F433EE8;
    case 0x7F433EECu: goto label_7F433EEC;
    case 0x7F433EF0u: goto label_7F433EF0;
    case 0x7F433EF4u: goto label_7F433EF4;
    case 0x7F433EF8u: goto label_7F433EF8;
    case 0x7F433EFCu: goto label_7F433EFC;
    case 0x7F433F00u: goto label_7F433F00;
    case 0x7F433F04u: goto label_7F433F04;
    case 0x7F433F08u: goto label_7F433F08;
    case 0x7F433F0Cu: goto label_7F433F0C;
    case 0x7F433F10u: goto label_7F433F10;
    case 0x7F433F14u: goto label_7F433F14;
    case 0x7F433F18u: goto label_7F433F18;
    case 0x7F433F1Cu: goto label_7F433F1C;
    case 0x7F433F20u: goto label_7F433F20;
    case 0x7F433F24u: goto label_7F433F24;
    case 0x7F433F28u: goto label_7F433F28;
    case 0x7F433F2Cu: goto label_7F433F2C;
    case 0x7F433F30u: goto label_7F433F30;
    case 0x7F433F34u: goto label_7F433F34;
    case 0x7F433F38u: goto label_7F433F38;
    case 0x7F433F3Cu: goto label_7F433F3C;
    case 0x7F433F40u: goto label_7F433F40;
    case 0x7F433F44u: goto label_7F433F44;
    case 0x7F433F48u: goto label_7F433F48;
    case 0x7F433F4Cu: goto label_7F433F4C;
    case 0x7F433F50u: goto label_7F433F50;
    case 0x7F433F54u: goto label_7F433F54;
    case 0x7F433F58u: goto label_7F433F58;
    case 0x7F433F5Cu: goto label_7F433F5C;
    case 0x7F433F60u: goto label_7F433F60;
    case 0x7F433F64u: goto label_7F433F64;
    case 0x7F433F68u: goto label_7F433F68;
    case 0x7F433F6Cu: goto label_7F433F6C;
    case 0x7F433F70u: goto label_7F433F70;
    case 0x7F433F74u: goto label_7F433F74;
    case 0x7F433F78u: goto label_7F433F78;
    case 0x7F433F7Cu: goto label_7F433F7C;
    case 0x7F433F80u: goto label_7F433F80;
    case 0x7F433F84u: goto label_7F433F84;
    case 0x7F433F88u: goto label_7F433F88;
    case 0x7F433F8Cu: goto label_7F433F8C;
    case 0x7F433F90u: goto label_7F433F90;
    case 0x7F433F94u: goto label_7F433F94;
    case 0x7F433F98u: goto label_7F433F98;
    case 0x7F433F9Cu: goto label_7F433F9C;
    case 0x7F433FA0u: goto label_7F433FA0;
    case 0x7F433FA4u: goto label_7F433FA4;
    case 0x7F433FA8u: goto label_7F433FA8;
    case 0x7F433FACu: goto label_7F433FAC;
    case 0x7F433FB0u: goto label_7F433FB0;
    case 0x7F433FB4u: goto label_7F433FB4;
    case 0x7F433FB8u: goto label_7F433FB8;
    case 0x7F433FBCu: goto label_7F433FBC;
    case 0x7F433FC0u: goto label_7F433FC0;
    case 0x7F433FC4u: goto label_7F433FC4;
    case 0x7F433FC8u: goto label_7F433FC8;
    case 0x7F433FCCu: goto label_7F433FCC;
    case 0x7F433FD0u: goto label_7F433FD0;
    case 0x7F433FD4u: goto label_7F433FD4;
    case 0x7F433FD8u: goto label_7F433FD8;
    case 0x7F433FDCu: goto label_7F433FDC;
    case 0x7F433FE0u: goto label_7F433FE0;
    case 0x7F433FE4u: goto label_7F433FE4;
    case 0x7F433FE8u: goto label_7F433FE8;
    case 0x7F433FECu: goto label_7F433FEC;
    case 0x7F433FF0u: goto label_7F433FF0;
    case 0x7F433FF4u: goto label_7F433FF4;
    case 0x7F433FF8u: goto label_7F433FF8;
    case 0x7F433FFCu: goto label_7F433FFC;
    case 0x7F434000u: goto label_7F434000;
    case 0x7F434004u: goto label_7F434004;
    case 0x7F434008u: goto label_7F434008;
    case 0x7F43400Cu: goto label_7F43400C;
    case 0x7F434010u: goto label_7F434010;
    case 0x7F434014u: goto label_7F434014;
    case 0x7F434018u: goto label_7F434018;
    case 0x7F43401Cu: goto label_7F43401C;
    case 0x7F434020u: goto label_7F434020;
    case 0x7F434024u: goto label_7F434024;
    case 0x7F434028u: goto label_7F434028;
    case 0x7F43402Cu: goto label_7F43402C;
    case 0x7F434030u: goto label_7F434030;
    case 0x7F434034u: goto label_7F434034;
    case 0x7F434038u: goto label_7F434038;
    case 0x7F43403Cu: goto label_7F43403C;
    case 0x7F434040u: goto label_7F434040;
    case 0x7F434044u: goto label_7F434044;
    case 0x7F434048u: goto label_7F434048;
    case 0x7F43404Cu: goto label_7F43404C;
    case 0x7F434050u: goto label_7F434050;
    case 0x7F434054u: goto label_7F434054;
    case 0x7F434058u: goto label_7F434058;
    case 0x7F43405Cu: goto label_7F43405C;
    case 0x7F434060u: goto label_7F434060;
    case 0x7F434064u: goto label_7F434064;
    case 0x7F434068u: goto label_7F434068;
    case 0x7F43406Cu: goto label_7F43406C;
    case 0x7F434070u: goto label_7F434070;
    case 0x7F434074u: goto label_7F434074;
    case 0x7F434078u: goto label_7F434078;
    case 0x7F43407Cu: goto label_7F43407C;
    case 0x7F434080u: goto label_7F434080;
    case 0x7F434084u: goto label_7F434084;
    case 0x7F434088u: goto label_7F434088;
    case 0x7F43408Cu: goto label_7F43408C;
    case 0x7F434090u: goto label_7F434090;
    case 0x7F434094u: goto label_7F434094;
    case 0x7F434098u: goto label_7F434098;
    case 0x7F43409Cu: goto label_7F43409C;
    case 0x7F4340A0u: goto label_7F4340A0;
    case 0x7F4340A4u: goto label_7F4340A4;
    case 0x7F4340A8u: goto label_7F4340A8;
    case 0x7F4340ACu: goto label_7F4340AC;
    case 0x7F4340B0u: goto label_7F4340B0;
    case 0x7F4340B4u: goto label_7F4340B4;
    case 0x7F4340B8u: goto label_7F4340B8;
    case 0x7F4340BCu: goto label_7F4340BC;
    case 0x7F4340C0u: goto label_7F4340C0;
    case 0x7F4340C4u: goto label_7F4340C4;
    case 0x7F4340C8u: goto label_7F4340C8;
    case 0x7F4340CCu: goto label_7F4340CC;
    case 0x7F4340D0u: goto label_7F4340D0;
    case 0x7F4340D4u: goto label_7F4340D4;
    case 0x7F4340D8u: goto label_7F4340D8;
    case 0x7F4340DCu: goto label_7F4340DC;
    case 0x7F4340E0u: goto label_7F4340E0;
    case 0x7F4340E4u: goto label_7F4340E4;
    case 0x7F4340E8u: goto label_7F4340E8;
    default: return;
    }
label_7F4300EC:
    ctx->pc = 0x7F4300ECu;
    ctx->downcount -= 1;
    // 7F4300EC: bl      0x7F205744
    {
            ctx->lr = 0x7F4300F0u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F4300F0:
    ctx->pc = 0x7F4300F0u;
    ctx->downcount -= 4;
    // 7F4300F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4300F4:
    ctx->pc = 0x7F4300F4u;
    // 7F4300F4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4300F8:
    ctx->pc = 0x7F4300F8u;
    // 7F4300F8: addi    r3, r3, 29520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F4300FC:
    ctx->pc = 0x7F4300FCu;
    // 7F4300FC: bl      0x7F205744
    {
            ctx->lr = 0x7F430100u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F430100:
    ctx->pc = 0x7F430100u;
    ctx->downcount -= 3;
    // 7F430100: lwz     r3, 3988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3988);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F430104:
    ctx->pc = 0x7F430104u;
    // 7F430104: cmpwi   r3, 0
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

label_7F430108:
    ctx->pc = 0x7F430108u;
    // 7F430108: bc    12, 2, 0x7F430114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430114;
        }
    }

label_7F43010C:
    ctx->pc = 0x7F43010Cu;
    ctx->downcount -= 2;
    // 7F43010C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F430110:
    ctx->pc = 0x7F430110u;
    // 7F430110: bl      0x7F3C7728
    {
            ctx->lr = 0x7F430114u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F430114:
    ctx->pc = 0x7F430114u;
    ctx->downcount -= 4;
    // 7F430114: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F430118:
    ctx->pc = 0x7F430118u;
    // 7F430118: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F43011C:
    ctx->pc = 0x7F43011Cu;
    // 7F43011C: stw     r0, 3992(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430120:
    ctx->pc = 0x7F430120u;
    // 7F430120: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F430124:
    ctx->downcount -= 3;
    // 7F430124: addi    r3, r31, 3888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3888);

label_7F430128:
    // 7F430128: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F43012C:
    // 7F43012C: bl      0x7F01D540
    {
            ctx->lr = 0x7F430130u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F430130:
    ctx->downcount -= 4;
    // 7F430130: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F430134:
    // 7F430134: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_7F430138:
    // 7F430138: cmpwi   r30, 2
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

label_7F43013C:
    // 7F43013C: bc    12, 0, 0x7F430124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430124u;
                return;
            }
            goto label_7F430124;
        }
    }

label_7F430140:
    ctx->pc = 0x7F430140u;
    ctx->downcount -= 16;
    // 7F430140: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430144:
    ctx->pc = 0x7F430144u;
    // 7F430144: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430148:
    ctx->pc = 0x7F430148u;
    // 7F430148: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43014C:
    ctx->pc = 0x7F43014Cu;
    // 7F43014C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F430150:
    ctx->pc = 0x7F430150u;
    // 7F430150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F430154:
    ctx->pc = 0x7F430154u;
    ctx->downcount -= 27;
    // 7F430154: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F430158:
    ctx->pc = 0x7F430158u;
    // 7F430158: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43015C:
    ctx->pc = 0x7F43015Cu;
    // 7F43015C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F430160:
    ctx->pc = 0x7F430160u;
    // 7F430160: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430164:
    ctx->pc = 0x7F430164u;
    // 7F430164: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F430168:
    ctx->pc = 0x7F430168u;
    // 7F430168: stmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43016C:
    ctx->pc = 0x7F43016Cu;
    // 7F43016C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F430170:
    ctx->pc = 0x7F430170u;
    // 7F430170: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F430174:
    ctx->pc = 0x7F430174u;
    // 7F430174: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F430178:
    ctx->pc = 0x7F430178u;
    // 7F430178: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F43017C:
    ctx->pc = 0x7F43017Cu;
    // 7F43017C: lwz     r4, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430180:
    ctx->pc = 0x7F430180u;
    // 7F430180: and   r3, r7, r0
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F430184:
    ctx->pc = 0x7F430184u;
    // 7F430184: and   r0, r4, r6
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[6];
    }

label_7F430188:
    ctx->pc = 0x7F430188u;
    // 7F430188: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F43018C:
    ctx->pc = 0x7F43018Cu;
    // 7F43018C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F430190:
    ctx->pc = 0x7F430190u;
    // 7F430190: or.   r0, r3, r0
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

label_7F430194:
    ctx->pc = 0x7F430194u;
    // 7F430194: bc    12, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F430198:
    ctx->pc = 0x7F430198u;
    ctx->downcount -= 3;
    // 7F430198: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43019C:
    ctx->pc = 0x7F43019Cu;
    // 7F43019C: rlwinm. r0, r0, 0, 31, 31
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

label_7F4301A0:
    ctx->pc = 0x7F4301A0u;
    // 7F4301A0: bc    12, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F4301A4:
    ctx->pc = 0x7F4301A4u;
    ctx->downcount -= 11;
    // 7F4301A4: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F4301A8:
    ctx->pc = 0x7F4301A8u;
    // 7F4301A8: lwz     r4, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4301AC:
    ctx->pc = 0x7F4301ACu;
    // 7F4301AC: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F4301B0:
    ctx->pc = 0x7F4301B0u;
    // 7F4301B0: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4301B4:
    ctx->pc = 0x7F4301B4u;
    // 7F4301B4: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F4301B8:
    ctx->pc = 0x7F4301B8u;
    // 7F4301B8: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F4301BC:
    ctx->pc = 0x7F4301BCu;
    // 7F4301BC: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F4301C0:
    ctx->pc = 0x7F4301C0u;
    // 7F4301C0: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F4301C4:
    ctx->pc = 0x7F4301C4u;
    // 7F4301C4: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F4301C8:
    ctx->pc = 0x7F4301C8u;
    // 7F4301C8: or.   r0, r3, r0
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

label_7F4301CC:
    ctx->pc = 0x7F4301CCu;
    // 7F4301CC: bc    12, 2, 0x7F43023C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43023C;
        }
    }

label_7F4301D0:
    ctx->pc = 0x7F4301D0u;
    ctx->downcount -= 6;
    // 7F4301D0: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F4301D4:
    ctx->pc = 0x7F4301D4u;
    // 7F4301D4: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F4301D8:
    ctx->pc = 0x7F4301D8u;
    // 7F4301D8: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F4301DC:
    ctx->pc = 0x7F4301DCu;
    // 7F4301DC: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4301E0:
    ctx->pc = 0x7F4301E0u;
    // 7F4301E0: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F4301E4:
    ctx->pc = 0x7F4301E4u;
    // 7F4301E4: bl      0x80025FFC
    {
            ctx->lr = 0x7F4301E8u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F4301E8:
    ctx->pc = 0x7F4301E8u;
    ctx->downcount -= 3;
    // 7F4301E8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4301EC:
    ctx->pc = 0x7F4301ECu;
    // 7F4301EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4301F0:
    ctx->pc = 0x7F4301F0u;
    // 7F4301F0: bl      0x7F114F50
    {
            ctx->lr = 0x7F4301F4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F4301F4:
    ctx->pc = 0x7F4301F4u;
    ctx->downcount -= 4;
    // 7F4301F4: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F4301F8:
    ctx->pc = 0x7F4301F8u;
    // 7F4301F8: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F4301FC:
    ctx->pc = 0x7F4301FCu;
    // 7F4301FC: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F430200:
    ctx->pc = 0x7F430200u;
    // 7F430200: bl      0x80025FFC
    {
            ctx->lr = 0x7F430204u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F430204:
    ctx->pc = 0x7F430204u;
    ctx->downcount -= 2;
    // 7F430204: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F430208:
    ctx->pc = 0x7F430208u;
    // 7F430208: bl      0x80026080
    {
            ctx->lr = 0x7F43020Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F43020C:
    ctx->pc = 0x7F43020Cu;
    ctx->downcount -= 4;
    // 7F43020C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430210:
    ctx->pc = 0x7F430210u;
    // 7F430210: lfs     f0, -9984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430210u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430214:
    ctx->pc = 0x7F430214u;
    // 7F430214: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F430214u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F430218:
    ctx->pc = 0x7F430218u;
    // 7F430218: bc    12, 2, 0x7F43023C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43023C;
        }
    }

label_7F43021C:
    ctx->pc = 0x7F43021Cu;
    ctx->downcount -= 4;
    // 7F43021C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F430220:
    ctx->pc = 0x7F430220u;
    // 7F430220: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F430224:
    ctx->pc = 0x7F430224u;
    // 7F430224: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F430228:
    ctx->pc = 0x7F430228u;
    // 7F430228: bl      0x7F22F07C
    {
            ctx->lr = 0x7F43022Cu;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F43022C:
    ctx->pc = 0x7F43022Cu;
    ctx->downcount -= 4;
    // 7F43022C: lwz     r3, 4008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F430230:
    ctx->pc = 0x7F430230u;
    // 7F430230: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F430234:
    ctx->pc = 0x7F430234u;
    // 7F430234: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F430238:
    ctx->pc = 0x7F430238u;
    // 7F430238: bl      0x7F018110
    {
            ctx->lr = 0x7F43023Cu;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F43023C:
    ctx->pc = 0x7F43023Cu;
    ctx->downcount -= 10;
    // 7F43023C: lwz     r3, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F430240:
    ctx->pc = 0x7F430240u;
    // 7F430240: lis     r0, 4096
    ctx->gpr[0] = ((u32)(s32)(4096) << 16);

label_7F430244:
    ctx->pc = 0x7F430244u;
    // 7F430244: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F430248:
    ctx->pc = 0x7F430248u;
    // 7F430248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43024C:
    ctx->pc = 0x7F43024Cu;
    // 7F43024C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F430250:
    ctx->pc = 0x7F430250u;
    // 7F430250: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F430254:
    ctx->pc = 0x7F430254u;
    // 7F430254: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F430258:
    ctx->pc = 0x7F430258u;
    // 7F430258: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F43025C:
    ctx->pc = 0x7F43025Cu;
    // 7F43025C: or.   r0, r3, r0
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

label_7F430260:
    ctx->pc = 0x7F430260u;
    // 7F430260: bc    4, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F430264:
    ctx->pc = 0x7F430264u;
    ctx->downcount -= 3;
    // 7F430264: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430268:
    ctx->pc = 0x7F430268u;
    // 7F430268: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43026C:
    ctx->pc = 0x7F43026Cu;
    // 7F43026C: bl      0x7F014DF8
    {
            ctx->lr = 0x7F430270u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F430270:
    ctx->pc = 0x7F430270u;
    ctx->downcount -= 2;
    // 7F430270: cmpwi   r3, 0
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

label_7F430274:
    ctx->pc = 0x7F430274u;
    // 7F430274: bc    12, 1, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F430278:
    ctx->pc = 0x7F430278u;
    ctx->downcount -= 3;
    // 7F430278: lwz     r0, 3992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43027C:
    ctx->pc = 0x7F43027Cu;
    // 7F43027C: cmpwi   r0, 0
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

label_7F430280:
    ctx->pc = 0x7F430280u;
    // 7F430280: bc    4, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F430284:
    ctx->pc = 0x7F430284u;
    ctx->downcount -= 3;
    // 7F430284: lwz     r0, 2432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430288:
    ctx->pc = 0x7F430288u;
    // 7F430288: cmplwi  r0, 0x0000
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

label_7F43028C:
    ctx->pc = 0x7F43028Cu;
    // 7F43028C: bc    12, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F430290:
    ctx->pc = 0x7F430290u;
    ctx->downcount -= 3;
    // 7F430290: lwz     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430294:
    ctx->pc = 0x7F430294u;
    // 7F430294: cmpwi   r0, 0
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

label_7F430298:
    ctx->pc = 0x7F430298u;
    // 7F430298: bc    4, 2, 0x7F4302D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4302D8;
        }
    }

label_7F43029C:
    ctx->pc = 0x7F43029Cu;
    ctx->downcount -= 14;
    // 7F43029C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F4302A0:
    ctx->pc = 0x7F4302A0u;
    // 7F4302A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4302A4:
    ctx->pc = 0x7F4302A4u;
    // 7F4302A4: stw     r6, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4302A8:
    ctx->pc = 0x7F4302A8u;
    // 7F4302A8: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F4302AC:
    ctx->pc = 0x7F4302ACu;
    // 7F4302AC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F4302B0:
    ctx->pc = 0x7F4302B0u;
    // 7F4302B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F4302B4:
    ctx->pc = 0x7F4302B4u;
    // 7F4302B4: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F4302B8:
    ctx->pc = 0x7F4302B8u;
    // 7F4302B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4302BC:
    ctx->pc = 0x7F4302BCu;
    // 7F4302BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4302C0:
    ctx->pc = 0x7F4302C0u;
    // 7F4302C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4302C4:
    ctx->pc = 0x7F4302C4u;
    // 7F4302C4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4302C8:
    ctx->pc = 0x7F4302C8u;
    // 7F4302C8: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F4302CC:
    ctx->pc = 0x7F4302CCu;
    // 7F4302CC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F4302D0:
    ctx->pc = 0x7F4302D0u;
    // 7F4302D0: bl      0x800501FC
    {
            ctx->lr = 0x7F4302D4u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F4302D4:
    ctx->pc = 0x7F4302D4u;
    ctx->downcount -= 1;
    // 7F4302D4: stw     r3, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4302D8:
    ctx->pc = 0x7F4302D8u;
    ctx->downcount -= 16;
    // 7F4302D8: lmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4302DC:
    ctx->pc = 0x7F4302DCu;
    // 7F4302DC: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4302E0:
    ctx->pc = 0x7F4302E0u;
    // 7F4302E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4302E4:
    ctx->pc = 0x7F4302E4u;
    // 7F4302E4: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F4302E8:
    ctx->pc = 0x7F4302E8u;
    // 7F4302E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4302EC:
    ctx->pc = 0x7F4302ECu;
    ctx->downcount -= 20;
    // 7F4302EC: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4302F0:
    ctx->pc = 0x7F4302F0u;
    // 7F4302F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4302F4:
    ctx->pc = 0x7F4302F4u;
    // 7F4302F4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4302F8:
    ctx->pc = 0x7F4302F8u;
    // 7F4302F8: stmw     r25, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4302FC:
    ctx->pc = 0x7F4302FCu;
    // 7F4302FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F430300:
    ctx->pc = 0x7F430300u;
    // 7F430300: addi    r26, r31, 432
    ctx->gpr[26] = ctx->gpr[31] + (u32)(s32)(432);

label_7F430304:
    ctx->pc = 0x7F430304u;
    // 7F430304: lwz     r5, 2432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F430308:
    ctx->pc = 0x7F430308u;
    // 7F430308: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F43030C:
    ctx->pc = 0x7F43030Cu;
    // 7F43030C: cmplwi  r5, 0x0000
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

label_7F430310:
    ctx->pc = 0x7F430310u;
    // 7F430310: bc    12, 2, 0x7F430320
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430320;
        }
    }

label_7F430314:
    ctx->pc = 0x7F430314u;
    ctx->downcount -= 3;
    // 7F430314: addi    r4, r31, 2696
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2696);

label_7F430318:
    ctx->pc = 0x7F430318u;
    // 7F430318: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F43031C:
    ctx->pc = 0x7F43031Cu;
    // 7F43031C: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F430320u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F430320:
    ctx->pc = 0x7F430320u;
    ctx->downcount -= 5;
    // 7F430320: lwz     r5, 2476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F430324:
    ctx->pc = 0x7F430324u;
    // 7F430324: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430328:
    ctx->pc = 0x7F430328u;
    // 7F430328: addi    r4, r31, 2824
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2824);

label_7F43032C:
    ctx->pc = 0x7F43032Cu;
    // 7F43032C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F430330:
    ctx->pc = 0x7F430330u;
    // 7F430330: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F430334u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F430334:
    ctx->pc = 0x7F430334u;
    ctx->downcount -= 4;
    // 7F430334: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F430338:
    ctx->pc = 0x7F430338u;
    // 7F430338: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F43033C:
    ctx->pc = 0x7F43033Cu;
    // 7F43033C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F430340:
    ctx->pc = 0x7F430340u;
    // 7F430340: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F430344:
    ctx->downcount -= 4;
    // 7F430344: addi    r0, r30, 2520
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(2520);

label_7F430348:
    ctx->pc = 0x7F430348u;
    // 7F430348: lwzx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F43034C:
    // 7F43034C: cmplwi  r5, 0x0000
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

label_7F430350:
    // 7F430350: bc    12, 2, 0x7F43036C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43036C;
        }
    }

label_7F430354:
    ctx->downcount -= 6;
    // 7F430354: addi    r3, r29, 832
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(832);

label_7F430358:
    // 7F430358: addi    r4, r28, 2952
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(2952);

label_7F43035C:
    // 7F43035C: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F430360:
    // 7F430360: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F430364:
    // 7F430364: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F430368:
    // 7F430368: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F43036Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F43036C:
    ctx->downcount -= 6;
    // 7F43036C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F430370:
    // 7F430370: addi    r29, r29, 400
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(400);

label_7F430374:
    // 7F430374: cmpwi   r27, 4
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

label_7F430378:
    // 7F430378: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F43037C:
    // 7F43037C: addi    r28, r28, 128
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(128);

label_7F430380:
    // 7F430380: bc    12, 0, 0x7F430344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430344u;
                return;
            }
            goto label_7F430344;
        }
    }

label_7F430384:
    ctx->pc = 0x7F430384u;
    ctx->downcount -= 3;
    // 7F430384: lwz     r0, 2432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430388:
    ctx->pc = 0x7F430388u;
    // 7F430388: cmplwi  r0, 0x0000
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

label_7F43038C:
    ctx->pc = 0x7F43038Cu;
    // 7F43038C: bc    12, 2, 0x7F4303A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4303A0;
        }
    }

label_7F430390:
    ctx->pc = 0x7F430390u;
    ctx->downcount -= 2;
    // 7F430390: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F430394:
    ctx->pc = 0x7F430394u;
    // 7F430394: bl      0x7F023170
    {
            ctx->lr = 0x7F430398u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F430398:
    ctx->pc = 0x7F430398u;
    ctx->downcount -= 2;
    // 7F430398: addi    r3, r31, 2432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2432);

label_7F43039C:
    ctx->pc = 0x7F43039Cu;
    // 7F43039C: bl      0x7F0427FC
    {
            ctx->lr = 0x7F4303A0u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F4303A0:
    ctx->pc = 0x7F4303A0u;
    ctx->downcount -= 2;
    // 7F4303A0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F4303A4:
    ctx->pc = 0x7F4303A4u;
    // 7F4303A4: bl      0x7F023170
    {
            ctx->lr = 0x7F4303A8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F4303A8:
    ctx->pc = 0x7F4303A8u;
    ctx->downcount -= 2;
    // 7F4303A8: addi    r3, r31, 2476
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2476);

label_7F4303AC:
    ctx->pc = 0x7F4303ACu;
    // 7F4303AC: bl      0x7F0427FC
    {
            ctx->lr = 0x7F4303B0u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F4303B0:
    ctx->pc = 0x7F4303B0u;
    ctx->downcount -= 3;
    // 7F4303B0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F4303B4:
    ctx->pc = 0x7F4303B4u;
    // 7F4303B4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F4303B8:
    ctx->pc = 0x7F4303B8u;
    // 7F4303B8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4303BC:
    ctx->downcount -= 4;
    // 7F4303BC: add   r27, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F4303C0:
    ctx->pc = 0x7F4303C0u;
    // 7F4303C0: lwz     r0, 2520(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4303C4:
    // 7F4303C4: cmplwi  r0, 0x0000
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

label_7F4303C8:
    // 7F4303C8: bc    12, 2, 0x7F4303E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4303E0;
        }
    }

label_7F4303CC:
    ctx->downcount -= 3;
    // 7F4303CC: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F4303D0:
    // 7F4303D0: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4303D4:
    // 7F4303D4: bl      0x7F023170
    {
            ctx->lr = 0x7F4303D8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F4303D8:
    ctx->downcount -= 2;
    // 7F4303D8: addi    r3, r27, 2520
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(2520);

label_7F4303DC:
    // 7F4303DC: bl      0x7F0427FC
    {
            ctx->lr = 0x7F4303E0u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F4303E0:
    ctx->downcount -= 5;
    // 7F4303E0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F4303E4:
    // 7F4303E4: addi    r29, r29, 44
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(44);

label_7F4303E8:
    // 7F4303E8: cmpwi   r26, 4
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4303EC:
    // 7F4303EC: addi    r28, r28, 400
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(400);

label_7F4303F0:
    // 7F4303F0: bc    12, 0, 0x7F4303BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4303BCu;
                return;
            }
            goto label_7F4303BC;
        }
    }

label_7F4303F4:
    ctx->pc = 0x7F4303F4u;
    ctx->downcount -= 3;
    // 7F4303F4: lwz     r3, 3992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3992);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4303F8:
    ctx->pc = 0x7F4303F8u;
    // 7F4303F8: cmpwi   r3, 0
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

label_7F4303FC:
    ctx->pc = 0x7F4303FCu;
    // 7F4303FC: bc    4, 1, 0x7F430878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430878;
        }
    }

label_7F430400:
    ctx->pc = 0x7F430400u;
    ctx->downcount -= 5;
    // 7F430400: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F430404:
    ctx->pc = 0x7F430404u;
    // 7F430404: stw     r0, 3992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430408:
    ctx->pc = 0x7F430408u;
    // 7F430408: lwz     r0, 3992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43040C:
    ctx->pc = 0x7F43040Cu;
    // 7F43040C: cmpwi   r0, 40
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

label_7F430410:
    ctx->pc = 0x7F430410u;
    // 7F430410: bc    12, 2, 0x7F4305E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4305E8;
        }
    }

label_7F430414:
    ctx->pc = 0x7F430414u;
    ctx->downcount -= 1;
    // 7F430414: bc    4, 0, 0x7F43043C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43043C;
        }
    }

label_7F430418:
    ctx->pc = 0x7F430418u;
    ctx->downcount -= 2;
    // 7F430418: cmpwi   r0, 18
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

label_7F43041C:
    ctx->pc = 0x7F43041Cu;
    // 7F43041C: bc    12, 2, 0x7F43070C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43070C;
        }
    }

label_7F430420:
    ctx->pc = 0x7F430420u;
    ctx->downcount -= 1;
    // 7F430420: bc    4, 0, 0x7F430430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430430;
        }
    }

label_7F430424:
    ctx->pc = 0x7F430424u;
    ctx->downcount -= 2;
    // 7F430424: cmpwi   r0, 0
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

label_7F430428:
    ctx->pc = 0x7F430428u;
    // 7F430428: bc    12, 2, 0x7F43083C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43083C;
        }
    }

label_7F43042C:
    ctx->pc = 0x7F43042Cu;
    ctx->downcount -= 1;
    // 7F43042C: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F430430:
    ctx->pc = 0x7F430430u;
    ctx->downcount -= 2;
    // 7F430430: cmpwi   r0, 35
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(35);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F430434:
    ctx->pc = 0x7F430434u;
    // 7F430434: bc    12, 2, 0x7F430624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430624;
        }
    }

label_7F430438:
    ctx->pc = 0x7F430438u;
    ctx->downcount -= 1;
    // 7F430438: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F43043C:
    ctx->pc = 0x7F43043Cu;
    ctx->downcount -= 2;
    // 7F43043C: cmpwi   r0, 59
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(59);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F430440:
    ctx->pc = 0x7F430440u;
    // 7F430440: bc    12, 2, 0x7F430454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430454;
        }
    }

label_7F430444:
    ctx->pc = 0x7F430444u;
    ctx->downcount -= 1;
    // 7F430444: bc    4, 0, 0x7F430878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430878;
        }
    }

label_7F430448:
    ctx->pc = 0x7F430448u;
    ctx->downcount -= 2;
    // 7F430448: cmpwi   r0, 43
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(43);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F43044C:
    ctx->pc = 0x7F43044Cu;
    // 7F43044C: bc    12, 2, 0x7F4304A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4304A4;
        }
    }

label_7F430450:
    ctx->pc = 0x7F430450u;
    ctx->downcount -= 1;
    // 7F430450: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F430454:
    ctx->pc = 0x7F430454u;
    ctx->downcount -= 15;
    // 7F430454: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430454u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430458:
    ctx->pc = 0x7F430458u;
    // 7F430458: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F43045C:
    ctx->pc = 0x7F43045Cu;
    // 7F43045C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F430460:
    ctx->pc = 0x7F430460u;
    // 7F430460: li      r5, 5000
    ctx->gpr[5] = (u32)(s32)(5000);

label_7F430464:
    ctx->pc = 0x7F430464u;
    // 7F430464: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430464u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430468:
    ctx->pc = 0x7F430468u;
    // 7F430468: li      r6, 7500
    ctx->gpr[6] = (u32)(s32)(7500);

label_7F43046C:
    ctx->pc = 0x7F43046Cu;
    // 7F43046C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F430470:
    ctx->pc = 0x7F430470u;
    // 7F430470: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F430474:
    ctx->pc = 0x7F430474u;
    // 7F430474: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430474u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430478:
    ctx->pc = 0x7F430478u;
    // 7F430478: li      r9, 9
    ctx->gpr[9] = (u32)(s32)(9);

label_7F43047C:
    ctx->pc = 0x7F43047Cu;
    // 7F43047C: li      r10, 43
    ctx->gpr[10] = (u32)(s32)(43);

label_7F430480:
    ctx->pc = 0x7F430480u;
    // 7F430480: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430484:
    ctx->pc = 0x7F430484u;
    // 7F430484: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430484u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430488:
    ctx->pc = 0x7F430488u;
    // 7F430488: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43048C:
    ctx->pc = 0x7F43048Cu;
    // 7F43048C: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F430490u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F430490:
    ctx->pc = 0x7F430490u;
    ctx->downcount -= 4;
    // 7F430490: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430494:
    ctx->pc = 0x7F430494u;
    // 7F430494: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F430498:
    ctx->pc = 0x7F430498u;
    // 7F430498: addi    r3, r3, 29768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29768);

label_7F43049C:
    ctx->pc = 0x7F43049Cu;
    // 7F43049C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F4304A0u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F4304A0:
    ctx->pc = 0x7F4304A0u;
    ctx->downcount -= 1;
    // 7F4304A0: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F4304A4:
    ctx->pc = 0x7F4304A4u;
    ctx->downcount -= 4;
    // 7F4304A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4304A8:
    ctx->pc = 0x7F4304A8u;
    // 7F4304A8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4304AC:
    ctx->pc = 0x7F4304ACu;
    // 7F4304AC: addi    r3, r3, 29504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29504);

label_7F4304B0:
    ctx->pc = 0x7F4304B0u;
    // 7F4304B0: bl      0x7F205744
    {
            ctx->lr = 0x7F4304B4u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F4304B4:
    ctx->pc = 0x7F4304B4u;
    ctx->downcount -= 4;
    // 7F4304B4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4304B8:
    ctx->pc = 0x7F4304B8u;
    // 7F4304B8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4304BC:
    ctx->pc = 0x7F4304BCu;
    // 7F4304BC: addi    r3, r3, 29520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F4304C0:
    ctx->pc = 0x7F4304C0u;
    // 7F4304C0: bl      0x7F205744
    {
            ctx->lr = 0x7F4304C4u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F4304C4:
    ctx->pc = 0x7F4304C4u;
    ctx->downcount -= 6;
    // 7F4304C4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F4304C8:
    ctx->pc = 0x7F4304C8u;
    // 7F4304C8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F4304CC:
    ctx->pc = 0x7F4304CCu;
    // 7F4304CC: addi    r27, r3, -2104
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-2104);

label_7F4304D0:
    ctx->pc = 0x7F4304D0u;
    // 7F4304D0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F4304D4:
    ctx->pc = 0x7F4304D4u;
    // 7F4304D4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4304D8:
    ctx->pc = 0x7F4304D8u;
    // 7F4304D8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F4304DC:
    ctx->pc = 0x7F4304DCu;
    ctx->downcount -= 3;
    // 7F4304DC: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4304E0:
    // 7F4304E0: cmpwi   r0, 0
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

label_7F4304E4:
    // 7F4304E4: bc    12, 2, 0x7F430554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430554;
        }
    }

label_7F4304E8:
    ctx->downcount -= 6;
    // 7F4304E8: addi    r26, r28, 2520
    ctx->gpr[26] = ctx->gpr[28] + (u32)(s32)(2520);

label_7F4304EC:
    ctx->pc = 0x7F4304ECu;
    // 7F4304EC: lwz     r4, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4304F0:
    // 7F4304F0: add   r26, r31, r26
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F4304F4:
    // 7F4304F4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F4304F8:
    // 7F4304F8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F4304FC:
    // 7F4304FC: bl      0x7F04272C
    {
            ctx->lr = 0x7F430500u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F430500:
    ctx->downcount -= 4;
    // 7F430500: addi    r4, r29, 2952
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2952);

label_7F430504:
    // 7F430504: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430508:
    // 7F430508: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F43050C:
    // 7F43050C: bl      0x7F042B20
    {
            ctx->lr = 0x7F430510u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F430510:
    ctx->downcount -= 15;
    // 7F430510: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430514:
    // 7F430514: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F430518:
    // 7F430518: addi    r4, r3, 29536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29536);

label_7F43051C:
    ctx->pc = 0x7F43051Cu;
    // 7F43051C: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430520:
    ctx->pc = 0x7F430520u;
    // 7F430520: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430524:
    // 7F430524: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430528:
    ctx->pc = 0x7F430528u;
    // 7F430528: lfd     f1, -9968(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430528u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9968);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43052C:
    // 7F43052C: add   r5, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F430530:
    // 7F430530: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F430534:
    ctx->pc = 0x7F430534u;
    // 7F430534: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430538:
    // 7F430538: addi    r3, r5, 832
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(832);

label_7F43053C:
    ctx->pc = 0x7F43053Cu;
    // 7F43053C: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43053Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430540:
    ctx->pc = 0x7F430540u;
    // 7F430540: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F430540u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F430544:
    ctx->pc = 0x7F430544u;
    // 7F430544: stfs     f0, 836(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F430544u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(836);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430548:
    // 7F430548: bl      0x7F023170
    {
            ctx->lr = 0x7F43054Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F43054C:
    ctx->downcount -= 2;
    // 7F43054C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430550:
    // 7F430550: bl      0x7F0427FC
    {
            ctx->lr = 0x7F430554u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F430554:
    ctx->downcount -= 6;
    // 7F430554: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F430558:
    // 7F430558: addi    r29, r29, 128
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(128);

label_7F43055C:
    // 7F43055C: cmpwi   r25, 4
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F430560:
    // 7F430560: addi    r28, r28, 44
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(44);

label_7F430564:
    // 7F430564: addi    r30, r30, 400
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(400);

label_7F430568:
    // 7F430568: bc    12, 0, 0x7F4304DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4304DCu;
                return;
            }
            goto label_7F4304DC;
        }
    }

label_7F43056C:
    ctx->pc = 0x7F43056Cu;
    ctx->downcount -= 2;
    // 7F43056C: addi    r3, r1, 160
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(160);

label_7F430570:
    ctx->pc = 0x7F430570u;
    // 7F430570: bl      0x80025A08
    {
            ctx->lr = 0x7F430574u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F430574:
    ctx->pc = 0x7F430574u;
    ctx->downcount -= 10;
    // 7F430574: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F430578:
    ctx->pc = 0x7F430578u;
    // 7F430578: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43057C:
    ctx->pc = 0x7F43057Cu;
    // 7F43057C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430580:
    ctx->pc = 0x7F430580u;
    // 7F430580: lfs     f2, -9960(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F430580u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430584:
    ctx->pc = 0x7F430584u;
    // 7F430584: lfs     f1, -9956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430584u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430588:
    ctx->pc = 0x7F430588u;
    // 7F430588: lfs     f0, -9952(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430588u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9952);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43058C:
    ctx->pc = 0x7F43058Cu;
    // 7F43058C: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43058Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F430590:
    ctx->pc = 0x7F430590u;
    // 7F430590: stfs     f1, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430594:
    ctx->pc = 0x7F430594u;
    // 7F430594: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430598:
    ctx->pc = 0x7F430598u;
    // 7F430598: bl      0x7F430934
    {
            ctx->lr = 0x7F43059Cu;
            goto label_7F430934;
    }

label_7F43059C:
    ctx->pc = 0x7F43059Cu;
    ctx->downcount -= 4;
    // 7F43059C: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F4305A0:
    ctx->pc = 0x7F4305A0u;
    // 7F4305A0: addi    r3, r1, 160
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(160);

label_7F4305A4:
    ctx->pc = 0x7F4305A4u;
    // 7F4305A4: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_7F4305A8:
    ctx->pc = 0x7F4305A8u;
    // 7F4305A8: bl      0x7F17A56C
    {
            ctx->lr = 0x7F4305ACu;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F4305AC:
    ctx->pc = 0x7F4305ACu;
    ctx->downcount -= 10;
    // 7F4305AC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F4305B0:
    ctx->pc = 0x7F4305B0u;
    // 7F4305B0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4305B4:
    ctx->pc = 0x7F4305B4u;
    // 7F4305B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4305B8:
    ctx->pc = 0x7F4305B8u;
    // 7F4305B8: lfs     f2, -9948(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4305B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4305BC:
    ctx->pc = 0x7F4305BCu;
    // 7F4305BC: lfs     f1, -9956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4305BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4305C0:
    ctx->pc = 0x7F4305C0u;
    // 7F4305C0: lfs     f0, -9944(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4305C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4305C4:
    ctx->pc = 0x7F4305C4u;
    // 7F4305C4: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4305C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F4305C8:
    ctx->pc = 0x7F4305C8u;
    // 7F4305C8: stfs     f1, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4305C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4305CC:
    ctx->pc = 0x7F4305CCu;
    // 7F4305CC: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4305CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4305D0:
    ctx->pc = 0x7F4305D0u;
    // 7F4305D0: bl      0x7F430934
    {
            ctx->lr = 0x7F4305D4u;
            goto label_7F430934;
    }

label_7F4305D4:
    ctx->pc = 0x7F4305D4u;
    ctx->downcount -= 4;
    // 7F4305D4: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F4305D8:
    ctx->pc = 0x7F4305D8u;
    // 7F4305D8: addi    r3, r1, 160
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(160);

label_7F4305DC:
    ctx->pc = 0x7F4305DCu;
    // 7F4305DC: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_7F4305E0:
    ctx->pc = 0x7F4305E0u;
    // 7F4305E0: bl      0x7F17A56C
    {
            ctx->lr = 0x7F4305E4u;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F4305E4:
    ctx->pc = 0x7F4305E4u;
    ctx->downcount -= 1;
    // 7F4305E4: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F4305E8:
    ctx->pc = 0x7F4305E8u;
    ctx->downcount -= 3;
    // 7F4305E8: addi    r25, r31, 2476
    ctx->gpr[25] = ctx->gpr[31] + (u32)(s32)(2476);

label_7F4305EC:
    ctx->pc = 0x7F4305ECu;
    // 7F4305EC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F4305F0:
    ctx->pc = 0x7F4305F0u;
    // 7F4305F0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F4305F4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F4305F4:
    ctx->pc = 0x7F4305F4u;
    ctx->downcount -= 4;
    // 7F4305F4: lwz     r4, 3976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4305F8:
    ctx->pc = 0x7F4305F8u;
    // 7F4305F8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F4305FC:
    ctx->pc = 0x7F4305FCu;
    // 7F4305FC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F430600:
    ctx->pc = 0x7F430600u;
    // 7F430600: bl      0x7F04272C
    {
            ctx->lr = 0x7F430604u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F430604:
    ctx->pc = 0x7F430604u;
    ctx->downcount -= 2;
    // 7F430604: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F430608:
    ctx->pc = 0x7F430608u;
    // 7F430608: bl      0x7F023170
    {
            ctx->lr = 0x7F43060Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F43060C:
    ctx->pc = 0x7F43060Cu;
    ctx->downcount -= 2;
    // 7F43060C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F430610:
    ctx->pc = 0x7F430610u;
    // 7F430610: bl      0x7F0427FC
    {
            ctx->lr = 0x7F430614u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F430614:
    ctx->pc = 0x7F430614u;
    ctx->downcount -= 3;
    // 7F430614: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F430618:
    ctx->pc = 0x7F430618u;
    // 7F430618: addi    r4, r31, 2824
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2824);

label_7F43061C:
    ctx->pc = 0x7F43061Cu;
    // 7F43061C: bl      0x7F042B20
    {
            ctx->lr = 0x7F430620u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F430620:
    ctx->pc = 0x7F430620u;
    ctx->downcount -= 1;
    // 7F430620: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F430624:
    ctx->pc = 0x7F430624u;
    ctx->downcount -= 15;
    // 7F430624: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430628:
    ctx->pc = 0x7F430628u;
    // 7F430628: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43062C:
    ctx->pc = 0x7F43062Cu;
    // 7F43062C: addi    r29, r3, 29504
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(29504);

label_7F430630:
    ctx->pc = 0x7F430630u;
    // 7F430630: lfs     f2, -9940(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430630u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430634:
    ctx->pc = 0x7F430634u;
    // 7F430634: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430638:
    ctx->pc = 0x7F430638u;
    // 7F430638: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430638u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43063C:
    ctx->pc = 0x7F43063Cu;
    // 7F43063C: addi    r28, r3, 29520
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F430640:
    ctx->pc = 0x7F430640u;
    // 7F430640: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F430644:
    ctx->pc = 0x7F430644u;
    // 7F430644: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430644u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430648:
    ctx->pc = 0x7F430648u;
    // 7F430648: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430648u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F43064C:
    ctx->pc = 0x7F43064Cu;
    // 7F43064C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430650:
    ctx->pc = 0x7F430650u;
    // 7F430650: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430650u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F430654:
    ctx->pc = 0x7F430654u;
    // 7F430654: stfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430654u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430658:
    ctx->pc = 0x7F430658u;
    // 7F430658: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430658u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43065C:
    ctx->pc = 0x7F43065Cu;
    // 7F43065C: bl      0x7F205744
    {
            ctx->lr = 0x7F430660u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F430660:
    ctx->pc = 0x7F430660u;
    ctx->downcount -= 4;
    // 7F430660: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430664:
    ctx->pc = 0x7F430664u;
    // 7F430664: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F430668:
    ctx->pc = 0x7F430668u;
    // 7F430668: addi    r3, r3, 29520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F43066C:
    ctx->pc = 0x7F43066Cu;
    // 7F43066C: bl      0x7F205744
    {
            ctx->lr = 0x7F430670u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F430670:
    ctx->pc = 0x7F430670u;
    ctx->downcount -= 10;
    // 7F430670: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430674:
    ctx->pc = 0x7F430674u;
    // 7F430674: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430674u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430678:
    ctx->pc = 0x7F430678u;
    // 7F430678: lfs     f2, -9940(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430678u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F43067C:
    ctx->pc = 0x7F43067Cu;
    // 7F43067C: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F430680:
    ctx->pc = 0x7F430680u;
    // 7F430680: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430680u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430684:
    ctx->pc = 0x7F430684u;
    // 7F430684: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430684u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F430688:
    ctx->pc = 0x7F430688u;
    // 7F430688: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430688u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F43068C:
    ctx->pc = 0x7F43068Cu;
    // 7F43068C: stfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F43068Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430690:
    ctx->pc = 0x7F430690u;
    // 7F430690: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430690u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430694:
    ctx->pc = 0x7F430694u;
    // 7F430694: bl      0x80025A08
    {
            ctx->lr = 0x7F430698u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F430698:
    ctx->pc = 0x7F430698u;
    ctx->downcount -= 10;
    // 7F430698: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F43069C:
    ctx->pc = 0x7F43069Cu;
    // 7F43069C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4306A0:
    ctx->pc = 0x7F4306A0u;
    // 7F4306A0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4306A4:
    ctx->pc = 0x7F4306A4u;
    // 7F4306A4: lfs     f2, -9936(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4306A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4306A8:
    ctx->pc = 0x7F4306A8u;
    // 7F4306A8: lfs     f1, -9984(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4306A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4306AC:
    ctx->pc = 0x7F4306ACu;
    // 7F4306AC: lfs     f0, -9932(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4306ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9932);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4306B0:
    ctx->pc = 0x7F4306B0u;
    // 7F4306B0: stfs     f2, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F4306B4:
    ctx->pc = 0x7F4306B4u;
    // 7F4306B4: stfs     f1, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4306B8:
    ctx->pc = 0x7F4306B8u;
    // 7F4306B8: stfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4306BC:
    ctx->pc = 0x7F4306BCu;
    // 7F4306BC: bl      0x7F430934
    {
            ctx->lr = 0x7F4306C0u;
            goto label_7F430934;
    }

label_7F4306C0:
    ctx->pc = 0x7F4306C0u;
    ctx->downcount -= 4;
    // 7F4306C0: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F4306C4:
    ctx->pc = 0x7F4306C4u;
    // 7F4306C4: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F4306C8:
    ctx->pc = 0x7F4306C8u;
    // 7F4306C8: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_7F4306CC:
    ctx->pc = 0x7F4306CCu;
    // 7F4306CC: bl      0x7F17A56C
    {
            ctx->lr = 0x7F4306D0u;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F4306D0:
    ctx->pc = 0x7F4306D0u;
    ctx->downcount -= 10;
    // 7F4306D0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F4306D4:
    ctx->pc = 0x7F4306D4u;
    // 7F4306D4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4306D8:
    ctx->pc = 0x7F4306D8u;
    // 7F4306D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4306DC:
    ctx->pc = 0x7F4306DCu;
    // 7F4306DC: lfs     f2, -9928(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4306DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4306E0:
    ctx->pc = 0x7F4306E0u;
    // 7F4306E0: lfs     f1, -9956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4306E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4306E4:
    ctx->pc = 0x7F4306E4u;
    // 7F4306E4: lfs     f0, -9924(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4306E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4306E8:
    ctx->pc = 0x7F4306E8u;
    // 7F4306E8: stfs     f2, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F4306EC:
    ctx->pc = 0x7F4306ECu;
    // 7F4306EC: stfs     f1, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4306F0:
    ctx->pc = 0x7F4306F0u;
    // 7F4306F0: stfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4306F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4306F4:
    ctx->pc = 0x7F4306F4u;
    // 7F4306F4: bl      0x7F430934
    {
            ctx->lr = 0x7F4306F8u;
            goto label_7F430934;
    }

label_7F4306F8:
    ctx->pc = 0x7F4306F8u;
    ctx->downcount -= 4;
    // 7F4306F8: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F4306FC:
    ctx->pc = 0x7F4306FCu;
    // 7F4306FC: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F430700:
    ctx->pc = 0x7F430700u;
    // 7F430700: addi    r4, r4, 75
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(75);

label_7F430704:
    ctx->pc = 0x7F430704u;
    // 7F430704: bl      0x7F17A56C
    {
            ctx->lr = 0x7F430708u;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F430708:
    ctx->pc = 0x7F430708u;
    ctx->downcount -= 1;
    // 7F430708: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F43070C:
    ctx->pc = 0x7F43070Cu;
    ctx->downcount -= 7;
    // 7F43070C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430710:
    ctx->pc = 0x7F430710u;
    // 7F430710: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F430714:
    ctx->pc = 0x7F430714u;
    // 7F430714: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F430718:
    ctx->pc = 0x7F430718u;
    // 7F430718: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_7F43071C:
    ctx->pc = 0x7F43071Cu;
    // 7F43071C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F430720:
    ctx->pc = 0x7F430720u;
    // 7F430720: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F430724:
    loop_7F430724(ctx);
    if (ctx->pc == 0x7F430738u) goto label_7F430738;
    return;
label_7F430728:
    ctx->pc = 0x7F430728u;
    // 7F430728: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F43072C:
    ctx->pc = 0x7F43072Cu;
    // 7F43072C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430730:
    ctx->pc = 0x7F430730u;
    // 7F430730: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F430734:
    // 7F430734: bc    16, 0, 0x7F430724
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430724u;
                return;
            }
            goto label_7F430724;
        }
    }

label_7F430738:
    ctx->pc = 0x7F430738u;
    ctx->downcount -= 15;
    // 7F430738: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F43073C:
    ctx->pc = 0x7F43073Cu;
    // 7F43073C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F430740:
    ctx->pc = 0x7F430740u;
    // 7F430740: addi    r29, r3, 29504
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(29504);

label_7F430744:
    ctx->pc = 0x7F430744u;
    // 7F430744: lfs     f2, -9920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430744u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430748:
    ctx->pc = 0x7F430748u;
    // 7F430748: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F43074C:
    ctx->pc = 0x7F43074Cu;
    // 7F43074C: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F43074Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430750:
    ctx->pc = 0x7F430750u;
    // 7F430750: addi    r28, r3, 29520
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F430754:
    ctx->pc = 0x7F430754u;
    // 7F430754: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F430758:
    ctx->pc = 0x7F430758u;
    // 7F430758: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430758u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43075C:
    ctx->pc = 0x7F43075Cu;
    // 7F43075C: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F43075Cu)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F430760:
    ctx->pc = 0x7F430760u;
    // 7F430760: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430764:
    ctx->pc = 0x7F430764u;
    // 7F430764: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430764u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F430768:
    ctx->pc = 0x7F430768u;
    // 7F430768: stfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430768u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F43076C:
    ctx->pc = 0x7F43076Cu;
    // 7F43076C: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F43076Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430770:
    ctx->pc = 0x7F430770u;
    // 7F430770: bl      0x7F205744
    {
            ctx->lr = 0x7F430774u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F430774:
    ctx->pc = 0x7F430774u;
    ctx->downcount -= 4;
    // 7F430774: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430778:
    ctx->pc = 0x7F430778u;
    // 7F430778: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F43077C:
    ctx->pc = 0x7F43077Cu;
    // 7F43077C: addi    r3, r3, 29520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29520);

label_7F430780:
    ctx->pc = 0x7F430780u;
    // 7F430780: bl      0x7F205744
    {
            ctx->lr = 0x7F430784u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F430784:
    ctx->pc = 0x7F430784u;
    ctx->downcount -= 17;
    // 7F430784: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430788:
    ctx->pc = 0x7F430788u;
    // 7F430788: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430788u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43078C:
    ctx->pc = 0x7F43078Cu;
    // 7F43078C: lfs     f2, -9920(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F43078Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430790:
    ctx->pc = 0x7F430790u;
    // 7F430790: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F430794:
    ctx->pc = 0x7F430794u;
    // 7F430794: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F430794u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430798:
    ctx->pc = 0x7F430798u;
    // 7F430798: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F43079C:
    ctx->pc = 0x7F43079Cu;
    // 7F43079C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F43079Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F4307A0:
    ctx->pc = 0x7F4307A0u;
    // 7F4307A0: li      r5, 5000
    ctx->gpr[5] = (u32)(s32)(5000);

label_7F4307A4:
    ctx->pc = 0x7F4307A4u;
    // 7F4307A4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4307A4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F4307A8:
    ctx->pc = 0x7F4307A8u;
    // 7F4307A8: li      r6, 7500
    ctx->gpr[6] = (u32)(s32)(7500);

label_7F4307AC:
    ctx->pc = 0x7F4307ACu;
    // 7F4307AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4307B0:
    ctx->pc = 0x7F4307B0u;
    // 7F4307B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4307B4:
    ctx->pc = 0x7F4307B4u;
    // 7F4307B4: stfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F4307B4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4307B8:
    ctx->pc = 0x7F4307B8u;
    // 7F4307B8: li      r9, 9
    ctx->gpr[9] = (u32)(s32)(9);

label_7F4307BC:
    ctx->pc = 0x7F4307BCu;
    // 7F4307BC: li      r10, 43
    ctx->gpr[10] = (u32)(s32)(43);

label_7F4307C0:
    ctx->pc = 0x7F4307C0u;
    // 7F4307C0: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F4307C0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4307C4:
    ctx->pc = 0x7F4307C4u;
    // 7F4307C4: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F4307C8u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F4307C8:
    ctx->pc = 0x7F4307C8u;
    ctx->downcount -= 10;
    // 7F4307C8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F4307CC:
    ctx->pc = 0x7F4307CCu;
    // 7F4307CC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4307D0:
    ctx->pc = 0x7F4307D0u;
    // 7F4307D0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4307D4:
    ctx->pc = 0x7F4307D4u;
    // 7F4307D4: lfs     f2, -9916(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4307D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9916);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4307D8:
    ctx->pc = 0x7F4307D8u;
    // 7F4307D8: lfs     f1, -9956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4307D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4307DC:
    ctx->pc = 0x7F4307DCu;
    // 7F4307DC: lfs     f0, -9912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4307DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4307E0:
    ctx->pc = 0x7F4307E0u;
    // 7F4307E0: stfs     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4307E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F4307E4:
    ctx->pc = 0x7F4307E4u;
    // 7F4307E4: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4307E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4307E8:
    ctx->pc = 0x7F4307E8u;
    // 7F4307E8: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4307E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4307EC:
    ctx->pc = 0x7F4307ECu;
    // 7F4307EC: bl      0x7F430934
    {
            ctx->lr = 0x7F4307F0u;
            goto label_7F430934;
    }

label_7F4307F0:
    ctx->pc = 0x7F4307F0u;
    ctx->downcount -= 4;
    // 7F4307F0: rlwinm r4, r3, 0, 26, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000003Fu;
    }

label_7F4307F4:
    ctx->pc = 0x7F4307F4u;
    // 7F4307F4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4307F8:
    ctx->pc = 0x7F4307F8u;
    // 7F4307F8: addi    r4, r4, 120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(120);

label_7F4307FC:
    ctx->pc = 0x7F4307FCu;
    // 7F4307FC: bl      0x7F17A56C
    {
            ctx->lr = 0x7F430800u;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F430800:
    ctx->pc = 0x7F430800u;
    ctx->downcount -= 10;
    // 7F430800: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F430804:
    ctx->pc = 0x7F430804u;
    // 7F430804: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F430808:
    ctx->pc = 0x7F430808u;
    // 7F430808: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F43080C:
    ctx->pc = 0x7F43080Cu;
    // 7F43080C: lfs     f2, -9908(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F43080Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9908);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430810:
    ctx->pc = 0x7F430810u;
    // 7F430810: lfs     f1, -9956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430810u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430814:
    ctx->pc = 0x7F430814u;
    // 7F430814: lfs     f0, -9904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430814u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430818:
    ctx->pc = 0x7F430818u;
    // 7F430818: stfs     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F43081C:
    ctx->pc = 0x7F43081Cu;
    // 7F43081C: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43081Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430820:
    ctx->pc = 0x7F430820u;
    // 7F430820: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430824:
    ctx->pc = 0x7F430824u;
    // 7F430824: bl      0x7F430934
    {
            ctx->lr = 0x7F430828u;
            goto label_7F430934;
    }

label_7F430828:
    ctx->pc = 0x7F430828u;
    ctx->downcount -= 4;
    // 7F430828: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F43082C:
    ctx->pc = 0x7F43082Cu;
    // 7F43082C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F430830:
    ctx->pc = 0x7F430830u;
    // 7F430830: addi    r4, r4, 150
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(150);

label_7F430834:
    ctx->pc = 0x7F430834u;
    // 7F430834: bl      0x7F17A56C
    {
            ctx->lr = 0x7F430838u;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F430838:
    ctx->pc = 0x7F430838u;
    ctx->downcount -= 1;
    // 7F430838: b       0x7F430878
    {
            goto label_7F430878;
    }

label_7F43083C:
    ctx->pc = 0x7F43083Cu;
    ctx->downcount -= 2;
    // 7F43083C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F430840:
    ctx->pc = 0x7F430840u;
    // 7F430840: bl      0x7F023E10
    {
            ctx->lr = 0x7F430844u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F430844:
    ctx->pc = 0x7F430844u;
    ctx->downcount -= 2;
    // 7F430844: addi    r3, r31, 2432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2432);

label_7F430848:
    ctx->pc = 0x7F430848u;
    // 7F430848: bl      0x7F042AAC
    {
            ctx->lr = 0x7F43084Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F43084C:
    ctx->pc = 0x7F43084Cu;
    ctx->downcount -= 2;
    // 7F43084C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F430850:
    ctx->pc = 0x7F430850u;
    // 7F430850: bl      0x7F01C018
    {
            ctx->lr = 0x7F430854u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F430854:
    ctx->pc = 0x7F430854u;
    ctx->downcount -= 9;
    // 7F430854: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F430858:
    ctx->pc = 0x7F430858u;
    // 7F430858: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F43085C:
    ctx->pc = 0x7F43085Cu;
    // 7F43085C: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430860:
    ctx->pc = 0x7F430860u;
    // 7F430860: nor   r6, r3, r3
    {
        ctx->gpr[6] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F430864:
    ctx->pc = 0x7F430864u;
    // 7F430864: addi    r3, r4, -22728
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F430868:
    ctx->pc = 0x7F430868u;
    // 7F430868: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F43086C:
    ctx->pc = 0x7F43086Cu;
    // 7F43086C: lwzx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430870:
    ctx->pc = 0x7F430870u;
    // 7F430870: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F430874:
    ctx->pc = 0x7F430874u;
    // 7F430874: stwx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430878:
    ctx->pc = 0x7F430878u;
    ctx->downcount -= 3;
    // 7F430878: lwz     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43087C:
    ctx->pc = 0x7F43087Cu;
    // 7F43087C: cmpwi   r0, 1
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

label_7F430880:
    ctx->pc = 0x7F430880u;
    // 7F430880: bc    4, 2, 0x7F430920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430920;
        }
    }

label_7F430884:
    ctx->pc = 0x7F430884u;
    ctx->downcount -= 3;
    // 7F430884: lwz     r0, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430888:
    ctx->pc = 0x7F430888u;
    // 7F430888: cmplwi  r0, 0x0000
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

label_7F43088C:
    ctx->pc = 0x7F43088Cu;
    // 7F43088C: bc    4, 2, 0x7F4308C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4308C8;
        }
    }

label_7F430890:
    ctx->pc = 0x7F430890u;
    ctx->downcount -= 13;
    // 7F430890: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F430894:
    ctx->pc = 0x7F430894u;
    // 7F430894: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F430898:
    ctx->pc = 0x7F430898u;
    // 7F430898: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F43089C:
    ctx->pc = 0x7F43089Cu;
    // 7F43089C: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F4308A0:
    ctx->pc = 0x7F4308A0u;
    // 7F4308A0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F4308A4:
    ctx->pc = 0x7F4308A4u;
    // 7F4308A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F4308A8:
    ctx->pc = 0x7F4308A8u;
    // 7F4308A8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4308AC:
    ctx->pc = 0x7F4308ACu;
    // 7F4308AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4308B0:
    ctx->pc = 0x7F4308B0u;
    // 7F4308B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4308B4:
    ctx->pc = 0x7F4308B4u;
    // 7F4308B4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4308B8:
    ctx->pc = 0x7F4308B8u;
    // 7F4308B8: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F4308BC:
    ctx->pc = 0x7F4308BCu;
    // 7F4308BC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F4308C0:
    ctx->pc = 0x7F4308C0u;
    // 7F4308C0: bl      0x800501FC
    {
            ctx->lr = 0x7F4308C4u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F4308C4:
    ctx->pc = 0x7F4308C4u;
    ctx->downcount -= 1;
    // 7F4308C4: stw     r3, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4308C8:
    ctx->pc = 0x7F4308C8u;
    ctx->downcount -= 3;
    // 7F4308C8: lwz     r3, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4308CC:
    ctx->pc = 0x7F4308CCu;
    // 7F4308CC: cmplwi  r3, 0x0000
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

label_7F4308D0:
    ctx->pc = 0x7F4308D0u;
    // 7F4308D0: bc    12, 2, 0x7F430920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430920;
        }
    }

label_7F4308D4:
    ctx->pc = 0x7F4308D4u;
    ctx->downcount -= 3;
    // 7F4308D4: lwz     r0, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4308D8:
    ctx->pc = 0x7F4308D8u;
    // 7F4308D8: cmpwi   r0, 0
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

label_7F4308DC:
    ctx->pc = 0x7F4308DCu;
    // 7F4308DC: bc    4, 2, 0x7F4308EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4308EC;
        }
    }

label_7F4308E0:
    ctx->pc = 0x7F4308E0u;
    ctx->downcount -= 1;
    // 7F4308E0: bl      0x80051AA0
    {
            ctx->lr = 0x7F4308E4u;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F4308E4:
    ctx->pc = 0x7F4308E4u;
    ctx->downcount -= 2;
    // 7F4308E4: stw     r3, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4308E8:
    ctx->pc = 0x7F4308E8u;
    // 7F4308E8: b       0x7F430920
    {
            goto label_7F430920;
    }

label_7F4308EC:
    ctx->pc = 0x7F4308ECu;
    ctx->downcount -= 3;
    // 7F4308EC: lwz     r0, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4308F0:
    ctx->pc = 0x7F4308F0u;
    // 7F4308F0: cmpwi   r0, 0
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

label_7F4308F4:
    ctx->pc = 0x7F4308F4u;
    // 7F4308F4: bc    4, 2, 0x7F430908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430908;
        }
    }

label_7F4308F8:
    ctx->pc = 0x7F4308F8u;
    ctx->downcount -= 1;
    // 7F4308F8: bl      0x80051A5C
    {
            ctx->lr = 0x7F4308FCu;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F4308FC:
    ctx->pc = 0x7F4308FCu;
    ctx->downcount -= 3;
    // 7F4308FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F430900:
    ctx->pc = 0x7F430900u;
    // 7F430900: stw     r0, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430904:
    ctx->pc = 0x7F430904u;
    // 7F430904: b       0x7F430920
    {
            goto label_7F430920;
    }

label_7F430908:
    ctx->pc = 0x7F430908u;
    ctx->downcount -= 2;
    // 7F430908: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F43090C:
    ctx->pc = 0x7F43090Cu;
    // 7F43090C: bl      0x7F4300CC
    {
            ctx->lr = 0x7F430910u;
            ctx->pc = 0x7F4300CCu;
            return;
    }

label_7F430910:
    ctx->pc = 0x7F430910u;
    ctx->downcount -= 4;
    // 7F430910: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F430914:
    ctx->pc = 0x7F430914u;
    // 7F430914: stw     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430918:
    ctx->pc = 0x7F430918u;
    // 7F430918: stw     r0, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43091C:
    ctx->pc = 0x7F43091Cu;
    // 7F43091C: stw     r0, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430920:
    ctx->pc = 0x7F430920u;
    ctx->downcount -= 16;
    // 7F430920: lmw     r25, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430924:
    ctx->pc = 0x7F430924u;
    // 7F430924: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430928:
    ctx->pc = 0x7F430928u;
    // 7F430928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43092C:
    ctx->pc = 0x7F43092Cu;
    // 7F43092C: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F430930:
    ctx->pc = 0x7F430930u;
    // 7F430930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F430934:
    ctx->pc = 0x7F430934u;
    ctx->downcount -= 13;
    // 7F430934: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F430938:
    ctx->pc = 0x7F430938u;
    // 7F430938: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F43093C:
    ctx->pc = 0x7F43093Cu;
    // 7F43093C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F430940:
    ctx->pc = 0x7F430940u;
    // 7F430940: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430944:
    ctx->pc = 0x7F430944u;
    // 7F430944: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F430948:
    ctx->pc = 0x7F430948u;
    // 7F430948: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F43094C:
    ctx->pc = 0x7F43094Cu;
    // 7F43094C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F430950:
    ctx->pc = 0x7F430950u;
    // 7F430950: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430954:
    ctx->pc = 0x7F430954u;
    // 7F430954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F430958:
    ctx->pc = 0x7F430958u;
    ctx->downcount -= 18;
    // 7F430958: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43095C:
    ctx->pc = 0x7F43095Cu;
    // 7F43095C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F430960:
    ctx->pc = 0x7F430960u;
    // 7F430960: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430964:
    ctx->pc = 0x7F430964u;
    // 7F430964: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F430968:
    ctx->pc = 0x7F430968u;
    // 7F430968: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F43096C:
    ctx->pc = 0x7F43096Cu;
    // 7F43096C: lwz     r0, 2432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430970:
    ctx->pc = 0x7F430970u;
    // 7F430970: cmplwi  r0, 0x0000
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

label_7F430974:
    ctx->pc = 0x7F430974u;
    // 7F430974: bc    12, 2, 0x7F430988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430988;
        }
    }

label_7F430978:
    ctx->pc = 0x7F430978u;
    ctx->downcount -= 2;
    // 7F430978: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F43097C:
    ctx->pc = 0x7F43097Cu;
    // 7F43097C: bl      0x7F023E10
    {
            ctx->lr = 0x7F430980u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F430980:
    ctx->pc = 0x7F430980u;
    ctx->downcount -= 2;
    // 7F430980: addi    r3, r28, 2432
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(2432);

label_7F430984:
    ctx->pc = 0x7F430984u;
    // 7F430984: bl      0x7F042AAC
    {
            ctx->lr = 0x7F430988u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F430988:
    ctx->pc = 0x7F430988u;
    ctx->downcount -= 2;
    // 7F430988: addi    r3, r28, 432
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(432);

label_7F43098C:
    ctx->pc = 0x7F43098Cu;
    // 7F43098C: bl      0x7F023E10
    {
            ctx->lr = 0x7F430990u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F430990:
    ctx->pc = 0x7F430990u;
    ctx->downcount -= 2;
    // 7F430990: addi    r3, r28, 2476
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(2476);

label_7F430994:
    ctx->pc = 0x7F430994u;
    // 7F430994: bl      0x7F042AAC
    {
            ctx->lr = 0x7F430998u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F430998:
    ctx->pc = 0x7F430998u;
    ctx->downcount -= 3;
    // 7F430998: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F43099C:
    ctx->pc = 0x7F43099Cu;
    // 7F43099C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F4309A0:
    ctx->pc = 0x7F4309A0u;
    // 7F4309A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F4309A4:
    ctx->downcount -= 3;
    // 7F4309A4: addi    r3, r31, 3888
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3888);

label_7F4309A8:
    // 7F4309A8: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4309AC:
    // 7F4309AC: bl      0x7F01D540
    {
            ctx->lr = 0x7F4309B0u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F4309B0:
    ctx->downcount -= 3;
    // 7F4309B0: addi    r3, r30, 3472
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3472);

label_7F4309B4:
    // 7F4309B4: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4309B8:
    // 7F4309B8: bl      0x7F0146B0
    {
            ctx->lr = 0x7F4309BCu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F4309BC:
    ctx->downcount -= 5;
    // 7F4309BC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F4309C0:
    // 7F4309C0: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_7F4309C4:
    // 7F4309C4: cmpwi   r29, 2
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

label_7F4309C8:
    // 7F4309C8: addi    r30, r30, 192
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(192);

label_7F4309CC:
    // 7F4309CC: bc    12, 0, 0x7F4309A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4309A4u;
                return;
            }
            goto label_7F4309A4;
        }
    }

label_7F4309D0:
    ctx->pc = 0x7F4309D0u;
    ctx->downcount -= 3;
    // 7F4309D0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4309D4:
    ctx->pc = 0x7F4309D4u;
    // 7F4309D4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F4309D8:
    ctx->pc = 0x7F4309D8u;
    // 7F4309D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F4309DC:
    ctx->downcount -= 4;
    // 7F4309DC: add   r3, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4309E0:
    ctx->pc = 0x7F4309E0u;
    // 7F4309E0: lwz     r0, 2520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4309E4:
    // 7F4309E4: cmplwi  r0, 0x0000
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

label_7F4309E8:
    // 7F4309E8: bc    12, 2, 0x7F4309F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4309F4;
        }
    }

label_7F4309EC:
    ctx->downcount -= 2;
    // 7F4309EC: addi    r3, r3, 2520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2520);

label_7F4309F0:
    // 7F4309F0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F4309F4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F4309F4:
    ctx->downcount -= 3;
    // 7F4309F4: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F4309F8:
    // 7F4309F8: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4309FC:
    // 7F4309FC: bl      0x7F023E10
    {
            ctx->lr = 0x7F430A00u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F430A00:
    ctx->downcount -= 5;
    // 7F430A00: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F430A04:
    // 7F430A04: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F430A08:
    // 7F430A08: cmpwi   r29, 4
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

label_7F430A0C:
    // 7F430A0C: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F430A10:
    // 7F430A10: bc    12, 0, 0x7F4309DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4309DCu;
                return;
            }
            goto label_7F4309DC;
        }
    }

label_7F430A14:
    ctx->pc = 0x7F430A14u;
    ctx->downcount -= 3;
    // 7F430A14: lwz     r3, 4012(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4012);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F430A18:
    ctx->pc = 0x7F430A18u;
    // 7F430A18: cmplwi  r3, 0x0000
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

label_7F430A1C:
    ctx->pc = 0x7F430A1Cu;
    // 7F430A1C: bc    12, 2, 0x7F430A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430A34;
        }
    }

label_7F430A20:
    ctx->pc = 0x7F430A20u;
    ctx->downcount -= 3;
    // 7F430A20: lwz     r0, 4000(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430A24:
    ctx->pc = 0x7F430A24u;
    // 7F430A24: cmpwi   r0, 0
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

label_7F430A28:
    ctx->pc = 0x7F430A28u;
    // 7F430A28: bc    4, 2, 0x7F430A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430A34;
        }
    }

label_7F430A2C:
    ctx->pc = 0x7F430A2Cu;
    ctx->downcount -= 2;
    // 7F430A2C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F430A30:
    ctx->pc = 0x7F430A30u;
    // 7F430A30: bl      0x80050B54
    {
            ctx->lr = 0x7F430A34u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F430A34:
    ctx->pc = 0x7F430A34u;
    ctx->downcount -= 16;
    // 7F430A34: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430A38:
    ctx->pc = 0x7F430A38u;
    // 7F430A38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430A3C:
    ctx->pc = 0x7F430A3Cu;
    // 7F430A3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F430A40:
    ctx->pc = 0x7F430A40u;
    // 7F430A40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F430A44:
    ctx->pc = 0x7F430A44u;
    // 7F430A44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F430A48:
    ctx->pc = 0x7F430A48u;
    ctx->downcount -= 41;
    // 7F430A48: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F430A4C:
    ctx->pc = 0x7F430A4Cu;
    // 7F430A4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F430A50:
    ctx->pc = 0x7F430A50u;
    // 7F430A50: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F430A54:
    ctx->pc = 0x7F430A54u;
    // 7F430A54: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430A58:
    ctx->pc = 0x7F430A58u;
    // 7F430A58: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430A5C:
    ctx->pc = 0x7F430A5Cu;
    // 7F430A5C: lfs     f1, -9900(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F430A5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430A60:
    ctx->pc = 0x7F430A60u;
    // 7F430A60: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F430A64:
    ctx->pc = 0x7F430A64u;
    // 7F430A64: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F430A68:
    ctx->pc = 0x7F430A68u;
    // 7F430A68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F430A6C:
    ctx->pc = 0x7F430A6Cu;
    // 7F430A6C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430A70:
    ctx->pc = 0x7F430A70u;
    // 7F430A70: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F430A74:
    ctx->pc = 0x7F430A74u;
    // 7F430A74: lfs     f0, -9896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430A74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430A78:
    ctx->pc = 0x7F430A78u;
    // 7F430A78: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F430A7C:
    ctx->pc = 0x7F430A7Cu;
    // 7F430A7C: lfs     f2, -9892(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F430A7Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430A80:
    ctx->pc = 0x7F430A80u;
    // 7F430A80: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430A84:
    ctx->pc = 0x7F430A84u;
    // 7F430A84: addi    r6, r4, -9888
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-9888);

label_7F430A88:
    ctx->pc = 0x7F430A88u;
    // 7F430A88: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430A8C:
    ctx->pc = 0x7F430A8Cu;
    // 7F430A8C: addi    r4, r3, -9884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9884);

label_7F430A90:
    ctx->pc = 0x7F430A90u;
    // 7F430A90: addi    r3, r31, 3472
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3472);

label_7F430A94:
    ctx->pc = 0x7F430A94u;
    // 7F430A94: addi    r7, r31, 3952
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F430A98:
    ctx->pc = 0x7F430A98u;
    // 7F430A98: stfs     f1, 3952(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430A98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3952);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430A9C:
    ctx->pc = 0x7F430A9Cu;
    // 7F430A9C: stfs     f0, 3956(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430A9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3956);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430AA0:
    ctx->pc = 0x7F430AA0u;
    // 7F430AA0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430AA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430AA4:
    ctx->pc = 0x7F430AA4u;
    // 7F430AA4: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F430AA8:
    ctx->pc = 0x7F430AA8u;
    // 7F430AA8: stfs     f1, 3960(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F430AA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3960);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430AAC:
    ctx->pc = 0x7F430AACu;
    // 7F430AAC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F430AACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430AB0:
    ctx->pc = 0x7F430AB0u;
    // 7F430AB0: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F430AB4:
    ctx->pc = 0x7F430AB4u;
    // 7F430AB4: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F430AB8:
    ctx->pc = 0x7F430AB8u;
    // 7F430AB8: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430AB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430ABC:
    ctx->pc = 0x7F430ABCu;
    // 7F430ABC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430AC0:
    ctx->pc = 0x7F430AC0u;
    // 7F430AC0: bl      0x7F014788
    {
            ctx->lr = 0x7F430AC4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F430AC4:
    ctx->pc = 0x7F430AC4u;
    ctx->downcount -= 19;
    // 7F430AC4: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F430AC8:
    ctx->pc = 0x7F430AC8u;
    // 7F430AC8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F430ACC:
    ctx->pc = 0x7F430ACCu;
    // 7F430ACC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430AD0:
    ctx->pc = 0x7F430AD0u;
    // 7F430AD0: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430AD4:
    ctx->pc = 0x7F430AD4u;
    // 7F430AD4: addi    r7, r6, -9880
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-9880);

label_7F430AD8:
    ctx->pc = 0x7F430AD8u;
    // 7F430AD8: addi    r6, r4, -9888
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-9888);

label_7F430ADC:
    ctx->pc = 0x7F430ADCu;
    // 7F430ADC: addi    r4, r3, -9876
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9876);

label_7F430AE0:
    ctx->pc = 0x7F430AE0u;
    // 7F430AE0: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F430AE0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430AE4:
    ctx->pc = 0x7F430AE4u;
    // 7F430AE4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F430AE4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430AE8:
    ctx->pc = 0x7F430AE8u;
    // 7F430AE8: addi    r3, r31, 3664
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3664);

label_7F430AEC:
    ctx->pc = 0x7F430AECu;
    // 7F430AEC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430AECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430AF0:
    ctx->pc = 0x7F430AF0u;
    // 7F430AF0: addi    r7, r31, 3952
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F430AF4:
    ctx->pc = 0x7F430AF4u;
    // 7F430AF4: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F430AF8:
    ctx->pc = 0x7F430AF8u;
    // 7F430AF8: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430AFC:
    ctx->pc = 0x7F430AFCu;
    // 7F430AFC: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F430B00:
    ctx->pc = 0x7F430B00u;
    // 7F430B00: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F430B04:
    ctx->pc = 0x7F430B04u;
    // 7F430B04: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430B08:
    ctx->pc = 0x7F430B08u;
    // 7F430B08: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430B0C:
    ctx->pc = 0x7F430B0Cu;
    // 7F430B0C: bl      0x7F014788
    {
            ctx->lr = 0x7F430B10u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F430B10:
    ctx->pc = 0x7F430B10u;
    ctx->downcount -= 6;
    // 7F430B10: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F430B14:
    ctx->pc = 0x7F430B14u;
    // 7F430B14: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F430B18:
    ctx->pc = 0x7F430B18u;
    // 7F430B18: addi    r28, r4, 12832
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F430B1C:
    ctx->pc = 0x7F430B1Cu;
    // 7F430B1C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F430B20:
    ctx->pc = 0x7F430B20u;
    // 7F430B20: addi    r29, r3, 340
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(340);

label_7F430B24:
    ctx->pc = 0x7F430B24u;
    // 7F430B24: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F430B28:
    ctx->downcount -= 10;
    // 7F430B28: addi    r27, r30, 3472
    ctx->gpr[27] = ctx->gpr[30] + (u32)(s32)(3472);

label_7F430B2C:
    // 7F430B2C: or   r9, r28, r28
    {
        ctx->gpr[9] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F430B30:
    // 7F430B30: add   r27, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F430B34:
    // 7F430B34: addi    r4, r31, 3856
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3856);

label_7F430B38:
    // 7F430B38: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430B3C:
    // 7F430B3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F430B40:
    // 7F430B40: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F430B44:
    // 7F430B44: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F430B48:
    // 7F430B48: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F430B4C:
    // 7F430B4C: bl      0x7F014B78
    {
            ctx->lr = 0x7F430B50u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F430B50:
    ctx->downcount -= 2;
    // 7F430B50: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430B54:
    // 7F430B54: bl      0x7F0148A0
    {
            ctx->lr = 0x7F430B58u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F430B58:
    ctx->downcount -= 4;
    // 7F430B58: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430B5C:
    // 7F430B5C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430B60:
    // 7F430B60: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F430B64:
    // 7F430B64: bl      0x7F014B6C
    {
            ctx->lr = 0x7F430B68u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F430B68:
    ctx->downcount -= 4;
    // 7F430B68: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F430B6C:
    // 7F430B6C: addi    r30, r30, 192
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(192);

label_7F430B70:
    // 7F430B70: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F430B74:
    // 7F430B74: bc    12, 0, 0x7F430B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430B28u;
                return;
            }
            goto label_7F430B28;
        }
    }

label_7F430B78:
    ctx->pc = 0x7F430B78u;
    ctx->downcount -= 16;
    // 7F430B78: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430B7C:
    ctx->pc = 0x7F430B7Cu;
    // 7F430B7C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430B80:
    ctx->pc = 0x7F430B80u;
    // 7F430B80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F430B84:
    ctx->pc = 0x7F430B84u;
    // 7F430B84: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F430B88:
    ctx->pc = 0x7F430B88u;
    // 7F430B88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F430B8C:
    ctx->pc = 0x7F430B8Cu;
    ctx->downcount -= 39;
    // 7F430B8C: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F430B90:
    ctx->pc = 0x7F430B90u;
    // 7F430B90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F430B94:
    ctx->pc = 0x7F430B94u;
    // 7F430B94: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430B98:
    ctx->pc = 0x7F430B98u;
    // 7F430B98: stfd     f31, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F430B9C:
    ctx->pc = 0x7F430B9Cu;
    // 7F430B9C: psq_st   f31, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F430B9Cu);
        if (ctx->exception) return;
    }

label_7F430BA0:
    ctx->pc = 0x7F430BA0u;
    // 7F430BA0: stfd     f30, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F430BA4:
    ctx->pc = 0x7F430BA4u;
    // 7F430BA4: psq_st   f30, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F430BA4u);
        if (ctx->exception) return;
    }

label_7F430BA8:
    ctx->pc = 0x7F430BA8u;
    // 7F430BA8: stfd     f29, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F430BAC:
    ctx->pc = 0x7F430BACu;
    // 7F430BAC: psq_st   f29, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F430BACu);
        if (ctx->exception) return;
    }

label_7F430BB0:
    ctx->pc = 0x7F430BB0u;
    // 7F430BB0: stfd     f28, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F430BB4:
    ctx->pc = 0x7F430BB4u;
    // 7F430BB4: psq_st   f28, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F430BB4u);
        if (ctx->exception) return;
    }

label_7F430BB8:
    ctx->pc = 0x7F430BB8u;
    // 7F430BB8: stfd     f27, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F430BBC:
    ctx->pc = 0x7F430BBCu;
    // 7F430BBC: psq_st   f27, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F430BBCu);
        if (ctx->exception) return;
    }

label_7F430BC0:
    ctx->pc = 0x7F430BC0u;
    // 7F430BC0: stfd     f26, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F430BC4:
    ctx->pc = 0x7F430BC4u;
    // 7F430BC4: psq_st   f26, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F430BC4u);
        if (ctx->exception) return;
    }

label_7F430BC8:
    ctx->pc = 0x7F430BC8u;
    // 7F430BC8: stfd     f25, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F430BCC:
    ctx->pc = 0x7F430BCCu;
    // 7F430BCC: psq_st   f25, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F430BCCu);
        if (ctx->exception) return;
    }

label_7F430BD0:
    ctx->pc = 0x7F430BD0u;
    // 7F430BD0: stfd     f24, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F430BD4:
    ctx->pc = 0x7F430BD4u;
    // 7F430BD4: psq_st   f24, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F430BD4u);
        if (ctx->exception) return;
    }

label_7F430BD8:
    ctx->pc = 0x7F430BD8u;
    // 7F430BD8: stfd     f23, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430BD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

label_7F430BDC:
    ctx->pc = 0x7F430BDCu;
    // 7F430BDC: psq_st   f23, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x7F430BDCu);
        if (ctx->exception) return;
    }

label_7F430BE0:
    ctx->pc = 0x7F430BE0u;
    // 7F430BE0: stmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F430BE4:
    ctx->pc = 0x7F430BE4u;
    // 7F430BE4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F430BE8:
    ctx->pc = 0x7F430BE8u;
    // 7F430BE8: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F430BEC:
    ctx->pc = 0x7F430BECu;
    // 7F430BEC: addi    r30, r26, 432
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(432);

label_7F430BF0:
    ctx->pc = 0x7F430BF0u;
    // 7F430BF0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F430BF4:
    ctx->pc = 0x7F430BF4u;
    // 7F430BF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F430BF8:
    ctx->pc = 0x7F430BF8u;
    // 7F430BF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F430BFC:
    ctx->pc = 0x7F430BFCu;
    // 7F430BFC: bl      0x7F022FB4
    {
            ctx->lr = 0x7F430C00u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F430C00:
    ctx->pc = 0x7F430C00u;
    ctx->downcount -= 2;
    // 7F430C00: cmpwi   r3, 0
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

label_7F430C04:
    ctx->pc = 0x7F430C04u;
    // 7F430C04: bc    4, 0, 0x7F430C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430C10;
        }
    }

label_7F430C08:
    ctx->pc = 0x7F430C08u;
    ctx->downcount -= 2;
    // 7F430C08: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F430C0C:
    ctx->pc = 0x7F430C0Cu;
    // 7F430C0C: b       0x7F430FA4
    {
            goto label_7F430FA4;
    }

label_7F430C10:
    ctx->pc = 0x7F430C10u;
    ctx->downcount -= 5;
    // 7F430C10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F430C14:
    ctx->pc = 0x7F430C14u;
    // 7F430C14: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F430C18:
    ctx->pc = 0x7F430C18u;
    // 7F430C18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F430C1C:
    ctx->pc = 0x7F430C1Cu;
    // 7F430C1C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F430C20:
    ctx->pc = 0x7F430C20u;
    // 7F430C20: bl      0x7F023F7C
    {
            ctx->lr = 0x7F430C24u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F430C24:
    ctx->pc = 0x7F430C24u;
    ctx->downcount -= 8;
    // 7F430C24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F430C28:
    ctx->pc = 0x7F430C28u;
    // 7F430C28: addi    r29, r26, 32
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(32);

label_7F430C2C:
    ctx->pc = 0x7F430C2Cu;
    // 7F430C2C: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430C30:
    ctx->pc = 0x7F430C30u;
    // 7F430C30: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430C34:
    ctx->pc = 0x7F430C34u;
    // 7F430C34: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F430C38:
    ctx->pc = 0x7F430C38u;
    // 7F430C38: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430C3C:
    ctx->pc = 0x7F430C3Cu;
    // 7F430C3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F430C40:
    ctx->pc = 0x7F430C40u;
    // 7F430C40: bl      0x7F022FB4
    {
            ctx->lr = 0x7F430C44u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F430C44:
    ctx->pc = 0x7F430C44u;
    ctx->downcount -= 2;
    // 7F430C44: cmpwi   r3, 0
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

label_7F430C48:
    ctx->pc = 0x7F430C48u;
    // 7F430C48: bc    4, 0, 0x7F430C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430C54;
        }
    }

label_7F430C4C:
    ctx->pc = 0x7F430C4Cu;
    ctx->downcount -= 2;
    // 7F430C4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F430C50:
    ctx->pc = 0x7F430C50u;
    // 7F430C50: b       0x7F430FA4
    {
            goto label_7F430FA4;
    }

label_7F430C54:
    ctx->pc = 0x7F430C54u;
    ctx->downcount -= 5;
    // 7F430C54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430C58:
    ctx->pc = 0x7F430C58u;
    // 7F430C58: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F430C5C:
    ctx->pc = 0x7F430C5Cu;
    // 7F430C5C: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F430C60:
    ctx->pc = 0x7F430C60u;
    // 7F430C60: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F430C64:
    ctx->pc = 0x7F430C64u;
    // 7F430C64: bl      0x7F023F7C
    {
            ctx->lr = 0x7F430C68u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F430C68:
    ctx->pc = 0x7F430C68u;
    ctx->downcount -= 8;
    // 7F430C68: lhz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F430C6C:
    ctx->pc = 0x7F430C6Cu;
    // 7F430C6C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F430C70:
    ctx->pc = 0x7F430C70u;
    // 7F430C70: or   r25, r24, r24
    {
        ctx->gpr[25] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F430C74:
    ctx->pc = 0x7F430C74u;
    // 7F430C74: addi    r28, r26, 832
    ctx->gpr[28] = ctx->gpr[26] + (u32)(s32)(832);

label_7F430C78:
    ctx->pc = 0x7F430C78u;
    // 7F430C78: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F430C7C:
    ctx->pc = 0x7F430C7Cu;
    // 7F430C7C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F430C80:
    ctx->pc = 0x7F430C80u;
    // 7F430C80: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F430C84:
    ctx->pc = 0x7F430C84u;
    // 7F430C84: stw     r24, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F430C88:
    ctx->downcount -= 6;
    // 7F430C88: add   r23, r28, r25
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F430C8C:
    // 7F430C8C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F430C90:
    // 7F430C90: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F430C94:
    // 7F430C94: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430C98:
    // 7F430C98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F430C9C:
    // 7F430C9C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F430CA0u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F430CA0:
    ctx->downcount -= 2;
    // 7F430CA0: cmpwi   r3, 0
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

label_7F430CA4:
    // 7F430CA4: bc    4, 0, 0x7F430CB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430CB0;
        }
    }

label_7F430CA8:
    ctx->downcount -= 2;
    // 7F430CA8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F430CAC:
    // 7F430CAC: b       0x7F430FA4
    {
            goto label_7F430FA4;
    }

label_7F430CB0:
    ctx->downcount -= 5;
    // 7F430CB0: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F430CB4:
    // 7F430CB4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F430CB8:
    // 7F430CB8: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F430CBC:
    // 7F430CBC: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F430CC0:
    // 7F430CC0: bl      0x7F023F7C
    {
            ctx->lr = 0x7F430CC4u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F430CC4:
    ctx->pc = 0x7F430CC4u;
    ctx->downcount -= 8;
    // 7F430CC4: lhz     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F430CC8:
    // 7F430CC8: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F430CCC:
    // 7F430CCC: cmpwi   r22, 4
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F430CD0:
    // 7F430CD0: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F430CD4:
    // 7F430CD4: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F430CD8:
    ctx->pc = 0x7F430CD8u;
    // 7F430CD8: sth     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F430CDC:
    ctx->pc = 0x7F430CDCu;
    // 7F430CDC: stw     r24, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F430CE0:
    // 7F430CE0: bc    12, 0, 0x7F430C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430C88u;
                return;
            }
            goto label_7F430C88;
        }
    }

label_7F430CE4:
    ctx->pc = 0x7F430CE4u;
    ctx->downcount -= 4;
    // 7F430CE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F430CE8:
    ctx->pc = 0x7F430CE8u;
    // 7F430CE8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F430CEC:
    ctx->pc = 0x7F430CECu;
    // 7F430CEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430CF0:
    ctx->pc = 0x7F430CF0u;
    // 7F430CF0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F430CF4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F430CF4:
    ctx->pc = 0x7F430CF4u;
    ctx->downcount -= 2;
    // 7F430CF4: cmplwi  r3, 0x0000
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

label_7F430CF8:
    ctx->pc = 0x7F430CF8u;
    // 7F430CF8: bc    12, 2, 0x7F430D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430D24;
        }
    }

label_7F430CFC:
    ctx->pc = 0x7F430CFCu;
    ctx->downcount -= 2;
    // 7F430CFC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430D00:
    ctx->pc = 0x7F430D00u;
    // 7F430D00: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F430D04u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F430D04:
    ctx->pc = 0x7F430D04u;
    ctx->downcount -= 3;
    // 7F430D04: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430D08:
    ctx->pc = 0x7F430D08u;
    // 7F430D08: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430D0C:
    ctx->pc = 0x7F430D0Cu;
    // 7F430D0C: bl      0x7F4310A0
    {
            ctx->lr = 0x7F430D10u;
            goto label_7F4310A0;
    }

label_7F430D10:
    ctx->pc = 0x7F430D10u;
    ctx->downcount -= 5;
    // 7F430D10: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430D14:
    ctx->pc = 0x7F430D14u;
    // 7F430D14: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430D14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F430D18:
    ctx->pc = 0x7F430D18u;
    // 7F430D18: lfs     f0, -9872(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430D18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430D1C:
    ctx->pc = 0x7F430D1Cu;
    // 7F430D1C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F430D1Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F430D20:
    ctx->pc = 0x7F430D20u;
    // 7F430D20: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430D20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430D24:
    ctx->pc = 0x7F430D24u;
    ctx->downcount -= 17;
    // 7F430D24: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F430D28:
    ctx->pc = 0x7F430D28u;
    // 7F430D28: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F430D2C:
    ctx->pc = 0x7F430D2Cu;
    // 7F430D2C: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F430D30:
    ctx->pc = 0x7F430D30u;
    // 7F430D30: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F430D34:
    ctx->pc = 0x7F430D34u;
    // 7F430D34: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F430D38:
    ctx->pc = 0x7F430D38u;
    // 7F430D38: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F430D3C:
    ctx->pc = 0x7F430D3Cu;
    // 7F430D3C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F430D40:
    ctx->pc = 0x7F430D40u;
    // 7F430D40: lfs     f27, -9980(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F430D40u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-9980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F430D44:
    ctx->pc = 0x7F430D44u;
    // 7F430D44: lfs     f28, -9868(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F430D44u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-9868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F430D48:
    ctx->pc = 0x7F430D48u;
    // 7F430D48: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F430D4C:
    ctx->pc = 0x7F430D4Cu;
    // 7F430D4C: lfs     f29, -9920(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F430D4Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-9920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F430D50:
    ctx->pc = 0x7F430D50u;
    // 7F430D50: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F430D54:
    ctx->pc = 0x7F430D54u;
    // 7F430D54: lfd     f30, -9968(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F430D54u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-9968);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430D58:
    ctx->pc = 0x7F430D58u;
    // 7F430D58: lis     r24, 17200
    ctx->gpr[24] = ((u32)(s32)(17200) << 16);

label_7F430D5C:
    ctx->pc = 0x7F430D5Cu;
    // 7F430D5C: lfs     f31, -9864(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F430D5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F430D60:
    ctx->pc = 0x7F430D60u;
    // 7F430D60: lfs     f25, -9976(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F430D60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F430D64:
    ctx->pc = 0x7F430D64u;
    // 7F430D64: lfs     f26, -9860(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F430D64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F430D68:
    ctx->downcount -= 1;
    // 7F430D68: bl      0x7F431048
    {
            ctx->lr = 0x7F430D6Cu;
            goto label_7F431048;
    }

label_7F430D6C:
    ctx->pc = 0x7F430D6Cu;
    ctx->downcount -= 3;
    // 7F430D6C: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F430D6Cu)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F430D70:
    ctx->pc = 0x7F430D70u;
    // 7F430D70: fmuls   f23, f27, f24
    if (!ppc_fp_available_inline(ctx, 0x7F430D70u)) return;
    ppc_fmuls(ctx, 23, 27, 24);

label_7F430D74:
    // 7F430D74: bl      0x7F431000
    {
            ctx->lr = 0x7F430D78u;
            goto label_7F431000;
    }

label_7F430D78:
    ctx->pc = 0x7F430D78u;
    ctx->downcount -= 6;
    // 7F430D78: fmadds f0, f28, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F430D78u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[28], ctx->fpr[1], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F430D7C:
    ctx->pc = 0x7F430D7Cu;
    // 7F430D7C: fmr    f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F430D7Cu)) return;
    ctx->fpr[1] = ctx->fpr[23];

label_7F430D80:
    ctx->pc = 0x7F430D80u;
    // 7F430D80: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F430D80u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F430D84:
    ctx->pc = 0x7F430D84u;
    // 7F430D84: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430D84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F430D88:
    ctx->pc = 0x7F430D88u;
    // 7F430D88: lwz     r22, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F430D8C:
    // 7F430D8C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F430D90u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F430D90:
    ctx->downcount -= 20;
    // 7F430D90: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F430D94:
    // 7F430D94: addi    r0, r31, 1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(1);

label_7F430D98:
    ctx->pc = 0x7F430D98u;
    // 7F430D98: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430D9C:
    // 7F430D9C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F430DA0:
    ctx->pc = 0x7F430DA0u;
    // 7F430DA0: lfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430DA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430DA4:
    // 7F430DA4: add   r23, r28, r25
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F430DA8:
    ctx->pc = 0x7F430DA8u;
    // 7F430DA8: stw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F430DAC:
    ctx->pc = 0x7F430DACu;
    // 7F430DAC: lfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430DACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430DB0:
    ctx->pc = 0x7F430DB0u;
    // 7F430DB0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430DB4:
    ctx->pc = 0x7F430DB4u;
    // 7F430DB4: fsubs   f2, f2, f30
    if (!ppc_fp_available_inline(ctx, 0x7F430DB4u)) return;
    ppc_fsubs(ctx, 2, 2, 30);

label_7F430DB8:
    ctx->pc = 0x7F430DB8u;
    // 7F430DB8: stw     r24, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F430DBC:
    ctx->pc = 0x7F430DBCu;
    // 7F430DBC: fmadds f3, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F430DBCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_7F430DC0:
    ctx->pc = 0x7F430DC0u;
    // 7F430DC0: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430DC4:
    ctx->pc = 0x7F430DC4u;
    // 7F430DC4: fmr    f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F430DC4u)) return;
    ctx->fpr[1] = ctx->fpr[23];

label_7F430DC8:
    ctx->pc = 0x7F430DC8u;
    // 7F430DC8: fsubs   f2, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F430DC8u)) return;
    ppc_fsubs(ctx, 2, 0, 30);

label_7F430DCC:
    ctx->pc = 0x7F430DCCu;
    // 7F430DCC: stfs     f3, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F430DCCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F430DD0:
    ctx->pc = 0x7F430DD0u;
    // 7F430DD0: lfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430DD0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430DD4:
    ctx->pc = 0x7F430DD4u;
    // 7F430DD4: fmadds f0, f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F430DD4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F430DD8:
    ctx->pc = 0x7F430DD8u;
    // 7F430DD8: stfs     f0, 4(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F430DD8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430DDC:
    // 7F430DDC: bl      0x7F008330
    {
            ctx->lr = 0x7F430DE0u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F430DE0:
    ctx->downcount -= 24;
    // 7F430DE0: xoris   r0, r22, 0x8000
    ctx->gpr[0] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F430DE4:
    ctx->pc = 0x7F430DE4u;
    // 7F430DE4: fneg    f0, f24
    if (!ppc_fp_available_inline(ctx, 0x7F430DE4u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[24]) ^ 0x8000000000000000ull);

label_7F430DE8:
    ctx->pc = 0x7F430DE8u;
    // 7F430DE8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430DEC:
    // 7F430DEC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F430DF0:
    ctx->pc = 0x7F430DF0u;
    // 7F430DF0: lfs     f2, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430DF0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F430DF4:
    // 7F430DF4: cmpwi   r31, 4
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

label_7F430DF8:
    ctx->pc = 0x7F430DF8u;
    // 7F430DF8: stw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F430DFC:
    ctx->pc = 0x7F430DFCu;
    // 7F430DFC: fmadds f0, f25, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F430DFCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[25], ctx->fpr[0], ctx->fpr[26], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F430E00:
    // 7F430E00: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F430E04:
    ctx->pc = 0x7F430E04u;
    // 7F430E04: lfd     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430E04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430E08:
    ctx->pc = 0x7F430E08u;
    // 7F430E08: fsubs   f3, f3, f30
    if (!ppc_fp_available_inline(ctx, 0x7F430E08u)) return;
    ppc_fsubs(ctx, 3, 3, 30);

label_7F430E0C:
    ctx->pc = 0x7F430E0Cu;
    // 7F430E0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F430E0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F430E10:
    ctx->pc = 0x7F430E10u;
    // 7F430E10: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F430E10u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F430E14:
    ctx->pc = 0x7F430E14u;
    // 7F430E14: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F430E18:
    ctx->pc = 0x7F430E18u;
    // 7F430E18: stfs     f1, 8(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F430E18u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F430E1C:
    ctx->pc = 0x7F430E1Cu;
    // 7F430E1C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430E20:
    ctx->pc = 0x7F430E20u;
    // 7F430E20: lfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F430E20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F430E24:
    ctx->pc = 0x7F430E24u;
    // 7F430E24: stfs     f0, 12(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F430E24u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F430E28:
    ctx->pc = 0x7F430E28u;
    // 7F430E28: sth     r0, 34(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F430E2C:
    ctx->pc = 0x7F430E2Cu;
    // 7F430E2C: lwz     r3, 32(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F430E30:
    ctx->pc = 0x7F430E30u;
    // 7F430E30: lwz     r0, 36(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430E34:
    ctx->pc = 0x7F430E34u;
    // 7F430E34: stw     r3, 40(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430E38:
    ctx->pc = 0x7F430E38u;
    // 7F430E38: stw     r0, 44(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430E3C:
    // 7F430E3C: bc    12, 0, 0x7F430D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430D68u;
                return;
            }
            goto label_7F430D68;
        }
    }

label_7F430E40:
    ctx->pc = 0x7F430E40u;
    ctx->downcount -= 2;
    // 7F430E40: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F430E44:
    ctx->pc = 0x7F430E44u;
    // 7F430E44: bl      0x7F3C664C
    {
            ctx->lr = 0x7F430E48u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F430E48:
    ctx->pc = 0x7F430E48u;
    ctx->downcount -= 2;
    // 7F430E48: cmplwi  r3, 0x0000
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

label_7F430E4C:
    ctx->pc = 0x7F430E4Cu;
    // 7F430E4C: bc    12, 2, 0x7F430E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F430E64;
        }
    }

label_7F430E50:
    ctx->pc = 0x7F430E50u;
    ctx->downcount -= 2;
    // 7F430E50: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430E54:
    ctx->pc = 0x7F430E54u;
    // 7F430E54: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F430E58u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F430E58:
    ctx->pc = 0x7F430E58u;
    ctx->downcount -= 3;
    // 7F430E58: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F430E5C:
    ctx->pc = 0x7F430E5Cu;
    // 7F430E5C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F430E60:
    ctx->pc = 0x7F430E60u;
    // 7F430E60: bl      0x7F4310A0
    {
            ctx->lr = 0x7F430E64u;
            goto label_7F4310A0;
    }

label_7F430E64:
    ctx->pc = 0x7F430E64u;
    ctx->downcount -= 2;
    // 7F430E64: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F430E68:
    ctx->pc = 0x7F430E68u;
    // 7F430E68: bl      0x7F3C664C
    {
            ctx->lr = 0x7F430E6Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F430E6C:
    ctx->pc = 0x7F430E6Cu;
    ctx->downcount -= 2;
    // 7F430E6C: cmplwi  r3, 0x0000
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

label_7F430E70:
    ctx->pc = 0x7F430E70u;
    // 7F430E70: bc    4, 2, 0x7F430E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430E7C;
        }
    }

label_7F430E74:
    ctx->pc = 0x7F430E74u;
    ctx->downcount -= 2;
    // 7F430E74: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F430E78:
    ctx->pc = 0x7F430E78u;
    // 7F430E78: b       0x7F430FA4
    {
            goto label_7F430FA4;
    }

label_7F430E7C:
    ctx->pc = 0x7F430E7Cu;
    ctx->downcount -= 1;
    // 7F430E7C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F430E80u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F430E80:
    ctx->pc = 0x7F430E80u;
    ctx->downcount -= 2;
    // 7F430E80: stw     r3, 3968(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3968);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430E84:
    ctx->pc = 0x7F430E84u;
    // 7F430E84: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F430E88u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F430E88:
    ctx->pc = 0x7F430E88u;
    ctx->downcount -= 2;
    // 7F430E88: stw     r3, 3972(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3972);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430E8C:
    ctx->pc = 0x7F430E8Cu;
    // 7F430E8C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F430E90u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F430E90:
    ctx->pc = 0x7F430E90u;
    ctx->downcount -= 2;
    // 7F430E90: stw     r3, 3976(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430E94:
    ctx->pc = 0x7F430E94u;
    // 7F430E94: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F430E98u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F430E98:
    ctx->pc = 0x7F430E98u;
    ctx->downcount -= 14;
    // 7F430E98: stw     r3, 3980(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430E9C:
    ctx->pc = 0x7F430E9Cu;
    // 7F430E9C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F430EA0:
    ctx->pc = 0x7F430EA0u;
    // 7F430EA0: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F430EA4:
    ctx->pc = 0x7F430EA4u;
    // 7F430EA4: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F430EA8:
    ctx->pc = 0x7F430EA8u;
    // 7F430EA8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F430EAC:
    ctx->pc = 0x7F430EACu;
    // 7F430EAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F430EB0:
    ctx->pc = 0x7F430EB0u;
    // 7F430EB0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430EB4:
    ctx->pc = 0x7F430EB4u;
    // 7F430EB4: stw     r5, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F430EB8:
    ctx->pc = 0x7F430EB8u;
    // 7F430EB8: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430EBC:
    ctx->pc = 0x7F430EBCu;
    // 7F430EBC: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F430EC0:
    ctx->pc = 0x7F430EC0u;
    // 7F430EC0: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430EC4:
    ctx->pc = 0x7F430EC4u;
    // 7F430EC4: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F430EC8:
    ctx->pc = 0x7F430EC8u;
    // 7F430EC8: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430ECC:
    ctx->pc = 0x7F430ECCu;
    // 7F430ECC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F430ED0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F430ED0:
    ctx->pc = 0x7F430ED0u;
    ctx->downcount -= 4;
    // 7F430ED0: stw     r3, 3988(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3988);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430ED4:
    ctx->pc = 0x7F430ED4u;
    // 7F430ED4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F430ED8:
    ctx->pc = 0x7F430ED8u;
    // 7F430ED8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F430EDC:
    ctx->pc = 0x7F430EDCu;
    // 7F430EDC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F430EE0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F430EE0:
    ctx->pc = 0x7F430EE0u;
    ctx->downcount -= 4;
    // 7F430EE0: stw     r3, 3984(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3984);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430EE4:
    ctx->pc = 0x7F430EE4u;
    // 7F430EE4: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F430EE8:
    ctx->pc = 0x7F430EE8u;
    // 7F430EE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F430EEC:
    ctx->pc = 0x7F430EECu;
    // 7F430EEC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F430EF0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F430EF0:
    ctx->pc = 0x7F430EF0u;
    ctx->downcount -= 5;
    // 7F430EF0: stw     r3, 4008(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4008);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F430EF4:
    ctx->pc = 0x7F430EF4u;
    // 7F430EF4: addi    r23, r26, 2476
    ctx->gpr[23] = ctx->gpr[26] + (u32)(s32)(2476);

label_7F430EF8:
    ctx->pc = 0x7F430EF8u;
    // 7F430EF8: lwz     r0, 3984(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430EFC:
    ctx->pc = 0x7F430EFCu;
    // 7F430EFC: cmpwi   r0, 0
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

label_7F430F00:
    ctx->pc = 0x7F430F00u;
    // 7F430F00: bc    4, 2, 0x7F430F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F430F34;
        }
    }

label_7F430F04:
    ctx->pc = 0x7F430F04u;
    ctx->downcount -= 4;
    // 7F430F04: lwz     r4, 3972(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3972);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430F08:
    ctx->pc = 0x7F430F08u;
    // 7F430F08: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F430F0C:
    ctx->pc = 0x7F430F0Cu;
    // 7F430F0C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F430F10:
    ctx->pc = 0x7F430F10u;
    // 7F430F10: bl      0x7F04272C
    {
            ctx->lr = 0x7F430F14u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F430F14:
    ctx->pc = 0x7F430F14u;
    ctx->downcount -= 4;
    // 7F430F14: lwz     r4, 3968(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430F18:
    ctx->pc = 0x7F430F18u;
    // 7F430F18: addi    r3, r26, 2432
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(2432);

label_7F430F1C:
    ctx->pc = 0x7F430F1Cu;
    // 7F430F1C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F430F20:
    ctx->pc = 0x7F430F20u;
    // 7F430F20: bl      0x7F04272C
    {
            ctx->lr = 0x7F430F24u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F430F24:
    ctx->pc = 0x7F430F24u;
    ctx->downcount -= 3;
    // 7F430F24: addi    r3, r26, 2432
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(2432);

label_7F430F28:
    ctx->pc = 0x7F430F28u;
    // 7F430F28: addi    r4, r26, 2696
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(2696);

label_7F430F2C:
    ctx->pc = 0x7F430F2Cu;
    // 7F430F2C: bl      0x7F042B20
    {
            ctx->lr = 0x7F430F30u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F430F30:
    ctx->pc = 0x7F430F30u;
    ctx->downcount -= 1;
    // 7F430F30: b       0x7F430F44
    {
            goto label_7F430F44;
    }

label_7F430F34:
    ctx->pc = 0x7F430F34u;
    ctx->downcount -= 4;
    // 7F430F34: lwz     r4, 3976(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430F38:
    ctx->pc = 0x7F430F38u;
    // 7F430F38: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F430F3C:
    ctx->pc = 0x7F430F3Cu;
    // 7F430F3C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F430F40:
    ctx->pc = 0x7F430F40u;
    // 7F430F40: bl      0x7F04272C
    {
            ctx->lr = 0x7F430F44u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F430F44:
    ctx->pc = 0x7F430F44u;
    ctx->downcount -= 3;
    // 7F430F44: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F430F48:
    ctx->pc = 0x7F430F48u;
    // 7F430F48: addi    r4, r26, 2824
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(2824);

label_7F430F4C:
    ctx->pc = 0x7F430F4Cu;
    // 7F430F4C: bl      0x7F042B20
    {
            ctx->lr = 0x7F430F50u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F430F50:
    ctx->pc = 0x7F430F50u;
    ctx->downcount -= 3;
    // 7F430F50: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430F54:
    ctx->pc = 0x7F430F54u;
    // 7F430F54: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F430F58:
    ctx->pc = 0x7F430F58u;
    // 7F430F58: bl      0x7F430A48
    {
            ctx->lr = 0x7F430F5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430A48u;
                return;
            }
            goto label_7F430A48;
    }

label_7F430F5C:
    ctx->pc = 0x7F430F5Cu;
    ctx->downcount -= 2;
    // 7F430F5C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F430F60:
    ctx->pc = 0x7F430F60u;
    // 7F430F60: bl      0x7F430044
    {
            ctx->lr = 0x7F430F64u;
            ctx->pc = 0x7F430044u;
            return;
    }

label_7F430F64:
    ctx->pc = 0x7F430F64u;
    ctx->downcount -= 2;
    // 7F430F64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F430F68:
    ctx->pc = 0x7F430F68u;
    // 7F430F68: bl      0x7F01C018
    {
            ctx->lr = 0x7F430F6Cu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F430F6C:
    ctx->pc = 0x7F430F6Cu;
    ctx->downcount -= 14;
    // 7F430F6C: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F430F70:
    ctx->pc = 0x7F430F70u;
    // 7F430F70: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F430F74:
    ctx->pc = 0x7F430F74u;
    // 7F430F74: lwz     r6, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F430F78:
    ctx->pc = 0x7F430F78u;
    // 7F430F78: addi    r5, r4, -22728
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F430F7C:
    ctx->pc = 0x7F430F7Cu;
    // 7F430F7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F430F80:
    ctx->pc = 0x7F430F80u;
    // 7F430F80: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F430F84:
    ctx->pc = 0x7F430F84u;
    // 7F430F84: lwzx    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F430F88:
    ctx->pc = 0x7F430F88u;
    // 7F430F88: or   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[3];
    }

label_7F430F8C:
    ctx->pc = 0x7F430F8Cu;
    // 7F430F8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F430F90:
    ctx->pc = 0x7F430F90u;
    // 7F430F90: stwx    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F430F94:
    ctx->pc = 0x7F430F94u;
    // 7F430F94: stw     r0, 4004(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430F98:
    ctx->pc = 0x7F430F98u;
    // 7F430F98: stw     r0, 4012(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430F9C:
    ctx->pc = 0x7F430F9Cu;
    // 7F430F9C: stw     r0, 3996(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430FA0:
    ctx->pc = 0x7F430FA0u;
    // 7F430FA0: stw     r0, 4000(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430FA4:
    ctx->pc = 0x7F430FA4u;
    ctx->downcount -= 34;
    // 7F430FA4: psq_l   f31, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F430FA4u);
        if (ctx->exception) return;
    }

label_7F430FA8:
    ctx->pc = 0x7F430FA8u;
    // 7F430FA8: lfd     f31, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FAC:
    ctx->pc = 0x7F430FACu;
    // 7F430FAC: psq_l   f30, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F430FACu);
        if (ctx->exception) return;
    }

label_7F430FB0:
    ctx->pc = 0x7F430FB0u;
    // 7F430FB0: lfd     f30, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FB4:
    ctx->pc = 0x7F430FB4u;
    // 7F430FB4: psq_l   f29, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F430FB4u);
        if (ctx->exception) return;
    }

label_7F430FB8:
    ctx->pc = 0x7F430FB8u;
    // 7F430FB8: lfd     f29, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FBC:
    ctx->pc = 0x7F430FBCu;
    // 7F430FBC: psq_l   f28, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F430FBCu);
        if (ctx->exception) return;
    }

label_7F430FC0:
    ctx->pc = 0x7F430FC0u;
    // 7F430FC0: lfd     f28, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FC4:
    ctx->pc = 0x7F430FC4u;
    // 7F430FC4: psq_l   f27, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F430FC4u);
        if (ctx->exception) return;
    }

label_7F430FC8:
    ctx->pc = 0x7F430FC8u;
    // 7F430FC8: lfd     f27, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FCC:
    ctx->pc = 0x7F430FCCu;
    // 7F430FCC: psq_l   f26, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F430FCCu);
        if (ctx->exception) return;
    }

label_7F430FD0:
    ctx->pc = 0x7F430FD0u;
    // 7F430FD0: lfd     f26, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FD4:
    ctx->pc = 0x7F430FD4u;
    // 7F430FD4: psq_l   f25, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F430FD4u);
        if (ctx->exception) return;
    }

label_7F430FD8:
    ctx->pc = 0x7F430FD8u;
    // 7F430FD8: lfd     f25, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FDC:
    ctx->pc = 0x7F430FDCu;
    // 7F430FDC: psq_l   f24, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F430FDCu);
        if (ctx->exception) return;
    }

label_7F430FE0:
    ctx->pc = 0x7F430FE0u;
    // 7F430FE0: lfd     f24, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FE4:
    ctx->pc = 0x7F430FE4u;
    // 7F430FE4: psq_l   f23, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F430FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F430FE4u);
        if (ctx->exception) return;
    }

label_7F430FE8:
    ctx->pc = 0x7F430FE8u;
    // 7F430FE8: lfd     f23, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F430FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F430FEC:
    ctx->pc = 0x7F430FECu;
    // 7F430FEC: lmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430FF0:
    ctx->pc = 0x7F430FF0u;
    // 7F430FF0: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430FF4:
    ctx->pc = 0x7F430FF4u;
    // 7F430FF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F430FF8:
    ctx->pc = 0x7F430FF8u;
    // 7F430FF8: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_7F430FFC:
    ctx->pc = 0x7F430FFCu;
    // 7F430FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431000:
    ctx->pc = 0x7F431000u;
    ctx->downcount -= 4;
    // 7F431000: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431004:
    ctx->pc = 0x7F431004u;
    // 7F431004: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431008:
    ctx->pc = 0x7F431008u;
    // 7F431008: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43100C:
    ctx->pc = 0x7F43100Cu;
    // 7F43100C: bl      0x7F430934
    {
            ctx->lr = 0x7F431010u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430934u;
                return;
            }
            goto label_7F430934;
    }

label_7F431010:
    ctx->pc = 0x7F431010u;
    ctx->downcount -= 31;
    // 7F431010: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F431014:
    ctx->pc = 0x7F431014u;
    // 7F431014: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431018:
    ctx->pc = 0x7F431018u;
    // 7F431018: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43101C:
    ctx->pc = 0x7F43101Cu;
    // 7F43101C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431020:
    ctx->pc = 0x7F431020u;
    // 7F431020: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431024:
    ctx->pc = 0x7F431024u;
    // 7F431024: lfd     f2, -9848(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F431024u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9848);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431028:
    ctx->pc = 0x7F431028u;
    // 7F431028: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43102C:
    ctx->pc = 0x7F43102Cu;
    // 7F43102C: lfs     f0, -9856(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F43102Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9856);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431030:
    ctx->pc = 0x7F431030u;
    // 7F431030: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431030u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F431034:
    ctx->pc = 0x7F431034u;
    // 7F431034: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431038:
    ctx->pc = 0x7F431038u;
    // 7F431038: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431038u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F43103C:
    ctx->pc = 0x7F43103Cu;
    // 7F43103C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431040:
    ctx->pc = 0x7F431040u;
    // 7F431040: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431044:
    ctx->pc = 0x7F431044u;
    // 7F431044: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431048:
    ctx->pc = 0x7F431048u;
    ctx->downcount -= 4;
    // 7F431048: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43104C:
    ctx->pc = 0x7F43104Cu;
    // 7F43104C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431050:
    ctx->pc = 0x7F431050u;
    // 7F431050: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431054:
    ctx->pc = 0x7F431054u;
    // 7F431054: bl      0x7F430934
    {
            ctx->lr = 0x7F431058u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430934u;
                return;
            }
            goto label_7F430934;
    }

label_7F431058:
    ctx->pc = 0x7F431058u;
    ctx->downcount -= 35;
    // 7F431058: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F43105C:
    ctx->pc = 0x7F43105Cu;
    // 7F43105C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431060:
    ctx->pc = 0x7F431060u;
    // 7F431060: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431064:
    ctx->pc = 0x7F431064u;
    // 7F431064: addi    r5, r4, -9848
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9848);

label_7F431068:
    ctx->pc = 0x7F431068u;
    // 7F431068: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43106C:
    ctx->pc = 0x7F43106Cu;
    // 7F43106C: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F43106Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431070:
    ctx->pc = 0x7F431070u;
    // 7F431070: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431074:
    ctx->pc = 0x7F431074u;
    // 7F431074: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431078:
    ctx->pc = 0x7F431078u;
    // 7F431078: lfs     f1, -9840(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F431078u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9840);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43107C:
    ctx->pc = 0x7F43107Cu;
    // 7F43107C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43107Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431080:
    ctx->pc = 0x7F431080u;
    // 7F431080: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431084:
    ctx->pc = 0x7F431084u;
    // 7F431084: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431084u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F431088:
    ctx->pc = 0x7F431088u;
    // 7F431088: lfs     f0, -9836(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431088u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9836);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43108C:
    ctx->pc = 0x7F43108Cu;
    // 7F43108C: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F43108Cu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F431090:
    ctx->pc = 0x7F431090u;
    // 7F431090: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431090u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F431094:
    ctx->pc = 0x7F431094u;
    // 7F431094: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431098:
    ctx->pc = 0x7F431098u;
    // 7F431098: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F43109C:
    ctx->pc = 0x7F43109Cu;
    // 7F43109C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4310A0:
    ctx->pc = 0x7F4310A0u;
    ctx->downcount -= 17;
    // 7F4310A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4310A4:
    ctx->pc = 0x7F4310A4u;
    // 7F4310A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4310A8:
    ctx->pc = 0x7F4310A8u;
    // 7F4310A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4310AC:
    ctx->pc = 0x7F4310ACu;
    // 7F4310AC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4310B0:
    ctx->pc = 0x7F4310B0u;
    // 7F4310B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4310B4:
    ctx->pc = 0x7F4310B4u;
    // 7F4310B4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4310B8:
    ctx->pc = 0x7F4310B8u;
    // 7F4310B8: bl      0x7F4310F4
    {
            ctx->lr = 0x7F4310BCu;
            goto label_7F4310F4;
    }

label_7F4310BC:
    ctx->pc = 0x7F4310BCu;
    ctx->downcount -= 3;
    // 7F4310BC: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F4310C0:
    ctx->pc = 0x7F4310C0u;
    // 7F4310C0: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F4310C4:
    ctx->pc = 0x7F4310C4u;
    // 7F4310C4: bl      0x7F4310F4
    {
            ctx->lr = 0x7F4310C8u;
            goto label_7F4310F4;
    }

label_7F4310C8:
    ctx->pc = 0x7F4310C8u;
    ctx->downcount -= 3;
    // 7F4310C8: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F4310CC:
    ctx->pc = 0x7F4310CCu;
    // 7F4310CC: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F4310D0:
    ctx->pc = 0x7F4310D0u;
    // 7F4310D0: bl      0x7F4310F4
    {
            ctx->lr = 0x7F4310D4u;
            goto label_7F4310F4;
    }

label_7F4310D4:
    ctx->pc = 0x7F4310D4u;
    ctx->downcount -= 3;
    // 7F4310D4: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F4310D8:
    ctx->pc = 0x7F4310D8u;
    // 7F4310D8: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F4310DC:
    ctx->pc = 0x7F4310DCu;
    // 7F4310DC: bl      0x7F4310F4
    {
            ctx->lr = 0x7F4310E0u;
            goto label_7F4310F4;
    }

label_7F4310E0:
    ctx->pc = 0x7F4310E0u;
    ctx->downcount -= 16;
    // 7F4310E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4310E4:
    ctx->pc = 0x7F4310E4u;
    // 7F4310E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4310E8:
    ctx->pc = 0x7F4310E8u;
    // 7F4310E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4310EC:
    ctx->pc = 0x7F4310ECu;
    // 7F4310EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4310F0:
    ctx->pc = 0x7F4310F0u;
    // 7F4310F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4310F4:
    ctx->pc = 0x7F4310F4u;
    ctx->downcount -= 6;
    // 7F4310F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4310F8:
    ctx->pc = 0x7F4310F8u;
    // 7F4310F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4310FC:
    ctx->pc = 0x7F4310FCu;
    // 7F4310FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431100:
    ctx->pc = 0x7F431100u;
    // 7F431100: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F431104:
    ctx->pc = 0x7F431104u;
    // 7F431104: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F431108:
    ctx->pc = 0x7F431108u;
    // 7F431108: bl      0x7F431124
    {
            ctx->lr = 0x7F43110Cu;
            goto label_7F431124;
    }

label_7F43110C:
    ctx->pc = 0x7F43110Cu;
    ctx->downcount -= 7;
    // 7F43110C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F43110Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F431110:
    ctx->pc = 0x7F431110u;
    // 7F431110: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431114:
    ctx->pc = 0x7F431114u;
    // 7F431114: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F431118:
    ctx->pc = 0x7F431118u;
    // 7F431118: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43111C:
    ctx->pc = 0x7F43111Cu;
    // 7F43111C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431120:
    ctx->pc = 0x7F431120u;
    // 7F431120: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431124:
    ctx->pc = 0x7F431124u;
    ctx->downcount -= 4;
    // 7F431124: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F431124u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F431124u);
        if (ctx->exception) return;
    }

label_7F431128:
    ctx->pc = 0x7F431128u;
    // 7F431128: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F431128u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F431128u);
        if (ctx->exception) return;
    }

label_7F43112C:
    ctx->pc = 0x7F43112Cu;
    // 7F43112C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43112Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F431130:
    ctx->pc = 0x7F431130u;
    // 7F431130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431134:
    ctx->pc = 0x7F431134u;
    ctx->downcount -= 21;
    // 7F431134: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431138:
    ctx->pc = 0x7F431138u;
    // 7F431138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43113C:
    ctx->pc = 0x7F43113Cu;
    // 7F43113C: li      r5, 4016
    ctx->gpr[5] = (u32)(s32)(4016);

label_7F431140:
    ctx->pc = 0x7F431140u;
    // 7F431140: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F431144:
    ctx->pc = 0x7F431144u;
    // 7F431144: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431148:
    ctx->pc = 0x7F431148u;
    // 7F431148: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43114C:
    ctx->pc = 0x7F43114Cu;
    // 7F43114C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431150:
    ctx->pc = 0x7F431150u;
    // 7F431150: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F431154:
    ctx->pc = 0x7F431154u;
    // 7F431154: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F431158:
    ctx->pc = 0x7F431158u;
    // 7F431158: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F43115C:
    ctx->pc = 0x7F43115Cu;
    // 7F43115C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F431160u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F431160:
    ctx->pc = 0x7F431160u;
    ctx->downcount -= 2;
    // 7F431160: or.   r31, r3, r3
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

label_7F431164:
    ctx->pc = 0x7F431164u;
    // 7F431164: bc    12, 2, 0x7F4311A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4311A4;
        }
    }

label_7F431168:
    ctx->pc = 0x7F431168u;
    ctx->downcount -= 5;
    // 7F431168: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F43116C:
    ctx->pc = 0x7F43116Cu;
    // 7F43116C: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F431170:
    ctx->pc = 0x7F431170u;
    // 7F431170: addi    r4, r4, 748
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(748);

label_7F431174:
    ctx->pc = 0x7F431174u;
    // 7F431174: addi    r5, r5, 2392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2392);

label_7F431178:
    ctx->pc = 0x7F431178u;
    // 7F431178: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F43117Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F43117C:
    ctx->pc = 0x7F43117Cu;
    ctx->downcount -= 4;
    // 7F43117C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F431180:
    ctx->pc = 0x7F431180u;
    // 7F431180: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F431184:
    ctx->pc = 0x7F431184u;
    // 7F431184: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431188:
    ctx->pc = 0x7F431188u;
    // 7F431188: bl      0x7F430B8C
    {
            ctx->lr = 0x7F43118Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430B8Cu;
                return;
            }
            goto label_7F430B8C;
    }

label_7F43118C:
    ctx->pc = 0x7F43118Cu;
    ctx->downcount -= 2;
    // 7F43118C: cmpwi   r3, 0
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

label_7F431190:
    ctx->pc = 0x7F431190u;
    // 7F431190: bc    4, 0, 0x7F4311A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4311A4;
        }
    }

label_7F431194:
    ctx->pc = 0x7F431194u;
    ctx->downcount -= 2;
    // 7F431194: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F431198:
    ctx->pc = 0x7F431198u;
    // 7F431198: bl      0x7F3C8210
    {
            ctx->lr = 0x7F43119Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F43119C:
    ctx->pc = 0x7F43119Cu;
    ctx->downcount -= 2;
    // 7F43119C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4311A0:
    ctx->pc = 0x7F4311A0u;
    // 7F4311A0: b       0x7F4311A8
    {
            goto label_7F4311A8;
    }

label_7F4311A4:
    ctx->pc = 0x7F4311A4u;
    ctx->downcount -= 1;
    // 7F4311A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4311A8:
    ctx->pc = 0x7F4311A8u;
    ctx->downcount -= 16;
    // 7F4311A8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4311AC:
    ctx->pc = 0x7F4311ACu;
    // 7F4311AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4311B0:
    ctx->pc = 0x7F4311B0u;
    // 7F4311B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4311B4:
    ctx->pc = 0x7F4311B4u;
    // 7F4311B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4311B8:
    ctx->pc = 0x7F4311B8u;
    // 7F4311B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4311BC:
    ctx->pc = 0x7F4311BCu;
    ctx->downcount -= 8;
    // 7F4311BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4311C0:
    ctx->pc = 0x7F4311C0u;
    // 7F4311C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4311C4:
    ctx->pc = 0x7F4311C4u;
    // 7F4311C4: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F4311C8:
    ctx->pc = 0x7F4311C8u;
    // 7F4311C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4311CC:
    ctx->pc = 0x7F4311CCu;
    // 7F4311CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4311D0:
    ctx->pc = 0x7F4311D0u;
    // 7F4311D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4311D4:
    ctx->pc = 0x7F4311D4u;
    // 7F4311D4: addi    r3, r4, -1900
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1900);

label_7F4311D8:
    ctx->pc = 0x7F4311D8u;
    // 7F4311D8: bl      0x80025A08
    {
            ctx->lr = 0x7F4311DCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F4311DC:
    ctx->pc = 0x7F4311DCu;
    ctx->downcount -= 16;
    // 7F4311DC: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F4311E0:
    ctx->pc = 0x7F4311E0u;
    // 7F4311E0: lfs     f0, 604(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4311E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4311E4:
    ctx->pc = 0x7F4311E4u;
    // 7F4311E4: addi    r3, r3, -1900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1900);

label_7F4311E8:
    ctx->pc = 0x7F4311E8u;
    // 7F4311E8: lis     r4, 7705
    ctx->gpr[4] = ((u32)(s32)(7705) << 16);

label_7F4311EC:
    ctx->pc = 0x7F4311ECu;
    // 7F4311EC: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4311ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4311F0:
    ctx->pc = 0x7F4311F0u;
    // 7F4311F0: lis     r5, 3864
    ctx->gpr[5] = ((u32)(s32)(3864) << 16);

label_7F4311F4:
    ctx->pc = 0x7F4311F4u;
    // 7F4311F4: lis     r6, 5210
    ctx->gpr[6] = ((u32)(s32)(5210) << 16);

label_7F4311F8:
    ctx->pc = 0x7F4311F8u;
    // 7F4311F8: addi    r4, r4, -15372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15372);

label_7F4311FC:
    ctx->pc = 0x7F4311FCu;
    // 7F4311FC: lfs     f0, 608(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4311FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431200:
    ctx->pc = 0x7F431200u;
    // 7F431200: addi    r5, r5, 14057
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14057);

label_7F431204:
    ctx->pc = 0x7F431204u;
    // 7F431204: addi    r6, r6, 19535
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(19535);

label_7F431208:
    ctx->pc = 0x7F431208u;
    // 7F431208: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F43120C:
    ctx->pc = 0x7F43120Cu;
    // 7F43120C: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F43120Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431210:
    ctx->pc = 0x7F431210u;
    // 7F431210: lfs     f0, 612(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431210u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431214:
    ctx->pc = 0x7F431214u;
    // 7F431214: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431214u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431218:
    ctx->pc = 0x7F431218u;
    // 7F431218: bl      0x7F41547C
    {
            ctx->lr = 0x7F43121Cu;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F43121C:
    ctx->pc = 0x7F43121Cu;
    ctx->downcount -= 6;
    // 7F43121C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431220:
    ctx->pc = 0x7F431220u;
    // 7F431220: lis     r5, 32592
    ctx->gpr[5] = ((u32)(s32)(32592) << 16);

label_7F431224:
    ctx->pc = 0x7F431224u;
    // 7F431224: addi    r4, r3, -9824
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9824);

label_7F431228:
    ctx->pc = 0x7F431228u;
    // 7F431228: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F431228u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43122C:
    ctx->pc = 0x7F43122Cu;
    // 7F43122C: addi    r3, r5, -1900
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1900);

label_7F431230:
    ctx->pc = 0x7F431230u;
    // 7F431230: bl      0x7F3FBA68
    {
            ctx->lr = 0x7F431234u;
            ctx->pc = 0x7F3FBA68u;
            return;
    }

label_7F431234:
    ctx->pc = 0x7F431234u;
    ctx->downcount -= 5;
    // 7F431234: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F431238:
    ctx->pc = 0x7F431238u;
    // 7F431238: stw     r0, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43123C:
    ctx->pc = 0x7F43123Cu;
    // 7F43123C: lwz     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431240:
    ctx->pc = 0x7F431240u;
    // 7F431240: cmpwi   r3, 0
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

label_7F431244:
    ctx->pc = 0x7F431244u;
    // 7F431244: bc    12, 2, 0x7F431258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431258;
        }
    }

label_7F431248:
    ctx->pc = 0x7F431248u;
    ctx->downcount -= 2;
    // 7F431248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43124C:
    ctx->pc = 0x7F43124Cu;
    // 7F43124C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F431250u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F431250:
    ctx->pc = 0x7F431250u;
    ctx->downcount -= 2;
    // 7F431250: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F431254:
    ctx->pc = 0x7F431254u;
    // 7F431254: stw     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431258:
    ctx->pc = 0x7F431258u;
    ctx->downcount -= 6;
    // 7F431258: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43125C:
    ctx->pc = 0x7F43125Cu;
    // 7F43125C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F431260:
    ctx->pc = 0x7F431260u;
    // 7F431260: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431264:
    ctx->pc = 0x7F431264u;
    // 7F431264: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431268:
    ctx->pc = 0x7F431268u;
    // 7F431268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43126C:
    ctx->pc = 0x7F43126Cu;
    ctx->downcount -= 21;
    // 7F43126C: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431270:
    ctx->pc = 0x7F431270u;
    // 7F431270: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431274:
    ctx->pc = 0x7F431274u;
    // 7F431274: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431278:
    ctx->pc = 0x7F431278u;
    // 7F431278: stmw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43127C:
    ctx->pc = 0x7F43127Cu;
    // 7F43127C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431280:
    ctx->pc = 0x7F431280u;
    // 7F431280: addi    r30, r31, 32
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(32);

label_7F431284:
    ctx->pc = 0x7F431284u;
    // 7F431284: addi    r4, r31, 476
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(476);

label_7F431288:
    ctx->pc = 0x7F431288u;
    // 7F431288: lwz     r5, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F43128C:
    ctx->pc = 0x7F43128Cu;
    // 7F43128C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431290:
    ctx->pc = 0x7F431290u;
    // 7F431290: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F431294:
    ctx->pc = 0x7F431294u;
    // 7F431294: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F431298u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F431298:
    ctx->pc = 0x7F431298u;
    ctx->downcount -= 2;
    // 7F431298: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43129C:
    ctx->pc = 0x7F43129Cu;
    // 7F43129C: bl      0x7F023170
    {
            ctx->lr = 0x7F4312A0u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F4312A0:
    ctx->pc = 0x7F4312A0u;
    ctx->downcount -= 2;
    // 7F4312A0: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F4312A4:
    ctx->pc = 0x7F4312A4u;
    // 7F4312A4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F4312A8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F4312A8:
    ctx->pc = 0x7F4312A8u;
    ctx->downcount -= 3;
    // 7F4312A8: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4312AC:
    ctx->pc = 0x7F4312ACu;
    // 7F4312AC: cmpwi   r3, 0
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

label_7F4312B0:
    ctx->pc = 0x7F4312B0u;
    // 7F4312B0: bc    4, 1, 0x7F43167C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43167C;
        }
    }

label_7F4312B4:
    ctx->pc = 0x7F4312B4u;
    ctx->downcount -= 3;
    // 7F4312B4: addi    r0, r3, -6
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6);

label_7F4312B8:
    ctx->pc = 0x7F4312B8u;
    // 7F4312B8: cmplwi  r0, 0x0036
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0036u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F4312BC:
    ctx->pc = 0x7F4312BCu;
    // 7F4312BC: bc    12, 1, 0x7F431670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431670;
        }
    }

label_7F4312C0:
    ctx->pc = 0x7F4312C0u;
    ctx->downcount -= 7;
    // 7F4312C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4312C4:
    ctx->pc = 0x7F4312C4u;
    // 7F4312C4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4312C8:
    ctx->pc = 0x7F4312C8u;
    // 7F4312C8: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F4312CC:
    ctx->pc = 0x7F4312CCu;
    // 7F4312CC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4312D0:
    ctx->pc = 0x7F4312D0u;
    // 7F4312D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4312D4:
    ctx->pc = 0x7F4312D4u;
    // 7F4312D4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F4312D8:
    ctx->pc = 0x7F4312D8u;
    ctx->downcount -= 6;
    // 7F4312D8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F4312DC:
    ctx->pc = 0x7F4312DCu;
    // 7F4312DC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F4312E0:
    ctx->pc = 0x7F4312E0u;
    // 7F4312E0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4312E4:
    ctx->pc = 0x7F4312E4u;
    // 7F4312E4: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F4312E8:
    ctx->pc = 0x7F4312E8u;
    // 7F4312E8: cmpwi   r0, 40
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

label_7F4312EC:
    ctx->pc = 0x7F4312ECu;
    // 7F4312EC: bc    12, 2, 0x7F4312F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4312F8;
        }
    }

label_7F4312F0:
    ctx->pc = 0x7F4312F0u;
    ctx->downcount -= 2;
    // 7F4312F0: cmpwi   r0, 50
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

label_7F4312F4:
    ctx->pc = 0x7F4312F4u;
    // 7F4312F4: bc    4, 2, 0x7F431300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431300;
        }
    }

label_7F4312F8:
    ctx->pc = 0x7F4312F8u;
    ctx->downcount -= 2;
    // 7F4312F8: lha     r7, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F4312FC:
    ctx->pc = 0x7F4312FCu;
    // 7F4312FC: b       0x7F43133C
    {
            goto label_7F43133C;
    }

label_7F431300:
    ctx->pc = 0x7F431300u;
    ctx->downcount -= 15;
    // 7F431300: lha     r4, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F431304:
    ctx->pc = 0x7F431304u;
    // 7F431304: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F431308:
    ctx->pc = 0x7F431308u;
    // 7F431308: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F43130C:
    ctx->pc = 0x7F43130Cu;
    // 7F43130C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431310:
    ctx->pc = 0x7F431310u;
    // 7F431310: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F431314:
    ctx->pc = 0x7F431314u;
    // 7F431314: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431318:
    ctx->pc = 0x7F431318u;
    // 7F431318: lfd     f2, -9832(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431318u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9832);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43131C:
    ctx->pc = 0x7F43131Cu;
    // 7F43131C: stw     r4, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F431320:
    ctx->pc = 0x7F431320u;
    // 7F431320: lfs     f0, -9820(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431320u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9820);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431324:
    ctx->pc = 0x7F431324u;
    // 7F431324: lfd     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431324u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431328:
    ctx->pc = 0x7F431328u;
    // 7F431328: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431328u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F43132C:
    ctx->pc = 0x7F43132Cu;
    // 7F43132C: fmadds f0, f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43132Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F431330:
    ctx->pc = 0x7F431330u;
    // 7F431330: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431330u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F431334:
    ctx->pc = 0x7F431334u;
    // 7F431334: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431334u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F431338:
    ctx->pc = 0x7F431338u;
    // 7F431338: lwz     r7, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F43133C:
    ctx->pc = 0x7F43133Cu;
    ctx->downcount -= 8;
    // 7F43133C: addi    r3, r31, 604
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(604);

label_7F431340:
    ctx->pc = 0x7F431340u;
    // 7F431340: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F431344:
    ctx->pc = 0x7F431344u;
    // 7F431344: li      r5, 12500
    ctx->gpr[5] = (u32)(s32)(12500);

label_7F431348:
    ctx->pc = 0x7F431348u;
    // 7F431348: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F43134C:
    ctx->pc = 0x7F43134Cu;
    // 7F43134C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F431350:
    ctx->pc = 0x7F431350u;
    // 7F431350: li      r9, 9
    ctx->gpr[9] = (u32)(s32)(9);

label_7F431354:
    ctx->pc = 0x7F431354u;
    // 7F431354: li      r10, 30
    ctx->gpr[10] = (u32)(s32)(30);

label_7F431358:
    ctx->pc = 0x7F431358u;
    // 7F431358: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F43135Cu;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F43135C:
    ctx->pc = 0x7F43135Cu;
    ctx->downcount -= 1;
    // 7F43135C: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F431360:
    ctx->pc = 0x7F431360u;
    ctx->downcount -= 2;
    // 7F431360: addi    r3, r31, 604
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(604);

label_7F431364:
    ctx->pc = 0x7F431364u;
    // 7F431364: bl      0x7F177774
    {
            ctx->lr = 0x7F431368u;
            ctx->pc = 0x7F177774u;
            return;
    }

label_7F431368:
    ctx->pc = 0x7F431368u;
    ctx->downcount -= 1;
    // 7F431368: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F43136C:
    ctx->pc = 0x7F43136Cu;
    ctx->downcount -= 3;
    // 7F43136C: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431370:
    ctx->pc = 0x7F431370u;
    // 7F431370: addi    r3, r3, -1964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1964);

label_7F431374:
    ctx->pc = 0x7F431374u;
    // 7F431374: bl      0x80025A08
    {
            ctx->lr = 0x7F431378u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F431378:
    ctx->pc = 0x7F431378u;
    ctx->downcount -= 28;
    // 7F431378: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43137C:
    ctx->pc = 0x7F43137Cu;
    // 7F43137C: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431380:
    ctx->pc = 0x7F431380u;
    // 7F431380: addi    r5, r4, -9816
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9816);

label_7F431384:
    ctx->pc = 0x7F431384u;
    // 7F431384: lis     r6, 3159
    ctx->gpr[6] = ((u32)(s32)(3159) << 16);

label_7F431388:
    ctx->pc = 0x7F431388u;
    // 7F431388: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431388u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43138C:
    ctx->pc = 0x7F43138Cu;
    // 7F43138C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431390:
    ctx->pc = 0x7F431390u;
    // 7F431390: lfs     f0, 604(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431390u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431394:
    ctx->pc = 0x7F431394u;
    // 7F431394: addi    r8, r4, -9812
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-9812);

label_7F431398:
    ctx->pc = 0x7F431398u;
    // 7F431398: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F43139C:
    ctx->pc = 0x7F43139Cu;
    // 7F43139C: lis     r4, 6474
    ctx->gpr[4] = ((u32)(s32)(6474) << 16);

label_7F4313A0:
    ctx->pc = 0x7F4313A0u;
    // 7F4313A0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4313A0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4313A4:
    ctx->pc = 0x7F4313A4u;
    // 7F4313A4: addi    r7, r5, -9808
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-9808);

label_7F4313A8:
    ctx->pc = 0x7F4313A8u;
    // 7F4313A8: addi    r3, r3, -1964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1964);

label_7F4313AC:
    ctx->pc = 0x7F4313ACu;
    // 7F4313AC: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F4313ACu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4313B0:
    ctx->pc = 0x7F4313B0u;
    // 7F4313B0: lis     r5, 3121
    ctx->gpr[5] = ((u32)(s32)(3121) << 16);

label_7F4313B4:
    ctx->pc = 0x7F4313B4u;
    // 7F4313B4: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F4313B4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4313B8:
    ctx->pc = 0x7F4313B8u;
    // 7F4313B8: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4313B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4313BC:
    ctx->pc = 0x7F4313BCu;
    // 7F4313BC: addi    r4, r4, -4870
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4870);

label_7F4313C0:
    ctx->pc = 0x7F4313C0u;
    // 7F4313C0: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F4313C4:
    ctx->pc = 0x7F4313C4u;
    // 7F4313C4: addi    r6, r6, 20316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20316);

label_7F4313C8:
    ctx->pc = 0x7F4313C8u;
    // 7F4313C8: lfs     f0, 608(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4313C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4313CC:
    ctx->pc = 0x7F4313CCu;
    // 7F4313CC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F4313D0:
    ctx->pc = 0x7F4313D0u;
    // 7F4313D0: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4313D0u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F4313D4:
    ctx->pc = 0x7F4313D4u;
    // 7F4313D4: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4313D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4313D8:
    ctx->pc = 0x7F4313D8u;
    // 7F4313D8: lfs     f0, 612(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4313D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4313DC:
    ctx->pc = 0x7F4313DCu;
    // 7F4313DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4313DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4313E0:
    ctx->pc = 0x7F4313E0u;
    // 7F4313E0: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4313E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4313E4:
    ctx->pc = 0x7F4313E4u;
    // 7F4313E4: bl      0x7F41547C
    {
            ctx->lr = 0x7F4313E8u;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F4313E8:
    ctx->pc = 0x7F4313E8u;
    ctx->downcount -= 1;
    // 7F4313E8: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F4313EC:
    ctx->pc = 0x7F4313ECu;
    ctx->downcount -= 3;
    // 7F4313EC: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F4313F0:
    ctx->pc = 0x7F4313F0u;
    // 7F4313F0: addi    r3, r3, -2028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2028);

label_7F4313F4:
    ctx->pc = 0x7F4313F4u;
    // 7F4313F4: bl      0x80025A08
    {
            ctx->lr = 0x7F4313F8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F4313F8:
    ctx->pc = 0x7F4313F8u;
    ctx->downcount -= 25;
    // 7F4313F8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4313FC:
    ctx->pc = 0x7F4313FCu;
    // 7F4313FC: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431400:
    ctx->pc = 0x7F431400u;
    // 7F431400: addi    r5, r4, -9804
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9804);

label_7F431404:
    ctx->pc = 0x7F431404u;
    // 7F431404: lis     r6, 3159
    ctx->gpr[6] = ((u32)(s32)(3159) << 16);

label_7F431408:
    ctx->pc = 0x7F431408u;
    // 7F431408: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431408u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F43140C:
    ctx->pc = 0x7F43140Cu;
    // 7F43140C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431410:
    ctx->pc = 0x7F431410u;
    // 7F431410: lfs     f0, 604(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431410u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431414:
    ctx->pc = 0x7F431414u;
    // 7F431414: addi    r7, r4, -9800
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-9800);

label_7F431418:
    ctx->pc = 0x7F431418u;
    // 7F431418: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F431418u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43141C:
    ctx->pc = 0x7F43141Cu;
    // 7F43141C: lis     r4, 6474
    ctx->gpr[4] = ((u32)(s32)(6474) << 16);

label_7F431420:
    ctx->pc = 0x7F431420u;
    // 7F431420: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431420u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F431424:
    ctx->pc = 0x7F431424u;
    // 7F431424: addi    r3, r3, -2028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2028);

label_7F431428:
    ctx->pc = 0x7F431428u;
    // 7F431428: lis     r5, 3121
    ctx->gpr[5] = ((u32)(s32)(3121) << 16);

label_7F43142C:
    ctx->pc = 0x7F43142Cu;
    // 7F43142C: addi    r4, r4, -4870
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4870);

label_7F431430:
    ctx->pc = 0x7F431430u;
    // 7F431430: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F431434:
    ctx->pc = 0x7F431434u;
    // 7F431434: addi    r6, r6, 20316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20316);

label_7F431438:
    ctx->pc = 0x7F431438u;
    // 7F431438: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431438u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43143C:
    ctx->pc = 0x7F43143Cu;
    // 7F43143C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F431440:
    ctx->pc = 0x7F431440u;
    // 7F431440: lfs     f0, 608(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431440u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431444:
    ctx->pc = 0x7F431444u;
    // 7F431444: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431444u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F431448:
    ctx->pc = 0x7F431448u;
    // 7F431448: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431448u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43144C:
    ctx->pc = 0x7F43144Cu;
    // 7F43144C: lfs     f0, 612(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F43144Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431450:
    ctx->pc = 0x7F431450u;
    // 7F431450: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431450u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F431454:
    ctx->pc = 0x7F431454u;
    // 7F431454: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431454u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431458:
    ctx->pc = 0x7F431458u;
    // 7F431458: bl      0x7F41547C
    {
            ctx->lr = 0x7F43145Cu;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F43145C:
    ctx->pc = 0x7F43145Cu;
    ctx->downcount -= 1;
    // 7F43145C: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F431460:
    ctx->pc = 0x7F431460u;
    ctx->downcount -= 3;
    // 7F431460: addi    r3, r31, 620
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(620);

label_7F431464:
    ctx->pc = 0x7F431464u;
    // 7F431464: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F431468:
    ctx->pc = 0x7F431468u;
    // 7F431468: bl      0x7F205744
    {
            ctx->lr = 0x7F43146Cu;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F43146C:
    ctx->pc = 0x7F43146Cu;
    ctx->downcount -= 4;
    // 7F43146C: addi    r4, r31, 620
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(620);

label_7F431470:
    ctx->pc = 0x7F431470u;
    // 7F431470: li      r3, 41
    ctx->gpr[3] = (u32)(s32)(41);

label_7F431474:
    ctx->pc = 0x7F431474u;
    // 7F431474: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F431478:
    ctx->pc = 0x7F431478u;
    // 7F431478: bl      0x7F0117B8
    {
            ctx->lr = 0x7F43147Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F43147C:
    ctx->pc = 0x7F43147Cu;
    ctx->downcount -= 3;
    // 7F43147C: addi    r30, r31, 432
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(432);

label_7F431480:
    ctx->pc = 0x7F431480u;
    // 7F431480: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431484:
    ctx->pc = 0x7F431484u;
    // 7F431484: bl      0x7F042AAC
    {
            ctx->lr = 0x7F431488u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F431488:
    ctx->pc = 0x7F431488u;
    ctx->downcount -= 4;
    // 7F431488: lwz     r4, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F43148C:
    ctx->pc = 0x7F43148Cu;
    // 7F43148C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431490:
    ctx->pc = 0x7F431490u;
    // 7F431490: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F431494:
    ctx->pc = 0x7F431494u;
    // 7F431494: bl      0x7F04272C
    {
            ctx->lr = 0x7F431498u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F431498:
    ctx->pc = 0x7F431498u;
    ctx->downcount -= 3;
    // 7F431498: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43149C:
    ctx->pc = 0x7F43149Cu;
    // 7F43149C: addi    r4, r31, 476
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(476);

label_7F4314A0:
    ctx->pc = 0x7F4314A0u;
    // 7F4314A0: bl      0x7F042B20
    {
            ctx->lr = 0x7F4314A4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F4314A4:
    ctx->pc = 0x7F4314A4u;
    ctx->downcount -= 2;
    // 7F4314A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F4314A8:
    ctx->pc = 0x7F4314A8u;
    // 7F4314A8: bl      0x7F01C018
    {
            ctx->lr = 0x7F4314ACu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F4314AC:
    ctx->pc = 0x7F4314ACu;
    ctx->downcount -= 11;
    // 7F4314AC: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F4314B0:
    ctx->pc = 0x7F4314B0u;
    // 7F4314B0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F4314B4:
    ctx->pc = 0x7F4314B4u;
    // 7F4314B4: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4314B8:
    ctx->pc = 0x7F4314B8u;
    // 7F4314B8: nor   r6, r3, r3
    {
        ctx->gpr[6] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F4314BC:
    ctx->pc = 0x7F4314BCu;
    // 7F4314BC: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F4314C0:
    ctx->pc = 0x7F4314C0u;
    // 7F4314C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F4314C4:
    ctx->pc = 0x7F4314C4u;
    // 7F4314C4: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4314C8:
    ctx->pc = 0x7F4314C8u;
    // 7F4314C8: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4314CC:
    ctx->pc = 0x7F4314CCu;
    // 7F4314CC: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F4314D0:
    ctx->pc = 0x7F4314D0u;
    // 7F4314D0: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4314D4:
    ctx->pc = 0x7F4314D4u;
    // 7F4314D4: bl      0x7F01C018
    {
            ctx->lr = 0x7F4314D8u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F4314D8:
    ctx->pc = 0x7F4314D8u;
    ctx->downcount -= 9;
    // 7F4314D8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F4314DC:
    ctx->pc = 0x7F4314DCu;
    // 7F4314DC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F4314E0:
    ctx->pc = 0x7F4314E0u;
    // 7F4314E0: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4314E4:
    ctx->pc = 0x7F4314E4u;
    // 7F4314E4: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F4314E8:
    ctx->pc = 0x7F4314E8u;
    // 7F4314E8: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4314EC:
    ctx->pc = 0x7F4314ECu;
    // 7F4314EC: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4314F0:
    ctx->pc = 0x7F4314F0u;
    // 7F4314F0: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F4314F4:
    ctx->pc = 0x7F4314F4u;
    // 7F4314F4: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4314F8:
    ctx->pc = 0x7F4314F8u;
    // 7F4314F8: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F4314FC:
    ctx->pc = 0x7F4314FCu;
    ctx->downcount -= 2;
    // 7F4314FC: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F431500:
    ctx->pc = 0x7F431500u;
    // 7F431500: bl      0x80025A08
    {
            ctx->lr = 0x7F431504u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F431504:
    ctx->pc = 0x7F431504u;
    ctx->downcount -= 8;
    // 7F431504: lfs     f0, 620(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431504u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431508:
    ctx->pc = 0x7F431508u;
    // 7F431508: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F43150C:
    ctx->pc = 0x7F43150Cu;
    // 7F43150C: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43150Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431510:
    ctx->pc = 0x7F431510u;
    // 7F431510: lfs     f0, 624(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431510u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431514:
    ctx->pc = 0x7F431514u;
    // 7F431514: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431514u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431518:
    ctx->pc = 0x7F431518u;
    // 7F431518: lfs     f0, 628(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431518u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43151C:
    ctx->pc = 0x7F43151Cu;
    // 7F43151C: stfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43151Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431520:
    ctx->pc = 0x7F431520u;
    // 7F431520: bl      0x7F413350
    {
            ctx->lr = 0x7F431524u;
            ctx->pc = 0x7F413350u;
            return;
    }

label_7F431524:
    ctx->pc = 0x7F431524u;
    ctx->downcount -= 5;
    // 7F431524: stw     r3, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431528:
    ctx->pc = 0x7F431528u;
    // 7F431528: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43152C:
    ctx->pc = 0x7F43152Cu;
    // 7F43152C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F431530:
    ctx->pc = 0x7F431530u;
    // 7F431530: lwz     r3, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431534:
    ctx->pc = 0x7F431534u;
    // 7F431534: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F431538u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F431538:
    ctx->pc = 0x7F431538u;
    ctx->downcount -= 6;
    // 7F431538: li      r0, 700
    ctx->gpr[0] = (u32)(s32)(700);

label_7F43153C:
    ctx->pc = 0x7F43153Cu;
    // 7F43153C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431540:
    ctx->pc = 0x7F431540u;
    // 7F431540: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431544:
    ctx->pc = 0x7F431544u;
    // 7F431544: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F431548:
    ctx->pc = 0x7F431548u;
    // 7F431548: lwz     r3, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F43154C:
    ctx->pc = 0x7F43154Cu;
    // 7F43154C: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F431550u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F431550:
    ctx->pc = 0x7F431550u;
    ctx->downcount -= 1;
    // 7F431550: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F431554:
    ctx->pc = 0x7F431554u;
    ctx->downcount -= 3;
    // 7F431554: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431558:
    ctx->pc = 0x7F431558u;
    // 7F431558: addi    r3, r3, -2092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2092);

label_7F43155C:
    ctx->pc = 0x7F43155Cu;
    // 7F43155C: bl      0x80025A08
    {
            ctx->lr = 0x7F431560u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F431560:
    ctx->pc = 0x7F431560u;
    ctx->downcount -= 28;
    // 7F431560: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431564:
    ctx->pc = 0x7F431564u;
    // 7F431564: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431568:
    ctx->pc = 0x7F431568u;
    // 7F431568: addi    r5, r4, -9796
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9796);

label_7F43156C:
    ctx->pc = 0x7F43156Cu;
    // 7F43156C: lis     r6, 2108
    ctx->gpr[6] = ((u32)(s32)(2108) << 16);

label_7F431570:
    ctx->pc = 0x7F431570u;
    // 7F431570: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431570u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431574:
    ctx->pc = 0x7F431574u;
    // 7F431574: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431578:
    ctx->pc = 0x7F431578u;
    // 7F431578: lfs     f0, 604(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431578u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43157C:
    ctx->pc = 0x7F43157Cu;
    // 7F43157C: addi    r8, r4, -9792
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-9792);

label_7F431580:
    ctx->pc = 0x7F431580u;
    // 7F431580: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F431584:
    ctx->pc = 0x7F431584u;
    // 7F431584: lis     r4, 3914
    ctx->gpr[4] = ((u32)(s32)(3914) << 16);

label_7F431588:
    ctx->pc = 0x7F431588u;
    // 7F431588: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431588u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F43158C:
    ctx->pc = 0x7F43158Cu;
    // 7F43158C: addi    r7, r5, -9788
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-9788);

label_7F431590:
    ctx->pc = 0x7F431590u;
    // 7F431590: addi    r3, r3, -2092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2092);

label_7F431594:
    ctx->pc = 0x7F431594u;
    // 7F431594: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F431594u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431598:
    ctx->pc = 0x7F431598u;
    // 7F431598: lis     r5, 4657
    ctx->gpr[5] = ((u32)(s32)(4657) << 16);

label_7F43159C:
    ctx->pc = 0x7F43159Cu;
    // 7F43159C: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F43159Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4315A0:
    ctx->pc = 0x7F4315A0u;
    // 7F4315A0: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4315A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4315A4:
    ctx->pc = 0x7F4315A4u;
    // 7F4315A4: addi    r4, r4, -7460
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7460);

label_7F4315A8:
    ctx->pc = 0x7F4315A8u;
    // 7F4315A8: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F4315AC:
    ctx->pc = 0x7F4315ACu;
    // 7F4315AC: addi    r6, r6, 20310
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20310);

label_7F4315B0:
    ctx->pc = 0x7F4315B0u;
    // 7F4315B0: lfs     f0, 608(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4315B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4315B4:
    ctx->pc = 0x7F4315B4u;
    // 7F4315B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4315B8:
    ctx->pc = 0x7F4315B8u;
    // 7F4315B8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4315B8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F4315BC:
    ctx->pc = 0x7F4315BCu;
    // 7F4315BC: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4315BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4315C0:
    ctx->pc = 0x7F4315C0u;
    // 7F4315C0: lfs     f0, 612(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4315C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4315C4:
    ctx->pc = 0x7F4315C4u;
    // 7F4315C4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4315C4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4315C8:
    ctx->pc = 0x7F4315C8u;
    // 7F4315C8: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4315C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4315CC:
    ctx->pc = 0x7F4315CCu;
    // 7F4315CC: bl      0x7F41547C
    {
            ctx->lr = 0x7F4315D0u;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F4315D0:
    ctx->pc = 0x7F4315D0u;
    ctx->downcount -= 1;
    // 7F4315D0: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F4315D4:
    ctx->pc = 0x7F4315D4u;
    ctx->downcount -= 3;
    // 7F4315D4: addi    r3, r31, 636
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(636);

label_7F4315D8:
    ctx->pc = 0x7F4315D8u;
    // 7F4315D8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F4315DC:
    ctx->pc = 0x7F4315DCu;
    // 7F4315DC: bl      0x7F205744
    {
            ctx->lr = 0x7F4315E0u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F4315E0:
    ctx->pc = 0x7F4315E0u;
    ctx->downcount -= 4;
    // 7F4315E0: addi    r4, r31, 636
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(636);

label_7F4315E4:
    ctx->pc = 0x7F4315E4u;
    // 7F4315E4: li      r3, 65
    ctx->gpr[3] = (u32)(s32)(65);

label_7F4315E8:
    ctx->pc = 0x7F4315E8u;
    // 7F4315E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F4315EC:
    ctx->pc = 0x7F4315ECu;
    // 7F4315EC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F4315F0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F4315F0:
    ctx->pc = 0x7F4315F0u;
    ctx->downcount -= 1;
    // 7F4315F0: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F4315F4:
    ctx->pc = 0x7F4315F4u;
    ctx->downcount -= 2;
    // 7F4315F4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4315F8:
    ctx->pc = 0x7F4315F8u;
    // 7F4315F8: bl      0x80025A08
    {
            ctx->lr = 0x7F4315FCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F4315FC:
    ctx->pc = 0x7F4315FCu;
    ctx->downcount -= 8;
    // 7F4315FC: lfs     f0, 636(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4315FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431600:
    ctx->pc = 0x7F431600u;
    // 7F431600: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F431604:
    ctx->pc = 0x7F431604u;
    // 7F431604: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431604u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431608:
    ctx->pc = 0x7F431608u;
    // 7F431608: lfs     f0, 640(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431608u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43160C:
    ctx->pc = 0x7F43160Cu;
    // 7F43160C: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43160Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431610:
    ctx->pc = 0x7F431610u;
    // 7F431610: lfs     f0, 644(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431610u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431614:
    ctx->pc = 0x7F431614u;
    // 7F431614: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431618:
    ctx->pc = 0x7F431618u;
    // 7F431618: bl      0x7F413350
    {
            ctx->lr = 0x7F43161Cu;
            ctx->pc = 0x7F413350u;
            return;
    }

label_7F43161C:
    ctx->pc = 0x7F43161Cu;
    ctx->downcount -= 5;
    // 7F43161C: stw     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431620:
    ctx->pc = 0x7F431620u;
    // 7F431620: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F431624:
    ctx->pc = 0x7F431624u;
    // 7F431624: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F431628:
    ctx->pc = 0x7F431628u;
    // 7F431628: lwz     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F43162C:
    ctx->pc = 0x7F43162Cu;
    // 7F43162C: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F431630u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F431630:
    ctx->pc = 0x7F431630u;
    ctx->downcount -= 6;
    // 7F431630: li      r0, 900
    ctx->gpr[0] = (u32)(s32)(900);

label_7F431634:
    ctx->pc = 0x7F431634u;
    // 7F431634: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F431638:
    ctx->pc = 0x7F431638u;
    // 7F431638: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43163C:
    ctx->pc = 0x7F43163Cu;
    // 7F43163C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F431640:
    ctx->pc = 0x7F431640u;
    // 7F431640: lwz     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431644:
    ctx->pc = 0x7F431644u;
    // 7F431644: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F431648u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F431648:
    ctx->pc = 0x7F431648u;
    ctx->downcount -= 1;
    // 7F431648: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F43164C:
    ctx->pc = 0x7F43164Cu;
    ctx->downcount -= 4;
    // 7F43164C: lwz     r3, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431650:
    ctx->pc = 0x7F431650u;
    // 7F431650: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F431654:
    ctx->pc = 0x7F431654u;
    // 7F431654: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F431658:
    ctx->pc = 0x7F431658u;
    // 7F431658: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F43165Cu;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F43165C:
    ctx->pc = 0x7F43165Cu;
    ctx->downcount -= 1;
    // 7F43165C: b       0x7F431670
    {
            goto label_7F431670;
    }

label_7F431660:
    ctx->pc = 0x7F431660u;
    ctx->downcount -= 4;
    // 7F431660: lwz     r3, 656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431664:
    ctx->pc = 0x7F431664u;
    // 7F431664: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F431668:
    ctx->pc = 0x7F431668u;
    // 7F431668: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F43166C:
    ctx->pc = 0x7F43166Cu;
    // 7F43166C: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F431670u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F431670:
    ctx->pc = 0x7F431670u;
    ctx->downcount -= 3;
    // 7F431670: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431674:
    ctx->pc = 0x7F431674u;
    // 7F431674: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F431678:
    ctx->pc = 0x7F431678u;
    // 7F431678: stw     r0, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43167C:
    ctx->pc = 0x7F43167Cu;
    ctx->downcount -= 16;
    // 7F43167C: lmw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F431680:
    ctx->pc = 0x7F431680u;
    // 7F431680: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431684:
    ctx->pc = 0x7F431684u;
    // 7F431684: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431688:
    ctx->pc = 0x7F431688u;
    // 7F431688: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F43168C:
    ctx->pc = 0x7F43168Cu;
    // 7F43168C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431690:
    ctx->pc = 0x7F431690u;
    ctx->downcount -= 7;
    // 7F431690: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431694:
    ctx->pc = 0x7F431694u;
    // 7F431694: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431698:
    ctx->pc = 0x7F431698u;
    // 7F431698: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43169C:
    ctx->pc = 0x7F43169Cu;
    // 7F43169C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4316A0:
    ctx->pc = 0x7F4316A0u;
    // 7F4316A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4316A4:
    ctx->pc = 0x7F4316A4u;
    // 7F4316A4: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F4316A8:
    ctx->pc = 0x7F4316A8u;
    // 7F4316A8: bl      0x7F023E10
    {
            ctx->lr = 0x7F4316ACu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F4316AC:
    ctx->pc = 0x7F4316ACu;
    ctx->downcount -= 2;
    // 7F4316AC: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F4316B0:
    ctx->pc = 0x7F4316B0u;
    // 7F4316B0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F4316B4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F4316B4:
    ctx->pc = 0x7F4316B4u;
    ctx->downcount -= 9;
    // 7F4316B4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F4316B8:
    ctx->pc = 0x7F4316B8u;
    // 7F4316B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4316BC:
    ctx->pc = 0x7F4316BCu;
    // 7F4316BC: stw     r0, -2096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4316C0:
    ctx->pc = 0x7F4316C0u;
    // 7F4316C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4316C4:
    ctx->pc = 0x7F4316C4u;
    // 7F4316C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4316C8:
    ctx->pc = 0x7F4316C8u;
    // 7F4316C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4316CC:
    ctx->pc = 0x7F4316CCu;
    // 7F4316CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4316D0:
    ctx->pc = 0x7F4316D0u;
    // 7F4316D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4316D4:
    ctx->pc = 0x7F4316D4u;
    ctx->downcount -= 20;
    // 7F4316D4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4316D8:
    ctx->pc = 0x7F4316D8u;
    // 7F4316D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4316DC:
    ctx->pc = 0x7F4316DCu;
    // 7F4316DC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4316E0:
    ctx->pc = 0x7F4316E0u;
    // 7F4316E0: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4316E4:
    ctx->pc = 0x7F4316E4u;
    // 7F4316E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4316E8:
    ctx->pc = 0x7F4316E8u;
    // 7F4316E8: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4316EC:
    ctx->pc = 0x7F4316ECu;
    // 7F4316EC: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F4316F0:
    ctx->pc = 0x7F4316F0u;
    // 7F4316F0: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F4316F4:
    ctx->pc = 0x7F4316F4u;
    // 7F4316F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F4316F8:
    ctx->pc = 0x7F4316F8u;
    // 7F4316F8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F4316FCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F4316FC:
    ctx->pc = 0x7F4316FCu;
    ctx->downcount -= 4;
    // 7F4316FC: stw     r3, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431700:
    ctx->pc = 0x7F431700u;
    // 7F431700: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F431704:
    ctx->pc = 0x7F431704u;
    // 7F431704: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F431708:
    ctx->pc = 0x7F431708u;
    // 7F431708: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F43170Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F43170C:
    ctx->pc = 0x7F43170Cu;
    ctx->downcount -= 7;
    // 7F43170C: stw     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431710:
    ctx->pc = 0x7F431710u;
    // 7F431710: addi    r30, r31, 32
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(32);

label_7F431714:
    ctx->pc = 0x7F431714u;
    // 7F431714: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431718:
    ctx->pc = 0x7F431718u;
    // 7F431718: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F43171C:
    ctx->pc = 0x7F43171Cu;
    // 7F43171C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F431720:
    ctx->pc = 0x7F431720u;
    // 7F431720: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F431724:
    ctx->pc = 0x7F431724u;
    // 7F431724: bl      0x7F022FB4
    {
            ctx->lr = 0x7F431728u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F431728:
    ctx->pc = 0x7F431728u;
    ctx->downcount -= 2;
    // 7F431728: cmpwi   r3, 0
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

label_7F43172C:
    ctx->pc = 0x7F43172Cu;
    // 7F43172C: bc    4, 0, 0x7F431738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431738;
        }
    }

label_7F431730:
    ctx->pc = 0x7F431730u;
    ctx->downcount -= 2;
    // 7F431730: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F431734:
    ctx->pc = 0x7F431734u;
    // 7F431734: b       0x7F4318C0
    {
            goto label_7F4318C0;
    }

label_7F431738:
    ctx->pc = 0x7F431738u;
    ctx->downcount -= 5;
    // 7F431738: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43173C:
    ctx->pc = 0x7F43173Cu;
    // 7F43173C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F431740:
    ctx->pc = 0x7F431740u;
    // 7F431740: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F431744:
    ctx->pc = 0x7F431744u;
    // 7F431744: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F431748:
    ctx->pc = 0x7F431748u;
    // 7F431748: bl      0x7F023F7C
    {
            ctx->lr = 0x7F43174Cu;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F43174C:
    ctx->pc = 0x7F43174Cu;
    ctx->downcount -= 17;
    // 7F43174C: lhz     r5, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F431750:
    ctx->pc = 0x7F431750u;
    // 7F431750: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F431754:
    ctx->pc = 0x7F431754u;
    // 7F431754: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F431758:
    ctx->pc = 0x7F431758u;
    // 7F431758: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F43175C:
    ctx->pc = 0x7F43175Cu;
    // 7F43175C: rlwinm r6, r5, 0, 16, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFCu;
    }

label_7F431760:
    ctx->pc = 0x7F431760u;
    // 7F431760: sth     r6, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F431764:
    ctx->pc = 0x7F431764u;
    // 7F431764: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F431768:
    ctx->pc = 0x7F431768u;
    // 7F431768: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43176C:
    ctx->pc = 0x7F43176Cu;
    // 7F43176C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431770:
    ctx->pc = 0x7F431770u;
    // 7F431770: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431774:
    ctx->pc = 0x7F431774u;
    // 7F431774: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F431778:
    ctx->pc = 0x7F431778u;
    // 7F431778: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43177C:
    ctx->pc = 0x7F43177Cu;
    // 7F43177C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431780:
    ctx->pc = 0x7F431780u;
    // 7F431780: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431784:
    ctx->pc = 0x7F431784u;
    // 7F431784: stw     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F431788:
    ctx->pc = 0x7F431788u;
    // 7F431788: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43178C:
    ctx->pc = 0x7F43178Cu;
    // 7F43178C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F431790u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F431790:
    ctx->pc = 0x7F431790u;
    ctx->downcount -= 2;
    // 7F431790: cmplwi  r3, 0x0000
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

label_7F431794:
    ctx->pc = 0x7F431794u;
    // 7F431794: bc    4, 2, 0x7F4317A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4317A0;
        }
    }

label_7F431798:
    ctx->pc = 0x7F431798u;
    ctx->downcount -= 2;
    // 7F431798: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F43179C:
    ctx->pc = 0x7F43179Cu;
    // 7F43179C: b       0x7F4318C0
    {
            goto label_7F4318C0;
    }

label_7F4317A0:
    ctx->pc = 0x7F4317A0u;
    ctx->downcount -= 1;
    // 7F4317A0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F4317A4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F4317A4:
    ctx->pc = 0x7F4317A4u;
    ctx->downcount -= 2;
    // 7F4317A4: stw     r3, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4317A8:
    ctx->pc = 0x7F4317A8u;
    // 7F4317A8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F4317ACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F4317AC:
    ctx->pc = 0x7F4317ACu;
    ctx->downcount -= 5;
    // 7F4317AC: stw     r3, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4317B0:
    ctx->pc = 0x7F4317B0u;
    // 7F4317B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F4317B4:
    ctx->pc = 0x7F4317B4u;
    // 7F4317B4: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F4317B8:
    ctx->pc = 0x7F4317B8u;
    // 7F4317B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4317BC:
    ctx->pc = 0x7F4317BCu;
    // 7F4317BC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F4317C0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F4317C0:
    ctx->pc = 0x7F4317C0u;
    ctx->downcount -= 2;
    // 7F4317C0: cmplwi  r3, 0x0000
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

label_7F4317C4:
    ctx->pc = 0x7F4317C4u;
    // 7F4317C4: bc    12, 2, 0x7F4317DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4317DC;
        }
    }

label_7F4317C8:
    ctx->pc = 0x7F4317C8u;
    ctx->downcount -= 2;
    // 7F4317C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4317CC:
    ctx->pc = 0x7F4317CCu;
    // 7F4317CC: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F4317D0u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F4317D0:
    ctx->pc = 0x7F4317D0u;
    ctx->downcount -= 3;
    // 7F4317D0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4317D4:
    ctx->pc = 0x7F4317D4u;
    // 7F4317D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4317D8:
    ctx->pc = 0x7F4317D8u;
    // 7F4317D8: bl      0x7F4318D4
    {
            ctx->lr = 0x7F4317DCu;
            goto label_7F4318D4;
    }

label_7F4317DC:
    ctx->pc = 0x7F4317DCu;
    ctx->downcount -= 2;
    // 7F4317DC: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F4317E0:
    ctx->pc = 0x7F4317E0u;
    // 7F4317E0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F4317E4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F4317E4:
    ctx->pc = 0x7F4317E4u;
    ctx->downcount -= 2;
    // 7F4317E4: cmplwi  r3, 0x0000
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

label_7F4317E8:
    ctx->pc = 0x7F4317E8u;
    // 7F4317E8: bc    12, 2, 0x7F43181C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43181C;
        }
    }

label_7F4317EC:
    ctx->pc = 0x7F4317ECu;
    ctx->downcount -= 2;
    // 7F4317EC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F4317F0:
    ctx->pc = 0x7F4317F0u;
    // 7F4317F0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F4317F4:
    ctx->downcount -= 2;
    // 7F4317F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4317F8:
    // 7F4317F8: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F4317FCu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F4317FC:
    ctx->downcount -= 4;
    // 7F4317FC: addi    r4, r30, 604
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(604);

label_7F431800:
    // 7F431800: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F431804:
    // 7F431804: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F431808:
    // 7F431808: bl      0x7F4318D4
    {
            ctx->lr = 0x7F43180Cu;
            goto label_7F4318D4;
    }

label_7F43180C:
    ctx->downcount -= 4;
    // 7F43180C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F431810:
    // 7F431810: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F431814:
    // 7F431814: cmpwi   r29, 3
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

label_7F431818:
    // 7F431818: bc    12, 0, 0x7F4317F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4317F4u;
                return;
            }
            goto label_7F4317F4;
        }
    }

label_7F43181C:
    ctx->pc = 0x7F43181Cu;
    ctx->downcount -= 4;
    // 7F43181C: lwz     r0, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431820:
    ctx->pc = 0x7F431820u;
    // 7F431820: addi    r30, r31, 432
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(432);

label_7F431824:
    ctx->pc = 0x7F431824u;
    // 7F431824: cmpwi   r0, 0
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

label_7F431828:
    ctx->pc = 0x7F431828u;
    // 7F431828: bc    4, 2, 0x7F431840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431840;
        }
    }

label_7F43182C:
    ctx->pc = 0x7F43182Cu;
    ctx->downcount -= 4;
    // 7F43182C: lwz     r4, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431830:
    ctx->pc = 0x7F431830u;
    // 7F431830: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431834:
    ctx->pc = 0x7F431834u;
    // 7F431834: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F431838:
    ctx->pc = 0x7F431838u;
    // 7F431838: bl      0x7F04272C
    {
            ctx->lr = 0x7F43183Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F43183C:
    ctx->pc = 0x7F43183Cu;
    ctx->downcount -= 1;
    // 7F43183C: b       0x7F431850
    {
            goto label_7F431850;
    }

label_7F431840:
    ctx->pc = 0x7F431840u;
    ctx->downcount -= 4;
    // 7F431840: lwz     r4, 664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(664);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431844:
    ctx->pc = 0x7F431844u;
    // 7F431844: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431848:
    ctx->pc = 0x7F431848u;
    // 7F431848: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F43184C:
    ctx->pc = 0x7F43184Cu;
    // 7F43184C: bl      0x7F04272C
    {
            ctx->lr = 0x7F431850u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F431850:
    ctx->pc = 0x7F431850u;
    ctx->downcount -= 3;
    // 7F431850: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431854:
    ctx->pc = 0x7F431854u;
    // 7F431854: addi    r4, r31, 476
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(476);

label_7F431858:
    ctx->pc = 0x7F431858u;
    // 7F431858: bl      0x7F042B20
    {
            ctx->lr = 0x7F43185Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F43185C:
    ctx->pc = 0x7F43185Cu;
    ctx->downcount -= 3;
    // 7F43185C: lwz     r0, 668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431860:
    ctx->pc = 0x7F431860u;
    // 7F431860: cmpwi   r0, 0
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

label_7F431864:
    ctx->pc = 0x7F431864u;
    // 7F431864: bc    4, 2, 0x7F431894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431894;
        }
    }

label_7F431868:
    ctx->pc = 0x7F431868u;
    ctx->downcount -= 2;
    // 7F431868: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F43186C:
    ctx->pc = 0x7F43186Cu;
    // 7F43186C: bl      0x7F01C018
    {
            ctx->lr = 0x7F431870u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F431870:
    ctx->pc = 0x7F431870u;
    ctx->downcount -= 9;
    // 7F431870: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F431874:
    ctx->pc = 0x7F431874u;
    // 7F431874: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F431878:
    ctx->pc = 0x7F431878u;
    // 7F431878: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43187C:
    ctx->pc = 0x7F43187Cu;
    // 7F43187C: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F431880:
    ctx->pc = 0x7F431880u;
    // 7F431880: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F431884:
    ctx->pc = 0x7F431884u;
    // 7F431884: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431888:
    ctx->pc = 0x7F431888u;
    // 7F431888: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F43188C:
    ctx->pc = 0x7F43188Cu;
    // 7F43188C: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431890:
    ctx->pc = 0x7F431890u;
    // 7F431890: b       0x7F4318BC
    {
            goto label_7F4318BC;
    }

label_7F431894:
    ctx->pc = 0x7F431894u;
    ctx->downcount -= 2;
    // 7F431894: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F431898:
    ctx->pc = 0x7F431898u;
    // 7F431898: bl      0x7F01C018
    {
            ctx->lr = 0x7F43189Cu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F43189C:
    ctx->pc = 0x7F43189Cu;
    ctx->downcount -= 8;
    // 7F43189C: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F4318A0:
    ctx->pc = 0x7F4318A0u;
    // 7F4318A0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F4318A4:
    ctx->pc = 0x7F4318A4u;
    // 7F4318A4: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4318A8:
    ctx->pc = 0x7F4318A8u;
    // 7F4318A8: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F4318AC:
    ctx->pc = 0x7F4318ACu;
    // 7F4318AC: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4318B0:
    ctx->pc = 0x7F4318B0u;
    // 7F4318B0: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4318B4:
    ctx->pc = 0x7F4318B4u;
    // 7F4318B4: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F4318B8:
    ctx->pc = 0x7F4318B8u;
    // 7F4318B8: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4318BC:
    ctx->pc = 0x7F4318BCu;
    ctx->downcount -= 1;
    // 7F4318BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4318C0:
    ctx->pc = 0x7F4318C0u;
    ctx->downcount -= 16;
    // 7F4318C0: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4318C4:
    ctx->pc = 0x7F4318C4u;
    // 7F4318C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4318C8:
    ctx->pc = 0x7F4318C8u;
    // 7F4318C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4318CC:
    ctx->pc = 0x7F4318CCu;
    // 7F4318CC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F4318D0:
    ctx->pc = 0x7F4318D0u;
    // 7F4318D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4318D4:
    ctx->pc = 0x7F4318D4u;
    ctx->downcount -= 17;
    // 7F4318D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4318D8:
    ctx->pc = 0x7F4318D8u;
    // 7F4318D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4318DC:
    ctx->pc = 0x7F4318DCu;
    // 7F4318DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4318E0:
    ctx->pc = 0x7F4318E0u;
    // 7F4318E0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4318E4:
    ctx->pc = 0x7F4318E4u;
    // 7F4318E4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4318E8:
    ctx->pc = 0x7F4318E8u;
    // 7F4318E8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4318EC:
    ctx->pc = 0x7F4318ECu;
    // 7F4318EC: bl      0x7F431928
    {
            ctx->lr = 0x7F4318F0u;
            goto label_7F431928;
    }

label_7F4318F0:
    ctx->pc = 0x7F4318F0u;
    ctx->downcount -= 3;
    // 7F4318F0: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F4318F4:
    ctx->pc = 0x7F4318F4u;
    // 7F4318F4: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F4318F8:
    ctx->pc = 0x7F4318F8u;
    // 7F4318F8: bl      0x7F431928
    {
            ctx->lr = 0x7F4318FCu;
            goto label_7F431928;
    }

label_7F4318FC:
    ctx->pc = 0x7F4318FCu;
    ctx->downcount -= 3;
    // 7F4318FC: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F431900:
    ctx->pc = 0x7F431900u;
    // 7F431900: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F431904:
    ctx->pc = 0x7F431904u;
    // 7F431904: bl      0x7F431928
    {
            ctx->lr = 0x7F431908u;
            goto label_7F431928;
    }

label_7F431908:
    ctx->pc = 0x7F431908u;
    ctx->downcount -= 3;
    // 7F431908: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F43190C:
    ctx->pc = 0x7F43190Cu;
    // 7F43190C: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F431910:
    ctx->pc = 0x7F431910u;
    // 7F431910: bl      0x7F431928
    {
            ctx->lr = 0x7F431914u;
            goto label_7F431928;
    }

label_7F431914:
    ctx->pc = 0x7F431914u;
    ctx->downcount -= 16;
    // 7F431914: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F431918:
    ctx->pc = 0x7F431918u;
    // 7F431918: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43191C:
    ctx->pc = 0x7F43191Cu;
    // 7F43191C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431920:
    ctx->pc = 0x7F431920u;
    // 7F431920: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431924:
    ctx->pc = 0x7F431924u;
    // 7F431924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431928:
    ctx->pc = 0x7F431928u;
    ctx->downcount -= 6;
    // 7F431928: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43192C:
    ctx->pc = 0x7F43192Cu;
    // 7F43192C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431930:
    ctx->pc = 0x7F431930u;
    // 7F431930: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431934:
    ctx->pc = 0x7F431934u;
    // 7F431934: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F431938:
    ctx->pc = 0x7F431938u;
    // 7F431938: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F43193C:
    ctx->pc = 0x7F43193Cu;
    // 7F43193C: bl      0x7F431958
    {
            ctx->lr = 0x7F431940u;
            goto label_7F431958;
    }

label_7F431940:
    ctx->pc = 0x7F431940u;
    ctx->downcount -= 7;
    // 7F431940: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431940u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F431944:
    ctx->pc = 0x7F431944u;
    // 7F431944: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431948:
    ctx->pc = 0x7F431948u;
    // 7F431948: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F43194C:
    ctx->pc = 0x7F43194Cu;
    // 7F43194C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431950:
    ctx->pc = 0x7F431950u;
    // 7F431950: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431954:
    ctx->pc = 0x7F431954u;
    // 7F431954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431958:
    ctx->pc = 0x7F431958u;
    ctx->downcount -= 4;
    // 7F431958: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F431958u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F431958u);
        if (ctx->exception) return;
    }

label_7F43195C:
    ctx->pc = 0x7F43195Cu;
    // 7F43195C: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F43195Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F43195Cu);
        if (ctx->exception) return;
    }

label_7F431960:
    ctx->pc = 0x7F431960u;
    // 7F431960: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431960u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F431964:
    ctx->pc = 0x7F431964u;
    // 7F431964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431968:
    ctx->pc = 0x7F431968u;
    ctx->downcount -= 21;
    // 7F431968: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43196C:
    ctx->pc = 0x7F43196Cu;
    // 7F43196C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431970:
    ctx->pc = 0x7F431970u;
    // 7F431970: li      r5, 688
    ctx->gpr[5] = (u32)(s32)(688);

label_7F431974:
    ctx->pc = 0x7F431974u;
    // 7F431974: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F431978:
    ctx->pc = 0x7F431978u;
    // 7F431978: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43197C:
    ctx->pc = 0x7F43197Cu;
    // 7F43197C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F431980:
    ctx->pc = 0x7F431980u;
    // 7F431980: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431984:
    ctx->pc = 0x7F431984u;
    // 7F431984: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F431988:
    ctx->pc = 0x7F431988u;
    // 7F431988: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F43198C:
    ctx->pc = 0x7F43198Cu;
    // 7F43198C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F431990:
    ctx->pc = 0x7F431990u;
    // 7F431990: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F431994u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F431994:
    ctx->pc = 0x7F431994u;
    ctx->downcount -= 2;
    // 7F431994: or.   r31, r3, r3
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

label_7F431998:
    ctx->pc = 0x7F431998u;
    // 7F431998: bc    12, 2, 0x7F4319D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4319D8;
        }
    }

label_7F43199C:
    ctx->pc = 0x7F43199Cu;
    ctx->downcount -= 5;
    // 7F43199C: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F4319A0:
    ctx->pc = 0x7F4319A0u;
    // 7F4319A0: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F4319A4:
    ctx->pc = 0x7F4319A4u;
    // 7F4319A4: addi    r4, r4, 4716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4716);

label_7F4319A8:
    ctx->pc = 0x7F4319A8u;
    // 7F4319A8: addi    r5, r5, 5776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(5776);

label_7F4319AC:
    ctx->pc = 0x7F4319ACu;
    // 7F4319AC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F4319B0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F4319B0:
    ctx->pc = 0x7F4319B0u;
    ctx->downcount -= 4;
    // 7F4319B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4319B4:
    ctx->pc = 0x7F4319B4u;
    // 7F4319B4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4319B8:
    ctx->pc = 0x7F4319B8u;
    // 7F4319B8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4319BC:
    ctx->pc = 0x7F4319BCu;
    // 7F4319BC: bl      0x7F4316D4
    {
            ctx->lr = 0x7F4319C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4316D4u;
                return;
            }
            goto label_7F4316D4;
    }

label_7F4319C0:
    ctx->pc = 0x7F4319C0u;
    ctx->downcount -= 2;
    // 7F4319C0: cmpwi   r3, 0
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

label_7F4319C4:
    ctx->pc = 0x7F4319C4u;
    // 7F4319C4: bc    4, 0, 0x7F4319D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4319D8;
        }
    }

label_7F4319C8:
    ctx->pc = 0x7F4319C8u;
    ctx->downcount -= 2;
    // 7F4319C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4319CC:
    ctx->pc = 0x7F4319CCu;
    // 7F4319CC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F4319D0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F4319D0:
    ctx->pc = 0x7F4319D0u;
    ctx->downcount -= 2;
    // 7F4319D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4319D4:
    ctx->pc = 0x7F4319D4u;
    // 7F4319D4: b       0x7F4319E4
    {
            goto label_7F4319E4;
    }

label_7F4319D8:
    ctx->pc = 0x7F4319D8u;
    ctx->downcount -= 3;
    // 7F4319D8: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F4319DC:
    ctx->pc = 0x7F4319DCu;
    // 7F4319DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4319E0:
    ctx->pc = 0x7F4319E0u;
    // 7F4319E0: stw     r31, -2096(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2096);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4319E4:
    ctx->pc = 0x7F4319E4u;
    ctx->downcount -= 16;
    // 7F4319E4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4319E8:
    ctx->pc = 0x7F4319E8u;
    // 7F4319E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4319EC:
    ctx->pc = 0x7F4319ECu;
    // 7F4319EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4319F0:
    ctx->pc = 0x7F4319F0u;
    // 7F4319F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4319F4:
    ctx->pc = 0x7F4319F4u;
    // 7F4319F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4319F8:
    ctx->pc = 0x7F4319F8u;
    ctx->downcount -= 7;
    // 7F4319F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4319FC:
    ctx->pc = 0x7F4319FCu;
    // 7F4319FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431A00:
    ctx->pc = 0x7F431A00u;
    // 7F431A00: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431A04:
    ctx->pc = 0x7F431A04u;
    // 7F431A04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431A08:
    ctx->pc = 0x7F431A08u;
    // 7F431A08: addi    r3, r3, -2096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2096);

label_7F431A0C:
    ctx->pc = 0x7F431A0Cu;
    // 7F431A0C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431A10:
    ctx->pc = 0x7F431A10u;
    // 7F431A10: bl      0x7F4311BC
    {
            ctx->lr = 0x7F431A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4311BCu;
                return;
            }
            goto label_7F4311BC;
    }

label_7F431A14:
    ctx->pc = 0x7F431A14u;
    ctx->downcount -= 5;
    // 7F431A14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431A18:
    ctx->pc = 0x7F431A18u;
    // 7F431A18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431A1C:
    ctx->pc = 0x7F431A1Cu;
    // 7F431A1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431A20:
    ctx->pc = 0x7F431A20u;
    // 7F431A20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431A24:
    ctx->pc = 0x7F431A24u;
    ctx->downcount -= 13;
    // 7F431A24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431A28:
    ctx->pc = 0x7F431A28u;
    // 7F431A28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431A2C:
    ctx->pc = 0x7F431A2Cu;
    // 7F431A2C: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F431A30:
    ctx->pc = 0x7F431A30u;
    // 7F431A30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431A34:
    ctx->pc = 0x7F431A34u;
    // 7F431A34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F431A38:
    ctx->pc = 0x7F431A38u;
    // 7F431A38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431A3C:
    ctx->pc = 0x7F431A3Cu;
    // 7F431A3C: addi    r5, r31, 1232
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(1232);

label_7F431A40:
    ctx->pc = 0x7F431A40u;
    // 7F431A40: lwz     r4, 1232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431A44:
    ctx->pc = 0x7F431A44u;
    // 7F431A44: addi    r3, r31, 1984
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1984);

label_7F431A48:
    ctx->pc = 0x7F431A48u;
    // 7F431A48: addi    r6, r31, 196
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(196);

label_7F431A4C:
    ctx->pc = 0x7F431A4Cu;
    // 7F431A4C: addi    r7, r31, 32
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(32);

label_7F431A50:
    ctx->pc = 0x7F431A50u;
    // 7F431A50: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F431A54:
    ctx->pc = 0x7F431A54u;
    // 7F431A54: bl      0x7F01D42C
    {
            ctx->lr = 0x7F431A58u;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F431A58:
    ctx->pc = 0x7F431A58u;
    ctx->downcount -= 3;
    // 7F431A58: addi    r3, r31, 1984
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1984);

label_7F431A5C:
    ctx->pc = 0x7F431A5Cu;
    // 7F431A5C: addi    r4, r31, 1760
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F431A60:
    ctx->pc = 0x7F431A60u;
    // 7F431A60: bl      0x7F01D46C
    {
            ctx->lr = 0x7F431A64u;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F431A64:
    ctx->pc = 0x7F431A64u;
    ctx->downcount -= 2;
    // 7F431A64: addi    r3, r31, 1984
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1984);

label_7F431A68:
    ctx->pc = 0x7F431A68u;
    // 7F431A68: bl      0x7F01D474
    {
            ctx->lr = 0x7F431A6Cu;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F431A6C:
    ctx->pc = 0x7F431A6Cu;
    ctx->downcount -= 6;
    // 7F431A6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431A70:
    ctx->pc = 0x7F431A70u;
    // 7F431A70: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F431A74:
    ctx->pc = 0x7F431A74u;
    // 7F431A74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431A78:
    ctx->pc = 0x7F431A78u;
    // 7F431A78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431A7C:
    ctx->pc = 0x7F431A7Cu;
    // 7F431A7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431A80:
    ctx->pc = 0x7F431A80u;
    ctx->downcount -= 8;
    // 7F431A80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431A84:
    ctx->pc = 0x7F431A84u;
    // 7F431A84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431A88:
    ctx->pc = 0x7F431A88u;
    // 7F431A88: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F431A8C:
    ctx->pc = 0x7F431A8Cu;
    // 7F431A8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431A90:
    ctx->pc = 0x7F431A90u;
    // 7F431A90: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F431A94:
    ctx->pc = 0x7F431A94u;
    // 7F431A94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431A98:
    ctx->pc = 0x7F431A98u;
    // 7F431A98: addi    r3, r4, -1832
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1832);

label_7F431A9C:
    ctx->pc = 0x7F431A9Cu;
    // 7F431A9C: bl      0x80025A08
    {
            ctx->lr = 0x7F431AA0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F431AA0:
    ctx->pc = 0x7F431AA0u;
    ctx->downcount -= 11;
    // 7F431AA0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F431AA4:
    ctx->pc = 0x7F431AA4u;
    // 7F431AA4: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431AA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431AA8:
    ctx->pc = 0x7F431AA8u;
    // 7F431AA8: addi    r5, r3, -1832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1832);

label_7F431AAC:
    ctx->pc = 0x7F431AACu;
    // 7F431AAC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F431AB0:
    ctx->pc = 0x7F431AB0u;
    // 7F431AB0: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431AB0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431AB4:
    ctx->pc = 0x7F431AB4u;
    // 7F431AB4: addi    r3, r5, 48
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(48);

label_7F431AB8:
    ctx->pc = 0x7F431AB8u;
    // 7F431AB8: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431AB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431ABC:
    ctx->pc = 0x7F431ABCu;
    // 7F431ABC: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431ABCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431AC0:
    ctx->pc = 0x7F431AC0u;
    // 7F431AC0: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431AC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431AC4:
    ctx->pc = 0x7F431AC4u;
    // 7F431AC4: stfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431AC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431AC8:
    ctx->pc = 0x7F431AC8u;
    // 7F431AC8: bl      0x7F205744
    {
            ctx->lr = 0x7F431ACCu;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F431ACC:
    ctx->pc = 0x7F431ACCu;
    ctx->downcount -= 3;
    // 7F431ACC: lwz     r3, 2044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2044);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431AD0:
    ctx->pc = 0x7F431AD0u;
    // 7F431AD0: cmpwi   r3, 0
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

label_7F431AD4:
    ctx->pc = 0x7F431AD4u;
    // 7F431AD4: bc    12, 2, 0x7F431AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431AE0;
        }
    }

label_7F431AD8:
    ctx->pc = 0x7F431AD8u;
    ctx->downcount -= 2;
    // 7F431AD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F431ADC:
    ctx->pc = 0x7F431ADCu;
    // 7F431ADC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F431AE0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F431AE0:
    ctx->pc = 0x7F431AE0u;
    ctx->downcount -= 4;
    // 7F431AE0: li      r0, 35
    ctx->gpr[0] = (u32)(s32)(35);

label_7F431AE4:
    ctx->pc = 0x7F431AE4u;
    // 7F431AE4: addi    r3, r31, 1984
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1984);

label_7F431AE8:
    ctx->pc = 0x7F431AE8u;
    // 7F431AE8: stw     r0, 2048(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431AEC:
    ctx->pc = 0x7F431AECu;
    // 7F431AEC: bl      0x7F01D540
    {
            ctx->lr = 0x7F431AF0u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F431AF0:
    ctx->pc = 0x7F431AF0u;
    ctx->downcount -= 6;
    // 7F431AF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431AF4:
    ctx->pc = 0x7F431AF4u;
    // 7F431AF4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F431AF8:
    ctx->pc = 0x7F431AF8u;
    // 7F431AF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431AFC:
    ctx->pc = 0x7F431AFCu;
    // 7F431AFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431B00:
    ctx->pc = 0x7F431B00u;
    // 7F431B00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431B04:
    ctx->pc = 0x7F431B04u;
    ctx->downcount -= 27;
    // 7F431B04: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431B08:
    ctx->pc = 0x7F431B08u;
    // 7F431B08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431B0C:
    ctx->pc = 0x7F431B0Cu;
    // 7F431B0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F431B10:
    ctx->pc = 0x7F431B10u;
    // 7F431B10: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431B14:
    ctx->pc = 0x7F431B14u;
    // 7F431B14: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F431B18:
    ctx->pc = 0x7F431B18u;
    // 7F431B18: stmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F431B1C:
    ctx->pc = 0x7F431B1Cu;
    // 7F431B1C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F431B20:
    ctx->pc = 0x7F431B20u;
    // 7F431B20: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431B24:
    ctx->pc = 0x7F431B24u;
    // 7F431B24: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F431B28:
    ctx->pc = 0x7F431B28u;
    // 7F431B28: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F431B2C:
    ctx->pc = 0x7F431B2Cu;
    // 7F431B2C: lwz     r4, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431B30:
    ctx->pc = 0x7F431B30u;
    // 7F431B30: and   r3, r7, r0
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F431B34:
    ctx->pc = 0x7F431B34u;
    // 7F431B34: and   r0, r4, r6
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[6];
    }

label_7F431B38:
    ctx->pc = 0x7F431B38u;
    // 7F431B38: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F431B3C:
    ctx->pc = 0x7F431B3Cu;
    // 7F431B3C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F431B40:
    ctx->pc = 0x7F431B40u;
    // 7F431B40: or.   r0, r3, r0
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

label_7F431B44:
    ctx->pc = 0x7F431B44u;
    // 7F431B44: bc    12, 2, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431B48:
    ctx->pc = 0x7F431B48u;
    ctx->downcount -= 3;
    // 7F431B48: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431B4C:
    ctx->pc = 0x7F431B4Cu;
    // 7F431B4C: rlwinm. r0, r0, 0, 31, 31
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

label_7F431B50:
    ctx->pc = 0x7F431B50u;
    // 7F431B50: bc    12, 2, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431B54:
    ctx->pc = 0x7F431B54u;
    ctx->downcount -= 11;
    // 7F431B54: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F431B58:
    ctx->pc = 0x7F431B58u;
    // 7F431B58: lwz     r4, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F431B5C:
    ctx->pc = 0x7F431B5Cu;
    // 7F431B5C: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F431B60:
    ctx->pc = 0x7F431B60u;
    // 7F431B60: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F431B64:
    ctx->pc = 0x7F431B64u;
    // 7F431B64: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F431B68:
    ctx->pc = 0x7F431B68u;
    // 7F431B68: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F431B6C:
    ctx->pc = 0x7F431B6Cu;
    // 7F431B6C: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F431B70:
    ctx->pc = 0x7F431B70u;
    // 7F431B70: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F431B74:
    ctx->pc = 0x7F431B74u;
    // 7F431B74: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F431B78:
    ctx->pc = 0x7F431B78u;
    // 7F431B78: or.   r0, r3, r0
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

label_7F431B7C:
    ctx->pc = 0x7F431B7Cu;
    // 7F431B7C: bc    12, 2, 0x7F431BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431BEC;
        }
    }

label_7F431B80:
    ctx->pc = 0x7F431B80u;
    ctx->downcount -= 6;
    // 7F431B80: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F431B84:
    ctx->pc = 0x7F431B84u;
    // 7F431B84: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F431B88:
    ctx->pc = 0x7F431B88u;
    // 7F431B88: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F431B8C:
    ctx->pc = 0x7F431B8Cu;
    // 7F431B8C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F431B90:
    ctx->pc = 0x7F431B90u;
    // 7F431B90: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F431B94:
    ctx->pc = 0x7F431B94u;
    // 7F431B94: bl      0x80025FFC
    {
            ctx->lr = 0x7F431B98u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F431B98:
    ctx->pc = 0x7F431B98u;
    ctx->downcount -= 3;
    // 7F431B98: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F431B9C:
    ctx->pc = 0x7F431B9Cu;
    // 7F431B9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431BA0:
    ctx->pc = 0x7F431BA0u;
    // 7F431BA0: bl      0x7F114F50
    {
            ctx->lr = 0x7F431BA4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F431BA4:
    ctx->pc = 0x7F431BA4u;
    ctx->downcount -= 4;
    // 7F431BA4: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F431BA8:
    ctx->pc = 0x7F431BA8u;
    // 7F431BA8: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F431BAC:
    ctx->pc = 0x7F431BACu;
    // 7F431BAC: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431BB0:
    ctx->pc = 0x7F431BB0u;
    // 7F431BB0: bl      0x80025FFC
    {
            ctx->lr = 0x7F431BB4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F431BB4:
    ctx->pc = 0x7F431BB4u;
    ctx->downcount -= 2;
    // 7F431BB4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431BB8:
    ctx->pc = 0x7F431BB8u;
    // 7F431BB8: bl      0x80026080
    {
            ctx->lr = 0x7F431BBCu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F431BBC:
    ctx->pc = 0x7F431BBCu;
    ctx->downcount -= 4;
    // 7F431BBC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431BC0:
    ctx->pc = 0x7F431BC0u;
    // 7F431BC0: lfs     f0, -9784(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431BC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431BC4:
    ctx->pc = 0x7F431BC4u;
    // 7F431BC4: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F431BC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F431BC8:
    ctx->pc = 0x7F431BC8u;
    // 7F431BC8: bc    12, 2, 0x7F431BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431BEC;
        }
    }

label_7F431BCC:
    ctx->pc = 0x7F431BCCu;
    ctx->downcount -= 4;
    // 7F431BCC: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F431BD0:
    ctx->pc = 0x7F431BD0u;
    // 7F431BD0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F431BD4:
    ctx->pc = 0x7F431BD4u;
    // 7F431BD4: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F431BD8:
    ctx->pc = 0x7F431BD8u;
    // 7F431BD8: bl      0x7F22F07C
    {
            ctx->lr = 0x7F431BDCu;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F431BDC:
    ctx->pc = 0x7F431BDCu;
    ctx->downcount -= 4;
    // 7F431BDC: lwz     r3, 2068(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2068);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431BE0:
    ctx->pc = 0x7F431BE0u;
    // 7F431BE0: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F431BE4:
    ctx->pc = 0x7F431BE4u;
    // 7F431BE4: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F431BE8:
    ctx->pc = 0x7F431BE8u;
    // 7F431BE8: bl      0x7F018110
    {
            ctx->lr = 0x7F431BECu;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F431BEC:
    ctx->pc = 0x7F431BECu;
    ctx->downcount -= 3;
    // 7F431BEC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F431BF0:
    ctx->pc = 0x7F431BF0u;
    // 7F431BF0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F431BF4:
    ctx->pc = 0x7F431BF4u;
    // 7F431BF4: bl      0x7F014DF8
    {
            ctx->lr = 0x7F431BF8u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F431BF8:
    ctx->pc = 0x7F431BF8u;
    ctx->downcount -= 2;
    // 7F431BF8: cmpwi   r3, 0
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

label_7F431BFC:
    ctx->pc = 0x7F431BFCu;
    // 7F431BFC: bc    12, 1, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431C00:
    ctx->pc = 0x7F431C00u;
    ctx->downcount -= 3;
    // 7F431C00: lwz     r0, 2048(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431C04:
    ctx->pc = 0x7F431C04u;
    // 7F431C04: cmpwi   r0, 0
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

label_7F431C08:
    ctx->pc = 0x7F431C08u;
    // 7F431C08: bc    4, 2, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431C0C:
    ctx->pc = 0x7F431C0Cu;
    ctx->downcount -= 3;
    // 7F431C0C: lwz     r0, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431C10:
    ctx->pc = 0x7F431C10u;
    // 7F431C10: cmplwi  r0, 0x0000
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

label_7F431C14:
    ctx->pc = 0x7F431C14u;
    // 7F431C14: bc    12, 2, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431C18:
    ctx->pc = 0x7F431C18u;
    ctx->downcount -= 3;
    // 7F431C18: lwz     r0, 2064(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431C1C:
    ctx->pc = 0x7F431C1Cu;
    // 7F431C1C: cmpwi   r0, 0
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

label_7F431C20:
    ctx->pc = 0x7F431C20u;
    // 7F431C20: bc    4, 2, 0x7F431C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F431C60;
        }
    }

label_7F431C24:
    ctx->pc = 0x7F431C24u;
    ctx->downcount -= 14;
    // 7F431C24: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F431C28:
    ctx->pc = 0x7F431C28u;
    // 7F431C28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F431C2C:
    ctx->pc = 0x7F431C2Cu;
    // 7F431C2C: stw     r6, 2064(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2064);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F431C30:
    ctx->pc = 0x7F431C30u;
    // 7F431C30: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F431C34:
    ctx->pc = 0x7F431C34u;
    // 7F431C34: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F431C38:
    ctx->pc = 0x7F431C38u;
    // 7F431C38: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F431C3C:
    ctx->pc = 0x7F431C3Cu;
    // 7F431C3C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F431C40:
    ctx->pc = 0x7F431C40u;
    // 7F431C40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F431C44:
    ctx->pc = 0x7F431C44u;
    // 7F431C44: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F431C48:
    ctx->pc = 0x7F431C48u;
    // 7F431C48: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F431C4C:
    ctx->pc = 0x7F431C4Cu;
    // 7F431C4C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431C50:
    ctx->pc = 0x7F431C50u;
    // 7F431C50: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F431C54:
    ctx->pc = 0x7F431C54u;
    // 7F431C54: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F431C58:
    ctx->pc = 0x7F431C58u;
    // 7F431C58: bl      0x800501FC
    {
            ctx->lr = 0x7F431C5Cu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F431C5C:
    ctx->pc = 0x7F431C5Cu;
    ctx->downcount -= 1;
    // 7F431C5C: stw     r3, 2072(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2072);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431C60:
    ctx->pc = 0x7F431C60u;
    ctx->downcount -= 16;
    // 7F431C60: lmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F431C64:
    ctx->pc = 0x7F431C64u;
    // 7F431C64: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431C68:
    ctx->pc = 0x7F431C68u;
    // 7F431C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F431C6C:
    ctx->pc = 0x7F431C6Cu;
    // 7F431C6C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F431C70:
    ctx->pc = 0x7F431C70u;
    // 7F431C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F431C74:
    ctx->pc = 0x7F431C74u;
    ctx->downcount -= 37;
    // 7F431C74: stwu     r1, -416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-416);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F431C78:
    ctx->pc = 0x7F431C78u;
    // 7F431C78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F431C7C:
    ctx->pc = 0x7F431C7Cu;
    // 7F431C7C: stw     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431C80:
    ctx->pc = 0x7F431C80u;
    // 7F431C80: stfd     f31, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431C80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F431C84:
    ctx->pc = 0x7F431C84u;
    // 7F431C84: psq_st   f31, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F431C84u);
        if (ctx->exception) return;
    }

label_7F431C88:
    ctx->pc = 0x7F431C88u;
    // 7F431C88: stfd     f30, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431C88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F431C8C:
    ctx->pc = 0x7F431C8Cu;
    // 7F431C8C: psq_st   f30, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431C8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F431C8Cu);
        if (ctx->exception) return;
    }

label_7F431C90:
    ctx->pc = 0x7F431C90u;
    // 7F431C90: stfd     f29, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F431C94:
    ctx->pc = 0x7F431C94u;
    // 7F431C94: psq_st   f29, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431C94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F431C94u);
        if (ctx->exception) return;
    }

label_7F431C98:
    ctx->pc = 0x7F431C98u;
    // 7F431C98: stfd     f28, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431C98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F431C9C:
    ctx->pc = 0x7F431C9Cu;
    // 7F431C9C: psq_st   f28, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431C9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F431C9Cu);
        if (ctx->exception) return;
    }

label_7F431CA0:
    ctx->pc = 0x7F431CA0u;
    // 7F431CA0: stfd     f27, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F431CA4:
    ctx->pc = 0x7F431CA4u;
    // 7F431CA4: psq_st   f27, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431CA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F431CA4u);
        if (ctx->exception) return;
    }

label_7F431CA8:
    ctx->pc = 0x7F431CA8u;
    // 7F431CA8: stfd     f26, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F431CAC:
    ctx->pc = 0x7F431CACu;
    // 7F431CAC: psq_st   f26, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F431CACu);
        if (ctx->exception) return;
    }

label_7F431CB0:
    ctx->pc = 0x7F431CB0u;
    // 7F431CB0: stfd     f25, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F431CB4:
    ctx->pc = 0x7F431CB4u;
    // 7F431CB4: psq_st   f25, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F431CB4u);
        if (ctx->exception) return;
    }

label_7F431CB8:
    ctx->pc = 0x7F431CB8u;
    // 7F431CB8: stfd     f24, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431CB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F431CBC:
    ctx->pc = 0x7F431CBCu;
    // 7F431CBC: psq_st   f24, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431CBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F431CBCu);
        if (ctx->exception) return;
    }

label_7F431CC0:
    ctx->pc = 0x7F431CC0u;
    // 7F431CC0: stfd     f23, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

label_7F431CC4:
    ctx->pc = 0x7F431CC4u;
    // 7F431CC4: psq_st   f23, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F431CC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x7F431CC4u);
        if (ctx->exception) return;
    }

label_7F431CC8:
    ctx->pc = 0x7F431CC8u;
    // 7F431CC8: stmw     r22, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F431CCC:
    ctx->pc = 0x7F431CCCu;
    // 7F431CCC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F431CD0:
    ctx->pc = 0x7F431CD0u;
    // 7F431CD0: lwz     r5, 1232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1232);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F431CD4:
    ctx->pc = 0x7F431CD4u;
    // 7F431CD4: addi    r31, r28, 32
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(32);

label_7F431CD8:
    ctx->pc = 0x7F431CD8u;
    // 7F431CD8: cmplwi  r5, 0x0000
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

label_7F431CDC:
    ctx->pc = 0x7F431CDCu;
    // 7F431CDC: bc    12, 2, 0x7F431CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431CF0;
        }
    }

label_7F431CE0:
    ctx->pc = 0x7F431CE0u;
    ctx->downcount -= 4;
    // 7F431CE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F431CE4:
    ctx->pc = 0x7F431CE4u;
    // 7F431CE4: addi    r4, r28, 1364
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1364);

label_7F431CE8:
    ctx->pc = 0x7F431CE8u;
    // 7F431CE8: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F431CEC:
    ctx->pc = 0x7F431CECu;
    // 7F431CEC: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F431CF0u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F431CF0:
    ctx->pc = 0x7F431CF0u;
    ctx->downcount -= 4;
    // 7F431CF0: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F431CF4:
    ctx->pc = 0x7F431CF4u;
    // 7F431CF4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F431CF8:
    ctx->pc = 0x7F431CF8u;
    // 7F431CF8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F431CFC:
    ctx->pc = 0x7F431CFCu;
    // 7F431CFC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F431D00:
    ctx->downcount -= 4;
    // 7F431D00: addi    r0, r27, 1276
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(1276);

label_7F431D04:
    ctx->pc = 0x7F431D04u;
    // 7F431D04: lwzx    r5, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F431D08:
    // 7F431D08: cmplwi  r5, 0x0000
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

label_7F431D0C:
    // 7F431D0C: bc    12, 2, 0x7F431D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431D28;
        }
    }

label_7F431D10:
    ctx->downcount -= 6;
    // 7F431D10: addi    r3, r26, 432
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(432);

label_7F431D14:
    // 7F431D14: addi    r4, r25, 1492
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(1492);

label_7F431D18:
    // 7F431D18: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F431D1C:
    // 7F431D1C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F431D20:
    // 7F431D20: add   r4, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F431D24:
    // 7F431D24: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F431D28u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F431D28:
    ctx->downcount -= 6;
    // 7F431D28: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F431D2C:
    // 7F431D2C: addi    r26, r26, 400
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(400);

label_7F431D30:
    // 7F431D30: cmpwi   r22, 2
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F431D34:
    // 7F431D34: addi    r27, r27, 44
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(44);

label_7F431D38:
    // 7F431D38: addi    r25, r25, 128
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(128);

label_7F431D3C:
    // 7F431D3C: bc    12, 0, 0x7F431D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F431D00u;
                return;
            }
            goto label_7F431D00;
        }
    }

label_7F431D40:
    ctx->pc = 0x7F431D40u;
    ctx->downcount -= 3;
    // 7F431D40: lwz     r0, 1232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431D44:
    ctx->pc = 0x7F431D44u;
    // 7F431D44: cmplwi  r0, 0x0000
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

label_7F431D48:
    ctx->pc = 0x7F431D48u;
    // 7F431D48: bc    12, 2, 0x7F431D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431D5C;
        }
    }

label_7F431D4C:
    ctx->pc = 0x7F431D4Cu;
    ctx->downcount -= 2;
    // 7F431D4C: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F431D50:
    ctx->pc = 0x7F431D50u;
    // 7F431D50: bl      0x7F023170
    {
            ctx->lr = 0x7F431D54u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F431D54:
    ctx->pc = 0x7F431D54u;
    ctx->downcount -= 2;
    // 7F431D54: addi    r3, r28, 1232
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1232);

label_7F431D58:
    ctx->pc = 0x7F431D58u;
    // 7F431D58: bl      0x7F0427FC
    {
            ctx->lr = 0x7F431D5Cu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F431D5C:
    ctx->pc = 0x7F431D5Cu;
    ctx->downcount -= 3;
    // 7F431D5C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F431D60:
    ctx->pc = 0x7F431D60u;
    // 7F431D60: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F431D64:
    ctx->pc = 0x7F431D64u;
    // 7F431D64: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F431D68:
    ctx->downcount -= 4;
    // 7F431D68: add   r24, r28, r26
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F431D6C:
    ctx->pc = 0x7F431D6Cu;
    // 7F431D6C: lwz     r0, 1276(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431D70:
    // 7F431D70: cmplwi  r0, 0x0000
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

label_7F431D74:
    // 7F431D74: bc    12, 2, 0x7F431E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431E18;
        }
    }

label_7F431D78:
    ctx->downcount -= 1;
    // 7F431D78: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F431D7Cu;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F431D7C:
    ctx->downcount -= 2;
    // 7F431D7C: cmpwi   r3, 0
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

label_7F431D80:
    // 7F431D80: bc    12, 2, 0x7F431E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431E04;
        }
    }

label_7F431D84:
    ctx->downcount -= 1;
    // 7F431D84: bl      0x7F0B8A9C
    {
            ctx->lr = 0x7F431D88u;
            ctx->pc = 0x7F0B8A9Cu;
            return;
    }

label_7F431D88:
    ctx->pc = 0x7F431D88u;
    ctx->downcount -= 31;
    // 7F431D88: lha     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F431D8C:
    // 7F431D8C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F431D90:
    // 7F431D90: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F431D94:
    // 7F431D94: add   r6, r28, r25
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F431D98:
    // 7F431D98: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F431D9C:
    ctx->pc = 0x7F431D9Cu;
    // 7F431D9C: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431DA0:
    ctx->pc = 0x7F431DA0u;
    // 7F431DA0: lfd     f2, -9768(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431DA0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9768);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431DA4:
    ctx->pc = 0x7F431DA4u;
    // 7F431DA4: stw     r4, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F431DA8:
    ctx->pc = 0x7F431DA8u;
    // 7F431DA8: lfs     f1, 432(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431DA8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431DAC:
    ctx->pc = 0x7F431DACu;
    // 7F431DAC: lfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431DACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431DB0:
    ctx->pc = 0x7F431DB0u;
    // 7F431DB0: stw     r0, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431DB4:
    ctx->pc = 0x7F431DB4u;
    // 7F431DB4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431DB4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F431DB8:
    ctx->pc = 0x7F431DB8u;
    // 7F431DB8: stw     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431DBC:
    ctx->pc = 0x7F431DBCu;
    // 7F431DBC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431DBCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F431DC0:
    ctx->pc = 0x7F431DC0u;
    // 7F431DC0: stfs     f0, 432(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431DC0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431DC4:
    ctx->pc = 0x7F431DC4u;
    // 7F431DC4: lha     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F431DC8:
    ctx->pc = 0x7F431DC8u;
    // 7F431DC8: lfs     f1, 436(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431DC8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431DCC:
    // 7F431DCC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F431DD0:
    ctx->pc = 0x7F431DD0u;
    // 7F431DD0: stw     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431DD4:
    ctx->pc = 0x7F431DD4u;
    // 7F431DD4: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431DD8:
    ctx->pc = 0x7F431DD8u;
    // 7F431DD8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431DD8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F431DDC:
    ctx->pc = 0x7F431DDCu;
    // 7F431DDC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431DDCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F431DE0:
    ctx->pc = 0x7F431DE0u;
    // 7F431DE0: stfs     f0, 436(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431DE0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(436);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431DE4:
    ctx->pc = 0x7F431DE4u;
    // 7F431DE4: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F431DE8:
    ctx->pc = 0x7F431DE8u;
    // 7F431DE8: lfs     f1, 440(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431DE8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431DEC:
    // 7F431DEC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F431DF0:
    ctx->pc = 0x7F431DF0u;
    // 7F431DF0: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431DF4:
    ctx->pc = 0x7F431DF4u;
    // 7F431DF4: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431DF8:
    ctx->pc = 0x7F431DF8u;
    // 7F431DF8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F431DF8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F431DFC:
    ctx->pc = 0x7F431DFCu;
    // 7F431DFC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431DFCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F431E00:
    ctx->pc = 0x7F431E00u;
    // 7F431E00: stfs     f0, 440(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431E00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(440);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431E04:
    ctx->downcount -= 3;
    // 7F431E04: addi    r3, r25, 432
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(432);

label_7F431E08:
    // 7F431E08: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F431E0C:
    // 7F431E0C: bl      0x7F023170
    {
            ctx->lr = 0x7F431E10u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F431E10:
    ctx->downcount -= 2;
    // 7F431E10: addi    r3, r24, 1276
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1276);

label_7F431E14:
    // 7F431E14: bl      0x7F0427FC
    {
            ctx->lr = 0x7F431E18u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F431E18:
    ctx->downcount -= 5;
    // 7F431E18: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F431E1C:
    // 7F431E1C: addi    r26, r26, 44
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(44);

label_7F431E20:
    // 7F431E20: cmpwi   r22, 2
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F431E24:
    // 7F431E24: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F431E28:
    // 7F431E28: bc    12, 0, 0x7F431D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F431D68u;
                return;
            }
            goto label_7F431D68;
        }
    }

label_7F431E2C:
    ctx->pc = 0x7F431E2Cu;
    ctx->downcount -= 3;
    // 7F431E2C: lwz     r0, 1232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431E30:
    ctx->pc = 0x7F431E30u;
    // 7F431E30: cmplwi  r0, 0x0000
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

label_7F431E34:
    ctx->pc = 0x7F431E34u;
    // 7F431E34: bc    12, 2, 0x7F431E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F431E50;
        }
    }

label_7F431E38:
    ctx->pc = 0x7F431E38u;
    ctx->downcount -= 6;
    // 7F431E38: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F431E3C:
    ctx->pc = 0x7F431E3Cu;
    // 7F431E3C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F431E40:
    ctx->pc = 0x7F431E40u;
    // 7F431E40: addi    r5, r3, 18312
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F431E44:
    ctx->pc = 0x7F431E44u;
    // 7F431E44: addi    r3, r28, 1760
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1760);

label_7F431E48:
    ctx->pc = 0x7F431E48u;
    // 7F431E48: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F431E4C:
    ctx->pc = 0x7F431E4Cu;
    // 7F431E4C: bl      0x7F014944
    {
            ctx->lr = 0x7F431E50u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F431E50:
    ctx->pc = 0x7F431E50u;
    ctx->downcount -= 3;
    // 7F431E50: lwz     r3, 2048(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2048);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F431E54:
    ctx->pc = 0x7F431E54u;
    // 7F431E54: cmpwi   r3, 0
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

label_7F431E58:
    ctx->pc = 0x7F431E58u;
    // 7F431E58: bc    4, 1, 0x7F43224C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43224C;
        }
    }

label_7F431E5C:
    ctx->pc = 0x7F431E5Cu;
    ctx->downcount -= 5;
    // 7F431E5C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F431E60:
    ctx->pc = 0x7F431E60u;
    // 7F431E60: stw     r0, 2048(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431E64:
    ctx->pc = 0x7F431E64u;
    // 7F431E64: lwz     r0, 2048(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431E68:
    ctx->pc = 0x7F431E68u;
    // 7F431E68: cmplwi  r0, 0x0022
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0022u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F431E6C:
    ctx->pc = 0x7F431E6Cu;
    // 7F431E6C: bc    12, 1, 0x7F43224C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43224C;
        }
    }

label_7F431E70:
    ctx->pc = 0x7F431E70u;
    ctx->downcount -= 7;
    // 7F431E70: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F431E74:
    ctx->pc = 0x7F431E74u;
    // 7F431E74: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F431E78:
    ctx->pc = 0x7F431E78u;
    // 7F431E78: addi    r3, r3, 29788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29788);

label_7F431E7C:
    ctx->pc = 0x7F431E7Cu;
    // 7F431E7C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F431E80:
    ctx->pc = 0x7F431E80u;
    // 7F431E80: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F431E84:
    ctx->pc = 0x7F431E84u;
    // 7F431E84: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F431E88:
    ctx->pc = 0x7F431E88u;
    ctx->downcount -= 4;
    // 7F431E88: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F431E8C:
    ctx->pc = 0x7F431E8Cu;
    // 7F431E8C: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F431E90:
    ctx->pc = 0x7F431E90u;
    // 7F431E90: addi    r3, r3, 29768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29768);

label_7F431E94:
    ctx->pc = 0x7F431E94u;
    // 7F431E94: bl      0x7F013B6C
    {
            ctx->lr = 0x7F431E98u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F431E98:
    ctx->pc = 0x7F431E98u;
    ctx->downcount -= 1;
    // 7F431E98: bl      0x7F43248C
    {
            ctx->lr = 0x7F431E9Cu;
            goto label_7F43248C;
    }

label_7F431E9C:
    ctx->pc = 0x7F431E9Cu;
    ctx->downcount -= 27;
    // 7F431E9C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431EA0:
    ctx->pc = 0x7F431EA0u;
    // 7F431EA0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431EA4:
    ctx->pc = 0x7F431EA4u;
    // 7F431EA4: addi    r5, r3, -9760
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9760);

label_7F431EA8:
    ctx->pc = 0x7F431EA8u;
    // 7F431EA8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431EAC:
    ctx->pc = 0x7F431EACu;
    // 7F431EAC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431EACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F431EB0:
    ctx->pc = 0x7F431EB0u;
    // 7F431EB0: addi    r5, r4, -9756
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9756);

label_7F431EB4:
    ctx->pc = 0x7F431EB4u;
    // 7F431EB4: lfs     f0, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F431EB4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431EB8:
    ctx->pc = 0x7F431EB8u;
    // 7F431EB8: addi    r4, r3, -9752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9752);

label_7F431EBC:
    ctx->pc = 0x7F431EBCu;
    // 7F431EBC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431EBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F431EC0:
    ctx->pc = 0x7F431EC0u;
    // 7F431EC0: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F431EC4:
    ctx->pc = 0x7F431EC4u;
    // 7F431EC4: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431EC4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F431EC8:
    ctx->pc = 0x7F431EC8u;
    // 7F431EC8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F431EC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F431ECC:
    ctx->pc = 0x7F431ECCu;
    // 7F431ECC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F431ED0:
    ctx->pc = 0x7F431ED0u;
    // 7F431ED0: li      r5, 5000
    ctx->gpr[5] = (u32)(s32)(5000);

label_7F431ED4:
    ctx->pc = 0x7F431ED4u;
    // 7F431ED4: li      r6, 7500
    ctx->gpr[6] = (u32)(s32)(7500);

label_7F431ED8:
    ctx->pc = 0x7F431ED8u;
    // 7F431ED8: li      r7, 5000
    ctx->gpr[7] = (u32)(s32)(5000);

label_7F431EDC:
    ctx->pc = 0x7F431EDCu;
    // 7F431EDC: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431EDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431EE0:
    ctx->pc = 0x7F431EE0u;
    // 7F431EE0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F431EE4:
    ctx->pc = 0x7F431EE4u;
    // 7F431EE4: li      r9, 17
    ctx->gpr[9] = (u32)(s32)(17);

label_7F431EE8:
    ctx->pc = 0x7F431EE8u;
    // 7F431EE8: li      r10, 43
    ctx->gpr[10] = (u32)(s32)(43);

label_7F431EEC:
    ctx->pc = 0x7F431EECu;
    // 7F431EEC: lfs     f0, 36(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F431EECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431EF0:
    ctx->pc = 0x7F431EF0u;
    // 7F431EF0: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431EF0u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F431EF4:
    ctx->pc = 0x7F431EF4u;
    // 7F431EF4: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431EF8:
    ctx->pc = 0x7F431EF8u;
    // 7F431EF8: lfs     f0, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F431EF8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431EFC:
    ctx->pc = 0x7F431EFCu;
    // 7F431EFC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431EFCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F431F00:
    ctx->pc = 0x7F431F00u;
    // 7F431F00: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431F04:
    ctx->pc = 0x7F431F04u;
    // 7F431F04: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F431F08u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F431F08:
    ctx->pc = 0x7F431F08u;
    ctx->downcount -= 1;
    // 7F431F08: b       0x7F43224C
    {
            goto label_7F43224C;
    }

label_7F431F0C:
    ctx->pc = 0x7F431F0Cu;
    ctx->downcount -= 20;
    // 7F431F0C: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F431F10:
    ctx->pc = 0x7F431F10u;
    // 7F431F10: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F431F14:
    ctx->pc = 0x7F431F14u;
    // 7F431F14: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F431F18:
    ctx->pc = 0x7F431F18u;
    // 7F431F18: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F431F1C:
    ctx->pc = 0x7F431F1Cu;
    // 7F431F1C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F431F20:
    ctx->pc = 0x7F431F20u;
    // 7F431F20: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F431F24:
    ctx->pc = 0x7F431F24u;
    // 7F431F24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F431F28:
    ctx->pc = 0x7F431F28u;
    // 7F431F28: lfs     f28, -9780(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F431F28u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-9780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F431F2C:
    ctx->pc = 0x7F431F2Cu;
    // 7F431F2C: lfs     f29, -9744(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F431F2Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-9744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F431F30:
    ctx->pc = 0x7F431F30u;
    // 7F431F30: addi    r30, r28, 432
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(432);

label_7F431F34:
    ctx->pc = 0x7F431F34u;
    // 7F431F34: lfs     f30, -9748(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F431F34u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-9748);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F431F38:
    ctx->pc = 0x7F431F38u;
    // 7F431F38: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F431F3C:
    ctx->pc = 0x7F431F3Cu;
    // 7F431F3C: lfd     f31, -9768(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F431F3Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-9768);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431F40:
    ctx->pc = 0x7F431F40u;
    // 7F431F40: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F431F44:
    ctx->pc = 0x7F431F44u;
    // 7F431F44: lfs     f25, -9740(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F431F44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F431F48:
    ctx->pc = 0x7F431F48u;
    // 7F431F48: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F431F4C:
    ctx->pc = 0x7F431F4Cu;
    // 7F431F4C: lfs     f26, -9776(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F431F4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F431F50:
    ctx->pc = 0x7F431F50u;
    // 7F431F50: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F431F54:
    ctx->pc = 0x7F431F54u;
    // 7F431F54: lfs     f27, -9736(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F431F54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F431F58:
    ctx->pc = 0x7F431F58u;
    // 7F431F58: lis     r24, 17200
    ctx->gpr[24] = ((u32)(s32)(17200) << 16);

label_7F431F5C:
    ctx->downcount -= 1;
    // 7F431F5C: bl      0x7F43248C
    {
            ctx->lr = 0x7F431F60u;
            goto label_7F43248C;
    }

label_7F431F60:
    ctx->pc = 0x7F431F60u;
    ctx->downcount -= 3;
    // 7F431F60: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F431F60u)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F431F64:
    ctx->pc = 0x7F431F64u;
    // 7F431F64: fmuls   f23, f28, f24
    if (!ppc_fp_available_inline(ctx, 0x7F431F64u)) return;
    ppc_fmuls(ctx, 23, 28, 24);

label_7F431F68:
    // 7F431F68: bl      0x7F432444
    {
            ctx->lr = 0x7F431F6Cu;
            goto label_7F432444;
    }

label_7F431F6C:
    ctx->pc = 0x7F431F6Cu;
    ctx->downcount -= 6;
    // 7F431F6C: fmadds f0, f29, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F431F6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F431F70:
    ctx->pc = 0x7F431F70u;
    // 7F431F70: fmr    f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F431F70u)) return;
    ctx->fpr[1] = ctx->fpr[23];

label_7F431F74:
    ctx->pc = 0x7F431F74u;
    // 7F431F74: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431F74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F431F78:
    ctx->pc = 0x7F431F78u;
    // 7F431F78: stfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F431F7C:
    ctx->pc = 0x7F431F7Cu;
    // 7F431F7C: lwz     r22, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F431F80:
    // 7F431F80: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F431F84u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F431F84:
    ctx->downcount -= 19;
    // 7F431F84: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F431F88:
    // 7F431F88: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F431F8C:
    ctx->pc = 0x7F431F8Cu;
    // 7F431F8C: stw     r3, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F431F90:
    // 7F431F90: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F431F94:
    ctx->pc = 0x7F431F94u;
    // 7F431F94: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431F94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F431F98:
    // 7F431F98: add   r23, r30, r25
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F431F9C:
    ctx->pc = 0x7F431F9Cu;
    // 7F431F9C: stw     r24, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F431FA0:
    ctx->pc = 0x7F431FA0u;
    // 7F431FA0: lfd     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431FA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431FA4:
    ctx->pc = 0x7F431FA4u;
    // 7F431FA4: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431FA8:
    ctx->pc = 0x7F431FA8u;
    // 7F431FA8: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F431FA8u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_7F431FAC:
    ctx->pc = 0x7F431FACu;
    // 7F431FAC: stw     r24, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F431FB0:
    ctx->pc = 0x7F431FB0u;
    // 7F431FB0: fmadds f2, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431FB0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F431FB4:
    ctx->pc = 0x7F431FB4u;
    // 7F431FB4: lfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431FB8:
    ctx->pc = 0x7F431FB8u;
    // 7F431FB8: fmr    f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F431FB8u)) return;
    ctx->fpr[1] = ctx->fpr[23];

label_7F431FBC:
    ctx->pc = 0x7F431FBCu;
    // 7F431FBC: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F431FBCu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F431FC0:
    ctx->pc = 0x7F431FC0u;
    // 7F431FC0: stfs     f2, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F431FC0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F431FC4:
    ctx->pc = 0x7F431FC4u;
    // 7F431FC4: fmuls   f0, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x7F431FC4u)) return;
    ppc_fmuls(ctx, 0, 25, 0);

label_7F431FC8:
    ctx->pc = 0x7F431FC8u;
    // 7F431FC8: stfs     f0, 4(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F431FC8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F431FCC:
    // 7F431FCC: bl      0x7F008330
    {
            ctx->lr = 0x7F431FD0u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F431FD0:
    ctx->downcount -= 26;
    // 7F431FD0: xoris   r0, r22, 0x8000
    ctx->gpr[0] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F431FD4:
    ctx->pc = 0x7F431FD4u;
    // 7F431FD4: fneg    f0, f24
    if (!ppc_fp_available_inline(ctx, 0x7F431FD4u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[24]) ^ 0x8000000000000000ull);

label_7F431FD8:
    ctx->pc = 0x7F431FD8u;
    // 7F431FD8: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F431FDC:
    // 7F431FDC: addi    r22, r26, 1276
    ctx->gpr[22] = ctx->gpr[26] + (u32)(s32)(1276);

label_7F431FE0:
    // 7F431FE0: add   r22, r28, r22
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F431FE4:
    ctx->pc = 0x7F431FE4u;
    // 7F431FE4: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F431FE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F431FE8:
    ctx->pc = 0x7F431FE8u;
    // 7F431FE8: stw     r24, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F431FEC:
    ctx->pc = 0x7F431FECu;
    // 7F431FEC: fmadds f0, f26, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F431FECu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[26], ctx->fpr[0], ctx->fpr[27], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F431FF0:
    // 7F431FF0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F431FF4:
    ctx->pc = 0x7F431FF4u;
    // 7F431FF4: lfd     f3, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F431FF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F431FF8:
    // 7F431FF8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F431FFC:
    ctx->pc = 0x7F431FFCu;
    // 7F431FFC: fsubs   f3, f3, f31
    if (!ppc_fp_available_inline(ctx, 0x7F431FFCu)) return;
    ppc_fsubs(ctx, 3, 3, 31);

label_7F432000:
    ctx->pc = 0x7F432000u;
    // 7F432000: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432000u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F432004:
    ctx->pc = 0x7F432004u;
    // 7F432004: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F432004u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F432008:
    ctx->pc = 0x7F432008u;
    // 7F432008: stfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F43200C:
    ctx->pc = 0x7F43200Cu;
    // 7F43200C: stfs     f1, 8(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F43200Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F432010:
    ctx->pc = 0x7F432010u;
    // 7F432010: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432014:
    ctx->pc = 0x7F432014u;
    // 7F432014: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432014u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432018:
    ctx->pc = 0x7F432018u;
    // 7F432018: stfs     f0, 12(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F432018u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43201C:
    ctx->pc = 0x7F43201Cu;
    // 7F43201C: sth     r0, 34(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432020:
    ctx->pc = 0x7F432020u;
    // 7F432020: lwz     r4, 32(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432024:
    ctx->pc = 0x7F432024u;
    // 7F432024: lwz     r0, 36(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432028:
    ctx->pc = 0x7F432028u;
    // 7F432028: stw     r4, 40(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F43202C:
    ctx->pc = 0x7F43202Cu;
    // 7F43202C: stw     r0, 44(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432030:
    ctx->pc = 0x7F432030u;
    // 7F432030: lwz     r4, 2036(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2036);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432034:
    // 7F432034: bl      0x7F04272C
    {
            ctx->lr = 0x7F432038u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F432038:
    ctx->downcount -= 4;
    // 7F432038: addi    r4, r27, 1492
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(1492);

label_7F43203C:
    // 7F43203C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F432040:
    // 7F432040: add   r4, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F432044:
    // 7F432044: bl      0x7F042B20
    {
            ctx->lr = 0x7F432048u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F432048:
    ctx->downcount -= 2;
    // 7F432048: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F43204C:
    // 7F43204C: bl      0x7F023170
    {
            ctx->lr = 0x7F432050u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F432050:
    ctx->downcount -= 2;
    // 7F432050: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F432054:
    // 7F432054: bl      0x7F0427FC
    {
            ctx->lr = 0x7F432058u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F432058:
    ctx->downcount -= 6;
    // 7F432058: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F43205C:
    // 7F43205C: addi    r26, r26, 44
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(44);

label_7F432060:
    // 7F432060: cmpwi   r29, 2
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

label_7F432064:
    // 7F432064: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F432068:
    // 7F432068: addi    r27, r27, 128
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(128);

label_7F43206C:
    // 7F43206C: bc    12, 0, 0x7F431F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F431F5Cu;
                return;
            }
            goto label_7F431F5C;
        }
    }

label_7F432070:
    ctx->pc = 0x7F432070u;
    ctx->downcount -= 7;
    // 7F432070: lwz     r3, 1232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432074:
    ctx->pc = 0x7F432074u;
    // 7F432074: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432078:
    ctx->pc = 0x7F432078u;
    // 7F432078: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F43207C:
    ctx->pc = 0x7F43207Cu;
    // 7F43207C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432080:
    ctx->pc = 0x7F432080u;
    // 7F432080: lfs     f0, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F432080u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432084:
    ctx->pc = 0x7F432084u;
    // 7F432084: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432088:
    ctx->pc = 0x7F432088u;
    // 7F432088: bl      0x7F432444
    {
            ctx->lr = 0x7F43208Cu;
            goto label_7F432444;
    }

label_7F43208C:
    ctx->pc = 0x7F43208Cu;
    ctx->downcount -= 13;
    // 7F43208C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432090:
    ctx->pc = 0x7F432090u;
    // 7F432090: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432094:
    ctx->pc = 0x7F432094u;
    // 7F432094: lfs     f3, -9732(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432094u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9732);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F432098:
    ctx->pc = 0x7F432098u;
    // 7F432098: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F43209C:
    ctx->pc = 0x7F43209Cu;
    // 7F43209C: lfs     f2, 36(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F43209Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4320A0:
    ctx->pc = 0x7F4320A0u;
    // 7F4320A0: lfs     f0, -9728(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4320A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4320A4:
    ctx->pc = 0x7F4320A4u;
    // 7F4320A4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4320A8:
    ctx->pc = 0x7F4320A8u;
    // 7F4320A8: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4320A8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F4320AC:
    ctx->pc = 0x7F4320ACu;
    // 7F4320AC: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4320ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4320B0:
    ctx->pc = 0x7F4320B0u;
    // 7F4320B0: lfs     f1, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F4320B0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4320B4:
    ctx->pc = 0x7F4320B4u;
    // 7F4320B4: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4320B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4320B8:
    ctx->pc = 0x7F4320B8u;
    // 7F4320B8: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4320B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4320BC:
    ctx->pc = 0x7F4320BCu;
    // 7F4320BC: bl      0x7F205744
    {
            ctx->lr = 0x7F4320C0u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F4320C0:
    ctx->pc = 0x7F4320C0u;
    ctx->downcount -= 5;
    // 7F4320C0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4320C4:
    ctx->pc = 0x7F4320C4u;
    // 7F4320C4: lwz     r5, 1232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1232);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4320C8:
    ctx->pc = 0x7F4320C8u;
    // 7F4320C8: addi    r4, r1, 124
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(124);

label_7F4320CC:
    ctx->pc = 0x7F4320CCu;
    // 7F4320CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F4320D0:
    loop_7F4320D0(ctx);
    if (ctx->pc == 0x7F4320E4u) goto label_7F4320E4;
    return;
label_7F4320D4:
    ctx->pc = 0x7F4320D4u;
    // 7F4320D4: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F4320D8:
    ctx->pc = 0x7F4320D8u;
    // 7F4320D8: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4320DC:
    ctx->pc = 0x7F4320DCu;
    // 7F4320DC: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F4320E0:
    // 7F4320E0: bc    16, 0, 0x7F4320D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4320D0u;
                return;
            }
            goto label_7F4320D0;
        }
    }

label_7F4320E4:
    ctx->pc = 0x7F4320E4u;
    ctx->downcount -= 1;
    // 7F4320E4: bl      0x7F432420
    {
            ctx->lr = 0x7F4320E8u;
            goto label_7F432420;
    }

label_7F4320E8:
    ctx->pc = 0x7F4320E8u;
    ctx->downcount -= 54;
    // 7F4320E8: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F4320EC:
    ctx->pc = 0x7F4320ECu;
    // 7F4320EC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4320F0:
    ctx->pc = 0x7F4320F0u;
    // 7F4320F0: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F4320F4:
    ctx->pc = 0x7F4320F4u;
    // 7F4320F4: lfs     f1, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4320F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4320F8:
    ctx->pc = 0x7F4320F8u;
    // 7F4320F8: lfs     f0, -9724(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4320F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9724);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4320FC:
    ctx->pc = 0x7F4320FCu;
    // 7F4320FC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4320FCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F432100:
    ctx->pc = 0x7F432100u;
    // 7F432100: stfs     f0, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432104:
    ctx->pc = 0x7F432104u;
    // 7F432104: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F432108:
    ctx->pc = 0x7F432108u;
    // 7F432108: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F43210C:
    ctx->pc = 0x7F43210Cu;
    // 7F43210C: addi    r22, r3, 450
    ctx->gpr[22] = ctx->gpr[3] + (u32)(s32)(450);

label_7F432110:
    ctx->pc = 0x7F432110u;
    // 7F432110: bl      0x7F432420
    {
            ctx->lr = 0x7F432114u;
            goto label_7F432420;
    }

label_7F432114:
    ctx->pc = 0x7F432114u;
    ctx->downcount -= 2;
    // 7F432114: rlwinm. r0, r3, 0, 31, 31
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

label_7F432118:
    ctx->pc = 0x7F432118u;
    // 7F432118: bc    12, 2, 0x7F432148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432148;
        }
    }

label_7F43211C:
    ctx->pc = 0x7F43211Cu;
    ctx->downcount -= 11;
    // 7F43211C: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F432120:
    ctx->pc = 0x7F432120u;
    // 7F432120: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F432124:
    ctx->pc = 0x7F432124u;
    // 7F432124: stw     r3, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432128:
    ctx->pc = 0x7F432128u;
    // 7F432128: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43212C:
    ctx->pc = 0x7F43212Cu;
    // 7F43212C: lfd     f1, -9768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F43212Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432130:
    ctx->pc = 0x7F432130u;
    // 7F432130: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432134:
    ctx->pc = 0x7F432134u;
    // 7F432134: lfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432138:
    ctx->pc = 0x7F432138u;
    // 7F432138: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43213C:
    ctx->pc = 0x7F43213Cu;
    // 7F43213C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F43213Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F432140:
    ctx->pc = 0x7F432140u;
    // 7F432140: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432140u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F432144:
    ctx->pc = 0x7F432144u;
    // 7F432144: b       0x7F432170
    {
            goto label_7F432170;
    }

label_7F432148:
    ctx->pc = 0x7F432148u;
    ctx->downcount -= 10;
    // 7F432148: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F43214C:
    ctx->pc = 0x7F43214Cu;
    // 7F43214C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F432150:
    ctx->pc = 0x7F432150u;
    // 7F432150: stw     r3, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432154:
    ctx->pc = 0x7F432154u;
    // 7F432154: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432158:
    ctx->pc = 0x7F432158u;
    // 7F432158: lfd     f1, -9768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432158u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43215C:
    ctx->pc = 0x7F43215Cu;
    // 7F43215C: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432160:
    ctx->pc = 0x7F432160u;
    // 7F432160: lfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432164:
    ctx->pc = 0x7F432164u;
    // 7F432164: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432168:
    ctx->pc = 0x7F432168u;
    // 7F432168: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F432168u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F43216C:
    ctx->pc = 0x7F43216Cu;
    // 7F43216C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43216Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F432170:
    ctx->pc = 0x7F432170u;
    ctx->downcount -= 2;
    // 7F432170: stfs     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432174:
    ctx->pc = 0x7F432174u;
    // 7F432174: bl      0x7F432420
    {
            ctx->lr = 0x7F432178u;
            goto label_7F432420;
    }

label_7F432178:
    ctx->pc = 0x7F432178u;
    ctx->downcount -= 2;
    // 7F432178: rlwinm. r0, r3, 0, 31, 31
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

label_7F43217C:
    ctx->pc = 0x7F43217Cu;
    // 7F43217C: bc    12, 2, 0x7F4321AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4321AC;
        }
    }

label_7F432180:
    ctx->pc = 0x7F432180u;
    ctx->downcount -= 11;
    // 7F432180: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F432184:
    ctx->pc = 0x7F432184u;
    // 7F432184: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F432188:
    ctx->pc = 0x7F432188u;
    // 7F432188: stw     r3, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F43218C:
    ctx->pc = 0x7F43218Cu;
    // 7F43218C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432190:
    ctx->pc = 0x7F432190u;
    // 7F432190: lfd     f1, -9768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432190u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432194:
    ctx->pc = 0x7F432194u;
    // 7F432194: stw     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432198:
    ctx->pc = 0x7F432198u;
    // 7F432198: lfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F43219C:
    ctx->pc = 0x7F43219Cu;
    // 7F43219C: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43219Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4321A0:
    ctx->pc = 0x7F4321A0u;
    // 7F4321A0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4321A0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F4321A4:
    ctx->pc = 0x7F4321A4u;
    // 7F4321A4: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4321A4u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F4321A8:
    ctx->pc = 0x7F4321A8u;
    // 7F4321A8: b       0x7F4321D4
    {
            goto label_7F4321D4;
    }

label_7F4321AC:
    ctx->pc = 0x7F4321ACu;
    ctx->downcount -= 10;
    // 7F4321AC: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F4321B0:
    ctx->pc = 0x7F4321B0u;
    // 7F4321B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F4321B4:
    ctx->pc = 0x7F4321B4u;
    // 7F4321B4: stw     r3, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4321B8:
    ctx->pc = 0x7F4321B8u;
    // 7F4321B8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4321BC:
    ctx->pc = 0x7F4321BCu;
    // 7F4321BC: lfd     f1, -9768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4321BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4321C0:
    ctx->pc = 0x7F4321C0u;
    // 7F4321C0: stw     r0, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4321C4:
    ctx->pc = 0x7F4321C4u;
    // 7F4321C4: lfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4321C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F4321C8:
    ctx->pc = 0x7F4321C8u;
    // 7F4321C8: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4321C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4321CC:
    ctx->pc = 0x7F4321CCu;
    // 7F4321CC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4321CCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F4321D0:
    ctx->pc = 0x7F4321D0u;
    // 7F4321D0: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4321D0u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F4321D4:
    ctx->pc = 0x7F4321D4u;
    ctx->downcount -= 2;
    // 7F4321D4: stfs     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4321D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4321D8:
    ctx->pc = 0x7F4321D8u;
    // 7F4321D8: bl      0x7F432420
    {
            ctx->lr = 0x7F4321DCu;
            goto label_7F432420;
    }

label_7F4321DC:
    ctx->pc = 0x7F4321DCu;
    ctx->downcount -= 4;
    // 7F4321DC: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F4321E0:
    ctx->pc = 0x7F4321E0u;
    // 7F4321E0: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_7F4321E4:
    ctx->pc = 0x7F4321E4u;
    // 7F4321E4: addi    r4, r4, 150
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(150);

label_7F4321E8:
    ctx->pc = 0x7F4321E8u;
    // 7F4321E8: bl      0x7F17A56C
    {
            ctx->lr = 0x7F4321ECu;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F4321EC:
    ctx->pc = 0x7F4321ECu;
    ctx->downcount -= 1;
    // 7F4321EC: b       0x7F43224C
    {
            goto label_7F43224C;
    }

label_7F4321F0:
    ctx->pc = 0x7F4321F0u;
    ctx->downcount -= 5;
    // 7F4321F0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F4321F4:
    ctx->pc = 0x7F4321F4u;
    // 7F4321F4: lwz     r5, 1232(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1232);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4321F8:
    ctx->pc = 0x7F4321F8u;
    // 7F4321F8: addi    r4, r1, 60
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(60);

label_7F4321FC:
    ctx->pc = 0x7F4321FCu;
    // 7F4321FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F432200:
    loop_7F432200(ctx);
    if (ctx->pc == 0x7F432214u) goto label_7F432214;
    return;
label_7F432204:
    ctx->pc = 0x7F432204u;
    // 7F432204: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F432208:
    ctx->pc = 0x7F432208u;
    // 7F432208: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F43220C:
    ctx->pc = 0x7F43220Cu;
    // 7F43220C: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F432210:
    // 7F432210: bc    16, 0, 0x7F432200
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432200u;
                return;
            }
            goto label_7F432200;
        }
    }

label_7F432214:
    ctx->pc = 0x7F432214u;
    ctx->downcount -= 6;
    // 7F432214: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432218:
    ctx->pc = 0x7F432218u;
    // 7F432218: lfs     f1, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43221C:
    ctx->pc = 0x7F43221Cu;
    // 7F43221C: lfs     f0, -9724(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F43221Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9724);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432220:
    ctx->pc = 0x7F432220u;
    // 7F432220: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432220u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F432224:
    ctx->pc = 0x7F432224u;
    // 7F432224: stfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432228:
    ctx->pc = 0x7F432228u;
    // 7F432228: bl      0x7F432420
    {
            ctx->lr = 0x7F43222Cu;
            goto label_7F432420;
    }

label_7F43222C:
    ctx->pc = 0x7F43222Cu;
    ctx->downcount -= 4;
    // 7F43222C: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F432230:
    ctx->pc = 0x7F432230u;
    // 7F432230: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F432234:
    ctx->pc = 0x7F432234u;
    // 7F432234: addi    r4, r4, 200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(200);

label_7F432238:
    ctx->pc = 0x7F432238u;
    // 7F432238: bl      0x7F17A56C
    {
            ctx->lr = 0x7F43223Cu;
            ctx->pc = 0x7F17A56Cu;
            return;
    }

label_7F43223C:
    ctx->pc = 0x7F43223Cu;
    ctx->downcount -= 2;
    // 7F43223C: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F432240:
    ctx->pc = 0x7F432240u;
    // 7F432240: bl      0x7F023E10
    {
            ctx->lr = 0x7F432244u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F432244:
    ctx->pc = 0x7F432244u;
    ctx->downcount -= 2;
    // 7F432244: addi    r3, r28, 1232
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1232);

label_7F432248:
    ctx->pc = 0x7F432248u;
    // 7F432248: bl      0x7F042AAC
    {
            ctx->lr = 0x7F43224Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F43224C:
    ctx->pc = 0x7F43224Cu;
    ctx->downcount -= 1;
    // 7F43224C: bl      0x7F0B8A9C
    {
            ctx->lr = 0x7F432250u;
            ctx->pc = 0x7F0B8A9Cu;
            return;
    }

label_7F432250:
    ctx->pc = 0x7F432250u;
    ctx->downcount -= 3;
    // 7F432250: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432254:
    ctx->pc = 0x7F432254u;
    // 7F432254: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432258:
    ctx->pc = 0x7F432258u;
    // 7F432258: bl      0x7F432394
    {
            ctx->lr = 0x7F43225Cu;
            goto label_7F432394;
    }

label_7F43225C:
    ctx->pc = 0x7F43225Cu;
    ctx->downcount -= 4;
    // 7F43225C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432260:
    ctx->pc = 0x7F432260u;
    // 7F432260: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432264:
    ctx->pc = 0x7F432264u;
    // 7F432264: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432268:
    ctx->pc = 0x7F432268u;
    // 7F432268: bl      0x800261B4
    {
            ctx->lr = 0x7F43226Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F43226C:
    ctx->pc = 0x7F43226Cu;
    ctx->downcount -= 7;
    // 7F43226C: lwz     r3, 2052(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2052);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432270:
    ctx->pc = 0x7F432270u;
    // 7F432270: lha     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F432274:
    ctx->pc = 0x7F432274u;
    // 7F432274: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F432278:
    ctx->pc = 0x7F432278u;
    // 7F432278: stw     r0, 2052(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43227C:
    ctx->pc = 0x7F43227Cu;
    // 7F43227C: lwz     r0, 2052(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2052);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432280:
    ctx->pc = 0x7F432280u;
    // 7F432280: cmpwi   r0, 32000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(32000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F432284:
    ctx->pc = 0x7F432284u;
    // 7F432284: bc    4, 1, 0x7F432290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432290;
        }
    }

label_7F432288:
    ctx->pc = 0x7F432288u;
    ctx->downcount -= 2;
    // 7F432288: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F43228C:
    ctx->pc = 0x7F43228Cu;
    // 7F43228C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F432290u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F432290:
    ctx->pc = 0x7F432290u;
    ctx->downcount -= 3;
    // 7F432290: lwz     r0, 2064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432294:
    ctx->pc = 0x7F432294u;
    // 7F432294: cmpwi   r0, 1
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

label_7F432298:
    ctx->pc = 0x7F432298u;
    // 7F432298: bc    4, 2, 0x7F432338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432338;
        }
    }

label_7F43229C:
    ctx->pc = 0x7F43229Cu;
    ctx->downcount -= 3;
    // 7F43229C: lwz     r0, 2072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2072);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4322A0:
    ctx->pc = 0x7F4322A0u;
    // 7F4322A0: cmplwi  r0, 0x0000
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

label_7F4322A4:
    ctx->pc = 0x7F4322A4u;
    // 7F4322A4: bc    4, 2, 0x7F4322E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4322E0;
        }
    }

label_7F4322A8:
    ctx->pc = 0x7F4322A8u;
    ctx->downcount -= 13;
    // 7F4322A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F4322AC:
    ctx->pc = 0x7F4322ACu;
    // 7F4322AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4322B0:
    ctx->pc = 0x7F4322B0u;
    // 7F4322B0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4322B4:
    ctx->pc = 0x7F4322B4u;
    // 7F4322B4: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F4322B8:
    ctx->pc = 0x7F4322B8u;
    // 7F4322B8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F4322BC:
    ctx->pc = 0x7F4322BCu;
    // 7F4322BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F4322C0:
    ctx->pc = 0x7F4322C0u;
    // 7F4322C0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4322C4:
    ctx->pc = 0x7F4322C4u;
    // 7F4322C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4322C8:
    ctx->pc = 0x7F4322C8u;
    // 7F4322C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4322CC:
    ctx->pc = 0x7F4322CCu;
    // 7F4322CC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4322D0:
    ctx->pc = 0x7F4322D0u;
    // 7F4322D0: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F4322D4:
    ctx->pc = 0x7F4322D4u;
    // 7F4322D4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F4322D8:
    ctx->pc = 0x7F4322D8u;
    // 7F4322D8: bl      0x800501FC
    {
            ctx->lr = 0x7F4322DCu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F4322DC:
    ctx->pc = 0x7F4322DCu;
    ctx->downcount -= 1;
    // 7F4322DC: stw     r3, 2072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2072);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4322E0:
    ctx->pc = 0x7F4322E0u;
    ctx->downcount -= 3;
    // 7F4322E0: lwz     r3, 2072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4322E4:
    ctx->pc = 0x7F4322E4u;
    // 7F4322E4: cmplwi  r3, 0x0000
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

label_7F4322E8:
    ctx->pc = 0x7F4322E8u;
    // 7F4322E8: bc    12, 2, 0x7F432338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432338;
        }
    }

label_7F4322EC:
    ctx->pc = 0x7F4322ECu;
    ctx->downcount -= 3;
    // 7F4322EC: lwz     r0, 2056(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4322F0:
    ctx->pc = 0x7F4322F0u;
    // 7F4322F0: cmpwi   r0, 0
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

label_7F4322F4:
    ctx->pc = 0x7F4322F4u;
    // 7F4322F4: bc    4, 2, 0x7F432304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432304;
        }
    }

label_7F4322F8:
    ctx->pc = 0x7F4322F8u;
    ctx->downcount -= 1;
    // 7F4322F8: bl      0x80051AA0
    {
            ctx->lr = 0x7F4322FCu;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F4322FC:
    ctx->pc = 0x7F4322FCu;
    ctx->downcount -= 2;
    // 7F4322FC: stw     r3, 2056(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432300:
    ctx->pc = 0x7F432300u;
    // 7F432300: b       0x7F432338
    {
            goto label_7F432338;
    }

label_7F432304:
    ctx->pc = 0x7F432304u;
    ctx->downcount -= 3;
    // 7F432304: lwz     r0, 2060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2060);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432308:
    ctx->pc = 0x7F432308u;
    // 7F432308: cmpwi   r0, 0
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

label_7F43230C:
    ctx->pc = 0x7F43230Cu;
    // 7F43230C: bc    4, 2, 0x7F432320
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432320;
        }
    }

label_7F432310:
    ctx->pc = 0x7F432310u;
    ctx->downcount -= 1;
    // 7F432310: bl      0x80051A5C
    {
            ctx->lr = 0x7F432314u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F432314:
    ctx->pc = 0x7F432314u;
    ctx->downcount -= 3;
    // 7F432314: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F432318:
    ctx->pc = 0x7F432318u;
    // 7F432318: stw     r0, 2060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43231C:
    ctx->pc = 0x7F43231Cu;
    // 7F43231C: b       0x7F432338
    {
            goto label_7F432338;
    }

label_7F432320:
    ctx->pc = 0x7F432320u;
    ctx->downcount -= 2;
    // 7F432320: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F432324:
    ctx->pc = 0x7F432324u;
    // 7F432324: bl      0x7F431A80
    {
            ctx->lr = 0x7F432328u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F431A80u;
                return;
            }
            goto label_7F431A80;
    }

label_7F432328:
    ctx->pc = 0x7F432328u;
    ctx->downcount -= 4;
    // 7F432328: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F43232C:
    ctx->pc = 0x7F43232Cu;
    // 7F43232C: stw     r0, 2064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432330:
    ctx->pc = 0x7F432330u;
    // 7F432330: stw     r0, 2056(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432334:
    ctx->pc = 0x7F432334u;
    // 7F432334: stw     r0, 2060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432338:
    ctx->pc = 0x7F432338u;
    ctx->downcount -= 34;
    // 7F432338: psq_l   f31, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F432338u);
        if (ctx->exception) return;
    }

label_7F43233C:
    ctx->pc = 0x7F43233Cu;
    // 7F43233C: lfd     f31, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43233Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432340:
    ctx->pc = 0x7F432340u;
    // 7F432340: psq_l   f30, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F432340u);
        if (ctx->exception) return;
    }

label_7F432344:
    ctx->pc = 0x7F432344u;
    // 7F432344: lfd     f30, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432348:
    ctx->pc = 0x7F432348u;
    // 7F432348: psq_l   f29, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432348u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F432348u);
        if (ctx->exception) return;
    }

label_7F43234C:
    ctx->pc = 0x7F43234Cu;
    // 7F43234C: lfd     f29, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43234Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432350:
    ctx->pc = 0x7F432350u;
    // 7F432350: psq_l   f28, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F432350u);
        if (ctx->exception) return;
    }

label_7F432354:
    ctx->pc = 0x7F432354u;
    // 7F432354: lfd     f28, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432358:
    ctx->pc = 0x7F432358u;
    // 7F432358: psq_l   f27, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F432358u);
        if (ctx->exception) return;
    }

label_7F43235C:
    ctx->pc = 0x7F43235Cu;
    // 7F43235C: lfd     f27, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43235Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432360:
    ctx->pc = 0x7F432360u;
    // 7F432360: psq_l   f26, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F432360u);
        if (ctx->exception) return;
    }

label_7F432364:
    ctx->pc = 0x7F432364u;
    // 7F432364: lfd     f26, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432368:
    ctx->pc = 0x7F432368u;
    // 7F432368: psq_l   f25, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F432368u);
        if (ctx->exception) return;
    }

label_7F43236C:
    ctx->pc = 0x7F43236Cu;
    // 7F43236C: lfd     f25, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43236Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432370:
    ctx->pc = 0x7F432370u;
    // 7F432370: psq_l   f24, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F432370u);
        if (ctx->exception) return;
    }

label_7F432374:
    ctx->pc = 0x7F432374u;
    // 7F432374: lfd     f24, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432378:
    ctx->pc = 0x7F432378u;
    // 7F432378: psq_l   f23, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F432378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F432378u);
        if (ctx->exception) return;
    }

label_7F43237C:
    ctx->pc = 0x7F43237Cu;
    // 7F43237C: lfd     f23, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43237Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432380:
    ctx->pc = 0x7F432380u;
    // 7F432380: lmw     r22, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432384:
    ctx->pc = 0x7F432384u;
    // 7F432384: lwz     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432388:
    ctx->pc = 0x7F432388u;
    // 7F432388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43238C:
    ctx->pc = 0x7F43238Cu;
    // 7F43238C: addi    r1, r1, 416
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(416);

label_7F432390:
    ctx->pc = 0x7F432390u;
    // 7F432390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432394:
    ctx->pc = 0x7F432394u;
    ctx->downcount -= 17;
    // 7F432394: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432398:
    ctx->pc = 0x7F432398u;
    // 7F432398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43239C:
    ctx->pc = 0x7F43239Cu;
    // 7F43239C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4323A0:
    ctx->pc = 0x7F4323A0u;
    // 7F4323A0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4323A4:
    ctx->pc = 0x7F4323A4u;
    // 7F4323A4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4323A8:
    ctx->pc = 0x7F4323A8u;
    // 7F4323A8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4323AC:
    ctx->pc = 0x7F4323ACu;
    // 7F4323AC: bl      0x7F4323E8
    {
            ctx->lr = 0x7F4323B0u;
            goto label_7F4323E8;
    }

label_7F4323B0:
    ctx->pc = 0x7F4323B0u;
    ctx->downcount -= 3;
    // 7F4323B0: addi    r3, r30, 2
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2);

label_7F4323B4:
    ctx->pc = 0x7F4323B4u;
    // 7F4323B4: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F4323B8:
    ctx->pc = 0x7F4323B8u;
    // 7F4323B8: bl      0x7F4323E8
    {
            ctx->lr = 0x7F4323BCu;
            goto label_7F4323E8;
    }

label_7F4323BC:
    ctx->pc = 0x7F4323BCu;
    ctx->downcount -= 3;
    // 7F4323BC: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F4323C0:
    ctx->pc = 0x7F4323C0u;
    // 7F4323C0: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F4323C4:
    ctx->pc = 0x7F4323C4u;
    // 7F4323C4: bl      0x7F4323E8
    {
            ctx->lr = 0x7F4323C8u;
            goto label_7F4323E8;
    }

label_7F4323C8:
    ctx->pc = 0x7F4323C8u;
    ctx->downcount -= 3;
    // 7F4323C8: addi    r3, r30, 6
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(6);

label_7F4323CC:
    ctx->pc = 0x7F4323CCu;
    // 7F4323CC: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F4323D0:
    ctx->pc = 0x7F4323D0u;
    // 7F4323D0: bl      0x7F4323E8
    {
            ctx->lr = 0x7F4323D4u;
            goto label_7F4323E8;
    }

label_7F4323D4:
    ctx->pc = 0x7F4323D4u;
    ctx->downcount -= 16;
    // 7F4323D4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4323D8:
    ctx->pc = 0x7F4323D8u;
    // 7F4323D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4323DC:
    ctx->pc = 0x7F4323DCu;
    // 7F4323DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4323E0:
    ctx->pc = 0x7F4323E0u;
    // 7F4323E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4323E4:
    ctx->pc = 0x7F4323E4u;
    // 7F4323E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4323E8:
    ctx->pc = 0x7F4323E8u;
    ctx->downcount -= 6;
    // 7F4323E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4323EC:
    ctx->pc = 0x7F4323ECu;
    // 7F4323EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4323F0:
    ctx->pc = 0x7F4323F0u;
    // 7F4323F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4323F4:
    ctx->pc = 0x7F4323F4u;
    // 7F4323F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4323F8:
    ctx->pc = 0x7F4323F8u;
    // 7F4323F8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4323FC:
    ctx->pc = 0x7F4323FCu;
    // 7F4323FC: bl      0x7F432418
    {
            ctx->lr = 0x7F432400u;
            goto label_7F432418;
    }

label_7F432400:
    ctx->pc = 0x7F432400u;
    ctx->downcount -= 7;
    // 7F432400: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432400u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F432404:
    ctx->pc = 0x7F432404u;
    // 7F432404: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432408:
    ctx->pc = 0x7F432408u;
    // 7F432408: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F43240C:
    ctx->pc = 0x7F43240Cu;
    // 7F43240C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432410:
    ctx->pc = 0x7F432410u;
    // 7F432410: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432414:
    ctx->pc = 0x7F432414u;
    // 7F432414: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432418:
    ctx->pc = 0x7F432418u;
    ctx->downcount -= 2;
    // 7F432418: psq_l   f1, 0(r3), 1, 5
    if (!ppc_fp_available_inline(ctx, 0x7F432418u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 5u, false, 0x7F432418u);
        if (ctx->exception) return;
    }

label_7F43241C:
    ctx->pc = 0x7F43241Cu;
    // 7F43241C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432420:
    ctx->pc = 0x7F432420u;
    ctx->downcount -= 13;
    // 7F432420: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F432424:
    ctx->pc = 0x7F432424u;
    // 7F432424: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F432428:
    ctx->pc = 0x7F432428u;
    // 7F432428: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F43242C:
    ctx->pc = 0x7F43242Cu;
    // 7F43242C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432430:
    ctx->pc = 0x7F432430u;
    // 7F432430: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F432434:
    ctx->pc = 0x7F432434u;
    // 7F432434: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F432438:
    ctx->pc = 0x7F432438u;
    // 7F432438: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F43243C:
    ctx->pc = 0x7F43243Cu;
    // 7F43243C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432440:
    ctx->pc = 0x7F432440u;
    // 7F432440: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432444:
    ctx->pc = 0x7F432444u;
    ctx->downcount -= 4;
    // 7F432444: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432448:
    ctx->pc = 0x7F432448u;
    // 7F432448: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43244C:
    ctx->pc = 0x7F43244Cu;
    // 7F43244C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432450:
    ctx->pc = 0x7F432450u;
    // 7F432450: bl      0x7F432420
    {
            ctx->lr = 0x7F432454u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432420u;
                return;
            }
            goto label_7F432420;
    }

label_7F432454:
    ctx->pc = 0x7F432454u;
    ctx->downcount -= 31;
    // 7F432454: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F432458:
    ctx->pc = 0x7F432458u;
    // 7F432458: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F43245C:
    ctx->pc = 0x7F43245Cu;
    // 7F43245C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432460:
    ctx->pc = 0x7F432460u;
    // 7F432460: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432464:
    ctx->pc = 0x7F432464u;
    // 7F432464: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432468:
    ctx->pc = 0x7F432468u;
    // 7F432468: lfd     f2, -9712(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432468u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9712);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43246C:
    ctx->pc = 0x7F43246Cu;
    // 7F43246C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43246Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432470:
    ctx->pc = 0x7F432470u;
    // 7F432470: lfs     f0, -9720(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432470u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432474:
    ctx->pc = 0x7F432474u;
    // 7F432474: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F432474u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F432478:
    ctx->pc = 0x7F432478u;
    // 7F432478: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43247C:
    ctx->pc = 0x7F43247Cu;
    // 7F43247C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43247Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F432480:
    ctx->pc = 0x7F432480u;
    // 7F432480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432484:
    ctx->pc = 0x7F432484u;
    // 7F432484: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432488:
    ctx->pc = 0x7F432488u;
    // 7F432488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43248C:
    ctx->pc = 0x7F43248Cu;
    ctx->downcount -= 4;
    // 7F43248C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432490:
    ctx->pc = 0x7F432490u;
    // 7F432490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432494:
    ctx->pc = 0x7F432494u;
    // 7F432494: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432498:
    ctx->pc = 0x7F432498u;
    // 7F432498: bl      0x7F432420
    {
            ctx->lr = 0x7F43249Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432420u;
                return;
            }
            goto label_7F432420;
    }

label_7F43249C:
    ctx->pc = 0x7F43249Cu;
    ctx->downcount -= 35;
    // 7F43249C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F4324A0:
    ctx->pc = 0x7F4324A0u;
    // 7F4324A0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4324A4:
    ctx->pc = 0x7F4324A4u;
    // 7F4324A4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4324A8:
    ctx->pc = 0x7F4324A8u;
    // 7F4324A8: addi    r5, r4, -9712
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9712);

label_7F4324AC:
    ctx->pc = 0x7F4324ACu;
    // 7F4324AC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4324B0:
    ctx->pc = 0x7F4324B0u;
    // 7F4324B0: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4324B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4324B4:
    ctx->pc = 0x7F4324B4u;
    // 7F4324B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4324B8:
    ctx->pc = 0x7F4324B8u;
    // 7F4324B8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4324BC:
    ctx->pc = 0x7F4324BCu;
    // 7F4324BC: lfs     f1, -9704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4324BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4324C0:
    ctx->pc = 0x7F4324C0u;
    // 7F4324C0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4324C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4324C4:
    ctx->pc = 0x7F4324C4u;
    // 7F4324C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4324C8:
    ctx->pc = 0x7F4324C8u;
    // 7F4324C8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4324C8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F4324CC:
    ctx->pc = 0x7F4324CCu;
    // 7F4324CC: lfs     f0, -9728(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4324CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4324D0:
    ctx->pc = 0x7F4324D0u;
    // 7F4324D0: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4324D0u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F4324D4:
    ctx->pc = 0x7F4324D4u;
    // 7F4324D4: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4324D4u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F4324D8:
    ctx->pc = 0x7F4324D8u;
    // 7F4324D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4324DC:
    ctx->pc = 0x7F4324DCu;
    // 7F4324DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4324E0:
    ctx->pc = 0x7F4324E0u;
    // 7F4324E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4324E4:
    ctx->pc = 0x7F4324E4u;
    ctx->downcount -= 18;
    // 7F4324E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4324E8:
    ctx->pc = 0x7F4324E8u;
    // 7F4324E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4324EC:
    ctx->pc = 0x7F4324ECu;
    // 7F4324EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4324F0:
    ctx->pc = 0x7F4324F0u;
    // 7F4324F0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4324F4:
    ctx->pc = 0x7F4324F4u;
    // 7F4324F4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4324F8:
    ctx->pc = 0x7F4324F8u;
    // 7F4324F8: lwz     r0, 1232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4324FC:
    ctx->pc = 0x7F4324FCu;
    // 7F4324FC: cmplwi  r0, 0x0000
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

label_7F432500:
    ctx->pc = 0x7F432500u;
    // 7F432500: bc    12, 2, 0x7F432514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432514;
        }
    }

label_7F432504:
    ctx->pc = 0x7F432504u;
    ctx->downcount -= 2;
    // 7F432504: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F432508:
    ctx->pc = 0x7F432508u;
    // 7F432508: bl      0x7F023E10
    {
            ctx->lr = 0x7F43250Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F43250C:
    ctx->pc = 0x7F43250Cu;
    ctx->downcount -= 2;
    // 7F43250C: addi    r3, r28, 1232
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1232);

label_7F432510:
    ctx->pc = 0x7F432510u;
    // 7F432510: bl      0x7F042AAC
    {
            ctx->lr = 0x7F432514u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F432514:
    ctx->pc = 0x7F432514u;
    ctx->downcount -= 2;
    // 7F432514: addi    r3, r28, 1984
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1984);

label_7F432518:
    ctx->pc = 0x7F432518u;
    // 7F432518: bl      0x7F01D540
    {
            ctx->lr = 0x7F43251Cu;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F43251C:
    ctx->pc = 0x7F43251Cu;
    ctx->downcount -= 2;
    // 7F43251C: addi    r3, r28, 1760
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1760);

label_7F432520:
    ctx->pc = 0x7F432520u;
    // 7F432520: bl      0x7F0146B0
    {
            ctx->lr = 0x7F432524u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F432524:
    ctx->pc = 0x7F432524u;
    ctx->downcount -= 3;
    // 7F432524: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F432528:
    ctx->pc = 0x7F432528u;
    // 7F432528: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F43252C:
    ctx->pc = 0x7F43252Cu;
    // 7F43252C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F432530:
    ctx->downcount -= 4;
    // 7F432530: add   r3, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F432534:
    ctx->pc = 0x7F432534u;
    // 7F432534: lwz     r0, 1276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432538:
    // 7F432538: cmplwi  r0, 0x0000
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

label_7F43253C:
    // 7F43253C: bc    12, 2, 0x7F432548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432548;
        }
    }

label_7F432540:
    ctx->downcount -= 2;
    // 7F432540: addi    r3, r3, 1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1276);

label_7F432544:
    // 7F432544: bl      0x7F042AAC
    {
            ctx->lr = 0x7F432548u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F432548:
    ctx->downcount -= 3;
    // 7F432548: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F43254C:
    // 7F43254C: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F432550:
    // 7F432550: bl      0x7F023E10
    {
            ctx->lr = 0x7F432554u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F432554:
    ctx->downcount -= 5;
    // 7F432554: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F432558:
    // 7F432558: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F43255C:
    // 7F43255C: cmpwi   r29, 2
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

label_7F432560:
    // 7F432560: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F432564:
    // 7F432564: bc    12, 0, 0x7F432530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432530u;
                return;
            }
            goto label_7F432530;
        }
    }

label_7F432568:
    ctx->pc = 0x7F432568u;
    ctx->downcount -= 3;
    // 7F432568: lwz     r3, 2072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F43256C:
    ctx->pc = 0x7F43256Cu;
    // 7F43256C: cmplwi  r3, 0x0000
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

label_7F432570:
    ctx->pc = 0x7F432570u;
    // 7F432570: bc    12, 2, 0x7F432588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432588;
        }
    }

label_7F432574:
    ctx->pc = 0x7F432574u;
    ctx->downcount -= 3;
    // 7F432574: lwz     r0, 2060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2060);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432578:
    ctx->pc = 0x7F432578u;
    // 7F432578: cmpwi   r0, 0
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

label_7F43257C:
    ctx->pc = 0x7F43257Cu;
    // 7F43257C: bc    4, 2, 0x7F432588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432588;
        }
    }

label_7F432580:
    ctx->pc = 0x7F432580u;
    ctx->downcount -= 2;
    // 7F432580: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F432584:
    ctx->pc = 0x7F432584u;
    // 7F432584: bl      0x80050B54
    {
            ctx->lr = 0x7F432588u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F432588:
    ctx->pc = 0x7F432588u;
    ctx->downcount -= 16;
    // 7F432588: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F43258C:
    ctx->pc = 0x7F43258Cu;
    // 7F43258C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432590:
    ctx->pc = 0x7F432590u;
    // 7F432590: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432594:
    ctx->pc = 0x7F432594u;
    // 7F432594: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F432598:
    ctx->pc = 0x7F432598u;
    // 7F432598: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43259C:
    ctx->pc = 0x7F43259Cu;
    ctx->downcount -= 51;
    // 7F43259C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4325A0:
    ctx->pc = 0x7F4325A0u;
    // 7F4325A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4325A4:
    ctx->pc = 0x7F4325A4u;
    // 7F4325A4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4325A8:
    ctx->pc = 0x7F4325A8u;
    // 7F4325A8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4325AC:
    ctx->pc = 0x7F4325ACu;
    // 7F4325AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4325B0:
    ctx->pc = 0x7F4325B0u;
    // 7F4325B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4325B4:
    ctx->pc = 0x7F4325B4u;
    // 7F4325B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4325B8:
    ctx->pc = 0x7F4325B8u;
    // 7F4325B8: lfs     f1, -9728(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4325B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4325BC:
    ctx->pc = 0x7F4325BCu;
    // 7F4325BC: addi    r4, r31, 2016
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2016);

label_7F4325C0:
    ctx->pc = 0x7F4325C0u;
    // 7F4325C0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4325C4:
    ctx->pc = 0x7F4325C4u;
    // 7F4325C4: lwz     r5, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4325C8:
    ctx->pc = 0x7F4325C8u;
    // 7F4325C8: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4325CC:
    ctx->pc = 0x7F4325CCu;
    // 7F4325CC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4325D0:
    ctx->pc = 0x7F4325D0u;
    // 7F4325D0: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4325D0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4325D4:
    ctx->pc = 0x7F4325D4u;
    // 7F4325D4: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4325D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4325D8:
    ctx->pc = 0x7F4325D8u;
    // 7F4325D8: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4325D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4325DC:
    ctx->pc = 0x7F4325DCu;
    // 7F4325DC: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4325DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4325E0:
    ctx->pc = 0x7F4325E0u;
    // 7F4325E0: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4325E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4325E4:
    ctx->pc = 0x7F4325E4u;
    // 7F4325E4: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4325E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4325E8:
    ctx->pc = 0x7F4325E8u;
    // 7F4325E8: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4325E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4325EC:
    ctx->pc = 0x7F4325ECu;
    // 7F4325EC: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4325ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4325F0:
    ctx->pc = 0x7F4325F0u;
    // 7F4325F0: stfs     f0, 2016(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4325F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2016);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4325F4:
    ctx->pc = 0x7F4325F4u;
    // 7F4325F4: lwz     r6, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4325F8:
    ctx->pc = 0x7F4325F8u;
    // 7F4325F8: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4325FC:
    ctx->pc = 0x7F4325FCu;
    // 7F4325FC: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4325FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432600:
    ctx->pc = 0x7F432600u;
    // 7F432600: stfs     f0, 2020(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432600u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2020);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432604:
    ctx->pc = 0x7F432604u;
    // 7F432604: lwz     r6, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F432608:
    ctx->pc = 0x7F432608u;
    // 7F432608: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F43260C:
    ctx->pc = 0x7F43260Cu;
    // 7F43260C: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F43260Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432610:
    ctx->pc = 0x7F432610u;
    // 7F432610: stfs     f0, 2024(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432610u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2024);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432614:
    ctx->pc = 0x7F432614u;
    // 7F432614: stfs     f1, 2028(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432614u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2028);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F432618:
    ctx->pc = 0x7F432618u;
    // 7F432618: lwz     r6, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F43261C:
    ctx->pc = 0x7F43261Cu;
    // 7F43261C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F432620:
    ctx->pc = 0x7F432620u;
    // 7F432620: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F432620u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432624:
    ctx->pc = 0x7F432624u;
    // 7F432624: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432624u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432628:
    ctx->pc = 0x7F432628u;
    // 7F432628: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F432628u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43262C:
    ctx->pc = 0x7F43262Cu;
    // 7F43262C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43262Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432630:
    ctx->pc = 0x7F432630u;
    // 7F432630: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F432630u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432634:
    ctx->pc = 0x7F432634u;
    // 7F432634: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432638:
    ctx->pc = 0x7F432638u;
    // 7F432638: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432638u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F43263C:
    ctx->pc = 0x7F43263Cu;
    // 7F43263C: bl      0x800261D8
    {
            ctx->lr = 0x7F432640u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F432640:
    ctx->pc = 0x7F432640u;
    ctx->downcount -= 5;
    // 7F432640: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432644:
    ctx->pc = 0x7F432644u;
    // 7F432644: addi    r3, r31, 2016
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2016);

label_7F432648:
    ctx->pc = 0x7F432648u;
    // 7F432648: lfs     f1, -9700(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432648u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43264C:
    ctx->pc = 0x7F43264Cu;
    // 7F43264C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432650:
    ctx->pc = 0x7F432650u;
    // 7F432650: bl      0x800261FC
    {
            ctx->lr = 0x7F432654u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F432654:
    ctx->pc = 0x7F432654u;
    ctx->downcount -= 4;
    // 7F432654: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432658:
    ctx->pc = 0x7F432658u;
    // 7F432658: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F43265C:
    ctx->pc = 0x7F43265Cu;
    // 7F43265C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432660:
    ctx->pc = 0x7F432660u;
    // 7F432660: bl      0x800261B4
    {
            ctx->lr = 0x7F432664u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F432664:
    ctx->pc = 0x7F432664u;
    ctx->downcount -= 5;
    // 7F432664: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432668:
    ctx->pc = 0x7F432668u;
    // 7F432668: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F43266C:
    ctx->pc = 0x7F43266Cu;
    // 7F43266C: lfs     f1, -9700(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F43266Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F432670:
    ctx->pc = 0x7F432670u;
    // 7F432670: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432674:
    ctx->pc = 0x7F432674u;
    // 7F432674: bl      0x800261FC
    {
            ctx->lr = 0x7F432678u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F432678:
    ctx->pc = 0x7F432678u;
    ctx->downcount -= 7;
    // 7F432678: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43267C:
    ctx->pc = 0x7F43267Cu;
    // 7F43267C: addi    r3, r31, 1760
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F432680:
    ctx->pc = 0x7F432680u;
    // 7F432680: addi    r7, r31, 2016
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(2016);

label_7F432684:
    ctx->pc = 0x7F432684u;
    // 7F432684: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432688:
    ctx->pc = 0x7F432688u;
    // 7F432688: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F43268C:
    ctx->pc = 0x7F43268Cu;
    // 7F43268C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F432690:
    ctx->pc = 0x7F432690u;
    // 7F432690: bl      0x7F014788
    {
            ctx->lr = 0x7F432694u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F432694:
    ctx->pc = 0x7F432694u;
    ctx->downcount -= 9;
    // 7F432694: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F432698:
    ctx->pc = 0x7F432698u;
    // 7F432698: addi    r3, r31, 1760
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F43269C:
    ctx->pc = 0x7F43269Cu;
    // 7F43269C: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F4326A0:
    ctx->pc = 0x7F4326A0u;
    // 7F4326A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F4326A4:
    ctx->pc = 0x7F4326A4u;
    // 7F4326A4: addi    r4, r31, 1952
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1952);

label_7F4326A8:
    ctx->pc = 0x7F4326A8u;
    // 7F4326A8: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F4326AC:
    ctx->pc = 0x7F4326ACu;
    // 7F4326AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4326B0:
    ctx->pc = 0x7F4326B0u;
    // 7F4326B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4326B4:
    ctx->pc = 0x7F4326B4u;
    // 7F4326B4: bl      0x7F014B78
    {
            ctx->lr = 0x7F4326B8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F4326B8:
    ctx->pc = 0x7F4326B8u;
    ctx->downcount -= 2;
    // 7F4326B8: addi    r3, r31, 1760
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F4326BC:
    ctx->pc = 0x7F4326BCu;
    // 7F4326BC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F4326C0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F4326C0:
    ctx->pc = 0x7F4326C0u;
    ctx->downcount -= 5;
    // 7F4326C0: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F4326C4:
    ctx->pc = 0x7F4326C4u;
    // 7F4326C4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4326C8:
    ctx->pc = 0x7F4326C8u;
    // 7F4326C8: addi    r4, r3, 6916
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6916);

label_7F4326CC:
    ctx->pc = 0x7F4326CCu;
    // 7F4326CC: addi    r3, r31, 1760
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F4326D0:
    ctx->pc = 0x7F4326D0u;
    // 7F4326D0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F4326D4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F4326D4:
    ctx->pc = 0x7F4326D4u;
    ctx->downcount -= 6;
    // 7F4326D4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F4326D8:
    ctx->pc = 0x7F4326D8u;
    // 7F4326D8: addi    r3, r31, 1760
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1760);

label_7F4326DC:
    ctx->pc = 0x7F4326DCu;
    // 7F4326DC: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F4326E0:
    ctx->pc = 0x7F4326E0u;
    // 7F4326E0: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F4326E4:
    ctx->pc = 0x7F4326E4u;
    // 7F4326E4: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4326E8:
    ctx->pc = 0x7F4326E8u;
    // 7F4326E8: bl      0x7F014944
    {
            ctx->lr = 0x7F4326ECu;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F4326EC:
    ctx->pc = 0x7F4326ECu;
    ctx->downcount -= 16;
    // 7F4326EC: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4326F0:
    ctx->pc = 0x7F4326F0u;
    // 7F4326F0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4326F4:
    ctx->pc = 0x7F4326F4u;
    // 7F4326F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4326F8:
    ctx->pc = 0x7F4326F8u;
    // 7F4326F8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F4326FC:
    ctx->pc = 0x7F4326FCu;
    // 7F4326FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432700:
    ctx->pc = 0x7F432700u;
    ctx->downcount -= 21;
    // 7F432700: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432704:
    ctx->pc = 0x7F432704u;
    // 7F432704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432708:
    ctx->pc = 0x7F432708u;
    // 7F432708: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F43270C:
    ctx->pc = 0x7F43270Cu;
    // 7F43270C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432710:
    ctx->pc = 0x7F432710u;
    // 7F432710: stmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432714:
    ctx->pc = 0x7F432714u;
    // 7F432714: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432718:
    ctx->pc = 0x7F432718u;
    // 7F432718: addi    r25, r30, 32
    ctx->gpr[25] = ctx->gpr[30] + (u32)(s32)(32);

label_7F43271C:
    ctx->pc = 0x7F43271Cu;
    // 7F43271C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F432720:
    ctx->pc = 0x7F432720u;
    // 7F432720: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F432724:
    ctx->pc = 0x7F432724u;
    // 7F432724: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432728:
    ctx->pc = 0x7F432728u;
    // 7F432728: bl      0x7F022FB4
    {
            ctx->lr = 0x7F43272Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F43272C:
    ctx->pc = 0x7F43272Cu;
    ctx->downcount -= 2;
    // 7F43272C: cmpwi   r3, 0
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

label_7F432730:
    ctx->pc = 0x7F432730u;
    // 7F432730: bc    4, 0, 0x7F43273C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43273C;
        }
    }

label_7F432734:
    ctx->pc = 0x7F432734u;
    ctx->downcount -= 2;
    // 7F432734: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F432738:
    ctx->pc = 0x7F432738u;
    // 7F432738: b       0x7F432908
    {
            goto label_7F432908;
    }

label_7F43273C:
    ctx->pc = 0x7F43273Cu;
    ctx->downcount -= 5;
    // 7F43273C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F432740:
    ctx->pc = 0x7F432740u;
    // 7F432740: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F432744:
    ctx->pc = 0x7F432744u;
    // 7F432744: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F432748:
    ctx->pc = 0x7F432748u;
    // 7F432748: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F43274C:
    ctx->pc = 0x7F43274Cu;
    // 7F43274C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F432750u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F432750:
    ctx->pc = 0x7F432750u;
    ctx->downcount -= 8;
    // 7F432750: lhz     r0, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F432754:
    ctx->pc = 0x7F432754u;
    // 7F432754: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F432758:
    ctx->pc = 0x7F432758u;
    // 7F432758: or   r29, r28, r28
    {
        ctx->gpr[29] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F43275C:
    ctx->pc = 0x7F43275Cu;
    // 7F43275C: addi    r24, r30, 432
    ctx->gpr[24] = ctx->gpr[30] + (u32)(s32)(432);

label_7F432760:
    ctx->pc = 0x7F432760u;
    // 7F432760: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F432764:
    ctx->pc = 0x7F432764u;
    // 7F432764: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F432768:
    ctx->pc = 0x7F432768u;
    // 7F432768: sth     r0, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F43276C:
    ctx->pc = 0x7F43276Cu;
    // 7F43276C: stw     r28, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F432770:
    ctx->downcount -= 6;
    // 7F432770: add   r26, r24, r29
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F432774:
    // 7F432774: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F432778:
    // 7F432778: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F43277C:
    // 7F43277C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432780:
    // 7F432780: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F432784:
    // 7F432784: bl      0x7F022FB4
    {
            ctx->lr = 0x7F432788u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F432788:
    ctx->downcount -= 2;
    // 7F432788: cmpwi   r3, 0
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

label_7F43278C:
    // 7F43278C: bc    4, 0, 0x7F432798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432798;
        }
    }

label_7F432790:
    ctx->downcount -= 2;
    // 7F432790: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F432794:
    // 7F432794: b       0x7F432908
    {
            goto label_7F432908;
    }

label_7F432798:
    ctx->downcount -= 5;
    // 7F432798: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F43279C:
    // 7F43279C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F4327A0:
    // 7F4327A0: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F4327A4:
    // 7F4327A4: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F4327A8:
    // 7F4327A8: bl      0x7F023F7C
    {
            ctx->lr = 0x7F4327ACu;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F4327AC:
    ctx->pc = 0x7F4327ACu;
    ctx->downcount -= 8;
    // 7F4327AC: lhz     r0, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F4327B0:
    // 7F4327B0: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F4327B4:
    // 7F4327B4: cmpwi   r23, 2
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

label_7F4327B8:
    // 7F4327B8: addi    r29, r29, 400
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(400);

label_7F4327BC:
    // 7F4327BC: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F4327C0:
    ctx->pc = 0x7F4327C0u;
    // 7F4327C0: sth     r0, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4327C4:
    ctx->pc = 0x7F4327C4u;
    // 7F4327C4: stw     r28, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F4327C8:
    // 7F4327C8: bc    12, 0, 0x7F432770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432770u;
                return;
            }
            goto label_7F432770;
        }
    }

label_7F4327CC:
    ctx->pc = 0x7F4327CCu;
    ctx->downcount -= 4;
    // 7F4327CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F4327D0:
    ctx->pc = 0x7F4327D0u;
    // 7F4327D0: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F4327D4:
    ctx->pc = 0x7F4327D4u;
    // 7F4327D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4327D8:
    ctx->pc = 0x7F4327D8u;
    // 7F4327D8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F4327DCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F4327DC:
    ctx->pc = 0x7F4327DCu;
    ctx->downcount -= 2;
    // 7F4327DC: cmplwi  r3, 0x0000
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

label_7F4327E0:
    ctx->pc = 0x7F4327E0u;
    // 7F4327E0: bc    12, 2, 0x7F43285C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43285C;
        }
    }

label_7F4327E4:
    ctx->pc = 0x7F4327E4u;
    ctx->downcount -= 2;
    // 7F4327E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4327E8:
    ctx->pc = 0x7F4327E8u;
    // 7F4327E8: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F4327ECu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F4327EC:
    ctx->pc = 0x7F4327ECu;
    ctx->downcount -= 3;
    // 7F4327EC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F4327F0:
    ctx->pc = 0x7F4327F0u;
    // 7F4327F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F4327F4:
    ctx->pc = 0x7F4327F4u;
    // 7F4327F4: bl      0x7F43291C
    {
            ctx->lr = 0x7F4327F8u;
            goto label_7F43291C;
    }

label_7F4327F8:
    ctx->pc = 0x7F4327F8u;
    ctx->downcount -= 12;
    // 7F4327F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4327FC:
    ctx->pc = 0x7F4327FCu;
    // 7F4327FC: lfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F4327FCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432800:
    ctx->pc = 0x7F432800u;
    // 7F432800: lfs     f1, -9700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432800u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F432804:
    ctx->pc = 0x7F432804u;
    // 7F432804: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F432804u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F432808:
    ctx->pc = 0x7F432808u;
    // 7F432808: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F432808u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43280C:
    ctx->pc = 0x7F43280Cu;
    // 7F43280C: lfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F43280Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432810:
    ctx->pc = 0x7F432810u;
    // 7F432810: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F432810u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F432814:
    ctx->pc = 0x7F432814u;
    // 7F432814: stfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F432814u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432818:
    ctx->pc = 0x7F432818u;
    // 7F432818: lfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F432818u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43281C:
    ctx->pc = 0x7F43281Cu;
    // 7F43281C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F43281Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F432820:
    ctx->pc = 0x7F432820u;
    // 7F432820: stfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F432820u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432824:
    ctx->pc = 0x7F432824u;
    // 7F432824: bl      0x7F09B9D8
    {
            ctx->lr = 0x7F432828u;
            ctx->pc = 0x7F09B9D8u;
            return;
    }

label_7F432828:
    ctx->pc = 0x7F432828u;
    ctx->downcount -= 3;
    // 7F432828: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F43282C:
    ctx->pc = 0x7F43282Cu;
    // 7F43282C: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F432830:
    ctx->pc = 0x7F432830u;
    // 7F432830: bl      0x800261B4
    {
            ctx->lr = 0x7F432834u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F432834:
    ctx->pc = 0x7F432834u;
    ctx->downcount -= 8;
    // 7F432834: lfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F432834u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432838:
    ctx->pc = 0x7F432838u;
    // 7F432838: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432838u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F43283C:
    ctx->pc = 0x7F43283Cu;
    // 7F43283C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43283Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F432840:
    ctx->pc = 0x7F432840u;
    // 7F432840: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432844:
    ctx->pc = 0x7F432844u;
    // 7F432844: stw     r0, 2052(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432848:
    ctx->pc = 0x7F432848u;
    // 7F432848: lwz     r3, 2052(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2052);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F43284C:
    ctx->pc = 0x7F43284Cu;
    // 7F43284C: cmpwi   r3, 0
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

label_7F432850:
    ctx->pc = 0x7F432850u;
    // 7F432850: bc    4, 1, 0x7F43285C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43285C;
        }
    }

label_7F432854:
    ctx->pc = 0x7F432854u;
    ctx->downcount -= 2;
    // 7F432854: addis   r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-1) << 16);

label_7F432858:
    ctx->pc = 0x7F432858u;
    // 7F432858: stw     r0, 2052(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43285C:
    ctx->pc = 0x7F43285Cu;
    ctx->downcount -= 2;
    // 7F43285C: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F432860:
    ctx->pc = 0x7F432860u;
    // 7F432860: bl      0x7F3C664C
    {
            ctx->lr = 0x7F432864u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F432864:
    ctx->pc = 0x7F432864u;
    ctx->downcount -= 2;
    // 7F432864: cmplwi  r3, 0x0000
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

label_7F432868:
    ctx->pc = 0x7F432868u;
    // 7F432868: bc    4, 2, 0x7F432874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432874;
        }
    }

label_7F43286C:
    ctx->pc = 0x7F43286Cu;
    ctx->downcount -= 2;
    // 7F43286C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F432870:
    ctx->pc = 0x7F432870u;
    // 7F432870: b       0x7F432908
    {
            goto label_7F432908;
    }

label_7F432874:
    ctx->pc = 0x7F432874u;
    ctx->downcount -= 1;
    // 7F432874: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F432878u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F432878:
    ctx->pc = 0x7F432878u;
    ctx->downcount -= 2;
    // 7F432878: stw     r3, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F43287C:
    ctx->pc = 0x7F43287Cu;
    // 7F43287C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F432880u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F432880:
    ctx->pc = 0x7F432880u;
    ctx->downcount -= 4;
    // 7F432880: stw     r3, 2036(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2036);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432884:
    ctx->pc = 0x7F432884u;
    // 7F432884: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F432888:
    ctx->pc = 0x7F432888u;
    // 7F432888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43288C:
    ctx->pc = 0x7F43288Cu;
    // 7F43288C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F432890u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F432890:
    ctx->pc = 0x7F432890u;
    ctx->downcount -= 4;
    // 7F432890: stw     r3, 2044(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2044);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432894:
    ctx->pc = 0x7F432894u;
    // 7F432894: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F432898:
    ctx->pc = 0x7F432898u;
    // 7F432898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43289C:
    ctx->pc = 0x7F43289Cu;
    // 7F43289C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F4328A0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F4328A0:
    ctx->pc = 0x7F4328A0u;
    ctx->downcount -= 4;
    // 7F4328A0: stw     r3, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4328A4:
    ctx->pc = 0x7F4328A4u;
    // 7F4328A4: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F4328A8:
    ctx->pc = 0x7F4328A8u;
    // 7F4328A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F4328AC:
    ctx->pc = 0x7F4328ACu;
    // 7F4328AC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F4328B0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F4328B0:
    ctx->pc = 0x7F4328B0u;
    ctx->downcount -= 4;
    // 7F4328B0: stw     r3, 2068(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2068);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4328B4:
    ctx->pc = 0x7F4328B4u;
    // 7F4328B4: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4328B8:
    ctx->pc = 0x7F4328B8u;
    // 7F4328B8: cmpwi   r0, 0
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

label_7F4328BC:
    ctx->pc = 0x7F4328BCu;
    // 7F4328BC: bc    4, 2, 0x7F4328DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4328DC;
        }
    }

label_7F4328C0:
    ctx->pc = 0x7F4328C0u;
    ctx->downcount -= 4;
    // 7F4328C0: lwz     r4, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4328C4:
    ctx->pc = 0x7F4328C4u;
    // 7F4328C4: addi    r3, r30, 1232
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1232);

label_7F4328C8:
    ctx->pc = 0x7F4328C8u;
    // 7F4328C8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F4328CC:
    ctx->pc = 0x7F4328CCu;
    // 7F4328CC: bl      0x7F04272C
    {
            ctx->lr = 0x7F4328D0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F4328D0:
    ctx->pc = 0x7F4328D0u;
    ctx->downcount -= 3;
    // 7F4328D0: addi    r3, r30, 1232
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1232);

label_7F4328D4:
    ctx->pc = 0x7F4328D4u;
    // 7F4328D4: addi    r4, r30, 1364
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1364);

label_7F4328D8:
    ctx->pc = 0x7F4328D8u;
    // 7F4328D8: bl      0x7F042B20
    {
            ctx->lr = 0x7F4328DCu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F4328DC:
    ctx->pc = 0x7F4328DCu;
    ctx->downcount -= 3;
    // 7F4328DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4328E0:
    ctx->pc = 0x7F4328E0u;
    // 7F4328E0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4328E4:
    ctx->pc = 0x7F4328E4u;
    // 7F4328E4: bl      0x7F43259C
    {
            ctx->lr = 0x7F4328E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F43259Cu;
                return;
            }
            goto label_7F43259C;
    }

label_7F4328E8:
    ctx->pc = 0x7F4328E8u;
    ctx->downcount -= 2;
    // 7F4328E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4328EC:
    ctx->pc = 0x7F4328ECu;
    // 7F4328EC: bl      0x7F431A24
    {
            ctx->lr = 0x7F4328F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F431A24u;
                return;
            }
            goto label_7F431A24;
    }

label_7F4328F0:
    ctx->pc = 0x7F4328F0u;
    ctx->downcount -= 6;
    // 7F4328F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F4328F4:
    ctx->pc = 0x7F4328F4u;
    // 7F4328F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F4328F8:
    ctx->pc = 0x7F4328F8u;
    // 7F4328F8: stw     r0, 2064(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4328FC:
    ctx->pc = 0x7F4328FCu;
    // 7F4328FC: stw     r0, 2072(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2072);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432900:
    ctx->pc = 0x7F432900u;
    // 7F432900: stw     r0, 2056(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432904:
    ctx->pc = 0x7F432904u;
    // 7F432904: stw     r0, 2060(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432908:
    ctx->pc = 0x7F432908u;
    ctx->downcount -= 16;
    // 7F432908: lmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F43290C:
    ctx->pc = 0x7F43290Cu;
    // 7F43290C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432910:
    ctx->pc = 0x7F432910u;
    // 7F432910: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432914:
    ctx->pc = 0x7F432914u;
    // 7F432914: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F432918:
    ctx->pc = 0x7F432918u;
    // 7F432918: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43291C:
    ctx->pc = 0x7F43291Cu;
    ctx->downcount -= 17;
    // 7F43291C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432920:
    ctx->pc = 0x7F432920u;
    // 7F432920: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432924:
    ctx->pc = 0x7F432924u;
    // 7F432924: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432928:
    ctx->pc = 0x7F432928u;
    // 7F432928: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43292C:
    ctx->pc = 0x7F43292Cu;
    // 7F43292C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432930:
    ctx->pc = 0x7F432930u;
    // 7F432930: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432934:
    ctx->pc = 0x7F432934u;
    // 7F432934: bl      0x7F432970
    {
            ctx->lr = 0x7F432938u;
            goto label_7F432970;
    }

label_7F432938:
    ctx->pc = 0x7F432938u;
    ctx->downcount -= 3;
    // 7F432938: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F43293C:
    ctx->pc = 0x7F43293Cu;
    // 7F43293C: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F432940:
    ctx->pc = 0x7F432940u;
    // 7F432940: bl      0x7F432970
    {
            ctx->lr = 0x7F432944u;
            goto label_7F432970;
    }

label_7F432944:
    ctx->pc = 0x7F432944u;
    ctx->downcount -= 3;
    // 7F432944: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F432948:
    ctx->pc = 0x7F432948u;
    // 7F432948: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F43294C:
    ctx->pc = 0x7F43294Cu;
    // 7F43294C: bl      0x7F432970
    {
            ctx->lr = 0x7F432950u;
            goto label_7F432970;
    }

label_7F432950:
    ctx->pc = 0x7F432950u;
    ctx->downcount -= 3;
    // 7F432950: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F432954:
    ctx->pc = 0x7F432954u;
    // 7F432954: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F432958:
    ctx->pc = 0x7F432958u;
    // 7F432958: bl      0x7F432970
    {
            ctx->lr = 0x7F43295Cu;
            goto label_7F432970;
    }

label_7F43295C:
    ctx->pc = 0x7F43295Cu;
    ctx->downcount -= 16;
    // 7F43295C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432960:
    ctx->pc = 0x7F432960u;
    // 7F432960: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432964:
    ctx->pc = 0x7F432964u;
    // 7F432964: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432968:
    ctx->pc = 0x7F432968u;
    // 7F432968: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F43296C:
    ctx->pc = 0x7F43296Cu;
    // 7F43296C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432970:
    ctx->pc = 0x7F432970u;
    ctx->downcount -= 6;
    // 7F432970: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432974:
    ctx->pc = 0x7F432974u;
    // 7F432974: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432978:
    ctx->pc = 0x7F432978u;
    // 7F432978: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43297C:
    ctx->pc = 0x7F43297Cu;
    // 7F43297C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F432980:
    ctx->pc = 0x7F432980u;
    // 7F432980: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432984:
    ctx->pc = 0x7F432984u;
    // 7F432984: bl      0x7F4329A0
    {
            ctx->lr = 0x7F432988u;
            goto label_7F4329A0;
    }

label_7F432988:
    ctx->pc = 0x7F432988u;
    ctx->downcount -= 7;
    // 7F432988: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432988u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F43298C:
    ctx->pc = 0x7F43298Cu;
    // 7F43298C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432990:
    ctx->pc = 0x7F432990u;
    // 7F432990: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F432994:
    ctx->pc = 0x7F432994u;
    // 7F432994: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432998:
    ctx->pc = 0x7F432998u;
    // 7F432998: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F43299C:
    ctx->pc = 0x7F43299Cu;
    // 7F43299C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4329A0:
    ctx->pc = 0x7F4329A0u;
    ctx->downcount -= 4;
    // 7F4329A0: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F4329A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F4329A0u);
        if (ctx->exception) return;
    }

label_7F4329A4:
    ctx->pc = 0x7F4329A4u;
    // 7F4329A4: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F4329A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F4329A4u);
        if (ctx->exception) return;
    }

label_7F4329A8:
    ctx->pc = 0x7F4329A8u;
    // 7F4329A8: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4329A8u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F4329AC:
    ctx->pc = 0x7F4329ACu;
    // 7F4329AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4329B0:
    ctx->pc = 0x7F4329B0u;
    ctx->downcount -= 21;
    // 7F4329B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4329B4:
    ctx->pc = 0x7F4329B4u;
    // 7F4329B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4329B8:
    ctx->pc = 0x7F4329B8u;
    // 7F4329B8: li      r5, 2080
    ctx->gpr[5] = (u32)(s32)(2080);

label_7F4329BC:
    ctx->pc = 0x7F4329BCu;
    // 7F4329BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4329C0:
    ctx->pc = 0x7F4329C0u;
    // 7F4329C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4329C4:
    ctx->pc = 0x7F4329C4u;
    // 7F4329C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4329C8:
    ctx->pc = 0x7F4329C8u;
    // 7F4329C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4329CC:
    ctx->pc = 0x7F4329CCu;
    // 7F4329CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4329D0:
    ctx->pc = 0x7F4329D0u;
    // 7F4329D0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F4329D4:
    ctx->pc = 0x7F4329D4u;
    // 7F4329D4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F4329D8:
    ctx->pc = 0x7F4329D8u;
    // 7F4329D8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F4329DCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F4329DC:
    ctx->pc = 0x7F4329DCu;
    ctx->downcount -= 2;
    // 7F4329DC: or.   r31, r3, r3
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

label_7F4329E0:
    ctx->pc = 0x7F4329E0u;
    // 7F4329E0: bc    12, 2, 0x7F432A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432A20;
        }
    }

label_7F4329E4:
    ctx->pc = 0x7F4329E4u;
    ctx->downcount -= 5;
    // 7F4329E4: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F4329E8:
    ctx->pc = 0x7F4329E8u;
    // 7F4329E8: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F4329EC:
    ctx->pc = 0x7F4329ECu;
    // 7F4329EC: addi    r4, r4, 7284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7284);

label_7F4329F0:
    ctx->pc = 0x7F4329F0u;
    // 7F4329F0: addi    r5, r5, 9444
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9444);

label_7F4329F4:
    ctx->pc = 0x7F4329F4u;
    // 7F4329F4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F4329F8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F4329F8:
    ctx->pc = 0x7F4329F8u;
    ctx->downcount -= 4;
    // 7F4329F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4329FC:
    ctx->pc = 0x7F4329FCu;
    // 7F4329FC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F432A00:
    ctx->pc = 0x7F432A00u;
    // 7F432A00: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F432A04:
    ctx->pc = 0x7F432A04u;
    // 7F432A04: bl      0x7F432700
    {
            ctx->lr = 0x7F432A08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432700u;
                return;
            }
            goto label_7F432700;
    }

label_7F432A08:
    ctx->pc = 0x7F432A08u;
    ctx->downcount -= 2;
    // 7F432A08: cmpwi   r3, 0
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

label_7F432A0C:
    ctx->pc = 0x7F432A0Cu;
    // 7F432A0C: bc    4, 0, 0x7F432A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432A20;
        }
    }

label_7F432A10:
    ctx->pc = 0x7F432A10u;
    ctx->downcount -= 2;
    // 7F432A10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432A14:
    ctx->pc = 0x7F432A14u;
    // 7F432A14: bl      0x7F3C8210
    {
            ctx->lr = 0x7F432A18u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F432A18:
    ctx->pc = 0x7F432A18u;
    ctx->downcount -= 2;
    // 7F432A18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F432A1C:
    ctx->pc = 0x7F432A1Cu;
    // 7F432A1C: b       0x7F432A24
    {
            goto label_7F432A24;
    }

label_7F432A20:
    ctx->pc = 0x7F432A20u;
    ctx->downcount -= 1;
    // 7F432A20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432A24:
    ctx->pc = 0x7F432A24u;
    ctx->downcount -= 16;
    // 7F432A24: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432A28:
    ctx->pc = 0x7F432A28u;
    // 7F432A28: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432A2C:
    ctx->pc = 0x7F432A2Cu;
    // 7F432A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432A30:
    ctx->pc = 0x7F432A30u;
    // 7F432A30: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F432A34:
    ctx->pc = 0x7F432A34u;
    // 7F432A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432A38:
    ctx->pc = 0x7F432A38u;
    ctx->downcount -= 16;
    // 7F432A38: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432A3C:
    ctx->pc = 0x7F432A3Cu;
    // 7F432A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432A40:
    ctx->pc = 0x7F432A40u;
    // 7F432A40: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432A44:
    ctx->pc = 0x7F432A44u;
    // 7F432A44: stmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432A48:
    ctx->pc = 0x7F432A48u;
    // 7F432A48: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432A4C:
    ctx->pc = 0x7F432A4Cu;
    // 7F432A4C: bl      0x7F432BC4
    {
            ctx->lr = 0x7F432A50u;
            goto label_7F432BC4;
    }

label_7F432A50:
    ctx->pc = 0x7F432A50u;
    ctx->downcount -= 9;
    // 7F432A50: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432A54:
    ctx->pc = 0x7F432A54u;
    // 7F432A54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432A58:
    ctx->pc = 0x7F432A58u;
    // 7F432A58: lfs     f2, -9692(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432A58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9692);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432A5C:
    ctx->pc = 0x7F432A5Cu;
    // 7F432A5C: lfs     f0, -9696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432A5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432A60:
    ctx->pc = 0x7F432A60u;
    // 7F432A60: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432A60u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F432A64:
    ctx->pc = 0x7F432A64u;
    // 7F432A64: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432A64u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F432A68:
    ctx->pc = 0x7F432A68u;
    // 7F432A68: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F432A6C:
    ctx->pc = 0x7F432A6Cu;
    // 7F432A6C: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F432A70:
    ctx->pc = 0x7F432A70u;
    // 7F432A70: bl      0x7F432BC4
    {
            ctx->lr = 0x7F432A74u;
            goto label_7F432BC4;
    }

label_7F432A74:
    ctx->pc = 0x7F432A74u;
    ctx->downcount -= 14;
    // 7F432A74: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432A78:
    ctx->pc = 0x7F432A78u;
    // 7F432A78: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432A7C:
    ctx->pc = 0x7F432A7Cu;
    // 7F432A7C: lfs     f0, -9688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432A7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432A80:
    ctx->pc = 0x7F432A80u;
    // 7F432A80: rlwinm r0, r31, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 16u) & 0x00FF0000u;
    }

label_7F432A84:
    ctx->pc = 0x7F432A84u;
    // 7F432A84: lfs     f2, -9684(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432A84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432A88:
    ctx->pc = 0x7F432A88u;
    // 7F432A88: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F432A8C:
    ctx->pc = 0x7F432A8Cu;
    // 7F432A8C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432A8Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F432A90:
    ctx->pc = 0x7F432A90u;
    // 7F432A90: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432A90u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F432A94:
    ctx->pc = 0x7F432A94u;
    // 7F432A94: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F432A98:
    ctx->pc = 0x7F432A98u;
    // 7F432A98: lwz     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432A9C:
    ctx->pc = 0x7F432A9Cu;
    // 7F432A9C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F432AA0:
    ctx->pc = 0x7F432AA0u;
    // 7F432AA0: rlwimi r0, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F432AA4:
    ctx->pc = 0x7F432AA4u;
    // 7F432AA4: ori     r31, r0, 0xAAAA
    ctx->gpr[31] = ctx->gpr[0] | 0xAAAAu;

label_7F432AA8:
    ctx->pc = 0x7F432AA8u;
    // 7F432AA8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F432AACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F432AAC:
    ctx->pc = 0x7F432AACu;
    ctx->downcount -= 2;
    // 7F432AAC: cmplwi  r3, 0x0000
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

label_7F432AB0:
    ctx->pc = 0x7F432AB0u;
    // 7F432AB0: bc    12, 2, 0x7F432AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432AC8;
        }
    }

label_7F432AB4:
    ctx->pc = 0x7F432AB4u;
    ctx->downcount -= 2;
    // 7F432AB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432AB8:
    ctx->pc = 0x7F432AB8u;
    // 7F432AB8: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F432ABCu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F432ABC:
    ctx->pc = 0x7F432ABCu;
    ctx->downcount -= 3;
    // 7F432ABC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432AC0:
    ctx->pc = 0x7F432AC0u;
    // 7F432AC0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F432AC4:
    ctx->pc = 0x7F432AC4u;
    // 7F432AC4: bl      0x7F432B30
    {
            ctx->lr = 0x7F432AC8u;
            goto label_7F432B30;
    }

label_7F432AC8:
    ctx->pc = 0x7F432AC8u;
    ctx->downcount -= 2;
    // 7F432AC8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F432ACC:
    ctx->pc = 0x7F432ACCu;
    // 7F432ACC: bl      0x80025A08
    {
            ctx->lr = 0x7F432AD0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F432AD0:
    ctx->pc = 0x7F432AD0u;
    ctx->downcount -= 14;
    // 7F432AD0: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432AD4:
    ctx->pc = 0x7F432AD4u;
    // 7F432AD4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432AD8:
    ctx->pc = 0x7F432AD8u;
    // 7F432AD8: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F432ADC:
    ctx->pc = 0x7F432ADCu;
    // 7F432ADC: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F432AE0:
    ctx->pc = 0x7F432AE0u;
    // 7F432AE0: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432AE4:
    ctx->pc = 0x7F432AE4u;
    // 7F432AE4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F432AE8:
    ctx->pc = 0x7F432AE8u;
    // 7F432AE8: stfs     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432AE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F432AEC:
    ctx->pc = 0x7F432AECu;
    // 7F432AEC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F432AF0:
    ctx->pc = 0x7F432AF0u;
    // 7F432AF0: li      r6, 320
    ctx->gpr[6] = (u32)(s32)(320);

label_7F432AF4:
    ctx->pc = 0x7F432AF4u;
    // 7F432AF4: li      r7, 320
    ctx->gpr[7] = (u32)(s32)(320);

label_7F432AF8:
    ctx->pc = 0x7F432AF8u;
    // 7F432AF8: stfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F432AFC:
    ctx->pc = 0x7F432AFCu;
    // 7F432AFC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F432B00:
    ctx->pc = 0x7F432B00u;
    // 7F432B00: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432B04:
    ctx->pc = 0x7F432B04u;
    // 7F432B04: bl      0x7F3CD728
    {
            ctx->lr = 0x7F432B08u;
            ctx->pc = 0x7F3CD728u;
            return;
    }

label_7F432B08:
    ctx->pc = 0x7F432B08u;
    ctx->downcount -= 4;
    // 7F432B08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F432B0C:
    ctx->pc = 0x7F432B0Cu;
    // 7F432B0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432B10:
    ctx->pc = 0x7F432B10u;
    // 7F432B10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F432B14:
    ctx->pc = 0x7F432B14u;
    // 7F432B14: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F432B18u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F432B18:
    ctx->pc = 0x7F432B18u;
    ctx->downcount -= 17;
    // 7F432B18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432B1C:
    ctx->pc = 0x7F432B1Cu;
    // 7F432B1C: lmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432B20:
    ctx->pc = 0x7F432B20u;
    // 7F432B20: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432B24:
    ctx->pc = 0x7F432B24u;
    // 7F432B24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432B28:
    ctx->pc = 0x7F432B28u;
    // 7F432B28: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F432B2C:
    ctx->pc = 0x7F432B2Cu;
    // 7F432B2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432B30:
    ctx->pc = 0x7F432B30u;
    ctx->downcount -= 17;
    // 7F432B30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432B34:
    ctx->pc = 0x7F432B34u;
    // 7F432B34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432B38:
    ctx->pc = 0x7F432B38u;
    // 7F432B38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432B3C:
    ctx->pc = 0x7F432B3Cu;
    // 7F432B3C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432B40:
    ctx->pc = 0x7F432B40u;
    // 7F432B40: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432B44:
    ctx->pc = 0x7F432B44u;
    // 7F432B44: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432B48:
    ctx->pc = 0x7F432B48u;
    // 7F432B48: bl      0x7F432B84
    {
            ctx->lr = 0x7F432B4Cu;
            goto label_7F432B84;
    }

label_7F432B4C:
    ctx->pc = 0x7F432B4Cu;
    ctx->downcount -= 3;
    // 7F432B4C: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F432B50:
    ctx->pc = 0x7F432B50u;
    // 7F432B50: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F432B54:
    ctx->pc = 0x7F432B54u;
    // 7F432B54: bl      0x7F432B84
    {
            ctx->lr = 0x7F432B58u;
            goto label_7F432B84;
    }

label_7F432B58:
    ctx->pc = 0x7F432B58u;
    ctx->downcount -= 3;
    // 7F432B58: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F432B5C:
    ctx->pc = 0x7F432B5Cu;
    // 7F432B5C: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F432B60:
    ctx->pc = 0x7F432B60u;
    // 7F432B60: bl      0x7F432B84
    {
            ctx->lr = 0x7F432B64u;
            goto label_7F432B84;
    }

label_7F432B64:
    ctx->pc = 0x7F432B64u;
    ctx->downcount -= 3;
    // 7F432B64: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F432B68:
    ctx->pc = 0x7F432B68u;
    // 7F432B68: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F432B6C:
    ctx->pc = 0x7F432B6Cu;
    // 7F432B6C: bl      0x7F432B84
    {
            ctx->lr = 0x7F432B70u;
            goto label_7F432B84;
    }

label_7F432B70:
    ctx->pc = 0x7F432B70u;
    ctx->downcount -= 16;
    // 7F432B70: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432B74:
    ctx->pc = 0x7F432B74u;
    // 7F432B74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432B78:
    ctx->pc = 0x7F432B78u;
    // 7F432B78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432B7C:
    ctx->pc = 0x7F432B7Cu;
    // 7F432B7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432B80:
    ctx->pc = 0x7F432B80u;
    // 7F432B80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432B84:
    ctx->pc = 0x7F432B84u;
    ctx->downcount -= 6;
    // 7F432B84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432B88:
    ctx->pc = 0x7F432B88u;
    // 7F432B88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432B8C:
    ctx->pc = 0x7F432B8Cu;
    // 7F432B8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432B90:
    ctx->pc = 0x7F432B90u;
    // 7F432B90: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F432B94:
    ctx->pc = 0x7F432B94u;
    // 7F432B94: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432B98:
    ctx->pc = 0x7F432B98u;
    // 7F432B98: bl      0x7F432BB4
    {
            ctx->lr = 0x7F432B9Cu;
            goto label_7F432BB4;
    }

label_7F432B9C:
    ctx->pc = 0x7F432B9Cu;
    ctx->downcount -= 7;
    // 7F432B9C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432B9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F432BA0:
    ctx->pc = 0x7F432BA0u;
    // 7F432BA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432BA4:
    ctx->pc = 0x7F432BA4u;
    // 7F432BA4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F432BA8:
    ctx->pc = 0x7F432BA8u;
    // 7F432BA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432BAC:
    ctx->pc = 0x7F432BACu;
    // 7F432BAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432BB0:
    ctx->pc = 0x7F432BB0u;
    // 7F432BB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432BB4:
    ctx->pc = 0x7F432BB4u;
    ctx->downcount -= 4;
    // 7F432BB4: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F432BB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F432BB4u);
        if (ctx->exception) return;
    }

label_7F432BB8:
    ctx->pc = 0x7F432BB8u;
    // 7F432BB8: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F432BB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F432BB8u);
        if (ctx->exception) return;
    }

label_7F432BBC:
    ctx->pc = 0x7F432BBCu;
    // 7F432BBC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432BBCu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F432BC0:
    ctx->pc = 0x7F432BC0u;
    // 7F432BC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432BC4:
    ctx->pc = 0x7F432BC4u;
    ctx->downcount -= 4;
    // 7F432BC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432BC8:
    ctx->pc = 0x7F432BC8u;
    // 7F432BC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432BCC:
    ctx->pc = 0x7F432BCCu;
    // 7F432BCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432BD0:
    ctx->pc = 0x7F432BD0u;
    // 7F432BD0: bl      0x7F432C0C
    {
            ctx->lr = 0x7F432BD4u;
            goto label_7F432C0C;
    }

label_7F432BD4:
    ctx->pc = 0x7F432BD4u;
    ctx->downcount -= 31;
    // 7F432BD4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F432BD8:
    ctx->pc = 0x7F432BD8u;
    // 7F432BD8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432BDC:
    ctx->pc = 0x7F432BDCu;
    // 7F432BDC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432BE0:
    ctx->pc = 0x7F432BE0u;
    // 7F432BE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432BE4:
    ctx->pc = 0x7F432BE4u;
    // 7F432BE4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432BE8:
    ctx->pc = 0x7F432BE8u;
    // 7F432BE8: lfd     f2, -9672(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432BE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9672);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432BEC:
    ctx->pc = 0x7F432BECu;
    // 7F432BEC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432BECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432BF0:
    ctx->pc = 0x7F432BF0u;
    // 7F432BF0: lfs     f0, -9680(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432BF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432BF4:
    ctx->pc = 0x7F432BF4u;
    // 7F432BF4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F432BF4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F432BF8:
    ctx->pc = 0x7F432BF8u;
    // 7F432BF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432BFC:
    ctx->pc = 0x7F432BFCu;
    // 7F432BFC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432BFCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F432C00:
    ctx->pc = 0x7F432C00u;
    // 7F432C00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432C04:
    ctx->pc = 0x7F432C04u;
    // 7F432C04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432C08:
    ctx->pc = 0x7F432C08u;
    // 7F432C08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432C0C:
    ctx->pc = 0x7F432C0Cu;
    ctx->downcount -= 13;
    // 7F432C0C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F432C10:
    ctx->pc = 0x7F432C10u;
    // 7F432C10: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F432C14:
    ctx->pc = 0x7F432C14u;
    // 7F432C14: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F432C18:
    ctx->pc = 0x7F432C18u;
    // 7F432C18: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432C1C:
    ctx->pc = 0x7F432C1Cu;
    // 7F432C1C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F432C20:
    ctx->pc = 0x7F432C20u;
    // 7F432C20: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F432C24:
    ctx->pc = 0x7F432C24u;
    // 7F432C24: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F432C28:
    ctx->pc = 0x7F432C28u;
    // 7F432C28: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432C2C:
    ctx->pc = 0x7F432C2Cu;
    // 7F432C2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432C30:
    ctx->pc = 0x7F432C30u;
    ctx->downcount -= 6;
    // 7F432C30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432C34:
    ctx->pc = 0x7F432C34u;
    // 7F432C34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432C38:
    ctx->pc = 0x7F432C38u;
    // 7F432C38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432C3C:
    ctx->pc = 0x7F432C3Cu;
    // 7F432C3C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F432C40:
    ctx->pc = 0x7F432C40u;
    // 7F432C40: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432C44:
    ctx->pc = 0x7F432C44u;
    // 7F432C44: bl      0x7F432C6C
    {
            ctx->lr = 0x7F432C48u;
            goto label_7F432C6C;
    }

label_7F432C48:
    ctx->pc = 0x7F432C48u;
    ctx->downcount -= 10;
    // 7F432C48: rlwinm r4, r31, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F432C4C:
    ctx->pc = 0x7F432C4Cu;
    // 7F432C4C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F432C50:
    ctx->pc = 0x7F432C50u;
    // 7F432C50: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F432C54:
    ctx->pc = 0x7F432C54u;
    // 7F432C54: subf   r3, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F432C58:
    ctx->pc = 0x7F432C58u;
    // 7F432C58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F432C5C:
    ctx->pc = 0x7F432C5Cu;
    // 7F432C5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432C60:
    ctx->pc = 0x7F432C60u;
    // 7F432C60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432C64:
    ctx->pc = 0x7F432C64u;
    // 7F432C64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432C68:
    ctx->pc = 0x7F432C68u;
    // 7F432C68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432C6C:
    ctx->pc = 0x7F432C6Cu;
    ctx->downcount -= 13;
    // 7F432C6C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F432C70:
    ctx->pc = 0x7F432C70u;
    // 7F432C70: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F432C74:
    ctx->pc = 0x7F432C74u;
    // 7F432C74: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F432C78:
    ctx->pc = 0x7F432C78u;
    // 7F432C78: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432C7C:
    ctx->pc = 0x7F432C7Cu;
    // 7F432C7C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F432C80:
    ctx->pc = 0x7F432C80u;
    // 7F432C80: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F432C84:
    ctx->pc = 0x7F432C84u;
    // 7F432C84: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F432C88:
    ctx->pc = 0x7F432C88u;
    // 7F432C88: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432C8C:
    ctx->pc = 0x7F432C8Cu;
    // 7F432C8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432C90:
    ctx->pc = 0x7F432C90u;
    ctx->downcount -= 6;
    // 7F432C90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432C94:
    ctx->pc = 0x7F432C94u;
    // 7F432C94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432C98:
    ctx->pc = 0x7F432C98u;
    // 7F432C98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432C9C:
    ctx->pc = 0x7F432C9Cu;
    // 7F432C9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F432CA0:
    ctx->pc = 0x7F432CA0u;
    // 7F432CA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432CA4:
    ctx->pc = 0x7F432CA4u;
    // 7F432CA4: bl      0x7F432C6C
    {
            ctx->lr = 0x7F432CA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C6Cu;
                return;
            }
            goto label_7F432C6C;
    }

label_7F432CA8:
    ctx->pc = 0x7F432CA8u;
    ctx->downcount -= 8;
    // 7F432CA8: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F432CAC:
    ctx->pc = 0x7F432CACu;
    // 7F432CAC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F432CB0:
    ctx->pc = 0x7F432CB0u;
    // 7F432CB0: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F432CB4:
    ctx->pc = 0x7F432CB4u;
    // 7F432CB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432CB8:
    ctx->pc = 0x7F432CB8u;
    // 7F432CB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432CBC:
    ctx->pc = 0x7F432CBCu;
    // 7F432CBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F432CC0:
    ctx->pc = 0x7F432CC0u;
    // 7F432CC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432CC4:
    ctx->pc = 0x7F432CC4u;
    ctx->downcount -= 21;
    // 7F432CC4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432CC8:
    ctx->pc = 0x7F432CC8u;
    // 7F432CC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432CCC:
    ctx->pc = 0x7F432CCCu;
    // 7F432CCC: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F432CD0:
    ctx->pc = 0x7F432CD0u;
    // 7F432CD0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F432CD4:
    ctx->pc = 0x7F432CD4u;
    // 7F432CD4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432CD8:
    ctx->pc = 0x7F432CD8u;
    // 7F432CD8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432CDC:
    ctx->pc = 0x7F432CDCu;
    // 7F432CDC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432CE0:
    ctx->pc = 0x7F432CE0u;
    // 7F432CE0: addi    r31, r4, -21852
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F432CE4:
    ctx->pc = 0x7F432CE4u;
    // 7F432CE4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F432CE8:
    ctx->pc = 0x7F432CE8u;
    // 7F432CE8: addi    r3, r30, 848
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(848);

label_7F432CEC:
    ctx->pc = 0x7F432CECu;
    // 7F432CEC: bl      0x7F3B3648
    {
            ctx->lr = 0x7F432CF0u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F432CF0:
    ctx->pc = 0x7F432CF0u;
    ctx->downcount -= 11;
    // 7F432CF0: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F432CF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432CF4:
    ctx->pc = 0x7F432CF4u;
    // 7F432CF4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432CF8:
    ctx->pc = 0x7F432CF8u;
    // 7F432CF8: lfd     f1, -9656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432CF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9656);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432CFC:
    ctx->pc = 0x7F432CFCu;
    // 7F432CFC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F432D00:
    ctx->pc = 0x7F432D00u;
    // 7F432D00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432D00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F432D04:
    ctx->pc = 0x7F432D04u;
    // 7F432D04: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F432D08:
    ctx->pc = 0x7F432D08u;
    // 7F432D08: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F432D0C:
    ctx->pc = 0x7F432D0Cu;
    // 7F432D0C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432D0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F432D10:
    ctx->pc = 0x7F432D10u;
    // 7F432D10: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F432D14:
    ctx->pc = 0x7F432D14u;
    // 7F432D14: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F432D18:
    ctx->downcount -= 8;
    // 7F432D18: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F432D1C:
    ctx->pc = 0x7F432D1Cu;
    // 7F432D1C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432D20:
    ctx->pc = 0x7F432D20u;
    // 7F432D20: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432D20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F432D24:
    ctx->pc = 0x7F432D24u;
    // 7F432D24: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432D28:
    ctx->pc = 0x7F432D28u;
    // 7F432D28: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432D28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F432D2C:
    ctx->pc = 0x7F432D2Cu;
    // 7F432D2C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F432D2Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F432D30:
    ctx->pc = 0x7F432D30u;
    // 7F432D30: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432D30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F432D34:
    // 7F432D34: bc    4, 0, 0x7F432D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432D44;
        }
    }

label_7F432D38:
    ctx->pc = 0x7F432D38u;
    ctx->downcount -= 3;
    // 7F432D38: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F432D38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F432D3C:
    ctx->pc = 0x7F432D3Cu;
    // 7F432D3C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F432D40:
    ctx->pc = 0x7F432D40u;
    // 7F432D40: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F432D44:
    ctx->downcount -= 2;
    // 7F432D44: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F432D48:
    // 7F432D48: bc    16, 0, 0x7F432D18
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432D18u;
                return;
            }
            goto label_7F432D18;
        }
    }

label_7F432D4C:
    ctx->pc = 0x7F432D4Cu;
    ctx->downcount -= 18;
    // 7F432D4C: lwz     r0, 992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432D50:
    ctx->pc = 0x7F432D50u;
    // 7F432D50: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432D54:
    ctx->pc = 0x7F432D54u;
    // 7F432D54: subf   r3, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F432D58:
    ctx->pc = 0x7F432D58u;
    // 7F432D58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432D5C:
    ctx->pc = 0x7F432D5Cu;
    // 7F432D5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432D60:
    ctx->pc = 0x7F432D60u;
    // 7F432D60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F432D64:
    ctx->pc = 0x7F432D64u;
    // 7F432D64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432D68:
    ctx->pc = 0x7F432D68u;
    ctx->downcount -= 27;
    // 7F432D68: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432D6C:
    ctx->pc = 0x7F432D6Cu;
    // 7F432D6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432D70:
    ctx->pc = 0x7F432D70u;
    // 7F432D70: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F432D74:
    ctx->pc = 0x7F432D74u;
    // 7F432D74: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432D78:
    ctx->pc = 0x7F432D78u;
    // 7F432D78: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F432D7C:
    ctx->pc = 0x7F432D7Cu;
    // 7F432D7C: stmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432D80:
    ctx->pc = 0x7F432D80u;
    // 7F432D80: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F432D84:
    ctx->pc = 0x7F432D84u;
    // 7F432D84: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432D88:
    ctx->pc = 0x7F432D88u;
    // 7F432D88: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F432D8C:
    ctx->pc = 0x7F432D8Cu;
    // 7F432D8C: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F432D90:
    ctx->pc = 0x7F432D90u;
    // 7F432D90: lwz     r4, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432D94:
    ctx->pc = 0x7F432D94u;
    // 7F432D94: and   r3, r7, r0
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F432D98:
    ctx->pc = 0x7F432D98u;
    // 7F432D98: and   r0, r4, r6
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[6];
    }

label_7F432D9C:
    ctx->pc = 0x7F432D9Cu;
    // 7F432D9C: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F432DA0:
    ctx->pc = 0x7F432DA0u;
    // 7F432DA0: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F432DA4:
    ctx->pc = 0x7F432DA4u;
    // 7F432DA4: or.   r0, r3, r0
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

label_7F432DA8:
    ctx->pc = 0x7F432DA8u;
    // 7F432DA8: bc    12, 2, 0x7F432EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432EE0;
        }
    }

label_7F432DAC:
    ctx->pc = 0x7F432DACu;
    ctx->downcount -= 3;
    // 7F432DAC: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432DB0:
    ctx->pc = 0x7F432DB0u;
    // 7F432DB0: rlwinm. r0, r0, 0, 31, 31
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

label_7F432DB4:
    ctx->pc = 0x7F432DB4u;
    // 7F432DB4: bc    12, 2, 0x7F432EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432EE0;
        }
    }

label_7F432DB8:
    ctx->pc = 0x7F432DB8u;
    ctx->downcount -= 11;
    // 7F432DB8: lis     r3, 13
    ctx->gpr[3] = ((u32)(s32)(13) << 16);

label_7F432DBC:
    ctx->pc = 0x7F432DBCu;
    // 7F432DBC: lwz     r4, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F432DC0:
    ctx->pc = 0x7F432DC0u;
    // 7F432DC0: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F432DC4:
    ctx->pc = 0x7F432DC4u;
    // 7F432DC4: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F432DC8:
    ctx->pc = 0x7F432DC8u;
    // 7F432DC8: addi    r3, r3, -32738
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32738);

label_7F432DCC:
    ctx->pc = 0x7F432DCCu;
    // 7F432DCC: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F432DD0:
    ctx->pc = 0x7F432DD0u;
    // 7F432DD0: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F432DD4:
    ctx->pc = 0x7F432DD4u;
    // 7F432DD4: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F432DD8:
    ctx->pc = 0x7F432DD8u;
    // 7F432DD8: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F432DDC:
    ctx->pc = 0x7F432DDCu;
    // 7F432DDC: or.   r0, r3, r0
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

label_7F432DE0:
    ctx->pc = 0x7F432DE0u;
    // 7F432DE0: bc    12, 2, 0x7F432EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432EE0;
        }
    }

label_7F432DE4:
    ctx->pc = 0x7F432DE4u;
    ctx->downcount -= 6;
    // 7F432DE4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F432DE8:
    ctx->pc = 0x7F432DE8u;
    // 7F432DE8: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F432DEC:
    ctx->pc = 0x7F432DECu;
    // 7F432DEC: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F432DF0:
    ctx->pc = 0x7F432DF0u;
    // 7F432DF0: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F432DF4:
    ctx->pc = 0x7F432DF4u;
    // 7F432DF4: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F432DF8:
    ctx->pc = 0x7F432DF8u;
    // 7F432DF8: bl      0x80025FFC
    {
            ctx->lr = 0x7F432DFCu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F432DFC:
    ctx->pc = 0x7F432DFCu;
    ctx->downcount -= 8;
    // 7F432DFC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F432E00:
    ctx->pc = 0x7F432E00u;
    // 7F432E00: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F432E04:
    ctx->pc = 0x7F432E04u;
    // 7F432E04: lfs     f0, -9648(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F432E04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432E08:
    ctx->pc = 0x7F432E08u;
    // 7F432E08: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F432E0C:
    ctx->pc = 0x7F432E0Cu;
    // 7F432E0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432E10:
    ctx->pc = 0x7F432E10u;
    // 7F432E10: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F432E10u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F432E14:
    ctx->pc = 0x7F432E14u;
    // 7F432E14: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F432E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432E18:
    ctx->pc = 0x7F432E18u;
    // 7F432E18: bl      0x7F114F50
    {
            ctx->lr = 0x7F432E1Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F432E1C:
    ctx->pc = 0x7F432E1Cu;
    ctx->downcount -= 4;
    // 7F432E1C: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F432E20:
    ctx->pc = 0x7F432E20u;
    // 7F432E20: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F432E24:
    ctx->pc = 0x7F432E24u;
    // 7F432E24: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F432E28:
    ctx->pc = 0x7F432E28u;
    // 7F432E28: bl      0x80025FFC
    {
            ctx->lr = 0x7F432E2Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F432E2C:
    ctx->pc = 0x7F432E2Cu;
    ctx->downcount -= 2;
    // 7F432E2C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F432E30:
    ctx->pc = 0x7F432E30u;
    // 7F432E30: bl      0x80026080
    {
            ctx->lr = 0x7F432E34u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F432E34:
    ctx->pc = 0x7F432E34u;
    ctx->downcount -= 4;
    // 7F432E34: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432E38:
    ctx->pc = 0x7F432E38u;
    // 7F432E38: lfs     f0, -9664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432E38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432E3C:
    ctx->pc = 0x7F432E3Cu;
    // 7F432E3C: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F432E3Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F432E40:
    ctx->pc = 0x7F432E40u;
    // 7F432E40: bc    12, 2, 0x7F432EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432EE0;
        }
    }

label_7F432E44:
    ctx->pc = 0x7F432E44u;
    ctx->downcount -= 4;
    // 7F432E44: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F432E48:
    ctx->pc = 0x7F432E48u;
    // 7F432E48: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F432E4C:
    ctx->pc = 0x7F432E4Cu;
    // 7F432E4C: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F432E50:
    ctx->pc = 0x7F432E50u;
    // 7F432E50: bl      0x7F22F07C
    {
            ctx->lr = 0x7F432E54u;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F432E54:
    ctx->pc = 0x7F432E54u;
    ctx->downcount -= 4;
    // 7F432E54: lhz     r4, 1000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1000);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F432E58:
    ctx->pc = 0x7F432E58u;
    // 7F432E58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F432E5C:
    ctx->pc = 0x7F432E5Cu;
    // 7F432E5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F432E60:
    ctx->pc = 0x7F432E60u;
    // 7F432E60: bl      0x80051BB0
    {
            ctx->lr = 0x7F432E64u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F432E64:
    ctx->pc = 0x7F432E64u;
    ctx->downcount -= 2;
    // 7F432E64: cmpwi   r3, 0
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

label_7F432E68:
    ctx->pc = 0x7F432E68u;
    // 7F432E68: bc    4, 2, 0x7F432E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432E88;
        }
    }

label_7F432E6C:
    ctx->pc = 0x7F432E6Cu;
    ctx->downcount -= 3;
    // 7F432E6C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F432E70:
    ctx->pc = 0x7F432E70u;
    // 7F432E70: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432E74:
    ctx->pc = 0x7F432E74u;
    // 7F432E74: bl      0x7F3CC414
    {
            ctx->lr = 0x7F432E78u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F432E78:
    ctx->pc = 0x7F432E78u;
    ctx->downcount -= 4;
    // 7F432E78: lwz     r3, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432E7C:
    ctx->pc = 0x7F432E7Cu;
    // 7F432E7C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F432E80:
    ctx->pc = 0x7F432E80u;
    // 7F432E80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F432E84:
    ctx->pc = 0x7F432E84u;
    // 7F432E84: bl      0x7F0117B8
    {
            ctx->lr = 0x7F432E88u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F432E88:
    ctx->pc = 0x7F432E88u;
    ctx->downcount -= 3;
    // 7F432E88: lwz     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432E8C:
    ctx->pc = 0x7F432E8Cu;
    // 7F432E8C: cmpwi   r0, 2180
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2180);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F432E90:
    ctx->pc = 0x7F432E90u;
    // 7F432E90: bc    4, 2, 0x7F432ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432ED0;
        }
    }

label_7F432E94:
    ctx->pc = 0x7F432E94u;
    ctx->downcount -= 6;
    // 7F432E94: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F432E98:
    ctx->pc = 0x7F432E98u;
    // 7F432E98: addi    r4, r3, -6212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6212);

label_7F432E9C:
    ctx->pc = 0x7F432E9Cu;
    // 7F432E9C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432EA0:
    ctx->pc = 0x7F432EA0u;
    // 7F432EA0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F432EA4:
    ctx->pc = 0x7F432EA4u;
    // 7F432EA4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432EA8:
    ctx->pc = 0x7F432EA8u;
    // 7F432EA8: bl      0x7F2BB28C
    {
            ctx->lr = 0x7F432EACu;
            ctx->pc = 0x7F2BB28Cu;
            return;
    }

label_7F432EAC:
    ctx->pc = 0x7F432EACu;
    ctx->downcount -= 3;
    // 7F432EAC: lwz     r3, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432EB0:
    ctx->pc = 0x7F432EB0u;
    // 7F432EB0: cmplwi  r3, 0x0000
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

label_7F432EB4:
    ctx->pc = 0x7F432EB4u;
    // 7F432EB4: bc    12, 2, 0x7F432EBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432EBC;
        }
    }

label_7F432EB8:
    ctx->pc = 0x7F432EB8u;
    ctx->downcount -= 1;
    // 7F432EB8: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F432EBCu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F432EBC:
    ctx->pc = 0x7F432EBCu;
    ctx->downcount -= 4;
    // 7F432EBC: lwz     r3, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432EC0:
    ctx->pc = 0x7F432EC0u;
    // 7F432EC0: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_7F432EC4:
    ctx->pc = 0x7F432EC4u;
    // 7F432EC4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F432EC8:
    ctx->pc = 0x7F432EC8u;
    // 7F432EC8: bl      0x7F433A90
    {
            ctx->lr = 0x7F432ECCu;
            goto label_7F433A90;
    }

label_7F432ECC:
    ctx->pc = 0x7F432ECCu;
    ctx->downcount -= 1;
    // 7F432ECC: stw     r3, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F432ED0:
    ctx->pc = 0x7F432ED0u;
    ctx->downcount -= 4;
    // 7F432ED0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F432ED4:
    ctx->pc = 0x7F432ED4u;
    // 7F432ED4: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F432ED8:
    ctx->pc = 0x7F432ED8u;
    // 7F432ED8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F432EDC:
    ctx->pc = 0x7F432EDCu;
    // 7F432EDC: bl      0x7F018110
    {
            ctx->lr = 0x7F432EE0u;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F432EE0:
    ctx->pc = 0x7F432EE0u;
    ctx->downcount -= 16;
    // 7F432EE0: lmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F432EE4:
    ctx->pc = 0x7F432EE4u;
    // 7F432EE4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432EE8:
    ctx->pc = 0x7F432EE8u;
    // 7F432EE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F432EEC:
    ctx->pc = 0x7F432EECu;
    // 7F432EEC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F432EF0:
    ctx->pc = 0x7F432EF0u;
    // 7F432EF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F432EF4:
    ctx->pc = 0x7F432EF4u;
    ctx->downcount -= 28;
    // 7F432EF4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F432EF8:
    ctx->pc = 0x7F432EF8u;
    // 7F432EF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F432EFC:
    ctx->pc = 0x7F432EFCu;
    // 7F432EFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F432F00:
    ctx->pc = 0x7F432F00u;
    // 7F432F00: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F432F04:
    ctx->pc = 0x7F432F04u;
    // 7F432F04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F432F08:
    ctx->pc = 0x7F432F08u;
    // 7F432F08: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F432F0C:
    ctx->pc = 0x7F432F0Cu;
    // 7F432F0C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F432F10:
    ctx->pc = 0x7F432F10u;
    // 7F432F10: addi    r31, r29, 608
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(608);

label_7F432F14:
    ctx->pc = 0x7F432F14u;
    // 7F432F14: addi    r30, r29, 32
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(32);

label_7F432F18:
    ctx->pc = 0x7F432F18u;
    // 7F432F18: stw     r5, 988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F432F1C:
    ctx->pc = 0x7F432F1Cu;
    // 7F432F1C: lwz     r0, 760(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432F20:
    ctx->pc = 0x7F432F20u;
    // 7F432F20: lwz     r3, 764(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F432F24:
    ctx->pc = 0x7F432F24u;
    // 7F432F24: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F432F28:
    ctx->pc = 0x7F432F28u;
    // 7F432F28: and   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[4];
    }

label_7F432F2C:
    ctx->pc = 0x7F432F2Cu;
    // 7F432F2C: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F432F30:
    ctx->pc = 0x7F432F30u;
    // 7F432F30: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F432F34:
    ctx->pc = 0x7F432F34u;
    // 7F432F34: or.   r0, r3, r0
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

label_7F432F38:
    ctx->pc = 0x7F432F38u;
    // 7F432F38: bc    12, 2, 0x7F432FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432FD4;
        }
    }

label_7F432F3C:
    ctx->pc = 0x7F432F3Cu;
    ctx->downcount -= 3;
    // 7F432F3C: lwz     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432F40:
    ctx->pc = 0x7F432F40u;
    // 7F432F40: cmpwi   r0, 0
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

label_7F432F44:
    ctx->pc = 0x7F432F44u;
    // 7F432F44: bc    4, 2, 0x7F432FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F432FD4;
        }
    }

label_7F432F48:
    ctx->pc = 0x7F432F48u;
    ctx->downcount -= 3;
    // 7F432F48: stw     r4, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F432F4C:
    ctx->pc = 0x7F432F4Cu;
    // 7F432F4C: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F432F50:
    ctx->pc = 0x7F432F50u;
    // 7F432F50: bl      0x7F432C30
    {
            ctx->lr = 0x7F432F54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C30u;
                return;
            }
            goto label_7F432C30;
    }

label_7F432F54:
    ctx->pc = 0x7F432F54u;
    ctx->downcount -= 5;
    // 7F432F54: lha     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F432F58:
    ctx->pc = 0x7F432F58u;
    // 7F432F58: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F432F5C:
    ctx->pc = 0x7F432F5Cu;
    // 7F432F5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F432F60:
    ctx->pc = 0x7F432F60u;
    // 7F432F60: sth     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432F64:
    ctx->pc = 0x7F432F64u;
    // 7F432F64: bl      0x7F432C90
    {
            ctx->lr = 0x7F432F68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C90u;
                return;
            }
            goto label_7F432C90;
    }

label_7F432F68:
    ctx->pc = 0x7F432F68u;
    ctx->downcount -= 2;
    // 7F432F68: cmpwi   r3, 0
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

label_7F432F6C:
    ctx->pc = 0x7F432F6Cu;
    // 7F432F6C: bc    12, 2, 0x7F432F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432F84;
        }
    }

label_7F432F70:
    ctx->pc = 0x7F432F70u;
    ctx->downcount -= 2;
    // 7F432F70: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F432F74:
    ctx->pc = 0x7F432F74u;
    // 7F432F74: bl      0x7F432C30
    {
            ctx->lr = 0x7F432F78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C30u;
                return;
            }
            goto label_7F432C30;
    }

label_7F432F78:
    ctx->pc = 0x7F432F78u;
    ctx->downcount -= 3;
    // 7F432F78: addi    r0, r3, -32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32);

label_7F432F7C:
    ctx->pc = 0x7F432F7Cu;
    // 7F432F7C: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432F80:
    ctx->pc = 0x7F432F80u;
    // 7F432F80: b       0x7F432F94
    {
            goto label_7F432F94;
    }

label_7F432F84:
    ctx->pc = 0x7F432F84u;
    ctx->downcount -= 2;
    // 7F432F84: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F432F88:
    ctx->pc = 0x7F432F88u;
    // 7F432F88: bl      0x7F432C30
    {
            ctx->lr = 0x7F432F8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C30u;
                return;
            }
            goto label_7F432C30;
    }

label_7F432F8C:
    ctx->pc = 0x7F432F8Cu;
    ctx->downcount -= 2;
    // 7F432F8C: addi    r0, r3, 64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(64);

label_7F432F90:
    ctx->pc = 0x7F432F90u;
    // 7F432F90: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432F94:
    ctx->pc = 0x7F432F94u;
    ctx->downcount -= 2;
    // 7F432F94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F432F98:
    ctx->pc = 0x7F432F98u;
    // 7F432F98: bl      0x7F432C90
    {
            ctx->lr = 0x7F432F9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C90u;
                return;
            }
            goto label_7F432C90;
    }

label_7F432F9C:
    ctx->pc = 0x7F432F9Cu;
    ctx->downcount -= 2;
    // 7F432F9C: cmpwi   r3, 0
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

label_7F432FA0:
    ctx->pc = 0x7F432FA0u;
    // 7F432FA0: bc    12, 2, 0x7F432FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F432FB8;
        }
    }

label_7F432FA4:
    ctx->pc = 0x7F432FA4u;
    ctx->downcount -= 2;
    // 7F432FA4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F432FA8:
    ctx->pc = 0x7F432FA8u;
    // 7F432FA8: bl      0x7F432C30
    {
            ctx->lr = 0x7F432FACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C30u;
                return;
            }
            goto label_7F432C30;
    }

label_7F432FAC:
    ctx->pc = 0x7F432FACu;
    ctx->downcount -= 3;
    // 7F432FAC: addi    r0, r3, -32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32);

label_7F432FB0:
    ctx->pc = 0x7F432FB0u;
    // 7F432FB0: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432FB4:
    ctx->pc = 0x7F432FB4u;
    // 7F432FB4: b       0x7F432FC8
    {
            goto label_7F432FC8;
    }

label_7F432FB8:
    ctx->pc = 0x7F432FB8u;
    ctx->downcount -= 2;
    // 7F432FB8: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F432FBC:
    ctx->pc = 0x7F432FBCu;
    // 7F432FBC: bl      0x7F432C30
    {
            ctx->lr = 0x7F432FC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432C30u;
                return;
            }
            goto label_7F432C30;
    }

label_7F432FC0:
    ctx->pc = 0x7F432FC0u;
    ctx->downcount -= 2;
    // 7F432FC0: addi    r0, r3, 64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(64);

label_7F432FC4:
    ctx->pc = 0x7F432FC4u;
    // 7F432FC4: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F432FC8:
    ctx->pc = 0x7F432FC8u;
    ctx->downcount -= 3;
    // 7F432FC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432FCC:
    ctx->pc = 0x7F432FCCu;
    // 7F432FCC: lfs     f0, -9644(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F432FCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F432FD0:
    ctx->pc = 0x7F432FD0u;
    // 7F432FD0: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F432FD0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F432FD4:
    ctx->pc = 0x7F432FD4u;
    ctx->downcount -= 3;
    // 7F432FD4: lwz     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F432FD8:
    ctx->pc = 0x7F432FD8u;
    // 7F432FD8: cmpwi   r0, 0
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

label_7F432FDC:
    ctx->pc = 0x7F432FDCu;
    // 7F432FDC: bc    12, 2, 0x7F43306C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43306C;
        }
    }

label_7F432FE0:
    ctx->pc = 0x7F432FE0u;
    ctx->downcount -= 3;
    // 7F432FE0: lbz     r0, 154(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(154);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F432FE4:
    ctx->pc = 0x7F432FE4u;
    // 7F432FE4: extsb. r0, r0
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

label_7F432FE8:
    ctx->pc = 0x7F432FE8u;
    // 7F432FE8: bc    12, 2, 0x7F43304C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43304C;
        }
    }

label_7F432FEC:
    ctx->pc = 0x7F432FECu;
    ctx->downcount -= 15;
    // 7F432FEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F432FF0:
    ctx->pc = 0x7F432FF0u;
    // 7F432FF0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F432FF4:
    ctx->pc = 0x7F432FF4u;
    // 7F432FF4: stb     r0, 154(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(154);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F432FF8:
    ctx->pc = 0x7F432FF8u;
    // 7F432FF8: addi    r4, r3, -9640
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9640);

label_7F432FFC:
    ctx->pc = 0x7F432FFCu;
    // 7F432FFC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F433000:
    ctx->pc = 0x7F433000u;
    // 7F433000: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433000u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433004:
    ctx->pc = 0x7F433004u;
    // 7F433004: lfs     f2, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F433004u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F433008:
    ctx->pc = 0x7F433008u;
    // 7F433008: lfs     f0, -9636(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F433008u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43300C:
    ctx->pc = 0x7F43300Cu;
    // 7F43300C: fneg    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F43300Cu)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) ^ 0x8000000000000000ull);

label_7F433010:
    ctx->pc = 0x7F433010u;
    // 7F433010: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F433010u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F433014:
    ctx->pc = 0x7F433014u;
    // 7F433014: stfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F433014u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F433018:
    ctx->pc = 0x7F433018u;
    // 7F433018: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F433018u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43301C:
    ctx->pc = 0x7F43301Cu;
    // 7F43301C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43301Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F433020:
    ctx->pc = 0x7F433020u;
    // 7F433020: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F433024:
    ctx->pc = 0x7F433024u;
    // 7F433024: bc    4, 2, 0x7F43306C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43306C;
        }
    }

label_7F433028:
    ctx->pc = 0x7F433028u;
    ctx->downcount -= 9;
    // 7F433028: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F43302C:
    ctx->pc = 0x7F43302Cu;
    // 7F43302C: stw     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433030:
    ctx->pc = 0x7F433030u;
    // 7F433030: lfs     f0, -9664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F433030u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433034:
    ctx->pc = 0x7F433034u;
    // 7F433034: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F433034u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433038:
    ctx->pc = 0x7F433038u;
    // 7F433038: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F43303C:
    ctx->pc = 0x7F43303Cu;
    // 7F43303C: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433040:
    ctx->pc = 0x7F433040u;
    // 7F433040: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433044:
    ctx->pc = 0x7F433044u;
    // 7F433044: sth     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433048:
    ctx->pc = 0x7F433048u;
    // 7F433048: b       0x7F43306C
    {
            goto label_7F43306C;
    }

label_7F43304C:
    ctx->pc = 0x7F43304Cu;
    ctx->downcount -= 8;
    // 7F43304C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F433050:
    ctx->pc = 0x7F433050u;
    // 7F433050: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F433050u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433054:
    ctx->pc = 0x7F433054u;
    // 7F433054: lfs     f0, -9636(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F433054u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433058:
    ctx->pc = 0x7F433058u;
    // 7F433058: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F433058u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F43305C:
    ctx->pc = 0x7F43305Cu;
    // 7F43305C: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F43305Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433060:
    ctx->pc = 0x7F433060u;
    // 7F433060: lwz     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433064:
    ctx->pc = 0x7F433064u;
    // 7F433064: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F433068:
    ctx->pc = 0x7F433068u;
    // 7F433068: stw     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43306C:
    ctx->pc = 0x7F43306Cu;
    ctx->downcount -= 3;
    // 7F43306C: lwz     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433070:
    ctx->pc = 0x7F433070u;
    // 7F433070: cmpwi   r0, 0
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

label_7F433074:
    ctx->pc = 0x7F433074u;
    // 7F433074: bc    4, 2, 0x7F433090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433090;
        }
    }

label_7F433078:
    ctx->pc = 0x7F433078u;
    ctx->downcount -= 5;
    // 7F433078: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43307C:
    ctx->pc = 0x7F43307Cu;
    // 7F43307C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F433080:
    ctx->pc = 0x7F433080u;
    // 7F433080: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F433084:
    ctx->pc = 0x7F433084u;
    // 7F433084: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F433088:
    ctx->pc = 0x7F433088u;
    // 7F433088: bl      0x7F023F7C
    {
            ctx->lr = 0x7F43308Cu;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F43308C:
    ctx->pc = 0x7F43308Cu;
    ctx->downcount -= 1;
    // 7F43308C: b       0x7F4330DC
    {
            goto label_7F4330DC;
    }

label_7F433090:
    ctx->pc = 0x7F433090u;
    ctx->downcount -= 5;
    // 7F433090: lwz     r4, 992(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(992);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433094:
    ctx->pc = 0x7F433094u;
    // 7F433094: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F433098:
    ctx->pc = 0x7F433098u;
    // 7F433098: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F43309C:
    ctx->pc = 0x7F43309Cu;
    // 7F43309C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4330A0:
    ctx->pc = 0x7F4330A0u;
    // 7F4330A0: bl      0x7F023F7C
    {
            ctx->lr = 0x7F4330A4u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F4330A4:
    ctx->pc = 0x7F4330A4u;
    ctx->downcount -= 3;
    // 7F4330A4: lwz     r3, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4330A8:
    ctx->pc = 0x7F4330A8u;
    // 7F4330A8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F4330AC:
    ctx->pc = 0x7F4330ACu;
    // 7F4330AC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F4330B0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F4330B0:
    ctx->pc = 0x7F4330B0u;
    ctx->downcount -= 2;
    // 7F4330B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4330B4:
    ctx->pc = 0x7F4330B4u;
    // 7F4330B4: bl      0x7F432CC4
    {
            ctx->lr = 0x7F4330B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432CC4u;
                return;
            }
            goto label_7F432CC4;
    }

label_7F4330B8:
    ctx->pc = 0x7F4330B8u;
    ctx->downcount -= 9;
    // 7F4330B8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F4330BC:
    ctx->pc = 0x7F4330BCu;
    // 7F4330BC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F4330C0:
    ctx->pc = 0x7F4330C0u;
    // 7F4330C0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4330C4:
    ctx->pc = 0x7F4330C4u;
    // 7F4330C4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F4330C8:
    ctx->pc = 0x7F4330C8u;
    // 7F4330C8: lfd     f1, -9656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F4330C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9656);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4330CC:
    ctx->pc = 0x7F4330CCu;
    // 7F4330CC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4330D0:
    ctx->pc = 0x7F4330D0u;
    // 7F4330D0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4330D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4330D4:
    ctx->pc = 0x7F4330D4u;
    // 7F4330D4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F4330D4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F4330D8:
    ctx->pc = 0x7F4330D8u;
    // 7F4330D8: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F4330D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4330DC:
    ctx->pc = 0x7F4330DCu;
    ctx->downcount -= 3;
    // 7F4330DC: lwz     r5, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4330E0:
    ctx->pc = 0x7F4330E0u;
    // 7F4330E0: cmplwi  r5, 0x0000
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

label_7F4330E4:
    ctx->pc = 0x7F4330E4u;
    // 7F4330E4: bc    12, 2, 0x7F433108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433108;
        }
    }

label_7F4330E8:
    ctx->pc = 0x7F4330E8u;
    ctx->downcount -= 4;
    // 7F4330E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4330EC:
    ctx->pc = 0x7F4330ECu;
    // 7F4330EC: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F4330F0:
    ctx->pc = 0x7F4330F0u;
    // 7F4330F0: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F4330F4:
    ctx->pc = 0x7F4330F4u;
    // 7F4330F4: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F4330F8u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F4330F8:
    ctx->pc = 0x7F4330F8u;
    ctx->downcount -= 2;
    // 7F4330F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4330FC:
    ctx->pc = 0x7F4330FCu;
    // 7F4330FC: bl      0x7F023170
    {
            ctx->lr = 0x7F433100u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F433100:
    ctx->pc = 0x7F433100u;
    ctx->downcount -= 2;
    // 7F433100: addi    r3, r29, 432
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(432);

label_7F433104:
    ctx->pc = 0x7F433104u;
    // 7F433104: bl      0x7F0427FC
    {
            ctx->lr = 0x7F433108u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F433108:
    ctx->pc = 0x7F433108u;
    ctx->downcount -= 15;
    // 7F433108: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F43310C:
    ctx->pc = 0x7F43310Cu;
    // 7F43310C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F433110:
    ctx->pc = 0x7F433110u;
    // 7F433110: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F433114:
    ctx->pc = 0x7F433114u;
    // 7F433114: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F433118:
    ctx->pc = 0x7F433118u;
    // 7F433118: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F43311C:
    ctx->pc = 0x7F43311Cu;
    // 7F43311C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F433120:
    ctx->pc = 0x7F433120u;
    // 7F433120: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433124:
    ctx->pc = 0x7F433124u;
    // 7F433124: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F433128:
    ctx->pc = 0x7F433128u;
    // 7F433128: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F43312C:
    ctx->pc = 0x7F43312Cu;
    // 7F43312C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433130:
    ctx->pc = 0x7F433130u;
    // 7F433130: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433134:
    ctx->pc = 0x7F433134u;
    // 7F433134: lwz     r6, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F433138:
    ctx->pc = 0x7F433138u;
    // 7F433138: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F43313C:
    ctx->pc = 0x7F43313Cu;
    // 7F43313C: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F433140:
    ctx->pc = 0x7F433140u;
    // 7F433140: bl      0x7F014964
    {
            ctx->lr = 0x7F433144u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F433144:
    ctx->pc = 0x7F433144u;
    ctx->downcount -= 16;
    // 7F433144: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433148:
    ctx->pc = 0x7F433148u;
    // 7F433148: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43314C:
    ctx->pc = 0x7F43314Cu;
    // 7F43314C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433150:
    ctx->pc = 0x7F433150u;
    // 7F433150: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F433154:
    ctx->pc = 0x7F433154u;
    // 7F433154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433158:
    ctx->pc = 0x7F433158u;
    ctx->downcount -= 8;
    // 7F433158: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43315C:
    ctx->pc = 0x7F43315Cu;
    // 7F43315C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433160:
    ctx->pc = 0x7F433160u;
    // 7F433160: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433164:
    ctx->pc = 0x7F433164u;
    // 7F433164: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F433168:
    ctx->pc = 0x7F433168u;
    // 7F433168: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F43316C:
    ctx->pc = 0x7F43316Cu;
    // 7F43316C: lwz     r0, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433170:
    ctx->pc = 0x7F433170u;
    // 7F433170: cmplwi  r0, 0x0000
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

label_7F433174:
    ctx->pc = 0x7F433174u;
    // 7F433174: bc    12, 2, 0x7F433188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433188;
        }
    }

label_7F433178:
    ctx->pc = 0x7F433178u;
    ctx->downcount -= 2;
    // 7F433178: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F43317C:
    ctx->pc = 0x7F43317Cu;
    // 7F43317C: bl      0x7F023E10
    {
            ctx->lr = 0x7F433180u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F433180:
    ctx->pc = 0x7F433180u;
    ctx->downcount -= 2;
    // 7F433180: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F433184:
    ctx->pc = 0x7F433184u;
    // 7F433184: bl      0x7F042AAC
    {
            ctx->lr = 0x7F433188u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F433188:
    ctx->pc = 0x7F433188u;
    ctx->downcount -= 6;
    // 7F433188: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43318C:
    ctx->pc = 0x7F43318Cu;
    // 7F43318C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F433190:
    ctx->pc = 0x7F433190u;
    // 7F433190: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433194:
    ctx->pc = 0x7F433194u;
    // 7F433194: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F433198:
    ctx->pc = 0x7F433198u;
    // 7F433198: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43319C:
    ctx->pc = 0x7F43319Cu;
    ctx->downcount -= 51;
    // 7F43319C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4331A0:
    ctx->pc = 0x7F4331A0u;
    // 7F4331A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4331A4:
    ctx->pc = 0x7F4331A4u;
    // 7F4331A4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4331A8:
    ctx->pc = 0x7F4331A8u;
    // 7F4331A8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4331AC:
    ctx->pc = 0x7F4331ACu;
    // 7F4331AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4331B0:
    ctx->pc = 0x7F4331B0u;
    // 7F4331B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4331B4:
    ctx->pc = 0x7F4331B4u;
    // 7F4331B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4331B8:
    ctx->pc = 0x7F4331B8u;
    // 7F4331B8: lfs     f1, -9632(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4331B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9632);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4331BC:
    ctx->pc = 0x7F4331BCu;
    // 7F4331BC: addi    r4, r31, 832
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(832);

label_7F4331C0:
    ctx->pc = 0x7F4331C0u;
    // 7F4331C0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F4331C4:
    ctx->pc = 0x7F4331C4u;
    // 7F4331C4: lwz     r5, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4331C8:
    ctx->pc = 0x7F4331C8u;
    // 7F4331C8: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4331CC:
    ctx->pc = 0x7F4331CCu;
    // 7F4331CC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4331D0:
    ctx->pc = 0x7F4331D0u;
    // 7F4331D0: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4331D0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4331D4:
    ctx->pc = 0x7F4331D4u;
    // 7F4331D4: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4331D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4331D8:
    ctx->pc = 0x7F4331D8u;
    // 7F4331D8: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4331D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4331DC:
    ctx->pc = 0x7F4331DCu;
    // 7F4331DC: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4331DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4331E0:
    ctx->pc = 0x7F4331E0u;
    // 7F4331E0: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4331E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4331E4:
    ctx->pc = 0x7F4331E4u;
    // 7F4331E4: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4331E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4331E8:
    ctx->pc = 0x7F4331E8u;
    // 7F4331E8: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4331E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4331EC:
    ctx->pc = 0x7F4331ECu;
    // 7F4331EC: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4331ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4331F0:
    ctx->pc = 0x7F4331F0u;
    // 7F4331F0: stfs     f0, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4331F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4331F4:
    ctx->pc = 0x7F4331F4u;
    // 7F4331F4: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4331F8:
    ctx->pc = 0x7F4331F8u;
    // 7F4331F8: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4331FC:
    ctx->pc = 0x7F4331FCu;
    // 7F4331FC: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4331FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433200:
    ctx->pc = 0x7F433200u;
    // 7F433200: stfs     f0, 836(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F433200u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(836);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433204:
    ctx->pc = 0x7F433204u;
    // 7F433204: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F433208:
    ctx->pc = 0x7F433208u;
    // 7F433208: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F43320C:
    ctx->pc = 0x7F43320Cu;
    // 7F43320C: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F43320Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433210:
    ctx->pc = 0x7F433210u;
    // 7F433210: stfs     f0, 840(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F433210u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433214:
    ctx->pc = 0x7F433214u;
    // 7F433214: stfs     f1, 844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F433214u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F433218:
    ctx->pc = 0x7F433218u;
    // 7F433218: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F43321C:
    ctx->pc = 0x7F43321Cu;
    // 7F43321C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F433220:
    ctx->pc = 0x7F433220u;
    // 7F433220: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433220u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433224:
    ctx->pc = 0x7F433224u;
    // 7F433224: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F433224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433228:
    ctx->pc = 0x7F433228u;
    // 7F433228: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433228u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43322C:
    ctx->pc = 0x7F43322Cu;
    // 7F43322C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F43322Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433230:
    ctx->pc = 0x7F433230u;
    // 7F433230: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433230u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433234:
    ctx->pc = 0x7F433234u;
    // 7F433234: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F433234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433238:
    ctx->pc = 0x7F433238u;
    // 7F433238: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F433238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F43323C:
    ctx->pc = 0x7F43323Cu;
    // 7F43323C: bl      0x800261D8
    {
            ctx->lr = 0x7F433240u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F433240:
    ctx->pc = 0x7F433240u;
    ctx->downcount -= 5;
    // 7F433240: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433244:
    ctx->pc = 0x7F433244u;
    // 7F433244: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F433248:
    ctx->pc = 0x7F433248u;
    // 7F433248: lfs     f1, -9640(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433248u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43324C:
    ctx->pc = 0x7F43324Cu;
    // 7F43324C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433250:
    ctx->pc = 0x7F433250u;
    // 7F433250: bl      0x800261FC
    {
            ctx->lr = 0x7F433254u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F433254:
    ctx->pc = 0x7F433254u;
    ctx->downcount -= 4;
    // 7F433254: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433258:
    ctx->pc = 0x7F433258u;
    // 7F433258: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F43325C:
    ctx->pc = 0x7F43325Cu;
    // 7F43325C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433260:
    ctx->pc = 0x7F433260u;
    // 7F433260: bl      0x800261B4
    {
            ctx->lr = 0x7F433264u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F433264:
    ctx->pc = 0x7F433264u;
    ctx->downcount -= 5;
    // 7F433264: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433268:
    ctx->pc = 0x7F433268u;
    // 7F433268: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F43326C:
    ctx->pc = 0x7F43326Cu;
    // 7F43326C: lfs     f1, -9640(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F43326Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433270:
    ctx->pc = 0x7F433270u;
    // 7F433270: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433274:
    ctx->pc = 0x7F433274u;
    // 7F433274: bl      0x800261FC
    {
            ctx->lr = 0x7F433278u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F433278:
    ctx->pc = 0x7F433278u;
    ctx->downcount -= 7;
    // 7F433278: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F43327C:
    ctx->pc = 0x7F43327Cu;
    // 7F43327C: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F433280:
    ctx->pc = 0x7F433280u;
    // 7F433280: addi    r7, r31, 832
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(832);

label_7F433284:
    ctx->pc = 0x7F433284u;
    // 7F433284: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433288:
    ctx->pc = 0x7F433288u;
    // 7F433288: li      r4, 16401
    ctx->gpr[4] = (u32)(s32)(16401);

label_7F43328C:
    ctx->pc = 0x7F43328Cu;
    // 7F43328C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F433290:
    ctx->pc = 0x7F433290u;
    // 7F433290: bl      0x7F014788
    {
            ctx->lr = 0x7F433294u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F433294:
    ctx->pc = 0x7F433294u;
    ctx->downcount -= 13;
    // 7F433294: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F433298:
    ctx->pc = 0x7F433298u;
    // 7F433298: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F43329C:
    ctx->pc = 0x7F43329Cu;
    // 7F43329C: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F4332A0:
    ctx->pc = 0x7F4332A0u;
    // 7F4332A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F4332A4:
    ctx->pc = 0x7F4332A4u;
    // 7F4332A4: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4332A8:
    ctx->pc = 0x7F4332A8u;
    // 7F4332A8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F4332AC:
    ctx->pc = 0x7F4332ACu;
    // 7F4332AC: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F4332B0:
    ctx->pc = 0x7F4332B0u;
    // 7F4332B0: addi    r4, r31, 800
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(800);

label_7F4332B4:
    ctx->pc = 0x7F4332B4u;
    // 7F4332B4: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F4332B8:
    ctx->pc = 0x7F4332B8u;
    // 7F4332B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F4332BC:
    ctx->pc = 0x7F4332BCu;
    // 7F4332BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F4332C0:
    ctx->pc = 0x7F4332C0u;
    // 7F4332C0: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F4332C4:
    ctx->pc = 0x7F4332C4u;
    // 7F4332C4: bl      0x7F014B78
    {
            ctx->lr = 0x7F4332C8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F4332C8:
    ctx->pc = 0x7F4332C8u;
    ctx->downcount -= 2;
    // 7F4332C8: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F4332CC:
    ctx->pc = 0x7F4332CCu;
    // 7F4332CC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F4332D0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F4332D0:
    ctx->pc = 0x7F4332D0u;
    ctx->downcount -= 5;
    // 7F4332D0: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F4332D4:
    ctx->pc = 0x7F4332D4u;
    // 7F4332D4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F4332D8:
    ctx->pc = 0x7F4332D8u;
    // 7F4332D8: addi    r4, r3, 11624
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11624);

label_7F4332DC:
    ctx->pc = 0x7F4332DCu;
    // 7F4332DC: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F4332E0:
    ctx->pc = 0x7F4332E0u;
    // 7F4332E0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F4332E4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F4332E4:
    ctx->pc = 0x7F4332E4u;
    ctx->downcount -= 16;
    // 7F4332E4: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4332E8:
    ctx->pc = 0x7F4332E8u;
    // 7F4332E8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4332EC:
    ctx->pc = 0x7F4332ECu;
    // 7F4332EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4332F0:
    ctx->pc = 0x7F4332F0u;
    // 7F4332F0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F4332F4:
    ctx->pc = 0x7F4332F4u;
    // 7F4332F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4332F8:
    ctx->pc = 0x7F4332F8u;
    ctx->downcount -= 20;
    // 7F4332F8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4332FC:
    ctx->pc = 0x7F4332FCu;
    // 7F4332FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433300:
    ctx->pc = 0x7F433300u;
    // 7F433300: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F433304:
    ctx->pc = 0x7F433304u;
    // 7F433304: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433308:
    ctx->pc = 0x7F433308u;
    // 7F433308: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43330C:
    ctx->pc = 0x7F43330Cu;
    // 7F43330C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433310:
    ctx->pc = 0x7F433310u;
    // 7F433310: addi    r31, r29, 32
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(32);

label_7F433314:
    ctx->pc = 0x7F433314u;
    // 7F433314: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F433318:
    ctx->pc = 0x7F433318u;
    // 7F433318: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F43331C:
    ctx->pc = 0x7F43331Cu;
    // 7F43331C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F433320u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F433320:
    ctx->pc = 0x7F433320u;
    ctx->downcount -= 2;
    // 7F433320: cmpwi   r3, 0
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

label_7F433324:
    ctx->pc = 0x7F433324u;
    // 7F433324: bc    4, 0, 0x7F433330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433330;
        }
    }

label_7F433328:
    ctx->pc = 0x7F433328u;
    ctx->downcount -= 2;
    // 7F433328: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F43332C:
    ctx->pc = 0x7F43332Cu;
    // 7F43332C: b       0x7F433564
    {
            goto label_7F433564;
    }

label_7F433330:
    ctx->pc = 0x7F433330u;
    ctx->downcount -= 5;
    // 7F433330: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433334:
    ctx->pc = 0x7F433334u;
    // 7F433334: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F433338:
    ctx->pc = 0x7F433338u;
    // 7F433338: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F43333C:
    ctx->pc = 0x7F43333Cu;
    // 7F43333C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F433340:
    ctx->pc = 0x7F433340u;
    // 7F433340: bl      0x7F023F7C
    {
            ctx->lr = 0x7F433344u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F433344:
    ctx->pc = 0x7F433344u;
    ctx->downcount -= 6;
    // 7F433344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433348:
    ctx->pc = 0x7F433348u;
    // 7F433348: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F43334C:
    ctx->pc = 0x7F43334Cu;
    // 7F43334C: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F433350:
    ctx->pc = 0x7F433350u;
    // 7F433350: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F433354:
    ctx->pc = 0x7F433354u;
    // 7F433354: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433358:
    ctx->pc = 0x7F433358u;
    // 7F433358: bl      0x7F3C664C
    {
            ctx->lr = 0x7F43335Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F43335C:
    ctx->pc = 0x7F43335Cu;
    ctx->downcount -= 2;
    // 7F43335C: cmplwi  r3, 0x0000
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

label_7F433360:
    ctx->pc = 0x7F433360u;
    // 7F433360: bc    12, 2, 0x7F433378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433378;
        }
    }

label_7F433364:
    ctx->pc = 0x7F433364u;
    ctx->downcount -= 2;
    // 7F433364: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433368:
    ctx->pc = 0x7F433368u;
    // 7F433368: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F43336Cu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F43336C:
    ctx->pc = 0x7F43336Cu;
    ctx->downcount -= 3;
    // 7F43336C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433370:
    ctx->pc = 0x7F433370u;
    // 7F433370: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433374:
    ctx->pc = 0x7F433374u;
    // 7F433374: bl      0x7F433578
    {
            ctx->lr = 0x7F433378u;
            goto label_7F433578;
    }

label_7F433378:
    ctx->pc = 0x7F433378u;
    ctx->downcount -= 3;
    // 7F433378: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F43337C:
    ctx->pc = 0x7F43337Cu;
    // 7F43337C: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F433380:
    ctx->pc = 0x7F433380u;
    // 7F433380: bl      0x7F28F800
    {
            ctx->lr = 0x7F433384u;
            ctx->pc = 0x7F28F800u;
            return;
    }

label_7F433384:
    ctx->pc = 0x7F433384u;
    ctx->downcount -= 7;
    // 7F433384: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F433388:
    ctx->pc = 0x7F433388u;
    // 7F433388: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F43338C:
    ctx->pc = 0x7F43338Cu;
    // 7F43338C: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433390:
    ctx->pc = 0x7F433390u;
    // 7F433390: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433394:
    ctx->pc = 0x7F433394u;
    // 7F433394: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F433398:
    ctx->pc = 0x7F433398u;
    // 7F433398: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43339C:
    ctx->pc = 0x7F43339Cu;
    // 7F43339C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F4333A0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F4333A0:
    ctx->pc = 0x7F4333A0u;
    ctx->downcount -= 3;
    // 7F4333A0: stw     r3, 992(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4333A4:
    ctx->pc = 0x7F4333A4u;
    // 7F4333A4: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F4333A8:
    ctx->pc = 0x7F4333A8u;
    // 7F4333A8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F4333ACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F4333AC:
    ctx->pc = 0x7F4333ACu;
    ctx->downcount -= 2;
    // 7F4333AC: cmplwi  r3, 0x0000
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

label_7F4333B0:
    ctx->pc = 0x7F4333B0u;
    // 7F4333B0: bc    4, 2, 0x7F4333BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4333BC;
        }
    }

label_7F4333B4:
    ctx->pc = 0x7F4333B4u;
    ctx->downcount -= 2;
    // 7F4333B4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4333B8:
    ctx->pc = 0x7F4333B8u;
    // 7F4333B8: b       0x7F433564
    {
            goto label_7F433564;
    }

label_7F4333BC:
    ctx->pc = 0x7F4333BCu;
    ctx->downcount -= 1;
    // 7F4333BC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F4333C0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F4333C0:
    ctx->pc = 0x7F4333C0u;
    ctx->downcount -= 6;
    // 7F4333C0: stw     r3, 980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4333C4:
    ctx->pc = 0x7F4333C4u;
    // 7F4333C4: lis     r3, 91
    ctx->gpr[3] = ((u32)(s32)(91) << 16);

label_7F4333C8:
    ctx->pc = 0x7F4333C8u;
    // 7F4333C8: addi    r0, r3, 18804
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18804);

label_7F4333CC:
    ctx->pc = 0x7F4333CCu;
    // 7F4333CC: lwz     r4, 980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4333D0:
    ctx->pc = 0x7F4333D0u;
    // 7F4333D0: cmpw    r4, r0
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

label_7F4333D4:
    ctx->pc = 0x7F4333D4u;
    // 7F4333D4: bc    12, 2, 0x7F4333F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4333F0;
        }
    }

label_7F4333D8:
    ctx->pc = 0x7F4333D8u;
    ctx->downcount -= 1;
    // 7F4333D8: bc    4, 0, 0x7F433404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433404;
        }
    }

label_7F4333DC:
    ctx->pc = 0x7F4333DCu;
    ctx->downcount -= 4;
    // 7F4333DC: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F4333E0:
    ctx->pc = 0x7F4333E0u;
    // 7F4333E0: addi    r0, r3, 19791
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19791);

label_7F4333E4:
    ctx->pc = 0x7F4333E4u;
    // 7F4333E4: cmpw    r4, r0
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

label_7F4333E8:
    ctx->pc = 0x7F4333E8u;
    // 7F4333E8: bc    12, 2, 0x7F4333FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4333FC;
        }
    }

label_7F4333EC:
    ctx->pc = 0x7F4333ECu;
    ctx->downcount -= 1;
    // 7F4333EC: b       0x7F433404
    {
            goto label_7F433404;
    }

label_7F4333F0:
    ctx->pc = 0x7F4333F0u;
    ctx->downcount -= 3;
    // 7F4333F0: li      r0, 2180
    ctx->gpr[0] = (u32)(s32)(2180);

label_7F4333F4:
    ctx->pc = 0x7F4333F4u;
    // 7F4333F4: stw     r0, 996(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4333F8:
    ctx->pc = 0x7F4333F8u;
    // 7F4333F8: b       0x7F433404
    {
            goto label_7F433404;
    }

label_7F4333FC:
    ctx->pc = 0x7F4333FCu;
    ctx->downcount -= 2;
    // 7F4333FC: li      r0, 2181
    ctx->gpr[0] = (u32)(s32)(2181);

label_7F433400:
    ctx->pc = 0x7F433400u;
    // 7F433400: stw     r0, 996(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433404:
    ctx->pc = 0x7F433404u;
    ctx->downcount -= 7;
    // 7F433404: lwz     r0, 996(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433408:
    ctx->pc = 0x7F433408u;
    // 7F433408: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F43340C:
    ctx->pc = 0x7F43340Cu;
    // 7F43340C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F433410:
    ctx->pc = 0x7F433410u;
    // 7F433410: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F433414:
    ctx->pc = 0x7F433414u;
    // 7F433414: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F433418:
    ctx->pc = 0x7F433418u;
    // 7F433418: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F43341C:
    ctx->pc = 0x7F43341Cu;
    // 7F43341C: bl      0x8004F994
    {
            ctx->lr = 0x7F433420u;
            ctx->pc = 0x8004F994u;
            return;
    }

label_7F433420:
    ctx->pc = 0x7F433420u;
    ctx->downcount -= 6;
    // 7F433420: sth     r3, 1000(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1000);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F433424:
    ctx->pc = 0x7F433424u;
    // 7F433424: addi    r28, r29, 432
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(432);

label_7F433428:
    ctx->pc = 0x7F433428u;
    // 7F433428: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F43342C:
    ctx->pc = 0x7F43342Cu;
    // 7F43342C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F433430:
    ctx->pc = 0x7F433430u;
    // 7F433430: lwz     r4, 980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433434:
    ctx->pc = 0x7F433434u;
    // 7F433434: bl      0x7F04272C
    {
            ctx->lr = 0x7F433438u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F433438:
    ctx->pc = 0x7F433438u;
    ctx->downcount -= 3;
    // 7F433438: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F43343C:
    ctx->pc = 0x7F43343Cu;
    // 7F43343C: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F433440:
    ctx->pc = 0x7F433440u;
    // 7F433440: bl      0x7F042B20
    {
            ctx->lr = 0x7F433444u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F433444:
    ctx->pc = 0x7F433444u;
    ctx->downcount -= 12;
    // 7F433444: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F433448:
    ctx->pc = 0x7F433448u;
    // 7F433448: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43344C:
    ctx->pc = 0x7F43344Cu;
    // 7F43344C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F433450:
    ctx->pc = 0x7F433450u;
    // 7F433450: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F433454:
    ctx->pc = 0x7F433454u;
    // 7F433454: lfd     f3, -9656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433454u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9656);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F433458:
    ctx->pc = 0x7F433458u;
    // 7F433458: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F43345C:
    ctx->pc = 0x7F43345Cu;
    // 7F43345C: lfs     f2, -9664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F43345Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F433460:
    ctx->pc = 0x7F433460u;
    // 7F433460: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433464:
    ctx->pc = 0x7F433464u;
    // 7F433464: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F433468:
    ctx->pc = 0x7F433468u;
    // 7F433468: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F43346C:
    ctx->pc = 0x7F43346Cu;
    // 7F43346C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F433470:
    ctx->downcount -= 8;
    // 7F433470: rlwinm r0, r7, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
    }

label_7F433474:
    ctx->pc = 0x7F433474u;
    // 7F433474: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433478:
    // 7F433478: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F43347C:
    ctx->pc = 0x7F43347Cu;
    // 7F43347C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433480:
    ctx->pc = 0x7F433480u;
    // 7F433480: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F433480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F433484:
    ctx->pc = 0x7F433484u;
    // 7F433484: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F433484u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F433488:
    ctx->pc = 0x7F433488u;
    // 7F433488: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F433488u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F43348C:
    // 7F43348C: bc    12, 2, 0x7F433498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433498;
        }
    }

label_7F433490:
    ctx->pc = 0x7F433490u;
    ctx->downcount -= 2;
    // 7F433490: lfs     f1, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433490u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433494:
    // 7F433494: b       0x7F43349C
    {
            goto label_7F43349C;
    }

label_7F433498:
    ctx->pc = 0x7F433498u;
    ctx->downcount -= 1;
    // 7F433498: lfs     f1, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433498u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43349C:
    ctx->downcount -= 10;
    // 7F43349C: rlwinm r0, r7, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000002u;
    }

label_7F4334A0:
    // 7F4334A0: add   r5, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F4334A4:
    // 7F4334A4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F4334A8:
    ctx->pc = 0x7F4334A8u;
    // 7F4334A8: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4334AC:
    ctx->pc = 0x7F4334ACu;
    // 7F4334AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4334B0:
    ctx->pc = 0x7F4334B0u;
    // 7F4334B0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4334B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4334B4:
    ctx->pc = 0x7F4334B4u;
    // 7F4334B4: stfs     f1, 848(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4334B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(848);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4334B8:
    ctx->pc = 0x7F4334B8u;
    // 7F4334B8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F4334B8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F4334BC:
    ctx->pc = 0x7F4334BCu;
    // 7F4334BC: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4334BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F4334C0:
    // 7F4334C0: bc    12, 2, 0x7F4334CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4334CC;
        }
    }

label_7F4334C4:
    ctx->pc = 0x7F4334C4u;
    ctx->downcount -= 2;
    // 7F4334C4: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4334C4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4334C8:
    // 7F4334C8: b       0x7F4334D0
    {
            goto label_7F4334D0;
    }

label_7F4334CC:
    ctx->pc = 0x7F4334CCu;
    ctx->downcount -= 1;
    // 7F4334CC: lfs     f1, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4334CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4334D0:
    ctx->downcount -= 9;
    // 7F4334D0: rlwinm r0, r7, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000004u;
    }

label_7F4334D4:
    ctx->pc = 0x7F4334D4u;
    // 7F4334D4: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4334D8:
    // 7F4334D8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F4334DC:
    ctx->pc = 0x7F4334DCu;
    // 7F4334DC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4334E0:
    ctx->pc = 0x7F4334E0u;
    // 7F4334E0: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F4334E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F4334E4:
    ctx->pc = 0x7F4334E4u;
    // 7F4334E4: stfs     f1, 852(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F4334E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(852);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4334E8:
    ctx->pc = 0x7F4334E8u;
    // 7F4334E8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F4334E8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F4334EC:
    ctx->pc = 0x7F4334ECu;
    // 7F4334EC: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F4334ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F4334F0:
    // 7F4334F0: bc    12, 2, 0x7F4334FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4334FC;
        }
    }

label_7F4334F4:
    ctx->pc = 0x7F4334F4u;
    ctx->downcount -= 2;
    // 7F4334F4: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4334F4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4334F8:
    // 7F4334F8: b       0x7F433500
    {
            goto label_7F433500;
    }

label_7F4334FC:
    ctx->pc = 0x7F4334FCu;
    ctx->downcount -= 1;
    // 7F4334FC: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4334FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433500:
    ctx->pc = 0x7F433500u;
    ctx->downcount -= 4;
    // 7F433500: stfs     f0, 856(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F433500u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(856);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433504:
    // 7F433504: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F433508:
    // 7F433508: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F43350C:
    // 7F43350C: bc    16, 0, 0x7F433470
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433470u;
                return;
            }
            goto label_7F433470;
        }
    }

label_7F433510:
    ctx->pc = 0x7F433510u;
    ctx->downcount -= 3;
    // 7F433510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433514:
    ctx->pc = 0x7F433514u;
    // 7F433514: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F433518:
    ctx->pc = 0x7F433518u;
    // 7F433518: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F43351Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F43351C:
    ctx->pc = 0x7F43351Cu;
    ctx->downcount -= 2;
    // 7F43351C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F433520:
    ctx->pc = 0x7F433520u;
    // 7F433520: bl      0x7F432CC4
    {
            ctx->lr = 0x7F433524u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F432CC4u;
                return;
            }
            goto label_7F432CC4;
    }

label_7F433524:
    ctx->pc = 0x7F433524u;
    ctx->downcount -= 13;
    // 7F433524: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F433528:
    ctx->pc = 0x7F433528u;
    // 7F433528: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F43352C:
    ctx->pc = 0x7F43352Cu;
    // 7F43352C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433530:
    ctx->pc = 0x7F433530u;
    // 7F433530: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F433534:
    ctx->pc = 0x7F433534u;
    // 7F433534: addi    r5, r4, -9656
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9656);

label_7F433538:
    ctx->pc = 0x7F433538u;
    // 7F433538: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F43353C:
    ctx->pc = 0x7F43353Cu;
    // 7F43353C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433540:
    ctx->pc = 0x7F433540u;
    // 7F433540: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F433544:
    ctx->pc = 0x7F433544u;
    // 7F433544: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F433544u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F433548:
    ctx->pc = 0x7F433548u;
    // 7F433548: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F433548u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F43354C:
    ctx->pc = 0x7F43354Cu;
    // 7F43354C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F43354Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F433550:
    ctx->pc = 0x7F433550u;
    // 7F433550: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F433550u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433554:
    ctx->pc = 0x7F433554u;
    // 7F433554: bl      0x7F43319C
    {
            ctx->lr = 0x7F433558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F43319Cu;
                return;
            }
            goto label_7F43319C;
    }

label_7F433558:
    ctx->pc = 0x7F433558u;
    ctx->downcount -= 3;
    // 7F433558: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F43355C:
    ctx->pc = 0x7F43355Cu;
    // 7F43355C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433560:
    ctx->pc = 0x7F433560u;
    // 7F433560: stw     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433564:
    ctx->pc = 0x7F433564u;
    ctx->downcount -= 16;
    // 7F433564: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433568:
    ctx->pc = 0x7F433568u;
    // 7F433568: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F43356C:
    ctx->pc = 0x7F43356Cu;
    // 7F43356C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433570:
    ctx->pc = 0x7F433570u;
    // 7F433570: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F433574:
    ctx->pc = 0x7F433574u;
    // 7F433574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433578:
    ctx->pc = 0x7F433578u;
    ctx->downcount -= 17;
    // 7F433578: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F43357C:
    ctx->pc = 0x7F43357Cu;
    // 7F43357C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433580:
    ctx->pc = 0x7F433580u;
    // 7F433580: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433584:
    ctx->pc = 0x7F433584u;
    // 7F433584: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433588:
    ctx->pc = 0x7F433588u;
    // 7F433588: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F43358C:
    ctx->pc = 0x7F43358Cu;
    // 7F43358C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F433590:
    ctx->pc = 0x7F433590u;
    // 7F433590: bl      0x7F4335CC
    {
            ctx->lr = 0x7F433594u;
            goto label_7F4335CC;
    }

label_7F433594:
    ctx->pc = 0x7F433594u;
    ctx->downcount -= 3;
    // 7F433594: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F433598:
    ctx->pc = 0x7F433598u;
    // 7F433598: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F43359C:
    ctx->pc = 0x7F43359Cu;
    // 7F43359C: bl      0x7F4335CC
    {
            ctx->lr = 0x7F4335A0u;
            goto label_7F4335CC;
    }

label_7F4335A0:
    ctx->pc = 0x7F4335A0u;
    ctx->downcount -= 3;
    // 7F4335A0: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F4335A4:
    ctx->pc = 0x7F4335A4u;
    // 7F4335A4: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F4335A8:
    ctx->pc = 0x7F4335A8u;
    // 7F4335A8: bl      0x7F4335CC
    {
            ctx->lr = 0x7F4335ACu;
            goto label_7F4335CC;
    }

label_7F4335AC:
    ctx->pc = 0x7F4335ACu;
    ctx->downcount -= 3;
    // 7F4335AC: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F4335B0:
    ctx->pc = 0x7F4335B0u;
    // 7F4335B0: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F4335B4:
    ctx->pc = 0x7F4335B4u;
    // 7F4335B4: bl      0x7F4335CC
    {
            ctx->lr = 0x7F4335B8u;
            goto label_7F4335CC;
    }

label_7F4335B8:
    ctx->pc = 0x7F4335B8u;
    ctx->downcount -= 16;
    // 7F4335B8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4335BC:
    ctx->pc = 0x7F4335BCu;
    // 7F4335BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4335C0:
    ctx->pc = 0x7F4335C0u;
    // 7F4335C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4335C4:
    ctx->pc = 0x7F4335C4u;
    // 7F4335C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4335C8:
    ctx->pc = 0x7F4335C8u;
    // 7F4335C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4335CC:
    ctx->pc = 0x7F4335CCu;
    ctx->downcount -= 6;
    // 7F4335CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4335D0:
    ctx->pc = 0x7F4335D0u;
    // 7F4335D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4335D4:
    ctx->pc = 0x7F4335D4u;
    // 7F4335D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4335D8:
    ctx->pc = 0x7F4335D8u;
    // 7F4335D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4335DC:
    ctx->pc = 0x7F4335DCu;
    // 7F4335DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4335E0:
    ctx->pc = 0x7F4335E0u;
    // 7F4335E0: bl      0x7F4335FC
    {
            ctx->lr = 0x7F4335E4u;
            goto label_7F4335FC;
    }

label_7F4335E4:
    ctx->pc = 0x7F4335E4u;
    ctx->downcount -= 7;
    // 7F4335E4: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F4335E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F4335E8:
    ctx->pc = 0x7F4335E8u;
    // 7F4335E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4335EC:
    ctx->pc = 0x7F4335ECu;
    // 7F4335EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4335F0:
    ctx->pc = 0x7F4335F0u;
    // 7F4335F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4335F4:
    ctx->pc = 0x7F4335F4u;
    // 7F4335F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4335F8:
    ctx->pc = 0x7F4335F8u;
    // 7F4335F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4335FC:
    ctx->pc = 0x7F4335FCu;
    ctx->downcount -= 4;
    // 7F4335FC: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F4335FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F4335FCu);
        if (ctx->exception) return;
    }

label_7F433600:
    ctx->pc = 0x7F433600u;
    // 7F433600: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F433600u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F433600u);
        if (ctx->exception) return;
    }

label_7F433604:
    ctx->pc = 0x7F433604u;
    // 7F433604: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F433604u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F433608:
    ctx->pc = 0x7F433608u;
    // 7F433608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43360C:
    ctx->pc = 0x7F43360Cu;
    ctx->downcount -= 21;
    // 7F43360C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433610:
    ctx->pc = 0x7F433610u;
    // 7F433610: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433614:
    ctx->pc = 0x7F433614u;
    // 7F433614: li      r5, 1008
    ctx->gpr[5] = (u32)(s32)(1008);

label_7F433618:
    ctx->pc = 0x7F433618u;
    // 7F433618: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F43361C:
    ctx->pc = 0x7F43361Cu;
    // 7F43361C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433620:
    ctx->pc = 0x7F433620u;
    // 7F433620: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433624:
    ctx->pc = 0x7F433624u;
    // 7F433624: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433628:
    ctx->pc = 0x7F433628u;
    // 7F433628: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F43362C:
    ctx->pc = 0x7F43362Cu;
    // 7F43362C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F433630:
    ctx->pc = 0x7F433630u;
    // 7F433630: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F433634:
    ctx->pc = 0x7F433634u;
    // 7F433634: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F433638u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F433638:
    ctx->pc = 0x7F433638u;
    ctx->downcount -= 2;
    // 7F433638: or.   r31, r3, r3
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

label_7F43363C:
    ctx->pc = 0x7F43363Cu;
    // 7F43363C: bc    12, 2, 0x7F43367C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43367C;
        }
    }

label_7F433640:
    ctx->pc = 0x7F433640u;
    ctx->downcount -= 5;
    // 7F433640: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F433644:
    ctx->pc = 0x7F433644u;
    // 7F433644: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F433648:
    ctx->pc = 0x7F433648u;
    // 7F433648: addi    r4, r4, 12020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12020);

label_7F43364C:
    ctx->pc = 0x7F43364Cu;
    // 7F43364C: addi    r5, r5, 12632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12632);

label_7F433650:
    ctx->pc = 0x7F433650u;
    // 7F433650: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F433654u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F433654:
    ctx->pc = 0x7F433654u;
    ctx->downcount -= 4;
    // 7F433654: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433658:
    ctx->pc = 0x7F433658u;
    // 7F433658: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F43365C:
    ctx->pc = 0x7F43365Cu;
    // 7F43365C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F433660:
    ctx->pc = 0x7F433660u;
    // 7F433660: bl      0x7F4332F8
    {
            ctx->lr = 0x7F433664u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4332F8u;
                return;
            }
            goto label_7F4332F8;
    }

label_7F433664:
    ctx->pc = 0x7F433664u;
    ctx->downcount -= 2;
    // 7F433664: cmpwi   r3, 0
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

label_7F433668:
    ctx->pc = 0x7F433668u;
    // 7F433668: bc    4, 0, 0x7F43367C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43367C;
        }
    }

label_7F43366C:
    ctx->pc = 0x7F43366Cu;
    ctx->downcount -= 2;
    // 7F43366C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433670:
    ctx->pc = 0x7F433670u;
    // 7F433670: bl      0x7F3C8210
    {
            ctx->lr = 0x7F433674u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F433674:
    ctx->pc = 0x7F433674u;
    ctx->downcount -= 2;
    // 7F433674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433678:
    ctx->pc = 0x7F433678u;
    // 7F433678: b       0x7F433680
    {
            goto label_7F433680;
    }

label_7F43367C:
    ctx->pc = 0x7F43367Cu;
    ctx->downcount -= 1;
    // 7F43367C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433680:
    ctx->pc = 0x7F433680u;
    ctx->downcount -= 16;
    // 7F433680: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433684:
    ctx->pc = 0x7F433684u;
    // 7F433684: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433688:
    ctx->pc = 0x7F433688u;
    // 7F433688: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43368C:
    ctx->pc = 0x7F43368Cu;
    // 7F43368C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F433690:
    ctx->pc = 0x7F433690u;
    // 7F433690: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433694:
    ctx->pc = 0x7F433694u;
    ctx->downcount -= 20;
    // 7F433694: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433698:
    ctx->pc = 0x7F433698u;
    // 7F433698: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43369C:
    ctx->pc = 0x7F43369Cu;
    // 7F43369C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4336A0:
    ctx->pc = 0x7F4336A0u;
    // 7F4336A0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4336A4:
    ctx->pc = 0x7F4336A4u;
    // 7F4336A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4336A8:
    ctx->pc = 0x7F4336A8u;
    // 7F4336A8: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4336AC:
    ctx->pc = 0x7F4336ACu;
    // 7F4336AC: lwz     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F4336B0:
    ctx->pc = 0x7F4336B0u;
    // 7F4336B0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4336B4:
    ctx->pc = 0x7F4336B4u;
    // 7F4336B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F4336B8:
    ctx->pc = 0x7F4336B8u;
    // 7F4336B8: bl      0x7F43388C
    {
            ctx->lr = 0x7F4336BCu;
            goto label_7F43388C;
    }

label_7F4336BC:
    ctx->pc = 0x7F4336BCu;
    ctx->downcount -= 23;
    // 7F4336BC: lwz     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4336C0:
    ctx->pc = 0x7F4336C0u;
    // 7F4336C0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F4336C4:
    ctx->pc = 0x7F4336C4u;
    // 7F4336C4: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4336C8:
    ctx->pc = 0x7F4336C8u;
    // 7F4336C8: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4336CC:
    ctx->pc = 0x7F4336CCu;
    // 7F4336CC: subfic  r0, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F4336D0:
    ctx->pc = 0x7F4336D0u;
    // 7F4336D0: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F4336D4:
    ctx->pc = 0x7F4336D4u;
    // 7F4336D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F4336D8:
    ctx->pc = 0x7F4336D8u;
    // 7F4336D8: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F4336DC:
    ctx->pc = 0x7F4336DCu;
    // 7F4336DC: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F4336E0:
    ctx->pc = 0x7F4336E0u;
    // 7F4336E0: lwz     r5, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F4336E4:
    ctx->pc = 0x7F4336E4u;
    // 7F4336E4: lwz     r6, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F4336E8:
    ctx->pc = 0x7F4336E8u;
    // 7F4336E8: lwz     r3, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4336EC:
    ctx->pc = 0x7F4336ECu;
    // 7F4336EC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4336F0:
    ctx->pc = 0x7F4336F0u;
    // 7F4336F0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4336F4:
    ctx->pc = 0x7F4336F4u;
    // 7F4336F4: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4336F8:
    ctx->pc = 0x7F4336F8u;
    // 7F4336F8: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4336FC:
    ctx->pc = 0x7F4336FCu;
    // 7F4336FC: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433700:
    ctx->pc = 0x7F433700u;
    // 7F433700: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433704:
    ctx->pc = 0x7F433704u;
    // 7F433704: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433708:
    ctx->pc = 0x7F433708u;
    // 7F433708: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43370C:
    ctx->pc = 0x7F43370Cu;
    // 7F43370C: lha     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433710:
    ctx->pc = 0x7F433710u;
    // 7F433710: cmpwi   r0, 85
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(85);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F433714:
    ctx->pc = 0x7F433714u;
    // 7F433714: bc    4, 1, 0x7F433724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433724;
        }
    }

label_7F433718:
    ctx->pc = 0x7F433718u;
    ctx->downcount -= 2;
    // 7F433718: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F43371C:
    ctx->pc = 0x7F43371Cu;
    // 7F43371C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F433720u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F433720:
    ctx->pc = 0x7F433720u;
    ctx->downcount -= 1;
    // 7F433720: b       0x7F433878
    {
            goto label_7F433878;
    }

label_7F433724:
    ctx->pc = 0x7F433724u;
    ctx->downcount -= 2;
    // 7F433724: cmpwi   r0, 83
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(83);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F433728:
    ctx->pc = 0x7F433728u;
    // 7F433728: bc    4, 1, 0x7F433758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433758;
        }
    }

label_7F43372C:
    ctx->pc = 0x7F43372Cu;
    ctx->downcount -= 11;
    // 7F43372C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433730:
    ctx->pc = 0x7F433730u;
    // 7F433730: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433730u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433734:
    ctx->pc = 0x7F433734u;
    // 7F433734: lfs     f0, -9624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433734u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433738:
    ctx->pc = 0x7F433738u;
    // 7F433738: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F43373C:
    ctx->pc = 0x7F43373Cu;
    // 7F43373C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F43373Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F433740:
    ctx->pc = 0x7F433740u;
    // 7F433740: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433740u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433744:
    ctx->pc = 0x7F433744u;
    // 7F433744: lha     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433748:
    ctx->pc = 0x7F433748u;
    // 7F433748: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F43374C:
    ctx->pc = 0x7F43374Cu;
    // 7F43374C: sth     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F433750:
    ctx->pc = 0x7F433750u;
    // 7F433750: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433754:
    ctx->pc = 0x7F433754u;
    // 7F433754: b       0x7F433878
    {
            goto label_7F433878;
    }

label_7F433758:
    ctx->pc = 0x7F433758u;
    ctx->downcount -= 2;
    // 7F433758: cmpwi   r0, 81
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(81);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F43375C:
    ctx->pc = 0x7F43375Cu;
    // 7F43375C: bc    4, 1, 0x7F43378C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43378C;
        }
    }

label_7F433760:
    ctx->pc = 0x7F433760u;
    ctx->downcount -= 11;
    // 7F433760: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433764:
    ctx->pc = 0x7F433764u;
    // 7F433764: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433764u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433768:
    ctx->pc = 0x7F433768u;
    // 7F433768: lfs     f0, -9624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433768u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43376C:
    ctx->pc = 0x7F43376Cu;
    // 7F43376C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F433770:
    ctx->pc = 0x7F433770u;
    // 7F433770: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F433770u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F433774:
    ctx->pc = 0x7F433774u;
    // 7F433774: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433774u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433778:
    ctx->pc = 0x7F433778u;
    // 7F433778: lha     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F43377C:
    ctx->pc = 0x7F43377Cu;
    // 7F43377C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F433780:
    ctx->pc = 0x7F433780u;
    // 7F433780: sth     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F433784:
    ctx->pc = 0x7F433784u;
    // 7F433784: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433788:
    ctx->pc = 0x7F433788u;
    // 7F433788: b       0x7F433878
    {
            goto label_7F433878;
    }

label_7F43378C:
    ctx->pc = 0x7F43378Cu;
    ctx->downcount -= 2;
    // 7F43378C: cmpwi   r0, 79
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(79);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F433790:
    ctx->pc = 0x7F433790u;
    // 7F433790: bc    4, 1, 0x7F4337E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4337E4;
        }
    }

label_7F433794:
    ctx->pc = 0x7F433794u;
    ctx->downcount -= 11;
    // 7F433794: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F433798:
    ctx->pc = 0x7F433798u;
    // 7F433798: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433798u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F43379C:
    ctx->pc = 0x7F43379Cu;
    // 7F43379C: lfs     f0, -9624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F43379Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4337A0:
    ctx->pc = 0x7F4337A0u;
    // 7F4337A0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4337A0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4337A4:
    ctx->pc = 0x7F4337A4u;
    // 7F4337A4: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4337A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F4337A8:
    ctx->pc = 0x7F4337A8u;
    // 7F4337A8: lha     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F4337AC:
    ctx->pc = 0x7F4337ACu;
    // 7F4337AC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F4337B0:
    ctx->pc = 0x7F4337B0u;
    // 7F4337B0: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4337B4:
    ctx->pc = 0x7F4337B4u;
    // 7F4337B4: lha     r0, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F4337B8:
    ctx->pc = 0x7F4337B8u;
    // 7F4337B8: cmpwi   r0, 0
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

label_7F4337BC:
    ctx->pc = 0x7F4337BCu;
    // 7F4337BC: bc    4, 2, 0x7F433878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433878;
        }
    }

label_7F4337C0:
    ctx->pc = 0x7F4337C0u;
    ctx->downcount -= 9;
    // 7F4337C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F4337C4:
    ctx->pc = 0x7F4337C4u;
    // 7F4337C4: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F4337C8:
    ctx->pc = 0x7F4337C8u;
    // 7F4337C8: sth     r0, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F4337CC:
    ctx->pc = 0x7F4337CCu;
    // 7F4337CC: li      r4, 243
    ctx->gpr[4] = (u32)(s32)(243);

label_7F4337D0:
    ctx->pc = 0x7F4337D0u;
    // 7F4337D0: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F4337D4:
    ctx->pc = 0x7F4337D4u;
    // 7F4337D4: stb     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F4337D8:
    ctx->pc = 0x7F4337D8u;
    // 7F4337D8: stb     r4, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F4337DC:
    ctx->pc = 0x7F4337DCu;
    // 7F4337DC: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F4337E0:
    ctx->pc = 0x7F4337E0u;
    // 7F4337E0: b       0x7F433878
    {
            goto label_7F433878;
    }

label_7F4337E4:
    ctx->pc = 0x7F4337E4u;
    ctx->downcount -= 2;
    // 7F4337E4: cmpwi   r0, 30
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

label_7F4337E8:
    ctx->pc = 0x7F4337E8u;
    // 7F4337E8: bc    4, 1, 0x7F433810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433810;
        }
    }

label_7F4337EC:
    ctx->pc = 0x7F4337ECu;
    ctx->downcount -= 9;
    // 7F4337EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F4337F0:
    ctx->pc = 0x7F4337F0u;
    // 7F4337F0: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4337F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F4337F4:
    ctx->pc = 0x7F4337F4u;
    // 7F4337F4: lfs     f0, -9624(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F4337F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F4337F8:
    ctx->pc = 0x7F4337F8u;
    // 7F4337F8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F4337F8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F4337FC:
    ctx->pc = 0x7F4337FCu;
    // 7F4337FC: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F4337FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433800:
    ctx->pc = 0x7F433800u;
    // 7F433800: lha     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433804:
    ctx->pc = 0x7F433804u;
    // 7F433804: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F433808:
    ctx->pc = 0x7F433808u;
    // 7F433808: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F43380C:
    ctx->pc = 0x7F43380Cu;
    // 7F43380C: b       0x7F433878
    {
            goto label_7F433878;
    }

label_7F433810:
    ctx->pc = 0x7F433810u;
    ctx->downcount -= 2;
    // 7F433810: extsh. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F433814:
    ctx->pc = 0x7F433814u;
    // 7F433814: bc    12, 0, 0x7F433878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433878;
        }
    }

label_7F433818:
    ctx->pc = 0x7F433818u;
    ctx->downcount -= 24;
    // 7F433818: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F43381C:
    ctx->pc = 0x7F43381Cu;
    // 7F43381C: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F43381Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433820:
    ctx->pc = 0x7F433820u;
    // 7F433820: lfs     f0, -9620(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F433820u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F433824:
    ctx->pc = 0x7F433824u;
    // 7F433824: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F433824u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F433828:
    ctx->pc = 0x7F433828u;
    // 7F433828: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F433828u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F43382C:
    ctx->pc = 0x7F43382Cu;
    // 7F43382C: lbz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F433830:
    ctx->pc = 0x7F433830u;
    // 7F433830: lha     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433834:
    ctx->pc = 0x7F433834u;
    // 7F433834: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F433838:
    ctx->pc = 0x7F433838u;
    // 7F433838: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F43383C:
    ctx->pc = 0x7F43383Cu;
    // 7F43383C: lbz     r4, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F433840:
    ctx->pc = 0x7F433840u;
    // 7F433840: lha     r0, 58(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433844:
    ctx->pc = 0x7F433844u;
    // 7F433844: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F433848:
    ctx->pc = 0x7F433848u;
    // 7F433848: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F43384C:
    ctx->pc = 0x7F43384Cu;
    // 7F43384C: lbz     r4, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F433850:
    ctx->pc = 0x7F433850u;
    // 7F433850: lha     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433854:
    ctx->pc = 0x7F433854u;
    // 7F433854: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F433858:
    ctx->pc = 0x7F433858u;
    // 7F433858: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F43385C:
    ctx->pc = 0x7F43385Cu;
    // 7F43385C: lha     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433860:
    ctx->pc = 0x7F433860u;
    // 7F433860: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F433864:
    ctx->pc = 0x7F433864u;
    // 7F433864: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433868:
    ctx->pc = 0x7F433868u;
    // 7F433868: sth     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F43386C:
    ctx->pc = 0x7F43386Cu;
    // 7F43386C: lha     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433870:
    ctx->pc = 0x7F433870u;
    // 7F433870: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F433874:
    ctx->pc = 0x7F433874u;
    // 7F433874: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433878:
    ctx->pc = 0x7F433878u;
    ctx->downcount -= 16;
    // 7F433878: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F43387C:
    ctx->pc = 0x7F43387Cu;
    // 7F43387C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433880:
    ctx->pc = 0x7F433880u;
    // 7F433880: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433884:
    ctx->pc = 0x7F433884u;
    // 7F433884: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F433888:
    ctx->pc = 0x7F433888u;
    // 7F433888: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F43388C:
    ctx->pc = 0x7F43388Cu;
    ctx->downcount -= 7;
    // 7F43388C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433890:
    ctx->pc = 0x7F433890u;
    // 7F433890: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433894:
    ctx->pc = 0x7F433894u;
    // 7F433894: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433898:
    ctx->pc = 0x7F433898u;
    // 7F433898: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F43389C:
    ctx->pc = 0x7F43389Cu;
    // 7F43389C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4338A0:
    ctx->pc = 0x7F4338A0u;
    // 7F4338A0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4338A4:
    ctx->pc = 0x7F4338A4u;
    // 7F4338A4: bl      0x7F01B234
    {
            ctx->lr = 0x7F4338A8u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F4338A8:
    ctx->pc = 0x7F4338A8u;
    ctx->downcount -= 7;
    // 7F4338A8: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F4338AC:
    ctx->pc = 0x7F4338ACu;
    // 7F4338AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4338B0:
    ctx->pc = 0x7F4338B0u;
    // 7F4338B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4338B4:
    ctx->pc = 0x7F4338B4u;
    // 7F4338B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4338B8:
    ctx->pc = 0x7F4338B8u;
    // 7F4338B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4338BC:
    ctx->pc = 0x7F4338BCu;
    // 7F4338BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4338C0:
    ctx->pc = 0x7F4338C0u;
    ctx->downcount -= 6;
    // 7F4338C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4338C4:
    ctx->pc = 0x7F4338C4u;
    // 7F4338C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4338C8:
    ctx->pc = 0x7F4338C8u;
    // 7F4338C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4338CC:
    ctx->pc = 0x7F4338CCu;
    // 7F4338CC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F4338D0:
    ctx->pc = 0x7F4338D0u;
    // 7F4338D0: cmplwi  r3, 0x0000
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

label_7F4338D4:
    ctx->pc = 0x7F4338D4u;
    // 7F4338D4: bc    12, 2, 0x7F4338DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F4338DC;
        }
    }

label_7F4338D8:
    ctx->pc = 0x7F4338D8u;
    ctx->downcount -= 1;
    // 7F4338D8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F4338DCu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F4338DC:
    ctx->pc = 0x7F4338DCu;
    ctx->downcount -= 5;
    // 7F4338DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4338E0:
    ctx->pc = 0x7F4338E0u;
    // 7F4338E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4338E4:
    ctx->pc = 0x7F4338E4u;
    // 7F4338E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4338E8:
    ctx->pc = 0x7F4338E8u;
    // 7F4338E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4338EC:
    ctx->pc = 0x7F4338ECu;
    ctx->downcount -= 51;
    // 7F4338EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4338F0:
    ctx->pc = 0x7F4338F0u;
    // 7F4338F0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F4338F4:
    ctx->pc = 0x7F4338F4u;
    // 7F4338F4: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F4338F8:
    ctx->pc = 0x7F4338F8u;
    // 7F4338F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F4338FC:
    ctx->pc = 0x7F4338FCu;
    // 7F4338FC: lwz     r10, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F433900:
    ctx->pc = 0x7F433900u;
    // 7F433900: lwz     r11, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F433904:
    ctx->pc = 0x7F433904u;
    // 7F433904: lwz     r12, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F433908:
    ctx->pc = 0x7F433908u;
    // 7F433908: lwz     r31, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F43390C:
    ctx->pc = 0x7F43390Cu;
    // 7F43390C: sth     r9, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F433910:
    ctx->pc = 0x7F433910u;
    // 7F433910: lwz     r8, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F433914:
    ctx->pc = 0x7F433914u;
    // 7F433914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433918:
    ctx->pc = 0x7F433918u;
    // 7F433918: lwz     r7, 48(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F43391C:
    ctx->pc = 0x7F43391Cu;
    // 7F43391C: lwz     r4, 52(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433920:
    ctx->pc = 0x7F433920u;
    // 7F433920: stw     r7, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F433924:
    ctx->pc = 0x7F433924u;
    // 7F433924: stw     r4, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433928:
    ctx->pc = 0x7F433928u;
    // 7F433928: lwz     r7, 56(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F43392C:
    ctx->pc = 0x7F43392Cu;
    // 7F43392C: lwz     r4, 60(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433930:
    ctx->pc = 0x7F433930u;
    // 7F433930: stw     r7, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F433934:
    ctx->pc = 0x7F433934u;
    // 7F433934: stw     r4, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433938:
    ctx->pc = 0x7F433938u;
    // 7F433938: lfs     f0, 4(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F433938u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F43393C:
    ctx->pc = 0x7F43393Cu;
    // 7F43393C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F43393Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F433940:
    ctx->pc = 0x7F433940u;
    // 7F433940: stfs     f0, 4(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F433940u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F433944:
    ctx->pc = 0x7F433944u;
    // 7F433944: lwz     r7, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F433948:
    ctx->pc = 0x7F433948u;
    // 7F433948: lwz     r4, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F43394C:
    ctx->pc = 0x7F43394Cu;
    // 7F43394C: stw     r7, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F433950:
    ctx->pc = 0x7F433950u;
    // 7F433950: stw     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433954:
    ctx->pc = 0x7F433954u;
    // 7F433954: lwz     r7, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F433958:
    ctx->pc = 0x7F433958u;
    // 7F433958: lwz     r4, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F43395C:
    ctx->pc = 0x7F43395Cu;
    // 7F43395C: stw     r7, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F433960:
    ctx->pc = 0x7F433960u;
    // 7F433960: stw     r4, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433964:
    ctx->pc = 0x7F433964u;
    // 7F433964: sth     r9, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F433968:
    ctx->pc = 0x7F433968u;
    // 7F433968: sth     r9, 6(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F43396C:
    ctx->pc = 0x7F43396Cu;
    // 7F43396C: sth     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433970:
    ctx->pc = 0x7F433970u;
    // 7F433970: sth     r0, 14(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433974:
    ctx->pc = 0x7F433974u;
    // 7F433974: sth     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F433978:
    ctx->pc = 0x7F433978u;
    // 7F433978: sth     r9, 10(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F43397C:
    ctx->pc = 0x7F43397Cu;
    // 7F43397C: stb     r5, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F433980:
    ctx->pc = 0x7F433980u;
    // 7F433980: stb     r9, 1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F433984:
    ctx->pc = 0x7F433984u;
    // 7F433984: stb     r9, 2(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F433988:
    ctx->pc = 0x7F433988u;
    // 7F433988: stb     r6, 3(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F43398C:
    ctx->pc = 0x7F43398Cu;
    // 7F43398C: lwz     r4, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433990:
    ctx->pc = 0x7F433990u;
    // 7F433990: lwz     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433994:
    ctx->pc = 0x7F433994u;
    // 7F433994: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F433998:
    ctx->pc = 0x7F433998u;
    // 7F433998: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F43399C:
    ctx->pc = 0x7F43399Cu;
    // 7F43399C: lwz     r4, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F4339A0:
    ctx->pc = 0x7F4339A0u;
    // 7F4339A0: lwz     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4339A4:
    ctx->pc = 0x7F4339A4u;
    // 7F4339A4: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F4339A8:
    ctx->pc = 0x7F4339A8u;
    // 7F4339A8: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4339AC:
    ctx->pc = 0x7F4339ACu;
    // 7F4339AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4339B0:
    ctx->pc = 0x7F4339B0u;
    // 7F4339B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F4339B4:
    ctx->pc = 0x7F4339B4u;
    // 7F4339B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4339B8:
    ctx->pc = 0x7F4339B8u;
    ctx->downcount -= 19;
    // 7F4339B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4339BC:
    ctx->pc = 0x7F4339BCu;
    // 7F4339BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4339C0:
    ctx->pc = 0x7F4339C0u;
    // 7F4339C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4339C4:
    ctx->pc = 0x7F4339C4u;
    // 7F4339C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4339C8:
    ctx->pc = 0x7F4339C8u;
    // 7F4339C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4339CC:
    ctx->pc = 0x7F4339CCu;
    // 7F4339CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F4339D0:
    ctx->pc = 0x7F4339D0u;
    // 7F4339D0: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4339D4:
    ctx->pc = 0x7F4339D4u;
    // 7F4339D4: cmplwi  r0, 0x0000
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

label_7F4339D8:
    ctx->pc = 0x7F4339D8u;
    // 7F4339D8: bc    4, 2, 0x7F4339E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F4339E4;
        }
    }

label_7F4339DC:
    ctx->pc = 0x7F4339DCu;
    ctx->downcount -= 2;
    // 7F4339DC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F4339E0:
    ctx->pc = 0x7F4339E0u;
    // 7F4339E0: b       0x7F433A7C
    {
            goto label_7F433A7C;
    }

label_7F4339E4:
    ctx->pc = 0x7F4339E4u;
    ctx->downcount -= 6;
    // 7F4339E4: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F4339E8:
    ctx->pc = 0x7F4339E8u;
    // 7F4339E8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F4339EC:
    ctx->pc = 0x7F4339ECu;
    // 7F4339EC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F4339F0:
    ctx->pc = 0x7F4339F0u;
    // 7F4339F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F4339F4:
    ctx->pc = 0x7F4339F4u;
    // 7F4339F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F4339F8:
    ctx->pc = 0x7F4339F8u;
    // 7F4339F8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F4339FCu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F4339FC:
    ctx->pc = 0x7F4339FCu;
    ctx->downcount -= 3;
    // 7F4339FC: or.   r31, r3, r3
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

label_7F433A00:
    ctx->pc = 0x7F433A00u;
    // 7F433A00: stw     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F433A04:
    ctx->pc = 0x7F433A04u;
    // 7F433A04: bc    4, 2, 0x7F433A10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433A10;
        }
    }

label_7F433A08:
    ctx->pc = 0x7F433A08u;
    ctx->downcount -= 2;
    // 7F433A08: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F433A0C:
    ctx->pc = 0x7F433A0Cu;
    // 7F433A0C: b       0x7F433A7C
    {
            goto label_7F433A7C;
    }

label_7F433A10:
    ctx->pc = 0x7F433A10u;
    ctx->downcount -= 3;
    // 7F433A10: lis     r3, 20
    ctx->gpr[3] = ((u32)(s32)(20) << 16);

label_7F433A14:
    ctx->pc = 0x7F433A14u;
    // 7F433A14: addi    r3, r3, 3061
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3061);

label_7F433A18:
    ctx->pc = 0x7F433A18u;
    // 7F433A18: bl      0x7F3B6420
    {
            ctx->lr = 0x7F433A1Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F433A1C:
    ctx->pc = 0x7F433A1Cu;
    ctx->downcount -= 2;
    // 7F433A1C: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F433A20:
    ctx->pc = 0x7F433A20u;
    // 7F433A20: bc    4, 2, 0x7F433A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433A2C;
        }
    }

label_7F433A24:
    ctx->pc = 0x7F433A24u;
    ctx->downcount -= 2;
    // 7F433A24: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F433A28:
    ctx->pc = 0x7F433A28u;
    // 7F433A28: b       0x7F433A7C
    {
            goto label_7F433A7C;
    }

label_7F433A2C:
    ctx->pc = 0x7F433A2Cu;
    ctx->downcount -= 2;
    // 7F433A2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433A30:
    ctx->pc = 0x7F433A30u;
    // 7F433A30: bl      0x7F3C2534
    {
            ctx->lr = 0x7F433A34u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F433A34:
    ctx->pc = 0x7F433A34u;
    ctx->downcount -= 11;
    // 7F433A34: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F433A38:
    ctx->pc = 0x7F433A38u;
    // 7F433A38: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F433A3C:
    ctx->pc = 0x7F433A3Cu;
    // 7F433A3C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433A40:
    ctx->pc = 0x7F433A40u;
    // 7F433A40: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F433A44:
    ctx->pc = 0x7F433A44u;
    // 7F433A44: lfs     f1, -9616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F433A44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F433A48:
    ctx->pc = 0x7F433A48u;
    // 7F433A48: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F433A4C:
    ctx->pc = 0x7F433A4Cu;
    // 7F433A4C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433A50:
    ctx->pc = 0x7F433A50u;
    // 7F433A50: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433A54:
    ctx->pc = 0x7F433A54u;
    // 7F433A54: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F433A58:
    ctx->pc = 0x7F433A58u;
    // 7F433A58: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F433A5C:
    ctx->pc = 0x7F433A5Cu;
    // 7F433A5C: bl      0x7F4338EC
    {
            ctx->lr = 0x7F433A60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4338ECu;
                return;
            }
            goto label_7F4338EC;
    }

label_7F433A60:
    ctx->pc = 0x7F433A60u;
    ctx->downcount -= 7;
    // 7F433A60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F433A64:
    ctx->pc = 0x7F433A64u;
    // 7F433A64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F433A68:
    ctx->pc = 0x7F433A68u;
    // 7F433A68: sth     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F433A6C:
    ctx->pc = 0x7F433A6Cu;
    // 7F433A6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433A70:
    ctx->pc = 0x7F433A70u;
    // 7F433A70: sth     r0, 58(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433A74:
    ctx->pc = 0x7F433A74u;
    // 7F433A74: sth     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F433A78:
    ctx->pc = 0x7F433A78u;
    // 7F433A78: stw     r30, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F433A7C:
    ctx->pc = 0x7F433A7Cu;
    ctx->downcount -= 16;
    // 7F433A7C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433A80:
    ctx->pc = 0x7F433A80u;
    // 7F433A80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433A84:
    ctx->pc = 0x7F433A84u;
    // 7F433A84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433A88:
    ctx->pc = 0x7F433A88u;
    // 7F433A88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F433A8C:
    ctx->pc = 0x7F433A8Cu;
    // 7F433A8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433A90:
    ctx->pc = 0x7F433A90u;
    ctx->downcount -= 21;
    // 7F433A90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433A94:
    ctx->pc = 0x7F433A94u;
    // 7F433A94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433A98:
    ctx->pc = 0x7F433A98u;
    // 7F433A98: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F433A9C:
    ctx->pc = 0x7F433A9Cu;
    // 7F433A9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F433AA0:
    ctx->pc = 0x7F433AA0u;
    // 7F433AA0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433AA4:
    ctx->pc = 0x7F433AA4u;
    // 7F433AA4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433AA8:
    ctx->pc = 0x7F433AA8u;
    // 7F433AA8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433AAC:
    ctx->pc = 0x7F433AACu;
    // 7F433AAC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F433AB0:
    ctx->pc = 0x7F433AB0u;
    // 7F433AB0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F433AB4:
    ctx->pc = 0x7F433AB4u;
    // 7F433AB4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F433AB8:
    ctx->pc = 0x7F433AB8u;
    // 7F433AB8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F433ABCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F433ABC:
    ctx->pc = 0x7F433ABCu;
    ctx->downcount -= 2;
    // 7F433ABC: or.   r31, r3, r3
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

label_7F433AC0:
    ctx->pc = 0x7F433AC0u;
    // 7F433AC0: bc    12, 2, 0x7F433B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433B28;
        }
    }

label_7F433AC4:
    ctx->pc = 0x7F433AC4u;
    ctx->downcount -= 6;
    // 7F433AC4: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F433AC8:
    ctx->pc = 0x7F433AC8u;
    // 7F433AC8: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F433ACC:
    ctx->pc = 0x7F433ACCu;
    // 7F433ACC: stw     r29, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F433AD0:
    ctx->pc = 0x7F433AD0u;
    // 7F433AD0: addi    r4, r4, 13972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13972);

label_7F433AD4:
    ctx->pc = 0x7F433AD4u;
    // 7F433AD4: addi    r5, r5, 14528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14528);

label_7F433AD8:
    ctx->pc = 0x7F433AD8u;
    // 7F433AD8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F433ADCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F433ADC:
    ctx->pc = 0x7F433ADCu;
    ctx->downcount -= 13;
    // 7F433ADC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433AE0:
    ctx->pc = 0x7F433AE0u;
    // 7F433AE0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F433AE4:
    ctx->pc = 0x7F433AE4u;
    // 7F433AE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F433AE8:
    ctx->pc = 0x7F433AE8u;
    // 7F433AE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433AEC:
    ctx->pc = 0x7F433AECu;
    // 7F433AEC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F433AF0:
    ctx->pc = 0x7F433AF0u;
    // 7F433AF0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F433AF4:
    ctx->pc = 0x7F433AF4u;
    // 7F433AF4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F433AF8:
    ctx->pc = 0x7F433AF8u;
    // 7F433AF8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F433AFC:
    ctx->pc = 0x7F433AFCu;
    // 7F433AFC: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F433B00:
    ctx->pc = 0x7F433B00u;
    // 7F433B00: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F433B04:
    ctx->pc = 0x7F433B04u;
    // 7F433B04: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F433B08:
    ctx->pc = 0x7F433B08u;
    // 7F433B08: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433B0C:
    ctx->pc = 0x7F433B0Cu;
    // 7F433B0C: bl      0x7F4339B8
    {
            ctx->lr = 0x7F433B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F4339B8u;
                return;
            }
            goto label_7F4339B8;
    }

label_7F433B10:
    ctx->pc = 0x7F433B10u;
    ctx->downcount -= 2;
    // 7F433B10: cmpwi   r3, 0
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

label_7F433B14:
    ctx->pc = 0x7F433B14u;
    // 7F433B14: bc    4, 0, 0x7F433B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433B28;
        }
    }

label_7F433B18:
    ctx->pc = 0x7F433B18u;
    ctx->downcount -= 2;
    // 7F433B18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433B1C:
    ctx->pc = 0x7F433B1Cu;
    // 7F433B1C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F433B20u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F433B20:
    ctx->pc = 0x7F433B20u;
    ctx->downcount -= 2;
    // 7F433B20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433B24:
    ctx->pc = 0x7F433B24u;
    // 7F433B24: b       0x7F433B2C
    {
            goto label_7F433B2C;
    }

label_7F433B28:
    ctx->pc = 0x7F433B28u;
    ctx->downcount -= 1;
    // 7F433B28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433B2C:
    ctx->pc = 0x7F433B2Cu;
    ctx->downcount -= 16;
    // 7F433B2C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433B30:
    ctx->pc = 0x7F433B30u;
    // 7F433B30: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433B34:
    ctx->pc = 0x7F433B34u;
    // 7F433B34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433B38:
    ctx->pc = 0x7F433B38u;
    // 7F433B38: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F433B3C:
    ctx->pc = 0x7F433B3Cu;
    // 7F433B3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433B40:
    ctx->pc = 0x7F433B40u;
    ctx->downcount -= 19;
    // 7F433B40: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433B44:
    ctx->pc = 0x7F433B44u;
    // 7F433B44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433B48:
    ctx->pc = 0x7F433B48u;
    // 7F433B48: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F433B4C:
    ctx->pc = 0x7F433B4Cu;
    // 7F433B4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433B50:
    ctx->pc = 0x7F433B50u;
    // 7F433B50: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433B54:
    ctx->pc = 0x7F433B54u;
    // 7F433B54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433B58:
    ctx->pc = 0x7F433B58u;
    // 7F433B58: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433B5C:
    ctx->pc = 0x7F433B5Cu;
    // 7F433B5C: cmpwi   r0, 0
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

label_7F433B60:
    ctx->pc = 0x7F433B60u;
    // 7F433B60: bc    4, 2, 0x7F433D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433D7C;
        }
    }

label_7F433B64:
    ctx->pc = 0x7F433B64u;
    ctx->downcount -= 4;
    // 7F433B64: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F433B68:
    ctx->pc = 0x7F433B68u;
    // 7F433B68: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433B6C:
    ctx->pc = 0x7F433B6Cu;
    // 7F433B6C: rlwinm. r0, r0, 0, 4, 4
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

label_7F433B70:
    ctx->pc = 0x7F433B70u;
    // 7F433B70: bc    4, 2, 0x7F433D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433D7C;
        }
    }

label_7F433B74:
    ctx->pc = 0x7F433B74u;
    ctx->downcount -= 14;
    // 7F433B74: lwz     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F433B78:
    ctx->pc = 0x7F433B78u;
    // 7F433B78: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F433B7C:
    ctx->pc = 0x7F433B7Cu;
    // 7F433B7C: lis     r3, 150
    ctx->gpr[3] = ((u32)(s32)(150) << 16);

label_7F433B80:
    ctx->pc = 0x7F433B80u;
    // 7F433B80: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F433B84:
    ctx->pc = 0x7F433B84u;
    // 7F433B84: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F433B88:
    ctx->pc = 0x7F433B88u;
    // 7F433B88: addi    r5, r4, -5664
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5664);

label_7F433B8C:
    ctx->pc = 0x7F433B8Cu;
    // 7F433B8C: stw     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433B90:
    ctx->pc = 0x7F433B90u;
    // 7F433B90: addi    r4, r3, -28282
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28282);

label_7F433B94:
    ctx->pc = 0x7F433B94u;
    // 7F433B94: lwz     r31, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F433B98:
    ctx->pc = 0x7F433B98u;
    // 7F433B98: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433B9C:
    ctx->pc = 0x7F433B9Cu;
    // 7F433B9C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F433BA0:
    ctx->pc = 0x7F433BA0u;
    // 7F433BA0: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433BA4:
    ctx->pc = 0x7F433BA4u;
    // 7F433BA4: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433BA8:
    ctx->pc = 0x7F433BA8u;
    // 7F433BA8: bl      0x7F03C214
    {
            ctx->lr = 0x7F433BACu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F433BAC:
    ctx->pc = 0x7F433BACu;
    ctx->downcount -= 2;
    // 7F433BAC: cmpwi   r3, 0
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

label_7F433BB0:
    ctx->pc = 0x7F433BB0u;
    // 7F433BB0: bc    12, 2, 0x7F433BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433BC4;
        }
    }

label_7F433BB4:
    ctx->pc = 0x7F433BB4u;
    ctx->downcount -= 4;
    // 7F433BB4: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433BB8:
    ctx->pc = 0x7F433BB8u;
    // 7F433BB8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F433BBC:
    ctx->pc = 0x7F433BBCu;
    // 7F433BBC: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433BC0:
    ctx->pc = 0x7F433BC0u;
    // 7F433BC0: b       0x7F433BD0
    {
            goto label_7F433BD0;
    }

label_7F433BC4:
    ctx->pc = 0x7F433BC4u;
    ctx->downcount -= 3;
    // 7F433BC4: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433BC8:
    ctx->pc = 0x7F433BC8u;
    // 7F433BC8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F433BCC:
    ctx->pc = 0x7F433BCCu;
    // 7F433BCC: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433BD0:
    ctx->pc = 0x7F433BD0u;
    ctx->downcount -= 6;
    // 7F433BD0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F433BD4:
    ctx->pc = 0x7F433BD4u;
    // 7F433BD4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F433BD8:
    ctx->pc = 0x7F433BD8u;
    // 7F433BD8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433BDC:
    ctx->pc = 0x7F433BDCu;
    // 7F433BDC: lha     r0, 318(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(318);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F433BE0:
    ctx->pc = 0x7F433BE0u;
    // 7F433BE0: cmpwi   r0, 1
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

label_7F433BE4:
    ctx->pc = 0x7F433BE4u;
    // 7F433BE4: bc    12, 2, 0x7F433BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433BF0;
        }
    }

label_7F433BE8:
    ctx->pc = 0x7F433BE8u;
    ctx->downcount -= 2;
    // 7F433BE8: cmpwi   r0, 2
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

label_7F433BEC:
    ctx->pc = 0x7F433BECu;
    // 7F433BEC: bc    4, 2, 0x7F433C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433C70;
        }
    }

label_7F433BF0:
    ctx->pc = 0x7F433BF0u;
    ctx->downcount -= 4;
    // 7F433BF0: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F433BF4:
    ctx->pc = 0x7F433BF4u;
    // 7F433BF4: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F433BF8:
    ctx->pc = 0x7F433BF8u;
    // 7F433BF8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F433BFC:
    ctx->pc = 0x7F433BFCu;
    // 7F433BFC: bl      0x8001213C
    {
            ctx->lr = 0x7F433C00u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_7F433C00:
    ctx->pc = 0x7F433C00u;
    ctx->downcount -= 2;
    // 7F433C00: cmpwi   r3, 0
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

label_7F433C04:
    ctx->pc = 0x7F433C04u;
    // 7F433C04: bc    12, 2, 0x7F433CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433CEC;
        }
    }

label_7F433C08:
    ctx->pc = 0x7F433C08u;
    ctx->downcount -= 6;
    // 7F433C08: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433C0C:
    ctx->pc = 0x7F433C0Cu;
    // 7F433C0C: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F433C10:
    ctx->pc = 0x7F433C10u;
    // 7F433C10: addi    r5, r30, 52
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(52);

label_7F433C14:
    ctx->pc = 0x7F433C14u;
    // 7F433C14: addi    r6, r30, 44
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(44);

label_7F433C18:
    ctx->pc = 0x7F433C18u;
    // 7F433C18: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433C1C:
    ctx->pc = 0x7F433C1Cu;
    // 7F433C1C: bl      0x7F39B214
    {
            ctx->lr = 0x7F433C20u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433C20:
    ctx->pc = 0x7F433C20u;
    ctx->downcount -= 6;
    // 7F433C20: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433C24:
    ctx->pc = 0x7F433C24u;
    // 7F433C24: addi    r4, r30, 49
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(49);

label_7F433C28:
    ctx->pc = 0x7F433C28u;
    // 7F433C28: addi    r5, r30, 53
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(53);

label_7F433C2C:
    ctx->pc = 0x7F433C2Cu;
    // 7F433C2C: addi    r6, r30, 45
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(45);

label_7F433C30:
    ctx->pc = 0x7F433C30u;
    // 7F433C30: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433C34:
    ctx->pc = 0x7F433C34u;
    // 7F433C34: bl      0x7F39B214
    {
            ctx->lr = 0x7F433C38u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433C38:
    ctx->pc = 0x7F433C38u;
    ctx->downcount -= 6;
    // 7F433C38: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433C3C:
    ctx->pc = 0x7F433C3Cu;
    // 7F433C3C: addi    r4, r30, 50
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(50);

label_7F433C40:
    ctx->pc = 0x7F433C40u;
    // 7F433C40: addi    r5, r30, 54
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(54);

label_7F433C44:
    ctx->pc = 0x7F433C44u;
    // 7F433C44: addi    r6, r30, 46
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(46);

label_7F433C48:
    ctx->pc = 0x7F433C48u;
    // 7F433C48: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433C4C:
    ctx->pc = 0x7F433C4Cu;
    // 7F433C4C: bl      0x7F39B214
    {
            ctx->lr = 0x7F433C50u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433C50:
    ctx->pc = 0x7F433C50u;
    ctx->downcount -= 6;
    // 7F433C50: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433C54:
    ctx->pc = 0x7F433C54u;
    // 7F433C54: addi    r4, r30, 51
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(51);

label_7F433C58:
    ctx->pc = 0x7F433C58u;
    // 7F433C58: addi    r5, r30, 55
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(55);

label_7F433C5C:
    ctx->pc = 0x7F433C5Cu;
    // 7F433C5C: addi    r6, r30, 47
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(47);

label_7F433C60:
    ctx->pc = 0x7F433C60u;
    // 7F433C60: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433C64:
    ctx->pc = 0x7F433C64u;
    // 7F433C64: bl      0x7F39B214
    {
            ctx->lr = 0x7F433C68u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433C68:
    ctx->pc = 0x7F433C68u;
    ctx->downcount -= 2;
    // 7F433C68: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F433C6C:
    ctx->pc = 0x7F433C6Cu;
    // 7F433C6C: b       0x7F433CEC
    {
            goto label_7F433CEC;
    }

label_7F433C70:
    ctx->pc = 0x7F433C70u;
    ctx->downcount -= 4;
    // 7F433C70: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F433C74:
    ctx->pc = 0x7F433C74u;
    // 7F433C74: addi    r4, r30, 44
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(44);

label_7F433C78:
    ctx->pc = 0x7F433C78u;
    // 7F433C78: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F433C7C:
    ctx->pc = 0x7F433C7Cu;
    // 7F433C7C: bl      0x8001213C
    {
            ctx->lr = 0x7F433C80u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_7F433C80:
    ctx->pc = 0x7F433C80u;
    ctx->downcount -= 2;
    // 7F433C80: cmpwi   r3, 0
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

label_7F433C84:
    ctx->pc = 0x7F433C84u;
    // 7F433C84: bc    12, 2, 0x7F433CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433CEC;
        }
    }

label_7F433C88:
    ctx->pc = 0x7F433C88u;
    ctx->downcount -= 6;
    // 7F433C88: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433C8C:
    ctx->pc = 0x7F433C8Cu;
    // 7F433C8C: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F433C90:
    ctx->pc = 0x7F433C90u;
    // 7F433C90: addi    r5, r30, 44
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(44);

label_7F433C94:
    ctx->pc = 0x7F433C94u;
    // 7F433C94: addi    r6, r30, 52
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(52);

label_7F433C98:
    ctx->pc = 0x7F433C98u;
    // 7F433C98: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433C9C:
    ctx->pc = 0x7F433C9Cu;
    // 7F433C9C: bl      0x7F39B214
    {
            ctx->lr = 0x7F433CA0u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433CA0:
    ctx->pc = 0x7F433CA0u;
    ctx->downcount -= 6;
    // 7F433CA0: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433CA4:
    ctx->pc = 0x7F433CA4u;
    // 7F433CA4: addi    r4, r30, 49
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(49);

label_7F433CA8:
    ctx->pc = 0x7F433CA8u;
    // 7F433CA8: addi    r5, r30, 45
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(45);

label_7F433CAC:
    ctx->pc = 0x7F433CACu;
    // 7F433CAC: addi    r6, r30, 53
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(53);

label_7F433CB0:
    ctx->pc = 0x7F433CB0u;
    // 7F433CB0: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433CB4:
    ctx->pc = 0x7F433CB4u;
    // 7F433CB4: bl      0x7F39B214
    {
            ctx->lr = 0x7F433CB8u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433CB8:
    ctx->pc = 0x7F433CB8u;
    ctx->downcount -= 6;
    // 7F433CB8: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433CBC:
    ctx->pc = 0x7F433CBCu;
    // 7F433CBC: addi    r4, r30, 50
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(50);

label_7F433CC0:
    ctx->pc = 0x7F433CC0u;
    // 7F433CC0: addi    r5, r30, 46
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(46);

label_7F433CC4:
    ctx->pc = 0x7F433CC4u;
    // 7F433CC4: addi    r6, r30, 54
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(54);

label_7F433CC8:
    ctx->pc = 0x7F433CC8u;
    // 7F433CC8: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433CCC:
    ctx->pc = 0x7F433CCCu;
    // 7F433CCC: bl      0x7F39B214
    {
            ctx->lr = 0x7F433CD0u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433CD0:
    ctx->pc = 0x7F433CD0u;
    ctx->downcount -= 6;
    // 7F433CD0: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433CD4:
    ctx->pc = 0x7F433CD4u;
    // 7F433CD4: addi    r4, r30, 51
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(51);

label_7F433CD8:
    ctx->pc = 0x7F433CD8u;
    // 7F433CD8: addi    r5, r30, 47
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(47);

label_7F433CDC:
    ctx->pc = 0x7F433CDCu;
    // 7F433CDC: addi    r6, r30, 55
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(55);

label_7F433CE0:
    ctx->pc = 0x7F433CE0u;
    // 7F433CE0: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F433CE4:
    ctx->pc = 0x7F433CE4u;
    // 7F433CE4: bl      0x7F39B214
    {
            ctx->lr = 0x7F433CE8u;
            ctx->pc = 0x7F39B214u;
            return;
    }

label_7F433CE8:
    ctx->pc = 0x7F433CE8u;
    ctx->downcount -= 1;
    // 7F433CE8: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F433CEC:
    ctx->pc = 0x7F433CECu;
    ctx->downcount -= 2;
    // 7F433CEC: cmpwi   r29, 0
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

label_7F433CF0:
    ctx->pc = 0x7F433CF0u;
    // 7F433CF0: bc    12, 2, 0x7F433D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433D40;
        }
    }

label_7F433CF4:
    ctx->pc = 0x7F433CF4u;
    ctx->downcount -= 7;
    // 7F433CF4: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433CF8:
    ctx->pc = 0x7F433CF8u;
    // 7F433CF8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F433CFC:
    ctx->pc = 0x7F433CFCu;
    // 7F433CFC: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F433D00:
    ctx->pc = 0x7F433D00u;
    // 7F433D00: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F433D04:
    ctx->pc = 0x7F433D04u;
    // 7F433D04: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433D08:
    ctx->pc = 0x7F433D08u;
    // 7F433D08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F433D0C:
    loop_7F433D0C(ctx);
    if (ctx->pc == 0x7F433D34u) goto label_7F433D34;
    return;
label_7F433D10:
    ctx->pc = 0x7F433D10u;
    // 7F433D10: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433D14:
    ctx->pc = 0x7F433D14u;
    // 7F433D14: lbz     r0, 49(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(49);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F433D18:
    ctx->pc = 0x7F433D18u;
    // 7F433D18: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433D1C:
    ctx->pc = 0x7F433D1Cu;
    // 7F433D1C: lbz     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F433D20:
    ctx->pc = 0x7F433D20u;
    // 7F433D20: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433D24:
    ctx->pc = 0x7F433D24u;
    // 7F433D24: lbz     r0, 51(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(51);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F433D28:
    ctx->pc = 0x7F433D28u;
    // 7F433D28: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433D2C:
    // 7F433D2C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_7F433D30:
    // 7F433D30: bc    16, 0, 0x7F433D0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433D0Cu;
                return;
            }
            goto label_7F433D0C;
        }
    }

label_7F433D34:
    ctx->pc = 0x7F433D34u;
    ctx->downcount -= 3;
    // 7F433D34: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F433D38:
    ctx->pc = 0x7F433D38u;
    // 7F433D38: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433D3C:
    ctx->pc = 0x7F433D3Cu;
    // 7F433D3C: b       0x7F433D7C
    {
            goto label_7F433D7C;
    }

label_7F433D40:
    ctx->pc = 0x7F433D40u;
    ctx->downcount -= 3;
    // 7F433D40: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433D44:
    ctx->pc = 0x7F433D44u;
    // 7F433D44: cmpwi   r0, 0
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

label_7F433D48:
    ctx->pc = 0x7F433D48u;
    // 7F433D48: bc    12, 2, 0x7F433D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433D7C;
        }
    }

label_7F433D4C:
    ctx->pc = 0x7F433D4Cu;
    ctx->downcount -= 10;
    // 7F433D4C: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433D50:
    ctx->pc = 0x7F433D50u;
    // 7F433D50: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F433D54:
    ctx->pc = 0x7F433D54u;
    // 7F433D54: subfic  r0, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F433D58:
    ctx->pc = 0x7F433D58u;
    // 7F433D58: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F433D5C:
    ctx->pc = 0x7F433D5Cu;
    // 7F433D5C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F433D60:
    ctx->pc = 0x7F433D60u;
    // 7F433D60: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F433D64:
    ctx->pc = 0x7F433D64u;
    // 7F433D64: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F433D68:
    ctx->pc = 0x7F433D68u;
    // 7F433D68: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433D6C:
    ctx->pc = 0x7F433D6Cu;
    // 7F433D6C: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433D70:
    ctx->pc = 0x7F433D70u;
    // 7F433D70: bl      0x8000519C
    {
            ctx->lr = 0x7F433D74u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F433D74:
    ctx->pc = 0x7F433D74u;
    ctx->downcount -= 2;
    // 7F433D74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F433D78:
    ctx->pc = 0x7F433D78u;
    // 7F433D78: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433D7C:
    ctx->pc = 0x7F433D7Cu;
    ctx->downcount -= 16;
    // 7F433D7C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433D80:
    ctx->pc = 0x7F433D80u;
    // 7F433D80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433D84:
    ctx->pc = 0x7F433D84u;
    // 7F433D84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433D88:
    ctx->pc = 0x7F433D88u;
    // 7F433D88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F433D8C:
    ctx->pc = 0x7F433D8Cu;
    // 7F433D8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433D90:
    ctx->pc = 0x7F433D90u;
    ctx->downcount -= 6;
    // 7F433D90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433D94:
    ctx->pc = 0x7F433D94u;
    // 7F433D94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433D98:
    ctx->pc = 0x7F433D98u;
    // 7F433D98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433D9C:
    ctx->pc = 0x7F433D9Cu;
    // 7F433D9C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F433DA0:
    ctx->pc = 0x7F433DA0u;
    // 7F433DA0: cmplwi  r3, 0x0000
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

label_7F433DA4:
    ctx->pc = 0x7F433DA4u;
    // 7F433DA4: bc    12, 2, 0x7F433DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433DAC;
        }
    }

label_7F433DA8:
    ctx->pc = 0x7F433DA8u;
    ctx->downcount -= 1;
    // 7F433DA8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F433DACu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F433DAC:
    ctx->pc = 0x7F433DACu;
    ctx->downcount -= 5;
    // 7F433DAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433DB0:
    ctx->pc = 0x7F433DB0u;
    // 7F433DB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433DB4:
    ctx->pc = 0x7F433DB4u;
    // 7F433DB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F433DB8:
    ctx->pc = 0x7F433DB8u;
    // 7F433DB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433DBC:
    ctx->pc = 0x7F433DBCu;
    ctx->downcount -= 21;
    // 7F433DBC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433DC0:
    ctx->pc = 0x7F433DC0u;
    // 7F433DC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433DC4:
    ctx->pc = 0x7F433DC4u;
    // 7F433DC4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433DC8:
    ctx->pc = 0x7F433DC8u;
    // 7F433DC8: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433DCC:
    ctx->pc = 0x7F433DCCu;
    // 7F433DCC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433DD0:
    ctx->pc = 0x7F433DD0u;
    // 7F433DD0: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F433DD4:
    ctx->pc = 0x7F433DD4u;
    // 7F433DD4: lwz     r31, 184(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F433DD8:
    ctx->pc = 0x7F433DD8u;
    // 7F433DD8: lwz     r30, 188(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(188);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F433DDC:
    ctx->pc = 0x7F433DDCu;
    // 7F433DDC: lwz     r29, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F433DE0:
    ctx->pc = 0x7F433DE0u;
    // 7F433DE0: lwz     r28, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F433DE4:
    ctx->pc = 0x7F433DE4u;
    // 7F433DE4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F433DE8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F433DE8:
    ctx->pc = 0x7F433DE8u;
    ctx->downcount -= 2;
    // 7F433DE8: cmplwi  r3, 0x0000
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

label_7F433DEC:
    ctx->pc = 0x7F433DECu;
    // 7F433DEC: bc    12, 2, 0x7F433E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F433E18;
        }
    }

label_7F433DF0:
    ctx->pc = 0x7F433DF0u;
    ctx->downcount -= 1;
    // 7F433DF0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F433DF4:
    ctx->downcount -= 2;
    // 7F433DF4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433DF8:
    // 7F433DF8: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F433DFCu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F433DFC:
    ctx->downcount -= 3;
    // 7F433DFC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F433E00:
    // 7F433E00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F433E04:
    // 7F433E04: bl      0x7F433EAC
    {
            ctx->lr = 0x7F433E08u;
            goto label_7F433EAC;
    }

label_7F433E08:
    ctx->downcount -= 4;
    // 7F433E08: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F433E0C:
    // 7F433E0C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F433E10:
    // 7F433E10: cmpwi   r27, 4
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

label_7F433E14:
    // 7F433E14: bc    12, 0, 0x7F433DF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433DF4u;
                return;
            }
            goto label_7F433DF4;
        }
    }

label_7F433E18:
    ctx->pc = 0x7F433E18u;
    ctx->downcount -= 4;
    // 7F433E18: lwz     r4, 184(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433E1C:
    ctx->pc = 0x7F433E1Cu;
    // 7F433E1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F433E20:
    ctx->pc = 0x7F433E20u;
    // 7F433E20: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F433E24:
    ctx->pc = 0x7F433E24u;
    // 7F433E24: bl      0x8000519C
    {
            ctx->lr = 0x7F433E28u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F433E28:
    ctx->pc = 0x7F433E28u;
    ctx->downcount -= 6;
    // 7F433E28: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F433E2C:
    ctx->pc = 0x7F433E2Cu;
    // 7F433E2C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F433E30:
    ctx->pc = 0x7F433E30u;
    // 7F433E30: addi    r3, r3, -28673
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F433E34:
    ctx->pc = 0x7F433E34u;
    // 7F433E34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433E38:
    ctx->pc = 0x7F433E38u;
    // 7F433E38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F433E3C:
    loop_7F433E3C(ctx);
    if (ctx->pc == 0x7F433E58u) goto label_7F433E58;
    return;
label_7F433E40:
    ctx->pc = 0x7F433E40u;
    // 7F433E40: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E44:
    ctx->pc = 0x7F433E44u;
    // 7F433E44: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E48:
    ctx->pc = 0x7F433E48u;
    // 7F433E48: stb     r4, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E4C:
    ctx->pc = 0x7F433E4Cu;
    // 7F433E4C: sth     r3, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F433E50:
    // 7F433E50: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F433E54:
    // 7F433E54: bc    16, 0, 0x7F433E3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433E3Cu;
                return;
            }
            goto label_7F433E3C;
        }
    }

label_7F433E58:
    ctx->pc = 0x7F433E58u;
    ctx->downcount -= 5;
    // 7F433E58: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F433E5C:
    ctx->pc = 0x7F433E5Cu;
    // 7F433E5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433E60:
    ctx->pc = 0x7F433E60u;
    // 7F433E60: li      r3, 4095
    ctx->gpr[3] = (u32)(s32)(4095);

label_7F433E64:
    ctx->pc = 0x7F433E64u;
    // 7F433E64: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F433E68:
    loop_7F433E68(ctx);
    if (ctx->pc == 0x7F433E84u) goto label_7F433E84;
    return;
label_7F433E6C:
    ctx->pc = 0x7F433E6Cu;
    // 7F433E6C: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E70:
    ctx->pc = 0x7F433E70u;
    // 7F433E70: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E74:
    ctx->pc = 0x7F433E74u;
    // 7F433E74: stb     r4, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F433E78:
    ctx->pc = 0x7F433E78u;
    // 7F433E78: sth     r3, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F433E7C:
    // 7F433E7C: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F433E80:
    // 7F433E80: bc    16, 0, 0x7F433E68
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433E68u;
                return;
            }
            goto label_7F433E68;
        }
    }

label_7F433E84:
    ctx->pc = 0x7F433E84u;
    ctx->downcount -= 4;
    // 7F433E84: lwz     r4, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433E88:
    ctx->pc = 0x7F433E88u;
    // 7F433E88: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F433E8C:
    ctx->pc = 0x7F433E8Cu;
    // 7F433E8C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F433E90:
    ctx->pc = 0x7F433E90u;
    // 7F433E90: bl      0x8000519C
    {
            ctx->lr = 0x7F433E94u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F433E94:
    ctx->pc = 0x7F433E94u;
    ctx->downcount -= 17;
    // 7F433E94: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433E98:
    ctx->pc = 0x7F433E98u;
    // 7F433E98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F433E9C:
    ctx->pc = 0x7F433E9Cu;
    // 7F433E9C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433EA0:
    ctx->pc = 0x7F433EA0u;
    // 7F433EA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433EA4:
    ctx->pc = 0x7F433EA4u;
    // 7F433EA4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F433EA8:
    ctx->pc = 0x7F433EA8u;
    // 7F433EA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433EAC:
    ctx->pc = 0x7F433EACu;
    ctx->downcount -= 17;
    // 7F433EAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433EB0:
    ctx->pc = 0x7F433EB0u;
    // 7F433EB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433EB4:
    ctx->pc = 0x7F433EB4u;
    // 7F433EB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433EB8:
    ctx->pc = 0x7F433EB8u;
    // 7F433EB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433EBC:
    ctx->pc = 0x7F433EBCu;
    // 7F433EBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433EC0:
    ctx->pc = 0x7F433EC0u;
    // 7F433EC0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F433EC4:
    ctx->pc = 0x7F433EC4u;
    // 7F433EC4: bl      0x7F433F00
    {
            ctx->lr = 0x7F433EC8u;
            goto label_7F433F00;
    }

label_7F433EC8:
    ctx->pc = 0x7F433EC8u;
    ctx->downcount -= 3;
    // 7F433EC8: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F433ECC:
    ctx->pc = 0x7F433ECCu;
    // 7F433ECC: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F433ED0:
    ctx->pc = 0x7F433ED0u;
    // 7F433ED0: bl      0x7F433F00
    {
            ctx->lr = 0x7F433ED4u;
            goto label_7F433F00;
    }

label_7F433ED4:
    ctx->pc = 0x7F433ED4u;
    ctx->downcount -= 3;
    // 7F433ED4: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F433ED8:
    ctx->pc = 0x7F433ED8u;
    // 7F433ED8: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F433EDC:
    ctx->pc = 0x7F433EDCu;
    // 7F433EDC: bl      0x7F433F00
    {
            ctx->lr = 0x7F433EE0u;
            goto label_7F433F00;
    }

label_7F433EE0:
    ctx->pc = 0x7F433EE0u;
    ctx->downcount -= 3;
    // 7F433EE0: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F433EE4:
    ctx->pc = 0x7F433EE4u;
    // 7F433EE4: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F433EE8:
    ctx->pc = 0x7F433EE8u;
    // 7F433EE8: bl      0x7F433F00
    {
            ctx->lr = 0x7F433EECu;
            goto label_7F433F00;
    }

label_7F433EEC:
    ctx->pc = 0x7F433EECu;
    ctx->downcount -= 16;
    // 7F433EEC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F433EF0:
    ctx->pc = 0x7F433EF0u;
    // 7F433EF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433EF4:
    ctx->pc = 0x7F433EF4u;
    // 7F433EF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433EF8:
    ctx->pc = 0x7F433EF8u;
    // 7F433EF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F433EFC:
    ctx->pc = 0x7F433EFCu;
    // 7F433EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433F00:
    ctx->pc = 0x7F433F00u;
    ctx->downcount -= 6;
    // 7F433F00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433F04:
    ctx->pc = 0x7F433F04u;
    // 7F433F04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433F08:
    ctx->pc = 0x7F433F08u;
    // 7F433F08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433F0C:
    ctx->pc = 0x7F433F0Cu;
    // 7F433F0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F433F10:
    ctx->pc = 0x7F433F10u;
    // 7F433F10: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F433F14:
    ctx->pc = 0x7F433F14u;
    // 7F433F14: bl      0x7F433F30
    {
            ctx->lr = 0x7F433F18u;
            goto label_7F433F30;
    }

label_7F433F18:
    ctx->pc = 0x7F433F18u;
    ctx->downcount -= 7;
    // 7F433F18: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F433F18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F433F1C:
    ctx->pc = 0x7F433F1Cu;
    // 7F433F1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F433F20:
    ctx->pc = 0x7F433F20u;
    // 7F433F20: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F433F24:
    ctx->pc = 0x7F433F24u;
    // 7F433F24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F433F28:
    ctx->pc = 0x7F433F28u;
    // 7F433F28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F433F2C:
    ctx->pc = 0x7F433F2Cu;
    // 7F433F2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433F30:
    ctx->pc = 0x7F433F30u;
    ctx->downcount -= 4;
    // 7F433F30: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F433F30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F433F30u);
        if (ctx->exception) return;
    }

label_7F433F34:
    ctx->pc = 0x7F433F34u;
    // 7F433F34: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F433F34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F433F34u);
        if (ctx->exception) return;
    }

label_7F433F38:
    ctx->pc = 0x7F433F38u;
    // 7F433F38: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F433F38u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F433F3C:
    ctx->pc = 0x7F433F3Cu;
    // 7F433F3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F433F40:
    ctx->pc = 0x7F433F40u;
    ctx->downcount -= 21;
    // 7F433F40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F433F44:
    ctx->pc = 0x7F433F44u;
    // 7F433F44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F433F48:
    ctx->pc = 0x7F433F48u;
    // 7F433F48: lis     r4, 9
    ctx->gpr[4] = ((u32)(s32)(9) << 16);

label_7F433F4C:
    ctx->pc = 0x7F433F4Cu;
    // 7F433F4C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F433F50:
    ctx->pc = 0x7F433F50u;
    // 7F433F50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433F54:
    ctx->pc = 0x7F433F54u;
    // 7F433F54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F433F58:
    ctx->pc = 0x7F433F58u;
    // 7F433F58: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F433F5C:
    ctx->pc = 0x7F433F5Cu;
    // 7F433F5C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F433F60:
    ctx->pc = 0x7F433F60u;
    // 7F433F60: addi    r3, r4, 2
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2);

label_7F433F64:
    ctx->pc = 0x7F433F64u;
    // 7F433F64: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F433F68:
    ctx->pc = 0x7F433F68u;
    // 7F433F68: bl      0x7F3C2408
    {
            ctx->lr = 0x7F433F6Cu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F433F6C:
    ctx->pc = 0x7F433F6Cu;
    ctx->downcount -= 3;
    // 7F433F6C: or.   r31, r3, r3
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

label_7F433F70:
    ctx->pc = 0x7F433F70u;
    // 7F433F70: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F433F74:
    ctx->pc = 0x7F433F74u;
    // 7F433F74: bc    4, 2, 0x7F433F80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F433F80;
        }
    }

label_7F433F78:
    ctx->pc = 0x7F433F78u;
    ctx->downcount -= 2;
    // 7F433F78: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F433F7C:
    ctx->pc = 0x7F433F7Cu;
    // 7F433F7C: b       0x7F434010
    {
            goto label_7F434010;
    }

label_7F433F80:
    ctx->pc = 0x7F433F80u;
    ctx->downcount -= 20;
    // 7F433F80: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F433F84:
    ctx->pc = 0x7F433F84u;
    // 7F433F84: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F433F88:
    ctx->pc = 0x7F433F88u;
    // 7F433F88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F433F8C:
    ctx->pc = 0x7F433F8Cu;
    // 7F433F8C: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F433F90:
    ctx->pc = 0x7F433F90u;
    // 7F433F90: ori     r6, r4, 0xE000
    ctx->gpr[6] = ctx->gpr[4] | 0xE000u;

label_7F433F94:
    ctx->pc = 0x7F433F94u;
    // 7F433F94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433F98:
    ctx->pc = 0x7F433F98u;
    // 7F433F98: stw     r6, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F433F9C:
    ctx->pc = 0x7F433F9Cu;
    // 7F433F9C: stw     r5, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F433FA0:
    ctx->pc = 0x7F433FA0u;
    // 7F433FA0: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433FA4:
    ctx->pc = 0x7F433FA4u;
    // 7F433FA4: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433FA8:
    ctx->pc = 0x7F433FA8u;
    // 7F433FA8: stw     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F433FAC:
    ctx->pc = 0x7F433FACu;
    // 7F433FAC: stb     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FB0:
    ctx->pc = 0x7F433FB0u;
    // 7F433FB0: stb     r0, 45(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(45);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FB4:
    ctx->pc = 0x7F433FB4u;
    // 7F433FB4: stb     r0, 46(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(46);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FB8:
    ctx->pc = 0x7F433FB8u;
    // 7F433FB8: stb     r0, 47(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(47);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FBC:
    ctx->pc = 0x7F433FBCu;
    // 7F433FBC: stb     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FC0:
    ctx->pc = 0x7F433FC0u;
    // 7F433FC0: stb     r0, 49(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FC4:
    ctx->pc = 0x7F433FC4u;
    // 7F433FC4: stb     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FC8:
    ctx->pc = 0x7F433FC8u;
    // 7F433FC8: stb     r0, 51(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(51);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F433FCC:
    ctx->pc = 0x7F433FCCu;
    // 7F433FCC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F433FD0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F433FD0:
    ctx->pc = 0x7F433FD0u;
    ctx->downcount -= 4;
    // 7F433FD0: stb     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F433FD4:
    ctx->pc = 0x7F433FD4u;
    // 7F433FD4: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F433FD8:
    ctx->pc = 0x7F433FD8u;
    // 7F433FD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433FDC:
    ctx->pc = 0x7F433FDCu;
    // 7F433FDC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F433FE0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F433FE0:
    ctx->pc = 0x7F433FE0u;
    ctx->downcount -= 4;
    // 7F433FE0: stb     r3, 53(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(53);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F433FE4:
    ctx->pc = 0x7F433FE4u;
    // 7F433FE4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F433FE8:
    ctx->pc = 0x7F433FE8u;
    // 7F433FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433FEC:
    ctx->pc = 0x7F433FECu;
    // 7F433FEC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F433FF0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F433FF0:
    ctx->pc = 0x7F433FF0u;
    ctx->downcount -= 4;
    // 7F433FF0: stb     r3, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F433FF4:
    ctx->pc = 0x7F433FF4u;
    // 7F433FF4: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F433FF8:
    ctx->pc = 0x7F433FF8u;
    // 7F433FF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F433FFC:
    ctx->pc = 0x7F433FFCu;
    // 7F433FFC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F434000u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F434000:
    ctx->pc = 0x7F434000u;
    ctx->downcount -= 3;
    // 7F434000: stb     r3, 55(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(55);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F434004:
    ctx->pc = 0x7F434004u;
    // 7F434004: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F434008:
    ctx->pc = 0x7F434008u;
    // 7F434008: bl      0x7F433DBC
    {
            ctx->lr = 0x7F43400Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433DBCu;
                return;
            }
            goto label_7F433DBC;
    }

label_7F43400C:
    ctx->pc = 0x7F43400Cu;
    ctx->downcount -= 1;
    // 7F43400C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F434010:
    ctx->pc = 0x7F434010u;
    ctx->downcount -= 16;
    // 7F434010: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F434014:
    ctx->pc = 0x7F434014u;
    // 7F434014: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F434018:
    ctx->pc = 0x7F434018u;
    // 7F434018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43401C:
    ctx->pc = 0x7F43401Cu;
    // 7F43401C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F434020:
    ctx->pc = 0x7F434020u;
    // 7F434020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F434024:
    ctx->pc = 0x7F434024u;
    ctx->downcount -= 21;
    // 7F434024: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F434028:
    ctx->pc = 0x7F434028u;
    // 7F434028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43402C:
    ctx->pc = 0x7F43402Cu;
    // 7F43402C: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F434030:
    ctx->pc = 0x7F434030u;
    // 7F434030: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F434034:
    ctx->pc = 0x7F434034u;
    // 7F434034: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F434038:
    ctx->pc = 0x7F434038u;
    // 7F434038: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F43403C:
    ctx->pc = 0x7F43403Cu;
    // 7F43403C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F434040:
    ctx->pc = 0x7F434040u;
    // 7F434040: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F434044:
    ctx->pc = 0x7F434044u;
    // 7F434044: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F434048:
    ctx->pc = 0x7F434048u;
    // 7F434048: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F43404C:
    ctx->pc = 0x7F43404Cu;
    // 7F43404C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F434050u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F434050:
    ctx->pc = 0x7F434050u;
    ctx->downcount -= 2;
    // 7F434050: or.   r31, r3, r3
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

label_7F434054:
    ctx->pc = 0x7F434054u;
    // 7F434054: bc    12, 2, 0x7F434094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F434094;
        }
    }

label_7F434058:
    ctx->pc = 0x7F434058u;
    ctx->downcount -= 5;
    // 7F434058: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F43405C:
    ctx->pc = 0x7F43405Cu;
    // 7F43405C: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F434060:
    ctx->pc = 0x7F434060u;
    // 7F434060: addi    r4, r4, 15168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15168);

label_7F434064:
    ctx->pc = 0x7F434064u;
    // 7F434064: addi    r5, r5, 15760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15760);

label_7F434068:
    ctx->pc = 0x7F434068u;
    // 7F434068: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F43406Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F43406C:
    ctx->pc = 0x7F43406Cu;
    ctx->downcount -= 4;
    // 7F43406C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F434070:
    ctx->pc = 0x7F434070u;
    // 7F434070: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F434074:
    ctx->pc = 0x7F434074u;
    // 7F434074: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F434078:
    ctx->pc = 0x7F434078u;
    // 7F434078: bl      0x7F433F40
    {
            ctx->lr = 0x7F43407Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F433F40u;
                return;
            }
            goto label_7F433F40;
    }

label_7F43407C:
    ctx->pc = 0x7F43407Cu;
    ctx->downcount -= 2;
    // 7F43407C: cmpwi   r3, 0
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

label_7F434080:
    ctx->pc = 0x7F434080u;
    // 7F434080: bc    4, 0, 0x7F434094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F434094;
        }
    }

label_7F434084:
    ctx->pc = 0x7F434084u;
    ctx->downcount -= 2;
    // 7F434084: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F434088:
    ctx->pc = 0x7F434088u;
    // 7F434088: bl      0x7F3C8210
    {
            ctx->lr = 0x7F43408Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F43408C:
    ctx->pc = 0x7F43408Cu;
    ctx->downcount -= 2;
    // 7F43408C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F434090:
    ctx->pc = 0x7F434090u;
    // 7F434090: b       0x7F434098
    {
            goto label_7F434098;
    }

label_7F434094:
    ctx->pc = 0x7F434094u;
    ctx->downcount -= 1;
    // 7F434094: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F434098:
    ctx->pc = 0x7F434098u;
    ctx->downcount -= 16;
    // 7F434098: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F43409C:
    ctx->pc = 0x7F43409Cu;
    // 7F43409C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4340A0:
    ctx->pc = 0x7F4340A0u;
    // 7F4340A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4340A4:
    ctx->pc = 0x7F4340A4u;
    // 7F4340A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4340A8:
    ctx->pc = 0x7F4340A8u;
    // 7F4340A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F4300EC;
        }
    }

label_7F4340AC:
    ctx->pc = 0x7F4340ACu;
    ctx->downcount -= 20;
    // 7F4340AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4340B0:
    ctx->pc = 0x7F4340B0u;
    // 7F4340B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4340B4:
    ctx->pc = 0x7F4340B4u;
    // 7F4340B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4340B8:
    ctx->pc = 0x7F4340B8u;
    // 7F4340B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4340BC:
    ctx->pc = 0x7F4340BCu;
    // 7F4340BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4340C0:
    ctx->pc = 0x7F4340C0u;
    // 7F4340C0: lwz     r31, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F4340C4:
    ctx->pc = 0x7F4340C4u;
    // 7F4340C4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4340C8:
    ctx->pc = 0x7F4340C8u;
    // 7F4340C8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F4340CC:
    ctx->pc = 0x7F4340CCu;
    // 7F4340CC: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4340D0:
    ctx->pc = 0x7F4340D0u;
    // 7F4340D0: bl      0x7F43419C
    {
            ctx->lr = 0x7F4340D4u;
            ctx->pc = 0x7F43419Cu;
            return;
    }

label_7F4340D4:
    ctx->pc = 0x7F4340D4u;
    ctx->downcount -= 3;
    // 7F4340D4: lwz     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4340D8:
    ctx->pc = 0x7F4340D8u;
    // 7F4340D8: cmpwi   r0, 0
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

label_7F4340DC:
    ctx->pc = 0x7F4340DCu;
    // 7F4340DC: bc    4, 2, 0x7F434150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F434150u;
            return;
        }
    }

label_7F4340E0:
    ctx->pc = 0x7F4340E0u;
    ctx->downcount -= 3;
    // 7F4340E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F4340E4:
    ctx->pc = 0x7F4340E4u;
    // 7F4340E4: lis     r4, 252
    ctx->gpr[4] = ((u32)(s32)(252) << 16);

label_7F4340E8:
    ctx->pc = 0x7F4340E8u;
    // 7F4340E8: addi    r3, r3, -5664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5664);

    ctx->pc = 0x7F4340ECu;
    return;
return_dispatch_7F4300EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F4300F0u: goto label_7F4300F0;
    case 0x7F430100u: goto label_7F430100;
    case 0x7F430114u: goto label_7F430114;
    case 0x7F430130u: goto label_7F430130;
    case 0x7F4301E8u: goto label_7F4301E8;
    case 0x7F4301F4u: goto label_7F4301F4;
    case 0x7F430204u: goto label_7F430204;
    case 0x7F43020Cu: goto label_7F43020C;
    case 0x7F43022Cu: goto label_7F43022C;
    case 0x7F43023Cu: goto label_7F43023C;
    case 0x7F430270u: goto label_7F430270;
    case 0x7F4302D4u: goto label_7F4302D4;
    case 0x7F430320u: goto label_7F430320;
    case 0x7F430334u: goto label_7F430334;
    case 0x7F43036Cu: goto label_7F43036C;
    case 0x7F430398u: goto label_7F430398;
    case 0x7F4303A0u: goto label_7F4303A0;
    case 0x7F4303A8u: goto label_7F4303A8;
    case 0x7F4303B0u: goto label_7F4303B0;
    case 0x7F4303D8u: goto label_7F4303D8;
    case 0x7F4303E0u: goto label_7F4303E0;
    case 0x7F430490u: goto label_7F430490;
    case 0x7F4304A0u: goto label_7F4304A0;
    case 0x7F4304B4u: goto label_7F4304B4;
    case 0x7F4304C4u: goto label_7F4304C4;
    case 0x7F430500u: goto label_7F430500;
    case 0x7F430510u: goto label_7F430510;
    case 0x7F43054Cu: goto label_7F43054C;
    case 0x7F430554u: goto label_7F430554;
    case 0x7F430574u: goto label_7F430574;
    case 0x7F43059Cu: goto label_7F43059C;
    case 0x7F4305ACu: goto label_7F4305AC;
    case 0x7F4305D4u: goto label_7F4305D4;
    case 0x7F4305E4u: goto label_7F4305E4;
    case 0x7F4305F4u: goto label_7F4305F4;
    case 0x7F430604u: goto label_7F430604;
    case 0x7F43060Cu: goto label_7F43060C;
    case 0x7F430614u: goto label_7F430614;
    case 0x7F430620u: goto label_7F430620;
    case 0x7F430660u: goto label_7F430660;
    case 0x7F430670u: goto label_7F430670;
    case 0x7F430698u: goto label_7F430698;
    case 0x7F4306C0u: goto label_7F4306C0;
    case 0x7F4306D0u: goto label_7F4306D0;
    case 0x7F4306F8u: goto label_7F4306F8;
    case 0x7F430708u: goto label_7F430708;
    case 0x7F430774u: goto label_7F430774;
    case 0x7F430784u: goto label_7F430784;
    case 0x7F4307C8u: goto label_7F4307C8;
    case 0x7F4307F0u: goto label_7F4307F0;
    case 0x7F430800u: goto label_7F430800;
    case 0x7F430828u: goto label_7F430828;
    case 0x7F430838u: goto label_7F430838;
    case 0x7F430844u: goto label_7F430844;
    case 0x7F43084Cu: goto label_7F43084C;
    case 0x7F430854u: goto label_7F430854;
    case 0x7F4308C4u: goto label_7F4308C4;
    case 0x7F4308E4u: goto label_7F4308E4;
    case 0x7F4308FCu: goto label_7F4308FC;
    case 0x7F430910u: goto label_7F430910;
    case 0x7F430980u: goto label_7F430980;
    case 0x7F430988u: goto label_7F430988;
    case 0x7F430990u: goto label_7F430990;
    case 0x7F430998u: goto label_7F430998;
    case 0x7F4309B0u: goto label_7F4309B0;
    case 0x7F4309BCu: goto label_7F4309BC;
    case 0x7F4309F4u: goto label_7F4309F4;
    case 0x7F430A00u: goto label_7F430A00;
    case 0x7F430A34u: goto label_7F430A34;
    case 0x7F430AC4u: goto label_7F430AC4;
    case 0x7F430B10u: goto label_7F430B10;
    case 0x7F430B50u: goto label_7F430B50;
    case 0x7F430B58u: goto label_7F430B58;
    case 0x7F430B68u: goto label_7F430B68;
    case 0x7F430C00u: goto label_7F430C00;
    case 0x7F430C24u: goto label_7F430C24;
    case 0x7F430C44u: goto label_7F430C44;
    case 0x7F430C68u: goto label_7F430C68;
    case 0x7F430CA0u: goto label_7F430CA0;
    case 0x7F430CC4u: goto label_7F430CC4;
    case 0x7F430CF4u: goto label_7F430CF4;
    case 0x7F430D04u: goto label_7F430D04;
    case 0x7F430D10u: goto label_7F430D10;
    case 0x7F430D6Cu: goto label_7F430D6C;
    case 0x7F430D78u: goto label_7F430D78;
    case 0x7F430D90u: goto label_7F430D90;
    case 0x7F430DE0u: goto label_7F430DE0;
    case 0x7F430E48u: goto label_7F430E48;
    case 0x7F430E58u: goto label_7F430E58;
    case 0x7F430E64u: goto label_7F430E64;
    case 0x7F430E6Cu: goto label_7F430E6C;
    case 0x7F430E80u: goto label_7F430E80;
    case 0x7F430E88u: goto label_7F430E88;
    case 0x7F430E90u: goto label_7F430E90;
    case 0x7F430E98u: goto label_7F430E98;
    case 0x7F430ED0u: goto label_7F430ED0;
    case 0x7F430EE0u: goto label_7F430EE0;
    case 0x7F430EF0u: goto label_7F430EF0;
    case 0x7F430F14u: goto label_7F430F14;
    case 0x7F430F24u: goto label_7F430F24;
    case 0x7F430F30u: goto label_7F430F30;
    case 0x7F430F44u: goto label_7F430F44;
    case 0x7F430F50u: goto label_7F430F50;
    case 0x7F430F5Cu: goto label_7F430F5C;
    case 0x7F430F64u: goto label_7F430F64;
    case 0x7F430F6Cu: goto label_7F430F6C;
    case 0x7F431010u: goto label_7F431010;
    case 0x7F431058u: goto label_7F431058;
    case 0x7F4310BCu: goto label_7F4310BC;
    case 0x7F4310C8u: goto label_7F4310C8;
    case 0x7F4310D4u: goto label_7F4310D4;
    case 0x7F4310E0u: goto label_7F4310E0;
    case 0x7F43110Cu: goto label_7F43110C;
    case 0x7F431160u: goto label_7F431160;
    case 0x7F43117Cu: goto label_7F43117C;
    case 0x7F43118Cu: goto label_7F43118C;
    case 0x7F43119Cu: goto label_7F43119C;
    case 0x7F4311DCu: goto label_7F4311DC;
    case 0x7F43121Cu: goto label_7F43121C;
    case 0x7F431234u: goto label_7F431234;
    case 0x7F431250u: goto label_7F431250;
    case 0x7F431298u: goto label_7F431298;
    case 0x7F4312A0u: goto label_7F4312A0;
    case 0x7F4312A8u: goto label_7F4312A8;
    case 0x7F43135Cu: goto label_7F43135C;
    case 0x7F431368u: goto label_7F431368;
    case 0x7F431378u: goto label_7F431378;
    case 0x7F4313E8u: goto label_7F4313E8;
    case 0x7F4313F8u: goto label_7F4313F8;
    case 0x7F43145Cu: goto label_7F43145C;
    case 0x7F43146Cu: goto label_7F43146C;
    case 0x7F43147Cu: goto label_7F43147C;
    case 0x7F431488u: goto label_7F431488;
    case 0x7F431498u: goto label_7F431498;
    case 0x7F4314A4u: goto label_7F4314A4;
    case 0x7F4314ACu: goto label_7F4314AC;
    case 0x7F4314D8u: goto label_7F4314D8;
    case 0x7F431504u: goto label_7F431504;
    case 0x7F431524u: goto label_7F431524;
    case 0x7F431538u: goto label_7F431538;
    case 0x7F431550u: goto label_7F431550;
    case 0x7F431560u: goto label_7F431560;
    case 0x7F4315D0u: goto label_7F4315D0;
    case 0x7F4315E0u: goto label_7F4315E0;
    case 0x7F4315F0u: goto label_7F4315F0;
    case 0x7F4315FCu: goto label_7F4315FC;
    case 0x7F43161Cu: goto label_7F43161C;
    case 0x7F431630u: goto label_7F431630;
    case 0x7F431648u: goto label_7F431648;
    case 0x7F43165Cu: goto label_7F43165C;
    case 0x7F431670u: goto label_7F431670;
    case 0x7F4316ACu: goto label_7F4316AC;
    case 0x7F4316B4u: goto label_7F4316B4;
    case 0x7F4316FCu: goto label_7F4316FC;
    case 0x7F43170Cu: goto label_7F43170C;
    case 0x7F431728u: goto label_7F431728;
    case 0x7F43174Cu: goto label_7F43174C;
    case 0x7F431790u: goto label_7F431790;
    case 0x7F4317A4u: goto label_7F4317A4;
    case 0x7F4317ACu: goto label_7F4317AC;
    case 0x7F4317C0u: goto label_7F4317C0;
    case 0x7F4317D0u: goto label_7F4317D0;
    case 0x7F4317DCu: goto label_7F4317DC;
    case 0x7F4317E4u: goto label_7F4317E4;
    case 0x7F4317FCu: goto label_7F4317FC;
    case 0x7F43180Cu: goto label_7F43180C;
    case 0x7F43183Cu: goto label_7F43183C;
    case 0x7F431850u: goto label_7F431850;
    case 0x7F43185Cu: goto label_7F43185C;
    case 0x7F431870u: goto label_7F431870;
    case 0x7F43189Cu: goto label_7F43189C;
    case 0x7F4318F0u: goto label_7F4318F0;
    case 0x7F4318FCu: goto label_7F4318FC;
    case 0x7F431908u: goto label_7F431908;
    case 0x7F431914u: goto label_7F431914;
    case 0x7F431940u: goto label_7F431940;
    case 0x7F431994u: goto label_7F431994;
    case 0x7F4319B0u: goto label_7F4319B0;
    case 0x7F4319C0u: goto label_7F4319C0;
    case 0x7F4319D0u: goto label_7F4319D0;
    case 0x7F431A14u: goto label_7F431A14;
    case 0x7F431A58u: goto label_7F431A58;
    case 0x7F431A64u: goto label_7F431A64;
    case 0x7F431A6Cu: goto label_7F431A6C;
    case 0x7F431AA0u: goto label_7F431AA0;
    case 0x7F431ACCu: goto label_7F431ACC;
    case 0x7F431AE0u: goto label_7F431AE0;
    case 0x7F431AF0u: goto label_7F431AF0;
    case 0x7F431B98u: goto label_7F431B98;
    case 0x7F431BA4u: goto label_7F431BA4;
    case 0x7F431BB4u: goto label_7F431BB4;
    case 0x7F431BBCu: goto label_7F431BBC;
    case 0x7F431BDCu: goto label_7F431BDC;
    case 0x7F431BECu: goto label_7F431BEC;
    case 0x7F431BF8u: goto label_7F431BF8;
    case 0x7F431C5Cu: goto label_7F431C5C;
    case 0x7F431CF0u: goto label_7F431CF0;
    case 0x7F431D28u: goto label_7F431D28;
    case 0x7F431D54u: goto label_7F431D54;
    case 0x7F431D5Cu: goto label_7F431D5C;
    case 0x7F431D7Cu: goto label_7F431D7C;
    case 0x7F431D88u: goto label_7F431D88;
    case 0x7F431E10u: goto label_7F431E10;
    case 0x7F431E18u: goto label_7F431E18;
    case 0x7F431E50u: goto label_7F431E50;
    case 0x7F431E98u: goto label_7F431E98;
    case 0x7F431E9Cu: goto label_7F431E9C;
    case 0x7F431F08u: goto label_7F431F08;
    case 0x7F431F60u: goto label_7F431F60;
    case 0x7F431F6Cu: goto label_7F431F6C;
    case 0x7F431F84u: goto label_7F431F84;
    case 0x7F431FD0u: goto label_7F431FD0;
    case 0x7F432038u: goto label_7F432038;
    case 0x7F432048u: goto label_7F432048;
    case 0x7F432050u: goto label_7F432050;
    case 0x7F432058u: goto label_7F432058;
    case 0x7F43208Cu: goto label_7F43208C;
    case 0x7F4320C0u: goto label_7F4320C0;
    case 0x7F4320E8u: goto label_7F4320E8;
    case 0x7F432114u: goto label_7F432114;
    case 0x7F432178u: goto label_7F432178;
    case 0x7F4321DCu: goto label_7F4321DC;
    case 0x7F4321ECu: goto label_7F4321EC;
    case 0x7F43222Cu: goto label_7F43222C;
    case 0x7F43223Cu: goto label_7F43223C;
    case 0x7F432244u: goto label_7F432244;
    case 0x7F43224Cu: goto label_7F43224C;
    case 0x7F432250u: goto label_7F432250;
    case 0x7F43225Cu: goto label_7F43225C;
    case 0x7F43226Cu: goto label_7F43226C;
    case 0x7F432290u: goto label_7F432290;
    case 0x7F4322DCu: goto label_7F4322DC;
    case 0x7F4322FCu: goto label_7F4322FC;
    case 0x7F432314u: goto label_7F432314;
    case 0x7F432328u: goto label_7F432328;
    case 0x7F4323B0u: goto label_7F4323B0;
    case 0x7F4323BCu: goto label_7F4323BC;
    case 0x7F4323C8u: goto label_7F4323C8;
    case 0x7F4323D4u: goto label_7F4323D4;
    case 0x7F432400u: goto label_7F432400;
    case 0x7F432454u: goto label_7F432454;
    case 0x7F43249Cu: goto label_7F43249C;
    case 0x7F43250Cu: goto label_7F43250C;
    case 0x7F432514u: goto label_7F432514;
    case 0x7F43251Cu: goto label_7F43251C;
    case 0x7F432524u: goto label_7F432524;
    case 0x7F432548u: goto label_7F432548;
    case 0x7F432554u: goto label_7F432554;
    case 0x7F432588u: goto label_7F432588;
    case 0x7F432640u: goto label_7F432640;
    case 0x7F432654u: goto label_7F432654;
    case 0x7F432664u: goto label_7F432664;
    case 0x7F432678u: goto label_7F432678;
    case 0x7F432694u: goto label_7F432694;
    case 0x7F4326B8u: goto label_7F4326B8;
    case 0x7F4326C0u: goto label_7F4326C0;
    case 0x7F4326D4u: goto label_7F4326D4;
    case 0x7F4326ECu: goto label_7F4326EC;
    case 0x7F43272Cu: goto label_7F43272C;
    case 0x7F432750u: goto label_7F432750;
    case 0x7F432788u: goto label_7F432788;
    case 0x7F4327ACu: goto label_7F4327AC;
    case 0x7F4327DCu: goto label_7F4327DC;
    case 0x7F4327ECu: goto label_7F4327EC;
    case 0x7F4327F8u: goto label_7F4327F8;
    case 0x7F432828u: goto label_7F432828;
    case 0x7F432834u: goto label_7F432834;
    case 0x7F432864u: goto label_7F432864;
    case 0x7F432878u: goto label_7F432878;
    case 0x7F432880u: goto label_7F432880;
    case 0x7F432890u: goto label_7F432890;
    case 0x7F4328A0u: goto label_7F4328A0;
    case 0x7F4328B0u: goto label_7F4328B0;
    case 0x7F4328D0u: goto label_7F4328D0;
    case 0x7F4328DCu: goto label_7F4328DC;
    case 0x7F4328E8u: goto label_7F4328E8;
    case 0x7F4328F0u: goto label_7F4328F0;
    case 0x7F432938u: goto label_7F432938;
    case 0x7F432944u: goto label_7F432944;
    case 0x7F432950u: goto label_7F432950;
    case 0x7F43295Cu: goto label_7F43295C;
    case 0x7F432988u: goto label_7F432988;
    case 0x7F4329DCu: goto label_7F4329DC;
    case 0x7F4329F8u: goto label_7F4329F8;
    case 0x7F432A08u: goto label_7F432A08;
    case 0x7F432A18u: goto label_7F432A18;
    case 0x7F432A50u: goto label_7F432A50;
    case 0x7F432A74u: goto label_7F432A74;
    case 0x7F432AACu: goto label_7F432AAC;
    case 0x7F432ABCu: goto label_7F432ABC;
    case 0x7F432AC8u: goto label_7F432AC8;
    case 0x7F432AD0u: goto label_7F432AD0;
    case 0x7F432B08u: goto label_7F432B08;
    case 0x7F432B18u: goto label_7F432B18;
    case 0x7F432B4Cu: goto label_7F432B4C;
    case 0x7F432B58u: goto label_7F432B58;
    case 0x7F432B64u: goto label_7F432B64;
    case 0x7F432B70u: goto label_7F432B70;
    case 0x7F432B9Cu: goto label_7F432B9C;
    case 0x7F432BD4u: goto label_7F432BD4;
    case 0x7F432C48u: goto label_7F432C48;
    case 0x7F432CA8u: goto label_7F432CA8;
    case 0x7F432CF0u: goto label_7F432CF0;
    case 0x7F432DFCu: goto label_7F432DFC;
    case 0x7F432E1Cu: goto label_7F432E1C;
    case 0x7F432E2Cu: goto label_7F432E2C;
    case 0x7F432E34u: goto label_7F432E34;
    case 0x7F432E54u: goto label_7F432E54;
    case 0x7F432E64u: goto label_7F432E64;
    case 0x7F432E78u: goto label_7F432E78;
    case 0x7F432E88u: goto label_7F432E88;
    case 0x7F432EACu: goto label_7F432EAC;
    case 0x7F432EBCu: goto label_7F432EBC;
    case 0x7F432ECCu: goto label_7F432ECC;
    case 0x7F432EE0u: goto label_7F432EE0;
    case 0x7F432F54u: goto label_7F432F54;
    case 0x7F432F68u: goto label_7F432F68;
    case 0x7F432F78u: goto label_7F432F78;
    case 0x7F432F8Cu: goto label_7F432F8C;
    case 0x7F432F9Cu: goto label_7F432F9C;
    case 0x7F432FACu: goto label_7F432FAC;
    case 0x7F432FC0u: goto label_7F432FC0;
    case 0x7F43308Cu: goto label_7F43308C;
    case 0x7F4330A4u: goto label_7F4330A4;
    case 0x7F4330B0u: goto label_7F4330B0;
    case 0x7F4330B8u: goto label_7F4330B8;
    case 0x7F4330F8u: goto label_7F4330F8;
    case 0x7F433100u: goto label_7F433100;
    case 0x7F433108u: goto label_7F433108;
    case 0x7F433144u: goto label_7F433144;
    case 0x7F433180u: goto label_7F433180;
    case 0x7F433188u: goto label_7F433188;
    case 0x7F433240u: goto label_7F433240;
    case 0x7F433254u: goto label_7F433254;
    case 0x7F433264u: goto label_7F433264;
    case 0x7F433278u: goto label_7F433278;
    case 0x7F433294u: goto label_7F433294;
    case 0x7F4332C8u: goto label_7F4332C8;
    case 0x7F4332D0u: goto label_7F4332D0;
    case 0x7F4332E4u: goto label_7F4332E4;
    case 0x7F433320u: goto label_7F433320;
    case 0x7F433344u: goto label_7F433344;
    case 0x7F43335Cu: goto label_7F43335C;
    case 0x7F43336Cu: goto label_7F43336C;
    case 0x7F433378u: goto label_7F433378;
    case 0x7F433384u: goto label_7F433384;
    case 0x7F4333A0u: goto label_7F4333A0;
    case 0x7F4333ACu: goto label_7F4333AC;
    case 0x7F4333C0u: goto label_7F4333C0;
    case 0x7F433420u: goto label_7F433420;
    case 0x7F433438u: goto label_7F433438;
    case 0x7F433444u: goto label_7F433444;
    case 0x7F43351Cu: goto label_7F43351C;
    case 0x7F433524u: goto label_7F433524;
    case 0x7F433558u: goto label_7F433558;
    case 0x7F433594u: goto label_7F433594;
    case 0x7F4335A0u: goto label_7F4335A0;
    case 0x7F4335ACu: goto label_7F4335AC;
    case 0x7F4335B8u: goto label_7F4335B8;
    case 0x7F4335E4u: goto label_7F4335E4;
    case 0x7F433638u: goto label_7F433638;
    case 0x7F433654u: goto label_7F433654;
    case 0x7F433664u: goto label_7F433664;
    case 0x7F433674u: goto label_7F433674;
    case 0x7F4336BCu: goto label_7F4336BC;
    case 0x7F433720u: goto label_7F433720;
    case 0x7F4338A8u: goto label_7F4338A8;
    case 0x7F4338DCu: goto label_7F4338DC;
    case 0x7F4339FCu: goto label_7F4339FC;
    case 0x7F433A1Cu: goto label_7F433A1C;
    case 0x7F433A34u: goto label_7F433A34;
    case 0x7F433A60u: goto label_7F433A60;
    case 0x7F433ABCu: goto label_7F433ABC;
    case 0x7F433ADCu: goto label_7F433ADC;
    case 0x7F433B10u: goto label_7F433B10;
    case 0x7F433B20u: goto label_7F433B20;
    case 0x7F433BACu: goto label_7F433BAC;
    case 0x7F433C00u: goto label_7F433C00;
    case 0x7F433C20u: goto label_7F433C20;
    case 0x7F433C38u: goto label_7F433C38;
    case 0x7F433C50u: goto label_7F433C50;
    case 0x7F433C68u: goto label_7F433C68;
    case 0x7F433C80u: goto label_7F433C80;
    case 0x7F433CA0u: goto label_7F433CA0;
    case 0x7F433CB8u: goto label_7F433CB8;
    case 0x7F433CD0u: goto label_7F433CD0;
    case 0x7F433CE8u: goto label_7F433CE8;
    case 0x7F433D74u: goto label_7F433D74;
    case 0x7F433DACu: goto label_7F433DAC;
    case 0x7F433DE8u: goto label_7F433DE8;
    case 0x7F433DFCu: goto label_7F433DFC;
    case 0x7F433E08u: goto label_7F433E08;
    case 0x7F433E28u: goto label_7F433E28;
    case 0x7F433E94u: goto label_7F433E94;
    case 0x7F433EC8u: goto label_7F433EC8;
    case 0x7F433ED4u: goto label_7F433ED4;
    case 0x7F433EE0u: goto label_7F433EE0;
    case 0x7F433EECu: goto label_7F433EEC;
    case 0x7F433F18u: goto label_7F433F18;
    case 0x7F433F6Cu: goto label_7F433F6C;
    case 0x7F433FD0u: goto label_7F433FD0;
    case 0x7F433FE0u: goto label_7F433FE0;
    case 0x7F433FF0u: goto label_7F433FF0;
    case 0x7F434000u: goto label_7F434000;
    case 0x7F43400Cu: goto label_7F43400C;
    case 0x7F434050u: goto label_7F434050;
    case 0x7F43406Cu: goto label_7F43406C;
    case 0x7F43407Cu: goto label_7F43407C;
    case 0x7F43408Cu: goto label_7F43408C;
    case 0x7F4340D4u: goto label_7F4340D4;
    default: return;
    }
}

