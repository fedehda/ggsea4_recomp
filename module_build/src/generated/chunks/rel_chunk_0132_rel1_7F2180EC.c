// DolRecomp output
#include "../generated.h"

static void loop_7F218CEC(CPUState* ctx) {
label_7F218CEC:
    ctx->downcount -= 11;
    ctx->pc = 0x7F218CECu;
    // 7F218CEC: lbz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    ctx->pc = 0x7F218CF0u;
    // 7F218CF0: lbz     r7, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

    // 7F218CF4: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    // 7F218CF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

    // 7F218CFC: rlwinm r0, r0, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

    // 7F218D00: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

    // 7F218D04: add   r0, r0, r8
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    // 7F218D08: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x7F218D0Cu;
    // 7F218D0C: stwx    r0, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F218D10: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    // 7F218D14: bc    16, 0, 0x7F218CEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218CECu;
                return;
            }
            goto label_7F218CEC;
        }
    }

    ctx->pc = 0x7F218D18u;
}

static void loop_7F21AA7C(CPUState* ctx) {
label_7F21AA7C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F21AA7Cu;
    // 7F21AA7C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F21AA80u;
    // 7F21AA80: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F21AA84u;
    // 7F21AA84: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F21AA88u;
    // 7F21AA88: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F21AA8C: bc    16, 0, 0x7F21AA7C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AA7Cu;
                return;
            }
            goto label_7F21AA7C;
        }
    }

    ctx->pc = 0x7F21AA90u;
}

static void loop_7F21AAA0(CPUState* ctx) {
label_7F21AAA0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F21AAA0u;
    // 7F21AAA0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F21AAA4u;
    // 7F21AAA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F21AAA8u;
    // 7F21AAA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F21AAACu;
    // 7F21AAAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F21AAB0: bc    16, 0, 0x7F21AAA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AAA0u;
                return;
            }
            goto label_7F21AAA0;
        }
    }

    ctx->pc = 0x7F21AAB4u;
}

static void loop_7F21ABC8(CPUState* ctx) {
label_7F21ABC8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F21ABC8u;
    // 7F21ABC8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F21ABCCu;
    // 7F21ABCC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F21ABD0u;
    // 7F21ABD0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F21ABD4u;
    // 7F21ABD4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F21ABD8: bc    16, 0, 0x7F21ABC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21ABC8u;
                return;
            }
            goto label_7F21ABC8;
        }
    }

    ctx->pc = 0x7F21ABDCu;
}

static void loop_7F21ABEC(CPUState* ctx) {
label_7F21ABEC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F21ABECu;
    // 7F21ABEC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F21ABF0u;
    // 7F21ABF0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F21ABF4u;
    // 7F21ABF4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F21ABF8u;
    // 7F21ABF8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F21ABFC: bc    16, 0, 0x7F21ABEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21ABECu;
                return;
            }
            goto label_7F21ABEC;
        }
    }

    ctx->pc = 0x7F21AC00u;
}

void func_7F2180EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2180ECu: goto label_7F2180EC;
    case 0x7F2180F0u: goto label_7F2180F0;
    case 0x7F2180F4u: goto label_7F2180F4;
    case 0x7F2180F8u: goto label_7F2180F8;
    case 0x7F2180FCu: goto label_7F2180FC;
    case 0x7F218100u: goto label_7F218100;
    case 0x7F218104u: goto label_7F218104;
    case 0x7F218108u: goto label_7F218108;
    case 0x7F21810Cu: goto label_7F21810C;
    case 0x7F218110u: goto label_7F218110;
    case 0x7F218114u: goto label_7F218114;
    case 0x7F218118u: goto label_7F218118;
    case 0x7F21811Cu: goto label_7F21811C;
    case 0x7F218120u: goto label_7F218120;
    case 0x7F218124u: goto label_7F218124;
    case 0x7F218128u: goto label_7F218128;
    case 0x7F21812Cu: goto label_7F21812C;
    case 0x7F218130u: goto label_7F218130;
    case 0x7F218134u: goto label_7F218134;
    case 0x7F218138u: goto label_7F218138;
    case 0x7F21813Cu: goto label_7F21813C;
    case 0x7F218140u: goto label_7F218140;
    case 0x7F218144u: goto label_7F218144;
    case 0x7F218148u: goto label_7F218148;
    case 0x7F21814Cu: goto label_7F21814C;
    case 0x7F218150u: goto label_7F218150;
    case 0x7F218154u: goto label_7F218154;
    case 0x7F218158u: goto label_7F218158;
    case 0x7F21815Cu: goto label_7F21815C;
    case 0x7F218160u: goto label_7F218160;
    case 0x7F218164u: goto label_7F218164;
    case 0x7F218168u: goto label_7F218168;
    case 0x7F21816Cu: goto label_7F21816C;
    case 0x7F218170u: goto label_7F218170;
    case 0x7F218174u: goto label_7F218174;
    case 0x7F218178u: goto label_7F218178;
    case 0x7F21817Cu: goto label_7F21817C;
    case 0x7F218180u: goto label_7F218180;
    case 0x7F218184u: goto label_7F218184;
    case 0x7F218188u: goto label_7F218188;
    case 0x7F21818Cu: goto label_7F21818C;
    case 0x7F218190u: goto label_7F218190;
    case 0x7F218194u: goto label_7F218194;
    case 0x7F218198u: goto label_7F218198;
    case 0x7F21819Cu: goto label_7F21819C;
    case 0x7F2181A0u: goto label_7F2181A0;
    case 0x7F2181A4u: goto label_7F2181A4;
    case 0x7F2181A8u: goto label_7F2181A8;
    case 0x7F2181ACu: goto label_7F2181AC;
    case 0x7F2181B0u: goto label_7F2181B0;
    case 0x7F2181B4u: goto label_7F2181B4;
    case 0x7F2181B8u: goto label_7F2181B8;
    case 0x7F2181BCu: goto label_7F2181BC;
    case 0x7F2181C0u: goto label_7F2181C0;
    case 0x7F2181C4u: goto label_7F2181C4;
    case 0x7F2181C8u: goto label_7F2181C8;
    case 0x7F2181CCu: goto label_7F2181CC;
    case 0x7F2181D0u: goto label_7F2181D0;
    case 0x7F2181D4u: goto label_7F2181D4;
    case 0x7F2181D8u: goto label_7F2181D8;
    case 0x7F2181DCu: goto label_7F2181DC;
    case 0x7F2181E0u: goto label_7F2181E0;
    case 0x7F2181E4u: goto label_7F2181E4;
    case 0x7F2181E8u: goto label_7F2181E8;
    case 0x7F2181ECu: goto label_7F2181EC;
    case 0x7F2181F0u: goto label_7F2181F0;
    case 0x7F2181F4u: goto label_7F2181F4;
    case 0x7F2181F8u: goto label_7F2181F8;
    case 0x7F2181FCu: goto label_7F2181FC;
    case 0x7F218200u: goto label_7F218200;
    case 0x7F218204u: goto label_7F218204;
    case 0x7F218208u: goto label_7F218208;
    case 0x7F21820Cu: goto label_7F21820C;
    case 0x7F218210u: goto label_7F218210;
    case 0x7F218214u: goto label_7F218214;
    case 0x7F218218u: goto label_7F218218;
    case 0x7F21821Cu: goto label_7F21821C;
    case 0x7F218220u: goto label_7F218220;
    case 0x7F218224u: goto label_7F218224;
    case 0x7F218228u: goto label_7F218228;
    case 0x7F21822Cu: goto label_7F21822C;
    case 0x7F218230u: goto label_7F218230;
    case 0x7F218234u: goto label_7F218234;
    case 0x7F218238u: goto label_7F218238;
    case 0x7F21823Cu: goto label_7F21823C;
    case 0x7F218240u: goto label_7F218240;
    case 0x7F218244u: goto label_7F218244;
    case 0x7F218248u: goto label_7F218248;
    case 0x7F21824Cu: goto label_7F21824C;
    case 0x7F218250u: goto label_7F218250;
    case 0x7F218254u: goto label_7F218254;
    case 0x7F218258u: goto label_7F218258;
    case 0x7F21825Cu: goto label_7F21825C;
    case 0x7F218260u: goto label_7F218260;
    case 0x7F218264u: goto label_7F218264;
    case 0x7F218268u: goto label_7F218268;
    case 0x7F21826Cu: goto label_7F21826C;
    case 0x7F218270u: goto label_7F218270;
    case 0x7F218274u: goto label_7F218274;
    case 0x7F218278u: goto label_7F218278;
    case 0x7F21827Cu: goto label_7F21827C;
    case 0x7F218280u: goto label_7F218280;
    case 0x7F218284u: goto label_7F218284;
    case 0x7F218288u: goto label_7F218288;
    case 0x7F21828Cu: goto label_7F21828C;
    case 0x7F218290u: goto label_7F218290;
    case 0x7F218294u: goto label_7F218294;
    case 0x7F218298u: goto label_7F218298;
    case 0x7F21829Cu: goto label_7F21829C;
    case 0x7F2182A0u: goto label_7F2182A0;
    case 0x7F2182A4u: goto label_7F2182A4;
    case 0x7F2182A8u: goto label_7F2182A8;
    case 0x7F2182ACu: goto label_7F2182AC;
    case 0x7F2182B0u: goto label_7F2182B0;
    case 0x7F2182B4u: goto label_7F2182B4;
    case 0x7F2182B8u: goto label_7F2182B8;
    case 0x7F2182BCu: goto label_7F2182BC;
    case 0x7F2182C0u: goto label_7F2182C0;
    case 0x7F2182C4u: goto label_7F2182C4;
    case 0x7F2182C8u: goto label_7F2182C8;
    case 0x7F2182CCu: goto label_7F2182CC;
    case 0x7F2182D0u: goto label_7F2182D0;
    case 0x7F2182D4u: goto label_7F2182D4;
    case 0x7F2182D8u: goto label_7F2182D8;
    case 0x7F2182DCu: goto label_7F2182DC;
    case 0x7F2182E0u: goto label_7F2182E0;
    case 0x7F2182E4u: goto label_7F2182E4;
    case 0x7F2182E8u: goto label_7F2182E8;
    case 0x7F2182ECu: goto label_7F2182EC;
    case 0x7F2182F0u: goto label_7F2182F0;
    case 0x7F2182F4u: goto label_7F2182F4;
    case 0x7F2182F8u: goto label_7F2182F8;
    case 0x7F2182FCu: goto label_7F2182FC;
    case 0x7F218300u: goto label_7F218300;
    case 0x7F218304u: goto label_7F218304;
    case 0x7F218308u: goto label_7F218308;
    case 0x7F21830Cu: goto label_7F21830C;
    case 0x7F218310u: goto label_7F218310;
    case 0x7F218314u: goto label_7F218314;
    case 0x7F218318u: goto label_7F218318;
    case 0x7F21831Cu: goto label_7F21831C;
    case 0x7F218320u: goto label_7F218320;
    case 0x7F218324u: goto label_7F218324;
    case 0x7F218328u: goto label_7F218328;
    case 0x7F21832Cu: goto label_7F21832C;
    case 0x7F218330u: goto label_7F218330;
    case 0x7F218334u: goto label_7F218334;
    case 0x7F218338u: goto label_7F218338;
    case 0x7F21833Cu: goto label_7F21833C;
    case 0x7F218340u: goto label_7F218340;
    case 0x7F218344u: goto label_7F218344;
    case 0x7F218348u: goto label_7F218348;
    case 0x7F21834Cu: goto label_7F21834C;
    case 0x7F218350u: goto label_7F218350;
    case 0x7F218354u: goto label_7F218354;
    case 0x7F218358u: goto label_7F218358;
    case 0x7F21835Cu: goto label_7F21835C;
    case 0x7F218360u: goto label_7F218360;
    case 0x7F218364u: goto label_7F218364;
    case 0x7F218368u: goto label_7F218368;
    case 0x7F21836Cu: goto label_7F21836C;
    case 0x7F218370u: goto label_7F218370;
    case 0x7F218374u: goto label_7F218374;
    case 0x7F218378u: goto label_7F218378;
    case 0x7F21837Cu: goto label_7F21837C;
    case 0x7F218380u: goto label_7F218380;
    case 0x7F218384u: goto label_7F218384;
    case 0x7F218388u: goto label_7F218388;
    case 0x7F21838Cu: goto label_7F21838C;
    case 0x7F218390u: goto label_7F218390;
    case 0x7F218394u: goto label_7F218394;
    case 0x7F218398u: goto label_7F218398;
    case 0x7F21839Cu: goto label_7F21839C;
    case 0x7F2183A0u: goto label_7F2183A0;
    case 0x7F2183A4u: goto label_7F2183A4;
    case 0x7F2183A8u: goto label_7F2183A8;
    case 0x7F2183ACu: goto label_7F2183AC;
    case 0x7F2183B0u: goto label_7F2183B0;
    case 0x7F2183B4u: goto label_7F2183B4;
    case 0x7F2183B8u: goto label_7F2183B8;
    case 0x7F2183BCu: goto label_7F2183BC;
    case 0x7F2183C0u: goto label_7F2183C0;
    case 0x7F2183C4u: goto label_7F2183C4;
    case 0x7F2183C8u: goto label_7F2183C8;
    case 0x7F2183CCu: goto label_7F2183CC;
    case 0x7F2183D0u: goto label_7F2183D0;
    case 0x7F2183D4u: goto label_7F2183D4;
    case 0x7F2183D8u: goto label_7F2183D8;
    case 0x7F2183DCu: goto label_7F2183DC;
    case 0x7F2183E0u: goto label_7F2183E0;
    case 0x7F2183E4u: goto label_7F2183E4;
    case 0x7F2183E8u: goto label_7F2183E8;
    case 0x7F2183ECu: goto label_7F2183EC;
    case 0x7F2183F0u: goto label_7F2183F0;
    case 0x7F2183F4u: goto label_7F2183F4;
    case 0x7F2183F8u: goto label_7F2183F8;
    case 0x7F2183FCu: goto label_7F2183FC;
    case 0x7F218400u: goto label_7F218400;
    case 0x7F218404u: goto label_7F218404;
    case 0x7F218408u: goto label_7F218408;
    case 0x7F21840Cu: goto label_7F21840C;
    case 0x7F218410u: goto label_7F218410;
    case 0x7F218414u: goto label_7F218414;
    case 0x7F218418u: goto label_7F218418;
    case 0x7F21841Cu: goto label_7F21841C;
    case 0x7F218420u: goto label_7F218420;
    case 0x7F218424u: goto label_7F218424;
    case 0x7F218428u: goto label_7F218428;
    case 0x7F21842Cu: goto label_7F21842C;
    case 0x7F218430u: goto label_7F218430;
    case 0x7F218434u: goto label_7F218434;
    case 0x7F218438u: goto label_7F218438;
    case 0x7F21843Cu: goto label_7F21843C;
    case 0x7F218440u: goto label_7F218440;
    case 0x7F218444u: goto label_7F218444;
    case 0x7F218448u: goto label_7F218448;
    case 0x7F21844Cu: goto label_7F21844C;
    case 0x7F218450u: goto label_7F218450;
    case 0x7F218454u: goto label_7F218454;
    case 0x7F218458u: goto label_7F218458;
    case 0x7F21845Cu: goto label_7F21845C;
    case 0x7F218460u: goto label_7F218460;
    case 0x7F218464u: goto label_7F218464;
    case 0x7F218468u: goto label_7F218468;
    case 0x7F21846Cu: goto label_7F21846C;
    case 0x7F218470u: goto label_7F218470;
    case 0x7F218474u: goto label_7F218474;
    case 0x7F218478u: goto label_7F218478;
    case 0x7F21847Cu: goto label_7F21847C;
    case 0x7F218480u: goto label_7F218480;
    case 0x7F218484u: goto label_7F218484;
    case 0x7F218488u: goto label_7F218488;
    case 0x7F21848Cu: goto label_7F21848C;
    case 0x7F218490u: goto label_7F218490;
    case 0x7F218494u: goto label_7F218494;
    case 0x7F218498u: goto label_7F218498;
    case 0x7F21849Cu: goto label_7F21849C;
    case 0x7F2184A0u: goto label_7F2184A0;
    case 0x7F2184A4u: goto label_7F2184A4;
    case 0x7F2184A8u: goto label_7F2184A8;
    case 0x7F2184ACu: goto label_7F2184AC;
    case 0x7F2184B0u: goto label_7F2184B0;
    case 0x7F2184B4u: goto label_7F2184B4;
    case 0x7F2184B8u: goto label_7F2184B8;
    case 0x7F2184BCu: goto label_7F2184BC;
    case 0x7F2184C0u: goto label_7F2184C0;
    case 0x7F2184C4u: goto label_7F2184C4;
    case 0x7F2184C8u: goto label_7F2184C8;
    case 0x7F2184CCu: goto label_7F2184CC;
    case 0x7F2184D0u: goto label_7F2184D0;
    case 0x7F2184D4u: goto label_7F2184D4;
    case 0x7F2184D8u: goto label_7F2184D8;
    case 0x7F2184DCu: goto label_7F2184DC;
    case 0x7F2184E0u: goto label_7F2184E0;
    case 0x7F2184E4u: goto label_7F2184E4;
    case 0x7F2184E8u: goto label_7F2184E8;
    case 0x7F2184ECu: goto label_7F2184EC;
    case 0x7F2184F0u: goto label_7F2184F0;
    case 0x7F2184F4u: goto label_7F2184F4;
    case 0x7F2184F8u: goto label_7F2184F8;
    case 0x7F2184FCu: goto label_7F2184FC;
    case 0x7F218500u: goto label_7F218500;
    case 0x7F218504u: goto label_7F218504;
    case 0x7F218508u: goto label_7F218508;
    case 0x7F21850Cu: goto label_7F21850C;
    case 0x7F218510u: goto label_7F218510;
    case 0x7F218514u: goto label_7F218514;
    case 0x7F218518u: goto label_7F218518;
    case 0x7F21851Cu: goto label_7F21851C;
    case 0x7F218520u: goto label_7F218520;
    case 0x7F218524u: goto label_7F218524;
    case 0x7F218528u: goto label_7F218528;
    case 0x7F21852Cu: goto label_7F21852C;
    case 0x7F218530u: goto label_7F218530;
    case 0x7F218534u: goto label_7F218534;
    case 0x7F218538u: goto label_7F218538;
    case 0x7F21853Cu: goto label_7F21853C;
    case 0x7F218540u: goto label_7F218540;
    case 0x7F218544u: goto label_7F218544;
    case 0x7F218548u: goto label_7F218548;
    case 0x7F21854Cu: goto label_7F21854C;
    case 0x7F218550u: goto label_7F218550;
    case 0x7F218554u: goto label_7F218554;
    case 0x7F218558u: goto label_7F218558;
    case 0x7F21855Cu: goto label_7F21855C;
    case 0x7F218560u: goto label_7F218560;
    case 0x7F218564u: goto label_7F218564;
    case 0x7F218568u: goto label_7F218568;
    case 0x7F21856Cu: goto label_7F21856C;
    case 0x7F218570u: goto label_7F218570;
    case 0x7F218574u: goto label_7F218574;
    case 0x7F218578u: goto label_7F218578;
    case 0x7F21857Cu: goto label_7F21857C;
    case 0x7F218580u: goto label_7F218580;
    case 0x7F218584u: goto label_7F218584;
    case 0x7F218588u: goto label_7F218588;
    case 0x7F21858Cu: goto label_7F21858C;
    case 0x7F218590u: goto label_7F218590;
    case 0x7F218594u: goto label_7F218594;
    case 0x7F218598u: goto label_7F218598;
    case 0x7F21859Cu: goto label_7F21859C;
    case 0x7F2185A0u: goto label_7F2185A0;
    case 0x7F2185A4u: goto label_7F2185A4;
    case 0x7F2185A8u: goto label_7F2185A8;
    case 0x7F2185ACu: goto label_7F2185AC;
    case 0x7F2185B0u: goto label_7F2185B0;
    case 0x7F2185B4u: goto label_7F2185B4;
    case 0x7F2185B8u: goto label_7F2185B8;
    case 0x7F2185BCu: goto label_7F2185BC;
    case 0x7F2185C0u: goto label_7F2185C0;
    case 0x7F2185C4u: goto label_7F2185C4;
    case 0x7F2185C8u: goto label_7F2185C8;
    case 0x7F2185CCu: goto label_7F2185CC;
    case 0x7F2185D0u: goto label_7F2185D0;
    case 0x7F2185D4u: goto label_7F2185D4;
    case 0x7F2185D8u: goto label_7F2185D8;
    case 0x7F2185DCu: goto label_7F2185DC;
    case 0x7F2185E0u: goto label_7F2185E0;
    case 0x7F2185E4u: goto label_7F2185E4;
    case 0x7F2185E8u: goto label_7F2185E8;
    case 0x7F2185ECu: goto label_7F2185EC;
    case 0x7F2185F0u: goto label_7F2185F0;
    case 0x7F2185F4u: goto label_7F2185F4;
    case 0x7F2185F8u: goto label_7F2185F8;
    case 0x7F2185FCu: goto label_7F2185FC;
    case 0x7F218600u: goto label_7F218600;
    case 0x7F218604u: goto label_7F218604;
    case 0x7F218608u: goto label_7F218608;
    case 0x7F21860Cu: goto label_7F21860C;
    case 0x7F218610u: goto label_7F218610;
    case 0x7F218614u: goto label_7F218614;
    case 0x7F218618u: goto label_7F218618;
    case 0x7F21861Cu: goto label_7F21861C;
    case 0x7F218620u: goto label_7F218620;
    case 0x7F218624u: goto label_7F218624;
    case 0x7F218628u: goto label_7F218628;
    case 0x7F21862Cu: goto label_7F21862C;
    case 0x7F218630u: goto label_7F218630;
    case 0x7F218634u: goto label_7F218634;
    case 0x7F218638u: goto label_7F218638;
    case 0x7F21863Cu: goto label_7F21863C;
    case 0x7F218640u: goto label_7F218640;
    case 0x7F218644u: goto label_7F218644;
    case 0x7F218648u: goto label_7F218648;
    case 0x7F21864Cu: goto label_7F21864C;
    case 0x7F218650u: goto label_7F218650;
    case 0x7F218654u: goto label_7F218654;
    case 0x7F218658u: goto label_7F218658;
    case 0x7F21865Cu: goto label_7F21865C;
    case 0x7F218660u: goto label_7F218660;
    case 0x7F218664u: goto label_7F218664;
    case 0x7F218668u: goto label_7F218668;
    case 0x7F21866Cu: goto label_7F21866C;
    case 0x7F218670u: goto label_7F218670;
    case 0x7F218674u: goto label_7F218674;
    case 0x7F218678u: goto label_7F218678;
    case 0x7F21867Cu: goto label_7F21867C;
    case 0x7F218680u: goto label_7F218680;
    case 0x7F218684u: goto label_7F218684;
    case 0x7F218688u: goto label_7F218688;
    case 0x7F21868Cu: goto label_7F21868C;
    case 0x7F218690u: goto label_7F218690;
    case 0x7F218694u: goto label_7F218694;
    case 0x7F218698u: goto label_7F218698;
    case 0x7F21869Cu: goto label_7F21869C;
    case 0x7F2186A0u: goto label_7F2186A0;
    case 0x7F2186A4u: goto label_7F2186A4;
    case 0x7F2186A8u: goto label_7F2186A8;
    case 0x7F2186ACu: goto label_7F2186AC;
    case 0x7F2186B0u: goto label_7F2186B0;
    case 0x7F2186B4u: goto label_7F2186B4;
    case 0x7F2186B8u: goto label_7F2186B8;
    case 0x7F2186BCu: goto label_7F2186BC;
    case 0x7F2186C0u: goto label_7F2186C0;
    case 0x7F2186C4u: goto label_7F2186C4;
    case 0x7F2186C8u: goto label_7F2186C8;
    case 0x7F2186CCu: goto label_7F2186CC;
    case 0x7F2186D0u: goto label_7F2186D0;
    case 0x7F2186D4u: goto label_7F2186D4;
    case 0x7F2186D8u: goto label_7F2186D8;
    case 0x7F2186DCu: goto label_7F2186DC;
    case 0x7F2186E0u: goto label_7F2186E0;
    case 0x7F2186E4u: goto label_7F2186E4;
    case 0x7F2186E8u: goto label_7F2186E8;
    case 0x7F2186ECu: goto label_7F2186EC;
    case 0x7F2186F0u: goto label_7F2186F0;
    case 0x7F2186F4u: goto label_7F2186F4;
    case 0x7F2186F8u: goto label_7F2186F8;
    case 0x7F2186FCu: goto label_7F2186FC;
    case 0x7F218700u: goto label_7F218700;
    case 0x7F218704u: goto label_7F218704;
    case 0x7F218708u: goto label_7F218708;
    case 0x7F21870Cu: goto label_7F21870C;
    case 0x7F218710u: goto label_7F218710;
    case 0x7F218714u: goto label_7F218714;
    case 0x7F218718u: goto label_7F218718;
    case 0x7F21871Cu: goto label_7F21871C;
    case 0x7F218720u: goto label_7F218720;
    case 0x7F218724u: goto label_7F218724;
    case 0x7F218728u: goto label_7F218728;
    case 0x7F21872Cu: goto label_7F21872C;
    case 0x7F218730u: goto label_7F218730;
    case 0x7F218734u: goto label_7F218734;
    case 0x7F218738u: goto label_7F218738;
    case 0x7F21873Cu: goto label_7F21873C;
    case 0x7F218740u: goto label_7F218740;
    case 0x7F218744u: goto label_7F218744;
    case 0x7F218748u: goto label_7F218748;
    case 0x7F21874Cu: goto label_7F21874C;
    case 0x7F218750u: goto label_7F218750;
    case 0x7F218754u: goto label_7F218754;
    case 0x7F218758u: goto label_7F218758;
    case 0x7F21875Cu: goto label_7F21875C;
    case 0x7F218760u: goto label_7F218760;
    case 0x7F218764u: goto label_7F218764;
    case 0x7F218768u: goto label_7F218768;
    case 0x7F21876Cu: goto label_7F21876C;
    case 0x7F218770u: goto label_7F218770;
    case 0x7F218774u: goto label_7F218774;
    case 0x7F218778u: goto label_7F218778;
    case 0x7F21877Cu: goto label_7F21877C;
    case 0x7F218780u: goto label_7F218780;
    case 0x7F218784u: goto label_7F218784;
    case 0x7F218788u: goto label_7F218788;
    case 0x7F21878Cu: goto label_7F21878C;
    case 0x7F218790u: goto label_7F218790;
    case 0x7F218794u: goto label_7F218794;
    case 0x7F218798u: goto label_7F218798;
    case 0x7F21879Cu: goto label_7F21879C;
    case 0x7F2187A0u: goto label_7F2187A0;
    case 0x7F2187A4u: goto label_7F2187A4;
    case 0x7F2187A8u: goto label_7F2187A8;
    case 0x7F2187ACu: goto label_7F2187AC;
    case 0x7F2187B0u: goto label_7F2187B0;
    case 0x7F2187B4u: goto label_7F2187B4;
    case 0x7F2187B8u: goto label_7F2187B8;
    case 0x7F2187BCu: goto label_7F2187BC;
    case 0x7F2187C0u: goto label_7F2187C0;
    case 0x7F2187C4u: goto label_7F2187C4;
    case 0x7F2187C8u: goto label_7F2187C8;
    case 0x7F2187CCu: goto label_7F2187CC;
    case 0x7F2187D0u: goto label_7F2187D0;
    case 0x7F2187D4u: goto label_7F2187D4;
    case 0x7F2187D8u: goto label_7F2187D8;
    case 0x7F2187DCu: goto label_7F2187DC;
    case 0x7F2187E0u: goto label_7F2187E0;
    case 0x7F2187E4u: goto label_7F2187E4;
    case 0x7F2187E8u: goto label_7F2187E8;
    case 0x7F2187ECu: goto label_7F2187EC;
    case 0x7F2187F0u: goto label_7F2187F0;
    case 0x7F2187F4u: goto label_7F2187F4;
    case 0x7F2187F8u: goto label_7F2187F8;
    case 0x7F2187FCu: goto label_7F2187FC;
    case 0x7F218800u: goto label_7F218800;
    case 0x7F218804u: goto label_7F218804;
    case 0x7F218808u: goto label_7F218808;
    case 0x7F21880Cu: goto label_7F21880C;
    case 0x7F218810u: goto label_7F218810;
    case 0x7F218814u: goto label_7F218814;
    case 0x7F218818u: goto label_7F218818;
    case 0x7F21881Cu: goto label_7F21881C;
    case 0x7F218820u: goto label_7F218820;
    case 0x7F218824u: goto label_7F218824;
    case 0x7F218828u: goto label_7F218828;
    case 0x7F21882Cu: goto label_7F21882C;
    case 0x7F218830u: goto label_7F218830;
    case 0x7F218834u: goto label_7F218834;
    case 0x7F218838u: goto label_7F218838;
    case 0x7F21883Cu: goto label_7F21883C;
    case 0x7F218840u: goto label_7F218840;
    case 0x7F218844u: goto label_7F218844;
    case 0x7F218848u: goto label_7F218848;
    case 0x7F21884Cu: goto label_7F21884C;
    case 0x7F218850u: goto label_7F218850;
    case 0x7F218854u: goto label_7F218854;
    case 0x7F218858u: goto label_7F218858;
    case 0x7F21885Cu: goto label_7F21885C;
    case 0x7F218860u: goto label_7F218860;
    case 0x7F218864u: goto label_7F218864;
    case 0x7F218868u: goto label_7F218868;
    case 0x7F21886Cu: goto label_7F21886C;
    case 0x7F218870u: goto label_7F218870;
    case 0x7F218874u: goto label_7F218874;
    case 0x7F218878u: goto label_7F218878;
    case 0x7F21887Cu: goto label_7F21887C;
    case 0x7F218880u: goto label_7F218880;
    case 0x7F218884u: goto label_7F218884;
    case 0x7F218888u: goto label_7F218888;
    case 0x7F21888Cu: goto label_7F21888C;
    case 0x7F218890u: goto label_7F218890;
    case 0x7F218894u: goto label_7F218894;
    case 0x7F218898u: goto label_7F218898;
    case 0x7F21889Cu: goto label_7F21889C;
    case 0x7F2188A0u: goto label_7F2188A0;
    case 0x7F2188A4u: goto label_7F2188A4;
    case 0x7F2188A8u: goto label_7F2188A8;
    case 0x7F2188ACu: goto label_7F2188AC;
    case 0x7F2188B0u: goto label_7F2188B0;
    case 0x7F2188B4u: goto label_7F2188B4;
    case 0x7F2188B8u: goto label_7F2188B8;
    case 0x7F2188BCu: goto label_7F2188BC;
    case 0x7F2188C0u: goto label_7F2188C0;
    case 0x7F2188C4u: goto label_7F2188C4;
    case 0x7F2188C8u: goto label_7F2188C8;
    case 0x7F2188CCu: goto label_7F2188CC;
    case 0x7F2188D0u: goto label_7F2188D0;
    case 0x7F2188D4u: goto label_7F2188D4;
    case 0x7F2188D8u: goto label_7F2188D8;
    case 0x7F2188DCu: goto label_7F2188DC;
    case 0x7F2188E0u: goto label_7F2188E0;
    case 0x7F2188E4u: goto label_7F2188E4;
    case 0x7F2188E8u: goto label_7F2188E8;
    case 0x7F2188ECu: goto label_7F2188EC;
    case 0x7F2188F0u: goto label_7F2188F0;
    case 0x7F2188F4u: goto label_7F2188F4;
    case 0x7F2188F8u: goto label_7F2188F8;
    case 0x7F2188FCu: goto label_7F2188FC;
    case 0x7F218900u: goto label_7F218900;
    case 0x7F218904u: goto label_7F218904;
    case 0x7F218908u: goto label_7F218908;
    case 0x7F21890Cu: goto label_7F21890C;
    case 0x7F218910u: goto label_7F218910;
    case 0x7F218914u: goto label_7F218914;
    case 0x7F218918u: goto label_7F218918;
    case 0x7F21891Cu: goto label_7F21891C;
    case 0x7F218920u: goto label_7F218920;
    case 0x7F218924u: goto label_7F218924;
    case 0x7F218928u: goto label_7F218928;
    case 0x7F21892Cu: goto label_7F21892C;
    case 0x7F218930u: goto label_7F218930;
    case 0x7F218934u: goto label_7F218934;
    case 0x7F218938u: goto label_7F218938;
    case 0x7F21893Cu: goto label_7F21893C;
    case 0x7F218940u: goto label_7F218940;
    case 0x7F218944u: goto label_7F218944;
    case 0x7F218948u: goto label_7F218948;
    case 0x7F21894Cu: goto label_7F21894C;
    case 0x7F218950u: goto label_7F218950;
    case 0x7F218954u: goto label_7F218954;
    case 0x7F218958u: goto label_7F218958;
    case 0x7F21895Cu: goto label_7F21895C;
    case 0x7F218960u: goto label_7F218960;
    case 0x7F218964u: goto label_7F218964;
    case 0x7F218968u: goto label_7F218968;
    case 0x7F21896Cu: goto label_7F21896C;
    case 0x7F218970u: goto label_7F218970;
    case 0x7F218974u: goto label_7F218974;
    case 0x7F218978u: goto label_7F218978;
    case 0x7F21897Cu: goto label_7F21897C;
    case 0x7F218980u: goto label_7F218980;
    case 0x7F218984u: goto label_7F218984;
    case 0x7F218988u: goto label_7F218988;
    case 0x7F21898Cu: goto label_7F21898C;
    case 0x7F218990u: goto label_7F218990;
    case 0x7F218994u: goto label_7F218994;
    case 0x7F218998u: goto label_7F218998;
    case 0x7F21899Cu: goto label_7F21899C;
    case 0x7F2189A0u: goto label_7F2189A0;
    case 0x7F2189A4u: goto label_7F2189A4;
    case 0x7F2189A8u: goto label_7F2189A8;
    case 0x7F2189ACu: goto label_7F2189AC;
    case 0x7F2189B0u: goto label_7F2189B0;
    case 0x7F2189B4u: goto label_7F2189B4;
    case 0x7F2189B8u: goto label_7F2189B8;
    case 0x7F2189BCu: goto label_7F2189BC;
    case 0x7F2189C0u: goto label_7F2189C0;
    case 0x7F2189C4u: goto label_7F2189C4;
    case 0x7F2189C8u: goto label_7F2189C8;
    case 0x7F2189CCu: goto label_7F2189CC;
    case 0x7F2189D0u: goto label_7F2189D0;
    case 0x7F2189D4u: goto label_7F2189D4;
    case 0x7F2189D8u: goto label_7F2189D8;
    case 0x7F2189DCu: goto label_7F2189DC;
    case 0x7F2189E0u: goto label_7F2189E0;
    case 0x7F2189E4u: goto label_7F2189E4;
    case 0x7F2189E8u: goto label_7F2189E8;
    case 0x7F2189ECu: goto label_7F2189EC;
    case 0x7F2189F0u: goto label_7F2189F0;
    case 0x7F2189F4u: goto label_7F2189F4;
    case 0x7F2189F8u: goto label_7F2189F8;
    case 0x7F2189FCu: goto label_7F2189FC;
    case 0x7F218A00u: goto label_7F218A00;
    case 0x7F218A04u: goto label_7F218A04;
    case 0x7F218A08u: goto label_7F218A08;
    case 0x7F218A0Cu: goto label_7F218A0C;
    case 0x7F218A10u: goto label_7F218A10;
    case 0x7F218A14u: goto label_7F218A14;
    case 0x7F218A18u: goto label_7F218A18;
    case 0x7F218A1Cu: goto label_7F218A1C;
    case 0x7F218A20u: goto label_7F218A20;
    case 0x7F218A24u: goto label_7F218A24;
    case 0x7F218A28u: goto label_7F218A28;
    case 0x7F218A2Cu: goto label_7F218A2C;
    case 0x7F218A30u: goto label_7F218A30;
    case 0x7F218A34u: goto label_7F218A34;
    case 0x7F218A38u: goto label_7F218A38;
    case 0x7F218A3Cu: goto label_7F218A3C;
    case 0x7F218A40u: goto label_7F218A40;
    case 0x7F218A44u: goto label_7F218A44;
    case 0x7F218A48u: goto label_7F218A48;
    case 0x7F218A4Cu: goto label_7F218A4C;
    case 0x7F218A50u: goto label_7F218A50;
    case 0x7F218A54u: goto label_7F218A54;
    case 0x7F218A58u: goto label_7F218A58;
    case 0x7F218A5Cu: goto label_7F218A5C;
    case 0x7F218A60u: goto label_7F218A60;
    case 0x7F218A64u: goto label_7F218A64;
    case 0x7F218A68u: goto label_7F218A68;
    case 0x7F218A6Cu: goto label_7F218A6C;
    case 0x7F218A70u: goto label_7F218A70;
    case 0x7F218A74u: goto label_7F218A74;
    case 0x7F218A78u: goto label_7F218A78;
    case 0x7F218A7Cu: goto label_7F218A7C;
    case 0x7F218A80u: goto label_7F218A80;
    case 0x7F218A84u: goto label_7F218A84;
    case 0x7F218A88u: goto label_7F218A88;
    case 0x7F218A8Cu: goto label_7F218A8C;
    case 0x7F218A90u: goto label_7F218A90;
    case 0x7F218A94u: goto label_7F218A94;
    case 0x7F218A98u: goto label_7F218A98;
    case 0x7F218A9Cu: goto label_7F218A9C;
    case 0x7F218AA0u: goto label_7F218AA0;
    case 0x7F218AA4u: goto label_7F218AA4;
    case 0x7F218AA8u: goto label_7F218AA8;
    case 0x7F218AACu: goto label_7F218AAC;
    case 0x7F218AB0u: goto label_7F218AB0;
    case 0x7F218AB4u: goto label_7F218AB4;
    case 0x7F218AB8u: goto label_7F218AB8;
    case 0x7F218ABCu: goto label_7F218ABC;
    case 0x7F218AC0u: goto label_7F218AC0;
    case 0x7F218AC4u: goto label_7F218AC4;
    case 0x7F218AC8u: goto label_7F218AC8;
    case 0x7F218ACCu: goto label_7F218ACC;
    case 0x7F218AD0u: goto label_7F218AD0;
    case 0x7F218AD4u: goto label_7F218AD4;
    case 0x7F218AD8u: goto label_7F218AD8;
    case 0x7F218ADCu: goto label_7F218ADC;
    case 0x7F218AE0u: goto label_7F218AE0;
    case 0x7F218AE4u: goto label_7F218AE4;
    case 0x7F218AE8u: goto label_7F218AE8;
    case 0x7F218AECu: goto label_7F218AEC;
    case 0x7F218AF0u: goto label_7F218AF0;
    case 0x7F218AF4u: goto label_7F218AF4;
    case 0x7F218AF8u: goto label_7F218AF8;
    case 0x7F218AFCu: goto label_7F218AFC;
    case 0x7F218B00u: goto label_7F218B00;
    case 0x7F218B04u: goto label_7F218B04;
    case 0x7F218B08u: goto label_7F218B08;
    case 0x7F218B0Cu: goto label_7F218B0C;
    case 0x7F218B10u: goto label_7F218B10;
    case 0x7F218B14u: goto label_7F218B14;
    case 0x7F218B18u: goto label_7F218B18;
    case 0x7F218B1Cu: goto label_7F218B1C;
    case 0x7F218B20u: goto label_7F218B20;
    case 0x7F218B24u: goto label_7F218B24;
    case 0x7F218B28u: goto label_7F218B28;
    case 0x7F218B2Cu: goto label_7F218B2C;
    case 0x7F218B30u: goto label_7F218B30;
    case 0x7F218B34u: goto label_7F218B34;
    case 0x7F218B38u: goto label_7F218B38;
    case 0x7F218B3Cu: goto label_7F218B3C;
    case 0x7F218B40u: goto label_7F218B40;
    case 0x7F218B44u: goto label_7F218B44;
    case 0x7F218B48u: goto label_7F218B48;
    case 0x7F218B4Cu: goto label_7F218B4C;
    case 0x7F218B50u: goto label_7F218B50;
    case 0x7F218B54u: goto label_7F218B54;
    case 0x7F218B58u: goto label_7F218B58;
    case 0x7F218B5Cu: goto label_7F218B5C;
    case 0x7F218B60u: goto label_7F218B60;
    case 0x7F218B64u: goto label_7F218B64;
    case 0x7F218B68u: goto label_7F218B68;
    case 0x7F218B6Cu: goto label_7F218B6C;
    case 0x7F218B70u: goto label_7F218B70;
    case 0x7F218B74u: goto label_7F218B74;
    case 0x7F218B78u: goto label_7F218B78;
    case 0x7F218B7Cu: goto label_7F218B7C;
    case 0x7F218B80u: goto label_7F218B80;
    case 0x7F218B84u: goto label_7F218B84;
    case 0x7F218B88u: goto label_7F218B88;
    case 0x7F218B8Cu: goto label_7F218B8C;
    case 0x7F218B90u: goto label_7F218B90;
    case 0x7F218B94u: goto label_7F218B94;
    case 0x7F218B98u: goto label_7F218B98;
    case 0x7F218B9Cu: goto label_7F218B9C;
    case 0x7F218BA0u: goto label_7F218BA0;
    case 0x7F218BA4u: goto label_7F218BA4;
    case 0x7F218BA8u: goto label_7F218BA8;
    case 0x7F218BACu: goto label_7F218BAC;
    case 0x7F218BB0u: goto label_7F218BB0;
    case 0x7F218BB4u: goto label_7F218BB4;
    case 0x7F218BB8u: goto label_7F218BB8;
    case 0x7F218BBCu: goto label_7F218BBC;
    case 0x7F218BC0u: goto label_7F218BC0;
    case 0x7F218BC4u: goto label_7F218BC4;
    case 0x7F218BC8u: goto label_7F218BC8;
    case 0x7F218BCCu: goto label_7F218BCC;
    case 0x7F218BD0u: goto label_7F218BD0;
    case 0x7F218BD4u: goto label_7F218BD4;
    case 0x7F218BD8u: goto label_7F218BD8;
    case 0x7F218BDCu: goto label_7F218BDC;
    case 0x7F218BE0u: goto label_7F218BE0;
    case 0x7F218BE4u: goto label_7F218BE4;
    case 0x7F218BE8u: goto label_7F218BE8;
    case 0x7F218BECu: goto label_7F218BEC;
    case 0x7F218BF0u: goto label_7F218BF0;
    case 0x7F218BF4u: goto label_7F218BF4;
    case 0x7F218BF8u: goto label_7F218BF8;
    case 0x7F218BFCu: goto label_7F218BFC;
    case 0x7F218C00u: goto label_7F218C00;
    case 0x7F218C04u: goto label_7F218C04;
    case 0x7F218C08u: goto label_7F218C08;
    case 0x7F218C0Cu: goto label_7F218C0C;
    case 0x7F218C10u: goto label_7F218C10;
    case 0x7F218C14u: goto label_7F218C14;
    case 0x7F218C18u: goto label_7F218C18;
    case 0x7F218C1Cu: goto label_7F218C1C;
    case 0x7F218C20u: goto label_7F218C20;
    case 0x7F218C24u: goto label_7F218C24;
    case 0x7F218C28u: goto label_7F218C28;
    case 0x7F218C2Cu: goto label_7F218C2C;
    case 0x7F218C30u: goto label_7F218C30;
    case 0x7F218C34u: goto label_7F218C34;
    case 0x7F218C38u: goto label_7F218C38;
    case 0x7F218C3Cu: goto label_7F218C3C;
    case 0x7F218C40u: goto label_7F218C40;
    case 0x7F218C44u: goto label_7F218C44;
    case 0x7F218C48u: goto label_7F218C48;
    case 0x7F218C4Cu: goto label_7F218C4C;
    case 0x7F218C50u: goto label_7F218C50;
    case 0x7F218C54u: goto label_7F218C54;
    case 0x7F218C58u: goto label_7F218C58;
    case 0x7F218C5Cu: goto label_7F218C5C;
    case 0x7F218C60u: goto label_7F218C60;
    case 0x7F218C64u: goto label_7F218C64;
    case 0x7F218C68u: goto label_7F218C68;
    case 0x7F218C6Cu: goto label_7F218C6C;
    case 0x7F218C70u: goto label_7F218C70;
    case 0x7F218C74u: goto label_7F218C74;
    case 0x7F218C78u: goto label_7F218C78;
    case 0x7F218C7Cu: goto label_7F218C7C;
    case 0x7F218C80u: goto label_7F218C80;
    case 0x7F218C84u: goto label_7F218C84;
    case 0x7F218C88u: goto label_7F218C88;
    case 0x7F218C8Cu: goto label_7F218C8C;
    case 0x7F218C90u: goto label_7F218C90;
    case 0x7F218C94u: goto label_7F218C94;
    case 0x7F218C98u: goto label_7F218C98;
    case 0x7F218C9Cu: goto label_7F218C9C;
    case 0x7F218CA0u: goto label_7F218CA0;
    case 0x7F218CA4u: goto label_7F218CA4;
    case 0x7F218CA8u: goto label_7F218CA8;
    case 0x7F218CACu: goto label_7F218CAC;
    case 0x7F218CB0u: goto label_7F218CB0;
    case 0x7F218CB4u: goto label_7F218CB4;
    case 0x7F218CB8u: goto label_7F218CB8;
    case 0x7F218CBCu: goto label_7F218CBC;
    case 0x7F218CC0u: goto label_7F218CC0;
    case 0x7F218CC4u: goto label_7F218CC4;
    case 0x7F218CC8u: goto label_7F218CC8;
    case 0x7F218CCCu: goto label_7F218CCC;
    case 0x7F218CD0u: goto label_7F218CD0;
    case 0x7F218CD4u: goto label_7F218CD4;
    case 0x7F218CD8u: goto label_7F218CD8;
    case 0x7F218CDCu: goto label_7F218CDC;
    case 0x7F218CE0u: goto label_7F218CE0;
    case 0x7F218CE4u: goto label_7F218CE4;
    case 0x7F218CE8u: goto label_7F218CE8;
    case 0x7F218CECu: goto label_7F218CEC;
    case 0x7F218CF0u: goto label_7F218CF0;
    case 0x7F218CF4u: goto label_7F218CF4;
    case 0x7F218CF8u: goto label_7F218CF8;
    case 0x7F218CFCu: goto label_7F218CFC;
    case 0x7F218D00u: goto label_7F218D00;
    case 0x7F218D04u: goto label_7F218D04;
    case 0x7F218D08u: goto label_7F218D08;
    case 0x7F218D0Cu: goto label_7F218D0C;
    case 0x7F218D10u: goto label_7F218D10;
    case 0x7F218D14u: goto label_7F218D14;
    case 0x7F218D18u: goto label_7F218D18;
    case 0x7F218D1Cu: goto label_7F218D1C;
    case 0x7F218D20u: goto label_7F218D20;
    case 0x7F218D24u: goto label_7F218D24;
    case 0x7F218D28u: goto label_7F218D28;
    case 0x7F218D2Cu: goto label_7F218D2C;
    case 0x7F218D30u: goto label_7F218D30;
    case 0x7F218D34u: goto label_7F218D34;
    case 0x7F218D38u: goto label_7F218D38;
    case 0x7F218D3Cu: goto label_7F218D3C;
    case 0x7F218D40u: goto label_7F218D40;
    case 0x7F218D44u: goto label_7F218D44;
    case 0x7F218D48u: goto label_7F218D48;
    case 0x7F218D4Cu: goto label_7F218D4C;
    case 0x7F218D50u: goto label_7F218D50;
    case 0x7F218D54u: goto label_7F218D54;
    case 0x7F218D58u: goto label_7F218D58;
    case 0x7F218D5Cu: goto label_7F218D5C;
    case 0x7F218D60u: goto label_7F218D60;
    case 0x7F218D64u: goto label_7F218D64;
    case 0x7F218D68u: goto label_7F218D68;
    case 0x7F218D6Cu: goto label_7F218D6C;
    case 0x7F218D70u: goto label_7F218D70;
    case 0x7F218D74u: goto label_7F218D74;
    case 0x7F218D78u: goto label_7F218D78;
    case 0x7F218D7Cu: goto label_7F218D7C;
    case 0x7F218D80u: goto label_7F218D80;
    case 0x7F218D84u: goto label_7F218D84;
    case 0x7F218D88u: goto label_7F218D88;
    case 0x7F218D8Cu: goto label_7F218D8C;
    case 0x7F218D90u: goto label_7F218D90;
    case 0x7F218D94u: goto label_7F218D94;
    case 0x7F218D98u: goto label_7F218D98;
    case 0x7F218D9Cu: goto label_7F218D9C;
    case 0x7F218DA0u: goto label_7F218DA0;
    case 0x7F218DA4u: goto label_7F218DA4;
    case 0x7F218DA8u: goto label_7F218DA8;
    case 0x7F218DACu: goto label_7F218DAC;
    case 0x7F218DB0u: goto label_7F218DB0;
    case 0x7F218DB4u: goto label_7F218DB4;
    case 0x7F218DB8u: goto label_7F218DB8;
    case 0x7F218DBCu: goto label_7F218DBC;
    case 0x7F218DC0u: goto label_7F218DC0;
    case 0x7F218DC4u: goto label_7F218DC4;
    case 0x7F218DC8u: goto label_7F218DC8;
    case 0x7F218DCCu: goto label_7F218DCC;
    case 0x7F218DD0u: goto label_7F218DD0;
    case 0x7F218DD4u: goto label_7F218DD4;
    case 0x7F218DD8u: goto label_7F218DD8;
    case 0x7F218DDCu: goto label_7F218DDC;
    case 0x7F218DE0u: goto label_7F218DE0;
    case 0x7F218DE4u: goto label_7F218DE4;
    case 0x7F218DE8u: goto label_7F218DE8;
    case 0x7F218DECu: goto label_7F218DEC;
    case 0x7F218DF0u: goto label_7F218DF0;
    case 0x7F218DF4u: goto label_7F218DF4;
    case 0x7F218DF8u: goto label_7F218DF8;
    case 0x7F218DFCu: goto label_7F218DFC;
    case 0x7F218E00u: goto label_7F218E00;
    case 0x7F218E04u: goto label_7F218E04;
    case 0x7F218E08u: goto label_7F218E08;
    case 0x7F218E0Cu: goto label_7F218E0C;
    case 0x7F218E10u: goto label_7F218E10;
    case 0x7F218E14u: goto label_7F218E14;
    case 0x7F218E18u: goto label_7F218E18;
    case 0x7F218E1Cu: goto label_7F218E1C;
    case 0x7F218E20u: goto label_7F218E20;
    case 0x7F218E24u: goto label_7F218E24;
    case 0x7F218E28u: goto label_7F218E28;
    case 0x7F218E2Cu: goto label_7F218E2C;
    case 0x7F218E30u: goto label_7F218E30;
    case 0x7F218E34u: goto label_7F218E34;
    case 0x7F218E38u: goto label_7F218E38;
    case 0x7F218E3Cu: goto label_7F218E3C;
    case 0x7F218E40u: goto label_7F218E40;
    case 0x7F218E44u: goto label_7F218E44;
    case 0x7F218E48u: goto label_7F218E48;
    case 0x7F218E4Cu: goto label_7F218E4C;
    case 0x7F218E50u: goto label_7F218E50;
    case 0x7F218E54u: goto label_7F218E54;
    case 0x7F218E58u: goto label_7F218E58;
    case 0x7F218E5Cu: goto label_7F218E5C;
    case 0x7F218E60u: goto label_7F218E60;
    case 0x7F218E64u: goto label_7F218E64;
    case 0x7F218E68u: goto label_7F218E68;
    case 0x7F218E6Cu: goto label_7F218E6C;
    case 0x7F218E70u: goto label_7F218E70;
    case 0x7F218E74u: goto label_7F218E74;
    case 0x7F218E78u: goto label_7F218E78;
    case 0x7F218E7Cu: goto label_7F218E7C;
    case 0x7F218E80u: goto label_7F218E80;
    case 0x7F218E84u: goto label_7F218E84;
    case 0x7F218E88u: goto label_7F218E88;
    case 0x7F218E8Cu: goto label_7F218E8C;
    case 0x7F218E90u: goto label_7F218E90;
    case 0x7F218E94u: goto label_7F218E94;
    case 0x7F218E98u: goto label_7F218E98;
    case 0x7F218E9Cu: goto label_7F218E9C;
    case 0x7F218EA0u: goto label_7F218EA0;
    case 0x7F218EA4u: goto label_7F218EA4;
    case 0x7F218EA8u: goto label_7F218EA8;
    case 0x7F218EACu: goto label_7F218EAC;
    case 0x7F218EB0u: goto label_7F218EB0;
    case 0x7F218EB4u: goto label_7F218EB4;
    case 0x7F218EB8u: goto label_7F218EB8;
    case 0x7F218EBCu: goto label_7F218EBC;
    case 0x7F218EC0u: goto label_7F218EC0;
    case 0x7F218EC4u: goto label_7F218EC4;
    case 0x7F218EC8u: goto label_7F218EC8;
    case 0x7F218ECCu: goto label_7F218ECC;
    case 0x7F218ED0u: goto label_7F218ED0;
    case 0x7F218ED4u: goto label_7F218ED4;
    case 0x7F218ED8u: goto label_7F218ED8;
    case 0x7F218EDCu: goto label_7F218EDC;
    case 0x7F218EE0u: goto label_7F218EE0;
    case 0x7F218EE4u: goto label_7F218EE4;
    case 0x7F218EE8u: goto label_7F218EE8;
    case 0x7F218EECu: goto label_7F218EEC;
    case 0x7F218EF0u: goto label_7F218EF0;
    case 0x7F218EF4u: goto label_7F218EF4;
    case 0x7F218EF8u: goto label_7F218EF8;
    case 0x7F218EFCu: goto label_7F218EFC;
    case 0x7F218F00u: goto label_7F218F00;
    case 0x7F218F04u: goto label_7F218F04;
    case 0x7F218F08u: goto label_7F218F08;
    case 0x7F218F0Cu: goto label_7F218F0C;
    case 0x7F218F10u: goto label_7F218F10;
    case 0x7F218F14u: goto label_7F218F14;
    case 0x7F218F18u: goto label_7F218F18;
    case 0x7F218F1Cu: goto label_7F218F1C;
    case 0x7F218F20u: goto label_7F218F20;
    case 0x7F218F24u: goto label_7F218F24;
    case 0x7F218F28u: goto label_7F218F28;
    case 0x7F218F2Cu: goto label_7F218F2C;
    case 0x7F218F30u: goto label_7F218F30;
    case 0x7F218F34u: goto label_7F218F34;
    case 0x7F218F38u: goto label_7F218F38;
    case 0x7F218F3Cu: goto label_7F218F3C;
    case 0x7F218F40u: goto label_7F218F40;
    case 0x7F218F44u: goto label_7F218F44;
    case 0x7F218F48u: goto label_7F218F48;
    case 0x7F218F4Cu: goto label_7F218F4C;
    case 0x7F218F50u: goto label_7F218F50;
    case 0x7F218F54u: goto label_7F218F54;
    case 0x7F218F58u: goto label_7F218F58;
    case 0x7F218F5Cu: goto label_7F218F5C;
    case 0x7F218F60u: goto label_7F218F60;
    case 0x7F218F64u: goto label_7F218F64;
    case 0x7F218F68u: goto label_7F218F68;
    case 0x7F218F6Cu: goto label_7F218F6C;
    case 0x7F218F70u: goto label_7F218F70;
    case 0x7F218F74u: goto label_7F218F74;
    case 0x7F218F78u: goto label_7F218F78;
    case 0x7F218F7Cu: goto label_7F218F7C;
    case 0x7F218F80u: goto label_7F218F80;
    case 0x7F218F84u: goto label_7F218F84;
    case 0x7F218F88u: goto label_7F218F88;
    case 0x7F218F8Cu: goto label_7F218F8C;
    case 0x7F218F90u: goto label_7F218F90;
    case 0x7F218F94u: goto label_7F218F94;
    case 0x7F218F98u: goto label_7F218F98;
    case 0x7F218F9Cu: goto label_7F218F9C;
    case 0x7F218FA0u: goto label_7F218FA0;
    case 0x7F218FA4u: goto label_7F218FA4;
    case 0x7F218FA8u: goto label_7F218FA8;
    case 0x7F218FACu: goto label_7F218FAC;
    case 0x7F218FB0u: goto label_7F218FB0;
    case 0x7F218FB4u: goto label_7F218FB4;
    case 0x7F218FB8u: goto label_7F218FB8;
    case 0x7F218FBCu: goto label_7F218FBC;
    case 0x7F218FC0u: goto label_7F218FC0;
    case 0x7F218FC4u: goto label_7F218FC4;
    case 0x7F218FC8u: goto label_7F218FC8;
    case 0x7F218FCCu: goto label_7F218FCC;
    case 0x7F218FD0u: goto label_7F218FD0;
    case 0x7F218FD4u: goto label_7F218FD4;
    case 0x7F218FD8u: goto label_7F218FD8;
    case 0x7F218FDCu: goto label_7F218FDC;
    case 0x7F218FE0u: goto label_7F218FE0;
    case 0x7F218FE4u: goto label_7F218FE4;
    case 0x7F218FE8u: goto label_7F218FE8;
    case 0x7F218FECu: goto label_7F218FEC;
    case 0x7F218FF0u: goto label_7F218FF0;
    case 0x7F218FF4u: goto label_7F218FF4;
    case 0x7F218FF8u: goto label_7F218FF8;
    case 0x7F218FFCu: goto label_7F218FFC;
    case 0x7F219000u: goto label_7F219000;
    case 0x7F219004u: goto label_7F219004;
    case 0x7F219008u: goto label_7F219008;
    case 0x7F21900Cu: goto label_7F21900C;
    case 0x7F219010u: goto label_7F219010;
    case 0x7F219014u: goto label_7F219014;
    case 0x7F219018u: goto label_7F219018;
    case 0x7F21901Cu: goto label_7F21901C;
    case 0x7F219020u: goto label_7F219020;
    case 0x7F219024u: goto label_7F219024;
    case 0x7F219028u: goto label_7F219028;
    case 0x7F21902Cu: goto label_7F21902C;
    case 0x7F219030u: goto label_7F219030;
    case 0x7F219034u: goto label_7F219034;
    case 0x7F219038u: goto label_7F219038;
    case 0x7F21903Cu: goto label_7F21903C;
    case 0x7F219040u: goto label_7F219040;
    case 0x7F219044u: goto label_7F219044;
    case 0x7F219048u: goto label_7F219048;
    case 0x7F21904Cu: goto label_7F21904C;
    case 0x7F219050u: goto label_7F219050;
    case 0x7F219054u: goto label_7F219054;
    case 0x7F219058u: goto label_7F219058;
    case 0x7F21905Cu: goto label_7F21905C;
    case 0x7F219060u: goto label_7F219060;
    case 0x7F219064u: goto label_7F219064;
    case 0x7F219068u: goto label_7F219068;
    case 0x7F21906Cu: goto label_7F21906C;
    case 0x7F219070u: goto label_7F219070;
    case 0x7F219074u: goto label_7F219074;
    case 0x7F219078u: goto label_7F219078;
    case 0x7F21907Cu: goto label_7F21907C;
    case 0x7F219080u: goto label_7F219080;
    case 0x7F219084u: goto label_7F219084;
    case 0x7F219088u: goto label_7F219088;
    case 0x7F21908Cu: goto label_7F21908C;
    case 0x7F219090u: goto label_7F219090;
    case 0x7F219094u: goto label_7F219094;
    case 0x7F219098u: goto label_7F219098;
    case 0x7F21909Cu: goto label_7F21909C;
    case 0x7F2190A0u: goto label_7F2190A0;
    case 0x7F2190A4u: goto label_7F2190A4;
    case 0x7F2190A8u: goto label_7F2190A8;
    case 0x7F2190ACu: goto label_7F2190AC;
    case 0x7F2190B0u: goto label_7F2190B0;
    case 0x7F2190B4u: goto label_7F2190B4;
    case 0x7F2190B8u: goto label_7F2190B8;
    case 0x7F2190BCu: goto label_7F2190BC;
    case 0x7F2190C0u: goto label_7F2190C0;
    case 0x7F2190C4u: goto label_7F2190C4;
    case 0x7F2190C8u: goto label_7F2190C8;
    case 0x7F2190CCu: goto label_7F2190CC;
    case 0x7F2190D0u: goto label_7F2190D0;
    case 0x7F2190D4u: goto label_7F2190D4;
    case 0x7F2190D8u: goto label_7F2190D8;
    case 0x7F2190DCu: goto label_7F2190DC;
    case 0x7F2190E0u: goto label_7F2190E0;
    case 0x7F2190E4u: goto label_7F2190E4;
    case 0x7F2190E8u: goto label_7F2190E8;
    case 0x7F2190ECu: goto label_7F2190EC;
    case 0x7F2190F0u: goto label_7F2190F0;
    case 0x7F2190F4u: goto label_7F2190F4;
    case 0x7F2190F8u: goto label_7F2190F8;
    case 0x7F2190FCu: goto label_7F2190FC;
    case 0x7F219100u: goto label_7F219100;
    case 0x7F219104u: goto label_7F219104;
    case 0x7F219108u: goto label_7F219108;
    case 0x7F21910Cu: goto label_7F21910C;
    case 0x7F219110u: goto label_7F219110;
    case 0x7F219114u: goto label_7F219114;
    case 0x7F219118u: goto label_7F219118;
    case 0x7F21911Cu: goto label_7F21911C;
    case 0x7F219120u: goto label_7F219120;
    case 0x7F219124u: goto label_7F219124;
    case 0x7F219128u: goto label_7F219128;
    case 0x7F21912Cu: goto label_7F21912C;
    case 0x7F219130u: goto label_7F219130;
    case 0x7F219134u: goto label_7F219134;
    case 0x7F219138u: goto label_7F219138;
    case 0x7F21913Cu: goto label_7F21913C;
    case 0x7F219140u: goto label_7F219140;
    case 0x7F219144u: goto label_7F219144;
    case 0x7F219148u: goto label_7F219148;
    case 0x7F21914Cu: goto label_7F21914C;
    case 0x7F219150u: goto label_7F219150;
    case 0x7F219154u: goto label_7F219154;
    case 0x7F219158u: goto label_7F219158;
    case 0x7F21915Cu: goto label_7F21915C;
    case 0x7F219160u: goto label_7F219160;
    case 0x7F219164u: goto label_7F219164;
    case 0x7F219168u: goto label_7F219168;
    case 0x7F21916Cu: goto label_7F21916C;
    case 0x7F219170u: goto label_7F219170;
    case 0x7F219174u: goto label_7F219174;
    case 0x7F219178u: goto label_7F219178;
    case 0x7F21917Cu: goto label_7F21917C;
    case 0x7F219180u: goto label_7F219180;
    case 0x7F219184u: goto label_7F219184;
    case 0x7F219188u: goto label_7F219188;
    case 0x7F21918Cu: goto label_7F21918C;
    case 0x7F219190u: goto label_7F219190;
    case 0x7F219194u: goto label_7F219194;
    case 0x7F219198u: goto label_7F219198;
    case 0x7F21919Cu: goto label_7F21919C;
    case 0x7F2191A0u: goto label_7F2191A0;
    case 0x7F2191A4u: goto label_7F2191A4;
    case 0x7F2191A8u: goto label_7F2191A8;
    case 0x7F2191ACu: goto label_7F2191AC;
    case 0x7F2191B0u: goto label_7F2191B0;
    case 0x7F2191B4u: goto label_7F2191B4;
    case 0x7F2191B8u: goto label_7F2191B8;
    case 0x7F2191BCu: goto label_7F2191BC;
    case 0x7F2191C0u: goto label_7F2191C0;
    case 0x7F2191C4u: goto label_7F2191C4;
    case 0x7F2191C8u: goto label_7F2191C8;
    case 0x7F2191CCu: goto label_7F2191CC;
    case 0x7F2191D0u: goto label_7F2191D0;
    case 0x7F2191D4u: goto label_7F2191D4;
    case 0x7F2191D8u: goto label_7F2191D8;
    case 0x7F2191DCu: goto label_7F2191DC;
    case 0x7F2191E0u: goto label_7F2191E0;
    case 0x7F2191E4u: goto label_7F2191E4;
    case 0x7F2191E8u: goto label_7F2191E8;
    case 0x7F2191ECu: goto label_7F2191EC;
    case 0x7F2191F0u: goto label_7F2191F0;
    case 0x7F2191F4u: goto label_7F2191F4;
    case 0x7F2191F8u: goto label_7F2191F8;
    case 0x7F2191FCu: goto label_7F2191FC;
    case 0x7F219200u: goto label_7F219200;
    case 0x7F219204u: goto label_7F219204;
    case 0x7F219208u: goto label_7F219208;
    case 0x7F21920Cu: goto label_7F21920C;
    case 0x7F219210u: goto label_7F219210;
    case 0x7F219214u: goto label_7F219214;
    case 0x7F219218u: goto label_7F219218;
    case 0x7F21921Cu: goto label_7F21921C;
    case 0x7F219220u: goto label_7F219220;
    case 0x7F219224u: goto label_7F219224;
    case 0x7F219228u: goto label_7F219228;
    case 0x7F21922Cu: goto label_7F21922C;
    case 0x7F219230u: goto label_7F219230;
    case 0x7F219234u: goto label_7F219234;
    case 0x7F219238u: goto label_7F219238;
    case 0x7F21923Cu: goto label_7F21923C;
    case 0x7F219240u: goto label_7F219240;
    case 0x7F219244u: goto label_7F219244;
    case 0x7F219248u: goto label_7F219248;
    case 0x7F21924Cu: goto label_7F21924C;
    case 0x7F219250u: goto label_7F219250;
    case 0x7F219254u: goto label_7F219254;
    case 0x7F219258u: goto label_7F219258;
    case 0x7F21925Cu: goto label_7F21925C;
    case 0x7F219260u: goto label_7F219260;
    case 0x7F219264u: goto label_7F219264;
    case 0x7F219268u: goto label_7F219268;
    case 0x7F21926Cu: goto label_7F21926C;
    case 0x7F219270u: goto label_7F219270;
    case 0x7F219274u: goto label_7F219274;
    case 0x7F219278u: goto label_7F219278;
    case 0x7F21927Cu: goto label_7F21927C;
    case 0x7F219280u: goto label_7F219280;
    case 0x7F219284u: goto label_7F219284;
    case 0x7F219288u: goto label_7F219288;
    case 0x7F21928Cu: goto label_7F21928C;
    case 0x7F219290u: goto label_7F219290;
    case 0x7F219294u: goto label_7F219294;
    case 0x7F219298u: goto label_7F219298;
    case 0x7F21929Cu: goto label_7F21929C;
    case 0x7F2192A0u: goto label_7F2192A0;
    case 0x7F2192A4u: goto label_7F2192A4;
    case 0x7F2192A8u: goto label_7F2192A8;
    case 0x7F2192ACu: goto label_7F2192AC;
    case 0x7F2192B0u: goto label_7F2192B0;
    case 0x7F2192B4u: goto label_7F2192B4;
    case 0x7F2192B8u: goto label_7F2192B8;
    case 0x7F2192BCu: goto label_7F2192BC;
    case 0x7F2192C0u: goto label_7F2192C0;
    case 0x7F2192C4u: goto label_7F2192C4;
    case 0x7F2192C8u: goto label_7F2192C8;
    case 0x7F2192CCu: goto label_7F2192CC;
    case 0x7F2192D0u: goto label_7F2192D0;
    case 0x7F2192D4u: goto label_7F2192D4;
    case 0x7F2192D8u: goto label_7F2192D8;
    case 0x7F2192DCu: goto label_7F2192DC;
    case 0x7F2192E0u: goto label_7F2192E0;
    case 0x7F2192E4u: goto label_7F2192E4;
    case 0x7F2192E8u: goto label_7F2192E8;
    case 0x7F2192ECu: goto label_7F2192EC;
    case 0x7F2192F0u: goto label_7F2192F0;
    case 0x7F2192F4u: goto label_7F2192F4;
    case 0x7F2192F8u: goto label_7F2192F8;
    case 0x7F2192FCu: goto label_7F2192FC;
    case 0x7F219300u: goto label_7F219300;
    case 0x7F219304u: goto label_7F219304;
    case 0x7F219308u: goto label_7F219308;
    case 0x7F21930Cu: goto label_7F21930C;
    case 0x7F219310u: goto label_7F219310;
    case 0x7F219314u: goto label_7F219314;
    case 0x7F219318u: goto label_7F219318;
    case 0x7F21931Cu: goto label_7F21931C;
    case 0x7F219320u: goto label_7F219320;
    case 0x7F219324u: goto label_7F219324;
    case 0x7F219328u: goto label_7F219328;
    case 0x7F21932Cu: goto label_7F21932C;
    case 0x7F219330u: goto label_7F219330;
    case 0x7F219334u: goto label_7F219334;
    case 0x7F219338u: goto label_7F219338;
    case 0x7F21933Cu: goto label_7F21933C;
    case 0x7F219340u: goto label_7F219340;
    case 0x7F219344u: goto label_7F219344;
    case 0x7F219348u: goto label_7F219348;
    case 0x7F21934Cu: goto label_7F21934C;
    case 0x7F219350u: goto label_7F219350;
    case 0x7F219354u: goto label_7F219354;
    case 0x7F219358u: goto label_7F219358;
    case 0x7F21935Cu: goto label_7F21935C;
    case 0x7F219360u: goto label_7F219360;
    case 0x7F219364u: goto label_7F219364;
    case 0x7F219368u: goto label_7F219368;
    case 0x7F21936Cu: goto label_7F21936C;
    case 0x7F219370u: goto label_7F219370;
    case 0x7F219374u: goto label_7F219374;
    case 0x7F219378u: goto label_7F219378;
    case 0x7F21937Cu: goto label_7F21937C;
    case 0x7F219380u: goto label_7F219380;
    case 0x7F219384u: goto label_7F219384;
    case 0x7F219388u: goto label_7F219388;
    case 0x7F21938Cu: goto label_7F21938C;
    case 0x7F219390u: goto label_7F219390;
    case 0x7F219394u: goto label_7F219394;
    case 0x7F219398u: goto label_7F219398;
    case 0x7F21939Cu: goto label_7F21939C;
    case 0x7F2193A0u: goto label_7F2193A0;
    case 0x7F2193A4u: goto label_7F2193A4;
    case 0x7F2193A8u: goto label_7F2193A8;
    case 0x7F2193ACu: goto label_7F2193AC;
    case 0x7F2193B0u: goto label_7F2193B0;
    case 0x7F2193B4u: goto label_7F2193B4;
    case 0x7F2193B8u: goto label_7F2193B8;
    case 0x7F2193BCu: goto label_7F2193BC;
    case 0x7F2193C0u: goto label_7F2193C0;
    case 0x7F2193C4u: goto label_7F2193C4;
    case 0x7F2193C8u: goto label_7F2193C8;
    case 0x7F2193CCu: goto label_7F2193CC;
    case 0x7F2193D0u: goto label_7F2193D0;
    case 0x7F2193D4u: goto label_7F2193D4;
    case 0x7F2193D8u: goto label_7F2193D8;
    case 0x7F2193DCu: goto label_7F2193DC;
    case 0x7F2193E0u: goto label_7F2193E0;
    case 0x7F2193E4u: goto label_7F2193E4;
    case 0x7F2193E8u: goto label_7F2193E8;
    case 0x7F2193ECu: goto label_7F2193EC;
    case 0x7F2193F0u: goto label_7F2193F0;
    case 0x7F2193F4u: goto label_7F2193F4;
    case 0x7F2193F8u: goto label_7F2193F8;
    case 0x7F2193FCu: goto label_7F2193FC;
    case 0x7F219400u: goto label_7F219400;
    case 0x7F219404u: goto label_7F219404;
    case 0x7F219408u: goto label_7F219408;
    case 0x7F21940Cu: goto label_7F21940C;
    case 0x7F219410u: goto label_7F219410;
    case 0x7F219414u: goto label_7F219414;
    case 0x7F219418u: goto label_7F219418;
    case 0x7F21941Cu: goto label_7F21941C;
    case 0x7F219420u: goto label_7F219420;
    case 0x7F219424u: goto label_7F219424;
    case 0x7F219428u: goto label_7F219428;
    case 0x7F21942Cu: goto label_7F21942C;
    case 0x7F219430u: goto label_7F219430;
    case 0x7F219434u: goto label_7F219434;
    case 0x7F219438u: goto label_7F219438;
    case 0x7F21943Cu: goto label_7F21943C;
    case 0x7F219440u: goto label_7F219440;
    case 0x7F219444u: goto label_7F219444;
    case 0x7F219448u: goto label_7F219448;
    case 0x7F21944Cu: goto label_7F21944C;
    case 0x7F219450u: goto label_7F219450;
    case 0x7F219454u: goto label_7F219454;
    case 0x7F219458u: goto label_7F219458;
    case 0x7F21945Cu: goto label_7F21945C;
    case 0x7F219460u: goto label_7F219460;
    case 0x7F219464u: goto label_7F219464;
    case 0x7F219468u: goto label_7F219468;
    case 0x7F21946Cu: goto label_7F21946C;
    case 0x7F219470u: goto label_7F219470;
    case 0x7F219474u: goto label_7F219474;
    case 0x7F219478u: goto label_7F219478;
    case 0x7F21947Cu: goto label_7F21947C;
    case 0x7F219480u: goto label_7F219480;
    case 0x7F219484u: goto label_7F219484;
    case 0x7F219488u: goto label_7F219488;
    case 0x7F21948Cu: goto label_7F21948C;
    case 0x7F219490u: goto label_7F219490;
    case 0x7F219494u: goto label_7F219494;
    case 0x7F219498u: goto label_7F219498;
    case 0x7F21949Cu: goto label_7F21949C;
    case 0x7F2194A0u: goto label_7F2194A0;
    case 0x7F2194A4u: goto label_7F2194A4;
    case 0x7F2194A8u: goto label_7F2194A8;
    case 0x7F2194ACu: goto label_7F2194AC;
    case 0x7F2194B0u: goto label_7F2194B0;
    case 0x7F2194B4u: goto label_7F2194B4;
    case 0x7F2194B8u: goto label_7F2194B8;
    case 0x7F2194BCu: goto label_7F2194BC;
    case 0x7F2194C0u: goto label_7F2194C0;
    case 0x7F2194C4u: goto label_7F2194C4;
    case 0x7F2194C8u: goto label_7F2194C8;
    case 0x7F2194CCu: goto label_7F2194CC;
    case 0x7F2194D0u: goto label_7F2194D0;
    case 0x7F2194D4u: goto label_7F2194D4;
    case 0x7F2194D8u: goto label_7F2194D8;
    case 0x7F2194DCu: goto label_7F2194DC;
    case 0x7F2194E0u: goto label_7F2194E0;
    case 0x7F2194E4u: goto label_7F2194E4;
    case 0x7F2194E8u: goto label_7F2194E8;
    case 0x7F2194ECu: goto label_7F2194EC;
    case 0x7F2194F0u: goto label_7F2194F0;
    case 0x7F2194F4u: goto label_7F2194F4;
    case 0x7F2194F8u: goto label_7F2194F8;
    case 0x7F2194FCu: goto label_7F2194FC;
    case 0x7F219500u: goto label_7F219500;
    case 0x7F219504u: goto label_7F219504;
    case 0x7F219508u: goto label_7F219508;
    case 0x7F21950Cu: goto label_7F21950C;
    case 0x7F219510u: goto label_7F219510;
    case 0x7F219514u: goto label_7F219514;
    case 0x7F219518u: goto label_7F219518;
    case 0x7F21951Cu: goto label_7F21951C;
    case 0x7F219520u: goto label_7F219520;
    case 0x7F219524u: goto label_7F219524;
    case 0x7F219528u: goto label_7F219528;
    case 0x7F21952Cu: goto label_7F21952C;
    case 0x7F219530u: goto label_7F219530;
    case 0x7F219534u: goto label_7F219534;
    case 0x7F219538u: goto label_7F219538;
    case 0x7F21953Cu: goto label_7F21953C;
    case 0x7F219540u: goto label_7F219540;
    case 0x7F219544u: goto label_7F219544;
    case 0x7F219548u: goto label_7F219548;
    case 0x7F21954Cu: goto label_7F21954C;
    case 0x7F219550u: goto label_7F219550;
    case 0x7F219554u: goto label_7F219554;
    case 0x7F219558u: goto label_7F219558;
    case 0x7F21955Cu: goto label_7F21955C;
    case 0x7F219560u: goto label_7F219560;
    case 0x7F219564u: goto label_7F219564;
    case 0x7F219568u: goto label_7F219568;
    case 0x7F21956Cu: goto label_7F21956C;
    case 0x7F219570u: goto label_7F219570;
    case 0x7F219574u: goto label_7F219574;
    case 0x7F219578u: goto label_7F219578;
    case 0x7F21957Cu: goto label_7F21957C;
    case 0x7F219580u: goto label_7F219580;
    case 0x7F219584u: goto label_7F219584;
    case 0x7F219588u: goto label_7F219588;
    case 0x7F21958Cu: goto label_7F21958C;
    case 0x7F219590u: goto label_7F219590;
    case 0x7F219594u: goto label_7F219594;
    case 0x7F219598u: goto label_7F219598;
    case 0x7F21959Cu: goto label_7F21959C;
    case 0x7F2195A0u: goto label_7F2195A0;
    case 0x7F2195A4u: goto label_7F2195A4;
    case 0x7F2195A8u: goto label_7F2195A8;
    case 0x7F2195ACu: goto label_7F2195AC;
    case 0x7F2195B0u: goto label_7F2195B0;
    case 0x7F2195B4u: goto label_7F2195B4;
    case 0x7F2195B8u: goto label_7F2195B8;
    case 0x7F2195BCu: goto label_7F2195BC;
    case 0x7F2195C0u: goto label_7F2195C0;
    case 0x7F2195C4u: goto label_7F2195C4;
    case 0x7F2195C8u: goto label_7F2195C8;
    case 0x7F2195CCu: goto label_7F2195CC;
    case 0x7F2195D0u: goto label_7F2195D0;
    case 0x7F2195D4u: goto label_7F2195D4;
    case 0x7F2195D8u: goto label_7F2195D8;
    case 0x7F2195DCu: goto label_7F2195DC;
    case 0x7F2195E0u: goto label_7F2195E0;
    case 0x7F2195E4u: goto label_7F2195E4;
    case 0x7F2195E8u: goto label_7F2195E8;
    case 0x7F2195ECu: goto label_7F2195EC;
    case 0x7F2195F0u: goto label_7F2195F0;
    case 0x7F2195F4u: goto label_7F2195F4;
    case 0x7F2195F8u: goto label_7F2195F8;
    case 0x7F2195FCu: goto label_7F2195FC;
    case 0x7F219600u: goto label_7F219600;
    case 0x7F219604u: goto label_7F219604;
    case 0x7F219608u: goto label_7F219608;
    case 0x7F21960Cu: goto label_7F21960C;
    case 0x7F219610u: goto label_7F219610;
    case 0x7F219614u: goto label_7F219614;
    case 0x7F219618u: goto label_7F219618;
    case 0x7F21961Cu: goto label_7F21961C;
    case 0x7F219620u: goto label_7F219620;
    case 0x7F219624u: goto label_7F219624;
    case 0x7F219628u: goto label_7F219628;
    case 0x7F21962Cu: goto label_7F21962C;
    case 0x7F219630u: goto label_7F219630;
    case 0x7F219634u: goto label_7F219634;
    case 0x7F219638u: goto label_7F219638;
    case 0x7F21963Cu: goto label_7F21963C;
    case 0x7F219640u: goto label_7F219640;
    case 0x7F219644u: goto label_7F219644;
    case 0x7F219648u: goto label_7F219648;
    case 0x7F21964Cu: goto label_7F21964C;
    case 0x7F219650u: goto label_7F219650;
    case 0x7F219654u: goto label_7F219654;
    case 0x7F219658u: goto label_7F219658;
    case 0x7F21965Cu: goto label_7F21965C;
    case 0x7F219660u: goto label_7F219660;
    case 0x7F219664u: goto label_7F219664;
    case 0x7F219668u: goto label_7F219668;
    case 0x7F21966Cu: goto label_7F21966C;
    case 0x7F219670u: goto label_7F219670;
    case 0x7F219674u: goto label_7F219674;
    case 0x7F219678u: goto label_7F219678;
    case 0x7F21967Cu: goto label_7F21967C;
    case 0x7F219680u: goto label_7F219680;
    case 0x7F219684u: goto label_7F219684;
    case 0x7F219688u: goto label_7F219688;
    case 0x7F21968Cu: goto label_7F21968C;
    case 0x7F219690u: goto label_7F219690;
    case 0x7F219694u: goto label_7F219694;
    case 0x7F219698u: goto label_7F219698;
    case 0x7F21969Cu: goto label_7F21969C;
    case 0x7F2196A0u: goto label_7F2196A0;
    case 0x7F2196A4u: goto label_7F2196A4;
    case 0x7F2196A8u: goto label_7F2196A8;
    case 0x7F2196ACu: goto label_7F2196AC;
    case 0x7F2196B0u: goto label_7F2196B0;
    case 0x7F2196B4u: goto label_7F2196B4;
    case 0x7F2196B8u: goto label_7F2196B8;
    case 0x7F2196BCu: goto label_7F2196BC;
    case 0x7F2196C0u: goto label_7F2196C0;
    case 0x7F2196C4u: goto label_7F2196C4;
    case 0x7F2196C8u: goto label_7F2196C8;
    case 0x7F2196CCu: goto label_7F2196CC;
    case 0x7F2196D0u: goto label_7F2196D0;
    case 0x7F2196D4u: goto label_7F2196D4;
    case 0x7F2196D8u: goto label_7F2196D8;
    case 0x7F2196DCu: goto label_7F2196DC;
    case 0x7F2196E0u: goto label_7F2196E0;
    case 0x7F2196E4u: goto label_7F2196E4;
    case 0x7F2196E8u: goto label_7F2196E8;
    case 0x7F2196ECu: goto label_7F2196EC;
    case 0x7F2196F0u: goto label_7F2196F0;
    case 0x7F2196F4u: goto label_7F2196F4;
    case 0x7F2196F8u: goto label_7F2196F8;
    case 0x7F2196FCu: goto label_7F2196FC;
    case 0x7F219700u: goto label_7F219700;
    case 0x7F219704u: goto label_7F219704;
    case 0x7F219708u: goto label_7F219708;
    case 0x7F21970Cu: goto label_7F21970C;
    case 0x7F219710u: goto label_7F219710;
    case 0x7F219714u: goto label_7F219714;
    case 0x7F219718u: goto label_7F219718;
    case 0x7F21971Cu: goto label_7F21971C;
    case 0x7F219720u: goto label_7F219720;
    case 0x7F219724u: goto label_7F219724;
    case 0x7F219728u: goto label_7F219728;
    case 0x7F21972Cu: goto label_7F21972C;
    case 0x7F219730u: goto label_7F219730;
    case 0x7F219734u: goto label_7F219734;
    case 0x7F219738u: goto label_7F219738;
    case 0x7F21973Cu: goto label_7F21973C;
    case 0x7F219740u: goto label_7F219740;
    case 0x7F219744u: goto label_7F219744;
    case 0x7F219748u: goto label_7F219748;
    case 0x7F21974Cu: goto label_7F21974C;
    case 0x7F219750u: goto label_7F219750;
    case 0x7F219754u: goto label_7F219754;
    case 0x7F219758u: goto label_7F219758;
    case 0x7F21975Cu: goto label_7F21975C;
    case 0x7F219760u: goto label_7F219760;
    case 0x7F219764u: goto label_7F219764;
    case 0x7F219768u: goto label_7F219768;
    case 0x7F21976Cu: goto label_7F21976C;
    case 0x7F219770u: goto label_7F219770;
    case 0x7F219774u: goto label_7F219774;
    case 0x7F219778u: goto label_7F219778;
    case 0x7F21977Cu: goto label_7F21977C;
    case 0x7F219780u: goto label_7F219780;
    case 0x7F219784u: goto label_7F219784;
    case 0x7F219788u: goto label_7F219788;
    case 0x7F21978Cu: goto label_7F21978C;
    case 0x7F219790u: goto label_7F219790;
    case 0x7F219794u: goto label_7F219794;
    case 0x7F219798u: goto label_7F219798;
    case 0x7F21979Cu: goto label_7F21979C;
    case 0x7F2197A0u: goto label_7F2197A0;
    case 0x7F2197A4u: goto label_7F2197A4;
    case 0x7F2197A8u: goto label_7F2197A8;
    case 0x7F2197ACu: goto label_7F2197AC;
    case 0x7F2197B0u: goto label_7F2197B0;
    case 0x7F2197B4u: goto label_7F2197B4;
    case 0x7F2197B8u: goto label_7F2197B8;
    case 0x7F2197BCu: goto label_7F2197BC;
    case 0x7F2197C0u: goto label_7F2197C0;
    case 0x7F2197C4u: goto label_7F2197C4;
    case 0x7F2197C8u: goto label_7F2197C8;
    case 0x7F2197CCu: goto label_7F2197CC;
    case 0x7F2197D0u: goto label_7F2197D0;
    case 0x7F2197D4u: goto label_7F2197D4;
    case 0x7F2197D8u: goto label_7F2197D8;
    case 0x7F2197DCu: goto label_7F2197DC;
    case 0x7F2197E0u: goto label_7F2197E0;
    case 0x7F2197E4u: goto label_7F2197E4;
    case 0x7F2197E8u: goto label_7F2197E8;
    case 0x7F2197ECu: goto label_7F2197EC;
    case 0x7F2197F0u: goto label_7F2197F0;
    case 0x7F2197F4u: goto label_7F2197F4;
    case 0x7F2197F8u: goto label_7F2197F8;
    case 0x7F2197FCu: goto label_7F2197FC;
    case 0x7F219800u: goto label_7F219800;
    case 0x7F219804u: goto label_7F219804;
    case 0x7F219808u: goto label_7F219808;
    case 0x7F21980Cu: goto label_7F21980C;
    case 0x7F219810u: goto label_7F219810;
    case 0x7F219814u: goto label_7F219814;
    case 0x7F219818u: goto label_7F219818;
    case 0x7F21981Cu: goto label_7F21981C;
    case 0x7F219820u: goto label_7F219820;
    case 0x7F219824u: goto label_7F219824;
    case 0x7F219828u: goto label_7F219828;
    case 0x7F21982Cu: goto label_7F21982C;
    case 0x7F219830u: goto label_7F219830;
    case 0x7F219834u: goto label_7F219834;
    case 0x7F219838u: goto label_7F219838;
    case 0x7F21983Cu: goto label_7F21983C;
    case 0x7F219840u: goto label_7F219840;
    case 0x7F219844u: goto label_7F219844;
    case 0x7F219848u: goto label_7F219848;
    case 0x7F21984Cu: goto label_7F21984C;
    case 0x7F219850u: goto label_7F219850;
    case 0x7F219854u: goto label_7F219854;
    case 0x7F219858u: goto label_7F219858;
    case 0x7F21985Cu: goto label_7F21985C;
    case 0x7F219860u: goto label_7F219860;
    case 0x7F219864u: goto label_7F219864;
    case 0x7F219868u: goto label_7F219868;
    case 0x7F21986Cu: goto label_7F21986C;
    case 0x7F219870u: goto label_7F219870;
    case 0x7F219874u: goto label_7F219874;
    case 0x7F219878u: goto label_7F219878;
    case 0x7F21987Cu: goto label_7F21987C;
    case 0x7F219880u: goto label_7F219880;
    case 0x7F219884u: goto label_7F219884;
    case 0x7F219888u: goto label_7F219888;
    case 0x7F21988Cu: goto label_7F21988C;
    case 0x7F219890u: goto label_7F219890;
    case 0x7F219894u: goto label_7F219894;
    case 0x7F219898u: goto label_7F219898;
    case 0x7F21989Cu: goto label_7F21989C;
    case 0x7F2198A0u: goto label_7F2198A0;
    case 0x7F2198A4u: goto label_7F2198A4;
    case 0x7F2198A8u: goto label_7F2198A8;
    case 0x7F2198ACu: goto label_7F2198AC;
    case 0x7F2198B0u: goto label_7F2198B0;
    case 0x7F2198B4u: goto label_7F2198B4;
    case 0x7F2198B8u: goto label_7F2198B8;
    case 0x7F2198BCu: goto label_7F2198BC;
    case 0x7F2198C0u: goto label_7F2198C0;
    case 0x7F2198C4u: goto label_7F2198C4;
    case 0x7F2198C8u: goto label_7F2198C8;
    case 0x7F2198CCu: goto label_7F2198CC;
    case 0x7F2198D0u: goto label_7F2198D0;
    case 0x7F2198D4u: goto label_7F2198D4;
    case 0x7F2198D8u: goto label_7F2198D8;
    case 0x7F2198DCu: goto label_7F2198DC;
    case 0x7F2198E0u: goto label_7F2198E0;
    case 0x7F2198E4u: goto label_7F2198E4;
    case 0x7F2198E8u: goto label_7F2198E8;
    case 0x7F2198ECu: goto label_7F2198EC;
    case 0x7F2198F0u: goto label_7F2198F0;
    case 0x7F2198F4u: goto label_7F2198F4;
    case 0x7F2198F8u: goto label_7F2198F8;
    case 0x7F2198FCu: goto label_7F2198FC;
    case 0x7F219900u: goto label_7F219900;
    case 0x7F219904u: goto label_7F219904;
    case 0x7F219908u: goto label_7F219908;
    case 0x7F21990Cu: goto label_7F21990C;
    case 0x7F219910u: goto label_7F219910;
    case 0x7F219914u: goto label_7F219914;
    case 0x7F219918u: goto label_7F219918;
    case 0x7F21991Cu: goto label_7F21991C;
    case 0x7F219920u: goto label_7F219920;
    case 0x7F219924u: goto label_7F219924;
    case 0x7F219928u: goto label_7F219928;
    case 0x7F21992Cu: goto label_7F21992C;
    case 0x7F219930u: goto label_7F219930;
    case 0x7F219934u: goto label_7F219934;
    case 0x7F219938u: goto label_7F219938;
    case 0x7F21993Cu: goto label_7F21993C;
    case 0x7F219940u: goto label_7F219940;
    case 0x7F219944u: goto label_7F219944;
    case 0x7F219948u: goto label_7F219948;
    case 0x7F21994Cu: goto label_7F21994C;
    case 0x7F219950u: goto label_7F219950;
    case 0x7F219954u: goto label_7F219954;
    case 0x7F219958u: goto label_7F219958;
    case 0x7F21995Cu: goto label_7F21995C;
    case 0x7F219960u: goto label_7F219960;
    case 0x7F219964u: goto label_7F219964;
    case 0x7F219968u: goto label_7F219968;
    case 0x7F21996Cu: goto label_7F21996C;
    case 0x7F219970u: goto label_7F219970;
    case 0x7F219974u: goto label_7F219974;
    case 0x7F219978u: goto label_7F219978;
    case 0x7F21997Cu: goto label_7F21997C;
    case 0x7F219980u: goto label_7F219980;
    case 0x7F219984u: goto label_7F219984;
    case 0x7F219988u: goto label_7F219988;
    case 0x7F21998Cu: goto label_7F21998C;
    case 0x7F219990u: goto label_7F219990;
    case 0x7F219994u: goto label_7F219994;
    case 0x7F219998u: goto label_7F219998;
    case 0x7F21999Cu: goto label_7F21999C;
    case 0x7F2199A0u: goto label_7F2199A0;
    case 0x7F2199A4u: goto label_7F2199A4;
    case 0x7F2199A8u: goto label_7F2199A8;
    case 0x7F2199ACu: goto label_7F2199AC;
    case 0x7F2199B0u: goto label_7F2199B0;
    case 0x7F2199B4u: goto label_7F2199B4;
    case 0x7F2199B8u: goto label_7F2199B8;
    case 0x7F2199BCu: goto label_7F2199BC;
    case 0x7F2199C0u: goto label_7F2199C0;
    case 0x7F2199C4u: goto label_7F2199C4;
    case 0x7F2199C8u: goto label_7F2199C8;
    case 0x7F2199CCu: goto label_7F2199CC;
    case 0x7F2199D0u: goto label_7F2199D0;
    case 0x7F2199D4u: goto label_7F2199D4;
    case 0x7F2199D8u: goto label_7F2199D8;
    case 0x7F2199DCu: goto label_7F2199DC;
    case 0x7F2199E0u: goto label_7F2199E0;
    case 0x7F2199E4u: goto label_7F2199E4;
    case 0x7F2199E8u: goto label_7F2199E8;
    case 0x7F2199ECu: goto label_7F2199EC;
    case 0x7F2199F0u: goto label_7F2199F0;
    case 0x7F2199F4u: goto label_7F2199F4;
    case 0x7F2199F8u: goto label_7F2199F8;
    case 0x7F2199FCu: goto label_7F2199FC;
    case 0x7F219A00u: goto label_7F219A00;
    case 0x7F219A04u: goto label_7F219A04;
    case 0x7F219A08u: goto label_7F219A08;
    case 0x7F219A0Cu: goto label_7F219A0C;
    case 0x7F219A10u: goto label_7F219A10;
    case 0x7F219A14u: goto label_7F219A14;
    case 0x7F219A18u: goto label_7F219A18;
    case 0x7F219A1Cu: goto label_7F219A1C;
    case 0x7F219A20u: goto label_7F219A20;
    case 0x7F219A24u: goto label_7F219A24;
    case 0x7F219A28u: goto label_7F219A28;
    case 0x7F219A2Cu: goto label_7F219A2C;
    case 0x7F219A30u: goto label_7F219A30;
    case 0x7F219A34u: goto label_7F219A34;
    case 0x7F219A38u: goto label_7F219A38;
    case 0x7F219A3Cu: goto label_7F219A3C;
    case 0x7F219A40u: goto label_7F219A40;
    case 0x7F219A44u: goto label_7F219A44;
    case 0x7F219A48u: goto label_7F219A48;
    case 0x7F219A4Cu: goto label_7F219A4C;
    case 0x7F219A50u: goto label_7F219A50;
    case 0x7F219A54u: goto label_7F219A54;
    case 0x7F219A58u: goto label_7F219A58;
    case 0x7F219A5Cu: goto label_7F219A5C;
    case 0x7F219A60u: goto label_7F219A60;
    case 0x7F219A64u: goto label_7F219A64;
    case 0x7F219A68u: goto label_7F219A68;
    case 0x7F219A6Cu: goto label_7F219A6C;
    case 0x7F219A70u: goto label_7F219A70;
    case 0x7F219A74u: goto label_7F219A74;
    case 0x7F219A78u: goto label_7F219A78;
    case 0x7F219A7Cu: goto label_7F219A7C;
    case 0x7F219A80u: goto label_7F219A80;
    case 0x7F219A84u: goto label_7F219A84;
    case 0x7F219A88u: goto label_7F219A88;
    case 0x7F219A8Cu: goto label_7F219A8C;
    case 0x7F219A90u: goto label_7F219A90;
    case 0x7F219A94u: goto label_7F219A94;
    case 0x7F219A98u: goto label_7F219A98;
    case 0x7F219A9Cu: goto label_7F219A9C;
    case 0x7F219AA0u: goto label_7F219AA0;
    case 0x7F219AA4u: goto label_7F219AA4;
    case 0x7F219AA8u: goto label_7F219AA8;
    case 0x7F219AACu: goto label_7F219AAC;
    case 0x7F219AB0u: goto label_7F219AB0;
    case 0x7F219AB4u: goto label_7F219AB4;
    case 0x7F219AB8u: goto label_7F219AB8;
    case 0x7F219ABCu: goto label_7F219ABC;
    case 0x7F219AC0u: goto label_7F219AC0;
    case 0x7F219AC4u: goto label_7F219AC4;
    case 0x7F219AC8u: goto label_7F219AC8;
    case 0x7F219ACCu: goto label_7F219ACC;
    case 0x7F219AD0u: goto label_7F219AD0;
    case 0x7F219AD4u: goto label_7F219AD4;
    case 0x7F219AD8u: goto label_7F219AD8;
    case 0x7F219ADCu: goto label_7F219ADC;
    case 0x7F219AE0u: goto label_7F219AE0;
    case 0x7F219AE4u: goto label_7F219AE4;
    case 0x7F219AE8u: goto label_7F219AE8;
    case 0x7F219AECu: goto label_7F219AEC;
    case 0x7F219AF0u: goto label_7F219AF0;
    case 0x7F219AF4u: goto label_7F219AF4;
    case 0x7F219AF8u: goto label_7F219AF8;
    case 0x7F219AFCu: goto label_7F219AFC;
    case 0x7F219B00u: goto label_7F219B00;
    case 0x7F219B04u: goto label_7F219B04;
    case 0x7F219B08u: goto label_7F219B08;
    case 0x7F219B0Cu: goto label_7F219B0C;
    case 0x7F219B10u: goto label_7F219B10;
    case 0x7F219B14u: goto label_7F219B14;
    case 0x7F219B18u: goto label_7F219B18;
    case 0x7F219B1Cu: goto label_7F219B1C;
    case 0x7F219B20u: goto label_7F219B20;
    case 0x7F219B24u: goto label_7F219B24;
    case 0x7F219B28u: goto label_7F219B28;
    case 0x7F219B2Cu: goto label_7F219B2C;
    case 0x7F219B30u: goto label_7F219B30;
    case 0x7F219B34u: goto label_7F219B34;
    case 0x7F219B38u: goto label_7F219B38;
    case 0x7F219B3Cu: goto label_7F219B3C;
    case 0x7F219B40u: goto label_7F219B40;
    case 0x7F219B44u: goto label_7F219B44;
    case 0x7F219B48u: goto label_7F219B48;
    case 0x7F219B4Cu: goto label_7F219B4C;
    case 0x7F219B50u: goto label_7F219B50;
    case 0x7F219B54u: goto label_7F219B54;
    case 0x7F219B58u: goto label_7F219B58;
    case 0x7F219B5Cu: goto label_7F219B5C;
    case 0x7F219B60u: goto label_7F219B60;
    case 0x7F219B64u: goto label_7F219B64;
    case 0x7F219B68u: goto label_7F219B68;
    case 0x7F219B6Cu: goto label_7F219B6C;
    case 0x7F219B70u: goto label_7F219B70;
    case 0x7F219B74u: goto label_7F219B74;
    case 0x7F219B78u: goto label_7F219B78;
    case 0x7F219B7Cu: goto label_7F219B7C;
    case 0x7F219B80u: goto label_7F219B80;
    case 0x7F219B84u: goto label_7F219B84;
    case 0x7F219B88u: goto label_7F219B88;
    case 0x7F219B8Cu: goto label_7F219B8C;
    case 0x7F219B90u: goto label_7F219B90;
    case 0x7F219B94u: goto label_7F219B94;
    case 0x7F219B98u: goto label_7F219B98;
    case 0x7F219B9Cu: goto label_7F219B9C;
    case 0x7F219BA0u: goto label_7F219BA0;
    case 0x7F219BA4u: goto label_7F219BA4;
    case 0x7F219BA8u: goto label_7F219BA8;
    case 0x7F219BACu: goto label_7F219BAC;
    case 0x7F219BB0u: goto label_7F219BB0;
    case 0x7F219BB4u: goto label_7F219BB4;
    case 0x7F219BB8u: goto label_7F219BB8;
    case 0x7F219BBCu: goto label_7F219BBC;
    case 0x7F219BC0u: goto label_7F219BC0;
    case 0x7F219BC4u: goto label_7F219BC4;
    case 0x7F219BC8u: goto label_7F219BC8;
    case 0x7F219BCCu: goto label_7F219BCC;
    case 0x7F219BD0u: goto label_7F219BD0;
    case 0x7F219BD4u: goto label_7F219BD4;
    case 0x7F219BD8u: goto label_7F219BD8;
    case 0x7F219BDCu: goto label_7F219BDC;
    case 0x7F219BE0u: goto label_7F219BE0;
    case 0x7F219BE4u: goto label_7F219BE4;
    case 0x7F219BE8u: goto label_7F219BE8;
    case 0x7F219BECu: goto label_7F219BEC;
    case 0x7F219BF0u: goto label_7F219BF0;
    case 0x7F219BF4u: goto label_7F219BF4;
    case 0x7F219BF8u: goto label_7F219BF8;
    case 0x7F219BFCu: goto label_7F219BFC;
    case 0x7F219C00u: goto label_7F219C00;
    case 0x7F219C04u: goto label_7F219C04;
    case 0x7F219C08u: goto label_7F219C08;
    case 0x7F219C0Cu: goto label_7F219C0C;
    case 0x7F219C10u: goto label_7F219C10;
    case 0x7F219C14u: goto label_7F219C14;
    case 0x7F219C18u: goto label_7F219C18;
    case 0x7F219C1Cu: goto label_7F219C1C;
    case 0x7F219C20u: goto label_7F219C20;
    case 0x7F219C24u: goto label_7F219C24;
    case 0x7F219C28u: goto label_7F219C28;
    case 0x7F219C2Cu: goto label_7F219C2C;
    case 0x7F219C30u: goto label_7F219C30;
    case 0x7F219C34u: goto label_7F219C34;
    case 0x7F219C38u: goto label_7F219C38;
    case 0x7F219C3Cu: goto label_7F219C3C;
    case 0x7F219C40u: goto label_7F219C40;
    case 0x7F219C44u: goto label_7F219C44;
    case 0x7F219C48u: goto label_7F219C48;
    case 0x7F219C4Cu: goto label_7F219C4C;
    case 0x7F219C50u: goto label_7F219C50;
    case 0x7F219C54u: goto label_7F219C54;
    case 0x7F219C58u: goto label_7F219C58;
    case 0x7F219C5Cu: goto label_7F219C5C;
    case 0x7F219C60u: goto label_7F219C60;
    case 0x7F219C64u: goto label_7F219C64;
    case 0x7F219C68u: goto label_7F219C68;
    case 0x7F219C6Cu: goto label_7F219C6C;
    case 0x7F219C70u: goto label_7F219C70;
    case 0x7F219C74u: goto label_7F219C74;
    case 0x7F219C78u: goto label_7F219C78;
    case 0x7F219C7Cu: goto label_7F219C7C;
    case 0x7F219C80u: goto label_7F219C80;
    case 0x7F219C84u: goto label_7F219C84;
    case 0x7F219C88u: goto label_7F219C88;
    case 0x7F219C8Cu: goto label_7F219C8C;
    case 0x7F219C90u: goto label_7F219C90;
    case 0x7F219C94u: goto label_7F219C94;
    case 0x7F219C98u: goto label_7F219C98;
    case 0x7F219C9Cu: goto label_7F219C9C;
    case 0x7F219CA0u: goto label_7F219CA0;
    case 0x7F219CA4u: goto label_7F219CA4;
    case 0x7F219CA8u: goto label_7F219CA8;
    case 0x7F219CACu: goto label_7F219CAC;
    case 0x7F219CB0u: goto label_7F219CB0;
    case 0x7F219CB4u: goto label_7F219CB4;
    case 0x7F219CB8u: goto label_7F219CB8;
    case 0x7F219CBCu: goto label_7F219CBC;
    case 0x7F219CC0u: goto label_7F219CC0;
    case 0x7F219CC4u: goto label_7F219CC4;
    case 0x7F219CC8u: goto label_7F219CC8;
    case 0x7F219CCCu: goto label_7F219CCC;
    case 0x7F219CD0u: goto label_7F219CD0;
    case 0x7F219CD4u: goto label_7F219CD4;
    case 0x7F219CD8u: goto label_7F219CD8;
    case 0x7F219CDCu: goto label_7F219CDC;
    case 0x7F219CE0u: goto label_7F219CE0;
    case 0x7F219CE4u: goto label_7F219CE4;
    case 0x7F219CE8u: goto label_7F219CE8;
    case 0x7F219CECu: goto label_7F219CEC;
    case 0x7F219CF0u: goto label_7F219CF0;
    case 0x7F219CF4u: goto label_7F219CF4;
    case 0x7F219CF8u: goto label_7F219CF8;
    case 0x7F219CFCu: goto label_7F219CFC;
    case 0x7F219D00u: goto label_7F219D00;
    case 0x7F219D04u: goto label_7F219D04;
    case 0x7F219D08u: goto label_7F219D08;
    case 0x7F219D0Cu: goto label_7F219D0C;
    case 0x7F219D10u: goto label_7F219D10;
    case 0x7F219D14u: goto label_7F219D14;
    case 0x7F219D18u: goto label_7F219D18;
    case 0x7F219D1Cu: goto label_7F219D1C;
    case 0x7F219D20u: goto label_7F219D20;
    case 0x7F219D24u: goto label_7F219D24;
    case 0x7F219D28u: goto label_7F219D28;
    case 0x7F219D2Cu: goto label_7F219D2C;
    case 0x7F219D30u: goto label_7F219D30;
    case 0x7F219D34u: goto label_7F219D34;
    case 0x7F219D38u: goto label_7F219D38;
    case 0x7F219D3Cu: goto label_7F219D3C;
    case 0x7F219D40u: goto label_7F219D40;
    case 0x7F219D44u: goto label_7F219D44;
    case 0x7F219D48u: goto label_7F219D48;
    case 0x7F219D4Cu: goto label_7F219D4C;
    case 0x7F219D50u: goto label_7F219D50;
    case 0x7F219D54u: goto label_7F219D54;
    case 0x7F219D58u: goto label_7F219D58;
    case 0x7F219D5Cu: goto label_7F219D5C;
    case 0x7F219D60u: goto label_7F219D60;
    case 0x7F219D64u: goto label_7F219D64;
    case 0x7F219D68u: goto label_7F219D68;
    case 0x7F219D6Cu: goto label_7F219D6C;
    case 0x7F219D70u: goto label_7F219D70;
    case 0x7F219D74u: goto label_7F219D74;
    case 0x7F219D78u: goto label_7F219D78;
    case 0x7F219D7Cu: goto label_7F219D7C;
    case 0x7F219D80u: goto label_7F219D80;
    case 0x7F219D84u: goto label_7F219D84;
    case 0x7F219D88u: goto label_7F219D88;
    case 0x7F219D8Cu: goto label_7F219D8C;
    case 0x7F219D90u: goto label_7F219D90;
    case 0x7F219D94u: goto label_7F219D94;
    case 0x7F219D98u: goto label_7F219D98;
    case 0x7F219D9Cu: goto label_7F219D9C;
    case 0x7F219DA0u: goto label_7F219DA0;
    case 0x7F219DA4u: goto label_7F219DA4;
    case 0x7F219DA8u: goto label_7F219DA8;
    case 0x7F219DACu: goto label_7F219DAC;
    case 0x7F219DB0u: goto label_7F219DB0;
    case 0x7F219DB4u: goto label_7F219DB4;
    case 0x7F219DB8u: goto label_7F219DB8;
    case 0x7F219DBCu: goto label_7F219DBC;
    case 0x7F219DC0u: goto label_7F219DC0;
    case 0x7F219DC4u: goto label_7F219DC4;
    case 0x7F219DC8u: goto label_7F219DC8;
    case 0x7F219DCCu: goto label_7F219DCC;
    case 0x7F219DD0u: goto label_7F219DD0;
    case 0x7F219DD4u: goto label_7F219DD4;
    case 0x7F219DD8u: goto label_7F219DD8;
    case 0x7F219DDCu: goto label_7F219DDC;
    case 0x7F219DE0u: goto label_7F219DE0;
    case 0x7F219DE4u: goto label_7F219DE4;
    case 0x7F219DE8u: goto label_7F219DE8;
    case 0x7F219DECu: goto label_7F219DEC;
    case 0x7F219DF0u: goto label_7F219DF0;
    case 0x7F219DF4u: goto label_7F219DF4;
    case 0x7F219DF8u: goto label_7F219DF8;
    case 0x7F219DFCu: goto label_7F219DFC;
    case 0x7F219E00u: goto label_7F219E00;
    case 0x7F219E04u: goto label_7F219E04;
    case 0x7F219E08u: goto label_7F219E08;
    case 0x7F219E0Cu: goto label_7F219E0C;
    case 0x7F219E10u: goto label_7F219E10;
    case 0x7F219E14u: goto label_7F219E14;
    case 0x7F219E18u: goto label_7F219E18;
    case 0x7F219E1Cu: goto label_7F219E1C;
    case 0x7F219E20u: goto label_7F219E20;
    case 0x7F219E24u: goto label_7F219E24;
    case 0x7F219E28u: goto label_7F219E28;
    case 0x7F219E2Cu: goto label_7F219E2C;
    case 0x7F219E30u: goto label_7F219E30;
    case 0x7F219E34u: goto label_7F219E34;
    case 0x7F219E38u: goto label_7F219E38;
    case 0x7F219E3Cu: goto label_7F219E3C;
    case 0x7F219E40u: goto label_7F219E40;
    case 0x7F219E44u: goto label_7F219E44;
    case 0x7F219E48u: goto label_7F219E48;
    case 0x7F219E4Cu: goto label_7F219E4C;
    case 0x7F219E50u: goto label_7F219E50;
    case 0x7F219E54u: goto label_7F219E54;
    case 0x7F219E58u: goto label_7F219E58;
    case 0x7F219E5Cu: goto label_7F219E5C;
    case 0x7F219E60u: goto label_7F219E60;
    case 0x7F219E64u: goto label_7F219E64;
    case 0x7F219E68u: goto label_7F219E68;
    case 0x7F219E6Cu: goto label_7F219E6C;
    case 0x7F219E70u: goto label_7F219E70;
    case 0x7F219E74u: goto label_7F219E74;
    case 0x7F219E78u: goto label_7F219E78;
    case 0x7F219E7Cu: goto label_7F219E7C;
    case 0x7F219E80u: goto label_7F219E80;
    case 0x7F219E84u: goto label_7F219E84;
    case 0x7F219E88u: goto label_7F219E88;
    case 0x7F219E8Cu: goto label_7F219E8C;
    case 0x7F219E90u: goto label_7F219E90;
    case 0x7F219E94u: goto label_7F219E94;
    case 0x7F219E98u: goto label_7F219E98;
    case 0x7F219E9Cu: goto label_7F219E9C;
    case 0x7F219EA0u: goto label_7F219EA0;
    case 0x7F219EA4u: goto label_7F219EA4;
    case 0x7F219EA8u: goto label_7F219EA8;
    case 0x7F219EACu: goto label_7F219EAC;
    case 0x7F219EB0u: goto label_7F219EB0;
    case 0x7F219EB4u: goto label_7F219EB4;
    case 0x7F219EB8u: goto label_7F219EB8;
    case 0x7F219EBCu: goto label_7F219EBC;
    case 0x7F219EC0u: goto label_7F219EC0;
    case 0x7F219EC4u: goto label_7F219EC4;
    case 0x7F219EC8u: goto label_7F219EC8;
    case 0x7F219ECCu: goto label_7F219ECC;
    case 0x7F219ED0u: goto label_7F219ED0;
    case 0x7F219ED4u: goto label_7F219ED4;
    case 0x7F219ED8u: goto label_7F219ED8;
    case 0x7F219EDCu: goto label_7F219EDC;
    case 0x7F219EE0u: goto label_7F219EE0;
    case 0x7F219EE4u: goto label_7F219EE4;
    case 0x7F219EE8u: goto label_7F219EE8;
    case 0x7F219EECu: goto label_7F219EEC;
    case 0x7F219EF0u: goto label_7F219EF0;
    case 0x7F219EF4u: goto label_7F219EF4;
    case 0x7F219EF8u: goto label_7F219EF8;
    case 0x7F219EFCu: goto label_7F219EFC;
    case 0x7F219F00u: goto label_7F219F00;
    case 0x7F219F04u: goto label_7F219F04;
    case 0x7F219F08u: goto label_7F219F08;
    case 0x7F219F0Cu: goto label_7F219F0C;
    case 0x7F219F10u: goto label_7F219F10;
    case 0x7F219F14u: goto label_7F219F14;
    case 0x7F219F18u: goto label_7F219F18;
    case 0x7F219F1Cu: goto label_7F219F1C;
    case 0x7F219F20u: goto label_7F219F20;
    case 0x7F219F24u: goto label_7F219F24;
    case 0x7F219F28u: goto label_7F219F28;
    case 0x7F219F2Cu: goto label_7F219F2C;
    case 0x7F219F30u: goto label_7F219F30;
    case 0x7F219F34u: goto label_7F219F34;
    case 0x7F219F38u: goto label_7F219F38;
    case 0x7F219F3Cu: goto label_7F219F3C;
    case 0x7F219F40u: goto label_7F219F40;
    case 0x7F219F44u: goto label_7F219F44;
    case 0x7F219F48u: goto label_7F219F48;
    case 0x7F219F4Cu: goto label_7F219F4C;
    case 0x7F219F50u: goto label_7F219F50;
    case 0x7F219F54u: goto label_7F219F54;
    case 0x7F219F58u: goto label_7F219F58;
    case 0x7F219F5Cu: goto label_7F219F5C;
    case 0x7F219F60u: goto label_7F219F60;
    case 0x7F219F64u: goto label_7F219F64;
    case 0x7F219F68u: goto label_7F219F68;
    case 0x7F219F6Cu: goto label_7F219F6C;
    case 0x7F219F70u: goto label_7F219F70;
    case 0x7F219F74u: goto label_7F219F74;
    case 0x7F219F78u: goto label_7F219F78;
    case 0x7F219F7Cu: goto label_7F219F7C;
    case 0x7F219F80u: goto label_7F219F80;
    case 0x7F219F84u: goto label_7F219F84;
    case 0x7F219F88u: goto label_7F219F88;
    case 0x7F219F8Cu: goto label_7F219F8C;
    case 0x7F219F90u: goto label_7F219F90;
    case 0x7F219F94u: goto label_7F219F94;
    case 0x7F219F98u: goto label_7F219F98;
    case 0x7F219F9Cu: goto label_7F219F9C;
    case 0x7F219FA0u: goto label_7F219FA0;
    case 0x7F219FA4u: goto label_7F219FA4;
    case 0x7F219FA8u: goto label_7F219FA8;
    case 0x7F219FACu: goto label_7F219FAC;
    case 0x7F219FB0u: goto label_7F219FB0;
    case 0x7F219FB4u: goto label_7F219FB4;
    case 0x7F219FB8u: goto label_7F219FB8;
    case 0x7F219FBCu: goto label_7F219FBC;
    case 0x7F219FC0u: goto label_7F219FC0;
    case 0x7F219FC4u: goto label_7F219FC4;
    case 0x7F219FC8u: goto label_7F219FC8;
    case 0x7F219FCCu: goto label_7F219FCC;
    case 0x7F219FD0u: goto label_7F219FD0;
    case 0x7F219FD4u: goto label_7F219FD4;
    case 0x7F219FD8u: goto label_7F219FD8;
    case 0x7F219FDCu: goto label_7F219FDC;
    case 0x7F219FE0u: goto label_7F219FE0;
    case 0x7F219FE4u: goto label_7F219FE4;
    case 0x7F219FE8u: goto label_7F219FE8;
    case 0x7F219FECu: goto label_7F219FEC;
    case 0x7F219FF0u: goto label_7F219FF0;
    case 0x7F219FF4u: goto label_7F219FF4;
    case 0x7F219FF8u: goto label_7F219FF8;
    case 0x7F219FFCu: goto label_7F219FFC;
    case 0x7F21A000u: goto label_7F21A000;
    case 0x7F21A004u: goto label_7F21A004;
    case 0x7F21A008u: goto label_7F21A008;
    case 0x7F21A00Cu: goto label_7F21A00C;
    case 0x7F21A010u: goto label_7F21A010;
    case 0x7F21A014u: goto label_7F21A014;
    case 0x7F21A018u: goto label_7F21A018;
    case 0x7F21A01Cu: goto label_7F21A01C;
    case 0x7F21A020u: goto label_7F21A020;
    case 0x7F21A024u: goto label_7F21A024;
    case 0x7F21A028u: goto label_7F21A028;
    case 0x7F21A02Cu: goto label_7F21A02C;
    case 0x7F21A030u: goto label_7F21A030;
    case 0x7F21A034u: goto label_7F21A034;
    case 0x7F21A038u: goto label_7F21A038;
    case 0x7F21A03Cu: goto label_7F21A03C;
    case 0x7F21A040u: goto label_7F21A040;
    case 0x7F21A044u: goto label_7F21A044;
    case 0x7F21A048u: goto label_7F21A048;
    case 0x7F21A04Cu: goto label_7F21A04C;
    case 0x7F21A050u: goto label_7F21A050;
    case 0x7F21A054u: goto label_7F21A054;
    case 0x7F21A058u: goto label_7F21A058;
    case 0x7F21A05Cu: goto label_7F21A05C;
    case 0x7F21A060u: goto label_7F21A060;
    case 0x7F21A064u: goto label_7F21A064;
    case 0x7F21A068u: goto label_7F21A068;
    case 0x7F21A06Cu: goto label_7F21A06C;
    case 0x7F21A070u: goto label_7F21A070;
    case 0x7F21A074u: goto label_7F21A074;
    case 0x7F21A078u: goto label_7F21A078;
    case 0x7F21A07Cu: goto label_7F21A07C;
    case 0x7F21A080u: goto label_7F21A080;
    case 0x7F21A084u: goto label_7F21A084;
    case 0x7F21A088u: goto label_7F21A088;
    case 0x7F21A08Cu: goto label_7F21A08C;
    case 0x7F21A090u: goto label_7F21A090;
    case 0x7F21A094u: goto label_7F21A094;
    case 0x7F21A098u: goto label_7F21A098;
    case 0x7F21A09Cu: goto label_7F21A09C;
    case 0x7F21A0A0u: goto label_7F21A0A0;
    case 0x7F21A0A4u: goto label_7F21A0A4;
    case 0x7F21A0A8u: goto label_7F21A0A8;
    case 0x7F21A0ACu: goto label_7F21A0AC;
    case 0x7F21A0B0u: goto label_7F21A0B0;
    case 0x7F21A0B4u: goto label_7F21A0B4;
    case 0x7F21A0B8u: goto label_7F21A0B8;
    case 0x7F21A0BCu: goto label_7F21A0BC;
    case 0x7F21A0C0u: goto label_7F21A0C0;
    case 0x7F21A0C4u: goto label_7F21A0C4;
    case 0x7F21A0C8u: goto label_7F21A0C8;
    case 0x7F21A0CCu: goto label_7F21A0CC;
    case 0x7F21A0D0u: goto label_7F21A0D0;
    case 0x7F21A0D4u: goto label_7F21A0D4;
    case 0x7F21A0D8u: goto label_7F21A0D8;
    case 0x7F21A0DCu: goto label_7F21A0DC;
    case 0x7F21A0E0u: goto label_7F21A0E0;
    case 0x7F21A0E4u: goto label_7F21A0E4;
    case 0x7F21A0E8u: goto label_7F21A0E8;
    case 0x7F21A0ECu: goto label_7F21A0EC;
    case 0x7F21A0F0u: goto label_7F21A0F0;
    case 0x7F21A0F4u: goto label_7F21A0F4;
    case 0x7F21A0F8u: goto label_7F21A0F8;
    case 0x7F21A0FCu: goto label_7F21A0FC;
    case 0x7F21A100u: goto label_7F21A100;
    case 0x7F21A104u: goto label_7F21A104;
    case 0x7F21A108u: goto label_7F21A108;
    case 0x7F21A10Cu: goto label_7F21A10C;
    case 0x7F21A110u: goto label_7F21A110;
    case 0x7F21A114u: goto label_7F21A114;
    case 0x7F21A118u: goto label_7F21A118;
    case 0x7F21A11Cu: goto label_7F21A11C;
    case 0x7F21A120u: goto label_7F21A120;
    case 0x7F21A124u: goto label_7F21A124;
    case 0x7F21A128u: goto label_7F21A128;
    case 0x7F21A12Cu: goto label_7F21A12C;
    case 0x7F21A130u: goto label_7F21A130;
    case 0x7F21A134u: goto label_7F21A134;
    case 0x7F21A138u: goto label_7F21A138;
    case 0x7F21A13Cu: goto label_7F21A13C;
    case 0x7F21A140u: goto label_7F21A140;
    case 0x7F21A144u: goto label_7F21A144;
    case 0x7F21A148u: goto label_7F21A148;
    case 0x7F21A14Cu: goto label_7F21A14C;
    case 0x7F21A150u: goto label_7F21A150;
    case 0x7F21A154u: goto label_7F21A154;
    case 0x7F21A158u: goto label_7F21A158;
    case 0x7F21A15Cu: goto label_7F21A15C;
    case 0x7F21A160u: goto label_7F21A160;
    case 0x7F21A164u: goto label_7F21A164;
    case 0x7F21A168u: goto label_7F21A168;
    case 0x7F21A16Cu: goto label_7F21A16C;
    case 0x7F21A170u: goto label_7F21A170;
    case 0x7F21A174u: goto label_7F21A174;
    case 0x7F21A178u: goto label_7F21A178;
    case 0x7F21A17Cu: goto label_7F21A17C;
    case 0x7F21A180u: goto label_7F21A180;
    case 0x7F21A184u: goto label_7F21A184;
    case 0x7F21A188u: goto label_7F21A188;
    case 0x7F21A18Cu: goto label_7F21A18C;
    case 0x7F21A190u: goto label_7F21A190;
    case 0x7F21A194u: goto label_7F21A194;
    case 0x7F21A198u: goto label_7F21A198;
    case 0x7F21A19Cu: goto label_7F21A19C;
    case 0x7F21A1A0u: goto label_7F21A1A0;
    case 0x7F21A1A4u: goto label_7F21A1A4;
    case 0x7F21A1A8u: goto label_7F21A1A8;
    case 0x7F21A1ACu: goto label_7F21A1AC;
    case 0x7F21A1B0u: goto label_7F21A1B0;
    case 0x7F21A1B4u: goto label_7F21A1B4;
    case 0x7F21A1B8u: goto label_7F21A1B8;
    case 0x7F21A1BCu: goto label_7F21A1BC;
    case 0x7F21A1C0u: goto label_7F21A1C0;
    case 0x7F21A1C4u: goto label_7F21A1C4;
    case 0x7F21A1C8u: goto label_7F21A1C8;
    case 0x7F21A1CCu: goto label_7F21A1CC;
    case 0x7F21A1D0u: goto label_7F21A1D0;
    case 0x7F21A1D4u: goto label_7F21A1D4;
    case 0x7F21A1D8u: goto label_7F21A1D8;
    case 0x7F21A1DCu: goto label_7F21A1DC;
    case 0x7F21A1E0u: goto label_7F21A1E0;
    case 0x7F21A1E4u: goto label_7F21A1E4;
    case 0x7F21A1E8u: goto label_7F21A1E8;
    case 0x7F21A1ECu: goto label_7F21A1EC;
    case 0x7F21A1F0u: goto label_7F21A1F0;
    case 0x7F21A1F4u: goto label_7F21A1F4;
    case 0x7F21A1F8u: goto label_7F21A1F8;
    case 0x7F21A1FCu: goto label_7F21A1FC;
    case 0x7F21A200u: goto label_7F21A200;
    case 0x7F21A204u: goto label_7F21A204;
    case 0x7F21A208u: goto label_7F21A208;
    case 0x7F21A20Cu: goto label_7F21A20C;
    case 0x7F21A210u: goto label_7F21A210;
    case 0x7F21A214u: goto label_7F21A214;
    case 0x7F21A218u: goto label_7F21A218;
    case 0x7F21A21Cu: goto label_7F21A21C;
    case 0x7F21A220u: goto label_7F21A220;
    case 0x7F21A224u: goto label_7F21A224;
    case 0x7F21A228u: goto label_7F21A228;
    case 0x7F21A22Cu: goto label_7F21A22C;
    case 0x7F21A230u: goto label_7F21A230;
    case 0x7F21A234u: goto label_7F21A234;
    case 0x7F21A238u: goto label_7F21A238;
    case 0x7F21A23Cu: goto label_7F21A23C;
    case 0x7F21A240u: goto label_7F21A240;
    case 0x7F21A244u: goto label_7F21A244;
    case 0x7F21A248u: goto label_7F21A248;
    case 0x7F21A24Cu: goto label_7F21A24C;
    case 0x7F21A250u: goto label_7F21A250;
    case 0x7F21A254u: goto label_7F21A254;
    case 0x7F21A258u: goto label_7F21A258;
    case 0x7F21A25Cu: goto label_7F21A25C;
    case 0x7F21A260u: goto label_7F21A260;
    case 0x7F21A264u: goto label_7F21A264;
    case 0x7F21A268u: goto label_7F21A268;
    case 0x7F21A26Cu: goto label_7F21A26C;
    case 0x7F21A270u: goto label_7F21A270;
    case 0x7F21A274u: goto label_7F21A274;
    case 0x7F21A278u: goto label_7F21A278;
    case 0x7F21A27Cu: goto label_7F21A27C;
    case 0x7F21A280u: goto label_7F21A280;
    case 0x7F21A284u: goto label_7F21A284;
    case 0x7F21A288u: goto label_7F21A288;
    case 0x7F21A28Cu: goto label_7F21A28C;
    case 0x7F21A290u: goto label_7F21A290;
    case 0x7F21A294u: goto label_7F21A294;
    case 0x7F21A298u: goto label_7F21A298;
    case 0x7F21A29Cu: goto label_7F21A29C;
    case 0x7F21A2A0u: goto label_7F21A2A0;
    case 0x7F21A2A4u: goto label_7F21A2A4;
    case 0x7F21A2A8u: goto label_7F21A2A8;
    case 0x7F21A2ACu: goto label_7F21A2AC;
    case 0x7F21A2B0u: goto label_7F21A2B0;
    case 0x7F21A2B4u: goto label_7F21A2B4;
    case 0x7F21A2B8u: goto label_7F21A2B8;
    case 0x7F21A2BCu: goto label_7F21A2BC;
    case 0x7F21A2C0u: goto label_7F21A2C0;
    case 0x7F21A2C4u: goto label_7F21A2C4;
    case 0x7F21A2C8u: goto label_7F21A2C8;
    case 0x7F21A2CCu: goto label_7F21A2CC;
    case 0x7F21A2D0u: goto label_7F21A2D0;
    case 0x7F21A2D4u: goto label_7F21A2D4;
    case 0x7F21A2D8u: goto label_7F21A2D8;
    case 0x7F21A2DCu: goto label_7F21A2DC;
    case 0x7F21A2E0u: goto label_7F21A2E0;
    case 0x7F21A2E4u: goto label_7F21A2E4;
    case 0x7F21A2E8u: goto label_7F21A2E8;
    case 0x7F21A2ECu: goto label_7F21A2EC;
    case 0x7F21A2F0u: goto label_7F21A2F0;
    case 0x7F21A2F4u: goto label_7F21A2F4;
    case 0x7F21A2F8u: goto label_7F21A2F8;
    case 0x7F21A2FCu: goto label_7F21A2FC;
    case 0x7F21A300u: goto label_7F21A300;
    case 0x7F21A304u: goto label_7F21A304;
    case 0x7F21A308u: goto label_7F21A308;
    case 0x7F21A30Cu: goto label_7F21A30C;
    case 0x7F21A310u: goto label_7F21A310;
    case 0x7F21A314u: goto label_7F21A314;
    case 0x7F21A318u: goto label_7F21A318;
    case 0x7F21A31Cu: goto label_7F21A31C;
    case 0x7F21A320u: goto label_7F21A320;
    case 0x7F21A324u: goto label_7F21A324;
    case 0x7F21A328u: goto label_7F21A328;
    case 0x7F21A32Cu: goto label_7F21A32C;
    case 0x7F21A330u: goto label_7F21A330;
    case 0x7F21A334u: goto label_7F21A334;
    case 0x7F21A338u: goto label_7F21A338;
    case 0x7F21A33Cu: goto label_7F21A33C;
    case 0x7F21A340u: goto label_7F21A340;
    case 0x7F21A344u: goto label_7F21A344;
    case 0x7F21A348u: goto label_7F21A348;
    case 0x7F21A34Cu: goto label_7F21A34C;
    case 0x7F21A350u: goto label_7F21A350;
    case 0x7F21A354u: goto label_7F21A354;
    case 0x7F21A358u: goto label_7F21A358;
    case 0x7F21A35Cu: goto label_7F21A35C;
    case 0x7F21A360u: goto label_7F21A360;
    case 0x7F21A364u: goto label_7F21A364;
    case 0x7F21A368u: goto label_7F21A368;
    case 0x7F21A36Cu: goto label_7F21A36C;
    case 0x7F21A370u: goto label_7F21A370;
    case 0x7F21A374u: goto label_7F21A374;
    case 0x7F21A378u: goto label_7F21A378;
    case 0x7F21A37Cu: goto label_7F21A37C;
    case 0x7F21A380u: goto label_7F21A380;
    case 0x7F21A384u: goto label_7F21A384;
    case 0x7F21A388u: goto label_7F21A388;
    case 0x7F21A38Cu: goto label_7F21A38C;
    case 0x7F21A390u: goto label_7F21A390;
    case 0x7F21A394u: goto label_7F21A394;
    case 0x7F21A398u: goto label_7F21A398;
    case 0x7F21A39Cu: goto label_7F21A39C;
    case 0x7F21A3A0u: goto label_7F21A3A0;
    case 0x7F21A3A4u: goto label_7F21A3A4;
    case 0x7F21A3A8u: goto label_7F21A3A8;
    case 0x7F21A3ACu: goto label_7F21A3AC;
    case 0x7F21A3B0u: goto label_7F21A3B0;
    case 0x7F21A3B4u: goto label_7F21A3B4;
    case 0x7F21A3B8u: goto label_7F21A3B8;
    case 0x7F21A3BCu: goto label_7F21A3BC;
    case 0x7F21A3C0u: goto label_7F21A3C0;
    case 0x7F21A3C4u: goto label_7F21A3C4;
    case 0x7F21A3C8u: goto label_7F21A3C8;
    case 0x7F21A3CCu: goto label_7F21A3CC;
    case 0x7F21A3D0u: goto label_7F21A3D0;
    case 0x7F21A3D4u: goto label_7F21A3D4;
    case 0x7F21A3D8u: goto label_7F21A3D8;
    case 0x7F21A3DCu: goto label_7F21A3DC;
    case 0x7F21A3E0u: goto label_7F21A3E0;
    case 0x7F21A3E4u: goto label_7F21A3E4;
    case 0x7F21A3E8u: goto label_7F21A3E8;
    case 0x7F21A3ECu: goto label_7F21A3EC;
    case 0x7F21A3F0u: goto label_7F21A3F0;
    case 0x7F21A3F4u: goto label_7F21A3F4;
    case 0x7F21A3F8u: goto label_7F21A3F8;
    case 0x7F21A3FCu: goto label_7F21A3FC;
    case 0x7F21A400u: goto label_7F21A400;
    case 0x7F21A404u: goto label_7F21A404;
    case 0x7F21A408u: goto label_7F21A408;
    case 0x7F21A40Cu: goto label_7F21A40C;
    case 0x7F21A410u: goto label_7F21A410;
    case 0x7F21A414u: goto label_7F21A414;
    case 0x7F21A418u: goto label_7F21A418;
    case 0x7F21A41Cu: goto label_7F21A41C;
    case 0x7F21A420u: goto label_7F21A420;
    case 0x7F21A424u: goto label_7F21A424;
    case 0x7F21A428u: goto label_7F21A428;
    case 0x7F21A42Cu: goto label_7F21A42C;
    case 0x7F21A430u: goto label_7F21A430;
    case 0x7F21A434u: goto label_7F21A434;
    case 0x7F21A438u: goto label_7F21A438;
    case 0x7F21A43Cu: goto label_7F21A43C;
    case 0x7F21A440u: goto label_7F21A440;
    case 0x7F21A444u: goto label_7F21A444;
    case 0x7F21A448u: goto label_7F21A448;
    case 0x7F21A44Cu: goto label_7F21A44C;
    case 0x7F21A450u: goto label_7F21A450;
    case 0x7F21A454u: goto label_7F21A454;
    case 0x7F21A458u: goto label_7F21A458;
    case 0x7F21A45Cu: goto label_7F21A45C;
    case 0x7F21A460u: goto label_7F21A460;
    case 0x7F21A464u: goto label_7F21A464;
    case 0x7F21A468u: goto label_7F21A468;
    case 0x7F21A46Cu: goto label_7F21A46C;
    case 0x7F21A470u: goto label_7F21A470;
    case 0x7F21A474u: goto label_7F21A474;
    case 0x7F21A478u: goto label_7F21A478;
    case 0x7F21A47Cu: goto label_7F21A47C;
    case 0x7F21A480u: goto label_7F21A480;
    case 0x7F21A484u: goto label_7F21A484;
    case 0x7F21A488u: goto label_7F21A488;
    case 0x7F21A48Cu: goto label_7F21A48C;
    case 0x7F21A490u: goto label_7F21A490;
    case 0x7F21A494u: goto label_7F21A494;
    case 0x7F21A498u: goto label_7F21A498;
    case 0x7F21A49Cu: goto label_7F21A49C;
    case 0x7F21A4A0u: goto label_7F21A4A0;
    case 0x7F21A4A4u: goto label_7F21A4A4;
    case 0x7F21A4A8u: goto label_7F21A4A8;
    case 0x7F21A4ACu: goto label_7F21A4AC;
    case 0x7F21A4B0u: goto label_7F21A4B0;
    case 0x7F21A4B4u: goto label_7F21A4B4;
    case 0x7F21A4B8u: goto label_7F21A4B8;
    case 0x7F21A4BCu: goto label_7F21A4BC;
    case 0x7F21A4C0u: goto label_7F21A4C0;
    case 0x7F21A4C4u: goto label_7F21A4C4;
    case 0x7F21A4C8u: goto label_7F21A4C8;
    case 0x7F21A4CCu: goto label_7F21A4CC;
    case 0x7F21A4D0u: goto label_7F21A4D0;
    case 0x7F21A4D4u: goto label_7F21A4D4;
    case 0x7F21A4D8u: goto label_7F21A4D8;
    case 0x7F21A4DCu: goto label_7F21A4DC;
    case 0x7F21A4E0u: goto label_7F21A4E0;
    case 0x7F21A4E4u: goto label_7F21A4E4;
    case 0x7F21A4E8u: goto label_7F21A4E8;
    case 0x7F21A4ECu: goto label_7F21A4EC;
    case 0x7F21A4F0u: goto label_7F21A4F0;
    case 0x7F21A4F4u: goto label_7F21A4F4;
    case 0x7F21A4F8u: goto label_7F21A4F8;
    case 0x7F21A4FCu: goto label_7F21A4FC;
    case 0x7F21A500u: goto label_7F21A500;
    case 0x7F21A504u: goto label_7F21A504;
    case 0x7F21A508u: goto label_7F21A508;
    case 0x7F21A50Cu: goto label_7F21A50C;
    case 0x7F21A510u: goto label_7F21A510;
    case 0x7F21A514u: goto label_7F21A514;
    case 0x7F21A518u: goto label_7F21A518;
    case 0x7F21A51Cu: goto label_7F21A51C;
    case 0x7F21A520u: goto label_7F21A520;
    case 0x7F21A524u: goto label_7F21A524;
    case 0x7F21A528u: goto label_7F21A528;
    case 0x7F21A52Cu: goto label_7F21A52C;
    case 0x7F21A530u: goto label_7F21A530;
    case 0x7F21A534u: goto label_7F21A534;
    case 0x7F21A538u: goto label_7F21A538;
    case 0x7F21A53Cu: goto label_7F21A53C;
    case 0x7F21A540u: goto label_7F21A540;
    case 0x7F21A544u: goto label_7F21A544;
    case 0x7F21A548u: goto label_7F21A548;
    case 0x7F21A54Cu: goto label_7F21A54C;
    case 0x7F21A550u: goto label_7F21A550;
    case 0x7F21A554u: goto label_7F21A554;
    case 0x7F21A558u: goto label_7F21A558;
    case 0x7F21A55Cu: goto label_7F21A55C;
    case 0x7F21A560u: goto label_7F21A560;
    case 0x7F21A564u: goto label_7F21A564;
    case 0x7F21A568u: goto label_7F21A568;
    case 0x7F21A56Cu: goto label_7F21A56C;
    case 0x7F21A570u: goto label_7F21A570;
    case 0x7F21A574u: goto label_7F21A574;
    case 0x7F21A578u: goto label_7F21A578;
    case 0x7F21A57Cu: goto label_7F21A57C;
    case 0x7F21A580u: goto label_7F21A580;
    case 0x7F21A584u: goto label_7F21A584;
    case 0x7F21A588u: goto label_7F21A588;
    case 0x7F21A58Cu: goto label_7F21A58C;
    case 0x7F21A590u: goto label_7F21A590;
    case 0x7F21A594u: goto label_7F21A594;
    case 0x7F21A598u: goto label_7F21A598;
    case 0x7F21A59Cu: goto label_7F21A59C;
    case 0x7F21A5A0u: goto label_7F21A5A0;
    case 0x7F21A5A4u: goto label_7F21A5A4;
    case 0x7F21A5A8u: goto label_7F21A5A8;
    case 0x7F21A5ACu: goto label_7F21A5AC;
    case 0x7F21A5B0u: goto label_7F21A5B0;
    case 0x7F21A5B4u: goto label_7F21A5B4;
    case 0x7F21A5B8u: goto label_7F21A5B8;
    case 0x7F21A5BCu: goto label_7F21A5BC;
    case 0x7F21A5C0u: goto label_7F21A5C0;
    case 0x7F21A5C4u: goto label_7F21A5C4;
    case 0x7F21A5C8u: goto label_7F21A5C8;
    case 0x7F21A5CCu: goto label_7F21A5CC;
    case 0x7F21A5D0u: goto label_7F21A5D0;
    case 0x7F21A5D4u: goto label_7F21A5D4;
    case 0x7F21A5D8u: goto label_7F21A5D8;
    case 0x7F21A5DCu: goto label_7F21A5DC;
    case 0x7F21A5E0u: goto label_7F21A5E0;
    case 0x7F21A5E4u: goto label_7F21A5E4;
    case 0x7F21A5E8u: goto label_7F21A5E8;
    case 0x7F21A5ECu: goto label_7F21A5EC;
    case 0x7F21A5F0u: goto label_7F21A5F0;
    case 0x7F21A5F4u: goto label_7F21A5F4;
    case 0x7F21A5F8u: goto label_7F21A5F8;
    case 0x7F21A5FCu: goto label_7F21A5FC;
    case 0x7F21A600u: goto label_7F21A600;
    case 0x7F21A604u: goto label_7F21A604;
    case 0x7F21A608u: goto label_7F21A608;
    case 0x7F21A60Cu: goto label_7F21A60C;
    case 0x7F21A610u: goto label_7F21A610;
    case 0x7F21A614u: goto label_7F21A614;
    case 0x7F21A618u: goto label_7F21A618;
    case 0x7F21A61Cu: goto label_7F21A61C;
    case 0x7F21A620u: goto label_7F21A620;
    case 0x7F21A624u: goto label_7F21A624;
    case 0x7F21A628u: goto label_7F21A628;
    case 0x7F21A62Cu: goto label_7F21A62C;
    case 0x7F21A630u: goto label_7F21A630;
    case 0x7F21A634u: goto label_7F21A634;
    case 0x7F21A638u: goto label_7F21A638;
    case 0x7F21A63Cu: goto label_7F21A63C;
    case 0x7F21A640u: goto label_7F21A640;
    case 0x7F21A644u: goto label_7F21A644;
    case 0x7F21A648u: goto label_7F21A648;
    case 0x7F21A64Cu: goto label_7F21A64C;
    case 0x7F21A650u: goto label_7F21A650;
    case 0x7F21A654u: goto label_7F21A654;
    case 0x7F21A658u: goto label_7F21A658;
    case 0x7F21A65Cu: goto label_7F21A65C;
    case 0x7F21A660u: goto label_7F21A660;
    case 0x7F21A664u: goto label_7F21A664;
    case 0x7F21A668u: goto label_7F21A668;
    case 0x7F21A66Cu: goto label_7F21A66C;
    case 0x7F21A670u: goto label_7F21A670;
    case 0x7F21A674u: goto label_7F21A674;
    case 0x7F21A678u: goto label_7F21A678;
    case 0x7F21A67Cu: goto label_7F21A67C;
    case 0x7F21A680u: goto label_7F21A680;
    case 0x7F21A684u: goto label_7F21A684;
    case 0x7F21A688u: goto label_7F21A688;
    case 0x7F21A68Cu: goto label_7F21A68C;
    case 0x7F21A690u: goto label_7F21A690;
    case 0x7F21A694u: goto label_7F21A694;
    case 0x7F21A698u: goto label_7F21A698;
    case 0x7F21A69Cu: goto label_7F21A69C;
    case 0x7F21A6A0u: goto label_7F21A6A0;
    case 0x7F21A6A4u: goto label_7F21A6A4;
    case 0x7F21A6A8u: goto label_7F21A6A8;
    case 0x7F21A6ACu: goto label_7F21A6AC;
    case 0x7F21A6B0u: goto label_7F21A6B0;
    case 0x7F21A6B4u: goto label_7F21A6B4;
    case 0x7F21A6B8u: goto label_7F21A6B8;
    case 0x7F21A6BCu: goto label_7F21A6BC;
    case 0x7F21A6C0u: goto label_7F21A6C0;
    case 0x7F21A6C4u: goto label_7F21A6C4;
    case 0x7F21A6C8u: goto label_7F21A6C8;
    case 0x7F21A6CCu: goto label_7F21A6CC;
    case 0x7F21A6D0u: goto label_7F21A6D0;
    case 0x7F21A6D4u: goto label_7F21A6D4;
    case 0x7F21A6D8u: goto label_7F21A6D8;
    case 0x7F21A6DCu: goto label_7F21A6DC;
    case 0x7F21A6E0u: goto label_7F21A6E0;
    case 0x7F21A6E4u: goto label_7F21A6E4;
    case 0x7F21A6E8u: goto label_7F21A6E8;
    case 0x7F21A6ECu: goto label_7F21A6EC;
    case 0x7F21A6F0u: goto label_7F21A6F0;
    case 0x7F21A6F4u: goto label_7F21A6F4;
    case 0x7F21A6F8u: goto label_7F21A6F8;
    case 0x7F21A6FCu: goto label_7F21A6FC;
    case 0x7F21A700u: goto label_7F21A700;
    case 0x7F21A704u: goto label_7F21A704;
    case 0x7F21A708u: goto label_7F21A708;
    case 0x7F21A70Cu: goto label_7F21A70C;
    case 0x7F21A710u: goto label_7F21A710;
    case 0x7F21A714u: goto label_7F21A714;
    case 0x7F21A718u: goto label_7F21A718;
    case 0x7F21A71Cu: goto label_7F21A71C;
    case 0x7F21A720u: goto label_7F21A720;
    case 0x7F21A724u: goto label_7F21A724;
    case 0x7F21A728u: goto label_7F21A728;
    case 0x7F21A72Cu: goto label_7F21A72C;
    case 0x7F21A730u: goto label_7F21A730;
    case 0x7F21A734u: goto label_7F21A734;
    case 0x7F21A738u: goto label_7F21A738;
    case 0x7F21A73Cu: goto label_7F21A73C;
    case 0x7F21A740u: goto label_7F21A740;
    case 0x7F21A744u: goto label_7F21A744;
    case 0x7F21A748u: goto label_7F21A748;
    case 0x7F21A74Cu: goto label_7F21A74C;
    case 0x7F21A750u: goto label_7F21A750;
    case 0x7F21A754u: goto label_7F21A754;
    case 0x7F21A758u: goto label_7F21A758;
    case 0x7F21A75Cu: goto label_7F21A75C;
    case 0x7F21A760u: goto label_7F21A760;
    case 0x7F21A764u: goto label_7F21A764;
    case 0x7F21A768u: goto label_7F21A768;
    case 0x7F21A76Cu: goto label_7F21A76C;
    case 0x7F21A770u: goto label_7F21A770;
    case 0x7F21A774u: goto label_7F21A774;
    case 0x7F21A778u: goto label_7F21A778;
    case 0x7F21A77Cu: goto label_7F21A77C;
    case 0x7F21A780u: goto label_7F21A780;
    case 0x7F21A784u: goto label_7F21A784;
    case 0x7F21A788u: goto label_7F21A788;
    case 0x7F21A78Cu: goto label_7F21A78C;
    case 0x7F21A790u: goto label_7F21A790;
    case 0x7F21A794u: goto label_7F21A794;
    case 0x7F21A798u: goto label_7F21A798;
    case 0x7F21A79Cu: goto label_7F21A79C;
    case 0x7F21A7A0u: goto label_7F21A7A0;
    case 0x7F21A7A4u: goto label_7F21A7A4;
    case 0x7F21A7A8u: goto label_7F21A7A8;
    case 0x7F21A7ACu: goto label_7F21A7AC;
    case 0x7F21A7B0u: goto label_7F21A7B0;
    case 0x7F21A7B4u: goto label_7F21A7B4;
    case 0x7F21A7B8u: goto label_7F21A7B8;
    case 0x7F21A7BCu: goto label_7F21A7BC;
    case 0x7F21A7C0u: goto label_7F21A7C0;
    case 0x7F21A7C4u: goto label_7F21A7C4;
    case 0x7F21A7C8u: goto label_7F21A7C8;
    case 0x7F21A7CCu: goto label_7F21A7CC;
    case 0x7F21A7D0u: goto label_7F21A7D0;
    case 0x7F21A7D4u: goto label_7F21A7D4;
    case 0x7F21A7D8u: goto label_7F21A7D8;
    case 0x7F21A7DCu: goto label_7F21A7DC;
    case 0x7F21A7E0u: goto label_7F21A7E0;
    case 0x7F21A7E4u: goto label_7F21A7E4;
    case 0x7F21A7E8u: goto label_7F21A7E8;
    case 0x7F21A7ECu: goto label_7F21A7EC;
    case 0x7F21A7F0u: goto label_7F21A7F0;
    case 0x7F21A7F4u: goto label_7F21A7F4;
    case 0x7F21A7F8u: goto label_7F21A7F8;
    case 0x7F21A7FCu: goto label_7F21A7FC;
    case 0x7F21A800u: goto label_7F21A800;
    case 0x7F21A804u: goto label_7F21A804;
    case 0x7F21A808u: goto label_7F21A808;
    case 0x7F21A80Cu: goto label_7F21A80C;
    case 0x7F21A810u: goto label_7F21A810;
    case 0x7F21A814u: goto label_7F21A814;
    case 0x7F21A818u: goto label_7F21A818;
    case 0x7F21A81Cu: goto label_7F21A81C;
    case 0x7F21A820u: goto label_7F21A820;
    case 0x7F21A824u: goto label_7F21A824;
    case 0x7F21A828u: goto label_7F21A828;
    case 0x7F21A82Cu: goto label_7F21A82C;
    case 0x7F21A830u: goto label_7F21A830;
    case 0x7F21A834u: goto label_7F21A834;
    case 0x7F21A838u: goto label_7F21A838;
    case 0x7F21A83Cu: goto label_7F21A83C;
    case 0x7F21A840u: goto label_7F21A840;
    case 0x7F21A844u: goto label_7F21A844;
    case 0x7F21A848u: goto label_7F21A848;
    case 0x7F21A84Cu: goto label_7F21A84C;
    case 0x7F21A850u: goto label_7F21A850;
    case 0x7F21A854u: goto label_7F21A854;
    case 0x7F21A858u: goto label_7F21A858;
    case 0x7F21A85Cu: goto label_7F21A85C;
    case 0x7F21A860u: goto label_7F21A860;
    case 0x7F21A864u: goto label_7F21A864;
    case 0x7F21A868u: goto label_7F21A868;
    case 0x7F21A86Cu: goto label_7F21A86C;
    case 0x7F21A870u: goto label_7F21A870;
    case 0x7F21A874u: goto label_7F21A874;
    case 0x7F21A878u: goto label_7F21A878;
    case 0x7F21A87Cu: goto label_7F21A87C;
    case 0x7F21A880u: goto label_7F21A880;
    case 0x7F21A884u: goto label_7F21A884;
    case 0x7F21A888u: goto label_7F21A888;
    case 0x7F21A88Cu: goto label_7F21A88C;
    case 0x7F21A890u: goto label_7F21A890;
    case 0x7F21A894u: goto label_7F21A894;
    case 0x7F21A898u: goto label_7F21A898;
    case 0x7F21A89Cu: goto label_7F21A89C;
    case 0x7F21A8A0u: goto label_7F21A8A0;
    case 0x7F21A8A4u: goto label_7F21A8A4;
    case 0x7F21A8A8u: goto label_7F21A8A8;
    case 0x7F21A8ACu: goto label_7F21A8AC;
    case 0x7F21A8B0u: goto label_7F21A8B0;
    case 0x7F21A8B4u: goto label_7F21A8B4;
    case 0x7F21A8B8u: goto label_7F21A8B8;
    case 0x7F21A8BCu: goto label_7F21A8BC;
    case 0x7F21A8C0u: goto label_7F21A8C0;
    case 0x7F21A8C4u: goto label_7F21A8C4;
    case 0x7F21A8C8u: goto label_7F21A8C8;
    case 0x7F21A8CCu: goto label_7F21A8CC;
    case 0x7F21A8D0u: goto label_7F21A8D0;
    case 0x7F21A8D4u: goto label_7F21A8D4;
    case 0x7F21A8D8u: goto label_7F21A8D8;
    case 0x7F21A8DCu: goto label_7F21A8DC;
    case 0x7F21A8E0u: goto label_7F21A8E0;
    case 0x7F21A8E4u: goto label_7F21A8E4;
    case 0x7F21A8E8u: goto label_7F21A8E8;
    case 0x7F21A8ECu: goto label_7F21A8EC;
    case 0x7F21A8F0u: goto label_7F21A8F0;
    case 0x7F21A8F4u: goto label_7F21A8F4;
    case 0x7F21A8F8u: goto label_7F21A8F8;
    case 0x7F21A8FCu: goto label_7F21A8FC;
    case 0x7F21A900u: goto label_7F21A900;
    case 0x7F21A904u: goto label_7F21A904;
    case 0x7F21A908u: goto label_7F21A908;
    case 0x7F21A90Cu: goto label_7F21A90C;
    case 0x7F21A910u: goto label_7F21A910;
    case 0x7F21A914u: goto label_7F21A914;
    case 0x7F21A918u: goto label_7F21A918;
    case 0x7F21A91Cu: goto label_7F21A91C;
    case 0x7F21A920u: goto label_7F21A920;
    case 0x7F21A924u: goto label_7F21A924;
    case 0x7F21A928u: goto label_7F21A928;
    case 0x7F21A92Cu: goto label_7F21A92C;
    case 0x7F21A930u: goto label_7F21A930;
    case 0x7F21A934u: goto label_7F21A934;
    case 0x7F21A938u: goto label_7F21A938;
    case 0x7F21A93Cu: goto label_7F21A93C;
    case 0x7F21A940u: goto label_7F21A940;
    case 0x7F21A944u: goto label_7F21A944;
    case 0x7F21A948u: goto label_7F21A948;
    case 0x7F21A94Cu: goto label_7F21A94C;
    case 0x7F21A950u: goto label_7F21A950;
    case 0x7F21A954u: goto label_7F21A954;
    case 0x7F21A958u: goto label_7F21A958;
    case 0x7F21A95Cu: goto label_7F21A95C;
    case 0x7F21A960u: goto label_7F21A960;
    case 0x7F21A964u: goto label_7F21A964;
    case 0x7F21A968u: goto label_7F21A968;
    case 0x7F21A96Cu: goto label_7F21A96C;
    case 0x7F21A970u: goto label_7F21A970;
    case 0x7F21A974u: goto label_7F21A974;
    case 0x7F21A978u: goto label_7F21A978;
    case 0x7F21A97Cu: goto label_7F21A97C;
    case 0x7F21A980u: goto label_7F21A980;
    case 0x7F21A984u: goto label_7F21A984;
    case 0x7F21A988u: goto label_7F21A988;
    case 0x7F21A98Cu: goto label_7F21A98C;
    case 0x7F21A990u: goto label_7F21A990;
    case 0x7F21A994u: goto label_7F21A994;
    case 0x7F21A998u: goto label_7F21A998;
    case 0x7F21A99Cu: goto label_7F21A99C;
    case 0x7F21A9A0u: goto label_7F21A9A0;
    case 0x7F21A9A4u: goto label_7F21A9A4;
    case 0x7F21A9A8u: goto label_7F21A9A8;
    case 0x7F21A9ACu: goto label_7F21A9AC;
    case 0x7F21A9B0u: goto label_7F21A9B0;
    case 0x7F21A9B4u: goto label_7F21A9B4;
    case 0x7F21A9B8u: goto label_7F21A9B8;
    case 0x7F21A9BCu: goto label_7F21A9BC;
    case 0x7F21A9C0u: goto label_7F21A9C0;
    case 0x7F21A9C4u: goto label_7F21A9C4;
    case 0x7F21A9C8u: goto label_7F21A9C8;
    case 0x7F21A9CCu: goto label_7F21A9CC;
    case 0x7F21A9D0u: goto label_7F21A9D0;
    case 0x7F21A9D4u: goto label_7F21A9D4;
    case 0x7F21A9D8u: goto label_7F21A9D8;
    case 0x7F21A9DCu: goto label_7F21A9DC;
    case 0x7F21A9E0u: goto label_7F21A9E0;
    case 0x7F21A9E4u: goto label_7F21A9E4;
    case 0x7F21A9E8u: goto label_7F21A9E8;
    case 0x7F21A9ECu: goto label_7F21A9EC;
    case 0x7F21A9F0u: goto label_7F21A9F0;
    case 0x7F21A9F4u: goto label_7F21A9F4;
    case 0x7F21A9F8u: goto label_7F21A9F8;
    case 0x7F21A9FCu: goto label_7F21A9FC;
    case 0x7F21AA00u: goto label_7F21AA00;
    case 0x7F21AA04u: goto label_7F21AA04;
    case 0x7F21AA08u: goto label_7F21AA08;
    case 0x7F21AA0Cu: goto label_7F21AA0C;
    case 0x7F21AA10u: goto label_7F21AA10;
    case 0x7F21AA14u: goto label_7F21AA14;
    case 0x7F21AA18u: goto label_7F21AA18;
    case 0x7F21AA1Cu: goto label_7F21AA1C;
    case 0x7F21AA20u: goto label_7F21AA20;
    case 0x7F21AA24u: goto label_7F21AA24;
    case 0x7F21AA28u: goto label_7F21AA28;
    case 0x7F21AA2Cu: goto label_7F21AA2C;
    case 0x7F21AA30u: goto label_7F21AA30;
    case 0x7F21AA34u: goto label_7F21AA34;
    case 0x7F21AA38u: goto label_7F21AA38;
    case 0x7F21AA3Cu: goto label_7F21AA3C;
    case 0x7F21AA40u: goto label_7F21AA40;
    case 0x7F21AA44u: goto label_7F21AA44;
    case 0x7F21AA48u: goto label_7F21AA48;
    case 0x7F21AA4Cu: goto label_7F21AA4C;
    case 0x7F21AA50u: goto label_7F21AA50;
    case 0x7F21AA54u: goto label_7F21AA54;
    case 0x7F21AA58u: goto label_7F21AA58;
    case 0x7F21AA5Cu: goto label_7F21AA5C;
    case 0x7F21AA60u: goto label_7F21AA60;
    case 0x7F21AA64u: goto label_7F21AA64;
    case 0x7F21AA68u: goto label_7F21AA68;
    case 0x7F21AA6Cu: goto label_7F21AA6C;
    case 0x7F21AA70u: goto label_7F21AA70;
    case 0x7F21AA74u: goto label_7F21AA74;
    case 0x7F21AA78u: goto label_7F21AA78;
    case 0x7F21AA7Cu: goto label_7F21AA7C;
    case 0x7F21AA80u: goto label_7F21AA80;
    case 0x7F21AA84u: goto label_7F21AA84;
    case 0x7F21AA88u: goto label_7F21AA88;
    case 0x7F21AA8Cu: goto label_7F21AA8C;
    case 0x7F21AA90u: goto label_7F21AA90;
    case 0x7F21AA94u: goto label_7F21AA94;
    case 0x7F21AA98u: goto label_7F21AA98;
    case 0x7F21AA9Cu: goto label_7F21AA9C;
    case 0x7F21AAA0u: goto label_7F21AAA0;
    case 0x7F21AAA4u: goto label_7F21AAA4;
    case 0x7F21AAA8u: goto label_7F21AAA8;
    case 0x7F21AAACu: goto label_7F21AAAC;
    case 0x7F21AAB0u: goto label_7F21AAB0;
    case 0x7F21AAB4u: goto label_7F21AAB4;
    case 0x7F21AAB8u: goto label_7F21AAB8;
    case 0x7F21AABCu: goto label_7F21AABC;
    case 0x7F21AAC0u: goto label_7F21AAC0;
    case 0x7F21AAC4u: goto label_7F21AAC4;
    case 0x7F21AAC8u: goto label_7F21AAC8;
    case 0x7F21AACCu: goto label_7F21AACC;
    case 0x7F21AAD0u: goto label_7F21AAD0;
    case 0x7F21AAD4u: goto label_7F21AAD4;
    case 0x7F21AAD8u: goto label_7F21AAD8;
    case 0x7F21AADCu: goto label_7F21AADC;
    case 0x7F21AAE0u: goto label_7F21AAE0;
    case 0x7F21AAE4u: goto label_7F21AAE4;
    case 0x7F21AAE8u: goto label_7F21AAE8;
    case 0x7F21AAECu: goto label_7F21AAEC;
    case 0x7F21AAF0u: goto label_7F21AAF0;
    case 0x7F21AAF4u: goto label_7F21AAF4;
    case 0x7F21AAF8u: goto label_7F21AAF8;
    case 0x7F21AAFCu: goto label_7F21AAFC;
    case 0x7F21AB00u: goto label_7F21AB00;
    case 0x7F21AB04u: goto label_7F21AB04;
    case 0x7F21AB08u: goto label_7F21AB08;
    case 0x7F21AB0Cu: goto label_7F21AB0C;
    case 0x7F21AB10u: goto label_7F21AB10;
    case 0x7F21AB14u: goto label_7F21AB14;
    case 0x7F21AB18u: goto label_7F21AB18;
    case 0x7F21AB1Cu: goto label_7F21AB1C;
    case 0x7F21AB20u: goto label_7F21AB20;
    case 0x7F21AB24u: goto label_7F21AB24;
    case 0x7F21AB28u: goto label_7F21AB28;
    case 0x7F21AB2Cu: goto label_7F21AB2C;
    case 0x7F21AB30u: goto label_7F21AB30;
    case 0x7F21AB34u: goto label_7F21AB34;
    case 0x7F21AB38u: goto label_7F21AB38;
    case 0x7F21AB3Cu: goto label_7F21AB3C;
    case 0x7F21AB40u: goto label_7F21AB40;
    case 0x7F21AB44u: goto label_7F21AB44;
    case 0x7F21AB48u: goto label_7F21AB48;
    case 0x7F21AB4Cu: goto label_7F21AB4C;
    case 0x7F21AB50u: goto label_7F21AB50;
    case 0x7F21AB54u: goto label_7F21AB54;
    case 0x7F21AB58u: goto label_7F21AB58;
    case 0x7F21AB5Cu: goto label_7F21AB5C;
    case 0x7F21AB60u: goto label_7F21AB60;
    case 0x7F21AB64u: goto label_7F21AB64;
    case 0x7F21AB68u: goto label_7F21AB68;
    case 0x7F21AB6Cu: goto label_7F21AB6C;
    case 0x7F21AB70u: goto label_7F21AB70;
    case 0x7F21AB74u: goto label_7F21AB74;
    case 0x7F21AB78u: goto label_7F21AB78;
    case 0x7F21AB7Cu: goto label_7F21AB7C;
    case 0x7F21AB80u: goto label_7F21AB80;
    case 0x7F21AB84u: goto label_7F21AB84;
    case 0x7F21AB88u: goto label_7F21AB88;
    case 0x7F21AB8Cu: goto label_7F21AB8C;
    case 0x7F21AB90u: goto label_7F21AB90;
    case 0x7F21AB94u: goto label_7F21AB94;
    case 0x7F21AB98u: goto label_7F21AB98;
    case 0x7F21AB9Cu: goto label_7F21AB9C;
    case 0x7F21ABA0u: goto label_7F21ABA0;
    case 0x7F21ABA4u: goto label_7F21ABA4;
    case 0x7F21ABA8u: goto label_7F21ABA8;
    case 0x7F21ABACu: goto label_7F21ABAC;
    case 0x7F21ABB0u: goto label_7F21ABB0;
    case 0x7F21ABB4u: goto label_7F21ABB4;
    case 0x7F21ABB8u: goto label_7F21ABB8;
    case 0x7F21ABBCu: goto label_7F21ABBC;
    case 0x7F21ABC0u: goto label_7F21ABC0;
    case 0x7F21ABC4u: goto label_7F21ABC4;
    case 0x7F21ABC8u: goto label_7F21ABC8;
    case 0x7F21ABCCu: goto label_7F21ABCC;
    case 0x7F21ABD0u: goto label_7F21ABD0;
    case 0x7F21ABD4u: goto label_7F21ABD4;
    case 0x7F21ABD8u: goto label_7F21ABD8;
    case 0x7F21ABDCu: goto label_7F21ABDC;
    case 0x7F21ABE0u: goto label_7F21ABE0;
    case 0x7F21ABE4u: goto label_7F21ABE4;
    case 0x7F21ABE8u: goto label_7F21ABE8;
    case 0x7F21ABECu: goto label_7F21ABEC;
    case 0x7F21ABF0u: goto label_7F21ABF0;
    case 0x7F21ABF4u: goto label_7F21ABF4;
    case 0x7F21ABF8u: goto label_7F21ABF8;
    case 0x7F21ABFCu: goto label_7F21ABFC;
    case 0x7F21AC00u: goto label_7F21AC00;
    case 0x7F21AC04u: goto label_7F21AC04;
    case 0x7F21AC08u: goto label_7F21AC08;
    case 0x7F21AC0Cu: goto label_7F21AC0C;
    case 0x7F21AC10u: goto label_7F21AC10;
    case 0x7F21AC14u: goto label_7F21AC14;
    case 0x7F21AC18u: goto label_7F21AC18;
    case 0x7F21AC1Cu: goto label_7F21AC1C;
    case 0x7F21AC20u: goto label_7F21AC20;
    case 0x7F21AC24u: goto label_7F21AC24;
    case 0x7F21AC28u: goto label_7F21AC28;
    case 0x7F21AC2Cu: goto label_7F21AC2C;
    case 0x7F21AC30u: goto label_7F21AC30;
    case 0x7F21AC34u: goto label_7F21AC34;
    case 0x7F21AC38u: goto label_7F21AC38;
    case 0x7F21AC3Cu: goto label_7F21AC3C;
    case 0x7F21AC40u: goto label_7F21AC40;
    case 0x7F21AC44u: goto label_7F21AC44;
    case 0x7F21AC48u: goto label_7F21AC48;
    case 0x7F21AC4Cu: goto label_7F21AC4C;
    case 0x7F21AC50u: goto label_7F21AC50;
    case 0x7F21AC54u: goto label_7F21AC54;
    case 0x7F21AC58u: goto label_7F21AC58;
    case 0x7F21AC5Cu: goto label_7F21AC5C;
    case 0x7F21AC60u: goto label_7F21AC60;
    case 0x7F21AC64u: goto label_7F21AC64;
    case 0x7F21AC68u: goto label_7F21AC68;
    case 0x7F21AC6Cu: goto label_7F21AC6C;
    case 0x7F21AC70u: goto label_7F21AC70;
    case 0x7F21AC74u: goto label_7F21AC74;
    case 0x7F21AC78u: goto label_7F21AC78;
    case 0x7F21AC7Cu: goto label_7F21AC7C;
    case 0x7F21AC80u: goto label_7F21AC80;
    case 0x7F21AC84u: goto label_7F21AC84;
    case 0x7F21AC88u: goto label_7F21AC88;
    case 0x7F21AC8Cu: goto label_7F21AC8C;
    case 0x7F21AC90u: goto label_7F21AC90;
    case 0x7F21AC94u: goto label_7F21AC94;
    case 0x7F21AC98u: goto label_7F21AC98;
    case 0x7F21AC9Cu: goto label_7F21AC9C;
    case 0x7F21ACA0u: goto label_7F21ACA0;
    case 0x7F21ACA4u: goto label_7F21ACA4;
    case 0x7F21ACA8u: goto label_7F21ACA8;
    case 0x7F21ACACu: goto label_7F21ACAC;
    case 0x7F21ACB0u: goto label_7F21ACB0;
    case 0x7F21ACB4u: goto label_7F21ACB4;
    case 0x7F21ACB8u: goto label_7F21ACB8;
    case 0x7F21ACBCu: goto label_7F21ACBC;
    case 0x7F21ACC0u: goto label_7F21ACC0;
    case 0x7F21ACC4u: goto label_7F21ACC4;
    case 0x7F21ACC8u: goto label_7F21ACC8;
    case 0x7F21ACCCu: goto label_7F21ACCC;
    case 0x7F21ACD0u: goto label_7F21ACD0;
    case 0x7F21ACD4u: goto label_7F21ACD4;
    case 0x7F21ACD8u: goto label_7F21ACD8;
    case 0x7F21ACDCu: goto label_7F21ACDC;
    case 0x7F21ACE0u: goto label_7F21ACE0;
    case 0x7F21ACE4u: goto label_7F21ACE4;
    case 0x7F21ACE8u: goto label_7F21ACE8;
    case 0x7F21ACECu: goto label_7F21ACEC;
    case 0x7F21ACF0u: goto label_7F21ACF0;
    case 0x7F21ACF4u: goto label_7F21ACF4;
    case 0x7F21ACF8u: goto label_7F21ACF8;
    case 0x7F21ACFCu: goto label_7F21ACFC;
    case 0x7F21AD00u: goto label_7F21AD00;
    case 0x7F21AD04u: goto label_7F21AD04;
    case 0x7F21AD08u: goto label_7F21AD08;
    case 0x7F21AD0Cu: goto label_7F21AD0C;
    case 0x7F21AD10u: goto label_7F21AD10;
    case 0x7F21AD14u: goto label_7F21AD14;
    case 0x7F21AD18u: goto label_7F21AD18;
    case 0x7F21AD1Cu: goto label_7F21AD1C;
    case 0x7F21AD20u: goto label_7F21AD20;
    case 0x7F21AD24u: goto label_7F21AD24;
    case 0x7F21AD28u: goto label_7F21AD28;
    case 0x7F21AD2Cu: goto label_7F21AD2C;
    case 0x7F21AD30u: goto label_7F21AD30;
    case 0x7F21AD34u: goto label_7F21AD34;
    case 0x7F21AD38u: goto label_7F21AD38;
    case 0x7F21AD3Cu: goto label_7F21AD3C;
    case 0x7F21AD40u: goto label_7F21AD40;
    case 0x7F21AD44u: goto label_7F21AD44;
    case 0x7F21AD48u: goto label_7F21AD48;
    case 0x7F21AD4Cu: goto label_7F21AD4C;
    case 0x7F21AD50u: goto label_7F21AD50;
    case 0x7F21AD54u: goto label_7F21AD54;
    case 0x7F21AD58u: goto label_7F21AD58;
    case 0x7F21AD5Cu: goto label_7F21AD5C;
    case 0x7F21AD60u: goto label_7F21AD60;
    case 0x7F21AD64u: goto label_7F21AD64;
    case 0x7F21AD68u: goto label_7F21AD68;
    case 0x7F21AD6Cu: goto label_7F21AD6C;
    case 0x7F21AD70u: goto label_7F21AD70;
    case 0x7F21AD74u: goto label_7F21AD74;
    case 0x7F21AD78u: goto label_7F21AD78;
    case 0x7F21AD7Cu: goto label_7F21AD7C;
    case 0x7F21AD80u: goto label_7F21AD80;
    case 0x7F21AD84u: goto label_7F21AD84;
    case 0x7F21AD88u: goto label_7F21AD88;
    case 0x7F21AD8Cu: goto label_7F21AD8C;
    case 0x7F21AD90u: goto label_7F21AD90;
    case 0x7F21AD94u: goto label_7F21AD94;
    case 0x7F21AD98u: goto label_7F21AD98;
    case 0x7F21AD9Cu: goto label_7F21AD9C;
    case 0x7F21ADA0u: goto label_7F21ADA0;
    case 0x7F21ADA4u: goto label_7F21ADA4;
    case 0x7F21ADA8u: goto label_7F21ADA8;
    case 0x7F21ADACu: goto label_7F21ADAC;
    case 0x7F21ADB0u: goto label_7F21ADB0;
    case 0x7F21ADB4u: goto label_7F21ADB4;
    case 0x7F21ADB8u: goto label_7F21ADB8;
    case 0x7F21ADBCu: goto label_7F21ADBC;
    case 0x7F21ADC0u: goto label_7F21ADC0;
    case 0x7F21ADC4u: goto label_7F21ADC4;
    case 0x7F21ADC8u: goto label_7F21ADC8;
    case 0x7F21ADCCu: goto label_7F21ADCC;
    case 0x7F21ADD0u: goto label_7F21ADD0;
    case 0x7F21ADD4u: goto label_7F21ADD4;
    case 0x7F21ADD8u: goto label_7F21ADD8;
    case 0x7F21ADDCu: goto label_7F21ADDC;
    case 0x7F21ADE0u: goto label_7F21ADE0;
    case 0x7F21ADE4u: goto label_7F21ADE4;
    case 0x7F21ADE8u: goto label_7F21ADE8;
    case 0x7F21ADECu: goto label_7F21ADEC;
    case 0x7F21ADF0u: goto label_7F21ADF0;
    case 0x7F21ADF4u: goto label_7F21ADF4;
    case 0x7F21ADF8u: goto label_7F21ADF8;
    case 0x7F21ADFCu: goto label_7F21ADFC;
    case 0x7F21AE00u: goto label_7F21AE00;
    case 0x7F21AE04u: goto label_7F21AE04;
    case 0x7F21AE08u: goto label_7F21AE08;
    case 0x7F21AE0Cu: goto label_7F21AE0C;
    case 0x7F21AE10u: goto label_7F21AE10;
    case 0x7F21AE14u: goto label_7F21AE14;
    case 0x7F21AE18u: goto label_7F21AE18;
    case 0x7F21AE1Cu: goto label_7F21AE1C;
    case 0x7F21AE20u: goto label_7F21AE20;
    case 0x7F21AE24u: goto label_7F21AE24;
    case 0x7F21AE28u: goto label_7F21AE28;
    case 0x7F21AE2Cu: goto label_7F21AE2C;
    case 0x7F21AE30u: goto label_7F21AE30;
    case 0x7F21AE34u: goto label_7F21AE34;
    case 0x7F21AE38u: goto label_7F21AE38;
    case 0x7F21AE3Cu: goto label_7F21AE3C;
    case 0x7F21AE40u: goto label_7F21AE40;
    case 0x7F21AE44u: goto label_7F21AE44;
    case 0x7F21AE48u: goto label_7F21AE48;
    case 0x7F21AE4Cu: goto label_7F21AE4C;
    case 0x7F21AE50u: goto label_7F21AE50;
    case 0x7F21AE54u: goto label_7F21AE54;
    case 0x7F21AE58u: goto label_7F21AE58;
    case 0x7F21AE5Cu: goto label_7F21AE5C;
    case 0x7F21AE60u: goto label_7F21AE60;
    case 0x7F21AE64u: goto label_7F21AE64;
    case 0x7F21AE68u: goto label_7F21AE68;
    case 0x7F21AE6Cu: goto label_7F21AE6C;
    case 0x7F21AE70u: goto label_7F21AE70;
    case 0x7F21AE74u: goto label_7F21AE74;
    case 0x7F21AE78u: goto label_7F21AE78;
    case 0x7F21AE7Cu: goto label_7F21AE7C;
    case 0x7F21AE80u: goto label_7F21AE80;
    case 0x7F21AE84u: goto label_7F21AE84;
    case 0x7F21AE88u: goto label_7F21AE88;
    case 0x7F21AE8Cu: goto label_7F21AE8C;
    case 0x7F21AE90u: goto label_7F21AE90;
    case 0x7F21AE94u: goto label_7F21AE94;
    case 0x7F21AE98u: goto label_7F21AE98;
    case 0x7F21AE9Cu: goto label_7F21AE9C;
    case 0x7F21AEA0u: goto label_7F21AEA0;
    case 0x7F21AEA4u: goto label_7F21AEA4;
    case 0x7F21AEA8u: goto label_7F21AEA8;
    case 0x7F21AEACu: goto label_7F21AEAC;
    case 0x7F21AEB0u: goto label_7F21AEB0;
    case 0x7F21AEB4u: goto label_7F21AEB4;
    case 0x7F21AEB8u: goto label_7F21AEB8;
    case 0x7F21AEBCu: goto label_7F21AEBC;
    case 0x7F21AEC0u: goto label_7F21AEC0;
    case 0x7F21AEC4u: goto label_7F21AEC4;
    case 0x7F21AEC8u: goto label_7F21AEC8;
    case 0x7F21AECCu: goto label_7F21AECC;
    case 0x7F21AED0u: goto label_7F21AED0;
    case 0x7F21AED4u: goto label_7F21AED4;
    case 0x7F21AED8u: goto label_7F21AED8;
    case 0x7F21AEDCu: goto label_7F21AEDC;
    case 0x7F21AEE0u: goto label_7F21AEE0;
    case 0x7F21AEE4u: goto label_7F21AEE4;
    case 0x7F21AEE8u: goto label_7F21AEE8;
    case 0x7F21AEECu: goto label_7F21AEEC;
    case 0x7F21AEF0u: goto label_7F21AEF0;
    case 0x7F21AEF4u: goto label_7F21AEF4;
    case 0x7F21AEF8u: goto label_7F21AEF8;
    case 0x7F21AEFCu: goto label_7F21AEFC;
    case 0x7F21AF00u: goto label_7F21AF00;
    case 0x7F21AF04u: goto label_7F21AF04;
    case 0x7F21AF08u: goto label_7F21AF08;
    case 0x7F21AF0Cu: goto label_7F21AF0C;
    case 0x7F21AF10u: goto label_7F21AF10;
    case 0x7F21AF14u: goto label_7F21AF14;
    case 0x7F21AF18u: goto label_7F21AF18;
    case 0x7F21AF1Cu: goto label_7F21AF1C;
    case 0x7F21AF20u: goto label_7F21AF20;
    case 0x7F21AF24u: goto label_7F21AF24;
    case 0x7F21AF28u: goto label_7F21AF28;
    case 0x7F21AF2Cu: goto label_7F21AF2C;
    case 0x7F21AF30u: goto label_7F21AF30;
    case 0x7F21AF34u: goto label_7F21AF34;
    case 0x7F21AF38u: goto label_7F21AF38;
    case 0x7F21AF3Cu: goto label_7F21AF3C;
    case 0x7F21AF40u: goto label_7F21AF40;
    case 0x7F21AF44u: goto label_7F21AF44;
    case 0x7F21AF48u: goto label_7F21AF48;
    case 0x7F21AF4Cu: goto label_7F21AF4C;
    case 0x7F21AF50u: goto label_7F21AF50;
    case 0x7F21AF54u: goto label_7F21AF54;
    case 0x7F21AF58u: goto label_7F21AF58;
    case 0x7F21AF5Cu: goto label_7F21AF5C;
    case 0x7F21AF60u: goto label_7F21AF60;
    case 0x7F21AF64u: goto label_7F21AF64;
    case 0x7F21AF68u: goto label_7F21AF68;
    case 0x7F21AF6Cu: goto label_7F21AF6C;
    case 0x7F21AF70u: goto label_7F21AF70;
    case 0x7F21AF74u: goto label_7F21AF74;
    case 0x7F21AF78u: goto label_7F21AF78;
    case 0x7F21AF7Cu: goto label_7F21AF7C;
    case 0x7F21AF80u: goto label_7F21AF80;
    case 0x7F21AF84u: goto label_7F21AF84;
    case 0x7F21AF88u: goto label_7F21AF88;
    case 0x7F21AF8Cu: goto label_7F21AF8C;
    case 0x7F21AF90u: goto label_7F21AF90;
    case 0x7F21AF94u: goto label_7F21AF94;
    case 0x7F21AF98u: goto label_7F21AF98;
    case 0x7F21AF9Cu: goto label_7F21AF9C;
    case 0x7F21AFA0u: goto label_7F21AFA0;
    case 0x7F21AFA4u: goto label_7F21AFA4;
    case 0x7F21AFA8u: goto label_7F21AFA8;
    case 0x7F21AFACu: goto label_7F21AFAC;
    case 0x7F21AFB0u: goto label_7F21AFB0;
    case 0x7F21AFB4u: goto label_7F21AFB4;
    case 0x7F21AFB8u: goto label_7F21AFB8;
    case 0x7F21AFBCu: goto label_7F21AFBC;
    case 0x7F21AFC0u: goto label_7F21AFC0;
    case 0x7F21AFC4u: goto label_7F21AFC4;
    case 0x7F21AFC8u: goto label_7F21AFC8;
    case 0x7F21AFCCu: goto label_7F21AFCC;
    case 0x7F21AFD0u: goto label_7F21AFD0;
    case 0x7F21AFD4u: goto label_7F21AFD4;
    case 0x7F21AFD8u: goto label_7F21AFD8;
    case 0x7F21AFDCu: goto label_7F21AFDC;
    case 0x7F21AFE0u: goto label_7F21AFE0;
    case 0x7F21AFE4u: goto label_7F21AFE4;
    case 0x7F21AFE8u: goto label_7F21AFE8;
    case 0x7F21AFECu: goto label_7F21AFEC;
    case 0x7F21AFF0u: goto label_7F21AFF0;
    case 0x7F21AFF4u: goto label_7F21AFF4;
    case 0x7F21AFF8u: goto label_7F21AFF8;
    case 0x7F21AFFCu: goto label_7F21AFFC;
    case 0x7F21B000u: goto label_7F21B000;
    case 0x7F21B004u: goto label_7F21B004;
    case 0x7F21B008u: goto label_7F21B008;
    case 0x7F21B00Cu: goto label_7F21B00C;
    case 0x7F21B010u: goto label_7F21B010;
    case 0x7F21B014u: goto label_7F21B014;
    case 0x7F21B018u: goto label_7F21B018;
    case 0x7F21B01Cu: goto label_7F21B01C;
    case 0x7F21B020u: goto label_7F21B020;
    case 0x7F21B024u: goto label_7F21B024;
    case 0x7F21B028u: goto label_7F21B028;
    case 0x7F21B02Cu: goto label_7F21B02C;
    case 0x7F21B030u: goto label_7F21B030;
    case 0x7F21B034u: goto label_7F21B034;
    case 0x7F21B038u: goto label_7F21B038;
    case 0x7F21B03Cu: goto label_7F21B03C;
    case 0x7F21B040u: goto label_7F21B040;
    case 0x7F21B044u: goto label_7F21B044;
    case 0x7F21B048u: goto label_7F21B048;
    case 0x7F21B04Cu: goto label_7F21B04C;
    case 0x7F21B050u: goto label_7F21B050;
    case 0x7F21B054u: goto label_7F21B054;
    case 0x7F21B058u: goto label_7F21B058;
    case 0x7F21B05Cu: goto label_7F21B05C;
    case 0x7F21B060u: goto label_7F21B060;
    case 0x7F21B064u: goto label_7F21B064;
    case 0x7F21B068u: goto label_7F21B068;
    case 0x7F21B06Cu: goto label_7F21B06C;
    case 0x7F21B070u: goto label_7F21B070;
    case 0x7F21B074u: goto label_7F21B074;
    case 0x7F21B078u: goto label_7F21B078;
    case 0x7F21B07Cu: goto label_7F21B07C;
    case 0x7F21B080u: goto label_7F21B080;
    case 0x7F21B084u: goto label_7F21B084;
    case 0x7F21B088u: goto label_7F21B088;
    case 0x7F21B08Cu: goto label_7F21B08C;
    case 0x7F21B090u: goto label_7F21B090;
    case 0x7F21B094u: goto label_7F21B094;
    case 0x7F21B098u: goto label_7F21B098;
    case 0x7F21B09Cu: goto label_7F21B09C;
    case 0x7F21B0A0u: goto label_7F21B0A0;
    case 0x7F21B0A4u: goto label_7F21B0A4;
    case 0x7F21B0A8u: goto label_7F21B0A8;
    case 0x7F21B0ACu: goto label_7F21B0AC;
    case 0x7F21B0B0u: goto label_7F21B0B0;
    case 0x7F21B0B4u: goto label_7F21B0B4;
    case 0x7F21B0B8u: goto label_7F21B0B8;
    case 0x7F21B0BCu: goto label_7F21B0BC;
    case 0x7F21B0C0u: goto label_7F21B0C0;
    case 0x7F21B0C4u: goto label_7F21B0C4;
    case 0x7F21B0C8u: goto label_7F21B0C8;
    case 0x7F21B0CCu: goto label_7F21B0CC;
    case 0x7F21B0D0u: goto label_7F21B0D0;
    case 0x7F21B0D4u: goto label_7F21B0D4;
    case 0x7F21B0D8u: goto label_7F21B0D8;
    case 0x7F21B0DCu: goto label_7F21B0DC;
    case 0x7F21B0E0u: goto label_7F21B0E0;
    case 0x7F21B0E4u: goto label_7F21B0E4;
    case 0x7F21B0E8u: goto label_7F21B0E8;
    case 0x7F21B0ECu: goto label_7F21B0EC;
    case 0x7F21B0F0u: goto label_7F21B0F0;
    case 0x7F21B0F4u: goto label_7F21B0F4;
    case 0x7F21B0F8u: goto label_7F21B0F8;
    case 0x7F21B0FCu: goto label_7F21B0FC;
    case 0x7F21B100u: goto label_7F21B100;
    case 0x7F21B104u: goto label_7F21B104;
    case 0x7F21B108u: goto label_7F21B108;
    case 0x7F21B10Cu: goto label_7F21B10C;
    case 0x7F21B110u: goto label_7F21B110;
    case 0x7F21B114u: goto label_7F21B114;
    case 0x7F21B118u: goto label_7F21B118;
    case 0x7F21B11Cu: goto label_7F21B11C;
    case 0x7F21B120u: goto label_7F21B120;
    case 0x7F21B124u: goto label_7F21B124;
    case 0x7F21B128u: goto label_7F21B128;
    case 0x7F21B12Cu: goto label_7F21B12C;
    case 0x7F21B130u: goto label_7F21B130;
    case 0x7F21B134u: goto label_7F21B134;
    case 0x7F21B138u: goto label_7F21B138;
    case 0x7F21B13Cu: goto label_7F21B13C;
    case 0x7F21B140u: goto label_7F21B140;
    case 0x7F21B144u: goto label_7F21B144;
    case 0x7F21B148u: goto label_7F21B148;
    case 0x7F21B14Cu: goto label_7F21B14C;
    case 0x7F21B150u: goto label_7F21B150;
    case 0x7F21B154u: goto label_7F21B154;
    case 0x7F21B158u: goto label_7F21B158;
    case 0x7F21B15Cu: goto label_7F21B15C;
    case 0x7F21B160u: goto label_7F21B160;
    case 0x7F21B164u: goto label_7F21B164;
    case 0x7F21B168u: goto label_7F21B168;
    case 0x7F21B16Cu: goto label_7F21B16C;
    case 0x7F21B170u: goto label_7F21B170;
    case 0x7F21B174u: goto label_7F21B174;
    case 0x7F21B178u: goto label_7F21B178;
    case 0x7F21B17Cu: goto label_7F21B17C;
    case 0x7F21B180u: goto label_7F21B180;
    case 0x7F21B184u: goto label_7F21B184;
    case 0x7F21B188u: goto label_7F21B188;
    case 0x7F21B18Cu: goto label_7F21B18C;
    case 0x7F21B190u: goto label_7F21B190;
    case 0x7F21B194u: goto label_7F21B194;
    case 0x7F21B198u: goto label_7F21B198;
    case 0x7F21B19Cu: goto label_7F21B19C;
    case 0x7F21B1A0u: goto label_7F21B1A0;
    case 0x7F21B1A4u: goto label_7F21B1A4;
    case 0x7F21B1A8u: goto label_7F21B1A8;
    case 0x7F21B1ACu: goto label_7F21B1AC;
    case 0x7F21B1B0u: goto label_7F21B1B0;
    case 0x7F21B1B4u: goto label_7F21B1B4;
    case 0x7F21B1B8u: goto label_7F21B1B8;
    case 0x7F21B1BCu: goto label_7F21B1BC;
    case 0x7F21B1C0u: goto label_7F21B1C0;
    case 0x7F21B1C4u: goto label_7F21B1C4;
    case 0x7F21B1C8u: goto label_7F21B1C8;
    case 0x7F21B1CCu: goto label_7F21B1CC;
    case 0x7F21B1D0u: goto label_7F21B1D0;
    case 0x7F21B1D4u: goto label_7F21B1D4;
    case 0x7F21B1D8u: goto label_7F21B1D8;
    case 0x7F21B1DCu: goto label_7F21B1DC;
    case 0x7F21B1E0u: goto label_7F21B1E0;
    case 0x7F21B1E4u: goto label_7F21B1E4;
    case 0x7F21B1E8u: goto label_7F21B1E8;
    case 0x7F21B1ECu: goto label_7F21B1EC;
    case 0x7F21B1F0u: goto label_7F21B1F0;
    case 0x7F21B1F4u: goto label_7F21B1F4;
    case 0x7F21B1F8u: goto label_7F21B1F8;
    case 0x7F21B1FCu: goto label_7F21B1FC;
    case 0x7F21B200u: goto label_7F21B200;
    case 0x7F21B204u: goto label_7F21B204;
    case 0x7F21B208u: goto label_7F21B208;
    case 0x7F21B20Cu: goto label_7F21B20C;
    case 0x7F21B210u: goto label_7F21B210;
    case 0x7F21B214u: goto label_7F21B214;
    case 0x7F21B218u: goto label_7F21B218;
    case 0x7F21B21Cu: goto label_7F21B21C;
    case 0x7F21B220u: goto label_7F21B220;
    case 0x7F21B224u: goto label_7F21B224;
    case 0x7F21B228u: goto label_7F21B228;
    case 0x7F21B22Cu: goto label_7F21B22C;
    case 0x7F21B230u: goto label_7F21B230;
    case 0x7F21B234u: goto label_7F21B234;
    case 0x7F21B238u: goto label_7F21B238;
    case 0x7F21B23Cu: goto label_7F21B23C;
    case 0x7F21B240u: goto label_7F21B240;
    case 0x7F21B244u: goto label_7F21B244;
    case 0x7F21B248u: goto label_7F21B248;
    case 0x7F21B24Cu: goto label_7F21B24C;
    case 0x7F21B250u: goto label_7F21B250;
    case 0x7F21B254u: goto label_7F21B254;
    case 0x7F21B258u: goto label_7F21B258;
    case 0x7F21B25Cu: goto label_7F21B25C;
    case 0x7F21B260u: goto label_7F21B260;
    case 0x7F21B264u: goto label_7F21B264;
    case 0x7F21B268u: goto label_7F21B268;
    case 0x7F21B26Cu: goto label_7F21B26C;
    case 0x7F21B270u: goto label_7F21B270;
    case 0x7F21B274u: goto label_7F21B274;
    case 0x7F21B278u: goto label_7F21B278;
    case 0x7F21B27Cu: goto label_7F21B27C;
    case 0x7F21B280u: goto label_7F21B280;
    case 0x7F21B284u: goto label_7F21B284;
    case 0x7F21B288u: goto label_7F21B288;
    case 0x7F21B28Cu: goto label_7F21B28C;
    case 0x7F21B290u: goto label_7F21B290;
    case 0x7F21B294u: goto label_7F21B294;
    case 0x7F21B298u: goto label_7F21B298;
    case 0x7F21B29Cu: goto label_7F21B29C;
    case 0x7F21B2A0u: goto label_7F21B2A0;
    case 0x7F21B2A4u: goto label_7F21B2A4;
    case 0x7F21B2A8u: goto label_7F21B2A8;
    case 0x7F21B2ACu: goto label_7F21B2AC;
    case 0x7F21B2B0u: goto label_7F21B2B0;
    case 0x7F21B2B4u: goto label_7F21B2B4;
    case 0x7F21B2B8u: goto label_7F21B2B8;
    case 0x7F21B2BCu: goto label_7F21B2BC;
    case 0x7F21B2C0u: goto label_7F21B2C0;
    case 0x7F21B2C4u: goto label_7F21B2C4;
    case 0x7F21B2C8u: goto label_7F21B2C8;
    case 0x7F21B2CCu: goto label_7F21B2CC;
    case 0x7F21B2D0u: goto label_7F21B2D0;
    case 0x7F21B2D4u: goto label_7F21B2D4;
    case 0x7F21B2D8u: goto label_7F21B2D8;
    case 0x7F21B2DCu: goto label_7F21B2DC;
    case 0x7F21B2E0u: goto label_7F21B2E0;
    case 0x7F21B2E4u: goto label_7F21B2E4;
    case 0x7F21B2E8u: goto label_7F21B2E8;
    case 0x7F21B2ECu: goto label_7F21B2EC;
    case 0x7F21B2F0u: goto label_7F21B2F0;
    case 0x7F21B2F4u: goto label_7F21B2F4;
    case 0x7F21B2F8u: goto label_7F21B2F8;
    case 0x7F21B2FCu: goto label_7F21B2FC;
    case 0x7F21B300u: goto label_7F21B300;
    case 0x7F21B304u: goto label_7F21B304;
    case 0x7F21B308u: goto label_7F21B308;
    case 0x7F21B30Cu: goto label_7F21B30C;
    case 0x7F21B310u: goto label_7F21B310;
    case 0x7F21B314u: goto label_7F21B314;
    case 0x7F21B318u: goto label_7F21B318;
    case 0x7F21B31Cu: goto label_7F21B31C;
    case 0x7F21B320u: goto label_7F21B320;
    case 0x7F21B324u: goto label_7F21B324;
    case 0x7F21B328u: goto label_7F21B328;
    case 0x7F21B32Cu: goto label_7F21B32C;
    case 0x7F21B330u: goto label_7F21B330;
    case 0x7F21B334u: goto label_7F21B334;
    case 0x7F21B338u: goto label_7F21B338;
    case 0x7F21B33Cu: goto label_7F21B33C;
    case 0x7F21B340u: goto label_7F21B340;
    case 0x7F21B344u: goto label_7F21B344;
    case 0x7F21B348u: goto label_7F21B348;
    case 0x7F21B34Cu: goto label_7F21B34C;
    case 0x7F21B350u: goto label_7F21B350;
    case 0x7F21B354u: goto label_7F21B354;
    case 0x7F21B358u: goto label_7F21B358;
    case 0x7F21B35Cu: goto label_7F21B35C;
    case 0x7F21B360u: goto label_7F21B360;
    case 0x7F21B364u: goto label_7F21B364;
    case 0x7F21B368u: goto label_7F21B368;
    case 0x7F21B36Cu: goto label_7F21B36C;
    case 0x7F21B370u: goto label_7F21B370;
    case 0x7F21B374u: goto label_7F21B374;
    case 0x7F21B378u: goto label_7F21B378;
    case 0x7F21B37Cu: goto label_7F21B37C;
    case 0x7F21B380u: goto label_7F21B380;
    case 0x7F21B384u: goto label_7F21B384;
    case 0x7F21B388u: goto label_7F21B388;
    case 0x7F21B38Cu: goto label_7F21B38C;
    case 0x7F21B390u: goto label_7F21B390;
    case 0x7F21B394u: goto label_7F21B394;
    case 0x7F21B398u: goto label_7F21B398;
    case 0x7F21B39Cu: goto label_7F21B39C;
    case 0x7F21B3A0u: goto label_7F21B3A0;
    case 0x7F21B3A4u: goto label_7F21B3A4;
    case 0x7F21B3A8u: goto label_7F21B3A8;
    case 0x7F21B3ACu: goto label_7F21B3AC;
    case 0x7F21B3B0u: goto label_7F21B3B0;
    case 0x7F21B3B4u: goto label_7F21B3B4;
    case 0x7F21B3B8u: goto label_7F21B3B8;
    case 0x7F21B3BCu: goto label_7F21B3BC;
    case 0x7F21B3C0u: goto label_7F21B3C0;
    case 0x7F21B3C4u: goto label_7F21B3C4;
    case 0x7F21B3C8u: goto label_7F21B3C8;
    case 0x7F21B3CCu: goto label_7F21B3CC;
    case 0x7F21B3D0u: goto label_7F21B3D0;
    case 0x7F21B3D4u: goto label_7F21B3D4;
    case 0x7F21B3D8u: goto label_7F21B3D8;
    case 0x7F21B3DCu: goto label_7F21B3DC;
    case 0x7F21B3E0u: goto label_7F21B3E0;
    case 0x7F21B3E4u: goto label_7F21B3E4;
    case 0x7F21B3E8u: goto label_7F21B3E8;
    case 0x7F21B3ECu: goto label_7F21B3EC;
    case 0x7F21B3F0u: goto label_7F21B3F0;
    case 0x7F21B3F4u: goto label_7F21B3F4;
    case 0x7F21B3F8u: goto label_7F21B3F8;
    case 0x7F21B3FCu: goto label_7F21B3FC;
    case 0x7F21B400u: goto label_7F21B400;
    case 0x7F21B404u: goto label_7F21B404;
    case 0x7F21B408u: goto label_7F21B408;
    case 0x7F21B40Cu: goto label_7F21B40C;
    case 0x7F21B410u: goto label_7F21B410;
    case 0x7F21B414u: goto label_7F21B414;
    case 0x7F21B418u: goto label_7F21B418;
    case 0x7F21B41Cu: goto label_7F21B41C;
    case 0x7F21B420u: goto label_7F21B420;
    case 0x7F21B424u: goto label_7F21B424;
    case 0x7F21B428u: goto label_7F21B428;
    case 0x7F21B42Cu: goto label_7F21B42C;
    case 0x7F21B430u: goto label_7F21B430;
    case 0x7F21B434u: goto label_7F21B434;
    case 0x7F21B438u: goto label_7F21B438;
    case 0x7F21B43Cu: goto label_7F21B43C;
    case 0x7F21B440u: goto label_7F21B440;
    case 0x7F21B444u: goto label_7F21B444;
    case 0x7F21B448u: goto label_7F21B448;
    case 0x7F21B44Cu: goto label_7F21B44C;
    case 0x7F21B450u: goto label_7F21B450;
    case 0x7F21B454u: goto label_7F21B454;
    case 0x7F21B458u: goto label_7F21B458;
    case 0x7F21B45Cu: goto label_7F21B45C;
    case 0x7F21B460u: goto label_7F21B460;
    case 0x7F21B464u: goto label_7F21B464;
    case 0x7F21B468u: goto label_7F21B468;
    case 0x7F21B46Cu: goto label_7F21B46C;
    case 0x7F21B470u: goto label_7F21B470;
    case 0x7F21B474u: goto label_7F21B474;
    case 0x7F21B478u: goto label_7F21B478;
    case 0x7F21B47Cu: goto label_7F21B47C;
    case 0x7F21B480u: goto label_7F21B480;
    case 0x7F21B484u: goto label_7F21B484;
    case 0x7F21B488u: goto label_7F21B488;
    case 0x7F21B48Cu: goto label_7F21B48C;
    case 0x7F21B490u: goto label_7F21B490;
    case 0x7F21B494u: goto label_7F21B494;
    case 0x7F21B498u: goto label_7F21B498;
    case 0x7F21B49Cu: goto label_7F21B49C;
    case 0x7F21B4A0u: goto label_7F21B4A0;
    case 0x7F21B4A4u: goto label_7F21B4A4;
    case 0x7F21B4A8u: goto label_7F21B4A8;
    case 0x7F21B4ACu: goto label_7F21B4AC;
    case 0x7F21B4B0u: goto label_7F21B4B0;
    case 0x7F21B4B4u: goto label_7F21B4B4;
    case 0x7F21B4B8u: goto label_7F21B4B8;
    case 0x7F21B4BCu: goto label_7F21B4BC;
    case 0x7F21B4C0u: goto label_7F21B4C0;
    case 0x7F21B4C4u: goto label_7F21B4C4;
    case 0x7F21B4C8u: goto label_7F21B4C8;
    case 0x7F21B4CCu: goto label_7F21B4CC;
    case 0x7F21B4D0u: goto label_7F21B4D0;
    case 0x7F21B4D4u: goto label_7F21B4D4;
    case 0x7F21B4D8u: goto label_7F21B4D8;
    case 0x7F21B4DCu: goto label_7F21B4DC;
    case 0x7F21B4E0u: goto label_7F21B4E0;
    case 0x7F21B4E4u: goto label_7F21B4E4;
    case 0x7F21B4E8u: goto label_7F21B4E8;
    case 0x7F21B4ECu: goto label_7F21B4EC;
    case 0x7F21B4F0u: goto label_7F21B4F0;
    case 0x7F21B4F4u: goto label_7F21B4F4;
    case 0x7F21B4F8u: goto label_7F21B4F8;
    case 0x7F21B4FCu: goto label_7F21B4FC;
    case 0x7F21B500u: goto label_7F21B500;
    case 0x7F21B504u: goto label_7F21B504;
    case 0x7F21B508u: goto label_7F21B508;
    case 0x7F21B50Cu: goto label_7F21B50C;
    case 0x7F21B510u: goto label_7F21B510;
    case 0x7F21B514u: goto label_7F21B514;
    case 0x7F21B518u: goto label_7F21B518;
    case 0x7F21B51Cu: goto label_7F21B51C;
    case 0x7F21B520u: goto label_7F21B520;
    case 0x7F21B524u: goto label_7F21B524;
    case 0x7F21B528u: goto label_7F21B528;
    case 0x7F21B52Cu: goto label_7F21B52C;
    case 0x7F21B530u: goto label_7F21B530;
    case 0x7F21B534u: goto label_7F21B534;
    case 0x7F21B538u: goto label_7F21B538;
    case 0x7F21B53Cu: goto label_7F21B53C;
    case 0x7F21B540u: goto label_7F21B540;
    case 0x7F21B544u: goto label_7F21B544;
    case 0x7F21B548u: goto label_7F21B548;
    case 0x7F21B54Cu: goto label_7F21B54C;
    case 0x7F21B550u: goto label_7F21B550;
    case 0x7F21B554u: goto label_7F21B554;
    case 0x7F21B558u: goto label_7F21B558;
    case 0x7F21B55Cu: goto label_7F21B55C;
    case 0x7F21B560u: goto label_7F21B560;
    case 0x7F21B564u: goto label_7F21B564;
    case 0x7F21B568u: goto label_7F21B568;
    case 0x7F21B56Cu: goto label_7F21B56C;
    case 0x7F21B570u: goto label_7F21B570;
    case 0x7F21B574u: goto label_7F21B574;
    case 0x7F21B578u: goto label_7F21B578;
    case 0x7F21B57Cu: goto label_7F21B57C;
    case 0x7F21B580u: goto label_7F21B580;
    case 0x7F21B584u: goto label_7F21B584;
    case 0x7F21B588u: goto label_7F21B588;
    case 0x7F21B58Cu: goto label_7F21B58C;
    case 0x7F21B590u: goto label_7F21B590;
    case 0x7F21B594u: goto label_7F21B594;
    case 0x7F21B598u: goto label_7F21B598;
    case 0x7F21B59Cu: goto label_7F21B59C;
    case 0x7F21B5A0u: goto label_7F21B5A0;
    case 0x7F21B5A4u: goto label_7F21B5A4;
    case 0x7F21B5A8u: goto label_7F21B5A8;
    case 0x7F21B5ACu: goto label_7F21B5AC;
    case 0x7F21B5B0u: goto label_7F21B5B0;
    case 0x7F21B5B4u: goto label_7F21B5B4;
    case 0x7F21B5B8u: goto label_7F21B5B8;
    case 0x7F21B5BCu: goto label_7F21B5BC;
    case 0x7F21B5C0u: goto label_7F21B5C0;
    case 0x7F21B5C4u: goto label_7F21B5C4;
    case 0x7F21B5C8u: goto label_7F21B5C8;
    case 0x7F21B5CCu: goto label_7F21B5CC;
    case 0x7F21B5D0u: goto label_7F21B5D0;
    case 0x7F21B5D4u: goto label_7F21B5D4;
    case 0x7F21B5D8u: goto label_7F21B5D8;
    case 0x7F21B5DCu: goto label_7F21B5DC;
    case 0x7F21B5E0u: goto label_7F21B5E0;
    case 0x7F21B5E4u: goto label_7F21B5E4;
    case 0x7F21B5E8u: goto label_7F21B5E8;
    case 0x7F21B5ECu: goto label_7F21B5EC;
    case 0x7F21B5F0u: goto label_7F21B5F0;
    case 0x7F21B5F4u: goto label_7F21B5F4;
    case 0x7F21B5F8u: goto label_7F21B5F8;
    case 0x7F21B5FCu: goto label_7F21B5FC;
    case 0x7F21B600u: goto label_7F21B600;
    case 0x7F21B604u: goto label_7F21B604;
    case 0x7F21B608u: goto label_7F21B608;
    case 0x7F21B60Cu: goto label_7F21B60C;
    case 0x7F21B610u: goto label_7F21B610;
    case 0x7F21B614u: goto label_7F21B614;
    case 0x7F21B618u: goto label_7F21B618;
    case 0x7F21B61Cu: goto label_7F21B61C;
    case 0x7F21B620u: goto label_7F21B620;
    case 0x7F21B624u: goto label_7F21B624;
    case 0x7F21B628u: goto label_7F21B628;
    case 0x7F21B62Cu: goto label_7F21B62C;
    case 0x7F21B630u: goto label_7F21B630;
    case 0x7F21B634u: goto label_7F21B634;
    case 0x7F21B638u: goto label_7F21B638;
    case 0x7F21B63Cu: goto label_7F21B63C;
    case 0x7F21B640u: goto label_7F21B640;
    case 0x7F21B644u: goto label_7F21B644;
    case 0x7F21B648u: goto label_7F21B648;
    case 0x7F21B64Cu: goto label_7F21B64C;
    case 0x7F21B650u: goto label_7F21B650;
    case 0x7F21B654u: goto label_7F21B654;
    case 0x7F21B658u: goto label_7F21B658;
    case 0x7F21B65Cu: goto label_7F21B65C;
    case 0x7F21B660u: goto label_7F21B660;
    case 0x7F21B664u: goto label_7F21B664;
    case 0x7F21B668u: goto label_7F21B668;
    case 0x7F21B66Cu: goto label_7F21B66C;
    case 0x7F21B670u: goto label_7F21B670;
    case 0x7F21B674u: goto label_7F21B674;
    case 0x7F21B678u: goto label_7F21B678;
    case 0x7F21B67Cu: goto label_7F21B67C;
    case 0x7F21B680u: goto label_7F21B680;
    case 0x7F21B684u: goto label_7F21B684;
    case 0x7F21B688u: goto label_7F21B688;
    case 0x7F21B68Cu: goto label_7F21B68C;
    case 0x7F21B690u: goto label_7F21B690;
    case 0x7F21B694u: goto label_7F21B694;
    case 0x7F21B698u: goto label_7F21B698;
    case 0x7F21B69Cu: goto label_7F21B69C;
    case 0x7F21B6A0u: goto label_7F21B6A0;
    case 0x7F21B6A4u: goto label_7F21B6A4;
    case 0x7F21B6A8u: goto label_7F21B6A8;
    case 0x7F21B6ACu: goto label_7F21B6AC;
    case 0x7F21B6B0u: goto label_7F21B6B0;
    case 0x7F21B6B4u: goto label_7F21B6B4;
    case 0x7F21B6B8u: goto label_7F21B6B8;
    case 0x7F21B6BCu: goto label_7F21B6BC;
    case 0x7F21B6C0u: goto label_7F21B6C0;
    case 0x7F21B6C4u: goto label_7F21B6C4;
    case 0x7F21B6C8u: goto label_7F21B6C8;
    case 0x7F21B6CCu: goto label_7F21B6CC;
    case 0x7F21B6D0u: goto label_7F21B6D0;
    case 0x7F21B6D4u: goto label_7F21B6D4;
    case 0x7F21B6D8u: goto label_7F21B6D8;
    case 0x7F21B6DCu: goto label_7F21B6DC;
    case 0x7F21B6E0u: goto label_7F21B6E0;
    case 0x7F21B6E4u: goto label_7F21B6E4;
    case 0x7F21B6E8u: goto label_7F21B6E8;
    case 0x7F21B6ECu: goto label_7F21B6EC;
    case 0x7F21B6F0u: goto label_7F21B6F0;
    case 0x7F21B6F4u: goto label_7F21B6F4;
    case 0x7F21B6F8u: goto label_7F21B6F8;
    case 0x7F21B6FCu: goto label_7F21B6FC;
    case 0x7F21B700u: goto label_7F21B700;
    case 0x7F21B704u: goto label_7F21B704;
    case 0x7F21B708u: goto label_7F21B708;
    case 0x7F21B70Cu: goto label_7F21B70C;
    case 0x7F21B710u: goto label_7F21B710;
    case 0x7F21B714u: goto label_7F21B714;
    case 0x7F21B718u: goto label_7F21B718;
    case 0x7F21B71Cu: goto label_7F21B71C;
    case 0x7F21B720u: goto label_7F21B720;
    case 0x7F21B724u: goto label_7F21B724;
    case 0x7F21B728u: goto label_7F21B728;
    case 0x7F21B72Cu: goto label_7F21B72C;
    case 0x7F21B730u: goto label_7F21B730;
    case 0x7F21B734u: goto label_7F21B734;
    case 0x7F21B738u: goto label_7F21B738;
    case 0x7F21B73Cu: goto label_7F21B73C;
    case 0x7F21B740u: goto label_7F21B740;
    case 0x7F21B744u: goto label_7F21B744;
    case 0x7F21B748u: goto label_7F21B748;
    case 0x7F21B74Cu: goto label_7F21B74C;
    case 0x7F21B750u: goto label_7F21B750;
    case 0x7F21B754u: goto label_7F21B754;
    case 0x7F21B758u: goto label_7F21B758;
    case 0x7F21B75Cu: goto label_7F21B75C;
    case 0x7F21B760u: goto label_7F21B760;
    case 0x7F21B764u: goto label_7F21B764;
    case 0x7F21B768u: goto label_7F21B768;
    case 0x7F21B76Cu: goto label_7F21B76C;
    case 0x7F21B770u: goto label_7F21B770;
    case 0x7F21B774u: goto label_7F21B774;
    case 0x7F21B778u: goto label_7F21B778;
    case 0x7F21B77Cu: goto label_7F21B77C;
    case 0x7F21B780u: goto label_7F21B780;
    case 0x7F21B784u: goto label_7F21B784;
    case 0x7F21B788u: goto label_7F21B788;
    case 0x7F21B78Cu: goto label_7F21B78C;
    case 0x7F21B790u: goto label_7F21B790;
    case 0x7F21B794u: goto label_7F21B794;
    case 0x7F21B798u: goto label_7F21B798;
    case 0x7F21B79Cu: goto label_7F21B79C;
    case 0x7F21B7A0u: goto label_7F21B7A0;
    case 0x7F21B7A4u: goto label_7F21B7A4;
    case 0x7F21B7A8u: goto label_7F21B7A8;
    case 0x7F21B7ACu: goto label_7F21B7AC;
    case 0x7F21B7B0u: goto label_7F21B7B0;
    case 0x7F21B7B4u: goto label_7F21B7B4;
    case 0x7F21B7B8u: goto label_7F21B7B8;
    case 0x7F21B7BCu: goto label_7F21B7BC;
    case 0x7F21B7C0u: goto label_7F21B7C0;
    case 0x7F21B7C4u: goto label_7F21B7C4;
    case 0x7F21B7C8u: goto label_7F21B7C8;
    case 0x7F21B7CCu: goto label_7F21B7CC;
    case 0x7F21B7D0u: goto label_7F21B7D0;
    case 0x7F21B7D4u: goto label_7F21B7D4;
    case 0x7F21B7D8u: goto label_7F21B7D8;
    case 0x7F21B7DCu: goto label_7F21B7DC;
    case 0x7F21B7E0u: goto label_7F21B7E0;
    case 0x7F21B7E4u: goto label_7F21B7E4;
    case 0x7F21B7E8u: goto label_7F21B7E8;
    case 0x7F21B7ECu: goto label_7F21B7EC;
    case 0x7F21B7F0u: goto label_7F21B7F0;
    case 0x7F21B7F4u: goto label_7F21B7F4;
    case 0x7F21B7F8u: goto label_7F21B7F8;
    case 0x7F21B7FCu: goto label_7F21B7FC;
    case 0x7F21B800u: goto label_7F21B800;
    case 0x7F21B804u: goto label_7F21B804;
    case 0x7F21B808u: goto label_7F21B808;
    case 0x7F21B80Cu: goto label_7F21B80C;
    case 0x7F21B810u: goto label_7F21B810;
    case 0x7F21B814u: goto label_7F21B814;
    case 0x7F21B818u: goto label_7F21B818;
    case 0x7F21B81Cu: goto label_7F21B81C;
    case 0x7F21B820u: goto label_7F21B820;
    case 0x7F21B824u: goto label_7F21B824;
    case 0x7F21B828u: goto label_7F21B828;
    case 0x7F21B82Cu: goto label_7F21B82C;
    case 0x7F21B830u: goto label_7F21B830;
    case 0x7F21B834u: goto label_7F21B834;
    case 0x7F21B838u: goto label_7F21B838;
    case 0x7F21B83Cu: goto label_7F21B83C;
    case 0x7F21B840u: goto label_7F21B840;
    case 0x7F21B844u: goto label_7F21B844;
    case 0x7F21B848u: goto label_7F21B848;
    case 0x7F21B84Cu: goto label_7F21B84C;
    case 0x7F21B850u: goto label_7F21B850;
    case 0x7F21B854u: goto label_7F21B854;
    case 0x7F21B858u: goto label_7F21B858;
    case 0x7F21B85Cu: goto label_7F21B85C;
    case 0x7F21B860u: goto label_7F21B860;
    case 0x7F21B864u: goto label_7F21B864;
    case 0x7F21B868u: goto label_7F21B868;
    case 0x7F21B86Cu: goto label_7F21B86C;
    case 0x7F21B870u: goto label_7F21B870;
    case 0x7F21B874u: goto label_7F21B874;
    case 0x7F21B878u: goto label_7F21B878;
    case 0x7F21B87Cu: goto label_7F21B87C;
    case 0x7F21B880u: goto label_7F21B880;
    case 0x7F21B884u: goto label_7F21B884;
    case 0x7F21B888u: goto label_7F21B888;
    case 0x7F21B88Cu: goto label_7F21B88C;
    case 0x7F21B890u: goto label_7F21B890;
    case 0x7F21B894u: goto label_7F21B894;
    case 0x7F21B898u: goto label_7F21B898;
    case 0x7F21B89Cu: goto label_7F21B89C;
    case 0x7F21B8A0u: goto label_7F21B8A0;
    case 0x7F21B8A4u: goto label_7F21B8A4;
    case 0x7F21B8A8u: goto label_7F21B8A8;
    case 0x7F21B8ACu: goto label_7F21B8AC;
    case 0x7F21B8B0u: goto label_7F21B8B0;
    case 0x7F21B8B4u: goto label_7F21B8B4;
    case 0x7F21B8B8u: goto label_7F21B8B8;
    case 0x7F21B8BCu: goto label_7F21B8BC;
    case 0x7F21B8C0u: goto label_7F21B8C0;
    case 0x7F21B8C4u: goto label_7F21B8C4;
    case 0x7F21B8C8u: goto label_7F21B8C8;
    case 0x7F21B8CCu: goto label_7F21B8CC;
    case 0x7F21B8D0u: goto label_7F21B8D0;
    case 0x7F21B8D4u: goto label_7F21B8D4;
    case 0x7F21B8D8u: goto label_7F21B8D8;
    case 0x7F21B8DCu: goto label_7F21B8DC;
    case 0x7F21B8E0u: goto label_7F21B8E0;
    case 0x7F21B8E4u: goto label_7F21B8E4;
    case 0x7F21B8E8u: goto label_7F21B8E8;
    case 0x7F21B8ECu: goto label_7F21B8EC;
    case 0x7F21B8F0u: goto label_7F21B8F0;
    case 0x7F21B8F4u: goto label_7F21B8F4;
    case 0x7F21B8F8u: goto label_7F21B8F8;
    case 0x7F21B8FCu: goto label_7F21B8FC;
    case 0x7F21B900u: goto label_7F21B900;
    case 0x7F21B904u: goto label_7F21B904;
    case 0x7F21B908u: goto label_7F21B908;
    case 0x7F21B90Cu: goto label_7F21B90C;
    case 0x7F21B910u: goto label_7F21B910;
    case 0x7F21B914u: goto label_7F21B914;
    case 0x7F21B918u: goto label_7F21B918;
    case 0x7F21B91Cu: goto label_7F21B91C;
    case 0x7F21B920u: goto label_7F21B920;
    case 0x7F21B924u: goto label_7F21B924;
    case 0x7F21B928u: goto label_7F21B928;
    case 0x7F21B92Cu: goto label_7F21B92C;
    case 0x7F21B930u: goto label_7F21B930;
    case 0x7F21B934u: goto label_7F21B934;
    case 0x7F21B938u: goto label_7F21B938;
    case 0x7F21B93Cu: goto label_7F21B93C;
    case 0x7F21B940u: goto label_7F21B940;
    case 0x7F21B944u: goto label_7F21B944;
    case 0x7F21B948u: goto label_7F21B948;
    case 0x7F21B94Cu: goto label_7F21B94C;
    case 0x7F21B950u: goto label_7F21B950;
    case 0x7F21B954u: goto label_7F21B954;
    case 0x7F21B958u: goto label_7F21B958;
    case 0x7F21B95Cu: goto label_7F21B95C;
    case 0x7F21B960u: goto label_7F21B960;
    case 0x7F21B964u: goto label_7F21B964;
    case 0x7F21B968u: goto label_7F21B968;
    case 0x7F21B96Cu: goto label_7F21B96C;
    case 0x7F21B970u: goto label_7F21B970;
    case 0x7F21B974u: goto label_7F21B974;
    case 0x7F21B978u: goto label_7F21B978;
    case 0x7F21B97Cu: goto label_7F21B97C;
    case 0x7F21B980u: goto label_7F21B980;
    case 0x7F21B984u: goto label_7F21B984;
    case 0x7F21B988u: goto label_7F21B988;
    case 0x7F21B98Cu: goto label_7F21B98C;
    case 0x7F21B990u: goto label_7F21B990;
    case 0x7F21B994u: goto label_7F21B994;
    case 0x7F21B998u: goto label_7F21B998;
    case 0x7F21B99Cu: goto label_7F21B99C;
    case 0x7F21B9A0u: goto label_7F21B9A0;
    case 0x7F21B9A4u: goto label_7F21B9A4;
    case 0x7F21B9A8u: goto label_7F21B9A8;
    case 0x7F21B9ACu: goto label_7F21B9AC;
    case 0x7F21B9B0u: goto label_7F21B9B0;
    case 0x7F21B9B4u: goto label_7F21B9B4;
    case 0x7F21B9B8u: goto label_7F21B9B8;
    case 0x7F21B9BCu: goto label_7F21B9BC;
    case 0x7F21B9C0u: goto label_7F21B9C0;
    case 0x7F21B9C4u: goto label_7F21B9C4;
    case 0x7F21B9C8u: goto label_7F21B9C8;
    case 0x7F21B9CCu: goto label_7F21B9CC;
    case 0x7F21B9D0u: goto label_7F21B9D0;
    case 0x7F21B9D4u: goto label_7F21B9D4;
    case 0x7F21B9D8u: goto label_7F21B9D8;
    case 0x7F21B9DCu: goto label_7F21B9DC;
    case 0x7F21B9E0u: goto label_7F21B9E0;
    case 0x7F21B9E4u: goto label_7F21B9E4;
    case 0x7F21B9E8u: goto label_7F21B9E8;
    case 0x7F21B9ECu: goto label_7F21B9EC;
    case 0x7F21B9F0u: goto label_7F21B9F0;
    case 0x7F21B9F4u: goto label_7F21B9F4;
    case 0x7F21B9F8u: goto label_7F21B9F8;
    case 0x7F21B9FCu: goto label_7F21B9FC;
    case 0x7F21BA00u: goto label_7F21BA00;
    case 0x7F21BA04u: goto label_7F21BA04;
    case 0x7F21BA08u: goto label_7F21BA08;
    case 0x7F21BA0Cu: goto label_7F21BA0C;
    case 0x7F21BA10u: goto label_7F21BA10;
    case 0x7F21BA14u: goto label_7F21BA14;
    case 0x7F21BA18u: goto label_7F21BA18;
    case 0x7F21BA1Cu: goto label_7F21BA1C;
    case 0x7F21BA20u: goto label_7F21BA20;
    case 0x7F21BA24u: goto label_7F21BA24;
    case 0x7F21BA28u: goto label_7F21BA28;
    case 0x7F21BA2Cu: goto label_7F21BA2C;
    case 0x7F21BA30u: goto label_7F21BA30;
    case 0x7F21BA34u: goto label_7F21BA34;
    case 0x7F21BA38u: goto label_7F21BA38;
    case 0x7F21BA3Cu: goto label_7F21BA3C;
    case 0x7F21BA40u: goto label_7F21BA40;
    case 0x7F21BA44u: goto label_7F21BA44;
    case 0x7F21BA48u: goto label_7F21BA48;
    case 0x7F21BA4Cu: goto label_7F21BA4C;
    case 0x7F21BA50u: goto label_7F21BA50;
    case 0x7F21BA54u: goto label_7F21BA54;
    case 0x7F21BA58u: goto label_7F21BA58;
    case 0x7F21BA5Cu: goto label_7F21BA5C;
    case 0x7F21BA60u: goto label_7F21BA60;
    case 0x7F21BA64u: goto label_7F21BA64;
    case 0x7F21BA68u: goto label_7F21BA68;
    case 0x7F21BA6Cu: goto label_7F21BA6C;
    case 0x7F21BA70u: goto label_7F21BA70;
    case 0x7F21BA74u: goto label_7F21BA74;
    case 0x7F21BA78u: goto label_7F21BA78;
    case 0x7F21BA7Cu: goto label_7F21BA7C;
    case 0x7F21BA80u: goto label_7F21BA80;
    case 0x7F21BA84u: goto label_7F21BA84;
    case 0x7F21BA88u: goto label_7F21BA88;
    case 0x7F21BA8Cu: goto label_7F21BA8C;
    case 0x7F21BA90u: goto label_7F21BA90;
    case 0x7F21BA94u: goto label_7F21BA94;
    case 0x7F21BA98u: goto label_7F21BA98;
    case 0x7F21BA9Cu: goto label_7F21BA9C;
    case 0x7F21BAA0u: goto label_7F21BAA0;
    case 0x7F21BAA4u: goto label_7F21BAA4;
    case 0x7F21BAA8u: goto label_7F21BAA8;
    case 0x7F21BAACu: goto label_7F21BAAC;
    case 0x7F21BAB0u: goto label_7F21BAB0;
    case 0x7F21BAB4u: goto label_7F21BAB4;
    case 0x7F21BAB8u: goto label_7F21BAB8;
    case 0x7F21BABCu: goto label_7F21BABC;
    case 0x7F21BAC0u: goto label_7F21BAC0;
    case 0x7F21BAC4u: goto label_7F21BAC4;
    case 0x7F21BAC8u: goto label_7F21BAC8;
    case 0x7F21BACCu: goto label_7F21BACC;
    case 0x7F21BAD0u: goto label_7F21BAD0;
    case 0x7F21BAD4u: goto label_7F21BAD4;
    case 0x7F21BAD8u: goto label_7F21BAD8;
    case 0x7F21BADCu: goto label_7F21BADC;
    case 0x7F21BAE0u: goto label_7F21BAE0;
    case 0x7F21BAE4u: goto label_7F21BAE4;
    case 0x7F21BAE8u: goto label_7F21BAE8;
    case 0x7F21BAECu: goto label_7F21BAEC;
    case 0x7F21BAF0u: goto label_7F21BAF0;
    case 0x7F21BAF4u: goto label_7F21BAF4;
    case 0x7F21BAF8u: goto label_7F21BAF8;
    case 0x7F21BAFCu: goto label_7F21BAFC;
    case 0x7F21BB00u: goto label_7F21BB00;
    case 0x7F21BB04u: goto label_7F21BB04;
    case 0x7F21BB08u: goto label_7F21BB08;
    case 0x7F21BB0Cu: goto label_7F21BB0C;
    case 0x7F21BB10u: goto label_7F21BB10;
    case 0x7F21BB14u: goto label_7F21BB14;
    case 0x7F21BB18u: goto label_7F21BB18;
    case 0x7F21BB1Cu: goto label_7F21BB1C;
    case 0x7F21BB20u: goto label_7F21BB20;
    case 0x7F21BB24u: goto label_7F21BB24;
    case 0x7F21BB28u: goto label_7F21BB28;
    case 0x7F21BB2Cu: goto label_7F21BB2C;
    case 0x7F21BB30u: goto label_7F21BB30;
    case 0x7F21BB34u: goto label_7F21BB34;
    case 0x7F21BB38u: goto label_7F21BB38;
    case 0x7F21BB3Cu: goto label_7F21BB3C;
    case 0x7F21BB40u: goto label_7F21BB40;
    case 0x7F21BB44u: goto label_7F21BB44;
    case 0x7F21BB48u: goto label_7F21BB48;
    case 0x7F21BB4Cu: goto label_7F21BB4C;
    case 0x7F21BB50u: goto label_7F21BB50;
    case 0x7F21BB54u: goto label_7F21BB54;
    case 0x7F21BB58u: goto label_7F21BB58;
    case 0x7F21BB5Cu: goto label_7F21BB5C;
    case 0x7F21BB60u: goto label_7F21BB60;
    case 0x7F21BB64u: goto label_7F21BB64;
    case 0x7F21BB68u: goto label_7F21BB68;
    case 0x7F21BB6Cu: goto label_7F21BB6C;
    case 0x7F21BB70u: goto label_7F21BB70;
    case 0x7F21BB74u: goto label_7F21BB74;
    case 0x7F21BB78u: goto label_7F21BB78;
    case 0x7F21BB7Cu: goto label_7F21BB7C;
    case 0x7F21BB80u: goto label_7F21BB80;
    case 0x7F21BB84u: goto label_7F21BB84;
    case 0x7F21BB88u: goto label_7F21BB88;
    case 0x7F21BB8Cu: goto label_7F21BB8C;
    case 0x7F21BB90u: goto label_7F21BB90;
    case 0x7F21BB94u: goto label_7F21BB94;
    case 0x7F21BB98u: goto label_7F21BB98;
    case 0x7F21BB9Cu: goto label_7F21BB9C;
    case 0x7F21BBA0u: goto label_7F21BBA0;
    case 0x7F21BBA4u: goto label_7F21BBA4;
    case 0x7F21BBA8u: goto label_7F21BBA8;
    case 0x7F21BBACu: goto label_7F21BBAC;
    case 0x7F21BBB0u: goto label_7F21BBB0;
    case 0x7F21BBB4u: goto label_7F21BBB4;
    case 0x7F21BBB8u: goto label_7F21BBB8;
    case 0x7F21BBBCu: goto label_7F21BBBC;
    case 0x7F21BBC0u: goto label_7F21BBC0;
    case 0x7F21BBC4u: goto label_7F21BBC4;
    case 0x7F21BBC8u: goto label_7F21BBC8;
    case 0x7F21BBCCu: goto label_7F21BBCC;
    case 0x7F21BBD0u: goto label_7F21BBD0;
    case 0x7F21BBD4u: goto label_7F21BBD4;
    case 0x7F21BBD8u: goto label_7F21BBD8;
    case 0x7F21BBDCu: goto label_7F21BBDC;
    case 0x7F21BBE0u: goto label_7F21BBE0;
    case 0x7F21BBE4u: goto label_7F21BBE4;
    case 0x7F21BBE8u: goto label_7F21BBE8;
    case 0x7F21BBECu: goto label_7F21BBEC;
    case 0x7F21BBF0u: goto label_7F21BBF0;
    case 0x7F21BBF4u: goto label_7F21BBF4;
    case 0x7F21BBF8u: goto label_7F21BBF8;
    case 0x7F21BBFCu: goto label_7F21BBFC;
    case 0x7F21BC00u: goto label_7F21BC00;
    case 0x7F21BC04u: goto label_7F21BC04;
    case 0x7F21BC08u: goto label_7F21BC08;
    case 0x7F21BC0Cu: goto label_7F21BC0C;
    case 0x7F21BC10u: goto label_7F21BC10;
    case 0x7F21BC14u: goto label_7F21BC14;
    case 0x7F21BC18u: goto label_7F21BC18;
    case 0x7F21BC1Cu: goto label_7F21BC1C;
    case 0x7F21BC20u: goto label_7F21BC20;
    case 0x7F21BC24u: goto label_7F21BC24;
    case 0x7F21BC28u: goto label_7F21BC28;
    case 0x7F21BC2Cu: goto label_7F21BC2C;
    case 0x7F21BC30u: goto label_7F21BC30;
    case 0x7F21BC34u: goto label_7F21BC34;
    case 0x7F21BC38u: goto label_7F21BC38;
    case 0x7F21BC3Cu: goto label_7F21BC3C;
    case 0x7F21BC40u: goto label_7F21BC40;
    case 0x7F21BC44u: goto label_7F21BC44;
    case 0x7F21BC48u: goto label_7F21BC48;
    case 0x7F21BC4Cu: goto label_7F21BC4C;
    case 0x7F21BC50u: goto label_7F21BC50;
    case 0x7F21BC54u: goto label_7F21BC54;
    case 0x7F21BC58u: goto label_7F21BC58;
    case 0x7F21BC5Cu: goto label_7F21BC5C;
    case 0x7F21BC60u: goto label_7F21BC60;
    case 0x7F21BC64u: goto label_7F21BC64;
    case 0x7F21BC68u: goto label_7F21BC68;
    case 0x7F21BC6Cu: goto label_7F21BC6C;
    case 0x7F21BC70u: goto label_7F21BC70;
    case 0x7F21BC74u: goto label_7F21BC74;
    case 0x7F21BC78u: goto label_7F21BC78;
    case 0x7F21BC7Cu: goto label_7F21BC7C;
    case 0x7F21BC80u: goto label_7F21BC80;
    case 0x7F21BC84u: goto label_7F21BC84;
    case 0x7F21BC88u: goto label_7F21BC88;
    case 0x7F21BC8Cu: goto label_7F21BC8C;
    case 0x7F21BC90u: goto label_7F21BC90;
    case 0x7F21BC94u: goto label_7F21BC94;
    case 0x7F21BC98u: goto label_7F21BC98;
    case 0x7F21BC9Cu: goto label_7F21BC9C;
    case 0x7F21BCA0u: goto label_7F21BCA0;
    case 0x7F21BCA4u: goto label_7F21BCA4;
    case 0x7F21BCA8u: goto label_7F21BCA8;
    case 0x7F21BCACu: goto label_7F21BCAC;
    case 0x7F21BCB0u: goto label_7F21BCB0;
    case 0x7F21BCB4u: goto label_7F21BCB4;
    case 0x7F21BCB8u: goto label_7F21BCB8;
    case 0x7F21BCBCu: goto label_7F21BCBC;
    case 0x7F21BCC0u: goto label_7F21BCC0;
    case 0x7F21BCC4u: goto label_7F21BCC4;
    case 0x7F21BCC8u: goto label_7F21BCC8;
    case 0x7F21BCCCu: goto label_7F21BCCC;
    case 0x7F21BCD0u: goto label_7F21BCD0;
    case 0x7F21BCD4u: goto label_7F21BCD4;
    case 0x7F21BCD8u: goto label_7F21BCD8;
    case 0x7F21BCDCu: goto label_7F21BCDC;
    case 0x7F21BCE0u: goto label_7F21BCE0;
    case 0x7F21BCE4u: goto label_7F21BCE4;
    case 0x7F21BCE8u: goto label_7F21BCE8;
    case 0x7F21BCECu: goto label_7F21BCEC;
    case 0x7F21BCF0u: goto label_7F21BCF0;
    case 0x7F21BCF4u: goto label_7F21BCF4;
    case 0x7F21BCF8u: goto label_7F21BCF8;
    case 0x7F21BCFCu: goto label_7F21BCFC;
    case 0x7F21BD00u: goto label_7F21BD00;
    case 0x7F21BD04u: goto label_7F21BD04;
    case 0x7F21BD08u: goto label_7F21BD08;
    case 0x7F21BD0Cu: goto label_7F21BD0C;
    case 0x7F21BD10u: goto label_7F21BD10;
    case 0x7F21BD14u: goto label_7F21BD14;
    case 0x7F21BD18u: goto label_7F21BD18;
    case 0x7F21BD1Cu: goto label_7F21BD1C;
    case 0x7F21BD20u: goto label_7F21BD20;
    case 0x7F21BD24u: goto label_7F21BD24;
    case 0x7F21BD28u: goto label_7F21BD28;
    case 0x7F21BD2Cu: goto label_7F21BD2C;
    case 0x7F21BD30u: goto label_7F21BD30;
    case 0x7F21BD34u: goto label_7F21BD34;
    case 0x7F21BD38u: goto label_7F21BD38;
    case 0x7F21BD3Cu: goto label_7F21BD3C;
    case 0x7F21BD40u: goto label_7F21BD40;
    case 0x7F21BD44u: goto label_7F21BD44;
    case 0x7F21BD48u: goto label_7F21BD48;
    case 0x7F21BD4Cu: goto label_7F21BD4C;
    case 0x7F21BD50u: goto label_7F21BD50;
    case 0x7F21BD54u: goto label_7F21BD54;
    case 0x7F21BD58u: goto label_7F21BD58;
    case 0x7F21BD5Cu: goto label_7F21BD5C;
    case 0x7F21BD60u: goto label_7F21BD60;
    case 0x7F21BD64u: goto label_7F21BD64;
    case 0x7F21BD68u: goto label_7F21BD68;
    case 0x7F21BD6Cu: goto label_7F21BD6C;
    case 0x7F21BD70u: goto label_7F21BD70;
    case 0x7F21BD74u: goto label_7F21BD74;
    case 0x7F21BD78u: goto label_7F21BD78;
    case 0x7F21BD7Cu: goto label_7F21BD7C;
    case 0x7F21BD80u: goto label_7F21BD80;
    case 0x7F21BD84u: goto label_7F21BD84;
    case 0x7F21BD88u: goto label_7F21BD88;
    case 0x7F21BD8Cu: goto label_7F21BD8C;
    case 0x7F21BD90u: goto label_7F21BD90;
    case 0x7F21BD94u: goto label_7F21BD94;
    case 0x7F21BD98u: goto label_7F21BD98;
    case 0x7F21BD9Cu: goto label_7F21BD9C;
    case 0x7F21BDA0u: goto label_7F21BDA0;
    case 0x7F21BDA4u: goto label_7F21BDA4;
    case 0x7F21BDA8u: goto label_7F21BDA8;
    case 0x7F21BDACu: goto label_7F21BDAC;
    case 0x7F21BDB0u: goto label_7F21BDB0;
    case 0x7F21BDB4u: goto label_7F21BDB4;
    case 0x7F21BDB8u: goto label_7F21BDB8;
    case 0x7F21BDBCu: goto label_7F21BDBC;
    case 0x7F21BDC0u: goto label_7F21BDC0;
    case 0x7F21BDC4u: goto label_7F21BDC4;
    case 0x7F21BDC8u: goto label_7F21BDC8;
    case 0x7F21BDCCu: goto label_7F21BDCC;
    case 0x7F21BDD0u: goto label_7F21BDD0;
    case 0x7F21BDD4u: goto label_7F21BDD4;
    case 0x7F21BDD8u: goto label_7F21BDD8;
    case 0x7F21BDDCu: goto label_7F21BDDC;
    case 0x7F21BDE0u: goto label_7F21BDE0;
    case 0x7F21BDE4u: goto label_7F21BDE4;
    case 0x7F21BDE8u: goto label_7F21BDE8;
    case 0x7F21BDECu: goto label_7F21BDEC;
    case 0x7F21BDF0u: goto label_7F21BDF0;
    case 0x7F21BDF4u: goto label_7F21BDF4;
    case 0x7F21BDF8u: goto label_7F21BDF8;
    case 0x7F21BDFCu: goto label_7F21BDFC;
    case 0x7F21BE00u: goto label_7F21BE00;
    case 0x7F21BE04u: goto label_7F21BE04;
    case 0x7F21BE08u: goto label_7F21BE08;
    case 0x7F21BE0Cu: goto label_7F21BE0C;
    case 0x7F21BE10u: goto label_7F21BE10;
    case 0x7F21BE14u: goto label_7F21BE14;
    case 0x7F21BE18u: goto label_7F21BE18;
    case 0x7F21BE1Cu: goto label_7F21BE1C;
    case 0x7F21BE20u: goto label_7F21BE20;
    case 0x7F21BE24u: goto label_7F21BE24;
    case 0x7F21BE28u: goto label_7F21BE28;
    case 0x7F21BE2Cu: goto label_7F21BE2C;
    case 0x7F21BE30u: goto label_7F21BE30;
    case 0x7F21BE34u: goto label_7F21BE34;
    case 0x7F21BE38u: goto label_7F21BE38;
    case 0x7F21BE3Cu: goto label_7F21BE3C;
    case 0x7F21BE40u: goto label_7F21BE40;
    case 0x7F21BE44u: goto label_7F21BE44;
    case 0x7F21BE48u: goto label_7F21BE48;
    case 0x7F21BE4Cu: goto label_7F21BE4C;
    case 0x7F21BE50u: goto label_7F21BE50;
    case 0x7F21BE54u: goto label_7F21BE54;
    case 0x7F21BE58u: goto label_7F21BE58;
    case 0x7F21BE5Cu: goto label_7F21BE5C;
    case 0x7F21BE60u: goto label_7F21BE60;
    case 0x7F21BE64u: goto label_7F21BE64;
    case 0x7F21BE68u: goto label_7F21BE68;
    case 0x7F21BE6Cu: goto label_7F21BE6C;
    case 0x7F21BE70u: goto label_7F21BE70;
    case 0x7F21BE74u: goto label_7F21BE74;
    case 0x7F21BE78u: goto label_7F21BE78;
    case 0x7F21BE7Cu: goto label_7F21BE7C;
    case 0x7F21BE80u: goto label_7F21BE80;
    case 0x7F21BE84u: goto label_7F21BE84;
    case 0x7F21BE88u: goto label_7F21BE88;
    case 0x7F21BE8Cu: goto label_7F21BE8C;
    case 0x7F21BE90u: goto label_7F21BE90;
    case 0x7F21BE94u: goto label_7F21BE94;
    case 0x7F21BE98u: goto label_7F21BE98;
    case 0x7F21BE9Cu: goto label_7F21BE9C;
    case 0x7F21BEA0u: goto label_7F21BEA0;
    case 0x7F21BEA4u: goto label_7F21BEA4;
    case 0x7F21BEA8u: goto label_7F21BEA8;
    case 0x7F21BEACu: goto label_7F21BEAC;
    case 0x7F21BEB0u: goto label_7F21BEB0;
    case 0x7F21BEB4u: goto label_7F21BEB4;
    case 0x7F21BEB8u: goto label_7F21BEB8;
    case 0x7F21BEBCu: goto label_7F21BEBC;
    case 0x7F21BEC0u: goto label_7F21BEC0;
    case 0x7F21BEC4u: goto label_7F21BEC4;
    case 0x7F21BEC8u: goto label_7F21BEC8;
    case 0x7F21BECCu: goto label_7F21BECC;
    case 0x7F21BED0u: goto label_7F21BED0;
    case 0x7F21BED4u: goto label_7F21BED4;
    case 0x7F21BED8u: goto label_7F21BED8;
    case 0x7F21BEDCu: goto label_7F21BEDC;
    case 0x7F21BEE0u: goto label_7F21BEE0;
    case 0x7F21BEE4u: goto label_7F21BEE4;
    case 0x7F21BEE8u: goto label_7F21BEE8;
    case 0x7F21BEECu: goto label_7F21BEEC;
    case 0x7F21BEF0u: goto label_7F21BEF0;
    case 0x7F21BEF4u: goto label_7F21BEF4;
    case 0x7F21BEF8u: goto label_7F21BEF8;
    case 0x7F21BEFCu: goto label_7F21BEFC;
    case 0x7F21BF00u: goto label_7F21BF00;
    case 0x7F21BF04u: goto label_7F21BF04;
    case 0x7F21BF08u: goto label_7F21BF08;
    case 0x7F21BF0Cu: goto label_7F21BF0C;
    case 0x7F21BF10u: goto label_7F21BF10;
    case 0x7F21BF14u: goto label_7F21BF14;
    case 0x7F21BF18u: goto label_7F21BF18;
    case 0x7F21BF1Cu: goto label_7F21BF1C;
    case 0x7F21BF20u: goto label_7F21BF20;
    case 0x7F21BF24u: goto label_7F21BF24;
    case 0x7F21BF28u: goto label_7F21BF28;
    case 0x7F21BF2Cu: goto label_7F21BF2C;
    case 0x7F21BF30u: goto label_7F21BF30;
    case 0x7F21BF34u: goto label_7F21BF34;
    case 0x7F21BF38u: goto label_7F21BF38;
    case 0x7F21BF3Cu: goto label_7F21BF3C;
    case 0x7F21BF40u: goto label_7F21BF40;
    case 0x7F21BF44u: goto label_7F21BF44;
    case 0x7F21BF48u: goto label_7F21BF48;
    case 0x7F21BF4Cu: goto label_7F21BF4C;
    case 0x7F21BF50u: goto label_7F21BF50;
    case 0x7F21BF54u: goto label_7F21BF54;
    case 0x7F21BF58u: goto label_7F21BF58;
    case 0x7F21BF5Cu: goto label_7F21BF5C;
    case 0x7F21BF60u: goto label_7F21BF60;
    case 0x7F21BF64u: goto label_7F21BF64;
    case 0x7F21BF68u: goto label_7F21BF68;
    case 0x7F21BF6Cu: goto label_7F21BF6C;
    case 0x7F21BF70u: goto label_7F21BF70;
    case 0x7F21BF74u: goto label_7F21BF74;
    case 0x7F21BF78u: goto label_7F21BF78;
    case 0x7F21BF7Cu: goto label_7F21BF7C;
    case 0x7F21BF80u: goto label_7F21BF80;
    case 0x7F21BF84u: goto label_7F21BF84;
    case 0x7F21BF88u: goto label_7F21BF88;
    case 0x7F21BF8Cu: goto label_7F21BF8C;
    case 0x7F21BF90u: goto label_7F21BF90;
    case 0x7F21BF94u: goto label_7F21BF94;
    case 0x7F21BF98u: goto label_7F21BF98;
    case 0x7F21BF9Cu: goto label_7F21BF9C;
    case 0x7F21BFA0u: goto label_7F21BFA0;
    case 0x7F21BFA4u: goto label_7F21BFA4;
    case 0x7F21BFA8u: goto label_7F21BFA8;
    case 0x7F21BFACu: goto label_7F21BFAC;
    case 0x7F21BFB0u: goto label_7F21BFB0;
    case 0x7F21BFB4u: goto label_7F21BFB4;
    case 0x7F21BFB8u: goto label_7F21BFB8;
    case 0x7F21BFBCu: goto label_7F21BFBC;
    case 0x7F21BFC0u: goto label_7F21BFC0;
    case 0x7F21BFC4u: goto label_7F21BFC4;
    case 0x7F21BFC8u: goto label_7F21BFC8;
    case 0x7F21BFCCu: goto label_7F21BFCC;
    case 0x7F21BFD0u: goto label_7F21BFD0;
    case 0x7F21BFD4u: goto label_7F21BFD4;
    case 0x7F21BFD8u: goto label_7F21BFD8;
    case 0x7F21BFDCu: goto label_7F21BFDC;
    case 0x7F21BFE0u: goto label_7F21BFE0;
    case 0x7F21BFE4u: goto label_7F21BFE4;
    case 0x7F21BFE8u: goto label_7F21BFE8;
    case 0x7F21BFECu: goto label_7F21BFEC;
    case 0x7F21BFF0u: goto label_7F21BFF0;
    case 0x7F21BFF4u: goto label_7F21BFF4;
    case 0x7F21BFF8u: goto label_7F21BFF8;
    case 0x7F21BFFCu: goto label_7F21BFFC;
    case 0x7F21C000u: goto label_7F21C000;
    case 0x7F21C004u: goto label_7F21C004;
    case 0x7F21C008u: goto label_7F21C008;
    case 0x7F21C00Cu: goto label_7F21C00C;
    case 0x7F21C010u: goto label_7F21C010;
    case 0x7F21C014u: goto label_7F21C014;
    case 0x7F21C018u: goto label_7F21C018;
    case 0x7F21C01Cu: goto label_7F21C01C;
    case 0x7F21C020u: goto label_7F21C020;
    case 0x7F21C024u: goto label_7F21C024;
    case 0x7F21C028u: goto label_7F21C028;
    case 0x7F21C02Cu: goto label_7F21C02C;
    case 0x7F21C030u: goto label_7F21C030;
    case 0x7F21C034u: goto label_7F21C034;
    case 0x7F21C038u: goto label_7F21C038;
    case 0x7F21C03Cu: goto label_7F21C03C;
    case 0x7F21C040u: goto label_7F21C040;
    case 0x7F21C044u: goto label_7F21C044;
    case 0x7F21C048u: goto label_7F21C048;
    case 0x7F21C04Cu: goto label_7F21C04C;
    case 0x7F21C050u: goto label_7F21C050;
    case 0x7F21C054u: goto label_7F21C054;
    case 0x7F21C058u: goto label_7F21C058;
    case 0x7F21C05Cu: goto label_7F21C05C;
    case 0x7F21C060u: goto label_7F21C060;
    case 0x7F21C064u: goto label_7F21C064;
    case 0x7F21C068u: goto label_7F21C068;
    case 0x7F21C06Cu: goto label_7F21C06C;
    case 0x7F21C070u: goto label_7F21C070;
    case 0x7F21C074u: goto label_7F21C074;
    case 0x7F21C078u: goto label_7F21C078;
    case 0x7F21C07Cu: goto label_7F21C07C;
    case 0x7F21C080u: goto label_7F21C080;
    case 0x7F21C084u: goto label_7F21C084;
    case 0x7F21C088u: goto label_7F21C088;
    case 0x7F21C08Cu: goto label_7F21C08C;
    case 0x7F21C090u: goto label_7F21C090;
    case 0x7F21C094u: goto label_7F21C094;
    case 0x7F21C098u: goto label_7F21C098;
    case 0x7F21C09Cu: goto label_7F21C09C;
    case 0x7F21C0A0u: goto label_7F21C0A0;
    case 0x7F21C0A4u: goto label_7F21C0A4;
    case 0x7F21C0A8u: goto label_7F21C0A8;
    case 0x7F21C0ACu: goto label_7F21C0AC;
    case 0x7F21C0B0u: goto label_7F21C0B0;
    case 0x7F21C0B4u: goto label_7F21C0B4;
    case 0x7F21C0B8u: goto label_7F21C0B8;
    case 0x7F21C0BCu: goto label_7F21C0BC;
    case 0x7F21C0C0u: goto label_7F21C0C0;
    case 0x7F21C0C4u: goto label_7F21C0C4;
    case 0x7F21C0C8u: goto label_7F21C0C8;
    case 0x7F21C0CCu: goto label_7F21C0CC;
    case 0x7F21C0D0u: goto label_7F21C0D0;
    case 0x7F21C0D4u: goto label_7F21C0D4;
    case 0x7F21C0D8u: goto label_7F21C0D8;
    case 0x7F21C0DCu: goto label_7F21C0DC;
    case 0x7F21C0E0u: goto label_7F21C0E0;
    case 0x7F21C0E4u: goto label_7F21C0E4;
    case 0x7F21C0E8u: goto label_7F21C0E8;
    default: return;
    }
label_7F2180EC:
    ctx->pc = 0x7F2180ECu;
    ctx->downcount -= 9;
    // 7F2180EC: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2180ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2180F0:
    ctx->pc = 0x7F2180F0u;
    // 7F2180F0: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2180F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2180F4:
    ctx->pc = 0x7F2180F4u;
    // 7F2180F4: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2180F4u)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_7F2180F8:
    ctx->pc = 0x7F2180F8u;
    // 7F2180F8: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2180F8u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2180FC:
    ctx->pc = 0x7F2180FCu;
    // 7F2180FC: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2180FCu)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F218100:
    ctx->pc = 0x7F218100u;
    // 7F218100: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218100u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F218104:
    ctx->pc = 0x7F218104u;
    // 7F218104: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F218104u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F218108:
    ctx->pc = 0x7F218108u;
    // 7F218108: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F21810C:
    ctx->pc = 0x7F21810Cu;
    // 7F21810C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218110:
    ctx->pc = 0x7F218110u;
    ctx->downcount -= 75;
    // 7F218110: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218114:
    ctx->pc = 0x7F218114u;
    // 7F218114: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F218118:
    ctx->pc = 0x7F218118u;
    // 7F218118: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F21811C:
    ctx->pc = 0x7F21811Cu;
    // 7F21811C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F218120:
    ctx->pc = 0x7F218120u;
    // 7F218120: lwz     r7, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F218124:
    ctx->pc = 0x7F218124u;
    // 7F218124: lfd     f3, 16416(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F218124u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16416);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218128:
    ctx->pc = 0x7F218128u;
    // 7F218128: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F21812C:
    ctx->pc = 0x7F21812Cu;
    // 7F21812C: lfd     f2, 16424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21812Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16424);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218130:
    ctx->pc = 0x7F218130u;
    // 7F218130: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218134:
    ctx->pc = 0x7F218134u;
    // 7F218134: lwz     r6, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218138:
    ctx->pc = 0x7F218138u;
    // 7F218138: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21813C:
    ctx->pc = 0x7F21813Cu;
    // 7F21813C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F218140:
    ctx->pc = 0x7F218140u;
    // 7F218140: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218144:
    ctx->pc = 0x7F218144u;
    // 7F218144: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218148:
    ctx->pc = 0x7F218148u;
    // 7F218148: lbz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F21814C:
    ctx->pc = 0x7F21814Cu;
    // 7F21814C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218150:
    ctx->pc = 0x7F218150u;
    // 7F218150: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218154:
    ctx->pc = 0x7F218154u;
    // 7F218154: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F218158:
    ctx->pc = 0x7F218158u;
    // 7F218158: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21815C:
    ctx->pc = 0x7F21815Cu;
    // 7F21815C: rlwinm r0, r6, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F218160:
    ctx->pc = 0x7F218160u;
    // 7F218160: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F218164:
    ctx->pc = 0x7F218164u;
    // 7F218164: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218168:
    ctx->pc = 0x7F218168u;
    // 7F218168: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21816C:
    ctx->pc = 0x7F21816Cu;
    // 7F21816C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218170:
    ctx->pc = 0x7F218170u;
    // 7F218170: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218174:
    ctx->pc = 0x7F218174u;
    // 7F218174: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218178:
    ctx->pc = 0x7F218178u;
    // 7F218178: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F218178u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F21817C:
    ctx->pc = 0x7F21817Cu;
    // 7F21817C: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218180:
    ctx->pc = 0x7F218180u;
    // 7F218180: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218180u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F218184:
    ctx->pc = 0x7F218184u;
    // 7F218184: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218188:
    ctx->pc = 0x7F218188u;
    // 7F218188: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218188u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F21818C:
    ctx->pc = 0x7F21818Cu;
    // 7F21818C: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218190:
    ctx->pc = 0x7F218190u;
    // 7F218190: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218194:
    ctx->pc = 0x7F218194u;
    // 7F218194: stfs     f1, 104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F218198:
    ctx->pc = 0x7F218198u;
    // 7F218198: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21819C:
    ctx->pc = 0x7F21819Cu;
    // 7F21819C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2181A0:
    ctx->pc = 0x7F2181A0u;
    // 7F2181A0: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2181A4:
    ctx->pc = 0x7F2181A4u;
    // 7F2181A4: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2181A8:
    ctx->pc = 0x7F2181A8u;
    // 7F2181A8: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2181AC:
    ctx->pc = 0x7F2181ACu;
    // 7F2181AC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2181B0:
    ctx->pc = 0x7F2181B0u;
    // 7F2181B0: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2181B4:
    ctx->pc = 0x7F2181B4u;
    // 7F2181B4: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F2181B8:
    ctx->pc = 0x7F2181B8u;
    // 7F2181B8: rlwinm r5, r0, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F2181BC:
    ctx->pc = 0x7F2181BCu;
    // 7F2181BC: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2181C0:
    ctx->pc = 0x7F2181C0u;
    // 7F2181C0: xoris   r4, r5, 0x8000
    ctx->gpr[4] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F2181C4:
    ctx->pc = 0x7F2181C4u;
    // 7F2181C4: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2181C8:
    ctx->pc = 0x7F2181C8u;
    // 7F2181C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2181CC:
    ctx->pc = 0x7F2181CCu;
    // 7F2181CC: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2181CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2181D0:
    ctx->pc = 0x7F2181D0u;
    // 7F2181D0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2181D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2181D4:
    ctx->pc = 0x7F2181D4u;
    // 7F2181D4: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2181D4u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2181D8:
    ctx->pc = 0x7F2181D8u;
    // 7F2181D8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2181D8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2181DC:
    ctx->pc = 0x7F2181DCu;
    // 7F2181DC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2181DCu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F2181E0:
    ctx->pc = 0x7F2181E0u;
    // 7F2181E0: stfs     f1, 108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2181E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2181E4:
    ctx->pc = 0x7F2181E4u;
    // 7F2181E4: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2181E8:
    ctx->pc = 0x7F2181E8u;
    // 7F2181E8: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2181EC:
    ctx->pc = 0x7F2181ECu;
    // 7F2181EC: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2181F0:
    ctx->pc = 0x7F2181F0u;
    // 7F2181F0: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2181F4:
    ctx->pc = 0x7F2181F4u;
    // 7F2181F4: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2181F8:
    ctx->pc = 0x7F2181F8u;
    // 7F2181F8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2181FC:
    ctx->pc = 0x7F2181FCu;
    // 7F2181FC: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218200:
    ctx->pc = 0x7F218200u;
    // 7F218200: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F218204:
    ctx->pc = 0x7F218204u;
    // 7F218204: rlwinm r5, r0, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F218208:
    ctx->pc = 0x7F218208u;
    // 7F218208: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F21820C:
    ctx->pc = 0x7F21820Cu;
    // 7F21820C: xoris   r4, r5, 0x8000
    ctx->gpr[4] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F218210:
    ctx->pc = 0x7F218210u;
    // 7F218210: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218214:
    ctx->pc = 0x7F218214u;
    // 7F218214: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218218:
    ctx->pc = 0x7F218218u;
    // 7F218218: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21821C:
    ctx->pc = 0x7F21821Cu;
    // 7F21821C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21821Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218220:
    ctx->pc = 0x7F218220u;
    // 7F218220: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F218220u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F218224:
    ctx->pc = 0x7F218224u;
    // 7F218224: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218224u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F218228:
    ctx->pc = 0x7F218228u;
    // 7F218228: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218228u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F21822C:
    ctx->pc = 0x7F21822Cu;
    // 7F21822C: stfs     f1, 112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21822Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F218230:
    ctx->pc = 0x7F218230u;
    // 7F218230: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F218234:
    ctx->pc = 0x7F218234u;
    // 7F218234: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F218238:
    ctx->pc = 0x7F218238u;
    // 7F218238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21823C:
    ctx->pc = 0x7F21823Cu;
    ctx->downcount -= 81;
    // 7F21823C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218240:
    ctx->pc = 0x7F218240u;
    // 7F218240: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F218244:
    ctx->pc = 0x7F218244u;
    // 7F218244: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F218248:
    ctx->pc = 0x7F218248u;
    // 7F218248: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21824C:
    ctx->pc = 0x7F21824Cu;
    // 7F21824C: lwz     r7, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F218250:
    ctx->pc = 0x7F218250u;
    // 7F218250: lfd     f4, 16416(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F218250u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16416);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218254:
    ctx->pc = 0x7F218254u;
    // 7F218254: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F218258:
    ctx->pc = 0x7F218258u;
    // 7F218258: lfd     f3, 16424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F218258u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16424);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21825C:
    ctx->pc = 0x7F21825Cu;
    // 7F21825C: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218260:
    ctx->pc = 0x7F218260u;
    // 7F218260: lwz     r6, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218264:
    ctx->pc = 0x7F218264u;
    // 7F218264: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218268:
    ctx->pc = 0x7F218268u;
    // 7F218268: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F21826C:
    ctx->pc = 0x7F21826Cu;
    // 7F21826C: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218270:
    ctx->pc = 0x7F218270u;
    // 7F218270: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218274:
    ctx->pc = 0x7F218274u;
    // 7F218274: lbz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F218278:
    ctx->pc = 0x7F218278u;
    // 7F218278: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F21827C:
    ctx->pc = 0x7F21827Cu;
    // 7F21827C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218280:
    ctx->pc = 0x7F218280u;
    // 7F218280: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F218284:
    ctx->pc = 0x7F218284u;
    // 7F218284: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218288:
    ctx->pc = 0x7F218288u;
    // 7F218288: rlwinm r0, r6, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F21828C:
    ctx->pc = 0x7F21828Cu;
    // 7F21828C: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F218290:
    ctx->pc = 0x7F218290u;
    // 7F218290: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218294:
    ctx->pc = 0x7F218294u;
    // 7F218294: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F218298:
    ctx->pc = 0x7F218298u;
    // 7F218298: lfs     f0, 104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218298u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21829C:
    ctx->pc = 0x7F21829Cu;
    // 7F21829C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2182A0:
    ctx->pc = 0x7F2182A0u;
    // 7F2182A0: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2182A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2182A4:
    ctx->pc = 0x7F2182A4u;
    // 7F2182A4: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2182A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2182A8:
    ctx->pc = 0x7F2182A8u;
    // 7F2182A8: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2182A8u)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_7F2182AC:
    ctx->pc = 0x7F2182ACu;
    // 7F2182AC: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2182B0:
    ctx->pc = 0x7F2182B0u;
    // 7F2182B0: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2182B0u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2182B4:
    ctx->pc = 0x7F2182B4u;
    // 7F2182B4: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2182B8:
    ctx->pc = 0x7F2182B8u;
    // 7F2182B8: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2182B8u)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F2182BC:
    ctx->pc = 0x7F2182BCu;
    // 7F2182BC: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2182C0:
    ctx->pc = 0x7F2182C0u;
    // 7F2182C0: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2182C4:
    ctx->pc = 0x7F2182C4u;
    // 7F2182C4: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2182C4u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F2182C8:
    ctx->pc = 0x7F2182C8u;
    // 7F2182C8: stfs     f0, 104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2182C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2182CC:
    ctx->pc = 0x7F2182CCu;
    // 7F2182CC: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2182D0:
    ctx->pc = 0x7F2182D0u;
    // 7F2182D0: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2182D4:
    ctx->pc = 0x7F2182D4u;
    // 7F2182D4: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2182D8:
    ctx->pc = 0x7F2182D8u;
    // 7F2182D8: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2182DC:
    ctx->pc = 0x7F2182DCu;
    // 7F2182DC: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2182E0:
    ctx->pc = 0x7F2182E0u;
    // 7F2182E0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2182E4:
    ctx->pc = 0x7F2182E4u;
    // 7F2182E4: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2182E8:
    ctx->pc = 0x7F2182E8u;
    // 7F2182E8: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F2182EC:
    ctx->pc = 0x7F2182ECu;
    // 7F2182EC: rlwinm r5, r0, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F2182F0:
    ctx->pc = 0x7F2182F0u;
    // 7F2182F0: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2182F4:
    ctx->pc = 0x7F2182F4u;
    // 7F2182F4: xoris   r4, r5, 0x8000
    ctx->gpr[4] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F2182F8:
    ctx->pc = 0x7F2182F8u;
    // 7F2182F8: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2182FC:
    ctx->pc = 0x7F2182FCu;
    // 7F2182FC: lfs     f0, 108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2182FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F218300:
    ctx->pc = 0x7F218300u;
    // 7F218300: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218304:
    ctx->pc = 0x7F218304u;
    // 7F218304: lfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218304u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218308:
    ctx->pc = 0x7F218308u;
    // 7F218308: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21830C:
    ctx->pc = 0x7F21830Cu;
    // 7F21830C: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21830Cu)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_7F218310:
    ctx->pc = 0x7F218310u;
    // 7F218310: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F218310u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F218314:
    ctx->pc = 0x7F218314u;
    // 7F218314: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218314u)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F218318:
    ctx->pc = 0x7F218318u;
    // 7F218318: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218318u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F21831C:
    ctx->pc = 0x7F21831Cu;
    // 7F21831C: stfs     f0, 108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21831Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F218320:
    ctx->pc = 0x7F218320u;
    // 7F218320: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218324:
    ctx->pc = 0x7F218324u;
    // 7F218324: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F218328:
    ctx->pc = 0x7F218328u;
    // 7F218328: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21832C:
    ctx->pc = 0x7F21832Cu;
    // 7F21832C: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218330:
    ctx->pc = 0x7F218330u;
    // 7F218330: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F218334:
    ctx->pc = 0x7F218334u;
    // 7F218334: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218338:
    ctx->pc = 0x7F218338u;
    // 7F218338: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21833C:
    ctx->pc = 0x7F21833Cu;
    // 7F21833C: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F218340:
    ctx->pc = 0x7F218340u;
    // 7F218340: rlwinm r5, r0, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F218344:
    ctx->pc = 0x7F218344u;
    // 7F218344: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218348:
    ctx->pc = 0x7F218348u;
    // 7F218348: xoris   r4, r5, 0x8000
    ctx->gpr[4] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F21834C:
    ctx->pc = 0x7F21834Cu;
    // 7F21834C: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218350:
    ctx->pc = 0x7F218350u;
    // 7F218350: lfs     f0, 112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218350u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F218354:
    ctx->pc = 0x7F218354u;
    // 7F218354: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218358:
    ctx->pc = 0x7F218358u;
    // 7F218358: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21835C:
    ctx->pc = 0x7F21835Cu;
    // 7F21835C: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21835Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218360:
    ctx->pc = 0x7F218360u;
    // 7F218360: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F218360u)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_7F218364:
    ctx->pc = 0x7F218364u;
    // 7F218364: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F218364u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F218368:
    ctx->pc = 0x7F218368u;
    // 7F218368: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218368u)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F21836C:
    ctx->pc = 0x7F21836Cu;
    // 7F21836C: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21836Cu)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F218370:
    ctx->pc = 0x7F218370u;
    // 7F218370: stfs     f0, 112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218370u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F218374:
    ctx->pc = 0x7F218374u;
    // 7F218374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F218378:
    ctx->pc = 0x7F218378u;
    // 7F218378: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F21837C:
    ctx->pc = 0x7F21837Cu;
    // 7F21837C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218380:
    ctx->pc = 0x7F218380u;
    ctx->downcount -= 12;
    // 7F218380: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218384:
    ctx->pc = 0x7F218384u;
    // 7F218384: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218388:
    ctx->pc = 0x7F218388u;
    // 7F218388: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21838C:
    ctx->pc = 0x7F21838Cu;
    // 7F21838C: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218390:
    ctx->pc = 0x7F218390u;
    // 7F218390: lbz     r6, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F218394:
    ctx->pc = 0x7F218394u;
    // 7F218394: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218398:
    ctx->pc = 0x7F218398u;
    // 7F218398: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21839C:
    ctx->pc = 0x7F21839Cu;
    // 7F21839C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2183A0:
    ctx->pc = 0x7F2183A0u;
    // 7F2183A0: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2183A4:
    ctx->pc = 0x7F2183A4u;
    // 7F2183A4: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2183A8:
    ctx->pc = 0x7F2183A8u;
    // 7F2183A8: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2183AC:
    ctx->pc = 0x7F2183ACu;
    // 7F2183AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2183B0:
    ctx->pc = 0x7F2183B0u;
    ctx->downcount -= 26;
    // 7F2183B0: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2183B4:
    ctx->pc = 0x7F2183B4u;
    // 7F2183B4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2183B8:
    ctx->pc = 0x7F2183B8u;
    // 7F2183B8: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2183BC:
    ctx->pc = 0x7F2183BCu;
    // 7F2183BC: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2183C0:
    ctx->pc = 0x7F2183C0u;
    // 7F2183C0: lbz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F2183C4:
    ctx->pc = 0x7F2183C4u;
    // 7F2183C4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2183C8:
    ctx->pc = 0x7F2183C8u;
    // 7F2183C8: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2183CC:
    ctx->pc = 0x7F2183CCu;
    // 7F2183CC: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2183D0:
    ctx->pc = 0x7F2183D0u;
    // 7F2183D0: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2183D4:
    ctx->pc = 0x7F2183D4u;
    // 7F2183D4: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2183D8:
    ctx->pc = 0x7F2183D8u;
    // 7F2183D8: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2183DC:
    ctx->pc = 0x7F2183DCu;
    // 7F2183DC: lbz     r6, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F2183E0:
    ctx->pc = 0x7F2183E0u;
    // 7F2183E0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2183E4:
    ctx->pc = 0x7F2183E4u;
    // 7F2183E4: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2183E8:
    ctx->pc = 0x7F2183E8u;
    // 7F2183E8: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2183EC:
    ctx->pc = 0x7F2183ECu;
    // 7F2183EC: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2183F0:
    ctx->pc = 0x7F2183F0u;
    // 7F2183F0: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2183F4:
    ctx->pc = 0x7F2183F4u;
    // 7F2183F4: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2183F8:
    ctx->pc = 0x7F2183F8u;
    // 7F2183F8: lbz     r6, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F2183FC:
    ctx->pc = 0x7F2183FCu;
    // 7F2183FC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218400:
    ctx->pc = 0x7F218400u;
    // 7F218400: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218404:
    ctx->pc = 0x7F218404u;
    // 7F218404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F218408:
    ctx->pc = 0x7F218408u;
    // 7F218408: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F21840C:
    ctx->pc = 0x7F21840Cu;
    // 7F21840C: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F218410:
    ctx->pc = 0x7F218410u;
    // 7F218410: stb     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F218414:
    ctx->pc = 0x7F218414u;
    // 7F218414: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218418:
    ctx->pc = 0x7F218418u;
    ctx->downcount -= 41;
    // 7F218418: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21841C:
    ctx->pc = 0x7F21841Cu;
    // 7F21841C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F218420:
    ctx->pc = 0x7F218420u;
    // 7F218420: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F218424:
    ctx->pc = 0x7F218424u;
    // 7F218424: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F218428:
    ctx->pc = 0x7F218428u;
    // 7F218428: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21842C:
    ctx->pc = 0x7F21842Cu;
    // 7F21842C: addi    r10, r9, 16432
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(16432);

label_7F218430:
    ctx->pc = 0x7F218430u;
    // 7F218430: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F218434:
    ctx->pc = 0x7F218434u;
    // 7F218434: or   r11, r4, r4
    {
        ctx->gpr[11] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F218438:
    ctx->pc = 0x7F218438u;
    // 7F218438: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21843C:
    ctx->pc = 0x7F21843Cu;
    // 7F21843C: addi    r7, r6, 16424
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(16424);

label_7F218440:
    ctx->pc = 0x7F218440u;
    // 7F218440: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F218444:
    ctx->pc = 0x7F218444u;
    // 7F218444: lfd     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F218444u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218448:
    ctx->pc = 0x7F218448u;
    // 7F218448: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F21844C:
    ctx->pc = 0x7F21844Cu;
    // 7F21844C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F218450:
    ctx->pc = 0x7F218450u;
    // 7F218450: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218454:
    ctx->pc = 0x7F218454u;
    // 7F218454: addi    r6, r5, 16436
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(16436);

label_7F218458:
    ctx->pc = 0x7F218458u;
    // 7F218458: lfs     f4, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F218458u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F21845C:
    ctx->pc = 0x7F21845Cu;
    // 7F21845C: addi    r4, r4, -32624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32624);

label_7F218460:
    ctx->pc = 0x7F218460u;
    // 7F218460: lwz     r9, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F218464:
    ctx->pc = 0x7F218464u;
    // 7F218464: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F218468:
    ctx->pc = 0x7F218468u;
    // 7F218468: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F21846C:
    ctx->pc = 0x7F21846Cu;
    // 7F21846C: addi    r0, r9, 1
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(1);

label_7F218470:
    ctx->pc = 0x7F218470u;
    // 7F218470: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F218470u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F218474:
    ctx->pc = 0x7F218474u;
    // 7F218474: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218478:
    ctx->pc = 0x7F218478u;
    // 7F218478: lwz     r7, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21847C:
    ctx->pc = 0x7F21847Cu;
    // 7F21847C: lbz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F218480:
    ctx->pc = 0x7F218480u;
    // 7F218480: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F218484:
    ctx->pc = 0x7F218484u;
    // 7F218484: stw     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F218488:
    ctx->pc = 0x7F218488u;
    // 7F218488: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21848C:
    ctx->pc = 0x7F21848Cu;
    // 7F21848C: or   r3, r11, r11
    {
        ctx->gpr[3] = ctx->gpr[11] | ctx->gpr[11];
    }

label_7F218490:
    ctx->pc = 0x7F218490u;
    // 7F218490: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F218494:
    ctx->pc = 0x7F218494u;
    // 7F218494: lbz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218498:
    ctx->pc = 0x7F218498u;
    // 7F218498: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21849C:
    ctx->pc = 0x7F21849Cu;
    // 7F21849C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2184A0:
    ctx->pc = 0x7F2184A0u;
    // 7F2184A0: fsubs   f2, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2184A0u)) return;
    ppc_fsubs(ctx, 2, 1, 3);

label_7F2184A4:
    ctx->pc = 0x7F2184A4u;
    // 7F2184A4: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2184A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2184A8:
    ctx->pc = 0x7F2184A8u;
    // 7F2184A8: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2184A8u)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_7F2184AC:
    ctx->pc = 0x7F2184ACu;
    // 7F2184AC: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2184ACu)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2184B0:
    ctx->pc = 0x7F2184B0u;
    // 7F2184B0: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2184B0u)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F2184B4:
    ctx->pc = 0x7F2184B4u;
    // 7F2184B4: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2184B4u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F2184B8:
    ctx->pc = 0x7F2184B8u;
    // 7F2184B8: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F2184BCu;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F2184BC:
    ctx->pc = 0x7F2184BCu;
    ctx->downcount -= 6;
    // 7F2184BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2184C0:
    ctx->pc = 0x7F2184C0u;
    // 7F2184C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2184C4:
    ctx->pc = 0x7F2184C4u;
    // 7F2184C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2184C8:
    ctx->pc = 0x7F2184C8u;
    // 7F2184C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2184CC:
    ctx->pc = 0x7F2184CCu;
    // 7F2184CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2184D0:
    ctx->pc = 0x7F2184D0u;
    ctx->downcount -= 68;
    // 7F2184D0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2184D4:
    ctx->pc = 0x7F2184D4u;
    // 7F2184D4: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F2184D8:
    ctx->pc = 0x7F2184D8u;
    // 7F2184D8: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F2184DC:
    ctx->pc = 0x7F2184DCu;
    // 7F2184DC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2184E0:
    ctx->pc = 0x7F2184E0u;
    // 7F2184E0: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2184E4:
    ctx->pc = 0x7F2184E4u;
    // 7F2184E4: lfd     f4, 16416(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2184E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16416);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2184E8:
    ctx->pc = 0x7F2184E8u;
    // 7F2184E8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2184EC:
    ctx->pc = 0x7F2184ECu;
    // 7F2184EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2184F0:
    ctx->pc = 0x7F2184F0u;
    // 7F2184F0: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2184F4:
    ctx->pc = 0x7F2184F4u;
    // 7F2184F4: lfd     f3, 16424(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2184F4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16424);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2184F8:
    ctx->pc = 0x7F2184F8u;
    // 7F2184F8: lwz     r9, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2184FC:
    ctx->pc = 0x7F2184FCu;
    // 7F2184FC: lfs     f1, 16436(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2184FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F218500:
    ctx->pc = 0x7F218500u;
    // 7F218500: addi    r0, r9, 1
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(1);

label_7F218504:
    ctx->pc = 0x7F218504u;
    // 7F218504: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F218508:
    ctx->pc = 0x7F218508u;
    // 7F218508: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21850C:
    ctx->pc = 0x7F21850Cu;
    // 7F21850C: lwz     r7, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F218510:
    ctx->pc = 0x7F218510u;
    // 7F218510: lbz     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F218514:
    ctx->pc = 0x7F218514u;
    // 7F218514: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F218518:
    ctx->pc = 0x7F218518u;
    // 7F218518: stw     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F21851C:
    ctx->pc = 0x7F21851Cu;
    // 7F21851C: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F218520:
    ctx->pc = 0x7F218520u;
    // 7F218520: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218524:
    ctx->pc = 0x7F218524u;
    // 7F218524: rlwinm r0, r6, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F218528:
    ctx->pc = 0x7F218528u;
    // 7F218528: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21852C:
    ctx->pc = 0x7F21852Cu;
    // 7F21852C: lwz     r6, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218530:
    ctx->pc = 0x7F218530u;
    // 7F218530: lbz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F218534:
    ctx->pc = 0x7F218534u;
    // 7F218534: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F218538:
    ctx->pc = 0x7F218538u;
    // 7F218538: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21853C:
    ctx->pc = 0x7F21853Cu;
    // 7F21853C: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218540:
    ctx->pc = 0x7F218540u;
    // 7F218540: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218544:
    ctx->pc = 0x7F218544u;
    // 7F218544: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218548:
    ctx->pc = 0x7F218548u;
    // 7F218548: lbz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F21854C:
    ctx->pc = 0x7F21854Cu;
    // 7F21854C: fsubs   f5, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21854Cu)) return;
    ppc_fsubs(ctx, 5, 0, 4);

label_7F218550:
    ctx->pc = 0x7F218550u;
    // 7F218550: stw     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218554:
    ctx->pc = 0x7F218554u;
    // 7F218554: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218558:
    ctx->pc = 0x7F218558u;
    // 7F218558: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F21855C:
    ctx->pc = 0x7F21855Cu;
    // 7F21855C: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218560:
    ctx->pc = 0x7F218560u;
    // 7F218560: rlwinm r0, r6, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F218564:
    ctx->pc = 0x7F218564u;
    // 7F218564: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F218568:
    ctx->pc = 0x7F218568u;
    // 7F218568: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21856C:
    ctx->pc = 0x7F21856Cu;
    // 7F21856C: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218570:
    ctx->pc = 0x7F218570u;
    // 7F218570: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F218574:
    ctx->pc = 0x7F218574u;
    // 7F218574: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F218574u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F218578:
    ctx->pc = 0x7F218578u;
    // 7F218578: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21857C:
    ctx->pc = 0x7F21857Cu;
    // 7F21857C: lha     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218580:
    ctx->pc = 0x7F218580u;
    // 7F218580: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F218584:
    ctx->pc = 0x7F218584u;
    // 7F218584: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218584u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_7F218588:
    ctx->pc = 0x7F218588u;
    // 7F218588: lfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218588u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21858C:
    ctx->pc = 0x7F21858Cu;
    // 7F21858C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218590:
    ctx->pc = 0x7F218590u;
    // 7F218590: fmuls   f0, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218590u)) return;
    ppc_fmuls(ctx, 0, 5, 1);

label_7F218594:
    ctx->pc = 0x7F218594u;
    // 7F218594: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F218598:
    ctx->pc = 0x7F218598u;
    // 7F218598: fsubs   f4, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F218598u)) return;
    ppc_fsubs(ctx, 4, 2, 4);

label_7F21859C:
    ctx->pc = 0x7F21859Cu;
    // 7F21859C: lfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21859Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2185A0:
    ctx->pc = 0x7F2185A0u;
    // 7F2185A0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2185A0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2185A4:
    ctx->pc = 0x7F2185A4u;
    // 7F2185A4: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2185A4u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F2185A8:
    ctx->pc = 0x7F2185A8u;
    // 7F2185A8: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2185A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2185AC:
    ctx->pc = 0x7F2185ACu;
    // 7F2185AC: fadds   f4, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2185ACu)) return;
    ppc_fadds(ctx, 4, 4, 2);

label_7F2185B0:
    ctx->pc = 0x7F2185B0u;
    // 7F2185B0: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2185B4:
    ctx->pc = 0x7F2185B4u;
    // 7F2185B4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2185B8:
    ctx->pc = 0x7F2185B8u;
    // 7F2185B8: fmuls   f0, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2185B8u)) return;
    ppc_fmuls(ctx, 0, 4, 1);

label_7F2185BC:
    ctx->pc = 0x7F2185BCu;
    // 7F2185BC: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2185C0:
    ctx->pc = 0x7F2185C0u;
    // 7F2185C0: lha     r4, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2185C4:
    ctx->pc = 0x7F2185C4u;
    // 7F2185C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2185C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2185C8:
    ctx->pc = 0x7F2185C8u;
    // 7F2185C8: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2185C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2185CC:
    ctx->pc = 0x7F2185CCu;
    // 7F2185CC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2185D0:
    ctx->pc = 0x7F2185D0u;
    // 7F2185D0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2185D4:
    ctx->pc = 0x7F2185D4u;
    // 7F2185D4: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2185D8:
    ctx->pc = 0x7F2185D8u;
    // 7F2185D8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2185DC:
    ctx->pc = 0x7F2185DCu;
    // 7F2185DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2185E0:
    ctx->pc = 0x7F2185E0u;
    ctx->downcount -= 29;
    // 7F2185E0: addi    r6, r3, 96
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(96);

label_7F2185E4:
    ctx->pc = 0x7F2185E4u;
    // 7F2185E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2185E8:
    ctx->pc = 0x7F2185E8u;
    // 7F2185E8: lwz     r4, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2185EC:
    ctx->pc = 0x7F2185ECu;
    // 7F2185EC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2185F0:
    ctx->pc = 0x7F2185F0u;
    // 7F2185F0: stw     r0, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2185F4:
    ctx->pc = 0x7F2185F4u;
    // 7F2185F4: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2185F8:
    ctx->pc = 0x7F2185F8u;
    // 7F2185F8: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2185FC:
    ctx->pc = 0x7F2185FCu;
    // 7F2185FC: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F218600:
    ctx->pc = 0x7F218600u;
    // 7F218600: stw     r0, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218604:
    ctx->pc = 0x7F218604u;
    // 7F218604: rlwinm r0, r4, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F218608:
    ctx->pc = 0x7F218608u;
    // 7F218608: extsh r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F21860C:
    ctx->pc = 0x7F21860Cu;
    // 7F21860C: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218610:
    ctx->pc = 0x7F218610u;
    // 7F218610: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F218614:
    ctx->pc = 0x7F218614u;
    // 7F218614: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F218618:
    ctx->pc = 0x7F218618u;
    // 7F218618: stw     r0, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21861C:
    ctx->pc = 0x7F21861Cu;
    // 7F21861C: add   r7, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F218620:
    ctx->pc = 0x7F218620u;
    // 7F218620: lbz     r4, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F218624:
    ctx->pc = 0x7F218624u;
    // 7F218624: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F218628:
    ctx->pc = 0x7F218628u;
    // 7F218628: stb     r0, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21862C:
    ctx->pc = 0x7F21862Cu;
    // 7F21862C: lbz     r0, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218630:
    ctx->pc = 0x7F218630u;
    // 7F218630: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F218634:
    ctx->pc = 0x7F218634u;
    // 7F218634: add   r4, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F218638:
    ctx->pc = 0x7F218638u;
    // 7F218638: sth     r7, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F21863C:
    ctx->pc = 0x7F21863Cu;
    // 7F21863C: lbz     r0, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218640:
    ctx->pc = 0x7F218640u;
    // 7F218640: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218644:
    ctx->pc = 0x7F218644u;
    // 7F218644: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218648:
    ctx->pc = 0x7F218648u;
    // 7F218648: add   r4, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21864C:
    ctx->pc = 0x7F21864Cu;
    // 7F21864C: stw     r5, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218650:
    ctx->pc = 0x7F218650u;
    // 7F218650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218654:
    ctx->pc = 0x7F218654u;
    ctx->downcount -= 9;
    // 7F218654: addi    r5, r3, 96
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(96);

label_7F218658:
    ctx->pc = 0x7F218658u;
    // 7F218658: lbz     r6, 123(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(123);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F21865C:
    ctx->pc = 0x7F21865Cu;
    // 7F21865C: rlwinm r0, r6, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_7F218660:
    ctx->pc = 0x7F218660u;
    // 7F218660: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F218664:
    ctx->pc = 0x7F218664u;
    // 7F218664: lha     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218668:
    ctx->pc = 0x7F218668u;
    // 7F218668: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F21866C:
    ctx->pc = 0x7F21866Cu;
    // 7F21866C: extsh. r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F218670:
    ctx->pc = 0x7F218670u;
    // 7F218670: sth     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F218674:
    ctx->pc = 0x7F218674u;
    // 7F218674: bc    4, 1, 0x7F21868C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21868C;
        }
    }

label_7F218678:
    ctx->pc = 0x7F218678u;
    ctx->downcount -= 5;
    // 7F218678: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F21867C:
    ctx->pc = 0x7F21867Cu;
    // 7F21867C: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F218680:
    ctx->pc = 0x7F218680u;
    // 7F218680: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218684:
    ctx->pc = 0x7F218684u;
    // 7F218684: stw     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218688:
    ctx->pc = 0x7F218688u;
    // 7F218688: b       0x7F2186C0
    {
            goto label_7F2186C0;
    }

label_7F21868C:
    ctx->pc = 0x7F21868Cu;
    ctx->downcount -= 2;
    // 7F21868C: cmpwi   r3, 0
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

label_7F218690:
    ctx->pc = 0x7F218690u;
    // 7F218690: bc    4, 2, 0x7F2186B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2186B0;
        }
    }

label_7F218694:
    ctx->pc = 0x7F218694u;
    ctx->downcount -= 7;
    // 7F218694: lbz     r3, 27(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(27);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F218698:
    ctx->pc = 0x7F218698u;
    // 7F218698: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F21869C:
    ctx->pc = 0x7F21869Cu;
    // 7F21869C: stb     r0, 27(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2186A0:
    ctx->pc = 0x7F2186A0u;
    // 7F2186A0: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2186A4:
    ctx->pc = 0x7F2186A4u;
    // 7F2186A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2186A8:
    ctx->pc = 0x7F2186A8u;
    // 7F2186A8: stw     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2186AC:
    ctx->pc = 0x7F2186ACu;
    // 7F2186AC: b       0x7F2186C0
    {
            goto label_7F2186C0;
    }

label_7F2186B0:
    ctx->pc = 0x7F2186B0u;
    ctx->downcount -= 4;
    // 7F2186B0: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F2186B4:
    ctx->pc = 0x7F2186B4u;
    // 7F2186B4: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2186B8:
    ctx->pc = 0x7F2186B8u;
    // 7F2186B8: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2186BC:
    ctx->pc = 0x7F2186BCu;
    // 7F2186BC: stw     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2186C0:
    ctx->pc = 0x7F2186C0u;
    ctx->downcount -= 2;
    // 7F2186C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2186C4:
    ctx->pc = 0x7F2186C4u;
    // 7F2186C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2186C8:
    ctx->pc = 0x7F2186C8u;
    ctx->downcount -= 12;
    // 7F2186C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2186CC:
    ctx->pc = 0x7F2186CCu;
    // 7F2186CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2186D0:
    ctx->pc = 0x7F2186D0u;
    // 7F2186D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2186D4:
    ctx->pc = 0x7F2186D4u;
    // 7F2186D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2186D8:
    ctx->pc = 0x7F2186D8u;
    // 7F2186D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2186DC:
    ctx->pc = 0x7F2186DCu;
    // 7F2186DC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2186E0:
    ctx->pc = 0x7F2186E0u;
    // 7F2186E0: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2186E4:
    ctx->pc = 0x7F2186E4u;
    // 7F2186E4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2186E8:
    ctx->pc = 0x7F2186E8u;
    // 7F2186E8: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2186EC:
    ctx->pc = 0x7F2186ECu;
    // 7F2186EC: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2186F0:
    ctx->pc = 0x7F2186F0u;
    // 7F2186F0: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2186F4:
    ctx->pc = 0x7F2186F4u;
    // 7F2186F4: bc    12, 2, 0x7F218700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218700;
        }
    }

label_7F2186F8:
    ctx->pc = 0x7F2186F8u;
    ctx->downcount -= 2;
    // 7F2186F8: rlwinm. r0, r3, 0, 27, 27
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

label_7F2186FC:
    ctx->pc = 0x7F2186FCu;
    // 7F2186FC: bc    12, 2, 0x7F218714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218714;
        }
    }

label_7F218700:
    ctx->pc = 0x7F218700u;
    ctx->downcount -= 5;
    // 7F218700: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F218704:
    ctx->pc = 0x7F218704u;
    // 7F218704: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218708:
    ctx->pc = 0x7F218708u;
    // 7F218708: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21870C:
    ctx->pc = 0x7F21870Cu;
    // 7F21870C: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F218710:
    ctx->pc = 0x7F218710u;
    // 7F218710: bl      0x7F3C8058
    {
            ctx->lr = 0x7F218714u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F218714:
    ctx->pc = 0x7F218714u;
    ctx->downcount -= 2;
    // 7F218714: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218718:
    ctx->pc = 0x7F218718u;
    // 7F218718: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21871Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21871C:
    ctx->pc = 0x7F21871Cu;
    ctx->downcount -= 7;
    // 7F21871C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218720:
    ctx->pc = 0x7F218720u;
    // 7F218720: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F218724:
    ctx->pc = 0x7F218724u;
    // 7F218724: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F218728:
    ctx->pc = 0x7F218728u;
    // 7F218728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21872C:
    ctx->pc = 0x7F21872Cu;
    // 7F21872C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F218730:
    ctx->pc = 0x7F218730u;
    // 7F218730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218734:
    ctx->pc = 0x7F218734u;
    ctx->downcount -= 12;
    // 7F218734: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218738:
    ctx->pc = 0x7F218738u;
    // 7F218738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21873C:
    ctx->pc = 0x7F21873Cu;
    // 7F21873C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218740:
    ctx->pc = 0x7F218740u;
    // 7F218740: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F218744:
    ctx->pc = 0x7F218744u;
    // 7F218744: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F218748:
    ctx->pc = 0x7F218748u;
    // 7F218748: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21874C:
    ctx->pc = 0x7F21874Cu;
    // 7F21874C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218750:
    ctx->pc = 0x7F218750u;
    // 7F218750: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F218754:
    ctx->pc = 0x7F218754u;
    // 7F218754: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218758:
    ctx->pc = 0x7F218758u;
    // 7F218758: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21875C:
    ctx->pc = 0x7F21875Cu;
    // 7F21875C: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F218760:
    ctx->pc = 0x7F218760u;
    // 7F218760: bc    12, 2, 0x7F21876C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21876C;
        }
    }

label_7F218764:
    ctx->pc = 0x7F218764u;
    ctx->downcount -= 2;
    // 7F218764: rlwinm. r0, r3, 0, 27, 27
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

label_7F218768:
    ctx->pc = 0x7F218768u;
    // 7F218768: bc    12, 2, 0x7F218780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218780;
        }
    }

label_7F21876C:
    ctx->pc = 0x7F21876Cu;
    ctx->downcount -= 5;
    // 7F21876C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F218770:
    ctx->pc = 0x7F218770u;
    // 7F218770: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218774:
    ctx->pc = 0x7F218774u;
    // 7F218774: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218778:
    ctx->pc = 0x7F218778u;
    // 7F218778: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F21877C:
    ctx->pc = 0x7F21877Cu;
    // 7F21877C: bl      0x7F3C8058
    {
            ctx->lr = 0x7F218780u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F218780:
    ctx->pc = 0x7F218780u;
    ctx->downcount -= 2;
    // 7F218780: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218784:
    ctx->pc = 0x7F218784u;
    // 7F218784: bl      0x7F3C8210
    {
            ctx->lr = 0x7F218788u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F218788:
    ctx->pc = 0x7F218788u;
    ctx->downcount -= 7;
    // 7F218788: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21878C:
    ctx->pc = 0x7F21878Cu;
    // 7F21878C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F218790:
    ctx->pc = 0x7F218790u;
    // 7F218790: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F218794:
    ctx->pc = 0x7F218794u;
    // 7F218794: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F218798:
    ctx->pc = 0x7F218798u;
    // 7F218798: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21879C:
    ctx->pc = 0x7F21879Cu;
    // 7F21879C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2187A0:
    ctx->pc = 0x7F2187A0u;
    ctx->downcount -= 20;
    // 7F2187A0: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2187A4:
    ctx->pc = 0x7F2187A4u;
    // 7F2187A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2187A8:
    ctx->pc = 0x7F2187A8u;
    // 7F2187A8: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2187AC:
    ctx->pc = 0x7F2187ACu;
    // 7F2187AC: stmw     r29, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2187B0:
    ctx->pc = 0x7F2187B0u;
    // 7F2187B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2187B4:
    ctx->pc = 0x7F2187B4u;
    // 7F2187B4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2187B8:
    ctx->pc = 0x7F2187B8u;
    // 7F2187B8: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2187BC:
    ctx->pc = 0x7F2187BCu;
    // 7F2187BC: lwz     r4, 18308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2187C0:
    ctx->pc = 0x7F2187C0u;
    // 7F2187C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2187C4:
    ctx->pc = 0x7F2187C4u;
    // 7F2187C4: bl      0x7F218C68
    {
            ctx->lr = 0x7F2187C8u;
            goto label_7F218C68;
    }

label_7F2187C8:
    ctx->pc = 0x7F2187C8u;
    ctx->downcount -= 3;
    // 7F2187C8: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2187CC:
    ctx->pc = 0x7F2187CCu;
    // 7F2187CC: cmplwi  r0, 0x0000
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

label_7F2187D0:
    ctx->pc = 0x7F2187D0u;
    // 7F2187D0: bc    12, 2, 0x7F2187F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2187F8;
        }
    }

label_7F2187D4:
    ctx->pc = 0x7F2187D4u;
    ctx->downcount -= 9;
    // 7F2187D4: lwz     r5, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2187D8:
    ctx->pc = 0x7F2187D8u;
    // 7F2187D8: lwz     r4, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2187DC:
    ctx->pc = 0x7F2187DCu;
    // 7F2187DC: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2187E0:
    ctx->pc = 0x7F2187E0u;
    // 7F2187E0: lwz     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2187E4:
    ctx->pc = 0x7F2187E4u;
    // 7F2187E4: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2187E8:
    ctx->pc = 0x7F2187E8u;
    // 7F2187E8: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2187EC:
    ctx->pc = 0x7F2187ECu;
    // 7F2187EC: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2187F0:
    ctx->pc = 0x7F2187F0u;
    // 7F2187F0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2187F4:
    ctx->pc = 0x7F2187F4u;
    // 7F2187F4: b       0x7F218828
    {
            goto label_7F218828;
    }

label_7F2187F8:
    ctx->pc = 0x7F2187F8u;
    ctx->downcount -= 12;
    // 7F2187F8: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2187FC:
    ctx->pc = 0x7F2187FCu;
    // 7F2187FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218800:
    ctx->pc = 0x7F218800u;
    // 7F218800: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F218804:
    ctx->pc = 0x7F218804u;
    // 7F218804: lwz     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218808:
    ctx->pc = 0x7F218808u;
    // 7F218808: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21880C:
    ctx->pc = 0x7F21880Cu;
    // 7F21880C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218810:
    ctx->pc = 0x7F218810u;
    // 7F218810: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218814:
    ctx->pc = 0x7F218814u;
    // 7F218814: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218818:
    ctx->pc = 0x7F218818u;
    // 7F218818: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21881C:
    ctx->pc = 0x7F21881Cu;
    // 7F21881C: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218820:
    ctx->pc = 0x7F218820u;
    // 7F218820: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218824:
    ctx->pc = 0x7F218824u;
    // 7F218824: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218828:
    ctx->pc = 0x7F218828u;
    ctx->downcount -= 26;
    // 7F218828: lwz     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21882C:
    ctx->pc = 0x7F21882Cu;
    // 7F21882C: lwz     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218830:
    ctx->pc = 0x7F218830u;
    // 7F218830: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218834:
    ctx->pc = 0x7F218834u;
    // 7F218834: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218838:
    ctx->pc = 0x7F218838u;
    // 7F218838: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21883C:
    ctx->pc = 0x7F21883Cu;
    // 7F21883C: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218840:
    ctx->pc = 0x7F218840u;
    // 7F218840: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218844:
    ctx->pc = 0x7F218844u;
    // 7F218844: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218848:
    ctx->pc = 0x7F218848u;
    // 7F218848: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21884C:
    ctx->pc = 0x7F21884Cu;
    // 7F21884C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218850:
    ctx->pc = 0x7F218850u;
    // 7F218850: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F218854:
    ctx->pc = 0x7F218854u;
    // 7F218854: lwz     r4, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218858:
    ctx->pc = 0x7F218858u;
    // 7F218858: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21885C:
    ctx->pc = 0x7F21885Cu;
    // 7F21885C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218860:
    ctx->pc = 0x7F218860u;
    // 7F218860: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218864:
    ctx->pc = 0x7F218864u;
    // 7F218864: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218868:
    ctx->pc = 0x7F218868u;
    // 7F218868: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21886C:
    ctx->pc = 0x7F21886Cu;
    // 7F21886C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218870:
    ctx->pc = 0x7F218870u;
    // 7F218870: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218874:
    ctx->pc = 0x7F218874u;
    // 7F218874: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218878:
    ctx->pc = 0x7F218878u;
    // 7F218878: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21887C:
    ctx->pc = 0x7F21887Cu;
    // 7F21887C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F218880:
    ctx->pc = 0x7F218880u;
    // 7F218880: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218884:
    ctx->pc = 0x7F218884u;
    // 7F218884: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218888:
    ctx->pc = 0x7F218888u;
    // 7F218888: cmpwi   r0, 0
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

label_7F21888C:
    ctx->pc = 0x7F21888Cu;
    // 7F21888C: bc    12, 1, 0x7F21890C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21890C;
        }
    }

label_7F218890:
    ctx->pc = 0x7F218890u;
    ctx->downcount -= 2;
    // 7F218890: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F218894:
    ctx->pc = 0x7F218894u;
    // 7F218894: addi    r29, r3, -1872
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-1872);

label_7F218898:
    ctx->pc = 0x7F218898u;
    ctx->downcount -= 4;
    // 7F218898: lwz     r3, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21889C:
    ctx->pc = 0x7F21889Cu;
    // 7F21889C: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2188A0:
    // 7F2188A0: rlwinm. r0, r0, 0, 25, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000007Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2188A4:
    // 7F2188A4: bc    4, 1, 0x7F2188B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2188B0;
        }
    }

label_7F2188A8:
    ctx->downcount -= 2;
    // 7F2188A8: cmpwi   r0, 15
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

label_7F2188AC:
    // 7F2188AC: bc    12, 0, 0x7F2188E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2188E4;
        }
    }

label_7F2188B0:
    ctx->pc = 0x7F2188B0u;
    ctx->downcount -= 3;
    // 7F2188B0: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2188B4:
    // 7F2188B4: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2188B8:
    // 7F2188B8: bc    12, 2, 0x7F2188C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2188C4;
        }
    }

label_7F2188BC:
    ctx->downcount -= 2;
    // 7F2188BC: rlwinm. r0, r3, 0, 27, 27
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

label_7F2188C0:
    // 7F2188C0: bc    12, 2, 0x7F2188D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2188D8;
        }
    }

label_7F2188C4:
    ctx->downcount -= 5;
    // 7F2188C4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2188C8:
    // 7F2188C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2188CC:
    // 7F2188CC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2188D0:
    // 7F2188D0: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F2188D4:
    // 7F2188D4: bl      0x7F3C8058
    {
            ctx->lr = 0x7F2188D8u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F2188D8:
    ctx->downcount -= 2;
    // 7F2188D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2188DC:
    // 7F2188DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2188E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2188E0:
    ctx->downcount -= 1;
    // 7F2188E0: b       0x7F21890C
    {
            goto label_7F21890C;
    }

label_7F2188E4:
    ctx->downcount -= 9;
    // 7F2188E4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2188E8:
    // 7F2188E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2188EC:
    // 7F2188EC: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2188F0:
    // 7F2188F0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2188F4:
    ctx->pc = 0x7F2188F4u;
    // 7F2188F4: lwz     r12, -4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2188F8:
    // 7F2188F8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2188FC:
    ctx->pc = 0x7F2188FCu;
    // 7F2188FC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F218900:
    ctx->pc = 0x7F218900u;
    // 7F218900: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F218904u;
            ctx->pc = target;
            return;
        }
    }

label_7F218904:
    ctx->downcount -= 2;
    // 7F218904: cmpwi   r3, 0
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

label_7F218908:
    // 7F218908: bc    12, 2, 0x7F218898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218898u;
                return;
            }
            goto label_7F218898;
        }
    }

label_7F21890C:
    ctx->pc = 0x7F21890Cu;
    ctx->downcount -= 244;
    // 7F21890C: lwz     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218910:
    ctx->pc = 0x7F218910u;
    // 7F218910: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F218914:
    ctx->pc = 0x7F218914u;
    // 7F218914: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F218918:
    ctx->pc = 0x7F218918u;
    // 7F218918: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F21891C:
    ctx->pc = 0x7F21891Cu;
    // 7F21891C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F218920:
    ctx->pc = 0x7F218920u;
    // 7F218920: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F218924:
    ctx->pc = 0x7F218924u;
    // 7F218924: stw     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218928:
    ctx->pc = 0x7F218928u;
    // 7F218928: lfd     f8, 16416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F218928u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16416);
        ctx->fpr[8] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21892C:
    ctx->pc = 0x7F21892Cu;
    // 7F21892C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21892Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F218930:
    ctx->pc = 0x7F218930u;
    // 7F218930: lfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F218930u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F218934:
    ctx->pc = 0x7F218934u;
    // 7F218934: lfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218934u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F218938:
    ctx->pc = 0x7F218938u;
    // 7F218938: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218938u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F21893C:
    ctx->pc = 0x7F21893Cu;
    // 7F21893C: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21893Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F218940:
    ctx->pc = 0x7F218940u;
    // 7F218940: lfs     f0, 16440(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F218940u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F218944:
    ctx->pc = 0x7F218944u;
    // 7F218944: lfs     f7, 16436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218944u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F218948:
    ctx->pc = 0x7F218948u;
    // 7F218948: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21894C:
    ctx->pc = 0x7F21894Cu;
    // 7F21894C: lfs     f1, 108(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21894Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F218950:
    ctx->pc = 0x7F218950u;
    // 7F218950: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218954:
    ctx->pc = 0x7F218954u;
    // 7F218954: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218954u)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F218958:
    ctx->pc = 0x7F218958u;
    // 7F218958: stw     r7, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F21895C:
    ctx->pc = 0x7F21895Cu;
    // 7F21895C: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21895Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F218960:
    ctx->pc = 0x7F218960u;
    // 7F218960: lfs     f1, 112(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F218960u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F218964:
    ctx->pc = 0x7F218964u;
    // 7F218964: stw     r7, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218968:
    ctx->pc = 0x7F218968u;
    // 7F218968: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218968u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F21896C:
    ctx->pc = 0x7F21896Cu;
    // 7F21896C: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21896Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F218970:
    ctx->pc = 0x7F218970u;
    // 7F218970: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F218974:
    ctx->pc = 0x7F218974u;
    // 7F218974: lwz     r6, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218978:
    ctx->pc = 0x7F218978u;
    // 7F218978: lha     r5, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21897C:
    ctx->pc = 0x7F21897Cu;
    // 7F21897C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218980:
    ctx->pc = 0x7F218980u;
    // 7F218980: divw   r8, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F218984:
    ctx->pc = 0x7F218984u;
    // 7F218984: lwz     r9, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F218988:
    ctx->pc = 0x7F218988u;
    // 7F218988: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21898C:
    ctx->pc = 0x7F21898Cu;
    // 7F21898C: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218990:
    ctx->pc = 0x7F218990u;
    // 7F218990: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218994:
    ctx->pc = 0x7F218994u;
    // 7F218994: xoris   r3, r9, 0x8000
    ctx->gpr[3] = ctx->gpr[9] ^ (0x8000u << 16);

label_7F218998:
    ctx->pc = 0x7F218998u;
    // 7F218998: mullw   r5, r8, r5
    {
        s64 product = (s64)(s32)ctx->gpr[8] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[5] = (u32)product;
    }

label_7F21899C:
    ctx->pc = 0x7F21899Cu;
    // 7F21899C: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2189A0:
    ctx->pc = 0x7F2189A0u;
    // 7F2189A0: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2189A4:
    ctx->pc = 0x7F2189A4u;
    // 7F2189A4: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2189A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2189A8:
    ctx->pc = 0x7F2189A8u;
    // 7F2189A8: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2189A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2189AC:
    ctx->pc = 0x7F2189ACu;
    // 7F2189AC: lwz     r10, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2189B0:
    ctx->pc = 0x7F2189B0u;
    // 7F2189B0: subf   r0, r5, r6
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2189B4:
    ctx->pc = 0x7F2189B4u;
    // 7F2189B4: lha     r11, 78(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(78);
        ctx->gpr[11] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2189B8:
    ctx->pc = 0x7F2189B8u;
    // 7F2189B8: mullw   r4, r9, r0
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_7F2189BC:
    ctx->pc = 0x7F2189BCu;
    // 7F2189BC: lha     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2189C0:
    ctx->pc = 0x7F2189C0u;
    // 7F2189C0: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2189C4:
    ctx->pc = 0x7F2189C4u;
    // 7F2189C4: xoris   r6, r11, 0x8000
    ctx->gpr[6] = ctx->gpr[11] ^ (0x8000u << 16);

label_7F2189C8:
    ctx->pc = 0x7F2189C8u;
    // 7F2189C8: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2189CC:
    ctx->pc = 0x7F2189CCu;
    // 7F2189CC: fsubs   f2, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F2189CCu)) return;
    ppc_fsubs(ctx, 2, 1, 8);

label_7F2189D0:
    ctx->pc = 0x7F2189D0u;
    // 7F2189D0: mullw   r0, r10, r8
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[0] = (u32)product;
    }

label_7F2189D4:
    ctx->pc = 0x7F2189D4u;
    // 7F2189D4: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2189D8:
    ctx->pc = 0x7F2189D8u;
    // 7F2189D8: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2189DC:
    ctx->pc = 0x7F2189DCu;
    // 7F2189DC: fsubs   f0, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F2189DCu)) return;
    ppc_fsubs(ctx, 0, 0, 8);

label_7F2189E0:
    ctx->pc = 0x7F2189E0u;
    // 7F2189E0: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2189E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2189E4:
    ctx->pc = 0x7F2189E4u;
    // 7F2189E4: stw     r7, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2189E8:
    ctx->pc = 0x7F2189E8u;
    // 7F2189E8: fsubs   f4, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F2189E8u)) return;
    ppc_fsubs(ctx, 4, 1, 8);

label_7F2189EC:
    ctx->pc = 0x7F2189ECu;
    // 7F2189EC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2189F0:
    ctx->pc = 0x7F2189F0u;
    // 7F2189F0: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2189F4:
    ctx->pc = 0x7F2189F4u;
    // 7F2189F4: lfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2189F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2189F8:
    ctx->pc = 0x7F2189F8u;
    // 7F2189F8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2189FC:
    ctx->pc = 0x7F2189FCu;
    // 7F2189FC: fadds   f9, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2189FCu)) return;
    ppc_fadds(ctx, 9, 0, 4);

label_7F218A00:
    ctx->pc = 0x7F218A00u;
    // 7F218A00: fsubs   f0, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A00u)) return;
    ppc_fsubs(ctx, 0, 1, 8);

label_7F218A04:
    ctx->pc = 0x7F218A04u;
    // 7F218A04: lfd     f3, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218A04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218A08:
    ctx->pc = 0x7F218A08u;
    // 7F218A08: stw     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F218A0C:
    ctx->pc = 0x7F218A0Cu;
    // 7F218A0C: fsubs   f1, f3, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A0Cu)) return;
    ppc_fsubs(ctx, 1, 3, 8);

label_7F218A10:
    ctx->pc = 0x7F218A10u;
    // 7F218A10: stw     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218A14:
    ctx->pc = 0x7F218A14u;
    // 7F218A14: fadds   f0, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x7F218A14u)) return;
    ppc_fadds(ctx, 0, 0, 9);

label_7F218A18:
    ctx->pc = 0x7F218A18u;
    // 7F218A18: fadds   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218A18u)) return;
    ppc_fadds(ctx, 5, 2, 1);

label_7F218A1C:
    ctx->pc = 0x7F218A1Cu;
    // 7F218A1C: lfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218A20:
    ctx->pc = 0x7F218A20u;
    // 7F218A20: stw     r5, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218A24:
    ctx->pc = 0x7F218A24u;
    // 7F218A24: fsubs   f2, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A24u)) return;
    ppc_fsubs(ctx, 2, 1, 8);

label_7F218A28:
    ctx->pc = 0x7F218A28u;
    // 7F218A28: fadds   f3, f7, f5
    if (!ppc_fp_available_inline(ctx, 0x7F218A28u)) return;
    ppc_fadds(ctx, 3, 7, 5);

label_7F218A2C:
    ctx->pc = 0x7F218A2Cu;
    // 7F218A2C: stw     r7, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218A30:
    ctx->pc = 0x7F218A30u;
    // 7F218A30: fsubs   f1, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F218A30u)) return;
    ppc_fsubs(ctx, 1, 0, 7);

label_7F218A34:
    ctx->pc = 0x7F218A34u;
    // 7F218A34: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218A38:
    ctx->pc = 0x7F218A38u;
    // 7F218A38: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218A38u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F218A3C:
    ctx->pc = 0x7F218A3Cu;
    // 7F218A3C: fsubs   f0, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 8);

label_7F218A40:
    ctx->pc = 0x7F218A40u;
    // 7F218A40: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218A40u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F218A44:
    ctx->pc = 0x7F218A44u;
    // 7F218A44: xoris   r0, r10, 0x8000
    ctx->gpr[0] = ctx->gpr[10] ^ (0x8000u << 16);

label_7F218A48:
    ctx->pc = 0x7F218A48u;
    // 7F218A48: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F218A4C:
    ctx->pc = 0x7F218A4Cu;
    // 7F218A4C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218A50:
    ctx->pc = 0x7F218A50u;
    // 7F218A50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F218A54:
    ctx->pc = 0x7F218A54u;
    // 7F218A54: lfs     f6, 16444(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218A54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F218A58:
    ctx->pc = 0x7F218A58u;
    // 7F218A58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F218A5C:
    ctx->pc = 0x7F218A5Cu;
    // 7F218A5C: stw     r7, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218A60:
    ctx->pc = 0x7F218A60u;
    // 7F218A60: fmuls   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218A60u)) return;
    ppc_fmuls(ctx, 2, 6, 2);

label_7F218A64:
    ctx->pc = 0x7F218A64u;
    // 7F218A64: lwzu     r0, -5736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5736);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F218A68:
    ctx->pc = 0x7F218A68u;
    // 7F218A68: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218A6C:
    ctx->pc = 0x7F218A6Cu;
    // 7F218A6C: fmuls   f1, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218A6Cu)) return;
    ppc_fmuls(ctx, 1, 6, 1);

label_7F218A70:
    ctx->pc = 0x7F218A70u;
    // 7F218A70: stw     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218A74:
    ctx->pc = 0x7F218A74u;
    // 7F218A74: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F218A78:
    ctx->pc = 0x7F218A78u;
    // 7F218A78: fctiwz    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218A78u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F218A7C:
    ctx->pc = 0x7F218A7Cu;
    // 7F218A7C: stw     r7, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218A80:
    ctx->pc = 0x7F218A80u;
    // 7F218A80: fctiwz    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F218A80u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F218A84:
    ctx->pc = 0x7F218A84u;
    // 7F218A84: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218A88:
    ctx->pc = 0x7F218A88u;
    // 7F218A88: fsubs   f0, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A88u)) return;
    ppc_fsubs(ctx, 0, 0, 8);

label_7F218A8C:
    ctx->pc = 0x7F218A8Cu;
    // 7F218A8C: lfd     f4, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218A90:
    ctx->pc = 0x7F218A90u;
    // 7F218A90: stw     r6, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F218A94:
    ctx->pc = 0x7F218A94u;
    // 7F218A94: fsubs   f4, f4, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218A94u)) return;
    ppc_fsubs(ctx, 4, 4, 8);

label_7F218A98:
    ctx->pc = 0x7F218A98u;
    // 7F218A98: fadds   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F218A98u)) return;
    ppc_fadds(ctx, 1, 0, 5);

label_7F218A9C:
    ctx->pc = 0x7F218A9Cu;
    // 7F218A9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F218AA0:
    ctx->pc = 0x7F218AA0u;
    // 7F218AA0: stw     r7, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218AA4:
    ctx->pc = 0x7F218AA4u;
    // 7F218AA4: fadds   f5, f7, f9
    if (!ppc_fp_available_inline(ctx, 0x7F218AA4u)) return;
    ppc_fadds(ctx, 5, 7, 9);

label_7F218AA8:
    ctx->pc = 0x7F218AA8u;
    // 7F218AA8: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F218AAC:
    ctx->pc = 0x7F218AACu;
    // 7F218AAC: lfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218AB0:
    ctx->pc = 0x7F218AB0u;
    // 7F218AB0: fsubs   f1, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x7F218AB0u)) return;
    ppc_fsubs(ctx, 1, 1, 7);

label_7F218AB4:
    ctx->pc = 0x7F218AB4u;
    // 7F218AB4: stfd     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F218AB8:
    ctx->pc = 0x7F218AB8u;
    // 7F218AB8: fsubs   f0, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F218AB8u)) return;
    ppc_fsubs(ctx, 0, 0, 8);

label_7F218ABC:
    ctx->pc = 0x7F218ABCu;
    // 7F218ABC: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F218AC0:
    ctx->pc = 0x7F218AC0u;
    // 7F218AC0: fdivs   f4, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F218AC0u)) return;
    ppc_fdivs(ctx, 4, 5, 4);

label_7F218AC4:
    ctx->pc = 0x7F218AC4u;
    // 7F218AC4: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F218AC8:
    ctx->pc = 0x7F218AC8u;
    // 7F218AC8: or.   r0, r3, r0
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

label_7F218ACC:
    ctx->pc = 0x7F218ACCu;
    // 7F218ACC: stfd     f3, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218ACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F218AD0:
    ctx->pc = 0x7F218AD0u;
    // 7F218AD0: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218AD4:
    ctx->pc = 0x7F218AD4u;
    // 7F218AD4: lwz     r3, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218AD8:
    ctx->pc = 0x7F218AD8u;
    // 7F218AD8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218AD8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F218ADC:
    ctx->pc = 0x7F218ADCu;
    // 7F218ADC: sth     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F218AE0:
    ctx->pc = 0x7F218AE0u;
    // 7F218AE0: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F218AE4:
    ctx->pc = 0x7F218AE4u;
    // 7F218AE4: fmuls   f2, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x7F218AE4u)) return;
    ppc_fmuls(ctx, 2, 6, 4);

label_7F218AE8:
    ctx->pc = 0x7F218AE8u;
    // 7F218AE8: fmuls   f0, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218AE8u)) return;
    ppc_fmuls(ctx, 0, 6, 0);

label_7F218AEC:
    ctx->pc = 0x7F218AECu;
    // 7F218AEC: fctiwz    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F218AECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F218AF0:
    ctx->pc = 0x7F218AF0u;
    // 7F218AF0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F218AF0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F218AF4:
    ctx->pc = 0x7F218AF4u;
    // 7F218AF4: stfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F218AF8:
    ctx->pc = 0x7F218AF8u;
    // 7F218AF8: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F218AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F218AFC:
    ctx->pc = 0x7F218AFCu;
    // 7F218AFC: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218B00:
    ctx->pc = 0x7F218B00u;
    // 7F218B00: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B04:
    ctx->pc = 0x7F218B04u;
    // 7F218B04: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F218B08:
    ctx->pc = 0x7F218B08u;
    // 7F218B08: sth     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F218B0C:
    ctx->pc = 0x7F218B0Cu;
    // 7F218B0C: bc    12, 2, 0x7F218B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218B30;
        }
    }

label_7F218B10:
    ctx->pc = 0x7F218B10u;
    ctx->downcount -= 3;
    // 7F218B10: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B14:
    ctx->pc = 0x7F218B14u;
    // 7F218B14: rlwinm. r0, r0, 0, 29, 29
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

label_7F218B18:
    ctx->pc = 0x7F218B18u;
    // 7F218B18: bc    12, 2, 0x7F218B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218B30;
        }
    }

label_7F218B1C:
    ctx->pc = 0x7F218B1Cu;
    ctx->downcount -= 5;
    // 7F218B1C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218B20:
    ctx->pc = 0x7F218B20u;
    // 7F218B20: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B24:
    ctx->pc = 0x7F218B24u;
    // 7F218B24: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F218B28:
    ctx->pc = 0x7F218B28u;
    // 7F218B28: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218B2C:
    ctx->pc = 0x7F218B2Cu;
    // 7F218B2C: b       0x7F218B40
    {
            goto label_7F218B40;
    }

label_7F218B30:
    ctx->pc = 0x7F218B30u;
    ctx->downcount -= 4;
    // 7F218B30: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218B34:
    ctx->pc = 0x7F218B34u;
    // 7F218B34: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B38:
    ctx->pc = 0x7F218B38u;
    // 7F218B38: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F218B3C:
    ctx->pc = 0x7F218B3Cu;
    // 7F218B3C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218B40:
    ctx->pc = 0x7F218B40u;
    ctx->downcount -= 3;
    // 7F218B40: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B44:
    ctx->pc = 0x7F218B44u;
    // 7F218B44: cmplwi  r0, 0x0000
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

label_7F218B48:
    ctx->pc = 0x7F218B48u;
    // 7F218B48: bc    12, 2, 0x7F218BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218BC8;
        }
    }

label_7F218B4C:
    ctx->pc = 0x7F218B4Cu;
    ctx->downcount -= 3;
    // 7F218B4C: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B50:
    ctx->pc = 0x7F218B50u;
    // 7F218B50: rlwinm. r0, r0, 0, 28, 28
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

label_7F218B54:
    ctx->pc = 0x7F218B54u;
    // 7F218B54: bc    12, 2, 0x7F218B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218B90;
        }
    }

label_7F218B58:
    ctx->pc = 0x7F218B58u;
    ctx->downcount -= 13;
    // 7F218B58: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218B5C:
    ctx->pc = 0x7F218B5Cu;
    // 7F218B5C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F218B60:
    ctx->pc = 0x7F218B60u;
    // 7F218B60: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B64:
    ctx->pc = 0x7F218B64u;
    // 7F218B64: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F218B68:
    ctx->pc = 0x7F218B68u;
    // 7F218B68: stw     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218B6C:
    ctx->pc = 0x7F218B6Cu;
    // 7F218B6C: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218B70:
    ctx->pc = 0x7F218B70u;
    // 7F218B70: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218B74:
    ctx->pc = 0x7F218B74u;
    // 7F218B74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B78:
    ctx->pc = 0x7F218B78u;
    // 7F218B78: stw     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218B7C:
    ctx->pc = 0x7F218B7Cu;
    // 7F218B7C: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218B80:
    ctx->pc = 0x7F218B80u;
    // 7F218B80: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218B84:
    ctx->pc = 0x7F218B84u;
    // 7F218B84: addi    r4, r4, 48
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(48);

label_7F218B88:
    ctx->pc = 0x7F218B88u;
    // 7F218B88: bl      0x80025FD8
    {
            ctx->lr = 0x7F218B8Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F218B8C:
    ctx->pc = 0x7F218B8Cu;
    ctx->downcount -= 1;
    // 7F218B8C: b       0x7F218BC8
    {
            goto label_7F218BC8;
    }

label_7F218B90:
    ctx->pc = 0x7F218B90u;
    ctx->downcount -= 10;
    // 7F218B90: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218B94:
    ctx->pc = 0x7F218B94u;
    // 7F218B94: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218B98:
    ctx->pc = 0x7F218B98u;
    // 7F218B98: stw     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218B9C:
    ctx->pc = 0x7F218B9Cu;
    // 7F218B9C: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218BA0:
    ctx->pc = 0x7F218BA0u;
    // 7F218BA0: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218BA4:
    ctx->pc = 0x7F218BA4u;
    // 7F218BA4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218BA8:
    ctx->pc = 0x7F218BA8u;
    // 7F218BA8: stw     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218BAC:
    ctx->pc = 0x7F218BACu;
    // 7F218BAC: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218BB0:
    ctx->pc = 0x7F218BB0u;
    // 7F218BB0: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218BB4:
    ctx->pc = 0x7F218BB4u;
    // 7F218BB4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F218BB8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F218BB8:
    ctx->pc = 0x7F218BB8u;
    ctx->downcount -= 4;
    // 7F218BB8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F218BBC:
    ctx->pc = 0x7F218BBCu;
    // 7F218BBC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F218BC0:
    ctx->pc = 0x7F218BC0u;
    // 7F218BC0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F218BC4:
    ctx->pc = 0x7F218BC4u;
    // 7F218BC4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F218BC8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F218BC8:
    ctx->pc = 0x7F218BC8u;
    ctx->downcount -= 3;
    // 7F218BC8: lwz     r4, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218BCC:
    ctx->pc = 0x7F218BCCu;
    // 7F218BCC: cmplwi  r4, 0x0000
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

label_7F218BD0:
    ctx->pc = 0x7F218BD0u;
    // 7F218BD0: bc    12, 2, 0x7F218BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218BF4;
        }
    }

label_7F218BD4:
    ctx->pc = 0x7F218BD4u;
    ctx->downcount -= 8;
    // 7F218BD4: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218BD8:
    ctx->pc = 0x7F218BD8u;
    // 7F218BD8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218BDC:
    ctx->pc = 0x7F218BDCu;
    // 7F218BDC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218BE0:
    ctx->pc = 0x7F218BE0u;
    // 7F218BE0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218BE4:
    ctx->pc = 0x7F218BE4u;
    // 7F218BE4: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218BE8:
    ctx->pc = 0x7F218BE8u;
    // 7F218BE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218BEC:
    ctx->pc = 0x7F218BECu;
    // 7F218BEC: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218BF0:
    ctx->pc = 0x7F218BF0u;
    // 7F218BF0: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218BF4:
    ctx->pc = 0x7F218BF4u;
    ctx->downcount -= 40;
    // 7F218BF4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218BF8:
    ctx->pc = 0x7F218BF8u;
    // 7F218BF8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F218BFC:
    ctx->pc = 0x7F218BFCu;
    // 7F218BFC: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C00:
    ctx->pc = 0x7F218C00u;
    // 7F218C00: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C04:
    ctx->pc = 0x7F218C04u;
    // 7F218C04: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218C08:
    ctx->pc = 0x7F218C08u;
    // 7F218C08: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218C0C:
    ctx->pc = 0x7F218C0Cu;
    // 7F218C0C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C10:
    ctx->pc = 0x7F218C10u;
    // 7F218C10: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F218C14:
    ctx->pc = 0x7F218C14u;
    // 7F218C14: lwz     r5, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218C18:
    ctx->pc = 0x7F218C18u;
    // 7F218C18: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218C1C:
    ctx->pc = 0x7F218C1Cu;
    // 7F218C1C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218C20:
    ctx->pc = 0x7F218C20u;
    // 7F218C20: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C24:
    ctx->pc = 0x7F218C24u;
    // 7F218C24: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218C28:
    ctx->pc = 0x7F218C28u;
    // 7F218C28: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C2C:
    ctx->pc = 0x7F218C2Cu;
    // 7F218C2C: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218C30:
    ctx->pc = 0x7F218C30u;
    // 7F218C30: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C34:
    ctx->pc = 0x7F218C34u;
    // 7F218C34: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218C38:
    ctx->pc = 0x7F218C38u;
    // 7F218C38: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C3C:
    ctx->pc = 0x7F218C3Cu;
    // 7F218C3C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218C40:
    ctx->pc = 0x7F218C40u;
    // 7F218C40: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C44:
    ctx->pc = 0x7F218C44u;
    // 7F218C44: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218C48:
    ctx->pc = 0x7F218C48u;
    // 7F218C48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C4C:
    ctx->pc = 0x7F218C4Cu;
    // 7F218C4C: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218C50:
    ctx->pc = 0x7F218C50u;
    // 7F218C50: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C54:
    ctx->pc = 0x7F218C54u;
    // 7F218C54: lmw     r29, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F218C58:
    ctx->pc = 0x7F218C58u;
    // 7F218C58: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C5C:
    ctx->pc = 0x7F218C5Cu;
    // 7F218C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F218C60:
    ctx->pc = 0x7F218C60u;
    // 7F218C60: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F218C64:
    ctx->pc = 0x7F218C64u;
    // 7F218C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218C68:
    ctx->pc = 0x7F218C68u;
    ctx->downcount -= 7;
    // 7F218C68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218C6C:
    ctx->pc = 0x7F218C6Cu;
    // 7F218C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F218C70:
    ctx->pc = 0x7F218C70u;
    // 7F218C70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218C74:
    ctx->pc = 0x7F218C74u;
    // 7F218C74: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F218C78:
    ctx->pc = 0x7F218C78u;
    // 7F218C78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F218C7C:
    ctx->pc = 0x7F218C7Cu;
    // 7F218C7C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F218C80:
    ctx->pc = 0x7F218C80u;
    // 7F218C80: bl      0x7F01B234
    {
            ctx->lr = 0x7F218C84u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F218C84:
    ctx->pc = 0x7F218C84u;
    ctx->downcount -= 7;
    // 7F218C84: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218C88:
    ctx->pc = 0x7F218C88u;
    // 7F218C88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218C8C:
    ctx->pc = 0x7F218C8Cu;
    // 7F218C8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F218C90:
    ctx->pc = 0x7F218C90u;
    // 7F218C90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F218C94:
    ctx->pc = 0x7F218C94u;
    // 7F218C94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F218C98:
    ctx->pc = 0x7F218C98u;
    // 7F218C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218C9C:
    ctx->pc = 0x7F218C9Cu;
    ctx->downcount -= 6;
    // 7F218C9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218CA0:
    ctx->pc = 0x7F218CA0u;
    // 7F218CA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F218CA4:
    ctx->pc = 0x7F218CA4u;
    // 7F218CA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218CA8:
    ctx->pc = 0x7F218CA8u;
    // 7F218CA8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218CAC:
    ctx->pc = 0x7F218CACu;
    // 7F218CAC: cmplwi  r3, 0x0000
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

label_7F218CB0:
    ctx->pc = 0x7F218CB0u;
    // 7F218CB0: bc    12, 2, 0x7F218CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218CB8;
        }
    }

label_7F218CB4:
    ctx->pc = 0x7F218CB4u;
    ctx->downcount -= 1;
    // 7F218CB4: bl      0x7F3C2440
    {
            ctx->lr = 0x7F218CB8u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F218CB8:
    ctx->pc = 0x7F218CB8u;
    ctx->downcount -= 5;
    // 7F218CB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218CBC:
    ctx->pc = 0x7F218CBCu;
    // 7F218CBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F218CC0:
    ctx->pc = 0x7F218CC0u;
    // 7F218CC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F218CC4:
    ctx->pc = 0x7F218CC4u;
    // 7F218CC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218CC8:
    ctx->pc = 0x7F218CC8u;
    ctx->downcount -= 10;
    // 7F218CC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218CCC:
    ctx->pc = 0x7F218CCCu;
    // 7F218CCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F218CD0:
    ctx->pc = 0x7F218CD0u;
    // 7F218CD0: lwz     r8, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F218CD4:
    ctx->pc = 0x7F218CD4u;
    // 7F218CD4: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F218CD8:
    ctx->pc = 0x7F218CD8u;
    // 7F218CD8: lbz     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F218CDC:
    ctx->pc = 0x7F218CDCu;
    // 7F218CDC: addi    r9, r8, 3
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(3);

label_7F218CE0:
    ctx->pc = 0x7F218CE0u;
    // 7F218CE0: extsb. r0, r0
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

label_7F218CE4:
    ctx->pc = 0x7F218CE4u;
    // 7F218CE4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F218CE8:
    ctx->pc = 0x7F218CE8u;
    // 7F218CE8: bc    4, 1, 0x7F218D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218D18;
        }
    }

label_7F218CEC:
    loop_7F218CEC(ctx);
    if (ctx->pc == 0x7F218D18u) goto label_7F218D18;
    return;
label_7F218CF0:
    ctx->pc = 0x7F218CF0u;
    // 7F218CF0: lbz     r7, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F218CF4:
    // 7F218CF4: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_7F218CF8:
    // 7F218CF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F218CFC:
    // 7F218CFC: rlwinm r0, r0, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F218D00:
    // 7F218D00: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F218D04:
    // 7F218D04: add   r0, r0, r8
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F218D08:
    // 7F218D08: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F218D0C:
    ctx->pc = 0x7F218D0Cu;
    // 7F218D0C: stwx    r0, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218D10:
    // 7F218D10: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F218D14:
    // 7F218D14: bc    16, 0, 0x7F218CEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218CECu;
                return;
            }
            goto label_7F218CEC;
        }
    }

label_7F218D18:
    ctx->pc = 0x7F218D18u;
    ctx->downcount -= 13;
    // 7F218D18: lwz     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218D1C:
    ctx->pc = 0x7F218D1Cu;
    // 7F218D1C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F218D20:
    ctx->pc = 0x7F218D20u;
    // 7F218D20: lha     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D24:
    ctx->pc = 0x7F218D24u;
    // 7F218D24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218D28:
    ctx->pc = 0x7F218D28u;
    // 7F218D28: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218D2C:
    ctx->pc = 0x7F218D2Cu;
    // 7F218D2C: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218D30:
    ctx->pc = 0x7F218D30u;
    // 7F218D30: lha     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D34:
    ctx->pc = 0x7F218D34u;
    // 7F218D34: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F218D38:
    ctx->pc = 0x7F218D38u;
    // 7F218D38: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F218D3C:
    ctx->pc = 0x7F218D3Cu;
    // 7F218D3C: stw     r0, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218D40:
    ctx->pc = 0x7F218D40u;
    // 7F218D40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F218D44:
    ctx->pc = 0x7F218D44u;
    // 7F218D44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F218D48:
    ctx->pc = 0x7F218D48u;
    // 7F218D48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218D4C:
    ctx->pc = 0x7F218D4Cu;
    ctx->downcount -= 30;
    // 7F218D4C: stw     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218D50:
    ctx->pc = 0x7F218D50u;
    // 7F218D50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F218D54:
    ctx->pc = 0x7F218D54u;
    // 7F218D54: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F218D58:
    ctx->pc = 0x7F218D58u;
    // 7F218D58: lha     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D5C:
    ctx->pc = 0x7F218D5Cu;
    // 7F218D5C: sth     r8, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F218D60:
    ctx->pc = 0x7F218D60u;
    // 7F218D60: lha     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D64:
    ctx->pc = 0x7F218D64u;
    // 7F218D64: sth     r8, 82(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F218D68:
    ctx->pc = 0x7F218D68u;
    // 7F218D68: lha     r8, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D6C:
    ctx->pc = 0x7F218D6Cu;
    // 7F218D6C: sth     r8, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F218D70:
    ctx->pc = 0x7F218D70u;
    // 7F218D70: lha     r8, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D74:
    ctx->pc = 0x7F218D74u;
    // 7F218D74: sth     r8, 86(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(86);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F218D78:
    ctx->pc = 0x7F218D78u;
    // 7F218D78: lha     r8, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D7C:
    ctx->pc = 0x7F218D7Cu;
    // 7F218D7C: stw     r8, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F218D80:
    ctx->pc = 0x7F218D80u;
    // 7F218D80: sth     r5, 94(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(94);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F218D84:
    ctx->pc = 0x7F218D84u;
    // 7F218D84: lwz     r8, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F218D88:
    ctx->pc = 0x7F218D88u;
    // 7F218D88: stw     r5, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218D8C:
    ctx->pc = 0x7F218D8Cu;
    // 7F218D8C: lha     r4, 34(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218D90:
    ctx->pc = 0x7F218D90u;
    // 7F218D90: stw     r4, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218D94:
    ctx->pc = 0x7F218D94u;
    // 7F218D94: lwz     r5, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218D98:
    ctx->pc = 0x7F218D98u;
    // 7F218D98: lwz     r4, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218D9C:
    ctx->pc = 0x7F218D9Cu;
    // 7F218D9C: stw     r5, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218DA0:
    ctx->pc = 0x7F218DA0u;
    // 7F218DA0: stw     r4, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218DA4:
    ctx->pc = 0x7F218DA4u;
    // 7F218DA4: lwz     r5, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218DA8:
    ctx->pc = 0x7F218DA8u;
    // 7F218DA8: lwz     r4, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218DAC:
    ctx->pc = 0x7F218DACu;
    // 7F218DAC: stw     r5, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F218DB0:
    ctx->pc = 0x7F218DB0u;
    // 7F218DB0: stw     r4, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218DB4:
    ctx->pc = 0x7F218DB4u;
    // 7F218DB4: stb     r0, 123(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(123);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F218DB8:
    ctx->pc = 0x7F218DB8u;
    // 7F218DB8: stw     r7, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F218DBC:
    ctx->pc = 0x7F218DBCu;
    // 7F218DBC: stw     r6, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F218DC0:
    ctx->pc = 0x7F218DC0u;
    // 7F218DC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F218DC4:
    ctx->pc = 0x7F218DC4u;
    ctx->downcount -= 24;
    // 7F218DC4: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F218DC8:
    ctx->pc = 0x7F218DC8u;
    // 7F218DC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F218DCC:
    ctx->pc = 0x7F218DCCu;
    // 7F218DCC: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218DD0:
    ctx->pc = 0x7F218DD0u;
    // 7F218DD0: stmw     r25, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F218DD4:
    ctx->pc = 0x7F218DD4u;
    // 7F218DD4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F218DD8:
    ctx->pc = 0x7F218DD8u;
    // 7F218DD8: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F218DDC:
    ctx->pc = 0x7F218DDCu;
    // 7F218DDC: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F218DE0:
    ctx->pc = 0x7F218DE0u;
    // 7F218DE0: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F218DE4:
    ctx->pc = 0x7F218DE4u;
    // 7F218DE4: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F218DE8:
    ctx->pc = 0x7F218DE8u;
    // 7F218DE8: or   r27, r8, r8
    {
        ctx->gpr[27] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F218DEC:
    ctx->pc = 0x7F218DECu;
    // 7F218DEC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F218DF0:
    ctx->pc = 0x7F218DF0u;
    // 7F218DF0: lha     r0, 86(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(86);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218DF4:
    ctx->pc = 0x7F218DF4u;
    // 7F218DF4: rlwinm. r0, r0, 0, 27, 27
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

label_7F218DF8:
    ctx->pc = 0x7F218DF8u;
    // 7F218DF8: bc    12, 2, 0x7F218E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218E00;
        }
    }

label_7F218DFC:
    ctx->pc = 0x7F218DFCu;
    ctx->downcount -= 1;
    // 7F218DFC: oris    r3, r3, 0x0004
    ctx->gpr[3] = ctx->gpr[3] | (0x0004u << 16);

label_7F218E00:
    ctx->pc = 0x7F218E00u;
    ctx->downcount -= 4;
    // 7F218E00: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F218E04:
    ctx->pc = 0x7F218E04u;
    // 7F218E04: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F218E08:
    ctx->pc = 0x7F218E08u;
    // 7F218E08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F218E0C:
    ctx->pc = 0x7F218E0Cu;
    // 7F218E0C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F218E10u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F218E10:
    ctx->pc = 0x7F218E10u;
    ctx->downcount -= 3;
    // 7F218E10: or.   r30, r3, r3
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

label_7F218E14:
    ctx->pc = 0x7F218E14u;
    // 7F218E14: stw     r30, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F218E18:
    ctx->pc = 0x7F218E18u;
    // 7F218E18: bc    4, 2, 0x7F218E24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218E24;
        }
    }

label_7F218E1C:
    ctx->pc = 0x7F218E1Cu;
    ctx->downcount -= 2;
    // 7F218E1C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F218E20:
    ctx->pc = 0x7F218E20u;
    // 7F218E20: b       0x7F219184
    {
            goto label_7F219184;
    }

label_7F218E24:
    ctx->pc = 0x7F218E24u;
    ctx->downcount -= 2;
    // 7F218E24: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218E28:
    ctx->pc = 0x7F218E28u;
    // 7F218E28: bl      0x7F3B6420
    {
            ctx->lr = 0x7F218E2Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F218E2C:
    ctx->pc = 0x7F218E2Cu;
    ctx->downcount -= 3;
    // 7F218E2C: or.   r31, r3, r3
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

label_7F218E30:
    ctx->pc = 0x7F218E30u;
    // 7F218E30: stw     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218E34:
    ctx->pc = 0x7F218E34u;
    // 7F218E34: bc    4, 2, 0x7F218E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218E40;
        }
    }

label_7F218E38:
    ctx->pc = 0x7F218E38u;
    ctx->downcount -= 2;
    // 7F218E38: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F218E3C:
    ctx->pc = 0x7F218E3Cu;
    // 7F218E3C: b       0x7F219184
    {
            goto label_7F219184;
    }

label_7F218E40:
    ctx->pc = 0x7F218E40u;
    ctx->downcount -= 3;
    // 7F218E40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F218E44:
    ctx->pc = 0x7F218E44u;
    // 7F218E44: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218E48:
    ctx->pc = 0x7F218E48u;
    // 7F218E48: bl      0x7F3C2534
    {
            ctx->lr = 0x7F218E4Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F218E4C:
    ctx->pc = 0x7F218E4Cu;
    ctx->downcount -= 8;
    // 7F218E4C: lha     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218E50:
    ctx->pc = 0x7F218E50u;
    // 7F218E50: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F218E54:
    ctx->pc = 0x7F218E54u;
    // 7F218E54: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F218E58:
    ctx->pc = 0x7F218E58u;
    // 7F218E58: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F218E5C:
    ctx->pc = 0x7F218E5Cu;
    // 7F218E5C: stw     r0, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218E60:
    ctx->pc = 0x7F218E60u;
    // 7F218E60: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F218E64:
    ctx->pc = 0x7F218E64u;
    // 7F218E64: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F218E68:
    ctx->pc = 0x7F218E68u;
    // 7F218E68: bl      0x7F218D4C
    {
            ctx->lr = 0x7F218E6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218D4Cu;
                return;
            }
            goto label_7F218D4C;
    }

label_7F218E6C:
    ctx->pc = 0x7F218E6Cu;
    ctx->downcount -= 4;
    // 7F218E6C: lha     r0, 86(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(86);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218E70:
    ctx->pc = 0x7F218E70u;
    // 7F218E70: rlwinm r0, r0, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Fu;
    }

label_7F218E74:
    ctx->pc = 0x7F218E74u;
    // 7F218E74: cmpwi   r0, 1
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

label_7F218E78:
    ctx->pc = 0x7F218E78u;
    // 7F218E78: bc    12, 2, 0x7F218EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F218EAC;
        }
    }

label_7F218E7C:
    ctx->pc = 0x7F218E7Cu;
    ctx->downcount -= 1;
    // 7F218E7C: bc    4, 0, 0x7F218E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218E8C;
        }
    }

label_7F218E80:
    ctx->pc = 0x7F218E80u;
    ctx->downcount -= 2;
    // 7F218E80: cmpwi   r0, 0
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

label_7F218E84:
    ctx->pc = 0x7F218E84u;
    // 7F218E84: bc    4, 0, 0x7F218E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218E98;
        }
    }

label_7F218E88:
    ctx->pc = 0x7F218E88u;
    ctx->downcount -= 1;
    // 7F218E88: b       0x7F218ED0
    {
            goto label_7F218ED0;
    }

label_7F218E8C:
    ctx->pc = 0x7F218E8Cu;
    ctx->downcount -= 2;
    // 7F218E8C: cmpwi   r0, 3
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

label_7F218E90:
    ctx->pc = 0x7F218E90u;
    // 7F218E90: bc    4, 0, 0x7F218ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F218ED0;
        }
    }

label_7F218E94:
    ctx->pc = 0x7F218E94u;
    ctx->downcount -= 1;
    // 7F218E94: b       0x7F218EC0
    {
            goto label_7F218EC0;
    }

label_7F218E98:
    ctx->pc = 0x7F218E98u;
    ctx->downcount -= 5;
    // 7F218E98: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_7F218E9C:
    ctx->pc = 0x7F218E9Cu;
    // 7F218E9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F218EA0:
    ctx->pc = 0x7F218EA0u;
    // 7F218EA0: stw     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218EA4:
    ctx->pc = 0x7F218EA4u;
    // 7F218EA4: stw     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218EA8:
    ctx->pc = 0x7F218EA8u;
    // 7F218EA8: b       0x7F218ED0
    {
            goto label_7F218ED0;
    }

label_7F218EAC:
    ctx->pc = 0x7F218EACu;
    ctx->downcount -= 5;
    // 7F218EAC: li      r3, 66
    ctx->gpr[3] = (u32)(s32)(66);

label_7F218EB0:
    ctx->pc = 0x7F218EB0u;
    // 7F218EB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F218EB4:
    ctx->pc = 0x7F218EB4u;
    // 7F218EB4: stw     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218EB8:
    ctx->pc = 0x7F218EB8u;
    // 7F218EB8: stw     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218EBC:
    ctx->pc = 0x7F218EBCu;
    // 7F218EBC: b       0x7F218ED0
    {
            goto label_7F218ED0;
    }

label_7F218EC0:
    ctx->pc = 0x7F218EC0u;
    ctx->downcount -= 4;
    // 7F218EC0: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_7F218EC4:
    ctx->pc = 0x7F218EC4u;
    // 7F218EC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F218EC8:
    ctx->pc = 0x7F218EC8u;
    // 7F218EC8: stw     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218ECC:
    ctx->pc = 0x7F218ECCu;
    // 7F218ECC: stw     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218ED0:
    ctx->pc = 0x7F218ED0u;
    ctx->downcount -= 6;
    // 7F218ED0: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F218ED4:
    ctx->pc = 0x7F218ED4u;
    // 7F218ED4: addi    r3, r28, 68
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(68);

label_7F218ED8:
    ctx->pc = 0x7F218ED8u;
    // 7F218ED8: addi    r4, r28, 72
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(72);

label_7F218EDC:
    ctx->pc = 0x7F218EDCu;
    // 7F218EDC: addi    r5, r28, 60
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(60);

label_7F218EE0:
    ctx->pc = 0x7F218EE0u;
    // 7F218EE0: addi    r6, r28, 64
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(64);

label_7F218EE4:
    ctx->pc = 0x7F218EE4u;
    // 7F218EE4: bl      0x7F3B69F4
    {
            ctx->lr = 0x7F218EE8u;
            ctx->pc = 0x7F3B69F4u;
            return;
    }

label_7F218EE8:
    ctx->pc = 0x7F218EE8u;
    ctx->downcount -= 347;
    // 7F218EE8: lwz     r5, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218EEC:
    ctx->pc = 0x7F218EECu;
    // 7F218EEC: lis     r10, 17200
    ctx->gpr[10] = ((u32)(s32)(17200) << 16);

label_7F218EF0:
    ctx->pc = 0x7F218EF0u;
    // 7F218EF0: lha     r0, 82(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(82);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218EF4:
    ctx->pc = 0x7F218EF4u;
    // 7F218EF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F218EF8:
    ctx->pc = 0x7F218EF8u;
    // 7F218EF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F218EFC:
    ctx->pc = 0x7F218EFCu;
    // 7F218EFC: lfd     f7, 16416(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F218EFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16416);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F218F00:
    ctx->pc = 0x7F218F00u;
    // 7F218F00: divw   r0, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F218F04:
    ctx->pc = 0x7F218F04u;
    // 7F218F04: lfs     f8, 16436(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F218F04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F218F08:
    ctx->pc = 0x7F218F08u;
    // 7F218F08: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F218F0C:
    ctx->pc = 0x7F218F0Cu;
    // 7F218F0C: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F218F10:
    ctx->pc = 0x7F218F10u;
    // 7F218F10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F218F14:
    ctx->pc = 0x7F218F14u;
    // 7F218F14: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F218F18:
    ctx->pc = 0x7F218F18u;
    // 7F218F18: stw     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F218F1C:
    ctx->pc = 0x7F218F1Cu;
    // 7F218F1C: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F218F20:
    ctx->pc = 0x7F218F20u;
    // 7F218F20: lha     r4, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218F24:
    ctx->pc = 0x7F218F24u;
    // 7F218F24: lha     r3, 82(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(82);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218F28:
    ctx->pc = 0x7F218F28u;
    // 7F218F28: lwz     r7, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F218F2C:
    ctx->pc = 0x7F218F2Cu;
    // 7F218F2C: divw   r3, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F218F30:
    ctx->pc = 0x7F218F30u;
    // 7F218F30: divw   r3, r7, r3
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F218F34:
    ctx->pc = 0x7F218F34u;
    // 7F218F34: stw     r3, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218F38:
    ctx->pc = 0x7F218F38u;
    // 7F218F38: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218F3C:
    ctx->pc = 0x7F218F3Cu;
    // 7F218F3C: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218F40:
    ctx->pc = 0x7F218F40u;
    // 7F218F40: rlwinm r3, r3, 6, 0, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFFFu;
    }

label_7F218F44:
    ctx->pc = 0x7F218F44u;
    // 7F218F44: rlwimi r3, r4, 6, 0, 25
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 6u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0xFFFFFFC0u) | (rot & 0xFFFFFFC0u);
    }

label_7F218F48:
    ctx->pc = 0x7F218F48u;
    // 7F218F48: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F218F4C:
    ctx->pc = 0x7F218F4Cu;
    // 7F218F4C: slw   r3, r6, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_7F218F50:
    ctx->pc = 0x7F218F50u;
    // 7F218F50: sth     r3, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F218F54:
    ctx->pc = 0x7F218F54u;
    // 7F218F54: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218F58:
    ctx->pc = 0x7F218F58u;
    // 7F218F58: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218F5C:
    ctx->pc = 0x7F218F5Cu;
    // 7F218F5C: rlwinm r3, r3, 2, 0, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFFu;
    }

label_7F218F60:
    ctx->pc = 0x7F218F60u;
    // 7F218F60: rlwimi r3, r4, 2, 0, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 2u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0xFFFFFFFCu) | (rot & 0xFFFFFFFCu);
    }

label_7F218F64:
    ctx->pc = 0x7F218F64u;
    // 7F218F64: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F218F68:
    ctx->pc = 0x7F218F68u;
    // 7F218F68: slw   r3, r6, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_7F218F6C:
    ctx->pc = 0x7F218F6Cu;
    // 7F218F6C: sth     r3, 78(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(78);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F218F70:
    ctx->pc = 0x7F218F70u;
    // 7F218F70: lwz     r5, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218F74:
    ctx->pc = 0x7F218F74u;
    // 7F218F74: lwz     r6, 184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218F78:
    ctx->pc = 0x7F218F78u;
    // 7F218F78: lwz     r7, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F218F7C:
    ctx->pc = 0x7F218F7Cu;
    // 7F218F7C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218F80:
    ctx->pc = 0x7F218F80u;
    // 7F218F80: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218F84:
    ctx->pc = 0x7F218F84u;
    // 7F218F84: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218F88:
    ctx->pc = 0x7F218F88u;
    // 7F218F88: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218F8C:
    ctx->pc = 0x7F218F8Cu;
    // 7F218F8C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218F90:
    ctx->pc = 0x7F218F90u;
    // 7F218F90: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218F94:
    ctx->pc = 0x7F218F94u;
    // 7F218F94: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218F98:
    ctx->pc = 0x7F218F98u;
    // 7F218F98: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218F9C:
    ctx->pc = 0x7F218F9Cu;
    // 7F218F9C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218FA0:
    ctx->pc = 0x7F218FA0u;
    // 7F218FA0: lwz     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218FA4:
    ctx->pc = 0x7F218FA4u;
    // 7F218FA4: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218FA8:
    ctx->pc = 0x7F218FA8u;
    // 7F218FA8: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218FAC:
    ctx->pc = 0x7F218FACu;
    // 7F218FAC: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218FB0:
    ctx->pc = 0x7F218FB0u;
    // 7F218FB0: lwz     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218FB4:
    ctx->pc = 0x7F218FB4u;
    // 7F218FB4: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218FB8:
    ctx->pc = 0x7F218FB8u;
    // 7F218FB8: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218FBC:
    ctx->pc = 0x7F218FBCu;
    // 7F218FBC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218FC0:
    ctx->pc = 0x7F218FC0u;
    // 7F218FC0: lwz     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218FC4:
    ctx->pc = 0x7F218FC4u;
    // 7F218FC4: stw     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218FC8:
    ctx->pc = 0x7F218FC8u;
    // 7F218FC8: stw     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218FCC:
    ctx->pc = 0x7F218FCCu;
    // 7F218FCC: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F218FD0:
    ctx->pc = 0x7F218FD0u;
    // 7F218FD0: lwz     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F218FD4:
    ctx->pc = 0x7F218FD4u;
    // 7F218FD4: stw     r4, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F218FD8:
    ctx->pc = 0x7F218FD8u;
    // 7F218FD8: stw     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F218FDC:
    ctx->pc = 0x7F218FDCu;
    // 7F218FDC: lha     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218FE0:
    ctx->pc = 0x7F218FE0u;
    // 7F218FE0: lwz     r5, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F218FE4:
    ctx->pc = 0x7F218FE4u;
    // 7F218FE4: srawi r3, r3, 1
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

label_7F218FE8:
    ctx->pc = 0x7F218FE8u;
    // 7F218FE8: lwz     r6, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F218FEC:
    ctx->pc = 0x7F218FECu;
    // 7F218FEC: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F218FF0:
    ctx->pc = 0x7F218FF0u;
    // 7F218FF0: sth     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F218FF4:
    ctx->pc = 0x7F218FF4u;
    // 7F218FF4: lha     r3, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F218FF8:
    ctx->pc = 0x7F218FF8u;
    // 7F218FF8: srawi r3, r3, 1
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

label_7F218FFC:
    ctx->pc = 0x7F218FFCu;
    // 7F218FFC: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F219000:
    ctx->pc = 0x7F219000u;
    // 7F219000: sth     r3, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F219004:
    ctx->pc = 0x7F219004u;
    // 7F219004: lha     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219008:
    ctx->pc = 0x7F219008u;
    // 7F219008: stb     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F21900C:
    ctx->pc = 0x7F21900Cu;
    // 7F21900C: lha     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219010:
    ctx->pc = 0x7F219010u;
    // 7F219010: stb     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F219014:
    ctx->pc = 0x7F219014u;
    // 7F219014: lha     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219018:
    ctx->pc = 0x7F219018u;
    // 7F219018: stb     r3, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F21901C:
    ctx->pc = 0x7F21901Cu;
    // 7F21901C: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F219020:
    ctx->pc = 0x7F219020u;
    // 7F219020: lwz     r11, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F219024:
    ctx->pc = 0x7F219024u;
    // 7F219024: lha     r3, 78(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(78);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219028:
    ctx->pc = 0x7F219028u;
    // 7F219028: xoris   r0, r11, 0x8000
    ctx->gpr[0] = ctx->gpr[11] ^ (0x8000u << 16);

label_7F21902C:
    ctx->pc = 0x7F21902Cu;
    // 7F21902C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219030:
    ctx->pc = 0x7F219030u;
    // 7F219030: xoris   r9, r3, 0x8000
    ctx->gpr[9] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F219034:
    ctx->pc = 0x7F219034u;
    // 7F219034: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F219038:
    ctx->pc = 0x7F219038u;
    // 7F219038: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21903C:
    ctx->pc = 0x7F21903Cu;
    // 7F21903C: fsubs   f1, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F21903Cu)) return;
    ppc_fsubs(ctx, 1, 0, 7);

label_7F219040:
    ctx->pc = 0x7F219040u;
    // 7F219040: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219040u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F219044:
    ctx->pc = 0x7F219044u;
    // 7F219044: fadds   f1, f8, f1
    if (!ppc_fp_available_inline(ctx, 0x7F219044u)) return;
    ppc_fadds(ctx, 1, 8, 1);

label_7F219048:
    ctx->pc = 0x7F219048u;
    // 7F219048: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F219048u)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_7F21904C:
    ctx->pc = 0x7F21904Cu;
    // 7F21904C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21904Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F219050:
    ctx->pc = 0x7F219050u;
    // 7F219050: lwz     r8, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F219054:
    ctx->pc = 0x7F219054u;
    // 7F219054: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219058:
    ctx->pc = 0x7F219058u;
    // 7F219058: lfs     f3, 16444(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219058u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21905C:
    ctx->pc = 0x7F21905Cu;
    // 7F21905C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219060:
    ctx->pc = 0x7F219060u;
    // 7F219060: xoris   r0, r8, 0x8000
    ctx->gpr[0] = ctx->gpr[8] ^ (0x8000u << 16);

label_7F219064:
    ctx->pc = 0x7F219064u;
    // 7F219064: lha     r7, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219068:
    ctx->pc = 0x7F219068u;
    // 7F219068: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21906C:
    ctx->pc = 0x7F21906Cu;
    // 7F21906C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21906Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F219070:
    ctx->pc = 0x7F219070u;
    // 7F219070: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F219074:
    ctx->pc = 0x7F219074u;
    // 7F219074: lwz     r4, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219078:
    ctx->pc = 0x7F219078u;
    // 7F219078: stw     r10, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F21907C:
    ctx->pc = 0x7F21907Cu;
    // 7F21907C: add   r4, r8, r4
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F219080:
    ctx->pc = 0x7F219080u;
    // 7F219080: lwz     r0, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219084:
    ctx->pc = 0x7F219084u;
    // 7F219084: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F219088:
    ctx->pc = 0x7F219088u;
    // 7F219088: xoris   r8, r4, 0x8000
    ctx->gpr[8] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F21908C:
    ctx->pc = 0x7F21908Cu;
    // 7F21908C: stw     r7, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F219090:
    ctx->pc = 0x7F219090u;
    // 7F219090: add   r0, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F219094:
    ctx->pc = 0x7F219094u;
    // 7F219094: fsubs   f2, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x7F219094u)) return;
    ppc_fsubs(ctx, 2, 1, 7);

label_7F219098:
    ctx->pc = 0x7F219098u;
    // 7F219098: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21909C:
    ctx->pc = 0x7F21909Cu;
    // 7F21909C: stw     r10, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2190A0:
    ctx->pc = 0x7F2190A0u;
    // 7F2190A0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2190A0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2190A4:
    ctx->pc = 0x7F2190A4u;
    // 7F2190A4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2190A8:
    ctx->pc = 0x7F2190A8u;
    // 7F2190A8: lfd     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2190A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2190AC:
    ctx->pc = 0x7F2190ACu;
    // 7F2190AC: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2190B0:
    ctx->pc = 0x7F2190B0u;
    // 7F2190B0: fadds   f2, f8, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2190B0u)) return;
    ppc_fadds(ctx, 2, 8, 2);

label_7F2190B4:
    ctx->pc = 0x7F2190B4u;
    // 7F2190B4: fsubs   f1, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x7F2190B4u)) return;
    ppc_fsubs(ctx, 1, 1, 7);

label_7F2190B8:
    ctx->pc = 0x7F2190B8u;
    // 7F2190B8: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2190BC:
    ctx->pc = 0x7F2190BCu;
    // 7F2190BC: lfd     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2190BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2190C0:
    ctx->pc = 0x7F2190C0u;
    // 7F2190C0: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2190C0u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F2190C4:
    ctx->pc = 0x7F2190C4u;
    // 7F2190C4: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2190C8:
    ctx->pc = 0x7F2190C8u;
    // 7F2190C8: stw     r10, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2190CC:
    ctx->pc = 0x7F2190CCu;
    // 7F2190CC: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2190CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2190D0:
    ctx->pc = 0x7F2190D0u;
    // 7F2190D0: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2190D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2190D4:
    ctx->pc = 0x7F2190D4u;
    // 7F2190D4: stw     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2190D8:
    ctx->pc = 0x7F2190D8u;
    // 7F2190D8: fsubs   f6, f4, f7
    if (!ppc_fp_available_inline(ctx, 0x7F2190D8u)) return;
    ppc_fsubs(ctx, 6, 4, 7);

label_7F2190DC:
    ctx->pc = 0x7F2190DCu;
    // 7F2190DC: stw     r10, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2190E0:
    ctx->pc = 0x7F2190E0u;
    // 7F2190E0: fsubs   f4, f2, f7
    if (!ppc_fp_available_inline(ctx, 0x7F2190E0u)) return;
    ppc_fsubs(ctx, 4, 2, 7);

label_7F2190E4:
    ctx->pc = 0x7F2190E4u;
    // 7F2190E4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2190E8:
    ctx->pc = 0x7F2190E8u;
    // 7F2190E8: lfd     f5, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2190E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2190EC:
    ctx->pc = 0x7F2190ECu;
    // 7F2190EC: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2190ECu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F2190F0:
    ctx->pc = 0x7F2190F0u;
    // 7F2190F0: stw     r9, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2190F4:
    ctx->pc = 0x7F2190F4u;
    // 7F2190F4: fsubs   f6, f6, f8
    if (!ppc_fp_available_inline(ctx, 0x7F2190F4u)) return;
    ppc_fsubs(ctx, 6, 6, 8);

label_7F2190F8:
    ctx->pc = 0x7F2190F8u;
    // 7F2190F8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2190F8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2190FC:
    ctx->pc = 0x7F2190FCu;
    // 7F2190FC: stw     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F219100:
    ctx->pc = 0x7F219100u;
    // 7F219100: fsubs   f5, f5, f7
    if (!ppc_fp_available_inline(ctx, 0x7F219100u)) return;
    ppc_fsubs(ctx, 5, 5, 7);

label_7F219104:
    ctx->pc = 0x7F219104u;
    // 7F219104: fsubs   f4, f4, f8
    if (!ppc_fp_available_inline(ctx, 0x7F219104u)) return;
    ppc_fsubs(ctx, 4, 4, 8);

label_7F219108:
    ctx->pc = 0x7F219108u;
    // 7F219108: lfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21910C:
    ctx->pc = 0x7F21910Cu;
    // 7F21910C: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21910Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F219110:
    ctx->pc = 0x7F219110u;
    // 7F219110: fsubs   f0, f2, f7
    if (!ppc_fp_available_inline(ctx, 0x7F219110u)) return;
    ppc_fsubs(ctx, 0, 2, 7);

label_7F219114:
    ctx->pc = 0x7F219114u;
    // 7F219114: fdivs   f2, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x7F219114u)) return;
    ppc_fdivs(ctx, 2, 6, 5);

label_7F219118:
    ctx->pc = 0x7F219118u;
    // 7F219118: lwz     r7, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21911C:
    ctx->pc = 0x7F21911Cu;
    // 7F21911C: sth     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F219120:
    ctx->pc = 0x7F219120u;
    // 7F219120: sth     r0, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F219124:
    ctx->pc = 0x7F219124u;
    // 7F219124: fdivs   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219124u)) return;
    ppc_fdivs(ctx, 0, 4, 0);

label_7F219128:
    ctx->pc = 0x7F219128u;
    // 7F219128: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F219128u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F21912C:
    ctx->pc = 0x7F21912Cu;
    // 7F21912C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21912Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F219130:
    ctx->pc = 0x7F219130u;
    // 7F219130: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F219130u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F219134:
    ctx->pc = 0x7F219134u;
    // 7F219134: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219134u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F219138:
    ctx->pc = 0x7F219138u;
    // 7F219138: stfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F21913C:
    ctx->pc = 0x7F21913Cu;
    // 7F21913C: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21913Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F219140:
    ctx->pc = 0x7F219140u;
    // 7F219140: lwz     r7, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F219144:
    ctx->pc = 0x7F219144u;
    // 7F219144: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219148:
    ctx->pc = 0x7F219148u;
    // 7F219148: sth     r7, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F21914C:
    ctx->pc = 0x7F21914Cu;
    // 7F21914C: sth     r0, 14(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F219150:
    ctx->pc = 0x7F219150u;
    // 7F219150: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F219154:
    ctx->pc = 0x7F219154u;
    // 7F219154: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219158:
    ctx->pc = 0x7F219158u;
    // 7F219158: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F21915C:
    ctx->pc = 0x7F21915Cu;
    // 7F21915C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219160:
    ctx->pc = 0x7F219160u;
    // 7F219160: lwz     r7, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F219164:
    ctx->pc = 0x7F219164u;
    // 7F219164: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219168:
    ctx->pc = 0x7F219168u;
    // 7F219168: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F21916C:
    ctx->pc = 0x7F21916Cu;
    // 7F21916C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219170:
    ctx->pc = 0x7F219170u;
    // 7F219170: lwz     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219174:
    ctx->pc = 0x7F219174u;
    // 7F219174: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F219178:
    ctx->pc = 0x7F219178u;
    // 7F219178: stw     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21917C:
    ctx->pc = 0x7F21917Cu;
    // 7F21917C: bl      0x7F218CC8
    {
            ctx->lr = 0x7F219180u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218CC8u;
                return;
            }
            goto label_7F218CC8;
    }

label_7F219180:
    ctx->pc = 0x7F219180u;
    ctx->downcount -= 1;
    // 7F219180: srawi r3, r3, 31
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

label_7F219184:
    ctx->pc = 0x7F219184u;
    ctx->downcount -= 16;
    // 7F219184: lmw     r25, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219188:
    ctx->pc = 0x7F219188u;
    // 7F219188: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21918C:
    ctx->pc = 0x7F21918Cu;
    // 7F21918C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219190:
    ctx->pc = 0x7F219190u;
    // 7F219190: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F219194:
    ctx->pc = 0x7F219194u;
    // 7F219194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219198:
    ctx->pc = 0x7F219198u;
    ctx->downcount -= 22;
    // 7F219198: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21919C:
    ctx->pc = 0x7F21919Cu;
    // 7F21919C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2191A0:
    ctx->pc = 0x7F2191A0u;
    // 7F2191A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2191A4:
    ctx->pc = 0x7F2191A4u;
    // 7F2191A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2191A8:
    ctx->pc = 0x7F2191A8u;
    // 7F2191A8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2191AC:
    ctx->pc = 0x7F2191ACu;
    // 7F2191AC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2191B0:
    ctx->pc = 0x7F2191B0u;
    // 7F2191B0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2191B4:
    ctx->pc = 0x7F2191B4u;
    // 7F2191B4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2191B8:
    ctx->pc = 0x7F2191B8u;
    // 7F2191B8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F2191BC:
    ctx->pc = 0x7F2191BCu;
    // 7F2191BC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F2191C0:
    ctx->pc = 0x7F2191C0u;
    // 7F2191C0: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F2191C4:
    ctx->pc = 0x7F2191C4u;
    // 7F2191C4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2191C8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2191C8:
    ctx->pc = 0x7F2191C8u;
    ctx->downcount -= 2;
    // 7F2191C8: or.   r31, r3, r3
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

label_7F2191CC:
    ctx->pc = 0x7F2191CCu;
    // 7F2191CC: bc    12, 2, 0x7F219240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219240;
        }
    }

label_7F2191D0:
    ctx->pc = 0x7F2191D0u;
    ctx->downcount -= 5;
    // 7F2191D0: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F2191D4:
    ctx->pc = 0x7F2191D4u;
    // 7F2191D4: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F2191D8:
    ctx->pc = 0x7F2191D8u;
    // 7F2191D8: addi    r4, r4, -30816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30816);

label_7F2191DC:
    ctx->pc = 0x7F2191DCu;
    // 7F2191DC: addi    r5, r5, -29540
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29540);

label_7F2191E0:
    ctx->pc = 0x7F2191E0u;
    // 7F2191E0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2191E4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2191E4:
    ctx->pc = 0x7F2191E4u;
    ctx->downcount -= 17;
    // 7F2191E4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2191E8:
    ctx->pc = 0x7F2191E8u;
    // 7F2191E8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2191EC:
    ctx->pc = 0x7F2191ECu;
    // 7F2191EC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2191F0:
    ctx->pc = 0x7F2191F0u;
    // 7F2191F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2191F4:
    ctx->pc = 0x7F2191F4u;
    // 7F2191F4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2191F8:
    ctx->pc = 0x7F2191F8u;
    // 7F2191F8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2191FC:
    ctx->pc = 0x7F2191FCu;
    // 7F2191FC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F219200:
    ctx->pc = 0x7F219200u;
    // 7F219200: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219204:
    ctx->pc = 0x7F219204u;
    // 7F219204: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F219208:
    ctx->pc = 0x7F219208u;
    // 7F219208: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F21920C:
    ctx->pc = 0x7F21920Cu;
    // 7F21920C: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F219210:
    ctx->pc = 0x7F219210u;
    // 7F219210: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F219214:
    ctx->pc = 0x7F219214u;
    // 7F219214: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F219218:
    ctx->pc = 0x7F219218u;
    // 7F219218: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21921C:
    ctx->pc = 0x7F21921Cu;
    // 7F21921C: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F219220:
    ctx->pc = 0x7F219220u;
    // 7F219220: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219224:
    ctx->pc = 0x7F219224u;
    // 7F219224: bl      0x7F218DC4
    {
            ctx->lr = 0x7F219228u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218DC4u;
                return;
            }
            goto label_7F218DC4;
    }

label_7F219228:
    ctx->pc = 0x7F219228u;
    ctx->downcount -= 2;
    // 7F219228: cmpwi   r3, 0
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

label_7F21922C:
    ctx->pc = 0x7F21922Cu;
    // 7F21922C: bc    4, 0, 0x7F219240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219240;
        }
    }

label_7F219230:
    ctx->pc = 0x7F219230u;
    ctx->downcount -= 2;
    // 7F219230: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219234:
    ctx->pc = 0x7F219234u;
    // 7F219234: bl      0x7F3C8210
    {
            ctx->lr = 0x7F219238u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F219238:
    ctx->pc = 0x7F219238u;
    ctx->downcount -= 2;
    // 7F219238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21923C:
    ctx->pc = 0x7F21923Cu;
    // 7F21923C: b       0x7F219244
    {
            goto label_7F219244;
    }

label_7F219240:
    ctx->pc = 0x7F219240u;
    ctx->downcount -= 1;
    // 7F219240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219244:
    ctx->pc = 0x7F219244u;
    ctx->downcount -= 16;
    // 7F219244: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219248:
    ctx->pc = 0x7F219248u;
    // 7F219248: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21924C:
    ctx->pc = 0x7F21924Cu;
    // 7F21924C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219250:
    ctx->pc = 0x7F219250u;
    // 7F219250: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F219254:
    ctx->pc = 0x7F219254u;
    // 7F219254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219258:
    ctx->pc = 0x7F219258u;
    ctx->downcount -= 24;
    // 7F219258: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21925C:
    ctx->pc = 0x7F21925Cu;
    // 7F21925C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219260:
    ctx->pc = 0x7F219260u;
    // 7F219260: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F219264:
    ctx->pc = 0x7F219264u;
    // 7F219264: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219268:
    ctx->pc = 0x7F219268u;
    // 7F219268: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21926C:
    ctx->pc = 0x7F21926Cu;
    // 7F21926C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219270:
    ctx->pc = 0x7F219270u;
    // 7F219270: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219274:
    ctx->pc = 0x7F219274u;
    // 7F219274: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F219278:
    ctx->pc = 0x7F219278u;
    // 7F219278: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F21927C:
    ctx->pc = 0x7F21927Cu;
    // 7F21927C: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F219280:
    ctx->pc = 0x7F219280u;
    // 7F219280: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F219284:
    ctx->pc = 0x7F219284u;
    // 7F219284: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F219288:
    ctx->pc = 0x7F219288u;
    // 7F219288: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F21928C:
    ctx->pc = 0x7F21928Cu;
    // 7F21928C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F219290u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F219290:
    ctx->pc = 0x7F219290u;
    ctx->downcount -= 2;
    // 7F219290: or.   r31, r3, r3
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

label_7F219294:
    ctx->pc = 0x7F219294u;
    // 7F219294: bc    12, 2, 0x7F219308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219308;
        }
    }

label_7F219298:
    ctx->pc = 0x7F219298u;
    ctx->downcount -= 5;
    // 7F219298: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21929C:
    ctx->pc = 0x7F21929Cu;
    // 7F21929C: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F2192A0:
    ctx->pc = 0x7F2192A0u;
    // 7F2192A0: addi    r4, r4, -30816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30816);

label_7F2192A4:
    ctx->pc = 0x7F2192A4u;
    // 7F2192A4: addi    r5, r5, -29540
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29540);

label_7F2192A8:
    ctx->pc = 0x7F2192A8u;
    // 7F2192A8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2192ACu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2192AC:
    ctx->pc = 0x7F2192ACu;
    ctx->downcount -= 17;
    // 7F2192AC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2192B0:
    ctx->pc = 0x7F2192B0u;
    // 7F2192B0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2192B4:
    ctx->pc = 0x7F2192B4u;
    // 7F2192B4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2192B8:
    ctx->pc = 0x7F2192B8u;
    // 7F2192B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2192BC:
    ctx->pc = 0x7F2192BCu;
    // 7F2192BC: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2192C0:
    ctx->pc = 0x7F2192C0u;
    // 7F2192C0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2192C4:
    ctx->pc = 0x7F2192C4u;
    // 7F2192C4: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2192C8:
    ctx->pc = 0x7F2192C8u;
    // 7F2192C8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2192CC:
    ctx->pc = 0x7F2192CCu;
    // 7F2192CC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2192D0:
    ctx->pc = 0x7F2192D0u;
    // 7F2192D0: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2192D4:
    ctx->pc = 0x7F2192D4u;
    // 7F2192D4: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2192D8:
    ctx->pc = 0x7F2192D8u;
    // 7F2192D8: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2192DC:
    ctx->pc = 0x7F2192DCu;
    // 7F2192DC: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2192E0:
    ctx->pc = 0x7F2192E0u;
    // 7F2192E0: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2192E4:
    ctx->pc = 0x7F2192E4u;
    // 7F2192E4: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2192E8:
    ctx->pc = 0x7F2192E8u;
    // 7F2192E8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2192EC:
    ctx->pc = 0x7F2192ECu;
    // 7F2192EC: bl      0x7F218DC4
    {
            ctx->lr = 0x7F2192F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F218DC4u;
                return;
            }
            goto label_7F218DC4;
    }

label_7F2192F0:
    ctx->pc = 0x7F2192F0u;
    ctx->downcount -= 2;
    // 7F2192F0: cmpwi   r3, 0
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

label_7F2192F4:
    ctx->pc = 0x7F2192F4u;
    // 7F2192F4: bc    4, 0, 0x7F219308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219308;
        }
    }

label_7F2192F8:
    ctx->pc = 0x7F2192F8u;
    ctx->downcount -= 2;
    // 7F2192F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2192FC:
    ctx->pc = 0x7F2192FCu;
    // 7F2192FC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F219300u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F219300:
    ctx->pc = 0x7F219300u;
    ctx->downcount -= 2;
    // 7F219300: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219304:
    ctx->pc = 0x7F219304u;
    // 7F219304: b       0x7F21930C
    {
            goto label_7F21930C;
    }

label_7F219308:
    ctx->pc = 0x7F219308u;
    ctx->downcount -= 1;
    // 7F219308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21930C:
    ctx->pc = 0x7F21930Cu;
    ctx->downcount -= 16;
    // 7F21930C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219310:
    ctx->pc = 0x7F219310u;
    // 7F219310: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219314:
    ctx->pc = 0x7F219314u;
    // 7F219314: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219318:
    ctx->pc = 0x7F219318u;
    // 7F219318: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21931C:
    ctx->pc = 0x7F21931Cu;
    // 7F21931C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219320:
    ctx->pc = 0x7F219320u;
    ctx->downcount -= 19;
    // 7F219320: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F219324:
    ctx->pc = 0x7F219324u;
    // 7F219324: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219328:
    ctx->pc = 0x7F219328u;
    // 7F219328: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F21932C:
    ctx->pc = 0x7F21932Cu;
    // 7F21932C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219330:
    ctx->pc = 0x7F219330u;
    // 7F219330: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F219334:
    ctx->pc = 0x7F219334u;
    // 7F219334: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219338:
    ctx->pc = 0x7F219338u;
    // 7F219338: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21933C:
    ctx->pc = 0x7F21933Cu;
    // 7F21933C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219340:
    ctx->pc = 0x7F219340u;
    // 7F219340: bl      0x800050B4
    {
            ctx->lr = 0x7F219344u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F219344:
    ctx->pc = 0x7F219344u;
    ctx->downcount -= 3;
    // 7F219344: andi.   r0, r30, 0xBFFF
    {
        ctx->gpr[0] = ctx->gpr[30] & 0xBFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F219348:
    ctx->pc = 0x7F219348u;
    // 7F219348: cmplwi  r0, 0x002A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x002Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21934C:
    ctx->pc = 0x7F21934Cu;
    // 7F21934C: bc    12, 1, 0x7F2197D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2197D4;
        }
    }

label_7F219350:
    ctx->pc = 0x7F219350u;
    ctx->downcount -= 7;
    // 7F219350: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219354:
    ctx->pc = 0x7F219354u;
    // 7F219354: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F219358:
    ctx->pc = 0x7F219358u;
    // 7F219358: addi    r3, r3, 8004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8004);

label_7F21935C:
    ctx->pc = 0x7F21935Cu;
    // 7F21935C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219360:
    ctx->pc = 0x7F219360u;
    // 7F219360: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F219364:
    ctx->pc = 0x7F219364u;
    // 7F219364: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F219368:
    ctx->pc = 0x7F219368u;
    ctx->downcount -= 15;
    // 7F219368: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F21936C:
    ctx->pc = 0x7F21936Cu;
    // 7F21936C: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F219370:
    ctx->pc = 0x7F219370u;
    // 7F219370: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219374:
    ctx->pc = 0x7F219374u;
    // 7F219374: addi    r7, r5, 3472
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(3472);

label_7F219378:
    ctx->pc = 0x7F219378u;
    // 7F219378: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F21937C:
    ctx->pc = 0x7F21937Cu;
    // 7F21937C: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F219380:
    ctx->pc = 0x7F219380u;
    // 7F219380: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219384:
    ctx->pc = 0x7F219384u;
    // 7F219384: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219388:
    ctx->pc = 0x7F219388u;
    // 7F219388: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F21938C:
    ctx->pc = 0x7F21938Cu;
    // 7F21938C: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219390:
    ctx->pc = 0x7F219390u;
    // 7F219390: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F219394:
    ctx->pc = 0x7F219394u;
    // 7F219394: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F219398:
    ctx->pc = 0x7F219398u;
    // 7F219398: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F21939C:
    ctx->pc = 0x7F21939Cu;
    // 7F21939C: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2193A0:
    ctx->pc = 0x7F2193A0u;
    // 7F2193A0: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F2193A4:
    ctx->pc = 0x7F2193A4u;
    ctx->downcount -= 4;
    // 7F2193A4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2193A8:
    ctx->pc = 0x7F2193A8u;
    // 7F2193A8: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2193AC:
    ctx->pc = 0x7F2193ACu;
    // 7F2193AC: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2193B0:
    ctx->pc = 0x7F2193B0u;
    // 7F2193B0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2193B4:
    ctx->pc = 0x7F2193B4u;
    ctx->downcount -= 4;
    // 7F2193B4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2193B8:
    ctx->pc = 0x7F2193B8u;
    // 7F2193B8: addi    r0, r3, 2528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2528);

label_7F2193BC:
    ctx->pc = 0x7F2193BCu;
    // 7F2193BC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2193C0:
    ctx->pc = 0x7F2193C0u;
    // 7F2193C0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2193C4:
    ctx->pc = 0x7F2193C4u;
    ctx->downcount -= 4;
    // 7F2193C4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2193C8:
    ctx->pc = 0x7F2193C8u;
    // 7F2193C8: addi    r0, r3, 1916
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1916);

label_7F2193CC:
    ctx->pc = 0x7F2193CCu;
    // 7F2193CC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2193D0:
    ctx->pc = 0x7F2193D0u;
    // 7F2193D0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2193D4:
    ctx->pc = 0x7F2193D4u;
    ctx->downcount -= 4;
    // 7F2193D4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2193D8:
    ctx->pc = 0x7F2193D8u;
    // 7F2193D8: addi    r0, r3, 80
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(80);

label_7F2193DC:
    ctx->pc = 0x7F2193DCu;
    // 7F2193DC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2193E0:
    ctx->pc = 0x7F2193E0u;
    // 7F2193E0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2193E4:
    ctx->pc = 0x7F2193E4u;
    ctx->downcount -= 4;
    // 7F2193E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2193E8:
    ctx->pc = 0x7F2193E8u;
    // 7F2193E8: addi    r0, r3, 5092
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5092);

label_7F2193EC:
    ctx->pc = 0x7F2193ECu;
    // 7F2193EC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2193F0:
    ctx->pc = 0x7F2193F0u;
    // 7F2193F0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2193F4:
    ctx->pc = 0x7F2193F4u;
    ctx->downcount -= 18;
    // 7F2193F4: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F2193F8:
    ctx->pc = 0x7F2193F8u;
    // 7F2193F8: lis     r5, 221
    ctx->gpr[5] = ((u32)(s32)(221) << 16);

label_7F2193FC:
    ctx->pc = 0x7F2193FCu;
    // 7F2193FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219400:
    ctx->pc = 0x7F219400u;
    // 7F219400: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219404:
    ctx->pc = 0x7F219404u;
    // 7F219404: addi    r7, r6, 3472
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(3472);

label_7F219408:
    ctx->pc = 0x7F219408u;
    // 7F219408: addi    r0, r5, -31754
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-31754);

label_7F21940C:
    ctx->pc = 0x7F21940Cu;
    // 7F21940C: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219410:
    ctx->pc = 0x7F219410u;
    // 7F219410: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F219414:
    ctx->pc = 0x7F219414u;
    // 7F219414: lfs     f0, 16448(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F219414u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219418:
    ctx->pc = 0x7F219418u;
    // 7F219418: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F21941C:
    ctx->pc = 0x7F21941Cu;
    // 7F21941C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21941Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219420:
    ctx->pc = 0x7F219420u;
    // 7F219420: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219424:
    ctx->pc = 0x7F219424u;
    // 7F219424: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219428:
    ctx->pc = 0x7F219428u;
    // 7F219428: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F21942C:
    ctx->pc = 0x7F21942Cu;
    // 7F21942C: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F219430:
    ctx->pc = 0x7F219430u;
    // 7F219430: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F219434:
    ctx->pc = 0x7F219434u;
    // 7F219434: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219438:
    ctx->pc = 0x7F219438u;
    // 7F219438: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F21943C:
    ctx->pc = 0x7F21943Cu;
    ctx->downcount -= 4;
    // 7F21943C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219440:
    ctx->pc = 0x7F219440u;
    // 7F219440: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F219444:
    ctx->pc = 0x7F219444u;
    // 7F219444: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F219448:
    ctx->pc = 0x7F219448u;
    // 7F219448: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21944C:
    ctx->pc = 0x7F21944Cu;
    ctx->downcount -= 4;
    // 7F21944C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219450:
    ctx->pc = 0x7F219450u;
    // 7F219450: addi    r0, r3, 7808
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7808);

label_7F219454:
    ctx->pc = 0x7F219454u;
    // 7F219454: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219458:
    ctx->pc = 0x7F219458u;
    // 7F219458: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21945C:
    ctx->pc = 0x7F21945Cu;
    ctx->downcount -= 4;
    // 7F21945C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219460:
    ctx->pc = 0x7F219460u;
    // 7F219460: addi    r0, r3, 7840
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7840);

label_7F219464:
    ctx->pc = 0x7F219464u;
    // 7F219464: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219468:
    ctx->pc = 0x7F219468u;
    // 7F219468: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21946C:
    ctx->pc = 0x7F21946Cu;
    ctx->downcount -= 4;
    // 7F21946C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219470:
    ctx->pc = 0x7F219470u;
    // 7F219470: addi    r0, r3, 7776
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7776);

label_7F219474:
    ctx->pc = 0x7F219474u;
    // 7F219474: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219478:
    ctx->pc = 0x7F219478u;
    // 7F219478: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21947C:
    ctx->pc = 0x7F21947Cu;
    ctx->downcount -= 4;
    // 7F21947C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219480:
    ctx->pc = 0x7F219480u;
    // 7F219480: addi    r0, r3, 2860
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2860);

label_7F219484:
    ctx->pc = 0x7F219484u;
    // 7F219484: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219488:
    ctx->pc = 0x7F219488u;
    // 7F219488: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21948C:
    ctx->pc = 0x7F21948Cu;
    ctx->downcount -= 15;
    // 7F21948C: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F219490:
    ctx->pc = 0x7F219490u;
    // 7F219490: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F219494:
    ctx->pc = 0x7F219494u;
    // 7F219494: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219498:
    ctx->pc = 0x7F219498u;
    // 7F219498: addi    r7, r5, 4084
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(4084);

label_7F21949C:
    ctx->pc = 0x7F21949Cu;
    // 7F21949C: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F2194A0:
    ctx->pc = 0x7F2194A0u;
    // 7F2194A0: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2194A4:
    ctx->pc = 0x7F2194A4u;
    // 7F2194A4: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2194A8:
    ctx->pc = 0x7F2194A8u;
    // 7F2194A8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2194AC:
    ctx->pc = 0x7F2194ACu;
    // 7F2194AC: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2194B0:
    ctx->pc = 0x7F2194B0u;
    // 7F2194B0: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2194B4:
    ctx->pc = 0x7F2194B4u;
    // 7F2194B4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2194B8:
    ctx->pc = 0x7F2194B8u;
    // 7F2194B8: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2194BC:
    ctx->pc = 0x7F2194BCu;
    // 7F2194BC: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2194C0:
    ctx->pc = 0x7F2194C0u;
    // 7F2194C0: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2194C4:
    ctx->pc = 0x7F2194C4u;
    // 7F2194C4: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F2194C8:
    ctx->pc = 0x7F2194C8u;
    ctx->downcount -= 4;
    // 7F2194C8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2194CC:
    ctx->pc = 0x7F2194CCu;
    // 7F2194CC: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2194D0:
    ctx->pc = 0x7F2194D0u;
    // 7F2194D0: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2194D4:
    ctx->pc = 0x7F2194D4u;
    // 7F2194D4: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2194D8:
    ctx->pc = 0x7F2194D8u;
    ctx->downcount -= 4;
    // 7F2194D8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2194DC:
    ctx->pc = 0x7F2194DCu;
    // 7F2194DC: addi    r0, r3, -1600
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1600);

label_7F2194E0:
    ctx->pc = 0x7F2194E0u;
    // 7F2194E0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2194E4:
    ctx->pc = 0x7F2194E4u;
    // 7F2194E4: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2194E8:
    ctx->pc = 0x7F2194E8u;
    ctx->downcount -= 4;
    // 7F2194E8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2194EC:
    ctx->pc = 0x7F2194ECu;
    // 7F2194EC: addi    r0, r3, 4696
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4696);

label_7F2194F0:
    ctx->pc = 0x7F2194F0u;
    // 7F2194F0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2194F4:
    ctx->pc = 0x7F2194F4u;
    // 7F2194F4: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2194F8:
    ctx->pc = 0x7F2194F8u;
    ctx->downcount -= 18;
    // 7F2194F8: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F2194FC:
    ctx->pc = 0x7F2194FCu;
    // 7F2194FC: lis     r5, 221
    ctx->gpr[5] = ((u32)(s32)(221) << 16);

label_7F219500:
    ctx->pc = 0x7F219500u;
    // 7F219500: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219504:
    ctx->pc = 0x7F219504u;
    // 7F219504: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219508:
    ctx->pc = 0x7F219508u;
    // 7F219508: addi    r7, r6, 4084
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(4084);

label_7F21950C:
    ctx->pc = 0x7F21950Cu;
    // 7F21950C: addi    r0, r5, -31754
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-31754);

label_7F219510:
    ctx->pc = 0x7F219510u;
    // 7F219510: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219514:
    ctx->pc = 0x7F219514u;
    // 7F219514: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F219518:
    ctx->pc = 0x7F219518u;
    // 7F219518: lfs     f0, 16452(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F219518u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21951C:
    ctx->pc = 0x7F21951Cu;
    // 7F21951C: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F219520:
    ctx->pc = 0x7F219520u;
    // 7F219520: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219520u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219524:
    ctx->pc = 0x7F219524u;
    // 7F219524: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219528:
    ctx->pc = 0x7F219528u;
    // 7F219528: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21952C:
    ctx->pc = 0x7F21952Cu;
    // 7F21952C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F219530:
    ctx->pc = 0x7F219530u;
    // 7F219530: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F219534:
    ctx->pc = 0x7F219534u;
    // 7F219534: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F219538:
    ctx->pc = 0x7F219538u;
    // 7F219538: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21953C:
    ctx->pc = 0x7F21953Cu;
    // 7F21953C: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F219540:
    ctx->pc = 0x7F219540u;
    ctx->downcount -= 4;
    // 7F219540: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219544:
    ctx->pc = 0x7F219544u;
    // 7F219544: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F219548:
    ctx->pc = 0x7F219548u;
    // 7F219548: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21954C:
    ctx->pc = 0x7F21954Cu;
    // 7F21954C: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219550:
    ctx->pc = 0x7F219550u;
    ctx->downcount -= 4;
    // 7F219550: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219554:
    ctx->pc = 0x7F219554u;
    // 7F219554: addi    r0, r3, 1304
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1304);

label_7F219558:
    ctx->pc = 0x7F219558u;
    // 7F219558: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21955C:
    ctx->pc = 0x7F21955Cu;
    // 7F21955C: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219560:
    ctx->pc = 0x7F219560u;
    ctx->downcount -= 7;
    // 7F219560: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219564:
    ctx->pc = 0x7F219564u;
    // 7F219564: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F219568:
    ctx->pc = 0x7F219568u;
    // 7F219568: lfs     f0, 16452(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219568u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21956C:
    ctx->pc = 0x7F21956Cu;
    // 7F21956C: addi    r0, r4, -636
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-636);

label_7F219570:
    ctx->pc = 0x7F219570u;
    // 7F219570: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219574:
    ctx->pc = 0x7F219574u;
    // 7F219574: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219574u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219578:
    ctx->pc = 0x7F219578u;
    // 7F219578: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21957C:
    ctx->pc = 0x7F21957Cu;
    ctx->downcount -= 18;
    // 7F21957C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219580:
    ctx->pc = 0x7F219580u;
    // 7F219580: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F219584:
    ctx->pc = 0x7F219584u;
    // 7F219584: lfs     f0, 16456(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219584u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219588:
    ctx->pc = 0x7F219588u;
    // 7F219588: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F21958C:
    ctx->pc = 0x7F21958Cu;
    // 7F21958C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219590:
    ctx->pc = 0x7F219590u;
    // 7F219590: addi    r5, r5, -1476
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1476);

label_7F219594:
    ctx->pc = 0x7F219594u;
    // 7F219594: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219594u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219598:
    ctx->pc = 0x7F219598u;
    // 7F219598: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F21959C:
    ctx->pc = 0x7F21959Cu;
    // 7F21959C: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2195A0:
    ctx->pc = 0x7F2195A0u;
    // 7F2195A0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2195A4:
    ctx->pc = 0x7F2195A4u;
    // 7F2195A4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2195A8:
    ctx->pc = 0x7F2195A8u;
    // 7F2195A8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2195AC:
    ctx->pc = 0x7F2195ACu;
    // 7F2195AC: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2195B0:
    ctx->pc = 0x7F2195B0u;
    // 7F2195B0: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2195B4:
    ctx->pc = 0x7F2195B4u;
    // 7F2195B4: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2195B8:
    ctx->pc = 0x7F2195B8u;
    // 7F2195B8: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2195BC:
    ctx->pc = 0x7F2195BCu;
    // 7F2195BC: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2195C0:
    ctx->pc = 0x7F2195C0u;
    // 7F2195C0: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F2195C4:
    ctx->pc = 0x7F2195C4u;
    ctx->downcount -= 4;
    // 7F2195C4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2195C8:
    ctx->pc = 0x7F2195C8u;
    // 7F2195C8: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2195CC:
    ctx->pc = 0x7F2195CCu;
    // 7F2195CC: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2195D0:
    ctx->pc = 0x7F2195D0u;
    // 7F2195D0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2195D4:
    ctx->pc = 0x7F2195D4u;
    ctx->downcount -= 11;
    // 7F2195D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2195D8:
    ctx->pc = 0x7F2195D8u;
    // 7F2195D8: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2195DC:
    ctx->pc = 0x7F2195DCu;
    // 7F2195DC: addi    r4, r3, 16456
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16456);

label_7F2195E0:
    ctx->pc = 0x7F2195E0u;
    // 7F2195E0: lis     r3, 43
    ctx->gpr[3] = ((u32)(s32)(43) << 16);

label_7F2195E4:
    ctx->pc = 0x7F2195E4u;
    // 7F2195E4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2195E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2195E8:
    ctx->pc = 0x7F2195E8u;
    // 7F2195E8: addi    r4, r5, -1476
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1476);

label_7F2195EC:
    ctx->pc = 0x7F2195ECu;
    // 7F2195EC: addi    r0, r3, 2435
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2435);

label_7F2195F0:
    ctx->pc = 0x7F2195F0u;
    // 7F2195F0: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2195F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2195F4:
    ctx->pc = 0x7F2195F4u;
    // 7F2195F4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2195F8:
    ctx->pc = 0x7F2195F8u;
    // 7F2195F8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2195FC:
    ctx->pc = 0x7F2195FCu;
    // 7F2195FC: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219600:
    ctx->pc = 0x7F219600u;
    ctx->downcount -= 11;
    // 7F219600: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219604:
    ctx->pc = 0x7F219604u;
    // 7F219604: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F219608:
    ctx->pc = 0x7F219608u;
    // 7F219608: addi    r4, r3, 16456
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16456);

label_7F21960C:
    ctx->pc = 0x7F21960Cu;
    // 7F21960C: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F219610:
    ctx->pc = 0x7F219610u;
    // 7F219610: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F219610u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219614:
    ctx->pc = 0x7F219614u;
    // 7F219614: addi    r4, r5, -740
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-740);

label_7F219618:
    ctx->pc = 0x7F219618u;
    // 7F219618: addi    r0, r3, 2435
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2435);

label_7F21961C:
    ctx->pc = 0x7F21961Cu;
    // 7F21961C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21961Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219620:
    ctx->pc = 0x7F219620u;
    // 7F219620: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219624:
    ctx->pc = 0x7F219624u;
    // 7F219624: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219628:
    ctx->pc = 0x7F219628u;
    // 7F219628: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21962C:
    ctx->pc = 0x7F21962Cu;
    ctx->downcount -= 11;
    // 7F21962C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219630:
    ctx->pc = 0x7F219630u;
    // 7F219630: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F219634:
    ctx->pc = 0x7F219634u;
    // 7F219634: addi    r4, r3, 16456
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16456);

label_7F219638:
    ctx->pc = 0x7F219638u;
    // 7F219638: lis     r3, 43
    ctx->gpr[3] = ((u32)(s32)(43) << 16);

label_7F21963C:
    ctx->pc = 0x7F21963Cu;
    // 7F21963C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21963Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219640:
    ctx->pc = 0x7F219640u;
    // 7F219640: addi    r4, r5, -740
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-740);

label_7F219644:
    ctx->pc = 0x7F219644u;
    // 7F219644: addi    r0, r3, 2435
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2435);

label_7F219648:
    ctx->pc = 0x7F219648u;
    // 7F219648: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219648u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21964C:
    ctx->pc = 0x7F21964Cu;
    // 7F21964C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219650:
    ctx->pc = 0x7F219650u;
    // 7F219650: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219654:
    ctx->pc = 0x7F219654u;
    // 7F219654: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219658:
    ctx->pc = 0x7F219658u;
    ctx->downcount -= 7;
    // 7F219658: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21965C:
    ctx->pc = 0x7F21965Cu;
    // 7F21965C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F219660:
    ctx->pc = 0x7F219660u;
    // 7F219660: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219660u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219664:
    ctx->pc = 0x7F219664u;
    // 7F219664: addi    r0, r4, -532
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-532);

label_7F219668:
    ctx->pc = 0x7F219668u;
    // 7F219668: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21966C:
    ctx->pc = 0x7F21966Cu;
    // 7F21966C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21966Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219670:
    ctx->pc = 0x7F219670u;
    // 7F219670: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219674:
    ctx->pc = 0x7F219674u;
    ctx->downcount -= 18;
    // 7F219674: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219678:
    ctx->pc = 0x7F219678u;
    // 7F219678: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F21967C:
    ctx->pc = 0x7F21967Cu;
    // 7F21967C: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21967Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219680:
    ctx->pc = 0x7F219680u;
    // 7F219680: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F219684:
    ctx->pc = 0x7F219684u;
    // 7F219684: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219688:
    ctx->pc = 0x7F219688u;
    // 7F219688: addi    r5, r5, -864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-864);

label_7F21968C:
    ctx->pc = 0x7F21968Cu;
    // 7F21968C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21968Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219690:
    ctx->pc = 0x7F219690u;
    // 7F219690: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F219694:
    ctx->pc = 0x7F219694u;
    // 7F219694: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F219698:
    ctx->pc = 0x7F219698u;
    // 7F219698: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21969C:
    ctx->pc = 0x7F21969Cu;
    // 7F21969C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2196A0:
    ctx->pc = 0x7F2196A0u;
    // 7F2196A0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2196A4:
    ctx->pc = 0x7F2196A4u;
    // 7F2196A4: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2196A8:
    ctx->pc = 0x7F2196A8u;
    // 7F2196A8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2196AC:
    ctx->pc = 0x7F2196ACu;
    // 7F2196AC: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2196B0:
    ctx->pc = 0x7F2196B0u;
    // 7F2196B0: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2196B4:
    ctx->pc = 0x7F2196B4u;
    // 7F2196B4: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2196B8:
    ctx->pc = 0x7F2196B8u;
    // 7F2196B8: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F2196BC:
    ctx->pc = 0x7F2196BCu;
    ctx->downcount -= 4;
    // 7F2196BC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2196C0:
    ctx->pc = 0x7F2196C0u;
    // 7F2196C0: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2196C4:
    ctx->pc = 0x7F2196C4u;
    // 7F2196C4: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2196C8:
    ctx->pc = 0x7F2196C8u;
    // 7F2196C8: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2196CC:
    ctx->pc = 0x7F2196CCu;
    ctx->downcount -= 18;
    // 7F2196CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2196D0:
    ctx->pc = 0x7F2196D0u;
    // 7F2196D0: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2196D4:
    ctx->pc = 0x7F2196D4u;
    // 7F2196D4: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2196D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2196D8:
    ctx->pc = 0x7F2196D8u;
    // 7F2196D8: lis     r4, 43
    ctx->gpr[4] = ((u32)(s32)(43) << 16);

label_7F2196DC:
    ctx->pc = 0x7F2196DCu;
    // 7F2196DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2196E0:
    ctx->pc = 0x7F2196E0u;
    // 7F2196E0: addi    r5, r5, -864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-864);

label_7F2196E4:
    ctx->pc = 0x7F2196E4u;
    // 7F2196E4: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2196E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2196E8:
    ctx->pc = 0x7F2196E8u;
    // 7F2196E8: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F2196EC:
    ctx->pc = 0x7F2196ECu;
    // 7F2196EC: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2196F0:
    ctx->pc = 0x7F2196F0u;
    // 7F2196F0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2196F4:
    ctx->pc = 0x7F2196F4u;
    // 7F2196F4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2196F8:
    ctx->pc = 0x7F2196F8u;
    // 7F2196F8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2196FC:
    ctx->pc = 0x7F2196FCu;
    // 7F2196FC: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219700:
    ctx->pc = 0x7F219700u;
    // 7F219700: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F219704:
    ctx->pc = 0x7F219704u;
    // 7F219704: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F219708:
    ctx->pc = 0x7F219708u;
    // 7F219708: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F21970C:
    ctx->pc = 0x7F21970Cu;
    // 7F21970C: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219710:
    ctx->pc = 0x7F219710u;
    // 7F219710: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F219714:
    ctx->pc = 0x7F219714u;
    ctx->downcount -= 4;
    // 7F219714: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219718:
    ctx->pc = 0x7F219718u;
    // 7F219718: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F21971C:
    ctx->pc = 0x7F21971Cu;
    // 7F21971C: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F219720:
    ctx->pc = 0x7F219720u;
    // 7F219720: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F219724:
    ctx->pc = 0x7F219724u;
    ctx->downcount -= 18;
    // 7F219724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219728:
    ctx->pc = 0x7F219728u;
    // 7F219728: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F21972C:
    ctx->pc = 0x7F21972Cu;
    // 7F21972C: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21972Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219730:
    ctx->pc = 0x7F219730u;
    // 7F219730: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F219734:
    ctx->pc = 0x7F219734u;
    // 7F219734: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219738:
    ctx->pc = 0x7F219738u;
    // 7F219738: addi    r5, r5, 692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(692);

label_7F21973C:
    ctx->pc = 0x7F21973Cu;
    // 7F21973C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21973Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219740:
    ctx->pc = 0x7F219740u;
    // 7F219740: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F219744:
    ctx->pc = 0x7F219744u;
    // 7F219744: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F219748:
    ctx->pc = 0x7F219748u;
    // 7F219748: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21974C:
    ctx->pc = 0x7F21974Cu;
    // 7F21974C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219750:
    ctx->pc = 0x7F219750u;
    // 7F219750: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219754:
    ctx->pc = 0x7F219754u;
    // 7F219754: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F219758:
    ctx->pc = 0x7F219758u;
    // 7F219758: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F21975C:
    ctx->pc = 0x7F21975Cu;
    // 7F21975C: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F219760:
    ctx->pc = 0x7F219760u;
    // 7F219760: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F219764:
    ctx->pc = 0x7F219764u;
    // 7F219764: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219768:
    ctx->pc = 0x7F219768u;
    // 7F219768: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F21976C:
    ctx->pc = 0x7F21976Cu;
    ctx->downcount -= 4;
    // 7F21976C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219770:
    ctx->pc = 0x7F219770u;
    // 7F219770: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F219774:
    ctx->pc = 0x7F219774u;
    // 7F219774: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F219778:
    ctx->pc = 0x7F219778u;
    // 7F219778: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F21977C:
    ctx->pc = 0x7F21977Cu;
    ctx->downcount -= 18;
    // 7F21977C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219780:
    ctx->pc = 0x7F219780u;
    // 7F219780: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F219784:
    ctx->pc = 0x7F219784u;
    // 7F219784: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219784u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219788:
    ctx->pc = 0x7F219788u;
    // 7F219788: lis     r4, 43
    ctx->gpr[4] = ((u32)(s32)(43) << 16);

label_7F21978C:
    ctx->pc = 0x7F21978Cu;
    // 7F21978C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F219790:
    ctx->pc = 0x7F219790u;
    // 7F219790: addi    r5, r5, 692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(692);

label_7F219794:
    ctx->pc = 0x7F219794u;
    // 7F219794: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219794u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219798:
    ctx->pc = 0x7F219798u;
    // 7F219798: addi    r0, r4, 2435
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2435);

label_7F21979C:
    ctx->pc = 0x7F21979Cu;
    // 7F21979C: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2197A0:
    ctx->pc = 0x7F2197A0u;
    // 7F2197A0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2197A4:
    ctx->pc = 0x7F2197A4u;
    // 7F2197A4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2197A8:
    ctx->pc = 0x7F2197A8u;
    // 7F2197A8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2197AC:
    ctx->pc = 0x7F2197ACu;
    // 7F2197AC: lha     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2197B0:
    ctx->pc = 0x7F2197B0u;
    // 7F2197B0: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2197B4:
    ctx->pc = 0x7F2197B4u;
    // 7F2197B4: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2197B8:
    ctx->pc = 0x7F2197B8u;
    // 7F2197B8: sth     r4, 5564(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2197BC:
    ctx->pc = 0x7F2197BCu;
    // 7F2197BC: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2197C0:
    ctx->pc = 0x7F2197C0u;
    // 7F2197C0: bc    4, 1, 0x7F2197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2197F0;
        }
    }

label_7F2197C4:
    ctx->pc = 0x7F2197C4u;
    ctx->downcount -= 4;
    // 7F2197C4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2197C8:
    ctx->pc = 0x7F2197C8u;
    // 7F2197C8: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2197CC:
    ctx->pc = 0x7F2197CCu;
    // 7F2197CC: sth     r0, 5564(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5564);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2197D0:
    ctx->pc = 0x7F2197D0u;
    // 7F2197D0: b       0x7F2197F0
    {
            goto label_7F2197F0;
    }

label_7F2197D4:
    ctx->pc = 0x7F2197D4u;
    ctx->downcount -= 7;
    // 7F2197D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2197D8:
    ctx->pc = 0x7F2197D8u;
    // 7F2197D8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2197DC:
    ctx->pc = 0x7F2197DCu;
    // 7F2197DC: lfs     f0, 16460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2197DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2197E0:
    ctx->pc = 0x7F2197E0u;
    // 7F2197E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2197E4:
    ctx->pc = 0x7F2197E4u;
    // 7F2197E4: addi    r3, r4, -1724
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1724);

label_7F2197E8:
    ctx->pc = 0x7F2197E8u;
    // 7F2197E8: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2197E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2197EC:
    ctx->pc = 0x7F2197ECu;
    // 7F2197EC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2197F0:
    ctx->pc = 0x7F2197F0u;
    ctx->downcount -= 17;
    // 7F2197F0: stw     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2197F4:
    ctx->pc = 0x7F2197F4u;
    // 7F2197F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2197F8:
    ctx->pc = 0x7F2197F8u;
    // 7F2197F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2197FC:
    ctx->pc = 0x7F2197FCu;
    // 7F2197FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219800:
    ctx->pc = 0x7F219800u;
    // 7F219800: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F219804:
    ctx->pc = 0x7F219804u;
    // 7F219804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219808:
    ctx->pc = 0x7F219808u;
    ctx->downcount -= 20;
    // 7F219808: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21980C:
    ctx->pc = 0x7F21980Cu;
    // 7F21980C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219810:
    ctx->pc = 0x7F219810u;
    // 7F219810: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219814:
    ctx->pc = 0x7F219814u;
    // 7F219814: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F219818:
    ctx->pc = 0x7F219818u;
    // 7F219818: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21981C:
    ctx->pc = 0x7F21981Cu;
    // 7F21981C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F219820:
    ctx->pc = 0x7F219820u;
    // 7F219820: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219824:
    ctx->pc = 0x7F219824u;
    // 7F219824: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219828:
    ctx->pc = 0x7F219828u;
    // 7F219828: lfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F219828u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21982C:
    ctx->pc = 0x7F21982Cu;
    // 7F21982C: bl      0x80026020
    {
            ctx->lr = 0x7F219830u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F219830:
    ctx->pc = 0x7F219830u;
    ctx->downcount -= 2;
    // 7F219830: rlwinm. r0, r30, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F219834:
    ctx->pc = 0x7F219834u;
    // 7F219834: bc    12, 2, 0x7F21991C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21991C;
        }
    }

label_7F219838:
    ctx->pc = 0x7F219838u;
    ctx->downcount -= 4;
    // 7F219838: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21983C:
    ctx->pc = 0x7F21983Cu;
    // 7F21983C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219840:
    ctx->pc = 0x7F219840u;
    // 7F219840: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F219844:
    ctx->pc = 0x7F219844u;
    // 7F219844: bl      0x800050B4
    {
            ctx->lr = 0x7F219848u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F219848:
    ctx->pc = 0x7F219848u;
    ctx->downcount -= 2;
    // 7F219848: rlwinm. r0, r30, 0, 31, 31
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

label_7F21984C:
    ctx->pc = 0x7F21984Cu;
    // 7F21984C: bc    12, 2, 0x7F2198A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2198A8;
        }
    }

label_7F219850:
    ctx->pc = 0x7F219850u;
    ctx->downcount -= 2;
    // 7F219850: rlwinm. r0, r30, 0, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000F0u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F219854:
    ctx->pc = 0x7F219854u;
    // 7F219854: bc    12, 2, 0x7F219868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219868;
        }
    }

label_7F219858:
    ctx->pc = 0x7F219858u;
    ctx->downcount -= 4;
    // 7F219858: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F21985C:
    ctx->pc = 0x7F21985Cu;
    // 7F21985C: addi    r0, r3, 7672
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7672);

label_7F219860:
    ctx->pc = 0x7F219860u;
    // 7F219860: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219864:
    ctx->pc = 0x7F219864u;
    // 7F219864: b       0x7F219890
    {
            goto label_7F219890;
    }

label_7F219868:
    ctx->pc = 0x7F219868u;
    ctx->downcount -= 3;
    // 7F219868: rlwinm r0, r30, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000000Fu;
    }

label_7F21986C:
    ctx->pc = 0x7F21986Cu;
    // 7F21986C: cmpwi   r0, 11
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

label_7F219870:
    ctx->pc = 0x7F219870u;
    // 7F219870: bc    4, 2, 0x7F219884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219884;
        }
    }

label_7F219874:
    ctx->pc = 0x7F219874u;
    ctx->downcount -= 4;
    // 7F219874: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219878:
    ctx->pc = 0x7F219878u;
    // 7F219878: addi    r0, r3, 7972
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7972);

label_7F21987C:
    ctx->pc = 0x7F21987Cu;
    // 7F21987C: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219880:
    ctx->pc = 0x7F219880u;
    // 7F219880: b       0x7F219890
    {
            goto label_7F219890;
    }

label_7F219884:
    ctx->pc = 0x7F219884u;
    ctx->downcount -= 3;
    // 7F219884: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219888:
    ctx->pc = 0x7F219888u;
    // 7F219888: addi    r0, r3, 7576
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7576);

label_7F21988C:
    ctx->pc = 0x7F21988Cu;
    // 7F21988C: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219890:
    ctx->pc = 0x7F219890u;
    ctx->downcount -= 5;
    // 7F219890: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F219894:
    ctx->pc = 0x7F219894u;
    // 7F219894: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219898:
    ctx->pc = 0x7F219898u;
    // 7F219898: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21989C:
    ctx->pc = 0x7F21989Cu;
    // 7F21989C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2198A0:
    ctx->pc = 0x7F2198A0u;
    // 7F2198A0: bl      0x7F219198
    {
            ctx->lr = 0x7F2198A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219198u;
                return;
            }
            goto label_7F219198;
    }

label_7F2198A4:
    ctx->pc = 0x7F2198A4u;
    ctx->downcount -= 1;
    // 7F2198A4: b       0x7F219938
    {
            goto label_7F219938;
    }

label_7F2198A8:
    ctx->pc = 0x7F2198A8u;
    ctx->downcount -= 2;
    // 7F2198A8: rlwinm. r0, r30, 0, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000F0u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2198AC:
    ctx->pc = 0x7F2198ACu;
    // 7F2198AC: bc    12, 2, 0x7F2198BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2198BC;
        }
    }

label_7F2198B0:
    ctx->pc = 0x7F2198B0u;
    ctx->downcount -= 3;
    // 7F2198B0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2198B4:
    ctx->pc = 0x7F2198B4u;
    // 7F2198B4: addi    r5, r3, 7640
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7640);

label_7F2198B8:
    ctx->pc = 0x7F2198B8u;
    // 7F2198B8: b       0x7F219904
    {
            goto label_7F219904;
    }

label_7F2198BC:
    ctx->pc = 0x7F2198BCu;
    ctx->downcount -= 3;
    // 7F2198BC: rlwinm r0, r30, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000000Fu;
    }

label_7F2198C0:
    ctx->pc = 0x7F2198C0u;
    // 7F2198C0: cmpwi   r0, 6
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

label_7F2198C4:
    ctx->pc = 0x7F2198C4u;
    // 7F2198C4: bc    4, 2, 0x7F2198D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2198D4;
        }
    }

label_7F2198C8:
    ctx->pc = 0x7F2198C8u;
    ctx->downcount -= 3;
    // 7F2198C8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2198CC:
    ctx->pc = 0x7F2198CCu;
    // 7F2198CC: addi    r5, r3, 7608
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7608);

label_7F2198D0:
    ctx->pc = 0x7F2198D0u;
    // 7F2198D0: b       0x7F219904
    {
            goto label_7F219904;
    }

label_7F2198D4:
    ctx->pc = 0x7F2198D4u;
    ctx->downcount -= 2;
    // 7F2198D4: cmpwi   r0, 10
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

label_7F2198D8:
    ctx->pc = 0x7F2198D8u;
    // 7F2198D8: bc    4, 2, 0x7F2198E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2198E8;
        }
    }

label_7F2198DC:
    ctx->pc = 0x7F2198DCu;
    ctx->downcount -= 3;
    // 7F2198DC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2198E0:
    ctx->pc = 0x7F2198E0u;
    // 7F2198E0: addi    r5, r3, 7940
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7940);

label_7F2198E4:
    ctx->pc = 0x7F2198E4u;
    // 7F2198E4: b       0x7F219904
    {
            goto label_7F219904;
    }

label_7F2198E8:
    ctx->pc = 0x7F2198E8u;
    ctx->downcount -= 2;
    // 7F2198E8: cmpwi   r0, 12
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

label_7F2198EC:
    ctx->pc = 0x7F2198ECu;
    // 7F2198EC: bc    4, 2, 0x7F2198FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2198FC;
        }
    }

label_7F2198F0:
    ctx->pc = 0x7F2198F0u;
    ctx->downcount -= 3;
    // 7F2198F0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2198F4:
    ctx->pc = 0x7F2198F4u;
    // 7F2198F4: addi    r5, r3, 7544
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7544);

label_7F2198F8:
    ctx->pc = 0x7F2198F8u;
    // 7F2198F8: b       0x7F219904
    {
            goto label_7F219904;
    }

label_7F2198FC:
    ctx->pc = 0x7F2198FCu;
    ctx->downcount -= 2;
    // 7F2198FC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F219900:
    ctx->pc = 0x7F219900u;
    // 7F219900: addi    r5, r3, 7272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7272);

label_7F219904:
    ctx->pc = 0x7F219904u;
    ctx->downcount -= 5;
    // 7F219904: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F219908:
    ctx->pc = 0x7F219908u;
    // 7F219908: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21990C:
    ctx->pc = 0x7F21990Cu;
    // 7F21990C: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219910:
    ctx->pc = 0x7F219910u;
    // 7F219910: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219914:
    ctx->pc = 0x7F219914u;
    // 7F219914: bl      0x7F219198
    {
            ctx->lr = 0x7F219918u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219198u;
                return;
            }
            goto label_7F219198;
    }

label_7F219918:
    ctx->pc = 0x7F219918u;
    ctx->downcount -= 1;
    // 7F219918: b       0x7F219938
    {
            goto label_7F219938;
    }

label_7F21991C:
    ctx->pc = 0x7F21991Cu;
    ctx->downcount -= 3;
    // 7F21991C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F219920:
    ctx->pc = 0x7F219920u;
    // 7F219920: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F219924:
    ctx->pc = 0x7F219924u;
    // 7F219924: bl      0x7F219320
    {
            ctx->lr = 0x7F219928u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219320u;
                return;
            }
            goto label_7F219320;
    }

label_7F219928:
    ctx->pc = 0x7F219928u;
    ctx->downcount -= 4;
    // 7F219928: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21992C:
    ctx->pc = 0x7F21992Cu;
    // 7F21992C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219930:
    ctx->pc = 0x7F219930u;
    // 7F219930: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219934:
    ctx->pc = 0x7F219934u;
    // 7F219934: bl      0x7F219198
    {
            ctx->lr = 0x7F219938u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219198u;
                return;
            }
            goto label_7F219198;
    }

label_7F219938:
    ctx->pc = 0x7F219938u;
    ctx->downcount -= 16;
    // 7F219938: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21993C:
    ctx->pc = 0x7F21993Cu;
    // 7F21993C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219940:
    ctx->pc = 0x7F219940u;
    // 7F219940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219944:
    ctx->pc = 0x7F219944u;
    // 7F219944: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F219948:
    ctx->pc = 0x7F219948u;
    // 7F219948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21994C:
    ctx->pc = 0x7F21994Cu;
    ctx->downcount -= 20;
    // 7F21994C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F219950:
    ctx->pc = 0x7F219950u;
    // 7F219950: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219954:
    ctx->pc = 0x7F219954u;
    // 7F219954: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219958:
    ctx->pc = 0x7F219958u;
    // 7F219958: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21995C:
    ctx->pc = 0x7F21995Cu;
    // 7F21995C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219960:
    ctx->pc = 0x7F219960u;
    // 7F219960: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F219964:
    ctx->pc = 0x7F219964u;
    // 7F219964: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F219968:
    ctx->pc = 0x7F219968u;
    // 7F219968: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21996C:
    ctx->pc = 0x7F21996Cu;
    // 7F21996C: lfs     f1, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21996Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219970:
    ctx->pc = 0x7F219970u;
    // 7F219970: bl      0x80026020
    {
            ctx->lr = 0x7F219974u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F219974:
    ctx->pc = 0x7F219974u;
    ctx->downcount -= 3;
    // 7F219974: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219978:
    ctx->pc = 0x7F219978u;
    // 7F219978: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21997C:
    ctx->pc = 0x7F21997Cu;
    // 7F21997C: bl      0x7F219320
    {
            ctx->lr = 0x7F219980u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219320u;
                return;
            }
            goto label_7F219320;
    }

label_7F219980:
    ctx->pc = 0x7F219980u;
    ctx->downcount -= 9;
    // 7F219980: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219984:
    ctx->pc = 0x7F219984u;
    // 7F219984: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219988:
    ctx->pc = 0x7F219988u;
    // 7F219988: lfs     f0, 16464(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F219988u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21998C:
    ctx->pc = 0x7F21998Cu;
    // 7F21998C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F219990:
    ctx->pc = 0x7F219990u;
    // 7F219990: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219994:
    ctx->pc = 0x7F219994u;
    // 7F219994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219998:
    ctx->pc = 0x7F219998u;
    // 7F219998: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219998u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F21999C:
    ctx->pc = 0x7F21999Cu;
    // 7F21999C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21999Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2199A0:
    ctx->pc = 0x7F2199A0u;
    // 7F2199A0: bl      0x7F219198
    {
            ctx->lr = 0x7F2199A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219198u;
                return;
            }
            goto label_7F219198;
    }

label_7F2199A4:
    ctx->pc = 0x7F2199A4u;
    ctx->downcount -= 16;
    // 7F2199A4: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2199A8:
    ctx->pc = 0x7F2199A8u;
    // 7F2199A8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2199AC:
    ctx->pc = 0x7F2199ACu;
    // 7F2199AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2199B0:
    ctx->pc = 0x7F2199B0u;
    // 7F2199B0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2199B4:
    ctx->pc = 0x7F2199B4u;
    // 7F2199B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F2199B8:
    ctx->pc = 0x7F2199B8u;
    ctx->downcount -= 23;
    // 7F2199B8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2199BC:
    ctx->pc = 0x7F2199BCu;
    // 7F2199BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2199C0:
    ctx->pc = 0x7F2199C0u;
    // 7F2199C0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2199C4:
    ctx->pc = 0x7F2199C4u;
    // 7F2199C4: stmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2199C8:
    ctx->pc = 0x7F2199C8u;
    // 7F2199C8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2199CC:
    ctx->pc = 0x7F2199CCu;
    // 7F2199CC: addi    r3, r24, 48
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(48);

label_7F2199D0:
    ctx->pc = 0x7F2199D0u;
    // 7F2199D0: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2199D4:
    ctx->pc = 0x7F2199D4u;
    // 7F2199D4: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2199D8:
    ctx->pc = 0x7F2199D8u;
    // 7F2199D8: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2199DC:
    ctx->pc = 0x7F2199DCu;
    // 7F2199DC: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2199E0:
    ctx->pc = 0x7F2199E0u;
    // 7F2199E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2199E4:
    ctx->pc = 0x7F2199E4u;
    // 7F2199E4: lfs     f1, 60(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2199E4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2199E8:
    ctx->pc = 0x7F2199E8u;
    // 7F2199E8: bl      0x80026020
    {
            ctx->lr = 0x7F2199ECu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2199EC:
    ctx->pc = 0x7F2199ECu;
    ctx->downcount -= 3;
    // 7F2199EC: rlwinm r31, r25, 0, 28, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x0000000Fu;
    }

label_7F2199F0:
    ctx->pc = 0x7F2199F0u;
    // 7F2199F0: cmpwi   r31, 6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2199F4:
    ctx->pc = 0x7F2199F4u;
    // 7F2199F4: bc    4, 2, 0x7F219A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219A20;
        }
    }

label_7F2199F8:
    ctx->pc = 0x7F2199F8u;
    ctx->downcount -= 10;
    // 7F2199F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2199FC:
    ctx->pc = 0x7F2199FCu;
    // 7F2199FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219A00:
    ctx->pc = 0x7F219A00u;
    // 7F219A00: lfs     f1, 16468(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F219A00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219A04:
    ctx->pc = 0x7F219A04u;
    // 7F219A04: li      r30, 32
    ctx->gpr[30] = (u32)(s32)(32);

label_7F219A08:
    ctx->pc = 0x7F219A08u;
    // 7F219A08: lfs     f0, 16472(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219A08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219A0C:
    ctx->pc = 0x7F219A0Cu;
    // 7F219A0C: li      r29, 41
    ctx->gpr[29] = (u32)(s32)(41);

label_7F219A10:
    ctx->pc = 0x7F219A10u;
    // 7F219A10: stfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A10u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A14:
    ctx->pc = 0x7F219A14u;
    // 7F219A14: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A14u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219A18:
    ctx->pc = 0x7F219A18u;
    // 7F219A18: stfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A1C:
    ctx->pc = 0x7F219A1Cu;
    // 7F219A1C: b       0x7F219A74
    {
            goto label_7F219A74;
    }

label_7F219A20:
    ctx->pc = 0x7F219A20u;
    ctx->downcount -= 7;
    // 7F219A20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219A24:
    ctx->pc = 0x7F219A24u;
    // 7F219A24: cmpwi   r31, 8
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

label_7F219A28:
    ctx->pc = 0x7F219A28u;
    // 7F219A28: lfs     f1, 16476(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219A28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219A2C:
    ctx->pc = 0x7F219A2Cu;
    // 7F219A2C: li      r30, 6
    ctx->gpr[30] = (u32)(s32)(6);

label_7F219A30:
    ctx->pc = 0x7F219A30u;
    // 7F219A30: li      r29, 52
    ctx->gpr[29] = (u32)(s32)(52);

label_7F219A34:
    ctx->pc = 0x7F219A34u;
    // 7F219A34: stfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A34u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A38:
    ctx->pc = 0x7F219A38u;
    // 7F219A38: bc    4, 2, 0x7F219A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219A50;
        }
    }

label_7F219A3C:
    ctx->pc = 0x7F219A3Cu;
    ctx->downcount -= 5;
    // 7F219A3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219A40:
    ctx->pc = 0x7F219A40u;
    // 7F219A40: lfs     f0, 16448(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219A40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219A44:
    ctx->pc = 0x7F219A44u;
    // 7F219A44: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A44u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219A48:
    ctx->pc = 0x7F219A48u;
    // 7F219A48: stfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A48u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A4C:
    ctx->pc = 0x7F219A4Cu;
    // 7F219A4C: b       0x7F219A74
    {
            goto label_7F219A74;
    }

label_7F219A50:
    ctx->pc = 0x7F219A50u;
    ctx->downcount -= 2;
    // 7F219A50: rlwinm. r0, r25, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F219A54:
    ctx->pc = 0x7F219A54u;
    // 7F219A54: bc    12, 2, 0x7F219A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219A64;
        }
    }

label_7F219A58:
    ctx->pc = 0x7F219A58u;
    ctx->downcount -= 3;
    // 7F219A58: stfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A58u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A5C:
    ctx->pc = 0x7F219A5Cu;
    // 7F219A5C: stfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A5Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219A60:
    ctx->pc = 0x7F219A60u;
    // 7F219A60: b       0x7F219A74
    {
            goto label_7F219A74;
    }

label_7F219A64:
    ctx->pc = 0x7F219A64u;
    ctx->downcount -= 4;
    // 7F219A64: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219A68:
    ctx->pc = 0x7F219A68u;
    // 7F219A68: lfs     f0, 16480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219A68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219A6C:
    ctx->pc = 0x7F219A6Cu;
    // 7F219A6C: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A6Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219A70:
    ctx->pc = 0x7F219A70u;
    // 7F219A70: stfs     f0, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F219A70u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219A74:
    ctx->pc = 0x7F219A74u;
    ctx->downcount -= 3;
    // 7F219A74: rlwinm r0, r25, 0, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x000000F0u;
    }

label_7F219A78:
    ctx->pc = 0x7F219A78u;
    // 7F219A78: cmpwi   r0, 16
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

label_7F219A7C:
    ctx->pc = 0x7F219A7Cu;
    // 7F219A7C: bc    4, 2, 0x7F219A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219A9C;
        }
    }

label_7F219A80:
    ctx->pc = 0x7F219A80u;
    ctx->downcount -= 6;
    // 7F219A80: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219A84:
    ctx->pc = 0x7F219A84u;
    // 7F219A84: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219A88:
    ctx->pc = 0x7F219A88u;
    // 7F219A88: addi    r5, r4, 16484
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16484);

label_7F219A8C:
    ctx->pc = 0x7F219A8Cu;
    // 7F219A8C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219A90:
    ctx->pc = 0x7F219A90u;
    // 7F219A90: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F219A90u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219A94:
    ctx->pc = 0x7F219A94u;
    // 7F219A94: bl      0x80026020
    {
            ctx->lr = 0x7F219A98u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F219A98:
    ctx->pc = 0x7F219A98u;
    ctx->downcount -= 1;
    // 7F219A98: b       0x7F219ABC
    {
            goto label_7F219ABC;
    }

label_7F219A9C:
    ctx->pc = 0x7F219A9Cu;
    ctx->downcount -= 2;
    // 7F219A9C: cmpwi   r0, 32
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219AA0:
    ctx->pc = 0x7F219AA0u;
    // 7F219AA0: bc    4, 2, 0x7F219ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219ABC;
        }
    }

label_7F219AA4:
    ctx->pc = 0x7F219AA4u;
    ctx->downcount -= 6;
    // 7F219AA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219AA8:
    ctx->pc = 0x7F219AA8u;
    // 7F219AA8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219AAC:
    ctx->pc = 0x7F219AACu;
    // 7F219AAC: addi    r5, r4, 16488
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16488);

label_7F219AB0:
    ctx->pc = 0x7F219AB0u;
    // 7F219AB0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219AB4:
    ctx->pc = 0x7F219AB4u;
    // 7F219AB4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F219AB4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219AB8:
    ctx->pc = 0x7F219AB8u;
    // 7F219AB8: bl      0x80026020
    {
            ctx->lr = 0x7F219ABCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F219ABC:
    ctx->pc = 0x7F219ABCu;
    ctx->downcount -= 3;
    // 7F219ABC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F219AC0:
    ctx->pc = 0x7F219AC0u;
    // 7F219AC0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F219AC4:
    ctx->pc = 0x7F219AC4u;
    // 7F219AC4: bl      0x7F219320
    {
            ctx->lr = 0x7F219AC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219320u;
                return;
            }
            goto label_7F219320;
    }

label_7F219AC8:
    ctx->pc = 0x7F219AC8u;
    ctx->downcount -= 8;
    // 7F219AC8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219ACC:
    ctx->pc = 0x7F219ACCu;
    // 7F219ACC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219AD0:
    ctx->pc = 0x7F219AD0u;
    // 7F219AD0: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F219AD4:
    ctx->pc = 0x7F219AD4u;
    // 7F219AD4: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219AD8:
    ctx->pc = 0x7F219AD8u;
    // 7F219AD8: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219ADC:
    ctx->pc = 0x7F219ADCu;
    // 7F219ADC: or   r8, r28, r28
    {
        ctx->gpr[8] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219AE0:
    ctx->pc = 0x7F219AE0u;
    // 7F219AE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219AE4:
    ctx->pc = 0x7F219AE4u;
    // 7F219AE4: bl      0x7F219258
    {
            ctx->lr = 0x7F219AE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219258u;
                return;
            }
            goto label_7F219258;
    }

label_7F219AE8:
    ctx->pc = 0x7F219AE8u;
    ctx->downcount -= 2;
    // 7F219AE8: or.   r24, r3, r3
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

label_7F219AEC:
    ctx->pc = 0x7F219AECu;
    // 7F219AEC: bc    12, 2, 0x7F219B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219B4C;
        }
    }

label_7F219AF0:
    ctx->pc = 0x7F219AF0u;
    ctx->downcount -= 2;
    // 7F219AF0: cmpwi   r31, 6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219AF4:
    ctx->pc = 0x7F219AF4u;
    // 7F219AF4: bc    4, 2, 0x7F219B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219B24;
        }
    }

label_7F219AF8:
    ctx->pc = 0x7F219AF8u;
    ctx->downcount -= 7;
    // 7F219AF8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219AFC:
    ctx->pc = 0x7F219AFCu;
    // 7F219AFC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219B00:
    ctx->pc = 0x7F219B00u;
    // 7F219B00: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219B04:
    ctx->pc = 0x7F219B04u;
    // 7F219B04: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F219B08:
    ctx->pc = 0x7F219B08u;
    // 7F219B08: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219B0C:
    ctx->pc = 0x7F219B0Cu;
    // 7F219B0C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F219B10:
    ctx->pc = 0x7F219B10u;
    // 7F219B10: bl      0x7F22FD8C
    {
            ctx->lr = 0x7F219B14u;
            ctx->pc = 0x7F22FD8Cu;
            return;
    }

label_7F219B14:
    ctx->pc = 0x7F219B14u;
    ctx->downcount -= 3;
    // 7F219B14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219B18:
    ctx->pc = 0x7F219B18u;
    // 7F219B18: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219B1C:
    ctx->pc = 0x7F219B1Cu;
    // 7F219B1C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F219B20u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F219B20:
    ctx->pc = 0x7F219B20u;
    ctx->downcount -= 1;
    // 7F219B20: b       0x7F219B4C
    {
            goto label_7F219B4C;
    }

label_7F219B24:
    ctx->pc = 0x7F219B24u;
    ctx->downcount -= 7;
    // 7F219B24: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219B28:
    ctx->pc = 0x7F219B28u;
    // 7F219B28: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219B2C:
    ctx->pc = 0x7F219B2Cu;
    // 7F219B2C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219B30:
    ctx->pc = 0x7F219B30u;
    // 7F219B30: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F219B34:
    ctx->pc = 0x7F219B34u;
    // 7F219B34: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219B38:
    ctx->pc = 0x7F219B38u;
    // 7F219B38: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219B3C:
    ctx->pc = 0x7F219B3Cu;
    // 7F219B3C: bl      0x7F22FD8C
    {
            ctx->lr = 0x7F219B40u;
            ctx->pc = 0x7F22FD8Cu;
            return;
    }

label_7F219B40:
    ctx->pc = 0x7F219B40u;
    ctx->downcount -= 3;
    // 7F219B40: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219B44:
    ctx->pc = 0x7F219B44u;
    // 7F219B44: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219B48:
    ctx->pc = 0x7F219B48u;
    // 7F219B48: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F219B4Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F219B4C:
    ctx->pc = 0x7F219B4Cu;
    ctx->downcount -= 17;
    // 7F219B4C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219B50:
    ctx->pc = 0x7F219B50u;
    // 7F219B50: lmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219B54:
    ctx->pc = 0x7F219B54u;
    // 7F219B54: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219B58:
    ctx->pc = 0x7F219B58u;
    // 7F219B58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219B5C:
    ctx->pc = 0x7F219B5Cu;
    // 7F219B5C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F219B60:
    ctx->pc = 0x7F219B60u;
    // 7F219B60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219B64:
    ctx->pc = 0x7F219B64u;
    ctx->downcount -= 18;
    // 7F219B64: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F219B68:
    ctx->pc = 0x7F219B68u;
    // 7F219B68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219B6C:
    ctx->pc = 0x7F219B6Cu;
    // 7F219B6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219B70:
    ctx->pc = 0x7F219B70u;
    // 7F219B70: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F219B74:
    ctx->pc = 0x7F219B74u;
    // 7F219B74: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F219B78:
    ctx->pc = 0x7F219B78u;
    // 7F219B78: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219B7C:
    ctx->pc = 0x7F219B7Cu;
    // 7F219B7C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219B80:
    ctx->pc = 0x7F219B80u;
    // 7F219B80: bl      0x7F3C9624
    {
            ctx->lr = 0x7F219B84u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F219B84:
    ctx->pc = 0x7F219B84u;
    ctx->downcount -= 9;
    // 7F219B84: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219B88:
    ctx->pc = 0x7F219B88u;
    // 7F219B88: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F219B8C:
    ctx->pc = 0x7F219B8Cu;
    // 7F219B8C: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F219B90:
    ctx->pc = 0x7F219B90u;
    // 7F219B90: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219B94:
    ctx->pc = 0x7F219B94u;
    // 7F219B94: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F219B98:
    ctx->pc = 0x7F219B98u;
    // 7F219B98: addi    r31, r4, 28636
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F219B9C:
    ctx->pc = 0x7F219B9Cu;
    // 7F219B9C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F219BA0:
    ctx->pc = 0x7F219BA0u;
    // 7F219BA0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219BA4:
    ctx->pc = 0x7F219BA4u;
    // 7F219BA4: b       0x7F219CE8
    {
            goto label_7F219CE8;
    }

label_7F219BA8:
    ctx->pc = 0x7F219BA8u;
    ctx->downcount -= 5;
    // 7F219BA8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219BAC:
    ctx->pc = 0x7F219BACu;
    // 7F219BAC: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219BB0:
    ctx->pc = 0x7F219BB0u;
    // 7F219BB0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219BB4:
    // 7F219BB4: cmpwi   r0, 1
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

label_7F219BB8:
    // 7F219BB8: bc    12, 2, 0x7F219C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219C2C;
        }
    }

label_7F219BBC:
    ctx->downcount -= 1;
    // 7F219BBC: bc    4, 0, 0x7F219BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219BCC;
        }
    }

label_7F219BC0:
    ctx->downcount -= 2;
    // 7F219BC0: cmpwi   r0, 0
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

label_7F219BC4:
    // 7F219BC4: bc    4, 0, 0x7F219BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219BD8;
        }
    }

label_7F219BC8:
    ctx->downcount -= 1;
    // 7F219BC8: b       0x7F219CDC
    {
            goto label_7F219CDC;
    }

label_7F219BCC:
    ctx->downcount -= 2;
    // 7F219BCC: cmpwi   r0, 3
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

label_7F219BD0:
    // 7F219BD0: bc    4, 0, 0x7F219CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219CDC;
        }
    }

label_7F219BD4:
    ctx->downcount -= 1;
    // 7F219BD4: b       0x7F219CBC
    {
            goto label_7F219CBC;
    }

label_7F219BD8:
    ctx->pc = 0x7F219BD8u;
    ctx->downcount -= 3;
    // 7F219BD8: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219BDC:
    // 7F219BDC: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F219BE0:
    // 7F219BE0: bc    4, 2, 0x7F219C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219C08;
        }
    }

label_7F219BE4:
    ctx->downcount -= 9;
    // 7F219BE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F219BE8:
    // 7F219BE8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F219BEC:
    ctx->pc = 0x7F219BECu;
    // 7F219BEC: stw     r3, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F219BF0:
    ctx->pc = 0x7F219BF0u;
    // 7F219BF0: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219BF4:
    ctx->pc = 0x7F219BF4u;
    // 7F219BF4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219BF8:
    ctx->pc = 0x7F219BF8u;
    // 7F219BF8: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219BFC:
    ctx->pc = 0x7F219BFCu;
    // 7F219BFC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219C00:
    ctx->pc = 0x7F219C00u;
    // 7F219C00: stw     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C04:
    // 7F219C04: b       0x7F219CDC
    {
            goto label_7F219CDC;
    }

label_7F219C08:
    ctx->downcount -= 2;
    // 7F219C08: cmpwi   r0, 1
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

label_7F219C0C:
    // 7F219C0C: bc    4, 2, 0x7F219CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219CDC;
        }
    }

label_7F219C10:
    ctx->downcount -= 7;
    // 7F219C10: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F219C14:
    // 7F219C14: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F219C18:
    ctx->pc = 0x7F219C18u;
    // 7F219C18: stw     r3, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F219C1C:
    ctx->pc = 0x7F219C1Cu;
    // 7F219C1C: lwz     r3, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219C20:
    ctx->pc = 0x7F219C20u;
    // 7F219C20: stw     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F219C24:
    ctx->pc = 0x7F219C24u;
    // 7F219C24: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C28:
    // 7F219C28: b       0x7F219CDC
    {
            goto label_7F219CDC;
    }

label_7F219C2C:
    ctx->pc = 0x7F219C2Cu;
    ctx->downcount -= 4;
    // 7F219C2C: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219C30:
    // 7F219C30: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_7F219C34:
    // 7F219C34: cmpwi   r0, 3
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

label_7F219C38:
    // 7F219C38: bc    4, 2, 0x7F219C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219C7C;
        }
    }

label_7F219C3C:
    ctx->downcount -= 15;
    // 7F219C3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F219C40:
    // 7F219C40: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F219C44:
    ctx->pc = 0x7F219C44u;
    // 7F219C44: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C48:
    // 7F219C48: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F219C4C:
    // 7F219C4C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F219C50:
    ctx->pc = 0x7F219C50u;
    // 7F219C50: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C54:
    ctx->pc = 0x7F219C54u;
    // 7F219C54: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219C58:
    ctx->pc = 0x7F219C58u;
    // 7F219C58: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219C5C:
    ctx->pc = 0x7F219C5Cu;
    // 7F219C5C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219C60:
    ctx->pc = 0x7F219C60u;
    // 7F219C60: stw     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C64:
    ctx->pc = 0x7F219C64u;
    // 7F219C64: lwz     r4, 928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(928);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219C68:
    ctx->pc = 0x7F219C68u;
    // 7F219C68: lwz     r5, 932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219C6C:
    ctx->pc = 0x7F219C6Cu;
    // 7F219C6C: lwz     r6, 920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F219C70:
    ctx->pc = 0x7F219C70u;
    // 7F219C70: lwz     r7, 924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(924);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F219C74:
    // 7F219C74: bl      0x7F3AE540
    {
            ctx->lr = 0x7F219C78u;
            ctx->pc = 0x7F3AE540u;
            return;
    }

label_7F219C78:
    ctx->downcount -= 1;
    // 7F219C78: b       0x7F219CDC
    {
            goto label_7F219CDC;
    }

label_7F219C7C:
    ctx->downcount -= 2;
    // 7F219C7C: cmpwi   r0, 2
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

label_7F219C80:
    // 7F219C80: bc    4, 2, 0x7F219CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219CDC;
        }
    }

label_7F219C84:
    ctx->downcount -= 13;
    // 7F219C84: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F219C88:
    // 7F219C88: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F219C8C:
    ctx->pc = 0x7F219C8Cu;
    // 7F219C8C: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219C90:
    // 7F219C90: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F219C94:
    // 7F219C94: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F219C98:
    ctx->pc = 0x7F219C98u;
    // 7F219C98: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219C9C:
    ctx->pc = 0x7F219C9Cu;
    // 7F219C9C: stw     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F219CA0:
    ctx->pc = 0x7F219CA0u;
    // 7F219CA0: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219CA4:
    ctx->pc = 0x7F219CA4u;
    // 7F219CA4: lwz     r4, 928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(928);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219CA8:
    ctx->pc = 0x7F219CA8u;
    // 7F219CA8: lwz     r5, 932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219CAC:
    ctx->pc = 0x7F219CACu;
    // 7F219CAC: lwz     r6, 920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F219CB0:
    ctx->pc = 0x7F219CB0u;
    // 7F219CB0: lwz     r7, 924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(924);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F219CB4:
    // 7F219CB4: bl      0x7F3AE540
    {
            ctx->lr = 0x7F219CB8u;
            ctx->pc = 0x7F3AE540u;
            return;
    }

label_7F219CB8:
    ctx->downcount -= 1;
    // 7F219CB8: b       0x7F219CDC
    {
            goto label_7F219CDC;
    }

label_7F219CBC:
    ctx->pc = 0x7F219CBCu;
    ctx->downcount -= 6;
    // 7F219CBC: lwz     r4, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219CC0:
    // 7F219CC0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219CC4:
    ctx->pc = 0x7F219CC4u;
    // 7F219CC4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219CC8:
    // 7F219CC8: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F219CCC:
    ctx->pc = 0x7F219CCCu;
    // 7F219CCC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219CD0:
    // 7F219CD0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F219CD4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F219CD4:
    ctx->downcount -= 2;
    // 7F219CD4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F219CD8:
    // 7F219CD8: b       0x7F219CF4
    {
            goto label_7F219CF4;
    }

label_7F219CDC:
    ctx->pc = 0x7F219CDCu;
    ctx->downcount -= 3;
    // 7F219CDC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F219CE0:
    // 7F219CE0: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F219CE4:
    ctx->pc = 0x7F219CE4u;
    // 7F219CE4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219CE8:
    ctx->downcount -= 2;
    // 7F219CE8: addic.  r30, r30, -1
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

label_7F219CEC:
    // 7F219CEC: bc    4, 0, 0x7F219BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219BA8u;
                return;
            }
            goto label_7F219BA8;
        }
    }

label_7F219CF0:
    ctx->pc = 0x7F219CF0u;
    ctx->downcount -= 1;
    // 7F219CF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219CF4:
    ctx->pc = 0x7F219CF4u;
    ctx->downcount -= 16;
    // 7F219CF4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219CF8:
    ctx->pc = 0x7F219CF8u;
    // 7F219CF8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219CFC:
    ctx->pc = 0x7F219CFCu;
    // 7F219CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219D00:
    ctx->pc = 0x7F219D00u;
    // 7F219D00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F219D04:
    ctx->pc = 0x7F219D04u;
    // 7F219D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219D08:
    ctx->pc = 0x7F219D08u;
    ctx->downcount -= 24;
    // 7F219D08: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F219D0C:
    ctx->pc = 0x7F219D0Cu;
    // 7F219D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F219D10:
    ctx->pc = 0x7F219D10u;
    // 7F219D10: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219D14:
    ctx->pc = 0x7F219D14u;
    // 7F219D14: stmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F219D18:
    ctx->pc = 0x7F219D18u;
    // 7F219D18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219D1C:
    ctx->pc = 0x7F219D1Cu;
    // 7F219D1C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219D20:
    ctx->pc = 0x7F219D20u;
    // 7F219D20: lfs     f0, 16520(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219D20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219D24:
    ctx->pc = 0x7F219D24u;
    // 7F219D24: lfs     f2, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D24u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F219D28:
    ctx->pc = 0x7F219D28u;
    // 7F219D28: lfs     f1, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D28u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219D2C:
    ctx->pc = 0x7F219D2Cu;
    // 7F219D2C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F219D2Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F219D30:
    ctx->pc = 0x7F219D30u;
    // 7F219D30: stfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D30u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F219D34:
    ctx->pc = 0x7F219D34u;
    // 7F219D34: lfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D34u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219D38:
    ctx->pc = 0x7F219D38u;
    // 7F219D38: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219D38u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F219D3C:
    ctx->pc = 0x7F219D3Cu;
    // 7F219D3C: bc    4, 1, 0x7F219D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219D44;
        }
    }

label_7F219D40:
    ctx->pc = 0x7F219D40u;
    ctx->downcount -= 1;
    // 7F219D40: stfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D40u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219D44:
    ctx->pc = 0x7F219D44u;
    ctx->downcount -= 5;
    // 7F219D44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219D48:
    ctx->pc = 0x7F219D48u;
    // 7F219D48: lfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D48u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F219D4C:
    ctx->pc = 0x7F219D4Cu;
    // 7F219D4C: lfs     f0, 16496(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F219D4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219D50:
    ctx->pc = 0x7F219D50u;
    // 7F219D50: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219D50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F219D54:
    ctx->pc = 0x7F219D54u;
    // 7F219D54: bc    4, 0, 0x7F219D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219D5C;
        }
    }

label_7F219D58:
    ctx->pc = 0x7F219D58u;
    ctx->downcount -= 1;
    // 7F219D58: stfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D58u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F219D5C:
    ctx->pc = 0x7F219D5Cu;
    ctx->downcount -= 7;
    // 7F219D5C: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F219D5Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F219D60:
    ctx->pc = 0x7F219D60u;
    // 7F219D60: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F219D60u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F219D64:
    ctx->pc = 0x7F219D64u;
    // 7F219D64: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F219D64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F219D68:
    ctx->pc = 0x7F219D68u;
    // 7F219D68: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F219D6C:
    ctx->pc = 0x7F219D6Cu;
    // 7F219D6C: cmpwi   r5, 128
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219D70:
    ctx->pc = 0x7F219D70u;
    // 7F219D70: addi    r6, r5, -128
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-128);

label_7F219D74:
    ctx->pc = 0x7F219D74u;
    // 7F219D74: bc    4, 1, 0x7F219D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219D7C;
        }
    }

label_7F219D78:
    ctx->pc = 0x7F219D78u;
    ctx->downcount -= 1;
    // 7F219D78: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F219D7C:
    ctx->pc = 0x7F219D7Cu;
    ctx->downcount -= 2;
    // 7F219D7C: cmpwi   r6, 128
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F219D80:
    ctx->pc = 0x7F219D80u;
    // 7F219D80: bc    4, 1, 0x7F219D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219D88;
        }
    }

label_7F219D84:
    ctx->pc = 0x7F219D84u;
    ctx->downcount -= 1;
    // 7F219D84: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F219D88:
    ctx->pc = 0x7F219D88u;
    ctx->downcount -= 2;
    // 7F219D88: cmpwi   r6, 0
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

label_7F219D8C:
    ctx->pc = 0x7F219D8Cu;
    // 7F219D8C: bc    4, 0, 0x7F219D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F219D94;
        }
    }

label_7F219D90:
    ctx->pc = 0x7F219D90u;
    ctx->downcount -= 1;
    // 7F219D90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F219D94:
    ctx->pc = 0x7F219D94u;
    ctx->downcount -= 9;
    // 7F219D94: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F219D98:
    ctx->pc = 0x7F219D98u;
    // 7F219D98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F219D9C:
    ctx->pc = 0x7F219D9Cu;
    // 7F219D9C: addi    r4, r4, 16512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16512);

label_7F219DA0:
    ctx->pc = 0x7F219DA0u;
    // 7F219DA0: lwz     r0, 16516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219DA4:
    ctx->pc = 0x7F219DA4u;
    // 7F219DA4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219DA8:
    ctx->pc = 0x7F219DA8u;
    // 7F219DA8: cmpwi   r5, 0
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

label_7F219DAC:
    ctx->pc = 0x7F219DACu;
    // 7F219DAC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F219DB0:
    ctx->pc = 0x7F219DB0u;
    // 7F219DB0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F219DB4:
    ctx->pc = 0x7F219DB4u;
    // 7F219DB4: bc    12, 2, 0x7F219DC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219DC4;
        }
    }

label_7F219DB8:
    ctx->pc = 0x7F219DB8u;
    ctx->downcount -= 3;
    // 7F219DB8: rlwinm r3, r5, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_7F219DBC:
    ctx->pc = 0x7F219DBCu;
    // 7F219DBC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F219DC0:
    ctx->pc = 0x7F219DC0u;
    // 7F219DC0: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F219DC4:
    ctx->pc = 0x7F219DC4u;
    ctx->downcount -= 2;
    // 7F219DC4: cmpwi   r6, 0
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

label_7F219DC8:
    ctx->pc = 0x7F219DC8u;
    // 7F219DC8: bc    12, 2, 0x7F219DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F219DD8;
        }
    }

label_7F219DCC:
    ctx->pc = 0x7F219DCCu;
    ctx->downcount -= 3;
    // 7F219DCC: rlwinm r3, r6, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_7F219DD0:
    ctx->pc = 0x7F219DD0u;
    // 7F219DD0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F219DD4:
    ctx->pc = 0x7F219DD4u;
    // 7F219DD4: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F219DD8:
    ctx->pc = 0x7F219DD8u;
    ctx->downcount -= 2;
    // 7F219DD8: addi    r3, r30, 92
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(92);

label_7F219DDC:
    ctx->pc = 0x7F219DDCu;
    // 7F219DDC: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F219DE0u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F219DE0:
    ctx->pc = 0x7F219DE0u;
    ctx->downcount -= 2;
    // 7F219DE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F219DE4:
    ctx->pc = 0x7F219DE4u;
    // 7F219DE4: bl      0x7F2EA87C
    {
            ctx->lr = 0x7F219DE8u;
            ctx->pc = 0x7F2EA87Cu;
            return;
    }

label_7F219DE8:
    ctx->pc = 0x7F219DE8u;
    ctx->downcount -= 1;
    // 7F219DE8: bl      0x7F2EA990
    {
            ctx->lr = 0x7F219DECu;
            ctx->pc = 0x7F2EA990u;
            return;
    }

label_7F219DEC:
    ctx->pc = 0x7F219DECu;
    ctx->downcount -= 4;
    // 7F219DEC: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F219DF0:
    ctx->pc = 0x7F219DF0u;
    // 7F219DF0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F219DF4:
    ctx->pc = 0x7F219DF4u;
    // 7F219DF4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F219DF8:
    ctx->pc = 0x7F219DF8u;
    // 7F219DF8: bl      0x80042E0C
    {
            ctx->lr = 0x7F219DFCu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F219DFC:
    ctx->pc = 0x7F219DFCu;
    ctx->downcount -= 3;
    // 7F219DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219E00:
    ctx->pc = 0x7F219E00u;
    // 7F219E00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219E04:
    ctx->pc = 0x7F219E04u;
    // 7F219E04: bl      0x7F21A014
    {
            ctx->lr = 0x7F219E08u;
            goto label_7F21A014;
    }

label_7F219E08:
    ctx->pc = 0x7F219E08u;
    ctx->downcount -= 9;
    // 7F219E08: lbz     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[26] = mem_read8(ctx, ea);
    }

label_7F219E0C:
    ctx->pc = 0x7F219E0Cu;
    // 7F219E0C: lbz     r27, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[27] = mem_read8(ctx, ea);
    }

label_7F219E10:
    ctx->pc = 0x7F219E10u;
    // 7F219E10: lbz     r28, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[28] = mem_read8(ctx, ea);
    }

label_7F219E14:
    ctx->pc = 0x7F219E14u;
    // 7F219E14: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219E18:
    ctx->pc = 0x7F219E18u;
    // 7F219E18: lbz     r29, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[29] = mem_read8(ctx, ea);
    }

label_7F219E1C:
    ctx->pc = 0x7F219E1Cu;
    // 7F219E1C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219E20:
    ctx->pc = 0x7F219E20u;
    // 7F219E20: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219E24:
    ctx->pc = 0x7F219E24u;
    // 7F219E24: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219E28:
    ctx->pc = 0x7F219E28u;
    // 7F219E28: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219E2Cu;
            goto label_7F219FFC;
    }

label_7F219E2C:
    ctx->pc = 0x7F219E2Cu;
    ctx->downcount -= 3;
    // 7F219E2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219E30:
    ctx->pc = 0x7F219E30u;
    // 7F219E30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219E34:
    ctx->pc = 0x7F219E34u;
    // 7F219E34: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219E38u;
            goto label_7F219FEC;
    }

label_7F219E38:
    ctx->pc = 0x7F219E38u;
    ctx->downcount -= 3;
    // 7F219E38: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F219E3C:
    ctx->pc = 0x7F219E3Cu;
    // 7F219E3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219E40:
    ctx->pc = 0x7F219E40u;
    // 7F219E40: bl      0x7F21A014
    {
            ctx->lr = 0x7F219E44u;
            goto label_7F21A014;
    }

label_7F219E44:
    ctx->pc = 0x7F219E44u;
    ctx->downcount -= 5;
    // 7F219E44: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219E48:
    ctx->pc = 0x7F219E48u;
    // 7F219E48: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219E4C:
    ctx->pc = 0x7F219E4Cu;
    // 7F219E4C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219E50:
    ctx->pc = 0x7F219E50u;
    // 7F219E50: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219E54:
    ctx->pc = 0x7F219E54u;
    // 7F219E54: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219E58u;
            goto label_7F219FFC;
    }

label_7F219E58:
    ctx->pc = 0x7F219E58u;
    ctx->downcount -= 3;
    // 7F219E58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219E5C:
    ctx->pc = 0x7F219E5Cu;
    // 7F219E5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219E60:
    ctx->pc = 0x7F219E60u;
    // 7F219E60: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219E64u;
            goto label_7F219FEC;
    }

label_7F219E64:
    ctx->pc = 0x7F219E64u;
    ctx->downcount -= 48;
    // 7F219E64: lwz     r4, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219E68:
    ctx->pc = 0x7F219E68u;
    // 7F219E68: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F219E6C:
    ctx->pc = 0x7F219E6Cu;
    // 7F219E6C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F219E70:
    ctx->pc = 0x7F219E70u;
    // 7F219E70: mulli   r4, r4, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)7168);

label_7F219E74:
    ctx->pc = 0x7F219E74u;
    // 7F219E74: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F219E78:
    ctx->pc = 0x7F219E78u;
    // 7F219E78: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F219E7C:
    ctx->pc = 0x7F219E7Cu;
    // 7F219E7C: bl      0x7F21A014
    {
            ctx->lr = 0x7F219E80u;
            goto label_7F21A014;
    }

label_7F219E80:
    ctx->pc = 0x7F219E80u;
    ctx->downcount -= 9;
    // 7F219E80: lbz     r22, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[22] = mem_read8(ctx, ea);
    }

label_7F219E84:
    ctx->pc = 0x7F219E84u;
    // 7F219E84: lbz     r23, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_7F219E88:
    ctx->pc = 0x7F219E88u;
    // 7F219E88: lbz     r24, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[24] = mem_read8(ctx, ea);
    }

label_7F219E8C:
    ctx->pc = 0x7F219E8Cu;
    // 7F219E8C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F219E90:
    ctx->pc = 0x7F219E90u;
    // 7F219E90: lbz     r25, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        ctx->gpr[25] = mem_read8(ctx, ea);
    }

label_7F219E94:
    ctx->pc = 0x7F219E94u;
    // 7F219E94: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F219E98:
    ctx->pc = 0x7F219E98u;
    // 7F219E98: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219E9C:
    ctx->pc = 0x7F219E9Cu;
    // 7F219E9C: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F219EA0:
    ctx->pc = 0x7F219EA0u;
    // 7F219EA0: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219EA4u;
            goto label_7F219FFC;
    }

label_7F219EA4:
    ctx->pc = 0x7F219EA4u;
    ctx->downcount -= 3;
    // 7F219EA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219EA8:
    ctx->pc = 0x7F219EA8u;
    // 7F219EA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219EAC:
    ctx->pc = 0x7F219EACu;
    // 7F219EAC: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219EB0u;
            goto label_7F219FEC;
    }

label_7F219EB0:
    ctx->pc = 0x7F219EB0u;
    ctx->downcount -= 48;
    // 7F219EB0: lwz     r4, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219EB4:
    ctx->pc = 0x7F219EB4u;
    // 7F219EB4: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F219EB8:
    ctx->pc = 0x7F219EB8u;
    // 7F219EB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219EBC:
    ctx->pc = 0x7F219EBCu;
    // 7F219EBC: mulli   r4, r4, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)7168);

label_7F219EC0:
    ctx->pc = 0x7F219EC0u;
    // 7F219EC0: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F219EC4:
    ctx->pc = 0x7F219EC4u;
    // 7F219EC4: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F219EC8:
    ctx->pc = 0x7F219EC8u;
    // 7F219EC8: bl      0x7F21A014
    {
            ctx->lr = 0x7F219ECCu;
            goto label_7F21A014;
    }

label_7F219ECC:
    ctx->pc = 0x7F219ECCu;
    ctx->downcount -= 5;
    // 7F219ECC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F219ED0:
    ctx->pc = 0x7F219ED0u;
    // 7F219ED0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F219ED4:
    ctx->pc = 0x7F219ED4u;
    // 7F219ED4: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219ED8:
    ctx->pc = 0x7F219ED8u;
    // 7F219ED8: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F219EDC:
    ctx->pc = 0x7F219EDCu;
    // 7F219EDC: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219EE0u;
            goto label_7F219FFC;
    }

label_7F219EE0:
    ctx->pc = 0x7F219EE0u;
    ctx->downcount -= 3;
    // 7F219EE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219EE4:
    ctx->pc = 0x7F219EE4u;
    // 7F219EE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219EE8:
    ctx->pc = 0x7F219EE8u;
    // 7F219EE8: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219EECu;
            goto label_7F219FEC;
    }

label_7F219EEC:
    ctx->pc = 0x7F219EECu;
    ctx->downcount -= 49;
    // 7F219EEC: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219EF0:
    ctx->pc = 0x7F219EF0u;
    // 7F219EF0: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F219EF4:
    ctx->pc = 0x7F219EF4u;
    // 7F219EF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219EF8:
    ctx->pc = 0x7F219EF8u;
    // 7F219EF8: subfic  r4, r4, 448
    {
        u64 res = (u64)(u32)(s32)(448) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F219EFC:
    ctx->pc = 0x7F219EFCu;
    // 7F219EFC: mulli   r4, r4, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)7168);

label_7F219F00:
    ctx->pc = 0x7F219F00u;
    // 7F219F00: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F219F04:
    ctx->pc = 0x7F219F04u;
    // 7F219F04: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F219F08:
    ctx->pc = 0x7F219F08u;
    // 7F219F08: bl      0x7F21A014
    {
            ctx->lr = 0x7F219F0Cu;
            goto label_7F21A014;
    }

label_7F219F0C:
    ctx->pc = 0x7F219F0Cu;
    ctx->downcount -= 5;
    // 7F219F0C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F219F10:
    ctx->pc = 0x7F219F10u;
    // 7F219F10: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F219F14:
    ctx->pc = 0x7F219F14u;
    // 7F219F14: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219F18:
    ctx->pc = 0x7F219F18u;
    // 7F219F18: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F219F1C:
    ctx->pc = 0x7F219F1Cu;
    // 7F219F1C: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219F20u;
            goto label_7F219FFC;
    }

label_7F219F20:
    ctx->pc = 0x7F219F20u;
    ctx->downcount -= 3;
    // 7F219F20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219F24:
    ctx->pc = 0x7F219F24u;
    // 7F219F24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219F28:
    ctx->pc = 0x7F219F28u;
    // 7F219F28: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219F2Cu;
            goto label_7F219FEC;
    }

label_7F219F2C:
    ctx->pc = 0x7F219F2Cu;
    ctx->downcount -= 49;
    // 7F219F2C: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F219F30:
    ctx->pc = 0x7F219F30u;
    // 7F219F30: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F219F34:
    ctx->pc = 0x7F219F34u;
    // 7F219F34: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F219F38:
    ctx->pc = 0x7F219F38u;
    // 7F219F38: subfic  r4, r4, 448
    {
        u64 res = (u64)(u32)(s32)(448) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F219F3C:
    ctx->pc = 0x7F219F3Cu;
    // 7F219F3C: mulli   r4, r4, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)7168);

label_7F219F40:
    ctx->pc = 0x7F219F40u;
    // 7F219F40: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F219F44:
    ctx->pc = 0x7F219F44u;
    // 7F219F44: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F219F48:
    ctx->pc = 0x7F219F48u;
    // 7F219F48: bl      0x7F21A014
    {
            ctx->lr = 0x7F219F4Cu;
            goto label_7F21A014;
    }

label_7F219F4C:
    ctx->pc = 0x7F219F4Cu;
    ctx->downcount -= 5;
    // 7F219F4C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F219F50:
    ctx->pc = 0x7F219F50u;
    // 7F219F50: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F219F54:
    ctx->pc = 0x7F219F54u;
    // 7F219F54: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F219F58:
    ctx->pc = 0x7F219F58u;
    // 7F219F58: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F219F5C:
    ctx->pc = 0x7F219F5Cu;
    // 7F219F5C: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219F60u;
            goto label_7F219FFC;
    }

label_7F219F60:
    ctx->pc = 0x7F219F60u;
    ctx->downcount -= 3;
    // 7F219F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219F64:
    ctx->pc = 0x7F219F64u;
    // 7F219F64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219F68:
    ctx->pc = 0x7F219F68u;
    // 7F219F68: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219F6Cu;
            goto label_7F219FEC;
    }

label_7F219F6C:
    ctx->pc = 0x7F219F6Cu;
    ctx->downcount -= 3;
    // 7F219F6C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F219F70:
    ctx->pc = 0x7F219F70u;
    // 7F219F70: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F219F74:
    ctx->pc = 0x7F219F74u;
    // 7F219F74: bl      0x7F21A014
    {
            ctx->lr = 0x7F219F78u;
            goto label_7F21A014;
    }

label_7F219F78:
    ctx->pc = 0x7F219F78u;
    ctx->downcount -= 5;
    // 7F219F78: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219F7C:
    ctx->pc = 0x7F219F7Cu;
    // 7F219F7C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219F80:
    ctx->pc = 0x7F219F80u;
    // 7F219F80: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219F84:
    ctx->pc = 0x7F219F84u;
    // 7F219F84: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219F88:
    ctx->pc = 0x7F219F88u;
    // 7F219F88: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219F8Cu;
            goto label_7F219FFC;
    }

label_7F219F8C:
    ctx->pc = 0x7F219F8Cu;
    ctx->downcount -= 3;
    // 7F219F8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219F90:
    ctx->pc = 0x7F219F90u;
    // 7F219F90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219F94:
    ctx->pc = 0x7F219F94u;
    // 7F219F94: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219F98u;
            goto label_7F219FEC;
    }

label_7F219F98:
    ctx->pc = 0x7F219F98u;
    ctx->downcount -= 3;
    // 7F219F98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219F9C:
    ctx->pc = 0x7F219F9Cu;
    // 7F219F9C: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F219FA0:
    ctx->pc = 0x7F219FA0u;
    // 7F219FA0: bl      0x7F21A014
    {
            ctx->lr = 0x7F219FA4u;
            goto label_7F21A014;
    }

label_7F219FA4:
    ctx->pc = 0x7F219FA4u;
    ctx->downcount -= 5;
    // 7F219FA4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F219FA8:
    ctx->pc = 0x7F219FA8u;
    // 7F219FA8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F219FAC:
    ctx->pc = 0x7F219FACu;
    // 7F219FAC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F219FB0:
    ctx->pc = 0x7F219FB0u;
    // 7F219FB0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F219FB4:
    ctx->pc = 0x7F219FB4u;
    // 7F219FB4: bl      0x7F219FFC
    {
            ctx->lr = 0x7F219FB8u;
            goto label_7F219FFC;
    }

label_7F219FB8:
    ctx->pc = 0x7F219FB8u;
    ctx->downcount -= 3;
    // 7F219FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F219FBC:
    ctx->pc = 0x7F219FBCu;
    // 7F219FBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F219FC0:
    ctx->pc = 0x7F219FC0u;
    // 7F219FC0: bl      0x7F219FEC
    {
            ctx->lr = 0x7F219FC4u;
            goto label_7F219FEC;
    }

label_7F219FC4:
    ctx->pc = 0x7F219FC4u;
    ctx->downcount -= 1;
    // 7F219FC4: bl      0x7F219FE8
    {
            ctx->lr = 0x7F219FC8u;
            goto label_7F219FE8;
    }

label_7F219FC8:
    ctx->pc = 0x7F219FC8u;
    ctx->downcount -= 3;
    // 7F219FC8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F219FCC:
    ctx->pc = 0x7F219FCCu;
    // 7F219FCC: addi    r3, r30, 92
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(92);

label_7F219FD0:
    ctx->pc = 0x7F219FD0u;
    // 7F219FD0: bl      0x7F2EA688
    {
            ctx->lr = 0x7F219FD4u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F219FD4:
    ctx->pc = 0x7F219FD4u;
    ctx->downcount -= 16;
    // 7F219FD4: lmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F219FD8:
    ctx->pc = 0x7F219FD8u;
    // 7F219FD8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F219FDC:
    ctx->pc = 0x7F219FDCu;
    // 7F219FDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F219FE0:
    ctx->pc = 0x7F219FE0u;
    // 7F219FE0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F219FE4:
    ctx->pc = 0x7F219FE4u;
    // 7F219FE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219FE8:
    ctx->pc = 0x7F219FE8u;
    ctx->downcount -= 1;
    // 7F219FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219FEC:
    ctx->pc = 0x7F219FECu;
    ctx->downcount -= 4;
    // 7F219FEC: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F219FF0:
    ctx->pc = 0x7F219FF0u;
    // 7F219FF0: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F219FF4:
    ctx->pc = 0x7F219FF4u;
    // 7F219FF4: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F219FF8:
    ctx->pc = 0x7F219FF8u;
    // 7F219FF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F219FFC:
    ctx->pc = 0x7F219FFCu;
    ctx->downcount -= 6;
    // 7F219FFC: lis     r7, -13311
    ctx->gpr[7] = ((u32)(s32)(-13311) << 16);

label_7F21A000:
    ctx->pc = 0x7F21A000u;
    // 7F21A000: stb     r3, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F21A004:
    ctx->pc = 0x7F21A004u;
    // 7F21A004: stb     r4, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F21A008:
    ctx->pc = 0x7F21A008u;
    // 7F21A008: stb     r5, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F21A00C:
    ctx->pc = 0x7F21A00Cu;
    // 7F21A00C: stb     r6, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F21A010:
    ctx->pc = 0x7F21A010u;
    // 7F21A010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A014:
    ctx->pc = 0x7F21A014u;
    ctx->downcount -= 4;
    // 7F21A014: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F21A018:
    ctx->pc = 0x7F21A018u;
    // 7F21A018: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21A01C:
    ctx->pc = 0x7F21A01Cu;
    // 7F21A01C: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F21A020:
    ctx->pc = 0x7F21A020u;
    // 7F21A020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A024:
    ctx->pc = 0x7F21A024u;
    ctx->downcount -= 6;
    // 7F21A024: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A028:
    ctx->pc = 0x7F21A028u;
    // 7F21A028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A02C:
    ctx->pc = 0x7F21A02Cu;
    // 7F21A02C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A030:
    ctx->pc = 0x7F21A030u;
    // 7F21A030: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A034:
    ctx->pc = 0x7F21A034u;
    // 7F21A034: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A038:
    ctx->pc = 0x7F21A038u;
    // 7F21A038: bl      0x7F219B64
    {
            ctx->lr = 0x7F21A03Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219B64u;
                return;
            }
            goto label_7F219B64;
    }

label_7F21A03C:
    ctx->pc = 0x7F21A03Cu;
    ctx->downcount -= 2;
    // 7F21A03C: cmpwi   r3, 0
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

label_7F21A040:
    ctx->pc = 0x7F21A040u;
    // 7F21A040: bc    4, 2, 0x7F21A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1A4;
        }
    }

label_7F21A044:
    ctx->pc = 0x7F21A044u;
    ctx->downcount -= 3;
    // 7F21A044: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A048:
    ctx->pc = 0x7F21A048u;
    // 7F21A048: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21A04C:
    ctx->pc = 0x7F21A04Cu;
    // 7F21A04C: bc    12, 2, 0x7F21A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1A4;
        }
    }

label_7F21A050:
    ctx->pc = 0x7F21A050u;
    ctx->downcount -= 2;
    // 7F21A050: cmpwi   r0, 3
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

label_7F21A054:
    ctx->pc = 0x7F21A054u;
    // 7F21A054: bc    12, 2, 0x7F21A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1A4;
        }
    }

label_7F21A058:
    ctx->pc = 0x7F21A058u;
    ctx->downcount -= 2;
    // 7F21A058: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F21A05C:
    ctx->pc = 0x7F21A05Cu;
    // 7F21A05C: bl      0x7F2EA428
    {
            ctx->lr = 0x7F21A060u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F21A060:
    ctx->pc = 0x7F21A060u;
    ctx->downcount -= 3;
    // 7F21A060: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A064:
    ctx->pc = 0x7F21A064u;
    // 7F21A064: cmpwi   r0, -1
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

label_7F21A068:
    ctx->pc = 0x7F21A068u;
    // 7F21A068: bc    4, 2, 0x7F21A120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A120;
        }
    }

label_7F21A06C:
    ctx->pc = 0x7F21A06Cu;
    ctx->downcount -= 7;
    // 7F21A06C: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A070:
    ctx->pc = 0x7F21A070u;
    // 7F21A070: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A074:
    ctx->pc = 0x7F21A074u;
    // 7F21A074: rlwinm r0, r0, 0, 24, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFEFFu;
    }

label_7F21A078:
    ctx->pc = 0x7F21A078u;
    // 7F21A078: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A07C:
    ctx->pc = 0x7F21A07Cu;
    // 7F21A07C: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A080:
    ctx->pc = 0x7F21A080u;
    // 7F21A080: cmpwi   r0, 0
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

label_7F21A084:
    ctx->pc = 0x7F21A084u;
    // 7F21A084: bc    12, 1, 0x7F21A090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A090;
        }
    }

label_7F21A088:
    ctx->pc = 0x7F21A088u;
    ctx->downcount -= 2;
    // 7F21A088: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A08C:
    ctx->pc = 0x7F21A08Cu;
    // 7F21A08C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A090:
    ctx->pc = 0x7F21A090u;
    ctx->downcount -= 4;
    // 7F21A090: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A094:
    ctx->pc = 0x7F21A094u;
    // 7F21A094: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_7F21A098:
    ctx->pc = 0x7F21A098u;
    // 7F21A098: cmpwi   r0, 1
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

label_7F21A09C:
    ctx->pc = 0x7F21A09Cu;
    // 7F21A09C: bc    4, 2, 0x7F21A0D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A0D8;
        }
    }

label_7F21A0A0:
    ctx->pc = 0x7F21A0A0u;
    ctx->downcount -= 30;
    // 7F21A0A0: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A0A4:
    ctx->pc = 0x7F21A0A4u;
    // 7F21A0A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21A0A8:
    ctx->pc = 0x7F21A0A8u;
    // 7F21A0A8: lfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21A0AC:
    ctx->pc = 0x7F21A0ACu;
    // 7F21A0AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21A0B0:
    ctx->pc = 0x7F21A0B0u;
    // 7F21A0B0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21A0B4:
    ctx->pc = 0x7F21A0B4u;
    // 7F21A0B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A0B8:
    ctx->pc = 0x7F21A0B8u;
    // 7F21A0B8: fneg    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21A0B8u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F21A0BC:
    ctx->pc = 0x7F21A0BCu;
    // 7F21A0BC: lfd     f1, 16504(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16504);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21A0C0:
    ctx->pc = 0x7F21A0C0u;
    // 7F21A0C0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A0C4:
    ctx->pc = 0x7F21A0C4u;
    // 7F21A0C4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21A0C8:
    ctx->pc = 0x7F21A0C8u;
    // 7F21A0C8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21A0C8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21A0CC:
    ctx->pc = 0x7F21A0CCu;
    // 7F21A0CC: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21A0CCu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F21A0D0:
    ctx->pc = 0x7F21A0D0u;
    // 7F21A0D0: stfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21A0D4:
    ctx->pc = 0x7F21A0D4u;
    // 7F21A0D4: b       0x7F21A114
    {
            goto label_7F21A114;
    }

label_7F21A0D8:
    ctx->pc = 0x7F21A0D8u;
    ctx->downcount -= 31;
    // 7F21A0D8: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A0DC:
    ctx->pc = 0x7F21A0DCu;
    // 7F21A0DC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21A0E0:
    ctx->pc = 0x7F21A0E0u;
    // 7F21A0E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F21A0E4:
    ctx->pc = 0x7F21A0E4u;
    // 7F21A0E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21A0E8:
    ctx->pc = 0x7F21A0E8u;
    // 7F21A0E8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21A0EC:
    ctx->pc = 0x7F21A0ECu;
    // 7F21A0EC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A0F0:
    ctx->pc = 0x7F21A0F0u;
    // 7F21A0F0: lfs     f3, 16520(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21A0F4:
    ctx->pc = 0x7F21A0F4u;
    // 7F21A0F4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A0F8:
    ctx->pc = 0x7F21A0F8u;
    // 7F21A0F8: lfs     f2, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21A0FC:
    ctx->pc = 0x7F21A0FCu;
    // 7F21A0FC: lfd     f1, 16504(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21A0FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16504);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21A100:
    ctx->pc = 0x7F21A100u;
    // 7F21A100: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21A100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21A104:
    ctx->pc = 0x7F21A104u;
    // 7F21A104: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21A104u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F21A108:
    ctx->pc = 0x7F21A108u;
    // 7F21A108: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21A108u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21A10C:
    ctx->pc = 0x7F21A10Cu;
    // 7F21A10C: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21A10Cu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F21A110:
    ctx->pc = 0x7F21A110u;
    // 7F21A110: stfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21A110u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21A114:
    ctx->pc = 0x7F21A114u;
    ctx->downcount -= 3;
    // 7F21A114: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A118:
    ctx->pc = 0x7F21A118u;
    // 7F21A118: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F21A11C:
    ctx->pc = 0x7F21A11Cu;
    // 7F21A11C: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A120:
    ctx->pc = 0x7F21A120u;
    ctx->downcount -= 2;
    // 7F21A120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A124:
    ctx->pc = 0x7F21A124u;
    // 7F21A124: bl      0x7F219D08
    {
            ctx->lr = 0x7F21A128u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F219D08u;
                return;
            }
            goto label_7F219D08;
    }

label_7F21A128:
    ctx->pc = 0x7F21A128u;
    ctx->downcount -= 6;
    // 7F21A128: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A12C:
    ctx->pc = 0x7F21A12Cu;
    // 7F21A12C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F21A130:
    ctx->pc = 0x7F21A130u;
    // 7F21A130: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A134:
    ctx->pc = 0x7F21A134u;
    // 7F21A134: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A138:
    ctx->pc = 0x7F21A138u;
    // 7F21A138: cmpw    r3, r0
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

label_7F21A13C:
    ctx->pc = 0x7F21A13Cu;
    // 7F21A13C: bc    12, 0, 0x7F21A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1A4;
        }
    }

label_7F21A140:
    ctx->pc = 0x7F21A140u;
    ctx->downcount -= 4;
    // 7F21A140: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A144:
    ctx->pc = 0x7F21A144u;
    // 7F21A144: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_7F21A148:
    ctx->pc = 0x7F21A148u;
    // 7F21A148: cmpwi   r0, 2
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

label_7F21A14C:
    ctx->pc = 0x7F21A14Cu;
    // 7F21A14C: bc    4, 2, 0x7F21A180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A180;
        }
    }

label_7F21A150:
    ctx->pc = 0x7F21A150u;
    ctx->downcount -= 11;
    // 7F21A150: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F21A154:
    ctx->pc = 0x7F21A154u;
    // 7F21A154: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F21A158:
    ctx->pc = 0x7F21A158u;
    // 7F21A158: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A15C:
    ctx->pc = 0x7F21A15Cu;
    // 7F21A15C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F21A160:
    ctx->pc = 0x7F21A160u;
    // 7F21A160: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21A164:
    ctx->pc = 0x7F21A164u;
    // 7F21A164: li      r6, 511
    ctx->gpr[6] = (u32)(s32)(511);

label_7F21A168:
    ctx->pc = 0x7F21A168u;
    // 7F21A168: lwz     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21A16C:
    ctx->pc = 0x7F21A16Cu;
    // 7F21A16C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A170:
    ctx->pc = 0x7F21A170u;
    // 7F21A170: addi    r5, r5, -2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2);

label_7F21A174:
    ctx->pc = 0x7F21A174u;
    // 7F21A174: subfic  r7, r0, 450
    {
        u64 res = (u64)(u32)(s32)(450) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F21A178:
    ctx->pc = 0x7F21A178u;
    // 7F21A178: bl      0x7F3AE554
    {
            ctx->lr = 0x7F21A17Cu;
            ctx->pc = 0x7F3AE554u;
            return;
    }

label_7F21A17C:
    ctx->pc = 0x7F21A17Cu;
    ctx->downcount -= 1;
    // 7F21A17C: b       0x7F21A1A4
    {
            goto label_7F21A1A4;
    }

label_7F21A180:
    ctx->pc = 0x7F21A180u;
    ctx->downcount -= 2;
    // 7F21A180: cmpwi   r0, 1
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

label_7F21A184:
    ctx->pc = 0x7F21A184u;
    // 7F21A184: bc    4, 2, 0x7F21A1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1A4;
        }
    }

label_7F21A188:
    ctx->pc = 0x7F21A188u;
    ctx->downcount -= 7;
    // 7F21A188: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A18C:
    ctx->pc = 0x7F21A18Cu;
    // 7F21A18C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A190:
    ctx->pc = 0x7F21A190u;
    // 7F21A190: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F21A194:
    ctx->pc = 0x7F21A194u;
    // 7F21A194: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A198:
    ctx->pc = 0x7F21A198u;
    // 7F21A198: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A19C:
    ctx->pc = 0x7F21A19Cu;
    // 7F21A19C: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_7F21A1A0:
    ctx->pc = 0x7F21A1A0u;
    // 7F21A1A0: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A1A4:
    ctx->pc = 0x7F21A1A4u;
    ctx->downcount -= 6;
    // 7F21A1A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A1A8:
    ctx->pc = 0x7F21A1A8u;
    // 7F21A1A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21A1AC:
    ctx->pc = 0x7F21A1ACu;
    // 7F21A1AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A1B0:
    ctx->pc = 0x7F21A1B0u;
    // 7F21A1B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21A1B4:
    ctx->pc = 0x7F21A1B4u;
    // 7F21A1B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A1B8:
    ctx->pc = 0x7F21A1B8u;
    ctx->downcount -= 8;
    // 7F21A1B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A1BC:
    ctx->pc = 0x7F21A1BCu;
    // 7F21A1BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A1C0:
    ctx->pc = 0x7F21A1C0u;
    // 7F21A1C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A1C4:
    ctx->pc = 0x7F21A1C4u;
    // 7F21A1C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A1C8:
    ctx->pc = 0x7F21A1C8u;
    // 7F21A1C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A1CC:
    ctx->pc = 0x7F21A1CCu;
    // 7F21A1CC: lwz     r3, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A1D0:
    ctx->pc = 0x7F21A1D0u;
    // 7F21A1D0: cmplwi  r3, 0x0000
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

label_7F21A1D4:
    ctx->pc = 0x7F21A1D4u;
    // 7F21A1D4: bc    12, 2, 0x7F21A1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A1E4;
        }
    }

label_7F21A1D8:
    ctx->pc = 0x7F21A1D8u;
    ctx->downcount -= 1;
    // 7F21A1D8: bl      0x7F3BA300
    {
            ctx->lr = 0x7F21A1DCu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F21A1DC:
    ctx->pc = 0x7F21A1DCu;
    ctx->downcount -= 2;
    // 7F21A1DC: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A1E0:
    ctx->pc = 0x7F21A1E0u;
    // 7F21A1E0: bl      0x7F3BA234
    {
            ctx->lr = 0x7F21A1E4u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F21A1E4:
    ctx->pc = 0x7F21A1E4u;
    ctx->downcount -= 2;
    // 7F21A1E4: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F21A1E8:
    ctx->pc = 0x7F21A1E8u;
    // 7F21A1E8: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F21A1ECu;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F21A1EC:
    ctx->pc = 0x7F21A1ECu;
    ctx->downcount -= 7;
    // 7F21A1EC: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F21A1F0:
    ctx->pc = 0x7F21A1F0u;
    // 7F21A1F0: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F21A1F4:
    ctx->pc = 0x7F21A1F4u;
    // 7F21A1F4: lwz     r4, 928(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(928);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21A1F8:
    ctx->pc = 0x7F21A1F8u;
    // 7F21A1F8: lwz     r5, 932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21A1FC:
    ctx->pc = 0x7F21A1FCu;
    // 7F21A1FC: lwz     r6, 920(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21A200:
    ctx->pc = 0x7F21A200u;
    // 7F21A200: lwz     r7, 924(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(924);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21A204:
    ctx->pc = 0x7F21A204u;
    // 7F21A204: bl      0x7F3AE540
    {
            ctx->lr = 0x7F21A208u;
            ctx->pc = 0x7F3AE540u;
            return;
    }

label_7F21A208:
    ctx->pc = 0x7F21A208u;
    ctx->downcount -= 9;
    // 7F21A208: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F21A20C:
    ctx->pc = 0x7F21A20Cu;
    // 7F21A20C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21A210:
    ctx->pc = 0x7F21A210u;
    // 7F21A210: stw     r0, -10920(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10920);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A214:
    ctx->pc = 0x7F21A214u;
    // 7F21A214: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A218:
    ctx->pc = 0x7F21A218u;
    // 7F21A218: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21A21C:
    ctx->pc = 0x7F21A21Cu;
    // 7F21A21C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A220:
    ctx->pc = 0x7F21A220u;
    // 7F21A220: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A224:
    ctx->pc = 0x7F21A224u;
    // 7F21A224: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A228:
    ctx->pc = 0x7F21A228u;
    ctx->downcount -= 6;
    // 7F21A228: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A22C:
    ctx->pc = 0x7F21A22Cu;
    // 7F21A22C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A230:
    ctx->pc = 0x7F21A230u;
    // 7F21A230: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A234:
    ctx->pc = 0x7F21A234u;
    // 7F21A234: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A238:
    ctx->pc = 0x7F21A238u;
    // 7F21A238: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A23C:
    ctx->pc = 0x7F21A23Cu;
    // 7F21A23C: b       0x7F21A2AC
    {
            goto label_7F21A2AC;
    }

label_7F21A240:
    ctx->downcount -= 2;
    // 7F21A240: cmpwi   r3, 102
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(102);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A244:
    // 7F21A244: bc    12, 2, 0x7F21A2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A2A4;
        }
    }

label_7F21A248:
    ctx->downcount -= 1;
    // 7F21A248: bc    4, 0, 0x7F21A258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A258;
        }
    }

label_7F21A24C:
    ctx->downcount -= 2;
    // 7F21A24C: cmpwi   r3, 98
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(98);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A250:
    // 7F21A250: bc    12, 2, 0x7F21A284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A284;
        }
    }

label_7F21A254:
    ctx->downcount -= 1;
    // 7F21A254: b       0x7F21A2AC
    {
            goto label_7F21A2AC;
    }

label_7F21A258:
    ctx->downcount -= 2;
    // 7F21A258: cmpwi   r3, 116
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

label_7F21A25C:
    // 7F21A25C: bc    12, 2, 0x7F21A264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A264;
        }
    }

label_7F21A260:
    ctx->downcount -= 1;
    // 7F21A260: b       0x7F21A2AC
    {
            goto label_7F21A2AC;
    }

label_7F21A264:
    ctx->downcount -= 1;
    // 7F21A264: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21A268u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21A268:
    ctx->pc = 0x7F21A268u;
    ctx->downcount -= 48;
    // 7F21A268: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A26C:
    // 7F21A26C: li      r0, 224
    ctx->gpr[0] = (u32)(s32)(224);

label_7F21A270:
    ctx->pc = 0x7F21A270u;
    // 7F21A270: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A274:
    // 7F21A274: mulli   r3, r3, 448
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)448);

label_7F21A278:
    // 7F21A278: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F21A27C:
    ctx->pc = 0x7F21A27Cu;
    // 7F21A27C: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A280:
    // 7F21A280: b       0x7F21A2AC
    {
            goto label_7F21A2AC;
    }

label_7F21A284:
    ctx->downcount -= 1;
    // 7F21A284: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21A288u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21A288:
    ctx->pc = 0x7F21A288u;
    ctx->downcount -= 48;
    // 7F21A288: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A28C:
    // 7F21A28C: li      r0, 224
    ctx->gpr[0] = (u32)(s32)(224);

label_7F21A290:
    ctx->pc = 0x7F21A290u;
    // 7F21A290: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A294:
    // 7F21A294: mulli   r3, r3, 448
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)448);

label_7F21A298:
    // 7F21A298: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F21A29C:
    ctx->pc = 0x7F21A29Cu;
    // 7F21A29C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A2A0:
    // 7F21A2A0: b       0x7F21A2AC
    {
            goto label_7F21A2AC;
    }

label_7F21A2A4:
    ctx->downcount -= 1;
    // 7F21A2A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21A2A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21A2A8:
    ctx->pc = 0x7F21A2A8u;
    ctx->downcount -= 1;
    // 7F21A2A8: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A2AC:
    ctx->downcount -= 1;
    // 7F21A2AC: bl      0x7F3C66C8
    {
            ctx->lr = 0x7F21A2B0u;
            ctx->pc = 0x7F3C66C8u;
            return;
    }

label_7F21A2B0:
    ctx->downcount -= 2;
    // 7F21A2B0: cmpwi   r3, 0
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

label_7F21A2B4:
    // 7F21A2B4: bc    4, 2, 0x7F21A240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A240u;
                return;
            }
            goto label_7F21A240;
        }
    }

label_7F21A2B8:
    ctx->pc = 0x7F21A2B8u;
    ctx->downcount -= 6;
    // 7F21A2B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A2BC:
    ctx->pc = 0x7F21A2BCu;
    // 7F21A2BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21A2C0:
    ctx->pc = 0x7F21A2C0u;
    // 7F21A2C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A2C4:
    ctx->pc = 0x7F21A2C4u;
    // 7F21A2C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A2C8:
    ctx->pc = 0x7F21A2C8u;
    // 7F21A2C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A2CC:
    ctx->pc = 0x7F21A2CCu;
    ctx->downcount -= 5;
    // 7F21A2CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A2D0:
    ctx->pc = 0x7F21A2D0u;
    // 7F21A2D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A2D4:
    ctx->pc = 0x7F21A2D4u;
    // 7F21A2D4: cmplwi  r3, 0x0000
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

label_7F21A2D8:
    ctx->pc = 0x7F21A2D8u;
    // 7F21A2D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A2DC:
    ctx->pc = 0x7F21A2DCu;
    // 7F21A2DC: bc    12, 2, 0x7F21A2E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A2E8;
        }
    }

label_7F21A2E0:
    ctx->pc = 0x7F21A2E0u;
    ctx->downcount -= 2;
    // 7F21A2E0: addi    r3, r3, 92
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(92);

label_7F21A2E4:
    ctx->pc = 0x7F21A2E4u;
    // 7F21A2E4: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F21A2E8u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F21A2E8:
    ctx->pc = 0x7F21A2E8u;
    ctx->downcount -= 5;
    // 7F21A2E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A2EC:
    ctx->pc = 0x7F21A2ECu;
    // 7F21A2EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A2F0:
    ctx->pc = 0x7F21A2F0u;
    // 7F21A2F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A2F4:
    ctx->pc = 0x7F21A2F4u;
    // 7F21A2F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A2F8:
    ctx->pc = 0x7F21A2F8u;
    ctx->downcount -= 28;
    // 7F21A2F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A2FC:
    ctx->pc = 0x7F21A2FCu;
    // 7F21A2FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A300:
    ctx->pc = 0x7F21A300u;
    // 7F21A300: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F21A304:
    ctx->pc = 0x7F21A304u;
    // 7F21A304: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A308:
    ctx->pc = 0x7F21A308u;
    // 7F21A308: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21A30C:
    ctx->pc = 0x7F21A30Cu;
    // 7F21A30C: lfs     f0, 16496(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21A30Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21A310:
    ctx->pc = 0x7F21A310u;
    // 7F21A310: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21A314:
    ctx->pc = 0x7F21A314u;
    // 7F21A314: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A318:
    ctx->pc = 0x7F21A318u;
    // 7F21A318: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21A31C:
    ctx->pc = 0x7F21A31Cu;
    // 7F21A31C: stw     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21A320:
    ctx->pc = 0x7F21A320u;
    // 7F21A320: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A324:
    ctx->pc = 0x7F21A324u;
    // 7F21A324: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A328:
    ctx->pc = 0x7F21A328u;
    // 7F21A328: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A32C:
    ctx->pc = 0x7F21A32Cu;
    // 7F21A32C: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A330:
    ctx->pc = 0x7F21A330u;
    // 7F21A330: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A334:
    ctx->pc = 0x7F21A334u;
    // 7F21A334: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A338:
    ctx->pc = 0x7F21A338u;
    // 7F21A338: stfs     f0, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21A338u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21A33C:
    ctx->pc = 0x7F21A33Cu;
    // 7F21A33C: bl      0x7F21A228
    {
            ctx->lr = 0x7F21A340u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A228u;
                return;
            }
            goto label_7F21A228;
    }

label_7F21A340:
    ctx->pc = 0x7F21A340u;
    ctx->downcount -= 4;
    // 7F21A340: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F21A344:
    ctx->pc = 0x7F21A344u;
    // 7F21A344: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F21A348:
    ctx->pc = 0x7F21A348u;
    // 7F21A348: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F21A34C:
    ctx->pc = 0x7F21A34Cu;
    // 7F21A34C: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F21A350u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F21A350:
    ctx->pc = 0x7F21A350u;
    ctx->downcount -= 3;
    // 7F21A350: or.   r31, r3, r3
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

label_7F21A354:
    ctx->pc = 0x7F21A354u;
    // 7F21A354: stw     r31, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A358:
    ctx->pc = 0x7F21A358u;
    // 7F21A358: bc    4, 2, 0x7F21A364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A364;
        }
    }

label_7F21A35C:
    ctx->pc = 0x7F21A35Cu;
    ctx->downcount -= 2;
    // 7F21A35C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21A360:
    ctx->pc = 0x7F21A360u;
    // 7F21A360: b       0x7F21A39C
    {
            goto label_7F21A39C;
    }

label_7F21A364:
    ctx->pc = 0x7F21A364u;
    ctx->downcount -= 5;
    // 7F21A364: lwz     r4, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21A368:
    ctx->pc = 0x7F21A368u;
    // 7F21A368: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A36C:
    ctx->pc = 0x7F21A36Cu;
    // 7F21A36C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F21A370:
    ctx->pc = 0x7F21A370u;
    // 7F21A370: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A374:
    ctx->pc = 0x7F21A374u;
    // 7F21A374: bl      0x7F3BA260
    {
            ctx->lr = 0x7F21A378u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F21A378:
    ctx->pc = 0x7F21A378u;
    ctx->downcount -= 5;
    // 7F21A378: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21A37C:
    ctx->pc = 0x7F21A37Cu;
    // 7F21A37C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A380:
    ctx->pc = 0x7F21A380u;
    // 7F21A380: addi    r4, r4, -23860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23860);

label_7F21A384:
    ctx->pc = 0x7F21A384u;
    // 7F21A384: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21A388:
    ctx->pc = 0x7F21A388u;
    // 7F21A388: bl      0x7F3BA254
    {
            ctx->lr = 0x7F21A38Cu;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F21A38C:
    ctx->pc = 0x7F21A38Cu;
    ctx->downcount -= 3;
    // 7F21A38C: addi    r3, r30, 92
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(92);

label_7F21A390:
    ctx->pc = 0x7F21A390u;
    // 7F21A390: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F21A394:
    ctx->pc = 0x7F21A394u;
    // 7F21A394: bl      0x7F2EA328
    {
            ctx->lr = 0x7F21A398u;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F21A398:
    ctx->pc = 0x7F21A398u;
    ctx->downcount -= 1;
    // 7F21A398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A39C:
    ctx->pc = 0x7F21A39Cu;
    ctx->downcount -= 16;
    // 7F21A39C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21A3A0:
    ctx->pc = 0x7F21A3A0u;
    // 7F21A3A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A3A4:
    ctx->pc = 0x7F21A3A4u;
    // 7F21A3A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A3A8:
    ctx->pc = 0x7F21A3A8u;
    // 7F21A3A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A3AC:
    ctx->pc = 0x7F21A3ACu;
    // 7F21A3AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A3B0:
    ctx->pc = 0x7F21A3B0u;
    ctx->downcount -= 20;
    // 7F21A3B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A3B4:
    ctx->pc = 0x7F21A3B4u;
    // 7F21A3B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A3B8:
    ctx->pc = 0x7F21A3B8u;
    // 7F21A3B8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F21A3BC:
    ctx->pc = 0x7F21A3BCu;
    // 7F21A3BC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A3C0:
    ctx->pc = 0x7F21A3C0u;
    // 7F21A3C0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21A3C4:
    ctx->pc = 0x7F21A3C4u;
    // 7F21A3C4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A3C8:
    ctx->pc = 0x7F21A3C8u;
    // 7F21A3C8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21A3CC:
    ctx->pc = 0x7F21A3CCu;
    // 7F21A3CC: lwz     r0, -10920(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10920);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A3D0:
    ctx->pc = 0x7F21A3D0u;
    // 7F21A3D0: cmplwi  r0, 0x0000
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

label_7F21A3D4:
    ctx->pc = 0x7F21A3D4u;
    // 7F21A3D4: bc    12, 2, 0x7F21A3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A3E0;
        }
    }

label_7F21A3D8:
    ctx->pc = 0x7F21A3D8u;
    ctx->downcount -= 2;
    // 7F21A3D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F21A3DC:
    ctx->pc = 0x7F21A3DCu;
    // 7F21A3DC: b       0x7F21A46C
    {
            goto label_7F21A46C;
    }

label_7F21A3E0:
    ctx->pc = 0x7F21A3E0u;
    ctx->downcount -= 5;
    // 7F21A3E0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F21A3E4:
    ctx->pc = 0x7F21A3E4u;
    // 7F21A3E4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F21A3E8:
    ctx->pc = 0x7F21A3E8u;
    // 7F21A3E8: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F21A3EC:
    ctx->pc = 0x7F21A3ECu;
    // 7F21A3EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21A3F0:
    ctx->pc = 0x7F21A3F0u;
    // 7F21A3F0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F21A3F4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F21A3F4:
    ctx->pc = 0x7F21A3F4u;
    ctx->downcount -= 2;
    // 7F21A3F4: or.   r31, r3, r3
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

label_7F21A3F8:
    ctx->pc = 0x7F21A3F8u;
    // 7F21A3F8: bc    12, 2, 0x7F21A468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A468;
        }
    }

label_7F21A3FC:
    ctx->pc = 0x7F21A3FCu;
    ctx->downcount -= 5;
    // 7F21A3FC: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21A400:
    ctx->pc = 0x7F21A400u;
    // 7F21A400: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F21A404:
    ctx->pc = 0x7F21A404u;
    // 7F21A404: addi    r4, r4, -24540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24540);

label_7F21A408:
    ctx->pc = 0x7F21A408u;
    // 7F21A408: addi    r5, r5, -24136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24136);

label_7F21A40C:
    ctx->pc = 0x7F21A40Cu;
    // 7F21A40C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F21A410u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F21A410:
    ctx->pc = 0x7F21A410u;
    ctx->downcount -= 14;
    // 7F21A410: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A414:
    ctx->pc = 0x7F21A414u;
    // 7F21A414: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F21A418:
    ctx->pc = 0x7F21A418u;
    // 7F21A418: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21A41C:
    ctx->pc = 0x7F21A41Cu;
    // 7F21A41C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A420:
    ctx->pc = 0x7F21A420u;
    // 7F21A420: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F21A424:
    ctx->pc = 0x7F21A424u;
    // 7F21A424: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F21A428:
    ctx->pc = 0x7F21A428u;
    // 7F21A428: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21A42C:
    ctx->pc = 0x7F21A42Cu;
    // 7F21A42C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21A430:
    ctx->pc = 0x7F21A430u;
    // 7F21A430: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21A434:
    ctx->pc = 0x7F21A434u;
    // 7F21A434: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21A438:
    ctx->pc = 0x7F21A438u;
    // 7F21A438: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21A43C:
    ctx->pc = 0x7F21A43Cu;
    // 7F21A43C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21A440:
    ctx->pc = 0x7F21A440u;
    // 7F21A440: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A444:
    ctx->pc = 0x7F21A444u;
    // 7F21A444: bl      0x7F21A2F8
    {
            ctx->lr = 0x7F21A448u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A2F8u;
                return;
            }
            goto label_7F21A2F8;
    }

label_7F21A448:
    ctx->pc = 0x7F21A448u;
    ctx->downcount -= 2;
    // 7F21A448: cmpwi   r3, 0
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

label_7F21A44C:
    ctx->pc = 0x7F21A44Cu;
    // 7F21A44C: bc    4, 0, 0x7F21A460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A460;
        }
    }

label_7F21A450:
    ctx->pc = 0x7F21A450u;
    ctx->downcount -= 2;
    // 7F21A450: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A454:
    ctx->pc = 0x7F21A454u;
    // 7F21A454: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21A458u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21A458:
    ctx->pc = 0x7F21A458u;
    ctx->downcount -= 2;
    // 7F21A458: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A45C:
    ctx->pc = 0x7F21A45Cu;
    // 7F21A45C: b       0x7F21A46C
    {
            goto label_7F21A46C;
    }

label_7F21A460:
    ctx->pc = 0x7F21A460u;
    ctx->downcount -= 2;
    // 7F21A460: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F21A464:
    ctx->pc = 0x7F21A464u;
    // 7F21A464: stw     r31, -10920(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10920);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A468:
    ctx->pc = 0x7F21A468u;
    ctx->downcount -= 1;
    // 7F21A468: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A46C:
    ctx->pc = 0x7F21A46Cu;
    ctx->downcount -= 16;
    // 7F21A46C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21A470:
    ctx->pc = 0x7F21A470u;
    // 7F21A470: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A474:
    ctx->pc = 0x7F21A474u;
    // 7F21A474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A478:
    ctx->pc = 0x7F21A478u;
    // 7F21A478: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21A47C:
    ctx->pc = 0x7F21A47Cu;
    // 7F21A47C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A480:
    ctx->pc = 0x7F21A480u;
    ctx->downcount -= 7;
    // 7F21A480: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A484:
    ctx->pc = 0x7F21A484u;
    // 7F21A484: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A488:
    ctx->pc = 0x7F21A488u;
    // 7F21A488: cmpwi   r3, 2
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

label_7F21A48C:
    ctx->pc = 0x7F21A48Cu;
    // 7F21A48C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A490:
    ctx->pc = 0x7F21A490u;
    // 7F21A490: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21A494:
    ctx->pc = 0x7F21A494u;
    // 7F21A494: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21A498:
    ctx->pc = 0x7F21A498u;
    // 7F21A498: bc    12, 2, 0x7F21A4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A4D0;
        }
    }

label_7F21A49C:
    ctx->pc = 0x7F21A49Cu;
    ctx->downcount -= 1;
    // 7F21A49C: bc    4, 0, 0x7F21A4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A4B0;
        }
    }

label_7F21A4A0:
    ctx->pc = 0x7F21A4A0u;
    ctx->downcount -= 2;
    // 7F21A4A0: cmpwi   r3, 0
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

label_7F21A4A4:
    ctx->pc = 0x7F21A4A4u;
    // 7F21A4A4: bc    12, 2, 0x7F21A504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A504;
        }
    }

label_7F21A4A8:
    ctx->pc = 0x7F21A4A8u;
    ctx->downcount -= 1;
    // 7F21A4A8: bc    4, 0, 0x7F21A4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A4C0;
        }
    }

label_7F21A4AC:
    ctx->pc = 0x7F21A4ACu;
    ctx->downcount -= 1;
    // 7F21A4AC: b       0x7F21A504
    {
            goto label_7F21A504;
    }

label_7F21A4B0:
    ctx->pc = 0x7F21A4B0u;
    ctx->downcount -= 2;
    // 7F21A4B0: cmpwi   r3, 4
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

label_7F21A4B4:
    ctx->pc = 0x7F21A4B4u;
    // 7F21A4B4: bc    12, 2, 0x7F21A4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A4F4;
        }
    }

label_7F21A4B8:
    ctx->pc = 0x7F21A4B8u;
    ctx->downcount -= 1;
    // 7F21A4B8: bc    4, 0, 0x7F21A504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A504;
        }
    }

label_7F21A4BC:
    ctx->pc = 0x7F21A4BCu;
    ctx->downcount -= 1;
    // 7F21A4BC: b       0x7F21A4E0
    {
            goto label_7F21A4E0;
    }

label_7F21A4C0:
    ctx->pc = 0x7F21A4C0u;
    ctx->downcount -= 3;
    // 7F21A4C0: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21A4C4:
    ctx->pc = 0x7F21A4C4u;
    // 7F21A4C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A4C8:
    ctx->pc = 0x7F21A4C8u;
    // 7F21A4C8: bl      0x7F25A324
    {
            ctx->lr = 0x7F21A4CCu;
            ctx->pc = 0x7F25A324u;
            return;
    }

label_7F21A4CC:
    ctx->pc = 0x7F21A4CCu;
    ctx->downcount -= 1;
    // 7F21A4CC: b       0x7F21A504
    {
            goto label_7F21A504;
    }

label_7F21A4D0:
    ctx->pc = 0x7F21A4D0u;
    ctx->downcount -= 3;
    // 7F21A4D0: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21A4D4:
    ctx->pc = 0x7F21A4D4u;
    // 7F21A4D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A4D8:
    ctx->pc = 0x7F21A4D8u;
    // 7F21A4D8: bl      0x7F25A354
    {
            ctx->lr = 0x7F21A4DCu;
            ctx->pc = 0x7F25A354u;
            return;
    }

label_7F21A4DC:
    ctx->pc = 0x7F21A4DCu;
    ctx->downcount -= 1;
    // 7F21A4DC: b       0x7F21A504
    {
            goto label_7F21A504;
    }

label_7F21A4E0:
    ctx->pc = 0x7F21A4E0u;
    ctx->downcount -= 4;
    // 7F21A4E0: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21A4E4:
    ctx->pc = 0x7F21A4E4u;
    // 7F21A4E4: ori     r4, r4, 0x0040
    ctx->gpr[4] = ctx->gpr[4] | 0x0040u;

label_7F21A4E8:
    ctx->pc = 0x7F21A4E8u;
    // 7F21A4E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A4EC:
    ctx->pc = 0x7F21A4ECu;
    // 7F21A4EC: bl      0x7F25A354
    {
            ctx->lr = 0x7F21A4F0u;
            ctx->pc = 0x7F25A354u;
            return;
    }

label_7F21A4F0:
    ctx->pc = 0x7F21A4F0u;
    ctx->downcount -= 1;
    // 7F21A4F0: b       0x7F21A504
    {
            goto label_7F21A504;
    }

label_7F21A4F4:
    ctx->pc = 0x7F21A4F4u;
    ctx->downcount -= 4;
    // 7F21A4F4: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21A4F8:
    ctx->pc = 0x7F21A4F8u;
    // 7F21A4F8: ori     r4, r4, 0x0040
    ctx->gpr[4] = ctx->gpr[4] | 0x0040u;

label_7F21A4FC:
    ctx->pc = 0x7F21A4FCu;
    // 7F21A4FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A500:
    ctx->pc = 0x7F21A500u;
    // 7F21A500: bl      0x7F25A324
    {
            ctx->lr = 0x7F21A504u;
            ctx->pc = 0x7F25A324u;
            return;
    }

label_7F21A504:
    ctx->pc = 0x7F21A504u;
    ctx->downcount -= 5;
    // 7F21A504: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A508:
    ctx->pc = 0x7F21A508u;
    // 7F21A508: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A50C:
    ctx->pc = 0x7F21A50Cu;
    // 7F21A50C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A510:
    ctx->pc = 0x7F21A510u;
    // 7F21A510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A514:
    ctx->pc = 0x7F21A514u;
    ctx->downcount -= 1;
    // 7F21A514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A518:
    ctx->pc = 0x7F21A518u;
    ctx->downcount -= 7;
    // 7F21A518: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A51C:
    ctx->pc = 0x7F21A51Cu;
    // 7F21A51C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A520:
    ctx->pc = 0x7F21A520u;
    // 7F21A520: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A524:
    ctx->pc = 0x7F21A524u;
    // 7F21A524: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21A528:
    ctx->pc = 0x7F21A528u;
    // 7F21A528: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A52C:
    ctx->pc = 0x7F21A52Cu;
    // 7F21A52C: lwz     r3, 476(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A530:
    ctx->pc = 0x7F21A530u;
    // 7F21A530: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F21A534u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F21A534:
    ctx->pc = 0x7F21A534u;
    ctx->downcount -= 2;
    // 7F21A534: lwz     r3, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A538:
    ctx->pc = 0x7F21A538u;
    // 7F21A538: bl      0x7F3B0820
    {
            ctx->lr = 0x7F21A53Cu;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F21A53C:
    ctx->pc = 0x7F21A53Cu;
    ctx->downcount -= 2;
    // 7F21A53C: lwz     r3, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A540:
    ctx->pc = 0x7F21A540u;
    // 7F21A540: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F21A544u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F21A544:
    ctx->pc = 0x7F21A544u;
    ctx->downcount -= 2;
    // 7F21A544: lwz     r3, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A548:
    ctx->pc = 0x7F21A548u;
    // 7F21A548: bl      0x7F3B0820
    {
            ctx->lr = 0x7F21A54Cu;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F21A54C:
    ctx->pc = 0x7F21A54Cu;
    ctx->downcount -= 6;
    // 7F21A54C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A550:
    ctx->pc = 0x7F21A550u;
    // 7F21A550: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21A554:
    ctx->pc = 0x7F21A554u;
    // 7F21A554: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A558:
    ctx->pc = 0x7F21A558u;
    // 7F21A558: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21A55C:
    ctx->pc = 0x7F21A55Cu;
    // 7F21A55C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A560:
    ctx->pc = 0x7F21A560u;
    ctx->downcount -= 19;
    // 7F21A560: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A564:
    ctx->pc = 0x7F21A564u;
    // 7F21A564: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A568:
    ctx->pc = 0x7F21A568u;
    // 7F21A568: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A56C:
    ctx->pc = 0x7F21A56Cu;
    // 7F21A56C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21A570:
    ctx->pc = 0x7F21A570u;
    // 7F21A570: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21A574:
    ctx->pc = 0x7F21A574u;
    // 7F21A574: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21A578:
    ctx->pc = 0x7F21A578u;
    // 7F21A578: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F21A57C:
    ctx->pc = 0x7F21A57Cu;
    // 7F21A57C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F21A580:
    ctx->pc = 0x7F21A580u;
    // 7F21A580: bl      0x7F3C8470
    {
            ctx->lr = 0x7F21A584u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F21A584:
    ctx->pc = 0x7F21A584u;
    ctx->downcount -= 1;
    // 7F21A584: bl      0x7F3C8480
    {
            ctx->lr = 0x7F21A588u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F21A588:
    ctx->pc = 0x7F21A588u;
    ctx->downcount -= 2;
    // 7F21A588: or.   r31, r3, r3
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

label_7F21A58C:
    ctx->pc = 0x7F21A58Cu;
    // 7F21A58C: bc    4, 2, 0x7F21A598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A598;
        }
    }

label_7F21A590:
    ctx->pc = 0x7F21A590u;
    ctx->downcount -= 2;
    // 7F21A590: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A594:
    ctx->pc = 0x7F21A594u;
    // 7F21A594: b       0x7F21A604
    {
            goto label_7F21A604;
    }

label_7F21A598:
    ctx->pc = 0x7F21A598u;
    ctx->downcount -= 3;
    // 7F21A598: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F21A59C:
    ctx->pc = 0x7F21A59Cu;
    // 7F21A59C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21A5A0:
    ctx->pc = 0x7F21A5A0u;
    // 7F21A5A0: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F21A5A4u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F21A5A4:
    ctx->pc = 0x7F21A5A4u;
    ctx->downcount -= 2;
    // 7F21A5A4: or.   r30, r3, r3
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

label_7F21A5A8:
    ctx->pc = 0x7F21A5A8u;
    // 7F21A5A8: bc    4, 2, 0x7F21A5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A5B4;
        }
    }

label_7F21A5AC:
    ctx->pc = 0x7F21A5ACu;
    ctx->downcount -= 2;
    // 7F21A5AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A5B0:
    ctx->pc = 0x7F21A5B0u;
    // 7F21A5B0: b       0x7F21A604
    {
            goto label_7F21A604;
    }

label_7F21A5B4:
    ctx->pc = 0x7F21A5B4u;
    ctx->downcount -= 1;
    // 7F21A5B4: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F21A5B8u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F21A5B8:
    ctx->pc = 0x7F21A5B8u;
    ctx->downcount -= 2;
    // 7F21A5B8: cmpwi   r3, 0
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

label_7F21A5BC:
    ctx->pc = 0x7F21A5BCu;
    // 7F21A5BC: bc    4, 0, 0x7F21A5C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A5C8;
        }
    }

label_7F21A5C0:
    ctx->pc = 0x7F21A5C0u;
    ctx->downcount -= 2;
    // 7F21A5C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A5C4:
    ctx->pc = 0x7F21A5C4u;
    // 7F21A5C4: b       0x7F21A604
    {
            goto label_7F21A604;
    }

label_7F21A5C8:
    ctx->pc = 0x7F21A5C8u;
    ctx->downcount -= 2;
    // 7F21A5C8: cmplwi  r27, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A5CC:
    ctx->pc = 0x7F21A5CCu;
    // 7F21A5CC: bc    12, 2, 0x7F21A5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A5D4;
        }
    }

label_7F21A5D0:
    ctx->pc = 0x7F21A5D0u;
    ctx->downcount -= 1;
    // 7F21A5D0: stw     r27, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F21A5D4:
    ctx->pc = 0x7F21A5D4u;
    ctx->downcount -= 2;
    // 7F21A5D4: cmplwi  r28, 0x0000
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

label_7F21A5D8:
    ctx->pc = 0x7F21A5D8u;
    // 7F21A5D8: bc    12, 2, 0x7F21A5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A5E8;
        }
    }

label_7F21A5DC:
    ctx->pc = 0x7F21A5DCu;
    ctx->downcount -= 3;
    // 7F21A5DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21A5E0:
    ctx->pc = 0x7F21A5E0u;
    // 7F21A5E0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F21A5E4:
    ctx->pc = 0x7F21A5E4u;
    // 7F21A5E4: bl      0x7F3BC518
    {
            ctx->lr = 0x7F21A5E8u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F21A5E8:
    ctx->pc = 0x7F21A5E8u;
    ctx->downcount -= 3;
    // 7F21A5E8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A5EC:
    ctx->pc = 0x7F21A5ECu;
    // 7F21A5EC: cmplwi  r0, 0x0001
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

label_7F21A5F0:
    ctx->pc = 0x7F21A5F0u;
    // 7F21A5F0: bc    4, 1, 0x7F21A600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A600;
        }
    }

label_7F21A5F4:
    ctx->pc = 0x7F21A5F4u;
    ctx->downcount -= 2;
    // 7F21A5F4: cmplwi  r0, 0x0008
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

label_7F21A5F8:
    ctx->pc = 0x7F21A5F8u;
    // 7F21A5F8: bc    4, 0, 0x7F21A600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A600;
        }
    }

label_7F21A5FC:
    ctx->pc = 0x7F21A5FCu;
    ctx->downcount -= 1;
    // 7F21A5FC: stw     r29, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F21A600:
    ctx->pc = 0x7F21A600u;
    ctx->downcount -= 1;
    // 7F21A600: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21A604:
    ctx->pc = 0x7F21A604u;
    ctx->downcount -= 16;
    // 7F21A604: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21A608:
    ctx->pc = 0x7F21A608u;
    // 7F21A608: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A60C:
    ctx->pc = 0x7F21A60Cu;
    // 7F21A60C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A610:
    ctx->pc = 0x7F21A610u;
    // 7F21A610: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21A614:
    ctx->pc = 0x7F21A614u;
    // 7F21A614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A618:
    ctx->pc = 0x7F21A618u;
    ctx->downcount -= 18;
    // 7F21A618: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A61C:
    ctx->pc = 0x7F21A61Cu;
    // 7F21A61C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A620:
    ctx->pc = 0x7F21A620u;
    // 7F21A620: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A624:
    ctx->pc = 0x7F21A624u;
    // 7F21A624: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21A628:
    ctx->pc = 0x7F21A628u;
    // 7F21A628: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21A62C:
    ctx->pc = 0x7F21A62Cu;
    // 7F21A62C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21A630:
    ctx->pc = 0x7F21A630u;
    // 7F21A630: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F21A634:
    ctx->pc = 0x7F21A634u;
    // 7F21A634: bl      0x7F3C8470
    {
            ctx->lr = 0x7F21A638u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F21A638:
    ctx->pc = 0x7F21A638u;
    ctx->downcount -= 1;
    // 7F21A638: bl      0x7F3C8480
    {
            ctx->lr = 0x7F21A63Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F21A63C:
    ctx->pc = 0x7F21A63Cu;
    ctx->downcount -= 2;
    // 7F21A63C: cmplwi  r3, 0x0000
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

label_7F21A640:
    ctx->pc = 0x7F21A640u;
    // 7F21A640: bc    4, 2, 0x7F21A64C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A64C;
        }
    }

label_7F21A644:
    ctx->pc = 0x7F21A644u;
    ctx->downcount -= 2;
    // 7F21A644: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A648:
    ctx->pc = 0x7F21A648u;
    // 7F21A648: b       0x7F21A6A0
    {
            goto label_7F21A6A0;
    }

label_7F21A64C:
    ctx->pc = 0x7F21A64Cu;
    ctx->downcount -= 3;
    // 7F21A64C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F21A650:
    ctx->pc = 0x7F21A650u;
    // 7F21A650: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21A654:
    ctx->pc = 0x7F21A654u;
    // 7F21A654: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F21A658u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F21A658:
    ctx->pc = 0x7F21A658u;
    ctx->downcount -= 2;
    // 7F21A658: or.   r31, r3, r3
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

label_7F21A65C:
    ctx->pc = 0x7F21A65Cu;
    // 7F21A65C: bc    4, 2, 0x7F21A668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A668;
        }
    }

label_7F21A660:
    ctx->pc = 0x7F21A660u;
    ctx->downcount -= 2;
    // 7F21A660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A664:
    ctx->pc = 0x7F21A664u;
    // 7F21A664: b       0x7F21A6A0
    {
            goto label_7F21A6A0;
    }

label_7F21A668:
    ctx->pc = 0x7F21A668u;
    ctx->downcount -= 1;
    // 7F21A668: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F21A66Cu;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F21A66C:
    ctx->pc = 0x7F21A66Cu;
    ctx->downcount -= 2;
    // 7F21A66C: cmpwi   r3, 0
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

label_7F21A670:
    ctx->pc = 0x7F21A670u;
    // 7F21A670: bc    4, 0, 0x7F21A67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A67C;
        }
    }

label_7F21A674:
    ctx->pc = 0x7F21A674u;
    ctx->downcount -= 2;
    // 7F21A674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A678:
    ctx->pc = 0x7F21A678u;
    // 7F21A678: b       0x7F21A6A0
    {
            goto label_7F21A6A0;
    }

label_7F21A67C:
    ctx->pc = 0x7F21A67Cu;
    ctx->downcount -= 2;
    // 7F21A67C: cmplwi  r29, 0x0000
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

label_7F21A680:
    ctx->pc = 0x7F21A680u;
    // 7F21A680: bc    12, 2, 0x7F21A688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A688;
        }
    }

label_7F21A684:
    ctx->pc = 0x7F21A684u;
    ctx->downcount -= 1;
    // 7F21A684: stw     r29, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F21A688:
    ctx->pc = 0x7F21A688u;
    ctx->downcount -= 2;
    // 7F21A688: cmplwi  r30, 0x0000
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

label_7F21A68C:
    ctx->pc = 0x7F21A68Cu;
    // 7F21A68C: bc    12, 2, 0x7F21A69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A69C;
        }
    }

label_7F21A690:
    ctx->pc = 0x7F21A690u;
    ctx->downcount -= 3;
    // 7F21A690: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A694:
    ctx->pc = 0x7F21A694u;
    // 7F21A694: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21A698:
    ctx->pc = 0x7F21A698u;
    // 7F21A698: bl      0x7F3BC518
    {
            ctx->lr = 0x7F21A69Cu;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F21A69C:
    ctx->pc = 0x7F21A69Cu;
    ctx->downcount -= 1;
    // 7F21A69C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A6A0:
    ctx->pc = 0x7F21A6A0u;
    ctx->downcount -= 16;
    // 7F21A6A0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21A6A4:
    ctx->pc = 0x7F21A6A4u;
    // 7F21A6A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A6A8:
    ctx->pc = 0x7F21A6A8u;
    // 7F21A6A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A6AC:
    ctx->pc = 0x7F21A6ACu;
    // 7F21A6AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21A6B0:
    ctx->pc = 0x7F21A6B0u;
    // 7F21A6B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A6B4:
    ctx->pc = 0x7F21A6B4u;
    ctx->downcount -= 24;
    // 7F21A6B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A6B8:
    ctx->pc = 0x7F21A6B8u;
    // 7F21A6B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A6BC:
    ctx->pc = 0x7F21A6BCu;
    // 7F21A6BC: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F21A6C0:
    ctx->pc = 0x7F21A6C0u;
    // 7F21A6C0: lis     r5, 49
    ctx->gpr[5] = ((u32)(s32)(49) << 16);

label_7F21A6C4:
    ctx->pc = 0x7F21A6C4u;
    // 7F21A6C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A6C8:
    ctx->pc = 0x7F21A6C8u;
    // 7F21A6C8: addi    r7, r6, 24804
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(24804);

label_7F21A6CC:
    ctx->pc = 0x7F21A6CCu;
    // 7F21A6CC: addi    r0, r5, 31023
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(31023);

label_7F21A6D0:
    ctx->pc = 0x7F21A6D0u;
    // 7F21A6D0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21A6D4:
    ctx->pc = 0x7F21A6D4u;
    // 7F21A6D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A6D8:
    ctx->pc = 0x7F21A6D8u;
    // 7F21A6D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21A6DC:
    ctx->pc = 0x7F21A6DCu;
    // 7F21A6DC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F21A6E0:
    ctx->pc = 0x7F21A6E0u;
    // 7F21A6E0: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21A6E4:
    ctx->pc = 0x7F21A6E4u;
    // 7F21A6E4: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A6E8:
    ctx->pc = 0x7F21A6E8u;
    // 7F21A6E8: bc    12, 2, 0x7F21A73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A73C;
        }
    }

label_7F21A6EC:
    ctx->pc = 0x7F21A6ECu;
    ctx->downcount -= 1;
    // 7F21A6EC: bc    4, 0, 0x7F21A714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A714;
        }
    }

label_7F21A6F0:
    ctx->pc = 0x7F21A6F0u;
    ctx->downcount -= 4;
    // 7F21A6F0: lis     r3, 47
    ctx->gpr[3] = ((u32)(s32)(47) << 16);

label_7F21A6F4:
    ctx->pc = 0x7F21A6F4u;
    // 7F21A6F4: addi    r0, r3, 4626
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4626);

label_7F21A6F8:
    ctx->pc = 0x7F21A6F8u;
    // 7F21A6F8: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A6FC:
    ctx->pc = 0x7F21A6FCu;
    // 7F21A6FC: bc    12, 2, 0x7F21A7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A7B4;
        }
    }

label_7F21A700:
    ctx->pc = 0x7F21A700u;
    ctx->downcount -= 1;
    // 7F21A700: bc    4, 0, 0x7F21A7E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A7E8;
        }
    }

label_7F21A704:
    ctx->pc = 0x7F21A704u;
    ctx->downcount -= 3;
    // 7F21A704: addi    r0, r3, 4625
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4625);

label_7F21A708:
    ctx->pc = 0x7F21A708u;
    // 7F21A708: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A70C:
    ctx->pc = 0x7F21A70Cu;
    // 7F21A70C: bc    4, 0, 0x7F21A798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A798;
        }
    }

label_7F21A710:
    ctx->pc = 0x7F21A710u;
    ctx->downcount -= 1;
    // 7F21A710: b       0x7F21A7E8
    {
            goto label_7F21A7E8;
    }

label_7F21A714:
    ctx->pc = 0x7F21A714u;
    ctx->downcount -= 4;
    // 7F21A714: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A718:
    ctx->pc = 0x7F21A718u;
    // 7F21A718: addi    r3, r3, 30391
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30391);

label_7F21A71C:
    ctx->pc = 0x7F21A71Cu;
    // 7F21A71C: cmpw    r6, r3
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A720:
    ctx->pc = 0x7F21A720u;
    // 7F21A720: bc    12, 2, 0x7F21A754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A754;
        }
    }

label_7F21A724:
    ctx->pc = 0x7F21A724u;
    ctx->downcount -= 1;
    // 7F21A724: bc    4, 0, 0x7F21A7E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A7E8;
        }
    }

label_7F21A728:
    ctx->pc = 0x7F21A728u;
    ctx->downcount -= 4;
    // 7F21A728: lis     r3, 72
    ctx->gpr[3] = ((u32)(s32)(72) << 16);

label_7F21A72C:
    ctx->pc = 0x7F21A72Cu;
    // 7F21A72C: addi    r0, r3, -3138
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3138);

label_7F21A730:
    ctx->pc = 0x7F21A730u;
    // 7F21A730: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21A734:
    ctx->pc = 0x7F21A734u;
    // 7F21A734: bc    12, 2, 0x7F21A7D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A7D0;
        }
    }

label_7F21A738:
    ctx->pc = 0x7F21A738u;
    ctx->downcount -= 1;
    // 7F21A738: b       0x7F21A7E8
    {
            goto label_7F21A7E8;
    }

label_7F21A73C:
    ctx->pc = 0x7F21A73Cu;
    ctx->downcount -= 6;
    // 7F21A73C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21A740:
    ctx->pc = 0x7F21A740u;
    // 7F21A740: addi    r31, r5, 12348
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(12348);

label_7F21A744:
    ctx->pc = 0x7F21A744u;
    // 7F21A744: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A748:
    ctx->pc = 0x7F21A748u;
    // 7F21A748: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A74C:
    ctx->pc = 0x7F21A74Cu;
    // 7F21A74C: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A750:
    ctx->pc = 0x7F21A750u;
    // 7F21A750: b       0x7F21A7F0
    {
            goto label_7F21A7F0;
    }

label_7F21A754:
    ctx->pc = 0x7F21A754u;
    ctx->downcount -= 4;
    // 7F21A754: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21A758:
    ctx->pc = 0x7F21A758u;
    // 7F21A758: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F21A75C:
    ctx->pc = 0x7F21A75Cu;
    // 7F21A75C: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A760:
    ctx->pc = 0x7F21A760u;
    // 7F21A760: bl      0x7F3C8470
    {
            ctx->lr = 0x7F21A764u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F21A764:
    ctx->pc = 0x7F21A764u;
    ctx->downcount -= 1;
    // 7F21A764: bl      0x7F3C8480
    {
            ctx->lr = 0x7F21A768u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F21A768:
    ctx->pc = 0x7F21A768u;
    ctx->downcount -= 2;
    // 7F21A768: cmplwi  r3, 0x0000
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

label_7F21A76C:
    ctx->pc = 0x7F21A76Cu;
    // 7F21A76C: bc    12, 2, 0x7F21A780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A780;
        }
    }

label_7F21A770:
    ctx->pc = 0x7F21A770u;
    ctx->downcount -= 4;
    // 7F21A770: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A774:
    ctx->pc = 0x7F21A774u;
    // 7F21A774: addi    r0, r3, 30391
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30391);

label_7F21A778:
    ctx->pc = 0x7F21A778u;
    // 7F21A778: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A77C:
    ctx->pc = 0x7F21A77Cu;
    // 7F21A77C: b       0x7F21A78C
    {
            goto label_7F21A78C;
    }

label_7F21A780:
    ctx->pc = 0x7F21A780u;
    ctx->downcount -= 3;
    // 7F21A780: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F21A784:
    ctx->pc = 0x7F21A784u;
    // 7F21A784: addi    r0, r3, 29190
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29190);

label_7F21A788:
    ctx->pc = 0x7F21A788u;
    // 7F21A788: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A78C:
    ctx->pc = 0x7F21A78Cu;
    ctx->downcount -= 3;
    // 7F21A78C: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A790:
    ctx->pc = 0x7F21A790u;
    // 7F21A790: addi    r31, r3, 11716
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(11716);

label_7F21A794:
    ctx->pc = 0x7F21A794u;
    // 7F21A794: b       0x7F21A7F0
    {
            goto label_7F21A7F0;
    }

label_7F21A798:
    ctx->pc = 0x7F21A798u;
    ctx->downcount -= 7;
    // 7F21A798: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F21A79C:
    ctx->pc = 0x7F21A79Cu;
    // 7F21A79C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F21A7A0:
    ctx->pc = 0x7F21A7A0u;
    // 7F21A7A0: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7A4:
    ctx->pc = 0x7F21A7A4u;
    // 7F21A7A4: addi    r31, r3, 12188
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12188);

label_7F21A7A8:
    ctx->pc = 0x7F21A7A8u;
    // 7F21A7A8: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A7AC:
    ctx->pc = 0x7F21A7ACu;
    // 7F21A7AC: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7B0:
    ctx->pc = 0x7F21A7B0u;
    // 7F21A7B0: b       0x7F21A7F0
    {
            goto label_7F21A7F0;
    }

label_7F21A7B4:
    ctx->pc = 0x7F21A7B4u;
    ctx->downcount -= 7;
    // 7F21A7B4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F21A7B8:
    ctx->pc = 0x7F21A7B8u;
    // 7F21A7B8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F21A7BC:
    ctx->pc = 0x7F21A7BCu;
    // 7F21A7BC: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7C0:
    ctx->pc = 0x7F21A7C0u;
    // 7F21A7C0: addi    r31, r3, 12188
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12188);

label_7F21A7C4:
    ctx->pc = 0x7F21A7C4u;
    // 7F21A7C4: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A7C8:
    ctx->pc = 0x7F21A7C8u;
    // 7F21A7C8: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7CC:
    ctx->pc = 0x7F21A7CCu;
    // 7F21A7CC: b       0x7F21A7F0
    {
            goto label_7F21A7F0;
    }

label_7F21A7D0:
    ctx->pc = 0x7F21A7D0u;
    ctx->downcount -= 6;
    // 7F21A7D0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F21A7D4:
    ctx->pc = 0x7F21A7D4u;
    // 7F21A7D4: addi    r31, r5, 12348
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(12348);

label_7F21A7D8:
    ctx->pc = 0x7F21A7D8u;
    // 7F21A7D8: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7DC:
    ctx->pc = 0x7F21A7DCu;
    // 7F21A7DC: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A7E0:
    ctx->pc = 0x7F21A7E0u;
    // 7F21A7E0: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7E4:
    ctx->pc = 0x7F21A7E4u;
    // 7F21A7E4: b       0x7F21A7F0
    {
            goto label_7F21A7F0;
    }

label_7F21A7E8:
    ctx->pc = 0x7F21A7E8u;
    ctx->downcount -= 2;
    // 7F21A7E8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F21A7EC:
    ctx->pc = 0x7F21A7ECu;
    // 7F21A7EC: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A7F0:
    ctx->pc = 0x7F21A7F0u;
    ctx->downcount -= 3;
    // 7F21A7F0: lwz     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A7F4:
    ctx->pc = 0x7F21A7F4u;
    // 7F21A7F4: cmpwi   r0, -1
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

label_7F21A7F8:
    ctx->pc = 0x7F21A7F8u;
    // 7F21A7F8: bc    4, 2, 0x7F21A908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A908;
        }
    }

label_7F21A7FC:
    ctx->pc = 0x7F21A7FCu;
    ctx->downcount -= 2;
    // 7F21A7FC: cmpwi   r30, 1
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

label_7F21A800:
    ctx->pc = 0x7F21A800u;
    // 7F21A800: bc    12, 2, 0x7F21A870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A870;
        }
    }

label_7F21A804:
    ctx->pc = 0x7F21A804u;
    ctx->downcount -= 1;
    // 7F21A804: bc    4, 0, 0x7F21A814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A814;
        }
    }

label_7F21A808:
    ctx->pc = 0x7F21A808u;
    ctx->downcount -= 2;
    // 7F21A808: cmpwi   r30, 0
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

label_7F21A80C:
    ctx->pc = 0x7F21A80Cu;
    // 7F21A80C: bc    4, 0, 0x7F21A820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A820;
        }
    }

label_7F21A810:
    ctx->pc = 0x7F21A810u;
    ctx->downcount -= 1;
    // 7F21A810: b       0x7F21A908
    {
            goto label_7F21A908;
    }

label_7F21A814:
    ctx->pc = 0x7F21A814u;
    ctx->downcount -= 2;
    // 7F21A814: cmpwi   r30, 3
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

label_7F21A818:
    ctx->pc = 0x7F21A818u;
    // 7F21A818: bc    4, 0, 0x7F21A908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A908;
        }
    }

label_7F21A81C:
    ctx->pc = 0x7F21A81Cu;
    ctx->downcount -= 1;
    // 7F21A81C: b       0x7F21A8C0
    {
            goto label_7F21A8C0;
    }

label_7F21A820:
    ctx->pc = 0x7F21A820u;
    ctx->downcount -= 6;
    // 7F21A820: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F21A824:
    ctx->pc = 0x7F21A824u;
    // 7F21A824: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F21A828:
    ctx->pc = 0x7F21A828u;
    // 7F21A828: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A82C:
    ctx->pc = 0x7F21A82Cu;
    // 7F21A82C: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21A830:
    ctx->pc = 0x7F21A830u;
    // 7F21A830: rlwinm. r0, r0, 0, 27, 27
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

label_7F21A834:
    ctx->pc = 0x7F21A834u;
    // 7F21A834: bc    12, 2, 0x7F21A850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A850;
        }
    }

label_7F21A838:
    ctx->pc = 0x7F21A838u;
    ctx->downcount -= 6;
    // 7F21A838: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F21A83C:
    ctx->pc = 0x7F21A83Cu;
    // 7F21A83C: lis     r3, 47
    ctx->gpr[3] = ((u32)(s32)(47) << 16);

label_7F21A840:
    ctx->pc = 0x7F21A840u;
    // 7F21A840: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A844:
    ctx->pc = 0x7F21A844u;
    // 7F21A844: addi    r0, r3, 4626
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4626);

label_7F21A848:
    ctx->pc = 0x7F21A848u;
    // 7F21A848: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A84C:
    ctx->pc = 0x7F21A84Cu;
    // 7F21A84C: b       0x7F21A864
    {
            goto label_7F21A864;
    }

label_7F21A850:
    ctx->pc = 0x7F21A850u;
    ctx->downcount -= 5;
    // 7F21A850: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F21A854:
    ctx->pc = 0x7F21A854u;
    // 7F21A854: lis     r3, 47
    ctx->gpr[3] = ((u32)(s32)(47) << 16);

label_7F21A858:
    ctx->pc = 0x7F21A858u;
    // 7F21A858: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A85C:
    ctx->pc = 0x7F21A85Cu;
    // 7F21A85C: addi    r0, r3, 4625
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4625);

label_7F21A860:
    ctx->pc = 0x7F21A860u;
    // 7F21A860: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A864:
    ctx->pc = 0x7F21A864u;
    ctx->downcount -= 3;
    // 7F21A864: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F21A868:
    ctx->pc = 0x7F21A868u;
    // 7F21A868: addi    r31, r3, 12188
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12188);

label_7F21A86C:
    ctx->pc = 0x7F21A86Cu;
    // 7F21A86C: b       0x7F21A908
    {
            goto label_7F21A908;
    }

label_7F21A870:
    ctx->pc = 0x7F21A870u;
    ctx->downcount -= 6;
    // 7F21A870: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F21A874:
    ctx->pc = 0x7F21A874u;
    // 7F21A874: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F21A878:
    ctx->pc = 0x7F21A878u;
    // 7F21A878: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A87C:
    ctx->pc = 0x7F21A87Cu;
    // 7F21A87C: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21A880:
    ctx->pc = 0x7F21A880u;
    // 7F21A880: rlwinm. r0, r0, 0, 24, 24
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

label_7F21A884:
    ctx->pc = 0x7F21A884u;
    // 7F21A884: bc    12, 2, 0x7F21A8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A8A0;
        }
    }

label_7F21A888:
    ctx->pc = 0x7F21A888u;
    ctx->downcount -= 6;
    // 7F21A888: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F21A88C:
    ctx->pc = 0x7F21A88Cu;
    // 7F21A88C: lis     r3, 72
    ctx->gpr[3] = ((u32)(s32)(72) << 16);

label_7F21A890:
    ctx->pc = 0x7F21A890u;
    // 7F21A890: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A894:
    ctx->pc = 0x7F21A894u;
    // 7F21A894: addi    r0, r3, -3138
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3138);

label_7F21A898:
    ctx->pc = 0x7F21A898u;
    // 7F21A898: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A89C:
    ctx->pc = 0x7F21A89Cu;
    // 7F21A89C: b       0x7F21A8B4
    {
            goto label_7F21A8B4;
    }

label_7F21A8A0:
    ctx->pc = 0x7F21A8A0u;
    ctx->downcount -= 5;
    // 7F21A8A0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21A8A4:
    ctx->pc = 0x7F21A8A4u;
    // 7F21A8A4: lis     r3, 49
    ctx->gpr[3] = ((u32)(s32)(49) << 16);

label_7F21A8A8:
    ctx->pc = 0x7F21A8A8u;
    // 7F21A8A8: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A8AC:
    ctx->pc = 0x7F21A8ACu;
    // 7F21A8AC: addi    r0, r3, 31023
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31023);

label_7F21A8B0:
    ctx->pc = 0x7F21A8B0u;
    // 7F21A8B0: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A8B4:
    ctx->pc = 0x7F21A8B4u;
    ctx->downcount -= 3;
    // 7F21A8B4: lis     r3, 49
    ctx->gpr[3] = ((u32)(s32)(49) << 16);

label_7F21A8B8:
    ctx->pc = 0x7F21A8B8u;
    // 7F21A8B8: addi    r31, r3, 12348
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12348);

label_7F21A8BC:
    ctx->pc = 0x7F21A8BCu;
    // 7F21A8BC: b       0x7F21A908
    {
            goto label_7F21A908;
    }

label_7F21A8C0:
    ctx->pc = 0x7F21A8C0u;
    ctx->downcount -= 6;
    // 7F21A8C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21A8C4:
    ctx->pc = 0x7F21A8C4u;
    // 7F21A8C4: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A8C8:
    ctx->pc = 0x7F21A8C8u;
    // 7F21A8C8: stw     r0, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A8CC:
    ctx->pc = 0x7F21A8CCu;
    // 7F21A8CC: addi    r3, r3, 30391
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30391);

label_7F21A8D0:
    ctx->pc = 0x7F21A8D0u;
    // 7F21A8D0: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F21A8D4:
    ctx->pc = 0x7F21A8D4u;
    // 7F21A8D4: bl      0x7F3C8470
    {
            ctx->lr = 0x7F21A8D8u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F21A8D8:
    ctx->pc = 0x7F21A8D8u;
    ctx->downcount -= 1;
    // 7F21A8D8: bl      0x7F3C8480
    {
            ctx->lr = 0x7F21A8DCu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F21A8DC:
    ctx->pc = 0x7F21A8DCu;
    ctx->downcount -= 2;
    // 7F21A8DC: cmplwi  r3, 0x0000
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

label_7F21A8E0:
    ctx->pc = 0x7F21A8E0u;
    // 7F21A8E0: bc    12, 2, 0x7F21A8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A8F4;
        }
    }

label_7F21A8E4:
    ctx->pc = 0x7F21A8E4u;
    ctx->downcount -= 4;
    // 7F21A8E4: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A8E8:
    ctx->pc = 0x7F21A8E8u;
    // 7F21A8E8: addi    r0, r3, 30391
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30391);

label_7F21A8EC:
    ctx->pc = 0x7F21A8ECu;
    // 7F21A8EC: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A8F0:
    ctx->pc = 0x7F21A8F0u;
    // 7F21A8F0: b       0x7F21A900
    {
            goto label_7F21A900;
    }

label_7F21A8F4:
    ctx->pc = 0x7F21A8F4u;
    ctx->downcount -= 3;
    // 7F21A8F4: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F21A8F8:
    ctx->pc = 0x7F21A8F8u;
    // 7F21A8F8: addi    r0, r3, 29190
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29190);

label_7F21A8FC:
    ctx->pc = 0x7F21A8FCu;
    // 7F21A8FC: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A900:
    ctx->pc = 0x7F21A900u;
    ctx->downcount -= 2;
    // 7F21A900: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F21A904:
    ctx->pc = 0x7F21A904u;
    // 7F21A904: addi    r31, r3, 11716
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(11716);

label_7F21A908:
    ctx->pc = 0x7F21A908u;
    ctx->downcount -= 5;
    // 7F21A908: lwz     r3, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A90C:
    ctx->pc = 0x7F21A90Cu;
    // 7F21A90C: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F21A910:
    ctx->pc = 0x7F21A910u;
    // 7F21A910: addi    r5, r29, 176
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(176);

label_7F21A914:
    ctx->pc = 0x7F21A914u;
    // 7F21A914: addi    r6, r29, 336
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(336);

label_7F21A918:
    ctx->pc = 0x7F21A918u;
    // 7F21A918: bl      0x7F21A560
    {
            ctx->lr = 0x7F21A91Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A560u;
                return;
            }
            goto label_7F21A560;
    }

label_7F21A91C:
    ctx->pc = 0x7F21A91Cu;
    ctx->downcount -= 4;
    // 7F21A91C: stw     r3, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A920:
    ctx->pc = 0x7F21A920u;
    // 7F21A920: lwz     r0, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A924:
    ctx->pc = 0x7F21A924u;
    // 7F21A924: cmplwi  r0, 0x0000
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

label_7F21A928:
    ctx->pc = 0x7F21A928u;
    // 7F21A928: bc    4, 2, 0x7F21A934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A934;
        }
    }

label_7F21A92C:
    ctx->pc = 0x7F21A92Cu;
    ctx->downcount -= 2;
    // 7F21A92C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21A930:
    ctx->pc = 0x7F21A930u;
    // 7F21A930: b       0x7F21A968
    {
            goto label_7F21A968;
    }

label_7F21A934:
    ctx->pc = 0x7F21A934u;
    ctx->downcount -= 2;
    // 7F21A934: cmpwi   r31, 0
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

label_7F21A938:
    ctx->pc = 0x7F21A938u;
    // 7F21A938: bc    12, 2, 0x7F21A964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A964;
        }
    }

label_7F21A93C:
    ctx->pc = 0x7F21A93Cu;
    ctx->downcount -= 4;
    // 7F21A93C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21A940:
    ctx->pc = 0x7F21A940u;
    // 7F21A940: addi    r4, r29, 112
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(112);

label_7F21A944:
    ctx->pc = 0x7F21A944u;
    // 7F21A944: addi    r5, r29, 176
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(176);

label_7F21A948:
    ctx->pc = 0x7F21A948u;
    // 7F21A948: bl      0x7F21A618
    {
            ctx->lr = 0x7F21A94Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A618u;
                return;
            }
            goto label_7F21A618;
    }

label_7F21A94C:
    ctx->pc = 0x7F21A94Cu;
    ctx->downcount -= 4;
    // 7F21A94C: stw     r3, 480(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21A950:
    ctx->pc = 0x7F21A950u;
    // 7F21A950: lwz     r0, 480(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A954:
    ctx->pc = 0x7F21A954u;
    // 7F21A954: cmplwi  r0, 0x0000
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

label_7F21A958:
    ctx->pc = 0x7F21A958u;
    // 7F21A958: bc    4, 2, 0x7F21A964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A964;
        }
    }

label_7F21A95C:
    ctx->pc = 0x7F21A95Cu;
    ctx->downcount -= 2;
    // 7F21A95C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21A960:
    ctx->pc = 0x7F21A960u;
    // 7F21A960: b       0x7F21A968
    {
            goto label_7F21A968;
    }

label_7F21A964:
    ctx->pc = 0x7F21A964u;
    ctx->downcount -= 1;
    // 7F21A964: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21A968:
    ctx->pc = 0x7F21A968u;
    ctx->downcount -= 16;
    // 7F21A968: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21A96C:
    ctx->pc = 0x7F21A96Cu;
    // 7F21A96C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A970:
    ctx->pc = 0x7F21A970u;
    // 7F21A970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21A974:
    ctx->pc = 0x7F21A974u;
    // 7F21A974: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21A978:
    ctx->pc = 0x7F21A978u;
    // 7F21A978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21A97C:
    ctx->pc = 0x7F21A97Cu;
    ctx->downcount -= 6;
    // 7F21A97C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21A980:
    ctx->pc = 0x7F21A980u;
    // 7F21A980: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21A984:
    ctx->pc = 0x7F21A984u;
    // 7F21A984: cmpwi   r4, 2
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

label_7F21A988:
    ctx->pc = 0x7F21A988u;
    // 7F21A988: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21A98C:
    ctx->pc = 0x7F21A98Cu;
    // 7F21A98C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A990:
    ctx->pc = 0x7F21A990u;
    // 7F21A990: bc    12, 2, 0x7F21A9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21A9BC;
        }
    }

label_7F21A994:
    ctx->pc = 0x7F21A994u;
    ctx->downcount -= 1;
    // 7F21A994: bc    4, 0, 0x7F21A9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A9A8;
        }
    }

label_7F21A998:
    ctx->pc = 0x7F21A998u;
    ctx->downcount -= 2;
    // 7F21A998: cmpwi   r4, 0
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

label_7F21A99C:
    ctx->pc = 0x7F21A99Cu;
    // 7F21A99C: bc    12, 2, 0x7F21AA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA04;
        }
    }

label_7F21A9A0:
    ctx->pc = 0x7F21A9A0u;
    ctx->downcount -= 1;
    // 7F21A9A0: bc    4, 0, 0x7F21A9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21A9E0;
        }
    }

label_7F21A9A4:
    ctx->pc = 0x7F21A9A4u;
    ctx->downcount -= 1;
    // 7F21A9A4: b       0x7F21AAD8
    {
            goto label_7F21AAD8;
    }

label_7F21A9A8:
    ctx->pc = 0x7F21A9A8u;
    ctx->downcount -= 4;
    // 7F21A9A8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F21A9AC:
    ctx->pc = 0x7F21A9ACu;
    // 7F21A9AC: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F21A9B0:
    ctx->pc = 0x7F21A9B0u;
    // 7F21A9B0: cmpw    r4, r0
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

label_7F21A9B4:
    ctx->pc = 0x7F21A9B4u;
    // 7F21A9B4: bc    12, 2, 0x7F21AA6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA6C;
        }
    }

label_7F21A9B8:
    ctx->pc = 0x7F21A9B8u;
    ctx->downcount -= 1;
    // 7F21A9B8: b       0x7F21AAD8
    {
            goto label_7F21AAD8;
    }

label_7F21A9BC:
    ctx->pc = 0x7F21A9BCu;
    ctx->downcount -= 9;
    // 7F21A9BC: lwz     r3, 476(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(476);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A9C0:
    ctx->pc = 0x7F21A9C0u;
    // 7F21A9C0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A9C4:
    ctx->pc = 0x7F21A9C4u;
    // 7F21A9C4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F21A9C8:
    ctx->pc = 0x7F21A9C8u;
    // 7F21A9C8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A9CC:
    ctx->pc = 0x7F21A9CCu;
    // 7F21A9CC: lwz     r3, 480(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A9D0:
    ctx->pc = 0x7F21A9D0u;
    // 7F21A9D0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A9D4:
    ctx->pc = 0x7F21A9D4u;
    // 7F21A9D4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F21A9D8:
    ctx->pc = 0x7F21A9D8u;
    // 7F21A9D8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A9DC:
    ctx->pc = 0x7F21A9DCu;
    // 7F21A9DC: b       0x7F21AAE4
    {
            goto label_7F21AAE4;
    }

label_7F21A9E0:
    ctx->pc = 0x7F21A9E0u;
    ctx->downcount -= 9;
    // 7F21A9E0: lwz     r3, 476(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(476);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A9E4:
    ctx->pc = 0x7F21A9E4u;
    // 7F21A9E4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A9E8:
    ctx->pc = 0x7F21A9E8u;
    // 7F21A9E8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F21A9EC:
    ctx->pc = 0x7F21A9ECu;
    // 7F21A9EC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21A9F0:
    ctx->pc = 0x7F21A9F0u;
    // 7F21A9F0: lwz     r3, 480(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21A9F4:
    ctx->pc = 0x7F21A9F4u;
    // 7F21A9F4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21A9F8:
    ctx->pc = 0x7F21A9F8u;
    // 7F21A9F8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F21A9FC:
    ctx->pc = 0x7F21A9FCu;
    // 7F21A9FC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AA00:
    ctx->pc = 0x7F21AA00u;
    // 7F21AA00: b       0x7F21AAE4
    {
            goto label_7F21AAE4;
    }

label_7F21AA04:
    ctx->pc = 0x7F21AA04u;
    ctx->downcount -= 4;
    // 7F21AA04: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AA08:
    ctx->pc = 0x7F21AA08u;
    // 7F21AA08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21AA0C:
    ctx->pc = 0x7F21AA0Cu;
    // 7F21AA0C: cmpwi   r0, 0
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

label_7F21AA10:
    ctx->pc = 0x7F21AA10u;
    // 7F21AA10: bc    12, 2, 0x7F21AA18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA18;
        }
    }

label_7F21AA14:
    ctx->pc = 0x7F21AA14u;
    ctx->downcount -= 1;
    // 7F21AA14: ori     r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] | 0x0001u;

label_7F21AA18:
    ctx->pc = 0x7F21AA18u;
    ctx->downcount -= 3;
    // 7F21AA18: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AA1C:
    ctx->pc = 0x7F21AA1Cu;
    // 7F21AA1C: cmpwi   r0, 0
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

label_7F21AA20:
    ctx->pc = 0x7F21AA20u;
    // 7F21AA20: bc    12, 2, 0x7F21AA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA28;
        }
    }

label_7F21AA24:
    ctx->pc = 0x7F21AA24u;
    ctx->downcount -= 1;
    // 7F21AA24: ori     r4, r4, 0x0002
    ctx->gpr[4] = ctx->gpr[4] | 0x0002u;

label_7F21AA28:
    ctx->pc = 0x7F21AA28u;
    ctx->downcount -= 3;
    // 7F21AA28: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AA2C:
    ctx->pc = 0x7F21AA2Cu;
    // 7F21AA2C: cmpwi   r0, 0
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

label_7F21AA30:
    ctx->pc = 0x7F21AA30u;
    // 7F21AA30: bc    12, 2, 0x7F21AA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA38;
        }
    }

label_7F21AA34:
    ctx->pc = 0x7F21AA34u;
    ctx->downcount -= 1;
    // 7F21AA34: ori     r4, r4, 0x0004
    ctx->gpr[4] = ctx->gpr[4] | 0x0004u;

label_7F21AA38:
    ctx->pc = 0x7F21AA38u;
    ctx->downcount -= 3;
    // 7F21AA38: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AA3C:
    ctx->pc = 0x7F21AA3Cu;
    // 7F21AA3C: cmpwi   r0, 0
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

label_7F21AA40:
    ctx->pc = 0x7F21AA40u;
    // 7F21AA40: bc    12, 2, 0x7F21AA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA48;
        }
    }

label_7F21AA44:
    ctx->pc = 0x7F21AA44u;
    ctx->downcount -= 1;
    // 7F21AA44: ori     r4, r4, 0x0008
    ctx->gpr[4] = ctx->gpr[4] | 0x0008u;

label_7F21AA48:
    ctx->pc = 0x7F21AA48u;
    ctx->downcount -= 3;
    // 7F21AA48: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AA4C:
    ctx->pc = 0x7F21AA4Cu;
    // 7F21AA4C: cmpwi   r0, 0
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

label_7F21AA50:
    ctx->pc = 0x7F21AA50u;
    // 7F21AA50: bc    12, 2, 0x7F21AA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AA58;
        }
    }

label_7F21AA54:
    ctx->pc = 0x7F21AA54u;
    ctx->downcount -= 1;
    // 7F21AA54: ori     r4, r4, 0x0010
    ctx->gpr[4] = ctx->gpr[4] | 0x0010u;

label_7F21AA58:
    ctx->pc = 0x7F21AA58u;
    ctx->downcount -= 4;
    // 7F21AA58: lwz     r3, 472(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21AA5C:
    ctx->pc = 0x7F21AA5Cu;
    // 7F21AA5C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21AA60:
    ctx->pc = 0x7F21AA60u;
    // 7F21AA60: addi    r4, r6, 48
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(48);

label_7F21AA64:
    ctx->pc = 0x7F21AA64u;
    // 7F21AA64: bl      0x7F21A480
    {
            ctx->lr = 0x7F21AA68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A480u;
                return;
            }
            goto label_7F21A480;
    }

label_7F21AA68:
    ctx->pc = 0x7F21AA68u;
    ctx->downcount -= 1;
    // 7F21AA68: b       0x7F21AAE4
    {
            goto label_7F21AAE4;
    }

label_7F21AA6C:
    ctx->pc = 0x7F21AA6Cu;
    ctx->downcount -= 5;
    // 7F21AA6C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F21AA70:
    ctx->pc = 0x7F21AA70u;
    // 7F21AA70: addi    r7, r6, 44
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(44);

label_7F21AA74:
    ctx->pc = 0x7F21AA74u;
    // 7F21AA74: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F21AA78:
    ctx->pc = 0x7F21AA78u;
    // 7F21AA78: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21AA7C:
    loop_7F21AA7C(ctx);
    if (ctx->pc == 0x7F21AA90u) goto label_7F21AA90;
    return;
label_7F21AA80:
    ctx->pc = 0x7F21AA80u;
    // 7F21AA80: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F21AA84:
    ctx->pc = 0x7F21AA84u;
    // 7F21AA84: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21AA88:
    ctx->pc = 0x7F21AA88u;
    // 7F21AA88: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F21AA8C:
    // 7F21AA8C: bc    16, 0, 0x7F21AA7C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AA7Cu;
                return;
            }
            goto label_7F21AA7C;
        }
    }

label_7F21AA90:
    ctx->pc = 0x7F21AA90u;
    ctx->downcount -= 5;
    // 7F21AA90: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F21AA94:
    ctx->pc = 0x7F21AA94u;
    // 7F21AA94: addi    r5, r6, 108
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(108);

label_7F21AA98:
    ctx->pc = 0x7F21AA98u;
    // 7F21AA98: addi    r4, r6, 44
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(44);

label_7F21AA9C:
    ctx->pc = 0x7F21AA9Cu;
    // 7F21AA9C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21AAA0:
    loop_7F21AAA0(ctx);
    if (ctx->pc == 0x7F21AAB4u) goto label_7F21AAB4;
    return;
label_7F21AAA4:
    ctx->pc = 0x7F21AAA4u;
    // 7F21AAA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F21AAA8:
    ctx->pc = 0x7F21AAA8u;
    // 7F21AAA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21AAAC:
    ctx->pc = 0x7F21AAACu;
    // 7F21AAAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F21AAB0:
    // 7F21AAB0: bc    16, 0, 0x7F21AAA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AAA0u;
                return;
            }
            goto label_7F21AAA0;
        }
    }

label_7F21AAB4:
    ctx->pc = 0x7F21AAB4u;
    ctx->downcount -= 8;
    // 7F21AAB4: lwz     r4, 472(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(472);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21AAB8:
    ctx->pc = 0x7F21AAB8u;
    // 7F21AAB8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F21AABC:
    ctx->pc = 0x7F21AABCu;
    // 7F21AABC: addi    r0, r3, 8176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8176);

label_7F21AAC0:
    ctx->pc = 0x7F21AAC0u;
    // 7F21AAC0: addi    r3, r6, 160
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(160);

label_7F21AAC4:
    ctx->pc = 0x7F21AAC4u;
    // 7F21AAC4: rlwinm r5, r4, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F21AAC8:
    ctx->pc = 0x7F21AAC8u;
    // 7F21AAC8: addi    r4, r6, 48
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(48);

label_7F21AACC:
    ctx->pc = 0x7F21AACCu;
    // 7F21AACC: add   r5, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F21AAD0:
    ctx->pc = 0x7F21AAD0u;
    // 7F21AAD0: bl      0x7F21AAF8
    {
            ctx->lr = 0x7F21AAD4u;
            goto label_7F21AAF8;
    }

label_7F21AAD4:
    ctx->pc = 0x7F21AAD4u;
    ctx->downcount -= 1;
    // 7F21AAD4: b       0x7F21AAE4
    {
            goto label_7F21AAE4;
    }

label_7F21AAD8:
    ctx->pc = 0x7F21AAD8u;
    ctx->downcount -= 2;
    // 7F21AAD8: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F21AADC:
    ctx->pc = 0x7F21AADCu;
    // 7F21AADC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F21AAE0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F21AAE0:
    ctx->pc = 0x7F21AAE0u;
    ctx->downcount -= 1;
    // 7F21AAE0: b       0x7F21AAE8
    {
            goto label_7F21AAE8;
    }

label_7F21AAE4:
    ctx->pc = 0x7F21AAE4u;
    ctx->downcount -= 1;
    // 7F21AAE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21AAE8:
    ctx->pc = 0x7F21AAE8u;
    ctx->downcount -= 5;
    // 7F21AAE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AAEC:
    ctx->pc = 0x7F21AAECu;
    // 7F21AAEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21AAF0:
    ctx->pc = 0x7F21AAF0u;
    // 7F21AAF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21AAF4:
    ctx->pc = 0x7F21AAF4u;
    // 7F21AAF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21AAF8:
    ctx->pc = 0x7F21AAF8u;
    ctx->downcount -= 18;
    // 7F21AAF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21AAFC:
    ctx->pc = 0x7F21AAFCu;
    // 7F21AAFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21AB00:
    ctx->pc = 0x7F21AB00u;
    // 7F21AB00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AB04:
    ctx->pc = 0x7F21AB04u;
    // 7F21AB04: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21AB08:
    ctx->pc = 0x7F21AB08u;
    // 7F21AB08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21AB0C:
    ctx->pc = 0x7F21AB0Cu;
    // 7F21AB0C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21AB10:
    ctx->pc = 0x7F21AB10u;
    // 7F21AB10: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21AB14:
    ctx->pc = 0x7F21AB14u;
    // 7F21AB14: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F21AB18u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F21AB18:
    ctx->pc = 0x7F21AB18u;
    ctx->downcount -= 4;
    // 7F21AB18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AB1C:
    ctx->pc = 0x7F21AB1Cu;
    // 7F21AB1C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21AB20:
    ctx->pc = 0x7F21AB20u;
    // 7F21AB20: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F21AB24:
    ctx->pc = 0x7F21AB24u;
    // 7F21AB24: bl      0x7F3B2F74
    {
            ctx->lr = 0x7F21AB28u;
            ctx->pc = 0x7F3B2F74u;
            return;
    }

label_7F21AB28:
    ctx->pc = 0x7F21AB28u;
    ctx->downcount -= 16;
    // 7F21AB28: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21AB2C:
    ctx->pc = 0x7F21AB2Cu;
    // 7F21AB2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AB30:
    ctx->pc = 0x7F21AB30u;
    // 7F21AB30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21AB34:
    ctx->pc = 0x7F21AB34u;
    // 7F21AB34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21AB38:
    ctx->pc = 0x7F21AB38u;
    // 7F21AB38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21AB3C:
    ctx->pc = 0x7F21AB3Cu;
    ctx->downcount -= 23;
    // 7F21AB3C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21AB40:
    ctx->pc = 0x7F21AB40u;
    // 7F21AB40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21AB44:
    ctx->pc = 0x7F21AB44u;
    // 7F21AB44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AB48:
    ctx->pc = 0x7F21AB48u;
    // 7F21AB48: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21AB4C:
    ctx->pc = 0x7F21AB4Cu;
    // 7F21AB4C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21AB50:
    ctx->pc = 0x7F21AB50u;
    // 7F21AB50: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21AB54:
    ctx->pc = 0x7F21AB54u;
    // 7F21AB54: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F21AB58:
    ctx->pc = 0x7F21AB58u;
    // 7F21AB58: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F21AB5C:
    ctx->pc = 0x7F21AB5Cu;
    // 7F21AB5C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F21AB60:
    ctx->pc = 0x7F21AB60u;
    // 7F21AB60: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F21AB64:
    ctx->pc = 0x7F21AB64u;
    // 7F21AB64: li      r5, 496
    ctx->gpr[5] = (u32)(s32)(496);

label_7F21AB68:
    ctx->pc = 0x7F21AB68u;
    // 7F21AB68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21AB6C:
    ctx->pc = 0x7F21AB6Cu;
    // 7F21AB6C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F21AB70u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F21AB70:
    ctx->pc = 0x7F21AB70u;
    ctx->downcount -= 2;
    // 7F21AB70: or.   r31, r3, r3
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

label_7F21AB74:
    ctx->pc = 0x7F21AB74u;
    // 7F21AB74: bc    12, 2, 0x7F21AC38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AC38;
        }
    }

label_7F21AB78:
    ctx->pc = 0x7F21AB78u;
    ctx->downcount -= 5;
    // 7F21AB78: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21AB7C:
    ctx->pc = 0x7F21AB7Cu;
    // 7F21AB7C: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F21AB80:
    ctx->pc = 0x7F21AB80u;
    // 7F21AB80: addi    r4, r4, -23276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23276);

label_7F21AB84:
    ctx->pc = 0x7F21AB84u;
    // 7F21AB84: addi    r5, r5, -23272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23272);

label_7F21AB88:
    ctx->pc = 0x7F21AB88u;
    // 7F21AB88: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F21AB8Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F21AB8C:
    ctx->pc = 0x7F21AB8Cu;
    ctx->downcount -= 16;
    // 7F21AB8C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21AB90:
    ctx->pc = 0x7F21AB90u;
    // 7F21AB90: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F21AB94:
    ctx->pc = 0x7F21AB94u;
    // 7F21AB94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21AB98:
    ctx->pc = 0x7F21AB98u;
    // 7F21AB98: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F21AB9C:
    ctx->pc = 0x7F21AB9Cu;
    // 7F21AB9C: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F21ABA0:
    ctx->pc = 0x7F21ABA0u;
    // 7F21ABA0: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F21ABA4:
    ctx->pc = 0x7F21ABA4u;
    // 7F21ABA4: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21ABA8:
    ctx->pc = 0x7F21ABA8u;
    // 7F21ABA8: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F21ABAC:
    ctx->pc = 0x7F21ABACu;
    // 7F21ABAC: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F21ABB0:
    ctx->pc = 0x7F21ABB0u;
    // 7F21ABB0: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21ABB4:
    ctx->pc = 0x7F21ABB4u;
    // 7F21ABB4: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21ABB8:
    ctx->pc = 0x7F21ABB8u;
    // 7F21ABB8: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21ABBC:
    ctx->pc = 0x7F21ABBCu;
    // 7F21ABBC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21ABC0:
    ctx->pc = 0x7F21ABC0u;
    // 7F21ABC0: stw     r27, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F21ABC4:
    ctx->pc = 0x7F21ABC4u;
    // 7F21ABC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21ABC8:
    loop_7F21ABC8(ctx);
    if (ctx->pc == 0x7F21ABDCu) goto label_7F21ABDC;
    return;
label_7F21ABCC:
    ctx->pc = 0x7F21ABCCu;
    // 7F21ABCC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F21ABD0:
    ctx->pc = 0x7F21ABD0u;
    // 7F21ABD0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21ABD4:
    ctx->pc = 0x7F21ABD4u;
    // 7F21ABD4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F21ABD8:
    // 7F21ABD8: bc    16, 0, 0x7F21ABC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21ABC8u;
                return;
            }
            goto label_7F21ABC8;
        }
    }

label_7F21ABDC:
    ctx->pc = 0x7F21ABDCu;
    ctx->downcount -= 5;
    // 7F21ABDC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F21ABE0:
    ctx->pc = 0x7F21ABE0u;
    // 7F21ABE0: addi    r5, r31, 108
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(108);

label_7F21ABE4:
    ctx->pc = 0x7F21ABE4u;
    // 7F21ABE4: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F21ABE8:
    ctx->pc = 0x7F21ABE8u;
    // 7F21ABE8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21ABEC:
    loop_7F21ABEC(ctx);
    if (ctx->pc == 0x7F21AC00u) goto label_7F21AC00;
    return;
label_7F21ABF0:
    ctx->pc = 0x7F21ABF0u;
    // 7F21ABF0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F21ABF4:
    ctx->pc = 0x7F21ABF4u;
    // 7F21ABF4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21ABF8:
    ctx->pc = 0x7F21ABF8u;
    // 7F21ABF8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F21ABFC:
    // 7F21ABFC: bc    16, 0, 0x7F21ABEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21ABECu;
                return;
            }
            goto label_7F21ABEC;
        }
    }

label_7F21AC00:
    ctx->pc = 0x7F21AC00u;
    ctx->downcount -= 4;
    // 7F21AC00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AC04:
    ctx->pc = 0x7F21AC04u;
    // 7F21AC04: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21AC08:
    ctx->pc = 0x7F21AC08u;
    // 7F21AC08: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21AC0C:
    ctx->pc = 0x7F21AC0Cu;
    // 7F21AC0C: bl      0x7F21A6B4
    {
            ctx->lr = 0x7F21AC10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21A6B4u;
                return;
            }
            goto label_7F21A6B4;
    }

label_7F21AC10:
    ctx->pc = 0x7F21AC10u;
    ctx->downcount -= 2;
    // 7F21AC10: cmpwi   r3, 0
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

label_7F21AC14:
    ctx->pc = 0x7F21AC14u;
    // 7F21AC14: bc    4, 0, 0x7F21AC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AC28;
        }
    }

label_7F21AC18:
    ctx->pc = 0x7F21AC18u;
    ctx->downcount -= 2;
    // 7F21AC18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AC1C:
    ctx->pc = 0x7F21AC1Cu;
    // 7F21AC1C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21AC20u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21AC20:
    ctx->pc = 0x7F21AC20u;
    ctx->downcount -= 2;
    // 7F21AC20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21AC24:
    ctx->pc = 0x7F21AC24u;
    // 7F21AC24: b       0x7F21AC3C
    {
            goto label_7F21AC3C;
    }

label_7F21AC28:
    ctx->pc = 0x7F21AC28u;
    ctx->downcount -= 4;
    // 7F21AC28: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21AC2C:
    ctx->pc = 0x7F21AC2Cu;
    // 7F21AC2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AC30:
    ctx->pc = 0x7F21AC30u;
    // 7F21AC30: addi    r4, r4, -22148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22148);

label_7F21AC34:
    ctx->pc = 0x7F21AC34u;
    // 7F21AC34: bl      0x7F3C8990
    {
            ctx->lr = 0x7F21AC38u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F21AC38:
    ctx->pc = 0x7F21AC38u;
    ctx->downcount -= 1;
    // 7F21AC38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AC3C:
    ctx->pc = 0x7F21AC3Cu;
    ctx->downcount -= 16;
    // 7F21AC3C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21AC40:
    ctx->pc = 0x7F21AC40u;
    // 7F21AC40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AC44:
    ctx->pc = 0x7F21AC44u;
    // 7F21AC44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21AC48:
    ctx->pc = 0x7F21AC48u;
    // 7F21AC48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21AC4C:
    ctx->pc = 0x7F21AC4Cu;
    // 7F21AC4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21AC50:
    ctx->pc = 0x7F21AC50u;
    ctx->downcount -= 5;
    // 7F21AC50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21AC54:
    ctx->pc = 0x7F21AC54u;
    // 7F21AC54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21AC58:
    ctx->pc = 0x7F21AC58u;
    // 7F21AC58: cmpwi   r4, 1
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

label_7F21AC5C:
    ctx->pc = 0x7F21AC5Cu;
    // 7F21AC5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AC60:
    ctx->pc = 0x7F21AC60u;
    // 7F21AC60: bc    12, 2, 0x7F21ACE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21ACE0;
        }
    }

label_7F21AC64:
    ctx->pc = 0x7F21AC64u;
    ctx->downcount -= 1;
    // 7F21AC64: bc    4, 0, 0x7F21AD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AD4C;
        }
    }

label_7F21AC68:
    ctx->pc = 0x7F21AC68u;
    ctx->downcount -= 2;
    // 7F21AC68: cmpwi   r4, 0
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

label_7F21AC6C:
    ctx->pc = 0x7F21AC6Cu;
    // 7F21AC6C: bc    4, 0, 0x7F21AC74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AC74;
        }
    }

label_7F21AC70:
    ctx->pc = 0x7F21AC70u;
    ctx->downcount -= 1;
    // 7F21AC70: b       0x7F21AD4C
    {
            goto label_7F21AD4C;
    }

label_7F21AC74:
    ctx->pc = 0x7F21AC74u;
    ctx->downcount -= 39;
    // 7F21AC74: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F21AC78:
    ctx->pc = 0x7F21AC78u;
    // 7F21AC78: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21AC7C:
    ctx->pc = 0x7F21AC7Cu;
    // 7F21AC7C: stw     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21AC80:
    ctx->pc = 0x7F21AC80u;
    // 7F21AC80: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AC84:
    ctx->pc = 0x7F21AC84u;
    // 7F21AC84: addi    r6, r4, 16536
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16536);

label_7F21AC88:
    ctx->pc = 0x7F21AC88u;
    // 7F21AC88: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21AC8C:
    ctx->pc = 0x7F21AC8Cu;
    // 7F21AC8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AC90:
    ctx->pc = 0x7F21AC90u;
    // 7F21AC90: addi    r5, r4, 16544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16544);

label_7F21AC94:
    ctx->pc = 0x7F21AC94u;
    // 7F21AC94: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AC98:
    ctx->pc = 0x7F21AC98u;
    // 7F21AC98: xoris   r0, r7, 0x8000
    ctx->gpr[0] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F21AC9C:
    ctx->pc = 0x7F21AC9Cu;
    // 7F21AC9C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21ACA0:
    ctx->pc = 0x7F21ACA0u;
    // 7F21ACA0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21ACA4:
    ctx->pc = 0x7F21ACA4u;
    // 7F21ACA4: lfd     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACA4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21ACA8:
    ctx->pc = 0x7F21ACA8u;
    // 7F21ACA8: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21ACAC:
    ctx->pc = 0x7F21ACACu;
    // 7F21ACAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21ACB0:
    ctx->pc = 0x7F21ACB0u;
    // 7F21ACB0: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21ACB0u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F21ACB4:
    ctx->pc = 0x7F21ACB4u;
    // 7F21ACB4: lfs     f0, 16528(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21ACB8:
    ctx->pc = 0x7F21ACB8u;
    // 7F21ACB8: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21ACB8u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F21ACBC:
    ctx->pc = 0x7F21ACBCu;
    // 7F21ACBC: stfs     f1, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21ACC0:
    ctx->pc = 0x7F21ACC0u;
    // 7F21ACC0: lfs     f1, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21ACC4:
    ctx->pc = 0x7F21ACC4u;
    // 7F21ACC4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21ACC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21ACC8:
    ctx->pc = 0x7F21ACC8u;
    // 7F21ACC8: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F21ACCC:
    ctx->pc = 0x7F21ACCCu;
    // 7F21ACCC: bc    4, 2, 0x7F21AD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AD54;
        }
    }

label_7F21ACD0:
    ctx->pc = 0x7F21ACD0u;
    ctx->downcount -= 4;
    // 7F21ACD0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21ACD4:
    ctx->pc = 0x7F21ACD4u;
    // 7F21ACD4: lfs     f0, 16548(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21ACD8:
    ctx->pc = 0x7F21ACD8u;
    // 7F21ACD8: stfs     f0, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21ACD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21ACDC:
    ctx->pc = 0x7F21ACDCu;
    // 7F21ACDC: b       0x7F21AD54
    {
            goto label_7F21AD54;
    }

label_7F21ACE0:
    ctx->pc = 0x7F21ACE0u;
    ctx->downcount -= 39;
    // 7F21ACE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21ACE4:
    ctx->pc = 0x7F21ACE4u;
    // 7F21ACE4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21ACE8:
    ctx->pc = 0x7F21ACE8u;
    // 7F21ACE8: stw     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21ACEC:
    ctx->pc = 0x7F21ACECu;
    // 7F21ACEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21ACF0:
    ctx->pc = 0x7F21ACF0u;
    // 7F21ACF0: addi    r6, r4, 16536
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16536);

label_7F21ACF4:
    ctx->pc = 0x7F21ACF4u;
    // 7F21ACF4: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21ACF8:
    ctx->pc = 0x7F21ACF8u;
    // 7F21ACF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21ACFC:
    ctx->pc = 0x7F21ACFCu;
    // 7F21ACFC: addi    r5, r4, 16544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16544);

label_7F21AD00:
    ctx->pc = 0x7F21AD00u;
    // 7F21AD00: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AD04:
    ctx->pc = 0x7F21AD04u;
    // 7F21AD04: xoris   r0, r7, 0x8000
    ctx->gpr[0] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F21AD08:
    ctx->pc = 0x7F21AD08u;
    // 7F21AD08: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AD0C:
    ctx->pc = 0x7F21AD0Cu;
    // 7F21AD0C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AD10:
    ctx->pc = 0x7F21AD10u;
    // 7F21AD10: lfd     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AD14:
    ctx->pc = 0x7F21AD14u;
    // 7F21AD14: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AD18:
    ctx->pc = 0x7F21AD18u;
    // 7F21AD18: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AD1C:
    ctx->pc = 0x7F21AD1Cu;
    // 7F21AD1C: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21AD1Cu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F21AD20:
    ctx->pc = 0x7F21AD20u;
    // 7F21AD20: lfs     f0, 16528(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AD24:
    ctx->pc = 0x7F21AD24u;
    // 7F21AD24: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21AD24u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F21AD28:
    ctx->pc = 0x7F21AD28u;
    // 7F21AD28: stfs     f1, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21AD2C:
    ctx->pc = 0x7F21AD2Cu;
    // 7F21AD2C: lfs     f1, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AD30:
    ctx->pc = 0x7F21AD30u;
    // 7F21AD30: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AD30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21AD34:
    ctx->pc = 0x7F21AD34u;
    // 7F21AD34: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F21AD38:
    ctx->pc = 0x7F21AD38u;
    // 7F21AD38: bc    4, 2, 0x7F21AD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AD54;
        }
    }

label_7F21AD3C:
    ctx->pc = 0x7F21AD3Cu;
    ctx->downcount -= 4;
    // 7F21AD3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AD40:
    ctx->pc = 0x7F21AD40u;
    // 7F21AD40: lfs     f0, 16548(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AD44:
    ctx->pc = 0x7F21AD44u;
    // 7F21AD44: stfs     f0, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AD44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21AD48:
    ctx->pc = 0x7F21AD48u;
    // 7F21AD48: b       0x7F21AD54
    {
            goto label_7F21AD54;
    }

label_7F21AD4C:
    ctx->pc = 0x7F21AD4Cu;
    ctx->downcount -= 1;
    // 7F21AD4C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F21AD50u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F21AD50:
    ctx->pc = 0x7F21AD50u;
    ctx->downcount -= 1;
    // 7F21AD50: b       0x7F21AD58
    {
            goto label_7F21AD58;
    }

label_7F21AD54:
    ctx->pc = 0x7F21AD54u;
    ctx->downcount -= 1;
    // 7F21AD54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21AD58:
    ctx->pc = 0x7F21AD58u;
    ctx->downcount -= 5;
    // 7F21AD58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AD5C:
    ctx->pc = 0x7F21AD5Cu;
    // 7F21AD5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21AD60:
    ctx->pc = 0x7F21AD60u;
    // 7F21AD60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21AD64:
    ctx->pc = 0x7F21AD64u;
    // 7F21AD64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21AD68:
    ctx->pc = 0x7F21AD68u;
    ctx->downcount -= 4;
    // 7F21AD68: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F21AD6C:
    ctx->pc = 0x7F21AD6Cu;
    // 7F21AD6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21AD70:
    ctx->pc = 0x7F21AD70u;
    // 7F21AD70: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21AD74:
    ctx->downcount -= 4;
    // 7F21AD74: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F21AD78:
    ctx->pc = 0x7F21AD78u;
    // 7F21AD78: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21AD7C:
    // 7F21AD7C: cmplwi  r5, 0x0000
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

label_7F21AD80:
    // 7F21AD80: bc    12, 2, 0x7F21AD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AD90;
        }
    }

label_7F21AD84:
    ctx->pc = 0x7F21AD84u;
    ctx->downcount -= 3;
    // 7F21AD84: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AD88:
    // 7F21AD88: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F21AD8C:
    ctx->pc = 0x7F21AD8Cu;
    // 7F21AD8C: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AD90:
    ctx->downcount -= 2;
    // 7F21AD90: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F21AD94:
    // 7F21AD94: bc    16, 0, 0x7F21AD74
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AD74u;
                return;
            }
            goto label_7F21AD74;
        }
    }

label_7F21AD98:
    ctx->pc = 0x7F21AD98u;
    ctx->downcount -= 1;
    // 7F21AD98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21AD9C:
    ctx->pc = 0x7F21AD9Cu;
    ctx->downcount -= 4;
    // 7F21AD9C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F21ADA0:
    ctx->pc = 0x7F21ADA0u;
    // 7F21ADA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21ADA4:
    ctx->pc = 0x7F21ADA4u;
    // 7F21ADA4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21ADA8:
    ctx->downcount -= 4;
    // 7F21ADA8: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F21ADAC:
    ctx->pc = 0x7F21ADACu;
    // 7F21ADAC: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21ADB0:
    // 7F21ADB0: cmplwi  r5, 0x0000
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

label_7F21ADB4:
    // 7F21ADB4: bc    12, 2, 0x7F21ADC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21ADC4;
        }
    }

label_7F21ADB8:
    ctx->pc = 0x7F21ADB8u;
    ctx->downcount -= 3;
    // 7F21ADB8: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21ADBC:
    // 7F21ADBC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F21ADC0:
    ctx->pc = 0x7F21ADC0u;
    // 7F21ADC0: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21ADC4:
    ctx->downcount -= 2;
    // 7F21ADC4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F21ADC8:
    // 7F21ADC8: bc    16, 0, 0x7F21ADA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21ADA8u;
                return;
            }
            goto label_7F21ADA8;
        }
    }

label_7F21ADCC:
    ctx->pc = 0x7F21ADCCu;
    ctx->downcount -= 1;
    // 7F21ADCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21ADD0:
    ctx->pc = 0x7F21ADD0u;
    ctx->downcount -= 19;
    // 7F21ADD0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21ADD4:
    ctx->pc = 0x7F21ADD4u;
    // 7F21ADD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21ADD8:
    ctx->pc = 0x7F21ADD8u;
    // 7F21ADD8: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21ADDC:
    ctx->pc = 0x7F21ADDCu;
    // 7F21ADDC: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ADDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F21ADE0:
    ctx->pc = 0x7F21ADE0u;
    // 7F21ADE0: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21ADE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F21ADE0u);
        if (ctx->exception) return;
    }

label_7F21ADE4:
    ctx->pc = 0x7F21ADE4u;
    // 7F21ADE4: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ADE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F21ADE8:
    ctx->pc = 0x7F21ADE8u;
    // 7F21ADE8: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21ADE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F21ADE8u);
        if (ctx->exception) return;
    }

label_7F21ADEC:
    ctx->pc = 0x7F21ADECu;
    // 7F21ADEC: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ADECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F21ADF0:
    ctx->pc = 0x7F21ADF0u;
    // 7F21ADF0: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21ADF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F21ADF0u);
        if (ctx->exception) return;
    }

label_7F21ADF4:
    ctx->pc = 0x7F21ADF4u;
    // 7F21ADF4: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ADF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F21ADF8:
    ctx->pc = 0x7F21ADF8u;
    // 7F21ADF8: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21ADF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F21ADF8u);
        if (ctx->exception) return;
    }

label_7F21ADFC:
    ctx->pc = 0x7F21ADFCu;
    // 7F21ADFC: stfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21ADFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F21AE00:
    ctx->pc = 0x7F21AE00u;
    // 7F21AE00: psq_st   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21AE00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F21AE00u);
        if (ctx->exception) return;
    }

label_7F21AE04:
    ctx->pc = 0x7F21AE04u;
    // 7F21AE04: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21AE08:
    ctx->pc = 0x7F21AE08u;
    // 7F21AE08: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AE0C:
    ctx->pc = 0x7F21AE0Cu;
    // 7F21AE0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21AE10:
    ctx->pc = 0x7F21AE10u;
    // 7F21AE10: lfs     f27, 16552(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F21AE14:
    ctx->pc = 0x7F21AE14u;
    // 7F21AE14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21AE18:
    ctx->pc = 0x7F21AE18u;
    // 7F21AE18: bl      0x7F026F84
    {
            ctx->lr = 0x7F21AE1Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F21AE1C:
    ctx->pc = 0x7F21AE1Cu;
    ctx->downcount -= 3;
    // 7F21AE1C: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AE20:
    ctx->pc = 0x7F21AE20u;
    // 7F21AE20: cmpwi   r0, 0
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

label_7F21AE24:
    ctx->pc = 0x7F21AE24u;
    // 7F21AE24: bc    12, 2, 0x7F21AE88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AE88;
        }
    }

label_7F21AE28:
    ctx->pc = 0x7F21AE28u;
    ctx->downcount -= 22;
    // 7F21AE28: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F21AE2C:
    ctx->pc = 0x7F21AE2Cu;
    // 7F21AE2C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21AE30:
    ctx->pc = 0x7F21AE30u;
    // 7F21AE30: addi    r4, r3, 5000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F21AE34:
    ctx->pc = 0x7F21AE34u;
    // 7F21AE34: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AE38:
    ctx->pc = 0x7F21AE38u;
    // 7F21AE38: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21AE3C:
    ctx->pc = 0x7F21AE3Cu;
    // 7F21AE3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AE40:
    ctx->pc = 0x7F21AE40u;
    // 7F21AE40: addi    r4, r3, 16536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16536);

label_7F21AE44:
    ctx->pc = 0x7F21AE44u;
    // 7F21AE44: lfs     f3, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21AE48:
    ctx->pc = 0x7F21AE48u;
    // 7F21AE48: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F21AE4C:
    ctx->pc = 0x7F21AE4Cu;
    // 7F21AE4C: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AE50:
    ctx->pc = 0x7F21AE50u;
    // 7F21AE50: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21AE54:
    ctx->pc = 0x7F21AE54u;
    // 7F21AE54: lfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AE58:
    ctx->pc = 0x7F21AE58u;
    // 7F21AE58: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AE5C:
    ctx->pc = 0x7F21AE5Cu;
    // 7F21AE5C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AE60:
    ctx->pc = 0x7F21AE60u;
    // 7F21AE60: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AE64:
    ctx->pc = 0x7F21AE64u;
    // 7F21AE64: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AE64u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F21AE68:
    ctx->pc = 0x7F21AE68u;
    // 7F21AE68: lfs     f0, 16528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AE6C:
    ctx->pc = 0x7F21AE6Cu;
    // 7F21AE6C: fnmsubs f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21AE6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F21AE70:
    ctx->pc = 0x7F21AE70u;
    // 7F21AE70: stfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21AE74:
    ctx->pc = 0x7F21AE74u;
    // 7F21AE74: lfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AE78:
    ctx->pc = 0x7F21AE78u;
    // 7F21AE78: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AE78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21AE7C:
    ctx->pc = 0x7F21AE7Cu;
    // 7F21AE7C: bc    4, 0, 0x7F21AEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AEE4;
        }
    }

label_7F21AE80:
    ctx->pc = 0x7F21AE80u;
    ctx->downcount -= 2;
    // 7F21AE80: stfs     f0, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AE80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21AE84:
    ctx->pc = 0x7F21AE84u;
    // 7F21AE84: b       0x7F21AEE4
    {
            goto label_7F21AEE4;
    }

label_7F21AE88:
    ctx->pc = 0x7F21AE88u;
    ctx->downcount -= 22;
    // 7F21AE88: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F21AE8C:
    ctx->pc = 0x7F21AE8Cu;
    // 7F21AE8C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21AE90:
    ctx->pc = 0x7F21AE90u;
    // 7F21AE90: addi    r4, r3, 5000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F21AE94:
    ctx->pc = 0x7F21AE94u;
    // 7F21AE94: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AE98:
    ctx->pc = 0x7F21AE98u;
    // 7F21AE98: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21AE9C:
    ctx->pc = 0x7F21AE9Cu;
    // 7F21AE9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AEA0:
    ctx->pc = 0x7F21AEA0u;
    // 7F21AEA0: addi    r4, r3, 16536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16536);

label_7F21AEA4:
    ctx->pc = 0x7F21AEA4u;
    // 7F21AEA4: lfs     f3, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21AEA8:
    ctx->pc = 0x7F21AEA8u;
    // 7F21AEA8: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F21AEAC:
    ctx->pc = 0x7F21AEACu;
    // 7F21AEAC: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AEB0:
    ctx->pc = 0x7F21AEB0u;
    // 7F21AEB0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21AEB4:
    ctx->pc = 0x7F21AEB4u;
    // 7F21AEB4: lfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AEB8:
    ctx->pc = 0x7F21AEB8u;
    // 7F21AEB8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AEBC:
    ctx->pc = 0x7F21AEBCu;
    // 7F21AEBC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AEC0:
    ctx->pc = 0x7F21AEC0u;
    // 7F21AEC0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AEC4:
    ctx->pc = 0x7F21AEC4u;
    // 7F21AEC4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AEC4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F21AEC8:
    ctx->pc = 0x7F21AEC8u;
    // 7F21AEC8: lfs     f0, 16556(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AECC:
    ctx->pc = 0x7F21AECCu;
    // 7F21AECC: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21AECCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F21AED0:
    ctx->pc = 0x7F21AED0u;
    // 7F21AED0: stfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AED0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21AED4:
    ctx->pc = 0x7F21AED4u;
    // 7F21AED4: lfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AED4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AED8:
    ctx->pc = 0x7F21AED8u;
    // 7F21AED8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AED8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21AEDC:
    ctx->pc = 0x7F21AEDCu;
    // 7F21AEDC: bc    4, 1, 0x7F21AEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AEE4;
        }
    }

label_7F21AEE0:
    ctx->pc = 0x7F21AEE0u;
    ctx->downcount -= 1;
    // 7F21AEE0: stfs     f0, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21AEE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21AEE4:
    ctx->pc = 0x7F21AEE4u;
    ctx->downcount -= 3;
    // 7F21AEE4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F21AEE8:
    ctx->pc = 0x7F21AEE8u;
    // 7F21AEE8: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F21AEEC:
    ctx->pc = 0x7F21AEECu;
    // 7F21AEEC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F21AEF0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F21AEF0:
    ctx->pc = 0x7F21AEF0u;
    ctx->downcount -= 4;
    // 7F21AEF0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F21AEF4:
    ctx->pc = 0x7F21AEF4u;
    // 7F21AEF4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21AEF8:
    ctx->pc = 0x7F21AEF8u;
    // 7F21AEF8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F21AEFC:
    ctx->pc = 0x7F21AEFCu;
    // 7F21AEFC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F21AF00u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F21AF00:
    ctx->pc = 0x7F21AF00u;
    ctx->downcount -= 39;
    // 7F21AF00: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21AF04:
    ctx->pc = 0x7F21AF04u;
    // 7F21AF04: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21AF08:
    ctx->pc = 0x7F21AF08u;
    // 7F21AF08: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AF0C:
    ctx->pc = 0x7F21AF0Cu;
    // 7F21AF0C: fdivs   f29, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AF0Cu)) return;
    ppc_fdivs(ctx, 29, 1, 2);

label_7F21AF10:
    ctx->pc = 0x7F21AF10u;
    // 7F21AF10: fdivs   f28, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AF10u)) return;
    ppc_fdivs(ctx, 28, 0, 2);

label_7F21AF14:
    ctx->pc = 0x7F21AF14u;
    // 7F21AF14: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F21AF14u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F21AF18:
    ctx->pc = 0x7F21AF18u;
    // 7F21AF18: bl      0x7F21B204
    {
            ctx->lr = 0x7F21AF1Cu;
            goto label_7F21B204;
    }

label_7F21AF1C:
    ctx->pc = 0x7F21AF1Cu;
    ctx->downcount -= 3;
    // 7F21AF1C: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21AF1Cu)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F21AF20:
    ctx->pc = 0x7F21AF20u;
    // 7F21AF20: fmr    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F21AF20u)) return;
    ctx->fpr[1] = ctx->fpr[28];

label_7F21AF24:
    ctx->pc = 0x7F21AF24u;
    // 7F21AF24: bl      0x7F21B204
    {
            ctx->lr = 0x7F21AF28u;
            goto label_7F21B204;
    }

label_7F21AF28:
    ctx->pc = 0x7F21AF28u;
    ctx->downcount -= 4;
    // 7F21AF28: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21AF2C:
    ctx->pc = 0x7F21AF2Cu;
    // 7F21AF2C: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AF30:
    ctx->pc = 0x7F21AF30u;
    // 7F21AF30: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AF30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F21AF34:
    ctx->pc = 0x7F21AF34u;
    // 7F21AF34: bc    12, 0, 0x7F21AF50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AF50;
        }
    }

label_7F21AF38:
    ctx->pc = 0x7F21AF38u;
    ctx->downcount -= 4;
    // 7F21AF38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AF3C:
    ctx->pc = 0x7F21AF3Cu;
    // 7F21AF3C: lfs     f0, 16560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AF40:
    ctx->pc = 0x7F21AF40u;
    // 7F21AF40: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AF40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F21AF44:
    ctx->pc = 0x7F21AF44u;
    // 7F21AF44: bc    12, 1, 0x7F21AF50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21AF50;
        }
    }

label_7F21AF48:
    ctx->pc = 0x7F21AF48u;
    ctx->downcount -= 2;
    // 7F21AF48: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AF48u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21AF4C:
    ctx->pc = 0x7F21AF4Cu;
    // 7F21AF4C: bc    4, 1, 0x7F21AF5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21AF5C;
        }
    }

label_7F21AF50:
    ctx->pc = 0x7F21AF50u;
    ctx->downcount -= 2;
    // 7F21AF50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21AF54:
    ctx->pc = 0x7F21AF54u;
    // 7F21AF54: bl      0x7F21AD68
    {
            ctx->lr = 0x7F21AF58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AD68u;
                return;
            }
            goto label_7F21AD68;
    }

label_7F21AF58:
    ctx->pc = 0x7F21AF58u;
    ctx->downcount -= 1;
    // 7F21AF58: b       0x7F21B1C8
    {
            goto label_7F21B1C8;
    }

label_7F21AF5C:
    ctx->pc = 0x7F21AF5Cu;
    ctx->downcount -= 100;
    // 7F21AF5C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F21AF60:
    ctx->pc = 0x7F21AF60u;
    // 7F21AF60: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F21AF64:
    ctx->pc = 0x7F21AF64u;
    // 7F21AF64: addi    r8, r3, 28636
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F21AF68:
    ctx->pc = 0x7F21AF68u;
    // 7F21AF68: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F21AF6C:
    ctx->pc = 0x7F21AF6Cu;
    // 7F21AF6C: lwz     r6, 920(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21AF70:
    ctx->pc = 0x7F21AF70u;
    // 7F21AF70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AF74:
    ctx->pc = 0x7F21AF74u;
    // 7F21AF74: addi    r4, r3, 16536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16536);

label_7F21AF78:
    ctx->pc = 0x7F21AF78u;
    // 7F21AF78: lwz     r0, 924(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21AF7C:
    ctx->pc = 0x7F21AF7Cu;
    // 7F21AF7C: xoris   r3, r6, 0x8000
    ctx->gpr[3] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F21AF80:
    ctx->pc = 0x7F21AF80u;
    // 7F21AF80: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21AF84:
    ctx->pc = 0x7F21AF84u;
    // 7F21AF84: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21AF88:
    ctx->pc = 0x7F21AF88u;
    // 7F21AF88: lfd     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AF8C:
    ctx->pc = 0x7F21AF8Cu;
    // 7F21AF8C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21AF90:
    ctx->pc = 0x7F21AF90u;
    // 7F21AF90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AF94:
    ctx->pc = 0x7F21AF94u;
    // 7F21AF94: addi    r4, r3, 16572
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16572);

label_7F21AF98:
    ctx->pc = 0x7F21AF98u;
    // 7F21AF98: lfs     f5, 16568(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF98u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F21AF9C:
    ctx->pc = 0x7F21AF9Cu;
    // 7F21AF9C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AF9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AFA0:
    ctx->pc = 0x7F21AFA0u;
    // 7F21AFA0: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F21AFA4:
    ctx->pc = 0x7F21AFA4u;
    // 7F21AFA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21AFA8:
    ctx->pc = 0x7F21AFA8u;
    // 7F21AFA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AFAC:
    ctx->pc = 0x7F21AFACu;
    // 7F21AFAC: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21AFACu)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_7F21AFB0:
    ctx->pc = 0x7F21AFB0u;
    // 7F21AFB0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AFB4:
    ctx->pc = 0x7F21AFB4u;
    // 7F21AFB4: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21AFB8:
    ctx->pc = 0x7F21AFB8u;
    // 7F21AFB8: fsubs   f6, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AFB8u)) return;
    ppc_fsubs(ctx, 6, 30, 0);

label_7F21AFBC:
    ctx->pc = 0x7F21AFBCu;
    // 7F21AFBC: lfs     f0, 16528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AFC0:
    ctx->pc = 0x7F21AFC0u;
    // 7F21AFC0: lfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21AFC4:
    ctx->pc = 0x7F21AFC4u;
    // 7F21AFC4: fmuls   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21AFC4u)) return;
    ppc_fmuls(ctx, 3, 5, 3);

label_7F21AFC8:
    ctx->pc = 0x7F21AFC8u;
    // 7F21AFC8: lfs     f5, 16564(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFC8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F21AFCC:
    ctx->pc = 0x7F21AFCCu;
    // 7F21AFCC: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21AFCCu)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_7F21AFD0:
    ctx->pc = 0x7F21AFD0u;
    // 7F21AFD0: lfs     f4, 896(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFD0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F21AFD4:
    ctx->pc = 0x7F21AFD4u;
    // 7F21AFD4: fcmpo   cr0, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21AFD4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[6], ctx->fpr[0], true);

label_7F21AFD8:
    ctx->pc = 0x7F21AFD8u;
    // 7F21AFD8: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AFD8u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F21AFDC:
    ctx->pc = 0x7F21AFDCu;
    // 7F21AFDC: fdivs   f2, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21AFDCu)) return;
    ppc_fdivs(ctx, 2, 5, 2);

label_7F21AFE0:
    ctx->pc = 0x7F21AFE0u;
    // 7F21AFE0: fdivs   f31, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21AFE0u)) return;
    ppc_fdivs(ctx, 31, 5, 4);

label_7F21AFE4:
    ctx->pc = 0x7F21AFE4u;
    // 7F21AFE4: fdivs   f30, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21AFE4u)) return;
    ppc_fdivs(ctx, 30, 2, 4);

label_7F21AFE8:
    ctx->pc = 0x7F21AFE8u;
    // 7F21AFE8: bc    4, 1, 0x7F21B008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B008;
        }
    }

label_7F21AFEC:
    ctx->pc = 0x7F21AFECu;
    ctx->downcount -= 23;
    // 7F21AFEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21AFF0:
    ctx->pc = 0x7F21AFF0u;
    // 7F21AFF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21AFF4:
    ctx->pc = 0x7F21AFF4u;
    // 7F21AFF4: lfs     f3, 16552(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21AFF8:
    ctx->pc = 0x7F21AFF8u;
    // 7F21AFF8: lfs     f0, 16576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21AFF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21AFFC:
    ctx->pc = 0x7F21AFFCu;
    // 7F21AFFC: fmuls   f2, f3, f6
    if (!ppc_fp_available_inline(ctx, 0x7F21AFFCu)) return;
    ppc_fmuls(ctx, 2, 3, 6);

label_7F21B000:
    ctx->pc = 0x7F21B000u;
    // 7F21B000: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B000u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F21B004:
    ctx->pc = 0x7F21B004u;
    // 7F21B004: fsubs   f27, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B004u)) return;
    ppc_fsubs(ctx, 27, 3, 0);

label_7F21B008:
    ctx->pc = 0x7F21B008u;
    ctx->downcount -= 7;
    // 7F21B008: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B00C:
    ctx->pc = 0x7F21B00Cu;
    // 7F21B00C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B010:
    ctx->pc = 0x7F21B010u;
    // 7F21B010: lfs     f2, 16572(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B010u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21B014:
    ctx->pc = 0x7F21B014u;
    // 7F21B014: lfs     f0, 16528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B014u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B018:
    ctx->pc = 0x7F21B018u;
    // 7F21B018: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21B018u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F21B01C:
    ctx->pc = 0x7F21B01Cu;
    // 7F21B01C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B01Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21B020:
    ctx->pc = 0x7F21B020u;
    // 7F21B020: bc    4, 1, 0x7F21B040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B040;
        }
    }

label_7F21B024:
    ctx->pc = 0x7F21B024u;
    ctx->downcount -= 23;
    // 7F21B024: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B028:
    ctx->pc = 0x7F21B028u;
    // 7F21B028: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B02C:
    ctx->pc = 0x7F21B02Cu;
    // 7F21B02C: lfs     f2, 16552(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B02Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21B030:
    ctx->pc = 0x7F21B030u;
    // 7F21B030: lfs     f0, 16576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B030u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B034:
    ctx->pc = 0x7F21B034u;
    // 7F21B034: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B034u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F21B038:
    ctx->pc = 0x7F21B038u;
    // 7F21B038: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B038u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F21B03C:
    ctx->pc = 0x7F21B03Cu;
    // 7F21B03C: fsubs   f27, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B03Cu)) return;
    ppc_fsubs(ctx, 27, 2, 0);

label_7F21B040:
    ctx->pc = 0x7F21B040u;
    ctx->downcount -= 5;
    // 7F21B040: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B044:
    ctx->pc = 0x7F21B044u;
    // 7F21B044: lfs     f0, 16528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B044u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B048:
    ctx->pc = 0x7F21B048u;
    // 7F21B048: fcmpo   cr0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B048u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[27], ctx->fpr[0], true);

label_7F21B04C:
    ctx->pc = 0x7F21B04Cu;
    // 7F21B04C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F21B050:
    ctx->pc = 0x7F21B050u;
    // 7F21B050: bc    4, 2, 0x7F21B060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B060;
        }
    }

label_7F21B054:
    ctx->pc = 0x7F21B054u;
    ctx->downcount -= 2;
    // 7F21B054: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B058:
    ctx->pc = 0x7F21B058u;
    // 7F21B058: bl      0x7F21AD68
    {
            ctx->lr = 0x7F21B05Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AD68u;
                return;
            }
            goto label_7F21AD68;
    }

label_7F21B05C:
    ctx->pc = 0x7F21B05Cu;
    ctx->downcount -= 1;
    // 7F21B05C: b       0x7F21B1C8
    {
            goto label_7F21B1C8;
    }

label_7F21B060:
    ctx->pc = 0x7F21B060u;
    ctx->downcount -= 2;
    // 7F21B060: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B064:
    ctx->pc = 0x7F21B064u;
    // 7F21B064: bl      0x7F21AD9C
    {
            ctx->lr = 0x7F21B068u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21AD9Cu;
                return;
            }
            goto label_7F21AD9C;
    }

label_7F21B068:
    ctx->pc = 0x7F21B068u;
    ctx->downcount -= 11;
    // 7F21B068: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B06C:
    ctx->pc = 0x7F21B06Cu;
    // 7F21B06C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F21B070:
    ctx->pc = 0x7F21B070u;
    // 7F21B070: addi    r5, r4, 8320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8320);

label_7F21B074:
    ctx->pc = 0x7F21B074u;
    // 7F21B074: lfs     f0, 16580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B074u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B078:
    ctx->pc = 0x7F21B078u;
    // 7F21B078: fneg    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F21B078u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[29]) ^ 0x8000000000000000ull);

label_7F21B07C:
    ctx->pc = 0x7F21B07Cu;
    // 7F21B07C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F21B080:
    ctx->pc = 0x7F21B080u;
    // 7F21B080: fneg    f2, f28
    if (!ppc_fp_available_inline(ctx, 0x7F21B080u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[28]) ^ 0x8000000000000000ull);

label_7F21B084:
    ctx->pc = 0x7F21B084u;
    // 7F21B084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21B088:
    ctx->pc = 0x7F21B088u;
    // 7F21B088: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21B08C:
    ctx->pc = 0x7F21B08Cu;
    // 7F21B08C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21B090:
    ctx->downcount -= 78;
    // 7F21B090: addi    r7, r4, 64
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(64);

label_7F21B094:
    // 7F21B094: add   r8, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F21B098:
    ctx->pc = 0x7F21B098u;
    // 7F21B098: lwzx    r6, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21B09C:
    // 7F21B09C: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F21B0A0:
    // 7F21B0A0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F21B0A4:
    ctx->pc = 0x7F21B0A4u;
    // 7F21B0A4: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B0A8:
    // 7F21B0A8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F21B0AC:
    ctx->pc = 0x7F21B0ACu;
    // 7F21B0AC: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B0B0:
    ctx->pc = 0x7F21B0B0u;
    // 7F21B0B0: lfs     f5, 12(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0B0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F21B0B4:
    ctx->pc = 0x7F21B0B4u;
    // 7F21B0B4: lwzx    r6, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21B0B8:
    ctx->pc = 0x7F21B0B8u;
    // 7F21B0B8: fmadds f4, f1, f5, f29
    if (!ppc_fp_available_inline(ctx, 0x7F21B0B8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[5], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_7F21B0BC:
    ctx->pc = 0x7F21B0BCu;
    // 7F21B0BC: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0BCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B0C0:
    ctx->pc = 0x7F21B0C0u;
    // 7F21B0C0: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B0C4:
    ctx->pc = 0x7F21B0C4u;
    // 7F21B0C4: fmadds f5, f2, f5, f28
    if (!ppc_fp_available_inline(ctx, 0x7F21B0C4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[5], ctx->fpr[28], true, false, false, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_7F21B0C8:
    ctx->pc = 0x7F21B0C8u;
    // 7F21B0C8: fsubs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B0C8u)) return;
    ppc_fsubs(ctx, 3, 4, 3);

label_7F21B0CC:
    // 7F21B0CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F21B0D0:
    // 7F21B0D0: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F21B0D4:
    ctx->pc = 0x7F21B0D4u;
    // 7F21B0D4: lwz     r7, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21B0D8:
    ctx->pc = 0x7F21B0D8u;
    // 7F21B0D8: fmuls   f3, f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B0D8u)) return;
    ppc_fmuls(ctx, 3, 31, 3);

label_7F21B0DC:
    ctx->pc = 0x7F21B0DCu;
    // 7F21B0DC: lwz     r6, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21B0E0:
    ctx->pc = 0x7F21B0E0u;
    // 7F21B0E0: stfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0E0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B0E4:
    ctx->pc = 0x7F21B0E4u;
    // 7F21B0E4: lfs     f3, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0E4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B0E8:
    ctx->pc = 0x7F21B0E8u;
    // 7F21B0E8: fsubs   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B0E8u)) return;
    ppc_fsubs(ctx, 3, 5, 3);

label_7F21B0EC:
    ctx->pc = 0x7F21B0ECu;
    // 7F21B0EC: fmuls   f3, f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B0ECu)) return;
    ppc_fmuls(ctx, 3, 30, 3);

label_7F21B0F0:
    ctx->pc = 0x7F21B0F0u;
    // 7F21B0F0: stfs     f3, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0F0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B0F4:
    ctx->pc = 0x7F21B0F4u;
    // 7F21B0F4: stfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B0F8:
    ctx->pc = 0x7F21B0F8u;
    // 7F21B0F8: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B0F8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B0FC:
    ctx->pc = 0x7F21B0FCu;
    // 7F21B0FC: fadds   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B0FCu)) return;
    ppc_fadds(ctx, 3, 4, 3);

label_7F21B100:
    ctx->pc = 0x7F21B100u;
    // 7F21B100: fmuls   f3, f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B100u)) return;
    ppc_fmuls(ctx, 3, 31, 3);

label_7F21B104:
    ctx->pc = 0x7F21B104u;
    // 7F21B104: stfs     f3, 16(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B104u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B108:
    ctx->pc = 0x7F21B108u;
    // 7F21B108: lfs     f3, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B108u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B10C:
    ctx->pc = 0x7F21B10Cu;
    // 7F21B10C: fsubs   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B10Cu)) return;
    ppc_fsubs(ctx, 3, 5, 3);

label_7F21B110:
    ctx->pc = 0x7F21B110u;
    // 7F21B110: fmuls   f3, f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B110u)) return;
    ppc_fmuls(ctx, 3, 30, 3);

label_7F21B114:
    ctx->pc = 0x7F21B114u;
    // 7F21B114: stfs     f3, 20(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B114u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B118:
    ctx->pc = 0x7F21B118u;
    // 7F21B118: stfs     f0, 24(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B118u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B11C:
    ctx->pc = 0x7F21B11Cu;
    // 7F21B11C: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B11Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B120:
    ctx->pc = 0x7F21B120u;
    // 7F21B120: fsubs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B120u)) return;
    ppc_fsubs(ctx, 3, 4, 3);

label_7F21B124:
    ctx->pc = 0x7F21B124u;
    // 7F21B124: fmuls   f3, f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B124u)) return;
    ppc_fmuls(ctx, 3, 31, 3);

label_7F21B128:
    ctx->pc = 0x7F21B128u;
    // 7F21B128: stfs     f3, 32(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B128u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B12C:
    ctx->pc = 0x7F21B12Cu;
    // 7F21B12C: lfs     f3, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B12Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B130:
    ctx->pc = 0x7F21B130u;
    // 7F21B130: fadds   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B130u)) return;
    ppc_fadds(ctx, 3, 5, 3);

label_7F21B134:
    ctx->pc = 0x7F21B134u;
    // 7F21B134: fmuls   f3, f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B134u)) return;
    ppc_fmuls(ctx, 3, 30, 3);

label_7F21B138:
    ctx->pc = 0x7F21B138u;
    // 7F21B138: stfs     f3, 36(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B138u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B13C:
    ctx->pc = 0x7F21B13Cu;
    // 7F21B13C: stfs     f0, 40(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B13Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B140:
    ctx->pc = 0x7F21B140u;
    // 7F21B140: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B140u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B144:
    ctx->pc = 0x7F21B144u;
    // 7F21B144: fadds   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B144u)) return;
    ppc_fadds(ctx, 3, 4, 3);

label_7F21B148:
    ctx->pc = 0x7F21B148u;
    // 7F21B148: fmuls   f3, f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B148u)) return;
    ppc_fmuls(ctx, 3, 31, 3);

label_7F21B14C:
    ctx->pc = 0x7F21B14Cu;
    // 7F21B14C: stfs     f3, 48(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B14Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B150:
    ctx->pc = 0x7F21B150u;
    // 7F21B150: lfs     f3, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F21B150u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B154:
    ctx->pc = 0x7F21B154u;
    // 7F21B154: fadds   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B154u)) return;
    ppc_fadds(ctx, 3, 5, 3);

label_7F21B158:
    ctx->pc = 0x7F21B158u;
    // 7F21B158: fmuls   f3, f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B158u)) return;
    ppc_fmuls(ctx, 3, 30, 3);

label_7F21B15C:
    ctx->pc = 0x7F21B15Cu;
    // 7F21B15C: stfs     f3, 52(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B15Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F21B160:
    ctx->pc = 0x7F21B160u;
    // 7F21B160: stfs     f0, 56(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F21B160u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B164:
    ctx->pc = 0x7F21B164u;
    // 7F21B164: lfs     f3, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21B164u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B168:
    ctx->pc = 0x7F21B168u;
    // 7F21B168: fmuls   f3, f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B168u)) return;
    ppc_fmuls(ctx, 3, 27, 3);

label_7F21B16C:
    ctx->pc = 0x7F21B16Cu;
    // 7F21B16C: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B16Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F21B170:
    ctx->pc = 0x7F21B170u;
    // 7F21B170: stfd     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F21B174:
    ctx->pc = 0x7F21B174u;
    // 7F21B174: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B178:
    ctx->pc = 0x7F21B178u;
    // 7F21B178: stb     r0, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B17C:
    ctx->pc = 0x7F21B17Cu;
    // 7F21B17C: lfs     f3, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21B17Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B180:
    ctx->pc = 0x7F21B180u;
    // 7F21B180: fmuls   f3, f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B180u)) return;
    ppc_fmuls(ctx, 3, 27, 3);

label_7F21B184:
    ctx->pc = 0x7F21B184u;
    // 7F21B184: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B184u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F21B188:
    ctx->pc = 0x7F21B188u;
    // 7F21B188: stfd     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F21B18C:
    ctx->pc = 0x7F21B18Cu;
    // 7F21B18C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B190:
    ctx->pc = 0x7F21B190u;
    // 7F21B190: stb     r0, 15(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B194:
    ctx->pc = 0x7F21B194u;
    // 7F21B194: lfs     f3, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21B194u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B198:
    ctx->pc = 0x7F21B198u;
    // 7F21B198: fmuls   f3, f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B198u)) return;
    ppc_fmuls(ctx, 3, 27, 3);

label_7F21B19C:
    ctx->pc = 0x7F21B19Cu;
    // 7F21B19C: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B19Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F21B1A0:
    ctx->pc = 0x7F21B1A0u;
    // 7F21B1A0: stfd     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F21B1A4:
    ctx->pc = 0x7F21B1A4u;
    // 7F21B1A4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B1A8:
    ctx->pc = 0x7F21B1A8u;
    // 7F21B1A8: stb     r0, 27(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B1AC:
    ctx->pc = 0x7F21B1ACu;
    // 7F21B1AC: lfs     f3, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21B1B0:
    ctx->pc = 0x7F21B1B0u;
    // 7F21B1B0: fmuls   f3, f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B1B0u)) return;
    ppc_fmuls(ctx, 3, 27, 3);

label_7F21B1B4:
    ctx->pc = 0x7F21B1B4u;
    // 7F21B1B4: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B1B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F21B1B8:
    ctx->pc = 0x7F21B1B8u;
    // 7F21B1B8: stfd     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F21B1BC:
    ctx->pc = 0x7F21B1BCu;
    // 7F21B1BC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B1C0:
    ctx->pc = 0x7F21B1C0u;
    // 7F21B1C0: stb     r0, 39(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B1C4:
    // 7F21B1C4: bc    16, 0, 0x7F21B090
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B090u;
                return;
            }
            goto label_7F21B090;
        }
    }

label_7F21B1C8:
    ctx->pc = 0x7F21B1C8u;
    ctx->downcount -= 16;
    // 7F21B1C8: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B1C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F21B1C8u);
        if (ctx->exception) return;
    }

label_7F21B1CC:
    ctx->pc = 0x7F21B1CCu;
    // 7F21B1CC: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B1D0:
    ctx->pc = 0x7F21B1D0u;
    // 7F21B1D0: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B1D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F21B1D0u);
        if (ctx->exception) return;
    }

label_7F21B1D4:
    ctx->pc = 0x7F21B1D4u;
    // 7F21B1D4: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B1D8:
    ctx->pc = 0x7F21B1D8u;
    // 7F21B1D8: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B1D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F21B1D8u);
        if (ctx->exception) return;
    }

label_7F21B1DC:
    ctx->pc = 0x7F21B1DCu;
    // 7F21B1DC: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B1E0:
    ctx->pc = 0x7F21B1E0u;
    // 7F21B1E0: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B1E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F21B1E0u);
        if (ctx->exception) return;
    }

label_7F21B1E4:
    ctx->pc = 0x7F21B1E4u;
    // 7F21B1E4: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B1E8:
    ctx->pc = 0x7F21B1E8u;
    // 7F21B1E8: psq_l   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B1E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F21B1E8u);
        if (ctx->exception) return;
    }

label_7F21B1EC:
    ctx->pc = 0x7F21B1ECu;
    // 7F21B1EC: lfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B1ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B1F0:
    ctx->pc = 0x7F21B1F0u;
    // 7F21B1F0: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B1F4:
    ctx->pc = 0x7F21B1F4u;
    // 7F21B1F4: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21B1F8:
    ctx->pc = 0x7F21B1F8u;
    // 7F21B1F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B1FC:
    ctx->pc = 0x7F21B1FCu;
    // 7F21B1FC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F21B200:
    ctx->pc = 0x7F21B200u;
    // 7F21B200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B204:
    ctx->pc = 0x7F21B204u;
    ctx->downcount -= 8;
    // 7F21B204: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B208:
    ctx->pc = 0x7F21B208u;
    // 7F21B208: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B208u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21B20C:
    ctx->pc = 0x7F21B20Cu;
    // 7F21B20C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B210:
    ctx->pc = 0x7F21B210u;
    // 7F21B210: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F21B214:
    ctx->pc = 0x7F21B214u;
    // 7F21B214: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B218:
    ctx->pc = 0x7F21B218u;
    // 7F21B218: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21B21C:
    ctx->pc = 0x7F21B21Cu;
    // 7F21B21C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21B220:
    ctx->pc = 0x7F21B220u;
    // 7F21B220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B224:
    ctx->pc = 0x7F21B224u;
    ctx->downcount -= 17;
    // 7F21B224: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B228:
    ctx->pc = 0x7F21B228u;
    // 7F21B228: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B22C:
    ctx->pc = 0x7F21B22Cu;
    // 7F21B22C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B230:
    ctx->pc = 0x7F21B230u;
    // 7F21B230: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21B234:
    ctx->pc = 0x7F21B234u;
    // 7F21B234: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B238:
    ctx->pc = 0x7F21B238u;
    // 7F21B238: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F21B23C:
    ctx->pc = 0x7F21B23Cu;
    // 7F21B23C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F21B240:
    ctx->downcount -= 4;
    // 7F21B240: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_7F21B244:
    ctx->pc = 0x7F21B244u;
    // 7F21B244: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B248:
    // 7F21B248: cmplwi  r3, 0x0000
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

label_7F21B24C:
    // 7F21B24C: bc    12, 2, 0x7F21B254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B254;
        }
    }

label_7F21B250:
    ctx->downcount -= 1;
    // 7F21B250: bl      0x7F3C2440
    {
            ctx->lr = 0x7F21B254u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F21B254:
    ctx->downcount -= 4;
    // 7F21B254: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F21B258:
    // 7F21B258: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F21B25C:
    // 7F21B25C: cmpwi   r30, 16
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21B260:
    // 7F21B260: bc    12, 0, 0x7F21B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B240u;
                return;
            }
            goto label_7F21B240;
        }
    }

label_7F21B264:
    ctx->pc = 0x7F21B264u;
    ctx->downcount -= 16;
    // 7F21B264: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21B268:
    ctx->pc = 0x7F21B268u;
    // 7F21B268: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B26C:
    ctx->pc = 0x7F21B26Cu;
    // 7F21B26C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B270:
    ctx->pc = 0x7F21B270u;
    // 7F21B270: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21B274:
    ctx->pc = 0x7F21B274u;
    // 7F21B274: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B278:
    ctx->pc = 0x7F21B278u;
    ctx->downcount -= 24;
    // 7F21B278: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B27C:
    ctx->pc = 0x7F21B27Cu;
    // 7F21B27C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B280:
    ctx->pc = 0x7F21B280u;
    // 7F21B280: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F21B284:
    ctx->pc = 0x7F21B284u;
    // 7F21B284: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F21B288:
    ctx->pc = 0x7F21B288u;
    // 7F21B288: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B28C:
    ctx->pc = 0x7F21B28Cu;
    // 7F21B28C: stmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21B290:
    ctx->pc = 0x7F21B290u;
    // 7F21B290: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B294:
    ctx->pc = 0x7F21B294u;
    // 7F21B294: addi    r30, r1, 16
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21B298:
    ctx->pc = 0x7F21B298u;
    // 7F21B298: addi    r29, r4, 12832
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F21B29C:
    ctx->pc = 0x7F21B29Cu;
    // 7F21B29C: addi    r31, r1, 8
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21B2A0:
    ctx->pc = 0x7F21B2A0u;
    // 7F21B2A0: addi    r26, r5, 8256
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(8256);

label_7F21B2A4:
    ctx->pc = 0x7F21B2A4u;
    // 7F21B2A4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F21B2A8:
    ctx->pc = 0x7F21B2A8u;
    // 7F21B2A8: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F21B2AC:
    ctx->pc = 0x7F21B2ACu;
    // 7F21B2AC: lis     r27, 11
    ctx->gpr[27] = ((u32)(s32)(11) << 16);

label_7F21B2B0:
    ctx->pc = 0x7F21B2B0u;
    ctx->downcount -= 2;
    // 7F21B2B0: lwzx    r3, r26, r23
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[23];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B2B4:
    // 7F21B2B4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F21B2B8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F21B2B8:
    ctx->downcount -= 2;
    // 7F21B2B8: or.   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[22];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21B2BC:
    // 7F21B2BC: bc    4, 2, 0x7F21B2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B2C8;
        }
    }

label_7F21B2C0:
    ctx->downcount -= 2;
    // 7F21B2C0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21B2C4:
    // 7F21B2C4: b       0x7F21B428
    {
            goto label_7F21B428;
    }

label_7F21B2C8:
    ctx->downcount -= 5;
    // 7F21B2C8: addi    r3, r27, 1026
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1026);

label_7F21B2CC:
    // 7F21B2CC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F21B2D0:
    // 7F21B2D0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F21B2D4:
    // 7F21B2D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21B2D8:
    // 7F21B2D8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F21B2DCu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F21B2DC:
    ctx->downcount -= 4;
    // 7F21B2DC: or.   r28, r3, r3
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

label_7F21B2E0:
    // 7F21B2E0: addi    r0, r23, 64
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(64);

label_7F21B2E4:
    ctx->pc = 0x7F21B2E4u;
    // 7F21B2E4: stwx    r28, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F21B2E8:
    // 7F21B2E8: bc    4, 2, 0x7F21B2F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B2F4;
        }
    }

label_7F21B2EC:
    ctx->downcount -= 2;
    // 7F21B2EC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21B2F0:
    // 7F21B2F0: b       0x7F21B428
    {
            goto label_7F21B428;
    }

label_7F21B2F4:
    ctx->pc = 0x7F21B2F4u;
    ctx->downcount -= 5;
    // 7F21B2F4: lwz     r0, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B2F8:
    // 7F21B2F8: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F21B2FC:
    // 7F21B2FC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F21B300:
    ctx->pc = 0x7F21B300u;
    // 7F21B300: stw     r0, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B304:
    // 7F21B304: bl      0x7F3C2534
    {
            ctx->lr = 0x7F21B308u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F21B308:
    ctx->downcount -= 17;
    // 7F21B308: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F21B30C:
    // 7F21B30C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21B310:
    ctx->pc = 0x7F21B310u;
    // 7F21B310: stw     r0, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B314:
    // 7F21B314: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F21B318:
    // 7F21B318: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F21B31C:
    // 7F21B31C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F21B320:
    ctx->pc = 0x7F21B320u;
    // 7F21B320: stw     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B324:
    ctx->pc = 0x7F21B324u;
    // 7F21B324: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B328:
    ctx->pc = 0x7F21B328u;
    // 7F21B328: lwz     r5, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21B32C:
    ctx->pc = 0x7F21B32Cu;
    // 7F21B32C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B330:
    ctx->pc = 0x7F21B330u;
    // 7F21B330: lwz     r6, 188(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(188);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21B334:
    ctx->pc = 0x7F21B334u;
    // 7F21B334: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B338:
    ctx->pc = 0x7F21B338u;
    // 7F21B338: lwz     r3, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B33C:
    ctx->pc = 0x7F21B33Cu;
    // 7F21B33C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B340:
    ctx->pc = 0x7F21B340u;
    // 7F21B340: lwz     r4, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21B344:
    ctx->pc = 0x7F21B344u;
    // 7F21B344: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F21B348:
    ctx->pc = 0x7F21B348u;
    ctx->downcount -= 28;
    // 7F21B348: lwz     r10, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F21B34C:
    // 7F21B34C: rlwinm r8, r7, 2, 29, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0x00000004u;
    }

label_7F21B350:
    ctx->pc = 0x7F21B350u;
    // 7F21B350: lwz     r9, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F21B354:
    // 7F21B354: srawi r0, r7, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[7];
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

label_7F21B358:
    // 7F21B358: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F21B35C:
    ctx->pc = 0x7F21B35Cu;
    // 7F21B35C: lwzx    r8, r30, r8
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[8];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F21B360:
    ctx->pc = 0x7F21B360u;
    // 7F21B360: stw     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F21B364:
    // 7F21B364: cmpwi   r7, 2
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

label_7F21B368:
    ctx->pc = 0x7F21B368u;
    // 7F21B368: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B36C:
    // 7F21B36C: li      r10, 4095
    ctx->gpr[10] = (u32)(s32)(4095);

label_7F21B370:
    ctx->pc = 0x7F21B370u;
    // 7F21B370: stw     r9, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21B374:
    ctx->pc = 0x7F21B374u;
    // 7F21B374: lwz     r11, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F21B378:
    ctx->pc = 0x7F21B378u;
    // 7F21B378: lwz     r9, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F21B37C:
    ctx->pc = 0x7F21B37Cu;
    // 7F21B37C: stw     r11, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F21B380:
    ctx->pc = 0x7F21B380u;
    // 7F21B380: stw     r9, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21B384:
    ctx->pc = 0x7F21B384u;
    // 7F21B384: lwz     r11, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F21B388:
    ctx->pc = 0x7F21B388u;
    // 7F21B388: lwz     r9, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F21B38C:
    ctx->pc = 0x7F21B38Cu;
    // 7F21B38C: stw     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F21B390:
    ctx->pc = 0x7F21B390u;
    // 7F21B390: stw     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21B394:
    ctx->pc = 0x7F21B394u;
    // 7F21B394: lwz     r11, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F21B398:
    ctx->pc = 0x7F21B398u;
    // 7F21B398: lwz     r9, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F21B39C:
    ctx->pc = 0x7F21B39Cu;
    // 7F21B39C: stw     r11, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F21B3A0:
    ctx->pc = 0x7F21B3A0u;
    // 7F21B3A0: stw     r9, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21B3A4:
    ctx->pc = 0x7F21B3A4u;
    // 7F21B3A4: sth     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F21B3A8:
    ctx->pc = 0x7F21B3A8u;
    // 7F21B3A8: sth     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F21B3AC:
    ctx->pc = 0x7F21B3ACu;
    // 7F21B3AC: sth     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B3B0:
    ctx->pc = 0x7F21B3B0u;
    // 7F21B3B0: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B3B4:
    // 7F21B3B4: bc    4, 0, 0x7F21B3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B3C0;
        }
    }

label_7F21B3B8:
    ctx->downcount -= 2;
    // 7F21B3B8: lis     r8, 1
    ctx->gpr[8] = ((u32)(s32)(1) << 16);

label_7F21B3BC:
    // 7F21B3BC: addi    r10, r8, -28673
    ctx->gpr[10] = ctx->gpr[8] + (u32)(s32)(-28673);

label_7F21B3C0:
    ctx->pc = 0x7F21B3C0u;
    ctx->downcount -= 21;
    // 7F21B3C0: sth     r10, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F21B3C4:
    // 7F21B3C4: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

label_7F21B3C8:
    // 7F21B3C8: li      r8, 128
    ctx->gpr[8] = (u32)(s32)(128);

label_7F21B3CC:
    // 7F21B3CC: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F21B3D0:
    ctx->pc = 0x7F21B3D0u;
    // 7F21B3D0: sth     r10, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F21B3D4:
    // 7F21B3D4: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F21B3D8:
    // 7F21B3D8: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F21B3DC:
    // 7F21B3DC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F21B3E0:
    ctx->pc = 0x7F21B3E0u;
    // 7F21B3E0: sth     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F21B3E4:
    ctx->pc = 0x7F21B3E4u;
    // 7F21B3E4: sth     r9, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F21B3E8:
    ctx->pc = 0x7F21B3E8u;
    // 7F21B3E8: stb     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B3EC:
    ctx->pc = 0x7F21B3ECu;
    // 7F21B3EC: stb     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B3F0:
    ctx->pc = 0x7F21B3F0u;
    // 7F21B3F0: stb     r8, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B3F4:
    ctx->pc = 0x7F21B3F4u;
    // 7F21B3F4: stb     r8, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B3F8:
    ctx->pc = 0x7F21B3F8u;
    // 7F21B3F8: stb     r8, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B3FC:
    ctx->pc = 0x7F21B3FCu;
    // 7F21B3FC: stb     r8, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F21B400:
    ctx->pc = 0x7F21B400u;
    // 7F21B400: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B404:
    // 7F21B404: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_7F21B408:
    ctx->pc = 0x7F21B408u;
    // 7F21B408: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F21B40C:
    // 7F21B40C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_7F21B410:
    // 7F21B410: bc    16, 0, 0x7F21B348
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B348u;
                return;
            }
            goto label_7F21B348;
        }
    }

label_7F21B414:
    ctx->downcount -= 4;
    // 7F21B414: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F21B418:
    // 7F21B418: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F21B41C:
    // 7F21B41C: cmpwi   r25, 16
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21B420:
    // 7F21B420: bc    12, 0, 0x7F21B2B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B2B0u;
                return;
            }
            goto label_7F21B2B0;
        }
    }

label_7F21B424:
    ctx->pc = 0x7F21B424u;
    ctx->downcount -= 1;
    // 7F21B424: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21B428:
    ctx->pc = 0x7F21B428u;
    ctx->downcount -= 16;
    // 7F21B428: lmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21B42C:
    ctx->pc = 0x7F21B42Cu;
    // 7F21B42C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B430:
    ctx->pc = 0x7F21B430u;
    // 7F21B430: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B434:
    ctx->pc = 0x7F21B434u;
    // 7F21B434: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F21B438:
    ctx->pc = 0x7F21B438u;
    // 7F21B438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B43C:
    ctx->pc = 0x7F21B43Cu;
    ctx->downcount -= 14;
    // 7F21B43C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B440:
    ctx->pc = 0x7F21B440u;
    // 7F21B440: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B444:
    ctx->pc = 0x7F21B444u;
    // 7F21B444: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B448:
    ctx->pc = 0x7F21B448u;
    // 7F21B448: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21B44C:
    ctx->pc = 0x7F21B44Cu;
    // 7F21B44C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B450:
    ctx->pc = 0x7F21B450u;
    // 7F21B450: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21B454:
    ctx->pc = 0x7F21B454u;
    // 7F21B454: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B458:
    ctx->pc = 0x7F21B458u;
    // 7F21B458: stw     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B45C:
    ctx->pc = 0x7F21B45Cu;
    // 7F21B45C: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B460:
    ctx->pc = 0x7F21B460u;
    // 7F21B460: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21B464:
    ctx->pc = 0x7F21B464u;
    // 7F21B464: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B468:
    ctx->pc = 0x7F21B468u;
    // 7F21B468: stw     r5, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B46C:
    ctx->pc = 0x7F21B46Cu;
    // 7F21B46C: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B470:
    ctx->pc = 0x7F21B470u;
    // 7F21B470: bl      0x7F21B278
    {
            ctx->lr = 0x7F21B474u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B278u;
                return;
            }
            goto label_7F21B278;
    }

label_7F21B474:
    ctx->pc = 0x7F21B474u;
    ctx->downcount -= 2;
    // 7F21B474: cmpwi   r3, 0
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

label_7F21B478:
    ctx->pc = 0x7F21B478u;
    // 7F21B478: bc    12, 2, 0x7F21B484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B484;
        }
    }

label_7F21B47C:
    ctx->pc = 0x7F21B47Cu;
    ctx->downcount -= 2;
    // 7F21B47C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21B480:
    ctx->pc = 0x7F21B480u;
    // 7F21B480: b       0x7F21B494
    {
            goto label_7F21B494;
    }

label_7F21B484:
    ctx->pc = 0x7F21B484u;
    ctx->downcount -= 4;
    // 7F21B484: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B488:
    ctx->pc = 0x7F21B488u;
    // 7F21B488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21B48C:
    ctx->pc = 0x7F21B48Cu;
    // 7F21B48C: lfs     f0, 16556(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B48Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B490:
    ctx->pc = 0x7F21B490u;
    // 7F21B490: stfs     f0, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21B490u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B494:
    ctx->pc = 0x7F21B494u;
    ctx->downcount -= 6;
    // 7F21B494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B498:
    ctx->pc = 0x7F21B498u;
    // 7F21B498: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21B49C:
    ctx->pc = 0x7F21B49Cu;
    // 7F21B49C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B4A0:
    ctx->pc = 0x7F21B4A0u;
    // 7F21B4A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21B4A4:
    ctx->pc = 0x7F21B4A4u;
    // 7F21B4A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B4A8:
    ctx->pc = 0x7F21B4A8u;
    ctx->downcount -= 21;
    // 7F21B4A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B4AC:
    ctx->pc = 0x7F21B4ACu;
    // 7F21B4AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B4B0:
    ctx->pc = 0x7F21B4B0u;
    // 7F21B4B0: li      r5, 144
    ctx->gpr[5] = (u32)(s32)(144);

label_7F21B4B4:
    ctx->pc = 0x7F21B4B4u;
    // 7F21B4B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21B4B8:
    ctx->pc = 0x7F21B4B8u;
    // 7F21B4B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B4BC:
    ctx->pc = 0x7F21B4BCu;
    // 7F21B4BC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21B4C0:
    ctx->pc = 0x7F21B4C0u;
    // 7F21B4C0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B4C4:
    ctx->pc = 0x7F21B4C4u;
    // 7F21B4C4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21B4C8:
    ctx->pc = 0x7F21B4C8u;
    // 7F21B4C8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F21B4CC:
    ctx->pc = 0x7F21B4CCu;
    // 7F21B4CC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F21B4D0:
    ctx->pc = 0x7F21B4D0u;
    // 7F21B4D0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F21B4D4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F21B4D4:
    ctx->pc = 0x7F21B4D4u;
    ctx->downcount -= 2;
    // 7F21B4D4: or.   r31, r3, r3
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

label_7F21B4D8:
    ctx->pc = 0x7F21B4D8u;
    // 7F21B4D8: bc    12, 2, 0x7F21B550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B550;
        }
    }

label_7F21B4DC:
    ctx->pc = 0x7F21B4DCu;
    ctx->downcount -= 5;
    // 7F21B4DC: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21B4E0:
    ctx->pc = 0x7F21B4E0u;
    // 7F21B4E0: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F21B4E4:
    ctx->pc = 0x7F21B4E4u;
    // 7F21B4E4: addi    r4, r4, -21040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21040);

label_7F21B4E8:
    ctx->pc = 0x7F21B4E8u;
    // 7F21B4E8: addi    r5, r5, -19932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19932);

label_7F21B4EC:
    ctx->pc = 0x7F21B4ECu;
    // 7F21B4EC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F21B4F0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F21B4F0:
    ctx->pc = 0x7F21B4F0u;
    ctx->downcount -= 14;
    // 7F21B4F0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B4F4:
    ctx->pc = 0x7F21B4F4u;
    // 7F21B4F4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F21B4F8:
    ctx->pc = 0x7F21B4F8u;
    // 7F21B4F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21B4FC:
    ctx->pc = 0x7F21B4FCu;
    // 7F21B4FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B500:
    ctx->pc = 0x7F21B500u;
    // 7F21B500: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F21B504:
    ctx->pc = 0x7F21B504u;
    // 7F21B504: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F21B508:
    ctx->pc = 0x7F21B508u;
    // 7F21B508: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21B50C:
    ctx->pc = 0x7F21B50Cu;
    // 7F21B50C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21B510:
    ctx->pc = 0x7F21B510u;
    // 7F21B510: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B514:
    ctx->pc = 0x7F21B514u;
    // 7F21B514: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B518:
    ctx->pc = 0x7F21B518u;
    // 7F21B518: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B51C:
    ctx->pc = 0x7F21B51Cu;
    // 7F21B51C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B520:
    ctx->pc = 0x7F21B520u;
    // 7F21B520: stw     r29, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F21B524:
    ctx->pc = 0x7F21B524u;
    // 7F21B524: bl      0x7F21B43C
    {
            ctx->lr = 0x7F21B528u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B43Cu;
                return;
            }
            goto label_7F21B43C;
    }

label_7F21B528:
    ctx->pc = 0x7F21B528u;
    ctx->downcount -= 2;
    // 7F21B528: cmpwi   r3, 0
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

label_7F21B52C:
    ctx->pc = 0x7F21B52Cu;
    // 7F21B52C: bc    4, 0, 0x7F21B540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B540;
        }
    }

label_7F21B530:
    ctx->pc = 0x7F21B530u;
    ctx->downcount -= 2;
    // 7F21B530: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B534:
    ctx->pc = 0x7F21B534u;
    // 7F21B534: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21B538u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21B538:
    ctx->pc = 0x7F21B538u;
    ctx->downcount -= 2;
    // 7F21B538: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21B53C:
    ctx->pc = 0x7F21B53Cu;
    // 7F21B53C: b       0x7F21B554
    {
            goto label_7F21B554;
    }

label_7F21B540:
    ctx->pc = 0x7F21B540u;
    ctx->downcount -= 4;
    // 7F21B540: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21B544:
    ctx->pc = 0x7F21B544u;
    // 7F21B544: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B548:
    ctx->pc = 0x7F21B548u;
    // 7F21B548: addi    r4, r4, -21424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21424);

label_7F21B54C:
    ctx->pc = 0x7F21B54Cu;
    // 7F21B54C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F21B550u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F21B550:
    ctx->pc = 0x7F21B550u;
    ctx->downcount -= 1;
    // 7F21B550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B554:
    ctx->pc = 0x7F21B554u;
    ctx->downcount -= 16;
    // 7F21B554: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21B558:
    ctx->pc = 0x7F21B558u;
    // 7F21B558: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B55C:
    ctx->pc = 0x7F21B55Cu;
    // 7F21B55C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B560:
    ctx->pc = 0x7F21B560u;
    // 7F21B560: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21B564:
    ctx->pc = 0x7F21B564u;
    // 7F21B564: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B568:
    ctx->pc = 0x7F21B568u;
    ctx->downcount -= 17;
    // 7F21B568: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B56C:
    ctx->pc = 0x7F21B56Cu;
    // 7F21B56C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B570:
    ctx->pc = 0x7F21B570u;
    // 7F21B570: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B574:
    ctx->pc = 0x7F21B574u;
    // 7F21B574: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21B578:
    ctx->pc = 0x7F21B578u;
    // 7F21B578: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B57C:
    ctx->pc = 0x7F21B57Cu;
    // 7F21B57C: lha     r31, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[31] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B580:
    ctx->pc = 0x7F21B580u;
    // 7F21B580: bl      0x7F01F590
    {
            ctx->lr = 0x7F21B584u;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F21B584:
    ctx->pc = 0x7F21B584u;
    ctx->downcount -= 2;
    // 7F21B584: cmpwi   r3, 0
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

label_7F21B588:
    ctx->pc = 0x7F21B588u;
    // 7F21B588: bc    12, 2, 0x7F21B594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B594;
        }
    }

label_7F21B58C:
    ctx->pc = 0x7F21B58Cu;
    ctx->downcount -= 2;
    // 7F21B58C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21B590:
    ctx->pc = 0x7F21B590u;
    // 7F21B590: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21B594u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21B594:
    ctx->pc = 0x7F21B594u;
    ctx->downcount -= 4;
    // 7F21B594: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F21B598:
    ctx->pc = 0x7F21B598u;
    // 7F21B598: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B59C:
    ctx->pc = 0x7F21B59Cu;
    // 7F21B59C: rlwinm. r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21B5A0:
    ctx->pc = 0x7F21B5A0u;
    // 7F21B5A0: bc    4, 2, 0x7F21B728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B728;
        }
    }

label_7F21B5A4:
    ctx->pc = 0x7F21B5A4u;
    ctx->downcount -= 12;
    // 7F21B5A4: lha     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B5A8:
    ctx->pc = 0x7F21B5A8u;
    // 7F21B5A8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F21B5AC:
    ctx->pc = 0x7F21B5ACu;
    // 7F21B5AC: lwz     r4, 5000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5000);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21B5B0:
    ctx->pc = 0x7F21B5B0u;
    // 7F21B5B0: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F21B5B4:
    ctx->pc = 0x7F21B5B4u;
    // 7F21B5B4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21B5B8:
    ctx->pc = 0x7F21B5B8u;
    // 7F21B5B8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F21B5BC:
    ctx->pc = 0x7F21B5BCu;
    // 7F21B5BC: lha     r0, 62(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B5C0:
    ctx->pc = 0x7F21B5C0u;
    // 7F21B5C0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F21B5C4:
    ctx->pc = 0x7F21B5C4u;
    // 7F21B5C4: sth     r0, 62(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B5C8:
    ctx->pc = 0x7F21B5C8u;
    // 7F21B5C8: lha     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B5CC:
    ctx->pc = 0x7F21B5CCu;
    // 7F21B5CC: cmpwi   r0, 1
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

label_7F21B5D0:
    ctx->pc = 0x7F21B5D0u;
    // 7F21B5D0: bc    12, 2, 0x7F21B680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B680;
        }
    }

label_7F21B5D4:
    ctx->pc = 0x7F21B5D4u;
    ctx->downcount -= 1;
    // 7F21B5D4: bc    4, 0, 0x7F21B5E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B5E4;
        }
    }

label_7F21B5D8:
    ctx->pc = 0x7F21B5D8u;
    ctx->downcount -= 2;
    // 7F21B5D8: cmpwi   r0, 0
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

label_7F21B5DC:
    ctx->pc = 0x7F21B5DCu;
    // 7F21B5DC: bc    4, 0, 0x7F21B5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B5F0;
        }
    }

label_7F21B5E0:
    ctx->pc = 0x7F21B5E0u;
    ctx->downcount -= 1;
    // 7F21B5E0: b       0x7F21B718
    {
            goto label_7F21B718;
    }

label_7F21B5E4:
    ctx->pc = 0x7F21B5E4u;
    ctx->downcount -= 2;
    // 7F21B5E4: cmpwi   r0, 3
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

label_7F21B5E8:
    ctx->pc = 0x7F21B5E8u;
    // 7F21B5E8: bc    4, 0, 0x7F21B718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B718;
        }
    }

label_7F21B5EC:
    ctx->pc = 0x7F21B5ECu;
    ctx->downcount -= 1;
    // 7F21B5EC: b       0x7F21B698
    {
            goto label_7F21B698;
    }

label_7F21B5F0:
    ctx->pc = 0x7F21B5F0u;
    ctx->downcount -= 44;
    // 7F21B5F0: lha     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B5F4:
    ctx->pc = 0x7F21B5F4u;
    // 7F21B5F4: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F21B5F8:
    ctx->pc = 0x7F21B5F8u;
    // 7F21B5F8: xoris   r5, r31, 0x8000
    ctx->gpr[5] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F21B5FC:
    ctx->pc = 0x7F21B5FCu;
    // 7F21B5FC: lha     r7, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B600:
    ctx->pc = 0x7F21B600u;
    // 7F21B600: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B604:
    ctx->pc = 0x7F21B604u;
    // 7F21B604: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B608:
    ctx->pc = 0x7F21B608u;
    // 7F21B608: subf   r3, r7, r3
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F21B60C:
    ctx->pc = 0x7F21B60Cu;
    // 7F21B60C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F21B610:
    ctx->pc = 0x7F21B610u;
    // 7F21B610: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B614:
    ctx->pc = 0x7F21B614u;
    // 7F21B614: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B618:
    ctx->pc = 0x7F21B618u;
    // 7F21B618: lfd     f3, 16592(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21B618u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16592);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B61C:
    ctx->pc = 0x7F21B61Cu;
    // 7F21B61C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B61Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B620:
    ctx->pc = 0x7F21B620u;
    // 7F21B620: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B624:
    ctx->pc = 0x7F21B624u;
    // 7F21B624: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B624u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F21B628:
    ctx->pc = 0x7F21B628u;
    // 7F21B628: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B62C:
    ctx->pc = 0x7F21B62Cu;
    // 7F21B62C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B62Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B630:
    ctx->pc = 0x7F21B630u;
    // 7F21B630: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B634:
    ctx->pc = 0x7F21B634u;
    // 7F21B634: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B634u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F21B638:
    ctx->pc = 0x7F21B638u;
    // 7F21B638: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B63C:
    ctx->pc = 0x7F21B63Cu;
    // 7F21B63C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B63Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B640:
    ctx->pc = 0x7F21B640u;
    // 7F21B640: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B640u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F21B644:
    ctx->pc = 0x7F21B644u;
    // 7F21B644: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B644u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F21B648:
    ctx->pc = 0x7F21B648u;
    // 7F21B648: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B648u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F21B64C:
    ctx->pc = 0x7F21B64Cu;
    // 7F21B64C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B64Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F21B650:
    ctx->pc = 0x7F21B650u;
    // 7F21B650: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F21B654:
    ctx->pc = 0x7F21B654u;
    // 7F21B654: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21B658:
    ctx->pc = 0x7F21B658u;
    // 7F21B658: cmpwi   r31, 128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21B65C:
    ctx->pc = 0x7F21B65Cu;
    // 7F21B65C: bc    4, 1, 0x7F21B664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B664;
        }
    }

label_7F21B660:
    ctx->pc = 0x7F21B660u;
    ctx->downcount -= 1;
    // 7F21B660: li      r31, 128
    ctx->gpr[31] = (u32)(s32)(128);

label_7F21B664:
    ctx->pc = 0x7F21B664u;
    ctx->downcount -= 2;
    // 7F21B664: extsh. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21B668:
    ctx->pc = 0x7F21B668u;
    // 7F21B668: bc    4, 0, 0x7F21B718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B718;
        }
    }

label_7F21B66C:
    ctx->pc = 0x7F21B66Cu;
    ctx->downcount -= 5;
    // 7F21B66C: lha     r3, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B670:
    ctx->pc = 0x7F21B670u;
    // 7F21B670: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21B674:
    ctx->pc = 0x7F21B674u;
    // 7F21B674: sth     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B678:
    ctx->pc = 0x7F21B678u;
    // 7F21B678: sth     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B67C:
    ctx->pc = 0x7F21B67Cu;
    // 7F21B67C: b       0x7F21B718
    {
            goto label_7F21B718;
    }

label_7F21B680:
    ctx->pc = 0x7F21B680u;
    ctx->downcount -= 3;
    // 7F21B680: lha     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B684:
    ctx->pc = 0x7F21B684u;
    // 7F21B684: cmpwi   r0, 0
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

label_7F21B688:
    ctx->pc = 0x7F21B688u;
    // 7F21B688: bc    4, 0, 0x7F21B718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B718;
        }
    }

label_7F21B68C:
    ctx->pc = 0x7F21B68Cu;
    ctx->downcount -= 3;
    // 7F21B68C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F21B690:
    ctx->pc = 0x7F21B690u;
    // 7F21B690: sth     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B694:
    ctx->pc = 0x7F21B694u;
    // 7F21B694: b       0x7F21B718
    {
            goto label_7F21B718;
    }

label_7F21B698:
    ctx->pc = 0x7F21B698u;
    ctx->downcount -= 43;
    // 7F21B698: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F21B69C:
    ctx->pc = 0x7F21B69Cu;
    // 7F21B69C: lha     r7, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B6A0:
    ctx->pc = 0x7F21B6A0u;
    // 7F21B6A0: xoris   r5, r31, 0x8000
    ctx->gpr[5] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F21B6A4:
    ctx->pc = 0x7F21B6A4u;
    // 7F21B6A4: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B6A8:
    ctx->pc = 0x7F21B6A8u;
    // 7F21B6A8: xoris   r3, r7, 0x8000
    ctx->gpr[3] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F21B6AC:
    ctx->pc = 0x7F21B6ACu;
    // 7F21B6AC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F21B6B0:
    ctx->pc = 0x7F21B6B0u;
    // 7F21B6B0: stw     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21B6B4:
    ctx->pc = 0x7F21B6B4u;
    // 7F21B6B4: lha     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21B6B8:
    ctx->pc = 0x7F21B6B8u;
    // 7F21B6B8: lfd     f3, 16592(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21B6B8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16592);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B6BC:
    ctx->pc = 0x7F21B6BCu;
    // 7F21B6BC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B6BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B6C0:
    ctx->pc = 0x7F21B6C0u;
    // 7F21B6C0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21B6C4:
    ctx->pc = 0x7F21B6C4u;
    // 7F21B6C4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B6C8:
    ctx->pc = 0x7F21B6C8u;
    // 7F21B6C8: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B6C8u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F21B6CC:
    ctx->pc = 0x7F21B6CCu;
    // 7F21B6CC: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B6D0:
    ctx->pc = 0x7F21B6D0u;
    // 7F21B6D0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B6D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B6D4:
    ctx->pc = 0x7F21B6D4u;
    // 7F21B6D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B6D8:
    ctx->pc = 0x7F21B6D8u;
    // 7F21B6D8: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B6D8u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F21B6DC:
    ctx->pc = 0x7F21B6DCu;
    // 7F21B6DC: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B6E0:
    ctx->pc = 0x7F21B6E0u;
    // 7F21B6E0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B6E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B6E4:
    ctx->pc = 0x7F21B6E4u;
    // 7F21B6E4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B6E4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F21B6E8:
    ctx->pc = 0x7F21B6E8u;
    // 7F21B6E8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F21B6E8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F21B6EC:
    ctx->pc = 0x7F21B6ECu;
    // 7F21B6EC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B6ECu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F21B6F0:
    ctx->pc = 0x7F21B6F0u;
    // 7F21B6F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B6F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F21B6F4:
    ctx->pc = 0x7F21B6F4u;
    // 7F21B6F4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B6F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F21B6F8:
    ctx->pc = 0x7F21B6F8u;
    // 7F21B6F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21B6FC:
    ctx->pc = 0x7F21B6FCu;
    // 7F21B6FC: cmpwi   r31, 0
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

label_7F21B700:
    ctx->pc = 0x7F21B700u;
    // 7F21B700: bc    4, 0, 0x7F21B708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B708;
        }
    }

label_7F21B704:
    ctx->pc = 0x7F21B704u;
    ctx->downcount -= 1;
    // 7F21B704: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F21B708:
    ctx->pc = 0x7F21B708u;
    ctx->downcount -= 2;
    // 7F21B708: extsh. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21B70C:
    ctx->pc = 0x7F21B70Cu;
    // 7F21B70C: bc    4, 0, 0x7F21B718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B718;
        }
    }

label_7F21B710:
    ctx->pc = 0x7F21B710u;
    ctx->downcount -= 2;
    // 7F21B710: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21B714:
    ctx->pc = 0x7F21B714u;
    // 7F21B714: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21B718u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21B718:
    ctx->pc = 0x7F21B718u;
    ctx->downcount -= 4;
    // 7F21B718: oris    r0, r31, 0xC0C0
    ctx->gpr[0] = ctx->gpr[31] | (0xC0C0u << 16);

label_7F21B71C:
    ctx->pc = 0x7F21B71Cu;
    // 7F21B71C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B720:
    ctx->pc = 0x7F21B720u;
    // 7F21B720: ori     r0, r0, 0xC000
    ctx->gpr[0] = ctx->gpr[0] | 0xC000u;

label_7F21B724:
    ctx->pc = 0x7F21B724u;
    // 7F21B724: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B728:
    ctx->pc = 0x7F21B728u;
    ctx->downcount -= 16;
    // 7F21B728: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21B72C:
    ctx->pc = 0x7F21B72Cu;
    // 7F21B72C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B730:
    ctx->pc = 0x7F21B730u;
    // 7F21B730: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B734:
    ctx->pc = 0x7F21B734u;
    // 7F21B734: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F21B738:
    ctx->pc = 0x7F21B738u;
    // 7F21B738: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B73C:
    ctx->pc = 0x7F21B73Cu;
    ctx->downcount -= 8;
    // 7F21B73C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B740:
    ctx->pc = 0x7F21B740u;
    // 7F21B740: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B744:
    ctx->pc = 0x7F21B744u;
    // 7F21B744: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B748:
    ctx->pc = 0x7F21B748u;
    // 7F21B748: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21B74C:
    ctx->pc = 0x7F21B74Cu;
    // 7F21B74C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B750:
    ctx->pc = 0x7F21B750u;
    // 7F21B750: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B754:
    ctx->pc = 0x7F21B754u;
    // 7F21B754: cmplwi  r3, 0x0000
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

label_7F21B758:
    ctx->pc = 0x7F21B758u;
    // 7F21B758: bc    12, 2, 0x7F21B760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B760;
        }
    }

label_7F21B75C:
    ctx->pc = 0x7F21B75Cu;
    ctx->downcount -= 1;
    // 7F21B75C: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F21B760u;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F21B760:
    ctx->pc = 0x7F21B760u;
    ctx->downcount -= 3;
    // 7F21B760: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B764:
    ctx->pc = 0x7F21B764u;
    // 7F21B764: cmpwi   r0, 0
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

label_7F21B768:
    ctx->pc = 0x7F21B768u;
    // 7F21B768: bc    12, 2, 0x7F21B778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B778;
        }
    }

label_7F21B76C:
    ctx->pc = 0x7F21B76Cu;
    ctx->downcount -= 3;
    // 7F21B76C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F21B770:
    ctx->pc = 0x7F21B770u;
    // 7F21B770: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21B774:
    ctx->pc = 0x7F21B774u;
    // 7F21B774: stw     r0, -10912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10912);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B778:
    ctx->pc = 0x7F21B778u;
    ctx->downcount -= 6;
    // 7F21B778: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B77C:
    ctx->pc = 0x7F21B77Cu;
    // 7F21B77C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21B780:
    ctx->pc = 0x7F21B780u;
    // 7F21B780: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21B784:
    ctx->pc = 0x7F21B784u;
    // 7F21B784: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21B788:
    ctx->pc = 0x7F21B788u;
    // 7F21B788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21B78C:
    ctx->pc = 0x7F21B78Cu;
    ctx->downcount -= 24;
    // 7F21B78C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21B790:
    ctx->pc = 0x7F21B790u;
    // 7F21B790: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21B794:
    ctx->pc = 0x7F21B794u;
    // 7F21B794: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B798:
    ctx->pc = 0x7F21B798u;
    // 7F21B798: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B798u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F21B79C:
    ctx->pc = 0x7F21B79Cu;
    // 7F21B79C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B79Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F21B79Cu);
        if (ctx->exception) return;
    }

label_7F21B7A0:
    ctx->pc = 0x7F21B7A0u;
    // 7F21B7A0: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B7A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F21B7A4:
    ctx->pc = 0x7F21B7A4u;
    // 7F21B7A4: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21B7A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F21B7A4u);
        if (ctx->exception) return;
    }

label_7F21B7A8:
    ctx->pc = 0x7F21B7A8u;
    // 7F21B7A8: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21B7AC:
    ctx->pc = 0x7F21B7ACu;
    // 7F21B7AC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B7B0:
    ctx->pc = 0x7F21B7B0u;
    // 7F21B7B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21B7B4:
    ctx->pc = 0x7F21B7B4u;
    // 7F21B7B4: sth     r0, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B7B8:
    ctx->pc = 0x7F21B7B8u;
    // 7F21B7B8: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F21B7BC:
    ctx->pc = 0x7F21B7BCu;
    // 7F21B7BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21B7C0:
    ctx->pc = 0x7F21B7C0u;
    // 7F21B7C0: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F21B7C4u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F21B7C4:
    ctx->pc = 0x7F21B7C4u;
    ctx->downcount -= 5;
    // 7F21B7C4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B7C8:
    ctx->pc = 0x7F21B7C8u;
    // 7F21B7C8: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F21B7CC:
    ctx->pc = 0x7F21B7CCu;
    // 7F21B7CC: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21B7D0:
    ctx->pc = 0x7F21B7D0u;
    // 7F21B7D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21B7D4:
    ctx->pc = 0x7F21B7D4u;
    // 7F21B7D4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F21B7D8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F21B7D8:
    ctx->pc = 0x7F21B7D8u;
    ctx->downcount -= 6;
    // 7F21B7D8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B7DC:
    ctx->pc = 0x7F21B7DCu;
    // 7F21B7DC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F21B7E0:
    ctx->pc = 0x7F21B7E0u;
    // 7F21B7E0: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F21B7E4:
    ctx->pc = 0x7F21B7E4u;
    // 7F21B7E4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F21B7E8:
    ctx->pc = 0x7F21B7E8u;
    // 7F21B7E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21B7EC:
    ctx->pc = 0x7F21B7ECu;
    // 7F21B7EC: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F21B7F0u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F21B7F0:
    ctx->pc = 0x7F21B7F0u;
    ctx->downcount -= 4;
    // 7F21B7F0: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B7F4:
    ctx->pc = 0x7F21B7F4u;
    // 7F21B7F4: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B7F8:
    ctx->pc = 0x7F21B7F8u;
    // 7F21B7F8: cmplwi  r0, 0x0000
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

label_7F21B7FC:
    ctx->pc = 0x7F21B7FCu;
    // 7F21B7FC: bc    4, 2, 0x7F21B808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21B808;
        }
    }

label_7F21B800:
    ctx->pc = 0x7F21B800u;
    ctx->downcount -= 2;
    // 7F21B800: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21B804:
    ctx->pc = 0x7F21B804u;
    // 7F21B804: b       0x7F21BBB4
    {
            goto label_7F21BBB4;
    }

label_7F21B808:
    ctx->pc = 0x7F21B808u;
    ctx->downcount -= 2;
    // 7F21B808: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21B80C:
    ctx->pc = 0x7F21B80Cu;
    // 7F21B80C: bl      0x7F2E425C
    {
            ctx->lr = 0x7F21B810u;
            ctx->pc = 0x7F2E425Cu;
            return;
    }

label_7F21B810:
    ctx->pc = 0x7F21B810u;
    ctx->downcount -= 4;
    // 7F21B810: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B814:
    ctx->pc = 0x7F21B814u;
    // 7F21B814: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21B818:
    ctx->pc = 0x7F21B818u;
    // 7F21B818: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21B81C:
    ctx->pc = 0x7F21B81Cu;
    // 7F21B81C: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F21B820u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F21B820:
    ctx->pc = 0x7F21B820u;
    ctx->downcount -= 2;
    // 7F21B820: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F21B824:
    ctx->pc = 0x7F21B824u;
    // 7F21B824: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21B828u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21B828:
    ctx->pc = 0x7F21B828u;
    ctx->downcount -= 2;
    // 7F21B828: cmplwi  r3, 0x0000
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

label_7F21B82C:
    ctx->pc = 0x7F21B82Cu;
    // 7F21B82C: bc    12, 2, 0x7F21B884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B884;
        }
    }

label_7F21B830:
    ctx->pc = 0x7F21B830u;
    ctx->downcount -= 1;
    // 7F21B830: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B834u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B834:
    ctx->pc = 0x7F21B834u;
    ctx->downcount -= 10;
    // 7F21B834: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B838:
    ctx->pc = 0x7F21B838u;
    // 7F21B838: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21B83C:
    ctx->pc = 0x7F21B83Cu;
    // 7F21B83C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B840:
    ctx->pc = 0x7F21B840u;
    // 7F21B840: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B844:
    ctx->pc = 0x7F21B844u;
    // 7F21B844: lfd     f1, 16592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B844u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16592);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B848:
    ctx->pc = 0x7F21B848u;
    // 7F21B848: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B84C:
    ctx->pc = 0x7F21B84Cu;
    // 7F21B84C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B84Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B850:
    ctx->pc = 0x7F21B850u;
    // 7F21B850: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B850u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21B854:
    ctx->pc = 0x7F21B854u;
    // 7F21B854: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B854u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B858:
    ctx->pc = 0x7F21B858u;
    // 7F21B858: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B85Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B85C:
    ctx->pc = 0x7F21B85Cu;
    ctx->downcount -= 10;
    // 7F21B85C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B860:
    ctx->pc = 0x7F21B860u;
    // 7F21B860: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21B864:
    ctx->pc = 0x7F21B864u;
    // 7F21B864: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B868:
    ctx->pc = 0x7F21B868u;
    // 7F21B868: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B86C:
    ctx->pc = 0x7F21B86Cu;
    // 7F21B86C: lfd     f1, 16592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B86Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16592);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B870:
    ctx->pc = 0x7F21B870u;
    // 7F21B870: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B874:
    ctx->pc = 0x7F21B874u;
    // 7F21B874: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B878:
    ctx->pc = 0x7F21B878u;
    // 7F21B878: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B878u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21B87C:
    ctx->pc = 0x7F21B87Cu;
    // 7F21B87C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B87Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B880:
    ctx->pc = 0x7F21B880u;
    // 7F21B880: b       0x7F21B894
    {
            goto label_7F21B894;
    }

label_7F21B884:
    ctx->pc = 0x7F21B884u;
    ctx->downcount -= 4;
    // 7F21B884: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B888:
    ctx->pc = 0x7F21B888u;
    // 7F21B888: lfs     f0, 16584(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B888u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B88C:
    ctx->pc = 0x7F21B88Cu;
    // 7F21B88C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B88Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B890:
    ctx->pc = 0x7F21B890u;
    // 7F21B890: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21B894:
    ctx->pc = 0x7F21B894u;
    ctx->downcount -= 2;
    // 7F21B894: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F21B898:
    ctx->pc = 0x7F21B898u;
    // 7F21B898: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21B89Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21B89C:
    ctx->pc = 0x7F21B89Cu;
    ctx->downcount -= 2;
    // 7F21B89C: cmplwi  r3, 0x0000
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

label_7F21B8A0:
    ctx->pc = 0x7F21B8A0u;
    // 7F21B8A0: bc    12, 2, 0x7F21B8B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B8B8;
        }
    }

label_7F21B8A4:
    ctx->pc = 0x7F21B8A4u;
    ctx->downcount -= 1;
    // 7F21B8A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B8A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B8A8:
    ctx->pc = 0x7F21B8A8u;
    ctx->downcount -= 2;
    // 7F21B8A8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B8AC:
    ctx->pc = 0x7F21B8ACu;
    // 7F21B8AC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B8B0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B8B0:
    ctx->pc = 0x7F21B8B0u;
    ctx->downcount -= 2;
    // 7F21B8B0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B8B4:
    ctx->pc = 0x7F21B8B4u;
    // 7F21B8B4: b       0x7F21B8D4
    {
            goto label_7F21B8D4;
    }

label_7F21B8B8:
    ctx->pc = 0x7F21B8B8u;
    ctx->downcount -= 7;
    // 7F21B8B8: lwz     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F21B8BC:
    ctx->pc = 0x7F21B8BCu;
    // 7F21B8BC: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F21B8C0:
    ctx->pc = 0x7F21B8C0u;
    // 7F21B8C0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21B8C4:
    ctx->pc = 0x7F21B8C4u;
    // 7F21B8C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21B8C8:
    ctx->pc = 0x7F21B8C8u;
    // 7F21B8C8: addi    r7, r6, 36
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(36);

label_7F21B8CC:
    ctx->pc = 0x7F21B8CCu;
    // 7F21B8CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21B8D0:
    ctx->pc = 0x7F21B8D0u;
    // 7F21B8D0: bl      0x7F3B6A68
    {
            ctx->lr = 0x7F21B8D4u;
            ctx->pc = 0x7F3B6A68u;
            return;
    }

label_7F21B8D4:
    ctx->pc = 0x7F21B8D4u;
    ctx->downcount -= 2;
    // 7F21B8D4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F21B8D8:
    ctx->pc = 0x7F21B8D8u;
    // 7F21B8D8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21B8DCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21B8DC:
    ctx->pc = 0x7F21B8DCu;
    ctx->downcount -= 2;
    // 7F21B8DC: cmplwi  r3, 0x0000
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

label_7F21B8E0:
    ctx->pc = 0x7F21B8E0u;
    // 7F21B8E0: bc    12, 2, 0x7F21B948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B948;
        }
    }

label_7F21B8E4:
    ctx->pc = 0x7F21B8E4u;
    ctx->downcount -= 1;
    // 7F21B8E4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B8E8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B8E8:
    ctx->pc = 0x7F21B8E8u;
    ctx->downcount -= 12;
    // 7F21B8E8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B8EC:
    ctx->pc = 0x7F21B8ECu;
    // 7F21B8EC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21B8F0:
    ctx->pc = 0x7F21B8F0u;
    // 7F21B8F0: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B8F4:
    ctx->pc = 0x7F21B8F4u;
    // 7F21B8F4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B8F8:
    ctx->pc = 0x7F21B8F8u;
    // 7F21B8F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B8FC:
    ctx->pc = 0x7F21B8FCu;
    // 7F21B8FC: lfd     f2, 16592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B8FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16592);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B900:
    ctx->pc = 0x7F21B900u;
    // 7F21B900: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B904:
    ctx->pc = 0x7F21B904u;
    // 7F21B904: lfs     f0, 16600(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B904u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B908:
    ctx->pc = 0x7F21B908u;
    // 7F21B908: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B90C:
    ctx->pc = 0x7F21B90Cu;
    // 7F21B90C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21B90Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F21B910:
    ctx->pc = 0x7F21B910u;
    // 7F21B910: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B910u)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_7F21B914:
    ctx->pc = 0x7F21B914u;
    // 7F21B914: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B918u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B918:
    ctx->pc = 0x7F21B918u;
    ctx->downcount -= 12;
    // 7F21B918: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21B91C:
    ctx->pc = 0x7F21B91Cu;
    // 7F21B91C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21B920:
    ctx->pc = 0x7F21B920u;
    // 7F21B920: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B924:
    ctx->pc = 0x7F21B924u;
    // 7F21B924: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21B928:
    ctx->pc = 0x7F21B928u;
    // 7F21B928: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B92C:
    ctx->pc = 0x7F21B92Cu;
    // 7F21B92C: lfd     f2, 16592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21B92Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16592);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B930:
    ctx->pc = 0x7F21B930u;
    // 7F21B930: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B934:
    ctx->pc = 0x7F21B934u;
    // 7F21B934: lfs     f0, 16600(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B934u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21B938:
    ctx->pc = 0x7F21B938u;
    // 7F21B938: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B93C:
    ctx->pc = 0x7F21B93Cu;
    // 7F21B93C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21B93Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F21B940:
    ctx->pc = 0x7F21B940u;
    // 7F21B940: fmuls   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21B940u)) return;
    ppc_fmuls(ctx, 30, 0, 1);

label_7F21B944:
    ctx->pc = 0x7F21B944u;
    // 7F21B944: b       0x7F21B954
    {
            goto label_7F21B954;
    }

label_7F21B948:
    ctx->pc = 0x7F21B948u;
    ctx->downcount -= 3;
    // 7F21B948: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21B94C:
    ctx->pc = 0x7F21B94Cu;
    // 7F21B94C: lfs     f31, 16604(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21B94Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F21B950:
    ctx->pc = 0x7F21B950u;
    // 7F21B950: fmr    f30, f31
    if (!ppc_fp_available_inline(ctx, 0x7F21B950u)) return;
    ctx->fpr[30] = ctx->fpr[31];

label_7F21B954:
    ctx->pc = 0x7F21B954u;
    ctx->downcount -= 2;
    // 7F21B954: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F21B958:
    ctx->pc = 0x7F21B958u;
    // 7F21B958: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21B95Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21B95C:
    ctx->pc = 0x7F21B95Cu;
    ctx->downcount -= 2;
    // 7F21B95C: cmplwi  r3, 0x0000
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

label_7F21B960:
    ctx->pc = 0x7F21B960u;
    // 7F21B960: bc    12, 2, 0x7F21B980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21B980;
        }
    }

label_7F21B964:
    ctx->pc = 0x7F21B964u;
    ctx->downcount -= 1;
    // 7F21B964: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B968u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B968:
    ctx->pc = 0x7F21B968u;
    ctx->downcount -= 2;
    // 7F21B968: sth     r3, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B96C:
    ctx->pc = 0x7F21B96Cu;
    // 7F21B96C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B970u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B970:
    ctx->pc = 0x7F21B970u;
    ctx->downcount -= 2;
    // 7F21B970: sth     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B974:
    ctx->pc = 0x7F21B974u;
    // 7F21B974: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F21B978u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F21B978:
    ctx->pc = 0x7F21B978u;
    ctx->downcount -= 2;
    // 7F21B978: sth     r3, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B97C:
    ctx->pc = 0x7F21B97Cu;
    // 7F21B97C: b       0x7F21B994
    {
            goto label_7F21B994;
    }

label_7F21B980:
    ctx->pc = 0x7F21B980u;
    ctx->downcount -= 5;
    // 7F21B980: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F21B984:
    ctx->pc = 0x7F21B984u;
    // 7F21B984: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F21B988:
    ctx->pc = 0x7F21B988u;
    // 7F21B988: sth     r3, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B98C:
    ctx->pc = 0x7F21B98Cu;
    // 7F21B98C: sth     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21B990:
    ctx->pc = 0x7F21B990u;
    // 7F21B990: sth     r3, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B994:
    ctx->pc = 0x7F21B994u;
    ctx->downcount -= 3;
    // 7F21B994: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F21B998:
    ctx->pc = 0x7F21B998u;
    // 7F21B998: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F21B99C:
    ctx->pc = 0x7F21B99Cu;
    // 7F21B99C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F21B9A0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F21B9A0:
    ctx->pc = 0x7F21B9A0u;
    ctx->downcount -= 4;
    // 7F21B9A0: sth     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F21B9A4:
    ctx->pc = 0x7F21B9A4u;
    // 7F21B9A4: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F21B9A8:
    ctx->pc = 0x7F21B9A8u;
    // 7F21B9A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21B9AC:
    ctx->pc = 0x7F21B9ACu;
    // 7F21B9AC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F21B9B0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F21B9B0:
    ctx->pc = 0x7F21B9B0u;
    ctx->downcount -= 3;
    // 7F21B9B0: rlwinm. r0, r3, 0, 27, 27
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

label_7F21B9B4:
    ctx->pc = 0x7F21B9B4u;
    // 7F21B9B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21B9B8:
    ctx->pc = 0x7F21B9B8u;
    // 7F21B9B8: bc    12, 2, 0x7F21BA24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BA24;
        }
    }

label_7F21B9BC:
    ctx->pc = 0x7F21B9BCu;
    ctx->downcount -= 26;
    // 7F21B9BC: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21B9C0:
    ctx->pc = 0x7F21B9C0u;
    // 7F21B9C0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F21B9C4:
    ctx->pc = 0x7F21B9C4u;
    // 7F21B9C4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21B9C8:
    ctx->pc = 0x7F21B9C8u;
    // 7F21B9C8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F21B9CC:
    ctx->pc = 0x7F21B9CCu;
    // 7F21B9CC: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F21B9D0:
    ctx->pc = 0x7F21B9D0u;
    // 7F21B9D0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F21B9D4:
    ctx->pc = 0x7F21B9D4u;
    // 7F21B9D4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21B9D8:
    ctx->pc = 0x7F21B9D8u;
    // 7F21B9D8: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21B9DC:
    ctx->pc = 0x7F21B9DCu;
    // 7F21B9DC: lfd     f4, 16592(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21B9DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16592);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B9E0:
    ctx->pc = 0x7F21B9E0u;
    // 7F21B9E0: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B9E4:
    ctx->pc = 0x7F21B9E4u;
    // 7F21B9E4: lfs     f5, 16608(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21B9E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F21B9E8:
    ctx->pc = 0x7F21B9E8u;
    // 7F21B9E8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B9E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21B9EC:
    ctx->pc = 0x7F21B9ECu;
    // 7F21B9EC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21B9F0:
    ctx->pc = 0x7F21B9F0u;
    // 7F21B9F0: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21B9F0u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F21B9F4:
    ctx->pc = 0x7F21B9F4u;
    // 7F21B9F4: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21B9F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21B9F8:
    ctx->pc = 0x7F21B9F8u;
    // 7F21B9F8: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21B9FC:
    ctx->pc = 0x7F21B9FCu;
    // 7F21B9FC: fmuls   f3, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21B9FCu)) return;
    ppc_fmuls(ctx, 3, 5, 0);

label_7F21BA00:
    ctx->pc = 0x7F21BA00u;
    // 7F21BA00: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BA04:
    ctx->pc = 0x7F21BA04u;
    // 7F21BA04: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BA08:
    ctx->pc = 0x7F21BA08u;
    // 7F21BA08: fsubs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21BA08u)) return;
    ppc_fsubs(ctx, 1, 1, 4);

label_7F21BA0C:
    ctx->pc = 0x7F21BA0Cu;
    // 7F21BA0C: fnmsubs f2, f3, f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21BA0Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[31], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F21BA10:
    ctx->pc = 0x7F21BA10u;
    // 7F21BA10: fmuls   f1, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BA10u)) return;
    ppc_fmuls(ctx, 1, 5, 1);

label_7F21BA14:
    ctx->pc = 0x7F21BA14u;
    // 7F21BA14: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F21BA18:
    ctx->pc = 0x7F21BA18u;
    // 7F21BA18: fnmsubs f0, f1, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BA18u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[30], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F21BA1C:
    ctx->pc = 0x7F21BA1Cu;
    // 7F21BA1C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BA20:
    ctx->pc = 0x7F21BA20u;
    // 7F21BA20: b       0x7F21BA94
    {
            goto label_7F21BA94;
    }

label_7F21BA24:
    ctx->pc = 0x7F21BA24u;
    ctx->downcount -= 2;
    // 7F21BA24: rlwinm. r0, r31, 0, 31, 31
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

label_7F21BA28:
    ctx->pc = 0x7F21BA28u;
    // 7F21BA28: bc    12, 2, 0x7F21BA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BA5C;
        }
    }

label_7F21BA2C:
    ctx->pc = 0x7F21BA2Cu;
    ctx->downcount -= 12;
    // 7F21BA2C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21BA30:
    ctx->pc = 0x7F21BA30u;
    // 7F21BA30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21BA34:
    ctx->pc = 0x7F21BA34u;
    // 7F21BA34: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BA38:
    ctx->pc = 0x7F21BA38u;
    // 7F21BA38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BA3C:
    ctx->pc = 0x7F21BA3Cu;
    // 7F21BA3C: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F21BA40:
    ctx->pc = 0x7F21BA40u;
    // 7F21BA40: lfd     f1, 16592(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16592);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BA44:
    ctx->pc = 0x7F21BA44u;
    // 7F21BA44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BA48:
    ctx->pc = 0x7F21BA48u;
    // 7F21BA48: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21BA4C:
    ctx->pc = 0x7F21BA4Cu;
    // 7F21BA4C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BA50:
    ctx->pc = 0x7F21BA50u;
    // 7F21BA50: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BA50u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21BA54:
    ctx->pc = 0x7F21BA54u;
    // 7F21BA54: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BA54u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F21BA58:
    ctx->pc = 0x7F21BA58u;
    // 7F21BA58: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BA5C:
    ctx->pc = 0x7F21BA5Cu;
    ctx->downcount -= 2;
    // 7F21BA5C: rlwinm. r0, r31, 0, 30, 30
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

label_7F21BA60:
    ctx->pc = 0x7F21BA60u;
    // 7F21BA60: bc    12, 2, 0x7F21BA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BA94;
        }
    }

label_7F21BA64:
    ctx->pc = 0x7F21BA64u;
    ctx->downcount -= 12;
    // 7F21BA64: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21BA68:
    ctx->pc = 0x7F21BA68u;
    // 7F21BA68: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21BA6C:
    ctx->pc = 0x7F21BA6Cu;
    // 7F21BA6C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BA70:
    ctx->pc = 0x7F21BA70u;
    // 7F21BA70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BA74:
    ctx->pc = 0x7F21BA74u;
    // 7F21BA74: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F21BA78:
    ctx->pc = 0x7F21BA78u;
    // 7F21BA78: lfd     f1, 16592(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16592);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BA7C:
    ctx->pc = 0x7F21BA7Cu;
    // 7F21BA7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BA80:
    ctx->pc = 0x7F21BA80u;
    // 7F21BA80: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21BA84:
    ctx->pc = 0x7F21BA84u;
    // 7F21BA84: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BA88:
    ctx->pc = 0x7F21BA88u;
    // 7F21BA88: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BA88u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21BA8C:
    ctx->pc = 0x7F21BA8Cu;
    // 7F21BA8C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BA8Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F21BA90:
    ctx->pc = 0x7F21BA90u;
    // 7F21BA90: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BA90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BA94:
    ctx->pc = 0x7F21BA94u;
    ctx->downcount -= 4;
    // 7F21BA94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F21BA98:
    ctx->pc = 0x7F21BA98u;
    // 7F21BA98: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F21BA9C:
    ctx->pc = 0x7F21BA9Cu;
    // 7F21BA9C: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BAA0:
    ctx->pc = 0x7F21BAA0u;
    // 7F21BAA0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21BAA4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21BAA4:
    ctx->pc = 0x7F21BAA4u;
    ctx->downcount -= 2;
    // 7F21BAA4: cmplwi  r3, 0x0000
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

label_7F21BAA8:
    ctx->pc = 0x7F21BAA8u;
    // 7F21BAA8: bc    12, 2, 0x7F21BABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BABC;
        }
    }

label_7F21BAAC:
    ctx->pc = 0x7F21BAACu;
    ctx->downcount -= 4;
    // 7F21BAAC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21BAB0:
    ctx->pc = 0x7F21BAB0u;
    // 7F21BAB0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F21BAB4:
    ctx->pc = 0x7F21BAB4u;
    // 7F21BAB4: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BAB8:
    ctx->pc = 0x7F21BAB8u;
    // 7F21BAB8: stw     r0, -10912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10912);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BABC:
    ctx->pc = 0x7F21BABCu;
    ctx->downcount -= 3;
    // 7F21BABC: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BAC0:
    ctx->pc = 0x7F21BAC0u;
    // 7F21BAC0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21BAC4:
    ctx->pc = 0x7F21BAC4u;
    // 7F21BAC4: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F21BAC8u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F21BAC8:
    ctx->pc = 0x7F21BAC8u;
    ctx->downcount -= 19;
    // 7F21BAC8: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BACC:
    ctx->pc = 0x7F21BACCu;
    // 7F21BACC: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F21BAD0:
    ctx->pc = 0x7F21BAD0u;
    // 7F21BAD0: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BAD4:
    ctx->pc = 0x7F21BAD4u;
    // 7F21BAD4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F21BAD8:
    ctx->pc = 0x7F21BAD8u;
    // 7F21BAD8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F21BADC:
    ctx->pc = 0x7F21BADCu;
    // 7F21BADC: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21BAE0:
    ctx->pc = 0x7F21BAE0u;
    // 7F21BAE0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F21BAE4:
    ctx->pc = 0x7F21BAE4u;
    // 7F21BAE4: lfd     f2, 16592(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21BAE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16592);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BAE8:
    ctx->pc = 0x7F21BAE8u;
    // 7F21BAE8: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BAEC:
    ctx->pc = 0x7F21BAECu;
    // 7F21BAEC: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BAF0:
    ctx->pc = 0x7F21BAF0u;
    // 7F21BAF0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BAF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BAF4:
    ctx->pc = 0x7F21BAF4u;
    // 7F21BAF4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BAF8:
    ctx->pc = 0x7F21BAF8u;
    // 7F21BAF8: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21BAF8u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F21BAFC:
    ctx->pc = 0x7F21BAFCu;
    // 7F21BAFC: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21BB00:
    ctx->pc = 0x7F21BB00u;
    // 7F21BB00: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BB00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BB04:
    ctx->pc = 0x7F21BB04u;
    // 7F21BB04: fmuls   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F21BB04u)) return;
    ppc_fmuls(ctx, 1, 1, 31);

label_7F21BB08:
    ctx->pc = 0x7F21BB08u;
    // 7F21BB08: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21BB08u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F21BB0C:
    ctx->pc = 0x7F21BB0Cu;
    // 7F21BB0C: fmuls   f2, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21BB0Cu)) return;
    ppc_fmuls(ctx, 2, 0, 30);

label_7F21BB10:
    ctx->pc = 0x7F21BB10u;
    // 7F21BB10: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F21BB14u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F21BB14:
    ctx->pc = 0x7F21BB14u;
    ctx->downcount -= 7;
    // 7F21BB14: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21BB18:
    ctx->pc = 0x7F21BB18u;
    // 7F21BB18: rlwinm r0, r31, 0, 16, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000F000u;
    }

label_7F21BB1C:
    ctx->pc = 0x7F21BB1Cu;
    // 7F21BB1C: cmpwi   r0, 4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21BB20:
    ctx->pc = 0x7F21BB20u;
    // 7F21BB20: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BB24:
    ctx->pc = 0x7F21BB24u;
    // 7F21BB24: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F21BB28:
    ctx->pc = 0x7F21BB28u;
    // 7F21BB28: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BB2C:
    ctx->pc = 0x7F21BB2Cu;
    // 7F21BB2C: bc    12, 2, 0x7F21BB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BB5C;
        }
    }

label_7F21BB30:
    ctx->pc = 0x7F21BB30u;
    ctx->downcount -= 1;
    // 7F21BB30: bc    4, 0, 0x7F21BB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21BB40;
        }
    }

label_7F21BB34:
    ctx->pc = 0x7F21BB34u;
    ctx->downcount -= 2;
    // 7F21BB34: cmpwi   r0, 0
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

label_7F21BB38:
    ctx->pc = 0x7F21BB38u;
    // 7F21BB38: bc    12, 2, 0x7F21BB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BB4C;
        }
    }

label_7F21BB3C:
    ctx->pc = 0x7F21BB3Cu;
    ctx->downcount -= 1;
    // 7F21BB3C: b       0x7F21BB7C
    {
            goto label_7F21BB7C;
    }

label_7F21BB40:
    ctx->pc = 0x7F21BB40u;
    ctx->downcount -= 2;
    // 7F21BB40: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21BB44:
    ctx->pc = 0x7F21BB44u;
    // 7F21BB44: bc    12, 2, 0x7F21BB6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BB6C;
        }
    }

label_7F21BB48:
    ctx->pc = 0x7F21BB48u;
    ctx->downcount -= 1;
    // 7F21BB48: b       0x7F21BB7C
    {
            goto label_7F21BB7C;
    }

label_7F21BB4C:
    ctx->pc = 0x7F21BB4Cu;
    ctx->downcount -= 4;
    // 7F21BB4C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BB50:
    ctx->pc = 0x7F21BB50u;
    // 7F21BB50: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F21BB54:
    ctx->pc = 0x7F21BB54u;
    // 7F21BB54: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BB58:
    ctx->pc = 0x7F21BB58u;
    // 7F21BB58: b       0x7F21BB88
    {
            goto label_7F21BB88;
    }

label_7F21BB5C:
    ctx->pc = 0x7F21BB5Cu;
    ctx->downcount -= 4;
    // 7F21BB5C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BB60:
    ctx->pc = 0x7F21BB60u;
    // 7F21BB60: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F21BB64:
    ctx->pc = 0x7F21BB64u;
    // 7F21BB64: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BB68:
    ctx->pc = 0x7F21BB68u;
    // 7F21BB68: b       0x7F21BB88
    {
            goto label_7F21BB88;
    }

label_7F21BB6C:
    ctx->pc = 0x7F21BB6Cu;
    ctx->downcount -= 4;
    // 7F21BB6C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BB70:
    ctx->pc = 0x7F21BB70u;
    // 7F21BB70: li      r0, 66
    ctx->gpr[0] = (u32)(s32)(66);

label_7F21BB74:
    ctx->pc = 0x7F21BB74u;
    // 7F21BB74: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BB78:
    ctx->pc = 0x7F21BB78u;
    // 7F21BB78: b       0x7F21BB88
    {
            goto label_7F21BB88;
    }

label_7F21BB7C:
    ctx->pc = 0x7F21BB7Cu;
    ctx->downcount -= 3;
    // 7F21BB7C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BB80:
    ctx->pc = 0x7F21BB80u;
    // 7F21BB80: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F21BB84:
    ctx->pc = 0x7F21BB84u;
    // 7F21BB84: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BB88:
    ctx->pc = 0x7F21BB88u;
    ctx->downcount -= 11;
    // 7F21BB88: lis     r3, -32639
    ctx->gpr[3] = ((u32)(s32)(-32639) << 16);

label_7F21BB8C:
    ctx->pc = 0x7F21BB8Cu;
    // 7F21BB8C: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21BB90:
    ctx->pc = 0x7F21BB90u;
    // 7F21BB90: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F21BB94:
    ctx->pc = 0x7F21BB94u;
    // 7F21BB94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21BB98:
    ctx->pc = 0x7F21BB98u;
    // 7F21BB98: stw     r0, 140(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BB9C:
    ctx->pc = 0x7F21BB9Cu;
    // 7F21BB9C: lha     r0, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21BBA0:
    ctx->pc = 0x7F21BBA0u;
    // 7F21BBA0: sth     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21BBA4:
    ctx->pc = 0x7F21BBA4u;
    // 7F21BBA4: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21BBA8:
    ctx->pc = 0x7F21BBA8u;
    // 7F21BBA8: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BBAC:
    ctx->pc = 0x7F21BBACu;
    // 7F21BBAC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F21BBB0:
    ctx->pc = 0x7F21BBB0u;
    // 7F21BBB0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BBB4:
    ctx->pc = 0x7F21BBB4u;
    ctx->downcount -= 20;
    // 7F21BBB4: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21BBB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F21BBB4u);
        if (ctx->exception) return;
    }

label_7F21BBB8:
    ctx->pc = 0x7F21BBB8u;
    // 7F21BBB8: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BBB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BBBC:
    ctx->pc = 0x7F21BBBCu;
    // 7F21BBBC: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21BBBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F21BBBCu);
        if (ctx->exception) return;
    }

label_7F21BBC0:
    ctx->pc = 0x7F21BBC0u;
    // 7F21BBC0: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BBC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BBC4:
    ctx->pc = 0x7F21BBC4u;
    // 7F21BBC4: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21BBC8:
    ctx->pc = 0x7F21BBC8u;
    // 7F21BBC8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BBCC:
    ctx->pc = 0x7F21BBCCu;
    // 7F21BBCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21BBD0:
    ctx->pc = 0x7F21BBD0u;
    // 7F21BBD0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F21BBD4:
    ctx->pc = 0x7F21BBD4u;
    // 7F21BBD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21BBD8:
    ctx->pc = 0x7F21BBD8u;
    ctx->downcount -= 20;
    // 7F21BBD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21BBDC:
    ctx->pc = 0x7F21BBDCu;
    // 7F21BBDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21BBE0:
    ctx->pc = 0x7F21BBE0u;
    // 7F21BBE0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F21BBE4:
    ctx->pc = 0x7F21BBE4u;
    // 7F21BBE4: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_7F21BBE8:
    ctx->pc = 0x7F21BBE8u;
    // 7F21BBE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BBEC:
    ctx->pc = 0x7F21BBECu;
    // 7F21BBEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21BBF0:
    ctx->pc = 0x7F21BBF0u;
    // 7F21BBF0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21BBF4:
    ctx->pc = 0x7F21BBF4u;
    // 7F21BBF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BBF8:
    ctx->pc = 0x7F21BBF8u;
    // 7F21BBF8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F21BBFC:
    ctx->pc = 0x7F21BBFCu;
    // 7F21BBFC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F21BC00u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F21BC00:
    ctx->pc = 0x7F21BC00u;
    ctx->downcount -= 2;
    // 7F21BC00: or.   r31, r3, r3
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

label_7F21BC04:
    ctx->pc = 0x7F21BC04u;
    // 7F21BC04: bc    12, 2, 0x7F21BC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BC70;
        }
    }

label_7F21BC08:
    ctx->pc = 0x7F21BC08u;
    ctx->downcount -= 5;
    // 7F21BC08: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F21BC0C:
    ctx->pc = 0x7F21BC0Cu;
    // 7F21BC0C: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F21BC10:
    ctx->pc = 0x7F21BC10u;
    // 7F21BC10: addi    r4, r4, -19096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19096);

label_7F21BC14:
    ctx->pc = 0x7F21BC14u;
    // 7F21BC14: addi    r5, r5, -18628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18628);

label_7F21BC18:
    ctx->pc = 0x7F21BC18u;
    // 7F21BC18: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F21BC1Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F21BC1C:
    ctx->pc = 0x7F21BC1Cu;
    ctx->downcount -= 12;
    // 7F21BC1C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BC20:
    ctx->pc = 0x7F21BC20u;
    // 7F21BC20: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F21BC24:
    ctx->pc = 0x7F21BC24u;
    // 7F21BC24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21BC28:
    ctx->pc = 0x7F21BC28u;
    // 7F21BC28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21BC2C:
    ctx->pc = 0x7F21BC2Cu;
    // 7F21BC2C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F21BC30:
    ctx->pc = 0x7F21BC30u;
    // 7F21BC30: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F21BC34:
    ctx->pc = 0x7F21BC34u;
    // 7F21BC34: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F21BC38:
    ctx->pc = 0x7F21BC38u;
    // 7F21BC38: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21BC3C:
    ctx->pc = 0x7F21BC3Cu;
    // 7F21BC3C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21BC40:
    ctx->pc = 0x7F21BC40u;
    // 7F21BC40: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21BC44:
    ctx->pc = 0x7F21BC44u;
    // 7F21BC44: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BC48:
    ctx->pc = 0x7F21BC48u;
    // 7F21BC48: bl      0x7F21B78C
    {
            ctx->lr = 0x7F21BC4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21B78Cu;
                return;
            }
            goto label_7F21B78C;
    }

label_7F21BC4C:
    ctx->pc = 0x7F21BC4Cu;
    ctx->downcount -= 2;
    // 7F21BC4C: cmpwi   r3, 0
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

label_7F21BC50:
    ctx->pc = 0x7F21BC50u;
    // 7F21BC50: bc    4, 0, 0x7F21BC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21BC64;
        }
    }

label_7F21BC54:
    ctx->pc = 0x7F21BC54u;
    ctx->downcount -= 2;
    // 7F21BC54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21BC58:
    ctx->pc = 0x7F21BC58u;
    // 7F21BC58: bl      0x7F3C8210
    {
            ctx->lr = 0x7F21BC5Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F21BC5C:
    ctx->pc = 0x7F21BC5Cu;
    ctx->downcount -= 2;
    // 7F21BC5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21BC60:
    ctx->pc = 0x7F21BC60u;
    // 7F21BC60: b       0x7F21BC74
    {
            goto label_7F21BC74;
    }

label_7F21BC64:
    ctx->pc = 0x7F21BC64u;
    ctx->downcount -= 3;
    // 7F21BC64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21BC68:
    ctx->pc = 0x7F21BC68u;
    // 7F21BC68: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21BC6C:
    ctx->pc = 0x7F21BC6Cu;
    // 7F21BC6C: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F21BC70u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F21BC70:
    ctx->pc = 0x7F21BC70u;
    ctx->downcount -= 1;
    // 7F21BC70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21BC74:
    ctx->pc = 0x7F21BC74u;
    ctx->downcount -= 16;
    // 7F21BC74: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21BC78:
    ctx->pc = 0x7F21BC78u;
    // 7F21BC78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BC7C:
    ctx->pc = 0x7F21BC7Cu;
    // 7F21BC7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21BC80:
    ctx->pc = 0x7F21BC80u;
    // 7F21BC80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21BC84:
    ctx->pc = 0x7F21BC84u;
    // 7F21BC84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21BC88:
    ctx->pc = 0x7F21BC88u;
    ctx->downcount -= 17;
    // 7F21BC88: stwu     r1, -400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-400);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21BC8C:
    ctx->pc = 0x7F21BC8Cu;
    // 7F21BC8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21BC90:
    ctx->pc = 0x7F21BC90u;
    // 7F21BC90: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BC94:
    ctx->pc = 0x7F21BC94u;
    // 7F21BC94: stmw     r27, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21BC98:
    ctx->pc = 0x7F21BC98u;
    // 7F21BC98: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BC9C:
    ctx->pc = 0x7F21BC9Cu;
    // 7F21BC9C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21BCA0:
    ctx->pc = 0x7F21BCA0u;
    // 7F21BCA0: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F21BCA4u;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F21BCA4:
    ctx->pc = 0x7F21BCA4u;
    ctx->downcount -= 8;
    // 7F21BCA4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BCA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F21BCA8:
    ctx->pc = 0x7F21BCA8u;
    // 7F21BCA8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F21BCAC:
    ctx->pc = 0x7F21BCACu;
    // 7F21BCAC: addi    r3, r3, 18308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F21BCB0:
    ctx->pc = 0x7F21BCB0u;
    // 7F21BCB0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F21BCB4:
    ctx->pc = 0x7F21BCB4u;
    // 7F21BCB4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BCB8:
    ctx->pc = 0x7F21BCB8u;
    // 7F21BCB8: stfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BCB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F21BCBC:
    ctx->pc = 0x7F21BCBCu;
    // 7F21BCBC: lwz     r27, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F21BCC0:
    ctx->pc = 0x7F21BCC0u;
    // 7F21BCC0: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F21BCC4u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F21BCC4:
    ctx->pc = 0x7F21BCC4u;
    ctx->downcount -= 6;
    // 7F21BCC4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21BCC8:
    ctx->pc = 0x7F21BCC8u;
    // 7F21BCC8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F21BCCC:
    ctx->pc = 0x7F21BCCCu;
    // 7F21BCCC: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F21BCD0:
    ctx->pc = 0x7F21BCD0u;
    // 7F21BCD0: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F21BCD4:
    ctx->pc = 0x7F21BCD4u;
    // 7F21BCD4: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F21BCD8:
    ctx->pc = 0x7F21BCD8u;
    // 7F21BCD8: bl      0x7F1081A8
    {
            ctx->lr = 0x7F21BCDCu;
            ctx->pc = 0x7F1081A8u;
            return;
    }

label_7F21BCDC:
    ctx->pc = 0x7F21BCDCu;
    ctx->downcount -= 2;
    // 7F21BCDC: cmpwi   r3, 0
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

label_7F21BCE0:
    ctx->pc = 0x7F21BCE0u;
    // 7F21BCE0: bc    12, 2, 0x7F21BD0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BD0C;
        }
    }

label_7F21BCE4:
    ctx->pc = 0x7F21BCE4u;
    ctx->downcount -= 3;
    // 7F21BCE4: addi    r3, r1, 200
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(200);

label_7F21BCE8:
    ctx->pc = 0x7F21BCE8u;
    // 7F21BCE8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21BCEC:
    ctx->pc = 0x7F21BCECu;
    // 7F21BCEC: bl      0x7F108634
    {
            ctx->lr = 0x7F21BCF0u;
            ctx->pc = 0x7F108634u;
            return;
    }

label_7F21BCF0:
    ctx->pc = 0x7F21BCF0u;
    ctx->downcount -= 2;
    // 7F21BCF0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F21BCF4:
    ctx->pc = 0x7F21BCF4u;
    // 7F21BCF4: bl      0x7F108740
    {
            ctx->lr = 0x7F21BCF8u;
            ctx->pc = 0x7F108740u;
            return;
    }

label_7F21BCF8:
    ctx->pc = 0x7F21BCF8u;
    ctx->downcount -= 4;
    // 7F21BCF8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21BCFC:
    ctx->pc = 0x7F21BCFCu;
    // 7F21BCFC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21BD00:
    ctx->pc = 0x7F21BD00u;
    // 7F21BD00: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F21BD04:
    ctx->pc = 0x7F21BD04u;
    // 7F21BD04: bl      0x800261B4
    {
            ctx->lr = 0x7F21BD08u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F21BD08:
    ctx->pc = 0x7F21BD08u;
    ctx->downcount -= 1;
    // 7F21BD08: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F21BD0C:
    ctx->pc = 0x7F21BD0Cu;
    ctx->downcount -= 4;
    // 7F21BD0C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F21BD10:
    ctx->pc = 0x7F21BD10u;
    // 7F21BD10: addi    r3, r3, 18308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F21BD14:
    ctx->pc = 0x7F21BD14u;
    // 7F21BD14: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BD18:
    ctx->pc = 0x7F21BD18u;
    // 7F21BD18: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F21BD1Cu;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F21BD1C:
    ctx->pc = 0x7F21BD1Cu;
    ctx->downcount -= 4;
    // 7F21BD1C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F21BD20:
    ctx->pc = 0x7F21BD20u;
    // 7F21BD20: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F21BD24:
    ctx->pc = 0x7F21BD24u;
    // 7F21BD24: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F21BD28:
    ctx->pc = 0x7F21BD28u;
    // 7F21BD28: bl      0x7F106A30
    {
            ctx->lr = 0x7F21BD2Cu;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F21BD2C:
    ctx->pc = 0x7F21BD2Cu;
    ctx->downcount -= 2;
    // 7F21BD2C: rlwinm. r28, r3, 0, 31, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F21BD30:
    ctx->pc = 0x7F21BD30u;
    // 7F21BD30: bc    12, 2, 0x7F21BD8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BD8C;
        }
    }

label_7F21BD34:
    ctx->pc = 0x7F21BD34u;
    ctx->downcount -= 3;
    // 7F21BD34: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F21BD38:
    ctx->pc = 0x7F21BD38u;
    // 7F21BD38: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21BD3C:
    ctx->pc = 0x7F21BD3Cu;
    // 7F21BD3C: bl      0x7F106DDC
    {
            ctx->lr = 0x7F21BD40u;
            ctx->pc = 0x7F106DDCu;
            return;
    }

label_7F21BD40:
    ctx->pc = 0x7F21BD40u;
    ctx->downcount -= 2;
    // 7F21BD40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21BD44:
    ctx->pc = 0x7F21BD44u;
    // 7F21BD44: bl      0x7F106FC0
    {
            ctx->lr = 0x7F21BD48u;
            ctx->pc = 0x7F106FC0u;
            return;
    }

label_7F21BD48:
    ctx->pc = 0x7F21BD48u;
    ctx->downcount -= 2;
    // 7F21BD48: cmpwi   r28, 0
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

label_7F21BD4C:
    ctx->pc = 0x7F21BD4Cu;
    // 7F21BD4C: bc    12, 2, 0x7F21BD8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BD8C;
        }
    }

label_7F21BD50:
    ctx->pc = 0x7F21BD50u;
    ctx->downcount -= 13;
    // 7F21BD50: xoris   r3, r27, 0x8000
    ctx->gpr[3] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F21BD54:
    ctx->pc = 0x7F21BD54u;
    // 7F21BD54: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21BD58:
    ctx->pc = 0x7F21BD58u;
    // 7F21BD58: stw     r3, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BD5C:
    ctx->pc = 0x7F21BD5Cu;
    // 7F21BD5C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21BD60:
    ctx->pc = 0x7F21BD60u;
    // 7F21BD60: lfd     f1, 16624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21BD60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16624);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BD64:
    ctx->pc = 0x7F21BD64u;
    // 7F21BD64: stw     r0, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BD68:
    ctx->pc = 0x7F21BD68u;
    // 7F21BD68: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BD68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21BD6C:
    ctx->pc = 0x7F21BD6Cu;
    // 7F21BD6C: lfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BD6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BD70:
    ctx->pc = 0x7F21BD70u;
    // 7F21BD70: lfs     f3, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F21BD70u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21BD74:
    ctx->pc = 0x7F21BD74u;
    // 7F21BD74: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BD74u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F21BD78:
    ctx->pc = 0x7F21BD78u;
    // 7F21BD78: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BD78u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F21BD7C:
    ctx->pc = 0x7F21BD7Cu;
    // 7F21BD7C: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BD7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F21BD80:
    ctx->pc = 0x7F21BD80u;
    // 7F21BD80: bc    4, 0, 0x7F21BD8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21BD8C;
        }
    }

label_7F21BD84:
    ctx->pc = 0x7F21BD84u;
    ctx->downcount -= 2;
    // 7F21BD84: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F21BD84u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BD88:
    ctx->pc = 0x7F21BD88u;
    // 7F21BD88: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F21BD8C:
    ctx->pc = 0x7F21BD8Cu;
    ctx->downcount -= 14;
    // 7F21BD8C: xoris   r3, r27, 0x8000
    ctx->gpr[3] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F21BD90:
    ctx->pc = 0x7F21BD90u;
    // 7F21BD90: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F21BD94:
    ctx->pc = 0x7F21BD94u;
    // 7F21BD94: stw     r3, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BD98:
    ctx->pc = 0x7F21BD98u;
    // 7F21BD98: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21BD9C:
    ctx->pc = 0x7F21BD9Cu;
    // 7F21BD9C: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F21BDA0:
    ctx->pc = 0x7F21BDA0u;
    // 7F21BDA0: lfd     f2, 16624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16624);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BDA4:
    ctx->pc = 0x7F21BDA4u;
    // 7F21BDA4: stw     r0, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BDA8:
    ctx->pc = 0x7F21BDA8u;
    // 7F21BDA8: lfs     f1, 19564(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDA8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21BDAC:
    ctx->pc = 0x7F21BDACu;
    // 7F21BDAC: lfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BDB0:
    ctx->pc = 0x7F21BDB0u;
    // 7F21BDB0: lfs     f3, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDB0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21BDB4:
    ctx->pc = 0x7F21BDB4u;
    // 7F21BDB4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21BDB4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F21BDB8:
    ctx->pc = 0x7F21BDB8u;
    // 7F21BDB8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BDB8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F21BDBC:
    ctx->pc = 0x7F21BDBCu;
    // 7F21BDBC: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BDBCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F21BDC0:
    ctx->pc = 0x7F21BDC0u;
    // 7F21BDC0: bc    4, 1, 0x7F21BDE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21BDE4;
        }
    }

label_7F21BDC4:
    ctx->pc = 0x7F21BDC4u;
    ctx->downcount -= 8;
    // 7F21BDC4: stw     r3, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BDC8:
    ctx->pc = 0x7F21BDC8u;
    // 7F21BDC8: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F21BDCC:
    ctx->pc = 0x7F21BDCCu;
    // 7F21BDCC: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21BDD0:
    ctx->pc = 0x7F21BDD0u;
    // 7F21BDD0: stw     r0, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BDD4:
    ctx->pc = 0x7F21BDD4u;
    // 7F21BDD4: lfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21BDD8:
    ctx->pc = 0x7F21BDD8u;
    // 7F21BDD8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21BDD8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F21BDDC:
    ctx->pc = 0x7F21BDDCu;
    // 7F21BDDC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BDDCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F21BDE0:
    ctx->pc = 0x7F21BDE0u;
    // 7F21BDE0: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDE0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BDE4:
    ctx->pc = 0x7F21BDE4u;
    ctx->downcount -= 2;
    // 7F21BDE4: cmpwi   r31, 0
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

label_7F21BDE8:
    ctx->pc = 0x7F21BDE8u;
    // 7F21BDE8: bc    12, 2, 0x7F21BE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BE04;
        }
    }

label_7F21BDEC:
    ctx->pc = 0x7F21BDECu;
    ctx->downcount -= 6;
    // 7F21BDEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BDF0:
    ctx->pc = 0x7F21BDF0u;
    // 7F21BDF0: lfs     f0, 16616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BDF4:
    ctx->pc = 0x7F21BDF4u;
    // 7F21BDF4: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDF4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BDF8:
    ctx->pc = 0x7F21BDF8u;
    // 7F21BDF8: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDF8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BDFC:
    ctx->pc = 0x7F21BDFCu;
    // 7F21BDFC: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21BDFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BE00:
    ctx->pc = 0x7F21BE00u;
    // 7F21BE00: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE00u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BE04:
    ctx->pc = 0x7F21BE04u;
    ctx->downcount -= 17;
    // 7F21BE04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21BE08:
    ctx->pc = 0x7F21BE08u;
    // 7F21BE08: lmw     r27, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21BE0C:
    ctx->pc = 0x7F21BE0Cu;
    // 7F21BE0C: lwz     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BE10:
    ctx->pc = 0x7F21BE10u;
    // 7F21BE10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21BE14:
    ctx->pc = 0x7F21BE14u;
    // 7F21BE14: addi    r1, r1, 400
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(400);

label_7F21BE18:
    ctx->pc = 0x7F21BE18u;
    // 7F21BE18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2180EC;
        }
    }

label_7F21BE1C:
    ctx->pc = 0x7F21BE1Cu;
    ctx->downcount -= 34;
    // 7F21BE1C: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21BE20:
    ctx->pc = 0x7F21BE20u;
    // 7F21BE20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21BE24:
    ctx->pc = 0x7F21BE24u;
    // 7F21BE24: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BE28:
    ctx->pc = 0x7F21BE28u;
    // 7F21BE28: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F21BE2C:
    ctx->pc = 0x7F21BE2Cu;
    // 7F21BE2C: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21BE2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F21BE2Cu);
        if (ctx->exception) return;
    }

label_7F21BE30:
    ctx->pc = 0x7F21BE30u;
    // 7F21BE30: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F21BE34:
    ctx->pc = 0x7F21BE34u;
    // 7F21BE34: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21BE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F21BE34u);
        if (ctx->exception) return;
    }

label_7F21BE38:
    ctx->pc = 0x7F21BE38u;
    // 7F21BE38: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F21BE3C:
    ctx->pc = 0x7F21BE3Cu;
    // 7F21BE3C: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21BE3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F21BE3Cu);
        if (ctx->exception) return;
    }

label_7F21BE40:
    ctx->pc = 0x7F21BE40u;
    // 7F21BE40: stmw     r21, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21BE44:
    ctx->pc = 0x7F21BE44u;
    // 7F21BE44: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BE48:
    ctx->pc = 0x7F21BE48u;
    // 7F21BE48: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F21BE4C:
    ctx->pc = 0x7F21BE4Cu;
    // 7F21BE4C: lwz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21BE50:
    ctx->pc = 0x7F21BE50u;
    // 7F21BE50: addi    r3, r23, 84
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(84);

label_7F21BE54:
    ctx->pc = 0x7F21BE54u;
    // 7F21BE54: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BE58:
    ctx->pc = 0x7F21BE58u;
    // 7F21BE58: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F21BE5C:
    ctx->pc = 0x7F21BE5Cu;
    // 7F21BE5C: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BE60:
    ctx->pc = 0x7F21BE60u;
    // 7F21BE60: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BE64:
    ctx->pc = 0x7F21BE64u;
    // 7F21BE64: lfs     f1, 64(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE64u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21BE68:
    ctx->pc = 0x7F21BE68u;
    // 7F21BE68: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F21BE6C:
    ctx->pc = 0x7F21BE6Cu;
    // 7F21BE6C: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F21BE70:
    ctx->pc = 0x7F21BE70u;
    // 7F21BE70: lwz     r25, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F21BE74:
    ctx->pc = 0x7F21BE74u;
    // 7F21BE74: lwz     r24, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F21BE78:
    ctx->pc = 0x7F21BE78u;
    // 7F21BE78: bl      0x800261FC
    {
            ctx->lr = 0x7F21BE7Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F21BE7C:
    ctx->pc = 0x7F21BE7Cu;
    ctx->downcount -= 4;
    // 7F21BE7C: addi    r3, r23, 68
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(68);

label_7F21BE80:
    ctx->pc = 0x7F21BE80u;
    // 7F21BE80: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F21BE84:
    ctx->pc = 0x7F21BE84u;
    // 7F21BE84: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BE88:
    ctx->pc = 0x7F21BE88u;
    // 7F21BE88: bl      0x800261B4
    {
            ctx->lr = 0x7F21BE8Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F21BE8C:
    ctx->pc = 0x7F21BE8Cu;
    ctx->downcount -= 5;
    // 7F21BE8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BE90:
    ctx->pc = 0x7F21BE90u;
    // 7F21BE90: lfs     f1, 64(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE90u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21BE94:
    ctx->pc = 0x7F21BE94u;
    // 7F21BE94: lfs     f0, 16648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BE94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BE98:
    ctx->pc = 0x7F21BE98u;
    // 7F21BE98: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BE98u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F21BE9C:
    ctx->pc = 0x7F21BE9Cu;
    // 7F21BE9C: bc    4, 1, 0x7F21BEB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21BEB0;
        }
    }

label_7F21BEA0:
    ctx->pc = 0x7F21BEA0u;
    ctx->downcount -= 4;
    // 7F21BEA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BEA4:
    ctx->pc = 0x7F21BEA4u;
    // 7F21BEA4: lfs     f0, 16652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BEA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BEA8:
    ctx->pc = 0x7F21BEA8u;
    // 7F21BEA8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BEA8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F21BEAC:
    ctx->pc = 0x7F21BEACu;
    // 7F21BEAC: stfs     f0, 64(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F21BEACu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21BEB0:
    ctx->pc = 0x7F21BEB0u;
    ctx->downcount -= 3;
    // 7F21BEB0: lwz     r0, 900(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BEB4:
    ctx->pc = 0x7F21BEB4u;
    // 7F21BEB4: cmpwi   r0, 3
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

label_7F21BEB8:
    ctx->pc = 0x7F21BEB8u;
    // 7F21BEB8: bc    12, 2, 0x7F21C140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F21C140u;
            return;
        }
    }

label_7F21BEBC:
    ctx->pc = 0x7F21BEBCu;
    ctx->downcount -= 3;
    // 7F21BEBC: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21BEC0:
    ctx->pc = 0x7F21BEC0u;
    // 7F21BEC0: cmpwi   r0, 16
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

label_7F21BEC4:
    ctx->pc = 0x7F21BEC4u;
    // 7F21BEC4: bc    4, 0, 0x7F21C140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F21C140u;
            return;
        }
    }

label_7F21BEC8:
    ctx->pc = 0x7F21BEC8u;
    ctx->downcount -= 1;
    // 7F21BEC8: bl      0x7F21C4E4
    {
            ctx->lr = 0x7F21BECCu;
            ctx->pc = 0x7F21C4E4u;
            return;
    }

label_7F21BECC:
    ctx->pc = 0x7F21BECCu;
    ctx->downcount -= 5;
    // 7F21BECC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BED0:
    ctx->pc = 0x7F21BED0u;
    // 7F21BED0: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BED0u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F21BED4:
    ctx->pc = 0x7F21BED4u;
    // 7F21BED4: lfs     f0, 16656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21BED4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BED8:
    ctx->pc = 0x7F21BED8u;
    // 7F21BED8: fmuls   f31, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21BED8u)) return;
    ppc_fmuls(ctx, 31, 0, 30);

label_7F21BEDC:
    ctx->pc = 0x7F21BEDCu;
    // 7F21BEDC: bl      0x7F21C4E4
    {
            ctx->lr = 0x7F21BEE0u;
            ctx->pc = 0x7F21C4E4u;
            return;
    }

label_7F21BEE0:
    ctx->pc = 0x7F21BEE0u;
    ctx->downcount -= 23;
    // 7F21BEE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BEE4:
    ctx->pc = 0x7F21BEE4u;
    // 7F21BEE4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F21BEE8:
    ctx->pc = 0x7F21BEE8u;
    // 7F21BEE8: addi    r6, r3, 16660
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(16660);

label_7F21BEEC:
    ctx->pc = 0x7F21BEECu;
    // 7F21BEEC: lfs     f0, 16664(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21BEECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21BEF0:
    ctx->pc = 0x7F21BEF0u;
    // 7F21BEF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21BEF4:
    ctx->pc = 0x7F21BEF4u;
    // 7F21BEF4: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21BEF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21BEF8:
    ctx->pc = 0x7F21BEF8u;
    // 7F21BEF8: addi    r4, r3, 16632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16632);

label_7F21BEFC:
    ctx->pc = 0x7F21BEFCu;
    // 7F21BEFC: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21BEFCu)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_7F21BF00:
    ctx->pc = 0x7F21BF00u;
    // 7F21BF00: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F21BF04:
    ctx->pc = 0x7F21BF04u;
    // 7F21BF04: lwz     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F21BF08:
    ctx->pc = 0x7F21BF08u;
    // 7F21BF08: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F21BF0C:
    ctx->pc = 0x7F21BF0Cu;
    // 7F21BF0C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BF10:
    ctx->pc = 0x7F21BF10u;
    // 7F21BF10: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F21BF14:
    ctx->pc = 0x7F21BF14u;
    // 7F21BF14: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BF18:
    ctx->pc = 0x7F21BF18u;
    // 7F21BF18: fmuls   f29, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21BF18u)) return;
    ppc_fmuls(ctx, 29, 2, 1);

label_7F21BF1C:
    ctx->pc = 0x7F21BF1Cu;
    // 7F21BF1C: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BF20:
    ctx->pc = 0x7F21BF20u;
    // 7F21BF20: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F21BF24:
    ctx->pc = 0x7F21BF24u;
    // 7F21BF24: addi    r4, r23, 84
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(84);

label_7F21BF28:
    ctx->pc = 0x7F21BF28u;
    // 7F21BF28: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F21BF2C:
    ctx->pc = 0x7F21BF2Cu;
    // 7F21BF2C: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F21BF30:
    ctx->pc = 0x7F21BF30u;
    // 7F21BF30: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F21BF34:
    ctx->pc = 0x7F21BF34u;
    // 7F21BF34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BF38:
    ctx->pc = 0x7F21BF38u;
    // 7F21BF38: bl      0x7F22F204
    {
            ctx->lr = 0x7F21BF3Cu;
            ctx->pc = 0x7F22F204u;
            return;
    }

label_7F21BF3C:
    ctx->pc = 0x7F21BF3Cu;
    ctx->downcount -= 3;
    // 7F21BF3C: lha     r0, 60(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21BF40:
    ctx->pc = 0x7F21BF40u;
    // 7F21BF40: rlwinm. r0, r0, 0, 31, 31
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

label_7F21BF44:
    ctx->pc = 0x7F21BF44u;
    // 7F21BF44: bc    12, 2, 0x7F21BF6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21BF6C;
        }
    }

label_7F21BF48:
    ctx->pc = 0x7F21BF48u;
    ctx->downcount -= 4;
    // 7F21BF48: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F21BF48u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F21BF4C:
    ctx->pc = 0x7F21BF4Cu;
    // 7F21BF4C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F21BF50:
    ctx->pc = 0x7F21BF50u;
    // 7F21BF50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BF54:
    ctx->pc = 0x7F21BF54u;
    // 7F21BF54: bl      0x7F1147E8
    {
            ctx->lr = 0x7F21BF58u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F21BF58:
    ctx->pc = 0x7F21BF58u;
    ctx->downcount -= 4;
    // 7F21BF58: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F21BF58u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F21BF5C:
    ctx->pc = 0x7F21BF5Cu;
    // 7F21BF5C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F21BF60:
    ctx->pc = 0x7F21BF60u;
    // 7F21BF60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BF64:
    ctx->pc = 0x7F21BF64u;
    // 7F21BF64: bl      0x7F114738
    {
            ctx->lr = 0x7F21BF68u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F21BF68:
    ctx->pc = 0x7F21BF68u;
    ctx->downcount -= 1;
    // 7F21BF68: b       0x7F21BF8C
    {
            goto label_7F21BF8C;
    }

label_7F21BF6C:
    ctx->pc = 0x7F21BF6Cu;
    ctx->downcount -= 4;
    // 7F21BF6C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F21BF6Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F21BF70:
    ctx->pc = 0x7F21BF70u;
    // 7F21BF70: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F21BF74:
    ctx->pc = 0x7F21BF74u;
    // 7F21BF74: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BF78:
    ctx->pc = 0x7F21BF78u;
    // 7F21BF78: bl      0x7F114738
    {
            ctx->lr = 0x7F21BF7Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F21BF7C:
    ctx->pc = 0x7F21BF7Cu;
    ctx->downcount -= 4;
    // 7F21BF7C: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F21BF7Cu)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F21BF80:
    ctx->pc = 0x7F21BF80u;
    // 7F21BF80: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F21BF84:
    ctx->pc = 0x7F21BF84u;
    // 7F21BF84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21BF88:
    ctx->pc = 0x7F21BF88u;
    // 7F21BF88: bl      0x7F1147E8
    {
            ctx->lr = 0x7F21BF8Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F21BF8C:
    ctx->pc = 0x7F21BF8Cu;
    ctx->downcount -= 27;
    // 7F21BF8C: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21BF90:
    ctx->pc = 0x7F21BF90u;
    // 7F21BF90: lwz     r3, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BF94:
    ctx->pc = 0x7F21BF94u;
    // 7F21BF94: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21BF98:
    ctx->pc = 0x7F21BF98u;
    // 7F21BF98: lwz     r0, 72(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BF9C:
    ctx->pc = 0x7F21BF9Cu;
    // 7F21BF9C: addi    r4, r4, 644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(644);

label_7F21BFA0:
    ctx->pc = 0x7F21BFA0u;
    // 7F21BFA0: add   r4, r23, r4
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21BFA4:
    ctx->pc = 0x7F21BFA4u;
    // 7F21BFA4: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BFA8:
    ctx->pc = 0x7F21BFA8u;
    // 7F21BFA8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BFAC:
    ctx->pc = 0x7F21BFACu;
    // 7F21BFAC: lwz     r3, 76(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BFB0:
    ctx->pc = 0x7F21BFB0u;
    // 7F21BFB0: lwz     r0, 80(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BFB4:
    ctx->pc = 0x7F21BFB4u;
    // 7F21BFB4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BFB8:
    ctx->pc = 0x7F21BFB8u;
    // 7F21BFB8: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BFBC:
    ctx->pc = 0x7F21BFBCu;
    // 7F21BFBC: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21BFC0:
    ctx->pc = 0x7F21BFC0u;
    // 7F21BFC0: lwz     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BFC4:
    ctx->pc = 0x7F21BFC4u;
    // 7F21BFC4: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21BFC8:
    ctx->pc = 0x7F21BFC8u;
    // 7F21BFC8: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BFCC:
    ctx->pc = 0x7F21BFCCu;
    // 7F21BFCC: addi    r4, r4, 100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(100);

label_7F21BFD0:
    ctx->pc = 0x7F21BFD0u;
    // 7F21BFD0: add   r4, r23, r4
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21BFD4:
    ctx->pc = 0x7F21BFD4u;
    // 7F21BFD4: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BFD8:
    ctx->pc = 0x7F21BFD8u;
    // 7F21BFD8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BFDC:
    ctx->pc = 0x7F21BFDCu;
    // 7F21BFDC: lwz     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21BFE0:
    ctx->pc = 0x7F21BFE0u;
    // 7F21BFE0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BFE4:
    ctx->pc = 0x7F21BFE4u;
    // 7F21BFE4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21BFE8:
    ctx->pc = 0x7F21BFE8u;
    // 7F21BFE8: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21BFEC:
    ctx->pc = 0x7F21BFECu;
    // 7F21BFEC: lwz     r0, 900(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21BFF0:
    ctx->pc = 0x7F21BFF0u;
    // 7F21BFF0: cmpwi   r0, 4
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

label_7F21BFF4:
    ctx->pc = 0x7F21BFF4u;
    // 7F21BFF4: bc    4, 2, 0x7F21C08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21C08C;
        }
    }

label_7F21BFF8:
    ctx->pc = 0x7F21BFF8u;
    ctx->downcount -= 1;
    // 7F21BFF8: bl      0x7F21C478
    {
            ctx->lr = 0x7F21BFFCu;
            ctx->pc = 0x7F21C478u;
            return;
    }

label_7F21BFFC:
    ctx->pc = 0x7F21BFFCu;
    ctx->downcount -= 13;
    // 7F21BFFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21C000:
    ctx->pc = 0x7F21C000u;
    // 7F21C000: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C004:
    ctx->pc = 0x7F21C004u;
    // 7F21C004: lfs     f3, 16672(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21C004u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21C008:
    ctx->pc = 0x7F21C008u;
    // 7F21C008: lfs     f2, 16668(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C008u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21C00C:
    ctx->pc = 0x7F21C00Cu;
    // 7F21C00C: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21C010:
    ctx->pc = 0x7F21C010u;
    // 7F21C010: fmadds f2, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21C010u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F21C014:
    ctx->pc = 0x7F21C014u;
    // 7F21C014: lfs     f0, 64(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F21C014u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21C018:
    ctx->pc = 0x7F21C018u;
    // 7F21C018: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21C01C:
    ctx->pc = 0x7F21C01Cu;
    // 7F21C01C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21C01Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F21C020:
    ctx->pc = 0x7F21C020u;
    // 7F21C020: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21C024:
    ctx->pc = 0x7F21C024u;
    // 7F21C024: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21C024u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_7F21C028:
    ctx->pc = 0x7F21C028u;
    // 7F21C028: stfs     f0, 112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C028u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21C02C:
    ctx->pc = 0x7F21C02Cu;
    // 7F21C02C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F21C030u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F21C030:
    ctx->pc = 0x7F21C030u;
    ctx->downcount -= 12;
    // 7F21C030: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21C034:
    ctx->pc = 0x7F21C034u;
    // 7F21C034: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C038:
    ctx->pc = 0x7F21C038u;
    // 7F21C038: lfs     f2, 16652(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21C038u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21C03C:
    ctx->pc = 0x7F21C03Cu;
    // 7F21C03C: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21C040:
    ctx->pc = 0x7F21C040u;
    // 7F21C040: fmuls   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21C040u)) return;
    ppc_fmuls(ctx, 2, 2, 1);

label_7F21C044:
    ctx->pc = 0x7F21C044u;
    // 7F21C044: lfs     f0, 16676(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C044u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16676);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21C048:
    ctx->pc = 0x7F21C048u;
    // 7F21C048: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21C04C:
    ctx->pc = 0x7F21C04Cu;
    // 7F21C04C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21C04Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F21C050:
    ctx->pc = 0x7F21C050u;
    // 7F21C050: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21C054:
    ctx->pc = 0x7F21C054u;
    // 7F21C054: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F21C054u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_7F21C058:
    ctx->pc = 0x7F21C058u;
    // 7F21C058: stfs     f0, 364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C058u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21C05C:
    ctx->pc = 0x7F21C05Cu;
    // 7F21C05C: bl      0x7F008330
    {
            ctx->lr = 0x7F21C060u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F21C060:
    ctx->pc = 0x7F21C060u;
    ctx->downcount -= 11;
    // 7F21C060: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21C064:
    ctx->pc = 0x7F21C064u;
    // 7F21C064: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C068:
    ctx->pc = 0x7F21C068u;
    // 7F21C068: lfs     f2, 16652(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21C068u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21C06C:
    ctx->pc = 0x7F21C06Cu;
    // 7F21C06C: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21C070:
    ctx->pc = 0x7F21C070u;
    // 7F21C070: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21C070u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F21C074:
    ctx->pc = 0x7F21C074u;
    // 7F21C074: lfs     f0, 16676(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C074u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16676);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21C078:
    ctx->pc = 0x7F21C078u;
    // 7F21C078: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21C07C:
    ctx->pc = 0x7F21C07Cu;
    // 7F21C07C: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21C080:
    ctx->pc = 0x7F21C080u;
    // 7F21C080: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21C080u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F21C084:
    ctx->pc = 0x7F21C084u;
    // 7F21C084: stfs     f0, 368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C084u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21C088:
    ctx->pc = 0x7F21C088u;
    // 7F21C088: b       0x7F21C104
    {
            ctx->pc = 0x7F21C104u;
            return;
    }

label_7F21C08C:
    ctx->pc = 0x7F21C08Cu;
    ctx->downcount -= 2;
    // 7F21C08C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21C08Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F21C090:
    ctx->pc = 0x7F21C090u;
    // 7F21C090: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F21C094u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F21C094:
    ctx->pc = 0x7F21C094u;
    ctx->downcount -= 9;
    // 7F21C094: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C098:
    ctx->pc = 0x7F21C098u;
    // 7F21C098: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21C09C:
    ctx->pc = 0x7F21C09Cu;
    // 7F21C09C: lfs     f0, 16652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C09Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21C0A0:
    ctx->pc = 0x7F21C0A0u;
    // 7F21C0A0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21C0A4:
    ctx->pc = 0x7F21C0A4u;
    // 7F21C0A4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21C0A4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F21C0A8:
    ctx->pc = 0x7F21C0A8u;
    // 7F21C0A8: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21C0AC:
    ctx->pc = 0x7F21C0ACu;
    // 7F21C0AC: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F21C0ACu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F21C0B0:
    ctx->pc = 0x7F21C0B0u;
    // 7F21C0B0: stfs     f0, 364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C0B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21C0B4:
    ctx->pc = 0x7F21C0B4u;
    // 7F21C0B4: bl      0x7F008330
    {
            ctx->lr = 0x7F21C0B8u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F21C0B8:
    ctx->pc = 0x7F21C0B8u;
    ctx->downcount -= 8;
    // 7F21C0B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C0BC:
    ctx->pc = 0x7F21C0BCu;
    // 7F21C0BC: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21C0C0:
    ctx->pc = 0x7F21C0C0u;
    // 7F21C0C0: lfs     f0, 16652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C0C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21C0C4:
    ctx->pc = 0x7F21C0C4u;
    // 7F21C0C4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21C0C8:
    ctx->pc = 0x7F21C0C8u;
    // 7F21C0C8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21C0C8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F21C0CC:
    ctx->pc = 0x7F21C0CCu;
    // 7F21C0CC: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21C0D0:
    ctx->pc = 0x7F21C0D0u;
    // 7F21C0D0: stfs     f0, 368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C0D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21C0D4:
    ctx->pc = 0x7F21C0D4u;
    // 7F21C0D4: bl      0x7F21C478
    {
            ctx->lr = 0x7F21C0D8u;
            ctx->pc = 0x7F21C478u;
            return;
    }

label_7F21C0D8:
    ctx->pc = 0x7F21C0D8u;
    ctx->downcount -= 5;
    // 7F21C0D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21C0DC:
    ctx->pc = 0x7F21C0DCu;
    // 7F21C0DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21C0E0:
    ctx->pc = 0x7F21C0E0u;
    // 7F21C0E0: lfs     f3, 16668(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21C0E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F21C0E4:
    ctx->pc = 0x7F21C0E4u;
    // 7F21C0E4: lfs     f2, 16680(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21C0E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F21C0E8:
    ctx->pc = 0x7F21C0E8u;
    // 7F21C0E8: lha     r0, 62(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    ctx->pc = 0x7F21C0ECu;
    return;
return_dispatch_7F2180EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2184BCu: goto label_7F2184BC;
    case 0x7F218714u: goto label_7F218714;
    case 0x7F21871Cu: goto label_7F21871C;
    case 0x7F218780u: goto label_7F218780;
    case 0x7F218788u: goto label_7F218788;
    case 0x7F2187C8u: goto label_7F2187C8;
    case 0x7F2188D8u: goto label_7F2188D8;
    case 0x7F2188E0u: goto label_7F2188E0;
    case 0x7F218904u: goto label_7F218904;
    case 0x7F218B8Cu: goto label_7F218B8C;
    case 0x7F218BB8u: goto label_7F218BB8;
    case 0x7F218BC8u: goto label_7F218BC8;
    case 0x7F218C84u: goto label_7F218C84;
    case 0x7F218CB8u: goto label_7F218CB8;
    case 0x7F218E10u: goto label_7F218E10;
    case 0x7F218E2Cu: goto label_7F218E2C;
    case 0x7F218E4Cu: goto label_7F218E4C;
    case 0x7F218E6Cu: goto label_7F218E6C;
    case 0x7F218EE8u: goto label_7F218EE8;
    case 0x7F219180u: goto label_7F219180;
    case 0x7F2191C8u: goto label_7F2191C8;
    case 0x7F2191E4u: goto label_7F2191E4;
    case 0x7F219228u: goto label_7F219228;
    case 0x7F219238u: goto label_7F219238;
    case 0x7F219290u: goto label_7F219290;
    case 0x7F2192ACu: goto label_7F2192AC;
    case 0x7F2192F0u: goto label_7F2192F0;
    case 0x7F219300u: goto label_7F219300;
    case 0x7F219344u: goto label_7F219344;
    case 0x7F219830u: goto label_7F219830;
    case 0x7F219848u: goto label_7F219848;
    case 0x7F2198A4u: goto label_7F2198A4;
    case 0x7F219918u: goto label_7F219918;
    case 0x7F219928u: goto label_7F219928;
    case 0x7F219938u: goto label_7F219938;
    case 0x7F219974u: goto label_7F219974;
    case 0x7F219980u: goto label_7F219980;
    case 0x7F2199A4u: goto label_7F2199A4;
    case 0x7F2199ECu: goto label_7F2199EC;
    case 0x7F219A98u: goto label_7F219A98;
    case 0x7F219ABCu: goto label_7F219ABC;
    case 0x7F219AC8u: goto label_7F219AC8;
    case 0x7F219AE8u: goto label_7F219AE8;
    case 0x7F219B14u: goto label_7F219B14;
    case 0x7F219B20u: goto label_7F219B20;
    case 0x7F219B40u: goto label_7F219B40;
    case 0x7F219B4Cu: goto label_7F219B4C;
    case 0x7F219B84u: goto label_7F219B84;
    case 0x7F219C78u: goto label_7F219C78;
    case 0x7F219CB8u: goto label_7F219CB8;
    case 0x7F219CD4u: goto label_7F219CD4;
    case 0x7F219DE0u: goto label_7F219DE0;
    case 0x7F219DE8u: goto label_7F219DE8;
    case 0x7F219DECu: goto label_7F219DEC;
    case 0x7F219DFCu: goto label_7F219DFC;
    case 0x7F219E08u: goto label_7F219E08;
    case 0x7F219E2Cu: goto label_7F219E2C;
    case 0x7F219E38u: goto label_7F219E38;
    case 0x7F219E44u: goto label_7F219E44;
    case 0x7F219E58u: goto label_7F219E58;
    case 0x7F219E64u: goto label_7F219E64;
    case 0x7F219E80u: goto label_7F219E80;
    case 0x7F219EA4u: goto label_7F219EA4;
    case 0x7F219EB0u: goto label_7F219EB0;
    case 0x7F219ECCu: goto label_7F219ECC;
    case 0x7F219EE0u: goto label_7F219EE0;
    case 0x7F219EECu: goto label_7F219EEC;
    case 0x7F219F0Cu: goto label_7F219F0C;
    case 0x7F219F20u: goto label_7F219F20;
    case 0x7F219F2Cu: goto label_7F219F2C;
    case 0x7F219F4Cu: goto label_7F219F4C;
    case 0x7F219F60u: goto label_7F219F60;
    case 0x7F219F6Cu: goto label_7F219F6C;
    case 0x7F219F78u: goto label_7F219F78;
    case 0x7F219F8Cu: goto label_7F219F8C;
    case 0x7F219F98u: goto label_7F219F98;
    case 0x7F219FA4u: goto label_7F219FA4;
    case 0x7F219FB8u: goto label_7F219FB8;
    case 0x7F219FC4u: goto label_7F219FC4;
    case 0x7F219FC8u: goto label_7F219FC8;
    case 0x7F219FD4u: goto label_7F219FD4;
    case 0x7F21A03Cu: goto label_7F21A03C;
    case 0x7F21A060u: goto label_7F21A060;
    case 0x7F21A128u: goto label_7F21A128;
    case 0x7F21A17Cu: goto label_7F21A17C;
    case 0x7F21A1DCu: goto label_7F21A1DC;
    case 0x7F21A1E4u: goto label_7F21A1E4;
    case 0x7F21A1ECu: goto label_7F21A1EC;
    case 0x7F21A208u: goto label_7F21A208;
    case 0x7F21A268u: goto label_7F21A268;
    case 0x7F21A288u: goto label_7F21A288;
    case 0x7F21A2A8u: goto label_7F21A2A8;
    case 0x7F21A2B0u: goto label_7F21A2B0;
    case 0x7F21A2E8u: goto label_7F21A2E8;
    case 0x7F21A340u: goto label_7F21A340;
    case 0x7F21A350u: goto label_7F21A350;
    case 0x7F21A378u: goto label_7F21A378;
    case 0x7F21A38Cu: goto label_7F21A38C;
    case 0x7F21A398u: goto label_7F21A398;
    case 0x7F21A3F4u: goto label_7F21A3F4;
    case 0x7F21A410u: goto label_7F21A410;
    case 0x7F21A448u: goto label_7F21A448;
    case 0x7F21A458u: goto label_7F21A458;
    case 0x7F21A4CCu: goto label_7F21A4CC;
    case 0x7F21A4DCu: goto label_7F21A4DC;
    case 0x7F21A4F0u: goto label_7F21A4F0;
    case 0x7F21A504u: goto label_7F21A504;
    case 0x7F21A534u: goto label_7F21A534;
    case 0x7F21A53Cu: goto label_7F21A53C;
    case 0x7F21A544u: goto label_7F21A544;
    case 0x7F21A54Cu: goto label_7F21A54C;
    case 0x7F21A584u: goto label_7F21A584;
    case 0x7F21A588u: goto label_7F21A588;
    case 0x7F21A5A4u: goto label_7F21A5A4;
    case 0x7F21A5B8u: goto label_7F21A5B8;
    case 0x7F21A5E8u: goto label_7F21A5E8;
    case 0x7F21A638u: goto label_7F21A638;
    case 0x7F21A63Cu: goto label_7F21A63C;
    case 0x7F21A658u: goto label_7F21A658;
    case 0x7F21A66Cu: goto label_7F21A66C;
    case 0x7F21A69Cu: goto label_7F21A69C;
    case 0x7F21A764u: goto label_7F21A764;
    case 0x7F21A768u: goto label_7F21A768;
    case 0x7F21A8D8u: goto label_7F21A8D8;
    case 0x7F21A8DCu: goto label_7F21A8DC;
    case 0x7F21A91Cu: goto label_7F21A91C;
    case 0x7F21A94Cu: goto label_7F21A94C;
    case 0x7F21AA68u: goto label_7F21AA68;
    case 0x7F21AAD4u: goto label_7F21AAD4;
    case 0x7F21AAE0u: goto label_7F21AAE0;
    case 0x7F21AB18u: goto label_7F21AB18;
    case 0x7F21AB28u: goto label_7F21AB28;
    case 0x7F21AB70u: goto label_7F21AB70;
    case 0x7F21AB8Cu: goto label_7F21AB8C;
    case 0x7F21AC10u: goto label_7F21AC10;
    case 0x7F21AC20u: goto label_7F21AC20;
    case 0x7F21AC38u: goto label_7F21AC38;
    case 0x7F21AD50u: goto label_7F21AD50;
    case 0x7F21AE1Cu: goto label_7F21AE1C;
    case 0x7F21AEF0u: goto label_7F21AEF0;
    case 0x7F21AF00u: goto label_7F21AF00;
    case 0x7F21AF1Cu: goto label_7F21AF1C;
    case 0x7F21AF28u: goto label_7F21AF28;
    case 0x7F21AF58u: goto label_7F21AF58;
    case 0x7F21B05Cu: goto label_7F21B05C;
    case 0x7F21B068u: goto label_7F21B068;
    case 0x7F21B254u: goto label_7F21B254;
    case 0x7F21B2B8u: goto label_7F21B2B8;
    case 0x7F21B2DCu: goto label_7F21B2DC;
    case 0x7F21B308u: goto label_7F21B308;
    case 0x7F21B474u: goto label_7F21B474;
    case 0x7F21B4D4u: goto label_7F21B4D4;
    case 0x7F21B4F0u: goto label_7F21B4F0;
    case 0x7F21B528u: goto label_7F21B528;
    case 0x7F21B538u: goto label_7F21B538;
    case 0x7F21B550u: goto label_7F21B550;
    case 0x7F21B584u: goto label_7F21B584;
    case 0x7F21B594u: goto label_7F21B594;
    case 0x7F21B718u: goto label_7F21B718;
    case 0x7F21B760u: goto label_7F21B760;
    case 0x7F21B7C4u: goto label_7F21B7C4;
    case 0x7F21B7D8u: goto label_7F21B7D8;
    case 0x7F21B7F0u: goto label_7F21B7F0;
    case 0x7F21B810u: goto label_7F21B810;
    case 0x7F21B820u: goto label_7F21B820;
    case 0x7F21B828u: goto label_7F21B828;
    case 0x7F21B834u: goto label_7F21B834;
    case 0x7F21B85Cu: goto label_7F21B85C;
    case 0x7F21B89Cu: goto label_7F21B89C;
    case 0x7F21B8A8u: goto label_7F21B8A8;
    case 0x7F21B8B0u: goto label_7F21B8B0;
    case 0x7F21B8D4u: goto label_7F21B8D4;
    case 0x7F21B8DCu: goto label_7F21B8DC;
    case 0x7F21B8E8u: goto label_7F21B8E8;
    case 0x7F21B918u: goto label_7F21B918;
    case 0x7F21B95Cu: goto label_7F21B95C;
    case 0x7F21B968u: goto label_7F21B968;
    case 0x7F21B970u: goto label_7F21B970;
    case 0x7F21B978u: goto label_7F21B978;
    case 0x7F21B9A0u: goto label_7F21B9A0;
    case 0x7F21B9B0u: goto label_7F21B9B0;
    case 0x7F21BAA4u: goto label_7F21BAA4;
    case 0x7F21BAC8u: goto label_7F21BAC8;
    case 0x7F21BB14u: goto label_7F21BB14;
    case 0x7F21BC00u: goto label_7F21BC00;
    case 0x7F21BC1Cu: goto label_7F21BC1C;
    case 0x7F21BC4Cu: goto label_7F21BC4C;
    case 0x7F21BC5Cu: goto label_7F21BC5C;
    case 0x7F21BC70u: goto label_7F21BC70;
    case 0x7F21BCA4u: goto label_7F21BCA4;
    case 0x7F21BCC4u: goto label_7F21BCC4;
    case 0x7F21BCDCu: goto label_7F21BCDC;
    case 0x7F21BCF0u: goto label_7F21BCF0;
    case 0x7F21BCF8u: goto label_7F21BCF8;
    case 0x7F21BD08u: goto label_7F21BD08;
    case 0x7F21BD1Cu: goto label_7F21BD1C;
    case 0x7F21BD2Cu: goto label_7F21BD2C;
    case 0x7F21BD40u: goto label_7F21BD40;
    case 0x7F21BD48u: goto label_7F21BD48;
    case 0x7F21BE7Cu: goto label_7F21BE7C;
    case 0x7F21BE8Cu: goto label_7F21BE8C;
    case 0x7F21BECCu: goto label_7F21BECC;
    case 0x7F21BEE0u: goto label_7F21BEE0;
    case 0x7F21BF3Cu: goto label_7F21BF3C;
    case 0x7F21BF58u: goto label_7F21BF58;
    case 0x7F21BF68u: goto label_7F21BF68;
    case 0x7F21BF7Cu: goto label_7F21BF7C;
    case 0x7F21BF8Cu: goto label_7F21BF8C;
    case 0x7F21BFFCu: goto label_7F21BFFC;
    case 0x7F21C030u: goto label_7F21C030;
    case 0x7F21C060u: goto label_7F21C060;
    case 0x7F21C094u: goto label_7F21C094;
    case 0x7F21C0B8u: goto label_7F21C0B8;
    case 0x7F21C0D8u: goto label_7F21C0D8;
    default: return;
    }
}

