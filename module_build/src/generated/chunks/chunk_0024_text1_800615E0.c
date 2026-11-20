// DolRecomp output
#include "../generated.h"

static void loop_80061768(CPUState* ctx) {
label_80061768:
    ctx->downcount -= 6;
    ctx->pc = 0x80061768u;
    // 80061768: lwzx    r22, r24, r10
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[10];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8006176Cu;
    // 8006176C: lwzx    r21, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

    // 80061770: add   r21, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

    ctx->pc = 0x80061774u;
    // 80061774: stwx    r21, r24, r10
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

    // 80061778: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

    // 8006177C: bc    16, 0, 0x80061768
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061768u;
                return;
            }
            goto label_80061768;
        }
    }

    ctx->pc = 0x80061780u;
}

static void loop_800617B0(CPUState* ctx) {
label_800617B0:
    ctx->downcount -= 6;
    ctx->pc = 0x800617B0u;
    // 800617B0: lwzx    r22, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x800617B4u;
    // 800617B4: lwzx    r21, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

    // 800617B8: add   r21, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

    ctx->pc = 0x800617BCu;
    // 800617BC: stwx    r21, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

    // 800617C0: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

    // 800617C4: bc    16, 0, 0x800617B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800617B0u;
                return;
            }
            goto label_800617B0;
        }
    }

    ctx->pc = 0x800617C8u;
}

static void loop_80061808(CPUState* ctx) {
label_80061808:
    ctx->downcount -= 7;
    ctx->pc = 0x80061808u;
    // 80061808: lwzx    r21, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

    // 8006180C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80061810u;
    // 80061810: lwzx    r24, r20, r22
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[22];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

    // 80061814: add   r24, r21, r24
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

    ctx->pc = 0x80061818u;
    // 80061818: stwx    r24, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    // 8006181C: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

    // 80061820: bc    16, 0, 0x80061808
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061808u;
                return;
            }
            goto label_80061808;
        }
    }

    ctx->pc = 0x80061824u;
}

static void loop_80061838(CPUState* ctx) {
label_80061838:
    ctx->downcount -= 5;
    ctx->pc = 0x80061838u;
    // 80061838: lwzx    r24, r20, r22
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[22];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

    // 8006183C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80061840u;
    // 80061840: stwx    r24, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    // 80061844: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

    // 80061848: bc    16, 0, 0x80061838
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061838u;
                return;
            }
            goto label_80061838;
        }
    }

    ctx->pc = 0x8006184Cu;
}

static void loop_80061874(CPUState* ctx) {
label_80061874:
    ctx->downcount -= 6;
    ctx->pc = 0x80061874u;
    // 80061874: lwzx    r24, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80061878u;
    // 80061878: lwzx    r22, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

    // 8006187C: add   r22, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

    ctx->pc = 0x80061880u;
    // 80061880: stwx    r22, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

    // 80061884: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

    // 80061888: bc    16, 0, 0x80061874
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061874u;
                return;
            }
            goto label_80061874;
        }
    }

    ctx->pc = 0x8006188Cu;
}

static void loop_800618B4(CPUState* ctx) {
label_800618B4:
    ctx->downcount -= 4;
    ctx->pc = 0x800618B4u;
    // 800618B4: lwzx    r22, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x800618B8u;
    // 800618B8: stwx    r22, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

    // 800618BC: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

    // 800618C0: bc    16, 0, 0x800618B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800618B4u;
                return;
            }
            goto label_800618B4;
        }
    }

    ctx->pc = 0x800618C4u;
}

static void loop_8006221C(CPUState* ctx) {
label_8006221C:
    ctx->downcount -= 2;
    // 8006221C: rlwinm r3, r3, 31, 1, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

    // 80062220: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    // 80062224: cmplwi  r3, 0x0000
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

    // 80062228: bc    4, 2, 0x8006221C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8006221Cu;
                return;
            }
            goto label_8006221C;
        }
    }

    ctx->pc = 0x8006222Cu;
}

