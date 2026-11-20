// DolRecomp output
#include "../generated.h"

static void loop_7F0AE0D0(CPUState* ctx) {
label_7F0AE0D0:
    ctx->downcount -= 7;
    // 7F0AE0D0: add   r9, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    // 7F0AE0D4: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F0AE0D8u;
    // 7F0AE0D8: stw     r8, 140(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F0AE0DCu;
    // 7F0AE0DC: stw     r6, 144(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0AE0E0u;
    // 7F0AE0E0: stw     r5, 148(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F0AE0E4u;
    // 7F0AE0E4: stw     r4, 152(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F0AE0E8: bc    16, 0, 0x7F0AE0D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE0D0u;
                return;
            }
            goto label_7F0AE0D0;
        }
    }

    ctx->pc = 0x7F0AE0ECu;
}

static void loop_7F0AE104(CPUState* ctx) {
label_7F0AE104:
    ctx->downcount -= 5;
    // 7F0AE104: add   r4, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F0AE108: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F0AE10Cu;
    // 7F0AE10C: stw     r6, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F0AE110: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    // 7F0AE114: bc    16, 0, 0x7F0AE104
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE104u;
                return;
            }
            goto label_7F0AE104;
        }
    }

    ctx->pc = 0x7F0AE118u;
}

static void loop_7F0AE574(CPUState* ctx) {
label_7F0AE574:
    ctx->downcount -= 4;
    // 7F0AE574: add   r4, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F0AE578: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F0AE57Cu;
    // 7F0AE57C: stw     r6, 316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F0AE580: bc    16, 0, 0x7F0AE574
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE574u;
                return;
            }
            goto label_7F0AE574;
        }
    }

    ctx->pc = 0x7F0AE584u;
}

static void loop_7F0AF204(CPUState* ctx) {
label_7F0AF204:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0AF204u;
    // 7F0AF204: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0AF208u;
    // 7F0AF208: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0AF20Cu;
    // 7F0AF20C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0AF210u;
    // 7F0AF210: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0AF214: bc    16, 0, 0x7F0AF204
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF204u;
                return;
            }
            goto label_7F0AF204;
        }
    }

    ctx->pc = 0x7F0AF218u;
}

static void loop_7F0AF3EC(CPUState* ctx) {
label_7F0AF3EC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0AF3ECu;
    // 7F0AF3EC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0AF3F0u;
    // 7F0AF3F0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0AF3F4u;
    // 7F0AF3F4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0AF3F8u;
    // 7F0AF3F8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0AF3FC: bc    16, 0, 0x7F0AF3EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF3ECu;
                return;
            }
            goto label_7F0AF3EC;
        }
    }

    ctx->pc = 0x7F0AF400u;
}

static void loop_7F0AF750(CPUState* ctx) {
label_7F0AF750:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0AF750u;
    // 7F0AF750: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0AF754u;
    // 7F0AF754: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0AF758u;
    // 7F0AF758: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0AF75Cu;
    // 7F0AF75C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0AF760: bc    16, 0, 0x7F0AF750
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF750u;
                return;
            }
            goto label_7F0AF750;
        }
    }

    ctx->pc = 0x7F0AF764u;
}

static void loop_7F0AFF3C(CPUState* ctx) {
label_7F0AFF3C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0AFF3Cu;
    // 7F0AFF3C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0AFF40u;
    // 7F0AFF40: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F0AFF44u;
    // 7F0AFF44: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0AFF48u;
    // 7F0AFF48: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F0AFF4C: bc    16, 0, 0x7F0AFF3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AFF3Cu;
                return;
            }
            goto label_7F0AFF3C;
        }
    }

    ctx->pc = 0x7F0AFF50u;
}

void func_7F0AC0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0AC0ECu: goto label_7F0AC0EC;
    case 0x7F0AC0F0u: goto label_7F0AC0F0;
    case 0x7F0AC0F4u: goto label_7F0AC0F4;
    case 0x7F0AC0F8u: goto label_7F0AC0F8;
    case 0x7F0AC0FCu: goto label_7F0AC0FC;
    case 0x7F0AC100u: goto label_7F0AC100;
    case 0x7F0AC104u: goto label_7F0AC104;
    case 0x7F0AC108u: goto label_7F0AC108;
    case 0x7F0AC10Cu: goto label_7F0AC10C;
    case 0x7F0AC110u: goto label_7F0AC110;
    case 0x7F0AC114u: goto label_7F0AC114;
    case 0x7F0AC118u: goto label_7F0AC118;
    case 0x7F0AC11Cu: goto label_7F0AC11C;
    case 0x7F0AC120u: goto label_7F0AC120;
    case 0x7F0AC124u: goto label_7F0AC124;
    case 0x7F0AC128u: goto label_7F0AC128;
    case 0x7F0AC12Cu: goto label_7F0AC12C;
    case 0x7F0AC130u: goto label_7F0AC130;
    case 0x7F0AC134u: goto label_7F0AC134;
    case 0x7F0AC138u: goto label_7F0AC138;
    case 0x7F0AC13Cu: goto label_7F0AC13C;
    case 0x7F0AC140u: goto label_7F0AC140;
    case 0x7F0AC144u: goto label_7F0AC144;
    case 0x7F0AC148u: goto label_7F0AC148;
    case 0x7F0AC14Cu: goto label_7F0AC14C;
    case 0x7F0AC150u: goto label_7F0AC150;
    case 0x7F0AC154u: goto label_7F0AC154;
    case 0x7F0AC158u: goto label_7F0AC158;
    case 0x7F0AC15Cu: goto label_7F0AC15C;
    case 0x7F0AC160u: goto label_7F0AC160;
    case 0x7F0AC164u: goto label_7F0AC164;
    case 0x7F0AC168u: goto label_7F0AC168;
    case 0x7F0AC16Cu: goto label_7F0AC16C;
    case 0x7F0AC170u: goto label_7F0AC170;
    case 0x7F0AC174u: goto label_7F0AC174;
    case 0x7F0AC178u: goto label_7F0AC178;
    case 0x7F0AC17Cu: goto label_7F0AC17C;
    case 0x7F0AC180u: goto label_7F0AC180;
    case 0x7F0AC184u: goto label_7F0AC184;
    case 0x7F0AC188u: goto label_7F0AC188;
    case 0x7F0AC18Cu: goto label_7F0AC18C;
    case 0x7F0AC190u: goto label_7F0AC190;
    case 0x7F0AC194u: goto label_7F0AC194;
    case 0x7F0AC198u: goto label_7F0AC198;
    case 0x7F0AC19Cu: goto label_7F0AC19C;
    case 0x7F0AC1A0u: goto label_7F0AC1A0;
    case 0x7F0AC1A4u: goto label_7F0AC1A4;
    case 0x7F0AC1A8u: goto label_7F0AC1A8;
    case 0x7F0AC1ACu: goto label_7F0AC1AC;
    case 0x7F0AC1B0u: goto label_7F0AC1B0;
    case 0x7F0AC1B4u: goto label_7F0AC1B4;
    case 0x7F0AC1B8u: goto label_7F0AC1B8;
    case 0x7F0AC1BCu: goto label_7F0AC1BC;
    case 0x7F0AC1C0u: goto label_7F0AC1C0;
    case 0x7F0AC1C4u: goto label_7F0AC1C4;
    case 0x7F0AC1C8u: goto label_7F0AC1C8;
    case 0x7F0AC1CCu: goto label_7F0AC1CC;
    case 0x7F0AC1D0u: goto label_7F0AC1D0;
    case 0x7F0AC1D4u: goto label_7F0AC1D4;
    case 0x7F0AC1D8u: goto label_7F0AC1D8;
    case 0x7F0AC1DCu: goto label_7F0AC1DC;
    case 0x7F0AC1E0u: goto label_7F0AC1E0;
    case 0x7F0AC1E4u: goto label_7F0AC1E4;
    case 0x7F0AC1E8u: goto label_7F0AC1E8;
    case 0x7F0AC1ECu: goto label_7F0AC1EC;
    case 0x7F0AC1F0u: goto label_7F0AC1F0;
    case 0x7F0AC1F4u: goto label_7F0AC1F4;
    case 0x7F0AC1F8u: goto label_7F0AC1F8;
    case 0x7F0AC1FCu: goto label_7F0AC1FC;
    case 0x7F0AC200u: goto label_7F0AC200;
    case 0x7F0AC204u: goto label_7F0AC204;
    case 0x7F0AC208u: goto label_7F0AC208;
    case 0x7F0AC20Cu: goto label_7F0AC20C;
    case 0x7F0AC210u: goto label_7F0AC210;
    case 0x7F0AC214u: goto label_7F0AC214;
    case 0x7F0AC218u: goto label_7F0AC218;
    case 0x7F0AC21Cu: goto label_7F0AC21C;
    case 0x7F0AC220u: goto label_7F0AC220;
    case 0x7F0AC224u: goto label_7F0AC224;
    case 0x7F0AC228u: goto label_7F0AC228;
    case 0x7F0AC22Cu: goto label_7F0AC22C;
    case 0x7F0AC230u: goto label_7F0AC230;
    case 0x7F0AC234u: goto label_7F0AC234;
    case 0x7F0AC238u: goto label_7F0AC238;
    case 0x7F0AC23Cu: goto label_7F0AC23C;
    case 0x7F0AC240u: goto label_7F0AC240;
    case 0x7F0AC244u: goto label_7F0AC244;
    case 0x7F0AC248u: goto label_7F0AC248;
    case 0x7F0AC24Cu: goto label_7F0AC24C;
    case 0x7F0AC250u: goto label_7F0AC250;
    case 0x7F0AC254u: goto label_7F0AC254;
    case 0x7F0AC258u: goto label_7F0AC258;
    case 0x7F0AC25Cu: goto label_7F0AC25C;
    case 0x7F0AC260u: goto label_7F0AC260;
    case 0x7F0AC264u: goto label_7F0AC264;
    case 0x7F0AC268u: goto label_7F0AC268;
    case 0x7F0AC26Cu: goto label_7F0AC26C;
    case 0x7F0AC270u: goto label_7F0AC270;
    case 0x7F0AC274u: goto label_7F0AC274;
    case 0x7F0AC278u: goto label_7F0AC278;
    case 0x7F0AC27Cu: goto label_7F0AC27C;
    case 0x7F0AC280u: goto label_7F0AC280;
    case 0x7F0AC284u: goto label_7F0AC284;
    case 0x7F0AC288u: goto label_7F0AC288;
    case 0x7F0AC28Cu: goto label_7F0AC28C;
    case 0x7F0AC290u: goto label_7F0AC290;
    case 0x7F0AC294u: goto label_7F0AC294;
    case 0x7F0AC298u: goto label_7F0AC298;
    case 0x7F0AC29Cu: goto label_7F0AC29C;
    case 0x7F0AC2A0u: goto label_7F0AC2A0;
    case 0x7F0AC2A4u: goto label_7F0AC2A4;
    case 0x7F0AC2A8u: goto label_7F0AC2A8;
    case 0x7F0AC2ACu: goto label_7F0AC2AC;
    case 0x7F0AC2B0u: goto label_7F0AC2B0;
    case 0x7F0AC2B4u: goto label_7F0AC2B4;
    case 0x7F0AC2B8u: goto label_7F0AC2B8;
    case 0x7F0AC2BCu: goto label_7F0AC2BC;
    case 0x7F0AC2C0u: goto label_7F0AC2C0;
    case 0x7F0AC2C4u: goto label_7F0AC2C4;
    case 0x7F0AC2C8u: goto label_7F0AC2C8;
    case 0x7F0AC2CCu: goto label_7F0AC2CC;
    case 0x7F0AC2D0u: goto label_7F0AC2D0;
    case 0x7F0AC2D4u: goto label_7F0AC2D4;
    case 0x7F0AC2D8u: goto label_7F0AC2D8;
    case 0x7F0AC2DCu: goto label_7F0AC2DC;
    case 0x7F0AC2E0u: goto label_7F0AC2E0;
    case 0x7F0AC2E4u: goto label_7F0AC2E4;
    case 0x7F0AC2E8u: goto label_7F0AC2E8;
    case 0x7F0AC2ECu: goto label_7F0AC2EC;
    case 0x7F0AC2F0u: goto label_7F0AC2F0;
    case 0x7F0AC2F4u: goto label_7F0AC2F4;
    case 0x7F0AC2F8u: goto label_7F0AC2F8;
    case 0x7F0AC2FCu: goto label_7F0AC2FC;
    case 0x7F0AC300u: goto label_7F0AC300;
    case 0x7F0AC304u: goto label_7F0AC304;
    case 0x7F0AC308u: goto label_7F0AC308;
    case 0x7F0AC30Cu: goto label_7F0AC30C;
    case 0x7F0AC310u: goto label_7F0AC310;
    case 0x7F0AC314u: goto label_7F0AC314;
    case 0x7F0AC318u: goto label_7F0AC318;
    case 0x7F0AC31Cu: goto label_7F0AC31C;
    case 0x7F0AC320u: goto label_7F0AC320;
    case 0x7F0AC324u: goto label_7F0AC324;
    case 0x7F0AC328u: goto label_7F0AC328;
    case 0x7F0AC32Cu: goto label_7F0AC32C;
    case 0x7F0AC330u: goto label_7F0AC330;
    case 0x7F0AC334u: goto label_7F0AC334;
    case 0x7F0AC338u: goto label_7F0AC338;
    case 0x7F0AC33Cu: goto label_7F0AC33C;
    case 0x7F0AC340u: goto label_7F0AC340;
    case 0x7F0AC344u: goto label_7F0AC344;
    case 0x7F0AC348u: goto label_7F0AC348;
    case 0x7F0AC34Cu: goto label_7F0AC34C;
    case 0x7F0AC350u: goto label_7F0AC350;
    case 0x7F0AC354u: goto label_7F0AC354;
    case 0x7F0AC358u: goto label_7F0AC358;
    case 0x7F0AC35Cu: goto label_7F0AC35C;
    case 0x7F0AC360u: goto label_7F0AC360;
    case 0x7F0AC364u: goto label_7F0AC364;
    case 0x7F0AC368u: goto label_7F0AC368;
    case 0x7F0AC36Cu: goto label_7F0AC36C;
    case 0x7F0AC370u: goto label_7F0AC370;
    case 0x7F0AC374u: goto label_7F0AC374;
    case 0x7F0AC378u: goto label_7F0AC378;
    case 0x7F0AC37Cu: goto label_7F0AC37C;
    case 0x7F0AC380u: goto label_7F0AC380;
    case 0x7F0AC384u: goto label_7F0AC384;
    case 0x7F0AC388u: goto label_7F0AC388;
    case 0x7F0AC38Cu: goto label_7F0AC38C;
    case 0x7F0AC390u: goto label_7F0AC390;
    case 0x7F0AC394u: goto label_7F0AC394;
    case 0x7F0AC398u: goto label_7F0AC398;
    case 0x7F0AC39Cu: goto label_7F0AC39C;
    case 0x7F0AC3A0u: goto label_7F0AC3A0;
    case 0x7F0AC3A4u: goto label_7F0AC3A4;
    case 0x7F0AC3A8u: goto label_7F0AC3A8;
    case 0x7F0AC3ACu: goto label_7F0AC3AC;
    case 0x7F0AC3B0u: goto label_7F0AC3B0;
    case 0x7F0AC3B4u: goto label_7F0AC3B4;
    case 0x7F0AC3B8u: goto label_7F0AC3B8;
    case 0x7F0AC3BCu: goto label_7F0AC3BC;
    case 0x7F0AC3C0u: goto label_7F0AC3C0;
    case 0x7F0AC3C4u: goto label_7F0AC3C4;
    case 0x7F0AC3C8u: goto label_7F0AC3C8;
    case 0x7F0AC3CCu: goto label_7F0AC3CC;
    case 0x7F0AC3D0u: goto label_7F0AC3D0;
    case 0x7F0AC3D4u: goto label_7F0AC3D4;
    case 0x7F0AC3D8u: goto label_7F0AC3D8;
    case 0x7F0AC3DCu: goto label_7F0AC3DC;
    case 0x7F0AC3E0u: goto label_7F0AC3E0;
    case 0x7F0AC3E4u: goto label_7F0AC3E4;
    case 0x7F0AC3E8u: goto label_7F0AC3E8;
    case 0x7F0AC3ECu: goto label_7F0AC3EC;
    case 0x7F0AC3F0u: goto label_7F0AC3F0;
    case 0x7F0AC3F4u: goto label_7F0AC3F4;
    case 0x7F0AC3F8u: goto label_7F0AC3F8;
    case 0x7F0AC3FCu: goto label_7F0AC3FC;
    case 0x7F0AC400u: goto label_7F0AC400;
    case 0x7F0AC404u: goto label_7F0AC404;
    case 0x7F0AC408u: goto label_7F0AC408;
    case 0x7F0AC40Cu: goto label_7F0AC40C;
    case 0x7F0AC410u: goto label_7F0AC410;
    case 0x7F0AC414u: goto label_7F0AC414;
    case 0x7F0AC418u: goto label_7F0AC418;
    case 0x7F0AC41Cu: goto label_7F0AC41C;
    case 0x7F0AC420u: goto label_7F0AC420;
    case 0x7F0AC424u: goto label_7F0AC424;
    case 0x7F0AC428u: goto label_7F0AC428;
    case 0x7F0AC42Cu: goto label_7F0AC42C;
    case 0x7F0AC430u: goto label_7F0AC430;
    case 0x7F0AC434u: goto label_7F0AC434;
    case 0x7F0AC438u: goto label_7F0AC438;
    case 0x7F0AC43Cu: goto label_7F0AC43C;
    case 0x7F0AC440u: goto label_7F0AC440;
    case 0x7F0AC444u: goto label_7F0AC444;
    case 0x7F0AC448u: goto label_7F0AC448;
    case 0x7F0AC44Cu: goto label_7F0AC44C;
    case 0x7F0AC450u: goto label_7F0AC450;
    case 0x7F0AC454u: goto label_7F0AC454;
    case 0x7F0AC458u: goto label_7F0AC458;
    case 0x7F0AC45Cu: goto label_7F0AC45C;
    case 0x7F0AC460u: goto label_7F0AC460;
    case 0x7F0AC464u: goto label_7F0AC464;
    case 0x7F0AC468u: goto label_7F0AC468;
    case 0x7F0AC46Cu: goto label_7F0AC46C;
    case 0x7F0AC470u: goto label_7F0AC470;
    case 0x7F0AC474u: goto label_7F0AC474;
    case 0x7F0AC478u: goto label_7F0AC478;
    case 0x7F0AC47Cu: goto label_7F0AC47C;
    case 0x7F0AC480u: goto label_7F0AC480;
    case 0x7F0AC484u: goto label_7F0AC484;
    case 0x7F0AC488u: goto label_7F0AC488;
    case 0x7F0AC48Cu: goto label_7F0AC48C;
    case 0x7F0AC490u: goto label_7F0AC490;
    case 0x7F0AC494u: goto label_7F0AC494;
    case 0x7F0AC498u: goto label_7F0AC498;
    case 0x7F0AC49Cu: goto label_7F0AC49C;
    case 0x7F0AC4A0u: goto label_7F0AC4A0;
    case 0x7F0AC4A4u: goto label_7F0AC4A4;
    case 0x7F0AC4A8u: goto label_7F0AC4A8;
    case 0x7F0AC4ACu: goto label_7F0AC4AC;
    case 0x7F0AC4B0u: goto label_7F0AC4B0;
    case 0x7F0AC4B4u: goto label_7F0AC4B4;
    case 0x7F0AC4B8u: goto label_7F0AC4B8;
    case 0x7F0AC4BCu: goto label_7F0AC4BC;
    case 0x7F0AC4C0u: goto label_7F0AC4C0;
    case 0x7F0AC4C4u: goto label_7F0AC4C4;
    case 0x7F0AC4C8u: goto label_7F0AC4C8;
    case 0x7F0AC4CCu: goto label_7F0AC4CC;
    case 0x7F0AC4D0u: goto label_7F0AC4D0;
    case 0x7F0AC4D4u: goto label_7F0AC4D4;
    case 0x7F0AC4D8u: goto label_7F0AC4D8;
    case 0x7F0AC4DCu: goto label_7F0AC4DC;
    case 0x7F0AC4E0u: goto label_7F0AC4E0;
    case 0x7F0AC4E4u: goto label_7F0AC4E4;
    case 0x7F0AC4E8u: goto label_7F0AC4E8;
    case 0x7F0AC4ECu: goto label_7F0AC4EC;
    case 0x7F0AC4F0u: goto label_7F0AC4F0;
    case 0x7F0AC4F4u: goto label_7F0AC4F4;
    case 0x7F0AC4F8u: goto label_7F0AC4F8;
    case 0x7F0AC4FCu: goto label_7F0AC4FC;
    case 0x7F0AC500u: goto label_7F0AC500;
    case 0x7F0AC504u: goto label_7F0AC504;
    case 0x7F0AC508u: goto label_7F0AC508;
    case 0x7F0AC50Cu: goto label_7F0AC50C;
    case 0x7F0AC510u: goto label_7F0AC510;
    case 0x7F0AC514u: goto label_7F0AC514;
    case 0x7F0AC518u: goto label_7F0AC518;
    case 0x7F0AC51Cu: goto label_7F0AC51C;
    case 0x7F0AC520u: goto label_7F0AC520;
    case 0x7F0AC524u: goto label_7F0AC524;
    case 0x7F0AC528u: goto label_7F0AC528;
    case 0x7F0AC52Cu: goto label_7F0AC52C;
    case 0x7F0AC530u: goto label_7F0AC530;
    case 0x7F0AC534u: goto label_7F0AC534;
    case 0x7F0AC538u: goto label_7F0AC538;
    case 0x7F0AC53Cu: goto label_7F0AC53C;
    case 0x7F0AC540u: goto label_7F0AC540;
    case 0x7F0AC544u: goto label_7F0AC544;
    case 0x7F0AC548u: goto label_7F0AC548;
    case 0x7F0AC54Cu: goto label_7F0AC54C;
    case 0x7F0AC550u: goto label_7F0AC550;
    case 0x7F0AC554u: goto label_7F0AC554;
    case 0x7F0AC558u: goto label_7F0AC558;
    case 0x7F0AC55Cu: goto label_7F0AC55C;
    case 0x7F0AC560u: goto label_7F0AC560;
    case 0x7F0AC564u: goto label_7F0AC564;
    case 0x7F0AC568u: goto label_7F0AC568;
    case 0x7F0AC56Cu: goto label_7F0AC56C;
    case 0x7F0AC570u: goto label_7F0AC570;
    case 0x7F0AC574u: goto label_7F0AC574;
    case 0x7F0AC578u: goto label_7F0AC578;
    case 0x7F0AC57Cu: goto label_7F0AC57C;
    case 0x7F0AC580u: goto label_7F0AC580;
    case 0x7F0AC584u: goto label_7F0AC584;
    case 0x7F0AC588u: goto label_7F0AC588;
    case 0x7F0AC58Cu: goto label_7F0AC58C;
    case 0x7F0AC590u: goto label_7F0AC590;
    case 0x7F0AC594u: goto label_7F0AC594;
    case 0x7F0AC598u: goto label_7F0AC598;
    case 0x7F0AC59Cu: goto label_7F0AC59C;
    case 0x7F0AC5A0u: goto label_7F0AC5A0;
    case 0x7F0AC5A4u: goto label_7F0AC5A4;
    case 0x7F0AC5A8u: goto label_7F0AC5A8;
    case 0x7F0AC5ACu: goto label_7F0AC5AC;
    case 0x7F0AC5B0u: goto label_7F0AC5B0;
    case 0x7F0AC5B4u: goto label_7F0AC5B4;
    case 0x7F0AC5B8u: goto label_7F0AC5B8;
    case 0x7F0AC5BCu: goto label_7F0AC5BC;
    case 0x7F0AC5C0u: goto label_7F0AC5C0;
    case 0x7F0AC5C4u: goto label_7F0AC5C4;
    case 0x7F0AC5C8u: goto label_7F0AC5C8;
    case 0x7F0AC5CCu: goto label_7F0AC5CC;
    case 0x7F0AC5D0u: goto label_7F0AC5D0;
    case 0x7F0AC5D4u: goto label_7F0AC5D4;
    case 0x7F0AC5D8u: goto label_7F0AC5D8;
    case 0x7F0AC5DCu: goto label_7F0AC5DC;
    case 0x7F0AC5E0u: goto label_7F0AC5E0;
    case 0x7F0AC5E4u: goto label_7F0AC5E4;
    case 0x7F0AC5E8u: goto label_7F0AC5E8;
    case 0x7F0AC5ECu: goto label_7F0AC5EC;
    case 0x7F0AC5F0u: goto label_7F0AC5F0;
    case 0x7F0AC5F4u: goto label_7F0AC5F4;
    case 0x7F0AC5F8u: goto label_7F0AC5F8;
    case 0x7F0AC5FCu: goto label_7F0AC5FC;
    case 0x7F0AC600u: goto label_7F0AC600;
    case 0x7F0AC604u: goto label_7F0AC604;
    case 0x7F0AC608u: goto label_7F0AC608;
    case 0x7F0AC60Cu: goto label_7F0AC60C;
    case 0x7F0AC610u: goto label_7F0AC610;
    case 0x7F0AC614u: goto label_7F0AC614;
    case 0x7F0AC618u: goto label_7F0AC618;
    case 0x7F0AC61Cu: goto label_7F0AC61C;
    case 0x7F0AC620u: goto label_7F0AC620;
    case 0x7F0AC624u: goto label_7F0AC624;
    case 0x7F0AC628u: goto label_7F0AC628;
    case 0x7F0AC62Cu: goto label_7F0AC62C;
    case 0x7F0AC630u: goto label_7F0AC630;
    case 0x7F0AC634u: goto label_7F0AC634;
    case 0x7F0AC638u: goto label_7F0AC638;
    case 0x7F0AC63Cu: goto label_7F0AC63C;
    case 0x7F0AC640u: goto label_7F0AC640;
    case 0x7F0AC644u: goto label_7F0AC644;
    case 0x7F0AC648u: goto label_7F0AC648;
    case 0x7F0AC64Cu: goto label_7F0AC64C;
    case 0x7F0AC650u: goto label_7F0AC650;
    case 0x7F0AC654u: goto label_7F0AC654;
    case 0x7F0AC658u: goto label_7F0AC658;
    case 0x7F0AC65Cu: goto label_7F0AC65C;
    case 0x7F0AC660u: goto label_7F0AC660;
    case 0x7F0AC664u: goto label_7F0AC664;
    case 0x7F0AC668u: goto label_7F0AC668;
    case 0x7F0AC66Cu: goto label_7F0AC66C;
    case 0x7F0AC670u: goto label_7F0AC670;
    case 0x7F0AC674u: goto label_7F0AC674;
    case 0x7F0AC678u: goto label_7F0AC678;
    case 0x7F0AC67Cu: goto label_7F0AC67C;
    case 0x7F0AC680u: goto label_7F0AC680;
    case 0x7F0AC684u: goto label_7F0AC684;
    case 0x7F0AC688u: goto label_7F0AC688;
    case 0x7F0AC68Cu: goto label_7F0AC68C;
    case 0x7F0AC690u: goto label_7F0AC690;
    case 0x7F0AC694u: goto label_7F0AC694;
    case 0x7F0AC698u: goto label_7F0AC698;
    case 0x7F0AC69Cu: goto label_7F0AC69C;
    case 0x7F0AC6A0u: goto label_7F0AC6A0;
    case 0x7F0AC6A4u: goto label_7F0AC6A4;
    case 0x7F0AC6A8u: goto label_7F0AC6A8;
    case 0x7F0AC6ACu: goto label_7F0AC6AC;
    case 0x7F0AC6B0u: goto label_7F0AC6B0;
    case 0x7F0AC6B4u: goto label_7F0AC6B4;
    case 0x7F0AC6B8u: goto label_7F0AC6B8;
    case 0x7F0AC6BCu: goto label_7F0AC6BC;
    case 0x7F0AC6C0u: goto label_7F0AC6C0;
    case 0x7F0AC6C4u: goto label_7F0AC6C4;
    case 0x7F0AC6C8u: goto label_7F0AC6C8;
    case 0x7F0AC6CCu: goto label_7F0AC6CC;
    case 0x7F0AC6D0u: goto label_7F0AC6D0;
    case 0x7F0AC6D4u: goto label_7F0AC6D4;
    case 0x7F0AC6D8u: goto label_7F0AC6D8;
    case 0x7F0AC6DCu: goto label_7F0AC6DC;
    case 0x7F0AC6E0u: goto label_7F0AC6E0;
    case 0x7F0AC6E4u: goto label_7F0AC6E4;
    case 0x7F0AC6E8u: goto label_7F0AC6E8;
    case 0x7F0AC6ECu: goto label_7F0AC6EC;
    case 0x7F0AC6F0u: goto label_7F0AC6F0;
    case 0x7F0AC6F4u: goto label_7F0AC6F4;
    case 0x7F0AC6F8u: goto label_7F0AC6F8;
    case 0x7F0AC6FCu: goto label_7F0AC6FC;
    case 0x7F0AC700u: goto label_7F0AC700;
    case 0x7F0AC704u: goto label_7F0AC704;
    case 0x7F0AC708u: goto label_7F0AC708;
    case 0x7F0AC70Cu: goto label_7F0AC70C;
    case 0x7F0AC710u: goto label_7F0AC710;
    case 0x7F0AC714u: goto label_7F0AC714;
    case 0x7F0AC718u: goto label_7F0AC718;
    case 0x7F0AC71Cu: goto label_7F0AC71C;
    case 0x7F0AC720u: goto label_7F0AC720;
    case 0x7F0AC724u: goto label_7F0AC724;
    case 0x7F0AC728u: goto label_7F0AC728;
    case 0x7F0AC72Cu: goto label_7F0AC72C;
    case 0x7F0AC730u: goto label_7F0AC730;
    case 0x7F0AC734u: goto label_7F0AC734;
    case 0x7F0AC738u: goto label_7F0AC738;
    case 0x7F0AC73Cu: goto label_7F0AC73C;
    case 0x7F0AC740u: goto label_7F0AC740;
    case 0x7F0AC744u: goto label_7F0AC744;
    case 0x7F0AC748u: goto label_7F0AC748;
    case 0x7F0AC74Cu: goto label_7F0AC74C;
    case 0x7F0AC750u: goto label_7F0AC750;
    case 0x7F0AC754u: goto label_7F0AC754;
    case 0x7F0AC758u: goto label_7F0AC758;
    case 0x7F0AC75Cu: goto label_7F0AC75C;
    case 0x7F0AC760u: goto label_7F0AC760;
    case 0x7F0AC764u: goto label_7F0AC764;
    case 0x7F0AC768u: goto label_7F0AC768;
    case 0x7F0AC76Cu: goto label_7F0AC76C;
    case 0x7F0AC770u: goto label_7F0AC770;
    case 0x7F0AC774u: goto label_7F0AC774;
    case 0x7F0AC778u: goto label_7F0AC778;
    case 0x7F0AC77Cu: goto label_7F0AC77C;
    case 0x7F0AC780u: goto label_7F0AC780;
    case 0x7F0AC784u: goto label_7F0AC784;
    case 0x7F0AC788u: goto label_7F0AC788;
    case 0x7F0AC78Cu: goto label_7F0AC78C;
    case 0x7F0AC790u: goto label_7F0AC790;
    case 0x7F0AC794u: goto label_7F0AC794;
    case 0x7F0AC798u: goto label_7F0AC798;
    case 0x7F0AC79Cu: goto label_7F0AC79C;
    case 0x7F0AC7A0u: goto label_7F0AC7A0;
    case 0x7F0AC7A4u: goto label_7F0AC7A4;
    case 0x7F0AC7A8u: goto label_7F0AC7A8;
    case 0x7F0AC7ACu: goto label_7F0AC7AC;
    case 0x7F0AC7B0u: goto label_7F0AC7B0;
    case 0x7F0AC7B4u: goto label_7F0AC7B4;
    case 0x7F0AC7B8u: goto label_7F0AC7B8;
    case 0x7F0AC7BCu: goto label_7F0AC7BC;
    case 0x7F0AC7C0u: goto label_7F0AC7C0;
    case 0x7F0AC7C4u: goto label_7F0AC7C4;
    case 0x7F0AC7C8u: goto label_7F0AC7C8;
    case 0x7F0AC7CCu: goto label_7F0AC7CC;
    case 0x7F0AC7D0u: goto label_7F0AC7D0;
    case 0x7F0AC7D4u: goto label_7F0AC7D4;
    case 0x7F0AC7D8u: goto label_7F0AC7D8;
    case 0x7F0AC7DCu: goto label_7F0AC7DC;
    case 0x7F0AC7E0u: goto label_7F0AC7E0;
    case 0x7F0AC7E4u: goto label_7F0AC7E4;
    case 0x7F0AC7E8u: goto label_7F0AC7E8;
    case 0x7F0AC7ECu: goto label_7F0AC7EC;
    case 0x7F0AC7F0u: goto label_7F0AC7F0;
    case 0x7F0AC7F4u: goto label_7F0AC7F4;
    case 0x7F0AC7F8u: goto label_7F0AC7F8;
    case 0x7F0AC7FCu: goto label_7F0AC7FC;
    case 0x7F0AC800u: goto label_7F0AC800;
    case 0x7F0AC804u: goto label_7F0AC804;
    case 0x7F0AC808u: goto label_7F0AC808;
    case 0x7F0AC80Cu: goto label_7F0AC80C;
    case 0x7F0AC810u: goto label_7F0AC810;
    case 0x7F0AC814u: goto label_7F0AC814;
    case 0x7F0AC818u: goto label_7F0AC818;
    case 0x7F0AC81Cu: goto label_7F0AC81C;
    case 0x7F0AC820u: goto label_7F0AC820;
    case 0x7F0AC824u: goto label_7F0AC824;
    case 0x7F0AC828u: goto label_7F0AC828;
    case 0x7F0AC82Cu: goto label_7F0AC82C;
    case 0x7F0AC830u: goto label_7F0AC830;
    case 0x7F0AC834u: goto label_7F0AC834;
    case 0x7F0AC838u: goto label_7F0AC838;
    case 0x7F0AC83Cu: goto label_7F0AC83C;
    case 0x7F0AC840u: goto label_7F0AC840;
    case 0x7F0AC844u: goto label_7F0AC844;
    case 0x7F0AC848u: goto label_7F0AC848;
    case 0x7F0AC84Cu: goto label_7F0AC84C;
    case 0x7F0AC850u: goto label_7F0AC850;
    case 0x7F0AC854u: goto label_7F0AC854;
    case 0x7F0AC858u: goto label_7F0AC858;
    case 0x7F0AC85Cu: goto label_7F0AC85C;
    case 0x7F0AC860u: goto label_7F0AC860;
    case 0x7F0AC864u: goto label_7F0AC864;
    case 0x7F0AC868u: goto label_7F0AC868;
    case 0x7F0AC86Cu: goto label_7F0AC86C;
    case 0x7F0AC870u: goto label_7F0AC870;
    case 0x7F0AC874u: goto label_7F0AC874;
    case 0x7F0AC878u: goto label_7F0AC878;
    case 0x7F0AC87Cu: goto label_7F0AC87C;
    case 0x7F0AC880u: goto label_7F0AC880;
    case 0x7F0AC884u: goto label_7F0AC884;
    case 0x7F0AC888u: goto label_7F0AC888;
    case 0x7F0AC88Cu: goto label_7F0AC88C;
    case 0x7F0AC890u: goto label_7F0AC890;
    case 0x7F0AC894u: goto label_7F0AC894;
    case 0x7F0AC898u: goto label_7F0AC898;
    case 0x7F0AC89Cu: goto label_7F0AC89C;
    case 0x7F0AC8A0u: goto label_7F0AC8A0;
    case 0x7F0AC8A4u: goto label_7F0AC8A4;
    case 0x7F0AC8A8u: goto label_7F0AC8A8;
    case 0x7F0AC8ACu: goto label_7F0AC8AC;
    case 0x7F0AC8B0u: goto label_7F0AC8B0;
    case 0x7F0AC8B4u: goto label_7F0AC8B4;
    case 0x7F0AC8B8u: goto label_7F0AC8B8;
    case 0x7F0AC8BCu: goto label_7F0AC8BC;
    case 0x7F0AC8C0u: goto label_7F0AC8C0;
    case 0x7F0AC8C4u: goto label_7F0AC8C4;
    case 0x7F0AC8C8u: goto label_7F0AC8C8;
    case 0x7F0AC8CCu: goto label_7F0AC8CC;
    case 0x7F0AC8D0u: goto label_7F0AC8D0;
    case 0x7F0AC8D4u: goto label_7F0AC8D4;
    case 0x7F0AC8D8u: goto label_7F0AC8D8;
    case 0x7F0AC8DCu: goto label_7F0AC8DC;
    case 0x7F0AC8E0u: goto label_7F0AC8E0;
    case 0x7F0AC8E4u: goto label_7F0AC8E4;
    case 0x7F0AC8E8u: goto label_7F0AC8E8;
    case 0x7F0AC8ECu: goto label_7F0AC8EC;
    case 0x7F0AC8F0u: goto label_7F0AC8F0;
    case 0x7F0AC8F4u: goto label_7F0AC8F4;
    case 0x7F0AC8F8u: goto label_7F0AC8F8;
    case 0x7F0AC8FCu: goto label_7F0AC8FC;
    case 0x7F0AC900u: goto label_7F0AC900;
    case 0x7F0AC904u: goto label_7F0AC904;
    case 0x7F0AC908u: goto label_7F0AC908;
    case 0x7F0AC90Cu: goto label_7F0AC90C;
    case 0x7F0AC910u: goto label_7F0AC910;
    case 0x7F0AC914u: goto label_7F0AC914;
    case 0x7F0AC918u: goto label_7F0AC918;
    case 0x7F0AC91Cu: goto label_7F0AC91C;
    case 0x7F0AC920u: goto label_7F0AC920;
    case 0x7F0AC924u: goto label_7F0AC924;
    case 0x7F0AC928u: goto label_7F0AC928;
    case 0x7F0AC92Cu: goto label_7F0AC92C;
    case 0x7F0AC930u: goto label_7F0AC930;
    case 0x7F0AC934u: goto label_7F0AC934;
    case 0x7F0AC938u: goto label_7F0AC938;
    case 0x7F0AC93Cu: goto label_7F0AC93C;
    case 0x7F0AC940u: goto label_7F0AC940;
    case 0x7F0AC944u: goto label_7F0AC944;
    case 0x7F0AC948u: goto label_7F0AC948;
    case 0x7F0AC94Cu: goto label_7F0AC94C;
    case 0x7F0AC950u: goto label_7F0AC950;
    case 0x7F0AC954u: goto label_7F0AC954;
    case 0x7F0AC958u: goto label_7F0AC958;
    case 0x7F0AC95Cu: goto label_7F0AC95C;
    case 0x7F0AC960u: goto label_7F0AC960;
    case 0x7F0AC964u: goto label_7F0AC964;
    case 0x7F0AC968u: goto label_7F0AC968;
    case 0x7F0AC96Cu: goto label_7F0AC96C;
    case 0x7F0AC970u: goto label_7F0AC970;
    case 0x7F0AC974u: goto label_7F0AC974;
    case 0x7F0AC978u: goto label_7F0AC978;
    case 0x7F0AC97Cu: goto label_7F0AC97C;
    case 0x7F0AC980u: goto label_7F0AC980;
    case 0x7F0AC984u: goto label_7F0AC984;
    case 0x7F0AC988u: goto label_7F0AC988;
    case 0x7F0AC98Cu: goto label_7F0AC98C;
    case 0x7F0AC990u: goto label_7F0AC990;
    case 0x7F0AC994u: goto label_7F0AC994;
    case 0x7F0AC998u: goto label_7F0AC998;
    case 0x7F0AC99Cu: goto label_7F0AC99C;
    case 0x7F0AC9A0u: goto label_7F0AC9A0;
    case 0x7F0AC9A4u: goto label_7F0AC9A4;
    case 0x7F0AC9A8u: goto label_7F0AC9A8;
    case 0x7F0AC9ACu: goto label_7F0AC9AC;
    case 0x7F0AC9B0u: goto label_7F0AC9B0;
    case 0x7F0AC9B4u: goto label_7F0AC9B4;
    case 0x7F0AC9B8u: goto label_7F0AC9B8;
    case 0x7F0AC9BCu: goto label_7F0AC9BC;
    case 0x7F0AC9C0u: goto label_7F0AC9C0;
    case 0x7F0AC9C4u: goto label_7F0AC9C4;
    case 0x7F0AC9C8u: goto label_7F0AC9C8;
    case 0x7F0AC9CCu: goto label_7F0AC9CC;
    case 0x7F0AC9D0u: goto label_7F0AC9D0;
    case 0x7F0AC9D4u: goto label_7F0AC9D4;
    case 0x7F0AC9D8u: goto label_7F0AC9D8;
    case 0x7F0AC9DCu: goto label_7F0AC9DC;
    case 0x7F0AC9E0u: goto label_7F0AC9E0;
    case 0x7F0AC9E4u: goto label_7F0AC9E4;
    case 0x7F0AC9E8u: goto label_7F0AC9E8;
    case 0x7F0AC9ECu: goto label_7F0AC9EC;
    case 0x7F0AC9F0u: goto label_7F0AC9F0;
    case 0x7F0AC9F4u: goto label_7F0AC9F4;
    case 0x7F0AC9F8u: goto label_7F0AC9F8;
    case 0x7F0AC9FCu: goto label_7F0AC9FC;
    case 0x7F0ACA00u: goto label_7F0ACA00;
    case 0x7F0ACA04u: goto label_7F0ACA04;
    case 0x7F0ACA08u: goto label_7F0ACA08;
    case 0x7F0ACA0Cu: goto label_7F0ACA0C;
    case 0x7F0ACA10u: goto label_7F0ACA10;
    case 0x7F0ACA14u: goto label_7F0ACA14;
    case 0x7F0ACA18u: goto label_7F0ACA18;
    case 0x7F0ACA1Cu: goto label_7F0ACA1C;
    case 0x7F0ACA20u: goto label_7F0ACA20;
    case 0x7F0ACA24u: goto label_7F0ACA24;
    case 0x7F0ACA28u: goto label_7F0ACA28;
    case 0x7F0ACA2Cu: goto label_7F0ACA2C;
    case 0x7F0ACA30u: goto label_7F0ACA30;
    case 0x7F0ACA34u: goto label_7F0ACA34;
    case 0x7F0ACA38u: goto label_7F0ACA38;
    case 0x7F0ACA3Cu: goto label_7F0ACA3C;
    case 0x7F0ACA40u: goto label_7F0ACA40;
    case 0x7F0ACA44u: goto label_7F0ACA44;
    case 0x7F0ACA48u: goto label_7F0ACA48;
    case 0x7F0ACA4Cu: goto label_7F0ACA4C;
    case 0x7F0ACA50u: goto label_7F0ACA50;
    case 0x7F0ACA54u: goto label_7F0ACA54;
    case 0x7F0ACA58u: goto label_7F0ACA58;
    case 0x7F0ACA5Cu: goto label_7F0ACA5C;
    case 0x7F0ACA60u: goto label_7F0ACA60;
    case 0x7F0ACA64u: goto label_7F0ACA64;
    case 0x7F0ACA68u: goto label_7F0ACA68;
    case 0x7F0ACA6Cu: goto label_7F0ACA6C;
    case 0x7F0ACA70u: goto label_7F0ACA70;
    case 0x7F0ACA74u: goto label_7F0ACA74;
    case 0x7F0ACA78u: goto label_7F0ACA78;
    case 0x7F0ACA7Cu: goto label_7F0ACA7C;
    case 0x7F0ACA80u: goto label_7F0ACA80;
    case 0x7F0ACA84u: goto label_7F0ACA84;
    case 0x7F0ACA88u: goto label_7F0ACA88;
    case 0x7F0ACA8Cu: goto label_7F0ACA8C;
    case 0x7F0ACA90u: goto label_7F0ACA90;
    case 0x7F0ACA94u: goto label_7F0ACA94;
    case 0x7F0ACA98u: goto label_7F0ACA98;
    case 0x7F0ACA9Cu: goto label_7F0ACA9C;
    case 0x7F0ACAA0u: goto label_7F0ACAA0;
    case 0x7F0ACAA4u: goto label_7F0ACAA4;
    case 0x7F0ACAA8u: goto label_7F0ACAA8;
    case 0x7F0ACAACu: goto label_7F0ACAAC;
    case 0x7F0ACAB0u: goto label_7F0ACAB0;
    case 0x7F0ACAB4u: goto label_7F0ACAB4;
    case 0x7F0ACAB8u: goto label_7F0ACAB8;
    case 0x7F0ACABCu: goto label_7F0ACABC;
    case 0x7F0ACAC0u: goto label_7F0ACAC0;
    case 0x7F0ACAC4u: goto label_7F0ACAC4;
    case 0x7F0ACAC8u: goto label_7F0ACAC8;
    case 0x7F0ACACCu: goto label_7F0ACACC;
    case 0x7F0ACAD0u: goto label_7F0ACAD0;
    case 0x7F0ACAD4u: goto label_7F0ACAD4;
    case 0x7F0ACAD8u: goto label_7F0ACAD8;
    case 0x7F0ACADCu: goto label_7F0ACADC;
    case 0x7F0ACAE0u: goto label_7F0ACAE0;
    case 0x7F0ACAE4u: goto label_7F0ACAE4;
    case 0x7F0ACAE8u: goto label_7F0ACAE8;
    case 0x7F0ACAECu: goto label_7F0ACAEC;
    case 0x7F0ACAF0u: goto label_7F0ACAF0;
    case 0x7F0ACAF4u: goto label_7F0ACAF4;
    case 0x7F0ACAF8u: goto label_7F0ACAF8;
    case 0x7F0ACAFCu: goto label_7F0ACAFC;
    case 0x7F0ACB00u: goto label_7F0ACB00;
    case 0x7F0ACB04u: goto label_7F0ACB04;
    case 0x7F0ACB08u: goto label_7F0ACB08;
    case 0x7F0ACB0Cu: goto label_7F0ACB0C;
    case 0x7F0ACB10u: goto label_7F0ACB10;
    case 0x7F0ACB14u: goto label_7F0ACB14;
    case 0x7F0ACB18u: goto label_7F0ACB18;
    case 0x7F0ACB1Cu: goto label_7F0ACB1C;
    case 0x7F0ACB20u: goto label_7F0ACB20;
    case 0x7F0ACB24u: goto label_7F0ACB24;
    case 0x7F0ACB28u: goto label_7F0ACB28;
    case 0x7F0ACB2Cu: goto label_7F0ACB2C;
    case 0x7F0ACB30u: goto label_7F0ACB30;
    case 0x7F0ACB34u: goto label_7F0ACB34;
    case 0x7F0ACB38u: goto label_7F0ACB38;
    case 0x7F0ACB3Cu: goto label_7F0ACB3C;
    case 0x7F0ACB40u: goto label_7F0ACB40;
    case 0x7F0ACB44u: goto label_7F0ACB44;
    case 0x7F0ACB48u: goto label_7F0ACB48;
    case 0x7F0ACB4Cu: goto label_7F0ACB4C;
    case 0x7F0ACB50u: goto label_7F0ACB50;
    case 0x7F0ACB54u: goto label_7F0ACB54;
    case 0x7F0ACB58u: goto label_7F0ACB58;
    case 0x7F0ACB5Cu: goto label_7F0ACB5C;
    case 0x7F0ACB60u: goto label_7F0ACB60;
    case 0x7F0ACB64u: goto label_7F0ACB64;
    case 0x7F0ACB68u: goto label_7F0ACB68;
    case 0x7F0ACB6Cu: goto label_7F0ACB6C;
    case 0x7F0ACB70u: goto label_7F0ACB70;
    case 0x7F0ACB74u: goto label_7F0ACB74;
    case 0x7F0ACB78u: goto label_7F0ACB78;
    case 0x7F0ACB7Cu: goto label_7F0ACB7C;
    case 0x7F0ACB80u: goto label_7F0ACB80;
    case 0x7F0ACB84u: goto label_7F0ACB84;
    case 0x7F0ACB88u: goto label_7F0ACB88;
    case 0x7F0ACB8Cu: goto label_7F0ACB8C;
    case 0x7F0ACB90u: goto label_7F0ACB90;
    case 0x7F0ACB94u: goto label_7F0ACB94;
    case 0x7F0ACB98u: goto label_7F0ACB98;
    case 0x7F0ACB9Cu: goto label_7F0ACB9C;
    case 0x7F0ACBA0u: goto label_7F0ACBA0;
    case 0x7F0ACBA4u: goto label_7F0ACBA4;
    case 0x7F0ACBA8u: goto label_7F0ACBA8;
    case 0x7F0ACBACu: goto label_7F0ACBAC;
    case 0x7F0ACBB0u: goto label_7F0ACBB0;
    case 0x7F0ACBB4u: goto label_7F0ACBB4;
    case 0x7F0ACBB8u: goto label_7F0ACBB8;
    case 0x7F0ACBBCu: goto label_7F0ACBBC;
    case 0x7F0ACBC0u: goto label_7F0ACBC0;
    case 0x7F0ACBC4u: goto label_7F0ACBC4;
    case 0x7F0ACBC8u: goto label_7F0ACBC8;
    case 0x7F0ACBCCu: goto label_7F0ACBCC;
    case 0x7F0ACBD0u: goto label_7F0ACBD0;
    case 0x7F0ACBD4u: goto label_7F0ACBD4;
    case 0x7F0ACBD8u: goto label_7F0ACBD8;
    case 0x7F0ACBDCu: goto label_7F0ACBDC;
    case 0x7F0ACBE0u: goto label_7F0ACBE0;
    case 0x7F0ACBE4u: goto label_7F0ACBE4;
    case 0x7F0ACBE8u: goto label_7F0ACBE8;
    case 0x7F0ACBECu: goto label_7F0ACBEC;
    case 0x7F0ACBF0u: goto label_7F0ACBF0;
    case 0x7F0ACBF4u: goto label_7F0ACBF4;
    case 0x7F0ACBF8u: goto label_7F0ACBF8;
    case 0x7F0ACBFCu: goto label_7F0ACBFC;
    case 0x7F0ACC00u: goto label_7F0ACC00;
    case 0x7F0ACC04u: goto label_7F0ACC04;
    case 0x7F0ACC08u: goto label_7F0ACC08;
    case 0x7F0ACC0Cu: goto label_7F0ACC0C;
    case 0x7F0ACC10u: goto label_7F0ACC10;
    case 0x7F0ACC14u: goto label_7F0ACC14;
    case 0x7F0ACC18u: goto label_7F0ACC18;
    case 0x7F0ACC1Cu: goto label_7F0ACC1C;
    case 0x7F0ACC20u: goto label_7F0ACC20;
    case 0x7F0ACC24u: goto label_7F0ACC24;
    case 0x7F0ACC28u: goto label_7F0ACC28;
    case 0x7F0ACC2Cu: goto label_7F0ACC2C;
    case 0x7F0ACC30u: goto label_7F0ACC30;
    case 0x7F0ACC34u: goto label_7F0ACC34;
    case 0x7F0ACC38u: goto label_7F0ACC38;
    case 0x7F0ACC3Cu: goto label_7F0ACC3C;
    case 0x7F0ACC40u: goto label_7F0ACC40;
    case 0x7F0ACC44u: goto label_7F0ACC44;
    case 0x7F0ACC48u: goto label_7F0ACC48;
    case 0x7F0ACC4Cu: goto label_7F0ACC4C;
    case 0x7F0ACC50u: goto label_7F0ACC50;
    case 0x7F0ACC54u: goto label_7F0ACC54;
    case 0x7F0ACC58u: goto label_7F0ACC58;
    case 0x7F0ACC5Cu: goto label_7F0ACC5C;
    case 0x7F0ACC60u: goto label_7F0ACC60;
    case 0x7F0ACC64u: goto label_7F0ACC64;
    case 0x7F0ACC68u: goto label_7F0ACC68;
    case 0x7F0ACC6Cu: goto label_7F0ACC6C;
    case 0x7F0ACC70u: goto label_7F0ACC70;
    case 0x7F0ACC74u: goto label_7F0ACC74;
    case 0x7F0ACC78u: goto label_7F0ACC78;
    case 0x7F0ACC7Cu: goto label_7F0ACC7C;
    case 0x7F0ACC80u: goto label_7F0ACC80;
    case 0x7F0ACC84u: goto label_7F0ACC84;
    case 0x7F0ACC88u: goto label_7F0ACC88;
    case 0x7F0ACC8Cu: goto label_7F0ACC8C;
    case 0x7F0ACC90u: goto label_7F0ACC90;
    case 0x7F0ACC94u: goto label_7F0ACC94;
    case 0x7F0ACC98u: goto label_7F0ACC98;
    case 0x7F0ACC9Cu: goto label_7F0ACC9C;
    case 0x7F0ACCA0u: goto label_7F0ACCA0;
    case 0x7F0ACCA4u: goto label_7F0ACCA4;
    case 0x7F0ACCA8u: goto label_7F0ACCA8;
    case 0x7F0ACCACu: goto label_7F0ACCAC;
    case 0x7F0ACCB0u: goto label_7F0ACCB0;
    case 0x7F0ACCB4u: goto label_7F0ACCB4;
    case 0x7F0ACCB8u: goto label_7F0ACCB8;
    case 0x7F0ACCBCu: goto label_7F0ACCBC;
    case 0x7F0ACCC0u: goto label_7F0ACCC0;
    case 0x7F0ACCC4u: goto label_7F0ACCC4;
    case 0x7F0ACCC8u: goto label_7F0ACCC8;
    case 0x7F0ACCCCu: goto label_7F0ACCCC;
    case 0x7F0ACCD0u: goto label_7F0ACCD0;
    case 0x7F0ACCD4u: goto label_7F0ACCD4;
    case 0x7F0ACCD8u: goto label_7F0ACCD8;
    case 0x7F0ACCDCu: goto label_7F0ACCDC;
    case 0x7F0ACCE0u: goto label_7F0ACCE0;
    case 0x7F0ACCE4u: goto label_7F0ACCE4;
    case 0x7F0ACCE8u: goto label_7F0ACCE8;
    case 0x7F0ACCECu: goto label_7F0ACCEC;
    case 0x7F0ACCF0u: goto label_7F0ACCF0;
    case 0x7F0ACCF4u: goto label_7F0ACCF4;
    case 0x7F0ACCF8u: goto label_7F0ACCF8;
    case 0x7F0ACCFCu: goto label_7F0ACCFC;
    case 0x7F0ACD00u: goto label_7F0ACD00;
    case 0x7F0ACD04u: goto label_7F0ACD04;
    case 0x7F0ACD08u: goto label_7F0ACD08;
    case 0x7F0ACD0Cu: goto label_7F0ACD0C;
    case 0x7F0ACD10u: goto label_7F0ACD10;
    case 0x7F0ACD14u: goto label_7F0ACD14;
    case 0x7F0ACD18u: goto label_7F0ACD18;
    case 0x7F0ACD1Cu: goto label_7F0ACD1C;
    case 0x7F0ACD20u: goto label_7F0ACD20;
    case 0x7F0ACD24u: goto label_7F0ACD24;
    case 0x7F0ACD28u: goto label_7F0ACD28;
    case 0x7F0ACD2Cu: goto label_7F0ACD2C;
    case 0x7F0ACD30u: goto label_7F0ACD30;
    case 0x7F0ACD34u: goto label_7F0ACD34;
    case 0x7F0ACD38u: goto label_7F0ACD38;
    case 0x7F0ACD3Cu: goto label_7F0ACD3C;
    case 0x7F0ACD40u: goto label_7F0ACD40;
    case 0x7F0ACD44u: goto label_7F0ACD44;
    case 0x7F0ACD48u: goto label_7F0ACD48;
    case 0x7F0ACD4Cu: goto label_7F0ACD4C;
    case 0x7F0ACD50u: goto label_7F0ACD50;
    case 0x7F0ACD54u: goto label_7F0ACD54;
    case 0x7F0ACD58u: goto label_7F0ACD58;
    case 0x7F0ACD5Cu: goto label_7F0ACD5C;
    case 0x7F0ACD60u: goto label_7F0ACD60;
    case 0x7F0ACD64u: goto label_7F0ACD64;
    case 0x7F0ACD68u: goto label_7F0ACD68;
    case 0x7F0ACD6Cu: goto label_7F0ACD6C;
    case 0x7F0ACD70u: goto label_7F0ACD70;
    case 0x7F0ACD74u: goto label_7F0ACD74;
    case 0x7F0ACD78u: goto label_7F0ACD78;
    case 0x7F0ACD7Cu: goto label_7F0ACD7C;
    case 0x7F0ACD80u: goto label_7F0ACD80;
    case 0x7F0ACD84u: goto label_7F0ACD84;
    case 0x7F0ACD88u: goto label_7F0ACD88;
    case 0x7F0ACD8Cu: goto label_7F0ACD8C;
    case 0x7F0ACD90u: goto label_7F0ACD90;
    case 0x7F0ACD94u: goto label_7F0ACD94;
    case 0x7F0ACD98u: goto label_7F0ACD98;
    case 0x7F0ACD9Cu: goto label_7F0ACD9C;
    case 0x7F0ACDA0u: goto label_7F0ACDA0;
    case 0x7F0ACDA4u: goto label_7F0ACDA4;
    case 0x7F0ACDA8u: goto label_7F0ACDA8;
    case 0x7F0ACDACu: goto label_7F0ACDAC;
    case 0x7F0ACDB0u: goto label_7F0ACDB0;
    case 0x7F0ACDB4u: goto label_7F0ACDB4;
    case 0x7F0ACDB8u: goto label_7F0ACDB8;
    case 0x7F0ACDBCu: goto label_7F0ACDBC;
    case 0x7F0ACDC0u: goto label_7F0ACDC0;
    case 0x7F0ACDC4u: goto label_7F0ACDC4;
    case 0x7F0ACDC8u: goto label_7F0ACDC8;
    case 0x7F0ACDCCu: goto label_7F0ACDCC;
    case 0x7F0ACDD0u: goto label_7F0ACDD0;
    case 0x7F0ACDD4u: goto label_7F0ACDD4;
    case 0x7F0ACDD8u: goto label_7F0ACDD8;
    case 0x7F0ACDDCu: goto label_7F0ACDDC;
    case 0x7F0ACDE0u: goto label_7F0ACDE0;
    case 0x7F0ACDE4u: goto label_7F0ACDE4;
    case 0x7F0ACDE8u: goto label_7F0ACDE8;
    case 0x7F0ACDECu: goto label_7F0ACDEC;
    case 0x7F0ACDF0u: goto label_7F0ACDF0;
    case 0x7F0ACDF4u: goto label_7F0ACDF4;
    case 0x7F0ACDF8u: goto label_7F0ACDF8;
    case 0x7F0ACDFCu: goto label_7F0ACDFC;
    case 0x7F0ACE00u: goto label_7F0ACE00;
    case 0x7F0ACE04u: goto label_7F0ACE04;
    case 0x7F0ACE08u: goto label_7F0ACE08;
    case 0x7F0ACE0Cu: goto label_7F0ACE0C;
    case 0x7F0ACE10u: goto label_7F0ACE10;
    case 0x7F0ACE14u: goto label_7F0ACE14;
    case 0x7F0ACE18u: goto label_7F0ACE18;
    case 0x7F0ACE1Cu: goto label_7F0ACE1C;
    case 0x7F0ACE20u: goto label_7F0ACE20;
    case 0x7F0ACE24u: goto label_7F0ACE24;
    case 0x7F0ACE28u: goto label_7F0ACE28;
    case 0x7F0ACE2Cu: goto label_7F0ACE2C;
    case 0x7F0ACE30u: goto label_7F0ACE30;
    case 0x7F0ACE34u: goto label_7F0ACE34;
    case 0x7F0ACE38u: goto label_7F0ACE38;
    case 0x7F0ACE3Cu: goto label_7F0ACE3C;
    case 0x7F0ACE40u: goto label_7F0ACE40;
    case 0x7F0ACE44u: goto label_7F0ACE44;
    case 0x7F0ACE48u: goto label_7F0ACE48;
    case 0x7F0ACE4Cu: goto label_7F0ACE4C;
    case 0x7F0ACE50u: goto label_7F0ACE50;
    case 0x7F0ACE54u: goto label_7F0ACE54;
    case 0x7F0ACE58u: goto label_7F0ACE58;
    case 0x7F0ACE5Cu: goto label_7F0ACE5C;
    case 0x7F0ACE60u: goto label_7F0ACE60;
    case 0x7F0ACE64u: goto label_7F0ACE64;
    case 0x7F0ACE68u: goto label_7F0ACE68;
    case 0x7F0ACE6Cu: goto label_7F0ACE6C;
    case 0x7F0ACE70u: goto label_7F0ACE70;
    case 0x7F0ACE74u: goto label_7F0ACE74;
    case 0x7F0ACE78u: goto label_7F0ACE78;
    case 0x7F0ACE7Cu: goto label_7F0ACE7C;
    case 0x7F0ACE80u: goto label_7F0ACE80;
    case 0x7F0ACE84u: goto label_7F0ACE84;
    case 0x7F0ACE88u: goto label_7F0ACE88;
    case 0x7F0ACE8Cu: goto label_7F0ACE8C;
    case 0x7F0ACE90u: goto label_7F0ACE90;
    case 0x7F0ACE94u: goto label_7F0ACE94;
    case 0x7F0ACE98u: goto label_7F0ACE98;
    case 0x7F0ACE9Cu: goto label_7F0ACE9C;
    case 0x7F0ACEA0u: goto label_7F0ACEA0;
    case 0x7F0ACEA4u: goto label_7F0ACEA4;
    case 0x7F0ACEA8u: goto label_7F0ACEA8;
    case 0x7F0ACEACu: goto label_7F0ACEAC;
    case 0x7F0ACEB0u: goto label_7F0ACEB0;
    case 0x7F0ACEB4u: goto label_7F0ACEB4;
    case 0x7F0ACEB8u: goto label_7F0ACEB8;
    case 0x7F0ACEBCu: goto label_7F0ACEBC;
    case 0x7F0ACEC0u: goto label_7F0ACEC0;
    case 0x7F0ACEC4u: goto label_7F0ACEC4;
    case 0x7F0ACEC8u: goto label_7F0ACEC8;
    case 0x7F0ACECCu: goto label_7F0ACECC;
    case 0x7F0ACED0u: goto label_7F0ACED0;
    case 0x7F0ACED4u: goto label_7F0ACED4;
    case 0x7F0ACED8u: goto label_7F0ACED8;
    case 0x7F0ACEDCu: goto label_7F0ACEDC;
    case 0x7F0ACEE0u: goto label_7F0ACEE0;
    case 0x7F0ACEE4u: goto label_7F0ACEE4;
    case 0x7F0ACEE8u: goto label_7F0ACEE8;
    case 0x7F0ACEECu: goto label_7F0ACEEC;
    case 0x7F0ACEF0u: goto label_7F0ACEF0;
    case 0x7F0ACEF4u: goto label_7F0ACEF4;
    case 0x7F0ACEF8u: goto label_7F0ACEF8;
    case 0x7F0ACEFCu: goto label_7F0ACEFC;
    case 0x7F0ACF00u: goto label_7F0ACF00;
    case 0x7F0ACF04u: goto label_7F0ACF04;
    case 0x7F0ACF08u: goto label_7F0ACF08;
    case 0x7F0ACF0Cu: goto label_7F0ACF0C;
    case 0x7F0ACF10u: goto label_7F0ACF10;
    case 0x7F0ACF14u: goto label_7F0ACF14;
    case 0x7F0ACF18u: goto label_7F0ACF18;
    case 0x7F0ACF1Cu: goto label_7F0ACF1C;
    case 0x7F0ACF20u: goto label_7F0ACF20;
    case 0x7F0ACF24u: goto label_7F0ACF24;
    case 0x7F0ACF28u: goto label_7F0ACF28;
    case 0x7F0ACF2Cu: goto label_7F0ACF2C;
    case 0x7F0ACF30u: goto label_7F0ACF30;
    case 0x7F0ACF34u: goto label_7F0ACF34;
    case 0x7F0ACF38u: goto label_7F0ACF38;
    case 0x7F0ACF3Cu: goto label_7F0ACF3C;
    case 0x7F0ACF40u: goto label_7F0ACF40;
    case 0x7F0ACF44u: goto label_7F0ACF44;
    case 0x7F0ACF48u: goto label_7F0ACF48;
    case 0x7F0ACF4Cu: goto label_7F0ACF4C;
    case 0x7F0ACF50u: goto label_7F0ACF50;
    case 0x7F0ACF54u: goto label_7F0ACF54;
    case 0x7F0ACF58u: goto label_7F0ACF58;
    case 0x7F0ACF5Cu: goto label_7F0ACF5C;
    case 0x7F0ACF60u: goto label_7F0ACF60;
    case 0x7F0ACF64u: goto label_7F0ACF64;
    case 0x7F0ACF68u: goto label_7F0ACF68;
    case 0x7F0ACF6Cu: goto label_7F0ACF6C;
    case 0x7F0ACF70u: goto label_7F0ACF70;
    case 0x7F0ACF74u: goto label_7F0ACF74;
    case 0x7F0ACF78u: goto label_7F0ACF78;
    case 0x7F0ACF7Cu: goto label_7F0ACF7C;
    case 0x7F0ACF80u: goto label_7F0ACF80;
    case 0x7F0ACF84u: goto label_7F0ACF84;
    case 0x7F0ACF88u: goto label_7F0ACF88;
    case 0x7F0ACF8Cu: goto label_7F0ACF8C;
    case 0x7F0ACF90u: goto label_7F0ACF90;
    case 0x7F0ACF94u: goto label_7F0ACF94;
    case 0x7F0ACF98u: goto label_7F0ACF98;
    case 0x7F0ACF9Cu: goto label_7F0ACF9C;
    case 0x7F0ACFA0u: goto label_7F0ACFA0;
    case 0x7F0ACFA4u: goto label_7F0ACFA4;
    case 0x7F0ACFA8u: goto label_7F0ACFA8;
    case 0x7F0ACFACu: goto label_7F0ACFAC;
    case 0x7F0ACFB0u: goto label_7F0ACFB0;
    case 0x7F0ACFB4u: goto label_7F0ACFB4;
    case 0x7F0ACFB8u: goto label_7F0ACFB8;
    case 0x7F0ACFBCu: goto label_7F0ACFBC;
    case 0x7F0ACFC0u: goto label_7F0ACFC0;
    case 0x7F0ACFC4u: goto label_7F0ACFC4;
    case 0x7F0ACFC8u: goto label_7F0ACFC8;
    case 0x7F0ACFCCu: goto label_7F0ACFCC;
    case 0x7F0ACFD0u: goto label_7F0ACFD0;
    case 0x7F0ACFD4u: goto label_7F0ACFD4;
    case 0x7F0ACFD8u: goto label_7F0ACFD8;
    case 0x7F0ACFDCu: goto label_7F0ACFDC;
    case 0x7F0ACFE0u: goto label_7F0ACFE0;
    case 0x7F0ACFE4u: goto label_7F0ACFE4;
    case 0x7F0ACFE8u: goto label_7F0ACFE8;
    case 0x7F0ACFECu: goto label_7F0ACFEC;
    case 0x7F0ACFF0u: goto label_7F0ACFF0;
    case 0x7F0ACFF4u: goto label_7F0ACFF4;
    case 0x7F0ACFF8u: goto label_7F0ACFF8;
    case 0x7F0ACFFCu: goto label_7F0ACFFC;
    case 0x7F0AD000u: goto label_7F0AD000;
    case 0x7F0AD004u: goto label_7F0AD004;
    case 0x7F0AD008u: goto label_7F0AD008;
    case 0x7F0AD00Cu: goto label_7F0AD00C;
    case 0x7F0AD010u: goto label_7F0AD010;
    case 0x7F0AD014u: goto label_7F0AD014;
    case 0x7F0AD018u: goto label_7F0AD018;
    case 0x7F0AD01Cu: goto label_7F0AD01C;
    case 0x7F0AD020u: goto label_7F0AD020;
    case 0x7F0AD024u: goto label_7F0AD024;
    case 0x7F0AD028u: goto label_7F0AD028;
    case 0x7F0AD02Cu: goto label_7F0AD02C;
    case 0x7F0AD030u: goto label_7F0AD030;
    case 0x7F0AD034u: goto label_7F0AD034;
    case 0x7F0AD038u: goto label_7F0AD038;
    case 0x7F0AD03Cu: goto label_7F0AD03C;
    case 0x7F0AD040u: goto label_7F0AD040;
    case 0x7F0AD044u: goto label_7F0AD044;
    case 0x7F0AD048u: goto label_7F0AD048;
    case 0x7F0AD04Cu: goto label_7F0AD04C;
    case 0x7F0AD050u: goto label_7F0AD050;
    case 0x7F0AD054u: goto label_7F0AD054;
    case 0x7F0AD058u: goto label_7F0AD058;
    case 0x7F0AD05Cu: goto label_7F0AD05C;
    case 0x7F0AD060u: goto label_7F0AD060;
    case 0x7F0AD064u: goto label_7F0AD064;
    case 0x7F0AD068u: goto label_7F0AD068;
    case 0x7F0AD06Cu: goto label_7F0AD06C;
    case 0x7F0AD070u: goto label_7F0AD070;
    case 0x7F0AD074u: goto label_7F0AD074;
    case 0x7F0AD078u: goto label_7F0AD078;
    case 0x7F0AD07Cu: goto label_7F0AD07C;
    case 0x7F0AD080u: goto label_7F0AD080;
    case 0x7F0AD084u: goto label_7F0AD084;
    case 0x7F0AD088u: goto label_7F0AD088;
    case 0x7F0AD08Cu: goto label_7F0AD08C;
    case 0x7F0AD090u: goto label_7F0AD090;
    case 0x7F0AD094u: goto label_7F0AD094;
    case 0x7F0AD098u: goto label_7F0AD098;
    case 0x7F0AD09Cu: goto label_7F0AD09C;
    case 0x7F0AD0A0u: goto label_7F0AD0A0;
    case 0x7F0AD0A4u: goto label_7F0AD0A4;
    case 0x7F0AD0A8u: goto label_7F0AD0A8;
    case 0x7F0AD0ACu: goto label_7F0AD0AC;
    case 0x7F0AD0B0u: goto label_7F0AD0B0;
    case 0x7F0AD0B4u: goto label_7F0AD0B4;
    case 0x7F0AD0B8u: goto label_7F0AD0B8;
    case 0x7F0AD0BCu: goto label_7F0AD0BC;
    case 0x7F0AD0C0u: goto label_7F0AD0C0;
    case 0x7F0AD0C4u: goto label_7F0AD0C4;
    case 0x7F0AD0C8u: goto label_7F0AD0C8;
    case 0x7F0AD0CCu: goto label_7F0AD0CC;
    case 0x7F0AD0D0u: goto label_7F0AD0D0;
    case 0x7F0AD0D4u: goto label_7F0AD0D4;
    case 0x7F0AD0D8u: goto label_7F0AD0D8;
    case 0x7F0AD0DCu: goto label_7F0AD0DC;
    case 0x7F0AD0E0u: goto label_7F0AD0E0;
    case 0x7F0AD0E4u: goto label_7F0AD0E4;
    case 0x7F0AD0E8u: goto label_7F0AD0E8;
    case 0x7F0AD0ECu: goto label_7F0AD0EC;
    case 0x7F0AD0F0u: goto label_7F0AD0F0;
    case 0x7F0AD0F4u: goto label_7F0AD0F4;
    case 0x7F0AD0F8u: goto label_7F0AD0F8;
    case 0x7F0AD0FCu: goto label_7F0AD0FC;
    case 0x7F0AD100u: goto label_7F0AD100;
    case 0x7F0AD104u: goto label_7F0AD104;
    case 0x7F0AD108u: goto label_7F0AD108;
    case 0x7F0AD10Cu: goto label_7F0AD10C;
    case 0x7F0AD110u: goto label_7F0AD110;
    case 0x7F0AD114u: goto label_7F0AD114;
    case 0x7F0AD118u: goto label_7F0AD118;
    case 0x7F0AD11Cu: goto label_7F0AD11C;
    case 0x7F0AD120u: goto label_7F0AD120;
    case 0x7F0AD124u: goto label_7F0AD124;
    case 0x7F0AD128u: goto label_7F0AD128;
    case 0x7F0AD12Cu: goto label_7F0AD12C;
    case 0x7F0AD130u: goto label_7F0AD130;
    case 0x7F0AD134u: goto label_7F0AD134;
    case 0x7F0AD138u: goto label_7F0AD138;
    case 0x7F0AD13Cu: goto label_7F0AD13C;
    case 0x7F0AD140u: goto label_7F0AD140;
    case 0x7F0AD144u: goto label_7F0AD144;
    case 0x7F0AD148u: goto label_7F0AD148;
    case 0x7F0AD14Cu: goto label_7F0AD14C;
    case 0x7F0AD150u: goto label_7F0AD150;
    case 0x7F0AD154u: goto label_7F0AD154;
    case 0x7F0AD158u: goto label_7F0AD158;
    case 0x7F0AD15Cu: goto label_7F0AD15C;
    case 0x7F0AD160u: goto label_7F0AD160;
    case 0x7F0AD164u: goto label_7F0AD164;
    case 0x7F0AD168u: goto label_7F0AD168;
    case 0x7F0AD16Cu: goto label_7F0AD16C;
    case 0x7F0AD170u: goto label_7F0AD170;
    case 0x7F0AD174u: goto label_7F0AD174;
    case 0x7F0AD178u: goto label_7F0AD178;
    case 0x7F0AD17Cu: goto label_7F0AD17C;
    case 0x7F0AD180u: goto label_7F0AD180;
    case 0x7F0AD184u: goto label_7F0AD184;
    case 0x7F0AD188u: goto label_7F0AD188;
    case 0x7F0AD18Cu: goto label_7F0AD18C;
    case 0x7F0AD190u: goto label_7F0AD190;
    case 0x7F0AD194u: goto label_7F0AD194;
    case 0x7F0AD198u: goto label_7F0AD198;
    case 0x7F0AD19Cu: goto label_7F0AD19C;
    case 0x7F0AD1A0u: goto label_7F0AD1A0;
    case 0x7F0AD1A4u: goto label_7F0AD1A4;
    case 0x7F0AD1A8u: goto label_7F0AD1A8;
    case 0x7F0AD1ACu: goto label_7F0AD1AC;
    case 0x7F0AD1B0u: goto label_7F0AD1B0;
    case 0x7F0AD1B4u: goto label_7F0AD1B4;
    case 0x7F0AD1B8u: goto label_7F0AD1B8;
    case 0x7F0AD1BCu: goto label_7F0AD1BC;
    case 0x7F0AD1C0u: goto label_7F0AD1C0;
    case 0x7F0AD1C4u: goto label_7F0AD1C4;
    case 0x7F0AD1C8u: goto label_7F0AD1C8;
    case 0x7F0AD1CCu: goto label_7F0AD1CC;
    case 0x7F0AD1D0u: goto label_7F0AD1D0;
    case 0x7F0AD1D4u: goto label_7F0AD1D4;
    case 0x7F0AD1D8u: goto label_7F0AD1D8;
    case 0x7F0AD1DCu: goto label_7F0AD1DC;
    case 0x7F0AD1E0u: goto label_7F0AD1E0;
    case 0x7F0AD1E4u: goto label_7F0AD1E4;
    case 0x7F0AD1E8u: goto label_7F0AD1E8;
    case 0x7F0AD1ECu: goto label_7F0AD1EC;
    case 0x7F0AD1F0u: goto label_7F0AD1F0;
    case 0x7F0AD1F4u: goto label_7F0AD1F4;
    case 0x7F0AD1F8u: goto label_7F0AD1F8;
    case 0x7F0AD1FCu: goto label_7F0AD1FC;
    case 0x7F0AD200u: goto label_7F0AD200;
    case 0x7F0AD204u: goto label_7F0AD204;
    case 0x7F0AD208u: goto label_7F0AD208;
    case 0x7F0AD20Cu: goto label_7F0AD20C;
    case 0x7F0AD210u: goto label_7F0AD210;
    case 0x7F0AD214u: goto label_7F0AD214;
    case 0x7F0AD218u: goto label_7F0AD218;
    case 0x7F0AD21Cu: goto label_7F0AD21C;
    case 0x7F0AD220u: goto label_7F0AD220;
    case 0x7F0AD224u: goto label_7F0AD224;
    case 0x7F0AD228u: goto label_7F0AD228;
    case 0x7F0AD22Cu: goto label_7F0AD22C;
    case 0x7F0AD230u: goto label_7F0AD230;
    case 0x7F0AD234u: goto label_7F0AD234;
    case 0x7F0AD238u: goto label_7F0AD238;
    case 0x7F0AD23Cu: goto label_7F0AD23C;
    case 0x7F0AD240u: goto label_7F0AD240;
    case 0x7F0AD244u: goto label_7F0AD244;
    case 0x7F0AD248u: goto label_7F0AD248;
    case 0x7F0AD24Cu: goto label_7F0AD24C;
    case 0x7F0AD250u: goto label_7F0AD250;
    case 0x7F0AD254u: goto label_7F0AD254;
    case 0x7F0AD258u: goto label_7F0AD258;
    case 0x7F0AD25Cu: goto label_7F0AD25C;
    case 0x7F0AD260u: goto label_7F0AD260;
    case 0x7F0AD264u: goto label_7F0AD264;
    case 0x7F0AD268u: goto label_7F0AD268;
    case 0x7F0AD26Cu: goto label_7F0AD26C;
    case 0x7F0AD270u: goto label_7F0AD270;
    case 0x7F0AD274u: goto label_7F0AD274;
    case 0x7F0AD278u: goto label_7F0AD278;
    case 0x7F0AD27Cu: goto label_7F0AD27C;
    case 0x7F0AD280u: goto label_7F0AD280;
    case 0x7F0AD284u: goto label_7F0AD284;
    case 0x7F0AD288u: goto label_7F0AD288;
    case 0x7F0AD28Cu: goto label_7F0AD28C;
    case 0x7F0AD290u: goto label_7F0AD290;
    case 0x7F0AD294u: goto label_7F0AD294;
    case 0x7F0AD298u: goto label_7F0AD298;
    case 0x7F0AD29Cu: goto label_7F0AD29C;
    case 0x7F0AD2A0u: goto label_7F0AD2A0;
    case 0x7F0AD2A4u: goto label_7F0AD2A4;
    case 0x7F0AD2A8u: goto label_7F0AD2A8;
    case 0x7F0AD2ACu: goto label_7F0AD2AC;
    case 0x7F0AD2B0u: goto label_7F0AD2B0;
    case 0x7F0AD2B4u: goto label_7F0AD2B4;
    case 0x7F0AD2B8u: goto label_7F0AD2B8;
    case 0x7F0AD2BCu: goto label_7F0AD2BC;
    case 0x7F0AD2C0u: goto label_7F0AD2C0;
    case 0x7F0AD2C4u: goto label_7F0AD2C4;
    case 0x7F0AD2C8u: goto label_7F0AD2C8;
    case 0x7F0AD2CCu: goto label_7F0AD2CC;
    case 0x7F0AD2D0u: goto label_7F0AD2D0;
    case 0x7F0AD2D4u: goto label_7F0AD2D4;
    case 0x7F0AD2D8u: goto label_7F0AD2D8;
    case 0x7F0AD2DCu: goto label_7F0AD2DC;
    case 0x7F0AD2E0u: goto label_7F0AD2E0;
    case 0x7F0AD2E4u: goto label_7F0AD2E4;
    case 0x7F0AD2E8u: goto label_7F0AD2E8;
    case 0x7F0AD2ECu: goto label_7F0AD2EC;
    case 0x7F0AD2F0u: goto label_7F0AD2F0;
    case 0x7F0AD2F4u: goto label_7F0AD2F4;
    case 0x7F0AD2F8u: goto label_7F0AD2F8;
    case 0x7F0AD2FCu: goto label_7F0AD2FC;
    case 0x7F0AD300u: goto label_7F0AD300;
    case 0x7F0AD304u: goto label_7F0AD304;
    case 0x7F0AD308u: goto label_7F0AD308;
    case 0x7F0AD30Cu: goto label_7F0AD30C;
    case 0x7F0AD310u: goto label_7F0AD310;
    case 0x7F0AD314u: goto label_7F0AD314;
    case 0x7F0AD318u: goto label_7F0AD318;
    case 0x7F0AD31Cu: goto label_7F0AD31C;
    case 0x7F0AD320u: goto label_7F0AD320;
    case 0x7F0AD324u: goto label_7F0AD324;
    case 0x7F0AD328u: goto label_7F0AD328;
    case 0x7F0AD32Cu: goto label_7F0AD32C;
    case 0x7F0AD330u: goto label_7F0AD330;
    case 0x7F0AD334u: goto label_7F0AD334;
    case 0x7F0AD338u: goto label_7F0AD338;
    case 0x7F0AD33Cu: goto label_7F0AD33C;
    case 0x7F0AD340u: goto label_7F0AD340;
    case 0x7F0AD344u: goto label_7F0AD344;
    case 0x7F0AD348u: goto label_7F0AD348;
    case 0x7F0AD34Cu: goto label_7F0AD34C;
    case 0x7F0AD350u: goto label_7F0AD350;
    case 0x7F0AD354u: goto label_7F0AD354;
    case 0x7F0AD358u: goto label_7F0AD358;
    case 0x7F0AD35Cu: goto label_7F0AD35C;
    case 0x7F0AD360u: goto label_7F0AD360;
    case 0x7F0AD364u: goto label_7F0AD364;
    case 0x7F0AD368u: goto label_7F0AD368;
    case 0x7F0AD36Cu: goto label_7F0AD36C;
    case 0x7F0AD370u: goto label_7F0AD370;
    case 0x7F0AD374u: goto label_7F0AD374;
    case 0x7F0AD378u: goto label_7F0AD378;
    case 0x7F0AD37Cu: goto label_7F0AD37C;
    case 0x7F0AD380u: goto label_7F0AD380;
    case 0x7F0AD384u: goto label_7F0AD384;
    case 0x7F0AD388u: goto label_7F0AD388;
    case 0x7F0AD38Cu: goto label_7F0AD38C;
    case 0x7F0AD390u: goto label_7F0AD390;
    case 0x7F0AD394u: goto label_7F0AD394;
    case 0x7F0AD398u: goto label_7F0AD398;
    case 0x7F0AD39Cu: goto label_7F0AD39C;
    case 0x7F0AD3A0u: goto label_7F0AD3A0;
    case 0x7F0AD3A4u: goto label_7F0AD3A4;
    case 0x7F0AD3A8u: goto label_7F0AD3A8;
    case 0x7F0AD3ACu: goto label_7F0AD3AC;
    case 0x7F0AD3B0u: goto label_7F0AD3B0;
    case 0x7F0AD3B4u: goto label_7F0AD3B4;
    case 0x7F0AD3B8u: goto label_7F0AD3B8;
    case 0x7F0AD3BCu: goto label_7F0AD3BC;
    case 0x7F0AD3C0u: goto label_7F0AD3C0;
    case 0x7F0AD3C4u: goto label_7F0AD3C4;
    case 0x7F0AD3C8u: goto label_7F0AD3C8;
    case 0x7F0AD3CCu: goto label_7F0AD3CC;
    case 0x7F0AD3D0u: goto label_7F0AD3D0;
    case 0x7F0AD3D4u: goto label_7F0AD3D4;
    case 0x7F0AD3D8u: goto label_7F0AD3D8;
    case 0x7F0AD3DCu: goto label_7F0AD3DC;
    case 0x7F0AD3E0u: goto label_7F0AD3E0;
    case 0x7F0AD3E4u: goto label_7F0AD3E4;
    case 0x7F0AD3E8u: goto label_7F0AD3E8;
    case 0x7F0AD3ECu: goto label_7F0AD3EC;
    case 0x7F0AD3F0u: goto label_7F0AD3F0;
    case 0x7F0AD3F4u: goto label_7F0AD3F4;
    case 0x7F0AD3F8u: goto label_7F0AD3F8;
    case 0x7F0AD3FCu: goto label_7F0AD3FC;
    case 0x7F0AD400u: goto label_7F0AD400;
    case 0x7F0AD404u: goto label_7F0AD404;
    case 0x7F0AD408u: goto label_7F0AD408;
    case 0x7F0AD40Cu: goto label_7F0AD40C;
    case 0x7F0AD410u: goto label_7F0AD410;
    case 0x7F0AD414u: goto label_7F0AD414;
    case 0x7F0AD418u: goto label_7F0AD418;
    case 0x7F0AD41Cu: goto label_7F0AD41C;
    case 0x7F0AD420u: goto label_7F0AD420;
    case 0x7F0AD424u: goto label_7F0AD424;
    case 0x7F0AD428u: goto label_7F0AD428;
    case 0x7F0AD42Cu: goto label_7F0AD42C;
    case 0x7F0AD430u: goto label_7F0AD430;
    case 0x7F0AD434u: goto label_7F0AD434;
    case 0x7F0AD438u: goto label_7F0AD438;
    case 0x7F0AD43Cu: goto label_7F0AD43C;
    case 0x7F0AD440u: goto label_7F0AD440;
    case 0x7F0AD444u: goto label_7F0AD444;
    case 0x7F0AD448u: goto label_7F0AD448;
    case 0x7F0AD44Cu: goto label_7F0AD44C;
    case 0x7F0AD450u: goto label_7F0AD450;
    case 0x7F0AD454u: goto label_7F0AD454;
    case 0x7F0AD458u: goto label_7F0AD458;
    case 0x7F0AD45Cu: goto label_7F0AD45C;
    case 0x7F0AD460u: goto label_7F0AD460;
    case 0x7F0AD464u: goto label_7F0AD464;
    case 0x7F0AD468u: goto label_7F0AD468;
    case 0x7F0AD46Cu: goto label_7F0AD46C;
    case 0x7F0AD470u: goto label_7F0AD470;
    case 0x7F0AD474u: goto label_7F0AD474;
    case 0x7F0AD478u: goto label_7F0AD478;
    case 0x7F0AD47Cu: goto label_7F0AD47C;
    case 0x7F0AD480u: goto label_7F0AD480;
    case 0x7F0AD484u: goto label_7F0AD484;
    case 0x7F0AD488u: goto label_7F0AD488;
    case 0x7F0AD48Cu: goto label_7F0AD48C;
    case 0x7F0AD490u: goto label_7F0AD490;
    case 0x7F0AD494u: goto label_7F0AD494;
    case 0x7F0AD498u: goto label_7F0AD498;
    case 0x7F0AD49Cu: goto label_7F0AD49C;
    case 0x7F0AD4A0u: goto label_7F0AD4A0;
    case 0x7F0AD4A4u: goto label_7F0AD4A4;
    case 0x7F0AD4A8u: goto label_7F0AD4A8;
    case 0x7F0AD4ACu: goto label_7F0AD4AC;
    case 0x7F0AD4B0u: goto label_7F0AD4B0;
    case 0x7F0AD4B4u: goto label_7F0AD4B4;
    case 0x7F0AD4B8u: goto label_7F0AD4B8;
    case 0x7F0AD4BCu: goto label_7F0AD4BC;
    case 0x7F0AD4C0u: goto label_7F0AD4C0;
    case 0x7F0AD4C4u: goto label_7F0AD4C4;
    case 0x7F0AD4C8u: goto label_7F0AD4C8;
    case 0x7F0AD4CCu: goto label_7F0AD4CC;
    case 0x7F0AD4D0u: goto label_7F0AD4D0;
    case 0x7F0AD4D4u: goto label_7F0AD4D4;
    case 0x7F0AD4D8u: goto label_7F0AD4D8;
    case 0x7F0AD4DCu: goto label_7F0AD4DC;
    case 0x7F0AD4E0u: goto label_7F0AD4E0;
    case 0x7F0AD4E4u: goto label_7F0AD4E4;
    case 0x7F0AD4E8u: goto label_7F0AD4E8;
    case 0x7F0AD4ECu: goto label_7F0AD4EC;
    case 0x7F0AD4F0u: goto label_7F0AD4F0;
    case 0x7F0AD4F4u: goto label_7F0AD4F4;
    case 0x7F0AD4F8u: goto label_7F0AD4F8;
    case 0x7F0AD4FCu: goto label_7F0AD4FC;
    case 0x7F0AD500u: goto label_7F0AD500;
    case 0x7F0AD504u: goto label_7F0AD504;
    case 0x7F0AD508u: goto label_7F0AD508;
    case 0x7F0AD50Cu: goto label_7F0AD50C;
    case 0x7F0AD510u: goto label_7F0AD510;
    case 0x7F0AD514u: goto label_7F0AD514;
    case 0x7F0AD518u: goto label_7F0AD518;
    case 0x7F0AD51Cu: goto label_7F0AD51C;
    case 0x7F0AD520u: goto label_7F0AD520;
    case 0x7F0AD524u: goto label_7F0AD524;
    case 0x7F0AD528u: goto label_7F0AD528;
    case 0x7F0AD52Cu: goto label_7F0AD52C;
    case 0x7F0AD530u: goto label_7F0AD530;
    case 0x7F0AD534u: goto label_7F0AD534;
    case 0x7F0AD538u: goto label_7F0AD538;
    case 0x7F0AD53Cu: goto label_7F0AD53C;
    case 0x7F0AD540u: goto label_7F0AD540;
    case 0x7F0AD544u: goto label_7F0AD544;
    case 0x7F0AD548u: goto label_7F0AD548;
    case 0x7F0AD54Cu: goto label_7F0AD54C;
    case 0x7F0AD550u: goto label_7F0AD550;
    case 0x7F0AD554u: goto label_7F0AD554;
    case 0x7F0AD558u: goto label_7F0AD558;
    case 0x7F0AD55Cu: goto label_7F0AD55C;
    case 0x7F0AD560u: goto label_7F0AD560;
    case 0x7F0AD564u: goto label_7F0AD564;
    case 0x7F0AD568u: goto label_7F0AD568;
    case 0x7F0AD56Cu: goto label_7F0AD56C;
    case 0x7F0AD570u: goto label_7F0AD570;
    case 0x7F0AD574u: goto label_7F0AD574;
    case 0x7F0AD578u: goto label_7F0AD578;
    case 0x7F0AD57Cu: goto label_7F0AD57C;
    case 0x7F0AD580u: goto label_7F0AD580;
    case 0x7F0AD584u: goto label_7F0AD584;
    case 0x7F0AD588u: goto label_7F0AD588;
    case 0x7F0AD58Cu: goto label_7F0AD58C;
    case 0x7F0AD590u: goto label_7F0AD590;
    case 0x7F0AD594u: goto label_7F0AD594;
    case 0x7F0AD598u: goto label_7F0AD598;
    case 0x7F0AD59Cu: goto label_7F0AD59C;
    case 0x7F0AD5A0u: goto label_7F0AD5A0;
    case 0x7F0AD5A4u: goto label_7F0AD5A4;
    case 0x7F0AD5A8u: goto label_7F0AD5A8;
    case 0x7F0AD5ACu: goto label_7F0AD5AC;
    case 0x7F0AD5B0u: goto label_7F0AD5B0;
    case 0x7F0AD5B4u: goto label_7F0AD5B4;
    case 0x7F0AD5B8u: goto label_7F0AD5B8;
    case 0x7F0AD5BCu: goto label_7F0AD5BC;
    case 0x7F0AD5C0u: goto label_7F0AD5C0;
    case 0x7F0AD5C4u: goto label_7F0AD5C4;
    case 0x7F0AD5C8u: goto label_7F0AD5C8;
    case 0x7F0AD5CCu: goto label_7F0AD5CC;
    case 0x7F0AD5D0u: goto label_7F0AD5D0;
    case 0x7F0AD5D4u: goto label_7F0AD5D4;
    case 0x7F0AD5D8u: goto label_7F0AD5D8;
    case 0x7F0AD5DCu: goto label_7F0AD5DC;
    case 0x7F0AD5E0u: goto label_7F0AD5E0;
    case 0x7F0AD5E4u: goto label_7F0AD5E4;
    case 0x7F0AD5E8u: goto label_7F0AD5E8;
    case 0x7F0AD5ECu: goto label_7F0AD5EC;
    case 0x7F0AD5F0u: goto label_7F0AD5F0;
    case 0x7F0AD5F4u: goto label_7F0AD5F4;
    case 0x7F0AD5F8u: goto label_7F0AD5F8;
    case 0x7F0AD5FCu: goto label_7F0AD5FC;
    case 0x7F0AD600u: goto label_7F0AD600;
    case 0x7F0AD604u: goto label_7F0AD604;
    case 0x7F0AD608u: goto label_7F0AD608;
    case 0x7F0AD60Cu: goto label_7F0AD60C;
    case 0x7F0AD610u: goto label_7F0AD610;
    case 0x7F0AD614u: goto label_7F0AD614;
    case 0x7F0AD618u: goto label_7F0AD618;
    case 0x7F0AD61Cu: goto label_7F0AD61C;
    case 0x7F0AD620u: goto label_7F0AD620;
    case 0x7F0AD624u: goto label_7F0AD624;
    case 0x7F0AD628u: goto label_7F0AD628;
    case 0x7F0AD62Cu: goto label_7F0AD62C;
    case 0x7F0AD630u: goto label_7F0AD630;
    case 0x7F0AD634u: goto label_7F0AD634;
    case 0x7F0AD638u: goto label_7F0AD638;
    case 0x7F0AD63Cu: goto label_7F0AD63C;
    case 0x7F0AD640u: goto label_7F0AD640;
    case 0x7F0AD644u: goto label_7F0AD644;
    case 0x7F0AD648u: goto label_7F0AD648;
    case 0x7F0AD64Cu: goto label_7F0AD64C;
    case 0x7F0AD650u: goto label_7F0AD650;
    case 0x7F0AD654u: goto label_7F0AD654;
    case 0x7F0AD658u: goto label_7F0AD658;
    case 0x7F0AD65Cu: goto label_7F0AD65C;
    case 0x7F0AD660u: goto label_7F0AD660;
    case 0x7F0AD664u: goto label_7F0AD664;
    case 0x7F0AD668u: goto label_7F0AD668;
    case 0x7F0AD66Cu: goto label_7F0AD66C;
    case 0x7F0AD670u: goto label_7F0AD670;
    case 0x7F0AD674u: goto label_7F0AD674;
    case 0x7F0AD678u: goto label_7F0AD678;
    case 0x7F0AD67Cu: goto label_7F0AD67C;
    case 0x7F0AD680u: goto label_7F0AD680;
    case 0x7F0AD684u: goto label_7F0AD684;
    case 0x7F0AD688u: goto label_7F0AD688;
    case 0x7F0AD68Cu: goto label_7F0AD68C;
    case 0x7F0AD690u: goto label_7F0AD690;
    case 0x7F0AD694u: goto label_7F0AD694;
    case 0x7F0AD698u: goto label_7F0AD698;
    case 0x7F0AD69Cu: goto label_7F0AD69C;
    case 0x7F0AD6A0u: goto label_7F0AD6A0;
    case 0x7F0AD6A4u: goto label_7F0AD6A4;
    case 0x7F0AD6A8u: goto label_7F0AD6A8;
    case 0x7F0AD6ACu: goto label_7F0AD6AC;
    case 0x7F0AD6B0u: goto label_7F0AD6B0;
    case 0x7F0AD6B4u: goto label_7F0AD6B4;
    case 0x7F0AD6B8u: goto label_7F0AD6B8;
    case 0x7F0AD6BCu: goto label_7F0AD6BC;
    case 0x7F0AD6C0u: goto label_7F0AD6C0;
    case 0x7F0AD6C4u: goto label_7F0AD6C4;
    case 0x7F0AD6C8u: goto label_7F0AD6C8;
    case 0x7F0AD6CCu: goto label_7F0AD6CC;
    case 0x7F0AD6D0u: goto label_7F0AD6D0;
    case 0x7F0AD6D4u: goto label_7F0AD6D4;
    case 0x7F0AD6D8u: goto label_7F0AD6D8;
    case 0x7F0AD6DCu: goto label_7F0AD6DC;
    case 0x7F0AD6E0u: goto label_7F0AD6E0;
    case 0x7F0AD6E4u: goto label_7F0AD6E4;
    case 0x7F0AD6E8u: goto label_7F0AD6E8;
    case 0x7F0AD6ECu: goto label_7F0AD6EC;
    case 0x7F0AD6F0u: goto label_7F0AD6F0;
    case 0x7F0AD6F4u: goto label_7F0AD6F4;
    case 0x7F0AD6F8u: goto label_7F0AD6F8;
    case 0x7F0AD6FCu: goto label_7F0AD6FC;
    case 0x7F0AD700u: goto label_7F0AD700;
    case 0x7F0AD704u: goto label_7F0AD704;
    case 0x7F0AD708u: goto label_7F0AD708;
    case 0x7F0AD70Cu: goto label_7F0AD70C;
    case 0x7F0AD710u: goto label_7F0AD710;
    case 0x7F0AD714u: goto label_7F0AD714;
    case 0x7F0AD718u: goto label_7F0AD718;
    case 0x7F0AD71Cu: goto label_7F0AD71C;
    case 0x7F0AD720u: goto label_7F0AD720;
    case 0x7F0AD724u: goto label_7F0AD724;
    case 0x7F0AD728u: goto label_7F0AD728;
    case 0x7F0AD72Cu: goto label_7F0AD72C;
    case 0x7F0AD730u: goto label_7F0AD730;
    case 0x7F0AD734u: goto label_7F0AD734;
    case 0x7F0AD738u: goto label_7F0AD738;
    case 0x7F0AD73Cu: goto label_7F0AD73C;
    case 0x7F0AD740u: goto label_7F0AD740;
    case 0x7F0AD744u: goto label_7F0AD744;
    case 0x7F0AD748u: goto label_7F0AD748;
    case 0x7F0AD74Cu: goto label_7F0AD74C;
    case 0x7F0AD750u: goto label_7F0AD750;
    case 0x7F0AD754u: goto label_7F0AD754;
    case 0x7F0AD758u: goto label_7F0AD758;
    case 0x7F0AD75Cu: goto label_7F0AD75C;
    case 0x7F0AD760u: goto label_7F0AD760;
    case 0x7F0AD764u: goto label_7F0AD764;
    case 0x7F0AD768u: goto label_7F0AD768;
    case 0x7F0AD76Cu: goto label_7F0AD76C;
    case 0x7F0AD770u: goto label_7F0AD770;
    case 0x7F0AD774u: goto label_7F0AD774;
    case 0x7F0AD778u: goto label_7F0AD778;
    case 0x7F0AD77Cu: goto label_7F0AD77C;
    case 0x7F0AD780u: goto label_7F0AD780;
    case 0x7F0AD784u: goto label_7F0AD784;
    case 0x7F0AD788u: goto label_7F0AD788;
    case 0x7F0AD78Cu: goto label_7F0AD78C;
    case 0x7F0AD790u: goto label_7F0AD790;
    case 0x7F0AD794u: goto label_7F0AD794;
    case 0x7F0AD798u: goto label_7F0AD798;
    case 0x7F0AD79Cu: goto label_7F0AD79C;
    case 0x7F0AD7A0u: goto label_7F0AD7A0;
    case 0x7F0AD7A4u: goto label_7F0AD7A4;
    case 0x7F0AD7A8u: goto label_7F0AD7A8;
    case 0x7F0AD7ACu: goto label_7F0AD7AC;
    case 0x7F0AD7B0u: goto label_7F0AD7B0;
    case 0x7F0AD7B4u: goto label_7F0AD7B4;
    case 0x7F0AD7B8u: goto label_7F0AD7B8;
    case 0x7F0AD7BCu: goto label_7F0AD7BC;
    case 0x7F0AD7C0u: goto label_7F0AD7C0;
    case 0x7F0AD7C4u: goto label_7F0AD7C4;
    case 0x7F0AD7C8u: goto label_7F0AD7C8;
    case 0x7F0AD7CCu: goto label_7F0AD7CC;
    case 0x7F0AD7D0u: goto label_7F0AD7D0;
    case 0x7F0AD7D4u: goto label_7F0AD7D4;
    case 0x7F0AD7D8u: goto label_7F0AD7D8;
    case 0x7F0AD7DCu: goto label_7F0AD7DC;
    case 0x7F0AD7E0u: goto label_7F0AD7E0;
    case 0x7F0AD7E4u: goto label_7F0AD7E4;
    case 0x7F0AD7E8u: goto label_7F0AD7E8;
    case 0x7F0AD7ECu: goto label_7F0AD7EC;
    case 0x7F0AD7F0u: goto label_7F0AD7F0;
    case 0x7F0AD7F4u: goto label_7F0AD7F4;
    case 0x7F0AD7F8u: goto label_7F0AD7F8;
    case 0x7F0AD7FCu: goto label_7F0AD7FC;
    case 0x7F0AD800u: goto label_7F0AD800;
    case 0x7F0AD804u: goto label_7F0AD804;
    case 0x7F0AD808u: goto label_7F0AD808;
    case 0x7F0AD80Cu: goto label_7F0AD80C;
    case 0x7F0AD810u: goto label_7F0AD810;
    case 0x7F0AD814u: goto label_7F0AD814;
    case 0x7F0AD818u: goto label_7F0AD818;
    case 0x7F0AD81Cu: goto label_7F0AD81C;
    case 0x7F0AD820u: goto label_7F0AD820;
    case 0x7F0AD824u: goto label_7F0AD824;
    case 0x7F0AD828u: goto label_7F0AD828;
    case 0x7F0AD82Cu: goto label_7F0AD82C;
    case 0x7F0AD830u: goto label_7F0AD830;
    case 0x7F0AD834u: goto label_7F0AD834;
    case 0x7F0AD838u: goto label_7F0AD838;
    case 0x7F0AD83Cu: goto label_7F0AD83C;
    case 0x7F0AD840u: goto label_7F0AD840;
    case 0x7F0AD844u: goto label_7F0AD844;
    case 0x7F0AD848u: goto label_7F0AD848;
    case 0x7F0AD84Cu: goto label_7F0AD84C;
    case 0x7F0AD850u: goto label_7F0AD850;
    case 0x7F0AD854u: goto label_7F0AD854;
    case 0x7F0AD858u: goto label_7F0AD858;
    case 0x7F0AD85Cu: goto label_7F0AD85C;
    case 0x7F0AD860u: goto label_7F0AD860;
    case 0x7F0AD864u: goto label_7F0AD864;
    case 0x7F0AD868u: goto label_7F0AD868;
    case 0x7F0AD86Cu: goto label_7F0AD86C;
    case 0x7F0AD870u: goto label_7F0AD870;
    case 0x7F0AD874u: goto label_7F0AD874;
    case 0x7F0AD878u: goto label_7F0AD878;
    case 0x7F0AD87Cu: goto label_7F0AD87C;
    case 0x7F0AD880u: goto label_7F0AD880;
    case 0x7F0AD884u: goto label_7F0AD884;
    case 0x7F0AD888u: goto label_7F0AD888;
    case 0x7F0AD88Cu: goto label_7F0AD88C;
    case 0x7F0AD890u: goto label_7F0AD890;
    case 0x7F0AD894u: goto label_7F0AD894;
    case 0x7F0AD898u: goto label_7F0AD898;
    case 0x7F0AD89Cu: goto label_7F0AD89C;
    case 0x7F0AD8A0u: goto label_7F0AD8A0;
    case 0x7F0AD8A4u: goto label_7F0AD8A4;
    case 0x7F0AD8A8u: goto label_7F0AD8A8;
    case 0x7F0AD8ACu: goto label_7F0AD8AC;
    case 0x7F0AD8B0u: goto label_7F0AD8B0;
    case 0x7F0AD8B4u: goto label_7F0AD8B4;
    case 0x7F0AD8B8u: goto label_7F0AD8B8;
    case 0x7F0AD8BCu: goto label_7F0AD8BC;
    case 0x7F0AD8C0u: goto label_7F0AD8C0;
    case 0x7F0AD8C4u: goto label_7F0AD8C4;
    case 0x7F0AD8C8u: goto label_7F0AD8C8;
    case 0x7F0AD8CCu: goto label_7F0AD8CC;
    case 0x7F0AD8D0u: goto label_7F0AD8D0;
    case 0x7F0AD8D4u: goto label_7F0AD8D4;
    case 0x7F0AD8D8u: goto label_7F0AD8D8;
    case 0x7F0AD8DCu: goto label_7F0AD8DC;
    case 0x7F0AD8E0u: goto label_7F0AD8E0;
    case 0x7F0AD8E4u: goto label_7F0AD8E4;
    case 0x7F0AD8E8u: goto label_7F0AD8E8;
    case 0x7F0AD8ECu: goto label_7F0AD8EC;
    case 0x7F0AD8F0u: goto label_7F0AD8F0;
    case 0x7F0AD8F4u: goto label_7F0AD8F4;
    case 0x7F0AD8F8u: goto label_7F0AD8F8;
    case 0x7F0AD8FCu: goto label_7F0AD8FC;
    case 0x7F0AD900u: goto label_7F0AD900;
    case 0x7F0AD904u: goto label_7F0AD904;
    case 0x7F0AD908u: goto label_7F0AD908;
    case 0x7F0AD90Cu: goto label_7F0AD90C;
    case 0x7F0AD910u: goto label_7F0AD910;
    case 0x7F0AD914u: goto label_7F0AD914;
    case 0x7F0AD918u: goto label_7F0AD918;
    case 0x7F0AD91Cu: goto label_7F0AD91C;
    case 0x7F0AD920u: goto label_7F0AD920;
    case 0x7F0AD924u: goto label_7F0AD924;
    case 0x7F0AD928u: goto label_7F0AD928;
    case 0x7F0AD92Cu: goto label_7F0AD92C;
    case 0x7F0AD930u: goto label_7F0AD930;
    case 0x7F0AD934u: goto label_7F0AD934;
    case 0x7F0AD938u: goto label_7F0AD938;
    case 0x7F0AD93Cu: goto label_7F0AD93C;
    case 0x7F0AD940u: goto label_7F0AD940;
    case 0x7F0AD944u: goto label_7F0AD944;
    case 0x7F0AD948u: goto label_7F0AD948;
    case 0x7F0AD94Cu: goto label_7F0AD94C;
    case 0x7F0AD950u: goto label_7F0AD950;
    case 0x7F0AD954u: goto label_7F0AD954;
    case 0x7F0AD958u: goto label_7F0AD958;
    case 0x7F0AD95Cu: goto label_7F0AD95C;
    case 0x7F0AD960u: goto label_7F0AD960;
    case 0x7F0AD964u: goto label_7F0AD964;
    case 0x7F0AD968u: goto label_7F0AD968;
    case 0x7F0AD96Cu: goto label_7F0AD96C;
    case 0x7F0AD970u: goto label_7F0AD970;
    case 0x7F0AD974u: goto label_7F0AD974;
    case 0x7F0AD978u: goto label_7F0AD978;
    case 0x7F0AD97Cu: goto label_7F0AD97C;
    case 0x7F0AD980u: goto label_7F0AD980;
    case 0x7F0AD984u: goto label_7F0AD984;
    case 0x7F0AD988u: goto label_7F0AD988;
    case 0x7F0AD98Cu: goto label_7F0AD98C;
    case 0x7F0AD990u: goto label_7F0AD990;
    case 0x7F0AD994u: goto label_7F0AD994;
    case 0x7F0AD998u: goto label_7F0AD998;
    case 0x7F0AD99Cu: goto label_7F0AD99C;
    case 0x7F0AD9A0u: goto label_7F0AD9A0;
    case 0x7F0AD9A4u: goto label_7F0AD9A4;
    case 0x7F0AD9A8u: goto label_7F0AD9A8;
    case 0x7F0AD9ACu: goto label_7F0AD9AC;
    case 0x7F0AD9B0u: goto label_7F0AD9B0;
    case 0x7F0AD9B4u: goto label_7F0AD9B4;
    case 0x7F0AD9B8u: goto label_7F0AD9B8;
    case 0x7F0AD9BCu: goto label_7F0AD9BC;
    case 0x7F0AD9C0u: goto label_7F0AD9C0;
    case 0x7F0AD9C4u: goto label_7F0AD9C4;
    case 0x7F0AD9C8u: goto label_7F0AD9C8;
    case 0x7F0AD9CCu: goto label_7F0AD9CC;
    case 0x7F0AD9D0u: goto label_7F0AD9D0;
    case 0x7F0AD9D4u: goto label_7F0AD9D4;
    case 0x7F0AD9D8u: goto label_7F0AD9D8;
    case 0x7F0AD9DCu: goto label_7F0AD9DC;
    case 0x7F0AD9E0u: goto label_7F0AD9E0;
    case 0x7F0AD9E4u: goto label_7F0AD9E4;
    case 0x7F0AD9E8u: goto label_7F0AD9E8;
    case 0x7F0AD9ECu: goto label_7F0AD9EC;
    case 0x7F0AD9F0u: goto label_7F0AD9F0;
    case 0x7F0AD9F4u: goto label_7F0AD9F4;
    case 0x7F0AD9F8u: goto label_7F0AD9F8;
    case 0x7F0AD9FCu: goto label_7F0AD9FC;
    case 0x7F0ADA00u: goto label_7F0ADA00;
    case 0x7F0ADA04u: goto label_7F0ADA04;
    case 0x7F0ADA08u: goto label_7F0ADA08;
    case 0x7F0ADA0Cu: goto label_7F0ADA0C;
    case 0x7F0ADA10u: goto label_7F0ADA10;
    case 0x7F0ADA14u: goto label_7F0ADA14;
    case 0x7F0ADA18u: goto label_7F0ADA18;
    case 0x7F0ADA1Cu: goto label_7F0ADA1C;
    case 0x7F0ADA20u: goto label_7F0ADA20;
    case 0x7F0ADA24u: goto label_7F0ADA24;
    case 0x7F0ADA28u: goto label_7F0ADA28;
    case 0x7F0ADA2Cu: goto label_7F0ADA2C;
    case 0x7F0ADA30u: goto label_7F0ADA30;
    case 0x7F0ADA34u: goto label_7F0ADA34;
    case 0x7F0ADA38u: goto label_7F0ADA38;
    case 0x7F0ADA3Cu: goto label_7F0ADA3C;
    case 0x7F0ADA40u: goto label_7F0ADA40;
    case 0x7F0ADA44u: goto label_7F0ADA44;
    case 0x7F0ADA48u: goto label_7F0ADA48;
    case 0x7F0ADA4Cu: goto label_7F0ADA4C;
    case 0x7F0ADA50u: goto label_7F0ADA50;
    case 0x7F0ADA54u: goto label_7F0ADA54;
    case 0x7F0ADA58u: goto label_7F0ADA58;
    case 0x7F0ADA5Cu: goto label_7F0ADA5C;
    case 0x7F0ADA60u: goto label_7F0ADA60;
    case 0x7F0ADA64u: goto label_7F0ADA64;
    case 0x7F0ADA68u: goto label_7F0ADA68;
    case 0x7F0ADA6Cu: goto label_7F0ADA6C;
    case 0x7F0ADA70u: goto label_7F0ADA70;
    case 0x7F0ADA74u: goto label_7F0ADA74;
    case 0x7F0ADA78u: goto label_7F0ADA78;
    case 0x7F0ADA7Cu: goto label_7F0ADA7C;
    case 0x7F0ADA80u: goto label_7F0ADA80;
    case 0x7F0ADA84u: goto label_7F0ADA84;
    case 0x7F0ADA88u: goto label_7F0ADA88;
    case 0x7F0ADA8Cu: goto label_7F0ADA8C;
    case 0x7F0ADA90u: goto label_7F0ADA90;
    case 0x7F0ADA94u: goto label_7F0ADA94;
    case 0x7F0ADA98u: goto label_7F0ADA98;
    case 0x7F0ADA9Cu: goto label_7F0ADA9C;
    case 0x7F0ADAA0u: goto label_7F0ADAA0;
    case 0x7F0ADAA4u: goto label_7F0ADAA4;
    case 0x7F0ADAA8u: goto label_7F0ADAA8;
    case 0x7F0ADAACu: goto label_7F0ADAAC;
    case 0x7F0ADAB0u: goto label_7F0ADAB0;
    case 0x7F0ADAB4u: goto label_7F0ADAB4;
    case 0x7F0ADAB8u: goto label_7F0ADAB8;
    case 0x7F0ADABCu: goto label_7F0ADABC;
    case 0x7F0ADAC0u: goto label_7F0ADAC0;
    case 0x7F0ADAC4u: goto label_7F0ADAC4;
    case 0x7F0ADAC8u: goto label_7F0ADAC8;
    case 0x7F0ADACCu: goto label_7F0ADACC;
    case 0x7F0ADAD0u: goto label_7F0ADAD0;
    case 0x7F0ADAD4u: goto label_7F0ADAD4;
    case 0x7F0ADAD8u: goto label_7F0ADAD8;
    case 0x7F0ADADCu: goto label_7F0ADADC;
    case 0x7F0ADAE0u: goto label_7F0ADAE0;
    case 0x7F0ADAE4u: goto label_7F0ADAE4;
    case 0x7F0ADAE8u: goto label_7F0ADAE8;
    case 0x7F0ADAECu: goto label_7F0ADAEC;
    case 0x7F0ADAF0u: goto label_7F0ADAF0;
    case 0x7F0ADAF4u: goto label_7F0ADAF4;
    case 0x7F0ADAF8u: goto label_7F0ADAF8;
    case 0x7F0ADAFCu: goto label_7F0ADAFC;
    case 0x7F0ADB00u: goto label_7F0ADB00;
    case 0x7F0ADB04u: goto label_7F0ADB04;
    case 0x7F0ADB08u: goto label_7F0ADB08;
    case 0x7F0ADB0Cu: goto label_7F0ADB0C;
    case 0x7F0ADB10u: goto label_7F0ADB10;
    case 0x7F0ADB14u: goto label_7F0ADB14;
    case 0x7F0ADB18u: goto label_7F0ADB18;
    case 0x7F0ADB1Cu: goto label_7F0ADB1C;
    case 0x7F0ADB20u: goto label_7F0ADB20;
    case 0x7F0ADB24u: goto label_7F0ADB24;
    case 0x7F0ADB28u: goto label_7F0ADB28;
    case 0x7F0ADB2Cu: goto label_7F0ADB2C;
    case 0x7F0ADB30u: goto label_7F0ADB30;
    case 0x7F0ADB34u: goto label_7F0ADB34;
    case 0x7F0ADB38u: goto label_7F0ADB38;
    case 0x7F0ADB3Cu: goto label_7F0ADB3C;
    case 0x7F0ADB40u: goto label_7F0ADB40;
    case 0x7F0ADB44u: goto label_7F0ADB44;
    case 0x7F0ADB48u: goto label_7F0ADB48;
    case 0x7F0ADB4Cu: goto label_7F0ADB4C;
    case 0x7F0ADB50u: goto label_7F0ADB50;
    case 0x7F0ADB54u: goto label_7F0ADB54;
    case 0x7F0ADB58u: goto label_7F0ADB58;
    case 0x7F0ADB5Cu: goto label_7F0ADB5C;
    case 0x7F0ADB60u: goto label_7F0ADB60;
    case 0x7F0ADB64u: goto label_7F0ADB64;
    case 0x7F0ADB68u: goto label_7F0ADB68;
    case 0x7F0ADB6Cu: goto label_7F0ADB6C;
    case 0x7F0ADB70u: goto label_7F0ADB70;
    case 0x7F0ADB74u: goto label_7F0ADB74;
    case 0x7F0ADB78u: goto label_7F0ADB78;
    case 0x7F0ADB7Cu: goto label_7F0ADB7C;
    case 0x7F0ADB80u: goto label_7F0ADB80;
    case 0x7F0ADB84u: goto label_7F0ADB84;
    case 0x7F0ADB88u: goto label_7F0ADB88;
    case 0x7F0ADB8Cu: goto label_7F0ADB8C;
    case 0x7F0ADB90u: goto label_7F0ADB90;
    case 0x7F0ADB94u: goto label_7F0ADB94;
    case 0x7F0ADB98u: goto label_7F0ADB98;
    case 0x7F0ADB9Cu: goto label_7F0ADB9C;
    case 0x7F0ADBA0u: goto label_7F0ADBA0;
    case 0x7F0ADBA4u: goto label_7F0ADBA4;
    case 0x7F0ADBA8u: goto label_7F0ADBA8;
    case 0x7F0ADBACu: goto label_7F0ADBAC;
    case 0x7F0ADBB0u: goto label_7F0ADBB0;
    case 0x7F0ADBB4u: goto label_7F0ADBB4;
    case 0x7F0ADBB8u: goto label_7F0ADBB8;
    case 0x7F0ADBBCu: goto label_7F0ADBBC;
    case 0x7F0ADBC0u: goto label_7F0ADBC0;
    case 0x7F0ADBC4u: goto label_7F0ADBC4;
    case 0x7F0ADBC8u: goto label_7F0ADBC8;
    case 0x7F0ADBCCu: goto label_7F0ADBCC;
    case 0x7F0ADBD0u: goto label_7F0ADBD0;
    case 0x7F0ADBD4u: goto label_7F0ADBD4;
    case 0x7F0ADBD8u: goto label_7F0ADBD8;
    case 0x7F0ADBDCu: goto label_7F0ADBDC;
    case 0x7F0ADBE0u: goto label_7F0ADBE0;
    case 0x7F0ADBE4u: goto label_7F0ADBE4;
    case 0x7F0ADBE8u: goto label_7F0ADBE8;
    case 0x7F0ADBECu: goto label_7F0ADBEC;
    case 0x7F0ADBF0u: goto label_7F0ADBF0;
    case 0x7F0ADBF4u: goto label_7F0ADBF4;
    case 0x7F0ADBF8u: goto label_7F0ADBF8;
    case 0x7F0ADBFCu: goto label_7F0ADBFC;
    case 0x7F0ADC00u: goto label_7F0ADC00;
    case 0x7F0ADC04u: goto label_7F0ADC04;
    case 0x7F0ADC08u: goto label_7F0ADC08;
    case 0x7F0ADC0Cu: goto label_7F0ADC0C;
    case 0x7F0ADC10u: goto label_7F0ADC10;
    case 0x7F0ADC14u: goto label_7F0ADC14;
    case 0x7F0ADC18u: goto label_7F0ADC18;
    case 0x7F0ADC1Cu: goto label_7F0ADC1C;
    case 0x7F0ADC20u: goto label_7F0ADC20;
    case 0x7F0ADC24u: goto label_7F0ADC24;
    case 0x7F0ADC28u: goto label_7F0ADC28;
    case 0x7F0ADC2Cu: goto label_7F0ADC2C;
    case 0x7F0ADC30u: goto label_7F0ADC30;
    case 0x7F0ADC34u: goto label_7F0ADC34;
    case 0x7F0ADC38u: goto label_7F0ADC38;
    case 0x7F0ADC3Cu: goto label_7F0ADC3C;
    case 0x7F0ADC40u: goto label_7F0ADC40;
    case 0x7F0ADC44u: goto label_7F0ADC44;
    case 0x7F0ADC48u: goto label_7F0ADC48;
    case 0x7F0ADC4Cu: goto label_7F0ADC4C;
    case 0x7F0ADC50u: goto label_7F0ADC50;
    case 0x7F0ADC54u: goto label_7F0ADC54;
    case 0x7F0ADC58u: goto label_7F0ADC58;
    case 0x7F0ADC5Cu: goto label_7F0ADC5C;
    case 0x7F0ADC60u: goto label_7F0ADC60;
    case 0x7F0ADC64u: goto label_7F0ADC64;
    case 0x7F0ADC68u: goto label_7F0ADC68;
    case 0x7F0ADC6Cu: goto label_7F0ADC6C;
    case 0x7F0ADC70u: goto label_7F0ADC70;
    case 0x7F0ADC74u: goto label_7F0ADC74;
    case 0x7F0ADC78u: goto label_7F0ADC78;
    case 0x7F0ADC7Cu: goto label_7F0ADC7C;
    case 0x7F0ADC80u: goto label_7F0ADC80;
    case 0x7F0ADC84u: goto label_7F0ADC84;
    case 0x7F0ADC88u: goto label_7F0ADC88;
    case 0x7F0ADC8Cu: goto label_7F0ADC8C;
    case 0x7F0ADC90u: goto label_7F0ADC90;
    case 0x7F0ADC94u: goto label_7F0ADC94;
    case 0x7F0ADC98u: goto label_7F0ADC98;
    case 0x7F0ADC9Cu: goto label_7F0ADC9C;
    case 0x7F0ADCA0u: goto label_7F0ADCA0;
    case 0x7F0ADCA4u: goto label_7F0ADCA4;
    case 0x7F0ADCA8u: goto label_7F0ADCA8;
    case 0x7F0ADCACu: goto label_7F0ADCAC;
    case 0x7F0ADCB0u: goto label_7F0ADCB0;
    case 0x7F0ADCB4u: goto label_7F0ADCB4;
    case 0x7F0ADCB8u: goto label_7F0ADCB8;
    case 0x7F0ADCBCu: goto label_7F0ADCBC;
    case 0x7F0ADCC0u: goto label_7F0ADCC0;
    case 0x7F0ADCC4u: goto label_7F0ADCC4;
    case 0x7F0ADCC8u: goto label_7F0ADCC8;
    case 0x7F0ADCCCu: goto label_7F0ADCCC;
    case 0x7F0ADCD0u: goto label_7F0ADCD0;
    case 0x7F0ADCD4u: goto label_7F0ADCD4;
    case 0x7F0ADCD8u: goto label_7F0ADCD8;
    case 0x7F0ADCDCu: goto label_7F0ADCDC;
    case 0x7F0ADCE0u: goto label_7F0ADCE0;
    case 0x7F0ADCE4u: goto label_7F0ADCE4;
    case 0x7F0ADCE8u: goto label_7F0ADCE8;
    case 0x7F0ADCECu: goto label_7F0ADCEC;
    case 0x7F0ADCF0u: goto label_7F0ADCF0;
    case 0x7F0ADCF4u: goto label_7F0ADCF4;
    case 0x7F0ADCF8u: goto label_7F0ADCF8;
    case 0x7F0ADCFCu: goto label_7F0ADCFC;
    case 0x7F0ADD00u: goto label_7F0ADD00;
    case 0x7F0ADD04u: goto label_7F0ADD04;
    case 0x7F0ADD08u: goto label_7F0ADD08;
    case 0x7F0ADD0Cu: goto label_7F0ADD0C;
    case 0x7F0ADD10u: goto label_7F0ADD10;
    case 0x7F0ADD14u: goto label_7F0ADD14;
    case 0x7F0ADD18u: goto label_7F0ADD18;
    case 0x7F0ADD1Cu: goto label_7F0ADD1C;
    case 0x7F0ADD20u: goto label_7F0ADD20;
    case 0x7F0ADD24u: goto label_7F0ADD24;
    case 0x7F0ADD28u: goto label_7F0ADD28;
    case 0x7F0ADD2Cu: goto label_7F0ADD2C;
    case 0x7F0ADD30u: goto label_7F0ADD30;
    case 0x7F0ADD34u: goto label_7F0ADD34;
    case 0x7F0ADD38u: goto label_7F0ADD38;
    case 0x7F0ADD3Cu: goto label_7F0ADD3C;
    case 0x7F0ADD40u: goto label_7F0ADD40;
    case 0x7F0ADD44u: goto label_7F0ADD44;
    case 0x7F0ADD48u: goto label_7F0ADD48;
    case 0x7F0ADD4Cu: goto label_7F0ADD4C;
    case 0x7F0ADD50u: goto label_7F0ADD50;
    case 0x7F0ADD54u: goto label_7F0ADD54;
    case 0x7F0ADD58u: goto label_7F0ADD58;
    case 0x7F0ADD5Cu: goto label_7F0ADD5C;
    case 0x7F0ADD60u: goto label_7F0ADD60;
    case 0x7F0ADD64u: goto label_7F0ADD64;
    case 0x7F0ADD68u: goto label_7F0ADD68;
    case 0x7F0ADD6Cu: goto label_7F0ADD6C;
    case 0x7F0ADD70u: goto label_7F0ADD70;
    case 0x7F0ADD74u: goto label_7F0ADD74;
    case 0x7F0ADD78u: goto label_7F0ADD78;
    case 0x7F0ADD7Cu: goto label_7F0ADD7C;
    case 0x7F0ADD80u: goto label_7F0ADD80;
    case 0x7F0ADD84u: goto label_7F0ADD84;
    case 0x7F0ADD88u: goto label_7F0ADD88;
    case 0x7F0ADD8Cu: goto label_7F0ADD8C;
    case 0x7F0ADD90u: goto label_7F0ADD90;
    case 0x7F0ADD94u: goto label_7F0ADD94;
    case 0x7F0ADD98u: goto label_7F0ADD98;
    case 0x7F0ADD9Cu: goto label_7F0ADD9C;
    case 0x7F0ADDA0u: goto label_7F0ADDA0;
    case 0x7F0ADDA4u: goto label_7F0ADDA4;
    case 0x7F0ADDA8u: goto label_7F0ADDA8;
    case 0x7F0ADDACu: goto label_7F0ADDAC;
    case 0x7F0ADDB0u: goto label_7F0ADDB0;
    case 0x7F0ADDB4u: goto label_7F0ADDB4;
    case 0x7F0ADDB8u: goto label_7F0ADDB8;
    case 0x7F0ADDBCu: goto label_7F0ADDBC;
    case 0x7F0ADDC0u: goto label_7F0ADDC0;
    case 0x7F0ADDC4u: goto label_7F0ADDC4;
    case 0x7F0ADDC8u: goto label_7F0ADDC8;
    case 0x7F0ADDCCu: goto label_7F0ADDCC;
    case 0x7F0ADDD0u: goto label_7F0ADDD0;
    case 0x7F0ADDD4u: goto label_7F0ADDD4;
    case 0x7F0ADDD8u: goto label_7F0ADDD8;
    case 0x7F0ADDDCu: goto label_7F0ADDDC;
    case 0x7F0ADDE0u: goto label_7F0ADDE0;
    case 0x7F0ADDE4u: goto label_7F0ADDE4;
    case 0x7F0ADDE8u: goto label_7F0ADDE8;
    case 0x7F0ADDECu: goto label_7F0ADDEC;
    case 0x7F0ADDF0u: goto label_7F0ADDF0;
    case 0x7F0ADDF4u: goto label_7F0ADDF4;
    case 0x7F0ADDF8u: goto label_7F0ADDF8;
    case 0x7F0ADDFCu: goto label_7F0ADDFC;
    case 0x7F0ADE00u: goto label_7F0ADE00;
    case 0x7F0ADE04u: goto label_7F0ADE04;
    case 0x7F0ADE08u: goto label_7F0ADE08;
    case 0x7F0ADE0Cu: goto label_7F0ADE0C;
    case 0x7F0ADE10u: goto label_7F0ADE10;
    case 0x7F0ADE14u: goto label_7F0ADE14;
    case 0x7F0ADE18u: goto label_7F0ADE18;
    case 0x7F0ADE1Cu: goto label_7F0ADE1C;
    case 0x7F0ADE20u: goto label_7F0ADE20;
    case 0x7F0ADE24u: goto label_7F0ADE24;
    case 0x7F0ADE28u: goto label_7F0ADE28;
    case 0x7F0ADE2Cu: goto label_7F0ADE2C;
    case 0x7F0ADE30u: goto label_7F0ADE30;
    case 0x7F0ADE34u: goto label_7F0ADE34;
    case 0x7F0ADE38u: goto label_7F0ADE38;
    case 0x7F0ADE3Cu: goto label_7F0ADE3C;
    case 0x7F0ADE40u: goto label_7F0ADE40;
    case 0x7F0ADE44u: goto label_7F0ADE44;
    case 0x7F0ADE48u: goto label_7F0ADE48;
    case 0x7F0ADE4Cu: goto label_7F0ADE4C;
    case 0x7F0ADE50u: goto label_7F0ADE50;
    case 0x7F0ADE54u: goto label_7F0ADE54;
    case 0x7F0ADE58u: goto label_7F0ADE58;
    case 0x7F0ADE5Cu: goto label_7F0ADE5C;
    case 0x7F0ADE60u: goto label_7F0ADE60;
    case 0x7F0ADE64u: goto label_7F0ADE64;
    case 0x7F0ADE68u: goto label_7F0ADE68;
    case 0x7F0ADE6Cu: goto label_7F0ADE6C;
    case 0x7F0ADE70u: goto label_7F0ADE70;
    case 0x7F0ADE74u: goto label_7F0ADE74;
    case 0x7F0ADE78u: goto label_7F0ADE78;
    case 0x7F0ADE7Cu: goto label_7F0ADE7C;
    case 0x7F0ADE80u: goto label_7F0ADE80;
    case 0x7F0ADE84u: goto label_7F0ADE84;
    case 0x7F0ADE88u: goto label_7F0ADE88;
    case 0x7F0ADE8Cu: goto label_7F0ADE8C;
    case 0x7F0ADE90u: goto label_7F0ADE90;
    case 0x7F0ADE94u: goto label_7F0ADE94;
    case 0x7F0ADE98u: goto label_7F0ADE98;
    case 0x7F0ADE9Cu: goto label_7F0ADE9C;
    case 0x7F0ADEA0u: goto label_7F0ADEA0;
    case 0x7F0ADEA4u: goto label_7F0ADEA4;
    case 0x7F0ADEA8u: goto label_7F0ADEA8;
    case 0x7F0ADEACu: goto label_7F0ADEAC;
    case 0x7F0ADEB0u: goto label_7F0ADEB0;
    case 0x7F0ADEB4u: goto label_7F0ADEB4;
    case 0x7F0ADEB8u: goto label_7F0ADEB8;
    case 0x7F0ADEBCu: goto label_7F0ADEBC;
    case 0x7F0ADEC0u: goto label_7F0ADEC0;
    case 0x7F0ADEC4u: goto label_7F0ADEC4;
    case 0x7F0ADEC8u: goto label_7F0ADEC8;
    case 0x7F0ADECCu: goto label_7F0ADECC;
    case 0x7F0ADED0u: goto label_7F0ADED0;
    case 0x7F0ADED4u: goto label_7F0ADED4;
    case 0x7F0ADED8u: goto label_7F0ADED8;
    case 0x7F0ADEDCu: goto label_7F0ADEDC;
    case 0x7F0ADEE0u: goto label_7F0ADEE0;
    case 0x7F0ADEE4u: goto label_7F0ADEE4;
    case 0x7F0ADEE8u: goto label_7F0ADEE8;
    case 0x7F0ADEECu: goto label_7F0ADEEC;
    case 0x7F0ADEF0u: goto label_7F0ADEF0;
    case 0x7F0ADEF4u: goto label_7F0ADEF4;
    case 0x7F0ADEF8u: goto label_7F0ADEF8;
    case 0x7F0ADEFCu: goto label_7F0ADEFC;
    case 0x7F0ADF00u: goto label_7F0ADF00;
    case 0x7F0ADF04u: goto label_7F0ADF04;
    case 0x7F0ADF08u: goto label_7F0ADF08;
    case 0x7F0ADF0Cu: goto label_7F0ADF0C;
    case 0x7F0ADF10u: goto label_7F0ADF10;
    case 0x7F0ADF14u: goto label_7F0ADF14;
    case 0x7F0ADF18u: goto label_7F0ADF18;
    case 0x7F0ADF1Cu: goto label_7F0ADF1C;
    case 0x7F0ADF20u: goto label_7F0ADF20;
    case 0x7F0ADF24u: goto label_7F0ADF24;
    case 0x7F0ADF28u: goto label_7F0ADF28;
    case 0x7F0ADF2Cu: goto label_7F0ADF2C;
    case 0x7F0ADF30u: goto label_7F0ADF30;
    case 0x7F0ADF34u: goto label_7F0ADF34;
    case 0x7F0ADF38u: goto label_7F0ADF38;
    case 0x7F0ADF3Cu: goto label_7F0ADF3C;
    case 0x7F0ADF40u: goto label_7F0ADF40;
    case 0x7F0ADF44u: goto label_7F0ADF44;
    case 0x7F0ADF48u: goto label_7F0ADF48;
    case 0x7F0ADF4Cu: goto label_7F0ADF4C;
    case 0x7F0ADF50u: goto label_7F0ADF50;
    case 0x7F0ADF54u: goto label_7F0ADF54;
    case 0x7F0ADF58u: goto label_7F0ADF58;
    case 0x7F0ADF5Cu: goto label_7F0ADF5C;
    case 0x7F0ADF60u: goto label_7F0ADF60;
    case 0x7F0ADF64u: goto label_7F0ADF64;
    case 0x7F0ADF68u: goto label_7F0ADF68;
    case 0x7F0ADF6Cu: goto label_7F0ADF6C;
    case 0x7F0ADF70u: goto label_7F0ADF70;
    case 0x7F0ADF74u: goto label_7F0ADF74;
    case 0x7F0ADF78u: goto label_7F0ADF78;
    case 0x7F0ADF7Cu: goto label_7F0ADF7C;
    case 0x7F0ADF80u: goto label_7F0ADF80;
    case 0x7F0ADF84u: goto label_7F0ADF84;
    case 0x7F0ADF88u: goto label_7F0ADF88;
    case 0x7F0ADF8Cu: goto label_7F0ADF8C;
    case 0x7F0ADF90u: goto label_7F0ADF90;
    case 0x7F0ADF94u: goto label_7F0ADF94;
    case 0x7F0ADF98u: goto label_7F0ADF98;
    case 0x7F0ADF9Cu: goto label_7F0ADF9C;
    case 0x7F0ADFA0u: goto label_7F0ADFA0;
    case 0x7F0ADFA4u: goto label_7F0ADFA4;
    case 0x7F0ADFA8u: goto label_7F0ADFA8;
    case 0x7F0ADFACu: goto label_7F0ADFAC;
    case 0x7F0ADFB0u: goto label_7F0ADFB0;
    case 0x7F0ADFB4u: goto label_7F0ADFB4;
    case 0x7F0ADFB8u: goto label_7F0ADFB8;
    case 0x7F0ADFBCu: goto label_7F0ADFBC;
    case 0x7F0ADFC0u: goto label_7F0ADFC0;
    case 0x7F0ADFC4u: goto label_7F0ADFC4;
    case 0x7F0ADFC8u: goto label_7F0ADFC8;
    case 0x7F0ADFCCu: goto label_7F0ADFCC;
    case 0x7F0ADFD0u: goto label_7F0ADFD0;
    case 0x7F0ADFD4u: goto label_7F0ADFD4;
    case 0x7F0ADFD8u: goto label_7F0ADFD8;
    case 0x7F0ADFDCu: goto label_7F0ADFDC;
    case 0x7F0ADFE0u: goto label_7F0ADFE0;
    case 0x7F0ADFE4u: goto label_7F0ADFE4;
    case 0x7F0ADFE8u: goto label_7F0ADFE8;
    case 0x7F0ADFECu: goto label_7F0ADFEC;
    case 0x7F0ADFF0u: goto label_7F0ADFF0;
    case 0x7F0ADFF4u: goto label_7F0ADFF4;
    case 0x7F0ADFF8u: goto label_7F0ADFF8;
    case 0x7F0ADFFCu: goto label_7F0ADFFC;
    case 0x7F0AE000u: goto label_7F0AE000;
    case 0x7F0AE004u: goto label_7F0AE004;
    case 0x7F0AE008u: goto label_7F0AE008;
    case 0x7F0AE00Cu: goto label_7F0AE00C;
    case 0x7F0AE010u: goto label_7F0AE010;
    case 0x7F0AE014u: goto label_7F0AE014;
    case 0x7F0AE018u: goto label_7F0AE018;
    case 0x7F0AE01Cu: goto label_7F0AE01C;
    case 0x7F0AE020u: goto label_7F0AE020;
    case 0x7F0AE024u: goto label_7F0AE024;
    case 0x7F0AE028u: goto label_7F0AE028;
    case 0x7F0AE02Cu: goto label_7F0AE02C;
    case 0x7F0AE030u: goto label_7F0AE030;
    case 0x7F0AE034u: goto label_7F0AE034;
    case 0x7F0AE038u: goto label_7F0AE038;
    case 0x7F0AE03Cu: goto label_7F0AE03C;
    case 0x7F0AE040u: goto label_7F0AE040;
    case 0x7F0AE044u: goto label_7F0AE044;
    case 0x7F0AE048u: goto label_7F0AE048;
    case 0x7F0AE04Cu: goto label_7F0AE04C;
    case 0x7F0AE050u: goto label_7F0AE050;
    case 0x7F0AE054u: goto label_7F0AE054;
    case 0x7F0AE058u: goto label_7F0AE058;
    case 0x7F0AE05Cu: goto label_7F0AE05C;
    case 0x7F0AE060u: goto label_7F0AE060;
    case 0x7F0AE064u: goto label_7F0AE064;
    case 0x7F0AE068u: goto label_7F0AE068;
    case 0x7F0AE06Cu: goto label_7F0AE06C;
    case 0x7F0AE070u: goto label_7F0AE070;
    case 0x7F0AE074u: goto label_7F0AE074;
    case 0x7F0AE078u: goto label_7F0AE078;
    case 0x7F0AE07Cu: goto label_7F0AE07C;
    case 0x7F0AE080u: goto label_7F0AE080;
    case 0x7F0AE084u: goto label_7F0AE084;
    case 0x7F0AE088u: goto label_7F0AE088;
    case 0x7F0AE08Cu: goto label_7F0AE08C;
    case 0x7F0AE090u: goto label_7F0AE090;
    case 0x7F0AE094u: goto label_7F0AE094;
    case 0x7F0AE098u: goto label_7F0AE098;
    case 0x7F0AE09Cu: goto label_7F0AE09C;
    case 0x7F0AE0A0u: goto label_7F0AE0A0;
    case 0x7F0AE0A4u: goto label_7F0AE0A4;
    case 0x7F0AE0A8u: goto label_7F0AE0A8;
    case 0x7F0AE0ACu: goto label_7F0AE0AC;
    case 0x7F0AE0B0u: goto label_7F0AE0B0;
    case 0x7F0AE0B4u: goto label_7F0AE0B4;
    case 0x7F0AE0B8u: goto label_7F0AE0B8;
    case 0x7F0AE0BCu: goto label_7F0AE0BC;
    case 0x7F0AE0C0u: goto label_7F0AE0C0;
    case 0x7F0AE0C4u: goto label_7F0AE0C4;
    case 0x7F0AE0C8u: goto label_7F0AE0C8;
    case 0x7F0AE0CCu: goto label_7F0AE0CC;
    case 0x7F0AE0D0u: goto label_7F0AE0D0;
    case 0x7F0AE0D4u: goto label_7F0AE0D4;
    case 0x7F0AE0D8u: goto label_7F0AE0D8;
    case 0x7F0AE0DCu: goto label_7F0AE0DC;
    case 0x7F0AE0E0u: goto label_7F0AE0E0;
    case 0x7F0AE0E4u: goto label_7F0AE0E4;
    case 0x7F0AE0E8u: goto label_7F0AE0E8;
    case 0x7F0AE0ECu: goto label_7F0AE0EC;
    case 0x7F0AE0F0u: goto label_7F0AE0F0;
    case 0x7F0AE0F4u: goto label_7F0AE0F4;
    case 0x7F0AE0F8u: goto label_7F0AE0F8;
    case 0x7F0AE0FCu: goto label_7F0AE0FC;
    case 0x7F0AE100u: goto label_7F0AE100;
    case 0x7F0AE104u: goto label_7F0AE104;
    case 0x7F0AE108u: goto label_7F0AE108;
    case 0x7F0AE10Cu: goto label_7F0AE10C;
    case 0x7F0AE110u: goto label_7F0AE110;
    case 0x7F0AE114u: goto label_7F0AE114;
    case 0x7F0AE118u: goto label_7F0AE118;
    case 0x7F0AE11Cu: goto label_7F0AE11C;
    case 0x7F0AE120u: goto label_7F0AE120;
    case 0x7F0AE124u: goto label_7F0AE124;
    case 0x7F0AE128u: goto label_7F0AE128;
    case 0x7F0AE12Cu: goto label_7F0AE12C;
    case 0x7F0AE130u: goto label_7F0AE130;
    case 0x7F0AE134u: goto label_7F0AE134;
    case 0x7F0AE138u: goto label_7F0AE138;
    case 0x7F0AE13Cu: goto label_7F0AE13C;
    case 0x7F0AE140u: goto label_7F0AE140;
    case 0x7F0AE144u: goto label_7F0AE144;
    case 0x7F0AE148u: goto label_7F0AE148;
    case 0x7F0AE14Cu: goto label_7F0AE14C;
    case 0x7F0AE150u: goto label_7F0AE150;
    case 0x7F0AE154u: goto label_7F0AE154;
    case 0x7F0AE158u: goto label_7F0AE158;
    case 0x7F0AE15Cu: goto label_7F0AE15C;
    case 0x7F0AE160u: goto label_7F0AE160;
    case 0x7F0AE164u: goto label_7F0AE164;
    case 0x7F0AE168u: goto label_7F0AE168;
    case 0x7F0AE16Cu: goto label_7F0AE16C;
    case 0x7F0AE170u: goto label_7F0AE170;
    case 0x7F0AE174u: goto label_7F0AE174;
    case 0x7F0AE178u: goto label_7F0AE178;
    case 0x7F0AE17Cu: goto label_7F0AE17C;
    case 0x7F0AE180u: goto label_7F0AE180;
    case 0x7F0AE184u: goto label_7F0AE184;
    case 0x7F0AE188u: goto label_7F0AE188;
    case 0x7F0AE18Cu: goto label_7F0AE18C;
    case 0x7F0AE190u: goto label_7F0AE190;
    case 0x7F0AE194u: goto label_7F0AE194;
    case 0x7F0AE198u: goto label_7F0AE198;
    case 0x7F0AE19Cu: goto label_7F0AE19C;
    case 0x7F0AE1A0u: goto label_7F0AE1A0;
    case 0x7F0AE1A4u: goto label_7F0AE1A4;
    case 0x7F0AE1A8u: goto label_7F0AE1A8;
    case 0x7F0AE1ACu: goto label_7F0AE1AC;
    case 0x7F0AE1B0u: goto label_7F0AE1B0;
    case 0x7F0AE1B4u: goto label_7F0AE1B4;
    case 0x7F0AE1B8u: goto label_7F0AE1B8;
    case 0x7F0AE1BCu: goto label_7F0AE1BC;
    case 0x7F0AE1C0u: goto label_7F0AE1C0;
    case 0x7F0AE1C4u: goto label_7F0AE1C4;
    case 0x7F0AE1C8u: goto label_7F0AE1C8;
    case 0x7F0AE1CCu: goto label_7F0AE1CC;
    case 0x7F0AE1D0u: goto label_7F0AE1D0;
    case 0x7F0AE1D4u: goto label_7F0AE1D4;
    case 0x7F0AE1D8u: goto label_7F0AE1D8;
    case 0x7F0AE1DCu: goto label_7F0AE1DC;
    case 0x7F0AE1E0u: goto label_7F0AE1E0;
    case 0x7F0AE1E4u: goto label_7F0AE1E4;
    case 0x7F0AE1E8u: goto label_7F0AE1E8;
    case 0x7F0AE1ECu: goto label_7F0AE1EC;
    case 0x7F0AE1F0u: goto label_7F0AE1F0;
    case 0x7F0AE1F4u: goto label_7F0AE1F4;
    case 0x7F0AE1F8u: goto label_7F0AE1F8;
    case 0x7F0AE1FCu: goto label_7F0AE1FC;
    case 0x7F0AE200u: goto label_7F0AE200;
    case 0x7F0AE204u: goto label_7F0AE204;
    case 0x7F0AE208u: goto label_7F0AE208;
    case 0x7F0AE20Cu: goto label_7F0AE20C;
    case 0x7F0AE210u: goto label_7F0AE210;
    case 0x7F0AE214u: goto label_7F0AE214;
    case 0x7F0AE218u: goto label_7F0AE218;
    case 0x7F0AE21Cu: goto label_7F0AE21C;
    case 0x7F0AE220u: goto label_7F0AE220;
    case 0x7F0AE224u: goto label_7F0AE224;
    case 0x7F0AE228u: goto label_7F0AE228;
    case 0x7F0AE22Cu: goto label_7F0AE22C;
    case 0x7F0AE230u: goto label_7F0AE230;
    case 0x7F0AE234u: goto label_7F0AE234;
    case 0x7F0AE238u: goto label_7F0AE238;
    case 0x7F0AE23Cu: goto label_7F0AE23C;
    case 0x7F0AE240u: goto label_7F0AE240;
    case 0x7F0AE244u: goto label_7F0AE244;
    case 0x7F0AE248u: goto label_7F0AE248;
    case 0x7F0AE24Cu: goto label_7F0AE24C;
    case 0x7F0AE250u: goto label_7F0AE250;
    case 0x7F0AE254u: goto label_7F0AE254;
    case 0x7F0AE258u: goto label_7F0AE258;
    case 0x7F0AE25Cu: goto label_7F0AE25C;
    case 0x7F0AE260u: goto label_7F0AE260;
    case 0x7F0AE264u: goto label_7F0AE264;
    case 0x7F0AE268u: goto label_7F0AE268;
    case 0x7F0AE26Cu: goto label_7F0AE26C;
    case 0x7F0AE270u: goto label_7F0AE270;
    case 0x7F0AE274u: goto label_7F0AE274;
    case 0x7F0AE278u: goto label_7F0AE278;
    case 0x7F0AE27Cu: goto label_7F0AE27C;
    case 0x7F0AE280u: goto label_7F0AE280;
    case 0x7F0AE284u: goto label_7F0AE284;
    case 0x7F0AE288u: goto label_7F0AE288;
    case 0x7F0AE28Cu: goto label_7F0AE28C;
    case 0x7F0AE290u: goto label_7F0AE290;
    case 0x7F0AE294u: goto label_7F0AE294;
    case 0x7F0AE298u: goto label_7F0AE298;
    case 0x7F0AE29Cu: goto label_7F0AE29C;
    case 0x7F0AE2A0u: goto label_7F0AE2A0;
    case 0x7F0AE2A4u: goto label_7F0AE2A4;
    case 0x7F0AE2A8u: goto label_7F0AE2A8;
    case 0x7F0AE2ACu: goto label_7F0AE2AC;
    case 0x7F0AE2B0u: goto label_7F0AE2B0;
    case 0x7F0AE2B4u: goto label_7F0AE2B4;
    case 0x7F0AE2B8u: goto label_7F0AE2B8;
    case 0x7F0AE2BCu: goto label_7F0AE2BC;
    case 0x7F0AE2C0u: goto label_7F0AE2C0;
    case 0x7F0AE2C4u: goto label_7F0AE2C4;
    case 0x7F0AE2C8u: goto label_7F0AE2C8;
    case 0x7F0AE2CCu: goto label_7F0AE2CC;
    case 0x7F0AE2D0u: goto label_7F0AE2D0;
    case 0x7F0AE2D4u: goto label_7F0AE2D4;
    case 0x7F0AE2D8u: goto label_7F0AE2D8;
    case 0x7F0AE2DCu: goto label_7F0AE2DC;
    case 0x7F0AE2E0u: goto label_7F0AE2E0;
    case 0x7F0AE2E4u: goto label_7F0AE2E4;
    case 0x7F0AE2E8u: goto label_7F0AE2E8;
    case 0x7F0AE2ECu: goto label_7F0AE2EC;
    case 0x7F0AE2F0u: goto label_7F0AE2F0;
    case 0x7F0AE2F4u: goto label_7F0AE2F4;
    case 0x7F0AE2F8u: goto label_7F0AE2F8;
    case 0x7F0AE2FCu: goto label_7F0AE2FC;
    case 0x7F0AE300u: goto label_7F0AE300;
    case 0x7F0AE304u: goto label_7F0AE304;
    case 0x7F0AE308u: goto label_7F0AE308;
    case 0x7F0AE30Cu: goto label_7F0AE30C;
    case 0x7F0AE310u: goto label_7F0AE310;
    case 0x7F0AE314u: goto label_7F0AE314;
    case 0x7F0AE318u: goto label_7F0AE318;
    case 0x7F0AE31Cu: goto label_7F0AE31C;
    case 0x7F0AE320u: goto label_7F0AE320;
    case 0x7F0AE324u: goto label_7F0AE324;
    case 0x7F0AE328u: goto label_7F0AE328;
    case 0x7F0AE32Cu: goto label_7F0AE32C;
    case 0x7F0AE330u: goto label_7F0AE330;
    case 0x7F0AE334u: goto label_7F0AE334;
    case 0x7F0AE338u: goto label_7F0AE338;
    case 0x7F0AE33Cu: goto label_7F0AE33C;
    case 0x7F0AE340u: goto label_7F0AE340;
    case 0x7F0AE344u: goto label_7F0AE344;
    case 0x7F0AE348u: goto label_7F0AE348;
    case 0x7F0AE34Cu: goto label_7F0AE34C;
    case 0x7F0AE350u: goto label_7F0AE350;
    case 0x7F0AE354u: goto label_7F0AE354;
    case 0x7F0AE358u: goto label_7F0AE358;
    case 0x7F0AE35Cu: goto label_7F0AE35C;
    case 0x7F0AE360u: goto label_7F0AE360;
    case 0x7F0AE364u: goto label_7F0AE364;
    case 0x7F0AE368u: goto label_7F0AE368;
    case 0x7F0AE36Cu: goto label_7F0AE36C;
    case 0x7F0AE370u: goto label_7F0AE370;
    case 0x7F0AE374u: goto label_7F0AE374;
    case 0x7F0AE378u: goto label_7F0AE378;
    case 0x7F0AE37Cu: goto label_7F0AE37C;
    case 0x7F0AE380u: goto label_7F0AE380;
    case 0x7F0AE384u: goto label_7F0AE384;
    case 0x7F0AE388u: goto label_7F0AE388;
    case 0x7F0AE38Cu: goto label_7F0AE38C;
    case 0x7F0AE390u: goto label_7F0AE390;
    case 0x7F0AE394u: goto label_7F0AE394;
    case 0x7F0AE398u: goto label_7F0AE398;
    case 0x7F0AE39Cu: goto label_7F0AE39C;
    case 0x7F0AE3A0u: goto label_7F0AE3A0;
    case 0x7F0AE3A4u: goto label_7F0AE3A4;
    case 0x7F0AE3A8u: goto label_7F0AE3A8;
    case 0x7F0AE3ACu: goto label_7F0AE3AC;
    case 0x7F0AE3B0u: goto label_7F0AE3B0;
    case 0x7F0AE3B4u: goto label_7F0AE3B4;
    case 0x7F0AE3B8u: goto label_7F0AE3B8;
    case 0x7F0AE3BCu: goto label_7F0AE3BC;
    case 0x7F0AE3C0u: goto label_7F0AE3C0;
    case 0x7F0AE3C4u: goto label_7F0AE3C4;
    case 0x7F0AE3C8u: goto label_7F0AE3C8;
    case 0x7F0AE3CCu: goto label_7F0AE3CC;
    case 0x7F0AE3D0u: goto label_7F0AE3D0;
    case 0x7F0AE3D4u: goto label_7F0AE3D4;
    case 0x7F0AE3D8u: goto label_7F0AE3D8;
    case 0x7F0AE3DCu: goto label_7F0AE3DC;
    case 0x7F0AE3E0u: goto label_7F0AE3E0;
    case 0x7F0AE3E4u: goto label_7F0AE3E4;
    case 0x7F0AE3E8u: goto label_7F0AE3E8;
    case 0x7F0AE3ECu: goto label_7F0AE3EC;
    case 0x7F0AE3F0u: goto label_7F0AE3F0;
    case 0x7F0AE3F4u: goto label_7F0AE3F4;
    case 0x7F0AE3F8u: goto label_7F0AE3F8;
    case 0x7F0AE3FCu: goto label_7F0AE3FC;
    case 0x7F0AE400u: goto label_7F0AE400;
    case 0x7F0AE404u: goto label_7F0AE404;
    case 0x7F0AE408u: goto label_7F0AE408;
    case 0x7F0AE40Cu: goto label_7F0AE40C;
    case 0x7F0AE410u: goto label_7F0AE410;
    case 0x7F0AE414u: goto label_7F0AE414;
    case 0x7F0AE418u: goto label_7F0AE418;
    case 0x7F0AE41Cu: goto label_7F0AE41C;
    case 0x7F0AE420u: goto label_7F0AE420;
    case 0x7F0AE424u: goto label_7F0AE424;
    case 0x7F0AE428u: goto label_7F0AE428;
    case 0x7F0AE42Cu: goto label_7F0AE42C;
    case 0x7F0AE430u: goto label_7F0AE430;
    case 0x7F0AE434u: goto label_7F0AE434;
    case 0x7F0AE438u: goto label_7F0AE438;
    case 0x7F0AE43Cu: goto label_7F0AE43C;
    case 0x7F0AE440u: goto label_7F0AE440;
    case 0x7F0AE444u: goto label_7F0AE444;
    case 0x7F0AE448u: goto label_7F0AE448;
    case 0x7F0AE44Cu: goto label_7F0AE44C;
    case 0x7F0AE450u: goto label_7F0AE450;
    case 0x7F0AE454u: goto label_7F0AE454;
    case 0x7F0AE458u: goto label_7F0AE458;
    case 0x7F0AE45Cu: goto label_7F0AE45C;
    case 0x7F0AE460u: goto label_7F0AE460;
    case 0x7F0AE464u: goto label_7F0AE464;
    case 0x7F0AE468u: goto label_7F0AE468;
    case 0x7F0AE46Cu: goto label_7F0AE46C;
    case 0x7F0AE470u: goto label_7F0AE470;
    case 0x7F0AE474u: goto label_7F0AE474;
    case 0x7F0AE478u: goto label_7F0AE478;
    case 0x7F0AE47Cu: goto label_7F0AE47C;
    case 0x7F0AE480u: goto label_7F0AE480;
    case 0x7F0AE484u: goto label_7F0AE484;
    case 0x7F0AE488u: goto label_7F0AE488;
    case 0x7F0AE48Cu: goto label_7F0AE48C;
    case 0x7F0AE490u: goto label_7F0AE490;
    case 0x7F0AE494u: goto label_7F0AE494;
    case 0x7F0AE498u: goto label_7F0AE498;
    case 0x7F0AE49Cu: goto label_7F0AE49C;
    case 0x7F0AE4A0u: goto label_7F0AE4A0;
    case 0x7F0AE4A4u: goto label_7F0AE4A4;
    case 0x7F0AE4A8u: goto label_7F0AE4A8;
    case 0x7F0AE4ACu: goto label_7F0AE4AC;
    case 0x7F0AE4B0u: goto label_7F0AE4B0;
    case 0x7F0AE4B4u: goto label_7F0AE4B4;
    case 0x7F0AE4B8u: goto label_7F0AE4B8;
    case 0x7F0AE4BCu: goto label_7F0AE4BC;
    case 0x7F0AE4C0u: goto label_7F0AE4C0;
    case 0x7F0AE4C4u: goto label_7F0AE4C4;
    case 0x7F0AE4C8u: goto label_7F0AE4C8;
    case 0x7F0AE4CCu: goto label_7F0AE4CC;
    case 0x7F0AE4D0u: goto label_7F0AE4D0;
    case 0x7F0AE4D4u: goto label_7F0AE4D4;
    case 0x7F0AE4D8u: goto label_7F0AE4D8;
    case 0x7F0AE4DCu: goto label_7F0AE4DC;
    case 0x7F0AE4E0u: goto label_7F0AE4E0;
    case 0x7F0AE4E4u: goto label_7F0AE4E4;
    case 0x7F0AE4E8u: goto label_7F0AE4E8;
    case 0x7F0AE4ECu: goto label_7F0AE4EC;
    case 0x7F0AE4F0u: goto label_7F0AE4F0;
    case 0x7F0AE4F4u: goto label_7F0AE4F4;
    case 0x7F0AE4F8u: goto label_7F0AE4F8;
    case 0x7F0AE4FCu: goto label_7F0AE4FC;
    case 0x7F0AE500u: goto label_7F0AE500;
    case 0x7F0AE504u: goto label_7F0AE504;
    case 0x7F0AE508u: goto label_7F0AE508;
    case 0x7F0AE50Cu: goto label_7F0AE50C;
    case 0x7F0AE510u: goto label_7F0AE510;
    case 0x7F0AE514u: goto label_7F0AE514;
    case 0x7F0AE518u: goto label_7F0AE518;
    case 0x7F0AE51Cu: goto label_7F0AE51C;
    case 0x7F0AE520u: goto label_7F0AE520;
    case 0x7F0AE524u: goto label_7F0AE524;
    case 0x7F0AE528u: goto label_7F0AE528;
    case 0x7F0AE52Cu: goto label_7F0AE52C;
    case 0x7F0AE530u: goto label_7F0AE530;
    case 0x7F0AE534u: goto label_7F0AE534;
    case 0x7F0AE538u: goto label_7F0AE538;
    case 0x7F0AE53Cu: goto label_7F0AE53C;
    case 0x7F0AE540u: goto label_7F0AE540;
    case 0x7F0AE544u: goto label_7F0AE544;
    case 0x7F0AE548u: goto label_7F0AE548;
    case 0x7F0AE54Cu: goto label_7F0AE54C;
    case 0x7F0AE550u: goto label_7F0AE550;
    case 0x7F0AE554u: goto label_7F0AE554;
    case 0x7F0AE558u: goto label_7F0AE558;
    case 0x7F0AE55Cu: goto label_7F0AE55C;
    case 0x7F0AE560u: goto label_7F0AE560;
    case 0x7F0AE564u: goto label_7F0AE564;
    case 0x7F0AE568u: goto label_7F0AE568;
    case 0x7F0AE56Cu: goto label_7F0AE56C;
    case 0x7F0AE570u: goto label_7F0AE570;
    case 0x7F0AE574u: goto label_7F0AE574;
    case 0x7F0AE578u: goto label_7F0AE578;
    case 0x7F0AE57Cu: goto label_7F0AE57C;
    case 0x7F0AE580u: goto label_7F0AE580;
    case 0x7F0AE584u: goto label_7F0AE584;
    case 0x7F0AE588u: goto label_7F0AE588;
    case 0x7F0AE58Cu: goto label_7F0AE58C;
    case 0x7F0AE590u: goto label_7F0AE590;
    case 0x7F0AE594u: goto label_7F0AE594;
    case 0x7F0AE598u: goto label_7F0AE598;
    case 0x7F0AE59Cu: goto label_7F0AE59C;
    case 0x7F0AE5A0u: goto label_7F0AE5A0;
    case 0x7F0AE5A4u: goto label_7F0AE5A4;
    case 0x7F0AE5A8u: goto label_7F0AE5A8;
    case 0x7F0AE5ACu: goto label_7F0AE5AC;
    case 0x7F0AE5B0u: goto label_7F0AE5B0;
    case 0x7F0AE5B4u: goto label_7F0AE5B4;
    case 0x7F0AE5B8u: goto label_7F0AE5B8;
    case 0x7F0AE5BCu: goto label_7F0AE5BC;
    case 0x7F0AE5C0u: goto label_7F0AE5C0;
    case 0x7F0AE5C4u: goto label_7F0AE5C4;
    case 0x7F0AE5C8u: goto label_7F0AE5C8;
    case 0x7F0AE5CCu: goto label_7F0AE5CC;
    case 0x7F0AE5D0u: goto label_7F0AE5D0;
    case 0x7F0AE5D4u: goto label_7F0AE5D4;
    case 0x7F0AE5D8u: goto label_7F0AE5D8;
    case 0x7F0AE5DCu: goto label_7F0AE5DC;
    case 0x7F0AE5E0u: goto label_7F0AE5E0;
    case 0x7F0AE5E4u: goto label_7F0AE5E4;
    case 0x7F0AE5E8u: goto label_7F0AE5E8;
    case 0x7F0AE5ECu: goto label_7F0AE5EC;
    case 0x7F0AE5F0u: goto label_7F0AE5F0;
    case 0x7F0AE5F4u: goto label_7F0AE5F4;
    case 0x7F0AE5F8u: goto label_7F0AE5F8;
    case 0x7F0AE5FCu: goto label_7F0AE5FC;
    case 0x7F0AE600u: goto label_7F0AE600;
    case 0x7F0AE604u: goto label_7F0AE604;
    case 0x7F0AE608u: goto label_7F0AE608;
    case 0x7F0AE60Cu: goto label_7F0AE60C;
    case 0x7F0AE610u: goto label_7F0AE610;
    case 0x7F0AE614u: goto label_7F0AE614;
    case 0x7F0AE618u: goto label_7F0AE618;
    case 0x7F0AE61Cu: goto label_7F0AE61C;
    case 0x7F0AE620u: goto label_7F0AE620;
    case 0x7F0AE624u: goto label_7F0AE624;
    case 0x7F0AE628u: goto label_7F0AE628;
    case 0x7F0AE62Cu: goto label_7F0AE62C;
    case 0x7F0AE630u: goto label_7F0AE630;
    case 0x7F0AE634u: goto label_7F0AE634;
    case 0x7F0AE638u: goto label_7F0AE638;
    case 0x7F0AE63Cu: goto label_7F0AE63C;
    case 0x7F0AE640u: goto label_7F0AE640;
    case 0x7F0AE644u: goto label_7F0AE644;
    case 0x7F0AE648u: goto label_7F0AE648;
    case 0x7F0AE64Cu: goto label_7F0AE64C;
    case 0x7F0AE650u: goto label_7F0AE650;
    case 0x7F0AE654u: goto label_7F0AE654;
    case 0x7F0AE658u: goto label_7F0AE658;
    case 0x7F0AE65Cu: goto label_7F0AE65C;
    case 0x7F0AE660u: goto label_7F0AE660;
    case 0x7F0AE664u: goto label_7F0AE664;
    case 0x7F0AE668u: goto label_7F0AE668;
    case 0x7F0AE66Cu: goto label_7F0AE66C;
    case 0x7F0AE670u: goto label_7F0AE670;
    case 0x7F0AE674u: goto label_7F0AE674;
    case 0x7F0AE678u: goto label_7F0AE678;
    case 0x7F0AE67Cu: goto label_7F0AE67C;
    case 0x7F0AE680u: goto label_7F0AE680;
    case 0x7F0AE684u: goto label_7F0AE684;
    case 0x7F0AE688u: goto label_7F0AE688;
    case 0x7F0AE68Cu: goto label_7F0AE68C;
    case 0x7F0AE690u: goto label_7F0AE690;
    case 0x7F0AE694u: goto label_7F0AE694;
    case 0x7F0AE698u: goto label_7F0AE698;
    case 0x7F0AE69Cu: goto label_7F0AE69C;
    case 0x7F0AE6A0u: goto label_7F0AE6A0;
    case 0x7F0AE6A4u: goto label_7F0AE6A4;
    case 0x7F0AE6A8u: goto label_7F0AE6A8;
    case 0x7F0AE6ACu: goto label_7F0AE6AC;
    case 0x7F0AE6B0u: goto label_7F0AE6B0;
    case 0x7F0AE6B4u: goto label_7F0AE6B4;
    case 0x7F0AE6B8u: goto label_7F0AE6B8;
    case 0x7F0AE6BCu: goto label_7F0AE6BC;
    case 0x7F0AE6C0u: goto label_7F0AE6C0;
    case 0x7F0AE6C4u: goto label_7F0AE6C4;
    case 0x7F0AE6C8u: goto label_7F0AE6C8;
    case 0x7F0AE6CCu: goto label_7F0AE6CC;
    case 0x7F0AE6D0u: goto label_7F0AE6D0;
    case 0x7F0AE6D4u: goto label_7F0AE6D4;
    case 0x7F0AE6D8u: goto label_7F0AE6D8;
    case 0x7F0AE6DCu: goto label_7F0AE6DC;
    case 0x7F0AE6E0u: goto label_7F0AE6E0;
    case 0x7F0AE6E4u: goto label_7F0AE6E4;
    case 0x7F0AE6E8u: goto label_7F0AE6E8;
    case 0x7F0AE6ECu: goto label_7F0AE6EC;
    case 0x7F0AE6F0u: goto label_7F0AE6F0;
    case 0x7F0AE6F4u: goto label_7F0AE6F4;
    case 0x7F0AE6F8u: goto label_7F0AE6F8;
    case 0x7F0AE6FCu: goto label_7F0AE6FC;
    case 0x7F0AE700u: goto label_7F0AE700;
    case 0x7F0AE704u: goto label_7F0AE704;
    case 0x7F0AE708u: goto label_7F0AE708;
    case 0x7F0AE70Cu: goto label_7F0AE70C;
    case 0x7F0AE710u: goto label_7F0AE710;
    case 0x7F0AE714u: goto label_7F0AE714;
    case 0x7F0AE718u: goto label_7F0AE718;
    case 0x7F0AE71Cu: goto label_7F0AE71C;
    case 0x7F0AE720u: goto label_7F0AE720;
    case 0x7F0AE724u: goto label_7F0AE724;
    case 0x7F0AE728u: goto label_7F0AE728;
    case 0x7F0AE72Cu: goto label_7F0AE72C;
    case 0x7F0AE730u: goto label_7F0AE730;
    case 0x7F0AE734u: goto label_7F0AE734;
    case 0x7F0AE738u: goto label_7F0AE738;
    case 0x7F0AE73Cu: goto label_7F0AE73C;
    case 0x7F0AE740u: goto label_7F0AE740;
    case 0x7F0AE744u: goto label_7F0AE744;
    case 0x7F0AE748u: goto label_7F0AE748;
    case 0x7F0AE74Cu: goto label_7F0AE74C;
    case 0x7F0AE750u: goto label_7F0AE750;
    case 0x7F0AE754u: goto label_7F0AE754;
    case 0x7F0AE758u: goto label_7F0AE758;
    case 0x7F0AE75Cu: goto label_7F0AE75C;
    case 0x7F0AE760u: goto label_7F0AE760;
    case 0x7F0AE764u: goto label_7F0AE764;
    case 0x7F0AE768u: goto label_7F0AE768;
    case 0x7F0AE76Cu: goto label_7F0AE76C;
    case 0x7F0AE770u: goto label_7F0AE770;
    case 0x7F0AE774u: goto label_7F0AE774;
    case 0x7F0AE778u: goto label_7F0AE778;
    case 0x7F0AE77Cu: goto label_7F0AE77C;
    case 0x7F0AE780u: goto label_7F0AE780;
    case 0x7F0AE784u: goto label_7F0AE784;
    case 0x7F0AE788u: goto label_7F0AE788;
    case 0x7F0AE78Cu: goto label_7F0AE78C;
    case 0x7F0AE790u: goto label_7F0AE790;
    case 0x7F0AE794u: goto label_7F0AE794;
    case 0x7F0AE798u: goto label_7F0AE798;
    case 0x7F0AE79Cu: goto label_7F0AE79C;
    case 0x7F0AE7A0u: goto label_7F0AE7A0;
    case 0x7F0AE7A4u: goto label_7F0AE7A4;
    case 0x7F0AE7A8u: goto label_7F0AE7A8;
    case 0x7F0AE7ACu: goto label_7F0AE7AC;
    case 0x7F0AE7B0u: goto label_7F0AE7B0;
    case 0x7F0AE7B4u: goto label_7F0AE7B4;
    case 0x7F0AE7B8u: goto label_7F0AE7B8;
    case 0x7F0AE7BCu: goto label_7F0AE7BC;
    case 0x7F0AE7C0u: goto label_7F0AE7C0;
    case 0x7F0AE7C4u: goto label_7F0AE7C4;
    case 0x7F0AE7C8u: goto label_7F0AE7C8;
    case 0x7F0AE7CCu: goto label_7F0AE7CC;
    case 0x7F0AE7D0u: goto label_7F0AE7D0;
    case 0x7F0AE7D4u: goto label_7F0AE7D4;
    case 0x7F0AE7D8u: goto label_7F0AE7D8;
    case 0x7F0AE7DCu: goto label_7F0AE7DC;
    case 0x7F0AE7E0u: goto label_7F0AE7E0;
    case 0x7F0AE7E4u: goto label_7F0AE7E4;
    case 0x7F0AE7E8u: goto label_7F0AE7E8;
    case 0x7F0AE7ECu: goto label_7F0AE7EC;
    case 0x7F0AE7F0u: goto label_7F0AE7F0;
    case 0x7F0AE7F4u: goto label_7F0AE7F4;
    case 0x7F0AE7F8u: goto label_7F0AE7F8;
    case 0x7F0AE7FCu: goto label_7F0AE7FC;
    case 0x7F0AE800u: goto label_7F0AE800;
    case 0x7F0AE804u: goto label_7F0AE804;
    case 0x7F0AE808u: goto label_7F0AE808;
    case 0x7F0AE80Cu: goto label_7F0AE80C;
    case 0x7F0AE810u: goto label_7F0AE810;
    case 0x7F0AE814u: goto label_7F0AE814;
    case 0x7F0AE818u: goto label_7F0AE818;
    case 0x7F0AE81Cu: goto label_7F0AE81C;
    case 0x7F0AE820u: goto label_7F0AE820;
    case 0x7F0AE824u: goto label_7F0AE824;
    case 0x7F0AE828u: goto label_7F0AE828;
    case 0x7F0AE82Cu: goto label_7F0AE82C;
    case 0x7F0AE830u: goto label_7F0AE830;
    case 0x7F0AE834u: goto label_7F0AE834;
    case 0x7F0AE838u: goto label_7F0AE838;
    case 0x7F0AE83Cu: goto label_7F0AE83C;
    case 0x7F0AE840u: goto label_7F0AE840;
    case 0x7F0AE844u: goto label_7F0AE844;
    case 0x7F0AE848u: goto label_7F0AE848;
    case 0x7F0AE84Cu: goto label_7F0AE84C;
    case 0x7F0AE850u: goto label_7F0AE850;
    case 0x7F0AE854u: goto label_7F0AE854;
    case 0x7F0AE858u: goto label_7F0AE858;
    case 0x7F0AE85Cu: goto label_7F0AE85C;
    case 0x7F0AE860u: goto label_7F0AE860;
    case 0x7F0AE864u: goto label_7F0AE864;
    case 0x7F0AE868u: goto label_7F0AE868;
    case 0x7F0AE86Cu: goto label_7F0AE86C;
    case 0x7F0AE870u: goto label_7F0AE870;
    case 0x7F0AE874u: goto label_7F0AE874;
    case 0x7F0AE878u: goto label_7F0AE878;
    case 0x7F0AE87Cu: goto label_7F0AE87C;
    case 0x7F0AE880u: goto label_7F0AE880;
    case 0x7F0AE884u: goto label_7F0AE884;
    case 0x7F0AE888u: goto label_7F0AE888;
    case 0x7F0AE88Cu: goto label_7F0AE88C;
    case 0x7F0AE890u: goto label_7F0AE890;
    case 0x7F0AE894u: goto label_7F0AE894;
    case 0x7F0AE898u: goto label_7F0AE898;
    case 0x7F0AE89Cu: goto label_7F0AE89C;
    case 0x7F0AE8A0u: goto label_7F0AE8A0;
    case 0x7F0AE8A4u: goto label_7F0AE8A4;
    case 0x7F0AE8A8u: goto label_7F0AE8A8;
    case 0x7F0AE8ACu: goto label_7F0AE8AC;
    case 0x7F0AE8B0u: goto label_7F0AE8B0;
    case 0x7F0AE8B4u: goto label_7F0AE8B4;
    case 0x7F0AE8B8u: goto label_7F0AE8B8;
    case 0x7F0AE8BCu: goto label_7F0AE8BC;
    case 0x7F0AE8C0u: goto label_7F0AE8C0;
    case 0x7F0AE8C4u: goto label_7F0AE8C4;
    case 0x7F0AE8C8u: goto label_7F0AE8C8;
    case 0x7F0AE8CCu: goto label_7F0AE8CC;
    case 0x7F0AE8D0u: goto label_7F0AE8D0;
    case 0x7F0AE8D4u: goto label_7F0AE8D4;
    case 0x7F0AE8D8u: goto label_7F0AE8D8;
    case 0x7F0AE8DCu: goto label_7F0AE8DC;
    case 0x7F0AE8E0u: goto label_7F0AE8E0;
    case 0x7F0AE8E4u: goto label_7F0AE8E4;
    case 0x7F0AE8E8u: goto label_7F0AE8E8;
    case 0x7F0AE8ECu: goto label_7F0AE8EC;
    case 0x7F0AE8F0u: goto label_7F0AE8F0;
    case 0x7F0AE8F4u: goto label_7F0AE8F4;
    case 0x7F0AE8F8u: goto label_7F0AE8F8;
    case 0x7F0AE8FCu: goto label_7F0AE8FC;
    case 0x7F0AE900u: goto label_7F0AE900;
    case 0x7F0AE904u: goto label_7F0AE904;
    case 0x7F0AE908u: goto label_7F0AE908;
    case 0x7F0AE90Cu: goto label_7F0AE90C;
    case 0x7F0AE910u: goto label_7F0AE910;
    case 0x7F0AE914u: goto label_7F0AE914;
    case 0x7F0AE918u: goto label_7F0AE918;
    case 0x7F0AE91Cu: goto label_7F0AE91C;
    case 0x7F0AE920u: goto label_7F0AE920;
    case 0x7F0AE924u: goto label_7F0AE924;
    case 0x7F0AE928u: goto label_7F0AE928;
    case 0x7F0AE92Cu: goto label_7F0AE92C;
    case 0x7F0AE930u: goto label_7F0AE930;
    case 0x7F0AE934u: goto label_7F0AE934;
    case 0x7F0AE938u: goto label_7F0AE938;
    case 0x7F0AE93Cu: goto label_7F0AE93C;
    case 0x7F0AE940u: goto label_7F0AE940;
    case 0x7F0AE944u: goto label_7F0AE944;
    case 0x7F0AE948u: goto label_7F0AE948;
    case 0x7F0AE94Cu: goto label_7F0AE94C;
    case 0x7F0AE950u: goto label_7F0AE950;
    case 0x7F0AE954u: goto label_7F0AE954;
    case 0x7F0AE958u: goto label_7F0AE958;
    case 0x7F0AE95Cu: goto label_7F0AE95C;
    case 0x7F0AE960u: goto label_7F0AE960;
    case 0x7F0AE964u: goto label_7F0AE964;
    case 0x7F0AE968u: goto label_7F0AE968;
    case 0x7F0AE96Cu: goto label_7F0AE96C;
    case 0x7F0AE970u: goto label_7F0AE970;
    case 0x7F0AE974u: goto label_7F0AE974;
    case 0x7F0AE978u: goto label_7F0AE978;
    case 0x7F0AE97Cu: goto label_7F0AE97C;
    case 0x7F0AE980u: goto label_7F0AE980;
    case 0x7F0AE984u: goto label_7F0AE984;
    case 0x7F0AE988u: goto label_7F0AE988;
    case 0x7F0AE98Cu: goto label_7F0AE98C;
    case 0x7F0AE990u: goto label_7F0AE990;
    case 0x7F0AE994u: goto label_7F0AE994;
    case 0x7F0AE998u: goto label_7F0AE998;
    case 0x7F0AE99Cu: goto label_7F0AE99C;
    case 0x7F0AE9A0u: goto label_7F0AE9A0;
    case 0x7F0AE9A4u: goto label_7F0AE9A4;
    case 0x7F0AE9A8u: goto label_7F0AE9A8;
    case 0x7F0AE9ACu: goto label_7F0AE9AC;
    case 0x7F0AE9B0u: goto label_7F0AE9B0;
    case 0x7F0AE9B4u: goto label_7F0AE9B4;
    case 0x7F0AE9B8u: goto label_7F0AE9B8;
    case 0x7F0AE9BCu: goto label_7F0AE9BC;
    case 0x7F0AE9C0u: goto label_7F0AE9C0;
    case 0x7F0AE9C4u: goto label_7F0AE9C4;
    case 0x7F0AE9C8u: goto label_7F0AE9C8;
    case 0x7F0AE9CCu: goto label_7F0AE9CC;
    case 0x7F0AE9D0u: goto label_7F0AE9D0;
    case 0x7F0AE9D4u: goto label_7F0AE9D4;
    case 0x7F0AE9D8u: goto label_7F0AE9D8;
    case 0x7F0AE9DCu: goto label_7F0AE9DC;
    case 0x7F0AE9E0u: goto label_7F0AE9E0;
    case 0x7F0AE9E4u: goto label_7F0AE9E4;
    case 0x7F0AE9E8u: goto label_7F0AE9E8;
    case 0x7F0AE9ECu: goto label_7F0AE9EC;
    case 0x7F0AE9F0u: goto label_7F0AE9F0;
    case 0x7F0AE9F4u: goto label_7F0AE9F4;
    case 0x7F0AE9F8u: goto label_7F0AE9F8;
    case 0x7F0AE9FCu: goto label_7F0AE9FC;
    case 0x7F0AEA00u: goto label_7F0AEA00;
    case 0x7F0AEA04u: goto label_7F0AEA04;
    case 0x7F0AEA08u: goto label_7F0AEA08;
    case 0x7F0AEA0Cu: goto label_7F0AEA0C;
    case 0x7F0AEA10u: goto label_7F0AEA10;
    case 0x7F0AEA14u: goto label_7F0AEA14;
    case 0x7F0AEA18u: goto label_7F0AEA18;
    case 0x7F0AEA1Cu: goto label_7F0AEA1C;
    case 0x7F0AEA20u: goto label_7F0AEA20;
    case 0x7F0AEA24u: goto label_7F0AEA24;
    case 0x7F0AEA28u: goto label_7F0AEA28;
    case 0x7F0AEA2Cu: goto label_7F0AEA2C;
    case 0x7F0AEA30u: goto label_7F0AEA30;
    case 0x7F0AEA34u: goto label_7F0AEA34;
    case 0x7F0AEA38u: goto label_7F0AEA38;
    case 0x7F0AEA3Cu: goto label_7F0AEA3C;
    case 0x7F0AEA40u: goto label_7F0AEA40;
    case 0x7F0AEA44u: goto label_7F0AEA44;
    case 0x7F0AEA48u: goto label_7F0AEA48;
    case 0x7F0AEA4Cu: goto label_7F0AEA4C;
    case 0x7F0AEA50u: goto label_7F0AEA50;
    case 0x7F0AEA54u: goto label_7F0AEA54;
    case 0x7F0AEA58u: goto label_7F0AEA58;
    case 0x7F0AEA5Cu: goto label_7F0AEA5C;
    case 0x7F0AEA60u: goto label_7F0AEA60;
    case 0x7F0AEA64u: goto label_7F0AEA64;
    case 0x7F0AEA68u: goto label_7F0AEA68;
    case 0x7F0AEA6Cu: goto label_7F0AEA6C;
    case 0x7F0AEA70u: goto label_7F0AEA70;
    case 0x7F0AEA74u: goto label_7F0AEA74;
    case 0x7F0AEA78u: goto label_7F0AEA78;
    case 0x7F0AEA7Cu: goto label_7F0AEA7C;
    case 0x7F0AEA80u: goto label_7F0AEA80;
    case 0x7F0AEA84u: goto label_7F0AEA84;
    case 0x7F0AEA88u: goto label_7F0AEA88;
    case 0x7F0AEA8Cu: goto label_7F0AEA8C;
    case 0x7F0AEA90u: goto label_7F0AEA90;
    case 0x7F0AEA94u: goto label_7F0AEA94;
    case 0x7F0AEA98u: goto label_7F0AEA98;
    case 0x7F0AEA9Cu: goto label_7F0AEA9C;
    case 0x7F0AEAA0u: goto label_7F0AEAA0;
    case 0x7F0AEAA4u: goto label_7F0AEAA4;
    case 0x7F0AEAA8u: goto label_7F0AEAA8;
    case 0x7F0AEAACu: goto label_7F0AEAAC;
    case 0x7F0AEAB0u: goto label_7F0AEAB0;
    case 0x7F0AEAB4u: goto label_7F0AEAB4;
    case 0x7F0AEAB8u: goto label_7F0AEAB8;
    case 0x7F0AEABCu: goto label_7F0AEABC;
    case 0x7F0AEAC0u: goto label_7F0AEAC0;
    case 0x7F0AEAC4u: goto label_7F0AEAC4;
    case 0x7F0AEAC8u: goto label_7F0AEAC8;
    case 0x7F0AEACCu: goto label_7F0AEACC;
    case 0x7F0AEAD0u: goto label_7F0AEAD0;
    case 0x7F0AEAD4u: goto label_7F0AEAD4;
    case 0x7F0AEAD8u: goto label_7F0AEAD8;
    case 0x7F0AEADCu: goto label_7F0AEADC;
    case 0x7F0AEAE0u: goto label_7F0AEAE0;
    case 0x7F0AEAE4u: goto label_7F0AEAE4;
    case 0x7F0AEAE8u: goto label_7F0AEAE8;
    case 0x7F0AEAECu: goto label_7F0AEAEC;
    case 0x7F0AEAF0u: goto label_7F0AEAF0;
    case 0x7F0AEAF4u: goto label_7F0AEAF4;
    case 0x7F0AEAF8u: goto label_7F0AEAF8;
    case 0x7F0AEAFCu: goto label_7F0AEAFC;
    case 0x7F0AEB00u: goto label_7F0AEB00;
    case 0x7F0AEB04u: goto label_7F0AEB04;
    case 0x7F0AEB08u: goto label_7F0AEB08;
    case 0x7F0AEB0Cu: goto label_7F0AEB0C;
    case 0x7F0AEB10u: goto label_7F0AEB10;
    case 0x7F0AEB14u: goto label_7F0AEB14;
    case 0x7F0AEB18u: goto label_7F0AEB18;
    case 0x7F0AEB1Cu: goto label_7F0AEB1C;
    case 0x7F0AEB20u: goto label_7F0AEB20;
    case 0x7F0AEB24u: goto label_7F0AEB24;
    case 0x7F0AEB28u: goto label_7F0AEB28;
    case 0x7F0AEB2Cu: goto label_7F0AEB2C;
    case 0x7F0AEB30u: goto label_7F0AEB30;
    case 0x7F0AEB34u: goto label_7F0AEB34;
    case 0x7F0AEB38u: goto label_7F0AEB38;
    case 0x7F0AEB3Cu: goto label_7F0AEB3C;
    case 0x7F0AEB40u: goto label_7F0AEB40;
    case 0x7F0AEB44u: goto label_7F0AEB44;
    case 0x7F0AEB48u: goto label_7F0AEB48;
    case 0x7F0AEB4Cu: goto label_7F0AEB4C;
    case 0x7F0AEB50u: goto label_7F0AEB50;
    case 0x7F0AEB54u: goto label_7F0AEB54;
    case 0x7F0AEB58u: goto label_7F0AEB58;
    case 0x7F0AEB5Cu: goto label_7F0AEB5C;
    case 0x7F0AEB60u: goto label_7F0AEB60;
    case 0x7F0AEB64u: goto label_7F0AEB64;
    case 0x7F0AEB68u: goto label_7F0AEB68;
    case 0x7F0AEB6Cu: goto label_7F0AEB6C;
    case 0x7F0AEB70u: goto label_7F0AEB70;
    case 0x7F0AEB74u: goto label_7F0AEB74;
    case 0x7F0AEB78u: goto label_7F0AEB78;
    case 0x7F0AEB7Cu: goto label_7F0AEB7C;
    case 0x7F0AEB80u: goto label_7F0AEB80;
    case 0x7F0AEB84u: goto label_7F0AEB84;
    case 0x7F0AEB88u: goto label_7F0AEB88;
    case 0x7F0AEB8Cu: goto label_7F0AEB8C;
    case 0x7F0AEB90u: goto label_7F0AEB90;
    case 0x7F0AEB94u: goto label_7F0AEB94;
    case 0x7F0AEB98u: goto label_7F0AEB98;
    case 0x7F0AEB9Cu: goto label_7F0AEB9C;
    case 0x7F0AEBA0u: goto label_7F0AEBA0;
    case 0x7F0AEBA4u: goto label_7F0AEBA4;
    case 0x7F0AEBA8u: goto label_7F0AEBA8;
    case 0x7F0AEBACu: goto label_7F0AEBAC;
    case 0x7F0AEBB0u: goto label_7F0AEBB0;
    case 0x7F0AEBB4u: goto label_7F0AEBB4;
    case 0x7F0AEBB8u: goto label_7F0AEBB8;
    case 0x7F0AEBBCu: goto label_7F0AEBBC;
    case 0x7F0AEBC0u: goto label_7F0AEBC0;
    case 0x7F0AEBC4u: goto label_7F0AEBC4;
    case 0x7F0AEBC8u: goto label_7F0AEBC8;
    case 0x7F0AEBCCu: goto label_7F0AEBCC;
    case 0x7F0AEBD0u: goto label_7F0AEBD0;
    case 0x7F0AEBD4u: goto label_7F0AEBD4;
    case 0x7F0AEBD8u: goto label_7F0AEBD8;
    case 0x7F0AEBDCu: goto label_7F0AEBDC;
    case 0x7F0AEBE0u: goto label_7F0AEBE0;
    case 0x7F0AEBE4u: goto label_7F0AEBE4;
    case 0x7F0AEBE8u: goto label_7F0AEBE8;
    case 0x7F0AEBECu: goto label_7F0AEBEC;
    case 0x7F0AEBF0u: goto label_7F0AEBF0;
    case 0x7F0AEBF4u: goto label_7F0AEBF4;
    case 0x7F0AEBF8u: goto label_7F0AEBF8;
    case 0x7F0AEBFCu: goto label_7F0AEBFC;
    case 0x7F0AEC00u: goto label_7F0AEC00;
    case 0x7F0AEC04u: goto label_7F0AEC04;
    case 0x7F0AEC08u: goto label_7F0AEC08;
    case 0x7F0AEC0Cu: goto label_7F0AEC0C;
    case 0x7F0AEC10u: goto label_7F0AEC10;
    case 0x7F0AEC14u: goto label_7F0AEC14;
    case 0x7F0AEC18u: goto label_7F0AEC18;
    case 0x7F0AEC1Cu: goto label_7F0AEC1C;
    case 0x7F0AEC20u: goto label_7F0AEC20;
    case 0x7F0AEC24u: goto label_7F0AEC24;
    case 0x7F0AEC28u: goto label_7F0AEC28;
    case 0x7F0AEC2Cu: goto label_7F0AEC2C;
    case 0x7F0AEC30u: goto label_7F0AEC30;
    case 0x7F0AEC34u: goto label_7F0AEC34;
    case 0x7F0AEC38u: goto label_7F0AEC38;
    case 0x7F0AEC3Cu: goto label_7F0AEC3C;
    case 0x7F0AEC40u: goto label_7F0AEC40;
    case 0x7F0AEC44u: goto label_7F0AEC44;
    case 0x7F0AEC48u: goto label_7F0AEC48;
    case 0x7F0AEC4Cu: goto label_7F0AEC4C;
    case 0x7F0AEC50u: goto label_7F0AEC50;
    case 0x7F0AEC54u: goto label_7F0AEC54;
    case 0x7F0AEC58u: goto label_7F0AEC58;
    case 0x7F0AEC5Cu: goto label_7F0AEC5C;
    case 0x7F0AEC60u: goto label_7F0AEC60;
    case 0x7F0AEC64u: goto label_7F0AEC64;
    case 0x7F0AEC68u: goto label_7F0AEC68;
    case 0x7F0AEC6Cu: goto label_7F0AEC6C;
    case 0x7F0AEC70u: goto label_7F0AEC70;
    case 0x7F0AEC74u: goto label_7F0AEC74;
    case 0x7F0AEC78u: goto label_7F0AEC78;
    case 0x7F0AEC7Cu: goto label_7F0AEC7C;
    case 0x7F0AEC80u: goto label_7F0AEC80;
    case 0x7F0AEC84u: goto label_7F0AEC84;
    case 0x7F0AEC88u: goto label_7F0AEC88;
    case 0x7F0AEC8Cu: goto label_7F0AEC8C;
    case 0x7F0AEC90u: goto label_7F0AEC90;
    case 0x7F0AEC94u: goto label_7F0AEC94;
    case 0x7F0AEC98u: goto label_7F0AEC98;
    case 0x7F0AEC9Cu: goto label_7F0AEC9C;
    case 0x7F0AECA0u: goto label_7F0AECA0;
    case 0x7F0AECA4u: goto label_7F0AECA4;
    case 0x7F0AECA8u: goto label_7F0AECA8;
    case 0x7F0AECACu: goto label_7F0AECAC;
    case 0x7F0AECB0u: goto label_7F0AECB0;
    case 0x7F0AECB4u: goto label_7F0AECB4;
    case 0x7F0AECB8u: goto label_7F0AECB8;
    case 0x7F0AECBCu: goto label_7F0AECBC;
    case 0x7F0AECC0u: goto label_7F0AECC0;
    case 0x7F0AECC4u: goto label_7F0AECC4;
    case 0x7F0AECC8u: goto label_7F0AECC8;
    case 0x7F0AECCCu: goto label_7F0AECCC;
    case 0x7F0AECD0u: goto label_7F0AECD0;
    case 0x7F0AECD4u: goto label_7F0AECD4;
    case 0x7F0AECD8u: goto label_7F0AECD8;
    case 0x7F0AECDCu: goto label_7F0AECDC;
    case 0x7F0AECE0u: goto label_7F0AECE0;
    case 0x7F0AECE4u: goto label_7F0AECE4;
    case 0x7F0AECE8u: goto label_7F0AECE8;
    case 0x7F0AECECu: goto label_7F0AECEC;
    case 0x7F0AECF0u: goto label_7F0AECF0;
    case 0x7F0AECF4u: goto label_7F0AECF4;
    case 0x7F0AECF8u: goto label_7F0AECF8;
    case 0x7F0AECFCu: goto label_7F0AECFC;
    case 0x7F0AED00u: goto label_7F0AED00;
    case 0x7F0AED04u: goto label_7F0AED04;
    case 0x7F0AED08u: goto label_7F0AED08;
    case 0x7F0AED0Cu: goto label_7F0AED0C;
    case 0x7F0AED10u: goto label_7F0AED10;
    case 0x7F0AED14u: goto label_7F0AED14;
    case 0x7F0AED18u: goto label_7F0AED18;
    case 0x7F0AED1Cu: goto label_7F0AED1C;
    case 0x7F0AED20u: goto label_7F0AED20;
    case 0x7F0AED24u: goto label_7F0AED24;
    case 0x7F0AED28u: goto label_7F0AED28;
    case 0x7F0AED2Cu: goto label_7F0AED2C;
    case 0x7F0AED30u: goto label_7F0AED30;
    case 0x7F0AED34u: goto label_7F0AED34;
    case 0x7F0AED38u: goto label_7F0AED38;
    case 0x7F0AED3Cu: goto label_7F0AED3C;
    case 0x7F0AED40u: goto label_7F0AED40;
    case 0x7F0AED44u: goto label_7F0AED44;
    case 0x7F0AED48u: goto label_7F0AED48;
    case 0x7F0AED4Cu: goto label_7F0AED4C;
    case 0x7F0AED50u: goto label_7F0AED50;
    case 0x7F0AED54u: goto label_7F0AED54;
    case 0x7F0AED58u: goto label_7F0AED58;
    case 0x7F0AED5Cu: goto label_7F0AED5C;
    case 0x7F0AED60u: goto label_7F0AED60;
    case 0x7F0AED64u: goto label_7F0AED64;
    case 0x7F0AED68u: goto label_7F0AED68;
    case 0x7F0AED6Cu: goto label_7F0AED6C;
    case 0x7F0AED70u: goto label_7F0AED70;
    case 0x7F0AED74u: goto label_7F0AED74;
    case 0x7F0AED78u: goto label_7F0AED78;
    case 0x7F0AED7Cu: goto label_7F0AED7C;
    case 0x7F0AED80u: goto label_7F0AED80;
    case 0x7F0AED84u: goto label_7F0AED84;
    case 0x7F0AED88u: goto label_7F0AED88;
    case 0x7F0AED8Cu: goto label_7F0AED8C;
    case 0x7F0AED90u: goto label_7F0AED90;
    case 0x7F0AED94u: goto label_7F0AED94;
    case 0x7F0AED98u: goto label_7F0AED98;
    case 0x7F0AED9Cu: goto label_7F0AED9C;
    case 0x7F0AEDA0u: goto label_7F0AEDA0;
    case 0x7F0AEDA4u: goto label_7F0AEDA4;
    case 0x7F0AEDA8u: goto label_7F0AEDA8;
    case 0x7F0AEDACu: goto label_7F0AEDAC;
    case 0x7F0AEDB0u: goto label_7F0AEDB0;
    case 0x7F0AEDB4u: goto label_7F0AEDB4;
    case 0x7F0AEDB8u: goto label_7F0AEDB8;
    case 0x7F0AEDBCu: goto label_7F0AEDBC;
    case 0x7F0AEDC0u: goto label_7F0AEDC0;
    case 0x7F0AEDC4u: goto label_7F0AEDC4;
    case 0x7F0AEDC8u: goto label_7F0AEDC8;
    case 0x7F0AEDCCu: goto label_7F0AEDCC;
    case 0x7F0AEDD0u: goto label_7F0AEDD0;
    case 0x7F0AEDD4u: goto label_7F0AEDD4;
    case 0x7F0AEDD8u: goto label_7F0AEDD8;
    case 0x7F0AEDDCu: goto label_7F0AEDDC;
    case 0x7F0AEDE0u: goto label_7F0AEDE0;
    case 0x7F0AEDE4u: goto label_7F0AEDE4;
    case 0x7F0AEDE8u: goto label_7F0AEDE8;
    case 0x7F0AEDECu: goto label_7F0AEDEC;
    case 0x7F0AEDF0u: goto label_7F0AEDF0;
    case 0x7F0AEDF4u: goto label_7F0AEDF4;
    case 0x7F0AEDF8u: goto label_7F0AEDF8;
    case 0x7F0AEDFCu: goto label_7F0AEDFC;
    case 0x7F0AEE00u: goto label_7F0AEE00;
    case 0x7F0AEE04u: goto label_7F0AEE04;
    case 0x7F0AEE08u: goto label_7F0AEE08;
    case 0x7F0AEE0Cu: goto label_7F0AEE0C;
    case 0x7F0AEE10u: goto label_7F0AEE10;
    case 0x7F0AEE14u: goto label_7F0AEE14;
    case 0x7F0AEE18u: goto label_7F0AEE18;
    case 0x7F0AEE1Cu: goto label_7F0AEE1C;
    case 0x7F0AEE20u: goto label_7F0AEE20;
    case 0x7F0AEE24u: goto label_7F0AEE24;
    case 0x7F0AEE28u: goto label_7F0AEE28;
    case 0x7F0AEE2Cu: goto label_7F0AEE2C;
    case 0x7F0AEE30u: goto label_7F0AEE30;
    case 0x7F0AEE34u: goto label_7F0AEE34;
    case 0x7F0AEE38u: goto label_7F0AEE38;
    case 0x7F0AEE3Cu: goto label_7F0AEE3C;
    case 0x7F0AEE40u: goto label_7F0AEE40;
    case 0x7F0AEE44u: goto label_7F0AEE44;
    case 0x7F0AEE48u: goto label_7F0AEE48;
    case 0x7F0AEE4Cu: goto label_7F0AEE4C;
    case 0x7F0AEE50u: goto label_7F0AEE50;
    case 0x7F0AEE54u: goto label_7F0AEE54;
    case 0x7F0AEE58u: goto label_7F0AEE58;
    case 0x7F0AEE5Cu: goto label_7F0AEE5C;
    case 0x7F0AEE60u: goto label_7F0AEE60;
    case 0x7F0AEE64u: goto label_7F0AEE64;
    case 0x7F0AEE68u: goto label_7F0AEE68;
    case 0x7F0AEE6Cu: goto label_7F0AEE6C;
    case 0x7F0AEE70u: goto label_7F0AEE70;
    case 0x7F0AEE74u: goto label_7F0AEE74;
    case 0x7F0AEE78u: goto label_7F0AEE78;
    case 0x7F0AEE7Cu: goto label_7F0AEE7C;
    case 0x7F0AEE80u: goto label_7F0AEE80;
    case 0x7F0AEE84u: goto label_7F0AEE84;
    case 0x7F0AEE88u: goto label_7F0AEE88;
    case 0x7F0AEE8Cu: goto label_7F0AEE8C;
    case 0x7F0AEE90u: goto label_7F0AEE90;
    case 0x7F0AEE94u: goto label_7F0AEE94;
    case 0x7F0AEE98u: goto label_7F0AEE98;
    case 0x7F0AEE9Cu: goto label_7F0AEE9C;
    case 0x7F0AEEA0u: goto label_7F0AEEA0;
    case 0x7F0AEEA4u: goto label_7F0AEEA4;
    case 0x7F0AEEA8u: goto label_7F0AEEA8;
    case 0x7F0AEEACu: goto label_7F0AEEAC;
    case 0x7F0AEEB0u: goto label_7F0AEEB0;
    case 0x7F0AEEB4u: goto label_7F0AEEB4;
    case 0x7F0AEEB8u: goto label_7F0AEEB8;
    case 0x7F0AEEBCu: goto label_7F0AEEBC;
    case 0x7F0AEEC0u: goto label_7F0AEEC0;
    case 0x7F0AEEC4u: goto label_7F0AEEC4;
    case 0x7F0AEEC8u: goto label_7F0AEEC8;
    case 0x7F0AEECCu: goto label_7F0AEECC;
    case 0x7F0AEED0u: goto label_7F0AEED0;
    case 0x7F0AEED4u: goto label_7F0AEED4;
    case 0x7F0AEED8u: goto label_7F0AEED8;
    case 0x7F0AEEDCu: goto label_7F0AEEDC;
    case 0x7F0AEEE0u: goto label_7F0AEEE0;
    case 0x7F0AEEE4u: goto label_7F0AEEE4;
    case 0x7F0AEEE8u: goto label_7F0AEEE8;
    case 0x7F0AEEECu: goto label_7F0AEEEC;
    case 0x7F0AEEF0u: goto label_7F0AEEF0;
    case 0x7F0AEEF4u: goto label_7F0AEEF4;
    case 0x7F0AEEF8u: goto label_7F0AEEF8;
    case 0x7F0AEEFCu: goto label_7F0AEEFC;
    case 0x7F0AEF00u: goto label_7F0AEF00;
    case 0x7F0AEF04u: goto label_7F0AEF04;
    case 0x7F0AEF08u: goto label_7F0AEF08;
    case 0x7F0AEF0Cu: goto label_7F0AEF0C;
    case 0x7F0AEF10u: goto label_7F0AEF10;
    case 0x7F0AEF14u: goto label_7F0AEF14;
    case 0x7F0AEF18u: goto label_7F0AEF18;
    case 0x7F0AEF1Cu: goto label_7F0AEF1C;
    case 0x7F0AEF20u: goto label_7F0AEF20;
    case 0x7F0AEF24u: goto label_7F0AEF24;
    case 0x7F0AEF28u: goto label_7F0AEF28;
    case 0x7F0AEF2Cu: goto label_7F0AEF2C;
    case 0x7F0AEF30u: goto label_7F0AEF30;
    case 0x7F0AEF34u: goto label_7F0AEF34;
    case 0x7F0AEF38u: goto label_7F0AEF38;
    case 0x7F0AEF3Cu: goto label_7F0AEF3C;
    case 0x7F0AEF40u: goto label_7F0AEF40;
    case 0x7F0AEF44u: goto label_7F0AEF44;
    case 0x7F0AEF48u: goto label_7F0AEF48;
    case 0x7F0AEF4Cu: goto label_7F0AEF4C;
    case 0x7F0AEF50u: goto label_7F0AEF50;
    case 0x7F0AEF54u: goto label_7F0AEF54;
    case 0x7F0AEF58u: goto label_7F0AEF58;
    case 0x7F0AEF5Cu: goto label_7F0AEF5C;
    case 0x7F0AEF60u: goto label_7F0AEF60;
    case 0x7F0AEF64u: goto label_7F0AEF64;
    case 0x7F0AEF68u: goto label_7F0AEF68;
    case 0x7F0AEF6Cu: goto label_7F0AEF6C;
    case 0x7F0AEF70u: goto label_7F0AEF70;
    case 0x7F0AEF74u: goto label_7F0AEF74;
    case 0x7F0AEF78u: goto label_7F0AEF78;
    case 0x7F0AEF7Cu: goto label_7F0AEF7C;
    case 0x7F0AEF80u: goto label_7F0AEF80;
    case 0x7F0AEF84u: goto label_7F0AEF84;
    case 0x7F0AEF88u: goto label_7F0AEF88;
    case 0x7F0AEF8Cu: goto label_7F0AEF8C;
    case 0x7F0AEF90u: goto label_7F0AEF90;
    case 0x7F0AEF94u: goto label_7F0AEF94;
    case 0x7F0AEF98u: goto label_7F0AEF98;
    case 0x7F0AEF9Cu: goto label_7F0AEF9C;
    case 0x7F0AEFA0u: goto label_7F0AEFA0;
    case 0x7F0AEFA4u: goto label_7F0AEFA4;
    case 0x7F0AEFA8u: goto label_7F0AEFA8;
    case 0x7F0AEFACu: goto label_7F0AEFAC;
    case 0x7F0AEFB0u: goto label_7F0AEFB0;
    case 0x7F0AEFB4u: goto label_7F0AEFB4;
    case 0x7F0AEFB8u: goto label_7F0AEFB8;
    case 0x7F0AEFBCu: goto label_7F0AEFBC;
    case 0x7F0AEFC0u: goto label_7F0AEFC0;
    case 0x7F0AEFC4u: goto label_7F0AEFC4;
    case 0x7F0AEFC8u: goto label_7F0AEFC8;
    case 0x7F0AEFCCu: goto label_7F0AEFCC;
    case 0x7F0AEFD0u: goto label_7F0AEFD0;
    case 0x7F0AEFD4u: goto label_7F0AEFD4;
    case 0x7F0AEFD8u: goto label_7F0AEFD8;
    case 0x7F0AEFDCu: goto label_7F0AEFDC;
    case 0x7F0AEFE0u: goto label_7F0AEFE0;
    case 0x7F0AEFE4u: goto label_7F0AEFE4;
    case 0x7F0AEFE8u: goto label_7F0AEFE8;
    case 0x7F0AEFECu: goto label_7F0AEFEC;
    case 0x7F0AEFF0u: goto label_7F0AEFF0;
    case 0x7F0AEFF4u: goto label_7F0AEFF4;
    case 0x7F0AEFF8u: goto label_7F0AEFF8;
    case 0x7F0AEFFCu: goto label_7F0AEFFC;
    case 0x7F0AF000u: goto label_7F0AF000;
    case 0x7F0AF004u: goto label_7F0AF004;
    case 0x7F0AF008u: goto label_7F0AF008;
    case 0x7F0AF00Cu: goto label_7F0AF00C;
    case 0x7F0AF010u: goto label_7F0AF010;
    case 0x7F0AF014u: goto label_7F0AF014;
    case 0x7F0AF018u: goto label_7F0AF018;
    case 0x7F0AF01Cu: goto label_7F0AF01C;
    case 0x7F0AF020u: goto label_7F0AF020;
    case 0x7F0AF024u: goto label_7F0AF024;
    case 0x7F0AF028u: goto label_7F0AF028;
    case 0x7F0AF02Cu: goto label_7F0AF02C;
    case 0x7F0AF030u: goto label_7F0AF030;
    case 0x7F0AF034u: goto label_7F0AF034;
    case 0x7F0AF038u: goto label_7F0AF038;
    case 0x7F0AF03Cu: goto label_7F0AF03C;
    case 0x7F0AF040u: goto label_7F0AF040;
    case 0x7F0AF044u: goto label_7F0AF044;
    case 0x7F0AF048u: goto label_7F0AF048;
    case 0x7F0AF04Cu: goto label_7F0AF04C;
    case 0x7F0AF050u: goto label_7F0AF050;
    case 0x7F0AF054u: goto label_7F0AF054;
    case 0x7F0AF058u: goto label_7F0AF058;
    case 0x7F0AF05Cu: goto label_7F0AF05C;
    case 0x7F0AF060u: goto label_7F0AF060;
    case 0x7F0AF064u: goto label_7F0AF064;
    case 0x7F0AF068u: goto label_7F0AF068;
    case 0x7F0AF06Cu: goto label_7F0AF06C;
    case 0x7F0AF070u: goto label_7F0AF070;
    case 0x7F0AF074u: goto label_7F0AF074;
    case 0x7F0AF078u: goto label_7F0AF078;
    case 0x7F0AF07Cu: goto label_7F0AF07C;
    case 0x7F0AF080u: goto label_7F0AF080;
    case 0x7F0AF084u: goto label_7F0AF084;
    case 0x7F0AF088u: goto label_7F0AF088;
    case 0x7F0AF08Cu: goto label_7F0AF08C;
    case 0x7F0AF090u: goto label_7F0AF090;
    case 0x7F0AF094u: goto label_7F0AF094;
    case 0x7F0AF098u: goto label_7F0AF098;
    case 0x7F0AF09Cu: goto label_7F0AF09C;
    case 0x7F0AF0A0u: goto label_7F0AF0A0;
    case 0x7F0AF0A4u: goto label_7F0AF0A4;
    case 0x7F0AF0A8u: goto label_7F0AF0A8;
    case 0x7F0AF0ACu: goto label_7F0AF0AC;
    case 0x7F0AF0B0u: goto label_7F0AF0B0;
    case 0x7F0AF0B4u: goto label_7F0AF0B4;
    case 0x7F0AF0B8u: goto label_7F0AF0B8;
    case 0x7F0AF0BCu: goto label_7F0AF0BC;
    case 0x7F0AF0C0u: goto label_7F0AF0C0;
    case 0x7F0AF0C4u: goto label_7F0AF0C4;
    case 0x7F0AF0C8u: goto label_7F0AF0C8;
    case 0x7F0AF0CCu: goto label_7F0AF0CC;
    case 0x7F0AF0D0u: goto label_7F0AF0D0;
    case 0x7F0AF0D4u: goto label_7F0AF0D4;
    case 0x7F0AF0D8u: goto label_7F0AF0D8;
    case 0x7F0AF0DCu: goto label_7F0AF0DC;
    case 0x7F0AF0E0u: goto label_7F0AF0E0;
    case 0x7F0AF0E4u: goto label_7F0AF0E4;
    case 0x7F0AF0E8u: goto label_7F0AF0E8;
    case 0x7F0AF0ECu: goto label_7F0AF0EC;
    case 0x7F0AF0F0u: goto label_7F0AF0F0;
    case 0x7F0AF0F4u: goto label_7F0AF0F4;
    case 0x7F0AF0F8u: goto label_7F0AF0F8;
    case 0x7F0AF0FCu: goto label_7F0AF0FC;
    case 0x7F0AF100u: goto label_7F0AF100;
    case 0x7F0AF104u: goto label_7F0AF104;
    case 0x7F0AF108u: goto label_7F0AF108;
    case 0x7F0AF10Cu: goto label_7F0AF10C;
    case 0x7F0AF110u: goto label_7F0AF110;
    case 0x7F0AF114u: goto label_7F0AF114;
    case 0x7F0AF118u: goto label_7F0AF118;
    case 0x7F0AF11Cu: goto label_7F0AF11C;
    case 0x7F0AF120u: goto label_7F0AF120;
    case 0x7F0AF124u: goto label_7F0AF124;
    case 0x7F0AF128u: goto label_7F0AF128;
    case 0x7F0AF12Cu: goto label_7F0AF12C;
    case 0x7F0AF130u: goto label_7F0AF130;
    case 0x7F0AF134u: goto label_7F0AF134;
    case 0x7F0AF138u: goto label_7F0AF138;
    case 0x7F0AF13Cu: goto label_7F0AF13C;
    case 0x7F0AF140u: goto label_7F0AF140;
    case 0x7F0AF144u: goto label_7F0AF144;
    case 0x7F0AF148u: goto label_7F0AF148;
    case 0x7F0AF14Cu: goto label_7F0AF14C;
    case 0x7F0AF150u: goto label_7F0AF150;
    case 0x7F0AF154u: goto label_7F0AF154;
    case 0x7F0AF158u: goto label_7F0AF158;
    case 0x7F0AF15Cu: goto label_7F0AF15C;
    case 0x7F0AF160u: goto label_7F0AF160;
    case 0x7F0AF164u: goto label_7F0AF164;
    case 0x7F0AF168u: goto label_7F0AF168;
    case 0x7F0AF16Cu: goto label_7F0AF16C;
    case 0x7F0AF170u: goto label_7F0AF170;
    case 0x7F0AF174u: goto label_7F0AF174;
    case 0x7F0AF178u: goto label_7F0AF178;
    case 0x7F0AF17Cu: goto label_7F0AF17C;
    case 0x7F0AF180u: goto label_7F0AF180;
    case 0x7F0AF184u: goto label_7F0AF184;
    case 0x7F0AF188u: goto label_7F0AF188;
    case 0x7F0AF18Cu: goto label_7F0AF18C;
    case 0x7F0AF190u: goto label_7F0AF190;
    case 0x7F0AF194u: goto label_7F0AF194;
    case 0x7F0AF198u: goto label_7F0AF198;
    case 0x7F0AF19Cu: goto label_7F0AF19C;
    case 0x7F0AF1A0u: goto label_7F0AF1A0;
    case 0x7F0AF1A4u: goto label_7F0AF1A4;
    case 0x7F0AF1A8u: goto label_7F0AF1A8;
    case 0x7F0AF1ACu: goto label_7F0AF1AC;
    case 0x7F0AF1B0u: goto label_7F0AF1B0;
    case 0x7F0AF1B4u: goto label_7F0AF1B4;
    case 0x7F0AF1B8u: goto label_7F0AF1B8;
    case 0x7F0AF1BCu: goto label_7F0AF1BC;
    case 0x7F0AF1C0u: goto label_7F0AF1C0;
    case 0x7F0AF1C4u: goto label_7F0AF1C4;
    case 0x7F0AF1C8u: goto label_7F0AF1C8;
    case 0x7F0AF1CCu: goto label_7F0AF1CC;
    case 0x7F0AF1D0u: goto label_7F0AF1D0;
    case 0x7F0AF1D4u: goto label_7F0AF1D4;
    case 0x7F0AF1D8u: goto label_7F0AF1D8;
    case 0x7F0AF1DCu: goto label_7F0AF1DC;
    case 0x7F0AF1E0u: goto label_7F0AF1E0;
    case 0x7F0AF1E4u: goto label_7F0AF1E4;
    case 0x7F0AF1E8u: goto label_7F0AF1E8;
    case 0x7F0AF1ECu: goto label_7F0AF1EC;
    case 0x7F0AF1F0u: goto label_7F0AF1F0;
    case 0x7F0AF1F4u: goto label_7F0AF1F4;
    case 0x7F0AF1F8u: goto label_7F0AF1F8;
    case 0x7F0AF1FCu: goto label_7F0AF1FC;
    case 0x7F0AF200u: goto label_7F0AF200;
    case 0x7F0AF204u: goto label_7F0AF204;
    case 0x7F0AF208u: goto label_7F0AF208;
    case 0x7F0AF20Cu: goto label_7F0AF20C;
    case 0x7F0AF210u: goto label_7F0AF210;
    case 0x7F0AF214u: goto label_7F0AF214;
    case 0x7F0AF218u: goto label_7F0AF218;
    case 0x7F0AF21Cu: goto label_7F0AF21C;
    case 0x7F0AF220u: goto label_7F0AF220;
    case 0x7F0AF224u: goto label_7F0AF224;
    case 0x7F0AF228u: goto label_7F0AF228;
    case 0x7F0AF22Cu: goto label_7F0AF22C;
    case 0x7F0AF230u: goto label_7F0AF230;
    case 0x7F0AF234u: goto label_7F0AF234;
    case 0x7F0AF238u: goto label_7F0AF238;
    case 0x7F0AF23Cu: goto label_7F0AF23C;
    case 0x7F0AF240u: goto label_7F0AF240;
    case 0x7F0AF244u: goto label_7F0AF244;
    case 0x7F0AF248u: goto label_7F0AF248;
    case 0x7F0AF24Cu: goto label_7F0AF24C;
    case 0x7F0AF250u: goto label_7F0AF250;
    case 0x7F0AF254u: goto label_7F0AF254;
    case 0x7F0AF258u: goto label_7F0AF258;
    case 0x7F0AF25Cu: goto label_7F0AF25C;
    case 0x7F0AF260u: goto label_7F0AF260;
    case 0x7F0AF264u: goto label_7F0AF264;
    case 0x7F0AF268u: goto label_7F0AF268;
    case 0x7F0AF26Cu: goto label_7F0AF26C;
    case 0x7F0AF270u: goto label_7F0AF270;
    case 0x7F0AF274u: goto label_7F0AF274;
    case 0x7F0AF278u: goto label_7F0AF278;
    case 0x7F0AF27Cu: goto label_7F0AF27C;
    case 0x7F0AF280u: goto label_7F0AF280;
    case 0x7F0AF284u: goto label_7F0AF284;
    case 0x7F0AF288u: goto label_7F0AF288;
    case 0x7F0AF28Cu: goto label_7F0AF28C;
    case 0x7F0AF290u: goto label_7F0AF290;
    case 0x7F0AF294u: goto label_7F0AF294;
    case 0x7F0AF298u: goto label_7F0AF298;
    case 0x7F0AF29Cu: goto label_7F0AF29C;
    case 0x7F0AF2A0u: goto label_7F0AF2A0;
    case 0x7F0AF2A4u: goto label_7F0AF2A4;
    case 0x7F0AF2A8u: goto label_7F0AF2A8;
    case 0x7F0AF2ACu: goto label_7F0AF2AC;
    case 0x7F0AF2B0u: goto label_7F0AF2B0;
    case 0x7F0AF2B4u: goto label_7F0AF2B4;
    case 0x7F0AF2B8u: goto label_7F0AF2B8;
    case 0x7F0AF2BCu: goto label_7F0AF2BC;
    case 0x7F0AF2C0u: goto label_7F0AF2C0;
    case 0x7F0AF2C4u: goto label_7F0AF2C4;
    case 0x7F0AF2C8u: goto label_7F0AF2C8;
    case 0x7F0AF2CCu: goto label_7F0AF2CC;
    case 0x7F0AF2D0u: goto label_7F0AF2D0;
    case 0x7F0AF2D4u: goto label_7F0AF2D4;
    case 0x7F0AF2D8u: goto label_7F0AF2D8;
    case 0x7F0AF2DCu: goto label_7F0AF2DC;
    case 0x7F0AF2E0u: goto label_7F0AF2E0;
    case 0x7F0AF2E4u: goto label_7F0AF2E4;
    case 0x7F0AF2E8u: goto label_7F0AF2E8;
    case 0x7F0AF2ECu: goto label_7F0AF2EC;
    case 0x7F0AF2F0u: goto label_7F0AF2F0;
    case 0x7F0AF2F4u: goto label_7F0AF2F4;
    case 0x7F0AF2F8u: goto label_7F0AF2F8;
    case 0x7F0AF2FCu: goto label_7F0AF2FC;
    case 0x7F0AF300u: goto label_7F0AF300;
    case 0x7F0AF304u: goto label_7F0AF304;
    case 0x7F0AF308u: goto label_7F0AF308;
    case 0x7F0AF30Cu: goto label_7F0AF30C;
    case 0x7F0AF310u: goto label_7F0AF310;
    case 0x7F0AF314u: goto label_7F0AF314;
    case 0x7F0AF318u: goto label_7F0AF318;
    case 0x7F0AF31Cu: goto label_7F0AF31C;
    case 0x7F0AF320u: goto label_7F0AF320;
    case 0x7F0AF324u: goto label_7F0AF324;
    case 0x7F0AF328u: goto label_7F0AF328;
    case 0x7F0AF32Cu: goto label_7F0AF32C;
    case 0x7F0AF330u: goto label_7F0AF330;
    case 0x7F0AF334u: goto label_7F0AF334;
    case 0x7F0AF338u: goto label_7F0AF338;
    case 0x7F0AF33Cu: goto label_7F0AF33C;
    case 0x7F0AF340u: goto label_7F0AF340;
    case 0x7F0AF344u: goto label_7F0AF344;
    case 0x7F0AF348u: goto label_7F0AF348;
    case 0x7F0AF34Cu: goto label_7F0AF34C;
    case 0x7F0AF350u: goto label_7F0AF350;
    case 0x7F0AF354u: goto label_7F0AF354;
    case 0x7F0AF358u: goto label_7F0AF358;
    case 0x7F0AF35Cu: goto label_7F0AF35C;
    case 0x7F0AF360u: goto label_7F0AF360;
    case 0x7F0AF364u: goto label_7F0AF364;
    case 0x7F0AF368u: goto label_7F0AF368;
    case 0x7F0AF36Cu: goto label_7F0AF36C;
    case 0x7F0AF370u: goto label_7F0AF370;
    case 0x7F0AF374u: goto label_7F0AF374;
    case 0x7F0AF378u: goto label_7F0AF378;
    case 0x7F0AF37Cu: goto label_7F0AF37C;
    case 0x7F0AF380u: goto label_7F0AF380;
    case 0x7F0AF384u: goto label_7F0AF384;
    case 0x7F0AF388u: goto label_7F0AF388;
    case 0x7F0AF38Cu: goto label_7F0AF38C;
    case 0x7F0AF390u: goto label_7F0AF390;
    case 0x7F0AF394u: goto label_7F0AF394;
    case 0x7F0AF398u: goto label_7F0AF398;
    case 0x7F0AF39Cu: goto label_7F0AF39C;
    case 0x7F0AF3A0u: goto label_7F0AF3A0;
    case 0x7F0AF3A4u: goto label_7F0AF3A4;
    case 0x7F0AF3A8u: goto label_7F0AF3A8;
    case 0x7F0AF3ACu: goto label_7F0AF3AC;
    case 0x7F0AF3B0u: goto label_7F0AF3B0;
    case 0x7F0AF3B4u: goto label_7F0AF3B4;
    case 0x7F0AF3B8u: goto label_7F0AF3B8;
    case 0x7F0AF3BCu: goto label_7F0AF3BC;
    case 0x7F0AF3C0u: goto label_7F0AF3C0;
    case 0x7F0AF3C4u: goto label_7F0AF3C4;
    case 0x7F0AF3C8u: goto label_7F0AF3C8;
    case 0x7F0AF3CCu: goto label_7F0AF3CC;
    case 0x7F0AF3D0u: goto label_7F0AF3D0;
    case 0x7F0AF3D4u: goto label_7F0AF3D4;
    case 0x7F0AF3D8u: goto label_7F0AF3D8;
    case 0x7F0AF3DCu: goto label_7F0AF3DC;
    case 0x7F0AF3E0u: goto label_7F0AF3E0;
    case 0x7F0AF3E4u: goto label_7F0AF3E4;
    case 0x7F0AF3E8u: goto label_7F0AF3E8;
    case 0x7F0AF3ECu: goto label_7F0AF3EC;
    case 0x7F0AF3F0u: goto label_7F0AF3F0;
    case 0x7F0AF3F4u: goto label_7F0AF3F4;
    case 0x7F0AF3F8u: goto label_7F0AF3F8;
    case 0x7F0AF3FCu: goto label_7F0AF3FC;
    case 0x7F0AF400u: goto label_7F0AF400;
    case 0x7F0AF404u: goto label_7F0AF404;
    case 0x7F0AF408u: goto label_7F0AF408;
    case 0x7F0AF40Cu: goto label_7F0AF40C;
    case 0x7F0AF410u: goto label_7F0AF410;
    case 0x7F0AF414u: goto label_7F0AF414;
    case 0x7F0AF418u: goto label_7F0AF418;
    case 0x7F0AF41Cu: goto label_7F0AF41C;
    case 0x7F0AF420u: goto label_7F0AF420;
    case 0x7F0AF424u: goto label_7F0AF424;
    case 0x7F0AF428u: goto label_7F0AF428;
    case 0x7F0AF42Cu: goto label_7F0AF42C;
    case 0x7F0AF430u: goto label_7F0AF430;
    case 0x7F0AF434u: goto label_7F0AF434;
    case 0x7F0AF438u: goto label_7F0AF438;
    case 0x7F0AF43Cu: goto label_7F0AF43C;
    case 0x7F0AF440u: goto label_7F0AF440;
    case 0x7F0AF444u: goto label_7F0AF444;
    case 0x7F0AF448u: goto label_7F0AF448;
    case 0x7F0AF44Cu: goto label_7F0AF44C;
    case 0x7F0AF450u: goto label_7F0AF450;
    case 0x7F0AF454u: goto label_7F0AF454;
    case 0x7F0AF458u: goto label_7F0AF458;
    case 0x7F0AF45Cu: goto label_7F0AF45C;
    case 0x7F0AF460u: goto label_7F0AF460;
    case 0x7F0AF464u: goto label_7F0AF464;
    case 0x7F0AF468u: goto label_7F0AF468;
    case 0x7F0AF46Cu: goto label_7F0AF46C;
    case 0x7F0AF470u: goto label_7F0AF470;
    case 0x7F0AF474u: goto label_7F0AF474;
    case 0x7F0AF478u: goto label_7F0AF478;
    case 0x7F0AF47Cu: goto label_7F0AF47C;
    case 0x7F0AF480u: goto label_7F0AF480;
    case 0x7F0AF484u: goto label_7F0AF484;
    case 0x7F0AF488u: goto label_7F0AF488;
    case 0x7F0AF48Cu: goto label_7F0AF48C;
    case 0x7F0AF490u: goto label_7F0AF490;
    case 0x7F0AF494u: goto label_7F0AF494;
    case 0x7F0AF498u: goto label_7F0AF498;
    case 0x7F0AF49Cu: goto label_7F0AF49C;
    case 0x7F0AF4A0u: goto label_7F0AF4A0;
    case 0x7F0AF4A4u: goto label_7F0AF4A4;
    case 0x7F0AF4A8u: goto label_7F0AF4A8;
    case 0x7F0AF4ACu: goto label_7F0AF4AC;
    case 0x7F0AF4B0u: goto label_7F0AF4B0;
    case 0x7F0AF4B4u: goto label_7F0AF4B4;
    case 0x7F0AF4B8u: goto label_7F0AF4B8;
    case 0x7F0AF4BCu: goto label_7F0AF4BC;
    case 0x7F0AF4C0u: goto label_7F0AF4C0;
    case 0x7F0AF4C4u: goto label_7F0AF4C4;
    case 0x7F0AF4C8u: goto label_7F0AF4C8;
    case 0x7F0AF4CCu: goto label_7F0AF4CC;
    case 0x7F0AF4D0u: goto label_7F0AF4D0;
    case 0x7F0AF4D4u: goto label_7F0AF4D4;
    case 0x7F0AF4D8u: goto label_7F0AF4D8;
    case 0x7F0AF4DCu: goto label_7F0AF4DC;
    case 0x7F0AF4E0u: goto label_7F0AF4E0;
    case 0x7F0AF4E4u: goto label_7F0AF4E4;
    case 0x7F0AF4E8u: goto label_7F0AF4E8;
    case 0x7F0AF4ECu: goto label_7F0AF4EC;
    case 0x7F0AF4F0u: goto label_7F0AF4F0;
    case 0x7F0AF4F4u: goto label_7F0AF4F4;
    case 0x7F0AF4F8u: goto label_7F0AF4F8;
    case 0x7F0AF4FCu: goto label_7F0AF4FC;
    case 0x7F0AF500u: goto label_7F0AF500;
    case 0x7F0AF504u: goto label_7F0AF504;
    case 0x7F0AF508u: goto label_7F0AF508;
    case 0x7F0AF50Cu: goto label_7F0AF50C;
    case 0x7F0AF510u: goto label_7F0AF510;
    case 0x7F0AF514u: goto label_7F0AF514;
    case 0x7F0AF518u: goto label_7F0AF518;
    case 0x7F0AF51Cu: goto label_7F0AF51C;
    case 0x7F0AF520u: goto label_7F0AF520;
    case 0x7F0AF524u: goto label_7F0AF524;
    case 0x7F0AF528u: goto label_7F0AF528;
    case 0x7F0AF52Cu: goto label_7F0AF52C;
    case 0x7F0AF530u: goto label_7F0AF530;
    case 0x7F0AF534u: goto label_7F0AF534;
    case 0x7F0AF538u: goto label_7F0AF538;
    case 0x7F0AF53Cu: goto label_7F0AF53C;
    case 0x7F0AF540u: goto label_7F0AF540;
    case 0x7F0AF544u: goto label_7F0AF544;
    case 0x7F0AF548u: goto label_7F0AF548;
    case 0x7F0AF54Cu: goto label_7F0AF54C;
    case 0x7F0AF550u: goto label_7F0AF550;
    case 0x7F0AF554u: goto label_7F0AF554;
    case 0x7F0AF558u: goto label_7F0AF558;
    case 0x7F0AF55Cu: goto label_7F0AF55C;
    case 0x7F0AF560u: goto label_7F0AF560;
    case 0x7F0AF564u: goto label_7F0AF564;
    case 0x7F0AF568u: goto label_7F0AF568;
    case 0x7F0AF56Cu: goto label_7F0AF56C;
    case 0x7F0AF570u: goto label_7F0AF570;
    case 0x7F0AF574u: goto label_7F0AF574;
    case 0x7F0AF578u: goto label_7F0AF578;
    case 0x7F0AF57Cu: goto label_7F0AF57C;
    case 0x7F0AF580u: goto label_7F0AF580;
    case 0x7F0AF584u: goto label_7F0AF584;
    case 0x7F0AF588u: goto label_7F0AF588;
    case 0x7F0AF58Cu: goto label_7F0AF58C;
    case 0x7F0AF590u: goto label_7F0AF590;
    case 0x7F0AF594u: goto label_7F0AF594;
    case 0x7F0AF598u: goto label_7F0AF598;
    case 0x7F0AF59Cu: goto label_7F0AF59C;
    case 0x7F0AF5A0u: goto label_7F0AF5A0;
    case 0x7F0AF5A4u: goto label_7F0AF5A4;
    case 0x7F0AF5A8u: goto label_7F0AF5A8;
    case 0x7F0AF5ACu: goto label_7F0AF5AC;
    case 0x7F0AF5B0u: goto label_7F0AF5B0;
    case 0x7F0AF5B4u: goto label_7F0AF5B4;
    case 0x7F0AF5B8u: goto label_7F0AF5B8;
    case 0x7F0AF5BCu: goto label_7F0AF5BC;
    case 0x7F0AF5C0u: goto label_7F0AF5C0;
    case 0x7F0AF5C4u: goto label_7F0AF5C4;
    case 0x7F0AF5C8u: goto label_7F0AF5C8;
    case 0x7F0AF5CCu: goto label_7F0AF5CC;
    case 0x7F0AF5D0u: goto label_7F0AF5D0;
    case 0x7F0AF5D4u: goto label_7F0AF5D4;
    case 0x7F0AF5D8u: goto label_7F0AF5D8;
    case 0x7F0AF5DCu: goto label_7F0AF5DC;
    case 0x7F0AF5E0u: goto label_7F0AF5E0;
    case 0x7F0AF5E4u: goto label_7F0AF5E4;
    case 0x7F0AF5E8u: goto label_7F0AF5E8;
    case 0x7F0AF5ECu: goto label_7F0AF5EC;
    case 0x7F0AF5F0u: goto label_7F0AF5F0;
    case 0x7F0AF5F4u: goto label_7F0AF5F4;
    case 0x7F0AF5F8u: goto label_7F0AF5F8;
    case 0x7F0AF5FCu: goto label_7F0AF5FC;
    case 0x7F0AF600u: goto label_7F0AF600;
    case 0x7F0AF604u: goto label_7F0AF604;
    case 0x7F0AF608u: goto label_7F0AF608;
    case 0x7F0AF60Cu: goto label_7F0AF60C;
    case 0x7F0AF610u: goto label_7F0AF610;
    case 0x7F0AF614u: goto label_7F0AF614;
    case 0x7F0AF618u: goto label_7F0AF618;
    case 0x7F0AF61Cu: goto label_7F0AF61C;
    case 0x7F0AF620u: goto label_7F0AF620;
    case 0x7F0AF624u: goto label_7F0AF624;
    case 0x7F0AF628u: goto label_7F0AF628;
    case 0x7F0AF62Cu: goto label_7F0AF62C;
    case 0x7F0AF630u: goto label_7F0AF630;
    case 0x7F0AF634u: goto label_7F0AF634;
    case 0x7F0AF638u: goto label_7F0AF638;
    case 0x7F0AF63Cu: goto label_7F0AF63C;
    case 0x7F0AF640u: goto label_7F0AF640;
    case 0x7F0AF644u: goto label_7F0AF644;
    case 0x7F0AF648u: goto label_7F0AF648;
    case 0x7F0AF64Cu: goto label_7F0AF64C;
    case 0x7F0AF650u: goto label_7F0AF650;
    case 0x7F0AF654u: goto label_7F0AF654;
    case 0x7F0AF658u: goto label_7F0AF658;
    case 0x7F0AF65Cu: goto label_7F0AF65C;
    case 0x7F0AF660u: goto label_7F0AF660;
    case 0x7F0AF664u: goto label_7F0AF664;
    case 0x7F0AF668u: goto label_7F0AF668;
    case 0x7F0AF66Cu: goto label_7F0AF66C;
    case 0x7F0AF670u: goto label_7F0AF670;
    case 0x7F0AF674u: goto label_7F0AF674;
    case 0x7F0AF678u: goto label_7F0AF678;
    case 0x7F0AF67Cu: goto label_7F0AF67C;
    case 0x7F0AF680u: goto label_7F0AF680;
    case 0x7F0AF684u: goto label_7F0AF684;
    case 0x7F0AF688u: goto label_7F0AF688;
    case 0x7F0AF68Cu: goto label_7F0AF68C;
    case 0x7F0AF690u: goto label_7F0AF690;
    case 0x7F0AF694u: goto label_7F0AF694;
    case 0x7F0AF698u: goto label_7F0AF698;
    case 0x7F0AF69Cu: goto label_7F0AF69C;
    case 0x7F0AF6A0u: goto label_7F0AF6A0;
    case 0x7F0AF6A4u: goto label_7F0AF6A4;
    case 0x7F0AF6A8u: goto label_7F0AF6A8;
    case 0x7F0AF6ACu: goto label_7F0AF6AC;
    case 0x7F0AF6B0u: goto label_7F0AF6B0;
    case 0x7F0AF6B4u: goto label_7F0AF6B4;
    case 0x7F0AF6B8u: goto label_7F0AF6B8;
    case 0x7F0AF6BCu: goto label_7F0AF6BC;
    case 0x7F0AF6C0u: goto label_7F0AF6C0;
    case 0x7F0AF6C4u: goto label_7F0AF6C4;
    case 0x7F0AF6C8u: goto label_7F0AF6C8;
    case 0x7F0AF6CCu: goto label_7F0AF6CC;
    case 0x7F0AF6D0u: goto label_7F0AF6D0;
    case 0x7F0AF6D4u: goto label_7F0AF6D4;
    case 0x7F0AF6D8u: goto label_7F0AF6D8;
    case 0x7F0AF6DCu: goto label_7F0AF6DC;
    case 0x7F0AF6E0u: goto label_7F0AF6E0;
    case 0x7F0AF6E4u: goto label_7F0AF6E4;
    case 0x7F0AF6E8u: goto label_7F0AF6E8;
    case 0x7F0AF6ECu: goto label_7F0AF6EC;
    case 0x7F0AF6F0u: goto label_7F0AF6F0;
    case 0x7F0AF6F4u: goto label_7F0AF6F4;
    case 0x7F0AF6F8u: goto label_7F0AF6F8;
    case 0x7F0AF6FCu: goto label_7F0AF6FC;
    case 0x7F0AF700u: goto label_7F0AF700;
    case 0x7F0AF704u: goto label_7F0AF704;
    case 0x7F0AF708u: goto label_7F0AF708;
    case 0x7F0AF70Cu: goto label_7F0AF70C;
    case 0x7F0AF710u: goto label_7F0AF710;
    case 0x7F0AF714u: goto label_7F0AF714;
    case 0x7F0AF718u: goto label_7F0AF718;
    case 0x7F0AF71Cu: goto label_7F0AF71C;
    case 0x7F0AF720u: goto label_7F0AF720;
    case 0x7F0AF724u: goto label_7F0AF724;
    case 0x7F0AF728u: goto label_7F0AF728;
    case 0x7F0AF72Cu: goto label_7F0AF72C;
    case 0x7F0AF730u: goto label_7F0AF730;
    case 0x7F0AF734u: goto label_7F0AF734;
    case 0x7F0AF738u: goto label_7F0AF738;
    case 0x7F0AF73Cu: goto label_7F0AF73C;
    case 0x7F0AF740u: goto label_7F0AF740;
    case 0x7F0AF744u: goto label_7F0AF744;
    case 0x7F0AF748u: goto label_7F0AF748;
    case 0x7F0AF74Cu: goto label_7F0AF74C;
    case 0x7F0AF750u: goto label_7F0AF750;
    case 0x7F0AF754u: goto label_7F0AF754;
    case 0x7F0AF758u: goto label_7F0AF758;
    case 0x7F0AF75Cu: goto label_7F0AF75C;
    case 0x7F0AF760u: goto label_7F0AF760;
    case 0x7F0AF764u: goto label_7F0AF764;
    case 0x7F0AF768u: goto label_7F0AF768;
    case 0x7F0AF76Cu: goto label_7F0AF76C;
    case 0x7F0AF770u: goto label_7F0AF770;
    case 0x7F0AF774u: goto label_7F0AF774;
    case 0x7F0AF778u: goto label_7F0AF778;
    case 0x7F0AF77Cu: goto label_7F0AF77C;
    case 0x7F0AF780u: goto label_7F0AF780;
    case 0x7F0AF784u: goto label_7F0AF784;
    case 0x7F0AF788u: goto label_7F0AF788;
    case 0x7F0AF78Cu: goto label_7F0AF78C;
    case 0x7F0AF790u: goto label_7F0AF790;
    case 0x7F0AF794u: goto label_7F0AF794;
    case 0x7F0AF798u: goto label_7F0AF798;
    case 0x7F0AF79Cu: goto label_7F0AF79C;
    case 0x7F0AF7A0u: goto label_7F0AF7A0;
    case 0x7F0AF7A4u: goto label_7F0AF7A4;
    case 0x7F0AF7A8u: goto label_7F0AF7A8;
    case 0x7F0AF7ACu: goto label_7F0AF7AC;
    case 0x7F0AF7B0u: goto label_7F0AF7B0;
    case 0x7F0AF7B4u: goto label_7F0AF7B4;
    case 0x7F0AF7B8u: goto label_7F0AF7B8;
    case 0x7F0AF7BCu: goto label_7F0AF7BC;
    case 0x7F0AF7C0u: goto label_7F0AF7C0;
    case 0x7F0AF7C4u: goto label_7F0AF7C4;
    case 0x7F0AF7C8u: goto label_7F0AF7C8;
    case 0x7F0AF7CCu: goto label_7F0AF7CC;
    case 0x7F0AF7D0u: goto label_7F0AF7D0;
    case 0x7F0AF7D4u: goto label_7F0AF7D4;
    case 0x7F0AF7D8u: goto label_7F0AF7D8;
    case 0x7F0AF7DCu: goto label_7F0AF7DC;
    case 0x7F0AF7E0u: goto label_7F0AF7E0;
    case 0x7F0AF7E4u: goto label_7F0AF7E4;
    case 0x7F0AF7E8u: goto label_7F0AF7E8;
    case 0x7F0AF7ECu: goto label_7F0AF7EC;
    case 0x7F0AF7F0u: goto label_7F0AF7F0;
    case 0x7F0AF7F4u: goto label_7F0AF7F4;
    case 0x7F0AF7F8u: goto label_7F0AF7F8;
    case 0x7F0AF7FCu: goto label_7F0AF7FC;
    case 0x7F0AF800u: goto label_7F0AF800;
    case 0x7F0AF804u: goto label_7F0AF804;
    case 0x7F0AF808u: goto label_7F0AF808;
    case 0x7F0AF80Cu: goto label_7F0AF80C;
    case 0x7F0AF810u: goto label_7F0AF810;
    case 0x7F0AF814u: goto label_7F0AF814;
    case 0x7F0AF818u: goto label_7F0AF818;
    case 0x7F0AF81Cu: goto label_7F0AF81C;
    case 0x7F0AF820u: goto label_7F0AF820;
    case 0x7F0AF824u: goto label_7F0AF824;
    case 0x7F0AF828u: goto label_7F0AF828;
    case 0x7F0AF82Cu: goto label_7F0AF82C;
    case 0x7F0AF830u: goto label_7F0AF830;
    case 0x7F0AF834u: goto label_7F0AF834;
    case 0x7F0AF838u: goto label_7F0AF838;
    case 0x7F0AF83Cu: goto label_7F0AF83C;
    case 0x7F0AF840u: goto label_7F0AF840;
    case 0x7F0AF844u: goto label_7F0AF844;
    case 0x7F0AF848u: goto label_7F0AF848;
    case 0x7F0AF84Cu: goto label_7F0AF84C;
    case 0x7F0AF850u: goto label_7F0AF850;
    case 0x7F0AF854u: goto label_7F0AF854;
    case 0x7F0AF858u: goto label_7F0AF858;
    case 0x7F0AF85Cu: goto label_7F0AF85C;
    case 0x7F0AF860u: goto label_7F0AF860;
    case 0x7F0AF864u: goto label_7F0AF864;
    case 0x7F0AF868u: goto label_7F0AF868;
    case 0x7F0AF86Cu: goto label_7F0AF86C;
    case 0x7F0AF870u: goto label_7F0AF870;
    case 0x7F0AF874u: goto label_7F0AF874;
    case 0x7F0AF878u: goto label_7F0AF878;
    case 0x7F0AF87Cu: goto label_7F0AF87C;
    case 0x7F0AF880u: goto label_7F0AF880;
    case 0x7F0AF884u: goto label_7F0AF884;
    case 0x7F0AF888u: goto label_7F0AF888;
    case 0x7F0AF88Cu: goto label_7F0AF88C;
    case 0x7F0AF890u: goto label_7F0AF890;
    case 0x7F0AF894u: goto label_7F0AF894;
    case 0x7F0AF898u: goto label_7F0AF898;
    case 0x7F0AF89Cu: goto label_7F0AF89C;
    case 0x7F0AF8A0u: goto label_7F0AF8A0;
    case 0x7F0AF8A4u: goto label_7F0AF8A4;
    case 0x7F0AF8A8u: goto label_7F0AF8A8;
    case 0x7F0AF8ACu: goto label_7F0AF8AC;
    case 0x7F0AF8B0u: goto label_7F0AF8B0;
    case 0x7F0AF8B4u: goto label_7F0AF8B4;
    case 0x7F0AF8B8u: goto label_7F0AF8B8;
    case 0x7F0AF8BCu: goto label_7F0AF8BC;
    case 0x7F0AF8C0u: goto label_7F0AF8C0;
    case 0x7F0AF8C4u: goto label_7F0AF8C4;
    case 0x7F0AF8C8u: goto label_7F0AF8C8;
    case 0x7F0AF8CCu: goto label_7F0AF8CC;
    case 0x7F0AF8D0u: goto label_7F0AF8D0;
    case 0x7F0AF8D4u: goto label_7F0AF8D4;
    case 0x7F0AF8D8u: goto label_7F0AF8D8;
    case 0x7F0AF8DCu: goto label_7F0AF8DC;
    case 0x7F0AF8E0u: goto label_7F0AF8E0;
    case 0x7F0AF8E4u: goto label_7F0AF8E4;
    case 0x7F0AF8E8u: goto label_7F0AF8E8;
    case 0x7F0AF8ECu: goto label_7F0AF8EC;
    case 0x7F0AF8F0u: goto label_7F0AF8F0;
    case 0x7F0AF8F4u: goto label_7F0AF8F4;
    case 0x7F0AF8F8u: goto label_7F0AF8F8;
    case 0x7F0AF8FCu: goto label_7F0AF8FC;
    case 0x7F0AF900u: goto label_7F0AF900;
    case 0x7F0AF904u: goto label_7F0AF904;
    case 0x7F0AF908u: goto label_7F0AF908;
    case 0x7F0AF90Cu: goto label_7F0AF90C;
    case 0x7F0AF910u: goto label_7F0AF910;
    case 0x7F0AF914u: goto label_7F0AF914;
    case 0x7F0AF918u: goto label_7F0AF918;
    case 0x7F0AF91Cu: goto label_7F0AF91C;
    case 0x7F0AF920u: goto label_7F0AF920;
    case 0x7F0AF924u: goto label_7F0AF924;
    case 0x7F0AF928u: goto label_7F0AF928;
    case 0x7F0AF92Cu: goto label_7F0AF92C;
    case 0x7F0AF930u: goto label_7F0AF930;
    case 0x7F0AF934u: goto label_7F0AF934;
    case 0x7F0AF938u: goto label_7F0AF938;
    case 0x7F0AF93Cu: goto label_7F0AF93C;
    case 0x7F0AF940u: goto label_7F0AF940;
    case 0x7F0AF944u: goto label_7F0AF944;
    case 0x7F0AF948u: goto label_7F0AF948;
    case 0x7F0AF94Cu: goto label_7F0AF94C;
    case 0x7F0AF950u: goto label_7F0AF950;
    case 0x7F0AF954u: goto label_7F0AF954;
    case 0x7F0AF958u: goto label_7F0AF958;
    case 0x7F0AF95Cu: goto label_7F0AF95C;
    case 0x7F0AF960u: goto label_7F0AF960;
    case 0x7F0AF964u: goto label_7F0AF964;
    case 0x7F0AF968u: goto label_7F0AF968;
    case 0x7F0AF96Cu: goto label_7F0AF96C;
    case 0x7F0AF970u: goto label_7F0AF970;
    case 0x7F0AF974u: goto label_7F0AF974;
    case 0x7F0AF978u: goto label_7F0AF978;
    case 0x7F0AF97Cu: goto label_7F0AF97C;
    case 0x7F0AF980u: goto label_7F0AF980;
    case 0x7F0AF984u: goto label_7F0AF984;
    case 0x7F0AF988u: goto label_7F0AF988;
    case 0x7F0AF98Cu: goto label_7F0AF98C;
    case 0x7F0AF990u: goto label_7F0AF990;
    case 0x7F0AF994u: goto label_7F0AF994;
    case 0x7F0AF998u: goto label_7F0AF998;
    case 0x7F0AF99Cu: goto label_7F0AF99C;
    case 0x7F0AF9A0u: goto label_7F0AF9A0;
    case 0x7F0AF9A4u: goto label_7F0AF9A4;
    case 0x7F0AF9A8u: goto label_7F0AF9A8;
    case 0x7F0AF9ACu: goto label_7F0AF9AC;
    case 0x7F0AF9B0u: goto label_7F0AF9B0;
    case 0x7F0AF9B4u: goto label_7F0AF9B4;
    case 0x7F0AF9B8u: goto label_7F0AF9B8;
    case 0x7F0AF9BCu: goto label_7F0AF9BC;
    case 0x7F0AF9C0u: goto label_7F0AF9C0;
    case 0x7F0AF9C4u: goto label_7F0AF9C4;
    case 0x7F0AF9C8u: goto label_7F0AF9C8;
    case 0x7F0AF9CCu: goto label_7F0AF9CC;
    case 0x7F0AF9D0u: goto label_7F0AF9D0;
    case 0x7F0AF9D4u: goto label_7F0AF9D4;
    case 0x7F0AF9D8u: goto label_7F0AF9D8;
    case 0x7F0AF9DCu: goto label_7F0AF9DC;
    case 0x7F0AF9E0u: goto label_7F0AF9E0;
    case 0x7F0AF9E4u: goto label_7F0AF9E4;
    case 0x7F0AF9E8u: goto label_7F0AF9E8;
    case 0x7F0AF9ECu: goto label_7F0AF9EC;
    case 0x7F0AF9F0u: goto label_7F0AF9F0;
    case 0x7F0AF9F4u: goto label_7F0AF9F4;
    case 0x7F0AF9F8u: goto label_7F0AF9F8;
    case 0x7F0AF9FCu: goto label_7F0AF9FC;
    case 0x7F0AFA00u: goto label_7F0AFA00;
    case 0x7F0AFA04u: goto label_7F0AFA04;
    case 0x7F0AFA08u: goto label_7F0AFA08;
    case 0x7F0AFA0Cu: goto label_7F0AFA0C;
    case 0x7F0AFA10u: goto label_7F0AFA10;
    case 0x7F0AFA14u: goto label_7F0AFA14;
    case 0x7F0AFA18u: goto label_7F0AFA18;
    case 0x7F0AFA1Cu: goto label_7F0AFA1C;
    case 0x7F0AFA20u: goto label_7F0AFA20;
    case 0x7F0AFA24u: goto label_7F0AFA24;
    case 0x7F0AFA28u: goto label_7F0AFA28;
    case 0x7F0AFA2Cu: goto label_7F0AFA2C;
    case 0x7F0AFA30u: goto label_7F0AFA30;
    case 0x7F0AFA34u: goto label_7F0AFA34;
    case 0x7F0AFA38u: goto label_7F0AFA38;
    case 0x7F0AFA3Cu: goto label_7F0AFA3C;
    case 0x7F0AFA40u: goto label_7F0AFA40;
    case 0x7F0AFA44u: goto label_7F0AFA44;
    case 0x7F0AFA48u: goto label_7F0AFA48;
    case 0x7F0AFA4Cu: goto label_7F0AFA4C;
    case 0x7F0AFA50u: goto label_7F0AFA50;
    case 0x7F0AFA54u: goto label_7F0AFA54;
    case 0x7F0AFA58u: goto label_7F0AFA58;
    case 0x7F0AFA5Cu: goto label_7F0AFA5C;
    case 0x7F0AFA60u: goto label_7F0AFA60;
    case 0x7F0AFA64u: goto label_7F0AFA64;
    case 0x7F0AFA68u: goto label_7F0AFA68;
    case 0x7F0AFA6Cu: goto label_7F0AFA6C;
    case 0x7F0AFA70u: goto label_7F0AFA70;
    case 0x7F0AFA74u: goto label_7F0AFA74;
    case 0x7F0AFA78u: goto label_7F0AFA78;
    case 0x7F0AFA7Cu: goto label_7F0AFA7C;
    case 0x7F0AFA80u: goto label_7F0AFA80;
    case 0x7F0AFA84u: goto label_7F0AFA84;
    case 0x7F0AFA88u: goto label_7F0AFA88;
    case 0x7F0AFA8Cu: goto label_7F0AFA8C;
    case 0x7F0AFA90u: goto label_7F0AFA90;
    case 0x7F0AFA94u: goto label_7F0AFA94;
    case 0x7F0AFA98u: goto label_7F0AFA98;
    case 0x7F0AFA9Cu: goto label_7F0AFA9C;
    case 0x7F0AFAA0u: goto label_7F0AFAA0;
    case 0x7F0AFAA4u: goto label_7F0AFAA4;
    case 0x7F0AFAA8u: goto label_7F0AFAA8;
    case 0x7F0AFAACu: goto label_7F0AFAAC;
    case 0x7F0AFAB0u: goto label_7F0AFAB0;
    case 0x7F0AFAB4u: goto label_7F0AFAB4;
    case 0x7F0AFAB8u: goto label_7F0AFAB8;
    case 0x7F0AFABCu: goto label_7F0AFABC;
    case 0x7F0AFAC0u: goto label_7F0AFAC0;
    case 0x7F0AFAC4u: goto label_7F0AFAC4;
    case 0x7F0AFAC8u: goto label_7F0AFAC8;
    case 0x7F0AFACCu: goto label_7F0AFACC;
    case 0x7F0AFAD0u: goto label_7F0AFAD0;
    case 0x7F0AFAD4u: goto label_7F0AFAD4;
    case 0x7F0AFAD8u: goto label_7F0AFAD8;
    case 0x7F0AFADCu: goto label_7F0AFADC;
    case 0x7F0AFAE0u: goto label_7F0AFAE0;
    case 0x7F0AFAE4u: goto label_7F0AFAE4;
    case 0x7F0AFAE8u: goto label_7F0AFAE8;
    case 0x7F0AFAECu: goto label_7F0AFAEC;
    case 0x7F0AFAF0u: goto label_7F0AFAF0;
    case 0x7F0AFAF4u: goto label_7F0AFAF4;
    case 0x7F0AFAF8u: goto label_7F0AFAF8;
    case 0x7F0AFAFCu: goto label_7F0AFAFC;
    case 0x7F0AFB00u: goto label_7F0AFB00;
    case 0x7F0AFB04u: goto label_7F0AFB04;
    case 0x7F0AFB08u: goto label_7F0AFB08;
    case 0x7F0AFB0Cu: goto label_7F0AFB0C;
    case 0x7F0AFB10u: goto label_7F0AFB10;
    case 0x7F0AFB14u: goto label_7F0AFB14;
    case 0x7F0AFB18u: goto label_7F0AFB18;
    case 0x7F0AFB1Cu: goto label_7F0AFB1C;
    case 0x7F0AFB20u: goto label_7F0AFB20;
    case 0x7F0AFB24u: goto label_7F0AFB24;
    case 0x7F0AFB28u: goto label_7F0AFB28;
    case 0x7F0AFB2Cu: goto label_7F0AFB2C;
    case 0x7F0AFB30u: goto label_7F0AFB30;
    case 0x7F0AFB34u: goto label_7F0AFB34;
    case 0x7F0AFB38u: goto label_7F0AFB38;
    case 0x7F0AFB3Cu: goto label_7F0AFB3C;
    case 0x7F0AFB40u: goto label_7F0AFB40;
    case 0x7F0AFB44u: goto label_7F0AFB44;
    case 0x7F0AFB48u: goto label_7F0AFB48;
    case 0x7F0AFB4Cu: goto label_7F0AFB4C;
    case 0x7F0AFB50u: goto label_7F0AFB50;
    case 0x7F0AFB54u: goto label_7F0AFB54;
    case 0x7F0AFB58u: goto label_7F0AFB58;
    case 0x7F0AFB5Cu: goto label_7F0AFB5C;
    case 0x7F0AFB60u: goto label_7F0AFB60;
    case 0x7F0AFB64u: goto label_7F0AFB64;
    case 0x7F0AFB68u: goto label_7F0AFB68;
    case 0x7F0AFB6Cu: goto label_7F0AFB6C;
    case 0x7F0AFB70u: goto label_7F0AFB70;
    case 0x7F0AFB74u: goto label_7F0AFB74;
    case 0x7F0AFB78u: goto label_7F0AFB78;
    case 0x7F0AFB7Cu: goto label_7F0AFB7C;
    case 0x7F0AFB80u: goto label_7F0AFB80;
    case 0x7F0AFB84u: goto label_7F0AFB84;
    case 0x7F0AFB88u: goto label_7F0AFB88;
    case 0x7F0AFB8Cu: goto label_7F0AFB8C;
    case 0x7F0AFB90u: goto label_7F0AFB90;
    case 0x7F0AFB94u: goto label_7F0AFB94;
    case 0x7F0AFB98u: goto label_7F0AFB98;
    case 0x7F0AFB9Cu: goto label_7F0AFB9C;
    case 0x7F0AFBA0u: goto label_7F0AFBA0;
    case 0x7F0AFBA4u: goto label_7F0AFBA4;
    case 0x7F0AFBA8u: goto label_7F0AFBA8;
    case 0x7F0AFBACu: goto label_7F0AFBAC;
    case 0x7F0AFBB0u: goto label_7F0AFBB0;
    case 0x7F0AFBB4u: goto label_7F0AFBB4;
    case 0x7F0AFBB8u: goto label_7F0AFBB8;
    case 0x7F0AFBBCu: goto label_7F0AFBBC;
    case 0x7F0AFBC0u: goto label_7F0AFBC0;
    case 0x7F0AFBC4u: goto label_7F0AFBC4;
    case 0x7F0AFBC8u: goto label_7F0AFBC8;
    case 0x7F0AFBCCu: goto label_7F0AFBCC;
    case 0x7F0AFBD0u: goto label_7F0AFBD0;
    case 0x7F0AFBD4u: goto label_7F0AFBD4;
    case 0x7F0AFBD8u: goto label_7F0AFBD8;
    case 0x7F0AFBDCu: goto label_7F0AFBDC;
    case 0x7F0AFBE0u: goto label_7F0AFBE0;
    case 0x7F0AFBE4u: goto label_7F0AFBE4;
    case 0x7F0AFBE8u: goto label_7F0AFBE8;
    case 0x7F0AFBECu: goto label_7F0AFBEC;
    case 0x7F0AFBF0u: goto label_7F0AFBF0;
    case 0x7F0AFBF4u: goto label_7F0AFBF4;
    case 0x7F0AFBF8u: goto label_7F0AFBF8;
    case 0x7F0AFBFCu: goto label_7F0AFBFC;
    case 0x7F0AFC00u: goto label_7F0AFC00;
    case 0x7F0AFC04u: goto label_7F0AFC04;
    case 0x7F0AFC08u: goto label_7F0AFC08;
    case 0x7F0AFC0Cu: goto label_7F0AFC0C;
    case 0x7F0AFC10u: goto label_7F0AFC10;
    case 0x7F0AFC14u: goto label_7F0AFC14;
    case 0x7F0AFC18u: goto label_7F0AFC18;
    case 0x7F0AFC1Cu: goto label_7F0AFC1C;
    case 0x7F0AFC20u: goto label_7F0AFC20;
    case 0x7F0AFC24u: goto label_7F0AFC24;
    case 0x7F0AFC28u: goto label_7F0AFC28;
    case 0x7F0AFC2Cu: goto label_7F0AFC2C;
    case 0x7F0AFC30u: goto label_7F0AFC30;
    case 0x7F0AFC34u: goto label_7F0AFC34;
    case 0x7F0AFC38u: goto label_7F0AFC38;
    case 0x7F0AFC3Cu: goto label_7F0AFC3C;
    case 0x7F0AFC40u: goto label_7F0AFC40;
    case 0x7F0AFC44u: goto label_7F0AFC44;
    case 0x7F0AFC48u: goto label_7F0AFC48;
    case 0x7F0AFC4Cu: goto label_7F0AFC4C;
    case 0x7F0AFC50u: goto label_7F0AFC50;
    case 0x7F0AFC54u: goto label_7F0AFC54;
    case 0x7F0AFC58u: goto label_7F0AFC58;
    case 0x7F0AFC5Cu: goto label_7F0AFC5C;
    case 0x7F0AFC60u: goto label_7F0AFC60;
    case 0x7F0AFC64u: goto label_7F0AFC64;
    case 0x7F0AFC68u: goto label_7F0AFC68;
    case 0x7F0AFC6Cu: goto label_7F0AFC6C;
    case 0x7F0AFC70u: goto label_7F0AFC70;
    case 0x7F0AFC74u: goto label_7F0AFC74;
    case 0x7F0AFC78u: goto label_7F0AFC78;
    case 0x7F0AFC7Cu: goto label_7F0AFC7C;
    case 0x7F0AFC80u: goto label_7F0AFC80;
    case 0x7F0AFC84u: goto label_7F0AFC84;
    case 0x7F0AFC88u: goto label_7F0AFC88;
    case 0x7F0AFC8Cu: goto label_7F0AFC8C;
    case 0x7F0AFC90u: goto label_7F0AFC90;
    case 0x7F0AFC94u: goto label_7F0AFC94;
    case 0x7F0AFC98u: goto label_7F0AFC98;
    case 0x7F0AFC9Cu: goto label_7F0AFC9C;
    case 0x7F0AFCA0u: goto label_7F0AFCA0;
    case 0x7F0AFCA4u: goto label_7F0AFCA4;
    case 0x7F0AFCA8u: goto label_7F0AFCA8;
    case 0x7F0AFCACu: goto label_7F0AFCAC;
    case 0x7F0AFCB0u: goto label_7F0AFCB0;
    case 0x7F0AFCB4u: goto label_7F0AFCB4;
    case 0x7F0AFCB8u: goto label_7F0AFCB8;
    case 0x7F0AFCBCu: goto label_7F0AFCBC;
    case 0x7F0AFCC0u: goto label_7F0AFCC0;
    case 0x7F0AFCC4u: goto label_7F0AFCC4;
    case 0x7F0AFCC8u: goto label_7F0AFCC8;
    case 0x7F0AFCCCu: goto label_7F0AFCCC;
    case 0x7F0AFCD0u: goto label_7F0AFCD0;
    case 0x7F0AFCD4u: goto label_7F0AFCD4;
    case 0x7F0AFCD8u: goto label_7F0AFCD8;
    case 0x7F0AFCDCu: goto label_7F0AFCDC;
    case 0x7F0AFCE0u: goto label_7F0AFCE0;
    case 0x7F0AFCE4u: goto label_7F0AFCE4;
    case 0x7F0AFCE8u: goto label_7F0AFCE8;
    case 0x7F0AFCECu: goto label_7F0AFCEC;
    case 0x7F0AFCF0u: goto label_7F0AFCF0;
    case 0x7F0AFCF4u: goto label_7F0AFCF4;
    case 0x7F0AFCF8u: goto label_7F0AFCF8;
    case 0x7F0AFCFCu: goto label_7F0AFCFC;
    case 0x7F0AFD00u: goto label_7F0AFD00;
    case 0x7F0AFD04u: goto label_7F0AFD04;
    case 0x7F0AFD08u: goto label_7F0AFD08;
    case 0x7F0AFD0Cu: goto label_7F0AFD0C;
    case 0x7F0AFD10u: goto label_7F0AFD10;
    case 0x7F0AFD14u: goto label_7F0AFD14;
    case 0x7F0AFD18u: goto label_7F0AFD18;
    case 0x7F0AFD1Cu: goto label_7F0AFD1C;
    case 0x7F0AFD20u: goto label_7F0AFD20;
    case 0x7F0AFD24u: goto label_7F0AFD24;
    case 0x7F0AFD28u: goto label_7F0AFD28;
    case 0x7F0AFD2Cu: goto label_7F0AFD2C;
    case 0x7F0AFD30u: goto label_7F0AFD30;
    case 0x7F0AFD34u: goto label_7F0AFD34;
    case 0x7F0AFD38u: goto label_7F0AFD38;
    case 0x7F0AFD3Cu: goto label_7F0AFD3C;
    case 0x7F0AFD40u: goto label_7F0AFD40;
    case 0x7F0AFD44u: goto label_7F0AFD44;
    case 0x7F0AFD48u: goto label_7F0AFD48;
    case 0x7F0AFD4Cu: goto label_7F0AFD4C;
    case 0x7F0AFD50u: goto label_7F0AFD50;
    case 0x7F0AFD54u: goto label_7F0AFD54;
    case 0x7F0AFD58u: goto label_7F0AFD58;
    case 0x7F0AFD5Cu: goto label_7F0AFD5C;
    case 0x7F0AFD60u: goto label_7F0AFD60;
    case 0x7F0AFD64u: goto label_7F0AFD64;
    case 0x7F0AFD68u: goto label_7F0AFD68;
    case 0x7F0AFD6Cu: goto label_7F0AFD6C;
    case 0x7F0AFD70u: goto label_7F0AFD70;
    case 0x7F0AFD74u: goto label_7F0AFD74;
    case 0x7F0AFD78u: goto label_7F0AFD78;
    case 0x7F0AFD7Cu: goto label_7F0AFD7C;
    case 0x7F0AFD80u: goto label_7F0AFD80;
    case 0x7F0AFD84u: goto label_7F0AFD84;
    case 0x7F0AFD88u: goto label_7F0AFD88;
    case 0x7F0AFD8Cu: goto label_7F0AFD8C;
    case 0x7F0AFD90u: goto label_7F0AFD90;
    case 0x7F0AFD94u: goto label_7F0AFD94;
    case 0x7F0AFD98u: goto label_7F0AFD98;
    case 0x7F0AFD9Cu: goto label_7F0AFD9C;
    case 0x7F0AFDA0u: goto label_7F0AFDA0;
    case 0x7F0AFDA4u: goto label_7F0AFDA4;
    case 0x7F0AFDA8u: goto label_7F0AFDA8;
    case 0x7F0AFDACu: goto label_7F0AFDAC;
    case 0x7F0AFDB0u: goto label_7F0AFDB0;
    case 0x7F0AFDB4u: goto label_7F0AFDB4;
    case 0x7F0AFDB8u: goto label_7F0AFDB8;
    case 0x7F0AFDBCu: goto label_7F0AFDBC;
    case 0x7F0AFDC0u: goto label_7F0AFDC0;
    case 0x7F0AFDC4u: goto label_7F0AFDC4;
    case 0x7F0AFDC8u: goto label_7F0AFDC8;
    case 0x7F0AFDCCu: goto label_7F0AFDCC;
    case 0x7F0AFDD0u: goto label_7F0AFDD0;
    case 0x7F0AFDD4u: goto label_7F0AFDD4;
    case 0x7F0AFDD8u: goto label_7F0AFDD8;
    case 0x7F0AFDDCu: goto label_7F0AFDDC;
    case 0x7F0AFDE0u: goto label_7F0AFDE0;
    case 0x7F0AFDE4u: goto label_7F0AFDE4;
    case 0x7F0AFDE8u: goto label_7F0AFDE8;
    case 0x7F0AFDECu: goto label_7F0AFDEC;
    case 0x7F0AFDF0u: goto label_7F0AFDF0;
    case 0x7F0AFDF4u: goto label_7F0AFDF4;
    case 0x7F0AFDF8u: goto label_7F0AFDF8;
    case 0x7F0AFDFCu: goto label_7F0AFDFC;
    case 0x7F0AFE00u: goto label_7F0AFE00;
    case 0x7F0AFE04u: goto label_7F0AFE04;
    case 0x7F0AFE08u: goto label_7F0AFE08;
    case 0x7F0AFE0Cu: goto label_7F0AFE0C;
    case 0x7F0AFE10u: goto label_7F0AFE10;
    case 0x7F0AFE14u: goto label_7F0AFE14;
    case 0x7F0AFE18u: goto label_7F0AFE18;
    case 0x7F0AFE1Cu: goto label_7F0AFE1C;
    case 0x7F0AFE20u: goto label_7F0AFE20;
    case 0x7F0AFE24u: goto label_7F0AFE24;
    case 0x7F0AFE28u: goto label_7F0AFE28;
    case 0x7F0AFE2Cu: goto label_7F0AFE2C;
    case 0x7F0AFE30u: goto label_7F0AFE30;
    case 0x7F0AFE34u: goto label_7F0AFE34;
    case 0x7F0AFE38u: goto label_7F0AFE38;
    case 0x7F0AFE3Cu: goto label_7F0AFE3C;
    case 0x7F0AFE40u: goto label_7F0AFE40;
    case 0x7F0AFE44u: goto label_7F0AFE44;
    case 0x7F0AFE48u: goto label_7F0AFE48;
    case 0x7F0AFE4Cu: goto label_7F0AFE4C;
    case 0x7F0AFE50u: goto label_7F0AFE50;
    case 0x7F0AFE54u: goto label_7F0AFE54;
    case 0x7F0AFE58u: goto label_7F0AFE58;
    case 0x7F0AFE5Cu: goto label_7F0AFE5C;
    case 0x7F0AFE60u: goto label_7F0AFE60;
    case 0x7F0AFE64u: goto label_7F0AFE64;
    case 0x7F0AFE68u: goto label_7F0AFE68;
    case 0x7F0AFE6Cu: goto label_7F0AFE6C;
    case 0x7F0AFE70u: goto label_7F0AFE70;
    case 0x7F0AFE74u: goto label_7F0AFE74;
    case 0x7F0AFE78u: goto label_7F0AFE78;
    case 0x7F0AFE7Cu: goto label_7F0AFE7C;
    case 0x7F0AFE80u: goto label_7F0AFE80;
    case 0x7F0AFE84u: goto label_7F0AFE84;
    case 0x7F0AFE88u: goto label_7F0AFE88;
    case 0x7F0AFE8Cu: goto label_7F0AFE8C;
    case 0x7F0AFE90u: goto label_7F0AFE90;
    case 0x7F0AFE94u: goto label_7F0AFE94;
    case 0x7F0AFE98u: goto label_7F0AFE98;
    case 0x7F0AFE9Cu: goto label_7F0AFE9C;
    case 0x7F0AFEA0u: goto label_7F0AFEA0;
    case 0x7F0AFEA4u: goto label_7F0AFEA4;
    case 0x7F0AFEA8u: goto label_7F0AFEA8;
    case 0x7F0AFEACu: goto label_7F0AFEAC;
    case 0x7F0AFEB0u: goto label_7F0AFEB0;
    case 0x7F0AFEB4u: goto label_7F0AFEB4;
    case 0x7F0AFEB8u: goto label_7F0AFEB8;
    case 0x7F0AFEBCu: goto label_7F0AFEBC;
    case 0x7F0AFEC0u: goto label_7F0AFEC0;
    case 0x7F0AFEC4u: goto label_7F0AFEC4;
    case 0x7F0AFEC8u: goto label_7F0AFEC8;
    case 0x7F0AFECCu: goto label_7F0AFECC;
    case 0x7F0AFED0u: goto label_7F0AFED0;
    case 0x7F0AFED4u: goto label_7F0AFED4;
    case 0x7F0AFED8u: goto label_7F0AFED8;
    case 0x7F0AFEDCu: goto label_7F0AFEDC;
    case 0x7F0AFEE0u: goto label_7F0AFEE0;
    case 0x7F0AFEE4u: goto label_7F0AFEE4;
    case 0x7F0AFEE8u: goto label_7F0AFEE8;
    case 0x7F0AFEECu: goto label_7F0AFEEC;
    case 0x7F0AFEF0u: goto label_7F0AFEF0;
    case 0x7F0AFEF4u: goto label_7F0AFEF4;
    case 0x7F0AFEF8u: goto label_7F0AFEF8;
    case 0x7F0AFEFCu: goto label_7F0AFEFC;
    case 0x7F0AFF00u: goto label_7F0AFF00;
    case 0x7F0AFF04u: goto label_7F0AFF04;
    case 0x7F0AFF08u: goto label_7F0AFF08;
    case 0x7F0AFF0Cu: goto label_7F0AFF0C;
    case 0x7F0AFF10u: goto label_7F0AFF10;
    case 0x7F0AFF14u: goto label_7F0AFF14;
    case 0x7F0AFF18u: goto label_7F0AFF18;
    case 0x7F0AFF1Cu: goto label_7F0AFF1C;
    case 0x7F0AFF20u: goto label_7F0AFF20;
    case 0x7F0AFF24u: goto label_7F0AFF24;
    case 0x7F0AFF28u: goto label_7F0AFF28;
    case 0x7F0AFF2Cu: goto label_7F0AFF2C;
    case 0x7F0AFF30u: goto label_7F0AFF30;
    case 0x7F0AFF34u: goto label_7F0AFF34;
    case 0x7F0AFF38u: goto label_7F0AFF38;
    case 0x7F0AFF3Cu: goto label_7F0AFF3C;
    case 0x7F0AFF40u: goto label_7F0AFF40;
    case 0x7F0AFF44u: goto label_7F0AFF44;
    case 0x7F0AFF48u: goto label_7F0AFF48;
    case 0x7F0AFF4Cu: goto label_7F0AFF4C;
    case 0x7F0AFF50u: goto label_7F0AFF50;
    case 0x7F0AFF54u: goto label_7F0AFF54;
    case 0x7F0AFF58u: goto label_7F0AFF58;
    case 0x7F0AFF5Cu: goto label_7F0AFF5C;
    case 0x7F0AFF60u: goto label_7F0AFF60;
    case 0x7F0AFF64u: goto label_7F0AFF64;
    case 0x7F0AFF68u: goto label_7F0AFF68;
    case 0x7F0AFF6Cu: goto label_7F0AFF6C;
    case 0x7F0AFF70u: goto label_7F0AFF70;
    case 0x7F0AFF74u: goto label_7F0AFF74;
    case 0x7F0AFF78u: goto label_7F0AFF78;
    case 0x7F0AFF7Cu: goto label_7F0AFF7C;
    case 0x7F0AFF80u: goto label_7F0AFF80;
    case 0x7F0AFF84u: goto label_7F0AFF84;
    case 0x7F0AFF88u: goto label_7F0AFF88;
    case 0x7F0AFF8Cu: goto label_7F0AFF8C;
    case 0x7F0AFF90u: goto label_7F0AFF90;
    case 0x7F0AFF94u: goto label_7F0AFF94;
    case 0x7F0AFF98u: goto label_7F0AFF98;
    case 0x7F0AFF9Cu: goto label_7F0AFF9C;
    case 0x7F0AFFA0u: goto label_7F0AFFA0;
    case 0x7F0AFFA4u: goto label_7F0AFFA4;
    case 0x7F0AFFA8u: goto label_7F0AFFA8;
    case 0x7F0AFFACu: goto label_7F0AFFAC;
    case 0x7F0AFFB0u: goto label_7F0AFFB0;
    case 0x7F0AFFB4u: goto label_7F0AFFB4;
    case 0x7F0AFFB8u: goto label_7F0AFFB8;
    case 0x7F0AFFBCu: goto label_7F0AFFBC;
    case 0x7F0AFFC0u: goto label_7F0AFFC0;
    case 0x7F0AFFC4u: goto label_7F0AFFC4;
    case 0x7F0AFFC8u: goto label_7F0AFFC8;
    case 0x7F0AFFCCu: goto label_7F0AFFCC;
    case 0x7F0AFFD0u: goto label_7F0AFFD0;
    case 0x7F0AFFD4u: goto label_7F0AFFD4;
    case 0x7F0AFFD8u: goto label_7F0AFFD8;
    case 0x7F0AFFDCu: goto label_7F0AFFDC;
    case 0x7F0AFFE0u: goto label_7F0AFFE0;
    case 0x7F0AFFE4u: goto label_7F0AFFE4;
    case 0x7F0AFFE8u: goto label_7F0AFFE8;
    case 0x7F0AFFECu: goto label_7F0AFFEC;
    case 0x7F0AFFF0u: goto label_7F0AFFF0;
    case 0x7F0AFFF4u: goto label_7F0AFFF4;
    case 0x7F0AFFF8u: goto label_7F0AFFF8;
    case 0x7F0AFFFCu: goto label_7F0AFFFC;
    case 0x7F0B0000u: goto label_7F0B0000;
    case 0x7F0B0004u: goto label_7F0B0004;
    case 0x7F0B0008u: goto label_7F0B0008;
    case 0x7F0B000Cu: goto label_7F0B000C;
    case 0x7F0B0010u: goto label_7F0B0010;
    case 0x7F0B0014u: goto label_7F0B0014;
    case 0x7F0B0018u: goto label_7F0B0018;
    case 0x7F0B001Cu: goto label_7F0B001C;
    case 0x7F0B0020u: goto label_7F0B0020;
    case 0x7F0B0024u: goto label_7F0B0024;
    case 0x7F0B0028u: goto label_7F0B0028;
    case 0x7F0B002Cu: goto label_7F0B002C;
    case 0x7F0B0030u: goto label_7F0B0030;
    case 0x7F0B0034u: goto label_7F0B0034;
    case 0x7F0B0038u: goto label_7F0B0038;
    case 0x7F0B003Cu: goto label_7F0B003C;
    case 0x7F0B0040u: goto label_7F0B0040;
    case 0x7F0B0044u: goto label_7F0B0044;
    case 0x7F0B0048u: goto label_7F0B0048;
    case 0x7F0B004Cu: goto label_7F0B004C;
    case 0x7F0B0050u: goto label_7F0B0050;
    case 0x7F0B0054u: goto label_7F0B0054;
    case 0x7F0B0058u: goto label_7F0B0058;
    case 0x7F0B005Cu: goto label_7F0B005C;
    case 0x7F0B0060u: goto label_7F0B0060;
    case 0x7F0B0064u: goto label_7F0B0064;
    case 0x7F0B0068u: goto label_7F0B0068;
    case 0x7F0B006Cu: goto label_7F0B006C;
    case 0x7F0B0070u: goto label_7F0B0070;
    case 0x7F0B0074u: goto label_7F0B0074;
    case 0x7F0B0078u: goto label_7F0B0078;
    case 0x7F0B007Cu: goto label_7F0B007C;
    case 0x7F0B0080u: goto label_7F0B0080;
    case 0x7F0B0084u: goto label_7F0B0084;
    case 0x7F0B0088u: goto label_7F0B0088;
    case 0x7F0B008Cu: goto label_7F0B008C;
    case 0x7F0B0090u: goto label_7F0B0090;
    case 0x7F0B0094u: goto label_7F0B0094;
    case 0x7F0B0098u: goto label_7F0B0098;
    case 0x7F0B009Cu: goto label_7F0B009C;
    case 0x7F0B00A0u: goto label_7F0B00A0;
    case 0x7F0B00A4u: goto label_7F0B00A4;
    case 0x7F0B00A8u: goto label_7F0B00A8;
    case 0x7F0B00ACu: goto label_7F0B00AC;
    case 0x7F0B00B0u: goto label_7F0B00B0;
    case 0x7F0B00B4u: goto label_7F0B00B4;
    case 0x7F0B00B8u: goto label_7F0B00B8;
    case 0x7F0B00BCu: goto label_7F0B00BC;
    case 0x7F0B00C0u: goto label_7F0B00C0;
    case 0x7F0B00C4u: goto label_7F0B00C4;
    case 0x7F0B00C8u: goto label_7F0B00C8;
    case 0x7F0B00CCu: goto label_7F0B00CC;
    case 0x7F0B00D0u: goto label_7F0B00D0;
    case 0x7F0B00D4u: goto label_7F0B00D4;
    case 0x7F0B00D8u: goto label_7F0B00D8;
    case 0x7F0B00DCu: goto label_7F0B00DC;
    case 0x7F0B00E0u: goto label_7F0B00E0;
    case 0x7F0B00E4u: goto label_7F0B00E4;
    case 0x7F0B00E8u: goto label_7F0B00E8;
    default: return;
    }
label_7F0AC0EC:
    ctx->pc = 0x7F0AC0ECu;
    ctx->downcount -= 16;
    // 7F0AC0EC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC0F0:
    ctx->pc = 0x7F0AC0F0u;
    // 7F0AC0F0: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC0F4:
    ctx->pc = 0x7F0AC0F4u;
    // 7F0AC0F4: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC0F8:
    ctx->pc = 0x7F0AC0F8u;
    // 7F0AC0F8: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC0FC:
    ctx->pc = 0x7F0AC0FCu;
    // 7F0AC0FC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0FCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0AC100:
    ctx->pc = 0x7F0AC100u;
    // 7F0AC100: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC100u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0AC104:
    ctx->pc = 0x7F0AC104u;
    // 7F0AC104: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC104u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC108:
    ctx->pc = 0x7F0AC108u;
    // 7F0AC108: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC10C:
    ctx->pc = 0x7F0AC10Cu;
    // 7F0AC10C: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC10Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC110:
    ctx->pc = 0x7F0AC110u;
    // 7F0AC110: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC110u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC114:
    ctx->pc = 0x7F0AC114u;
    // 7F0AC114: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC114u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0AC118:
    ctx->pc = 0x7F0AC118u;
    // 7F0AC118: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC118u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0AC11C:
    ctx->pc = 0x7F0AC11Cu;
    // 7F0AC11C: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC11Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC120:
    ctx->pc = 0x7F0AC120u;
    // 7F0AC120: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0AC124:
    ctx->pc = 0x7F0AC124u;
    // 7F0AC124: rlwinm. r0, r0, 0, 30, 30
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

label_7F0AC128:
    ctx->pc = 0x7F0AC128u;
    // 7F0AC128: bc    12, 2, 0x7F0AC328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC328;
        }
    }

label_7F0AC12C:
    ctx->pc = 0x7F0AC12Cu;
    ctx->downcount -= 7;
    // 7F0AC12C: lwz     r5, 3688(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3688);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC130:
    ctx->pc = 0x7F0AC130u;
    // 7F0AC130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC134:
    ctx->pc = 0x7F0AC134u;
    // 7F0AC134: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AC138:
    ctx->pc = 0x7F0AC138u;
    // 7F0AC138: lwz     r27, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F0AC13C:
    ctx->pc = 0x7F0AC13Cu;
    // 7F0AC13C: lwz     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC140:
    ctx->pc = 0x7F0AC140u;
    // 7F0AC140: lwz     r6, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AC144:
    ctx->pc = 0x7F0AC144u;
    // 7F0AC144: bl      0x7F1736F0
    {
            ctx->lr = 0x7F0AC148u;
            ctx->pc = 0x7F1736F0u;
            return;
    }

label_7F0AC148:
    ctx->pc = 0x7F0AC148u;
    ctx->downcount -= 6;
    // 7F0AC148: lfs     f0, 144(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC148u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC14C:
    ctx->pc = 0x7F0AC14Cu;
    // 7F0AC14C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC150:
    ctx->pc = 0x7F0AC150u;
    // 7F0AC150: lfs     f2, -5284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC150u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC154:
    ctx->pc = 0x7F0AC154u;
    // 7F0AC154: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC154u)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0AC158:
    ctx->pc = 0x7F0AC158u;
    // 7F0AC158: fcmpo   cr0, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0AC158u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[2], true);

label_7F0AC15C:
    ctx->pc = 0x7F0AC15Cu;
    // 7F0AC15C: bc    4, 1, 0x7F0AC250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC250;
        }
    }

label_7F0AC160:
    ctx->pc = 0x7F0AC160u;
    ctx->downcount -= 4;
    // 7F0AC160: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC164:
    ctx->pc = 0x7F0AC164u;
    // 7F0AC164: lfs     f0, -5276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC164u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC168:
    ctx->pc = 0x7F0AC168u;
    // 7F0AC168: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC168u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_7F0AC16C:
    ctx->pc = 0x7F0AC16Cu;
    // 7F0AC16C: bc    4, 1, 0x7F0AC174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC174;
        }
    }

label_7F0AC170:
    ctx->pc = 0x7F0AC170u;
    ctx->downcount -= 1;
    // 7F0AC170: fmr    f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC170u)) return;
    ctx->fpr[4] = ctx->fpr[0];

label_7F0AC174:
    ctx->pc = 0x7F0AC174u;
    ctx->downcount -= 2;
    // 7F0AC174: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AC178:
    ctx->pc = 0x7F0AC178u;
    // 7F0AC178: bc    12, 2, 0x7F0AC1CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC1CC;
        }
    }

label_7F0AC17C:
    ctx->pc = 0x7F0AC17Cu;
    ctx->downcount -= 1;
    // 7F0AC17C: bc    4, 0, 0x7F0AC20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC20C;
        }
    }

label_7F0AC180:
    ctx->pc = 0x7F0AC180u;
    ctx->downcount -= 2;
    // 7F0AC180: cmpwi   r30, 0
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

label_7F0AC184:
    ctx->pc = 0x7F0AC184u;
    // 7F0AC184: bc    4, 0, 0x7F0AC18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC18C;
        }
    }

label_7F0AC188:
    ctx->pc = 0x7F0AC188u;
    ctx->downcount -= 1;
    // 7F0AC188: b       0x7F0AC20C
    {
            goto label_7F0AC20C;
    }

label_7F0AC18C:
    ctx->pc = 0x7F0AC18Cu;
    ctx->downcount -= 32;
    // 7F0AC18C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC190:
    ctx->pc = 0x7F0AC190u;
    // 7F0AC190: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC194:
    ctx->pc = 0x7F0AC194u;
    // 7F0AC194: lfs     f0, -5276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC198:
    ctx->pc = 0x7F0AC198u;
    // 7F0AC198: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AC19C:
    ctx->pc = 0x7F0AC19Cu;
    // 7F0AC19C: lfs     f1, -5268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC19Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC1A0:
    ctx->pc = 0x7F0AC1A0u;
    // 7F0AC1A0: fdivs   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1A0u)) return;
    ppc_fdivs(ctx, 0, 4, 0);

label_7F0AC1A4:
    ctx->pc = 0x7F0AC1A4u;
    // 7F0AC1A4: lfs     f3, -5272(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0AC1A8:
    ctx->pc = 0x7F0AC1A8u;
    // 7F0AC1A8: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC1AC:
    ctx->pc = 0x7F0AC1ACu;
    // 7F0AC1AC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1ACu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F0AC1B0:
    ctx->pc = 0x7F0AC1B0u;
    // 7F0AC1B0: fmadds f1, f4, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1B0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0AC1B4:
    ctx->pc = 0x7F0AC1B4u;
    // 7F0AC1B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AC1B8:
    ctx->pc = 0x7F0AC1B8u;
    // 7F0AC1B8: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC1BC:
    ctx->pc = 0x7F0AC1BCu;
    // 7F0AC1BC: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AC1C0:
    ctx->pc = 0x7F0AC1C0u;
    // 7F0AC1C0: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC1C4:
    ctx->pc = 0x7F0AC1C4u;
    // 7F0AC1C4: sth     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC1C8:
    ctx->pc = 0x7F0AC1C8u;
    // 7F0AC1C8: b       0x7F0AC28C
    {
            goto label_7F0AC28C;
    }

label_7F0AC1CC:
    ctx->pc = 0x7F0AC1CCu;
    ctx->downcount -= 32;
    // 7F0AC1CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC1D0:
    ctx->pc = 0x7F0AC1D0u;
    // 7F0AC1D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC1D4:
    ctx->pc = 0x7F0AC1D4u;
    // 7F0AC1D4: lfs     f0, -5276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC1D8:
    ctx->pc = 0x7F0AC1D8u;
    // 7F0AC1D8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AC1DC:
    ctx->pc = 0x7F0AC1DCu;
    // 7F0AC1DC: lfs     f1, -5264(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC1E0:
    ctx->pc = 0x7F0AC1E0u;
    // 7F0AC1E0: fdivs   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1E0u)) return;
    ppc_fdivs(ctx, 0, 4, 0);

label_7F0AC1E4:
    ctx->pc = 0x7F0AC1E4u;
    // 7F0AC1E4: lfs     f3, -5272(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0AC1E8:
    ctx->pc = 0x7F0AC1E8u;
    // 7F0AC1E8: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC1EC:
    ctx->pc = 0x7F0AC1ECu;
    // 7F0AC1EC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1ECu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F0AC1F0:
    ctx->pc = 0x7F0AC1F0u;
    // 7F0AC1F0: fmadds f1, f4, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1F0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0AC1F4:
    ctx->pc = 0x7F0AC1F4u;
    // 7F0AC1F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AC1F8:
    ctx->pc = 0x7F0AC1F8u;
    // 7F0AC1F8: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC1FC:
    ctx->pc = 0x7F0AC1FCu;
    // 7F0AC1FC: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AC200:
    ctx->pc = 0x7F0AC200u;
    // 7F0AC200: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC204:
    ctx->pc = 0x7F0AC204u;
    // 7F0AC204: sth     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC208:
    ctx->pc = 0x7F0AC208u;
    // 7F0AC208: b       0x7F0AC28C
    {
            goto label_7F0AC28C;
    }

label_7F0AC20C:
    ctx->pc = 0x7F0AC20Cu;
    ctx->downcount -= 33;
    // 7F0AC20C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC210:
    ctx->pc = 0x7F0AC210u;
    // 7F0AC210: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC214:
    ctx->pc = 0x7F0AC214u;
    // 7F0AC214: lfs     f0, -5276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC214u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC218:
    ctx->pc = 0x7F0AC218u;
    // 7F0AC218: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AC21C:
    ctx->pc = 0x7F0AC21Cu;
    // 7F0AC21C: lfs     f1, -5268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC21Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC220:
    ctx->pc = 0x7F0AC220u;
    // 7F0AC220: fdivs   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC220u)) return;
    ppc_fdivs(ctx, 0, 4, 0);

label_7F0AC224:
    ctx->pc = 0x7F0AC224u;
    // 7F0AC224: lfs     f2, -5260(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC224u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC228:
    ctx->pc = 0x7F0AC228u;
    // 7F0AC228: lfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC228u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0AC22C:
    ctx->pc = 0x7F0AC22Cu;
    // 7F0AC22C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC22Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F0AC230:
    ctx->pc = 0x7F0AC230u;
    // 7F0AC230: fadds   f1, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0AC230u)) return;
    ppc_fadds(ctx, 1, 3, 4);

label_7F0AC234:
    ctx->pc = 0x7F0AC234u;
    // 7F0AC234: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC234u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F0AC238:
    ctx->pc = 0x7F0AC238u;
    // 7F0AC238: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC23C:
    ctx->pc = 0x7F0AC23Cu;
    // 7F0AC23C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC23Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AC240:
    ctx->pc = 0x7F0AC240u;
    // 7F0AC240: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AC244:
    ctx->pc = 0x7F0AC244u;
    // 7F0AC244: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC248:
    ctx->pc = 0x7F0AC248u;
    // 7F0AC248: sth     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC24C:
    ctx->pc = 0x7F0AC24Cu;
    // 7F0AC24C: b       0x7F0AC28C
    {
            goto label_7F0AC28C;
    }

label_7F0AC250:
    ctx->pc = 0x7F0AC250u;
    ctx->downcount -= 11;
    // 7F0AC250: lha     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AC254:
    ctx->pc = 0x7F0AC254u;
    // 7F0AC254: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0AC258:
    ctx->pc = 0x7F0AC258u;
    // 7F0AC258: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC25C:
    ctx->pc = 0x7F0AC25Cu;
    // 7F0AC25C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC260:
    ctx->pc = 0x7F0AC260u;
    // 7F0AC260: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0AC264:
    ctx->pc = 0x7F0AC264u;
    // 7F0AC264: lfd     f1, -5248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC264u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0AC268:
    ctx->pc = 0x7F0AC268u;
    // 7F0AC268: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC26C:
    ctx->pc = 0x7F0AC26Cu;
    // 7F0AC26C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AC270:
    ctx->pc = 0x7F0AC270u;
    // 7F0AC270: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0AC274:
    ctx->pc = 0x7F0AC274u;
    // 7F0AC274: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AC274u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F0AC278:
    ctx->pc = 0x7F0AC278u;
    // 7F0AC278: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0AC27Cu;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0AC27C:
    ctx->pc = 0x7F0AC27Cu;
    ctx->downcount -= 4;
    // 7F0AC27C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AC27Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AC280:
    ctx->pc = 0x7F0AC280u;
    // 7F0AC280: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AC284:
    ctx->pc = 0x7F0AC284u;
    // 7F0AC284: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC288:
    ctx->pc = 0x7F0AC288u;
    // 7F0AC288: sth     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC28C:
    ctx->pc = 0x7F0AC28Cu;
    ctx->downcount -= 4;
    // 7F0AC28C: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC28Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC290:
    ctx->pc = 0x7F0AC290u;
    // 7F0AC290: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AC294:
    ctx->pc = 0x7F0AC294u;
    // 7F0AC294: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC298:
    ctx->pc = 0x7F0AC298u;
    // 7F0AC298: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0AC29Cu;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0AC29C:
    ctx->pc = 0x7F0AC29Cu;
    ctx->downcount -= 8;
    // 7F0AC29C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC29Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC2A0:
    ctx->pc = 0x7F0AC2A0u;
    // 7F0AC2A0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC2A4:
    ctx->pc = 0x7F0AC2A4u;
    // 7F0AC2A4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC2A8:
    ctx->pc = 0x7F0AC2A8u;
    // 7F0AC2A8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0AC2AC:
    ctx->pc = 0x7F0AC2ACu;
    // 7F0AC2AC: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC2B0:
    ctx->pc = 0x7F0AC2B0u;
    // 7F0AC2B0: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F0AC2B4:
    ctx->pc = 0x7F0AC2B4u;
    // 7F0AC2B4: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F0AC2B8:
    ctx->pc = 0x7F0AC2B8u;
    // 7F0AC2B8: bl      0x7F10B744
    {
            ctx->lr = 0x7F0AC2BCu;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0AC2BC:
    ctx->pc = 0x7F0AC2BCu;
    ctx->downcount -= 2;
    // 7F0AC2BC: cmpwi   r3, 0
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

label_7F0AC2C0:
    ctx->pc = 0x7F0AC2C0u;
    // 7F0AC2C0: bc    12, 2, 0x7F0AC2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC2D4;
        }
    }

label_7F0AC2C4:
    ctx->pc = 0x7F0AC2C4u;
    ctx->downcount -= 2;
    // 7F0AC2C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AC2C8:
    ctx->pc = 0x7F0AC2C8u;
    // 7F0AC2C8: bl      0x7F0ABF98
    {
            ctx->lr = 0x7F0AC2CCu;
            ctx->pc = 0x7F0ABF98u;
            return;
    }

label_7F0AC2CC:
    ctx->pc = 0x7F0AC2CCu;
    ctx->downcount -= 2;
    // 7F0AC2CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AC2D0:
    ctx->pc = 0x7F0AC2D0u;
    // 7F0AC2D0: b       0x7F0AC32C
    {
            goto label_7F0AC32C;
    }

label_7F0AC2D4:
    ctx->pc = 0x7F0AC2D4u;
    ctx->downcount -= 7;
    // 7F0AC2D4: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC2D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC2D8:
    ctx->pc = 0x7F0AC2D8u;
    // 7F0AC2D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC2DC:
    ctx->pc = 0x7F0AC2DCu;
    // 7F0AC2DC: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC2DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC2E0:
    ctx->pc = 0x7F0AC2E0u;
    // 7F0AC2E0: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC2E4:
    ctx->pc = 0x7F0AC2E4u;
    // 7F0AC2E4: lwz     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC2E8:
    ctx->pc = 0x7F0AC2E8u;
    // 7F0AC2E8: lwz     r6, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AC2EC:
    ctx->pc = 0x7F0AC2ECu;
    // 7F0AC2EC: bl      0x7F106A30
    {
            ctx->lr = 0x7F0AC2F0u;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F0AC2F0:
    ctx->pc = 0x7F0AC2F0u;
    ctx->downcount -= 2;
    // 7F0AC2F0: or.   r28, r3, r3
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

label_7F0AC2F4:
    ctx->pc = 0x7F0AC2F4u;
    // 7F0AC2F4: bc    12, 2, 0x7F0AC300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC300;
        }
    }

label_7F0AC2F8:
    ctx->pc = 0x7F0AC2F8u;
    ctx->downcount -= 2;
    // 7F0AC2F8: addi    r3, r31, 144
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(144);

label_7F0AC2FC:
    ctx->pc = 0x7F0AC2FCu;
    // 7F0AC2FC: bl      0x7F106FC0
    {
            ctx->lr = 0x7F0AC300u;
            ctx->pc = 0x7F106FC0u;
            return;
    }

label_7F0AC300:
    ctx->pc = 0x7F0AC300u;
    ctx->downcount -= 2;
    // 7F0AC300: rlwinm. r0, r28, 0, 31, 31
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

label_7F0AC304:
    ctx->pc = 0x7F0AC304u;
    // 7F0AC304: bc    4, 2, 0x7F0AC314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC314;
        }
    }

label_7F0AC308:
    ctx->pc = 0x7F0AC308u;
    ctx->downcount -= 3;
    // 7F0AC308: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC30C:
    ctx->pc = 0x7F0AC30Cu;
    // 7F0AC30C: lfs     f0, -5256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC30Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC310:
    ctx->pc = 0x7F0AC310u;
    // 7F0AC310: stfs     f0, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC310u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC314:
    ctx->pc = 0x7F0AC314u;
    ctx->downcount -= 2;
    // 7F0AC314: rlwinm. r0, r28, 0, 30, 30
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

label_7F0AC318:
    ctx->pc = 0x7F0AC318u;
    // 7F0AC318: bc    4, 2, 0x7F0AC328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC328;
        }
    }

label_7F0AC31C:
    ctx->pc = 0x7F0AC31Cu;
    ctx->downcount -= 3;
    // 7F0AC31C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC320:
    ctx->pc = 0x7F0AC320u;
    // 7F0AC320: lfs     f0, -5252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC320u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC324:
    ctx->pc = 0x7F0AC324u;
    // 7F0AC324: stfs     f0, 148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC328:
    ctx->pc = 0x7F0AC328u;
    ctx->downcount -= 1;
    // 7F0AC328: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AC32C:
    ctx->pc = 0x7F0AC32Cu;
    ctx->downcount -= 16;
    // 7F0AC32C: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC330:
    ctx->pc = 0x7F0AC330u;
    // 7F0AC330: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC334:
    ctx->pc = 0x7F0AC334u;
    // 7F0AC334: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC338:
    ctx->pc = 0x7F0AC338u;
    // 7F0AC338: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0AC33C:
    ctx->pc = 0x7F0AC33Cu;
    // 7F0AC33C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC340:
    ctx->pc = 0x7F0AC340u;
    ctx->downcount -= 29;
    // 7F0AC340: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC344:
    ctx->pc = 0x7F0AC344u;
    // 7F0AC344: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC348:
    ctx->pc = 0x7F0AC348u;
    // 7F0AC348: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC34C:
    ctx->pc = 0x7F0AC34Cu;
    // 7F0AC34C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC350:
    ctx->pc = 0x7F0AC350u;
    // 7F0AC350: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC354:
    ctx->pc = 0x7F0AC354u;
    // 7F0AC354: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC358:
    ctx->pc = 0x7F0AC358u;
    // 7F0AC358: lwz     r4, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AC35C:
    ctx->pc = 0x7F0AC35Cu;
    // 7F0AC35C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC360:
    ctx->pc = 0x7F0AC360u;
    // 7F0AC360: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AC364:
    ctx->pc = 0x7F0AC364u;
    // 7F0AC364: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC368:
    ctx->pc = 0x7F0AC368u;
    // 7F0AC368: addi    r4, r6, 32
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(32);

label_7F0AC36C:
    ctx->pc = 0x7F0AC36Cu;
    // 7F0AC36C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC370:
    ctx->pc = 0x7F0AC370u;
    // 7F0AC370: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AC374:
    ctx->pc = 0x7F0AC374u;
    // 7F0AC374: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC378:
    ctx->pc = 0x7F0AC378u;
    // 7F0AC378: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC37C:
    ctx->pc = 0x7F0AC37Cu;
    // 7F0AC37C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC380:
    ctx->pc = 0x7F0AC380u;
    // 7F0AC380: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AC384:
    ctx->pc = 0x7F0AC384u;
    // 7F0AC384: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC388:
    ctx->pc = 0x7F0AC388u;
    // 7F0AC388: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AC38Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AC38C:
    ctx->pc = 0x7F0AC38Cu;
    ctx->downcount -= 3;
    // 7F0AC38C: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC390:
    ctx->pc = 0x7F0AC390u;
    // 7F0AC390: rlwinm. r0, r0, 0, 27, 27
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

label_7F0AC394:
    ctx->pc = 0x7F0AC394u;
    // 7F0AC394: bc    12, 2, 0x7F0AC3C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC3C4;
        }
    }

label_7F0AC398:
    ctx->pc = 0x7F0AC398u;
    ctx->downcount -= 3;
    // 7F0AC398: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC39C:
    ctx->pc = 0x7F0AC39Cu;
    // 7F0AC39C: cmpwi   r0, 0
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

label_7F0AC3A0:
    ctx->pc = 0x7F0AC3A0u;
    // 7F0AC3A0: bc    4, 2, 0x7F0AC3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC3B4;
        }
    }

label_7F0AC3A4:
    ctx->pc = 0x7F0AC3A4u;
    ctx->downcount -= 4;
    // 7F0AC3A4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC3A8:
    ctx->pc = 0x7F0AC3A8u;
    // 7F0AC3A8: addi    r3, r3, -32712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32712);

label_7F0AC3AC:
    ctx->pc = 0x7F0AC3ACu;
    // 7F0AC3AC: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F0AC3B0:
    ctx->pc = 0x7F0AC3B0u;
    // 7F0AC3B0: b       0x7F0AC3EC
    {
            goto label_7F0AC3EC;
    }

label_7F0AC3B4:
    ctx->pc = 0x7F0AC3B4u;
    ctx->downcount -= 4;
    // 7F0AC3B4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC3B8:
    ctx->pc = 0x7F0AC3B8u;
    // 7F0AC3B8: addi    r3, r3, -32712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32712);

label_7F0AC3BC:
    ctx->pc = 0x7F0AC3BCu;
    // 7F0AC3BC: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F0AC3C0:
    ctx->pc = 0x7F0AC3C0u;
    // 7F0AC3C0: b       0x7F0AC3EC
    {
            goto label_7F0AC3EC;
    }

label_7F0AC3C4:
    ctx->pc = 0x7F0AC3C4u;
    ctx->downcount -= 3;
    // 7F0AC3C4: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC3C8:
    ctx->pc = 0x7F0AC3C8u;
    // 7F0AC3C8: cmpwi   r0, 0
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

label_7F0AC3CC:
    ctx->pc = 0x7F0AC3CCu;
    // 7F0AC3CC: bc    4, 2, 0x7F0AC3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC3E0;
        }
    }

label_7F0AC3D0:
    ctx->pc = 0x7F0AC3D0u;
    ctx->downcount -= 4;
    // 7F0AC3D0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC3D4:
    ctx->pc = 0x7F0AC3D4u;
    // 7F0AC3D4: addi    r0, r3, -32712
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32712);

label_7F0AC3D8:
    ctx->pc = 0x7F0AC3D8u;
    // 7F0AC3D8: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AC3DC:
    ctx->pc = 0x7F0AC3DCu;
    // 7F0AC3DC: b       0x7F0AC3EC
    {
            goto label_7F0AC3EC;
    }

label_7F0AC3E0:
    ctx->pc = 0x7F0AC3E0u;
    ctx->downcount -= 3;
    // 7F0AC3E0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC3E4:
    ctx->pc = 0x7F0AC3E4u;
    // 7F0AC3E4: addi    r3, r3, -32712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32712);

label_7F0AC3E8:
    ctx->pc = 0x7F0AC3E8u;
    // 7F0AC3E8: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F0AC3EC:
    ctx->pc = 0x7F0AC3ECu;
    ctx->downcount -= 3;
    // 7F0AC3EC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC3F0:
    ctx->pc = 0x7F0AC3F0u;
    // 7F0AC3F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AC3F4:
    ctx->pc = 0x7F0AC3F4u;
    // 7F0AC3F4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0AC3F8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0AC3F8:
    ctx->pc = 0x7F0AC3F8u;
    ctx->downcount -= 7;
    // 7F0AC3F8: lwz     r3, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC3FC:
    ctx->pc = 0x7F0AC3FCu;
    // 7F0AC3FC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC400:
    ctx->pc = 0x7F0AC400u;
    // 7F0AC400: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC404:
    ctx->pc = 0x7F0AC404u;
    // 7F0AC404: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0AC408:
    ctx->pc = 0x7F0AC408u;
    // 7F0AC408: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F0AC40C:
    ctx->pc = 0x7F0AC40Cu;
    // 7F0AC40C: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F0AC410:
    ctx->pc = 0x7F0AC410u;
    // 7F0AC410: bl      0x7F10B744
    {
            ctx->lr = 0x7F0AC414u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0AC414:
    ctx->pc = 0x7F0AC414u;
    ctx->downcount -= 2;
    // 7F0AC414: cmpwi   r3, 0
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

label_7F0AC418:
    ctx->pc = 0x7F0AC418u;
    // 7F0AC418: bc    12, 2, 0x7F0AC474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC474;
        }
    }

label_7F0AC41C:
    ctx->pc = 0x7F0AC41Cu;
    ctx->downcount -= 2;
    // 7F0AC41C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC420:
    ctx->pc = 0x7F0AC420u;
    // 7F0AC420: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F0AC424u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F0AC424:
    ctx->pc = 0x7F0AC424u;
    ctx->downcount -= 2;
    // 7F0AC424: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC428:
    ctx->pc = 0x7F0AC428u;
    // 7F0AC428: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0AC42Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0AC42C:
    ctx->pc = 0x7F0AC42Cu;
    ctx->downcount -= 8;
    // 7F0AC42C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC430:
    ctx->pc = 0x7F0AC430u;
    // 7F0AC430: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC434:
    ctx->pc = 0x7F0AC434u;
    // 7F0AC434: lfs     f2, -5288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC434u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC438:
    ctx->pc = 0x7F0AC438u;
    // 7F0AC438: lfs     f0, -5284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC438u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC43C:
    ctx->pc = 0x7F0AC43Cu;
    // 7F0AC43C: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0AC43Cu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F0AC440:
    ctx->pc = 0x7F0AC440u;
    // 7F0AC440: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC440u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0AC444:
    ctx->pc = 0x7F0AC444u;
    // 7F0AC444: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F0AC448:
    ctx->pc = 0x7F0AC448u;
    // 7F0AC448: bc    4, 2, 0x7F0AC450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC450;
        }
    }

label_7F0AC44C:
    ctx->pc = 0x7F0AC44Cu;
    ctx->downcount -= 1;
    // 7F0AC44C: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC44Cu)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_7F0AC450:
    ctx->pc = 0x7F0AC450u;
    ctx->downcount -= 5;
    // 7F0AC450: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC454:
    ctx->pc = 0x7F0AC454u;
    // 7F0AC454: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC458:
    ctx->pc = 0x7F0AC458u;
    // 7F0AC458: lfs     f1, -5292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC458u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC45C:
    ctx->pc = 0x7F0AC45Cu;
    // 7F0AC45C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC460:
    ctx->pc = 0x7F0AC460u;
    // 7F0AC460: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F0AC464u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F0AC464:
    ctx->pc = 0x7F0AC464u;
    ctx->downcount -= 4;
    // 7F0AC464: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC468:
    ctx->pc = 0x7F0AC468u;
    // 7F0AC468: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC46C:
    ctx->pc = 0x7F0AC46Cu;
    // 7F0AC46C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC470:
    ctx->pc = 0x7F0AC470u;
    // 7F0AC470: bl      0x800261B4
    {
            ctx->lr = 0x7F0AC474u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F0AC474:
    ctx->pc = 0x7F0AC474u;
    ctx->downcount -= 16;
    // 7F0AC474: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC478:
    ctx->pc = 0x7F0AC478u;
    // 7F0AC478: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC47C:
    ctx->pc = 0x7F0AC47Cu;
    // 7F0AC47C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC480:
    ctx->pc = 0x7F0AC480u;
    // 7F0AC480: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0AC484:
    ctx->pc = 0x7F0AC484u;
    // 7F0AC484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC488:
    ctx->pc = 0x7F0AC488u;
    ctx->downcount -= 17;
    // 7F0AC488: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC48C:
    ctx->pc = 0x7F0AC48Cu;
    // 7F0AC48C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC490:
    ctx->pc = 0x7F0AC490u;
    // 7F0AC490: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC494:
    ctx->pc = 0x7F0AC494u;
    // 7F0AC494: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC498:
    ctx->pc = 0x7F0AC498u;
    // 7F0AC498: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC49C:
    ctx->pc = 0x7F0AC49Cu;
    // 7F0AC49C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC4A0:
    ctx->pc = 0x7F0AC4A0u;
    // 7F0AC4A0: bl      0x7F0A90A8
    {
            ctx->lr = 0x7F0AC4A4u;
            ctx->pc = 0x7F0A90A8u;
            return;
    }

label_7F0AC4A4:
    ctx->pc = 0x7F0AC4A4u;
    ctx->downcount -= 2;
    // 7F0AC4A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC4A8:
    ctx->pc = 0x7F0AC4A8u;
    // 7F0AC4A8: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AC4ACu;
            ctx->pc = 0x7F0A91B4u;
            return;
    }

label_7F0AC4AC:
    ctx->pc = 0x7F0AC4ACu;
    ctx->downcount -= 4;
    // 7F0AC4AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AC4B0:
    ctx->pc = 0x7F0AC4B0u;
    // 7F0AC4B0: cmpwi   r31, 0
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

label_7F0AC4B4:
    ctx->pc = 0x7F0AC4B4u;
    // 7F0AC4B4: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC4B8:
    ctx->pc = 0x7F0AC4B8u;
    // 7F0AC4B8: bc    4, 2, 0x7F0AC51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC51C;
        }
    }

label_7F0AC4BC:
    ctx->pc = 0x7F0AC4BCu;
    ctx->downcount -= 4;
    // 7F0AC4BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC4C0:
    ctx->pc = 0x7F0AC4C0u;
    // 7F0AC4C0: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F0AC4C4:
    ctx->pc = 0x7F0AC4C4u;
    // 7F0AC4C4: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC4C8:
    ctx->pc = 0x7F0AC4C8u;
    // 7F0AC4C8: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AC4CCu;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0AC4CC:
    ctx->pc = 0x7F0AC4CCu;
    ctx->downcount -= 7;
    // 7F0AC4CC: li      r3, 1869
    ctx->gpr[3] = (u32)(s32)(1869);

label_7F0AC4D0:
    ctx->pc = 0x7F0AC4D0u;
    // 7F0AC4D0: li      r4, 1869
    ctx->gpr[4] = (u32)(s32)(1869);

label_7F0AC4D4:
    ctx->pc = 0x7F0AC4D4u;
    // 7F0AC4D4: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F0AC4D8:
    ctx->pc = 0x7F0AC4D8u;
    // 7F0AC4D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AC4DC:
    ctx->pc = 0x7F0AC4DCu;
    // 7F0AC4DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AC4E0:
    ctx->pc = 0x7F0AC4E0u;
    // 7F0AC4E0: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0AC4E4:
    ctx->pc = 0x7F0AC4E4u;
    // 7F0AC4E4: bl      0x800516D4
    {
            ctx->lr = 0x7F0AC4E8u;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F0AC4E8:
    ctx->pc = 0x7F0AC4E8u;
    ctx->downcount -= 2;
    // 7F0AC4E8: cmpwi   r3, 0
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

label_7F0AC4EC:
    ctx->pc = 0x7F0AC4ECu;
    // 7F0AC4EC: bc    12, 2, 0x7F0AC50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC50C;
        }
    }

label_7F0AC4F0:
    ctx->pc = 0x7F0AC4F0u;
    ctx->downcount -= 7;
    // 7F0AC4F0: li      r3, 1869
    ctx->gpr[3] = (u32)(s32)(1869);

label_7F0AC4F4:
    ctx->pc = 0x7F0AC4F4u;
    // 7F0AC4F4: li      r4, 1869
    ctx->gpr[4] = (u32)(s32)(1869);

label_7F0AC4F8:
    ctx->pc = 0x7F0AC4F8u;
    // 7F0AC4F8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0AC4FC:
    ctx->pc = 0x7F0AC4FCu;
    // 7F0AC4FC: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F0AC500:
    ctx->pc = 0x7F0AC500u;
    // 7F0AC500: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AC504:
    ctx->pc = 0x7F0AC504u;
    // 7F0AC504: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0AC508:
    ctx->pc = 0x7F0AC508u;
    // 7F0AC508: bl      0x800516D4
    {
            ctx->lr = 0x7F0AC50Cu;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F0AC50C:
    ctx->pc = 0x7F0AC50Cu;
    ctx->downcount -= 4;
    // 7F0AC50C: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AC510:
    ctx->pc = 0x7F0AC510u;
    // 7F0AC510: li      r3, 1869
    ctx->gpr[3] = (u32)(s32)(1869);

label_7F0AC514:
    ctx->pc = 0x7F0AC514u;
    // 7F0AC514: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AC518:
    ctx->pc = 0x7F0AC518u;
    // 7F0AC518: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AC51Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AC51C:
    ctx->pc = 0x7F0AC51Cu;
    ctx->downcount -= 2;
    // 7F0AC51C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC520:
    ctx->pc = 0x7F0AC520u;
    // 7F0AC520: bl      0x7F0ACA7C
    {
            ctx->lr = 0x7F0AC524u;
            goto label_7F0ACA7C;
    }

label_7F0AC524:
    ctx->pc = 0x7F0AC524u;
    ctx->downcount -= 2;
    // 7F0AC524: cmpwi   r3, 0
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

label_7F0AC528:
    ctx->pc = 0x7F0AC528u;
    // 7F0AC528: bc    4, 2, 0x7F0AC56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC56C;
        }
    }

label_7F0AC52C:
    ctx->pc = 0x7F0AC52Cu;
    ctx->downcount -= 2;
    // 7F0AC52C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC530:
    ctx->pc = 0x7F0AC530u;
    // 7F0AC530: bl      0x7F0ACC94
    {
            ctx->lr = 0x7F0AC534u;
            goto label_7F0ACC94;
    }

label_7F0AC534:
    ctx->pc = 0x7F0AC534u;
    ctx->downcount -= 2;
    // 7F0AC534: cmpwi   r3, 0
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

label_7F0AC538:
    ctx->pc = 0x7F0AC538u;
    // 7F0AC538: bc    4, 2, 0x7F0AC56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC56C;
        }
    }

label_7F0AC53C:
    ctx->pc = 0x7F0AC53Cu;
    ctx->downcount -= 5;
    // 7F0AC53C: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC540:
    ctx->pc = 0x7F0AC540u;
    // 7F0AC540: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC544:
    ctx->pc = 0x7F0AC544u;
    // 7F0AC544: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC548:
    ctx->pc = 0x7F0AC548u;
    // 7F0AC548: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AC54C:
    ctx->pc = 0x7F0AC54Cu;
    // 7F0AC54C: bc    12, 2, 0x7F0AC564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC564;
        }
    }

label_7F0AC550:
    ctx->pc = 0x7F0AC550u;
    ctx->downcount -= 4;
    // 7F0AC550: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC554:
    ctx->pc = 0x7F0AC554u;
    // 7F0AC554: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC558:
    ctx->pc = 0x7F0AC558u;
    // 7F0AC558: addi    r4, r4, -14976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14976);

label_7F0AC55C:
    ctx->pc = 0x7F0AC55Cu;
    // 7F0AC55C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC560u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC560:
    ctx->pc = 0x7F0AC560u;
    ctx->downcount -= 1;
    // 7F0AC560: b       0x7F0AC56C
    {
            goto label_7F0AC56C;
    }

label_7F0AC564:
    ctx->pc = 0x7F0AC564u;
    ctx->downcount -= 2;
    // 7F0AC564: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC568:
    ctx->pc = 0x7F0AC568u;
    // 7F0AC568: bl      0x7F0AC92C
    {
            ctx->lr = 0x7F0AC56Cu;
            goto label_7F0AC92C;
    }

label_7F0AC56C:
    ctx->pc = 0x7F0AC56Cu;
    ctx->downcount -= 16;
    // 7F0AC56C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC570:
    ctx->pc = 0x7F0AC570u;
    // 7F0AC570: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC574:
    ctx->pc = 0x7F0AC574u;
    // 7F0AC574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC578:
    ctx->pc = 0x7F0AC578u;
    // 7F0AC578: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC57C:
    ctx->pc = 0x7F0AC57Cu;
    // 7F0AC57C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC580:
    ctx->pc = 0x7F0AC580u;
    ctx->downcount -= 17;
    // 7F0AC580: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC584:
    ctx->pc = 0x7F0AC584u;
    // 7F0AC584: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC588:
    ctx->pc = 0x7F0AC588u;
    // 7F0AC588: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC58C:
    ctx->pc = 0x7F0AC58Cu;
    // 7F0AC58C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC590:
    ctx->pc = 0x7F0AC590u;
    // 7F0AC590: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC594:
    ctx->pc = 0x7F0AC594u;
    // 7F0AC594: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC598:
    ctx->pc = 0x7F0AC598u;
    // 7F0AC598: bl      0x7F0A90A8
    {
            ctx->lr = 0x7F0AC59Cu;
            ctx->pc = 0x7F0A90A8u;
            return;
    }

label_7F0AC59C:
    ctx->pc = 0x7F0AC59Cu;
    ctx->downcount -= 2;
    // 7F0AC59C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC5A0:
    ctx->pc = 0x7F0AC5A0u;
    // 7F0AC5A0: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AC5A4u;
            ctx->pc = 0x7F0A91B4u;
            return;
    }

label_7F0AC5A4:
    ctx->pc = 0x7F0AC5A4u;
    ctx->downcount -= 4;
    // 7F0AC5A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AC5A8:
    ctx->pc = 0x7F0AC5A8u;
    // 7F0AC5A8: cmpwi   r31, 0
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

label_7F0AC5AC:
    ctx->pc = 0x7F0AC5ACu;
    // 7F0AC5AC: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC5B0:
    ctx->pc = 0x7F0AC5B0u;
    // 7F0AC5B0: bc    4, 2, 0x7F0AC5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC5C4;
        }
    }

label_7F0AC5B4:
    ctx->pc = 0x7F0AC5B4u;
    ctx->downcount -= 4;
    // 7F0AC5B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC5B8:
    ctx->pc = 0x7F0AC5B8u;
    // 7F0AC5B8: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_7F0AC5BC:
    ctx->pc = 0x7F0AC5BCu;
    // 7F0AC5BC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC5C0:
    ctx->pc = 0x7F0AC5C0u;
    // 7F0AC5C0: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AC5C4u;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0AC5C4:
    ctx->pc = 0x7F0AC5C4u;
    ctx->downcount -= 2;
    // 7F0AC5C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC5C8:
    ctx->pc = 0x7F0AC5C8u;
    // 7F0AC5C8: bl      0x7F0ACA7C
    {
            ctx->lr = 0x7F0AC5CCu;
            goto label_7F0ACA7C;
    }

label_7F0AC5CC:
    ctx->pc = 0x7F0AC5CCu;
    ctx->downcount -= 2;
    // 7F0AC5CC: cmpwi   r3, 0
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

label_7F0AC5D0:
    ctx->pc = 0x7F0AC5D0u;
    // 7F0AC5D0: bc    4, 2, 0x7F0AC620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC620;
        }
    }

label_7F0AC5D4:
    ctx->pc = 0x7F0AC5D4u;
    ctx->downcount -= 2;
    // 7F0AC5D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC5D8:
    ctx->pc = 0x7F0AC5D8u;
    // 7F0AC5D8: bl      0x7F0ACC94
    {
            ctx->lr = 0x7F0AC5DCu;
            goto label_7F0ACC94;
    }

label_7F0AC5DC:
    ctx->pc = 0x7F0AC5DCu;
    ctx->downcount -= 2;
    // 7F0AC5DC: cmpwi   r3, 0
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

label_7F0AC5E0:
    ctx->pc = 0x7F0AC5E0u;
    // 7F0AC5E0: bc    4, 2, 0x7F0AC620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC620;
        }
    }

label_7F0AC5E4:
    ctx->pc = 0x7F0AC5E4u;
    ctx->downcount -= 2;
    // 7F0AC5E4: cmpwi   r31, 180
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(180);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AC5E8:
    ctx->pc = 0x7F0AC5E8u;
    // 7F0AC5E8: bc    4, 1, 0x7F0AC618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC618;
        }
    }

label_7F0AC5EC:
    ctx->pc = 0x7F0AC5ECu;
    ctx->downcount -= 3;
    // 7F0AC5EC: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC5F0:
    ctx->pc = 0x7F0AC5F0u;
    // 7F0AC5F0: cmpwi   r0, 0
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

label_7F0AC5F4:
    ctx->pc = 0x7F0AC5F4u;
    // 7F0AC5F4: bc    4, 1, 0x7F0AC618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC618;
        }
    }

label_7F0AC5F8:
    ctx->pc = 0x7F0AC5F8u;
    ctx->downcount -= 3;
    // 7F0AC5F8: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC5FC:
    ctx->pc = 0x7F0AC5FCu;
    // 7F0AC5FC: cmpwi   r0, 0
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

label_7F0AC600:
    ctx->pc = 0x7F0AC600u;
    // 7F0AC600: bc    4, 1, 0x7F0AC618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC618;
        }
    }

label_7F0AC604:
    ctx->pc = 0x7F0AC604u;
    ctx->downcount -= 4;
    // 7F0AC604: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC608:
    ctx->pc = 0x7F0AC608u;
    // 7F0AC608: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC60C:
    ctx->pc = 0x7F0AC60Cu;
    // 7F0AC60C: addi    r4, r4, -14796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14796);

label_7F0AC610:
    ctx->pc = 0x7F0AC610u;
    // 7F0AC610: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC614u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC614:
    ctx->pc = 0x7F0AC614u;
    ctx->downcount -= 1;
    // 7F0AC614: b       0x7F0AC620
    {
            goto label_7F0AC620;
    }

label_7F0AC618:
    ctx->pc = 0x7F0AC618u;
    ctx->downcount -= 2;
    // 7F0AC618: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC61C:
    ctx->pc = 0x7F0AC61Cu;
    // 7F0AC61C: bl      0x7F0AC92C
    {
            ctx->lr = 0x7F0AC620u;
            goto label_7F0AC92C;
    }

label_7F0AC620:
    ctx->pc = 0x7F0AC620u;
    ctx->downcount -= 16;
    // 7F0AC620: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC624:
    ctx->pc = 0x7F0AC624u;
    // 7F0AC624: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC628:
    ctx->pc = 0x7F0AC628u;
    // 7F0AC628: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC62C:
    ctx->pc = 0x7F0AC62Cu;
    // 7F0AC62C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC630:
    ctx->pc = 0x7F0AC630u;
    // 7F0AC630: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC634:
    ctx->pc = 0x7F0AC634u;
    ctx->downcount -= 17;
    // 7F0AC634: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC638:
    ctx->pc = 0x7F0AC638u;
    // 7F0AC638: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC63C:
    ctx->pc = 0x7F0AC63Cu;
    // 7F0AC63C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC640:
    ctx->pc = 0x7F0AC640u;
    // 7F0AC640: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC644:
    ctx->pc = 0x7F0AC644u;
    // 7F0AC644: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC648:
    ctx->pc = 0x7F0AC648u;
    // 7F0AC648: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC64C:
    ctx->pc = 0x7F0AC64Cu;
    // 7F0AC64C: bl      0x7F0A90A8
    {
            ctx->lr = 0x7F0AC650u;
            ctx->pc = 0x7F0A90A8u;
            return;
    }

label_7F0AC650:
    ctx->pc = 0x7F0AC650u;
    ctx->downcount -= 2;
    // 7F0AC650: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC654:
    ctx->pc = 0x7F0AC654u;
    // 7F0AC654: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AC658u;
            ctx->pc = 0x7F0A91B4u;
            return;
    }

label_7F0AC658:
    ctx->pc = 0x7F0AC658u;
    ctx->downcount -= 4;
    // 7F0AC658: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AC65C:
    ctx->pc = 0x7F0AC65Cu;
    // 7F0AC65C: cmpwi   r31, 0
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

label_7F0AC660:
    ctx->pc = 0x7F0AC660u;
    // 7F0AC660: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC664:
    ctx->pc = 0x7F0AC664u;
    // 7F0AC664: bc    4, 2, 0x7F0AC678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC678;
        }
    }

label_7F0AC668:
    ctx->pc = 0x7F0AC668u;
    ctx->downcount -= 4;
    // 7F0AC668: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC66C:
    ctx->pc = 0x7F0AC66Cu;
    // 7F0AC66C: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F0AC670:
    ctx->pc = 0x7F0AC670u;
    // 7F0AC670: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC674:
    ctx->pc = 0x7F0AC674u;
    // 7F0AC674: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AC678u;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0AC678:
    ctx->pc = 0x7F0AC678u;
    ctx->downcount -= 2;
    // 7F0AC678: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC67C:
    ctx->pc = 0x7F0AC67Cu;
    // 7F0AC67C: bl      0x7F0ACA7C
    {
            ctx->lr = 0x7F0AC680u;
            goto label_7F0ACA7C;
    }

label_7F0AC680:
    ctx->pc = 0x7F0AC680u;
    ctx->downcount -= 2;
    // 7F0AC680: cmpwi   r3, 0
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

label_7F0AC684:
    ctx->pc = 0x7F0AC684u;
    // 7F0AC684: bc    4, 2, 0x7F0AC6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC6D8;
        }
    }

label_7F0AC688:
    ctx->pc = 0x7F0AC688u;
    ctx->downcount -= 2;
    // 7F0AC688: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC68C:
    ctx->pc = 0x7F0AC68Cu;
    // 7F0AC68C: bl      0x7F0ACC94
    {
            ctx->lr = 0x7F0AC690u;
            goto label_7F0ACC94;
    }

label_7F0AC690:
    ctx->pc = 0x7F0AC690u;
    ctx->downcount -= 2;
    // 7F0AC690: cmpwi   r3, 0
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

label_7F0AC694:
    ctx->pc = 0x7F0AC694u;
    // 7F0AC694: bc    4, 2, 0x7F0AC6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC6D8;
        }
    }

label_7F0AC698:
    ctx->pc = 0x7F0AC698u;
    ctx->downcount -= 2;
    // 7F0AC698: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC69C:
    ctx->pc = 0x7F0AC69Cu;
    // 7F0AC69C: bl      0x7F0AC92C
    {
            ctx->lr = 0x7F0AC6A0u;
            goto label_7F0AC92C;
    }

label_7F0AC6A0:
    ctx->pc = 0x7F0AC6A0u;
    ctx->downcount -= 2;
    // 7F0AC6A0: cmpwi   r31, 120
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AC6A4:
    ctx->pc = 0x7F0AC6A4u;
    // 7F0AC6A4: bc    4, 2, 0x7F0AC6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC6D8;
        }
    }

label_7F0AC6A8:
    ctx->pc = 0x7F0AC6A8u;
    ctx->downcount -= 12;
    // 7F0AC6A8: lwz     r6, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AC6AC:
    ctx->pc = 0x7F0AC6ACu;
    // 7F0AC6AC: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AC6B0:
    ctx->pc = 0x7F0AC6B0u;
    // 7F0AC6B0: addi    r4, r3, -14612
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14612);

label_7F0AC6B4:
    ctx->pc = 0x7F0AC6B4u;
    // 7F0AC6B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AC6B8:
    ctx->pc = 0x7F0AC6B8u;
    // 7F0AC6B8: lwz     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC6BC:
    ctx->pc = 0x7F0AC6BCu;
    // 7F0AC6BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC6C0:
    ctx->pc = 0x7F0AC6C0u;
    // 7F0AC6C0: oris    r5, r5, 0x0002
    ctx->gpr[5] = ctx->gpr[5] | (0x0002u << 16);

label_7F0AC6C4:
    ctx->pc = 0x7F0AC6C4u;
    // 7F0AC6C4: ori     r5, r5, 0x0001
    ctx->gpr[5] = ctx->gpr[5] | 0x0001u;

label_7F0AC6C8:
    ctx->pc = 0x7F0AC6C8u;
    // 7F0AC6C8: stw     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AC6CC:
    ctx->pc = 0x7F0AC6CCu;
    // 7F0AC6CC: stw     r0, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC6D0:
    ctx->pc = 0x7F0AC6D0u;
    // 7F0AC6D0: stw     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC6D4:
    ctx->pc = 0x7F0AC6D4u;
    // 7F0AC6D4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC6D8u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC6D8:
    ctx->pc = 0x7F0AC6D8u;
    ctx->downcount -= 16;
    // 7F0AC6D8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC6DC:
    ctx->pc = 0x7F0AC6DCu;
    // 7F0AC6DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC6E0:
    ctx->pc = 0x7F0AC6E0u;
    // 7F0AC6E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC6E4:
    ctx->pc = 0x7F0AC6E4u;
    // 7F0AC6E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC6E8:
    ctx->pc = 0x7F0AC6E8u;
    // 7F0AC6E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC6EC:
    ctx->pc = 0x7F0AC6ECu;
    ctx->downcount -= 17;
    // 7F0AC6EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC6F0:
    ctx->pc = 0x7F0AC6F0u;
    // 7F0AC6F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC6F4:
    ctx->pc = 0x7F0AC6F4u;
    // 7F0AC6F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC6F8:
    ctx->pc = 0x7F0AC6F8u;
    // 7F0AC6F8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC6FC:
    ctx->pc = 0x7F0AC6FCu;
    // 7F0AC6FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC700:
    ctx->pc = 0x7F0AC700u;
    // 7F0AC700: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC704:
    ctx->pc = 0x7F0AC704u;
    // 7F0AC704: bl      0x7F0A90A8
    {
            ctx->lr = 0x7F0AC708u;
            ctx->pc = 0x7F0A90A8u;
            return;
    }

label_7F0AC708:
    ctx->pc = 0x7F0AC708u;
    ctx->downcount -= 2;
    // 7F0AC708: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC70C:
    ctx->pc = 0x7F0AC70Cu;
    // 7F0AC70C: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AC710u;
            ctx->pc = 0x7F0A91B4u;
            return;
    }

label_7F0AC710:
    ctx->pc = 0x7F0AC710u;
    ctx->downcount -= 4;
    // 7F0AC710: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AC714:
    ctx->pc = 0x7F0AC714u;
    // 7F0AC714: cmpwi   r31, 0
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

label_7F0AC718:
    ctx->pc = 0x7F0AC718u;
    // 7F0AC718: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC71C:
    ctx->pc = 0x7F0AC71Cu;
    // 7F0AC71C: bc    4, 2, 0x7F0AC730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC730;
        }
    }

label_7F0AC720:
    ctx->pc = 0x7F0AC720u;
    ctx->downcount -= 4;
    // 7F0AC720: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC724:
    ctx->pc = 0x7F0AC724u;
    // 7F0AC724: li      r4, 23
    ctx->gpr[4] = (u32)(s32)(23);

label_7F0AC728:
    ctx->pc = 0x7F0AC728u;
    // 7F0AC728: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC72C:
    ctx->pc = 0x7F0AC72Cu;
    // 7F0AC72C: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AC730u;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0AC730:
    ctx->pc = 0x7F0AC730u;
    ctx->downcount -= 2;
    // 7F0AC730: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC734:
    ctx->pc = 0x7F0AC734u;
    // 7F0AC734: bl      0x7F0ACA7C
    {
            ctx->lr = 0x7F0AC738u;
            goto label_7F0ACA7C;
    }

label_7F0AC738:
    ctx->pc = 0x7F0AC738u;
    ctx->downcount -= 2;
    // 7F0AC738: cmpwi   r3, 0
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

label_7F0AC73C:
    ctx->pc = 0x7F0AC73Cu;
    // 7F0AC73C: bc    4, 2, 0x7F0AC784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC784;
        }
    }

label_7F0AC740:
    ctx->pc = 0x7F0AC740u;
    ctx->downcount -= 5;
    // 7F0AC740: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC744:
    ctx->pc = 0x7F0AC744u;
    // 7F0AC744: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC748:
    ctx->pc = 0x7F0AC748u;
    // 7F0AC748: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC74C:
    ctx->pc = 0x7F0AC74Cu;
    // 7F0AC74C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AC750:
    ctx->pc = 0x7F0AC750u;
    // 7F0AC750: bc    12, 2, 0x7F0AC784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC784;
        }
    }

label_7F0AC754:
    ctx->pc = 0x7F0AC754u;
    ctx->downcount -= 3;
    // 7F0AC754: lwz     r0, 3740(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC758:
    ctx->pc = 0x7F0AC758u;
    // 7F0AC758: cmpwi   r0, 500
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

label_7F0AC75C:
    ctx->pc = 0x7F0AC75Cu;
    // 7F0AC75C: bc    4, 1, 0x7F0AC774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC774;
        }
    }

label_7F0AC760:
    ctx->pc = 0x7F0AC760u;
    ctx->downcount -= 4;
    // 7F0AC760: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC764:
    ctx->pc = 0x7F0AC764u;
    // 7F0AC764: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC768:
    ctx->pc = 0x7F0AC768u;
    // 7F0AC768: addi    r4, r4, -23888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23888);

label_7F0AC76C:
    ctx->pc = 0x7F0AC76Cu;
    // 7F0AC76C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC770u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC770:
    ctx->pc = 0x7F0AC770u;
    ctx->downcount -= 1;
    // 7F0AC770: b       0x7F0AC784
    {
            goto label_7F0AC784;
    }

label_7F0AC774:
    ctx->pc = 0x7F0AC774u;
    ctx->downcount -= 4;
    // 7F0AC774: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC778:
    ctx->pc = 0x7F0AC778u;
    // 7F0AC778: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC77C:
    ctx->pc = 0x7F0AC77Cu;
    // 7F0AC77C: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AC780:
    ctx->pc = 0x7F0AC780u;
    // 7F0AC780: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC784u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC784:
    ctx->pc = 0x7F0AC784u;
    ctx->downcount -= 16;
    // 7F0AC784: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC788:
    ctx->pc = 0x7F0AC788u;
    // 7F0AC788: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC78C:
    ctx->pc = 0x7F0AC78Cu;
    // 7F0AC78C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC790:
    ctx->pc = 0x7F0AC790u;
    // 7F0AC790: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC794:
    ctx->pc = 0x7F0AC794u;
    // 7F0AC794: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC798:
    ctx->pc = 0x7F0AC798u;
    ctx->downcount -= 17;
    // 7F0AC798: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC79C:
    ctx->pc = 0x7F0AC79Cu;
    // 7F0AC79C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC7A0:
    ctx->pc = 0x7F0AC7A0u;
    // 7F0AC7A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC7A4:
    ctx->pc = 0x7F0AC7A4u;
    // 7F0AC7A4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC7A8:
    ctx->pc = 0x7F0AC7A8u;
    // 7F0AC7A8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC7AC:
    ctx->pc = 0x7F0AC7ACu;
    // 7F0AC7AC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC7B0:
    ctx->pc = 0x7F0AC7B0u;
    // 7F0AC7B0: bl      0x7F0A90A8
    {
            ctx->lr = 0x7F0AC7B4u;
            ctx->pc = 0x7F0A90A8u;
            return;
    }

label_7F0AC7B4:
    ctx->pc = 0x7F0AC7B4u;
    ctx->downcount -= 2;
    // 7F0AC7B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC7B8:
    ctx->pc = 0x7F0AC7B8u;
    // 7F0AC7B8: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AC7BCu;
            ctx->pc = 0x7F0A91B4u;
            return;
    }

label_7F0AC7BC:
    ctx->pc = 0x7F0AC7BCu;
    ctx->downcount -= 4;
    // 7F0AC7BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AC7C0:
    ctx->pc = 0x7F0AC7C0u;
    // 7F0AC7C0: cmpwi   r31, 0
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

label_7F0AC7C4:
    ctx->pc = 0x7F0AC7C4u;
    // 7F0AC7C4: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC7C8:
    ctx->pc = 0x7F0AC7C8u;
    // 7F0AC7C8: bc    4, 2, 0x7F0AC7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC7DC;
        }
    }

label_7F0AC7CC:
    ctx->pc = 0x7F0AC7CCu;
    ctx->downcount -= 4;
    // 7F0AC7CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC7D0:
    ctx->pc = 0x7F0AC7D0u;
    // 7F0AC7D0: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_7F0AC7D4:
    ctx->pc = 0x7F0AC7D4u;
    // 7F0AC7D4: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC7D8:
    ctx->pc = 0x7F0AC7D8u;
    // 7F0AC7D8: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AC7DCu;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0AC7DC:
    ctx->pc = 0x7F0AC7DCu;
    ctx->downcount -= 2;
    // 7F0AC7DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC7E0:
    ctx->pc = 0x7F0AC7E0u;
    // 7F0AC7E0: bl      0x7F0ACA7C
    {
            ctx->lr = 0x7F0AC7E4u;
            goto label_7F0ACA7C;
    }

label_7F0AC7E4:
    ctx->pc = 0x7F0AC7E4u;
    ctx->downcount -= 2;
    // 7F0AC7E4: cmpwi   r3, 0
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

label_7F0AC7E8:
    ctx->pc = 0x7F0AC7E8u;
    // 7F0AC7E8: bc    4, 2, 0x7F0AC830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC830;
        }
    }

label_7F0AC7EC:
    ctx->pc = 0x7F0AC7ECu;
    ctx->downcount -= 5;
    // 7F0AC7EC: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC7F0:
    ctx->pc = 0x7F0AC7F0u;
    // 7F0AC7F0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC7F4:
    ctx->pc = 0x7F0AC7F4u;
    // 7F0AC7F4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC7F8:
    ctx->pc = 0x7F0AC7F8u;
    // 7F0AC7F8: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AC7FC:
    ctx->pc = 0x7F0AC7FCu;
    // 7F0AC7FC: bc    12, 2, 0x7F0AC830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC830;
        }
    }

label_7F0AC800:
    ctx->pc = 0x7F0AC800u;
    ctx->downcount -= 3;
    // 7F0AC800: lwz     r0, 3740(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC804:
    ctx->pc = 0x7F0AC804u;
    // 7F0AC804: cmpwi   r0, 500
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

label_7F0AC808:
    ctx->pc = 0x7F0AC808u;
    // 7F0AC808: bc    4, 1, 0x7F0AC820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC820;
        }
    }

label_7F0AC80C:
    ctx->pc = 0x7F0AC80Cu;
    ctx->downcount -= 4;
    // 7F0AC80C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC810:
    ctx->pc = 0x7F0AC810u;
    // 7F0AC810: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC814:
    ctx->pc = 0x7F0AC814u;
    // 7F0AC814: addi    r4, r4, -23888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23888);

label_7F0AC818:
    ctx->pc = 0x7F0AC818u;
    // 7F0AC818: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC81Cu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC81C:
    ctx->pc = 0x7F0AC81Cu;
    ctx->downcount -= 1;
    // 7F0AC81C: b       0x7F0AC830
    {
            goto label_7F0AC830;
    }

label_7F0AC820:
    ctx->pc = 0x7F0AC820u;
    ctx->downcount -= 4;
    // 7F0AC820: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC824:
    ctx->pc = 0x7F0AC824u;
    // 7F0AC824: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AC828:
    ctx->pc = 0x7F0AC828u;
    // 7F0AC828: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AC82C:
    ctx->pc = 0x7F0AC82Cu;
    // 7F0AC82C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC830u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC830:
    ctx->pc = 0x7F0AC830u;
    ctx->downcount -= 16;
    // 7F0AC830: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC834:
    ctx->pc = 0x7F0AC834u;
    // 7F0AC834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC838:
    ctx->pc = 0x7F0AC838u;
    // 7F0AC838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC83C:
    ctx->pc = 0x7F0AC83Cu;
    // 7F0AC83C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC840:
    ctx->pc = 0x7F0AC840u;
    // 7F0AC840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC844:
    ctx->pc = 0x7F0AC844u;
    ctx->downcount -= 19;
    // 7F0AC844: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC848:
    ctx->pc = 0x7F0AC848u;
    // 7F0AC848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC84C:
    ctx->pc = 0x7F0AC84Cu;
    // 7F0AC84C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC850:
    ctx->pc = 0x7F0AC850u;
    // 7F0AC850: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F0AC854:
    ctx->pc = 0x7F0AC854u;
    // 7F0AC854: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC858:
    ctx->pc = 0x7F0AC858u;
    // 7F0AC858: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC85C:
    ctx->pc = 0x7F0AC85Cu;
    // 7F0AC85C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC860:
    ctx->pc = 0x7F0AC860u;
    // 7F0AC860: stw     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC864:
    ctx->pc = 0x7F0AC864u;
    // 7F0AC864: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AC868u;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0AC868:
    ctx->pc = 0x7F0AC868u;
    ctx->downcount -= 7;
    // 7F0AC868: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC868u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC86C:
    ctx->pc = 0x7F0AC86Cu;
    // 7F0AC86C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC870:
    ctx->pc = 0x7F0AC870u;
    // 7F0AC870: lfs     f1, 192(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC870u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC874:
    ctx->pc = 0x7F0AC874u;
    // 7F0AC874: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC874u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC878:
    ctx->pc = 0x7F0AC878u;
    // 7F0AC878: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AC878u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AC87C:
    ctx->pc = 0x7F0AC87Cu;
    // 7F0AC87C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC87Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AC880:
    ctx->pc = 0x7F0AC880u;
    // 7F0AC880: bc    4, 0, 0x7F0AC890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC890;
        }
    }

label_7F0AC884:
    ctx->pc = 0x7F0AC884u;
    ctx->downcount -= 3;
    // 7F0AC884: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC888:
    ctx->pc = 0x7F0AC888u;
    // 7F0AC888: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AC88C:
    ctx->pc = 0x7F0AC88Cu;
    // 7F0AC88C: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AC890u;
            ctx->pc = 0x7F0AB1F4u;
            return;
    }

label_7F0AC890:
    ctx->pc = 0x7F0AC890u;
    ctx->downcount -= 2;
    // 7F0AC890: cmpwi   r30, 0
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

label_7F0AC894:
    ctx->pc = 0x7F0AC894u;
    // 7F0AC894: bc    4, 2, 0x7F0AC8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC8E4;
        }
    }

label_7F0AC898:
    ctx->pc = 0x7F0AC898u;
    ctx->downcount -= 5;
    // 7F0AC898: lha     r0, 3602(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AC89C:
    ctx->pc = 0x7F0AC89Cu;
    // 7F0AC89C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC8A0:
    ctx->pc = 0x7F0AC8A0u;
    // 7F0AC8A0: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F0AC8A4:
    ctx->pc = 0x7F0AC8A4u;
    // 7F0AC8A4: cmpwi   r0, 0
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

label_7F0AC8A8:
    ctx->pc = 0x7F0AC8A8u;
    // 7F0AC8A8: bc    4, 1, 0x7F0AC8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC8B0;
        }
    }

label_7F0AC8AC:
    ctx->pc = 0x7F0AC8ACu;
    ctx->downcount -= 1;
    // 7F0AC8AC: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F0AC8B0:
    ctx->pc = 0x7F0AC8B0u;
    ctx->downcount -= 2;
    // 7F0AC8B0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AC8B4:
    ctx->pc = 0x7F0AC8B4u;
    // 7F0AC8B4: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AC8B8u;
            ctx->pc = 0x7F0AB1A4u;
            return;
    }

label_7F0AC8B8:
    ctx->pc = 0x7F0AC8B8u;
    ctx->downcount -= 3;
    // 7F0AC8B8: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AC8BC:
    ctx->pc = 0x7F0AC8BCu;
    // 7F0AC8BC: cmplwi  r4, 0x0000
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

label_7F0AC8C0:
    ctx->pc = 0x7F0AC8C0u;
    // 7F0AC8C0: bc    12, 2, 0x7F0AC8DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC8DC;
        }
    }

label_7F0AC8C4:
    ctx->pc = 0x7F0AC8C4u;
    ctx->downcount -= 6;
    // 7F0AC8C4: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC8C8:
    ctx->pc = 0x7F0AC8C8u;
    // 7F0AC8C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AC8CC:
    ctx->pc = 0x7F0AC8CCu;
    // 7F0AC8CC: oris    r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | (0x0002u << 16);

label_7F0AC8D0:
    ctx->pc = 0x7F0AC8D0u;
    // 7F0AC8D0: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0AC8D4:
    ctx->pc = 0x7F0AC8D4u;
    // 7F0AC8D4: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AC8D8:
    ctx->pc = 0x7F0AC8D8u;
    // 7F0AC8D8: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC8DC:
    ctx->pc = 0x7F0AC8DCu;
    ctx->downcount -= 2;
    // 7F0AC8DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AC8E0:
    ctx->pc = 0x7F0AC8E0u;
    // 7F0AC8E0: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC8E4:
    ctx->pc = 0x7F0AC8E4u;
    ctx->downcount -= 5;
    // 7F0AC8E4: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC8E8:
    ctx->pc = 0x7F0AC8E8u;
    // 7F0AC8E8: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC8EC:
    ctx->pc = 0x7F0AC8ECu;
    // 7F0AC8EC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC8F0:
    ctx->pc = 0x7F0AC8F0u;
    // 7F0AC8F0: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AC8F4:
    ctx->pc = 0x7F0AC8F4u;
    // 7F0AC8F4: bc    4, 2, 0x7F0AC908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC908;
        }
    }

label_7F0AC8F8:
    ctx->pc = 0x7F0AC8F8u;
    ctx->downcount -= 4;
    // 7F0AC8F8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AC8FC:
    ctx->pc = 0x7F0AC8FCu;
    // 7F0AC8FC: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC900:
    ctx->pc = 0x7F0AC900u;
    // 7F0AC900: cmpwi   r0, 2
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

label_7F0AC904:
    ctx->pc = 0x7F0AC904u;
    // 7F0AC904: bc    4, 2, 0x7F0AC918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC918;
        }
    }

label_7F0AC908:
    ctx->pc = 0x7F0AC908u;
    ctx->downcount -= 4;
    // 7F0AC908: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AC90C:
    ctx->pc = 0x7F0AC90Cu;
    // 7F0AC90C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AC910:
    ctx->pc = 0x7F0AC910u;
    // 7F0AC910: addi    r4, r4, -19940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19940);

label_7F0AC914:
    ctx->pc = 0x7F0AC914u;
    // 7F0AC914: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC918u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0AC918:
    ctx->pc = 0x7F0AC918u;
    ctx->downcount -= 16;
    // 7F0AC918: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AC91C:
    ctx->pc = 0x7F0AC91Cu;
    // 7F0AC91C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC920:
    ctx->pc = 0x7F0AC920u;
    // 7F0AC920: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC924:
    ctx->pc = 0x7F0AC924u;
    // 7F0AC924: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC928:
    ctx->pc = 0x7F0AC928u;
    // 7F0AC928: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AC92C:
    ctx->pc = 0x7F0AC92Cu;
    ctx->downcount -= 28;
    // 7F0AC92C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC930:
    ctx->pc = 0x7F0AC930u;
    // 7F0AC930: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC934:
    ctx->pc = 0x7F0AC934u;
    // 7F0AC934: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC938:
    ctx->pc = 0x7F0AC938u;
    // 7F0AC938: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC93C:
    ctx->pc = 0x7F0AC93Cu;
    // 7F0AC93C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC940:
    ctx->pc = 0x7F0AC940u;
    // 7F0AC940: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC944:
    ctx->pc = 0x7F0AC944u;
    // 7F0AC944: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AC948:
    ctx->pc = 0x7F0AC948u;
    // 7F0AC948: lwz     r30, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0AC94C:
    ctx->pc = 0x7F0AC94Cu;
    // 7F0AC94C: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC950:
    ctx->pc = 0x7F0AC950u;
    // 7F0AC950: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F0AC954:
    ctx->pc = 0x7F0AC954u;
    // 7F0AC954: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC958:
    ctx->pc = 0x7F0AC958u;
    // 7F0AC958: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AC95C:
    ctx->pc = 0x7F0AC95Cu;
    // 7F0AC95C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC960:
    ctx->pc = 0x7F0AC960u;
    // 7F0AC960: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AC964:
    ctx->pc = 0x7F0AC964u;
    // 7F0AC964: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC968:
    ctx->pc = 0x7F0AC968u;
    // 7F0AC968: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AC96C:
    ctx->pc = 0x7F0AC96Cu;
    // 7F0AC96C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC970:
    ctx->pc = 0x7F0AC970u;
    // 7F0AC970: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AC974u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AC974:
    ctx->pc = 0x7F0AC974u;
    ctx->downcount -= 5;
    // 7F0AC974: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC978:
    ctx->pc = 0x7F0AC978u;
    // 7F0AC978: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC97C:
    ctx->pc = 0x7F0AC97Cu;
    // 7F0AC97C: addi    r3, r3, -32648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32648);

label_7F0AC980:
    ctx->pc = 0x7F0AC980u;
    // 7F0AC980: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AC984:
    ctx->pc = 0x7F0AC984u;
    // 7F0AC984: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0AC988u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0AC988:
    ctx->pc = 0x7F0AC988u;
    ctx->downcount -= 11;
    // 7F0AC988: lfs     f1, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC988u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC98C:
    ctx->pc = 0x7F0AC98Cu;
    // 7F0AC98C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AC990:
    ctx->pc = 0x7F0AC990u;
    // 7F0AC990: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC990u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC994:
    ctx->pc = 0x7F0AC994u;
    // 7F0AC994: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC998:
    ctx->pc = 0x7F0AC998u;
    // 7F0AC998: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0AC99C:
    ctx->pc = 0x7F0AC99Cu;
    // 7F0AC99C: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F0AC9A0:
    ctx->pc = 0x7F0AC9A0u;
    // 7F0AC9A0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9A0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0AC9A4:
    ctx->pc = 0x7F0AC9A4u;
    // 7F0AC9A4: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F0AC9A8:
    ctx->pc = 0x7F0AC9A8u;
    // 7F0AC9A8: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AC9AC:
    ctx->pc = 0x7F0AC9ACu;
    // 7F0AC9AC: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC9B0:
    ctx->pc = 0x7F0AC9B0u;
    // 7F0AC9B0: bl      0x7F10B744
    {
            ctx->lr = 0x7F0AC9B4u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0AC9B4:
    ctx->pc = 0x7F0AC9B4u;
    ctx->downcount -= 2;
    // 7F0AC9B4: cmpwi   r3, 0
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

label_7F0AC9B8:
    ctx->pc = 0x7F0AC9B8u;
    // 7F0AC9B8: bc    12, 2, 0x7F0ACA14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACA14;
        }
    }

label_7F0AC9BC:
    ctx->pc = 0x7F0AC9BCu;
    ctx->downcount -= 2;
    // 7F0AC9BC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0AC9C0:
    ctx->pc = 0x7F0AC9C0u;
    // 7F0AC9C0: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F0AC9C4u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F0AC9C4:
    ctx->pc = 0x7F0AC9C4u;
    ctx->downcount -= 2;
    // 7F0AC9C4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0AC9C8:
    ctx->pc = 0x7F0AC9C8u;
    // 7F0AC9C8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0AC9CCu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0AC9CC:
    ctx->pc = 0x7F0AC9CCu;
    ctx->downcount -= 8;
    // 7F0AC9CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC9D0:
    ctx->pc = 0x7F0AC9D0u;
    // 7F0AC9D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AC9D4:
    ctx->pc = 0x7F0AC9D4u;
    // 7F0AC9D4: lfs     f2, -5288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC9D8:
    ctx->pc = 0x7F0AC9D8u;
    // 7F0AC9D8: lfs     f0, -5284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AC9DC:
    ctx->pc = 0x7F0AC9DCu;
    // 7F0AC9DC: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9DCu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F0AC9E0:
    ctx->pc = 0x7F0AC9E0u;
    // 7F0AC9E0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0AC9E4:
    ctx->pc = 0x7F0AC9E4u;
    // 7F0AC9E4: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F0AC9E8:
    ctx->pc = 0x7F0AC9E8u;
    // 7F0AC9E8: bc    4, 2, 0x7F0AC9F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC9F0;
        }
    }

label_7F0AC9EC:
    ctx->pc = 0x7F0AC9ECu;
    ctx->downcount -= 1;
    // 7F0AC9EC: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9ECu)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_7F0AC9F0:
    ctx->pc = 0x7F0AC9F0u;
    ctx->downcount -= 5;
    // 7F0AC9F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AC9F4:
    ctx->pc = 0x7F0AC9F4u;
    // 7F0AC9F4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0AC9F8:
    ctx->pc = 0x7F0AC9F8u;
    // 7F0AC9F8: lfs     f1, -5292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC9F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC9FC:
    ctx->pc = 0x7F0AC9FCu;
    // 7F0AC9FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACA00:
    ctx->pc = 0x7F0ACA00u;
    // 7F0ACA00: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F0ACA04u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F0ACA04:
    ctx->pc = 0x7F0ACA04u;
    ctx->downcount -= 4;
    // 7F0ACA04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0ACA08:
    ctx->pc = 0x7F0ACA08u;
    // 7F0ACA08: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0ACA0C:
    ctx->pc = 0x7F0ACA0Cu;
    // 7F0ACA0C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ACA10:
    ctx->pc = 0x7F0ACA10u;
    // 7F0ACA10: bl      0x800261B4
    {
            ctx->lr = 0x7F0ACA14u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F0ACA14:
    ctx->pc = 0x7F0ACA14u;
    ctx->downcount -= 20;
    // 7F0ACA14: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACA18:
    ctx->pc = 0x7F0ACA18u;
    // 7F0ACA18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ACA1C:
    ctx->pc = 0x7F0ACA1Cu;
    // 7F0ACA1C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACA20:
    ctx->pc = 0x7F0ACA20u;
    // 7F0ACA20: lha     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ACA24:
    ctx->pc = 0x7F0ACA24u;
    // 7F0ACA24: sth     r0, 90(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0ACA28:
    ctx->pc = 0x7F0ACA28u;
    // 7F0ACA28: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACA2C:
    ctx->pc = 0x7F0ACA2Cu;
    // 7F0ACA2C: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ACA30:
    ctx->pc = 0x7F0ACA30u;
    // 7F0ACA30: lfs     f2, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ACA34:
    ctx->pc = 0x7F0ACA34u;
    // 7F0ACA34: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA34u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0ACA38:
    ctx->pc = 0x7F0ACA38u;
    // 7F0ACA38: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA38u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0ACA3C:
    ctx->pc = 0x7F0ACA3Cu;
    // 7F0ACA3C: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0ACA40:
    ctx->pc = 0x7F0ACA40u;
    // 7F0ACA40: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACA44:
    ctx->pc = 0x7F0ACA44u;
    // 7F0ACA44: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ACA48:
    ctx->pc = 0x7F0ACA48u;
    // 7F0ACA48: lfs     f2, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ACA4C:
    ctx->pc = 0x7F0ACA4Cu;
    // 7F0ACA4C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA4Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0ACA50:
    ctx->pc = 0x7F0ACA50u;
    // 7F0ACA50: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA50u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0ACA54:
    ctx->pc = 0x7F0ACA54u;
    // 7F0ACA54: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0ACA58:
    ctx->pc = 0x7F0ACA58u;
    // 7F0ACA58: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACA5C:
    ctx->pc = 0x7F0ACA5Cu;
    // 7F0ACA5C: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ACA60:
    ctx->pc = 0x7F0ACA60u;
    // 7F0ACA60: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0ACA64u;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0ACA64:
    ctx->pc = 0x7F0ACA64u;
    ctx->downcount -= 17;
    // 7F0ACA64: stfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACA64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0ACA68:
    ctx->pc = 0x7F0ACA68u;
    // 7F0ACA68: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ACA6C:
    ctx->pc = 0x7F0ACA6Cu;
    // 7F0ACA6C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACA70:
    ctx->pc = 0x7F0ACA70u;
    // 7F0ACA70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACA74:
    ctx->pc = 0x7F0ACA74u;
    // 7F0ACA74: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0ACA78:
    ctx->pc = 0x7F0ACA78u;
    // 7F0ACA78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACA7C:
    ctx->pc = 0x7F0ACA7Cu;
    ctx->downcount -= 8;
    // 7F0ACA7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ACA80:
    ctx->pc = 0x7F0ACA80u;
    // 7F0ACA80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ACA84:
    ctx->pc = 0x7F0ACA84u;
    // 7F0ACA84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACA88:
    ctx->pc = 0x7F0ACA88u;
    // 7F0ACA88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0ACA8C:
    ctx->pc = 0x7F0ACA8Cu;
    // 7F0ACA8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACA90:
    ctx->pc = 0x7F0ACA90u;
    // 7F0ACA90: lwz     r4, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACA94:
    ctx->pc = 0x7F0ACA94u;
    // 7F0ACA94: rlwinm. r0, r4, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ACA98:
    ctx->pc = 0x7F0ACA98u;
    // 7F0ACA98: bc    12, 2, 0x7F0ACAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACAE8;
        }
    }

label_7F0ACA9C:
    ctx->pc = 0x7F0ACA9Cu;
    ctx->downcount -= 9;
    // 7F0ACA9C: lwz     r5, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACAA0:
    ctx->pc = 0x7F0ACAA0u;
    // 7F0ACAA0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACAA4:
    ctx->pc = 0x7F0ACAA4u;
    // 7F0ACAA4: addi    r4, r4, -15224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15224);

label_7F0ACAA8:
    ctx->pc = 0x7F0ACAA8u;
    // 7F0ACAA8: addi    r0, r5, -11
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-11);

label_7F0ACAAC:
    ctx->pc = 0x7F0ACAACu;
    // 7F0ACAAC: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACAB0:
    ctx->pc = 0x7F0ACAB0u;
    // 7F0ACAB0: lwz     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACAB4:
    ctx->pc = 0x7F0ACAB4u;
    // 7F0ACAB4: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F0ACAB8:
    ctx->pc = 0x7F0ACAB8u;
    // 7F0ACAB8: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACABC:
    ctx->pc = 0x7F0ACABCu;
    // 7F0ACABC: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACAC0u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACAC0:
    ctx->pc = 0x7F0ACAC0u;
    ctx->downcount -= 10;
    // 7F0ACAC0: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACAC4:
    ctx->pc = 0x7F0ACAC4u;
    // 7F0ACAC4: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_7F0ACAC8:
    ctx->pc = 0x7F0ACAC8u;
    // 7F0ACAC8: lwz     r5, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACACC:
    ctx->pc = 0x7F0ACACCu;
    // 7F0ACACC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0ACAD0:
    ctx->pc = 0x7F0ACAD0u;
    // 7F0ACAD0: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0ACAD4:
    ctx->pc = 0x7F0ACAD4u;
    // 7F0ACAD4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ACAD8:
    ctx->pc = 0x7F0ACAD8u;
    // 7F0ACAD8: stw     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACADC:
    ctx->pc = 0x7F0ACADCu;
    // 7F0ACADC: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ACAE0:
    ctx->pc = 0x7F0ACAE0u;
    // 7F0ACAE0: stw     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACAE4:
    ctx->pc = 0x7F0ACAE4u;
    // 7F0ACAE4: b       0x7F0ACC80
    {
            goto label_7F0ACC80;
    }

label_7F0ACAE8:
    ctx->pc = 0x7F0ACAE8u;
    ctx->downcount -= 2;
    // 7F0ACAE8: rlwinm. r0, r4, 0, 31, 31
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

label_7F0ACAEC:
    ctx->pc = 0x7F0ACAECu;
    // 7F0ACAEC: bc    12, 2, 0x7F0ACB78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACB78;
        }
    }

label_7F0ACAF0:
    ctx->pc = 0x7F0ACAF0u;
    ctx->downcount -= 3;
    // 7F0ACAF0: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACAF4:
    ctx->pc = 0x7F0ACAF4u;
    // 7F0ACAF4: cmplwi  r4, 0x0000
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

label_7F0ACAF8:
    ctx->pc = 0x7F0ACAF8u;
    // 7F0ACAF8: bc    12, 2, 0x7F0ACB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACB10;
        }
    }

label_7F0ACAFC:
    ctx->pc = 0x7F0ACAFCu;
    ctx->downcount -= 5;
    // 7F0ACAFC: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACB00:
    ctx->pc = 0x7F0ACB00u;
    // 7F0ACB00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACB04:
    ctx->pc = 0x7F0ACB04u;
    // 7F0ACB04: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0ACB08:
    ctx->pc = 0x7F0ACB08u;
    // 7F0ACB08: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ACB0C:
    ctx->pc = 0x7F0ACB0Cu;
    // 7F0ACB0C: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACB10:
    ctx->pc = 0x7F0ACB10u;
    ctx->downcount -= 4;
    // 7F0ACB10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACB14:
    ctx->pc = 0x7F0ACB14u;
    // 7F0ACB14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACB18:
    ctx->pc = 0x7F0ACB18u;
    // 7F0ACB18: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACB1C:
    ctx->pc = 0x7F0ACB1Cu;
    // 7F0ACB1C: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ACB20u;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0ACB20:
    ctx->pc = 0x7F0ACB20u;
    ctx->downcount -= 3;
    // 7F0ACB20: lwz     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACB24:
    ctx->pc = 0x7F0ACB24u;
    // 7F0ACB24: cmpwi   r0, 0
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

label_7F0ACB28:
    ctx->pc = 0x7F0ACB28u;
    // 7F0ACB28: bc    4, 1, 0x7F0ACB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACB40;
        }
    }

label_7F0ACB2C:
    ctx->pc = 0x7F0ACB2Cu;
    ctx->downcount -= 4;
    // 7F0ACB2C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACB30:
    ctx->pc = 0x7F0ACB30u;
    // 7F0ACB30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACB34:
    ctx->pc = 0x7F0ACB34u;
    // 7F0ACB34: addi    r4, r4, -14440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14440);

label_7F0ACB38:
    ctx->pc = 0x7F0ACB38u;
    // 7F0ACB38: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACB3Cu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACB3C:
    ctx->pc = 0x7F0ACB3Cu;
    ctx->downcount -= 1;
    // 7F0ACB3C: b       0x7F0ACB50
    {
            goto label_7F0ACB50;
    }

label_7F0ACB40:
    ctx->pc = 0x7F0ACB40u;
    ctx->downcount -= 4;
    // 7F0ACB40: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACB44:
    ctx->pc = 0x7F0ACB44u;
    // 7F0ACB44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACB48:
    ctx->pc = 0x7F0ACB48u;
    // 7F0ACB48: addi    r4, r4, -14268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14268);

label_7F0ACB4C:
    ctx->pc = 0x7F0ACB4Cu;
    // 7F0ACB4C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACB50u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACB50:
    ctx->pc = 0x7F0ACB50u;
    ctx->downcount -= 10;
    // 7F0ACB50: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACB54:
    ctx->pc = 0x7F0ACB54u;
    // 7F0ACB54: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_7F0ACB58:
    ctx->pc = 0x7F0ACB58u;
    // 7F0ACB58: lwz     r5, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACB5C:
    ctx->pc = 0x7F0ACB5Cu;
    // 7F0ACB5C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0ACB60:
    ctx->pc = 0x7F0ACB60u;
    // 7F0ACB60: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0ACB64:
    ctx->pc = 0x7F0ACB64u;
    // 7F0ACB64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ACB68:
    ctx->pc = 0x7F0ACB68u;
    // 7F0ACB68: stw     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACB6C:
    ctx->pc = 0x7F0ACB6Cu;
    // 7F0ACB6C: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ACB70:
    ctx->pc = 0x7F0ACB70u;
    // 7F0ACB70: stw     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACB74:
    ctx->pc = 0x7F0ACB74u;
    // 7F0ACB74: b       0x7F0ACC80
    {
            goto label_7F0ACC80;
    }

label_7F0ACB78:
    ctx->pc = 0x7F0ACB78u;
    ctx->downcount -= 2;
    // 7F0ACB78: rlwinm. r0, r4, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ACB7C:
    ctx->pc = 0x7F0ACB7Cu;
    // 7F0ACB7C: bc    12, 2, 0x7F0ACC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACC04;
        }
    }

label_7F0ACB80:
    ctx->pc = 0x7F0ACB80u;
    ctx->downcount -= 3;
    // 7F0ACB80: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACB84:
    ctx->pc = 0x7F0ACB84u;
    // 7F0ACB84: cmplwi  r4, 0x0000
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

label_7F0ACB88:
    ctx->pc = 0x7F0ACB88u;
    // 7F0ACB88: bc    12, 2, 0x7F0ACBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACBA0;
        }
    }

label_7F0ACB8C:
    ctx->pc = 0x7F0ACB8Cu;
    ctx->downcount -= 5;
    // 7F0ACB8C: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACB90:
    ctx->pc = 0x7F0ACB90u;
    // 7F0ACB90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACB94:
    ctx->pc = 0x7F0ACB94u;
    // 7F0ACB94: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0ACB98:
    ctx->pc = 0x7F0ACB98u;
    // 7F0ACB98: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ACB9C:
    ctx->pc = 0x7F0ACB9Cu;
    // 7F0ACB9C: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACBA0:
    ctx->pc = 0x7F0ACBA0u;
    ctx->downcount -= 4;
    // 7F0ACBA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACBA4:
    ctx->pc = 0x7F0ACBA4u;
    // 7F0ACBA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACBA8:
    ctx->pc = 0x7F0ACBA8u;
    // 7F0ACBA8: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACBAC:
    ctx->pc = 0x7F0ACBACu;
    // 7F0ACBAC: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ACBB0u;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0ACBB0:
    ctx->pc = 0x7F0ACBB0u;
    ctx->downcount -= 11;
    // 7F0ACBB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACBB4:
    ctx->pc = 0x7F0ACBB4u;
    // 7F0ACBB4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACBB8:
    ctx->pc = 0x7F0ACBB8u;
    // 7F0ACBB8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F0ACBBC:
    ctx->pc = 0x7F0ACBBCu;
    // 7F0ACBBC: sth     r0, 3602(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3602);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0ACBC0:
    ctx->pc = 0x7F0ACBC0u;
    // 7F0ACBC0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ACBC4:
    ctx->pc = 0x7F0ACBC4u;
    // 7F0ACBC4: addi    r4, r4, -14268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14268);

label_7F0ACBC8:
    ctx->pc = 0x7F0ACBC8u;
    // 7F0ACBC8: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F0ACBCC:
    ctx->pc = 0x7F0ACBCCu;
    // 7F0ACBCC: addi    r5, r3, 19268
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19268);

label_7F0ACBD0:
    ctx->pc = 0x7F0ACBD0u;
    // 7F0ACBD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACBD4:
    ctx->pc = 0x7F0ACBD4u;
    // 7F0ACBD4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACBD8:
    ctx->pc = 0x7F0ACBD8u;
    // 7F0ACBD8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACBDCu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACBDC:
    ctx->pc = 0x7F0ACBDCu;
    ctx->downcount -= 10;
    // 7F0ACBDC: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACBE0:
    ctx->pc = 0x7F0ACBE0u;
    // 7F0ACBE0: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_7F0ACBE4:
    ctx->pc = 0x7F0ACBE4u;
    // 7F0ACBE4: lwz     r5, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACBE8:
    ctx->pc = 0x7F0ACBE8u;
    // 7F0ACBE8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0ACBEC:
    ctx->pc = 0x7F0ACBECu;
    // 7F0ACBEC: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0ACBF0:
    ctx->pc = 0x7F0ACBF0u;
    // 7F0ACBF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ACBF4:
    ctx->pc = 0x7F0ACBF4u;
    // 7F0ACBF4: stw     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACBF8:
    ctx->pc = 0x7F0ACBF8u;
    // 7F0ACBF8: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ACBFC:
    ctx->pc = 0x7F0ACBFCu;
    // 7F0ACBFC: stw     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC00:
    ctx->pc = 0x7F0ACC00u;
    // 7F0ACC00: b       0x7F0ACC80
    {
            goto label_7F0ACC80;
    }

label_7F0ACC04:
    ctx->pc = 0x7F0ACC04u;
    ctx->downcount -= 2;
    // 7F0ACC04: rlwinm. r0, r4, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ACC08:
    ctx->pc = 0x7F0ACC08u;
    // 7F0ACC08: bc    12, 2, 0x7F0ACC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACC7C;
        }
    }

label_7F0ACC0C:
    ctx->pc = 0x7F0ACC0Cu;
    ctx->downcount -= 6;
    // 7F0ACC0C: lwz     r3, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACC10:
    ctx->pc = 0x7F0ACC10u;
    // 7F0ACC10: addi    r0, r3, -34
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-34);

label_7F0ACC14:
    ctx->pc = 0x7F0ACC14u;
    // 7F0ACC14: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC18:
    ctx->pc = 0x7F0ACC18u;
    // 7F0ACC18: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACC1C:
    ctx->pc = 0x7F0ACC1Cu;
    // 7F0ACC1C: cmplwi  r4, 0x0000
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

label_7F0ACC20:
    ctx->pc = 0x7F0ACC20u;
    // 7F0ACC20: bc    12, 2, 0x7F0ACC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACC3C;
        }
    }

label_7F0ACC24:
    ctx->pc = 0x7F0ACC24u;
    ctx->downcount -= 6;
    // 7F0ACC24: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACC28:
    ctx->pc = 0x7F0ACC28u;
    // 7F0ACC28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACC2C:
    ctx->pc = 0x7F0ACC2Cu;
    // 7F0ACC2C: oris    r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | (0x0002u << 16);

label_7F0ACC30:
    ctx->pc = 0x7F0ACC30u;
    // 7F0ACC30: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0ACC34:
    ctx->pc = 0x7F0ACC34u;
    // 7F0ACC34: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ACC38:
    ctx->pc = 0x7F0ACC38u;
    // 7F0ACC38: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC3C:
    ctx->pc = 0x7F0ACC3Cu;
    ctx->downcount -= 6;
    // 7F0ACC3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACC40:
    ctx->pc = 0x7F0ACC40u;
    // 7F0ACC40: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0ACC44:
    ctx->pc = 0x7F0ACC44u;
    // 7F0ACC44: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC48:
    ctx->pc = 0x7F0ACC48u;
    // 7F0ACC48: addi    r4, r3, -13048
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13048);

label_7F0ACC4C:
    ctx->pc = 0x7F0ACC4Cu;
    // 7F0ACC4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACC50:
    ctx->pc = 0x7F0ACC50u;
    // 7F0ACC50: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACC54u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACC54:
    ctx->pc = 0x7F0ACC54u;
    ctx->downcount -= 10;
    // 7F0ACC54: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACC58:
    ctx->pc = 0x7F0ACC58u;
    // 7F0ACC58: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_7F0ACC5C:
    ctx->pc = 0x7F0ACC5Cu;
    // 7F0ACC5C: lwz     r5, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACC60:
    ctx->pc = 0x7F0ACC60u;
    // 7F0ACC60: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0ACC64:
    ctx->pc = 0x7F0ACC64u;
    // 7F0ACC64: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0ACC68:
    ctx->pc = 0x7F0ACC68u;
    // 7F0ACC68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ACC6C:
    ctx->pc = 0x7F0ACC6Cu;
    // 7F0ACC6C: stw     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC70:
    ctx->pc = 0x7F0ACC70u;
    // 7F0ACC70: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ACC74:
    ctx->pc = 0x7F0ACC74u;
    // 7F0ACC74: stw     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACC78:
    ctx->pc = 0x7F0ACC78u;
    // 7F0ACC78: b       0x7F0ACC80
    {
            goto label_7F0ACC80;
    }

label_7F0ACC7C:
    ctx->pc = 0x7F0ACC7Cu;
    ctx->downcount -= 1;
    // 7F0ACC7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ACC80:
    ctx->pc = 0x7F0ACC80u;
    ctx->downcount -= 6;
    // 7F0ACC80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACC84:
    ctx->pc = 0x7F0ACC84u;
    // 7F0ACC84: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0ACC88:
    ctx->pc = 0x7F0ACC88u;
    // 7F0ACC88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACC8C:
    ctx->pc = 0x7F0ACC8Cu;
    // 7F0ACC8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0ACC90:
    ctx->pc = 0x7F0ACC90u;
    // 7F0ACC90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACC94:
    ctx->pc = 0x7F0ACC94u;
    ctx->downcount -= 9;
    // 7F0ACC94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ACC98:
    ctx->pc = 0x7F0ACC98u;
    // 7F0ACC98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ACC9C:
    ctx->pc = 0x7F0ACC9Cu;
    // 7F0ACC9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ACCA0:
    ctx->pc = 0x7F0ACCA0u;
    // 7F0ACCA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACCA4:
    ctx->pc = 0x7F0ACCA4u;
    // 7F0ACCA4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0ACCA8:
    ctx->pc = 0x7F0ACCA8u;
    // 7F0ACCA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACCAC:
    ctx->pc = 0x7F0ACCACu;
    // 7F0ACCAC: lwz     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACCB0:
    ctx->pc = 0x7F0ACCB0u;
    // 7F0ACCB0: rlwinm. r0, r0, 0, 23, 23
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

label_7F0ACCB4:
    ctx->pc = 0x7F0ACCB4u;
    // 7F0ACCB4: bc    12, 2, 0x7F0ACCF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACCF0;
        }
    }

label_7F0ACCB8:
    ctx->pc = 0x7F0ACCB8u;
    ctx->downcount -= 9;
    // 7F0ACCB8: lwz     r5, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ACCBC:
    ctx->pc = 0x7F0ACCBCu;
    // 7F0ACCBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACCC0:
    ctx->pc = 0x7F0ACCC0u;
    // 7F0ACCC0: lwz     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACCC4:
    ctx->pc = 0x7F0ACCC4u;
    // 7F0ACCC4: oris    r4, r4, 0x0002
    ctx->gpr[4] = ctx->gpr[4] | (0x0002u << 16);

label_7F0ACCC8:
    ctx->pc = 0x7F0ACCC8u;
    // 7F0ACCC8: ori     r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] | 0x0001u;

label_7F0ACCCC:
    ctx->pc = 0x7F0ACCCCu;
    // 7F0ACCCC: stw     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ACCD0:
    ctx->pc = 0x7F0ACCD0u;
    // 7F0ACCD0: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACCD4:
    ctx->pc = 0x7F0ACCD4u;
    // 7F0ACCD4: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACCD8:
    ctx->pc = 0x7F0ACCD8u;
    // 7F0ACCD8: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ACCDCu;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0ACCDC:
    ctx->pc = 0x7F0ACCDCu;
    ctx->downcount -= 4;
    // 7F0ACCDC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACCE0:
    ctx->pc = 0x7F0ACCE0u;
    // 7F0ACCE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACCE4:
    ctx->pc = 0x7F0ACCE4u;
    // 7F0ACCE4: addi    r4, r4, -14612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14612);

label_7F0ACCE8:
    ctx->pc = 0x7F0ACCE8u;
    // 7F0ACCE8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACCECu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACCEC:
    ctx->pc = 0x7F0ACCECu;
    ctx->downcount -= 1;
    // 7F0ACCEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0ACCF0:
    ctx->pc = 0x7F0ACCF0u;
    ctx->downcount -= 7;
    // 7F0ACCF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACCF4:
    ctx->pc = 0x7F0ACCF4u;
    // 7F0ACCF4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0ACCF8:
    ctx->pc = 0x7F0ACCF8u;
    // 7F0ACCF8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0ACCFC:
    ctx->pc = 0x7F0ACCFCu;
    // 7F0ACCFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACD00:
    ctx->pc = 0x7F0ACD00u;
    // 7F0ACD00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0ACD04:
    ctx->pc = 0x7F0ACD04u;
    // 7F0ACD04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACD08:
    ctx->pc = 0x7F0ACD08u;
    ctx->downcount -= 20;
    // 7F0ACD08: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ACD0C:
    ctx->pc = 0x7F0ACD0Cu;
    // 7F0ACD0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ACD10:
    ctx->pc = 0x7F0ACD10u;
    // 7F0ACD10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACD14:
    ctx->pc = 0x7F0ACD14u;
    // 7F0ACD14: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0ACD18:
    ctx->pc = 0x7F0ACD18u;
    // 7F0ACD18: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0ACD1C:
    ctx->pc = 0x7F0ACD1Cu;
    // 7F0ACD1C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACD20:
    ctx->pc = 0x7F0ACD20u;
    // 7F0ACD20: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0ACD24:
    ctx->pc = 0x7F0ACD24u;
    // 7F0ACD24: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0ACD28:
    ctx->pc = 0x7F0ACD28u;
    // 7F0ACD28: stw     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACD2C:
    ctx->pc = 0x7F0ACD2Cu;
    // 7F0ACD2C: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ACD30u;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0ACD30:
    ctx->pc = 0x7F0ACD30u;
    ctx->downcount -= 7;
    // 7F0ACD30: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACD30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ACD34:
    ctx->pc = 0x7F0ACD34u;
    // 7F0ACD34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0ACD38:
    ctx->pc = 0x7F0ACD38u;
    // 7F0ACD38: lfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACD38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACD3C:
    ctx->pc = 0x7F0ACD3Cu;
    // 7F0ACD3C: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACD3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ACD40:
    ctx->pc = 0x7F0ACD40u;
    // 7F0ACD40: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0ACD40u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0ACD44:
    ctx->pc = 0x7F0ACD44u;
    // 7F0ACD44: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACD44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0ACD48:
    ctx->pc = 0x7F0ACD48u;
    // 7F0ACD48: bc    4, 0, 0x7F0ACD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACD58;
        }
    }

label_7F0ACD4C:
    ctx->pc = 0x7F0ACD4Cu;
    ctx->downcount -= 3;
    // 7F0ACD4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ACD50:
    ctx->pc = 0x7F0ACD50u;
    // 7F0ACD50: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0ACD54:
    ctx->pc = 0x7F0ACD54u;
    // 7F0ACD54: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0ACD58u;
            ctx->pc = 0x7F0AB1F4u;
            return;
    }

label_7F0ACD58:
    ctx->pc = 0x7F0ACD58u;
    ctx->downcount -= 2;
    // 7F0ACD58: cmpwi   r29, 0
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

label_7F0ACD5C:
    ctx->pc = 0x7F0ACD5Cu;
    // 7F0ACD5C: bc    4, 2, 0x7F0ACD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACD90;
        }
    }

label_7F0ACD60:
    ctx->pc = 0x7F0ACD60u;
    ctx->downcount -= 4;
    // 7F0ACD60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ACD64:
    ctx->pc = 0x7F0ACD64u;
    // 7F0ACD64: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_7F0ACD68:
    ctx->pc = 0x7F0ACD68u;
    // 7F0ACD68: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0ACD6C:
    ctx->pc = 0x7F0ACD6Cu;
    // 7F0ACD6C: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0ACD70u;
            ctx->pc = 0x7F0AB1A4u;
            return;
    }

label_7F0ACD70:
    ctx->pc = 0x7F0ACD70u;
    ctx->downcount -= 3;
    // 7F0ACD70: lwz     r3, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACD74:
    ctx->pc = 0x7F0ACD74u;
    // 7F0ACD74: cmplwi  r3, 0x0000
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

label_7F0ACD78:
    ctx->pc = 0x7F0ACD78u;
    // 7F0ACD78: bc    12, 2, 0x7F0ACD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACD90;
        }
    }

label_7F0ACD7C:
    ctx->pc = 0x7F0ACD7Cu;
    ctx->downcount -= 3;
    // 7F0ACD7C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACD80:
    ctx->pc = 0x7F0ACD80u;
    // 7F0ACD80: cmplwi  r3, 0x0000
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

label_7F0ACD84:
    ctx->pc = 0x7F0ACD84u;
    // 7F0ACD84: bc    12, 2, 0x7F0ACD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACD90;
        }
    }

label_7F0ACD88:
    ctx->pc = 0x7F0ACD88u;
    ctx->downcount -= 2;
    // 7F0ACD88: lha     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ACD8C:
    ctx->pc = 0x7F0ACD8Cu;
    // 7F0ACD8C: sth     r0, 42(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0ACD90:
    ctx->pc = 0x7F0ACD90u;
    ctx->downcount -= 2;
    // 7F0ACD90: cmpwi   r29, 40
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ACD94:
    ctx->pc = 0x7F0ACD94u;
    // 7F0ACD94: bc    4, 1, 0x7F0ACDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACDB8;
        }
    }

label_7F0ACD98:
    ctx->pc = 0x7F0ACD98u;
    ctx->downcount -= 2;
    // 7F0ACD98: cmpwi   r29, 50
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ACD9C:
    ctx->pc = 0x7F0ACD9Cu;
    // 7F0ACD9C: bc    4, 0, 0x7F0ACDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACDB8;
        }
    }

label_7F0ACDA0:
    ctx->pc = 0x7F0ACDA0u;
    ctx->downcount -= 6;
    // 7F0ACDA0: addi    r3, r30, 3200
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3200);

label_7F0ACDA4:
    ctx->pc = 0x7F0ACDA4u;
    // 7F0ACDA4: addi    r4, r30, 3616
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3616);

label_7F0ACDA8:
    ctx->pc = 0x7F0ACDA8u;
    // 7F0ACDA8: addi    r5, r30, 448
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0ACDAC:
    ctx->pc = 0x7F0ACDACu;
    // 7F0ACDAC: addi    r6, r30, 48
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0ACDB0:
    ctx->pc = 0x7F0ACDB0u;
    // 7F0ACDB0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F0ACDB4:
    ctx->pc = 0x7F0ACDB4u;
    // 7F0ACDB4: bl      0x7F12AD6C
    {
            ctx->lr = 0x7F0ACDB8u;
            ctx->pc = 0x7F12AD6Cu;
            return;
    }

label_7F0ACDB8:
    ctx->pc = 0x7F0ACDB8u;
    ctx->downcount -= 2;
    // 7F0ACDB8: cmpwi   r29, 50
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ACDBC:
    ctx->pc = 0x7F0ACDBCu;
    // 7F0ACDBC: bc    4, 2, 0x7F0ACDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACDD0;
        }
    }

label_7F0ACDC0:
    ctx->pc = 0x7F0ACDC0u;
    ctx->downcount -= 4;
    // 7F0ACDC0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACDC4:
    ctx->pc = 0x7F0ACDC4u;
    // 7F0ACDC4: li      r3, 1868
    ctx->gpr[3] = (u32)(s32)(1868);

label_7F0ACDC8:
    ctx->pc = 0x7F0ACDC8u;
    // 7F0ACDC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0ACDCC:
    ctx->pc = 0x7F0ACDCCu;
    // 7F0ACDCC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0ACDD0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0ACDD0:
    ctx->pc = 0x7F0ACDD0u;
    ctx->downcount -= 2;
    // 7F0ACDD0: cmpwi   r29, 50
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ACDD4:
    ctx->pc = 0x7F0ACDD4u;
    // 7F0ACDD4: bc    4, 1, 0x7F0ACE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACE00;
        }
    }

label_7F0ACDD8:
    ctx->pc = 0x7F0ACDD8u;
    ctx->downcount -= 3;
    // 7F0ACDD8: lwz     r4, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACDDC:
    ctx->pc = 0x7F0ACDDCu;
    // 7F0ACDDC: cmplwi  r4, 0x0000
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

label_7F0ACDE0:
    ctx->pc = 0x7F0ACDE0u;
    // 7F0ACDE0: bc    12, 2, 0x7F0ACDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACDF8;
        }
    }

label_7F0ACDE4:
    ctx->pc = 0x7F0ACDE4u;
    ctx->downcount -= 5;
    // 7F0ACDE4: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACDE8:
    ctx->pc = 0x7F0ACDE8u;
    // 7F0ACDE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACDEC:
    ctx->pc = 0x7F0ACDECu;
    // 7F0ACDEC: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0ACDF0:
    ctx->pc = 0x7F0ACDF0u;
    // 7F0ACDF0: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ACDF4:
    ctx->pc = 0x7F0ACDF4u;
    // 7F0ACDF4: stw     r0, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACDF8:
    ctx->pc = 0x7F0ACDF8u;
    ctx->downcount -= 2;
    // 7F0ACDF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACDFC:
    ctx->pc = 0x7F0ACDFCu;
    // 7F0ACDFC: stw     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACE00:
    ctx->pc = 0x7F0ACE00u;
    ctx->downcount -= 7;
    // 7F0ACE00: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ACE04:
    ctx->pc = 0x7F0ACE04u;
    // 7F0ACE04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0ACE08:
    ctx->pc = 0x7F0ACE08u;
    // 7F0ACE08: lfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACE0C:
    ctx->pc = 0x7F0ACE0Cu;
    // 7F0ACE0C: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ACE10:
    ctx->pc = 0x7F0ACE10u;
    // 7F0ACE10: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE10u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0ACE14:
    ctx->pc = 0x7F0ACE14u;
    // 7F0ACE14: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0ACE18:
    ctx->pc = 0x7F0ACE18u;
    // 7F0ACE18: bc    4, 0, 0x7F0ACE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACE30;
        }
    }

label_7F0ACE1C:
    ctx->pc = 0x7F0ACE1Cu;
    ctx->downcount -= 4;
    // 7F0ACE1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0ACE20:
    ctx->pc = 0x7F0ACE20u;
    // 7F0ACE20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACE24:
    ctx->pc = 0x7F0ACE24u;
    // 7F0ACE24: lfs     f1, -5280(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0ACE24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ACE28:
    ctx->pc = 0x7F0ACE28u;
    // 7F0ACE28: bl      0x7F12A86C
    {
            ctx->lr = 0x7F0ACE2Cu;
            ctx->pc = 0x7F12A86Cu;
            return;
    }

label_7F0ACE2C:
    ctx->pc = 0x7F0ACE2Cu;
    ctx->downcount -= 1;
    // 7F0ACE2C: sth     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0ACE30:
    ctx->pc = 0x7F0ACE30u;
    ctx->downcount -= 5;
    // 7F0ACE30: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACE34:
    ctx->pc = 0x7F0ACE34u;
    // 7F0ACE34: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACE38:
    ctx->pc = 0x7F0ACE38u;
    // 7F0ACE38: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACE3C:
    ctx->pc = 0x7F0ACE3Cu;
    // 7F0ACE3C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0ACE40:
    ctx->pc = 0x7F0ACE40u;
    // 7F0ACE40: bc    12, 2, 0x7F0ACE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACE7C;
        }
    }

label_7F0ACE44:
    ctx->pc = 0x7F0ACE44u;
    ctx->downcount -= 6;
    // 7F0ACE44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACE48:
    ctx->pc = 0x7F0ACE48u;
    // 7F0ACE48: stw     r0, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACE4C:
    ctx->pc = 0x7F0ACE4Cu;
    // 7F0ACE4C: stw     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACE50:
    ctx->pc = 0x7F0ACE50u;
    // 7F0ACE50: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACE54:
    ctx->pc = 0x7F0ACE54u;
    // 7F0ACE54: cmpwi   r0, 0
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

label_7F0ACE58:
    ctx->pc = 0x7F0ACE58u;
    // 7F0ACE58: bc    12, 1, 0x7F0ACE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACE6C;
        }
    }

label_7F0ACE5C:
    ctx->pc = 0x7F0ACE5Cu;
    ctx->downcount -= 4;
    // 7F0ACE5C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACE60:
    ctx->pc = 0x7F0ACE60u;
    // 7F0ACE60: li      r3, 1870
    ctx->gpr[3] = (u32)(s32)(1870);

label_7F0ACE64:
    ctx->pc = 0x7F0ACE64u;
    // 7F0ACE64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0ACE68:
    ctx->pc = 0x7F0ACE68u;
    // 7F0ACE68: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0ACE6Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0ACE6C:
    ctx->pc = 0x7F0ACE6Cu;
    ctx->downcount -= 4;
    // 7F0ACE6C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACE70:
    ctx->pc = 0x7F0ACE70u;
    // 7F0ACE70: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ACE74:
    ctx->pc = 0x7F0ACE74u;
    // 7F0ACE74: addi    r4, r4, -19940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19940);

label_7F0ACE78:
    ctx->pc = 0x7F0ACE78u;
    // 7F0ACE78: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACE7Cu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACE7C:
    ctx->pc = 0x7F0ACE7Cu;
    ctx->downcount -= 16;
    // 7F0ACE7C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ACE80:
    ctx->pc = 0x7F0ACE80u;
    // 7F0ACE80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACE84:
    ctx->pc = 0x7F0ACE84u;
    // 7F0ACE84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACE88:
    ctx->pc = 0x7F0ACE88u;
    // 7F0ACE88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0ACE8C:
    ctx->pc = 0x7F0ACE8Cu;
    // 7F0ACE8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACE90:
    ctx->pc = 0x7F0ACE90u;
    ctx->downcount -= 20;
    // 7F0ACE90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ACE94:
    ctx->pc = 0x7F0ACE94u;
    // 7F0ACE94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ACE98:
    ctx->pc = 0x7F0ACE98u;
    // 7F0ACE98: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACE9C:
    ctx->pc = 0x7F0ACE9Cu;
    // 7F0ACE9C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F0ACEA0:
    ctx->pc = 0x7F0ACEA0u;
    // 7F0ACEA0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0ACEA4:
    ctx->pc = 0x7F0ACEA4u;
    // 7F0ACEA4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACEA8:
    ctx->pc = 0x7F0ACEA8u;
    // 7F0ACEA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0ACEAC:
    ctx->pc = 0x7F0ACEACu;
    // 7F0ACEAC: addi    r30, r29, 48
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(48);

label_7F0ACEB0:
    ctx->pc = 0x7F0ACEB0u;
    // 7F0ACEB0: stw     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACEB4:
    ctx->pc = 0x7F0ACEB4u;
    // 7F0ACEB4: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ACEB8u;
            ctx->pc = 0x7F0A9010u;
            return;
    }

label_7F0ACEB8:
    ctx->pc = 0x7F0ACEB8u;
    ctx->downcount -= 2;
    // 7F0ACEB8: cmpwi   r31, 0
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

label_7F0ACEBC:
    ctx->pc = 0x7F0ACEBCu;
    // 7F0ACEBC: bc    4, 2, 0x7F0ACF0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACF0C;
        }
    }

label_7F0ACEC0:
    ctx->pc = 0x7F0ACEC0u;
    ctx->downcount -= 3;
    // 7F0ACEC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ACEC4:
    ctx->pc = 0x7F0ACEC4u;
    // 7F0ACEC4: addi    r4, r29, 3520
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(3520);

label_7F0ACEC8:
    ctx->pc = 0x7F0ACEC8u;
    // 7F0ACEC8: bl      0x7F17427C
    {
            ctx->lr = 0x7F0ACECCu;
            ctx->pc = 0x7F17427Cu;
            return;
    }

label_7F0ACECC:
    ctx->pc = 0x7F0ACECCu;
    ctx->downcount -= 4;
    // 7F0ACECC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ACED0:
    ctx->pc = 0x7F0ACED0u;
    // 7F0ACED0: lha     r3, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ACED4:
    ctx->pc = 0x7F0ACED4u;
    // 7F0ACED4: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0ACED8:
    ctx->pc = 0x7F0ACED8u;
    // 7F0ACED8: bl      0x7F3CC924
    {
            ctx->lr = 0x7F0ACEDCu;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F0ACEDC:
    ctx->pc = 0x7F0ACEDCu;
    ctx->downcount -= 3;
    // 7F0ACEDC: cmpwi   r3, 1024
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

label_7F0ACEE0:
    ctx->pc = 0x7F0ACEE0u;
    // 7F0ACEE0: li      r31, 35
    ctx->gpr[31] = (u32)(s32)(35);

label_7F0ACEE4:
    ctx->pc = 0x7F0ACEE4u;
    // 7F0ACEE4: bc    4, 1, 0x7F0ACEEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACEEC;
        }
    }

label_7F0ACEE8:
    ctx->pc = 0x7F0ACEE8u;
    ctx->downcount -= 1;
    // 7F0ACEE8: li      r31, 36
    ctx->gpr[31] = (u32)(s32)(36);

label_7F0ACEEC:
    ctx->pc = 0x7F0ACEECu;
    ctx->downcount -= 4;
    // 7F0ACEEC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ACEF0:
    ctx->pc = 0x7F0ACEF0u;
    // 7F0ACEF0: li      r3, 1868
    ctx->gpr[3] = (u32)(s32)(1868);

label_7F0ACEF4:
    ctx->pc = 0x7F0ACEF4u;
    // 7F0ACEF4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0ACEF8:
    ctx->pc = 0x7F0ACEF8u;
    // 7F0ACEF8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0ACEFCu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0ACEFC:
    ctx->pc = 0x7F0ACEFCu;
    ctx->downcount -= 4;
    // 7F0ACEFC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0ACF00:
    ctx->pc = 0x7F0ACF00u;
    // 7F0ACF00: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ACF04:
    ctx->pc = 0x7F0ACF04u;
    // 7F0ACF04: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0ACF08:
    ctx->pc = 0x7F0ACF08u;
    // 7F0ACF08: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0ACF0Cu;
            ctx->pc = 0x7F0AB0F8u;
            return;
    }

label_7F0ACF0C:
    ctx->pc = 0x7F0ACF0Cu;
    ctx->downcount -= 5;
    // 7F0ACF0C: lwz     r3, 452(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACF10:
    ctx->pc = 0x7F0ACF10u;
    // 7F0ACF10: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACF14:
    ctx->pc = 0x7F0ACF14u;
    // 7F0ACF14: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACF18:
    ctx->pc = 0x7F0ACF18u;
    // 7F0ACF18: rlwinm. r0, r0, 0, 29, 29
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

label_7F0ACF1C:
    ctx->pc = 0x7F0ACF1Cu;
    // 7F0ACF1C: bc    12, 2, 0x7F0ACF50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACF50;
        }
    }

label_7F0ACF20:
    ctx->pc = 0x7F0ACF20u;
    ctx->downcount -= 3;
    // 7F0ACF20: lwz     r0, 3740(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACF24:
    ctx->pc = 0x7F0ACF24u;
    // 7F0ACF24: cmpwi   r0, 500
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

label_7F0ACF28:
    ctx->pc = 0x7F0ACF28u;
    // 7F0ACF28: bc    4, 1, 0x7F0ACF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACF40;
        }
    }

label_7F0ACF2C:
    ctx->pc = 0x7F0ACF2Cu;
    ctx->downcount -= 4;
    // 7F0ACF2C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACF30:
    ctx->pc = 0x7F0ACF30u;
    // 7F0ACF30: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0ACF34:
    ctx->pc = 0x7F0ACF34u;
    // 7F0ACF34: addi    r4, r4, -23888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23888);

label_7F0ACF38:
    ctx->pc = 0x7F0ACF38u;
    // 7F0ACF38: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACF3Cu;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACF3C:
    ctx->pc = 0x7F0ACF3Cu;
    ctx->downcount -= 1;
    // 7F0ACF3C: b       0x7F0ACF50
    {
            goto label_7F0ACF50;
    }

label_7F0ACF40:
    ctx->pc = 0x7F0ACF40u;
    ctx->downcount -= 4;
    // 7F0ACF40: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ACF44:
    ctx->pc = 0x7F0ACF44u;
    // 7F0ACF44: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0ACF48:
    ctx->pc = 0x7F0ACF48u;
    // 7F0ACF48: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0ACF4C:
    ctx->pc = 0x7F0ACF4Cu;
    // 7F0ACF4C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ACF50u;
            ctx->pc = 0x7F0AB18Cu;
            return;
    }

label_7F0ACF50:
    ctx->pc = 0x7F0ACF50u;
    ctx->downcount -= 16;
    // 7F0ACF50: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ACF54:
    ctx->pc = 0x7F0ACF54u;
    // 7F0ACF54: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACF58:
    ctx->pc = 0x7F0ACF58u;
    // 7F0ACF58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACF5C:
    ctx->pc = 0x7F0ACF5Cu;
    // 7F0ACF5C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0ACF60:
    ctx->pc = 0x7F0ACF60u;
    // 7F0ACF60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACF64:
    ctx->pc = 0x7F0ACF64u;
    ctx->downcount -= 4;
    // 7F0ACF64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ACF68:
    ctx->pc = 0x7F0ACF68u;
    // 7F0ACF68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ACF6C:
    ctx->pc = 0x7F0ACF6Cu;
    // 7F0ACF6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACF70:
    ctx->pc = 0x7F0ACF70u;
    // 7F0ACF70: bl      0x7F0A8C1C
    {
            ctx->lr = 0x7F0ACF74u;
            ctx->pc = 0x7F0A8C1Cu;
            return;
    }

label_7F0ACF74:
    ctx->pc = 0x7F0ACF74u;
    ctx->downcount -= 2;
    // 7F0ACF74: cmplwi  r3, 0x0000
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

label_7F0ACF78:
    ctx->pc = 0x7F0ACF78u;
    // 7F0ACF78: bc    12, 2, 0x7F0ACF8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ACF8C;
        }
    }

label_7F0ACF7C:
    ctx->pc = 0x7F0ACF7Cu;
    ctx->downcount -= 4;
    // 7F0ACF7C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0ACF80:
    ctx->pc = 0x7F0ACF80u;
    // 7F0ACF80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ACF84:
    ctx->pc = 0x7F0ACF84u;
    // 7F0ACF84: addi    r4, r4, -32552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32552);

label_7F0ACF88:
    ctx->pc = 0x7F0ACF88u;
    // 7F0ACF88: bl      0x7F024198
    {
            ctx->lr = 0x7F0ACF8Cu;
            ctx->pc = 0x7F024198u;
            return;
    }

label_7F0ACF8C:
    ctx->pc = 0x7F0ACF8Cu;
    ctx->downcount -= 5;
    // 7F0ACF8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACF90:
    ctx->pc = 0x7F0ACF90u;
    // 7F0ACF90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ACF94:
    ctx->pc = 0x7F0ACF94u;
    // 7F0ACF94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0ACF98:
    ctx->pc = 0x7F0ACF98u;
    // 7F0ACF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACF9C:
    ctx->pc = 0x7F0ACF9Cu;
    ctx->downcount -= 4;
    // 7F0ACF9C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ACFA0:
    ctx->pc = 0x7F0ACFA0u;
    // 7F0ACFA0: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ACFA4:
    ctx->pc = 0x7F0ACFA4u;
    // 7F0ACFA4: cmpwi   r0, 0
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

label_7F0ACFA8:
    ctx->pc = 0x7F0ACFA8u;
    // 7F0ACFA8: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACFAC:
    ctx->pc = 0x7F0ACFACu;
    ctx->downcount -= 6;
    // 7F0ACFAC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0ACFB0:
    ctx->pc = 0x7F0ACFB0u;
    // 7F0ACFB0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0ACFB4:
    ctx->pc = 0x7F0ACFB4u;
    // 7F0ACFB4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ACFB8:
    ctx->pc = 0x7F0ACFB8u;
    // 7F0ACFB8: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ACFBC:
    ctx->pc = 0x7F0ACFBCu;
    // 7F0ACFBC: cmpwi   r0, 0
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

label_7F0ACFC0:
    ctx->pc = 0x7F0ACFC0u;
    // 7F0ACFC0: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACFC4:
    ctx->pc = 0x7F0ACFC4u;
    ctx->downcount -= 10;
    // 7F0ACFC4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ACFC8:
    ctx->pc = 0x7F0ACFC8u;
    // 7F0ACFC8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ACFCC:
    ctx->pc = 0x7F0ACFCCu;
    // 7F0ACFCC: addi    r5, r4, 29504
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29504);

label_7F0ACFD0:
    ctx->pc = 0x7F0ACFD0u;
    // 7F0ACFD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ACFD4:
    ctx->pc = 0x7F0ACFD4u;
    // 7F0ACFD4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ACFD8:
    ctx->pc = 0x7F0ACFD8u;
    // 7F0ACFD8: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ACFDC:
    ctx->pc = 0x7F0ACFDCu;
    // 7F0ACFDC: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACFE0:
    ctx->pc = 0x7F0ACFE0u;
    // 7F0ACFE0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0ACFE4:
    ctx->pc = 0x7F0ACFE4u;
    // 7F0ACFE4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ACFE8:
    ctx->pc = 0x7F0ACFE8u;
    // 7F0ACFE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACFEC:
    ctx->pc = 0x7F0ACFECu;
    ctx->downcount -= 4;
    // 7F0ACFEC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ACFF0:
    ctx->pc = 0x7F0ACFF0u;
    // 7F0ACFF0: addi    r4, r4, 29896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29896);

label_7F0ACFF4:
    ctx->pc = 0x7F0ACFF4u;
    // 7F0ACFF4: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ACFF8:
    ctx->pc = 0x7F0ACFF8u;
    // 7F0ACFF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ACFFC:
    ctx->pc = 0x7F0ACFFCu;
    ctx->downcount -= 5;
    // 7F0ACFFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD000:
    ctx->pc = 0x7F0AD000u;
    // 7F0AD000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD004:
    ctx->pc = 0x7F0AD004u;
    // 7F0AD004: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD008:
    ctx->pc = 0x7F0AD008u;
    // 7F0AD008: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AD00C:
    ctx->pc = 0x7F0AD00Cu;
    // 7F0AD00C: bl      0x7F3A7D6C
    {
            ctx->lr = 0x7F0AD010u;
            ctx->pc = 0x7F3A7D6Cu;
            return;
    }

label_7F0AD010:
    ctx->pc = 0x7F0AD010u;
    ctx->downcount -= 2;
    // 7F0AD010: cmpwi   r3, 116
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(116);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD014:
    ctx->pc = 0x7F0AD014u;
    // 7F0AD014: bc    12, 2, 0x7F0AD03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD03C;
        }
    }

label_7F0AD018:
    ctx->pc = 0x7F0AD018u;
    ctx->downcount -= 1;
    // 7F0AD018: bc    4, 0, 0x7F0AD030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD030;
        }
    }

label_7F0AD01C:
    ctx->pc = 0x7F0AD01Cu;
    ctx->downcount -= 2;
    // 7F0AD01C: cmpwi   r3, 88
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(88);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD020:
    ctx->pc = 0x7F0AD020u;
    // 7F0AD020: bc    4, 0, 0x7F0AD09C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD09C;
        }
    }

label_7F0AD024:
    ctx->pc = 0x7F0AD024u;
    ctx->downcount -= 2;
    // 7F0AD024: cmpwi   r3, 86
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(86);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD028:
    ctx->pc = 0x7F0AD028u;
    // 7F0AD028: bc    4, 0, 0x7F0AD07C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD07C;
        }
    }

label_7F0AD02C:
    ctx->pc = 0x7F0AD02Cu;
    ctx->downcount -= 1;
    // 7F0AD02C: b       0x7F0AD09C
    {
            goto label_7F0AD09C;
    }

label_7F0AD030:
    ctx->pc = 0x7F0AD030u;
    ctx->downcount -= 2;
    // 7F0AD030: cmpwi   r3, 118
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(118);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD034:
    ctx->pc = 0x7F0AD034u;
    // 7F0AD034: bc    4, 0, 0x7F0AD09C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD09C;
        }
    }

label_7F0AD038:
    ctx->pc = 0x7F0AD038u;
    ctx->downcount -= 1;
    // 7F0AD038: b       0x7F0AD05C
    {
            goto label_7F0AD05C;
    }

label_7F0AD03C:
    ctx->pc = 0x7F0AD03Cu;
    ctx->downcount -= 8;
    // 7F0AD03C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AD040:
    ctx->pc = 0x7F0AD040u;
    // 7F0AD040: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AD044:
    ctx->pc = 0x7F0AD044u;
    // 7F0AD044: lfs     f1, -5228(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD044u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AD048:
    ctx->pc = 0x7F0AD048u;
    // 7F0AD048: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F0AD04C:
    ctx->pc = 0x7F0AD04Cu;
    // 7F0AD04C: lfs     f0, -5224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD04Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD050:
    ctx->pc = 0x7F0AD050u;
    // 7F0AD050: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AD054:
    ctx->pc = 0x7F0AD054u;
    // 7F0AD054: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AD058:
    ctx->pc = 0x7F0AD058u;
    // 7F0AD058: b       0x7F0AD0A0
    {
            goto label_7F0AD0A0;
    }

label_7F0AD05C:
    ctx->pc = 0x7F0AD05Cu;
    ctx->downcount -= 8;
    // 7F0AD05C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AD060:
    ctx->pc = 0x7F0AD060u;
    // 7F0AD060: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AD064:
    ctx->pc = 0x7F0AD064u;
    // 7F0AD064: lfs     f1, -5220(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD064u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AD068:
    ctx->pc = 0x7F0AD068u;
    // 7F0AD068: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F0AD06C:
    ctx->pc = 0x7F0AD06Cu;
    // 7F0AD06C: lfs     f0, -5216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD06Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD070:
    ctx->pc = 0x7F0AD070u;
    // 7F0AD070: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AD074:
    ctx->pc = 0x7F0AD074u;
    // 7F0AD074: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AD078:
    ctx->pc = 0x7F0AD078u;
    // 7F0AD078: b       0x7F0AD0A0
    {
            goto label_7F0AD0A0;
    }

label_7F0AD07C:
    ctx->pc = 0x7F0AD07Cu;
    ctx->downcount -= 8;
    // 7F0AD07C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AD080:
    ctx->pc = 0x7F0AD080u;
    // 7F0AD080: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AD084:
    ctx->pc = 0x7F0AD084u;
    // 7F0AD084: lfs     f1, -5212(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD084u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AD088:
    ctx->pc = 0x7F0AD088u;
    // 7F0AD088: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F0AD08C:
    ctx->pc = 0x7F0AD08Cu;
    // 7F0AD08C: lfs     f0, -5208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD08Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD090:
    ctx->pc = 0x7F0AD090u;
    // 7F0AD090: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AD094:
    ctx->pc = 0x7F0AD094u;
    // 7F0AD094: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AD098:
    ctx->pc = 0x7F0AD098u;
    // 7F0AD098: b       0x7F0AD0A0
    {
            goto label_7F0AD0A0;
    }

label_7F0AD09C:
    ctx->pc = 0x7F0AD09Cu;
    ctx->downcount -= 1;
    // 7F0AD09C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AD0A0:
    ctx->pc = 0x7F0AD0A0u;
    ctx->downcount -= 3;
    // 7F0AD0A0: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F0AD0A4:
    ctx->pc = 0x7F0AD0A4u;
    // 7F0AD0A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD0A8:
    ctx->pc = 0x7F0AD0A8u;
    // 7F0AD0A8: bl      0x7F290054
    {
            ctx->lr = 0x7F0AD0ACu;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F0AD0AC:
    ctx->pc = 0x7F0AD0ACu;
    ctx->downcount -= 5;
    // 7F0AD0AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD0B0:
    ctx->pc = 0x7F0AD0B0u;
    // 7F0AD0B0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AD0B4:
    ctx->pc = 0x7F0AD0B4u;
    // 7F0AD0B4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AD0B8:
    ctx->pc = 0x7F0AD0B8u;
    // 7F0AD0B8: or.   r0, r4, r0
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

label_7F0AD0BC:
    ctx->pc = 0x7F0AD0BCu;
    // 7F0AD0BC: bc    12, 2, 0x7F0AD1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD1DC;
        }
    }

label_7F0AD0C0:
    ctx->pc = 0x7F0AD0C0u;
    ctx->downcount -= 3;
    // 7F0AD0C0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0AD0C4:
    ctx->pc = 0x7F0AD0C4u;
    // 7F0AD0C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD0C8:
    ctx->pc = 0x7F0AD0C8u;
    // 7F0AD0C8: bl      0x7F290004
    {
            ctx->lr = 0x7F0AD0CCu;
            ctx->pc = 0x7F290004u;
            return;
    }

label_7F0AD0CC:
    ctx->pc = 0x7F0AD0CCu;
    ctx->downcount -= 20;
    // 7F0AD0CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD0D0:
    ctx->pc = 0x7F0AD0D0u;
    // 7F0AD0D0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AD0D4:
    ctx->pc = 0x7F0AD0D4u;
    // 7F0AD0D4: addi    r7, r3, -5660
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD0D8:
    ctx->pc = 0x7F0AD0D8u;
    // 7F0AD0D8: lfs     f2, -5212(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD0D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AD0DC:
    ctx->pc = 0x7F0AD0DCu;
    // 7F0AD0DC: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AD0E0:
    ctx->pc = 0x7F0AD0E0u;
    // 7F0AD0E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD0E4:
    ctx->pc = 0x7F0AD0E4u;
    // 7F0AD0E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AD0E8:
    ctx->pc = 0x7F0AD0E8u;
    // 7F0AD0E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AD0EC:
    ctx->pc = 0x7F0AD0ECu;
    // 7F0AD0EC: sth     r0, 3904(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3904);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AD0F0:
    ctx->pc = 0x7F0AD0F0u;
    // 7F0AD0F0: addi    r6, r4, -5204
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5204);

label_7F0AD0F4:
    ctx->pc = 0x7F0AD0F4u;
    // 7F0AD0F4: addi    r4, r3, -5208
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5208);

label_7F0AD0F8:
    ctx->pc = 0x7F0AD0F8u;
    // 7F0AD0F8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD0F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AD0FC:
    ctx->pc = 0x7F0AD0FCu;
    // 7F0AD0FC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD0FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD100:
    ctx->pc = 0x7F0AD100u;
    // 7F0AD100: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD104:
    ctx->pc = 0x7F0AD104u;
    // 7F0AD104: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD108:
    ctx->pc = 0x7F0AD108u;
    // 7F0AD108: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0AD10C:
    ctx->pc = 0x7F0AD10Cu;
    // 7F0AD10C: addi    r4, r3, 64
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(64);

label_7F0AD110:
    ctx->pc = 0x7F0AD110u;
    // 7F0AD110: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AD114:
    ctx->pc = 0x7F0AD114u;
    // 7F0AD114: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AD118:
    ctx->pc = 0x7F0AD118u;
    // 7F0AD118: bl      0x7F297054
    {
            ctx->lr = 0x7F0AD11Cu;
            ctx->pc = 0x7F297054u;
            return;
    }

label_7F0AD11C:
    ctx->pc = 0x7F0AD11Cu;
    ctx->downcount -= 7;
    // 7F0AD11C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD120:
    ctx->pc = 0x7F0AD120u;
    // 7F0AD120: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD124:
    ctx->pc = 0x7F0AD124u;
    // 7F0AD124: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD128:
    ctx->pc = 0x7F0AD128u;
    // 7F0AD128: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AD12C:
    ctx->pc = 0x7F0AD12Cu;
    // 7F0AD12C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD130:
    ctx->pc = 0x7F0AD130u;
    // 7F0AD130: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F0AD134:
    ctx->pc = 0x7F0AD134u;
    // 7F0AD134: bl      0x7F024198
    {
            ctx->lr = 0x7F0AD138u;
            ctx->pc = 0x7F024198u;
            return;
    }

label_7F0AD138:
    ctx->pc = 0x7F0AD138u;
    ctx->downcount -= 4;
    // 7F0AD138: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD13C:
    ctx->pc = 0x7F0AD13Cu;
    // 7F0AD13C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD140:
    ctx->pc = 0x7F0AD140u;
    // 7F0AD140: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD144:
    ctx->pc = 0x7F0AD144u;
    // 7F0AD144: bl      0x7F291490
    {
            ctx->lr = 0x7F0AD148u;
            ctx->pc = 0x7F291490u;
            return;
    }

label_7F0AD148:
    ctx->pc = 0x7F0AD148u;
    ctx->downcount -= 4;
    // 7F0AD148: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD14C:
    ctx->pc = 0x7F0AD14Cu;
    // 7F0AD14C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD150:
    ctx->pc = 0x7F0AD150u;
    // 7F0AD150: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD154:
    ctx->pc = 0x7F0AD154u;
    // 7F0AD154: bl      0x7F291A4C
    {
            ctx->lr = 0x7F0AD158u;
            ctx->pc = 0x7F291A4Cu;
            return;
    }

label_7F0AD158:
    ctx->pc = 0x7F0AD158u;
    ctx->downcount -= 3;
    // 7F0AD158: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F0AD15C:
    ctx->pc = 0x7F0AD15Cu;
    // 7F0AD15C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD160:
    ctx->pc = 0x7F0AD160u;
    // 7F0AD160: bl      0x7F29007C
    {
            ctx->lr = 0x7F0AD164u;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F0AD164:
    ctx->pc = 0x7F0AD164u;
    ctx->downcount -= 11;
    // 7F0AD164: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD168:
    ctx->pc = 0x7F0AD168u;
    // 7F0AD168: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_7F0AD16C:
    ctx->pc = 0x7F0AD16Cu;
    // 7F0AD16C: addi    r6, r3, -6312
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6312);

label_7F0AD170:
    ctx->pc = 0x7F0AD170u;
    // 7F0AD170: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD174:
    ctx->pc = 0x7F0AD174u;
    // 7F0AD174: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD178:
    ctx->pc = 0x7F0AD178u;
    // 7F0AD178: li      r4, 8320
    ctx->gpr[4] = (u32)(s32)(8320);

label_7F0AD17C:
    ctx->pc = 0x7F0AD17Cu;
    // 7F0AD17C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD180:
    ctx->pc = 0x7F0AD180u;
    // 7F0AD180: stw     r7, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AD184:
    ctx->pc = 0x7F0AD184u;
    // 7F0AD184: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD188:
    ctx->pc = 0x7F0AD188u;
    // 7F0AD188: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD18C:
    ctx->pc = 0x7F0AD18Cu;
    // 7F0AD18C: bl      0x7F29002C
    {
            ctx->lr = 0x7F0AD190u;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F0AD190:
    ctx->pc = 0x7F0AD190u;
    ctx->downcount -= 9;
    // 7F0AD190: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD194:
    ctx->pc = 0x7F0AD194u;
    // 7F0AD194: li      r0, -260
    ctx->gpr[0] = (u32)(s32)(-260);

label_7F0AD198:
    ctx->pc = 0x7F0AD198u;
    // 7F0AD198: addi    r5, r3, -5660
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD19C:
    ctx->pc = 0x7F0AD19Cu;
    // 7F0AD19C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD1A0:
    ctx->pc = 0x7F0AD1A0u;
    // 7F0AD1A0: lhz     r3, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F0AD1A4:
    ctx->pc = 0x7F0AD1A4u;
    // 7F0AD1A4: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0AD1A8:
    ctx->pc = 0x7F0AD1A8u;
    // 7F0AD1A8: sth     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AD1AC:
    ctx->pc = 0x7F0AD1ACu;
    // 7F0AD1AC: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD1B0:
    ctx->pc = 0x7F0AD1B0u;
    // 7F0AD1B0: bl      0x7F2917E0
    {
            ctx->lr = 0x7F0AD1B4u;
            ctx->pc = 0x7F2917E0u;
            return;
    }

label_7F0AD1B4:
    ctx->pc = 0x7F0AD1B4u;
    ctx->downcount -= 10;
    // 7F0AD1B4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0AD1B8:
    ctx->pc = 0x7F0AD1B8u;
    // 7F0AD1B8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AD1BC:
    ctx->pc = 0x7F0AD1BCu;
    // 7F0AD1BC: addi    r6, r4, -5660
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F0AD1C0:
    ctx->pc = 0x7F0AD1C0u;
    // 7F0AD1C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD1C4:
    ctx->pc = 0x7F0AD1C4u;
    // 7F0AD1C4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD1C8:
    ctx->pc = 0x7F0AD1C8u;
    // 7F0AD1C8: addi    r4, r3, 23964
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(23964);

label_7F0AD1CC:
    ctx->pc = 0x7F0AD1CCu;
    // 7F0AD1CC: sth     r0, 3904(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3904);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AD1D0:
    ctx->pc = 0x7F0AD1D0u;
    // 7F0AD1D0: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD1D4:
    ctx->pc = 0x7F0AD1D4u;
    // 7F0AD1D4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD1D8:
    ctx->pc = 0x7F0AD1D8u;
    // 7F0AD1D8: bl      0x7F290920
    {
            ctx->lr = 0x7F0AD1DCu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F0AD1DC:
    ctx->pc = 0x7F0AD1DCu;
    ctx->downcount -= 7;
    // 7F0AD1DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD1E0:
    ctx->pc = 0x7F0AD1E0u;
    // 7F0AD1E0: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD1E4:
    ctx->pc = 0x7F0AD1E4u;
    // 7F0AD1E4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD1E8:
    ctx->pc = 0x7F0AD1E8u;
    // 7F0AD1E8: lwz     r4, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD1EC:
    ctx->pc = 0x7F0AD1ECu;
    // 7F0AD1EC: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD1F0:
    ctx->pc = 0x7F0AD1F0u;
    // 7F0AD1F0: rlwinm. r0, r3, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AD1F4:
    ctx->pc = 0x7F0AD1F4u;
    // 7F0AD1F4: bc    12, 2, 0x7F0AD200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD200;
        }
    }

label_7F0AD1F8:
    ctx->pc = 0x7F0AD1F8u;
    ctx->downcount -= 2;
    // 7F0AD1F8: rlwinm r0, r3, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFCFFFu;
    }

label_7F0AD1FC:
    ctx->pc = 0x7F0AD1FCu;
    // 7F0AD1FC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD200:
    ctx->pc = 0x7F0AD200u;
    ctx->downcount -= 2;
    // 7F0AD200: cmpwi   r31, 0
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

label_7F0AD204:
    ctx->pc = 0x7F0AD204u;
    // 7F0AD204: bc    12, 2, 0x7F0AD2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD2A4;
        }
    }

label_7F0AD208:
    ctx->pc = 0x7F0AD208u;
    ctx->downcount -= 9;
    // 7F0AD208: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AD20C:
    ctx->pc = 0x7F0AD20Cu;
    // 7F0AD20C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD210:
    ctx->pc = 0x7F0AD210u;
    // 7F0AD210: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD214:
    ctx->pc = 0x7F0AD214u;
    // 7F0AD214: lfs     f0, -5232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD214u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD218:
    ctx->pc = 0x7F0AD218u;
    // 7F0AD218: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD21C:
    ctx->pc = 0x7F0AD21Cu;
    // 7F0AD21C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD220:
    ctx->pc = 0x7F0AD220u;
    // 7F0AD220: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AD224:
    ctx->pc = 0x7F0AD224u;
    // 7F0AD224: addi    r4, r3, 64
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(64);

label_7F0AD228:
    ctx->pc = 0x7F0AD228u;
    // 7F0AD228: bl      0x7F297054
    {
            ctx->lr = 0x7F0AD22Cu;
            ctx->pc = 0x7F297054u;
            return;
    }

label_7F0AD22C:
    ctx->pc = 0x7F0AD22Cu;
    ctx->downcount -= 7;
    // 7F0AD22C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD230:
    ctx->pc = 0x7F0AD230u;
    // 7F0AD230: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD234:
    ctx->pc = 0x7F0AD234u;
    // 7F0AD234: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD238:
    ctx->pc = 0x7F0AD238u;
    // 7F0AD238: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AD23C:
    ctx->pc = 0x7F0AD23Cu;
    // 7F0AD23C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD240:
    ctx->pc = 0x7F0AD240u;
    // 7F0AD240: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F0AD244:
    ctx->pc = 0x7F0AD244u;
    // 7F0AD244: bl      0x7F024198
    {
            ctx->lr = 0x7F0AD248u;
            ctx->pc = 0x7F024198u;
            return;
    }

label_7F0AD248:
    ctx->pc = 0x7F0AD248u;
    ctx->downcount -= 3;
    // 7F0AD248: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0AD24C:
    ctx->pc = 0x7F0AD24Cu;
    // 7F0AD24C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD250:
    ctx->pc = 0x7F0AD250u;
    // 7F0AD250: bl      0x7F290004
    {
            ctx->lr = 0x7F0AD254u;
            ctx->pc = 0x7F290004u;
            return;
    }

label_7F0AD254:
    ctx->pc = 0x7F0AD254u;
    ctx->downcount -= 4;
    // 7F0AD254: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD258:
    ctx->pc = 0x7F0AD258u;
    // 7F0AD258: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD25C:
    ctx->pc = 0x7F0AD25Cu;
    // 7F0AD25C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD260:
    ctx->pc = 0x7F0AD260u;
    // 7F0AD260: bl      0x7F2916FC
    {
            ctx->lr = 0x7F0AD264u;
            ctx->pc = 0x7F2916FCu;
            return;
    }

label_7F0AD264:
    ctx->pc = 0x7F0AD264u;
    ctx->downcount -= 4;
    // 7F0AD264: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD268:
    ctx->pc = 0x7F0AD268u;
    // 7F0AD268: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD26C:
    ctx->pc = 0x7F0AD26Cu;
    // 7F0AD26C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD270:
    ctx->pc = 0x7F0AD270u;
    // 7F0AD270: bl      0x7F291650
    {
            ctx->lr = 0x7F0AD274u;
            ctx->pc = 0x7F291650u;
            return;
    }

label_7F0AD274:
    ctx->pc = 0x7F0AD274u;
    ctx->downcount -= 4;
    // 7F0AD274: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD278:
    ctx->pc = 0x7F0AD278u;
    // 7F0AD278: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD27C:
    ctx->pc = 0x7F0AD27Cu;
    // 7F0AD27C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD280:
    ctx->pc = 0x7F0AD280u;
    // 7F0AD280: bl      0x7F291490
    {
            ctx->lr = 0x7F0AD284u;
            ctx->pc = 0x7F291490u;
            return;
    }

label_7F0AD284:
    ctx->pc = 0x7F0AD284u;
    ctx->downcount -= 5;
    // 7F0AD284: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD288:
    ctx->pc = 0x7F0AD288u;
    // 7F0AD288: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AD28C:
    ctx->pc = 0x7F0AD28Cu;
    // 7F0AD28C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F0AD290:
    ctx->pc = 0x7F0AD290u;
    // 7F0AD290: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD294:
    ctx->pc = 0x7F0AD294u;
    // 7F0AD294: bl      0x7F291F7C
    {
            ctx->lr = 0x7F0AD298u;
            ctx->pc = 0x7F291F7Cu;
            return;
    }

label_7F0AD298:
    ctx->pc = 0x7F0AD298u;
    ctx->downcount -= 3;
    // 7F0AD298: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AD29C:
    ctx->pc = 0x7F0AD29Cu;
    // 7F0AD29C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F0AD2A0:
    ctx->pc = 0x7F0AD2A0u;
    // 7F0AD2A0: bl      0x7F29007C
    {
            ctx->lr = 0x7F0AD2A4u;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F0AD2A4:
    ctx->pc = 0x7F0AD2A4u;
    ctx->downcount -= 6;
    // 7F0AD2A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD2A8:
    ctx->pc = 0x7F0AD2A8u;
    // 7F0AD2A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AD2AC:
    ctx->pc = 0x7F0AD2ACu;
    // 7F0AD2AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD2B0:
    ctx->pc = 0x7F0AD2B0u;
    // 7F0AD2B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AD2B4:
    ctx->pc = 0x7F0AD2B4u;
    // 7F0AD2B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD2B8:
    ctx->pc = 0x7F0AD2B8u;
    ctx->downcount -= 15;
    // 7F0AD2B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD2BC:
    ctx->pc = 0x7F0AD2BCu;
    // 7F0AD2BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD2C0:
    ctx->pc = 0x7F0AD2C0u;
    // 7F0AD2C0: lis     r5, 201
    ctx->gpr[5] = ((u32)(s32)(201) << 16);

label_7F0AD2C4:
    ctx->pc = 0x7F0AD2C4u;
    // 7F0AD2C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD2C8:
    ctx->pc = 0x7F0AD2C8u;
    // 7F0AD2C8: addi    r6, r5, -23923
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-23923);

label_7F0AD2CC:
    ctx->pc = 0x7F0AD2CCu;
    // 7F0AD2CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD2D0:
    ctx->pc = 0x7F0AD2D0u;
    // 7F0AD2D0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0AD2D4:
    ctx->pc = 0x7F0AD2D4u;
    // 7F0AD2D4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AD2D8:
    ctx->pc = 0x7F0AD2D8u;
    // 7F0AD2D8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD2DC:
    ctx->pc = 0x7F0AD2DCu;
    // 7F0AD2DC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD2E0:
    ctx->pc = 0x7F0AD2E0u;
    // 7F0AD2E0: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AD2E4:
    ctx->pc = 0x7F0AD2E4u;
    // 7F0AD2E4: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AD2E8:
    ctx->pc = 0x7F0AD2E8u;
    // 7F0AD2E8: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AD2EC:
    ctx->pc = 0x7F0AD2ECu;
    // 7F0AD2EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD2F0:
    ctx->pc = 0x7F0AD2F0u;
    // 7F0AD2F0: bl      0x7F3C9494
    {
            ctx->lr = 0x7F0AD2F4u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F0AD2F4:
    ctx->pc = 0x7F0AD2F4u;
    ctx->downcount -= 5;
    // 7F0AD2F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD2F8:
    ctx->pc = 0x7F0AD2F8u;
    // 7F0AD2F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD2FC:
    ctx->pc = 0x7F0AD2FCu;
    // 7F0AD2FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AD300:
    ctx->pc = 0x7F0AD300u;
    // 7F0AD300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD304:
    ctx->pc = 0x7F0AD304u;
    ctx->downcount -= 7;
    // 7F0AD304: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD308:
    ctx->pc = 0x7F0AD308u;
    // 7F0AD308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD30C:
    ctx->pc = 0x7F0AD30Cu;
    // 7F0AD30C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD310:
    ctx->pc = 0x7F0AD310u;
    // 7F0AD310: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD314:
    ctx->pc = 0x7F0AD314u;
    // 7F0AD314: lwzu     r0, 29912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29912);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0AD318:
    ctx->pc = 0x7F0AD318u;
    // 7F0AD318: cmpwi   r0, 0
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

label_7F0AD31C:
    ctx->pc = 0x7F0AD31Cu;
    // 7F0AD31C: bc    4, 1, 0x7F0AD358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD358;
        }
    }

label_7F0AD320:
    ctx->pc = 0x7F0AD320u;
    ctx->downcount -= 4;
    // 7F0AD320: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AD324:
    ctx->pc = 0x7F0AD324u;
    // 7F0AD324: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AD328:
    ctx->pc = 0x7F0AD328u;
    // 7F0AD328: addi    r3, r3, -32536
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32536);

label_7F0AD32C:
    ctx->pc = 0x7F0AD32Cu;
    // 7F0AD32C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0AD330u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0AD330:
    ctx->pc = 0x7F0AD330u;
    ctx->downcount -= 4;
    // 7F0AD330: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AD334:
    ctx->pc = 0x7F0AD334u;
    // 7F0AD334: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AD338:
    ctx->pc = 0x7F0AD338u;
    // 7F0AD338: addi    r3, r3, -32532
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32532);

label_7F0AD33C:
    ctx->pc = 0x7F0AD33Cu;
    // 7F0AD33C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0AD340u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0AD340:
    ctx->pc = 0x7F0AD340u;
    ctx->downcount -= 6;
    // 7F0AD340: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD344:
    ctx->pc = 0x7F0AD344u;
    // 7F0AD344: addi    r4, r3, 29912
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29912);

label_7F0AD348:
    ctx->pc = 0x7F0AD348u;
    // 7F0AD348: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD34C:
    ctx->pc = 0x7F0AD34Cu;
    // 7F0AD34C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0AD350:
    ctx->pc = 0x7F0AD350u;
    // 7F0AD350: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD354:
    ctx->pc = 0x7F0AD354u;
    // 7F0AD354: b       0x7F0AD360
    {
            goto label_7F0AD360;
    }

label_7F0AD358:
    ctx->pc = 0x7F0AD358u;
    ctx->downcount -= 2;
    // 7F0AD358: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD35C:
    ctx->pc = 0x7F0AD35Cu;
    // 7F0AD35C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD360:
    ctx->pc = 0x7F0AD360u;
    ctx->downcount -= 5;
    // 7F0AD360: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD364:
    ctx->pc = 0x7F0AD364u;
    // 7F0AD364: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD368:
    ctx->pc = 0x7F0AD368u;
    // 7F0AD368: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD36C:
    ctx->pc = 0x7F0AD36Cu;
    // 7F0AD36C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD370:
    ctx->pc = 0x7F0AD370u;
    ctx->downcount -= 23;
    // 7F0AD370: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD374:
    ctx->pc = 0x7F0AD374u;
    // 7F0AD374: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD378:
    ctx->pc = 0x7F0AD378u;
    // 7F0AD378: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD37C:
    ctx->pc = 0x7F0AD37Cu;
    // 7F0AD37C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD380:
    ctx->pc = 0x7F0AD380u;
    // 7F0AD380: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD384:
    ctx->pc = 0x7F0AD384u;
    // 7F0AD384: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AD388:
    ctx->pc = 0x7F0AD388u;
    // 7F0AD388: addi    r30, r3, -5708
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0AD38C:
    ctx->pc = 0x7F0AD38Cu;
    // 7F0AD38C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0AD390:
    ctx->pc = 0x7F0AD390u;
    // 7F0AD390: addi    r29, r4, 29544
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AD394:
    ctx->pc = 0x7F0AD394u;
    // 7F0AD394: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0AD398:
    ctx->pc = 0x7F0AD398u;
    // 7F0AD398: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0AD39C:
    ctx->pc = 0x7F0AD39Cu;
    // 7F0AD39C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AD3A0:
    ctx->pc = 0x7F0AD3A0u;
    // 7F0AD3A0: b       0x7F0AD424
    {
            goto label_7F0AD424;
    }

label_7F0AD3A4:
    ctx->pc = 0x7F0AD3A4u;
    ctx->downcount -= 5;
    // 7F0AD3A4: lwz     r5, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD3A8:
    // 7F0AD3A8: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0AD3AC:
    ctx->pc = 0x7F0AD3ACu;
    // 7F0AD3AC: lha     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AD3B0:
    ctx->pc = 0x7F0AD3B0u;
    // 7F0AD3B0: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD3B4:
    // 7F0AD3B4: bl      0x7F033764
    {
            ctx->lr = 0x7F0AD3B8u;
            ctx->pc = 0x7F033764u;
            return;
    }

label_7F0AD3B8:
    ctx->pc = 0x7F0AD3B8u;
    ctx->downcount -= 18;
    // 7F0AD3B8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AD3BC:
    // 7F0AD3BC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD3C0:
    ctx->pc = 0x7F0AD3C0u;
    // 7F0AD3C0: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD3C4:
    ctx->pc = 0x7F0AD3C4u;
    // 7F0AD3C4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AD3C8:
    ctx->pc = 0x7F0AD3C8u;
    // 7F0AD3C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AD3CC:
    ctx->pc = 0x7F0AD3CCu;
    // 7F0AD3CC: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AD3D0:
    ctx->pc = 0x7F0AD3D0u;
    // 7F0AD3D0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AD3D4:
    ctx->pc = 0x7F0AD3D4u;
    // 7F0AD3D4: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD3D8:
    ctx->pc = 0x7F0AD3D8u;
    // 7F0AD3D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD3DC:
    ctx->pc = 0x7F0AD3DCu;
    // 7F0AD3DC: sth     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AD3E0:
    ctx->pc = 0x7F0AD3E0u;
    // 7F0AD3E0: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AD3E4:
    ctx->pc = 0x7F0AD3E4u;
    // 7F0AD3E4: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AD3E8:
    // 7F0AD3E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AD3EC:
    ctx->pc = 0x7F0AD3ECu;
    // 7F0AD3EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AD3F0:
    ctx->pc = 0x7F0AD3F0u;
    // 7F0AD3F0: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AD3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AD3F4:
    ctx->pc = 0x7F0AD3F4u;
    // 7F0AD3F4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD3F8:
    ctx->pc = 0x7F0AD3F8u;
    // 7F0AD3F8: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AD3FC:
    // 7F0AD3FC: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0AD400u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0AD400:
    ctx->downcount -= 3;
    // 7F0AD400: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD404:
    // 7F0AD404: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD408:
    // 7F0AD408: bl      0x7F0A94E8
    {
            ctx->lr = 0x7F0AD40Cu;
            ctx->pc = 0x7F0A94E8u;
            return;
    }

label_7F0AD40C:
    ctx->downcount -= 2;
    // 7F0AD40C: cmpw    r3, r27
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD410:
    // 7F0AD410: bc    4, 1, 0x7F0AD41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD41C;
        }
    }

label_7F0AD414:
    ctx->downcount -= 2;
    // 7F0AD414: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AD418:
    // 7F0AD418: or   r28, r26, r26
    {
        ctx->gpr[28] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0AD41C:
    ctx->downcount -= 2;
    // 7F0AD41C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0AD420:
    // 7F0AD420: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_7F0AD424:
    ctx->pc = 0x7F0AD424u;
    ctx->downcount -= 3;
    // 7F0AD424: lha     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AD428:
    // 7F0AD428: cmpw    r26, r0
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

label_7F0AD42C:
    // 7F0AD42C: bc    12, 0, 0x7F0AD3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD3A4u;
                return;
            }
            goto label_7F0AD3A4;
        }
    }

label_7F0AD430:
    ctx->pc = 0x7F0AD430u;
    ctx->downcount -= 19;
    // 7F0AD430: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD434:
    ctx->pc = 0x7F0AD434u;
    // 7F0AD434: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD438:
    ctx->pc = 0x7F0AD438u;
    // 7F0AD438: sth     r28, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F0AD43C:
    ctx->pc = 0x7F0AD43Cu;
    // 7F0AD43C: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AD440:
    ctx->pc = 0x7F0AD440u;
    // 7F0AD440: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD444:
    ctx->pc = 0x7F0AD444u;
    // 7F0AD444: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD448:
    ctx->pc = 0x7F0AD448u;
    // 7F0AD448: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0AD44C:
    ctx->pc = 0x7F0AD44Cu;
    // 7F0AD44C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD450:
    ctx->pc = 0x7F0AD450u;
    ctx->downcount -= 7;
    // 7F0AD450: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD454:
    ctx->pc = 0x7F0AD454u;
    // 7F0AD454: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD458:
    ctx->pc = 0x7F0AD458u;
    // 7F0AD458: addi    r7, r4, 29544
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AD45C:
    ctx->pc = 0x7F0AD45Cu;
    // 7F0AD45C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AD460:
    ctx->pc = 0x7F0AD460u;
    // 7F0AD460: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD464:
    ctx->pc = 0x7F0AD464u;
    // 7F0AD464: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AD468:
    ctx->pc = 0x7F0AD468u;
    // 7F0AD468: b       0x7F0AD498
    {
            goto label_7F0AD498;
    }

label_7F0AD46C:
    ctx->downcount -= 7;
    // 7F0AD46C: add   r6, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0AD470:
    ctx->pc = 0x7F0AD470u;
    // 7F0AD470: lwz     r0, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD474:
    // 7F0AD474: rlwinm r6, r0, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F0AD478:
    // 7F0AD478: addi    r0, r6, 152
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(152);

label_7F0AD47C:
    ctx->pc = 0x7F0AD47Cu;
    // 7F0AD47C: lwzx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AD480:
    // 7F0AD480: cmplwi  r6, 0x0000
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

label_7F0AD484:
    // 7F0AD484: bc    12, 2, 0x7F0AD490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD490;
        }
    }

label_7F0AD488:
    ctx->pc = 0x7F0AD488u;
    ctx->downcount -= 2;
    // 7F0AD488: lwz     r0, 5492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD48C:
    ctx->pc = 0x7F0AD48Cu;
    // 7F0AD48C: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD490:
    ctx->downcount -= 2;
    // 7F0AD490: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F0AD494:
    // 7F0AD494: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0AD498:
    ctx->pc = 0x7F0AD498u;
    ctx->downcount -= 3;
    // 7F0AD498: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AD49C:
    // 7F0AD49C: cmpw    r8, r6
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD4A0:
    // 7F0AD4A0: bc    12, 0, 0x7F0AD46C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD46Cu;
                return;
            }
            goto label_7F0AD46C;
        }
    }

label_7F0AD4A4:
    ctx->pc = 0x7F0AD4A4u;
    ctx->downcount -= 4;
    // 7F0AD4A4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD4A8:
    ctx->pc = 0x7F0AD4A8u;
    // 7F0AD4A8: addi    r0, r6, -1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F0AD4AC:
    ctx->pc = 0x7F0AD4ACu;
    // 7F0AD4AC: addi    r5, r4, 29544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AD4B0:
    ctx->pc = 0x7F0AD4B0u;
    // 7F0AD4B0: b       0x7F0AD518
    {
            goto label_7F0AD518;
    }

label_7F0AD4B4:
    ctx->downcount -= 7;
    // 7F0AD4B4: li      r11, -1
    ctx->gpr[11] = (u32)(s32)(-1);

label_7F0AD4B8:
    // 7F0AD4B8: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F0AD4BC:
    // 7F0AD4BC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0AD4C0:
    ctx->pc = 0x7F0AD4C0u;
    // 7F0AD4C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AD4C4:
    // 7F0AD4C4: cmpwi   r0, 1
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

label_7F0AD4C8:
    // 7F0AD4C8: bc    12, 0, 0x7F0AD514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD514;
        }
    }

label_7F0AD4CC:
    ctx->downcount -= 6;
    // 7F0AD4CC: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AD4D0:
    // 7F0AD4D0: add   r6, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0AD4D4:
    ctx->pc = 0x7F0AD4D4u;
    // 7F0AD4D4: lwz     r7, -4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AD4D8:
    ctx->pc = 0x7F0AD4D8u;
    // 7F0AD4D8: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD4DC:
    // 7F0AD4DC: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD4E0:
    // 7F0AD4E0: bc    4, 1, 0x7F0AD508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD508;
        }
    }

label_7F0AD4E4:
    ctx->downcount -= 9;
    // 7F0AD4E4: add   r8, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F0AD4E8:
    ctx->pc = 0x7F0AD4E8u;
    // 7F0AD4E8: stw     r0, -4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD4EC:
    // 7F0AD4EC: addi    r9, r8, 60
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(60);

label_7F0AD4F0:
    ctx->pc = 0x7F0AD4F0u;
    // 7F0AD4F0: lwz     r12, 60(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(60);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0AD4F4:
    ctx->pc = 0x7F0AD4F4u;
    // 7F0AD4F4: lwzu     r0, 64(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

label_7F0AD4F8:
    // 7F0AD4F8: addi    r11, r10, -1
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(-1);

label_7F0AD4FC:
    ctx->pc = 0x7F0AD4FCu;
    // 7F0AD4FC: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AD500:
    ctx->pc = 0x7F0AD500u;
    // 7F0AD500: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD504:
    ctx->pc = 0x7F0AD504u;
    // 7F0AD504: stw     r12, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0AD508:
    ctx->downcount -= 3;
    // 7F0AD508: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F0AD50C:
    // 7F0AD50C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0AD510:
    // 7F0AD510: bc    16, 0, 0x7F0AD4CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD4CCu;
                return;
            }
            goto label_7F0AD4CC;
        }
    }

label_7F0AD514:
    ctx->downcount -= 1;
    // 7F0AD514: or   r0, r11, r11
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[11];
    }

label_7F0AD518:
    ctx->downcount -= 2;
    // 7F0AD518: cmpwi   r0, 0
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

label_7F0AD51C:
    // 7F0AD51C: bc    4, 0, 0x7F0AD4B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD4B4u;
                return;
            }
            goto label_7F0AD4B4;
        }
    }

label_7F0AD520:
    ctx->pc = 0x7F0AD520u;
    ctx->downcount -= 7;
    // 7F0AD520: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0AD524:
    ctx->pc = 0x7F0AD524u;
    // 7F0AD524: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AD528:
    ctx->pc = 0x7F0AD528u;
    // 7F0AD528: addi    r7, r5, 29544
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(29544);

label_7F0AD52C:
    ctx->pc = 0x7F0AD52Cu;
    // 7F0AD52C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0AD530:
    ctx->pc = 0x7F0AD530u;
    // 7F0AD530: addi    r5, r4, -32528
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32528);

label_7F0AD534:
    ctx->pc = 0x7F0AD534u;
    // 7F0AD534: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AD538:
    ctx->pc = 0x7F0AD538u;
    // 7F0AD538: b       0x7F0AD56C
    {
            goto label_7F0AD56C;
    }

label_7F0AD53C:
    ctx->downcount -= 7;
    // 7F0AD53C: add   r6, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0AD540:
    ctx->pc = 0x7F0AD540u;
    // 7F0AD540: lwz     r8, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0AD544:
    // 7F0AD544: rlwinm r6, r8, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F0AD548:
    // 7F0AD548: addi    r0, r6, 152
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(152);

label_7F0AD54C:
    ctx->pc = 0x7F0AD54Cu;
    // 7F0AD54C: lwzx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AD550:
    // 7F0AD550: cmplwi  r6, 0x0000
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

label_7F0AD554:
    // 7F0AD554: bc    12, 2, 0x7F0AD564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD564;
        }
    }

label_7F0AD558:
    ctx->downcount -= 3;
    // 7F0AD558: rlwinm r0, r8, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_7F0AD55C:
    ctx->pc = 0x7F0AD55Cu;
    // 7F0AD55C: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD560:
    ctx->pc = 0x7F0AD560u;
    // 7F0AD560: stw     r0, 5424(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD564:
    ctx->downcount -= 2;
    // 7F0AD564: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F0AD568:
    // 7F0AD568: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0AD56C:
    ctx->pc = 0x7F0AD56Cu;
    ctx->downcount -= 3;
    // 7F0AD56C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD570:
    // 7F0AD570: cmpw    r9, r0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD574:
    // 7F0AD574: bc    12, 0, 0x7F0AD53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD53Cu;
                return;
            }
            goto label_7F0AD53C;
        }
    }

label_7F0AD578:
    ctx->pc = 0x7F0AD578u;
    ctx->downcount -= 2;
    // 7F0AD578: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0AD57C:
    ctx->pc = 0x7F0AD57Cu;
    // 7F0AD57C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD580:
    ctx->pc = 0x7F0AD580u;
    ctx->downcount -= 8;
    // 7F0AD580: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD584:
    ctx->pc = 0x7F0AD584u;
    // 7F0AD584: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD588:
    ctx->pc = 0x7F0AD588u;
    // 7F0AD588: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD58C:
    ctx->pc = 0x7F0AD58Cu;
    // 7F0AD58C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AD590:
    ctx->pc = 0x7F0AD590u;
    // 7F0AD590: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AD594:
    ctx->pc = 0x7F0AD594u;
    // 7F0AD594: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD598:
    ctx->pc = 0x7F0AD598u;
    // 7F0AD598: cmpwi   r0, 1
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

label_7F0AD59C:
    ctx->pc = 0x7F0AD59Cu;
    // 7F0AD59C: bc    12, 2, 0x7F0AD5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD5EC;
        }
    }

label_7F0AD5A0:
    ctx->pc = 0x7F0AD5A0u;
    ctx->downcount -= 1;
    // 7F0AD5A0: bc    4, 0, 0x7F0AD5B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD5B0;
        }
    }

label_7F0AD5A4:
    ctx->pc = 0x7F0AD5A4u;
    ctx->downcount -= 2;
    // 7F0AD5A4: cmpwi   r0, 0
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

label_7F0AD5A8:
    ctx->pc = 0x7F0AD5A8u;
    // 7F0AD5A8: bc    4, 0, 0x7F0AD5BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD5BC;
        }
    }

label_7F0AD5AC:
    ctx->pc = 0x7F0AD5ACu;
    ctx->downcount -= 1;
    // 7F0AD5AC: b       0x7F0AD680
    {
            goto label_7F0AD680;
    }

label_7F0AD5B0:
    ctx->pc = 0x7F0AD5B0u;
    ctx->downcount -= 2;
    // 7F0AD5B0: cmpwi   r0, 3
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

label_7F0AD5B4:
    ctx->pc = 0x7F0AD5B4u;
    // 7F0AD5B4: bc    4, 0, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD5B8:
    ctx->pc = 0x7F0AD5B8u;
    ctx->downcount -= 1;
    // 7F0AD5B8: b       0x7F0AD618
    {
            goto label_7F0AD618;
    }

label_7F0AD5BC:
    ctx->pc = 0x7F0AD5BCu;
    ctx->downcount -= 3;
    // 7F0AD5BC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD5C0:
    ctx->pc = 0x7F0AD5C0u;
    // 7F0AD5C0: cmpwi   r0, 1
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

label_7F0AD5C4:
    ctx->pc = 0x7F0AD5C4u;
    // 7F0AD5C4: bc    4, 2, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD5C8:
    ctx->pc = 0x7F0AD5C8u;
    ctx->downcount -= 9;
    // 7F0AD5C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AD5CC:
    ctx->pc = 0x7F0AD5CCu;
    // 7F0AD5CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD5D0:
    ctx->pc = 0x7F0AD5D0u;
    // 7F0AD5D0: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD5D4:
    ctx->pc = 0x7F0AD5D4u;
    // 7F0AD5D4: addi    r4, r3, 29544
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD5D8:
    ctx->pc = 0x7F0AD5D8u;
    // 7F0AD5D8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD5DC:
    ctx->pc = 0x7F0AD5DCu;
    // 7F0AD5DC: lwz     r3, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD5E0:
    ctx->pc = 0x7F0AD5E0u;
    // 7F0AD5E0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0AD5E4:
    ctx->pc = 0x7F0AD5E4u;
    // 7F0AD5E4: stw     r0, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD5E8:
    ctx->pc = 0x7F0AD5E8u;
    // 7F0AD5E8: b       0x7F0AD680
    {
            goto label_7F0AD680;
    }

label_7F0AD5EC:
    ctx->pc = 0x7F0AD5ECu;
    ctx->downcount -= 6;
    // 7F0AD5EC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD5F0:
    ctx->pc = 0x7F0AD5F0u;
    // 7F0AD5F0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0AD5F4:
    ctx->pc = 0x7F0AD5F4u;
    // 7F0AD5F4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD5F8:
    ctx->pc = 0x7F0AD5F8u;
    // 7F0AD5F8: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD5FC:
    ctx->pc = 0x7F0AD5FCu;
    // 7F0AD5FC: cmpwi   r0, 0
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

label_7F0AD600:
    ctx->pc = 0x7F0AD600u;
    // 7F0AD600: bc    12, 1, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD604:
    ctx->pc = 0x7F0AD604u;
    ctx->downcount -= 5;
    // 7F0AD604: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AD608:
    ctx->pc = 0x7F0AD608u;
    // 7F0AD608: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD60C:
    ctx->pc = 0x7F0AD60Cu;
    // 7F0AD60C: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD610:
    ctx->pc = 0x7F0AD610u;
    // 7F0AD610: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD614:
    ctx->pc = 0x7F0AD614u;
    // 7F0AD614: b       0x7F0AD680
    {
            goto label_7F0AD680;
    }

label_7F0AD618:
    ctx->pc = 0x7F0AD618u;
    ctx->downcount -= 5;
    // 7F0AD618: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD61C:
    ctx->pc = 0x7F0AD61Cu;
    // 7F0AD61C: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD620:
    ctx->pc = 0x7F0AD620u;
    // 7F0AD620: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD624:
    ctx->pc = 0x7F0AD624u;
    // 7F0AD624: cmpwi   r0, 1
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

label_7F0AD628:
    ctx->pc = 0x7F0AD628u;
    // 7F0AD628: bc    12, 2, 0x7F0AD660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD660;
        }
    }

label_7F0AD62C:
    ctx->pc = 0x7F0AD62Cu;
    ctx->downcount -= 1;
    // 7F0AD62C: bc    4, 0, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD630:
    ctx->pc = 0x7F0AD630u;
    ctx->downcount -= 2;
    // 7F0AD630: cmpwi   r0, 0
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

label_7F0AD634:
    ctx->pc = 0x7F0AD634u;
    // 7F0AD634: bc    4, 0, 0x7F0AD63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD63C;
        }
    }

label_7F0AD638:
    ctx->pc = 0x7F0AD638u;
    ctx->downcount -= 1;
    // 7F0AD638: b       0x7F0AD680
    {
            goto label_7F0AD680;
    }

label_7F0AD63C:
    ctx->pc = 0x7F0AD63Cu;
    ctx->downcount -= 3;
    // 7F0AD63C: lwz     r0, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD640:
    ctx->pc = 0x7F0AD640u;
    // 7F0AD640: rlwinm. r0, r0, 0, 31, 31
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

label_7F0AD644:
    ctx->pc = 0x7F0AD644u;
    // 7F0AD644: bc    12, 2, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD648:
    ctx->pc = 0x7F0AD648u;
    ctx->downcount -= 1;
    // 7F0AD648: bl      0x7F0AD370
    {
            ctx->lr = 0x7F0AD64Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD370u;
                return;
            }
            goto label_7F0AD370;
    }

label_7F0AD64C:
    ctx->pc = 0x7F0AD64Cu;
    ctx->downcount -= 5;
    // 7F0AD64C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AD650:
    ctx->pc = 0x7F0AD650u;
    // 7F0AD650: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD654:
    ctx->pc = 0x7F0AD654u;
    // 7F0AD654: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD658:
    ctx->pc = 0x7F0AD658u;
    // 7F0AD658: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD65C:
    ctx->pc = 0x7F0AD65Cu;
    // 7F0AD65C: b       0x7F0AD680
    {
            goto label_7F0AD680;
    }

label_7F0AD660:
    ctx->pc = 0x7F0AD660u;
    ctx->downcount -= 3;
    // 7F0AD660: lwz     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD664:
    ctx->pc = 0x7F0AD664u;
    // 7F0AD664: cmpwi   r0, 16
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

label_7F0AD668:
    ctx->pc = 0x7F0AD668u;
    // 7F0AD668: bc    4, 0, 0x7F0AD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD680;
        }
    }

label_7F0AD66C:
    ctx->pc = 0x7F0AD66Cu;
    ctx->downcount -= 1;
    // 7F0AD66C: bl      0x7F0AD370
    {
            ctx->lr = 0x7F0AD670u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD370u;
                return;
            }
            goto label_7F0AD370;
    }

label_7F0AD670:
    ctx->pc = 0x7F0AD670u;
    ctx->downcount -= 4;
    // 7F0AD670: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AD674:
    ctx->pc = 0x7F0AD674u;
    // 7F0AD674: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD678:
    ctx->pc = 0x7F0AD678u;
    // 7F0AD678: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD67C:
    ctx->pc = 0x7F0AD67Cu;
    // 7F0AD67C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD680:
    ctx->pc = 0x7F0AD680u;
    ctx->downcount -= 6;
    // 7F0AD680: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD684:
    ctx->pc = 0x7F0AD684u;
    // 7F0AD684: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AD688:
    ctx->pc = 0x7F0AD688u;
    // 7F0AD688: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD68C:
    ctx->pc = 0x7F0AD68Cu;
    // 7F0AD68C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD690:
    ctx->pc = 0x7F0AD690u;
    // 7F0AD690: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD694:
    ctx->pc = 0x7F0AD694u;
    ctx->downcount -= 2;
    // 7F0AD694: cmpw    r3, r4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD698:
    ctx->pc = 0x7F0AD698u;
    // 7F0AD698: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD69C:
    ctx->pc = 0x7F0AD69Cu;
    ctx->downcount -= 2;
    // 7F0AD69C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AD6A0:
    ctx->pc = 0x7F0AD6A0u;
    // 7F0AD6A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD6A4:
    ctx->pc = 0x7F0AD6A4u;
    ctx->downcount -= 7;
    // 7F0AD6A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD6A8:
    ctx->pc = 0x7F0AD6A8u;
    // 7F0AD6A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD6AC:
    ctx->pc = 0x7F0AD6ACu;
    // 7F0AD6AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD6B0:
    ctx->pc = 0x7F0AD6B0u;
    // 7F0AD6B0: lwz     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD6B4:
    ctx->pc = 0x7F0AD6B4u;
    // 7F0AD6B4: subf   r0, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0AD6B8:
    ctx->pc = 0x7F0AD6B8u;
    // 7F0AD6B8: cmpwi   r0, 4
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

label_7F0AD6BC:
    ctx->pc = 0x7F0AD6BCu;
    // 7F0AD6BC: bc    4, 1, 0x7F0AD6CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD6CC;
        }
    }

label_7F0AD6C0:
    ctx->pc = 0x7F0AD6C0u;
    ctx->downcount -= 3;
    // 7F0AD6C0: addi    r0, r5, -4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F0AD6C4:
    ctx->pc = 0x7F0AD6C4u;
    // 7F0AD6C4: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD6C8:
    ctx->pc = 0x7F0AD6C8u;
    // 7F0AD6C8: b       0x7F0AD6D0
    {
            goto label_7F0AD6D0;
    }

label_7F0AD6CC:
    ctx->pc = 0x7F0AD6CCu;
    ctx->downcount -= 1;
    // 7F0AD6CC: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD6D0:
    ctx->pc = 0x7F0AD6D0u;
    ctx->downcount -= 6;
    // 7F0AD6D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD6D4:
    ctx->pc = 0x7F0AD6D4u;
    // 7F0AD6D4: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD6D8:
    ctx->pc = 0x7F0AD6D8u;
    // 7F0AD6D8: addi    r3, r3, 29896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29896);

label_7F0AD6DC:
    ctx->pc = 0x7F0AD6DCu;
    // 7F0AD6DC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD6E0:
    ctx->pc = 0x7F0AD6E0u;
    // 7F0AD6E0: cmpw    r0, r3
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

label_7F0AD6E4:
    ctx->pc = 0x7F0AD6E4u;
    // 7F0AD6E4: bc    4, 0, 0x7F0AD6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD6EC;
        }
    }

label_7F0AD6E8:
    ctx->pc = 0x7F0AD6E8u;
    ctx->downcount -= 1;
    // 7F0AD6E8: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD6EC:
    ctx->pc = 0x7F0AD6ECu;
    ctx->downcount -= 2;
    // 7F0AD6EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD6F0:
    ctx->pc = 0x7F0AD6F0u;
    // 7F0AD6F0: bl      0x7F0ACFEC
    {
            ctx->lr = 0x7F0AD6F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ACFECu;
                return;
            }
            goto label_7F0ACFEC;
    }

label_7F0AD6F4:
    ctx->pc = 0x7F0AD6F4u;
    ctx->downcount -= 5;
    // 7F0AD6F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD6F8:
    ctx->pc = 0x7F0AD6F8u;
    // 7F0AD6F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD6FC:
    ctx->pc = 0x7F0AD6FCu;
    // 7F0AD6FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD700:
    ctx->pc = 0x7F0AD700u;
    // 7F0AD700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD704:
    ctx->pc = 0x7F0AD704u;
    ctx->downcount -= 8;
    // 7F0AD704: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD708:
    ctx->pc = 0x7F0AD708u;
    // 7F0AD708: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD70C:
    ctx->pc = 0x7F0AD70Cu;
    // 7F0AD70C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD710:
    ctx->pc = 0x7F0AD710u;
    // 7F0AD710: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AD714:
    ctx->pc = 0x7F0AD714u;
    // 7F0AD714: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AD718:
    ctx->pc = 0x7F0AD718u;
    // 7F0AD718: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD71C:
    ctx->pc = 0x7F0AD71Cu;
    // 7F0AD71C: cmpwi   r0, 1
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

label_7F0AD720:
    ctx->pc = 0x7F0AD720u;
    // 7F0AD720: bc    12, 2, 0x7F0AD788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD788;
        }
    }

label_7F0AD724:
    ctx->pc = 0x7F0AD724u;
    ctx->downcount -= 1;
    // 7F0AD724: bc    4, 0, 0x7F0AD734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD734;
        }
    }

label_7F0AD728:
    ctx->pc = 0x7F0AD728u;
    ctx->downcount -= 2;
    // 7F0AD728: cmpwi   r0, 0
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

label_7F0AD72C:
    ctx->pc = 0x7F0AD72Cu;
    // 7F0AD72C: bc    4, 0, 0x7F0AD740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD740;
        }
    }

label_7F0AD730:
    ctx->pc = 0x7F0AD730u;
    ctx->downcount -= 1;
    // 7F0AD730: b       0x7F0AD830
    {
            goto label_7F0AD830;
    }

label_7F0AD734:
    ctx->pc = 0x7F0AD734u;
    ctx->downcount -= 2;
    // 7F0AD734: cmpwi   r0, 3
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

label_7F0AD738:
    ctx->pc = 0x7F0AD738u;
    // 7F0AD738: bc    4, 0, 0x7F0AD830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD830;
        }
    }

label_7F0AD73C:
    ctx->pc = 0x7F0AD73Cu;
    ctx->downcount -= 1;
    // 7F0AD73C: b       0x7F0AD7B8
    {
            goto label_7F0AD7B8;
    }

label_7F0AD740:
    ctx->pc = 0x7F0AD740u;
    ctx->downcount -= 3;
    // 7F0AD740: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD744:
    ctx->pc = 0x7F0AD744u;
    // 7F0AD744: cmpwi   r0, 4
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

label_7F0AD748:
    ctx->pc = 0x7F0AD748u;
    // 7F0AD748: bc    12, 0, 0x7F0AD830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD830;
        }
    }

label_7F0AD74C:
    ctx->pc = 0x7F0AD74Cu;
    ctx->downcount -= 4;
    // 7F0AD74C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0AD750:
    ctx->pc = 0x7F0AD750u;
    // 7F0AD750: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F0AD754:
    ctx->pc = 0x7F0AD754u;
    // 7F0AD754: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD758:
    ctx->pc = 0x7F0AD758u;
    // 7F0AD758: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD75Cu;
            goto label_7F0AD98C;
    }

label_7F0AD75C:
    ctx->pc = 0x7F0AD75Cu;
    ctx->downcount -= 6;
    // 7F0AD75C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AD760:
    ctx->pc = 0x7F0AD760u;
    // 7F0AD760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD764:
    ctx->pc = 0x7F0AD764u;
    // 7F0AD764: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD768:
    ctx->pc = 0x7F0AD768u;
    // 7F0AD768: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0AD76C:
    ctx->pc = 0x7F0AD76Cu;
    // 7F0AD76C: li      r5, 1205
    ctx->gpr[5] = (u32)(s32)(1205);

label_7F0AD770:
    ctx->pc = 0x7F0AD770u;
    // 7F0AD770: bl      0x7F011698
    {
            ctx->lr = 0x7F0AD774u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F0AD774:
    ctx->pc = 0x7F0AD774u;
    ctx->downcount -= 5;
    // 7F0AD774: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD778:
    ctx->pc = 0x7F0AD778u;
    // 7F0AD778: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD77C:
    ctx->pc = 0x7F0AD77Cu;
    // 7F0AD77C: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD780:
    ctx->pc = 0x7F0AD780u;
    // 7F0AD780: stw     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD784:
    ctx->pc = 0x7F0AD784u;
    // 7F0AD784: b       0x7F0AD830
    {
            goto label_7F0AD830;
    }

label_7F0AD788:
    ctx->pc = 0x7F0AD788u;
    ctx->downcount -= 3;
    // 7F0AD788: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD78C:
    ctx->pc = 0x7F0AD78Cu;
    // 7F0AD78C: cmpwi   r0, 0
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

label_7F0AD790:
    ctx->pc = 0x7F0AD790u;
    // 7F0AD790: bc    12, 1, 0x7F0AD7AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD7AC;
        }
    }

label_7F0AD794:
    ctx->pc = 0x7F0AD794u;
    ctx->downcount -= 2;
    // 7F0AD794: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AD798:
    ctx->pc = 0x7F0AD798u;
    // 7F0AD798: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD79Cu;
            goto label_7F0AD98C;
    }

label_7F0AD79C:
    ctx->pc = 0x7F0AD79Cu;
    ctx->downcount -= 4;
    // 7F0AD79C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AD7A0:
    ctx->pc = 0x7F0AD7A0u;
    // 7F0AD7A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD7A4:
    ctx->pc = 0x7F0AD7A4u;
    // 7F0AD7A4: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AD7A8:
    ctx->pc = 0x7F0AD7A8u;
    // 7F0AD7A8: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD7AC:
    ctx->pc = 0x7F0AD7ACu;
    ctx->downcount -= 2;
    // 7F0AD7AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AD7B0:
    ctx->pc = 0x7F0AD7B0u;
    // 7F0AD7B0: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD7B4u;
            goto label_7F0AD98C;
    }

label_7F0AD7B4:
    ctx->pc = 0x7F0AD7B4u;
    ctx->downcount -= 1;
    // 7F0AD7B4: b       0x7F0AD830
    {
            goto label_7F0AD830;
    }

label_7F0AD7B8:
    ctx->pc = 0x7F0AD7B8u;
    ctx->downcount -= 6;
    // 7F0AD7B8: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AD7BC:
    ctx->pc = 0x7F0AD7BCu;
    // 7F0AD7BC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0AD7C0:
    ctx->pc = 0x7F0AD7C0u;
    // 7F0AD7C0: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD7C4:
    ctx->pc = 0x7F0AD7C4u;
    // 7F0AD7C4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD7C8:
    ctx->pc = 0x7F0AD7C8u;
    // 7F0AD7C8: cmpwi   r0, 0
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

label_7F0AD7CC:
    ctx->pc = 0x7F0AD7CCu;
    // 7F0AD7CC: bc    12, 1, 0x7F0AD7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD7E4;
        }
    }

label_7F0AD7D0:
    ctx->pc = 0x7F0AD7D0u;
    ctx->downcount -= 2;
    // 7F0AD7D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD7D4:
    ctx->pc = 0x7F0AD7D4u;
    // 7F0AD7D4: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD7D8u;
            goto label_7F0AD98C;
    }

label_7F0AD7D8:
    ctx->pc = 0x7F0AD7D8u;
    ctx->downcount -= 3;
    // 7F0AD7D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD7DC:
    ctx->pc = 0x7F0AD7DCu;
    // 7F0AD7DC: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD7E0:
    ctx->pc = 0x7F0AD7E0u;
    // 7F0AD7E0: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD7E4:
    ctx->pc = 0x7F0AD7E4u;
    ctx->downcount -= 3;
    // 7F0AD7E4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD7E8:
    ctx->pc = 0x7F0AD7E8u;
    // 7F0AD7E8: cmpwi   r0, 4
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

label_7F0AD7EC:
    ctx->pc = 0x7F0AD7ECu;
    // 7F0AD7EC: bc    12, 0, 0x7F0AD828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD828;
        }
    }

label_7F0AD7F0:
    ctx->pc = 0x7F0AD7F0u;
    ctx->downcount -= 4;
    // 7F0AD7F0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0AD7F4:
    ctx->pc = 0x7F0AD7F4u;
    // 7F0AD7F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AD7F8:
    ctx->pc = 0x7F0AD7F8u;
    // 7F0AD7F8: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD7FC:
    ctx->pc = 0x7F0AD7FCu;
    // 7F0AD7FC: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD800u;
            goto label_7F0AD98C;
    }

label_7F0AD800:
    ctx->pc = 0x7F0AD800u;
    ctx->downcount -= 6;
    // 7F0AD800: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AD804:
    ctx->pc = 0x7F0AD804u;
    // 7F0AD804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD808:
    ctx->pc = 0x7F0AD808u;
    // 7F0AD808: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD80C:
    ctx->pc = 0x7F0AD80Cu;
    // 7F0AD80C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0AD810:
    ctx->pc = 0x7F0AD810u;
    // 7F0AD810: li      r5, 1205
    ctx->gpr[5] = (u32)(s32)(1205);

label_7F0AD814:
    ctx->pc = 0x7F0AD814u;
    // 7F0AD814: bl      0x7F011698
    {
            ctx->lr = 0x7F0AD818u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F0AD818:
    ctx->pc = 0x7F0AD818u;
    ctx->downcount -= 4;
    // 7F0AD818: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD81C:
    ctx->pc = 0x7F0AD81Cu;
    // 7F0AD81C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD820:
    ctx->pc = 0x7F0AD820u;
    // 7F0AD820: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD824:
    ctx->pc = 0x7F0AD824u;
    // 7F0AD824: stw     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD828:
    ctx->pc = 0x7F0AD828u;
    ctx->downcount -= 2;
    // 7F0AD828: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AD82C:
    ctx->pc = 0x7F0AD82Cu;
    // 7F0AD82C: bl      0x7F0AD98C
    {
            ctx->lr = 0x7F0AD830u;
            goto label_7F0AD98C;
    }

label_7F0AD830:
    ctx->pc = 0x7F0AD830u;
    ctx->downcount -= 9;
    // 7F0AD830: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD834:
    ctx->pc = 0x7F0AD834u;
    // 7F0AD834: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD838:
    ctx->pc = 0x7F0AD838u;
    // 7F0AD838: stw     r0, 29896(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD83C:
    ctx->pc = 0x7F0AD83Cu;
    // 7F0AD83C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD840:
    ctx->pc = 0x7F0AD840u;
    // 7F0AD840: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AD844:
    ctx->pc = 0x7F0AD844u;
    // 7F0AD844: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD848:
    ctx->pc = 0x7F0AD848u;
    // 7F0AD848: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD84C:
    ctx->pc = 0x7F0AD84Cu;
    // 7F0AD84C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD850:
    ctx->pc = 0x7F0AD850u;
    ctx->downcount -= 20;
    // 7F0AD850: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD854:
    ctx->pc = 0x7F0AD854u;
    // 7F0AD854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD858:
    ctx->pc = 0x7F0AD858u;
    // 7F0AD858: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD85C:
    ctx->pc = 0x7F0AD85Cu;
    // 7F0AD85C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD860:
    ctx->pc = 0x7F0AD860u;
    // 7F0AD860: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AD864:
    ctx->pc = 0x7F0AD864u;
    // 7F0AD864: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0AD868:
    ctx->pc = 0x7F0AD868u;
    // 7F0AD868: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD86C:
    ctx->pc = 0x7F0AD86Cu;
    // 7F0AD86C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0AD870:
    ctx->pc = 0x7F0AD870u;
    // 7F0AD870: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AD874:
    ctx->pc = 0x7F0AD874u;
    // 7F0AD874: b       0x7F0AD8BC
    {
            goto label_7F0AD8BC;
    }

label_7F0AD878:
    ctx->downcount -= 4;
    // 7F0AD878: add   r3, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0AD87C:
    ctx->pc = 0x7F0AD87Cu;
    // 7F0AD87C: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD880:
    // 7F0AD880: cmpwi   r0, 2
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

label_7F0AD884:
    // 7F0AD884: bc    4, 2, 0x7F0AD8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD8A0;
        }
    }

label_7F0AD888:
    ctx->pc = 0x7F0AD888u;
    ctx->downcount -= 4;
    // 7F0AD888: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD88C:
    // 7F0AD88C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AD890:
    ctx->pc = 0x7F0AD890u;
    // 7F0AD890: lwz     r4, 5348(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5348);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD894:
    // 7F0AD894: bl      0x7F0AD694
    {
            ctx->lr = 0x7F0AD898u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD694u;
                return;
            }
            goto label_7F0AD694;
    }

label_7F0AD898:
    ctx->downcount -= 2;
    // 7F0AD898: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AD89C:
    // 7F0AD89C: b       0x7F0AD8B4
    {
            goto label_7F0AD8B4;
    }

label_7F0AD8A0:
    ctx->downcount -= 2;
    // 7F0AD8A0: cmpwi   r0, 1
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

label_7F0AD8A4:
    // 7F0AD8A4: bc    4, 2, 0x7F0AD8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD8B4;
        }
    }

label_7F0AD8A8:
    ctx->downcount -= 3;
    // 7F0AD8A8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AD8AC:
    // 7F0AD8AC: addi    r3, r3, 140
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(140);

label_7F0AD8B0:
    // 7F0AD8B0: bl      0x7F0AD580
    {
            ctx->lr = 0x7F0AD8B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD580u;
                return;
            }
            goto label_7F0AD580;
    }

label_7F0AD8B4:
    ctx->downcount -= 2;
    // 7F0AD8B4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0AD8B8:
    // 7F0AD8B8: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0AD8BC:
    ctx->pc = 0x7F0AD8BCu;
    ctx->downcount -= 3;
    // 7F0AD8BC: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD8C0:
    // 7F0AD8C0: cmpw    r29, r0
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

label_7F0AD8C4:
    // 7F0AD8C4: bc    12, 0, 0x7F0AD878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD878u;
                return;
            }
            goto label_7F0AD878;
        }
    }

label_7F0AD8C8:
    ctx->pc = 0x7F0AD8C8u;
    ctx->downcount -= 3;
    // 7F0AD8C8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD8CC:
    ctx->pc = 0x7F0AD8CCu;
    // 7F0AD8CC: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD8D0:
    ctx->pc = 0x7F0AD8D0u;
    // 7F0AD8D0: bl      0x7F0AE3AC
    {
            ctx->lr = 0x7F0AD8D4u;
            goto label_7F0AE3AC;
    }

label_7F0AD8D4:
    ctx->pc = 0x7F0AD8D4u;
    ctx->downcount -= 4;
    // 7F0AD8D4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD8D8:
    ctx->pc = 0x7F0AD8D8u;
    // 7F0AD8D8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AD8DC:
    ctx->pc = 0x7F0AD8DCu;
    // 7F0AD8DC: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AD8E0:
    ctx->pc = 0x7F0AD8E0u;
    // 7F0AD8E0: bl      0x7F0AD6A4
    {
            ctx->lr = 0x7F0AD8E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD6A4u;
                return;
            }
            goto label_7F0AD6A4;
    }

label_7F0AD8E4:
    ctx->pc = 0x7F0AD8E4u;
    ctx->downcount -= 3;
    // 7F0AD8E4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD8E8:
    ctx->pc = 0x7F0AD8E8u;
    // 7F0AD8E8: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD8EC:
    ctx->pc = 0x7F0AD8ECu;
    // 7F0AD8EC: bl      0x7F0AD704
    {
            ctx->lr = 0x7F0AD8F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD704u;
                return;
            }
            goto label_7F0AD704;
    }

label_7F0AD8F0:
    ctx->pc = 0x7F0AD8F0u;
    ctx->downcount -= 3;
    // 7F0AD8F0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD8F4:
    ctx->pc = 0x7F0AD8F4u;
    // 7F0AD8F4: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD8F8:
    ctx->pc = 0x7F0AD8F8u;
    // 7F0AD8F8: bl      0x7F0AD450
    {
            ctx->lr = 0x7F0AD8FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD450u;
                return;
            }
            goto label_7F0AD450;
    }

label_7F0AD8FC:
    ctx->pc = 0x7F0AD8FCu;
    ctx->downcount -= 20;
    // 7F0AD8FC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD900:
    ctx->pc = 0x7F0AD900u;
    // 7F0AD900: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AD904:
    ctx->pc = 0x7F0AD904u;
    // 7F0AD904: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AD908:
    ctx->pc = 0x7F0AD908u;
    // 7F0AD908: stw     r0, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD90C:
    ctx->pc = 0x7F0AD90Cu;
    // 7F0AD90C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AD910:
    ctx->pc = 0x7F0AD910u;
    // 7F0AD910: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD914:
    ctx->pc = 0x7F0AD914u;
    // 7F0AD914: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD918:
    ctx->pc = 0x7F0AD918u;
    // 7F0AD918: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AD91C:
    ctx->pc = 0x7F0AD91Cu;
    // 7F0AD91C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD920:
    ctx->pc = 0x7F0AD920u;
    ctx->downcount -= 9;
    // 7F0AD920: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD924:
    ctx->pc = 0x7F0AD924u;
    // 7F0AD924: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD928:
    ctx->pc = 0x7F0AD928u;
    // 7F0AD928: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD92C:
    ctx->pc = 0x7F0AD92Cu;
    // 7F0AD92C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD930:
    ctx->pc = 0x7F0AD930u;
    // 7F0AD930: lwz     r6, -5728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5728);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AD934:
    ctx->pc = 0x7F0AD934u;
    // 7F0AD934: rlwinm r3, r6, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FFu;
    }

label_7F0AD938:
    ctx->pc = 0x7F0AD938u;
    // 7F0AD938: rlwinm r0, r6, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0x000000FFu;
    }

label_7F0AD93C:
    ctx->pc = 0x7F0AD93Cu;
    // 7F0AD93C: cmpw    r3, r0
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

label_7F0AD940:
    ctx->pc = 0x7F0AD940u;
    // 7F0AD940: bc    4, 2, 0x7F0AD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD97C;
        }
    }

label_7F0AD944:
    ctx->pc = 0x7F0AD944u;
    ctx->downcount -= 2;
    // 7F0AD944: cmpwi   r3, 255
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD948:
    ctx->pc = 0x7F0AD948u;
    // 7F0AD948: bc    12, 2, 0x7F0AD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD97C;
        }
    }

label_7F0AD94C:
    ctx->pc = 0x7F0AD94Cu;
    ctx->downcount -= 8;
    // 7F0AD94C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD950:
    ctx->pc = 0x7F0AD950u;
    // 7F0AD950: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AD954:
    ctx->pc = 0x7F0AD954u;
    // 7F0AD954: addi    r5, r4, 29540
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29540);

label_7F0AD958:
    ctx->pc = 0x7F0AD958u;
    // 7F0AD958: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD95C:
    ctx->pc = 0x7F0AD95Cu;
    // 7F0AD95C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AD960:
    ctx->pc = 0x7F0AD960u;
    // 7F0AD960: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0AD964:
    ctx->pc = 0x7F0AD964u;
    // 7F0AD964: addi    r4, r4, 29532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29532);

label_7F0AD968:
    ctx->pc = 0x7F0AD968u;
    // 7F0AD968: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0AD96Cu;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0AD96C:
    ctx->pc = 0x7F0AD96Cu;
    ctx->downcount -= 4;
    // 7F0AD96C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0AD970:
    ctx->pc = 0x7F0AD970u;
    // 7F0AD970: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD974:
    ctx->pc = 0x7F0AD974u;
    // 7F0AD974: lwz     r0, -5848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD978:
    ctx->pc = 0x7F0AD978u;
    // 7F0AD978: stw     r0, 29528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD97C:
    ctx->pc = 0x7F0AD97Cu;
    ctx->downcount -= 5;
    // 7F0AD97C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD980:
    ctx->pc = 0x7F0AD980u;
    // 7F0AD980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AD984:
    ctx->pc = 0x7F0AD984u;
    // 7F0AD984: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AD988:
    ctx->pc = 0x7F0AD988u;
    // 7F0AD988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD98C:
    ctx->pc = 0x7F0AD98Cu;
    ctx->downcount -= 5;
    // 7F0AD98C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AD990:
    ctx->pc = 0x7F0AD990u;
    // 7F0AD990: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F0AD994:
    ctx->pc = 0x7F0AD994u;
    // 7F0AD994: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AD998:
    ctx->pc = 0x7F0AD998u;
    // 7F0AD998: sth     r3, 318(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(318);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AD99C:
    ctx->pc = 0x7F0AD99Cu;
    // 7F0AD99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AD9A0:
    ctx->pc = 0x7F0AD9A0u;
    ctx->downcount -= 17;
    // 7F0AD9A0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AD9A4:
    ctx->pc = 0x7F0AD9A4u;
    // 7F0AD9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AD9A8:
    ctx->pc = 0x7F0AD9A8u;
    // 7F0AD9A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AD9AC:
    ctx->pc = 0x7F0AD9ACu;
    // 7F0AD9AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AD9B0:
    ctx->pc = 0x7F0AD9B0u;
    // 7F0AD9B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AD9B4:
    ctx->pc = 0x7F0AD9B4u;
    // 7F0AD9B4: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AD9B8:
    ctx->pc = 0x7F0AD9B8u;
    // 7F0AD9B8: bl      0x7F16F8E0
    {
            ctx->lr = 0x7F0AD9BCu;
            ctx->pc = 0x7F16F8E0u;
            return;
    }

label_7F0AD9BC:
    ctx->pc = 0x7F0AD9BCu;
    ctx->downcount -= 5;
    // 7F0AD9BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AD9C0:
    ctx->pc = 0x7F0AD9C0u;
    // 7F0AD9C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AD9C4:
    ctx->pc = 0x7F0AD9C4u;
    // 7F0AD9C4: lwz     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AD9C8:
    ctx->pc = 0x7F0AD9C8u;
    // 7F0AD9C8: cmpwi   r0, 0
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

label_7F0AD9CC:
    ctx->pc = 0x7F0AD9CCu;
    // 7F0AD9CC: bc    4, 2, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0AD9D0:
    ctx->pc = 0x7F0AD9D0u;
    ctx->downcount -= 5;
    // 7F0AD9D0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AD9D4:
    ctx->pc = 0x7F0AD9D4u;
    // 7F0AD9D4: lwz     r5, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AD9D8:
    ctx->pc = 0x7F0AD9D8u;
    // 7F0AD9D8: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AD9DC:
    ctx->pc = 0x7F0AD9DCu;
    // 7F0AD9DC: cmpwi   r0, 0
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

label_7F0AD9E0:
    ctx->pc = 0x7F0AD9E0u;
    // 7F0AD9E0: bc    12, 1, 0x7F0AD9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AD9E8;
        }
    }

label_7F0AD9E4:
    ctx->pc = 0x7F0AD9E4u;
    ctx->downcount -= 1;
    // 7F0AD9E4: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0AD9E8:
    ctx->pc = 0x7F0AD9E8u;
    ctx->downcount -= 4;
    // 7F0AD9E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AD9EC:
    ctx->pc = 0x7F0AD9ECu;
    // 7F0AD9EC: lwzu     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0AD9F0:
    ctx->pc = 0x7F0AD9F0u;
    // 7F0AD9F0: cmplwi  r0, 0x000F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AD9F4:
    ctx->pc = 0x7F0AD9F4u;
    // 7F0AD9F4: bc    12, 1, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0AD9F8:
    ctx->pc = 0x7F0AD9F8u;
    ctx->downcount -= 7;
    // 7F0AD9F8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AD9FC:
    ctx->pc = 0x7F0AD9FCu;
    // 7F0AD9FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0ADA00:
    ctx->pc = 0x7F0ADA00u;
    // 7F0ADA00: addi    r4, r4, -32496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32496);

label_7F0ADA04:
    ctx->pc = 0x7F0ADA04u;
    // 7F0ADA04: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADA08:
    ctx->pc = 0x7F0ADA08u;
    // 7F0ADA08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0ADA0C:
    ctx->pc = 0x7F0ADA0Cu;
    // 7F0ADA0C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0ADA10:
    ctx->pc = 0x7F0ADA10u;
    ctx->downcount -= 5;
    // 7F0ADA10: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADA14:
    ctx->pc = 0x7F0ADA14u;
    // 7F0ADA14: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADA18:
    ctx->pc = 0x7F0ADA18u;
    // 7F0ADA18: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADA1C:
    ctx->pc = 0x7F0ADA1Cu;
    // 7F0ADA1C: cmpwi   r0, 0
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

label_7F0ADA20:
    ctx->pc = 0x7F0ADA20u;
    // 7F0ADA20: bc    4, 2, 0x7F0ADA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADA44;
        }
    }

label_7F0ADA24:
    ctx->pc = 0x7F0ADA24u;
    ctx->downcount -= 2;
    // 7F0ADA24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADA28:
    ctx->pc = 0x7F0ADA28u;
    // 7F0ADA28: bl      0x7F017E28
    {
            ctx->lr = 0x7F0ADA2Cu;
            ctx->pc = 0x7F017E28u;
            return;
    }

label_7F0ADA2C:
    ctx->pc = 0x7F0ADA2Cu;
    ctx->downcount -= 2;
    // 7F0ADA2C: cmpwi   r3, 1
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

label_7F0ADA30:
    ctx->pc = 0x7F0ADA30u;
    // 7F0ADA30: bc    12, 2, 0x7F0ADA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADA44;
        }
    }

label_7F0ADA34:
    ctx->pc = 0x7F0ADA34u;
    ctx->downcount -= 4;
    // 7F0ADA34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADA38:
    ctx->pc = 0x7F0ADA38u;
    // 7F0ADA38: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0ADA3C:
    ctx->pc = 0x7F0ADA3Cu;
    // 7F0ADA3C: li      r5, 1205
    ctx->gpr[5] = (u32)(s32)(1205);

label_7F0ADA40:
    ctx->pc = 0x7F0ADA40u;
    // 7F0ADA40: bl      0x7F011698
    {
            ctx->lr = 0x7F0ADA44u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F0ADA44:
    ctx->pc = 0x7F0ADA44u;
    ctx->downcount -= 2;
    // 7F0ADA44: cmpwi   r31, 0
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

label_7F0ADA48:
    ctx->pc = 0x7F0ADA48u;
    // 7F0ADA48: bc    12, 2, 0x7F0ADA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADA60;
        }
    }

label_7F0ADA4C:
    ctx->pc = 0x7F0ADA4Cu;
    ctx->downcount -= 5;
    // 7F0ADA4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADA50:
    ctx->pc = 0x7F0ADA50u;
    // 7F0ADA50: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADA54:
    ctx->pc = 0x7F0ADA54u;
    // 7F0ADA54: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0ADA58:
    ctx->pc = 0x7F0ADA58u;
    // 7F0ADA58: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADA5C:
    ctx->pc = 0x7F0ADA5Cu;
    // 7F0ADA5C: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADA60:
    ctx->pc = 0x7F0ADA60u;
    ctx->downcount -= 4;
    // 7F0ADA60: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADA64:
    ctx->pc = 0x7F0ADA64u;
    // 7F0ADA64: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADA68:
    ctx->pc = 0x7F0ADA68u;
    // 7F0ADA68: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADA6C:
    ctx->pc = 0x7F0ADA6Cu;
    // 7F0ADA6C: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADA70:
    ctx->pc = 0x7F0ADA70u;
    ctx->downcount -= 2;
    // 7F0ADA70: cmpwi   r31, 3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADA74:
    ctx->pc = 0x7F0ADA74u;
    // 7F0ADA74: bc    12, 0, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADA78:
    ctx->pc = 0x7F0ADA78u;
    ctx->downcount -= 1;
    // 7F0ADA78: bl      0x7F0A8C6C
    {
            ctx->lr = 0x7F0ADA7Cu;
            ctx->pc = 0x7F0A8C6Cu;
            return;
    }

label_7F0ADA7C:
    ctx->pc = 0x7F0ADA7Cu;
    ctx->downcount -= 2;
    // 7F0ADA7C: cmpwi   r3, 0
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

label_7F0ADA80:
    ctx->pc = 0x7F0ADA80u;
    // 7F0ADA80: bc    12, 2, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADA84:
    ctx->pc = 0x7F0ADA84u;
    ctx->downcount -= 3;
    // 7F0ADA84: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0ADA88:
    ctx->pc = 0x7F0ADA88u;
    // 7F0ADA88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADA8C:
    ctx->pc = 0x7F0ADA8Cu;
    // 7F0ADA8C: bl      0x7F290054
    {
            ctx->lr = 0x7F0ADA90u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F0ADA90:
    ctx->pc = 0x7F0ADA90u;
    ctx->downcount -= 5;
    // 7F0ADA90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADA94:
    ctx->pc = 0x7F0ADA94u;
    // 7F0ADA94: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0ADA98:
    ctx->pc = 0x7F0ADA98u;
    // 7F0ADA98: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0ADA9C:
    ctx->pc = 0x7F0ADA9Cu;
    // 7F0ADA9C: or.   r0, r4, r0
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

label_7F0ADAA0:
    ctx->pc = 0x7F0ADAA0u;
    // 7F0ADAA0: bc    4, 2, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADAA4:
    ctx->pc = 0x7F0ADAA4u;
    ctx->downcount -= 1;
    // 7F0ADAA4: bl      0x7F0ACF64
    {
            ctx->lr = 0x7F0ADAA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ACF64u;
                return;
            }
            goto label_7F0ACF64;
    }

label_7F0ADAA8:
    ctx->pc = 0x7F0ADAA8u;
    ctx->downcount -= 2;
    // 7F0ADAA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADAAC:
    ctx->pc = 0x7F0ADAACu;
    // 7F0ADAAC: bl      0x7F0AD2B8
    {
            ctx->lr = 0x7F0ADAB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD2B8u;
                return;
            }
            goto label_7F0AD2B8;
    }

label_7F0ADAB0:
    ctx->pc = 0x7F0ADAB0u;
    ctx->downcount -= 2;
    // 7F0ADAB0: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_7F0ADAB4:
    ctx->pc = 0x7F0ADAB4u;
    // 7F0ADAB4: bl      0x7F020934
    {
            ctx->lr = 0x7F0ADAB8u;
            ctx->pc = 0x7F020934u;
            return;
    }

label_7F0ADAB8:
    ctx->pc = 0x7F0ADAB8u;
    ctx->downcount -= 2;
    // 7F0ADAB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADABC:
    ctx->pc = 0x7F0ADABCu;
    // 7F0ADABC: bl      0x7F3CBED0
    {
            ctx->lr = 0x7F0ADAC0u;
            ctx->pc = 0x7F3CBED0u;
            return;
    }

label_7F0ADAC0:
    ctx->pc = 0x7F0ADAC0u;
    ctx->downcount -= 8;
    // 7F0ADAC0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADAC4:
    ctx->pc = 0x7F0ADAC4u;
    // 7F0ADAC4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADAC8:
    ctx->pc = 0x7F0ADAC8u;
    // 7F0ADAC8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0ADACC:
    ctx->pc = 0x7F0ADACCu;
    // 7F0ADACC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADAD0:
    ctx->pc = 0x7F0ADAD0u;
    // 7F0ADAD0: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADAD4:
    ctx->pc = 0x7F0ADAD4u;
    // 7F0ADAD4: stw     r5, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ADAD8:
    ctx->pc = 0x7F0ADAD8u;
    // 7F0ADAD8: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADADC:
    ctx->pc = 0x7F0ADADCu;
    // 7F0ADADC: bl      0x7F0ACFFC
    {
            ctx->lr = 0x7F0ADAE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ACFFCu;
                return;
            }
            goto label_7F0ACFFC;
    }

label_7F0ADAE0:
    ctx->pc = 0x7F0ADAE0u;
    ctx->downcount -= 5;
    // 7F0ADAE0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADAE4:
    ctx->pc = 0x7F0ADAE4u;
    // 7F0ADAE4: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADAE8:
    ctx->pc = 0x7F0ADAE8u;
    // 7F0ADAE8: lwz     r3, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADAEC:
    ctx->pc = 0x7F0ADAECu;
    // 7F0ADAEC: cmpwi   r3, 0
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

label_7F0ADAF0:
    ctx->pc = 0x7F0ADAF0u;
    // 7F0ADAF0: bc    12, 0, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADAF4:
    ctx->pc = 0x7F0ADAF4u;
    ctx->downcount -= 2;
    // 7F0ADAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADAF8:
    ctx->pc = 0x7F0ADAF8u;
    // 7F0ADAF8: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADAFCu;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADAFC:
    ctx->pc = 0x7F0ADAFCu;
    ctx->downcount -= 1;
    // 7F0ADAFC: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADB00:
    ctx->pc = 0x7F0ADB00u;
    ctx->downcount -= 5;
    // 7F0ADB00: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADB04:
    ctx->pc = 0x7F0ADB04u;
    // 7F0ADB04: addi    r31, r3, 29544
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADB08:
    ctx->pc = 0x7F0ADB08u;
    // 7F0ADB08: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADB0C:
    ctx->pc = 0x7F0ADB0Cu;
    // 7F0ADB0C: cmpwi   r0, 0
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

label_7F0ADB10:
    ctx->pc = 0x7F0ADB10u;
    // 7F0ADB10: bc    4, 2, 0x7F0ADBE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADBE4;
        }
    }

label_7F0ADB14:
    ctx->pc = 0x7F0ADB14u;
    ctx->downcount -= 4;
    // 7F0ADB14: lwz     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADB18:
    ctx->pc = 0x7F0ADB18u;
    // 7F0ADB18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADB1C:
    ctx->pc = 0x7F0ADB1Cu;
    // 7F0ADB1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ADB20:
    ctx->pc = 0x7F0ADB20u;
    // 7F0ADB20: bl      0x80051BB0
    {
            ctx->lr = 0x7F0ADB24u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0ADB24:
    ctx->pc = 0x7F0ADB24u;
    ctx->downcount -= 2;
    // 7F0ADB24: cmpwi   r3, 0
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

label_7F0ADB28:
    ctx->pc = 0x7F0ADB28u;
    // 7F0ADB28: bc    4, 2, 0x7F0ADBD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADBD8;
        }
    }

label_7F0ADB2C:
    ctx->pc = 0x7F0ADB2Cu;
    ctx->downcount -= 15;
    // 7F0ADB2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADB30:
    ctx->pc = 0x7F0ADB30u;
    // 7F0ADB30: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADB34:
    ctx->pc = 0x7F0ADB34u;
    // 7F0ADB34: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADB38:
    ctx->pc = 0x7F0ADB38u;
    // 7F0ADB38: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADB3C:
    ctx->pc = 0x7F0ADB3Cu;
    // 7F0ADB3C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0ADB40:
    ctx->pc = 0x7F0ADB40u;
    // 7F0ADB40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ADB44:
    ctx->pc = 0x7F0ADB44u;
    // 7F0ADB44: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADB48:
    ctx->pc = 0x7F0ADB48u;
    // 7F0ADB48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0ADB4C:
    ctx->pc = 0x7F0ADB4Cu;
    // 7F0ADB4C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0ADB50:
    ctx->pc = 0x7F0ADB50u;
    // 7F0ADB50: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0ADB54:
    ctx->pc = 0x7F0ADB54u;
    // 7F0ADB54: lwz     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADB58:
    ctx->pc = 0x7F0ADB58u;
    // 7F0ADB58: li      r9, 30
    ctx->gpr[9] = (u32)(s32)(30);

label_7F0ADB5C:
    ctx->pc = 0x7F0ADB5Cu;
    // 7F0ADB5C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0ADB60:
    ctx->pc = 0x7F0ADB60u;
    // 7F0ADB60: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0ADB64:
    ctx->pc = 0x7F0ADB64u;
    // 7F0ADB64: bl      0x800501FC
    {
            ctx->lr = 0x7F0ADB68u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0ADB68:
    ctx->pc = 0x7F0ADB68u;
    ctx->downcount -= 17;
    // 7F0ADB68: stw     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ADB6C:
    ctx->pc = 0x7F0ADB6Cu;
    // 7F0ADB6C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0ADB70:
    ctx->pc = 0x7F0ADB70u;
    // 7F0ADB70: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADB74:
    ctx->pc = 0x7F0ADB74u;
    // 7F0ADB74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADB78:
    ctx->pc = 0x7F0ADB78u;
    // 7F0ADB78: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADB7C:
    ctx->pc = 0x7F0ADB7Cu;
    // 7F0ADB7C: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADB80:
    ctx->pc = 0x7F0ADB80u;
    // 7F0ADB80: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0ADB84:
    ctx->pc = 0x7F0ADB84u;
    // 7F0ADB84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ADB88:
    ctx->pc = 0x7F0ADB88u;
    // 7F0ADB88: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADB8C:
    ctx->pc = 0x7F0ADB8Cu;
    // 7F0ADB8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0ADB90:
    ctx->pc = 0x7F0ADB90u;
    // 7F0ADB90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0ADB94:
    ctx->pc = 0x7F0ADB94u;
    // 7F0ADB94: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0ADB98:
    ctx->pc = 0x7F0ADB98u;
    // 7F0ADB98: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADB9C:
    ctx->pc = 0x7F0ADB9Cu;
    // 7F0ADB9C: li      r9, 30
    ctx->gpr[9] = (u32)(s32)(30);

label_7F0ADBA0:
    ctx->pc = 0x7F0ADBA0u;
    // 7F0ADBA0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0ADBA4:
    ctx->pc = 0x7F0ADBA4u;
    // 7F0ADBA4: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0ADBA8:
    ctx->pc = 0x7F0ADBA8u;
    // 7F0ADBA8: bl      0x800501FC
    {
            ctx->lr = 0x7F0ADBACu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0ADBAC:
    ctx->pc = 0x7F0ADBACu;
    ctx->downcount -= 7;
    // 7F0ADBAC: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0ADBB0:
    ctx->pc = 0x7F0ADBB0u;
    // 7F0ADBB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADBB4:
    ctx->pc = 0x7F0ADBB4u;
    // 7F0ADBB4: addi    r6, r5, 29544
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(29544);

label_7F0ADBB8:
    ctx->pc = 0x7F0ADBB8u;
    // 7F0ADBB8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0ADBBC:
    ctx->pc = 0x7F0ADBBCu;
    // 7F0ADBBC: stw     r3, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ADBC0:
    ctx->pc = 0x7F0ADBC0u;
    // 7F0ADBC0: lwz     r3, 276(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADBC4:
    ctx->pc = 0x7F0ADBC4u;
    // 7F0ADBC4: bl      0x7F017DC4
    {
            ctx->lr = 0x7F0ADBC8u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F0ADBC8:
    ctx->pc = 0x7F0ADBC8u;
    ctx->downcount -= 4;
    // 7F0ADBC8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADBCC:
    ctx->pc = 0x7F0ADBCCu;
    // 7F0ADBCC: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADBD0:
    ctx->pc = 0x7F0ADBD0u;
    // 7F0ADBD0: stw     r3, 308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ADBD4:
    ctx->pc = 0x7F0ADBD4u;
    // 7F0ADBD4: b       0x7F0ADBE4
    {
            goto label_7F0ADBE4;
    }

label_7F0ADBD8:
    ctx->pc = 0x7F0ADBD8u;
    ctx->downcount -= 3;
    // 7F0ADBD8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADBDC:
    ctx->pc = 0x7F0ADBDCu;
    // 7F0ADBDC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0ADBE0:
    ctx->pc = 0x7F0ADBE0u;
    // 7F0ADBE0: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADBE4:
    ctx->pc = 0x7F0ADBE4u;
    ctx->downcount -= 3;
    // 7F0ADBE4: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADBE8:
    ctx->pc = 0x7F0ADBE8u;
    // 7F0ADBE8: cmpwi   r0, 300
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(300);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADBEC:
    ctx->pc = 0x7F0ADBECu;
    // 7F0ADBEC: bc    4, 1, 0x7F0ADC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADC04;
        }
    }

label_7F0ADBF0:
    ctx->pc = 0x7F0ADBF0u;
    ctx->downcount -= 5;
    // 7F0ADBF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADBF4:
    ctx->pc = 0x7F0ADBF4u;
    // 7F0ADBF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADBF8:
    ctx->pc = 0x7F0ADBF8u;
    // 7F0ADBF8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0ADBFC:
    ctx->pc = 0x7F0ADBFCu;
    // 7F0ADBFC: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADC00:
    ctx->pc = 0x7F0ADC00u;
    // 7F0ADC00: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADC04:
    ctx->pc = 0x7F0ADC04u;
    ctx->downcount -= 4;
    // 7F0ADC04: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADC08:
    ctx->pc = 0x7F0ADC08u;
    // 7F0ADC08: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADC0C:
    ctx->pc = 0x7F0ADC0Cu;
    // 7F0ADC0C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADC10:
    ctx->pc = 0x7F0ADC10u;
    // 7F0ADC10: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADC14:
    ctx->pc = 0x7F0ADC14u;
    ctx->downcount -= 5;
    // 7F0ADC14: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADC18:
    ctx->pc = 0x7F0ADC18u;
    // 7F0ADC18: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADC1C:
    ctx->pc = 0x7F0ADC1Cu;
    // 7F0ADC1C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADC20:
    ctx->pc = 0x7F0ADC20u;
    // 7F0ADC20: cmpwi   r0, 120
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADC24:
    ctx->pc = 0x7F0ADC24u;
    // 7F0ADC24: bc    4, 1, 0x7F0ADC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADC5C;
        }
    }

label_7F0ADC28:
    ctx->pc = 0x7F0ADC28u;
    ctx->downcount -= 3;
    // 7F0ADC28: lha     r0, 7010(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7010);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ADC2C:
    ctx->pc = 0x7F0ADC2Cu;
    // 7F0ADC2C: cmpwi   r0, 1
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

label_7F0ADC30:
    ctx->pc = 0x7F0ADC30u;
    // 7F0ADC30: bc    4, 2, 0x7F0ADC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADC5C;
        }
    }

label_7F0ADC34:
    ctx->pc = 0x7F0ADC34u;
    ctx->downcount -= 3;
    // 7F0ADC34: lwz     r3, 316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADC38:
    ctx->pc = 0x7F0ADC38u;
    // 7F0ADC38: cmpwi   r3, 0
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

label_7F0ADC3C:
    ctx->pc = 0x7F0ADC3Cu;
    // 7F0ADC3C: bc    12, 0, 0x7F0ADC48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADC48;
        }
    }

label_7F0ADC40:
    ctx->pc = 0x7F0ADC40u;
    ctx->downcount -= 2;
    // 7F0ADC40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADC44:
    ctx->pc = 0x7F0ADC44u;
    // 7F0ADC44: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADC48u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADC48:
    ctx->pc = 0x7F0ADC48u;
    ctx->downcount -= 5;
    // 7F0ADC48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADC4C:
    ctx->pc = 0x7F0ADC4Cu;
    // 7F0ADC4C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADC50:
    ctx->pc = 0x7F0ADC50u;
    // 7F0ADC50: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0ADC54:
    ctx->pc = 0x7F0ADC54u;
    // 7F0ADC54: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADC58:
    ctx->pc = 0x7F0ADC58u;
    // 7F0ADC58: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADC5C:
    ctx->pc = 0x7F0ADC5Cu;
    ctx->downcount -= 4;
    // 7F0ADC5C: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADC60:
    ctx->pc = 0x7F0ADC60u;
    // 7F0ADC60: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADC64:
    ctx->pc = 0x7F0ADC64u;
    // 7F0ADC64: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADC68:
    ctx->pc = 0x7F0ADC68u;
    // 7F0ADC68: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADC6C:
    ctx->pc = 0x7F0ADC6Cu;
    ctx->downcount -= 5;
    // 7F0ADC6C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADC70:
    ctx->pc = 0x7F0ADC70u;
    // 7F0ADC70: addi    r31, r3, 29544
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADC74:
    ctx->pc = 0x7F0ADC74u;
    // 7F0ADC74: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADC78:
    ctx->pc = 0x7F0ADC78u;
    // 7F0ADC78: cmpwi   r0, 2
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

label_7F0ADC7C:
    ctx->pc = 0x7F0ADC7Cu;
    // 7F0ADC7C: bc    4, 1, 0x7F0ADD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD24;
        }
    }

label_7F0ADC80:
    ctx->pc = 0x7F0ADC80u;
    ctx->downcount -= 4;
    // 7F0ADC80: lwz     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADC84:
    ctx->pc = 0x7F0ADC84u;
    // 7F0ADC84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADC88:
    ctx->pc = 0x7F0ADC88u;
    // 7F0ADC88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ADC8C:
    ctx->pc = 0x7F0ADC8Cu;
    // 7F0ADC8C: bl      0x80051BB0
    {
            ctx->lr = 0x7F0ADC90u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0ADC90:
    ctx->pc = 0x7F0ADC90u;
    ctx->downcount -= 2;
    // 7F0ADC90: cmpwi   r3, 0
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

label_7F0ADC94:
    ctx->pc = 0x7F0ADC94u;
    // 7F0ADC94: bc    4, 2, 0x7F0ADD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD18;
        }
    }

label_7F0ADC98:
    ctx->pc = 0x7F0ADC98u;
    ctx->downcount -= 4;
    // 7F0ADC98: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADC9C:
    ctx->pc = 0x7F0ADC9Cu;
    // 7F0ADC9C: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADCA0:
    ctx->pc = 0x7F0ADCA0u;
    // 7F0ADCA0: lwz     r3, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADCA4:
    ctx->pc = 0x7F0ADCA4u;
    // 7F0ADCA4: bl      0x7F017E28
    {
            ctx->lr = 0x7F0ADCA8u;
            ctx->pc = 0x7F017E28u;
            return;
    }

label_7F0ADCA8:
    ctx->pc = 0x7F0ADCA8u;
    ctx->downcount -= 2;
    // 7F0ADCA8: cmpwi   r3, 3
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

label_7F0ADCAC:
    ctx->pc = 0x7F0ADCACu;
    // 7F0ADCAC: bc    4, 2, 0x7F0ADD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD18;
        }
    }

label_7F0ADCB0:
    ctx->pc = 0x7F0ADCB0u;
    ctx->downcount -= 4;
    // 7F0ADCB0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADCB4:
    ctx->pc = 0x7F0ADCB4u;
    // 7F0ADCB4: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADCB8:
    ctx->pc = 0x7F0ADCB8u;
    // 7F0ADCB8: lwz     r3, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADCBC:
    ctx->pc = 0x7F0ADCBCu;
    // 7F0ADCBC: bl      0x80051A5C
    {
            ctx->lr = 0x7F0ADCC0u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F0ADCC0:
    ctx->pc = 0x7F0ADCC0u;
    ctx->downcount -= 6;
    // 7F0ADCC0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADCC4:
    ctx->pc = 0x7F0ADCC4u;
    // 7F0ADCC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADCC8:
    ctx->pc = 0x7F0ADCC8u;
    // 7F0ADCC8: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADCCC:
    ctx->pc = 0x7F0ADCCCu;
    // 7F0ADCCC: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0ADCD0:
    ctx->pc = 0x7F0ADCD0u;
    // 7F0ADCD0: lwz     r3, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADCD4:
    ctx->pc = 0x7F0ADCD4u;
    // 7F0ADCD4: bl      0x7F017DC4
    {
            ctx->lr = 0x7F0ADCD8u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F0ADCD8:
    ctx->pc = 0x7F0ADCD8u;
    ctx->downcount -= 6;
    // 7F0ADCD8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADCDC:
    ctx->pc = 0x7F0ADCDCu;
    // 7F0ADCDC: stw     r3, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ADCE0:
    ctx->pc = 0x7F0ADCE0u;
    // 7F0ADCE0: addi    r30, r4, 29544
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADCE4:
    ctx->pc = 0x7F0ADCE4u;
    // 7F0ADCE4: lwz     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADCE8:
    ctx->pc = 0x7F0ADCE8u;
    // 7F0ADCE8: cmpwi   r0, 0
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

label_7F0ADCEC:
    ctx->pc = 0x7F0ADCECu;
    // 7F0ADCEC: bc    12, 0, 0x7F0ADD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD00;
        }
    }

label_7F0ADCF0:
    ctx->pc = 0x7F0ADCF0u;
    ctx->downcount -= 1;
    // 7F0ADCF0: bl      0x7F0ACF64
    {
            ctx->lr = 0x7F0ADCF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ACF64u;
                return;
            }
            goto label_7F0ACF64;
    }

label_7F0ADCF4:
    ctx->pc = 0x7F0ADCF4u;
    ctx->downcount -= 3;
    // 7F0ADCF4: lwz     r3, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADCF8:
    ctx->pc = 0x7F0ADCF8u;
    // 7F0ADCF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADCFC:
    ctx->pc = 0x7F0ADCFCu;
    // 7F0ADCFC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADD00u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADD00:
    ctx->pc = 0x7F0ADD00u;
    ctx->downcount -= 6;
    // 7F0ADD00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADD04:
    ctx->pc = 0x7F0ADD04u;
    // 7F0ADD04: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADD08:
    ctx->pc = 0x7F0ADD08u;
    // 7F0ADD08: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0ADD0C:
    ctx->pc = 0x7F0ADD0Cu;
    // 7F0ADD0C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADD10:
    ctx->pc = 0x7F0ADD10u;
    // 7F0ADD10: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADD14:
    ctx->pc = 0x7F0ADD14u;
    // 7F0ADD14: b       0x7F0ADD24
    {
            goto label_7F0ADD24;
    }

label_7F0ADD18:
    ctx->pc = 0x7F0ADD18u;
    ctx->downcount -= 3;
    // 7F0ADD18: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADD1C:
    ctx->pc = 0x7F0ADD1Cu;
    // 7F0ADD1C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0ADD20:
    ctx->pc = 0x7F0ADD20u;
    // 7F0ADD20: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADD24:
    ctx->pc = 0x7F0ADD24u;
    ctx->downcount -= 4;
    // 7F0ADD24: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADD28:
    ctx->pc = 0x7F0ADD28u;
    // 7F0ADD28: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADD2C:
    ctx->pc = 0x7F0ADD2Cu;
    // 7F0ADD2C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADD30:
    ctx->pc = 0x7F0ADD30u;
    // 7F0ADD30: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADD34:
    ctx->pc = 0x7F0ADD34u;
    ctx->downcount -= 5;
    // 7F0ADD34: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADD38:
    ctx->pc = 0x7F0ADD38u;
    // 7F0ADD38: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADD3C:
    ctx->pc = 0x7F0ADD3Cu;
    // 7F0ADD3C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADD40:
    ctx->pc = 0x7F0ADD40u;
    // 7F0ADD40: cmpwi   r0, 90
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

label_7F0ADD44:
    ctx->pc = 0x7F0ADD44u;
    // 7F0ADD44: bc    4, 2, 0x7F0ADD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD78;
        }
    }

label_7F0ADD48:
    ctx->pc = 0x7F0ADD48u;
    ctx->downcount -= 3;
    // 7F0ADD48: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADD4C:
    ctx->pc = 0x7F0ADD4Cu;
    // 7F0ADD4C: cmpwi   r0, 0
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

label_7F0ADD50:
    ctx->pc = 0x7F0ADD50u;
    // 7F0ADD50: bc    12, 0, 0x7F0ADD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADD64;
        }
    }

label_7F0ADD54:
    ctx->pc = 0x7F0ADD54u;
    ctx->downcount -= 1;
    // 7F0ADD54: bl      0x7F0ACF64
    {
            ctx->lr = 0x7F0ADD58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ACF64u;
                return;
            }
            goto label_7F0ACF64;
    }

label_7F0ADD58:
    ctx->pc = 0x7F0ADD58u;
    ctx->downcount -= 3;
    // 7F0ADD58: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADD5C:
    ctx->pc = 0x7F0ADD5Cu;
    // 7F0ADD5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADD60:
    ctx->pc = 0x7F0ADD60u;
    // 7F0ADD60: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADD64u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADD64:
    ctx->pc = 0x7F0ADD64u;
    ctx->downcount -= 5;
    // 7F0ADD64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADD68:
    ctx->pc = 0x7F0ADD68u;
    // 7F0ADD68: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADD6C:
    ctx->pc = 0x7F0ADD6Cu;
    // 7F0ADD6C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F0ADD70:
    ctx->pc = 0x7F0ADD70u;
    // 7F0ADD70: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADD74:
    ctx->pc = 0x7F0ADD74u;
    // 7F0ADD74: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADD78:
    ctx->pc = 0x7F0ADD78u;
    ctx->downcount -= 4;
    // 7F0ADD78: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADD7C:
    ctx->pc = 0x7F0ADD7Cu;
    // 7F0ADD7C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADD80:
    ctx->pc = 0x7F0ADD80u;
    // 7F0ADD80: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADD84:
    ctx->pc = 0x7F0ADD84u;
    // 7F0ADD84: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADD88:
    ctx->pc = 0x7F0ADD88u;
    ctx->downcount -= 5;
    // 7F0ADD88: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADD8C:
    ctx->pc = 0x7F0ADD8Cu;
    // 7F0ADD8C: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADD90:
    ctx->pc = 0x7F0ADD90u;
    // 7F0ADD90: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADD94:
    ctx->pc = 0x7F0ADD94u;
    // 7F0ADD94: cmpwi   r0, 60
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADD98:
    ctx->pc = 0x7F0ADD98u;
    // 7F0ADD98: bc    4, 2, 0x7F0ADDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADDB0;
        }
    }

label_7F0ADD9C:
    ctx->pc = 0x7F0ADD9Cu;
    ctx->downcount -= 3;
    // 7F0ADD9C: lwz     r3, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADDA0:
    ctx->pc = 0x7F0ADDA0u;
    // 7F0ADDA0: cmpwi   r3, 0
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

label_7F0ADDA4:
    ctx->pc = 0x7F0ADDA4u;
    // 7F0ADDA4: bc    12, 0, 0x7F0ADDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADDB0;
        }
    }

label_7F0ADDA8:
    ctx->pc = 0x7F0ADDA8u;
    ctx->downcount -= 2;
    // 7F0ADDA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADDAC:
    ctx->pc = 0x7F0ADDACu;
    // 7F0ADDAC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADDB0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADDB0:
    ctx->pc = 0x7F0ADDB0u;
    ctx->downcount -= 3;
    // 7F0ADDB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADDB4:
    ctx->pc = 0x7F0ADDB4u;
    // 7F0ADDB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADDB8:
    ctx->pc = 0x7F0ADDB8u;
    // 7F0ADDB8: bl      0x7F16F8E0
    {
            ctx->lr = 0x7F0ADDBCu;
            ctx->pc = 0x7F16F8E0u;
            return;
    }

label_7F0ADDBC:
    ctx->pc = 0x7F0ADDBCu;
    ctx->downcount -= 2;
    // 7F0ADDBC: cmpwi   r3, 5
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

label_7F0ADDC0:
    ctx->pc = 0x7F0ADDC0u;
    // 7F0ADDC0: bc    12, 1, 0x7F0ADDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADDD0;
        }
    }

label_7F0ADDC4:
    ctx->pc = 0x7F0ADDC4u;
    ctx->downcount -= 3;
    // 7F0ADDC4: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADDC8:
    ctx->pc = 0x7F0ADDC8u;
    // 7F0ADDC8: cmpwi   r0, 600
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

label_7F0ADDCC:
    ctx->pc = 0x7F0ADDCCu;
    // 7F0ADDCC: bc    4, 1, 0x7F0ADE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADE1C;
        }
    }

label_7F0ADDD0:
    ctx->pc = 0x7F0ADDD0u;
    ctx->downcount -= 3;
    // 7F0ADDD0: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADDD4:
    ctx->pc = 0x7F0ADDD4u;
    // 7F0ADDD4: cmpwi   r0, 360
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(360);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADDD8:
    ctx->pc = 0x7F0ADDD8u;
    // 7F0ADDD8: bc    12, 0, 0x7F0ADE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADE1C;
        }
    }

label_7F0ADDDC:
    ctx->pc = 0x7F0ADDDCu;
    ctx->downcount -= 5;
    // 7F0ADDDC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADDE0:
    ctx->pc = 0x7F0ADDE0u;
    // 7F0ADDE0: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADDE4:
    ctx->pc = 0x7F0ADDE4u;
    // 7F0ADDE4: lwz     r3, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADDE8:
    ctx->pc = 0x7F0ADDE8u;
    // 7F0ADDE8: cmpwi   r3, 0
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

label_7F0ADDEC:
    ctx->pc = 0x7F0ADDECu;
    // 7F0ADDEC: bc    12, 0, 0x7F0ADDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADDF8;
        }
    }

label_7F0ADDF0:
    ctx->pc = 0x7F0ADDF0u;
    ctx->downcount -= 2;
    // 7F0ADDF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0ADDF4:
    ctx->pc = 0x7F0ADDF4u;
    // 7F0ADDF4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0ADDF8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0ADDF8:
    ctx->pc = 0x7F0ADDF8u;
    ctx->downcount -= 2;
    // 7F0ADDF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ADDFC:
    ctx->pc = 0x7F0ADDFCu;
    // 7F0ADDFC: bl      0x7F0AD2B8
    {
            ctx->lr = 0x7F0ADE00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD2B8u;
                return;
            }
            goto label_7F0AD2B8;
    }

label_7F0ADE00:
    ctx->pc = 0x7F0ADE00u;
    ctx->downcount -= 2;
    // 7F0ADE00: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_7F0ADE04:
    ctx->pc = 0x7F0ADE04u;
    // 7F0ADE04: bl      0x7F020948
    {
            ctx->lr = 0x7F0ADE08u;
            ctx->pc = 0x7F020948u;
            return;
    }

label_7F0ADE08:
    ctx->pc = 0x7F0ADE08u;
    ctx->downcount -= 5;
    // 7F0ADE08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADE0C:
    ctx->pc = 0x7F0ADE0Cu;
    // 7F0ADE0C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADE10:
    ctx->pc = 0x7F0ADE10u;
    // 7F0ADE10: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0ADE14:
    ctx->pc = 0x7F0ADE14u;
    // 7F0ADE14: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADE18:
    ctx->pc = 0x7F0ADE18u;
    // 7F0ADE18: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADE1C:
    ctx->pc = 0x7F0ADE1Cu;
    ctx->downcount -= 4;
    // 7F0ADE1C: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADE20:
    ctx->pc = 0x7F0ADE20u;
    // 7F0ADE20: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADE24:
    ctx->pc = 0x7F0ADE24u;
    // 7F0ADE24: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADE28:
    ctx->pc = 0x7F0ADE28u;
    // 7F0ADE28: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADE2C:
    ctx->pc = 0x7F0ADE2Cu;
    ctx->downcount -= 5;
    // 7F0ADE2C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADE30:
    ctx->pc = 0x7F0ADE30u;
    // 7F0ADE30: addi    r30, r3, 29544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADE34:
    ctx->pc = 0x7F0ADE34u;
    // 7F0ADE34: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADE38:
    ctx->pc = 0x7F0ADE38u;
    // 7F0ADE38: cmpwi   r0, 80
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADE3C:
    ctx->pc = 0x7F0ADE3Cu;
    // 7F0ADE3C: bc    4, 2, 0x7F0ADE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADE48;
        }
    }

label_7F0ADE40:
    ctx->pc = 0x7F0ADE40u;
    ctx->downcount -= 2;
    // 7F0ADE40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ADE44:
    ctx->pc = 0x7F0ADE44u;
    // 7F0ADE44: bl      0x7F3CBEF4
    {
            ctx->lr = 0x7F0ADE48u;
            ctx->pc = 0x7F3CBEF4u;
            return;
    }

label_7F0ADE48:
    ctx->pc = 0x7F0ADE48u;
    ctx->downcount -= 2;
    // 7F0ADE48: cmpwi   r31, 13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADE4C:
    ctx->pc = 0x7F0ADE4Cu;
    // 7F0ADE4C: bc    12, 0, 0x7F0ADE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADE64;
        }
    }

label_7F0ADE50:
    ctx->pc = 0x7F0ADE50u;
    ctx->downcount -= 5;
    // 7F0ADE50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADE54:
    ctx->pc = 0x7F0ADE54u;
    // 7F0ADE54: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADE58:
    ctx->pc = 0x7F0ADE58u;
    // 7F0ADE58: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F0ADE5C:
    ctx->pc = 0x7F0ADE5Cu;
    // 7F0ADE5C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADE60:
    ctx->pc = 0x7F0ADE60u;
    // 7F0ADE60: stw     r4, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADE64:
    ctx->pc = 0x7F0ADE64u;
    ctx->downcount -= 4;
    // 7F0ADE64: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADE68:
    ctx->pc = 0x7F0ADE68u;
    // 7F0ADE68: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADE6C:
    ctx->pc = 0x7F0ADE6Cu;
    // 7F0ADE6C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADE70:
    ctx->pc = 0x7F0ADE70u;
    // 7F0ADE70: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADE74:
    ctx->pc = 0x7F0ADE74u;
    ctx->downcount -= 2;
    // 7F0ADE74: cmpwi   r31, 15
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADE78:
    ctx->pc = 0x7F0ADE78u;
    // 7F0ADE78: bc    12, 0, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADE7C:
    ctx->pc = 0x7F0ADE7Cu;
    ctx->downcount -= 7;
    // 7F0ADE7C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADE80:
    ctx->pc = 0x7F0ADE80u;
    // 7F0ADE80: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F0ADE84:
    ctx->pc = 0x7F0ADE84u;
    // 7F0ADE84: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADE88:
    ctx->pc = 0x7F0ADE88u;
    // 7F0ADE88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADE8C:
    ctx->pc = 0x7F0ADE8Cu;
    // 7F0ADE8C: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ADE90:
    ctx->pc = 0x7F0ADE90u;
    // 7F0ADE90: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADE94:
    ctx->pc = 0x7F0ADE94u;
    // 7F0ADE94: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADE98:
    ctx->pc = 0x7F0ADE98u;
    ctx->downcount -= 7;
    // 7F0ADE98: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADE9C:
    ctx->pc = 0x7F0ADE9Cu;
    // 7F0ADE9C: addi    r5, r4, 29544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADEA0:
    ctx->pc = 0x7F0ADEA0u;
    // 7F0ADEA0: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ADEA4:
    ctx->pc = 0x7F0ADEA4u;
    // 7F0ADEA4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0ADEA8:
    ctx->pc = 0x7F0ADEA8u;
    // 7F0ADEA8: cmpwi   r4, 30
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADEAC:
    ctx->pc = 0x7F0ADEACu;
    // 7F0ADEAC: stw     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADEB0:
    ctx->pc = 0x7F0ADEB0u;
    // 7F0ADEB0: bc    4, 1, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADEB4:
    ctx->pc = 0x7F0ADEB4u;
    ctx->downcount -= 5;
    // 7F0ADEB4: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_7F0ADEB8:
    ctx->pc = 0x7F0ADEB8u;
    // 7F0ADEB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADEBC:
    ctx->pc = 0x7F0ADEBCu;
    // 7F0ADEBC: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ADEC0:
    ctx->pc = 0x7F0ADEC0u;
    // 7F0ADEC0: stw     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADEC4:
    ctx->pc = 0x7F0ADEC4u;
    // 7F0ADEC4: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADEC8:
    ctx->pc = 0x7F0ADEC8u;
    ctx->downcount -= 7;
    // 7F0ADEC8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADECC:
    ctx->pc = 0x7F0ADECCu;
    // 7F0ADECC: addi    r5, r4, 29544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADED0:
    ctx->pc = 0x7F0ADED0u;
    // 7F0ADED0: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ADED4:
    ctx->pc = 0x7F0ADED4u;
    // 7F0ADED4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0ADED8:
    ctx->pc = 0x7F0ADED8u;
    // 7F0ADED8: cmpwi   r4, 220
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(220);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADEDC:
    ctx->pc = 0x7F0ADEDCu;
    // 7F0ADEDC: stw     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADEE0:
    ctx->pc = 0x7F0ADEE0u;
    // 7F0ADEE0: bc    4, 1, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADEE4:
    ctx->pc = 0x7F0ADEE4u;
    ctx->downcount -= 3;
    // 7F0ADEE4: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F0ADEE8:
    ctx->pc = 0x7F0ADEE8u;
    // 7F0ADEE8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADEEC:
    ctx->pc = 0x7F0ADEECu;
    // 7F0ADEEC: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADEF0:
    ctx->pc = 0x7F0ADEF0u;
    ctx->downcount -= 2;
    // 7F0ADEF0: cmpwi   r31, 16
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

label_7F0ADEF4:
    ctx->pc = 0x7F0ADEF4u;
    // 7F0ADEF4: bc    4, 1, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADEF8:
    ctx->pc = 0x7F0ADEF8u;
    ctx->downcount -= 7;
    // 7F0ADEF8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADEFC:
    ctx->pc = 0x7F0ADEFCu;
    // 7F0ADEFC: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F0ADF00:
    ctx->pc = 0x7F0ADF00u;
    // 7F0ADF00: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADF04:
    ctx->pc = 0x7F0ADF04u;
    // 7F0ADF04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADF08:
    ctx->pc = 0x7F0ADF08u;
    // 7F0ADF08: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ADF0C:
    ctx->pc = 0x7F0ADF0Cu;
    // 7F0ADF0C: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADF10:
    ctx->pc = 0x7F0ADF10u;
    // 7F0ADF10: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADF14:
    ctx->pc = 0x7F0ADF14u;
    ctx->downcount -= 4;
    // 7F0ADF14: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADF18:
    ctx->pc = 0x7F0ADF18u;
    // 7F0ADF18: lwz     r0, 29896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADF1C:
    ctx->pc = 0x7F0ADF1Cu;
    // 7F0ADF1C: cmpwi   r0, 0
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

label_7F0ADF20:
    ctx->pc = 0x7F0ADF20u;
    // 7F0ADF20: bc    4, 2, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADF24:
    ctx->pc = 0x7F0ADF24u;
    ctx->downcount -= 2;
    // 7F0ADF24: cmpwi   r31, 18
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADF28:
    ctx->pc = 0x7F0ADF28u;
    // 7F0ADF28: bc    12, 0, 0x7F0ADF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF7C;
        }
    }

label_7F0ADF2C:
    ctx->pc = 0x7F0ADF2Cu;
    ctx->downcount -= 7;
    // 7F0ADF2C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADF30:
    ctx->pc = 0x7F0ADF30u;
    // 7F0ADF30: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F0ADF34:
    ctx->pc = 0x7F0ADF34u;
    // 7F0ADF34: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADF38:
    ctx->pc = 0x7F0ADF38u;
    // 7F0ADF38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ADF3C:
    ctx->pc = 0x7F0ADF3Cu;
    // 7F0ADF3C: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ADF40:
    ctx->pc = 0x7F0ADF40u;
    // 7F0ADF40: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADF44:
    ctx->pc = 0x7F0ADF44u;
    // 7F0ADF44: b       0x7F0ADF7C
    {
            goto label_7F0ADF7C;
    }

label_7F0ADF48:
    ctx->pc = 0x7F0ADF48u;
    ctx->downcount -= 5;
    // 7F0ADF48: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ADF4C:
    ctx->pc = 0x7F0ADF4Cu;
    // 7F0ADF4C: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0ADF50:
    ctx->pc = 0x7F0ADF50u;
    // 7F0ADF50: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADF54:
    ctx->pc = 0x7F0ADF54u;
    // 7F0ADF54: cmpwi   r0, 60
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0ADF58:
    ctx->pc = 0x7F0ADF58u;
    // 7F0ADF58: bc    4, 1, 0x7F0ADF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADF70;
        }
    }

label_7F0ADF5C:
    ctx->pc = 0x7F0ADF5Cu;
    ctx->downcount -= 5;
    // 7F0ADF5C: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F0ADF60:
    ctx->pc = 0x7F0ADF60u;
    // 7F0ADF60: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADF64:
    ctx->pc = 0x7F0ADF64u;
    // 7F0ADF64: lha     r3, 362(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(362);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ADF68:
    ctx->pc = 0x7F0ADF68u;
    // 7F0ADF68: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADF6C:
    ctx->pc = 0x7F0ADF6Cu;
    // 7F0ADF6C: sth     r0, 362(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(362);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0ADF70:
    ctx->pc = 0x7F0ADF70u;
    ctx->downcount -= 3;
    // 7F0ADF70: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADF74:
    ctx->pc = 0x7F0ADF74u;
    // 7F0ADF74: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADF78:
    ctx->pc = 0x7F0ADF78u;
    // 7F0ADF78: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADF7C:
    ctx->pc = 0x7F0ADF7Cu;
    ctx->downcount -= 16;
    // 7F0ADF7C: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ADF80:
    ctx->pc = 0x7F0ADF80u;
    // 7F0ADF80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADF84:
    ctx->pc = 0x7F0ADF84u;
    // 7F0ADF84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ADF88:
    ctx->pc = 0x7F0ADF88u;
    // 7F0ADF88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0ADF8C:
    ctx->pc = 0x7F0ADF8Cu;
    // 7F0ADF8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ADF90:
    ctx->pc = 0x7F0ADF90u;
    ctx->downcount -= 6;
    // 7F0ADF90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ADF94:
    ctx->pc = 0x7F0ADF94u;
    // 7F0ADF94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ADF98:
    ctx->pc = 0x7F0ADF98u;
    // 7F0ADF98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADF9C:
    ctx->pc = 0x7F0ADF9Cu;
    // 7F0ADF9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0ADFA0:
    ctx->pc = 0x7F0ADFA0u;
    // 7F0ADFA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ADFA4:
    ctx->pc = 0x7F0ADFA4u;
    // 7F0ADFA4: bl      0x7F0AD9A0
    {
            ctx->lr = 0x7F0ADFA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD9A0u;
                return;
            }
            goto label_7F0AD9A0;
    }

label_7F0ADFA8:
    ctx->pc = 0x7F0ADFA8u;
    ctx->downcount -= 1;
    // 7F0ADFA8: bl      0x7F0AD920
    {
            ctx->lr = 0x7F0ADFACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD920u;
                return;
            }
            goto label_7F0AD920;
    }

label_7F0ADFAC:
    ctx->pc = 0x7F0ADFACu;
    ctx->downcount -= 2;
    // 7F0ADFAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ADFB0:
    ctx->pc = 0x7F0ADFB0u;
    // 7F0ADFB0: bl      0x7F0AD850
    {
            ctx->lr = 0x7F0ADFB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD850u;
                return;
            }
            goto label_7F0AD850;
    }

label_7F0ADFB4:
    ctx->pc = 0x7F0ADFB4u;
    ctx->downcount -= 6;
    // 7F0ADFB4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADFB8:
    ctx->pc = 0x7F0ADFB8u;
    // 7F0ADFB8: addi    r4, r3, 29544
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0ADFBC:
    ctx->pc = 0x7F0ADFBCu;
    // 7F0ADFBC: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ADFC0:
    ctx->pc = 0x7F0ADFC0u;
    // 7F0ADFC0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0ADFC4:
    ctx->pc = 0x7F0ADFC4u;
    // 7F0ADFC4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ADFC8:
    ctx->pc = 0x7F0ADFC8u;
    // 7F0ADFC8: bl      0x7F0AD304
    {
            ctx->lr = 0x7F0ADFCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AD304u;
                return;
            }
            goto label_7F0AD304;
    }

label_7F0ADFCC:
    ctx->pc = 0x7F0ADFCCu;
    ctx->downcount -= 4;
    // 7F0ADFCC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0ADFD0:
    ctx->pc = 0x7F0ADFD0u;
    // 7F0ADFD0: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADFD4:
    ctx->pc = 0x7F0ADFD4u;
    // 7F0ADFD4: cmpwi   r0, 15
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

label_7F0ADFD8:
    ctx->pc = 0x7F0ADFD8u;
    // 7F0ADFD8: bc    4, 2, 0x7F0ADFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ADFE4;
        }
    }

label_7F0ADFDC:
    ctx->pc = 0x7F0ADFDCu;
    ctx->downcount -= 2;
    // 7F0ADFDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ADFE0:
    ctx->pc = 0x7F0ADFE0u;
    // 7F0ADFE0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0ADFE4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0ADFE4:
    ctx->pc = 0x7F0ADFE4u;
    ctx->downcount -= 6;
    // 7F0ADFE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ADFE8:
    ctx->pc = 0x7F0ADFE8u;
    // 7F0ADFE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0ADFEC:
    ctx->pc = 0x7F0ADFECu;
    // 7F0ADFEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ADFF0:
    ctx->pc = 0x7F0ADFF0u;
    // 7F0ADFF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0ADFF4:
    ctx->pc = 0x7F0ADFF4u;
    // 7F0ADFF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0ADFF8:
    ctx->pc = 0x7F0ADFF8u;
    ctx->downcount -= 10;
    // 7F0ADFF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ADFFC:
    ctx->pc = 0x7F0ADFFCu;
    // 7F0ADFFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE000:
    ctx->pc = 0x7F0AE000u;
    // 7F0AE000: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE004:
    ctx->pc = 0x7F0AE004u;
    // 7F0AE004: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE008:
    ctx->pc = 0x7F0AE008u;
    // 7F0AE008: addi    r4, r3, 29544
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE00C:
    ctx->pc = 0x7F0AE00Cu;
    // 7F0AE00C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AE010:
    ctx->pc = 0x7F0AE010u;
    // 7F0AE010: lwz     r3, 312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE014:
    ctx->pc = 0x7F0AE014u;
    // 7F0AE014: stw     r0, 308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE018:
    ctx->pc = 0x7F0AE018u;
    // 7F0AE018: cmpwi   r3, 0
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

label_7F0AE01C:
    ctx->pc = 0x7F0AE01Cu;
    // 7F0AE01C: bc    12, 0, 0x7F0AE038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE038;
        }
    }

label_7F0AE020:
    ctx->pc = 0x7F0AE020u;
    ctx->downcount -= 4;
    // 7F0AE020: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE024:
    ctx->pc = 0x7F0AE024u;
    // 7F0AE024: lwz     r0, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE028:
    ctx->pc = 0x7F0AE028u;
    // 7F0AE028: cmpwi   r0, 15
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

label_7F0AE02C:
    ctx->pc = 0x7F0AE02Cu;
    // 7F0AE02C: bc    4, 2, 0x7F0AE038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE038;
        }
    }

label_7F0AE030:
    ctx->pc = 0x7F0AE030u;
    ctx->downcount -= 2;
    // 7F0AE030: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AE034:
    ctx->pc = 0x7F0AE034u;
    // 7F0AE034: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0AE038u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0AE038:
    ctx->pc = 0x7F0AE038u;
    ctx->downcount -= 5;
    // 7F0AE038: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE03C:
    ctx->pc = 0x7F0AE03Cu;
    // 7F0AE03C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE040:
    ctx->pc = 0x7F0AE040u;
    // 7F0AE040: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE044:
    ctx->pc = 0x7F0AE044u;
    // 7F0AE044: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE048:
    ctx->pc = 0x7F0AE048u;
    ctx->downcount -= 35;
    // 7F0AE048: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE04C:
    ctx->pc = 0x7F0AE04Cu;
    // 7F0AE04C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE050:
    ctx->pc = 0x7F0AE050u;
    // 7F0AE050: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F0AE054:
    ctx->pc = 0x7F0AE054u;
    // 7F0AE054: lis     r8, 32586
    ctx->gpr[8] = ((u32)(s32)(32586) << 16);

label_7F0AE058:
    ctx->pc = 0x7F0AE058u;
    // 7F0AE058: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE05C:
    ctx->pc = 0x7F0AE05Cu;
    // 7F0AE05C: lis     r7, 32586
    ctx->gpr[7] = ((u32)(s32)(32586) << 16);

label_7F0AE060:
    ctx->pc = 0x7F0AE060u;
    // 7F0AE060: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE064:
    ctx->pc = 0x7F0AE064u;
    // 7F0AE064: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE068:
    ctx->pc = 0x7F0AE068u;
    // 7F0AE068: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE06C:
    ctx->pc = 0x7F0AE06Cu;
    // 7F0AE06C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0AE070:
    ctx->pc = 0x7F0AE070u;
    // 7F0AE070: addi    r6, r6, 29544
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29544);

label_7F0AE074:
    ctx->pc = 0x7F0AE074u;
    // 7F0AE074: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AE078:
    ctx->pc = 0x7F0AE078u;
    // 7F0AE078: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AE07C:
    ctx->pc = 0x7F0AE07Cu;
    // 7F0AE07C: stw     r9, 29908(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(29908);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE080:
    ctx->pc = 0x7F0AE080u;
    // 7F0AE080: stw     r9, 29504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(29504);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE084:
    ctx->pc = 0x7F0AE084u;
    // 7F0AE084: stw     r9, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE088:
    ctx->pc = 0x7F0AE088u;
    // 7F0AE088: stw     r9, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE08C:
    ctx->pc = 0x7F0AE08Cu;
    // 7F0AE08C: stw     r9, 29912(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29912);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE090:
    ctx->pc = 0x7F0AE090u;
    // 7F0AE090: stw     r9, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE094:
    ctx->pc = 0x7F0AE094u;
    // 7F0AE094: stw     r9, 96(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE098:
    ctx->pc = 0x7F0AE098u;
    // 7F0AE098: stw     r9, 29520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29520);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE09C:
    ctx->pc = 0x7F0AE09Cu;
    // 7F0AE09C: stw     r9, 300(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE0A0:
    ctx->pc = 0x7F0AE0A0u;
    // 7F0AE0A0: stw     r9, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AE0A4:
    ctx->pc = 0x7F0AE0A4u;
    // 7F0AE0A4: stw     r0, 308(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE0A8:
    ctx->pc = 0x7F0AE0A8u;
    // 7F0AE0A8: bl      0x7F0AE32C
    {
            ctx->lr = 0x7F0AE0ACu;
            goto label_7F0AE32C;
    }

label_7F0AE0AC:
    ctx->pc = 0x7F0AE0ACu;
    ctx->downcount -= 10;
    // 7F0AE0AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AE0B0:
    ctx->pc = 0x7F0AE0B0u;
    // 7F0AE0B0: lis     r7, 32586
    ctx->gpr[7] = ((u32)(s32)(32586) << 16);

label_7F0AE0B4:
    ctx->pc = 0x7F0AE0B4u;
    // 7F0AE0B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AE0B8:
    ctx->pc = 0x7F0AE0B8u;
    // 7F0AE0B8: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE0BC:
    ctx->pc = 0x7F0AE0BCu;
    // 7F0AE0BC: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE0C0:
    ctx->pc = 0x7F0AE0C0u;
    // 7F0AE0C0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE0C4:
    ctx->pc = 0x7F0AE0C4u;
    // 7F0AE0C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE0C8:
    ctx->pc = 0x7F0AE0C8u;
    // 7F0AE0C8: addi    r7, r7, 29544
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(29544);

label_7F0AE0CC:
    ctx->pc = 0x7F0AE0CCu;
    // 7F0AE0CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AE0D0:
    loop_7F0AE0D0(ctx);
    if (ctx->pc == 0x7F0AE0ECu) goto label_7F0AE0EC;
    return;
label_7F0AE0D4:
    // 7F0AE0D4: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F0AE0D8:
    ctx->pc = 0x7F0AE0D8u;
    // 7F0AE0D8: stw     r8, 140(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0AE0DC:
    ctx->pc = 0x7F0AE0DCu;
    // 7F0AE0DC: stw     r6, 144(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AE0E0:
    ctx->pc = 0x7F0AE0E0u;
    // 7F0AE0E0: stw     r5, 148(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AE0E4:
    ctx->pc = 0x7F0AE0E4u;
    // 7F0AE0E4: stw     r4, 152(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AE0E8:
    // 7F0AE0E8: bc    16, 0, 0x7F0AE0D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE0D0u;
                return;
            }
            goto label_7F0AE0D0;
        }
    }

label_7F0AE0EC:
    ctx->pc = 0x7F0AE0ECu;
    ctx->downcount -= 7;
    // 7F0AE0EC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE0F0:
    ctx->pc = 0x7F0AE0F0u;
    // 7F0AE0F0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AE0F4:
    ctx->pc = 0x7F0AE0F4u;
    // 7F0AE0F4: addi    r5, r3, 29544
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE0F8:
    ctx->pc = 0x7F0AE0F8u;
    // 7F0AE0F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AE0FC:
    ctx->pc = 0x7F0AE0FCu;
    // 7F0AE0FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AE100:
    ctx->pc = 0x7F0AE100u;
    // 7F0AE100: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AE104:
    loop_7F0AE104(ctx);
    if (ctx->pc == 0x7F0AE118u) goto label_7F0AE118;
    return;
label_7F0AE108:
    // 7F0AE108: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0AE10C:
    ctx->pc = 0x7F0AE10Cu;
    // 7F0AE10C: stw     r6, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AE110:
    // 7F0AE110: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F0AE114:
    // 7F0AE114: bc    16, 0, 0x7F0AE104
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE104u;
                return;
            }
            goto label_7F0AE104;
        }
    }

label_7F0AE118:
    ctx->pc = 0x7F0AE118u;
    ctx->downcount -= 11;
    // 7F0AE118: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE11C:
    ctx->pc = 0x7F0AE11Cu;
    // 7F0AE11C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE120:
    ctx->pc = 0x7F0AE120u;
    // 7F0AE120: addi    r5, r4, 29544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE124:
    ctx->pc = 0x7F0AE124u;
    // 7F0AE124: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AE128:
    ctx->pc = 0x7F0AE128u;
    // 7F0AE128: addi    r4, r3, 29896
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29896);

label_7F0AE12C:
    ctx->pc = 0x7F0AE12Cu;
    // 7F0AE12C: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE130:
    ctx->pc = 0x7F0AE130u;
    // 7F0AE130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE134:
    ctx->pc = 0x7F0AE134u;
    // 7F0AE134: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE138:
    ctx->pc = 0x7F0AE138u;
    // 7F0AE138: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE13C:
    ctx->pc = 0x7F0AE13Cu;
    // 7F0AE13C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE140:
    ctx->pc = 0x7F0AE140u;
    // 7F0AE140: bl      0x7F01B710
    {
            ctx->lr = 0x7F0AE144u;
            ctx->pc = 0x7F01B710u;
            return;
    }

label_7F0AE144:
    ctx->pc = 0x7F0AE144u;
    ctx->downcount -= 5;
    // 7F0AE144: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE148:
    ctx->pc = 0x7F0AE148u;
    // 7F0AE148: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE14C:
    ctx->pc = 0x7F0AE14Cu;
    // 7F0AE14C: stw     r3, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE150:
    ctx->pc = 0x7F0AE150u;
    // 7F0AE150: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F0AE154:
    ctx->pc = 0x7F0AE154u;
    // 7F0AE154: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE158u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE158:
    ctx->pc = 0x7F0AE158u;
    ctx->downcount -= 2;
    // 7F0AE158: cmplwi  r3, 0x0000
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

label_7F0AE15C:
    ctx->pc = 0x7F0AE15Cu;
    // 7F0AE15C: bc    12, 2, 0x7F0AE178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE178;
        }
    }

label_7F0AE160:
    ctx->pc = 0x7F0AE160u;
    ctx->downcount -= 1;
    // 7F0AE160: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE164u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE164:
    ctx->pc = 0x7F0AE164u;
    ctx->downcount -= 1;
    // 7F0AE164: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE168u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE168:
    ctx->pc = 0x7F0AE168u;
    ctx->downcount -= 4;
    // 7F0AE168: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE16C:
    ctx->pc = 0x7F0AE16Cu;
    // 7F0AE16C: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE170:
    ctx->pc = 0x7F0AE170u;
    // 7F0AE170: stw     r3, 312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE174:
    ctx->pc = 0x7F0AE174u;
    // 7F0AE174: b       0x7F0AE188
    {
            goto label_7F0AE188;
    }

label_7F0AE178:
    ctx->pc = 0x7F0AE178u;
    ctx->downcount -= 4;
    // 7F0AE178: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE17C:
    ctx->pc = 0x7F0AE17Cu;
    // 7F0AE17C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AE180:
    ctx->pc = 0x7F0AE180u;
    // 7F0AE180: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE184:
    ctx->pc = 0x7F0AE184u;
    // 7F0AE184: stw     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE188:
    ctx->pc = 0x7F0AE188u;
    ctx->downcount -= 1;
    // 7F0AE188: bl      0x7F0AE54C
    {
            ctx->lr = 0x7F0AE18Cu;
            goto label_7F0AE54C;
    }

label_7F0AE18C:
    ctx->pc = 0x7F0AE18Cu;
    ctx->downcount -= 6;
    // 7F0AE18C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE190:
    ctx->pc = 0x7F0AE190u;
    // 7F0AE190: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AE194:
    ctx->pc = 0x7F0AE194u;
    // 7F0AE194: addi    r4, r3, 29544
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE198:
    ctx->pc = 0x7F0AE198u;
    // 7F0AE198: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F0AE19C:
    ctx->pc = 0x7F0AE19Cu;
    // 7F0AE19C: stw     r0, 348(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE1A0:
    ctx->pc = 0x7F0AE1A0u;
    // 7F0AE1A0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE1A4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE1A4:
    ctx->pc = 0x7F0AE1A4u;
    ctx->downcount -= 2;
    // 7F0AE1A4: cmplwi  r3, 0x0000
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

label_7F0AE1A8:
    ctx->pc = 0x7F0AE1A8u;
    // 7F0AE1A8: bc    12, 2, 0x7F0AE1CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE1CC;
        }
    }

label_7F0AE1AC:
    ctx->pc = 0x7F0AE1ACu;
    ctx->downcount -= 4;
    // 7F0AE1AC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE1B0:
    ctx->pc = 0x7F0AE1B0u;
    // 7F0AE1B0: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE1B4:
    ctx->pc = 0x7F0AE1B4u;
    // 7F0AE1B4: addi    r4, r4, 56
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(56);

label_7F0AE1B8:
    ctx->pc = 0x7F0AE1B8u;
    // 7F0AE1B8: bl      0x7F0AE4FC
    {
            ctx->lr = 0x7F0AE1BCu;
            goto label_7F0AE4FC;
    }

label_7F0AE1BC:
    ctx->pc = 0x7F0AE1BCu;
    ctx->downcount -= 4;
    // 7F0AE1BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE1C0:
    ctx->pc = 0x7F0AE1C0u;
    // 7F0AE1C0: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE1C4:
    ctx->pc = 0x7F0AE1C4u;
    // 7F0AE1C4: sth     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AE1C8:
    ctx->pc = 0x7F0AE1C8u;
    // 7F0AE1C8: b       0x7F0AE1E4
    {
            goto label_7F0AE1E4;
    }

label_7F0AE1CC:
    ctx->pc = 0x7F0AE1CCu;
    ctx->downcount -= 6;
    // 7F0AE1CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE1D0:
    ctx->pc = 0x7F0AE1D0u;
    // 7F0AE1D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AE1D4:
    ctx->pc = 0x7F0AE1D4u;
    // 7F0AE1D4: addi    r3, r3, 29544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE1D8:
    ctx->pc = 0x7F0AE1D8u;
    // 7F0AE1D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AE1DC:
    ctx->pc = 0x7F0AE1DCu;
    // 7F0AE1DC: sth     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F0AE1E0:
    ctx->pc = 0x7F0AE1E0u;
    // 7F0AE1E0: sth     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AE1E4:
    ctx->pc = 0x7F0AE1E4u;
    ctx->downcount -= 15;
    // 7F0AE1E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE1E8:
    ctx->pc = 0x7F0AE1E8u;
    // 7F0AE1E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE1EC:
    ctx->pc = 0x7F0AE1ECu;
    // 7F0AE1EC: addi    r30, r4, 29544
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE1F0:
    ctx->pc = 0x7F0AE1F0u;
    // 7F0AE1F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AE1F4:
    ctx->pc = 0x7F0AE1F4u;
    // 7F0AE1F4: addi    r4, r3, 29896
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29896);

label_7F0AE1F8:
    ctx->pc = 0x7F0AE1F8u;
    // 7F0AE1F8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AE1FC:
    ctx->pc = 0x7F0AE1FCu;
    // 7F0AE1FC: sth     r5, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AE200:
    ctx->pc = 0x7F0AE200u;
    // 7F0AE200: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F0AE204:
    ctx->pc = 0x7F0AE204u;
    // 7F0AE204: stw     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AE208:
    ctx->pc = 0x7F0AE208u;
    // 7F0AE208: sth     r0, 106(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AE20C:
    ctx->pc = 0x7F0AE20Cu;
    // 7F0AE20C: sth     r5, 108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AE210:
    ctx->pc = 0x7F0AE210u;
    // 7F0AE210: sth     r5, 110(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(110);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AE214:
    ctx->pc = 0x7F0AE214u;
    // 7F0AE214: sth     r31, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F0AE218:
    ctx->pc = 0x7F0AE218u;
    // 7F0AE218: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AE21C:
    ctx->pc = 0x7F0AE21Cu;
    // 7F0AE21C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE220u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE220:
    ctx->pc = 0x7F0AE220u;
    ctx->downcount -= 2;
    // 7F0AE220: cmplwi  r3, 0x0000
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

label_7F0AE224:
    ctx->pc = 0x7F0AE224u;
    // 7F0AE224: bc    12, 2, 0x7F0AE230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE230;
        }
    }

label_7F0AE228:
    ctx->pc = 0x7F0AE228u;
    ctx->downcount -= 1;
    // 7F0AE228: bl      0x7F0AE258
    {
            ctx->lr = 0x7F0AE22Cu;
            goto label_7F0AE258;
    }

label_7F0AE22C:
    ctx->pc = 0x7F0AE22Cu;
    ctx->downcount -= 1;
    // 7F0AE22C: stw     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE230:
    ctx->pc = 0x7F0AE230u;
    ctx->downcount -= 21;
    // 7F0AE230: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AE234:
    ctx->pc = 0x7F0AE234u;
    // 7F0AE234: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE238:
    ctx->pc = 0x7F0AE238u;
    // 7F0AE238: stwu     r0, 29544(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_7F0AE23C:
    ctx->pc = 0x7F0AE23Cu;
    // 7F0AE23C: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE240:
    ctx->pc = 0x7F0AE240u;
    // 7F0AE240: stw     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE244:
    ctx->pc = 0x7F0AE244u;
    // 7F0AE244: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE248:
    ctx->pc = 0x7F0AE248u;
    // 7F0AE248: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE24C:
    ctx->pc = 0x7F0AE24Cu;
    // 7F0AE24C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE250:
    ctx->pc = 0x7F0AE250u;
    // 7F0AE250: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE254:
    ctx->pc = 0x7F0AE254u;
    // 7F0AE254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE258:
    ctx->pc = 0x7F0AE258u;
    ctx->downcount -= 17;
    // 7F0AE258: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE25C:
    ctx->pc = 0x7F0AE25Cu;
    // 7F0AE25C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE260:
    ctx->pc = 0x7F0AE260u;
    // 7F0AE260: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE264:
    ctx->pc = 0x7F0AE264u;
    // 7F0AE264: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE268:
    ctx->pc = 0x7F0AE268u;
    // 7F0AE268: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE26C:
    ctx->pc = 0x7F0AE26Cu;
    // 7F0AE26C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AE270:
    ctx->pc = 0x7F0AE270u;
    // 7F0AE270: b       0x7F0AE29C
    {
            goto label_7F0AE29C;
    }

label_7F0AE274:
    ctx->downcount -= 2;
    // 7F0AE274: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AE278:
    // 7F0AE278: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE27Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE27C:
    ctx->downcount -= 2;
    // 7F0AE27C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE280:
    // 7F0AE280: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE284u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE284:
    ctx->downcount -= 5;
    // 7F0AE284: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE288:
    // 7F0AE288: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AE28C:
    // 7F0AE28C: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AE290:
    // 7F0AE290: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AE294:
    // 7F0AE294: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0AE298u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0AE298:
    ctx->downcount -= 1;
    // 7F0AE298: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0AE29C:
    ctx->downcount -= 2;
    // 7F0AE29C: cmplwi  r30, 0x0000
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

label_7F0AE2A0:
    // 7F0AE2A0: bc    4, 2, 0x7F0AE274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE274u;
                return;
            }
            goto label_7F0AE274;
        }
    }

label_7F0AE2A4:
    ctx->pc = 0x7F0AE2A4u;
    ctx->downcount -= 17;
    // 7F0AE2A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE2A8:
    ctx->pc = 0x7F0AE2A8u;
    // 7F0AE2A8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE2AC:
    ctx->pc = 0x7F0AE2ACu;
    // 7F0AE2AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE2B0:
    ctx->pc = 0x7F0AE2B0u;
    // 7F0AE2B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE2B4:
    ctx->pc = 0x7F0AE2B4u;
    // 7F0AE2B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE2B8:
    ctx->pc = 0x7F0AE2B8u;
    // 7F0AE2B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE2BC:
    ctx->pc = 0x7F0AE2BCu;
    ctx->downcount -= 21;
    // 7F0AE2BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE2C0:
    ctx->pc = 0x7F0AE2C0u;
    // 7F0AE2C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE2C4:
    ctx->pc = 0x7F0AE2C4u;
    // 7F0AE2C4: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F0AE2C8:
    ctx->pc = 0x7F0AE2C8u;
    // 7F0AE2C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AE2CC:
    ctx->pc = 0x7F0AE2CCu;
    // 7F0AE2CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE2D0:
    ctx->pc = 0x7F0AE2D0u;
    // 7F0AE2D0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE2D4:
    ctx->pc = 0x7F0AE2D4u;
    // 7F0AE2D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE2D8:
    ctx->pc = 0x7F0AE2D8u;
    // 7F0AE2D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AE2DC:
    ctx->pc = 0x7F0AE2DCu;
    // 7F0AE2DC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0AE2E0:
    ctx->pc = 0x7F0AE2E0u;
    // 7F0AE2E0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0AE2E4:
    ctx->pc = 0x7F0AE2E4u;
    // 7F0AE2E4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0AE2E8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0AE2E8:
    ctx->pc = 0x7F0AE2E8u;
    ctx->downcount -= 2;
    // 7F0AE2E8: or.   r31, r3, r3
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

label_7F0AE2EC:
    ctx->pc = 0x7F0AE2ECu;
    // 7F0AE2EC: bc    12, 2, 0x7F0AE314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE314;
        }
    }

label_7F0AE2F0:
    ctx->pc = 0x7F0AE2F0u;
    ctx->downcount -= 5;
    // 7F0AE2F0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE2F4:
    ctx->pc = 0x7F0AE2F4u;
    // 7F0AE2F4: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0AE2F8:
    ctx->pc = 0x7F0AE2F8u;
    // 7F0AE2F8: addi    r4, r4, -8304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8304);

label_7F0AE2FC:
    ctx->pc = 0x7F0AE2FCu;
    // 7F0AE2FC: addi    r5, r5, -8200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8200);

label_7F0AE300:
    ctx->pc = 0x7F0AE300u;
    // 7F0AE300: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0AE304u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0AE304:
    ctx->pc = 0x7F0AE304u;
    ctx->downcount -= 4;
    // 7F0AE304: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE308:
    ctx->pc = 0x7F0AE308u;
    // 7F0AE308: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AE30C:
    ctx->pc = 0x7F0AE30Cu;
    // 7F0AE30C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AE310:
    ctx->pc = 0x7F0AE310u;
    // 7F0AE310: bl      0x7F0AE048
    {
            ctx->lr = 0x7F0AE314u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE048u;
                return;
            }
            goto label_7F0AE048;
    }

label_7F0AE314:
    ctx->pc = 0x7F0AE314u;
    ctx->downcount -= 17;
    // 7F0AE314: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE318:
    ctx->pc = 0x7F0AE318u;
    // 7F0AE318: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE31C:
    ctx->pc = 0x7F0AE31Cu;
    // 7F0AE31C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE320:
    ctx->pc = 0x7F0AE320u;
    // 7F0AE320: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE324:
    ctx->pc = 0x7F0AE324u;
    // 7F0AE324: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AE328:
    ctx->pc = 0x7F0AE328u;
    // 7F0AE328: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE32C:
    ctx->pc = 0x7F0AE32Cu;
    ctx->downcount -= 5;
    // 7F0AE32C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE330:
    ctx->pc = 0x7F0AE330u;
    // 7F0AE330: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE334:
    ctx->pc = 0x7F0AE334u;
    // 7F0AE334: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F0AE338:
    ctx->pc = 0x7F0AE338u;
    // 7F0AE338: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE33C:
    ctx->pc = 0x7F0AE33Cu;
    // 7F0AE33C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE340u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE340:
    ctx->pc = 0x7F0AE340u;
    ctx->downcount -= 2;
    // 7F0AE340: cmplwi  r3, 0x0000
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

label_7F0AE344:
    ctx->pc = 0x7F0AE344u;
    // 7F0AE344: bc    12, 2, 0x7F0AE368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE368;
        }
    }

label_7F0AE348:
    ctx->pc = 0x7F0AE348u;
    ctx->downcount -= 4;
    // 7F0AE348: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE34C:
    ctx->pc = 0x7F0AE34Cu;
    // 7F0AE34C: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE350:
    ctx->pc = 0x7F0AE350u;
    // 7F0AE350: addi    r4, r4, 288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(288);

label_7F0AE354:
    ctx->pc = 0x7F0AE354u;
    // 7F0AE354: bl      0x7F0AE4AC
    {
            ctx->lr = 0x7F0AE358u;
            goto label_7F0AE4AC;
    }

label_7F0AE358:
    ctx->pc = 0x7F0AE358u;
    ctx->downcount -= 2;
    // 7F0AE358: cmpwi   r3, 3
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

label_7F0AE35C:
    ctx->pc = 0x7F0AE35Cu;
    // 7F0AE35C: bc    4, 1, 0x7F0AE368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE368;
        }
    }

label_7F0AE360:
    ctx->pc = 0x7F0AE360u;
    ctx->downcount -= 2;
    // 7F0AE360: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0AE364:
    ctx->pc = 0x7F0AE364u;
    // 7F0AE364: b       0x7F0AE39C
    {
            goto label_7F0AE39C;
    }

label_7F0AE368:
    ctx->pc = 0x7F0AE368u;
    ctx->downcount -= 2;
    // 7F0AE368: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F0AE36C:
    ctx->pc = 0x7F0AE36Cu;
    // 7F0AE36C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE370u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE370:
    ctx->pc = 0x7F0AE370u;
    ctx->downcount -= 2;
    // 7F0AE370: cmplwi  r3, 0x0000
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

label_7F0AE374:
    ctx->pc = 0x7F0AE374u;
    // 7F0AE374: bc    12, 2, 0x7F0AE398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE398;
        }
    }

label_7F0AE378:
    ctx->pc = 0x7F0AE378u;
    ctx->downcount -= 4;
    // 7F0AE378: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE37C:
    ctx->pc = 0x7F0AE37Cu;
    // 7F0AE37C: addi    r4, r4, 29544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE380:
    ctx->pc = 0x7F0AE380u;
    // 7F0AE380: addi    r4, r4, 276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(276);

label_7F0AE384:
    ctx->pc = 0x7F0AE384u;
    // 7F0AE384: bl      0x7F0AE45C
    {
            ctx->lr = 0x7F0AE388u;
            goto label_7F0AE45C;
    }

label_7F0AE388:
    ctx->pc = 0x7F0AE388u;
    ctx->downcount -= 2;
    // 7F0AE388: cmpwi   r3, 3
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

label_7F0AE38C:
    ctx->pc = 0x7F0AE38Cu;
    // 7F0AE38C: bc    4, 1, 0x7F0AE398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE398;
        }
    }

label_7F0AE390:
    ctx->pc = 0x7F0AE390u;
    ctx->downcount -= 2;
    // 7F0AE390: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0AE394:
    ctx->pc = 0x7F0AE394u;
    // 7F0AE394: b       0x7F0AE39C
    {
            goto label_7F0AE39C;
    }

label_7F0AE398:
    ctx->pc = 0x7F0AE398u;
    ctx->downcount -= 1;
    // 7F0AE398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AE39C:
    ctx->pc = 0x7F0AE39Cu;
    ctx->downcount -= 5;
    // 7F0AE39C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE3A0:
    ctx->pc = 0x7F0AE3A0u;
    // 7F0AE3A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE3A4:
    ctx->pc = 0x7F0AE3A4u;
    // 7F0AE3A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE3A8:
    ctx->pc = 0x7F0AE3A8u;
    // 7F0AE3A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE3AC:
    ctx->pc = 0x7F0AE3ACu;
    ctx->downcount -= 6;
    // 7F0AE3AC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE3B0:
    ctx->pc = 0x7F0AE3B0u;
    // 7F0AE3B0: addi    r5, r4, 29524
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29524);

label_7F0AE3B4:
    ctx->pc = 0x7F0AE3B4u;
    // 7F0AE3B4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AE3B8:
    ctx->pc = 0x7F0AE3B8u;
    // 7F0AE3B8: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_7F0AE3BC:
    ctx->pc = 0x7F0AE3BCu;
    // 7F0AE3BC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE3C0:
    ctx->pc = 0x7F0AE3C0u;
    // 7F0AE3C0: bc    4, 0, 0x7F0AE3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE3CC;
        }
    }

label_7F0AE3C4:
    ctx->pc = 0x7F0AE3C4u;
    ctx->downcount -= 2;
    // 7F0AE3C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AE3C8:
    ctx->pc = 0x7F0AE3C8u;
    // 7F0AE3C8: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE3CC:
    ctx->pc = 0x7F0AE3CCu;
    ctx->downcount -= 4;
    // 7F0AE3CC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE3D0:
    ctx->pc = 0x7F0AE3D0u;
    // 7F0AE3D0: lwz     r0, 29524(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE3D4:
    ctx->pc = 0x7F0AE3D4u;
    // 7F0AE3D4: cmpwi   r0, 0
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

label_7F0AE3D8:
    ctx->pc = 0x7F0AE3D8u;
    // 7F0AE3D8: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE3DC:
    ctx->pc = 0x7F0AE3DCu;
    ctx->downcount -= 7;
    // 7F0AE3DC: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0AE3E0:
    ctx->pc = 0x7F0AE3E0u;
    // 7F0AE3E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AE3E4:
    ctx->pc = 0x7F0AE3E4u;
    // 7F0AE3E4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AE3E8:
    ctx->pc = 0x7F0AE3E8u;
    // 7F0AE3E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AE3EC:
    ctx->pc = 0x7F0AE3ECu;
    // 7F0AE3EC: addi    r9, r6, -31072
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(-31072);

label_7F0AE3F0:
    ctx->pc = 0x7F0AE3F0u;
    // 7F0AE3F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AE3F4:
    ctx->pc = 0x7F0AE3F4u;
    // 7F0AE3F4: b       0x7F0AE438
    {
            goto label_7F0AE438;
    }

label_7F0AE3F8:
    ctx->downcount -= 4;
    // 7F0AE3F8: add   r6, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0AE3FC:
    ctx->pc = 0x7F0AE3FCu;
    // 7F0AE3FC: lwz     r0, 144(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE400:
    // 7F0AE400: cmpwi   r0, 2
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

label_7F0AE404:
    // 7F0AE404: bc    4, 2, 0x7F0AE430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE430;
        }
    }

label_7F0AE408:
    ctx->pc = 0x7F0AE408u;
    ctx->downcount -= 4;
    // 7F0AE408: lwz     r10, 152(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(152);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0AE40C:
    ctx->pc = 0x7F0AE40Cu;
    // 7F0AE40C: lha     r6, 5274(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(5274);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AE410:
    // 7F0AE410: extsh. r0, r6
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

label_7F0AE414:
    // 7F0AE414: bc    12, 2, 0x7F0AE42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE42C;
        }
    }

label_7F0AE418:
    ctx->pc = 0x7F0AE418u;
    ctx->downcount -= 3;
    // 7F0AE418: lwz     r0, 5492(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(5492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE41C:
    // 7F0AE41C: cmpw    r0, r9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AE420:
    // 7F0AE420: bc    4, 0, 0x7F0AE42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE42C;
        }
    }

label_7F0AE424:
    ctx->downcount -= 2;
    // 7F0AE424: or   r8, r6, r6
    {
        ctx->gpr[8] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0AE428:
    // 7F0AE428: or   r9, r0, r0
    {
        ctx->gpr[9] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AE42C:
    ctx->pc = 0x7F0AE42Cu;
    ctx->downcount -= 1;
    // 7F0AE42C: sth     r5, 5274(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(5274);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AE430:
    ctx->downcount -= 2;
    // 7F0AE430: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F0AE434:
    // 7F0AE434: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F0AE438:
    ctx->pc = 0x7F0AE438u;
    ctx->downcount -= 3;
    // 7F0AE438: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE43C:
    // 7F0AE43C: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AE440:
    // 7F0AE440: bc    12, 0, 0x7F0AE3F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE3F8u;
                return;
            }
            goto label_7F0AE3F8;
        }
    }

label_7F0AE444:
    ctx->pc = 0x7F0AE444u;
    ctx->downcount -= 2;
    // 7F0AE444: cmpwi   r8, 0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AE448:
    ctx->pc = 0x7F0AE448u;
    // 7F0AE448: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE44C:
    ctx->pc = 0x7F0AE44Cu;
    ctx->downcount -= 4;
    // 7F0AE44C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE450:
    ctx->pc = 0x7F0AE450u;
    // 7F0AE450: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F0AE454:
    ctx->pc = 0x7F0AE454u;
    // 7F0AE454: stw     r0, 29524(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE458:
    ctx->pc = 0x7F0AE458u;
    // 7F0AE458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE45C:
    ctx->pc = 0x7F0AE45Cu;
    ctx->downcount -= 16;
    // 7F0AE45C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE460:
    ctx->pc = 0x7F0AE460u;
    // 7F0AE460: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE464:
    ctx->pc = 0x7F0AE464u;
    // 7F0AE464: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE468:
    ctx->pc = 0x7F0AE468u;
    // 7F0AE468: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE46C:
    ctx->pc = 0x7F0AE46Cu;
    // 7F0AE46C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AE470:
    ctx->pc = 0x7F0AE470u;
    // 7F0AE470: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AE474:
    ctx->downcount -= 1;
    // 7F0AE474: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE478u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE478:
    ctx->downcount -= 2;
    // 7F0AE478: cmplwi  r3, 0x0000
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

label_7F0AE47C:
    // 7F0AE47C: bc    12, 2, 0x7F0AE494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE494;
        }
    }

label_7F0AE480:
    ctx->downcount -= 1;
    // 7F0AE480: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE484u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE484:
    ctx->pc = 0x7F0AE484u;
    ctx->downcount -= 4;
    // 7F0AE484: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE488:
    // 7F0AE488: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0AE48C:
    // 7F0AE48C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0AE490:
    // 7F0AE490: b       0x7F0AE474
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE474u;
                return;
            }
            goto label_7F0AE474;
    }

label_7F0AE494:
    ctx->pc = 0x7F0AE494u;
    ctx->downcount -= 17;
    // 7F0AE494: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE498:
    ctx->pc = 0x7F0AE498u;
    // 7F0AE498: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE49C:
    ctx->pc = 0x7F0AE49Cu;
    // 7F0AE49C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE4A0:
    ctx->pc = 0x7F0AE4A0u;
    // 7F0AE4A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE4A4:
    ctx->pc = 0x7F0AE4A4u;
    // 7F0AE4A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE4A8:
    ctx->pc = 0x7F0AE4A8u;
    // 7F0AE4A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE4AC:
    ctx->pc = 0x7F0AE4ACu;
    ctx->downcount -= 16;
    // 7F0AE4AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE4B0:
    ctx->pc = 0x7F0AE4B0u;
    // 7F0AE4B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE4B4:
    ctx->pc = 0x7F0AE4B4u;
    // 7F0AE4B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE4B8:
    ctx->pc = 0x7F0AE4B8u;
    // 7F0AE4B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE4BC:
    ctx->pc = 0x7F0AE4BCu;
    // 7F0AE4BC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AE4C0:
    ctx->pc = 0x7F0AE4C0u;
    // 7F0AE4C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AE4C4:
    ctx->downcount -= 1;
    // 7F0AE4C4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE4C8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE4C8:
    ctx->downcount -= 2;
    // 7F0AE4C8: cmplwi  r3, 0x0000
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

label_7F0AE4CC:
    // 7F0AE4CC: bc    12, 2, 0x7F0AE4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE4E4;
        }
    }

label_7F0AE4D0:
    ctx->downcount -= 1;
    // 7F0AE4D0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE4D4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE4D4:
    ctx->pc = 0x7F0AE4D4u;
    ctx->downcount -= 4;
    // 7F0AE4D4: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE4D8:
    // 7F0AE4D8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0AE4DC:
    // 7F0AE4DC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0AE4E0:
    // 7F0AE4E0: b       0x7F0AE4C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE4C4u;
                return;
            }
            goto label_7F0AE4C4;
    }

label_7F0AE4E4:
    ctx->pc = 0x7F0AE4E4u;
    ctx->downcount -= 17;
    // 7F0AE4E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE4E8:
    ctx->pc = 0x7F0AE4E8u;
    // 7F0AE4E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE4EC:
    ctx->pc = 0x7F0AE4ECu;
    // 7F0AE4EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE4F0:
    ctx->pc = 0x7F0AE4F0u;
    // 7F0AE4F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE4F4:
    ctx->pc = 0x7F0AE4F4u;
    // 7F0AE4F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE4F8:
    ctx->pc = 0x7F0AE4F8u;
    // 7F0AE4F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE4FC:
    ctx->pc = 0x7F0AE4FCu;
    ctx->downcount -= 16;
    // 7F0AE4FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE500:
    ctx->pc = 0x7F0AE500u;
    // 7F0AE500: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE504:
    ctx->pc = 0x7F0AE504u;
    // 7F0AE504: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE508:
    ctx->pc = 0x7F0AE508u;
    // 7F0AE508: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE50C:
    ctx->pc = 0x7F0AE50Cu;
    // 7F0AE50C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AE510:
    ctx->pc = 0x7F0AE510u;
    // 7F0AE510: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AE514:
    ctx->downcount -= 1;
    // 7F0AE514: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE518u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE518:
    ctx->downcount -= 2;
    // 7F0AE518: cmplwi  r3, 0x0000
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

label_7F0AE51C:
    // 7F0AE51C: bc    12, 2, 0x7F0AE534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE534;
        }
    }

label_7F0AE520:
    ctx->downcount -= 1;
    // 7F0AE520: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE524u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE524:
    ctx->pc = 0x7F0AE524u;
    ctx->downcount -= 4;
    // 7F0AE524: sth     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AE528:
    // 7F0AE528: addi    r30, r30, 2
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(2);

label_7F0AE52C:
    // 7F0AE52C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0AE530:
    // 7F0AE530: b       0x7F0AE514
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE514u;
                return;
            }
            goto label_7F0AE514;
    }

label_7F0AE534:
    ctx->pc = 0x7F0AE534u;
    ctx->downcount -= 17;
    // 7F0AE534: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE538:
    ctx->pc = 0x7F0AE538u;
    // 7F0AE538: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE53C:
    ctx->pc = 0x7F0AE53Cu;
    // 7F0AE53C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE540:
    ctx->pc = 0x7F0AE540u;
    // 7F0AE540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE544:
    ctx->pc = 0x7F0AE544u;
    // 7F0AE544: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE548:
    ctx->pc = 0x7F0AE548u;
    // 7F0AE548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE54C:
    ctx->pc = 0x7F0AE54Cu;
    ctx->downcount -= 21;
    // 7F0AE54C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE550:
    ctx->pc = 0x7F0AE550u;
    // 7F0AE550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE554:
    ctx->pc = 0x7F0AE554u;
    // 7F0AE554: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AE558:
    ctx->pc = 0x7F0AE558u;
    // 7F0AE558: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F0AE55C:
    ctx->pc = 0x7F0AE55Cu;
    // 7F0AE55C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE560:
    ctx->pc = 0x7F0AE560u;
    // 7F0AE560: addi    r5, r3, 29544
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29544);

label_7F0AE564:
    ctx->pc = 0x7F0AE564u;
    // 7F0AE564: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AE568:
    ctx->pc = 0x7F0AE568u;
    // 7F0AE568: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AE56C:
    ctx->pc = 0x7F0AE56Cu;
    // 7F0AE56C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AE570:
    ctx->pc = 0x7F0AE570u;
    // 7F0AE570: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AE574:
    loop_7F0AE574(ctx);
    if (ctx->pc == 0x7F0AE584u) goto label_7F0AE584;
    return;
label_7F0AE578:
    // 7F0AE578: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0AE57C:
    ctx->pc = 0x7F0AE57Cu;
    // 7F0AE57C: stw     r6, 316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AE580:
    // 7F0AE580: bc    16, 0, 0x7F0AE574
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE574u;
                return;
            }
            goto label_7F0AE574;
        }
    }

label_7F0AE584:
    ctx->pc = 0x7F0AE584u;
    ctx->downcount -= 4;
    // 7F0AE584: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0AE588:
    ctx->pc = 0x7F0AE588u;
    // 7F0AE588: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AE58C:
    ctx->pc = 0x7F0AE58Cu;
    // 7F0AE58C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F0AE590:
    ctx->pc = 0x7F0AE590u;
    // 7F0AE590: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0AE594u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0AE594:
    ctx->pc = 0x7F0AE594u;
    ctx->downcount -= 2;
    // 7F0AE594: cmplwi  r3, 0x0000
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

label_7F0AE598:
    ctx->pc = 0x7F0AE598u;
    // 7F0AE598: bc    12, 2, 0x7F0AE5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE5D8;
        }
    }

label_7F0AE59C:
    ctx->pc = 0x7F0AE59Cu;
    ctx->downcount -= 3;
    // 7F0AE59C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE5A0:
    ctx->pc = 0x7F0AE5A0u;
    // 7F0AE5A0: addi    r30, r4, 29544
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(29544);

label_7F0AE5A4:
    ctx->pc = 0x7F0AE5A4u;
    // 7F0AE5A4: b       0x7F0AE5D0
    {
            goto label_7F0AE5D0;
    }

label_7F0AE5A8:
    ctx->downcount -= 2;
    // 7F0AE5A8: cmpwi   r29, 8
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AE5AC:
    // 7F0AE5AC: bc    12, 0, 0x7F0AE5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE5B8;
        }
    }

label_7F0AE5B0:
    ctx->downcount -= 2;
    // 7F0AE5B0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0AE5B4:
    // 7F0AE5B4: b       0x7F0AE5DC
    {
            goto label_7F0AE5DC;
    }

label_7F0AE5B8:
    ctx->downcount -= 1;
    // 7F0AE5B8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0AE5BCu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0AE5BC:
    ctx->downcount -= 3;
    // 7F0AE5BC: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0AE5C0:
    ctx->pc = 0x7F0AE5C0u;
    // 7F0AE5C0: stw     r3, 316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE5C4:
    // 7F0AE5C4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0AE5C8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0AE5C8:
    ctx->downcount -= 2;
    // 7F0AE5C8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0AE5CC:
    // 7F0AE5CC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0AE5D0:
    ctx->downcount -= 2;
    // 7F0AE5D0: cmplwi  r3, 0x0000
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

label_7F0AE5D4:
    // 7F0AE5D4: bc    4, 2, 0x7F0AE5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE5A8u;
                return;
            }
            goto label_7F0AE5A8;
        }
    }

label_7F0AE5D8:
    ctx->pc = 0x7F0AE5D8u;
    ctx->downcount -= 1;
    // 7F0AE5D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AE5DC:
    ctx->pc = 0x7F0AE5DCu;
    ctx->downcount -= 16;
    // 7F0AE5DC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AE5E0:
    ctx->pc = 0x7F0AE5E0u;
    // 7F0AE5E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE5E4:
    ctx->pc = 0x7F0AE5E4u;
    // 7F0AE5E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE5E8:
    ctx->pc = 0x7F0AE5E8u;
    // 7F0AE5E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AE5EC:
    ctx->pc = 0x7F0AE5ECu;
    // 7F0AE5EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE5F0:
    ctx->pc = 0x7F0AE5F0u;
    ctx->downcount -= 10;
    // 7F0AE5F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE5F4:
    ctx->pc = 0x7F0AE5F4u;
    // 7F0AE5F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE5F8:
    ctx->pc = 0x7F0AE5F8u;
    // 7F0AE5F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AE5FC:
    ctx->pc = 0x7F0AE5FCu;
    // 7F0AE5FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE600:
    ctx->pc = 0x7F0AE600u;
    // 7F0AE600: lwzu     r0, 29944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29944);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0AE604:
    ctx->pc = 0x7F0AE604u;
    // 7F0AE604: stw     r0, 1044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE608:
    ctx->pc = 0x7F0AE608u;
    // 7F0AE608: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE60C:
    ctx->pc = 0x7F0AE60Cu;
    // 7F0AE60C: rlwinm r0, r0, 0, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF0000u;
    }

label_7F0AE610:
    ctx->pc = 0x7F0AE610u;
    // 7F0AE610: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE614:
    ctx->pc = 0x7F0AE614u;
    // 7F0AE614: bl      0x7F0AEAF0
    {
            ctx->lr = 0x7F0AE618u;
            goto label_7F0AEAF0;
    }

label_7F0AE618:
    ctx->pc = 0x7F0AE618u;
    ctx->downcount -= 5;
    // 7F0AE618: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE61C:
    ctx->pc = 0x7F0AE61Cu;
    // 7F0AE61C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE620:
    ctx->pc = 0x7F0AE620u;
    // 7F0AE620: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE624:
    ctx->pc = 0x7F0AE624u;
    // 7F0AE624: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE628:
    ctx->pc = 0x7F0AE628u;
    ctx->downcount -= 6;
    // 7F0AE628: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE62C:
    ctx->pc = 0x7F0AE62Cu;
    // 7F0AE62C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE630:
    ctx->pc = 0x7F0AE630u;
    // 7F0AE630: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE634:
    ctx->pc = 0x7F0AE634u;
    // 7F0AE634: lwz     r4, 1044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1044);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AE638:
    ctx->pc = 0x7F0AE638u;
    // 7F0AE638: rlwinm. r0, r4, 0, 30, 30
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

label_7F0AE63C:
    ctx->pc = 0x7F0AE63Cu;
    // 7F0AE63C: bc    12, 2, 0x7F0AE654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE654;
        }
    }

label_7F0AE640:
    ctx->pc = 0x7F0AE640u;
    ctx->downcount -= 3;
    // 7F0AE640: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE644:
    ctx->pc = 0x7F0AE644u;
    // 7F0AE644: addi    r4, r4, -5504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5504);

label_7F0AE648:
    ctx->pc = 0x7F0AE648u;
    // 7F0AE648: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE64Cu;
            goto label_7F0AEB5C;
    }

label_7F0AE64C:
    ctx->pc = 0x7F0AE64Cu;
    ctx->downcount -= 2;
    // 7F0AE64C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AE650:
    ctx->pc = 0x7F0AE650u;
    // 7F0AE650: b       0x7F0AE6C8
    {
            goto label_7F0AE6C8;
    }

label_7F0AE654:
    ctx->pc = 0x7F0AE654u;
    ctx->downcount -= 2;
    // 7F0AE654: rlwinm. r0, r4, 0, 31, 31
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

label_7F0AE658:
    ctx->pc = 0x7F0AE658u;
    // 7F0AE658: bc    12, 2, 0x7F0AE670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE670;
        }
    }

label_7F0AE65C:
    ctx->pc = 0x7F0AE65Cu;
    ctx->downcount -= 3;
    // 7F0AE65C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE660:
    ctx->pc = 0x7F0AE660u;
    // 7F0AE660: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AE664:
    ctx->pc = 0x7F0AE664u;
    // 7F0AE664: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE668u;
            goto label_7F0AEB5C;
    }

label_7F0AE668:
    ctx->pc = 0x7F0AE668u;
    ctx->downcount -= 2;
    // 7F0AE668: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AE66C:
    ctx->pc = 0x7F0AE66Cu;
    // 7F0AE66C: b       0x7F0AE6C8
    {
            goto label_7F0AE6C8;
    }

label_7F0AE670:
    ctx->pc = 0x7F0AE670u;
    ctx->downcount -= 2;
    // 7F0AE670: rlwinm. r0, r4, 0, 26, 26
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

label_7F0AE674:
    ctx->pc = 0x7F0AE674u;
    // 7F0AE674: bc    12, 2, 0x7F0AE68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE68C;
        }
    }

label_7F0AE678:
    ctx->pc = 0x7F0AE678u;
    ctx->downcount -= 3;
    // 7F0AE678: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE67C:
    ctx->pc = 0x7F0AE67Cu;
    // 7F0AE67C: addi    r4, r4, -6160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6160);

label_7F0AE680:
    ctx->pc = 0x7F0AE680u;
    // 7F0AE680: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE684u;
            goto label_7F0AEB5C;
    }

label_7F0AE684:
    ctx->pc = 0x7F0AE684u;
    ctx->downcount -= 2;
    // 7F0AE684: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AE688:
    ctx->pc = 0x7F0AE688u;
    // 7F0AE688: b       0x7F0AE6C8
    {
            goto label_7F0AE6C8;
    }

label_7F0AE68C:
    ctx->pc = 0x7F0AE68Cu;
    ctx->downcount -= 2;
    // 7F0AE68C: rlwinm. r0, r4, 0, 22, 22
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

label_7F0AE690:
    ctx->pc = 0x7F0AE690u;
    // 7F0AE690: bc    12, 2, 0x7F0AE6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE6A8;
        }
    }

label_7F0AE694:
    ctx->pc = 0x7F0AE694u;
    ctx->downcount -= 3;
    // 7F0AE694: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE698:
    ctx->pc = 0x7F0AE698u;
    // 7F0AE698: addi    r4, r4, -5832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5832);

label_7F0AE69C:
    ctx->pc = 0x7F0AE69Cu;
    // 7F0AE69C: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE6A0u;
            goto label_7F0AEB5C;
    }

label_7F0AE6A0:
    ctx->pc = 0x7F0AE6A0u;
    ctx->downcount -= 2;
    // 7F0AE6A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AE6A4:
    ctx->pc = 0x7F0AE6A4u;
    // 7F0AE6A4: b       0x7F0AE6C8
    {
            goto label_7F0AE6C8;
    }

label_7F0AE6A8:
    ctx->pc = 0x7F0AE6A8u;
    ctx->downcount -= 2;
    // 7F0AE6A8: rlwinm. r0, r4, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AE6AC:
    ctx->pc = 0x7F0AE6ACu;
    // 7F0AE6AC: bc    12, 2, 0x7F0AE6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE6C4;
        }
    }

label_7F0AE6B0:
    ctx->pc = 0x7F0AE6B0u;
    ctx->downcount -= 3;
    // 7F0AE6B0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE6B4:
    ctx->pc = 0x7F0AE6B4u;
    // 7F0AE6B4: addi    r4, r4, -6368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6368);

label_7F0AE6B8:
    ctx->pc = 0x7F0AE6B8u;
    // 7F0AE6B8: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE6BCu;
            goto label_7F0AEB5C;
    }

label_7F0AE6BC:
    ctx->pc = 0x7F0AE6BCu;
    ctx->downcount -= 2;
    // 7F0AE6BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AE6C0:
    ctx->pc = 0x7F0AE6C0u;
    // 7F0AE6C0: b       0x7F0AE6C8
    {
            goto label_7F0AE6C8;
    }

label_7F0AE6C4:
    ctx->pc = 0x7F0AE6C4u;
    ctx->downcount -= 1;
    // 7F0AE6C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AE6C8:
    ctx->pc = 0x7F0AE6C8u;
    ctx->downcount -= 5;
    // 7F0AE6C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE6CC:
    ctx->pc = 0x7F0AE6CCu;
    // 7F0AE6CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE6D0:
    ctx->pc = 0x7F0AE6D0u;
    // 7F0AE6D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE6D4:
    ctx->pc = 0x7F0AE6D4u;
    // 7F0AE6D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE6D8:
    ctx->pc = 0x7F0AE6D8u;
    ctx->downcount -= 7;
    // 7F0AE6D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE6DC:
    ctx->pc = 0x7F0AE6DCu;
    // 7F0AE6DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE6E0:
    ctx->pc = 0x7F0AE6E0u;
    // 7F0AE6E0: cmpwi   r4, 0
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

label_7F0AE6E4:
    ctx->pc = 0x7F0AE6E4u;
    // 7F0AE6E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE6E8:
    ctx->pc = 0x7F0AE6E8u;
    // 7F0AE6E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE6EC:
    ctx->pc = 0x7F0AE6ECu;
    // 7F0AE6EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE6F0:
    ctx->pc = 0x7F0AE6F0u;
    // 7F0AE6F0: bc    4, 2, 0x7F0AE700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE700;
        }
    }

label_7F0AE6F4:
    ctx->pc = 0x7F0AE6F4u;
    ctx->downcount -= 3;
    // 7F0AE6F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AE6F8:
    ctx->pc = 0x7F0AE6F8u;
    // 7F0AE6F8: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AE6FC:
    ctx->pc = 0x7F0AE6FCu;
    // 7F0AE6FC: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE700u;
            goto label_7F0AEB74;
    }

label_7F0AE700:
    ctx->pc = 0x7F0AE700u;
    ctx->downcount -= 2;
    // 7F0AE700: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE704:
    ctx->pc = 0x7F0AE704u;
    // 7F0AE704: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE708u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE708:
    ctx->pc = 0x7F0AE708u;
    ctx->downcount -= 7;
    // 7F0AE708: cmpwi   r3, 0
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

label_7F0AE70C:
    ctx->pc = 0x7F0AE70Cu;
    // 7F0AE70C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE710:
    ctx->pc = 0x7F0AE710u;
    // 7F0AE710: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE714:
    ctx->pc = 0x7F0AE714u;
    // 7F0AE714: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE718:
    ctx->pc = 0x7F0AE718u;
    // 7F0AE718: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE71C:
    ctx->pc = 0x7F0AE71Cu;
    // 7F0AE71C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE720:
    ctx->pc = 0x7F0AE720u;
    ctx->downcount -= 7;
    // 7F0AE720: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE724:
    ctx->pc = 0x7F0AE724u;
    // 7F0AE724: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE728:
    ctx->pc = 0x7F0AE728u;
    // 7F0AE728: cmpwi   r4, 0
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

label_7F0AE72C:
    ctx->pc = 0x7F0AE72Cu;
    // 7F0AE72C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE730:
    ctx->pc = 0x7F0AE730u;
    // 7F0AE730: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE734:
    ctx->pc = 0x7F0AE734u;
    // 7F0AE734: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE738:
    ctx->pc = 0x7F0AE738u;
    // 7F0AE738: bc    4, 2, 0x7F0AE748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE748;
        }
    }

label_7F0AE73C:
    ctx->pc = 0x7F0AE73Cu;
    ctx->downcount -= 3;
    // 7F0AE73C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AE740:
    ctx->pc = 0x7F0AE740u;
    // 7F0AE740: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AE744:
    ctx->pc = 0x7F0AE744u;
    // 7F0AE744: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE748u;
            goto label_7F0AEB74;
    }

label_7F0AE748:
    ctx->pc = 0x7F0AE748u;
    ctx->downcount -= 5;
    // 7F0AE748: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AE74C:
    ctx->pc = 0x7F0AE74Cu;
    // 7F0AE74C: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AE750:
    ctx->pc = 0x7F0AE750u;
    // 7F0AE750: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0AE754:
    ctx->pc = 0x7F0AE754u;
    // 7F0AE754: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AE758:
    ctx->pc = 0x7F0AE758u;
    // 7F0AE758: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0AE75Cu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0AE75C:
    ctx->pc = 0x7F0AE75Cu;
    ctx->downcount -= 9;
    // 7F0AE75C: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AE75Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AE760:
    ctx->pc = 0x7F0AE760u;
    // 7F0AE760: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AE760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AE764:
    ctx->pc = 0x7F0AE764u;
    // 7F0AE764: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AE764u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AE768:
    ctx->pc = 0x7F0AE768u;
    // 7F0AE768: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AE768u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AE76C:
    ctx->pc = 0x7F0AE76Cu;
    // 7F0AE76C: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AE76Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AE770:
    ctx->pc = 0x7F0AE770u;
    // 7F0AE770: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AE770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AE774:
    ctx->pc = 0x7F0AE774u;
    // 7F0AE774: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE778:
    ctx->pc = 0x7F0AE778u;
    // 7F0AE778: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AE77C:
    ctx->pc = 0x7F0AE77Cu;
    // 7F0AE77C: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0AE780u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0AE780:
    ctx->pc = 0x7F0AE780u;
    ctx->downcount -= 6;
    // 7F0AE780: lha     r0, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AE784:
    ctx->pc = 0x7F0AE784u;
    // 7F0AE784: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F0AE788:
    ctx->pc = 0x7F0AE788u;
    // 7F0AE788: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0AE78C:
    ctx->pc = 0x7F0AE78Cu;
    // 7F0AE78C: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0AE790:
    ctx->pc = 0x7F0AE790u;
    // 7F0AE790: rlwinm. r0, r3, 0, 20, 20
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

label_7F0AE794:
    ctx->pc = 0x7F0AE794u;
    // 7F0AE794: bc    12, 2, 0x7F0AE79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE79C;
        }
    }

label_7F0AE798:
    ctx->pc = 0x7F0AE798u;
    ctx->downcount -= 1;
    // 7F0AE798: addi    r3, r3, -4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F0AE79C:
    ctx->pc = 0x7F0AE79Cu;
    ctx->downcount -= 2;
    // 7F0AE79C: cmpwi   r3, -1024
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

label_7F0AE7A0:
    ctx->pc = 0x7F0AE7A0u;
    // 7F0AE7A0: bc    4, 0, 0x7F0AE7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE7A8;
        }
    }

label_7F0AE7A4:
    ctx->pc = 0x7F0AE7A4u;
    ctx->downcount -= 1;
    // 7F0AE7A4: li      r3, -1024
    ctx->gpr[3] = (u32)(s32)(-1024);

label_7F0AE7A8:
    ctx->pc = 0x7F0AE7A8u;
    ctx->downcount -= 2;
    // 7F0AE7A8: cmpwi   r3, 1024
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

label_7F0AE7AC:
    ctx->pc = 0x7F0AE7ACu;
    // 7F0AE7AC: bc    4, 1, 0x7F0AE7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE7B4;
        }
    }

label_7F0AE7B0:
    ctx->pc = 0x7F0AE7B0u;
    ctx->downcount -= 1;
    // 7F0AE7B0: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F0AE7B4:
    ctx->pc = 0x7F0AE7B4u;
    ctx->downcount -= 4;
    // 7F0AE7B4: stw     r3, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AE7B8:
    ctx->pc = 0x7F0AE7B8u;
    // 7F0AE7B8: lwz     r0, 1044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE7BC:
    ctx->pc = 0x7F0AE7BCu;
    // 7F0AE7BC: rlwinm. r0, r0, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AE7C0:
    ctx->pc = 0x7F0AE7C0u;
    // 7F0AE7C0: bc    4, 2, 0x7F0AE7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE7DC;
        }
    }

label_7F0AE7C4:
    ctx->pc = 0x7F0AE7C4u;
    ctx->downcount -= 4;
    // 7F0AE7C4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE7C8:
    ctx->pc = 0x7F0AE7C8u;
    // 7F0AE7C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE7CC:
    ctx->pc = 0x7F0AE7CCu;
    // 7F0AE7CC: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AE7D0:
    ctx->pc = 0x7F0AE7D0u;
    // 7F0AE7D0: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE7D4u;
            goto label_7F0AEB5C;
    }

label_7F0AE7D4:
    ctx->pc = 0x7F0AE7D4u;
    ctx->downcount -= 2;
    // 7F0AE7D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AE7D8:
    ctx->pc = 0x7F0AE7D8u;
    // 7F0AE7D8: stw     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE7DC:
    ctx->pc = 0x7F0AE7DCu;
    ctx->downcount -= 6;
    // 7F0AE7DC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE7E0:
    ctx->pc = 0x7F0AE7E0u;
    // 7F0AE7E0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE7E4:
    ctx->pc = 0x7F0AE7E4u;
    // 7F0AE7E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE7E8:
    ctx->pc = 0x7F0AE7E8u;
    // 7F0AE7E8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0AE7EC:
    ctx->pc = 0x7F0AE7ECu;
    // 7F0AE7EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE7F0:
    ctx->pc = 0x7F0AE7F0u;
    ctx->downcount -= 7;
    // 7F0AE7F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE7F4:
    ctx->pc = 0x7F0AE7F4u;
    // 7F0AE7F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE7F8:
    ctx->pc = 0x7F0AE7F8u;
    // 7F0AE7F8: cmpwi   r4, 0
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

label_7F0AE7FC:
    ctx->pc = 0x7F0AE7FCu;
    // 7F0AE7FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE800:
    ctx->pc = 0x7F0AE800u;
    // 7F0AE800: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE804:
    ctx->pc = 0x7F0AE804u;
    // 7F0AE804: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE808:
    ctx->pc = 0x7F0AE808u;
    // 7F0AE808: bc    4, 2, 0x7F0AE818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE818;
        }
    }

label_7F0AE80C:
    ctx->pc = 0x7F0AE80Cu;
    ctx->downcount -= 3;
    // 7F0AE80C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F0AE810:
    ctx->pc = 0x7F0AE810u;
    // 7F0AE810: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AE814:
    ctx->pc = 0x7F0AE814u;
    // 7F0AE814: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE818u;
            goto label_7F0AEB74;
    }

label_7F0AE818:
    ctx->pc = 0x7F0AE818u;
    ctx->downcount -= 2;
    // 7F0AE818: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE81C:
    ctx->pc = 0x7F0AE81Cu;
    // 7F0AE81C: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE820u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE820:
    ctx->pc = 0x7F0AE820u;
    ctx->downcount -= 2;
    // 7F0AE820: cmpwi   r3, 0
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

label_7F0AE824:
    ctx->pc = 0x7F0AE824u;
    // 7F0AE824: bc    4, 2, 0x7F0AE84C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE84C;
        }
    }

label_7F0AE828:
    ctx->pc = 0x7F0AE828u;
    ctx->downcount -= 5;
    // 7F0AE828: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE82C:
    ctx->pc = 0x7F0AE82Cu;
    // 7F0AE82C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE830:
    ctx->pc = 0x7F0AE830u;
    // 7F0AE830: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE834:
    ctx->pc = 0x7F0AE834u;
    // 7F0AE834: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AE838:
    ctx->pc = 0x7F0AE838u;
    // 7F0AE838: bc    12, 2, 0x7F0AE84C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE84C;
        }
    }

label_7F0AE83C:
    ctx->pc = 0x7F0AE83Cu;
    ctx->downcount -= 4;
    // 7F0AE83C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE840:
    ctx->pc = 0x7F0AE840u;
    // 7F0AE840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE844:
    ctx->pc = 0x7F0AE844u;
    // 7F0AE844: addi    r4, r4, -6048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6048);

label_7F0AE848:
    ctx->pc = 0x7F0AE848u;
    // 7F0AE848: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE84Cu;
            goto label_7F0AEB5C;
    }

label_7F0AE84C:
    ctx->pc = 0x7F0AE84Cu;
    ctx->downcount -= 6;
    // 7F0AE84C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE850:
    ctx->pc = 0x7F0AE850u;
    // 7F0AE850: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE854:
    ctx->pc = 0x7F0AE854u;
    // 7F0AE854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE858:
    ctx->pc = 0x7F0AE858u;
    // 7F0AE858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE85C:
    ctx->pc = 0x7F0AE85Cu;
    // 7F0AE85C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE860:
    ctx->pc = 0x7F0AE860u;
    ctx->downcount -= 7;
    // 7F0AE860: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE864:
    ctx->pc = 0x7F0AE864u;
    // 7F0AE864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE868:
    ctx->pc = 0x7F0AE868u;
    // 7F0AE868: cmpwi   r4, 0
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

label_7F0AE86C:
    ctx->pc = 0x7F0AE86Cu;
    // 7F0AE86C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE870:
    ctx->pc = 0x7F0AE870u;
    // 7F0AE870: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE874:
    ctx->pc = 0x7F0AE874u;
    // 7F0AE874: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE878:
    ctx->pc = 0x7F0AE878u;
    // 7F0AE878: bc    4, 2, 0x7F0AE888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE888;
        }
    }

label_7F0AE87C:
    ctx->pc = 0x7F0AE87Cu;
    ctx->downcount -= 3;
    // 7F0AE87C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0AE880:
    ctx->pc = 0x7F0AE880u;
    // 7F0AE880: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AE884:
    ctx->pc = 0x7F0AE884u;
    // 7F0AE884: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE888u;
            goto label_7F0AEB74;
    }

label_7F0AE888:
    ctx->pc = 0x7F0AE888u;
    ctx->downcount -= 2;
    // 7F0AE888: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE88C:
    ctx->pc = 0x7F0AE88Cu;
    // 7F0AE88C: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE890u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE890:
    ctx->pc = 0x7F0AE890u;
    ctx->downcount -= 2;
    // 7F0AE890: cmpwi   r3, 0
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

label_7F0AE894:
    ctx->pc = 0x7F0AE894u;
    // 7F0AE894: bc    4, 2, 0x7F0AE8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE8B4;
        }
    }

label_7F0AE898:
    ctx->pc = 0x7F0AE898u;
    ctx->downcount -= 3;
    // 7F0AE898: lwz     r0, 1044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE89C:
    ctx->pc = 0x7F0AE89Cu;
    // 7F0AE89C: rlwinm. r0, r0, 0, 14, 14
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

label_7F0AE8A0:
    ctx->pc = 0x7F0AE8A0u;
    // 7F0AE8A0: bc    4, 2, 0x7F0AE8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE8B4;
        }
    }

label_7F0AE8A4:
    ctx->pc = 0x7F0AE8A4u;
    ctx->downcount -= 4;
    // 7F0AE8A4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE8A8:
    ctx->pc = 0x7F0AE8A8u;
    // 7F0AE8A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE8AC:
    ctx->pc = 0x7F0AE8ACu;
    // 7F0AE8AC: addi    r4, r4, -5944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5944);

label_7F0AE8B0:
    ctx->pc = 0x7F0AE8B0u;
    // 7F0AE8B0: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE8B4u;
            goto label_7F0AEB5C;
    }

label_7F0AE8B4:
    ctx->pc = 0x7F0AE8B4u;
    ctx->downcount -= 6;
    // 7F0AE8B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE8B8:
    ctx->pc = 0x7F0AE8B8u;
    // 7F0AE8B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE8BC:
    ctx->pc = 0x7F0AE8BCu;
    // 7F0AE8BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE8C0:
    ctx->pc = 0x7F0AE8C0u;
    // 7F0AE8C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE8C4:
    ctx->pc = 0x7F0AE8C4u;
    // 7F0AE8C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE8C8:
    ctx->pc = 0x7F0AE8C8u;
    ctx->downcount -= 7;
    // 7F0AE8C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE8CC:
    ctx->pc = 0x7F0AE8CCu;
    // 7F0AE8CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE8D0:
    ctx->pc = 0x7F0AE8D0u;
    // 7F0AE8D0: cmpwi   r4, 0
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

label_7F0AE8D4:
    ctx->pc = 0x7F0AE8D4u;
    // 7F0AE8D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE8D8:
    ctx->pc = 0x7F0AE8D8u;
    // 7F0AE8D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE8DC:
    ctx->pc = 0x7F0AE8DCu;
    // 7F0AE8DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE8E0:
    ctx->pc = 0x7F0AE8E0u;
    // 7F0AE8E0: bc    4, 2, 0x7F0AE8F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE8F0;
        }
    }

label_7F0AE8E4:
    ctx->pc = 0x7F0AE8E4u;
    ctx->downcount -= 3;
    // 7F0AE8E4: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F0AE8E8:
    ctx->pc = 0x7F0AE8E8u;
    // 7F0AE8E8: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AE8EC:
    ctx->pc = 0x7F0AE8ECu;
    // 7F0AE8EC: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE8F0u;
            goto label_7F0AEB74;
    }

label_7F0AE8F0:
    ctx->pc = 0x7F0AE8F0u;
    ctx->downcount -= 2;
    // 7F0AE8F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE8F4:
    ctx->pc = 0x7F0AE8F4u;
    // 7F0AE8F4: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE8F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE8F8:
    ctx->pc = 0x7F0AE8F8u;
    ctx->downcount -= 2;
    // 7F0AE8F8: cmpwi   r3, 0
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

label_7F0AE8FC:
    ctx->pc = 0x7F0AE8FCu;
    // 7F0AE8FC: bc    4, 2, 0x7F0AE924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE924;
        }
    }

label_7F0AE900:
    ctx->pc = 0x7F0AE900u;
    ctx->downcount -= 5;
    // 7F0AE900: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE904:
    ctx->pc = 0x7F0AE904u;
    // 7F0AE904: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE908:
    ctx->pc = 0x7F0AE908u;
    // 7F0AE908: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE90C:
    ctx->pc = 0x7F0AE90Cu;
    // 7F0AE90C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AE910:
    ctx->pc = 0x7F0AE910u;
    // 7F0AE910: bc    12, 2, 0x7F0AE924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE924;
        }
    }

label_7F0AE914:
    ctx->pc = 0x7F0AE914u;
    ctx->downcount -= 4;
    // 7F0AE914: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE918:
    ctx->pc = 0x7F0AE918u;
    // 7F0AE918: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE91C:
    ctx->pc = 0x7F0AE91Cu;
    // 7F0AE91C: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AE920:
    ctx->pc = 0x7F0AE920u;
    // 7F0AE920: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE924u;
            goto label_7F0AEB5C;
    }

label_7F0AE924:
    ctx->pc = 0x7F0AE924u;
    ctx->downcount -= 6;
    // 7F0AE924: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE928:
    ctx->pc = 0x7F0AE928u;
    // 7F0AE928: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE92C:
    ctx->pc = 0x7F0AE92Cu;
    // 7F0AE92C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE930:
    ctx->pc = 0x7F0AE930u;
    // 7F0AE930: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE934:
    ctx->pc = 0x7F0AE934u;
    // 7F0AE934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE938:
    ctx->pc = 0x7F0AE938u;
    ctx->downcount -= 7;
    // 7F0AE938: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE93C:
    ctx->pc = 0x7F0AE93Cu;
    // 7F0AE93C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE940:
    ctx->pc = 0x7F0AE940u;
    // 7F0AE940: cmpwi   r4, 0
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

label_7F0AE944:
    ctx->pc = 0x7F0AE944u;
    // 7F0AE944: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE948:
    ctx->pc = 0x7F0AE948u;
    // 7F0AE948: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE94C:
    ctx->pc = 0x7F0AE94Cu;
    // 7F0AE94C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE950:
    ctx->pc = 0x7F0AE950u;
    // 7F0AE950: bc    4, 2, 0x7F0AE960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE960;
        }
    }

label_7F0AE954:
    ctx->pc = 0x7F0AE954u;
    ctx->downcount -= 3;
    // 7F0AE954: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AE958:
    ctx->pc = 0x7F0AE958u;
    // 7F0AE958: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AE95C:
    ctx->pc = 0x7F0AE95Cu;
    // 7F0AE95C: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE960u;
            goto label_7F0AEB74;
    }

label_7F0AE960:
    ctx->pc = 0x7F0AE960u;
    ctx->downcount -= 2;
    // 7F0AE960: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE964:
    ctx->pc = 0x7F0AE964u;
    // 7F0AE964: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE968u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE968:
    ctx->pc = 0x7F0AE968u;
    ctx->downcount -= 2;
    // 7F0AE968: cmpwi   r3, 0
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

label_7F0AE96C:
    ctx->pc = 0x7F0AE96Cu;
    // 7F0AE96C: bc    4, 2, 0x7F0AE994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE994;
        }
    }

label_7F0AE970:
    ctx->pc = 0x7F0AE970u;
    ctx->downcount -= 5;
    // 7F0AE970: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE974:
    ctx->pc = 0x7F0AE974u;
    // 7F0AE974: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AE978:
    ctx->pc = 0x7F0AE978u;
    // 7F0AE978: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE97C:
    ctx->pc = 0x7F0AE97Cu;
    // 7F0AE97C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AE980:
    ctx->pc = 0x7F0AE980u;
    // 7F0AE980: bc    12, 2, 0x7F0AE994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE994;
        }
    }

label_7F0AE984:
    ctx->pc = 0x7F0AE984u;
    ctx->downcount -= 4;
    // 7F0AE984: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE988:
    ctx->pc = 0x7F0AE988u;
    // 7F0AE988: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE98C:
    ctx->pc = 0x7F0AE98Cu;
    // 7F0AE98C: addi    r4, r4, -5720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5720);

label_7F0AE990:
    ctx->pc = 0x7F0AE990u;
    // 7F0AE990: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE994u;
            goto label_7F0AEB5C;
    }

label_7F0AE994:
    ctx->pc = 0x7F0AE994u;
    ctx->downcount -= 6;
    // 7F0AE994: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE998:
    ctx->pc = 0x7F0AE998u;
    // 7F0AE998: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AE99C:
    ctx->pc = 0x7F0AE99Cu;
    // 7F0AE99C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AE9A0:
    ctx->pc = 0x7F0AE9A0u;
    // 7F0AE9A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AE9A4:
    ctx->pc = 0x7F0AE9A4u;
    // 7F0AE9A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AE9A8:
    ctx->pc = 0x7F0AE9A8u;
    ctx->downcount -= 7;
    // 7F0AE9A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AE9AC:
    ctx->pc = 0x7F0AE9ACu;
    // 7F0AE9AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AE9B0:
    ctx->pc = 0x7F0AE9B0u;
    // 7F0AE9B0: cmpwi   r4, 0
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

label_7F0AE9B4:
    ctx->pc = 0x7F0AE9B4u;
    // 7F0AE9B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AE9B8:
    ctx->pc = 0x7F0AE9B8u;
    // 7F0AE9B8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AE9BC:
    ctx->pc = 0x7F0AE9BCu;
    // 7F0AE9BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AE9C0:
    ctx->pc = 0x7F0AE9C0u;
    // 7F0AE9C0: bc    4, 2, 0x7F0AE9D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE9D0;
        }
    }

label_7F0AE9C4:
    ctx->pc = 0x7F0AE9C4u;
    ctx->downcount -= 3;
    // 7F0AE9C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AE9C8:
    ctx->pc = 0x7F0AE9C8u;
    // 7F0AE9C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AE9CC:
    ctx->pc = 0x7F0AE9CCu;
    // 7F0AE9CC: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AE9D0u;
            goto label_7F0AEB74;
    }

label_7F0AE9D0:
    ctx->pc = 0x7F0AE9D0u;
    ctx->downcount -= 2;
    // 7F0AE9D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE9D4:
    ctx->pc = 0x7F0AE9D4u;
    // 7F0AE9D4: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AE9D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AE9D8:
    ctx->pc = 0x7F0AE9D8u;
    ctx->downcount -= 2;
    // 7F0AE9D8: cmpwi   r3, 0
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

label_7F0AE9DC:
    ctx->pc = 0x7F0AE9DCu;
    // 7F0AE9DC: bc    4, 2, 0x7F0AE9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE9FC;
        }
    }

label_7F0AE9E0:
    ctx->pc = 0x7F0AE9E0u;
    ctx->downcount -= 3;
    // 7F0AE9E0: lwz     r0, 1044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AE9E4:
    ctx->pc = 0x7F0AE9E4u;
    // 7F0AE9E4: rlwinm. r0, r0, 0, 14, 14
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

label_7F0AE9E8:
    ctx->pc = 0x7F0AE9E8u;
    // 7F0AE9E8: bc    4, 2, 0x7F0AE9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AE9FC;
        }
    }

label_7F0AE9EC:
    ctx->pc = 0x7F0AE9ECu;
    ctx->downcount -= 4;
    // 7F0AE9EC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AE9F0:
    ctx->pc = 0x7F0AE9F0u;
    // 7F0AE9F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AE9F4:
    ctx->pc = 0x7F0AE9F4u;
    // 7F0AE9F4: addi    r4, r4, -5616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5616);

label_7F0AE9F8:
    ctx->pc = 0x7F0AE9F8u;
    // 7F0AE9F8: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AE9FCu;
            goto label_7F0AEB5C;
    }

label_7F0AE9FC:
    ctx->pc = 0x7F0AE9FCu;
    ctx->downcount -= 6;
    // 7F0AE9FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEA00:
    ctx->pc = 0x7F0AEA00u;
    // 7F0AEA00: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AEA04:
    ctx->pc = 0x7F0AEA04u;
    // 7F0AEA04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEA08:
    ctx->pc = 0x7F0AEA08u;
    // 7F0AEA08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AEA0C:
    ctx->pc = 0x7F0AEA0Cu;
    // 7F0AEA0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEA10:
    ctx->pc = 0x7F0AEA10u;
    ctx->downcount -= 7;
    // 7F0AEA10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEA14:
    ctx->pc = 0x7F0AEA14u;
    // 7F0AEA14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEA18:
    ctx->pc = 0x7F0AEA18u;
    // 7F0AEA18: cmpwi   r4, 0
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

label_7F0AEA1C:
    ctx->pc = 0x7F0AEA1Cu;
    // 7F0AEA1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEA20:
    ctx->pc = 0x7F0AEA20u;
    // 7F0AEA20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AEA24:
    ctx->pc = 0x7F0AEA24u;
    // 7F0AEA24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEA28:
    ctx->pc = 0x7F0AEA28u;
    // 7F0AEA28: bc    4, 2, 0x7F0AEA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEA38;
        }
    }

label_7F0AEA2C:
    ctx->pc = 0x7F0AEA2Cu;
    ctx->downcount -= 3;
    // 7F0AEA2C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AEA30:
    ctx->pc = 0x7F0AEA30u;
    // 7F0AEA30: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AEA34:
    ctx->pc = 0x7F0AEA34u;
    // 7F0AEA34: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AEA38u;
            goto label_7F0AEB74;
    }

label_7F0AEA38:
    ctx->pc = 0x7F0AEA38u;
    ctx->downcount -= 2;
    // 7F0AEA38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AEA3C:
    ctx->pc = 0x7F0AEA3Cu;
    // 7F0AEA3C: bl      0x7F0AE628
    {
            ctx->lr = 0x7F0AEA40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE628u;
                return;
            }
            goto label_7F0AE628;
    }

label_7F0AEA40:
    ctx->pc = 0x7F0AEA40u;
    ctx->downcount -= 2;
    // 7F0AEA40: cmpwi   r3, 0
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

label_7F0AEA44:
    ctx->pc = 0x7F0AEA44u;
    // 7F0AEA44: bc    4, 2, 0x7F0AEA6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEA6C;
        }
    }

label_7F0AEA48:
    ctx->pc = 0x7F0AEA48u;
    ctx->downcount -= 5;
    // 7F0AEA48: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEA4C:
    ctx->pc = 0x7F0AEA4Cu;
    // 7F0AEA4C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEA50:
    ctx->pc = 0x7F0AEA50u;
    // 7F0AEA50: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEA54:
    ctx->pc = 0x7F0AEA54u;
    // 7F0AEA54: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AEA58:
    ctx->pc = 0x7F0AEA58u;
    // 7F0AEA58: bc    12, 2, 0x7F0AEA6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEA6C;
        }
    }

label_7F0AEA5C:
    ctx->pc = 0x7F0AEA5Cu;
    ctx->downcount -= 4;
    // 7F0AEA5C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AEA60:
    ctx->pc = 0x7F0AEA60u;
    // 7F0AEA60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AEA64:
    ctx->pc = 0x7F0AEA64u;
    // 7F0AEA64: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AEA68:
    ctx->pc = 0x7F0AEA68u;
    // 7F0AEA68: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AEA6Cu;
            goto label_7F0AEB5C;
    }

label_7F0AEA6C:
    ctx->pc = 0x7F0AEA6Cu;
    ctx->downcount -= 6;
    // 7F0AEA6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEA70:
    ctx->pc = 0x7F0AEA70u;
    // 7F0AEA70: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AEA74:
    ctx->pc = 0x7F0AEA74u;
    // 7F0AEA74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEA78:
    ctx->pc = 0x7F0AEA78u;
    // 7F0AEA78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AEA7C:
    ctx->pc = 0x7F0AEA7Cu;
    // 7F0AEA7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEA80:
    ctx->pc = 0x7F0AEA80u;
    ctx->downcount -= 7;
    // 7F0AEA80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEA84:
    ctx->pc = 0x7F0AEA84u;
    // 7F0AEA84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEA88:
    ctx->pc = 0x7F0AEA88u;
    // 7F0AEA88: cmpwi   r4, 0
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

label_7F0AEA8C:
    ctx->pc = 0x7F0AEA8Cu;
    // 7F0AEA8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEA90:
    ctx->pc = 0x7F0AEA90u;
    // 7F0AEA90: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AEA94:
    ctx->pc = 0x7F0AEA94u;
    // 7F0AEA94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEA98:
    ctx->pc = 0x7F0AEA98u;
    // 7F0AEA98: bc    4, 2, 0x7F0AEAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEAB8;
        }
    }

label_7F0AEA9C:
    ctx->pc = 0x7F0AEA9Cu;
    ctx->downcount -= 3;
    // 7F0AEA9C: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_7F0AEAA0:
    ctx->pc = 0x7F0AEAA0u;
    // 7F0AEAA0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AEAA4:
    ctx->pc = 0x7F0AEAA4u;
    // 7F0AEAA4: bl      0x7F0AEB74
    {
            ctx->lr = 0x7F0AEAA8u;
            goto label_7F0AEB74;
    }

label_7F0AEAA8:
    ctx->pc = 0x7F0AEAA8u;
    ctx->downcount -= 4;
    // 7F0AEAA8: lha     r4, 1068(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1068);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AEAAC:
    ctx->pc = 0x7F0AEAACu;
    // 7F0AEAAC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AEAB0:
    ctx->pc = 0x7F0AEAB0u;
    // 7F0AEAB0: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F0AEAB4:
    ctx->pc = 0x7F0AEAB4u;
    // 7F0AEAB4: bl      0x7F011A74
    {
            ctx->lr = 0x7F0AEAB8u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0AEAB8:
    ctx->pc = 0x7F0AEAB8u;
    ctx->downcount -= 5;
    // 7F0AEAB8: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEABC:
    ctx->pc = 0x7F0AEABCu;
    // 7F0AEABC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEAC0:
    ctx->pc = 0x7F0AEAC0u;
    // 7F0AEAC0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEAC4:
    ctx->pc = 0x7F0AEAC4u;
    // 7F0AEAC4: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AEAC8:
    ctx->pc = 0x7F0AEAC8u;
    // 7F0AEAC8: bc    12, 2, 0x7F0AEADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEADC;
        }
    }

label_7F0AEACC:
    ctx->pc = 0x7F0AEACCu;
    ctx->downcount -= 4;
    // 7F0AEACC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AEAD0:
    ctx->pc = 0x7F0AEAD0u;
    // 7F0AEAD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AEAD4:
    ctx->pc = 0x7F0AEAD4u;
    // 7F0AEAD4: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AEAD8:
    ctx->pc = 0x7F0AEAD8u;
    // 7F0AEAD8: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AEADCu;
            goto label_7F0AEB5C;
    }

label_7F0AEADC:
    ctx->pc = 0x7F0AEADCu;
    ctx->downcount -= 6;
    // 7F0AEADC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEAE0:
    ctx->pc = 0x7F0AEAE0u;
    // 7F0AEAE0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AEAE4:
    ctx->pc = 0x7F0AEAE4u;
    // 7F0AEAE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEAE8:
    ctx->pc = 0x7F0AEAE8u;
    // 7F0AEAE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AEAEC:
    ctx->pc = 0x7F0AEAECu;
    // 7F0AEAEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEAF0:
    ctx->pc = 0x7F0AEAF0u;
    ctx->downcount -= 22;
    // 7F0AEAF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEAF4:
    ctx->pc = 0x7F0AEAF4u;
    // 7F0AEAF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEAF8:
    ctx->pc = 0x7F0AEAF8u;
    // 7F0AEAF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEAFC:
    ctx->pc = 0x7F0AEAFCu;
    // 7F0AEAFC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AEB00:
    ctx->pc = 0x7F0AEB00u;
    // 7F0AEB00: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEB04:
    ctx->pc = 0x7F0AEB04u;
    // 7F0AEB04: lwz     r4, 1032(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1032);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEB08:
    ctx->pc = 0x7F0AEB08u;
    // 7F0AEB08: lwz     r31, 1024(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1024);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AEB0C:
    ctx->pc = 0x7F0AEB0Cu;
    // 7F0AEB0C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0AEB10:
    ctx->pc = 0x7F0AEB10u;
    // 7F0AEB10: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AEB14:
    ctx->pc = 0x7F0AEB14u;
    // 7F0AEB14: cmplwi  r31, 0x0000
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

label_7F0AEB18:
    ctx->pc = 0x7F0AEB18u;
    // 7F0AEB18: stw     r0, 1032(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1032);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEB1C:
    ctx->pc = 0x7F0AEB1Cu;
    // 7F0AEB1C: bc    4, 2, 0x7F0AEB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEB34;
        }
    }

label_7F0AEB20:
    ctx->pc = 0x7F0AEB20u;
    ctx->downcount -= 5;
    // 7F0AEB20: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AEB24:
    ctx->pc = 0x7F0AEB24u;
    // 7F0AEB24: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F0AEB28:
    ctx->pc = 0x7F0AEB28u;
    // 7F0AEB28: stw     r4, 1024(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEB2C:
    ctx->pc = 0x7F0AEB2Cu;
    // 7F0AEB2C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AEB30:
    ctx->pc = 0x7F0AEB30u;
    // 7F0AEB30: bl      0x7F0AEB5C
    {
            ctx->lr = 0x7F0AEB34u;
            goto label_7F0AEB5C;
    }

label_7F0AEB34:
    ctx->pc = 0x7F0AEB34u;
    ctx->downcount -= 6;
    // 7F0AEB34: or   r12, r31, r31
    {
        ctx->gpr[12] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AEB38:
    ctx->pc = 0x7F0AEB38u;
    // 7F0AEB38: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AEB3C:
    ctx->pc = 0x7F0AEB3Cu;
    // 7F0AEB3C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEB40:
    ctx->pc = 0x7F0AEB40u;
    // 7F0AEB40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F0AEB44:
    ctx->pc = 0x7F0AEB44u;
    // 7F0AEB44: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F0AEB48u;
            ctx->pc = target;
            return;
        }
    }

label_7F0AEB48:
    ctx->pc = 0x7F0AEB48u;
    ctx->downcount -= 16;
    // 7F0AEB48: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AEB4C:
    ctx->pc = 0x7F0AEB4Cu;
    // 7F0AEB4C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEB50:
    ctx->pc = 0x7F0AEB50u;
    // 7F0AEB50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEB54:
    ctx->pc = 0x7F0AEB54u;
    // 7F0AEB54: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AEB58:
    ctx->pc = 0x7F0AEB58u;
    // 7F0AEB58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEB5C:
    ctx->pc = 0x7F0AEB5Cu;
    ctx->downcount -= 6;
    // 7F0AEB5C: stw     r4, 1024(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEB60:
    ctx->pc = 0x7F0AEB60u;
    // 7F0AEB60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AEB64:
    ctx->pc = 0x7F0AEB64u;
    // 7F0AEB64: stw     r0, 1032(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1032);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEB68:
    ctx->pc = 0x7F0AEB68u;
    // 7F0AEB68: sth     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEB6C:
    ctx->pc = 0x7F0AEB6Cu;
    // 7F0AEB6C: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEB70:
    ctx->pc = 0x7F0AEB70u;
    // 7F0AEB70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEB74:
    ctx->pc = 0x7F0AEB74u;
    ctx->downcount -= 12;
    // 7F0AEB74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEB78:
    ctx->pc = 0x7F0AEB78u;
    // 7F0AEB78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEB7C:
    ctx->pc = 0x7F0AEB7Cu;
    // 7F0AEB7C: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AEB80:
    ctx->pc = 0x7F0AEB80u;
    // 7F0AEB80: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AEB84:
    ctx->pc = 0x7F0AEB84u;
    // 7F0AEB84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEB88:
    ctx->pc = 0x7F0AEB88u;
    // 7F0AEB88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AEB8C:
    ctx->pc = 0x7F0AEB8Cu;
    // 7F0AEB8C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AEB90:
    ctx->pc = 0x7F0AEB90u;
    // 7F0AEB90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AEB94:
    ctx->pc = 0x7F0AEB94u;
    // 7F0AEB94: stw     r4, 1040(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1040);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEB98:
    ctx->pc = 0x7F0AEB98u;
    // 7F0AEB98: addi    r3, r3, 448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(448);

label_7F0AEB9C:
    ctx->pc = 0x7F0AEB9Cu;
    // 7F0AEB9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AEBA0:
    ctx->pc = 0x7F0AEBA0u;
    // 7F0AEBA0: bl      0x7F042C94
    {
            ctx->lr = 0x7F0AEBA4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0AEBA4:
    ctx->pc = 0x7F0AEBA4u;
    ctx->downcount -= 5;
    // 7F0AEBA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEBA8:
    ctx->pc = 0x7F0AEBA8u;
    // 7F0AEBA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEBAC:
    ctx->pc = 0x7F0AEBACu;
    // 7F0AEBAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AEBB0:
    ctx->pc = 0x7F0AEBB0u;
    // 7F0AEBB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEBB4:
    ctx->pc = 0x7F0AEBB4u;
    ctx->downcount -= 27;
    // 7F0AEBB4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEBB8:
    ctx->pc = 0x7F0AEBB8u;
    // 7F0AEBB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEBBC:
    ctx->pc = 0x7F0AEBBCu;
    // 7F0AEBBC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AEBC0:
    ctx->pc = 0x7F0AEBC0u;
    // 7F0AEBC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEBC4:
    ctx->pc = 0x7F0AEBC4u;
    // 7F0AEBC4: addi    r7, r4, 29920
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(29920);

label_7F0AEBC8:
    ctx->pc = 0x7F0AEBC8u;
    // 7F0AEBC8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AEBCC:
    ctx->pc = 0x7F0AEBCCu;
    // 7F0AEBCC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEBD0:
    ctx->pc = 0x7F0AEBD0u;
    // 7F0AEBD0: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AEBD4:
    ctx->pc = 0x7F0AEBD4u;
    // 7F0AEBD4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AEBD8:
    ctx->pc = 0x7F0AEBD8u;
    // 7F0AEBD8: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AEBDC:
    ctx->pc = 0x7F0AEBDCu;
    // 7F0AEBDC: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEBE0:
    ctx->pc = 0x7F0AEBE0u;
    // 7F0AEBE0: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEBE4:
    ctx->pc = 0x7F0AEBE4u;
    // 7F0AEBE4: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AEBE8:
    ctx->pc = 0x7F0AEBE8u;
    // 7F0AEBE8: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AEBEC:
    ctx->pc = 0x7F0AEBECu;
    // 7F0AEBEC: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEBF0:
    ctx->pc = 0x7F0AEBF0u;
    // 7F0AEBF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEBF4:
    ctx->pc = 0x7F0AEBF4u;
    // 7F0AEBF4: bl      0x7F0AE5F0
    {
            ctx->lr = 0x7F0AEBF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AE5F0u;
                return;
            }
            goto label_7F0AE5F0;
    }

label_7F0AEBF8:
    ctx->pc = 0x7F0AEBF8u;
    ctx->downcount -= 2;
    // 7F0AEBF8: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0AEBFC:
    ctx->pc = 0x7F0AEBFCu;
    // 7F0AEBFC: bl      0x7F04291C
    {
            ctx->lr = 0x7F0AEC00u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F0AEC00:
    ctx->pc = 0x7F0AEC00u;
    ctx->downcount -= 15;
    // 7F0AEC00: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AEC04:
    ctx->pc = 0x7F0AEC04u;
    // 7F0AEC04: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AEC08:
    ctx->pc = 0x7F0AEC08u;
    // 7F0AEC08: addi    r5, r4, 12808
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F0AEC0C:
    ctx->pc = 0x7F0AEC0Cu;
    // 7F0AEC0C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEC10:
    ctx->pc = 0x7F0AEC10u;
    // 7F0AEC10: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0AEC14:
    ctx->pc = 0x7F0AEC14u;
    // 7F0AEC14: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEC18:
    ctx->pc = 0x7F0AEC18u;
    // 7F0AEC18: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEC1C:
    ctx->pc = 0x7F0AEC1Cu;
    // 7F0AEC1C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEC20:
    ctx->pc = 0x7F0AEC20u;
    // 7F0AEC20: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEC24:
    ctx->pc = 0x7F0AEC24u;
    // 7F0AEC24: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEC28:
    ctx->pc = 0x7F0AEC28u;
    // 7F0AEC28: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AEC2C:
    ctx->pc = 0x7F0AEC2Cu;
    // 7F0AEC2C: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEC30:
    ctx->pc = 0x7F0AEC30u;
    // 7F0AEC30: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEC34:
    ctx->pc = 0x7F0AEC34u;
    // 7F0AEC34: addi    r4, r4, 32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32);

label_7F0AEC38:
    ctx->pc = 0x7F0AEC38u;
    // 7F0AEC38: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AEC3Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AEC3C:
    ctx->pc = 0x7F0AEC3Cu;
    ctx->downcount -= 4;
    // 7F0AEC3C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AEC40:
    ctx->pc = 0x7F0AEC40u;
    // 7F0AEC40: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AEC44:
    ctx->pc = 0x7F0AEC44u;
    // 7F0AEC44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEC48:
    ctx->pc = 0x7F0AEC48u;
    // 7F0AEC48: bl      0x7F3B3648
    {
            ctx->lr = 0x7F0AEC4Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F0AEC4C:
    ctx->pc = 0x7F0AEC4Cu;
    ctx->downcount -= 19;
    // 7F0AEC4C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AEC50:
    ctx->pc = 0x7F0AEC50u;
    // 7F0AEC50: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AEC54:
    ctx->pc = 0x7F0AEC54u;
    // 7F0AEC54: addi    r5, r4, -5200
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5200);

label_7F0AEC58:
    ctx->pc = 0x7F0AEC58u;
    // 7F0AEC58: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AEC58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AEC5C:
    ctx->pc = 0x7F0AEC5Cu;
    // 7F0AEC5C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AEC5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AEC60:
    ctx->pc = 0x7F0AEC60u;
    // 7F0AEC60: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AEC64:
    ctx->pc = 0x7F0AEC64u;
    // 7F0AEC64: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AEC68:
    ctx->pc = 0x7F0AEC68u;
    // 7F0AEC68: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0AEC6C:
    ctx->pc = 0x7F0AEC6Cu;
    // 7F0AEC6C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AEC6Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F0AEC70:
    ctx->pc = 0x7F0AEC70u;
    // 7F0AEC70: addi    r4, r4, 12808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F0AEC74:
    ctx->pc = 0x7F0AEC74u;
    // 7F0AEC74: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AEC74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AEC78:
    ctx->pc = 0x7F0AEC78u;
    // 7F0AEC78: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEC7C:
    ctx->pc = 0x7F0AEC7Cu;
    // 7F0AEC7C: stw     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AEC80:
    ctx->pc = 0x7F0AEC80u;
    // 7F0AEC80: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEC84:
    ctx->pc = 0x7F0AEC84u;
    // 7F0AEC84: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AEC88:
    ctx->pc = 0x7F0AEC88u;
    // 7F0AEC88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEC8C:
    ctx->pc = 0x7F0AEC8Cu;
    // 7F0AEC8C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AEC90:
    ctx->pc = 0x7F0AEC90u;
    // 7F0AEC90: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEC94:
    ctx->pc = 0x7F0AEC94u;
    // 7F0AEC94: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AEC98u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AEC98:
    ctx->pc = 0x7F0AEC98u;
    ctx->downcount -= 3;
    // 7F0AEC98: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEC9C:
    ctx->pc = 0x7F0AEC9Cu;
    // 7F0AEC9C: addi    r4, r3, 32
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32);

label_7F0AECA0:
    ctx->pc = 0x7F0AECA0u;
    // 7F0AECA0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AECA4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AECA4:
    ctx->pc = 0x7F0AECA4u;
    ctx->downcount -= 2;
    // 7F0AECA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AECA8:
    ctx->pc = 0x7F0AECA8u;
    // 7F0AECA8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0AECACu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0AECAC:
    ctx->pc = 0x7F0AECACu;
    ctx->downcount -= 2;
    // 7F0AECAC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F0AECB0:
    ctx->pc = 0x7F0AECB0u;
    // 7F0AECB0: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F0AECB4u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F0AECB4:
    ctx->pc = 0x7F0AECB4u;
    ctx->downcount -= 2;
    // 7F0AECB4: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0AECB8:
    ctx->pc = 0x7F0AECB8u;
    // 7F0AECB8: bl      0x7F0429C4
    {
            ctx->lr = 0x7F0AECBCu;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F0AECBC:
    ctx->pc = 0x7F0AECBCu;
    ctx->downcount -= 3;
    // 7F0AECBC: lwz     r0, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AECC0:
    ctx->pc = 0x7F0AECC0u;
    // 7F0AECC0: cmplwi  r0, 0x0000
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

label_7F0AECC4:
    ctx->pc = 0x7F0AECC4u;
    // 7F0AECC4: bc    12, 2, 0x7F0AECE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AECE8;
        }
    }

label_7F0AECC8:
    ctx->pc = 0x7F0AECC8u;
    ctx->downcount -= 3;
    // 7F0AECC8: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AECCC:
    ctx->pc = 0x7F0AECCCu;
    // 7F0AECCC: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F0AECD0:
    ctx->pc = 0x7F0AECD0u;
    // 7F0AECD0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AECD4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AECD4:
    ctx->pc = 0x7F0AECD4u;
    ctx->downcount -= 3;
    // 7F0AECD4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AECD8:
    ctx->pc = 0x7F0AECD8u;
    // 7F0AECD8: addi    r3, r3, -32432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32432);

label_7F0AECDC:
    ctx->pc = 0x7F0AECDCu;
    // 7F0AECDC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0AECE0u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0AECE0:
    ctx->pc = 0x7F0AECE0u;
    ctx->downcount -= 2;
    // 7F0AECE0: lwz     r3, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AECE4:
    ctx->pc = 0x7F0AECE4u;
    // 7F0AECE4: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F0AECE8u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F0AECE8:
    ctx->pc = 0x7F0AECE8u;
    ctx->downcount -= 5;
    // 7F0AECE8: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AECEC:
    ctx->pc = 0x7F0AECECu;
    // 7F0AECEC: addi    r4, r30, 692
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(692);

label_7F0AECF0:
    ctx->pc = 0x7F0AECF0u;
    // 7F0AECF0: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0AECF4:
    ctx->pc = 0x7F0AECF4u;
    // 7F0AECF4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0AECF8:
    ctx->pc = 0x7F0AECF8u;
    // 7F0AECF8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0AECFCu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0AECFC:
    ctx->pc = 0x7F0AECFCu;
    ctx->downcount -= 16;
    // 7F0AECFC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AED00:
    ctx->pc = 0x7F0AED00u;
    // 7F0AED00: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AED04:
    ctx->pc = 0x7F0AED04u;
    // 7F0AED04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AED08:
    ctx->pc = 0x7F0AED08u;
    // 7F0AED08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AED0C:
    ctx->pc = 0x7F0AED0Cu;
    // 7F0AED0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AED10:
    ctx->pc = 0x7F0AED10u;
    ctx->downcount -= 22;
    // 7F0AED10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AED14:
    ctx->pc = 0x7F0AED14u;
    // 7F0AED14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AED18:
    ctx->pc = 0x7F0AED18u;
    // 7F0AED18: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F0AED1C:
    ctx->pc = 0x7F0AED1Cu;
    // 7F0AED1C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AED20:
    ctx->pc = 0x7F0AED20u;
    // 7F0AED20: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AED24:
    ctx->pc = 0x7F0AED24u;
    // 7F0AED24: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AED28:
    ctx->pc = 0x7F0AED28u;
    // 7F0AED28: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AED2C:
    ctx->pc = 0x7F0AED2Cu;
    // 7F0AED2C: addi    r31, r29, 48
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(48);

label_7F0AED30:
    ctx->pc = 0x7F0AED30u;
    // 7F0AED30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AED34:
    ctx->pc = 0x7F0AED34u;
    // 7F0AED34: lwz     r5, 18312(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AED38:
    ctx->pc = 0x7F0AED38u;
    // 7F0AED38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AED3C:
    ctx->pc = 0x7F0AED3Cu;
    // 7F0AED3C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0AED40u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0AED40:
    ctx->pc = 0x7F0AED40u;
    ctx->downcount -= 2;
    // 7F0AED40: cmpwi   r3, 0
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

label_7F0AED44:
    ctx->pc = 0x7F0AED44u;
    // 7F0AED44: bc    4, 0, 0x7F0AED50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AED50;
        }
    }

label_7F0AED48:
    ctx->pc = 0x7F0AED48u;
    ctx->downcount -= 2;
    // 7F0AED48: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0AED4C:
    ctx->pc = 0x7F0AED4Cu;
    // 7F0AED4C: b       0x7F0AEF68
    {
            goto label_7F0AEF68;
    }

label_7F0AED50:
    ctx->pc = 0x7F0AED50u;
    ctx->downcount -= 20;
    // 7F0AED50: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AED54:
    ctx->pc = 0x7F0AED54u;
    // 7F0AED54: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0AED58:
    ctx->pc = 0x7F0AED58u;
    // 7F0AED58: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0AED5C:
    ctx->pc = 0x7F0AED5Cu;
    // 7F0AED5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AED60:
    ctx->pc = 0x7F0AED60u;
    // 7F0AED60: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AED64:
    ctx->pc = 0x7F0AED64u;
    // 7F0AED64: addi    r4, r4, -2692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2692);

label_7F0AED68:
    ctx->pc = 0x7F0AED68u;
    // 7F0AED68: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AED6C:
    ctx->pc = 0x7F0AED6Cu;
    // 7F0AED6C: addi    r5, r5, 29920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29920);

label_7F0AED70:
    ctx->pc = 0x7F0AED70u;
    // 7F0AED70: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AED74:
    ctx->pc = 0x7F0AED74u;
    // 7F0AED74: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AED78:
    ctx->pc = 0x7F0AED78u;
    // 7F0AED78: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AED7C:
    ctx->pc = 0x7F0AED7Cu;
    // 7F0AED7C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AED80:
    ctx->pc = 0x7F0AED80u;
    // 7F0AED80: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AED84:
    ctx->pc = 0x7F0AED84u;
    // 7F0AED84: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AED88:
    ctx->pc = 0x7F0AED88u;
    // 7F0AED88: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AED8C:
    ctx->pc = 0x7F0AED8Cu;
    // 7F0AED8C: lwz     r6, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AED90:
    ctx->pc = 0x7F0AED90u;
    // 7F0AED90: lwz     r0, 36(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AED94:
    ctx->pc = 0x7F0AED94u;
    // 7F0AED94: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AED98:
    ctx->pc = 0x7F0AED98u;
    // 7F0AED98: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AED9C:
    ctx->pc = 0x7F0AED9Cu;
    // 7F0AED9C: bl      0x80025FFC
    {
            ctx->lr = 0x7F0AEDA0u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F0AEDA0:
    ctx->pc = 0x7F0AEDA0u;
    ctx->downcount -= 3;
    // 7F0AEDA0: cmpwi   r30, 0
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

label_7F0AEDA4:
    ctx->pc = 0x7F0AEDA4u;
    // 7F0AEDA4: addi    r30, r29, 448
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(448);

label_7F0AEDA8:
    ctx->pc = 0x7F0AEDA8u;
    // 7F0AEDA8: bc    4, 2, 0x7F0AEE58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEE58;
        }
    }

label_7F0AEDAC:
    ctx->pc = 0x7F0AEDACu;
    ctx->downcount -= 6;
    // 7F0AEDAC: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F0AEDB0:
    ctx->pc = 0x7F0AEDB0u;
    // 7F0AEDB0: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0AEDB4:
    ctx->pc = 0x7F0AEDB4u;
    // 7F0AEDB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEDB8:
    ctx->pc = 0x7F0AEDB8u;
    // 7F0AEDB8: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F0AEDBC:
    ctx->pc = 0x7F0AEDBCu;
    // 7F0AEDBC: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0AEDC0:
    ctx->pc = 0x7F0AEDC0u;
    // 7F0AEDC0: bl      0x7F04272C
    {
            ctx->lr = 0x7F0AEDC4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0AEDC4:
    ctx->pc = 0x7F0AEDC4u;
    ctx->downcount -= 27;
    // 7F0AEDC4: lis     r10, 4
    ctx->gpr[10] = ((u32)(s32)(4) << 16);

label_7F0AEDC8:
    ctx->pc = 0x7F0AEDC8u;
    // 7F0AEDC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AEDCC:
    ctx->pc = 0x7F0AEDCCu;
    // 7F0AEDCC: addi    r0, r10, 22417
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(22417);

label_7F0AEDD0:
    ctx->pc = 0x7F0AEDD0u;
    // 7F0AEDD0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AEDD4:
    ctx->pc = 0x7F0AEDD4u;
    // 7F0AEDD4: stw     r0, 820(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEDD8:
    ctx->pc = 0x7F0AEDD8u;
    // 7F0AEDD8: li      r9, 1934
    ctx->gpr[9] = (u32)(s32)(1934);

label_7F0AEDDC:
    ctx->pc = 0x7F0AEDDCu;
    // 7F0AEDDC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0AEDE0:
    ctx->pc = 0x7F0AEDE0u;
    // 7F0AEDE0: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F0AEDE4:
    ctx->pc = 0x7F0AEDE4u;
    // 7F0AEDE4: sth     r9, 1068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1068);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0AEDE8:
    ctx->pc = 0x7F0AEDE8u;
    // 7F0AEDE8: li      r0, 1935
    ctx->gpr[0] = (u32)(s32)(1935);

label_7F0AEDEC:
    ctx->pc = 0x7F0AEDECu;
    // 7F0AEDEC: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F0AEDF0:
    ctx->pc = 0x7F0AEDF0u;
    // 7F0AEDF0: lfs     f1, -5196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AEDF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AEDF4:
    ctx->pc = 0x7F0AEDF4u;
    // 7F0AEDF4: sth     r0, 1070(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1070);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEDF8:
    ctx->pc = 0x7F0AEDF8u;
    // 7F0AEDF8: li      r0, 1936
    ctx->gpr[0] = (u32)(s32)(1936);

label_7F0AEDFC:
    ctx->pc = 0x7F0AEDFCu;
    // 7F0AEDFC: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0AEE00:
    ctx->pc = 0x7F0AEE00u;
    // 7F0AEE00: addi    r3, r10, -16498
    ctx->gpr[3] = ctx->gpr[10] + (u32)(s32)(-16498);

label_7F0AEE04:
    ctx->pc = 0x7F0AEE04u;
    // 7F0AEE04: sth     r0, 1072(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1072);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEE08:
    ctx->pc = 0x7F0AEE08u;
    // 7F0AEE08: lis     r6, 246
    ctx->gpr[6] = ((u32)(s32)(246) << 16);

label_7F0AEE0C:
    ctx->pc = 0x7F0AEE0Cu;
    // 7F0AEE0C: addi    r0, r6, 5933
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(5933);

label_7F0AEE10:
    ctx->pc = 0x7F0AEE10u;
    // 7F0AEE10: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F0AEE14:
    ctx->pc = 0x7F0AEE14u;
    // 7F0AEE14: sth     r9, 1074(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1074);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0AEE18:
    ctx->pc = 0x7F0AEE18u;
    // 7F0AEE18: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEE1C:
    ctx->pc = 0x7F0AEE1Cu;
    // 7F0AEE1C: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F0AEE20:
    ctx->pc = 0x7F0AEE20u;
    // 7F0AEE20: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0AEE24:
    ctx->pc = 0x7F0AEE24u;
    // 7F0AEE24: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEE28:
    ctx->pc = 0x7F0AEE28u;
    // 7F0AEE28: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0AEE2C:
    ctx->pc = 0x7F0AEE2Cu;
    // 7F0AEE2C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F0AEE30u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F0AEE30:
    ctx->pc = 0x7F0AEE30u;
    ctx->downcount -= 7;
    // 7F0AEE30: stw     r3, 1076(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1076);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AEE34:
    ctx->pc = 0x7F0AEE34u;
    // 7F0AEE34: lis     r5, 240
    ctx->gpr[5] = ((u32)(s32)(240) << 16);

label_7F0AEE38:
    ctx->pc = 0x7F0AEE38u;
    // 7F0AEE38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEE3C:
    ctx->pc = 0x7F0AEE3Cu;
    // 7F0AEE3C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AEE40:
    ctx->pc = 0x7F0AEE40u;
    // 7F0AEE40: addi    r5, r5, 27499
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27499);

label_7F0AEE44:
    ctx->pc = 0x7F0AEE44u;
    // 7F0AEE44: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0AEE48:
    ctx->pc = 0x7F0AEE48u;
    // 7F0AEE48: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0AEE4Cu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0AEE4C:
    ctx->pc = 0x7F0AEE4Cu;
    ctx->downcount -= 3;
    // 7F0AEE4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AEE50:
    ctx->pc = 0x7F0AEE50u;
    // 7F0AEE50: stw     r0, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEE54:
    ctx->pc = 0x7F0AEE54u;
    // 7F0AEE54: b       0x7F0AEF28
    {
            goto label_7F0AEF28;
    }

label_7F0AEE58:
    ctx->pc = 0x7F0AEE58u;
    ctx->downcount -= 6;
    // 7F0AEE58: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F0AEE5C:
    ctx->pc = 0x7F0AEE5Cu;
    // 7F0AEE5C: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0AEE60:
    ctx->pc = 0x7F0AEE60u;
    // 7F0AEE60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEE64:
    ctx->pc = 0x7F0AEE64u;
    // 7F0AEE64: addi    r4, r4, 14772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14772);

label_7F0AEE68:
    ctx->pc = 0x7F0AEE68u;
    // 7F0AEE68: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0AEE6C:
    ctx->pc = 0x7F0AEE6Cu;
    // 7F0AEE6C: bl      0x7F04272C
    {
            ctx->lr = 0x7F0AEE70u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0AEE70:
    ctx->pc = 0x7F0AEE70u;
    ctx->downcount -= 28;
    // 7F0AEE70: lis     r3, 114
    ctx->gpr[3] = ((u32)(s32)(114) << 16);

label_7F0AEE74:
    ctx->pc = 0x7F0AEE74u;
    // 7F0AEE74: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0AEE78:
    ctx->pc = 0x7F0AEE78u;
    // 7F0AEE78: addi    r0, r3, 6899
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6899);

label_7F0AEE7C:
    ctx->pc = 0x7F0AEE7Cu;
    // 7F0AEE7C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AEE80:
    ctx->pc = 0x7F0AEE80u;
    // 7F0AEE80: stw     r0, 820(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEE84:
    ctx->pc = 0x7F0AEE84u;
    // 7F0AEE84: li      r9, 1937
    ctx->gpr[9] = (u32)(s32)(1937);

label_7F0AEE88:
    ctx->pc = 0x7F0AEE88u;
    // 7F0AEE88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AEE8C:
    ctx->pc = 0x7F0AEE8Cu;
    // 7F0AEE8C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0AEE90:
    ctx->pc = 0x7F0AEE90u;
    // 7F0AEE90: sth     r9, 1068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1068);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0AEE94:
    ctx->pc = 0x7F0AEE94u;
    // 7F0AEE94: li      r0, 1938
    ctx->gpr[0] = (u32)(s32)(1938);

label_7F0AEE98:
    ctx->pc = 0x7F0AEE98u;
    // 7F0AEE98: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F0AEE9C:
    ctx->pc = 0x7F0AEE9Cu;
    // 7F0AEE9C: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F0AEEA0:
    ctx->pc = 0x7F0AEEA0u;
    // 7F0AEEA0: sth     r0, 1070(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1070);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEEA4:
    ctx->pc = 0x7F0AEEA4u;
    // 7F0AEEA4: li      r0, 1939
    ctx->gpr[0] = (u32)(s32)(1939);

label_7F0AEEA8:
    ctx->pc = 0x7F0AEEA8u;
    // 7F0AEEA8: lis     r6, 246
    ctx->gpr[6] = ((u32)(s32)(246) << 16);

label_7F0AEEAC:
    ctx->pc = 0x7F0AEEACu;
    // 7F0AEEAC: lis     r5, 252
    ctx->gpr[5] = ((u32)(s32)(252) << 16);

label_7F0AEEB0:
    ctx->pc = 0x7F0AEEB0u;
    // 7F0AEEB0: sth     r0, 1072(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1072);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEEB4:
    ctx->pc = 0x7F0AEEB4u;
    // 7F0AEEB4: addi    r0, r6, 5933
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(5933);

label_7F0AEEB8:
    ctx->pc = 0x7F0AEEB8u;
    // 7F0AEEB8: lfs     f1, -5192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AEEB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AEEBC:
    ctx->pc = 0x7F0AEEBCu;
    // 7F0AEEBC: addi    r3, r5, -1681
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1681);

label_7F0AEEC0:
    ctx->pc = 0x7F0AEEC0u;
    // 7F0AEEC0: sth     r9, 1074(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1074);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0AEEC4:
    ctx->pc = 0x7F0AEEC4u;
    // 7F0AEEC4: addi    r4, r4, 10078
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10078);

label_7F0AEEC8:
    ctx->pc = 0x7F0AEEC8u;
    // 7F0AEEC8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEECC:
    ctx->pc = 0x7F0AEECCu;
    // 7F0AEECC: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F0AEED0:
    ctx->pc = 0x7F0AEED0u;
    // 7F0AEED0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEED4:
    ctx->pc = 0x7F0AEED4u;
    // 7F0AEED4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0AEED8:
    ctx->pc = 0x7F0AEED8u;
    // 7F0AEED8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0AEEDC:
    ctx->pc = 0x7F0AEEDCu;
    // 7F0AEEDC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F0AEEE0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F0AEEE0:
    ctx->pc = 0x7F0AEEE0u;
    ctx->downcount -= 7;
    // 7F0AEEE0: stw     r3, 1076(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1076);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AEEE4:
    ctx->pc = 0x7F0AEEE4u;
    // 7F0AEEE4: lis     r5, 96
    ctx->gpr[5] = ((u32)(s32)(96) << 16);

label_7F0AEEE8:
    ctx->pc = 0x7F0AEEE8u;
    // 7F0AEEE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEEEC:
    ctx->pc = 0x7F0AEEECu;
    // 7F0AEEEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AEEF0:
    ctx->pc = 0x7F0AEEF0u;
    // 7F0AEEF0: addi    r5, r5, 27631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27631);

label_7F0AEEF4:
    ctx->pc = 0x7F0AEEF4u;
    // 7F0AEEF4: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0AEEF8:
    ctx->pc = 0x7F0AEEF8u;
    // 7F0AEEF8: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0AEEFCu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0AEEFC:
    ctx->pc = 0x7F0AEEFCu;
    ctx->downcount -= 5;
    // 7F0AEEFC: lis     r4, 12
    ctx->gpr[4] = ((u32)(s32)(12) << 16);

label_7F0AEF00:
    ctx->pc = 0x7F0AEF00u;
    // 7F0AEF00: addi    r3, r29, 492
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(492);

label_7F0AEF04:
    ctx->pc = 0x7F0AEF04u;
    // 7F0AEF04: addi    r4, r4, -13076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13076);

label_7F0AEF08:
    ctx->pc = 0x7F0AEF08u;
    // 7F0AEF08: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0AEF0C:
    ctx->pc = 0x7F0AEF0Cu;
    // 7F0AEF0C: bl      0x7F04272C
    {
            ctx->lr = 0x7F0AEF10u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0AEF10:
    ctx->pc = 0x7F0AEF10u;
    ctx->downcount -= 3;
    // 7F0AEF10: addi    r3, r29, 492
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(492);

label_7F0AEF14:
    ctx->pc = 0x7F0AEF14u;
    // 7F0AEF14: addi    r4, r29, 692
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(692);

label_7F0AEF18:
    ctx->pc = 0x7F0AEF18u;
    // 7F0AEF18: bl      0x7F042B20
    {
            ctx->lr = 0x7F0AEF1Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0AEF1C:
    ctx->pc = 0x7F0AEF1Cu;
    ctx->downcount -= 3;
    // 7F0AEF1C: lwz     r3, 448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEF20:
    ctx->pc = 0x7F0AEF20u;
    // 7F0AEF20: lwz     r4, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEF24:
    ctx->pc = 0x7F0AEF24u;
    // 7F0AEF24: bl      0x7F3B0938
    {
            ctx->lr = 0x7F0AEF28u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F0AEF28:
    ctx->pc = 0x7F0AEF28u;
    ctx->downcount -= 3;
    // 7F0AEF28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEF2C:
    ctx->pc = 0x7F0AEF2Cu;
    // 7F0AEF2C: addi    r4, r29, 692
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(692);

label_7F0AEF30:
    ctx->pc = 0x7F0AEF30u;
    // 7F0AEF30: bl      0x7F042B20
    {
            ctx->lr = 0x7F0AEF34u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0AEF34:
    ctx->pc = 0x7F0AEF34u;
    ctx->downcount -= 8;
    // 7F0AEF34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AEF38:
    ctx->pc = 0x7F0AEF38u;
    // 7F0AEF38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AEF3C:
    ctx->pc = 0x7F0AEF3Cu;
    // 7F0AEF3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AEF40:
    ctx->pc = 0x7F0AEF40u;
    // 7F0AEF40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AEF44:
    ctx->pc = 0x7F0AEF44u;
    // 7F0AEF44: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AEF48:
    ctx->pc = 0x7F0AEF48u;
    // 7F0AEF48: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AEF4C:
    ctx->pc = 0x7F0AEF4Cu;
    // 7F0AEF4C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0AEF50:
    ctx->pc = 0x7F0AEF50u;
    // 7F0AEF50: bl      0x7F042C94
    {
            ctx->lr = 0x7F0AEF54u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0AEF54:
    ctx->pc = 0x7F0AEF54u;
    ctx->downcount -= 2;
    // 7F0AEF54: addi    r3, r29, 448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(448);

label_7F0AEF58:
    ctx->pc = 0x7F0AEF58u;
    // 7F0AEF58: bl      0x7F04291C
    {
            ctx->lr = 0x7F0AEF5Cu;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F0AEF5C:
    ctx->pc = 0x7F0AEF5Cu;
    ctx->downcount -= 3;
    // 7F0AEF5C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F0AEF60:
    ctx->pc = 0x7F0AEF60u;
    // 7F0AEF60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AEF64:
    ctx->pc = 0x7F0AEF64u;
    // 7F0AEF64: sth     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AEF68:
    ctx->pc = 0x7F0AEF68u;
    ctx->downcount -= 16;
    // 7F0AEF68: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AEF6C:
    ctx->pc = 0x7F0AEF6Cu;
    // 7F0AEF6C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEF70:
    ctx->pc = 0x7F0AEF70u;
    // 7F0AEF70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEF74:
    ctx->pc = 0x7F0AEF74u;
    // 7F0AEF74: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AEF78:
    ctx->pc = 0x7F0AEF78u;
    // 7F0AEF78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEF7C:
    ctx->pc = 0x7F0AEF7Cu;
    ctx->downcount -= 7;
    // 7F0AEF7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEF80:
    ctx->pc = 0x7F0AEF80u;
    // 7F0AEF80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEF84:
    ctx->pc = 0x7F0AEF84u;
    // 7F0AEF84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEF88:
    ctx->pc = 0x7F0AEF88u;
    // 7F0AEF88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AEF8C:
    ctx->pc = 0x7F0AEF8Cu;
    // 7F0AEF8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEF90:
    ctx->pc = 0x7F0AEF90u;
    // 7F0AEF90: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AEF94:
    ctx->pc = 0x7F0AEF94u;
    // 7F0AEF94: bl      0x7F023E10
    {
            ctx->lr = 0x7F0AEF98u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0AEF98:
    ctx->pc = 0x7F0AEF98u;
    ctx->downcount -= 2;
    // 7F0AEF98: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0AEF9C:
    ctx->pc = 0x7F0AEF9Cu;
    // 7F0AEF9C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0AEFA0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0AEFA0:
    ctx->pc = 0x7F0AEFA0u;
    ctx->downcount -= 3;
    // 7F0AEFA0: lwz     r3, 1076(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1076);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEFA4:
    ctx->pc = 0x7F0AEFA4u;
    // 7F0AEFA4: cmplwi  r3, 0x0000
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

label_7F0AEFA8:
    ctx->pc = 0x7F0AEFA8u;
    // 7F0AEFA8: bc    12, 2, 0x7F0AEFB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEFB0;
        }
    }

label_7F0AEFAC:
    ctx->pc = 0x7F0AEFACu;
    ctx->downcount -= 1;
    // 7F0AEFAC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0AEFB0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0AEFB0:
    ctx->pc = 0x7F0AEFB0u;
    ctx->downcount -= 3;
    // 7F0AEFB0: lwz     r4, 492(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AEFB4:
    ctx->pc = 0x7F0AEFB4u;
    // 7F0AEFB4: cmplwi  r4, 0x0000
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

label_7F0AEFB8:
    ctx->pc = 0x7F0AEFB8u;
    // 7F0AEFB8: bc    12, 2, 0x7F0AEFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AEFCC;
        }
    }

label_7F0AEFBC:
    ctx->pc = 0x7F0AEFBCu;
    ctx->downcount -= 2;
    // 7F0AEFBC: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AEFC0:
    ctx->pc = 0x7F0AEFC0u;
    // 7F0AEFC0: bl      0x7F3B0954
    {
            ctx->lr = 0x7F0AEFC4u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F0AEFC4:
    ctx->pc = 0x7F0AEFC4u;
    ctx->downcount -= 2;
    // 7F0AEFC4: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0AEFC8:
    ctx->pc = 0x7F0AEFC8u;
    // 7F0AEFC8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0AEFCCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0AEFCC:
    ctx->pc = 0x7F0AEFCCu;
    ctx->downcount -= 6;
    // 7F0AEFCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AEFD0:
    ctx->pc = 0x7F0AEFD0u;
    // 7F0AEFD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AEFD4:
    ctx->pc = 0x7F0AEFD4u;
    // 7F0AEFD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AEFD8:
    ctx->pc = 0x7F0AEFD8u;
    // 7F0AEFD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AEFDC:
    ctx->pc = 0x7F0AEFDCu;
    // 7F0AEFDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AEFE0:
    ctx->pc = 0x7F0AEFE0u;
    ctx->downcount -= 22;
    // 7F0AEFE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AEFE4:
    ctx->pc = 0x7F0AEFE4u;
    // 7F0AEFE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AEFE8:
    ctx->pc = 0x7F0AEFE8u;
    // 7F0AEFE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AEFEC:
    ctx->pc = 0x7F0AEFECu;
    // 7F0AEFEC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AEFF0:
    ctx->pc = 0x7F0AEFF0u;
    // 7F0AEFF0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AEFF4:
    ctx->pc = 0x7F0AEFF4u;
    // 7F0AEFF4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AEFF8:
    ctx->pc = 0x7F0AEFF8u;
    // 7F0AEFF8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AEFFC:
    ctx->pc = 0x7F0AEFFCu;
    // 7F0AEFFC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AF000:
    ctx->pc = 0x7F0AF000u;
    // 7F0AF000: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0AF004:
    ctx->pc = 0x7F0AF004u;
    // 7F0AF004: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0AF008:
    ctx->pc = 0x7F0AF008u;
    // 7F0AF008: li      r5, 1088
    ctx->gpr[5] = (u32)(s32)(1088);

label_7F0AF00C:
    ctx->pc = 0x7F0AF00Cu;
    // 7F0AF00C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0AF010u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0AF010:
    ctx->pc = 0x7F0AF010u;
    ctx->downcount -= 2;
    // 7F0AF010: or.   r31, r3, r3
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

label_7F0AF014:
    ctx->pc = 0x7F0AF014u;
    // 7F0AF014: bc    12, 2, 0x7F0AF060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF060;
        }
    }

label_7F0AF018:
    ctx->pc = 0x7F0AF018u;
    ctx->downcount -= 5;
    // 7F0AF018: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AF01C:
    ctx->pc = 0x7F0AF01Cu;
    // 7F0AF01C: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0AF020:
    ctx->pc = 0x7F0AF020u;
    // 7F0AF020: addi    r4, r4, -5196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5196);

label_7F0AF024:
    ctx->pc = 0x7F0AF024u;
    // 7F0AF024: addi    r5, r5, -4228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4228);

label_7F0AF028:
    ctx->pc = 0x7F0AF028u;
    // 7F0AF028: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0AF02Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0AF02C:
    ctx->pc = 0x7F0AF02Cu;
    ctx->downcount -= 7;
    // 7F0AF02C: stw     r28, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0AF030:
    ctx->pc = 0x7F0AF030u;
    // 7F0AF030: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F0AF034:
    ctx->pc = 0x7F0AF034u;
    // 7F0AF034: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF038:
    ctx->pc = 0x7F0AF038u;
    // 7F0AF038: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AF03C:
    ctx->pc = 0x7F0AF03Cu;
    // 7F0AF03C: stw     r29, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0AF040:
    ctx->pc = 0x7F0AF040u;
    // 7F0AF040: addi    r4, r4, 22419
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22419);

label_7F0AF044:
    ctx->pc = 0x7F0AF044u;
    // 7F0AF044: bl      0x7F0AED10
    {
            ctx->lr = 0x7F0AF048u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AED10u;
                return;
            }
            goto label_7F0AED10;
    }

label_7F0AF048:
    ctx->pc = 0x7F0AF048u;
    ctx->downcount -= 2;
    // 7F0AF048: cmpwi   r3, 0
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

label_7F0AF04C:
    ctx->pc = 0x7F0AF04Cu;
    // 7F0AF04C: bc    4, 0, 0x7F0AF060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF060;
        }
    }

label_7F0AF050:
    ctx->pc = 0x7F0AF050u;
    ctx->downcount -= 2;
    // 7F0AF050: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF054:
    ctx->pc = 0x7F0AF054u;
    // 7F0AF054: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0AF058u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0AF058:
    ctx->pc = 0x7F0AF058u;
    ctx->downcount -= 2;
    // 7F0AF058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AF05C:
    ctx->pc = 0x7F0AF05Cu;
    // 7F0AF05C: b       0x7F0AF064
    {
            goto label_7F0AF064;
    }

label_7F0AF060:
    ctx->pc = 0x7F0AF060u;
    ctx->downcount -= 1;
    // 7F0AF060: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF064:
    ctx->pc = 0x7F0AF064u;
    ctx->downcount -= 16;
    // 7F0AF064: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AF068:
    ctx->pc = 0x7F0AF068u;
    // 7F0AF068: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF06C:
    ctx->pc = 0x7F0AF06Cu;
    // 7F0AF06C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF070:
    ctx->pc = 0x7F0AF070u;
    // 7F0AF070: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AF074:
    ctx->pc = 0x7F0AF074u;
    // 7F0AF074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF078:
    ctx->pc = 0x7F0AF078u;
    ctx->downcount -= 34;
    // 7F0AF078: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF07C:
    ctx->pc = 0x7F0AF07Cu;
    // 7F0AF07C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF080:
    ctx->pc = 0x7F0AF080u;
    // 7F0AF080: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AF084:
    ctx->pc = 0x7F0AF084u;
    // 7F0AF084: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF088:
    ctx->pc = 0x7F0AF088u;
    // 7F0AF088: addi    r6, r4, -32360
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-32360);

label_7F0AF08C:
    ctx->pc = 0x7F0AF08Cu;
    // 7F0AF08C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF090:
    ctx->pc = 0x7F0AF090u;
    // 7F0AF090: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AF094:
    ctx->pc = 0x7F0AF094u;
    // 7F0AF094: stmw     r29, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AF098:
    ctx->pc = 0x7F0AF098u;
    // 7F0AF098: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF09C:
    ctx->pc = 0x7F0AF09Cu;
    // 7F0AF09C: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0AF0A0:
    ctx->pc = 0x7F0AF0A0u;
    // 7F0AF0A0: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0AF0A4:
    ctx->pc = 0x7F0AF0A4u;
    // 7F0AF0A4: lwz     r8, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0AF0A8:
    ctx->pc = 0x7F0AF0A8u;
    // 7F0AF0A8: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AF0AC:
    ctx->pc = 0x7F0AF0ACu;
    // 7F0AF0AC: lwz     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF0B0:
    ctx->pc = 0x7F0AF0B0u;
    // 7F0AF0B0: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AF0B4:
    ctx->pc = 0x7F0AF0B4u;
    // 7F0AF0B4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF0B8:
    ctx->pc = 0x7F0AF0B8u;
    // 7F0AF0B8: stw     r9, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0AF0BC:
    ctx->pc = 0x7F0AF0BCu;
    // 7F0AF0BC: stw     r8, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0AF0C0:
    ctx->pc = 0x7F0AF0C0u;
    // 7F0AF0C0: stw     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AF0C4:
    ctx->pc = 0x7F0AF0C4u;
    // 7F0AF0C4: stw     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF0C8:
    ctx->pc = 0x7F0AF0C8u;
    // 7F0AF0C8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF0CC:
    ctx->pc = 0x7F0AF0CCu;
    // 7F0AF0CC: stw     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF0D0:
    ctx->pc = 0x7F0AF0D0u;
    // 7F0AF0D0: lwz     r3, 1484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1484);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF0D4:
    ctx->pc = 0x7F0AF0D4u;
    // 7F0AF0D4: bl      0x7F0B82DC
    {
            ctx->lr = 0x7F0AF0D8u;
            ctx->pc = 0x7F0B82DCu;
            return;
    }

label_7F0AF0D8:
    ctx->pc = 0x7F0AF0D8u;
    ctx->downcount -= 7;
    // 7F0AF0D8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AF0DC:
    ctx->pc = 0x7F0AF0DCu;
    // 7F0AF0DC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AF0E0:
    ctx->pc = 0x7F0AF0E0u;
    // 7F0AF0E0: addi    r31, r3, 28408
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0AF0E4:
    ctx->pc = 0x7F0AF0E4u;
    // 7F0AF0E4: lwz     r30, 21932(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(21932);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0AF0E8:
    ctx->pc = 0x7F0AF0E8u;
    // 7F0AF0E8: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF0EC:
    ctx->pc = 0x7F0AF0ECu;
    // 7F0AF0EC: rlwinm. r0, r5, 0, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFF0000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AF0F0:
    ctx->pc = 0x7F0AF0F0u;
    // 7F0AF0F0: bc    12, 2, 0x7F0AF18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF18C;
        }
    }

label_7F0AF0F4:
    ctx->pc = 0x7F0AF0F4u;
    ctx->downcount -= 2;
    // 7F0AF0F4: rlwinm. r0, r5, 0, 15, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00010000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AF0F8:
    ctx->pc = 0x7F0AF0F8u;
    // 7F0AF0F8: bc    12, 2, 0x7F0AF108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF108;
        }
    }

label_7F0AF0FC:
    ctx->pc = 0x7F0AF0FCu;
    ctx->downcount -= 3;
    // 7F0AF0FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF100:
    ctx->pc = 0x7F0AF100u;
    // 7F0AF100: sth     r0, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF104:
    ctx->pc = 0x7F0AF104u;
    // 7F0AF104: b       0x7F0AF18C
    {
            goto label_7F0AF18C;
    }

label_7F0AF108:
    ctx->pc = 0x7F0AF108u;
    ctx->downcount -= 2;
    // 7F0AF108: rlwinm. r0, r5, 0, 14, 14
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

label_7F0AF10C:
    ctx->pc = 0x7F0AF10Cu;
    // 7F0AF10C: bc    12, 2, 0x7F0AF120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF120;
        }
    }

label_7F0AF110:
    ctx->pc = 0x7F0AF110u;
    ctx->downcount -= 4;
    // 7F0AF110: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F0AF114:
    ctx->pc = 0x7F0AF114u;
    // 7F0AF114: sth     r0, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF118:
    ctx->pc = 0x7F0AF118u;
    // 7F0AF118: stw     r0, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF11C:
    ctx->pc = 0x7F0AF11Cu;
    // 7F0AF11C: b       0x7F0AF18C
    {
            goto label_7F0AF18C;
    }

label_7F0AF120:
    ctx->pc = 0x7F0AF120u;
    ctx->downcount -= 2;
    // 7F0AF120: rlwinm. r0, r5, 0, 13, 13
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

label_7F0AF124:
    ctx->pc = 0x7F0AF124u;
    // 7F0AF124: bc    12, 2, 0x7F0AF18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF18C;
        }
    }

label_7F0AF128:
    ctx->pc = 0x7F0AF128u;
    ctx->downcount -= 5;
    // 7F0AF128: lha     r3, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF12C:
    ctx->pc = 0x7F0AF12Cu;
    // 7F0AF12C: addi    r0, r3, -1024
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1024);

label_7F0AF130:
    ctx->pc = 0x7F0AF130u;
    // 7F0AF130: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F0AF134:
    ctx->pc = 0x7F0AF134u;
    // 7F0AF134: cmpwi   r0, 100
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

label_7F0AF138:
    ctx->pc = 0x7F0AF138u;
    // 7F0AF138: bc    4, 1, 0x7F0AF15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF15C;
        }
    }

label_7F0AF13C:
    ctx->pc = 0x7F0AF13Cu;
    ctx->downcount -= 2;
    // 7F0AF13C: cmpwi   r0, 2048
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

label_7F0AF140:
    ctx->pc = 0x7F0AF140u;
    // 7F0AF140: bc    4, 0, 0x7F0AF15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF15C;
        }
    }

label_7F0AF144:
    ctx->pc = 0x7F0AF144u;
    ctx->downcount -= 6;
    // 7F0AF144: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF148:
    ctx->pc = 0x7F0AF148u;
    // 7F0AF148: li      r0, -128
    ctx->gpr[0] = (u32)(s32)(-128);

label_7F0AF14C:
    ctx->pc = 0x7F0AF14Cu;
    // 7F0AF14C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF150:
    ctx->pc = 0x7F0AF150u;
    // 7F0AF150: ori     r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] | 0x8000u;

label_7F0AF154:
    ctx->pc = 0x7F0AF154u;
    // 7F0AF154: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF158:
    ctx->pc = 0x7F0AF158u;
    // 7F0AF158: b       0x7F0AF180
    {
            goto label_7F0AF180;
    }

label_7F0AF15C:
    ctx->pc = 0x7F0AF15Cu;
    ctx->downcount -= 2;
    // 7F0AF15C: cmpwi   r0, 2048
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

label_7F0AF160:
    ctx->pc = 0x7F0AF160u;
    // 7F0AF160: bc    12, 0, 0x7F0AF180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF180;
        }
    }

label_7F0AF164:
    ctx->pc = 0x7F0AF164u;
    ctx->downcount -= 2;
    // 7F0AF164: cmpwi   r0, 4000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AF168:
    ctx->pc = 0x7F0AF168u;
    // 7F0AF168: bc    4, 0, 0x7F0AF180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF180;
        }
    }

label_7F0AF16C:
    ctx->pc = 0x7F0AF16Cu;
    ctx->downcount -= 5;
    // 7F0AF16C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF170:
    ctx->pc = 0x7F0AF170u;
    // 7F0AF170: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F0AF174:
    ctx->pc = 0x7F0AF174u;
    // 7F0AF174: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF178:
    ctx->pc = 0x7F0AF178u;
    // 7F0AF178: ori     r0, r3, 0x2000
    ctx->gpr[0] = ctx->gpr[3] | 0x2000u;

label_7F0AF17C:
    ctx->pc = 0x7F0AF17Cu;
    // 7F0AF17C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF180:
    ctx->pc = 0x7F0AF180u;
    ctx->downcount -= 3;
    // 7F0AF180: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF184:
    ctx->pc = 0x7F0AF184u;
    // 7F0AF184: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F0AF188:
    ctx->pc = 0x7F0AF188u;
    // 7F0AF188: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF18C:
    ctx->pc = 0x7F0AF18Cu;
    ctx->downcount -= 11;
    // 7F0AF18C: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF190:
    ctx->pc = 0x7F0AF190u;
    // 7F0AF190: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_7F0AF194:
    ctx->pc = 0x7F0AF194u;
    // 7F0AF194: lha     r6, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF198:
    ctx->pc = 0x7F0AF198u;
    // 7F0AF198: addi    r4, r29, 1104
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1104);

label_7F0AF19C:
    ctx->pc = 0x7F0AF19Cu;
    // 7F0AF19C: lha     r0, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF1A0:
    ctx->pc = 0x7F0AF1A0u;
    // 7F0AF1A0: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0AF1A4:
    ctx->pc = 0x7F0AF1A4u;
    // 7F0AF1A4: sth     r0, 1098(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1098);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF1A8:
    ctx->pc = 0x7F0AF1A8u;
    // 7F0AF1A8: lha     r0, 1098(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1098);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF1AC:
    ctx->pc = 0x7F0AF1ACu;
    // 7F0AF1AC: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F0AF1B0:
    ctx->pc = 0x7F0AF1B0u;
    // 7F0AF1B0: sth     r0, 1098(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1098);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF1B4:
    ctx->pc = 0x7F0AF1B4u;
    // 7F0AF1B4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AF1B8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AF1B8:
    ctx->pc = 0x7F0AF1B8u;
    ctx->downcount -= 3;
    // 7F0AF1B8: addi    r3, r29, 1104
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1104);

label_7F0AF1BC:
    ctx->pc = 0x7F0AF1BCu;
    // 7F0AF1BC: addi    r4, r1, 156
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(156);

label_7F0AF1C0:
    ctx->pc = 0x7F0AF1C0u;
    // 7F0AF1C0: bl      0x7F091790
    {
            ctx->lr = 0x7F0AF1C4u;
            ctx->pc = 0x7F091790u;
            return;
    }

label_7F0AF1C4:
    ctx->pc = 0x7F0AF1C4u;
    ctx->downcount -= 10;
    // 7F0AF1C4: lfs     f2, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AF1C8:
    ctx->pc = 0x7F0AF1C8u;
    // 7F0AF1C8: addi    r3, r1, 156
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(156);

label_7F0AF1CC:
    ctx->pc = 0x7F0AF1CCu;
    // 7F0AF1CC: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AF1D0:
    ctx->pc = 0x7F0AF1D0u;
    // 7F0AF1D0: addi    r5, r29, 1120
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(1120);

label_7F0AF1D4:
    ctx->pc = 0x7F0AF1D4u;
    // 7F0AF1D4: lfs     f0, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AF1D8:
    ctx->pc = 0x7F0AF1D8u;
    // 7F0AF1D8: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0AF1DC:
    ctx->pc = 0x7F0AF1DCu;
    // 7F0AF1DC: stfs     f1, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AF1E0:
    ctx->pc = 0x7F0AF1E0u;
    // 7F0AF1E0: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF1E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AF1E4:
    ctx->pc = 0x7F0AF1E4u;
    // 7F0AF1E4: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF1E8:
    ctx->pc = 0x7F0AF1E8u;
    // 7F0AF1E8: bl      0x80025A80
    {
            ctx->lr = 0x7F0AF1ECu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F0AF1EC:
    ctx->pc = 0x7F0AF1ECu;
    ctx->downcount -= 2;
    // 7F0AF1EC: addi    r3, r29, 1052
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1052);

label_7F0AF1F0:
    ctx->pc = 0x7F0AF1F0u;
    // 7F0AF1F0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0AF1F4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0AF1F4:
    ctx->pc = 0x7F0AF1F4u;
    ctx->downcount -= 5;
    // 7F0AF1F4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AF1F8:
    ctx->pc = 0x7F0AF1F8u;
    // 7F0AF1F8: lwz     r5, 1052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1052);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF1FC:
    ctx->pc = 0x7F0AF1FCu;
    // 7F0AF1FC: addi    r4, r29, 1116
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1116);

label_7F0AF200:
    ctx->pc = 0x7F0AF200u;
    // 7F0AF200: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AF204:
    loop_7F0AF204(ctx);
    if (ctx->pc == 0x7F0AF218u) goto label_7F0AF218;
    return;
label_7F0AF208:
    ctx->pc = 0x7F0AF208u;
    // 7F0AF208: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0AF20C:
    ctx->pc = 0x7F0AF20Cu;
    // 7F0AF20C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF210:
    ctx->pc = 0x7F0AF210u;
    // 7F0AF210: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0AF214:
    // 7F0AF214: bc    16, 0, 0x7F0AF204
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF204u;
                return;
            }
            goto label_7F0AF204;
        }
    }

label_7F0AF218:
    ctx->pc = 0x7F0AF218u;
    ctx->downcount -= 3;
    // 7F0AF218: lwz     r0, 1468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF21C:
    ctx->pc = 0x7F0AF21Cu;
    // 7F0AF21C: cmpwi   r0, 0
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

label_7F0AF220:
    ctx->pc = 0x7F0AF220u;
    // 7F0AF220: bc    12, 2, 0x7F0AF23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF23C;
        }
    }

label_7F0AF224:
    ctx->pc = 0x7F0AF224u;
    ctx->downcount -= 3;
    // 7F0AF224: lwz     r0, 1484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF228:
    ctx->pc = 0x7F0AF228u;
    // 7F0AF228: cmpwi   r0, 0
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

label_7F0AF22C:
    ctx->pc = 0x7F0AF22Cu;
    // 7F0AF22C: bc    4, 2, 0x7F0AF23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF23C;
        }
    }

label_7F0AF230:
    ctx->pc = 0x7F0AF230u;
    ctx->downcount -= 3;
    // 7F0AF230: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF234:
    ctx->pc = 0x7F0AF234u;
    // 7F0AF234: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF238:
    ctx->pc = 0x7F0AF238u;
    // 7F0AF238: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF23C:
    ctx->pc = 0x7F0AF23Cu;
    ctx->downcount -= 13;
    // 7F0AF23C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF240:
    ctx->pc = 0x7F0AF240u;
    // 7F0AF240: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AF244:
    ctx->pc = 0x7F0AF244u;
    // 7F0AF244: lwz     r0, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF248:
    ctx->pc = 0x7F0AF248u;
    // 7F0AF248: mulli   r4, r4, 15
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)15);

label_7F0AF24C:
    ctx->pc = 0x7F0AF24Cu;
    // 7F0AF24C: srawi r4, r4, 7
    {
        u32 sh = 7u;
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

label_7F0AF250:
    ctx->pc = 0x7F0AF250u;
    // 7F0AF250: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0AF254:
    ctx->pc = 0x7F0AF254u;
    // 7F0AF254: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0AF258:
    ctx->pc = 0x7F0AF258u;
    // 7F0AF258: stw     r0, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF25C:
    ctx->pc = 0x7F0AF25Cu;
    // 7F0AF25C: lwz     r0, 21932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF260:
    ctx->pc = 0x7F0AF260u;
    // 7F0AF260: cmpwi   r0, 1
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

label_7F0AF264:
    ctx->pc = 0x7F0AF264u;
    // 7F0AF264: bc    4, 2, 0x7F0AF2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF2D4;
        }
    }

label_7F0AF268:
    ctx->pc = 0x7F0AF268u;
    ctx->downcount -= 6;
    // 7F0AF268: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AF26C:
    ctx->pc = 0x7F0AF26Cu;
    // 7F0AF26C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0AF270:
    ctx->pc = 0x7F0AF270u;
    // 7F0AF270: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF274:
    ctx->pc = 0x7F0AF274u;
    // 7F0AF274: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF278:
    ctx->pc = 0x7F0AF278u;
    // 7F0AF278: rlwinm. r0, r0, 0, 25, 25
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

label_7F0AF27C:
    ctx->pc = 0x7F0AF27Cu;
    // 7F0AF27C: bc    4, 2, 0x7F0AF28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF28C;
        }
    }

label_7F0AF280:
    ctx->pc = 0x7F0AF280u;
    ctx->downcount -= 3;
    // 7F0AF280: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF284:
    ctx->pc = 0x7F0AF284u;
    // 7F0AF284: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0AF288:
    ctx->pc = 0x7F0AF288u;
    // 7F0AF288: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF28C:
    ctx->pc = 0x7F0AF28Cu;
    ctx->downcount -= 12;
    // 7F0AF28C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF290:
    ctx->pc = 0x7F0AF290u;
    // 7F0AF290: lwz     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF294:
    ctx->pc = 0x7F0AF294u;
    // 7F0AF294: mulli   r3, r3, 15
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)15);

label_7F0AF298:
    ctx->pc = 0x7F0AF298u;
    // 7F0AF298: srawi r3, r3, 7
    {
        u32 sh = 7u;
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

label_7F0AF29C:
    ctx->pc = 0x7F0AF29Cu;
    // 7F0AF29C: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0AF2A0:
    ctx->pc = 0x7F0AF2A0u;
    // 7F0AF2A0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0AF2A4:
    ctx->pc = 0x7F0AF2A4u;
    // 7F0AF2A4: stw     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF2A8:
    ctx->pc = 0x7F0AF2A8u;
    // 7F0AF2A8: lwz     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF2AC:
    ctx->pc = 0x7F0AF2ACu;
    // 7F0AF2AC: cmpwi   r0, 140
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

label_7F0AF2B0:
    ctx->pc = 0x7F0AF2B0u;
    // 7F0AF2B0: bc    4, 1, 0x7F0AF2C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF2C0;
        }
    }

label_7F0AF2B4:
    ctx->pc = 0x7F0AF2B4u;
    ctx->downcount -= 3;
    // 7F0AF2B4: li      r0, 140
    ctx->gpr[0] = (u32)(s32)(140);

label_7F0AF2B8:
    ctx->pc = 0x7F0AF2B8u;
    // 7F0AF2B8: stw     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF2BC:
    ctx->pc = 0x7F0AF2BCu;
    // 7F0AF2BC: b       0x7F0AF2DC
    {
            goto label_7F0AF2DC;
    }

label_7F0AF2C0:
    ctx->pc = 0x7F0AF2C0u;
    ctx->downcount -= 2;
    // 7F0AF2C0: cmpwi   r0, -200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AF2C4:
    ctx->pc = 0x7F0AF2C4u;
    // 7F0AF2C4: bc    4, 0, 0x7F0AF2DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF2DC;
        }
    }

label_7F0AF2C8:
    ctx->pc = 0x7F0AF2C8u;
    ctx->downcount -= 3;
    // 7F0AF2C8: li      r0, -200
    ctx->gpr[0] = (u32)(s32)(-200);

label_7F0AF2CC:
    ctx->pc = 0x7F0AF2CCu;
    // 7F0AF2CC: stw     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF2D0:
    ctx->pc = 0x7F0AF2D0u;
    // 7F0AF2D0: b       0x7F0AF2DC
    {
            goto label_7F0AF2DC;
    }

label_7F0AF2D4:
    ctx->pc = 0x7F0AF2D4u;
    ctx->downcount -= 2;
    // 7F0AF2D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF2D8:
    ctx->pc = 0x7F0AF2D8u;
    // 7F0AF2D8: stw     r0, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF2DC:
    ctx->pc = 0x7F0AF2DCu;
    ctx->downcount -= 3;
    // 7F0AF2DC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF2E0:
    ctx->pc = 0x7F0AF2E0u;
    // 7F0AF2E0: cmpwi   r0, 0
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

label_7F0AF2E4:
    ctx->pc = 0x7F0AF2E4u;
    // 7F0AF2E4: bc    4, 0, 0x7F0AF2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF2F8;
        }
    }

label_7F0AF2E8:
    ctx->pc = 0x7F0AF2E8u;
    ctx->downcount -= 4;
    // 7F0AF2E8: lwz     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF2EC:
    ctx->pc = 0x7F0AF2ECu;
    // 7F0AF2EC: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F0AF2F0:
    ctx->pc = 0x7F0AF2F0u;
    // 7F0AF2F0: stw     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF2F4:
    ctx->pc = 0x7F0AF2F4u;
    // 7F0AF2F4: b       0x7F0AF308
    {
            goto label_7F0AF308;
    }

label_7F0AF2F8:
    ctx->pc = 0x7F0AF2F8u;
    ctx->downcount -= 1;
    // 7F0AF2F8: bc    4, 1, 0x7F0AF308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF308;
        }
    }

label_7F0AF2FC:
    ctx->pc = 0x7F0AF2FCu;
    ctx->downcount -= 3;
    // 7F0AF2FC: lwz     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF300:
    ctx->pc = 0x7F0AF300u;
    // 7F0AF300: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0AF304:
    ctx->pc = 0x7F0AF304u;
    // 7F0AF304: stw     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF308:
    ctx->pc = 0x7F0AF308u;
    ctx->downcount -= 3;
    // 7F0AF308: lwz     r0, 1468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF30C:
    ctx->pc = 0x7F0AF30Cu;
    // 7F0AF30C: cmpwi   r0, 0
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

label_7F0AF310:
    ctx->pc = 0x7F0AF310u;
    // 7F0AF310: bc    12, 2, 0x7F0AF344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF344;
        }
    }

label_7F0AF314:
    ctx->pc = 0x7F0AF314u;
    ctx->downcount -= 3;
    // 7F0AF314: lwz     r0, 1484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF318:
    ctx->pc = 0x7F0AF318u;
    // 7F0AF318: cmpwi   r0, 0
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

label_7F0AF31C:
    ctx->pc = 0x7F0AF31Cu;
    // 7F0AF31C: bc    4, 2, 0x7F0AF344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF344;
        }
    }

label_7F0AF320:
    ctx->pc = 0x7F0AF320u;
    ctx->downcount -= 3;
    // 7F0AF320: lha     r3, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF324:
    ctx->pc = 0x7F0AF324u;
    // 7F0AF324: lwz     r4, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF328:
    ctx->pc = 0x7F0AF328u;
    // 7F0AF328: bl      0x7F3C9798
    {
            ctx->lr = 0x7F0AF32Cu;
            ctx->pc = 0x7F3C9798u;
            return;
    }

label_7F0AF32C:
    ctx->pc = 0x7F0AF32Cu;
    ctx->downcount -= 4;
    // 7F0AF32C: sth     r3, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AF330:
    ctx->pc = 0x7F0AF330u;
    // 7F0AF330: lha     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF334:
    ctx->pc = 0x7F0AF334u;
    // 7F0AF334: lwz     r4, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF338:
    ctx->pc = 0x7F0AF338u;
    // 7F0AF338: bl      0x7F3C9798
    {
            ctx->lr = 0x7F0AF33Cu;
            ctx->pc = 0x7F3C9798u;
            return;
    }

label_7F0AF33C:
    ctx->pc = 0x7F0AF33Cu;
    ctx->downcount -= 2;
    // 7F0AF33C: sth     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AF340:
    ctx->pc = 0x7F0AF340u;
    // 7F0AF340: b       0x7F0AF364
    {
            goto label_7F0AF364;
    }

label_7F0AF344:
    ctx->pc = 0x7F0AF344u;
    ctx->downcount -= 3;
    // 7F0AF344: lha     r3, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF348:
    ctx->pc = 0x7F0AF348u;
    // 7F0AF348: lwz     r4, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF34C:
    ctx->pc = 0x7F0AF34Cu;
    // 7F0AF34C: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0AF350u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0AF350:
    ctx->pc = 0x7F0AF350u;
    ctx->downcount -= 4;
    // 7F0AF350: sth     r3, 1106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AF354:
    ctx->pc = 0x7F0AF354u;
    // 7F0AF354: lha     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF358:
    ctx->pc = 0x7F0AF358u;
    // 7F0AF358: lwz     r4, 1192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF35C:
    ctx->pc = 0x7F0AF35Cu;
    // 7F0AF35C: bl      0x7F3C9844
    {
            ctx->lr = 0x7F0AF360u;
            ctx->pc = 0x7F3C9844u;
            return;
    }

label_7F0AF360:
    ctx->pc = 0x7F0AF360u;
    ctx->downcount -= 1;
    // 7F0AF360: sth     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AF364:
    ctx->pc = 0x7F0AF364u;
    ctx->downcount -= 3;
    // 7F0AF364: lwz     r3, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF368:
    ctx->pc = 0x7F0AF368u;
    // 7F0AF368: cmpwi   r3, 0
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

label_7F0AF36C:
    ctx->pc = 0x7F0AF36Cu;
    // 7F0AF36C: bc    12, 2, 0x7F0AF378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF378;
        }
    }

label_7F0AF370:
    ctx->pc = 0x7F0AF370u;
    ctx->downcount -= 2;
    // 7F0AF370: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0AF374:
    ctx->pc = 0x7F0AF374u;
    // 7F0AF374: stw     r0, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF378:
    ctx->pc = 0x7F0AF378u;
    ctx->downcount -= 3;
    // 7F0AF378: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF37C:
    ctx->pc = 0x7F0AF37Cu;
    // 7F0AF37C: rlwinm. r0, r0, 0, 24, 24
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

label_7F0AF380:
    ctx->pc = 0x7F0AF380u;
    // 7F0AF380: bc    12, 2, 0x7F0AF3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF3A4;
        }
    }

label_7F0AF384:
    ctx->pc = 0x7F0AF384u;
    ctx->downcount -= 3;
    // 7F0AF384: lwz     r0, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF388:
    ctx->pc = 0x7F0AF388u;
    // 7F0AF388: cmpwi   r0, 0
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

label_7F0AF38C:
    ctx->pc = 0x7F0AF38Cu;
    // 7F0AF38C: bc    4, 2, 0x7F0AF3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF3A4;
        }
    }

label_7F0AF390:
    ctx->pc = 0x7F0AF390u;
    ctx->downcount -= 5;
    // 7F0AF390: lwz     r3, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF394:
    ctx->pc = 0x7F0AF394u;
    // 7F0AF394: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F0AF398:
    ctx->pc = 0x7F0AF398u;
    // 7F0AF398: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0AF39C:
    ctx->pc = 0x7F0AF39Cu;
    // 7F0AF39C: stw     r3, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF3A0:
    ctx->pc = 0x7F0AF3A0u;
    // 7F0AF3A0: stw     r0, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF3A4:
    ctx->pc = 0x7F0AF3A4u;
    ctx->downcount -= 19;
    // 7F0AF3A4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF3A8:
    ctx->pc = 0x7F0AF3A8u;
    // 7F0AF3A8: lfs     f0, 1168(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AF3AC:
    ctx->pc = 0x7F0AF3ACu;
    // 7F0AF3AC: addi    r7, r3, -31892
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-31892);

label_7F0AF3B0:
    ctx->pc = 0x7F0AF3B0u;
    // 7F0AF3B0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AF3B4:
    ctx->pc = 0x7F0AF3B4u;
    // 7F0AF3B4: stfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AF3B8:
    ctx->pc = 0x7F0AF3B8u;
    // 7F0AF3B8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF3BC:
    ctx->pc = 0x7F0AF3BCu;
    // 7F0AF3BC: addi    r3, r3, -31868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31868);

label_7F0AF3C0:
    ctx->pc = 0x7F0AF3C0u;
    // 7F0AF3C0: addi    r6, r4, -31876
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-31876);

label_7F0AF3C4:
    ctx->pc = 0x7F0AF3C4u;
    // 7F0AF3C4: lfs     f0, 1172(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3C4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AF3C8:
    ctx->pc = 0x7F0AF3C8u;
    // 7F0AF3C8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AF3CC:
    ctx->pc = 0x7F0AF3CCu;
    // 7F0AF3CC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F0AF3D0:
    ctx->pc = 0x7F0AF3D0u;
    // 7F0AF3D0: addi    r4, r29, 1116
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1116);

label_7F0AF3D4:
    ctx->pc = 0x7F0AF3D4u;
    // 7F0AF3D4: stfs     f0, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3D4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AF3D8:
    ctx->pc = 0x7F0AF3D8u;
    // 7F0AF3D8: lfs     f0, 1176(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3D8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AF3DC:
    ctx->pc = 0x7F0AF3DCu;
    // 7F0AF3DC: stfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF3DCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AF3E0:
    ctx->pc = 0x7F0AF3E0u;
    // 7F0AF3E0: lha     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF3E4:
    ctx->pc = 0x7F0AF3E4u;
    // 7F0AF3E4: sth     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AF3E8:
    ctx->pc = 0x7F0AF3E8u;
    // 7F0AF3E8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AF3EC:
    loop_7F0AF3EC(ctx);
    if (ctx->pc == 0x7F0AF400u) goto label_7F0AF400;
    return;
label_7F0AF3F0:
    ctx->pc = 0x7F0AF3F0u;
    // 7F0AF3F0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0AF3F4:
    ctx->pc = 0x7F0AF3F4u;
    // 7F0AF3F4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF3F8:
    ctx->pc = 0x7F0AF3F8u;
    // 7F0AF3F8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0AF3FC:
    // 7F0AF3FC: bc    16, 0, 0x7F0AF3EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF3ECu;
                return;
            }
            goto label_7F0AF3EC;
        }
    }

label_7F0AF400:
    ctx->pc = 0x7F0AF400u;
    ctx->downcount -= 7;
    // 7F0AF400: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AF404:
    ctx->pc = 0x7F0AF404u;
    // 7F0AF404: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF408:
    ctx->pc = 0x7F0AF408u;
    // 7F0AF408: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AF40C:
    ctx->pc = 0x7F0AF40Cu;
    // 7F0AF40C: cmpwi   r30, 0
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

label_7F0AF410:
    ctx->pc = 0x7F0AF410u;
    // 7F0AF410: sth     r0, 30018(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30018);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF414:
    ctx->pc = 0x7F0AF414u;
    // 7F0AF414: sth     r0, 30016(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30016);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF418:
    ctx->pc = 0x7F0AF418u;
    // 7F0AF418: bc    4, 2, 0x7F0AF430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF430;
        }
    }

label_7F0AF41C:
    ctx->pc = 0x7F0AF41Cu;
    ctx->downcount -= 5;
    // 7F0AF41C: lwz     r3, 1096(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1096);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF420:
    ctx->pc = 0x7F0AF420u;
    // 7F0AF420: lwz     r0, 1100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF424:
    ctx->pc = 0x7F0AF424u;
    // 7F0AF424: stw     r3, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF428:
    ctx->pc = 0x7F0AF428u;
    // 7F0AF428: stw     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF42C:
    ctx->pc = 0x7F0AF42Cu;
    // 7F0AF42C: b       0x7F0AF498
    {
            goto label_7F0AF498;
    }

label_7F0AF430:
    ctx->pc = 0x7F0AF430u;
    ctx->downcount -= 5;
    // 7F0AF430: lha     r0, 1098(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1098);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF434:
    ctx->pc = 0x7F0AF434u;
    // 7F0AF434: sth     r0, 98(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF438:
    ctx->pc = 0x7F0AF438u;
    // 7F0AF438: lwz     r0, 1468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF43C:
    ctx->pc = 0x7F0AF43Cu;
    // 7F0AF43C: cmpwi   r0, 0
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

label_7F0AF440:
    ctx->pc = 0x7F0AF440u;
    // 7F0AF440: bc    12, 2, 0x7F0AF498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF498;
        }
    }

label_7F0AF444:
    ctx->pc = 0x7F0AF444u;
    ctx->downcount -= 3;
    // 7F0AF444: lwz     r0, 1484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF448:
    ctx->pc = 0x7F0AF448u;
    // 7F0AF448: cmpwi   r0, 0
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

label_7F0AF44C:
    ctx->pc = 0x7F0AF44Cu;
    // 7F0AF44C: bc    4, 2, 0x7F0AF498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF498;
        }
    }

label_7F0AF450:
    ctx->pc = 0x7F0AF450u;
    ctx->downcount -= 7;
    // 7F0AF450: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AF454:
    ctx->pc = 0x7F0AF454u;
    // 7F0AF454: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0AF458:
    ctx->pc = 0x7F0AF458u;
    // 7F0AF458: lwz     r3, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF45C:
    ctx->pc = 0x7F0AF45Cu;
    // 7F0AF45C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF460:
    ctx->pc = 0x7F0AF460u;
    // 7F0AF460: lfs     f1, 4368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF460u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AF464:
    ctx->pc = 0x7F0AF464u;
    // 7F0AF464: lfs     f2, 4352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF464u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AF468:
    ctx->pc = 0x7F0AF468u;
    // 7F0AF468: bl      0x7F0172FC
    {
            ctx->lr = 0x7F0AF46Cu;
            ctx->pc = 0x7F0172FCu;
            return;
    }

label_7F0AF46C:
    ctx->pc = 0x7F0AF46Cu;
    ctx->downcount -= 11;
    // 7F0AF46C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AF470:
    ctx->pc = 0x7F0AF470u;
    // 7F0AF470: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0AF474:
    ctx->pc = 0x7F0AF474u;
    // 7F0AF474: lfs     f0, -5184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF474u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AF478:
    ctx->pc = 0x7F0AF478u;
    // 7F0AF478: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AF47C:
    ctx->pc = 0x7F0AF47Cu;
    // 7F0AF47C: lhau     r0, 30016(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(30016);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F0AF480:
    ctx->pc = 0x7F0AF480u;
    // 7F0AF480: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AF480u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0AF484:
    ctx->pc = 0x7F0AF484u;
    // 7F0AF484: sth     r0, 30018(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30018);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF488:
    ctx->pc = 0x7F0AF488u;
    // 7F0AF488: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AF488u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AF48C:
    ctx->pc = 0x7F0AF48Cu;
    // 7F0AF48C: stfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AF48Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AF490:
    ctx->pc = 0x7F0AF490u;
    // 7F0AF490: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF494:
    ctx->pc = 0x7F0AF494u;
    // 7F0AF494: sth     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF498:
    ctx->pc = 0x7F0AF498u;
    ctx->downcount -= 13;
    // 7F0AF498: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AF49C:
    ctx->pc = 0x7F0AF49Cu;
    // 7F0AF49C: addi    r3, r29, 1044
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1044);

label_7F0AF4A0:
    ctx->pc = 0x7F0AF4A0u;
    // 7F0AF4A0: addi    r8, r4, -32360
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-32360);

label_7F0AF4A4:
    ctx->pc = 0x7F0AF4A4u;
    // 7F0AF4A4: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F0AF4A8:
    ctx->pc = 0x7F0AF4A8u;
    // 7F0AF4A8: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AF4AC:
    ctx->pc = 0x7F0AF4ACu;
    // 7F0AF4AC: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AF4B0:
    ctx->pc = 0x7F0AF4B0u;
    // 7F0AF4B0: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF4B4:
    ctx->pc = 0x7F0AF4B4u;
    // 7F0AF4B4: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF4B8:
    ctx->pc = 0x7F0AF4B8u;
    // 7F0AF4B8: stw     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AF4BC:
    ctx->pc = 0x7F0AF4BCu;
    // 7F0AF4BC: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AF4C0:
    ctx->pc = 0x7F0AF4C0u;
    // 7F0AF4C0: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AF4C4:
    ctx->pc = 0x7F0AF4C4u;
    // 7F0AF4C4: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF4C8:
    ctx->pc = 0x7F0AF4C8u;
    // 7F0AF4C8: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0AF4CCu;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0AF4CC:
    ctx->pc = 0x7F0AF4CCu;
    ctx->downcount -= 16;
    // 7F0AF4CC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0AF4D0:
    ctx->pc = 0x7F0AF4D0u;
    // 7F0AF4D0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AF4D4:
    ctx->pc = 0x7F0AF4D4u;
    // 7F0AF4D4: addi    r5, r4, -5664
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5664);

label_7F0AF4D8:
    ctx->pc = 0x7F0AF4D8u;
    // 7F0AF4D8: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AF4DC:
    ctx->pc = 0x7F0AF4DCu;
    // 7F0AF4DC: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F0AF4E0:
    ctx->pc = 0x7F0AF4E0u;
    // 7F0AF4E0: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0AF4E4:
    ctx->pc = 0x7F0AF4E4u;
    // 7F0AF4E4: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF4E8:
    ctx->pc = 0x7F0AF4E8u;
    // 7F0AF4E8: lwz     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF4EC:
    ctx->pc = 0x7F0AF4ECu;
    // 7F0AF4EC: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AF4F0:
    ctx->pc = 0x7F0AF4F0u;
    // 7F0AF4F0: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF4F4:
    ctx->pc = 0x7F0AF4F4u;
    // 7F0AF4F4: lha     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF4F8:
    ctx->pc = 0x7F0AF4F8u;
    // 7F0AF4F8: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF4FC:
    ctx->pc = 0x7F0AF4FCu;
    // 7F0AF4FC: lha     r5, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF500:
    ctx->pc = 0x7F0AF500u;
    // 7F0AF500: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0AF504:
    ctx->pc = 0x7F0AF504u;
    // 7F0AF504: sth     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AF508:
    ctx->pc = 0x7F0AF508u;
    // 7F0AF508: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AF50Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AF50C:
    ctx->pc = 0x7F0AF50Cu;
    ctx->downcount -= 5;
    // 7F0AF50C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF510:
    ctx->pc = 0x7F0AF510u;
    // 7F0AF510: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F0AF514:
    ctx->pc = 0x7F0AF514u;
    // 7F0AF514: addi    r3, r3, -32344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32344);

label_7F0AF518:
    ctx->pc = 0x7F0AF518u;
    // 7F0AF518: addi    r5, r1, 60
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(60);

label_7F0AF51C:
    ctx->pc = 0x7F0AF51Cu;
    // 7F0AF51C: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0AF520u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0AF520:
    ctx->pc = 0x7F0AF520u;
    ctx->downcount -= 4;
    // 7F0AF520: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F0AF524:
    ctx->pc = 0x7F0AF524u;
    // 7F0AF524: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AF528:
    ctx->pc = 0x7F0AF528u;
    // 7F0AF528: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF52C:
    ctx->pc = 0x7F0AF52Cu;
    // 7F0AF52C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F0AF530u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F0AF530:
    ctx->pc = 0x7F0AF530u;
    ctx->downcount -= 4;
    // 7F0AF530: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F0AF534:
    ctx->pc = 0x7F0AF534u;
    // 7F0AF534: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_7F0AF538:
    ctx->pc = 0x7F0AF538u;
    // 7F0AF538: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF53C:
    ctx->pc = 0x7F0AF53Cu;
    // 7F0AF53C: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0AF540u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0AF540:
    ctx->pc = 0x7F0AF540u;
    ctx->downcount -= 3;
    // 7F0AF540: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F0AF544:
    ctx->pc = 0x7F0AF544u;
    // 7F0AF544: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F0AF548:
    ctx->pc = 0x7F0AF548u;
    // 7F0AF548: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0AF54Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0AF54C:
    ctx->pc = 0x7F0AF54Cu;
    ctx->downcount -= 2;
    // 7F0AF54C: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_7F0AF550:
    ctx->pc = 0x7F0AF550u;
    // 7F0AF550: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F0AF554u;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F0AF554:
    ctx->pc = 0x7F0AF554u;
    ctx->downcount -= 5;
    // 7F0AF554: lwz     r5, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF558:
    ctx->pc = 0x7F0AF558u;
    // 7F0AF558: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_7F0AF55C:
    ctx->pc = 0x7F0AF55Cu;
    // 7F0AF55C: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF560:
    ctx->pc = 0x7F0AF560u;
    // 7F0AF560: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F0AF564:
    ctx->pc = 0x7F0AF564u;
    // 7F0AF564: bl      0x80025A80
    {
            ctx->lr = 0x7F0AF568u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F0AF568:
    ctx->pc = 0x7F0AF568u;
    ctx->downcount -= 3;
    // 7F0AF568: lwz     r3, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF56C:
    ctx->pc = 0x7F0AF56Cu;
    // 7F0AF56C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0AF570:
    ctx->pc = 0x7F0AF570u;
    // 7F0AF570: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AF574u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AF574:
    ctx->pc = 0x7F0AF574u;
    ctx->downcount -= 5;
    // 7F0AF574: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AF578:
    ctx->pc = 0x7F0AF578u;
    // 7F0AF578: lwz     r5, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF57C:
    ctx->pc = 0x7F0AF57Cu;
    // 7F0AF57C: lwz     r4, -5664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5664);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AF580:
    ctx->pc = 0x7F0AF580u;
    // 7F0AF580: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0AF584:
    ctx->pc = 0x7F0AF584u;
    // 7F0AF584: bl      0x7F091A64
    {
            ctx->lr = 0x7F0AF588u;
            ctx->pc = 0x7F091A64u;
            return;
    }

label_7F0AF588:
    ctx->pc = 0x7F0AF588u;
    ctx->downcount -= 5;
    // 7F0AF588: lwz     r6, 228(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(228);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AF58C:
    ctx->pc = 0x7F0AF58Cu;
    // 7F0AF58C: addi    r3, r29, 1052
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1052);

label_7F0AF590:
    ctx->pc = 0x7F0AF590u;
    // 7F0AF590: addi    r4, r29, 1096
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1096);

label_7F0AF594:
    ctx->pc = 0x7F0AF594u;
    // 7F0AF594: addi    r5, r29, 1104
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(1104);

label_7F0AF598:
    ctx->pc = 0x7F0AF598u;
    // 7F0AF598: bl      0x7F0B8128
    {
            ctx->lr = 0x7F0AF59Cu;
            ctx->pc = 0x7F0B8128u;
            return;
    }

label_7F0AF59C:
    ctx->pc = 0x7F0AF59Cu;
    ctx->downcount -= 3;
    // 7F0AF59C: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF5A0:
    ctx->pc = 0x7F0AF5A0u;
    // 7F0AF5A0: rlwinm. r0, r0, 0, 30, 30
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

label_7F0AF5A4:
    ctx->pc = 0x7F0AF5A4u;
    // 7F0AF5A4: bc    12, 2, 0x7F0AF5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF5B4;
        }
    }

label_7F0AF5A8:
    ctx->pc = 0x7F0AF5A8u;
    ctx->downcount -= 3;
    // 7F0AF5A8: lwz     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF5AC:
    ctx->pc = 0x7F0AF5ACu;
    // 7F0AF5AC: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F0AF5B0:
    ctx->pc = 0x7F0AF5B0u;
    // 7F0AF5B0: stw     r0, 1448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF5B4:
    ctx->pc = 0x7F0AF5B4u;
    ctx->downcount -= 16;
    // 7F0AF5B4: lmw     r29, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AF5B8:
    ctx->pc = 0x7F0AF5B8u;
    // 7F0AF5B8: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF5BC:
    ctx->pc = 0x7F0AF5BCu;
    // 7F0AF5BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF5C0:
    ctx->pc = 0x7F0AF5C0u;
    // 7F0AF5C0: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_7F0AF5C4:
    ctx->pc = 0x7F0AF5C4u;
    // 7F0AF5C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF5C8:
    ctx->pc = 0x7F0AF5C8u;
    ctx->downcount -= 6;
    // 7F0AF5C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF5CC:
    ctx->pc = 0x7F0AF5CCu;
    // 7F0AF5CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF5D0:
    ctx->pc = 0x7F0AF5D0u;
    // 7F0AF5D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF5D4:
    ctx->pc = 0x7F0AF5D4u;
    // 7F0AF5D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AF5D8:
    ctx->pc = 0x7F0AF5D8u;
    // 7F0AF5D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF5DC:
    ctx->pc = 0x7F0AF5DCu;
    // 7F0AF5DC: bl      0x7F0AF078
    {
            ctx->lr = 0x7F0AF5E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF078u;
                return;
            }
            goto label_7F0AF078;
    }

label_7F0AF5E0:
    ctx->pc = 0x7F0AF5E0u;
    ctx->downcount -= 2;
    // 7F0AF5E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF5E4:
    ctx->pc = 0x7F0AF5E4u;
    // 7F0AF5E4: bl      0x7F0AFAB8
    {
            ctx->lr = 0x7F0AF5E8u;
            goto label_7F0AFAB8;
    }

label_7F0AF5E8:
    ctx->pc = 0x7F0AF5E8u;
    ctx->downcount -= 6;
    // 7F0AF5E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF5EC:
    ctx->pc = 0x7F0AF5ECu;
    // 7F0AF5EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF5F0:
    ctx->pc = 0x7F0AF5F0u;
    // 7F0AF5F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF5F4:
    ctx->pc = 0x7F0AF5F4u;
    // 7F0AF5F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AF5F8:
    ctx->pc = 0x7F0AF5F8u;
    // 7F0AF5F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF5FC:
    ctx->pc = 0x7F0AF5FCu;
    ctx->downcount -= 1;
    // 7F0AF5FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF600:
    ctx->pc = 0x7F0AF600u;
    ctx->downcount -= 10;
    // 7F0AF600: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF604:
    ctx->pc = 0x7F0AF604u;
    // 7F0AF604: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF608:
    ctx->pc = 0x7F0AF608u;
    // 7F0AF608: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F0AF60C:
    ctx->pc = 0x7F0AF60Cu;
    // 7F0AF60C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AF610:
    ctx->pc = 0x7F0AF610u;
    // 7F0AF610: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF614:
    ctx->pc = 0x7F0AF614u;
    // 7F0AF614: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AF618:
    ctx->pc = 0x7F0AF618u;
    // 7F0AF618: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AF61C:
    ctx->pc = 0x7F0AF61Cu;
    // 7F0AF61C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF620:
    ctx->pc = 0x7F0AF620u;
    // 7F0AF620: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AF624:
    ctx->pc = 0x7F0AF624u;
    // 7F0AF624: bl      0x7F012018
    {
            ctx->lr = 0x7F0AF628u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F0AF628:
    ctx->pc = 0x7F0AF628u;
    ctx->downcount -= 5;
    // 7F0AF628: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AF62C:
    ctx->pc = 0x7F0AF62Cu;
    // 7F0AF62C: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F0AF630:
    ctx->pc = 0x7F0AF630u;
    // 7F0AF630: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F0AF634:
    ctx->pc = 0x7F0AF634u;
    // 7F0AF634: or.   r0, r4, r0
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

label_7F0AF638:
    ctx->pc = 0x7F0AF638u;
    // 7F0AF638: bc    12, 2, 0x7F0AF678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF678;
        }
    }

label_7F0AF63C:
    ctx->pc = 0x7F0AF63Cu;
    ctx->downcount -= 5;
    // 7F0AF63C: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AF640:
    ctx->pc = 0x7F0AF640u;
    // 7F0AF640: stw     r5, 1508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1508);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AF644:
    ctx->pc = 0x7F0AF644u;
    // 7F0AF644: addi    r4, r3, -1816
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1816);

label_7F0AF648:
    ctx->pc = 0x7F0AF648u;
    // 7F0AF648: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF64C:
    ctx->pc = 0x7F0AF64Cu;
    // 7F0AF64C: bl      0x7F0AFB70
    {
            ctx->lr = 0x7F0AF650u;
            goto label_7F0AFB70;
    }

label_7F0AF650:
    ctx->pc = 0x7F0AF650u;
    ctx->downcount -= 4;
    // 7F0AF650: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF654:
    ctx->pc = 0x7F0AF654u;
    // 7F0AF654: li      r4, 513
    ctx->gpr[4] = (u32)(s32)(513);

label_7F0AF658:
    ctx->pc = 0x7F0AF658u;
    // 7F0AF658: addi    r3, r3, 23924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23924);

label_7F0AF65C:
    ctx->pc = 0x7F0AF65Cu;
    // 7F0AF65C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0AF660u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0AF660:
    ctx->pc = 0x7F0AF660u;
    ctx->downcount -= 4;
    // 7F0AF660: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF664:
    ctx->pc = 0x7F0AF664u;
    // 7F0AF664: li      r4, 514
    ctx->gpr[4] = (u32)(s32)(514);

label_7F0AF668:
    ctx->pc = 0x7F0AF668u;
    // 7F0AF668: addi    r3, r3, 23928
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23928);

label_7F0AF66C:
    ctx->pc = 0x7F0AF66Cu;
    // 7F0AF66C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0AF670u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0AF670:
    ctx->pc = 0x7F0AF670u;
    ctx->downcount -= 2;
    // 7F0AF670: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AF674:
    ctx->pc = 0x7F0AF674u;
    // 7F0AF674: b       0x7F0AF67C
    {
            goto label_7F0AF67C;
    }

label_7F0AF678:
    ctx->pc = 0x7F0AF678u;
    ctx->downcount -= 1;
    // 7F0AF678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AF67C:
    ctx->pc = 0x7F0AF67Cu;
    ctx->downcount -= 6;
    // 7F0AF67C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF680:
    ctx->pc = 0x7F0AF680u;
    // 7F0AF680: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF684:
    ctx->pc = 0x7F0AF684u;
    // 7F0AF684: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF688:
    ctx->pc = 0x7F0AF688u;
    // 7F0AF688: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AF68C:
    ctx->pc = 0x7F0AF68Cu;
    // 7F0AF68C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF690:
    ctx->pc = 0x7F0AF690u;
    ctx->downcount -= 6;
    // 7F0AF690: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF694:
    ctx->pc = 0x7F0AF694u;
    // 7F0AF694: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF698:
    ctx->pc = 0x7F0AF698u;
    // 7F0AF698: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF69C:
    ctx->pc = 0x7F0AF69Cu;
    // 7F0AF69C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AF6A0:
    ctx->pc = 0x7F0AF6A0u;
    // 7F0AF6A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF6A4:
    ctx->pc = 0x7F0AF6A4u;
    // 7F0AF6A4: bl      0x7F0AF600
    {
            ctx->lr = 0x7F0AF6A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF600u;
                return;
            }
            goto label_7F0AF600;
    }

label_7F0AF6A8:
    ctx->pc = 0x7F0AF6A8u;
    ctx->downcount -= 2;
    // 7F0AF6A8: cmpwi   r3, 0
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

label_7F0AF6AC:
    ctx->pc = 0x7F0AF6ACu;
    // 7F0AF6AC: bc    12, 2, 0x7F0AF6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF6E4;
        }
    }

label_7F0AF6B0:
    ctx->pc = 0x7F0AF6B0u;
    ctx->downcount -= 8;
    // 7F0AF6B0: lwz     r5, 1204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1204);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AF6B4:
    ctx->pc = 0x7F0AF6B4u;
    // 7F0AF6B4: li      r4, -18
    ctx->gpr[4] = (u32)(s32)(-18);

label_7F0AF6B8:
    ctx->pc = 0x7F0AF6B8u;
    // 7F0AF6B8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AF6BC:
    ctx->pc = 0x7F0AF6BCu;
    // 7F0AF6BC: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F0AF6C0:
    ctx->pc = 0x7F0AF6C0u;
    // 7F0AF6C0: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AF6C4:
    ctx->pc = 0x7F0AF6C4u;
    // 7F0AF6C4: stw     r4, 1204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AF6C8:
    ctx->pc = 0x7F0AF6C8u;
    // 7F0AF6C8: stw     r0, 1472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF6CC:
    ctx->pc = 0x7F0AF6CCu;
    // 7F0AF6CC: bl      0x7F02A56C
    {
            ctx->lr = 0x7F0AF6D0u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F0AF6D0:
    ctx->pc = 0x7F0AF6D0u;
    ctx->downcount -= 5;
    // 7F0AF6D0: lwz     r0, 1188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF6D4:
    ctx->pc = 0x7F0AF6D4u;
    // 7F0AF6D4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0AF6D8:
    ctx->pc = 0x7F0AF6D8u;
    // 7F0AF6D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AF6DC:
    ctx->pc = 0x7F0AF6DCu;
    // 7F0AF6DC: stw     r0, 1188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF6E0:
    ctx->pc = 0x7F0AF6E0u;
    // 7F0AF6E0: b       0x7F0AF6F8
    {
            goto label_7F0AF6F8;
    }

label_7F0AF6E4:
    ctx->pc = 0x7F0AF6E4u;
    ctx->downcount -= 5;
    // 7F0AF6E4: lwz     r3, 1472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF6E8:
    ctx->pc = 0x7F0AF6E8u;
    // 7F0AF6E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF6EC:
    ctx->pc = 0x7F0AF6ECu;
    // 7F0AF6EC: subfic  r3, r3, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0AF6F0:
    ctx->pc = 0x7F0AF6F0u;
    // 7F0AF6F0: subfe   r3, r3, r3
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0AF6F4:
    ctx->pc = 0x7F0AF6F4u;
    // 7F0AF6F4: andc   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F0AF6F8:
    ctx->pc = 0x7F0AF6F8u;
    ctx->downcount -= 6;
    // 7F0AF6F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF6FC:
    ctx->pc = 0x7F0AF6FCu;
    // 7F0AF6FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF700:
    ctx->pc = 0x7F0AF700u;
    // 7F0AF700: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF704:
    ctx->pc = 0x7F0AF704u;
    // 7F0AF704: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AF708:
    ctx->pc = 0x7F0AF708u;
    // 7F0AF708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF70C:
    ctx->pc = 0x7F0AF70Cu;
    ctx->downcount -= 9;
    // 7F0AF70C: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF710:
    ctx->pc = 0x7F0AF710u;
    // 7F0AF710: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF714:
    ctx->pc = 0x7F0AF714u;
    // 7F0AF714: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0AF718:
    ctx->pc = 0x7F0AF718u;
    // 7F0AF718: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF71C:
    ctx->pc = 0x7F0AF71Cu;
    // 7F0AF71C: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AF720:
    ctx->pc = 0x7F0AF720u;
    // 7F0AF720: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF724:
    ctx->pc = 0x7F0AF724u;
    // 7F0AF724: addi    r3, r4, -32400
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32400);

label_7F0AF728:
    ctx->pc = 0x7F0AF728u;
    // 7F0AF728: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AF72C:
    ctx->pc = 0x7F0AF72Cu;
    // 7F0AF72C: bl      0x7F091790
    {
            ctx->lr = 0x7F0AF730u;
            ctx->pc = 0x7F091790u;
            return;
    }

label_7F0AF730:
    ctx->pc = 0x7F0AF730u;
    ctx->downcount -= 4;
    // 7F0AF730: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AF734:
    ctx->pc = 0x7F0AF734u;
    // 7F0AF734: addi    r4, r31, 1120
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0AF738:
    ctx->pc = 0x7F0AF738u;
    // 7F0AF738: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF73C:
    ctx->pc = 0x7F0AF73Cu;
    // 7F0AF73C: bl      0x80025A80
    {
            ctx->lr = 0x7F0AF740u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F0AF740:
    ctx->pc = 0x7F0AF740u;
    ctx->downcount -= 5;
    // 7F0AF740: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AF744:
    ctx->pc = 0x7F0AF744u;
    // 7F0AF744: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F0AF748:
    ctx->pc = 0x7F0AF748u;
    // 7F0AF748: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F0AF74C:
    ctx->pc = 0x7F0AF74Cu;
    // 7F0AF74C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AF750:
    loop_7F0AF750(ctx);
    if (ctx->pc == 0x7F0AF764u) goto label_7F0AF764;
    return;
label_7F0AF754:
    ctx->pc = 0x7F0AF754u;
    // 7F0AF754: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0AF758:
    ctx->pc = 0x7F0AF758u;
    // 7F0AF758: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF75C:
    ctx->pc = 0x7F0AF75Cu;
    // 7F0AF75C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0AF760:
    // 7F0AF760: bc    16, 0, 0x7F0AF750
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF750u;
                return;
            }
            goto label_7F0AF750;
        }
    }

label_7F0AF764:
    ctx->pc = 0x7F0AF764u;
    ctx->downcount -= 5;
    // 7F0AF764: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F0AF768:
    ctx->pc = 0x7F0AF768u;
    // 7F0AF768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AF76C:
    ctx->pc = 0x7F0AF76Cu;
    // 7F0AF76C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AF770:
    ctx->pc = 0x7F0AF770u;
    // 7F0AF770: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AF774:
    ctx->pc = 0x7F0AF774u;
    // 7F0AF774: bl      0x7F012018
    {
            ctx->lr = 0x7F0AF778u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F0AF778:
    ctx->pc = 0x7F0AF778u;
    ctx->downcount -= 5;
    // 7F0AF778: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AF77C:
    ctx->pc = 0x7F0AF77Cu;
    // 7F0AF77C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AF780:
    ctx->pc = 0x7F0AF780u;
    // 7F0AF780: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AF784:
    ctx->pc = 0x7F0AF784u;
    // 7F0AF784: or.   r0, r4, r0
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

label_7F0AF788:
    ctx->pc = 0x7F0AF788u;
    // 7F0AF788: bc    12, 2, 0x7F0AF7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF7A8;
        }
    }

label_7F0AF78C:
    ctx->pc = 0x7F0AF78Cu;
    ctx->downcount -= 6;
    // 7F0AF78C: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_7F0AF790:
    ctx->pc = 0x7F0AF790u;
    // 7F0AF790: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0AF794:
    ctx->pc = 0x7F0AF794u;
    // 7F0AF794: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AF798:
    ctx->pc = 0x7F0AF798u;
    // 7F0AF798: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AF79C:
    ctx->pc = 0x7F0AF79Cu;
    // 7F0AF79C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AF7A0:
    ctx->pc = 0x7F0AF7A0u;
    // 7F0AF7A0: bl      0x7F011848
    {
            ctx->lr = 0x7F0AF7A4u;
            ctx->pc = 0x7F011848u;
            return;
    }

label_7F0AF7A4:
    ctx->pc = 0x7F0AF7A4u;
    ctx->downcount -= 1;
    // 7F0AF7A4: b       0x7F0AF7B8
    {
            goto label_7F0AF7B8;
    }

label_7F0AF7A8:
    ctx->pc = 0x7F0AF7A8u;
    ctx->downcount -= 4;
    // 7F0AF7A8: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F0AF7AC:
    ctx->pc = 0x7F0AF7ACu;
    // 7F0AF7AC: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_7F0AF7B0:
    ctx->pc = 0x7F0AF7B0u;
    // 7F0AF7B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AF7B4:
    ctx->pc = 0x7F0AF7B4u;
    // 7F0AF7B4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AF7B8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AF7B8:
    ctx->pc = 0x7F0AF7B8u;
    ctx->downcount -= 2;
    // 7F0AF7B8: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AF7BC:
    ctx->pc = 0x7F0AF7BCu;
    // 7F0AF7BC: bl      0x7F260B40
    {
            ctx->lr = 0x7F0AF7C0u;
            ctx->pc = 0x7F260B40u;
            return;
    }

label_7F0AF7C0:
    ctx->pc = 0x7F0AF7C0u;
    ctx->downcount -= 2;
    // 7F0AF7C0: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AF7C4:
    ctx->pc = 0x7F0AF7C4u;
    // 7F0AF7C4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AF7C8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AF7C8:
    ctx->pc = 0x7F0AF7C8u;
    ctx->downcount -= 5;
    // 7F0AF7C8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF7CC:
    ctx->pc = 0x7F0AF7CCu;
    // 7F0AF7CC: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F0AF7D0:
    ctx->pc = 0x7F0AF7D0u;
    // 7F0AF7D0: addi    r3, r3, -32376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32376);

label_7F0AF7D4:
    ctx->pc = 0x7F0AF7D4u;
    // 7F0AF7D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AF7D8:
    ctx->pc = 0x7F0AF7D8u;
    // 7F0AF7D8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0AF7DCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0AF7DC:
    ctx->pc = 0x7F0AF7DCu;
    ctx->downcount -= 3;
    // 7F0AF7DC: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AF7E0:
    ctx->pc = 0x7F0AF7E0u;
    // 7F0AF7E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AF7E4:
    ctx->pc = 0x7F0AF7E4u;
    // 7F0AF7E4: bl      0x7F26E954
    {
            ctx->lr = 0x7F0AF7E8u;
            ctx->pc = 0x7F26E954u;
            return;
    }

label_7F0AF7E8:
    ctx->pc = 0x7F0AF7E8u;
    ctx->downcount -= 2;
    // 7F0AF7E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AF7EC:
    ctx->pc = 0x7F0AF7ECu;
    // 7F0AF7EC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AF7F0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AF7F0:
    ctx->pc = 0x7F0AF7F0u;
    ctx->downcount -= 5;
    // 7F0AF7F0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AF7F4:
    ctx->pc = 0x7F0AF7F4u;
    // 7F0AF7F4: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F0AF7F8:
    ctx->pc = 0x7F0AF7F8u;
    // 7F0AF7F8: addi    r3, r3, -32392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32392);

label_7F0AF7FC:
    ctx->pc = 0x7F0AF7FCu;
    // 7F0AF7FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AF800:
    ctx->pc = 0x7F0AF800u;
    // 7F0AF800: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0AF804u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0AF804:
    ctx->pc = 0x7F0AF804u;
    ctx->downcount -= 9;
    // 7F0AF804: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AF808:
    ctx->pc = 0x7F0AF808u;
    // 7F0AF808: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AF80C:
    ctx->pc = 0x7F0AF80Cu;
    // 7F0AF80C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0AF810:
    ctx->pc = 0x7F0AF810u;
    // 7F0AF810: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F0AF814:
    ctx->pc = 0x7F0AF814u;
    // 7F0AF814: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F0AF818:
    ctx->pc = 0x7F0AF818u;
    // 7F0AF818: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F0AF81C:
    ctx->pc = 0x7F0AF81Cu;
    // 7F0AF81C: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F0AF820:
    ctx->pc = 0x7F0AF820u;
    // 7F0AF820: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F0AF824:
    ctx->pc = 0x7F0AF824u;
    // 7F0AF824: bl      0x7F27727C
    {
            ctx->lr = 0x7F0AF828u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F0AF828:
    ctx->pc = 0x7F0AF828u;
    ctx->downcount -= 6;
    // 7F0AF828: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF82C:
    ctx->pc = 0x7F0AF82Cu;
    // 7F0AF82C: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF830:
    ctx->pc = 0x7F0AF830u;
    // 7F0AF830: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF834:
    ctx->pc = 0x7F0AF834u;
    // 7F0AF834: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F0AF838:
    ctx->pc = 0x7F0AF838u;
    // 7F0AF838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF83C:
    ctx->pc = 0x7F0AF83Cu;
    ctx->downcount -= 18;
    // 7F0AF83C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF840:
    ctx->pc = 0x7F0AF840u;
    // 7F0AF840: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF844:
    ctx->pc = 0x7F0AF844u;
    // 7F0AF844: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF848:
    ctx->pc = 0x7F0AF848u;
    // 7F0AF848: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AF84C:
    ctx->pc = 0x7F0AF84Cu;
    // 7F0AF84C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF850:
    ctx->pc = 0x7F0AF850u;
    // 7F0AF850: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AF854:
    ctx->pc = 0x7F0AF854u;
    // 7F0AF854: lwz     r31, 1448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1448);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF858:
    ctx->pc = 0x7F0AF858u;
    // 7F0AF858: bl      0x7F0AF690
    {
            ctx->lr = 0x7F0AF85Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF690u;
                return;
            }
            goto label_7F0AF690;
    }

label_7F0AF85C:
    ctx->pc = 0x7F0AF85Cu;
    ctx->downcount -= 2;
    // 7F0AF85C: cmpwi   r3, 0
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

label_7F0AF860:
    ctx->pc = 0x7F0AF860u;
    // 7F0AF860: bc    4, 2, 0x7F0AF8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF8D4;
        }
    }

label_7F0AF864:
    ctx->pc = 0x7F0AF864u;
    ctx->downcount -= 2;
    // 7F0AF864: rlwinm. r0, r31, 0, 31, 31
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

label_7F0AF868:
    ctx->pc = 0x7F0AF868u;
    // 7F0AF868: bc    12, 2, 0x7F0AF874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF874;
        }
    }

label_7F0AF86C:
    ctx->pc = 0x7F0AF86Cu;
    ctx->downcount -= 2;
    // 7F0AF86C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AF870:
    ctx->pc = 0x7F0AF870u;
    // 7F0AF870: bl      0x7F0AF70C
    {
            ctx->lr = 0x7F0AF874u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF70Cu;
                return;
            }
            goto label_7F0AF70C;
    }

label_7F0AF874:
    ctx->pc = 0x7F0AF874u;
    ctx->downcount -= 2;
    // 7F0AF874: cmpwi   r30, 0
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

label_7F0AF878:
    ctx->pc = 0x7F0AF878u;
    // 7F0AF878: bc    4, 2, 0x7F0AF88C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF88C;
        }
    }

label_7F0AF87C:
    ctx->pc = 0x7F0AF87Cu;
    ctx->downcount -= 4;
    // 7F0AF87C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AF880:
    ctx->pc = 0x7F0AF880u;
    // 7F0AF880: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AF884:
    ctx->pc = 0x7F0AF884u;
    // 7F0AF884: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF888:
    ctx->pc = 0x7F0AF888u;
    // 7F0AF888: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF88Cu;
            goto label_7F0AFB88;
    }

label_7F0AF88C:
    ctx->pc = 0x7F0AF88Cu;
    ctx->downcount -= 2;
    // 7F0AF88C: rlwinm. r0, r31, 0, 30, 30
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

label_7F0AF890:
    ctx->pc = 0x7F0AF890u;
    // 7F0AF890: bc    12, 2, 0x7F0AF8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF8A8;
        }
    }

label_7F0AF894:
    ctx->pc = 0x7F0AF894u;
    ctx->downcount -= 4;
    // 7F0AF894: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AF898:
    ctx->pc = 0x7F0AF898u;
    // 7F0AF898: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AF89C:
    ctx->pc = 0x7F0AF89Cu;
    // 7F0AF89C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF8A0:
    ctx->pc = 0x7F0AF8A0u;
    // 7F0AF8A0: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF8A4u;
            goto label_7F0AFB88;
    }

label_7F0AF8A4:
    ctx->pc = 0x7F0AF8A4u;
    ctx->downcount -= 1;
    // 7F0AF8A4: b       0x7F0AF8D4
    {
            goto label_7F0AF8D4;
    }

label_7F0AF8A8:
    ctx->pc = 0x7F0AF8A8u;
    ctx->downcount -= 2;
    // 7F0AF8A8: rlwinm. r0, r31, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AF8AC:
    ctx->pc = 0x7F0AF8ACu;
    // 7F0AF8AC: bc    12, 2, 0x7F0AF8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF8C4;
        }
    }

label_7F0AF8B0:
    ctx->pc = 0x7F0AF8B0u;
    ctx->downcount -= 4;
    // 7F0AF8B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AF8B4:
    ctx->pc = 0x7F0AF8B4u;
    // 7F0AF8B4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AF8B8:
    ctx->pc = 0x7F0AF8B8u;
    // 7F0AF8B8: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF8BC:
    ctx->pc = 0x7F0AF8BCu;
    // 7F0AF8BC: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF8C0u;
            goto label_7F0AFB88;
    }

label_7F0AF8C0:
    ctx->pc = 0x7F0AF8C0u;
    ctx->downcount -= 1;
    // 7F0AF8C0: b       0x7F0AF8D4
    {
            goto label_7F0AF8D4;
    }

label_7F0AF8C4:
    ctx->pc = 0x7F0AF8C4u;
    ctx->downcount -= 4;
    // 7F0AF8C4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AF8C8:
    ctx->pc = 0x7F0AF8C8u;
    // 7F0AF8C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AF8CC:
    ctx->pc = 0x7F0AF8CCu;
    // 7F0AF8CC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF8D0:
    ctx->pc = 0x7F0AF8D0u;
    // 7F0AF8D0: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF8D4u;
            goto label_7F0AFB88;
    }

label_7F0AF8D4:
    ctx->pc = 0x7F0AF8D4u;
    ctx->downcount -= 16;
    // 7F0AF8D4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AF8D8:
    ctx->pc = 0x7F0AF8D8u;
    // 7F0AF8D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF8DC:
    ctx->pc = 0x7F0AF8DCu;
    // 7F0AF8DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF8E0:
    ctx->pc = 0x7F0AF8E0u;
    // 7F0AF8E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AF8E4:
    ctx->pc = 0x7F0AF8E4u;
    // 7F0AF8E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AF8E8:
    ctx->pc = 0x7F0AF8E8u;
    ctx->downcount -= 9;
    // 7F0AF8E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AF8EC:
    ctx->pc = 0x7F0AF8ECu;
    // 7F0AF8EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AF8F0:
    ctx->pc = 0x7F0AF8F0u;
    // 7F0AF8F0: cmpwi   r4, 0
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

label_7F0AF8F4:
    ctx->pc = 0x7F0AF8F4u;
    // 7F0AF8F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF8F8:
    ctx->pc = 0x7F0AF8F8u;
    // 7F0AF8F8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0AF8FC:
    ctx->pc = 0x7F0AF8FCu;
    // 7F0AF8FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AF900:
    ctx->pc = 0x7F0AF900u;
    // 7F0AF900: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AF904:
    ctx->pc = 0x7F0AF904u;
    // 7F0AF904: stw     r0, 1472(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF908:
    ctx->pc = 0x7F0AF908u;
    // 7F0AF908: bc    4, 2, 0x7F0AF988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF988;
        }
    }

label_7F0AF90C:
    ctx->pc = 0x7F0AF90Cu;
    ctx->downcount -= 5;
    // 7F0AF90C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AF910:
    ctx->pc = 0x7F0AF910u;
    // 7F0AF910: stw     r0, 1468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF914:
    ctx->pc = 0x7F0AF914u;
    // 7F0AF914: lwz     r0, 1484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF918:
    ctx->pc = 0x7F0AF918u;
    // 7F0AF918: cmpwi   r0, 1
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

label_7F0AF91C:
    ctx->pc = 0x7F0AF91Cu;
    // 7F0AF91C: bc    4, 2, 0x7F0AF930
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF930;
        }
    }

label_7F0AF920:
    ctx->pc = 0x7F0AF920u;
    ctx->downcount -= 3;
    // 7F0AF920: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AF924:
    ctx->pc = 0x7F0AF924u;
    // 7F0AF924: addi    r4, r4, -1536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1536);

label_7F0AF928:
    ctx->pc = 0x7F0AF928u;
    // 7F0AF928: bl      0x7F0AFB70
    {
            ctx->lr = 0x7F0AF92Cu;
            goto label_7F0AFB70;
    }

label_7F0AF92C:
    ctx->pc = 0x7F0AF92Cu;
    ctx->downcount -= 1;
    // 7F0AF92C: b       0x7F0AF9EC
    {
            goto label_7F0AF9EC;
    }

label_7F0AF930:
    ctx->pc = 0x7F0AF930u;
    ctx->downcount -= 3;
    // 7F0AF930: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AF934:
    ctx->pc = 0x7F0AF934u;
    // 7F0AF934: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF938:
    ctx->pc = 0x7F0AF938u;
    // 7F0AF938: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF93Cu;
            goto label_7F0AFB88;
    }

label_7F0AF93C:
    ctx->pc = 0x7F0AF93Cu;
    ctx->downcount -= 4;
    // 7F0AF93C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF940:
    ctx->pc = 0x7F0AF940u;
    // 7F0AF940: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0AF944:
    ctx->pc = 0x7F0AF944u;
    // 7F0AF944: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AF948:
    ctx->pc = 0x7F0AF948u;
    // 7F0AF948: bl      0x7F0AF5FC
    {
            ctx->lr = 0x7F0AF94Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF5FCu;
                return;
            }
            goto label_7F0AF5FC;
    }

label_7F0AF94C:
    ctx->pc = 0x7F0AF94Cu;
    ctx->downcount -= 11;
    // 7F0AF94C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AF950:
    ctx->pc = 0x7F0AF950u;
    // 7F0AF950: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AF954:
    ctx->pc = 0x7F0AF954u;
    // 7F0AF954: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0AF958:
    ctx->pc = 0x7F0AF958u;
    // 7F0AF958: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF95C:
    ctx->pc = 0x7F0AF95Cu;
    // 7F0AF95C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0AF960:
    ctx->pc = 0x7F0AF960u;
    // 7F0AF960: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF964:
    ctx->pc = 0x7F0AF964u;
    // 7F0AF964: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0AF968:
    ctx->pc = 0x7F0AF968u;
    // 7F0AF968: stw     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF96C:
    ctx->pc = 0x7F0AF96Cu;
    // 7F0AF96C: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AF970:
    ctx->pc = 0x7F0AF970u;
    // 7F0AF970: cmpwi   r0, 0
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

label_7F0AF974:
    ctx->pc = 0x7F0AF974u;
    // 7F0AF974: bc    4, 1, 0x7F0AF988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF988;
        }
    }

label_7F0AF978:
    ctx->pc = 0x7F0AF978u;
    ctx->downcount -= 4;
    // 7F0AF978: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0AF97C:
    ctx->pc = 0x7F0AF97Cu;
    // 7F0AF97C: li      r4, 1940
    ctx->gpr[4] = (u32)(s32)(1940);

label_7F0AF980:
    ctx->pc = 0x7F0AF980u;
    // 7F0AF980: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0AF984:
    ctx->pc = 0x7F0AF984u;
    // 7F0AF984: bl      0x7F011A74
    {
            ctx->lr = 0x7F0AF988u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0AF988:
    ctx->pc = 0x7F0AF988u;
    ctx->downcount -= 5;
    // 7F0AF988: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF98C:
    ctx->pc = 0x7F0AF98Cu;
    // 7F0AF98C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AF990:
    ctx->pc = 0x7F0AF990u;
    // 7F0AF990: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF994:
    ctx->pc = 0x7F0AF994u;
    // 7F0AF994: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AF998:
    ctx->pc = 0x7F0AF998u;
    // 7F0AF998: bc    12, 2, 0x7F0AF9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF9EC;
        }
    }

label_7F0AF99C:
    ctx->pc = 0x7F0AF99Cu;
    ctx->downcount -= 3;
    // 7F0AF99C: lwz     r0, 1484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF9A0:
    ctx->pc = 0x7F0AF9A0u;
    // 7F0AF9A0: cmpwi   r0, 0
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

label_7F0AF9A4:
    ctx->pc = 0x7F0AF9A4u;
    // 7F0AF9A4: bc    4, 2, 0x7F0AF9DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AF9DC;
        }
    }

label_7F0AF9A8:
    ctx->pc = 0x7F0AF9A8u;
    ctx->downcount -= 4;
    // 7F0AF9A8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AF9AC:
    ctx->pc = 0x7F0AF9ACu;
    // 7F0AF9AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF9B0:
    ctx->pc = 0x7F0AF9B0u;
    // 7F0AF9B0: addi    r4, r4, -1988
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1988);

label_7F0AF9B4:
    ctx->pc = 0x7F0AF9B4u;
    // 7F0AF9B4: bl      0x7F0AFB70
    {
            ctx->lr = 0x7F0AF9B8u;
            goto label_7F0AFB70;
    }

label_7F0AF9B8:
    ctx->pc = 0x7F0AF9B8u;
    ctx->downcount -= 4;
    // 7F0AF9B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF9BC:
    ctx->pc = 0x7F0AF9BCu;
    // 7F0AF9BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AF9C0:
    ctx->pc = 0x7F0AF9C0u;
    // 7F0AF9C0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AF9C4:
    ctx->pc = 0x7F0AF9C4u;
    // 7F0AF9C4: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AF9C8u;
            goto label_7F0AFB88;
    }

label_7F0AF9C8:
    ctx->pc = 0x7F0AF9C8u;
    ctx->downcount -= 5;
    // 7F0AF9C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AF9CC:
    ctx->pc = 0x7F0AF9CCu;
    // 7F0AF9CC: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F0AF9D0:
    ctx->pc = 0x7F0AF9D0u;
    // 7F0AF9D0: stw     r3, 1468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1468);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AF9D4:
    ctx->pc = 0x7F0AF9D4u;
    // 7F0AF9D4: stw     r0, 1472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AF9D8:
    ctx->pc = 0x7F0AF9D8u;
    // 7F0AF9D8: b       0x7F0AF9EC
    {
            goto label_7F0AF9EC;
    }

label_7F0AF9DC:
    ctx->pc = 0x7F0AF9DCu;
    ctx->downcount -= 4;
    // 7F0AF9DC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AF9E0:
    ctx->pc = 0x7F0AF9E0u;
    // 7F0AF9E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AF9E4:
    ctx->pc = 0x7F0AF9E4u;
    // 7F0AF9E4: addi    r4, r4, -1536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1536);

label_7F0AF9E8:
    ctx->pc = 0x7F0AF9E8u;
    // 7F0AF9E8: bl      0x7F0AFB70
    {
            ctx->lr = 0x7F0AF9ECu;
            goto label_7F0AFB70;
    }

label_7F0AF9EC:
    ctx->pc = 0x7F0AF9ECu;
    ctx->downcount -= 6;
    // 7F0AF9EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AF9F0:
    ctx->pc = 0x7F0AF9F0u;
    // 7F0AF9F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AF9F4:
    ctx->pc = 0x7F0AF9F4u;
    // 7F0AF9F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AF9F8:
    ctx->pc = 0x7F0AF9F8u;
    // 7F0AF9F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AF9FC:
    ctx->pc = 0x7F0AF9FCu;
    // 7F0AF9FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFA00:
    ctx->pc = 0x7F0AFA00u;
    ctx->downcount -= 17;
    // 7F0AFA00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFA04:
    ctx->pc = 0x7F0AFA04u;
    // 7F0AFA04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFA08:
    ctx->pc = 0x7F0AFA08u;
    // 7F0AFA08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFA0C:
    ctx->pc = 0x7F0AFA0Cu;
    // 7F0AFA0C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AFA10:
    ctx->pc = 0x7F0AFA10u;
    // 7F0AFA10: or.   r31, r4, r4
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

label_7F0AFA14:
    ctx->pc = 0x7F0AFA14u;
    // 7F0AFA14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AFA18:
    ctx->pc = 0x7F0AFA18u;
    // 7F0AFA18: bc    4, 2, 0x7F0AFA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFA28;
        }
    }

label_7F0AFA1C:
    ctx->pc = 0x7F0AFA1Cu;
    ctx->downcount -= 3;
    // 7F0AFA1C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0AFA20:
    ctx->pc = 0x7F0AFA20u;
    // 7F0AFA20: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AFA24:
    ctx->pc = 0x7F0AFA24u;
    // 7F0AFA24: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AFA28u;
            goto label_7F0AFB88;
    }

label_7F0AFA28:
    ctx->pc = 0x7F0AFA28u;
    ctx->downcount -= 2;
    // 7F0AFA28: cmpwi   r31, 122
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(122);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AFA2C:
    ctx->pc = 0x7F0AFA2Cu;
    // 7F0AFA2C: bc    4, 2, 0x7F0AFA40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFA40;
        }
    }

label_7F0AFA30:
    ctx->pc = 0x7F0AFA30u;
    ctx->downcount -= 4;
    // 7F0AFA30: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F0AFA34:
    ctx->pc = 0x7F0AFA34u;
    // 7F0AFA34: li      r4, 51
    ctx->gpr[4] = (u32)(s32)(51);

label_7F0AFA38:
    ctx->pc = 0x7F0AFA38u;
    // 7F0AFA38: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0AFA3C:
    ctx->pc = 0x7F0AFA3Cu;
    // 7F0AFA3C: bl      0x7F011A74
    {
            ctx->lr = 0x7F0AFA40u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0AFA40:
    ctx->pc = 0x7F0AFA40u;
    ctx->downcount -= 5;
    // 7F0AFA40: lwz     r3, 468(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFA44:
    ctx->pc = 0x7F0AFA44u;
    // 7F0AFA44: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFA48:
    ctx->pc = 0x7F0AFA48u;
    // 7F0AFA48: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFA4C:
    ctx->pc = 0x7F0AFA4Cu;
    // 7F0AFA4C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AFA50:
    ctx->pc = 0x7F0AFA50u;
    // 7F0AFA50: bc    12, 2, 0x7F0AFA74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFA74;
        }
    }

label_7F0AFA54:
    ctx->pc = 0x7F0AFA54u;
    ctx->downcount -= 8;
    // 7F0AFA54: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AFA58:
    ctx->pc = 0x7F0AFA58u;
    // 7F0AFA58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AFA5C:
    ctx->pc = 0x7F0AFA5Cu;
    // 7F0AFA5C: addi    r5, r4, 19268
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19268);

label_7F0AFA60:
    ctx->pc = 0x7F0AFA60u;
    // 7F0AFA60: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AFA64:
    ctx->pc = 0x7F0AFA64u;
    // 7F0AFA64: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFA68:
    ctx->pc = 0x7F0AFA68u;
    // 7F0AFA68: addi    r4, r3, -1400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1400);

label_7F0AFA6C:
    ctx->pc = 0x7F0AFA6Cu;
    // 7F0AFA6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AFA70:
    ctx->pc = 0x7F0AFA70u;
    // 7F0AFA70: bl      0x7F0AFB70
    {
            ctx->lr = 0x7F0AFA74u;
            goto label_7F0AFB70;
    }

label_7F0AFA74:
    ctx->pc = 0x7F0AFA74u;
    ctx->downcount -= 16;
    // 7F0AFA74: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AFA78:
    ctx->pc = 0x7F0AFA78u;
    // 7F0AFA78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFA7C:
    ctx->pc = 0x7F0AFA7Cu;
    // 7F0AFA7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AFA80:
    ctx->pc = 0x7F0AFA80u;
    // 7F0AFA80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AFA84:
    ctx->pc = 0x7F0AFA84u;
    // 7F0AFA84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFA88:
    ctx->pc = 0x7F0AFA88u;
    ctx->downcount -= 5;
    // 7F0AFA88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFA8C:
    ctx->pc = 0x7F0AFA8Cu;
    // 7F0AFA8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFA90:
    ctx->pc = 0x7F0AFA90u;
    // 7F0AFA90: cmpwi   r4, 0
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

label_7F0AFA94:
    ctx->pc = 0x7F0AFA94u;
    // 7F0AFA94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFA98:
    ctx->pc = 0x7F0AFA98u;
    // 7F0AFA98: bc    4, 2, 0x7F0AFAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFAA8;
        }
    }

label_7F0AFA9C:
    ctx->pc = 0x7F0AFA9Cu;
    ctx->downcount -= 3;
    // 7F0AFA9C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0AFAA0:
    ctx->pc = 0x7F0AFAA0u;
    // 7F0AFAA0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AFAA4:
    ctx->pc = 0x7F0AFAA4u;
    // 7F0AFAA4: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AFAA8u;
            goto label_7F0AFB88;
    }

label_7F0AFAA8:
    ctx->pc = 0x7F0AFAA8u;
    ctx->downcount -= 5;
    // 7F0AFAA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFAAC:
    ctx->pc = 0x7F0AFAACu;
    // 7F0AFAAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AFAB0:
    ctx->pc = 0x7F0AFAB0u;
    // 7F0AFAB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AFAB4:
    ctx->pc = 0x7F0AFAB4u;
    // 7F0AFAB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFAB8:
    ctx->pc = 0x7F0AFAB8u;
    ctx->downcount -= 26;
    // 7F0AFAB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFABC:
    ctx->pc = 0x7F0AFABCu;
    // 7F0AFABC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFAC0:
    ctx->pc = 0x7F0AFAC0u;
    // 7F0AFAC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFAC4:
    ctx->pc = 0x7F0AFAC4u;
    // 7F0AFAC4: li      r0, -18
    ctx->gpr[0] = (u32)(s32)(-18);

label_7F0AFAC8:
    ctx->pc = 0x7F0AFAC8u;
    // 7F0AFAC8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AFACC:
    ctx->pc = 0x7F0AFACCu;
    // 7F0AFACC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AFAD0:
    ctx->pc = 0x7F0AFAD0u;
    // 7F0AFAD0: lwz     r4, 1204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFAD4:
    ctx->pc = 0x7F0AFAD4u;
    // 7F0AFAD4: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0AFAD8:
    ctx->pc = 0x7F0AFAD8u;
    // 7F0AFAD8: stw     r0, 1204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFADC:
    ctx->pc = 0x7F0AFADCu;
    // 7F0AFADC: lwz     r4, 1436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1436);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFAE0:
    ctx->pc = 0x7F0AFAE0u;
    // 7F0AFAE0: lwz     r30, 1428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1428);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0AFAE4:
    ctx->pc = 0x7F0AFAE4u;
    // 7F0AFAE4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0AFAE8:
    ctx->pc = 0x7F0AFAE8u;
    // 7F0AFAE8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AFAEC:
    ctx->pc = 0x7F0AFAECu;
    // 7F0AFAEC: cmplwi  r30, 0x0000
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

label_7F0AFAF0:
    ctx->pc = 0x7F0AFAF0u;
    // 7F0AFAF0: stw     r0, 1436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFAF4:
    ctx->pc = 0x7F0AFAF4u;
    // 7F0AFAF4: bc    4, 2, 0x7F0AFB14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFB14;
        }
    }

label_7F0AFAF8:
    ctx->pc = 0x7F0AFAF8u;
    ctx->downcount -= 7;
    // 7F0AFAF8: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0AFAFC:
    ctx->pc = 0x7F0AFAFCu;
    // 7F0AFAFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AFB00:
    ctx->pc = 0x7F0AFB00u;
    // 7F0AFB00: addi    r0, r5, -1988
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1988);

label_7F0AFB04:
    ctx->pc = 0x7F0AFB04u;
    // 7F0AFB04: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AFB08:
    ctx->pc = 0x7F0AFB08u;
    // 7F0AFB08: stw     r0, 1428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFB0C:
    ctx->pc = 0x7F0AFB0Cu;
    // 7F0AFB0C: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AFB10:
    ctx->pc = 0x7F0AFB10u;
    // 7F0AFB10: bl      0x7F0AFB88
    {
            ctx->lr = 0x7F0AFB14u;
            goto label_7F0AFB88;
    }

label_7F0AFB14:
    ctx->pc = 0x7F0AFB14u;
    ctx->downcount -= 6;
    // 7F0AFB14: or   r12, r30, r30
    {
        ctx->gpr[12] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AFB18:
    ctx->pc = 0x7F0AFB18u;
    // 7F0AFB18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AFB1C:
    ctx->pc = 0x7F0AFB1Cu;
    // 7F0AFB1C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AFB20:
    ctx->pc = 0x7F0AFB20u;
    // 7F0AFB20: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F0AFB24:
    ctx->pc = 0x7F0AFB24u;
    // 7F0AFB24: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F0AFB28u;
            ctx->pc = target;
            return;
        }
    }

label_7F0AFB28:
    ctx->pc = 0x7F0AFB28u;
    ctx->downcount -= 12;
    // 7F0AFB28: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AFB2C:
    ctx->pc = 0x7F0AFB2Cu;
    // 7F0AFB2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AFB30:
    ctx->pc = 0x7F0AFB30u;
    // 7F0AFB30: addi    r5, r3, -5736
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F0AFB34:
    ctx->pc = 0x7F0AFB34u;
    // 7F0AFB34: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F0AFB38:
    ctx->pc = 0x7F0AFB38u;
    // 7F0AFB38: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFB3C:
    ctx->pc = 0x7F0AFB3Cu;
    // 7F0AFB3C: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFB40:
    ctx->pc = 0x7F0AFB40u;
    // 7F0AFB40: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0AFB44:
    ctx->pc = 0x7F0AFB44u;
    // 7F0AFB44: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AFB48:
    ctx->pc = 0x7F0AFB48u;
    // 7F0AFB48: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0AFB4C:
    ctx->pc = 0x7F0AFB4Cu;
    // 7F0AFB4C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0AFB50:
    ctx->pc = 0x7F0AFB50u;
    // 7F0AFB50: or.   r0, r3, r0
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

label_7F0AFB54:
    ctx->pc = 0x7F0AFB54u;
    // 7F0AFB54: bc    12, 2, 0x7F0AFB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFB5C;
        }
    }

label_7F0AFB58:
    ctx->pc = 0x7F0AFB58u;
    ctx->downcount -= 1;
    // 7F0AFB58: stw     r4, 1204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFB5C:
    ctx->pc = 0x7F0AFB5Cu;
    ctx->downcount -= 16;
    // 7F0AFB5C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AFB60:
    ctx->pc = 0x7F0AFB60u;
    // 7F0AFB60: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFB64:
    ctx->pc = 0x7F0AFB64u;
    // 7F0AFB64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AFB68:
    ctx->pc = 0x7F0AFB68u;
    // 7F0AFB68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AFB6C:
    ctx->pc = 0x7F0AFB6Cu;
    // 7F0AFB6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFB70:
    ctx->pc = 0x7F0AFB70u;
    ctx->downcount -= 6;
    // 7F0AFB70: stw     r4, 1428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1428);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFB74:
    ctx->pc = 0x7F0AFB74u;
    // 7F0AFB74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AFB78:
    ctx->pc = 0x7F0AFB78u;
    // 7F0AFB78: stw     r0, 1436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFB7C:
    ctx->pc = 0x7F0AFB7Cu;
    // 7F0AFB7C: sth     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFB80:
    ctx->pc = 0x7F0AFB80u;
    // 7F0AFB80: sth     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFB84:
    ctx->pc = 0x7F0AFB84u;
    // 7F0AFB84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFB88:
    ctx->pc = 0x7F0AFB88u;
    ctx->downcount -= 8;
    // 7F0AFB88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFB8C:
    ctx->pc = 0x7F0AFB8Cu;
    // 7F0AFB8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFB90:
    ctx->pc = 0x7F0AFB90u;
    // 7F0AFB90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFB94:
    ctx->pc = 0x7F0AFB94u;
    // 7F0AFB94: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AFB98:
    ctx->pc = 0x7F0AFB98u;
    // 7F0AFB98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AFB9C:
    ctx->pc = 0x7F0AFB9Cu;
    // 7F0AFB9C: lwz     r0, 1444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFBA0:
    ctx->pc = 0x7F0AFBA0u;
    // 7F0AFBA0: cmpw    r0, r4
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

label_7F0AFBA4:
    ctx->pc = 0x7F0AFBA4u;
    // 7F0AFBA4: bc    12, 2, 0x7F0AFBF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFBF0;
        }
    }

label_7F0AFBA8:
    ctx->pc = 0x7F0AFBA8u;
    ctx->downcount -= 12;
    // 7F0AFBA8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AFBAC:
    ctx->pc = 0x7F0AFBACu;
    // 7F0AFBAC: stw     r4, 1444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1444);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFBB0:
    ctx->pc = 0x7F0AFBB0u;
    // 7F0AFBB0: rlwinm r0, r4, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F0AFBB4:
    ctx->pc = 0x7F0AFBB4u;
    // 7F0AFBB4: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AFBB8:
    ctx->pc = 0x7F0AFBB8u;
    // 7F0AFBB8: addi    r4, r3, -32416
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32416);

label_7F0AFBBC:
    ctx->pc = 0x7F0AFBBCu;
    // 7F0AFBBC: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0AFBC0:
    ctx->pc = 0x7F0AFBC0u;
    // 7F0AFBC0: lhax    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AFBC4:
    ctx->pc = 0x7F0AFBC4u;
    // 7F0AFBC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AFBC8:
    ctx->pc = 0x7F0AFBC8u;
    // 7F0AFBC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AFBCC:
    ctx->pc = 0x7F0AFBCCu;
    // 7F0AFBCC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AFBD0:
    ctx->pc = 0x7F0AFBD0u;
    // 7F0AFBD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AFBD4:
    ctx->pc = 0x7F0AFBD4u;
    // 7F0AFBD4: bl      0x7F042C94
    {
            ctx->lr = 0x7F0AFBD8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0AFBD8:
    ctx->pc = 0x7F0AFBD8u;
    ctx->downcount -= 6;
    // 7F0AFBD8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AFBDC:
    ctx->pc = 0x7F0AFBDCu;
    // 7F0AFBDC: addi    r4, r3, 12808
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F0AFBE0:
    ctx->pc = 0x7F0AFBE0u;
    // 7F0AFBE0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFBE4:
    ctx->pc = 0x7F0AFBE4u;
    // 7F0AFBE4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFBE8:
    ctx->pc = 0x7F0AFBE8u;
    // 7F0AFBE8: stw     r3, 1044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1044);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AFBEC:
    ctx->pc = 0x7F0AFBECu;
    // 7F0AFBEC: stw     r0, 1048(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFBF0:
    ctx->pc = 0x7F0AFBF0u;
    ctx->downcount -= 6;
    // 7F0AFBF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFBF4:
    ctx->pc = 0x7F0AFBF4u;
    // 7F0AFBF4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AFBF8:
    ctx->pc = 0x7F0AFBF8u;
    // 7F0AFBF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AFBFC:
    ctx->pc = 0x7F0AFBFCu;
    // 7F0AFBFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AFC00:
    ctx->pc = 0x7F0AFC00u;
    // 7F0AFC00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFC04:
    ctx->pc = 0x7F0AFC04u;
    ctx->downcount -= 28;
    // 7F0AFC04: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFC08:
    ctx->pc = 0x7F0AFC08u;
    // 7F0AFC08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFC0C:
    ctx->pc = 0x7F0AFC0Cu;
    // 7F0AFC0C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFC10:
    ctx->pc = 0x7F0AFC10u;
    // 7F0AFC10: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AFC14:
    ctx->pc = 0x7F0AFC14u;
    // 7F0AFC14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AFC18:
    ctx->pc = 0x7F0AFC18u;
    // 7F0AFC18: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AFC1C:
    ctx->pc = 0x7F0AFC1Cu;
    // 7F0AFC1C: addi    r5, r3, 12808
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F0AFC20:
    ctx->pc = 0x7F0AFC20u;
    // 7F0AFC20: addi    r31, r30, 64
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(64);

label_7F0AFC24:
    ctx->pc = 0x7F0AFC24u;
    // 7F0AFC24: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F0AFC28:
    ctx->pc = 0x7F0AFC28u;
    // 7F0AFC28: lwz     r7, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFC2C:
    ctx->pc = 0x7F0AFC2Cu;
    // 7F0AFC2C: lwz     r6, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AFC30:
    ctx->pc = 0x7F0AFC30u;
    // 7F0AFC30: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFC34:
    ctx->pc = 0x7F0AFC34u;
    // 7F0AFC34: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFC38:
    ctx->pc = 0x7F0AFC38u;
    // 7F0AFC38: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFC3C:
    ctx->pc = 0x7F0AFC3Cu;
    // 7F0AFC3C: stw     r4, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFC40:
    ctx->pc = 0x7F0AFC40u;
    // 7F0AFC40: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AFC44:
    ctx->pc = 0x7F0AFC44u;
    // 7F0AFC44: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFC48:
    ctx->pc = 0x7F0AFC48u;
    // 7F0AFC48: bl      0x7F04291C
    {
            ctx->lr = 0x7F0AFC4Cu;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F0AFC4C:
    ctx->pc = 0x7F0AFC4Cu;
    ctx->downcount -= 43;
    // 7F0AFC4C: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFC50:
    ctx->pc = 0x7F0AFC50u;
    // 7F0AFC50: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0AFC54:
    ctx->pc = 0x7F0AFC54u;
    // 7F0AFC54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AFC58:
    ctx->pc = 0x7F0AFC58u;
    // 7F0AFC58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AFC5C:
    ctx->pc = 0x7F0AFC5Cu;
    // 7F0AFC5C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AFC60:
    ctx->pc = 0x7F0AFC60u;
    // 7F0AFC60: addi    r5, r4, -5176
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5176);

label_7F0AFC64:
    ctx->pc = 0x7F0AFC64u;
    // 7F0AFC64: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AFC68:
    ctx->pc = 0x7F0AFC68u;
    // 7F0AFC68: addi    r4, r3, -5168
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5168);

label_7F0AFC6C:
    ctx->pc = 0x7F0AFC6Cu;
    // 7F0AFC6C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFC70:
    ctx->pc = 0x7F0AFC70u;
    // 7F0AFC70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AFC74:
    ctx->pc = 0x7F0AFC74u;
    // 7F0AFC74: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC74u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0AFC78:
    ctx->pc = 0x7F0AFC78u;
    // 7F0AFC78: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AFC7C:
    ctx->pc = 0x7F0AFC7Cu;
    // 7F0AFC7C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AFC80:
    ctx->pc = 0x7F0AFC80u;
    // 7F0AFC80: lha     r4, 1044(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1044);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AFC84:
    ctx->pc = 0x7F0AFC84u;
    // 7F0AFC84: lfs     f1, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC84u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFC88:
    ctx->pc = 0x7F0AFC88u;
    // 7F0AFC88: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0AFC8C:
    ctx->pc = 0x7F0AFC8Cu;
    // 7F0AFC8C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFC90:
    ctx->pc = 0x7F0AFC90u;
    // 7F0AFC90: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFC94:
    ctx->pc = 0x7F0AFC94u;
    // 7F0AFC94: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0AFC98:
    ctx->pc = 0x7F0AFC98u;
    // 7F0AFC98: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC98u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F0AFC9C:
    ctx->pc = 0x7F0AFC9Cu;
    // 7F0AFC9C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFC9Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F0AFCA0:
    ctx->pc = 0x7F0AFCA0u;
    // 7F0AFCA0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AFCA4:
    ctx->pc = 0x7F0AFCA4u;
    // 7F0AFCA4: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AFCA8:
    ctx->pc = 0x7F0AFCA8u;
    // 7F0AFCA8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFCAC:
    ctx->pc = 0x7F0AFCACu;
    // 7F0AFCAC: sth     r0, 1044(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1044);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFCB0:
    ctx->pc = 0x7F0AFCB0u;
    // 7F0AFCB0: lha     r0, 1048(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1048);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AFCB4:
    ctx->pc = 0x7F0AFCB4u;
    // 7F0AFCB4: lfs     f1, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCB4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFCB8:
    ctx->pc = 0x7F0AFCB8u;
    // 7F0AFCB8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0AFCBC:
    ctx->pc = 0x7F0AFCBCu;
    // 7F0AFCBC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFCC0:
    ctx->pc = 0x7F0AFCC0u;
    // 7F0AFCC0: lfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0AFCC4:
    ctx->pc = 0x7F0AFCC4u;
    // 7F0AFCC4: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCC4u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F0AFCC8:
    ctx->pc = 0x7F0AFCC8u;
    // 7F0AFCC8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCC8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F0AFCCC:
    ctx->pc = 0x7F0AFCCCu;
    // 7F0AFCCC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCCCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AFCD0:
    ctx->pc = 0x7F0AFCD0u;
    // 7F0AFCD0: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AFCD4:
    ctx->pc = 0x7F0AFCD4u;
    // 7F0AFCD4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFCD8:
    ctx->pc = 0x7F0AFCD8u;
    // 7F0AFCD8: sth     r0, 1048(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1048);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFCDC:
    ctx->pc = 0x7F0AFCDCu;
    // 7F0AFCDC: lfs     f1, 476(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCDCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFCE0:
    ctx->pc = 0x7F0AFCE0u;
    // 7F0AFCE0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCE0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0AFCE4:
    ctx->pc = 0x7F0AFCE4u;
    // 7F0AFCE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0AFCE8:
    ctx->pc = 0x7F0AFCE8u;
    // 7F0AFCE8: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFCE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0AFCEC:
    ctx->pc = 0x7F0AFCECu;
    // 7F0AFCEC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFCF0:
    ctx->pc = 0x7F0AFCF0u;
    // 7F0AFCF0: sth     r0, 1046(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1046);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFCF4:
    ctx->pc = 0x7F0AFCF4u;
    // 7F0AFCF4: bl      0x7F023170
    {
            ctx->lr = 0x7F0AFCF8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F0AFCF8:
    ctx->pc = 0x7F0AFCF8u;
    ctx->downcount -= 2;
    // 7F0AFCF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AFCFC:
    ctx->pc = 0x7F0AFCFCu;
    // 7F0AFCFC: bl      0x7F0AF5C8
    {
            ctx->lr = 0x7F0AFD00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AF5C8u;
                return;
            }
            goto label_7F0AF5C8;
    }

label_7F0AFD00:
    ctx->pc = 0x7F0AFD00u;
    ctx->downcount -= 3;
    // 7F0AFD00: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFD04:
    ctx->pc = 0x7F0AFD04u;
    // 7F0AFD04: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0AFD08:
    ctx->pc = 0x7F0AFD08u;
    // 7F0AFD08: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AFD0Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AFD0C:
    ctx->pc = 0x7F0AFD0Cu;
    ctx->downcount -= 2;
    // 7F0AFD0C: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F0AFD10:
    ctx->pc = 0x7F0AFD10u;
    // 7F0AFD10: bl      0x7F0429C4
    {
            ctx->lr = 0x7F0AFD14u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F0AFD14:
    ctx->pc = 0x7F0AFD14u;
    ctx->downcount -= 5;
    // 7F0AFD14: lwz     r5, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFD18:
    ctx->pc = 0x7F0AFD18u;
    // 7F0AFD18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AFD1C:
    ctx->pc = 0x7F0AFD1Cu;
    // 7F0AFD1C: addi    r4, r30, 916
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(916);

label_7F0AFD20:
    ctx->pc = 0x7F0AFD20u;
    // 7F0AFD20: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0AFD24:
    ctx->pc = 0x7F0AFD24u;
    // 7F0AFD24: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0AFD28u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0AFD28:
    ctx->pc = 0x7F0AFD28u;
    ctx->downcount -= 16;
    // 7F0AFD28: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AFD2C:
    ctx->pc = 0x7F0AFD2Cu;
    // 7F0AFD2C: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFD30:
    ctx->pc = 0x7F0AFD30u;
    // 7F0AFD30: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFD34:
    ctx->pc = 0x7F0AFD34u;
    // 7F0AFD34: addi    r5, r3, -5708
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0AFD38:
    ctx->pc = 0x7F0AFD38u;
    // 7F0AFD38: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AFD3C:
    ctx->pc = 0x7F0AFD3Cu;
    // 7F0AFD3C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFD40:
    ctx->pc = 0x7F0AFD40u;
    // 7F0AFD40: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0AFD44:
    ctx->pc = 0x7F0AFD44u;
    // 7F0AFD44: addi    r4, r3, 208
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(208);

label_7F0AFD48:
    ctx->pc = 0x7F0AFD48u;
    // 7F0AFD48: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFD4C:
    ctx->pc = 0x7F0AFD4Cu;
    // 7F0AFD4C: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFD50:
    ctx->pc = 0x7F0AFD50u;
    // 7F0AFD50: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFD54:
    ctx->pc = 0x7F0AFD54u;
    // 7F0AFD54: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AFD58:
    ctx->pc = 0x7F0AFD58u;
    // 7F0AFD58: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFD5C:
    ctx->pc = 0x7F0AFD5Cu;
    // 7F0AFD5C: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFD60:
    ctx->pc = 0x7F0AFD60u;
    // 7F0AFD60: addi    r3, r3, 4380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4380);

label_7F0AFD64:
    ctx->pc = 0x7F0AFD64u;
    // 7F0AFD64: bl      0x7F091A80
    {
            ctx->lr = 0x7F0AFD68u;
            ctx->pc = 0x7F091A80u;
            return;
    }

label_7F0AFD68:
    ctx->pc = 0x7F0AFD68u;
    ctx->downcount -= 5;
    // 7F0AFD68: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AFD6C:
    ctx->pc = 0x7F0AFD6Cu;
    // 7F0AFD6C: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFD70:
    ctx->pc = 0x7F0AFD70u;
    // 7F0AFD70: lha     r0, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AFD74:
    ctx->pc = 0x7F0AFD74u;
    // 7F0AFD74: extsh. r0, r0
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

label_7F0AFD78:
    ctx->pc = 0x7F0AFD78u;
    // 7F0AFD78: bc    12, 1, 0x7F0AFDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFDA8;
        }
    }

label_7F0AFD7C:
    ctx->pc = 0x7F0AFD7Cu;
    ctx->downcount -= 4;
    // 7F0AFD7C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AFD80:
    ctx->pc = 0x7F0AFD80u;
    // 7F0AFD80: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFD84:
    ctx->pc = 0x7F0AFD84u;
    // 7F0AFD84: rlwinm. r0, r0, 0, 1, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x78000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AFD88:
    ctx->pc = 0x7F0AFD88u;
    // 7F0AFD88: bc    4, 2, 0x7F0AFDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFDA0;
        }
    }

label_7F0AFD8C:
    ctx->pc = 0x7F0AFD8Cu;
    ctx->downcount -= 5;
    // 7F0AFD8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AFD90:
    ctx->pc = 0x7F0AFD90u;
    // 7F0AFD90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AFD94:
    ctx->pc = 0x7F0AFD94u;
    // 7F0AFD94: sth     r3, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AFD98:
    ctx->pc = 0x7F0AFD98u;
    // 7F0AFD98: stw     r0, 1484(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFD9C:
    ctx->pc = 0x7F0AFD9Cu;
    // 7F0AFD9C: b       0x7F0AFDA8
    {
            goto label_7F0AFDA8;
    }

label_7F0AFDA0:
    ctx->pc = 0x7F0AFDA0u;
    ctx->downcount -= 2;
    // 7F0AFDA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AFDA4:
    ctx->pc = 0x7F0AFDA4u;
    // 7F0AFDA4: sth     r0, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AFDA8:
    ctx->pc = 0x7F0AFDA8u;
    ctx->downcount -= 3;
    // 7F0AFDA8: lwz     r0, 1472(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1472);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFDAC:
    ctx->pc = 0x7F0AFDACu;
    // 7F0AFDAC: cmpwi   r0, 0
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

label_7F0AFDB0:
    ctx->pc = 0x7F0AFDB0u;
    // 7F0AFDB0: bc    4, 2, 0x7F0AFDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFDD0;
        }
    }

label_7F0AFDB4:
    ctx->pc = 0x7F0AFDB4u;
    ctx->downcount -= 7;
    // 7F0AFDB4: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F0AFDB8:
    ctx->pc = 0x7F0AFDB8u;
    // 7F0AFDB8: stw     r0, 1204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFDBC:
    ctx->pc = 0x7F0AFDBCu;
    // 7F0AFDBC: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFDC0:
    ctx->pc = 0x7F0AFDC0u;
    // 7F0AFDC0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFDC4:
    ctx->pc = 0x7F0AFDC4u;
    // 7F0AFDC4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0AFDC8:
    ctx->pc = 0x7F0AFDC8u;
    // 7F0AFDC8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFDCC:
    ctx->pc = 0x7F0AFDCCu;
    // 7F0AFDCC: b       0x7F0AFDF4
    {
            goto label_7F0AFDF4;
    }

label_7F0AFDD0:
    ctx->pc = 0x7F0AFDD0u;
    ctx->downcount -= 9;
    // 7F0AFDD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AFDD4:
    ctx->pc = 0x7F0AFDD4u;
    // 7F0AFDD4: stw     r0, 1204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFDD8:
    ctx->pc = 0x7F0AFDD8u;
    // 7F0AFDD8: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFDDC:
    ctx->pc = 0x7F0AFDDCu;
    // 7F0AFDDC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFDE0:
    ctx->pc = 0x7F0AFDE0u;
    // 7F0AFDE0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0AFDE4:
    ctx->pc = 0x7F0AFDE4u;
    // 7F0AFDE4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFDE8:
    ctx->pc = 0x7F0AFDE8u;
    // 7F0AFDE8: lwz     r3, 1472(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFDEC:
    ctx->pc = 0x7F0AFDECu;
    // 7F0AFDEC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0AFDF0:
    ctx->pc = 0x7F0AFDF0u;
    // 7F0AFDF0: stw     r0, 1472(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFDF4:
    ctx->pc = 0x7F0AFDF4u;
    ctx->downcount -= 3;
    // 7F0AFDF4: lwz     r0, 1476(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFDF8:
    ctx->pc = 0x7F0AFDF8u;
    // 7F0AFDF8: cmpwi   r0, 0
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

label_7F0AFDFC:
    ctx->pc = 0x7F0AFDFCu;
    // 7F0AFDFC: bc    12, 2, 0x7F0AFE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFE10;
        }
    }

label_7F0AFE00:
    ctx->pc = 0x7F0AFE00u;
    ctx->downcount -= 4;
    // 7F0AFE00: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AFE04:
    ctx->pc = 0x7F0AFE04u;
    // 7F0AFE04: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFE08:
    ctx->pc = 0x7F0AFE08u;
    // 7F0AFE08: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0AFE0C:
    ctx->pc = 0x7F0AFE0Cu;
    // 7F0AFE0C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFE10:
    ctx->pc = 0x7F0AFE10u;
    ctx->downcount -= 76;
    // 7F0AFE10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AFE14:
    ctx->pc = 0x7F0AFE14u;
    // 7F0AFE14: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AFE18:
    ctx->pc = 0x7F0AFE18u;
    // 7F0AFE18: addi    r12, r3, -5708
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0AFE1C:
    ctx->pc = 0x7F0AFE1Cu;
    // 7F0AFE1C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFE20:
    ctx->pc = 0x7F0AFE20u;
    // 7F0AFE20: lis     r7, 32585
    ctx->gpr[7] = ((u32)(s32)(32585) << 16);

label_7F0AFE24:
    ctx->pc = 0x7F0AFE24u;
    // 7F0AFE24: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F0AFE28:
    ctx->pc = 0x7F0AFE28u;
    // 7F0AFE28: stw     r4, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AFE2C:
    ctx->pc = 0x7F0AFE2Cu;
    // 7F0AFE2C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0AFE30:
    ctx->pc = 0x7F0AFE30u;
    // 7F0AFE30: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AFE34:
    ctx->pc = 0x7F0AFE34u;
    // 7F0AFE34: lwzu     r11, -5664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5664);
        ctx->gpr[11] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0AFE38:
    ctx->pc = 0x7F0AFE38u;
    // 7F0AFE38: stw     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFE3C:
    ctx->pc = 0x7F0AFE3Cu;
    // 7F0AFE3C: addi    r6, r4, -5164
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5164);

label_7F0AFE40:
    ctx->pc = 0x7F0AFE40u;
    // 7F0AFE40: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFE40u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AFE44:
    ctx->pc = 0x7F0AFE44u;
    // 7F0AFE44: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AFE48:
    ctx->pc = 0x7F0AFE48u;
    // 7F0AFE48: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFE4C:
    ctx->pc = 0x7F0AFE4Cu;
    // 7F0AFE4C: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0AFE50:
    ctx->pc = 0x7F0AFE50u;
    // 7F0AFE50: lwz     r10, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0AFE54:
    ctx->pc = 0x7F0AFE54u;
    // 7F0AFE54: addi    r9, r7, 13880
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(13880);

label_7F0AFE58:
    ctx->pc = 0x7F0AFE58u;
    // 7F0AFE58: addi    r8, r5, -5872
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-5872);

label_7F0AFE5C:
    ctx->pc = 0x7F0AFE5Cu;
    // 7F0AFE5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AFE60:
    ctx->pc = 0x7F0AFE60u;
    // 7F0AFE60: stw     r0, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFE64:
    ctx->pc = 0x7F0AFE64u;
    // 7F0AFE64: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AFE68:
    ctx->pc = 0x7F0AFE68u;
    // 7F0AFE68: addi    r4, r4, 280
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(280);

label_7F0AFE6C:
    ctx->pc = 0x7F0AFE6Cu;
    // 7F0AFE6C: stw     r10, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0AFE70:
    ctx->pc = 0x7F0AFE70u;
    // 7F0AFE70: lwz     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFE74:
    ctx->pc = 0x7F0AFE74u;
    // 7F0AFE74: lwz     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFE78:
    ctx->pc = 0x7F0AFE78u;
    // 7F0AFE78: stw     r7, 40(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFE7C:
    ctx->pc = 0x7F0AFE7Cu;
    // 7F0AFE7C: stw     r5, 44(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AFE80:
    ctx->pc = 0x7F0AFE80u;
    // 7F0AFE80: lwz     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0AFE84:
    ctx->pc = 0x7F0AFE84u;
    // 7F0AFE84: lwz     r7, 40(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFE88:
    ctx->pc = 0x7F0AFE88u;
    // 7F0AFE88: lwz     r5, 44(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFE8C:
    ctx->pc = 0x7F0AFE8Cu;
    // 7F0AFE8C: stw     r7, 32(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFE90:
    ctx->pc = 0x7F0AFE90u;
    // 7F0AFE90: stw     r5, 36(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AFE94:
    ctx->pc = 0x7F0AFE94u;
    // 7F0AFE94: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFE94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFE98:
    ctx->pc = 0x7F0AFE98u;
    // 7F0AFE98: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFE9C:
    ctx->pc = 0x7F0AFE9Cu;
    // 7F0AFE9C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFE9Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AFEA0:
    ctx->pc = 0x7F0AFEA0u;
    // 7F0AFEA0: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AFEA4:
    ctx->pc = 0x7F0AFEA4u;
    // 7F0AFEA4: lwz     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFEA8:
    ctx->pc = 0x7F0AFEA8u;
    // 7F0AFEA8: stw     r7, 268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFEAC:
    ctx->pc = 0x7F0AFEACu;
    // 7F0AFEAC: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFEB0:
    ctx->pc = 0x7F0AFEB0u;
    // 7F0AFEB0: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFEB4:
    ctx->pc = 0x7F0AFEB4u;
    // 7F0AFEB4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEB4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AFEB8:
    ctx->pc = 0x7F0AFEB8u;
    // 7F0AFEB8: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AFEBC:
    ctx->pc = 0x7F0AFEBCu;
    // 7F0AFEBC: lwz     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFEC0:
    ctx->pc = 0x7F0AFEC0u;
    // 7F0AFEC0: stw     r7, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFEC4:
    ctx->pc = 0x7F0AFEC4u;
    // 7F0AFEC4: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFEC8:
    ctx->pc = 0x7F0AFEC8u;
    // 7F0AFEC8: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFECC:
    ctx->pc = 0x7F0AFECCu;
    // 7F0AFECC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AFECCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0AFED0:
    ctx->pc = 0x7F0AFED0u;
    // 7F0AFED0: stfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFED0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0AFED4:
    ctx->pc = 0x7F0AFED4u;
    // 7F0AFED4: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFED8:
    ctx->pc = 0x7F0AFED8u;
    // 7F0AFED8: stw     r7, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFEDC:
    ctx->pc = 0x7F0AFEDCu;
    // 7F0AFEDC: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFEE0:
    ctx->pc = 0x7F0AFEE0u;
    // 7F0AFEE0: lfs     f1, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AFEE4:
    ctx->pc = 0x7F0AFEE4u;
    // 7F0AFEE4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEE4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0AFEE8:
    ctx->pc = 0x7F0AFEE8u;
    // 7F0AFEE8: stfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AFEE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AFEEC:
    ctx->pc = 0x7F0AFEECu;
    // 7F0AFEEC: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFEF0:
    ctx->pc = 0x7F0AFEF0u;
    // 7F0AFEF0: sth     r6, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0AFEF4:
    ctx->pc = 0x7F0AFEF4u;
    // 7F0AFEF4: lwz     r7, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFEF8:
    ctx->pc = 0x7F0AFEF8u;
    // 7F0AFEF8: lwz     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AFEFC:
    ctx->pc = 0x7F0AFEFCu;
    // 7F0AFEFC: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFF00:
    ctx->pc = 0x7F0AFF00u;
    // 7F0AFF00: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFF04:
    ctx->pc = 0x7F0AFF04u;
    // 7F0AFF04: stw     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AFF08:
    ctx->pc = 0x7F0AFF08u;
    // 7F0AFF08: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFF0C:
    ctx->pc = 0x7F0AFF0Cu;
    // 7F0AFF0C: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AFF10:
    ctx->pc = 0x7F0AFF10u;
    // 7F0AFF10: stw     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFF14:
    ctx->pc = 0x7F0AFF14u;
    // 7F0AFF14: stw     r6, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0AFF18:
    ctx->pc = 0x7F0AFF18u;
    // 7F0AFF18: lha     r6, 98(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(98);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AFF1C:
    ctx->pc = 0x7F0AFF1Cu;
    // 7F0AFF1C: rlwinm r6, r6, 0, 20, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000FFFu;
    }

label_7F0AFF20:
    ctx->pc = 0x7F0AFF20u;
    // 7F0AFF20: sth     r6, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0AFF24:
    ctx->pc = 0x7F0AFF24u;
    // 7F0AFF24: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFF28:
    ctx->pc = 0x7F0AFF28u;
    // 7F0AFF28: lhz     r3, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F0AFF2C:
    ctx->pc = 0x7F0AFF2Cu;
    // 7F0AFF2C: ori     r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | 0x0002u;

label_7F0AFF30:
    ctx->pc = 0x7F0AFF30u;
    // 7F0AFF30: sth     r3, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0AFF34:
    ctx->pc = 0x7F0AFF34u;
    // 7F0AFF34: lwz     r5, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFF38:
    ctx->pc = 0x7F0AFF38u;
    // 7F0AFF38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AFF3C:
    loop_7F0AFF3C(ctx);
    if (ctx->pc == 0x7F0AFF50u) goto label_7F0AFF50;
    return;
label_7F0AFF40:
    ctx->pc = 0x7F0AFF40u;
    // 7F0AFF40: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F0AFF44:
    ctx->pc = 0x7F0AFF44u;
    // 7F0AFF44: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AFF48:
    ctx->pc = 0x7F0AFF48u;
    // 7F0AFF48: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F0AFF4C:
    // 7F0AFF4C: bc    16, 0, 0x7F0AFF3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AFF3Cu;
                return;
            }
            goto label_7F0AFF3C;
        }
    }

label_7F0AFF50:
    ctx->pc = 0x7F0AFF50u;
    ctx->downcount -= 16;
    // 7F0AFF50: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AFF54:
    ctx->pc = 0x7F0AFF54u;
    // 7F0AFF54: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFF58:
    ctx->pc = 0x7F0AFF58u;
    // 7F0AFF58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AFF5C:
    ctx->pc = 0x7F0AFF5Cu;
    // 7F0AFF5C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0AFF60:
    ctx->pc = 0x7F0AFF60u;
    // 7F0AFF60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFF64:
    ctx->pc = 0x7F0AFF64u;
    ctx->downcount -= 1;
    // 7F0AFF64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0AC0EC;
        }
    }

label_7F0AFF68:
    ctx->pc = 0x7F0AFF68u;
    ctx->downcount -= 18;
    // 7F0AFF68: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AFF6C:
    ctx->pc = 0x7F0AFF6Cu;
    // 7F0AFF6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AFF70:
    ctx->pc = 0x7F0AFF70u;
    // 7F0AFF70: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFF74:
    ctx->pc = 0x7F0AFF74u;
    // 7F0AFF74: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AFF78:
    ctx->pc = 0x7F0AFF78u;
    // 7F0AFF78: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AFF7C:
    ctx->pc = 0x7F0AFF7Cu;
    // 7F0AFF7C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AFF80:
    ctx->pc = 0x7F0AFF80u;
    // 7F0AFF80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AFF84:
    ctx->pc = 0x7F0AFF84u;
    // 7F0AFF84: bl      0x7F170008
    {
            ctx->lr = 0x7F0AFF88u;
            ctx->pc = 0x7F170008u;
            return;
    }

label_7F0AFF88:
    ctx->pc = 0x7F0AFF88u;
    ctx->downcount -= 4;
    // 7F0AFF88: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AFF8C:
    ctx->pc = 0x7F0AFF8Cu;
    // 7F0AFF8C: li      r4, 516
    ctx->gpr[4] = (u32)(s32)(516);

label_7F0AFF90:
    ctx->pc = 0x7F0AFF90u;
    // 7F0AFF90: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0AFF94:
    ctx->pc = 0x7F0AFF94u;
    // 7F0AFF94: bl      0x7F3C9120
    {
            ctx->lr = 0x7F0AFF98u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F0AFF98:
    ctx->pc = 0x7F0AFF98u;
    ctx->downcount -= 7;
    // 7F0AFF98: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFF9C:
    ctx->pc = 0x7F0AFF9Cu;
    // 7F0AFF9C: addi    r31, r29, 64
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(64);

label_7F0AFFA0:
    ctx->pc = 0x7F0AFFA0u;
    // 7F0AFFA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AFFA4:
    ctx->pc = 0x7F0AFFA4u;
    // 7F0AFFA4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AFFA8:
    ctx->pc = 0x7F0AFFA8u;
    // 7F0AFFA8: lwz     r5, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AFFAC:
    ctx->pc = 0x7F0AFFACu;
    // 7F0AFFAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AFFB0:
    ctx->pc = 0x7F0AFFB0u;
    // 7F0AFFB0: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0AFFB4u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0AFFB4:
    ctx->pc = 0x7F0AFFB4u;
    ctx->downcount -= 2;
    // 7F0AFFB4: cmpwi   r3, 0
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

label_7F0AFFB8:
    ctx->pc = 0x7F0AFFB8u;
    // 7F0AFFB8: bc    4, 0, 0x7F0AFFC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AFFC4;
        }
    }

label_7F0AFFBC:
    ctx->pc = 0x7F0AFFBCu;
    ctx->downcount -= 2;
    // 7F0AFFBC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0AFFC0:
    ctx->pc = 0x7F0AFFC0u;
    // 7F0AFFC0: b       0x7F0B0170
    {
            ctx->pc = 0x7F0B0170u;
            return;
    }

label_7F0AFFC4:
    ctx->pc = 0x7F0AFFC4u;
    ctx->downcount -= 19;
    // 7F0AFFC4: lwz     r8, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0AFFC8:
    ctx->pc = 0x7F0AFFC8u;
    // 7F0AFFC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AFFCC:
    ctx->pc = 0x7F0AFFCCu;
    // 7F0AFFCC: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F0AFFD0:
    ctx->pc = 0x7F0AFFD0u;
    // 7F0AFFD0: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F0AFFD4:
    ctx->pc = 0x7F0AFFD4u;
    // 7F0AFFD4: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFFD8:
    ctx->pc = 0x7F0AFFD8u;
    // 7F0AFFD8: li      r6, 450
    ctx->gpr[6] = (u32)(s32)(450);

label_7F0AFFDC:
    ctx->pc = 0x7F0AFFDCu;
    // 7F0AFFDC: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFFE0:
    ctx->pc = 0x7F0AFFE0u;
    // 7F0AFFE0: stw     r7, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFFE4:
    ctx->pc = 0x7F0AFFE4u;
    // 7F0AFFE4: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFFE8:
    ctx->pc = 0x7F0AFFE8u;
    // 7F0AFFE8: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AFFEC:
    ctx->pc = 0x7F0AFFECu;
    // 7F0AFFEC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AFFF0:
    ctx->pc = 0x7F0AFFF0u;
    // 7F0AFFF0: stw     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0AFFF4:
    ctx->pc = 0x7F0AFFF4u;
    // 7F0AFFF4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AFFF8:
    ctx->pc = 0x7F0AFFF8u;
    // 7F0AFFF8: lwz     r8, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0AFFFC:
    ctx->pc = 0x7F0AFFFCu;
    // 7F0AFFFC: lwz     r7, 32(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B0000:
    ctx->pc = 0x7F0B0000u;
    // 7F0B0000: lwz     r0, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0004:
    ctx->pc = 0x7F0B0004u;
    // 7F0B0004: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B0008:
    ctx->pc = 0x7F0B0008u;
    // 7F0B0008: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B000C:
    ctx->pc = 0x7F0B000Cu;
    // 7F0B000C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F0B0010u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F0B0010:
    ctx->pc = 0x7F0B0010u;
    ctx->downcount -= 3;
    // 7F0B0010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0014:
    ctx->pc = 0x7F0B0014u;
    // 7F0B0014: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0018:
    ctx->pc = 0x7F0B0018u;
    // 7F0B0018: bl      0x7F024060
    {
            ctx->lr = 0x7F0B001Cu;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F0B001C:
    ctx->pc = 0x7F0B001Cu;
    ctx->downcount -= 2;
    // 7F0B001C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0020:
    ctx->pc = 0x7F0B0020u;
    // 7F0B0020: bl      0x7F023FEC
    {
            ctx->lr = 0x7F0B0024u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F0B0024:
    ctx->pc = 0x7F0B0024u;
    ctx->downcount -= 8;
    // 7F0B0024: addi    r30, r29, 464
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(464);

label_7F0B0028:
    ctx->pc = 0x7F0B0028u;
    // 7F0B0028: lis     r4, 248
    ctx->gpr[4] = ((u32)(s32)(248) << 16);

label_7F0B002C:
    ctx->pc = 0x7F0B002Cu;
    // 7F0B002C: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0B0030:
    ctx->pc = 0x7F0B0030u;
    // 7F0B0030: addi    r28, r29, 1052
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(1052);

label_7F0B0034:
    ctx->pc = 0x7F0B0034u;
    // 7F0B0034: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0038:
    ctx->pc = 0x7F0B0038u;
    // 7F0B0038: addi    r4, r4, -23006
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23006);

label_7F0B003C:
    ctx->pc = 0x7F0B003Cu;
    // 7F0B003C: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0B0040:
    ctx->pc = 0x7F0B0040u;
    // 7F0B0040: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B0044u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B0044:
    ctx->pc = 0x7F0B0044u;
    ctx->downcount -= 6;
    // 7F0B0044: lis     r4, 64
    ctx->gpr[4] = ((u32)(s32)(64) << 16);

label_7F0B0048:
    ctx->pc = 0x7F0B0048u;
    // 7F0B0048: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B004C:
    ctx->pc = 0x7F0B004Cu;
    // 7F0B004C: addi    r5, r4, 27875
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27875);

label_7F0B0050:
    ctx->pc = 0x7F0B0050u;
    // 7F0B0050: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0054:
    ctx->pc = 0x7F0B0054u;
    // 7F0B0054: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0B0058:
    ctx->pc = 0x7F0B0058u;
    // 7F0B0058: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0B005Cu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0B005C:
    ctx->pc = 0x7F0B005Cu;
    ctx->downcount -= 3;
    // 7F0B005C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0060:
    ctx->pc = 0x7F0B0060u;
    // 7F0B0060: addi    r4, r29, 916
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(916);

label_7F0B0064:
    ctx->pc = 0x7F0B0064u;
    // 7F0B0064: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B0068u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B0068:
    ctx->pc = 0x7F0B0068u;
    ctx->downcount -= 8;
    // 7F0B0068: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B006C:
    ctx->pc = 0x7F0B006Cu;
    // 7F0B006C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0070:
    ctx->pc = 0x7F0B0070u;
    // 7F0B0070: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B0074:
    ctx->pc = 0x7F0B0074u;
    // 7F0B0074: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B0078:
    ctx->pc = 0x7F0B0078u;
    // 7F0B0078: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B007C:
    ctx->pc = 0x7F0B007Cu;
    // 7F0B007C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B0080:
    ctx->pc = 0x7F0B0080u;
    // 7F0B0080: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B0084:
    ctx->pc = 0x7F0B0084u;
    // 7F0B0084: bl      0x7F042C94
    {
            ctx->lr = 0x7F0B0088u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0B0088:
    ctx->pc = 0x7F0B0088u;
    ctx->downcount -= 5;
    // 7F0B0088: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F0B008C:
    ctx->pc = 0x7F0B008Cu;
    // 7F0B008C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B0090:
    ctx->pc = 0x7F0B0090u;
    // 7F0B0090: addi    r4, r4, -27361
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27361);

label_7F0B0094:
    ctx->pc = 0x7F0B0094u;
    // 7F0B0094: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0B0098:
    ctx->pc = 0x7F0B0098u;
    // 7F0B0098: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B009Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B009C:
    ctx->pc = 0x7F0B009Cu;
    ctx->downcount -= 3;
    // 7F0B009C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B00A0:
    ctx->pc = 0x7F0B00A0u;
    // 7F0B00A0: addi    r4, r29, 916
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(916);

label_7F0B00A4:
    ctx->pc = 0x7F0B00A4u;
    // 7F0B00A4: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B00A8u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B00A8:
    ctx->pc = 0x7F0B00A8u;
    ctx->downcount -= 3;
    // 7F0B00A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B00AC:
    ctx->pc = 0x7F0B00ACu;
    // 7F0B00AC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B00B0:
    ctx->pc = 0x7F0B00B0u;
    // 7F0B00B0: bl      0x7F023E5C
    {
            ctx->lr = 0x7F0B00B4u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F0B00B4:
    ctx->pc = 0x7F0B00B4u;
    ctx->downcount -= 2;
    // 7F0B00B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B00B8:
    ctx->pc = 0x7F0B00B8u;
    // 7F0B00B8: bl      0x7F0AFF64
    {
            ctx->lr = 0x7F0B00BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AFF64u;
                return;
            }
            goto label_7F0AFF64;
    }

label_7F0B00BC:
    ctx->pc = 0x7F0B00BCu;
    ctx->downcount -= 12;
    // 7F0B00BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B00C0:
    ctx->pc = 0x7F0B00C0u;
    // 7F0B00C0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0B00C4:
    ctx->pc = 0x7F0B00C4u;
    // 7F0B00C4: sth     r8, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0B00C8:
    ctx->pc = 0x7F0B00C8u;
    // 7F0B00C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0B00CC:
    ctx->pc = 0x7F0B00CCu;
    // 7F0B00CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B00D0:
    ctx->pc = 0x7F0B00D0u;
    // 7F0B00D0: addi    r7, r5, 13880
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(13880);

label_7F0B00D4:
    ctx->pc = 0x7F0B00D4u;
    // 7F0B00D4: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B00D8:
    ctx->pc = 0x7F0B00D8u;
    // 7F0B00D8: addi    r6, r4, -5872
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5872);

label_7F0B00DC:
    ctx->pc = 0x7F0B00DCu;
    // 7F0B00DC: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0B00E0:
    ctx->pc = 0x7F0B00E0u;
    // 7F0B00E0: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F0B00E4:
    ctx->pc = 0x7F0B00E4u;
    // 7F0B00E4: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B00E8:
    ctx->pc = 0x7F0B00E8u;
    // 7F0B00E8: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0B00ECu;
    return;
return_dispatch_7F0AC0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0AC148u: goto label_7F0AC148;
    case 0x7F0AC27Cu: goto label_7F0AC27C;
    case 0x7F0AC29Cu: goto label_7F0AC29C;
    case 0x7F0AC2BCu: goto label_7F0AC2BC;
    case 0x7F0AC2CCu: goto label_7F0AC2CC;
    case 0x7F0AC2F0u: goto label_7F0AC2F0;
    case 0x7F0AC300u: goto label_7F0AC300;
    case 0x7F0AC38Cu: goto label_7F0AC38C;
    case 0x7F0AC3F8u: goto label_7F0AC3F8;
    case 0x7F0AC414u: goto label_7F0AC414;
    case 0x7F0AC424u: goto label_7F0AC424;
    case 0x7F0AC42Cu: goto label_7F0AC42C;
    case 0x7F0AC464u: goto label_7F0AC464;
    case 0x7F0AC474u: goto label_7F0AC474;
    case 0x7F0AC4A4u: goto label_7F0AC4A4;
    case 0x7F0AC4ACu: goto label_7F0AC4AC;
    case 0x7F0AC4CCu: goto label_7F0AC4CC;
    case 0x7F0AC4E8u: goto label_7F0AC4E8;
    case 0x7F0AC50Cu: goto label_7F0AC50C;
    case 0x7F0AC51Cu: goto label_7F0AC51C;
    case 0x7F0AC524u: goto label_7F0AC524;
    case 0x7F0AC534u: goto label_7F0AC534;
    case 0x7F0AC560u: goto label_7F0AC560;
    case 0x7F0AC56Cu: goto label_7F0AC56C;
    case 0x7F0AC59Cu: goto label_7F0AC59C;
    case 0x7F0AC5A4u: goto label_7F0AC5A4;
    case 0x7F0AC5C4u: goto label_7F0AC5C4;
    case 0x7F0AC5CCu: goto label_7F0AC5CC;
    case 0x7F0AC5DCu: goto label_7F0AC5DC;
    case 0x7F0AC614u: goto label_7F0AC614;
    case 0x7F0AC620u: goto label_7F0AC620;
    case 0x7F0AC650u: goto label_7F0AC650;
    case 0x7F0AC658u: goto label_7F0AC658;
    case 0x7F0AC678u: goto label_7F0AC678;
    case 0x7F0AC680u: goto label_7F0AC680;
    case 0x7F0AC690u: goto label_7F0AC690;
    case 0x7F0AC6A0u: goto label_7F0AC6A0;
    case 0x7F0AC6D8u: goto label_7F0AC6D8;
    case 0x7F0AC708u: goto label_7F0AC708;
    case 0x7F0AC710u: goto label_7F0AC710;
    case 0x7F0AC730u: goto label_7F0AC730;
    case 0x7F0AC738u: goto label_7F0AC738;
    case 0x7F0AC770u: goto label_7F0AC770;
    case 0x7F0AC784u: goto label_7F0AC784;
    case 0x7F0AC7B4u: goto label_7F0AC7B4;
    case 0x7F0AC7BCu: goto label_7F0AC7BC;
    case 0x7F0AC7DCu: goto label_7F0AC7DC;
    case 0x7F0AC7E4u: goto label_7F0AC7E4;
    case 0x7F0AC81Cu: goto label_7F0AC81C;
    case 0x7F0AC830u: goto label_7F0AC830;
    case 0x7F0AC868u: goto label_7F0AC868;
    case 0x7F0AC890u: goto label_7F0AC890;
    case 0x7F0AC8B8u: goto label_7F0AC8B8;
    case 0x7F0AC918u: goto label_7F0AC918;
    case 0x7F0AC974u: goto label_7F0AC974;
    case 0x7F0AC988u: goto label_7F0AC988;
    case 0x7F0AC9B4u: goto label_7F0AC9B4;
    case 0x7F0AC9C4u: goto label_7F0AC9C4;
    case 0x7F0AC9CCu: goto label_7F0AC9CC;
    case 0x7F0ACA04u: goto label_7F0ACA04;
    case 0x7F0ACA14u: goto label_7F0ACA14;
    case 0x7F0ACA64u: goto label_7F0ACA64;
    case 0x7F0ACAC0u: goto label_7F0ACAC0;
    case 0x7F0ACB20u: goto label_7F0ACB20;
    case 0x7F0ACB3Cu: goto label_7F0ACB3C;
    case 0x7F0ACB50u: goto label_7F0ACB50;
    case 0x7F0ACBB0u: goto label_7F0ACBB0;
    case 0x7F0ACBDCu: goto label_7F0ACBDC;
    case 0x7F0ACC54u: goto label_7F0ACC54;
    case 0x7F0ACCDCu: goto label_7F0ACCDC;
    case 0x7F0ACCECu: goto label_7F0ACCEC;
    case 0x7F0ACD30u: goto label_7F0ACD30;
    case 0x7F0ACD58u: goto label_7F0ACD58;
    case 0x7F0ACD70u: goto label_7F0ACD70;
    case 0x7F0ACDB8u: goto label_7F0ACDB8;
    case 0x7F0ACDD0u: goto label_7F0ACDD0;
    case 0x7F0ACE2Cu: goto label_7F0ACE2C;
    case 0x7F0ACE6Cu: goto label_7F0ACE6C;
    case 0x7F0ACE7Cu: goto label_7F0ACE7C;
    case 0x7F0ACEB8u: goto label_7F0ACEB8;
    case 0x7F0ACECCu: goto label_7F0ACECC;
    case 0x7F0ACEDCu: goto label_7F0ACEDC;
    case 0x7F0ACEFCu: goto label_7F0ACEFC;
    case 0x7F0ACF0Cu: goto label_7F0ACF0C;
    case 0x7F0ACF3Cu: goto label_7F0ACF3C;
    case 0x7F0ACF50u: goto label_7F0ACF50;
    case 0x7F0ACF74u: goto label_7F0ACF74;
    case 0x7F0ACF8Cu: goto label_7F0ACF8C;
    case 0x7F0AD010u: goto label_7F0AD010;
    case 0x7F0AD0ACu: goto label_7F0AD0AC;
    case 0x7F0AD0CCu: goto label_7F0AD0CC;
    case 0x7F0AD11Cu: goto label_7F0AD11C;
    case 0x7F0AD138u: goto label_7F0AD138;
    case 0x7F0AD148u: goto label_7F0AD148;
    case 0x7F0AD158u: goto label_7F0AD158;
    case 0x7F0AD164u: goto label_7F0AD164;
    case 0x7F0AD190u: goto label_7F0AD190;
    case 0x7F0AD1B4u: goto label_7F0AD1B4;
    case 0x7F0AD1DCu: goto label_7F0AD1DC;
    case 0x7F0AD22Cu: goto label_7F0AD22C;
    case 0x7F0AD248u: goto label_7F0AD248;
    case 0x7F0AD254u: goto label_7F0AD254;
    case 0x7F0AD264u: goto label_7F0AD264;
    case 0x7F0AD274u: goto label_7F0AD274;
    case 0x7F0AD284u: goto label_7F0AD284;
    case 0x7F0AD298u: goto label_7F0AD298;
    case 0x7F0AD2A4u: goto label_7F0AD2A4;
    case 0x7F0AD2F4u: goto label_7F0AD2F4;
    case 0x7F0AD330u: goto label_7F0AD330;
    case 0x7F0AD340u: goto label_7F0AD340;
    case 0x7F0AD3B8u: goto label_7F0AD3B8;
    case 0x7F0AD400u: goto label_7F0AD400;
    case 0x7F0AD40Cu: goto label_7F0AD40C;
    case 0x7F0AD64Cu: goto label_7F0AD64C;
    case 0x7F0AD670u: goto label_7F0AD670;
    case 0x7F0AD6F4u: goto label_7F0AD6F4;
    case 0x7F0AD75Cu: goto label_7F0AD75C;
    case 0x7F0AD774u: goto label_7F0AD774;
    case 0x7F0AD79Cu: goto label_7F0AD79C;
    case 0x7F0AD7B4u: goto label_7F0AD7B4;
    case 0x7F0AD7D8u: goto label_7F0AD7D8;
    case 0x7F0AD800u: goto label_7F0AD800;
    case 0x7F0AD818u: goto label_7F0AD818;
    case 0x7F0AD830u: goto label_7F0AD830;
    case 0x7F0AD898u: goto label_7F0AD898;
    case 0x7F0AD8B4u: goto label_7F0AD8B4;
    case 0x7F0AD8D4u: goto label_7F0AD8D4;
    case 0x7F0AD8E4u: goto label_7F0AD8E4;
    case 0x7F0AD8F0u: goto label_7F0AD8F0;
    case 0x7F0AD8FCu: goto label_7F0AD8FC;
    case 0x7F0AD96Cu: goto label_7F0AD96C;
    case 0x7F0AD9BCu: goto label_7F0AD9BC;
    case 0x7F0ADA2Cu: goto label_7F0ADA2C;
    case 0x7F0ADA44u: goto label_7F0ADA44;
    case 0x7F0ADA7Cu: goto label_7F0ADA7C;
    case 0x7F0ADA90u: goto label_7F0ADA90;
    case 0x7F0ADAA8u: goto label_7F0ADAA8;
    case 0x7F0ADAB0u: goto label_7F0ADAB0;
    case 0x7F0ADAB8u: goto label_7F0ADAB8;
    case 0x7F0ADAC0u: goto label_7F0ADAC0;
    case 0x7F0ADAE0u: goto label_7F0ADAE0;
    case 0x7F0ADAFCu: goto label_7F0ADAFC;
    case 0x7F0ADB24u: goto label_7F0ADB24;
    case 0x7F0ADB68u: goto label_7F0ADB68;
    case 0x7F0ADBACu: goto label_7F0ADBAC;
    case 0x7F0ADBC8u: goto label_7F0ADBC8;
    case 0x7F0ADC48u: goto label_7F0ADC48;
    case 0x7F0ADC90u: goto label_7F0ADC90;
    case 0x7F0ADCA8u: goto label_7F0ADCA8;
    case 0x7F0ADCC0u: goto label_7F0ADCC0;
    case 0x7F0ADCD8u: goto label_7F0ADCD8;
    case 0x7F0ADCF4u: goto label_7F0ADCF4;
    case 0x7F0ADD00u: goto label_7F0ADD00;
    case 0x7F0ADD58u: goto label_7F0ADD58;
    case 0x7F0ADD64u: goto label_7F0ADD64;
    case 0x7F0ADDB0u: goto label_7F0ADDB0;
    case 0x7F0ADDBCu: goto label_7F0ADDBC;
    case 0x7F0ADDF8u: goto label_7F0ADDF8;
    case 0x7F0ADE00u: goto label_7F0ADE00;
    case 0x7F0ADE08u: goto label_7F0ADE08;
    case 0x7F0ADE48u: goto label_7F0ADE48;
    case 0x7F0ADFA8u: goto label_7F0ADFA8;
    case 0x7F0ADFACu: goto label_7F0ADFAC;
    case 0x7F0ADFB4u: goto label_7F0ADFB4;
    case 0x7F0ADFCCu: goto label_7F0ADFCC;
    case 0x7F0ADFE4u: goto label_7F0ADFE4;
    case 0x7F0AE038u: goto label_7F0AE038;
    case 0x7F0AE0ACu: goto label_7F0AE0AC;
    case 0x7F0AE144u: goto label_7F0AE144;
    case 0x7F0AE158u: goto label_7F0AE158;
    case 0x7F0AE164u: goto label_7F0AE164;
    case 0x7F0AE168u: goto label_7F0AE168;
    case 0x7F0AE18Cu: goto label_7F0AE18C;
    case 0x7F0AE1A4u: goto label_7F0AE1A4;
    case 0x7F0AE1BCu: goto label_7F0AE1BC;
    case 0x7F0AE220u: goto label_7F0AE220;
    case 0x7F0AE22Cu: goto label_7F0AE22C;
    case 0x7F0AE27Cu: goto label_7F0AE27C;
    case 0x7F0AE284u: goto label_7F0AE284;
    case 0x7F0AE298u: goto label_7F0AE298;
    case 0x7F0AE2E8u: goto label_7F0AE2E8;
    case 0x7F0AE304u: goto label_7F0AE304;
    case 0x7F0AE314u: goto label_7F0AE314;
    case 0x7F0AE340u: goto label_7F0AE340;
    case 0x7F0AE358u: goto label_7F0AE358;
    case 0x7F0AE370u: goto label_7F0AE370;
    case 0x7F0AE388u: goto label_7F0AE388;
    case 0x7F0AE478u: goto label_7F0AE478;
    case 0x7F0AE484u: goto label_7F0AE484;
    case 0x7F0AE4C8u: goto label_7F0AE4C8;
    case 0x7F0AE4D4u: goto label_7F0AE4D4;
    case 0x7F0AE518u: goto label_7F0AE518;
    case 0x7F0AE524u: goto label_7F0AE524;
    case 0x7F0AE594u: goto label_7F0AE594;
    case 0x7F0AE5BCu: goto label_7F0AE5BC;
    case 0x7F0AE5C8u: goto label_7F0AE5C8;
    case 0x7F0AE618u: goto label_7F0AE618;
    case 0x7F0AE64Cu: goto label_7F0AE64C;
    case 0x7F0AE668u: goto label_7F0AE668;
    case 0x7F0AE684u: goto label_7F0AE684;
    case 0x7F0AE6A0u: goto label_7F0AE6A0;
    case 0x7F0AE6BCu: goto label_7F0AE6BC;
    case 0x7F0AE700u: goto label_7F0AE700;
    case 0x7F0AE708u: goto label_7F0AE708;
    case 0x7F0AE748u: goto label_7F0AE748;
    case 0x7F0AE75Cu: goto label_7F0AE75C;
    case 0x7F0AE780u: goto label_7F0AE780;
    case 0x7F0AE7D4u: goto label_7F0AE7D4;
    case 0x7F0AE818u: goto label_7F0AE818;
    case 0x7F0AE820u: goto label_7F0AE820;
    case 0x7F0AE84Cu: goto label_7F0AE84C;
    case 0x7F0AE888u: goto label_7F0AE888;
    case 0x7F0AE890u: goto label_7F0AE890;
    case 0x7F0AE8B4u: goto label_7F0AE8B4;
    case 0x7F0AE8F0u: goto label_7F0AE8F0;
    case 0x7F0AE8F8u: goto label_7F0AE8F8;
    case 0x7F0AE924u: goto label_7F0AE924;
    case 0x7F0AE960u: goto label_7F0AE960;
    case 0x7F0AE968u: goto label_7F0AE968;
    case 0x7F0AE994u: goto label_7F0AE994;
    case 0x7F0AE9D0u: goto label_7F0AE9D0;
    case 0x7F0AE9D8u: goto label_7F0AE9D8;
    case 0x7F0AE9FCu: goto label_7F0AE9FC;
    case 0x7F0AEA38u: goto label_7F0AEA38;
    case 0x7F0AEA40u: goto label_7F0AEA40;
    case 0x7F0AEA6Cu: goto label_7F0AEA6C;
    case 0x7F0AEAA8u: goto label_7F0AEAA8;
    case 0x7F0AEAB8u: goto label_7F0AEAB8;
    case 0x7F0AEADCu: goto label_7F0AEADC;
    case 0x7F0AEB34u: goto label_7F0AEB34;
    case 0x7F0AEB48u: goto label_7F0AEB48;
    case 0x7F0AEBA4u: goto label_7F0AEBA4;
    case 0x7F0AEBF8u: goto label_7F0AEBF8;
    case 0x7F0AEC00u: goto label_7F0AEC00;
    case 0x7F0AEC3Cu: goto label_7F0AEC3C;
    case 0x7F0AEC4Cu: goto label_7F0AEC4C;
    case 0x7F0AEC98u: goto label_7F0AEC98;
    case 0x7F0AECA4u: goto label_7F0AECA4;
    case 0x7F0AECACu: goto label_7F0AECAC;
    case 0x7F0AECB4u: goto label_7F0AECB4;
    case 0x7F0AECBCu: goto label_7F0AECBC;
    case 0x7F0AECD4u: goto label_7F0AECD4;
    case 0x7F0AECE0u: goto label_7F0AECE0;
    case 0x7F0AECE8u: goto label_7F0AECE8;
    case 0x7F0AECFCu: goto label_7F0AECFC;
    case 0x7F0AED40u: goto label_7F0AED40;
    case 0x7F0AEDA0u: goto label_7F0AEDA0;
    case 0x7F0AEDC4u: goto label_7F0AEDC4;
    case 0x7F0AEE30u: goto label_7F0AEE30;
    case 0x7F0AEE4Cu: goto label_7F0AEE4C;
    case 0x7F0AEE70u: goto label_7F0AEE70;
    case 0x7F0AEEE0u: goto label_7F0AEEE0;
    case 0x7F0AEEFCu: goto label_7F0AEEFC;
    case 0x7F0AEF10u: goto label_7F0AEF10;
    case 0x7F0AEF1Cu: goto label_7F0AEF1C;
    case 0x7F0AEF28u: goto label_7F0AEF28;
    case 0x7F0AEF34u: goto label_7F0AEF34;
    case 0x7F0AEF54u: goto label_7F0AEF54;
    case 0x7F0AEF5Cu: goto label_7F0AEF5C;
    case 0x7F0AEF98u: goto label_7F0AEF98;
    case 0x7F0AEFA0u: goto label_7F0AEFA0;
    case 0x7F0AEFB0u: goto label_7F0AEFB0;
    case 0x7F0AEFC4u: goto label_7F0AEFC4;
    case 0x7F0AEFCCu: goto label_7F0AEFCC;
    case 0x7F0AF010u: goto label_7F0AF010;
    case 0x7F0AF02Cu: goto label_7F0AF02C;
    case 0x7F0AF048u: goto label_7F0AF048;
    case 0x7F0AF058u: goto label_7F0AF058;
    case 0x7F0AF0D8u: goto label_7F0AF0D8;
    case 0x7F0AF1B8u: goto label_7F0AF1B8;
    case 0x7F0AF1C4u: goto label_7F0AF1C4;
    case 0x7F0AF1ECu: goto label_7F0AF1EC;
    case 0x7F0AF1F4u: goto label_7F0AF1F4;
    case 0x7F0AF32Cu: goto label_7F0AF32C;
    case 0x7F0AF33Cu: goto label_7F0AF33C;
    case 0x7F0AF350u: goto label_7F0AF350;
    case 0x7F0AF360u: goto label_7F0AF360;
    case 0x7F0AF46Cu: goto label_7F0AF46C;
    case 0x7F0AF4CCu: goto label_7F0AF4CC;
    case 0x7F0AF50Cu: goto label_7F0AF50C;
    case 0x7F0AF520u: goto label_7F0AF520;
    case 0x7F0AF530u: goto label_7F0AF530;
    case 0x7F0AF540u: goto label_7F0AF540;
    case 0x7F0AF54Cu: goto label_7F0AF54C;
    case 0x7F0AF554u: goto label_7F0AF554;
    case 0x7F0AF568u: goto label_7F0AF568;
    case 0x7F0AF574u: goto label_7F0AF574;
    case 0x7F0AF588u: goto label_7F0AF588;
    case 0x7F0AF59Cu: goto label_7F0AF59C;
    case 0x7F0AF5E0u: goto label_7F0AF5E0;
    case 0x7F0AF5E8u: goto label_7F0AF5E8;
    case 0x7F0AF628u: goto label_7F0AF628;
    case 0x7F0AF650u: goto label_7F0AF650;
    case 0x7F0AF660u: goto label_7F0AF660;
    case 0x7F0AF670u: goto label_7F0AF670;
    case 0x7F0AF6A8u: goto label_7F0AF6A8;
    case 0x7F0AF6D0u: goto label_7F0AF6D0;
    case 0x7F0AF730u: goto label_7F0AF730;
    case 0x7F0AF740u: goto label_7F0AF740;
    case 0x7F0AF778u: goto label_7F0AF778;
    case 0x7F0AF7A4u: goto label_7F0AF7A4;
    case 0x7F0AF7B8u: goto label_7F0AF7B8;
    case 0x7F0AF7C0u: goto label_7F0AF7C0;
    case 0x7F0AF7C8u: goto label_7F0AF7C8;
    case 0x7F0AF7DCu: goto label_7F0AF7DC;
    case 0x7F0AF7E8u: goto label_7F0AF7E8;
    case 0x7F0AF7F0u: goto label_7F0AF7F0;
    case 0x7F0AF804u: goto label_7F0AF804;
    case 0x7F0AF828u: goto label_7F0AF828;
    case 0x7F0AF85Cu: goto label_7F0AF85C;
    case 0x7F0AF874u: goto label_7F0AF874;
    case 0x7F0AF88Cu: goto label_7F0AF88C;
    case 0x7F0AF8A4u: goto label_7F0AF8A4;
    case 0x7F0AF8C0u: goto label_7F0AF8C0;
    case 0x7F0AF8D4u: goto label_7F0AF8D4;
    case 0x7F0AF92Cu: goto label_7F0AF92C;
    case 0x7F0AF93Cu: goto label_7F0AF93C;
    case 0x7F0AF94Cu: goto label_7F0AF94C;
    case 0x7F0AF988u: goto label_7F0AF988;
    case 0x7F0AF9B8u: goto label_7F0AF9B8;
    case 0x7F0AF9C8u: goto label_7F0AF9C8;
    case 0x7F0AF9ECu: goto label_7F0AF9EC;
    case 0x7F0AFA28u: goto label_7F0AFA28;
    case 0x7F0AFA40u: goto label_7F0AFA40;
    case 0x7F0AFA74u: goto label_7F0AFA74;
    case 0x7F0AFAA8u: goto label_7F0AFAA8;
    case 0x7F0AFB14u: goto label_7F0AFB14;
    case 0x7F0AFB28u: goto label_7F0AFB28;
    case 0x7F0AFBD8u: goto label_7F0AFBD8;
    case 0x7F0AFC4Cu: goto label_7F0AFC4C;
    case 0x7F0AFCF8u: goto label_7F0AFCF8;
    case 0x7F0AFD00u: goto label_7F0AFD00;
    case 0x7F0AFD0Cu: goto label_7F0AFD0C;
    case 0x7F0AFD14u: goto label_7F0AFD14;
    case 0x7F0AFD28u: goto label_7F0AFD28;
    case 0x7F0AFD68u: goto label_7F0AFD68;
    case 0x7F0AFF88u: goto label_7F0AFF88;
    case 0x7F0AFF98u: goto label_7F0AFF98;
    case 0x7F0AFFB4u: goto label_7F0AFFB4;
    case 0x7F0B0010u: goto label_7F0B0010;
    case 0x7F0B001Cu: goto label_7F0B001C;
    case 0x7F0B0024u: goto label_7F0B0024;
    case 0x7F0B0044u: goto label_7F0B0044;
    case 0x7F0B005Cu: goto label_7F0B005C;
    case 0x7F0B0068u: goto label_7F0B0068;
    case 0x7F0B0088u: goto label_7F0B0088;
    case 0x7F0B009Cu: goto label_7F0B009C;
    case 0x7F0B00A8u: goto label_7F0B00A8;
    case 0x7F0B00B4u: goto label_7F0B00B4;
    case 0x7F0B00BCu: goto label_7F0B00BC;
    default: return;
    }
}

