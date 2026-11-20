// DolRecomp output
#include "../generated.h"

static void loop_7F34849C(CPUState* ctx) {
label_7F34849C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F34849Cu;
    // 7F34849C: lwz     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3484A0u;
    // 7F3484A0: lwzu     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

    ctx->pc = 0x7F3484A4u;
    // 7F3484A4: stw     r5, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F3484A8u;
    // 7F3484A8: stwu     r4, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[9] = ea;
    }

    // 7F3484AC: bc    16, 0, 0x7F34849C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34849Cu;
                return;
            }
            goto label_7F34849C;
        }
    }

    ctx->pc = 0x7F3484B0u;
}

static void loop_7F348CC8(CPUState* ctx) {
label_7F348CC8:
    ctx->downcount -= 3;
    ctx->pc = 0x7F348CC8u;
    // 7F348CC8: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F348CCC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F348CD0: bc    16, 0, 0x7F348CC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348CC8u;
                return;
            }
            goto label_7F348CC8;
        }
    }

    ctx->pc = 0x7F348CD4u;
}

static void loop_7F34A9EC(CPUState* ctx) {
label_7F34A9EC:
    ctx->downcount -= 2;
    ctx->pc = 0x7F34A9ECu;
    // 7F34A9EC: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F34A9F0: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

    // 7F34A9F4: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 7F34A9F8: bc    4, 0, 0x7F34A9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A9ECu;
                return;
            }
            goto label_7F34A9EC;
        }
    }

    ctx->pc = 0x7F34A9FCu;
}

static void loop_7F34B900(CPUState* ctx) {
label_7F34B900:
    ctx->downcount -= 5;
    ctx->pc = 0x7F34B900u;
    // 7F34B900: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F34B904u;
    // 7F34B904: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F34B908u;
    // 7F34B908: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F34B90Cu;
    // 7F34B90C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F34B910: bc    16, 0, 0x7F34B900
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B900u;
                return;
            }
            goto label_7F34B900;
        }
    }

    ctx->pc = 0x7F34B914u;
}

static void loop_7F34BBB8(CPUState* ctx) {
label_7F34BBB8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F34BBB8u;
    // 7F34BBB8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F34BBBCu;
    // 7F34BBBC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F34BBC0u;
    // 7F34BBC0: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F34BBC4u;
    // 7F34BBC4: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F34BBC8: bc    16, 0, 0x7F34BBB8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BBB8u;
                return;
            }
            goto label_7F34BBB8;
        }
    }

    ctx->pc = 0x7F34BBCCu;
}

static void loop_7F34BC98(CPUState* ctx) {
label_7F34BC98:
    ctx->downcount -= 5;
    ctx->pc = 0x7F34BC98u;
    // 7F34BC98: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F34BC9Cu;
    // 7F34BC9C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F34BCA0u;
    // 7F34BCA0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F34BCA4u;
    // 7F34BCA4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F34BCA8: bc    16, 0, 0x7F34BC98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BC98u;
                return;
            }
            goto label_7F34BC98;
        }
    }

    ctx->pc = 0x7F34BCACu;
}

void func_7F3480EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3480ECu: goto label_7F3480EC;
    case 0x7F3480F0u: goto label_7F3480F0;
    case 0x7F3480F4u: goto label_7F3480F4;
    case 0x7F3480F8u: goto label_7F3480F8;
    case 0x7F3480FCu: goto label_7F3480FC;
    case 0x7F348100u: goto label_7F348100;
    case 0x7F348104u: goto label_7F348104;
    case 0x7F348108u: goto label_7F348108;
    case 0x7F34810Cu: goto label_7F34810C;
    case 0x7F348110u: goto label_7F348110;
    case 0x7F348114u: goto label_7F348114;
    case 0x7F348118u: goto label_7F348118;
    case 0x7F34811Cu: goto label_7F34811C;
    case 0x7F348120u: goto label_7F348120;
    case 0x7F348124u: goto label_7F348124;
    case 0x7F348128u: goto label_7F348128;
    case 0x7F34812Cu: goto label_7F34812C;
    case 0x7F348130u: goto label_7F348130;
    case 0x7F348134u: goto label_7F348134;
    case 0x7F348138u: goto label_7F348138;
    case 0x7F34813Cu: goto label_7F34813C;
    case 0x7F348140u: goto label_7F348140;
    case 0x7F348144u: goto label_7F348144;
    case 0x7F348148u: goto label_7F348148;
    case 0x7F34814Cu: goto label_7F34814C;
    case 0x7F348150u: goto label_7F348150;
    case 0x7F348154u: goto label_7F348154;
    case 0x7F348158u: goto label_7F348158;
    case 0x7F34815Cu: goto label_7F34815C;
    case 0x7F348160u: goto label_7F348160;
    case 0x7F348164u: goto label_7F348164;
    case 0x7F348168u: goto label_7F348168;
    case 0x7F34816Cu: goto label_7F34816C;
    case 0x7F348170u: goto label_7F348170;
    case 0x7F348174u: goto label_7F348174;
    case 0x7F348178u: goto label_7F348178;
    case 0x7F34817Cu: goto label_7F34817C;
    case 0x7F348180u: goto label_7F348180;
    case 0x7F348184u: goto label_7F348184;
    case 0x7F348188u: goto label_7F348188;
    case 0x7F34818Cu: goto label_7F34818C;
    case 0x7F348190u: goto label_7F348190;
    case 0x7F348194u: goto label_7F348194;
    case 0x7F348198u: goto label_7F348198;
    case 0x7F34819Cu: goto label_7F34819C;
    case 0x7F3481A0u: goto label_7F3481A0;
    case 0x7F3481A4u: goto label_7F3481A4;
    case 0x7F3481A8u: goto label_7F3481A8;
    case 0x7F3481ACu: goto label_7F3481AC;
    case 0x7F3481B0u: goto label_7F3481B0;
    case 0x7F3481B4u: goto label_7F3481B4;
    case 0x7F3481B8u: goto label_7F3481B8;
    case 0x7F3481BCu: goto label_7F3481BC;
    case 0x7F3481C0u: goto label_7F3481C0;
    case 0x7F3481C4u: goto label_7F3481C4;
    case 0x7F3481C8u: goto label_7F3481C8;
    case 0x7F3481CCu: goto label_7F3481CC;
    case 0x7F3481D0u: goto label_7F3481D0;
    case 0x7F3481D4u: goto label_7F3481D4;
    case 0x7F3481D8u: goto label_7F3481D8;
    case 0x7F3481DCu: goto label_7F3481DC;
    case 0x7F3481E0u: goto label_7F3481E0;
    case 0x7F3481E4u: goto label_7F3481E4;
    case 0x7F3481E8u: goto label_7F3481E8;
    case 0x7F3481ECu: goto label_7F3481EC;
    case 0x7F3481F0u: goto label_7F3481F0;
    case 0x7F3481F4u: goto label_7F3481F4;
    case 0x7F3481F8u: goto label_7F3481F8;
    case 0x7F3481FCu: goto label_7F3481FC;
    case 0x7F348200u: goto label_7F348200;
    case 0x7F348204u: goto label_7F348204;
    case 0x7F348208u: goto label_7F348208;
    case 0x7F34820Cu: goto label_7F34820C;
    case 0x7F348210u: goto label_7F348210;
    case 0x7F348214u: goto label_7F348214;
    case 0x7F348218u: goto label_7F348218;
    case 0x7F34821Cu: goto label_7F34821C;
    case 0x7F348220u: goto label_7F348220;
    case 0x7F348224u: goto label_7F348224;
    case 0x7F348228u: goto label_7F348228;
    case 0x7F34822Cu: goto label_7F34822C;
    case 0x7F348230u: goto label_7F348230;
    case 0x7F348234u: goto label_7F348234;
    case 0x7F348238u: goto label_7F348238;
    case 0x7F34823Cu: goto label_7F34823C;
    case 0x7F348240u: goto label_7F348240;
    case 0x7F348244u: goto label_7F348244;
    case 0x7F348248u: goto label_7F348248;
    case 0x7F34824Cu: goto label_7F34824C;
    case 0x7F348250u: goto label_7F348250;
    case 0x7F348254u: goto label_7F348254;
    case 0x7F348258u: goto label_7F348258;
    case 0x7F34825Cu: goto label_7F34825C;
    case 0x7F348260u: goto label_7F348260;
    case 0x7F348264u: goto label_7F348264;
    case 0x7F348268u: goto label_7F348268;
    case 0x7F34826Cu: goto label_7F34826C;
    case 0x7F348270u: goto label_7F348270;
    case 0x7F348274u: goto label_7F348274;
    case 0x7F348278u: goto label_7F348278;
    case 0x7F34827Cu: goto label_7F34827C;
    case 0x7F348280u: goto label_7F348280;
    case 0x7F348284u: goto label_7F348284;
    case 0x7F348288u: goto label_7F348288;
    case 0x7F34828Cu: goto label_7F34828C;
    case 0x7F348290u: goto label_7F348290;
    case 0x7F348294u: goto label_7F348294;
    case 0x7F348298u: goto label_7F348298;
    case 0x7F34829Cu: goto label_7F34829C;
    case 0x7F3482A0u: goto label_7F3482A0;
    case 0x7F3482A4u: goto label_7F3482A4;
    case 0x7F3482A8u: goto label_7F3482A8;
    case 0x7F3482ACu: goto label_7F3482AC;
    case 0x7F3482B0u: goto label_7F3482B0;
    case 0x7F3482B4u: goto label_7F3482B4;
    case 0x7F3482B8u: goto label_7F3482B8;
    case 0x7F3482BCu: goto label_7F3482BC;
    case 0x7F3482C0u: goto label_7F3482C0;
    case 0x7F3482C4u: goto label_7F3482C4;
    case 0x7F3482C8u: goto label_7F3482C8;
    case 0x7F3482CCu: goto label_7F3482CC;
    case 0x7F3482D0u: goto label_7F3482D0;
    case 0x7F3482D4u: goto label_7F3482D4;
    case 0x7F3482D8u: goto label_7F3482D8;
    case 0x7F3482DCu: goto label_7F3482DC;
    case 0x7F3482E0u: goto label_7F3482E0;
    case 0x7F3482E4u: goto label_7F3482E4;
    case 0x7F3482E8u: goto label_7F3482E8;
    case 0x7F3482ECu: goto label_7F3482EC;
    case 0x7F3482F0u: goto label_7F3482F0;
    case 0x7F3482F4u: goto label_7F3482F4;
    case 0x7F3482F8u: goto label_7F3482F8;
    case 0x7F3482FCu: goto label_7F3482FC;
    case 0x7F348300u: goto label_7F348300;
    case 0x7F348304u: goto label_7F348304;
    case 0x7F348308u: goto label_7F348308;
    case 0x7F34830Cu: goto label_7F34830C;
    case 0x7F348310u: goto label_7F348310;
    case 0x7F348314u: goto label_7F348314;
    case 0x7F348318u: goto label_7F348318;
    case 0x7F34831Cu: goto label_7F34831C;
    case 0x7F348320u: goto label_7F348320;
    case 0x7F348324u: goto label_7F348324;
    case 0x7F348328u: goto label_7F348328;
    case 0x7F34832Cu: goto label_7F34832C;
    case 0x7F348330u: goto label_7F348330;
    case 0x7F348334u: goto label_7F348334;
    case 0x7F348338u: goto label_7F348338;
    case 0x7F34833Cu: goto label_7F34833C;
    case 0x7F348340u: goto label_7F348340;
    case 0x7F348344u: goto label_7F348344;
    case 0x7F348348u: goto label_7F348348;
    case 0x7F34834Cu: goto label_7F34834C;
    case 0x7F348350u: goto label_7F348350;
    case 0x7F348354u: goto label_7F348354;
    case 0x7F348358u: goto label_7F348358;
    case 0x7F34835Cu: goto label_7F34835C;
    case 0x7F348360u: goto label_7F348360;
    case 0x7F348364u: goto label_7F348364;
    case 0x7F348368u: goto label_7F348368;
    case 0x7F34836Cu: goto label_7F34836C;
    case 0x7F348370u: goto label_7F348370;
    case 0x7F348374u: goto label_7F348374;
    case 0x7F348378u: goto label_7F348378;
    case 0x7F34837Cu: goto label_7F34837C;
    case 0x7F348380u: goto label_7F348380;
    case 0x7F348384u: goto label_7F348384;
    case 0x7F348388u: goto label_7F348388;
    case 0x7F34838Cu: goto label_7F34838C;
    case 0x7F348390u: goto label_7F348390;
    case 0x7F348394u: goto label_7F348394;
    case 0x7F348398u: goto label_7F348398;
    case 0x7F34839Cu: goto label_7F34839C;
    case 0x7F3483A0u: goto label_7F3483A0;
    case 0x7F3483A4u: goto label_7F3483A4;
    case 0x7F3483A8u: goto label_7F3483A8;
    case 0x7F3483ACu: goto label_7F3483AC;
    case 0x7F3483B0u: goto label_7F3483B0;
    case 0x7F3483B4u: goto label_7F3483B4;
    case 0x7F3483B8u: goto label_7F3483B8;
    case 0x7F3483BCu: goto label_7F3483BC;
    case 0x7F3483C0u: goto label_7F3483C0;
    case 0x7F3483C4u: goto label_7F3483C4;
    case 0x7F3483C8u: goto label_7F3483C8;
    case 0x7F3483CCu: goto label_7F3483CC;
    case 0x7F3483D0u: goto label_7F3483D0;
    case 0x7F3483D4u: goto label_7F3483D4;
    case 0x7F3483D8u: goto label_7F3483D8;
    case 0x7F3483DCu: goto label_7F3483DC;
    case 0x7F3483E0u: goto label_7F3483E0;
    case 0x7F3483E4u: goto label_7F3483E4;
    case 0x7F3483E8u: goto label_7F3483E8;
    case 0x7F3483ECu: goto label_7F3483EC;
    case 0x7F3483F0u: goto label_7F3483F0;
    case 0x7F3483F4u: goto label_7F3483F4;
    case 0x7F3483F8u: goto label_7F3483F8;
    case 0x7F3483FCu: goto label_7F3483FC;
    case 0x7F348400u: goto label_7F348400;
    case 0x7F348404u: goto label_7F348404;
    case 0x7F348408u: goto label_7F348408;
    case 0x7F34840Cu: goto label_7F34840C;
    case 0x7F348410u: goto label_7F348410;
    case 0x7F348414u: goto label_7F348414;
    case 0x7F348418u: goto label_7F348418;
    case 0x7F34841Cu: goto label_7F34841C;
    case 0x7F348420u: goto label_7F348420;
    case 0x7F348424u: goto label_7F348424;
    case 0x7F348428u: goto label_7F348428;
    case 0x7F34842Cu: goto label_7F34842C;
    case 0x7F348430u: goto label_7F348430;
    case 0x7F348434u: goto label_7F348434;
    case 0x7F348438u: goto label_7F348438;
    case 0x7F34843Cu: goto label_7F34843C;
    case 0x7F348440u: goto label_7F348440;
    case 0x7F348444u: goto label_7F348444;
    case 0x7F348448u: goto label_7F348448;
    case 0x7F34844Cu: goto label_7F34844C;
    case 0x7F348450u: goto label_7F348450;
    case 0x7F348454u: goto label_7F348454;
    case 0x7F348458u: goto label_7F348458;
    case 0x7F34845Cu: goto label_7F34845C;
    case 0x7F348460u: goto label_7F348460;
    case 0x7F348464u: goto label_7F348464;
    case 0x7F348468u: goto label_7F348468;
    case 0x7F34846Cu: goto label_7F34846C;
    case 0x7F348470u: goto label_7F348470;
    case 0x7F348474u: goto label_7F348474;
    case 0x7F348478u: goto label_7F348478;
    case 0x7F34847Cu: goto label_7F34847C;
    case 0x7F348480u: goto label_7F348480;
    case 0x7F348484u: goto label_7F348484;
    case 0x7F348488u: goto label_7F348488;
    case 0x7F34848Cu: goto label_7F34848C;
    case 0x7F348490u: goto label_7F348490;
    case 0x7F348494u: goto label_7F348494;
    case 0x7F348498u: goto label_7F348498;
    case 0x7F34849Cu: goto label_7F34849C;
    case 0x7F3484A0u: goto label_7F3484A0;
    case 0x7F3484A4u: goto label_7F3484A4;
    case 0x7F3484A8u: goto label_7F3484A8;
    case 0x7F3484ACu: goto label_7F3484AC;
    case 0x7F3484B0u: goto label_7F3484B0;
    case 0x7F3484B4u: goto label_7F3484B4;
    case 0x7F3484B8u: goto label_7F3484B8;
    case 0x7F3484BCu: goto label_7F3484BC;
    case 0x7F3484C0u: goto label_7F3484C0;
    case 0x7F3484C4u: goto label_7F3484C4;
    case 0x7F3484C8u: goto label_7F3484C8;
    case 0x7F3484CCu: goto label_7F3484CC;
    case 0x7F3484D0u: goto label_7F3484D0;
    case 0x7F3484D4u: goto label_7F3484D4;
    case 0x7F3484D8u: goto label_7F3484D8;
    case 0x7F3484DCu: goto label_7F3484DC;
    case 0x7F3484E0u: goto label_7F3484E0;
    case 0x7F3484E4u: goto label_7F3484E4;
    case 0x7F3484E8u: goto label_7F3484E8;
    case 0x7F3484ECu: goto label_7F3484EC;
    case 0x7F3484F0u: goto label_7F3484F0;
    case 0x7F3484F4u: goto label_7F3484F4;
    case 0x7F3484F8u: goto label_7F3484F8;
    case 0x7F3484FCu: goto label_7F3484FC;
    case 0x7F348500u: goto label_7F348500;
    case 0x7F348504u: goto label_7F348504;
    case 0x7F348508u: goto label_7F348508;
    case 0x7F34850Cu: goto label_7F34850C;
    case 0x7F348510u: goto label_7F348510;
    case 0x7F348514u: goto label_7F348514;
    case 0x7F348518u: goto label_7F348518;
    case 0x7F34851Cu: goto label_7F34851C;
    case 0x7F348520u: goto label_7F348520;
    case 0x7F348524u: goto label_7F348524;
    case 0x7F348528u: goto label_7F348528;
    case 0x7F34852Cu: goto label_7F34852C;
    case 0x7F348530u: goto label_7F348530;
    case 0x7F348534u: goto label_7F348534;
    case 0x7F348538u: goto label_7F348538;
    case 0x7F34853Cu: goto label_7F34853C;
    case 0x7F348540u: goto label_7F348540;
    case 0x7F348544u: goto label_7F348544;
    case 0x7F348548u: goto label_7F348548;
    case 0x7F34854Cu: goto label_7F34854C;
    case 0x7F348550u: goto label_7F348550;
    case 0x7F348554u: goto label_7F348554;
    case 0x7F348558u: goto label_7F348558;
    case 0x7F34855Cu: goto label_7F34855C;
    case 0x7F348560u: goto label_7F348560;
    case 0x7F348564u: goto label_7F348564;
    case 0x7F348568u: goto label_7F348568;
    case 0x7F34856Cu: goto label_7F34856C;
    case 0x7F348570u: goto label_7F348570;
    case 0x7F348574u: goto label_7F348574;
    case 0x7F348578u: goto label_7F348578;
    case 0x7F34857Cu: goto label_7F34857C;
    case 0x7F348580u: goto label_7F348580;
    case 0x7F348584u: goto label_7F348584;
    case 0x7F348588u: goto label_7F348588;
    case 0x7F34858Cu: goto label_7F34858C;
    case 0x7F348590u: goto label_7F348590;
    case 0x7F348594u: goto label_7F348594;
    case 0x7F348598u: goto label_7F348598;
    case 0x7F34859Cu: goto label_7F34859C;
    case 0x7F3485A0u: goto label_7F3485A0;
    case 0x7F3485A4u: goto label_7F3485A4;
    case 0x7F3485A8u: goto label_7F3485A8;
    case 0x7F3485ACu: goto label_7F3485AC;
    case 0x7F3485B0u: goto label_7F3485B0;
    case 0x7F3485B4u: goto label_7F3485B4;
    case 0x7F3485B8u: goto label_7F3485B8;
    case 0x7F3485BCu: goto label_7F3485BC;
    case 0x7F3485C0u: goto label_7F3485C0;
    case 0x7F3485C4u: goto label_7F3485C4;
    case 0x7F3485C8u: goto label_7F3485C8;
    case 0x7F3485CCu: goto label_7F3485CC;
    case 0x7F3485D0u: goto label_7F3485D0;
    case 0x7F3485D4u: goto label_7F3485D4;
    case 0x7F3485D8u: goto label_7F3485D8;
    case 0x7F3485DCu: goto label_7F3485DC;
    case 0x7F3485E0u: goto label_7F3485E0;
    case 0x7F3485E4u: goto label_7F3485E4;
    case 0x7F3485E8u: goto label_7F3485E8;
    case 0x7F3485ECu: goto label_7F3485EC;
    case 0x7F3485F0u: goto label_7F3485F0;
    case 0x7F3485F4u: goto label_7F3485F4;
    case 0x7F3485F8u: goto label_7F3485F8;
    case 0x7F3485FCu: goto label_7F3485FC;
    case 0x7F348600u: goto label_7F348600;
    case 0x7F348604u: goto label_7F348604;
    case 0x7F348608u: goto label_7F348608;
    case 0x7F34860Cu: goto label_7F34860C;
    case 0x7F348610u: goto label_7F348610;
    case 0x7F348614u: goto label_7F348614;
    case 0x7F348618u: goto label_7F348618;
    case 0x7F34861Cu: goto label_7F34861C;
    case 0x7F348620u: goto label_7F348620;
    case 0x7F348624u: goto label_7F348624;
    case 0x7F348628u: goto label_7F348628;
    case 0x7F34862Cu: goto label_7F34862C;
    case 0x7F348630u: goto label_7F348630;
    case 0x7F348634u: goto label_7F348634;
    case 0x7F348638u: goto label_7F348638;
    case 0x7F34863Cu: goto label_7F34863C;
    case 0x7F348640u: goto label_7F348640;
    case 0x7F348644u: goto label_7F348644;
    case 0x7F348648u: goto label_7F348648;
    case 0x7F34864Cu: goto label_7F34864C;
    case 0x7F348650u: goto label_7F348650;
    case 0x7F348654u: goto label_7F348654;
    case 0x7F348658u: goto label_7F348658;
    case 0x7F34865Cu: goto label_7F34865C;
    case 0x7F348660u: goto label_7F348660;
    case 0x7F348664u: goto label_7F348664;
    case 0x7F348668u: goto label_7F348668;
    case 0x7F34866Cu: goto label_7F34866C;
    case 0x7F348670u: goto label_7F348670;
    case 0x7F348674u: goto label_7F348674;
    case 0x7F348678u: goto label_7F348678;
    case 0x7F34867Cu: goto label_7F34867C;
    case 0x7F348680u: goto label_7F348680;
    case 0x7F348684u: goto label_7F348684;
    case 0x7F348688u: goto label_7F348688;
    case 0x7F34868Cu: goto label_7F34868C;
    case 0x7F348690u: goto label_7F348690;
    case 0x7F348694u: goto label_7F348694;
    case 0x7F348698u: goto label_7F348698;
    case 0x7F34869Cu: goto label_7F34869C;
    case 0x7F3486A0u: goto label_7F3486A0;
    case 0x7F3486A4u: goto label_7F3486A4;
    case 0x7F3486A8u: goto label_7F3486A8;
    case 0x7F3486ACu: goto label_7F3486AC;
    case 0x7F3486B0u: goto label_7F3486B0;
    case 0x7F3486B4u: goto label_7F3486B4;
    case 0x7F3486B8u: goto label_7F3486B8;
    case 0x7F3486BCu: goto label_7F3486BC;
    case 0x7F3486C0u: goto label_7F3486C0;
    case 0x7F3486C4u: goto label_7F3486C4;
    case 0x7F3486C8u: goto label_7F3486C8;
    case 0x7F3486CCu: goto label_7F3486CC;
    case 0x7F3486D0u: goto label_7F3486D0;
    case 0x7F3486D4u: goto label_7F3486D4;
    case 0x7F3486D8u: goto label_7F3486D8;
    case 0x7F3486DCu: goto label_7F3486DC;
    case 0x7F3486E0u: goto label_7F3486E0;
    case 0x7F3486E4u: goto label_7F3486E4;
    case 0x7F3486E8u: goto label_7F3486E8;
    case 0x7F3486ECu: goto label_7F3486EC;
    case 0x7F3486F0u: goto label_7F3486F0;
    case 0x7F3486F4u: goto label_7F3486F4;
    case 0x7F3486F8u: goto label_7F3486F8;
    case 0x7F3486FCu: goto label_7F3486FC;
    case 0x7F348700u: goto label_7F348700;
    case 0x7F348704u: goto label_7F348704;
    case 0x7F348708u: goto label_7F348708;
    case 0x7F34870Cu: goto label_7F34870C;
    case 0x7F348710u: goto label_7F348710;
    case 0x7F348714u: goto label_7F348714;
    case 0x7F348718u: goto label_7F348718;
    case 0x7F34871Cu: goto label_7F34871C;
    case 0x7F348720u: goto label_7F348720;
    case 0x7F348724u: goto label_7F348724;
    case 0x7F348728u: goto label_7F348728;
    case 0x7F34872Cu: goto label_7F34872C;
    case 0x7F348730u: goto label_7F348730;
    case 0x7F348734u: goto label_7F348734;
    case 0x7F348738u: goto label_7F348738;
    case 0x7F34873Cu: goto label_7F34873C;
    case 0x7F348740u: goto label_7F348740;
    case 0x7F348744u: goto label_7F348744;
    case 0x7F348748u: goto label_7F348748;
    case 0x7F34874Cu: goto label_7F34874C;
    case 0x7F348750u: goto label_7F348750;
    case 0x7F348754u: goto label_7F348754;
    case 0x7F348758u: goto label_7F348758;
    case 0x7F34875Cu: goto label_7F34875C;
    case 0x7F348760u: goto label_7F348760;
    case 0x7F348764u: goto label_7F348764;
    case 0x7F348768u: goto label_7F348768;
    case 0x7F34876Cu: goto label_7F34876C;
    case 0x7F348770u: goto label_7F348770;
    case 0x7F348774u: goto label_7F348774;
    case 0x7F348778u: goto label_7F348778;
    case 0x7F34877Cu: goto label_7F34877C;
    case 0x7F348780u: goto label_7F348780;
    case 0x7F348784u: goto label_7F348784;
    case 0x7F348788u: goto label_7F348788;
    case 0x7F34878Cu: goto label_7F34878C;
    case 0x7F348790u: goto label_7F348790;
    case 0x7F348794u: goto label_7F348794;
    case 0x7F348798u: goto label_7F348798;
    case 0x7F34879Cu: goto label_7F34879C;
    case 0x7F3487A0u: goto label_7F3487A0;
    case 0x7F3487A4u: goto label_7F3487A4;
    case 0x7F3487A8u: goto label_7F3487A8;
    case 0x7F3487ACu: goto label_7F3487AC;
    case 0x7F3487B0u: goto label_7F3487B0;
    case 0x7F3487B4u: goto label_7F3487B4;
    case 0x7F3487B8u: goto label_7F3487B8;
    case 0x7F3487BCu: goto label_7F3487BC;
    case 0x7F3487C0u: goto label_7F3487C0;
    case 0x7F3487C4u: goto label_7F3487C4;
    case 0x7F3487C8u: goto label_7F3487C8;
    case 0x7F3487CCu: goto label_7F3487CC;
    case 0x7F3487D0u: goto label_7F3487D0;
    case 0x7F3487D4u: goto label_7F3487D4;
    case 0x7F3487D8u: goto label_7F3487D8;
    case 0x7F3487DCu: goto label_7F3487DC;
    case 0x7F3487E0u: goto label_7F3487E0;
    case 0x7F3487E4u: goto label_7F3487E4;
    case 0x7F3487E8u: goto label_7F3487E8;
    case 0x7F3487ECu: goto label_7F3487EC;
    case 0x7F3487F0u: goto label_7F3487F0;
    case 0x7F3487F4u: goto label_7F3487F4;
    case 0x7F3487F8u: goto label_7F3487F8;
    case 0x7F3487FCu: goto label_7F3487FC;
    case 0x7F348800u: goto label_7F348800;
    case 0x7F348804u: goto label_7F348804;
    case 0x7F348808u: goto label_7F348808;
    case 0x7F34880Cu: goto label_7F34880C;
    case 0x7F348810u: goto label_7F348810;
    case 0x7F348814u: goto label_7F348814;
    case 0x7F348818u: goto label_7F348818;
    case 0x7F34881Cu: goto label_7F34881C;
    case 0x7F348820u: goto label_7F348820;
    case 0x7F348824u: goto label_7F348824;
    case 0x7F348828u: goto label_7F348828;
    case 0x7F34882Cu: goto label_7F34882C;
    case 0x7F348830u: goto label_7F348830;
    case 0x7F348834u: goto label_7F348834;
    case 0x7F348838u: goto label_7F348838;
    case 0x7F34883Cu: goto label_7F34883C;
    case 0x7F348840u: goto label_7F348840;
    case 0x7F348844u: goto label_7F348844;
    case 0x7F348848u: goto label_7F348848;
    case 0x7F34884Cu: goto label_7F34884C;
    case 0x7F348850u: goto label_7F348850;
    case 0x7F348854u: goto label_7F348854;
    case 0x7F348858u: goto label_7F348858;
    case 0x7F34885Cu: goto label_7F34885C;
    case 0x7F348860u: goto label_7F348860;
    case 0x7F348864u: goto label_7F348864;
    case 0x7F348868u: goto label_7F348868;
    case 0x7F34886Cu: goto label_7F34886C;
    case 0x7F348870u: goto label_7F348870;
    case 0x7F348874u: goto label_7F348874;
    case 0x7F348878u: goto label_7F348878;
    case 0x7F34887Cu: goto label_7F34887C;
    case 0x7F348880u: goto label_7F348880;
    case 0x7F348884u: goto label_7F348884;
    case 0x7F348888u: goto label_7F348888;
    case 0x7F34888Cu: goto label_7F34888C;
    case 0x7F348890u: goto label_7F348890;
    case 0x7F348894u: goto label_7F348894;
    case 0x7F348898u: goto label_7F348898;
    case 0x7F34889Cu: goto label_7F34889C;
    case 0x7F3488A0u: goto label_7F3488A0;
    case 0x7F3488A4u: goto label_7F3488A4;
    case 0x7F3488A8u: goto label_7F3488A8;
    case 0x7F3488ACu: goto label_7F3488AC;
    case 0x7F3488B0u: goto label_7F3488B0;
    case 0x7F3488B4u: goto label_7F3488B4;
    case 0x7F3488B8u: goto label_7F3488B8;
    case 0x7F3488BCu: goto label_7F3488BC;
    case 0x7F3488C0u: goto label_7F3488C0;
    case 0x7F3488C4u: goto label_7F3488C4;
    case 0x7F3488C8u: goto label_7F3488C8;
    case 0x7F3488CCu: goto label_7F3488CC;
    case 0x7F3488D0u: goto label_7F3488D0;
    case 0x7F3488D4u: goto label_7F3488D4;
    case 0x7F3488D8u: goto label_7F3488D8;
    case 0x7F3488DCu: goto label_7F3488DC;
    case 0x7F3488E0u: goto label_7F3488E0;
    case 0x7F3488E4u: goto label_7F3488E4;
    case 0x7F3488E8u: goto label_7F3488E8;
    case 0x7F3488ECu: goto label_7F3488EC;
    case 0x7F3488F0u: goto label_7F3488F0;
    case 0x7F3488F4u: goto label_7F3488F4;
    case 0x7F3488F8u: goto label_7F3488F8;
    case 0x7F3488FCu: goto label_7F3488FC;
    case 0x7F348900u: goto label_7F348900;
    case 0x7F348904u: goto label_7F348904;
    case 0x7F348908u: goto label_7F348908;
    case 0x7F34890Cu: goto label_7F34890C;
    case 0x7F348910u: goto label_7F348910;
    case 0x7F348914u: goto label_7F348914;
    case 0x7F348918u: goto label_7F348918;
    case 0x7F34891Cu: goto label_7F34891C;
    case 0x7F348920u: goto label_7F348920;
    case 0x7F348924u: goto label_7F348924;
    case 0x7F348928u: goto label_7F348928;
    case 0x7F34892Cu: goto label_7F34892C;
    case 0x7F348930u: goto label_7F348930;
    case 0x7F348934u: goto label_7F348934;
    case 0x7F348938u: goto label_7F348938;
    case 0x7F34893Cu: goto label_7F34893C;
    case 0x7F348940u: goto label_7F348940;
    case 0x7F348944u: goto label_7F348944;
    case 0x7F348948u: goto label_7F348948;
    case 0x7F34894Cu: goto label_7F34894C;
    case 0x7F348950u: goto label_7F348950;
    case 0x7F348954u: goto label_7F348954;
    case 0x7F348958u: goto label_7F348958;
    case 0x7F34895Cu: goto label_7F34895C;
    case 0x7F348960u: goto label_7F348960;
    case 0x7F348964u: goto label_7F348964;
    case 0x7F348968u: goto label_7F348968;
    case 0x7F34896Cu: goto label_7F34896C;
    case 0x7F348970u: goto label_7F348970;
    case 0x7F348974u: goto label_7F348974;
    case 0x7F348978u: goto label_7F348978;
    case 0x7F34897Cu: goto label_7F34897C;
    case 0x7F348980u: goto label_7F348980;
    case 0x7F348984u: goto label_7F348984;
    case 0x7F348988u: goto label_7F348988;
    case 0x7F34898Cu: goto label_7F34898C;
    case 0x7F348990u: goto label_7F348990;
    case 0x7F348994u: goto label_7F348994;
    case 0x7F348998u: goto label_7F348998;
    case 0x7F34899Cu: goto label_7F34899C;
    case 0x7F3489A0u: goto label_7F3489A0;
    case 0x7F3489A4u: goto label_7F3489A4;
    case 0x7F3489A8u: goto label_7F3489A8;
    case 0x7F3489ACu: goto label_7F3489AC;
    case 0x7F3489B0u: goto label_7F3489B0;
    case 0x7F3489B4u: goto label_7F3489B4;
    case 0x7F3489B8u: goto label_7F3489B8;
    case 0x7F3489BCu: goto label_7F3489BC;
    case 0x7F3489C0u: goto label_7F3489C0;
    case 0x7F3489C4u: goto label_7F3489C4;
    case 0x7F3489C8u: goto label_7F3489C8;
    case 0x7F3489CCu: goto label_7F3489CC;
    case 0x7F3489D0u: goto label_7F3489D0;
    case 0x7F3489D4u: goto label_7F3489D4;
    case 0x7F3489D8u: goto label_7F3489D8;
    case 0x7F3489DCu: goto label_7F3489DC;
    case 0x7F3489E0u: goto label_7F3489E0;
    case 0x7F3489E4u: goto label_7F3489E4;
    case 0x7F3489E8u: goto label_7F3489E8;
    case 0x7F3489ECu: goto label_7F3489EC;
    case 0x7F3489F0u: goto label_7F3489F0;
    case 0x7F3489F4u: goto label_7F3489F4;
    case 0x7F3489F8u: goto label_7F3489F8;
    case 0x7F3489FCu: goto label_7F3489FC;
    case 0x7F348A00u: goto label_7F348A00;
    case 0x7F348A04u: goto label_7F348A04;
    case 0x7F348A08u: goto label_7F348A08;
    case 0x7F348A0Cu: goto label_7F348A0C;
    case 0x7F348A10u: goto label_7F348A10;
    case 0x7F348A14u: goto label_7F348A14;
    case 0x7F348A18u: goto label_7F348A18;
    case 0x7F348A1Cu: goto label_7F348A1C;
    case 0x7F348A20u: goto label_7F348A20;
    case 0x7F348A24u: goto label_7F348A24;
    case 0x7F348A28u: goto label_7F348A28;
    case 0x7F348A2Cu: goto label_7F348A2C;
    case 0x7F348A30u: goto label_7F348A30;
    case 0x7F348A34u: goto label_7F348A34;
    case 0x7F348A38u: goto label_7F348A38;
    case 0x7F348A3Cu: goto label_7F348A3C;
    case 0x7F348A40u: goto label_7F348A40;
    case 0x7F348A44u: goto label_7F348A44;
    case 0x7F348A48u: goto label_7F348A48;
    case 0x7F348A4Cu: goto label_7F348A4C;
    case 0x7F348A50u: goto label_7F348A50;
    case 0x7F348A54u: goto label_7F348A54;
    case 0x7F348A58u: goto label_7F348A58;
    case 0x7F348A5Cu: goto label_7F348A5C;
    case 0x7F348A60u: goto label_7F348A60;
    case 0x7F348A64u: goto label_7F348A64;
    case 0x7F348A68u: goto label_7F348A68;
    case 0x7F348A6Cu: goto label_7F348A6C;
    case 0x7F348A70u: goto label_7F348A70;
    case 0x7F348A74u: goto label_7F348A74;
    case 0x7F348A78u: goto label_7F348A78;
    case 0x7F348A7Cu: goto label_7F348A7C;
    case 0x7F348A80u: goto label_7F348A80;
    case 0x7F348A84u: goto label_7F348A84;
    case 0x7F348A88u: goto label_7F348A88;
    case 0x7F348A8Cu: goto label_7F348A8C;
    case 0x7F348A90u: goto label_7F348A90;
    case 0x7F348A94u: goto label_7F348A94;
    case 0x7F348A98u: goto label_7F348A98;
    case 0x7F348A9Cu: goto label_7F348A9C;
    case 0x7F348AA0u: goto label_7F348AA0;
    case 0x7F348AA4u: goto label_7F348AA4;
    case 0x7F348AA8u: goto label_7F348AA8;
    case 0x7F348AACu: goto label_7F348AAC;
    case 0x7F348AB0u: goto label_7F348AB0;
    case 0x7F348AB4u: goto label_7F348AB4;
    case 0x7F348AB8u: goto label_7F348AB8;
    case 0x7F348ABCu: goto label_7F348ABC;
    case 0x7F348AC0u: goto label_7F348AC0;
    case 0x7F348AC4u: goto label_7F348AC4;
    case 0x7F348AC8u: goto label_7F348AC8;
    case 0x7F348ACCu: goto label_7F348ACC;
    case 0x7F348AD0u: goto label_7F348AD0;
    case 0x7F348AD4u: goto label_7F348AD4;
    case 0x7F348AD8u: goto label_7F348AD8;
    case 0x7F348ADCu: goto label_7F348ADC;
    case 0x7F348AE0u: goto label_7F348AE0;
    case 0x7F348AE4u: goto label_7F348AE4;
    case 0x7F348AE8u: goto label_7F348AE8;
    case 0x7F348AECu: goto label_7F348AEC;
    case 0x7F348AF0u: goto label_7F348AF0;
    case 0x7F348AF4u: goto label_7F348AF4;
    case 0x7F348AF8u: goto label_7F348AF8;
    case 0x7F348AFCu: goto label_7F348AFC;
    case 0x7F348B00u: goto label_7F348B00;
    case 0x7F348B04u: goto label_7F348B04;
    case 0x7F348B08u: goto label_7F348B08;
    case 0x7F348B0Cu: goto label_7F348B0C;
    case 0x7F348B10u: goto label_7F348B10;
    case 0x7F348B14u: goto label_7F348B14;
    case 0x7F348B18u: goto label_7F348B18;
    case 0x7F348B1Cu: goto label_7F348B1C;
    case 0x7F348B20u: goto label_7F348B20;
    case 0x7F348B24u: goto label_7F348B24;
    case 0x7F348B28u: goto label_7F348B28;
    case 0x7F348B2Cu: goto label_7F348B2C;
    case 0x7F348B30u: goto label_7F348B30;
    case 0x7F348B34u: goto label_7F348B34;
    case 0x7F348B38u: goto label_7F348B38;
    case 0x7F348B3Cu: goto label_7F348B3C;
    case 0x7F348B40u: goto label_7F348B40;
    case 0x7F348B44u: goto label_7F348B44;
    case 0x7F348B48u: goto label_7F348B48;
    case 0x7F348B4Cu: goto label_7F348B4C;
    case 0x7F348B50u: goto label_7F348B50;
    case 0x7F348B54u: goto label_7F348B54;
    case 0x7F348B58u: goto label_7F348B58;
    case 0x7F348B5Cu: goto label_7F348B5C;
    case 0x7F348B60u: goto label_7F348B60;
    case 0x7F348B64u: goto label_7F348B64;
    case 0x7F348B68u: goto label_7F348B68;
    case 0x7F348B6Cu: goto label_7F348B6C;
    case 0x7F348B70u: goto label_7F348B70;
    case 0x7F348B74u: goto label_7F348B74;
    case 0x7F348B78u: goto label_7F348B78;
    case 0x7F348B7Cu: goto label_7F348B7C;
    case 0x7F348B80u: goto label_7F348B80;
    case 0x7F348B84u: goto label_7F348B84;
    case 0x7F348B88u: goto label_7F348B88;
    case 0x7F348B8Cu: goto label_7F348B8C;
    case 0x7F348B90u: goto label_7F348B90;
    case 0x7F348B94u: goto label_7F348B94;
    case 0x7F348B98u: goto label_7F348B98;
    case 0x7F348B9Cu: goto label_7F348B9C;
    case 0x7F348BA0u: goto label_7F348BA0;
    case 0x7F348BA4u: goto label_7F348BA4;
    case 0x7F348BA8u: goto label_7F348BA8;
    case 0x7F348BACu: goto label_7F348BAC;
    case 0x7F348BB0u: goto label_7F348BB0;
    case 0x7F348BB4u: goto label_7F348BB4;
    case 0x7F348BB8u: goto label_7F348BB8;
    case 0x7F348BBCu: goto label_7F348BBC;
    case 0x7F348BC0u: goto label_7F348BC0;
    case 0x7F348BC4u: goto label_7F348BC4;
    case 0x7F348BC8u: goto label_7F348BC8;
    case 0x7F348BCCu: goto label_7F348BCC;
    case 0x7F348BD0u: goto label_7F348BD0;
    case 0x7F348BD4u: goto label_7F348BD4;
    case 0x7F348BD8u: goto label_7F348BD8;
    case 0x7F348BDCu: goto label_7F348BDC;
    case 0x7F348BE0u: goto label_7F348BE0;
    case 0x7F348BE4u: goto label_7F348BE4;
    case 0x7F348BE8u: goto label_7F348BE8;
    case 0x7F348BECu: goto label_7F348BEC;
    case 0x7F348BF0u: goto label_7F348BF0;
    case 0x7F348BF4u: goto label_7F348BF4;
    case 0x7F348BF8u: goto label_7F348BF8;
    case 0x7F348BFCu: goto label_7F348BFC;
    case 0x7F348C00u: goto label_7F348C00;
    case 0x7F348C04u: goto label_7F348C04;
    case 0x7F348C08u: goto label_7F348C08;
    case 0x7F348C0Cu: goto label_7F348C0C;
    case 0x7F348C10u: goto label_7F348C10;
    case 0x7F348C14u: goto label_7F348C14;
    case 0x7F348C18u: goto label_7F348C18;
    case 0x7F348C1Cu: goto label_7F348C1C;
    case 0x7F348C20u: goto label_7F348C20;
    case 0x7F348C24u: goto label_7F348C24;
    case 0x7F348C28u: goto label_7F348C28;
    case 0x7F348C2Cu: goto label_7F348C2C;
    case 0x7F348C30u: goto label_7F348C30;
    case 0x7F348C34u: goto label_7F348C34;
    case 0x7F348C38u: goto label_7F348C38;
    case 0x7F348C3Cu: goto label_7F348C3C;
    case 0x7F348C40u: goto label_7F348C40;
    case 0x7F348C44u: goto label_7F348C44;
    case 0x7F348C48u: goto label_7F348C48;
    case 0x7F348C4Cu: goto label_7F348C4C;
    case 0x7F348C50u: goto label_7F348C50;
    case 0x7F348C54u: goto label_7F348C54;
    case 0x7F348C58u: goto label_7F348C58;
    case 0x7F348C5Cu: goto label_7F348C5C;
    case 0x7F348C60u: goto label_7F348C60;
    case 0x7F348C64u: goto label_7F348C64;
    case 0x7F348C68u: goto label_7F348C68;
    case 0x7F348C6Cu: goto label_7F348C6C;
    case 0x7F348C70u: goto label_7F348C70;
    case 0x7F348C74u: goto label_7F348C74;
    case 0x7F348C78u: goto label_7F348C78;
    case 0x7F348C7Cu: goto label_7F348C7C;
    case 0x7F348C80u: goto label_7F348C80;
    case 0x7F348C84u: goto label_7F348C84;
    case 0x7F348C88u: goto label_7F348C88;
    case 0x7F348C8Cu: goto label_7F348C8C;
    case 0x7F348C90u: goto label_7F348C90;
    case 0x7F348C94u: goto label_7F348C94;
    case 0x7F348C98u: goto label_7F348C98;
    case 0x7F348C9Cu: goto label_7F348C9C;
    case 0x7F348CA0u: goto label_7F348CA0;
    case 0x7F348CA4u: goto label_7F348CA4;
    case 0x7F348CA8u: goto label_7F348CA8;
    case 0x7F348CACu: goto label_7F348CAC;
    case 0x7F348CB0u: goto label_7F348CB0;
    case 0x7F348CB4u: goto label_7F348CB4;
    case 0x7F348CB8u: goto label_7F348CB8;
    case 0x7F348CBCu: goto label_7F348CBC;
    case 0x7F348CC0u: goto label_7F348CC0;
    case 0x7F348CC4u: goto label_7F348CC4;
    case 0x7F348CC8u: goto label_7F348CC8;
    case 0x7F348CCCu: goto label_7F348CCC;
    case 0x7F348CD0u: goto label_7F348CD0;
    case 0x7F348CD4u: goto label_7F348CD4;
    case 0x7F348CD8u: goto label_7F348CD8;
    case 0x7F348CDCu: goto label_7F348CDC;
    case 0x7F348CE0u: goto label_7F348CE0;
    case 0x7F348CE4u: goto label_7F348CE4;
    case 0x7F348CE8u: goto label_7F348CE8;
    case 0x7F348CECu: goto label_7F348CEC;
    case 0x7F348CF0u: goto label_7F348CF0;
    case 0x7F348CF4u: goto label_7F348CF4;
    case 0x7F348CF8u: goto label_7F348CF8;
    case 0x7F348CFCu: goto label_7F348CFC;
    case 0x7F348D00u: goto label_7F348D00;
    case 0x7F348D04u: goto label_7F348D04;
    case 0x7F348D08u: goto label_7F348D08;
    case 0x7F348D0Cu: goto label_7F348D0C;
    case 0x7F348D10u: goto label_7F348D10;
    case 0x7F348D14u: goto label_7F348D14;
    case 0x7F348D18u: goto label_7F348D18;
    case 0x7F348D1Cu: goto label_7F348D1C;
    case 0x7F348D20u: goto label_7F348D20;
    case 0x7F348D24u: goto label_7F348D24;
    case 0x7F348D28u: goto label_7F348D28;
    case 0x7F348D2Cu: goto label_7F348D2C;
    case 0x7F348D30u: goto label_7F348D30;
    case 0x7F348D34u: goto label_7F348D34;
    case 0x7F348D38u: goto label_7F348D38;
    case 0x7F348D3Cu: goto label_7F348D3C;
    case 0x7F348D40u: goto label_7F348D40;
    case 0x7F348D44u: goto label_7F348D44;
    case 0x7F348D48u: goto label_7F348D48;
    case 0x7F348D4Cu: goto label_7F348D4C;
    case 0x7F348D50u: goto label_7F348D50;
    case 0x7F348D54u: goto label_7F348D54;
    case 0x7F348D58u: goto label_7F348D58;
    case 0x7F348D5Cu: goto label_7F348D5C;
    case 0x7F348D60u: goto label_7F348D60;
    case 0x7F348D64u: goto label_7F348D64;
    case 0x7F348D68u: goto label_7F348D68;
    case 0x7F348D6Cu: goto label_7F348D6C;
    case 0x7F348D70u: goto label_7F348D70;
    case 0x7F348D74u: goto label_7F348D74;
    case 0x7F348D78u: goto label_7F348D78;
    case 0x7F348D7Cu: goto label_7F348D7C;
    case 0x7F348D80u: goto label_7F348D80;
    case 0x7F348D84u: goto label_7F348D84;
    case 0x7F348D88u: goto label_7F348D88;
    case 0x7F348D8Cu: goto label_7F348D8C;
    case 0x7F348D90u: goto label_7F348D90;
    case 0x7F348D94u: goto label_7F348D94;
    case 0x7F348D98u: goto label_7F348D98;
    case 0x7F348D9Cu: goto label_7F348D9C;
    case 0x7F348DA0u: goto label_7F348DA0;
    case 0x7F348DA4u: goto label_7F348DA4;
    case 0x7F348DA8u: goto label_7F348DA8;
    case 0x7F348DACu: goto label_7F348DAC;
    case 0x7F348DB0u: goto label_7F348DB0;
    case 0x7F348DB4u: goto label_7F348DB4;
    case 0x7F348DB8u: goto label_7F348DB8;
    case 0x7F348DBCu: goto label_7F348DBC;
    case 0x7F348DC0u: goto label_7F348DC0;
    case 0x7F348DC4u: goto label_7F348DC4;
    case 0x7F348DC8u: goto label_7F348DC8;
    case 0x7F348DCCu: goto label_7F348DCC;
    case 0x7F348DD0u: goto label_7F348DD0;
    case 0x7F348DD4u: goto label_7F348DD4;
    case 0x7F348DD8u: goto label_7F348DD8;
    case 0x7F348DDCu: goto label_7F348DDC;
    case 0x7F348DE0u: goto label_7F348DE0;
    case 0x7F348DE4u: goto label_7F348DE4;
    case 0x7F348DE8u: goto label_7F348DE8;
    case 0x7F348DECu: goto label_7F348DEC;
    case 0x7F348DF0u: goto label_7F348DF0;
    case 0x7F348DF4u: goto label_7F348DF4;
    case 0x7F348DF8u: goto label_7F348DF8;
    case 0x7F348DFCu: goto label_7F348DFC;
    case 0x7F348E00u: goto label_7F348E00;
    case 0x7F348E04u: goto label_7F348E04;
    case 0x7F348E08u: goto label_7F348E08;
    case 0x7F348E0Cu: goto label_7F348E0C;
    case 0x7F348E10u: goto label_7F348E10;
    case 0x7F348E14u: goto label_7F348E14;
    case 0x7F348E18u: goto label_7F348E18;
    case 0x7F348E1Cu: goto label_7F348E1C;
    case 0x7F348E20u: goto label_7F348E20;
    case 0x7F348E24u: goto label_7F348E24;
    case 0x7F348E28u: goto label_7F348E28;
    case 0x7F348E2Cu: goto label_7F348E2C;
    case 0x7F348E30u: goto label_7F348E30;
    case 0x7F348E34u: goto label_7F348E34;
    case 0x7F348E38u: goto label_7F348E38;
    case 0x7F348E3Cu: goto label_7F348E3C;
    case 0x7F348E40u: goto label_7F348E40;
    case 0x7F348E44u: goto label_7F348E44;
    case 0x7F348E48u: goto label_7F348E48;
    case 0x7F348E4Cu: goto label_7F348E4C;
    case 0x7F348E50u: goto label_7F348E50;
    case 0x7F348E54u: goto label_7F348E54;
    case 0x7F348E58u: goto label_7F348E58;
    case 0x7F348E5Cu: goto label_7F348E5C;
    case 0x7F348E60u: goto label_7F348E60;
    case 0x7F348E64u: goto label_7F348E64;
    case 0x7F348E68u: goto label_7F348E68;
    case 0x7F348E6Cu: goto label_7F348E6C;
    case 0x7F348E70u: goto label_7F348E70;
    case 0x7F348E74u: goto label_7F348E74;
    case 0x7F348E78u: goto label_7F348E78;
    case 0x7F348E7Cu: goto label_7F348E7C;
    case 0x7F348E80u: goto label_7F348E80;
    case 0x7F348E84u: goto label_7F348E84;
    case 0x7F348E88u: goto label_7F348E88;
    case 0x7F348E8Cu: goto label_7F348E8C;
    case 0x7F348E90u: goto label_7F348E90;
    case 0x7F348E94u: goto label_7F348E94;
    case 0x7F348E98u: goto label_7F348E98;
    case 0x7F348E9Cu: goto label_7F348E9C;
    case 0x7F348EA0u: goto label_7F348EA0;
    case 0x7F348EA4u: goto label_7F348EA4;
    case 0x7F348EA8u: goto label_7F348EA8;
    case 0x7F348EACu: goto label_7F348EAC;
    case 0x7F348EB0u: goto label_7F348EB0;
    case 0x7F348EB4u: goto label_7F348EB4;
    case 0x7F348EB8u: goto label_7F348EB8;
    case 0x7F348EBCu: goto label_7F348EBC;
    case 0x7F348EC0u: goto label_7F348EC0;
    case 0x7F348EC4u: goto label_7F348EC4;
    case 0x7F348EC8u: goto label_7F348EC8;
    case 0x7F348ECCu: goto label_7F348ECC;
    case 0x7F348ED0u: goto label_7F348ED0;
    case 0x7F348ED4u: goto label_7F348ED4;
    case 0x7F348ED8u: goto label_7F348ED8;
    case 0x7F348EDCu: goto label_7F348EDC;
    case 0x7F348EE0u: goto label_7F348EE0;
    case 0x7F348EE4u: goto label_7F348EE4;
    case 0x7F348EE8u: goto label_7F348EE8;
    case 0x7F348EECu: goto label_7F348EEC;
    case 0x7F348EF0u: goto label_7F348EF0;
    case 0x7F348EF4u: goto label_7F348EF4;
    case 0x7F348EF8u: goto label_7F348EF8;
    case 0x7F348EFCu: goto label_7F348EFC;
    case 0x7F348F00u: goto label_7F348F00;
    case 0x7F348F04u: goto label_7F348F04;
    case 0x7F348F08u: goto label_7F348F08;
    case 0x7F348F0Cu: goto label_7F348F0C;
    case 0x7F348F10u: goto label_7F348F10;
    case 0x7F348F14u: goto label_7F348F14;
    case 0x7F348F18u: goto label_7F348F18;
    case 0x7F348F1Cu: goto label_7F348F1C;
    case 0x7F348F20u: goto label_7F348F20;
    case 0x7F348F24u: goto label_7F348F24;
    case 0x7F348F28u: goto label_7F348F28;
    case 0x7F348F2Cu: goto label_7F348F2C;
    case 0x7F348F30u: goto label_7F348F30;
    case 0x7F348F34u: goto label_7F348F34;
    case 0x7F348F38u: goto label_7F348F38;
    case 0x7F348F3Cu: goto label_7F348F3C;
    case 0x7F348F40u: goto label_7F348F40;
    case 0x7F348F44u: goto label_7F348F44;
    case 0x7F348F48u: goto label_7F348F48;
    case 0x7F348F4Cu: goto label_7F348F4C;
    case 0x7F348F50u: goto label_7F348F50;
    case 0x7F348F54u: goto label_7F348F54;
    case 0x7F348F58u: goto label_7F348F58;
    case 0x7F348F5Cu: goto label_7F348F5C;
    case 0x7F348F60u: goto label_7F348F60;
    case 0x7F348F64u: goto label_7F348F64;
    case 0x7F348F68u: goto label_7F348F68;
    case 0x7F348F6Cu: goto label_7F348F6C;
    case 0x7F348F70u: goto label_7F348F70;
    case 0x7F348F74u: goto label_7F348F74;
    case 0x7F348F78u: goto label_7F348F78;
    case 0x7F348F7Cu: goto label_7F348F7C;
    case 0x7F348F80u: goto label_7F348F80;
    case 0x7F348F84u: goto label_7F348F84;
    case 0x7F348F88u: goto label_7F348F88;
    case 0x7F348F8Cu: goto label_7F348F8C;
    case 0x7F348F90u: goto label_7F348F90;
    case 0x7F348F94u: goto label_7F348F94;
    case 0x7F348F98u: goto label_7F348F98;
    case 0x7F348F9Cu: goto label_7F348F9C;
    case 0x7F348FA0u: goto label_7F348FA0;
    case 0x7F348FA4u: goto label_7F348FA4;
    case 0x7F348FA8u: goto label_7F348FA8;
    case 0x7F348FACu: goto label_7F348FAC;
    case 0x7F348FB0u: goto label_7F348FB0;
    case 0x7F348FB4u: goto label_7F348FB4;
    case 0x7F348FB8u: goto label_7F348FB8;
    case 0x7F348FBCu: goto label_7F348FBC;
    case 0x7F348FC0u: goto label_7F348FC0;
    case 0x7F348FC4u: goto label_7F348FC4;
    case 0x7F348FC8u: goto label_7F348FC8;
    case 0x7F348FCCu: goto label_7F348FCC;
    case 0x7F348FD0u: goto label_7F348FD0;
    case 0x7F348FD4u: goto label_7F348FD4;
    case 0x7F348FD8u: goto label_7F348FD8;
    case 0x7F348FDCu: goto label_7F348FDC;
    case 0x7F348FE0u: goto label_7F348FE0;
    case 0x7F348FE4u: goto label_7F348FE4;
    case 0x7F348FE8u: goto label_7F348FE8;
    case 0x7F348FECu: goto label_7F348FEC;
    case 0x7F348FF0u: goto label_7F348FF0;
    case 0x7F348FF4u: goto label_7F348FF4;
    case 0x7F348FF8u: goto label_7F348FF8;
    case 0x7F348FFCu: goto label_7F348FFC;
    case 0x7F349000u: goto label_7F349000;
    case 0x7F349004u: goto label_7F349004;
    case 0x7F349008u: goto label_7F349008;
    case 0x7F34900Cu: goto label_7F34900C;
    case 0x7F349010u: goto label_7F349010;
    case 0x7F349014u: goto label_7F349014;
    case 0x7F349018u: goto label_7F349018;
    case 0x7F34901Cu: goto label_7F34901C;
    case 0x7F349020u: goto label_7F349020;
    case 0x7F349024u: goto label_7F349024;
    case 0x7F349028u: goto label_7F349028;
    case 0x7F34902Cu: goto label_7F34902C;
    case 0x7F349030u: goto label_7F349030;
    case 0x7F349034u: goto label_7F349034;
    case 0x7F349038u: goto label_7F349038;
    case 0x7F34903Cu: goto label_7F34903C;
    case 0x7F349040u: goto label_7F349040;
    case 0x7F349044u: goto label_7F349044;
    case 0x7F349048u: goto label_7F349048;
    case 0x7F34904Cu: goto label_7F34904C;
    case 0x7F349050u: goto label_7F349050;
    case 0x7F349054u: goto label_7F349054;
    case 0x7F349058u: goto label_7F349058;
    case 0x7F34905Cu: goto label_7F34905C;
    case 0x7F349060u: goto label_7F349060;
    case 0x7F349064u: goto label_7F349064;
    case 0x7F349068u: goto label_7F349068;
    case 0x7F34906Cu: goto label_7F34906C;
    case 0x7F349070u: goto label_7F349070;
    case 0x7F349074u: goto label_7F349074;
    case 0x7F349078u: goto label_7F349078;
    case 0x7F34907Cu: goto label_7F34907C;
    case 0x7F349080u: goto label_7F349080;
    case 0x7F349084u: goto label_7F349084;
    case 0x7F349088u: goto label_7F349088;
    case 0x7F34908Cu: goto label_7F34908C;
    case 0x7F349090u: goto label_7F349090;
    case 0x7F349094u: goto label_7F349094;
    case 0x7F349098u: goto label_7F349098;
    case 0x7F34909Cu: goto label_7F34909C;
    case 0x7F3490A0u: goto label_7F3490A0;
    case 0x7F3490A4u: goto label_7F3490A4;
    case 0x7F3490A8u: goto label_7F3490A8;
    case 0x7F3490ACu: goto label_7F3490AC;
    case 0x7F3490B0u: goto label_7F3490B0;
    case 0x7F3490B4u: goto label_7F3490B4;
    case 0x7F3490B8u: goto label_7F3490B8;
    case 0x7F3490BCu: goto label_7F3490BC;
    case 0x7F3490C0u: goto label_7F3490C0;
    case 0x7F3490C4u: goto label_7F3490C4;
    case 0x7F3490C8u: goto label_7F3490C8;
    case 0x7F3490CCu: goto label_7F3490CC;
    case 0x7F3490D0u: goto label_7F3490D0;
    case 0x7F3490D4u: goto label_7F3490D4;
    case 0x7F3490D8u: goto label_7F3490D8;
    case 0x7F3490DCu: goto label_7F3490DC;
    case 0x7F3490E0u: goto label_7F3490E0;
    case 0x7F3490E4u: goto label_7F3490E4;
    case 0x7F3490E8u: goto label_7F3490E8;
    case 0x7F3490ECu: goto label_7F3490EC;
    case 0x7F3490F0u: goto label_7F3490F0;
    case 0x7F3490F4u: goto label_7F3490F4;
    case 0x7F3490F8u: goto label_7F3490F8;
    case 0x7F3490FCu: goto label_7F3490FC;
    case 0x7F349100u: goto label_7F349100;
    case 0x7F349104u: goto label_7F349104;
    case 0x7F349108u: goto label_7F349108;
    case 0x7F34910Cu: goto label_7F34910C;
    case 0x7F349110u: goto label_7F349110;
    case 0x7F349114u: goto label_7F349114;
    case 0x7F349118u: goto label_7F349118;
    case 0x7F34911Cu: goto label_7F34911C;
    case 0x7F349120u: goto label_7F349120;
    case 0x7F349124u: goto label_7F349124;
    case 0x7F349128u: goto label_7F349128;
    case 0x7F34912Cu: goto label_7F34912C;
    case 0x7F349130u: goto label_7F349130;
    case 0x7F349134u: goto label_7F349134;
    case 0x7F349138u: goto label_7F349138;
    case 0x7F34913Cu: goto label_7F34913C;
    case 0x7F349140u: goto label_7F349140;
    case 0x7F349144u: goto label_7F349144;
    case 0x7F349148u: goto label_7F349148;
    case 0x7F34914Cu: goto label_7F34914C;
    case 0x7F349150u: goto label_7F349150;
    case 0x7F349154u: goto label_7F349154;
    case 0x7F349158u: goto label_7F349158;
    case 0x7F34915Cu: goto label_7F34915C;
    case 0x7F349160u: goto label_7F349160;
    case 0x7F349164u: goto label_7F349164;
    case 0x7F349168u: goto label_7F349168;
    case 0x7F34916Cu: goto label_7F34916C;
    case 0x7F349170u: goto label_7F349170;
    case 0x7F349174u: goto label_7F349174;
    case 0x7F349178u: goto label_7F349178;
    case 0x7F34917Cu: goto label_7F34917C;
    case 0x7F349180u: goto label_7F349180;
    case 0x7F349184u: goto label_7F349184;
    case 0x7F349188u: goto label_7F349188;
    case 0x7F34918Cu: goto label_7F34918C;
    case 0x7F349190u: goto label_7F349190;
    case 0x7F349194u: goto label_7F349194;
    case 0x7F349198u: goto label_7F349198;
    case 0x7F34919Cu: goto label_7F34919C;
    case 0x7F3491A0u: goto label_7F3491A0;
    case 0x7F3491A4u: goto label_7F3491A4;
    case 0x7F3491A8u: goto label_7F3491A8;
    case 0x7F3491ACu: goto label_7F3491AC;
    case 0x7F3491B0u: goto label_7F3491B0;
    case 0x7F3491B4u: goto label_7F3491B4;
    case 0x7F3491B8u: goto label_7F3491B8;
    case 0x7F3491BCu: goto label_7F3491BC;
    case 0x7F3491C0u: goto label_7F3491C0;
    case 0x7F3491C4u: goto label_7F3491C4;
    case 0x7F3491C8u: goto label_7F3491C8;
    case 0x7F3491CCu: goto label_7F3491CC;
    case 0x7F3491D0u: goto label_7F3491D0;
    case 0x7F3491D4u: goto label_7F3491D4;
    case 0x7F3491D8u: goto label_7F3491D8;
    case 0x7F3491DCu: goto label_7F3491DC;
    case 0x7F3491E0u: goto label_7F3491E0;
    case 0x7F3491E4u: goto label_7F3491E4;
    case 0x7F3491E8u: goto label_7F3491E8;
    case 0x7F3491ECu: goto label_7F3491EC;
    case 0x7F3491F0u: goto label_7F3491F0;
    case 0x7F3491F4u: goto label_7F3491F4;
    case 0x7F3491F8u: goto label_7F3491F8;
    case 0x7F3491FCu: goto label_7F3491FC;
    case 0x7F349200u: goto label_7F349200;
    case 0x7F349204u: goto label_7F349204;
    case 0x7F349208u: goto label_7F349208;
    case 0x7F34920Cu: goto label_7F34920C;
    case 0x7F349210u: goto label_7F349210;
    case 0x7F349214u: goto label_7F349214;
    case 0x7F349218u: goto label_7F349218;
    case 0x7F34921Cu: goto label_7F34921C;
    case 0x7F349220u: goto label_7F349220;
    case 0x7F349224u: goto label_7F349224;
    case 0x7F349228u: goto label_7F349228;
    case 0x7F34922Cu: goto label_7F34922C;
    case 0x7F349230u: goto label_7F349230;
    case 0x7F349234u: goto label_7F349234;
    case 0x7F349238u: goto label_7F349238;
    case 0x7F34923Cu: goto label_7F34923C;
    case 0x7F349240u: goto label_7F349240;
    case 0x7F349244u: goto label_7F349244;
    case 0x7F349248u: goto label_7F349248;
    case 0x7F34924Cu: goto label_7F34924C;
    case 0x7F349250u: goto label_7F349250;
    case 0x7F349254u: goto label_7F349254;
    case 0x7F349258u: goto label_7F349258;
    case 0x7F34925Cu: goto label_7F34925C;
    case 0x7F349260u: goto label_7F349260;
    case 0x7F349264u: goto label_7F349264;
    case 0x7F349268u: goto label_7F349268;
    case 0x7F34926Cu: goto label_7F34926C;
    case 0x7F349270u: goto label_7F349270;
    case 0x7F349274u: goto label_7F349274;
    case 0x7F349278u: goto label_7F349278;
    case 0x7F34927Cu: goto label_7F34927C;
    case 0x7F349280u: goto label_7F349280;
    case 0x7F349284u: goto label_7F349284;
    case 0x7F349288u: goto label_7F349288;
    case 0x7F34928Cu: goto label_7F34928C;
    case 0x7F349290u: goto label_7F349290;
    case 0x7F349294u: goto label_7F349294;
    case 0x7F349298u: goto label_7F349298;
    case 0x7F34929Cu: goto label_7F34929C;
    case 0x7F3492A0u: goto label_7F3492A0;
    case 0x7F3492A4u: goto label_7F3492A4;
    case 0x7F3492A8u: goto label_7F3492A8;
    case 0x7F3492ACu: goto label_7F3492AC;
    case 0x7F3492B0u: goto label_7F3492B0;
    case 0x7F3492B4u: goto label_7F3492B4;
    case 0x7F3492B8u: goto label_7F3492B8;
    case 0x7F3492BCu: goto label_7F3492BC;
    case 0x7F3492C0u: goto label_7F3492C0;
    case 0x7F3492C4u: goto label_7F3492C4;
    case 0x7F3492C8u: goto label_7F3492C8;
    case 0x7F3492CCu: goto label_7F3492CC;
    case 0x7F3492D0u: goto label_7F3492D0;
    case 0x7F3492D4u: goto label_7F3492D4;
    case 0x7F3492D8u: goto label_7F3492D8;
    case 0x7F3492DCu: goto label_7F3492DC;
    case 0x7F3492E0u: goto label_7F3492E0;
    case 0x7F3492E4u: goto label_7F3492E4;
    case 0x7F3492E8u: goto label_7F3492E8;
    case 0x7F3492ECu: goto label_7F3492EC;
    case 0x7F3492F0u: goto label_7F3492F0;
    case 0x7F3492F4u: goto label_7F3492F4;
    case 0x7F3492F8u: goto label_7F3492F8;
    case 0x7F3492FCu: goto label_7F3492FC;
    case 0x7F349300u: goto label_7F349300;
    case 0x7F349304u: goto label_7F349304;
    case 0x7F349308u: goto label_7F349308;
    case 0x7F34930Cu: goto label_7F34930C;
    case 0x7F349310u: goto label_7F349310;
    case 0x7F349314u: goto label_7F349314;
    case 0x7F349318u: goto label_7F349318;
    case 0x7F34931Cu: goto label_7F34931C;
    case 0x7F349320u: goto label_7F349320;
    case 0x7F349324u: goto label_7F349324;
    case 0x7F349328u: goto label_7F349328;
    case 0x7F34932Cu: goto label_7F34932C;
    case 0x7F349330u: goto label_7F349330;
    case 0x7F349334u: goto label_7F349334;
    case 0x7F349338u: goto label_7F349338;
    case 0x7F34933Cu: goto label_7F34933C;
    case 0x7F349340u: goto label_7F349340;
    case 0x7F349344u: goto label_7F349344;
    case 0x7F349348u: goto label_7F349348;
    case 0x7F34934Cu: goto label_7F34934C;
    case 0x7F349350u: goto label_7F349350;
    case 0x7F349354u: goto label_7F349354;
    case 0x7F349358u: goto label_7F349358;
    case 0x7F34935Cu: goto label_7F34935C;
    case 0x7F349360u: goto label_7F349360;
    case 0x7F349364u: goto label_7F349364;
    case 0x7F349368u: goto label_7F349368;
    case 0x7F34936Cu: goto label_7F34936C;
    case 0x7F349370u: goto label_7F349370;
    case 0x7F349374u: goto label_7F349374;
    case 0x7F349378u: goto label_7F349378;
    case 0x7F34937Cu: goto label_7F34937C;
    case 0x7F349380u: goto label_7F349380;
    case 0x7F349384u: goto label_7F349384;
    case 0x7F349388u: goto label_7F349388;
    case 0x7F34938Cu: goto label_7F34938C;
    case 0x7F349390u: goto label_7F349390;
    case 0x7F349394u: goto label_7F349394;
    case 0x7F349398u: goto label_7F349398;
    case 0x7F34939Cu: goto label_7F34939C;
    case 0x7F3493A0u: goto label_7F3493A0;
    case 0x7F3493A4u: goto label_7F3493A4;
    case 0x7F3493A8u: goto label_7F3493A8;
    case 0x7F3493ACu: goto label_7F3493AC;
    case 0x7F3493B0u: goto label_7F3493B0;
    case 0x7F3493B4u: goto label_7F3493B4;
    case 0x7F3493B8u: goto label_7F3493B8;
    case 0x7F3493BCu: goto label_7F3493BC;
    case 0x7F3493C0u: goto label_7F3493C0;
    case 0x7F3493C4u: goto label_7F3493C4;
    case 0x7F3493C8u: goto label_7F3493C8;
    case 0x7F3493CCu: goto label_7F3493CC;
    case 0x7F3493D0u: goto label_7F3493D0;
    case 0x7F3493D4u: goto label_7F3493D4;
    case 0x7F3493D8u: goto label_7F3493D8;
    case 0x7F3493DCu: goto label_7F3493DC;
    case 0x7F3493E0u: goto label_7F3493E0;
    case 0x7F3493E4u: goto label_7F3493E4;
    case 0x7F3493E8u: goto label_7F3493E8;
    case 0x7F3493ECu: goto label_7F3493EC;
    case 0x7F3493F0u: goto label_7F3493F0;
    case 0x7F3493F4u: goto label_7F3493F4;
    case 0x7F3493F8u: goto label_7F3493F8;
    case 0x7F3493FCu: goto label_7F3493FC;
    case 0x7F349400u: goto label_7F349400;
    case 0x7F349404u: goto label_7F349404;
    case 0x7F349408u: goto label_7F349408;
    case 0x7F34940Cu: goto label_7F34940C;
    case 0x7F349410u: goto label_7F349410;
    case 0x7F349414u: goto label_7F349414;
    case 0x7F349418u: goto label_7F349418;
    case 0x7F34941Cu: goto label_7F34941C;
    case 0x7F349420u: goto label_7F349420;
    case 0x7F349424u: goto label_7F349424;
    case 0x7F349428u: goto label_7F349428;
    case 0x7F34942Cu: goto label_7F34942C;
    case 0x7F349430u: goto label_7F349430;
    case 0x7F349434u: goto label_7F349434;
    case 0x7F349438u: goto label_7F349438;
    case 0x7F34943Cu: goto label_7F34943C;
    case 0x7F349440u: goto label_7F349440;
    case 0x7F349444u: goto label_7F349444;
    case 0x7F349448u: goto label_7F349448;
    case 0x7F34944Cu: goto label_7F34944C;
    case 0x7F349450u: goto label_7F349450;
    case 0x7F349454u: goto label_7F349454;
    case 0x7F349458u: goto label_7F349458;
    case 0x7F34945Cu: goto label_7F34945C;
    case 0x7F349460u: goto label_7F349460;
    case 0x7F349464u: goto label_7F349464;
    case 0x7F349468u: goto label_7F349468;
    case 0x7F34946Cu: goto label_7F34946C;
    case 0x7F349470u: goto label_7F349470;
    case 0x7F349474u: goto label_7F349474;
    case 0x7F349478u: goto label_7F349478;
    case 0x7F34947Cu: goto label_7F34947C;
    case 0x7F349480u: goto label_7F349480;
    case 0x7F349484u: goto label_7F349484;
    case 0x7F349488u: goto label_7F349488;
    case 0x7F34948Cu: goto label_7F34948C;
    case 0x7F349490u: goto label_7F349490;
    case 0x7F349494u: goto label_7F349494;
    case 0x7F349498u: goto label_7F349498;
    case 0x7F34949Cu: goto label_7F34949C;
    case 0x7F3494A0u: goto label_7F3494A0;
    case 0x7F3494A4u: goto label_7F3494A4;
    case 0x7F3494A8u: goto label_7F3494A8;
    case 0x7F3494ACu: goto label_7F3494AC;
    case 0x7F3494B0u: goto label_7F3494B0;
    case 0x7F3494B4u: goto label_7F3494B4;
    case 0x7F3494B8u: goto label_7F3494B8;
    case 0x7F3494BCu: goto label_7F3494BC;
    case 0x7F3494C0u: goto label_7F3494C0;
    case 0x7F3494C4u: goto label_7F3494C4;
    case 0x7F3494C8u: goto label_7F3494C8;
    case 0x7F3494CCu: goto label_7F3494CC;
    case 0x7F3494D0u: goto label_7F3494D0;
    case 0x7F3494D4u: goto label_7F3494D4;
    case 0x7F3494D8u: goto label_7F3494D8;
    case 0x7F3494DCu: goto label_7F3494DC;
    case 0x7F3494E0u: goto label_7F3494E0;
    case 0x7F3494E4u: goto label_7F3494E4;
    case 0x7F3494E8u: goto label_7F3494E8;
    case 0x7F3494ECu: goto label_7F3494EC;
    case 0x7F3494F0u: goto label_7F3494F0;
    case 0x7F3494F4u: goto label_7F3494F4;
    case 0x7F3494F8u: goto label_7F3494F8;
    case 0x7F3494FCu: goto label_7F3494FC;
    case 0x7F349500u: goto label_7F349500;
    case 0x7F349504u: goto label_7F349504;
    case 0x7F349508u: goto label_7F349508;
    case 0x7F34950Cu: goto label_7F34950C;
    case 0x7F349510u: goto label_7F349510;
    case 0x7F349514u: goto label_7F349514;
    case 0x7F349518u: goto label_7F349518;
    case 0x7F34951Cu: goto label_7F34951C;
    case 0x7F349520u: goto label_7F349520;
    case 0x7F349524u: goto label_7F349524;
    case 0x7F349528u: goto label_7F349528;
    case 0x7F34952Cu: goto label_7F34952C;
    case 0x7F349530u: goto label_7F349530;
    case 0x7F349534u: goto label_7F349534;
    case 0x7F349538u: goto label_7F349538;
    case 0x7F34953Cu: goto label_7F34953C;
    case 0x7F349540u: goto label_7F349540;
    case 0x7F349544u: goto label_7F349544;
    case 0x7F349548u: goto label_7F349548;
    case 0x7F34954Cu: goto label_7F34954C;
    case 0x7F349550u: goto label_7F349550;
    case 0x7F349554u: goto label_7F349554;
    case 0x7F349558u: goto label_7F349558;
    case 0x7F34955Cu: goto label_7F34955C;
    case 0x7F349560u: goto label_7F349560;
    case 0x7F349564u: goto label_7F349564;
    case 0x7F349568u: goto label_7F349568;
    case 0x7F34956Cu: goto label_7F34956C;
    case 0x7F349570u: goto label_7F349570;
    case 0x7F349574u: goto label_7F349574;
    case 0x7F349578u: goto label_7F349578;
    case 0x7F34957Cu: goto label_7F34957C;
    case 0x7F349580u: goto label_7F349580;
    case 0x7F349584u: goto label_7F349584;
    case 0x7F349588u: goto label_7F349588;
    case 0x7F34958Cu: goto label_7F34958C;
    case 0x7F349590u: goto label_7F349590;
    case 0x7F349594u: goto label_7F349594;
    case 0x7F349598u: goto label_7F349598;
    case 0x7F34959Cu: goto label_7F34959C;
    case 0x7F3495A0u: goto label_7F3495A0;
    case 0x7F3495A4u: goto label_7F3495A4;
    case 0x7F3495A8u: goto label_7F3495A8;
    case 0x7F3495ACu: goto label_7F3495AC;
    case 0x7F3495B0u: goto label_7F3495B0;
    case 0x7F3495B4u: goto label_7F3495B4;
    case 0x7F3495B8u: goto label_7F3495B8;
    case 0x7F3495BCu: goto label_7F3495BC;
    case 0x7F3495C0u: goto label_7F3495C0;
    case 0x7F3495C4u: goto label_7F3495C4;
    case 0x7F3495C8u: goto label_7F3495C8;
    case 0x7F3495CCu: goto label_7F3495CC;
    case 0x7F3495D0u: goto label_7F3495D0;
    case 0x7F3495D4u: goto label_7F3495D4;
    case 0x7F3495D8u: goto label_7F3495D8;
    case 0x7F3495DCu: goto label_7F3495DC;
    case 0x7F3495E0u: goto label_7F3495E0;
    case 0x7F3495E4u: goto label_7F3495E4;
    case 0x7F3495E8u: goto label_7F3495E8;
    case 0x7F3495ECu: goto label_7F3495EC;
    case 0x7F3495F0u: goto label_7F3495F0;
    case 0x7F3495F4u: goto label_7F3495F4;
    case 0x7F3495F8u: goto label_7F3495F8;
    case 0x7F3495FCu: goto label_7F3495FC;
    case 0x7F349600u: goto label_7F349600;
    case 0x7F349604u: goto label_7F349604;
    case 0x7F349608u: goto label_7F349608;
    case 0x7F34960Cu: goto label_7F34960C;
    case 0x7F349610u: goto label_7F349610;
    case 0x7F349614u: goto label_7F349614;
    case 0x7F349618u: goto label_7F349618;
    case 0x7F34961Cu: goto label_7F34961C;
    case 0x7F349620u: goto label_7F349620;
    case 0x7F349624u: goto label_7F349624;
    case 0x7F349628u: goto label_7F349628;
    case 0x7F34962Cu: goto label_7F34962C;
    case 0x7F349630u: goto label_7F349630;
    case 0x7F349634u: goto label_7F349634;
    case 0x7F349638u: goto label_7F349638;
    case 0x7F34963Cu: goto label_7F34963C;
    case 0x7F349640u: goto label_7F349640;
    case 0x7F349644u: goto label_7F349644;
    case 0x7F349648u: goto label_7F349648;
    case 0x7F34964Cu: goto label_7F34964C;
    case 0x7F349650u: goto label_7F349650;
    case 0x7F349654u: goto label_7F349654;
    case 0x7F349658u: goto label_7F349658;
    case 0x7F34965Cu: goto label_7F34965C;
    case 0x7F349660u: goto label_7F349660;
    case 0x7F349664u: goto label_7F349664;
    case 0x7F349668u: goto label_7F349668;
    case 0x7F34966Cu: goto label_7F34966C;
    case 0x7F349670u: goto label_7F349670;
    case 0x7F349674u: goto label_7F349674;
    case 0x7F349678u: goto label_7F349678;
    case 0x7F34967Cu: goto label_7F34967C;
    case 0x7F349680u: goto label_7F349680;
    case 0x7F349684u: goto label_7F349684;
    case 0x7F349688u: goto label_7F349688;
    case 0x7F34968Cu: goto label_7F34968C;
    case 0x7F349690u: goto label_7F349690;
    case 0x7F349694u: goto label_7F349694;
    case 0x7F349698u: goto label_7F349698;
    case 0x7F34969Cu: goto label_7F34969C;
    case 0x7F3496A0u: goto label_7F3496A0;
    case 0x7F3496A4u: goto label_7F3496A4;
    case 0x7F3496A8u: goto label_7F3496A8;
    case 0x7F3496ACu: goto label_7F3496AC;
    case 0x7F3496B0u: goto label_7F3496B0;
    case 0x7F3496B4u: goto label_7F3496B4;
    case 0x7F3496B8u: goto label_7F3496B8;
    case 0x7F3496BCu: goto label_7F3496BC;
    case 0x7F3496C0u: goto label_7F3496C0;
    case 0x7F3496C4u: goto label_7F3496C4;
    case 0x7F3496C8u: goto label_7F3496C8;
    case 0x7F3496CCu: goto label_7F3496CC;
    case 0x7F3496D0u: goto label_7F3496D0;
    case 0x7F3496D4u: goto label_7F3496D4;
    case 0x7F3496D8u: goto label_7F3496D8;
    case 0x7F3496DCu: goto label_7F3496DC;
    case 0x7F3496E0u: goto label_7F3496E0;
    case 0x7F3496E4u: goto label_7F3496E4;
    case 0x7F3496E8u: goto label_7F3496E8;
    case 0x7F3496ECu: goto label_7F3496EC;
    case 0x7F3496F0u: goto label_7F3496F0;
    case 0x7F3496F4u: goto label_7F3496F4;
    case 0x7F3496F8u: goto label_7F3496F8;
    case 0x7F3496FCu: goto label_7F3496FC;
    case 0x7F349700u: goto label_7F349700;
    case 0x7F349704u: goto label_7F349704;
    case 0x7F349708u: goto label_7F349708;
    case 0x7F34970Cu: goto label_7F34970C;
    case 0x7F349710u: goto label_7F349710;
    case 0x7F349714u: goto label_7F349714;
    case 0x7F349718u: goto label_7F349718;
    case 0x7F34971Cu: goto label_7F34971C;
    case 0x7F349720u: goto label_7F349720;
    case 0x7F349724u: goto label_7F349724;
    case 0x7F349728u: goto label_7F349728;
    case 0x7F34972Cu: goto label_7F34972C;
    case 0x7F349730u: goto label_7F349730;
    case 0x7F349734u: goto label_7F349734;
    case 0x7F349738u: goto label_7F349738;
    case 0x7F34973Cu: goto label_7F34973C;
    case 0x7F349740u: goto label_7F349740;
    case 0x7F349744u: goto label_7F349744;
    case 0x7F349748u: goto label_7F349748;
    case 0x7F34974Cu: goto label_7F34974C;
    case 0x7F349750u: goto label_7F349750;
    case 0x7F349754u: goto label_7F349754;
    case 0x7F349758u: goto label_7F349758;
    case 0x7F34975Cu: goto label_7F34975C;
    case 0x7F349760u: goto label_7F349760;
    case 0x7F349764u: goto label_7F349764;
    case 0x7F349768u: goto label_7F349768;
    case 0x7F34976Cu: goto label_7F34976C;
    case 0x7F349770u: goto label_7F349770;
    case 0x7F349774u: goto label_7F349774;
    case 0x7F349778u: goto label_7F349778;
    case 0x7F34977Cu: goto label_7F34977C;
    case 0x7F349780u: goto label_7F349780;
    case 0x7F349784u: goto label_7F349784;
    case 0x7F349788u: goto label_7F349788;
    case 0x7F34978Cu: goto label_7F34978C;
    case 0x7F349790u: goto label_7F349790;
    case 0x7F349794u: goto label_7F349794;
    case 0x7F349798u: goto label_7F349798;
    case 0x7F34979Cu: goto label_7F34979C;
    case 0x7F3497A0u: goto label_7F3497A0;
    case 0x7F3497A4u: goto label_7F3497A4;
    case 0x7F3497A8u: goto label_7F3497A8;
    case 0x7F3497ACu: goto label_7F3497AC;
    case 0x7F3497B0u: goto label_7F3497B0;
    case 0x7F3497B4u: goto label_7F3497B4;
    case 0x7F3497B8u: goto label_7F3497B8;
    case 0x7F3497BCu: goto label_7F3497BC;
    case 0x7F3497C0u: goto label_7F3497C0;
    case 0x7F3497C4u: goto label_7F3497C4;
    case 0x7F3497C8u: goto label_7F3497C8;
    case 0x7F3497CCu: goto label_7F3497CC;
    case 0x7F3497D0u: goto label_7F3497D0;
    case 0x7F3497D4u: goto label_7F3497D4;
    case 0x7F3497D8u: goto label_7F3497D8;
    case 0x7F3497DCu: goto label_7F3497DC;
    case 0x7F3497E0u: goto label_7F3497E0;
    case 0x7F3497E4u: goto label_7F3497E4;
    case 0x7F3497E8u: goto label_7F3497E8;
    case 0x7F3497ECu: goto label_7F3497EC;
    case 0x7F3497F0u: goto label_7F3497F0;
    case 0x7F3497F4u: goto label_7F3497F4;
    case 0x7F3497F8u: goto label_7F3497F8;
    case 0x7F3497FCu: goto label_7F3497FC;
    case 0x7F349800u: goto label_7F349800;
    case 0x7F349804u: goto label_7F349804;
    case 0x7F349808u: goto label_7F349808;
    case 0x7F34980Cu: goto label_7F34980C;
    case 0x7F349810u: goto label_7F349810;
    case 0x7F349814u: goto label_7F349814;
    case 0x7F349818u: goto label_7F349818;
    case 0x7F34981Cu: goto label_7F34981C;
    case 0x7F349820u: goto label_7F349820;
    case 0x7F349824u: goto label_7F349824;
    case 0x7F349828u: goto label_7F349828;
    case 0x7F34982Cu: goto label_7F34982C;
    case 0x7F349830u: goto label_7F349830;
    case 0x7F349834u: goto label_7F349834;
    case 0x7F349838u: goto label_7F349838;
    case 0x7F34983Cu: goto label_7F34983C;
    case 0x7F349840u: goto label_7F349840;
    case 0x7F349844u: goto label_7F349844;
    case 0x7F349848u: goto label_7F349848;
    case 0x7F34984Cu: goto label_7F34984C;
    case 0x7F349850u: goto label_7F349850;
    case 0x7F349854u: goto label_7F349854;
    case 0x7F349858u: goto label_7F349858;
    case 0x7F34985Cu: goto label_7F34985C;
    case 0x7F349860u: goto label_7F349860;
    case 0x7F349864u: goto label_7F349864;
    case 0x7F349868u: goto label_7F349868;
    case 0x7F34986Cu: goto label_7F34986C;
    case 0x7F349870u: goto label_7F349870;
    case 0x7F349874u: goto label_7F349874;
    case 0x7F349878u: goto label_7F349878;
    case 0x7F34987Cu: goto label_7F34987C;
    case 0x7F349880u: goto label_7F349880;
    case 0x7F349884u: goto label_7F349884;
    case 0x7F349888u: goto label_7F349888;
    case 0x7F34988Cu: goto label_7F34988C;
    case 0x7F349890u: goto label_7F349890;
    case 0x7F349894u: goto label_7F349894;
    case 0x7F349898u: goto label_7F349898;
    case 0x7F34989Cu: goto label_7F34989C;
    case 0x7F3498A0u: goto label_7F3498A0;
    case 0x7F3498A4u: goto label_7F3498A4;
    case 0x7F3498A8u: goto label_7F3498A8;
    case 0x7F3498ACu: goto label_7F3498AC;
    case 0x7F3498B0u: goto label_7F3498B0;
    case 0x7F3498B4u: goto label_7F3498B4;
    case 0x7F3498B8u: goto label_7F3498B8;
    case 0x7F3498BCu: goto label_7F3498BC;
    case 0x7F3498C0u: goto label_7F3498C0;
    case 0x7F3498C4u: goto label_7F3498C4;
    case 0x7F3498C8u: goto label_7F3498C8;
    case 0x7F3498CCu: goto label_7F3498CC;
    case 0x7F3498D0u: goto label_7F3498D0;
    case 0x7F3498D4u: goto label_7F3498D4;
    case 0x7F3498D8u: goto label_7F3498D8;
    case 0x7F3498DCu: goto label_7F3498DC;
    case 0x7F3498E0u: goto label_7F3498E0;
    case 0x7F3498E4u: goto label_7F3498E4;
    case 0x7F3498E8u: goto label_7F3498E8;
    case 0x7F3498ECu: goto label_7F3498EC;
    case 0x7F3498F0u: goto label_7F3498F0;
    case 0x7F3498F4u: goto label_7F3498F4;
    case 0x7F3498F8u: goto label_7F3498F8;
    case 0x7F3498FCu: goto label_7F3498FC;
    case 0x7F349900u: goto label_7F349900;
    case 0x7F349904u: goto label_7F349904;
    case 0x7F349908u: goto label_7F349908;
    case 0x7F34990Cu: goto label_7F34990C;
    case 0x7F349910u: goto label_7F349910;
    case 0x7F349914u: goto label_7F349914;
    case 0x7F349918u: goto label_7F349918;
    case 0x7F34991Cu: goto label_7F34991C;
    case 0x7F349920u: goto label_7F349920;
    case 0x7F349924u: goto label_7F349924;
    case 0x7F349928u: goto label_7F349928;
    case 0x7F34992Cu: goto label_7F34992C;
    case 0x7F349930u: goto label_7F349930;
    case 0x7F349934u: goto label_7F349934;
    case 0x7F349938u: goto label_7F349938;
    case 0x7F34993Cu: goto label_7F34993C;
    case 0x7F349940u: goto label_7F349940;
    case 0x7F349944u: goto label_7F349944;
    case 0x7F349948u: goto label_7F349948;
    case 0x7F34994Cu: goto label_7F34994C;
    case 0x7F349950u: goto label_7F349950;
    case 0x7F349954u: goto label_7F349954;
    case 0x7F349958u: goto label_7F349958;
    case 0x7F34995Cu: goto label_7F34995C;
    case 0x7F349960u: goto label_7F349960;
    case 0x7F349964u: goto label_7F349964;
    case 0x7F349968u: goto label_7F349968;
    case 0x7F34996Cu: goto label_7F34996C;
    case 0x7F349970u: goto label_7F349970;
    case 0x7F349974u: goto label_7F349974;
    case 0x7F349978u: goto label_7F349978;
    case 0x7F34997Cu: goto label_7F34997C;
    case 0x7F349980u: goto label_7F349980;
    case 0x7F349984u: goto label_7F349984;
    case 0x7F349988u: goto label_7F349988;
    case 0x7F34998Cu: goto label_7F34998C;
    case 0x7F349990u: goto label_7F349990;
    case 0x7F349994u: goto label_7F349994;
    case 0x7F349998u: goto label_7F349998;
    case 0x7F34999Cu: goto label_7F34999C;
    case 0x7F3499A0u: goto label_7F3499A0;
    case 0x7F3499A4u: goto label_7F3499A4;
    case 0x7F3499A8u: goto label_7F3499A8;
    case 0x7F3499ACu: goto label_7F3499AC;
    case 0x7F3499B0u: goto label_7F3499B0;
    case 0x7F3499B4u: goto label_7F3499B4;
    case 0x7F3499B8u: goto label_7F3499B8;
    case 0x7F3499BCu: goto label_7F3499BC;
    case 0x7F3499C0u: goto label_7F3499C0;
    case 0x7F3499C4u: goto label_7F3499C4;
    case 0x7F3499C8u: goto label_7F3499C8;
    case 0x7F3499CCu: goto label_7F3499CC;
    case 0x7F3499D0u: goto label_7F3499D0;
    case 0x7F3499D4u: goto label_7F3499D4;
    case 0x7F3499D8u: goto label_7F3499D8;
    case 0x7F3499DCu: goto label_7F3499DC;
    case 0x7F3499E0u: goto label_7F3499E0;
    case 0x7F3499E4u: goto label_7F3499E4;
    case 0x7F3499E8u: goto label_7F3499E8;
    case 0x7F3499ECu: goto label_7F3499EC;
    case 0x7F3499F0u: goto label_7F3499F0;
    case 0x7F3499F4u: goto label_7F3499F4;
    case 0x7F3499F8u: goto label_7F3499F8;
    case 0x7F3499FCu: goto label_7F3499FC;
    case 0x7F349A00u: goto label_7F349A00;
    case 0x7F349A04u: goto label_7F349A04;
    case 0x7F349A08u: goto label_7F349A08;
    case 0x7F349A0Cu: goto label_7F349A0C;
    case 0x7F349A10u: goto label_7F349A10;
    case 0x7F349A14u: goto label_7F349A14;
    case 0x7F349A18u: goto label_7F349A18;
    case 0x7F349A1Cu: goto label_7F349A1C;
    case 0x7F349A20u: goto label_7F349A20;
    case 0x7F349A24u: goto label_7F349A24;
    case 0x7F349A28u: goto label_7F349A28;
    case 0x7F349A2Cu: goto label_7F349A2C;
    case 0x7F349A30u: goto label_7F349A30;
    case 0x7F349A34u: goto label_7F349A34;
    case 0x7F349A38u: goto label_7F349A38;
    case 0x7F349A3Cu: goto label_7F349A3C;
    case 0x7F349A40u: goto label_7F349A40;
    case 0x7F349A44u: goto label_7F349A44;
    case 0x7F349A48u: goto label_7F349A48;
    case 0x7F349A4Cu: goto label_7F349A4C;
    case 0x7F349A50u: goto label_7F349A50;
    case 0x7F349A54u: goto label_7F349A54;
    case 0x7F349A58u: goto label_7F349A58;
    case 0x7F349A5Cu: goto label_7F349A5C;
    case 0x7F349A60u: goto label_7F349A60;
    case 0x7F349A64u: goto label_7F349A64;
    case 0x7F349A68u: goto label_7F349A68;
    case 0x7F349A6Cu: goto label_7F349A6C;
    case 0x7F349A70u: goto label_7F349A70;
    case 0x7F349A74u: goto label_7F349A74;
    case 0x7F349A78u: goto label_7F349A78;
    case 0x7F349A7Cu: goto label_7F349A7C;
    case 0x7F349A80u: goto label_7F349A80;
    case 0x7F349A84u: goto label_7F349A84;
    case 0x7F349A88u: goto label_7F349A88;
    case 0x7F349A8Cu: goto label_7F349A8C;
    case 0x7F349A90u: goto label_7F349A90;
    case 0x7F349A94u: goto label_7F349A94;
    case 0x7F349A98u: goto label_7F349A98;
    case 0x7F349A9Cu: goto label_7F349A9C;
    case 0x7F349AA0u: goto label_7F349AA0;
    case 0x7F349AA4u: goto label_7F349AA4;
    case 0x7F349AA8u: goto label_7F349AA8;
    case 0x7F349AACu: goto label_7F349AAC;
    case 0x7F349AB0u: goto label_7F349AB0;
    case 0x7F349AB4u: goto label_7F349AB4;
    case 0x7F349AB8u: goto label_7F349AB8;
    case 0x7F349ABCu: goto label_7F349ABC;
    case 0x7F349AC0u: goto label_7F349AC0;
    case 0x7F349AC4u: goto label_7F349AC4;
    case 0x7F349AC8u: goto label_7F349AC8;
    case 0x7F349ACCu: goto label_7F349ACC;
    case 0x7F349AD0u: goto label_7F349AD0;
    case 0x7F349AD4u: goto label_7F349AD4;
    case 0x7F349AD8u: goto label_7F349AD8;
    case 0x7F349ADCu: goto label_7F349ADC;
    case 0x7F349AE0u: goto label_7F349AE0;
    case 0x7F349AE4u: goto label_7F349AE4;
    case 0x7F349AE8u: goto label_7F349AE8;
    case 0x7F349AECu: goto label_7F349AEC;
    case 0x7F349AF0u: goto label_7F349AF0;
    case 0x7F349AF4u: goto label_7F349AF4;
    case 0x7F349AF8u: goto label_7F349AF8;
    case 0x7F349AFCu: goto label_7F349AFC;
    case 0x7F349B00u: goto label_7F349B00;
    case 0x7F349B04u: goto label_7F349B04;
    case 0x7F349B08u: goto label_7F349B08;
    case 0x7F349B0Cu: goto label_7F349B0C;
    case 0x7F349B10u: goto label_7F349B10;
    case 0x7F349B14u: goto label_7F349B14;
    case 0x7F349B18u: goto label_7F349B18;
    case 0x7F349B1Cu: goto label_7F349B1C;
    case 0x7F349B20u: goto label_7F349B20;
    case 0x7F349B24u: goto label_7F349B24;
    case 0x7F349B28u: goto label_7F349B28;
    case 0x7F349B2Cu: goto label_7F349B2C;
    case 0x7F349B30u: goto label_7F349B30;
    case 0x7F349B34u: goto label_7F349B34;
    case 0x7F349B38u: goto label_7F349B38;
    case 0x7F349B3Cu: goto label_7F349B3C;
    case 0x7F349B40u: goto label_7F349B40;
    case 0x7F349B44u: goto label_7F349B44;
    case 0x7F349B48u: goto label_7F349B48;
    case 0x7F349B4Cu: goto label_7F349B4C;
    case 0x7F349B50u: goto label_7F349B50;
    case 0x7F349B54u: goto label_7F349B54;
    case 0x7F349B58u: goto label_7F349B58;
    case 0x7F349B5Cu: goto label_7F349B5C;
    case 0x7F349B60u: goto label_7F349B60;
    case 0x7F349B64u: goto label_7F349B64;
    case 0x7F349B68u: goto label_7F349B68;
    case 0x7F349B6Cu: goto label_7F349B6C;
    case 0x7F349B70u: goto label_7F349B70;
    case 0x7F349B74u: goto label_7F349B74;
    case 0x7F349B78u: goto label_7F349B78;
    case 0x7F349B7Cu: goto label_7F349B7C;
    case 0x7F349B80u: goto label_7F349B80;
    case 0x7F349B84u: goto label_7F349B84;
    case 0x7F349B88u: goto label_7F349B88;
    case 0x7F349B8Cu: goto label_7F349B8C;
    case 0x7F349B90u: goto label_7F349B90;
    case 0x7F349B94u: goto label_7F349B94;
    case 0x7F349B98u: goto label_7F349B98;
    case 0x7F349B9Cu: goto label_7F349B9C;
    case 0x7F349BA0u: goto label_7F349BA0;
    case 0x7F349BA4u: goto label_7F349BA4;
    case 0x7F349BA8u: goto label_7F349BA8;
    case 0x7F349BACu: goto label_7F349BAC;
    case 0x7F349BB0u: goto label_7F349BB0;
    case 0x7F349BB4u: goto label_7F349BB4;
    case 0x7F349BB8u: goto label_7F349BB8;
    case 0x7F349BBCu: goto label_7F349BBC;
    case 0x7F349BC0u: goto label_7F349BC0;
    case 0x7F349BC4u: goto label_7F349BC4;
    case 0x7F349BC8u: goto label_7F349BC8;
    case 0x7F349BCCu: goto label_7F349BCC;
    case 0x7F349BD0u: goto label_7F349BD0;
    case 0x7F349BD4u: goto label_7F349BD4;
    case 0x7F349BD8u: goto label_7F349BD8;
    case 0x7F349BDCu: goto label_7F349BDC;
    case 0x7F349BE0u: goto label_7F349BE0;
    case 0x7F349BE4u: goto label_7F349BE4;
    case 0x7F349BE8u: goto label_7F349BE8;
    case 0x7F349BECu: goto label_7F349BEC;
    case 0x7F349BF0u: goto label_7F349BF0;
    case 0x7F349BF4u: goto label_7F349BF4;
    case 0x7F349BF8u: goto label_7F349BF8;
    case 0x7F349BFCu: goto label_7F349BFC;
    case 0x7F349C00u: goto label_7F349C00;
    case 0x7F349C04u: goto label_7F349C04;
    case 0x7F349C08u: goto label_7F349C08;
    case 0x7F349C0Cu: goto label_7F349C0C;
    case 0x7F349C10u: goto label_7F349C10;
    case 0x7F349C14u: goto label_7F349C14;
    case 0x7F349C18u: goto label_7F349C18;
    case 0x7F349C1Cu: goto label_7F349C1C;
    case 0x7F349C20u: goto label_7F349C20;
    case 0x7F349C24u: goto label_7F349C24;
    case 0x7F349C28u: goto label_7F349C28;
    case 0x7F349C2Cu: goto label_7F349C2C;
    case 0x7F349C30u: goto label_7F349C30;
    case 0x7F349C34u: goto label_7F349C34;
    case 0x7F349C38u: goto label_7F349C38;
    case 0x7F349C3Cu: goto label_7F349C3C;
    case 0x7F349C40u: goto label_7F349C40;
    case 0x7F349C44u: goto label_7F349C44;
    case 0x7F349C48u: goto label_7F349C48;
    case 0x7F349C4Cu: goto label_7F349C4C;
    case 0x7F349C50u: goto label_7F349C50;
    case 0x7F349C54u: goto label_7F349C54;
    case 0x7F349C58u: goto label_7F349C58;
    case 0x7F349C5Cu: goto label_7F349C5C;
    case 0x7F349C60u: goto label_7F349C60;
    case 0x7F349C64u: goto label_7F349C64;
    case 0x7F349C68u: goto label_7F349C68;
    case 0x7F349C6Cu: goto label_7F349C6C;
    case 0x7F349C70u: goto label_7F349C70;
    case 0x7F349C74u: goto label_7F349C74;
    case 0x7F349C78u: goto label_7F349C78;
    case 0x7F349C7Cu: goto label_7F349C7C;
    case 0x7F349C80u: goto label_7F349C80;
    case 0x7F349C84u: goto label_7F349C84;
    case 0x7F349C88u: goto label_7F349C88;
    case 0x7F349C8Cu: goto label_7F349C8C;
    case 0x7F349C90u: goto label_7F349C90;
    case 0x7F349C94u: goto label_7F349C94;
    case 0x7F349C98u: goto label_7F349C98;
    case 0x7F349C9Cu: goto label_7F349C9C;
    case 0x7F349CA0u: goto label_7F349CA0;
    case 0x7F349CA4u: goto label_7F349CA4;
    case 0x7F349CA8u: goto label_7F349CA8;
    case 0x7F349CACu: goto label_7F349CAC;
    case 0x7F349CB0u: goto label_7F349CB0;
    case 0x7F349CB4u: goto label_7F349CB4;
    case 0x7F349CB8u: goto label_7F349CB8;
    case 0x7F349CBCu: goto label_7F349CBC;
    case 0x7F349CC0u: goto label_7F349CC0;
    case 0x7F349CC4u: goto label_7F349CC4;
    case 0x7F349CC8u: goto label_7F349CC8;
    case 0x7F349CCCu: goto label_7F349CCC;
    case 0x7F349CD0u: goto label_7F349CD0;
    case 0x7F349CD4u: goto label_7F349CD4;
    case 0x7F349CD8u: goto label_7F349CD8;
    case 0x7F349CDCu: goto label_7F349CDC;
    case 0x7F349CE0u: goto label_7F349CE0;
    case 0x7F349CE4u: goto label_7F349CE4;
    case 0x7F349CE8u: goto label_7F349CE8;
    case 0x7F349CECu: goto label_7F349CEC;
    case 0x7F349CF0u: goto label_7F349CF0;
    case 0x7F349CF4u: goto label_7F349CF4;
    case 0x7F349CF8u: goto label_7F349CF8;
    case 0x7F349CFCu: goto label_7F349CFC;
    case 0x7F349D00u: goto label_7F349D00;
    case 0x7F349D04u: goto label_7F349D04;
    case 0x7F349D08u: goto label_7F349D08;
    case 0x7F349D0Cu: goto label_7F349D0C;
    case 0x7F349D10u: goto label_7F349D10;
    case 0x7F349D14u: goto label_7F349D14;
    case 0x7F349D18u: goto label_7F349D18;
    case 0x7F349D1Cu: goto label_7F349D1C;
    case 0x7F349D20u: goto label_7F349D20;
    case 0x7F349D24u: goto label_7F349D24;
    case 0x7F349D28u: goto label_7F349D28;
    case 0x7F349D2Cu: goto label_7F349D2C;
    case 0x7F349D30u: goto label_7F349D30;
    case 0x7F349D34u: goto label_7F349D34;
    case 0x7F349D38u: goto label_7F349D38;
    case 0x7F349D3Cu: goto label_7F349D3C;
    case 0x7F349D40u: goto label_7F349D40;
    case 0x7F349D44u: goto label_7F349D44;
    case 0x7F349D48u: goto label_7F349D48;
    case 0x7F349D4Cu: goto label_7F349D4C;
    case 0x7F349D50u: goto label_7F349D50;
    case 0x7F349D54u: goto label_7F349D54;
    case 0x7F349D58u: goto label_7F349D58;
    case 0x7F349D5Cu: goto label_7F349D5C;
    case 0x7F349D60u: goto label_7F349D60;
    case 0x7F349D64u: goto label_7F349D64;
    case 0x7F349D68u: goto label_7F349D68;
    case 0x7F349D6Cu: goto label_7F349D6C;
    case 0x7F349D70u: goto label_7F349D70;
    case 0x7F349D74u: goto label_7F349D74;
    case 0x7F349D78u: goto label_7F349D78;
    case 0x7F349D7Cu: goto label_7F349D7C;
    case 0x7F349D80u: goto label_7F349D80;
    case 0x7F349D84u: goto label_7F349D84;
    case 0x7F349D88u: goto label_7F349D88;
    case 0x7F349D8Cu: goto label_7F349D8C;
    case 0x7F349D90u: goto label_7F349D90;
    case 0x7F349D94u: goto label_7F349D94;
    case 0x7F349D98u: goto label_7F349D98;
    case 0x7F349D9Cu: goto label_7F349D9C;
    case 0x7F349DA0u: goto label_7F349DA0;
    case 0x7F349DA4u: goto label_7F349DA4;
    case 0x7F349DA8u: goto label_7F349DA8;
    case 0x7F349DACu: goto label_7F349DAC;
    case 0x7F349DB0u: goto label_7F349DB0;
    case 0x7F349DB4u: goto label_7F349DB4;
    case 0x7F349DB8u: goto label_7F349DB8;
    case 0x7F349DBCu: goto label_7F349DBC;
    case 0x7F349DC0u: goto label_7F349DC0;
    case 0x7F349DC4u: goto label_7F349DC4;
    case 0x7F349DC8u: goto label_7F349DC8;
    case 0x7F349DCCu: goto label_7F349DCC;
    case 0x7F349DD0u: goto label_7F349DD0;
    case 0x7F349DD4u: goto label_7F349DD4;
    case 0x7F349DD8u: goto label_7F349DD8;
    case 0x7F349DDCu: goto label_7F349DDC;
    case 0x7F349DE0u: goto label_7F349DE0;
    case 0x7F349DE4u: goto label_7F349DE4;
    case 0x7F349DE8u: goto label_7F349DE8;
    case 0x7F349DECu: goto label_7F349DEC;
    case 0x7F349DF0u: goto label_7F349DF0;
    case 0x7F349DF4u: goto label_7F349DF4;
    case 0x7F349DF8u: goto label_7F349DF8;
    case 0x7F349DFCu: goto label_7F349DFC;
    case 0x7F349E00u: goto label_7F349E00;
    case 0x7F349E04u: goto label_7F349E04;
    case 0x7F349E08u: goto label_7F349E08;
    case 0x7F349E0Cu: goto label_7F349E0C;
    case 0x7F349E10u: goto label_7F349E10;
    case 0x7F349E14u: goto label_7F349E14;
    case 0x7F349E18u: goto label_7F349E18;
    case 0x7F349E1Cu: goto label_7F349E1C;
    case 0x7F349E20u: goto label_7F349E20;
    case 0x7F349E24u: goto label_7F349E24;
    case 0x7F349E28u: goto label_7F349E28;
    case 0x7F349E2Cu: goto label_7F349E2C;
    case 0x7F349E30u: goto label_7F349E30;
    case 0x7F349E34u: goto label_7F349E34;
    case 0x7F349E38u: goto label_7F349E38;
    case 0x7F349E3Cu: goto label_7F349E3C;
    case 0x7F349E40u: goto label_7F349E40;
    case 0x7F349E44u: goto label_7F349E44;
    case 0x7F349E48u: goto label_7F349E48;
    case 0x7F349E4Cu: goto label_7F349E4C;
    case 0x7F349E50u: goto label_7F349E50;
    case 0x7F349E54u: goto label_7F349E54;
    case 0x7F349E58u: goto label_7F349E58;
    case 0x7F349E5Cu: goto label_7F349E5C;
    case 0x7F349E60u: goto label_7F349E60;
    case 0x7F349E64u: goto label_7F349E64;
    case 0x7F349E68u: goto label_7F349E68;
    case 0x7F349E6Cu: goto label_7F349E6C;
    case 0x7F349E70u: goto label_7F349E70;
    case 0x7F349E74u: goto label_7F349E74;
    case 0x7F349E78u: goto label_7F349E78;
    case 0x7F349E7Cu: goto label_7F349E7C;
    case 0x7F349E80u: goto label_7F349E80;
    case 0x7F349E84u: goto label_7F349E84;
    case 0x7F349E88u: goto label_7F349E88;
    case 0x7F349E8Cu: goto label_7F349E8C;
    case 0x7F349E90u: goto label_7F349E90;
    case 0x7F349E94u: goto label_7F349E94;
    case 0x7F349E98u: goto label_7F349E98;
    case 0x7F349E9Cu: goto label_7F349E9C;
    case 0x7F349EA0u: goto label_7F349EA0;
    case 0x7F349EA4u: goto label_7F349EA4;
    case 0x7F349EA8u: goto label_7F349EA8;
    case 0x7F349EACu: goto label_7F349EAC;
    case 0x7F349EB0u: goto label_7F349EB0;
    case 0x7F349EB4u: goto label_7F349EB4;
    case 0x7F349EB8u: goto label_7F349EB8;
    case 0x7F349EBCu: goto label_7F349EBC;
    case 0x7F349EC0u: goto label_7F349EC0;
    case 0x7F349EC4u: goto label_7F349EC4;
    case 0x7F349EC8u: goto label_7F349EC8;
    case 0x7F349ECCu: goto label_7F349ECC;
    case 0x7F349ED0u: goto label_7F349ED0;
    case 0x7F349ED4u: goto label_7F349ED4;
    case 0x7F349ED8u: goto label_7F349ED8;
    case 0x7F349EDCu: goto label_7F349EDC;
    case 0x7F349EE0u: goto label_7F349EE0;
    case 0x7F349EE4u: goto label_7F349EE4;
    case 0x7F349EE8u: goto label_7F349EE8;
    case 0x7F349EECu: goto label_7F349EEC;
    case 0x7F349EF0u: goto label_7F349EF0;
    case 0x7F349EF4u: goto label_7F349EF4;
    case 0x7F349EF8u: goto label_7F349EF8;
    case 0x7F349EFCu: goto label_7F349EFC;
    case 0x7F349F00u: goto label_7F349F00;
    case 0x7F349F04u: goto label_7F349F04;
    case 0x7F349F08u: goto label_7F349F08;
    case 0x7F349F0Cu: goto label_7F349F0C;
    case 0x7F349F10u: goto label_7F349F10;
    case 0x7F349F14u: goto label_7F349F14;
    case 0x7F349F18u: goto label_7F349F18;
    case 0x7F349F1Cu: goto label_7F349F1C;
    case 0x7F349F20u: goto label_7F349F20;
    case 0x7F349F24u: goto label_7F349F24;
    case 0x7F349F28u: goto label_7F349F28;
    case 0x7F349F2Cu: goto label_7F349F2C;
    case 0x7F349F30u: goto label_7F349F30;
    case 0x7F349F34u: goto label_7F349F34;
    case 0x7F349F38u: goto label_7F349F38;
    case 0x7F349F3Cu: goto label_7F349F3C;
    case 0x7F349F40u: goto label_7F349F40;
    case 0x7F349F44u: goto label_7F349F44;
    case 0x7F349F48u: goto label_7F349F48;
    case 0x7F349F4Cu: goto label_7F349F4C;
    case 0x7F349F50u: goto label_7F349F50;
    case 0x7F349F54u: goto label_7F349F54;
    case 0x7F349F58u: goto label_7F349F58;
    case 0x7F349F5Cu: goto label_7F349F5C;
    case 0x7F349F60u: goto label_7F349F60;
    case 0x7F349F64u: goto label_7F349F64;
    case 0x7F349F68u: goto label_7F349F68;
    case 0x7F349F6Cu: goto label_7F349F6C;
    case 0x7F349F70u: goto label_7F349F70;
    case 0x7F349F74u: goto label_7F349F74;
    case 0x7F349F78u: goto label_7F349F78;
    case 0x7F349F7Cu: goto label_7F349F7C;
    case 0x7F349F80u: goto label_7F349F80;
    case 0x7F349F84u: goto label_7F349F84;
    case 0x7F349F88u: goto label_7F349F88;
    case 0x7F349F8Cu: goto label_7F349F8C;
    case 0x7F349F90u: goto label_7F349F90;
    case 0x7F349F94u: goto label_7F349F94;
    case 0x7F349F98u: goto label_7F349F98;
    case 0x7F349F9Cu: goto label_7F349F9C;
    case 0x7F349FA0u: goto label_7F349FA0;
    case 0x7F349FA4u: goto label_7F349FA4;
    case 0x7F349FA8u: goto label_7F349FA8;
    case 0x7F349FACu: goto label_7F349FAC;
    case 0x7F349FB0u: goto label_7F349FB0;
    case 0x7F349FB4u: goto label_7F349FB4;
    case 0x7F349FB8u: goto label_7F349FB8;
    case 0x7F349FBCu: goto label_7F349FBC;
    case 0x7F349FC0u: goto label_7F349FC0;
    case 0x7F349FC4u: goto label_7F349FC4;
    case 0x7F349FC8u: goto label_7F349FC8;
    case 0x7F349FCCu: goto label_7F349FCC;
    case 0x7F349FD0u: goto label_7F349FD0;
    case 0x7F349FD4u: goto label_7F349FD4;
    case 0x7F349FD8u: goto label_7F349FD8;
    case 0x7F349FDCu: goto label_7F349FDC;
    case 0x7F349FE0u: goto label_7F349FE0;
    case 0x7F349FE4u: goto label_7F349FE4;
    case 0x7F349FE8u: goto label_7F349FE8;
    case 0x7F349FECu: goto label_7F349FEC;
    case 0x7F349FF0u: goto label_7F349FF0;
    case 0x7F349FF4u: goto label_7F349FF4;
    case 0x7F349FF8u: goto label_7F349FF8;
    case 0x7F349FFCu: goto label_7F349FFC;
    case 0x7F34A000u: goto label_7F34A000;
    case 0x7F34A004u: goto label_7F34A004;
    case 0x7F34A008u: goto label_7F34A008;
    case 0x7F34A00Cu: goto label_7F34A00C;
    case 0x7F34A010u: goto label_7F34A010;
    case 0x7F34A014u: goto label_7F34A014;
    case 0x7F34A018u: goto label_7F34A018;
    case 0x7F34A01Cu: goto label_7F34A01C;
    case 0x7F34A020u: goto label_7F34A020;
    case 0x7F34A024u: goto label_7F34A024;
    case 0x7F34A028u: goto label_7F34A028;
    case 0x7F34A02Cu: goto label_7F34A02C;
    case 0x7F34A030u: goto label_7F34A030;
    case 0x7F34A034u: goto label_7F34A034;
    case 0x7F34A038u: goto label_7F34A038;
    case 0x7F34A03Cu: goto label_7F34A03C;
    case 0x7F34A040u: goto label_7F34A040;
    case 0x7F34A044u: goto label_7F34A044;
    case 0x7F34A048u: goto label_7F34A048;
    case 0x7F34A04Cu: goto label_7F34A04C;
    case 0x7F34A050u: goto label_7F34A050;
    case 0x7F34A054u: goto label_7F34A054;
    case 0x7F34A058u: goto label_7F34A058;
    case 0x7F34A05Cu: goto label_7F34A05C;
    case 0x7F34A060u: goto label_7F34A060;
    case 0x7F34A064u: goto label_7F34A064;
    case 0x7F34A068u: goto label_7F34A068;
    case 0x7F34A06Cu: goto label_7F34A06C;
    case 0x7F34A070u: goto label_7F34A070;
    case 0x7F34A074u: goto label_7F34A074;
    case 0x7F34A078u: goto label_7F34A078;
    case 0x7F34A07Cu: goto label_7F34A07C;
    case 0x7F34A080u: goto label_7F34A080;
    case 0x7F34A084u: goto label_7F34A084;
    case 0x7F34A088u: goto label_7F34A088;
    case 0x7F34A08Cu: goto label_7F34A08C;
    case 0x7F34A090u: goto label_7F34A090;
    case 0x7F34A094u: goto label_7F34A094;
    case 0x7F34A098u: goto label_7F34A098;
    case 0x7F34A09Cu: goto label_7F34A09C;
    case 0x7F34A0A0u: goto label_7F34A0A0;
    case 0x7F34A0A4u: goto label_7F34A0A4;
    case 0x7F34A0A8u: goto label_7F34A0A8;
    case 0x7F34A0ACu: goto label_7F34A0AC;
    case 0x7F34A0B0u: goto label_7F34A0B0;
    case 0x7F34A0B4u: goto label_7F34A0B4;
    case 0x7F34A0B8u: goto label_7F34A0B8;
    case 0x7F34A0BCu: goto label_7F34A0BC;
    case 0x7F34A0C0u: goto label_7F34A0C0;
    case 0x7F34A0C4u: goto label_7F34A0C4;
    case 0x7F34A0C8u: goto label_7F34A0C8;
    case 0x7F34A0CCu: goto label_7F34A0CC;
    case 0x7F34A0D0u: goto label_7F34A0D0;
    case 0x7F34A0D4u: goto label_7F34A0D4;
    case 0x7F34A0D8u: goto label_7F34A0D8;
    case 0x7F34A0DCu: goto label_7F34A0DC;
    case 0x7F34A0E0u: goto label_7F34A0E0;
    case 0x7F34A0E4u: goto label_7F34A0E4;
    case 0x7F34A0E8u: goto label_7F34A0E8;
    case 0x7F34A0ECu: goto label_7F34A0EC;
    case 0x7F34A0F0u: goto label_7F34A0F0;
    case 0x7F34A0F4u: goto label_7F34A0F4;
    case 0x7F34A0F8u: goto label_7F34A0F8;
    case 0x7F34A0FCu: goto label_7F34A0FC;
    case 0x7F34A100u: goto label_7F34A100;
    case 0x7F34A104u: goto label_7F34A104;
    case 0x7F34A108u: goto label_7F34A108;
    case 0x7F34A10Cu: goto label_7F34A10C;
    case 0x7F34A110u: goto label_7F34A110;
    case 0x7F34A114u: goto label_7F34A114;
    case 0x7F34A118u: goto label_7F34A118;
    case 0x7F34A11Cu: goto label_7F34A11C;
    case 0x7F34A120u: goto label_7F34A120;
    case 0x7F34A124u: goto label_7F34A124;
    case 0x7F34A128u: goto label_7F34A128;
    case 0x7F34A12Cu: goto label_7F34A12C;
    case 0x7F34A130u: goto label_7F34A130;
    case 0x7F34A134u: goto label_7F34A134;
    case 0x7F34A138u: goto label_7F34A138;
    case 0x7F34A13Cu: goto label_7F34A13C;
    case 0x7F34A140u: goto label_7F34A140;
    case 0x7F34A144u: goto label_7F34A144;
    case 0x7F34A148u: goto label_7F34A148;
    case 0x7F34A14Cu: goto label_7F34A14C;
    case 0x7F34A150u: goto label_7F34A150;
    case 0x7F34A154u: goto label_7F34A154;
    case 0x7F34A158u: goto label_7F34A158;
    case 0x7F34A15Cu: goto label_7F34A15C;
    case 0x7F34A160u: goto label_7F34A160;
    case 0x7F34A164u: goto label_7F34A164;
    case 0x7F34A168u: goto label_7F34A168;
    case 0x7F34A16Cu: goto label_7F34A16C;
    case 0x7F34A170u: goto label_7F34A170;
    case 0x7F34A174u: goto label_7F34A174;
    case 0x7F34A178u: goto label_7F34A178;
    case 0x7F34A17Cu: goto label_7F34A17C;
    case 0x7F34A180u: goto label_7F34A180;
    case 0x7F34A184u: goto label_7F34A184;
    case 0x7F34A188u: goto label_7F34A188;
    case 0x7F34A18Cu: goto label_7F34A18C;
    case 0x7F34A190u: goto label_7F34A190;
    case 0x7F34A194u: goto label_7F34A194;
    case 0x7F34A198u: goto label_7F34A198;
    case 0x7F34A19Cu: goto label_7F34A19C;
    case 0x7F34A1A0u: goto label_7F34A1A0;
    case 0x7F34A1A4u: goto label_7F34A1A4;
    case 0x7F34A1A8u: goto label_7F34A1A8;
    case 0x7F34A1ACu: goto label_7F34A1AC;
    case 0x7F34A1B0u: goto label_7F34A1B0;
    case 0x7F34A1B4u: goto label_7F34A1B4;
    case 0x7F34A1B8u: goto label_7F34A1B8;
    case 0x7F34A1BCu: goto label_7F34A1BC;
    case 0x7F34A1C0u: goto label_7F34A1C0;
    case 0x7F34A1C4u: goto label_7F34A1C4;
    case 0x7F34A1C8u: goto label_7F34A1C8;
    case 0x7F34A1CCu: goto label_7F34A1CC;
    case 0x7F34A1D0u: goto label_7F34A1D0;
    case 0x7F34A1D4u: goto label_7F34A1D4;
    case 0x7F34A1D8u: goto label_7F34A1D8;
    case 0x7F34A1DCu: goto label_7F34A1DC;
    case 0x7F34A1E0u: goto label_7F34A1E0;
    case 0x7F34A1E4u: goto label_7F34A1E4;
    case 0x7F34A1E8u: goto label_7F34A1E8;
    case 0x7F34A1ECu: goto label_7F34A1EC;
    case 0x7F34A1F0u: goto label_7F34A1F0;
    case 0x7F34A1F4u: goto label_7F34A1F4;
    case 0x7F34A1F8u: goto label_7F34A1F8;
    case 0x7F34A1FCu: goto label_7F34A1FC;
    case 0x7F34A200u: goto label_7F34A200;
    case 0x7F34A204u: goto label_7F34A204;
    case 0x7F34A208u: goto label_7F34A208;
    case 0x7F34A20Cu: goto label_7F34A20C;
    case 0x7F34A210u: goto label_7F34A210;
    case 0x7F34A214u: goto label_7F34A214;
    case 0x7F34A218u: goto label_7F34A218;
    case 0x7F34A21Cu: goto label_7F34A21C;
    case 0x7F34A220u: goto label_7F34A220;
    case 0x7F34A224u: goto label_7F34A224;
    case 0x7F34A228u: goto label_7F34A228;
    case 0x7F34A22Cu: goto label_7F34A22C;
    case 0x7F34A230u: goto label_7F34A230;
    case 0x7F34A234u: goto label_7F34A234;
    case 0x7F34A238u: goto label_7F34A238;
    case 0x7F34A23Cu: goto label_7F34A23C;
    case 0x7F34A240u: goto label_7F34A240;
    case 0x7F34A244u: goto label_7F34A244;
    case 0x7F34A248u: goto label_7F34A248;
    case 0x7F34A24Cu: goto label_7F34A24C;
    case 0x7F34A250u: goto label_7F34A250;
    case 0x7F34A254u: goto label_7F34A254;
    case 0x7F34A258u: goto label_7F34A258;
    case 0x7F34A25Cu: goto label_7F34A25C;
    case 0x7F34A260u: goto label_7F34A260;
    case 0x7F34A264u: goto label_7F34A264;
    case 0x7F34A268u: goto label_7F34A268;
    case 0x7F34A26Cu: goto label_7F34A26C;
    case 0x7F34A270u: goto label_7F34A270;
    case 0x7F34A274u: goto label_7F34A274;
    case 0x7F34A278u: goto label_7F34A278;
    case 0x7F34A27Cu: goto label_7F34A27C;
    case 0x7F34A280u: goto label_7F34A280;
    case 0x7F34A284u: goto label_7F34A284;
    case 0x7F34A288u: goto label_7F34A288;
    case 0x7F34A28Cu: goto label_7F34A28C;
    case 0x7F34A290u: goto label_7F34A290;
    case 0x7F34A294u: goto label_7F34A294;
    case 0x7F34A298u: goto label_7F34A298;
    case 0x7F34A29Cu: goto label_7F34A29C;
    case 0x7F34A2A0u: goto label_7F34A2A0;
    case 0x7F34A2A4u: goto label_7F34A2A4;
    case 0x7F34A2A8u: goto label_7F34A2A8;
    case 0x7F34A2ACu: goto label_7F34A2AC;
    case 0x7F34A2B0u: goto label_7F34A2B0;
    case 0x7F34A2B4u: goto label_7F34A2B4;
    case 0x7F34A2B8u: goto label_7F34A2B8;
    case 0x7F34A2BCu: goto label_7F34A2BC;
    case 0x7F34A2C0u: goto label_7F34A2C0;
    case 0x7F34A2C4u: goto label_7F34A2C4;
    case 0x7F34A2C8u: goto label_7F34A2C8;
    case 0x7F34A2CCu: goto label_7F34A2CC;
    case 0x7F34A2D0u: goto label_7F34A2D0;
    case 0x7F34A2D4u: goto label_7F34A2D4;
    case 0x7F34A2D8u: goto label_7F34A2D8;
    case 0x7F34A2DCu: goto label_7F34A2DC;
    case 0x7F34A2E0u: goto label_7F34A2E0;
    case 0x7F34A2E4u: goto label_7F34A2E4;
    case 0x7F34A2E8u: goto label_7F34A2E8;
    case 0x7F34A2ECu: goto label_7F34A2EC;
    case 0x7F34A2F0u: goto label_7F34A2F0;
    case 0x7F34A2F4u: goto label_7F34A2F4;
    case 0x7F34A2F8u: goto label_7F34A2F8;
    case 0x7F34A2FCu: goto label_7F34A2FC;
    case 0x7F34A300u: goto label_7F34A300;
    case 0x7F34A304u: goto label_7F34A304;
    case 0x7F34A308u: goto label_7F34A308;
    case 0x7F34A30Cu: goto label_7F34A30C;
    case 0x7F34A310u: goto label_7F34A310;
    case 0x7F34A314u: goto label_7F34A314;
    case 0x7F34A318u: goto label_7F34A318;
    case 0x7F34A31Cu: goto label_7F34A31C;
    case 0x7F34A320u: goto label_7F34A320;
    case 0x7F34A324u: goto label_7F34A324;
    case 0x7F34A328u: goto label_7F34A328;
    case 0x7F34A32Cu: goto label_7F34A32C;
    case 0x7F34A330u: goto label_7F34A330;
    case 0x7F34A334u: goto label_7F34A334;
    case 0x7F34A338u: goto label_7F34A338;
    case 0x7F34A33Cu: goto label_7F34A33C;
    case 0x7F34A340u: goto label_7F34A340;
    case 0x7F34A344u: goto label_7F34A344;
    case 0x7F34A348u: goto label_7F34A348;
    case 0x7F34A34Cu: goto label_7F34A34C;
    case 0x7F34A350u: goto label_7F34A350;
    case 0x7F34A354u: goto label_7F34A354;
    case 0x7F34A358u: goto label_7F34A358;
    case 0x7F34A35Cu: goto label_7F34A35C;
    case 0x7F34A360u: goto label_7F34A360;
    case 0x7F34A364u: goto label_7F34A364;
    case 0x7F34A368u: goto label_7F34A368;
    case 0x7F34A36Cu: goto label_7F34A36C;
    case 0x7F34A370u: goto label_7F34A370;
    case 0x7F34A374u: goto label_7F34A374;
    case 0x7F34A378u: goto label_7F34A378;
    case 0x7F34A37Cu: goto label_7F34A37C;
    case 0x7F34A380u: goto label_7F34A380;
    case 0x7F34A384u: goto label_7F34A384;
    case 0x7F34A388u: goto label_7F34A388;
    case 0x7F34A38Cu: goto label_7F34A38C;
    case 0x7F34A390u: goto label_7F34A390;
    case 0x7F34A394u: goto label_7F34A394;
    case 0x7F34A398u: goto label_7F34A398;
    case 0x7F34A39Cu: goto label_7F34A39C;
    case 0x7F34A3A0u: goto label_7F34A3A0;
    case 0x7F34A3A4u: goto label_7F34A3A4;
    case 0x7F34A3A8u: goto label_7F34A3A8;
    case 0x7F34A3ACu: goto label_7F34A3AC;
    case 0x7F34A3B0u: goto label_7F34A3B0;
    case 0x7F34A3B4u: goto label_7F34A3B4;
    case 0x7F34A3B8u: goto label_7F34A3B8;
    case 0x7F34A3BCu: goto label_7F34A3BC;
    case 0x7F34A3C0u: goto label_7F34A3C0;
    case 0x7F34A3C4u: goto label_7F34A3C4;
    case 0x7F34A3C8u: goto label_7F34A3C8;
    case 0x7F34A3CCu: goto label_7F34A3CC;
    case 0x7F34A3D0u: goto label_7F34A3D0;
    case 0x7F34A3D4u: goto label_7F34A3D4;
    case 0x7F34A3D8u: goto label_7F34A3D8;
    case 0x7F34A3DCu: goto label_7F34A3DC;
    case 0x7F34A3E0u: goto label_7F34A3E0;
    case 0x7F34A3E4u: goto label_7F34A3E4;
    case 0x7F34A3E8u: goto label_7F34A3E8;
    case 0x7F34A3ECu: goto label_7F34A3EC;
    case 0x7F34A3F0u: goto label_7F34A3F0;
    case 0x7F34A3F4u: goto label_7F34A3F4;
    case 0x7F34A3F8u: goto label_7F34A3F8;
    case 0x7F34A3FCu: goto label_7F34A3FC;
    case 0x7F34A400u: goto label_7F34A400;
    case 0x7F34A404u: goto label_7F34A404;
    case 0x7F34A408u: goto label_7F34A408;
    case 0x7F34A40Cu: goto label_7F34A40C;
    case 0x7F34A410u: goto label_7F34A410;
    case 0x7F34A414u: goto label_7F34A414;
    case 0x7F34A418u: goto label_7F34A418;
    case 0x7F34A41Cu: goto label_7F34A41C;
    case 0x7F34A420u: goto label_7F34A420;
    case 0x7F34A424u: goto label_7F34A424;
    case 0x7F34A428u: goto label_7F34A428;
    case 0x7F34A42Cu: goto label_7F34A42C;
    case 0x7F34A430u: goto label_7F34A430;
    case 0x7F34A434u: goto label_7F34A434;
    case 0x7F34A438u: goto label_7F34A438;
    case 0x7F34A43Cu: goto label_7F34A43C;
    case 0x7F34A440u: goto label_7F34A440;
    case 0x7F34A444u: goto label_7F34A444;
    case 0x7F34A448u: goto label_7F34A448;
    case 0x7F34A44Cu: goto label_7F34A44C;
    case 0x7F34A450u: goto label_7F34A450;
    case 0x7F34A454u: goto label_7F34A454;
    case 0x7F34A458u: goto label_7F34A458;
    case 0x7F34A45Cu: goto label_7F34A45C;
    case 0x7F34A460u: goto label_7F34A460;
    case 0x7F34A464u: goto label_7F34A464;
    case 0x7F34A468u: goto label_7F34A468;
    case 0x7F34A46Cu: goto label_7F34A46C;
    case 0x7F34A470u: goto label_7F34A470;
    case 0x7F34A474u: goto label_7F34A474;
    case 0x7F34A478u: goto label_7F34A478;
    case 0x7F34A47Cu: goto label_7F34A47C;
    case 0x7F34A480u: goto label_7F34A480;
    case 0x7F34A484u: goto label_7F34A484;
    case 0x7F34A488u: goto label_7F34A488;
    case 0x7F34A48Cu: goto label_7F34A48C;
    case 0x7F34A490u: goto label_7F34A490;
    case 0x7F34A494u: goto label_7F34A494;
    case 0x7F34A498u: goto label_7F34A498;
    case 0x7F34A49Cu: goto label_7F34A49C;
    case 0x7F34A4A0u: goto label_7F34A4A0;
    case 0x7F34A4A4u: goto label_7F34A4A4;
    case 0x7F34A4A8u: goto label_7F34A4A8;
    case 0x7F34A4ACu: goto label_7F34A4AC;
    case 0x7F34A4B0u: goto label_7F34A4B0;
    case 0x7F34A4B4u: goto label_7F34A4B4;
    case 0x7F34A4B8u: goto label_7F34A4B8;
    case 0x7F34A4BCu: goto label_7F34A4BC;
    case 0x7F34A4C0u: goto label_7F34A4C0;
    case 0x7F34A4C4u: goto label_7F34A4C4;
    case 0x7F34A4C8u: goto label_7F34A4C8;
    case 0x7F34A4CCu: goto label_7F34A4CC;
    case 0x7F34A4D0u: goto label_7F34A4D0;
    case 0x7F34A4D4u: goto label_7F34A4D4;
    case 0x7F34A4D8u: goto label_7F34A4D8;
    case 0x7F34A4DCu: goto label_7F34A4DC;
    case 0x7F34A4E0u: goto label_7F34A4E0;
    case 0x7F34A4E4u: goto label_7F34A4E4;
    case 0x7F34A4E8u: goto label_7F34A4E8;
    case 0x7F34A4ECu: goto label_7F34A4EC;
    case 0x7F34A4F0u: goto label_7F34A4F0;
    case 0x7F34A4F4u: goto label_7F34A4F4;
    case 0x7F34A4F8u: goto label_7F34A4F8;
    case 0x7F34A4FCu: goto label_7F34A4FC;
    case 0x7F34A500u: goto label_7F34A500;
    case 0x7F34A504u: goto label_7F34A504;
    case 0x7F34A508u: goto label_7F34A508;
    case 0x7F34A50Cu: goto label_7F34A50C;
    case 0x7F34A510u: goto label_7F34A510;
    case 0x7F34A514u: goto label_7F34A514;
    case 0x7F34A518u: goto label_7F34A518;
    case 0x7F34A51Cu: goto label_7F34A51C;
    case 0x7F34A520u: goto label_7F34A520;
    case 0x7F34A524u: goto label_7F34A524;
    case 0x7F34A528u: goto label_7F34A528;
    case 0x7F34A52Cu: goto label_7F34A52C;
    case 0x7F34A530u: goto label_7F34A530;
    case 0x7F34A534u: goto label_7F34A534;
    case 0x7F34A538u: goto label_7F34A538;
    case 0x7F34A53Cu: goto label_7F34A53C;
    case 0x7F34A540u: goto label_7F34A540;
    case 0x7F34A544u: goto label_7F34A544;
    case 0x7F34A548u: goto label_7F34A548;
    case 0x7F34A54Cu: goto label_7F34A54C;
    case 0x7F34A550u: goto label_7F34A550;
    case 0x7F34A554u: goto label_7F34A554;
    case 0x7F34A558u: goto label_7F34A558;
    case 0x7F34A55Cu: goto label_7F34A55C;
    case 0x7F34A560u: goto label_7F34A560;
    case 0x7F34A564u: goto label_7F34A564;
    case 0x7F34A568u: goto label_7F34A568;
    case 0x7F34A56Cu: goto label_7F34A56C;
    case 0x7F34A570u: goto label_7F34A570;
    case 0x7F34A574u: goto label_7F34A574;
    case 0x7F34A578u: goto label_7F34A578;
    case 0x7F34A57Cu: goto label_7F34A57C;
    case 0x7F34A580u: goto label_7F34A580;
    case 0x7F34A584u: goto label_7F34A584;
    case 0x7F34A588u: goto label_7F34A588;
    case 0x7F34A58Cu: goto label_7F34A58C;
    case 0x7F34A590u: goto label_7F34A590;
    case 0x7F34A594u: goto label_7F34A594;
    case 0x7F34A598u: goto label_7F34A598;
    case 0x7F34A59Cu: goto label_7F34A59C;
    case 0x7F34A5A0u: goto label_7F34A5A0;
    case 0x7F34A5A4u: goto label_7F34A5A4;
    case 0x7F34A5A8u: goto label_7F34A5A8;
    case 0x7F34A5ACu: goto label_7F34A5AC;
    case 0x7F34A5B0u: goto label_7F34A5B0;
    case 0x7F34A5B4u: goto label_7F34A5B4;
    case 0x7F34A5B8u: goto label_7F34A5B8;
    case 0x7F34A5BCu: goto label_7F34A5BC;
    case 0x7F34A5C0u: goto label_7F34A5C0;
    case 0x7F34A5C4u: goto label_7F34A5C4;
    case 0x7F34A5C8u: goto label_7F34A5C8;
    case 0x7F34A5CCu: goto label_7F34A5CC;
    case 0x7F34A5D0u: goto label_7F34A5D0;
    case 0x7F34A5D4u: goto label_7F34A5D4;
    case 0x7F34A5D8u: goto label_7F34A5D8;
    case 0x7F34A5DCu: goto label_7F34A5DC;
    case 0x7F34A5E0u: goto label_7F34A5E0;
    case 0x7F34A5E4u: goto label_7F34A5E4;
    case 0x7F34A5E8u: goto label_7F34A5E8;
    case 0x7F34A5ECu: goto label_7F34A5EC;
    case 0x7F34A5F0u: goto label_7F34A5F0;
    case 0x7F34A5F4u: goto label_7F34A5F4;
    case 0x7F34A5F8u: goto label_7F34A5F8;
    case 0x7F34A5FCu: goto label_7F34A5FC;
    case 0x7F34A600u: goto label_7F34A600;
    case 0x7F34A604u: goto label_7F34A604;
    case 0x7F34A608u: goto label_7F34A608;
    case 0x7F34A60Cu: goto label_7F34A60C;
    case 0x7F34A610u: goto label_7F34A610;
    case 0x7F34A614u: goto label_7F34A614;
    case 0x7F34A618u: goto label_7F34A618;
    case 0x7F34A61Cu: goto label_7F34A61C;
    case 0x7F34A620u: goto label_7F34A620;
    case 0x7F34A624u: goto label_7F34A624;
    case 0x7F34A628u: goto label_7F34A628;
    case 0x7F34A62Cu: goto label_7F34A62C;
    case 0x7F34A630u: goto label_7F34A630;
    case 0x7F34A634u: goto label_7F34A634;
    case 0x7F34A638u: goto label_7F34A638;
    case 0x7F34A63Cu: goto label_7F34A63C;
    case 0x7F34A640u: goto label_7F34A640;
    case 0x7F34A644u: goto label_7F34A644;
    case 0x7F34A648u: goto label_7F34A648;
    case 0x7F34A64Cu: goto label_7F34A64C;
    case 0x7F34A650u: goto label_7F34A650;
    case 0x7F34A654u: goto label_7F34A654;
    case 0x7F34A658u: goto label_7F34A658;
    case 0x7F34A65Cu: goto label_7F34A65C;
    case 0x7F34A660u: goto label_7F34A660;
    case 0x7F34A664u: goto label_7F34A664;
    case 0x7F34A668u: goto label_7F34A668;
    case 0x7F34A66Cu: goto label_7F34A66C;
    case 0x7F34A670u: goto label_7F34A670;
    case 0x7F34A674u: goto label_7F34A674;
    case 0x7F34A678u: goto label_7F34A678;
    case 0x7F34A67Cu: goto label_7F34A67C;
    case 0x7F34A680u: goto label_7F34A680;
    case 0x7F34A684u: goto label_7F34A684;
    case 0x7F34A688u: goto label_7F34A688;
    case 0x7F34A68Cu: goto label_7F34A68C;
    case 0x7F34A690u: goto label_7F34A690;
    case 0x7F34A694u: goto label_7F34A694;
    case 0x7F34A698u: goto label_7F34A698;
    case 0x7F34A69Cu: goto label_7F34A69C;
    case 0x7F34A6A0u: goto label_7F34A6A0;
    case 0x7F34A6A4u: goto label_7F34A6A4;
    case 0x7F34A6A8u: goto label_7F34A6A8;
    case 0x7F34A6ACu: goto label_7F34A6AC;
    case 0x7F34A6B0u: goto label_7F34A6B0;
    case 0x7F34A6B4u: goto label_7F34A6B4;
    case 0x7F34A6B8u: goto label_7F34A6B8;
    case 0x7F34A6BCu: goto label_7F34A6BC;
    case 0x7F34A6C0u: goto label_7F34A6C0;
    case 0x7F34A6C4u: goto label_7F34A6C4;
    case 0x7F34A6C8u: goto label_7F34A6C8;
    case 0x7F34A6CCu: goto label_7F34A6CC;
    case 0x7F34A6D0u: goto label_7F34A6D0;
    case 0x7F34A6D4u: goto label_7F34A6D4;
    case 0x7F34A6D8u: goto label_7F34A6D8;
    case 0x7F34A6DCu: goto label_7F34A6DC;
    case 0x7F34A6E0u: goto label_7F34A6E0;
    case 0x7F34A6E4u: goto label_7F34A6E4;
    case 0x7F34A6E8u: goto label_7F34A6E8;
    case 0x7F34A6ECu: goto label_7F34A6EC;
    case 0x7F34A6F0u: goto label_7F34A6F0;
    case 0x7F34A6F4u: goto label_7F34A6F4;
    case 0x7F34A6F8u: goto label_7F34A6F8;
    case 0x7F34A6FCu: goto label_7F34A6FC;
    case 0x7F34A700u: goto label_7F34A700;
    case 0x7F34A704u: goto label_7F34A704;
    case 0x7F34A708u: goto label_7F34A708;
    case 0x7F34A70Cu: goto label_7F34A70C;
    case 0x7F34A710u: goto label_7F34A710;
    case 0x7F34A714u: goto label_7F34A714;
    case 0x7F34A718u: goto label_7F34A718;
    case 0x7F34A71Cu: goto label_7F34A71C;
    case 0x7F34A720u: goto label_7F34A720;
    case 0x7F34A724u: goto label_7F34A724;
    case 0x7F34A728u: goto label_7F34A728;
    case 0x7F34A72Cu: goto label_7F34A72C;
    case 0x7F34A730u: goto label_7F34A730;
    case 0x7F34A734u: goto label_7F34A734;
    case 0x7F34A738u: goto label_7F34A738;
    case 0x7F34A73Cu: goto label_7F34A73C;
    case 0x7F34A740u: goto label_7F34A740;
    case 0x7F34A744u: goto label_7F34A744;
    case 0x7F34A748u: goto label_7F34A748;
    case 0x7F34A74Cu: goto label_7F34A74C;
    case 0x7F34A750u: goto label_7F34A750;
    case 0x7F34A754u: goto label_7F34A754;
    case 0x7F34A758u: goto label_7F34A758;
    case 0x7F34A75Cu: goto label_7F34A75C;
    case 0x7F34A760u: goto label_7F34A760;
    case 0x7F34A764u: goto label_7F34A764;
    case 0x7F34A768u: goto label_7F34A768;
    case 0x7F34A76Cu: goto label_7F34A76C;
    case 0x7F34A770u: goto label_7F34A770;
    case 0x7F34A774u: goto label_7F34A774;
    case 0x7F34A778u: goto label_7F34A778;
    case 0x7F34A77Cu: goto label_7F34A77C;
    case 0x7F34A780u: goto label_7F34A780;
    case 0x7F34A784u: goto label_7F34A784;
    case 0x7F34A788u: goto label_7F34A788;
    case 0x7F34A78Cu: goto label_7F34A78C;
    case 0x7F34A790u: goto label_7F34A790;
    case 0x7F34A794u: goto label_7F34A794;
    case 0x7F34A798u: goto label_7F34A798;
    case 0x7F34A79Cu: goto label_7F34A79C;
    case 0x7F34A7A0u: goto label_7F34A7A0;
    case 0x7F34A7A4u: goto label_7F34A7A4;
    case 0x7F34A7A8u: goto label_7F34A7A8;
    case 0x7F34A7ACu: goto label_7F34A7AC;
    case 0x7F34A7B0u: goto label_7F34A7B0;
    case 0x7F34A7B4u: goto label_7F34A7B4;
    case 0x7F34A7B8u: goto label_7F34A7B8;
    case 0x7F34A7BCu: goto label_7F34A7BC;
    case 0x7F34A7C0u: goto label_7F34A7C0;
    case 0x7F34A7C4u: goto label_7F34A7C4;
    case 0x7F34A7C8u: goto label_7F34A7C8;
    case 0x7F34A7CCu: goto label_7F34A7CC;
    case 0x7F34A7D0u: goto label_7F34A7D0;
    case 0x7F34A7D4u: goto label_7F34A7D4;
    case 0x7F34A7D8u: goto label_7F34A7D8;
    case 0x7F34A7DCu: goto label_7F34A7DC;
    case 0x7F34A7E0u: goto label_7F34A7E0;
    case 0x7F34A7E4u: goto label_7F34A7E4;
    case 0x7F34A7E8u: goto label_7F34A7E8;
    case 0x7F34A7ECu: goto label_7F34A7EC;
    case 0x7F34A7F0u: goto label_7F34A7F0;
    case 0x7F34A7F4u: goto label_7F34A7F4;
    case 0x7F34A7F8u: goto label_7F34A7F8;
    case 0x7F34A7FCu: goto label_7F34A7FC;
    case 0x7F34A800u: goto label_7F34A800;
    case 0x7F34A804u: goto label_7F34A804;
    case 0x7F34A808u: goto label_7F34A808;
    case 0x7F34A80Cu: goto label_7F34A80C;
    case 0x7F34A810u: goto label_7F34A810;
    case 0x7F34A814u: goto label_7F34A814;
    case 0x7F34A818u: goto label_7F34A818;
    case 0x7F34A81Cu: goto label_7F34A81C;
    case 0x7F34A820u: goto label_7F34A820;
    case 0x7F34A824u: goto label_7F34A824;
    case 0x7F34A828u: goto label_7F34A828;
    case 0x7F34A82Cu: goto label_7F34A82C;
    case 0x7F34A830u: goto label_7F34A830;
    case 0x7F34A834u: goto label_7F34A834;
    case 0x7F34A838u: goto label_7F34A838;
    case 0x7F34A83Cu: goto label_7F34A83C;
    case 0x7F34A840u: goto label_7F34A840;
    case 0x7F34A844u: goto label_7F34A844;
    case 0x7F34A848u: goto label_7F34A848;
    case 0x7F34A84Cu: goto label_7F34A84C;
    case 0x7F34A850u: goto label_7F34A850;
    case 0x7F34A854u: goto label_7F34A854;
    case 0x7F34A858u: goto label_7F34A858;
    case 0x7F34A85Cu: goto label_7F34A85C;
    case 0x7F34A860u: goto label_7F34A860;
    case 0x7F34A864u: goto label_7F34A864;
    case 0x7F34A868u: goto label_7F34A868;
    case 0x7F34A86Cu: goto label_7F34A86C;
    case 0x7F34A870u: goto label_7F34A870;
    case 0x7F34A874u: goto label_7F34A874;
    case 0x7F34A878u: goto label_7F34A878;
    case 0x7F34A87Cu: goto label_7F34A87C;
    case 0x7F34A880u: goto label_7F34A880;
    case 0x7F34A884u: goto label_7F34A884;
    case 0x7F34A888u: goto label_7F34A888;
    case 0x7F34A88Cu: goto label_7F34A88C;
    case 0x7F34A890u: goto label_7F34A890;
    case 0x7F34A894u: goto label_7F34A894;
    case 0x7F34A898u: goto label_7F34A898;
    case 0x7F34A89Cu: goto label_7F34A89C;
    case 0x7F34A8A0u: goto label_7F34A8A0;
    case 0x7F34A8A4u: goto label_7F34A8A4;
    case 0x7F34A8A8u: goto label_7F34A8A8;
    case 0x7F34A8ACu: goto label_7F34A8AC;
    case 0x7F34A8B0u: goto label_7F34A8B0;
    case 0x7F34A8B4u: goto label_7F34A8B4;
    case 0x7F34A8B8u: goto label_7F34A8B8;
    case 0x7F34A8BCu: goto label_7F34A8BC;
    case 0x7F34A8C0u: goto label_7F34A8C0;
    case 0x7F34A8C4u: goto label_7F34A8C4;
    case 0x7F34A8C8u: goto label_7F34A8C8;
    case 0x7F34A8CCu: goto label_7F34A8CC;
    case 0x7F34A8D0u: goto label_7F34A8D0;
    case 0x7F34A8D4u: goto label_7F34A8D4;
    case 0x7F34A8D8u: goto label_7F34A8D8;
    case 0x7F34A8DCu: goto label_7F34A8DC;
    case 0x7F34A8E0u: goto label_7F34A8E0;
    case 0x7F34A8E4u: goto label_7F34A8E4;
    case 0x7F34A8E8u: goto label_7F34A8E8;
    case 0x7F34A8ECu: goto label_7F34A8EC;
    case 0x7F34A8F0u: goto label_7F34A8F0;
    case 0x7F34A8F4u: goto label_7F34A8F4;
    case 0x7F34A8F8u: goto label_7F34A8F8;
    case 0x7F34A8FCu: goto label_7F34A8FC;
    case 0x7F34A900u: goto label_7F34A900;
    case 0x7F34A904u: goto label_7F34A904;
    case 0x7F34A908u: goto label_7F34A908;
    case 0x7F34A90Cu: goto label_7F34A90C;
    case 0x7F34A910u: goto label_7F34A910;
    case 0x7F34A914u: goto label_7F34A914;
    case 0x7F34A918u: goto label_7F34A918;
    case 0x7F34A91Cu: goto label_7F34A91C;
    case 0x7F34A920u: goto label_7F34A920;
    case 0x7F34A924u: goto label_7F34A924;
    case 0x7F34A928u: goto label_7F34A928;
    case 0x7F34A92Cu: goto label_7F34A92C;
    case 0x7F34A930u: goto label_7F34A930;
    case 0x7F34A934u: goto label_7F34A934;
    case 0x7F34A938u: goto label_7F34A938;
    case 0x7F34A93Cu: goto label_7F34A93C;
    case 0x7F34A940u: goto label_7F34A940;
    case 0x7F34A944u: goto label_7F34A944;
    case 0x7F34A948u: goto label_7F34A948;
    case 0x7F34A94Cu: goto label_7F34A94C;
    case 0x7F34A950u: goto label_7F34A950;
    case 0x7F34A954u: goto label_7F34A954;
    case 0x7F34A958u: goto label_7F34A958;
    case 0x7F34A95Cu: goto label_7F34A95C;
    case 0x7F34A960u: goto label_7F34A960;
    case 0x7F34A964u: goto label_7F34A964;
    case 0x7F34A968u: goto label_7F34A968;
    case 0x7F34A96Cu: goto label_7F34A96C;
    case 0x7F34A970u: goto label_7F34A970;
    case 0x7F34A974u: goto label_7F34A974;
    case 0x7F34A978u: goto label_7F34A978;
    case 0x7F34A97Cu: goto label_7F34A97C;
    case 0x7F34A980u: goto label_7F34A980;
    case 0x7F34A984u: goto label_7F34A984;
    case 0x7F34A988u: goto label_7F34A988;
    case 0x7F34A98Cu: goto label_7F34A98C;
    case 0x7F34A990u: goto label_7F34A990;
    case 0x7F34A994u: goto label_7F34A994;
    case 0x7F34A998u: goto label_7F34A998;
    case 0x7F34A99Cu: goto label_7F34A99C;
    case 0x7F34A9A0u: goto label_7F34A9A0;
    case 0x7F34A9A4u: goto label_7F34A9A4;
    case 0x7F34A9A8u: goto label_7F34A9A8;
    case 0x7F34A9ACu: goto label_7F34A9AC;
    case 0x7F34A9B0u: goto label_7F34A9B0;
    case 0x7F34A9B4u: goto label_7F34A9B4;
    case 0x7F34A9B8u: goto label_7F34A9B8;
    case 0x7F34A9BCu: goto label_7F34A9BC;
    case 0x7F34A9C0u: goto label_7F34A9C0;
    case 0x7F34A9C4u: goto label_7F34A9C4;
    case 0x7F34A9C8u: goto label_7F34A9C8;
    case 0x7F34A9CCu: goto label_7F34A9CC;
    case 0x7F34A9D0u: goto label_7F34A9D0;
    case 0x7F34A9D4u: goto label_7F34A9D4;
    case 0x7F34A9D8u: goto label_7F34A9D8;
    case 0x7F34A9DCu: goto label_7F34A9DC;
    case 0x7F34A9E0u: goto label_7F34A9E0;
    case 0x7F34A9E4u: goto label_7F34A9E4;
    case 0x7F34A9E8u: goto label_7F34A9E8;
    case 0x7F34A9ECu: goto label_7F34A9EC;
    case 0x7F34A9F0u: goto label_7F34A9F0;
    case 0x7F34A9F4u: goto label_7F34A9F4;
    case 0x7F34A9F8u: goto label_7F34A9F8;
    case 0x7F34A9FCu: goto label_7F34A9FC;
    case 0x7F34AA00u: goto label_7F34AA00;
    case 0x7F34AA04u: goto label_7F34AA04;
    case 0x7F34AA08u: goto label_7F34AA08;
    case 0x7F34AA0Cu: goto label_7F34AA0C;
    case 0x7F34AA10u: goto label_7F34AA10;
    case 0x7F34AA14u: goto label_7F34AA14;
    case 0x7F34AA18u: goto label_7F34AA18;
    case 0x7F34AA1Cu: goto label_7F34AA1C;
    case 0x7F34AA20u: goto label_7F34AA20;
    case 0x7F34AA24u: goto label_7F34AA24;
    case 0x7F34AA28u: goto label_7F34AA28;
    case 0x7F34AA2Cu: goto label_7F34AA2C;
    case 0x7F34AA30u: goto label_7F34AA30;
    case 0x7F34AA34u: goto label_7F34AA34;
    case 0x7F34AA38u: goto label_7F34AA38;
    case 0x7F34AA3Cu: goto label_7F34AA3C;
    case 0x7F34AA40u: goto label_7F34AA40;
    case 0x7F34AA44u: goto label_7F34AA44;
    case 0x7F34AA48u: goto label_7F34AA48;
    case 0x7F34AA4Cu: goto label_7F34AA4C;
    case 0x7F34AA50u: goto label_7F34AA50;
    case 0x7F34AA54u: goto label_7F34AA54;
    case 0x7F34AA58u: goto label_7F34AA58;
    case 0x7F34AA5Cu: goto label_7F34AA5C;
    case 0x7F34AA60u: goto label_7F34AA60;
    case 0x7F34AA64u: goto label_7F34AA64;
    case 0x7F34AA68u: goto label_7F34AA68;
    case 0x7F34AA6Cu: goto label_7F34AA6C;
    case 0x7F34AA70u: goto label_7F34AA70;
    case 0x7F34AA74u: goto label_7F34AA74;
    case 0x7F34AA78u: goto label_7F34AA78;
    case 0x7F34AA7Cu: goto label_7F34AA7C;
    case 0x7F34AA80u: goto label_7F34AA80;
    case 0x7F34AA84u: goto label_7F34AA84;
    case 0x7F34AA88u: goto label_7F34AA88;
    case 0x7F34AA8Cu: goto label_7F34AA8C;
    case 0x7F34AA90u: goto label_7F34AA90;
    case 0x7F34AA94u: goto label_7F34AA94;
    case 0x7F34AA98u: goto label_7F34AA98;
    case 0x7F34AA9Cu: goto label_7F34AA9C;
    case 0x7F34AAA0u: goto label_7F34AAA0;
    case 0x7F34AAA4u: goto label_7F34AAA4;
    case 0x7F34AAA8u: goto label_7F34AAA8;
    case 0x7F34AAACu: goto label_7F34AAAC;
    case 0x7F34AAB0u: goto label_7F34AAB0;
    case 0x7F34AAB4u: goto label_7F34AAB4;
    case 0x7F34AAB8u: goto label_7F34AAB8;
    case 0x7F34AABCu: goto label_7F34AABC;
    case 0x7F34AAC0u: goto label_7F34AAC0;
    case 0x7F34AAC4u: goto label_7F34AAC4;
    case 0x7F34AAC8u: goto label_7F34AAC8;
    case 0x7F34AACCu: goto label_7F34AACC;
    case 0x7F34AAD0u: goto label_7F34AAD0;
    case 0x7F34AAD4u: goto label_7F34AAD4;
    case 0x7F34AAD8u: goto label_7F34AAD8;
    case 0x7F34AADCu: goto label_7F34AADC;
    case 0x7F34AAE0u: goto label_7F34AAE0;
    case 0x7F34AAE4u: goto label_7F34AAE4;
    case 0x7F34AAE8u: goto label_7F34AAE8;
    case 0x7F34AAECu: goto label_7F34AAEC;
    case 0x7F34AAF0u: goto label_7F34AAF0;
    case 0x7F34AAF4u: goto label_7F34AAF4;
    case 0x7F34AAF8u: goto label_7F34AAF8;
    case 0x7F34AAFCu: goto label_7F34AAFC;
    case 0x7F34AB00u: goto label_7F34AB00;
    case 0x7F34AB04u: goto label_7F34AB04;
    case 0x7F34AB08u: goto label_7F34AB08;
    case 0x7F34AB0Cu: goto label_7F34AB0C;
    case 0x7F34AB10u: goto label_7F34AB10;
    case 0x7F34AB14u: goto label_7F34AB14;
    case 0x7F34AB18u: goto label_7F34AB18;
    case 0x7F34AB1Cu: goto label_7F34AB1C;
    case 0x7F34AB20u: goto label_7F34AB20;
    case 0x7F34AB24u: goto label_7F34AB24;
    case 0x7F34AB28u: goto label_7F34AB28;
    case 0x7F34AB2Cu: goto label_7F34AB2C;
    case 0x7F34AB30u: goto label_7F34AB30;
    case 0x7F34AB34u: goto label_7F34AB34;
    case 0x7F34AB38u: goto label_7F34AB38;
    case 0x7F34AB3Cu: goto label_7F34AB3C;
    case 0x7F34AB40u: goto label_7F34AB40;
    case 0x7F34AB44u: goto label_7F34AB44;
    case 0x7F34AB48u: goto label_7F34AB48;
    case 0x7F34AB4Cu: goto label_7F34AB4C;
    case 0x7F34AB50u: goto label_7F34AB50;
    case 0x7F34AB54u: goto label_7F34AB54;
    case 0x7F34AB58u: goto label_7F34AB58;
    case 0x7F34AB5Cu: goto label_7F34AB5C;
    case 0x7F34AB60u: goto label_7F34AB60;
    case 0x7F34AB64u: goto label_7F34AB64;
    case 0x7F34AB68u: goto label_7F34AB68;
    case 0x7F34AB6Cu: goto label_7F34AB6C;
    case 0x7F34AB70u: goto label_7F34AB70;
    case 0x7F34AB74u: goto label_7F34AB74;
    case 0x7F34AB78u: goto label_7F34AB78;
    case 0x7F34AB7Cu: goto label_7F34AB7C;
    case 0x7F34AB80u: goto label_7F34AB80;
    case 0x7F34AB84u: goto label_7F34AB84;
    case 0x7F34AB88u: goto label_7F34AB88;
    case 0x7F34AB8Cu: goto label_7F34AB8C;
    case 0x7F34AB90u: goto label_7F34AB90;
    case 0x7F34AB94u: goto label_7F34AB94;
    case 0x7F34AB98u: goto label_7F34AB98;
    case 0x7F34AB9Cu: goto label_7F34AB9C;
    case 0x7F34ABA0u: goto label_7F34ABA0;
    case 0x7F34ABA4u: goto label_7F34ABA4;
    case 0x7F34ABA8u: goto label_7F34ABA8;
    case 0x7F34ABACu: goto label_7F34ABAC;
    case 0x7F34ABB0u: goto label_7F34ABB0;
    case 0x7F34ABB4u: goto label_7F34ABB4;
    case 0x7F34ABB8u: goto label_7F34ABB8;
    case 0x7F34ABBCu: goto label_7F34ABBC;
    case 0x7F34ABC0u: goto label_7F34ABC0;
    case 0x7F34ABC4u: goto label_7F34ABC4;
    case 0x7F34ABC8u: goto label_7F34ABC8;
    case 0x7F34ABCCu: goto label_7F34ABCC;
    case 0x7F34ABD0u: goto label_7F34ABD0;
    case 0x7F34ABD4u: goto label_7F34ABD4;
    case 0x7F34ABD8u: goto label_7F34ABD8;
    case 0x7F34ABDCu: goto label_7F34ABDC;
    case 0x7F34ABE0u: goto label_7F34ABE0;
    case 0x7F34ABE4u: goto label_7F34ABE4;
    case 0x7F34ABE8u: goto label_7F34ABE8;
    case 0x7F34ABECu: goto label_7F34ABEC;
    case 0x7F34ABF0u: goto label_7F34ABF0;
    case 0x7F34ABF4u: goto label_7F34ABF4;
    case 0x7F34ABF8u: goto label_7F34ABF8;
    case 0x7F34ABFCu: goto label_7F34ABFC;
    case 0x7F34AC00u: goto label_7F34AC00;
    case 0x7F34AC04u: goto label_7F34AC04;
    case 0x7F34AC08u: goto label_7F34AC08;
    case 0x7F34AC0Cu: goto label_7F34AC0C;
    case 0x7F34AC10u: goto label_7F34AC10;
    case 0x7F34AC14u: goto label_7F34AC14;
    case 0x7F34AC18u: goto label_7F34AC18;
    case 0x7F34AC1Cu: goto label_7F34AC1C;
    case 0x7F34AC20u: goto label_7F34AC20;
    case 0x7F34AC24u: goto label_7F34AC24;
    case 0x7F34AC28u: goto label_7F34AC28;
    case 0x7F34AC2Cu: goto label_7F34AC2C;
    case 0x7F34AC30u: goto label_7F34AC30;
    case 0x7F34AC34u: goto label_7F34AC34;
    case 0x7F34AC38u: goto label_7F34AC38;
    case 0x7F34AC3Cu: goto label_7F34AC3C;
    case 0x7F34AC40u: goto label_7F34AC40;
    case 0x7F34AC44u: goto label_7F34AC44;
    case 0x7F34AC48u: goto label_7F34AC48;
    case 0x7F34AC4Cu: goto label_7F34AC4C;
    case 0x7F34AC50u: goto label_7F34AC50;
    case 0x7F34AC54u: goto label_7F34AC54;
    case 0x7F34AC58u: goto label_7F34AC58;
    case 0x7F34AC5Cu: goto label_7F34AC5C;
    case 0x7F34AC60u: goto label_7F34AC60;
    case 0x7F34AC64u: goto label_7F34AC64;
    case 0x7F34AC68u: goto label_7F34AC68;
    case 0x7F34AC6Cu: goto label_7F34AC6C;
    case 0x7F34AC70u: goto label_7F34AC70;
    case 0x7F34AC74u: goto label_7F34AC74;
    case 0x7F34AC78u: goto label_7F34AC78;
    case 0x7F34AC7Cu: goto label_7F34AC7C;
    case 0x7F34AC80u: goto label_7F34AC80;
    case 0x7F34AC84u: goto label_7F34AC84;
    case 0x7F34AC88u: goto label_7F34AC88;
    case 0x7F34AC8Cu: goto label_7F34AC8C;
    case 0x7F34AC90u: goto label_7F34AC90;
    case 0x7F34AC94u: goto label_7F34AC94;
    case 0x7F34AC98u: goto label_7F34AC98;
    case 0x7F34AC9Cu: goto label_7F34AC9C;
    case 0x7F34ACA0u: goto label_7F34ACA0;
    case 0x7F34ACA4u: goto label_7F34ACA4;
    case 0x7F34ACA8u: goto label_7F34ACA8;
    case 0x7F34ACACu: goto label_7F34ACAC;
    case 0x7F34ACB0u: goto label_7F34ACB0;
    case 0x7F34ACB4u: goto label_7F34ACB4;
    case 0x7F34ACB8u: goto label_7F34ACB8;
    case 0x7F34ACBCu: goto label_7F34ACBC;
    case 0x7F34ACC0u: goto label_7F34ACC0;
    case 0x7F34ACC4u: goto label_7F34ACC4;
    case 0x7F34ACC8u: goto label_7F34ACC8;
    case 0x7F34ACCCu: goto label_7F34ACCC;
    case 0x7F34ACD0u: goto label_7F34ACD0;
    case 0x7F34ACD4u: goto label_7F34ACD4;
    case 0x7F34ACD8u: goto label_7F34ACD8;
    case 0x7F34ACDCu: goto label_7F34ACDC;
    case 0x7F34ACE0u: goto label_7F34ACE0;
    case 0x7F34ACE4u: goto label_7F34ACE4;
    case 0x7F34ACE8u: goto label_7F34ACE8;
    case 0x7F34ACECu: goto label_7F34ACEC;
    case 0x7F34ACF0u: goto label_7F34ACF0;
    case 0x7F34ACF4u: goto label_7F34ACF4;
    case 0x7F34ACF8u: goto label_7F34ACF8;
    case 0x7F34ACFCu: goto label_7F34ACFC;
    case 0x7F34AD00u: goto label_7F34AD00;
    case 0x7F34AD04u: goto label_7F34AD04;
    case 0x7F34AD08u: goto label_7F34AD08;
    case 0x7F34AD0Cu: goto label_7F34AD0C;
    case 0x7F34AD10u: goto label_7F34AD10;
    case 0x7F34AD14u: goto label_7F34AD14;
    case 0x7F34AD18u: goto label_7F34AD18;
    case 0x7F34AD1Cu: goto label_7F34AD1C;
    case 0x7F34AD20u: goto label_7F34AD20;
    case 0x7F34AD24u: goto label_7F34AD24;
    case 0x7F34AD28u: goto label_7F34AD28;
    case 0x7F34AD2Cu: goto label_7F34AD2C;
    case 0x7F34AD30u: goto label_7F34AD30;
    case 0x7F34AD34u: goto label_7F34AD34;
    case 0x7F34AD38u: goto label_7F34AD38;
    case 0x7F34AD3Cu: goto label_7F34AD3C;
    case 0x7F34AD40u: goto label_7F34AD40;
    case 0x7F34AD44u: goto label_7F34AD44;
    case 0x7F34AD48u: goto label_7F34AD48;
    case 0x7F34AD4Cu: goto label_7F34AD4C;
    case 0x7F34AD50u: goto label_7F34AD50;
    case 0x7F34AD54u: goto label_7F34AD54;
    case 0x7F34AD58u: goto label_7F34AD58;
    case 0x7F34AD5Cu: goto label_7F34AD5C;
    case 0x7F34AD60u: goto label_7F34AD60;
    case 0x7F34AD64u: goto label_7F34AD64;
    case 0x7F34AD68u: goto label_7F34AD68;
    case 0x7F34AD6Cu: goto label_7F34AD6C;
    case 0x7F34AD70u: goto label_7F34AD70;
    case 0x7F34AD74u: goto label_7F34AD74;
    case 0x7F34AD78u: goto label_7F34AD78;
    case 0x7F34AD7Cu: goto label_7F34AD7C;
    case 0x7F34AD80u: goto label_7F34AD80;
    case 0x7F34AD84u: goto label_7F34AD84;
    case 0x7F34AD88u: goto label_7F34AD88;
    case 0x7F34AD8Cu: goto label_7F34AD8C;
    case 0x7F34AD90u: goto label_7F34AD90;
    case 0x7F34AD94u: goto label_7F34AD94;
    case 0x7F34AD98u: goto label_7F34AD98;
    case 0x7F34AD9Cu: goto label_7F34AD9C;
    case 0x7F34ADA0u: goto label_7F34ADA0;
    case 0x7F34ADA4u: goto label_7F34ADA4;
    case 0x7F34ADA8u: goto label_7F34ADA8;
    case 0x7F34ADACu: goto label_7F34ADAC;
    case 0x7F34ADB0u: goto label_7F34ADB0;
    case 0x7F34ADB4u: goto label_7F34ADB4;
    case 0x7F34ADB8u: goto label_7F34ADB8;
    case 0x7F34ADBCu: goto label_7F34ADBC;
    case 0x7F34ADC0u: goto label_7F34ADC0;
    case 0x7F34ADC4u: goto label_7F34ADC4;
    case 0x7F34ADC8u: goto label_7F34ADC8;
    case 0x7F34ADCCu: goto label_7F34ADCC;
    case 0x7F34ADD0u: goto label_7F34ADD0;
    case 0x7F34ADD4u: goto label_7F34ADD4;
    case 0x7F34ADD8u: goto label_7F34ADD8;
    case 0x7F34ADDCu: goto label_7F34ADDC;
    case 0x7F34ADE0u: goto label_7F34ADE0;
    case 0x7F34ADE4u: goto label_7F34ADE4;
    case 0x7F34ADE8u: goto label_7F34ADE8;
    case 0x7F34ADECu: goto label_7F34ADEC;
    case 0x7F34ADF0u: goto label_7F34ADF0;
    case 0x7F34ADF4u: goto label_7F34ADF4;
    case 0x7F34ADF8u: goto label_7F34ADF8;
    case 0x7F34ADFCu: goto label_7F34ADFC;
    case 0x7F34AE00u: goto label_7F34AE00;
    case 0x7F34AE04u: goto label_7F34AE04;
    case 0x7F34AE08u: goto label_7F34AE08;
    case 0x7F34AE0Cu: goto label_7F34AE0C;
    case 0x7F34AE10u: goto label_7F34AE10;
    case 0x7F34AE14u: goto label_7F34AE14;
    case 0x7F34AE18u: goto label_7F34AE18;
    case 0x7F34AE1Cu: goto label_7F34AE1C;
    case 0x7F34AE20u: goto label_7F34AE20;
    case 0x7F34AE24u: goto label_7F34AE24;
    case 0x7F34AE28u: goto label_7F34AE28;
    case 0x7F34AE2Cu: goto label_7F34AE2C;
    case 0x7F34AE30u: goto label_7F34AE30;
    case 0x7F34AE34u: goto label_7F34AE34;
    case 0x7F34AE38u: goto label_7F34AE38;
    case 0x7F34AE3Cu: goto label_7F34AE3C;
    case 0x7F34AE40u: goto label_7F34AE40;
    case 0x7F34AE44u: goto label_7F34AE44;
    case 0x7F34AE48u: goto label_7F34AE48;
    case 0x7F34AE4Cu: goto label_7F34AE4C;
    case 0x7F34AE50u: goto label_7F34AE50;
    case 0x7F34AE54u: goto label_7F34AE54;
    case 0x7F34AE58u: goto label_7F34AE58;
    case 0x7F34AE5Cu: goto label_7F34AE5C;
    case 0x7F34AE60u: goto label_7F34AE60;
    case 0x7F34AE64u: goto label_7F34AE64;
    case 0x7F34AE68u: goto label_7F34AE68;
    case 0x7F34AE6Cu: goto label_7F34AE6C;
    case 0x7F34AE70u: goto label_7F34AE70;
    case 0x7F34AE74u: goto label_7F34AE74;
    case 0x7F34AE78u: goto label_7F34AE78;
    case 0x7F34AE7Cu: goto label_7F34AE7C;
    case 0x7F34AE80u: goto label_7F34AE80;
    case 0x7F34AE84u: goto label_7F34AE84;
    case 0x7F34AE88u: goto label_7F34AE88;
    case 0x7F34AE8Cu: goto label_7F34AE8C;
    case 0x7F34AE90u: goto label_7F34AE90;
    case 0x7F34AE94u: goto label_7F34AE94;
    case 0x7F34AE98u: goto label_7F34AE98;
    case 0x7F34AE9Cu: goto label_7F34AE9C;
    case 0x7F34AEA0u: goto label_7F34AEA0;
    case 0x7F34AEA4u: goto label_7F34AEA4;
    case 0x7F34AEA8u: goto label_7F34AEA8;
    case 0x7F34AEACu: goto label_7F34AEAC;
    case 0x7F34AEB0u: goto label_7F34AEB0;
    case 0x7F34AEB4u: goto label_7F34AEB4;
    case 0x7F34AEB8u: goto label_7F34AEB8;
    case 0x7F34AEBCu: goto label_7F34AEBC;
    case 0x7F34AEC0u: goto label_7F34AEC0;
    case 0x7F34AEC4u: goto label_7F34AEC4;
    case 0x7F34AEC8u: goto label_7F34AEC8;
    case 0x7F34AECCu: goto label_7F34AECC;
    case 0x7F34AED0u: goto label_7F34AED0;
    case 0x7F34AED4u: goto label_7F34AED4;
    case 0x7F34AED8u: goto label_7F34AED8;
    case 0x7F34AEDCu: goto label_7F34AEDC;
    case 0x7F34AEE0u: goto label_7F34AEE0;
    case 0x7F34AEE4u: goto label_7F34AEE4;
    case 0x7F34AEE8u: goto label_7F34AEE8;
    case 0x7F34AEECu: goto label_7F34AEEC;
    case 0x7F34AEF0u: goto label_7F34AEF0;
    case 0x7F34AEF4u: goto label_7F34AEF4;
    case 0x7F34AEF8u: goto label_7F34AEF8;
    case 0x7F34AEFCu: goto label_7F34AEFC;
    case 0x7F34AF00u: goto label_7F34AF00;
    case 0x7F34AF04u: goto label_7F34AF04;
    case 0x7F34AF08u: goto label_7F34AF08;
    case 0x7F34AF0Cu: goto label_7F34AF0C;
    case 0x7F34AF10u: goto label_7F34AF10;
    case 0x7F34AF14u: goto label_7F34AF14;
    case 0x7F34AF18u: goto label_7F34AF18;
    case 0x7F34AF1Cu: goto label_7F34AF1C;
    case 0x7F34AF20u: goto label_7F34AF20;
    case 0x7F34AF24u: goto label_7F34AF24;
    case 0x7F34AF28u: goto label_7F34AF28;
    case 0x7F34AF2Cu: goto label_7F34AF2C;
    case 0x7F34AF30u: goto label_7F34AF30;
    case 0x7F34AF34u: goto label_7F34AF34;
    case 0x7F34AF38u: goto label_7F34AF38;
    case 0x7F34AF3Cu: goto label_7F34AF3C;
    case 0x7F34AF40u: goto label_7F34AF40;
    case 0x7F34AF44u: goto label_7F34AF44;
    case 0x7F34AF48u: goto label_7F34AF48;
    case 0x7F34AF4Cu: goto label_7F34AF4C;
    case 0x7F34AF50u: goto label_7F34AF50;
    case 0x7F34AF54u: goto label_7F34AF54;
    case 0x7F34AF58u: goto label_7F34AF58;
    case 0x7F34AF5Cu: goto label_7F34AF5C;
    case 0x7F34AF60u: goto label_7F34AF60;
    case 0x7F34AF64u: goto label_7F34AF64;
    case 0x7F34AF68u: goto label_7F34AF68;
    case 0x7F34AF6Cu: goto label_7F34AF6C;
    case 0x7F34AF70u: goto label_7F34AF70;
    case 0x7F34AF74u: goto label_7F34AF74;
    case 0x7F34AF78u: goto label_7F34AF78;
    case 0x7F34AF7Cu: goto label_7F34AF7C;
    case 0x7F34AF80u: goto label_7F34AF80;
    case 0x7F34AF84u: goto label_7F34AF84;
    case 0x7F34AF88u: goto label_7F34AF88;
    case 0x7F34AF8Cu: goto label_7F34AF8C;
    case 0x7F34AF90u: goto label_7F34AF90;
    case 0x7F34AF94u: goto label_7F34AF94;
    case 0x7F34AF98u: goto label_7F34AF98;
    case 0x7F34AF9Cu: goto label_7F34AF9C;
    case 0x7F34AFA0u: goto label_7F34AFA0;
    case 0x7F34AFA4u: goto label_7F34AFA4;
    case 0x7F34AFA8u: goto label_7F34AFA8;
    case 0x7F34AFACu: goto label_7F34AFAC;
    case 0x7F34AFB0u: goto label_7F34AFB0;
    case 0x7F34AFB4u: goto label_7F34AFB4;
    case 0x7F34AFB8u: goto label_7F34AFB8;
    case 0x7F34AFBCu: goto label_7F34AFBC;
    case 0x7F34AFC0u: goto label_7F34AFC0;
    case 0x7F34AFC4u: goto label_7F34AFC4;
    case 0x7F34AFC8u: goto label_7F34AFC8;
    case 0x7F34AFCCu: goto label_7F34AFCC;
    case 0x7F34AFD0u: goto label_7F34AFD0;
    case 0x7F34AFD4u: goto label_7F34AFD4;
    case 0x7F34AFD8u: goto label_7F34AFD8;
    case 0x7F34AFDCu: goto label_7F34AFDC;
    case 0x7F34AFE0u: goto label_7F34AFE0;
    case 0x7F34AFE4u: goto label_7F34AFE4;
    case 0x7F34AFE8u: goto label_7F34AFE8;
    case 0x7F34AFECu: goto label_7F34AFEC;
    case 0x7F34AFF0u: goto label_7F34AFF0;
    case 0x7F34AFF4u: goto label_7F34AFF4;
    case 0x7F34AFF8u: goto label_7F34AFF8;
    case 0x7F34AFFCu: goto label_7F34AFFC;
    case 0x7F34B000u: goto label_7F34B000;
    case 0x7F34B004u: goto label_7F34B004;
    case 0x7F34B008u: goto label_7F34B008;
    case 0x7F34B00Cu: goto label_7F34B00C;
    case 0x7F34B010u: goto label_7F34B010;
    case 0x7F34B014u: goto label_7F34B014;
    case 0x7F34B018u: goto label_7F34B018;
    case 0x7F34B01Cu: goto label_7F34B01C;
    case 0x7F34B020u: goto label_7F34B020;
    case 0x7F34B024u: goto label_7F34B024;
    case 0x7F34B028u: goto label_7F34B028;
    case 0x7F34B02Cu: goto label_7F34B02C;
    case 0x7F34B030u: goto label_7F34B030;
    case 0x7F34B034u: goto label_7F34B034;
    case 0x7F34B038u: goto label_7F34B038;
    case 0x7F34B03Cu: goto label_7F34B03C;
    case 0x7F34B040u: goto label_7F34B040;
    case 0x7F34B044u: goto label_7F34B044;
    case 0x7F34B048u: goto label_7F34B048;
    case 0x7F34B04Cu: goto label_7F34B04C;
    case 0x7F34B050u: goto label_7F34B050;
    case 0x7F34B054u: goto label_7F34B054;
    case 0x7F34B058u: goto label_7F34B058;
    case 0x7F34B05Cu: goto label_7F34B05C;
    case 0x7F34B060u: goto label_7F34B060;
    case 0x7F34B064u: goto label_7F34B064;
    case 0x7F34B068u: goto label_7F34B068;
    case 0x7F34B06Cu: goto label_7F34B06C;
    case 0x7F34B070u: goto label_7F34B070;
    case 0x7F34B074u: goto label_7F34B074;
    case 0x7F34B078u: goto label_7F34B078;
    case 0x7F34B07Cu: goto label_7F34B07C;
    case 0x7F34B080u: goto label_7F34B080;
    case 0x7F34B084u: goto label_7F34B084;
    case 0x7F34B088u: goto label_7F34B088;
    case 0x7F34B08Cu: goto label_7F34B08C;
    case 0x7F34B090u: goto label_7F34B090;
    case 0x7F34B094u: goto label_7F34B094;
    case 0x7F34B098u: goto label_7F34B098;
    case 0x7F34B09Cu: goto label_7F34B09C;
    case 0x7F34B0A0u: goto label_7F34B0A0;
    case 0x7F34B0A4u: goto label_7F34B0A4;
    case 0x7F34B0A8u: goto label_7F34B0A8;
    case 0x7F34B0ACu: goto label_7F34B0AC;
    case 0x7F34B0B0u: goto label_7F34B0B0;
    case 0x7F34B0B4u: goto label_7F34B0B4;
    case 0x7F34B0B8u: goto label_7F34B0B8;
    case 0x7F34B0BCu: goto label_7F34B0BC;
    case 0x7F34B0C0u: goto label_7F34B0C0;
    case 0x7F34B0C4u: goto label_7F34B0C4;
    case 0x7F34B0C8u: goto label_7F34B0C8;
    case 0x7F34B0CCu: goto label_7F34B0CC;
    case 0x7F34B0D0u: goto label_7F34B0D0;
    case 0x7F34B0D4u: goto label_7F34B0D4;
    case 0x7F34B0D8u: goto label_7F34B0D8;
    case 0x7F34B0DCu: goto label_7F34B0DC;
    case 0x7F34B0E0u: goto label_7F34B0E0;
    case 0x7F34B0E4u: goto label_7F34B0E4;
    case 0x7F34B0E8u: goto label_7F34B0E8;
    case 0x7F34B0ECu: goto label_7F34B0EC;
    case 0x7F34B0F0u: goto label_7F34B0F0;
    case 0x7F34B0F4u: goto label_7F34B0F4;
    case 0x7F34B0F8u: goto label_7F34B0F8;
    case 0x7F34B0FCu: goto label_7F34B0FC;
    case 0x7F34B100u: goto label_7F34B100;
    case 0x7F34B104u: goto label_7F34B104;
    case 0x7F34B108u: goto label_7F34B108;
    case 0x7F34B10Cu: goto label_7F34B10C;
    case 0x7F34B110u: goto label_7F34B110;
    case 0x7F34B114u: goto label_7F34B114;
    case 0x7F34B118u: goto label_7F34B118;
    case 0x7F34B11Cu: goto label_7F34B11C;
    case 0x7F34B120u: goto label_7F34B120;
    case 0x7F34B124u: goto label_7F34B124;
    case 0x7F34B128u: goto label_7F34B128;
    case 0x7F34B12Cu: goto label_7F34B12C;
    case 0x7F34B130u: goto label_7F34B130;
    case 0x7F34B134u: goto label_7F34B134;
    case 0x7F34B138u: goto label_7F34B138;
    case 0x7F34B13Cu: goto label_7F34B13C;
    case 0x7F34B140u: goto label_7F34B140;
    case 0x7F34B144u: goto label_7F34B144;
    case 0x7F34B148u: goto label_7F34B148;
    case 0x7F34B14Cu: goto label_7F34B14C;
    case 0x7F34B150u: goto label_7F34B150;
    case 0x7F34B154u: goto label_7F34B154;
    case 0x7F34B158u: goto label_7F34B158;
    case 0x7F34B15Cu: goto label_7F34B15C;
    case 0x7F34B160u: goto label_7F34B160;
    case 0x7F34B164u: goto label_7F34B164;
    case 0x7F34B168u: goto label_7F34B168;
    case 0x7F34B16Cu: goto label_7F34B16C;
    case 0x7F34B170u: goto label_7F34B170;
    case 0x7F34B174u: goto label_7F34B174;
    case 0x7F34B178u: goto label_7F34B178;
    case 0x7F34B17Cu: goto label_7F34B17C;
    case 0x7F34B180u: goto label_7F34B180;
    case 0x7F34B184u: goto label_7F34B184;
    case 0x7F34B188u: goto label_7F34B188;
    case 0x7F34B18Cu: goto label_7F34B18C;
    case 0x7F34B190u: goto label_7F34B190;
    case 0x7F34B194u: goto label_7F34B194;
    case 0x7F34B198u: goto label_7F34B198;
    case 0x7F34B19Cu: goto label_7F34B19C;
    case 0x7F34B1A0u: goto label_7F34B1A0;
    case 0x7F34B1A4u: goto label_7F34B1A4;
    case 0x7F34B1A8u: goto label_7F34B1A8;
    case 0x7F34B1ACu: goto label_7F34B1AC;
    case 0x7F34B1B0u: goto label_7F34B1B0;
    case 0x7F34B1B4u: goto label_7F34B1B4;
    case 0x7F34B1B8u: goto label_7F34B1B8;
    case 0x7F34B1BCu: goto label_7F34B1BC;
    case 0x7F34B1C0u: goto label_7F34B1C0;
    case 0x7F34B1C4u: goto label_7F34B1C4;
    case 0x7F34B1C8u: goto label_7F34B1C8;
    case 0x7F34B1CCu: goto label_7F34B1CC;
    case 0x7F34B1D0u: goto label_7F34B1D0;
    case 0x7F34B1D4u: goto label_7F34B1D4;
    case 0x7F34B1D8u: goto label_7F34B1D8;
    case 0x7F34B1DCu: goto label_7F34B1DC;
    case 0x7F34B1E0u: goto label_7F34B1E0;
    case 0x7F34B1E4u: goto label_7F34B1E4;
    case 0x7F34B1E8u: goto label_7F34B1E8;
    case 0x7F34B1ECu: goto label_7F34B1EC;
    case 0x7F34B1F0u: goto label_7F34B1F0;
    case 0x7F34B1F4u: goto label_7F34B1F4;
    case 0x7F34B1F8u: goto label_7F34B1F8;
    case 0x7F34B1FCu: goto label_7F34B1FC;
    case 0x7F34B200u: goto label_7F34B200;
    case 0x7F34B204u: goto label_7F34B204;
    case 0x7F34B208u: goto label_7F34B208;
    case 0x7F34B20Cu: goto label_7F34B20C;
    case 0x7F34B210u: goto label_7F34B210;
    case 0x7F34B214u: goto label_7F34B214;
    case 0x7F34B218u: goto label_7F34B218;
    case 0x7F34B21Cu: goto label_7F34B21C;
    case 0x7F34B220u: goto label_7F34B220;
    case 0x7F34B224u: goto label_7F34B224;
    case 0x7F34B228u: goto label_7F34B228;
    case 0x7F34B22Cu: goto label_7F34B22C;
    case 0x7F34B230u: goto label_7F34B230;
    case 0x7F34B234u: goto label_7F34B234;
    case 0x7F34B238u: goto label_7F34B238;
    case 0x7F34B23Cu: goto label_7F34B23C;
    case 0x7F34B240u: goto label_7F34B240;
    case 0x7F34B244u: goto label_7F34B244;
    case 0x7F34B248u: goto label_7F34B248;
    case 0x7F34B24Cu: goto label_7F34B24C;
    case 0x7F34B250u: goto label_7F34B250;
    case 0x7F34B254u: goto label_7F34B254;
    case 0x7F34B258u: goto label_7F34B258;
    case 0x7F34B25Cu: goto label_7F34B25C;
    case 0x7F34B260u: goto label_7F34B260;
    case 0x7F34B264u: goto label_7F34B264;
    case 0x7F34B268u: goto label_7F34B268;
    case 0x7F34B26Cu: goto label_7F34B26C;
    case 0x7F34B270u: goto label_7F34B270;
    case 0x7F34B274u: goto label_7F34B274;
    case 0x7F34B278u: goto label_7F34B278;
    case 0x7F34B27Cu: goto label_7F34B27C;
    case 0x7F34B280u: goto label_7F34B280;
    case 0x7F34B284u: goto label_7F34B284;
    case 0x7F34B288u: goto label_7F34B288;
    case 0x7F34B28Cu: goto label_7F34B28C;
    case 0x7F34B290u: goto label_7F34B290;
    case 0x7F34B294u: goto label_7F34B294;
    case 0x7F34B298u: goto label_7F34B298;
    case 0x7F34B29Cu: goto label_7F34B29C;
    case 0x7F34B2A0u: goto label_7F34B2A0;
    case 0x7F34B2A4u: goto label_7F34B2A4;
    case 0x7F34B2A8u: goto label_7F34B2A8;
    case 0x7F34B2ACu: goto label_7F34B2AC;
    case 0x7F34B2B0u: goto label_7F34B2B0;
    case 0x7F34B2B4u: goto label_7F34B2B4;
    case 0x7F34B2B8u: goto label_7F34B2B8;
    case 0x7F34B2BCu: goto label_7F34B2BC;
    case 0x7F34B2C0u: goto label_7F34B2C0;
    case 0x7F34B2C4u: goto label_7F34B2C4;
    case 0x7F34B2C8u: goto label_7F34B2C8;
    case 0x7F34B2CCu: goto label_7F34B2CC;
    case 0x7F34B2D0u: goto label_7F34B2D0;
    case 0x7F34B2D4u: goto label_7F34B2D4;
    case 0x7F34B2D8u: goto label_7F34B2D8;
    case 0x7F34B2DCu: goto label_7F34B2DC;
    case 0x7F34B2E0u: goto label_7F34B2E0;
    case 0x7F34B2E4u: goto label_7F34B2E4;
    case 0x7F34B2E8u: goto label_7F34B2E8;
    case 0x7F34B2ECu: goto label_7F34B2EC;
    case 0x7F34B2F0u: goto label_7F34B2F0;
    case 0x7F34B2F4u: goto label_7F34B2F4;
    case 0x7F34B2F8u: goto label_7F34B2F8;
    case 0x7F34B2FCu: goto label_7F34B2FC;
    case 0x7F34B300u: goto label_7F34B300;
    case 0x7F34B304u: goto label_7F34B304;
    case 0x7F34B308u: goto label_7F34B308;
    case 0x7F34B30Cu: goto label_7F34B30C;
    case 0x7F34B310u: goto label_7F34B310;
    case 0x7F34B314u: goto label_7F34B314;
    case 0x7F34B318u: goto label_7F34B318;
    case 0x7F34B31Cu: goto label_7F34B31C;
    case 0x7F34B320u: goto label_7F34B320;
    case 0x7F34B324u: goto label_7F34B324;
    case 0x7F34B328u: goto label_7F34B328;
    case 0x7F34B32Cu: goto label_7F34B32C;
    case 0x7F34B330u: goto label_7F34B330;
    case 0x7F34B334u: goto label_7F34B334;
    case 0x7F34B338u: goto label_7F34B338;
    case 0x7F34B33Cu: goto label_7F34B33C;
    case 0x7F34B340u: goto label_7F34B340;
    case 0x7F34B344u: goto label_7F34B344;
    case 0x7F34B348u: goto label_7F34B348;
    case 0x7F34B34Cu: goto label_7F34B34C;
    case 0x7F34B350u: goto label_7F34B350;
    case 0x7F34B354u: goto label_7F34B354;
    case 0x7F34B358u: goto label_7F34B358;
    case 0x7F34B35Cu: goto label_7F34B35C;
    case 0x7F34B360u: goto label_7F34B360;
    case 0x7F34B364u: goto label_7F34B364;
    case 0x7F34B368u: goto label_7F34B368;
    case 0x7F34B36Cu: goto label_7F34B36C;
    case 0x7F34B370u: goto label_7F34B370;
    case 0x7F34B374u: goto label_7F34B374;
    case 0x7F34B378u: goto label_7F34B378;
    case 0x7F34B37Cu: goto label_7F34B37C;
    case 0x7F34B380u: goto label_7F34B380;
    case 0x7F34B384u: goto label_7F34B384;
    case 0x7F34B388u: goto label_7F34B388;
    case 0x7F34B38Cu: goto label_7F34B38C;
    case 0x7F34B390u: goto label_7F34B390;
    case 0x7F34B394u: goto label_7F34B394;
    case 0x7F34B398u: goto label_7F34B398;
    case 0x7F34B39Cu: goto label_7F34B39C;
    case 0x7F34B3A0u: goto label_7F34B3A0;
    case 0x7F34B3A4u: goto label_7F34B3A4;
    case 0x7F34B3A8u: goto label_7F34B3A8;
    case 0x7F34B3ACu: goto label_7F34B3AC;
    case 0x7F34B3B0u: goto label_7F34B3B0;
    case 0x7F34B3B4u: goto label_7F34B3B4;
    case 0x7F34B3B8u: goto label_7F34B3B8;
    case 0x7F34B3BCu: goto label_7F34B3BC;
    case 0x7F34B3C0u: goto label_7F34B3C0;
    case 0x7F34B3C4u: goto label_7F34B3C4;
    case 0x7F34B3C8u: goto label_7F34B3C8;
    case 0x7F34B3CCu: goto label_7F34B3CC;
    case 0x7F34B3D0u: goto label_7F34B3D0;
    case 0x7F34B3D4u: goto label_7F34B3D4;
    case 0x7F34B3D8u: goto label_7F34B3D8;
    case 0x7F34B3DCu: goto label_7F34B3DC;
    case 0x7F34B3E0u: goto label_7F34B3E0;
    case 0x7F34B3E4u: goto label_7F34B3E4;
    case 0x7F34B3E8u: goto label_7F34B3E8;
    case 0x7F34B3ECu: goto label_7F34B3EC;
    case 0x7F34B3F0u: goto label_7F34B3F0;
    case 0x7F34B3F4u: goto label_7F34B3F4;
    case 0x7F34B3F8u: goto label_7F34B3F8;
    case 0x7F34B3FCu: goto label_7F34B3FC;
    case 0x7F34B400u: goto label_7F34B400;
    case 0x7F34B404u: goto label_7F34B404;
    case 0x7F34B408u: goto label_7F34B408;
    case 0x7F34B40Cu: goto label_7F34B40C;
    case 0x7F34B410u: goto label_7F34B410;
    case 0x7F34B414u: goto label_7F34B414;
    case 0x7F34B418u: goto label_7F34B418;
    case 0x7F34B41Cu: goto label_7F34B41C;
    case 0x7F34B420u: goto label_7F34B420;
    case 0x7F34B424u: goto label_7F34B424;
    case 0x7F34B428u: goto label_7F34B428;
    case 0x7F34B42Cu: goto label_7F34B42C;
    case 0x7F34B430u: goto label_7F34B430;
    case 0x7F34B434u: goto label_7F34B434;
    case 0x7F34B438u: goto label_7F34B438;
    case 0x7F34B43Cu: goto label_7F34B43C;
    case 0x7F34B440u: goto label_7F34B440;
    case 0x7F34B444u: goto label_7F34B444;
    case 0x7F34B448u: goto label_7F34B448;
    case 0x7F34B44Cu: goto label_7F34B44C;
    case 0x7F34B450u: goto label_7F34B450;
    case 0x7F34B454u: goto label_7F34B454;
    case 0x7F34B458u: goto label_7F34B458;
    case 0x7F34B45Cu: goto label_7F34B45C;
    case 0x7F34B460u: goto label_7F34B460;
    case 0x7F34B464u: goto label_7F34B464;
    case 0x7F34B468u: goto label_7F34B468;
    case 0x7F34B46Cu: goto label_7F34B46C;
    case 0x7F34B470u: goto label_7F34B470;
    case 0x7F34B474u: goto label_7F34B474;
    case 0x7F34B478u: goto label_7F34B478;
    case 0x7F34B47Cu: goto label_7F34B47C;
    case 0x7F34B480u: goto label_7F34B480;
    case 0x7F34B484u: goto label_7F34B484;
    case 0x7F34B488u: goto label_7F34B488;
    case 0x7F34B48Cu: goto label_7F34B48C;
    case 0x7F34B490u: goto label_7F34B490;
    case 0x7F34B494u: goto label_7F34B494;
    case 0x7F34B498u: goto label_7F34B498;
    case 0x7F34B49Cu: goto label_7F34B49C;
    case 0x7F34B4A0u: goto label_7F34B4A0;
    case 0x7F34B4A4u: goto label_7F34B4A4;
    case 0x7F34B4A8u: goto label_7F34B4A8;
    case 0x7F34B4ACu: goto label_7F34B4AC;
    case 0x7F34B4B0u: goto label_7F34B4B0;
    case 0x7F34B4B4u: goto label_7F34B4B4;
    case 0x7F34B4B8u: goto label_7F34B4B8;
    case 0x7F34B4BCu: goto label_7F34B4BC;
    case 0x7F34B4C0u: goto label_7F34B4C0;
    case 0x7F34B4C4u: goto label_7F34B4C4;
    case 0x7F34B4C8u: goto label_7F34B4C8;
    case 0x7F34B4CCu: goto label_7F34B4CC;
    case 0x7F34B4D0u: goto label_7F34B4D0;
    case 0x7F34B4D4u: goto label_7F34B4D4;
    case 0x7F34B4D8u: goto label_7F34B4D8;
    case 0x7F34B4DCu: goto label_7F34B4DC;
    case 0x7F34B4E0u: goto label_7F34B4E0;
    case 0x7F34B4E4u: goto label_7F34B4E4;
    case 0x7F34B4E8u: goto label_7F34B4E8;
    case 0x7F34B4ECu: goto label_7F34B4EC;
    case 0x7F34B4F0u: goto label_7F34B4F0;
    case 0x7F34B4F4u: goto label_7F34B4F4;
    case 0x7F34B4F8u: goto label_7F34B4F8;
    case 0x7F34B4FCu: goto label_7F34B4FC;
    case 0x7F34B500u: goto label_7F34B500;
    case 0x7F34B504u: goto label_7F34B504;
    case 0x7F34B508u: goto label_7F34B508;
    case 0x7F34B50Cu: goto label_7F34B50C;
    case 0x7F34B510u: goto label_7F34B510;
    case 0x7F34B514u: goto label_7F34B514;
    case 0x7F34B518u: goto label_7F34B518;
    case 0x7F34B51Cu: goto label_7F34B51C;
    case 0x7F34B520u: goto label_7F34B520;
    case 0x7F34B524u: goto label_7F34B524;
    case 0x7F34B528u: goto label_7F34B528;
    case 0x7F34B52Cu: goto label_7F34B52C;
    case 0x7F34B530u: goto label_7F34B530;
    case 0x7F34B534u: goto label_7F34B534;
    case 0x7F34B538u: goto label_7F34B538;
    case 0x7F34B53Cu: goto label_7F34B53C;
    case 0x7F34B540u: goto label_7F34B540;
    case 0x7F34B544u: goto label_7F34B544;
    case 0x7F34B548u: goto label_7F34B548;
    case 0x7F34B54Cu: goto label_7F34B54C;
    case 0x7F34B550u: goto label_7F34B550;
    case 0x7F34B554u: goto label_7F34B554;
    case 0x7F34B558u: goto label_7F34B558;
    case 0x7F34B55Cu: goto label_7F34B55C;
    case 0x7F34B560u: goto label_7F34B560;
    case 0x7F34B564u: goto label_7F34B564;
    case 0x7F34B568u: goto label_7F34B568;
    case 0x7F34B56Cu: goto label_7F34B56C;
    case 0x7F34B570u: goto label_7F34B570;
    case 0x7F34B574u: goto label_7F34B574;
    case 0x7F34B578u: goto label_7F34B578;
    case 0x7F34B57Cu: goto label_7F34B57C;
    case 0x7F34B580u: goto label_7F34B580;
    case 0x7F34B584u: goto label_7F34B584;
    case 0x7F34B588u: goto label_7F34B588;
    case 0x7F34B58Cu: goto label_7F34B58C;
    case 0x7F34B590u: goto label_7F34B590;
    case 0x7F34B594u: goto label_7F34B594;
    case 0x7F34B598u: goto label_7F34B598;
    case 0x7F34B59Cu: goto label_7F34B59C;
    case 0x7F34B5A0u: goto label_7F34B5A0;
    case 0x7F34B5A4u: goto label_7F34B5A4;
    case 0x7F34B5A8u: goto label_7F34B5A8;
    case 0x7F34B5ACu: goto label_7F34B5AC;
    case 0x7F34B5B0u: goto label_7F34B5B0;
    case 0x7F34B5B4u: goto label_7F34B5B4;
    case 0x7F34B5B8u: goto label_7F34B5B8;
    case 0x7F34B5BCu: goto label_7F34B5BC;
    case 0x7F34B5C0u: goto label_7F34B5C0;
    case 0x7F34B5C4u: goto label_7F34B5C4;
    case 0x7F34B5C8u: goto label_7F34B5C8;
    case 0x7F34B5CCu: goto label_7F34B5CC;
    case 0x7F34B5D0u: goto label_7F34B5D0;
    case 0x7F34B5D4u: goto label_7F34B5D4;
    case 0x7F34B5D8u: goto label_7F34B5D8;
    case 0x7F34B5DCu: goto label_7F34B5DC;
    case 0x7F34B5E0u: goto label_7F34B5E0;
    case 0x7F34B5E4u: goto label_7F34B5E4;
    case 0x7F34B5E8u: goto label_7F34B5E8;
    case 0x7F34B5ECu: goto label_7F34B5EC;
    case 0x7F34B5F0u: goto label_7F34B5F0;
    case 0x7F34B5F4u: goto label_7F34B5F4;
    case 0x7F34B5F8u: goto label_7F34B5F8;
    case 0x7F34B5FCu: goto label_7F34B5FC;
    case 0x7F34B600u: goto label_7F34B600;
    case 0x7F34B604u: goto label_7F34B604;
    case 0x7F34B608u: goto label_7F34B608;
    case 0x7F34B60Cu: goto label_7F34B60C;
    case 0x7F34B610u: goto label_7F34B610;
    case 0x7F34B614u: goto label_7F34B614;
    case 0x7F34B618u: goto label_7F34B618;
    case 0x7F34B61Cu: goto label_7F34B61C;
    case 0x7F34B620u: goto label_7F34B620;
    case 0x7F34B624u: goto label_7F34B624;
    case 0x7F34B628u: goto label_7F34B628;
    case 0x7F34B62Cu: goto label_7F34B62C;
    case 0x7F34B630u: goto label_7F34B630;
    case 0x7F34B634u: goto label_7F34B634;
    case 0x7F34B638u: goto label_7F34B638;
    case 0x7F34B63Cu: goto label_7F34B63C;
    case 0x7F34B640u: goto label_7F34B640;
    case 0x7F34B644u: goto label_7F34B644;
    case 0x7F34B648u: goto label_7F34B648;
    case 0x7F34B64Cu: goto label_7F34B64C;
    case 0x7F34B650u: goto label_7F34B650;
    case 0x7F34B654u: goto label_7F34B654;
    case 0x7F34B658u: goto label_7F34B658;
    case 0x7F34B65Cu: goto label_7F34B65C;
    case 0x7F34B660u: goto label_7F34B660;
    case 0x7F34B664u: goto label_7F34B664;
    case 0x7F34B668u: goto label_7F34B668;
    case 0x7F34B66Cu: goto label_7F34B66C;
    case 0x7F34B670u: goto label_7F34B670;
    case 0x7F34B674u: goto label_7F34B674;
    case 0x7F34B678u: goto label_7F34B678;
    case 0x7F34B67Cu: goto label_7F34B67C;
    case 0x7F34B680u: goto label_7F34B680;
    case 0x7F34B684u: goto label_7F34B684;
    case 0x7F34B688u: goto label_7F34B688;
    case 0x7F34B68Cu: goto label_7F34B68C;
    case 0x7F34B690u: goto label_7F34B690;
    case 0x7F34B694u: goto label_7F34B694;
    case 0x7F34B698u: goto label_7F34B698;
    case 0x7F34B69Cu: goto label_7F34B69C;
    case 0x7F34B6A0u: goto label_7F34B6A0;
    case 0x7F34B6A4u: goto label_7F34B6A4;
    case 0x7F34B6A8u: goto label_7F34B6A8;
    case 0x7F34B6ACu: goto label_7F34B6AC;
    case 0x7F34B6B0u: goto label_7F34B6B0;
    case 0x7F34B6B4u: goto label_7F34B6B4;
    case 0x7F34B6B8u: goto label_7F34B6B8;
    case 0x7F34B6BCu: goto label_7F34B6BC;
    case 0x7F34B6C0u: goto label_7F34B6C0;
    case 0x7F34B6C4u: goto label_7F34B6C4;
    case 0x7F34B6C8u: goto label_7F34B6C8;
    case 0x7F34B6CCu: goto label_7F34B6CC;
    case 0x7F34B6D0u: goto label_7F34B6D0;
    case 0x7F34B6D4u: goto label_7F34B6D4;
    case 0x7F34B6D8u: goto label_7F34B6D8;
    case 0x7F34B6DCu: goto label_7F34B6DC;
    case 0x7F34B6E0u: goto label_7F34B6E0;
    case 0x7F34B6E4u: goto label_7F34B6E4;
    case 0x7F34B6E8u: goto label_7F34B6E8;
    case 0x7F34B6ECu: goto label_7F34B6EC;
    case 0x7F34B6F0u: goto label_7F34B6F0;
    case 0x7F34B6F4u: goto label_7F34B6F4;
    case 0x7F34B6F8u: goto label_7F34B6F8;
    case 0x7F34B6FCu: goto label_7F34B6FC;
    case 0x7F34B700u: goto label_7F34B700;
    case 0x7F34B704u: goto label_7F34B704;
    case 0x7F34B708u: goto label_7F34B708;
    case 0x7F34B70Cu: goto label_7F34B70C;
    case 0x7F34B710u: goto label_7F34B710;
    case 0x7F34B714u: goto label_7F34B714;
    case 0x7F34B718u: goto label_7F34B718;
    case 0x7F34B71Cu: goto label_7F34B71C;
    case 0x7F34B720u: goto label_7F34B720;
    case 0x7F34B724u: goto label_7F34B724;
    case 0x7F34B728u: goto label_7F34B728;
    case 0x7F34B72Cu: goto label_7F34B72C;
    case 0x7F34B730u: goto label_7F34B730;
    case 0x7F34B734u: goto label_7F34B734;
    case 0x7F34B738u: goto label_7F34B738;
    case 0x7F34B73Cu: goto label_7F34B73C;
    case 0x7F34B740u: goto label_7F34B740;
    case 0x7F34B744u: goto label_7F34B744;
    case 0x7F34B748u: goto label_7F34B748;
    case 0x7F34B74Cu: goto label_7F34B74C;
    case 0x7F34B750u: goto label_7F34B750;
    case 0x7F34B754u: goto label_7F34B754;
    case 0x7F34B758u: goto label_7F34B758;
    case 0x7F34B75Cu: goto label_7F34B75C;
    case 0x7F34B760u: goto label_7F34B760;
    case 0x7F34B764u: goto label_7F34B764;
    case 0x7F34B768u: goto label_7F34B768;
    case 0x7F34B76Cu: goto label_7F34B76C;
    case 0x7F34B770u: goto label_7F34B770;
    case 0x7F34B774u: goto label_7F34B774;
    case 0x7F34B778u: goto label_7F34B778;
    case 0x7F34B77Cu: goto label_7F34B77C;
    case 0x7F34B780u: goto label_7F34B780;
    case 0x7F34B784u: goto label_7F34B784;
    case 0x7F34B788u: goto label_7F34B788;
    case 0x7F34B78Cu: goto label_7F34B78C;
    case 0x7F34B790u: goto label_7F34B790;
    case 0x7F34B794u: goto label_7F34B794;
    case 0x7F34B798u: goto label_7F34B798;
    case 0x7F34B79Cu: goto label_7F34B79C;
    case 0x7F34B7A0u: goto label_7F34B7A0;
    case 0x7F34B7A4u: goto label_7F34B7A4;
    case 0x7F34B7A8u: goto label_7F34B7A8;
    case 0x7F34B7ACu: goto label_7F34B7AC;
    case 0x7F34B7B0u: goto label_7F34B7B0;
    case 0x7F34B7B4u: goto label_7F34B7B4;
    case 0x7F34B7B8u: goto label_7F34B7B8;
    case 0x7F34B7BCu: goto label_7F34B7BC;
    case 0x7F34B7C0u: goto label_7F34B7C0;
    case 0x7F34B7C4u: goto label_7F34B7C4;
    case 0x7F34B7C8u: goto label_7F34B7C8;
    case 0x7F34B7CCu: goto label_7F34B7CC;
    case 0x7F34B7D0u: goto label_7F34B7D0;
    case 0x7F34B7D4u: goto label_7F34B7D4;
    case 0x7F34B7D8u: goto label_7F34B7D8;
    case 0x7F34B7DCu: goto label_7F34B7DC;
    case 0x7F34B7E0u: goto label_7F34B7E0;
    case 0x7F34B7E4u: goto label_7F34B7E4;
    case 0x7F34B7E8u: goto label_7F34B7E8;
    case 0x7F34B7ECu: goto label_7F34B7EC;
    case 0x7F34B7F0u: goto label_7F34B7F0;
    case 0x7F34B7F4u: goto label_7F34B7F4;
    case 0x7F34B7F8u: goto label_7F34B7F8;
    case 0x7F34B7FCu: goto label_7F34B7FC;
    case 0x7F34B800u: goto label_7F34B800;
    case 0x7F34B804u: goto label_7F34B804;
    case 0x7F34B808u: goto label_7F34B808;
    case 0x7F34B80Cu: goto label_7F34B80C;
    case 0x7F34B810u: goto label_7F34B810;
    case 0x7F34B814u: goto label_7F34B814;
    case 0x7F34B818u: goto label_7F34B818;
    case 0x7F34B81Cu: goto label_7F34B81C;
    case 0x7F34B820u: goto label_7F34B820;
    case 0x7F34B824u: goto label_7F34B824;
    case 0x7F34B828u: goto label_7F34B828;
    case 0x7F34B82Cu: goto label_7F34B82C;
    case 0x7F34B830u: goto label_7F34B830;
    case 0x7F34B834u: goto label_7F34B834;
    case 0x7F34B838u: goto label_7F34B838;
    case 0x7F34B83Cu: goto label_7F34B83C;
    case 0x7F34B840u: goto label_7F34B840;
    case 0x7F34B844u: goto label_7F34B844;
    case 0x7F34B848u: goto label_7F34B848;
    case 0x7F34B84Cu: goto label_7F34B84C;
    case 0x7F34B850u: goto label_7F34B850;
    case 0x7F34B854u: goto label_7F34B854;
    case 0x7F34B858u: goto label_7F34B858;
    case 0x7F34B85Cu: goto label_7F34B85C;
    case 0x7F34B860u: goto label_7F34B860;
    case 0x7F34B864u: goto label_7F34B864;
    case 0x7F34B868u: goto label_7F34B868;
    case 0x7F34B86Cu: goto label_7F34B86C;
    case 0x7F34B870u: goto label_7F34B870;
    case 0x7F34B874u: goto label_7F34B874;
    case 0x7F34B878u: goto label_7F34B878;
    case 0x7F34B87Cu: goto label_7F34B87C;
    case 0x7F34B880u: goto label_7F34B880;
    case 0x7F34B884u: goto label_7F34B884;
    case 0x7F34B888u: goto label_7F34B888;
    case 0x7F34B88Cu: goto label_7F34B88C;
    case 0x7F34B890u: goto label_7F34B890;
    case 0x7F34B894u: goto label_7F34B894;
    case 0x7F34B898u: goto label_7F34B898;
    case 0x7F34B89Cu: goto label_7F34B89C;
    case 0x7F34B8A0u: goto label_7F34B8A0;
    case 0x7F34B8A4u: goto label_7F34B8A4;
    case 0x7F34B8A8u: goto label_7F34B8A8;
    case 0x7F34B8ACu: goto label_7F34B8AC;
    case 0x7F34B8B0u: goto label_7F34B8B0;
    case 0x7F34B8B4u: goto label_7F34B8B4;
    case 0x7F34B8B8u: goto label_7F34B8B8;
    case 0x7F34B8BCu: goto label_7F34B8BC;
    case 0x7F34B8C0u: goto label_7F34B8C0;
    case 0x7F34B8C4u: goto label_7F34B8C4;
    case 0x7F34B8C8u: goto label_7F34B8C8;
    case 0x7F34B8CCu: goto label_7F34B8CC;
    case 0x7F34B8D0u: goto label_7F34B8D0;
    case 0x7F34B8D4u: goto label_7F34B8D4;
    case 0x7F34B8D8u: goto label_7F34B8D8;
    case 0x7F34B8DCu: goto label_7F34B8DC;
    case 0x7F34B8E0u: goto label_7F34B8E0;
    case 0x7F34B8E4u: goto label_7F34B8E4;
    case 0x7F34B8E8u: goto label_7F34B8E8;
    case 0x7F34B8ECu: goto label_7F34B8EC;
    case 0x7F34B8F0u: goto label_7F34B8F0;
    case 0x7F34B8F4u: goto label_7F34B8F4;
    case 0x7F34B8F8u: goto label_7F34B8F8;
    case 0x7F34B8FCu: goto label_7F34B8FC;
    case 0x7F34B900u: goto label_7F34B900;
    case 0x7F34B904u: goto label_7F34B904;
    case 0x7F34B908u: goto label_7F34B908;
    case 0x7F34B90Cu: goto label_7F34B90C;
    case 0x7F34B910u: goto label_7F34B910;
    case 0x7F34B914u: goto label_7F34B914;
    case 0x7F34B918u: goto label_7F34B918;
    case 0x7F34B91Cu: goto label_7F34B91C;
    case 0x7F34B920u: goto label_7F34B920;
    case 0x7F34B924u: goto label_7F34B924;
    case 0x7F34B928u: goto label_7F34B928;
    case 0x7F34B92Cu: goto label_7F34B92C;
    case 0x7F34B930u: goto label_7F34B930;
    case 0x7F34B934u: goto label_7F34B934;
    case 0x7F34B938u: goto label_7F34B938;
    case 0x7F34B93Cu: goto label_7F34B93C;
    case 0x7F34B940u: goto label_7F34B940;
    case 0x7F34B944u: goto label_7F34B944;
    case 0x7F34B948u: goto label_7F34B948;
    case 0x7F34B94Cu: goto label_7F34B94C;
    case 0x7F34B950u: goto label_7F34B950;
    case 0x7F34B954u: goto label_7F34B954;
    case 0x7F34B958u: goto label_7F34B958;
    case 0x7F34B95Cu: goto label_7F34B95C;
    case 0x7F34B960u: goto label_7F34B960;
    case 0x7F34B964u: goto label_7F34B964;
    case 0x7F34B968u: goto label_7F34B968;
    case 0x7F34B96Cu: goto label_7F34B96C;
    case 0x7F34B970u: goto label_7F34B970;
    case 0x7F34B974u: goto label_7F34B974;
    case 0x7F34B978u: goto label_7F34B978;
    case 0x7F34B97Cu: goto label_7F34B97C;
    case 0x7F34B980u: goto label_7F34B980;
    case 0x7F34B984u: goto label_7F34B984;
    case 0x7F34B988u: goto label_7F34B988;
    case 0x7F34B98Cu: goto label_7F34B98C;
    case 0x7F34B990u: goto label_7F34B990;
    case 0x7F34B994u: goto label_7F34B994;
    case 0x7F34B998u: goto label_7F34B998;
    case 0x7F34B99Cu: goto label_7F34B99C;
    case 0x7F34B9A0u: goto label_7F34B9A0;
    case 0x7F34B9A4u: goto label_7F34B9A4;
    case 0x7F34B9A8u: goto label_7F34B9A8;
    case 0x7F34B9ACu: goto label_7F34B9AC;
    case 0x7F34B9B0u: goto label_7F34B9B0;
    case 0x7F34B9B4u: goto label_7F34B9B4;
    case 0x7F34B9B8u: goto label_7F34B9B8;
    case 0x7F34B9BCu: goto label_7F34B9BC;
    case 0x7F34B9C0u: goto label_7F34B9C0;
    case 0x7F34B9C4u: goto label_7F34B9C4;
    case 0x7F34B9C8u: goto label_7F34B9C8;
    case 0x7F34B9CCu: goto label_7F34B9CC;
    case 0x7F34B9D0u: goto label_7F34B9D0;
    case 0x7F34B9D4u: goto label_7F34B9D4;
    case 0x7F34B9D8u: goto label_7F34B9D8;
    case 0x7F34B9DCu: goto label_7F34B9DC;
    case 0x7F34B9E0u: goto label_7F34B9E0;
    case 0x7F34B9E4u: goto label_7F34B9E4;
    case 0x7F34B9E8u: goto label_7F34B9E8;
    case 0x7F34B9ECu: goto label_7F34B9EC;
    case 0x7F34B9F0u: goto label_7F34B9F0;
    case 0x7F34B9F4u: goto label_7F34B9F4;
    case 0x7F34B9F8u: goto label_7F34B9F8;
    case 0x7F34B9FCu: goto label_7F34B9FC;
    case 0x7F34BA00u: goto label_7F34BA00;
    case 0x7F34BA04u: goto label_7F34BA04;
    case 0x7F34BA08u: goto label_7F34BA08;
    case 0x7F34BA0Cu: goto label_7F34BA0C;
    case 0x7F34BA10u: goto label_7F34BA10;
    case 0x7F34BA14u: goto label_7F34BA14;
    case 0x7F34BA18u: goto label_7F34BA18;
    case 0x7F34BA1Cu: goto label_7F34BA1C;
    case 0x7F34BA20u: goto label_7F34BA20;
    case 0x7F34BA24u: goto label_7F34BA24;
    case 0x7F34BA28u: goto label_7F34BA28;
    case 0x7F34BA2Cu: goto label_7F34BA2C;
    case 0x7F34BA30u: goto label_7F34BA30;
    case 0x7F34BA34u: goto label_7F34BA34;
    case 0x7F34BA38u: goto label_7F34BA38;
    case 0x7F34BA3Cu: goto label_7F34BA3C;
    case 0x7F34BA40u: goto label_7F34BA40;
    case 0x7F34BA44u: goto label_7F34BA44;
    case 0x7F34BA48u: goto label_7F34BA48;
    case 0x7F34BA4Cu: goto label_7F34BA4C;
    case 0x7F34BA50u: goto label_7F34BA50;
    case 0x7F34BA54u: goto label_7F34BA54;
    case 0x7F34BA58u: goto label_7F34BA58;
    case 0x7F34BA5Cu: goto label_7F34BA5C;
    case 0x7F34BA60u: goto label_7F34BA60;
    case 0x7F34BA64u: goto label_7F34BA64;
    case 0x7F34BA68u: goto label_7F34BA68;
    case 0x7F34BA6Cu: goto label_7F34BA6C;
    case 0x7F34BA70u: goto label_7F34BA70;
    case 0x7F34BA74u: goto label_7F34BA74;
    case 0x7F34BA78u: goto label_7F34BA78;
    case 0x7F34BA7Cu: goto label_7F34BA7C;
    case 0x7F34BA80u: goto label_7F34BA80;
    case 0x7F34BA84u: goto label_7F34BA84;
    case 0x7F34BA88u: goto label_7F34BA88;
    case 0x7F34BA8Cu: goto label_7F34BA8C;
    case 0x7F34BA90u: goto label_7F34BA90;
    case 0x7F34BA94u: goto label_7F34BA94;
    case 0x7F34BA98u: goto label_7F34BA98;
    case 0x7F34BA9Cu: goto label_7F34BA9C;
    case 0x7F34BAA0u: goto label_7F34BAA0;
    case 0x7F34BAA4u: goto label_7F34BAA4;
    case 0x7F34BAA8u: goto label_7F34BAA8;
    case 0x7F34BAACu: goto label_7F34BAAC;
    case 0x7F34BAB0u: goto label_7F34BAB0;
    case 0x7F34BAB4u: goto label_7F34BAB4;
    case 0x7F34BAB8u: goto label_7F34BAB8;
    case 0x7F34BABCu: goto label_7F34BABC;
    case 0x7F34BAC0u: goto label_7F34BAC0;
    case 0x7F34BAC4u: goto label_7F34BAC4;
    case 0x7F34BAC8u: goto label_7F34BAC8;
    case 0x7F34BACCu: goto label_7F34BACC;
    case 0x7F34BAD0u: goto label_7F34BAD0;
    case 0x7F34BAD4u: goto label_7F34BAD4;
    case 0x7F34BAD8u: goto label_7F34BAD8;
    case 0x7F34BADCu: goto label_7F34BADC;
    case 0x7F34BAE0u: goto label_7F34BAE0;
    case 0x7F34BAE4u: goto label_7F34BAE4;
    case 0x7F34BAE8u: goto label_7F34BAE8;
    case 0x7F34BAECu: goto label_7F34BAEC;
    case 0x7F34BAF0u: goto label_7F34BAF0;
    case 0x7F34BAF4u: goto label_7F34BAF4;
    case 0x7F34BAF8u: goto label_7F34BAF8;
    case 0x7F34BAFCu: goto label_7F34BAFC;
    case 0x7F34BB00u: goto label_7F34BB00;
    case 0x7F34BB04u: goto label_7F34BB04;
    case 0x7F34BB08u: goto label_7F34BB08;
    case 0x7F34BB0Cu: goto label_7F34BB0C;
    case 0x7F34BB10u: goto label_7F34BB10;
    case 0x7F34BB14u: goto label_7F34BB14;
    case 0x7F34BB18u: goto label_7F34BB18;
    case 0x7F34BB1Cu: goto label_7F34BB1C;
    case 0x7F34BB20u: goto label_7F34BB20;
    case 0x7F34BB24u: goto label_7F34BB24;
    case 0x7F34BB28u: goto label_7F34BB28;
    case 0x7F34BB2Cu: goto label_7F34BB2C;
    case 0x7F34BB30u: goto label_7F34BB30;
    case 0x7F34BB34u: goto label_7F34BB34;
    case 0x7F34BB38u: goto label_7F34BB38;
    case 0x7F34BB3Cu: goto label_7F34BB3C;
    case 0x7F34BB40u: goto label_7F34BB40;
    case 0x7F34BB44u: goto label_7F34BB44;
    case 0x7F34BB48u: goto label_7F34BB48;
    case 0x7F34BB4Cu: goto label_7F34BB4C;
    case 0x7F34BB50u: goto label_7F34BB50;
    case 0x7F34BB54u: goto label_7F34BB54;
    case 0x7F34BB58u: goto label_7F34BB58;
    case 0x7F34BB5Cu: goto label_7F34BB5C;
    case 0x7F34BB60u: goto label_7F34BB60;
    case 0x7F34BB64u: goto label_7F34BB64;
    case 0x7F34BB68u: goto label_7F34BB68;
    case 0x7F34BB6Cu: goto label_7F34BB6C;
    case 0x7F34BB70u: goto label_7F34BB70;
    case 0x7F34BB74u: goto label_7F34BB74;
    case 0x7F34BB78u: goto label_7F34BB78;
    case 0x7F34BB7Cu: goto label_7F34BB7C;
    case 0x7F34BB80u: goto label_7F34BB80;
    case 0x7F34BB84u: goto label_7F34BB84;
    case 0x7F34BB88u: goto label_7F34BB88;
    case 0x7F34BB8Cu: goto label_7F34BB8C;
    case 0x7F34BB90u: goto label_7F34BB90;
    case 0x7F34BB94u: goto label_7F34BB94;
    case 0x7F34BB98u: goto label_7F34BB98;
    case 0x7F34BB9Cu: goto label_7F34BB9C;
    case 0x7F34BBA0u: goto label_7F34BBA0;
    case 0x7F34BBA4u: goto label_7F34BBA4;
    case 0x7F34BBA8u: goto label_7F34BBA8;
    case 0x7F34BBACu: goto label_7F34BBAC;
    case 0x7F34BBB0u: goto label_7F34BBB0;
    case 0x7F34BBB4u: goto label_7F34BBB4;
    case 0x7F34BBB8u: goto label_7F34BBB8;
    case 0x7F34BBBCu: goto label_7F34BBBC;
    case 0x7F34BBC0u: goto label_7F34BBC0;
    case 0x7F34BBC4u: goto label_7F34BBC4;
    case 0x7F34BBC8u: goto label_7F34BBC8;
    case 0x7F34BBCCu: goto label_7F34BBCC;
    case 0x7F34BBD0u: goto label_7F34BBD0;
    case 0x7F34BBD4u: goto label_7F34BBD4;
    case 0x7F34BBD8u: goto label_7F34BBD8;
    case 0x7F34BBDCu: goto label_7F34BBDC;
    case 0x7F34BBE0u: goto label_7F34BBE0;
    case 0x7F34BBE4u: goto label_7F34BBE4;
    case 0x7F34BBE8u: goto label_7F34BBE8;
    case 0x7F34BBECu: goto label_7F34BBEC;
    case 0x7F34BBF0u: goto label_7F34BBF0;
    case 0x7F34BBF4u: goto label_7F34BBF4;
    case 0x7F34BBF8u: goto label_7F34BBF8;
    case 0x7F34BBFCu: goto label_7F34BBFC;
    case 0x7F34BC00u: goto label_7F34BC00;
    case 0x7F34BC04u: goto label_7F34BC04;
    case 0x7F34BC08u: goto label_7F34BC08;
    case 0x7F34BC0Cu: goto label_7F34BC0C;
    case 0x7F34BC10u: goto label_7F34BC10;
    case 0x7F34BC14u: goto label_7F34BC14;
    case 0x7F34BC18u: goto label_7F34BC18;
    case 0x7F34BC1Cu: goto label_7F34BC1C;
    case 0x7F34BC20u: goto label_7F34BC20;
    case 0x7F34BC24u: goto label_7F34BC24;
    case 0x7F34BC28u: goto label_7F34BC28;
    case 0x7F34BC2Cu: goto label_7F34BC2C;
    case 0x7F34BC30u: goto label_7F34BC30;
    case 0x7F34BC34u: goto label_7F34BC34;
    case 0x7F34BC38u: goto label_7F34BC38;
    case 0x7F34BC3Cu: goto label_7F34BC3C;
    case 0x7F34BC40u: goto label_7F34BC40;
    case 0x7F34BC44u: goto label_7F34BC44;
    case 0x7F34BC48u: goto label_7F34BC48;
    case 0x7F34BC4Cu: goto label_7F34BC4C;
    case 0x7F34BC50u: goto label_7F34BC50;
    case 0x7F34BC54u: goto label_7F34BC54;
    case 0x7F34BC58u: goto label_7F34BC58;
    case 0x7F34BC5Cu: goto label_7F34BC5C;
    case 0x7F34BC60u: goto label_7F34BC60;
    case 0x7F34BC64u: goto label_7F34BC64;
    case 0x7F34BC68u: goto label_7F34BC68;
    case 0x7F34BC6Cu: goto label_7F34BC6C;
    case 0x7F34BC70u: goto label_7F34BC70;
    case 0x7F34BC74u: goto label_7F34BC74;
    case 0x7F34BC78u: goto label_7F34BC78;
    case 0x7F34BC7Cu: goto label_7F34BC7C;
    case 0x7F34BC80u: goto label_7F34BC80;
    case 0x7F34BC84u: goto label_7F34BC84;
    case 0x7F34BC88u: goto label_7F34BC88;
    case 0x7F34BC8Cu: goto label_7F34BC8C;
    case 0x7F34BC90u: goto label_7F34BC90;
    case 0x7F34BC94u: goto label_7F34BC94;
    case 0x7F34BC98u: goto label_7F34BC98;
    case 0x7F34BC9Cu: goto label_7F34BC9C;
    case 0x7F34BCA0u: goto label_7F34BCA0;
    case 0x7F34BCA4u: goto label_7F34BCA4;
    case 0x7F34BCA8u: goto label_7F34BCA8;
    case 0x7F34BCACu: goto label_7F34BCAC;
    case 0x7F34BCB0u: goto label_7F34BCB0;
    case 0x7F34BCB4u: goto label_7F34BCB4;
    case 0x7F34BCB8u: goto label_7F34BCB8;
    case 0x7F34BCBCu: goto label_7F34BCBC;
    case 0x7F34BCC0u: goto label_7F34BCC0;
    case 0x7F34BCC4u: goto label_7F34BCC4;
    case 0x7F34BCC8u: goto label_7F34BCC8;
    case 0x7F34BCCCu: goto label_7F34BCCC;
    case 0x7F34BCD0u: goto label_7F34BCD0;
    case 0x7F34BCD4u: goto label_7F34BCD4;
    case 0x7F34BCD8u: goto label_7F34BCD8;
    case 0x7F34BCDCu: goto label_7F34BCDC;
    case 0x7F34BCE0u: goto label_7F34BCE0;
    case 0x7F34BCE4u: goto label_7F34BCE4;
    case 0x7F34BCE8u: goto label_7F34BCE8;
    case 0x7F34BCECu: goto label_7F34BCEC;
    case 0x7F34BCF0u: goto label_7F34BCF0;
    case 0x7F34BCF4u: goto label_7F34BCF4;
    case 0x7F34BCF8u: goto label_7F34BCF8;
    case 0x7F34BCFCu: goto label_7F34BCFC;
    case 0x7F34BD00u: goto label_7F34BD00;
    case 0x7F34BD04u: goto label_7F34BD04;
    case 0x7F34BD08u: goto label_7F34BD08;
    case 0x7F34BD0Cu: goto label_7F34BD0C;
    case 0x7F34BD10u: goto label_7F34BD10;
    case 0x7F34BD14u: goto label_7F34BD14;
    case 0x7F34BD18u: goto label_7F34BD18;
    case 0x7F34BD1Cu: goto label_7F34BD1C;
    case 0x7F34BD20u: goto label_7F34BD20;
    case 0x7F34BD24u: goto label_7F34BD24;
    case 0x7F34BD28u: goto label_7F34BD28;
    case 0x7F34BD2Cu: goto label_7F34BD2C;
    case 0x7F34BD30u: goto label_7F34BD30;
    case 0x7F34BD34u: goto label_7F34BD34;
    case 0x7F34BD38u: goto label_7F34BD38;
    case 0x7F34BD3Cu: goto label_7F34BD3C;
    case 0x7F34BD40u: goto label_7F34BD40;
    case 0x7F34BD44u: goto label_7F34BD44;
    case 0x7F34BD48u: goto label_7F34BD48;
    case 0x7F34BD4Cu: goto label_7F34BD4C;
    case 0x7F34BD50u: goto label_7F34BD50;
    case 0x7F34BD54u: goto label_7F34BD54;
    case 0x7F34BD58u: goto label_7F34BD58;
    case 0x7F34BD5Cu: goto label_7F34BD5C;
    case 0x7F34BD60u: goto label_7F34BD60;
    case 0x7F34BD64u: goto label_7F34BD64;
    case 0x7F34BD68u: goto label_7F34BD68;
    case 0x7F34BD6Cu: goto label_7F34BD6C;
    case 0x7F34BD70u: goto label_7F34BD70;
    case 0x7F34BD74u: goto label_7F34BD74;
    case 0x7F34BD78u: goto label_7F34BD78;
    case 0x7F34BD7Cu: goto label_7F34BD7C;
    case 0x7F34BD80u: goto label_7F34BD80;
    case 0x7F34BD84u: goto label_7F34BD84;
    case 0x7F34BD88u: goto label_7F34BD88;
    case 0x7F34BD8Cu: goto label_7F34BD8C;
    case 0x7F34BD90u: goto label_7F34BD90;
    case 0x7F34BD94u: goto label_7F34BD94;
    case 0x7F34BD98u: goto label_7F34BD98;
    case 0x7F34BD9Cu: goto label_7F34BD9C;
    case 0x7F34BDA0u: goto label_7F34BDA0;
    case 0x7F34BDA4u: goto label_7F34BDA4;
    case 0x7F34BDA8u: goto label_7F34BDA8;
    case 0x7F34BDACu: goto label_7F34BDAC;
    case 0x7F34BDB0u: goto label_7F34BDB0;
    case 0x7F34BDB4u: goto label_7F34BDB4;
    case 0x7F34BDB8u: goto label_7F34BDB8;
    case 0x7F34BDBCu: goto label_7F34BDBC;
    case 0x7F34BDC0u: goto label_7F34BDC0;
    case 0x7F34BDC4u: goto label_7F34BDC4;
    case 0x7F34BDC8u: goto label_7F34BDC8;
    case 0x7F34BDCCu: goto label_7F34BDCC;
    case 0x7F34BDD0u: goto label_7F34BDD0;
    case 0x7F34BDD4u: goto label_7F34BDD4;
    case 0x7F34BDD8u: goto label_7F34BDD8;
    case 0x7F34BDDCu: goto label_7F34BDDC;
    case 0x7F34BDE0u: goto label_7F34BDE0;
    case 0x7F34BDE4u: goto label_7F34BDE4;
    case 0x7F34BDE8u: goto label_7F34BDE8;
    case 0x7F34BDECu: goto label_7F34BDEC;
    case 0x7F34BDF0u: goto label_7F34BDF0;
    case 0x7F34BDF4u: goto label_7F34BDF4;
    case 0x7F34BDF8u: goto label_7F34BDF8;
    case 0x7F34BDFCu: goto label_7F34BDFC;
    case 0x7F34BE00u: goto label_7F34BE00;
    case 0x7F34BE04u: goto label_7F34BE04;
    case 0x7F34BE08u: goto label_7F34BE08;
    case 0x7F34BE0Cu: goto label_7F34BE0C;
    case 0x7F34BE10u: goto label_7F34BE10;
    case 0x7F34BE14u: goto label_7F34BE14;
    case 0x7F34BE18u: goto label_7F34BE18;
    case 0x7F34BE1Cu: goto label_7F34BE1C;
    case 0x7F34BE20u: goto label_7F34BE20;
    case 0x7F34BE24u: goto label_7F34BE24;
    case 0x7F34BE28u: goto label_7F34BE28;
    case 0x7F34BE2Cu: goto label_7F34BE2C;
    case 0x7F34BE30u: goto label_7F34BE30;
    case 0x7F34BE34u: goto label_7F34BE34;
    case 0x7F34BE38u: goto label_7F34BE38;
    case 0x7F34BE3Cu: goto label_7F34BE3C;
    case 0x7F34BE40u: goto label_7F34BE40;
    case 0x7F34BE44u: goto label_7F34BE44;
    case 0x7F34BE48u: goto label_7F34BE48;
    case 0x7F34BE4Cu: goto label_7F34BE4C;
    case 0x7F34BE50u: goto label_7F34BE50;
    case 0x7F34BE54u: goto label_7F34BE54;
    case 0x7F34BE58u: goto label_7F34BE58;
    case 0x7F34BE5Cu: goto label_7F34BE5C;
    case 0x7F34BE60u: goto label_7F34BE60;
    case 0x7F34BE64u: goto label_7F34BE64;
    case 0x7F34BE68u: goto label_7F34BE68;
    case 0x7F34BE6Cu: goto label_7F34BE6C;
    case 0x7F34BE70u: goto label_7F34BE70;
    case 0x7F34BE74u: goto label_7F34BE74;
    case 0x7F34BE78u: goto label_7F34BE78;
    case 0x7F34BE7Cu: goto label_7F34BE7C;
    case 0x7F34BE80u: goto label_7F34BE80;
    case 0x7F34BE84u: goto label_7F34BE84;
    case 0x7F34BE88u: goto label_7F34BE88;
    case 0x7F34BE8Cu: goto label_7F34BE8C;
    case 0x7F34BE90u: goto label_7F34BE90;
    case 0x7F34BE94u: goto label_7F34BE94;
    case 0x7F34BE98u: goto label_7F34BE98;
    case 0x7F34BE9Cu: goto label_7F34BE9C;
    case 0x7F34BEA0u: goto label_7F34BEA0;
    case 0x7F34BEA4u: goto label_7F34BEA4;
    case 0x7F34BEA8u: goto label_7F34BEA8;
    case 0x7F34BEACu: goto label_7F34BEAC;
    case 0x7F34BEB0u: goto label_7F34BEB0;
    case 0x7F34BEB4u: goto label_7F34BEB4;
    case 0x7F34BEB8u: goto label_7F34BEB8;
    case 0x7F34BEBCu: goto label_7F34BEBC;
    case 0x7F34BEC0u: goto label_7F34BEC0;
    case 0x7F34BEC4u: goto label_7F34BEC4;
    case 0x7F34BEC8u: goto label_7F34BEC8;
    case 0x7F34BECCu: goto label_7F34BECC;
    case 0x7F34BED0u: goto label_7F34BED0;
    case 0x7F34BED4u: goto label_7F34BED4;
    case 0x7F34BED8u: goto label_7F34BED8;
    case 0x7F34BEDCu: goto label_7F34BEDC;
    case 0x7F34BEE0u: goto label_7F34BEE0;
    case 0x7F34BEE4u: goto label_7F34BEE4;
    case 0x7F34BEE8u: goto label_7F34BEE8;
    case 0x7F34BEECu: goto label_7F34BEEC;
    case 0x7F34BEF0u: goto label_7F34BEF0;
    case 0x7F34BEF4u: goto label_7F34BEF4;
    case 0x7F34BEF8u: goto label_7F34BEF8;
    case 0x7F34BEFCu: goto label_7F34BEFC;
    case 0x7F34BF00u: goto label_7F34BF00;
    case 0x7F34BF04u: goto label_7F34BF04;
    case 0x7F34BF08u: goto label_7F34BF08;
    case 0x7F34BF0Cu: goto label_7F34BF0C;
    case 0x7F34BF10u: goto label_7F34BF10;
    case 0x7F34BF14u: goto label_7F34BF14;
    case 0x7F34BF18u: goto label_7F34BF18;
    case 0x7F34BF1Cu: goto label_7F34BF1C;
    case 0x7F34BF20u: goto label_7F34BF20;
    case 0x7F34BF24u: goto label_7F34BF24;
    case 0x7F34BF28u: goto label_7F34BF28;
    case 0x7F34BF2Cu: goto label_7F34BF2C;
    case 0x7F34BF30u: goto label_7F34BF30;
    case 0x7F34BF34u: goto label_7F34BF34;
    case 0x7F34BF38u: goto label_7F34BF38;
    case 0x7F34BF3Cu: goto label_7F34BF3C;
    case 0x7F34BF40u: goto label_7F34BF40;
    case 0x7F34BF44u: goto label_7F34BF44;
    case 0x7F34BF48u: goto label_7F34BF48;
    case 0x7F34BF4Cu: goto label_7F34BF4C;
    case 0x7F34BF50u: goto label_7F34BF50;
    case 0x7F34BF54u: goto label_7F34BF54;
    case 0x7F34BF58u: goto label_7F34BF58;
    case 0x7F34BF5Cu: goto label_7F34BF5C;
    case 0x7F34BF60u: goto label_7F34BF60;
    case 0x7F34BF64u: goto label_7F34BF64;
    case 0x7F34BF68u: goto label_7F34BF68;
    case 0x7F34BF6Cu: goto label_7F34BF6C;
    case 0x7F34BF70u: goto label_7F34BF70;
    case 0x7F34BF74u: goto label_7F34BF74;
    case 0x7F34BF78u: goto label_7F34BF78;
    case 0x7F34BF7Cu: goto label_7F34BF7C;
    case 0x7F34BF80u: goto label_7F34BF80;
    case 0x7F34BF84u: goto label_7F34BF84;
    case 0x7F34BF88u: goto label_7F34BF88;
    case 0x7F34BF8Cu: goto label_7F34BF8C;
    case 0x7F34BF90u: goto label_7F34BF90;
    case 0x7F34BF94u: goto label_7F34BF94;
    case 0x7F34BF98u: goto label_7F34BF98;
    case 0x7F34BF9Cu: goto label_7F34BF9C;
    case 0x7F34BFA0u: goto label_7F34BFA0;
    case 0x7F34BFA4u: goto label_7F34BFA4;
    case 0x7F34BFA8u: goto label_7F34BFA8;
    case 0x7F34BFACu: goto label_7F34BFAC;
    case 0x7F34BFB0u: goto label_7F34BFB0;
    case 0x7F34BFB4u: goto label_7F34BFB4;
    case 0x7F34BFB8u: goto label_7F34BFB8;
    case 0x7F34BFBCu: goto label_7F34BFBC;
    case 0x7F34BFC0u: goto label_7F34BFC0;
    case 0x7F34BFC4u: goto label_7F34BFC4;
    case 0x7F34BFC8u: goto label_7F34BFC8;
    case 0x7F34BFCCu: goto label_7F34BFCC;
    case 0x7F34BFD0u: goto label_7F34BFD0;
    case 0x7F34BFD4u: goto label_7F34BFD4;
    case 0x7F34BFD8u: goto label_7F34BFD8;
    case 0x7F34BFDCu: goto label_7F34BFDC;
    case 0x7F34BFE0u: goto label_7F34BFE0;
    case 0x7F34BFE4u: goto label_7F34BFE4;
    case 0x7F34BFE8u: goto label_7F34BFE8;
    case 0x7F34BFECu: goto label_7F34BFEC;
    case 0x7F34BFF0u: goto label_7F34BFF0;
    case 0x7F34BFF4u: goto label_7F34BFF4;
    case 0x7F34BFF8u: goto label_7F34BFF8;
    case 0x7F34BFFCu: goto label_7F34BFFC;
    case 0x7F34C000u: goto label_7F34C000;
    case 0x7F34C004u: goto label_7F34C004;
    case 0x7F34C008u: goto label_7F34C008;
    case 0x7F34C00Cu: goto label_7F34C00C;
    case 0x7F34C010u: goto label_7F34C010;
    case 0x7F34C014u: goto label_7F34C014;
    case 0x7F34C018u: goto label_7F34C018;
    case 0x7F34C01Cu: goto label_7F34C01C;
    case 0x7F34C020u: goto label_7F34C020;
    case 0x7F34C024u: goto label_7F34C024;
    case 0x7F34C028u: goto label_7F34C028;
    case 0x7F34C02Cu: goto label_7F34C02C;
    case 0x7F34C030u: goto label_7F34C030;
    case 0x7F34C034u: goto label_7F34C034;
    case 0x7F34C038u: goto label_7F34C038;
    case 0x7F34C03Cu: goto label_7F34C03C;
    case 0x7F34C040u: goto label_7F34C040;
    case 0x7F34C044u: goto label_7F34C044;
    case 0x7F34C048u: goto label_7F34C048;
    case 0x7F34C04Cu: goto label_7F34C04C;
    case 0x7F34C050u: goto label_7F34C050;
    case 0x7F34C054u: goto label_7F34C054;
    case 0x7F34C058u: goto label_7F34C058;
    case 0x7F34C05Cu: goto label_7F34C05C;
    case 0x7F34C060u: goto label_7F34C060;
    case 0x7F34C064u: goto label_7F34C064;
    case 0x7F34C068u: goto label_7F34C068;
    case 0x7F34C06Cu: goto label_7F34C06C;
    case 0x7F34C070u: goto label_7F34C070;
    case 0x7F34C074u: goto label_7F34C074;
    case 0x7F34C078u: goto label_7F34C078;
    case 0x7F34C07Cu: goto label_7F34C07C;
    case 0x7F34C080u: goto label_7F34C080;
    case 0x7F34C084u: goto label_7F34C084;
    case 0x7F34C088u: goto label_7F34C088;
    case 0x7F34C08Cu: goto label_7F34C08C;
    case 0x7F34C090u: goto label_7F34C090;
    case 0x7F34C094u: goto label_7F34C094;
    case 0x7F34C098u: goto label_7F34C098;
    case 0x7F34C09Cu: goto label_7F34C09C;
    case 0x7F34C0A0u: goto label_7F34C0A0;
    case 0x7F34C0A4u: goto label_7F34C0A4;
    case 0x7F34C0A8u: goto label_7F34C0A8;
    case 0x7F34C0ACu: goto label_7F34C0AC;
    case 0x7F34C0B0u: goto label_7F34C0B0;
    case 0x7F34C0B4u: goto label_7F34C0B4;
    case 0x7F34C0B8u: goto label_7F34C0B8;
    case 0x7F34C0BCu: goto label_7F34C0BC;
    case 0x7F34C0C0u: goto label_7F34C0C0;
    case 0x7F34C0C4u: goto label_7F34C0C4;
    case 0x7F34C0C8u: goto label_7F34C0C8;
    case 0x7F34C0CCu: goto label_7F34C0CC;
    case 0x7F34C0D0u: goto label_7F34C0D0;
    case 0x7F34C0D4u: goto label_7F34C0D4;
    case 0x7F34C0D8u: goto label_7F34C0D8;
    case 0x7F34C0DCu: goto label_7F34C0DC;
    case 0x7F34C0E0u: goto label_7F34C0E0;
    case 0x7F34C0E4u: goto label_7F34C0E4;
    case 0x7F34C0E8u: goto label_7F34C0E8;
    default: return;
    }
label_7F3480EC:
    ctx->pc = 0x7F3480ECu;
    ctx->downcount -= 7;
    // 7F3480EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3480F0:
    ctx->pc = 0x7F3480F0u;
    // 7F3480F0: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3480F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3480F4:
    ctx->pc = 0x7F3480F4u;
    // 7F3480F4: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3480F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3480F4u);
        if (ctx->exception) return;
    }

label_7F3480F8:
    ctx->pc = 0x7F3480F8u;
    // 7F3480F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3480FC:
    ctx->pc = 0x7F3480FCu;
    // 7F3480FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348100:
    ctx->pc = 0x7F348100u;
    // 7F348100: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F348104:
    ctx->pc = 0x7F348104u;
    // 7F348104: bl      0x7F012050
    {
            ctx->lr = 0x7F348108u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F348108:
    ctx->pc = 0x7F348108u;
    ctx->downcount -= 2;
    // 7F348108: cmpwi   r3, 0
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

label_7F34810C:
    ctx->pc = 0x7F34810Cu;
    // 7F34810C: bc    12, 2, 0x7F348118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348118;
        }
    }

label_7F348110:
    ctx->pc = 0x7F348110u;
    ctx->downcount -= 2;
    // 7F348110: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F348114:
    ctx->pc = 0x7F348114u;
    // 7F348114: b       0x7F348130
    {
            goto label_7F348130;
    }

label_7F348118:
    ctx->pc = 0x7F348118u;
    ctx->downcount -= 6;
    // 7F348118: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34811C:
    ctx->pc = 0x7F34811Cu;
    // 7F34811C: lhz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F348120:
    ctx->pc = 0x7F348120u;
    // 7F348120: rlwinm r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
    }

label_7F348124:
    ctx->pc = 0x7F348124u;
    // 7F348124: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F348128:
    ctx->pc = 0x7F348128u;
    // 7F348128: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F34812C:
    ctx->pc = 0x7F34812Cu;
    // 7F34812C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F348130:
    ctx->pc = 0x7F348130u;
    ctx->downcount -= 3;
    // 7F348130: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348134:
    ctx->pc = 0x7F348134u;
    // 7F348134: cmplwi  r3, 0x0000
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

label_7F348138:
    ctx->pc = 0x7F348138u;
    // 7F348138: bc    12, 2, 0x7F348144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348144;
        }
    }

label_7F34813C:
    ctx->pc = 0x7F34813Cu;
    ctx->downcount -= 2;
    // 7F34813C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348140:
    ctx->pc = 0x7F348140u;
    // 7F348140: b       0x7F348148
    {
            goto label_7F348148;
    }

label_7F348144:
    ctx->pc = 0x7F348144u;
    ctx->downcount -= 1;
    // 7F348144: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F348148:
    ctx->pc = 0x7F348148u;
    ctx->downcount -= 2;
    // 7F348148: cmpwi   r0, 0
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

label_7F34814C:
    ctx->pc = 0x7F34814Cu;
    // 7F34814C: bc    12, 2, 0x7F348174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348174;
        }
    }

label_7F348150:
    ctx->pc = 0x7F348150u;
    ctx->downcount -= 2;
    // 7F348150: cmpwi   r4, 0
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

label_7F348154:
    ctx->pc = 0x7F348154u;
    // 7F348154: bc    12, 2, 0x7F348174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348174;
        }
    }

label_7F348158:
    ctx->pc = 0x7F348158u;
    ctx->downcount -= 4;
    // 7F348158: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34815C:
    ctx->pc = 0x7F34815Cu;
    // 7F34815C: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F348160:
    ctx->pc = 0x7F348160u;
    // 7F348160: cmpwi   r3, 120
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F348164:
    ctx->pc = 0x7F348164u;
    // 7F348164: bc    4, 0, 0x7F34816C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34816C;
        }
    }

label_7F348168:
    ctx->pc = 0x7F348168u;
    ctx->downcount -= 1;
    // 7F348168: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F34816C:
    ctx->pc = 0x7F34816Cu;
    ctx->downcount -= 2;
    // 7F34816C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348170:
    ctx->pc = 0x7F348170u;
    // 7F348170: b       0x7F348198
    {
            goto label_7F348198;
    }

label_7F348174:
    ctx->pc = 0x7F348174u;
    ctx->downcount -= 9;
    // 7F348174: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F348178:
    ctx->pc = 0x7F348178u;
    // 7F348178: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F34817C:
    ctx->pc = 0x7F34817Cu;
    // 7F34817C: rlwinm r0, r3, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F348180:
    ctx->pc = 0x7F348180u;
    // 7F348180: subfc   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F348184:
    ctx->pc = 0x7F348184u;
    // 7F348184: rlwinm r3, r4, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00000001u;
    }

label_7F348188:
    ctx->pc = 0x7F348188u;
    // 7F348188: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F34818C:
    ctx->pc = 0x7F34818Cu;
    // 7F34818C: addi    r0, r4, -4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F348190:
    ctx->pc = 0x7F348190u;
    // 7F348190: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F348194:
    ctx->pc = 0x7F348194u;
    // 7F348194: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348198:
    ctx->pc = 0x7F348198u;
    ctx->downcount -= 3;
    // 7F348198: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34819C:
    ctx->pc = 0x7F34819Cu;
    // 7F34819C: cmpwi   r0, 0
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

label_7F3481A0:
    ctx->pc = 0x7F3481A0u;
    // 7F3481A0: bc    4, 2, 0x7F3481B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3481B8;
        }
    }

label_7F3481A4:
    ctx->pc = 0x7F3481A4u;
    ctx->downcount -= 5;
    // 7F3481A4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3481A8:
    ctx->pc = 0x7F3481A8u;
    // 7F3481A8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3481AC:
    ctx->pc = 0x7F3481ACu;
    // 7F3481AC: ori     r0, r0, 0x0030
    ctx->gpr[0] = ctx->gpr[0] | 0x0030u;

label_7F3481B0:
    ctx->pc = 0x7F3481B0u;
    // 7F3481B0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3481B4:
    ctx->pc = 0x7F3481B4u;
    // 7F3481B4: b       0x7F3482F8
    {
            goto label_7F3482F8;
    }

label_7F3481B8:
    ctx->pc = 0x7F3481B8u;
    ctx->downcount -= 7;
    // 7F3481B8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3481BC:
    ctx->pc = 0x7F3481BCu;
    // 7F3481BC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3481C0:
    ctx->pc = 0x7F3481C0u;
    // 7F3481C0: rlwinm r0, r0, 0, 28, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFCFu;
    }

label_7F3481C4:
    ctx->pc = 0x7F3481C4u;
    // 7F3481C4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3481C8:
    ctx->pc = 0x7F3481C8u;
    // 7F3481C8: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3481CC:
    ctx->pc = 0x7F3481CCu;
    // 7F3481CC: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3481D0:
    ctx->pc = 0x7F3481D0u;
    // 7F3481D0: bl      0x7F01B234
    {
            ctx->lr = 0x7F3481D4u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F3481D4:
    ctx->pc = 0x7F3481D4u;
    ctx->downcount -= 37;
    // 7F3481D4: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3481D8:
    ctx->pc = 0x7F3481D8u;
    // 7F3481D8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F3481DC:
    ctx->pc = 0x7F3481DCu;
    // 7F3481DC: addi    r7, r5, -25588
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-25588);

label_7F3481E0:
    ctx->pc = 0x7F3481E0u;
    // 7F3481E0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3481E4:
    ctx->pc = 0x7F3481E4u;
    // 7F3481E4: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3481E8:
    ctx->pc = 0x7F3481E8u;
    // 7F3481E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3481EC:
    ctx->pc = 0x7F3481ECu;
    // 7F3481EC: lfs     f3, -25584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3481ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3481F0:
    ctx->pc = 0x7F3481F0u;
    // 7F3481F0: addi    r4, r3, -25612
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25612);

label_7F3481F4:
    ctx->pc = 0x7F3481F4u;
    // 7F3481F4: lwz     r5, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3481F8:
    ctx->pc = 0x7F3481F8u;
    // 7F3481F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3481FC:
    ctx->pc = 0x7F3481FCu;
    // 7F3481FC: lwz     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F348200:
    ctx->pc = 0x7F348200u;
    // 7F348200: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348200u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348204:
    ctx->pc = 0x7F348204u;
    // 7F348204: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348204u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348208:
    ctx->pc = 0x7F348208u;
    // 7F348208: lfs     f4, 144(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348208u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F34820C:
    ctx->pc = 0x7F34820Cu;
    // 7F34820C: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34820Cu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F348210:
    ctx->pc = 0x7F348210u;
    // 7F348210: lfs     f5, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F348210u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F348214:
    ctx->pc = 0x7F348214u;
    // 7F348214: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348214u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348218:
    ctx->pc = 0x7F348218u;
    // 7F348218: fadds   f31, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F348218u)) return;
    ppc_fadds(ctx, 31, 5, 4);

label_7F34821C:
    ctx->pc = 0x7F34821Cu;
    // 7F34821C: fmadds f2, f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34821Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F348220:
    ctx->pc = 0x7F348220u;
    // 7F348220: fadds   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F348220u)) return;
    ppc_fadds(ctx, 1, 0, 31);

label_7F348224:
    ctx->pc = 0x7F348224u;
    // 7F348224: stfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348224u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348228:
    ctx->pc = 0x7F348228u;
    // 7F348228: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34822C:
    ctx->pc = 0x7F34822Cu;
    // 7F34822C: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34822Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348230:
    ctx->pc = 0x7F348230u;
    // 7F348230: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348230u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348234:
    ctx->pc = 0x7F348234u;
    // 7F348234: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F348234u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F348238:
    ctx->pc = 0x7F348238u;
    // 7F348238: fmadds f0, f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F348238u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F34823C:
    ctx->pc = 0x7F34823Cu;
    // 7F34823C: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34823Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348240:
    ctx->pc = 0x7F348240u;
    // 7F348240: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F348244:
    ctx->pc = 0x7F348244u;
    // 7F348244: lfs     f2, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348244u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348248:
    ctx->pc = 0x7F348248u;
    // 7F348248: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348248u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34824C:
    ctx->pc = 0x7F34824Cu;
    // 7F34824C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34824Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F348250:
    ctx->pc = 0x7F348250u;
    // 7F348250: fmadds f0, f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F348250u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F348254:
    ctx->pc = 0x7F348254u;
    // 7F348254: stfs     f0, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348254u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348258:
    ctx->pc = 0x7F348258u;
    // 7F348258: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34825C:
    ctx->pc = 0x7F34825Cu;
    // 7F34825C: addi    r4, r5, 84
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(84);

label_7F348260:
    ctx->pc = 0x7F348260u;
    // 7F348260: addi    r5, r5, 164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(164);

label_7F348264:
    ctx->pc = 0x7F348264u;
    // 7F348264: bl      0x7F347F84
    {
            ctx->lr = 0x7F348268u;
            ctx->pc = 0x7F347F84u;
            return;
    }

label_7F348268:
    ctx->pc = 0x7F348268u;
    ctx->downcount -= 9;
    // 7F348268: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34826C:
    ctx->pc = 0x7F34826Cu;
    // 7F34826C: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F348270:
    ctx->pc = 0x7F348270u;
    // 7F348270: lfs     f0, -25580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348270u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348274:
    ctx->pc = 0x7F348274u;
    // 7F348274: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348278:
    ctx->pc = 0x7F348278u;
    // 7F348278: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34827C:
    ctx->pc = 0x7F34827Cu;
    // 7F34827C: addi    r5, r5, 244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(244);

label_7F348280:
    ctx->pc = 0x7F348280u;
    // 7F348280: fadds   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F348280u)) return;
    ppc_fadds(ctx, 1, 0, 31);

label_7F348284:
    ctx->pc = 0x7F348284u;
    // 7F348284: addi    r6, r31, 72
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(72);

label_7F348288:
    ctx->pc = 0x7F348288u;
    // 7F348288: bl      0x7F347D4C
    {
            ctx->lr = 0x7F34828Cu;
            ctx->pc = 0x7F347D4Cu;
            return;
    }

label_7F34828C:
    ctx->pc = 0x7F34828Cu;
    ctx->downcount -= 9;
    // 7F34828C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348290:
    ctx->pc = 0x7F348290u;
    // 7F348290: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F348294:
    ctx->pc = 0x7F348294u;
    // 7F348294: lfs     f0, -25576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348294u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348298:
    ctx->pc = 0x7F348298u;
    // 7F348298: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34829C:
    ctx->pc = 0x7F34829Cu;
    // 7F34829C: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3482A0:
    ctx->pc = 0x7F3482A0u;
    // 7F3482A0: addi    r5, r5, 324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(324);

label_7F3482A4:
    ctx->pc = 0x7F3482A4u;
    // 7F3482A4: fadds   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3482A4u)) return;
    ppc_fadds(ctx, 1, 0, 31);

label_7F3482A8:
    ctx->pc = 0x7F3482A8u;
    // 7F3482A8: addi    r6, r31, 76
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(76);

label_7F3482AC:
    ctx->pc = 0x7F3482ACu;
    // 7F3482AC: bl      0x7F347D4C
    {
            ctx->lr = 0x7F3482B0u;
            ctx->pc = 0x7F347D4Cu;
            return;
    }

label_7F3482B0:
    ctx->pc = 0x7F3482B0u;
    ctx->downcount -= 4;
    // 7F3482B0: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482B4:
    ctx->pc = 0x7F3482B4u;
    // 7F3482B4: cmpwi   r3, 0
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

label_7F3482B8:
    ctx->pc = 0x7F3482B8u;
    // 7F3482B8: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F3482BC:
    ctx->pc = 0x7F3482BCu;
    // 7F3482BC: bc    4, 1, 0x7F3482C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3482C4;
        }
    }

label_7F3482C0:
    ctx->pc = 0x7F3482C0u;
    ctx->downcount -= 1;
    // 7F3482C0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3482C4:
    ctx->pc = 0x7F3482C4u;
    ctx->downcount -= 8;
    // 7F3482C4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482C8:
    ctx->pc = 0x7F3482C8u;
    // 7F3482C8: stw     r0, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3482CC:
    ctx->pc = 0x7F3482CCu;
    // 7F3482CC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482D0:
    ctx->pc = 0x7F3482D0u;
    // 7F3482D0: stw     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3482D4:
    ctx->pc = 0x7F3482D4u;
    // 7F3482D4: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482D8:
    ctx->pc = 0x7F3482D8u;
    // 7F3482D8: cmpwi   r3, 0
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

label_7F3482DC:
    ctx->pc = 0x7F3482DCu;
    // 7F3482DC: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F3482E0:
    ctx->pc = 0x7F3482E0u;
    // 7F3482E0: bc    4, 1, 0x7F3482E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3482E8;
        }
    }

label_7F3482E4:
    ctx->pc = 0x7F3482E4u;
    ctx->downcount -= 1;
    // 7F3482E4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3482E8:
    ctx->pc = 0x7F3482E8u;
    ctx->downcount -= 4;
    // 7F3482E8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482EC:
    ctx->pc = 0x7F3482ECu;
    // 7F3482EC: stw     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3482F0:
    ctx->pc = 0x7F3482F0u;
    // 7F3482F0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3482F4:
    ctx->pc = 0x7F3482F4u;
    // 7F3482F4: stw     r0, 240(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3482F8:
    ctx->pc = 0x7F3482F8u;
    ctx->downcount -= 8;
    // 7F3482F8: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3482F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3482F8u);
        if (ctx->exception) return;
    }

label_7F3482FC:
    ctx->pc = 0x7F3482FCu;
    // 7F3482FC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348300:
    ctx->pc = 0x7F348300u;
    // 7F348300: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348300u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F348304:
    ctx->pc = 0x7F348304u;
    // 7F348304: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F348308:
    ctx->pc = 0x7F348308u;
    // 7F348308: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34830C:
    ctx->pc = 0x7F34830Cu;
    // 7F34830C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F348310:
    ctx->pc = 0x7F348310u;
    // 7F348310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348314:
    ctx->pc = 0x7F348314u;
    ctx->downcount -= 8;
    // 7F348314: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348318:
    ctx->pc = 0x7F348318u;
    // 7F348318: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34831C:
    ctx->pc = 0x7F34831Cu;
    // 7F34831C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348320:
    ctx->pc = 0x7F348320u;
    // 7F348320: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F348324:
    ctx->pc = 0x7F348324u;
    // 7F348324: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348328:
    ctx->pc = 0x7F348328u;
    // 7F348328: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34832C:
    ctx->pc = 0x7F34832Cu;
    // 7F34832C: cmplwi  r3, 0x0000
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

label_7F348330:
    ctx->pc = 0x7F348330u;
    // 7F348330: bc    12, 2, 0x7F348340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348340;
        }
    }

label_7F348334:
    ctx->pc = 0x7F348334u;
    ctx->downcount -= 1;
    // 7F348334: bl      0x7F3AEE44
    {
            ctx->lr = 0x7F348338u;
            ctx->pc = 0x7F3AEE44u;
            return;
    }

label_7F348338:
    ctx->pc = 0x7F348338u;
    ctx->downcount -= 2;
    // 7F348338: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34833C:
    ctx->pc = 0x7F34833Cu;
    // 7F34833C: bl      0x7F3AF484
    {
            ctx->lr = 0x7F348340u;
            ctx->pc = 0x7F3AF484u;
            return;
    }

label_7F348340:
    ctx->pc = 0x7F348340u;
    ctx->downcount -= 6;
    // 7F348340: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348344:
    ctx->pc = 0x7F348344u;
    // 7F348344: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F348348:
    ctx->pc = 0x7F348348u;
    // 7F348348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34834C:
    ctx->pc = 0x7F34834Cu;
    // 7F34834C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F348350:
    ctx->pc = 0x7F348350u;
    // 7F348350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348354:
    ctx->pc = 0x7F348354u;
    ctx->downcount -= 27;
    // 7F348354: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348358:
    ctx->pc = 0x7F348358u;
    // 7F348358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34835C:
    ctx->pc = 0x7F34835Cu;
    // 7F34835C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348360:
    ctx->pc = 0x7F348360u;
    // 7F348360: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F348364:
    ctx->pc = 0x7F348364u;
    // 7F348364: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F348368:
    ctx->pc = 0x7F348368u;
    // 7F348368: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34836C:
    ctx->pc = 0x7F34836Cu;
    // 7F34836C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F348370:
    ctx->pc = 0x7F348370u;
    // 7F348370: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F348374:
    ctx->pc = 0x7F348374u;
    // 7F348374: addi    r3, r3, 6432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6432);

label_7F348378:
    ctx->pc = 0x7F348378u;
    // 7F348378: stw     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34837C:
    ctx->pc = 0x7F34837Cu;
    // 7F34837C: stw     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F348380:
    ctx->pc = 0x7F348380u;
    // 7F348380: stw     r7, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F348384:
    ctx->pc = 0x7F348384u;
    // 7F348384: stw     r8, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F348388:
    ctx->pc = 0x7F348388u;
    // 7F348388: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34838C:
    ctx->pc = 0x7F34838Cu;
    // 7F34838C: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348390:
    ctx->pc = 0x7F348390u;
    // 7F348390: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348394:
    ctx->pc = 0x7F348394u;
    // 7F348394: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348398:
    ctx->pc = 0x7F348398u;
    // 7F348398: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34839C:
    ctx->pc = 0x7F34839Cu;
    // 7F34839C: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3483A0:
    ctx->pc = 0x7F3483A0u;
    // 7F3483A0: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3483A4:
    ctx->pc = 0x7F3483A4u;
    // 7F3483A4: stw     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3483A8:
    ctx->pc = 0x7F3483A8u;
    // 7F3483A8: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3483AC:
    ctx->pc = 0x7F3483ACu;
    // 7F3483AC: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3483B0:
    ctx->pc = 0x7F3483B0u;
    // 7F3483B0: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3483B4:
    ctx->pc = 0x7F3483B4u;
    // 7F3483B4: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3483B8:
    ctx->pc = 0x7F3483B8u;
    // 7F3483B8: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3483BC:
    ctx->pc = 0x7F3483BCu;
    // 7F3483BC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3483C0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3483C0:
    ctx->pc = 0x7F3483C0u;
    ctx->downcount -= 2;
    // 7F3483C0: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F3483C4:
    ctx->pc = 0x7F3483C4u;
    // 7F3483C4: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3483C8u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3483C8:
    ctx->pc = 0x7F3483C8u;
    ctx->downcount -= 1;
    // 7F3483C8: bl      0x7F3C8480
    {
            ctx->lr = 0x7F3483CCu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F3483CC:
    ctx->pc = 0x7F3483CCu;
    ctx->downcount -= 2;
    // 7F3483CC: or.   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[7];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3483D0:
    ctx->pc = 0x7F3483D0u;
    // 7F3483D0: bc    4, 2, 0x7F3483E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3483E8;
        }
    }

label_7F3483D4:
    ctx->pc = 0x7F3483D4u;
    ctx->downcount -= 4;
    // 7F3483D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3483D8:
    ctx->pc = 0x7F3483D8u;
    // 7F3483D8: addi    r3, r3, 6448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6448);

label_7F3483DC:
    ctx->pc = 0x7F3483DCu;
    // 7F3483DC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F3483E0:
    ctx->pc = 0x7F3483E0u;
    // 7F3483E0: bl      0x7F347B90
    {
            ctx->lr = 0x7F3483E4u;
            ctx->pc = 0x7F347B90u;
            return;
    }

label_7F3483E4:
    ctx->pc = 0x7F3483E4u;
    ctx->downcount -= 1;
    // 7F3483E4: b       0x7F3484D0
    {
            goto label_7F3484D0;
    }

label_7F3483E8:
    ctx->pc = 0x7F3483E8u;
    ctx->downcount -= 5;
    // 7F3483E8: lwz     r3, 92(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3483EC:
    ctx->pc = 0x7F3483ECu;
    // 7F3483EC: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3483F0:
    ctx->pc = 0x7F3483F0u;
    // 7F3483F0: lhz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3483F4:
    ctx->pc = 0x7F3483F4u;
    // 7F3483F4: cmplwi  r0, 0x0000
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

label_7F3483F8:
    ctx->pc = 0x7F3483F8u;
    // 7F3483F8: bc    12, 2, 0x7F348430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348430;
        }
    }

label_7F3483FC:
    ctx->pc = 0x7F3483FCu;
    ctx->downcount -= 5;
    // 7F3483FC: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348400:
    ctx->pc = 0x7F348400u;
    // 7F348400: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F348404:
    ctx->pc = 0x7F348404u;
    // 7F348404: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F348408:
    ctx->pc = 0x7F348408u;
    // 7F348408: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34840C:
    ctx->pc = 0x7F34840Cu;
    // 7F34840C: bl      0x7F3AF3CC
    {
            ctx->lr = 0x7F348410u;
            ctx->pc = 0x7F3AF3CCu;
            return;
    }

label_7F348410:
    ctx->pc = 0x7F348410u;
    ctx->downcount -= 3;
    // 7F348410: cmplwi  r3, 0x0000
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

label_7F348414:
    ctx->pc = 0x7F348414u;
    // 7F348414: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348418:
    ctx->pc = 0x7F348418u;
    // 7F348418: bc    4, 2, 0x7F348464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348464;
        }
    }

label_7F34841C:
    ctx->pc = 0x7F34841Cu;
    ctx->downcount -= 4;
    // 7F34841C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F348420:
    ctx->pc = 0x7F348420u;
    // 7F348420: addi    r3, r3, 6512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6512);

label_7F348424:
    ctx->pc = 0x7F348424u;
    // 7F348424: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F348428:
    ctx->pc = 0x7F348428u;
    // 7F348428: bl      0x7F347B90
    {
            ctx->lr = 0x7F34842Cu;
            ctx->pc = 0x7F347B90u;
            return;
    }

label_7F34842C:
    ctx->pc = 0x7F34842Cu;
    ctx->downcount -= 1;
    // 7F34842C: b       0x7F3484D0
    {
            goto label_7F3484D0;
    }

label_7F348430:
    ctx->pc = 0x7F348430u;
    ctx->downcount -= 5;
    // 7F348430: lwz     r3, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348434:
    ctx->pc = 0x7F348434u;
    // 7F348434: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F348438:
    ctx->pc = 0x7F348438u;
    // 7F348438: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F34843C:
    ctx->pc = 0x7F34843Cu;
    // 7F34843C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348440:
    ctx->pc = 0x7F348440u;
    // 7F348440: bl      0x7F3AF3CC
    {
            ctx->lr = 0x7F348444u;
            ctx->pc = 0x7F3AF3CCu;
            return;
    }

label_7F348444:
    ctx->pc = 0x7F348444u;
    ctx->downcount -= 3;
    // 7F348444: cmplwi  r3, 0x0000
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

label_7F348448:
    ctx->pc = 0x7F348448u;
    // 7F348448: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34844C:
    ctx->pc = 0x7F34844Cu;
    // 7F34844C: bc    4, 2, 0x7F348464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348464;
        }
    }

label_7F348450:
    ctx->pc = 0x7F348450u;
    ctx->downcount -= 4;
    // 7F348450: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F348454:
    ctx->pc = 0x7F348454u;
    // 7F348454: addi    r3, r3, 6512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6512);

label_7F348458:
    ctx->pc = 0x7F348458u;
    // 7F348458: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34845C:
    ctx->pc = 0x7F34845Cu;
    // 7F34845C: bl      0x7F347B90
    {
            ctx->lr = 0x7F348460u;
            ctx->pc = 0x7F347B90u;
            return;
    }

label_7F348460:
    ctx->pc = 0x7F348460u;
    ctx->downcount -= 1;
    // 7F348460: b       0x7F3484D0
    {
            goto label_7F3484D0;
    }

label_7F348464:
    ctx->pc = 0x7F348464u;
    ctx->downcount -= 2;
    // 7F348464: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348468:
    ctx->pc = 0x7F348468u;
    // 7F348468: bl      0x7F3AEDF8
    {
            ctx->lr = 0x7F34846Cu;
            ctx->pc = 0x7F3AEDF8u;
            return;
    }

label_7F34846C:
    ctx->pc = 0x7F34846Cu;
    ctx->downcount -= 9;
    // 7F34846C: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F348470:
    ctx->pc = 0x7F348470u;
    // 7F348470: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F348474:
    ctx->pc = 0x7F348474u;
    // 7F348474: addi    r7, r3, 12860
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F348478:
    ctx->pc = 0x7F348478u;
    // 7F348478: li      r10, 4
    ctx->gpr[10] = (u32)(s32)(4);

label_7F34847C:
    ctx->pc = 0x7F34847Cu;
    // 7F34847C: addi    r11, r4, 84
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(84);

label_7F348480:
    ctx->pc = 0x7F348480u;
    // 7F348480: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F348484:
    ctx->pc = 0x7F348484u;
    // 7F348484: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F348488:
    ctx->pc = 0x7F348488u;
    // 7F348488: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34848C:
    ctx->pc = 0x7F34848Cu;
    // 7F34848C: b       0x7F3484C4
    {
            goto label_7F3484C4;
    }

label_7F348490:
    ctx->downcount -= 4;
    // 7F348490: addi    r9, r11, -4
    ctx->gpr[9] = ctx->gpr[11] + (u32)(s32)(-4);

label_7F348494:
    // 7F348494: addi    r8, r7, -4
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-4);

label_7F348498:
    ctx->pc = 0x7F348498u;
    // 7F348498: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F34849C:
    loop_7F34849C(ctx);
    if (ctx->pc == 0x7F3484B0u) goto label_7F3484B0;
    return;
label_7F3484A0:
    ctx->pc = 0x7F3484A0u;
    // 7F3484A0: lwzu     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

label_7F3484A4:
    ctx->pc = 0x7F3484A4u;
    // 7F3484A4: stw     r5, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3484A8:
    ctx->pc = 0x7F3484A8u;
    // 7F3484A8: stwu     r4, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[9] = ea;
    }

label_7F3484AC:
    // 7F3484AC: bc    16, 0, 0x7F34849C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34849Cu;
                return;
            }
            goto label_7F34849C;
        }
    }

label_7F3484B0:
    ctx->pc = 0x7F3484B0u;
    ctx->downcount -= 5;
    // 7F3484B0: stw     r3, 72(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3484B4:
    ctx->pc = 0x7F3484B4u;
    // 7F3484B4: stw     r3, 68(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3484B8:
    ctx->pc = 0x7F3484B8u;
    // 7F3484B8: stw     r3, 64(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3484BC:
    ctx->pc = 0x7F3484BCu;
    // 7F3484BC: stw     r0, 76(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3484C0:
    // 7F3484C0: addi    r11, r11, 80
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(80);

label_7F3484C4:
    ctx->downcount -= 2;
    // 7F3484C4: addic.  r10, r10, -1
    {
        u64 a = ctx->gpr[10];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[10] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3484C8:
    // 7F3484C8: bc    4, 0, 0x7F348490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348490u;
                return;
            }
            goto label_7F348490;
        }
    }

label_7F3484CC:
    ctx->pc = 0x7F3484CCu;
    ctx->downcount -= 1;
    // 7F3484CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3484D0:
    ctx->pc = 0x7F3484D0u;
    ctx->downcount -= 6;
    // 7F3484D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3484D4:
    ctx->pc = 0x7F3484D4u;
    // 7F3484D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3484D8:
    ctx->pc = 0x7F3484D8u;
    // 7F3484D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3484DC:
    ctx->pc = 0x7F3484DCu;
    // 7F3484DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3484E0:
    ctx->pc = 0x7F3484E0u;
    // 7F3484E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3484E4:
    ctx->pc = 0x7F3484E4u;
    ctx->downcount -= 24;
    // 7F3484E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3484E8:
    ctx->pc = 0x7F3484E8u;
    // 7F3484E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3484EC:
    ctx->pc = 0x7F3484ECu;
    // 7F3484EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3484F0:
    ctx->pc = 0x7F3484F0u;
    // 7F3484F0: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3484F4:
    ctx->pc = 0x7F3484F4u;
    // 7F3484F4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3484F8:
    ctx->pc = 0x7F3484F8u;
    // 7F3484F8: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3484FC:
    ctx->pc = 0x7F3484FCu;
    // 7F3484FC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F348500:
    ctx->pc = 0x7F348500u;
    // 7F348500: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F348504:
    ctx->pc = 0x7F348504u;
    // 7F348504: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F348508:
    ctx->pc = 0x7F348508u;
    // 7F348508: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F34850C:
    ctx->pc = 0x7F34850Cu;
    // 7F34850C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F348510:
    ctx->pc = 0x7F348510u;
    // 7F348510: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F348514:
    ctx->pc = 0x7F348514u;
    // 7F348514: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348518:
    ctx->pc = 0x7F348518u;
    // 7F348518: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F34851Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F34851C:
    ctx->pc = 0x7F34851Cu;
    ctx->downcount -= 2;
    // 7F34851C: or.   r31, r3, r3
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

label_7F348520:
    ctx->pc = 0x7F348520u;
    // 7F348520: bc    12, 2, 0x7F348594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348594;
        }
    }

label_7F348524:
    ctx->pc = 0x7F348524u;
    ctx->downcount -= 5;
    // 7F348524: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F348528:
    ctx->pc = 0x7F348528u;
    // 7F348528: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F34852C:
    ctx->pc = 0x7F34852Cu;
    // 7F34852C: addi    r4, r4, -32540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32540);

label_7F348530:
    ctx->pc = 0x7F348530u;
    // 7F348530: addi    r5, r5, -31980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31980);

label_7F348534:
    ctx->pc = 0x7F348534u;
    // 7F348534: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F348538u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F348538:
    ctx->pc = 0x7F348538u;
    ctx->downcount -= 17;
    // 7F348538: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34853C:
    ctx->pc = 0x7F34853Cu;
    // 7F34853C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F348540:
    ctx->pc = 0x7F348540u;
    // 7F348540: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F348544:
    ctx->pc = 0x7F348544u;
    // 7F348544: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348548:
    ctx->pc = 0x7F348548u;
    // 7F348548: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F34854C:
    ctx->pc = 0x7F34854Cu;
    // 7F34854C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F348550:
    ctx->pc = 0x7F348550u;
    // 7F348550: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F348554:
    ctx->pc = 0x7F348554u;
    // 7F348554: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F348558:
    ctx->pc = 0x7F348558u;
    // 7F348558: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F34855C:
    ctx->pc = 0x7F34855Cu;
    // 7F34855C: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F348560:
    ctx->pc = 0x7F348560u;
    // 7F348560: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F348564:
    ctx->pc = 0x7F348564u;
    // 7F348564: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F348568:
    ctx->pc = 0x7F348568u;
    // 7F348568: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34856C:
    ctx->pc = 0x7F34856Cu;
    // 7F34856C: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F348570:
    ctx->pc = 0x7F348570u;
    // 7F348570: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F348574:
    ctx->pc = 0x7F348574u;
    // 7F348574: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348578:
    ctx->pc = 0x7F348578u;
    // 7F348578: bl      0x7F348354
    {
            ctx->lr = 0x7F34857Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348354u;
                return;
            }
            goto label_7F348354;
    }

label_7F34857C:
    ctx->pc = 0x7F34857Cu;
    ctx->downcount -= 2;
    // 7F34857C: cmpwi   r3, 0
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

label_7F348580:
    ctx->pc = 0x7F348580u;
    // 7F348580: bc    4, 0, 0x7F348594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348594;
        }
    }

label_7F348584:
    ctx->pc = 0x7F348584u;
    ctx->downcount -= 2;
    // 7F348584: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348588:
    ctx->pc = 0x7F348588u;
    // 7F348588: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34858Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34858C:
    ctx->pc = 0x7F34858Cu;
    ctx->downcount -= 2;
    // 7F34858C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F348590:
    ctx->pc = 0x7F348590u;
    // 7F348590: b       0x7F348598
    {
            goto label_7F348598;
    }

label_7F348594:
    ctx->pc = 0x7F348594u;
    ctx->downcount -= 1;
    // 7F348594: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348598:
    ctx->pc = 0x7F348598u;
    ctx->downcount -= 16;
    // 7F348598: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34859C:
    ctx->pc = 0x7F34859Cu;
    // 7F34859C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3485A0:
    ctx->pc = 0x7F3485A0u;
    // 7F3485A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3485A4:
    ctx->pc = 0x7F3485A4u;
    // 7F3485A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3485A8:
    ctx->pc = 0x7F3485A8u;
    // 7F3485A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3485AC:
    ctx->pc = 0x7F3485ACu;
    ctx->downcount -= 8;
    // 7F3485AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3485B0:
    ctx->pc = 0x7F3485B0u;
    // 7F3485B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3485B4:
    ctx->pc = 0x7F3485B4u;
    // 7F3485B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3485B8:
    ctx->pc = 0x7F3485B8u;
    // 7F3485B8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3485BC:
    ctx->pc = 0x7F3485BCu;
    // 7F3485BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3485C0:
    ctx->pc = 0x7F3485C0u;
    // 7F3485C0: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3485C4:
    ctx->pc = 0x7F3485C4u;
    // 7F3485C4: addi    r3, r3, 52
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(52);

label_7F3485C8:
    ctx->pc = 0x7F3485C8u;
    // 7F3485C8: bl      0x7F1F7CE4
    {
            ctx->lr = 0x7F3485CCu;
            ctx->pc = 0x7F1F7CE4u;
            return;
    }

label_7F3485CC:
    ctx->pc = 0x7F3485CCu;
    ctx->downcount -= 3;
    // 7F3485CC: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3485D0:
    ctx->pc = 0x7F3485D0u;
    // 7F3485D0: cmplwi  r3, 0x0000
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

label_7F3485D4:
    ctx->pc = 0x7F3485D4u;
    // 7F3485D4: bc    12, 2, 0x7F3485E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3485E4;
        }
    }

label_7F3485D8:
    ctx->pc = 0x7F3485D8u;
    ctx->downcount -= 1;
    // 7F3485D8: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F3485DCu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F3485DC:
    ctx->pc = 0x7F3485DCu;
    ctx->downcount -= 2;
    // 7F3485DC: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3485E0:
    ctx->pc = 0x7F3485E0u;
    // 7F3485E0: bl      0x7F3B0820
    {
            ctx->lr = 0x7F3485E4u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F3485E4:
    ctx->pc = 0x7F3485E4u;
    ctx->downcount -= 11;
    // 7F3485E4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3485E8:
    ctx->pc = 0x7F3485E8u;
    // 7F3485E8: addi    r4, r3, -2868
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2868);

label_7F3485EC:
    ctx->pc = 0x7F3485ECu;
    // 7F3485EC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3485F0:
    ctx->pc = 0x7F3485F0u;
    // 7F3485F0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3485F4:
    ctx->pc = 0x7F3485F4u;
    // 7F3485F4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3485F8:
    ctx->pc = 0x7F3485F8u;
    // 7F3485F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3485FC:
    ctx->pc = 0x7F3485FCu;
    // 7F3485FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348600:
    ctx->pc = 0x7F348600u;
    // 7F348600: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348604:
    ctx->pc = 0x7F348604u;
    // 7F348604: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F348608:
    ctx->pc = 0x7F348608u;
    // 7F348608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34860C:
    ctx->pc = 0x7F34860Cu;
    ctx->downcount -= 45;
    // 7F34860C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348610:
    ctx->pc = 0x7F348610u;
    // 7F348610: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F348614:
    ctx->pc = 0x7F348614u;
    // 7F348614: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F348618:
    ctx->pc = 0x7F348618u;
    // 7F348618: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F34861C:
    ctx->pc = 0x7F34861Cu;
    // 7F34861C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348620:
    ctx->pc = 0x7F348620u;
    // 7F348620: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348624:
    ctx->pc = 0x7F348624u;
    // 7F348624: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348628:
    ctx->pc = 0x7F348628u;
    // 7F348628: lfs     f4, -25564(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F348628u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F34862C:
    ctx->pc = 0x7F34862Cu;
    // 7F34862C: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F348630:
    ctx->pc = 0x7F348630u;
    // 7F348630: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348634:
    ctx->pc = 0x7F348634u;
    // 7F348634: lfs     f2, -25568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348634u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348638:
    ctx->pc = 0x7F348638u;
    // 7F348638: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34863C:
    ctx->pc = 0x7F34863Cu;
    // 7F34863C: lfs     f1, -25556(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34863Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348640:
    ctx->pc = 0x7F348640u;
    // 7F348640: addi    r4, r31, 308
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(308);

label_7F348644:
    ctx->pc = 0x7F348644u;
    // 7F348644: lfs     f3, -25560(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348644u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348648:
    ctx->pc = 0x7F348648u;
    // 7F348648: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F34864C:
    ctx->pc = 0x7F34864Cu;
    // 7F34864C: stfs     f4, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34864Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F348650:
    ctx->pc = 0x7F348650u;
    // 7F348650: lfs     f0, -25552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348650u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348654:
    ctx->pc = 0x7F348654u;
    // 7F348654: addi    r3, r31, 372
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(372);

label_7F348658:
    ctx->pc = 0x7F348658u;
    // 7F348658: stfs     f3, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348658u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34865C:
    ctx->pc = 0x7F34865Cu;
    // 7F34865C: stfs     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34865Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348660:
    ctx->pc = 0x7F348660u;
    // 7F348660: stfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F348664:
    ctx->pc = 0x7F348664u;
    // 7F348664: stfs     f3, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348664u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F348668:
    ctx->pc = 0x7F348668u;
    // 7F348668: stfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348668u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34866C:
    ctx->pc = 0x7F34866Cu;
    // 7F34866C: stfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34866Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348670:
    ctx->pc = 0x7F348670u;
    // 7F348670: stfs     f1, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348670u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F348674:
    ctx->pc = 0x7F348674u;
    // 7F348674: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348678:
    ctx->pc = 0x7F348678u;
    // 7F348678: stfs     f2, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348678u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34867C:
    ctx->pc = 0x7F34867Cu;
    // 7F34867C: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34867Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348680:
    ctx->pc = 0x7F348680u;
    // 7F348680: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F348684:
    ctx->pc = 0x7F348684u;
    // 7F348684: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F348688:
    ctx->pc = 0x7F348688u;
    // 7F348688: stfs     f4, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F34868C:
    ctx->pc = 0x7F34868Cu;
    // 7F34868C: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34868Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348690:
    ctx->pc = 0x7F348690u;
    // 7F348690: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F348694:
    ctx->pc = 0x7F348694u;
    // 7F348694: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F348698:
    ctx->pc = 0x7F348698u;
    // 7F348698: stfs     f4, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F34869C:
    ctx->pc = 0x7F34869Cu;
    // 7F34869C: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34869Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3486A0:
    ctx->pc = 0x7F3486A0u;
    // 7F3486A0: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3486A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3486A4:
    ctx->pc = 0x7F3486A4u;
    // 7F3486A4: stfs     f2, 356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3486A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3486A8:
    ctx->pc = 0x7F3486A8u;
    // 7F3486A8: stfs     f2, 360(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3486A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3486AC:
    ctx->pc = 0x7F3486ACu;
    // 7F3486AC: stfs     f0, 364(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3486ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3486B0:
    ctx->pc = 0x7F3486B0u;
    // 7F3486B0: stfs     f1, 368(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3486B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3486B4:
    ctx->pc = 0x7F3486B4u;
    // 7F3486B4: stw     r4, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3486B8:
    ctx->pc = 0x7F3486B8u;
    // 7F3486B8: stw     r0, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3486BC:
    ctx->pc = 0x7F3486BCu;
    // 7F3486BC: bl      0x80025A08
    {
            ctx->lr = 0x7F3486C0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F3486C0:
    ctx->pc = 0x7F3486C0u;
    ctx->downcount -= 22;
    // 7F3486C0: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3486C4:
    ctx->pc = 0x7F3486C4u;
    // 7F3486C4: lis     r3, 143
    ctx->gpr[3] = ((u32)(s32)(143) << 16);

label_7F3486C8:
    ctx->pc = 0x7F3486C8u;
    // 7F3486C8: lwz     r8, 312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3486CC:
    ctx->pc = 0x7F3486CCu;
    // 7F3486CC: addi    r3, r3, 9914
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9914);

label_7F3486D0:
    ctx->pc = 0x7F3486D0u;
    // 7F3486D0: li      r0, 521
    ctx->gpr[0] = (u32)(s32)(521);

label_7F3486D4:
    ctx->pc = 0x7F3486D4u;
    // 7F3486D4: addi    r4, r31, 372
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(372);

label_7F3486D8:
    ctx->pc = 0x7F3486D8u;
    // 7F3486D8: stw     r5, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3486DC:
    ctx->pc = 0x7F3486DCu;
    // 7F3486DC: addi    r5, r1, 80
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(80);

label_7F3486E0:
    ctx->pc = 0x7F3486E0u;
    // 7F3486E0: addi    r6, r1, 64
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3486E4:
    ctx->pc = 0x7F3486E4u;
    // 7F3486E4: addi    r7, r1, 48
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3486E8:
    ctx->pc = 0x7F3486E8u;
    // 7F3486E8: stw     r8, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3486EC:
    ctx->pc = 0x7F3486ECu;
    // 7F3486EC: addi    r9, r31, 356
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(356);

label_7F3486F0:
    ctx->pc = 0x7F3486F0u;
    // 7F3486F0: lwz     r10, 316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3486F4:
    ctx->pc = 0x7F3486F4u;
    // 7F3486F4: lwz     r8, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3486F8:
    ctx->pc = 0x7F3486F8u;
    // 7F3486F8: stw     r10, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3486FC:
    ctx->pc = 0x7F3486FCu;
    // 7F3486FC: stw     r8, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F348700:
    ctx->pc = 0x7F348700u;
    // 7F348700: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348704:
    ctx->pc = 0x7F348704u;
    // 7F348704: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348708:
    ctx->pc = 0x7F348708u;
    // 7F348708: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34870C:
    ctx->pc = 0x7F34870Cu;
    // 7F34870C: lwz     r8, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F348710:
    ctx->pc = 0x7F348710u;
    // 7F348710: lwz     r10, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348714:
    ctx->pc = 0x7F348714u;
    // 7F348714: bl      0x7F329E34
    {
            ctx->lr = 0x7F348718u;
            ctx->pc = 0x7F329E34u;
            return;
    }

label_7F348718:
    ctx->pc = 0x7F348718u;
    ctx->downcount -= 14;
    // 7F348718: lis     r3, 143
    ctx->gpr[3] = ((u32)(s32)(143) << 16);

label_7F34871C:
    ctx->pc = 0x7F34871Cu;
    // 7F34871C: li      r0, 521
    ctx->gpr[0] = (u32)(s32)(521);

label_7F348720:
    ctx->pc = 0x7F348720u;
    // 7F348720: addi    r3, r3, 9914
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9914);

label_7F348724:
    ctx->pc = 0x7F348724u;
    // 7F348724: addi    r4, r31, 372
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(372);

label_7F348728:
    ctx->pc = 0x7F348728u;
    // 7F348728: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34872C:
    ctx->pc = 0x7F34872Cu;
    // 7F34872C: addi    r5, r1, 80
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(80);

label_7F348730:
    ctx->pc = 0x7F348730u;
    // 7F348730: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_7F348734:
    ctx->pc = 0x7F348734u;
    // 7F348734: addi    r7, r1, 48
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(48);

label_7F348738:
    ctx->pc = 0x7F348738u;
    // 7F348738: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34873C:
    ctx->pc = 0x7F34873Cu;
    // 7F34873C: addi    r9, r31, 356
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(356);

label_7F348740:
    ctx->pc = 0x7F348740u;
    // 7F348740: li      r10, 50
    ctx->gpr[10] = (u32)(s32)(50);

label_7F348744:
    ctx->pc = 0x7F348744u;
    // 7F348744: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348748:
    ctx->pc = 0x7F348748u;
    // 7F348748: lwz     r8, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F34874C:
    ctx->pc = 0x7F34874Cu;
    // 7F34874C: bl      0x7F329E34
    {
            ctx->lr = 0x7F348750u;
            ctx->pc = 0x7F329E34u;
            return;
    }

label_7F348750:
    ctx->pc = 0x7F348750u;
    ctx->downcount -= 14;
    // 7F348750: lis     r3, 143
    ctx->gpr[3] = ((u32)(s32)(143) << 16);

label_7F348754:
    ctx->pc = 0x7F348754u;
    // 7F348754: li      r0, 521
    ctx->gpr[0] = (u32)(s32)(521);

label_7F348758:
    ctx->pc = 0x7F348758u;
    // 7F348758: addi    r3, r3, 9914
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9914);

label_7F34875C:
    ctx->pc = 0x7F34875Cu;
    // 7F34875C: addi    r4, r31, 372
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(372);

label_7F348760:
    ctx->pc = 0x7F348760u;
    // 7F348760: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348764:
    ctx->pc = 0x7F348764u;
    // 7F348764: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F348768:
    ctx->pc = 0x7F348768u;
    // 7F348768: addi    r6, r1, 16
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34876C:
    ctx->pc = 0x7F34876Cu;
    // 7F34876C: addi    r7, r1, 48
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(48);

label_7F348770:
    ctx->pc = 0x7F348770u;
    // 7F348770: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348774:
    ctx->pc = 0x7F348774u;
    // 7F348774: addi    r9, r31, 356
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(356);

label_7F348778:
    ctx->pc = 0x7F348778u;
    // 7F348778: li      r10, 50
    ctx->gpr[10] = (u32)(s32)(50);

label_7F34877C:
    ctx->pc = 0x7F34877Cu;
    // 7F34877C: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348780:
    ctx->pc = 0x7F348780u;
    // 7F348780: lwz     r8, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F348784:
    ctx->pc = 0x7F348784u;
    // 7F348784: bl      0x7F329E34
    {
            ctx->lr = 0x7F348788u;
            ctx->pc = 0x7F329E34u;
            return;
    }

label_7F348788:
    ctx->pc = 0x7F348788u;
    ctx->downcount -= 6;
    // 7F348788: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34878C:
    ctx->pc = 0x7F34878Cu;
    // 7F34878C: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F348790:
    ctx->pc = 0x7F348790u;
    // 7F348790: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348794:
    ctx->pc = 0x7F348794u;
    // 7F348794: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F348798:
    ctx->pc = 0x7F348798u;
    // 7F348798: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34879C:
    ctx->pc = 0x7F34879Cu;
    ctx->downcount -= 3;
    // 7F34879C: lwz     r0, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3487A0:
    ctx->pc = 0x7F3487A0u;
    // 7F3487A0: cmpwi   r0, 1
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

label_7F3487A4:
    ctx->pc = 0x7F3487A4u;
    // 7F3487A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3487A8:
    ctx->pc = 0x7F3487A8u;
    ctx->downcount -= 7;
    // 7F3487A8: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3487AC:
    ctx->pc = 0x7F3487ACu;
    // 7F3487AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3487B0:
    ctx->pc = 0x7F3487B0u;
    // 7F3487B0: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3487B4:
    ctx->pc = 0x7F3487B4u;
    // 7F3487B4: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3487B8:
    ctx->pc = 0x7F3487B8u;
    // 7F3487B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3487BC:
    ctx->pc = 0x7F3487BCu;
    // 7F3487BC: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3487C0:
    ctx->pc = 0x7F3487C0u;
    // 7F3487C0: bl      0x7F0150C0
    {
            ctx->lr = 0x7F3487C4u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F3487C4:
    ctx->pc = 0x7F3487C4u;
    ctx->downcount -= 4;
    // 7F3487C4: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3487C8:
    ctx->pc = 0x7F3487C8u;
    // 7F3487C8: addi    r4, r31, 144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(144);

label_7F3487CC:
    ctx->pc = 0x7F3487CCu;
    // 7F3487CC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3487D0:
    ctx->pc = 0x7F3487D0u;
    // 7F3487D0: bl      0x7F022090
    {
            ctx->lr = 0x7F3487D4u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F3487D4:
    ctx->pc = 0x7F3487D4u;
    ctx->downcount -= 2;
    // 7F3487D4: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3487D8:
    ctx->pc = 0x7F3487D8u;
    // 7F3487D8: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F3487DCu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F3487DC:
    ctx->pc = 0x7F3487DCu;
    ctx->downcount -= 2;
    // 7F3487DC: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3487E0:
    ctx->pc = 0x7F3487E0u;
    // 7F3487E0: bl      0x7F3B0820
    {
            ctx->lr = 0x7F3487E4u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F3487E4:
    ctx->pc = 0x7F3487E4u;
    ctx->downcount -= 4;
    // 7F3487E4: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3487E8:
    ctx->pc = 0x7F3487E8u;
    // 7F3487E8: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F3487EC:
    ctx->pc = 0x7F3487ECu;
    // 7F3487EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3487F0:
    ctx->pc = 0x7F3487F0u;
    // 7F3487F0: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F3487F4u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F3487F4:
    ctx->pc = 0x7F3487F4u;
    ctx->downcount -= 3;
    // 7F3487F4: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3487F8:
    ctx->pc = 0x7F3487F8u;
    // 7F3487F8: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3487FC:
    ctx->pc = 0x7F3487FCu;
    // 7F3487FC: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F348800u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F348800:
    ctx->pc = 0x7F348800u;
    ctx->downcount -= 44;
    // 7F348800: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348804:
    ctx->pc = 0x7F348804u;
    // 7F348804: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348808:
    ctx->pc = 0x7F348808u;
    // 7F348808: lfd     f2, -25496(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348808u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25496);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34880C:
    ctx->pc = 0x7F34880Cu;
    // 7F34880C: addi    r8, r5, -25548
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-25548);

label_7F348810:
    ctx->pc = 0x7F348810u;
    // 7F348810: lfs     f1, 328(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348810u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348814:
    ctx->pc = 0x7F348814u;
    // 7F348814: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348818:
    ctx->pc = 0x7F348818u;
    // 7F348818: lfs     f0, 312(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348818u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34881C:
    ctx->pc = 0x7F34881Cu;
    // 7F34881C: addi    r5, r3, -25488
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25488);

label_7F348820:
    ctx->pc = 0x7F348820u;
    // 7F348820: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F348824:
    ctx->pc = 0x7F348824u;
    // 7F348824: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F348828:
    ctx->pc = 0x7F348828u;
    // 7F348828: fnmsub f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348828u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_7F34882C:
    ctx->pc = 0x7F34882Cu;
    // 7F34882C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34882Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348830:
    ctx->pc = 0x7F348830u;
    // 7F348830: lwz     r7, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F348834:
    ctx->pc = 0x7F348834u;
    // 7F348834: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F348838:
    ctx->pc = 0x7F348838u;
    // 7F348838: lfs     f1, 332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348838u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34883C:
    ctx->pc = 0x7F34883Cu;
    // 7F34883C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348840:
    ctx->pc = 0x7F348840u;
    // 7F348840: frsp    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348840u)) return;
    ppc_frsp(ctx, 3, 0);

label_7F348844:
    ctx->pc = 0x7F348844u;
    // 7F348844: stw     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F348848:
    ctx->pc = 0x7F348848u;
    // 7F348848: lfs     f0, 316(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348848u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34884C:
    ctx->pc = 0x7F34884Cu;
    // 7F34884C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348850:
    ctx->pc = 0x7F348850u;
    // 7F348850: lwz     r10, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348854:
    ctx->pc = 0x7F348854u;
    // 7F348854: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F348858:
    ctx->pc = 0x7F348858u;
    // 7F348858: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34885C:
    ctx->pc = 0x7F34885Cu;
    // 7F34885C: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34885Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F348860:
    ctx->pc = 0x7F348860u;
    // 7F348860: stw     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F348864:
    ctx->pc = 0x7F348864u;
    // 7F348864: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F348868:
    ctx->pc = 0x7F348868u;
    // 7F348868: lfs     f2, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348868u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34886C:
    ctx->pc = 0x7F34886Cu;
    // 7F34886C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F348870:
    ctx->pc = 0x7F348870u;
    // 7F348870: stw     r11, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F348874:
    ctx->pc = 0x7F348874u;
    // 7F348874: lfs     f0, 320(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348874u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348878:
    ctx->pc = 0x7F348878u;
    // 7F348878: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34887C:
    ctx->pc = 0x7F34887Cu;
    // 7F34887C: stfs     f3, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34887Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F348880:
    ctx->pc = 0x7F348880u;
    // 7F348880: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348880u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348884:
    ctx->pc = 0x7F348884u;
    // 7F348884: lwz     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F348888:
    ctx->pc = 0x7F348888u;
    // 7F348888: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34888C:
    ctx->pc = 0x7F34888Cu;
    // 7F34888C: lwz     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F348890:
    ctx->pc = 0x7F348890u;
    // 7F348890: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348894:
    ctx->pc = 0x7F348894u;
    // 7F348894: lwz     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348898:
    ctx->pc = 0x7F348898u;
    // 7F348898: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34889C:
    ctx->pc = 0x7F34889Cu;
    // 7F34889C: stw     r12, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3488A0:
    ctx->pc = 0x7F3488A0u;
    // 7F3488A0: stw     r11, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3488A4:
    ctx->pc = 0x7F3488A4u;
    // 7F3488A4: stw     r10, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3488A8:
    ctx->pc = 0x7F3488A8u;
    // 7F3488A8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3488AC:
    ctx->pc = 0x7F3488ACu;
    // 7F3488AC: bl      0x7F23B434
    {
            ctx->lr = 0x7F3488B0u;
            ctx->pc = 0x7F23B434u;
            return;
    }

label_7F3488B0:
    ctx->pc = 0x7F3488B0u;
    ctx->downcount -= 44;
    // 7F3488B0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3488B4:
    ctx->pc = 0x7F3488B4u;
    // 7F3488B4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F3488B8:
    ctx->pc = 0x7F3488B8u;
    // 7F3488B8: lfd     f2, -25480(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3488B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25480);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3488BC:
    ctx->pc = 0x7F3488BCu;
    // 7F3488BC: addi    r8, r5, -25532
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-25532);

label_7F3488C0:
    ctx->pc = 0x7F3488C0u;
    // 7F3488C0: lfs     f1, 328(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3488C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3488C4:
    ctx->pc = 0x7F3488C4u;
    // 7F3488C4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3488C8:
    ctx->pc = 0x7F3488C8u;
    // 7F3488C8: lfs     f0, 312(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3488C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3488CC:
    ctx->pc = 0x7F3488CCu;
    // 7F3488CC: addi    r5, r3, -25488
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25488);

label_7F3488D0:
    ctx->pc = 0x7F3488D0u;
    // 7F3488D0: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3488D4:
    ctx->pc = 0x7F3488D4u;
    // 7F3488D4: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3488D8:
    ctx->pc = 0x7F3488D8u;
    // 7F3488D8: fmadd f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3488D8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], false, false, false, &result))
            ctx->fpr[0] = result;
    }

label_7F3488DC:
    ctx->pc = 0x7F3488DCu;
    // 7F3488DC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3488DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3488E0:
    ctx->pc = 0x7F3488E0u;
    // 7F3488E0: lwz     r7, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3488E4:
    ctx->pc = 0x7F3488E4u;
    // 7F3488E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3488E8:
    ctx->pc = 0x7F3488E8u;
    // 7F3488E8: lfs     f1, 332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3488E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3488EC:
    ctx->pc = 0x7F3488ECu;
    // 7F3488EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3488F0:
    ctx->pc = 0x7F3488F0u;
    // 7F3488F0: frsp    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3488F0u)) return;
    ppc_frsp(ctx, 3, 0);

label_7F3488F4:
    ctx->pc = 0x7F3488F4u;
    // 7F3488F4: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3488F8:
    ctx->pc = 0x7F3488F8u;
    // 7F3488F8: lfs     f0, 316(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3488F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3488FC:
    ctx->pc = 0x7F3488FCu;
    // 7F3488FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348900:
    ctx->pc = 0x7F348900u;
    // 7F348900: lwz     r10, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348904:
    ctx->pc = 0x7F348904u;
    // 7F348904: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F348908:
    ctx->pc = 0x7F348908u;
    // 7F348908: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34890C:
    ctx->pc = 0x7F34890Cu;
    // 7F34890C: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34890Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F348910:
    ctx->pc = 0x7F348910u;
    // 7F348910: stw     r10, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F348914:
    ctx->pc = 0x7F348914u;
    // 7F348914: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F348918:
    ctx->pc = 0x7F348918u;
    // 7F348918: lfs     f2, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348918u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34891C:
    ctx->pc = 0x7F34891Cu;
    // 7F34891C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F348920:
    ctx->pc = 0x7F348920u;
    // 7F348920: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F348924:
    ctx->pc = 0x7F348924u;
    // 7F348924: lfs     f0, 320(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348924u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348928:
    ctx->pc = 0x7F348928u;
    // 7F348928: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34892C:
    ctx->pc = 0x7F34892Cu;
    // 7F34892C: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34892Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F348930:
    ctx->pc = 0x7F348930u;
    // 7F348930: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F348934:
    ctx->pc = 0x7F348934u;
    // 7F348934: lwz     r11, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F348938:
    ctx->pc = 0x7F348938u;
    // 7F348938: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34893C:
    ctx->pc = 0x7F34893Cu;
    // 7F34893C: lwz     r12, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F348940:
    ctx->pc = 0x7F348940u;
    // 7F348940: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348944:
    ctx->pc = 0x7F348944u;
    // 7F348944: lwz     r10, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348948:
    ctx->pc = 0x7F348948u;
    // 7F348948: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34894C:
    ctx->pc = 0x7F34894Cu;
    // 7F34894C: stw     r12, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F348950:
    ctx->pc = 0x7F348950u;
    // 7F348950: stw     r11, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F348954:
    ctx->pc = 0x7F348954u;
    // 7F348954: stw     r10, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F348958:
    ctx->pc = 0x7F348958u;
    // 7F348958: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34895C:
    ctx->pc = 0x7F34895Cu;
    // 7F34895C: bl      0x7F23B434
    {
            ctx->lr = 0x7F348960u;
            ctx->pc = 0x7F23B434u;
            return;
    }

label_7F348960:
    ctx->pc = 0x7F348960u;
    ctx->downcount -= 34;
    // 7F348960: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348964:
    ctx->pc = 0x7F348964u;
    // 7F348964: lfs     f3, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348964u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348968:
    ctx->pc = 0x7F348968u;
    // 7F348968: addi    r6, r3, -25516
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-25516);

label_7F34896C:
    ctx->pc = 0x7F34896Cu;
    // 7F34896C: lfs     f2, 312(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34896Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348970:
    ctx->pc = 0x7F348970u;
    // 7F348970: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F348974:
    ctx->pc = 0x7F348974u;
    // 7F348974: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F348978:
    ctx->pc = 0x7F348978u;
    // 7F348978: lwz     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F34897C:
    ctx->pc = 0x7F34897Cu;
    // 7F34897C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F348980:
    ctx->pc = 0x7F348980u;
    // 7F348980: lwz     r10, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F348984:
    ctx->pc = 0x7F348984u;
    // 7F348984: li      r5, 2500
    ctx->gpr[5] = (u32)(s32)(2500);

label_7F348988:
    ctx->pc = 0x7F348988u;
    // 7F348988: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34898C:
    ctx->pc = 0x7F34898Cu;
    // 7F34898C: li      r6, 2500
    ctx->gpr[6] = (u32)(s32)(2500);

label_7F348990:
    ctx->pc = 0x7F348990u;
    // 7F348990: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F348994:
    ctx->pc = 0x7F348994u;
    // 7F348994: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F348998:
    ctx->pc = 0x7F348998u;
    // 7F348998: lfs     f1, 316(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348998u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34899C:
    ctx->pc = 0x7F34899Cu;
    // 7F34899C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3489A0:
    ctx->pc = 0x7F3489A0u;
    // 7F3489A0: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3489A4:
    ctx->pc = 0x7F3489A4u;
    // 7F3489A4: li      r9, 9
    ctx->gpr[9] = (u32)(s32)(9);

label_7F3489A8:
    ctx->pc = 0x7F3489A8u;
    // 7F3489A8: lfs     f0, 320(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3489A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3489AC:
    ctx->pc = 0x7F3489ACu;
    // 7F3489AC: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3489B0:
    ctx->pc = 0x7F3489B0u;
    // 7F3489B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3489B4:
    ctx->pc = 0x7F3489B4u;
    // 7F3489B4: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3489B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3489B8:
    ctx->pc = 0x7F3489B8u;
    // 7F3489B8: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3489B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3489BC:
    ctx->pc = 0x7F3489BCu;
    // 7F3489BC: lwz     r12, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F3489C0:
    ctx->pc = 0x7F3489C0u;
    // 7F3489C0: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3489C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3489C4:
    ctx->pc = 0x7F3489C4u;
    // 7F3489C4: lwz     r11, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3489C8:
    ctx->pc = 0x7F3489C8u;
    // 7F3489C8: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3489C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3489CC:
    ctx->pc = 0x7F3489CCu;
    // 7F3489CC: lwz     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3489D0:
    ctx->pc = 0x7F3489D0u;
    // 7F3489D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3489D4:
    ctx->pc = 0x7F3489D4u;
    // 7F3489D4: stw     r12, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3489D8:
    ctx->pc = 0x7F3489D8u;
    // 7F3489D8: stw     r11, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3489DC:
    ctx->pc = 0x7F3489DCu;
    // 7F3489DC: stw     r10, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3489E0:
    ctx->pc = 0x7F3489E0u;
    // 7F3489E0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3489E4:
    ctx->pc = 0x7F3489E4u;
    // 7F3489E4: bl      0x7F23B434
    {
            ctx->lr = 0x7F3489E8u;
            ctx->pc = 0x7F23B434u;
            return;
    }

label_7F3489E8:
    ctx->pc = 0x7F3489E8u;
    ctx->downcount -= 5;
    // 7F3489E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3489EC:
    ctx->pc = 0x7F3489ECu;
    // 7F3489EC: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3489F0:
    ctx->pc = 0x7F3489F0u;
    // 7F3489F0: lwz     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3489F4:
    ctx->pc = 0x7F3489F4u;
    // 7F3489F4: cmpwi   r0, 0
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

label_7F3489F8:
    ctx->pc = 0x7F3489F8u;
    // 7F3489F8: bc    12, 2, 0x7F348BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348BA4;
        }
    }

label_7F3489FC:
    ctx->pc = 0x7F3489FCu;
    ctx->downcount -= 2;
    // 7F3489FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348A00:
    ctx->pc = 0x7F348A00u;
    // 7F348A00: bl      0x7F34860C
    {
            ctx->lr = 0x7F348A04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34860Cu;
                return;
            }
            goto label_7F34860C;
    }

label_7F348A04:
    ctx->pc = 0x7F348A04u;
    ctx->downcount -= 26;
    // 7F348A04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348A08:
    ctx->pc = 0x7F348A08u;
    // 7F348A08: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F348A0C:
    ctx->pc = 0x7F348A0Cu;
    // 7F348A0C: lfs     f3, -25568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348A0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348A10:
    ctx->pc = 0x7F348A10u;
    // 7F348A10: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F348A14:
    ctx->pc = 0x7F348A14u;
    // 7F348A14: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348A18:
    ctx->pc = 0x7F348A18u;
    // 7F348A18: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348A1C:
    ctx->pc = 0x7F348A1Cu;
    // 7F348A1C: addi    r9, r7, -25472
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-25472);

label_7F348A20:
    ctx->pc = 0x7F348A20u;
    // 7F348A20: addi    r8, r6, -25468
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-25468);

label_7F348A24:
    ctx->pc = 0x7F348A24u;
    // 7F348A24: addi    r7, r5, -25556
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-25556);

label_7F348A28:
    ctx->pc = 0x7F348A28u;
    // 7F348A28: addi    r5, r4, -25464
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25464);

label_7F348A2C:
    ctx->pc = 0x7F348A2Cu;
    // 7F348A2C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348A30:
    ctx->pc = 0x7F348A30u;
    // 7F348A30: lis     r4, -14171
    ctx->gpr[4] = ((u32)(s32)(-14171) << 16);

label_7F348A34:
    ctx->pc = 0x7F348A34u;
    // 7F348A34: addi    r6, r3, -25460
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-25460);

label_7F348A38:
    ctx->pc = 0x7F348A38u;
    // 7F348A38: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F348A38u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348A3C:
    ctx->pc = 0x7F348A3Cu;
    // 7F348A3C: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F348A3Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F348A40:
    ctx->pc = 0x7F348A40u;
    // 7F348A40: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F348A40u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_7F348A44:
    ctx->pc = 0x7F348A44u;
    // 7F348A44: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348A44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F348A48:
    ctx->pc = 0x7F348A48u;
    // 7F348A48: addi    r3, r31, 372
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(372);

label_7F348A4C:
    ctx->pc = 0x7F348A4Cu;
    // 7F348A4C: lfs     f7, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348A4Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F348A50:
    ctx->pc = 0x7F348A50u;
    // 7F348A50: addi    r4, r4, -23388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23388);

label_7F348A54:
    ctx->pc = 0x7F348A54u;
    // 7F348A54: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F348A54u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348A58:
    ctx->pc = 0x7F348A58u;
    // 7F348A58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348A5C:
    ctx->pc = 0x7F348A5Cu;
    // 7F348A5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348A60:
    ctx->pc = 0x7F348A60u;
    // 7F348A60: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F348A64:
    ctx->pc = 0x7F348A64u;
    // 7F348A64: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F348A68:
    ctx->pc = 0x7F348A68u;
    // 7F348A68: bl      0x7F41B794
    {
            ctx->lr = 0x7F348A6Cu;
            ctx->pc = 0x7F41B794u;
            return;
    }

label_7F348A6C:
    ctx->pc = 0x7F348A6Cu;
    ctx->downcount -= 2;
    // 7F348A6C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F348A70:
    ctx->pc = 0x7F348A70u;
    // 7F348A70: bl      0x80025A08
    {
            ctx->lr = 0x7F348A74u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F348A74:
    ctx->pc = 0x7F348A74u;
    ctx->downcount -= 40;
    // 7F348A74: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348A78:
    ctx->pc = 0x7F348A78u;
    // 7F348A78: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348A7C:
    ctx->pc = 0x7F348A7Cu;
    // 7F348A7C: addi    r5, r3, -25564
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25564);

label_7F348A80:
    ctx->pc = 0x7F348A80u;
    // 7F348A80: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F348A84:
    ctx->pc = 0x7F348A84u;
    // 7F348A84: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348A84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348A88:
    ctx->pc = 0x7F348A88u;
    // 7F348A88: addi    r10, r4, -25456
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-25456);

label_7F348A8C:
    ctx->pc = 0x7F348A8Cu;
    // 7F348A8C: lfs     f1, 420(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348A8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348A90:
    ctx->pc = 0x7F348A90u;
    // 7F348A90: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348A94:
    ctx->pc = 0x7F348A94u;
    // 7F348A94: lfs     f3, -25568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348A94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348A98:
    ctx->pc = 0x7F348A98u;
    // 7F348A98: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F348A9C:
    ctx->pc = 0x7F348A9Cu;
    // 7F348A9C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348A9Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F348AA0:
    ctx->pc = 0x7F348AA0u;
    // 7F348AA0: addi    r8, r6, -25452
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-25452);

label_7F348AA4:
    ctx->pc = 0x7F348AA4u;
    // 7F348AA4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348AA8:
    ctx->pc = 0x7F348AA8u;
    // 7F348AA8: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F348AA8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348AAC:
    ctx->pc = 0x7F348AACu;
    // 7F348AAC: addi    r6, r5, -25448
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-25448);

label_7F348AB0:
    ctx->pc = 0x7F348AB0u;
    // 7F348AB0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348AB4:
    ctx->pc = 0x7F348AB4u;
    // 7F348AB4: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348AB8:
    ctx->pc = 0x7F348AB8u;
    // 7F348AB8: addi    r5, r4, -25444
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25444);

label_7F348ABC:
    ctx->pc = 0x7F348ABCu;
    // 7F348ABC: lfs     f1, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F348ABCu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348AC0:
    ctx->pc = 0x7F348AC0u;
    // 7F348AC0: lis     r4, -14171
    ctx->gpr[4] = ((u32)(s32)(-14171) << 16);

label_7F348AC4:
    ctx->pc = 0x7F348AC4u;
    // 7F348AC4: lfs     f0, 424(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348AC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348AC8:
    ctx->pc = 0x7F348AC8u;
    // 7F348AC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348ACC:
    ctx->pc = 0x7F348ACCu;
    // 7F348ACC: addi    r9, r7, -25472
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-25472);

label_7F348AD0:
    ctx->pc = 0x7F348AD0u;
    // 7F348AD0: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348AD0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F348AD4:
    ctx->pc = 0x7F348AD4u;
    // 7F348AD4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348AD4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F348AD8:
    ctx->pc = 0x7F348AD8u;
    // 7F348AD8: addi    r7, r3, -25440
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-25440);

label_7F348ADC:
    ctx->pc = 0x7F348ADCu;
    // 7F348ADC: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348ADCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F348AE0:
    ctx->pc = 0x7F348AE0u;
    // 7F348AE0: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F348AE0u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_7F348AE4:
    ctx->pc = 0x7F348AE4u;
    // 7F348AE4: lfs     f7, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F348AE4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F348AE8:
    ctx->pc = 0x7F348AE8u;
    // 7F348AE8: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F348AEC:
    ctx->pc = 0x7F348AECu;
    // 7F348AEC: stfs     f0, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348AECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348AF0:
    ctx->pc = 0x7F348AF0u;
    // 7F348AF0: addi    r4, r4, -23388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23388);

label_7F348AF4:
    ctx->pc = 0x7F348AF4u;
    // 7F348AF4: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F348AF4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348AF8:
    ctx->pc = 0x7F348AF8u;
    // 7F348AF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348AFC:
    ctx->pc = 0x7F348AFCu;
    // 7F348AFC: lfs     f0, 428(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348AFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348B00:
    ctx->pc = 0x7F348B00u;
    // 7F348B00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348B04:
    ctx->pc = 0x7F348B04u;
    // 7F348B04: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F348B08:
    ctx->pc = 0x7F348B08u;
    // 7F348B08: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F348B0C:
    ctx->pc = 0x7F348B0Cu;
    // 7F348B0C: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348B10:
    ctx->pc = 0x7F348B10u;
    // 7F348B10: bl      0x7F41B794
    {
            ctx->lr = 0x7F348B14u;
            ctx->pc = 0x7F41B794u;
            return;
    }

label_7F348B14:
    ctx->pc = 0x7F348B14u;
    ctx->downcount -= 36;
    // 7F348B14: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348B18:
    ctx->pc = 0x7F348B18u;
    // 7F348B18: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348B1C:
    ctx->pc = 0x7F348B1Cu;
    // 7F348B1C: addi    r5, r3, -25436
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25436);

label_7F348B20:
    ctx->pc = 0x7F348B20u;
    // 7F348B20: lfs     f1, -25472(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348B20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348B24:
    ctx->pc = 0x7F348B24u;
    // 7F348B24: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348B24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348B28:
    ctx->pc = 0x7F348B28u;
    // 7F348B28: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348B2C:
    ctx->pc = 0x7F348B2Cu;
    // 7F348B2C: lfs     f0, 420(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348B2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348B30:
    ctx->pc = 0x7F348B30u;
    // 7F348B30: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F348B34:
    ctx->pc = 0x7F348B34u;
    // 7F348B34: lfs     f3, -25568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348B34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348B38:
    ctx->pc = 0x7F348B38u;
    // 7F348B38: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348B3C:
    ctx->pc = 0x7F348B3Cu;
    // 7F348B3C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348B3Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F348B40:
    ctx->pc = 0x7F348B40u;
    // 7F348B40: addi    r7, r6, -25432
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-25432);

label_7F348B44:
    ctx->pc = 0x7F348B44u;
    // 7F348B44: addi    r6, r5, -25428
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-25428);

label_7F348B48:
    ctx->pc = 0x7F348B48u;
    // 7F348B48: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348B4C:
    ctx->pc = 0x7F348B4Cu;
    // 7F348B4C: addi    r5, r4, -25424
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25424);

label_7F348B50:
    ctx->pc = 0x7F348B50u;
    // 7F348B50: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348B54:
    ctx->pc = 0x7F348B54u;
    // 7F348B54: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348B58:
    ctx->pc = 0x7F348B58u;
    // 7F348B58: addi    r4, r3, -25420
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25420);

label_7F348B5C:
    ctx->pc = 0x7F348B5Cu;
    // 7F348B5C: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F348B5Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348B60:
    ctx->pc = 0x7F348B60u;
    // 7F348B60: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F348B60u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_7F348B64:
    ctx->pc = 0x7F348B64u;
    // 7F348B64: lfs     f0, 424(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348B64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348B68:
    ctx->pc = 0x7F348B68u;
    // 7F348B68: lis     r8, -14171
    ctx->gpr[8] = ((u32)(s32)(-14171) << 16);

label_7F348B6C:
    ctx->pc = 0x7F348B6Cu;
    // 7F348B6C: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348B6Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F348B70:
    ctx->pc = 0x7F348B70u;
    // 7F348B70: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F348B74:
    ctx->pc = 0x7F348B74u;
    // 7F348B74: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F348B74u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F348B78:
    ctx->pc = 0x7F348B78u;
    // 7F348B78: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F348B78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F348B7C:
    ctx->pc = 0x7F348B7Cu;
    // 7F348B7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348B80:
    ctx->pc = 0x7F348B80u;
    // 7F348B80: lfs     f7, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348B80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F348B84:
    ctx->pc = 0x7F348B84u;
    // 7F348B84: addi    r4, r8, -23388
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(-23388);

label_7F348B88:
    ctx->pc = 0x7F348B88u;
    // 7F348B88: stfs     f0, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348B8C:
    ctx->pc = 0x7F348B8Cu;
    // 7F348B8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348B90:
    ctx->pc = 0x7F348B90u;
    // 7F348B90: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F348B94:
    ctx->pc = 0x7F348B94u;
    // 7F348B94: lfs     f0, 428(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F348B94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348B98:
    ctx->pc = 0x7F348B98u;
    // 7F348B98: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F348B9C:
    ctx->pc = 0x7F348B9Cu;
    // 7F348B9C: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348BA0:
    ctx->pc = 0x7F348BA0u;
    // 7F348BA0: bl      0x7F41B794
    {
            ctx->lr = 0x7F348BA4u;
            ctx->pc = 0x7F41B794u;
            return;
    }

label_7F348BA4:
    ctx->pc = 0x7F348BA4u;
    ctx->downcount -= 3;
    // 7F348BA4: lwz     r3, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348BA8:
    ctx->pc = 0x7F348BA8u;
    // 7F348BA8: cmpwi   r3, 0
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

label_7F348BAC:
    ctx->pc = 0x7F348BACu;
    // 7F348BAC: bc    12, 2, 0x7F348BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348BB8;
        }
    }

label_7F348BB0:
    ctx->pc = 0x7F348BB0u;
    ctx->downcount -= 2;
    // 7F348BB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F348BB4:
    ctx->pc = 0x7F348BB4u;
    // 7F348BB4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F348BB8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F348BB8:
    ctx->pc = 0x7F348BB8u;
    ctx->downcount -= 6;
    // 7F348BB8: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348BBC:
    ctx->pc = 0x7F348BBCu;
    // 7F348BBC: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F348BC0:
    ctx->pc = 0x7F348BC0u;
    // 7F348BC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348BC4:
    ctx->pc = 0x7F348BC4u;
    // 7F348BC4: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F348BC8:
    ctx->pc = 0x7F348BC8u;
    // 7F348BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348BCC:
    ctx->pc = 0x7F348BCCu;
    ctx->downcount -= 16;
    // 7F348BCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348BD0:
    ctx->pc = 0x7F348BD0u;
    // 7F348BD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F348BD4:
    ctx->pc = 0x7F348BD4u;
    // 7F348BD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348BD8:
    ctx->pc = 0x7F348BD8u;
    // 7F348BD8: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348BD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348BDC:
    ctx->pc = 0x7F348BDCu;
    // 7F348BDC: lfs     f0, 312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348BDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348BE0:
    ctx->pc = 0x7F348BE0u;
    // 7F348BE0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348BE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F348BE4:
    ctx->pc = 0x7F348BE4u;
    // 7F348BE4: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348BE4u)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F348BE8:
    ctx->pc = 0x7F348BE8u;
    // 7F348BE8: lfs     f0, 308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348BE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348BEC:
    ctx->pc = 0x7F348BECu;
    // 7F348BEC: lfs     f2, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348BECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F348BF0:
    ctx->pc = 0x7F348BF0u;
    // 7F348BF0: fsubs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348BF0u)) return;
    ppc_fsubs(ctx, 3, 3, 0);

label_7F348BF4:
    ctx->pc = 0x7F348BF4u;
    // 7F348BF4: lfs     f1, 316(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348BF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348BF8:
    ctx->pc = 0x7F348BF8u;
    // 7F348BF8: fmuls   f0, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x7F348BF8u)) return;
    ppc_fmuls(ctx, 0, 4, 4);

label_7F348BFC:
    ctx->pc = 0x7F348BFCu;
    // 7F348BFC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F348BFCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F348C00:
    ctx->pc = 0x7F348C00u;
    // 7F348C00: fmadds f0, f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348C00u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F348C04:
    ctx->pc = 0x7F348C04u;
    // 7F348C04: fmadds f1, f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F348C04u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F348C08:
    ctx->pc = 0x7F348C08u;
    // 7F348C08: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F348C0Cu;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F348C0C:
    ctx->pc = 0x7F348C0Cu;
    ctx->downcount -= 5;
    // 7F348C0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348C10:
    ctx->pc = 0x7F348C10u;
    // 7F348C10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348C14:
    ctx->pc = 0x7F348C14u;
    // 7F348C14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F348C18:
    ctx->pc = 0x7F348C18u;
    // 7F348C18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348C1C:
    ctx->pc = 0x7F348C1Cu;
    ctx->downcount -= 28;
    // 7F348C1C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348C20:
    ctx->pc = 0x7F348C20u;
    // 7F348C20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F348C24:
    ctx->pc = 0x7F348C24u;
    // 7F348C24: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348C28:
    ctx->pc = 0x7F348C28u;
    // 7F348C28: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F348C2C:
    ctx->pc = 0x7F348C2Cu;
    // 7F348C2C: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F348C2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F348C2Cu);
        if (ctx->exception) return;
    }

label_7F348C30:
    ctx->pc = 0x7F348C30u;
    // 7F348C30: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F348C34:
    ctx->pc = 0x7F348C34u;
    // 7F348C34: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348C38:
    ctx->pc = 0x7F348C38u;
    // 7F348C38: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F348C3C:
    ctx->pc = 0x7F348C3Cu;
    // 7F348C3C: addi    r6, r4, -25416
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-25416);

label_7F348C40:
    ctx->pc = 0x7F348C40u;
    // 7F348C40: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F348C44:
    ctx->pc = 0x7F348C44u;
    // 7F348C44: lfs     f31, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F348C44u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F348C48:
    ctx->pc = 0x7F348C48u;
    // 7F348C48: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348C4C:
    ctx->pc = 0x7F348C4Cu;
    // 7F348C4C: addi    r29, r5, -2864
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(-2864);

label_7F348C50:
    ctx->pc = 0x7F348C50u;
    // 7F348C50: addi    r30, r4, -2872
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-2872);

label_7F348C54:
    ctx->pc = 0x7F348C54u;
    // 7F348C54: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F348C58:
    ctx->pc = 0x7F348C58u;
    // 7F348C58: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F348C5C:
    ctx->pc = 0x7F348C5Cu;
    // 7F348C5C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F348C60:
    ctx->pc = 0x7F348C60u;
    // 7F348C60: b       0x7F348C88
    {
            goto label_7F348C88;
    }

label_7F348C64:
    ctx->pc = 0x7F348C64u;
    ctx->downcount -= 3;
    // 7F348C64: lwzx    r3, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348C68:
    // 7F348C68: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F348C6C:
    // 7F348C6C: bl      0x7F348BCC
    {
            ctx->lr = 0x7F348C70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348BCCu;
                return;
            }
            goto label_7F348BCC;
    }

label_7F348C70:
    ctx->pc = 0x7F348C70u;
    ctx->downcount -= 2;
    // 7F348C70: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F348C70u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_7F348C74:
    // 7F348C74: bc    4, 0, 0x7F348C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348C80;
        }
    }

label_7F348C78:
    ctx->pc = 0x7F348C78u;
    ctx->downcount -= 2;
    // 7F348C78: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F348C78u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F348C7C:
    ctx->pc = 0x7F348C7Cu;
    // 7F348C7C: lwzx    r27, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F348C80:
    ctx->downcount -= 2;
    // 7F348C80: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F348C84:
    // 7F348C84: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F348C88:
    ctx->pc = 0x7F348C88u;
    ctx->downcount -= 3;
    // 7F348C88: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348C8C:
    // 7F348C8C: cmpw    r28, r0
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

label_7F348C90:
    // 7F348C90: bc    12, 0, 0x7F348C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348C64u;
                return;
            }
            goto label_7F348C64;
        }
    }

label_7F348C94:
    ctx->pc = 0x7F348C94u;
    ctx->downcount -= 2;
    // 7F348C94: cmplwi  r27, 0x0000
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

label_7F348C98:
    ctx->pc = 0x7F348C98u;
    // 7F348C98: bc    12, 2, 0x7F348CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348CA4;
        }
    }

label_7F348C9C:
    ctx->pc = 0x7F348C9Cu;
    ctx->downcount -= 2;
    // 7F348C9C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F348CA0:
    ctx->pc = 0x7F348CA0u;
    // 7F348CA0: bl      0x7F3487A8
    {
            ctx->lr = 0x7F348CA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3487A8u;
                return;
            }
            goto label_7F3487A8;
    }

label_7F348CA4:
    ctx->pc = 0x7F348CA4u;
    ctx->downcount -= 10;
    // 7F348CA4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F348CA8:
    ctx->pc = 0x7F348CA8u;
    // 7F348CA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F348CAC:
    ctx->pc = 0x7F348CACu;
    // 7F348CAC: lwz     r0, -2872(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2872);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348CB0:
    ctx->pc = 0x7F348CB0u;
    // 7F348CB0: addi    r4, r3, -2864
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2864);

label_7F348CB4:
    ctx->pc = 0x7F348CB4u;
    // 7F348CB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348CB8:
    ctx->pc = 0x7F348CB8u;
    // 7F348CB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F348CBC:
    ctx->pc = 0x7F348CBCu;
    // 7F348CBC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F348CC0:
    ctx->pc = 0x7F348CC0u;
    // 7F348CC0: cmpwi   r0, 0
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

label_7F348CC4:
    ctx->pc = 0x7F348CC4u;
    // 7F348CC4: bc    4, 1, 0x7F348CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348CD4;
        }
    }

label_7F348CC8:
    loop_7F348CC8(ctx);
    if (ctx->pc == 0x7F348CD4u) goto label_7F348CD4;
    return;
label_7F348CCC:
    // 7F348CCC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F348CD0:
    // 7F348CD0: bc    16, 0, 0x7F348CC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348CC8u;
                return;
            }
            goto label_7F348CC8;
        }
    }

label_7F348CD4:
    ctx->pc = 0x7F348CD4u;
    ctx->downcount -= 21;
    // 7F348CD4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F348CD8:
    ctx->pc = 0x7F348CD8u;
    // 7F348CD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F348CDC:
    ctx->pc = 0x7F348CDCu;
    // 7F348CDC: stw     r0, -2872(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2872);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348CE0:
    ctx->pc = 0x7F348CE0u;
    // 7F348CE0: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F348CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F348CE0u);
        if (ctx->exception) return;
    }

label_7F348CE4:
    ctx->pc = 0x7F348CE4u;
    // 7F348CE4: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F348CE8:
    ctx->pc = 0x7F348CE8u;
    // 7F348CE8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F348CEC:
    ctx->pc = 0x7F348CECu;
    // 7F348CEC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348CF0:
    ctx->pc = 0x7F348CF0u;
    // 7F348CF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348CF4:
    ctx->pc = 0x7F348CF4u;
    // 7F348CF4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F348CF8:
    ctx->pc = 0x7F348CF8u;
    // 7F348CF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348CFC:
    ctx->pc = 0x7F348CFCu;
    ctx->downcount -= 3;
    // 7F348CFC: lwz     r0, 300(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348D00:
    ctx->pc = 0x7F348D00u;
    // 7F348D00: cmpwi   r0, 1
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

label_7F348D04:
    ctx->pc = 0x7F348D04u;
    // 7F348D04: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348D08:
    ctx->pc = 0x7F348D08u;
    ctx->downcount -= 10;
    // 7F348D08: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348D0C:
    ctx->pc = 0x7F348D0Cu;
    // 7F348D0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F348D10:
    ctx->pc = 0x7F348D10u;
    // 7F348D10: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F348D14:
    ctx->pc = 0x7F348D14u;
    // 7F348D14: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F348D18:
    ctx->pc = 0x7F348D18u;
    // 7F348D18: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F348D1C:
    ctx->pc = 0x7F348D1Cu;
    // 7F348D1C: and   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[4];
    }

label_7F348D20:
    ctx->pc = 0x7F348D20u;
    // 7F348D20: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F348D24:
    ctx->pc = 0x7F348D24u;
    // 7F348D24: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F348D28:
    ctx->pc = 0x7F348D28u;
    // 7F348D28: or.   r0, r4, r0
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

label_7F348D2C:
    ctx->pc = 0x7F348D2Cu;
    // 7F348D2C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348D30:
    ctx->pc = 0x7F348D30u;
    ctx->downcount -= 9;
    // 7F348D30: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348D34:
    ctx->pc = 0x7F348D34u;
    // 7F348D34: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F348D38:
    ctx->pc = 0x7F348D38u;
    // 7F348D38: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348D3C:
    ctx->pc = 0x7F348D3Cu;
    // 7F348D3C: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F348D40:
    ctx->pc = 0x7F348D40u;
    // 7F348D40: and   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[4];
    }

label_7F348D44:
    ctx->pc = 0x7F348D44u;
    // 7F348D44: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F348D48:
    ctx->pc = 0x7F348D48u;
    // 7F348D48: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F348D4C:
    ctx->pc = 0x7F348D4Cu;
    // 7F348D4C: or.   r0, r3, r0
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

label_7F348D50:
    ctx->pc = 0x7F348D50u;
    // 7F348D50: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348D54:
    ctx->pc = 0x7F348D54u;
    ctx->downcount -= 10;
    // 7F348D54: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F348D58:
    ctx->pc = 0x7F348D58u;
    // 7F348D58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F348D5C:
    ctx->pc = 0x7F348D5Cu;
    // 7F348D5C: addi    r7, r4, -2872
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-2872);

label_7F348D60:
    ctx->pc = 0x7F348D60u;
    // 7F348D60: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F348D64:
    ctx->pc = 0x7F348D64u;
    // 7F348D64: addi    r3, r3, -2864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2864);

label_7F348D68:
    ctx->pc = 0x7F348D68u;
    // 7F348D68: rlwinm r4, r6, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F348D6C:
    ctx->pc = 0x7F348D6Cu;
    // 7F348D6C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F348D70:
    ctx->pc = 0x7F348D70u;
    // 7F348D70: stwx    r5, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F348D74:
    ctx->pc = 0x7F348D74u;
    // 7F348D74: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348D78:
    ctx->pc = 0x7F348D78u;
    // 7F348D78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348D7C:
    ctx->pc = 0x7F348D7Cu;
    ctx->downcount -= 21;
    // 7F348D7C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348D80:
    ctx->pc = 0x7F348D80u;
    // 7F348D80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F348D84:
    ctx->pc = 0x7F348D84u;
    // 7F348D84: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F348D88:
    ctx->pc = 0x7F348D88u;
    // 7F348D88: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348D8C:
    ctx->pc = 0x7F348D8Cu;
    // 7F348D8C: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F348D90:
    ctx->pc = 0x7F348D90u;
    // 7F348D90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348D94:
    ctx->pc = 0x7F348D94u;
    // 7F348D94: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F348D98:
    ctx->pc = 0x7F348D98u;
    // 7F348D98: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F348D9C:
    ctx->pc = 0x7F348D9Cu;
    // 7F348D9C: lwz     r0, -2868(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2868);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348DA0:
    ctx->pc = 0x7F348DA0u;
    // 7F348DA0: cmpwi   r0, 10
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

label_7F348DA4:
    ctx->pc = 0x7F348DA4u;
    // 7F348DA4: bc    12, 0, 0x7F348DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348DB0;
        }
    }

label_7F348DA8:
    ctx->pc = 0x7F348DA8u;
    ctx->downcount -= 2;
    // 7F348DA8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348DAC:
    ctx->pc = 0x7F348DACu;
    // 7F348DAC: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348DB0:
    ctx->pc = 0x7F348DB0u;
    ctx->downcount -= 3;
    // 7F348DB0: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F348DB4:
    ctx->pc = 0x7F348DB4u;
    // 7F348DB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F348DB8:
    ctx->pc = 0x7F348DB8u;
    // 7F348DB8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F348DBCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F348DBC:
    ctx->pc = 0x7F348DBCu;
    ctx->downcount -= 2;
    // 7F348DBC: cmpwi   r3, 0
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

label_7F348DC0:
    ctx->pc = 0x7F348DC0u;
    // 7F348DC0: bc    12, 2, 0x7F348DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348DD8;
        }
    }

label_7F348DC4:
    ctx->pc = 0x7F348DC4u;
    ctx->downcount -= 2;
    // 7F348DC4: li      r4, 108
    ctx->gpr[4] = (u32)(s32)(108);

label_7F348DC8:
    ctx->pc = 0x7F348DC8u;
    // 7F348DC8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F348DCCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F348DCC:
    ctx->pc = 0x7F348DCCu;
    ctx->downcount -= 1;
    // 7F348DCC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F348DD0u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F348DD0:
    ctx->pc = 0x7F348DD0u;
    ctx->downcount -= 2;
    // 7F348DD0: stw     r3, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348DD4:
    ctx->pc = 0x7F348DD4u;
    // 7F348DD4: b       0x7F348DE0
    {
            goto label_7F348DE0;
    }

label_7F348DD8:
    ctx->pc = 0x7F348DD8u;
    ctx->downcount -= 2;
    // 7F348DD8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348DDC:
    ctx->pc = 0x7F348DDCu;
    // 7F348DDC: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348DE0:
    ctx->pc = 0x7F348DE0u;
    ctx->downcount -= 2;
    // 7F348DE0: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F348DE4:
    ctx->pc = 0x7F348DE4u;
    // 7F348DE4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F348DE8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F348DE8:
    ctx->pc = 0x7F348DE8u;
    ctx->downcount -= 2;
    // 7F348DE8: cmplwi  r3, 0x0000
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

label_7F348DEC:
    ctx->pc = 0x7F348DECu;
    // 7F348DEC: bc    12, 2, 0x7F348DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348DF8;
        }
    }

label_7F348DF0:
    ctx->pc = 0x7F348DF0u;
    ctx->downcount -= 1;
    // 7F348DF0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F348DF4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F348DF4:
    ctx->pc = 0x7F348DF4u;
    ctx->downcount -= 1;
    // 7F348DF4: stw     r3, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348DF8:
    ctx->pc = 0x7F348DF8u;
    ctx->downcount -= 2;
    // 7F348DF8: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F348DFC:
    ctx->pc = 0x7F348DFCu;
    // 7F348DFC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F348E00u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F348E00:
    ctx->pc = 0x7F348E00u;
    ctx->downcount -= 2;
    // 7F348E00: cmplwi  r3, 0x0000
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

label_7F348E04:
    ctx->pc = 0x7F348E04u;
    // 7F348E04: bc    12, 2, 0x7F348E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348E58;
        }
    }

label_7F348E08:
    ctx->pc = 0x7F348E08u;
    ctx->downcount -= 1;
    // 7F348E08: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F348E0Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F348E0C:
    ctx->pc = 0x7F348E0Cu;
    ctx->downcount -= 2;
    // 7F348E0C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F348E10:
    ctx->pc = 0x7F348E10u;
    // 7F348E10: bl      0x7F3C8470
    {
            ctx->lr = 0x7F348E14u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F348E14:
    ctx->pc = 0x7F348E14u;
    ctx->downcount -= 1;
    // 7F348E14: bl      0x7F3C8480
    {
            ctx->lr = 0x7F348E18u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F348E18:
    ctx->pc = 0x7F348E18u;
    ctx->downcount -= 4;
    // 7F348E18: stw     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348E1C:
    ctx->pc = 0x7F348E1Cu;
    // 7F348E1C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348E20:
    ctx->pc = 0x7F348E20u;
    // 7F348E20: cmplwi  r3, 0x0000
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

label_7F348E24:
    ctx->pc = 0x7F348E24u;
    // 7F348E24: bc    4, 2, 0x7F348E30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348E30;
        }
    }

label_7F348E28:
    ctx->pc = 0x7F348E28u;
    ctx->downcount -= 2;
    // 7F348E28: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348E2C:
    ctx->pc = 0x7F348E2Cu;
    // 7F348E2C: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348E30:
    ctx->pc = 0x7F348E30u;
    ctx->downcount -= 3;
    // 7F348E30: lwz     r0, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348E34:
    ctx->pc = 0x7F348E34u;
    // 7F348E34: cmpwi   r0, 0
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

label_7F348E38:
    ctx->pc = 0x7F348E38u;
    // 7F348E38: bc    4, 2, 0x7F348E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348E60;
        }
    }

label_7F348E3C:
    ctx->pc = 0x7F348E3Cu;
    ctx->downcount -= 3;
    // 7F348E3C: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F348E40:
    ctx->pc = 0x7F348E40u;
    // 7F348E40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348E44:
    ctx->pc = 0x7F348E44u;
    // 7F348E44: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F348E48u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F348E48:
    ctx->pc = 0x7F348E48u;
    ctx->downcount -= 3;
    // 7F348E48: stw     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348E4C:
    ctx->pc = 0x7F348E4Cu;
    // 7F348E4C: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348E50:
    ctx->pc = 0x7F348E50u;
    // 7F348E50: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F348E54u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F348E54:
    ctx->pc = 0x7F348E54u;
    ctx->downcount -= 1;
    // 7F348E54: b       0x7F348E60
    {
            goto label_7F348E60;
    }

label_7F348E58:
    ctx->pc = 0x7F348E58u;
    ctx->downcount -= 2;
    // 7F348E58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348E5C:
    ctx->pc = 0x7F348E5Cu;
    // 7F348E5C: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348E60:
    ctx->pc = 0x7F348E60u;
    ctx->downcount -= 2;
    // 7F348E60: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F348E64:
    ctx->pc = 0x7F348E64u;
    // 7F348E64: bl      0x7F3C664C
    {
            ctx->lr = 0x7F348E68u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F348E68:
    ctx->pc = 0x7F348E68u;
    ctx->downcount -= 2;
    // 7F348E68: cmplwi  r3, 0x0000
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

label_7F348E6C:
    ctx->pc = 0x7F348E6Cu;
    // 7F348E6C: bc    12, 2, 0x7F348EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348EC0;
        }
    }

label_7F348E70:
    ctx->pc = 0x7F348E70u;
    ctx->downcount -= 1;
    // 7F348E70: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F348E74u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F348E74:
    ctx->pc = 0x7F348E74u;
    ctx->downcount -= 2;
    // 7F348E74: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F348E78:
    ctx->pc = 0x7F348E78u;
    // 7F348E78: bl      0x7F3C8470
    {
            ctx->lr = 0x7F348E7Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F348E7C:
    ctx->pc = 0x7F348E7Cu;
    ctx->downcount -= 1;
    // 7F348E7C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F348E80u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F348E80:
    ctx->pc = 0x7F348E80u;
    ctx->downcount -= 4;
    // 7F348E80: stw     r3, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348E84:
    ctx->pc = 0x7F348E84u;
    // 7F348E84: lwz     r3, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348E88:
    ctx->pc = 0x7F348E88u;
    // 7F348E88: cmplwi  r3, 0x0000
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

label_7F348E8C:
    ctx->pc = 0x7F348E8Cu;
    // 7F348E8C: bc    4, 2, 0x7F348E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348E98;
        }
    }

label_7F348E90:
    ctx->pc = 0x7F348E90u;
    ctx->downcount -= 2;
    // 7F348E90: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348E94:
    ctx->pc = 0x7F348E94u;
    // 7F348E94: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348E98:
    ctx->pc = 0x7F348E98u;
    ctx->downcount -= 3;
    // 7F348E98: lwz     r0, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348E9C:
    ctx->pc = 0x7F348E9Cu;
    // 7F348E9C: cmpwi   r0, 1
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

label_7F348EA0:
    ctx->pc = 0x7F348EA0u;
    // 7F348EA0: bc    4, 2, 0x7F348EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F348EC8;
        }
    }

label_7F348EA4:
    ctx->pc = 0x7F348EA4u;
    ctx->downcount -= 3;
    // 7F348EA4: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F348EA8:
    ctx->pc = 0x7F348EA8u;
    // 7F348EA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F348EAC:
    ctx->pc = 0x7F348EACu;
    // 7F348EAC: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F348EB0u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F348EB0:
    ctx->pc = 0x7F348EB0u;
    ctx->downcount -= 3;
    // 7F348EB0: stw     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348EB4:
    ctx->pc = 0x7F348EB4u;
    // 7F348EB4: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348EB8:
    ctx->pc = 0x7F348EB8u;
    // 7F348EB8: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F348EBCu;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F348EBC:
    ctx->pc = 0x7F348EBCu;
    ctx->downcount -= 1;
    // 7F348EBC: b       0x7F348EC8
    {
            goto label_7F348EC8;
    }

label_7F348EC0:
    ctx->pc = 0x7F348EC0u;
    ctx->downcount -= 2;
    // 7F348EC0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F348EC4:
    ctx->pc = 0x7F348EC4u;
    // 7F348EC4: b       0x7F348F84
    {
            goto label_7F348F84;
    }

label_7F348EC8:
    ctx->pc = 0x7F348EC8u;
    ctx->downcount -= 2;
    // 7F348EC8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F348ECC:
    ctx->pc = 0x7F348ECCu;
    // 7F348ECC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F348ED0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F348ED0:
    ctx->pc = 0x7F348ED0u;
    ctx->downcount -= 2;
    // 7F348ED0: cmplwi  r3, 0x0000
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

label_7F348ED4:
    ctx->pc = 0x7F348ED4u;
    // 7F348ED4: bc    12, 2, 0x7F348F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348F04;
        }
    }

label_7F348ED8:
    ctx->pc = 0x7F348ED8u;
    ctx->downcount -= 1;
    // 7F348ED8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F348EDCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F348EDC:
    ctx->pc = 0x7F348EDCu;
    ctx->downcount -= 2;
    // 7F348EDC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F348EE0:
    ctx->pc = 0x7F348EE0u;
    // 7F348EE0: bl      0x7F3C6780
    {
            ctx->lr = 0x7F348EE4u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F348EE4:
    ctx->pc = 0x7F348EE4u;
    ctx->downcount -= 4;
    // 7F348EE4: lwz     r4, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F348EE8:
    ctx->pc = 0x7F348EE8u;
    // 7F348EE8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F348EEC:
    ctx->pc = 0x7F348EECu;
    // 7F348EEC: addi    r4, r4, 52
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(52);

label_7F348EF0:
    ctx->pc = 0x7F348EF0u;
    // 7F348EF0: bl      0x7F349324
    {
            ctx->lr = 0x7F348EF4u;
            goto label_7F349324;
    }

label_7F348EF4:
    ctx->pc = 0x7F348EF4u;
    ctx->downcount -= 4;
    // 7F348EF4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F348EF8:
    ctx->pc = 0x7F348EF8u;
    // 7F348EF8: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F348EFC:
    ctx->pc = 0x7F348EFCu;
    // 7F348EFC: lfs     f0, -25556(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F348EFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348F00:
    ctx->pc = 0x7F348F00u;
    // 7F348F00: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F348F00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348F04:
    ctx->pc = 0x7F348F04u;
    ctx->downcount -= 3;
    // 7F348F04: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F348F08:
    ctx->pc = 0x7F348F08u;
    // 7F348F08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F348F0C:
    ctx->pc = 0x7F348F0Cu;
    // 7F348F0C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F348F10u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F348F10:
    ctx->pc = 0x7F348F10u;
    ctx->downcount -= 3;
    // 7F348F10: stw     r3, 296(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348F14:
    ctx->pc = 0x7F348F14u;
    // 7F348F14: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F348F18:
    ctx->pc = 0x7F348F18u;
    // 7F348F18: bl      0x7F3C664C
    {
            ctx->lr = 0x7F348F1Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F348F1C:
    ctx->pc = 0x7F348F1Cu;
    ctx->downcount -= 2;
    // 7F348F1C: cmplwi  r3, 0x0000
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

label_7F348F20:
    ctx->pc = 0x7F348F20u;
    // 7F348F20: bc    12, 2, 0x7F348F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F348F40;
        }
    }

label_7F348F24:
    ctx->pc = 0x7F348F24u;
    ctx->downcount -= 5;
    // 7F348F24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F348F28:
    ctx->pc = 0x7F348F28u;
    // 7F348F28: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_7F348F2C:
    ctx->pc = 0x7F348F2Cu;
    // 7F348F2C: stw     r0, 348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348F30:
    ctx->pc = 0x7F348F30u;
    // 7F348F30: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F348F34:
    ctx->pc = 0x7F348F34u;
    // 7F348F34: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F348F38u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F348F38:
    ctx->pc = 0x7F348F38u;
    ctx->downcount -= 1;
    // 7F348F38: bl      0x7F329F4C
    {
            ctx->lr = 0x7F348F3Cu;
            ctx->pc = 0x7F329F4Cu;
            return;
    }

label_7F348F3C:
    ctx->pc = 0x7F348F3Cu;
    ctx->downcount -= 1;
    // 7F348F3C: stw     r3, 340(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F348F40:
    ctx->pc = 0x7F348F40u;
    ctx->downcount -= 3;
    // 7F348F40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F348F44:
    ctx->pc = 0x7F348F44u;
    // 7F348F44: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F348F48:
    ctx->pc = 0x7F348F48u;
    // 7F348F48: bl      0x7F348F98
    {
            ctx->lr = 0x7F348F4Cu;
            goto label_7F348F98;
    }

label_7F348F4C:
    ctx->pc = 0x7F348F4Cu;
    ctx->downcount -= 14;
    // 7F348F4C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F348F50:
    ctx->pc = 0x7F348F50u;
    // 7F348F50: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F348F54:
    ctx->pc = 0x7F348F54u;
    // 7F348F54: stw     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348F58:
    ctx->pc = 0x7F348F58u;
    // 7F348F58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F348F5C:
    ctx->pc = 0x7F348F5Cu;
    // 7F348F5C: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F348F60:
    ctx->pc = 0x7F348F60u;
    // 7F348F60: addi    r5, r3, -2868
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2868);

label_7F348F64:
    ctx->pc = 0x7F348F64u;
    // 7F348F64: stw     r30, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F348F68:
    ctx->pc = 0x7F348F68u;
    // 7F348F68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F348F6C:
    ctx->pc = 0x7F348F6Cu;
    // 7F348F6C: stw     r31, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F348F70:
    ctx->pc = 0x7F348F70u;
    // 7F348F70: stw     r4, 292(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F348F74:
    ctx->pc = 0x7F348F74u;
    // 7F348F74: stw     r0, 304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348F78:
    ctx->pc = 0x7F348F78u;
    // 7F348F78: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F348F7C:
    ctx->pc = 0x7F348F7Cu;
    // 7F348F7C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F348F80:
    ctx->pc = 0x7F348F80u;
    // 7F348F80: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348F84:
    ctx->pc = 0x7F348F84u;
    ctx->downcount -= 16;
    // 7F348F84: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F348F88:
    ctx->pc = 0x7F348F88u;
    // 7F348F88: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348F8C:
    ctx->pc = 0x7F348F8Cu;
    // 7F348F8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F348F90:
    ctx->pc = 0x7F348F90u;
    // 7F348F90: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F348F94:
    ctx->pc = 0x7F348F94u;
    // 7F348F94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F348F98:
    ctx->pc = 0x7F348F98u;
    ctx->downcount -= 69;
    // 7F348F98: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F348F9C:
    ctx->pc = 0x7F348F9Cu;
    // 7F348F9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F348FA0:
    ctx->pc = 0x7F348FA0u;
    // 7F348FA0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F348FA4:
    ctx->pc = 0x7F348FA4u;
    // 7F348FA4: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348FA8:
    ctx->pc = 0x7F348FA8u;
    // 7F348FA8: addi    r8, r5, -25412
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-25412);

label_7F348FAC:
    ctx->pc = 0x7F348FACu;
    // 7F348FAC: stmw     r29, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F348FB0:
    ctx->pc = 0x7F348FB0u;
    // 7F348FB0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F348FB4:
    ctx->pc = 0x7F348FB4u;
    // 7F348FB4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F348FB8:
    ctx->pc = 0x7F348FB8u;
    // 7F348FB8: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F348FBC:
    ctx->pc = 0x7F348FBCu;
    // 7F348FBC: addi    r31, r29, 64
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(64);

label_7F348FC0:
    ctx->pc = 0x7F348FC0u;
    // 7F348FC0: lwz     r12, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F348FC4:
    ctx->pc = 0x7F348FC4u;
    // 7F348FC4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F348FC8:
    ctx->pc = 0x7F348FC8u;
    // 7F348FC8: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F348FCC:
    ctx->pc = 0x7F348FCCu;
    // 7F348FCC: addi    r7, r3, -25396
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-25396);

label_7F348FD0:
    ctx->pc = 0x7F348FD0u;
    // 7F348FD0: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F348FD4:
    ctx->pc = 0x7F348FD4u;
    // 7F348FD4: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F348FD8:
    ctx->pc = 0x7F348FD8u;
    // 7F348FD8: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F348FDC:
    ctx->pc = 0x7F348FDCu;
    // 7F348FDC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F348FE0:
    ctx->pc = 0x7F348FE0u;
    // 7F348FE0: lfs     f0, 36(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F348FE0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348FE4:
    ctx->pc = 0x7F348FE4u;
    // 7F348FE4: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F348FE8:
    ctx->pc = 0x7F348FE8u;
    // 7F348FE8: lfs     f1, 40(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F348FE8u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F348FEC:
    ctx->pc = 0x7F348FECu;
    // 7F348FEC: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F348FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F348FF0:
    ctx->pc = 0x7F348FF0u;
    // 7F348FF0: lwz     r11, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F348FF4:
    ctx->pc = 0x7F348FF4u;
    // 7F348FF4: lfs     f0, 44(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F348FF4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F348FF8:
    ctx->pc = 0x7F348FF8u;
    // 7F348FF8: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F348FFC:
    ctx->pc = 0x7F348FFCu;
    // 7F348FFC: lwz     r10, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F349000:
    ctx->pc = 0x7F349000u;
    // 7F349000: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349004:
    ctx->pc = 0x7F349004u;
    // 7F349004: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349008:
    ctx->pc = 0x7F349008u;
    // 7F349008: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34900C:
    ctx->pc = 0x7F34900Cu;
    // 7F34900C: lwz     r9, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F349010:
    ctx->pc = 0x7F349010u;
    // 7F349010: lwz     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F349014:
    ctx->pc = 0x7F349014u;
    // 7F349014: lwz     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349018:
    ctx->pc = 0x7F349018u;
    // 7F349018: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34901C:
    ctx->pc = 0x7F34901Cu;
    // 7F34901C: lwz     r7, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F349020:
    ctx->pc = 0x7F349020u;
    // 7F349020: stw     r10, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F349024:
    ctx->pc = 0x7F349024u;
    // 7F349024: stw     r9, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F349028:
    ctx->pc = 0x7F349028u;
    // 7F349028: stw     r8, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F34902C:
    ctx->pc = 0x7F34902Cu;
    // 7F34902C: stw     r11, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F349030:
    ctx->pc = 0x7F349030u;
    // 7F349030: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F349034:
    ctx->pc = 0x7F349034u;
    // 7F349034: lfs     f2, 24(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F349034u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F349038:
    ctx->pc = 0x7F349038u;
    // 7F349038: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34903C:
    ctx->pc = 0x7F34903Cu;
    // 7F34903C: lfs     f1, 28(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F34903Cu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349040:
    ctx->pc = 0x7F349040u;
    // 7F349040: lfs     f0, 32(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F349040u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349044:
    ctx->pc = 0x7F349044u;
    // 7F349044: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349048:
    ctx->pc = 0x7F349048u;
    // 7F349048: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34904C:
    ctx->pc = 0x7F34904Cu;
    // 7F34904C: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34904Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349050:
    ctx->pc = 0x7F349050u;
    // 7F349050: lwz     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349054:
    ctx->pc = 0x7F349054u;
    // 7F349054: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349058:
    ctx->pc = 0x7F349058u;
    // 7F349058: lwz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34905C:
    ctx->pc = 0x7F34905Cu;
    // 7F34905C: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349060:
    ctx->pc = 0x7F349060u;
    // 7F349060: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F349064:
    ctx->pc = 0x7F349064u;
    // 7F349064: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349068:
    ctx->pc = 0x7F349068u;
    // 7F349068: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34906C:
    ctx->pc = 0x7F34906Cu;
    // 7F34906C: stw     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F349070:
    ctx->pc = 0x7F349070u;
    // 7F349070: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349074:
    ctx->pc = 0x7F349074u;
    // 7F349074: stw     r11, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F349078:
    ctx->pc = 0x7F349078u;
    // 7F349078: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F34907C:
    ctx->pc = 0x7F34907Cu;
    // 7F34907C: stw     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F349080:
    ctx->pc = 0x7F349080u;
    // 7F349080: bl      0x7F114508
    {
            ctx->lr = 0x7F349084u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F349084:
    ctx->pc = 0x7F349084u;
    ctx->downcount -= 5;
    // 7F349084: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349088:
    ctx->pc = 0x7F349088u;
    // 7F349088: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F34908C:
    ctx->pc = 0x7F34908Cu;
    // 7F34908C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349090:
    ctx->pc = 0x7F349090u;
    // 7F349090: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F349094:
    ctx->pc = 0x7F349094u;
    // 7F349094: bl      0x7F114508
    {
            ctx->lr = 0x7F349098u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F349098:
    ctx->pc = 0x7F349098u;
    ctx->downcount -= 4;
    // 7F349098: lfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34909C:
    ctx->pc = 0x7F34909Cu;
    // 7F34909C: lfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34909Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3490A0:
    ctx->pc = 0x7F3490A0u;
    // 7F3490A0: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3490A0u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F3490A4:
    ctx->pc = 0x7F3490A4u;
    // 7F3490A4: bl      0x7F349304
    {
            ctx->lr = 0x7F3490A8u;
            goto label_7F349304;
    }

label_7F3490A8:
    ctx->pc = 0x7F3490A8u;
    ctx->downcount -= 8;
    // 7F3490A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3490AC:
    ctx->pc = 0x7F3490ACu;
    // 7F3490AC: lfs     f2, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3490B0:
    ctx->pc = 0x7F3490B0u;
    // 7F3490B0: lfs     f3, -25452(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3490B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3490B4:
    ctx->pc = 0x7F3490B4u;
    // 7F3490B4: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3490B8:
    ctx->pc = 0x7F3490B8u;
    // 7F3490B8: fmuls   f3, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3490B8u)) return;
    ppc_fmuls(ctx, 3, 3, 1);

label_7F3490BC:
    ctx->pc = 0x7F3490BCu;
    // 7F3490BC: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3490BCu)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_7F3490C0:
    ctx->pc = 0x7F3490C0u;
    // 7F3490C0: stfs     f3, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3490C4:
    ctx->pc = 0x7F3490C4u;
    // 7F3490C4: bl      0x7F349304
    {
            ctx->lr = 0x7F3490C8u;
            goto label_7F349304;
    }

label_7F3490C8:
    ctx->pc = 0x7F3490C8u;
    ctx->downcount -= 8;
    // 7F3490C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3490CC:
    ctx->pc = 0x7F3490CCu;
    // 7F3490CC: lfs     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3490D0:
    ctx->pc = 0x7F3490D0u;
    // 7F3490D0: lfs     f3, -25452(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3490D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3490D4:
    ctx->pc = 0x7F3490D4u;
    // 7F3490D4: lfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3490D8:
    ctx->pc = 0x7F3490D8u;
    // 7F3490D8: fmuls   f3, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3490D8u)) return;
    ppc_fmuls(ctx, 3, 3, 1);

label_7F3490DC:
    ctx->pc = 0x7F3490DCu;
    // 7F3490DC: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3490DCu)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_7F3490E0:
    ctx->pc = 0x7F3490E0u;
    // 7F3490E0: stfs     f3, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3490E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3490E4:
    ctx->pc = 0x7F3490E4u;
    // 7F3490E4: bl      0x7F349304
    {
            ctx->lr = 0x7F3490E8u;
            goto label_7F349304;
    }

label_7F3490E8:
    ctx->pc = 0x7F3490E8u;
    ctx->downcount -= 9;
    // 7F3490E8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3490EC:
    ctx->pc = 0x7F3490ECu;
    // 7F3490EC: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F3490F0:
    ctx->pc = 0x7F3490F0u;
    // 7F3490F0: addi    r5, r4, -25452
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25452);

label_7F3490F4:
    ctx->pc = 0x7F3490F4u;
    // 7F3490F4: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3490F8:
    ctx->pc = 0x7F3490F8u;
    // 7F3490F8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3490F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3490FC:
    ctx->pc = 0x7F3490FCu;
    // 7F3490FC: addi    r5, r1, 104
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(104);

label_7F349100:
    ctx->pc = 0x7F349100u;
    // 7F349100: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F349100u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F349104:
    ctx->pc = 0x7F349104u;
    // 7F349104: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349108:
    ctx->pc = 0x7F349108u;
    // 7F349108: bl      0x800261B4
    {
            ctx->lr = 0x7F34910Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F34910C:
    ctx->pc = 0x7F34910Cu;
    ctx->downcount -= 5;
    // 7F34910C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F349110:
    ctx->pc = 0x7F349110u;
    // 7F349110: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F349114:
    ctx->pc = 0x7F349114u;
    // 7F349114: lfs     f1, -25452(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F349114u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349118:
    ctx->pc = 0x7F349118u;
    // 7F349118: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34911C:
    ctx->pc = 0x7F34911Cu;
    // 7F34911C: bl      0x800261FC
    {
            ctx->lr = 0x7F349120u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F349120:
    ctx->pc = 0x7F349120u;
    ctx->downcount -= 23;
    // 7F349120: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349124:
    ctx->pc = 0x7F349124u;
    // 7F349124: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349128:
    ctx->pc = 0x7F349128u;
    // 7F349128: addi    r4, r3, -25452
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25452);

label_7F34912C:
    ctx->pc = 0x7F34912Cu;
    // 7F34912C: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F349130:
    ctx->pc = 0x7F349130u;
    // 7F349130: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349134:
    ctx->pc = 0x7F349134u;
    // 7F349134: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349138:
    ctx->pc = 0x7F349138u;
    // 7F349138: lfs     f0, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F349138u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34913C:
    ctx->pc = 0x7F34913Cu;
    // 7F34913C: lfs     f3, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34913Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F349140:
    ctx->pc = 0x7F349140u;
    // 7F349140: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F349140u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F349144:
    ctx->pc = 0x7F349144u;
    // 7F349144: lfs     f2, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F349148:
    ctx->pc = 0x7F349148u;
    // 7F349148: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F349148u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34914C:
    ctx->pc = 0x7F34914Cu;
    // 7F34914C: stfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34914Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349150:
    ctx->pc = 0x7F349150u;
    // 7F349150: lfs     f1, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F349150u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349154:
    ctx->pc = 0x7F349154u;
    // 7F349154: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F349154u)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F349158:
    ctx->pc = 0x7F349158u;
    // 7F349158: stfs     f1, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34915C:
    ctx->pc = 0x7F34915Cu;
    // 7F34915C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34915Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F349160:
    ctx->pc = 0x7F349160u;
    // 7F349160: lfs     f1, 56(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F349160u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349164:
    ctx->pc = 0x7F349164u;
    // 7F349164: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F349164u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F349168:
    ctx->pc = 0x7F349168u;
    // 7F349168: stfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34916C:
    ctx->pc = 0x7F34916Cu;
    // 7F34916C: stfs     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34916Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349170:
    ctx->pc = 0x7F349170u;
    // 7F349170: lwz     r4, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349174:
    ctx->pc = 0x7F349174u;
    // 7F349174: addi    r4, r4, 52
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(52);

label_7F349178:
    ctx->pc = 0x7F349178u;
    // 7F349178: bl      0x800261B4
    {
            ctx->lr = 0x7F34917Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F34917C:
    ctx->pc = 0x7F34917Cu;
    ctx->downcount -= 5;
    // 7F34917C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F349180:
    ctx->pc = 0x7F349180u;
    // 7F349180: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F349184:
    ctx->pc = 0x7F349184u;
    // 7F349184: lfs     f1, -25452(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F349184u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349188:
    ctx->pc = 0x7F349188u;
    // 7F349188: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34918C:
    ctx->pc = 0x7F34918Cu;
    // 7F34918C: bl      0x800261FC
    {
            ctx->lr = 0x7F349190u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F349190:
    ctx->pc = 0x7F349190u;
    ctx->downcount -= 9;
    // 7F349190: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F349194:
    ctx->pc = 0x7F349194u;
    // 7F349194: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F349198:
    ctx->pc = 0x7F349198u;
    // 7F349198: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F34919C:
    ctx->pc = 0x7F34919Cu;
    // 7F34919C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3491A0:
    ctx->pc = 0x7F3491A0u;
    // 7F3491A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3491A4:
    ctx->pc = 0x7F3491A4u;
    // 7F3491A4: addi    r4, r4, 4097
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4097);

label_7F3491A8:
    ctx->pc = 0x7F3491A8u;
    // 7F3491A8: addi    r7, r1, 120
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(120);

label_7F3491AC:
    ctx->pc = 0x7F3491ACu;
    // 7F3491AC: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3491B0:
    ctx->pc = 0x7F3491B0u;
    // 7F3491B0: bl      0x7F014788
    {
            ctx->lr = 0x7F3491B4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F3491B4:
    ctx->pc = 0x7F3491B4u;
    ctx->downcount -= 13;
    // 7F3491B4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3491B8:
    ctx->pc = 0x7F3491B8u;
    // 7F3491B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3491BC:
    ctx->pc = 0x7F3491BCu;
    // 7F3491BC: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3491C0:
    ctx->pc = 0x7F3491C0u;
    // 7F3491C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3491C4:
    ctx->pc = 0x7F3491C4u;
    // 7F3491C4: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3491C8:
    ctx->pc = 0x7F3491C8u;
    // 7F3491C8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F3491CC:
    ctx->pc = 0x7F3491CCu;
    // 7F3491CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3491D0:
    ctx->pc = 0x7F3491D0u;
    // 7F3491D0: addi    r4, r29, 256
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(256);

label_7F3491D4:
    ctx->pc = 0x7F3491D4u;
    // 7F3491D4: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3491D8:
    ctx->pc = 0x7F3491D8u;
    // 7F3491D8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3491DC:
    ctx->pc = 0x7F3491DCu;
    // 7F3491DC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3491E0:
    ctx->pc = 0x7F3491E0u;
    // 7F3491E0: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3491E4:
    ctx->pc = 0x7F3491E4u;
    // 7F3491E4: bl      0x7F014B78
    {
            ctx->lr = 0x7F3491E8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F3491E8:
    ctx->pc = 0x7F3491E8u;
    ctx->downcount -= 5;
    // 7F3491E8: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F3491EC:
    ctx->pc = 0x7F3491ECu;
    // 7F3491EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3491F0:
    ctx->pc = 0x7F3491F0u;
    // 7F3491F0: addi    r4, r4, -29444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29444);

label_7F3491F4:
    ctx->pc = 0x7F3491F4u;
    // 7F3491F4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3491F8:
    ctx->pc = 0x7F3491F8u;
    // 7F3491F8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F3491FCu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F3491FC:
    ctx->pc = 0x7F3491FCu;
    ctx->downcount -= 6;
    // 7F3491FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F349200:
    ctx->pc = 0x7F349200u;
    // 7F349200: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349204:
    ctx->pc = 0x7F349204u;
    // 7F349204: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F349208:
    ctx->pc = 0x7F349208u;
    // 7F349208: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F34920C:
    ctx->pc = 0x7F34920Cu;
    // 7F34920C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349210:
    ctx->pc = 0x7F349210u;
    // 7F349210: bl      0x7F014944
    {
            ctx->lr = 0x7F349214u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F349214:
    ctx->pc = 0x7F349214u;
    ctx->downcount -= 2;
    // 7F349214: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349218:
    ctx->pc = 0x7F349218u;
    // 7F349218: bl      0x7F0148A0
    {
            ctx->lr = 0x7F34921Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F34921C:
    ctx->pc = 0x7F34921Cu;
    ctx->downcount -= 69;
    // 7F34921C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F349220:
    ctx->pc = 0x7F349220u;
    // 7F349220: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349224:
    ctx->pc = 0x7F349224u;
    // 7F349224: addi    r5, r4, -25380
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25380);

label_7F349228:
    ctx->pc = 0x7F349228u;
    // 7F349228: lfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349228u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34922C:
    ctx->pc = 0x7F34922Cu;
    // 7F34922C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349230:
    ctx->pc = 0x7F349230u;
    // 7F349230: addi    r7, r3, -25364
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-25364);

label_7F349234:
    ctx->pc = 0x7F349234u;
    // 7F349234: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349238:
    ctx->pc = 0x7F349238u;
    // 7F349238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34923C:
    ctx->pc = 0x7F34923Cu;
    // 7F34923C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349240:
    ctx->pc = 0x7F349240u;
    // 7F349240: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349244:
    ctx->pc = 0x7F349244u;
    // 7F349244: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349248:
    ctx->pc = 0x7F349248u;
    // 7F349248: lfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34924C:
    ctx->pc = 0x7F34924Cu;
    // 7F34924C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349250:
    ctx->pc = 0x7F349250u;
    // 7F349250: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349254:
    ctx->pc = 0x7F349254u;
    // 7F349254: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349258:
    ctx->pc = 0x7F349258u;
    // 7F349258: lfs     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349258u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34925C:
    ctx->pc = 0x7F34925Cu;
    // 7F34925C: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349260:
    ctx->pc = 0x7F349260u;
    // 7F349260: lfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349264:
    ctx->pc = 0x7F349264u;
    // 7F349264: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349268:
    ctx->pc = 0x7F349268u;
    // 7F349268: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34926C:
    ctx->pc = 0x7F34926Cu;
    // 7F34926C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349270:
    ctx->pc = 0x7F349270u;
    // 7F349270: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349274:
    ctx->pc = 0x7F349274u;
    // 7F349274: stw     r4, 308(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349278:
    ctx->pc = 0x7F349278u;
    // 7F349278: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34927C:
    ctx->pc = 0x7F34927Cu;
    // 7F34927C: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34927Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349280:
    ctx->pc = 0x7F349280u;
    // 7F349280: stw     r0, 312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349284:
    ctx->pc = 0x7F349284u;
    // 7F349284: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349288:
    ctx->pc = 0x7F349288u;
    // 7F349288: stw     r4, 316(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34928C:
    ctx->pc = 0x7F34928Cu;
    // 7F34928C: stw     r0, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349290:
    ctx->pc = 0x7F349290u;
    // 7F349290: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349294:
    ctx->pc = 0x7F349294u;
    // 7F349294: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349298:
    ctx->pc = 0x7F349298u;
    // 7F349298: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34929C:
    ctx->pc = 0x7F34929Cu;
    // 7F34929C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3492A0:
    ctx->pc = 0x7F3492A0u;
    // 7F3492A0: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3492A4:
    ctx->pc = 0x7F3492A4u;
    // 7F3492A4: lfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3492A8:
    ctx->pc = 0x7F3492A8u;
    // 7F3492A8: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3492AC:
    ctx->pc = 0x7F3492ACu;
    // 7F3492AC: lfs     f2, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3492B0:
    ctx->pc = 0x7F3492B0u;
    // 7F3492B0: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3492B4:
    ctx->pc = 0x7F3492B4u;
    // 7F3492B4: lfs     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3492B8:
    ctx->pc = 0x7F3492B8u;
    // 7F3492B8: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3492BC:
    ctx->pc = 0x7F3492BCu;
    // 7F3492BC: lfs     f0, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3492C0:
    ctx->pc = 0x7F3492C0u;
    // 7F3492C0: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3492C4:
    ctx->pc = 0x7F3492C4u;
    // 7F3492C4: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3492C8:
    ctx->pc = 0x7F3492C8u;
    // 7F3492C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3492CC:
    ctx->pc = 0x7F3492CCu;
    // 7F3492CC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3492D0:
    ctx->pc = 0x7F3492D0u;
    // 7F3492D0: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3492D4:
    ctx->pc = 0x7F3492D4u;
    // 7F3492D4: stw     r4, 324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3492D8:
    ctx->pc = 0x7F3492D8u;
    // 7F3492D8: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3492DC:
    ctx->pc = 0x7F3492DCu;
    // 7F3492DC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3492DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3492E0:
    ctx->pc = 0x7F3492E0u;
    // 7F3492E0: stw     r0, 328(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3492E4:
    ctx->pc = 0x7F3492E4u;
    // 7F3492E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3492E8:
    ctx->pc = 0x7F3492E8u;
    // 7F3492E8: stw     r4, 332(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3492EC:
    ctx->pc = 0x7F3492ECu;
    // 7F3492EC: stw     r0, 336(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3492F0:
    ctx->pc = 0x7F3492F0u;
    // 7F3492F0: lmw     r29, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3492F4:
    ctx->pc = 0x7F3492F4u;
    // 7F3492F4: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3492F8:
    ctx->pc = 0x7F3492F8u;
    // 7F3492F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3492FC:
    ctx->pc = 0x7F3492FCu;
    // 7F3492FC: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F349300:
    ctx->pc = 0x7F349300u;
    // 7F349300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349304:
    ctx->pc = 0x7F349304u;
    ctx->downcount -= 8;
    // 7F349304: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349308:
    ctx->pc = 0x7F349308u;
    // 7F349308: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34930C:
    ctx->pc = 0x7F34930Cu;
    // 7F34930C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349310:
    ctx->pc = 0x7F349310u;
    // 7F349310: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F349314:
    ctx->pc = 0x7F349314u;
    // 7F349314: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349318:
    ctx->pc = 0x7F349318u;
    // 7F349318: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34931C:
    ctx->pc = 0x7F34931Cu;
    // 7F34931C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349320:
    ctx->pc = 0x7F349320u;
    // 7F349320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349324:
    ctx->pc = 0x7F349324u;
    ctx->downcount -= 17;
    // 7F349324: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349328:
    ctx->pc = 0x7F349328u;
    // 7F349328: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34932C:
    ctx->pc = 0x7F34932Cu;
    // 7F34932C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349330:
    ctx->pc = 0x7F349330u;
    // 7F349330: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349334:
    ctx->pc = 0x7F349334u;
    // 7F349334: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349338:
    ctx->pc = 0x7F349338u;
    // 7F349338: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34933C:
    ctx->pc = 0x7F34933Cu;
    // 7F34933C: bl      0x7F349378
    {
            ctx->lr = 0x7F349340u;
            goto label_7F349378;
    }

label_7F349340:
    ctx->pc = 0x7F349340u;
    ctx->downcount -= 3;
    // 7F349340: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F349344:
    ctx->pc = 0x7F349344u;
    // 7F349344: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F349348:
    ctx->pc = 0x7F349348u;
    // 7F349348: bl      0x7F349378
    {
            ctx->lr = 0x7F34934Cu;
            goto label_7F349378;
    }

label_7F34934C:
    ctx->pc = 0x7F34934Cu;
    ctx->downcount -= 3;
    // 7F34934C: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F349350:
    ctx->pc = 0x7F349350u;
    // 7F349350: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F349354:
    ctx->pc = 0x7F349354u;
    // 7F349354: bl      0x7F349378
    {
            ctx->lr = 0x7F349358u;
            goto label_7F349378;
    }

label_7F349358:
    ctx->pc = 0x7F349358u;
    ctx->downcount -= 3;
    // 7F349358: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F34935C:
    ctx->pc = 0x7F34935Cu;
    // 7F34935C: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F349360:
    ctx->pc = 0x7F349360u;
    // 7F349360: bl      0x7F349378
    {
            ctx->lr = 0x7F349364u;
            goto label_7F349378;
    }

label_7F349364:
    ctx->pc = 0x7F349364u;
    ctx->downcount -= 16;
    // 7F349364: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349368:
    ctx->pc = 0x7F349368u;
    // 7F349368: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34936C:
    ctx->pc = 0x7F34936Cu;
    // 7F34936C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349370:
    ctx->pc = 0x7F349370u;
    // 7F349370: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349374:
    ctx->pc = 0x7F349374u;
    // 7F349374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349378:
    ctx->pc = 0x7F349378u;
    ctx->downcount -= 6;
    // 7F349378: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34937C:
    ctx->pc = 0x7F34937Cu;
    // 7F34937C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349380:
    ctx->pc = 0x7F349380u;
    // 7F349380: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349384:
    ctx->pc = 0x7F349384u;
    // 7F349384: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349388:
    ctx->pc = 0x7F349388u;
    // 7F349388: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34938C:
    ctx->pc = 0x7F34938Cu;
    // 7F34938C: bl      0x7F3493A8
    {
            ctx->lr = 0x7F349390u;
            goto label_7F3493A8;
    }

label_7F349390:
    ctx->pc = 0x7F349390u;
    ctx->downcount -= 7;
    // 7F349390: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F349390u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349394:
    ctx->pc = 0x7F349394u;
    // 7F349394: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349398:
    ctx->pc = 0x7F349398u;
    // 7F349398: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34939C:
    ctx->pc = 0x7F34939Cu;
    // 7F34939C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3493A0:
    ctx->pc = 0x7F3493A0u;
    // 7F3493A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3493A4:
    ctx->pc = 0x7F3493A4u;
    // 7F3493A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3493A8:
    ctx->pc = 0x7F3493A8u;
    ctx->downcount -= 4;
    // 7F3493A8: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F3493A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F3493A8u);
        if (ctx->exception) return;
    }

label_7F3493AC:
    ctx->pc = 0x7F3493ACu;
    // 7F3493AC: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F3493ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F3493ACu);
        if (ctx->exception) return;
    }

label_7F3493B0:
    ctx->pc = 0x7F3493B0u;
    // 7F3493B0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3493B0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F3493B4:
    ctx->pc = 0x7F3493B4u;
    // 7F3493B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3493B8:
    ctx->pc = 0x7F3493B8u;
    ctx->downcount -= 21;
    // 7F3493B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3493BC:
    ctx->pc = 0x7F3493BCu;
    // 7F3493BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3493C0:
    ctx->pc = 0x7F3493C0u;
    // 7F3493C0: li      r5, 448
    ctx->gpr[5] = (u32)(s32)(448);

label_7F3493C4:
    ctx->pc = 0x7F3493C4u;
    // 7F3493C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3493C8:
    ctx->pc = 0x7F3493C8u;
    // 7F3493C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3493CC:
    ctx->pc = 0x7F3493CCu;
    // 7F3493CC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3493D0:
    ctx->pc = 0x7F3493D0u;
    // 7F3493D0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3493D4:
    ctx->pc = 0x7F3493D4u;
    // 7F3493D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3493D8:
    ctx->pc = 0x7F3493D8u;
    // 7F3493D8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3493DC:
    ctx->pc = 0x7F3493DCu;
    // 7F3493DC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F3493E0:
    ctx->pc = 0x7F3493E0u;
    // 7F3493E0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3493E4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3493E4:
    ctx->pc = 0x7F3493E4u;
    ctx->downcount -= 2;
    // 7F3493E4: or.   r31, r3, r3
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

label_7F3493E8:
    ctx->pc = 0x7F3493E8u;
    // 7F3493E8: bc    12, 2, 0x7F349428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349428;
        }
    }

label_7F3493EC:
    ctx->pc = 0x7F3493ECu;
    ctx->downcount -= 5;
    // 7F3493EC: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F3493F0:
    ctx->pc = 0x7F3493F0u;
    // 7F3493F0: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F3493F4:
    ctx->pc = 0x7F3493F4u;
    // 7F3493F4: addi    r4, r4, -30820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30820);

label_7F3493F8:
    ctx->pc = 0x7F3493F8u;
    // 7F3493F8: addi    r5, r5, -31316
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31316);

label_7F3493FC:
    ctx->pc = 0x7F3493FCu;
    // 7F3493FC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F349400u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F349400:
    ctx->pc = 0x7F349400u;
    ctx->downcount -= 4;
    // 7F349400: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349404:
    ctx->pc = 0x7F349404u;
    // 7F349404: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F349408:
    ctx->pc = 0x7F349408u;
    // 7F349408: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34940C:
    ctx->pc = 0x7F34940Cu;
    // 7F34940C: bl      0x7F348D7C
    {
            ctx->lr = 0x7F349410u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F348D7Cu;
                return;
            }
            goto label_7F348D7C;
    }

label_7F349410:
    ctx->pc = 0x7F349410u;
    ctx->downcount -= 2;
    // 7F349410: cmpwi   r3, 0
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

label_7F349414:
    ctx->pc = 0x7F349414u;
    // 7F349414: bc    4, 0, 0x7F349428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349428;
        }
    }

label_7F349418:
    ctx->pc = 0x7F349418u;
    ctx->downcount -= 2;
    // 7F349418: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34941C:
    ctx->pc = 0x7F34941Cu;
    // 7F34941C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F349420u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F349420:
    ctx->pc = 0x7F349420u;
    ctx->downcount -= 2;
    // 7F349420: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F349424:
    ctx->pc = 0x7F349424u;
    // 7F349424: b       0x7F34942C
    {
            goto label_7F34942C;
    }

label_7F349428:
    ctx->pc = 0x7F349428u;
    ctx->downcount -= 1;
    // 7F349428: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34942C:
    ctx->pc = 0x7F34942Cu;
    ctx->downcount -= 16;
    // 7F34942C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349430:
    ctx->pc = 0x7F349430u;
    // 7F349430: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349434:
    ctx->pc = 0x7F349434u;
    // 7F349434: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349438:
    ctx->pc = 0x7F349438u;
    // 7F349438: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34943C:
    ctx->pc = 0x7F34943Cu;
    // 7F34943C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349440:
    ctx->pc = 0x7F349440u;
    ctx->downcount -= 19;
    // 7F349440: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349444:
    ctx->pc = 0x7F349444u;
    // 7F349444: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349448:
    ctx->pc = 0x7F349448u;
    // 7F349448: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34944C:
    ctx->pc = 0x7F34944Cu;
    // 7F34944C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349450:
    ctx->pc = 0x7F349450u;
    // 7F349450: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F349454:
    ctx->pc = 0x7F349454u;
    // 7F349454: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349458:
    ctx->pc = 0x7F349458u;
    // 7F349458: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F34945C:
    ctx->pc = 0x7F34945Cu;
    // 7F34945C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F349460:
    ctx->pc = 0x7F349460u;
    // 7F349460: bl      0x800261D8
    {
            ctx->lr = 0x7F349464u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F349464:
    ctx->pc = 0x7F349464u;
    ctx->downcount -= 3;
    // 7F349464: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F349468:
    ctx->pc = 0x7F349468u;
    // 7F349468: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34946C:
    ctx->pc = 0x7F34946Cu;
    // 7F34946C: bl      0x7F114F50
    {
            ctx->lr = 0x7F349470u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F349470:
    ctx->pc = 0x7F349470u;
    ctx->downcount -= 3;
    // 7F349470: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349474:
    ctx->pc = 0x7F349474u;
    // 7F349474: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349474u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F349478:
    ctx->pc = 0x7F349478u;
    // 7F349478: bl      0x7F0172FC
    {
            ctx->lr = 0x7F34947Cu;
            ctx->pc = 0x7F0172FCu;
            return;
    }

label_7F34947C:
    ctx->pc = 0x7F34947Cu;
    ctx->downcount -= 13;
    // 7F34947C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349480:
    ctx->pc = 0x7F349480u;
    // 7F349480: lfs     f0, -25340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F349480u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349484:
    ctx->pc = 0x7F349484u;
    // 7F349484: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F349484u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F349488:
    ctx->pc = 0x7F349488u;
    // 7F349488: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F349488u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F34948C:
    ctx->pc = 0x7F34948Cu;
    // 7F34948C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34948Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F349490:
    ctx->pc = 0x7F349490u;
    // 7F349490: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349494:
    ctx->pc = 0x7F349494u;
    // 7F349494: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349498:
    ctx->pc = 0x7F349498u;
    // 7F349498: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F349498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34949C:
    ctx->pc = 0x7F34949Cu;
    // 7F34949C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34949Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3494A0:
    ctx->pc = 0x7F3494A0u;
    // 7F3494A0: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3494A0u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F3494A4:
    ctx->pc = 0x7F3494A4u;
    // 7F3494A4: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3494A4u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_7F3494A8:
    ctx->pc = 0x7F3494A8u;
    // 7F3494A8: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3494A8u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F3494AC:
    ctx->pc = 0x7F3494ACu;
    // 7F3494AC: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F3494B0u;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F3494B0:
    ctx->pc = 0x7F3494B0u;
    ctx->downcount -= 3;
    // 7F3494B0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3494B0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3494B4:
    ctx->pc = 0x7F3494B4u;
    // 7F3494B4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3494B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3494B8:
    ctx->pc = 0x7F3494B8u;
    // 7F3494B8: bl      0x7F0172FC
    {
            ctx->lr = 0x7F3494BCu;
            ctx->pc = 0x7F0172FCu;
            return;
    }

label_7F3494BC:
    ctx->pc = 0x7F3494BCu;
    ctx->downcount -= 23;
    // 7F3494BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3494C0:
    ctx->pc = 0x7F3494C0u;
    // 7F3494C0: lfs     f0, -25340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3494C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3494C4:
    ctx->pc = 0x7F3494C4u;
    // 7F3494C4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3494C4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F3494C8:
    ctx->pc = 0x7F3494C8u;
    // 7F3494C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3494C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3494CC:
    ctx->pc = 0x7F3494CCu;
    // 7F3494CC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3494CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3494D0:
    ctx->pc = 0x7F3494D0u;
    // 7F3494D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3494D4:
    ctx->pc = 0x7F3494D4u;
    // 7F3494D4: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3494D8:
    ctx->pc = 0x7F3494D8u;
    // 7F3494D8: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3494DC:
    ctx->pc = 0x7F3494DCu;
    // 7F3494DC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3494E0:
    ctx->pc = 0x7F3494E0u;
    // 7F3494E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3494E4:
    ctx->pc = 0x7F3494E4u;
    // 7F3494E4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3494E8:
    ctx->pc = 0x7F3494E8u;
    // 7F3494E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3494EC:
    ctx->pc = 0x7F3494ECu;
    ctx->downcount -= 8;
    // 7F3494EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3494F0:
    ctx->pc = 0x7F3494F0u;
    // 7F3494F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3494F4:
    ctx->pc = 0x7F3494F4u;
    // 7F3494F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3494F8:
    ctx->pc = 0x7F3494F8u;
    // 7F3494F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3494FC:
    ctx->pc = 0x7F3494FCu;
    // 7F3494FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349500:
    ctx->pc = 0x7F349500u;
    // 7F349500: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349504:
    ctx->pc = 0x7F349504u;
    // 7F349504: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F349508:
    ctx->pc = 0x7F349508u;
    // 7F349508: bl      0x7F1F7CE4
    {
            ctx->lr = 0x7F34950Cu;
            ctx->pc = 0x7F1F7CE4u;
            return;
    }

label_7F34950C:
    ctx->pc = 0x7F34950Cu;
    ctx->downcount -= 3;
    // 7F34950C: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349510:
    ctx->pc = 0x7F349510u;
    // 7F349510: cmplwi  r3, 0x0000
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

label_7F349514:
    ctx->pc = 0x7F349514u;
    // 7F349514: bc    12, 2, 0x7F349524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349524;
        }
    }

label_7F349518:
    ctx->pc = 0x7F349518u;
    ctx->downcount -= 1;
    // 7F349518: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F34951Cu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F34951C:
    ctx->pc = 0x7F34951Cu;
    ctx->downcount -= 2;
    // 7F34951C: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349520:
    ctx->pc = 0x7F349520u;
    // 7F349520: bl      0x7F3B0820
    {
            ctx->lr = 0x7F349524u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F349524:
    ctx->pc = 0x7F349524u;
    ctx->downcount -= 3;
    // 7F349524: lwz     r3, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349528:
    ctx->pc = 0x7F349528u;
    // 7F349528: cmplwi  r3, 0x0000
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

label_7F34952C:
    ctx->pc = 0x7F34952Cu;
    // 7F34952C: bc    12, 2, 0x7F349534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349534;
        }
    }

label_7F349530:
    ctx->pc = 0x7F349530u;
    ctx->downcount -= 1;
    // 7F349530: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F349534u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F349534:
    ctx->pc = 0x7F349534u;
    ctx->downcount -= 3;
    // 7F349534: lwz     r3, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349538:
    ctx->pc = 0x7F349538u;
    // 7F349538: cmplwi  r3, 0x0000
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

label_7F34953C:
    ctx->pc = 0x7F34953Cu;
    // 7F34953C: bc    12, 2, 0x7F349544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349544;
        }
    }

label_7F349540:
    ctx->pc = 0x7F349540u;
    ctx->downcount -= 1;
    // 7F349540: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F349544u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F349544:
    ctx->pc = 0x7F349544u;
    ctx->downcount -= 6;
    // 7F349544: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349548:
    ctx->pc = 0x7F349548u;
    // 7F349548: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34954C:
    ctx->pc = 0x7F34954Cu;
    // 7F34954C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349550:
    ctx->pc = 0x7F349550u;
    // 7F349550: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349554:
    ctx->pc = 0x7F349554u;
    // 7F349554: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349558:
    ctx->pc = 0x7F349558u;
    ctx->downcount -= 8;
    // 7F349558: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34955C:
    ctx->pc = 0x7F34955Cu;
    // 7F34955C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349560:
    ctx->pc = 0x7F349560u;
    // 7F349560: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349564:
    ctx->pc = 0x7F349564u;
    // 7F349564: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349568:
    ctx->pc = 0x7F349568u;
    // 7F349568: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34956C:
    ctx->pc = 0x7F34956Cu;
    // 7F34956C: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349570:
    ctx->pc = 0x7F349570u;
    // 7F349570: cmpwi   r0, 0
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

label_7F349574:
    ctx->pc = 0x7F349574u;
    // 7F349574: bc    12, 2, 0x7F349604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349604;
        }
    }

label_7F349578:
    ctx->pc = 0x7F349578u;
    ctx->downcount -= 3;
    // 7F349578: lwz     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34957C:
    ctx->pc = 0x7F34957Cu;
    // 7F34957C: cmplwi  r0, 0x0000
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

label_7F349580:
    ctx->pc = 0x7F349580u;
    // 7F349580: bc    4, 2, 0x7F349604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349604;
        }
    }

label_7F349584:
    ctx->pc = 0x7F349584u;
    ctx->downcount -= 12;
    // 7F349584: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F349588:
    ctx->pc = 0x7F349588u;
    // 7F349588: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34958C:
    ctx->pc = 0x7F34958Cu;
    // 7F34958C: addi    r5, r4, -25336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25336);

label_7F349590:
    ctx->pc = 0x7F349590u;
    // 7F349590: lwz     r4, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349594:
    ctx->pc = 0x7F349594u;
    // 7F349594: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F349594u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349598:
    ctx->pc = 0x7F349598u;
    // 7F349598: addi    r5, r31, 256
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(256);

label_7F34959C:
    ctx->pc = 0x7F34959Cu;
    // 7F34959C: lwz     r7, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3495A0:
    ctx->pc = 0x7F3495A0u;
    // 7F3495A0: addi    r10, r31, 280
    ctx->gpr[10] = ctx->gpr[31] + (u32)(s32)(280);

label_7F3495A4:
    ctx->pc = 0x7F3495A4u;
    // 7F3495A4: lwz     r8, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3495A8:
    ctx->pc = 0x7F3495A8u;
    // 7F3495A8: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F3495AC:
    ctx->pc = 0x7F3495ACu;
    // 7F3495AC: lwz     r9, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3495B0:
    ctx->pc = 0x7F3495B0u;
    // 7F3495B0: bl      0x7F341278
    {
            ctx->lr = 0x7F3495B4u;
            ctx->pc = 0x7F341278u;
            return;
    }

label_7F3495B4:
    ctx->pc = 0x7F3495B4u;
    ctx->downcount -= 5;
    // 7F3495B4: stw     r3, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3495B8:
    ctx->pc = 0x7F3495B8u;
    // 7F3495B8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3495BC:
    ctx->pc = 0x7F3495BCu;
    // 7F3495BC: lwz     r5, -5664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3495C0:
    ctx->pc = 0x7F3495C0u;
    // 7F3495C0: cmplwi  r5, 0x0000
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

label_7F3495C4:
    ctx->pc = 0x7F3495C4u;
    // 7F3495C4: bc    12, 2, 0x7F3495E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3495E0;
        }
    }

label_7F3495C8:
    ctx->pc = 0x7F3495C8u;
    ctx->downcount -= 5;
    // 7F3495C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3495CC:
    ctx->pc = 0x7F3495CCu;
    // 7F3495CC: addi    r4, r31, 200
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(200);

label_7F3495D0:
    ctx->pc = 0x7F3495D0u;
    // 7F3495D0: addi    r6, r31, 192
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(192);

label_7F3495D4:
    ctx->pc = 0x7F3495D4u;
    // 7F3495D4: addi    r7, r31, 194
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(194);

label_7F3495D8:
    ctx->pc = 0x7F3495D8u;
    // 7F3495D8: bl      0x7F349440
    {
            ctx->lr = 0x7F3495DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349440u;
                return;
            }
            goto label_7F349440;
    }

label_7F3495DC:
    ctx->pc = 0x7F3495DCu;
    ctx->downcount -= 1;
    // 7F3495DC: b       0x7F3495FC
    {
            goto label_7F3495FC;
    }

label_7F3495E0:
    ctx->pc = 0x7F3495E0u;
    ctx->downcount -= 7;
    // 7F3495E0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3495E4:
    ctx->pc = 0x7F3495E4u;
    // 7F3495E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3495E8:
    ctx->pc = 0x7F3495E8u;
    // 7F3495E8: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F3495EC:
    ctx->pc = 0x7F3495ECu;
    // 7F3495EC: addi    r6, r31, 192
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(192);

label_7F3495F0:
    ctx->pc = 0x7F3495F0u;
    // 7F3495F0: addi    r4, r31, 200
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(200);

label_7F3495F4:
    ctx->pc = 0x7F3495F4u;
    // 7F3495F4: addi    r7, r31, 194
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(194);

label_7F3495F8:
    ctx->pc = 0x7F3495F8u;
    // 7F3495F8: bl      0x7F349440
    {
            ctx->lr = 0x7F3495FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349440u;
                return;
            }
            goto label_7F349440;
    }

label_7F3495FC:
    ctx->pc = 0x7F3495FCu;
    ctx->downcount -= 2;
    // 7F3495FC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F349600:
    ctx->pc = 0x7F349600u;
    // 7F349600: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349604:
    ctx->pc = 0x7F349604u;
    ctx->downcount -= 6;
    // 7F349604: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349608:
    ctx->pc = 0x7F349608u;
    // 7F349608: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34960C:
    ctx->pc = 0x7F34960Cu;
    // 7F34960C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349610:
    ctx->pc = 0x7F349610u;
    // 7F349610: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349614:
    ctx->pc = 0x7F349614u;
    // 7F349614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349618:
    ctx->pc = 0x7F349618u;
    ctx->downcount -= 18;
    // 7F349618: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34961C:
    ctx->pc = 0x7F34961Cu;
    // 7F34961C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349620:
    ctx->pc = 0x7F349620u;
    // 7F349620: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349624:
    ctx->pc = 0x7F349624u;
    // 7F349624: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F349628:
    ctx->pc = 0x7F349628u;
    // 7F349628: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34962C:
    ctx->pc = 0x7F34962Cu;
    // 7F34962C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349630:
    ctx->pc = 0x7F349630u;
    // 7F349630: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349634:
    ctx->pc = 0x7F349634u;
    // 7F349634: bl      0x7F3C9624
    {
            ctx->lr = 0x7F349638u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F349638:
    ctx->pc = 0x7F349638u;
    ctx->downcount -= 2;
    // 7F349638: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34963C:
    ctx->pc = 0x7F34963Cu;
    // 7F34963C: b       0x7F3496AC
    {
            goto label_7F3496AC;
    }

label_7F349640:
    ctx->pc = 0x7F349640u;
    ctx->downcount -= 5;
    // 7F349640: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349644:
    ctx->pc = 0x7F349644u;
    // 7F349644: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349648:
    ctx->pc = 0x7F349648u;
    // 7F349648: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34964C:
    // 7F34964C: cmpwi   r0, 19
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

label_7F349650:
    // 7F349650: bc    12, 2, 0x7F349688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349688;
        }
    }

label_7F349654:
    ctx->downcount -= 1;
    // 7F349654: bc    4, 0, 0x7F349670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349670;
        }
    }

label_7F349658:
    ctx->downcount -= 2;
    // 7F349658: cmpwi   r0, 0
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

label_7F34965C:
    // 7F34965C: bc    12, 2, 0x7F34969C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34969C;
        }
    }

label_7F349660:
    ctx->downcount -= 1;
    // 7F349660: bc    12, 0, 0x7F34969C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34969C;
        }
    }

label_7F349664:
    ctx->downcount -= 2;
    // 7F349664: cmpwi   r0, 18
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

label_7F349668:
    // 7F349668: bc    4, 0, 0x7F34967C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34967C;
        }
    }

label_7F34966C:
    ctx->downcount -= 1;
    // 7F34966C: b       0x7F34969C
    {
            goto label_7F34969C;
    }

label_7F349670:
    ctx->downcount -= 2;
    // 7F349670: cmpwi   r0, 21
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F349674:
    // 7F349674: bc    12, 2, 0x7F349694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349694;
        }
    }

label_7F349678:
    ctx->downcount -= 1;
    // 7F349678: b       0x7F34969C
    {
            goto label_7F34969C;
    }

label_7F34967C:
    ctx->downcount -= 2;
    // 7F34967C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349680:
    // 7F349680: bl      0x7F3497AC
    {
            ctx->lr = 0x7F349684u;
            goto label_7F3497AC;
    }

label_7F349684:
    ctx->downcount -= 1;
    // 7F349684: b       0x7F34969C
    {
            goto label_7F34969C;
    }

label_7F349688:
    ctx->downcount -= 2;
    // 7F349688: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34968C:
    // 7F34968C: bl      0x7F349558
    {
            ctx->lr = 0x7F349690u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349558u;
                return;
            }
            goto label_7F349558;
    }

label_7F349690:
    ctx->downcount -= 1;
    // 7F349690: b       0x7F34969C
    {
            goto label_7F34969C;
    }

label_7F349694:
    ctx->pc = 0x7F349694u;
    ctx->downcount -= 2;
    // 7F349694: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349698:
    ctx->pc = 0x7F349698u;
    // 7F349698: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34969C:
    ctx->pc = 0x7F34969Cu;
    ctx->downcount -= 4;
    // 7F34969C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3496A0:
    // 7F3496A0: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F3496A4:
    // 7F3496A4: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F3496A8:
    ctx->pc = 0x7F3496A8u;
    // 7F3496A8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3496AC:
    ctx->downcount -= 2;
    // 7F3496AC: cmpwi   r30, 0
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

label_7F3496B0:
    // 7F3496B0: bc    12, 1, 0x7F349640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349640u;
                return;
            }
            goto label_7F349640;
        }
    }

label_7F3496B4:
    ctx->pc = 0x7F3496B4u;
    ctx->downcount -= 3;
    // 7F3496B4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3496B8:
    ctx->pc = 0x7F3496B8u;
    // 7F3496B8: cmpwi   r0, 2
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

label_7F3496BC:
    ctx->pc = 0x7F3496BCu;
    // 7F3496BC: bc    4, 2, 0x7F349774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349774;
        }
    }

label_7F3496C0:
    ctx->pc = 0x7F3496C0u;
    ctx->downcount -= 6;
    // 7F3496C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3496C4:
    ctx->pc = 0x7F3496C4u;
    // 7F3496C4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3496C8:
    ctx->pc = 0x7F3496C8u;
    // 7F3496C8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3496CC:
    ctx->pc = 0x7F3496CCu;
    // 7F3496CC: lwz     r0, 264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3496D0:
    ctx->pc = 0x7F3496D0u;
    // 7F3496D0: rlwinm. r0, r0, 0, 27, 31
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

label_7F3496D4:
    ctx->pc = 0x7F3496D4u;
    // 7F3496D4: bc    4, 2, 0x7F34971C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34971C;
        }
    }

label_7F3496D8:
    ctx->pc = 0x7F3496D8u;
    ctx->downcount -= 4;
    // 7F3496D8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3496DC:
    ctx->pc = 0x7F3496DCu;
    // 7F3496DC: lwz     r5, -5664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3496E0:
    ctx->pc = 0x7F3496E0u;
    // 7F3496E0: cmplwi  r5, 0x0000
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

label_7F3496E4:
    ctx->pc = 0x7F3496E4u;
    // 7F3496E4: bc    12, 2, 0x7F34971C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34971C;
        }
    }

label_7F3496E8:
    ctx->pc = 0x7F3496E8u;
    ctx->downcount -= 5;
    // 7F3496E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3496EC:
    ctx->pc = 0x7F3496ECu;
    // 7F3496EC: addi    r4, r31, 200
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(200);

label_7F3496F0:
    ctx->pc = 0x7F3496F0u;
    // 7F3496F0: addi    r6, r1, 10
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(10);

label_7F3496F4:
    ctx->pc = 0x7F3496F4u;
    // 7F3496F4: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3496F8:
    ctx->pc = 0x7F3496F8u;
    // 7F3496F8: bl      0x7F349440
    {
            ctx->lr = 0x7F3496FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349440u;
                return;
            }
            goto label_7F349440;
    }

label_7F3496FC:
    ctx->pc = 0x7F3496FCu;
    ctx->downcount -= 6;
    // 7F3496FC: lha     r3, 194(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(194);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349700:
    ctx->pc = 0x7F349700u;
    // 7F349700: lha     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349704:
    ctx->pc = 0x7F349704u;
    // 7F349704: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F349708:
    ctx->pc = 0x7F349708u;
    // 7F349708: srawi r0, r0, 12
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

label_7F34970C:
    ctx->pc = 0x7F34970Cu;
    // 7F34970C: addze.  r0, r0
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

label_7F349710:
    ctx->pc = 0x7F349710u;
    // 7F349710: bc    12, 2, 0x7F34971C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34971C;
        }
    }

label_7F349714:
    ctx->pc = 0x7F349714u;
    ctx->downcount -= 2;
    // 7F349714: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349718:
    ctx->pc = 0x7F349718u;
    // 7F349718: bl      0x7F34A00C
    {
            ctx->lr = 0x7F34971Cu;
            goto label_7F34A00C;
    }

label_7F34971C:
    ctx->pc = 0x7F34971Cu;
    ctx->downcount -= 4;
    // 7F34971C: lha     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349720:
    ctx->pc = 0x7F349720u;
    // 7F349720: lha     r4, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349724:
    ctx->pc = 0x7F349724u;
    // 7F349724: cmpw    r5, r4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F349728:
    ctx->pc = 0x7F349728u;
    // 7F349728: bc    4, 2, 0x7F34973C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34973C;
        }
    }

label_7F34972C:
    ctx->pc = 0x7F34972Cu;
    ctx->downcount -= 4;
    // 7F34972C: lha     r3, 194(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(194);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349730:
    ctx->pc = 0x7F349730u;
    // 7F349730: lha     r0, 198(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(198);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349734:
    ctx->pc = 0x7F349734u;
    // 7F349734: cmpw    r3, r0
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

label_7F349738:
    ctx->pc = 0x7F349738u;
    // 7F349738: bc    12, 2, 0x7F349774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349774;
        }
    }

label_7F34973C:
    ctx->pc = 0x7F34973Cu;
    ctx->downcount -= 3;
    // 7F34973C: subf   r3, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F349740:
    ctx->pc = 0x7F349740u;
    // 7F349740: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F349744:
    ctx->pc = 0x7F349744u;
    // 7F349744: bl      0x7F349788
    {
            ctx->lr = 0x7F349748u;
            goto label_7F349788;
    }

label_7F349748:
    ctx->pc = 0x7F349748u;
    ctx->downcount -= 8;
    // 7F349748: lha     r0, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34974C:
    ctx->pc = 0x7F34974Cu;
    // 7F34974C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F349750:
    ctx->pc = 0x7F349750u;
    // 7F349750: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F349754:
    ctx->pc = 0x7F349754u;
    // 7F349754: sth     r0, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349758:
    ctx->pc = 0x7F349758u;
    // 7F349758: lha     r3, 198(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(198);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34975C:
    ctx->pc = 0x7F34975Cu;
    // 7F34975C: lha     r0, 194(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(194);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349760:
    ctx->pc = 0x7F349760u;
    // 7F349760: subf   r3, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F349764:
    ctx->pc = 0x7F349764u;
    // 7F349764: bl      0x7F349788
    {
            ctx->lr = 0x7F349768u;
            goto label_7F349788;
    }

label_7F349768:
    ctx->pc = 0x7F349768u;
    ctx->downcount -= 3;
    // 7F349768: lha     r0, 198(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(198);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34976C:
    ctx->pc = 0x7F34976Cu;
    // 7F34976C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F349770:
    ctx->pc = 0x7F349770u;
    // 7F349770: sth     r0, 198(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(198);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349774:
    ctx->pc = 0x7F349774u;
    ctx->downcount -= 16;
    // 7F349774: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349778:
    ctx->pc = 0x7F349778u;
    // 7F349778: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34977C:
    ctx->pc = 0x7F34977Cu;
    // 7F34977C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349780:
    ctx->pc = 0x7F349780u;
    // 7F349780: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F349784:
    ctx->pc = 0x7F349784u;
    // 7F349784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349788:
    ctx->pc = 0x7F349788u;
    ctx->downcount -= 1;
    // 7F349788: b       0x7F349794
    {
            goto label_7F349794;
    }

label_7F34978C:
    ctx->downcount -= 2;
    // 7F34978C: srawi r0, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
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

label_7F349790:
    // 7F349790: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F349794:
    ctx->downcount -= 3;
    // 7F349794: srawi r0, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
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

label_7F349798:
    // 7F349798: addze.  r0, r0
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

label_7F34979C:
    ctx->pc = 0x7F34979Cu;
    // 7F34979C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3497A0:
    ctx->downcount -= 2;
    // 7F3497A0: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3497A4:
    // 7F3497A4: bc    4, 0, 0x7F34978C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34978Cu;
                return;
            }
            goto label_7F34978C;
        }
    }

label_7F3497A8:
    ctx->pc = 0x7F3497A8u;
    ctx->downcount -= 1;
    // 7F3497A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F3497AC:
    ctx->pc = 0x7F3497ACu;
    ctx->downcount -= 10;
    // 7F3497AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3497B0:
    ctx->pc = 0x7F3497B0u;
    // 7F3497B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3497B4:
    ctx->pc = 0x7F3497B4u;
    // 7F3497B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3497B8:
    ctx->pc = 0x7F3497B8u;
    // 7F3497B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3497BC:
    ctx->pc = 0x7F3497BCu;
    // 7F3497BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3497C0:
    ctx->pc = 0x7F3497C0u;
    // 7F3497C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3497C4:
    ctx->pc = 0x7F3497C4u;
    // 7F3497C4: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3497C8:
    ctx->pc = 0x7F3497C8u;
    // 7F3497C8: lwz     r3, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3497CC:
    ctx->pc = 0x7F3497CCu;
    // 7F3497CC: cmplwi  r3, 0x0000
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

label_7F3497D0:
    ctx->pc = 0x7F3497D0u;
    // 7F3497D0: bc    12, 2, 0x7F3497E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3497E0;
        }
    }

label_7F3497D4:
    ctx->pc = 0x7F3497D4u;
    ctx->downcount -= 1;
    // 7F3497D4: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3497D8u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3497D8:
    ctx->pc = 0x7F3497D8u;
    ctx->downcount -= 2;
    // 7F3497D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3497DC:
    ctx->pc = 0x7F3497DCu;
    // 7F3497DC: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3497E0:
    ctx->pc = 0x7F3497E0u;
    ctx->downcount -= 3;
    // 7F3497E0: lwz     r3, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3497E4:
    ctx->pc = 0x7F3497E4u;
    // 7F3497E4: cmplwi  r3, 0x0000
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

label_7F3497E8:
    ctx->pc = 0x7F3497E8u;
    // 7F3497E8: bc    12, 2, 0x7F3497F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3497F8;
        }
    }

label_7F3497EC:
    ctx->pc = 0x7F3497ECu;
    ctx->downcount -= 1;
    // 7F3497EC: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3497F0u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3497F0:
    ctx->pc = 0x7F3497F0u;
    ctx->downcount -= 2;
    // 7F3497F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3497F4:
    ctx->pc = 0x7F3497F4u;
    // 7F3497F4: stw     r0, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3497F8:
    ctx->pc = 0x7F3497F8u;
    ctx->downcount -= 3;
    // 7F3497F8: lwz     r3, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3497FC:
    ctx->pc = 0x7F3497FCu;
    // 7F3497FC: cmplwi  r3, 0x0000
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

label_7F349800:
    ctx->pc = 0x7F349800u;
    // 7F349800: bc    12, 2, 0x7F349810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349810;
        }
    }

label_7F349804:
    ctx->pc = 0x7F349804u;
    ctx->downcount -= 1;
    // 7F349804: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F349808u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F349808:
    ctx->pc = 0x7F349808u;
    ctx->downcount -= 2;
    // 7F349808: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34980C:
    ctx->pc = 0x7F34980Cu;
    // 7F34980C: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349810:
    ctx->pc = 0x7F349810u;
    ctx->downcount -= 6;
    // 7F349810: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349814:
    ctx->pc = 0x7F349814u;
    // 7F349814: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F349818:
    ctx->pc = 0x7F349818u;
    // 7F349818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34981C:
    ctx->pc = 0x7F34981Cu;
    // 7F34981C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349820:
    ctx->pc = 0x7F349820u;
    // 7F349820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349824:
    ctx->pc = 0x7F349824u;
    ctx->downcount -= 49;
    // 7F349824: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349828:
    ctx->pc = 0x7F349828u;
    // 7F349828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34982C:
    ctx->pc = 0x7F34982Cu;
    // 7F34982C: lis     r11, 32585
    ctx->gpr[11] = ((u32)(s32)(32585) << 16);

label_7F349830:
    ctx->pc = 0x7F349830u;
    // 7F349830: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F349834:
    ctx->pc = 0x7F349834u;
    // 7F349834: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349838:
    ctx->pc = 0x7F349838u;
    // 7F349838: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34983C:
    ctx->pc = 0x7F34983Cu;
    // 7F34983C: stmw     r18, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349840:
    ctx->pc = 0x7F349840u;
    // 7F349840: addi    r25, r11, 12832
    ctx->gpr[25] = ctx->gpr[11] + (u32)(s32)(12832);

label_7F349844:
    ctx->pc = 0x7F349844u;
    // 7F349844: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349848:
    ctx->pc = 0x7F349848u;
    // 7F349848: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34984C:
    ctx->pc = 0x7F34984Cu;
    // 7F34984C: li      r11, 1
    ctx->gpr[11] = (u32)(s32)(1);

label_7F349850:
    ctx->pc = 0x7F349850u;
    // 7F349850: lwz     r23, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F349854:
    ctx->pc = 0x7F349854u;
    // 7F349854: lwz     r24, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F349858:
    ctx->pc = 0x7F349858u;
    // 7F349858: or   r19, r7, r7
    {
        ctx->gpr[19] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F34985C:
    ctx->pc = 0x7F34985Cu;
    // 7F34985C: lwz     r26, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F349860:
    ctx->pc = 0x7F349860u;
    // 7F349860: or   r20, r8, r8
    {
        ctx->gpr[20] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F349864:
    ctx->pc = 0x7F349864u;
    // 7F349864: lwz     r27, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F349868:
    ctx->pc = 0x7F349868u;
    // 7F349868: or   r21, r9, r9
    {
        ctx->gpr[21] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F34986C:
    ctx->pc = 0x7F34986Cu;
    // 7F34986C: lwz     r28, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F349870:
    ctx->pc = 0x7F349870u;
    // 7F349870: or   r22, r10, r10
    {
        ctx->gpr[22] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F349874:
    ctx->pc = 0x7F349874u;
    // 7F349874: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F349878:
    ctx->pc = 0x7F349878u;
    // 7F349878: lwz     r18, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F34987C:
    ctx->pc = 0x7F34987Cu;
    // 7F34987C: lwz     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349880:
    ctx->pc = 0x7F349880u;
    // 7F349880: stw     r18, 240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F349884:
    ctx->pc = 0x7F349884u;
    // 7F349884: or   r18, r6, r6
    {
        ctx->gpr[18] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F349888:
    ctx->pc = 0x7F349888u;
    // 7F349888: stw     r3, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34988C:
    ctx->pc = 0x7F34988Cu;
    // 7F34988C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349890:
    ctx->pc = 0x7F349890u;
    // 7F349890: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F349894:
    ctx->pc = 0x7F349894u;
    // 7F349894: lwz     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349898:
    ctx->pc = 0x7F349898u;
    // 7F349898: lwz     r5, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34989C:
    ctx->pc = 0x7F34989Cu;
    // 7F34989C: lwz     r25, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F3498A0:
    ctx->pc = 0x7F3498A0u;
    // 7F3498A0: stw     r6, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3498A4:
    ctx->pc = 0x7F3498A4u;
    // 7F3498A4: stw     r5, 252(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3498A8:
    ctx->pc = 0x7F3498A8u;
    // 7F3498A8: stw     r12, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3498AC:
    ctx->pc = 0x7F3498ACu;
    // 7F3498AC: stw     r12, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3498B0:
    ctx->pc = 0x7F3498B0u;
    // 7F3498B0: stw     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3498B4:
    ctx->pc = 0x7F3498B4u;
    // 7F3498B4: stw     r11, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3498B8:
    ctx->pc = 0x7F3498B8u;
    // 7F3498B8: stw     r12, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3498BC:
    ctx->pc = 0x7F3498BCu;
    // 7F3498BC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3498C0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3498C0:
    ctx->pc = 0x7F3498C0u;
    ctx->downcount -= 1;
    // 7F3498C0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F3498C4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F3498C4:
    ctx->pc = 0x7F3498C4u;
    ctx->downcount -= 5;
    // 7F3498C4: stw     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3498C8:
    ctx->pc = 0x7F3498C8u;
    // 7F3498C8: li      r4, 34
    ctx->gpr[4] = (u32)(s32)(34);

label_7F3498CC:
    ctx->pc = 0x7F3498CCu;
    // 7F3498CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3498D0:
    ctx->pc = 0x7F3498D0u;
    // 7F3498D0: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3498D4:
    ctx->pc = 0x7F3498D4u;
    // 7F3498D4: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F3498D8u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F3498D8:
    ctx->pc = 0x7F3498D8u;
    ctx->downcount -= 3;
    // 7F3498D8: stw     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3498DC:
    ctx->pc = 0x7F3498DCu;
    // 7F3498DC: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3498E0:
    ctx->pc = 0x7F3498E0u;
    // 7F3498E0: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F3498E4u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F3498E4:
    ctx->pc = 0x7F3498E4u;
    ctx->downcount -= 7;
    // 7F3498E4: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3498E8:
    ctx->pc = 0x7F3498E8u;
    // 7F3498E8: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F3498EC:
    ctx->pc = 0x7F3498ECu;
    // 7F3498EC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3498F0:
    ctx->pc = 0x7F3498F0u;
    // 7F3498F0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F3498F4:
    ctx->pc = 0x7F3498F4u;
    // 7F3498F4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3498F8:
    ctx->pc = 0x7F3498F8u;
    // 7F3498F8: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3498FC:
    ctx->pc = 0x7F3498FCu;
    // 7F3498FC: bl      0x7F3BC518
    {
            ctx->lr = 0x7F349900u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F349900:
    ctx->pc = 0x7F349900u;
    ctx->downcount -= 15;
    // 7F349900: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F349904:
    ctx->pc = 0x7F349904u;
    // 7F349904: addi    r3, r30, 200
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(200);

label_7F349908:
    ctx->pc = 0x7F349908u;
    // 7F349908: stw     r0, 184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34990C:
    ctx->pc = 0x7F34990Cu;
    // 7F34990C: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F349910:
    ctx->pc = 0x7F349910u;
    // 7F349910: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F349914:
    ctx->pc = 0x7F349914u;
    // 7F349914: stw     r31, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349918:
    ctx->pc = 0x7F349918u;
    // 7F349918: lwz     r6, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34991C:
    ctx->pc = 0x7F34991Cu;
    // 7F34991C: lwz     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349920:
    ctx->pc = 0x7F349920u;
    // 7F349920: stw     r6, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F349924:
    ctx->pc = 0x7F349924u;
    // 7F349924: stw     r0, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349928:
    ctx->pc = 0x7F349928u;
    // 7F349928: lwz     r6, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34992C:
    ctx->pc = 0x7F34992Cu;
    // 7F34992C: lwz     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349930:
    ctx->pc = 0x7F349930u;
    // 7F349930: stw     r6, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F349934:
    ctx->pc = 0x7F349934u;
    // 7F349934: stw     r0, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349938:
    ctx->pc = 0x7F349938u;
    // 7F349938: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F34993Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F34993C:
    ctx->pc = 0x7F34993Cu;
    ctx->downcount -= 6;
    // 7F34993C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F349940:
    ctx->pc = 0x7F349940u;
    // 7F349940: or   r5, r19, r19
    {
        ctx->gpr[5] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F349944:
    ctx->pc = 0x7F349944u;
    // 7F349944: addi    r4, r30, 200
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(200);

label_7F349948:
    ctx->pc = 0x7F349948u;
    // 7F349948: addi    r6, r30, 192
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(192);

label_7F34994C:
    ctx->pc = 0x7F34994Cu;
    // 7F34994C: addi    r7, r30, 194
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(194);

label_7F349950:
    ctx->pc = 0x7F349950u;
    // 7F349950: bl      0x7F349440
    {
            ctx->lr = 0x7F349954u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349440u;
                return;
            }
            goto label_7F349440;
    }

label_7F349954:
    ctx->pc = 0x7F349954u;
    ctx->downcount -= 26;
    // 7F349954: lha     r0, 194(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(194);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349958:
    ctx->pc = 0x7F349958u;
    // 7F349958: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34995C:
    ctx->pc = 0x7F34995Cu;
    // 7F34995C: lfs     f0, -25332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34995Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349960:
    ctx->pc = 0x7F349960u;
    // 7F349960: cmplwi  r27, 0x0000
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

label_7F349964:
    ctx->pc = 0x7F349964u;
    // 7F349964: sth     r0, 198(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(198);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349968:
    ctx->pc = 0x7F349968u;
    // 7F349968: lha     r0, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34996C:
    ctx->pc = 0x7F34996Cu;
    // 7F34996C: sth     r0, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349970:
    ctx->pc = 0x7F349970u;
    // 7F349970: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349974:
    ctx->pc = 0x7F349974u;
    // 7F349974: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349978:
    ctx->pc = 0x7F349978u;
    // 7F349978: stw     r3, 240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34997C:
    ctx->pc = 0x7F34997Cu;
    // 7F34997C: stw     r0, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349980:
    ctx->pc = 0x7F349980u;
    // 7F349980: lwz     r3, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349984:
    ctx->pc = 0x7F349984u;
    // 7F349984: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349988:
    ctx->pc = 0x7F349988u;
    // 7F349988: stw     r3, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34998C:
    ctx->pc = 0x7F34998Cu;
    // 7F34998C: stw     r0, 252(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349990:
    ctx->pc = 0x7F349990u;
    // 7F349990: stfs     f0, 252(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F349990u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349994:
    ctx->pc = 0x7F349994u;
    // 7F349994: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349998:
    ctx->pc = 0x7F349998u;
    // 7F349998: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34999C:
    ctx->pc = 0x7F34999Cu;
    // 7F34999C: stw     r3, 256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3499A0:
    ctx->pc = 0x7F3499A0u;
    // 7F3499A0: stw     r0, 260(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3499A4:
    ctx->pc = 0x7F3499A4u;
    // 7F3499A4: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3499A8:
    ctx->pc = 0x7F3499A8u;
    // 7F3499A8: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3499AC:
    ctx->pc = 0x7F3499ACu;
    // 7F3499AC: stw     r3, 264(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3499B0:
    ctx->pc = 0x7F3499B0u;
    // 7F3499B0: stw     r0, 268(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3499B4:
    ctx->pc = 0x7F3499B4u;
    // 7F3499B4: stfs     f0, 268(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F3499B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3499B8:
    ctx->pc = 0x7F3499B8u;
    // 7F3499B8: bc    12, 2, 0x7F3499C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3499C4;
        }
    }

label_7F3499BC:
    ctx->pc = 0x7F3499BCu;
    ctx->downcount -= 2;
    // 7F3499BC: addi    r0, r27, 4
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(4);

label_7F3499C0:
    ctx->pc = 0x7F3499C0u;
    // 7F3499C0: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3499C4:
    ctx->pc = 0x7F3499C4u;
    ctx->downcount -= 6;
    // 7F3499C4: stw     r29, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3499C8:
    ctx->pc = 0x7F3499C8u;
    // 7F3499C8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3499CC:
    ctx->pc = 0x7F3499CCu;
    // 7F3499CC: addi    r4, r3, 12808
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F3499D0:
    ctx->pc = 0x7F3499D0u;
    // 7F3499D0: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3499D4:
    ctx->pc = 0x7F3499D4u;
    // 7F3499D4: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F3499D8:
    ctx->pc = 0x7F3499D8u;
    // 7F3499D8: bl      0x7F1F7D28
    {
            ctx->lr = 0x7F3499DCu;
            ctx->pc = 0x7F1F7D28u;
            return;
    }

label_7F3499DC:
    ctx->pc = 0x7F3499DCu;
    ctx->downcount -= 2;
    // 7F3499DC: cmpwi   r20, 0
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

label_7F3499E0:
    ctx->pc = 0x7F3499E0u;
    // 7F3499E0: bc    12, 2, 0x7F349A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349A34;
        }
    }

label_7F3499E4:
    ctx->pc = 0x7F3499E4u;
    ctx->downcount -= 19;
    // 7F3499E4: stw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3499E8:
    ctx->pc = 0x7F3499E8u;
    // 7F3499E8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F3499EC:
    ctx->pc = 0x7F3499ECu;
    // 7F3499EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3499F0:
    ctx->pc = 0x7F3499F0u;
    // 7F3499F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3499F4:
    ctx->pc = 0x7F3499F4u;
    // 7F3499F4: stw     r28, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3499F8:
    ctx->pc = 0x7F3499F8u;
    // 7F3499F8: addi    r0, r30, 280
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(280);

label_7F3499FC:
    ctx->pc = 0x7F3499FCu;
    // 7F3499FC: addi    r4, r4, 18312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F349A00:
    ctx->pc = 0x7F349A00u;
    // 7F349A00: lfs     f1, -25328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F349A00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349A04:
    ctx->pc = 0x7F349A04u;
    // 7F349A04: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F349A08:
    ctx->pc = 0x7F349A08u;
    // 7F349A08: or   r8, r21, r21
    {
        ctx->gpr[8] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F349A0C:
    ctx->pc = 0x7F349A0Cu;
    // 7F349A0C: or   r9, r23, r23
    {
        ctx->gpr[9] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F349A10:
    ctx->pc = 0x7F349A10u;
    // 7F349A10: or   r10, r24, r24
    {
        ctx->gpr[10] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F349A14:
    ctx->pc = 0x7F349A14u;
    // 7F349A14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349A18:
    ctx->pc = 0x7F349A18u;
    // 7F349A18: addi    r6, r30, 240
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(240);

label_7F349A1C:
    ctx->pc = 0x7F349A1Cu;
    // 7F349A1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F349A20:
    ctx->pc = 0x7F349A20u;
    // 7F349A20: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349A24:
    ctx->pc = 0x7F349A24u;
    // 7F349A24: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349A28:
    ctx->pc = 0x7F349A28u;
    // 7F349A28: lwz     r5, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349A2C:
    ctx->pc = 0x7F349A2Cu;
    // 7F349A2C: bl      0x7F1EFA70
    {
            ctx->lr = 0x7F349A30u;
            ctx->pc = 0x7F1EFA70u;
            return;
    }

label_7F349A30:
    ctx->pc = 0x7F349A30u;
    ctx->downcount -= 1;
    // 7F349A30: stw     r3, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349A34:
    ctx->pc = 0x7F349A34u;
    ctx->downcount -= 23;
    // 7F349A34: stw     r31, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349A38:
    ctx->pc = 0x7F349A38u;
    // 7F349A38: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F349A3C:
    ctx->pc = 0x7F349A3Cu;
    // 7F349A3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F349A40:
    ctx->pc = 0x7F349A40u;
    // 7F349A40: lwz     r4, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349A44:
    ctx->pc = 0x7F349A44u;
    // 7F349A44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F349A48:
    ctx->pc = 0x7F349A48u;
    // 7F349A48: stw     r4, 220(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349A4C:
    ctx->pc = 0x7F349A4Cu;
    // 7F349A4C: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349A50:
    ctx->pc = 0x7F349A50u;
    // 7F349A50: lmw     r18, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349A54:
    ctx->pc = 0x7F349A54u;
    // 7F349A54: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349A58:
    ctx->pc = 0x7F349A58u;
    // 7F349A58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349A5C:
    ctx->pc = 0x7F349A5Cu;
    // 7F349A5C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F349A60:
    ctx->pc = 0x7F349A60u;
    // 7F349A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349A64:
    ctx->pc = 0x7F349A64u;
    ctx->downcount -= 41;
    // 7F349A64: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349A68:
    ctx->pc = 0x7F349A68u;
    // 7F349A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349A6C:
    ctx->pc = 0x7F349A6Cu;
    // 7F349A6C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F349A70:
    ctx->pc = 0x7F349A70u;
    // 7F349A70: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349A74:
    ctx->pc = 0x7F349A74u;
    // 7F349A74: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F349A78:
    ctx->pc = 0x7F349A78u;
    // 7F349A78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F349A7C:
    ctx->pc = 0x7F349A7Cu;
    // 7F349A7C: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349A80:
    ctx->pc = 0x7F349A80u;
    // 7F349A80: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349A84:
    ctx->pc = 0x7F349A84u;
    // 7F349A84: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349A88:
    ctx->pc = 0x7F349A88u;
    // 7F349A88: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F349A8C:
    ctx->pc = 0x7F349A8Cu;
    // 7F349A8C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F349A90:
    ctx->pc = 0x7F349A90u;
    // 7F349A90: li      r30, 15000
    ctx->gpr[30] = (u32)(s32)(15000);

label_7F349A94:
    ctx->pc = 0x7F349A94u;
    // 7F349A94: li      r29, 1000
    ctx->gpr[29] = (u32)(s32)(1000);

label_7F349A98:
    ctx->pc = 0x7F349A98u;
    // 7F349A98: li      r28, 300
    ctx->gpr[28] = (u32)(s32)(300);

label_7F349A9C:
    ctx->pc = 0x7F349A9Cu;
    // 7F349A9C: li      r27, 16
    ctx->gpr[27] = (u32)(s32)(16);

label_7F349AA0:
    ctx->pc = 0x7F349AA0u;
    // 7F349AA0: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F349AA4:
    ctx->pc = 0x7F349AA4u;
    // 7F349AA4: lwz     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349AA8:
    ctx->pc = 0x7F349AA8u;
    // 7F349AA8: stw     r4, 240(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349AAC:
    ctx->pc = 0x7F349AACu;
    // 7F349AAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F349AB0:
    ctx->pc = 0x7F349AB0u;
    // 7F349AB0: stw     r3, 244(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349AB4:
    ctx->pc = 0x7F349AB4u;
    // 7F349AB4: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F349AB8:
    ctx->pc = 0x7F349AB8u;
    // 7F349AB8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F349ABC:
    ctx->pc = 0x7F349ABCu;
    // 7F349ABC: lwz     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349AC0:
    ctx->pc = 0x7F349AC0u;
    // 7F349AC0: stw     r6, 248(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F349AC4:
    ctx->pc = 0x7F349AC4u;
    // 7F349AC4: stw     r5, 252(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F349AC8:
    ctx->pc = 0x7F349AC8u;
    // 7F349AC8: stw     r0, 216(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349ACC:
    ctx->pc = 0x7F349ACCu;
    // 7F349ACC: stw     r0, 168(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349AD0:
    ctx->pc = 0x7F349AD0u;
    // 7F349AD0: stw     r0, 276(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349AD4:
    ctx->pc = 0x7F349AD4u;
    // 7F349AD4: stw     r0, 280(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349AD8:
    ctx->pc = 0x7F349AD8u;
    // 7F349AD8: stw     r0, 172(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349ADC:
    ctx->pc = 0x7F349ADCu;
    // 7F349ADC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F349AE0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F349AE0:
    ctx->pc = 0x7F349AE0u;
    ctx->downcount -= 2;
    // 7F349AE0: cmpwi   r3, 0
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

label_7F349AE4:
    ctx->pc = 0x7F349AE4u;
    // 7F349AE4: bc    12, 2, 0x7F349AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349AF8;
        }
    }

label_7F349AE8:
    ctx->pc = 0x7F349AE8u;
    ctx->downcount -= 2;
    // 7F349AE8: li      r4, 108
    ctx->gpr[4] = (u32)(s32)(108);

label_7F349AEC:
    ctx->pc = 0x7F349AECu;
    // 7F349AEC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F349AF0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F349AF0:
    ctx->pc = 0x7F349AF0u;
    ctx->downcount -= 1;
    // 7F349AF0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F349AF4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F349AF4:
    ctx->pc = 0x7F349AF4u;
    ctx->downcount -= 1;
    // 7F349AF4: stw     r3, 216(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349AF8:
    ctx->pc = 0x7F349AF8u;
    ctx->downcount -= 2;
    // 7F349AF8: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F349AFC:
    ctx->pc = 0x7F349AFCu;
    // 7F349AFC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349B00u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349B00:
    ctx->pc = 0x7F349B00u;
    ctx->downcount -= 2;
    // 7F349B00: cmplwi  r3, 0x0000
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

label_7F349B04:
    ctx->pc = 0x7F349B04u;
    // 7F349B04: bc    12, 2, 0x7F349B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349B58;
        }
    }

label_7F349B08:
    ctx->pc = 0x7F349B08u;
    ctx->downcount -= 1;
    // 7F349B08: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349B0Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349B0C:
    ctx->pc = 0x7F349B0Cu;
    ctx->downcount -= 2;
    // 7F349B0C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F349B10:
    ctx->pc = 0x7F349B10u;
    // 7F349B10: bl      0x7F3C8470
    {
            ctx->lr = 0x7F349B14u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F349B14:
    ctx->pc = 0x7F349B14u;
    ctx->downcount -= 1;
    // 7F349B14: bl      0x7F3C8480
    {
            ctx->lr = 0x7F349B18u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F349B18:
    ctx->pc = 0x7F349B18u;
    ctx->downcount -= 5;
    // 7F349B18: stw     r3, 160(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349B1C:
    ctx->pc = 0x7F349B1Cu;
    // 7F349B1C: li      r4, 34
    ctx->gpr[4] = (u32)(s32)(34);

label_7F349B20:
    ctx->pc = 0x7F349B20u;
    // 7F349B20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F349B24:
    ctx->pc = 0x7F349B24u;
    // 7F349B24: lwz     r3, 160(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349B28:
    ctx->pc = 0x7F349B28u;
    // 7F349B28: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F349B2Cu;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F349B2C:
    ctx->pc = 0x7F349B2Cu;
    ctx->downcount -= 3;
    // 7F349B2C: stw     r3, 164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349B30:
    ctx->pc = 0x7F349B30u;
    // 7F349B30: lwz     r3, 164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349B34:
    ctx->pc = 0x7F349B34u;
    // 7F349B34: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F349B38u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F349B38:
    ctx->pc = 0x7F349B38u;
    ctx->downcount -= 7;
    // 7F349B38: lwz     r3, 164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349B3C:
    ctx->pc = 0x7F349B3Cu;
    // 7F349B3C: addi    r4, r24, 32
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(32);

label_7F349B40:
    ctx->pc = 0x7F349B40u;
    // 7F349B40: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349B44:
    ctx->pc = 0x7F349B44u;
    // 7F349B44: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F349B48:
    ctx->pc = 0x7F349B48u;
    // 7F349B48: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349B4C:
    ctx->pc = 0x7F349B4Cu;
    // 7F349B4C: lwz     r3, 164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349B50:
    ctx->pc = 0x7F349B50u;
    // 7F349B50: bl      0x7F3BC518
    {
            ctx->lr = 0x7F349B54u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F349B54:
    ctx->pc = 0x7F349B54u;
    ctx->downcount -= 1;
    // 7F349B54: b       0x7F349B60
    {
            goto label_7F349B60;
    }

label_7F349B58:
    ctx->pc = 0x7F349B58u;
    ctx->downcount -= 2;
    // 7F349B58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F349B5C:
    ctx->pc = 0x7F349B5Cu;
    // 7F349B5C: b       0x7F349DAC
    {
            goto label_7F349DAC;
    }

label_7F349B60:
    ctx->pc = 0x7F349B60u;
    ctx->downcount -= 2;
    // 7F349B60: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F349B64:
    ctx->pc = 0x7F349B64u;
    // 7F349B64: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349B68u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349B68:
    ctx->pc = 0x7F349B68u;
    ctx->downcount -= 2;
    // 7F349B68: cmplwi  r3, 0x0000
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

label_7F349B6C:
    ctx->pc = 0x7F349B6Cu;
    // 7F349B6C: bc    12, 2, 0x7F349B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349B8C;
        }
    }

label_7F349B70:
    ctx->pc = 0x7F349B70u;
    ctx->downcount -= 1;
    // 7F349B70: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349B74u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349B74:
    ctx->pc = 0x7F349B74u;
    ctx->downcount -= 2;
    // 7F349B74: stw     r3, 184(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349B78:
    ctx->pc = 0x7F349B78u;
    // 7F349B78: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349B7Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349B7C:
    ctx->pc = 0x7F349B7Cu;
    ctx->downcount -= 4;
    // 7F349B7C: stw     r3, 188(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349B80:
    ctx->pc = 0x7F349B80u;
    // 7F349B80: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F349B84:
    ctx->pc = 0x7F349B84u;
    // 7F349B84: stw     r0, 272(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349B88:
    ctx->pc = 0x7F349B88u;
    // 7F349B88: b       0x7F349B94
    {
            goto label_7F349B94;
    }

label_7F349B8C:
    ctx->pc = 0x7F349B8Cu;
    ctx->downcount -= 2;
    // 7F349B8C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F349B90:
    ctx->pc = 0x7F349B90u;
    // 7F349B90: b       0x7F349DAC
    {
            goto label_7F349DAC;
    }

label_7F349B94:
    ctx->pc = 0x7F349B94u;
    ctx->downcount -= 2;
    // 7F349B94: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F349B98:
    ctx->pc = 0x7F349B98u;
    // 7F349B98: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349B9Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349B9C:
    ctx->pc = 0x7F349B9Cu;
    ctx->downcount -= 2;
    // 7F349B9C: cmplwi  r3, 0x0000
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

label_7F349BA0:
    ctx->pc = 0x7F349BA0u;
    // 7F349BA0: bc    12, 2, 0x7F349BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349BCC;
        }
    }

label_7F349BA4:
    ctx->pc = 0x7F349BA4u;
    ctx->downcount -= 1;
    // 7F349BA4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F349BA8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F349BA8:
    ctx->pc = 0x7F349BA8u;
    ctx->downcount -= 2;
    // 7F349BA8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349BAC:
    ctx->pc = 0x7F349BACu;
    // 7F349BAC: bl      0x7F3C6780
    {
            ctx->lr = 0x7F349BB0u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F349BB0:
    ctx->pc = 0x7F349BB0u;
    ctx->downcount -= 3;
    // 7F349BB0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349BB4:
    ctx->pc = 0x7F349BB4u;
    // 7F349BB4: addi    r4, r24, 200
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(200);

label_7F349BB8:
    ctx->pc = 0x7F349BB8u;
    // 7F349BB8: bl      0x7F349DC0
    {
            ctx->lr = 0x7F349BBCu;
            goto label_7F349DC0;
    }

label_7F349BBC:
    ctx->pc = 0x7F349BBCu;
    ctx->downcount -= 4;
    // 7F349BBC: addi    r3, r24, 200
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(200);

label_7F349BC0:
    ctx->pc = 0x7F349BC0u;
    // 7F349BC0: addi    r4, r24, 32
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(32);

label_7F349BC4:
    ctx->pc = 0x7F349BC4u;
    // 7F349BC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F349BC8:
    ctx->pc = 0x7F349BC8u;
    // 7F349BC8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F349BCCu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F349BCC:
    ctx->pc = 0x7F349BCCu;
    ctx->downcount -= 2;
    // 7F349BCC: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F349BD0:
    ctx->pc = 0x7F349BD0u;
    // 7F349BD0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349BD4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349BD4:
    ctx->pc = 0x7F349BD4u;
    ctx->downcount -= 2;
    // 7F349BD4: cmplwi  r3, 0x0000
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

label_7F349BD8:
    ctx->pc = 0x7F349BD8u;
    // 7F349BD8: bc    12, 2, 0x7F349C1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C1C;
        }
    }

label_7F349BDC:
    ctx->pc = 0x7F349BDCu;
    ctx->downcount -= 1;
    // 7F349BDC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F349BE0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F349BE0:
    ctx->pc = 0x7F349BE0u;
    ctx->downcount -= 2;
    // 7F349BE0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349BE4:
    ctx->pc = 0x7F349BE4u;
    // 7F349BE4: bl      0x7F3C6780
    {
            ctx->lr = 0x7F349BE8u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F349BE8:
    ctx->pc = 0x7F349BE8u;
    ctx->downcount -= 3;
    // 7F349BE8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349BEC:
    ctx->pc = 0x7F349BECu;
    // 7F349BEC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F349BF0:
    ctx->pc = 0x7F349BF0u;
    // 7F349BF0: bl      0x7F349DC0
    {
            ctx->lr = 0x7F349BF4u;
            goto label_7F349DC0;
    }

label_7F349BF4:
    ctx->pc = 0x7F349BF4u;
    ctx->downcount -= 6;
    // 7F349BF4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F349BF8:
    ctx->pc = 0x7F349BF8u;
    // 7F349BF8: addi    r4, r24, 200
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(200);

label_7F349BFC:
    ctx->pc = 0x7F349BFCu;
    // 7F349BFC: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F349C00:
    ctx->pc = 0x7F349C00u;
    // 7F349C00: addi    r6, r24, 192
    ctx->gpr[6] = ctx->gpr[24] + (u32)(s32)(192);

label_7F349C04:
    ctx->pc = 0x7F349C04u;
    // 7F349C04: addi    r7, r24, 194
    ctx->gpr[7] = ctx->gpr[24] + (u32)(s32)(194);

label_7F349C08:
    ctx->pc = 0x7F349C08u;
    // 7F349C08: bl      0x7F349440
    {
            ctx->lr = 0x7F349C0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349440u;
                return;
            }
            goto label_7F349440;
    }

label_7F349C0C:
    ctx->pc = 0x7F349C0Cu;
    ctx->downcount -= 4;
    // 7F349C0C: lha     r0, 194(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(194);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349C10:
    ctx->pc = 0x7F349C10u;
    // 7F349C10: sth     r0, 198(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(198);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349C14:
    ctx->pc = 0x7F349C14u;
    // 7F349C14: lha     r0, 192(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(192);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F349C18:
    ctx->pc = 0x7F349C18u;
    // 7F349C18: sth     r0, 196(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F349C1C:
    ctx->pc = 0x7F349C1Cu;
    ctx->downcount -= 2;
    // 7F349C1C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F349C20:
    ctx->pc = 0x7F349C20u;
    // 7F349C20: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C24u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C24:
    ctx->pc = 0x7F349C24u;
    ctx->downcount -= 2;
    // 7F349C24: cmplwi  r3, 0x0000
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

label_7F349C28:
    ctx->pc = 0x7F349C28u;
    // 7F349C28: bc    12, 2, 0x7F349C34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C34;
        }
    }

label_7F349C2C:
    ctx->pc = 0x7F349C2Cu;
    ctx->downcount -= 1;
    // 7F349C2C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349C30u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349C30:
    ctx->pc = 0x7F349C30u;
    ctx->downcount -= 1;
    // 7F349C30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349C34:
    ctx->pc = 0x7F349C34u;
    ctx->downcount -= 2;
    // 7F349C34: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F349C38:
    ctx->pc = 0x7F349C38u;
    // 7F349C38: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C3Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C3C:
    ctx->pc = 0x7F349C3Cu;
    ctx->downcount -= 2;
    // 7F349C3C: cmplwi  r3, 0x0000
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

label_7F349C40:
    ctx->pc = 0x7F349C40u;
    // 7F349C40: bc    12, 2, 0x7F349C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C4C;
        }
    }

label_7F349C44:
    ctx->pc = 0x7F349C44u;
    ctx->downcount -= 1;
    // 7F349C44: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349C48u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349C48:
    ctx->pc = 0x7F349C48u;
    ctx->downcount -= 1;
    // 7F349C48: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349C4C:
    ctx->pc = 0x7F349C4Cu;
    ctx->downcount -= 2;
    // 7F349C4C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F349C50:
    ctx->pc = 0x7F349C50u;
    // 7F349C50: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C54u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C54:
    ctx->pc = 0x7F349C54u;
    ctx->downcount -= 2;
    // 7F349C54: cmplwi  r3, 0x0000
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

label_7F349C58:
    ctx->pc = 0x7F349C58u;
    // 7F349C58: bc    12, 2, 0x7F349C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C64;
        }
    }

label_7F349C5C:
    ctx->pc = 0x7F349C5Cu;
    ctx->downcount -= 1;
    // 7F349C5C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349C60u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349C60:
    ctx->pc = 0x7F349C60u;
    ctx->downcount -= 1;
    // 7F349C60: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349C64:
    ctx->pc = 0x7F349C64u;
    ctx->downcount -= 2;
    // 7F349C64: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F349C68:
    ctx->pc = 0x7F349C68u;
    // 7F349C68: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C6Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C6C:
    ctx->pc = 0x7F349C6Cu;
    ctx->downcount -= 2;
    // 7F349C6C: cmplwi  r3, 0x0000
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

label_7F349C70:
    ctx->pc = 0x7F349C70u;
    // 7F349C70: bc    12, 2, 0x7F349C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C7C;
        }
    }

label_7F349C74:
    ctx->pc = 0x7F349C74u;
    ctx->downcount -= 1;
    // 7F349C74: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349C78u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349C78:
    ctx->pc = 0x7F349C78u;
    ctx->downcount -= 1;
    // 7F349C78: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349C7C:
    ctx->pc = 0x7F349C7Cu;
    ctx->downcount -= 2;
    // 7F349C7C: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F349C80:
    ctx->pc = 0x7F349C80u;
    // 7F349C80: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C84u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C84:
    ctx->pc = 0x7F349C84u;
    ctx->downcount -= 2;
    // 7F349C84: cmplwi  r3, 0x0000
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

label_7F349C88:
    ctx->pc = 0x7F349C88u;
    // 7F349C88: bc    12, 2, 0x7F349C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349C94;
        }
    }

label_7F349C8C:
    ctx->pc = 0x7F349C8Cu;
    ctx->downcount -= 1;
    // 7F349C8C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349C90u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349C90:
    ctx->pc = 0x7F349C90u;
    ctx->downcount -= 1;
    // 7F349C90: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349C94:
    ctx->pc = 0x7F349C94u;
    ctx->downcount -= 2;
    // 7F349C94: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F349C98:
    ctx->pc = 0x7F349C98u;
    // 7F349C98: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349C9Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349C9C:
    ctx->pc = 0x7F349C9Cu;
    ctx->downcount -= 2;
    // 7F349C9C: cmplwi  r3, 0x0000
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

label_7F349CA0:
    ctx->pc = 0x7F349CA0u;
    // 7F349CA0: bc    12, 2, 0x7F349CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349CC8;
        }
    }

label_7F349CA4:
    ctx->pc = 0x7F349CA4u;
    ctx->downcount -= 1;
    // 7F349CA4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F349CA8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F349CA8:
    ctx->pc = 0x7F349CA8u;
    ctx->downcount -= 2;
    // 7F349CA8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349CAC:
    ctx->pc = 0x7F349CACu;
    // 7F349CAC: bl      0x7F3C6780
    {
            ctx->lr = 0x7F349CB0u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F349CB0:
    ctx->pc = 0x7F349CB0u;
    ctx->downcount -= 3;
    // 7F349CB0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F349CB4:
    ctx->pc = 0x7F349CB4u;
    // 7F349CB4: addi    r4, r24, 240
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(240);

label_7F349CB8:
    ctx->pc = 0x7F349CB8u;
    // 7F349CB8: bl      0x7F349DC0
    {
            ctx->lr = 0x7F349CBCu;
            goto label_7F349DC0;
    }

label_7F349CBC:
    ctx->pc = 0x7F349CBCu;
    ctx->downcount -= 3;
    // 7F349CBC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349CC0:
    ctx->pc = 0x7F349CC0u;
    // 7F349CC0: lfs     f0, -25332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F349CC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349CC4:
    ctx->pc = 0x7F349CC4u;
    // 7F349CC4: stfs     f0, 252(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F349CC4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349CC8:
    ctx->pc = 0x7F349CC8u;
    ctx->downcount -= 2;
    // 7F349CC8: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F349CCC:
    ctx->pc = 0x7F349CCCu;
    // 7F349CCC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F349CD0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F349CD0:
    ctx->pc = 0x7F349CD0u;
    ctx->downcount -= 2;
    // 7F349CD0: cmplwi  r3, 0x0000
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

label_7F349CD4:
    ctx->pc = 0x7F349CD4u;
    // 7F349CD4: bc    12, 2, 0x7F349CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349CF8;
        }
    }

label_7F349CD8:
    ctx->pc = 0x7F349CD8u;
    ctx->downcount -= 1;
    // 7F349CD8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F349CDCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F349CDC:
    ctx->pc = 0x7F349CDCu;
    ctx->downcount -= 4;
    // 7F349CDC: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F349CE0:
    ctx->pc = 0x7F349CE0u;
    // 7F349CE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349CE4:
    ctx->pc = 0x7F349CE4u;
    // 7F349CE4: addi    r3, r5, 28636
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28636);

label_7F349CE8:
    ctx->pc = 0x7F349CE8u;
    // 7F349CE8: bl      0x7F3B0CB4
    {
            ctx->lr = 0x7F349CECu;
            ctx->pc = 0x7F3B0CB4u;
            return;
    }

label_7F349CEC:
    ctx->pc = 0x7F349CECu;
    ctx->downcount -= 3;
    // 7F349CEC: addi    r0, r3, 444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(444);

label_7F349CF0:
    ctx->pc = 0x7F349CF0u;
    // 7F349CF0: stw     r0, 168(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349CF4:
    ctx->pc = 0x7F349CF4u;
    // 7F349CF4: b       0x7F349D00
    {
            goto label_7F349D00;
    }

label_7F349CF8:
    ctx->pc = 0x7F349CF8u;
    ctx->downcount -= 2;
    // 7F349CF8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F349CFC:
    ctx->pc = 0x7F349CFCu;
    // 7F349CFC: b       0x7F349DAC
    {
            goto label_7F349DAC;
    }

label_7F349D00:
    ctx->pc = 0x7F349D00u;
    ctx->downcount -= 17;
    // 7F349D00: lwz     r5, 240(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(240);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349D04:
    ctx->pc = 0x7F349D04u;
    // 7F349D04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349D08:
    ctx->pc = 0x7F349D08u;
    // 7F349D08: lwz     r0, 244(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349D0C:
    ctx->pc = 0x7F349D0Cu;
    // 7F349D0C: addi    r4, r3, -25332
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25332);

label_7F349D10:
    ctx->pc = 0x7F349D10u;
    // 7F349D10: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F349D14:
    ctx->pc = 0x7F349D14u;
    // 7F349D14: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F349D14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F349D18:
    ctx->pc = 0x7F349D18u;
    // 7F349D18: stw     r5, 256(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F349D1C:
    ctx->pc = 0x7F349D1Cu;
    // 7F349D1C: addi    r4, r3, 12808
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F349D20:
    ctx->pc = 0x7F349D20u;
    // 7F349D20: stw     r0, 260(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349D24:
    ctx->pc = 0x7F349D24u;
    // 7F349D24: lwz     r3, 248(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349D28:
    ctx->pc = 0x7F349D28u;
    // 7F349D28: lwz     r0, 252(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349D2C:
    ctx->pc = 0x7F349D2Cu;
    // 7F349D2C: stw     r3, 264(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349D30:
    ctx->pc = 0x7F349D30u;
    // 7F349D30: stw     r0, 268(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349D34:
    ctx->pc = 0x7F349D34u;
    // 7F349D34: stfs     f0, 268(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F349D34u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F349D38:
    ctx->pc = 0x7F349D38u;
    // 7F349D38: lwz     r3, 168(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349D3C:
    ctx->pc = 0x7F349D3Cu;
    // 7F349D3C: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F349D40:
    ctx->pc = 0x7F349D40u;
    // 7F349D40: bl      0x7F1F7D28
    {
            ctx->lr = 0x7F349D44u;
            ctx->pc = 0x7F1F7D28u;
            return;
    }

label_7F349D44:
    ctx->pc = 0x7F349D44u;
    ctx->downcount -= 2;
    // 7F349D44: cmpwi   r31, 0
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

label_7F349D48:
    ctx->pc = 0x7F349D48u;
    // 7F349D48: bc    12, 2, 0x7F349D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349D98;
        }
    }

label_7F349D4C:
    ctx->pc = 0x7F349D4Cu;
    ctx->downcount -= 18;
    // 7F349D4C: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F349D50:
    ctx->pc = 0x7F349D50u;
    // 7F349D50: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F349D54:
    ctx->pc = 0x7F349D54u;
    // 7F349D54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F349D58:
    ctx->pc = 0x7F349D58u;
    // 7F349D58: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F349D5C:
    ctx->pc = 0x7F349D5Cu;
    // 7F349D5C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349D60:
    ctx->pc = 0x7F349D60u;
    // 7F349D60: addi    r0, r24, 280
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(280);

label_7F349D64:
    ctx->pc = 0x7F349D64u;
    // 7F349D64: lfs     f1, -25344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F349D64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F349D68:
    ctx->pc = 0x7F349D68u;
    // 7F349D68: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F349D6C:
    ctx->pc = 0x7F349D6Cu;
    // 7F349D6C: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349D70:
    ctx->pc = 0x7F349D70u;
    // 7F349D70: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F349D74:
    ctx->pc = 0x7F349D74u;
    // 7F349D74: or   r9, r29, r29
    {
        ctx->gpr[9] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F349D78:
    ctx->pc = 0x7F349D78u;
    // 7F349D78: or   r10, r27, r27
    {
        ctx->gpr[10] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F349D7C:
    ctx->pc = 0x7F349D7Cu;
    // 7F349D7C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349D80:
    ctx->pc = 0x7F349D80u;
    // 7F349D80: addi    r6, r24, 240
    ctx->gpr[6] = ctx->gpr[24] + (u32)(s32)(240);

label_7F349D84:
    ctx->pc = 0x7F349D84u;
    // 7F349D84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F349D88:
    ctx->pc = 0x7F349D88u;
    // 7F349D88: lwz     r3, 188(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F349D8C:
    ctx->pc = 0x7F349D8Cu;
    // 7F349D8C: lwz     r5, 168(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F349D90:
    ctx->pc = 0x7F349D90u;
    // 7F349D90: bl      0x7F1EFA70
    {
            ctx->lr = 0x7F349D94u;
            ctx->pc = 0x7F1EFA70u;
            return;
    }

label_7F349D94:
    ctx->pc = 0x7F349D94u;
    ctx->downcount -= 1;
    // 7F349D94: stw     r3, 236(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349D98:
    ctx->pc = 0x7F349D98u;
    ctx->downcount -= 5;
    // 7F349D98: stw     r25, 176(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F349D9C:
    ctx->pc = 0x7F349D9Cu;
    // 7F349D9C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F349DA0:
    ctx->pc = 0x7F349DA0u;
    // 7F349DA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F349DA4:
    ctx->pc = 0x7F349DA4u;
    // 7F349DA4: stw     r26, 220(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F349DA8:
    ctx->pc = 0x7F349DA8u;
    // 7F349DA8: stw     r0, 180(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349DAC:
    ctx->pc = 0x7F349DACu;
    ctx->downcount -= 16;
    // 7F349DAC: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349DB0:
    ctx->pc = 0x7F349DB0u;
    // 7F349DB0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349DB4:
    ctx->pc = 0x7F349DB4u;
    // 7F349DB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349DB8:
    ctx->pc = 0x7F349DB8u;
    // 7F349DB8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F349DBC:
    ctx->pc = 0x7F349DBCu;
    // 7F349DBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349DC0:
    ctx->pc = 0x7F349DC0u;
    ctx->downcount -= 17;
    // 7F349DC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349DC4:
    ctx->pc = 0x7F349DC4u;
    // 7F349DC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349DC8:
    ctx->pc = 0x7F349DC8u;
    // 7F349DC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349DCC:
    ctx->pc = 0x7F349DCCu;
    // 7F349DCC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349DD0:
    ctx->pc = 0x7F349DD0u;
    // 7F349DD0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349DD4:
    ctx->pc = 0x7F349DD4u;
    // 7F349DD4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349DD8:
    ctx->pc = 0x7F349DD8u;
    // 7F349DD8: bl      0x7F349E14
    {
            ctx->lr = 0x7F349DDCu;
            goto label_7F349E14;
    }

label_7F349DDC:
    ctx->pc = 0x7F349DDCu;
    ctx->downcount -= 3;
    // 7F349DDC: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F349DE0:
    ctx->pc = 0x7F349DE0u;
    // 7F349DE0: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F349DE4:
    ctx->pc = 0x7F349DE4u;
    // 7F349DE4: bl      0x7F349E14
    {
            ctx->lr = 0x7F349DE8u;
            goto label_7F349E14;
    }

label_7F349DE8:
    ctx->pc = 0x7F349DE8u;
    ctx->downcount -= 3;
    // 7F349DE8: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F349DEC:
    ctx->pc = 0x7F349DECu;
    // 7F349DEC: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F349DF0:
    ctx->pc = 0x7F349DF0u;
    // 7F349DF0: bl      0x7F349E14
    {
            ctx->lr = 0x7F349DF4u;
            goto label_7F349E14;
    }

label_7F349DF4:
    ctx->pc = 0x7F349DF4u;
    ctx->downcount -= 3;
    // 7F349DF4: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F349DF8:
    ctx->pc = 0x7F349DF8u;
    // 7F349DF8: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F349DFC:
    ctx->pc = 0x7F349DFCu;
    // 7F349DFC: bl      0x7F349E14
    {
            ctx->lr = 0x7F349E00u;
            goto label_7F349E14;
    }

label_7F349E00:
    ctx->pc = 0x7F349E00u;
    ctx->downcount -= 16;
    // 7F349E00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349E04:
    ctx->pc = 0x7F349E04u;
    // 7F349E04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349E08:
    ctx->pc = 0x7F349E08u;
    // 7F349E08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349E0C:
    ctx->pc = 0x7F349E0Cu;
    // 7F349E0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349E10:
    ctx->pc = 0x7F349E10u;
    // 7F349E10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349E14:
    ctx->pc = 0x7F349E14u;
    ctx->downcount -= 6;
    // 7F349E14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349E18:
    ctx->pc = 0x7F349E18u;
    // 7F349E18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349E1C:
    ctx->pc = 0x7F349E1Cu;
    // 7F349E1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349E20:
    ctx->pc = 0x7F349E20u;
    // 7F349E20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349E24:
    ctx->pc = 0x7F349E24u;
    // 7F349E24: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349E28:
    ctx->pc = 0x7F349E28u;
    // 7F349E28: bl      0x7F349E44
    {
            ctx->lr = 0x7F349E2Cu;
            goto label_7F349E44;
    }

label_7F349E2C:
    ctx->pc = 0x7F349E2Cu;
    ctx->downcount -= 7;
    // 7F349E2C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F349E2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F349E30:
    ctx->pc = 0x7F349E30u;
    // 7F349E30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349E34:
    ctx->pc = 0x7F349E34u;
    // 7F349E34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F349E38:
    ctx->pc = 0x7F349E38u;
    // 7F349E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349E3C:
    ctx->pc = 0x7F349E3Cu;
    // 7F349E3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F349E40:
    ctx->pc = 0x7F349E40u;
    // 7F349E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349E44:
    ctx->pc = 0x7F349E44u;
    ctx->downcount -= 4;
    // 7F349E44: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F349E44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F349E44u);
        if (ctx->exception) return;
    }

label_7F349E48:
    ctx->pc = 0x7F349E48u;
    // 7F349E48: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F349E48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F349E48u);
        if (ctx->exception) return;
    }

label_7F349E4C:
    ctx->pc = 0x7F349E4Cu;
    // 7F349E4C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F349E4Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F349E50:
    ctx->pc = 0x7F349E50u;
    // 7F349E50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349E54:
    ctx->pc = 0x7F349E54u;
    ctx->downcount -= 21;
    // 7F349E54: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349E58:
    ctx->pc = 0x7F349E58u;
    // 7F349E58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349E5C:
    ctx->pc = 0x7F349E5Cu;
    // 7F349E5C: li      r5, 284
    ctx->gpr[5] = (u32)(s32)(284);

label_7F349E60:
    ctx->pc = 0x7F349E60u;
    // 7F349E60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F349E64:
    ctx->pc = 0x7F349E64u;
    // 7F349E64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349E68:
    ctx->pc = 0x7F349E68u;
    // 7F349E68: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349E6C:
    ctx->pc = 0x7F349E6Cu;
    // 7F349E6C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349E70:
    ctx->pc = 0x7F349E70u;
    // 7F349E70: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349E74:
    ctx->pc = 0x7F349E74u;
    // 7F349E74: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F349E78:
    ctx->pc = 0x7F349E78u;
    // 7F349E78: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F349E7C:
    ctx->pc = 0x7F349E7Cu;
    // 7F349E7C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F349E80u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F349E80:
    ctx->pc = 0x7F349E80u;
    ctx->downcount -= 2;
    // 7F349E80: or.   r31, r3, r3
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

label_7F349E84:
    ctx->pc = 0x7F349E84u;
    // 7F349E84: bc    12, 2, 0x7F349EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349EC4;
        }
    }

label_7F349E88:
    ctx->pc = 0x7F349E88u;
    ctx->downcount -= 5;
    // 7F349E88: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F349E8C:
    ctx->pc = 0x7F349E8Cu;
    // 7F349E8C: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F349E90:
    ctx->pc = 0x7F349E90u;
    // 7F349E90: addi    r4, r4, -27112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27112);

label_7F349E94:
    ctx->pc = 0x7F349E94u;
    // 7F349E94: addi    r5, r5, -27412
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27412);

label_7F349E98:
    ctx->pc = 0x7F349E98u;
    // 7F349E98: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F349E9Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F349E9C:
    ctx->pc = 0x7F349E9Cu;
    ctx->downcount -= 4;
    // 7F349E9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349EA0:
    ctx->pc = 0x7F349EA0u;
    // 7F349EA0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F349EA4:
    ctx->pc = 0x7F349EA4u;
    // 7F349EA4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F349EA8:
    ctx->pc = 0x7F349EA8u;
    // 7F349EA8: bl      0x7F349A64
    {
            ctx->lr = 0x7F349EACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349A64u;
                return;
            }
            goto label_7F349A64;
    }

label_7F349EAC:
    ctx->pc = 0x7F349EACu;
    ctx->downcount -= 2;
    // 7F349EAC: cmpwi   r3, 0
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

label_7F349EB0:
    ctx->pc = 0x7F349EB0u;
    // 7F349EB0: bc    4, 0, 0x7F349EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349EC4;
        }
    }

label_7F349EB4:
    ctx->pc = 0x7F349EB4u;
    ctx->downcount -= 2;
    // 7F349EB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349EB8:
    ctx->pc = 0x7F349EB8u;
    // 7F349EB8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F349EBCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F349EBC:
    ctx->pc = 0x7F349EBCu;
    ctx->downcount -= 2;
    // 7F349EBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F349EC0:
    ctx->pc = 0x7F349EC0u;
    // 7F349EC0: b       0x7F349EC8
    {
            goto label_7F349EC8;
    }

label_7F349EC4:
    ctx->pc = 0x7F349EC4u;
    ctx->downcount -= 1;
    // 7F349EC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F349EC8:
    ctx->pc = 0x7F349EC8u;
    ctx->downcount -= 16;
    // 7F349EC8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349ECC:
    ctx->pc = 0x7F349ECCu;
    // 7F349ECC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349ED0:
    ctx->pc = 0x7F349ED0u;
    // 7F349ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349ED4:
    ctx->pc = 0x7F349ED4u;
    // 7F349ED4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F349ED8:
    ctx->pc = 0x7F349ED8u;
    // 7F349ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349EDC:
    ctx->pc = 0x7F349EDCu;
    ctx->downcount -= 34;
    // 7F349EDC: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349EE0:
    ctx->pc = 0x7F349EE0u;
    // 7F349EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349EE4:
    ctx->pc = 0x7F349EE4u;
    // 7F349EE4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349EE8:
    ctx->pc = 0x7F349EE8u;
    // 7F349EE8: stmw     r16, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F349EEC:
    ctx->pc = 0x7F349EECu;
    // 7F349EEC: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F349EF0:
    ctx->pc = 0x7F349EF0u;
    // 7F349EF0: or   r20, r4, r4
    {
        ctx->gpr[20] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F349EF4:
    ctx->pc = 0x7F349EF4u;
    // 7F349EF4: or   r21, r5, r5
    {
        ctx->gpr[21] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F349EF8:
    ctx->pc = 0x7F349EF8u;
    // 7F349EF8: or   r22, r6, r6
    {
        ctx->gpr[22] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F349EFC:
    ctx->pc = 0x7F349EFCu;
    // 7F349EFC: lwz     r27, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F349F00:
    ctx->pc = 0x7F349F00u;
    // 7F349F00: lwz     r28, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F349F04:
    ctx->pc = 0x7F349F04u;
    // 7F349F04: or   r23, r7, r7
    {
        ctx->gpr[23] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F349F08:
    ctx->pc = 0x7F349F08u;
    // 7F349F08: lwz     r29, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F349F0C:
    ctx->pc = 0x7F349F0Cu;
    // 7F349F0C: or   r24, r8, r8
    {
        ctx->gpr[24] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F349F10:
    ctx->pc = 0x7F349F10u;
    // 7F349F10: lwz     r30, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F349F14:
    ctx->pc = 0x7F349F14u;
    // 7F349F14: or   r25, r9, r9
    {
        ctx->gpr[25] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F349F18:
    ctx->pc = 0x7F349F18u;
    // 7F349F18: lwz     r31, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F349F1C:
    ctx->pc = 0x7F349F1Cu;
    // 7F349F1C: or   r26, r10, r10
    {
        ctx->gpr[26] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F349F20:
    ctx->pc = 0x7F349F20u;
    // 7F349F20: lwz     r16, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F349F24:
    ctx->pc = 0x7F349F24u;
    // 7F349F24: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F349F28:
    ctx->pc = 0x7F349F28u;
    // 7F349F28: lwz     r18, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F349F2C:
    ctx->pc = 0x7F349F2Cu;
    // 7F349F2C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F349F30:
    ctx->pc = 0x7F349F30u;
    // 7F349F30: li      r5, 284
    ctx->gpr[5] = (u32)(s32)(284);

label_7F349F34:
    ctx->pc = 0x7F349F34u;
    // 7F349F34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F349F38:
    ctx->pc = 0x7F349F38u;
    // 7F349F38: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F349F3Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F349F3C:
    ctx->pc = 0x7F349F3Cu;
    ctx->downcount -= 2;
    // 7F349F3C: or.   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[17];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F349F40:
    ctx->pc = 0x7F349F40u;
    // 7F349F40: bc    12, 2, 0x7F349FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F349FB4;
        }
    }

label_7F349F44:
    ctx->pc = 0x7F349F44u;
    ctx->downcount -= 5;
    // 7F349F44: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F349F48:
    ctx->pc = 0x7F349F48u;
    // 7F349F48: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F349F4C:
    ctx->pc = 0x7F349F4Cu;
    // 7F349F4C: addi    r4, r4, -27112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27112);

label_7F349F50:
    ctx->pc = 0x7F349F50u;
    // 7F349F50: addi    r5, r5, -27412
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27412);

label_7F349F54:
    ctx->pc = 0x7F349F54u;
    // 7F349F54: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F349F58u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F349F58:
    ctx->pc = 0x7F349F58u;
    ctx->downcount -= 17;
    // 7F349F58: stw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F349F5C:
    ctx->pc = 0x7F349F5Cu;
    // 7F349F5C: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F349F60:
    ctx->pc = 0x7F349F60u;
    // 7F349F60: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F349F64:
    ctx->pc = 0x7F349F64u;
    // 7F349F64: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F349F68:
    ctx->pc = 0x7F349F68u;
    // 7F349F68: stw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F349F6C:
    ctx->pc = 0x7F349F6Cu;
    // 7F349F6C: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F349F70:
    ctx->pc = 0x7F349F70u;
    // 7F349F70: or   r7, r22, r22
    {
        ctx->gpr[7] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F349F74:
    ctx->pc = 0x7F349F74u;
    // 7F349F74: or   r8, r23, r23
    {
        ctx->gpr[8] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F349F78:
    ctx->pc = 0x7F349F78u;
    // 7F349F78: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F349F7C:
    ctx->pc = 0x7F349F7Cu;
    // 7F349F7C: or   r9, r24, r24
    {
        ctx->gpr[9] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F349F80:
    ctx->pc = 0x7F349F80u;
    // 7F349F80: or   r10, r25, r25
    {
        ctx->gpr[10] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F349F84:
    ctx->pc = 0x7F349F84u;
    // 7F349F84: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F349F88:
    ctx->pc = 0x7F349F88u;
    // 7F349F88: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F349F8C:
    ctx->pc = 0x7F349F8Cu;
    // 7F349F8C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F349F90:
    ctx->pc = 0x7F349F90u;
    // 7F349F90: stw     r16, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F349F94:
    ctx->pc = 0x7F349F94u;
    // 7F349F94: stw     r18, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F349F98:
    ctx->pc = 0x7F349F98u;
    // 7F349F98: bl      0x7F349824
    {
            ctx->lr = 0x7F349F9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F349824u;
                return;
            }
            goto label_7F349824;
    }

label_7F349F9C:
    ctx->pc = 0x7F349F9Cu;
    ctx->downcount -= 2;
    // 7F349F9C: cmpwi   r3, 0
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

label_7F349FA0:
    ctx->pc = 0x7F349FA0u;
    // 7F349FA0: bc    4, 0, 0x7F349FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F349FB4;
        }
    }

label_7F349FA4:
    ctx->pc = 0x7F349FA4u;
    ctx->downcount -= 2;
    // 7F349FA4: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F349FA8:
    ctx->pc = 0x7F349FA8u;
    // 7F349FA8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F349FACu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F349FAC:
    ctx->pc = 0x7F349FACu;
    ctx->downcount -= 2;
    // 7F349FAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F349FB0:
    ctx->pc = 0x7F349FB0u;
    // 7F349FB0: b       0x7F349FB8
    {
            goto label_7F349FB8;
    }

label_7F349FB4:
    ctx->pc = 0x7F349FB4u;
    ctx->downcount -= 1;
    // 7F349FB4: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F349FB8:
    ctx->pc = 0x7F349FB8u;
    ctx->downcount -= 16;
    // 7F349FB8: lmw     r16, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F349FBC:
    ctx->pc = 0x7F349FBCu;
    // 7F349FBC: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F349FC0:
    ctx->pc = 0x7F349FC0u;
    // 7F349FC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F349FC4:
    ctx->pc = 0x7F349FC4u;
    // 7F349FC4: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F349FC8:
    ctx->pc = 0x7F349FC8u;
    // 7F349FC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F349FCC:
    ctx->pc = 0x7F349FCCu;
    ctx->downcount -= 12;
    // 7F349FCC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F349FD0:
    ctx->pc = 0x7F349FD0u;
    // 7F349FD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F349FD4:
    ctx->pc = 0x7F349FD4u;
    // 7F349FD4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F349FD8:
    ctx->pc = 0x7F349FD8u;
    // 7F349FD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349FDC:
    ctx->pc = 0x7F349FDCu;
    // 7F349FDC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F349FE0:
    ctx->pc = 0x7F349FE0u;
    // 7F349FE0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F349FE4:
    ctx->pc = 0x7F349FE4u;
    // 7F349FE4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F349FE8:
    ctx->pc = 0x7F349FE8u;
    // 7F349FE8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F349FEC:
    ctx->pc = 0x7F349FECu;
    // 7F349FEC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F349FF0:
    ctx->pc = 0x7F349FF0u;
    // 7F349FF0: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F349FF4:
    ctx->pc = 0x7F349FF4u;
    // 7F349FF4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F349FF8:
    ctx->pc = 0x7F349FF8u;
    // 7F349FF8: bl      0x7F3C9494
    {
            ctx->lr = 0x7F349FFCu;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F349FFC:
    ctx->pc = 0x7F349FFCu;
    ctx->downcount -= 5;
    // 7F349FFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A000:
    ctx->pc = 0x7F34A000u;
    // 7F34A000: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A004:
    ctx->pc = 0x7F34A004u;
    // 7F34A004: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34A008:
    ctx->pc = 0x7F34A008u;
    // 7F34A008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A00C:
    ctx->pc = 0x7F34A00Cu;
    ctx->downcount -= 12;
    // 7F34A00C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A010:
    ctx->pc = 0x7F34A010u;
    // 7F34A010: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A014:
    ctx->pc = 0x7F34A014u;
    // 7F34A014: li      r5, 19
    ctx->gpr[5] = (u32)(s32)(19);

label_7F34A018:
    ctx->pc = 0x7F34A018u;
    // 7F34A018: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A01C:
    ctx->pc = 0x7F34A01Cu;
    // 7F34A01C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A020:
    ctx->pc = 0x7F34A020u;
    // 7F34A020: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F34A024:
    ctx->pc = 0x7F34A024u;
    // 7F34A024: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A028:
    ctx->pc = 0x7F34A028u;
    // 7F34A028: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F34A02C:
    ctx->pc = 0x7F34A02Cu;
    // 7F34A02C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34A030:
    ctx->pc = 0x7F34A030u;
    // 7F34A030: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A034:
    ctx->pc = 0x7F34A034u;
    // 7F34A034: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A038:
    ctx->pc = 0x7F34A038u;
    // 7F34A038: bl      0x7F3C9494
    {
            ctx->lr = 0x7F34A03Cu;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F34A03C:
    ctx->pc = 0x7F34A03Cu;
    ctx->downcount -= 5;
    // 7F34A03C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A040:
    ctx->pc = 0x7F34A040u;
    // 7F34A040: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A044:
    ctx->pc = 0x7F34A044u;
    // 7F34A044: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34A048:
    ctx->pc = 0x7F34A048u;
    // 7F34A048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A04C:
    ctx->pc = 0x7F34A04Cu;
    ctx->downcount -= 13;
    // 7F34A04C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A050:
    ctx->pc = 0x7F34A050u;
    // 7F34A050: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A054:
    ctx->pc = 0x7F34A054u;
    // 7F34A054: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_7F34A058:
    ctx->pc = 0x7F34A058u;
    // 7F34A058: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A05C:
    ctx->pc = 0x7F34A05Cu;
    // 7F34A05C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A060:
    ctx->pc = 0x7F34A060u;
    // 7F34A060: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F34A064:
    ctx->pc = 0x7F34A064u;
    // 7F34A064: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A068:
    ctx->pc = 0x7F34A068u;
    // 7F34A068: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34A06C:
    ctx->pc = 0x7F34A06Cu;
    // 7F34A06C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F34A070:
    ctx->pc = 0x7F34A070u;
    // 7F34A070: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A074:
    ctx->pc = 0x7F34A074u;
    // 7F34A074: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34A078:
    ctx->pc = 0x7F34A078u;
    // 7F34A078: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A07C:
    ctx->pc = 0x7F34A07Cu;
    // 7F34A07C: bl      0x7F3C9494
    {
            ctx->lr = 0x7F34A080u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F34A080:
    ctx->pc = 0x7F34A080u;
    ctx->downcount -= 5;
    // 7F34A080: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A084:
    ctx->pc = 0x7F34A084u;
    // 7F34A084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A088:
    ctx->pc = 0x7F34A088u;
    // 7F34A088: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34A08C:
    ctx->pc = 0x7F34A08Cu;
    // 7F34A08C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A090:
    ctx->pc = 0x7F34A090u;
    ctx->downcount -= 13;
    // 7F34A090: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A094:
    ctx->pc = 0x7F34A094u;
    // 7F34A094: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A098:
    ctx->pc = 0x7F34A098u;
    // 7F34A098: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_7F34A09C:
    ctx->pc = 0x7F34A09Cu;
    // 7F34A09C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A0A0:
    ctx->pc = 0x7F34A0A0u;
    // 7F34A0A0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A0A4:
    ctx->pc = 0x7F34A0A4u;
    // 7F34A0A4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F34A0A8:
    ctx->pc = 0x7F34A0A8u;
    // 7F34A0A8: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A0AC:
    ctx->pc = 0x7F34A0ACu;
    // 7F34A0AC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34A0B0:
    ctx->pc = 0x7F34A0B0u;
    // 7F34A0B0: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F34A0B4:
    ctx->pc = 0x7F34A0B4u;
    // 7F34A0B4: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A0B8:
    ctx->pc = 0x7F34A0B8u;
    // 7F34A0B8: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34A0BC:
    ctx->pc = 0x7F34A0BCu;
    // 7F34A0BC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A0C0:
    ctx->pc = 0x7F34A0C0u;
    // 7F34A0C0: bl      0x7F3C9494
    {
            ctx->lr = 0x7F34A0C4u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F34A0C4:
    ctx->pc = 0x7F34A0C4u;
    ctx->downcount -= 5;
    // 7F34A0C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A0C8:
    ctx->pc = 0x7F34A0C8u;
    // 7F34A0C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A0CC:
    ctx->pc = 0x7F34A0CCu;
    // 7F34A0CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34A0D0:
    ctx->pc = 0x7F34A0D0u;
    // 7F34A0D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A0D4:
    ctx->pc = 0x7F34A0D4u;
    ctx->downcount -= 2;
    // 7F34A0D4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A0D8:
    ctx->pc = 0x7F34A0D8u;
    // 7F34A0D8: bc    4, 6, 0x7F34A0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A0FC;
        }
    }

label_7F34A0DC:
    ctx->pc = 0x7F34A0DCu;
    ctx->downcount -= 8;
    // 7F34A0DC: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F34A0E0:
    ctx->pc = 0x7F34A0E0u;
    // 7F34A0E0: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F34A0E4:
    ctx->pc = 0x7F34A0E4u;
    // 7F34A0E4: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F34A0E8:
    ctx->pc = 0x7F34A0E8u;
    // 7F34A0E8: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_7F34A0EC:
    ctx->pc = 0x7F34A0ECu;
    // 7F34A0EC: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_7F34A0F0:
    ctx->pc = 0x7F34A0F0u;
    // 7F34A0F0: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_7F34A0F4:
    ctx->pc = 0x7F34A0F4u;
    // 7F34A0F4: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_7F34A0F8:
    ctx->pc = 0x7F34A0F8u;
    // 7F34A0F8: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A0F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_7F34A0FC:
    ctx->pc = 0x7F34A0FCu;
    ctx->downcount -= 11;
    // 7F34A0FC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A100:
    ctx->pc = 0x7F34A100u;
    // 7F34A100: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F34A104:
    ctx->pc = 0x7F34A104u;
    // 7F34A104: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A108:
    ctx->pc = 0x7F34A108u;
    // 7F34A108: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34A10C:
    ctx->pc = 0x7F34A10Cu;
    // 7F34A10C: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F34A110:
    ctx->pc = 0x7F34A110u;
    // 7F34A110: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F34A114:
    ctx->pc = 0x7F34A114u;
    // 7F34A114: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F34A118:
    ctx->pc = 0x7F34A118u;
    // 7F34A118: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F34A11C:
    ctx->pc = 0x7F34A11Cu;
    // 7F34A11C: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F34A120:
    ctx->pc = 0x7F34A120u;
    // 7F34A120: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F34A124:
    ctx->pc = 0x7F34A124u;
    // 7F34A124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A128:
    ctx->pc = 0x7F34A128u;
    ctx->downcount -= 52;
    // 7F34A128: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A12C:
    ctx->pc = 0x7F34A12Cu;
    // 7F34A12C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A130:
    ctx->pc = 0x7F34A130u;
    // 7F34A130: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F34A134:
    ctx->pc = 0x7F34A134u;
    // 7F34A134: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A138:
    ctx->pc = 0x7F34A138u;
    // 7F34A138: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34A13C:
    ctx->pc = 0x7F34A13Cu;
    // 7F34A13C: lfs     f2, -25316(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F34A13Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34A140:
    ctx->pc = 0x7F34A140u;
    // 7F34A140: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34A144:
    ctx->pc = 0x7F34A144u;
    // 7F34A144: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A148:
    ctx->pc = 0x7F34A148u;
    // 7F34A148: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34A14C:
    ctx->pc = 0x7F34A14Cu;
    // 7F34A14C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A150:
    ctx->pc = 0x7F34A150u;
    // 7F34A150: lha     r5, 530(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(530);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A154:
    ctx->pc = 0x7F34A154u;
    // 7F34A154: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A158:
    ctx->pc = 0x7F34A158u;
    // 7F34A158: addi    r6, r3, -25312
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-25312);

label_7F34A15C:
    ctx->pc = 0x7F34A15Cu;
    // 7F34A15C: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F34A160:
    ctx->pc = 0x7F34A160u;
    // 7F34A160: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34A160u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A164:
    ctx->pc = 0x7F34A164u;
    // 7F34A164: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34A168:
    ctx->pc = 0x7F34A168u;
    // 7F34A168: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A16C:
    ctx->pc = 0x7F34A16Cu;
    // 7F34A16C: addi    r5, r3, -25304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25304);

label_7F34A170:
    ctx->pc = 0x7F34A170u;
    // 7F34A170: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A174:
    ctx->pc = 0x7F34A174u;
    // 7F34A174: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34A178:
    ctx->pc = 0x7F34A178u;
    // 7F34A178: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F34A17C:
    ctx->pc = 0x7F34A17Cu;
    // 7F34A17C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A17Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F34A180:
    ctx->pc = 0x7F34A180u;
    // 7F34A180: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34A180u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A184:
    ctx->pc = 0x7F34A184u;
    // 7F34A184: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A184u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F34A188:
    ctx->pc = 0x7F34A188u;
    // 7F34A188: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A188u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34A18C:
    ctx->pc = 0x7F34A18Cu;
    // 7F34A18C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F34A190u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F34A190:
    ctx->pc = 0x7F34A190u;
    ctx->downcount -= 36;
    // 7F34A190: lha     r3, 528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(528);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A194:
    ctx->pc = 0x7F34A194u;
    // 7F34A194: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34A198:
    ctx->pc = 0x7F34A198u;
    // 7F34A198: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F34A19C:
    ctx->pc = 0x7F34A19Cu;
    // 7F34A19C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34A1A0:
    ctx->pc = 0x7F34A1A0u;
    // 7F34A1A0: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F34A1A4:
    ctx->pc = 0x7F34A1A4u;
    // 7F34A1A4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A1A8:
    ctx->pc = 0x7F34A1A8u;
    // 7F34A1A8: lfs     f2, -25316(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34A1A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34A1AC:
    ctx->pc = 0x7F34A1ACu;
    // 7F34A1AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A1B0:
    ctx->pc = 0x7F34A1B0u;
    // 7F34A1B0: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A1B4:
    ctx->pc = 0x7F34A1B4u;
    // 7F34A1B4: addi    r4, r5, -25312
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-25312);

label_7F34A1B8:
    ctx->pc = 0x7F34A1B8u;
    // 7F34A1B8: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34A1B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A1BC:
    ctx->pc = 0x7F34A1BCu;
    // 7F34A1BC: addi    r5, r3, -25304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25304);

label_7F34A1C0:
    ctx->pc = 0x7F34A1C0u;
    // 7F34A1C0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A1C4:
    ctx->pc = 0x7F34A1C4u;
    // 7F34A1C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A1C8:
    ctx->pc = 0x7F34A1C8u;
    // 7F34A1C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A1CC:
    ctx->pc = 0x7F34A1CCu;
    // 7F34A1CC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A1CCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F34A1D0:
    ctx->pc = 0x7F34A1D0u;
    // 7F34A1D0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34A1D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A1D4:
    ctx->pc = 0x7F34A1D4u;
    // 7F34A1D4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A1D4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F34A1D8:
    ctx->pc = 0x7F34A1D8u;
    // 7F34A1D8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A1D8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34A1DC:
    ctx->pc = 0x7F34A1DCu;
    // 7F34A1DC: bl      0x7F114738
    {
            ctx->lr = 0x7F34A1E0u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F34A1E0:
    ctx->pc = 0x7F34A1E0u;
    ctx->downcount -= 36;
    // 7F34A1E0: lha     r3, 532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(532);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A1E4:
    ctx->pc = 0x7F34A1E4u;
    // 7F34A1E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34A1E8:
    ctx->pc = 0x7F34A1E8u;
    // 7F34A1E8: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F34A1EC:
    ctx->pc = 0x7F34A1ECu;
    // 7F34A1EC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34A1F0:
    ctx->pc = 0x7F34A1F0u;
    // 7F34A1F0: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F34A1F4:
    ctx->pc = 0x7F34A1F4u;
    // 7F34A1F4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A1F8:
    ctx->pc = 0x7F34A1F8u;
    // 7F34A1F8: lfs     f2, -25316(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34A1F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34A1FC:
    ctx->pc = 0x7F34A1FCu;
    // 7F34A1FC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A200:
    ctx->pc = 0x7F34A200u;
    // 7F34A200: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A204:
    ctx->pc = 0x7F34A204u;
    // 7F34A204: addi    r4, r5, -25312
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-25312);

label_7F34A208:
    ctx->pc = 0x7F34A208u;
    // 7F34A208: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34A208u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A20C:
    ctx->pc = 0x7F34A20Cu;
    // 7F34A20C: addi    r5, r3, -25304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25304);

label_7F34A210:
    ctx->pc = 0x7F34A210u;
    // 7F34A210: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34A214:
    ctx->pc = 0x7F34A214u;
    // 7F34A214: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A218:
    ctx->pc = 0x7F34A218u;
    // 7F34A218: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A21C:
    ctx->pc = 0x7F34A21Cu;
    // 7F34A21C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A21Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F34A220:
    ctx->pc = 0x7F34A220u;
    // 7F34A220: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34A220u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A224:
    ctx->pc = 0x7F34A224u;
    // 7F34A224: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A224u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F34A228:
    ctx->pc = 0x7F34A228u;
    // 7F34A228: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A228u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34A22C:
    ctx->pc = 0x7F34A22Cu;
    // 7F34A22C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F34A230u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F34A230:
    ctx->pc = 0x7F34A230u;
    ctx->downcount -= 3;
    // 7F34A230: lwz     r6, 612(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(612);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A234:
    ctx->pc = 0x7F34A234u;
    // 7F34A234: cmplwi  r6, 0x0000
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

label_7F34A238:
    ctx->pc = 0x7F34A238u;
    // 7F34A238: bc    12, 2, 0x7F34A298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A298;
        }
    }

label_7F34A23C:
    ctx->pc = 0x7F34A23Cu;
    ctx->downcount -= 10;
    // 7F34A23C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A240:
    ctx->pc = 0x7F34A240u;
    // 7F34A240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A244:
    ctx->pc = 0x7F34A244u;
    // 7F34A244: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A248:
    ctx->pc = 0x7F34A248u;
    // 7F34A248: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A24C:
    ctx->pc = 0x7F34A24Cu;
    // 7F34A24C: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34A250:
    ctx->pc = 0x7F34A250u;
    // 7F34A250: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A254:
    ctx->pc = 0x7F34A254u;
    // 7F34A254: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A258:
    ctx->pc = 0x7F34A258u;
    // 7F34A258: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A25C:
    ctx->pc = 0x7F34A25Cu;
    // 7F34A25C: lwz     r4, 608(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(608);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A260:
    ctx->pc = 0x7F34A260u;
    // 7F34A260: bl      0x80025A80
    {
            ctx->lr = 0x7F34A264u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F34A264:
    ctx->pc = 0x7F34A264u;
    ctx->downcount -= 4;
    // 7F34A264: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F34A268:
    ctx->pc = 0x7F34A268u;
    // 7F34A268: addi    r4, r30, 496
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(496);

label_7F34A26C:
    ctx->pc = 0x7F34A26Cu;
    // 7F34A26C: addi    r5, r30, 512
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(512);

label_7F34A270:
    ctx->pc = 0x7F34A270u;
    // 7F34A270: bl      0x800261D8
    {
            ctx->lr = 0x7F34A274u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F34A274:
    ctx->pc = 0x7F34A274u;
    ctx->downcount -= 9;
    // 7F34A274: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A278:
    ctx->pc = 0x7F34A278u;
    // 7F34A278: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A27C:
    ctx->pc = 0x7F34A27Cu;
    // 7F34A27C: stw     r3, 496(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A280:
    ctx->pc = 0x7F34A280u;
    // 7F34A280: stw     r0, 500(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A284:
    ctx->pc = 0x7F34A284u;
    // 7F34A284: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A288:
    ctx->pc = 0x7F34A288u;
    // 7F34A288: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A28C:
    ctx->pc = 0x7F34A28Cu;
    // 7F34A28C: stw     r3, 504(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A290:
    ctx->pc = 0x7F34A290u;
    // 7F34A290: stw     r0, 508(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A294:
    ctx->pc = 0x7F34A294u;
    // 7F34A294: b       0x7F34A2B0
    {
            goto label_7F34A2B0;
    }

label_7F34A298:
    ctx->pc = 0x7F34A298u;
    ctx->downcount -= 6;
    // 7F34A298: lwz     r3, 496(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A29C:
    ctx->pc = 0x7F34A29Cu;
    // 7F34A29C: lwz     r0, 500(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A2A0:
    ctx->pc = 0x7F34A2A0u;
    // 7F34A2A0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A2A4:
    ctx->pc = 0x7F34A2A4u;
    // 7F34A2A4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A2A8:
    ctx->pc = 0x7F34A2A8u;
    // 7F34A2A8: lwz     r0, 504(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A2AC:
    ctx->pc = 0x7F34A2ACu;
    // 7F34A2AC: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A2B0:
    ctx->pc = 0x7F34A2B0u;
    ctx->downcount -= 4;
    // 7F34A2B0: lwz     r5, 568(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(568);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A2B4:
    ctx->pc = 0x7F34A2B4u;
    // 7F34A2B4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A2B8:
    ctx->pc = 0x7F34A2B8u;
    // 7F34A2B8: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F34A2BC:
    ctx->pc = 0x7F34A2BCu;
    // 7F34A2BC: bl      0x7F014964
    {
            ctx->lr = 0x7F34A2C0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F34A2C0:
    ctx->pc = 0x7F34A2C0u;
    ctx->downcount -= 16;
    // 7F34A2C0: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34A2C4:
    ctx->pc = 0x7F34A2C4u;
    // 7F34A2C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A2C8:
    ctx->pc = 0x7F34A2C8u;
    // 7F34A2C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A2CC:
    ctx->pc = 0x7F34A2CCu;
    // 7F34A2CC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34A2D0:
    ctx->pc = 0x7F34A2D0u;
    // 7F34A2D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A2D4:
    ctx->pc = 0x7F34A2D4u;
    ctx->downcount -= 21;
    // 7F34A2D4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A2D8:
    ctx->pc = 0x7F34A2D8u;
    // 7F34A2D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A2DC:
    ctx->pc = 0x7F34A2DCu;
    // 7F34A2DC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A2E0:
    ctx->pc = 0x7F34A2E0u;
    // 7F34A2E0: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34A2E4:
    ctx->pc = 0x7F34A2E4u;
    // 7F34A2E4: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F34A2E8:
    ctx->pc = 0x7F34A2E8u;
    // 7F34A2E8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34A2EC:
    ctx->pc = 0x7F34A2ECu;
    // 7F34A2EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A2F0:
    ctx->pc = 0x7F34A2F0u;
    // 7F34A2F0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34A2F4:
    ctx->pc = 0x7F34A2F4u;
    // 7F34A2F4: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34A2F8:
    ctx->pc = 0x7F34A2F8u;
    // 7F34A2F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34A2FC:
    ctx->pc = 0x7F34A2FCu;
    // 7F34A2FC: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F34A300u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F34A300:
    ctx->pc = 0x7F34A300u;
    ctx->downcount -= 2;
    // 7F34A300: or.   r31, r3, r3
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

label_7F34A304:
    ctx->pc = 0x7F34A304u;
    // 7F34A304: bc    12, 2, 0x7F34A330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A330;
        }
    }

label_7F34A308:
    ctx->pc = 0x7F34A308u;
    ctx->downcount -= 1;
    // 7F34A308: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F34A30Cu;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F34A30C:
    ctx->pc = 0x7F34A30Cu;
    ctx->downcount -= 3;
    // 7F34A30C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34A310:
    ctx->pc = 0x7F34A310u;
    // 7F34A310: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F34A314:
    ctx->pc = 0x7F34A314u;
    // 7F34A314: bl      0x7F34A128
    {
            ctx->lr = 0x7F34A318u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A128u;
                return;
            }
            goto label_7F34A128;
    }

label_7F34A318:
    ctx->pc = 0x7F34A318u;
    ctx->downcount -= 2;
    // 7F34A318: cmplwi  r30, 0x0000
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

label_7F34A31C:
    ctx->pc = 0x7F34A31Cu;
    // 7F34A31C: bc    12, 2, 0x7F34A330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A330;
        }
    }

label_7F34A320:
    ctx->pc = 0x7F34A320u;
    ctx->downcount -= 2;
    // 7F34A320: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A324:
    ctx->pc = 0x7F34A324u;
    // 7F34A324: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F34A328u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F34A328:
    ctx->pc = 0x7F34A328u;
    ctx->downcount -= 2;
    // 7F34A328: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A32C:
    ctx->pc = 0x7F34A32Cu;
    // 7F34A32C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F34A330u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F34A330:
    ctx->pc = 0x7F34A330u;
    ctx->downcount -= 17;
    // 7F34A330: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A334:
    ctx->pc = 0x7F34A334u;
    // 7F34A334: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34A338:
    ctx->pc = 0x7F34A338u;
    // 7F34A338: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A33C:
    ctx->pc = 0x7F34A33Cu;
    // 7F34A33C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A340:
    ctx->pc = 0x7F34A340u;
    // 7F34A340: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34A344:
    ctx->pc = 0x7F34A344u;
    // 7F34A344: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A348:
    ctx->pc = 0x7F34A348u;
    ctx->downcount -= 9;
    // 7F34A348: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A34C:
    ctx->pc = 0x7F34A34Cu;
    // 7F34A34C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A350:
    ctx->pc = 0x7F34A350u;
    // 7F34A350: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34A354:
    ctx->pc = 0x7F34A354u;
    // 7F34A354: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A358:
    ctx->pc = 0x7F34A358u;
    // 7F34A358: lfs     f1, -25300(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34A358u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34A35C:
    ctx->pc = 0x7F34A35Cu;
    // 7F34A35C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34A360:
    ctx->pc = 0x7F34A360u;
    // 7F34A360: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A364:
    ctx->pc = 0x7F34A364u;
    // 7F34A364: addi    r3, r31, 496
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(496);

label_7F34A368:
    ctx->pc = 0x7F34A368u;
    // 7F34A368: bl      0x7F3BC540
    {
            ctx->lr = 0x7F34A36Cu;
            ctx->pc = 0x7F3BC540u;
            return;
    }

label_7F34A36C:
    ctx->pc = 0x7F34A36Cu;
    ctx->downcount -= 4;
    // 7F34A36C: lwz     r4, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A370:
    ctx->pc = 0x7F34A370u;
    // 7F34A370: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A374:
    ctx->pc = 0x7F34A374u;
    // 7F34A374: lwz     r5, 544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A378:
    ctx->pc = 0x7F34A378u;
    // 7F34A378: bl      0x7F34A2D4
    {
            ctx->lr = 0x7F34A37Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A2D4u;
                return;
            }
            goto label_7F34A2D4;
    }

label_7F34A37C:
    ctx->pc = 0x7F34A37Cu;
    ctx->downcount -= 4;
    // 7F34A37C: stw     r3, 544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A380:
    ctx->pc = 0x7F34A380u;
    // 7F34A380: lwz     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A384:
    ctx->pc = 0x7F34A384u;
    // 7F34A384: cmplwi  r3, 0x0000
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

label_7F34A388:
    ctx->pc = 0x7F34A388u;
    // 7F34A388: bc    12, 2, 0x7F34A398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A398;
        }
    }

label_7F34A38C:
    ctx->pc = 0x7F34A38Cu;
    ctx->downcount -= 3;
    // 7F34A38C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A390:
    ctx->pc = 0x7F34A390u;
    // 7F34A390: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F34A394:
    ctx->pc = 0x7F34A394u;
    // 7F34A394: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A398:
    ctx->pc = 0x7F34A398u;
    ctx->downcount -= 3;
    // 7F34A398: lwz     r3, 616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A39C:
    ctx->pc = 0x7F34A39Cu;
    // 7F34A39C: cmplwi  r3, 0x0000
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

label_7F34A3A0:
    ctx->pc = 0x7F34A3A0u;
    // 7F34A3A0: bc    12, 2, 0x7F34A3B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A3B0;
        }
    }

label_7F34A3A4:
    ctx->pc = 0x7F34A3A4u;
    ctx->downcount -= 3;
    // 7F34A3A4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A3A8:
    ctx->pc = 0x7F34A3A8u;
    // 7F34A3A8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F34A3AC:
    ctx->pc = 0x7F34A3ACu;
    // 7F34A3AC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A3B0:
    ctx->pc = 0x7F34A3B0u;
    ctx->downcount -= 3;
    // 7F34A3B0: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A3B4:
    ctx->pc = 0x7F34A3B4u;
    // 7F34A3B4: cmplwi  r3, 0x0000
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

label_7F34A3B8:
    ctx->pc = 0x7F34A3B8u;
    // 7F34A3B8: bc    12, 2, 0x7F34A3C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A3C8;
        }
    }

label_7F34A3BC:
    ctx->pc = 0x7F34A3BCu;
    ctx->downcount -= 3;
    // 7F34A3BC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A3C0:
    ctx->pc = 0x7F34A3C0u;
    // 7F34A3C0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F34A3C4:
    ctx->pc = 0x7F34A3C4u;
    // 7F34A3C4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A3C8:
    ctx->pc = 0x7F34A3C8u;
    ctx->downcount -= 3;
    // 7F34A3C8: lwz     r3, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A3CC:
    ctx->pc = 0x7F34A3CCu;
    // 7F34A3CC: cmplwi  r3, 0x0000
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

label_7F34A3D0:
    ctx->pc = 0x7F34A3D0u;
    // 7F34A3D0: bc    12, 2, 0x7F34A3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A3E0;
        }
    }

label_7F34A3D4:
    ctx->pc = 0x7F34A3D4u;
    ctx->downcount -= 3;
    // 7F34A3D4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A3D8:
    ctx->pc = 0x7F34A3D8u;
    // 7F34A3D8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F34A3DC:
    ctx->pc = 0x7F34A3DCu;
    // 7F34A3DC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A3E0:
    ctx->pc = 0x7F34A3E0u;
    ctx->downcount -= 9;
    // 7F34A3E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34A3E4:
    ctx->pc = 0x7F34A3E4u;
    // 7F34A3E4: sth     r0, 596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(596);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F34A3E8:
    ctx->pc = 0x7F34A3E8u;
    // 7F34A3E8: sth     r0, 604(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F34A3EC:
    ctx->pc = 0x7F34A3ECu;
    // 7F34A3EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34A3F0:
    ctx->pc = 0x7F34A3F0u;
    // 7F34A3F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A3F4:
    ctx->pc = 0x7F34A3F4u;
    // 7F34A3F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A3F8:
    ctx->pc = 0x7F34A3F8u;
    // 7F34A3F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34A3FC:
    ctx->pc = 0x7F34A3FCu;
    // 7F34A3FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A400:
    ctx->pc = 0x7F34A400u;
    ctx->downcount -= 27;
    // 7F34A400: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A404:
    ctx->pc = 0x7F34A404u;
    // 7F34A404: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A408:
    ctx->pc = 0x7F34A408u;
    // 7F34A408: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F34A40C:
    ctx->pc = 0x7F34A40Cu;
    // 7F34A40C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A410:
    ctx->pc = 0x7F34A410u;
    // 7F34A410: stmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34A414:
    ctx->pc = 0x7F34A414u;
    // 7F34A414: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34A418:
    ctx->pc = 0x7F34A418u;
    // 7F34A418: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A41C:
    ctx->pc = 0x7F34A41Cu;
    // 7F34A41C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34A420:
    ctx->pc = 0x7F34A420u;
    // 7F34A420: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A424:
    ctx->pc = 0x7F34A424u;
    // 7F34A424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F34A428:
    ctx->pc = 0x7F34A428u;
    // 7F34A428: lwz     r7, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34A42C:
    ctx->pc = 0x7F34A42Cu;
    // 7F34A42C: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F34A430:
    ctx->pc = 0x7F34A430u;
    // 7F34A430: and   r3, r7, r6
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[6];
    }

label_7F34A434:
    ctx->pc = 0x7F34A434u;
    // 7F34A434: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F34A438:
    ctx->pc = 0x7F34A438u;
    // 7F34A438: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F34A43C:
    ctx->pc = 0x7F34A43Cu;
    // 7F34A43C: or.   r0, r3, r0
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

label_7F34A440:
    ctx->pc = 0x7F34A440u;
    // 7F34A440: bc    12, 2, 0x7F34A5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A5D8;
        }
    }

label_7F34A444:
    ctx->pc = 0x7F34A444u;
    ctx->downcount -= 2;
    // 7F34A444: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A448:
    ctx->pc = 0x7F34A448u;
    // 7F34A448: bl      0x7F0150C0
    {
            ctx->lr = 0x7F34A44Cu;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F34A44C:
    ctx->pc = 0x7F34A44Cu;
    ctx->downcount -= 12;
    // 7F34A44C: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F34A450:
    ctx->pc = 0x7F34A450u;
    // 7F34A450: lwz     r5, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A454:
    ctx->pc = 0x7F34A454u;
    // 7F34A454: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F34A458:
    ctx->pc = 0x7F34A458u;
    // 7F34A458: lwz     r6, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A45C:
    ctx->pc = 0x7F34A45Cu;
    // 7F34A45C: addi    r3, r3, -32738
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32738);

label_7F34A460:
    ctx->pc = 0x7F34A460u;
    // 7F34A460: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34A464:
    ctx->pc = 0x7F34A464u;
    // 7F34A464: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F34A468:
    ctx->pc = 0x7F34A468u;
    // 7F34A468: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F34A46C:
    ctx->pc = 0x7F34A46Cu;
    // 7F34A46C: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F34A470:
    ctx->pc = 0x7F34A470u;
    // 7F34A470: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F34A474:
    ctx->pc = 0x7F34A474u;
    // 7F34A474: or.   r0, r3, r0
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

label_7F34A478:
    ctx->pc = 0x7F34A478u;
    // 7F34A478: bc    12, 2, 0x7F34A4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A4A8;
        }
    }

label_7F34A47C:
    ctx->pc = 0x7F34A47Cu;
    ctx->downcount -= 9;
    // 7F34A47C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F34A480:
    ctx->pc = 0x7F34A480u;
    // 7F34A480: lwz     r0, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A484:
    ctx->pc = 0x7F34A484u;
    // 7F34A484: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F34A488:
    ctx->pc = 0x7F34A488u;
    // 7F34A488: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A48C:
    ctx->pc = 0x7F34A48Cu;
    // 7F34A48C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A490:
    ctx->pc = 0x7F34A490u;
    // 7F34A490: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F34A494:
    ctx->pc = 0x7F34A494u;
    // 7F34A494: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F34A498:
    ctx->pc = 0x7F34A498u;
    // 7F34A498: lwz     r4, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A49C:
    ctx->pc = 0x7F34A49Cu;
    // 7F34A49C: bl      0x7F0FBD30
    {
            ctx->lr = 0x7F34A4A0u;
            ctx->pc = 0x7F0FBD30u;
            return;
    }

label_7F34A4A0:
    ctx->pc = 0x7F34A4A0u;
    ctx->downcount -= 2;
    // 7F34A4A0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A4A4:
    ctx->pc = 0x7F34A4A4u;
    // 7F34A4A4: bl      0x7F1E088C
    {
            ctx->lr = 0x7F34A4A8u;
            ctx->pc = 0x7F1E088Cu;
            return;
    }

label_7F34A4A8:
    ctx->pc = 0x7F34A4A8u;
    ctx->downcount -= 3;
    // 7F34A4A8: lwz     r0, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A4AC:
    ctx->pc = 0x7F34A4ACu;
    // 7F34A4AC: cmpwi   r0, 0
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

label_7F34A4B0:
    ctx->pc = 0x7F34A4B0u;
    // 7F34A4B0: bc    4, 2, 0x7F34A520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A520;
        }
    }

label_7F34A4B4:
    ctx->pc = 0x7F34A4B4u;
    ctx->downcount -= 12;
    // 7F34A4B4: lis     r3, 7
    ctx->gpr[3] = ((u32)(s32)(7) << 16);

label_7F34A4B8:
    ctx->pc = 0x7F34A4B8u;
    // 7F34A4B8: lwz     r5, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A4BC:
    ctx->pc = 0x7F34A4BCu;
    // 7F34A4BC: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F34A4C0:
    ctx->pc = 0x7F34A4C0u;
    // 7F34A4C0: lwz     r6, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A4C4:
    ctx->pc = 0x7F34A4C4u;
    // 7F34A4C4: addi    r3, r3, -32674
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32674);

label_7F34A4C8:
    ctx->pc = 0x7F34A4C8u;
    // 7F34A4C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34A4CC:
    ctx->pc = 0x7F34A4CCu;
    // 7F34A4CC: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F34A4D0:
    ctx->pc = 0x7F34A4D0u;
    // 7F34A4D0: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F34A4D4:
    ctx->pc = 0x7F34A4D4u;
    // 7F34A4D4: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F34A4D8:
    ctx->pc = 0x7F34A4D8u;
    // 7F34A4D8: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F34A4DC:
    ctx->pc = 0x7F34A4DCu;
    // 7F34A4DC: or.   r0, r3, r0
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

label_7F34A4E0:
    ctx->pc = 0x7F34A4E0u;
    // 7F34A4E0: bc    12, 2, 0x7F34A520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A520;
        }
    }

label_7F34A4E4:
    ctx->pc = 0x7F34A4E4u;
    ctx->downcount -= 2;
    // 7F34A4E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A4E8:
    ctx->pc = 0x7F34A4E8u;
    // 7F34A4E8: bl      0x7F34A348
    {
            ctx->lr = 0x7F34A4ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A348u;
                return;
            }
            goto label_7F34A348;
    }

label_7F34A4EC:
    ctx->pc = 0x7F34A4ECu;
    ctx->downcount -= 4;
    // 7F34A4EC: addi    r3, r31, 496
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(496);

label_7F34A4F0:
    ctx->pc = 0x7F34A4F0u;
    // 7F34A4F0: lwz     r5, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A4F4:
    ctx->pc = 0x7F34A4F4u;
    // 7F34A4F4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A4F8:
    ctx->pc = 0x7F34A4F8u;
    // 7F34A4F8: bl      0x7F32BEA4
    {
            ctx->lr = 0x7F34A4FCu;
            ctx->pc = 0x7F32BEA4u;
            return;
    }

label_7F34A4FC:
    ctx->pc = 0x7F34A4FCu;
    ctx->downcount -= 9;
    // 7F34A4FC: lwz     r7, 584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(584);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34A500:
    ctx->pc = 0x7F34A500u;
    // 7F34A500: addi    r4, r31, 496
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(496);

label_7F34A504:
    ctx->pc = 0x7F34A504u;
    // 7F34A504: lwz     r0, 592(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A508:
    ctx->pc = 0x7F34A508u;
    // 7F34A508: li      r3, 476
    ctx->gpr[3] = (u32)(s32)(476);

label_7F34A50C:
    ctx->pc = 0x7F34A50Cu;
    // 7F34A50C: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A510:
    ctx->pc = 0x7F34A510u;
    // 7F34A510: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34A514:
    ctx->pc = 0x7F34A514u;
    // 7F34A514: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_7F34A518:
    ctx->pc = 0x7F34A518u;
    // 7F34A518: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A51C:
    ctx->pc = 0x7F34A51Cu;
    // 7F34A51C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F34A520u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F34A520:
    ctx->pc = 0x7F34A520u;
    ctx->downcount -= 11;
    // 7F34A520: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F34A524:
    ctx->pc = 0x7F34A524u;
    // 7F34A524: lwz     r5, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A528:
    ctx->pc = 0x7F34A528u;
    // 7F34A528: lwz     r6, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A52C:
    ctx->pc = 0x7F34A52Cu;
    // 7F34A52C: addi    r0, r3, 64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(64);

label_7F34A530:
    ctx->pc = 0x7F34A530u;
    // 7F34A530: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F34A534:
    ctx->pc = 0x7F34A534u;
    // 7F34A534: and   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F34A538:
    ctx->pc = 0x7F34A538u;
    // 7F34A538: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F34A53C:
    ctx->pc = 0x7F34A53Cu;
    // 7F34A53C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F34A540:
    ctx->pc = 0x7F34A540u;
    // 7F34A540: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F34A544:
    ctx->pc = 0x7F34A544u;
    // 7F34A544: or.   r0, r3, r0
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

label_7F34A548:
    ctx->pc = 0x7F34A548u;
    // 7F34A548: bc    12, 2, 0x7F34A5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A5D8;
        }
    }

label_7F34A54C:
    ctx->pc = 0x7F34A54Cu;
    ctx->downcount -= 3;
    // 7F34A54C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F34A550:
    ctx->pc = 0x7F34A550u;
    // 7F34A550: stw     r0, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A554:
    ctx->pc = 0x7F34A554u;
    // 7F34A554: bl      0x7F34A5EC
    {
            ctx->lr = 0x7F34A558u;
            goto label_7F34A5EC;
    }

label_7F34A558:
    ctx->pc = 0x7F34A558u;
    ctx->downcount -= 5;
    // 7F34A558: rlwinm r3, r3, 0, 26, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
    }

label_7F34A55C:
    ctx->pc = 0x7F34A55Cu;
    // 7F34A55C: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F34A560:
    ctx->pc = 0x7F34A560u;
    // 7F34A560: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F34A564:
    ctx->pc = 0x7F34A564u;
    // 7F34A564: sth     r0, 534(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(534);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F34A568:
    ctx->pc = 0x7F34A568u;
    // 7F34A568: bl      0x7F34A5EC
    {
            ctx->lr = 0x7F34A56Cu;
            goto label_7F34A5EC;
    }

label_7F34A56C:
    ctx->pc = 0x7F34A56Cu;
    ctx->downcount -= 9;
    // 7F34A56C: rlwinm r4, r3, 0, 27, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000010u;
    }

label_7F34A570:
    ctx->pc = 0x7F34A570u;
    // 7F34A570: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A574:
    ctx->pc = 0x7F34A574u;
    // 7F34A574: addi    r0, r4, -8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8);

label_7F34A578:
    ctx->pc = 0x7F34A578u;
    // 7F34A578: lfs     f1, -25296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A578u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34A57C:
    ctx->pc = 0x7F34A57Cu;
    // 7F34A57C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F34A580:
    ctx->pc = 0x7F34A580u;
    // 7F34A580: addi    r4, r31, 512
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(512);

label_7F34A584:
    ctx->pc = 0x7F34A584u;
    // 7F34A584: sth     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F34A588:
    ctx->pc = 0x7F34A588u;
    // 7F34A588: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A58C:
    ctx->pc = 0x7F34A58Cu;
    // 7F34A58C: bl      0x800261FC
    {
            ctx->lr = 0x7F34A590u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F34A590:
    ctx->pc = 0x7F34A590u;
    ctx->downcount -= 5;
    // 7F34A590: addi    r6, r30, 128
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(128);

label_7F34A594:
    ctx->pc = 0x7F34A594u;
    // 7F34A594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34A598:
    ctx->pc = 0x7F34A598u;
    // 7F34A598: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F34A59C:
    ctx->pc = 0x7F34A59Cu;
    // 7F34A59C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F34A5A0:
    ctx->pc = 0x7F34A5A0u;
    // 7F34A5A0: bl      0x7F1C7B2C
    {
            ctx->lr = 0x7F34A5A4u;
            ctx->pc = 0x7F1C7B2Cu;
            return;
    }

label_7F34A5A4:
    ctx->pc = 0x7F34A5A4u;
    ctx->downcount -= 5;
    // 7F34A5A4: lwz     r4, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A5A8:
    ctx->pc = 0x7F34A5A8u;
    // 7F34A5A8: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F34A5AC:
    ctx->pc = 0x7F34A5ACu;
    // 7F34A5AC: lwz     r5, 548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(548);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A5B0:
    ctx->pc = 0x7F34A5B0u;
    // 7F34A5B0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F34A5B4:
    ctx->pc = 0x7F34A5B4u;
    // 7F34A5B4: bl      0x7F3405D8
    {
            ctx->lr = 0x7F34A5B8u;
            ctx->pc = 0x7F3405D8u;
            return;
    }

label_7F34A5B8:
    ctx->pc = 0x7F34A5B8u;
    ctx->downcount -= 3;
    // 7F34A5B8: lwz     r4, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A5BC:
    ctx->pc = 0x7F34A5BCu;
    // 7F34A5BC: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F34A5C0:
    ctx->pc = 0x7F34A5C0u;
    // 7F34A5C0: bl      0x7F1DDC54
    {
            ctx->lr = 0x7F34A5C4u;
            ctx->pc = 0x7F1DDC54u;
            return;
    }

label_7F34A5C4:
    ctx->pc = 0x7F34A5C4u;
    ctx->downcount -= 5;
    // 7F34A5C4: lwz     r4, 584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A5C8:
    ctx->pc = 0x7F34A5C8u;
    // 7F34A5C8: lwz     r0, 588(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A5CC:
    ctx->pc = 0x7F34A5CCu;
    // 7F34A5CC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A5D0:
    ctx->pc = 0x7F34A5D0u;
    // 7F34A5D0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F34A5D4:
    ctx->pc = 0x7F34A5D4u;
    // 7F34A5D4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A5D8:
    ctx->pc = 0x7F34A5D8u;
    ctx->downcount -= 16;
    // 7F34A5D8: lmw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34A5DC:
    ctx->pc = 0x7F34A5DCu;
    // 7F34A5DC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A5E0:
    ctx->pc = 0x7F34A5E0u;
    // 7F34A5E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A5E4:
    ctx->pc = 0x7F34A5E4u;
    // 7F34A5E4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F34A5E8:
    ctx->pc = 0x7F34A5E8u;
    // 7F34A5E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A5EC:
    ctx->pc = 0x7F34A5ECu;
    ctx->downcount -= 13;
    // 7F34A5EC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F34A5F0:
    ctx->pc = 0x7F34A5F0u;
    // 7F34A5F0: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F34A5F4:
    ctx->pc = 0x7F34A5F4u;
    // 7F34A5F4: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F34A5F8:
    ctx->pc = 0x7F34A5F8u;
    // 7F34A5F8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A5FC:
    ctx->pc = 0x7F34A5FCu;
    // 7F34A5FC: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F34A600:
    ctx->pc = 0x7F34A600u;
    // 7F34A600: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F34A604:
    ctx->pc = 0x7F34A604u;
    // 7F34A604: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F34A608:
    ctx->pc = 0x7F34A608u;
    // 7F34A608: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34A60C:
    ctx->pc = 0x7F34A60Cu;
    // 7F34A60C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A610:
    ctx->pc = 0x7F34A610u;
    ctx->downcount -= 52;
    // 7F34A610: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A614:
    ctx->pc = 0x7F34A614u;
    // 7F34A614: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A618:
    ctx->pc = 0x7F34A618u;
    // 7F34A618: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F34A61C:
    ctx->pc = 0x7F34A61Cu;
    // 7F34A61C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A620:
    ctx->pc = 0x7F34A620u;
    // 7F34A620: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F34A624:
    ctx->pc = 0x7F34A624u;
    // 7F34A624: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F34A628:
    ctx->pc = 0x7F34A628u;
    // 7F34A628: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A62C:
    ctx->pc = 0x7F34A62Cu;
    // 7F34A62C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34A630:
    ctx->pc = 0x7F34A630u;
    // 7F34A630: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A634:
    ctx->pc = 0x7F34A634u;
    // 7F34A634: addi    r30, r31, 48
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(48);

label_7F34A638:
    ctx->pc = 0x7F34A638u;
    // 7F34A638: stb     r0, 624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(624);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F34A63C:
    ctx->pc = 0x7F34A63Cu;
    // 7F34A63C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A640:
    ctx->pc = 0x7F34A640u;
    // 7F34A640: lfs     f5, -25292(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F34A644:
    ctx->pc = 0x7F34A644u;
    // 7F34A644: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A648:
    ctx->pc = 0x7F34A648u;
    // 7F34A648: lwz     r9, 216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(216);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F34A64C:
    ctx->pc = 0x7F34A64Cu;
    // 7F34A64C: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F34A650:
    ctx->pc = 0x7F34A650u;
    // 7F34A650: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F34A654:
    ctx->pc = 0x7F34A654u;
    // 7F34A654: lfs     f2, 20(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A654u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34A658:
    ctx->pc = 0x7F34A658u;
    // 7F34A658: lfs     f0, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A658u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A65C:
    ctx->pc = 0x7F34A65Cu;
    // 7F34A65C: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A65Cu)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_7F34A660:
    ctx->pc = 0x7F34A660u;
    // 7F34A660: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A660u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F34A664:
    ctx->pc = 0x7F34A664u;
    // 7F34A664: fmuls   f1, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A664u)) return;
    ppc_fmuls(ctx, 1, 5, 1);

label_7F34A668:
    ctx->pc = 0x7F34A668u;
    // 7F34A668: fmuls   f2, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A668u)) return;
    ppc_fmuls(ctx, 2, 5, 0);

label_7F34A66C:
    ctx->pc = 0x7F34A66Cu;
    // 7F34A66C: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A66Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34A670:
    ctx->pc = 0x7F34A670u;
    // 7F34A670: lfs     f3, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A670u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F34A674:
    ctx->pc = 0x7F34A674u;
    // 7F34A674: lfs     f0, 12(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A674u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A678:
    ctx->pc = 0x7F34A678u;
    // 7F34A678: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A678u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_7F34A67C:
    ctx->pc = 0x7F34A67Cu;
    // 7F34A67C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A67Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F34A680:
    ctx->pc = 0x7F34A680u;
    // 7F34A680: fmuls   f3, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A680u)) return;
    ppc_fmuls(ctx, 3, 5, 1);

label_7F34A684:
    ctx->pc = 0x7F34A684u;
    // 7F34A684: fmuls   f1, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A684u)) return;
    ppc_fmuls(ctx, 1, 5, 0);

label_7F34A688:
    ctx->pc = 0x7F34A688u;
    // 7F34A688: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34A68C:
    ctx->pc = 0x7F34A68Cu;
    // 7F34A68C: lfs     f4, 28(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A68Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F34A690:
    ctx->pc = 0x7F34A690u;
    // 7F34A690: lfs     f0, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34A690u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A694:
    ctx->pc = 0x7F34A694u;
    // 7F34A694: fsubs   f3, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A694u)) return;
    ppc_fsubs(ctx, 3, 4, 0);

label_7F34A698:
    ctx->pc = 0x7F34A698u;
    // 7F34A698: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34A69C:
    ctx->pc = 0x7F34A69Cu;
    // 7F34A69C: fadds   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A69Cu)) return;
    ppc_fadds(ctx, 0, 4, 0);

label_7F34A6A0:
    ctx->pc = 0x7F34A6A0u;
    // 7F34A6A0: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A6A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34A6A4:
    ctx->pc = 0x7F34A6A4u;
    // 7F34A6A4: fmuls   f1, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F34A6A4u)) return;
    ppc_fmuls(ctx, 1, 5, 3);

label_7F34A6A8:
    ctx->pc = 0x7F34A6A8u;
    // 7F34A6A8: fmuls   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A6A8u)) return;
    ppc_fmuls(ctx, 0, 5, 0);

label_7F34A6AC:
    ctx->pc = 0x7F34A6ACu;
    // 7F34A6AC: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A6ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34A6B0:
    ctx->pc = 0x7F34A6B0u;
    // 7F34A6B0: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A6B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34A6B4:
    ctx->pc = 0x7F34A6B4u;
    // 7F34A6B4: bl      0x7F014788
    {
            ctx->lr = 0x7F34A6B8u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F34A6B8:
    ctx->pc = 0x7F34A6B8u;
    ctx->downcount -= 13;
    // 7F34A6B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34A6BC:
    ctx->pc = 0x7F34A6BCu;
    // 7F34A6BC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34A6C0:
    ctx->pc = 0x7F34A6C0u;
    // 7F34A6C0: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F34A6C4:
    ctx->pc = 0x7F34A6C4u;
    // 7F34A6C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F34A6C8:
    ctx->pc = 0x7F34A6C8u;
    // 7F34A6C8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A6CC:
    ctx->pc = 0x7F34A6CCu;
    // 7F34A6CC: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F34A6D0:
    ctx->pc = 0x7F34A6D0u;
    // 7F34A6D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A6D4:
    ctx->pc = 0x7F34A6D4u;
    // 7F34A6D4: addi    r4, r31, 240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(240);

label_7F34A6D8:
    ctx->pc = 0x7F34A6D8u;
    // 7F34A6D8: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A6DC:
    ctx->pc = 0x7F34A6DCu;
    // 7F34A6DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34A6E0:
    ctx->pc = 0x7F34A6E0u;
    // 7F34A6E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F34A6E4:
    ctx->pc = 0x7F34A6E4u;
    // 7F34A6E4: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F34A6E8:
    ctx->pc = 0x7F34A6E8u;
    // 7F34A6E8: bl      0x7F014B78
    {
            ctx->lr = 0x7F34A6ECu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F34A6EC:
    ctx->pc = 0x7F34A6ECu;
    ctx->downcount -= 5;
    // 7F34A6EC: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34A6F0:
    ctx->pc = 0x7F34A6F0u;
    // 7F34A6F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A6F4:
    ctx->pc = 0x7F34A6F4u;
    // 7F34A6F4: addi    r4, r4, -23552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23552);

label_7F34A6F8:
    ctx->pc = 0x7F34A6F8u;
    // 7F34A6F8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A6FC:
    ctx->pc = 0x7F34A6FCu;
    // 7F34A6FC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F34A700u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F34A700:
    ctx->pc = 0x7F34A700u;
    ctx->downcount -= 2;
    // 7F34A700: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A704:
    ctx->pc = 0x7F34A704u;
    // 7F34A704: bl      0x7F0148A0
    {
            ctx->lr = 0x7F34A708u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F34A708:
    ctx->pc = 0x7F34A708u;
    ctx->downcount -= 11;
    // 7F34A708: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34A70C:
    ctx->pc = 0x7F34A70Cu;
    // 7F34A70C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34A710:
    ctx->pc = 0x7F34A710u;
    // 7F34A710: addi    r30, r31, 272
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(272);

label_7F34A714:
    ctx->pc = 0x7F34A714u;
    // 7F34A714: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F34A718:
    ctx->pc = 0x7F34A718u;
    // 7F34A718: addi    r7, r4, 6624
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(6624);

label_7F34A71C:
    ctx->pc = 0x7F34A71Cu;
    // 7F34A71C: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F34A720:
    ctx->pc = 0x7F34A720u;
    // 7F34A720: addi    r4, r6, 1
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(1);

label_7F34A724:
    ctx->pc = 0x7F34A724u;
    // 7F34A724: lwz     r5, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A728:
    ctx->pc = 0x7F34A728u;
    // 7F34A728: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A72C:
    ctx->pc = 0x7F34A72Cu;
    // 7F34A72C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F34A730:
    ctx->pc = 0x7F34A730u;
    // 7F34A730: bl      0x7F014788
    {
            ctx->lr = 0x7F34A734u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F34A734:
    ctx->pc = 0x7F34A734u;
    ctx->downcount -= 4;
    // 7F34A734: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A738:
    ctx->pc = 0x7F34A738u;
    // 7F34A738: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34A73C:
    ctx->pc = 0x7F34A73Cu;
    // 7F34A73C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F34A740:
    ctx->pc = 0x7F34A740u;
    // 7F34A740: bl      0x7F014B60
    {
            ctx->lr = 0x7F34A744u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F34A744:
    ctx->pc = 0x7F34A744u;
    ctx->downcount -= 13;
    // 7F34A744: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34A748:
    ctx->pc = 0x7F34A748u;
    // 7F34A748: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34A74C:
    ctx->pc = 0x7F34A74Cu;
    // 7F34A74C: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F34A750:
    ctx->pc = 0x7F34A750u;
    // 7F34A750: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_7F34A754:
    ctx->pc = 0x7F34A754u;
    // 7F34A754: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A758:
    ctx->pc = 0x7F34A758u;
    // 7F34A758: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F34A75C:
    ctx->pc = 0x7F34A75Cu;
    // 7F34A75C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34A760:
    ctx->pc = 0x7F34A760u;
    // 7F34A760: addi    r4, r31, 464
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(464);

label_7F34A764:
    ctx->pc = 0x7F34A764u;
    // 7F34A764: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A768:
    ctx->pc = 0x7F34A768u;
    // 7F34A768: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34A76C:
    ctx->pc = 0x7F34A76Cu;
    // 7F34A76C: li      r8, 10
    ctx->gpr[8] = (u32)(s32)(10);

label_7F34A770:
    ctx->pc = 0x7F34A770u;
    // 7F34A770: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F34A774:
    ctx->pc = 0x7F34A774u;
    // 7F34A774: bl      0x7F014B78
    {
            ctx->lr = 0x7F34A778u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F34A778:
    ctx->pc = 0x7F34A778u;
    ctx->downcount -= 17;
    // 7F34A778: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34A77C:
    ctx->pc = 0x7F34A77Cu;
    // 7F34A77C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34A780:
    ctx->pc = 0x7F34A780u;
    // 7F34A780: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A784:
    ctx->pc = 0x7F34A784u;
    // 7F34A784: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A788:
    ctx->pc = 0x7F34A788u;
    // 7F34A788: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34A78C:
    ctx->pc = 0x7F34A78Cu;
    // 7F34A78C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A790:
    ctx->pc = 0x7F34A790u;
    ctx->downcount -= 8;
    // 7F34A790: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A794:
    ctx->pc = 0x7F34A794u;
    // 7F34A794: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A798:
    ctx->pc = 0x7F34A798u;
    // 7F34A798: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A79C:
    ctx->pc = 0x7F34A79Cu;
    // 7F34A79C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34A7A0:
    ctx->pc = 0x7F34A7A0u;
    // 7F34A7A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A7A4:
    ctx->pc = 0x7F34A7A4u;
    // 7F34A7A4: lwz     r3, 544(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(544);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7A8:
    ctx->pc = 0x7F34A7A8u;
    // 7F34A7A8: cmplwi  r3, 0x0000
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

label_7F34A7AC:
    ctx->pc = 0x7F34A7ACu;
    // 7F34A7AC: bc    12, 2, 0x7F34A7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A7BC;
        }
    }

label_7F34A7B0:
    ctx->pc = 0x7F34A7B0u;
    ctx->downcount -= 1;
    // 7F34A7B0: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F34A7B4u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F34A7B4:
    ctx->pc = 0x7F34A7B4u;
    ctx->downcount -= 2;
    // 7F34A7B4: lwz     r3, 544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7B8:
    ctx->pc = 0x7F34A7B8u;
    // 7F34A7B8: bl      0x7F3B0820
    {
            ctx->lr = 0x7F34A7BCu;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F34A7BC:
    ctx->pc = 0x7F34A7BCu;
    ctx->downcount -= 3;
    // 7F34A7BC: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7C0:
    ctx->pc = 0x7F34A7C0u;
    // 7F34A7C0: cmplwi  r3, 0x0000
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

label_7F34A7C4:
    ctx->pc = 0x7F34A7C4u;
    // 7F34A7C4: bc    12, 2, 0x7F34A7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A7D4;
        }
    }

label_7F34A7C8:
    ctx->pc = 0x7F34A7C8u;
    ctx->downcount -= 1;
    // 7F34A7C8: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F34A7CCu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F34A7CC:
    ctx->pc = 0x7F34A7CCu;
    ctx->downcount -= 2;
    // 7F34A7CC: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7D0:
    ctx->pc = 0x7F34A7D0u;
    // 7F34A7D0: bl      0x7F3B0820
    {
            ctx->lr = 0x7F34A7D4u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F34A7D4:
    ctx->pc = 0x7F34A7D4u;
    ctx->downcount -= 3;
    // 7F34A7D4: lwz     r3, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7D8:
    ctx->pc = 0x7F34A7D8u;
    // 7F34A7D8: cmplwi  r3, 0x0000
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

label_7F34A7DC:
    ctx->pc = 0x7F34A7DCu;
    // 7F34A7DC: bc    12, 2, 0x7F34A7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A7E4;
        }
    }

label_7F34A7E0:
    ctx->pc = 0x7F34A7E0u;
    ctx->downcount -= 1;
    // 7F34A7E0: bl      0x7F3C2440
    {
            ctx->lr = 0x7F34A7E4u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F34A7E4:
    ctx->pc = 0x7F34A7E4u;
    ctx->downcount -= 3;
    // 7F34A7E4: lwz     r3, 616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7E8:
    ctx->pc = 0x7F34A7E8u;
    // 7F34A7E8: cmplwi  r3, 0x0000
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

label_7F34A7EC:
    ctx->pc = 0x7F34A7ECu;
    // 7F34A7EC: bc    12, 2, 0x7F34A7F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A7F4;
        }
    }

label_7F34A7F0:
    ctx->pc = 0x7F34A7F0u;
    ctx->downcount -= 1;
    // 7F34A7F0: bl      0x7F3C2440
    {
            ctx->lr = 0x7F34A7F4u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F34A7F4:
    ctx->pc = 0x7F34A7F4u;
    ctx->downcount -= 3;
    // 7F34A7F4: lwz     r3, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A7F8:
    ctx->pc = 0x7F34A7F8u;
    // 7F34A7F8: cmplwi  r3, 0x0000
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

label_7F34A7FC:
    ctx->pc = 0x7F34A7FCu;
    // 7F34A7FC: bc    12, 2, 0x7F34A804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A804;
        }
    }

label_7F34A800:
    ctx->pc = 0x7F34A800u;
    ctx->downcount -= 1;
    // 7F34A800: bl      0x7F3C2440
    {
            ctx->lr = 0x7F34A804u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F34A804:
    ctx->pc = 0x7F34A804u;
    ctx->downcount -= 3;
    // 7F34A804: lbz     r0, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F34A808:
    ctx->pc = 0x7F34A808u;
    // 7F34A808: cmplwi  r0, 0x0000
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

label_7F34A80C:
    ctx->pc = 0x7F34A80Cu;
    // 7F34A80C: bc    12, 2, 0x7F34A820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A820;
        }
    }

label_7F34A810:
    ctx->pc = 0x7F34A810u;
    ctx->downcount -= 2;
    // 7F34A810: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F34A814:
    ctx->pc = 0x7F34A814u;
    // 7F34A814: bl      0x7F0146B0
    {
            ctx->lr = 0x7F34A818u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F34A818:
    ctx->pc = 0x7F34A818u;
    ctx->downcount -= 2;
    // 7F34A818: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34A81C:
    ctx->pc = 0x7F34A81Cu;
    // 7F34A81C: stb     r0, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F34A820:
    ctx->pc = 0x7F34A820u;
    ctx->downcount -= 6;
    // 7F34A820: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A824:
    ctx->pc = 0x7F34A824u;
    // 7F34A824: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34A828:
    ctx->pc = 0x7F34A828u;
    // 7F34A828: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A82C:
    ctx->pc = 0x7F34A82Cu;
    // 7F34A82C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34A830:
    ctx->pc = 0x7F34A830u;
    // 7F34A830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A834:
    ctx->pc = 0x7F34A834u;
    ctx->downcount -= 6;
    // 7F34A834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A838:
    ctx->pc = 0x7F34A838u;
    // 7F34A838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A83C:
    ctx->pc = 0x7F34A83Cu;
    // 7F34A83C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A840:
    ctx->pc = 0x7F34A840u;
    // 7F34A840: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34A844:
    ctx->pc = 0x7F34A844u;
    // 7F34A844: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A848:
    ctx->pc = 0x7F34A848u;
    // 7F34A848: bl      0x7F34AA30
    {
            ctx->lr = 0x7F34A84Cu;
            goto label_7F34AA30;
    }

label_7F34A84C:
    ctx->pc = 0x7F34A84Cu;
    ctx->downcount -= 2;
    // 7F34A84C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34A850:
    ctx->pc = 0x7F34A850u;
    // 7F34A850: bl      0x7F34A888
    {
            ctx->lr = 0x7F34A854u;
            goto label_7F34A888;
    }

label_7F34A854:
    ctx->pc = 0x7F34A854u;
    ctx->downcount -= 3;
    // 7F34A854: lwz     r0, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A858:
    ctx->pc = 0x7F34A858u;
    // 7F34A858: cmpwi   r0, 5
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

label_7F34A85C:
    ctx->pc = 0x7F34A85Cu;
    // 7F34A85C: bc    4, 0, 0x7F34A868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A868;
        }
    }

label_7F34A860:
    ctx->pc = 0x7F34A860u;
    ctx->downcount -= 2;
    // 7F34A860: cmpwi   r0, 0
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

label_7F34A864:
    ctx->pc = 0x7F34A864u;
    // 7F34A864: bc    4, 0, 0x7F34A874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A874;
        }
    }

label_7F34A868:
    ctx->pc = 0x7F34A868u;
    ctx->downcount -= 3;
    // 7F34A868: lwz     r3, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A86C:
    ctx->pc = 0x7F34A86Cu;
    // 7F34A86C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F34A870:
    ctx->pc = 0x7F34A870u;
    // 7F34A870: stw     r0, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A874:
    ctx->pc = 0x7F34A874u;
    ctx->downcount -= 6;
    // 7F34A874: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A878:
    ctx->pc = 0x7F34A878u;
    // 7F34A878: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34A87C:
    ctx->pc = 0x7F34A87Cu;
    // 7F34A87C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34A880:
    ctx->pc = 0x7F34A880u;
    // 7F34A880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34A884:
    ctx->pc = 0x7F34A884u;
    // 7F34A884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34A888:
    ctx->pc = 0x7F34A888u;
    ctx->downcount -= 18;
    // 7F34A888: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34A88C:
    ctx->pc = 0x7F34A88Cu;
    // 7F34A88C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34A890:
    ctx->pc = 0x7F34A890u;
    // 7F34A890: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A894:
    ctx->pc = 0x7F34A894u;
    // 7F34A894: stmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34A898:
    ctx->pc = 0x7F34A898u;
    // 7F34A898: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34A89C:
    ctx->pc = 0x7F34A89Cu;
    // 7F34A89C: lwz     r0, 580(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A8A0:
    ctx->pc = 0x7F34A8A0u;
    // 7F34A8A0: cmpwi   r0, 0
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

label_7F34A8A4:
    ctx->pc = 0x7F34A8A4u;
    // 7F34A8A4: bc    4, 2, 0x7F34A9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9FC;
        }
    }

label_7F34A8A8:
    ctx->pc = 0x7F34A8A8u;
    ctx->downcount -= 3;
    // 7F34A8A8: lwz     r3, 552(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A8AC:
    ctx->pc = 0x7F34A8ACu;
    // 7F34A8AC: cmplwi  r3, 0x0000
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

label_7F34A8B0:
    ctx->pc = 0x7F34A8B0u;
    // 7F34A8B0: bc    12, 2, 0x7F34A9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9FC;
        }
    }

label_7F34A8B4:
    ctx->pc = 0x7F34A8B4u;
    ctx->downcount -= 15;
    // 7F34A8B4: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A8B8:
    ctx->pc = 0x7F34A8B8u;
    // 7F34A8B8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F34A8BC:
    ctx->pc = 0x7F34A8BCu;
    // 7F34A8BC: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34A8C0:
    ctx->pc = 0x7F34A8C0u;
    // 7F34A8C0: lwz     r6, 552(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(552);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34A8C4:
    ctx->pc = 0x7F34A8C4u;
    // 7F34A8C4: lwz     r4, 584(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A8C8:
    ctx->pc = 0x7F34A8C8u;
    // 7F34A8C8: lwz     r5, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34A8CC:
    ctx->pc = 0x7F34A8CCu;
    // 7F34A8CC: lwz     r3, 592(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(592);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A8D0:
    ctx->pc = 0x7F34A8D0u;
    // 7F34A8D0: lwz     r0, 588(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A8D4:
    ctx->pc = 0x7F34A8D4u;
    // 7F34A8D4: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F34A8D8:
    ctx->pc = 0x7F34A8D8u;
    // 7F34A8D8: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F34A8DC:
    ctx->pc = 0x7F34A8DCu;
    // 7F34A8DC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34A8E0:
    ctx->pc = 0x7F34A8E0u;
    // 7F34A8E0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F34A8E4:
    ctx->pc = 0x7F34A8E4u;
    // 7F34A8E4: lwz     r31, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34A8E8:
    ctx->pc = 0x7F34A8E8u;
    // 7F34A8E8: and.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34A8EC:
    ctx->pc = 0x7F34A8ECu;
    // 7F34A8EC: bc    4, 2, 0x7F34A9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9E0;
        }
    }

label_7F34A8F0:
    ctx->pc = 0x7F34A8F0u;
    ctx->downcount -= 5;
    // 7F34A8F0: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F34A8F4:
    ctx->pc = 0x7F34A8F4u;
    // 7F34A8F4: lwz     r3, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34A8F8:
    ctx->pc = 0x7F34A8F8u;
    // 7F34A8F8: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F34A8FC:
    ctx->pc = 0x7F34A8FCu;
    // 7F34A8FC: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F34A900:
    ctx->pc = 0x7F34A900u;
    // 7F34A900: bl      0x80025A80
    {
            ctx->lr = 0x7F34A904u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F34A904:
    ctx->pc = 0x7F34A904u;
    ctx->downcount -= 5;
    // 7F34A904: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34A908:
    ctx->pc = 0x7F34A908u;
    // 7F34A908: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F34A90C:
    ctx->pc = 0x7F34A90Cu;
    // 7F34A90C: addi    r4, r4, 6640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6640);

label_7F34A910:
    ctx->pc = 0x7F34A910u;
    // 7F34A910: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F34A914:
    ctx->pc = 0x7F34A914u;
    // 7F34A914: bl      0x7F114508
    {
            ctx->lr = 0x7F34A918u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F34A918:
    ctx->pc = 0x7F34A918u;
    ctx->downcount -= 5;
    // 7F34A918: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34A91C:
    ctx->pc = 0x7F34A91Cu;
    // 7F34A91C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F34A920:
    ctx->pc = 0x7F34A920u;
    // 7F34A920: addi    r4, r4, 6656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6656);

label_7F34A924:
    ctx->pc = 0x7F34A924u;
    // 7F34A924: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34A928:
    ctx->pc = 0x7F34A928u;
    // 7F34A928: bl      0x7F114508
    {
            ctx->lr = 0x7F34A92Cu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F34A92C:
    ctx->pc = 0x7F34A92Cu;
    ctx->downcount -= 5;
    // 7F34A92C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A930:
    ctx->pc = 0x7F34A930u;
    // 7F34A930: lfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A934:
    ctx->pc = 0x7F34A934u;
    // 7F34A934: lfs     f1, -25320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A934u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34A938:
    ctx->pc = 0x7F34A938u;
    // 7F34A938: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A938u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F34A93C:
    ctx->pc = 0x7F34A93Cu;
    // 7F34A93C: bc    4, 2, 0x7F34A94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A94C;
        }
    }

label_7F34A940:
    ctx->pc = 0x7F34A940u;
    ctx->downcount -= 3;
    // 7F34A940: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A944:
    ctx->pc = 0x7F34A944u;
    // 7F34A944: lfs     f0, -25288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A944u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A948:
    ctx->pc = 0x7F34A948u;
    // 7F34A948: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34A94C:
    ctx->pc = 0x7F34A94Cu;
    ctx->downcount -= 5;
    // 7F34A94C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A950:
    ctx->pc = 0x7F34A950u;
    // 7F34A950: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A954:
    ctx->pc = 0x7F34A954u;
    // 7F34A954: lfs     f1, -25320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A954u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34A958:
    ctx->pc = 0x7F34A958u;
    // 7F34A958: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A958u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F34A95C:
    ctx->pc = 0x7F34A95Cu;
    // 7F34A95C: bc    4, 2, 0x7F34A96C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A96C;
        }
    }

label_7F34A960:
    ctx->pc = 0x7F34A960u;
    ctx->downcount -= 3;
    // 7F34A960: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A964:
    ctx->pc = 0x7F34A964u;
    // 7F34A964: lfs     f0, -25288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A964u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A968:
    ctx->pc = 0x7F34A968u;
    // 7F34A968: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34A96C:
    ctx->pc = 0x7F34A96Cu;
    ctx->downcount -= 40;
    // 7F34A96C: lfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A96Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F34A970:
    ctx->pc = 0x7F34A970u;
    // 7F34A970: lfs     f2, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34A974:
    ctx->pc = 0x7F34A974u;
    // 7F34A974: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34A978:
    ctx->pc = 0x7F34A978u;
    // 7F34A978: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A97C:
    ctx->pc = 0x7F34A97Cu;
    // 7F34A97C: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34A97Cu)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F34A980:
    ctx->pc = 0x7F34A980u;
    // 7F34A980: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A980u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F34A984:
    ctx->pc = 0x7F34A984u;
    // 7F34A984: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A984u)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_7F34A988:
    ctx->pc = 0x7F34A988u;
    // 7F34A988: bl      0x7F34AA10
    {
            ctx->lr = 0x7F34A98Cu;
            goto label_7F34AA10;
    }

label_7F34A98C:
    ctx->pc = 0x7F34A98Cu;
    ctx->downcount -= 8;
    // 7F34A98C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34A990:
    ctx->pc = 0x7F34A990u;
    // 7F34A990: lfs     f0, -25284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34A990u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34A994:
    ctx->pc = 0x7F34A994u;
    // 7F34A994: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34A994u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F34A998:
    ctx->pc = 0x7F34A998u;
    // 7F34A998: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34A998u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F34A99C:
    ctx->pc = 0x7F34A99Cu;
    // 7F34A99C: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34A99Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F34A9A0:
    ctx->pc = 0x7F34A9A0u;
    // 7F34A9A0: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34A9A4:
    ctx->pc = 0x7F34A9A4u;
    // 7F34A9A4: cmpwi   r0, 8
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

label_7F34A9A8:
    ctx->pc = 0x7F34A9A8u;
    // 7F34A9A8: bc    4, 0, 0x7F34A9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9B4;
        }
    }

label_7F34A9AC:
    ctx->pc = 0x7F34A9ACu;
    ctx->downcount -= 2;
    // 7F34A9AC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F34A9B0:
    ctx->pc = 0x7F34A9B0u;
    // 7F34A9B0: b       0x7F34A9C4
    {
            goto label_7F34A9C4;
    }

label_7F34A9B4:
    ctx->pc = 0x7F34A9B4u;
    ctx->downcount -= 3;
    // 7F34A9B4: cmpwi   r0, 24
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(24);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34A9B8:
    ctx->pc = 0x7F34A9B8u;
    // 7F34A9B8: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F34A9BC:
    ctx->pc = 0x7F34A9BCu;
    // 7F34A9BC: bc    12, 1, 0x7F34A9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9C4;
        }
    }

label_7F34A9C0:
    ctx->pc = 0x7F34A9C0u;
    ctx->downcount -= 1;
    // 7F34A9C0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34A9C4:
    ctx->pc = 0x7F34A9C4u;
    ctx->downcount -= 5;
    // 7F34A9C4: lha     r0, 596(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(596);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34A9C8:
    ctx->pc = 0x7F34A9C8u;
    // 7F34A9C8: srawi r0, r0, 2
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

label_7F34A9CC:
    ctx->pc = 0x7F34A9CCu;
    // 7F34A9CC: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F34A9D0:
    ctx->pc = 0x7F34A9D0u;
    // 7F34A9D0: cmpw    r3, r0
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

label_7F34A9D4:
    ctx->pc = 0x7F34A9D4u;
    // 7F34A9D4: bc    4, 1, 0x7F34A9E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34A9E4;
        }
    }

label_7F34A9D8:
    ctx->pc = 0x7F34A9D8u;
    ctx->downcount -= 2;
    // 7F34A9D8: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34A9DC:
    ctx->pc = 0x7F34A9DCu;
    // 7F34A9DC: b       0x7F34A9E4
    {
            goto label_7F34A9E4;
    }

label_7F34A9E0:
    ctx->pc = 0x7F34A9E0u;
    ctx->downcount -= 1;
    // 7F34A9E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34A9E4:
    ctx->pc = 0x7F34A9E4u;
    ctx->downcount -= 2;
    // 7F34A9E4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F34A9E8:
    ctx->pc = 0x7F34A9E8u;
    // 7F34A9E8: b       0x7F34A9F4
    {
            goto label_7F34A9F4;
    }

label_7F34A9EC:
    loop_7F34A9EC(ctx);
    if (ctx->pc == 0x7F34A9FCu) goto label_7F34A9FC;
    return;
label_7F34A9F0:
    // 7F34A9F0: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F34A9F4:
    ctx->downcount -= 2;
    // 7F34A9F4: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34A9F8:
    // 7F34A9F8: bc    4, 0, 0x7F34A9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A9ECu;
                return;
            }
            goto label_7F34A9EC;
        }
    }

label_7F34A9FC:
    ctx->pc = 0x7F34A9FCu;
    ctx->downcount -= 16;
    // 7F34A9FC: lmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34AA00:
    ctx->pc = 0x7F34AA00u;
    // 7F34AA00: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AA04:
    ctx->pc = 0x7F34AA04u;
    // 7F34AA04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34AA08:
    ctx->pc = 0x7F34AA08u;
    // 7F34AA08: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F34AA0C:
    ctx->pc = 0x7F34AA0Cu;
    // 7F34AA0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34AA10:
    ctx->pc = 0x7F34AA10u;
    ctx->downcount -= 8;
    // 7F34AA10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34AA14:
    ctx->pc = 0x7F34AA14u;
    // 7F34AA14: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34AA14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34AA18:
    ctx->pc = 0x7F34AA18u;
    // 7F34AA18: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AA1C:
    ctx->pc = 0x7F34AA1Cu;
    // 7F34AA1C: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F34AA20:
    ctx->pc = 0x7F34AA20u;
    // 7F34AA20: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AA24:
    ctx->pc = 0x7F34AA24u;
    // 7F34AA24: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34AA24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34AA28:
    ctx->pc = 0x7F34AA28u;
    // 7F34AA28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34AA2C:
    ctx->pc = 0x7F34AA2Cu;
    // 7F34AA2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34AA30:
    ctx->pc = 0x7F34AA30u;
    ctx->downcount -= 18;
    // 7F34AA30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34AA34:
    ctx->pc = 0x7F34AA34u;
    // 7F34AA34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34AA38:
    ctx->pc = 0x7F34AA38u;
    // 7F34AA38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AA3C:
    ctx->pc = 0x7F34AA3Cu;
    // 7F34AA3C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34AA40:
    ctx->pc = 0x7F34AA40u;
    // 7F34AA40: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34AA44:
    ctx->pc = 0x7F34AA44u;
    // 7F34AA44: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34AA48:
    ctx->pc = 0x7F34AA48u;
    // 7F34AA48: lwz     r3, 572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(572);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AA4C:
    ctx->pc = 0x7F34AA4Cu;
    // 7F34AA4C: bl      0x7F3C9624
    {
            ctx->lr = 0x7F34AA50u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F34AA50:
    ctx->pc = 0x7F34AA50u;
    ctx->downcount -= 2;
    // 7F34AA50: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34AA54:
    ctx->pc = 0x7F34AA54u;
    // 7F34AA54: b       0x7F34AAD8
    {
            goto label_7F34AAD8;
    }

label_7F34AA58:
    ctx->pc = 0x7F34AA58u;
    ctx->downcount -= 5;
    // 7F34AA58: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AA5C:
    ctx->pc = 0x7F34AA5Cu;
    // 7F34AA5C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AA60:
    ctx->pc = 0x7F34AA60u;
    // 7F34AA60: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AA64:
    // 7F34AA64: cmpwi   r0, 3
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

label_7F34AA68:
    // 7F34AA68: bc    12, 2, 0x7F34AAA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AAA4;
        }
    }

label_7F34AA6C:
    ctx->downcount -= 1;
    // 7F34AA6C: bc    4, 0, 0x7F34AA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AA7C;
        }
    }

label_7F34AA70:
    ctx->downcount -= 2;
    // 7F34AA70: cmpwi   r0, 2
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

label_7F34AA74:
    // 7F34AA74: bc    4, 0, 0x7F34AA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AA88;
        }
    }

label_7F34AA78:
    ctx->downcount -= 1;
    // 7F34AA78: b       0x7F34AAC8
    {
            goto label_7F34AAC8;
    }

label_7F34AA7C:
    ctx->downcount -= 2;
    // 7F34AA7C: cmpwi   r0, 5
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

label_7F34AA80:
    // 7F34AA80: bc    4, 0, 0x7F34AAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AAC8;
        }
    }

label_7F34AA84:
    ctx->downcount -= 1;
    // 7F34AA84: b       0x7F34AAC0
    {
            goto label_7F34AAC0;
    }

label_7F34AA88:
    ctx->downcount -= 7;
    // 7F34AA88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34AA8C:
    ctx->pc = 0x7F34AA8Cu;
    // 7F34AA8C: stw     r0, 580(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AA90:
    ctx->pc = 0x7F34AA90u;
    // 7F34AA90: lwz     r3, 552(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AA94:
    ctx->pc = 0x7F34AA94u;
    // 7F34AA94: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AA98:
    // 7F34AA98: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F34AA9C:
    ctx->pc = 0x7F34AA9Cu;
    // 7F34AA9C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AAA0:
    // 7F34AAA0: b       0x7F34AAC8
    {
            goto label_7F34AAC8;
    }

label_7F34AAA4:
    ctx->downcount -= 7;
    // 7F34AAA4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F34AAA8:
    ctx->pc = 0x7F34AAA8u;
    // 7F34AAA8: stw     r0, 580(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AAAC:
    ctx->pc = 0x7F34AAACu;
    // 7F34AAAC: lwz     r3, 552(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AAB0:
    ctx->pc = 0x7F34AAB0u;
    // 7F34AAB0: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AAB4:
    // 7F34AAB4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F34AAB8:
    ctx->pc = 0x7F34AAB8u;
    // 7F34AAB8: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AABC:
    // 7F34AABC: b       0x7F34AAC8
    {
            goto label_7F34AAC8;
    }

label_7F34AAC0:
    ctx->downcount -= 2;
    // 7F34AAC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34AAC4:
    // 7F34AAC4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34AAC8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34AAC8:
    ctx->pc = 0x7F34AAC8u;
    ctx->downcount -= 4;
    // 7F34AAC8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AACC:
    // 7F34AACC: addi    r31, r31, -1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F34AAD0:
    // 7F34AAD0: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F34AAD4:
    ctx->pc = 0x7F34AAD4u;
    // 7F34AAD4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AAD8:
    ctx->downcount -= 2;
    // 7F34AAD8: cmpwi   r31, 0
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

label_7F34AADC:
    // 7F34AADC: bc    12, 1, 0x7F34AA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34AA58u;
                return;
            }
            goto label_7F34AA58;
        }
    }

label_7F34AAE0:
    ctx->pc = 0x7F34AAE0u;
    ctx->downcount -= 16;
    // 7F34AAE0: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34AAE4:
    ctx->pc = 0x7F34AAE4u;
    // 7F34AAE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AAE8:
    ctx->pc = 0x7F34AAE8u;
    // 7F34AAE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34AAEC:
    ctx->pc = 0x7F34AAECu;
    // 7F34AAEC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34AAF0:
    ctx->pc = 0x7F34AAF0u;
    // 7F34AAF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34AAF4:
    ctx->pc = 0x7F34AAF4u;
    ctx->downcount -= 29;
    // 7F34AAF4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34AAF8:
    ctx->pc = 0x7F34AAF8u;
    // 7F34AAF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34AAFC:
    ctx->pc = 0x7F34AAFCu;
    // 7F34AAFC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AB00:
    ctx->pc = 0x7F34AB00u;
    // 7F34AB00: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34AB04:
    ctx->pc = 0x7F34AB04u;
    // 7F34AB04: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34AB08:
    ctx->pc = 0x7F34AB08u;
    // 7F34AB08: lwz     r24, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F34AB0C:
    ctx->pc = 0x7F34AB0Cu;
    // 7F34AB0C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34AB10:
    ctx->pc = 0x7F34AB10u;
    // 7F34AB10: lwz     r25, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F34AB14:
    ctx->pc = 0x7F34AB14u;
    // 7F34AB14: or   r21, r4, r4
    {
        ctx->gpr[21] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34AB18:
    ctx->pc = 0x7F34AB18u;
    // 7F34AB18: lwz     r26, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F34AB1C:
    ctx->pc = 0x7F34AB1Cu;
    // 7F34AB1C: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F34AB20:
    ctx->pc = 0x7F34AB20u;
    // 7F34AB20: lwz     r27, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F34AB24:
    ctx->pc = 0x7F34AB24u;
    // 7F34AB24: or   r22, r9, r9
    {
        ctx->gpr[22] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F34AB28:
    ctx->pc = 0x7F34AB28u;
    // 7F34AB28: lwz     r28, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F34AB2C:
    ctx->pc = 0x7F34AB2Cu;
    // 7F34AB2C: or   r23, r10, r10
    {
        ctx->gpr[23] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F34AB30:
    ctx->pc = 0x7F34AB30u;
    // 7F34AB30: stw     r30, 568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F34AB34:
    ctx->pc = 0x7F34AB34u;
    // 7F34AB34: stw     r6, 608(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(608);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F34AB38:
    ctx->pc = 0x7F34AB38u;
    // 7F34AB38: stw     r7, 612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F34AB3C:
    ctx->pc = 0x7F34AB3Cu;
    // 7F34AB3C: bl      0x7F34A5EC
    {
            ctx->lr = 0x7F34AB40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A5ECu;
                return;
            }
            goto label_7F34A5EC;
    }

label_7F34AB40:
    ctx->pc = 0x7F34AB40u;
    ctx->downcount -= 16;
    // 7F34AB40: rlwinm r0, r3, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001000u;
    }

label_7F34AB44:
    ctx->pc = 0x7F34AB44u;
    // 7F34AB44: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F34AB48:
    ctx->pc = 0x7F34AB48u;
    // 7F34AB48: ori     r4, r0, 0x0020
    ctx->gpr[4] = ctx->gpr[0] | 0x0020u;

label_7F34AB4C:
    ctx->pc = 0x7F34AB4Cu;
    // 7F34AB4C: cmpwi   r21, 0
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

label_7F34AB50:
    ctx->pc = 0x7F34AB50u;
    // 7F34AB50: sth     r4, 600(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(600);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F34AB54:
    ctx->pc = 0x7F34AB54u;
    // 7F34AB54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34AB58:
    ctx->pc = 0x7F34AB58u;
    // 7F34AB58: sth     r3, 596(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(596);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F34AB5C:
    ctx->pc = 0x7F34AB5Cu;
    // 7F34AB5C: stw     r25, 584(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F34AB60:
    ctx->pc = 0x7F34AB60u;
    // 7F34AB60: stw     r27, 588(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F34AB64:
    ctx->pc = 0x7F34AB64u;
    // 7F34AB64: stw     r26, 592(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F34AB68:
    ctx->pc = 0x7F34AB68u;
    // 7F34AB68: stw     r0, 548(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AB6C:
    ctx->pc = 0x7F34AB6Cu;
    // 7F34AB6C: stw     r0, 564(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AB70:
    ctx->pc = 0x7F34AB70u;
    // 7F34AB70: stw     r0, 560(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AB74:
    ctx->pc = 0x7F34AB74u;
    // 7F34AB74: stw     r0, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AB78:
    ctx->pc = 0x7F34AB78u;
    // 7F34AB78: stb     r0, 624(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(624);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F34AB7C:
    ctx->pc = 0x7F34AB7Cu;
    // 7F34AB7C: bc    12, 2, 0x7F34ABAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34ABAC;
        }
    }

label_7F34AB80:
    ctx->pc = 0x7F34AB80u;
    ctx->downcount -= 2;
    // 7F34AB80: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F34AB84:
    ctx->pc = 0x7F34AB84u;
    // 7F34AB84: bl      0x7F329F4C
    {
            ctx->lr = 0x7F34AB88u;
            ctx->pc = 0x7F329F4Cu;
            return;
    }

label_7F34AB88:
    ctx->pc = 0x7F34AB88u;
    ctx->downcount -= 3;
    // 7F34AB88: cmplwi  r3, 0x0000
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

label_7F34AB8C:
    ctx->pc = 0x7F34AB8Cu;
    // 7F34AB8C: stw     r3, 548(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34AB90:
    ctx->pc = 0x7F34AB90u;
    // 7F34AB90: bc    4, 2, 0x7F34ABAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34ABAC;
        }
    }

label_7F34AB94:
    ctx->pc = 0x7F34AB94u;
    ctx->downcount -= 5;
    // 7F34AB94: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AB98:
    ctx->pc = 0x7F34AB98u;
    // 7F34AB98: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F34AB9C:
    ctx->pc = 0x7F34AB9Cu;
    // 7F34AB9C: addi    r3, r3, 6688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6688);

label_7F34ABA0:
    ctx->pc = 0x7F34ABA0u;
    // 7F34ABA0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34ABA4:
    ctx->pc = 0x7F34ABA4u;
    // 7F34ABA4: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34ABA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34ABA8:
    ctx->pc = 0x7F34ABA8u;
    ctx->downcount -= 1;
    // 7F34ABA8: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34ABAC:
    ctx->pc = 0x7F34ABACu;
    ctx->downcount -= 2;
    // 7F34ABAC: cmpwi   r23, 0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34ABB0:
    ctx->pc = 0x7F34ABB0u;
    // 7F34ABB0: bc    12, 2, 0x7F34ABE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34ABE8;
        }
    }

label_7F34ABB4:
    ctx->pc = 0x7F34ABB4u;
    ctx->downcount -= 3;
    // 7F34ABB4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F34ABB8:
    ctx->pc = 0x7F34ABB8u;
    // 7F34ABB8: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F34ABBC:
    ctx->pc = 0x7F34ABBCu;
    // 7F34ABBC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F34ABC0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F34ABC0:
    ctx->pc = 0x7F34ABC0u;
    ctx->downcount -= 1;
    // 7F34ABC0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F34ABC4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F34ABC4:
    ctx->pc = 0x7F34ABC4u;
    ctx->downcount -= 3;
    // 7F34ABC4: cmplwi  r3, 0x0000
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

label_7F34ABC8:
    ctx->pc = 0x7F34ABC8u;
    // 7F34ABC8: stw     r3, 564(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34ABCC:
    ctx->pc = 0x7F34ABCCu;
    // 7F34ABCC: bc    4, 2, 0x7F34ABE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34ABE8;
        }
    }

label_7F34ABD0:
    ctx->pc = 0x7F34ABD0u;
    ctx->downcount -= 5;
    // 7F34ABD0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34ABD4:
    ctx->pc = 0x7F34ABD4u;
    // 7F34ABD4: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F34ABD8:
    ctx->pc = 0x7F34ABD8u;
    // 7F34ABD8: addi    r3, r3, 6732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6732);

label_7F34ABDC:
    ctx->pc = 0x7F34ABDCu;
    // 7F34ABDC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34ABE0:
    ctx->pc = 0x7F34ABE0u;
    // 7F34ABE0: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34ABE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34ABE4:
    ctx->pc = 0x7F34ABE4u;
    ctx->downcount -= 1;
    // 7F34ABE4: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34ABE8:
    ctx->pc = 0x7F34ABE8u;
    ctx->downcount -= 2;
    // 7F34ABE8: cmpwi   r22, 0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34ABEC:
    ctx->pc = 0x7F34ABECu;
    // 7F34ABEC: bc    12, 2, 0x7F34AC24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AC24;
        }
    }

label_7F34ABF0:
    ctx->pc = 0x7F34ABF0u;
    ctx->downcount -= 3;
    // 7F34ABF0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F34ABF4:
    ctx->pc = 0x7F34ABF4u;
    // 7F34ABF4: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F34ABF8:
    ctx->pc = 0x7F34ABF8u;
    // 7F34ABF8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F34ABFCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F34ABFC:
    ctx->pc = 0x7F34ABFCu;
    ctx->downcount -= 1;
    // 7F34ABFC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F34AC00u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F34AC00:
    ctx->pc = 0x7F34AC00u;
    ctx->downcount -= 3;
    // 7F34AC00: cmplwi  r3, 0x0000
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

label_7F34AC04:
    ctx->pc = 0x7F34AC04u;
    // 7F34AC04: stw     r3, 560(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34AC08:
    ctx->pc = 0x7F34AC08u;
    // 7F34AC08: bc    4, 2, 0x7F34AC24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AC24;
        }
    }

label_7F34AC0C:
    ctx->pc = 0x7F34AC0Cu;
    ctx->downcount -= 5;
    // 7F34AC0C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AC10:
    ctx->pc = 0x7F34AC10u;
    // 7F34AC10: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F34AC14:
    ctx->pc = 0x7F34AC14u;
    // 7F34AC14: addi    r3, r3, 6732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6732);

label_7F34AC18:
    ctx->pc = 0x7F34AC18u;
    // 7F34AC18: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34AC1C:
    ctx->pc = 0x7F34AC1Cu;
    // 7F34AC1C: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34AC20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34AC20:
    ctx->pc = 0x7F34AC20u;
    ctx->downcount -= 1;
    // 7F34AC20: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AC24:
    ctx->pc = 0x7F34AC24u;
    ctx->downcount -= 3;
    // 7F34AC24: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AC28:
    ctx->pc = 0x7F34AC28u;
    // 7F34AC28: and.   r0, r0, r27
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

label_7F34AC2C:
    ctx->pc = 0x7F34AC2Cu;
    // 7F34AC2C: bc    4, 2, 0x7F34AFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AFA4;
        }
    }

label_7F34AC30:
    ctx->pc = 0x7F34AC30u;
    ctx->downcount -= 5;
    // 7F34AC30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34AC34:
    ctx->pc = 0x7F34AC34u;
    // 7F34AC34: stw     r0, 576(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AC38:
    ctx->pc = 0x7F34AC38u;
    // 7F34AC38: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AC3C:
    ctx->pc = 0x7F34AC3Cu;
    // 7F34AC3C: and.   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[26];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AC40:
    ctx->pc = 0x7F34AC40u;
    // 7F34AC40: bc    12, 2, 0x7F34AC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AC4C;
        }
    }

label_7F34AC44:
    ctx->pc = 0x7F34AC44u;
    ctx->downcount -= 2;
    // 7F34AC44: lwz     r4, 564(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(564);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34AC48:
    ctx->pc = 0x7F34AC48u;
    // 7F34AC48: b       0x7F34AC50
    {
            goto label_7F34AC50;
    }

label_7F34AC4C:
    ctx->pc = 0x7F34AC4Cu;
    ctx->downcount -= 1;
    // 7F34AC4C: lwz     r4, 560(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(560);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34AC50:
    ctx->pc = 0x7F34AC50u;
    ctx->downcount -= 2;
    // 7F34AC50: cmplwi  r4, 0x0000
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

label_7F34AC54:
    ctx->pc = 0x7F34AC54u;
    // 7F34AC54: bc    12, 2, 0x7F34AC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AC7C;
        }
    }

label_7F34AC58:
    ctx->pc = 0x7F34AC58u;
    ctx->downcount -= 3;
    // 7F34AC58: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34AC5C:
    ctx->pc = 0x7F34AC5Cu;
    // 7F34AC5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34AC60:
    ctx->pc = 0x7F34AC60u;
    // 7F34AC60: bl      0x7F34A2D4
    {
            ctx->lr = 0x7F34AC64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A2D4u;
                return;
            }
            goto label_7F34A2D4;
    }

label_7F34AC64:
    ctx->pc = 0x7F34AC64u;
    ctx->downcount -= 4;
    // 7F34AC64: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F34AC68:
    ctx->pc = 0x7F34AC68u;
    // 7F34AC68: stw     r3, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34AC6C:
    ctx->pc = 0x7F34AC6Cu;
    // 7F34AC6C: rlwinm. r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AC70:
    ctx->pc = 0x7F34AC70u;
    // 7F34AC70: bc    4, 0, 0x7F34AC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AC7C;
        }
    }

label_7F34AC74:
    ctx->pc = 0x7F34AC74u;
    ctx->downcount -= 2;
    // 7F34AC74: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F34AC78:
    ctx->pc = 0x7F34AC78u;
    // 7F34AC78: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AC7C:
    ctx->pc = 0x7F34AC7Cu;
    ctx->downcount -= 3;
    // 7F34AC7C: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AC80:
    ctx->pc = 0x7F34AC80u;
    // 7F34AC80: and.   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[26];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AC84:
    ctx->pc = 0x7F34AC84u;
    // 7F34AC84: bc    4, 2, 0x7F34AF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AF78;
        }
    }

label_7F34AC88:
    ctx->pc = 0x7F34AC88u;
    ctx->downcount -= 3;
    // 7F34AC88: lwz     r0, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AC8C:
    ctx->pc = 0x7F34AC8Cu;
    // 7F34AC8C: cmplwi  r0, 0x0000
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

label_7F34AC90:
    ctx->pc = 0x7F34AC90u;
    // 7F34AC90: bc    12, 2, 0x7F34AD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AD08;
        }
    }

label_7F34AC94:
    ctx->pc = 0x7F34AC94u;
    ctx->downcount -= 3;
    // 7F34AC94: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AC98:
    ctx->pc = 0x7F34AC98u;
    // 7F34AC98: addi    r3, r3, 6772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6772);

label_7F34AC9C:
    ctx->pc = 0x7F34AC9Cu;
    // 7F34AC9C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F34ACA0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F34ACA0:
    ctx->pc = 0x7F34ACA0u;
    ctx->downcount -= 7;
    // 7F34ACA0: lis     r5, 32639
    ctx->gpr[5] = ((u32)(s32)(32639) << 16);

label_7F34ACA4:
    ctx->pc = 0x7F34ACA4u;
    // 7F34ACA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34ACA8:
    ctx->pc = 0x7F34ACA8u;
    // 7F34ACA8: addi    r7, r5, 32639
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(32639);

label_7F34ACAC:
    ctx->pc = 0x7F34ACACu;
    // 7F34ACAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F34ACB0:
    ctx->pc = 0x7F34ACB0u;
    // 7F34ACB0: li      r6, 72
    ctx->gpr[6] = (u32)(s32)(72);

label_7F34ACB4:
    ctx->pc = 0x7F34ACB4u;
    // 7F34ACB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34ACB8:
    ctx->pc = 0x7F34ACB8u;
    // 7F34ACB8: bl      0x7F33BF18
    {
            ctx->lr = 0x7F34ACBCu;
            ctx->pc = 0x7F33BF18u;
            return;
    }

label_7F34ACBC:
    ctx->pc = 0x7F34ACBCu;
    ctx->downcount -= 4;
    // 7F34ACBC: stw     r3, 556(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34ACC0:
    ctx->pc = 0x7F34ACC0u;
    // 7F34ACC0: lwz     r6, 556(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(556);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34ACC4:
    ctx->pc = 0x7F34ACC4u;
    // 7F34ACC4: cmplwi  r6, 0x0000
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

label_7F34ACC8:
    ctx->pc = 0x7F34ACC8u;
    // 7F34ACC8: bc    4, 2, 0x7F34ACE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34ACE0;
        }
    }

label_7F34ACCC:
    ctx->pc = 0x7F34ACCCu;
    ctx->downcount -= 4;
    // 7F34ACCC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34ACD0:
    ctx->pc = 0x7F34ACD0u;
    // 7F34ACD0: addi    r3, r3, 6788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6788);

label_7F34ACD4:
    ctx->pc = 0x7F34ACD4u;
    // 7F34ACD4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34ACD8:
    ctx->pc = 0x7F34ACD8u;
    // 7F34ACD8: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34ACDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34ACDC:
    ctx->pc = 0x7F34ACDCu;
    ctx->downcount -= 1;
    // 7F34ACDC: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34ACE0:
    ctx->pc = 0x7F34ACE0u;
    ctx->downcount -= 10;
    // 7F34ACE0: lwz     r5, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34ACE4:
    ctx->pc = 0x7F34ACE4u;
    // 7F34ACE4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34ACE8:
    ctx->pc = 0x7F34ACE8u;
    // 7F34ACE8: addi    r4, r3, 6560
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6560);

label_7F34ACEC:
    ctx->pc = 0x7F34ACECu;
    // 7F34ACEC: addi    r0, r5, 4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4);

label_7F34ACF0:
    ctx->pc = 0x7F34ACF0u;
    // 7F34ACF0: stw     r0, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34ACF4:
    ctx->pc = 0x7F34ACF4u;
    // 7F34ACF4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34ACF8:
    ctx->pc = 0x7F34ACF8u;
    // 7F34ACF8: lwz     r3, 556(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34ACFC:
    ctx->pc = 0x7F34ACFCu;
    // 7F34ACFC: lwz     r6, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AD00:
    ctx->pc = 0x7F34AD00u;
    // 7F34AD00: lwz     r7, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34AD04:
    ctx->pc = 0x7F34AD04u;
    // 7F34AD04: bl      0x7F3C2578
    {
            ctx->lr = 0x7F34AD08u;
            ctx->pc = 0x7F3C2578u;
            return;
    }

label_7F34AD08:
    ctx->pc = 0x7F34AD08u;
    ctx->downcount -= 2;
    // 7F34AD08: cmpwi   r24, 0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34AD0C:
    ctx->pc = 0x7F34AD0Cu;
    // 7F34AD0C: bc    12, 2, 0x7F34AD70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AD70;
        }
    }

label_7F34AD10:
    ctx->pc = 0x7F34AD10u;
    ctx->downcount -= 3;
    // 7F34AD10: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F34AD14:
    ctx->pc = 0x7F34AD14u;
    // 7F34AD14: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F34AD18:
    ctx->pc = 0x7F34AD18u;
    // 7F34AD18: bl      0x7F3C8470
    {
            ctx->lr = 0x7F34AD1Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F34AD1C:
    ctx->pc = 0x7F34AD1Cu;
    ctx->downcount -= 1;
    // 7F34AD1C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F34AD20u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F34AD20:
    ctx->pc = 0x7F34AD20u;
    ctx->downcount -= 2;
    // 7F34AD20: or.   r4, r3, r3
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

label_7F34AD24:
    ctx->pc = 0x7F34AD24u;
    // 7F34AD24: bc    4, 2, 0x7F34AD40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AD40;
        }
    }

label_7F34AD28:
    ctx->pc = 0x7F34AD28u;
    ctx->downcount -= 5;
    // 7F34AD28: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AD2C:
    ctx->pc = 0x7F34AD2Cu;
    // 7F34AD2C: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F34AD30:
    ctx->pc = 0x7F34AD30u;
    // 7F34AD30: addi    r3, r3, 6824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6824);

label_7F34AD34:
    ctx->pc = 0x7F34AD34u;
    // 7F34AD34: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34AD38:
    ctx->pc = 0x7F34AD38u;
    // 7F34AD38: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34AD3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34AD3C:
    ctx->pc = 0x7F34AD3Cu;
    ctx->downcount -= 1;
    // 7F34AD3C: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AD40:
    ctx->pc = 0x7F34AD40u;
    ctx->downcount -= 3;
    // 7F34AD40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34AD44:
    ctx->pc = 0x7F34AD44u;
    // 7F34AD44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34AD48:
    ctx->pc = 0x7F34AD48u;
    // 7F34AD48: bl      0x7F34A2D4
    {
            ctx->lr = 0x7F34AD4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A2D4u;
                return;
            }
            goto label_7F34A2D4;
    }

label_7F34AD4C:
    ctx->pc = 0x7F34AD4Cu;
    ctx->downcount -= 4;
    // 7F34AD4C: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F34AD50:
    ctx->pc = 0x7F34AD50u;
    // 7F34AD50: stw     r3, 540(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34AD54:
    ctx->pc = 0x7F34AD54u;
    // 7F34AD54: rlwinm. r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AD58:
    ctx->pc = 0x7F34AD58u;
    // 7F34AD58: bc    4, 0, 0x7F34AD70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AD70;
        }
    }

label_7F34AD5C:
    ctx->pc = 0x7F34AD5Cu;
    ctx->downcount -= 4;
    // 7F34AD5C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AD60:
    ctx->pc = 0x7F34AD60u;
    // 7F34AD60: addi    r3, r3, 6868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6868);

label_7F34AD64:
    ctx->pc = 0x7F34AD64u;
    // 7F34AD64: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34AD68:
    ctx->pc = 0x7F34AD68u;
    // 7F34AD68: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34AD6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34AD6C:
    ctx->pc = 0x7F34AD6Cu;
    ctx->downcount -= 1;
    // 7F34AD6C: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AD70:
    ctx->pc = 0x7F34AD70u;
    ctx->downcount -= 3;
    // 7F34AD70: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AD74:
    ctx->pc = 0x7F34AD74u;
    // 7F34AD74: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AD78:
    ctx->pc = 0x7F34AD78u;
    // 7F34AD78: bc    12, 2, 0x7F34ADC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34ADC8;
        }
    }

label_7F34AD7C:
    ctx->pc = 0x7F34AD7Cu;
    ctx->downcount -= 8;
    // 7F34AD7C: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F34AD80:
    ctx->pc = 0x7F34AD80u;
    // 7F34AD80: lis     r5, 16240
    ctx->gpr[5] = ((u32)(s32)(16240) << 16);

label_7F34AD84:
    ctx->pc = 0x7F34AD84u;
    // 7F34AD84: addi    r4, r3, 12129
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12129);

label_7F34AD88:
    ctx->pc = 0x7F34AD88u;
    // 7F34AD88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F34AD8C:
    ctx->pc = 0x7F34AD8Cu;
    // 7F34AD8C: addi    r7, r5, 32639
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(32639);

label_7F34AD90:
    ctx->pc = 0x7F34AD90u;
    // 7F34AD90: li      r6, 73
    ctx->gpr[6] = (u32)(s32)(73);

label_7F34AD94:
    ctx->pc = 0x7F34AD94u;
    // 7F34AD94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34AD98:
    ctx->pc = 0x7F34AD98u;
    // 7F34AD98: bl      0x7F33BF18
    {
            ctx->lr = 0x7F34AD9Cu;
            ctx->pc = 0x7F33BF18u;
            return;
    }

label_7F34AD9C:
    ctx->pc = 0x7F34AD9Cu;
    ctx->downcount -= 4;
    // 7F34AD9C: stw     r3, 616(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34ADA0:
    ctx->pc = 0x7F34ADA0u;
    // 7F34ADA0: lwz     r3, 616(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34ADA4:
    ctx->pc = 0x7F34ADA4u;
    // 7F34ADA4: cmplwi  r3, 0x0000
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

label_7F34ADA8:
    ctx->pc = 0x7F34ADA8u;
    // 7F34ADA8: bc    4, 2, 0x7F34ADC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34ADC0;
        }
    }

label_7F34ADAC:
    ctx->pc = 0x7F34ADACu;
    ctx->downcount -= 4;
    // 7F34ADAC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34ADB0:
    ctx->pc = 0x7F34ADB0u;
    // 7F34ADB0: addi    r3, r3, 6788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6788);

label_7F34ADB4:
    ctx->pc = 0x7F34ADB4u;
    // 7F34ADB4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34ADB8:
    ctx->pc = 0x7F34ADB8u;
    // 7F34ADB8: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34ADBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34ADBC:
    ctx->pc = 0x7F34ADBCu;
    ctx->downcount -= 1;
    // 7F34ADBC: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34ADC0:
    ctx->pc = 0x7F34ADC0u;
    ctx->downcount -= 2;
    // 7F34ADC0: li      r0, -300
    ctx->gpr[0] = (u32)(s32)(-300);

label_7F34ADC4:
    ctx->pc = 0x7F34ADC4u;
    // 7F34ADC4: stw     r0, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34ADC8:
    ctx->pc = 0x7F34ADC8u;
    ctx->downcount -= 11;
    // 7F34ADC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34ADCC:
    ctx->pc = 0x7F34ADCCu;
    // 7F34ADCC: lis     r5, 188
    ctx->gpr[5] = ((u32)(s32)(188) << 16);

label_7F34ADD0:
    ctx->pc = 0x7F34ADD0u;
    // 7F34ADD0: addi    r4, r3, -25280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25280);

label_7F34ADD4:
    ctx->pc = 0x7F34ADD4u;
    // 7F34ADD4: lis     r3, 8048
    ctx->gpr[3] = ((u32)(s32)(8048) << 16);

label_7F34ADD8:
    ctx->pc = 0x7F34ADD8u;
    // 7F34ADD8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34ADD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34ADDC:
    ctx->pc = 0x7F34ADDCu;
    // 7F34ADDC: addi    r4, r5, -24083
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-24083);

label_7F34ADE0:
    ctx->pc = 0x7F34ADE0u;
    // 7F34ADE0: addi    r7, r3, 32639
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(32639);

label_7F34ADE4:
    ctx->pc = 0x7F34ADE4u;
    // 7F34ADE4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F34ADE8:
    ctx->pc = 0x7F34ADE8u;
    // 7F34ADE8: li      r6, 72
    ctx->gpr[6] = (u32)(s32)(72);

label_7F34ADEC:
    ctx->pc = 0x7F34ADECu;
    // 7F34ADEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34ADF0:
    ctx->pc = 0x7F34ADF0u;
    // 7F34ADF0: bl      0x7F33B934
    {
            ctx->lr = 0x7F34ADF4u;
            ctx->pc = 0x7F33B934u;
            return;
    }

label_7F34ADF4:
    ctx->pc = 0x7F34ADF4u;
    ctx->downcount -= 4;
    // 7F34ADF4: stw     r3, 552(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34ADF8:
    ctx->pc = 0x7F34ADF8u;
    // 7F34ADF8: lwz     r4, 552(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(552);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34ADFC:
    ctx->pc = 0x7F34ADFCu;
    // 7F34ADFC: cmplwi  r4, 0x0000
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

label_7F34AE00:
    ctx->pc = 0x7F34AE00u;
    // 7F34AE00: bc    4, 2, 0x7F34AE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AE18;
        }
    }

label_7F34AE04:
    ctx->pc = 0x7F34AE04u;
    ctx->downcount -= 4;
    // 7F34AE04: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AE08:
    ctx->pc = 0x7F34AE08u;
    // 7F34AE08: addi    r3, r3, 6788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6788);

label_7F34AE0C:
    ctx->pc = 0x7F34AE0Cu;
    // 7F34AE0C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F34AE10:
    ctx->pc = 0x7F34AE10u;
    // 7F34AE10: bl      0x7F34A0D4
    {
            ctx->lr = 0x7F34AE14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A0D4u;
                return;
            }
            goto label_7F34A0D4;
    }

label_7F34AE14:
    ctx->pc = 0x7F34AE14u;
    ctx->downcount -= 1;
    // 7F34AE14: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AE18:
    ctx->pc = 0x7F34AE18u;
    ctx->downcount -= 3;
    // 7F34AE18: lwz     r3, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AE1C:
    ctx->pc = 0x7F34AE1Cu;
    // 7F34AE1C: cmplwi  r3, 0x0000
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

label_7F34AE20:
    ctx->pc = 0x7F34AE20u;
    // 7F34AE20: bc    12, 2, 0x7F34AE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AE30;
        }
    }

label_7F34AE24:
    ctx->pc = 0x7F34AE24u;
    ctx->downcount -= 3;
    // 7F34AE24: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F34AE28:
    ctx->pc = 0x7F34AE28u;
    // 7F34AE28: stw     r0, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AE2C:
    ctx->pc = 0x7F34AE2Cu;
    // 7F34AE2C: b       0x7F34AE38
    {
            goto label_7F34AE38;
    }

label_7F34AE30:
    ctx->pc = 0x7F34AE30u;
    ctx->downcount -= 2;
    // 7F34AE30: lwz     r0, 608(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(608);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AE34:
    ctx->pc = 0x7F34AE34u;
    // 7F34AE34: stw     r0, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AE38:
    ctx->pc = 0x7F34AE38u;
    ctx->downcount -= 16;
    // 7F34AE38: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F34AE3C:
    ctx->pc = 0x7F34AE3Cu;
    // 7F34AE3C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34AE40:
    ctx->pc = 0x7F34AE40u;
    // 7F34AE40: addi    r7, r6, -25272
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-25272);

label_7F34AE44:
    ctx->pc = 0x7F34AE44u;
    // 7F34AE44: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34AE48:
    ctx->pc = 0x7F34AE48u;
    // 7F34AE48: addi    r6, r5, -25312
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-25312);

label_7F34AE4C:
    ctx->pc = 0x7F34AE4Cu;
    // 7F34AE4C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34AE50:
    ctx->pc = 0x7F34AE50u;
    // 7F34AE50: addi    r5, r3, -25320
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25320);

label_7F34AE54:
    ctx->pc = 0x7F34AE54u;
    // 7F34AE54: lfs     f6, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE54u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F34AE58:
    ctx->pc = 0x7F34AE58u;
    // 7F34AE58: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AE5C:
    ctx->pc = 0x7F34AE5Cu;
    // 7F34AE5C: lfs     f4, -25276(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F34AE60:
    ctx->pc = 0x7F34AE60u;
    // 7F34AE60: lfd     f5, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE60u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34AE64:
    ctx->pc = 0x7F34AE64u;
    // 7F34AE64: addi    r3, r3, 6672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6672);

label_7F34AE68:
    ctx->pc = 0x7F34AE68u;
    // 7F34AE68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F34AE6C:
    ctx->pc = 0x7F34AE6Cu;
    // 7F34AE6C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F34AE70:
    ctx->pc = 0x7F34AE70u;
    // 7F34AE70: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F34AE74:
    ctx->pc = 0x7F34AE74u;
    // 7F34AE74: b       0x7F34AF70
    {
            goto label_7F34AF70;
    }

label_7F34AE78:
    ctx->downcount -= 13;
    // 7F34AE78: addi    r0, r4, -3
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3);

label_7F34AE7C:
    ctx->pc = 0x7F34AE7Cu;
    // 7F34AE7C: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F34AE80:
    // 7F34AE80: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F34AE84:
    ctx->pc = 0x7F34AE84u;
    // 7F34AE84: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AE88:
    ctx->pc = 0x7F34AE88u;
    // 7F34AE88: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34AE8C:
    ctx->pc = 0x7F34AE8Cu;
    // 7F34AE8C: stfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34AE90:
    ctx->pc = 0x7F34AE90u;
    // 7F34AE90: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F34AE90u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F34AE94:
    ctx->pc = 0x7F34AE94u;
    // 7F34AE94: stfs     f3, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34AE98:
    ctx->pc = 0x7F34AE98u;
    // 7F34AE98: stfs     f3, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AE98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F34AE9C:
    ctx->pc = 0x7F34AE9Cu;
    // 7F34AE9C: fmadds f1, f6, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F34AE9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[6], ctx->fpr[0], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F34AEA0:
    ctx->pc = 0x7F34AEA0u;
    // 7F34AEA0: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AEA4:
    ctx->pc = 0x7F34AEA4u;
    // 7F34AEA4: fcmpu   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AEA4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], false);

label_7F34AEA8:
    // 7F34AEA8: bc    12, 2, 0x7F34AEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AEB8;
        }
    }

label_7F34AEAC:
    ctx->pc = 0x7F34AEACu;
    ctx->downcount -= 3;
    // 7F34AEAC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AEACu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F34AEB0:
    // 7F34AEB0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F34AEB4:
    ctx->pc = 0x7F34AEB4u;
    // 7F34AEB4: stfs     f0, 6672(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEB4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6672);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AEB8:
    ctx->pc = 0x7F34AEB8u;
    ctx->downcount -= 3;
    // 7F34AEB8: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AEBC:
    ctx->pc = 0x7F34AEBCu;
    // 7F34AEBC: fcmpu   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AEBCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], false);

label_7F34AEC0:
    // 7F34AEC0: bc    12, 2, 0x7F34AECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AECC;
        }
    }

label_7F34AEC4:
    ctx->pc = 0x7F34AEC4u;
    ctx->downcount -= 2;
    // 7F34AEC4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AEC4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F34AEC8:
    ctx->pc = 0x7F34AEC8u;
    // 7F34AEC8: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AECC:
    ctx->pc = 0x7F34AECCu;
    ctx->downcount -= 3;
    // 7F34AECC: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34AECCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AED0:
    ctx->pc = 0x7F34AED0u;
    // 7F34AED0: fcmpu   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AED0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], false);

label_7F34AED4:
    // 7F34AED4: bc    12, 2, 0x7F34AEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AEE0;
        }
    }

label_7F34AED8:
    ctx->pc = 0x7F34AED8u;
    ctx->downcount -= 2;
    // 7F34AED8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AED8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F34AEDC:
    ctx->pc = 0x7F34AEDCu;
    // 7F34AEDC: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AEE0:
    ctx->pc = 0x7F34AEE0u;
    ctx->downcount -= 36;
    // 7F34AEE0: lwz     r6, 612(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(612);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AEE4:
    // 7F34AEE4: rlwinm r8, r4, 4, 0, 27
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F34AEE8:
    ctx->pc = 0x7F34AEE8u;
    // 7F34AEE8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34AEEC:
    ctx->pc = 0x7F34AEECu;
    // 7F34AEEC: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AEF0:
    ctx->pc = 0x7F34AEF0u;
    // 7F34AEF0: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34AEF4:
    ctx->pc = 0x7F34AEF4u;
    // 7F34AEF4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AEF4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F34AEF8:
    ctx->pc = 0x7F34AEF8u;
    // 7F34AEF8: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34AEFC:
    ctx->pc = 0x7F34AEFCu;
    // 7F34AEFC: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AEFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AF00:
    ctx->pc = 0x7F34AF00u;
    // 7F34AF00: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34AF00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AF04:
    ctx->pc = 0x7F34AF04u;
    // 7F34AF04: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34AF08:
    ctx->pc = 0x7F34AF08u;
    // 7F34AF08: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AF08u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F34AF0C:
    ctx->pc = 0x7F34AF0Cu;
    // 7F34AF0C: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AF0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AF10:
    ctx->pc = 0x7F34AF10u;
    // 7F34AF10: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34AF10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AF14:
    ctx->pc = 0x7F34AF14u;
    // 7F34AF14: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AF18:
    ctx->pc = 0x7F34AF18u;
    // 7F34AF18: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34AF18u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F34AF1C:
    ctx->pc = 0x7F34AF1Cu;
    // 7F34AF1C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34AF1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34AF20:
    ctx->pc = 0x7F34AF20u;
    // 7F34AF20: lwz     r6, 552(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(552);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AF24:
    ctx->pc = 0x7F34AF24u;
    // 7F34AF24: lwz     r6, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AF28:
    // 7F34AF28: add   r6, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F34AF2C:
    ctx->pc = 0x7F34AF2Cu;
    // 7F34AF2C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34AF30:
    ctx->pc = 0x7F34AF30u;
    // 7F34AF30: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AF34:
    ctx->pc = 0x7F34AF34u;
    // 7F34AF34: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34AF38:
    ctx->pc = 0x7F34AF38u;
    // 7F34AF38: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AF3C:
    ctx->pc = 0x7F34AF3Cu;
    // 7F34AF3C: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34AF40:
    ctx->pc = 0x7F34AF40u;
    // 7F34AF40: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AF44:
    ctx->pc = 0x7F34AF44u;
    // 7F34AF44: lwz     r6, 552(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(552);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AF48:
    ctx->pc = 0x7F34AF48u;
    // 7F34AF48: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34AF4C:
    ctx->pc = 0x7F34AF4Cu;
    // 7F34AF4C: lwz     r6, 188(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(188);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34AF50:
    ctx->pc = 0x7F34AF50u;
    // 7F34AF50: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AF54:
    // 7F34AF54: add   r6, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F34AF58:
    ctx->pc = 0x7F34AF58u;
    // 7F34AF58: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34AF5C:
    ctx->pc = 0x7F34AF5Cu;
    // 7F34AF5C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AF60:
    ctx->pc = 0x7F34AF60u;
    // 7F34AF60: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34AF64:
    ctx->pc = 0x7F34AF64u;
    // 7F34AF64: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AF68:
    ctx->pc = 0x7F34AF68u;
    // 7F34AF68: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34AF6C:
    ctx->pc = 0x7F34AF6Cu;
    // 7F34AF6C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AF70:
    ctx->downcount -= 2;
    // 7F34AF70: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34AF74:
    // 7F34AF74: bc    4, 0, 0x7F34AE78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34AE78u;
                return;
            }
            goto label_7F34AE78;
        }
    }

label_7F34AF78:
    ctx->pc = 0x7F34AF78u;
    ctx->downcount -= 3;
    // 7F34AF78: lwz     r4, 544(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(544);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34AF7C:
    ctx->pc = 0x7F34AF7Cu;
    // 7F34AF7C: cmplwi  r4, 0x0000
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

label_7F34AF80:
    ctx->pc = 0x7F34AF80u;
    // 7F34AF80: bc    12, 2, 0x7F34AFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AFAC;
        }
    }

label_7F34AF84:
    ctx->pc = 0x7F34AF84u;
    ctx->downcount -= 4;
    // 7F34AF84: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34AF88:
    ctx->pc = 0x7F34AF88u;
    // 7F34AF88: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34AF8C:
    ctx->pc = 0x7F34AF8Cu;
    // 7F34AF8C: addi    r4, r4, 444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(444);

label_7F34AF90:
    ctx->pc = 0x7F34AF90u;
    // 7F34AF90: bl      0x7F34A610
    {
            ctx->lr = 0x7F34AF94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34A610u;
                return;
            }
            goto label_7F34A610;
    }

label_7F34AF94:
    ctx->pc = 0x7F34AF94u;
    ctx->downcount -= 2;
    // 7F34AF94: cmpwi   r3, 0
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

label_7F34AF98:
    ctx->pc = 0x7F34AF98u;
    // 7F34AF98: bc    4, 0, 0x7F34AFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34AFAC;
        }
    }

label_7F34AF9C:
    ctx->pc = 0x7F34AF9Cu;
    ctx->downcount -= 2;
    // 7F34AF9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F34AFA0:
    ctx->pc = 0x7F34AFA0u;
    // 7F34AFA0: b       0x7F34B004
    {
            goto label_7F34B004;
    }

label_7F34AFA4:
    ctx->pc = 0x7F34AFA4u;
    ctx->downcount -= 2;
    // 7F34AFA4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F34AFA8:
    ctx->pc = 0x7F34AFA8u;
    // 7F34AFA8: stw     r0, 576(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AFAC:
    ctx->pc = 0x7F34AFACu;
    ctx->downcount -= 4;
    // 7F34AFAC: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34AFB0:
    ctx->pc = 0x7F34AFB0u;
    // 7F34AFB0: or   r0, r27, r26
    {
        ctx->gpr[0] = ctx->gpr[27] | ctx->gpr[26];
    }

label_7F34AFB4:
    ctx->pc = 0x7F34AFB4u;
    // 7F34AFB4: and.   r0, r3, r0
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

label_7F34AFB8:
    ctx->pc = 0x7F34AFB8u;
    // 7F34AFB8: bc    12, 2, 0x7F34AFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34AFCC;
        }
    }

label_7F34AFBC:
    ctx->pc = 0x7F34AFBCu;
    ctx->downcount -= 4;
    // 7F34AFBC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34AFC0:
    ctx->pc = 0x7F34AFC0u;
    // 7F34AFC0: addi    r3, r29, 496
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(496);

label_7F34AFC4:
    ctx->pc = 0x7F34AFC4u;
    // 7F34AFC4: lfs     f1, -25300(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34AFC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34AFC8:
    ctx->pc = 0x7F34AFC8u;
    // 7F34AFC8: bl      0x7F3BC540
    {
            ctx->lr = 0x7F34AFCCu;
            ctx->pc = 0x7F3BC540u;
            return;
    }

label_7F34AFCC:
    ctx->pc = 0x7F34AFCCu;
    ctx->downcount -= 14;
    // 7F34AFCC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34AFD0:
    ctx->pc = 0x7F34AFD0u;
    // 7F34AFD0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34AFD4:
    ctx->pc = 0x7F34AFD4u;
    // 7F34AFD4: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F34AFD8:
    ctx->pc = 0x7F34AFD8u;
    // 7F34AFD8: lfs     f0, -25268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34AFD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34AFDC:
    ctx->pc = 0x7F34AFDCu;
    // 7F34AFDC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34AFE0:
    ctx->pc = 0x7F34AFE0u;
    // 7F34AFE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34AFE4:
    ctx->pc = 0x7F34AFE4u;
    // 7F34AFE4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AFE8:
    ctx->pc = 0x7F34AFE8u;
    // 7F34AFE8: stw     r5, 512(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34AFEC:
    ctx->pc = 0x7F34AFECu;
    // 7F34AFEC: stw     r0, 516(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34AFF0:
    ctx->pc = 0x7F34AFF0u;
    // 7F34AFF0: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34AFF4:
    ctx->pc = 0x7F34AFF4u;
    // 7F34AFF4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34AFF8:
    ctx->pc = 0x7F34AFF8u;
    // 7F34AFF8: stw     r4, 520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34AFFC:
    ctx->pc = 0x7F34AFFCu;
    // 7F34AFFC: stw     r0, 524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B000:
    ctx->pc = 0x7F34B000u;
    // 7F34B000: stfs     f0, 620(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F34B000u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(620);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B004:
    ctx->pc = 0x7F34B004u;
    ctx->downcount -= 16;
    // 7F34B004: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B008:
    ctx->pc = 0x7F34B008u;
    // 7F34B008: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B00C:
    ctx->pc = 0x7F34B00Cu;
    // 7F34B00C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B010:
    ctx->pc = 0x7F34B010u;
    // 7F34B010: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F34B014:
    ctx->pc = 0x7F34B014u;
    // 7F34B014: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B018:
    ctx->pc = 0x7F34B018u;
    ctx->downcount -= 32;
    // 7F34B018: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B01C:
    ctx->pc = 0x7F34B01Cu;
    // 7F34B01C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B020:
    ctx->pc = 0x7F34B020u;
    // 7F34B020: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B024:
    ctx->pc = 0x7F34B024u;
    // 7F34B024: stmw     r18, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B028:
    ctx->pc = 0x7F34B028u;
    // 7F34B028: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B02C:
    ctx->pc = 0x7F34B02Cu;
    // 7F34B02C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B030:
    ctx->pc = 0x7F34B030u;
    // 7F34B030: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34B034:
    ctx->pc = 0x7F34B034u;
    // 7F34B034: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F34B038:
    ctx->pc = 0x7F34B038u;
    // 7F34B038: lwz     r20, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F34B03C:
    ctx->pc = 0x7F34B03Cu;
    // 7F34B03C: lwz     r21, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F34B040:
    ctx->pc = 0x7F34B040u;
    // 7F34B040: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F34B044:
    ctx->pc = 0x7F34B044u;
    // 7F34B044: lwz     r22, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F34B048:
    ctx->pc = 0x7F34B048u;
    // 7F34B048: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F34B04C:
    ctx->pc = 0x7F34B04Cu;
    // 7F34B04C: lwz     r23, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F34B050:
    ctx->pc = 0x7F34B050u;
    // 7F34B050: or   r18, r9, r9
    {
        ctx->gpr[18] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F34B054:
    ctx->pc = 0x7F34B054u;
    // 7F34B054: lwz     r24, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F34B058:
    ctx->pc = 0x7F34B058u;
    // 7F34B058: or   r19, r10, r10
    {
        ctx->gpr[19] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F34B05C:
    ctx->pc = 0x7F34B05Cu;
    // 7F34B05C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F34B060:
    ctx->pc = 0x7F34B060u;
    // 7F34B060: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F34B064:
    ctx->pc = 0x7F34B064u;
    // 7F34B064: li      r5, 640
    ctx->gpr[5] = (u32)(s32)(640);

label_7F34B068:
    ctx->pc = 0x7F34B068u;
    // 7F34B068: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34B06C:
    ctx->pc = 0x7F34B06Cu;
    // 7F34B06C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F34B070u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F34B070:
    ctx->pc = 0x7F34B070u;
    ctx->downcount -= 2;
    // 7F34B070: or.   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[25];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34B074:
    ctx->pc = 0x7F34B074u;
    // 7F34B074: bc    12, 2, 0x7F34B108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B108;
        }
    }

label_7F34B078:
    ctx->pc = 0x7F34B078u;
    ctx->downcount -= 5;
    // 7F34B078: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34B07C:
    ctx->pc = 0x7F34B07Cu;
    // 7F34B07C: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F34B080:
    ctx->pc = 0x7F34B080u;
    // 7F34B080: addi    r4, r4, -22476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22476);

label_7F34B084:
    ctx->pc = 0x7F34B084u;
    // 7F34B084: addi    r5, r5, -22640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22640);

label_7F34B088:
    ctx->pc = 0x7F34B088u;
    // 7F34B088: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F34B08Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F34B08C:
    ctx->pc = 0x7F34B08Cu;
    ctx->downcount -= 25;
    // 7F34B08C: lwz     r0, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B090:
    ctx->pc = 0x7F34B090u;
    // 7F34B090: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F34B094:
    ctx->pc = 0x7F34B094u;
    // 7F34B094: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F34B098:
    ctx->pc = 0x7F34B098u;
    // 7F34B098: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34B09C:
    ctx->pc = 0x7F34B09Cu;
    // 7F34B09C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F34B0A0:
    ctx->pc = 0x7F34B0A0u;
    // 7F34B0A0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F34B0A4:
    ctx->pc = 0x7F34B0A4u;
    // 7F34B0A4: stw     r5, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34B0A8:
    ctx->pc = 0x7F34B0A8u;
    // 7F34B0A8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F34B0AC:
    ctx->pc = 0x7F34B0ACu;
    // 7F34B0AC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F34B0B0:
    ctx->pc = 0x7F34B0B0u;
    // 7F34B0B0: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34B0B4:
    ctx->pc = 0x7F34B0B4u;
    // 7F34B0B4: stw     r11, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F34B0B8:
    ctx->pc = 0x7F34B0B8u;
    // 7F34B0B8: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B0BC:
    ctx->pc = 0x7F34B0BCu;
    // 7F34B0BC: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B0C0:
    ctx->pc = 0x7F34B0C0u;
    // 7F34B0C0: or   r9, r31, r31
    {
        ctx->gpr[9] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B0C4:
    ctx->pc = 0x7F34B0C4u;
    // 7F34B0C4: stw     r11, 36(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F34B0C8:
    ctx->pc = 0x7F34B0C8u;
    // 7F34B0C8: or   r10, r18, r18
    {
        ctx->gpr[10] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F34B0CC:
    ctx->pc = 0x7F34B0CCu;
    // 7F34B0CC: stw     r11, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F34B0D0:
    ctx->pc = 0x7F34B0D0u;
    // 7F34B0D0: stw     r0, 44(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B0D4:
    ctx->pc = 0x7F34B0D4u;
    // 7F34B0D4: stw     r19, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F34B0D8:
    ctx->pc = 0x7F34B0D8u;
    // 7F34B0D8: stw     r20, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F34B0DC:
    ctx->pc = 0x7F34B0DCu;
    // 7F34B0DC: stw     r21, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F34B0E0:
    ctx->pc = 0x7F34B0E0u;
    // 7F34B0E0: stw     r22, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F34B0E4:
    ctx->pc = 0x7F34B0E4u;
    // 7F34B0E4: stw     r23, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F34B0E8:
    ctx->pc = 0x7F34B0E8u;
    // 7F34B0E8: stw     r24, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F34B0EC:
    ctx->pc = 0x7F34B0ECu;
    // 7F34B0EC: bl      0x7F34AAF4
    {
            ctx->lr = 0x7F34B0F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34AAF4u;
                return;
            }
            goto label_7F34AAF4;
    }

label_7F34B0F0:
    ctx->pc = 0x7F34B0F0u;
    ctx->downcount -= 2;
    // 7F34B0F0: cmpwi   r3, 0
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

label_7F34B0F4:
    ctx->pc = 0x7F34B0F4u;
    // 7F34B0F4: bc    4, 0, 0x7F34B108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B108;
        }
    }

label_7F34B0F8:
    ctx->pc = 0x7F34B0F8u;
    ctx->downcount -= 2;
    // 7F34B0F8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34B0FC:
    ctx->pc = 0x7F34B0FCu;
    // 7F34B0FC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34B100u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34B100:
    ctx->pc = 0x7F34B100u;
    ctx->downcount -= 2;
    // 7F34B100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B104:
    ctx->pc = 0x7F34B104u;
    // 7F34B104: b       0x7F34B10C
    {
            goto label_7F34B10C;
    }

label_7F34B108:
    ctx->pc = 0x7F34B108u;
    ctx->downcount -= 1;
    // 7F34B108: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34B10C:
    ctx->pc = 0x7F34B10Cu;
    ctx->downcount -= 16;
    // 7F34B10C: lmw     r18, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B110:
    ctx->pc = 0x7F34B110u;
    // 7F34B110: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B114:
    ctx->pc = 0x7F34B114u;
    // 7F34B114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B118:
    ctx->pc = 0x7F34B118u;
    // 7F34B118: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F34B11C:
    ctx->pc = 0x7F34B11Cu;
    // 7F34B11C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B120:
    ctx->pc = 0x7F34B120u;
    ctx->downcount -= 20;
    // 7F34B120: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B124:
    ctx->pc = 0x7F34B124u;
    // 7F34B124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B128:
    ctx->pc = 0x7F34B128u;
    // 7F34B128: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B12C:
    ctx->pc = 0x7F34B12Cu;
    // 7F34B12C: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B130:
    ctx->pc = 0x7F34B130u;
    // 7F34B130: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B134:
    ctx->pc = 0x7F34B134u;
    // 7F34B134: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B138:
    ctx->pc = 0x7F34B138u;
    // 7F34B138: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34B13C:
    ctx->pc = 0x7F34B13Cu;
    // 7F34B13C: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F34B140:
    ctx->pc = 0x7F34B140u;
    // 7F34B140: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F34B144:
    ctx->pc = 0x7F34B144u;
    // 7F34B144: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F34B148u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F34B148:
    ctx->pc = 0x7F34B148u;
    ctx->downcount -= 4;
    // 7F34B148: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B14C:
    ctx->pc = 0x7F34B14Cu;
    // 7F34B14C: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F34B150:
    ctx->pc = 0x7F34B150u;
    // 7F34B150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F34B154:
    ctx->pc = 0x7F34B154u;
    // 7F34B154: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F34B158u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F34B158:
    ctx->pc = 0x7F34B158u;
    ctx->downcount -= 5;
    // 7F34B158: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B15C:
    ctx->pc = 0x7F34B15Cu;
    // 7F34B15C: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F34B160:
    ctx->pc = 0x7F34B160u;
    // 7F34B160: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F34B164:
    ctx->pc = 0x7F34B164u;
    // 7F34B164: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B168:
    ctx->pc = 0x7F34B168u;
    // 7F34B168: bl      0x7F3C664C
    {
            ctx->lr = 0x7F34B16Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F34B16C:
    ctx->pc = 0x7F34B16Cu;
    ctx->downcount -= 2;
    // 7F34B16C: cmplwi  r3, 0x0000
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

label_7F34B170:
    ctx->pc = 0x7F34B170u;
    // 7F34B170: bc    12, 2, 0x7F34B18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B18C;
        }
    }

label_7F34B174:
    ctx->pc = 0x7F34B174u;
    ctx->downcount -= 1;
    // 7F34B174: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F34B178u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F34B178:
    ctx->pc = 0x7F34B178u;
    ctx->downcount -= 2;
    // 7F34B178: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B17C:
    ctx->pc = 0x7F34B17Cu;
    // 7F34B17C: bl      0x7F3C6780
    {
            ctx->lr = 0x7F34B180u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F34B180:
    ctx->pc = 0x7F34B180u;
    ctx->downcount -= 3;
    // 7F34B180: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B184:
    ctx->pc = 0x7F34B184u;
    // 7F34B184: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B188:
    ctx->pc = 0x7F34B188u;
    // 7F34B188: bl      0x7F34B1CC
    {
            ctx->lr = 0x7F34B18Cu;
            goto label_7F34B1CC;
    }

label_7F34B18C:
    ctx->pc = 0x7F34B18Cu;
    ctx->downcount -= 2;
    // 7F34B18C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F34B190:
    ctx->pc = 0x7F34B190u;
    // 7F34B190: bl      0x7F3C664C
    {
            ctx->lr = 0x7F34B194u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F34B194:
    ctx->pc = 0x7F34B194u;
    ctx->downcount -= 2;
    // 7F34B194: cmplwi  r3, 0x0000
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

label_7F34B198:
    ctx->pc = 0x7F34B198u;
    // 7F34B198: bc    12, 2, 0x7F34B1B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B1B4;
        }
    }

label_7F34B19C:
    ctx->pc = 0x7F34B19Cu;
    ctx->downcount -= 1;
    // 7F34B19C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F34B1A0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F34B1A0:
    ctx->pc = 0x7F34B1A0u;
    ctx->downcount -= 2;
    // 7F34B1A0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B1A4:
    ctx->pc = 0x7F34B1A4u;
    // 7F34B1A4: bl      0x7F3C6780
    {
            ctx->lr = 0x7F34B1A8u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F34B1A8:
    ctx->pc = 0x7F34B1A8u;
    ctx->downcount -= 3;
    // 7F34B1A8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B1AC:
    ctx->pc = 0x7F34B1ACu;
    // 7F34B1AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B1B0:
    ctx->pc = 0x7F34B1B0u;
    // 7F34B1B0: bl      0x7F34B1CC
    {
            ctx->lr = 0x7F34B1B4u;
            goto label_7F34B1CC;
    }

label_7F34B1B4:
    ctx->pc = 0x7F34B1B4u;
    ctx->downcount -= 17;
    // 7F34B1B4: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B1B8:
    ctx->pc = 0x7F34B1B8u;
    // 7F34B1B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B1BC:
    ctx->pc = 0x7F34B1BCu;
    // 7F34B1BC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B1C0:
    ctx->pc = 0x7F34B1C0u;
    // 7F34B1C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B1C4:
    ctx->pc = 0x7F34B1C4u;
    // 7F34B1C4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34B1C8:
    ctx->pc = 0x7F34B1C8u;
    // 7F34B1C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B1CC:
    ctx->pc = 0x7F34B1CCu;
    ctx->downcount -= 17;
    // 7F34B1CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B1D0:
    ctx->pc = 0x7F34B1D0u;
    // 7F34B1D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B1D4:
    ctx->pc = 0x7F34B1D4u;
    // 7F34B1D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B1D8:
    ctx->pc = 0x7F34B1D8u;
    // 7F34B1D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B1DC:
    ctx->pc = 0x7F34B1DCu;
    // 7F34B1DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B1E0:
    ctx->pc = 0x7F34B1E0u;
    // 7F34B1E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B1E4:
    ctx->pc = 0x7F34B1E4u;
    // 7F34B1E4: bl      0x7F34B220
    {
            ctx->lr = 0x7F34B1E8u;
            goto label_7F34B220;
    }

label_7F34B1E8:
    ctx->pc = 0x7F34B1E8u;
    ctx->downcount -= 3;
    // 7F34B1E8: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F34B1EC:
    ctx->pc = 0x7F34B1ECu;
    // 7F34B1EC: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F34B1F0:
    ctx->pc = 0x7F34B1F0u;
    // 7F34B1F0: bl      0x7F34B220
    {
            ctx->lr = 0x7F34B1F4u;
            goto label_7F34B220;
    }

label_7F34B1F4:
    ctx->pc = 0x7F34B1F4u;
    ctx->downcount -= 3;
    // 7F34B1F4: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F34B1F8:
    ctx->pc = 0x7F34B1F8u;
    // 7F34B1F8: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F34B1FC:
    ctx->pc = 0x7F34B1FCu;
    // 7F34B1FC: bl      0x7F34B220
    {
            ctx->lr = 0x7F34B200u;
            goto label_7F34B220;
    }

label_7F34B200:
    ctx->pc = 0x7F34B200u;
    ctx->downcount -= 3;
    // 7F34B200: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F34B204:
    ctx->pc = 0x7F34B204u;
    // 7F34B204: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F34B208:
    ctx->pc = 0x7F34B208u;
    // 7F34B208: bl      0x7F34B220
    {
            ctx->lr = 0x7F34B20Cu;
            goto label_7F34B220;
    }

label_7F34B20C:
    ctx->pc = 0x7F34B20Cu;
    ctx->downcount -= 16;
    // 7F34B20C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B210:
    ctx->pc = 0x7F34B210u;
    // 7F34B210: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B214:
    ctx->pc = 0x7F34B214u;
    // 7F34B214: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B218:
    ctx->pc = 0x7F34B218u;
    // 7F34B218: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B21C:
    ctx->pc = 0x7F34B21Cu;
    // 7F34B21C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B220:
    ctx->pc = 0x7F34B220u;
    ctx->downcount -= 6;
    // 7F34B220: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B224:
    ctx->pc = 0x7F34B224u;
    // 7F34B224: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B228:
    ctx->pc = 0x7F34B228u;
    // 7F34B228: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B22C:
    ctx->pc = 0x7F34B22Cu;
    // 7F34B22C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34B230:
    ctx->pc = 0x7F34B230u;
    // 7F34B230: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B234:
    ctx->pc = 0x7F34B234u;
    // 7F34B234: bl      0x7F34B250
    {
            ctx->lr = 0x7F34B238u;
            goto label_7F34B250;
    }

label_7F34B238:
    ctx->pc = 0x7F34B238u;
    ctx->downcount -= 7;
    // 7F34B238: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B238u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34B23C:
    ctx->pc = 0x7F34B23Cu;
    // 7F34B23C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B240:
    ctx->pc = 0x7F34B240u;
    // 7F34B240: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34B244:
    ctx->pc = 0x7F34B244u;
    // 7F34B244: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B248:
    ctx->pc = 0x7F34B248u;
    // 7F34B248: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B24C:
    ctx->pc = 0x7F34B24Cu;
    // 7F34B24C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B250:
    ctx->pc = 0x7F34B250u;
    ctx->downcount -= 4;
    // 7F34B250: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F34B250u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F34B250u);
        if (ctx->exception) return;
    }

label_7F34B254:
    ctx->pc = 0x7F34B254u;
    // 7F34B254: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F34B254u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F34B254u);
        if (ctx->exception) return;
    }

label_7F34B258:
    ctx->pc = 0x7F34B258u;
    // 7F34B258: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34B258u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F34B25C:
    ctx->pc = 0x7F34B25Cu;
    // 7F34B25C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B260:
    ctx->pc = 0x7F34B260u;
    ctx->downcount -= 19;
    // 7F34B260: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B264:
    ctx->pc = 0x7F34B264u;
    // 7F34B264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B268:
    ctx->pc = 0x7F34B268u;
    // 7F34B268: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F34B26C:
    ctx->pc = 0x7F34B26Cu;
    // 7F34B26C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B270:
    ctx->pc = 0x7F34B270u;
    // 7F34B270: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B274:
    ctx->pc = 0x7F34B274u;
    // 7F34B274: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B278:
    ctx->pc = 0x7F34B278u;
    // 7F34B278: addi    r3, r5, -2804
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2804);

label_7F34B27C:
    ctx->pc = 0x7F34B27Cu;
    // 7F34B27C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B280:
    ctx->pc = 0x7F34B280u;
    // 7F34B280: bl      0x80025A08
    {
            ctx->lr = 0x7F34B284u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F34B284:
    ctx->pc = 0x7F34B284u;
    ctx->downcount -= 6;
    // 7F34B284: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F34B288:
    ctx->pc = 0x7F34B288u;
    // 7F34B288: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F34B28C:
    ctx->pc = 0x7F34B28Cu;
    // 7F34B28C: addi    r3, r3, -2820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2820);

label_7F34B290:
    ctx->pc = 0x7F34B290u;
    // 7F34B290: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34B294:
    ctx->pc = 0x7F34B294u;
    // 7F34B294: addi    r5, r5, -2824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2824);

label_7F34B298:
    ctx->pc = 0x7F34B298u;
    // 7F34B298: bl      0x7F34B120
    {
            ctx->lr = 0x7F34B29Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B120u;
                return;
            }
            goto label_7F34B120;
    }

label_7F34B29C:
    ctx->pc = 0x7F34B29Cu;
    ctx->downcount -= 19;
    // 7F34B29C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F34B2A0:
    ctx->pc = 0x7F34B2A0u;
    // 7F34B2A0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F34B2A4:
    ctx->pc = 0x7F34B2A4u;
    // 7F34B2A4: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F34B2A8:
    ctx->pc = 0x7F34B2A8u;
    // 7F34B2A8: addi    r0, r3, -2824
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2824);

label_7F34B2AC:
    ctx->pc = 0x7F34B2ACu;
    // 7F34B2AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B2B0:
    ctx->pc = 0x7F34B2B0u;
    // 7F34B2B0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F34B2B4:
    ctx->pc = 0x7F34B2B4u;
    // 7F34B2B4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B2B8:
    ctx->pc = 0x7F34B2B8u;
    // 7F34B2B8: addi    r5, r4, -2804
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2804);

label_7F34B2BC:
    ctx->pc = 0x7F34B2BCu;
    // 7F34B2BC: addi    r6, r3, -2820
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-2820);

label_7F34B2C0:
    ctx->pc = 0x7F34B2C0u;
    // 7F34B2C0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B2C4:
    ctx->pc = 0x7F34B2C4u;
    // 7F34B2C4: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F34B2C8:
    ctx->pc = 0x7F34B2C8u;
    // 7F34B2C8: addi    r7, r1, 32
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34B2CC:
    ctx->pc = 0x7F34B2CCu;
    // 7F34B2CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B2D0:
    ctx->pc = 0x7F34B2D0u;
    // 7F34B2D0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F34B2D4:
    ctx->pc = 0x7F34B2D4u;
    // 7F34B2D4: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F34B2D8:
    ctx->pc = 0x7F34B2D8u;
    // 7F34B2D8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F34B2DC:
    ctx->pc = 0x7F34B2DCu;
    // 7F34B2DC: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F34B2E0:
    ctx->pc = 0x7F34B2E0u;
    // 7F34B2E0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F34B2E4:
    ctx->pc = 0x7F34B2E4u;
    // 7F34B2E4: bl      0x7F34B018
    {
            ctx->lr = 0x7F34B2E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B018u;
                return;
            }
            goto label_7F34B018;
    }

label_7F34B2E8:
    ctx->pc = 0x7F34B2E8u;
    ctx->downcount -= 2;
    // 7F34B2E8: cmplwi  r3, 0x0000
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

label_7F34B2EC:
    ctx->pc = 0x7F34B2ECu;
    // 7F34B2EC: bc    12, 2, 0x7F34B2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B2FC;
        }
    }

label_7F34B2F0:
    ctx->pc = 0x7F34B2F0u;
    ctx->downcount -= 3;
    // 7F34B2F0: stw     r30, 572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F34B2F4:
    ctx->pc = 0x7F34B2F4u;
    // 7F34B2F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34B2F8:
    ctx->pc = 0x7F34B2F8u;
    // 7F34B2F8: stw     r0, 580(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B2FC:
    ctx->pc = 0x7F34B2FCu;
    ctx->downcount -= 16;
    // 7F34B2FC: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B300:
    ctx->pc = 0x7F34B300u;
    // 7F34B300: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B304:
    ctx->pc = 0x7F34B304u;
    // 7F34B304: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B308:
    ctx->pc = 0x7F34B308u;
    // 7F34B308: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F34B30C:
    ctx->pc = 0x7F34B30Cu;
    // 7F34B30C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B310:
    ctx->pc = 0x7F34B310u;
    ctx->downcount -= 27;
    // 7F34B310: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B314:
    ctx->pc = 0x7F34B314u;
    // 7F34B314: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B318:
    ctx->pc = 0x7F34B318u;
    // 7F34B318: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B31C:
    ctx->pc = 0x7F34B31Cu;
    // 7F34B31C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B31Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F34B320:
    ctx->pc = 0x7F34B320u;
    // 7F34B320: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F34B320u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F34B320u);
        if (ctx->exception) return;
    }

label_7F34B324:
    ctx->pc = 0x7F34B324u;
    // 7F34B324: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B328:
    ctx->pc = 0x7F34B328u;
    // 7F34B328: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34B32C:
    ctx->pc = 0x7F34B32Cu;
    // 7F34B32C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F34B330:
    ctx->pc = 0x7F34B330u;
    // 7F34B330: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B334:
    ctx->pc = 0x7F34B334u;
    // 7F34B334: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B334u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F34B338:
    ctx->pc = 0x7F34B338u;
    // 7F34B338: addi    r4, r5, 12860
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(12860);

label_7F34B33C:
    ctx->pc = 0x7F34B33Cu;
    // 7F34B33C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B340:
    ctx->pc = 0x7F34B340u;
    // 7F34B340: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F34B344:
    ctx->pc = 0x7F34B344u;
    // 7F34B344: lha     r5, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34B348:
    ctx->pc = 0x7F34B348u;
    // 7F34B348: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B34C:
    ctx->pc = 0x7F34B34Cu;
    // 7F34B34C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34B350:
    ctx->pc = 0x7F34B350u;
    // 7F34B350: bl      0x7F34B404
    {
            ctx->lr = 0x7F34B354u;
            goto label_7F34B404;
    }

label_7F34B354:
    ctx->pc = 0x7F34B354u;
    ctx->downcount -= 7;
    // 7F34B354: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F34B354u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B358:
    ctx->pc = 0x7F34B358u;
    // 7F34B358: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B35C:
    ctx->pc = 0x7F34B35Cu;
    // 7F34B35C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B360:
    ctx->pc = 0x7F34B360u;
    // 7F34B360: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F34B364:
    ctx->pc = 0x7F34B364u;
    // 7F34B364: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F34B364u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F34B368:
    ctx->pc = 0x7F34B368u;
    // 7F34B368: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F34B368u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B36C:
    ctx->pc = 0x7F34B36Cu;
    // 7F34B36C: bl      0x800261B4
    {
            ctx->lr = 0x7F34B370u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F34B370:
    ctx->pc = 0x7F34B370u;
    ctx->downcount -= 3;
    // 7F34B370: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B374:
    ctx->pc = 0x7F34B374u;
    // 7F34B374: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B378:
    ctx->pc = 0x7F34B378u;
    // 7F34B378: bl      0x7F34B3C4
    {
            ctx->lr = 0x7F34B37Cu;
            goto label_7F34B3C4;
    }

label_7F34B37C:
    ctx->pc = 0x7F34B37Cu;
    ctx->downcount -= 5;
    // 7F34B37C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B380:
    ctx->pc = 0x7F34B380u;
    // 7F34B380: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_7F34B384:
    ctx->pc = 0x7F34B384u;
    // 7F34B384: lwz     r5, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34B388:
    ctx->pc = 0x7F34B388u;
    // 7F34B388: addi    r4, r4, 444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(444);

label_7F34B38C:
    ctx->pc = 0x7F34B38Cu;
    // 7F34B38C: bl      0x7F014964
    {
            ctx->lr = 0x7F34B390u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F34B390:
    ctx->pc = 0x7F34B390u;
    ctx->downcount -= 5;
    // 7F34B390: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B394:
    ctx->pc = 0x7F34B394u;
    // 7F34B394: addi    r3, r31, 384
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(384);

label_7F34B398:
    ctx->pc = 0x7F34B398u;
    // 7F34B398: lwz     r5, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34B39C:
    ctx->pc = 0x7F34B39Cu;
    // 7F34B39C: addi    r4, r4, 768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(768);

label_7F34B3A0:
    ctx->pc = 0x7F34B3A0u;
    // 7F34B3A0: bl      0x7F014964
    {
            ctx->lr = 0x7F34B3A4u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F34B3A4:
    ctx->pc = 0x7F34B3A4u;
    ctx->downcount -= 19;
    // 7F34B3A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B3A8:
    ctx->pc = 0x7F34B3A8u;
    // 7F34B3A8: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F34B3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F34B3A8u);
        if (ctx->exception) return;
    }

label_7F34B3AC:
    ctx->pc = 0x7F34B3ACu;
    // 7F34B3AC: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B3B0:
    ctx->pc = 0x7F34B3B0u;
    // 7F34B3B0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B3B4:
    ctx->pc = 0x7F34B3B4u;
    // 7F34B3B4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B3B8:
    ctx->pc = 0x7F34B3B8u;
    // 7F34B3B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B3BC:
    ctx->pc = 0x7F34B3BCu;
    // 7F34B3BC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34B3C0:
    ctx->pc = 0x7F34B3C0u;
    // 7F34B3C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B3C4:
    ctx->pc = 0x7F34B3C4u;
    ctx->downcount -= 8;
    // 7F34B3C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B3C8:
    ctx->pc = 0x7F34B3C8u;
    // 7F34B3C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B3CC:
    ctx->pc = 0x7F34B3CCu;
    // 7F34B3CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B3D0:
    ctx->pc = 0x7F34B3D0u;
    // 7F34B3D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34B3D4:
    ctx->pc = 0x7F34B3D4u;
    // 7F34B3D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B3D8:
    ctx->pc = 0x7F34B3D8u;
    // 7F34B3D8: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F34B3DC:
    ctx->pc = 0x7F34B3DCu;
    // 7F34B3DC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B3E0:
    ctx->pc = 0x7F34B3E0u;
    // 7F34B3E0: bl      0x800261B4
    {
            ctx->lr = 0x7F34B3E4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F34B3E4:
    ctx->pc = 0x7F34B3E4u;
    ctx->downcount -= 9;
    // 7F34B3E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B3E8:
    ctx->pc = 0x7F34B3E8u;
    // 7F34B3E8: lfs     f0, -25240(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B3E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B3EC:
    ctx->pc = 0x7F34B3ECu;
    // 7F34B3EC: stfs     f0, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B3ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B3F0:
    ctx->pc = 0x7F34B3F0u;
    // 7F34B3F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B3F4:
    ctx->pc = 0x7F34B3F4u;
    // 7F34B3F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34B3F8:
    ctx->pc = 0x7F34B3F8u;
    // 7F34B3F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B3FC:
    ctx->pc = 0x7F34B3FCu;
    // 7F34B3FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B400:
    ctx->pc = 0x7F34B400u;
    // 7F34B400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B404:
    ctx->pc = 0x7F34B404u;
    ctx->downcount -= 54;
    // 7F34B404: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B408:
    ctx->pc = 0x7F34B408u;
    // 7F34B408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B40C:
    ctx->pc = 0x7F34B40Cu;
    // 7F34B40C: extsh r7, r5
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F34B410:
    ctx->pc = 0x7F34B410u;
    // 7F34B410: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F34B414:
    ctx->pc = 0x7F34B414u;
    // 7F34B414: rlwinm r8, r7, 0, 20, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000FFFu;
    }

label_7F34B418:
    ctx->pc = 0x7F34B418u;
    // 7F34B418: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B41C:
    ctx->pc = 0x7F34B41Cu;
    // 7F34B41C: rlwinm r7, r7, 1, 19, 19
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0x00001000u;
    }

label_7F34B420:
    ctx->pc = 0x7F34B420u;
    // 7F34B420: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34B424:
    ctx->pc = 0x7F34B424u;
    // 7F34B424: subf   r7, r7, r8
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F34B428:
    ctx->pc = 0x7F34B428u;
    // 7F34B428: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34B42C:
    ctx->pc = 0x7F34B42Cu;
    // 7F34B42C: addi    r8, r5, -25248
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-25248);

label_7F34B430:
    ctx->pc = 0x7F34B430u;
    // 7F34B430: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B434:
    ctx->pc = 0x7F34B434u;
    // 7F34B434: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F34B438:
    ctx->pc = 0x7F34B438u;
    // 7F34B438: lfd     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F34B438u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B43C:
    ctx->pc = 0x7F34B43Cu;
    // 7F34B43C: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F34B440:
    ctx->pc = 0x7F34B440u;
    // 7F34B440: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34B444:
    ctx->pc = 0x7F34B444u;
    // 7F34B444: lfs     f2, -25260(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F34B444u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-25260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34B448:
    ctx->pc = 0x7F34B448u;
    // 7F34B448: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B448u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B44C:
    ctx->pc = 0x7F34B44Cu;
    // 7F34B44C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B450:
    ctx->pc = 0x7F34B450u;
    // 7F34B450: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B454:
    ctx->pc = 0x7F34B454u;
    // 7F34B454: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B454u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F34B458:
    ctx->pc = 0x7F34B458u;
    // 7F34B458: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B45C:
    ctx->pc = 0x7F34B45Cu;
    // 7F34B45C: lfs     f0, -25256(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34B45Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B460:
    ctx->pc = 0x7F34B460u;
    // 7F34B460: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F34B464:
    ctx->pc = 0x7F34B464u;
    // 7F34B464: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B468:
    ctx->pc = 0x7F34B468u;
    // 7F34B468: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B468u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F34B46C:
    ctx->pc = 0x7F34B46Cu;
    // 7F34B46C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34B46Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34B470:
    ctx->pc = 0x7F34B470u;
    // 7F34B470: bl      0x7F114738
    {
            ctx->lr = 0x7F34B474u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F34B474:
    ctx->pc = 0x7F34B474u;
    ctx->downcount -= 40;
    // 7F34B474: extsh r4, r31
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F34B478:
    ctx->pc = 0x7F34B478u;
    // 7F34B478: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34B47C:
    ctx->pc = 0x7F34B47Cu;
    // 7F34B47C: rlwinm r6, r4, 0, 20, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000FFFu;
    }

label_7F34B480:
    ctx->pc = 0x7F34B480u;
    // 7F34B480: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F34B484:
    ctx->pc = 0x7F34B484u;
    // 7F34B484: rlwinm r4, r4, 1, 19, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00001000u;
    }

label_7F34B488:
    ctx->pc = 0x7F34B488u;
    // 7F34B488: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B48C:
    ctx->pc = 0x7F34B48Cu;
    // 7F34B48C: subf   r4, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F34B490:
    ctx->pc = 0x7F34B490u;
    // 7F34B490: addi    r7, r5, -25260
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-25260);

label_7F34B494:
    ctx->pc = 0x7F34B494u;
    // 7F34B494: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F34B498:
    ctx->pc = 0x7F34B498u;
    // 7F34B498: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B49C:
    ctx->pc = 0x7F34B49Cu;
    // 7F34B49C: addi    r6, r3, -25248
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-25248);

label_7F34B4A0:
    ctx->pc = 0x7F34B4A0u;
    // 7F34B4A0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B4A4:
    ctx->pc = 0x7F34B4A4u;
    // 7F34B4A4: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34B4A8:
    ctx->pc = 0x7F34B4A8u;
    // 7F34B4A8: addi    r5, r3, -25256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25256);

label_7F34B4AC:
    ctx->pc = 0x7F34B4ACu;
    // 7F34B4AC: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34B4ACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B4B0:
    ctx->pc = 0x7F34B4B0u;
    // 7F34B4B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B4B4:
    ctx->pc = 0x7F34B4B4u;
    // 7F34B4B4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B4B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B4B8:
    ctx->pc = 0x7F34B4B8u;
    // 7F34B4B8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B4BC:
    ctx->pc = 0x7F34B4BCu;
    // 7F34B4BC: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F34B4BCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34B4C0:
    ctx->pc = 0x7F34B4C0u;
    // 7F34B4C0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B4C0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F34B4C4:
    ctx->pc = 0x7F34B4C4u;
    // 7F34B4C4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34B4C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B4C8:
    ctx->pc = 0x7F34B4C8u;
    // 7F34B4C8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B4C8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F34B4CC:
    ctx->pc = 0x7F34B4CCu;
    // 7F34B4CC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34B4CCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34B4D0:
    ctx->pc = 0x7F34B4D0u;
    // 7F34B4D0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F34B4D4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F34B4D4:
    ctx->pc = 0x7F34B4D4u;
    ctx->downcount -= 16;
    // 7F34B4D4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B4D8:
    ctx->pc = 0x7F34B4D8u;
    // 7F34B4D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B4DC:
    ctx->pc = 0x7F34B4DCu;
    // 7F34B4DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B4E0:
    ctx->pc = 0x7F34B4E0u;
    // 7F34B4E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34B4E4:
    ctx->pc = 0x7F34B4E4u;
    // 7F34B4E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B4E8:
    ctx->pc = 0x7F34B4E8u;
    ctx->downcount -= 31;
    // 7F34B4E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B4EC:
    ctx->pc = 0x7F34B4ECu;
    // 7F34B4EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B4F0:
    ctx->pc = 0x7F34B4F0u;
    // 7F34B4F0: mulli   r7, r5, 192
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)192);

label_7F34B4F4:
    ctx->pc = 0x7F34B4F4u;
    // 7F34B4F4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F34B4F8:
    ctx->pc = 0x7F34B4F8u;
    // 7F34B4F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B4FC:
    ctx->pc = 0x7F34B4FCu;
    // 7F34B4FC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B500:
    ctx->pc = 0x7F34B500u;
    // 7F34B500: addi    r31, r7, 880
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(880);

label_7F34B504:
    ctx->pc = 0x7F34B504u;
    // 7F34B504: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B508:
    ctx->pc = 0x7F34B508u;
    // 7F34B508: addi    r7, r5, 6924
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(6924);

label_7F34B50C:
    ctx->pc = 0x7F34B50Cu;
    // 7F34B50C: add   r31, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F34B510:
    ctx->pc = 0x7F34B510u;
    // 7F34B510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B514:
    ctx->pc = 0x7F34B514u;
    // 7F34B514: lwz     r6, 788(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(788);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34B518:
    ctx->pc = 0x7F34B518u;
    // 7F34B518: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34B51C:
    ctx->pc = 0x7F34B51Cu;
    // 7F34B51C: addi    r8, r4, 6908
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(6908);

label_7F34B520:
    ctx->pc = 0x7F34B520u;
    // 7F34B520: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F34B524:
    ctx->pc = 0x7F34B524u;
    // 7F34B524: lwz     r5, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34B528:
    ctx->pc = 0x7F34B528u;
    // 7F34B528: addi    r4, r4, 16385
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16385);

label_7F34B52C:
    ctx->pc = 0x7F34B52Cu;
    // 7F34B52C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F34B530:
    ctx->pc = 0x7F34B530u;
    // 7F34B530: bl      0x7F014788
    {
            ctx->lr = 0x7F34B534u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F34B534:
    ctx->pc = 0x7F34B534u;
    ctx->downcount -= 12;
    // 7F34B534: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F34B538:
    ctx->pc = 0x7F34B538u;
    // 7F34B538: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34B53C:
    ctx->pc = 0x7F34B53Cu;
    // 7F34B53C: addi    r5, r3, 6904
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6904);

label_7F34B540:
    ctx->pc = 0x7F34B540u;
    // 7F34B540: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34B544:
    ctx->pc = 0x7F34B544u;
    // 7F34B544: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B548:
    ctx->pc = 0x7F34B548u;
    // 7F34B548: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F34B54C:
    ctx->pc = 0x7F34B54Cu;
    // 7F34B54C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B550:
    ctx->pc = 0x7F34B550u;
    // 7F34B550: addi    r4, r30, 3024
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3024);

label_7F34B554:
    ctx->pc = 0x7F34B554u;
    // 7F34B554: rlwinm r8, r0, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F34B558:
    ctx->pc = 0x7F34B558u;
    // 7F34B558: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34B55C:
    ctx->pc = 0x7F34B55Cu;
    // 7F34B55C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F34B560:
    ctx->pc = 0x7F34B560u;
    // 7F34B560: bl      0x7F014B78
    {
            ctx->lr = 0x7F34B564u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F34B564:
    ctx->pc = 0x7F34B564u;
    ctx->downcount -= 5;
    // 7F34B564: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F34B568:
    ctx->pc = 0x7F34B568u;
    // 7F34B568: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B56C:
    ctx->pc = 0x7F34B56Cu;
    // 7F34B56C: addi    r6, r4, 992
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(992);

label_7F34B570:
    ctx->pc = 0x7F34B570u;
    // 7F34B570: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34B574:
    ctx->pc = 0x7F34B574u;
    // 7F34B574: bl      0x7F014B60
    {
            ctx->lr = 0x7F34B578u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F34B578:
    ctx->pc = 0x7F34B578u;
    ctx->downcount -= 17;
    // 7F34B578: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B57C:
    ctx->pc = 0x7F34B57Cu;
    // 7F34B57C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B580:
    ctx->pc = 0x7F34B580u;
    // 7F34B580: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B584:
    ctx->pc = 0x7F34B584u;
    // 7F34B584: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B588:
    ctx->pc = 0x7F34B588u;
    // 7F34B588: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B58C:
    ctx->pc = 0x7F34B58Cu;
    // 7F34B58C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B590:
    ctx->pc = 0x7F34B590u;
    ctx->downcount -= 29;
    // 7F34B590: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B594:
    ctx->pc = 0x7F34B594u;
    // 7F34B594: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B598:
    ctx->pc = 0x7F34B598u;
    // 7F34B598: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F34B59C:
    ctx->pc = 0x7F34B59Cu;
    // 7F34B59C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F34B5A0:
    ctx->pc = 0x7F34B5A0u;
    // 7F34B5A0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B5A4:
    ctx->pc = 0x7F34B5A4u;
    // 7F34B5A4: addi    r8, r7, -5736
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-5736);

label_7F34B5A8:
    ctx->pc = 0x7F34B5A8u;
    // 7F34B5A8: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F34B5AC:
    ctx->pc = 0x7F34B5ACu;
    // 7F34B5AC: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B5B0:
    ctx->pc = 0x7F34B5B0u;
    // 7F34B5B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B5B4:
    ctx->pc = 0x7F34B5B4u;
    // 7F34B5B4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B5B8:
    ctx->pc = 0x7F34B5B8u;
    // 7F34B5B8: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F34B5BC:
    ctx->pc = 0x7F34B5BCu;
    // 7F34B5BC: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34B5C0:
    ctx->pc = 0x7F34B5C0u;
    // 7F34B5C0: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B5C4:
    ctx->pc = 0x7F34B5C4u;
    // 7F34B5C4: and   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F34B5C8:
    ctx->pc = 0x7F34B5C8u;
    // 7F34B5C8: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F34B5CC:
    ctx->pc = 0x7F34B5CCu;
    // 7F34B5CC: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F34B5D0:
    ctx->pc = 0x7F34B5D0u;
    // 7F34B5D0: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F34B5D4:
    ctx->pc = 0x7F34B5D4u;
    // 7F34B5D4: or.   r0, r3, r0
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

label_7F34B5D8:
    ctx->pc = 0x7F34B5D8u;
    // 7F34B5D8: bc    4, 2, 0x7F34B68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B68C;
        }
    }

label_7F34B5DC:
    ctx->pc = 0x7F34B5DCu;
    ctx->downcount -= 5;
    // 7F34B5DC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B5E0:
    ctx->pc = 0x7F34B5E0u;
    // 7F34B5E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B5E4:
    ctx->pc = 0x7F34B5E4u;
    // 7F34B5E4: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F34B5E8:
    ctx->pc = 0x7F34B5E8u;
    // 7F34B5E8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B5EC:
    ctx->pc = 0x7F34B5ECu;
    // 7F34B5EC: bl      0x800261D8
    {
            ctx->lr = 0x7F34B5F0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F34B5F0:
    ctx->pc = 0x7F34B5F0u;
    ctx->downcount -= 2;
    // 7F34B5F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34B5F4:
    ctx->pc = 0x7F34B5F4u;
    // 7F34B5F4: bl      0x7F3CC594
    {
            ctx->lr = 0x7F34B5F8u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F34B5F8:
    ctx->pc = 0x7F34B5F8u;
    ctx->downcount -= 4;
    // 7F34B5F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B5FC:
    ctx->pc = 0x7F34B5FCu;
    // 7F34B5FC: lfs     f0, -25236(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B5FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B600:
    ctx->pc = 0x7F34B600u;
    // 7F34B600: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34B600u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F34B604:
    ctx->pc = 0x7F34B604u;
    // 7F34B604: bc    12, 1, 0x7F34B68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B68C;
        }
    }

label_7F34B608:
    ctx->pc = 0x7F34B608u;
    ctx->downcount -= 10;
    // 7F34B608: mulli   r5, r29, 192
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)192);

label_7F34B60C:
    ctx->pc = 0x7F34B60Cu;
    // 7F34B60C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F34B610:
    ctx->pc = 0x7F34B610u;
    // 7F34B610: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B614:
    ctx->pc = 0x7F34B614u;
    // 7F34B614: addi    r29, r5, 880
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(880);

label_7F34B618:
    ctx->pc = 0x7F34B618u;
    // 7F34B618: lwz     r5, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34B61C:
    ctx->pc = 0x7F34B61Cu;
    // 7F34B61C: add   r29, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F34B620:
    ctx->pc = 0x7F34B620u;
    // 7F34B620: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B624:
    ctx->pc = 0x7F34B624u;
    // 7F34B624: bl      0x7F014944
    {
            ctx->lr = 0x7F34B628u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F34B628:
    ctx->pc = 0x7F34B628u;
    ctx->downcount -= 18;
    // 7F34B628: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B62C:
    ctx->pc = 0x7F34B62Cu;
    // 7F34B62C: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B62Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B630:
    ctx->pc = 0x7F34B630u;
    // 7F34B630: addi    r4, r3, -25232
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25232);

label_7F34B634:
    ctx->pc = 0x7F34B634u;
    // 7F34B634: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B638:
    ctx->pc = 0x7F34B638u;
    // 7F34B638: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B638u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B63C:
    ctx->pc = 0x7F34B63Cu;
    // 7F34B63C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B63Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F34B640:
    ctx->pc = 0x7F34B640u;
    // 7F34B640: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B644:
    ctx->pc = 0x7F34B644u;
    // 7F34B644: lfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B644u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B648:
    ctx->pc = 0x7F34B648u;
    // 7F34B648: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B64C:
    ctx->pc = 0x7F34B64Cu;
    // 7F34B64C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B64Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F34B650:
    ctx->pc = 0x7F34B650u;
    // 7F34B650: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B650u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B654:
    ctx->pc = 0x7F34B654u;
    // 7F34B654: lfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B654u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B658:
    ctx->pc = 0x7F34B658u;
    // 7F34B658: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B65C:
    ctx->pc = 0x7F34B65Cu;
    // 7F34B65C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B65Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F34B660:
    ctx->pc = 0x7F34B660u;
    // 7F34B660: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B660u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B664:
    ctx->pc = 0x7F34B664u;
    // 7F34B664: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B668:
    ctx->pc = 0x7F34B668u;
    // 7F34B668: rlwinm. r0, r0, 0, 31, 31
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

label_7F34B66C:
    ctx->pc = 0x7F34B66Cu;
    // 7F34B66C: bc    12, 2, 0x7F34B68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34B68C;
        }
    }

label_7F34B670:
    ctx->pc = 0x7F34B670u;
    ctx->downcount -= 5;
    // 7F34B670: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B674:
    ctx->pc = 0x7F34B674u;
    // 7F34B674: li      r3, 1755
    ctx->gpr[3] = (u32)(s32)(1755);

label_7F34B678:
    ctx->pc = 0x7F34B678u;
    // 7F34B678: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34B67C:
    ctx->pc = 0x7F34B67Cu;
    // 7F34B67C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F34B680:
    ctx->pc = 0x7F34B680u;
    // 7F34B680: bl      0x7F0513A0
    {
            ctx->lr = 0x7F34B684u;
            ctx->pc = 0x7F0513A0u;
            return;
    }

label_7F34B684:
    ctx->pc = 0x7F34B684u;
    ctx->downcount -= 2;
    // 7F34B684: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34B688:
    ctx->pc = 0x7F34B688u;
    // 7F34B688: bl      0x7F0148A0
    {
            ctx->lr = 0x7F34B68Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F34B68C:
    ctx->pc = 0x7F34B68Cu;
    ctx->downcount -= 16;
    // 7F34B68C: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B690:
    ctx->pc = 0x7F34B690u;
    // 7F34B690: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B694:
    ctx->pc = 0x7F34B694u;
    // 7F34B694: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B698:
    ctx->pc = 0x7F34B698u;
    // 7F34B698: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34B69C:
    ctx->pc = 0x7F34B69Cu;
    // 7F34B69C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B6A0:
    ctx->pc = 0x7F34B6A0u;
    ctx->downcount -= 2;
    // 7F34B6A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B6A4:
    ctx->pc = 0x7F34B6A4u;
    // 7F34B6A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B6A8:
    ctx->pc = 0x7F34B6A8u;
    ctx->downcount -= 29;
    // 7F34B6A8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B6AC:
    ctx->pc = 0x7F34B6ACu;
    // 7F34B6AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B6B0:
    ctx->pc = 0x7F34B6B0u;
    // 7F34B6B0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B6B4:
    ctx->pc = 0x7F34B6B4u;
    // 7F34B6B4: mulli   r0, r6, 40
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)40);

label_7F34B6B8:
    ctx->pc = 0x7F34B6B8u;
    // 7F34B6B8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B6BC:
    ctx->pc = 0x7F34B6BCu;
    // 7F34B6BC: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34B6C0:
    ctx->pc = 0x7F34B6C0u;
    // 7F34B6C0: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F34B6C4:
    ctx->pc = 0x7F34B6C4u;
    // 7F34B6C4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B6C8:
    ctx->pc = 0x7F34B6C8u;
    // 7F34B6C8: lwz     r3, 76(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B6CC:
    ctx->pc = 0x7F34B6CCu;
    // 7F34B6CC: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B6D0:
    ctx->pc = 0x7F34B6D0u;
    // 7F34B6D0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B6D4:
    ctx->pc = 0x7F34B6D4u;
    // 7F34B6D4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B6D8:
    ctx->pc = 0x7F34B6D8u;
    // 7F34B6D8: lwz     r3, 84(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B6DC:
    ctx->pc = 0x7F34B6DCu;
    // 7F34B6DC: lwz     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B6E0:
    ctx->pc = 0x7F34B6E0u;
    // 7F34B6E0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B6E4:
    ctx->pc = 0x7F34B6E4u;
    // 7F34B6E4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B6E8:
    ctx->pc = 0x7F34B6E8u;
    // 7F34B6E8: bc    4, 2, 0x7F34B6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B6FC;
        }
    }

label_7F34B6EC:
    ctx->pc = 0x7F34B6ECu;
    ctx->downcount -= 4;
    // 7F34B6EC: li      r3, 1731
    ctx->gpr[3] = (u32)(s32)(1731);

label_7F34B6F0:
    ctx->pc = 0x7F34B6F0u;
    // 7F34B6F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34B6F4:
    ctx->pc = 0x7F34B6F4u;
    // 7F34B6F4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F34B6F8:
    ctx->pc = 0x7F34B6F8u;
    // 7F34B6F8: bl      0x7F0513A0
    {
            ctx->lr = 0x7F34B6FCu;
            ctx->pc = 0x7F0513A0u;
            return;
    }

label_7F34B6FC:
    ctx->pc = 0x7F34B6FCu;
    ctx->downcount -= 2;
    // 7F34B6FC: cmpwi   r30, 96
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34B700:
    ctx->pc = 0x7F34B700u;
    // 7F34B700: bc    4, 2, 0x7F34B734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B734;
        }
    }

label_7F34B704:
    ctx->pc = 0x7F34B704u;
    ctx->downcount -= 12;
    // 7F34B704: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34B708:
    ctx->pc = 0x7F34B708u;
    // 7F34B708: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F34B70C:
    ctx->pc = 0x7F34B70Cu;
    // 7F34B70C: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F34B710:
    ctx->pc = 0x7F34B710u;
    // 7F34B710: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B714:
    ctx->pc = 0x7F34B714u;
    // 7F34B714: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B718:
    ctx->pc = 0x7F34B718u;
    // 7F34B718: stw     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34B71C:
    ctx->pc = 0x7F34B71Cu;
    // 7F34B71C: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B720:
    ctx->pc = 0x7F34B720u;
    // 7F34B720: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B724:
    ctx->pc = 0x7F34B724u;
    // 7F34B724: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B728:
    ctx->pc = 0x7F34B728u;
    // 7F34B728: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34B72C:
    ctx->pc = 0x7F34B72Cu;
    // 7F34B72C: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B730:
    ctx->pc = 0x7F34B730u;
    // 7F34B730: b       0x7F34B7E8
    {
            goto label_7F34B7E8;
    }

label_7F34B734:
    ctx->pc = 0x7F34B734u;
    ctx->downcount -= 2;
    // 7F34B734: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F34B738:
    ctx->pc = 0x7F34B738u;
    // 7F34B738: bl      0x7F02A56C
    {
            ctx->lr = 0x7F34B73Cu;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F34B73C:
    ctx->pc = 0x7F34B73Cu;
    ctx->downcount -= 11;
    // 7F34B73C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F34B740:
    ctx->pc = 0x7F34B740u;
    // 7F34B740: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34B744:
    ctx->pc = 0x7F34B744u;
    // 7F34B744: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B748:
    ctx->pc = 0x7F34B748u;
    // 7F34B748: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34B74C:
    ctx->pc = 0x7F34B74Cu;
    // 7F34B74C: lfd     f1, -25248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B74Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B750:
    ctx->pc = 0x7F34B750u;
    // 7F34B750: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F34B754:
    ctx->pc = 0x7F34B754u;
    // 7F34B754: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B758:
    ctx->pc = 0x7F34B758u;
    // 7F34B758: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B75C:
    ctx->pc = 0x7F34B75Cu;
    // 7F34B75C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B75Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F34B760:
    ctx->pc = 0x7F34B760u;
    // 7F34B760: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B760u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B764:
    ctx->pc = 0x7F34B764u;
    // 7F34B764: bl      0x7F02A56C
    {
            ctx->lr = 0x7F34B768u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F34B768:
    ctx->pc = 0x7F34B768u;
    ctx->downcount -= 11;
    // 7F34B768: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F34B76C:
    ctx->pc = 0x7F34B76Cu;
    // 7F34B76C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34B770:
    ctx->pc = 0x7F34B770u;
    // 7F34B770: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B774:
    ctx->pc = 0x7F34B774u;
    // 7F34B774: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34B778:
    ctx->pc = 0x7F34B778u;
    // 7F34B778: lfd     f1, -25248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B778u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B77C:
    ctx->pc = 0x7F34B77Cu;
    // 7F34B77C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F34B780:
    ctx->pc = 0x7F34B780u;
    // 7F34B780: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B784:
    ctx->pc = 0x7F34B784u;
    // 7F34B784: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B788:
    ctx->pc = 0x7F34B788u;
    // 7F34B788: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34B788u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F34B78C:
    ctx->pc = 0x7F34B78Cu;
    // 7F34B78C: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B78Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B790:
    ctx->pc = 0x7F34B790u;
    // 7F34B790: bl      0x7F02A56C
    {
            ctx->lr = 0x7F34B794u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F34B794:
    ctx->pc = 0x7F34B794u;
    ctx->downcount -= 20;
    // 7F34B794: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F34B798:
    ctx->pc = 0x7F34B798u;
    // 7F34B798: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34B79C:
    ctx->pc = 0x7F34B79Cu;
    // 7F34B79C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34B7A0:
    ctx->pc = 0x7F34B7A0u;
    // 7F34B7A0: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B7A4:
    ctx->pc = 0x7F34B7A4u;
    // 7F34B7A4: addi    r5, r4, -25248
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25248);

label_7F34B7A8:
    ctx->pc = 0x7F34B7A8u;
    // 7F34B7A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B7AC:
    ctx->pc = 0x7F34B7ACu;
    // 7F34B7AC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B7B0:
    ctx->pc = 0x7F34B7B0u;
    // 7F34B7B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B7B4:
    ctx->pc = 0x7F34B7B4u;
    // 7F34B7B4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34B7B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B7B8:
    ctx->pc = 0x7F34B7B8u;
    // 7F34B7B8: addi    r7, r4, -2944
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34B7BC:
    ctx->pc = 0x7F34B7BCu;
    // 7F34B7BC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34B7BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34B7C0:
    ctx->pc = 0x7F34B7C0u;
    // 7F34B7C0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B7C4:
    ctx->pc = 0x7F34B7C4u;
    // 7F34B7C4: lfs     f1, -25264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B7C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B7C8:
    ctx->pc = 0x7F34B7C8u;
    // 7F34B7C8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B7CC:
    ctx->pc = 0x7F34B7CCu;
    // 7F34B7CC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34B7CCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F34B7D0:
    ctx->pc = 0x7F34B7D0u;
    // 7F34B7D0: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B7D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B7D4:
    ctx->pc = 0x7F34B7D4u;
    // 7F34B7D4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B7D8:
    ctx->pc = 0x7F34B7D8u;
    // 7F34B7D8: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B7DC:
    ctx->pc = 0x7F34B7DCu;
    // 7F34B7DC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F34B7E0:
    ctx->pc = 0x7F34B7E0u;
    // 7F34B7E0: bl      0x7F34B310
    {
            ctx->lr = 0x7F34B7E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B310u;
                return;
            }
            goto label_7F34B310;
    }

label_7F34B7E4:
    ctx->pc = 0x7F34B7E4u;
    ctx->downcount -= 1;
    // 7F34B7E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B7E8:
    ctx->pc = 0x7F34B7E8u;
    ctx->downcount -= 16;
    // 7F34B7E8: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B7EC:
    ctx->pc = 0x7F34B7ECu;
    // 7F34B7EC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B7F0:
    ctx->pc = 0x7F34B7F0u;
    // 7F34B7F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B7F4:
    ctx->pc = 0x7F34B7F4u;
    // 7F34B7F4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34B7F8:
    ctx->pc = 0x7F34B7F8u;
    // 7F34B7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B7FC:
    ctx->pc = 0x7F34B7FCu;
    ctx->downcount -= 17;
    // 7F34B7FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B800:
    ctx->pc = 0x7F34B800u;
    // 7F34B800: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B804:
    ctx->pc = 0x7F34B804u;
    // 7F34B804: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B808:
    ctx->pc = 0x7F34B808u;
    // 7F34B808: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B80C:
    ctx->pc = 0x7F34B80Cu;
    // 7F34B80C: or.   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F34B810:
    ctx->pc = 0x7F34B810u;
    // 7F34B810: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B814:
    ctx->pc = 0x7F34B814u;
    // 7F34B814: bc    4, 2, 0x7F34B830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B830;
        }
    }

label_7F34B818:
    ctx->pc = 0x7F34B818u;
    ctx->downcount -= 3;
    // 7F34B818: li      r3, 1738
    ctx->gpr[3] = (u32)(s32)(1738);

label_7F34B81C:
    ctx->pc = 0x7F34B81Cu;
    // 7F34B81C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34B820:
    ctx->pc = 0x7F34B820u;
    // 7F34B820: bl      0x7F0117B8
    {
            ctx->lr = 0x7F34B824u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F34B824:
    ctx->pc = 0x7F34B824u;
    ctx->downcount -= 3;
    // 7F34B824: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B828:
    ctx->pc = 0x7F34B828u;
    // 7F34B828: lfs     f0, -25228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B828u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B82C:
    ctx->pc = 0x7F34B82Cu;
    // 7F34B82C: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F34B82Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B830:
    ctx->pc = 0x7F34B830u;
    ctx->downcount -= 2;
    // 7F34B830: cmpwi   r31, 64
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34B834:
    ctx->pc = 0x7F34B834u;
    // 7F34B834: bc    4, 2, 0x7F34B868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B868;
        }
    }

label_7F34B838:
    ctx->pc = 0x7F34B838u;
    ctx->downcount -= 12;
    // 7F34B838: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F34B83C:
    ctx->pc = 0x7F34B83Cu;
    // 7F34B83C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F34B840:
    ctx->pc = 0x7F34B840u;
    // 7F34B840: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F34B844:
    ctx->pc = 0x7F34B844u;
    // 7F34B844: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B848:
    ctx->pc = 0x7F34B848u;
    // 7F34B848: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B84C:
    ctx->pc = 0x7F34B84Cu;
    // 7F34B84C: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34B850:
    ctx->pc = 0x7F34B850u;
    // 7F34B850: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B854:
    ctx->pc = 0x7F34B854u;
    // 7F34B854: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34B858:
    ctx->pc = 0x7F34B858u;
    // 7F34B858: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B85C:
    ctx->pc = 0x7F34B85Cu;
    // 7F34B85C: stw     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34B860:
    ctx->pc = 0x7F34B860u;
    // 7F34B860: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B864:
    ctx->pc = 0x7F34B864u;
    // 7F34B864: b       0x7F34B898
    {
            goto label_7F34B898;
    }

label_7F34B868:
    ctx->pc = 0x7F34B868u;
    ctx->downcount -= 11;
    // 7F34B868: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B86C:
    ctx->pc = 0x7F34B86Cu;
    // 7F34B86C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B870:
    ctx->pc = 0x7F34B870u;
    // 7F34B870: addi    r5, r4, -2944
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34B874:
    ctx->pc = 0x7F34B874u;
    // 7F34B874: lwz     r7, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34B878:
    ctx->pc = 0x7F34B878u;
    // 7F34B878: addi    r4, r3, -25264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25264);

label_7F34B87C:
    ctx->pc = 0x7F34B87Cu;
    // 7F34B87C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B880:
    ctx->pc = 0x7F34B880u;
    // 7F34B880: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B880u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B884:
    ctx->pc = 0x7F34B884u;
    // 7F34B884: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B888:
    ctx->pc = 0x7F34B888u;
    // 7F34B888: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34B88C:
    ctx->pc = 0x7F34B88Cu;
    // 7F34B88C: addi    r4, r7, 4
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(4);

label_7F34B890:
    ctx->pc = 0x7F34B890u;
    // 7F34B890: bl      0x7F34B310
    {
            ctx->lr = 0x7F34B894u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B310u;
                return;
            }
            goto label_7F34B310;
    }

label_7F34B894:
    ctx->pc = 0x7F34B894u;
    ctx->downcount -= 1;
    // 7F34B894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B898:
    ctx->pc = 0x7F34B898u;
    ctx->downcount -= 16;
    // 7F34B898: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34B89C:
    ctx->pc = 0x7F34B89Cu;
    // 7F34B89C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B8A0:
    ctx->pc = 0x7F34B8A0u;
    // 7F34B8A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B8A4:
    ctx->pc = 0x7F34B8A4u;
    // 7F34B8A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B8A8:
    ctx->pc = 0x7F34B8A8u;
    // 7F34B8A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B8AC:
    ctx->pc = 0x7F34B8ACu;
    ctx->downcount -= 7;
    // 7F34B8AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B8B0:
    ctx->pc = 0x7F34B8B0u;
    // 7F34B8B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B8B4:
    ctx->pc = 0x7F34B8B4u;
    // 7F34B8B4: cmpwi   r5, 0
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

label_7F34B8B8:
    ctx->pc = 0x7F34B8B8u;
    // 7F34B8B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B8BC:
    ctx->pc = 0x7F34B8BCu;
    // 7F34B8BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34B8C0:
    ctx->pc = 0x7F34B8C0u;
    // 7F34B8C0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F34B8C4:
    ctx->pc = 0x7F34B8C4u;
    // 7F34B8C4: bc    4, 2, 0x7F34B8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B8D4;
        }
    }

label_7F34B8C8:
    ctx->pc = 0x7F34B8C8u;
    ctx->downcount -= 3;
    // 7F34B8C8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34B8CC:
    ctx->pc = 0x7F34B8CCu;
    // 7F34B8CC: lfs     f0, -25224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B8CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34B8D0:
    ctx->pc = 0x7F34B8D0u;
    // 7F34B8D0: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34B8D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34B8D4:
    ctx->pc = 0x7F34B8D4u;
    ctx->downcount -= 5;
    // 7F34B8D4: lha     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F34B8D8:
    ctx->pc = 0x7F34B8D8u;
    // 7F34B8D8: cmpwi   r5, 64
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34B8DC:
    ctx->pc = 0x7F34B8DCu;
    // 7F34B8DC: addi    r0, r4, 256
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(256);

label_7F34B8E0:
    ctx->pc = 0x7F34B8E0u;
    // 7F34B8E0: sth     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F34B8E4:
    ctx->pc = 0x7F34B8E4u;
    // 7F34B8E4: bc    4, 2, 0x7F34B95C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B95C;
        }
    }

label_7F34B8E8:
    ctx->pc = 0x7F34B8E8u;
    ctx->downcount -= 9;
    // 7F34B8E8: mulli   r4, r6, 40
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)40);

label_7F34B8EC:
    ctx->pc = 0x7F34B8ECu;
    // 7F34B8EC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F34B8F0:
    ctx->pc = 0x7F34B8F0u;
    // 7F34B8F0: addi    r5, r31, -4
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F34B8F4:
    ctx->pc = 0x7F34B8F4u;
    // 7F34B8F4: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F34B8F8:
    ctx->pc = 0x7F34B8F8u;
    // 7F34B8F8: addi    r4, r3, 72
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(72);

label_7F34B8FC:
    ctx->pc = 0x7F34B8FCu;
    // 7F34B8FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F34B900:
    loop_7F34B900(ctx);
    if (ctx->pc == 0x7F34B914u) goto label_7F34B914;
    return;
label_7F34B904:
    ctx->pc = 0x7F34B904u;
    // 7F34B904: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F34B908:
    ctx->pc = 0x7F34B908u;
    // 7F34B908: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34B90C:
    ctx->pc = 0x7F34B90Cu;
    // 7F34B90C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F34B910:
    // 7F34B910: bc    16, 0, 0x7F34B900
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B900u;
                return;
            }
            goto label_7F34B900;
        }
    }

label_7F34B914:
    ctx->pc = 0x7F34B914u;
    ctx->downcount -= 5;
    // 7F34B914: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B918:
    ctx->pc = 0x7F34B918u;
    // 7F34B918: li      r3, 1731
    ctx->gpr[3] = (u32)(s32)(1731);

label_7F34B91C:
    ctx->pc = 0x7F34B91Cu;
    // 7F34B91C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F34B920:
    ctx->pc = 0x7F34B920u;
    // 7F34B920: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F34B924:
    ctx->pc = 0x7F34B924u;
    // 7F34B924: bl      0x7F0513A0
    {
            ctx->lr = 0x7F34B928u;
            ctx->pc = 0x7F0513A0u;
            return;
    }

label_7F34B928:
    ctx->pc = 0x7F34B928u;
    ctx->downcount -= 11;
    // 7F34B928: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B92C:
    ctx->pc = 0x7F34B92Cu;
    // 7F34B92C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B930:
    ctx->pc = 0x7F34B930u;
    // 7F34B930: addi    r5, r4, -2944
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34B934:
    ctx->pc = 0x7F34B934u;
    // 7F34B934: lwz     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34B938:
    ctx->pc = 0x7F34B938u;
    // 7F34B938: addi    r4, r3, -25264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25264);

label_7F34B93C:
    ctx->pc = 0x7F34B93Cu;
    // 7F34B93C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B940:
    ctx->pc = 0x7F34B940u;
    // 7F34B940: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B940u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B944:
    ctx->pc = 0x7F34B944u;
    // 7F34B944: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B948:
    ctx->pc = 0x7F34B948u;
    // 7F34B948: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B94C:
    ctx->pc = 0x7F34B94Cu;
    // 7F34B94C: addi    r4, r7, 4
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(4);

label_7F34B950:
    ctx->pc = 0x7F34B950u;
    // 7F34B950: bl      0x7F34B310
    {
            ctx->lr = 0x7F34B954u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B310u;
                return;
            }
            goto label_7F34B310;
    }

label_7F34B954:
    ctx->pc = 0x7F34B954u;
    ctx->downcount -= 2;
    // 7F34B954: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F34B958:
    ctx->pc = 0x7F34B958u;
    // 7F34B958: b       0x7F34B98C
    {
            goto label_7F34B98C;
    }

label_7F34B95C:
    ctx->pc = 0x7F34B95Cu;
    ctx->downcount -= 11;
    // 7F34B95C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B960:
    ctx->pc = 0x7F34B960u;
    // 7F34B960: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B964:
    ctx->pc = 0x7F34B964u;
    // 7F34B964: addi    r5, r4, -2944
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34B968:
    ctx->pc = 0x7F34B968u;
    // 7F34B968: lwz     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34B96C:
    ctx->pc = 0x7F34B96Cu;
    // 7F34B96C: addi    r4, r3, -25264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25264);

label_7F34B970:
    ctx->pc = 0x7F34B970u;
    // 7F34B970: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34B974:
    ctx->pc = 0x7F34B974u;
    // 7F34B974: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34B974u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B978:
    ctx->pc = 0x7F34B978u;
    // 7F34B978: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B97C:
    ctx->pc = 0x7F34B97Cu;
    // 7F34B97C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34B980:
    ctx->pc = 0x7F34B980u;
    // 7F34B980: addi    r4, r7, 4
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(4);

label_7F34B984:
    ctx->pc = 0x7F34B984u;
    // 7F34B984: bl      0x7F34B310
    {
            ctx->lr = 0x7F34B988u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B310u;
                return;
            }
            goto label_7F34B310;
    }

label_7F34B988:
    ctx->pc = 0x7F34B988u;
    ctx->downcount -= 1;
    // 7F34B988: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34B98C:
    ctx->pc = 0x7F34B98Cu;
    ctx->downcount -= 6;
    // 7F34B98C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B990:
    ctx->pc = 0x7F34B990u;
    // 7F34B990: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34B994:
    ctx->pc = 0x7F34B994u;
    // 7F34B994: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34B998:
    ctx->pc = 0x7F34B998u;
    // 7F34B998: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34B99C:
    ctx->pc = 0x7F34B99Cu;
    // 7F34B99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34B9A0:
    ctx->pc = 0x7F34B9A0u;
    ctx->downcount -= 19;
    // 7F34B9A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34B9A4:
    ctx->pc = 0x7F34B9A4u;
    // 7F34B9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34B9A8:
    ctx->pc = 0x7F34B9A8u;
    // 7F34B9A8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34B9AC:
    ctx->pc = 0x7F34B9ACu;
    // 7F34B9AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34B9B0:
    ctx->pc = 0x7F34B9B0u;
    // 7F34B9B0: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34B9B4:
    ctx->pc = 0x7F34B9B4u;
    // 7F34B9B4: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34B9B8:
    ctx->pc = 0x7F34B9B8u;
    // 7F34B9B8: lwz     r0, -2736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B9BC:
    ctx->pc = 0x7F34B9BCu;
    // 7F34B9BC: cmpwi   r0, 0
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

label_7F34B9C0:
    ctx->pc = 0x7F34B9C0u;
    // 7F34B9C0: bc    4, 0, 0x7F34B9CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34B9CC;
        }
    }

label_7F34B9C4:
    ctx->pc = 0x7F34B9C4u;
    ctx->downcount -= 1;
    // 7F34B9C4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34B9C8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34B9C8:
    ctx->pc = 0x7F34B9C8u;
    ctx->downcount -= 1;
    // 7F34B9C8: b       0x7F34BB48
    {
            goto label_7F34BB48;
    }

label_7F34B9CC:
    ctx->pc = 0x7F34B9CCu;
    ctx->downcount -= 3;
    // 7F34B9CC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F34B9D0:
    ctx->pc = 0x7F34B9D0u;
    // 7F34B9D0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F34B9D4:
    ctx->pc = 0x7F34B9D4u;
    // 7F34B9D4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F34B9D8:
    ctx->pc = 0x7F34B9D8u;
    ctx->downcount -= 7;
    // 7F34B9D8: lwz     r0, 872(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(872);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34B9DC:
    // 7F34B9DC: add   r31, r25, r24
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F34B9E0:
    ctx->pc = 0x7F34B9E0u;
    // 7F34B9E0: lwz     r28, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F34B9E4:
    // 7F34B9E4: cmpwi   r0, 0
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

label_7F34B9E8:
    ctx->pc = 0x7F34B9E8u;
    // 7F34B9E8: lwz     r27, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F34B9EC:
    ctx->pc = 0x7F34B9ECu;
    // 7F34B9EC: lwz     r26, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F34B9F0:
    // 7F34B9F0: bc    4, 2, 0x7F34BA08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA08;
        }
    }

label_7F34B9F4:
    ctx->downcount -= 5;
    // 7F34B9F4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34B9F8:
    ctx->pc = 0x7F34B9F8u;
    // 7F34B9F8: lfs     f1, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F34B9F8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34B9FC:
    ctx->pc = 0x7F34B9FCu;
    // 7F34B9FC: lfs     f0, -25220(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34B9FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BA00:
    ctx->pc = 0x7F34BA00u;
    // 7F34BA00: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BA00u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F34BA04:
    // 7F34BA04: bc    12, 0, 0x7F34BA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA30;
        }
    }

label_7F34BA08:
    ctx->downcount -= 2;
    // 7F34BA08: cmpwi   r0, 2
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

label_7F34BA0C:
    // 7F34BA0C: bc    4, 2, 0x7F34BA24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA24;
        }
    }

label_7F34BA10:
    ctx->downcount -= 5;
    // 7F34BA10: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BA14:
    ctx->pc = 0x7F34BA14u;
    // 7F34BA14: lfs     f1, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F34BA14u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BA18:
    ctx->pc = 0x7F34BA18u;
    // 7F34BA18: lfs     f0, -25216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34BA18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BA1C:
    ctx->pc = 0x7F34BA1Cu;
    // 7F34BA1C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BA1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F34BA20:
    // 7F34BA20: bc    12, 1, 0x7F34BA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA30;
        }
    }

label_7F34BA24:
    ctx->pc = 0x7F34BA24u;
    ctx->downcount -= 3;
    // 7F34BA24: lwz     r0, 800(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BA28:
    // 7F34BA28: cmpwi   r0, 0
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

label_7F34BA2C:
    // 7F34BA2C: bc    12, 2, 0x7F34BA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA38;
        }
    }

label_7F34BA30:
    ctx->downcount -= 2;
    // 7F34BA30: li      r27, 3
    ctx->gpr[27] = (u32)(s32)(3);

label_7F34BA34:
    // 7F34BA34: b       0x7F34BB18
    {
            goto label_7F34BB18;
    }

label_7F34BA38:
    ctx->pc = 0x7F34BA38u;
    ctx->downcount -= 5;
    // 7F34BA38: lwz     r3, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BA3C:
    // 7F34BA3C: cmpwi   r27, 1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BA40:
    // 7F34BA40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F34BA44:
    ctx->pc = 0x7F34BA44u;
    // 7F34BA44: stw     r0, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BA48:
    // 7F34BA48: bc    12, 2, 0x7F34BA8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA8C;
        }
    }

label_7F34BA4C:
    ctx->downcount -= 1;
    // 7F34BA4C: bc    4, 0, 0x7F34BA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA5C;
        }
    }

label_7F34BA50:
    ctx->downcount -= 2;
    // 7F34BA50: cmpwi   r27, 0
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

label_7F34BA54:
    // 7F34BA54: bc    4, 0, 0x7F34BA68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BA68;
        }
    }

label_7F34BA58:
    ctx->downcount -= 1;
    // 7F34BA58: b       0x7F34BAD4
    {
            goto label_7F34BAD4;
    }

label_7F34BA5C:
    ctx->downcount -= 2;
    // 7F34BA5C: cmpwi   r27, 3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BA60:
    // 7F34BA60: bc    4, 0, 0x7F34BAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BAD4;
        }
    }

label_7F34BA64:
    ctx->downcount -= 1;
    // 7F34BA64: b       0x7F34BAB0
    {
            goto label_7F34BAB0;
    }

label_7F34BA68:
    ctx->downcount -= 8;
    // 7F34BA68: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34BA6C:
    // 7F34BA6C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34BA70:
    // 7F34BA70: addi    r0, r4, -18776
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18776);

label_7F34BA74:
    // 7F34BA74: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F34BA78:
    // 7F34BA78: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34BA7C:
    // 7F34BA7C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34BA80:
    // 7F34BA80: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34BA84:
    // 7F34BA84: bl      0x7F34B590
    {
            ctx->lr = 0x7F34BA88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B590u;
                return;
            }
            goto label_7F34B590;
    }

label_7F34BA88:
    ctx->downcount -= 1;
    // 7F34BA88: b       0x7F34BAE0
    {
            goto label_7F34BAE0;
    }

label_7F34BA8C:
    ctx->downcount -= 8;
    // 7F34BA8C: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34BA90:
    // 7F34BA90: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34BA94:
    // 7F34BA94: addi    r0, r4, -18436
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18436);

label_7F34BA98:
    // 7F34BA98: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F34BA9C:
    // 7F34BA9C: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34BAA0:
    // 7F34BAA0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34BAA4:
    // 7F34BAA4: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34BAA8:
    // 7F34BAA8: bl      0x7F34B590
    {
            ctx->lr = 0x7F34BAACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B590u;
                return;
            }
            goto label_7F34B590;
    }

label_7F34BAAC:
    ctx->downcount -= 1;
    // 7F34BAAC: b       0x7F34BAE0
    {
            goto label_7F34BAE0;
    }

label_7F34BAB0:
    ctx->downcount -= 8;
    // 7F34BAB0: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34BAB4:
    // 7F34BAB4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34BAB8:
    // 7F34BAB8: addi    r0, r4, -18260
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18260);

label_7F34BABC:
    // 7F34BABC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F34BAC0:
    // 7F34BAC0: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34BAC4:
    // 7F34BAC4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34BAC8:
    // 7F34BAC8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34BACC:
    // 7F34BACC: bl      0x7F34B590
    {
            ctx->lr = 0x7F34BAD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B590u;
                return;
            }
            goto label_7F34B590;
    }

label_7F34BAD0:
    ctx->downcount -= 1;
    // 7F34BAD0: b       0x7F34BAE0
    {
            goto label_7F34BAE0;
    }

label_7F34BAD4:
    ctx->downcount -= 3;
    // 7F34BAD4: lis     r3, 32565
    ctx->gpr[3] = ((u32)(s32)(32565) << 16);

label_7F34BAD8:
    // 7F34BAD8: addi    r0, r3, -18784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-18784);

label_7F34BADC:
    // 7F34BADC: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F34BAE0:
    ctx->downcount -= 8;
    // 7F34BAE0: or   r12, r23, r23
    {
        ctx->gpr[12] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F34BAE4:
    // 7F34BAE4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34BAE8:
    // 7F34BAE8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F34BAEC:
    // 7F34BAEC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34BAF0:
    // 7F34BAF0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F34BAF4:
    ctx->pc = 0x7F34BAF4u;
    // 7F34BAF4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F34BAF8:
    ctx->pc = 0x7F34BAF8u;
    // 7F34BAF8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F34BAFCu;
            ctx->pc = target;
            return;
        }
    }

label_7F34BAFC:
    ctx->downcount -= 2;
    // 7F34BAFC: cmpwi   r3, 0
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

label_7F34BB00:
    // 7F34BB00: bc    12, 2, 0x7F34BB18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BB18;
        }
    }

label_7F34BB04:
    ctx->pc = 0x7F34BB04u;
    ctx->downcount -= 5;
    // 7F34BB04: lwz     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BB08:
    // 7F34BB08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34BB0C:
    // 7F34BB0C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F34BB10:
    ctx->pc = 0x7F34BB10u;
    // 7F34BB10: stw     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BB14:
    ctx->pc = 0x7F34BB14u;
    // 7F34BB14: stw     r0, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BB18:
    ctx->downcount -= 3;
    // 7F34BB18: add   r29, r29, r27
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F34BB1C:
    // 7F34BB1C: cmpwi   r29, 33
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(33);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BB20:
    // 7F34BB20: bc    4, 2, 0x7F34BB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BB2C;
        }
    }

label_7F34BB24:
    ctx->downcount -= 2;
    // 7F34BB24: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F34BB28:
    // 7F34BB28: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34BB2Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34BB2C:
    ctx->downcount -= 4;
    // 7F34BB2C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F34BB30:
    // 7F34BB30: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F34BB34:
    // 7F34BB34: cmpwi   r30, 11
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BB38:
    // 7F34BB38: bc    12, 0, 0x7F34B9D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B9D8u;
                return;
            }
            goto label_7F34B9D8;
        }
    }

label_7F34BB3C:
    ctx->pc = 0x7F34BB3Cu;
    ctx->downcount -= 3;
    // 7F34BB3C: lwz     r3, 868(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(868);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BB40:
    ctx->pc = 0x7F34BB40u;
    // 7F34BB40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F34BB44:
    ctx->pc = 0x7F34BB44u;
    // 7F34BB44: stw     r0, 868(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BB48:
    ctx->pc = 0x7F34BB48u;
    ctx->downcount -= 16;
    // 7F34BB48: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34BB4C:
    ctx->pc = 0x7F34BB4Cu;
    // 7F34BB4C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BB50:
    ctx->pc = 0x7F34BB50u;
    // 7F34BB50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BB54:
    ctx->pc = 0x7F34BB54u;
    // 7F34BB54: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F34BB58:
    ctx->pc = 0x7F34BB58u;
    // 7F34BB58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BB5C:
    ctx->pc = 0x7F34BB5Cu;
    ctx->downcount -= 19;
    // 7F34BB5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BB60:
    ctx->pc = 0x7F34BB60u;
    // 7F34BB60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BB64:
    ctx->pc = 0x7F34BB64u;
    // 7F34BB64: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34BB68:
    ctx->pc = 0x7F34BB68u;
    // 7F34BB68: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BB6C:
    ctx->pc = 0x7F34BB6Cu;
    // 7F34BB6C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34BB70:
    ctx->pc = 0x7F34BB70u;
    // 7F34BB70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34BB74:
    ctx->pc = 0x7F34BB74u;
    // 7F34BB74: lwz     r0, -2944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BB78:
    ctx->pc = 0x7F34BB78u;
    // 7F34BB78: cmplwi  r0, 0x0000
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

label_7F34BB7C:
    ctx->pc = 0x7F34BB7Cu;
    // 7F34BB7C: bc    12, 2, 0x7F34BC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BC08;
        }
    }

label_7F34BB80:
    ctx->pc = 0x7F34BB80u;
    ctx->downcount -= 3;
    // 7F34BB80: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F34BB84:
    ctx->pc = 0x7F34BB84u;
    // 7F34BB84: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F34BB88:
    ctx->pc = 0x7F34BB88u;
    // 7F34BB88: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F34BB8C:
    ctx->downcount -= 5;
    // 7F34BB8C: addi    r0, r29, 32
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(32);

label_7F34BB90:
    ctx->pc = 0x7F34BB90u;
    // 7F34BB90: lwzx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34BB94:
    ctx->pc = 0x7F34BB94u;
    // 7F34BB94: lwz     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BB98:
    // 7F34BB98: cmplwi  r0, 0x0000
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

label_7F34BB9C:
    // 7F34BB9C: bc    12, 2, 0x7F34BBF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BBF4;
        }
    }

label_7F34BBA0:
    ctx->downcount -= 7;
    // 7F34BBA0: addi    r3, r30, 76
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(76);

label_7F34BBA4:
    // 7F34BBA4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F34BBA8:
    // 7F34BBA8: addi    r6, r5, -4
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F34BBAC:
    // 7F34BBAC: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F34BBB0:
    ctx->pc = 0x7F34BBB0u;
    // 7F34BBB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F34BBB4:
    // 7F34BBB4: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F34BBB8:
    loop_7F34BBB8(ctx);
    if (ctx->pc == 0x7F34BBCCu) goto label_7F34BBCC;
    return;
label_7F34BBBC:
    ctx->pc = 0x7F34BBBCu;
    // 7F34BBBC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F34BBC0:
    ctx->pc = 0x7F34BBC0u;
    // 7F34BBC0: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BBC4:
    ctx->pc = 0x7F34BBC4u;
    // 7F34BBC4: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F34BBC8:
    // 7F34BBC8: bc    16, 0, 0x7F34BBB8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BBB8u;
                return;
            }
            goto label_7F34BBB8;
        }
    }

label_7F34BBCC:
    ctx->downcount -= 10;
    // 7F34BBCC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34BBD0:
    // 7F34BBD0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BBD4:
    // 7F34BBD4: addi    r6, r4, -2944
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34BBD8:
    ctx->pc = 0x7F34BBD8u;
    // 7F34BBD8: lwz     r7, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F34BBDC:
    // 7F34BBDC: addi    r4, r3, -25264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25264);

label_7F34BBE0:
    ctx->pc = 0x7F34BBE0u;
    // 7F34BBE0: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BBE4:
    ctx->pc = 0x7F34BBE4u;
    // 7F34BBE4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34BBE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BBE8:
    // 7F34BBE8: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F34BBEC:
    // 7F34BBEC: addi    r4, r7, 4
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(4);

label_7F34BBF0:
    // 7F34BBF0: bl      0x7F34B310
    {
            ctx->lr = 0x7F34BBF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B310u;
                return;
            }
            goto label_7F34B310;
    }

label_7F34BBF4:
    ctx->downcount -= 5;
    // 7F34BBF4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F34BBF8:
    // 7F34BBF8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F34BBFC:
    // 7F34BBFC: cmpwi   r28, 11
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BC00:
    // 7F34BC00: addi    r30, r30, 40
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(40);

label_7F34BC04:
    // 7F34BC04: bc    12, 0, 0x7F34BB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BB8Cu;
                return;
            }
            goto label_7F34BB8C;
        }
    }

label_7F34BC08:
    ctx->pc = 0x7F34BC08u;
    ctx->downcount -= 19;
    // 7F34BC08: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F34BC0C:
    ctx->pc = 0x7F34BC0Cu;
    // 7F34BC0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34BC10:
    ctx->pc = 0x7F34BC10u;
    // 7F34BC10: stw     r0, -2736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BC14:
    ctx->pc = 0x7F34BC14u;
    // 7F34BC14: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34BC18:
    ctx->pc = 0x7F34BC18u;
    // 7F34BC18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BC1C:
    ctx->pc = 0x7F34BC1Cu;
    // 7F34BC1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BC20:
    ctx->pc = 0x7F34BC20u;
    // 7F34BC20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34BC24:
    ctx->pc = 0x7F34BC24u;
    // 7F34BC24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BC28:
    ctx->pc = 0x7F34BC28u;
    ctx->downcount -= 20;
    // 7F34BC28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BC2C:
    ctx->pc = 0x7F34BC2Cu;
    // 7F34BC2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BC30:
    ctx->pc = 0x7F34BC30u;
    // 7F34BC30: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34BC34:
    ctx->pc = 0x7F34BC34u;
    // 7F34BC34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BC38:
    ctx->pc = 0x7F34BC38u;
    // 7F34BC38: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34BC3C:
    ctx->pc = 0x7F34BC3Cu;
    // 7F34BC3C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34BC40:
    ctx->pc = 0x7F34BC40u;
    // 7F34BC40: addi    r3, r4, -2944
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-2944);

label_7F34BC44:
    ctx->pc = 0x7F34BC44u;
    // 7F34BC44: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BC48:
    ctx->pc = 0x7F34BC48u;
    // 7F34BC48: cmplwi  r3, 0x0000
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

label_7F34BC4C:
    ctx->pc = 0x7F34BC4Cu;
    // 7F34BC4C: bc    4, 2, 0x7F34BC58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BC58;
        }
    }

label_7F34BC50:
    ctx->pc = 0x7F34BC50u;
    ctx->downcount -= 2;
    // 7F34BC50: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F34BC54:
    ctx->pc = 0x7F34BC54u;
    // 7F34BC54: b       0x7F34BCFC
    {
            goto label_7F34BCFC;
    }

label_7F34BC58:
    ctx->pc = 0x7F34BC58u;
    ctx->downcount -= 4;
    // 7F34BC58: lwz     r28, 4392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4392);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F34BC5C:
    ctx->pc = 0x7F34BC5Cu;
    // 7F34BC5C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F34BC60:
    ctx->pc = 0x7F34BC60u;
    // 7F34BC60: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F34BC64:
    ctx->pc = 0x7F34BC64u;
    // 7F34BC64: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F34BC68:
    ctx->downcount -= 2;
    // 7F34BC68: cmplwi  r28, 0x0000
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

label_7F34BC6C:
    // 7F34BC6C: bc    4, 2, 0x7F34BC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BC78;
        }
    }

label_7F34BC70:
    ctx->downcount -= 2;
    // 7F34BC70: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F34BC74:
    // 7F34BC74: b       0x7F34BCFC
    {
            goto label_7F34BCFC;
    }

label_7F34BC78:
    ctx->downcount -= 9;
    // 7F34BC78: add   r6, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F34BC7C:
    // 7F34BC7C: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F34BC80:
    // 7F34BC80: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F34BC84:
    ctx->pc = 0x7F34BC84u;
    // 7F34BC84: stw     r28, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F34BC88:
    // 7F34BC88: add   r5, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F34BC8C:
    // 7F34BC8C: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F34BC90:
    ctx->pc = 0x7F34BC90u;
    // 7F34BC90: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F34BC94:
    // 7F34BC94: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F34BC98:
    loop_7F34BC98(ctx);
    if (ctx->pc == 0x7F34BCACu) goto label_7F34BCAC;
    return;
label_7F34BC9C:
    ctx->pc = 0x7F34BC9Cu;
    // 7F34BC9C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F34BCA0:
    ctx->pc = 0x7F34BCA0u;
    // 7F34BCA0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BCA4:
    ctx->pc = 0x7F34BCA4u;
    // 7F34BCA4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F34BCA8:
    // 7F34BCA8: bc    16, 0, 0x7F34BC98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BC98u;
                return;
            }
            goto label_7F34BC98;
        }
    }

label_7F34BCAC:
    ctx->downcount -= 7;
    // 7F34BCAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34BCB0:
    // 7F34BCB0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F34BCB4:
    ctx->pc = 0x7F34BCB4u;
    // 7F34BCB4: stw     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BCB8:
    // 7F34BCB8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F34BCBC:
    // 7F34BCBC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F34BCC0:
    ctx->pc = 0x7F34BCC0u;
    // 7F34BCC0: stw     r0, 560(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BCC4:
    // 7F34BCC4: bl      0x7F34B4E8
    {
            ctx->lr = 0x7F34BCC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34B4E8u;
                return;
            }
            goto label_7F34B4E8;
    }

label_7F34BCC8:
    ctx->downcount -= 6;
    // 7F34BCC8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F34BCCC:
    // 7F34BCCC: addi    r31, r31, 40
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(40);

label_7F34BCD0:
    // 7F34BCD0: cmpwi   r29, 11
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BCD4:
    // 7F34BCD4: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F34BCD8:
    // 7F34BCD8: addi    r28, r28, 816
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(816);

label_7F34BCDC:
    // 7F34BCDC: bc    12, 0, 0x7F34BC68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BC68u;
                return;
            }
            goto label_7F34BC68;
        }
    }

label_7F34BCE0:
    ctx->pc = 0x7F34BCE0u;
    ctx->downcount -= 7;
    // 7F34BCE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34BCE4:
    ctx->pc = 0x7F34BCE4u;
    // 7F34BCE4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F34BCE8:
    ctx->pc = 0x7F34BCE8u;
    // 7F34BCE8: stw     r0, 868(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BCEC:
    ctx->pc = 0x7F34BCECu;
    // 7F34BCEC: addi    r4, r3, -2736
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2736);

label_7F34BCF0:
    ctx->pc = 0x7F34BCF0u;
    // 7F34BCF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F34BCF4:
    ctx->pc = 0x7F34BCF4u;
    // 7F34BCF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34BCF8:
    ctx->pc = 0x7F34BCF8u;
    // 7F34BCF8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BCFC:
    ctx->pc = 0x7F34BCFCu;
    ctx->downcount -= 16;
    // 7F34BCFC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34BD00:
    ctx->pc = 0x7F34BD00u;
    // 7F34BD00: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BD04:
    ctx->pc = 0x7F34BD04u;
    // 7F34BD04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BD08:
    ctx->pc = 0x7F34BD08u;
    // 7F34BD08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F34BD0C:
    ctx->pc = 0x7F34BD0Cu;
    // 7F34BD0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BD10:
    ctx->pc = 0x7F34BD10u;
    ctx->downcount -= 19;
    // 7F34BD10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BD14:
    ctx->pc = 0x7F34BD14u;
    // 7F34BD14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BD18:
    ctx->pc = 0x7F34BD18u;
    // 7F34BD18: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F34BD1C:
    ctx->pc = 0x7F34BD1Cu;
    // 7F34BD1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BD20:
    ctx->pc = 0x7F34BD20u;
    // 7F34BD20: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34BD24:
    ctx->pc = 0x7F34BD24u;
    // 7F34BD24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34BD28:
    ctx->pc = 0x7F34BD28u;
    // 7F34BD28: lwz     r0, -2736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BD2C:
    ctx->pc = 0x7F34BD2Cu;
    // 7F34BD2C: cmpwi   r0, 0
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

label_7F34BD30:
    ctx->pc = 0x7F34BD30u;
    // 7F34BD30: bc    4, 1, 0x7F34BD3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BD3C;
        }
    }

label_7F34BD34:
    ctx->pc = 0x7F34BD34u;
    ctx->downcount -= 2;
    // 7F34BD34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34BD38:
    ctx->pc = 0x7F34BD38u;
    // 7F34BD38: b       0x7F34BD94
    {
            goto label_7F34BD94;
    }

label_7F34BD3C:
    ctx->pc = 0x7F34BD3Cu;
    ctx->downcount -= 5;
    // 7F34BD3C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F34BD40:
    ctx->pc = 0x7F34BD40u;
    // 7F34BD40: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F34BD44:
    ctx->pc = 0x7F34BD44u;
    // 7F34BD44: li      r5, 3056
    ctx->gpr[5] = (u32)(s32)(3056);

label_7F34BD48:
    ctx->pc = 0x7F34BD48u;
    // 7F34BD48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F34BD4C:
    ctx->pc = 0x7F34BD4Cu;
    // 7F34BD4C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F34BD50u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F34BD50:
    ctx->pc = 0x7F34BD50u;
    ctx->downcount -= 2;
    // 7F34BD50: or.   r31, r3, r3
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

label_7F34BD54:
    ctx->pc = 0x7F34BD54u;
    // 7F34BD54: bc    12, 2, 0x7F34BD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BD90;
        }
    }

label_7F34BD58:
    ctx->pc = 0x7F34BD58u;
    ctx->downcount -= 5;
    // 7F34BD58: lis     r4, 32565
    ctx->gpr[4] = ((u32)(s32)(32565) << 16);

label_7F34BD5C:
    ctx->pc = 0x7F34BD5Cu;
    // 7F34BD5C: lis     r5, 32565
    ctx->gpr[5] = ((u32)(s32)(32565) << 16);

label_7F34BD60:
    ctx->pc = 0x7F34BD60u;
    // 7F34BD60: addi    r4, r4, -18016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18016);

label_7F34BD64:
    ctx->pc = 0x7F34BD64u;
    // 7F34BD64: addi    r5, r5, -17572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17572);

label_7F34BD68:
    ctx->pc = 0x7F34BD68u;
    // 7F34BD68: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F34BD6Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F34BD6C:
    ctx->pc = 0x7F34BD6Cu;
    ctx->downcount -= 2;
    // 7F34BD6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34BD70:
    ctx->pc = 0x7F34BD70u;
    // 7F34BD70: bl      0x7F34BC28
    {
            ctx->lr = 0x7F34BD74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F34BC28u;
                return;
            }
            goto label_7F34BC28;
    }

label_7F34BD74:
    ctx->pc = 0x7F34BD74u;
    ctx->downcount -= 2;
    // 7F34BD74: cmpwi   r3, 0
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

label_7F34BD78:
    ctx->pc = 0x7F34BD78u;
    // 7F34BD78: bc    4, 0, 0x7F34BD8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34BD8C;
        }
    }

label_7F34BD7C:
    ctx->pc = 0x7F34BD7Cu;
    ctx->downcount -= 2;
    // 7F34BD7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34BD80:
    ctx->pc = 0x7F34BD80u;
    // 7F34BD80: bl      0x7F3C8210
    {
            ctx->lr = 0x7F34BD84u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F34BD84:
    ctx->pc = 0x7F34BD84u;
    ctx->downcount -= 2;
    // 7F34BD84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F34BD88:
    ctx->pc = 0x7F34BD88u;
    // 7F34BD88: b       0x7F34BD94
    {
            goto label_7F34BD94;
    }

label_7F34BD8C:
    ctx->pc = 0x7F34BD8Cu;
    ctx->downcount -= 1;
    // 7F34BD8C: stw     r30, 872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F34BD90:
    ctx->pc = 0x7F34BD90u;
    ctx->downcount -= 1;
    // 7F34BD90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F34BD94:
    ctx->pc = 0x7F34BD94u;
    ctx->downcount -= 16;
    // 7F34BD94: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F34BD98:
    ctx->pc = 0x7F34BD98u;
    // 7F34BD98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BD9C:
    ctx->pc = 0x7F34BD9Cu;
    // 7F34BD9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BDA0:
    ctx->pc = 0x7F34BDA0u;
    // 7F34BDA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34BDA4:
    ctx->pc = 0x7F34BDA4u;
    // 7F34BDA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BDA8:
    ctx->pc = 0x7F34BDA8u;
    ctx->downcount -= 68;
    // 7F34BDA8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BDAC:
    ctx->pc = 0x7F34BDACu;
    // 7F34BDAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BDB0:
    ctx->pc = 0x7F34BDB0u;
    // 7F34BDB0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34BDB4:
    ctx->pc = 0x7F34BDB4u;
    // 7F34BDB4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BDB8:
    ctx->pc = 0x7F34BDB8u;
    // 7F34BDB8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34BDBC:
    ctx->pc = 0x7F34BDBCu;
    // 7F34BDBC: addi    r7, r4, -24692
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-24692);

label_7F34BDC0:
    ctx->pc = 0x7F34BDC0u;
    // 7F34BDC0: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F34BDC4:
    ctx->pc = 0x7F34BDC4u;
    // 7F34BDC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34BDC8:
    ctx->pc = 0x7F34BDC8u;
    // 7F34BDC8: lwz     r5, 716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(716);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34BDCC:
    ctx->pc = 0x7F34BDCCu;
    // 7F34BDCC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BDD0:
    ctx->pc = 0x7F34BDD0u;
    // 7F34BDD0: addi    r8, r3, -24696
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-24696);

label_7F34BDD4:
    ctx->pc = 0x7F34BDD4u;
    // 7F34BDD4: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BDD8:
    ctx->pc = 0x7F34BDD8u;
    // 7F34BDD8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F34BDDC:
    ctx->pc = 0x7F34BDDCu;
    // 7F34BDDC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BDE0:
    ctx->pc = 0x7F34BDE0u;
    // 7F34BDE0: stw     r5, 716(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(716);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34BDE4:
    ctx->pc = 0x7F34BDE4u;
    // 7F34BDE4: addi    r6, r3, -24688
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-24688);

label_7F34BDE8:
    ctx->pc = 0x7F34BDE8u;
    // 7F34BDE8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BDEC:
    ctx->pc = 0x7F34BDECu;
    // 7F34BDEC: lfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F34BDECu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BDF0:
    ctx->pc = 0x7F34BDF0u;
    // 7F34BDF0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34BDF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BDF4:
    ctx->pc = 0x7F34BDF4u;
    // 7F34BDF4: addi    r5, r3, -24684
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-24684);

label_7F34BDF8:
    ctx->pc = 0x7F34BDF8u;
    // 7F34BDF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BDFC:
    ctx->pc = 0x7F34BDFCu;
    // 7F34BDFC: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34BDFCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F34BE00:
    ctx->pc = 0x7F34BE00u;
    // 7F34BE00: fsubs   f6, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BE00u)) return;
    ppc_fsubs(ctx, 6, 1, 0);

label_7F34BE04:
    ctx->pc = 0x7F34BE04u;
    // 7F34BE04: addi    r4, r3, -25200
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25200);

label_7F34BE08:
    ctx->pc = 0x7F34BE08u;
    // 7F34BE08: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE08u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BE0C:
    ctx->pc = 0x7F34BE0Cu;
    // 7F34BE0C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BE10:
    ctx->pc = 0x7F34BE10u;
    // 7F34BE10: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F34BE14:
    ctx->pc = 0x7F34BE14u;
    // 7F34BE14: stfs     f6, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F34BE18:
    ctx->pc = 0x7F34BE18u;
    // 7F34BE18: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34BE1C:
    ctx->pc = 0x7F34BE1Cu;
    // 7F34BE1C: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BE20:
    ctx->pc = 0x7F34BE20u;
    // 7F34BE20: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BE24:
    ctx->pc = 0x7F34BE24u;
    // 7F34BE24: fadds   f5, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BE24u)) return;
    ppc_fadds(ctx, 5, 1, 0);

label_7F34BE28:
    ctx->pc = 0x7F34BE28u;
    // 7F34BE28: lfs     f0, -25208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BE2C:
    ctx->pc = 0x7F34BE2Cu;
    // 7F34BE2C: stfs     f5, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F34BE30:
    ctx->pc = 0x7F34BE30u;
    // 7F34BE30: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BE34:
    ctx->pc = 0x7F34BE34u;
    // 7F34BE34: fadds   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34BE34u)) return;
    ppc_fadds(ctx, 2, 2, 1);

label_7F34BE38:
    ctx->pc = 0x7F34BE38u;
    // 7F34BE38: stfs     f4, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F34BE3C:
    ctx->pc = 0x7F34BE3Cu;
    // 7F34BE3C: stfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34BE40:
    ctx->pc = 0x7F34BE40u;
    // 7F34BE40: lfs     f1, 696(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BE44:
    ctx->pc = 0x7F34BE44u;
    // 7F34BE44: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34BE44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F34BE48:
    ctx->pc = 0x7F34BE48u;
    // 7F34BE48: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34BE4C:
    ctx->pc = 0x7F34BE4Cu;
    // 7F34BE4C: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34BE50:
    ctx->pc = 0x7F34BE50u;
    // 7F34BE50: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F34BE54:
    ctx->pc = 0x7F34BE54u;
    // 7F34BE54: stfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F34BE58:
    ctx->pc = 0x7F34BE58u;
    // 7F34BE58: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34BE5C:
    ctx->pc = 0x7F34BE5Cu;
    // 7F34BE5C: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BE60:
    ctx->pc = 0x7F34BE60u;
    // 7F34BE60: rlwinm r4, r3, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_7F34BE64:
    ctx->pc = 0x7F34BE64u;
    // 7F34BE64: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34BE68:
    ctx->pc = 0x7F34BE68u;
    // 7F34BE68: rlwinm r3, r0, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F34BE6C:
    ctx->pc = 0x7F34BE6Cu;
    // 7F34BE6C: addi    r0, r3, -936
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-936);

label_7F34BE70:
    ctx->pc = 0x7F34BE70u;
    // 7F34BE70: addi    r4, r4, -468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-468);

label_7F34BE74:
    ctx->pc = 0x7F34BE74u;
    // 7F34BE74: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F34BE78:
    ctx->pc = 0x7F34BE78u;
    // 7F34BE78: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F34BE7C:
    ctx->pc = 0x7F34BE7Cu;
    // 7F34BE7C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F34BE80:
    ctx->pc = 0x7F34BE80u;
    // 7F34BE80: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BE84:
    ctx->pc = 0x7F34BE84u;
    // 7F34BE84: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BE88:
    ctx->pc = 0x7F34BE88u;
    // 7F34BE88: lfd     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34BE8C:
    ctx->pc = 0x7F34BE8Cu;
    // 7F34BE8C: lfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34BE90:
    ctx->pc = 0x7F34BE90u;
    // 7F34BE90: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F34BE90u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F34BE94:
    ctx->pc = 0x7F34BE94u;
    // 7F34BE94: stfs     f4, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F34BE98:
    ctx->pc = 0x7F34BE98u;
    // 7F34BE98: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F34BE98u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F34BE9C:
    ctx->pc = 0x7F34BE9Cu;
    // 7F34BE9C: stfs     f5, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BE9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F34BEA0:
    ctx->pc = 0x7F34BEA0u;
    // 7F34BEA0: fadds   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34BEA0u)) return;
    ppc_fadds(ctx, 2, 6, 2);

label_7F34BEA4:
    ctx->pc = 0x7F34BEA4u;
    // 7F34BEA4: fadds   f0, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34BEA4u)) return;
    ppc_fadds(ctx, 0, 6, 1);

label_7F34BEA8:
    ctx->pc = 0x7F34BEA8u;
    // 7F34BEA8: stfs     f4, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F34BEAC:
    ctx->pc = 0x7F34BEACu;
    // 7F34BEAC: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34BEB0:
    ctx->pc = 0x7F34BEB0u;
    // 7F34BEB0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34BEB4:
    ctx->pc = 0x7F34BEB4u;
    // 7F34BEB4: bl      0x7F34BF58
    {
            ctx->lr = 0x7F34BEB8u;
            goto label_7F34BF58;
    }

label_7F34BEB8:
    ctx->pc = 0x7F34BEB8u;
    ctx->downcount -= 21;
    // 7F34BEB8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BEBC:
    ctx->pc = 0x7F34BEBCu;
    // 7F34BEBC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34BEC0:
    ctx->pc = 0x7F34BEC0u;
    // 7F34BEC0: addi    r5, r3, -24672
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-24672);

label_7F34BEC4:
    ctx->pc = 0x7F34BEC4u;
    // 7F34BEC4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BEC8:
    ctx->pc = 0x7F34BEC8u;
    // 7F34BEC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BECC:
    ctx->pc = 0x7F34BECCu;
    // 7F34BECC: addi    r6, r4, -24676
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-24676);

label_7F34BED0:
    ctx->pc = 0x7F34BED0u;
    // 7F34BED0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34BED4:
    ctx->pc = 0x7F34BED4u;
    // 7F34BED4: addi    r5, r3, -24680
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-24680);

label_7F34BED8:
    ctx->pc = 0x7F34BED8u;
    // 7F34BED8: fmuls   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34BED8u)) return;
    ppc_fmuls(ctx, 2, 0, 1);

label_7F34BEDC:
    ctx->pc = 0x7F34BEDCu;
    // 7F34BEDC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEDCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BEE0:
    ctx->pc = 0x7F34BEE0u;
    // 7F34BEE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BEE4:
    ctx->pc = 0x7F34BEE4u;
    // 7F34BEE4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BEE8:
    ctx->pc = 0x7F34BEE8u;
    // 7F34BEE8: fmadds f2, f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BEE8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F34BEEC:
    ctx->pc = 0x7F34BEECu;
    // 7F34BEEC: lfs     f1, -25208(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F34BEF0:
    ctx->pc = 0x7F34BEF0u;
    // 7F34BEF0: lfs     f0, -24684(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BEF4:
    ctx->pc = 0x7F34BEF4u;
    // 7F34BEF4: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F34BEF8:
    ctx->pc = 0x7F34BEF8u;
    // 7F34BEF8: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F34BEFC:
    ctx->pc = 0x7F34BEFCu;
    // 7F34BEFC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34BF00:
    ctx->pc = 0x7F34BF00u;
    // 7F34BF00: lwz     r0, 716(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BF04:
    ctx->pc = 0x7F34BF04u;
    // 7F34BF04: cmpwi   r0, 240
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BF08:
    ctx->pc = 0x7F34BF08u;
    // 7F34BF08: bc    12, 0, 0x7F34BF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34BF44;
        }
    }

label_7F34BF0C:
    ctx->pc = 0x7F34BF0Cu;
    ctx->downcount -= 4;
    // 7F34BF0C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F34BF10:
    ctx->pc = 0x7F34BF10u;
    // 7F34BF10: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34BF14:
    ctx->pc = 0x7F34BF14u;
    // 7F34BF14: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F34BF18:
    ctx->pc = 0x7F34BF18u;
    // 7F34BF18: bl      0x7F1CE9D4
    {
            ctx->lr = 0x7F34BF1Cu;
            ctx->pc = 0x7F1CE9D4u;
            return;
    }

label_7F34BF1C:
    ctx->pc = 0x7F34BF1Cu;
    ctx->downcount -= 4;
    // 7F34BF1C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F34BF20:
    ctx->pc = 0x7F34BF20u;
    // 7F34BF20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34BF24:
    ctx->pc = 0x7F34BF24u;
    // 7F34BF24: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F34BF28:
    ctx->pc = 0x7F34BF28u;
    // 7F34BF28: bl      0x7F1CE9D4
    {
            ctx->lr = 0x7F34BF2Cu;
            ctx->pc = 0x7F1CE9D4u;
            return;
    }

label_7F34BF2C:
    ctx->pc = 0x7F34BF2Cu;
    ctx->downcount -= 4;
    // 7F34BF2C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F34BF30:
    ctx->pc = 0x7F34BF30u;
    // 7F34BF30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F34BF34:
    ctx->pc = 0x7F34BF34u;
    // 7F34BF34: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F34BF38:
    ctx->pc = 0x7F34BF38u;
    // 7F34BF38: bl      0x7F1CE9D4
    {
            ctx->lr = 0x7F34BF3Cu;
            ctx->pc = 0x7F1CE9D4u;
            return;
    }

label_7F34BF3C:
    ctx->pc = 0x7F34BF3Cu;
    ctx->downcount -= 2;
    // 7F34BF3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F34BF40:
    ctx->pc = 0x7F34BF40u;
    // 7F34BF40: stw     r0, 716(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(716);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BF44:
    ctx->pc = 0x7F34BF44u;
    ctx->downcount -= 6;
    // 7F34BF44: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BF48:
    ctx->pc = 0x7F34BF48u;
    // 7F34BF48: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F34BF4C:
    ctx->pc = 0x7F34BF4Cu;
    // 7F34BF4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BF50:
    ctx->pc = 0x7F34BF50u;
    // 7F34BF50: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F34BF54:
    ctx->pc = 0x7F34BF54u;
    // 7F34BF54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BF58:
    ctx->pc = 0x7F34BF58u;
    ctx->downcount -= 4;
    // 7F34BF58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BF5C:
    ctx->pc = 0x7F34BF5Cu;
    // 7F34BF5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BF60:
    ctx->pc = 0x7F34BF60u;
    // 7F34BF60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BF64:
    ctx->pc = 0x7F34BF64u;
    // 7F34BF64: bl      0x7F34BFA0
    {
            ctx->lr = 0x7F34BF68u;
            goto label_7F34BFA0;
    }

label_7F34BF68:
    ctx->pc = 0x7F34BF68u;
    ctx->downcount -= 31;
    // 7F34BF68: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34BF6C:
    ctx->pc = 0x7F34BF6Cu;
    // 7F34BF6C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BF70:
    ctx->pc = 0x7F34BF70u;
    // 7F34BF70: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34BF74:
    ctx->pc = 0x7F34BF74u;
    // 7F34BF74: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34BF78:
    ctx->pc = 0x7F34BF78u;
    // 7F34BF78: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BF7C:
    ctx->pc = 0x7F34BF7Cu;
    // 7F34BF7C: lfd     f2, -24664(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34BF7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24664);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34BF80:
    ctx->pc = 0x7F34BF80u;
    // 7F34BF80: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34BF80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34BF84:
    ctx->pc = 0x7F34BF84u;
    // 7F34BF84: lfs     f0, -24668(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F34BF84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34BF88:
    ctx->pc = 0x7F34BF88u;
    // 7F34BF88: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34BF88u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F34BF8C:
    ctx->pc = 0x7F34BF8Cu;
    // 7F34BF8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34BF90:
    ctx->pc = 0x7F34BF90u;
    // 7F34BF90: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F34BF90u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F34BF94:
    ctx->pc = 0x7F34BF94u;
    // 7F34BF94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F34BF98:
    ctx->pc = 0x7F34BF98u;
    // 7F34BF98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F34BF9C:
    ctx->pc = 0x7F34BF9Cu;
    // 7F34BF9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BFA0:
    ctx->pc = 0x7F34BFA0u;
    ctx->downcount -= 13;
    // 7F34BFA0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F34BFA4:
    ctx->pc = 0x7F34BFA4u;
    // 7F34BFA4: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F34BFA8:
    ctx->pc = 0x7F34BFA8u;
    // 7F34BFA8: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F34BFAC:
    ctx->pc = 0x7F34BFACu;
    // 7F34BFAC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34BFB0:
    ctx->pc = 0x7F34BFB0u;
    // 7F34BFB0: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F34BFB4:
    ctx->pc = 0x7F34BFB4u;
    // 7F34BFB4: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F34BFB8:
    ctx->pc = 0x7F34BFB8u;
    // 7F34BFB8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F34BFBC:
    ctx->pc = 0x7F34BFBCu;
    // 7F34BFBC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34BFC0:
    ctx->pc = 0x7F34BFC0u;
    // 7F34BFC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3480EC;
        }
    }

label_7F34BFC4:
    ctx->pc = 0x7F34BFC4u;
    ctx->downcount -= 77;
    // 7F34BFC4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F34BFC8:
    ctx->pc = 0x7F34BFC8u;
    // 7F34BFC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F34BFCC:
    ctx->pc = 0x7F34BFCCu;
    // 7F34BFCC: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BFD0:
    ctx->pc = 0x7F34BFD0u;
    // 7F34BFD0: stmw     r27, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F34BFD4:
    ctx->pc = 0x7F34BFD4u;
    // 7F34BFD4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F34BFD8:
    ctx->pc = 0x7F34BFD8u;
    // 7F34BFD8: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_7F34BFDC:
    ctx->pc = 0x7F34BFDCu;
    // 7F34BFDC: lwz     r4, 716(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(716);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34BFE0:
    ctx->pc = 0x7F34BFE0u;
    // 7F34BFE0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F34BFE4:
    ctx->pc = 0x7F34BFE4u;
    // 7F34BFE4: stw     r0, 716(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(716);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34BFE8:
    ctx->pc = 0x7F34BFE8u;
    // 7F34BFE8: lwz     r6, 716(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(716);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F34BFEC:
    ctx->pc = 0x7F34BFECu;
    // 7F34BFEC: divw   r0, r6, r3
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F34BFF0:
    ctx->pc = 0x7F34BFF0u;
    // 7F34BFF0: rlwinm r4, r6, 30, 0, 1
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0xC0000000u;
    }

label_7F34BFF4:
    ctx->pc = 0x7F34BFF4u;
    // 7F34BFF4: rlwinm r5, r6, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0x00000001u;
    }

label_7F34BFF8:
    ctx->pc = 0x7F34BFF8u;
    // 7F34BFF8: cmpwi   r6, 120
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F34BFFC:
    ctx->pc = 0x7F34BFFCu;
    // 7F34BFFC: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F34C000:
    ctx->pc = 0x7F34C000u;
    // 7F34C000: rlwinm r4, r4, 2, 0, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFFu;
    }

label_7F34C004:
    ctx->pc = 0x7F34C004u;
    // 7F34C004: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F34C008:
    ctx->pc = 0x7F34C008u;
    // 7F34C008: add   r3, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F34C00C:
    ctx->pc = 0x7F34C00Cu;
    // 7F34C00C: cntlzw r3, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_7F34C010:
    ctx->pc = 0x7F34C010u;
    // 7F34C010: rlwinm r31, r3, 27, 5, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x07FFFFFFu;
    }

label_7F34C014:
    ctx->pc = 0x7F34C014u;
    // 7F34C014: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F34C018:
    ctx->pc = 0x7F34C018u;
    // 7F34C018: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F34C01C:
    ctx->pc = 0x7F34C01Cu;
    // 7F34C01C: rlwinm r30, r0, 27, 5, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F34C020:
    ctx->pc = 0x7F34C020u;
    // 7F34C020: bc    4, 0, 0x7F34C0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F34C0E0;
        }
    }

label_7F34C024:
    ctx->pc = 0x7F34C024u;
    ctx->downcount -= 11;
    // 7F34C024: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F34C028:
    ctx->pc = 0x7F34C028u;
    // 7F34C028: addi    r6, r3, -24656
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-24656);

label_7F34C02C:
    ctx->pc = 0x7F34C02Cu;
    // 7F34C02C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F34C030:
    ctx->pc = 0x7F34C030u;
    // 7F34C030: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F34C034:
    ctx->pc = 0x7F34C034u;
    // 7F34C034: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F34C038:
    ctx->pc = 0x7F34C038u;
    // 7F34C038: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F34C03C:
    ctx->pc = 0x7F34C03Cu;
    // 7F34C03C: stw     r5, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F34C040:
    ctx->pc = 0x7F34C040u;
    // 7F34C040: stw     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F34C044:
    ctx->pc = 0x7F34C044u;
    // 7F34C044: stw     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F34C048:
    ctx->pc = 0x7F34C048u;
    // 7F34C048: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34C04C:
    ctx->pc = 0x7F34C04Cu;
    // 7F34C04C: bl      0x800147F8
    {
            ctx->lr = 0x7F34C050u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F34C050:
    ctx->pc = 0x7F34C050u;
    ctx->downcount -= 59;
    // 7F34C050: li      r6, 2300
    ctx->gpr[6] = (u32)(s32)(2300);

label_7F34C054:
    ctx->pc = 0x7F34C054u;
    // 7F34C054: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34C058:
    ctx->pc = 0x7F34C058u;
    // 7F34C058: divw   r5, r3, r6
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F34C05C:
    ctx->pc = 0x7F34C05Cu;
    // 7F34C05C: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34C060:
    ctx->pc = 0x7F34C060u;
    // 7F34C060: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34C064:
    ctx->pc = 0x7F34C064u;
    // 7F34C064: lfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34C068:
    ctx->pc = 0x7F34C068u;
    // 7F34C068: lfd     f2, -25200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34C068u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34C06C:
    ctx->pc = 0x7F34C06Cu;
    // 7F34C06C: mullw   r0, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F34C070:
    ctx->pc = 0x7F34C070u;
    // 7F34C070: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F34C074:
    ctx->pc = 0x7F34C074u;
    // 7F34C074: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F34C078:
    ctx->pc = 0x7F34C078u;
    // 7F34C078: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34C07C:
    ctx->pc = 0x7F34C07Cu;
    // 7F34C07C: lfd     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C07Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34C080:
    ctx->pc = 0x7F34C080u;
    // 7F34C080: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34C080u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F34C084:
    ctx->pc = 0x7F34C084u;
    // 7F34C084: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34C084u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F34C088:
    ctx->pc = 0x7F34C088u;
    // 7F34C088: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34C08C:
    ctx->pc = 0x7F34C08Cu;
    // 7F34C08C: bl      0x800147F8
    {
            ctx->lr = 0x7F34C090u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F34C090:
    ctx->pc = 0x7F34C090u;
    ctx->downcount -= 60;
    // 7F34C090: li      r6, 1700
    ctx->gpr[6] = (u32)(s32)(1700);

label_7F34C094:
    ctx->pc = 0x7F34C094u;
    // 7F34C094: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F34C098:
    ctx->pc = 0x7F34C098u;
    // 7F34C098: divw   r5, r3, r6
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F34C09C:
    ctx->pc = 0x7F34C09Cu;
    // 7F34C09C: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34C0A0:
    ctx->pc = 0x7F34C0A0u;
    // 7F34C0A0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F34C0A4:
    ctx->pc = 0x7F34C0A4u;
    // 7F34C0A4: lfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C0A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F34C0A8:
    ctx->pc = 0x7F34C0A8u;
    // 7F34C0A8: lfd     f2, -25200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F34C0A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34C0AC:
    ctx->pc = 0x7F34C0ACu;
    // 7F34C0AC: cmpwi   r30, 0
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

label_7F34C0B0:
    ctx->pc = 0x7F34C0B0u;
    // 7F34C0B0: mullw   r0, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F34C0B4:
    ctx->pc = 0x7F34C0B4u;
    // 7F34C0B4: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F34C0B8:
    ctx->pc = 0x7F34C0B8u;
    // 7F34C0B8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F34C0BC:
    ctx->pc = 0x7F34C0BCu;
    // 7F34C0BC: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F34C0C0:
    ctx->pc = 0x7F34C0C0u;
    // 7F34C0C0: lfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C0C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F34C0C4:
    ctx->pc = 0x7F34C0C4u;
    // 7F34C0C4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F34C0C4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F34C0C8:
    ctx->pc = 0x7F34C0C8u;
    // 7F34C0C8: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F34C0C8u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F34C0CC:
    ctx->pc = 0x7F34C0CCu;
    // 7F34C0CC: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F34C0CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F34C0D0:
    ctx->pc = 0x7F34C0D0u;
    // 7F34C0D0: bc    12, 2, 0x7F34C0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F34C0E0;
        }
    }

label_7F34C0D4:
    ctx->pc = 0x7F34C0D4u;
    ctx->downcount -= 3;
    // 7F34C0D4: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_7F34C0D8:
    ctx->pc = 0x7F34C0D8u;
    // 7F34C0D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F34C0DC:
    ctx->pc = 0x7F34C0DCu;
    // 7F34C0DC: bl      0x7F205744
    {
            ctx->lr = 0x7F34C0E0u;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F34C0E0:
    ctx->pc = 0x7F34C0E0u;
    ctx->downcount -= 2;
    // 7F34C0E0: cmpwi   r31, 0
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

label_7F34C0E4:
    ctx->pc = 0x7F34C0E4u;
    // 7F34C0E4: bc    12, 2, 0x7F34C350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F34C350u;
            return;
        }
    }

label_7F34C0E8:
    ctx->pc = 0x7F34C0E8u;
    ctx->downcount -= 1;
    // 7F34C0E8: lwz     r0, 716(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F34C0ECu;
    return;
return_dispatch_7F3480EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F348108u: goto label_7F348108;
    case 0x7F3481D4u: goto label_7F3481D4;
    case 0x7F348268u: goto label_7F348268;
    case 0x7F34828Cu: goto label_7F34828C;
    case 0x7F3482B0u: goto label_7F3482B0;
    case 0x7F348338u: goto label_7F348338;
    case 0x7F348340u: goto label_7F348340;
    case 0x7F3483C0u: goto label_7F3483C0;
    case 0x7F3483C8u: goto label_7F3483C8;
    case 0x7F3483CCu: goto label_7F3483CC;
    case 0x7F3483E4u: goto label_7F3483E4;
    case 0x7F348410u: goto label_7F348410;
    case 0x7F34842Cu: goto label_7F34842C;
    case 0x7F348444u: goto label_7F348444;
    case 0x7F348460u: goto label_7F348460;
    case 0x7F34846Cu: goto label_7F34846C;
    case 0x7F34851Cu: goto label_7F34851C;
    case 0x7F348538u: goto label_7F348538;
    case 0x7F34857Cu: goto label_7F34857C;
    case 0x7F34858Cu: goto label_7F34858C;
    case 0x7F3485CCu: goto label_7F3485CC;
    case 0x7F3485DCu: goto label_7F3485DC;
    case 0x7F3485E4u: goto label_7F3485E4;
    case 0x7F3486C0u: goto label_7F3486C0;
    case 0x7F348718u: goto label_7F348718;
    case 0x7F348750u: goto label_7F348750;
    case 0x7F348788u: goto label_7F348788;
    case 0x7F3487C4u: goto label_7F3487C4;
    case 0x7F3487D4u: goto label_7F3487D4;
    case 0x7F3487DCu: goto label_7F3487DC;
    case 0x7F3487E4u: goto label_7F3487E4;
    case 0x7F3487F4u: goto label_7F3487F4;
    case 0x7F348800u: goto label_7F348800;
    case 0x7F3488B0u: goto label_7F3488B0;
    case 0x7F348960u: goto label_7F348960;
    case 0x7F3489E8u: goto label_7F3489E8;
    case 0x7F348A04u: goto label_7F348A04;
    case 0x7F348A6Cu: goto label_7F348A6C;
    case 0x7F348A74u: goto label_7F348A74;
    case 0x7F348B14u: goto label_7F348B14;
    case 0x7F348BA4u: goto label_7F348BA4;
    case 0x7F348BB8u: goto label_7F348BB8;
    case 0x7F348C0Cu: goto label_7F348C0C;
    case 0x7F348C70u: goto label_7F348C70;
    case 0x7F348CA4u: goto label_7F348CA4;
    case 0x7F348DBCu: goto label_7F348DBC;
    case 0x7F348DCCu: goto label_7F348DCC;
    case 0x7F348DD0u: goto label_7F348DD0;
    case 0x7F348DE8u: goto label_7F348DE8;
    case 0x7F348DF4u: goto label_7F348DF4;
    case 0x7F348E00u: goto label_7F348E00;
    case 0x7F348E0Cu: goto label_7F348E0C;
    case 0x7F348E14u: goto label_7F348E14;
    case 0x7F348E18u: goto label_7F348E18;
    case 0x7F348E48u: goto label_7F348E48;
    case 0x7F348E54u: goto label_7F348E54;
    case 0x7F348E68u: goto label_7F348E68;
    case 0x7F348E74u: goto label_7F348E74;
    case 0x7F348E7Cu: goto label_7F348E7C;
    case 0x7F348E80u: goto label_7F348E80;
    case 0x7F348EB0u: goto label_7F348EB0;
    case 0x7F348EBCu: goto label_7F348EBC;
    case 0x7F348ED0u: goto label_7F348ED0;
    case 0x7F348EDCu: goto label_7F348EDC;
    case 0x7F348EE4u: goto label_7F348EE4;
    case 0x7F348EF4u: goto label_7F348EF4;
    case 0x7F348F10u: goto label_7F348F10;
    case 0x7F348F1Cu: goto label_7F348F1C;
    case 0x7F348F38u: goto label_7F348F38;
    case 0x7F348F3Cu: goto label_7F348F3C;
    case 0x7F348F4Cu: goto label_7F348F4C;
    case 0x7F349084u: goto label_7F349084;
    case 0x7F349098u: goto label_7F349098;
    case 0x7F3490A8u: goto label_7F3490A8;
    case 0x7F3490C8u: goto label_7F3490C8;
    case 0x7F3490E8u: goto label_7F3490E8;
    case 0x7F34910Cu: goto label_7F34910C;
    case 0x7F349120u: goto label_7F349120;
    case 0x7F34917Cu: goto label_7F34917C;
    case 0x7F349190u: goto label_7F349190;
    case 0x7F3491B4u: goto label_7F3491B4;
    case 0x7F3491E8u: goto label_7F3491E8;
    case 0x7F3491FCu: goto label_7F3491FC;
    case 0x7F349214u: goto label_7F349214;
    case 0x7F34921Cu: goto label_7F34921C;
    case 0x7F349340u: goto label_7F349340;
    case 0x7F34934Cu: goto label_7F34934C;
    case 0x7F349358u: goto label_7F349358;
    case 0x7F349364u: goto label_7F349364;
    case 0x7F349390u: goto label_7F349390;
    case 0x7F3493E4u: goto label_7F3493E4;
    case 0x7F349400u: goto label_7F349400;
    case 0x7F349410u: goto label_7F349410;
    case 0x7F349420u: goto label_7F349420;
    case 0x7F349464u: goto label_7F349464;
    case 0x7F349470u: goto label_7F349470;
    case 0x7F34947Cu: goto label_7F34947C;
    case 0x7F3494B0u: goto label_7F3494B0;
    case 0x7F3494BCu: goto label_7F3494BC;
    case 0x7F34950Cu: goto label_7F34950C;
    case 0x7F34951Cu: goto label_7F34951C;
    case 0x7F349524u: goto label_7F349524;
    case 0x7F349534u: goto label_7F349534;
    case 0x7F349544u: goto label_7F349544;
    case 0x7F3495B4u: goto label_7F3495B4;
    case 0x7F3495DCu: goto label_7F3495DC;
    case 0x7F3495FCu: goto label_7F3495FC;
    case 0x7F349638u: goto label_7F349638;
    case 0x7F349684u: goto label_7F349684;
    case 0x7F349690u: goto label_7F349690;
    case 0x7F3496FCu: goto label_7F3496FC;
    case 0x7F34971Cu: goto label_7F34971C;
    case 0x7F349748u: goto label_7F349748;
    case 0x7F349768u: goto label_7F349768;
    case 0x7F3497D8u: goto label_7F3497D8;
    case 0x7F3497F0u: goto label_7F3497F0;
    case 0x7F349808u: goto label_7F349808;
    case 0x7F3498C0u: goto label_7F3498C0;
    case 0x7F3498C4u: goto label_7F3498C4;
    case 0x7F3498D8u: goto label_7F3498D8;
    case 0x7F3498E4u: goto label_7F3498E4;
    case 0x7F349900u: goto label_7F349900;
    case 0x7F34993Cu: goto label_7F34993C;
    case 0x7F349954u: goto label_7F349954;
    case 0x7F3499DCu: goto label_7F3499DC;
    case 0x7F349A30u: goto label_7F349A30;
    case 0x7F349AE0u: goto label_7F349AE0;
    case 0x7F349AF0u: goto label_7F349AF0;
    case 0x7F349AF4u: goto label_7F349AF4;
    case 0x7F349B00u: goto label_7F349B00;
    case 0x7F349B0Cu: goto label_7F349B0C;
    case 0x7F349B14u: goto label_7F349B14;
    case 0x7F349B18u: goto label_7F349B18;
    case 0x7F349B2Cu: goto label_7F349B2C;
    case 0x7F349B38u: goto label_7F349B38;
    case 0x7F349B54u: goto label_7F349B54;
    case 0x7F349B68u: goto label_7F349B68;
    case 0x7F349B74u: goto label_7F349B74;
    case 0x7F349B7Cu: goto label_7F349B7C;
    case 0x7F349B9Cu: goto label_7F349B9C;
    case 0x7F349BA8u: goto label_7F349BA8;
    case 0x7F349BB0u: goto label_7F349BB0;
    case 0x7F349BBCu: goto label_7F349BBC;
    case 0x7F349BCCu: goto label_7F349BCC;
    case 0x7F349BD4u: goto label_7F349BD4;
    case 0x7F349BE0u: goto label_7F349BE0;
    case 0x7F349BE8u: goto label_7F349BE8;
    case 0x7F349BF4u: goto label_7F349BF4;
    case 0x7F349C0Cu: goto label_7F349C0C;
    case 0x7F349C24u: goto label_7F349C24;
    case 0x7F349C30u: goto label_7F349C30;
    case 0x7F349C3Cu: goto label_7F349C3C;
    case 0x7F349C48u: goto label_7F349C48;
    case 0x7F349C54u: goto label_7F349C54;
    case 0x7F349C60u: goto label_7F349C60;
    case 0x7F349C6Cu: goto label_7F349C6C;
    case 0x7F349C78u: goto label_7F349C78;
    case 0x7F349C84u: goto label_7F349C84;
    case 0x7F349C90u: goto label_7F349C90;
    case 0x7F349C9Cu: goto label_7F349C9C;
    case 0x7F349CA8u: goto label_7F349CA8;
    case 0x7F349CB0u: goto label_7F349CB0;
    case 0x7F349CBCu: goto label_7F349CBC;
    case 0x7F349CD0u: goto label_7F349CD0;
    case 0x7F349CDCu: goto label_7F349CDC;
    case 0x7F349CECu: goto label_7F349CEC;
    case 0x7F349D44u: goto label_7F349D44;
    case 0x7F349D94u: goto label_7F349D94;
    case 0x7F349DDCu: goto label_7F349DDC;
    case 0x7F349DE8u: goto label_7F349DE8;
    case 0x7F349DF4u: goto label_7F349DF4;
    case 0x7F349E00u: goto label_7F349E00;
    case 0x7F349E2Cu: goto label_7F349E2C;
    case 0x7F349E80u: goto label_7F349E80;
    case 0x7F349E9Cu: goto label_7F349E9C;
    case 0x7F349EACu: goto label_7F349EAC;
    case 0x7F349EBCu: goto label_7F349EBC;
    case 0x7F349F3Cu: goto label_7F349F3C;
    case 0x7F349F58u: goto label_7F349F58;
    case 0x7F349F9Cu: goto label_7F349F9C;
    case 0x7F349FACu: goto label_7F349FAC;
    case 0x7F349FFCu: goto label_7F349FFC;
    case 0x7F34A03Cu: goto label_7F34A03C;
    case 0x7F34A080u: goto label_7F34A080;
    case 0x7F34A0C4u: goto label_7F34A0C4;
    case 0x7F34A190u: goto label_7F34A190;
    case 0x7F34A1E0u: goto label_7F34A1E0;
    case 0x7F34A230u: goto label_7F34A230;
    case 0x7F34A264u: goto label_7F34A264;
    case 0x7F34A274u: goto label_7F34A274;
    case 0x7F34A2C0u: goto label_7F34A2C0;
    case 0x7F34A300u: goto label_7F34A300;
    case 0x7F34A30Cu: goto label_7F34A30C;
    case 0x7F34A318u: goto label_7F34A318;
    case 0x7F34A328u: goto label_7F34A328;
    case 0x7F34A330u: goto label_7F34A330;
    case 0x7F34A36Cu: goto label_7F34A36C;
    case 0x7F34A37Cu: goto label_7F34A37C;
    case 0x7F34A44Cu: goto label_7F34A44C;
    case 0x7F34A4A0u: goto label_7F34A4A0;
    case 0x7F34A4A8u: goto label_7F34A4A8;
    case 0x7F34A4ECu: goto label_7F34A4EC;
    case 0x7F34A4FCu: goto label_7F34A4FC;
    case 0x7F34A520u: goto label_7F34A520;
    case 0x7F34A558u: goto label_7F34A558;
    case 0x7F34A56Cu: goto label_7F34A56C;
    case 0x7F34A590u: goto label_7F34A590;
    case 0x7F34A5A4u: goto label_7F34A5A4;
    case 0x7F34A5B8u: goto label_7F34A5B8;
    case 0x7F34A5C4u: goto label_7F34A5C4;
    case 0x7F34A6B8u: goto label_7F34A6B8;
    case 0x7F34A6ECu: goto label_7F34A6EC;
    case 0x7F34A700u: goto label_7F34A700;
    case 0x7F34A708u: goto label_7F34A708;
    case 0x7F34A734u: goto label_7F34A734;
    case 0x7F34A744u: goto label_7F34A744;
    case 0x7F34A778u: goto label_7F34A778;
    case 0x7F34A7B4u: goto label_7F34A7B4;
    case 0x7F34A7BCu: goto label_7F34A7BC;
    case 0x7F34A7CCu: goto label_7F34A7CC;
    case 0x7F34A7D4u: goto label_7F34A7D4;
    case 0x7F34A7E4u: goto label_7F34A7E4;
    case 0x7F34A7F4u: goto label_7F34A7F4;
    case 0x7F34A804u: goto label_7F34A804;
    case 0x7F34A818u: goto label_7F34A818;
    case 0x7F34A84Cu: goto label_7F34A84C;
    case 0x7F34A854u: goto label_7F34A854;
    case 0x7F34A904u: goto label_7F34A904;
    case 0x7F34A918u: goto label_7F34A918;
    case 0x7F34A92Cu: goto label_7F34A92C;
    case 0x7F34A98Cu: goto label_7F34A98C;
    case 0x7F34AA50u: goto label_7F34AA50;
    case 0x7F34AAC8u: goto label_7F34AAC8;
    case 0x7F34AB40u: goto label_7F34AB40;
    case 0x7F34AB88u: goto label_7F34AB88;
    case 0x7F34ABA8u: goto label_7F34ABA8;
    case 0x7F34ABC0u: goto label_7F34ABC0;
    case 0x7F34ABC4u: goto label_7F34ABC4;
    case 0x7F34ABE4u: goto label_7F34ABE4;
    case 0x7F34ABFCu: goto label_7F34ABFC;
    case 0x7F34AC00u: goto label_7F34AC00;
    case 0x7F34AC20u: goto label_7F34AC20;
    case 0x7F34AC64u: goto label_7F34AC64;
    case 0x7F34ACA0u: goto label_7F34ACA0;
    case 0x7F34ACBCu: goto label_7F34ACBC;
    case 0x7F34ACDCu: goto label_7F34ACDC;
    case 0x7F34AD08u: goto label_7F34AD08;
    case 0x7F34AD1Cu: goto label_7F34AD1C;
    case 0x7F34AD20u: goto label_7F34AD20;
    case 0x7F34AD3Cu: goto label_7F34AD3C;
    case 0x7F34AD4Cu: goto label_7F34AD4C;
    case 0x7F34AD6Cu: goto label_7F34AD6C;
    case 0x7F34AD9Cu: goto label_7F34AD9C;
    case 0x7F34ADBCu: goto label_7F34ADBC;
    case 0x7F34ADF4u: goto label_7F34ADF4;
    case 0x7F34AE14u: goto label_7F34AE14;
    case 0x7F34AF94u: goto label_7F34AF94;
    case 0x7F34AFCCu: goto label_7F34AFCC;
    case 0x7F34B070u: goto label_7F34B070;
    case 0x7F34B08Cu: goto label_7F34B08C;
    case 0x7F34B0F0u: goto label_7F34B0F0;
    case 0x7F34B100u: goto label_7F34B100;
    case 0x7F34B148u: goto label_7F34B148;
    case 0x7F34B158u: goto label_7F34B158;
    case 0x7F34B16Cu: goto label_7F34B16C;
    case 0x7F34B178u: goto label_7F34B178;
    case 0x7F34B180u: goto label_7F34B180;
    case 0x7F34B18Cu: goto label_7F34B18C;
    case 0x7F34B194u: goto label_7F34B194;
    case 0x7F34B1A0u: goto label_7F34B1A0;
    case 0x7F34B1A8u: goto label_7F34B1A8;
    case 0x7F34B1B4u: goto label_7F34B1B4;
    case 0x7F34B1E8u: goto label_7F34B1E8;
    case 0x7F34B1F4u: goto label_7F34B1F4;
    case 0x7F34B200u: goto label_7F34B200;
    case 0x7F34B20Cu: goto label_7F34B20C;
    case 0x7F34B238u: goto label_7F34B238;
    case 0x7F34B284u: goto label_7F34B284;
    case 0x7F34B29Cu: goto label_7F34B29C;
    case 0x7F34B2E8u: goto label_7F34B2E8;
    case 0x7F34B354u: goto label_7F34B354;
    case 0x7F34B370u: goto label_7F34B370;
    case 0x7F34B37Cu: goto label_7F34B37C;
    case 0x7F34B390u: goto label_7F34B390;
    case 0x7F34B3A4u: goto label_7F34B3A4;
    case 0x7F34B3E4u: goto label_7F34B3E4;
    case 0x7F34B474u: goto label_7F34B474;
    case 0x7F34B4D4u: goto label_7F34B4D4;
    case 0x7F34B534u: goto label_7F34B534;
    case 0x7F34B564u: goto label_7F34B564;
    case 0x7F34B578u: goto label_7F34B578;
    case 0x7F34B5F0u: goto label_7F34B5F0;
    case 0x7F34B5F8u: goto label_7F34B5F8;
    case 0x7F34B628u: goto label_7F34B628;
    case 0x7F34B684u: goto label_7F34B684;
    case 0x7F34B68Cu: goto label_7F34B68C;
    case 0x7F34B6FCu: goto label_7F34B6FC;
    case 0x7F34B73Cu: goto label_7F34B73C;
    case 0x7F34B768u: goto label_7F34B768;
    case 0x7F34B794u: goto label_7F34B794;
    case 0x7F34B7E4u: goto label_7F34B7E4;
    case 0x7F34B824u: goto label_7F34B824;
    case 0x7F34B894u: goto label_7F34B894;
    case 0x7F34B928u: goto label_7F34B928;
    case 0x7F34B954u: goto label_7F34B954;
    case 0x7F34B988u: goto label_7F34B988;
    case 0x7F34B9C8u: goto label_7F34B9C8;
    case 0x7F34BA88u: goto label_7F34BA88;
    case 0x7F34BAACu: goto label_7F34BAAC;
    case 0x7F34BAD0u: goto label_7F34BAD0;
    case 0x7F34BAFCu: goto label_7F34BAFC;
    case 0x7F34BB2Cu: goto label_7F34BB2C;
    case 0x7F34BBF4u: goto label_7F34BBF4;
    case 0x7F34BCC8u: goto label_7F34BCC8;
    case 0x7F34BD50u: goto label_7F34BD50;
    case 0x7F34BD6Cu: goto label_7F34BD6C;
    case 0x7F34BD74u: goto label_7F34BD74;
    case 0x7F34BD84u: goto label_7F34BD84;
    case 0x7F34BEB8u: goto label_7F34BEB8;
    case 0x7F34BF1Cu: goto label_7F34BF1C;
    case 0x7F34BF2Cu: goto label_7F34BF2C;
    case 0x7F34BF3Cu: goto label_7F34BF3C;
    case 0x7F34BF68u: goto label_7F34BF68;
    case 0x7F34C050u: goto label_7F34C050;
    case 0x7F34C090u: goto label_7F34C090;
    case 0x7F34C0E0u: goto label_7F34C0E0;
    default: return;
    }
}