void func_800615E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800615E0u: goto label_800615E0;
    case 0x800615E4u: goto label_800615E4;
    case 0x800615E8u: goto label_800615E8;
    case 0x800615ECu: goto label_800615EC;
    case 0x800615F0u: goto label_800615F0;
    case 0x800615F4u: goto label_800615F4;
    case 0x800615F8u: goto label_800615F8;
    case 0x800615FCu: goto label_800615FC;
    case 0x80061600u: goto label_80061600;
    case 0x80061604u: goto label_80061604;
    case 0x80061608u: goto label_80061608;
    case 0x8006160Cu: goto label_8006160C;
    case 0x80061610u: goto label_80061610;
    case 0x80061614u: goto label_80061614;
    case 0x80061618u: goto label_80061618;
    case 0x8006161Cu: goto label_8006161C;
    case 0x80061620u: goto label_80061620;
    case 0x80061624u: goto label_80061624;
    case 0x80061628u: goto label_80061628;
    case 0x8006162Cu: goto label_8006162C;
    case 0x80061630u: goto label_80061630;
    case 0x80061634u: goto label_80061634;
    case 0x80061638u: goto label_80061638;
    case 0x8006163Cu: goto label_8006163C;
    case 0x80061640u: goto label_80061640;
    case 0x80061644u: goto label_80061644;
    case 0x80061648u: goto label_80061648;
    case 0x8006164Cu: goto label_8006164C;
    case 0x80061650u: goto label_80061650;
    case 0x80061654u: goto label_80061654;
    case 0x80061658u: goto label_80061658;
    case 0x8006165Cu: goto label_8006165C;
    case 0x80061660u: goto label_80061660;
    case 0x80061664u: goto label_80061664;
    case 0x80061668u: goto label_80061668;
    case 0x8006166Cu: goto label_8006166C;
    case 0x80061670u: goto label_80061670;
    case 0x80061674u: goto label_80061674;
    case 0x80061678u: goto label_80061678;
    case 0x8006167Cu: goto label_8006167C;
    case 0x80061680u: goto label_80061680;
    case 0x80061684u: goto label_80061684;
    case 0x80061688u: goto label_80061688;
    case 0x8006168Cu: goto label_8006168C;
    case 0x80061690u: goto label_80061690;
    case 0x80061694u: goto label_80061694;
    case 0x80061698u: goto label_80061698;
    case 0x8006169Cu: goto label_8006169C;
    case 0x800616A0u: goto label_800616A0;
    case 0x800616A4u: goto label_800616A4;
    case 0x800616A8u: goto label_800616A8;
    case 0x800616ACu: goto label_800616AC;
    case 0x800616B0u: goto label_800616B0;
    case 0x800616B4u: goto label_800616B4;
    case 0x800616B8u: goto label_800616B8;
    case 0x800616BCu: goto label_800616BC;
    case 0x800616C0u: goto label_800616C0;
    case 0x800616C4u: goto label_800616C4;
    case 0x800616C8u: goto label_800616C8;
    case 0x800616CCu: goto label_800616CC;
    case 0x800616D0u: goto label_800616D0;
    case 0x800616D4u: goto label_800616D4;
    case 0x800616D8u: goto label_800616D8;
    case 0x800616DCu: goto label_800616DC;
    case 0x800616E0u: goto label_800616E0;
    case 0x800616E4u: goto label_800616E4;
    case 0x800616E8u: goto label_800616E8;
    case 0x800616ECu: goto label_800616EC;
    case 0x800616F0u: goto label_800616F0;
    case 0x800616F4u: goto label_800616F4;
    case 0x800616F8u: goto label_800616F8;
    case 0x800616FCu: goto label_800616FC;
    case 0x80061700u: goto label_80061700;
    case 0x80061704u: goto label_80061704;
    case 0x80061708u: goto label_80061708;
    case 0x8006170Cu: goto label_8006170C;
    case 0x80061710u: goto label_80061710;
    case 0x80061714u: goto label_80061714;
    case 0x80061718u: goto label_80061718;
    case 0x8006171Cu: goto label_8006171C;
    case 0x80061720u: goto label_80061720;
    case 0x80061724u: goto label_80061724;
    case 0x80061728u: goto label_80061728;
    case 0x8006172Cu: goto label_8006172C;
    case 0x80061730u: goto label_80061730;
    case 0x80061734u: goto label_80061734;
    case 0x80061738u: goto label_80061738;
    case 0x8006173Cu: goto label_8006173C;
    case 0x80061740u: goto label_80061740;
    case 0x80061744u: goto label_80061744;
    case 0x80061748u: goto label_80061748;
    case 0x8006174Cu: goto label_8006174C;
    case 0x80061750u: goto label_80061750;
    case 0x80061754u: goto label_80061754;
    case 0x80061758u: goto label_80061758;
    case 0x8006175Cu: goto label_8006175C;
    case 0x80061760u: goto label_80061760;
    case 0x80061764u: goto label_80061764;
    case 0x80061768u: goto label_80061768;
    case 0x8006176Cu: goto label_8006176C;
    case 0x80061770u: goto label_80061770;
    case 0x80061774u: goto label_80061774;
    case 0x80061778u: goto label_80061778;
    case 0x8006177Cu: goto label_8006177C;
    case 0x80061780u: goto label_80061780;
    case 0x80061784u: goto label_80061784;
    case 0x80061788u: goto label_80061788;
    case 0x8006178Cu: goto label_8006178C;
    case 0x80061790u: goto label_80061790;
    case 0x80061794u: goto label_80061794;
    case 0x80061798u: goto label_80061798;
    case 0x8006179Cu: goto label_8006179C;
    case 0x800617A0u: goto label_800617A0;
    case 0x800617A4u: goto label_800617A4;
    case 0x800617A8u: goto label_800617A8;
    case 0x800617ACu: goto label_800617AC;
    case 0x800617B0u: goto label_800617B0;
    case 0x800617B4u: goto label_800617B4;
    case 0x800617B8u: goto label_800617B8;
    case 0x800617BCu: goto label_800617BC;
    case 0x800617C0u: goto label_800617C0;
    case 0x800617C4u: goto label_800617C4;
    case 0x800617C8u: goto label_800617C8;
    case 0x800617CCu: goto label_800617CC;
    case 0x800617D0u: goto label_800617D0;
    case 0x800617D4u: goto label_800617D4;
    case 0x800617D8u: goto label_800617D8;
    case 0x800617DCu: goto label_800617DC;
    case 0x800617E0u: goto label_800617E0;
    case 0x800617E4u: goto label_800617E4;
    case 0x800617E8u: goto label_800617E8;
    case 0x800617ECu: goto label_800617EC;
    case 0x800617F0u: goto label_800617F0;
    case 0x800617F4u: goto label_800617F4;
    case 0x800617F8u: goto label_800617F8;
    case 0x800617FCu: goto label_800617FC;
    case 0x80061800u: goto label_80061800;
    case 0x80061804u: goto label_80061804;
    case 0x80061808u: goto label_80061808;
    case 0x8006180Cu: goto label_8006180C;
    case 0x80061810u: goto label_80061810;
    case 0x80061814u: goto label_80061814;
    case 0x80061818u: goto label_80061818;
    case 0x8006181Cu: goto label_8006181C;
    case 0x80061820u: goto label_80061820;
    case 0x80061824u: goto label_80061824;
    case 0x80061828u: goto label_80061828;
    case 0x8006182Cu: goto label_8006182C;
    case 0x80061830u: goto label_80061830;
    case 0x80061834u: goto label_80061834;
    case 0x80061838u: goto label_80061838;
    case 0x8006183Cu: goto label_8006183C;
    case 0x80061840u: goto label_80061840;
    case 0x80061844u: goto label_80061844;
    case 0x80061848u: goto label_80061848;
    case 0x8006184Cu: goto label_8006184C;
    case 0x80061850u: goto label_80061850;
    case 0x80061854u: goto label_80061854;
    case 0x80061858u: goto label_80061858;
    case 0x8006185Cu: goto label_8006185C;
    case 0x80061860u: goto label_80061860;
    case 0x80061864u: goto label_80061864;
    case 0x80061868u: goto label_80061868;
    case 0x8006186Cu: goto label_8006186C;
    case 0x80061870u: goto label_80061870;
    case 0x80061874u: goto label_80061874;
    case 0x80061878u: goto label_80061878;
    case 0x8006187Cu: goto label_8006187C;
    case 0x80061880u: goto label_80061880;
    case 0x80061884u: goto label_80061884;
    case 0x80061888u: goto label_80061888;
    case 0x8006188Cu: goto label_8006188C;
    case 0x80061890u: goto label_80061890;
    case 0x80061894u: goto label_80061894;
    case 0x80061898u: goto label_80061898;
    case 0x8006189Cu: goto label_8006189C;
    case 0x800618A0u: goto label_800618A0;
    case 0x800618A4u: goto label_800618A4;
    case 0x800618A8u: goto label_800618A8;
    case 0x800618ACu: goto label_800618AC;
    case 0x800618B0u: goto label_800618B0;
    case 0x800618B4u: goto label_800618B4;
    case 0x800618B8u: goto label_800618B8;
    case 0x800618BCu: goto label_800618BC;
    case 0x800618C0u: goto label_800618C0;
    case 0x800618C4u: goto label_800618C4;
    case 0x800618C8u: goto label_800618C8;
    case 0x800618CCu: goto label_800618CC;
    case 0x800618D0u: goto label_800618D0;
    case 0x800618D4u: goto label_800618D4;
    case 0x800618D8u: goto label_800618D8;
    case 0x800618DCu: goto label_800618DC;
    case 0x800618E0u: goto label_800618E0;
    case 0x800618E4u: goto label_800618E4;
    case 0x800618E8u: goto label_800618E8;
    case 0x800618ECu: goto label_800618EC;
    case 0x800618F0u: goto label_800618F0;
    case 0x800618F4u: goto label_800618F4;
    case 0x800618F8u: goto label_800618F8;
    case 0x800618FCu: goto label_800618FC;
    case 0x80061900u: goto label_80061900;
    case 0x80061904u: goto label_80061904;
    case 0x80061908u: goto label_80061908;
    case 0x8006190Cu: goto label_8006190C;
    case 0x80061910u: goto label_80061910;
    case 0x80061914u: goto label_80061914;
    case 0x80061918u: goto label_80061918;
    case 0x8006191Cu: goto label_8006191C;
    case 0x80061920u: goto label_80061920;
    case 0x80061924u: goto label_80061924;
    case 0x80061928u: goto label_80061928;
    case 0x8006192Cu: goto label_8006192C;
    case 0x80061930u: goto label_80061930;
    case 0x80061934u: goto label_80061934;
    case 0x80061938u: goto label_80061938;
    case 0x8006193Cu: goto label_8006193C;
    case 0x80061940u: goto label_80061940;
    case 0x80061944u: goto label_80061944;
    case 0x80061948u: goto label_80061948;
    case 0x8006194Cu: goto label_8006194C;
    case 0x80061950u: goto label_80061950;
    case 0x80061954u: goto label_80061954;
    case 0x80061958u: goto label_80061958;
    case 0x8006195Cu: goto label_8006195C;
    case 0x80061960u: goto label_80061960;
    case 0x80061964u: goto label_80061964;
    case 0x80061968u: goto label_80061968;
    case 0x8006196Cu: goto label_8006196C;
    case 0x80061970u: goto label_80061970;
    case 0x80061974u: goto label_80061974;
    case 0x80061978u: goto label_80061978;
    case 0x8006197Cu: goto label_8006197C;
    case 0x80061980u: goto label_80061980;
    case 0x80061984u: goto label_80061984;
    case 0x80061988u: goto label_80061988;
    case 0x8006198Cu: goto label_8006198C;
    case 0x80061990u: goto label_80061990;
    case 0x80061994u: goto label_80061994;
    case 0x80061998u: goto label_80061998;
    case 0x8006199Cu: goto label_8006199C;
    case 0x800619A0u: goto label_800619A0;
    case 0x800619A4u: goto label_800619A4;
    case 0x800619A8u: goto label_800619A8;
    case 0x800619ACu: goto label_800619AC;
    case 0x800619B0u: goto label_800619B0;
    case 0x800619B4u: goto label_800619B4;
    case 0x800619B8u: goto label_800619B8;
    case 0x800619BCu: goto label_800619BC;
    case 0x800619C0u: goto label_800619C0;
    case 0x800619C4u: goto label_800619C4;
    case 0x800619C8u: goto label_800619C8;
    case 0x800619CCu: goto label_800619CC;
    case 0x800619D0u: goto label_800619D0;
    case 0x800619D4u: goto label_800619D4;
    case 0x800619D8u: goto label_800619D8;
    case 0x800619DCu: goto label_800619DC;
    case 0x800619E0u: goto label_800619E0;
    case 0x800619E4u: goto label_800619E4;
    case 0x800619E8u: goto label_800619E8;
    case 0x800619ECu: goto label_800619EC;
    case 0x800619F0u: goto label_800619F0;
    case 0x800619F4u: goto label_800619F4;
    case 0x800619F8u: goto label_800619F8;
    case 0x800619FCu: goto label_800619FC;
    case 0x80061A00u: goto label_80061A00;
    case 0x80061A04u: goto label_80061A04;
    case 0x80061A08u: goto label_80061A08;
    case 0x80061A0Cu: goto label_80061A0C;
    case 0x80061A10u: goto label_80061A10;
    case 0x80061A14u: goto label_80061A14;
    case 0x80061A18u: goto label_80061A18;
    case 0x80061A1Cu: goto label_80061A1C;
    case 0x80061A20u: goto label_80061A20;
    case 0x80061A24u: goto label_80061A24;
    case 0x80061A28u: goto label_80061A28;
    case 0x80061A2Cu: goto label_80061A2C;
    case 0x80061A30u: goto label_80061A30;
    case 0x80061A34u: goto label_80061A34;
    case 0x80061A38u: goto label_80061A38;
    case 0x80061A3Cu: goto label_80061A3C;
    case 0x80061A40u: goto label_80061A40;
    case 0x80061A44u: goto label_80061A44;
    case 0x80061A48u: goto label_80061A48;
    case 0x80061A4Cu: goto label_80061A4C;
    case 0x80061A50u: goto label_80061A50;
    case 0x80061A54u: goto label_80061A54;
    case 0x80061A58u: goto label_80061A58;
    case 0x80061A5Cu: goto label_80061A5C;
    case 0x80061A60u: goto label_80061A60;
    case 0x80061A64u: goto label_80061A64;
    case 0x80061A68u: goto label_80061A68;
    case 0x80061A6Cu: goto label_80061A6C;
    case 0x80061A70u: goto label_80061A70;
    case 0x80061A74u: goto label_80061A74;
    case 0x80061A78u: goto label_80061A78;
    case 0x80061A7Cu: goto label_80061A7C;
    case 0x80061A80u: goto label_80061A80;
    case 0x80061A84u: goto label_80061A84;
    case 0x80061A88u: goto label_80061A88;
    case 0x80061A8Cu: goto label_80061A8C;
    case 0x80061A90u: goto label_80061A90;
    case 0x80061A94u: goto label_80061A94;
    case 0x80061A98u: goto label_80061A98;
    case 0x80061A9Cu: goto label_80061A9C;
    case 0x80061AA0u: goto label_80061AA0;
    case 0x80061AA4u: goto label_80061AA4;
    case 0x80061AA8u: goto label_80061AA8;
    case 0x80061AACu: goto label_80061AAC;
    case 0x80061AB0u: goto label_80061AB0;
    case 0x80061AB4u: goto label_80061AB4;
    case 0x80061AB8u: goto label_80061AB8;
    case 0x80061ABCu: goto label_80061ABC;
    case 0x80061AC0u: goto label_80061AC0;
    case 0x80061AC4u: goto label_80061AC4;
    case 0x80061AC8u: goto label_80061AC8;
    case 0x80061ACCu: goto label_80061ACC;
    case 0x80061AD0u: goto label_80061AD0;
    case 0x80061AD4u: goto label_80061AD4;
    case 0x80061AD8u: goto label_80061AD8;
    case 0x80061ADCu: goto label_80061ADC;
    case 0x80061AE0u: goto label_80061AE0;
    case 0x80061AE4u: goto label_80061AE4;
    case 0x80061AE8u: goto label_80061AE8;
    case 0x80061AECu: goto label_80061AEC;
    case 0x80061AF0u: goto label_80061AF0;
    case 0x80061AF4u: goto label_80061AF4;
    case 0x80061AF8u: goto label_80061AF8;
    case 0x80061AFCu: goto label_80061AFC;
    case 0x80061B00u: goto label_80061B00;
    case 0x80061B04u: goto label_80061B04;
    case 0x80061B08u: goto label_80061B08;
    case 0x80061B0Cu: goto label_80061B0C;
    case 0x80061B10u: goto label_80061B10;
    case 0x80061B14u: goto label_80061B14;
    case 0x80061B18u: goto label_80061B18;
    case 0x80061B1Cu: goto label_80061B1C;
    case 0x80061B20u: goto label_80061B20;
    case 0x80061B24u: goto label_80061B24;
    case 0x80061B28u: goto label_80061B28;
    case 0x80061B2Cu: goto label_80061B2C;
    case 0x80061B30u: goto label_80061B30;
    case 0x80061B34u: goto label_80061B34;
    case 0x80061B38u: goto label_80061B38;
    case 0x80061B3Cu: goto label_80061B3C;
    case 0x80061B40u: goto label_80061B40;
    case 0x80061B44u: goto label_80061B44;
    case 0x80061B48u: goto label_80061B48;
    case 0x80061B4Cu: goto label_80061B4C;
    case 0x80061B50u: goto label_80061B50;
    case 0x80061B54u: goto label_80061B54;
    case 0x80061B58u: goto label_80061B58;
    case 0x80061B5Cu: goto label_80061B5C;
    case 0x80061B60u: goto label_80061B60;
    case 0x80061B64u: goto label_80061B64;
    case 0x80061B68u: goto label_80061B68;
    case 0x80061B6Cu: goto label_80061B6C;
    case 0x80061B70u: goto label_80061B70;
    case 0x80061B74u: goto label_80061B74;
    case 0x80061B78u: goto label_80061B78;
    case 0x80061B7Cu: goto label_80061B7C;
    case 0x80061B80u: goto label_80061B80;
    case 0x80061B84u: goto label_80061B84;
    case 0x80061B88u: goto label_80061B88;
    case 0x80061B8Cu: goto label_80061B8C;
    case 0x80061B90u: goto label_80061B90;
    case 0x80061B94u: goto label_80061B94;
    case 0x80061B98u: goto label_80061B98;
    case 0x80061B9Cu: goto label_80061B9C;
    case 0x80061BA0u: goto label_80061BA0;
    case 0x80061BA4u: goto label_80061BA4;
    case 0x80061BA8u: goto label_80061BA8;
    case 0x80061BACu: goto label_80061BAC;
    case 0x80061BB0u: goto label_80061BB0;
    case 0x80061BB4u: goto label_80061BB4;
    case 0x80061BB8u: goto label_80061BB8;
    case 0x80061BBCu: goto label_80061BBC;
    case 0x80061BC0u: goto label_80061BC0;
    case 0x80061BC4u: goto label_80061BC4;
    case 0x80061BC8u: goto label_80061BC8;
    case 0x80061BCCu: goto label_80061BCC;
    case 0x80061BD0u: goto label_80061BD0;
    case 0x80061BD4u: goto label_80061BD4;
    case 0x80061BD8u: goto label_80061BD8;
    case 0x80061BDCu: goto label_80061BDC;
    case 0x80061BE0u: goto label_80061BE0;
    case 0x80061BE4u: goto label_80061BE4;
    case 0x80061BE8u: goto label_80061BE8;
    case 0x80061BECu: goto label_80061BEC;
    case 0x80061BF0u: goto label_80061BF0;
    case 0x80061BF4u: goto label_80061BF4;
    case 0x80061BF8u: goto label_80061BF8;
    case 0x80061BFCu: goto label_80061BFC;
    case 0x80061C00u: goto label_80061C00;
    case 0x80061C04u: goto label_80061C04;
    case 0x80061C08u: goto label_80061C08;
    case 0x80061C0Cu: goto label_80061C0C;
    case 0x80061C10u: goto label_80061C10;
    case 0x80061C14u: goto label_80061C14;
    case 0x80061C18u: goto label_80061C18;
    case 0x80061C1Cu: goto label_80061C1C;
    case 0x80061C20u: goto label_80061C20;
    case 0x80061C24u: goto label_80061C24;
    case 0x80061C28u: goto label_80061C28;
    case 0x80061C2Cu: goto label_80061C2C;
    case 0x80061C30u: goto label_80061C30;
    case 0x80061C34u: goto label_80061C34;
    case 0x80061C38u: goto label_80061C38;
    case 0x80061C3Cu: goto label_80061C3C;
    case 0x80061C40u: goto label_80061C40;
    case 0x80061C44u: goto label_80061C44;
    case 0x80061C48u: goto label_80061C48;
    case 0x80061C4Cu: goto label_80061C4C;
    case 0x80061C50u: goto label_80061C50;
    case 0x80061C54u: goto label_80061C54;
    case 0x80061C58u: goto label_80061C58;
    case 0x80061C5Cu: goto label_80061C5C;
    case 0x80061C60u: goto label_80061C60;
    case 0x80061C64u: goto label_80061C64;
    case 0x80061C68u: goto label_80061C68;
    case 0x80061C6Cu: goto label_80061C6C;
    case 0x80061C70u: goto label_80061C70;
    case 0x80061C74u: goto label_80061C74;
    case 0x80061C78u: goto label_80061C78;
    case 0x80061C7Cu: goto label_80061C7C;
    case 0x80061C80u: goto label_80061C80;
    case 0x80061C84u: goto label_80061C84;
    case 0x80061C88u: goto label_80061C88;
    case 0x80061C8Cu: goto label_80061C8C;
    case 0x80061C90u: goto label_80061C90;
    case 0x80061C94u: goto label_80061C94;
    case 0x80061C98u: goto label_80061C98;
    case 0x80061C9Cu: goto label_80061C9C;
    case 0x80061CA0u: goto label_80061CA0;
    case 0x80061CA4u: goto label_80061CA4;
    case 0x80061CA8u: goto label_80061CA8;
    case 0x80061CACu: goto label_80061CAC;
    case 0x80061CB0u: goto label_80061CB0;
    case 0x80061CB4u: goto label_80061CB4;
    case 0x80061CB8u: goto label_80061CB8;
    case 0x80061CBCu: goto label_80061CBC;
    case 0x80061CC0u: goto label_80061CC0;
    case 0x80061CC4u: goto label_80061CC4;
    case 0x80061CC8u: goto label_80061CC8;
    case 0x80061CCCu: goto label_80061CCC;
    case 0x80061CD0u: goto label_80061CD0;
    case 0x80061CD4u: goto label_80061CD4;
    case 0x80061CD8u: goto label_80061CD8;
    case 0x80061CDCu: goto label_80061CDC;
    case 0x80061CE0u: goto label_80061CE0;
    case 0x80061CE4u: goto label_80061CE4;
    case 0x80061CE8u: goto label_80061CE8;
    case 0x80061CECu: goto label_80061CEC;
    case 0x80061CF0u: goto label_80061CF0;
    case 0x80061CF4u: goto label_80061CF4;
    case 0x80061CF8u: goto label_80061CF8;
    case 0x80061CFCu: goto label_80061CFC;
    case 0x80061D00u: goto label_80061D00;
    case 0x80061D04u: goto label_80061D04;
    case 0x80061D08u: goto label_80061D08;
    case 0x80061D0Cu: goto label_80061D0C;
    case 0x80061D10u: goto label_80061D10;
    case 0x80061D14u: goto label_80061D14;
    case 0x80061D18u: goto label_80061D18;
    case 0x80061D1Cu: goto label_80061D1C;
    case 0x80061D20u: goto label_80061D20;
    case 0x80061D24u: goto label_80061D24;
    case 0x80061D28u: goto label_80061D28;
    case 0x80061D2Cu: goto label_80061D2C;
    case 0x80061D30u: goto label_80061D30;
    case 0x80061D34u: goto label_80061D34;
    case 0x80061D38u: goto label_80061D38;
    case 0x80061D3Cu: goto label_80061D3C;
    case 0x80061D40u: goto label_80061D40;
    case 0x80061D44u: goto label_80061D44;
    case 0x80061D48u: goto label_80061D48;
    case 0x80061D4Cu: goto label_80061D4C;
    case 0x80061D50u: goto label_80061D50;
    case 0x80061D54u: goto label_80061D54;
    case 0x80061D58u: goto label_80061D58;
    case 0x80061D5Cu: goto label_80061D5C;
    case 0x80061D60u: goto label_80061D60;
    case 0x80061D64u: goto label_80061D64;
    case 0x80061D68u: goto label_80061D68;
    case 0x80061D6Cu: goto label_80061D6C;
    case 0x80061D70u: goto label_80061D70;
    case 0x80061D74u: goto label_80061D74;
    case 0x80061D78u: goto label_80061D78;
    case 0x80061D7Cu: goto label_80061D7C;
    case 0x80061D80u: goto label_80061D80;
    case 0x80061D84u: goto label_80061D84;
    case 0x80061D88u: goto label_80061D88;
    case 0x80061D8Cu: goto label_80061D8C;
    case 0x80061D90u: goto label_80061D90;
    case 0x80061D94u: goto label_80061D94;
    case 0x80061D98u: goto label_80061D98;
    case 0x80061D9Cu: goto label_80061D9C;
    case 0x80061DA0u: goto label_80061DA0;
    case 0x80061DA4u: goto label_80061DA4;
    case 0x80061DA8u: goto label_80061DA8;
    case 0x80061DACu: goto label_80061DAC;
    case 0x80061DB0u: goto label_80061DB0;
    case 0x80061DB4u: goto label_80061DB4;
    case 0x80061DB8u: goto label_80061DB8;
    case 0x80061DBCu: goto label_80061DBC;
    case 0x80061DC0u: goto label_80061DC0;
    case 0x80061DC4u: goto label_80061DC4;
    case 0x80061DC8u: goto label_80061DC8;
    case 0x80061DCCu: goto label_80061DCC;
    case 0x80061DD0u: goto label_80061DD0;
    case 0x80061DD4u: goto label_80061DD4;
    case 0x80061DD8u: goto label_80061DD8;
    case 0x80061DDCu: goto label_80061DDC;
    case 0x80061DE0u: goto label_80061DE0;
    case 0x80061DE4u: goto label_80061DE4;
    case 0x80061DE8u: goto label_80061DE8;
    case 0x80061DECu: goto label_80061DEC;
    case 0x80061DF0u: goto label_80061DF0;
    case 0x80061DF4u: goto label_80061DF4;
    case 0x80061DF8u: goto label_80061DF8;
    case 0x80061DFCu: goto label_80061DFC;
    case 0x80061E00u: goto label_80061E00;
    case 0x80061E04u: goto label_80061E04;
    case 0x80061E08u: goto label_80061E08;
    case 0x80061E0Cu: goto label_80061E0C;
    case 0x80061E10u: goto label_80061E10;
    case 0x80061E14u: goto label_80061E14;
    case 0x80061E18u: goto label_80061E18;
    case 0x80061E1Cu: goto label_80061E1C;
    case 0x80061E20u: goto label_80061E20;
    case 0x80061E24u: goto label_80061E24;
    case 0x80061E28u: goto label_80061E28;
    case 0x80061E2Cu: goto label_80061E2C;
    case 0x80061E30u: goto label_80061E30;
    case 0x80061E34u: goto label_80061E34;
    case 0x80061E38u: goto label_80061E38;
    case 0x80061E3Cu: goto label_80061E3C;
    case 0x80061E40u: goto label_80061E40;
    case 0x80061E44u: goto label_80061E44;
    case 0x80061E48u: goto label_80061E48;
    case 0x80061E4Cu: goto label_80061E4C;
    case 0x80061E50u: goto label_80061E50;
    case 0x80061E54u: goto label_80061E54;
    case 0x80061E58u: goto label_80061E58;
    case 0x80061E5Cu: goto label_80061E5C;
    case 0x80061E60u: goto label_80061E60;
    case 0x80061E64u: goto label_80061E64;
    case 0x80061E68u: goto label_80061E68;
    case 0x80061E6Cu: goto label_80061E6C;
    case 0x80061E70u: goto label_80061E70;
    case 0x80061E74u: goto label_80061E74;
    case 0x80061E78u: goto label_80061E78;
    case 0x80061E7Cu: goto label_80061E7C;
    case 0x80061E80u: goto label_80061E80;
    case 0x80061E84u: goto label_80061E84;
    case 0x80061E88u: goto label_80061E88;
    case 0x80061E8Cu: goto label_80061E8C;
    case 0x80061E90u: goto label_80061E90;
    case 0x80061E94u: goto label_80061E94;
    case 0x80061E98u: goto label_80061E98;
    case 0x80061E9Cu: goto label_80061E9C;
    case 0x80061EA0u: goto label_80061EA0;
    case 0x80061EA4u: goto label_80061EA4;
    case 0x80061EA8u: goto label_80061EA8;
    case 0x80061EACu: goto label_80061EAC;
    case 0x80061EB0u: goto label_80061EB0;
    case 0x80061EB4u: goto label_80061EB4;
    case 0x80061EB8u: goto label_80061EB8;
    case 0x80061EBCu: goto label_80061EBC;
    case 0x80061EC0u: goto label_80061EC0;
    case 0x80061EC4u: goto label_80061EC4;
    case 0x80061EC8u: goto label_80061EC8;
    case 0x80061ECCu: goto label_80061ECC;
    case 0x80061ED0u: goto label_80061ED0;
    case 0x80061ED4u: goto label_80061ED4;
    case 0x80061ED8u: goto label_80061ED8;
    case 0x80061EDCu: goto label_80061EDC;
    case 0x80061EE0u: goto label_80061EE0;
    case 0x80061EE4u: goto label_80061EE4;
    case 0x80061EE8u: goto label_80061EE8;
    case 0x80061EECu: goto label_80061EEC;
    case 0x80061EF0u: goto label_80061EF0;
    case 0x80061EF4u: goto label_80061EF4;
    case 0x80061EF8u: goto label_80061EF8;
    case 0x80061EFCu: goto label_80061EFC;
    case 0x80061F00u: goto label_80061F00;
    case 0x80061F04u: goto label_80061F04;
    case 0x80061F08u: goto label_80061F08;
    case 0x80061F0Cu: goto label_80061F0C;
    case 0x80061F10u: goto label_80061F10;
    case 0x80061F14u: goto label_80061F14;
    case 0x80061F18u: goto label_80061F18;
    case 0x80061F1Cu: goto label_80061F1C;
    case 0x80061F20u: goto label_80061F20;
    case 0x80061F24u: goto label_80061F24;
    case 0x80061F28u: goto label_80061F28;
    case 0x80061F2Cu: goto label_80061F2C;
    case 0x80061F30u: goto label_80061F30;
    case 0x80061F34u: goto label_80061F34;
    case 0x80061F38u: goto label_80061F38;
    case 0x80061F3Cu: goto label_80061F3C;
    case 0x80061F40u: goto label_80061F40;
    case 0x80061F44u: goto label_80061F44;
    case 0x80061F48u: goto label_80061F48;
    case 0x80061F4Cu: goto label_80061F4C;
    case 0x80061F50u: goto label_80061F50;
    case 0x80061F54u: goto label_80061F54;
    case 0x80061F58u: goto label_80061F58;
    case 0x80061F5Cu: goto label_80061F5C;
    case 0x80061F60u: goto label_80061F60;
    case 0x80061F64u: goto label_80061F64;
    case 0x80061F68u: goto label_80061F68;
    case 0x80061F6Cu: goto label_80061F6C;
    case 0x80061F70u: goto label_80061F70;
    case 0x80061F74u: goto label_80061F74;
    case 0x80061F78u: goto label_80061F78;
    case 0x80061F7Cu: goto label_80061F7C;
    case 0x80061F80u: goto label_80061F80;
    case 0x80061F84u: goto label_80061F84;
    case 0x80061F88u: goto label_80061F88;
    case 0x80061F8Cu: goto label_80061F8C;
    case 0x80061F90u: goto label_80061F90;
    case 0x80061F94u: goto label_80061F94;
    case 0x80061F98u: goto label_80061F98;
    case 0x80061F9Cu: goto label_80061F9C;
    case 0x80061FA0u: goto label_80061FA0;
    case 0x80061FA4u: goto label_80061FA4;
    case 0x80061FA8u: goto label_80061FA8;
    case 0x80061FACu: goto label_80061FAC;
    case 0x80061FB0u: goto label_80061FB0;
    case 0x80061FB4u: goto label_80061FB4;
    case 0x80061FB8u: goto label_80061FB8;
    case 0x80061FBCu: goto label_80061FBC;
    case 0x80061FC0u: goto label_80061FC0;
    case 0x80061FC4u: goto label_80061FC4;
    case 0x80061FC8u: goto label_80061FC8;
    case 0x80061FCCu: goto label_80061FCC;
    case 0x80061FD0u: goto label_80061FD0;
    case 0x80061FD4u: goto label_80061FD4;
    case 0x80061FD8u: goto label_80061FD8;
    case 0x80061FDCu: goto label_80061FDC;
    case 0x80061FE0u: goto label_80061FE0;
    case 0x80061FE4u: goto label_80061FE4;
    case 0x80061FE8u: goto label_80061FE8;
    case 0x80061FECu: goto label_80061FEC;
    case 0x80061FF0u: goto label_80061FF0;
    case 0x80061FF4u: goto label_80061FF4;
    case 0x80061FF8u: goto label_80061FF8;
    case 0x80061FFCu: goto label_80061FFC;
    case 0x80062000u: goto label_80062000;
    case 0x80062004u: goto label_80062004;
    case 0x80062008u: goto label_80062008;
    case 0x8006200Cu: goto label_8006200C;
    case 0x80062010u: goto label_80062010;
    case 0x80062014u: goto label_80062014;
    case 0x80062018u: goto label_80062018;
    case 0x8006201Cu: goto label_8006201C;
    case 0x80062020u: goto label_80062020;
    case 0x80062024u: goto label_80062024;
    case 0x80062028u: goto label_80062028;
    case 0x8006202Cu: goto label_8006202C;
    case 0x80062030u: goto label_80062030;
    case 0x80062034u: goto label_80062034;
    case 0x80062038u: goto label_80062038;
    case 0x8006203Cu: goto label_8006203C;
    case 0x80062040u: goto label_80062040;
    case 0x80062044u: goto label_80062044;
    case 0x80062048u: goto label_80062048;
    case 0x8006204Cu: goto label_8006204C;
    case 0x80062050u: goto label_80062050;
    case 0x80062054u: goto label_80062054;
    case 0x80062058u: goto label_80062058;
    case 0x8006205Cu: goto label_8006205C;
    case 0x80062060u: goto label_80062060;
    case 0x80062064u: goto label_80062064;
    case 0x80062068u: goto label_80062068;
    case 0x8006206Cu: goto label_8006206C;
    case 0x80062070u: goto label_80062070;
    case 0x80062074u: goto label_80062074;
    case 0x80062078u: goto label_80062078;
    case 0x8006207Cu: goto label_8006207C;
    case 0x80062080u: goto label_80062080;
    case 0x80062084u: goto label_80062084;
    case 0x80062088u: goto label_80062088;
    case 0x8006208Cu: goto label_8006208C;
    case 0x80062090u: goto label_80062090;
    case 0x80062094u: goto label_80062094;
    case 0x80062098u: goto label_80062098;
    case 0x8006209Cu: goto label_8006209C;
    case 0x800620A0u: goto label_800620A0;
    case 0x800620A4u: goto label_800620A4;
    case 0x800620A8u: goto label_800620A8;
    case 0x800620ACu: goto label_800620AC;
    case 0x800620B0u: goto label_800620B0;
    case 0x800620B4u: goto label_800620B4;
    case 0x800620B8u: goto label_800620B8;
    case 0x800620BCu: goto label_800620BC;
    case 0x800620C0u: goto label_800620C0;
    case 0x800620C4u: goto label_800620C4;
    case 0x800620C8u: goto label_800620C8;
    case 0x800620CCu: goto label_800620CC;
    case 0x800620D0u: goto label_800620D0;
    case 0x800620D4u: goto label_800620D4;
    case 0x800620D8u: goto label_800620D8;
    case 0x800620DCu: goto label_800620DC;
    case 0x800620E0u: goto label_800620E0;
    case 0x800620E4u: goto label_800620E4;
    case 0x800620E8u: goto label_800620E8;
    case 0x800620ECu: goto label_800620EC;
    case 0x800620F0u: goto label_800620F0;
    case 0x800620F4u: goto label_800620F4;
    case 0x800620F8u: goto label_800620F8;
    case 0x800620FCu: goto label_800620FC;
    case 0x80062100u: goto label_80062100;
    case 0x80062104u: goto label_80062104;
    case 0x80062108u: goto label_80062108;
    case 0x8006210Cu: goto label_8006210C;
    case 0x80062110u: goto label_80062110;
    case 0x80062114u: goto label_80062114;
    case 0x80062118u: goto label_80062118;
    case 0x8006211Cu: goto label_8006211C;
    case 0x80062120u: goto label_80062120;
    case 0x80062124u: goto label_80062124;
    case 0x80062128u: goto label_80062128;
    case 0x8006212Cu: goto label_8006212C;
    case 0x80062130u: goto label_80062130;
    case 0x80062134u: goto label_80062134;
    case 0x80062138u: goto label_80062138;
    case 0x8006213Cu: goto label_8006213C;
    case 0x80062140u: goto label_80062140;
    case 0x80062144u: goto label_80062144;
    case 0x80062148u: goto label_80062148;
    case 0x8006214Cu: goto label_8006214C;
    case 0x80062150u: goto label_80062150;
    case 0x80062154u: goto label_80062154;
    case 0x80062158u: goto label_80062158;
    case 0x8006215Cu: goto label_8006215C;
    case 0x80062160u: goto label_80062160;
    case 0x80062164u: goto label_80062164;
    case 0x80062168u: goto label_80062168;
    case 0x8006216Cu: goto label_8006216C;
    case 0x80062170u: goto label_80062170;
    case 0x80062174u: goto label_80062174;
    case 0x80062178u: goto label_80062178;
    case 0x8006217Cu: goto label_8006217C;
    case 0x80062180u: goto label_80062180;
    case 0x80062184u: goto label_80062184;
    case 0x80062188u: goto label_80062188;
    case 0x8006218Cu: goto label_8006218C;
    case 0x80062190u: goto label_80062190;
    case 0x80062194u: goto label_80062194;
    case 0x80062198u: goto label_80062198;
    case 0x8006219Cu: goto label_8006219C;
    case 0x800621A0u: goto label_800621A0;
    case 0x800621A4u: goto label_800621A4;
    case 0x800621A8u: goto label_800621A8;
    case 0x800621ACu: goto label_800621AC;
    case 0x800621B0u: goto label_800621B0;
    case 0x800621B4u: goto label_800621B4;
    case 0x800621B8u: goto label_800621B8;
    case 0x800621BCu: goto label_800621BC;
    case 0x800621C0u: goto label_800621C0;
    case 0x800621C4u: goto label_800621C4;
    case 0x800621C8u: goto label_800621C8;
    case 0x800621CCu: goto label_800621CC;
    case 0x800621D0u: goto label_800621D0;
    case 0x800621D4u: goto label_800621D4;
    case 0x800621D8u: goto label_800621D8;
    case 0x800621DCu: goto label_800621DC;
    case 0x800621E0u: goto label_800621E0;
    case 0x800621E4u: goto label_800621E4;
    case 0x800621E8u: goto label_800621E8;
    case 0x800621ECu: goto label_800621EC;
    case 0x800621F0u: goto label_800621F0;
    case 0x800621F4u: goto label_800621F4;
    case 0x800621F8u: goto label_800621F8;
    case 0x800621FCu: goto label_800621FC;
    case 0x80062200u: goto label_80062200;
    case 0x80062204u: goto label_80062204;
    case 0x80062208u: goto label_80062208;
    case 0x8006220Cu: goto label_8006220C;
    case 0x80062210u: goto label_80062210;
    case 0x80062214u: goto label_80062214;
    case 0x80062218u: goto label_80062218;
    case 0x8006221Cu: goto label_8006221C;
    case 0x80062220u: goto label_80062220;
    case 0x80062224u: goto label_80062224;
    case 0x80062228u: goto label_80062228;
    case 0x8006222Cu: goto label_8006222C;
    case 0x80062230u: goto label_80062230;
    case 0x80062234u: goto label_80062234;
    case 0x80062238u: goto label_80062238;
    case 0x8006223Cu: goto label_8006223C;
    default: return;
    }
label_800615E0:
    ctx->pc = 0x800615E0u;
    ctx->downcount -= 2;
    // 800615E0: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_800615E4:
    ctx->pc = 0x800615E4u;
    // 800615E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_800615E8:
    ctx->pc = 0x800615E8u;
    ctx->downcount -= 2;
    // 800615E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800615EC:
    ctx->pc = 0x800615ECu;
    // 800615EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_800615F0:
    ctx->pc = 0x800615F0u;
    ctx->downcount -= 19;
    // 800615F0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800615F4:
    ctx->pc = 0x800615F4u;
    // 800615F4: stmw     r19, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800615F8:
    ctx->pc = 0x800615F8u;
    // 800615F8: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800615FC:
    ctx->pc = 0x800615FCu;
    // 800615FC: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061600:
    ctx->pc = 0x80061600u;
    // 80061600: lwz     r11, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80061604:
    ctx->pc = 0x80061604u;
    // 80061604: cmpw    r0, r5
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

label_80061608:
    ctx->pc = 0x80061608u;
    // 80061608: lwz     r31, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8006160C:
    ctx->pc = 0x8006160Cu;
    // 8006160C: lwz     r12, 28(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80061610:
    ctx->pc = 0x80061610u;
    // 80061610: bc    4, 1, 0x80061624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061624;
        }
    }

label_80061614:
    ctx->pc = 0x80061614u;
    ctx->downcount -= 2;
    // 80061614: cmpwi   r5, -1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80061618:
    ctx->pc = 0x80061618u;
    // 80061618: bc    12, 2, 0x80061624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061624;
        }
    }

label_8006161C:
    ctx->pc = 0x8006161Cu;
    ctx->downcount -= 2;
    // 8006161C: li      r3, -131
    ctx->gpr[3] = (u32)(s32)(-131);

label_80061620:
    ctx->pc = 0x80061620u;
    // 80061620: b       0x80061B44
    {
            goto label_80061B44;
    }

label_80061624:
    ctx->pc = 0x80061624u;
    ctx->downcount -= 12;
    // 80061624: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061628:
    ctx->pc = 0x80061628u;
    // 80061628: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8006162C:
    ctx->pc = 0x8006162Cu;
    // 8006162C: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061630:
    ctx->pc = 0x80061630u;
    // 80061630: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061634:
    ctx->pc = 0x80061634u;
    // 80061634: stw     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061638:
    ctx->pc = 0x80061638u;
    // 80061638: stw     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8006163C:
    ctx->pc = 0x8006163Cu;
    // 8006163C: lwz     r8, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80061640:
    ctx->pc = 0x80061640u;
    // 80061640: lwz     r6, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80061644:
    ctx->pc = 0x80061644u;
    // 80061644: xor   r0, r8, r5
    {
        ctx->gpr[0] = ctx->gpr[8] ^ ctx->gpr[5];
    }

label_80061648:
    ctx->pc = 0x80061648u;
    // 80061648: xor   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] ^ ctx->gpr[5];
    }

label_8006164C:
    ctx->pc = 0x8006164Cu;
    // 8006164C: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061650:
    ctx->pc = 0x80061650u;
    // 80061650: bc    12, 2, 0x8006167C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8006167C;
        }
    }

label_80061654:
    ctx->pc = 0x80061654u;
    ctx->downcount -= 10;
    // 80061654: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80061658:
    ctx->pc = 0x80061658u;
    // 80061658: lwz     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8006165C:
    ctx->pc = 0x8006165Cu;
    // 8006165C: addc   r7, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061660:
    ctx->pc = 0x80061660u;
    // 80061660: lwz     r5, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061664:
    ctx->pc = 0x80061664u;
    // 80061664: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80061668:
    ctx->pc = 0x80061668u;
    // 80061668: adde   r6, r8, r6
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8006166C:
    ctx->pc = 0x8006166Cu;
    // 8006166C: xor   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] ^ ctx->gpr[5];
    }

label_80061670:
    ctx->pc = 0x80061670u;
    // 80061670: xor   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_80061674:
    ctx->pc = 0x80061674u;
    // 80061674: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061678:
    ctx->pc = 0x80061678u;
    // 80061678: bc    12, 2, 0x80061690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061690;
        }
    }

label_8006167C:
    ctx->pc = 0x8006167Cu;
    ctx->downcount -= 5;
    // 8006167C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80061680:
    ctx->pc = 0x80061680u;
    // 80061680: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061684:
    ctx->pc = 0x80061684u;
    // 80061684: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061688:
    ctx->pc = 0x80061688u;
    // 80061688: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8006168C:
    ctx->pc = 0x8006168Cu;
    // 8006168C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061690:
    ctx->pc = 0x80061690u;
    ctx->downcount -= 7;
    // 80061690: lwz     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061694:
    ctx->pc = 0x80061694u;
    // 80061694: lwz     r5, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061698:
    ctx->pc = 0x80061698u;
    // 80061698: stw     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8006169C:
    ctx->pc = 0x8006169Cu;
    // 8006169C: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800616A0:
    ctx->pc = 0x800616A0u;
    // 800616A0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800616A4:
    ctx->pc = 0x800616A4u;
    // 800616A4: cmplwi  r0, 0x0000
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

label_800616A8:
    ctx->pc = 0x800616A8u;
    // 800616A8: bc    12, 2, 0x80061944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061944;
        }
    }

label_800616AC:
    ctx->pc = 0x800616ACu;
    ctx->downcount -= 14;
    // 800616AC: lwz     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800616B0:
    ctx->pc = 0x800616B0u;
    // 800616B0: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800616B4:
    ctx->pc = 0x800616B4u;
    // 800616B4: rlwinm r6, r5, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_800616B8:
    ctx->pc = 0x800616B8u;
    // 800616B8: lwz     r5, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800616BC:
    ctx->pc = 0x800616BCu;
    // 800616BC: lwzx    r6, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800616C0:
    ctx->pc = 0x800616C0u;
    // 800616C0: cmpwi   r0, 0
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

label_800616C4:
    ctx->pc = 0x800616C4u;
    // 800616C4: lwz     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800616C8:
    ctx->pc = 0x800616C8u;
    // 800616C8: srawi r6, r6, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800616CC:
    ctx->pc = 0x800616CCu;
    // 800616CC: addze  r29, r6
    {
        u32 a = ctx->gpr[6];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[29] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800616D0:
    ctx->pc = 0x800616D0u;
    // 800616D0: srawi r5, r5, 1
    {
        u32 sh = 1u;
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

label_800616D4:
    ctx->pc = 0x800616D4u;
    // 800616D4: addze  r28, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[28] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800616D8:
    ctx->pc = 0x800616D8u;
    // 800616D8: srawi r0, r0, 1
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

label_800616DC:
    ctx->pc = 0x800616DCu;
    // 800616DC: addze  r27, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[27] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800616E0:
    ctx->pc = 0x800616E0u;
    // 800616E0: bc    12, 2, 0x800616F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800616F0;
        }
    }

label_800616E4:
    ctx->pc = 0x800616E4u;
    ctx->downcount -= 3;
    // 800616E4: or   r26, r27, r27
    {
        ctx->gpr[26] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800616E8:
    ctx->pc = 0x800616E8u;
    // 800616E8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800616EC:
    ctx->pc = 0x800616ECu;
    // 800616EC: b       0x800616F8
    {
            goto label_800616F8;
    }

label_800616F0:
    ctx->pc = 0x800616F0u;
    ctx->downcount -= 2;
    // 800616F0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800616F4:
    ctx->pc = 0x800616F4u;
    // 800616F4: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800616F8:
    ctx->pc = 0x800616F8u;
    ctx->downcount -= 13;
    // 800616F8: srawi r5, r27, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[27];
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

label_800616FC:
    ctx->pc = 0x800616FCu;
    // 800616FC: rlwinm r0, r25, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_80061700:
    ctx->pc = 0x80061700u;
    // 80061700: addze  r10, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[10] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061704:
    ctx->pc = 0x80061704u;
    // 80061704: rlwinm r8, r26, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_80061708:
    ctx->pc = 0x80061708u;
    // 80061708: srawi r5, r28, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[28];
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

label_8006170C:
    ctx->pc = 0x8006170Cu;
    // 8006170C: rlwinm r9, r29, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80061710:
    ctx->pc = 0x80061710u;
    // 80061710: addze  r7, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061714:
    ctx->pc = 0x80061714u;
    // 80061714: rlwinm r5, r10, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_80061718:
    ctx->pc = 0x80061718u;
    // 80061718: rlwinm r6, r7, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_8006171C:
    ctx->pc = 0x8006171Cu;
    // 8006171C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80061720:
    ctx->pc = 0x80061720u;
    // 80061720: add   r7, r10, r7
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80061724:
    ctx->pc = 0x80061724u;
    // 80061724: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80061728:
    ctx->pc = 0x80061728u;
    // 80061728: b       0x800618CC
    {
            goto label_800618CC;
    }

label_8006172C:
    ctx->pc = 0x8006172Cu;
    ctx->downcount -= 3;
    // 8006172C: lwz     r10, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80061730:
    // 80061730: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80061734:
    // 80061734: bc    12, 2, 0x800617CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800617CC;
        }
    }

label_80061738:
    ctx->pc = 0x80061738u;
    ctx->downcount -= 3;
    // 80061738: lwz     r10, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8006173C:
    // 8006173C: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80061740:
    // 80061740: bc    12, 2, 0x80061784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061784;
        }
    }

label_80061744:
    ctx->pc = 0x80061744u;
    ctx->downcount -= 10;
    // 80061744: lwz     r22, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_80061748:
    // 80061748: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8006174C:
    ctx->pc = 0x8006174Cu;
    // 8006174C: lwz     r21, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_80061750:
    ctx->pc = 0x80061750u;
    // 80061750: lwzx    r22, r22, r23
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[23];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_80061754:
    ctx->pc = 0x80061754u;
    // 80061754: lwzx    r20, r21, r23
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[23];
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_80061758:
    // 80061758: add   r24, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_8006175C:
    ctx->pc = 0x8006175Cu;
    // 8006175C: mtctr    r27
    ctx->ctr = ctx->gpr[27];

label_80061760:
    // 80061760: cmpwi   r27, 0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80061764:
    // 80061764: bc    4, 1, 0x8006188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8006188C;
        }
    }

label_80061768:
    loop_80061768(ctx);
    if (ctx->pc == 0x80061780u) goto label_80061780;
    return;
label_8006176C:
    ctx->pc = 0x8006176Cu;
    // 8006176C: lwzx    r21, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_80061770:
    // 80061770: add   r21, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_80061774:
    ctx->pc = 0x80061774u;
    // 80061774: stwx    r21, r24, r10
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_80061778:
    // 80061778: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

label_8006177C:
    // 8006177C: bc    16, 0, 0x80061768
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061768u;
                return;
            }
            goto label_80061768;
        }
    }

label_80061780:
    ctx->downcount -= 1;
    // 80061780: b       0x8006188C
    {
            goto label_8006188C;
    }

label_80061784:
    ctx->pc = 0x80061784u;
    ctx->downcount -= 12;
    // 80061784: lwz     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80061788:
    // 80061788: add   r22, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_8006178C:
    ctx->pc = 0x8006178Cu;
    // 8006178C: lwz     r21, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_80061790:
    ctx->pc = 0x80061790u;
    // 80061790: lwzx    r24, r10, r23
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[23];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_80061794:
    // 80061794: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80061798:
    ctx->pc = 0x80061798u;
    // 80061798: lwzx    r19, r21, r23
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[23];
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_8006179C:
    // 8006179C: add   r21, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_800617A0:
    // 800617A0: subf   r20, r6, r21
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[21];
        u32 res = a + b + 1u;
        ctx->gpr[20] = res;
    }

label_800617A4:
    ctx->pc = 0x800617A4u;
    // 800617A4: mtctr    r28
    ctx->ctr = ctx->gpr[28];

label_800617A8:
    // 800617A8: cmpwi   r28, 0
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

label_800617AC:
    // 800617AC: bc    4, 1, 0x8006188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8006188C;
        }
    }

label_800617B0:
    loop_800617B0(ctx);
    if (ctx->pc == 0x800617C8u) goto label_800617C8;
    return;
label_800617B4:
    ctx->pc = 0x800617B4u;
    // 800617B4: lwzx    r21, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_800617B8:
    // 800617B8: add   r21, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_800617BC:
    ctx->pc = 0x800617BCu;
    // 800617BC: stwx    r21, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_800617C0:
    // 800617C0: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

label_800617C4:
    // 800617C4: bc    16, 0, 0x800617B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800617B0u;
                return;
            }
            goto label_800617B0;
        }
    }

label_800617C8:
    ctx->downcount -= 1;
    // 800617C8: b       0x8006188C
    {
            goto label_8006188C;
    }

label_800617CC:
    ctx->pc = 0x800617CCu;
    ctx->downcount -= 3;
    // 800617CC: lwz     r10, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800617D0:
    // 800617D0: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800617D4:
    // 800617D4: bc    12, 2, 0x80061850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061850;
        }
    }

label_800617D8:
    ctx->pc = 0x800617D8u;
    ctx->downcount -= 13;
    // 800617D8: lwz     r21, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_800617DC:
    // 800617DC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_800617E0:
    ctx->pc = 0x800617E0u;
    // 800617E0: lwz     r24, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_800617E4:
    // 800617E4: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_800617E8:
    ctx->pc = 0x800617E8u;
    // 800617E8: lwzx    r21, r21, r23
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[23];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_800617EC:
    ctx->pc = 0x800617ECu;
    // 800617EC: lwzx    r24, r24, r23
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[23];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_800617F0:
    // 800617F0: add   r21, r21, r5
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_800617F4:
    // 800617F4: add   r19, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_800617F8:
    // 800617F8: subf   r20, r6, r21
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[21];
        u32 res = a + b + 1u;
        ctx->gpr[20] = res;
    }

label_800617FC:
    ctx->pc = 0x800617FCu;
    // 800617FC: mtctr    r28
    ctx->ctr = ctx->gpr[28];

label_80061800:
    // 80061800: cmpwi   r28, 0
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

label_80061804:
    // 80061804: bc    4, 1, 0x80061824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061824;
        }
    }

label_80061808:
    loop_80061808(ctx);
    if (ctx->pc == 0x80061824u) goto label_80061824;
    return;
label_8006180C:
    // 8006180C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80061810:
    ctx->pc = 0x80061810u;
    // 80061810: lwzx    r24, r20, r22
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[22];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_80061814:
    // 80061814: add   r24, r21, r24
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_80061818:
    ctx->pc = 0x80061818u;
    // 80061818: stwx    r24, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_8006181C:
    // 8006181C: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_80061820:
    // 80061820: bc    16, 0, 0x80061808
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061808u;
                return;
            }
            goto label_80061808;
        }
    }

label_80061824:
    ctx->downcount -= 6;
    // 80061824: subf   r24, r10, r7
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[24] = res;
    }

label_80061828:
    // 80061828: rlwinm r22, r10, 2, 0, 29
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_8006182C:
    ctx->pc = 0x8006182Cu;
    // 8006182C: mtctr    r24
    ctx->ctr = ctx->gpr[24];

label_80061830:
    // 80061830: cmpw    r10, r7
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80061834:
    // 80061834: bc    4, 0, 0x8006188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8006188C;
        }
    }

label_80061838:
    loop_80061838(ctx);
    if (ctx->pc == 0x8006184Cu) goto label_8006184C;
    return;
label_8006183C:
    // 8006183C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80061840:
    ctx->pc = 0x80061840u;
    // 80061840: stwx    r24, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_80061844:
    // 80061844: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_80061848:
    // 80061848: bc    16, 0, 0x80061838
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061838u;
                return;
            }
            goto label_80061838;
        }
    }

label_8006184C:
    ctx->downcount -= 1;
    // 8006184C: b       0x8006188C
    {
            goto label_8006188C;
    }

label_80061850:
    ctx->pc = 0x80061850u;
    ctx->downcount -= 10;
    // 80061850: lwz     r24, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_80061854:
    // 80061854: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80061858:
    ctx->pc = 0x80061858u;
    // 80061858: lwz     r22, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_8006185C:
    ctx->pc = 0x8006185Cu;
    // 8006185C: lwzx    r24, r24, r23
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[23];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_80061860:
    ctx->pc = 0x80061860u;
    // 80061860: lwzx    r20, r22, r23
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[23];
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_80061864:
    // 80061864: add   r19, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_80061868:
    ctx->pc = 0x80061868u;
    // 80061868: mtctr    r28
    ctx->ctr = ctx->gpr[28];

label_8006186C:
    // 8006186C: cmpwi   r28, 0
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

label_80061870:
    // 80061870: bc    4, 1, 0x8006188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8006188C;
        }
    }

label_80061874:
    loop_80061874(ctx);
    if (ctx->pc == 0x8006188Cu) goto label_8006188C;
    return;
label_80061878:
    ctx->pc = 0x80061878u;
    // 80061878: lwzx    r22, r20, r10
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[10];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_8006187C:
    // 8006187C: add   r22, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_80061880:
    ctx->pc = 0x80061880u;
    // 80061880: stwx    r22, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_80061884:
    // 80061884: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

label_80061888:
    // 80061888: bc    16, 0, 0x80061874
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061874u;
                return;
            }
            goto label_80061874;
        }
    }

label_8006188C:
    ctx->pc = 0x8006188Cu;
    ctx->downcount -= 11;
    // 8006188C: lwz     r24, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_80061890:
    // 80061890: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80061894:
    ctx->pc = 0x80061894u;
    // 80061894: lwz     r22, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_80061898:
    ctx->pc = 0x80061898u;
    // 80061898: lwzx    r24, r24, r23
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[23];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8006189C:
    ctx->pc = 0x8006189Cu;
    // 8006189C: lwzx    r22, r22, r23
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[23];
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_800618A0:
    // 800618A0: add   r19, r24, r8
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_800618A4:
    // 800618A4: add   r20, r22, r9
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_800618A8:
    ctx->pc = 0x800618A8u;
    // 800618A8: mtctr    r29
    ctx->ctr = ctx->gpr[29];

label_800618AC:
    // 800618AC: cmpwi   r29, 0
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

label_800618B0:
    // 800618B0: bc    4, 1, 0x800618C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800618C4;
        }
    }

label_800618B4:
    loop_800618B4(ctx);
    if (ctx->pc == 0x800618C4u) goto label_800618C4;
    return;
label_800618B8:
    ctx->pc = 0x800618B8u;
    // 800618B8: stwx    r22, r19, r10
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_800618BC:
    // 800618BC: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

label_800618C0:
    // 800618C0: bc    16, 0, 0x800618B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800618B4u;
                return;
            }
            goto label_800618B4;
        }
    }

label_800618C4:
    ctx->downcount -= 2;
    // 800618C4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_800618C8:
    // 800618C8: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_800618CC:
    ctx->pc = 0x800618CCu;
    ctx->downcount -= 3;
    // 800618CC: lwz     r10, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800618D0:
    // 800618D0: cmpw    r30, r10
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800618D4:
    // 800618D4: bc    12, 0, 0x8006172C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8006172Cu;
                return;
            }
            goto label_8006172C;
        }
    }

label_800618D8:
    ctx->pc = 0x800618D8u;
    ctx->downcount -= 3;
    // 800618D8: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800618DC:
    ctx->pc = 0x800618DCu;
    // 800618DC: cmpwi   r0, 0
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

label_800618E0:
    ctx->pc = 0x800618E0u;
    // 800618E0: bc    12, 2, 0x800618F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800618F0;
        }
    }

label_800618E4:
    ctx->pc = 0x800618E4u;
    ctx->downcount -= 3;
    // 800618E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800618E8:
    ctx->pc = 0x800618E8u;
    // 800618E8: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800618EC:
    ctx->pc = 0x800618ECu;
    // 800618EC: b       0x800618F4
    {
            goto label_800618F4;
    }

label_800618F0:
    ctx->pc = 0x800618F0u;
    ctx->downcount -= 1;
    // 800618F0: stw     r27, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_800618F4:
    ctx->pc = 0x800618F4u;
    ctx->downcount -= 3;
    // 800618F4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800618F8:
    ctx->pc = 0x800618F8u;
    // 800618F8: cmpwi   r0, -1
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

label_800618FC:
    ctx->pc = 0x800618FCu;
    // 800618FC: bc    4, 2, 0x8006190C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8006190C;
        }
    }

label_80061900:
    ctx->pc = 0x80061900u;
    ctx->downcount -= 3;
    // 80061900: stw     r26, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_80061904:
    ctx->pc = 0x80061904u;
    // 80061904: stw     r26, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_80061908:
    ctx->pc = 0x80061908u;
    // 80061908: b       0x80061944
    {
            goto label_80061944;
    }

label_8006190C:
    ctx->pc = 0x8006190Cu;
    ctx->downcount -= 14;
    // 8006190C: stw     r25, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_80061910:
    ctx->pc = 0x80061910u;
    // 80061910: lwz     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061914:
    ctx->pc = 0x80061914u;
    // 80061914: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061918:
    ctx->pc = 0x80061918u;
    // 80061918: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_8006191C:
    ctx->pc = 0x8006191Cu;
    // 8006191C: lwzx    r5, r12, r5
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061920:
    ctx->pc = 0x80061920u;
    // 80061920: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061924:
    ctx->pc = 0x80061924u;
    // 80061924: lwzx    r0, r12, r0
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061928:
    ctx->pc = 0x80061928u;
    // 80061928: srawi r5, r5, 2
    {
        u32 sh = 2u;
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

label_8006192C:
    ctx->pc = 0x8006192Cu;
    // 8006192C: addze  r5, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061930:
    ctx->pc = 0x80061930u;
    // 80061930: srawi r0, r0, 2
    {
        u32 sh = 2u;
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

label_80061934:
    ctx->pc = 0x80061934u;
    // 80061934: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061938:
    ctx->pc = 0x80061938u;
    // 80061938: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8006193C:
    ctx->pc = 0x8006193Cu;
    // 8006193C: add   r0, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80061940:
    ctx->pc = 0x80061940u;
    // 80061940: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061944:
    ctx->pc = 0x80061944u;
    ctx->downcount -= 7;
    // 80061944: lwz     r6, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80061948:
    ctx->pc = 0x80061948u;
    // 80061948: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8006194C:
    ctx->pc = 0x8006194Cu;
    // 8006194C: lwz     r7, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80061950:
    ctx->pc = 0x80061950u;
    // 80061950: xor   r0, r6, r5
    {
        ctx->gpr[0] = ctx->gpr[6] ^ ctx->gpr[5];
    }

label_80061954:
    ctx->pc = 0x80061954u;
    // 80061954: xor   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] ^ ctx->gpr[5];
    }

label_80061958:
    ctx->pc = 0x80061958u;
    // 80061958: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8006195C:
    ctx->pc = 0x8006195Cu;
    // 8006195C: bc    4, 2, 0x80061970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061970;
        }
    }

label_80061960:
    ctx->pc = 0x80061960u;
    ctx->downcount -= 4;
    // 80061960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80061964:
    ctx->pc = 0x80061964u;
    // 80061964: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061968:
    ctx->pc = 0x80061968u;
    // 80061968: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8006196C:
    ctx->pc = 0x8006196Cu;
    // 8006196C: b       0x800619B0
    {
            goto label_800619B0;
    }

label_80061970:
    ctx->pc = 0x80061970u;
    ctx->downcount -= 16;
    // 80061970: lwz     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061974:
    ctx->pc = 0x80061974u;
    // 80061974: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061978:
    ctx->pc = 0x80061978u;
    // 80061978: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_8006197C:
    ctx->pc = 0x8006197Cu;
    // 8006197C: lwzx    r5, r12, r5
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061980:
    ctx->pc = 0x80061980u;
    // 80061980: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061984:
    ctx->pc = 0x80061984u;
    // 80061984: lwzx    r0, r12, r0
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061988:
    ctx->pc = 0x80061988u;
    // 80061988: srawi r5, r5, 2
    {
        u32 sh = 2u;
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

label_8006198C:
    ctx->pc = 0x8006198Cu;
    // 8006198C: addze  r5, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061990:
    ctx->pc = 0x80061990u;
    // 80061990: srawi r0, r0, 2
    {
        u32 sh = 2u;
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

label_80061994:
    ctx->pc = 0x80061994u;
    // 80061994: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061998:
    ctx->pc = 0x80061998u;
    // 80061998: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8006199C:
    ctx->pc = 0x8006199Cu;
    // 8006199C: srawi r0, r5, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[5];
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

label_800619A0:
    ctx->pc = 0x800619A0u;
    // 800619A0: addc   r5, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800619A4:
    ctx->pc = 0x800619A4u;
    // 800619A4: stw     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800619A8:
    ctx->pc = 0x800619A8u;
    // 800619A8: adde   r0, r6, r0
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800619AC:
    ctx->pc = 0x800619ACu;
    // 800619AC: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800619B0:
    ctx->pc = 0x800619B0u;
    ctx->downcount -= 7;
    // 800619B0: lwz     r7, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800619B4:
    ctx->pc = 0x800619B4u;
    // 800619B4: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_800619B8:
    ctx->pc = 0x800619B8u;
    // 800619B8: lwz     r8, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800619BC:
    ctx->pc = 0x800619BCu;
    // 800619BC: xor   r0, r7, r6
    {
        ctx->gpr[0] = ctx->gpr[7] ^ ctx->gpr[6];
    }

label_800619C0:
    ctx->pc = 0x800619C0u;
    // 800619C0: xor   r5, r8, r6
    {
        ctx->gpr[5] = ctx->gpr[8] ^ ctx->gpr[6];
    }

label_800619C4:
    ctx->pc = 0x800619C4u;
    // 800619C4: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800619C8:
    ctx->pc = 0x800619C8u;
    // 800619C8: bc    4, 2, 0x80061A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061A70;
        }
    }

label_800619CC:
    ctx->pc = 0x800619CCu;
    ctx->downcount -= 6;
    // 800619CC: lwz     r7, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800619D0:
    ctx->pc = 0x800619D0u;
    // 800619D0: lwz     r8, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800619D4:
    ctx->pc = 0x800619D4u;
    // 800619D4: xor   r0, r7, r6
    {
        ctx->gpr[0] = ctx->gpr[7] ^ ctx->gpr[6];
    }

label_800619D8:
    ctx->pc = 0x800619D8u;
    // 800619D8: xor   r5, r8, r6
    {
        ctx->gpr[5] = ctx->gpr[8] ^ ctx->gpr[6];
    }

label_800619DC:
    ctx->pc = 0x800619DCu;
    // 800619DC: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800619E0:
    ctx->pc = 0x800619E0u;
    // 800619E0: bc    12, 2, 0x80061B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B2C;
        }
    }

label_800619E4:
    ctx->pc = 0x800619E4u;
    ctx->downcount -= 13;
    // 800619E4: stw     r8, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800619E8:
    ctx->pc = 0x800619E8u;
    // 800619E8: stw     r7, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800619EC:
    ctx->pc = 0x800619ECu;
    // 800619EC: lwz     r10, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800619F0:
    ctx->pc = 0x800619F0u;
    // 800619F0: lwz     r8, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800619F4:
    ctx->pc = 0x800619F4u;
    // 800619F4: lwz     r11, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_800619F8:
    ctx->pc = 0x800619F8u;
    // 800619F8: xoris   r5, r10, 0x8000
    ctx->gpr[5] = ctx->gpr[10] ^ (0x8000u << 16);

label_800619FC:
    ctx->pc = 0x800619FCu;
    // 800619FC: lwz     r9, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80061A00:
    ctx->pc = 0x80061A00u;
    // 80061A00: xoris   r6, r8, 0x8000
    ctx->gpr[6] = ctx->gpr[8] ^ (0x8000u << 16);

label_80061A04:
    ctx->pc = 0x80061A04u;
    // 80061A04: subfc   r0, r11, r9
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[9];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A08:
    ctx->pc = 0x80061A08u;
    // 80061A08: subfe   r5, r5, r6
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A0C:
    ctx->pc = 0x80061A0Cu;
    // 80061A0C: subfe   r5, r6, r6
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A10:
    ctx->pc = 0x80061A10u;
    // 80061A10: neg.  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061A14:
    ctx->pc = 0x80061A14u;
    // 80061A14: bc    12, 2, 0x80061B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B2C;
        }
    }

label_80061A18:
    ctx->pc = 0x80061A18u;
    ctx->downcount -= 3;
    // 80061A18: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061A1C:
    ctx->pc = 0x80061A1Cu;
    // 80061A1C: cmpwi   r0, 0
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

label_80061A20:
    ctx->pc = 0x80061A20u;
    // 80061A20: bc    12, 2, 0x80061A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061A40;
        }
    }

label_80061A24:
    ctx->pc = 0x80061A24u;
    ctx->downcount -= 7;
    // 80061A24: lwz     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80061A28:
    ctx->pc = 0x80061A28u;
    // 80061A28: srawi r6, r7, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[7];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80061A2C:
    ctx->pc = 0x80061A2Cu;
    // 80061A2C: subfc   r0, r9, r11
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[11];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A30:
    ctx->pc = 0x80061A30u;
    // 80061A30: subfe   r5, r8, r10
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[10];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A34:
    ctx->pc = 0x80061A34u;
    // 80061A34: subfc   r0, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A38:
    ctx->pc = 0x80061A38u;
    // 80061A38: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061A3C:
    ctx->pc = 0x80061A3Cu;
    // 80061A3C: b       0x80061B2C
    {
            goto label_80061B2C;
    }

label_80061A40:
    ctx->pc = 0x80061A40u;
    ctx->downcount -= 10;
    // 80061A40: subfc   r5, r9, r11
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[11];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A44:
    ctx->pc = 0x80061A44u;
    // 80061A44: lwz     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80061A48:
    ctx->pc = 0x80061A48u;
    // 80061A48: subfe   r6, r8, r10
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[10];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A4C:
    ctx->pc = 0x80061A4Cu;
    // 80061A4C: srawi r0, r7, 31
    {
        u32 sh = 31u;
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

label_80061A50:
    ctx->pc = 0x80061A50u;
    // 80061A50: addc   r5, r5, r7
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A54:
    ctx->pc = 0x80061A54u;
    // 80061A54: stw     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80061A58:
    ctx->pc = 0x80061A58u;
    // 80061A58: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061A5C:
    ctx->pc = 0x80061A5Cu;
    // 80061A5C: lwz     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061A60:
    ctx->pc = 0x80061A60u;
    // 80061A60: cmpw    r0, r5
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

label_80061A64:
    ctx->pc = 0x80061A64u;
    // 80061A64: bc    4, 1, 0x80061B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061B2C;
        }
    }

label_80061A68:
    ctx->pc = 0x80061A68u;
    ctx->downcount -= 2;
    // 80061A68: stw     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80061A6C:
    ctx->pc = 0x80061A6Cu;
    // 80061A6C: b       0x80061B2C
    {
            goto label_80061B2C;
    }

label_80061A70:
    ctx->pc = 0x80061A70u;
    ctx->downcount -= 22;
    // 80061A70: lwz     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061A74:
    ctx->pc = 0x80061A74u;
    // 80061A74: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061A78:
    ctx->pc = 0x80061A78u;
    // 80061A78: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80061A7C:
    ctx->pc = 0x80061A7Cu;
    // 80061A7C: lwzx    r5, r12, r5
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061A80:
    ctx->pc = 0x80061A80u;
    // 80061A80: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061A84:
    ctx->pc = 0x80061A84u;
    // 80061A84: lwzx    r0, r12, r0
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061A88:
    ctx->pc = 0x80061A88u;
    // 80061A88: srawi r5, r5, 2
    {
        u32 sh = 2u;
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

label_80061A8C:
    ctx->pc = 0x80061A8Cu;
    // 80061A8C: addze  r5, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A90:
    ctx->pc = 0x80061A90u;
    // 80061A90: srawi r0, r0, 2
    {
        u32 sh = 2u;
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

label_80061A94:
    ctx->pc = 0x80061A94u;
    // 80061A94: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061A98:
    ctx->pc = 0x80061A98u;
    // 80061A98: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80061A9C:
    ctx->pc = 0x80061A9Cu;
    // 80061A9C: srawi r0, r5, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[5];
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

label_80061AA0:
    ctx->pc = 0x80061AA0u;
    // 80061AA0: addc   r5, r8, r5
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061AA4:
    ctx->pc = 0x80061AA4u;
    // 80061AA4: stw     r5, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80061AA8:
    ctx->pc = 0x80061AA8u;
    // 80061AA8: adde   r0, r7, r0
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061AAC:
    ctx->pc = 0x80061AACu;
    // 80061AAC: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061AB0:
    ctx->pc = 0x80061AB0u;
    // 80061AB0: lwz     r7, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80061AB4:
    ctx->pc = 0x80061AB4u;
    // 80061AB4: lwz     r8, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80061AB8:
    ctx->pc = 0x80061AB8u;
    // 80061AB8: xor   r0, r7, r6
    {
        ctx->gpr[0] = ctx->gpr[7] ^ ctx->gpr[6];
    }

label_80061ABC:
    ctx->pc = 0x80061ABCu;
    // 80061ABC: xor   r5, r8, r6
    {
        ctx->gpr[5] = ctx->gpr[8] ^ ctx->gpr[6];
    }

label_80061AC0:
    ctx->pc = 0x80061AC0u;
    // 80061AC0: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061AC4:
    ctx->pc = 0x80061AC4u;
    // 80061AC4: bc    12, 2, 0x80061B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B2C;
        }
    }

label_80061AC8:
    ctx->pc = 0x80061AC8u;
    ctx->downcount -= 6;
    // 80061AC8: lwz     r9, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80061ACC:
    ctx->pc = 0x80061ACCu;
    // 80061ACC: lwz     r10, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80061AD0:
    ctx->pc = 0x80061AD0u;
    // 80061AD0: xor   r0, r9, r7
    {
        ctx->gpr[0] = ctx->gpr[9] ^ ctx->gpr[7];
    }

label_80061AD4:
    ctx->pc = 0x80061AD4u;
    // 80061AD4: xor   r5, r10, r8
    {
        ctx->gpr[5] = ctx->gpr[10] ^ ctx->gpr[8];
    }

label_80061AD8:
    ctx->pc = 0x80061AD8u;
    // 80061AD8: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061ADC:
    ctx->pc = 0x80061ADCu;
    // 80061ADC: bc    12, 2, 0x80061B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B2C;
        }
    }

label_80061AE0:
    ctx->pc = 0x80061AE0u;
    ctx->downcount -= 7;
    // 80061AE0: xoris   r6, r7, 0x8000
    ctx->gpr[6] = ctx->gpr[7] ^ (0x8000u << 16);

label_80061AE4:
    ctx->pc = 0x80061AE4u;
    // 80061AE4: xoris   r5, r9, 0x8000
    ctx->gpr[5] = ctx->gpr[9] ^ (0x8000u << 16);

label_80061AE8:
    ctx->pc = 0x80061AE8u;
    // 80061AE8: subfc   r0, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061AEC:
    ctx->pc = 0x80061AECu;
    // 80061AEC: subfe   r5, r5, r6
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061AF0:
    ctx->pc = 0x80061AF0u;
    // 80061AF0: subfe   r5, r6, r6
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061AF4:
    ctx->pc = 0x80061AF4u;
    // 80061AF4: neg.  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061AF8:
    ctx->pc = 0x80061AF8u;
    // 80061AF8: bc    12, 2, 0x80061B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B1C;
        }
    }

label_80061AFC:
    ctx->pc = 0x80061AFCu;
    ctx->downcount -= 2;
    // 80061AFC: subfc.   r5, r8, r10
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[10];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80061B00:
    ctx->pc = 0x80061B00u;
    // 80061B00: bc    12, 2, 0x80061B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B1C;
        }
    }

label_80061B04:
    ctx->pc = 0x80061B04u;
    ctx->downcount -= 3;
    // 80061B04: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061B08:
    ctx->pc = 0x80061B08u;
    // 80061B08: cmpwi   r0, 0
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

label_80061B0C:
    ctx->pc = 0x80061B0Cu;
    // 80061B0C: bc    12, 2, 0x80061B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B1C;
        }
    }

label_80061B10:
    ctx->pc = 0x80061B10u;
    ctx->downcount -= 3;
    // 80061B10: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061B14:
    ctx->pc = 0x80061B14u;
    // 80061B14: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80061B18:
    ctx->pc = 0x80061B18u;
    // 80061B18: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061B1C:
    ctx->pc = 0x80061B1Cu;
    ctx->downcount -= 4;
    // 80061B1C: lwz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061B20:
    ctx->pc = 0x80061B20u;
    // 80061B20: lwz     r5, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061B24:
    ctx->pc = 0x80061B24u;
    // 80061B24: stw     r5, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80061B28:
    ctx->pc = 0x80061B28u;
    // 80061B28: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061B2C:
    ctx->pc = 0x80061B2Cu;
    ctx->downcount -= 3;
    // 80061B2C: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061B30:
    ctx->pc = 0x80061B30u;
    // 80061B30: cmpwi   r0, 0
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

label_80061B34:
    ctx->pc = 0x80061B34u;
    // 80061B34: bc    12, 2, 0x80061B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B40;
        }
    }

label_80061B38:
    ctx->pc = 0x80061B38u;
    ctx->downcount -= 2;
    // 80061B38: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80061B3C:
    ctx->pc = 0x80061B3Cu;
    // 80061B3C: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061B40:
    ctx->pc = 0x80061B40u;
    ctx->downcount -= 1;
    // 80061B40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061B44:
    ctx->pc = 0x80061B44u;
    ctx->downcount -= 13;
    // 80061B44: lmw     r19, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80061B48:
    ctx->pc = 0x80061B48u;
    // 80061B48: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80061B4C:
    ctx->pc = 0x80061B4Cu;
    // 80061B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061B50:
    ctx->pc = 0x80061B50u;
    ctx->downcount -= 16;
    // 80061B50: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80061B54:
    ctx->pc = 0x80061B54u;
    // 80061B54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80061B58:
    ctx->pc = 0x80061B58u;
    // 80061B58: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061B5C:
    ctx->pc = 0x80061B5Cu;
    // 80061B5C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80061B60:
    ctx->pc = 0x80061B60u;
    // 80061B60: or.   r29, r3, r3
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

label_80061B64:
    ctx->pc = 0x80061B64u;
    // 80061B64: bc    12, 2, 0x80061CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061CC0;
        }
    }

label_80061B68:
    ctx->pc = 0x80061B68u;
    ctx->downcount -= 3;
    // 80061B68: lwz     r25, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_80061B6C:
    ctx->pc = 0x80061B6Cu;
    // 80061B6C: cmplwi  r25, 0x0000
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

label_80061B70:
    ctx->pc = 0x80061B70u;
    // 80061B70: bc    12, 2, 0x80061B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061B7C;
        }
    }

label_80061B74:
    ctx->pc = 0x80061B74u;
    ctx->downcount -= 2;
    // 80061B74: lwz     r31, 28(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80061B78:
    ctx->pc = 0x80061B78u;
    // 80061B78: b       0x80061B80
    {
            goto label_80061B80;
    }

label_80061B7C:
    ctx->pc = 0x80061B7Cu;
    ctx->downcount -= 1;
    // 80061B7C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80061B80:
    ctx->pc = 0x80061B80u;
    ctx->downcount -= 4;
    // 80061B80: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061B84:
    ctx->pc = 0x80061B84u;
    // 80061B84: lwz     r30, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80061B88:
    ctx->pc = 0x80061B88u;
    // 80061B88: cmplwi  r0, 0x0000
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

label_80061B8C:
    ctx->pc = 0x80061B8Cu;
    // 80061B8C: bc    12, 2, 0x80061C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C04;
        }
    }

label_80061B90:
    ctx->pc = 0x80061B90u;
    ctx->downcount -= 5;
    // 80061B90: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80061B94:
    ctx->pc = 0x80061B94u;
    // 80061B94: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80061B98:
    ctx->pc = 0x80061B98u;
    // 80061B98: addi    r27, r3, 26160
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(26160);

label_80061B9C:
    ctx->pc = 0x80061B9Cu;
    // 80061B9C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80061BA0:
    ctx->pc = 0x80061BA0u;
    // 80061BA0: b       0x80061BC8
    {
            goto label_80061BC8;
    }

label_80061BA4:
    ctx->pc = 0x80061BA4u;
    ctx->downcount -= 4;
    // 80061BA4: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061BA8:
    ctx->pc = 0x80061BA8u;
    // 80061BA8: lwzx    r3, r3, r28
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[28];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061BAC:
    // 80061BAC: cmplwi  r3, 0x0000
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

label_80061BB0:
    // 80061BB0: bc    12, 2, 0x80061BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061BC0;
        }
    }

label_80061BB4:
    ctx->downcount -= 3;
    // 80061BB4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80061BB8:
    // 80061BB8: li      r5, 235
    ctx->gpr[5] = (u32)(s32)(235);

label_80061BBC:
    // 80061BBC: bl      0x80055E80
    {
            ctx->lr = 0x80061BC0u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061BC0:
    ctx->downcount -= 2;
    // 80061BC0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80061BC4:
    // 80061BC4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_80061BC8:
    ctx->pc = 0x80061BC8u;
    ctx->downcount -= 3;
    // 80061BC8: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061BCC:
    // 80061BCC: cmpw    r26, r0
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

label_80061BD0:
    // 80061BD0: bc    12, 0, 0x80061BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061BA4u;
                return;
            }
            goto label_80061BA4;
        }
    }

label_80061BD4:
    ctx->pc = 0x80061BD4u;
    ctx->downcount -= 5;
    // 80061BD4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061BD8:
    ctx->pc = 0x80061BD8u;
    // 80061BD8: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061BDC:
    ctx->pc = 0x80061BDCu;
    // 80061BDC: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061BE0:
    ctx->pc = 0x80061BE0u;
    // 80061BE0: li      r5, 236
    ctx->gpr[5] = (u32)(s32)(236);

label_80061BE4:
    ctx->pc = 0x80061BE4u;
    // 80061BE4: bl      0x80055E80
    {
            ctx->lr = 0x80061BE8u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061BE8:
    ctx->pc = 0x80061BE8u;
    ctx->downcount -= 3;
    // 80061BE8: lwz     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061BEC:
    ctx->pc = 0x80061BECu;
    // 80061BEC: cmplwi  r3, 0x0000
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

label_80061BF0:
    ctx->pc = 0x80061BF0u;
    // 80061BF0: bc    12, 2, 0x80061C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C04;
        }
    }

label_80061BF4:
    ctx->pc = 0x80061BF4u;
    ctx->downcount -= 4;
    // 80061BF4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061BF8:
    ctx->pc = 0x80061BF8u;
    // 80061BF8: li      r5, 237
    ctx->gpr[5] = (u32)(s32)(237);

label_80061BFC:
    ctx->pc = 0x80061BFCu;
    // 80061BFC: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061C00:
    ctx->pc = 0x80061C00u;
    // 80061C00: bl      0x80055E80
    {
            ctx->lr = 0x80061C04u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061C04:
    ctx->pc = 0x80061C04u;
    ctx->downcount -= 2;
    // 80061C04: cmplwi  r31, 0x0000
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

label_80061C08:
    ctx->pc = 0x80061C08u;
    // 80061C08: bc    12, 2, 0x80061C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C78;
        }
    }

label_80061C0C:
    ctx->pc = 0x80061C0Cu;
    ctx->downcount -= 5;
    // 80061C0C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80061C10:
    ctx->pc = 0x80061C10u;
    // 80061C10: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80061C14:
    ctx->pc = 0x80061C14u;
    // 80061C14: addi    r27, r3, 32556
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(32556);

label_80061C18:
    ctx->pc = 0x80061C18u;
    // 80061C18: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80061C1C:
    ctx->pc = 0x80061C1Cu;
    // 80061C1C: b       0x80061C6C
    {
            goto label_80061C6C;
    }

label_80061C20:
    ctx->downcount -= 8;
    // 80061C20: addi    r0, r28, 32
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(32);

label_80061C24:
    // 80061C24: cmplwi  r30, 0x0000
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

label_80061C28:
    ctx->pc = 0x80061C28u;
    // 80061C28: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061C2C:
    ctx->pc = 0x80061C2Cu;
    // 80061C2C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061C30:
    // 80061C30: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061C34:
    // 80061C34: addi    r0, r3, 288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(288);

label_80061C38:
    ctx->pc = 0x80061C38u;
    // 80061C38: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061C3C:
    // 80061C3C: bc    12, 2, 0x80061C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C64;
        }
    }

label_80061C40:
    ctx->pc = 0x80061C40u;
    ctx->downcount -= 3;
    // 80061C40: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061C44:
    // 80061C44: cmplwi  r3, 0x0000
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

label_80061C48:
    // 80061C48: bc    12, 2, 0x80061C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C64;
        }
    }

label_80061C4C:
    ctx->downcount -= 7;
    // 80061C4C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061C50:
    ctx->pc = 0x80061C50u;
    // 80061C50: lwzx    r3, r3, r28
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[28];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061C54:
    ctx->pc = 0x80061C54u;
    // 80061C54: lwzx    r4, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061C58:
    ctx->pc = 0x80061C58u;
    // 80061C58: lwz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80061C5C:
    ctx->pc = 0x80061C5Cu;
    // 80061C5C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80061C60:
    ctx->pc = 0x80061C60u;
    // 80061C60: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80061C64u;
            ctx->pc = target;
            return;
        }
    }

label_80061C64:
    ctx->downcount -= 2;
    // 80061C64: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80061C68:
    // 80061C68: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_80061C6C:
    ctx->pc = 0x80061C6Cu;
    ctx->downcount -= 3;
    // 80061C6C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061C70:
    // 80061C70: cmpw    r26, r0
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

label_80061C74:
    // 80061C74: bc    12, 0, 0x80061C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061C20u;
                return;
            }
            goto label_80061C20;
        }
    }

label_80061C78:
    ctx->pc = 0x80061C78u;
    ctx->downcount -= 2;
    // 80061C78: cmplwi  r30, 0x0000
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

label_80061C7C:
    ctx->pc = 0x80061C7Cu;
    // 80061C7C: bc    12, 2, 0x80061CB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061CB0;
        }
    }

label_80061C80:
    ctx->pc = 0x80061C80u;
    ctx->downcount -= 3;
    // 80061C80: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061C84:
    ctx->pc = 0x80061C84u;
    // 80061C84: cmplwi  r3, 0x0000
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

label_80061C88:
    ctx->pc = 0x80061C88u;
    // 80061C88: bc    12, 2, 0x80061C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061C9C;
        }
    }

label_80061C8C:
    ctx->pc = 0x80061C8Cu;
    ctx->downcount -= 4;
    // 80061C8C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061C90:
    ctx->pc = 0x80061C90u;
    // 80061C90: li      r5, 250
    ctx->gpr[5] = (u32)(s32)(250);

label_80061C94:
    ctx->pc = 0x80061C94u;
    // 80061C94: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061C98:
    ctx->pc = 0x80061C98u;
    // 80061C98: bl      0x80055E80
    {
            ctx->lr = 0x80061C9Cu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061C9C:
    ctx->pc = 0x80061C9Cu;
    ctx->downcount -= 5;
    // 80061C9C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061CA0:
    ctx->pc = 0x80061CA0u;
    // 80061CA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80061CA4:
    ctx->pc = 0x80061CA4u;
    // 80061CA4: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061CA8:
    ctx->pc = 0x80061CA8u;
    // 80061CA8: li      r5, 251
    ctx->gpr[5] = (u32)(s32)(251);

label_80061CAC:
    ctx->pc = 0x80061CACu;
    // 80061CAC: bl      0x80055E80
    {
            ctx->lr = 0x80061CB0u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061CB0:
    ctx->pc = 0x80061CB0u;
    ctx->downcount -= 4;
    // 80061CB0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80061CB4:
    ctx->pc = 0x80061CB4u;
    // 80061CB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80061CB8:
    ctx->pc = 0x80061CB8u;
    // 80061CB8: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80061CBC:
    ctx->pc = 0x80061CBCu;
    // 80061CBC: bl      0x800050B4
    {
            ctx->lr = 0x80061CC0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80061CC0:
    ctx->pc = 0x80061CC0u;
    ctx->downcount -= 16;
    // 80061CC0: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80061CC4:
    ctx->pc = 0x80061CC4u;
    // 80061CC4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061CC8:
    ctx->pc = 0x80061CC8u;
    // 80061CC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80061CCC:
    ctx->pc = 0x80061CCCu;
    // 80061CCC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80061CD0:
    ctx->pc = 0x80061CD0u;
    // 80061CD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061CD4:
    ctx->pc = 0x80061CD4u;
    ctx->downcount -= 6;
    // 80061CD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80061CD8:
    ctx->pc = 0x80061CD8u;
    // 80061CD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80061CDC:
    ctx->pc = 0x80061CDCu;
    // 80061CDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061CE0:
    ctx->pc = 0x80061CE0u;
    // 80061CE0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80061CE4:
    ctx->pc = 0x80061CE4u;
    // 80061CE4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80061CE8:
    ctx->pc = 0x80061CE8u;
    // 80061CE8: bl      0x80061D8C
    {
            ctx->lr = 0x80061CECu;
            goto label_80061D8C;
    }

label_80061CEC:
    ctx->pc = 0x80061CECu;
    ctx->downcount -= 2;
    // 80061CEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80061CF0:
    ctx->pc = 0x80061CF0u;
    // 80061CF0: bl      0x80061D0C
    {
            ctx->lr = 0x80061CF4u;
            goto label_80061D0C;
    }

label_80061CF4:
    ctx->pc = 0x80061CF4u;
    ctx->downcount -= 7;
    // 80061CF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061CF8:
    ctx->pc = 0x80061CF8u;
    // 80061CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061CFC:
    ctx->pc = 0x80061CFCu;
    // 80061CFC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80061D00:
    ctx->pc = 0x80061D00u;
    // 80061D00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80061D04:
    ctx->pc = 0x80061D04u;
    // 80061D04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80061D08:
    ctx->pc = 0x80061D08u;
    // 80061D08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061D0C:
    ctx->pc = 0x80061D0Cu;
    ctx->downcount -= 4;
    // 80061D0C: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061D10:
    ctx->pc = 0x80061D10u;
    // 80061D10: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061D14:
    ctx->pc = 0x80061D14u;
    // 80061D14: cmplwi  r0, 0x0000
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

label_80061D18:
    ctx->pc = 0x80061D18u;
    // 80061D18: bc    4, 2, 0x80061D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061D24;
        }
    }

label_80061D1C:
    ctx->pc = 0x80061D1Cu;
    ctx->downcount -= 2;
    // 80061D1C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80061D20:
    ctx->pc = 0x80061D20u;
    // 80061D20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061D24:
    ctx->pc = 0x80061D24u;
    ctx->downcount -= 2;
    // 80061D24: cmplwi  r4, 0x0000
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

label_80061D28:
    ctx->pc = 0x80061D28u;
    // 80061D28: bc    4, 2, 0x80061D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061D34;
        }
    }

label_80061D2C:
    ctx->pc = 0x80061D2Cu;
    ctx->downcount -= 2;
    // 80061D2C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80061D30:
    ctx->pc = 0x80061D30u;
    // 80061D30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061D34:
    ctx->pc = 0x80061D34u;
    ctx->downcount -= 3;
    // 80061D34: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061D38:
    ctx->pc = 0x80061D38u;
    // 80061D38: cmplwi  r4, 0x0000
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

label_80061D3C:
    ctx->pc = 0x80061D3Cu;
    // 80061D3C: bc    4, 2, 0x80061D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061D48;
        }
    }

label_80061D40:
    ctx->pc = 0x80061D40u;
    ctx->downcount -= 2;
    // 80061D40: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80061D44:
    ctx->pc = 0x80061D44u;
    // 80061D44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061D48:
    ctx->pc = 0x80061D48u;
    ctx->downcount -= 17;
    // 80061D48: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061D4C:
    ctx->pc = 0x80061D4Cu;
    // 80061D4C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80061D50:
    ctx->pc = 0x80061D50u;
    // 80061D50: srawi r4, r4, 1
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

label_80061D54:
    ctx->pc = 0x80061D54u;
    // 80061D54: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061D58:
    ctx->pc = 0x80061D58u;
    // 80061D58: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80061D5C:
    ctx->pc = 0x80061D5Cu;
    // 80061D5C: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061D60:
    ctx->pc = 0x80061D60u;
    // 80061D60: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80061D64:
    ctx->pc = 0x80061D64u;
    // 80061D64: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D68:
    ctx->pc = 0x80061D68u;
    // 80061D68: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D6C:
    ctx->pc = 0x80061D6Cu;
    // 80061D6C: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D70:
    ctx->pc = 0x80061D70u;
    // 80061D70: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D74:
    ctx->pc = 0x80061D74u;
    // 80061D74: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D78:
    ctx->pc = 0x80061D78u;
    // 80061D78: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061D7C:
    ctx->pc = 0x80061D7Cu;
    // 80061D7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061D80:
    ctx->pc = 0x80061D80u;
    // 80061D80: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D84:
    ctx->pc = 0x80061D84u;
    // 80061D84: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D88:
    ctx->pc = 0x80061D88u;
    // 80061D88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061D8C:
    ctx->pc = 0x80061D8Cu;
    ctx->downcount -= 20;
    // 80061D8C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80061D90:
    ctx->pc = 0x80061D90u;
    // 80061D90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80061D94:
    ctx->pc = 0x80061D94u;
    // 80061D94: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80061D98:
    ctx->pc = 0x80061D98u;
    // 80061D98: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061D9C:
    ctx->pc = 0x80061D9Cu;
    // 80061D9C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80061DA0:
    ctx->pc = 0x80061DA0u;
    // 80061DA0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80061DA4:
    ctx->pc = 0x80061DA4u;
    // 80061DA4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80061DA8:
    ctx->pc = 0x80061DA8u;
    // 80061DA8: lwz     r30, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80061DAC:
    ctx->pc = 0x80061DACu;
    // 80061DAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80061DB0:
    ctx->pc = 0x80061DB0u;
    // 80061DB0: bl      0x800050B4
    {
            ctx->lr = 0x80061DB4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80061DB4:
    ctx->pc = 0x80061DB4u;
    ctx->downcount -= 7;
    // 80061DB4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061DB8:
    ctx->pc = 0x80061DB8u;
    // 80061DB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80061DBC:
    ctx->pc = 0x80061DBCu;
    // 80061DBC: addi    r5, r4, 26160
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061DC0:
    ctx->pc = 0x80061DC0u;
    // 80061DC0: li      r6, 155
    ctx->gpr[6] = (u32)(s32)(155);

label_80061DC4:
    ctx->pc = 0x80061DC4u;
    // 80061DC4: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80061DC8:
    ctx->pc = 0x80061DC8u;
    // 80061DC8: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80061DCC:
    ctx->pc = 0x80061DCCu;
    // 80061DCC: bl      0x80055D58
    {
            ctx->lr = 0x80061DD0u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_80061DD0:
    ctx->pc = 0x80061DD0u;
    ctx->downcount -= 5;
    // 80061DD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80061DD4:
    ctx->pc = 0x80061DD4u;
    // 80061DD4: stw     r31, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80061DD8:
    ctx->pc = 0x80061DD8u;
    // 80061DD8: stw     r29, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80061DDC:
    ctx->pc = 0x80061DDCu;
    // 80061DDC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061DE0:
    ctx->pc = 0x80061DE0u;
    // 80061DE0: bl      0x80062208
    {
            ctx->lr = 0x80061DE4u;
            goto label_80062208;
    }

label_80061DE4:
    ctx->pc = 0x80061DE4u;
    ctx->downcount -= 6;
    // 80061DE4: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061DE8:
    ctx->pc = 0x80061DE8u;
    // 80061DE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061DEC:
    ctx->pc = 0x80061DECu;
    // 80061DEC: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061DF0:
    ctx->pc = 0x80061DF0u;
    // 80061DF0: srawi r0, r0, 1
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

label_80061DF4:
    ctx->pc = 0x80061DF4u;
    // 80061DF4: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061DF8:
    ctx->pc = 0x80061DF8u;
    // 80061DF8: bl      0x80060D08
    {
            ctx->lr = 0x80061DFCu;
            ctx->pc = 0x80060D08u;
            return;
    }

label_80061DFC:
    ctx->pc = 0x80061DFCu;
    ctx->downcount -= 6;
    // 80061DFC: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061E00:
    ctx->pc = 0x80061E00u;
    // 80061E00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061E04:
    ctx->pc = 0x80061E04u;
    // 80061E04: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061E08:
    ctx->pc = 0x80061E08u;
    // 80061E08: srawi r0, r0, 1
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

label_80061E0C:
    ctx->pc = 0x80061E0Cu;
    // 80061E0C: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80061E10:
    ctx->pc = 0x80061E10u;
    // 80061E10: bl      0x80060D08
    {
            ctx->lr = 0x80061E14u;
            ctx->pc = 0x80060D08u;
            return;
    }

label_80061E14:
    ctx->pc = 0x80061E14u;
    ctx->downcount -= 4;
    // 80061E14: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061E18:
    ctx->pc = 0x80061E18u;
    // 80061E18: lwz     r0, 3104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061E1C:
    ctx->pc = 0x80061E1Cu;
    // 80061E1C: cmplwi  r0, 0x0000
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

label_80061E20:
    ctx->pc = 0x80061E20u;
    // 80061E20: bc    4, 2, 0x80061E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80061E90;
        }
    }

label_80061E24:
    ctx->pc = 0x80061E24u;
    ctx->downcount -= 7;
    // 80061E24: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061E28:
    ctx->pc = 0x80061E28u;
    // 80061E28: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061E2C:
    ctx->pc = 0x80061E2Cu;
    // 80061E2C: addi    r5, r4, 26160
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061E30:
    ctx->pc = 0x80061E30u;
    // 80061E30: li      r6, 166
    ctx->gpr[6] = (u32)(s32)(166);

label_80061E34:
    ctx->pc = 0x80061E34u;
    // 80061E34: li      r4, 52
    ctx->gpr[4] = (u32)(s32)(52);

label_80061E38:
    ctx->pc = 0x80061E38u;
    // 80061E38: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80061E3C:
    ctx->pc = 0x80061E3Cu;
    // 80061E3C: bl      0x80055D58
    {
            ctx->lr = 0x80061E40u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_80061E40:
    ctx->pc = 0x80061E40u;
    ctx->downcount -= 6;
    // 80061E40: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80061E44:
    ctx->pc = 0x80061E44u;
    // 80061E44: stw     r3, 3104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061E48:
    ctx->pc = 0x80061E48u;
    // 80061E48: or   r25, r26, r26
    {
        ctx->gpr[25] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80061E4C:
    ctx->pc = 0x80061E4Cu;
    // 80061E4C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80061E50:
    ctx->pc = 0x80061E50u;
    // 80061E50: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80061E54:
    ctx->pc = 0x80061E54u;
    // 80061E54: b       0x80061E84
    {
            goto label_80061E84;
    }

label_80061E58:
    ctx->downcount -= 5;
    // 80061E58: addi    r24, r27, 2080
    ctx->gpr[24] = ctx->gpr[27] + (u32)(s32)(2080);

label_80061E5C:
    ctx->pc = 0x80061E5Cu;
    // 80061E5C: lwz     r0, 3104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061E60:
    ctx->pc = 0x80061E60u;
    // 80061E60: lwzx    r4, r30, r24
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[24];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061E64:
    // 80061E64: add   r3, r0, r26
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80061E68:
    // 80061E68: bl      0x8005D90C
    {
            ctx->lr = 0x80061E6Cu;
            ctx->pc = 0x8005D90Cu;
            return;
    }

label_80061E6C:
    ctx->pc = 0x80061E6Cu;
    ctx->downcount -= 2;
    // 80061E6C: lwzx    r3, r30, r24
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[24];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061E70:
    // 80061E70: bl      0x8005DF54
    {
            ctx->lr = 0x80061E74u;
            ctx->pc = 0x8005DF54u;
            return;
    }

label_80061E74:
    ctx->pc = 0x80061E74u;
    ctx->downcount -= 4;
    // 80061E74: stwx    r25, r30, r24
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[24];
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_80061E78:
    // 80061E78: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_80061E7C:
    // 80061E7C: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_80061E80:
    // 80061E80: addi    r26, r26, 52
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(52);

label_80061E84:
    ctx->pc = 0x80061E84u;
    ctx->downcount -= 3;
    // 80061E84: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061E88:
    // 80061E88: cmpw    r23, r0
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

label_80061E8C:
    // 80061E8C: bc    12, 0, 0x80061E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061E58u;
                return;
            }
            goto label_80061E58;
        }
    }

label_80061E90:
    ctx->pc = 0x80061E90u;
    ctx->downcount -= 9;
    // 80061E90: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061E94:
    ctx->pc = 0x80061E94u;
    // 80061E94: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80061E98:
    ctx->pc = 0x80061E98u;
    // 80061E98: addi    r4, r3, 26160
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(26160);

label_80061E9C:
    ctx->pc = 0x80061E9Cu;
    // 80061E9C: li      r5, 176
    ctx->gpr[5] = (u32)(s32)(176);

label_80061EA0:
    ctx->pc = 0x80061EA0u;
    // 80061EA0: stw     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061EA4:
    ctx->pc = 0x80061EA4u;
    // 80061EA4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80061EA8:
    ctx->pc = 0x80061EA8u;
    // 80061EA8: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061EAC:
    ctx->pc = 0x80061EACu;
    // 80061EAC: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061EB0:
    ctx->pc = 0x80061EB0u;
    // 80061EB0: bl      0x80055CEC
    {
            ctx->lr = 0x80061EB4u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_80061EB4:
    ctx->pc = 0x80061EB4u;
    ctx->downcount -= 8;
    // 80061EB4: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061EB8:
    ctx->pc = 0x80061EB8u;
    // 80061EB8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80061EBC:
    ctx->pc = 0x80061EBCu;
    // 80061EBC: addi    r4, r3, 26160
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(26160);

label_80061EC0:
    ctx->pc = 0x80061EC0u;
    // 80061EC0: li      r5, 177
    ctx->gpr[5] = (u32)(s32)(177);

label_80061EC4:
    ctx->pc = 0x80061EC4u;
    // 80061EC4: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061EC8:
    ctx->pc = 0x80061EC8u;
    // 80061EC8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80061ECC:
    ctx->pc = 0x80061ECCu;
    // 80061ECC: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061ED0:
    ctx->pc = 0x80061ED0u;
    // 80061ED0: bl      0x80055CEC
    {
            ctx->lr = 0x80061ED4u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_80061ED4:
    ctx->pc = 0x80061ED4u;
    ctx->downcount -= 6;
    // 80061ED4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061ED8:
    ctx->pc = 0x80061ED8u;
    // 80061ED8: stw     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061EDC:
    ctx->pc = 0x80061EDCu;
    // 80061EDC: addi    r26, r4, 26160
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061EE0:
    ctx->pc = 0x80061EE0u;
    // 80061EE0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80061EE4:
    ctx->pc = 0x80061EE4u;
    // 80061EE4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80061EE8:
    ctx->pc = 0x80061EE8u;
    // 80061EE8: b       0x80061F14
    {
            goto label_80061F14;
    }

label_80061EEC:
    ctx->pc = 0x80061EECu;
    ctx->downcount -= 6;
    // 80061EEC: lwz     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061EF0:
    // 80061EF0: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80061EF4:
    // 80061EF4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80061EF8:
    // 80061EF8: li      r6, 179
    ctx->gpr[6] = (u32)(s32)(179);

label_80061EFC:
    // 80061EFC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80061F00:
    // 80061F00: bl      0x80055D58
    {
            ctx->lr = 0x80061F04u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_80061F04:
    ctx->pc = 0x80061F04u;
    ctx->downcount -= 4;
    // 80061F04: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061F08:
    // 80061F08: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80061F0C:
    ctx->pc = 0x80061F0Cu;
    // 80061F0C: stwx    r3, r4, r27
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[27];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061F10:
    // 80061F10: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_80061F14:
    ctx->pc = 0x80061F14u;
    ctx->downcount -= 3;
    // 80061F14: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061F18:
    // 80061F18: cmpw    r24, r0
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

label_80061F1C:
    // 80061F1C: bc    12, 0, 0x80061EEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061EECu;
                return;
            }
            goto label_80061EEC;
        }
    }

label_80061F20:
    ctx->pc = 0x80061F20u;
    ctx->downcount -= 10;
    // 80061F20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80061F24:
    ctx->pc = 0x80061F24u;
    // 80061F24: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80061F28:
    ctx->pc = 0x80061F28u;
    // 80061F28: stw     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061F2C:
    ctx->pc = 0x80061F2Cu;
    // 80061F2C: addi    r5, r3, 26160
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26160);

label_80061F30:
    ctx->pc = 0x80061F30u;
    // 80061F30: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80061F34:
    ctx->pc = 0x80061F34u;
    // 80061F34: li      r6, 187
    ctx->gpr[6] = (u32)(s32)(187);

label_80061F38:
    ctx->pc = 0x80061F38u;
    // 80061F38: stw     r0, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061F3C:
    ctx->pc = 0x80061F3Cu;
    // 80061F3C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80061F40:
    ctx->pc = 0x80061F40u;
    // 80061F40: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061F44:
    ctx->pc = 0x80061F44u;
    // 80061F44: bl      0x80055D58
    {
            ctx->lr = 0x80061F48u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_80061F48:
    ctx->pc = 0x80061F48u;
    ctx->downcount -= 6;
    // 80061F48: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_80061F4C:
    ctx->pc = 0x80061F4Cu;
    // 80061F4C: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061F50:
    ctx->pc = 0x80061F50u;
    // 80061F50: addi    r26, r4, 32556
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(32556);

label_80061F54:
    ctx->pc = 0x80061F54u;
    // 80061F54: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80061F58:
    ctx->pc = 0x80061F58u;
    // 80061F58: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80061F5C:
    ctx->pc = 0x80061F5Cu;
    // 80061F5C: b       0x80061FA4
    {
            goto label_80061FA4;
    }

label_80061F60:
    ctx->downcount -= 14;
    // 80061F60: addi    r0, r29, 32
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(32);

label_80061F64:
    // 80061F64: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80061F68:
    ctx->pc = 0x80061F68u;
    // 80061F68: lwzx    r4, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061F6C:
    ctx->pc = 0x80061F6Cu;
    // 80061F6C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061F70:
    // 80061F70: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061F74:
    // 80061F74: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80061F78:
    ctx->pc = 0x80061F78u;
    // 80061F78: lwz     r0, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061F7C:
    ctx->pc = 0x80061F7Cu;
    // 80061F7C: lwz     r5, 544(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(544);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80061F80:
    // 80061F80: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80061F84:
    ctx->pc = 0x80061F84u;
    // 80061F84: lwzx    r6, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80061F88:
    ctx->pc = 0x80061F88u;
    // 80061F88: lwz     r12, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80061F8C:
    ctx->pc = 0x80061F8Cu;
    // 80061F8C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80061F90:
    ctx->pc = 0x80061F90u;
    // 80061F90: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80061F94u;
            ctx->pc = target;
            return;
        }
    }

label_80061F94:
    ctx->pc = 0x80061F94u;
    ctx->downcount -= 4;
    // 80061F94: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80061F98:
    // 80061F98: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80061F9C:
    ctx->pc = 0x80061F9Cu;
    // 80061F9C: stwx    r3, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80061FA0:
    // 80061FA0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80061FA4:
    ctx->pc = 0x80061FA4u;
    ctx->downcount -= 3;
    // 80061FA4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061FA8:
    // 80061FA8: cmpw    r24, r0
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

label_80061FAC:
    // 80061FAC: bc    12, 0, 0x80061F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80061F60u;
                return;
            }
            goto label_80061F60;
        }
    }

label_80061FB0:
    ctx->pc = 0x80061FB0u;
    ctx->downcount -= 17;
    // 80061FB0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80061FB4:
    ctx->pc = 0x80061FB4u;
    // 80061FB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80061FB8:
    ctx->pc = 0x80061FB8u;
    // 80061FB8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80061FBC:
    ctx->pc = 0x80061FBCu;
    // 80061FBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80061FC0:
    ctx->pc = 0x80061FC0u;
    // 80061FC0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80061FC4:
    ctx->pc = 0x80061FC4u;
    // 80061FC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80061FC8:
    ctx->pc = 0x80061FC8u;
    ctx->downcount -= 6;
    // 80061FC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80061FCC:
    ctx->pc = 0x80061FCCu;
    // 80061FCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80061FD0:
    ctx->pc = 0x80061FD0u;
    // 80061FD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80061FD4:
    ctx->pc = 0x80061FD4u;
    // 80061FD4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80061FD8:
    ctx->pc = 0x80061FD8u;
    // 80061FD8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80061FDC:
    ctx->pc = 0x80061FDCu;
    // 80061FDC: bl      0x80062024
    {
            ctx->lr = 0x80061FE0u;
            goto label_80062024;
    }

label_80061FE0:
    ctx->pc = 0x80061FE0u;
    ctx->downcount -= 3;
    // 80061FE0: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80061FE4:
    ctx->pc = 0x80061FE4u;
    // 80061FE4: cmplwi  r3, 0x0000
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

label_80061FE8:
    ctx->pc = 0x80061FE8u;
    // 80061FE8: bc    12, 2, 0x80061FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80061FFC;
        }
    }

label_80061FEC:
    ctx->pc = 0x80061FECu;
    ctx->downcount -= 4;
    // 80061FEC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80061FF0:
    ctx->pc = 0x80061FF0u;
    // 80061FF0: li      r5, 143
    ctx->gpr[5] = (u32)(s32)(143);

label_80061FF4:
    ctx->pc = 0x80061FF4u;
    // 80061FF4: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80061FF8:
    ctx->pc = 0x80061FF8u;
    // 80061FF8: bl      0x80055E80
    {
            ctx->lr = 0x80061FFCu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_80061FFC:
    ctx->pc = 0x80061FFCu;
    ctx->downcount -= 4;
    // 80061FFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80062000:
    ctx->pc = 0x80062000u;
    // 80062000: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80062004:
    ctx->pc = 0x80062004u;
    // 80062004: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_80062008:
    ctx->pc = 0x80062008u;
    // 80062008: bl      0x800050B4
    {
            ctx->lr = 0x8006200Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8006200C:
    ctx->pc = 0x8006200Cu;
    ctx->downcount -= 7;
    // 8006200C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062010:
    ctx->pc = 0x80062010u;
    // 80062010: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80062014:
    ctx->pc = 0x80062014u;
    // 80062014: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80062018:
    ctx->pc = 0x80062018u;
    // 80062018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8006201C:
    ctx->pc = 0x8006201Cu;
    // 8006201C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80062020:
    ctx->pc = 0x80062020u;
    // 80062020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80062024:
    ctx->pc = 0x80062024u;
    ctx->downcount -= 19;
    // 80062024: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80062028:
    ctx->pc = 0x80062028u;
    // 80062028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8006202C:
    ctx->pc = 0x8006202Cu;
    // 8006202C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80062030:
    ctx->pc = 0x80062030u;
    // 80062030: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80062034:
    ctx->pc = 0x80062034u;
    // 80062034: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80062038:
    ctx->pc = 0x80062038u;
    // 80062038: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8006203C:
    ctx->pc = 0x8006203Cu;
    // 8006203C: addi    r31, r3, 26160
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(26160);

label_80062040:
    ctx->pc = 0x80062040u;
    // 80062040: lwz     r30, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80062044:
    ctx->pc = 0x80062044u;
    // 80062044: b       0x80062080
    {
            goto label_80062080;
    }

label_80062048:
    ctx->pc = 0x80062048u;
    ctx->downcount -= 5;
    // 80062048: lwz     r29, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8006204C:
    // 8006204C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80062050:
    ctx->pc = 0x80062050u;
    // 80062050: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80062054:
    // 80062054: li      r5, 123
    ctx->gpr[5] = (u32)(s32)(123);

label_80062058:
    // 80062058: bl      0x80055E80
    {
            ctx->lr = 0x8006205Cu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8006205C:
    ctx->downcount -= 4;
    // 8006205C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80062060:
    // 80062060: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80062064:
    // 80062064: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80062068:
    // 80062068: bl      0x800050B4
    {
            ctx->lr = 0x8006206Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8006206C:
    ctx->downcount -= 4;
    // 8006206C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80062070:
    // 80062070: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80062074:
    // 80062074: li      r5, 125
    ctx->gpr[5] = (u32)(s32)(125);

label_80062078:
    // 80062078: bl      0x80055E80
    {
            ctx->lr = 0x8006207Cu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8006207C:
    ctx->downcount -= 1;
    // 8006207C: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80062080:
    ctx->downcount -= 2;
    // 80062080: cmplwi  r30, 0x0000
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

label_80062084:
    // 80062084: bc    4, 2, 0x80062048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80062048u;
                return;
            }
            goto label_80062048;
        }
    }

label_80062088:
    ctx->pc = 0x80062088u;
    ctx->downcount -= 3;
    // 80062088: lwz     r4, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8006208C:
    ctx->pc = 0x8006208Cu;
    // 8006208C: cmpwi   r4, 0
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

label_80062090:
    ctx->pc = 0x80062090u;
    // 80062090: bc    12, 2, 0x800620D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800620D0;
        }
    }

label_80062094:
    ctx->pc = 0x80062094u;
    ctx->downcount -= 8;
    // 80062094: lwz     r0, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062098:
    ctx->pc = 0x80062098u;
    // 80062098: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8006209C:
    ctx->pc = 0x8006209Cu;
    // 8006209C: addi    r5, r3, 26160
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26160);

label_800620A0:
    ctx->pc = 0x800620A0u;
    // 800620A0: lwz     r3, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800620A4:
    ctx->pc = 0x800620A4u;
    // 800620A4: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_800620A8:
    ctx->pc = 0x800620A8u;
    // 800620A8: li      r6, 130
    ctx->gpr[6] = (u32)(s32)(130);

label_800620AC:
    ctx->pc = 0x800620ACu;
    // 800620AC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_800620B0:
    ctx->pc = 0x800620B0u;
    // 800620B0: bl      0x80055DB0
    {
            ctx->lr = 0x800620B4u;
            ctx->pc = 0x80055DB0u;
            return;
    }

label_800620B4:
    ctx->pc = 0x800620B4u;
    ctx->downcount -= 7;
    // 800620B4: stw     r3, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800620B8:
    ctx->pc = 0x800620B8u;
    // 800620B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800620BC:
    ctx->pc = 0x800620BCu;
    // 800620BC: lwz     r4, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800620C0:
    ctx->pc = 0x800620C0u;
    // 800620C0: lwz     r3, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800620C4:
    ctx->pc = 0x800620C4u;
    // 800620C4: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800620C8:
    ctx->pc = 0x800620C8u;
    // 800620C8: stw     r3, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800620CC:
    ctx->pc = 0x800620CCu;
    // 800620CC: stw     r0, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800620D0:
    ctx->pc = 0x800620D0u;
    ctx->downcount -= 19;
    // 800620D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800620D4:
    ctx->pc = 0x800620D4u;
    // 800620D4: stw     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800620D8:
    ctx->pc = 0x800620D8u;
    // 800620D8: stw     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800620DC:
    ctx->pc = 0x800620DCu;
    // 800620DC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800620E0:
    ctx->pc = 0x800620E0u;
    // 800620E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800620E4:
    ctx->pc = 0x800620E4u;
    // 800620E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800620E8:
    ctx->pc = 0x800620E8u;
    // 800620E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800620EC:
    ctx->pc = 0x800620ECu;
    // 800620EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_800620F0:
    ctx->pc = 0x800620F0u;
    ctx->downcount -= 22;
    // 800620F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800620F4:
    ctx->pc = 0x800620F4u;
    // 800620F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800620F8:
    ctx->pc = 0x800620F8u;
    // 800620F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800620FC:
    ctx->pc = 0x800620FCu;
    // 800620FC: addi    r0, r4, 7
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(7);

label_80062100:
    ctx->pc = 0x80062100u;
    // 80062100: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80062104:
    ctx->pc = 0x80062104u;
    // 80062104: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80062108:
    ctx->pc = 0x80062108u;
    // 80062108: rlwinm r30, r0, 0, 0, 28
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF8u;
    }

label_8006210C:
    ctx->pc = 0x8006210Cu;
    // 8006210C: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80062110:
    ctx->pc = 0x80062110u;
    // 80062110: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062114:
    ctx->pc = 0x80062114u;
    // 80062114: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80062118:
    ctx->pc = 0x80062118u;
    // 80062118: cmpw    r3, r0
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

label_8006211C:
    ctx->pc = 0x8006211Cu;
    // 8006211C: bc    4, 1, 0x80062190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80062190;
        }
    }

label_80062120:
    ctx->pc = 0x80062120u;
    ctx->downcount -= 3;
    // 80062120: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062124:
    ctx->pc = 0x80062124u;
    // 80062124: cmplwi  r0, 0x0000
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

label_80062128:
    ctx->pc = 0x80062128u;
    // 80062128: bc    12, 2, 0x80062168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80062168;
        }
    }

label_8006212C:
    ctx->pc = 0x8006212Cu;
    ctx->downcount -= 6;
    // 8006212C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80062130:
    ctx->pc = 0x80062130u;
    // 80062130: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80062134:
    ctx->pc = 0x80062134u;
    // 80062134: addi    r4, r4, 26160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26160);

label_80062138:
    ctx->pc = 0x80062138u;
    // 80062138: li      r5, 99
    ctx->gpr[5] = (u32)(s32)(99);

label_8006213C:
    ctx->pc = 0x8006213Cu;
    // 8006213C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80062140:
    ctx->pc = 0x80062140u;
    // 80062140: bl      0x80055CEC
    {
            ctx->lr = 0x80062144u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_80062144:
    ctx->pc = 0x80062144u;
    ctx->downcount -= 9;
    // 80062144: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80062148:
    ctx->pc = 0x80062148u;
    // 80062148: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8006214C:
    ctx->pc = 0x8006214Cu;
    // 8006214C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80062150:
    ctx->pc = 0x80062150u;
    // 80062150: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80062154:
    ctx->pc = 0x80062154u;
    // 80062154: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062158:
    ctx->pc = 0x80062158u;
    // 80062158: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8006215C:
    ctx->pc = 0x8006215Cu;
    // 8006215C: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80062160:
    ctx->pc = 0x80062160u;
    // 80062160: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80062164:
    ctx->pc = 0x80062164u;
    // 80062164: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80062168:
    ctx->pc = 0x80062168u;
    ctx->downcount -= 7;
    // 80062168: stw     r30, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8006216C:
    ctx->pc = 0x8006216Cu;
    // 8006216C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80062170:
    ctx->pc = 0x80062170u;
    // 80062170: addi    r4, r3, 26160
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(26160);

label_80062174:
    ctx->pc = 0x80062174u;
    // 80062174: li      r5, 107
    ctx->gpr[5] = (u32)(s32)(107);

label_80062178:
    ctx->pc = 0x80062178u;
    // 80062178: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8006217C:
    ctx->pc = 0x8006217Cu;
    // 8006217C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80062180:
    ctx->pc = 0x80062180u;
    // 80062180: bl      0x80055CEC
    {
            ctx->lr = 0x80062184u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_80062184:
    ctx->pc = 0x80062184u;
    ctx->downcount -= 3;
    // 80062184: stw     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80062188:
    ctx->pc = 0x80062188u;
    // 80062188: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8006218C:
    ctx->pc = 0x8006218Cu;
    // 8006218C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80062190:
    ctx->pc = 0x80062190u;
    ctx->downcount -= 21;
    // 80062190: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80062194:
    ctx->pc = 0x80062194u;
    // 80062194: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80062198:
    ctx->pc = 0x80062198u;
    // 80062198: add   r0, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8006219C:
    ctx->pc = 0x8006219Cu;
    // 8006219C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800621A0:
    ctx->pc = 0x800621A0u;
    // 800621A0: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800621A4:
    ctx->pc = 0x800621A4u;
    // 800621A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800621A8:
    ctx->pc = 0x800621A8u;
    // 800621A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800621AC:
    ctx->pc = 0x800621ACu;
    // 800621AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800621B0:
    ctx->pc = 0x800621B0u;
    // 800621B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800621B4:
    ctx->pc = 0x800621B4u;
    // 800621B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_800621B8:
    ctx->pc = 0x800621B8u;
    ctx->downcount -= 20;
    // 800621B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800621BC:
    ctx->pc = 0x800621BCu;
    // 800621BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800621C0:
    ctx->pc = 0x800621C0u;
    // 800621C0: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_800621C4:
    ctx->pc = 0x800621C4u;
    // 800621C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800621C8:
    ctx->pc = 0x800621C8u;
    // 800621C8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800621CC:
    ctx->pc = 0x800621CCu;
    // 800621CC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800621D0:
    ctx->pc = 0x800621D0u;
    // 800621D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800621D4:
    ctx->pc = 0x800621D4u;
    // 800621D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800621D8:
    ctx->pc = 0x800621D8u;
    // 800621D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800621DC:
    ctx->pc = 0x800621DCu;
    // 800621DC: bl      0x800050B4
    {
            ctx->lr = 0x800621E0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800621E0:
    ctx->pc = 0x800621E0u;
    ctx->downcount -= 21;
    // 800621E0: stw     r30, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800621E4:
    ctx->pc = 0x800621E4u;
    // 800621E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800621E8:
    ctx->pc = 0x800621E8u;
    // 800621E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800621EC:
    ctx->pc = 0x800621ECu;
    // 800621EC: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800621F0:
    ctx->pc = 0x800621F0u;
    // 800621F0: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800621F4:
    ctx->pc = 0x800621F4u;
    // 800621F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800621F8:
    ctx->pc = 0x800621F8u;
    // 800621F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800621FC:
    ctx->pc = 0x800621FCu;
    // 800621FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80062200:
    ctx->pc = 0x80062200u;
    // 80062200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80062204:
    ctx->pc = 0x80062204u;
    // 80062204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80062208:
    ctx->pc = 0x80062208u;
    ctx->downcount -= 3;
    // 80062208: cmplwi  r3, 0x0000
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

label_8006220C:
    ctx->pc = 0x8006220Cu;
    // 8006220C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80062210:
    ctx->pc = 0x80062210u;
    // 80062210: bc    12, 2, 0x80062224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80062224;
        }
    }

label_80062214:
    ctx->pc = 0x80062214u;
    ctx->downcount -= 2;
    // 80062214: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_80062218:
    ctx->pc = 0x80062218u;
    // 80062218: b       0x80062224
    {
            goto label_80062224;
    }

label_8006221C:
    loop_8006221C(ctx);
    if (ctx->pc == 0x8006222Cu) goto label_8006222C;
    return;
label_80062220:
    // 80062220: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80062224:
    ctx->downcount -= 2;
    // 80062224: cmplwi  r3, 0x0000
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

label_80062228:
    // 80062228: bc    4, 2, 0x8006221C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8006221Cu;
                return;
            }
            goto label_8006221C;
        }
    }

label_8006222C:
    ctx->pc = 0x8006222Cu;
    ctx->downcount -= 2;
    // 8006222C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80062230:
    ctx->pc = 0x80062230u;
    // 80062230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800615E0;
        }
    }

label_80062234:
    ctx->pc = 0x80062234u;
    // 80062234: .long   0x00000000
    // embedded data

label_80062238:
    ctx->pc = 0x80062238u;
    // 80062238: .long   0x00000000
    // embedded data

label_8006223C:
    ctx->pc = 0x8006223Cu;
    // 8006223C: .long   0x00000000
    // embedded data

    ctx->pc = 0x80062240u;
    return;
return_dispatch_800615E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80061BC0u: goto label_80061BC0;
    case 0x80061BE8u: goto label_80061BE8;
    case 0x80061C04u: goto label_80061C04;
    case 0x80061C64u: goto label_80061C64;
    case 0x80061C9Cu: goto label_80061C9C;
    case 0x80061CB0u: goto label_80061CB0;
    case 0x80061CC0u: goto label_80061CC0;
    case 0x80061CECu: goto label_80061CEC;
    case 0x80061CF4u: goto label_80061CF4;
    case 0x80061DB4u: goto label_80061DB4;
    case 0x80061DD0u: goto label_80061DD0;
    case 0x80061DE4u: goto label_80061DE4;
    case 0x80061DFCu: goto label_80061DFC;
    case 0x80061E14u: goto label_80061E14;
    case 0x80061E40u: goto label_80061E40;
    case 0x80061E6Cu: goto label_80061E6C;
    case 0x80061E74u: goto label_80061E74;
    case 0x80061EB4u: goto label_80061EB4;
    case 0x80061ED4u: goto label_80061ED4;
    case 0x80061F04u: goto label_80061F04;
    case 0x80061F48u: goto label_80061F48;
    case 0x80061F94u: goto label_80061F94;
    case 0x80061FE0u: goto label_80061FE0;
    case 0x80061FFCu: goto label_80061FFC;
    case 0x8006200Cu: goto label_8006200C;
    case 0x8006205Cu: goto label_8006205C;
    case 0x8006206Cu: goto label_8006206C;
    case 0x8006207Cu: goto label_8006207C;
    case 0x800620B4u: goto label_800620B4;
    case 0x80062144u: goto label_80062144;
    case 0x80062184u: goto label_80062184;
    case 0x800621E0u: goto label_800621E0;
    default: return;
    }
}

