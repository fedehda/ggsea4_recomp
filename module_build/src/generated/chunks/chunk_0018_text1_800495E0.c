// DolRecomp output
#include "../generated.h"

static void loop_80049624(CPUState* ctx) {
label_80049624:
    ctx->downcount -= 25;
    ctx->pc = 0x80049624u;
    // 80049624: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049628u;
    // 80049628: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8004962C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x80049630u;
    // 80049630: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049634u;
    // 80049634: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049638: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8004963Cu;
    // 8004963C: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049640u;
    // 80049640: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049644: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x80049648u;
    // 80049648: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8004964Cu;
    // 8004964C: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049650: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x80049654u;
    // 80049654: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049658u;
    // 80049658: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8004965C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x80049660u;
    // 80049660: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049664u;
    // 80049664: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049668: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8004966Cu;
    // 8004966C: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80049670u;
    // 80049670: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049674: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x80049678u;
    // 80049678: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8004967Cu;
    // 8004967C: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80049680: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    // 80049684: bc    16, 0, 0x80049624
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049624u;
                return;
            }
            goto label_80049624;
        }
    }

    ctx->pc = 0x80049688u;
}

static void loop_8004B934(CPUState* ctx) {
label_8004B934:
    ctx->downcount -= 3;
    ctx->pc = 0x8004B934u;
    // 8004B934: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8004B938: cmplwi  r0, 0x0000
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

    // 8004B93C: bc    4, 2, 0x8004B934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B934u;
                return;
            }
            goto label_8004B934;
        }
    }

    ctx->pc = 0x8004B940u;
}

static void loop_8004CEA0(CPUState* ctx) {
label_8004CEA0:
    ctx->downcount -= 34;
    ctx->pc = 0x8004CEA0u;
    // 8004CEA0: stb     r26, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

    // 8004CEA4: addi    r29, r26, 1
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(1);

    // 8004CEA8: addi    r30, r26, 2
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(2);

    // 8004CEAC: addi    r12, r26, 3
    ctx->gpr[12] = ctx->gpr[26] + (u32)(s32)(3);

    ctx->pc = 0x8004CEB0u;
    // 8004CEB0: stb     r29, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

    // 8004CEB4: addi    r11, r26, 4
    ctx->gpr[11] = ctx->gpr[26] + (u32)(s32)(4);

    // 8004CEB8: addi    r9, r26, 5
    ctx->gpr[9] = ctx->gpr[26] + (u32)(s32)(5);

    // 8004CEBC: addi    r8, r26, 6
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(6);

    ctx->pc = 0x8004CEC0u;
    // 8004CEC0: stb     r30, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

    // 8004CEC4: addi    r0, r26, 7
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(7);

    // 8004CEC8: addi    r29, r26, 9
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(9);

    // 8004CECC: addi    r30, r26, 10
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(10);

    ctx->pc = 0x8004CED0u;
    // 8004CED0: stb     r12, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

    // 8004CED4: addi    r12, r26, 11
    ctx->gpr[12] = ctx->gpr[26] + (u32)(s32)(11);

    ctx->pc = 0x8004CED8u;
    // 8004CED8: stb     r11, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    // 8004CEDC: addi    r11, r26, 12
    ctx->gpr[11] = ctx->gpr[26] + (u32)(s32)(12);

    ctx->pc = 0x8004CEE0u;
    // 8004CEE0: stb     r9, 5(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    // 8004CEE4: addi    r9, r26, 13
    ctx->gpr[9] = ctx->gpr[26] + (u32)(s32)(13);

    ctx->pc = 0x8004CEE8u;
    // 8004CEE8: stb     r8, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

    // 8004CEEC: addi    r8, r26, 14
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(14);

    ctx->pc = 0x8004CEF0u;
    // 8004CEF0: stb     r0, 7(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 8004CEF4: addi    r0, r26, 15
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(15);

    // 8004CEF8: addi    r26, r26, 8
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8);

    ctx->pc = 0x8004CEFCu;
    // 8004CEFC: stb     r26, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

    // 8004CF00: addi    r26, r26, 8
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8);

    ctx->pc = 0x8004CF04u;
    // 8004CF04: stb     r29, 9(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

    ctx->pc = 0x8004CF08u;
    // 8004CF08: stb     r30, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

    ctx->pc = 0x8004CF0Cu;
    // 8004CF0C: stb     r12, 11(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

    ctx->pc = 0x8004CF10u;
    // 8004CF10: stb     r11, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    ctx->pc = 0x8004CF14u;
    // 8004CF14: stb     r9, 13(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    ctx->pc = 0x8004CF18u;
    // 8004CF18: stb     r8, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

    ctx->pc = 0x8004CF1Cu;
    // 8004CF1C: stb     r0, 15(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 8004CF20: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

    // 8004CF24: bc    16, 0, 0x8004CEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CEA0u;
                return;
            }
            goto label_8004CEA0;
        }
    }

    ctx->pc = 0x8004CF28u;
}

static void loop_8004D10C(CPUState* ctx) {
label_8004D10C:
    ctx->downcount -= 3;
    // 8004D10C: rlwinm r5, r8, 1, 15, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[8], 1u) & 0x0001FFFEu;
    }

    // 8004D110: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    ctx->pc = 0x8004D114u;
    // 8004D114: sthx    r7, r10, r5
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    ctx->pc = 0x8004D118u;
    // 8004D118: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8004D11C: rlwinm r6, r8, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x0000FFFFu;
    }

    ctx->pc = 0x8004D120u;
    // 8004D120: lhz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

    // 8004D124: cmplw   r6, r5
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 8004D128: bc    12, 0, 0x8004D10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004D10Cu;
                return;
            }
            goto label_8004D10C;
        }
    }

    ctx->pc = 0x8004D12Cu;
}

void func_800495E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800495E0u: goto label_800495E0;
    case 0x800495E4u: goto label_800495E4;
    case 0x800495E8u: goto label_800495E8;
    case 0x800495ECu: goto label_800495EC;
    case 0x800495F0u: goto label_800495F0;
    case 0x800495F4u: goto label_800495F4;
    case 0x800495F8u: goto label_800495F8;
    case 0x800495FCu: goto label_800495FC;
    case 0x80049600u: goto label_80049600;
    case 0x80049604u: goto label_80049604;
    case 0x80049608u: goto label_80049608;
    case 0x8004960Cu: goto label_8004960C;
    case 0x80049610u: goto label_80049610;
    case 0x80049614u: goto label_80049614;
    case 0x80049618u: goto label_80049618;
    case 0x8004961Cu: goto label_8004961C;
    case 0x80049620u: goto label_80049620;
    case 0x80049624u: goto label_80049624;
    case 0x80049628u: goto label_80049628;
    case 0x8004962Cu: goto label_8004962C;
    case 0x80049630u: goto label_80049630;
    case 0x80049634u: goto label_80049634;
    case 0x80049638u: goto label_80049638;
    case 0x8004963Cu: goto label_8004963C;
    case 0x80049640u: goto label_80049640;
    case 0x80049644u: goto label_80049644;
    case 0x80049648u: goto label_80049648;
    case 0x8004964Cu: goto label_8004964C;
    case 0x80049650u: goto label_80049650;
    case 0x80049654u: goto label_80049654;
    case 0x80049658u: goto label_80049658;
    case 0x8004965Cu: goto label_8004965C;
    case 0x80049660u: goto label_80049660;
    case 0x80049664u: goto label_80049664;
    case 0x80049668u: goto label_80049668;
    case 0x8004966Cu: goto label_8004966C;
    case 0x80049670u: goto label_80049670;
    case 0x80049674u: goto label_80049674;
    case 0x80049678u: goto label_80049678;
    case 0x8004967Cu: goto label_8004967C;
    case 0x80049680u: goto label_80049680;
    case 0x80049684u: goto label_80049684;
    case 0x80049688u: goto label_80049688;
    case 0x8004968Cu: goto label_8004968C;
    case 0x80049690u: goto label_80049690;
    case 0x80049694u: goto label_80049694;
    case 0x80049698u: goto label_80049698;
    case 0x8004969Cu: goto label_8004969C;
    case 0x800496A0u: goto label_800496A0;
    case 0x800496A4u: goto label_800496A4;
    case 0x800496A8u: goto label_800496A8;
    case 0x800496ACu: goto label_800496AC;
    case 0x800496B0u: goto label_800496B0;
    case 0x800496B4u: goto label_800496B4;
    case 0x800496B8u: goto label_800496B8;
    case 0x800496BCu: goto label_800496BC;
    case 0x800496C0u: goto label_800496C0;
    case 0x800496C4u: goto label_800496C4;
    case 0x800496C8u: goto label_800496C8;
    case 0x800496CCu: goto label_800496CC;
    case 0x800496D0u: goto label_800496D0;
    case 0x800496D4u: goto label_800496D4;
    case 0x800496D8u: goto label_800496D8;
    case 0x800496DCu: goto label_800496DC;
    case 0x800496E0u: goto label_800496E0;
    case 0x800496E4u: goto label_800496E4;
    case 0x800496E8u: goto label_800496E8;
    case 0x800496ECu: goto label_800496EC;
    case 0x800496F0u: goto label_800496F0;
    case 0x800496F4u: goto label_800496F4;
    case 0x800496F8u: goto label_800496F8;
    case 0x800496FCu: goto label_800496FC;
    case 0x80049700u: goto label_80049700;
    case 0x80049704u: goto label_80049704;
    case 0x80049708u: goto label_80049708;
    case 0x8004970Cu: goto label_8004970C;
    case 0x80049710u: goto label_80049710;
    case 0x80049714u: goto label_80049714;
    case 0x80049718u: goto label_80049718;
    case 0x8004971Cu: goto label_8004971C;
    case 0x80049720u: goto label_80049720;
    case 0x80049724u: goto label_80049724;
    case 0x80049728u: goto label_80049728;
    case 0x8004972Cu: goto label_8004972C;
    case 0x80049730u: goto label_80049730;
    case 0x80049734u: goto label_80049734;
    case 0x80049738u: goto label_80049738;
    case 0x8004973Cu: goto label_8004973C;
    case 0x80049740u: goto label_80049740;
    case 0x80049744u: goto label_80049744;
    case 0x80049748u: goto label_80049748;
    case 0x8004974Cu: goto label_8004974C;
    case 0x80049750u: goto label_80049750;
    case 0x80049754u: goto label_80049754;
    case 0x80049758u: goto label_80049758;
    case 0x8004975Cu: goto label_8004975C;
    case 0x80049760u: goto label_80049760;
    case 0x80049764u: goto label_80049764;
    case 0x80049768u: goto label_80049768;
    case 0x8004976Cu: goto label_8004976C;
    case 0x80049770u: goto label_80049770;
    case 0x80049774u: goto label_80049774;
    case 0x80049778u: goto label_80049778;
    case 0x8004977Cu: goto label_8004977C;
    case 0x80049780u: goto label_80049780;
    case 0x80049784u: goto label_80049784;
    case 0x80049788u: goto label_80049788;
    case 0x8004978Cu: goto label_8004978C;
    case 0x80049790u: goto label_80049790;
    case 0x80049794u: goto label_80049794;
    case 0x80049798u: goto label_80049798;
    case 0x8004979Cu: goto label_8004979C;
    case 0x800497A0u: goto label_800497A0;
    case 0x800497A4u: goto label_800497A4;
    case 0x800497A8u: goto label_800497A8;
    case 0x800497ACu: goto label_800497AC;
    case 0x800497B0u: goto label_800497B0;
    case 0x800497B4u: goto label_800497B4;
    case 0x800497B8u: goto label_800497B8;
    case 0x800497BCu: goto label_800497BC;
    case 0x800497C0u: goto label_800497C0;
    case 0x800497C4u: goto label_800497C4;
    case 0x800497C8u: goto label_800497C8;
    case 0x800497CCu: goto label_800497CC;
    case 0x800497D0u: goto label_800497D0;
    case 0x800497D4u: goto label_800497D4;
    case 0x800497D8u: goto label_800497D8;
    case 0x800497DCu: goto label_800497DC;
    case 0x800497E0u: goto label_800497E0;
    case 0x800497E4u: goto label_800497E4;
    case 0x800497E8u: goto label_800497E8;
    case 0x800497ECu: goto label_800497EC;
    case 0x800497F0u: goto label_800497F0;
    case 0x800497F4u: goto label_800497F4;
    case 0x800497F8u: goto label_800497F8;
    case 0x800497FCu: goto label_800497FC;
    case 0x80049800u: goto label_80049800;
    case 0x80049804u: goto label_80049804;
    case 0x80049808u: goto label_80049808;
    case 0x8004980Cu: goto label_8004980C;
    case 0x80049810u: goto label_80049810;
    case 0x80049814u: goto label_80049814;
    case 0x80049818u: goto label_80049818;
    case 0x8004981Cu: goto label_8004981C;
    case 0x80049820u: goto label_80049820;
    case 0x80049824u: goto label_80049824;
    case 0x80049828u: goto label_80049828;
    case 0x8004982Cu: goto label_8004982C;
    case 0x80049830u: goto label_80049830;
    case 0x80049834u: goto label_80049834;
    case 0x80049838u: goto label_80049838;
    case 0x8004983Cu: goto label_8004983C;
    case 0x80049840u: goto label_80049840;
    case 0x80049844u: goto label_80049844;
    case 0x80049848u: goto label_80049848;
    case 0x8004984Cu: goto label_8004984C;
    case 0x80049850u: goto label_80049850;
    case 0x80049854u: goto label_80049854;
    case 0x80049858u: goto label_80049858;
    case 0x8004985Cu: goto label_8004985C;
    case 0x80049860u: goto label_80049860;
    case 0x80049864u: goto label_80049864;
    case 0x80049868u: goto label_80049868;
    case 0x8004986Cu: goto label_8004986C;
    case 0x80049870u: goto label_80049870;
    case 0x80049874u: goto label_80049874;
    case 0x80049878u: goto label_80049878;
    case 0x8004987Cu: goto label_8004987C;
    case 0x80049880u: goto label_80049880;
    case 0x80049884u: goto label_80049884;
    case 0x80049888u: goto label_80049888;
    case 0x8004988Cu: goto label_8004988C;
    case 0x80049890u: goto label_80049890;
    case 0x80049894u: goto label_80049894;
    case 0x80049898u: goto label_80049898;
    case 0x8004989Cu: goto label_8004989C;
    case 0x800498A0u: goto label_800498A0;
    case 0x800498A4u: goto label_800498A4;
    case 0x800498A8u: goto label_800498A8;
    case 0x800498ACu: goto label_800498AC;
    case 0x800498B0u: goto label_800498B0;
    case 0x800498B4u: goto label_800498B4;
    case 0x800498B8u: goto label_800498B8;
    case 0x800498BCu: goto label_800498BC;
    case 0x800498C0u: goto label_800498C0;
    case 0x800498C4u: goto label_800498C4;
    case 0x800498C8u: goto label_800498C8;
    case 0x800498CCu: goto label_800498CC;
    case 0x800498D0u: goto label_800498D0;
    case 0x800498D4u: goto label_800498D4;
    case 0x800498D8u: goto label_800498D8;
    case 0x800498DCu: goto label_800498DC;
    case 0x800498E0u: goto label_800498E0;
    case 0x800498E4u: goto label_800498E4;
    case 0x800498E8u: goto label_800498E8;
    case 0x800498ECu: goto label_800498EC;
    case 0x800498F0u: goto label_800498F0;
    case 0x800498F4u: goto label_800498F4;
    case 0x800498F8u: goto label_800498F8;
    case 0x800498FCu: goto label_800498FC;
    case 0x80049900u: goto label_80049900;
    case 0x80049904u: goto label_80049904;
    case 0x80049908u: goto label_80049908;
    case 0x8004990Cu: goto label_8004990C;
    case 0x80049910u: goto label_80049910;
    case 0x80049914u: goto label_80049914;
    case 0x80049918u: goto label_80049918;
    case 0x8004991Cu: goto label_8004991C;
    case 0x80049920u: goto label_80049920;
    case 0x80049924u: goto label_80049924;
    case 0x80049928u: goto label_80049928;
    case 0x8004992Cu: goto label_8004992C;
    case 0x80049930u: goto label_80049930;
    case 0x80049934u: goto label_80049934;
    case 0x80049938u: goto label_80049938;
    case 0x8004993Cu: goto label_8004993C;
    case 0x80049940u: goto label_80049940;
    case 0x80049944u: goto label_80049944;
    case 0x80049948u: goto label_80049948;
    case 0x8004994Cu: goto label_8004994C;
    case 0x80049950u: goto label_80049950;
    case 0x80049954u: goto label_80049954;
    case 0x80049958u: goto label_80049958;
    case 0x8004995Cu: goto label_8004995C;
    case 0x80049960u: goto label_80049960;
    case 0x80049964u: goto label_80049964;
    case 0x80049968u: goto label_80049968;
    case 0x8004996Cu: goto label_8004996C;
    case 0x80049970u: goto label_80049970;
    case 0x80049974u: goto label_80049974;
    case 0x80049978u: goto label_80049978;
    case 0x8004997Cu: goto label_8004997C;
    case 0x80049980u: goto label_80049980;
    case 0x80049984u: goto label_80049984;
    case 0x80049988u: goto label_80049988;
    case 0x8004998Cu: goto label_8004998C;
    case 0x80049990u: goto label_80049990;
    case 0x80049994u: goto label_80049994;
    case 0x80049998u: goto label_80049998;
    case 0x8004999Cu: goto label_8004999C;
    case 0x800499A0u: goto label_800499A0;
    case 0x800499A4u: goto label_800499A4;
    case 0x800499A8u: goto label_800499A8;
    case 0x800499ACu: goto label_800499AC;
    case 0x800499B0u: goto label_800499B0;
    case 0x800499B4u: goto label_800499B4;
    case 0x800499B8u: goto label_800499B8;
    case 0x800499BCu: goto label_800499BC;
    case 0x800499C0u: goto label_800499C0;
    case 0x800499C4u: goto label_800499C4;
    case 0x800499C8u: goto label_800499C8;
    case 0x800499CCu: goto label_800499CC;
    case 0x800499D0u: goto label_800499D0;
    case 0x800499D4u: goto label_800499D4;
    case 0x800499D8u: goto label_800499D8;
    case 0x800499DCu: goto label_800499DC;
    case 0x800499E0u: goto label_800499E0;
    case 0x800499E4u: goto label_800499E4;
    case 0x800499E8u: goto label_800499E8;
    case 0x800499ECu: goto label_800499EC;
    case 0x800499F0u: goto label_800499F0;
    case 0x800499F4u: goto label_800499F4;
    case 0x800499F8u: goto label_800499F8;
    case 0x800499FCu: goto label_800499FC;
    case 0x80049A00u: goto label_80049A00;
    case 0x80049A04u: goto label_80049A04;
    case 0x80049A08u: goto label_80049A08;
    case 0x80049A0Cu: goto label_80049A0C;
    case 0x80049A10u: goto label_80049A10;
    case 0x80049A14u: goto label_80049A14;
    case 0x80049A18u: goto label_80049A18;
    case 0x80049A1Cu: goto label_80049A1C;
    case 0x80049A20u: goto label_80049A20;
    case 0x80049A24u: goto label_80049A24;
    case 0x80049A28u: goto label_80049A28;
    case 0x80049A2Cu: goto label_80049A2C;
    case 0x80049A30u: goto label_80049A30;
    case 0x80049A34u: goto label_80049A34;
    case 0x80049A38u: goto label_80049A38;
    case 0x80049A3Cu: goto label_80049A3C;
    case 0x80049A40u: goto label_80049A40;
    case 0x80049A44u: goto label_80049A44;
    case 0x80049A48u: goto label_80049A48;
    case 0x80049A4Cu: goto label_80049A4C;
    case 0x80049A50u: goto label_80049A50;
    case 0x80049A54u: goto label_80049A54;
    case 0x80049A58u: goto label_80049A58;
    case 0x80049A5Cu: goto label_80049A5C;
    case 0x80049A60u: goto label_80049A60;
    case 0x80049A64u: goto label_80049A64;
    case 0x80049A68u: goto label_80049A68;
    case 0x80049A6Cu: goto label_80049A6C;
    case 0x80049A70u: goto label_80049A70;
    case 0x80049A74u: goto label_80049A74;
    case 0x80049A78u: goto label_80049A78;
    case 0x80049A7Cu: goto label_80049A7C;
    case 0x80049A80u: goto label_80049A80;
    case 0x80049A84u: goto label_80049A84;
    case 0x80049A88u: goto label_80049A88;
    case 0x80049A8Cu: goto label_80049A8C;
    case 0x80049A90u: goto label_80049A90;
    case 0x80049A94u: goto label_80049A94;
    case 0x80049A98u: goto label_80049A98;
    case 0x80049A9Cu: goto label_80049A9C;
    case 0x80049AA0u: goto label_80049AA0;
    case 0x80049AA4u: goto label_80049AA4;
    case 0x80049AA8u: goto label_80049AA8;
    case 0x80049AACu: goto label_80049AAC;
    case 0x80049AB0u: goto label_80049AB0;
    case 0x80049AB4u: goto label_80049AB4;
    case 0x80049AB8u: goto label_80049AB8;
    case 0x80049ABCu: goto label_80049ABC;
    case 0x80049AC0u: goto label_80049AC0;
    case 0x80049AC4u: goto label_80049AC4;
    case 0x80049AC8u: goto label_80049AC8;
    case 0x80049ACCu: goto label_80049ACC;
    case 0x80049AD0u: goto label_80049AD0;
    case 0x80049AD4u: goto label_80049AD4;
    case 0x80049AD8u: goto label_80049AD8;
    case 0x80049ADCu: goto label_80049ADC;
    case 0x80049AE0u: goto label_80049AE0;
    case 0x80049AE4u: goto label_80049AE4;
    case 0x80049AE8u: goto label_80049AE8;
    case 0x80049AECu: goto label_80049AEC;
    case 0x80049AF0u: goto label_80049AF0;
    case 0x80049AF4u: goto label_80049AF4;
    case 0x80049AF8u: goto label_80049AF8;
    case 0x80049AFCu: goto label_80049AFC;
    case 0x80049B00u: goto label_80049B00;
    case 0x80049B04u: goto label_80049B04;
    case 0x80049B08u: goto label_80049B08;
    case 0x80049B0Cu: goto label_80049B0C;
    case 0x80049B10u: goto label_80049B10;
    case 0x80049B14u: goto label_80049B14;
    case 0x80049B18u: goto label_80049B18;
    case 0x80049B1Cu: goto label_80049B1C;
    case 0x80049B20u: goto label_80049B20;
    case 0x80049B24u: goto label_80049B24;
    case 0x80049B28u: goto label_80049B28;
    case 0x80049B2Cu: goto label_80049B2C;
    case 0x80049B30u: goto label_80049B30;
    case 0x80049B34u: goto label_80049B34;
    case 0x80049B38u: goto label_80049B38;
    case 0x80049B3Cu: goto label_80049B3C;
    case 0x80049B40u: goto label_80049B40;
    case 0x80049B44u: goto label_80049B44;
    case 0x80049B48u: goto label_80049B48;
    case 0x80049B4Cu: goto label_80049B4C;
    case 0x80049B50u: goto label_80049B50;
    case 0x80049B54u: goto label_80049B54;
    case 0x80049B58u: goto label_80049B58;
    case 0x80049B5Cu: goto label_80049B5C;
    case 0x80049B60u: goto label_80049B60;
    case 0x80049B64u: goto label_80049B64;
    case 0x80049B68u: goto label_80049B68;
    case 0x80049B6Cu: goto label_80049B6C;
    case 0x80049B70u: goto label_80049B70;
    case 0x80049B74u: goto label_80049B74;
    case 0x80049B78u: goto label_80049B78;
    case 0x80049B7Cu: goto label_80049B7C;
    case 0x80049B80u: goto label_80049B80;
    case 0x80049B84u: goto label_80049B84;
    case 0x80049B88u: goto label_80049B88;
    case 0x80049B8Cu: goto label_80049B8C;
    case 0x80049B90u: goto label_80049B90;
    case 0x80049B94u: goto label_80049B94;
    case 0x80049B98u: goto label_80049B98;
    case 0x80049B9Cu: goto label_80049B9C;
    case 0x80049BA0u: goto label_80049BA0;
    case 0x80049BA4u: goto label_80049BA4;
    case 0x80049BA8u: goto label_80049BA8;
    case 0x80049BACu: goto label_80049BAC;
    case 0x80049BB0u: goto label_80049BB0;
    case 0x80049BB4u: goto label_80049BB4;
    case 0x80049BB8u: goto label_80049BB8;
    case 0x80049BBCu: goto label_80049BBC;
    case 0x80049BC0u: goto label_80049BC0;
    case 0x80049BC4u: goto label_80049BC4;
    case 0x80049BC8u: goto label_80049BC8;
    case 0x80049BCCu: goto label_80049BCC;
    case 0x80049BD0u: goto label_80049BD0;
    case 0x80049BD4u: goto label_80049BD4;
    case 0x80049BD8u: goto label_80049BD8;
    case 0x80049BDCu: goto label_80049BDC;
    case 0x80049BE0u: goto label_80049BE0;
    case 0x80049BE4u: goto label_80049BE4;
    case 0x80049BE8u: goto label_80049BE8;
    case 0x80049BECu: goto label_80049BEC;
    case 0x80049BF0u: goto label_80049BF0;
    case 0x80049BF4u: goto label_80049BF4;
    case 0x80049BF8u: goto label_80049BF8;
    case 0x80049BFCu: goto label_80049BFC;
    case 0x80049C00u: goto label_80049C00;
    case 0x80049C04u: goto label_80049C04;
    case 0x80049C08u: goto label_80049C08;
    case 0x80049C0Cu: goto label_80049C0C;
    case 0x80049C10u: goto label_80049C10;
    case 0x80049C14u: goto label_80049C14;
    case 0x80049C18u: goto label_80049C18;
    case 0x80049C1Cu: goto label_80049C1C;
    case 0x80049C20u: goto label_80049C20;
    case 0x80049C24u: goto label_80049C24;
    case 0x80049C28u: goto label_80049C28;
    case 0x80049C2Cu: goto label_80049C2C;
    case 0x80049C30u: goto label_80049C30;
    case 0x80049C34u: goto label_80049C34;
    case 0x80049C38u: goto label_80049C38;
    case 0x80049C3Cu: goto label_80049C3C;
    case 0x80049C40u: goto label_80049C40;
    case 0x80049C44u: goto label_80049C44;
    case 0x80049C48u: goto label_80049C48;
    case 0x80049C4Cu: goto label_80049C4C;
    case 0x80049C50u: goto label_80049C50;
    case 0x80049C54u: goto label_80049C54;
    case 0x80049C58u: goto label_80049C58;
    case 0x80049C5Cu: goto label_80049C5C;
    case 0x80049C60u: goto label_80049C60;
    case 0x80049C64u: goto label_80049C64;
    case 0x80049C68u: goto label_80049C68;
    case 0x80049C6Cu: goto label_80049C6C;
    case 0x80049C70u: goto label_80049C70;
    case 0x80049C74u: goto label_80049C74;
    case 0x80049C78u: goto label_80049C78;
    case 0x80049C7Cu: goto label_80049C7C;
    case 0x80049C80u: goto label_80049C80;
    case 0x80049C84u: goto label_80049C84;
    case 0x80049C88u: goto label_80049C88;
    case 0x80049C8Cu: goto label_80049C8C;
    case 0x80049C90u: goto label_80049C90;
    case 0x80049C94u: goto label_80049C94;
    case 0x80049C98u: goto label_80049C98;
    case 0x80049C9Cu: goto label_80049C9C;
    case 0x80049CA0u: goto label_80049CA0;
    case 0x80049CA4u: goto label_80049CA4;
    case 0x80049CA8u: goto label_80049CA8;
    case 0x80049CACu: goto label_80049CAC;
    case 0x80049CB0u: goto label_80049CB0;
    case 0x80049CB4u: goto label_80049CB4;
    case 0x80049CB8u: goto label_80049CB8;
    case 0x80049CBCu: goto label_80049CBC;
    case 0x80049CC0u: goto label_80049CC0;
    case 0x80049CC4u: goto label_80049CC4;
    case 0x80049CC8u: goto label_80049CC8;
    case 0x80049CCCu: goto label_80049CCC;
    case 0x80049CD0u: goto label_80049CD0;
    case 0x80049CD4u: goto label_80049CD4;
    case 0x80049CD8u: goto label_80049CD8;
    case 0x80049CDCu: goto label_80049CDC;
    case 0x80049CE0u: goto label_80049CE0;
    case 0x80049CE4u: goto label_80049CE4;
    case 0x80049CE8u: goto label_80049CE8;
    case 0x80049CECu: goto label_80049CEC;
    case 0x80049CF0u: goto label_80049CF0;
    case 0x80049CF4u: goto label_80049CF4;
    case 0x80049CF8u: goto label_80049CF8;
    case 0x80049CFCu: goto label_80049CFC;
    case 0x80049D00u: goto label_80049D00;
    case 0x80049D04u: goto label_80049D04;
    case 0x80049D08u: goto label_80049D08;
    case 0x80049D0Cu: goto label_80049D0C;
    case 0x80049D10u: goto label_80049D10;
    case 0x80049D14u: goto label_80049D14;
    case 0x80049D18u: goto label_80049D18;
    case 0x80049D1Cu: goto label_80049D1C;
    case 0x80049D20u: goto label_80049D20;
    case 0x80049D24u: goto label_80049D24;
    case 0x80049D28u: goto label_80049D28;
    case 0x80049D2Cu: goto label_80049D2C;
    case 0x80049D30u: goto label_80049D30;
    case 0x80049D34u: goto label_80049D34;
    case 0x80049D38u: goto label_80049D38;
    case 0x80049D3Cu: goto label_80049D3C;
    case 0x80049D40u: goto label_80049D40;
    case 0x80049D44u: goto label_80049D44;
    case 0x80049D48u: goto label_80049D48;
    case 0x80049D4Cu: goto label_80049D4C;
    case 0x80049D50u: goto label_80049D50;
    case 0x80049D54u: goto label_80049D54;
    case 0x80049D58u: goto label_80049D58;
    case 0x80049D5Cu: goto label_80049D5C;
    case 0x80049D60u: goto label_80049D60;
    case 0x80049D64u: goto label_80049D64;
    case 0x80049D68u: goto label_80049D68;
    case 0x80049D6Cu: goto label_80049D6C;
    case 0x80049D70u: goto label_80049D70;
    case 0x80049D74u: goto label_80049D74;
    case 0x80049D78u: goto label_80049D78;
    case 0x80049D7Cu: goto label_80049D7C;
    case 0x80049D80u: goto label_80049D80;
    case 0x80049D84u: goto label_80049D84;
    case 0x80049D88u: goto label_80049D88;
    case 0x80049D8Cu: goto label_80049D8C;
    case 0x80049D90u: goto label_80049D90;
    case 0x80049D94u: goto label_80049D94;
    case 0x80049D98u: goto label_80049D98;
    case 0x80049D9Cu: goto label_80049D9C;
    case 0x80049DA0u: goto label_80049DA0;
    case 0x80049DA4u: goto label_80049DA4;
    case 0x80049DA8u: goto label_80049DA8;
    case 0x80049DACu: goto label_80049DAC;
    case 0x80049DB0u: goto label_80049DB0;
    case 0x80049DB4u: goto label_80049DB4;
    case 0x80049DB8u: goto label_80049DB8;
    case 0x80049DBCu: goto label_80049DBC;
    case 0x80049DC0u: goto label_80049DC0;
    case 0x80049DC4u: goto label_80049DC4;
    case 0x80049DC8u: goto label_80049DC8;
    case 0x80049DCCu: goto label_80049DCC;
    case 0x80049DD0u: goto label_80049DD0;
    case 0x80049DD4u: goto label_80049DD4;
    case 0x80049DD8u: goto label_80049DD8;
    case 0x80049DDCu: goto label_80049DDC;
    case 0x80049DE0u: goto label_80049DE0;
    case 0x80049DE4u: goto label_80049DE4;
    case 0x80049DE8u: goto label_80049DE8;
    case 0x80049DECu: goto label_80049DEC;
    case 0x80049DF0u: goto label_80049DF0;
    case 0x80049DF4u: goto label_80049DF4;
    case 0x80049DF8u: goto label_80049DF8;
    case 0x80049DFCu: goto label_80049DFC;
    case 0x80049E00u: goto label_80049E00;
    case 0x80049E04u: goto label_80049E04;
    case 0x80049E08u: goto label_80049E08;
    case 0x80049E0Cu: goto label_80049E0C;
    case 0x80049E10u: goto label_80049E10;
    case 0x80049E14u: goto label_80049E14;
    case 0x80049E18u: goto label_80049E18;
    case 0x80049E1Cu: goto label_80049E1C;
    case 0x80049E20u: goto label_80049E20;
    case 0x80049E24u: goto label_80049E24;
    case 0x80049E28u: goto label_80049E28;
    case 0x80049E2Cu: goto label_80049E2C;
    case 0x80049E30u: goto label_80049E30;
    case 0x80049E34u: goto label_80049E34;
    case 0x80049E38u: goto label_80049E38;
    case 0x80049E3Cu: goto label_80049E3C;
    case 0x80049E40u: goto label_80049E40;
    case 0x80049E44u: goto label_80049E44;
    case 0x80049E48u: goto label_80049E48;
    case 0x80049E4Cu: goto label_80049E4C;
    case 0x80049E50u: goto label_80049E50;
    case 0x80049E54u: goto label_80049E54;
    case 0x80049E58u: goto label_80049E58;
    case 0x80049E5Cu: goto label_80049E5C;
    case 0x80049E60u: goto label_80049E60;
    case 0x80049E64u: goto label_80049E64;
    case 0x80049E68u: goto label_80049E68;
    case 0x80049E6Cu: goto label_80049E6C;
    case 0x80049E70u: goto label_80049E70;
    case 0x80049E74u: goto label_80049E74;
    case 0x80049E78u: goto label_80049E78;
    case 0x80049E7Cu: goto label_80049E7C;
    case 0x80049E80u: goto label_80049E80;
    case 0x80049E84u: goto label_80049E84;
    case 0x80049E88u: goto label_80049E88;
    case 0x80049E8Cu: goto label_80049E8C;
    case 0x80049E90u: goto label_80049E90;
    case 0x80049E94u: goto label_80049E94;
    case 0x80049E98u: goto label_80049E98;
    case 0x80049E9Cu: goto label_80049E9C;
    case 0x80049EA0u: goto label_80049EA0;
    case 0x80049EA4u: goto label_80049EA4;
    case 0x80049EA8u: goto label_80049EA8;
    case 0x80049EACu: goto label_80049EAC;
    case 0x80049EB0u: goto label_80049EB0;
    case 0x80049EB4u: goto label_80049EB4;
    case 0x80049EB8u: goto label_80049EB8;
    case 0x80049EBCu: goto label_80049EBC;
    case 0x80049EC0u: goto label_80049EC0;
    case 0x80049EC4u: goto label_80049EC4;
    case 0x80049EC8u: goto label_80049EC8;
    case 0x80049ECCu: goto label_80049ECC;
    case 0x80049ED0u: goto label_80049ED0;
    case 0x80049ED4u: goto label_80049ED4;
    case 0x80049ED8u: goto label_80049ED8;
    case 0x80049EDCu: goto label_80049EDC;
    case 0x80049EE0u: goto label_80049EE0;
    case 0x80049EE4u: goto label_80049EE4;
    case 0x80049EE8u: goto label_80049EE8;
    case 0x80049EECu: goto label_80049EEC;
    case 0x80049EF0u: goto label_80049EF0;
    case 0x80049EF4u: goto label_80049EF4;
    case 0x80049EF8u: goto label_80049EF8;
    case 0x80049EFCu: goto label_80049EFC;
    case 0x80049F00u: goto label_80049F00;
    case 0x80049F04u: goto label_80049F04;
    case 0x80049F08u: goto label_80049F08;
    case 0x80049F0Cu: goto label_80049F0C;
    case 0x80049F10u: goto label_80049F10;
    case 0x80049F14u: goto label_80049F14;
    case 0x80049F18u: goto label_80049F18;
    case 0x80049F1Cu: goto label_80049F1C;
    case 0x80049F20u: goto label_80049F20;
    case 0x80049F24u: goto label_80049F24;
    case 0x80049F28u: goto label_80049F28;
    case 0x80049F2Cu: goto label_80049F2C;
    case 0x80049F30u: goto label_80049F30;
    case 0x80049F34u: goto label_80049F34;
    case 0x80049F38u: goto label_80049F38;
    case 0x80049F3Cu: goto label_80049F3C;
    case 0x80049F40u: goto label_80049F40;
    case 0x80049F44u: goto label_80049F44;
    case 0x80049F48u: goto label_80049F48;
    case 0x80049F4Cu: goto label_80049F4C;
    case 0x80049F50u: goto label_80049F50;
    case 0x80049F54u: goto label_80049F54;
    case 0x80049F58u: goto label_80049F58;
    case 0x80049F5Cu: goto label_80049F5C;
    case 0x80049F60u: goto label_80049F60;
    case 0x80049F64u: goto label_80049F64;
    case 0x80049F68u: goto label_80049F68;
    case 0x80049F6Cu: goto label_80049F6C;
    case 0x80049F70u: goto label_80049F70;
    case 0x80049F74u: goto label_80049F74;
    case 0x80049F78u: goto label_80049F78;
    case 0x80049F7Cu: goto label_80049F7C;
    case 0x80049F80u: goto label_80049F80;
    case 0x80049F84u: goto label_80049F84;
    case 0x80049F88u: goto label_80049F88;
    case 0x80049F8Cu: goto label_80049F8C;
    case 0x80049F90u: goto label_80049F90;
    case 0x80049F94u: goto label_80049F94;
    case 0x80049F98u: goto label_80049F98;
    case 0x80049F9Cu: goto label_80049F9C;
    case 0x80049FA0u: goto label_80049FA0;
    case 0x80049FA4u: goto label_80049FA4;
    case 0x80049FA8u: goto label_80049FA8;
    case 0x80049FACu: goto label_80049FAC;
    case 0x80049FB0u: goto label_80049FB0;
    case 0x80049FB4u: goto label_80049FB4;
    case 0x80049FB8u: goto label_80049FB8;
    case 0x80049FBCu: goto label_80049FBC;
    case 0x80049FC0u: goto label_80049FC0;
    case 0x80049FC4u: goto label_80049FC4;
    case 0x80049FC8u: goto label_80049FC8;
    case 0x80049FCCu: goto label_80049FCC;
    case 0x80049FD0u: goto label_80049FD0;
    case 0x80049FD4u: goto label_80049FD4;
    case 0x80049FD8u: goto label_80049FD8;
    case 0x80049FDCu: goto label_80049FDC;
    case 0x80049FE0u: goto label_80049FE0;
    case 0x80049FE4u: goto label_80049FE4;
    case 0x80049FE8u: goto label_80049FE8;
    case 0x80049FECu: goto label_80049FEC;
    case 0x80049FF0u: goto label_80049FF0;
    case 0x80049FF4u: goto label_80049FF4;
    case 0x80049FF8u: goto label_80049FF8;
    case 0x80049FFCu: goto label_80049FFC;
    case 0x8004A000u: goto label_8004A000;
    case 0x8004A004u: goto label_8004A004;
    case 0x8004A008u: goto label_8004A008;
    case 0x8004A00Cu: goto label_8004A00C;
    case 0x8004A010u: goto label_8004A010;
    case 0x8004A014u: goto label_8004A014;
    case 0x8004A018u: goto label_8004A018;
    case 0x8004A01Cu: goto label_8004A01C;
    case 0x8004A020u: goto label_8004A020;
    case 0x8004A024u: goto label_8004A024;
    case 0x8004A028u: goto label_8004A028;
    case 0x8004A02Cu: goto label_8004A02C;
    case 0x8004A030u: goto label_8004A030;
    case 0x8004A034u: goto label_8004A034;
    case 0x8004A038u: goto label_8004A038;
    case 0x8004A03Cu: goto label_8004A03C;
    case 0x8004A040u: goto label_8004A040;
    case 0x8004A044u: goto label_8004A044;
    case 0x8004A048u: goto label_8004A048;
    case 0x8004A04Cu: goto label_8004A04C;
    case 0x8004A050u: goto label_8004A050;
    case 0x8004A054u: goto label_8004A054;
    case 0x8004A058u: goto label_8004A058;
    case 0x8004A05Cu: goto label_8004A05C;
    case 0x8004A060u: goto label_8004A060;
    case 0x8004A064u: goto label_8004A064;
    case 0x8004A068u: goto label_8004A068;
    case 0x8004A06Cu: goto label_8004A06C;
    case 0x8004A070u: goto label_8004A070;
    case 0x8004A074u: goto label_8004A074;
    case 0x8004A078u: goto label_8004A078;
    case 0x8004A07Cu: goto label_8004A07C;
    case 0x8004A080u: goto label_8004A080;
    case 0x8004A084u: goto label_8004A084;
    case 0x8004A088u: goto label_8004A088;
    case 0x8004A08Cu: goto label_8004A08C;
    case 0x8004A090u: goto label_8004A090;
    case 0x8004A094u: goto label_8004A094;
    case 0x8004A098u: goto label_8004A098;
    case 0x8004A09Cu: goto label_8004A09C;
    case 0x8004A0A0u: goto label_8004A0A0;
    case 0x8004A0A4u: goto label_8004A0A4;
    case 0x8004A0A8u: goto label_8004A0A8;
    case 0x8004A0ACu: goto label_8004A0AC;
    case 0x8004A0B0u: goto label_8004A0B0;
    case 0x8004A0B4u: goto label_8004A0B4;
    case 0x8004A0B8u: goto label_8004A0B8;
    case 0x8004A0BCu: goto label_8004A0BC;
    case 0x8004A0C0u: goto label_8004A0C0;
    case 0x8004A0C4u: goto label_8004A0C4;
    case 0x8004A0C8u: goto label_8004A0C8;
    case 0x8004A0CCu: goto label_8004A0CC;
    case 0x8004A0D0u: goto label_8004A0D0;
    case 0x8004A0D4u: goto label_8004A0D4;
    case 0x8004A0D8u: goto label_8004A0D8;
    case 0x8004A0DCu: goto label_8004A0DC;
    case 0x8004A0E0u: goto label_8004A0E0;
    case 0x8004A0E4u: goto label_8004A0E4;
    case 0x8004A0E8u: goto label_8004A0E8;
    case 0x8004A0ECu: goto label_8004A0EC;
    case 0x8004A0F0u: goto label_8004A0F0;
    case 0x8004A0F4u: goto label_8004A0F4;
    case 0x8004A0F8u: goto label_8004A0F8;
    case 0x8004A0FCu: goto label_8004A0FC;
    case 0x8004A100u: goto label_8004A100;
    case 0x8004A104u: goto label_8004A104;
    case 0x8004A108u: goto label_8004A108;
    case 0x8004A10Cu: goto label_8004A10C;
    case 0x8004A110u: goto label_8004A110;
    case 0x8004A114u: goto label_8004A114;
    case 0x8004A118u: goto label_8004A118;
    case 0x8004A11Cu: goto label_8004A11C;
    case 0x8004A120u: goto label_8004A120;
    case 0x8004A124u: goto label_8004A124;
    case 0x8004A128u: goto label_8004A128;
    case 0x8004A12Cu: goto label_8004A12C;
    case 0x8004A130u: goto label_8004A130;
    case 0x8004A134u: goto label_8004A134;
    case 0x8004A138u: goto label_8004A138;
    case 0x8004A13Cu: goto label_8004A13C;
    case 0x8004A140u: goto label_8004A140;
    case 0x8004A144u: goto label_8004A144;
    case 0x8004A148u: goto label_8004A148;
    case 0x8004A14Cu: goto label_8004A14C;
    case 0x8004A150u: goto label_8004A150;
    case 0x8004A154u: goto label_8004A154;
    case 0x8004A158u: goto label_8004A158;
    case 0x8004A15Cu: goto label_8004A15C;
    case 0x8004A160u: goto label_8004A160;
    case 0x8004A164u: goto label_8004A164;
    case 0x8004A168u: goto label_8004A168;
    case 0x8004A16Cu: goto label_8004A16C;
    case 0x8004A170u: goto label_8004A170;
    case 0x8004A174u: goto label_8004A174;
    case 0x8004A178u: goto label_8004A178;
    case 0x8004A17Cu: goto label_8004A17C;
    case 0x8004A180u: goto label_8004A180;
    case 0x8004A184u: goto label_8004A184;
    case 0x8004A188u: goto label_8004A188;
    case 0x8004A18Cu: goto label_8004A18C;
    case 0x8004A190u: goto label_8004A190;
    case 0x8004A194u: goto label_8004A194;
    case 0x8004A198u: goto label_8004A198;
    case 0x8004A19Cu: goto label_8004A19C;
    case 0x8004A1A0u: goto label_8004A1A0;
    case 0x8004A1A4u: goto label_8004A1A4;
    case 0x8004A1A8u: goto label_8004A1A8;
    case 0x8004A1ACu: goto label_8004A1AC;
    case 0x8004A1B0u: goto label_8004A1B0;
    case 0x8004A1B4u: goto label_8004A1B4;
    case 0x8004A1B8u: goto label_8004A1B8;
    case 0x8004A1BCu: goto label_8004A1BC;
    case 0x8004A1C0u: goto label_8004A1C0;
    case 0x8004A1C4u: goto label_8004A1C4;
    case 0x8004A1C8u: goto label_8004A1C8;
    case 0x8004A1CCu: goto label_8004A1CC;
    case 0x8004A1D0u: goto label_8004A1D0;
    case 0x8004A1D4u: goto label_8004A1D4;
    case 0x8004A1D8u: goto label_8004A1D8;
    case 0x8004A1DCu: goto label_8004A1DC;
    case 0x8004A1E0u: goto label_8004A1E0;
    case 0x8004A1E4u: goto label_8004A1E4;
    case 0x8004A1E8u: goto label_8004A1E8;
    case 0x8004A1ECu: goto label_8004A1EC;
    case 0x8004A1F0u: goto label_8004A1F0;
    case 0x8004A1F4u: goto label_8004A1F4;
    case 0x8004A1F8u: goto label_8004A1F8;
    case 0x8004A1FCu: goto label_8004A1FC;
    case 0x8004A200u: goto label_8004A200;
    case 0x8004A204u: goto label_8004A204;
    case 0x8004A208u: goto label_8004A208;
    case 0x8004A20Cu: goto label_8004A20C;
    case 0x8004A210u: goto label_8004A210;
    case 0x8004A214u: goto label_8004A214;
    case 0x8004A218u: goto label_8004A218;
    case 0x8004A21Cu: goto label_8004A21C;
    case 0x8004A220u: goto label_8004A220;
    case 0x8004A224u: goto label_8004A224;
    case 0x8004A228u: goto label_8004A228;
    case 0x8004A22Cu: goto label_8004A22C;
    case 0x8004A230u: goto label_8004A230;
    case 0x8004A234u: goto label_8004A234;
    case 0x8004A238u: goto label_8004A238;
    case 0x8004A23Cu: goto label_8004A23C;
    case 0x8004A240u: goto label_8004A240;
    case 0x8004A244u: goto label_8004A244;
    case 0x8004A248u: goto label_8004A248;
    case 0x8004A24Cu: goto label_8004A24C;
    case 0x8004A250u: goto label_8004A250;
    case 0x8004A254u: goto label_8004A254;
    case 0x8004A258u: goto label_8004A258;
    case 0x8004A25Cu: goto label_8004A25C;
    case 0x8004A260u: goto label_8004A260;
    case 0x8004A264u: goto label_8004A264;
    case 0x8004A268u: goto label_8004A268;
    case 0x8004A26Cu: goto label_8004A26C;
    case 0x8004A270u: goto label_8004A270;
    case 0x8004A274u: goto label_8004A274;
    case 0x8004A278u: goto label_8004A278;
    case 0x8004A27Cu: goto label_8004A27C;
    case 0x8004A280u: goto label_8004A280;
    case 0x8004A284u: goto label_8004A284;
    case 0x8004A288u: goto label_8004A288;
    case 0x8004A28Cu: goto label_8004A28C;
    case 0x8004A290u: goto label_8004A290;
    case 0x8004A294u: goto label_8004A294;
    case 0x8004A298u: goto label_8004A298;
    case 0x8004A29Cu: goto label_8004A29C;
    case 0x8004A2A0u: goto label_8004A2A0;
    case 0x8004A2A4u: goto label_8004A2A4;
    case 0x8004A2A8u: goto label_8004A2A8;
    case 0x8004A2ACu: goto label_8004A2AC;
    case 0x8004A2B0u: goto label_8004A2B0;
    case 0x8004A2B4u: goto label_8004A2B4;
    case 0x8004A2B8u: goto label_8004A2B8;
    case 0x8004A2BCu: goto label_8004A2BC;
    case 0x8004A2C0u: goto label_8004A2C0;
    case 0x8004A2C4u: goto label_8004A2C4;
    case 0x8004A2C8u: goto label_8004A2C8;
    case 0x8004A2CCu: goto label_8004A2CC;
    case 0x8004A2D0u: goto label_8004A2D0;
    case 0x8004A2D4u: goto label_8004A2D4;
    case 0x8004A2D8u: goto label_8004A2D8;
    case 0x8004A2DCu: goto label_8004A2DC;
    case 0x8004A2E0u: goto label_8004A2E0;
    case 0x8004A2E4u: goto label_8004A2E4;
    case 0x8004A2E8u: goto label_8004A2E8;
    case 0x8004A2ECu: goto label_8004A2EC;
    case 0x8004A2F0u: goto label_8004A2F0;
    case 0x8004A2F4u: goto label_8004A2F4;
    case 0x8004A2F8u: goto label_8004A2F8;
    case 0x8004A2FCu: goto label_8004A2FC;
    case 0x8004A300u: goto label_8004A300;
    case 0x8004A304u: goto label_8004A304;
    case 0x8004A308u: goto label_8004A308;
    case 0x8004A30Cu: goto label_8004A30C;
    case 0x8004A310u: goto label_8004A310;
    case 0x8004A314u: goto label_8004A314;
    case 0x8004A318u: goto label_8004A318;
    case 0x8004A31Cu: goto label_8004A31C;
    case 0x8004A320u: goto label_8004A320;
    case 0x8004A324u: goto label_8004A324;
    case 0x8004A328u: goto label_8004A328;
    case 0x8004A32Cu: goto label_8004A32C;
    case 0x8004A330u: goto label_8004A330;
    case 0x8004A334u: goto label_8004A334;
    case 0x8004A338u: goto label_8004A338;
    case 0x8004A33Cu: goto label_8004A33C;
    case 0x8004A340u: goto label_8004A340;
    case 0x8004A344u: goto label_8004A344;
    case 0x8004A348u: goto label_8004A348;
    case 0x8004A34Cu: goto label_8004A34C;
    case 0x8004A350u: goto label_8004A350;
    case 0x8004A354u: goto label_8004A354;
    case 0x8004A358u: goto label_8004A358;
    case 0x8004A35Cu: goto label_8004A35C;
    case 0x8004A360u: goto label_8004A360;
    case 0x8004A364u: goto label_8004A364;
    case 0x8004A368u: goto label_8004A368;
    case 0x8004A36Cu: goto label_8004A36C;
    case 0x8004A370u: goto label_8004A370;
    case 0x8004A374u: goto label_8004A374;
    case 0x8004A378u: goto label_8004A378;
    case 0x8004A37Cu: goto label_8004A37C;
    case 0x8004A380u: goto label_8004A380;
    case 0x8004A384u: goto label_8004A384;
    case 0x8004A388u: goto label_8004A388;
    case 0x8004A38Cu: goto label_8004A38C;
    case 0x8004A390u: goto label_8004A390;
    case 0x8004A394u: goto label_8004A394;
    case 0x8004A398u: goto label_8004A398;
    case 0x8004A39Cu: goto label_8004A39C;
    case 0x8004A3A0u: goto label_8004A3A0;
    case 0x8004A3A4u: goto label_8004A3A4;
    case 0x8004A3A8u: goto label_8004A3A8;
    case 0x8004A3ACu: goto label_8004A3AC;
    case 0x8004A3B0u: goto label_8004A3B0;
    case 0x8004A3B4u: goto label_8004A3B4;
    case 0x8004A3B8u: goto label_8004A3B8;
    case 0x8004A3BCu: goto label_8004A3BC;
    case 0x8004A3C0u: goto label_8004A3C0;
    case 0x8004A3C4u: goto label_8004A3C4;
    case 0x8004A3C8u: goto label_8004A3C8;
    case 0x8004A3CCu: goto label_8004A3CC;
    case 0x8004A3D0u: goto label_8004A3D0;
    case 0x8004A3D4u: goto label_8004A3D4;
    case 0x8004A3D8u: goto label_8004A3D8;
    case 0x8004A3DCu: goto label_8004A3DC;
    case 0x8004A3E0u: goto label_8004A3E0;
    case 0x8004A3E4u: goto label_8004A3E4;
    case 0x8004A3E8u: goto label_8004A3E8;
    case 0x8004A3ECu: goto label_8004A3EC;
    case 0x8004A3F0u: goto label_8004A3F0;
    case 0x8004A3F4u: goto label_8004A3F4;
    case 0x8004A3F8u: goto label_8004A3F8;
    case 0x8004A3FCu: goto label_8004A3FC;
    case 0x8004A400u: goto label_8004A400;
    case 0x8004A404u: goto label_8004A404;
    case 0x8004A408u: goto label_8004A408;
    case 0x8004A40Cu: goto label_8004A40C;
    case 0x8004A410u: goto label_8004A410;
    case 0x8004A414u: goto label_8004A414;
    case 0x8004A418u: goto label_8004A418;
    case 0x8004A41Cu: goto label_8004A41C;
    case 0x8004A420u: goto label_8004A420;
    case 0x8004A424u: goto label_8004A424;
    case 0x8004A428u: goto label_8004A428;
    case 0x8004A42Cu: goto label_8004A42C;
    case 0x8004A430u: goto label_8004A430;
    case 0x8004A434u: goto label_8004A434;
    case 0x8004A438u: goto label_8004A438;
    case 0x8004A43Cu: goto label_8004A43C;
    case 0x8004A440u: goto label_8004A440;
    case 0x8004A444u: goto label_8004A444;
    case 0x8004A448u: goto label_8004A448;
    case 0x8004A44Cu: goto label_8004A44C;
    case 0x8004A450u: goto label_8004A450;
    case 0x8004A454u: goto label_8004A454;
    case 0x8004A458u: goto label_8004A458;
    case 0x8004A45Cu: goto label_8004A45C;
    case 0x8004A460u: goto label_8004A460;
    case 0x8004A464u: goto label_8004A464;
    case 0x8004A468u: goto label_8004A468;
    case 0x8004A46Cu: goto label_8004A46C;
    case 0x8004A470u: goto label_8004A470;
    case 0x8004A474u: goto label_8004A474;
    case 0x8004A478u: goto label_8004A478;
    case 0x8004A47Cu: goto label_8004A47C;
    case 0x8004A480u: goto label_8004A480;
    case 0x8004A484u: goto label_8004A484;
    case 0x8004A488u: goto label_8004A488;
    case 0x8004A48Cu: goto label_8004A48C;
    case 0x8004A490u: goto label_8004A490;
    case 0x8004A494u: goto label_8004A494;
    case 0x8004A498u: goto label_8004A498;
    case 0x8004A49Cu: goto label_8004A49C;
    case 0x8004A4A0u: goto label_8004A4A0;
    case 0x8004A4A4u: goto label_8004A4A4;
    case 0x8004A4A8u: goto label_8004A4A8;
    case 0x8004A4ACu: goto label_8004A4AC;
    case 0x8004A4B0u: goto label_8004A4B0;
    case 0x8004A4B4u: goto label_8004A4B4;
    case 0x8004A4B8u: goto label_8004A4B8;
    case 0x8004A4BCu: goto label_8004A4BC;
    case 0x8004A4C0u: goto label_8004A4C0;
    case 0x8004A4C4u: goto label_8004A4C4;
    case 0x8004A4C8u: goto label_8004A4C8;
    case 0x8004A4CCu: goto label_8004A4CC;
    case 0x8004A4D0u: goto label_8004A4D0;
    case 0x8004A4D4u: goto label_8004A4D4;
    case 0x8004A4D8u: goto label_8004A4D8;
    case 0x8004A4DCu: goto label_8004A4DC;
    case 0x8004A4E0u: goto label_8004A4E0;
    case 0x8004A4E4u: goto label_8004A4E4;
    case 0x8004A4E8u: goto label_8004A4E8;
    case 0x8004A4ECu: goto label_8004A4EC;
    case 0x8004A4F0u: goto label_8004A4F0;
    case 0x8004A4F4u: goto label_8004A4F4;
    case 0x8004A4F8u: goto label_8004A4F8;
    case 0x8004A4FCu: goto label_8004A4FC;
    case 0x8004A500u: goto label_8004A500;
    case 0x8004A504u: goto label_8004A504;
    case 0x8004A508u: goto label_8004A508;
    case 0x8004A50Cu: goto label_8004A50C;
    case 0x8004A510u: goto label_8004A510;
    case 0x8004A514u: goto label_8004A514;
    case 0x8004A518u: goto label_8004A518;
    case 0x8004A51Cu: goto label_8004A51C;
    case 0x8004A520u: goto label_8004A520;
    case 0x8004A524u: goto label_8004A524;
    case 0x8004A528u: goto label_8004A528;
    case 0x8004A52Cu: goto label_8004A52C;
    case 0x8004A530u: goto label_8004A530;
    case 0x8004A534u: goto label_8004A534;
    case 0x8004A538u: goto label_8004A538;
    case 0x8004A53Cu: goto label_8004A53C;
    case 0x8004A540u: goto label_8004A540;
    case 0x8004A544u: goto label_8004A544;
    case 0x8004A548u: goto label_8004A548;
    case 0x8004A54Cu: goto label_8004A54C;
    case 0x8004A550u: goto label_8004A550;
    case 0x8004A554u: goto label_8004A554;
    case 0x8004A558u: goto label_8004A558;
    case 0x8004A55Cu: goto label_8004A55C;
    case 0x8004A560u: goto label_8004A560;
    case 0x8004A564u: goto label_8004A564;
    case 0x8004A568u: goto label_8004A568;
    case 0x8004A56Cu: goto label_8004A56C;
    case 0x8004A570u: goto label_8004A570;
    case 0x8004A574u: goto label_8004A574;
    case 0x8004A578u: goto label_8004A578;
    case 0x8004A57Cu: goto label_8004A57C;
    case 0x8004A580u: goto label_8004A580;
    case 0x8004A584u: goto label_8004A584;
    case 0x8004A588u: goto label_8004A588;
    case 0x8004A58Cu: goto label_8004A58C;
    case 0x8004A590u: goto label_8004A590;
    case 0x8004A594u: goto label_8004A594;
    case 0x8004A598u: goto label_8004A598;
    case 0x8004A59Cu: goto label_8004A59C;
    case 0x8004A5A0u: goto label_8004A5A0;
    case 0x8004A5A4u: goto label_8004A5A4;
    case 0x8004A5A8u: goto label_8004A5A8;
    case 0x8004A5ACu: goto label_8004A5AC;
    case 0x8004A5B0u: goto label_8004A5B0;
    case 0x8004A5B4u: goto label_8004A5B4;
    case 0x8004A5B8u: goto label_8004A5B8;
    case 0x8004A5BCu: goto label_8004A5BC;
    case 0x8004A5C0u: goto label_8004A5C0;
    case 0x8004A5C4u: goto label_8004A5C4;
    case 0x8004A5C8u: goto label_8004A5C8;
    case 0x8004A5CCu: goto label_8004A5CC;
    case 0x8004A5D0u: goto label_8004A5D0;
    case 0x8004A5D4u: goto label_8004A5D4;
    case 0x8004A5D8u: goto label_8004A5D8;
    case 0x8004A5DCu: goto label_8004A5DC;
    case 0x8004A5E0u: goto label_8004A5E0;
    case 0x8004A5E4u: goto label_8004A5E4;
    case 0x8004A5E8u: goto label_8004A5E8;
    case 0x8004A5ECu: goto label_8004A5EC;
    case 0x8004A5F0u: goto label_8004A5F0;
    case 0x8004A5F4u: goto label_8004A5F4;
    case 0x8004A5F8u: goto label_8004A5F8;
    case 0x8004A5FCu: goto label_8004A5FC;
    case 0x8004A600u: goto label_8004A600;
    case 0x8004A604u: goto label_8004A604;
    case 0x8004A608u: goto label_8004A608;
    case 0x8004A60Cu: goto label_8004A60C;
    case 0x8004A610u: goto label_8004A610;
    case 0x8004A614u: goto label_8004A614;
    case 0x8004A618u: goto label_8004A618;
    case 0x8004A61Cu: goto label_8004A61C;
    case 0x8004A620u: goto label_8004A620;
    case 0x8004A624u: goto label_8004A624;
    case 0x8004A628u: goto label_8004A628;
    case 0x8004A62Cu: goto label_8004A62C;
    case 0x8004A630u: goto label_8004A630;
    case 0x8004A634u: goto label_8004A634;
    case 0x8004A638u: goto label_8004A638;
    case 0x8004A63Cu: goto label_8004A63C;
    case 0x8004A640u: goto label_8004A640;
    case 0x8004A644u: goto label_8004A644;
    case 0x8004A648u: goto label_8004A648;
    case 0x8004A64Cu: goto label_8004A64C;
    case 0x8004A650u: goto label_8004A650;
    case 0x8004A654u: goto label_8004A654;
    case 0x8004A658u: goto label_8004A658;
    case 0x8004A65Cu: goto label_8004A65C;
    case 0x8004A660u: goto label_8004A660;
    case 0x8004A664u: goto label_8004A664;
    case 0x8004A668u: goto label_8004A668;
    case 0x8004A66Cu: goto label_8004A66C;
    case 0x8004A670u: goto label_8004A670;
    case 0x8004A674u: goto label_8004A674;
    case 0x8004A678u: goto label_8004A678;
    case 0x8004A67Cu: goto label_8004A67C;
    case 0x8004A680u: goto label_8004A680;
    case 0x8004A684u: goto label_8004A684;
    case 0x8004A688u: goto label_8004A688;
    case 0x8004A68Cu: goto label_8004A68C;
    case 0x8004A690u: goto label_8004A690;
    case 0x8004A694u: goto label_8004A694;
    case 0x8004A698u: goto label_8004A698;
    case 0x8004A69Cu: goto label_8004A69C;
    case 0x8004A6A0u: goto label_8004A6A0;
    case 0x8004A6A4u: goto label_8004A6A4;
    case 0x8004A6A8u: goto label_8004A6A8;
    case 0x8004A6ACu: goto label_8004A6AC;
    case 0x8004A6B0u: goto label_8004A6B0;
    case 0x8004A6B4u: goto label_8004A6B4;
    case 0x8004A6B8u: goto label_8004A6B8;
    case 0x8004A6BCu: goto label_8004A6BC;
    case 0x8004A6C0u: goto label_8004A6C0;
    case 0x8004A6C4u: goto label_8004A6C4;
    case 0x8004A6C8u: goto label_8004A6C8;
    case 0x8004A6CCu: goto label_8004A6CC;
    case 0x8004A6D0u: goto label_8004A6D0;
    case 0x8004A6D4u: goto label_8004A6D4;
    case 0x8004A6D8u: goto label_8004A6D8;
    case 0x8004A6DCu: goto label_8004A6DC;
    case 0x8004A6E0u: goto label_8004A6E0;
    case 0x8004A6E4u: goto label_8004A6E4;
    case 0x8004A6E8u: goto label_8004A6E8;
    case 0x8004A6ECu: goto label_8004A6EC;
    case 0x8004A6F0u: goto label_8004A6F0;
    case 0x8004A6F4u: goto label_8004A6F4;
    case 0x8004A6F8u: goto label_8004A6F8;
    case 0x8004A6FCu: goto label_8004A6FC;
    case 0x8004A700u: goto label_8004A700;
    case 0x8004A704u: goto label_8004A704;
    case 0x8004A708u: goto label_8004A708;
    case 0x8004A70Cu: goto label_8004A70C;
    case 0x8004A710u: goto label_8004A710;
    case 0x8004A714u: goto label_8004A714;
    case 0x8004A718u: goto label_8004A718;
    case 0x8004A71Cu: goto label_8004A71C;
    case 0x8004A720u: goto label_8004A720;
    case 0x8004A724u: goto label_8004A724;
    case 0x8004A728u: goto label_8004A728;
    case 0x8004A72Cu: goto label_8004A72C;
    case 0x8004A730u: goto label_8004A730;
    case 0x8004A734u: goto label_8004A734;
    case 0x8004A738u: goto label_8004A738;
    case 0x8004A73Cu: goto label_8004A73C;
    case 0x8004A740u: goto label_8004A740;
    case 0x8004A744u: goto label_8004A744;
    case 0x8004A748u: goto label_8004A748;
    case 0x8004A74Cu: goto label_8004A74C;
    case 0x8004A750u: goto label_8004A750;
    case 0x8004A754u: goto label_8004A754;
    case 0x8004A758u: goto label_8004A758;
    case 0x8004A75Cu: goto label_8004A75C;
    case 0x8004A760u: goto label_8004A760;
    case 0x8004A764u: goto label_8004A764;
    case 0x8004A768u: goto label_8004A768;
    case 0x8004A76Cu: goto label_8004A76C;
    case 0x8004A770u: goto label_8004A770;
    case 0x8004A774u: goto label_8004A774;
    case 0x8004A778u: goto label_8004A778;
    case 0x8004A77Cu: goto label_8004A77C;
    case 0x8004A780u: goto label_8004A780;
    case 0x8004A784u: goto label_8004A784;
    case 0x8004A788u: goto label_8004A788;
    case 0x8004A78Cu: goto label_8004A78C;
    case 0x8004A790u: goto label_8004A790;
    case 0x8004A794u: goto label_8004A794;
    case 0x8004A798u: goto label_8004A798;
    case 0x8004A79Cu: goto label_8004A79C;
    case 0x8004A7A0u: goto label_8004A7A0;
    case 0x8004A7A4u: goto label_8004A7A4;
    case 0x8004A7A8u: goto label_8004A7A8;
    case 0x8004A7ACu: goto label_8004A7AC;
    case 0x8004A7B0u: goto label_8004A7B0;
    case 0x8004A7B4u: goto label_8004A7B4;
    case 0x8004A7B8u: goto label_8004A7B8;
    case 0x8004A7BCu: goto label_8004A7BC;
    case 0x8004A7C0u: goto label_8004A7C0;
    case 0x8004A7C4u: goto label_8004A7C4;
    case 0x8004A7C8u: goto label_8004A7C8;
    case 0x8004A7CCu: goto label_8004A7CC;
    case 0x8004A7D0u: goto label_8004A7D0;
    case 0x8004A7D4u: goto label_8004A7D4;
    case 0x8004A7D8u: goto label_8004A7D8;
    case 0x8004A7DCu: goto label_8004A7DC;
    case 0x8004A7E0u: goto label_8004A7E0;
    case 0x8004A7E4u: goto label_8004A7E4;
    case 0x8004A7E8u: goto label_8004A7E8;
    case 0x8004A7ECu: goto label_8004A7EC;
    case 0x8004A7F0u: goto label_8004A7F0;
    case 0x8004A7F4u: goto label_8004A7F4;
    case 0x8004A7F8u: goto label_8004A7F8;
    case 0x8004A7FCu: goto label_8004A7FC;
    case 0x8004A800u: goto label_8004A800;
    case 0x8004A804u: goto label_8004A804;
    case 0x8004A808u: goto label_8004A808;
    case 0x8004A80Cu: goto label_8004A80C;
    case 0x8004A810u: goto label_8004A810;
    case 0x8004A814u: goto label_8004A814;
    case 0x8004A818u: goto label_8004A818;
    case 0x8004A81Cu: goto label_8004A81C;
    case 0x8004A820u: goto label_8004A820;
    case 0x8004A824u: goto label_8004A824;
    case 0x8004A828u: goto label_8004A828;
    case 0x8004A82Cu: goto label_8004A82C;
    case 0x8004A830u: goto label_8004A830;
    case 0x8004A834u: goto label_8004A834;
    case 0x8004A838u: goto label_8004A838;
    case 0x8004A83Cu: goto label_8004A83C;
    case 0x8004A840u: goto label_8004A840;
    case 0x8004A844u: goto label_8004A844;
    case 0x8004A848u: goto label_8004A848;
    case 0x8004A84Cu: goto label_8004A84C;
    case 0x8004A850u: goto label_8004A850;
    case 0x8004A854u: goto label_8004A854;
    case 0x8004A858u: goto label_8004A858;
    case 0x8004A85Cu: goto label_8004A85C;
    case 0x8004A860u: goto label_8004A860;
    case 0x8004A864u: goto label_8004A864;
    case 0x8004A868u: goto label_8004A868;
    case 0x8004A86Cu: goto label_8004A86C;
    case 0x8004A870u: goto label_8004A870;
    case 0x8004A874u: goto label_8004A874;
    case 0x8004A878u: goto label_8004A878;
    case 0x8004A87Cu: goto label_8004A87C;
    case 0x8004A880u: goto label_8004A880;
    case 0x8004A884u: goto label_8004A884;
    case 0x8004A888u: goto label_8004A888;
    case 0x8004A88Cu: goto label_8004A88C;
    case 0x8004A890u: goto label_8004A890;
    case 0x8004A894u: goto label_8004A894;
    case 0x8004A898u: goto label_8004A898;
    case 0x8004A89Cu: goto label_8004A89C;
    case 0x8004A8A0u: goto label_8004A8A0;
    case 0x8004A8A4u: goto label_8004A8A4;
    case 0x8004A8A8u: goto label_8004A8A8;
    case 0x8004A8ACu: goto label_8004A8AC;
    case 0x8004A8B0u: goto label_8004A8B0;
    case 0x8004A8B4u: goto label_8004A8B4;
    case 0x8004A8B8u: goto label_8004A8B8;
    case 0x8004A8BCu: goto label_8004A8BC;
    case 0x8004A8C0u: goto label_8004A8C0;
    case 0x8004A8C4u: goto label_8004A8C4;
    case 0x8004A8C8u: goto label_8004A8C8;
    case 0x8004A8CCu: goto label_8004A8CC;
    case 0x8004A8D0u: goto label_8004A8D0;
    case 0x8004A8D4u: goto label_8004A8D4;
    case 0x8004A8D8u: goto label_8004A8D8;
    case 0x8004A8DCu: goto label_8004A8DC;
    case 0x8004A8E0u: goto label_8004A8E0;
    case 0x8004A8E4u: goto label_8004A8E4;
    case 0x8004A8E8u: goto label_8004A8E8;
    case 0x8004A8ECu: goto label_8004A8EC;
    case 0x8004A8F0u: goto label_8004A8F0;
    case 0x8004A8F4u: goto label_8004A8F4;
    case 0x8004A8F8u: goto label_8004A8F8;
    case 0x8004A8FCu: goto label_8004A8FC;
    case 0x8004A900u: goto label_8004A900;
    case 0x8004A904u: goto label_8004A904;
    case 0x8004A908u: goto label_8004A908;
    case 0x8004A90Cu: goto label_8004A90C;
    case 0x8004A910u: goto label_8004A910;
    case 0x8004A914u: goto label_8004A914;
    case 0x8004A918u: goto label_8004A918;
    case 0x8004A91Cu: goto label_8004A91C;
    case 0x8004A920u: goto label_8004A920;
    case 0x8004A924u: goto label_8004A924;
    case 0x8004A928u: goto label_8004A928;
    case 0x8004A92Cu: goto label_8004A92C;
    case 0x8004A930u: goto label_8004A930;
    case 0x8004A934u: goto label_8004A934;
    case 0x8004A938u: goto label_8004A938;
    case 0x8004A93Cu: goto label_8004A93C;
    case 0x8004A940u: goto label_8004A940;
    case 0x8004A944u: goto label_8004A944;
    case 0x8004A948u: goto label_8004A948;
    case 0x8004A94Cu: goto label_8004A94C;
    case 0x8004A950u: goto label_8004A950;
    case 0x8004A954u: goto label_8004A954;
    case 0x8004A958u: goto label_8004A958;
    case 0x8004A95Cu: goto label_8004A95C;
    case 0x8004A960u: goto label_8004A960;
    case 0x8004A964u: goto label_8004A964;
    case 0x8004A968u: goto label_8004A968;
    case 0x8004A96Cu: goto label_8004A96C;
    case 0x8004A970u: goto label_8004A970;
    case 0x8004A974u: goto label_8004A974;
    case 0x8004A978u: goto label_8004A978;
    case 0x8004A97Cu: goto label_8004A97C;
    case 0x8004A980u: goto label_8004A980;
    case 0x8004A984u: goto label_8004A984;
    case 0x8004A988u: goto label_8004A988;
    case 0x8004A98Cu: goto label_8004A98C;
    case 0x8004A990u: goto label_8004A990;
    case 0x8004A994u: goto label_8004A994;
    case 0x8004A998u: goto label_8004A998;
    case 0x8004A99Cu: goto label_8004A99C;
    case 0x8004A9A0u: goto label_8004A9A0;
    case 0x8004A9A4u: goto label_8004A9A4;
    case 0x8004A9A8u: goto label_8004A9A8;
    case 0x8004A9ACu: goto label_8004A9AC;
    case 0x8004A9B0u: goto label_8004A9B0;
    case 0x8004A9B4u: goto label_8004A9B4;
    case 0x8004A9B8u: goto label_8004A9B8;
    case 0x8004A9BCu: goto label_8004A9BC;
    case 0x8004A9C0u: goto label_8004A9C0;
    case 0x8004A9C4u: goto label_8004A9C4;
    case 0x8004A9C8u: goto label_8004A9C8;
    case 0x8004A9CCu: goto label_8004A9CC;
    case 0x8004A9D0u: goto label_8004A9D0;
    case 0x8004A9D4u: goto label_8004A9D4;
    case 0x8004A9D8u: goto label_8004A9D8;
    case 0x8004A9DCu: goto label_8004A9DC;
    case 0x8004A9E0u: goto label_8004A9E0;
    case 0x8004A9E4u: goto label_8004A9E4;
    case 0x8004A9E8u: goto label_8004A9E8;
    case 0x8004A9ECu: goto label_8004A9EC;
    case 0x8004A9F0u: goto label_8004A9F0;
    case 0x8004A9F4u: goto label_8004A9F4;
    case 0x8004A9F8u: goto label_8004A9F8;
    case 0x8004A9FCu: goto label_8004A9FC;
    case 0x8004AA00u: goto label_8004AA00;
    case 0x8004AA04u: goto label_8004AA04;
    case 0x8004AA08u: goto label_8004AA08;
    case 0x8004AA0Cu: goto label_8004AA0C;
    case 0x8004AA10u: goto label_8004AA10;
    case 0x8004AA14u: goto label_8004AA14;
    case 0x8004AA18u: goto label_8004AA18;
    case 0x8004AA1Cu: goto label_8004AA1C;
    case 0x8004AA20u: goto label_8004AA20;
    case 0x8004AA24u: goto label_8004AA24;
    case 0x8004AA28u: goto label_8004AA28;
    case 0x8004AA2Cu: goto label_8004AA2C;
    case 0x8004AA30u: goto label_8004AA30;
    case 0x8004AA34u: goto label_8004AA34;
    case 0x8004AA38u: goto label_8004AA38;
    case 0x8004AA3Cu: goto label_8004AA3C;
    case 0x8004AA40u: goto label_8004AA40;
    case 0x8004AA44u: goto label_8004AA44;
    case 0x8004AA48u: goto label_8004AA48;
    case 0x8004AA4Cu: goto label_8004AA4C;
    case 0x8004AA50u: goto label_8004AA50;
    case 0x8004AA54u: goto label_8004AA54;
    case 0x8004AA58u: goto label_8004AA58;
    case 0x8004AA5Cu: goto label_8004AA5C;
    case 0x8004AA60u: goto label_8004AA60;
    case 0x8004AA64u: goto label_8004AA64;
    case 0x8004AA68u: goto label_8004AA68;
    case 0x8004AA6Cu: goto label_8004AA6C;
    case 0x8004AA70u: goto label_8004AA70;
    case 0x8004AA74u: goto label_8004AA74;
    case 0x8004AA78u: goto label_8004AA78;
    case 0x8004AA7Cu: goto label_8004AA7C;
    case 0x8004AA80u: goto label_8004AA80;
    case 0x8004AA84u: goto label_8004AA84;
    case 0x8004AA88u: goto label_8004AA88;
    case 0x8004AA8Cu: goto label_8004AA8C;
    case 0x8004AA90u: goto label_8004AA90;
    case 0x8004AA94u: goto label_8004AA94;
    case 0x8004AA98u: goto label_8004AA98;
    case 0x8004AA9Cu: goto label_8004AA9C;
    case 0x8004AAA0u: goto label_8004AAA0;
    case 0x8004AAA4u: goto label_8004AAA4;
    case 0x8004AAA8u: goto label_8004AAA8;
    case 0x8004AAACu: goto label_8004AAAC;
    case 0x8004AAB0u: goto label_8004AAB0;
    case 0x8004AAB4u: goto label_8004AAB4;
    case 0x8004AAB8u: goto label_8004AAB8;
    case 0x8004AABCu: goto label_8004AABC;
    case 0x8004AAC0u: goto label_8004AAC0;
    case 0x8004AAC4u: goto label_8004AAC4;
    case 0x8004AAC8u: goto label_8004AAC8;
    case 0x8004AACCu: goto label_8004AACC;
    case 0x8004AAD0u: goto label_8004AAD0;
    case 0x8004AAD4u: goto label_8004AAD4;
    case 0x8004AAD8u: goto label_8004AAD8;
    case 0x8004AADCu: goto label_8004AADC;
    case 0x8004AAE0u: goto label_8004AAE0;
    case 0x8004AAE4u: goto label_8004AAE4;
    case 0x8004AAE8u: goto label_8004AAE8;
    case 0x8004AAECu: goto label_8004AAEC;
    case 0x8004AAF0u: goto label_8004AAF0;
    case 0x8004AAF4u: goto label_8004AAF4;
    case 0x8004AAF8u: goto label_8004AAF8;
    case 0x8004AAFCu: goto label_8004AAFC;
    case 0x8004AB00u: goto label_8004AB00;
    case 0x8004AB04u: goto label_8004AB04;
    case 0x8004AB08u: goto label_8004AB08;
    case 0x8004AB0Cu: goto label_8004AB0C;
    case 0x8004AB10u: goto label_8004AB10;
    case 0x8004AB14u: goto label_8004AB14;
    case 0x8004AB18u: goto label_8004AB18;
    case 0x8004AB1Cu: goto label_8004AB1C;
    case 0x8004AB20u: goto label_8004AB20;
    case 0x8004AB24u: goto label_8004AB24;
    case 0x8004AB28u: goto label_8004AB28;
    case 0x8004AB2Cu: goto label_8004AB2C;
    case 0x8004AB30u: goto label_8004AB30;
    case 0x8004AB34u: goto label_8004AB34;
    case 0x8004AB38u: goto label_8004AB38;
    case 0x8004AB3Cu: goto label_8004AB3C;
    case 0x8004AB40u: goto label_8004AB40;
    case 0x8004AB44u: goto label_8004AB44;
    case 0x8004AB48u: goto label_8004AB48;
    case 0x8004AB4Cu: goto label_8004AB4C;
    case 0x8004AB50u: goto label_8004AB50;
    case 0x8004AB54u: goto label_8004AB54;
    case 0x8004AB58u: goto label_8004AB58;
    case 0x8004AB5Cu: goto label_8004AB5C;
    case 0x8004AB60u: goto label_8004AB60;
    case 0x8004AB64u: goto label_8004AB64;
    case 0x8004AB68u: goto label_8004AB68;
    case 0x8004AB6Cu: goto label_8004AB6C;
    case 0x8004AB70u: goto label_8004AB70;
    case 0x8004AB74u: goto label_8004AB74;
    case 0x8004AB78u: goto label_8004AB78;
    case 0x8004AB7Cu: goto label_8004AB7C;
    case 0x8004AB80u: goto label_8004AB80;
    case 0x8004AB84u: goto label_8004AB84;
    case 0x8004AB88u: goto label_8004AB88;
    case 0x8004AB8Cu: goto label_8004AB8C;
    case 0x8004AB90u: goto label_8004AB90;
    case 0x8004AB94u: goto label_8004AB94;
    case 0x8004AB98u: goto label_8004AB98;
    case 0x8004AB9Cu: goto label_8004AB9C;
    case 0x8004ABA0u: goto label_8004ABA0;
    case 0x8004ABA4u: goto label_8004ABA4;
    case 0x8004ABA8u: goto label_8004ABA8;
    case 0x8004ABACu: goto label_8004ABAC;
    case 0x8004ABB0u: goto label_8004ABB0;
    case 0x8004ABB4u: goto label_8004ABB4;
    case 0x8004ABB8u: goto label_8004ABB8;
    case 0x8004ABBCu: goto label_8004ABBC;
    case 0x8004ABC0u: goto label_8004ABC0;
    case 0x8004ABC4u: goto label_8004ABC4;
    case 0x8004ABC8u: goto label_8004ABC8;
    case 0x8004ABCCu: goto label_8004ABCC;
    case 0x8004ABD0u: goto label_8004ABD0;
    case 0x8004ABD4u: goto label_8004ABD4;
    case 0x8004ABD8u: goto label_8004ABD8;
    case 0x8004ABDCu: goto label_8004ABDC;
    case 0x8004ABE0u: goto label_8004ABE0;
    case 0x8004ABE4u: goto label_8004ABE4;
    case 0x8004ABE8u: goto label_8004ABE8;
    case 0x8004ABECu: goto label_8004ABEC;
    case 0x8004ABF0u: goto label_8004ABF0;
    case 0x8004ABF4u: goto label_8004ABF4;
    case 0x8004ABF8u: goto label_8004ABF8;
    case 0x8004ABFCu: goto label_8004ABFC;
    case 0x8004AC00u: goto label_8004AC00;
    case 0x8004AC04u: goto label_8004AC04;
    case 0x8004AC08u: goto label_8004AC08;
    case 0x8004AC0Cu: goto label_8004AC0C;
    case 0x8004AC10u: goto label_8004AC10;
    case 0x8004AC14u: goto label_8004AC14;
    case 0x8004AC18u: goto label_8004AC18;
    case 0x8004AC1Cu: goto label_8004AC1C;
    case 0x8004AC20u: goto label_8004AC20;
    case 0x8004AC24u: goto label_8004AC24;
    case 0x8004AC28u: goto label_8004AC28;
    case 0x8004AC2Cu: goto label_8004AC2C;
    case 0x8004AC30u: goto label_8004AC30;
    case 0x8004AC34u: goto label_8004AC34;
    case 0x8004AC38u: goto label_8004AC38;
    case 0x8004AC3Cu: goto label_8004AC3C;
    case 0x8004AC40u: goto label_8004AC40;
    case 0x8004AC44u: goto label_8004AC44;
    case 0x8004AC48u: goto label_8004AC48;
    case 0x8004AC4Cu: goto label_8004AC4C;
    case 0x8004AC50u: goto label_8004AC50;
    case 0x8004AC54u: goto label_8004AC54;
    case 0x8004AC58u: goto label_8004AC58;
    case 0x8004AC5Cu: goto label_8004AC5C;
    case 0x8004AC60u: goto label_8004AC60;
    case 0x8004AC64u: goto label_8004AC64;
    case 0x8004AC68u: goto label_8004AC68;
    case 0x8004AC6Cu: goto label_8004AC6C;
    case 0x8004AC70u: goto label_8004AC70;
    case 0x8004AC74u: goto label_8004AC74;
    case 0x8004AC78u: goto label_8004AC78;
    case 0x8004AC7Cu: goto label_8004AC7C;
    case 0x8004AC80u: goto label_8004AC80;
    case 0x8004AC84u: goto label_8004AC84;
    case 0x8004AC88u: goto label_8004AC88;
    case 0x8004AC8Cu: goto label_8004AC8C;
    case 0x8004AC90u: goto label_8004AC90;
    case 0x8004AC94u: goto label_8004AC94;
    case 0x8004AC98u: goto label_8004AC98;
    case 0x8004AC9Cu: goto label_8004AC9C;
    case 0x8004ACA0u: goto label_8004ACA0;
    case 0x8004ACA4u: goto label_8004ACA4;
    case 0x8004ACA8u: goto label_8004ACA8;
    case 0x8004ACACu: goto label_8004ACAC;
    case 0x8004ACB0u: goto label_8004ACB0;
    case 0x8004ACB4u: goto label_8004ACB4;
    case 0x8004ACB8u: goto label_8004ACB8;
    case 0x8004ACBCu: goto label_8004ACBC;
    case 0x8004ACC0u: goto label_8004ACC0;
    case 0x8004ACC4u: goto label_8004ACC4;
    case 0x8004ACC8u: goto label_8004ACC8;
    case 0x8004ACCCu: goto label_8004ACCC;
    case 0x8004ACD0u: goto label_8004ACD0;
    case 0x8004ACD4u: goto label_8004ACD4;
    case 0x8004ACD8u: goto label_8004ACD8;
    case 0x8004ACDCu: goto label_8004ACDC;
    case 0x8004ACE0u: goto label_8004ACE0;
    case 0x8004ACE4u: goto label_8004ACE4;
    case 0x8004ACE8u: goto label_8004ACE8;
    case 0x8004ACECu: goto label_8004ACEC;
    case 0x8004ACF0u: goto label_8004ACF0;
    case 0x8004ACF4u: goto label_8004ACF4;
    case 0x8004ACF8u: goto label_8004ACF8;
    case 0x8004ACFCu: goto label_8004ACFC;
    case 0x8004AD00u: goto label_8004AD00;
    case 0x8004AD04u: goto label_8004AD04;
    case 0x8004AD08u: goto label_8004AD08;
    case 0x8004AD0Cu: goto label_8004AD0C;
    case 0x8004AD10u: goto label_8004AD10;
    case 0x8004AD14u: goto label_8004AD14;
    case 0x8004AD18u: goto label_8004AD18;
    case 0x8004AD1Cu: goto label_8004AD1C;
    case 0x8004AD20u: goto label_8004AD20;
    case 0x8004AD24u: goto label_8004AD24;
    case 0x8004AD28u: goto label_8004AD28;
    case 0x8004AD2Cu: goto label_8004AD2C;
    case 0x8004AD30u: goto label_8004AD30;
    case 0x8004AD34u: goto label_8004AD34;
    case 0x8004AD38u: goto label_8004AD38;
    case 0x8004AD3Cu: goto label_8004AD3C;
    case 0x8004AD40u: goto label_8004AD40;
    case 0x8004AD44u: goto label_8004AD44;
    case 0x8004AD48u: goto label_8004AD48;
    case 0x8004AD4Cu: goto label_8004AD4C;
    case 0x8004AD50u: goto label_8004AD50;
    case 0x8004AD54u: goto label_8004AD54;
    case 0x8004AD58u: goto label_8004AD58;
    case 0x8004AD5Cu: goto label_8004AD5C;
    case 0x8004AD60u: goto label_8004AD60;
    case 0x8004AD64u: goto label_8004AD64;
    case 0x8004AD68u: goto label_8004AD68;
    case 0x8004AD6Cu: goto label_8004AD6C;
    case 0x8004AD70u: goto label_8004AD70;
    case 0x8004AD74u: goto label_8004AD74;
    case 0x8004AD78u: goto label_8004AD78;
    case 0x8004AD7Cu: goto label_8004AD7C;
    case 0x8004AD80u: goto label_8004AD80;
    case 0x8004AD84u: goto label_8004AD84;
    case 0x8004AD88u: goto label_8004AD88;
    case 0x8004AD8Cu: goto label_8004AD8C;
    case 0x8004AD90u: goto label_8004AD90;
    case 0x8004AD94u: goto label_8004AD94;
    case 0x8004AD98u: goto label_8004AD98;
    case 0x8004AD9Cu: goto label_8004AD9C;
    case 0x8004ADA0u: goto label_8004ADA0;
    case 0x8004ADA4u: goto label_8004ADA4;
    case 0x8004ADA8u: goto label_8004ADA8;
    case 0x8004ADACu: goto label_8004ADAC;
    case 0x8004ADB0u: goto label_8004ADB0;
    case 0x8004ADB4u: goto label_8004ADB4;
    case 0x8004ADB8u: goto label_8004ADB8;
    case 0x8004ADBCu: goto label_8004ADBC;
    case 0x8004ADC0u: goto label_8004ADC0;
    case 0x8004ADC4u: goto label_8004ADC4;
    case 0x8004ADC8u: goto label_8004ADC8;
    case 0x8004ADCCu: goto label_8004ADCC;
    case 0x8004ADD0u: goto label_8004ADD0;
    case 0x8004ADD4u: goto label_8004ADD4;
    case 0x8004ADD8u: goto label_8004ADD8;
    case 0x8004ADDCu: goto label_8004ADDC;
    case 0x8004ADE0u: goto label_8004ADE0;
    case 0x8004ADE4u: goto label_8004ADE4;
    case 0x8004ADE8u: goto label_8004ADE8;
    case 0x8004ADECu: goto label_8004ADEC;
    case 0x8004ADF0u: goto label_8004ADF0;
    case 0x8004ADF4u: goto label_8004ADF4;
    case 0x8004ADF8u: goto label_8004ADF8;
    case 0x8004ADFCu: goto label_8004ADFC;
    case 0x8004AE00u: goto label_8004AE00;
    case 0x8004AE04u: goto label_8004AE04;
    case 0x8004AE08u: goto label_8004AE08;
    case 0x8004AE0Cu: goto label_8004AE0C;
    case 0x8004AE10u: goto label_8004AE10;
    case 0x8004AE14u: goto label_8004AE14;
    case 0x8004AE18u: goto label_8004AE18;
    case 0x8004AE1Cu: goto label_8004AE1C;
    case 0x8004AE20u: goto label_8004AE20;
    case 0x8004AE24u: goto label_8004AE24;
    case 0x8004AE28u: goto label_8004AE28;
    case 0x8004AE2Cu: goto label_8004AE2C;
    case 0x8004AE30u: goto label_8004AE30;
    case 0x8004AE34u: goto label_8004AE34;
    case 0x8004AE38u: goto label_8004AE38;
    case 0x8004AE3Cu: goto label_8004AE3C;
    case 0x8004AE40u: goto label_8004AE40;
    case 0x8004AE44u: goto label_8004AE44;
    case 0x8004AE48u: goto label_8004AE48;
    case 0x8004AE4Cu: goto label_8004AE4C;
    case 0x8004AE50u: goto label_8004AE50;
    case 0x8004AE54u: goto label_8004AE54;
    case 0x8004AE58u: goto label_8004AE58;
    case 0x8004AE5Cu: goto label_8004AE5C;
    case 0x8004AE60u: goto label_8004AE60;
    case 0x8004AE64u: goto label_8004AE64;
    case 0x8004AE68u: goto label_8004AE68;
    case 0x8004AE6Cu: goto label_8004AE6C;
    case 0x8004AE70u: goto label_8004AE70;
    case 0x8004AE74u: goto label_8004AE74;
    case 0x8004AE78u: goto label_8004AE78;
    case 0x8004AE7Cu: goto label_8004AE7C;
    case 0x8004AE80u: goto label_8004AE80;
    case 0x8004AE84u: goto label_8004AE84;
    case 0x8004AE88u: goto label_8004AE88;
    case 0x8004AE8Cu: goto label_8004AE8C;
    case 0x8004AE90u: goto label_8004AE90;
    case 0x8004AE94u: goto label_8004AE94;
    case 0x8004AE98u: goto label_8004AE98;
    case 0x8004AE9Cu: goto label_8004AE9C;
    case 0x8004AEA0u: goto label_8004AEA0;
    case 0x8004AEA4u: goto label_8004AEA4;
    case 0x8004AEA8u: goto label_8004AEA8;
    case 0x8004AEACu: goto label_8004AEAC;
    case 0x8004AEB0u: goto label_8004AEB0;
    case 0x8004AEB4u: goto label_8004AEB4;
    case 0x8004AEB8u: goto label_8004AEB8;
    case 0x8004AEBCu: goto label_8004AEBC;
    case 0x8004AEC0u: goto label_8004AEC0;
    case 0x8004AEC4u: goto label_8004AEC4;
    case 0x8004AEC8u: goto label_8004AEC8;
    case 0x8004AECCu: goto label_8004AECC;
    case 0x8004AED0u: goto label_8004AED0;
    case 0x8004AED4u: goto label_8004AED4;
    case 0x8004AED8u: goto label_8004AED8;
    case 0x8004AEDCu: goto label_8004AEDC;
    case 0x8004AEE0u: goto label_8004AEE0;
    case 0x8004AEE4u: goto label_8004AEE4;
    case 0x8004AEE8u: goto label_8004AEE8;
    case 0x8004AEECu: goto label_8004AEEC;
    case 0x8004AEF0u: goto label_8004AEF0;
    case 0x8004AEF4u: goto label_8004AEF4;
    case 0x8004AEF8u: goto label_8004AEF8;
    case 0x8004AEFCu: goto label_8004AEFC;
    case 0x8004AF00u: goto label_8004AF00;
    case 0x8004AF04u: goto label_8004AF04;
    case 0x8004AF08u: goto label_8004AF08;
    case 0x8004AF0Cu: goto label_8004AF0C;
    case 0x8004AF10u: goto label_8004AF10;
    case 0x8004AF14u: goto label_8004AF14;
    case 0x8004AF18u: goto label_8004AF18;
    case 0x8004AF1Cu: goto label_8004AF1C;
    case 0x8004AF20u: goto label_8004AF20;
    case 0x8004AF24u: goto label_8004AF24;
    case 0x8004AF28u: goto label_8004AF28;
    case 0x8004AF2Cu: goto label_8004AF2C;
    case 0x8004AF30u: goto label_8004AF30;
    case 0x8004AF34u: goto label_8004AF34;
    case 0x8004AF38u: goto label_8004AF38;
    case 0x8004AF3Cu: goto label_8004AF3C;
    case 0x8004AF40u: goto label_8004AF40;
    case 0x8004AF44u: goto label_8004AF44;
    case 0x8004AF48u: goto label_8004AF48;
    case 0x8004AF4Cu: goto label_8004AF4C;
    case 0x8004AF50u: goto label_8004AF50;
    case 0x8004AF54u: goto label_8004AF54;
    case 0x8004AF58u: goto label_8004AF58;
    case 0x8004AF5Cu: goto label_8004AF5C;
    case 0x8004AF60u: goto label_8004AF60;
    case 0x8004AF64u: goto label_8004AF64;
    case 0x8004AF68u: goto label_8004AF68;
    case 0x8004AF6Cu: goto label_8004AF6C;
    case 0x8004AF70u: goto label_8004AF70;
    case 0x8004AF74u: goto label_8004AF74;
    case 0x8004AF78u: goto label_8004AF78;
    case 0x8004AF7Cu: goto label_8004AF7C;
    case 0x8004AF80u: goto label_8004AF80;
    case 0x8004AF84u: goto label_8004AF84;
    case 0x8004AF88u: goto label_8004AF88;
    case 0x8004AF8Cu: goto label_8004AF8C;
    case 0x8004AF90u: goto label_8004AF90;
    case 0x8004AF94u: goto label_8004AF94;
    case 0x8004AF98u: goto label_8004AF98;
    case 0x8004AF9Cu: goto label_8004AF9C;
    case 0x8004AFA0u: goto label_8004AFA0;
    case 0x8004AFA4u: goto label_8004AFA4;
    case 0x8004AFA8u: goto label_8004AFA8;
    case 0x8004AFACu: goto label_8004AFAC;
    case 0x8004AFB0u: goto label_8004AFB0;
    case 0x8004AFB4u: goto label_8004AFB4;
    case 0x8004AFB8u: goto label_8004AFB8;
    case 0x8004AFBCu: goto label_8004AFBC;
    case 0x8004AFC0u: goto label_8004AFC0;
    case 0x8004AFC4u: goto label_8004AFC4;
    case 0x8004AFC8u: goto label_8004AFC8;
    case 0x8004AFCCu: goto label_8004AFCC;
    case 0x8004AFD0u: goto label_8004AFD0;
    case 0x8004AFD4u: goto label_8004AFD4;
    case 0x8004AFD8u: goto label_8004AFD8;
    case 0x8004AFDCu: goto label_8004AFDC;
    case 0x8004AFE0u: goto label_8004AFE0;
    case 0x8004AFE4u: goto label_8004AFE4;
    case 0x8004AFE8u: goto label_8004AFE8;
    case 0x8004AFECu: goto label_8004AFEC;
    case 0x8004AFF0u: goto label_8004AFF0;
    case 0x8004AFF4u: goto label_8004AFF4;
    case 0x8004AFF8u: goto label_8004AFF8;
    case 0x8004AFFCu: goto label_8004AFFC;
    case 0x8004B000u: goto label_8004B000;
    case 0x8004B004u: goto label_8004B004;
    case 0x8004B008u: goto label_8004B008;
    case 0x8004B00Cu: goto label_8004B00C;
    case 0x8004B010u: goto label_8004B010;
    case 0x8004B014u: goto label_8004B014;
    case 0x8004B018u: goto label_8004B018;
    case 0x8004B01Cu: goto label_8004B01C;
    case 0x8004B020u: goto label_8004B020;
    case 0x8004B024u: goto label_8004B024;
    case 0x8004B028u: goto label_8004B028;
    case 0x8004B02Cu: goto label_8004B02C;
    case 0x8004B030u: goto label_8004B030;
    case 0x8004B034u: goto label_8004B034;
    case 0x8004B038u: goto label_8004B038;
    case 0x8004B03Cu: goto label_8004B03C;
    case 0x8004B040u: goto label_8004B040;
    case 0x8004B044u: goto label_8004B044;
    case 0x8004B048u: goto label_8004B048;
    case 0x8004B04Cu: goto label_8004B04C;
    case 0x8004B050u: goto label_8004B050;
    case 0x8004B054u: goto label_8004B054;
    case 0x8004B058u: goto label_8004B058;
    case 0x8004B05Cu: goto label_8004B05C;
    case 0x8004B060u: goto label_8004B060;
    case 0x8004B064u: goto label_8004B064;
    case 0x8004B068u: goto label_8004B068;
    case 0x8004B06Cu: goto label_8004B06C;
    case 0x8004B070u: goto label_8004B070;
    case 0x8004B074u: goto label_8004B074;
    case 0x8004B078u: goto label_8004B078;
    case 0x8004B07Cu: goto label_8004B07C;
    case 0x8004B080u: goto label_8004B080;
    case 0x8004B084u: goto label_8004B084;
    case 0x8004B088u: goto label_8004B088;
    case 0x8004B08Cu: goto label_8004B08C;
    case 0x8004B090u: goto label_8004B090;
    case 0x8004B094u: goto label_8004B094;
    case 0x8004B098u: goto label_8004B098;
    case 0x8004B09Cu: goto label_8004B09C;
    case 0x8004B0A0u: goto label_8004B0A0;
    case 0x8004B0A4u: goto label_8004B0A4;
    case 0x8004B0A8u: goto label_8004B0A8;
    case 0x8004B0ACu: goto label_8004B0AC;
    case 0x8004B0B0u: goto label_8004B0B0;
    case 0x8004B0B4u: goto label_8004B0B4;
    case 0x8004B0B8u: goto label_8004B0B8;
    case 0x8004B0BCu: goto label_8004B0BC;
    case 0x8004B0C0u: goto label_8004B0C0;
    case 0x8004B0C4u: goto label_8004B0C4;
    case 0x8004B0C8u: goto label_8004B0C8;
    case 0x8004B0CCu: goto label_8004B0CC;
    case 0x8004B0D0u: goto label_8004B0D0;
    case 0x8004B0D4u: goto label_8004B0D4;
    case 0x8004B0D8u: goto label_8004B0D8;
    case 0x8004B0DCu: goto label_8004B0DC;
    case 0x8004B0E0u: goto label_8004B0E0;
    case 0x8004B0E4u: goto label_8004B0E4;
    case 0x8004B0E8u: goto label_8004B0E8;
    case 0x8004B0ECu: goto label_8004B0EC;
    case 0x8004B0F0u: goto label_8004B0F0;
    case 0x8004B0F4u: goto label_8004B0F4;
    case 0x8004B0F8u: goto label_8004B0F8;
    case 0x8004B0FCu: goto label_8004B0FC;
    case 0x8004B100u: goto label_8004B100;
    case 0x8004B104u: goto label_8004B104;
    case 0x8004B108u: goto label_8004B108;
    case 0x8004B10Cu: goto label_8004B10C;
    case 0x8004B110u: goto label_8004B110;
    case 0x8004B114u: goto label_8004B114;
    case 0x8004B118u: goto label_8004B118;
    case 0x8004B11Cu: goto label_8004B11C;
    case 0x8004B120u: goto label_8004B120;
    case 0x8004B124u: goto label_8004B124;
    case 0x8004B128u: goto label_8004B128;
    case 0x8004B12Cu: goto label_8004B12C;
    case 0x8004B130u: goto label_8004B130;
    case 0x8004B134u: goto label_8004B134;
    case 0x8004B138u: goto label_8004B138;
    case 0x8004B13Cu: goto label_8004B13C;
    case 0x8004B140u: goto label_8004B140;
    case 0x8004B144u: goto label_8004B144;
    case 0x8004B148u: goto label_8004B148;
    case 0x8004B14Cu: goto label_8004B14C;
    case 0x8004B150u: goto label_8004B150;
    case 0x8004B154u: goto label_8004B154;
    case 0x8004B158u: goto label_8004B158;
    case 0x8004B15Cu: goto label_8004B15C;
    case 0x8004B160u: goto label_8004B160;
    case 0x8004B164u: goto label_8004B164;
    case 0x8004B168u: goto label_8004B168;
    case 0x8004B16Cu: goto label_8004B16C;
    case 0x8004B170u: goto label_8004B170;
    case 0x8004B174u: goto label_8004B174;
    case 0x8004B178u: goto label_8004B178;
    case 0x8004B17Cu: goto label_8004B17C;
    case 0x8004B180u: goto label_8004B180;
    case 0x8004B184u: goto label_8004B184;
    case 0x8004B188u: goto label_8004B188;
    case 0x8004B18Cu: goto label_8004B18C;
    case 0x8004B190u: goto label_8004B190;
    case 0x8004B194u: goto label_8004B194;
    case 0x8004B198u: goto label_8004B198;
    case 0x8004B19Cu: goto label_8004B19C;
    case 0x8004B1A0u: goto label_8004B1A0;
    case 0x8004B1A4u: goto label_8004B1A4;
    case 0x8004B1A8u: goto label_8004B1A8;
    case 0x8004B1ACu: goto label_8004B1AC;
    case 0x8004B1B0u: goto label_8004B1B0;
    case 0x8004B1B4u: goto label_8004B1B4;
    case 0x8004B1B8u: goto label_8004B1B8;
    case 0x8004B1BCu: goto label_8004B1BC;
    case 0x8004B1C0u: goto label_8004B1C0;
    case 0x8004B1C4u: goto label_8004B1C4;
    case 0x8004B1C8u: goto label_8004B1C8;
    case 0x8004B1CCu: goto label_8004B1CC;
    case 0x8004B1D0u: goto label_8004B1D0;
    case 0x8004B1D4u: goto label_8004B1D4;
    case 0x8004B1D8u: goto label_8004B1D8;
    case 0x8004B1DCu: goto label_8004B1DC;
    case 0x8004B1E0u: goto label_8004B1E0;
    case 0x8004B1E4u: goto label_8004B1E4;
    case 0x8004B1E8u: goto label_8004B1E8;
    case 0x8004B1ECu: goto label_8004B1EC;
    case 0x8004B1F0u: goto label_8004B1F0;
    case 0x8004B1F4u: goto label_8004B1F4;
    case 0x8004B1F8u: goto label_8004B1F8;
    case 0x8004B1FCu: goto label_8004B1FC;
    case 0x8004B200u: goto label_8004B200;
    case 0x8004B204u: goto label_8004B204;
    case 0x8004B208u: goto label_8004B208;
    case 0x8004B20Cu: goto label_8004B20C;
    case 0x8004B210u: goto label_8004B210;
    case 0x8004B214u: goto label_8004B214;
    case 0x8004B218u: goto label_8004B218;
    case 0x8004B21Cu: goto label_8004B21C;
    case 0x8004B220u: goto label_8004B220;
    case 0x8004B224u: goto label_8004B224;
    case 0x8004B228u: goto label_8004B228;
    case 0x8004B22Cu: goto label_8004B22C;
    case 0x8004B230u: goto label_8004B230;
    case 0x8004B234u: goto label_8004B234;
    case 0x8004B238u: goto label_8004B238;
    case 0x8004B23Cu: goto label_8004B23C;
    case 0x8004B240u: goto label_8004B240;
    case 0x8004B244u: goto label_8004B244;
    case 0x8004B248u: goto label_8004B248;
    case 0x8004B24Cu: goto label_8004B24C;
    case 0x8004B250u: goto label_8004B250;
    case 0x8004B254u: goto label_8004B254;
    case 0x8004B258u: goto label_8004B258;
    case 0x8004B25Cu: goto label_8004B25C;
    case 0x8004B260u: goto label_8004B260;
    case 0x8004B264u: goto label_8004B264;
    case 0x8004B268u: goto label_8004B268;
    case 0x8004B26Cu: goto label_8004B26C;
    case 0x8004B270u: goto label_8004B270;
    case 0x8004B274u: goto label_8004B274;
    case 0x8004B278u: goto label_8004B278;
    case 0x8004B27Cu: goto label_8004B27C;
    case 0x8004B280u: goto label_8004B280;
    case 0x8004B284u: goto label_8004B284;
    case 0x8004B288u: goto label_8004B288;
    case 0x8004B28Cu: goto label_8004B28C;
    case 0x8004B290u: goto label_8004B290;
    case 0x8004B294u: goto label_8004B294;
    case 0x8004B298u: goto label_8004B298;
    case 0x8004B29Cu: goto label_8004B29C;
    case 0x8004B2A0u: goto label_8004B2A0;
    case 0x8004B2A4u: goto label_8004B2A4;
    case 0x8004B2A8u: goto label_8004B2A8;
    case 0x8004B2ACu: goto label_8004B2AC;
    case 0x8004B2B0u: goto label_8004B2B0;
    case 0x8004B2B4u: goto label_8004B2B4;
    case 0x8004B2B8u: goto label_8004B2B8;
    case 0x8004B2BCu: goto label_8004B2BC;
    case 0x8004B2C0u: goto label_8004B2C0;
    case 0x8004B2C4u: goto label_8004B2C4;
    case 0x8004B2C8u: goto label_8004B2C8;
    case 0x8004B2CCu: goto label_8004B2CC;
    case 0x8004B2D0u: goto label_8004B2D0;
    case 0x8004B2D4u: goto label_8004B2D4;
    case 0x8004B2D8u: goto label_8004B2D8;
    case 0x8004B2DCu: goto label_8004B2DC;
    case 0x8004B2E0u: goto label_8004B2E0;
    case 0x8004B2E4u: goto label_8004B2E4;
    case 0x8004B2E8u: goto label_8004B2E8;
    case 0x8004B2ECu: goto label_8004B2EC;
    case 0x8004B2F0u: goto label_8004B2F0;
    case 0x8004B2F4u: goto label_8004B2F4;
    case 0x8004B2F8u: goto label_8004B2F8;
    case 0x8004B2FCu: goto label_8004B2FC;
    case 0x8004B300u: goto label_8004B300;
    case 0x8004B304u: goto label_8004B304;
    case 0x8004B308u: goto label_8004B308;
    case 0x8004B30Cu: goto label_8004B30C;
    case 0x8004B310u: goto label_8004B310;
    case 0x8004B314u: goto label_8004B314;
    case 0x8004B318u: goto label_8004B318;
    case 0x8004B31Cu: goto label_8004B31C;
    case 0x8004B320u: goto label_8004B320;
    case 0x8004B324u: goto label_8004B324;
    case 0x8004B328u: goto label_8004B328;
    case 0x8004B32Cu: goto label_8004B32C;
    case 0x8004B330u: goto label_8004B330;
    case 0x8004B334u: goto label_8004B334;
    case 0x8004B338u: goto label_8004B338;
    case 0x8004B33Cu: goto label_8004B33C;
    case 0x8004B340u: goto label_8004B340;
    case 0x8004B344u: goto label_8004B344;
    case 0x8004B348u: goto label_8004B348;
    case 0x8004B34Cu: goto label_8004B34C;
    case 0x8004B350u: goto label_8004B350;
    case 0x8004B354u: goto label_8004B354;
    case 0x8004B358u: goto label_8004B358;
    case 0x8004B35Cu: goto label_8004B35C;
    case 0x8004B360u: goto label_8004B360;
    case 0x8004B364u: goto label_8004B364;
    case 0x8004B368u: goto label_8004B368;
    case 0x8004B36Cu: goto label_8004B36C;
    case 0x8004B370u: goto label_8004B370;
    case 0x8004B374u: goto label_8004B374;
    case 0x8004B378u: goto label_8004B378;
    case 0x8004B37Cu: goto label_8004B37C;
    case 0x8004B380u: goto label_8004B380;
    case 0x8004B384u: goto label_8004B384;
    case 0x8004B388u: goto label_8004B388;
    case 0x8004B38Cu: goto label_8004B38C;
    case 0x8004B390u: goto label_8004B390;
    case 0x8004B394u: goto label_8004B394;
    case 0x8004B398u: goto label_8004B398;
    case 0x8004B39Cu: goto label_8004B39C;
    case 0x8004B3A0u: goto label_8004B3A0;
    case 0x8004B3A4u: goto label_8004B3A4;
    case 0x8004B3A8u: goto label_8004B3A8;
    case 0x8004B3ACu: goto label_8004B3AC;
    case 0x8004B3B0u: goto label_8004B3B0;
    case 0x8004B3B4u: goto label_8004B3B4;
    case 0x8004B3B8u: goto label_8004B3B8;
    case 0x8004B3BCu: goto label_8004B3BC;
    case 0x8004B3C0u: goto label_8004B3C0;
    case 0x8004B3C4u: goto label_8004B3C4;
    case 0x8004B3C8u: goto label_8004B3C8;
    case 0x8004B3CCu: goto label_8004B3CC;
    case 0x8004B3D0u: goto label_8004B3D0;
    case 0x8004B3D4u: goto label_8004B3D4;
    case 0x8004B3D8u: goto label_8004B3D8;
    case 0x8004B3DCu: goto label_8004B3DC;
    case 0x8004B3E0u: goto label_8004B3E0;
    case 0x8004B3E4u: goto label_8004B3E4;
    case 0x8004B3E8u: goto label_8004B3E8;
    case 0x8004B3ECu: goto label_8004B3EC;
    case 0x8004B3F0u: goto label_8004B3F0;
    case 0x8004B3F4u: goto label_8004B3F4;
    case 0x8004B3F8u: goto label_8004B3F8;
    case 0x8004B3FCu: goto label_8004B3FC;
    case 0x8004B400u: goto label_8004B400;
    case 0x8004B404u: goto label_8004B404;
    case 0x8004B408u: goto label_8004B408;
    case 0x8004B40Cu: goto label_8004B40C;
    case 0x8004B410u: goto label_8004B410;
    case 0x8004B414u: goto label_8004B414;
    case 0x8004B418u: goto label_8004B418;
    case 0x8004B41Cu: goto label_8004B41C;
    case 0x8004B420u: goto label_8004B420;
    case 0x8004B424u: goto label_8004B424;
    case 0x8004B428u: goto label_8004B428;
    case 0x8004B42Cu: goto label_8004B42C;
    case 0x8004B430u: goto label_8004B430;
    case 0x8004B434u: goto label_8004B434;
    case 0x8004B438u: goto label_8004B438;
    case 0x8004B43Cu: goto label_8004B43C;
    case 0x8004B440u: goto label_8004B440;
    case 0x8004B444u: goto label_8004B444;
    case 0x8004B448u: goto label_8004B448;
    case 0x8004B44Cu: goto label_8004B44C;
    case 0x8004B450u: goto label_8004B450;
    case 0x8004B454u: goto label_8004B454;
    case 0x8004B458u: goto label_8004B458;
    case 0x8004B45Cu: goto label_8004B45C;
    case 0x8004B460u: goto label_8004B460;
    case 0x8004B464u: goto label_8004B464;
    case 0x8004B468u: goto label_8004B468;
    case 0x8004B46Cu: goto label_8004B46C;
    case 0x8004B470u: goto label_8004B470;
    case 0x8004B474u: goto label_8004B474;
    case 0x8004B478u: goto label_8004B478;
    case 0x8004B47Cu: goto label_8004B47C;
    case 0x8004B480u: goto label_8004B480;
    case 0x8004B484u: goto label_8004B484;
    case 0x8004B488u: goto label_8004B488;
    case 0x8004B48Cu: goto label_8004B48C;
    case 0x8004B490u: goto label_8004B490;
    case 0x8004B494u: goto label_8004B494;
    case 0x8004B498u: goto label_8004B498;
    case 0x8004B49Cu: goto label_8004B49C;
    case 0x8004B4A0u: goto label_8004B4A0;
    case 0x8004B4A4u: goto label_8004B4A4;
    case 0x8004B4A8u: goto label_8004B4A8;
    case 0x8004B4ACu: goto label_8004B4AC;
    case 0x8004B4B0u: goto label_8004B4B0;
    case 0x8004B4B4u: goto label_8004B4B4;
    case 0x8004B4B8u: goto label_8004B4B8;
    case 0x8004B4BCu: goto label_8004B4BC;
    case 0x8004B4C0u: goto label_8004B4C0;
    case 0x8004B4C4u: goto label_8004B4C4;
    case 0x8004B4C8u: goto label_8004B4C8;
    case 0x8004B4CCu: goto label_8004B4CC;
    case 0x8004B4D0u: goto label_8004B4D0;
    case 0x8004B4D4u: goto label_8004B4D4;
    case 0x8004B4D8u: goto label_8004B4D8;
    case 0x8004B4DCu: goto label_8004B4DC;
    case 0x8004B4E0u: goto label_8004B4E0;
    case 0x8004B4E4u: goto label_8004B4E4;
    case 0x8004B4E8u: goto label_8004B4E8;
    case 0x8004B4ECu: goto label_8004B4EC;
    case 0x8004B4F0u: goto label_8004B4F0;
    case 0x8004B4F4u: goto label_8004B4F4;
    case 0x8004B4F8u: goto label_8004B4F8;
    case 0x8004B4FCu: goto label_8004B4FC;
    case 0x8004B500u: goto label_8004B500;
    case 0x8004B504u: goto label_8004B504;
    case 0x8004B508u: goto label_8004B508;
    case 0x8004B50Cu: goto label_8004B50C;
    case 0x8004B510u: goto label_8004B510;
    case 0x8004B514u: goto label_8004B514;
    case 0x8004B518u: goto label_8004B518;
    case 0x8004B51Cu: goto label_8004B51C;
    case 0x8004B520u: goto label_8004B520;
    case 0x8004B524u: goto label_8004B524;
    case 0x8004B528u: goto label_8004B528;
    case 0x8004B52Cu: goto label_8004B52C;
    case 0x8004B530u: goto label_8004B530;
    case 0x8004B534u: goto label_8004B534;
    case 0x8004B538u: goto label_8004B538;
    case 0x8004B53Cu: goto label_8004B53C;
    case 0x8004B540u: goto label_8004B540;
    case 0x8004B544u: goto label_8004B544;
    case 0x8004B548u: goto label_8004B548;
    case 0x8004B54Cu: goto label_8004B54C;
    case 0x8004B550u: goto label_8004B550;
    case 0x8004B554u: goto label_8004B554;
    case 0x8004B558u: goto label_8004B558;
    case 0x8004B55Cu: goto label_8004B55C;
    case 0x8004B560u: goto label_8004B560;
    case 0x8004B564u: goto label_8004B564;
    case 0x8004B568u: goto label_8004B568;
    case 0x8004B56Cu: goto label_8004B56C;
    case 0x8004B570u: goto label_8004B570;
    case 0x8004B574u: goto label_8004B574;
    case 0x8004B578u: goto label_8004B578;
    case 0x8004B57Cu: goto label_8004B57C;
    case 0x8004B580u: goto label_8004B580;
    case 0x8004B584u: goto label_8004B584;
    case 0x8004B588u: goto label_8004B588;
    case 0x8004B58Cu: goto label_8004B58C;
    case 0x8004B590u: goto label_8004B590;
    case 0x8004B594u: goto label_8004B594;
    case 0x8004B598u: goto label_8004B598;
    case 0x8004B59Cu: goto label_8004B59C;
    case 0x8004B5A0u: goto label_8004B5A0;
    case 0x8004B5A4u: goto label_8004B5A4;
    case 0x8004B5A8u: goto label_8004B5A8;
    case 0x8004B5ACu: goto label_8004B5AC;
    case 0x8004B5B0u: goto label_8004B5B0;
    case 0x8004B5B4u: goto label_8004B5B4;
    case 0x8004B5B8u: goto label_8004B5B8;
    case 0x8004B5BCu: goto label_8004B5BC;
    case 0x8004B5C0u: goto label_8004B5C0;
    case 0x8004B5C4u: goto label_8004B5C4;
    case 0x8004B5C8u: goto label_8004B5C8;
    case 0x8004B5CCu: goto label_8004B5CC;
    case 0x8004B5D0u: goto label_8004B5D0;
    case 0x8004B5D4u: goto label_8004B5D4;
    case 0x8004B5D8u: goto label_8004B5D8;
    case 0x8004B5DCu: goto label_8004B5DC;
    case 0x8004B5E0u: goto label_8004B5E0;
    case 0x8004B5E4u: goto label_8004B5E4;
    case 0x8004B5E8u: goto label_8004B5E8;
    case 0x8004B5ECu: goto label_8004B5EC;
    case 0x8004B5F0u: goto label_8004B5F0;
    case 0x8004B5F4u: goto label_8004B5F4;
    case 0x8004B5F8u: goto label_8004B5F8;
    case 0x8004B5FCu: goto label_8004B5FC;
    case 0x8004B600u: goto label_8004B600;
    case 0x8004B604u: goto label_8004B604;
    case 0x8004B608u: goto label_8004B608;
    case 0x8004B60Cu: goto label_8004B60C;
    case 0x8004B610u: goto label_8004B610;
    case 0x8004B614u: goto label_8004B614;
    case 0x8004B618u: goto label_8004B618;
    case 0x8004B61Cu: goto label_8004B61C;
    case 0x8004B620u: goto label_8004B620;
    case 0x8004B624u: goto label_8004B624;
    case 0x8004B628u: goto label_8004B628;
    case 0x8004B62Cu: goto label_8004B62C;
    case 0x8004B630u: goto label_8004B630;
    case 0x8004B634u: goto label_8004B634;
    case 0x8004B638u: goto label_8004B638;
    case 0x8004B63Cu: goto label_8004B63C;
    case 0x8004B640u: goto label_8004B640;
    case 0x8004B644u: goto label_8004B644;
    case 0x8004B648u: goto label_8004B648;
    case 0x8004B64Cu: goto label_8004B64C;
    case 0x8004B650u: goto label_8004B650;
    case 0x8004B654u: goto label_8004B654;
    case 0x8004B658u: goto label_8004B658;
    case 0x8004B65Cu: goto label_8004B65C;
    case 0x8004B660u: goto label_8004B660;
    case 0x8004B664u: goto label_8004B664;
    case 0x8004B668u: goto label_8004B668;
    case 0x8004B66Cu: goto label_8004B66C;
    case 0x8004B670u: goto label_8004B670;
    case 0x8004B674u: goto label_8004B674;
    case 0x8004B678u: goto label_8004B678;
    case 0x8004B67Cu: goto label_8004B67C;
    case 0x8004B680u: goto label_8004B680;
    case 0x8004B684u: goto label_8004B684;
    case 0x8004B688u: goto label_8004B688;
    case 0x8004B68Cu: goto label_8004B68C;
    case 0x8004B690u: goto label_8004B690;
    case 0x8004B694u: goto label_8004B694;
    case 0x8004B698u: goto label_8004B698;
    case 0x8004B69Cu: goto label_8004B69C;
    case 0x8004B6A0u: goto label_8004B6A0;
    case 0x8004B6A4u: goto label_8004B6A4;
    case 0x8004B6A8u: goto label_8004B6A8;
    case 0x8004B6ACu: goto label_8004B6AC;
    case 0x8004B6B0u: goto label_8004B6B0;
    case 0x8004B6B4u: goto label_8004B6B4;
    case 0x8004B6B8u: goto label_8004B6B8;
    case 0x8004B6BCu: goto label_8004B6BC;
    case 0x8004B6C0u: goto label_8004B6C0;
    case 0x8004B6C4u: goto label_8004B6C4;
    case 0x8004B6C8u: goto label_8004B6C8;
    case 0x8004B6CCu: goto label_8004B6CC;
    case 0x8004B6D0u: goto label_8004B6D0;
    case 0x8004B6D4u: goto label_8004B6D4;
    case 0x8004B6D8u: goto label_8004B6D8;
    case 0x8004B6DCu: goto label_8004B6DC;
    case 0x8004B6E0u: goto label_8004B6E0;
    case 0x8004B6E4u: goto label_8004B6E4;
    case 0x8004B6E8u: goto label_8004B6E8;
    case 0x8004B6ECu: goto label_8004B6EC;
    case 0x8004B6F0u: goto label_8004B6F0;
    case 0x8004B6F4u: goto label_8004B6F4;
    case 0x8004B6F8u: goto label_8004B6F8;
    case 0x8004B6FCu: goto label_8004B6FC;
    case 0x8004B700u: goto label_8004B700;
    case 0x8004B704u: goto label_8004B704;
    case 0x8004B708u: goto label_8004B708;
    case 0x8004B70Cu: goto label_8004B70C;
    case 0x8004B710u: goto label_8004B710;
    case 0x8004B714u: goto label_8004B714;
    case 0x8004B718u: goto label_8004B718;
    case 0x8004B71Cu: goto label_8004B71C;
    case 0x8004B720u: goto label_8004B720;
    case 0x8004B724u: goto label_8004B724;
    case 0x8004B728u: goto label_8004B728;
    case 0x8004B72Cu: goto label_8004B72C;
    case 0x8004B730u: goto label_8004B730;
    case 0x8004B734u: goto label_8004B734;
    case 0x8004B738u: goto label_8004B738;
    case 0x8004B73Cu: goto label_8004B73C;
    case 0x8004B740u: goto label_8004B740;
    case 0x8004B744u: goto label_8004B744;
    case 0x8004B748u: goto label_8004B748;
    case 0x8004B74Cu: goto label_8004B74C;
    case 0x8004B750u: goto label_8004B750;
    case 0x8004B754u: goto label_8004B754;
    case 0x8004B758u: goto label_8004B758;
    case 0x8004B75Cu: goto label_8004B75C;
    case 0x8004B760u: goto label_8004B760;
    case 0x8004B764u: goto label_8004B764;
    case 0x8004B768u: goto label_8004B768;
    case 0x8004B76Cu: goto label_8004B76C;
    case 0x8004B770u: goto label_8004B770;
    case 0x8004B774u: goto label_8004B774;
    case 0x8004B778u: goto label_8004B778;
    case 0x8004B77Cu: goto label_8004B77C;
    case 0x8004B780u: goto label_8004B780;
    case 0x8004B784u: goto label_8004B784;
    case 0x8004B788u: goto label_8004B788;
    case 0x8004B78Cu: goto label_8004B78C;
    case 0x8004B790u: goto label_8004B790;
    case 0x8004B794u: goto label_8004B794;
    case 0x8004B798u: goto label_8004B798;
    case 0x8004B79Cu: goto label_8004B79C;
    case 0x8004B7A0u: goto label_8004B7A0;
    case 0x8004B7A4u: goto label_8004B7A4;
    case 0x8004B7A8u: goto label_8004B7A8;
    case 0x8004B7ACu: goto label_8004B7AC;
    case 0x8004B7B0u: goto label_8004B7B0;
    case 0x8004B7B4u: goto label_8004B7B4;
    case 0x8004B7B8u: goto label_8004B7B8;
    case 0x8004B7BCu: goto label_8004B7BC;
    case 0x8004B7C0u: goto label_8004B7C0;
    case 0x8004B7C4u: goto label_8004B7C4;
    case 0x8004B7C8u: goto label_8004B7C8;
    case 0x8004B7CCu: goto label_8004B7CC;
    case 0x8004B7D0u: goto label_8004B7D0;
    case 0x8004B7D4u: goto label_8004B7D4;
    case 0x8004B7D8u: goto label_8004B7D8;
    case 0x8004B7DCu: goto label_8004B7DC;
    case 0x8004B7E0u: goto label_8004B7E0;
    case 0x8004B7E4u: goto label_8004B7E4;
    case 0x8004B7E8u: goto label_8004B7E8;
    case 0x8004B7ECu: goto label_8004B7EC;
    case 0x8004B7F0u: goto label_8004B7F0;
    case 0x8004B7F4u: goto label_8004B7F4;
    case 0x8004B7F8u: goto label_8004B7F8;
    case 0x8004B7FCu: goto label_8004B7FC;
    case 0x8004B800u: goto label_8004B800;
    case 0x8004B804u: goto label_8004B804;
    case 0x8004B808u: goto label_8004B808;
    case 0x8004B80Cu: goto label_8004B80C;
    case 0x8004B810u: goto label_8004B810;
    case 0x8004B814u: goto label_8004B814;
    case 0x8004B818u: goto label_8004B818;
    case 0x8004B81Cu: goto label_8004B81C;
    case 0x8004B820u: goto label_8004B820;
    case 0x8004B824u: goto label_8004B824;
    case 0x8004B828u: goto label_8004B828;
    case 0x8004B82Cu: goto label_8004B82C;
    case 0x8004B830u: goto label_8004B830;
    case 0x8004B834u: goto label_8004B834;
    case 0x8004B838u: goto label_8004B838;
    case 0x8004B83Cu: goto label_8004B83C;
    case 0x8004B840u: goto label_8004B840;
    case 0x8004B844u: goto label_8004B844;
    case 0x8004B848u: goto label_8004B848;
    case 0x8004B84Cu: goto label_8004B84C;
    case 0x8004B850u: goto label_8004B850;
    case 0x8004B854u: goto label_8004B854;
    case 0x8004B858u: goto label_8004B858;
    case 0x8004B85Cu: goto label_8004B85C;
    case 0x8004B860u: goto label_8004B860;
    case 0x8004B864u: goto label_8004B864;
    case 0x8004B868u: goto label_8004B868;
    case 0x8004B86Cu: goto label_8004B86C;
    case 0x8004B870u: goto label_8004B870;
    case 0x8004B874u: goto label_8004B874;
    case 0x8004B878u: goto label_8004B878;
    case 0x8004B87Cu: goto label_8004B87C;
    case 0x8004B880u: goto label_8004B880;
    case 0x8004B884u: goto label_8004B884;
    case 0x8004B888u: goto label_8004B888;
    case 0x8004B88Cu: goto label_8004B88C;
    case 0x8004B890u: goto label_8004B890;
    case 0x8004B894u: goto label_8004B894;
    case 0x8004B898u: goto label_8004B898;
    case 0x8004B89Cu: goto label_8004B89C;
    case 0x8004B8A0u: goto label_8004B8A0;
    case 0x8004B8A4u: goto label_8004B8A4;
    case 0x8004B8A8u: goto label_8004B8A8;
    case 0x8004B8ACu: goto label_8004B8AC;
    case 0x8004B8B0u: goto label_8004B8B0;
    case 0x8004B8B4u: goto label_8004B8B4;
    case 0x8004B8B8u: goto label_8004B8B8;
    case 0x8004B8BCu: goto label_8004B8BC;
    case 0x8004B8C0u: goto label_8004B8C0;
    case 0x8004B8C4u: goto label_8004B8C4;
    case 0x8004B8C8u: goto label_8004B8C8;
    case 0x8004B8CCu: goto label_8004B8CC;
    case 0x8004B8D0u: goto label_8004B8D0;
    case 0x8004B8D4u: goto label_8004B8D4;
    case 0x8004B8D8u: goto label_8004B8D8;
    case 0x8004B8DCu: goto label_8004B8DC;
    case 0x8004B8E0u: goto label_8004B8E0;
    case 0x8004B8E4u: goto label_8004B8E4;
    case 0x8004B8E8u: goto label_8004B8E8;
    case 0x8004B8ECu: goto label_8004B8EC;
    case 0x8004B8F0u: goto label_8004B8F0;
    case 0x8004B8F4u: goto label_8004B8F4;
    case 0x8004B8F8u: goto label_8004B8F8;
    case 0x8004B8FCu: goto label_8004B8FC;
    case 0x8004B900u: goto label_8004B900;
    case 0x8004B904u: goto label_8004B904;
    case 0x8004B908u: goto label_8004B908;
    case 0x8004B90Cu: goto label_8004B90C;
    case 0x8004B910u: goto label_8004B910;
    case 0x8004B914u: goto label_8004B914;
    case 0x8004B918u: goto label_8004B918;
    case 0x8004B91Cu: goto label_8004B91C;
    case 0x8004B920u: goto label_8004B920;
    case 0x8004B924u: goto label_8004B924;
    case 0x8004B928u: goto label_8004B928;
    case 0x8004B92Cu: goto label_8004B92C;
    case 0x8004B930u: goto label_8004B930;
    case 0x8004B934u: goto label_8004B934;
    case 0x8004B938u: goto label_8004B938;
    case 0x8004B93Cu: goto label_8004B93C;
    case 0x8004B940u: goto label_8004B940;
    case 0x8004B944u: goto label_8004B944;
    case 0x8004B948u: goto label_8004B948;
    case 0x8004B94Cu: goto label_8004B94C;
    case 0x8004B950u: goto label_8004B950;
    case 0x8004B954u: goto label_8004B954;
    case 0x8004B958u: goto label_8004B958;
    case 0x8004B95Cu: goto label_8004B95C;
    case 0x8004B960u: goto label_8004B960;
    case 0x8004B964u: goto label_8004B964;
    case 0x8004B968u: goto label_8004B968;
    case 0x8004B96Cu: goto label_8004B96C;
    case 0x8004B970u: goto label_8004B970;
    case 0x8004B974u: goto label_8004B974;
    case 0x8004B978u: goto label_8004B978;
    case 0x8004B97Cu: goto label_8004B97C;
    case 0x8004B980u: goto label_8004B980;
    case 0x8004B984u: goto label_8004B984;
    case 0x8004B988u: goto label_8004B988;
    case 0x8004B98Cu: goto label_8004B98C;
    case 0x8004B990u: goto label_8004B990;
    case 0x8004B994u: goto label_8004B994;
    case 0x8004B998u: goto label_8004B998;
    case 0x8004B99Cu: goto label_8004B99C;
    case 0x8004B9A0u: goto label_8004B9A0;
    case 0x8004B9A4u: goto label_8004B9A4;
    case 0x8004B9A8u: goto label_8004B9A8;
    case 0x8004B9ACu: goto label_8004B9AC;
    case 0x8004B9B0u: goto label_8004B9B0;
    case 0x8004B9B4u: goto label_8004B9B4;
    case 0x8004B9B8u: goto label_8004B9B8;
    case 0x8004B9BCu: goto label_8004B9BC;
    case 0x8004B9C0u: goto label_8004B9C0;
    case 0x8004B9C4u: goto label_8004B9C4;
    case 0x8004B9C8u: goto label_8004B9C8;
    case 0x8004B9CCu: goto label_8004B9CC;
    case 0x8004B9D0u: goto label_8004B9D0;
    case 0x8004B9D4u: goto label_8004B9D4;
    case 0x8004B9D8u: goto label_8004B9D8;
    case 0x8004B9DCu: goto label_8004B9DC;
    case 0x8004B9E0u: goto label_8004B9E0;
    case 0x8004B9E4u: goto label_8004B9E4;
    case 0x8004B9E8u: goto label_8004B9E8;
    case 0x8004B9ECu: goto label_8004B9EC;
    case 0x8004B9F0u: goto label_8004B9F0;
    case 0x8004B9F4u: goto label_8004B9F4;
    case 0x8004B9F8u: goto label_8004B9F8;
    case 0x8004B9FCu: goto label_8004B9FC;
    case 0x8004BA00u: goto label_8004BA00;
    case 0x8004BA04u: goto label_8004BA04;
    case 0x8004BA08u: goto label_8004BA08;
    case 0x8004BA0Cu: goto label_8004BA0C;
    case 0x8004BA10u: goto label_8004BA10;
    case 0x8004BA14u: goto label_8004BA14;
    case 0x8004BA18u: goto label_8004BA18;
    case 0x8004BA1Cu: goto label_8004BA1C;
    case 0x8004BA20u: goto label_8004BA20;
    case 0x8004BA24u: goto label_8004BA24;
    case 0x8004BA28u: goto label_8004BA28;
    case 0x8004BA2Cu: goto label_8004BA2C;
    case 0x8004BA30u: goto label_8004BA30;
    case 0x8004BA34u: goto label_8004BA34;
    case 0x8004BA38u: goto label_8004BA38;
    case 0x8004BA3Cu: goto label_8004BA3C;
    case 0x8004BA40u: goto label_8004BA40;
    case 0x8004BA44u: goto label_8004BA44;
    case 0x8004BA48u: goto label_8004BA48;
    case 0x8004BA4Cu: goto label_8004BA4C;
    case 0x8004BA50u: goto label_8004BA50;
    case 0x8004BA54u: goto label_8004BA54;
    case 0x8004BA58u: goto label_8004BA58;
    case 0x8004BA5Cu: goto label_8004BA5C;
    case 0x8004BA60u: goto label_8004BA60;
    case 0x8004BA64u: goto label_8004BA64;
    case 0x8004BA68u: goto label_8004BA68;
    case 0x8004BA6Cu: goto label_8004BA6C;
    case 0x8004BA70u: goto label_8004BA70;
    case 0x8004BA74u: goto label_8004BA74;
    case 0x8004BA78u: goto label_8004BA78;
    case 0x8004BA7Cu: goto label_8004BA7C;
    case 0x8004BA80u: goto label_8004BA80;
    case 0x8004BA84u: goto label_8004BA84;
    case 0x8004BA88u: goto label_8004BA88;
    case 0x8004BA8Cu: goto label_8004BA8C;
    case 0x8004BA90u: goto label_8004BA90;
    case 0x8004BA94u: goto label_8004BA94;
    case 0x8004BA98u: goto label_8004BA98;
    case 0x8004BA9Cu: goto label_8004BA9C;
    case 0x8004BAA0u: goto label_8004BAA0;
    case 0x8004BAA4u: goto label_8004BAA4;
    case 0x8004BAA8u: goto label_8004BAA8;
    case 0x8004BAACu: goto label_8004BAAC;
    case 0x8004BAB0u: goto label_8004BAB0;
    case 0x8004BAB4u: goto label_8004BAB4;
    case 0x8004BAB8u: goto label_8004BAB8;
    case 0x8004BABCu: goto label_8004BABC;
    case 0x8004BAC0u: goto label_8004BAC0;
    case 0x8004BAC4u: goto label_8004BAC4;
    case 0x8004BAC8u: goto label_8004BAC8;
    case 0x8004BACCu: goto label_8004BACC;
    case 0x8004BAD0u: goto label_8004BAD0;
    case 0x8004BAD4u: goto label_8004BAD4;
    case 0x8004BAD8u: goto label_8004BAD8;
    case 0x8004BADCu: goto label_8004BADC;
    case 0x8004BAE0u: goto label_8004BAE0;
    case 0x8004BAE4u: goto label_8004BAE4;
    case 0x8004BAE8u: goto label_8004BAE8;
    case 0x8004BAECu: goto label_8004BAEC;
    case 0x8004BAF0u: goto label_8004BAF0;
    case 0x8004BAF4u: goto label_8004BAF4;
    case 0x8004BAF8u: goto label_8004BAF8;
    case 0x8004BAFCu: goto label_8004BAFC;
    case 0x8004BB00u: goto label_8004BB00;
    case 0x8004BB04u: goto label_8004BB04;
    case 0x8004BB08u: goto label_8004BB08;
    case 0x8004BB0Cu: goto label_8004BB0C;
    case 0x8004BB10u: goto label_8004BB10;
    case 0x8004BB14u: goto label_8004BB14;
    case 0x8004BB18u: goto label_8004BB18;
    case 0x8004BB1Cu: goto label_8004BB1C;
    case 0x8004BB20u: goto label_8004BB20;
    case 0x8004BB24u: goto label_8004BB24;
    case 0x8004BB28u: goto label_8004BB28;
    case 0x8004BB2Cu: goto label_8004BB2C;
    case 0x8004BB30u: goto label_8004BB30;
    case 0x8004BB34u: goto label_8004BB34;
    case 0x8004BB38u: goto label_8004BB38;
    case 0x8004BB3Cu: goto label_8004BB3C;
    case 0x8004BB40u: goto label_8004BB40;
    case 0x8004BB44u: goto label_8004BB44;
    case 0x8004BB48u: goto label_8004BB48;
    case 0x8004BB4Cu: goto label_8004BB4C;
    case 0x8004BB50u: goto label_8004BB50;
    case 0x8004BB54u: goto label_8004BB54;
    case 0x8004BB58u: goto label_8004BB58;
    case 0x8004BB5Cu: goto label_8004BB5C;
    case 0x8004BB60u: goto label_8004BB60;
    case 0x8004BB64u: goto label_8004BB64;
    case 0x8004BB68u: goto label_8004BB68;
    case 0x8004BB6Cu: goto label_8004BB6C;
    case 0x8004BB70u: goto label_8004BB70;
    case 0x8004BB74u: goto label_8004BB74;
    case 0x8004BB78u: goto label_8004BB78;
    case 0x8004BB7Cu: goto label_8004BB7C;
    case 0x8004BB80u: goto label_8004BB80;
    case 0x8004BB84u: goto label_8004BB84;
    case 0x8004BB88u: goto label_8004BB88;
    case 0x8004BB8Cu: goto label_8004BB8C;
    case 0x8004BB90u: goto label_8004BB90;
    case 0x8004BB94u: goto label_8004BB94;
    case 0x8004BB98u: goto label_8004BB98;
    case 0x8004BB9Cu: goto label_8004BB9C;
    case 0x8004BBA0u: goto label_8004BBA0;
    case 0x8004BBA4u: goto label_8004BBA4;
    case 0x8004BBA8u: goto label_8004BBA8;
    case 0x8004BBACu: goto label_8004BBAC;
    case 0x8004BBB0u: goto label_8004BBB0;
    case 0x8004BBB4u: goto label_8004BBB4;
    case 0x8004BBB8u: goto label_8004BBB8;
    case 0x8004BBBCu: goto label_8004BBBC;
    case 0x8004BBC0u: goto label_8004BBC0;
    case 0x8004BBC4u: goto label_8004BBC4;
    case 0x8004BBC8u: goto label_8004BBC8;
    case 0x8004BBCCu: goto label_8004BBCC;
    case 0x8004BBD0u: goto label_8004BBD0;
    case 0x8004BBD4u: goto label_8004BBD4;
    case 0x8004BBD8u: goto label_8004BBD8;
    case 0x8004BBDCu: goto label_8004BBDC;
    case 0x8004BBE0u: goto label_8004BBE0;
    case 0x8004BBE4u: goto label_8004BBE4;
    case 0x8004BBE8u: goto label_8004BBE8;
    case 0x8004BBECu: goto label_8004BBEC;
    case 0x8004BBF0u: goto label_8004BBF0;
    case 0x8004BBF4u: goto label_8004BBF4;
    case 0x8004BBF8u: goto label_8004BBF8;
    case 0x8004BBFCu: goto label_8004BBFC;
    case 0x8004BC00u: goto label_8004BC00;
    case 0x8004BC04u: goto label_8004BC04;
    case 0x8004BC08u: goto label_8004BC08;
    case 0x8004BC0Cu: goto label_8004BC0C;
    case 0x8004BC10u: goto label_8004BC10;
    case 0x8004BC14u: goto label_8004BC14;
    case 0x8004BC18u: goto label_8004BC18;
    case 0x8004BC1Cu: goto label_8004BC1C;
    case 0x8004BC20u: goto label_8004BC20;
    case 0x8004BC24u: goto label_8004BC24;
    case 0x8004BC28u: goto label_8004BC28;
    case 0x8004BC2Cu: goto label_8004BC2C;
    case 0x8004BC30u: goto label_8004BC30;
    case 0x8004BC34u: goto label_8004BC34;
    case 0x8004BC38u: goto label_8004BC38;
    case 0x8004BC3Cu: goto label_8004BC3C;
    case 0x8004BC40u: goto label_8004BC40;
    case 0x8004BC44u: goto label_8004BC44;
    case 0x8004BC48u: goto label_8004BC48;
    case 0x8004BC4Cu: goto label_8004BC4C;
    case 0x8004BC50u: goto label_8004BC50;
    case 0x8004BC54u: goto label_8004BC54;
    case 0x8004BC58u: goto label_8004BC58;
    case 0x8004BC5Cu: goto label_8004BC5C;
    case 0x8004BC60u: goto label_8004BC60;
    case 0x8004BC64u: goto label_8004BC64;
    case 0x8004BC68u: goto label_8004BC68;
    case 0x8004BC6Cu: goto label_8004BC6C;
    case 0x8004BC70u: goto label_8004BC70;
    case 0x8004BC74u: goto label_8004BC74;
    case 0x8004BC78u: goto label_8004BC78;
    case 0x8004BC7Cu: goto label_8004BC7C;
    case 0x8004BC80u: goto label_8004BC80;
    case 0x8004BC84u: goto label_8004BC84;
    case 0x8004BC88u: goto label_8004BC88;
    case 0x8004BC8Cu: goto label_8004BC8C;
    case 0x8004BC90u: goto label_8004BC90;
    case 0x8004BC94u: goto label_8004BC94;
    case 0x8004BC98u: goto label_8004BC98;
    case 0x8004BC9Cu: goto label_8004BC9C;
    case 0x8004BCA0u: goto label_8004BCA0;
    case 0x8004BCA4u: goto label_8004BCA4;
    case 0x8004BCA8u: goto label_8004BCA8;
    case 0x8004BCACu: goto label_8004BCAC;
    case 0x8004BCB0u: goto label_8004BCB0;
    case 0x8004BCB4u: goto label_8004BCB4;
    case 0x8004BCB8u: goto label_8004BCB8;
    case 0x8004BCBCu: goto label_8004BCBC;
    case 0x8004BCC0u: goto label_8004BCC0;
    case 0x8004BCC4u: goto label_8004BCC4;
    case 0x8004BCC8u: goto label_8004BCC8;
    case 0x8004BCCCu: goto label_8004BCCC;
    case 0x8004BCD0u: goto label_8004BCD0;
    case 0x8004BCD4u: goto label_8004BCD4;
    case 0x8004BCD8u: goto label_8004BCD8;
    case 0x8004BCDCu: goto label_8004BCDC;
    case 0x8004BCE0u: goto label_8004BCE0;
    case 0x8004BCE4u: goto label_8004BCE4;
    case 0x8004BCE8u: goto label_8004BCE8;
    case 0x8004BCECu: goto label_8004BCEC;
    case 0x8004BCF0u: goto label_8004BCF0;
    case 0x8004BCF4u: goto label_8004BCF4;
    case 0x8004BCF8u: goto label_8004BCF8;
    case 0x8004BCFCu: goto label_8004BCFC;
    case 0x8004BD00u: goto label_8004BD00;
    case 0x8004BD04u: goto label_8004BD04;
    case 0x8004BD08u: goto label_8004BD08;
    case 0x8004BD0Cu: goto label_8004BD0C;
    case 0x8004BD10u: goto label_8004BD10;
    case 0x8004BD14u: goto label_8004BD14;
    case 0x8004BD18u: goto label_8004BD18;
    case 0x8004BD1Cu: goto label_8004BD1C;
    case 0x8004BD20u: goto label_8004BD20;
    case 0x8004BD24u: goto label_8004BD24;
    case 0x8004BD28u: goto label_8004BD28;
    case 0x8004BD2Cu: goto label_8004BD2C;
    case 0x8004BD30u: goto label_8004BD30;
    case 0x8004BD34u: goto label_8004BD34;
    case 0x8004BD38u: goto label_8004BD38;
    case 0x8004BD3Cu: goto label_8004BD3C;
    case 0x8004BD40u: goto label_8004BD40;
    case 0x8004BD44u: goto label_8004BD44;
    case 0x8004BD48u: goto label_8004BD48;
    case 0x8004BD4Cu: goto label_8004BD4C;
    case 0x8004BD50u: goto label_8004BD50;
    case 0x8004BD54u: goto label_8004BD54;
    case 0x8004BD58u: goto label_8004BD58;
    case 0x8004BD5Cu: goto label_8004BD5C;
    case 0x8004BD60u: goto label_8004BD60;
    case 0x8004BD64u: goto label_8004BD64;
    case 0x8004BD68u: goto label_8004BD68;
    case 0x8004BD6Cu: goto label_8004BD6C;
    case 0x8004BD70u: goto label_8004BD70;
    case 0x8004BD74u: goto label_8004BD74;
    case 0x8004BD78u: goto label_8004BD78;
    case 0x8004BD7Cu: goto label_8004BD7C;
    case 0x8004BD80u: goto label_8004BD80;
    case 0x8004BD84u: goto label_8004BD84;
    case 0x8004BD88u: goto label_8004BD88;
    case 0x8004BD8Cu: goto label_8004BD8C;
    case 0x8004BD90u: goto label_8004BD90;
    case 0x8004BD94u: goto label_8004BD94;
    case 0x8004BD98u: goto label_8004BD98;
    case 0x8004BD9Cu: goto label_8004BD9C;
    case 0x8004BDA0u: goto label_8004BDA0;
    case 0x8004BDA4u: goto label_8004BDA4;
    case 0x8004BDA8u: goto label_8004BDA8;
    case 0x8004BDACu: goto label_8004BDAC;
    case 0x8004BDB0u: goto label_8004BDB0;
    case 0x8004BDB4u: goto label_8004BDB4;
    case 0x8004BDB8u: goto label_8004BDB8;
    case 0x8004BDBCu: goto label_8004BDBC;
    case 0x8004BDC0u: goto label_8004BDC0;
    case 0x8004BDC4u: goto label_8004BDC4;
    case 0x8004BDC8u: goto label_8004BDC8;
    case 0x8004BDCCu: goto label_8004BDCC;
    case 0x8004BDD0u: goto label_8004BDD0;
    case 0x8004BDD4u: goto label_8004BDD4;
    case 0x8004BDD8u: goto label_8004BDD8;
    case 0x8004BDDCu: goto label_8004BDDC;
    case 0x8004BDE0u: goto label_8004BDE0;
    case 0x8004BDE4u: goto label_8004BDE4;
    case 0x8004BDE8u: goto label_8004BDE8;
    case 0x8004BDECu: goto label_8004BDEC;
    case 0x8004BDF0u: goto label_8004BDF0;
    case 0x8004BDF4u: goto label_8004BDF4;
    case 0x8004BDF8u: goto label_8004BDF8;
    case 0x8004BDFCu: goto label_8004BDFC;
    case 0x8004BE00u: goto label_8004BE00;
    case 0x8004BE04u: goto label_8004BE04;
    case 0x8004BE08u: goto label_8004BE08;
    case 0x8004BE0Cu: goto label_8004BE0C;
    case 0x8004BE10u: goto label_8004BE10;
    case 0x8004BE14u: goto label_8004BE14;
    case 0x8004BE18u: goto label_8004BE18;
    case 0x8004BE1Cu: goto label_8004BE1C;
    case 0x8004BE20u: goto label_8004BE20;
    case 0x8004BE24u: goto label_8004BE24;
    case 0x8004BE28u: goto label_8004BE28;
    case 0x8004BE2Cu: goto label_8004BE2C;
    case 0x8004BE30u: goto label_8004BE30;
    case 0x8004BE34u: goto label_8004BE34;
    case 0x8004BE38u: goto label_8004BE38;
    case 0x8004BE3Cu: goto label_8004BE3C;
    case 0x8004BE40u: goto label_8004BE40;
    case 0x8004BE44u: goto label_8004BE44;
    case 0x8004BE48u: goto label_8004BE48;
    case 0x8004BE4Cu: goto label_8004BE4C;
    case 0x8004BE50u: goto label_8004BE50;
    case 0x8004BE54u: goto label_8004BE54;
    case 0x8004BE58u: goto label_8004BE58;
    case 0x8004BE5Cu: goto label_8004BE5C;
    case 0x8004BE60u: goto label_8004BE60;
    case 0x8004BE64u: goto label_8004BE64;
    case 0x8004BE68u: goto label_8004BE68;
    case 0x8004BE6Cu: goto label_8004BE6C;
    case 0x8004BE70u: goto label_8004BE70;
    case 0x8004BE74u: goto label_8004BE74;
    case 0x8004BE78u: goto label_8004BE78;
    case 0x8004BE7Cu: goto label_8004BE7C;
    case 0x8004BE80u: goto label_8004BE80;
    case 0x8004BE84u: goto label_8004BE84;
    case 0x8004BE88u: goto label_8004BE88;
    case 0x8004BE8Cu: goto label_8004BE8C;
    case 0x8004BE90u: goto label_8004BE90;
    case 0x8004BE94u: goto label_8004BE94;
    case 0x8004BE98u: goto label_8004BE98;
    case 0x8004BE9Cu: goto label_8004BE9C;
    case 0x8004BEA0u: goto label_8004BEA0;
    case 0x8004BEA4u: goto label_8004BEA4;
    case 0x8004BEA8u: goto label_8004BEA8;
    case 0x8004BEACu: goto label_8004BEAC;
    case 0x8004BEB0u: goto label_8004BEB0;
    case 0x8004BEB4u: goto label_8004BEB4;
    case 0x8004BEB8u: goto label_8004BEB8;
    case 0x8004BEBCu: goto label_8004BEBC;
    case 0x8004BEC0u: goto label_8004BEC0;
    case 0x8004BEC4u: goto label_8004BEC4;
    case 0x8004BEC8u: goto label_8004BEC8;
    case 0x8004BECCu: goto label_8004BECC;
    case 0x8004BED0u: goto label_8004BED0;
    case 0x8004BED4u: goto label_8004BED4;
    case 0x8004BED8u: goto label_8004BED8;
    case 0x8004BEDCu: goto label_8004BEDC;
    case 0x8004BEE0u: goto label_8004BEE0;
    case 0x8004BEE4u: goto label_8004BEE4;
    case 0x8004BEE8u: goto label_8004BEE8;
    case 0x8004BEECu: goto label_8004BEEC;
    case 0x8004BEF0u: goto label_8004BEF0;
    case 0x8004BEF4u: goto label_8004BEF4;
    case 0x8004BEF8u: goto label_8004BEF8;
    case 0x8004BEFCu: goto label_8004BEFC;
    case 0x8004BF00u: goto label_8004BF00;
    case 0x8004BF04u: goto label_8004BF04;
    case 0x8004BF08u: goto label_8004BF08;
    case 0x8004BF0Cu: goto label_8004BF0C;
    case 0x8004BF10u: goto label_8004BF10;
    case 0x8004BF14u: goto label_8004BF14;
    case 0x8004BF18u: goto label_8004BF18;
    case 0x8004BF1Cu: goto label_8004BF1C;
    case 0x8004BF20u: goto label_8004BF20;
    case 0x8004BF24u: goto label_8004BF24;
    case 0x8004BF28u: goto label_8004BF28;
    case 0x8004BF2Cu: goto label_8004BF2C;
    case 0x8004BF30u: goto label_8004BF30;
    case 0x8004BF34u: goto label_8004BF34;
    case 0x8004BF38u: goto label_8004BF38;
    case 0x8004BF3Cu: goto label_8004BF3C;
    case 0x8004BF40u: goto label_8004BF40;
    case 0x8004BF44u: goto label_8004BF44;
    case 0x8004BF48u: goto label_8004BF48;
    case 0x8004BF4Cu: goto label_8004BF4C;
    case 0x8004BF50u: goto label_8004BF50;
    case 0x8004BF54u: goto label_8004BF54;
    case 0x8004BF58u: goto label_8004BF58;
    case 0x8004BF5Cu: goto label_8004BF5C;
    case 0x8004BF60u: goto label_8004BF60;
    case 0x8004BF64u: goto label_8004BF64;
    case 0x8004BF68u: goto label_8004BF68;
    case 0x8004BF6Cu: goto label_8004BF6C;
    case 0x8004BF70u: goto label_8004BF70;
    case 0x8004BF74u: goto label_8004BF74;
    case 0x8004BF78u: goto label_8004BF78;
    case 0x8004BF7Cu: goto label_8004BF7C;
    case 0x8004BF80u: goto label_8004BF80;
    case 0x8004BF84u: goto label_8004BF84;
    case 0x8004BF88u: goto label_8004BF88;
    case 0x8004BF8Cu: goto label_8004BF8C;
    case 0x8004BF90u: goto label_8004BF90;
    case 0x8004BF94u: goto label_8004BF94;
    case 0x8004BF98u: goto label_8004BF98;
    case 0x8004BF9Cu: goto label_8004BF9C;
    case 0x8004BFA0u: goto label_8004BFA0;
    case 0x8004BFA4u: goto label_8004BFA4;
    case 0x8004BFA8u: goto label_8004BFA8;
    case 0x8004BFACu: goto label_8004BFAC;
    case 0x8004BFB0u: goto label_8004BFB0;
    case 0x8004BFB4u: goto label_8004BFB4;
    case 0x8004BFB8u: goto label_8004BFB8;
    case 0x8004BFBCu: goto label_8004BFBC;
    case 0x8004BFC0u: goto label_8004BFC0;
    case 0x8004BFC4u: goto label_8004BFC4;
    case 0x8004BFC8u: goto label_8004BFC8;
    case 0x8004BFCCu: goto label_8004BFCC;
    case 0x8004BFD0u: goto label_8004BFD0;
    case 0x8004BFD4u: goto label_8004BFD4;
    case 0x8004BFD8u: goto label_8004BFD8;
    case 0x8004BFDCu: goto label_8004BFDC;
    case 0x8004BFE0u: goto label_8004BFE0;
    case 0x8004BFE4u: goto label_8004BFE4;
    case 0x8004BFE8u: goto label_8004BFE8;
    case 0x8004BFECu: goto label_8004BFEC;
    case 0x8004BFF0u: goto label_8004BFF0;
    case 0x8004BFF4u: goto label_8004BFF4;
    case 0x8004BFF8u: goto label_8004BFF8;
    case 0x8004BFFCu: goto label_8004BFFC;
    case 0x8004C000u: goto label_8004C000;
    case 0x8004C004u: goto label_8004C004;
    case 0x8004C008u: goto label_8004C008;
    case 0x8004C00Cu: goto label_8004C00C;
    case 0x8004C010u: goto label_8004C010;
    case 0x8004C014u: goto label_8004C014;
    case 0x8004C018u: goto label_8004C018;
    case 0x8004C01Cu: goto label_8004C01C;
    case 0x8004C020u: goto label_8004C020;
    case 0x8004C024u: goto label_8004C024;
    case 0x8004C028u: goto label_8004C028;
    case 0x8004C02Cu: goto label_8004C02C;
    case 0x8004C030u: goto label_8004C030;
    case 0x8004C034u: goto label_8004C034;
    case 0x8004C038u: goto label_8004C038;
    case 0x8004C03Cu: goto label_8004C03C;
    case 0x8004C040u: goto label_8004C040;
    case 0x8004C044u: goto label_8004C044;
    case 0x8004C048u: goto label_8004C048;
    case 0x8004C04Cu: goto label_8004C04C;
    case 0x8004C050u: goto label_8004C050;
    case 0x8004C054u: goto label_8004C054;
    case 0x8004C058u: goto label_8004C058;
    case 0x8004C05Cu: goto label_8004C05C;
    case 0x8004C060u: goto label_8004C060;
    case 0x8004C064u: goto label_8004C064;
    case 0x8004C068u: goto label_8004C068;
    case 0x8004C06Cu: goto label_8004C06C;
    case 0x8004C070u: goto label_8004C070;
    case 0x8004C074u: goto label_8004C074;
    case 0x8004C078u: goto label_8004C078;
    case 0x8004C07Cu: goto label_8004C07C;
    case 0x8004C080u: goto label_8004C080;
    case 0x8004C084u: goto label_8004C084;
    case 0x8004C088u: goto label_8004C088;
    case 0x8004C08Cu: goto label_8004C08C;
    case 0x8004C090u: goto label_8004C090;
    case 0x8004C094u: goto label_8004C094;
    case 0x8004C098u: goto label_8004C098;
    case 0x8004C09Cu: goto label_8004C09C;
    case 0x8004C0A0u: goto label_8004C0A0;
    case 0x8004C0A4u: goto label_8004C0A4;
    case 0x8004C0A8u: goto label_8004C0A8;
    case 0x8004C0ACu: goto label_8004C0AC;
    case 0x8004C0B0u: goto label_8004C0B0;
    case 0x8004C0B4u: goto label_8004C0B4;
    case 0x8004C0B8u: goto label_8004C0B8;
    case 0x8004C0BCu: goto label_8004C0BC;
    case 0x8004C0C0u: goto label_8004C0C0;
    case 0x8004C0C4u: goto label_8004C0C4;
    case 0x8004C0C8u: goto label_8004C0C8;
    case 0x8004C0CCu: goto label_8004C0CC;
    case 0x8004C0D0u: goto label_8004C0D0;
    case 0x8004C0D4u: goto label_8004C0D4;
    case 0x8004C0D8u: goto label_8004C0D8;
    case 0x8004C0DCu: goto label_8004C0DC;
    case 0x8004C0E0u: goto label_8004C0E0;
    case 0x8004C0E4u: goto label_8004C0E4;
    case 0x8004C0E8u: goto label_8004C0E8;
    case 0x8004C0ECu: goto label_8004C0EC;
    case 0x8004C0F0u: goto label_8004C0F0;
    case 0x8004C0F4u: goto label_8004C0F4;
    case 0x8004C0F8u: goto label_8004C0F8;
    case 0x8004C0FCu: goto label_8004C0FC;
    case 0x8004C100u: goto label_8004C100;
    case 0x8004C104u: goto label_8004C104;
    case 0x8004C108u: goto label_8004C108;
    case 0x8004C10Cu: goto label_8004C10C;
    case 0x8004C110u: goto label_8004C110;
    case 0x8004C114u: goto label_8004C114;
    case 0x8004C118u: goto label_8004C118;
    case 0x8004C11Cu: goto label_8004C11C;
    case 0x8004C120u: goto label_8004C120;
    case 0x8004C124u: goto label_8004C124;
    case 0x8004C128u: goto label_8004C128;
    case 0x8004C12Cu: goto label_8004C12C;
    case 0x8004C130u: goto label_8004C130;
    case 0x8004C134u: goto label_8004C134;
    case 0x8004C138u: goto label_8004C138;
    case 0x8004C13Cu: goto label_8004C13C;
    case 0x8004C140u: goto label_8004C140;
    case 0x8004C144u: goto label_8004C144;
    case 0x8004C148u: goto label_8004C148;
    case 0x8004C14Cu: goto label_8004C14C;
    case 0x8004C150u: goto label_8004C150;
    case 0x8004C154u: goto label_8004C154;
    case 0x8004C158u: goto label_8004C158;
    case 0x8004C15Cu: goto label_8004C15C;
    case 0x8004C160u: goto label_8004C160;
    case 0x8004C164u: goto label_8004C164;
    case 0x8004C168u: goto label_8004C168;
    case 0x8004C16Cu: goto label_8004C16C;
    case 0x8004C170u: goto label_8004C170;
    case 0x8004C174u: goto label_8004C174;
    case 0x8004C178u: goto label_8004C178;
    case 0x8004C17Cu: goto label_8004C17C;
    case 0x8004C180u: goto label_8004C180;
    case 0x8004C184u: goto label_8004C184;
    case 0x8004C188u: goto label_8004C188;
    case 0x8004C18Cu: goto label_8004C18C;
    case 0x8004C190u: goto label_8004C190;
    case 0x8004C194u: goto label_8004C194;
    case 0x8004C198u: goto label_8004C198;
    case 0x8004C19Cu: goto label_8004C19C;
    case 0x8004C1A0u: goto label_8004C1A0;
    case 0x8004C1A4u: goto label_8004C1A4;
    case 0x8004C1A8u: goto label_8004C1A8;
    case 0x8004C1ACu: goto label_8004C1AC;
    case 0x8004C1B0u: goto label_8004C1B0;
    case 0x8004C1B4u: goto label_8004C1B4;
    case 0x8004C1B8u: goto label_8004C1B8;
    case 0x8004C1BCu: goto label_8004C1BC;
    case 0x8004C1C0u: goto label_8004C1C0;
    case 0x8004C1C4u: goto label_8004C1C4;
    case 0x8004C1C8u: goto label_8004C1C8;
    case 0x8004C1CCu: goto label_8004C1CC;
    case 0x8004C1D0u: goto label_8004C1D0;
    case 0x8004C1D4u: goto label_8004C1D4;
    case 0x8004C1D8u: goto label_8004C1D8;
    case 0x8004C1DCu: goto label_8004C1DC;
    case 0x8004C1E0u: goto label_8004C1E0;
    case 0x8004C1E4u: goto label_8004C1E4;
    case 0x8004C1E8u: goto label_8004C1E8;
    case 0x8004C1ECu: goto label_8004C1EC;
    case 0x8004C1F0u: goto label_8004C1F0;
    case 0x8004C1F4u: goto label_8004C1F4;
    case 0x8004C1F8u: goto label_8004C1F8;
    case 0x8004C1FCu: goto label_8004C1FC;
    case 0x8004C200u: goto label_8004C200;
    case 0x8004C204u: goto label_8004C204;
    case 0x8004C208u: goto label_8004C208;
    case 0x8004C20Cu: goto label_8004C20C;
    case 0x8004C210u: goto label_8004C210;
    case 0x8004C214u: goto label_8004C214;
    case 0x8004C218u: goto label_8004C218;
    case 0x8004C21Cu: goto label_8004C21C;
    case 0x8004C220u: goto label_8004C220;
    case 0x8004C224u: goto label_8004C224;
    case 0x8004C228u: goto label_8004C228;
    case 0x8004C22Cu: goto label_8004C22C;
    case 0x8004C230u: goto label_8004C230;
    case 0x8004C234u: goto label_8004C234;
    case 0x8004C238u: goto label_8004C238;
    case 0x8004C23Cu: goto label_8004C23C;
    case 0x8004C240u: goto label_8004C240;
    case 0x8004C244u: goto label_8004C244;
    case 0x8004C248u: goto label_8004C248;
    case 0x8004C24Cu: goto label_8004C24C;
    case 0x8004C250u: goto label_8004C250;
    case 0x8004C254u: goto label_8004C254;
    case 0x8004C258u: goto label_8004C258;
    case 0x8004C25Cu: goto label_8004C25C;
    case 0x8004C260u: goto label_8004C260;
    case 0x8004C264u: goto label_8004C264;
    case 0x8004C268u: goto label_8004C268;
    case 0x8004C26Cu: goto label_8004C26C;
    case 0x8004C270u: goto label_8004C270;
    case 0x8004C274u: goto label_8004C274;
    case 0x8004C278u: goto label_8004C278;
    case 0x8004C27Cu: goto label_8004C27C;
    case 0x8004C280u: goto label_8004C280;
    case 0x8004C284u: goto label_8004C284;
    case 0x8004C288u: goto label_8004C288;
    case 0x8004C28Cu: goto label_8004C28C;
    case 0x8004C290u: goto label_8004C290;
    case 0x8004C294u: goto label_8004C294;
    case 0x8004C298u: goto label_8004C298;
    case 0x8004C29Cu: goto label_8004C29C;
    case 0x8004C2A0u: goto label_8004C2A0;
    case 0x8004C2A4u: goto label_8004C2A4;
    case 0x8004C2A8u: goto label_8004C2A8;
    case 0x8004C2ACu: goto label_8004C2AC;
    case 0x8004C2B0u: goto label_8004C2B0;
    case 0x8004C2B4u: goto label_8004C2B4;
    case 0x8004C2B8u: goto label_8004C2B8;
    case 0x8004C2BCu: goto label_8004C2BC;
    case 0x8004C2C0u: goto label_8004C2C0;
    case 0x8004C2C4u: goto label_8004C2C4;
    case 0x8004C2C8u: goto label_8004C2C8;
    case 0x8004C2CCu: goto label_8004C2CC;
    case 0x8004C2D0u: goto label_8004C2D0;
    case 0x8004C2D4u: goto label_8004C2D4;
    case 0x8004C2D8u: goto label_8004C2D8;
    case 0x8004C2DCu: goto label_8004C2DC;
    case 0x8004C2E0u: goto label_8004C2E0;
    case 0x8004C2E4u: goto label_8004C2E4;
    case 0x8004C2E8u: goto label_8004C2E8;
    case 0x8004C2ECu: goto label_8004C2EC;
    case 0x8004C2F0u: goto label_8004C2F0;
    case 0x8004C2F4u: goto label_8004C2F4;
    case 0x8004C2F8u: goto label_8004C2F8;
    case 0x8004C2FCu: goto label_8004C2FC;
    case 0x8004C300u: goto label_8004C300;
    case 0x8004C304u: goto label_8004C304;
    case 0x8004C308u: goto label_8004C308;
    case 0x8004C30Cu: goto label_8004C30C;
    case 0x8004C310u: goto label_8004C310;
    case 0x8004C314u: goto label_8004C314;
    case 0x8004C318u: goto label_8004C318;
    case 0x8004C31Cu: goto label_8004C31C;
    case 0x8004C320u: goto label_8004C320;
    case 0x8004C324u: goto label_8004C324;
    case 0x8004C328u: goto label_8004C328;
    case 0x8004C32Cu: goto label_8004C32C;
    case 0x8004C330u: goto label_8004C330;
    case 0x8004C334u: goto label_8004C334;
    case 0x8004C338u: goto label_8004C338;
    case 0x8004C33Cu: goto label_8004C33C;
    case 0x8004C340u: goto label_8004C340;
    case 0x8004C344u: goto label_8004C344;
    case 0x8004C348u: goto label_8004C348;
    case 0x8004C34Cu: goto label_8004C34C;
    case 0x8004C350u: goto label_8004C350;
    case 0x8004C354u: goto label_8004C354;
    case 0x8004C358u: goto label_8004C358;
    case 0x8004C35Cu: goto label_8004C35C;
    case 0x8004C360u: goto label_8004C360;
    case 0x8004C364u: goto label_8004C364;
    case 0x8004C368u: goto label_8004C368;
    case 0x8004C36Cu: goto label_8004C36C;
    case 0x8004C370u: goto label_8004C370;
    case 0x8004C374u: goto label_8004C374;
    case 0x8004C378u: goto label_8004C378;
    case 0x8004C37Cu: goto label_8004C37C;
    case 0x8004C380u: goto label_8004C380;
    case 0x8004C384u: goto label_8004C384;
    case 0x8004C388u: goto label_8004C388;
    case 0x8004C38Cu: goto label_8004C38C;
    case 0x8004C390u: goto label_8004C390;
    case 0x8004C394u: goto label_8004C394;
    case 0x8004C398u: goto label_8004C398;
    case 0x8004C39Cu: goto label_8004C39C;
    case 0x8004C3A0u: goto label_8004C3A0;
    case 0x8004C3A4u: goto label_8004C3A4;
    case 0x8004C3A8u: goto label_8004C3A8;
    case 0x8004C3ACu: goto label_8004C3AC;
    case 0x8004C3B0u: goto label_8004C3B0;
    case 0x8004C3B4u: goto label_8004C3B4;
    case 0x8004C3B8u: goto label_8004C3B8;
    case 0x8004C3BCu: goto label_8004C3BC;
    case 0x8004C3C0u: goto label_8004C3C0;
    case 0x8004C3C4u: goto label_8004C3C4;
    case 0x8004C3C8u: goto label_8004C3C8;
    case 0x8004C3CCu: goto label_8004C3CC;
    case 0x8004C3D0u: goto label_8004C3D0;
    case 0x8004C3D4u: goto label_8004C3D4;
    case 0x8004C3D8u: goto label_8004C3D8;
    case 0x8004C3DCu: goto label_8004C3DC;
    case 0x8004C3E0u: goto label_8004C3E0;
    case 0x8004C3E4u: goto label_8004C3E4;
    case 0x8004C3E8u: goto label_8004C3E8;
    case 0x8004C3ECu: goto label_8004C3EC;
    case 0x8004C3F0u: goto label_8004C3F0;
    case 0x8004C3F4u: goto label_8004C3F4;
    case 0x8004C3F8u: goto label_8004C3F8;
    case 0x8004C3FCu: goto label_8004C3FC;
    case 0x8004C400u: goto label_8004C400;
    case 0x8004C404u: goto label_8004C404;
    case 0x8004C408u: goto label_8004C408;
    case 0x8004C40Cu: goto label_8004C40C;
    case 0x8004C410u: goto label_8004C410;
    case 0x8004C414u: goto label_8004C414;
    case 0x8004C418u: goto label_8004C418;
    case 0x8004C41Cu: goto label_8004C41C;
    case 0x8004C420u: goto label_8004C420;
    case 0x8004C424u: goto label_8004C424;
    case 0x8004C428u: goto label_8004C428;
    case 0x8004C42Cu: goto label_8004C42C;
    case 0x8004C430u: goto label_8004C430;
    case 0x8004C434u: goto label_8004C434;
    case 0x8004C438u: goto label_8004C438;
    case 0x8004C43Cu: goto label_8004C43C;
    case 0x8004C440u: goto label_8004C440;
    case 0x8004C444u: goto label_8004C444;
    case 0x8004C448u: goto label_8004C448;
    case 0x8004C44Cu: goto label_8004C44C;
    case 0x8004C450u: goto label_8004C450;
    case 0x8004C454u: goto label_8004C454;
    case 0x8004C458u: goto label_8004C458;
    case 0x8004C45Cu: goto label_8004C45C;
    case 0x8004C460u: goto label_8004C460;
    case 0x8004C464u: goto label_8004C464;
    case 0x8004C468u: goto label_8004C468;
    case 0x8004C46Cu: goto label_8004C46C;
    case 0x8004C470u: goto label_8004C470;
    case 0x8004C474u: goto label_8004C474;
    case 0x8004C478u: goto label_8004C478;
    case 0x8004C47Cu: goto label_8004C47C;
    case 0x8004C480u: goto label_8004C480;
    case 0x8004C484u: goto label_8004C484;
    case 0x8004C488u: goto label_8004C488;
    case 0x8004C48Cu: goto label_8004C48C;
    case 0x8004C490u: goto label_8004C490;
    case 0x8004C494u: goto label_8004C494;
    case 0x8004C498u: goto label_8004C498;
    case 0x8004C49Cu: goto label_8004C49C;
    case 0x8004C4A0u: goto label_8004C4A0;
    case 0x8004C4A4u: goto label_8004C4A4;
    case 0x8004C4A8u: goto label_8004C4A8;
    case 0x8004C4ACu: goto label_8004C4AC;
    case 0x8004C4B0u: goto label_8004C4B0;
    case 0x8004C4B4u: goto label_8004C4B4;
    case 0x8004C4B8u: goto label_8004C4B8;
    case 0x8004C4BCu: goto label_8004C4BC;
    case 0x8004C4C0u: goto label_8004C4C0;
    case 0x8004C4C4u: goto label_8004C4C4;
    case 0x8004C4C8u: goto label_8004C4C8;
    case 0x8004C4CCu: goto label_8004C4CC;
    case 0x8004C4D0u: goto label_8004C4D0;
    case 0x8004C4D4u: goto label_8004C4D4;
    case 0x8004C4D8u: goto label_8004C4D8;
    case 0x8004C4DCu: goto label_8004C4DC;
    case 0x8004C4E0u: goto label_8004C4E0;
    case 0x8004C4E4u: goto label_8004C4E4;
    case 0x8004C4E8u: goto label_8004C4E8;
    case 0x8004C4ECu: goto label_8004C4EC;
    case 0x8004C4F0u: goto label_8004C4F0;
    case 0x8004C4F4u: goto label_8004C4F4;
    case 0x8004C4F8u: goto label_8004C4F8;
    case 0x8004C4FCu: goto label_8004C4FC;
    case 0x8004C500u: goto label_8004C500;
    case 0x8004C504u: goto label_8004C504;
    case 0x8004C508u: goto label_8004C508;
    case 0x8004C50Cu: goto label_8004C50C;
    case 0x8004C510u: goto label_8004C510;
    case 0x8004C514u: goto label_8004C514;
    case 0x8004C518u: goto label_8004C518;
    case 0x8004C51Cu: goto label_8004C51C;
    case 0x8004C520u: goto label_8004C520;
    case 0x8004C524u: goto label_8004C524;
    case 0x8004C528u: goto label_8004C528;
    case 0x8004C52Cu: goto label_8004C52C;
    case 0x8004C530u: goto label_8004C530;
    case 0x8004C534u: goto label_8004C534;
    case 0x8004C538u: goto label_8004C538;
    case 0x8004C53Cu: goto label_8004C53C;
    case 0x8004C540u: goto label_8004C540;
    case 0x8004C544u: goto label_8004C544;
    case 0x8004C548u: goto label_8004C548;
    case 0x8004C54Cu: goto label_8004C54C;
    case 0x8004C550u: goto label_8004C550;
    case 0x8004C554u: goto label_8004C554;
    case 0x8004C558u: goto label_8004C558;
    case 0x8004C55Cu: goto label_8004C55C;
    case 0x8004C560u: goto label_8004C560;
    case 0x8004C564u: goto label_8004C564;
    case 0x8004C568u: goto label_8004C568;
    case 0x8004C56Cu: goto label_8004C56C;
    case 0x8004C570u: goto label_8004C570;
    case 0x8004C574u: goto label_8004C574;
    case 0x8004C578u: goto label_8004C578;
    case 0x8004C57Cu: goto label_8004C57C;
    case 0x8004C580u: goto label_8004C580;
    case 0x8004C584u: goto label_8004C584;
    case 0x8004C588u: goto label_8004C588;
    case 0x8004C58Cu: goto label_8004C58C;
    case 0x8004C590u: goto label_8004C590;
    case 0x8004C594u: goto label_8004C594;
    case 0x8004C598u: goto label_8004C598;
    case 0x8004C59Cu: goto label_8004C59C;
    case 0x8004C5A0u: goto label_8004C5A0;
    case 0x8004C5A4u: goto label_8004C5A4;
    case 0x8004C5A8u: goto label_8004C5A8;
    case 0x8004C5ACu: goto label_8004C5AC;
    case 0x8004C5B0u: goto label_8004C5B0;
    case 0x8004C5B4u: goto label_8004C5B4;
    case 0x8004C5B8u: goto label_8004C5B8;
    case 0x8004C5BCu: goto label_8004C5BC;
    case 0x8004C5C0u: goto label_8004C5C0;
    case 0x8004C5C4u: goto label_8004C5C4;
    case 0x8004C5C8u: goto label_8004C5C8;
    case 0x8004C5CCu: goto label_8004C5CC;
    case 0x8004C5D0u: goto label_8004C5D0;
    case 0x8004C5D4u: goto label_8004C5D4;
    case 0x8004C5D8u: goto label_8004C5D8;
    case 0x8004C5DCu: goto label_8004C5DC;
    case 0x8004C5E0u: goto label_8004C5E0;
    case 0x8004C5E4u: goto label_8004C5E4;
    case 0x8004C5E8u: goto label_8004C5E8;
    case 0x8004C5ECu: goto label_8004C5EC;
    case 0x8004C5F0u: goto label_8004C5F0;
    case 0x8004C5F4u: goto label_8004C5F4;
    case 0x8004C5F8u: goto label_8004C5F8;
    case 0x8004C5FCu: goto label_8004C5FC;
    case 0x8004C600u: goto label_8004C600;
    case 0x8004C604u: goto label_8004C604;
    case 0x8004C608u: goto label_8004C608;
    case 0x8004C60Cu: goto label_8004C60C;
    case 0x8004C610u: goto label_8004C610;
    case 0x8004C614u: goto label_8004C614;
    case 0x8004C618u: goto label_8004C618;
    case 0x8004C61Cu: goto label_8004C61C;
    case 0x8004C620u: goto label_8004C620;
    case 0x8004C624u: goto label_8004C624;
    case 0x8004C628u: goto label_8004C628;
    case 0x8004C62Cu: goto label_8004C62C;
    case 0x8004C630u: goto label_8004C630;
    case 0x8004C634u: goto label_8004C634;
    case 0x8004C638u: goto label_8004C638;
    case 0x8004C63Cu: goto label_8004C63C;
    case 0x8004C640u: goto label_8004C640;
    case 0x8004C644u: goto label_8004C644;
    case 0x8004C648u: goto label_8004C648;
    case 0x8004C64Cu: goto label_8004C64C;
    case 0x8004C650u: goto label_8004C650;
    case 0x8004C654u: goto label_8004C654;
    case 0x8004C658u: goto label_8004C658;
    case 0x8004C65Cu: goto label_8004C65C;
    case 0x8004C660u: goto label_8004C660;
    case 0x8004C664u: goto label_8004C664;
    case 0x8004C668u: goto label_8004C668;
    case 0x8004C66Cu: goto label_8004C66C;
    case 0x8004C670u: goto label_8004C670;
    case 0x8004C674u: goto label_8004C674;
    case 0x8004C678u: goto label_8004C678;
    case 0x8004C67Cu: goto label_8004C67C;
    case 0x8004C680u: goto label_8004C680;
    case 0x8004C684u: goto label_8004C684;
    case 0x8004C688u: goto label_8004C688;
    case 0x8004C68Cu: goto label_8004C68C;
    case 0x8004C690u: goto label_8004C690;
    case 0x8004C694u: goto label_8004C694;
    case 0x8004C698u: goto label_8004C698;
    case 0x8004C69Cu: goto label_8004C69C;
    case 0x8004C6A0u: goto label_8004C6A0;
    case 0x8004C6A4u: goto label_8004C6A4;
    case 0x8004C6A8u: goto label_8004C6A8;
    case 0x8004C6ACu: goto label_8004C6AC;
    case 0x8004C6B0u: goto label_8004C6B0;
    case 0x8004C6B4u: goto label_8004C6B4;
    case 0x8004C6B8u: goto label_8004C6B8;
    case 0x8004C6BCu: goto label_8004C6BC;
    case 0x8004C6C0u: goto label_8004C6C0;
    case 0x8004C6C4u: goto label_8004C6C4;
    case 0x8004C6C8u: goto label_8004C6C8;
    case 0x8004C6CCu: goto label_8004C6CC;
    case 0x8004C6D0u: goto label_8004C6D0;
    case 0x8004C6D4u: goto label_8004C6D4;
    case 0x8004C6D8u: goto label_8004C6D8;
    case 0x8004C6DCu: goto label_8004C6DC;
    case 0x8004C6E0u: goto label_8004C6E0;
    case 0x8004C6E4u: goto label_8004C6E4;
    case 0x8004C6E8u: goto label_8004C6E8;
    case 0x8004C6ECu: goto label_8004C6EC;
    case 0x8004C6F0u: goto label_8004C6F0;
    case 0x8004C6F4u: goto label_8004C6F4;
    case 0x8004C6F8u: goto label_8004C6F8;
    case 0x8004C6FCu: goto label_8004C6FC;
    case 0x8004C700u: goto label_8004C700;
    case 0x8004C704u: goto label_8004C704;
    case 0x8004C708u: goto label_8004C708;
    case 0x8004C70Cu: goto label_8004C70C;
    case 0x8004C710u: goto label_8004C710;
    case 0x8004C714u: goto label_8004C714;
    case 0x8004C718u: goto label_8004C718;
    case 0x8004C71Cu: goto label_8004C71C;
    case 0x8004C720u: goto label_8004C720;
    case 0x8004C724u: goto label_8004C724;
    case 0x8004C728u: goto label_8004C728;
    case 0x8004C72Cu: goto label_8004C72C;
    case 0x8004C730u: goto label_8004C730;
    case 0x8004C734u: goto label_8004C734;
    case 0x8004C738u: goto label_8004C738;
    case 0x8004C73Cu: goto label_8004C73C;
    case 0x8004C740u: goto label_8004C740;
    case 0x8004C744u: goto label_8004C744;
    case 0x8004C748u: goto label_8004C748;
    case 0x8004C74Cu: goto label_8004C74C;
    case 0x8004C750u: goto label_8004C750;
    case 0x8004C754u: goto label_8004C754;
    case 0x8004C758u: goto label_8004C758;
    case 0x8004C75Cu: goto label_8004C75C;
    case 0x8004C760u: goto label_8004C760;
    case 0x8004C764u: goto label_8004C764;
    case 0x8004C768u: goto label_8004C768;
    case 0x8004C76Cu: goto label_8004C76C;
    case 0x8004C770u: goto label_8004C770;
    case 0x8004C774u: goto label_8004C774;
    case 0x8004C778u: goto label_8004C778;
    case 0x8004C77Cu: goto label_8004C77C;
    case 0x8004C780u: goto label_8004C780;
    case 0x8004C784u: goto label_8004C784;
    case 0x8004C788u: goto label_8004C788;
    case 0x8004C78Cu: goto label_8004C78C;
    case 0x8004C790u: goto label_8004C790;
    case 0x8004C794u: goto label_8004C794;
    case 0x8004C798u: goto label_8004C798;
    case 0x8004C79Cu: goto label_8004C79C;
    case 0x8004C7A0u: goto label_8004C7A0;
    case 0x8004C7A4u: goto label_8004C7A4;
    case 0x8004C7A8u: goto label_8004C7A8;
    case 0x8004C7ACu: goto label_8004C7AC;
    case 0x8004C7B0u: goto label_8004C7B0;
    case 0x8004C7B4u: goto label_8004C7B4;
    case 0x8004C7B8u: goto label_8004C7B8;
    case 0x8004C7BCu: goto label_8004C7BC;
    case 0x8004C7C0u: goto label_8004C7C0;
    case 0x8004C7C4u: goto label_8004C7C4;
    case 0x8004C7C8u: goto label_8004C7C8;
    case 0x8004C7CCu: goto label_8004C7CC;
    case 0x8004C7D0u: goto label_8004C7D0;
    case 0x8004C7D4u: goto label_8004C7D4;
    case 0x8004C7D8u: goto label_8004C7D8;
    case 0x8004C7DCu: goto label_8004C7DC;
    case 0x8004C7E0u: goto label_8004C7E0;
    case 0x8004C7E4u: goto label_8004C7E4;
    case 0x8004C7E8u: goto label_8004C7E8;
    case 0x8004C7ECu: goto label_8004C7EC;
    case 0x8004C7F0u: goto label_8004C7F0;
    case 0x8004C7F4u: goto label_8004C7F4;
    case 0x8004C7F8u: goto label_8004C7F8;
    case 0x8004C7FCu: goto label_8004C7FC;
    case 0x8004C800u: goto label_8004C800;
    case 0x8004C804u: goto label_8004C804;
    case 0x8004C808u: goto label_8004C808;
    case 0x8004C80Cu: goto label_8004C80C;
    case 0x8004C810u: goto label_8004C810;
    case 0x8004C814u: goto label_8004C814;
    case 0x8004C818u: goto label_8004C818;
    case 0x8004C81Cu: goto label_8004C81C;
    case 0x8004C820u: goto label_8004C820;
    case 0x8004C824u: goto label_8004C824;
    case 0x8004C828u: goto label_8004C828;
    case 0x8004C82Cu: goto label_8004C82C;
    case 0x8004C830u: goto label_8004C830;
    case 0x8004C834u: goto label_8004C834;
    case 0x8004C838u: goto label_8004C838;
    case 0x8004C83Cu: goto label_8004C83C;
    case 0x8004C840u: goto label_8004C840;
    case 0x8004C844u: goto label_8004C844;
    case 0x8004C848u: goto label_8004C848;
    case 0x8004C84Cu: goto label_8004C84C;
    case 0x8004C850u: goto label_8004C850;
    case 0x8004C854u: goto label_8004C854;
    case 0x8004C858u: goto label_8004C858;
    case 0x8004C85Cu: goto label_8004C85C;
    case 0x8004C860u: goto label_8004C860;
    case 0x8004C864u: goto label_8004C864;
    case 0x8004C868u: goto label_8004C868;
    case 0x8004C86Cu: goto label_8004C86C;
    case 0x8004C870u: goto label_8004C870;
    case 0x8004C874u: goto label_8004C874;
    case 0x8004C878u: goto label_8004C878;
    case 0x8004C87Cu: goto label_8004C87C;
    case 0x8004C880u: goto label_8004C880;
    case 0x8004C884u: goto label_8004C884;
    case 0x8004C888u: goto label_8004C888;
    case 0x8004C88Cu: goto label_8004C88C;
    case 0x8004C890u: goto label_8004C890;
    case 0x8004C894u: goto label_8004C894;
    case 0x8004C898u: goto label_8004C898;
    case 0x8004C89Cu: goto label_8004C89C;
    case 0x8004C8A0u: goto label_8004C8A0;
    case 0x8004C8A4u: goto label_8004C8A4;
    case 0x8004C8A8u: goto label_8004C8A8;
    case 0x8004C8ACu: goto label_8004C8AC;
    case 0x8004C8B0u: goto label_8004C8B0;
    case 0x8004C8B4u: goto label_8004C8B4;
    case 0x8004C8B8u: goto label_8004C8B8;
    case 0x8004C8BCu: goto label_8004C8BC;
    case 0x8004C8C0u: goto label_8004C8C0;
    case 0x8004C8C4u: goto label_8004C8C4;
    case 0x8004C8C8u: goto label_8004C8C8;
    case 0x8004C8CCu: goto label_8004C8CC;
    case 0x8004C8D0u: goto label_8004C8D0;
    case 0x8004C8D4u: goto label_8004C8D4;
    case 0x8004C8D8u: goto label_8004C8D8;
    case 0x8004C8DCu: goto label_8004C8DC;
    case 0x8004C8E0u: goto label_8004C8E0;
    case 0x8004C8E4u: goto label_8004C8E4;
    case 0x8004C8E8u: goto label_8004C8E8;
    case 0x8004C8ECu: goto label_8004C8EC;
    case 0x8004C8F0u: goto label_8004C8F0;
    case 0x8004C8F4u: goto label_8004C8F4;
    case 0x8004C8F8u: goto label_8004C8F8;
    case 0x8004C8FCu: goto label_8004C8FC;
    case 0x8004C900u: goto label_8004C900;
    case 0x8004C904u: goto label_8004C904;
    case 0x8004C908u: goto label_8004C908;
    case 0x8004C90Cu: goto label_8004C90C;
    case 0x8004C910u: goto label_8004C910;
    case 0x8004C914u: goto label_8004C914;
    case 0x8004C918u: goto label_8004C918;
    case 0x8004C91Cu: goto label_8004C91C;
    case 0x8004C920u: goto label_8004C920;
    case 0x8004C924u: goto label_8004C924;
    case 0x8004C928u: goto label_8004C928;
    case 0x8004C92Cu: goto label_8004C92C;
    case 0x8004C930u: goto label_8004C930;
    case 0x8004C934u: goto label_8004C934;
    case 0x8004C938u: goto label_8004C938;
    case 0x8004C93Cu: goto label_8004C93C;
    case 0x8004C940u: goto label_8004C940;
    case 0x8004C944u: goto label_8004C944;
    case 0x8004C948u: goto label_8004C948;
    case 0x8004C94Cu: goto label_8004C94C;
    case 0x8004C950u: goto label_8004C950;
    case 0x8004C954u: goto label_8004C954;
    case 0x8004C958u: goto label_8004C958;
    case 0x8004C95Cu: goto label_8004C95C;
    case 0x8004C960u: goto label_8004C960;
    case 0x8004C964u: goto label_8004C964;
    case 0x8004C968u: goto label_8004C968;
    case 0x8004C96Cu: goto label_8004C96C;
    case 0x8004C970u: goto label_8004C970;
    case 0x8004C974u: goto label_8004C974;
    case 0x8004C978u: goto label_8004C978;
    case 0x8004C97Cu: goto label_8004C97C;
    case 0x8004C980u: goto label_8004C980;
    case 0x8004C984u: goto label_8004C984;
    case 0x8004C988u: goto label_8004C988;
    case 0x8004C98Cu: goto label_8004C98C;
    case 0x8004C990u: goto label_8004C990;
    case 0x8004C994u: goto label_8004C994;
    case 0x8004C998u: goto label_8004C998;
    case 0x8004C99Cu: goto label_8004C99C;
    case 0x8004C9A0u: goto label_8004C9A0;
    case 0x8004C9A4u: goto label_8004C9A4;
    case 0x8004C9A8u: goto label_8004C9A8;
    case 0x8004C9ACu: goto label_8004C9AC;
    case 0x8004C9B0u: goto label_8004C9B0;
    case 0x8004C9B4u: goto label_8004C9B4;
    case 0x8004C9B8u: goto label_8004C9B8;
    case 0x8004C9BCu: goto label_8004C9BC;
    case 0x8004C9C0u: goto label_8004C9C0;
    case 0x8004C9C4u: goto label_8004C9C4;
    case 0x8004C9C8u: goto label_8004C9C8;
    case 0x8004C9CCu: goto label_8004C9CC;
    case 0x8004C9D0u: goto label_8004C9D0;
    case 0x8004C9D4u: goto label_8004C9D4;
    case 0x8004C9D8u: goto label_8004C9D8;
    case 0x8004C9DCu: goto label_8004C9DC;
    case 0x8004C9E0u: goto label_8004C9E0;
    case 0x8004C9E4u: goto label_8004C9E4;
    case 0x8004C9E8u: goto label_8004C9E8;
    case 0x8004C9ECu: goto label_8004C9EC;
    case 0x8004C9F0u: goto label_8004C9F0;
    case 0x8004C9F4u: goto label_8004C9F4;
    case 0x8004C9F8u: goto label_8004C9F8;
    case 0x8004C9FCu: goto label_8004C9FC;
    case 0x8004CA00u: goto label_8004CA00;
    case 0x8004CA04u: goto label_8004CA04;
    case 0x8004CA08u: goto label_8004CA08;
    case 0x8004CA0Cu: goto label_8004CA0C;
    case 0x8004CA10u: goto label_8004CA10;
    case 0x8004CA14u: goto label_8004CA14;
    case 0x8004CA18u: goto label_8004CA18;
    case 0x8004CA1Cu: goto label_8004CA1C;
    case 0x8004CA20u: goto label_8004CA20;
    case 0x8004CA24u: goto label_8004CA24;
    case 0x8004CA28u: goto label_8004CA28;
    case 0x8004CA2Cu: goto label_8004CA2C;
    case 0x8004CA30u: goto label_8004CA30;
    case 0x8004CA34u: goto label_8004CA34;
    case 0x8004CA38u: goto label_8004CA38;
    case 0x8004CA3Cu: goto label_8004CA3C;
    case 0x8004CA40u: goto label_8004CA40;
    case 0x8004CA44u: goto label_8004CA44;
    case 0x8004CA48u: goto label_8004CA48;
    case 0x8004CA4Cu: goto label_8004CA4C;
    case 0x8004CA50u: goto label_8004CA50;
    case 0x8004CA54u: goto label_8004CA54;
    case 0x8004CA58u: goto label_8004CA58;
    case 0x8004CA5Cu: goto label_8004CA5C;
    case 0x8004CA60u: goto label_8004CA60;
    case 0x8004CA64u: goto label_8004CA64;
    case 0x8004CA68u: goto label_8004CA68;
    case 0x8004CA6Cu: goto label_8004CA6C;
    case 0x8004CA70u: goto label_8004CA70;
    case 0x8004CA74u: goto label_8004CA74;
    case 0x8004CA78u: goto label_8004CA78;
    case 0x8004CA7Cu: goto label_8004CA7C;
    case 0x8004CA80u: goto label_8004CA80;
    case 0x8004CA84u: goto label_8004CA84;
    case 0x8004CA88u: goto label_8004CA88;
    case 0x8004CA8Cu: goto label_8004CA8C;
    case 0x8004CA90u: goto label_8004CA90;
    case 0x8004CA94u: goto label_8004CA94;
    case 0x8004CA98u: goto label_8004CA98;
    case 0x8004CA9Cu: goto label_8004CA9C;
    case 0x8004CAA0u: goto label_8004CAA0;
    case 0x8004CAA4u: goto label_8004CAA4;
    case 0x8004CAA8u: goto label_8004CAA8;
    case 0x8004CAACu: goto label_8004CAAC;
    case 0x8004CAB0u: goto label_8004CAB0;
    case 0x8004CAB4u: goto label_8004CAB4;
    case 0x8004CAB8u: goto label_8004CAB8;
    case 0x8004CABCu: goto label_8004CABC;
    case 0x8004CAC0u: goto label_8004CAC0;
    case 0x8004CAC4u: goto label_8004CAC4;
    case 0x8004CAC8u: goto label_8004CAC8;
    case 0x8004CACCu: goto label_8004CACC;
    case 0x8004CAD0u: goto label_8004CAD0;
    case 0x8004CAD4u: goto label_8004CAD4;
    case 0x8004CAD8u: goto label_8004CAD8;
    case 0x8004CADCu: goto label_8004CADC;
    case 0x8004CAE0u: goto label_8004CAE0;
    case 0x8004CAE4u: goto label_8004CAE4;
    case 0x8004CAE8u: goto label_8004CAE8;
    case 0x8004CAECu: goto label_8004CAEC;
    case 0x8004CAF0u: goto label_8004CAF0;
    case 0x8004CAF4u: goto label_8004CAF4;
    case 0x8004CAF8u: goto label_8004CAF8;
    case 0x8004CAFCu: goto label_8004CAFC;
    case 0x8004CB00u: goto label_8004CB00;
    case 0x8004CB04u: goto label_8004CB04;
    case 0x8004CB08u: goto label_8004CB08;
    case 0x8004CB0Cu: goto label_8004CB0C;
    case 0x8004CB10u: goto label_8004CB10;
    case 0x8004CB14u: goto label_8004CB14;
    case 0x8004CB18u: goto label_8004CB18;
    case 0x8004CB1Cu: goto label_8004CB1C;
    case 0x8004CB20u: goto label_8004CB20;
    case 0x8004CB24u: goto label_8004CB24;
    case 0x8004CB28u: goto label_8004CB28;
    case 0x8004CB2Cu: goto label_8004CB2C;
    case 0x8004CB30u: goto label_8004CB30;
    case 0x8004CB34u: goto label_8004CB34;
    case 0x8004CB38u: goto label_8004CB38;
    case 0x8004CB3Cu: goto label_8004CB3C;
    case 0x8004CB40u: goto label_8004CB40;
    case 0x8004CB44u: goto label_8004CB44;
    case 0x8004CB48u: goto label_8004CB48;
    case 0x8004CB4Cu: goto label_8004CB4C;
    case 0x8004CB50u: goto label_8004CB50;
    case 0x8004CB54u: goto label_8004CB54;
    case 0x8004CB58u: goto label_8004CB58;
    case 0x8004CB5Cu: goto label_8004CB5C;
    case 0x8004CB60u: goto label_8004CB60;
    case 0x8004CB64u: goto label_8004CB64;
    case 0x8004CB68u: goto label_8004CB68;
    case 0x8004CB6Cu: goto label_8004CB6C;
    case 0x8004CB70u: goto label_8004CB70;
    case 0x8004CB74u: goto label_8004CB74;
    case 0x8004CB78u: goto label_8004CB78;
    case 0x8004CB7Cu: goto label_8004CB7C;
    case 0x8004CB80u: goto label_8004CB80;
    case 0x8004CB84u: goto label_8004CB84;
    case 0x8004CB88u: goto label_8004CB88;
    case 0x8004CB8Cu: goto label_8004CB8C;
    case 0x8004CB90u: goto label_8004CB90;
    case 0x8004CB94u: goto label_8004CB94;
    case 0x8004CB98u: goto label_8004CB98;
    case 0x8004CB9Cu: goto label_8004CB9C;
    case 0x8004CBA0u: goto label_8004CBA0;
    case 0x8004CBA4u: goto label_8004CBA4;
    case 0x8004CBA8u: goto label_8004CBA8;
    case 0x8004CBACu: goto label_8004CBAC;
    case 0x8004CBB0u: goto label_8004CBB0;
    case 0x8004CBB4u: goto label_8004CBB4;
    case 0x8004CBB8u: goto label_8004CBB8;
    case 0x8004CBBCu: goto label_8004CBBC;
    case 0x8004CBC0u: goto label_8004CBC0;
    case 0x8004CBC4u: goto label_8004CBC4;
    case 0x8004CBC8u: goto label_8004CBC8;
    case 0x8004CBCCu: goto label_8004CBCC;
    case 0x8004CBD0u: goto label_8004CBD0;
    case 0x8004CBD4u: goto label_8004CBD4;
    case 0x8004CBD8u: goto label_8004CBD8;
    case 0x8004CBDCu: goto label_8004CBDC;
    case 0x8004CBE0u: goto label_8004CBE0;
    case 0x8004CBE4u: goto label_8004CBE4;
    case 0x8004CBE8u: goto label_8004CBE8;
    case 0x8004CBECu: goto label_8004CBEC;
    case 0x8004CBF0u: goto label_8004CBF0;
    case 0x8004CBF4u: goto label_8004CBF4;
    case 0x8004CBF8u: goto label_8004CBF8;
    case 0x8004CBFCu: goto label_8004CBFC;
    case 0x8004CC00u: goto label_8004CC00;
    case 0x8004CC04u: goto label_8004CC04;
    case 0x8004CC08u: goto label_8004CC08;
    case 0x8004CC0Cu: goto label_8004CC0C;
    case 0x8004CC10u: goto label_8004CC10;
    case 0x8004CC14u: goto label_8004CC14;
    case 0x8004CC18u: goto label_8004CC18;
    case 0x8004CC1Cu: goto label_8004CC1C;
    case 0x8004CC20u: goto label_8004CC20;
    case 0x8004CC24u: goto label_8004CC24;
    case 0x8004CC28u: goto label_8004CC28;
    case 0x8004CC2Cu: goto label_8004CC2C;
    case 0x8004CC30u: goto label_8004CC30;
    case 0x8004CC34u: goto label_8004CC34;
    case 0x8004CC38u: goto label_8004CC38;
    case 0x8004CC3Cu: goto label_8004CC3C;
    case 0x8004CC40u: goto label_8004CC40;
    case 0x8004CC44u: goto label_8004CC44;
    case 0x8004CC48u: goto label_8004CC48;
    case 0x8004CC4Cu: goto label_8004CC4C;
    case 0x8004CC50u: goto label_8004CC50;
    case 0x8004CC54u: goto label_8004CC54;
    case 0x8004CC58u: goto label_8004CC58;
    case 0x8004CC5Cu: goto label_8004CC5C;
    case 0x8004CC60u: goto label_8004CC60;
    case 0x8004CC64u: goto label_8004CC64;
    case 0x8004CC68u: goto label_8004CC68;
    case 0x8004CC6Cu: goto label_8004CC6C;
    case 0x8004CC70u: goto label_8004CC70;
    case 0x8004CC74u: goto label_8004CC74;
    case 0x8004CC78u: goto label_8004CC78;
    case 0x8004CC7Cu: goto label_8004CC7C;
    case 0x8004CC80u: goto label_8004CC80;
    case 0x8004CC84u: goto label_8004CC84;
    case 0x8004CC88u: goto label_8004CC88;
    case 0x8004CC8Cu: goto label_8004CC8C;
    case 0x8004CC90u: goto label_8004CC90;
    case 0x8004CC94u: goto label_8004CC94;
    case 0x8004CC98u: goto label_8004CC98;
    case 0x8004CC9Cu: goto label_8004CC9C;
    case 0x8004CCA0u: goto label_8004CCA0;
    case 0x8004CCA4u: goto label_8004CCA4;
    case 0x8004CCA8u: goto label_8004CCA8;
    case 0x8004CCACu: goto label_8004CCAC;
    case 0x8004CCB0u: goto label_8004CCB0;
    case 0x8004CCB4u: goto label_8004CCB4;
    case 0x8004CCB8u: goto label_8004CCB8;
    case 0x8004CCBCu: goto label_8004CCBC;
    case 0x8004CCC0u: goto label_8004CCC0;
    case 0x8004CCC4u: goto label_8004CCC4;
    case 0x8004CCC8u: goto label_8004CCC8;
    case 0x8004CCCCu: goto label_8004CCCC;
    case 0x8004CCD0u: goto label_8004CCD0;
    case 0x8004CCD4u: goto label_8004CCD4;
    case 0x8004CCD8u: goto label_8004CCD8;
    case 0x8004CCDCu: goto label_8004CCDC;
    case 0x8004CCE0u: goto label_8004CCE0;
    case 0x8004CCE4u: goto label_8004CCE4;
    case 0x8004CCE8u: goto label_8004CCE8;
    case 0x8004CCECu: goto label_8004CCEC;
    case 0x8004CCF0u: goto label_8004CCF0;
    case 0x8004CCF4u: goto label_8004CCF4;
    case 0x8004CCF8u: goto label_8004CCF8;
    case 0x8004CCFCu: goto label_8004CCFC;
    case 0x8004CD00u: goto label_8004CD00;
    case 0x8004CD04u: goto label_8004CD04;
    case 0x8004CD08u: goto label_8004CD08;
    case 0x8004CD0Cu: goto label_8004CD0C;
    case 0x8004CD10u: goto label_8004CD10;
    case 0x8004CD14u: goto label_8004CD14;
    case 0x8004CD18u: goto label_8004CD18;
    case 0x8004CD1Cu: goto label_8004CD1C;
    case 0x8004CD20u: goto label_8004CD20;
    case 0x8004CD24u: goto label_8004CD24;
    case 0x8004CD28u: goto label_8004CD28;
    case 0x8004CD2Cu: goto label_8004CD2C;
    case 0x8004CD30u: goto label_8004CD30;
    case 0x8004CD34u: goto label_8004CD34;
    case 0x8004CD38u: goto label_8004CD38;
    case 0x8004CD3Cu: goto label_8004CD3C;
    case 0x8004CD40u: goto label_8004CD40;
    case 0x8004CD44u: goto label_8004CD44;
    case 0x8004CD48u: goto label_8004CD48;
    case 0x8004CD4Cu: goto label_8004CD4C;
    case 0x8004CD50u: goto label_8004CD50;
    case 0x8004CD54u: goto label_8004CD54;
    case 0x8004CD58u: goto label_8004CD58;
    case 0x8004CD5Cu: goto label_8004CD5C;
    case 0x8004CD60u: goto label_8004CD60;
    case 0x8004CD64u: goto label_8004CD64;
    case 0x8004CD68u: goto label_8004CD68;
    case 0x8004CD6Cu: goto label_8004CD6C;
    case 0x8004CD70u: goto label_8004CD70;
    case 0x8004CD74u: goto label_8004CD74;
    case 0x8004CD78u: goto label_8004CD78;
    case 0x8004CD7Cu: goto label_8004CD7C;
    case 0x8004CD80u: goto label_8004CD80;
    case 0x8004CD84u: goto label_8004CD84;
    case 0x8004CD88u: goto label_8004CD88;
    case 0x8004CD8Cu: goto label_8004CD8C;
    case 0x8004CD90u: goto label_8004CD90;
    case 0x8004CD94u: goto label_8004CD94;
    case 0x8004CD98u: goto label_8004CD98;
    case 0x8004CD9Cu: goto label_8004CD9C;
    case 0x8004CDA0u: goto label_8004CDA0;
    case 0x8004CDA4u: goto label_8004CDA4;
    case 0x8004CDA8u: goto label_8004CDA8;
    case 0x8004CDACu: goto label_8004CDAC;
    case 0x8004CDB0u: goto label_8004CDB0;
    case 0x8004CDB4u: goto label_8004CDB4;
    case 0x8004CDB8u: goto label_8004CDB8;
    case 0x8004CDBCu: goto label_8004CDBC;
    case 0x8004CDC0u: goto label_8004CDC0;
    case 0x8004CDC4u: goto label_8004CDC4;
    case 0x8004CDC8u: goto label_8004CDC8;
    case 0x8004CDCCu: goto label_8004CDCC;
    case 0x8004CDD0u: goto label_8004CDD0;
    case 0x8004CDD4u: goto label_8004CDD4;
    case 0x8004CDD8u: goto label_8004CDD8;
    case 0x8004CDDCu: goto label_8004CDDC;
    case 0x8004CDE0u: goto label_8004CDE0;
    case 0x8004CDE4u: goto label_8004CDE4;
    case 0x8004CDE8u: goto label_8004CDE8;
    case 0x8004CDECu: goto label_8004CDEC;
    case 0x8004CDF0u: goto label_8004CDF0;
    case 0x8004CDF4u: goto label_8004CDF4;
    case 0x8004CDF8u: goto label_8004CDF8;
    case 0x8004CDFCu: goto label_8004CDFC;
    case 0x8004CE00u: goto label_8004CE00;
    case 0x8004CE04u: goto label_8004CE04;
    case 0x8004CE08u: goto label_8004CE08;
    case 0x8004CE0Cu: goto label_8004CE0C;
    case 0x8004CE10u: goto label_8004CE10;
    case 0x8004CE14u: goto label_8004CE14;
    case 0x8004CE18u: goto label_8004CE18;
    case 0x8004CE1Cu: goto label_8004CE1C;
    case 0x8004CE20u: goto label_8004CE20;
    case 0x8004CE24u: goto label_8004CE24;
    case 0x8004CE28u: goto label_8004CE28;
    case 0x8004CE2Cu: goto label_8004CE2C;
    case 0x8004CE30u: goto label_8004CE30;
    case 0x8004CE34u: goto label_8004CE34;
    case 0x8004CE38u: goto label_8004CE38;
    case 0x8004CE3Cu: goto label_8004CE3C;
    case 0x8004CE40u: goto label_8004CE40;
    case 0x8004CE44u: goto label_8004CE44;
    case 0x8004CE48u: goto label_8004CE48;
    case 0x8004CE4Cu: goto label_8004CE4C;
    case 0x8004CE50u: goto label_8004CE50;
    case 0x8004CE54u: goto label_8004CE54;
    case 0x8004CE58u: goto label_8004CE58;
    case 0x8004CE5Cu: goto label_8004CE5C;
    case 0x8004CE60u: goto label_8004CE60;
    case 0x8004CE64u: goto label_8004CE64;
    case 0x8004CE68u: goto label_8004CE68;
    case 0x8004CE6Cu: goto label_8004CE6C;
    case 0x8004CE70u: goto label_8004CE70;
    case 0x8004CE74u: goto label_8004CE74;
    case 0x8004CE78u: goto label_8004CE78;
    case 0x8004CE7Cu: goto label_8004CE7C;
    case 0x8004CE80u: goto label_8004CE80;
    case 0x8004CE84u: goto label_8004CE84;
    case 0x8004CE88u: goto label_8004CE88;
    case 0x8004CE8Cu: goto label_8004CE8C;
    case 0x8004CE90u: goto label_8004CE90;
    case 0x8004CE94u: goto label_8004CE94;
    case 0x8004CE98u: goto label_8004CE98;
    case 0x8004CE9Cu: goto label_8004CE9C;
    case 0x8004CEA0u: goto label_8004CEA0;
    case 0x8004CEA4u: goto label_8004CEA4;
    case 0x8004CEA8u: goto label_8004CEA8;
    case 0x8004CEACu: goto label_8004CEAC;
    case 0x8004CEB0u: goto label_8004CEB0;
    case 0x8004CEB4u: goto label_8004CEB4;
    case 0x8004CEB8u: goto label_8004CEB8;
    case 0x8004CEBCu: goto label_8004CEBC;
    case 0x8004CEC0u: goto label_8004CEC0;
    case 0x8004CEC4u: goto label_8004CEC4;
    case 0x8004CEC8u: goto label_8004CEC8;
    case 0x8004CECCu: goto label_8004CECC;
    case 0x8004CED0u: goto label_8004CED0;
    case 0x8004CED4u: goto label_8004CED4;
    case 0x8004CED8u: goto label_8004CED8;
    case 0x8004CEDCu: goto label_8004CEDC;
    case 0x8004CEE0u: goto label_8004CEE0;
    case 0x8004CEE4u: goto label_8004CEE4;
    case 0x8004CEE8u: goto label_8004CEE8;
    case 0x8004CEECu: goto label_8004CEEC;
    case 0x8004CEF0u: goto label_8004CEF0;
    case 0x8004CEF4u: goto label_8004CEF4;
    case 0x8004CEF8u: goto label_8004CEF8;
    case 0x8004CEFCu: goto label_8004CEFC;
    case 0x8004CF00u: goto label_8004CF00;
    case 0x8004CF04u: goto label_8004CF04;
    case 0x8004CF08u: goto label_8004CF08;
    case 0x8004CF0Cu: goto label_8004CF0C;
    case 0x8004CF10u: goto label_8004CF10;
    case 0x8004CF14u: goto label_8004CF14;
    case 0x8004CF18u: goto label_8004CF18;
    case 0x8004CF1Cu: goto label_8004CF1C;
    case 0x8004CF20u: goto label_8004CF20;
    case 0x8004CF24u: goto label_8004CF24;
    case 0x8004CF28u: goto label_8004CF28;
    case 0x8004CF2Cu: goto label_8004CF2C;
    case 0x8004CF30u: goto label_8004CF30;
    case 0x8004CF34u: goto label_8004CF34;
    case 0x8004CF38u: goto label_8004CF38;
    case 0x8004CF3Cu: goto label_8004CF3C;
    case 0x8004CF40u: goto label_8004CF40;
    case 0x8004CF44u: goto label_8004CF44;
    case 0x8004CF48u: goto label_8004CF48;
    case 0x8004CF4Cu: goto label_8004CF4C;
    case 0x8004CF50u: goto label_8004CF50;
    case 0x8004CF54u: goto label_8004CF54;
    case 0x8004CF58u: goto label_8004CF58;
    case 0x8004CF5Cu: goto label_8004CF5C;
    case 0x8004CF60u: goto label_8004CF60;
    case 0x8004CF64u: goto label_8004CF64;
    case 0x8004CF68u: goto label_8004CF68;
    case 0x8004CF6Cu: goto label_8004CF6C;
    case 0x8004CF70u: goto label_8004CF70;
    case 0x8004CF74u: goto label_8004CF74;
    case 0x8004CF78u: goto label_8004CF78;
    case 0x8004CF7Cu: goto label_8004CF7C;
    case 0x8004CF80u: goto label_8004CF80;
    case 0x8004CF84u: goto label_8004CF84;
    case 0x8004CF88u: goto label_8004CF88;
    case 0x8004CF8Cu: goto label_8004CF8C;
    case 0x8004CF90u: goto label_8004CF90;
    case 0x8004CF94u: goto label_8004CF94;
    case 0x8004CF98u: goto label_8004CF98;
    case 0x8004CF9Cu: goto label_8004CF9C;
    case 0x8004CFA0u: goto label_8004CFA0;
    case 0x8004CFA4u: goto label_8004CFA4;
    case 0x8004CFA8u: goto label_8004CFA8;
    case 0x8004CFACu: goto label_8004CFAC;
    case 0x8004CFB0u: goto label_8004CFB0;
    case 0x8004CFB4u: goto label_8004CFB4;
    case 0x8004CFB8u: goto label_8004CFB8;
    case 0x8004CFBCu: goto label_8004CFBC;
    case 0x8004CFC0u: goto label_8004CFC0;
    case 0x8004CFC4u: goto label_8004CFC4;
    case 0x8004CFC8u: goto label_8004CFC8;
    case 0x8004CFCCu: goto label_8004CFCC;
    case 0x8004CFD0u: goto label_8004CFD0;
    case 0x8004CFD4u: goto label_8004CFD4;
    case 0x8004CFD8u: goto label_8004CFD8;
    case 0x8004CFDCu: goto label_8004CFDC;
    case 0x8004CFE0u: goto label_8004CFE0;
    case 0x8004CFE4u: goto label_8004CFE4;
    case 0x8004CFE8u: goto label_8004CFE8;
    case 0x8004CFECu: goto label_8004CFEC;
    case 0x8004CFF0u: goto label_8004CFF0;
    case 0x8004CFF4u: goto label_8004CFF4;
    case 0x8004CFF8u: goto label_8004CFF8;
    case 0x8004CFFCu: goto label_8004CFFC;
    case 0x8004D000u: goto label_8004D000;
    case 0x8004D004u: goto label_8004D004;
    case 0x8004D008u: goto label_8004D008;
    case 0x8004D00Cu: goto label_8004D00C;
    case 0x8004D010u: goto label_8004D010;
    case 0x8004D014u: goto label_8004D014;
    case 0x8004D018u: goto label_8004D018;
    case 0x8004D01Cu: goto label_8004D01C;
    case 0x8004D020u: goto label_8004D020;
    case 0x8004D024u: goto label_8004D024;
    case 0x8004D028u: goto label_8004D028;
    case 0x8004D02Cu: goto label_8004D02C;
    case 0x8004D030u: goto label_8004D030;
    case 0x8004D034u: goto label_8004D034;
    case 0x8004D038u: goto label_8004D038;
    case 0x8004D03Cu: goto label_8004D03C;
    case 0x8004D040u: goto label_8004D040;
    case 0x8004D044u: goto label_8004D044;
    case 0x8004D048u: goto label_8004D048;
    case 0x8004D04Cu: goto label_8004D04C;
    case 0x8004D050u: goto label_8004D050;
    case 0x8004D054u: goto label_8004D054;
    case 0x8004D058u: goto label_8004D058;
    case 0x8004D05Cu: goto label_8004D05C;
    case 0x8004D060u: goto label_8004D060;
    case 0x8004D064u: goto label_8004D064;
    case 0x8004D068u: goto label_8004D068;
    case 0x8004D06Cu: goto label_8004D06C;
    case 0x8004D070u: goto label_8004D070;
    case 0x8004D074u: goto label_8004D074;
    case 0x8004D078u: goto label_8004D078;
    case 0x8004D07Cu: goto label_8004D07C;
    case 0x8004D080u: goto label_8004D080;
    case 0x8004D084u: goto label_8004D084;
    case 0x8004D088u: goto label_8004D088;
    case 0x8004D08Cu: goto label_8004D08C;
    case 0x8004D090u: goto label_8004D090;
    case 0x8004D094u: goto label_8004D094;
    case 0x8004D098u: goto label_8004D098;
    case 0x8004D09Cu: goto label_8004D09C;
    case 0x8004D0A0u: goto label_8004D0A0;
    case 0x8004D0A4u: goto label_8004D0A4;
    case 0x8004D0A8u: goto label_8004D0A8;
    case 0x8004D0ACu: goto label_8004D0AC;
    case 0x8004D0B0u: goto label_8004D0B0;
    case 0x8004D0B4u: goto label_8004D0B4;
    case 0x8004D0B8u: goto label_8004D0B8;
    case 0x8004D0BCu: goto label_8004D0BC;
    case 0x8004D0C0u: goto label_8004D0C0;
    case 0x8004D0C4u: goto label_8004D0C4;
    case 0x8004D0C8u: goto label_8004D0C8;
    case 0x8004D0CCu: goto label_8004D0CC;
    case 0x8004D0D0u: goto label_8004D0D0;
    case 0x8004D0D4u: goto label_8004D0D4;
    case 0x8004D0D8u: goto label_8004D0D8;
    case 0x8004D0DCu: goto label_8004D0DC;
    case 0x8004D0E0u: goto label_8004D0E0;
    case 0x8004D0E4u: goto label_8004D0E4;
    case 0x8004D0E8u: goto label_8004D0E8;
    case 0x8004D0ECu: goto label_8004D0EC;
    case 0x8004D0F0u: goto label_8004D0F0;
    case 0x8004D0F4u: goto label_8004D0F4;
    case 0x8004D0F8u: goto label_8004D0F8;
    case 0x8004D0FCu: goto label_8004D0FC;
    case 0x8004D100u: goto label_8004D100;
    case 0x8004D104u: goto label_8004D104;
    case 0x8004D108u: goto label_8004D108;
    case 0x8004D10Cu: goto label_8004D10C;
    case 0x8004D110u: goto label_8004D110;
    case 0x8004D114u: goto label_8004D114;
    case 0x8004D118u: goto label_8004D118;
    case 0x8004D11Cu: goto label_8004D11C;
    case 0x8004D120u: goto label_8004D120;
    case 0x8004D124u: goto label_8004D124;
    case 0x8004D128u: goto label_8004D128;
    case 0x8004D12Cu: goto label_8004D12C;
    case 0x8004D130u: goto label_8004D130;
    case 0x8004D134u: goto label_8004D134;
    case 0x8004D138u: goto label_8004D138;
    case 0x8004D13Cu: goto label_8004D13C;
    case 0x8004D140u: goto label_8004D140;
    case 0x8004D144u: goto label_8004D144;
    case 0x8004D148u: goto label_8004D148;
    case 0x8004D14Cu: goto label_8004D14C;
    case 0x8004D150u: goto label_8004D150;
    case 0x8004D154u: goto label_8004D154;
    case 0x8004D158u: goto label_8004D158;
    case 0x8004D15Cu: goto label_8004D15C;
    case 0x8004D160u: goto label_8004D160;
    case 0x8004D164u: goto label_8004D164;
    case 0x8004D168u: goto label_8004D168;
    case 0x8004D16Cu: goto label_8004D16C;
    case 0x8004D170u: goto label_8004D170;
    case 0x8004D174u: goto label_8004D174;
    case 0x8004D178u: goto label_8004D178;
    case 0x8004D17Cu: goto label_8004D17C;
    case 0x8004D180u: goto label_8004D180;
    case 0x8004D184u: goto label_8004D184;
    case 0x8004D188u: goto label_8004D188;
    case 0x8004D18Cu: goto label_8004D18C;
    case 0x8004D190u: goto label_8004D190;
    case 0x8004D194u: goto label_8004D194;
    case 0x8004D198u: goto label_8004D198;
    case 0x8004D19Cu: goto label_8004D19C;
    case 0x8004D1A0u: goto label_8004D1A0;
    case 0x8004D1A4u: goto label_8004D1A4;
    case 0x8004D1A8u: goto label_8004D1A8;
    case 0x8004D1ACu: goto label_8004D1AC;
    case 0x8004D1B0u: goto label_8004D1B0;
    case 0x8004D1B4u: goto label_8004D1B4;
    case 0x8004D1B8u: goto label_8004D1B8;
    case 0x8004D1BCu: goto label_8004D1BC;
    case 0x8004D1C0u: goto label_8004D1C0;
    case 0x8004D1C4u: goto label_8004D1C4;
    case 0x8004D1C8u: goto label_8004D1C8;
    case 0x8004D1CCu: goto label_8004D1CC;
    case 0x8004D1D0u: goto label_8004D1D0;
    case 0x8004D1D4u: goto label_8004D1D4;
    case 0x8004D1D8u: goto label_8004D1D8;
    case 0x8004D1DCu: goto label_8004D1DC;
    case 0x8004D1E0u: goto label_8004D1E0;
    case 0x8004D1E4u: goto label_8004D1E4;
    case 0x8004D1E8u: goto label_8004D1E8;
    case 0x8004D1ECu: goto label_8004D1EC;
    case 0x8004D1F0u: goto label_8004D1F0;
    case 0x8004D1F4u: goto label_8004D1F4;
    case 0x8004D1F8u: goto label_8004D1F8;
    case 0x8004D1FCu: goto label_8004D1FC;
    case 0x8004D200u: goto label_8004D200;
    case 0x8004D204u: goto label_8004D204;
    case 0x8004D208u: goto label_8004D208;
    case 0x8004D20Cu: goto label_8004D20C;
    case 0x8004D210u: goto label_8004D210;
    case 0x8004D214u: goto label_8004D214;
    case 0x8004D218u: goto label_8004D218;
    case 0x8004D21Cu: goto label_8004D21C;
    case 0x8004D220u: goto label_8004D220;
    case 0x8004D224u: goto label_8004D224;
    case 0x8004D228u: goto label_8004D228;
    case 0x8004D22Cu: goto label_8004D22C;
    case 0x8004D230u: goto label_8004D230;
    case 0x8004D234u: goto label_8004D234;
    case 0x8004D238u: goto label_8004D238;
    case 0x8004D23Cu: goto label_8004D23C;
    case 0x8004D240u: goto label_8004D240;
    case 0x8004D244u: goto label_8004D244;
    case 0x8004D248u: goto label_8004D248;
    case 0x8004D24Cu: goto label_8004D24C;
    case 0x8004D250u: goto label_8004D250;
    case 0x8004D254u: goto label_8004D254;
    case 0x8004D258u: goto label_8004D258;
    case 0x8004D25Cu: goto label_8004D25C;
    case 0x8004D260u: goto label_8004D260;
    case 0x8004D264u: goto label_8004D264;
    case 0x8004D268u: goto label_8004D268;
    case 0x8004D26Cu: goto label_8004D26C;
    case 0x8004D270u: goto label_8004D270;
    case 0x8004D274u: goto label_8004D274;
    case 0x8004D278u: goto label_8004D278;
    case 0x8004D27Cu: goto label_8004D27C;
    case 0x8004D280u: goto label_8004D280;
    case 0x8004D284u: goto label_8004D284;
    case 0x8004D288u: goto label_8004D288;
    case 0x8004D28Cu: goto label_8004D28C;
    case 0x8004D290u: goto label_8004D290;
    case 0x8004D294u: goto label_8004D294;
    case 0x8004D298u: goto label_8004D298;
    case 0x8004D29Cu: goto label_8004D29C;
    case 0x8004D2A0u: goto label_8004D2A0;
    case 0x8004D2A4u: goto label_8004D2A4;
    case 0x8004D2A8u: goto label_8004D2A8;
    case 0x8004D2ACu: goto label_8004D2AC;
    case 0x8004D2B0u: goto label_8004D2B0;
    case 0x8004D2B4u: goto label_8004D2B4;
    case 0x8004D2B8u: goto label_8004D2B8;
    case 0x8004D2BCu: goto label_8004D2BC;
    case 0x8004D2C0u: goto label_8004D2C0;
    case 0x8004D2C4u: goto label_8004D2C4;
    case 0x8004D2C8u: goto label_8004D2C8;
    case 0x8004D2CCu: goto label_8004D2CC;
    case 0x8004D2D0u: goto label_8004D2D0;
    case 0x8004D2D4u: goto label_8004D2D4;
    case 0x8004D2D8u: goto label_8004D2D8;
    case 0x8004D2DCu: goto label_8004D2DC;
    case 0x8004D2E0u: goto label_8004D2E0;
    case 0x8004D2E4u: goto label_8004D2E4;
    case 0x8004D2E8u: goto label_8004D2E8;
    case 0x8004D2ECu: goto label_8004D2EC;
    case 0x8004D2F0u: goto label_8004D2F0;
    case 0x8004D2F4u: goto label_8004D2F4;
    case 0x8004D2F8u: goto label_8004D2F8;
    case 0x8004D2FCu: goto label_8004D2FC;
    case 0x8004D300u: goto label_8004D300;
    case 0x8004D304u: goto label_8004D304;
    case 0x8004D308u: goto label_8004D308;
    case 0x8004D30Cu: goto label_8004D30C;
    case 0x8004D310u: goto label_8004D310;
    case 0x8004D314u: goto label_8004D314;
    case 0x8004D318u: goto label_8004D318;
    case 0x8004D31Cu: goto label_8004D31C;
    case 0x8004D320u: goto label_8004D320;
    case 0x8004D324u: goto label_8004D324;
    case 0x8004D328u: goto label_8004D328;
    case 0x8004D32Cu: goto label_8004D32C;
    case 0x8004D330u: goto label_8004D330;
    case 0x8004D334u: goto label_8004D334;
    case 0x8004D338u: goto label_8004D338;
    case 0x8004D33Cu: goto label_8004D33C;
    case 0x8004D340u: goto label_8004D340;
    case 0x8004D344u: goto label_8004D344;
    case 0x8004D348u: goto label_8004D348;
    case 0x8004D34Cu: goto label_8004D34C;
    case 0x8004D350u: goto label_8004D350;
    case 0x8004D354u: goto label_8004D354;
    case 0x8004D358u: goto label_8004D358;
    case 0x8004D35Cu: goto label_8004D35C;
    case 0x8004D360u: goto label_8004D360;
    case 0x8004D364u: goto label_8004D364;
    case 0x8004D368u: goto label_8004D368;
    case 0x8004D36Cu: goto label_8004D36C;
    case 0x8004D370u: goto label_8004D370;
    case 0x8004D374u: goto label_8004D374;
    case 0x8004D378u: goto label_8004D378;
    case 0x8004D37Cu: goto label_8004D37C;
    case 0x8004D380u: goto label_8004D380;
    case 0x8004D384u: goto label_8004D384;
    case 0x8004D388u: goto label_8004D388;
    case 0x8004D38Cu: goto label_8004D38C;
    case 0x8004D390u: goto label_8004D390;
    case 0x8004D394u: goto label_8004D394;
    case 0x8004D398u: goto label_8004D398;
    case 0x8004D39Cu: goto label_8004D39C;
    case 0x8004D3A0u: goto label_8004D3A0;
    case 0x8004D3A4u: goto label_8004D3A4;
    case 0x8004D3A8u: goto label_8004D3A8;
    case 0x8004D3ACu: goto label_8004D3AC;
    case 0x8004D3B0u: goto label_8004D3B0;
    case 0x8004D3B4u: goto label_8004D3B4;
    case 0x8004D3B8u: goto label_8004D3B8;
    case 0x8004D3BCu: goto label_8004D3BC;
    case 0x8004D3C0u: goto label_8004D3C0;
    case 0x8004D3C4u: goto label_8004D3C4;
    case 0x8004D3C8u: goto label_8004D3C8;
    case 0x8004D3CCu: goto label_8004D3CC;
    case 0x8004D3D0u: goto label_8004D3D0;
    case 0x8004D3D4u: goto label_8004D3D4;
    case 0x8004D3D8u: goto label_8004D3D8;
    case 0x8004D3DCu: goto label_8004D3DC;
    case 0x8004D3E0u: goto label_8004D3E0;
    case 0x8004D3E4u: goto label_8004D3E4;
    case 0x8004D3E8u: goto label_8004D3E8;
    case 0x8004D3ECu: goto label_8004D3EC;
    case 0x8004D3F0u: goto label_8004D3F0;
    case 0x8004D3F4u: goto label_8004D3F4;
    case 0x8004D3F8u: goto label_8004D3F8;
    case 0x8004D3FCu: goto label_8004D3FC;
    case 0x8004D400u: goto label_8004D400;
    case 0x8004D404u: goto label_8004D404;
    case 0x8004D408u: goto label_8004D408;
    case 0x8004D40Cu: goto label_8004D40C;
    case 0x8004D410u: goto label_8004D410;
    case 0x8004D414u: goto label_8004D414;
    case 0x8004D418u: goto label_8004D418;
    case 0x8004D41Cu: goto label_8004D41C;
    case 0x8004D420u: goto label_8004D420;
    case 0x8004D424u: goto label_8004D424;
    case 0x8004D428u: goto label_8004D428;
    case 0x8004D42Cu: goto label_8004D42C;
    case 0x8004D430u: goto label_8004D430;
    case 0x8004D434u: goto label_8004D434;
    case 0x8004D438u: goto label_8004D438;
    case 0x8004D43Cu: goto label_8004D43C;
    case 0x8004D440u: goto label_8004D440;
    case 0x8004D444u: goto label_8004D444;
    case 0x8004D448u: goto label_8004D448;
    case 0x8004D44Cu: goto label_8004D44C;
    case 0x8004D450u: goto label_8004D450;
    case 0x8004D454u: goto label_8004D454;
    case 0x8004D458u: goto label_8004D458;
    case 0x8004D45Cu: goto label_8004D45C;
    case 0x8004D460u: goto label_8004D460;
    case 0x8004D464u: goto label_8004D464;
    case 0x8004D468u: goto label_8004D468;
    case 0x8004D46Cu: goto label_8004D46C;
    case 0x8004D470u: goto label_8004D470;
    case 0x8004D474u: goto label_8004D474;
    case 0x8004D478u: goto label_8004D478;
    case 0x8004D47Cu: goto label_8004D47C;
    case 0x8004D480u: goto label_8004D480;
    case 0x8004D484u: goto label_8004D484;
    case 0x8004D488u: goto label_8004D488;
    case 0x8004D48Cu: goto label_8004D48C;
    case 0x8004D490u: goto label_8004D490;
    case 0x8004D494u: goto label_8004D494;
    case 0x8004D498u: goto label_8004D498;
    case 0x8004D49Cu: goto label_8004D49C;
    case 0x8004D4A0u: goto label_8004D4A0;
    case 0x8004D4A4u: goto label_8004D4A4;
    case 0x8004D4A8u: goto label_8004D4A8;
    case 0x8004D4ACu: goto label_8004D4AC;
    case 0x8004D4B0u: goto label_8004D4B0;
    case 0x8004D4B4u: goto label_8004D4B4;
    case 0x8004D4B8u: goto label_8004D4B8;
    case 0x8004D4BCu: goto label_8004D4BC;
    case 0x8004D4C0u: goto label_8004D4C0;
    case 0x8004D4C4u: goto label_8004D4C4;
    case 0x8004D4C8u: goto label_8004D4C8;
    case 0x8004D4CCu: goto label_8004D4CC;
    case 0x8004D4D0u: goto label_8004D4D0;
    case 0x8004D4D4u: goto label_8004D4D4;
    case 0x8004D4D8u: goto label_8004D4D8;
    case 0x8004D4DCu: goto label_8004D4DC;
    case 0x8004D4E0u: goto label_8004D4E0;
    case 0x8004D4E4u: goto label_8004D4E4;
    case 0x8004D4E8u: goto label_8004D4E8;
    case 0x8004D4ECu: goto label_8004D4EC;
    case 0x8004D4F0u: goto label_8004D4F0;
    case 0x8004D4F4u: goto label_8004D4F4;
    case 0x8004D4F8u: goto label_8004D4F8;
    case 0x8004D4FCu: goto label_8004D4FC;
    case 0x8004D500u: goto label_8004D500;
    case 0x8004D504u: goto label_8004D504;
    case 0x8004D508u: goto label_8004D508;
    case 0x8004D50Cu: goto label_8004D50C;
    case 0x8004D510u: goto label_8004D510;
    case 0x8004D514u: goto label_8004D514;
    case 0x8004D518u: goto label_8004D518;
    case 0x8004D51Cu: goto label_8004D51C;
    case 0x8004D520u: goto label_8004D520;
    case 0x8004D524u: goto label_8004D524;
    case 0x8004D528u: goto label_8004D528;
    case 0x8004D52Cu: goto label_8004D52C;
    case 0x8004D530u: goto label_8004D530;
    case 0x8004D534u: goto label_8004D534;
    case 0x8004D538u: goto label_8004D538;
    case 0x8004D53Cu: goto label_8004D53C;
    case 0x8004D540u: goto label_8004D540;
    case 0x8004D544u: goto label_8004D544;
    case 0x8004D548u: goto label_8004D548;
    case 0x8004D54Cu: goto label_8004D54C;
    case 0x8004D550u: goto label_8004D550;
    case 0x8004D554u: goto label_8004D554;
    case 0x8004D558u: goto label_8004D558;
    case 0x8004D55Cu: goto label_8004D55C;
    case 0x8004D560u: goto label_8004D560;
    case 0x8004D564u: goto label_8004D564;
    case 0x8004D568u: goto label_8004D568;
    case 0x8004D56Cu: goto label_8004D56C;
    case 0x8004D570u: goto label_8004D570;
    case 0x8004D574u: goto label_8004D574;
    case 0x8004D578u: goto label_8004D578;
    case 0x8004D57Cu: goto label_8004D57C;
    case 0x8004D580u: goto label_8004D580;
    case 0x8004D584u: goto label_8004D584;
    case 0x8004D588u: goto label_8004D588;
    case 0x8004D58Cu: goto label_8004D58C;
    case 0x8004D590u: goto label_8004D590;
    case 0x8004D594u: goto label_8004D594;
    case 0x8004D598u: goto label_8004D598;
    case 0x8004D59Cu: goto label_8004D59C;
    case 0x8004D5A0u: goto label_8004D5A0;
    case 0x8004D5A4u: goto label_8004D5A4;
    case 0x8004D5A8u: goto label_8004D5A8;
    case 0x8004D5ACu: goto label_8004D5AC;
    case 0x8004D5B0u: goto label_8004D5B0;
    case 0x8004D5B4u: goto label_8004D5B4;
    case 0x8004D5B8u: goto label_8004D5B8;
    case 0x8004D5BCu: goto label_8004D5BC;
    case 0x8004D5C0u: goto label_8004D5C0;
    case 0x8004D5C4u: goto label_8004D5C4;
    case 0x8004D5C8u: goto label_8004D5C8;
    case 0x8004D5CCu: goto label_8004D5CC;
    case 0x8004D5D0u: goto label_8004D5D0;
    case 0x8004D5D4u: goto label_8004D5D4;
    case 0x8004D5D8u: goto label_8004D5D8;
    case 0x8004D5DCu: goto label_8004D5DC;
    default: return;
    }
label_800495E0:
    ctx->pc = 0x800495E0u;
    ctx->downcount -= 12;
    // 800495E0: stb     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_800495E4:
    ctx->pc = 0x800495E4u;
    // 800495E4: lwz     r0, -31032(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800495E8:
    ctx->pc = 0x800495E8u;
    // 800495E8: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800495EC:
    ctx->pc = 0x800495ECu;
    // 800495EC: stb     r4, 5(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_800495F0:
    ctx->pc = 0x800495F0u;
    // 800495F0: lwz     r0, -31032(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800495F4:
    ctx->pc = 0x800495F4u;
    // 800495F4: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800495F8:
    ctx->pc = 0x800495F8u;
    // 800495F8: stb     r4, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_800495FC:
    ctx->pc = 0x800495FCu;
    // 800495FC: lwz     r0, -31032(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049600:
    ctx->pc = 0x80049600u;
    // 80049600: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80049604:
    ctx->pc = 0x80049604u;
    // 80049604: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_80049608:
    ctx->pc = 0x80049608u;
    // 80049608: stb     r4, 7(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8004960C:
    ctx->pc = 0x8004960Cu;
    // 8004960C: bc    16, 0, 0x80049548
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80049548u;
            return;
        }
    }

label_80049610:
    ctx->pc = 0x80049610u;
    ctx->downcount -= 1;
    // 80049610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049614:
    ctx->pc = 0x80049614u;
    ctx->downcount -= 5;
    // 80049614: li      r0, 512
    ctx->gpr[0] = (u32)(s32)(512);

label_80049618:
    ctx->pc = 0x80049618u;
    // 80049618: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004961C:
    ctx->pc = 0x8004961Cu;
    // 8004961C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049620:
    ctx->pc = 0x80049620u;
    // 80049620: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80049624:
    loop_80049624(ctx);
    if (ctx->pc == 0x80049688u) goto label_80049688;
    return;
label_80049628:
    ctx->pc = 0x80049628u;
    // 80049628: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004962C:
    // 8004962C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049630:
    ctx->pc = 0x80049630u;
    // 80049630: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049634:
    ctx->pc = 0x80049634u;
    // 80049634: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049638:
    // 80049638: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8004963C:
    ctx->pc = 0x8004963Cu;
    // 8004963C: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049640:
    ctx->pc = 0x80049640u;
    // 80049640: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049644:
    // 80049644: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049648:
    ctx->pc = 0x80049648u;
    // 80049648: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004964C:
    ctx->pc = 0x8004964Cu;
    // 8004964C: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049650:
    // 80049650: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049654:
    ctx->pc = 0x80049654u;
    // 80049654: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049658:
    ctx->pc = 0x80049658u;
    // 80049658: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004965C:
    // 8004965C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049660:
    ctx->pc = 0x80049660u;
    // 80049660: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049664:
    ctx->pc = 0x80049664u;
    // 80049664: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049668:
    // 80049668: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8004966C:
    ctx->pc = 0x8004966Cu;
    // 8004966C: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049670:
    ctx->pc = 0x80049670u;
    // 80049670: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049674:
    // 80049674: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049678:
    ctx->pc = 0x80049678u;
    // 80049678: lwz     r3, -31036(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004967C:
    ctx->pc = 0x8004967Cu;
    // 8004967C: stwx    r4, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80049680:
    // 80049680: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80049684:
    // 80049684: bc    16, 0, 0x80049624
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049624u;
                return;
            }
            goto label_80049624;
        }
    }

label_80049688:
    ctx->pc = 0x80049688u;
    ctx->downcount -= 1;
    // 80049688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004968C:
    ctx->pc = 0x8004968Cu;
    ctx->downcount -= 9;
    // 8004968C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80049690:
    ctx->pc = 0x80049690u;
    // 80049690: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80049694:
    ctx->pc = 0x80049694u;
    // 80049694: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049698:
    ctx->pc = 0x80049698u;
    // 80049698: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004969C:
    ctx->pc = 0x8004969Cu;
    // 8004969C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800496A0:
    ctx->pc = 0x800496A0u;
    // 800496A0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800496A4:
    ctx->pc = 0x800496A4u;
    // 800496A4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800496A8:
    ctx->pc = 0x800496A8u;
    // 800496A8: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800496AC:
    ctx->pc = 0x800496ACu;
    // 800496AC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800496B0:
    ctx->pc = 0x800496B0u;
    ctx->downcount -= 5;
    // 800496B0: lwz     r0, -31040(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800496B4:
    // 800496B4: add   r3, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800496B8:
    ctx->pc = 0x800496B8u;
    // 800496B8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800496BC:
    // 800496BC: rlwinm. r0, r0, 0, 0, 0
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x80000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800496C0:
    // 800496C0: bc    12, 2, 0x800496E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800496E0;
        }
    }

label_800496C4:
    ctx->pc = 0x800496C4u;
    ctx->downcount -= 3;
    // 800496C4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800496C8:
    // 800496C8: rlwinm. r0, r0, 0, 24, 24
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

label_800496CC:
    // 800496CC: bc    12, 2, 0x800496E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800496E0;
        }
    }

label_800496D0:
    ctx->downcount -= 1;
    // 800496D0: bl      0x80049724
    {
            ctx->lr = 0x800496D4u;
            goto label_80049724;
    }

label_800496D4:
    ctx->downcount -= 4;
    // 800496D4: or   r12, r29, r29
    {
        ctx->gpr[12] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800496D8:
    ctx->pc = 0x800496D8u;
    // 800496D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_800496DC:
    ctx->pc = 0x800496DCu;
    // 800496DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800496E0u;
            ctx->pc = target;
            return;
        }
    }

label_800496E0:
    ctx->downcount -= 4;
    // 800496E0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_800496E4:
    // 800496E4: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_800496E8:
    // 800496E8: cmplwi  r30, 0x2000
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x2000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800496EC:
    // 800496EC: bc    12, 0, 0x800496B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800496B0u;
                return;
            }
            goto label_800496B0;
        }
    }

label_800496F0:
    ctx->pc = 0x800496F0u;
    ctx->downcount -= 8;
    // 800496F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800496F4:
    ctx->pc = 0x800496F4u;
    // 800496F4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800496F8:
    ctx->pc = 0x800496F8u;
    // 800496F8: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800496FC:
    ctx->pc = 0x800496FCu;
    // 800496FC: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80049700:
    ctx->pc = 0x80049700u;
    // 80049700: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80049704:
    ctx->pc = 0x80049704u;
    // 80049704: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80049708:
    ctx->pc = 0x80049708u;
    // 80049708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004970C:
    ctx->pc = 0x8004970Cu;
    ctx->downcount -= 6;
    // 8004970C: lwz     r4, -31040(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31040);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80049710:
    ctx->pc = 0x80049710u;
    // 80049710: rlwinm r0, r3, 26, 16, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 26u) & 0x0000FFC0u;
    }

label_80049714:
    ctx->pc = 0x80049714u;
    // 80049714: rlwinm r3, r3, 13, 26, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 13u) & 0x00000038u;
    }

label_80049718:
    ctx->pc = 0x80049718u;
    // 80049718: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8004971C:
    ctx->pc = 0x8004971Cu;
    // 8004971C: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80049720:
    ctx->pc = 0x80049720u;
    // 80049720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049724:
    ctx->pc = 0x80049724u;
    ctx->downcount -= 7;
    // 80049724: lwz     r0, -31040(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049728:
    ctx->pc = 0x80049728u;
    // 80049728: subf   r4, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8004972C:
    ctx->pc = 0x8004972Cu;
    // 8004972C: rlwinm r0, r4, 19, 7, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 19u) & 0x01C00000u;
    }

label_80049730:
    ctx->pc = 0x80049730u;
    // 80049730: oris    r3, r0, 0x7E00
    ctx->gpr[3] = ctx->gpr[0] | (0x7E00u << 16);

label_80049734:
    ctx->pc = 0x80049734u;
    // 80049734: rlwinm r0, r4, 6, 10, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0x003FF000u;
    }

label_80049738:
    ctx->pc = 0x80049738u;
    // 80049738: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8004973C:
    ctx->pc = 0x8004973Cu;
    // 8004973C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049740:
    ctx->pc = 0x80049740u;
    ctx->downcount -= 5;
    // 80049740: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80049744:
    ctx->pc = 0x80049744u;
    // 80049744: tlbsync
    ppc_memory_fence();

label_80049748:
    ctx->pc = 0x80049748u;
    // 80049748: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_8004974C:
    ctx->pc = 0x8004974Cu;
    // 8004974C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80049750:
    ctx->pc = 0x80049750u;
    ctx->downcount -= 17;
    // 80049750: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049750u);
    if (ctx->exception) return;

label_80049754:
    // 80049754: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049758:
    ctx->pc = 0x80049758u;
    // 80049758: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049758u);
    if (ctx->exception) return;

label_8004975C:
    // 8004975C: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049760:
    ctx->pc = 0x80049760u;
    // 80049760: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049760u);
    if (ctx->exception) return;

label_80049764:
    // 80049764: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049768:
    ctx->pc = 0x80049768u;
    // 80049768: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049768u);
    if (ctx->exception) return;

label_8004976C:
    // 8004976C: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049770:
    ctx->pc = 0x80049770u;
    // 80049770: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049770u);
    if (ctx->exception) return;

label_80049774:
    // 80049774: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049778:
    ctx->pc = 0x80049778u;
    // 80049778: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049778u);
    if (ctx->exception) return;

label_8004977C:
    // 8004977C: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049780:
    ctx->pc = 0x80049780u;
    // 80049780: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049780u);
    if (ctx->exception) return;

label_80049784:
    // 80049784: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049788:
    ctx->pc = 0x80049788u;
    // 80049788: tlbie   r3
    ppc_tlbie(ctx, ctx->gpr[3], 0x80049788u);
    if (ctx->exception) return;

label_8004978C:
    // 8004978C: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_80049790:
    // 80049790: bc    16, 0, 0x80049750
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049750u;
                return;
            }
            goto label_80049750;
        }
    }

label_80049794:
    ctx->pc = 0x80049794u;
    ctx->downcount -= 1;
    // 80049794: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049798:
    ctx->pc = 0x80049798u;
    ctx->downcount -= 10;
    // 80049798: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004979C:
    ctx->pc = 0x8004979Cu;
    // 8004979C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800497A0:
    ctx->pc = 0x800497A0u;
    // 800497A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800497A4:
    ctx->pc = 0x800497A4u;
    // 800497A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800497A8:
    ctx->pc = 0x800497A8u;
    // 800497A8: mfsr    r0, 7
    ctx->gpr[0] = ctx->sr[7];

label_800497AC:
    ctx->pc = 0x800497ACu;
    // 800497AC: mtsr    7, r3
    ctx->sr[7] = ctx->gpr[3];

label_800497B0:
    ctx->pc = 0x800497B0u;
    // 800497B0: stw     r0, -31020(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800497B4:
    ctx->pc = 0x800497B4u;
    // 800497B4: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800497B8:
    ctx->pc = 0x800497B8u;
    // 800497B8: mfsdr1    r4
    ppc_fallback_instruction(ctx, 0x7C9902A6u, 0x800497B8u);
    return;

label_800497BC:
    ctx->pc = 0x800497BCu;
    ctx->downcount -= 8;
    // 800497BC: lwz     r0, -31040(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800497C0:
    ctx->pc = 0x800497C0u;
    // 800497C0: rlwinm r5, r4, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_800497C4:
    ctx->pc = 0x800497C4u;
    // 800497C4: stw     r4, -31016(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31016);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800497C8:
    ctx->pc = 0x800497C8u;
    // 800497C8: rlwinm r0, r0, 0, 1, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFF0000u;
    }

label_800497CC:
    ctx->pc = 0x800497CCu;
    // 800497CC: rlwinm r3, r3, 0, 28, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFCFu;
    }

label_800497D0:
    ctx->pc = 0x800497D0u;
    // 800497D0: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_800497D4:
    ctx->pc = 0x800497D4u;
    // 800497D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800497D8:
    ctx->pc = 0x800497D8u;
    // 800497D8: bl      0x800497EC
    {
            ctx->lr = 0x800497DCu;
            goto label_800497EC;
    }

label_800497DC:
    ctx->pc = 0x800497DCu;
    ctx->downcount -= 5;
    // 800497DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800497E0:
    ctx->pc = 0x800497E0u;
    // 800497E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800497E4:
    ctx->pc = 0x800497E4u;
    // 800497E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800497E8:
    ctx->pc = 0x800497E8u;
    // 800497E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_800497EC:
    ctx->pc = 0x800497ECu;
    ctx->downcount -= 9;
    // 800497EC: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800497F0:
    ctx->pc = 0x800497F0u;
    // 800497F0: lis     r5, -32763
    ctx->gpr[5] = ((u32)(s32)(-32763) << 16);

label_800497F4:
    ctx->pc = 0x800497F4u;
    // 800497F4: addi    r5, r5, -26620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26620);

label_800497F8:
    ctx->pc = 0x800497F8u;
    // 800497F8: rlwinm r5, r5, 0, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x7FFFFFFFu;
    }

label_800497FC:
    ctx->pc = 0x800497FCu;
    // 800497FC: mtsrr0    r5
    ctx->srr0 = ctx->gpr[5];

label_80049800:
    ctx->pc = 0x80049800u;
    // 80049800: rfi
    ppc_rfi(ctx, 0x80049800u);
    return;

label_80049804:
    ctx->pc = 0x80049804u;
    ctx->downcount -= 3;
    // 80049804: sync
    ppc_memory_fence();

label_80049808:
    ctx->pc = 0x80049808u;
    // 80049808: mtsdr1    r4
    ppc_fallback_instruction(ctx, 0x7C9903A6u, 0x80049808u);
    return;

label_8004980C:
    ctx->pc = 0x8004980Cu;
    ctx->downcount -= 13;
    // 8004980C: sync
    ppc_memory_fence();

label_80049810:
    ctx->pc = 0x80049810u;
    // 80049810: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80049814:
    ctx->pc = 0x80049814u;
    // 80049814: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80049818:
    ctx->pc = 0x80049818u;
    // 80049818: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_8004981C:
    ctx->pc = 0x8004981Cu;
    // 8004981C: lis     r5, -32763
    ctx->gpr[5] = ((u32)(s32)(-32763) << 16);

label_80049820:
    ctx->pc = 0x80049820u;
    // 80049820: addi    r5, r5, -26580
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26580);

label_80049824:
    ctx->pc = 0x80049824u;
    // 80049824: mtsrr0    r5
    ctx->srr0 = ctx->gpr[5];

label_80049828:
    ctx->pc = 0x80049828u;
    // 80049828: rfi
    ppc_rfi(ctx, 0x80049828u);
    return;

label_8004982C:
    ctx->pc = 0x8004982Cu;
    ctx->downcount -= 2;
    // 8004982C: nop
    // nop

label_80049830:
    ctx->pc = 0x80049830u;
    // 80049830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049834:
    ctx->pc = 0x80049834u;
    ctx->downcount -= 16;
    // 80049834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80049838:
    ctx->pc = 0x80049838u;
    // 80049838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004983C:
    ctx->pc = 0x8004983Cu;
    // 8004983C: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_80049840:
    ctx->pc = 0x80049840u;
    // 80049840: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_80049844:
    ctx->pc = 0x80049844u;
    // 80049844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049848:
    ctx->pc = 0x80049848u;
    // 80049848: addi    r3, r3, -26192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26192);

label_8004984C:
    ctx->pc = 0x8004984Cu;
    // 8004984C: addis   r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + ((u32)(s32)(-32768) << 16);

label_80049850:
    ctx->pc = 0x80049850u;
    // 80049850: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80049854:
    ctx->pc = 0x80049854u;
    // 80049854: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80049858:
    ctx->pc = 0x80049858u;
    // 80049858: addi    r6, r6, -768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-768);

label_8004985C:
    ctx->pc = 0x8004985Cu;
    // 8004985C: oris    r0, r6, 0x4800
    ctx->gpr[0] = ctx->gpr[6] | (0x4800u << 16);

label_80049860:
    ctx->pc = 0x80049860u;
    // 80049860: addi    r3, r5, 768
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(768);

label_80049864:
    ctx->pc = 0x80049864u;
    // 80049864: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80049868:
    ctx->pc = 0x80049868u;
    // 80049868: lwz     r30, 768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(768);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004986C:
    ctx->pc = 0x8004986Cu;
    // 8004986C: stw     r0, 768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049870:
    ctx->pc = 0x80049870u;
    // 80049870: bl      0x8001DAAC
    {
            ctx->lr = 0x80049874u;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_80049874:
    ctx->pc = 0x80049874u;
    ctx->downcount -= 7;
    // 80049874: sync
    ppc_memory_fence();

label_80049878:
    ctx->pc = 0x80049878u;
    // 80049878: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004987C:
    ctx->pc = 0x8004987Cu;
    // 8004987C: addi    r3, r3, 768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(768);

label_80049880:
    ctx->pc = 0x80049880u;
    // 80049880: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80049884:
    ctx->pc = 0x80049884u;
    // 80049884: isync
    ppc_memory_fence();

label_80049888:
    ctx->pc = 0x80049888u;
    // 80049888: icbi    r3, r0
    ppc_fallback_instruction(ctx, 0x7C0307ACu, 0x80049888u);
    return;

label_8004988C:
    ctx->pc = 0x8004988Cu;
    ctx->downcount -= 6;
    // 8004988C: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_80049890:
    ctx->pc = 0x80049890u;
    // 80049890: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80049894:
    ctx->pc = 0x80049894u;
    // 80049894: addi    r31, r3, -25956
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25956);

label_80049898:
    ctx->pc = 0x80049898u;
    // 80049898: stw     r30, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004989C:
    ctx->pc = 0x8004989Cu;
    // 8004989C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800498A0:
    ctx->pc = 0x800498A0u;
    // 800498A0: bl      0x8001DAAC
    {
            ctx->lr = 0x800498A4u;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_800498A4:
    ctx->pc = 0x800498A4u;
    ctx->downcount -= 5;
    // 800498A4: sync
    ppc_memory_fence();

label_800498A8:
    ctx->pc = 0x800498A8u;
    // 800498A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800498AC:
    ctx->pc = 0x800498ACu;
    // 800498AC: isync
    ppc_memory_fence();

label_800498B0:
    ctx->pc = 0x800498B0u;
    // 800498B0: icbi    r31, r0
    ppc_fallback_instruction(ctx, 0x7C1F07ACu, 0x800498B0u);
    return;

label_800498B4:
    ctx->pc = 0x800498B4u;
    ctx->downcount -= 11;
    // 800498B4: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_800498B8:
    ctx->pc = 0x800498B8u;
    // 800498B8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_800498BC:
    ctx->pc = 0x800498BCu;
    // 800498BC: addi    r31, r3, -25952
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25952);

label_800498C0:
    ctx->pc = 0x800498C0u;
    // 800498C0: addis   r5, r31, -32768
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(-32768) << 16);

label_800498C4:
    ctx->pc = 0x800498C4u;
    // 800498C4: addi    r5, r5, -772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-772);

label_800498C8:
    ctx->pc = 0x800498C8u;
    // 800498C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800498CC:
    ctx->pc = 0x800498CCu;
    // 800498CC: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_800498D0:
    ctx->pc = 0x800498D0u;
    // 800498D0: rlwinm r0, r0, 0, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x03FFFFFFu;
    }

label_800498D4:
    ctx->pc = 0x800498D4u;
    // 800498D4: oris    r0, r0, 0x4800
    ctx->gpr[0] = ctx->gpr[0] | (0x4800u << 16);

label_800498D8:
    ctx->pc = 0x800498D8u;
    // 800498D8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800498DC:
    ctx->pc = 0x800498DCu;
    // 800498DC: bl      0x8001DAAC
    {
            ctx->lr = 0x800498E0u;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_800498E0:
    ctx->pc = 0x800498E0u;
    ctx->downcount -= 5;
    // 800498E0: sync
    ppc_memory_fence();

label_800498E4:
    ctx->pc = 0x800498E4u;
    // 800498E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800498E8:
    ctx->pc = 0x800498E8u;
    // 800498E8: isync
    ppc_memory_fence();

label_800498EC:
    ctx->pc = 0x800498ECu;
    // 800498EC: icbi    r31, r0
    ppc_fallback_instruction(ctx, 0x7C1F07ACu, 0x800498ECu);
    return;

label_800498F0:
    ctx->pc = 0x800498F0u;
    ctx->downcount -= 11;
    // 800498F0: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_800498F4:
    ctx->pc = 0x800498F4u;
    // 800498F4: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_800498F8:
    ctx->pc = 0x800498F8u;
    // 800498F8: addi    r3, r3, -25768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25768);

label_800498FC:
    ctx->pc = 0x800498FCu;
    // 800498FC: lwz     r30, 1024(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1024);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80049900:
    ctx->pc = 0x80049900u;
    // 80049900: addis   r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + ((u32)(s32)(-32768) << 16);

label_80049904:
    ctx->pc = 0x80049904u;
    // 80049904: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80049908:
    ctx->pc = 0x80049908u;
    // 80049908: addi    r6, r6, -1024
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1024);

label_8004990C:
    ctx->pc = 0x8004990Cu;
    // 8004990C: addi    r3, r5, 1024
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1024);

label_80049910:
    ctx->pc = 0x80049910u;
    // 80049910: oris    r0, r6, 0x4800
    ctx->gpr[0] = ctx->gpr[6] | (0x4800u << 16);

label_80049914:
    ctx->pc = 0x80049914u;
    // 80049914: stw     r0, 1024(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049918:
    ctx->pc = 0x80049918u;
    // 80049918: bl      0x8001DAAC
    {
            ctx->lr = 0x8004991Cu;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_8004991C:
    ctx->pc = 0x8004991Cu;
    ctx->downcount -= 7;
    // 8004991C: sync
    ppc_memory_fence();

label_80049920:
    ctx->pc = 0x80049920u;
    // 80049920: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80049924:
    ctx->pc = 0x80049924u;
    // 80049924: addi    r3, r3, 1024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1024);

label_80049928:
    ctx->pc = 0x80049928u;
    // 80049928: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004992C:
    ctx->pc = 0x8004992Cu;
    // 8004992C: isync
    ppc_memory_fence();

label_80049930:
    ctx->pc = 0x80049930u;
    // 80049930: icbi    r3, r0
    ppc_fallback_instruction(ctx, 0x7C0307ACu, 0x80049930u);
    return;

label_80049934:
    ctx->pc = 0x80049934u;
    ctx->downcount -= 6;
    // 80049934: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_80049938:
    ctx->pc = 0x80049938u;
    // 80049938: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004993C:
    ctx->pc = 0x8004993Cu;
    // 8004993C: addi    r31, r3, -25532
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25532);

label_80049940:
    ctx->pc = 0x80049940u;
    // 80049940: stw     r30, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80049944:
    ctx->pc = 0x80049944u;
    // 80049944: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80049948:
    ctx->pc = 0x80049948u;
    // 80049948: bl      0x8001DAAC
    {
            ctx->lr = 0x8004994Cu;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_8004994C:
    ctx->pc = 0x8004994Cu;
    ctx->downcount -= 5;
    // 8004994C: sync
    ppc_memory_fence();

label_80049950:
    ctx->pc = 0x80049950u;
    // 80049950: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80049954:
    ctx->pc = 0x80049954u;
    // 80049954: isync
    ppc_memory_fence();

label_80049958:
    ctx->pc = 0x80049958u;
    // 80049958: icbi    r31, r0
    ppc_fallback_instruction(ctx, 0x7C1F07ACu, 0x80049958u);
    return;

label_8004995C:
    ctx->pc = 0x8004995Cu;
    ctx->downcount -= 11;
    // 8004995C: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_80049960:
    ctx->pc = 0x80049960u;
    // 80049960: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80049964:
    ctx->pc = 0x80049964u;
    // 80049964: addi    r31, r3, -25528
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25528);

label_80049968:
    ctx->pc = 0x80049968u;
    // 80049968: addis   r5, r31, -32768
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(-32768) << 16);

label_8004996C:
    ctx->pc = 0x8004996Cu;
    // 8004996C: addi    r5, r5, -1028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1028);

label_80049970:
    ctx->pc = 0x80049970u;
    // 80049970: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80049974:
    ctx->pc = 0x80049974u;
    // 80049974: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80049978:
    ctx->pc = 0x80049978u;
    // 80049978: rlwinm r0, r0, 0, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x03FFFFFFu;
    }

label_8004997C:
    ctx->pc = 0x8004997Cu;
    // 8004997C: oris    r0, r0, 0x4800
    ctx->gpr[0] = ctx->gpr[0] | (0x4800u << 16);

label_80049980:
    ctx->pc = 0x80049980u;
    // 80049980: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049984:
    ctx->pc = 0x80049984u;
    // 80049984: bl      0x8001DAAC
    {
            ctx->lr = 0x80049988u;
            ctx->pc = 0x8001DAACu;
            return;
    }

label_80049988:
    ctx->pc = 0x80049988u;
    ctx->downcount -= 5;
    // 80049988: sync
    ppc_memory_fence();

label_8004998C:
    ctx->pc = 0x8004998Cu;
    // 8004998C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80049990:
    ctx->pc = 0x80049990u;
    // 80049990: isync
    ppc_memory_fence();

label_80049994:
    ctx->pc = 0x80049994u;
    // 80049994: icbi    r31, r0
    ppc_fallback_instruction(ctx, 0x7C1F07ACu, 0x80049994u);
    return;

label_80049998:
    ctx->pc = 0x80049998u;
    ctx->downcount -= 7;
    // 80049998: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004999C:
    ctx->pc = 0x8004999Cu;
    // 8004999C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800499A0:
    ctx->pc = 0x800499A0u;
    // 800499A0: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800499A4:
    ctx->pc = 0x800499A4u;
    // 800499A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800499A8:
    ctx->pc = 0x800499A8u;
    // 800499A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800499AC:
    ctx->pc = 0x800499ACu;
    // 800499AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_800499B0:
    ctx->pc = 0x800499B0u;
    // 800499B0: mtsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9043A6u, 0x800499B0u);
    return;

label_800499B4:
    ctx->pc = 0x800499B4u;
    // 800499B4: mtsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB143A6u, 0x800499B4u);
    return;

label_800499B8:
    ctx->pc = 0x800499B8u;
    // 800499B8: mtsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD243A6u, 0x800499B8u);
    return;

label_800499BC:
    ctx->pc = 0x800499BCu;
    ctx->downcount -= 1;
    // 800499BC: mfcr    r4
    ctx->gpr[4] = ctx->cr;

label_800499C0:
    ctx->pc = 0x800499C0u;
    // 800499C0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800499C0u);
    return;

label_800499C4:
    ctx->pc = 0x800499C4u;
    // 800499C4: mfdar    r5
    ppc_fallback_instruction(ctx, 0x7CB302A6u, 0x800499C4u);
    return;

label_800499C8:
    ctx->pc = 0x800499C8u;
    ctx->downcount -= 4;
    // 800499C8: li      r6, 126
    ctx->gpr[6] = (u32)(s32)(126);

label_800499CC:
    ctx->pc = 0x800499CCu;
    // 800499CC: rlwinm r6, r6, 24, 0, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_800499D0:
    ctx->pc = 0x800499D0u;
    // 800499D0: cmplw   r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800499D4:
    ctx->pc = 0x800499D4u;
    // 800499D4: bc    12, 0, 0x80049A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049A88;
        }
    }

label_800499D8:
    ctx->pc = 0x800499D8u;
    // 800499D8: mfdar    r5
    ppc_fallback_instruction(ctx, 0x7CB302A6u, 0x800499D8u);
    return;

label_800499DC:
    ctx->pc = 0x800499DCu;
    ctx->downcount -= 4;
    // 800499DC: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_800499E0:
    ctx->pc = 0x800499E0u;
    // 800499E0: rlwinm r6, r6, 24, 0, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_800499E4:
    ctx->pc = 0x800499E4u;
    // 800499E4: cmplw   r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800499E8:
    ctx->pc = 0x800499E8u;
    // 800499E8: bc    4, 0, 0x80049A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80049A88;
        }
    }

label_800499EC:
    ctx->pc = 0x800499ECu;
    // 800499EC: mfdsisr    r5
    ppc_fallback_instruction(ctx, 0x7CB202A6u, 0x800499ECu);
    return;

label_800499F0:
    ctx->pc = 0x800499F0u;
    ctx->downcount -= 3;
    // 800499F0: rlwinm r6, r5, 0, 1, 1
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x40000000u;
    }

label_800499F4:
    ctx->pc = 0x800499F4u;
    // 800499F4: cmplwi  r6, 0x0000
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

label_800499F8:
    ctx->pc = 0x800499F8u;
    // 800499F8: bc    12, 2, 0x80049A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049A88;
        }
    }

label_800499FC:
    ctx->pc = 0x800499FCu;
    // 800499FC: mfsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9342A6u, 0x800499FCu);
    return;

label_80049A00:
    ctx->pc = 0x80049A00u;
    ctx->downcount -= 1;
    // 80049A00: mtcr    r4
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[4] & 0xFFFFFFFFu);

label_80049A04:
    ctx->pc = 0x80049A04u;
    // 80049A04: mfsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9042A6u, 0x80049A04u);
    return;

label_80049A08:
    ctx->pc = 0x80049A08u;
    // 80049A08: mfsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB142A6u, 0x80049A08u);
    return;

label_80049A0C:
    ctx->pc = 0x80049A0Cu;
    // 80049A0C: mfsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD242A6u, 0x80049A0Cu);
    return;

label_80049A10:
    ctx->pc = 0x80049A10u;
    // 80049A10: mtsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9043A6u, 0x80049A10u);
    return;

label_80049A14:
    ctx->pc = 0x80049A14u;
    ctx->downcount -= 2;
    // 80049A14: lwz     r4, 192(r0)
    {
        u32 ea = (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80049A18:
    ctx->pc = 0x80049A18u;
    // 80049A18: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A1C:
    ctx->pc = 0x80049A1Cu;
    // 80049A1C: mfsprg0    r3
    ppc_fallback_instruction(ctx, 0x7C7042A6u, 0x80049A1Cu);
    return;

label_80049A20:
    ctx->pc = 0x80049A20u;
    ctx->downcount -= 29;
    // 80049A20: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A24:
    ctx->pc = 0x80049A24u;
    // 80049A24: stw     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80049A28:
    ctx->pc = 0x80049A28u;
    // 80049A28: lhz     r3, 418(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(418);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80049A2C:
    ctx->pc = 0x80049A2Cu;
    // 80049A2C: ori     r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | 0x0002u;

label_80049A30:
    ctx->pc = 0x80049A30u;
    // 80049A30: sth     r3, 418(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(418);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80049A34:
    ctx->pc = 0x80049A34u;
    // 80049A34: mfcr    r3
    ctx->gpr[3] = ctx->cr;

label_80049A38:
    ctx->pc = 0x80049A38u;
    // 80049A38: stw     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A3C:
    ctx->pc = 0x80049A3Cu;
    // 80049A3C: mflr    r3
    ctx->gpr[3] = ctx->lr;

label_80049A40:
    ctx->pc = 0x80049A40u;
    // 80049A40: stw     r3, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A44:
    ctx->pc = 0x80049A44u;
    // 80049A44: mfctr    r3
    ctx->gpr[3] = ctx->ctr;

label_80049A48:
    ctx->pc = 0x80049A48u;
    // 80049A48: stw     r3, 136(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A4C:
    ctx->pc = 0x80049A4Cu;
    // 80049A4C: mfxer    r3
    ctx->gpr[3] = ctx->xer;

label_80049A50:
    ctx->pc = 0x80049A50u;
    // 80049A50: stw     r3, 140(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A54:
    ctx->pc = 0x80049A54u;
    // 80049A54: mfsrr0    r3
    ctx->gpr[3] = ctx->srr0;

label_80049A58:
    ctx->pc = 0x80049A58u;
    // 80049A58: stw     r3, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A5C:
    ctx->pc = 0x80049A5Cu;
    // 80049A5C: mfsrr1    r3
    ctx->gpr[3] = ctx->srr1;

label_80049A60:
    ctx->pc = 0x80049A60u;
    // 80049A60: stw     r3, 412(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049A64:
    ctx->pc = 0x80049A64u;
    // 80049A64: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80049A68:
    ctx->pc = 0x80049A68u;
    // 80049A68: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80049A6C:
    ctx->pc = 0x80049A6Cu;
    // 80049A6C: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80049A70:
    ctx->pc = 0x80049A70u;
    // 80049A70: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80049A74:
    ctx->pc = 0x80049A74u;
    // 80049A74: lwz     r3, 212(r0)
    {
        u32 ea = (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049A78:
    ctx->pc = 0x80049A78u;
    // 80049A78: lis     r5, -32763
    ctx->gpr[5] = ((u32)(s32)(-32763) << 16);

label_80049A7C:
    ctx->pc = 0x80049A7Cu;
    // 80049A7C: addi    r5, r5, -25948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25948);

label_80049A80:
    ctx->pc = 0x80049A80u;
    // 80049A80: mtsrr0    r5
    ctx->srr0 = ctx->gpr[5];

label_80049A84:
    ctx->pc = 0x80049A84u;
    // 80049A84: rfi
    ppc_rfi(ctx, 0x80049A84u);
    return;

label_80049A88:
    ctx->pc = 0x80049A88u;
    // 80049A88: mfsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9342A6u, 0x80049A88u);
    return;

label_80049A8C:
    ctx->pc = 0x80049A8Cu;
    ctx->downcount -= 1;
    // 80049A8C: mtcr    r4
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[4] & 0xFFFFFFFFu);

label_80049A90:
    ctx->pc = 0x80049A90u;
    // 80049A90: mfsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9042A6u, 0x80049A90u);
    return;

label_80049A94:
    ctx->pc = 0x80049A94u;
    // 80049A94: mfsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB142A6u, 0x80049A94u);
    return;

label_80049A98:
    ctx->pc = 0x80049A98u;
    // 80049A98: mfsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD242A6u, 0x80049A98u);
    return;

label_80049A9C:
    ctx->pc = 0x80049A9Cu;
    ctx->downcount -= 30;
    // 80049A9C: nop
    // nop

label_80049AA0:
    ctx->pc = 0x80049AA0u;
    // 80049AA0: nop
    // nop

label_80049AA4:
    ctx->pc = 0x80049AA4u;
    // 80049AA4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049AA8:
    ctx->pc = 0x80049AA8u;
    // 80049AA8: stw     r1, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_80049AAC:
    ctx->pc = 0x80049AACu;
    // 80049AAC: stw     r2, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[2]);
    }

label_80049AB0:
    ctx->pc = 0x80049AB0u;
    // 80049AB0: stmw     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        for (u32 r = 6; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80049AB4:
    ctx->pc = 0x80049AB4u;
    // 80049AB4: mfgqr1    r0
    ctx->gpr[0] = ctx->gqr[1];

label_80049AB8:
    ctx->pc = 0x80049AB8u;
    // 80049AB8: stw     r0, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049ABC:
    ctx->pc = 0x80049ABCu;
    // 80049ABC: mfgqr2    r0
    ctx->gpr[0] = ctx->gqr[2];

label_80049AC0:
    ctx->pc = 0x80049AC0u;
    // 80049AC0: stw     r0, 428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049AC4:
    ctx->pc = 0x80049AC4u;
    // 80049AC4: mfgqr3    r0
    ctx->gpr[0] = ctx->gqr[3];

label_80049AC8:
    ctx->pc = 0x80049AC8u;
    // 80049AC8: stw     r0, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049ACC:
    ctx->pc = 0x80049ACCu;
    // 80049ACC: mfgqr4    r0
    ctx->gpr[0] = ctx->gqr[4];

label_80049AD0:
    ctx->pc = 0x80049AD0u;
    // 80049AD0: stw     r0, 436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049AD4:
    ctx->pc = 0x80049AD4u;
    // 80049AD4: mfgqr5    r0
    ctx->gpr[0] = ctx->gqr[5];

label_80049AD8:
    ctx->pc = 0x80049AD8u;
    // 80049AD8: stw     r0, 440(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049ADC:
    ctx->pc = 0x80049ADCu;
    // 80049ADC: mfgqr6    r0
    ctx->gpr[0] = ctx->gqr[6];

label_80049AE0:
    ctx->pc = 0x80049AE0u;
    // 80049AE0: stw     r0, 444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049AE4:
    ctx->pc = 0x80049AE4u;
    // 80049AE4: mfgqr7    r0
    ctx->gpr[0] = ctx->gqr[7];

label_80049AE8:
    ctx->pc = 0x80049AE8u;
    // 80049AE8: stw     r0, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049AEC:
    ctx->pc = 0x80049AECu;
    // 80049AEC: mfdar    r4
    ppc_fallback_instruction(ctx, 0x7C9302A6u, 0x80049AECu);
    return;

label_80049AF0:
    ctx->pc = 0x80049AF0u;
    ctx->downcount -= 1;
    // 80049AF0: b       0x80049AF4
    {
            goto label_80049AF4;
    }

label_80049AF4:
    ctx->pc = 0x80049AF4u;
    ctx->downcount -= 9;
    // 80049AF4: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80049AF8:
    ctx->pc = 0x80049AF8u;
    // 80049AF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80049AFC:
    ctx->pc = 0x80049AFCu;
    // 80049AFC: stw     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049B00:
    ctx->pc = 0x80049B00u;
    // 80049B00: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80049B04:
    ctx->pc = 0x80049B04u;
    // 80049B04: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80049B08:
    ctx->pc = 0x80049B08u;
    // 80049B08: stw     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80049B0C:
    ctx->pc = 0x80049B0Cu;
    // 80049B0C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80049B10:
    ctx->pc = 0x80049B10u;
    // 80049B10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80049B14:
    ctx->pc = 0x80049B14u;
    // 80049B14: bl      0x8001E4A4
    {
            ctx->lr = 0x80049B18u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_80049B18:
    ctx->pc = 0x80049B18u;
    ctx->downcount -= 2;
    // 80049B18: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80049B1C:
    ctx->pc = 0x80049B1Cu;
    // 80049B1C: bl      0x8001E2AC
    {
            ctx->lr = 0x80049B20u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_80049B20:
    ctx->pc = 0x80049B20u;
    ctx->downcount -= 5;
    // 80049B20: lwz     r12, -31028(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31028);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80049B24:
    ctx->pc = 0x80049B24u;
    // 80049B24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80049B28:
    ctx->pc = 0x80049B28u;
    // 80049B28: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80049B2C:
    ctx->pc = 0x80049B2Cu;
    // 80049B2C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80049B30u;
            ctx->pc = target;
            return;
        }
    }

label_80049B30:
    ctx->pc = 0x80049B30u;
    ctx->downcount -= 2;
    // 80049B30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049B34:
    ctx->pc = 0x80049B34u;
    // 80049B34: bl      0x8001E2AC
    {
            ctx->lr = 0x80049B38u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_80049B38:
    ctx->pc = 0x80049B38u;
    ctx->downcount -= 2;
    // 80049B38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049B3C:
    ctx->pc = 0x80049B3Cu;
    // 80049B3C: bl      0x8001E394
    {
            ctx->lr = 0x80049B40u;
            ctx->pc = 0x8001E394u;
            return;
    }

label_80049B40:
    ctx->pc = 0x80049B40u;
    ctx->downcount -= 7;
    // 80049B40: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049B44:
    ctx->pc = 0x80049B44u;
    // 80049B44: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80049B48:
    ctx->pc = 0x80049B48u;
    // 80049B48: lwz     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80049B4C:
    ctx->pc = 0x80049B4Cu;
    // 80049B4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80049B50:
    ctx->pc = 0x80049B50u;
    // 80049B50: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80049B54:
    ctx->pc = 0x80049B54u;
    // 80049B54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049B58:
    ctx->pc = 0x80049B58u;
    // 80049B58: mtsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9043A6u, 0x80049B58u);
    return;

label_80049B5C:
    ctx->pc = 0x80049B5Cu;
    // 80049B5C: mtsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB143A6u, 0x80049B5Cu);
    return;

label_80049B60:
    ctx->pc = 0x80049B60u;
    // 80049B60: mtsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD243A6u, 0x80049B60u);
    return;

label_80049B64:
    ctx->pc = 0x80049B64u;
    ctx->downcount -= 1;
    // 80049B64: mfcr    r4
    ctx->gpr[4] = ctx->cr;

label_80049B68:
    ctx->pc = 0x80049B68u;
    // 80049B68: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80049B68u);
    return;

label_80049B6C:
    ctx->pc = 0x80049B6Cu;
    // 80049B6C: mfdar    r5
    ppc_fallback_instruction(ctx, 0x7CB302A6u, 0x80049B6Cu);
    return;

label_80049B70:
    ctx->pc = 0x80049B70u;
    ctx->downcount -= 4;
    // 80049B70: li      r6, 126
    ctx->gpr[6] = (u32)(s32)(126);

label_80049B74:
    ctx->pc = 0x80049B74u;
    // 80049B74: rlwinm r6, r6, 24, 0, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80049B78:
    ctx->pc = 0x80049B78u;
    // 80049B78: cmplw   r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80049B7C:
    ctx->pc = 0x80049B7Cu;
    // 80049B7C: bc    12, 0, 0x80049C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049C30;
        }
    }

label_80049B80:
    ctx->pc = 0x80049B80u;
    // 80049B80: mfdar    r5
    ppc_fallback_instruction(ctx, 0x7CB302A6u, 0x80049B80u);
    return;

label_80049B84:
    ctx->pc = 0x80049B84u;
    ctx->downcount -= 4;
    // 80049B84: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_80049B88:
    ctx->pc = 0x80049B88u;
    // 80049B88: rlwinm r6, r6, 24, 0, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80049B8C:
    ctx->pc = 0x80049B8Cu;
    // 80049B8C: cmplw   r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80049B90:
    ctx->pc = 0x80049B90u;
    // 80049B90: bc    4, 0, 0x80049C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80049C30;
        }
    }

label_80049B94:
    ctx->pc = 0x80049B94u;
    ctx->downcount -= 4;
    // 80049B94: mfsrr1    r5
    ctx->gpr[5] = ctx->srr1;

label_80049B98:
    ctx->pc = 0x80049B98u;
    // 80049B98: rlwinm r6, r5, 0, 1, 1
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x40000000u;
    }

label_80049B9C:
    ctx->pc = 0x80049B9Cu;
    // 80049B9C: cmplwi  r6, 0x0000
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

label_80049BA0:
    ctx->pc = 0x80049BA0u;
    // 80049BA0: bc    12, 2, 0x80049C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049C30;
        }
    }

label_80049BA4:
    ctx->pc = 0x80049BA4u;
    // 80049BA4: mfsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9342A6u, 0x80049BA4u);
    return;

label_80049BA8:
    ctx->pc = 0x80049BA8u;
    ctx->downcount -= 1;
    // 80049BA8: mtcr    r4
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[4] & 0xFFFFFFFFu);

label_80049BAC:
    ctx->pc = 0x80049BACu;
    // 80049BAC: mfsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9042A6u, 0x80049BACu);
    return;

label_80049BB0:
    ctx->pc = 0x80049BB0u;
    // 80049BB0: mfsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB142A6u, 0x80049BB0u);
    return;

label_80049BB4:
    ctx->pc = 0x80049BB4u;
    // 80049BB4: mfsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD242A6u, 0x80049BB4u);
    return;

label_80049BB8:
    ctx->pc = 0x80049BB8u;
    // 80049BB8: mtsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9043A6u, 0x80049BB8u);
    return;

label_80049BBC:
    ctx->pc = 0x80049BBCu;
    ctx->downcount -= 2;
    // 80049BBC: lwz     r4, 192(r0)
    {
        u32 ea = (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80049BC0:
    ctx->pc = 0x80049BC0u;
    // 80049BC0: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BC4:
    ctx->pc = 0x80049BC4u;
    // 80049BC4: mfsprg0    r3
    ppc_fallback_instruction(ctx, 0x7C7042A6u, 0x80049BC4u);
    return;

label_80049BC8:
    ctx->pc = 0x80049BC8u;
    ctx->downcount -= 29;
    // 80049BC8: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BCC:
    ctx->pc = 0x80049BCCu;
    // 80049BCC: stw     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80049BD0:
    ctx->pc = 0x80049BD0u;
    // 80049BD0: lhz     r3, 418(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(418);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80049BD4:
    ctx->pc = 0x80049BD4u;
    // 80049BD4: ori     r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | 0x0002u;

label_80049BD8:
    ctx->pc = 0x80049BD8u;
    // 80049BD8: sth     r3, 418(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(418);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80049BDC:
    ctx->pc = 0x80049BDCu;
    // 80049BDC: mfcr    r3
    ctx->gpr[3] = ctx->cr;

label_80049BE0:
    ctx->pc = 0x80049BE0u;
    // 80049BE0: stw     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BE4:
    ctx->pc = 0x80049BE4u;
    // 80049BE4: mflr    r3
    ctx->gpr[3] = ctx->lr;

label_80049BE8:
    ctx->pc = 0x80049BE8u;
    // 80049BE8: stw     r3, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BEC:
    ctx->pc = 0x80049BECu;
    // 80049BEC: mfctr    r3
    ctx->gpr[3] = ctx->ctr;

label_80049BF0:
    ctx->pc = 0x80049BF0u;
    // 80049BF0: stw     r3, 136(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BF4:
    ctx->pc = 0x80049BF4u;
    // 80049BF4: mfxer    r3
    ctx->gpr[3] = ctx->xer;

label_80049BF8:
    ctx->pc = 0x80049BF8u;
    // 80049BF8: stw     r3, 140(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049BFC:
    ctx->pc = 0x80049BFCu;
    // 80049BFC: mfsrr0    r3
    ctx->gpr[3] = ctx->srr0;

label_80049C00:
    ctx->pc = 0x80049C00u;
    // 80049C00: stw     r3, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049C04:
    ctx->pc = 0x80049C04u;
    // 80049C04: mfsrr1    r3
    ctx->gpr[3] = ctx->srr1;

label_80049C08:
    ctx->pc = 0x80049C08u;
    // 80049C08: stw     r3, 412(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049C0C:
    ctx->pc = 0x80049C0Cu;
    // 80049C0C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80049C10:
    ctx->pc = 0x80049C10u;
    // 80049C10: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80049C14:
    ctx->pc = 0x80049C14u;
    // 80049C14: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80049C18:
    ctx->pc = 0x80049C18u;
    // 80049C18: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80049C1C:
    ctx->pc = 0x80049C1Cu;
    // 80049C1C: lwz     r3, 212(r0)
    {
        u32 ea = (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80049C20:
    ctx->pc = 0x80049C20u;
    // 80049C20: lis     r5, -32763
    ctx->gpr[5] = ((u32)(s32)(-32763) << 16);

label_80049C24:
    ctx->pc = 0x80049C24u;
    // 80049C24: addi    r5, r5, -25524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25524);

label_80049C28:
    ctx->pc = 0x80049C28u;
    // 80049C28: mtsrr0    r5
    ctx->srr0 = ctx->gpr[5];

label_80049C2C:
    ctx->pc = 0x80049C2Cu;
    // 80049C2C: rfi
    ppc_rfi(ctx, 0x80049C2Cu);
    return;

label_80049C30:
    ctx->pc = 0x80049C30u;
    // 80049C30: mfsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9342A6u, 0x80049C30u);
    return;

label_80049C34:
    ctx->pc = 0x80049C34u;
    ctx->downcount -= 1;
    // 80049C34: mtcr    r4
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[4] & 0xFFFFFFFFu);

label_80049C38:
    ctx->pc = 0x80049C38u;
    // 80049C38: mfsprg0    r4
    ppc_fallback_instruction(ctx, 0x7C9042A6u, 0x80049C38u);
    return;

label_80049C3C:
    ctx->pc = 0x80049C3Cu;
    // 80049C3C: mfsprg1    r5
    ppc_fallback_instruction(ctx, 0x7CB142A6u, 0x80049C3Cu);
    return;

label_80049C40:
    ctx->pc = 0x80049C40u;
    // 80049C40: mfsprg2    r6
    ppc_fallback_instruction(ctx, 0x7CD242A6u, 0x80049C40u);
    return;

label_80049C44:
    ctx->pc = 0x80049C44u;
    ctx->downcount -= 30;
    // 80049C44: nop
    // nop

label_80049C48:
    ctx->pc = 0x80049C48u;
    // 80049C48: nop
    // nop

label_80049C4C:
    ctx->pc = 0x80049C4Cu;
    // 80049C4C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C50:
    ctx->pc = 0x80049C50u;
    // 80049C50: stw     r1, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_80049C54:
    ctx->pc = 0x80049C54u;
    // 80049C54: stw     r2, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[2]);
    }

label_80049C58:
    ctx->pc = 0x80049C58u;
    // 80049C58: stmw     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        for (u32 r = 6; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80049C5C:
    ctx->pc = 0x80049C5Cu;
    // 80049C5C: mfgqr1    r0
    ctx->gpr[0] = ctx->gqr[1];

label_80049C60:
    ctx->pc = 0x80049C60u;
    // 80049C60: stw     r0, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C64:
    ctx->pc = 0x80049C64u;
    // 80049C64: mfgqr2    r0
    ctx->gpr[0] = ctx->gqr[2];

label_80049C68:
    ctx->pc = 0x80049C68u;
    // 80049C68: stw     r0, 428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C6C:
    ctx->pc = 0x80049C6Cu;
    // 80049C6C: mfgqr3    r0
    ctx->gpr[0] = ctx->gqr[3];

label_80049C70:
    ctx->pc = 0x80049C70u;
    // 80049C70: stw     r0, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C74:
    ctx->pc = 0x80049C74u;
    // 80049C74: mfgqr4    r0
    ctx->gpr[0] = ctx->gqr[4];

label_80049C78:
    ctx->pc = 0x80049C78u;
    // 80049C78: stw     r0, 436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C7C:
    ctx->pc = 0x80049C7Cu;
    // 80049C7C: mfgqr5    r0
    ctx->gpr[0] = ctx->gqr[5];

label_80049C80:
    ctx->pc = 0x80049C80u;
    // 80049C80: stw     r0, 440(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C84:
    ctx->pc = 0x80049C84u;
    // 80049C84: mfgqr6    r0
    ctx->gpr[0] = ctx->gqr[6];

label_80049C88:
    ctx->pc = 0x80049C88u;
    // 80049C88: stw     r0, 444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C8C:
    ctx->pc = 0x80049C8Cu;
    // 80049C8C: mfgqr7    r0
    ctx->gpr[0] = ctx->gqr[7];

label_80049C90:
    ctx->pc = 0x80049C90u;
    // 80049C90: stw     r0, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049C94:
    ctx->pc = 0x80049C94u;
    // 80049C94: mfdar    r4
    ppc_fallback_instruction(ctx, 0x7C9302A6u, 0x80049C94u);
    return;

label_80049C98:
    ctx->pc = 0x80049C98u;
    ctx->downcount -= 1;
    // 80049C98: b       0x800059C8
    {
            ctx->pc = 0x800059C8u;
            return;
    }

label_80049C9C:
    ctx->pc = 0x80049C9Cu;
    ctx->downcount -= 5;
    // 80049C9C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049CA0:
    ctx->pc = 0x80049CA0u;
    // 80049CA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049CA4:
    ctx->pc = 0x80049CA4u;
    // 80049CA4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80049CA8:
    ctx->pc = 0x80049CA8u;
    // 80049CA8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049CAC:
    ctx->pc = 0x80049CACu;
    // 80049CAC: b       0x80049D4C
    {
            goto label_80049D4C;
    }

label_80049CB0:
    ctx->pc = 0x80049CB0u;
    ctx->downcount -= 5;
    // 80049CB0: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049CB4:
    // 80049CB4: rlwinm r6, r4, 3, 13, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0x0007FFF8u;
    }

label_80049CB8:
    ctx->pc = 0x80049CB8u;
    // 80049CB8: lwzx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049CBC:
    // 80049CBC: cmplwi  r0, 0x0000
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

label_80049CC0:
    // 80049CC0: bc    12, 2, 0x80049CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049CFC;
        }
    }

label_80049CC4:
    ctx->downcount -= 7;
    // 80049CC4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80049CC8:
    ctx->pc = 0x80049CC8u;
    // 80049CC8: stwx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049CCC:
    ctx->pc = 0x80049CCCu;
    // 80049CCC: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049CD0:
    ctx->pc = 0x80049CD0u;
    // 80049CD0: lwzx    r7, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80049CD4:
    ctx->pc = 0x80049CD4u;
    // 80049CD4: lbz     r0, 35(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(35);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80049CD8:
    // 80049CD8: cmplwi  r0, 0x0000
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

label_80049CDC:
    // 80049CDC: bc    4, 2, 0x80049CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80049CFC;
        }
    }

label_80049CE0:
    ctx->pc = 0x80049CE0u;
    ctx->downcount -= 7;
    // 80049CE0: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049CE4:
    // 80049CE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80049CE8:
    // 80049CE8: add   r5, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80049CEC:
    ctx->pc = 0x80049CECu;
    // 80049CEC: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80049CF0:
    ctx->pc = 0x80049CF0u;
    // 80049CF0: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049CF4:
    ctx->pc = 0x80049CF4u;
    // 80049CF4: lwzx    r5, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049CF8:
    ctx->pc = 0x80049CF8u;
    // 80049CF8: stb     r0, 35(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(35);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80049CFC:
    ctx->pc = 0x80049CFCu;
    ctx->downcount -= 5;
    // 80049CFC: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049D00:
    // 80049D00: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_80049D04:
    ctx->pc = 0x80049D04u;
    // 80049D04: lwzx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049D08:
    // 80049D08: cmplwi  r0, 0x0000
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

label_80049D0C:
    // 80049D0C: bc    12, 2, 0x80049D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80049D48;
        }
    }

label_80049D10:
    ctx->downcount -= 7;
    // 80049D10: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80049D14:
    ctx->pc = 0x80049D14u;
    // 80049D14: stwx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049D18:
    ctx->pc = 0x80049D18u;
    // 80049D18: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049D1C:
    ctx->pc = 0x80049D1Cu;
    // 80049D1C: lwzx    r7, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80049D20:
    ctx->pc = 0x80049D20u;
    // 80049D20: lbz     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80049D24:
    // 80049D24: cmplwi  r0, 0x0000
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

label_80049D28:
    // 80049D28: bc    4, 2, 0x80049D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80049D48;
        }
    }

label_80049D2C:
    ctx->pc = 0x80049D2Cu;
    ctx->downcount -= 7;
    // 80049D2C: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049D30:
    // 80049D30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80049D34:
    // 80049D34: add   r5, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80049D38:
    ctx->pc = 0x80049D38u;
    // 80049D38: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80049D3C:
    ctx->pc = 0x80049D3Cu;
    // 80049D3C: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049D40:
    ctx->pc = 0x80049D40u;
    // 80049D40: lwzx    r5, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80049D44:
    ctx->pc = 0x80049D44u;
    // 80049D44: stb     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80049D48:
    ctx->downcount -= 1;
    // 80049D48: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80049D4C:
    ctx->pc = 0x80049D4Cu;
    ctx->downcount -= 4;
    // 80049D4C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049D50:
    // 80049D50: rlwinm r5, r4, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_80049D54:
    // 80049D54: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80049D58:
    // 80049D58: bc    12, 0, 0x80049CB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049CB0u;
                return;
            }
            goto label_80049CB0;
        }
    }

label_80049D5C:
    ctx->pc = 0x80049D5Cu;
    ctx->downcount -= 1;
    // 80049D5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049D60:
    ctx->pc = 0x80049D60u;
    ctx->downcount -= 21;
    // 80049D60: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80049D64:
    ctx->pc = 0x80049D64u;
    // 80049D64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80049D68:
    ctx->pc = 0x80049D68u;
    // 80049D68: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_80049D6C:
    ctx->pc = 0x80049D6Cu;
    // 80049D6C: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_80049D70:
    ctx->pc = 0x80049D70u;
    // 80049D70: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049D74:
    ctx->pc = 0x80049D74u;
    // 80049D74: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_80049D78:
    ctx->pc = 0x80049D78u;
    // 80049D78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049D7C:
    ctx->pc = 0x80049D7Cu;
    // 80049D7C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80049D80:
    ctx->pc = 0x80049D80u;
    // 80049D80: addi    r29, r5, 12480
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(12480);

label_80049D84:
    ctx->pc = 0x80049D84u;
    // 80049D84: li      r5, 496
    ctx->gpr[5] = (u32)(s32)(496);

label_80049D88:
    ctx->pc = 0x80049D88u;
    // 80049D88: bl      0x800050B4
    {
            ctx->lr = 0x80049D8Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80049D8C:
    ctx->pc = 0x80049D8Cu;
    ctx->downcount -= 9;
    // 80049D8C: lfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x80049D8Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80049D90:
    ctx->pc = 0x80049D90u;
    // 80049D90: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_80049D94:
    ctx->pc = 0x80049D94u;
    // 80049D94: lfs     f2, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80049D94u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80049D98:
    ctx->pc = 0x80049D98u;
    // 80049D98: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_80049D9C:
    ctx->pc = 0x80049D9Cu;
    // 80049D9C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80049D9Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80049DA0:
    ctx->pc = 0x80049DA0u;
    // 80049DA0: lfs     f4, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80049DA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80049DA4:
    ctx->pc = 0x80049DA4u;
    // 80049DA4: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80049DA4u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80049DA8:
    ctx->pc = 0x80049DA8u;
    // 80049DA8: lfs     f6, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80049DA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80049DAC:
    ctx->pc = 0x80049DACu;
    // 80049DAC: bl      0x80025970
    {
            ctx->lr = 0x80049DB0u;
            ctx->pc = 0x80025970u;
            return;
    }

label_80049DB0:
    ctx->pc = 0x80049DB0u;
    ctx->downcount -= 4;
    // 80049DB0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_80049DB4:
    ctx->pc = 0x80049DB4u;
    // 80049DB4: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_80049DB8:
    ctx->pc = 0x80049DB8u;
    // 80049DB8: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_80049DBC:
    ctx->pc = 0x80049DBCu;
    // 80049DBC: bl      0x80025030
    {
            ctx->lr = 0x80049DC0u;
            ctx->pc = 0x80025030u;
            return;
    }

label_80049DC0:
    ctx->pc = 0x80049DC0u;
    ctx->downcount -= 15;
    // 80049DC0: lis     r6, -32735
    ctx->gpr[6] = ((u32)(s32)(-32735) << 16);

label_80049DC4:
    ctx->pc = 0x80049DC4u;
    // 80049DC4: lis     r5, 50
    ctx->gpr[5] = ((u32)(s32)(50) << 16);

label_80049DC8:
    ctx->pc = 0x80049DC8u;
    // 80049DC8: lis     r4, 19225
    ctx->gpr[4] = ((u32)(s32)(19225) << 16);

label_80049DCC:
    ctx->pc = 0x80049DCCu;
    // 80049DCC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80049DD0:
    ctx->pc = 0x80049DD0u;
    // 80049DD0: addi    r6, r6, -17576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17576);

label_80049DD4:
    ctx->pc = 0x80049DD4u;
    // 80049DD4: addi    r5, r5, 32255
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32255);

label_80049DD8:
    ctx->pc = 0x80049DD8u;
    // 80049DD8: addi    r0, r4, 255
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(255);

label_80049DDC:
    ctx->pc = 0x80049DDCu;
    // 80049DDC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049DE0:
    ctx->pc = 0x80049DE0u;
    // 80049DE0: addi    r31, r6, 120
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(120);

label_80049DE4:
    ctx->pc = 0x80049DE4u;
    // 80049DE4: stw     r7, 484(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80049DE8:
    ctx->pc = 0x80049DE8u;
    // 80049DE8: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049DEC:
    ctx->pc = 0x80049DECu;
    // 80049DEC: stw     r5, 488(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80049DF0:
    ctx->pc = 0x80049DF0u;
    // 80049DF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80049DF4:
    ctx->pc = 0x80049DF4u;
    // 80049DF4: stw     r0, 492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049DF8:
    ctx->pc = 0x80049DF8u;
    // 80049DF8: bl      0x800235E0
    {
            ctx->lr = 0x80049DFCu;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049DFC:
    ctx->pc = 0x80049DFCu;
    ctx->downcount -= 7;
    // 80049DFC: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E00:
    ctx->pc = 0x80049E00u;
    // 80049E00: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E04:
    ctx->pc = 0x80049E04u;
    // 80049E04: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E08:
    ctx->pc = 0x80049E08u;
    // 80049E08: addi    r30, r4, 168
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(168);

label_80049E0C:
    ctx->pc = 0x80049E0Cu;
    // 80049E0C: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E10:
    ctx->pc = 0x80049E10u;
    // 80049E10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049E14:
    ctx->pc = 0x80049E14u;
    // 80049E14: bl      0x800235E0
    {
            ctx->lr = 0x80049E18u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049E18:
    ctx->pc = 0x80049E18u;
    ctx->downcount -= 7;
    // 80049E18: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E1C:
    ctx->pc = 0x80049E1Cu;
    // 80049E1C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E20:
    ctx->pc = 0x80049E20u;
    // 80049E20: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E24:
    ctx->pc = 0x80049E24u;
    // 80049E24: addi    r29, r4, 216
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(216);

label_80049E28:
    ctx->pc = 0x80049E28u;
    // 80049E28: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E2C:
    ctx->pc = 0x80049E2Cu;
    // 80049E2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80049E30:
    ctx->pc = 0x80049E30u;
    // 80049E30: bl      0x800235E0
    {
            ctx->lr = 0x80049E34u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049E34:
    ctx->pc = 0x80049E34u;
    ctx->downcount -= 7;
    // 80049E34: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E38:
    ctx->pc = 0x80049E38u;
    // 80049E38: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E3C:
    ctx->pc = 0x80049E3Cu;
    // 80049E3C: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E40:
    ctx->pc = 0x80049E40u;
    // 80049E40: addi    r28, r4, 264
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(264);

label_80049E44:
    ctx->pc = 0x80049E44u;
    // 80049E44: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E48:
    ctx->pc = 0x80049E48u;
    // 80049E48: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049E4C:
    ctx->pc = 0x80049E4Cu;
    // 80049E4C: bl      0x800235E0
    {
            ctx->lr = 0x80049E50u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049E50:
    ctx->pc = 0x80049E50u;
    ctx->downcount -= 7;
    // 80049E50: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E54:
    ctx->pc = 0x80049E54u;
    // 80049E54: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E58:
    ctx->pc = 0x80049E58u;
    // 80049E58: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E5C:
    ctx->pc = 0x80049E5Cu;
    // 80049E5C: addi    r27, r4, 312
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(312);

label_80049E60:
    ctx->pc = 0x80049E60u;
    // 80049E60: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E64:
    ctx->pc = 0x80049E64u;
    // 80049E64: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80049E68:
    ctx->pc = 0x80049E68u;
    // 80049E68: bl      0x800235E0
    {
            ctx->lr = 0x80049E6Cu;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049E6C:
    ctx->pc = 0x80049E6Cu;
    ctx->downcount -= 7;
    // 80049E6C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E70:
    ctx->pc = 0x80049E70u;
    // 80049E70: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E74:
    ctx->pc = 0x80049E74u;
    // 80049E74: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E78:
    ctx->pc = 0x80049E78u;
    // 80049E78: addi    r26, r4, 360
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(360);

label_80049E7C:
    ctx->pc = 0x80049E7Cu;
    // 80049E7C: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E80:
    ctx->pc = 0x80049E80u;
    // 80049E80: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80049E84:
    ctx->pc = 0x80049E84u;
    // 80049E84: bl      0x800235E0
    {
            ctx->lr = 0x80049E88u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049E88:
    ctx->pc = 0x80049E88u;
    ctx->downcount -= 7;
    // 80049E88: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049E8C:
    ctx->pc = 0x80049E8Cu;
    // 80049E8C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80049E90:
    ctx->pc = 0x80049E90u;
    // 80049E90: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049E94:
    ctx->pc = 0x80049E94u;
    // 80049E94: addi    r25, r4, 408
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(408);

label_80049E98:
    ctx->pc = 0x80049E98u;
    // 80049E98: addi    r4, r3, 28304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28304);

label_80049E9C:
    ctx->pc = 0x80049E9Cu;
    // 80049E9C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80049EA0:
    ctx->pc = 0x80049EA0u;
    // 80049EA0: bl      0x800235E0
    {
            ctx->lr = 0x80049EA4u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_80049EA4:
    ctx->pc = 0x80049EA4u;
    ctx->downcount -= 2;
    // 80049EA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80049EA8:
    ctx->pc = 0x80049EA8u;
    // 80049EA8: bl      0x80023784
    {
            ctx->lr = 0x80049EACu;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049EAC:
    ctx->pc = 0x80049EACu;
    ctx->downcount -= 2;
    // 80049EAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049EB0:
    ctx->pc = 0x80049EB0u;
    // 80049EB0: bl      0x80023784
    {
            ctx->lr = 0x80049EB4u;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049EB4:
    ctx->pc = 0x80049EB4u;
    ctx->downcount -= 2;
    // 80049EB4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80049EB8:
    ctx->pc = 0x80049EB8u;
    // 80049EB8: bl      0x80023784
    {
            ctx->lr = 0x80049EBCu;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049EBC:
    ctx->pc = 0x80049EBCu;
    ctx->downcount -= 2;
    // 80049EBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049EC0:
    ctx->pc = 0x80049EC0u;
    // 80049EC0: bl      0x80023784
    {
            ctx->lr = 0x80049EC4u;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049EC4:
    ctx->pc = 0x80049EC4u;
    ctx->downcount -= 2;
    // 80049EC4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80049EC8:
    ctx->pc = 0x80049EC8u;
    // 80049EC8: bl      0x80023784
    {
            ctx->lr = 0x80049ECCu;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049ECC:
    ctx->pc = 0x80049ECCu;
    ctx->downcount -= 2;
    // 80049ECC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80049ED0:
    ctx->pc = 0x80049ED0u;
    // 80049ED0: bl      0x80023784
    {
            ctx->lr = 0x80049ED4u;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049ED4:
    ctx->pc = 0x80049ED4u;
    ctx->downcount -= 2;
    // 80049ED4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80049ED8:
    ctx->pc = 0x80049ED8u;
    // 80049ED8: bl      0x80023784
    {
            ctx->lr = 0x80049EDCu;
            ctx->pc = 0x80023784u;
            return;
    }

label_80049EDC:
    ctx->pc = 0x80049EDCu;
    ctx->downcount -= 16;
    // 80049EDC: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80049EE0:
    ctx->pc = 0x80049EE0u;
    // 80049EE0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049EE4:
    ctx->pc = 0x80049EE4u;
    // 80049EE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80049EE8:
    ctx->pc = 0x80049EE8u;
    // 80049EE8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80049EEC:
    ctx->pc = 0x80049EECu;
    // 80049EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049EF0:
    ctx->pc = 0x80049EF0u;
    ctx->downcount -= 5;
    // 80049EF0: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_80049EF4:
    ctx->pc = 0x80049EF4u;
    // 80049EF4: cmpwi   r3, 1
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

label_80049EF8:
    ctx->pc = 0x80049EF8u;
    // 80049EF8: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_80049EFC:
    ctx->pc = 0x80049EFCu;
    // 80049EFC: stw     r3, 484(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80049F00:
    ctx->pc = 0x80049F00u;
    // 80049F00: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049F04:
    ctx->pc = 0x80049F04u;
    ctx->downcount -= 3;
    // 80049F04: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80049F08:
    ctx->pc = 0x80049F08u;
    // 80049F08: stw     r0, 484(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049F0C:
    ctx->pc = 0x80049F0Cu;
    // 80049F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_80049F10:
    ctx->pc = 0x80049F10u;
    ctx->downcount -= 18;
    // 80049F10: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80049F14:
    ctx->pc = 0x80049F14u;
    // 80049F14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80049F18:
    ctx->pc = 0x80049F18u;
    // 80049F18: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80049F1C:
    ctx->pc = 0x80049F1Cu;
    // 80049F1C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80049F1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80049F20:
    ctx->pc = 0x80049F20u;
    // 80049F20: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80049F20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80049F20u);
        if (ctx->exception) return;
    }

label_80049F24:
    ctx->pc = 0x80049F24u;
    // 80049F24: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80049F28:
    ctx->pc = 0x80049F28u;
    // 80049F28: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80049F2C:
    ctx->pc = 0x80049F2Cu;
    // 80049F2C: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80049F30:
    ctx->pc = 0x80049F30u;
    // 80049F30: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80049F34:
    ctx->pc = 0x80049F34u;
    // 80049F34: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_80049F38:
    ctx->pc = 0x80049F38u;
    // 80049F38: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_80049F3C:
    ctx->pc = 0x80049F3Cu;
    // 80049F3C: addi    r31, r5, 12480
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(12480);

label_80049F40:
    ctx->pc = 0x80049F40u;
    // 80049F40: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80049F40u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80049F44:
    ctx->pc = 0x80049F44u;
    // 80049F44: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80049F44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80049F48:
    ctx->pc = 0x80049F48u;
    // 80049F48: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80049F4C:
    ctx->pc = 0x80049F4Cu;
    // 80049F4C: extsh r29, r0
    {
        ctx->gpr[29] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80049F50:
    ctx->pc = 0x80049F50u;
    // 80049F50: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80049F50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_80049F54:
    ctx->pc = 0x80049F54u;
    // 80049F54: bc    4, 1, 0x80049F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80049F5C;
        }
    }

label_80049F58:
    ctx->pc = 0x80049F58u;
    ctx->downcount -= 1;
    // 80049F58: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80049F58u)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_80049F5C:
    ctx->pc = 0x80049F5Cu;
    ctx->downcount -= 4;
    // 80049F5C: extsh r30, r3
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80049F60:
    ctx->pc = 0x80049F60u;
    // 80049F60: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80049F64:
    ctx->pc = 0x80049F64u;
    // 80049F64: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049F68:
    ctx->pc = 0x80049F68u;
    // 80049F68: bl      0x8004A040
    {
            ctx->lr = 0x80049F6Cu;
            goto label_8004A040;
    }

label_80049F6C:
    ctx->pc = 0x80049F6Cu;
    ctx->downcount -= 2;
    // 80049F6C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049F70:
    ctx->pc = 0x80049F70u;
    // 80049F70: bl      0x8004A034
    {
            ctx->lr = 0x80049F74u;
            goto label_8004A034;
    }

label_80049F74:
    ctx->pc = 0x80049F74u;
    ctx->downcount -= 3;
    // 80049F74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80049F78:
    ctx->pc = 0x80049F78u;
    // 80049F78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049F7C:
    ctx->pc = 0x80049F7Cu;
    // 80049F7C: bl      0x8004A024
    {
            ctx->lr = 0x80049F80u;
            goto label_8004A024;
    }

label_80049F80:
    ctx->pc = 0x80049F80u;
    ctx->downcount -= 10;
    // 80049F80: lfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80049F80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80049F84:
    ctx->pc = 0x80049F84u;
    // 80049F84: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049F88:
    ctx->pc = 0x80049F88u;
    // 80049F88: lfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80049F88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80049F8C:
    ctx->pc = 0x80049F8Cu;
    // 80049F8C: fmadds f0, f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80049F8Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[31], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80049F90:
    ctx->pc = 0x80049F90u;
    // 80049F90: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80049F90u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80049F94:
    ctx->pc = 0x80049F94u;
    // 80049F94: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80049F94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80049F98:
    ctx->pc = 0x80049F98u;
    // 80049F98: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80049F9C:
    ctx->pc = 0x80049F9Cu;
    // 80049F9C: extsh r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80049FA0:
    ctx->pc = 0x80049FA0u;
    // 80049FA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049FA4:
    ctx->pc = 0x80049FA4u;
    // 80049FA4: bl      0x8004A040
    {
            ctx->lr = 0x80049FA8u;
            goto label_8004A040;
    }

label_80049FA8:
    ctx->pc = 0x80049FA8u;
    ctx->downcount -= 2;
    // 80049FA8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049FAC:
    ctx->pc = 0x80049FACu;
    // 80049FAC: bl      0x8004A034
    {
            ctx->lr = 0x80049FB0u;
            goto label_8004A034;
    }

label_80049FB0:
    ctx->pc = 0x80049FB0u;
    ctx->downcount -= 3;
    // 80049FB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80049FB4:
    ctx->pc = 0x80049FB4u;
    // 80049FB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049FB8:
    ctx->pc = 0x80049FB8u;
    // 80049FB8: bl      0x8004A024
    {
            ctx->lr = 0x80049FBCu;
            goto label_8004A024;
    }

label_80049FBC:
    ctx->pc = 0x80049FBCu;
    ctx->downcount -= 3;
    // 80049FBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80049FC0:
    ctx->pc = 0x80049FC0u;
    // 80049FC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80049FC4:
    ctx->pc = 0x80049FC4u;
    // 80049FC4: bl      0x8004A040
    {
            ctx->lr = 0x80049FC8u;
            goto label_8004A040;
    }

label_80049FC8:
    ctx->pc = 0x80049FC8u;
    ctx->downcount -= 2;
    // 80049FC8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049FCC:
    ctx->pc = 0x80049FCCu;
    // 80049FCC: bl      0x8004A034
    {
            ctx->lr = 0x80049FD0u;
            goto label_8004A034;
    }

label_80049FD0:
    ctx->pc = 0x80049FD0u;
    ctx->downcount -= 3;
    // 80049FD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80049FD4:
    ctx->pc = 0x80049FD4u;
    // 80049FD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049FD8:
    ctx->pc = 0x80049FD8u;
    // 80049FD8: bl      0x8004A024
    {
            ctx->lr = 0x80049FDCu;
            goto label_8004A024;
    }

label_80049FDC:
    ctx->pc = 0x80049FDCu;
    ctx->downcount -= 3;
    // 80049FDC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80049FE0:
    ctx->pc = 0x80049FE0u;
    // 80049FE0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80049FE4:
    ctx->pc = 0x80049FE4u;
    // 80049FE4: bl      0x8004A040
    {
            ctx->lr = 0x80049FE8u;
            goto label_8004A040;
    }

label_80049FE8:
    ctx->pc = 0x80049FE8u;
    ctx->downcount -= 2;
    // 80049FE8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80049FEC:
    ctx->pc = 0x80049FECu;
    // 80049FEC: bl      0x8004A034
    {
            ctx->lr = 0x80049FF0u;
            goto label_8004A034;
    }

label_80049FF0:
    ctx->pc = 0x80049FF0u;
    ctx->downcount -= 3;
    // 80049FF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80049FF4:
    ctx->pc = 0x80049FF4u;
    // 80049FF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80049FF8:
    ctx->pc = 0x80049FF8u;
    // 80049FF8: bl      0x8004A024
    {
            ctx->lr = 0x80049FFCu;
            goto label_8004A024;
    }

label_80049FFC:
    ctx->pc = 0x80049FFCu;
    ctx->downcount -= 11;
    // 80049FFC: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80049FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80049FFCu);
        if (ctx->exception) return;
    }

label_8004A000:
    ctx->pc = 0x8004A000u;
    // 8004A000: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A004:
    ctx->pc = 0x8004A004u;
    // 8004A004: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A008:
    ctx->pc = 0x8004A008u;
    // 8004A008: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004A00C:
    ctx->pc = 0x8004A00Cu;
    // 8004A00C: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004A010:
    ctx->pc = 0x8004A010u;
    // 8004A010: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004A014:
    ctx->pc = 0x8004A014u;
    // 8004A014: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004A018:
    ctx->pc = 0x8004A018u;
    // 8004A018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A01C:
    ctx->pc = 0x8004A01Cu;
    // 8004A01C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8004A020:
    ctx->pc = 0x8004A020u;
    // 8004A020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A024:
    ctx->pc = 0x8004A024u;
    ctx->downcount -= 4;
    // 8004A024: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_8004A028:
    ctx->pc = 0x8004A028u;
    // 8004A028: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8004A02C:
    ctx->pc = 0x8004A02Cu;
    // 8004A02C: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8004A030:
    ctx->pc = 0x8004A030u;
    // 8004A030: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A034:
    ctx->pc = 0x8004A034u;
    ctx->downcount -= 3;
    // 8004A034: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_8004A038:
    ctx->pc = 0x8004A038u;
    // 8004A038: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004A03C:
    ctx->pc = 0x8004A03Cu;
    // 8004A03C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A040:
    ctx->pc = 0x8004A040u;
    ctx->downcount -= 4;
    // 8004A040: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_8004A044:
    ctx->pc = 0x8004A044u;
    // 8004A044: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8004A048:
    ctx->pc = 0x8004A048u;
    // 8004A048: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8004A04C:
    ctx->pc = 0x8004A04Cu;
    // 8004A04C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A050:
    ctx->pc = 0x8004A050u;
    ctx->downcount -= 39;
    // 8004A050: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A054:
    ctx->pc = 0x8004A054u;
    // 8004A054: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A058:
    ctx->pc = 0x8004A058u;
    // 8004A058: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A05C:
    ctx->pc = 0x8004A05Cu;
    // 8004A05C: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A05Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_8004A060:
    ctx->pc = 0x8004A060u;
    // 8004A060: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A060u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8004A060u);
        if (ctx->exception) return;
    }

label_8004A064:
    ctx->pc = 0x8004A064u;
    // 8004A064: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_8004A068:
    ctx->pc = 0x8004A068u;
    // 8004A068: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A068u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x8004A068u);
        if (ctx->exception) return;
    }

label_8004A06C:
    ctx->pc = 0x8004A06Cu;
    // 8004A06C: stfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A06Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_8004A070:
    ctx->pc = 0x8004A070u;
    // 8004A070: psq_st   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x8004A070u);
        if (ctx->exception) return;
    }

label_8004A074:
    ctx->pc = 0x8004A074u;
    // 8004A074: stfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_8004A078:
    ctx->pc = 0x8004A078u;
    // 8004A078: psq_st   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x8004A078u);
        if (ctx->exception) return;
    }

label_8004A07C:
    ctx->pc = 0x8004A07Cu;
    // 8004A07C: stfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A07Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_8004A080:
    ctx->pc = 0x8004A080u;
    // 8004A080: psq_st   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A080u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x8004A080u);
        if (ctx->exception) return;
    }

label_8004A084:
    ctx->pc = 0x8004A084u;
    // 8004A084: stfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_8004A088:
    ctx->pc = 0x8004A088u;
    // 8004A088: psq_st   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x8004A088u);
        if (ctx->exception) return;
    }

label_8004A08C:
    ctx->pc = 0x8004A08Cu;
    // 8004A08C: stfd     f25, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A08Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_8004A090:
    ctx->pc = 0x8004A090u;
    // 8004A090: psq_st   f25, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x8004A090u);
        if (ctx->exception) return;
    }

label_8004A094:
    ctx->pc = 0x8004A094u;
    // 8004A094: stfd     f24, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_8004A098:
    ctx->pc = 0x8004A098u;
    // 8004A098: psq_st   f24, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x8004A098u);
        if (ctx->exception) return;
    }

label_8004A09C:
    ctx->pc = 0x8004A09Cu;
    // 8004A09C: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004A0A0:
    ctx->pc = 0x8004A0A0u;
    // 8004A0A0: fmr    f26, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A0A0u)) return;
    ctx->fpr[26] = ctx->fpr[2];

label_8004A0A4:
    ctx->pc = 0x8004A0A4u;
    // 8004A0A4: fmr    f28, f4
    if (!ppc_fp_available_inline(ctx, 0x8004A0A4u)) return;
    ctx->fpr[28] = ctx->fpr[4];

label_8004A0A8:
    ctx->pc = 0x8004A0A8u;
    // 8004A0A8: fmr    f25, f1
    if (!ppc_fp_available_inline(ctx, 0x8004A0A8u)) return;
    ctx->fpr[25] = ctx->fpr[1];

label_8004A0AC:
    ctx->pc = 0x8004A0ACu;
    // 8004A0AC: fmr    f27, f3
    if (!ppc_fp_available_inline(ctx, 0x8004A0ACu)) return;
    ctx->fpr[27] = ctx->fpr[3];

label_8004A0B0:
    ctx->pc = 0x8004A0B0u;
    // 8004A0B0: fmr    f29, f5
    if (!ppc_fp_available_inline(ctx, 0x8004A0B0u)) return;
    ctx->fpr[29] = ctx->fpr[5];

label_8004A0B4:
    ctx->pc = 0x8004A0B4u;
    // 8004A0B4: fmr    f30, f6
    if (!ppc_fp_available_inline(ctx, 0x8004A0B4u)) return;
    ctx->fpr[30] = ctx->fpr[6];

label_8004A0B8:
    ctx->pc = 0x8004A0B8u;
    // 8004A0B8: fmr    f31, f7
    if (!ppc_fp_available_inline(ctx, 0x8004A0B8u)) return;
    ctx->fpr[31] = ctx->fpr[7];

label_8004A0BC:
    ctx->pc = 0x8004A0BCu;
    // 8004A0BC: fcmpo   cr0, f26, f28
    if (!ppc_fp_available_inline(ctx, 0x8004A0BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[26], ctx->fpr[28], true);

label_8004A0C0:
    ctx->pc = 0x8004A0C0u;
    // 8004A0C0: bc    4, 1, 0x8004A0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004A0CC;
        }
    }

label_8004A0C4:
    ctx->pc = 0x8004A0C4u;
    ctx->downcount -= 2;
    // 8004A0C4: fmr    f0, f26
    if (!ppc_fp_available_inline(ctx, 0x8004A0C4u)) return;
    ctx->fpr[0] = ctx->fpr[26];

label_8004A0C8:
    ctx->pc = 0x8004A0C8u;
    // 8004A0C8: b       0x8004A0D0
    {
            goto label_8004A0D0;
    }

label_8004A0CC:
    ctx->pc = 0x8004A0CCu;
    ctx->downcount -= 1;
    // 8004A0CC: fmr    f0, f28
    if (!ppc_fp_available_inline(ctx, 0x8004A0CCu)) return;
    ctx->fpr[0] = ctx->fpr[28];

label_8004A0D0:
    ctx->pc = 0x8004A0D0u;
    ctx->downcount -= 2;
    // 8004A0D0: fcmpo   cr0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x8004A0D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[25], true);

label_8004A0D4:
    ctx->pc = 0x8004A0D4u;
    // 8004A0D4: bc    4, 1, 0x8004A0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004A0F0;
        }
    }

label_8004A0D8:
    ctx->pc = 0x8004A0D8u;
    ctx->downcount -= 2;
    // 8004A0D8: fcmpo   cr0, f26, f28
    if (!ppc_fp_available_inline(ctx, 0x8004A0D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[26], ctx->fpr[28], true);

label_8004A0DC:
    ctx->pc = 0x8004A0DCu;
    // 8004A0DC: bc    4, 1, 0x8004A0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004A0E8;
        }
    }

label_8004A0E0:
    ctx->pc = 0x8004A0E0u;
    ctx->downcount -= 2;
    // 8004A0E0: fmr    f24, f26
    if (!ppc_fp_available_inline(ctx, 0x8004A0E0u)) return;
    ctx->fpr[24] = ctx->fpr[26];

label_8004A0E4:
    ctx->pc = 0x8004A0E4u;
    // 8004A0E4: b       0x8004A0F4
    {
            goto label_8004A0F4;
    }

label_8004A0E8:
    ctx->pc = 0x8004A0E8u;
    ctx->downcount -= 2;
    // 8004A0E8: fmr    f24, f28
    if (!ppc_fp_available_inline(ctx, 0x8004A0E8u)) return;
    ctx->fpr[24] = ctx->fpr[28];

label_8004A0EC:
    ctx->pc = 0x8004A0ECu;
    // 8004A0EC: b       0x8004A0F4
    {
            goto label_8004A0F4;
    }

label_8004A0F0:
    ctx->pc = 0x8004A0F0u;
    ctx->downcount -= 1;
    // 8004A0F0: fmr    f24, f25
    if (!ppc_fp_available_inline(ctx, 0x8004A0F0u)) return;
    ctx->fpr[24] = ctx->fpr[25];

label_8004A0F4:
    ctx->pc = 0x8004A0F4u;
    ctx->downcount -= 1;
    // 8004A0F4: bl      0x8004DB9C
    {
            ctx->lr = 0x8004A0F8u;
            ctx->pc = 0x8004DB9Cu;
            return;
    }

label_8004A0F8:
    ctx->pc = 0x8004A0F8u;
    ctx->downcount -= 37;
    // 8004A0F8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8004A0FC:
    ctx->pc = 0x8004A0FCu;
    // 8004A0FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A100:
    ctx->pc = 0x8004A100u;
    // 8004A100: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A104:
    ctx->pc = 0x8004A104u;
    // 8004A104: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004A108:
    ctx->pc = 0x8004A108u;
    // 8004A108: addi    r5, r4, 12512
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12512);

label_8004A10C:
    ctx->pc = 0x8004A10Cu;
    // 8004A10C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8004A110:
    ctx->pc = 0x8004A110u;
    // 8004A110: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A114:
    ctx->pc = 0x8004A114u;
    // 8004A114: addi    r4, r3, 12496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12496);

label_8004A118:
    ctx->pc = 0x8004A118u;
    // 8004A118: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8004A118u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A11C:
    ctx->pc = 0x8004A11Cu;
    // 8004A11C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8004A120:
    ctx->pc = 0x8004A120u;
    // 8004A120: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A124:
    ctx->pc = 0x8004A124u;
    // 8004A124: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A124u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8004A128:
    ctx->pc = 0x8004A128u;
    // 8004A128: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A128u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8004A12C:
    ctx->pc = 0x8004A12Cu;
    // 8004A12C: lfs     f0, 12508(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A12Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12508);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8004A130:
    ctx->pc = 0x8004A130u;
    // 8004A130: fmsubs f1, f2, f24, f1
    if (!ppc_fp_available_inline(ctx, 0x8004A130u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[24], ctx->fpr[1], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_8004A134:
    ctx->pc = 0x8004A134u;
    // 8004A134: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A134u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004A138:
    ctx->pc = 0x8004A138u;
    // 8004A138: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A138u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8004A13C:
    ctx->pc = 0x8004A13Cu;
    // 8004A13C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8004A140:
    ctx->pc = 0x8004A140u;
    // 8004A140: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004A144:
    ctx->pc = 0x8004A144u;
    // 8004A144: addi    r31, r3, 1
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(1);

label_8004A148:
    ctx->pc = 0x8004A148u;
    // 8004A148: bl      0x8004DB9C
    {
            ctx->lr = 0x8004A14Cu;
            ctx->pc = 0x8004DB9Cu;
            return;
    }

label_8004A14C:
    ctx->pc = 0x8004A14Cu;
    ctx->downcount -= 170;
    // 8004A14C: li      r4, 4000
    ctx->gpr[4] = (u32)(s32)(4000);

label_8004A150:
    ctx->pc = 0x8004A150u;
    // 8004A150: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A154:
    ctx->pc = 0x8004A154u;
    // 8004A154: divw   r5, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8004A158:
    ctx->pc = 0x8004A158u;
    // 8004A158: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A15C:
    ctx->pc = 0x8004A15Cu;
    // 8004A15C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A160:
    ctx->pc = 0x8004A160u;
    // 8004A160: lfd     f1, 12512(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A160u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A164:
    ctx->pc = 0x8004A164u;
    // 8004A164: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004A168:
    ctx->pc = 0x8004A168u;
    // 8004A168: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_8004A16C:
    ctx->pc = 0x8004A16Cu;
    // 8004A16C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A170:
    ctx->pc = 0x8004A170u;
    // 8004A170: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A174:
    ctx->pc = 0x8004A174u;
    // 8004A174: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8004A174u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_8004A178:
    ctx->pc = 0x8004A178u;
    // 8004A178: fdivs   f25, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A178u)) return;
    ppc_fdivs(ctx, 25, 25, 0);

label_8004A17C:
    ctx->pc = 0x8004A17Cu;
    // 8004A17C: fdivs   f26, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A17Cu)) return;
    ppc_fdivs(ctx, 26, 26, 0);

label_8004A180:
    ctx->pc = 0x8004A180u;
    // 8004A180: fdivs   f27, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A180u)) return;
    ppc_fdivs(ctx, 27, 27, 0);

label_8004A184:
    ctx->pc = 0x8004A184u;
    // 8004A184: fdivs   f28, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A184u)) return;
    ppc_fdivs(ctx, 28, 28, 0);

label_8004A188:
    ctx->pc = 0x8004A188u;
    // 8004A188: fdivs   f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A188u)) return;
    ppc_fdivs(ctx, 29, 29, 0);

label_8004A18C:
    ctx->pc = 0x8004A18Cu;
    // 8004A18C: fdivs   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A18Cu)) return;
    ppc_fdivs(ctx, 30, 30, 0);

label_8004A190:
    ctx->pc = 0x8004A190u;
    // 8004A190: fdivs   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A190u)) return;
    ppc_fdivs(ctx, 31, 31, 0);

label_8004A194:
    ctx->pc = 0x8004A194u;
    // 8004A194: bl      0x800424A0
    {
            ctx->lr = 0x8004A198u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_8004A198:
    ctx->pc = 0x8004A198u;
    ctx->downcount -= 2;
    // 8004A198: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004A19C:
    ctx->pc = 0x8004A19Cu;
    // 8004A19C: bl      0x80045EC8
    {
            ctx->lr = 0x8004A1A0u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_8004A1A0:
    ctx->pc = 0x8004A1A0u;
    ctx->downcount -= 2;
    // 8004A1A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004A1A4:
    ctx->pc = 0x8004A1A4u;
    // 8004A1A4: bl      0x80044084
    {
            ctx->lr = 0x8004A1A8u;
            ctx->pc = 0x80044084u;
            return;
    }

label_8004A1A8:
    ctx->pc = 0x8004A1A8u;
    ctx->downcount -= 2;
    // 8004A1A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A1AC:
    ctx->pc = 0x8004A1ACu;
    // 8004A1AC: bl      0x800455BC
    {
            ctx->lr = 0x8004A1B0u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_8004A1B0:
    ctx->pc = 0x8004A1B0u;
    ctx->downcount -= 2;
    // 8004A1B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A1B4:
    ctx->pc = 0x8004A1B4u;
    // 8004A1B4: bl      0x800455E0
    {
            ctx->lr = 0x8004A1B8u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_8004A1B8:
    ctx->pc = 0x8004A1B8u;
    ctx->downcount -= 5;
    // 8004A1B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A1BC:
    ctx->pc = 0x8004A1BCu;
    // 8004A1BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A1C0:
    ctx->pc = 0x8004A1C0u;
    // 8004A1C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004A1C4:
    ctx->pc = 0x8004A1C4u;
    // 8004A1C4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_8004A1C8:
    ctx->pc = 0x8004A1C8u;
    // 8004A1C8: bl      0x80045D2C
    {
            ctx->lr = 0x8004A1CCu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_8004A1CC:
    ctx->pc = 0x8004A1CCu;
    ctx->downcount -= 5;
    // 8004A1CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A1D0:
    ctx->pc = 0x8004A1D0u;
    // 8004A1D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004A1D4:
    ctx->pc = 0x8004A1D4u;
    // 8004A1D4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8004A1D8:
    ctx->pc = 0x8004A1D8u;
    // 8004A1D8: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_8004A1DC:
    ctx->pc = 0x8004A1DCu;
    // 8004A1DC: bl      0x8004A6A4
    {
            ctx->lr = 0x8004A1E0u;
            goto label_8004A6A4;
    }

label_8004A1E0:
    ctx->pc = 0x8004A1E0u;
    ctx->downcount -= 4;
    // 8004A1E0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A1E4:
    ctx->pc = 0x8004A1E4u;
    // 8004A1E4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004A1E8:
    ctx->pc = 0x8004A1E8u;
    // 8004A1E8: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A1EC:
    ctx->pc = 0x8004A1ECu;
    // 8004A1EC: bl      0x800468B8
    {
            ctx->lr = 0x8004A1F0u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_8004A1F0:
    ctx->pc = 0x8004A1F0u;
    ctx->downcount -= 5;
    // 8004A1F0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A1F4:
    ctx->pc = 0x8004A1F4u;
    // 8004A1F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A1F8:
    ctx->pc = 0x8004A1F8u;
    // 8004A1F8: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A1FC:
    ctx->pc = 0x8004A1FCu;
    // 8004A1FC: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_8004A200:
    ctx->pc = 0x8004A200u;
    // 8004A200: bl      0x80046A30
    {
            ctx->lr = 0x8004A204u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_8004A204:
    ctx->pc = 0x8004A204u;
    ctx->downcount -= 2;
    // 8004A204: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A208:
    ctx->pc = 0x8004A208u;
    // 8004A208: bl      0x80046B34
    {
            ctx->lr = 0x8004A20Cu;
            ctx->pc = 0x80046B34u;
            return;
    }

label_8004A20C:
    ctx->pc = 0x8004A20Cu;
    ctx->downcount -= 8;
    // 8004A20C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8004A210:
    ctx->pc = 0x8004A210u;
    // 8004A210: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A214:
    ctx->pc = 0x8004A214u;
    // 8004A214: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8004A218:
    ctx->pc = 0x8004A218u;
    // 8004A218: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8004A21C:
    ctx->pc = 0x8004A21Cu;
    // 8004A21C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8004A220:
    ctx->pc = 0x8004A220u;
    // 8004A220: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004A224:
    ctx->pc = 0x8004A224u;
    // 8004A224: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_8004A228:
    ctx->pc = 0x8004A228u;
    // 8004A228: bl      0x800440C0
    {
            ctx->lr = 0x8004A22Cu;
            ctx->pc = 0x800440C0u;
            return;
    }

label_8004A22C:
    ctx->pc = 0x8004A22Cu;
    ctx->downcount -= 2;
    // 8004A22C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004A230:
    ctx->pc = 0x8004A230u;
    // 8004A230: bl      0x8004628C
    {
            ctx->lr = 0x8004A234u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_8004A234:
    ctx->pc = 0x8004A234u;
    ctx->downcount -= 5;
    // 8004A234: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004A238:
    ctx->pc = 0x8004A238u;
    // 8004A238: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A23C:
    ctx->pc = 0x8004A23Cu;
    // 8004A23C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_8004A240:
    ctx->pc = 0x8004A240u;
    // 8004A240: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004A244:
    ctx->pc = 0x8004A244u;
    // 8004A244: bl      0x80046238
    {
            ctx->lr = 0x8004A248u;
            ctx->pc = 0x80046238u;
            return;
    }

label_8004A248:
    ctx->pc = 0x8004A248u;
    ctx->downcount -= 6;
    // 8004A248: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A24C:
    ctx->pc = 0x8004A24Cu;
    // 8004A24C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_8004A250:
    ctx->pc = 0x8004A250u;
    // 8004A250: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8004A254:
    ctx->pc = 0x8004A254u;
    // 8004A254: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_8004A258:
    ctx->pc = 0x8004A258u;
    // 8004A258: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_8004A25C:
    ctx->pc = 0x8004A25Cu;
    // 8004A25C: bl      0x8004585C
    {
            ctx->lr = 0x8004A260u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_8004A260:
    ctx->pc = 0x8004A260u;
    ctx->downcount -= 6;
    // 8004A260: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A264:
    ctx->pc = 0x8004A264u;
    // 8004A264: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_8004A268:
    ctx->pc = 0x8004A268u;
    // 8004A268: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_8004A26C:
    ctx->pc = 0x8004A26Cu;
    // 8004A26C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_8004A270:
    ctx->pc = 0x8004A270u;
    // 8004A270: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8004A274:
    ctx->pc = 0x8004A274u;
    // 8004A274: bl      0x80045818
    {
            ctx->lr = 0x8004A278u;
            ctx->pc = 0x80045818u;
            return;
    }

label_8004A278:
    ctx->pc = 0x8004A278u;
    ctx->downcount -= 7;
    // 8004A278: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A27C:
    ctx->pc = 0x8004A27Cu;
    // 8004A27C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A280:
    ctx->pc = 0x8004A280u;
    // 8004A280: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004A284:
    ctx->pc = 0x8004A284u;
    // 8004A284: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004A288:
    ctx->pc = 0x8004A288u;
    // 8004A288: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8004A28C:
    ctx->pc = 0x8004A28Cu;
    // 8004A28C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004A290:
    ctx->pc = 0x8004A290u;
    // 8004A290: bl      0x80045908
    {
            ctx->lr = 0x8004A294u;
            ctx->pc = 0x80045908u;
            return;
    }

label_8004A294:
    ctx->pc = 0x8004A294u;
    ctx->downcount -= 7;
    // 8004A294: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A298:
    ctx->pc = 0x8004A298u;
    // 8004A298: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A29C:
    ctx->pc = 0x8004A29Cu;
    // 8004A29C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004A2A0:
    ctx->pc = 0x8004A2A0u;
    // 8004A2A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004A2A4:
    ctx->pc = 0x8004A2A4u;
    // 8004A2A4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8004A2A8:
    ctx->pc = 0x8004A2A8u;
    // 8004A2A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004A2AC:
    ctx->pc = 0x8004A2ACu;
    // 8004A2AC: bl      0x800458A0
    {
            ctx->lr = 0x8004A2B0u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_8004A2B0:
    ctx->pc = 0x8004A2B0u;
    ctx->downcount -= 1;
    // 8004A2B0: bl      0x80041BD4
    {
            ctx->lr = 0x8004A2B4u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_8004A2B4:
    ctx->pc = 0x8004A2B4u;
    ctx->downcount -= 3;
    // 8004A2B4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_8004A2B8:
    ctx->pc = 0x8004A2B8u;
    // 8004A2B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004A2BC:
    ctx->pc = 0x8004A2BCu;
    // 8004A2BC: bl      0x80041500
    {
            ctx->lr = 0x8004A2C0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_8004A2C0:
    ctx->pc = 0x8004A2C0u;
    ctx->downcount -= 3;
    // 8004A2C0: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_8004A2C4:
    ctx->pc = 0x8004A2C4u;
    // 8004A2C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004A2C8:
    ctx->pc = 0x8004A2C8u;
    // 8004A2C8: bl      0x80041500
    {
            ctx->lr = 0x8004A2CCu;
            ctx->pc = 0x80041500u;
            return;
    }

label_8004A2CC:
    ctx->pc = 0x8004A2CCu;
    ctx->downcount -= 3;
    // 8004A2CC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_8004A2D0:
    ctx->pc = 0x8004A2D0u;
    // 8004A2D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004A2D4:
    ctx->pc = 0x8004A2D4u;
    // 8004A2D4: bl      0x80041500
    {
            ctx->lr = 0x8004A2D8u;
            ctx->pc = 0x80041500u;
            return;
    }

label_8004A2D8:
    ctx->pc = 0x8004A2D8u;
    ctx->downcount -= 2;
    // 8004A2D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004A2DC:
    ctx->pc = 0x8004A2DCu;
    // 8004A2DC: bl      0x8004302C
    {
            ctx->lr = 0x8004A2E0u;
            ctx->pc = 0x8004302Cu;
            return;
    }

label_8004A2E0:
    ctx->pc = 0x8004A2E0u;
    ctx->downcount -= 4;
    // 8004A2E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A2E4:
    ctx->pc = 0x8004A2E4u;
    // 8004A2E4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_8004A2E8:
    ctx->pc = 0x8004A2E8u;
    // 8004A2E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004A2EC:
    ctx->pc = 0x8004A2ECu;
    // 8004A2EC: bl      0x800462E4
    {
            ctx->lr = 0x8004A2F0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_8004A2F0:
    ctx->pc = 0x8004A2F0u;
    ctx->downcount -= 4;
    // 8004A2F0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_8004A2F4:
    ctx->pc = 0x8004A2F4u;
    // 8004A2F4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A2F8:
    ctx->pc = 0x8004A2F8u;
    // 8004A2F8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8004A2FC:
    ctx->pc = 0x8004A2FCu;
    // 8004A2FC: bl      0x80042E0C
    {
            ctx->lr = 0x8004A300u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_8004A300:
    ctx->pc = 0x8004A300u;
    ctx->downcount -= 3;
    // 8004A300: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8004A304:
    ctx->pc = 0x8004A304u;
    // 8004A304: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A308:
    ctx->pc = 0x8004A308u;
    // 8004A308: bl      0x8004A040
    {
            ctx->lr = 0x8004A30Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A30C:
    ctx->pc = 0x8004A30Cu;
    ctx->downcount -= 3;
    // 8004A30C: lis     r3, 16448
    ctx->gpr[3] = ((u32)(s32)(16448) << 16);

label_8004A310:
    ctx->pc = 0x8004A310u;
    // 8004A310: addi    r3, r3, 16639
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16639);

label_8004A314:
    ctx->pc = 0x8004A314u;
    // 8004A314: bl      0x8004A034
    {
            ctx->lr = 0x8004A318u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A318:
    ctx->pc = 0x8004A318u;
    ctx->downcount -= 3;
    // 8004A318: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A31C:
    ctx->pc = 0x8004A31Cu;
    // 8004A31C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A320:
    ctx->pc = 0x8004A320u;
    // 8004A320: bl      0x8004A024
    {
            ctx->lr = 0x8004A324u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A324:
    ctx->pc = 0x8004A324u;
    ctx->downcount -= 3;
    // 8004A324: li      r3, 502
    ctx->gpr[3] = (u32)(s32)(502);

label_8004A328:
    ctx->pc = 0x8004A328u;
    // 8004A328: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A32C:
    ctx->pc = 0x8004A32Cu;
    // 8004A32C: bl      0x8004A040
    {
            ctx->lr = 0x8004A330u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A330:
    ctx->pc = 0x8004A330u;
    ctx->downcount -= 3;
    // 8004A330: lis     r3, 16448
    ctx->gpr[3] = ((u32)(s32)(16448) << 16);

label_8004A334:
    ctx->pc = 0x8004A334u;
    // 8004A334: addi    r3, r3, 16639
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16639);

label_8004A338:
    ctx->pc = 0x8004A338u;
    // 8004A338: bl      0x8004A034
    {
            ctx->lr = 0x8004A33Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A33C:
    ctx->pc = 0x8004A33Cu;
    ctx->downcount -= 3;
    // 8004A33C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A340:
    ctx->pc = 0x8004A340u;
    // 8004A340: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A344:
    ctx->pc = 0x8004A344u;
    // 8004A344: bl      0x8004A024
    {
            ctx->lr = 0x8004A348u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A348:
    ctx->pc = 0x8004A348u;
    ctx->downcount -= 3;
    // 8004A348: li      r3, 502
    ctx->gpr[3] = (u32)(s32)(502);

label_8004A34C:
    ctx->pc = 0x8004A34Cu;
    // 8004A34C: li      r4, 438
    ctx->gpr[4] = (u32)(s32)(438);

label_8004A350:
    ctx->pc = 0x8004A350u;
    // 8004A350: bl      0x8004A040
    {
            ctx->lr = 0x8004A354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A354:
    ctx->pc = 0x8004A354u;
    ctx->downcount -= 3;
    // 8004A354: lis     r3, 16448
    ctx->gpr[3] = ((u32)(s32)(16448) << 16);

label_8004A358:
    ctx->pc = 0x8004A358u;
    // 8004A358: addi    r3, r3, 16639
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16639);

label_8004A35C:
    ctx->pc = 0x8004A35Cu;
    // 8004A35C: bl      0x8004A034
    {
            ctx->lr = 0x8004A360u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A360:
    ctx->pc = 0x8004A360u;
    ctx->downcount -= 3;
    // 8004A360: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A364:
    ctx->pc = 0x8004A364u;
    // 8004A364: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A368:
    ctx->pc = 0x8004A368u;
    // 8004A368: bl      0x8004A024
    {
            ctx->lr = 0x8004A36Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A36C:
    ctx->pc = 0x8004A36Cu;
    ctx->downcount -= 3;
    // 8004A36C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8004A370:
    ctx->pc = 0x8004A370u;
    // 8004A370: li      r4, 438
    ctx->gpr[4] = (u32)(s32)(438);

label_8004A374:
    ctx->pc = 0x8004A374u;
    // 8004A374: bl      0x8004A040
    {
            ctx->lr = 0x8004A378u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A378:
    ctx->pc = 0x8004A378u;
    ctx->downcount -= 3;
    // 8004A378: lis     r3, 16448
    ctx->gpr[3] = ((u32)(s32)(16448) << 16);

label_8004A37C:
    ctx->pc = 0x8004A37Cu;
    // 8004A37C: addi    r3, r3, 16639
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16639);

label_8004A380:
    ctx->pc = 0x8004A380u;
    // 8004A380: bl      0x8004A034
    {
            ctx->lr = 0x8004A384u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A384:
    ctx->pc = 0x8004A384u;
    ctx->downcount -= 3;
    // 8004A384: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A388:
    ctx->pc = 0x8004A388u;
    // 8004A388: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A38C:
    ctx->pc = 0x8004A38Cu;
    // 8004A38C: bl      0x8004A024
    {
            ctx->lr = 0x8004A390u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A390:
    ctx->pc = 0x8004A390u;
    ctx->downcount -= 1;
    // 8004A390: bl      0x8004A6A0
    {
            ctx->lr = 0x8004A394u;
            goto label_8004A6A0;
    }

label_8004A394:
    ctx->pc = 0x8004A394u;
    ctx->downcount -= 4;
    // 8004A394: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_8004A398:
    ctx->pc = 0x8004A398u;
    // 8004A398: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A39C:
    ctx->pc = 0x8004A39Cu;
    // 8004A39C: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8004A3A0:
    ctx->pc = 0x8004A3A0u;
    // 8004A3A0: bl      0x80042E0C
    {
            ctx->lr = 0x8004A3A4u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_8004A3A4:
    ctx->pc = 0x8004A3A4u;
    ctx->downcount -= 5;
    // 8004A3A4: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x8004A3A4u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_8004A3A8:
    ctx->pc = 0x8004A3A8u;
    // 8004A3A8: lis     r3, 75
    ctx->gpr[3] = ((u32)(s32)(75) << 16);

label_8004A3AC:
    ctx->pc = 0x8004A3ACu;
    // 8004A3AC: addi    r4, r3, 5375
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5375);

label_8004A3B0:
    ctx->pc = 0x8004A3B0u;
    // 8004A3B0: li      r3, 410
    ctx->gpr[3] = (u32)(s32)(410);

label_8004A3B4:
    ctx->pc = 0x8004A3B4u;
    // 8004A3B4: bl      0x80049F10
    {
            ctx->lr = 0x8004A3B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A3B8:
    ctx->pc = 0x8004A3B8u;
    ctx->downcount -= 5;
    // 8004A3B8: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x8004A3B8u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_8004A3BC:
    ctx->pc = 0x8004A3BCu;
    // 8004A3BC: lis     r3, 25
    ctx->gpr[3] = ((u32)(s32)(25) << 16);

label_8004A3C0:
    ctx->pc = 0x8004A3C0u;
    // 8004A3C0: addi    r4, r3, 15615
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15615);

label_8004A3C4:
    ctx->pc = 0x8004A3C4u;
    // 8004A3C4: li      r3, 410
    ctx->gpr[3] = (u32)(s32)(410);

label_8004A3C8:
    ctx->pc = 0x8004A3C8u;
    // 8004A3C8: bl      0x80049F10
    {
            ctx->lr = 0x8004A3CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A3CC:
    ctx->pc = 0x8004A3CCu;
    ctx->downcount -= 6;
    // 8004A3CC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A3D0:
    ctx->pc = 0x8004A3D0u;
    // 8004A3D0: fmr    f1, f26
    if (!ppc_fp_available_inline(ctx, 0x8004A3D0u)) return;
    ctx->fpr[1] = ctx->fpr[26];

label_8004A3D4:
    ctx->pc = 0x8004A3D4u;
    // 8004A3D4: addi    r4, r3, -17576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A3D8:
    ctx->pc = 0x8004A3D8u;
    // 8004A3D8: li      r3, 410
    ctx->gpr[3] = (u32)(s32)(410);

label_8004A3DC:
    ctx->pc = 0x8004A3DCu;
    // 8004A3DC: lwz     r4, 488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004A3E0:
    ctx->pc = 0x8004A3E0u;
    // 8004A3E0: bl      0x80049F10
    {
            ctx->lr = 0x8004A3E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A3E4:
    ctx->pc = 0x8004A3E4u;
    ctx->downcount -= 5;
    // 8004A3E4: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x8004A3E4u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_8004A3E8:
    ctx->pc = 0x8004A3E8u;
    // 8004A3E8: lis     r3, 75
    ctx->gpr[3] = ((u32)(s32)(75) << 16);

label_8004A3EC:
    ctx->pc = 0x8004A3ECu;
    // 8004A3EC: addi    r4, r3, 5375
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5375);

label_8004A3F0:
    ctx->pc = 0x8004A3F0u;
    // 8004A3F0: li      r3, 417
    ctx->gpr[3] = (u32)(s32)(417);

label_8004A3F4:
    ctx->pc = 0x8004A3F4u;
    // 8004A3F4: bl      0x80049F10
    {
            ctx->lr = 0x8004A3F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A3F8:
    ctx->pc = 0x8004A3F8u;
    ctx->downcount -= 6;
    // 8004A3F8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A3FC:
    ctx->pc = 0x8004A3FCu;
    // 8004A3FC: fmr    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x8004A3FCu)) return;
    ctx->fpr[1] = ctx->fpr[28];

label_8004A400:
    ctx->pc = 0x8004A400u;
    // 8004A400: addi    r4, r3, -17576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A404:
    ctx->pc = 0x8004A404u;
    // 8004A404: li      r3, 417
    ctx->gpr[3] = (u32)(s32)(417);

label_8004A408:
    ctx->pc = 0x8004A408u;
    // 8004A408: lwz     r4, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004A40C:
    ctx->pc = 0x8004A40Cu;
    // 8004A40C: bl      0x80049F10
    {
            ctx->lr = 0x8004A410u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A410:
    ctx->pc = 0x8004A410u;
    ctx->downcount -= 5;
    // 8004A410: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x8004A410u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_8004A414:
    ctx->pc = 0x8004A414u;
    // 8004A414: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_8004A418:
    ctx->pc = 0x8004A418u;
    // 8004A418: addi    r4, r3, -14081
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14081);

label_8004A41C:
    ctx->pc = 0x8004A41Cu;
    // 8004A41C: li      r3, 424
    ctx->gpr[3] = (u32)(s32)(424);

label_8004A420:
    ctx->pc = 0x8004A420u;
    // 8004A420: bl      0x80049F10
    {
            ctx->lr = 0x8004A424u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A424:
    ctx->pc = 0x8004A424u;
    ctx->downcount -= 5;
    // 8004A424: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8004A424u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8004A428:
    ctx->pc = 0x8004A428u;
    // 8004A428: lis     r3, -14135
    ctx->gpr[3] = ((u32)(s32)(-14135) << 16);

label_8004A42C:
    ctx->pc = 0x8004A42Cu;
    // 8004A42C: addi    r4, r3, -14081
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14081);

label_8004A430:
    ctx->pc = 0x8004A430u;
    // 8004A430: li      r3, 431
    ctx->gpr[3] = (u32)(s32)(431);

label_8004A434:
    ctx->pc = 0x8004A434u;
    // 8004A434: bl      0x80049F10
    {
            ctx->lr = 0x8004A438u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049F10u;
                return;
            }
            goto label_80049F10;
    }

label_8004A438:
    ctx->pc = 0x8004A438u;
    ctx->downcount -= 1;
    // 8004A438: bl      0x8004A6A0
    {
            ctx->lr = 0x8004A43Cu;
            goto label_8004A6A0;
    }

label_8004A43C:
    ctx->pc = 0x8004A43Cu;
    ctx->downcount -= 3;
    // 8004A43C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8004A440:
    ctx->pc = 0x8004A440u;
    // 8004A440: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A444:
    ctx->pc = 0x8004A444u;
    // 8004A444: bl      0x80042F64
    {
            ctx->lr = 0x8004A448u;
            ctx->pc = 0x80042F64u;
            return;
    }

label_8004A448:
    ctx->pc = 0x8004A448u;
    ctx->downcount -= 4;
    // 8004A448: li      r3, 176
    ctx->gpr[3] = (u32)(s32)(176);

label_8004A44C:
    ctx->pc = 0x8004A44Cu;
    // 8004A44C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A450:
    ctx->pc = 0x8004A450u;
    // 8004A450: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_8004A454:
    ctx->pc = 0x8004A454u;
    // 8004A454: bl      0x80042E0C
    {
            ctx->lr = 0x8004A458u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_8004A458:
    ctx->pc = 0x8004A458u;
    ctx->downcount -= 3;
    // 8004A458: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8004A45C:
    ctx->pc = 0x8004A45Cu;
    // 8004A45C: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A460:
    ctx->pc = 0x8004A460u;
    // 8004A460: bl      0x8004A040
    {
            ctx->lr = 0x8004A464u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A464:
    ctx->pc = 0x8004A464u;
    ctx->downcount -= 2;
    // 8004A464: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_8004A468:
    ctx->pc = 0x8004A468u;
    // 8004A468: bl      0x8004A034
    {
            ctx->lr = 0x8004A46Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A46C:
    ctx->pc = 0x8004A46Cu;
    ctx->downcount -= 3;
    // 8004A46C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A470:
    ctx->pc = 0x8004A470u;
    // 8004A470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A474:
    ctx->pc = 0x8004A474u;
    // 8004A474: bl      0x8004A024
    {
            ctx->lr = 0x8004A478u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A478:
    ctx->pc = 0x8004A478u;
    ctx->downcount -= 3;
    // 8004A478: li      r3, 502
    ctx->gpr[3] = (u32)(s32)(502);

label_8004A47C:
    ctx->pc = 0x8004A47Cu;
    // 8004A47C: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A480:
    ctx->pc = 0x8004A480u;
    // 8004A480: bl      0x8004A040
    {
            ctx->lr = 0x8004A484u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A484:
    ctx->pc = 0x8004A484u;
    ctx->downcount -= 2;
    // 8004A484: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_8004A488:
    ctx->pc = 0x8004A488u;
    // 8004A488: bl      0x8004A034
    {
            ctx->lr = 0x8004A48Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A48C:
    ctx->pc = 0x8004A48Cu;
    ctx->downcount -= 3;
    // 8004A48C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A490:
    ctx->pc = 0x8004A490u;
    // 8004A490: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A494:
    ctx->pc = 0x8004A494u;
    // 8004A494: bl      0x8004A024
    {
            ctx->lr = 0x8004A498u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A498:
    ctx->pc = 0x8004A498u;
    ctx->downcount -= 3;
    // 8004A498: li      r3, 502
    ctx->gpr[3] = (u32)(s32)(502);

label_8004A49C:
    ctx->pc = 0x8004A49Cu;
    // 8004A49C: li      r4, 438
    ctx->gpr[4] = (u32)(s32)(438);

label_8004A4A0:
    ctx->pc = 0x8004A4A0u;
    // 8004A4A0: bl      0x8004A040
    {
            ctx->lr = 0x8004A4A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A4A4:
    ctx->pc = 0x8004A4A4u;
    ctx->downcount -= 2;
    // 8004A4A4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_8004A4A8:
    ctx->pc = 0x8004A4A8u;
    // 8004A4A8: bl      0x8004A034
    {
            ctx->lr = 0x8004A4ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A4AC:
    ctx->pc = 0x8004A4ACu;
    ctx->downcount -= 3;
    // 8004A4AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A4B0:
    ctx->pc = 0x8004A4B0u;
    // 8004A4B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A4B4:
    ctx->pc = 0x8004A4B4u;
    // 8004A4B4: bl      0x8004A024
    {
            ctx->lr = 0x8004A4B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A4B8:
    ctx->pc = 0x8004A4B8u;
    ctx->downcount -= 3;
    // 8004A4B8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8004A4BC:
    ctx->pc = 0x8004A4BCu;
    // 8004A4BC: li      r4, 438
    ctx->gpr[4] = (u32)(s32)(438);

label_8004A4C0:
    ctx->pc = 0x8004A4C0u;
    // 8004A4C0: bl      0x8004A040
    {
            ctx->lr = 0x8004A4C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A4C4:
    ctx->pc = 0x8004A4C4u;
    ctx->downcount -= 2;
    // 8004A4C4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_8004A4C8:
    ctx->pc = 0x8004A4C8u;
    // 8004A4C8: bl      0x8004A034
    {
            ctx->lr = 0x8004A4CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A4CC:
    ctx->pc = 0x8004A4CCu;
    ctx->downcount -= 3;
    // 8004A4CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A4D0:
    ctx->pc = 0x8004A4D0u;
    // 8004A4D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A4D4:
    ctx->pc = 0x8004A4D4u;
    // 8004A4D4: bl      0x8004A024
    {
            ctx->lr = 0x8004A4D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A4D8:
    ctx->pc = 0x8004A4D8u;
    ctx->downcount -= 3;
    // 8004A4D8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8004A4DC:
    ctx->pc = 0x8004A4DCu;
    // 8004A4DC: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A4E0:
    ctx->pc = 0x8004A4E0u;
    // 8004A4E0: bl      0x8004A040
    {
            ctx->lr = 0x8004A4E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A4E4:
    ctx->pc = 0x8004A4E4u;
    ctx->downcount -= 2;
    // 8004A4E4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_8004A4E8:
    ctx->pc = 0x8004A4E8u;
    // 8004A4E8: bl      0x8004A034
    {
            ctx->lr = 0x8004A4ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A4EC:
    ctx->pc = 0x8004A4ECu;
    ctx->downcount -= 3;
    // 8004A4EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A4F0:
    ctx->pc = 0x8004A4F0u;
    // 8004A4F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A4F4:
    ctx->pc = 0x8004A4F4u;
    // 8004A4F4: bl      0x8004A024
    {
            ctx->lr = 0x8004A4F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A4F8:
    ctx->pc = 0x8004A4F8u;
    ctx->downcount -= 1;
    // 8004A4F8: bl      0x8004A6A0
    {
            ctx->lr = 0x8004A4FCu;
            goto label_8004A6A0;
    }

label_8004A4FC:
    ctx->pc = 0x8004A4FCu;
    ctx->downcount -= 4;
    // 8004A4FC: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_8004A500:
    ctx->pc = 0x8004A500u;
    // 8004A500: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A504:
    ctx->pc = 0x8004A504u;
    // 8004A504: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8004A508:
    ctx->pc = 0x8004A508u;
    // 8004A508: bl      0x80042E0C
    {
            ctx->lr = 0x8004A50Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_8004A50C:
    ctx->pc = 0x8004A50Cu;
    ctx->downcount -= 4;
    // 8004A50C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A510:
    ctx->pc = 0x8004A510u;
    // 8004A510: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_8004A514:
    ctx->pc = 0x8004A514u;
    // 8004A514: addi    r29, r3, -17576
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A518:
    ctx->pc = 0x8004A518u;
    // 8004A518: li      r28, 492
    ctx->gpr[28] = (u32)(s32)(492);

label_8004A51C:
    ctx->pc = 0x8004A51Cu;
    ctx->downcount -= 8;
    // 8004A51C: lwz     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A520:
    // 8004A520: srawi r3, r28, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[28];
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

label_8004A524:
    // 8004A524: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8004A528:
    // 8004A528: li      r30, 255
    ctx->gpr[30] = (u32)(s32)(255);

label_8004A52C:
    // 8004A52C: cmpw    r27, r0
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

label_8004A530:
    // 8004A530: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_8004A534:
    // 8004A534: extsh r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8004A538:
    // 8004A538: bc    4, 2, 0x8004A544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004A544;
        }
    }

label_8004A53C:
    ctx->downcount -= 2;
    // 8004A53C: lis     r3, -3984
    ctx->gpr[3] = ((u32)(s32)(-3984) << 16);

label_8004A540:
    // 8004A540: addi    r30, r3, 255
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(255);

label_8004A544:
    ctx->downcount -= 3;
    // 8004A544: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004A548:
    // 8004A548: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A54C:
    // 8004A54C: bl      0x8004A040
    {
            ctx->lr = 0x8004A550u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A550:
    ctx->downcount -= 2;
    // 8004A550: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004A554:
    // 8004A554: bl      0x8004A034
    {
            ctx->lr = 0x8004A558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A558:
    ctx->downcount -= 3;
    // 8004A558: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A55C:
    // 8004A55C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A560:
    // 8004A560: bl      0x8004A024
    {
            ctx->lr = 0x8004A564u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A564:
    ctx->downcount -= 3;
    // 8004A564: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004A568:
    // 8004A568: li      r4, 438
    ctx->gpr[4] = (u32)(s32)(438);

label_8004A56C:
    // 8004A56C: bl      0x8004A040
    {
            ctx->lr = 0x8004A570u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A570:
    ctx->downcount -= 2;
    // 8004A570: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004A574:
    // 8004A574: bl      0x8004A034
    {
            ctx->lr = 0x8004A578u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A578:
    ctx->downcount -= 3;
    // 8004A578: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A57C:
    // 8004A57C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A580:
    // 8004A580: bl      0x8004A024
    {
            ctx->lr = 0x8004A584u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A584:
    ctx->downcount -= 4;
    // 8004A584: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8004A588:
    // 8004A588: addi    r28, r28, 492
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(492);

label_8004A58C:
    // 8004A58C: cmpwi   r27, 4
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

label_8004A590:
    // 8004A590: bc    12, 0, 0x8004A51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A51Cu;
                return;
            }
            goto label_8004A51C;
        }
    }

label_8004A594:
    ctx->pc = 0x8004A594u;
    ctx->downcount -= 1;
    // 8004A594: bl      0x8004A6A0
    {
            ctx->lr = 0x8004A598u;
            goto label_8004A6A0;
    }

label_8004A598:
    ctx->pc = 0x8004A598u;
    ctx->downcount -= 4;
    // 8004A598: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_8004A59C:
    ctx->pc = 0x8004A59Cu;
    // 8004A59C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004A5A0:
    ctx->pc = 0x8004A5A0u;
    // 8004A5A0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8004A5A4:
    ctx->pc = 0x8004A5A4u;
    // 8004A5A4: bl      0x80042E0C
    {
            ctx->lr = 0x8004A5A8u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_8004A5A8:
    ctx->pc = 0x8004A5A8u;
    ctx->downcount -= 2;
    // 8004A5A8: cmpwi   r31, 4
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

label_8004A5AC:
    ctx->pc = 0x8004A5ACu;
    // 8004A5AC: bc    12, 1, 0x8004A5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004A5D0;
        }
    }

label_8004A5B0:
    ctx->pc = 0x8004A5B0u;
    ctx->downcount -= 10;
    // 8004A5B0: mulli   r0, r31, 492
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)492);

label_8004A5B4:
    ctx->pc = 0x8004A5B4u;
    // 8004A5B4: lis     r3, 128
    ctx->gpr[3] = ((u32)(s32)(128) << 16);

label_8004A5B8:
    ctx->pc = 0x8004A5B8u;
    // 8004A5B8: addi    r27, r3, 255
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(255);

label_8004A5BC:
    ctx->pc = 0x8004A5BCu;
    // 8004A5BC: srawi r0, r0, 2
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

label_8004A5C0:
    ctx->pc = 0x8004A5C0u;
    // 8004A5C0: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8004A5C4:
    ctx->pc = 0x8004A5C4u;
    // 8004A5C4: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_8004A5C8:
    ctx->pc = 0x8004A5C8u;
    // 8004A5C8: extsh r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8004A5CC:
    ctx->pc = 0x8004A5CCu;
    // 8004A5CC: b       0x8004A5DC
    {
            goto label_8004A5DC;
    }

label_8004A5D0:
    ctx->pc = 0x8004A5D0u;
    ctx->downcount -= 3;
    // 8004A5D0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004A5D4:
    ctx->pc = 0x8004A5D4u;
    // 8004A5D4: li      r26, 502
    ctx->gpr[26] = (u32)(s32)(502);

label_8004A5D8:
    ctx->pc = 0x8004A5D8u;
    // 8004A5D8: addi    r27, r3, 255
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(255);

label_8004A5DC:
    ctx->pc = 0x8004A5DCu;
    ctx->downcount -= 3;
    // 8004A5DC: extsh r3, r26
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[26];
    }

label_8004A5E0:
    ctx->pc = 0x8004A5E0u;
    // 8004A5E0: li      r4, 407
    ctx->gpr[4] = (u32)(s32)(407);

label_8004A5E4:
    ctx->pc = 0x8004A5E4u;
    // 8004A5E4: bl      0x8004A040
    {
            ctx->lr = 0x8004A5E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A5E8:
    ctx->pc = 0x8004A5E8u;
    ctx->downcount -= 2;
    // 8004A5E8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004A5EC:
    ctx->pc = 0x8004A5ECu;
    // 8004A5EC: bl      0x8004A034
    {
            ctx->lr = 0x8004A5F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A5F0:
    ctx->pc = 0x8004A5F0u;
    ctx->downcount -= 3;
    // 8004A5F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A5F4:
    ctx->pc = 0x8004A5F4u;
    // 8004A5F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A5F8:
    ctx->pc = 0x8004A5F8u;
    // 8004A5F8: bl      0x8004A024
    {
            ctx->lr = 0x8004A5FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A5FC:
    ctx->pc = 0x8004A5FCu;
    ctx->downcount -= 5;
    // 8004A5FC: extsh r28, r26
    {
        ctx->gpr[28] = (u32)(s32)(s16)ctx->gpr[26];
    }

label_8004A600:
    ctx->pc = 0x8004A600u;
    // 8004A600: li      r4, 397
    ctx->gpr[4] = (u32)(s32)(397);

label_8004A604:
    ctx->pc = 0x8004A604u;
    // 8004A604: addi    r0, r28, -5
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(-5);

label_8004A608:
    ctx->pc = 0x8004A608u;
    // 8004A608: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8004A60C:
    ctx->pc = 0x8004A60Cu;
    // 8004A60C: bl      0x8004A040
    {
            ctx->lr = 0x8004A610u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A610:
    ctx->pc = 0x8004A610u;
    ctx->downcount -= 2;
    // 8004A610: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004A614:
    ctx->pc = 0x8004A614u;
    // 8004A614: bl      0x8004A034
    {
            ctx->lr = 0x8004A618u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A618:
    ctx->pc = 0x8004A618u;
    ctx->downcount -= 3;
    // 8004A618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A61C:
    ctx->pc = 0x8004A61Cu;
    // 8004A61C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A620:
    ctx->pc = 0x8004A620u;
    // 8004A620: bl      0x8004A024
    {
            ctx->lr = 0x8004A624u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A624:
    ctx->pc = 0x8004A624u;
    ctx->downcount -= 4;
    // 8004A624: addi    r0, r28, 5
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(5);

label_8004A628:
    ctx->pc = 0x8004A628u;
    // 8004A628: li      r4, 397
    ctx->gpr[4] = (u32)(s32)(397);

label_8004A62C:
    ctx->pc = 0x8004A62Cu;
    // 8004A62C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8004A630:
    ctx->pc = 0x8004A630u;
    // 8004A630: bl      0x8004A040
    {
            ctx->lr = 0x8004A634u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A040u;
                return;
            }
            goto label_8004A040;
    }

label_8004A634:
    ctx->pc = 0x8004A634u;
    ctx->downcount -= 2;
    // 8004A634: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004A638:
    ctx->pc = 0x8004A638u;
    // 8004A638: bl      0x8004A034
    {
            ctx->lr = 0x8004A63Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A034u;
                return;
            }
            goto label_8004A034;
    }

label_8004A63C:
    ctx->pc = 0x8004A63Cu;
    ctx->downcount -= 3;
    // 8004A63C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004A640:
    ctx->pc = 0x8004A640u;
    // 8004A640: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004A644:
    ctx->pc = 0x8004A644u;
    // 8004A644: bl      0x8004A024
    {
            ctx->lr = 0x8004A648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A024u;
                return;
            }
            goto label_8004A024;
    }

label_8004A648:
    ctx->pc = 0x8004A648u;
    ctx->downcount -= 1;
    // 8004A648: bl      0x8004A6A0
    {
            ctx->lr = 0x8004A64Cu;
            goto label_8004A6A0;
    }

label_8004A64C:
    ctx->pc = 0x8004A64Cu;
    ctx->downcount -= 32;
    // 8004A64C: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A64Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8004A64Cu);
        if (ctx->exception) return;
    }

label_8004A650:
    ctx->pc = 0x8004A650u;
    // 8004A650: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A654:
    ctx->pc = 0x8004A654u;
    // 8004A654: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A654u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x8004A654u);
        if (ctx->exception) return;
    }

label_8004A658:
    ctx->pc = 0x8004A658u;
    // 8004A658: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A658u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A65C:
    ctx->pc = 0x8004A65Cu;
    // 8004A65C: psq_l   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A65Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x8004A65Cu);
        if (ctx->exception) return;
    }

label_8004A660:
    ctx->pc = 0x8004A660u;
    // 8004A660: lfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A664:
    ctx->pc = 0x8004A664u;
    // 8004A664: psq_l   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A664u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x8004A664u);
        if (ctx->exception) return;
    }

label_8004A668:
    ctx->pc = 0x8004A668u;
    // 8004A668: lfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A668u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A66C:
    ctx->pc = 0x8004A66Cu;
    // 8004A66C: psq_l   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A66Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x8004A66Cu);
        if (ctx->exception) return;
    }

label_8004A670:
    ctx->pc = 0x8004A670u;
    // 8004A670: lfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A670u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A674:
    ctx->pc = 0x8004A674u;
    // 8004A674: psq_l   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x8004A674u);
        if (ctx->exception) return;
    }

label_8004A678:
    ctx->pc = 0x8004A678u;
    // 8004A678: lfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A678u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A67C:
    ctx->pc = 0x8004A67Cu;
    // 8004A67C: psq_l   f25, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A67Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x8004A67Cu);
        if (ctx->exception) return;
    }

label_8004A680:
    ctx->pc = 0x8004A680u;
    // 8004A680: lfd     f25, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A684:
    ctx->pc = 0x8004A684u;
    // 8004A684: psq_l   f24, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8004A684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x8004A684u);
        if (ctx->exception) return;
    }

label_8004A688:
    ctx->pc = 0x8004A688u;
    // 8004A688: lfd     f24, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A68C:
    ctx->pc = 0x8004A68Cu;
    // 8004A68C: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004A690:
    ctx->pc = 0x8004A690u;
    // 8004A690: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A694:
    ctx->pc = 0x8004A694u;
    // 8004A694: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A698:
    ctx->pc = 0x8004A698u;
    // 8004A698: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_8004A69C:
    ctx->pc = 0x8004A69Cu;
    // 8004A69C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A6A0:
    ctx->pc = 0x8004A6A0u;
    ctx->downcount -= 1;
    // 8004A6A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A6A4:
    ctx->pc = 0x8004A6A4u;
    ctx->downcount -= 6;
    // 8004A6A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A6A8:
    ctx->pc = 0x8004A6A8u;
    // 8004A6A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A6AC:
    ctx->pc = 0x8004A6ACu;
    // 8004A6AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8004A6B0:
    ctx->pc = 0x8004A6B0u;
    // 8004A6B0: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_8004A6B4:
    ctx->pc = 0x8004A6B4u;
    // 8004A6B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A6B8:
    ctx->pc = 0x8004A6B8u;
    // 8004A6B8: bl      0x80042220
    {
            ctx->lr = 0x8004A6BCu;
            ctx->pc = 0x80042220u;
            return;
    }

label_8004A6BC:
    ctx->pc = 0x8004A6BCu;
    ctx->downcount -= 5;
    // 8004A6BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A6C0:
    ctx->pc = 0x8004A6C0u;
    // 8004A6C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A6C4:
    ctx->pc = 0x8004A6C4u;
    // 8004A6C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A6C8:
    ctx->pc = 0x8004A6C8u;
    // 8004A6C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A6CC:
    ctx->pc = 0x8004A6CCu;
    ctx->downcount -= 8;
    // 8004A6CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A6D0:
    ctx->pc = 0x8004A6D0u;
    // 8004A6D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A6D4:
    ctx->pc = 0x8004A6D4u;
    // 8004A6D4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A6D8:
    ctx->pc = 0x8004A6D8u;
    // 8004A6D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A6DC:
    ctx->pc = 0x8004A6DCu;
    // 8004A6DC: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A6E0:
    ctx->pc = 0x8004A6E0u;
    // 8004A6E0: lwz     r0, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A6E4:
    ctx->pc = 0x8004A6E4u;
    // 8004A6E4: cmpwi   r0, 1
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

label_8004A6E8:
    ctx->pc = 0x8004A6E8u;
    // 8004A6E8: bc    4, 2, 0x8004A70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004A70C;
        }
    }

label_8004A6EC:
    ctx->pc = 0x8004A6ECu;
    ctx->downcount -= 8;
    // 8004A6EC: lfs     f1, 456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A6ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8004A6F0:
    ctx->pc = 0x8004A6F0u;
    // 8004A6F0: lfs     f2, 460(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A6F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8004A6F4:
    ctx->pc = 0x8004A6F4u;
    // 8004A6F4: lfs     f3, 464(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A6F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_8004A6F8:
    ctx->pc = 0x8004A6F8u;
    // 8004A6F8: lfs     f4, 468(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A6F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_8004A6FC:
    ctx->pc = 0x8004A6FCu;
    // 8004A6FC: lfs     f5, 472(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A6FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_8004A700:
    ctx->pc = 0x8004A700u;
    // 8004A700: lfs     f6, 476(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A700u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_8004A704:
    ctx->pc = 0x8004A704u;
    // 8004A704: lfs     f7, 480(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A704u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_8004A708:
    ctx->pc = 0x8004A708u;
    // 8004A708: bl      0x8004A050
    {
            ctx->lr = 0x8004A70Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A050u;
                return;
            }
            goto label_8004A050;
    }

label_8004A70C:
    ctx->pc = 0x8004A70Cu;
    ctx->downcount -= 5;
    // 8004A70C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A710:
    ctx->pc = 0x8004A710u;
    // 8004A710: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A714:
    ctx->pc = 0x8004A714u;
    // 8004A714: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A718:
    ctx->pc = 0x8004A718u;
    // 8004A718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A71C:
    ctx->pc = 0x8004A71Cu;
    ctx->downcount -= 9;
    // 8004A71C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A720:
    ctx->pc = 0x8004A720u;
    // 8004A720: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A724:
    ctx->pc = 0x8004A724u;
    // 8004A724: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A728:
    ctx->pc = 0x8004A728u;
    // 8004A728: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A72C:
    ctx->pc = 0x8004A72Cu;
    // 8004A72C: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A730:
    ctx->pc = 0x8004A730u;
    // 8004A730: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004A734:
    ctx->pc = 0x8004A734u;
    // 8004A734: addi    r31, r3, 264
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(264);

label_8004A738:
    ctx->pc = 0x8004A738u;
    // 8004A738: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A73C:
    ctx->pc = 0x8004A73Cu;
    // 8004A73C: bl      0x80023784
    {
            ctx->lr = 0x8004A740u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004A740:
    ctx->pc = 0x8004A740u;
    ctx->downcount -= 2;
    // 8004A740: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A744:
    ctx->pc = 0x8004A744u;
    // 8004A744: bl      0x8002360C
    {
            ctx->lr = 0x8004A748u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004A748:
    ctx->pc = 0x8004A748u;
    ctx->downcount -= 6;
    // 8004A748: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A74C:
    ctx->pc = 0x8004A74Cu;
    // 8004A74C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004A750:
    ctx->pc = 0x8004A750u;
    // 8004A750: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A754:
    ctx->pc = 0x8004A754u;
    // 8004A754: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A758:
    ctx->pc = 0x8004A758u;
    // 8004A758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A75C:
    ctx->pc = 0x8004A75Cu;
    ctx->downcount -= 9;
    // 8004A75C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A760:
    ctx->pc = 0x8004A760u;
    // 8004A760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A764:
    ctx->pc = 0x8004A764u;
    // 8004A764: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A768:
    ctx->pc = 0x8004A768u;
    // 8004A768: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A76C:
    ctx->pc = 0x8004A76Cu;
    // 8004A76C: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A770:
    ctx->pc = 0x8004A770u;
    // 8004A770: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004A774:
    ctx->pc = 0x8004A774u;
    // 8004A774: addi    r31, r3, 264
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(264);

label_8004A778:
    ctx->pc = 0x8004A778u;
    // 8004A778: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A77C:
    ctx->pc = 0x8004A77Cu;
    // 8004A77C: bl      0x80023714
    {
            ctx->lr = 0x8004A780u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004A780:
    ctx->pc = 0x8004A780u;
    ctx->downcount -= 1;
    // 8004A780: bl      0x8000E1FC
    {
            ctx->lr = 0x8004A784u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004A784:
    ctx->pc = 0x8004A784u;
    ctx->downcount -= 41;
    // 8004A784: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004A788:
    ctx->pc = 0x8004A788u;
    // 8004A788: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004A78C:
    ctx->pc = 0x8004A78Cu;
    // 8004A78C: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004A790:
    ctx->pc = 0x8004A790u;
    // 8004A790: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A794:
    ctx->pc = 0x8004A794u;
    // 8004A794: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A798:
    ctx->pc = 0x8004A798u;
    // 8004A798: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A79C:
    ctx->pc = 0x8004A79Cu;
    // 8004A79C: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004A7A0:
    ctx->pc = 0x8004A7A0u;
    // 8004A7A0: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004A7A4:
    ctx->pc = 0x8004A7A4u;
    // 8004A7A4: mulhwu   r6, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[6] = (u32)(product >> 32);
    }

label_8004A7A8:
    ctx->pc = 0x8004A7A8u;
    // 8004A7A8: addi    r5, r4, 12520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12520);

label_8004A7AC:
    ctx->pc = 0x8004A7ACu;
    // 8004A7AC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A7B0:
    ctx->pc = 0x8004A7B0u;
    // 8004A7B0: addi    r4, r3, -17576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A7B4:
    ctx->pc = 0x8004A7B4u;
    // 8004A7B4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8004A7B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A7B8:
    ctx->pc = 0x8004A7B8u;
    // 8004A7B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A7BC:
    ctx->pc = 0x8004A7BCu;
    // 8004A7BC: rlwinm r0, r6, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 26u) & 0x03FFFFFFu;
    }

label_8004A7C0:
    ctx->pc = 0x8004A7C0u;
    // 8004A7C0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A7C4:
    ctx->pc = 0x8004A7C4u;
    // 8004A7C4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A7C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A7C8:
    ctx->pc = 0x8004A7C8u;
    // 8004A7C8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A7C8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004A7CC:
    ctx->pc = 0x8004A7CCu;
    // 8004A7CC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A7CCu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004A7D0:
    ctx->pc = 0x8004A7D0u;
    // 8004A7D0: stfs     f0, 468(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A7D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004A7D4:
    ctx->pc = 0x8004A7D4u;
    // 8004A7D4: bl      0x80023784
    {
            ctx->lr = 0x8004A7D8u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004A7D8:
    ctx->pc = 0x8004A7D8u;
    ctx->downcount -= 2;
    // 8004A7D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A7DC:
    ctx->pc = 0x8004A7DCu;
    // 8004A7DC: bl      0x8002360C
    {
            ctx->lr = 0x8004A7E0u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004A7E0:
    ctx->pc = 0x8004A7E0u;
    ctx->downcount -= 6;
    // 8004A7E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A7E4:
    ctx->pc = 0x8004A7E4u;
    // 8004A7E4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004A7E8:
    ctx->pc = 0x8004A7E8u;
    // 8004A7E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A7EC:
    ctx->pc = 0x8004A7ECu;
    // 8004A7EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004A7F0:
    ctx->pc = 0x8004A7F0u;
    // 8004A7F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A7F4:
    ctx->pc = 0x8004A7F4u;
    ctx->downcount -= 9;
    // 8004A7F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A7F8:
    ctx->pc = 0x8004A7F8u;
    // 8004A7F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A7FC:
    ctx->pc = 0x8004A7FCu;
    // 8004A7FC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A800:
    ctx->pc = 0x8004A800u;
    // 8004A800: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A804:
    ctx->pc = 0x8004A804u;
    // 8004A804: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A808:
    ctx->pc = 0x8004A808u;
    // 8004A808: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004A80C:
    ctx->pc = 0x8004A80Cu;
    // 8004A80C: addi    r31, r3, 312
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(312);

label_8004A810:
    ctx->pc = 0x8004A810u;
    // 8004A810: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A814:
    ctx->pc = 0x8004A814u;
    // 8004A814: bl      0x80023784
    {
            ctx->lr = 0x8004A818u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004A818:
    ctx->pc = 0x8004A818u;
    ctx->downcount -= 2;
    // 8004A818: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A81C:
    ctx->pc = 0x8004A81Cu;
    // 8004A81C: bl      0x8002360C
    {
            ctx->lr = 0x8004A820u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004A820:
    ctx->pc = 0x8004A820u;
    ctx->downcount -= 6;
    // 8004A820: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A824:
    ctx->pc = 0x8004A824u;
    // 8004A824: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004A828:
    ctx->pc = 0x8004A828u;
    // 8004A828: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A82C:
    ctx->pc = 0x8004A82Cu;
    // 8004A82C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A830:
    ctx->pc = 0x8004A830u;
    // 8004A830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A834:
    ctx->pc = 0x8004A834u;
    ctx->downcount -= 7;
    // 8004A834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A838:
    ctx->pc = 0x8004A838u;
    // 8004A838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A83C:
    ctx->pc = 0x8004A83Cu;
    // 8004A83C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A840:
    ctx->pc = 0x8004A840u;
    // 8004A840: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A844:
    ctx->pc = 0x8004A844u;
    // 8004A844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A848:
    ctx->pc = 0x8004A848u;
    // 8004A848: addi    r3, r3, 312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(312);

label_8004A84C:
    ctx->pc = 0x8004A84Cu;
    // 8004A84C: bl      0x80023714
    {
            ctx->lr = 0x8004A850u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004A850:
    ctx->pc = 0x8004A850u;
    ctx->downcount -= 1;
    // 8004A850: bl      0x8000E1FC
    {
            ctx->lr = 0x8004A854u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004A854:
    ctx->pc = 0x8004A854u;
    ctx->downcount -= 43;
    // 8004A854: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004A858:
    ctx->pc = 0x8004A858u;
    // 8004A858: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004A85C:
    ctx->pc = 0x8004A85Cu;
    // 8004A85C: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004A860:
    ctx->pc = 0x8004A860u;
    // 8004A860: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A864:
    ctx->pc = 0x8004A864u;
    // 8004A864: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A868:
    ctx->pc = 0x8004A868u;
    // 8004A868: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A86C:
    ctx->pc = 0x8004A86Cu;
    // 8004A86C: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004A870:
    ctx->pc = 0x8004A870u;
    // 8004A870: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004A874:
    ctx->pc = 0x8004A874u;
    // 8004A874: mulhwu   r5, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8004A878:
    ctx->pc = 0x8004A878u;
    // 8004A878: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A87C:
    ctx->pc = 0x8004A87Cu;
    // 8004A87C: lfd     f2, 12520(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A87Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A880:
    ctx->pc = 0x8004A880u;
    // 8004A880: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A884:
    ctx->pc = 0x8004A884u;
    // 8004A884: rlwinm r0, r5, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 26u) & 0x03FFFFFFu;
    }

label_8004A888:
    ctx->pc = 0x8004A888u;
    // 8004A888: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A88C:
    ctx->pc = 0x8004A88Cu;
    // 8004A88C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A88Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A890:
    ctx->pc = 0x8004A890u;
    // 8004A890: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A890u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004A894:
    ctx->pc = 0x8004A894u;
    // 8004A894: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A894u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004A898:
    ctx->pc = 0x8004A898u;
    // 8004A898: stfs     f0, 472(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(472);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004A89C:
    ctx->pc = 0x8004A89Cu;
    // 8004A89C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A8A0:
    ctx->pc = 0x8004A8A0u;
    // 8004A8A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A8A4:
    ctx->pc = 0x8004A8A4u;
    // 8004A8A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A8A8:
    ctx->pc = 0x8004A8A8u;
    // 8004A8A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A8AC:
    ctx->pc = 0x8004A8ACu;
    ctx->downcount -= 7;
    // 8004A8AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A8B0:
    ctx->pc = 0x8004A8B0u;
    // 8004A8B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A8B4:
    ctx->pc = 0x8004A8B4u;
    // 8004A8B4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A8B8:
    ctx->pc = 0x8004A8B8u;
    // 8004A8B8: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A8BC:
    ctx->pc = 0x8004A8BCu;
    // 8004A8BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A8C0:
    ctx->pc = 0x8004A8C0u;
    // 8004A8C0: addi    r3, r3, 120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(120);

label_8004A8C4:
    ctx->pc = 0x8004A8C4u;
    // 8004A8C4: bl      0x80023714
    {
            ctx->lr = 0x8004A8C8u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004A8C8:
    ctx->pc = 0x8004A8C8u;
    ctx->downcount -= 1;
    // 8004A8C8: bl      0x8000E1FC
    {
            ctx->lr = 0x8004A8CCu;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004A8CC:
    ctx->pc = 0x8004A8CCu;
    ctx->downcount -= 43;
    // 8004A8CC: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004A8D0:
    ctx->pc = 0x8004A8D0u;
    // 8004A8D0: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004A8D4:
    ctx->pc = 0x8004A8D4u;
    // 8004A8D4: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004A8D8:
    ctx->pc = 0x8004A8D8u;
    // 8004A8D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A8DC:
    ctx->pc = 0x8004A8DCu;
    // 8004A8DC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A8E0:
    ctx->pc = 0x8004A8E0u;
    // 8004A8E0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A8E4:
    ctx->pc = 0x8004A8E4u;
    // 8004A8E4: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004A8E8:
    ctx->pc = 0x8004A8E8u;
    // 8004A8E8: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004A8EC:
    ctx->pc = 0x8004A8ECu;
    // 8004A8EC: mulhwu   r5, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8004A8F0:
    ctx->pc = 0x8004A8F0u;
    // 8004A8F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A8F4:
    ctx->pc = 0x8004A8F4u;
    // 8004A8F4: lfd     f2, 12520(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A8F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A8F8:
    ctx->pc = 0x8004A8F8u;
    // 8004A8F8: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A8FC:
    ctx->pc = 0x8004A8FCu;
    // 8004A8FC: rlwinm r0, r5, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 26u) & 0x03FFFFFFu;
    }

label_8004A900:
    ctx->pc = 0x8004A900u;
    // 8004A900: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A904:
    ctx->pc = 0x8004A904u;
    // 8004A904: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A908:
    ctx->pc = 0x8004A908u;
    // 8004A908: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A908u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004A90C:
    ctx->pc = 0x8004A90Cu;
    // 8004A90C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A90Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004A910:
    ctx->pc = 0x8004A910u;
    // 8004A910: stfs     f0, 456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A910u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(456);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004A914:
    ctx->pc = 0x8004A914u;
    // 8004A914: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A918:
    ctx->pc = 0x8004A918u;
    // 8004A918: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A91C:
    ctx->pc = 0x8004A91Cu;
    // 8004A91C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A920:
    ctx->pc = 0x8004A920u;
    // 8004A920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A924:
    ctx->pc = 0x8004A924u;
    ctx->downcount -= 7;
    // 8004A924: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A928:
    ctx->pc = 0x8004A928u;
    // 8004A928: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A92C:
    ctx->pc = 0x8004A92Cu;
    // 8004A92C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A930:
    ctx->pc = 0x8004A930u;
    // 8004A930: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A934:
    ctx->pc = 0x8004A934u;
    // 8004A934: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A938:
    ctx->pc = 0x8004A938u;
    // 8004A938: addi    r3, r3, 168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(168);

label_8004A93C:
    ctx->pc = 0x8004A93Cu;
    // 8004A93C: bl      0x8002360C
    {
            ctx->lr = 0x8004A940u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004A940:
    ctx->pc = 0x8004A940u;
    ctx->downcount -= 5;
    // 8004A940: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A944:
    ctx->pc = 0x8004A944u;
    // 8004A944: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A948:
    ctx->pc = 0x8004A948u;
    // 8004A948: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004A94C:
    ctx->pc = 0x8004A94Cu;
    // 8004A94C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004A950:
    ctx->pc = 0x8004A950u;
    ctx->downcount -= 10;
    // 8004A950: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004A954:
    ctx->pc = 0x8004A954u;
    // 8004A954: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004A958:
    ctx->pc = 0x8004A958u;
    // 8004A958: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A95C:
    ctx->pc = 0x8004A95Cu;
    // 8004A95C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A960:
    ctx->pc = 0x8004A960u;
    // 8004A960: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A964:
    ctx->pc = 0x8004A964u;
    // 8004A964: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004A968:
    ctx->pc = 0x8004A968u;
    // 8004A968: addi    r31, r3, 168
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(168);

label_8004A96C:
    ctx->pc = 0x8004A96Cu;
    // 8004A96C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A970:
    ctx->pc = 0x8004A970u;
    // 8004A970: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004A974:
    ctx->pc = 0x8004A974u;
    // 8004A974: bl      0x80023648
    {
            ctx->lr = 0x8004A978u;
            ctx->pc = 0x80023648u;
            return;
    }

label_8004A978:
    ctx->pc = 0x8004A978u;
    ctx->downcount -= 2;
    // 8004A978: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A97C:
    ctx->pc = 0x8004A97Cu;
    // 8004A97C: bl      0x80023714
    {
            ctx->lr = 0x8004A980u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004A980:
    ctx->pc = 0x8004A980u;
    ctx->downcount -= 5;
    // 8004A980: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004A984:
    ctx->pc = 0x8004A984u;
    // 8004A984: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A988:
    ctx->pc = 0x8004A988u;
    // 8004A988: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004A98C:
    ctx->pc = 0x8004A98Cu;
    // 8004A98C: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004A990:
    ctx->pc = 0x8004A990u;
    // 8004A990: bl      0x80023784
    {
            ctx->lr = 0x8004A994u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004A994:
    ctx->pc = 0x8004A994u;
    ctx->downcount -= 3;
    // 8004A994: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004A998:
    ctx->pc = 0x8004A998u;
    // 8004A998: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004A99C:
    ctx->pc = 0x8004A99Cu;
    // 8004A99C: bl      0x8000E1FC
    {
            ctx->lr = 0x8004A9A0u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004A9A0:
    ctx->pc = 0x8004A9A0u;
    ctx->downcount -= 45;
    // 8004A9A0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004A9A4:
    ctx->pc = 0x8004A9A4u;
    // 8004A9A4: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004A9A8:
    ctx->pc = 0x8004A9A8u;
    // 8004A9A8: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004A9AC:
    ctx->pc = 0x8004A9ACu;
    // 8004A9AC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004A9B0:
    ctx->pc = 0x8004A9B0u;
    // 8004A9B0: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004A9B4:
    ctx->pc = 0x8004A9B4u;
    // 8004A9B4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004A9B8:
    ctx->pc = 0x8004A9B8u;
    // 8004A9B8: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004A9BC:
    ctx->pc = 0x8004A9BCu;
    // 8004A9BC: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004A9C0:
    ctx->pc = 0x8004A9C0u;
    // 8004A9C0: mulhwu   r5, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8004A9C4:
    ctx->pc = 0x8004A9C4u;
    // 8004A9C4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A9C8:
    ctx->pc = 0x8004A9C8u;
    // 8004A9C8: lfd     f2, 12520(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004A9C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A9CC:
    ctx->pc = 0x8004A9CCu;
    // 8004A9CC: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004A9D0:
    ctx->pc = 0x8004A9D0u;
    // 8004A9D0: rlwinm r0, r5, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 26u) & 0x03FFFFFFu;
    }

label_8004A9D4:
    ctx->pc = 0x8004A9D4u;
    // 8004A9D4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004A9D8:
    ctx->pc = 0x8004A9D8u;
    // 8004A9D8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004A9D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004A9DC:
    ctx->pc = 0x8004A9DCu;
    // 8004A9DC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004A9DCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004A9E0:
    ctx->pc = 0x8004A9E0u;
    // 8004A9E0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004A9E0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004A9E4:
    ctx->pc = 0x8004A9E4u;
    // 8004A9E4: stfs     f0, 460(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004A9E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(460);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004A9E8:
    ctx->pc = 0x8004A9E8u;
    // 8004A9E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004A9EC:
    ctx->pc = 0x8004A9ECu;
    // 8004A9EC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004A9F0:
    ctx->pc = 0x8004A9F0u;
    // 8004A9F0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004A9F4:
    ctx->pc = 0x8004A9F4u;
    // 8004A9F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004A9F8:
    ctx->pc = 0x8004A9F8u;
    // 8004A9F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004A9FC:
    ctx->pc = 0x8004A9FCu;
    // 8004A9FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AA00:
    ctx->pc = 0x8004AA00u;
    ctx->downcount -= 9;
    // 8004AA00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004AA04:
    ctx->pc = 0x8004AA04u;
    // 8004AA04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004AA08:
    ctx->pc = 0x8004AA08u;
    // 8004AA08: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AA0C:
    ctx->pc = 0x8004AA0Cu;
    // 8004AA0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AA10:
    ctx->pc = 0x8004AA10u;
    // 8004AA10: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AA14:
    ctx->pc = 0x8004AA14u;
    // 8004AA14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004AA18:
    ctx->pc = 0x8004AA18u;
    // 8004AA18: addi    r31, r3, 216
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(216);

label_8004AA1C:
    ctx->pc = 0x8004AA1Cu;
    // 8004AA1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AA20:
    ctx->pc = 0x8004AA20u;
    // 8004AA20: bl      0x80023784
    {
            ctx->lr = 0x8004AA24u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004AA24:
    ctx->pc = 0x8004AA24u;
    ctx->downcount -= 2;
    // 8004AA24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AA28:
    ctx->pc = 0x8004AA28u;
    // 8004AA28: bl      0x8002360C
    {
            ctx->lr = 0x8004AA2Cu;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004AA2C:
    ctx->pc = 0x8004AA2Cu;
    ctx->downcount -= 6;
    // 8004AA2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AA30:
    ctx->pc = 0x8004AA30u;
    // 8004AA30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004AA34:
    ctx->pc = 0x8004AA34u;
    // 8004AA34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004AA38:
    ctx->pc = 0x8004AA38u;
    // 8004AA38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004AA3C:
    ctx->pc = 0x8004AA3Cu;
    // 8004AA3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AA40:
    ctx->pc = 0x8004AA40u;
    ctx->downcount -= 8;
    // 8004AA40: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004AA44:
    ctx->pc = 0x8004AA44u;
    // 8004AA44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004AA48:
    ctx->pc = 0x8004AA48u;
    // 8004AA48: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AA4C:
    ctx->pc = 0x8004AA4Cu;
    // 8004AA4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AA50:
    ctx->pc = 0x8004AA50u;
    // 8004AA50: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AA54:
    ctx->pc = 0x8004AA54u;
    // 8004AA54: addi    r3, r3, 216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(216);

label_8004AA58:
    ctx->pc = 0x8004AA58u;
    // 8004AA58: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004AA5C:
    ctx->pc = 0x8004AA5Cu;
    // 8004AA5C: bl      0x80023714
    {
            ctx->lr = 0x8004AA60u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004AA60:
    ctx->pc = 0x8004AA60u;
    ctx->downcount -= 1;
    // 8004AA60: bl      0x8000E1FC
    {
            ctx->lr = 0x8004AA64u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004AA64:
    ctx->pc = 0x8004AA64u;
    ctx->downcount -= 42;
    // 8004AA64: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004AA68:
    ctx->pc = 0x8004AA68u;
    // 8004AA68: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004AA6C:
    ctx->pc = 0x8004AA6Cu;
    // 8004AA6C: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AA70:
    ctx->pc = 0x8004AA70u;
    // 8004AA70: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004AA74:
    ctx->pc = 0x8004AA74u;
    // 8004AA74: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004AA78:
    ctx->pc = 0x8004AA78u;
    // 8004AA78: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AA7C:
    ctx->pc = 0x8004AA7Cu;
    // 8004AA7C: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004AA80:
    ctx->pc = 0x8004AA80u;
    // 8004AA80: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004AA84:
    ctx->pc = 0x8004AA84u;
    // 8004AA84: mulhwu   r6, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[6] = (u32)(product >> 32);
    }

label_8004AA88:
    ctx->pc = 0x8004AA88u;
    // 8004AA88: addi    r5, r4, 12520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12520);

label_8004AA8C:
    ctx->pc = 0x8004AA8Cu;
    // 8004AA8C: addi    r4, r3, -17576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AA90:
    ctx->pc = 0x8004AA90u;
    // 8004AA90: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AA94:
    ctx->pc = 0x8004AA94u;
    // 8004AA94: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8004AA94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AA98:
    ctx->pc = 0x8004AA98u;
    // 8004AA98: addi    r31, r4, 120
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(120);

label_8004AA9C:
    ctx->pc = 0x8004AA9Cu;
    // 8004AA9C: rlwinm r0, r6, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 26u) & 0x03FFFFFFu;
    }

label_8004AAA0:
    ctx->pc = 0x8004AAA0u;
    // 8004AAA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AAA4:
    ctx->pc = 0x8004AAA4u;
    // 8004AAA4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AAA8:
    ctx->pc = 0x8004AAA8u;
    // 8004AAA8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004AAA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AAAC:
    ctx->pc = 0x8004AAACu;
    // 8004AAAC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004AAACu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004AAB0:
    ctx->pc = 0x8004AAB0u;
    // 8004AAB0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004AAB0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004AAB4:
    ctx->pc = 0x8004AAB4u;
    // 8004AAB4: stfs     f0, 464(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004AAB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(464);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004AAB8:
    ctx->pc = 0x8004AAB8u;
    // 8004AAB8: bl      0x80023784
    {
            ctx->lr = 0x8004AABCu;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004AABC:
    ctx->pc = 0x8004AABCu;
    ctx->downcount -= 2;
    // 8004AABC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AAC0:
    ctx->pc = 0x8004AAC0u;
    // 8004AAC0: bl      0x8002360C
    {
            ctx->lr = 0x8004AAC4u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004AAC4:
    ctx->pc = 0x8004AAC4u;
    ctx->downcount -= 6;
    // 8004AAC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AAC8:
    ctx->pc = 0x8004AAC8u;
    // 8004AAC8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004AACC:
    ctx->pc = 0x8004AACCu;
    // 8004AACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004AAD0:
    ctx->pc = 0x8004AAD0u;
    // 8004AAD0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004AAD4:
    ctx->pc = 0x8004AAD4u;
    // 8004AAD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AAD8:
    ctx->pc = 0x8004AAD8u;
    ctx->downcount -= 9;
    // 8004AAD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004AADC:
    ctx->pc = 0x8004AADCu;
    // 8004AADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004AAE0:
    ctx->pc = 0x8004AAE0u;
    // 8004AAE0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AAE4:
    ctx->pc = 0x8004AAE4u;
    // 8004AAE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AAE8:
    ctx->pc = 0x8004AAE8u;
    // 8004AAE8: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AAEC:
    ctx->pc = 0x8004AAECu;
    // 8004AAEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004AAF0:
    ctx->pc = 0x8004AAF0u;
    // 8004AAF0: addi    r31, r3, 360
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(360);

label_8004AAF4:
    ctx->pc = 0x8004AAF4u;
    // 8004AAF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AAF8:
    ctx->pc = 0x8004AAF8u;
    // 8004AAF8: bl      0x80023784
    {
            ctx->lr = 0x8004AAFCu;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004AAFC:
    ctx->pc = 0x8004AAFCu;
    ctx->downcount -= 2;
    // 8004AAFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004AB00:
    ctx->pc = 0x8004AB00u;
    // 8004AB00: bl      0x8002360C
    {
            ctx->lr = 0x8004AB04u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004AB04:
    ctx->pc = 0x8004AB04u;
    ctx->downcount -= 6;
    // 8004AB04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AB08:
    ctx->pc = 0x8004AB08u;
    // 8004AB08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004AB0C:
    ctx->pc = 0x8004AB0Cu;
    // 8004AB0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004AB10:
    ctx->pc = 0x8004AB10u;
    // 8004AB10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004AB14:
    ctx->pc = 0x8004AB14u;
    // 8004AB14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AB18:
    ctx->pc = 0x8004AB18u;
    ctx->downcount -= 7;
    // 8004AB18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004AB1C:
    ctx->pc = 0x8004AB1Cu;
    // 8004AB1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004AB20:
    ctx->pc = 0x8004AB20u;
    // 8004AB20: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AB24:
    ctx->pc = 0x8004AB24u;
    // 8004AB24: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AB28:
    ctx->pc = 0x8004AB28u;
    // 8004AB28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AB2C:
    ctx->pc = 0x8004AB2Cu;
    // 8004AB2C: addi    r3, r3, 360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(360);

label_8004AB30:
    ctx->pc = 0x8004AB30u;
    // 8004AB30: bl      0x80023714
    {
            ctx->lr = 0x8004AB34u;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004AB34:
    ctx->pc = 0x8004AB34u;
    ctx->downcount -= 1;
    // 8004AB34: bl      0x8000E1FC
    {
            ctx->lr = 0x8004AB38u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004AB38:
    ctx->pc = 0x8004AB38u;
    ctx->downcount -= 43;
    // 8004AB38: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004AB3C:
    ctx->pc = 0x8004AB3Cu;
    // 8004AB3C: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004AB40:
    ctx->pc = 0x8004AB40u;
    // 8004AB40: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AB44:
    ctx->pc = 0x8004AB44u;
    // 8004AB44: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004AB48:
    ctx->pc = 0x8004AB48u;
    // 8004AB48: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004AB4C:
    ctx->pc = 0x8004AB4Cu;
    // 8004AB4C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AB50:
    ctx->pc = 0x8004AB50u;
    // 8004AB50: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004AB54:
    ctx->pc = 0x8004AB54u;
    // 8004AB54: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004AB58:
    ctx->pc = 0x8004AB58u;
    // 8004AB58: mulhwu   r5, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8004AB5C:
    ctx->pc = 0x8004AB5Cu;
    // 8004AB5C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AB60:
    ctx->pc = 0x8004AB60u;
    // 8004AB60: lfd     f2, 12520(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004AB60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AB64:
    ctx->pc = 0x8004AB64u;
    // 8004AB64: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AB68:
    ctx->pc = 0x8004AB68u;
    // 8004AB68: rlwinm r0, r5, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 26u) & 0x03FFFFFFu;
    }

label_8004AB6C:
    ctx->pc = 0x8004AB6Cu;
    // 8004AB6C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AB70:
    ctx->pc = 0x8004AB70u;
    // 8004AB70: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004AB70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AB74:
    ctx->pc = 0x8004AB74u;
    // 8004AB74: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004AB74u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004AB78:
    ctx->pc = 0x8004AB78u;
    // 8004AB78: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004AB78u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004AB7C:
    ctx->pc = 0x8004AB7Cu;
    // 8004AB7C: stfs     f0, 476(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004AB7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004AB80:
    ctx->pc = 0x8004AB80u;
    // 8004AB80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AB84:
    ctx->pc = 0x8004AB84u;
    // 8004AB84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004AB88:
    ctx->pc = 0x8004AB88u;
    // 8004AB88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004AB8C:
    ctx->pc = 0x8004AB8Cu;
    // 8004AB8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AB90:
    ctx->pc = 0x8004AB90u;
    ctx->downcount -= 4;
    // 8004AB90: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004AB94:
    ctx->pc = 0x8004AB94u;
    // 8004AB94: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_8004AB98:
    ctx->pc = 0x8004AB98u;
    // 8004AB98: stw     r3, 488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004AB9C:
    ctx->pc = 0x8004AB9Cu;
    // 8004AB9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004ABA0:
    ctx->pc = 0x8004ABA0u;
    ctx->downcount -= 4;
    // 8004ABA0: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004ABA4:
    ctx->pc = 0x8004ABA4u;
    // 8004ABA4: addi    r4, r4, -17576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17576);

label_8004ABA8:
    ctx->pc = 0x8004ABA8u;
    // 8004ABA8: stw     r3, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004ABAC:
    ctx->pc = 0x8004ABACu;
    // 8004ABAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004ABB0:
    ctx->pc = 0x8004ABB0u;
    ctx->downcount -= 9;
    // 8004ABB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004ABB4:
    ctx->pc = 0x8004ABB4u;
    // 8004ABB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004ABB8:
    ctx->pc = 0x8004ABB8u;
    // 8004ABB8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004ABBC:
    ctx->pc = 0x8004ABBCu;
    // 8004ABBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004ABC0:
    ctx->pc = 0x8004ABC0u;
    // 8004ABC0: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004ABC4:
    ctx->pc = 0x8004ABC4u;
    // 8004ABC4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004ABC8:
    ctx->pc = 0x8004ABC8u;
    // 8004ABC8: addi    r31, r3, 408
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(408);

label_8004ABCC:
    ctx->pc = 0x8004ABCCu;
    // 8004ABCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004ABD0:
    ctx->pc = 0x8004ABD0u;
    // 8004ABD0: bl      0x80023784
    {
            ctx->lr = 0x8004ABD4u;
            ctx->pc = 0x80023784u;
            return;
    }

label_8004ABD4:
    ctx->pc = 0x8004ABD4u;
    ctx->downcount -= 2;
    // 8004ABD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004ABD8:
    ctx->pc = 0x8004ABD8u;
    // 8004ABD8: bl      0x8002360C
    {
            ctx->lr = 0x8004ABDCu;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_8004ABDC:
    ctx->pc = 0x8004ABDCu;
    ctx->downcount -= 6;
    // 8004ABDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004ABE0:
    ctx->pc = 0x8004ABE0u;
    // 8004ABE0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004ABE4:
    ctx->pc = 0x8004ABE4u;
    // 8004ABE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004ABE8:
    ctx->pc = 0x8004ABE8u;
    // 8004ABE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004ABEC:
    ctx->pc = 0x8004ABECu;
    // 8004ABEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004ABF0:
    ctx->pc = 0x8004ABF0u;
    ctx->downcount -= 7;
    // 8004ABF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004ABF4:
    ctx->pc = 0x8004ABF4u;
    // 8004ABF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004ABF8:
    ctx->pc = 0x8004ABF8u;
    // 8004ABF8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004ABFC:
    ctx->pc = 0x8004ABFCu;
    // 8004ABFC: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AC00:
    ctx->pc = 0x8004AC00u;
    // 8004AC00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AC04:
    ctx->pc = 0x8004AC04u;
    // 8004AC04: addi    r3, r3, 408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(408);

label_8004AC08:
    ctx->pc = 0x8004AC08u;
    // 8004AC08: bl      0x80023714
    {
            ctx->lr = 0x8004AC0Cu;
            ctx->pc = 0x80023714u;
            return;
    }

label_8004AC0C:
    ctx->pc = 0x8004AC0Cu;
    ctx->downcount -= 1;
    // 8004AC0C: bl      0x8000E1FC
    {
            ctx->lr = 0x8004AC10u;
            ctx->pc = 0x8000E1FCu;
            return;
    }

label_8004AC10:
    ctx->pc = 0x8004AC10u;
    ctx->downcount -= 43;
    // 8004AC10: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8004AC14:
    ctx->pc = 0x8004AC14u;
    // 8004AC14: lis     r5, 4194
    ctx->gpr[5] = ((u32)(s32)(4194) << 16);

label_8004AC18:
    ctx->pc = 0x8004AC18u;
    // 8004AC18: lwz     r6, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AC1C:
    ctx->pc = 0x8004AC1Cu;
    // 8004AC1C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8004AC20:
    ctx->pc = 0x8004AC20u;
    // 8004AC20: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004AC24:
    ctx->pc = 0x8004AC24u;
    // 8004AC24: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004AC28:
    ctx->pc = 0x8004AC28u;
    // 8004AC28: rlwinm r6, r6, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x3FFFFFFFu;
    }

label_8004AC2C:
    ctx->pc = 0x8004AC2Cu;
    // 8004AC2C: addi    r5, r5, 19923
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19923);

label_8004AC30:
    ctx->pc = 0x8004AC30u;
    // 8004AC30: mulhwu   r5, r5, r6
    {
        u64 product = (u64)ctx->gpr[5] * (u64)ctx->gpr[6];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8004AC34:
    ctx->pc = 0x8004AC34u;
    // 8004AC34: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AC38:
    ctx->pc = 0x8004AC38u;
    // 8004AC38: lfd     f2, 12520(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004AC38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AC3C:
    ctx->pc = 0x8004AC3Cu;
    // 8004AC3C: addi    r3, r3, -17576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17576);

label_8004AC40:
    ctx->pc = 0x8004AC40u;
    // 8004AC40: rlwinm r0, r5, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 26u) & 0x03FFFFFFu;
    }

label_8004AC44:
    ctx->pc = 0x8004AC44u;
    // 8004AC44: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AC48:
    ctx->pc = 0x8004AC48u;
    // 8004AC48: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004AC48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004AC4C:
    ctx->pc = 0x8004AC4Cu;
    // 8004AC4C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004AC4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004AC50:
    ctx->pc = 0x8004AC50u;
    // 8004AC50: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004AC50u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8004AC54:
    ctx->pc = 0x8004AC54u;
    // 8004AC54: stfs     f0, 480(r3)
    if (!ppc_fp_available_inline(ctx, 0x8004AC54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(480);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004AC58:
    ctx->pc = 0x8004AC58u;
    // 8004AC58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AC5C:
    ctx->pc = 0x8004AC5Cu;
    // 8004AC5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004AC60:
    ctx->pc = 0x8004AC60u;
    // 8004AC60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004AC64:
    ctx->pc = 0x8004AC64u;
    // 8004AC64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004AC68:
    ctx->pc = 0x8004AC68u;
    ctx->downcount -= 21;
    // 8004AC68: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004AC6C:
    ctx->pc = 0x8004AC6Cu;
    // 8004AC6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004AC70:
    ctx->pc = 0x8004AC70u;
    // 8004AC70: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004AC74:
    ctx->pc = 0x8004AC74u;
    // 8004AC74: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004AC78:
    ctx->pc = 0x8004AC78u;
    // 8004AC78: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AC7C:
    ctx->pc = 0x8004AC7Cu;
    // 8004AC7C: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004AC80:
    ctx->pc = 0x8004AC80u;
    // 8004AC80: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004AC84:
    ctx->pc = 0x8004AC84u;
    // 8004AC84: addi    r31, r5, -17080
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004AC88:
    ctx->pc = 0x8004AC88u;
    // 8004AC88: lwz     r0, 12528(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004AC8C:
    ctx->pc = 0x8004AC8Cu;
    // 8004AC8C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AC90:
    ctx->pc = 0x8004AC90u;
    // 8004AC90: bl      0x80049D60
    {
            ctx->lr = 0x8004AC94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80049D60u;
                return;
            }
            goto label_80049D60;
    }

label_8004AC94:
    ctx->pc = 0x8004AC94u;
    ctx->downcount -= 4;
    // 8004AC94: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AC98:
    ctx->pc = 0x8004AC98u;
    // 8004AC98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004AC9C:
    ctx->pc = 0x8004AC9Cu;
    // 8004AC9C: li      r5, 10280
    ctx->gpr[5] = (u32)(s32)(10280);

label_8004ACA0:
    ctx->pc = 0x8004ACA0u;
    // 8004ACA0: bl      0x800050B4
    {
            ctx->lr = 0x8004ACA4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004ACA4:
    ctx->pc = 0x8004ACA4u;
    ctx->downcount -= 8;
    // 8004ACA4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8004ACA8:
    ctx->pc = 0x8004ACA8u;
    // 8004ACA8: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8004ACAC:
    ctx->pc = 0x8004ACACu;
    // 8004ACAC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8004ACB0:
    ctx->pc = 0x8004ACB0u;
    // 8004ACB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004ACB4:
    ctx->pc = 0x8004ACB4u;
    // 8004ACB4: stw     r5, 5896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5896);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004ACB8:
    ctx->pc = 0x8004ACB8u;
    // 8004ACB8: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004ACBC:
    ctx->pc = 0x8004ACBCu;
    // 8004ACBC: stw     r0, 6100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004ACC0:
    ctx->pc = 0x8004ACC0u;
    // 8004ACC0: bl      0x8001C384
    {
            ctx->lr = 0x8004ACC4u;
            ctx->pc = 0x8001C384u;
            return;
    }

label_8004ACC4:
    ctx->pc = 0x8004ACC4u;
    ctx->downcount -= 1;
    // 8004ACC4: bl      0x80027BCC
    {
            ctx->lr = 0x8004ACC8u;
            ctx->pc = 0x80027BCCu;
            return;
    }

label_8004ACC8:
    ctx->pc = 0x8004ACC8u;
    ctx->downcount -= 2;
    // 8004ACC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004ACCC:
    ctx->pc = 0x8004ACCCu;
    // 8004ACCC: bl      0x80029E0C
    {
            ctx->lr = 0x8004ACD0u;
            ctx->pc = 0x80029E0Cu;
            return;
    }

label_8004ACD0:
    ctx->pc = 0x8004ACD0u;
    ctx->downcount -= 1;
    // 8004ACD0: bl      0x8004BCB0
    {
            ctx->lr = 0x8004ACD4u;
            goto label_8004BCB0;
    }

label_8004ACD4:
    ctx->pc = 0x8004ACD4u;
    ctx->downcount -= 1;
    // 8004ACD4: bl      0x8002B19C
    {
            ctx->lr = 0x8004ACD8u;
            ctx->pc = 0x8002B19Cu;
            return;
    }

label_8004ACD8:
    ctx->pc = 0x8004ACD8u;
    ctx->downcount -= 2;
    // 8004ACD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004ACDC:
    ctx->pc = 0x8004ACDCu;
    // 8004ACDC: bl      0x8002C86C
    {
            ctx->lr = 0x8004ACE0u;
            ctx->pc = 0x8002C86Cu;
            return;
    }

label_8004ACE0:
    ctx->pc = 0x8004ACE0u;
    ctx->downcount -= 2;
    // 8004ACE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004ACE4:
    ctx->pc = 0x8004ACE4u;
    // 8004ACE4: bl      0x8004C53C
    {
            ctx->lr = 0x8004ACE8u;
            goto label_8004C53C;
    }

label_8004ACE8:
    ctx->pc = 0x8004ACE8u;
    ctx->downcount -= 1;
    // 8004ACE8: bl      0x8002C6D0
    {
            ctx->lr = 0x8004ACECu;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8004ACEC:
    ctx->pc = 0x8004ACECu;
    ctx->downcount -= 1;
    // 8004ACEC: bl      0x8002B64C
    {
            ctx->lr = 0x8004ACF0u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004ACF0:
    ctx->pc = 0x8004ACF0u;
    ctx->downcount -= 4;
    // 8004ACF0: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004ACF4:
    ctx->pc = 0x8004ACF4u;
    // 8004ACF4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004ACF8:
    ctx->pc = 0x8004ACF8u;
    // 8004ACF8: addi    r4, r4, -17096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17096);

label_8004ACFC:
    ctx->pc = 0x8004ACFCu;
    // 8004ACFC: bl      0x8001EAA4
    {
            ctx->lr = 0x8004AD00u;
            ctx->pc = 0x8001EAA4u;
            return;
    }

label_8004AD00:
    ctx->pc = 0x8004AD00u;
    ctx->downcount -= 4;
    // 8004AD00: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004AD04:
    ctx->pc = 0x8004AD04u;
    // 8004AD04: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8004AD08:
    ctx->pc = 0x8004AD08u;
    // 8004AD08: addi    r4, r4, -16964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16964);

label_8004AD0C:
    ctx->pc = 0x8004AD0Cu;
    // 8004AD0C: bl      0x8001EAA4
    {
            ctx->lr = 0x8004AD10u;
            ctx->pc = 0x8001EAA4u;
            return;
    }

label_8004AD10:
    ctx->pc = 0x8004AD10u;
    ctx->downcount -= 4;
    // 8004AD10: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004AD14:
    ctx->pc = 0x8004AD14u;
    // 8004AD14: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_8004AD18:
    ctx->pc = 0x8004AD18u;
    // 8004AD18: addi    r4, r4, -16804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16804);

label_8004AD1C:
    ctx->pc = 0x8004AD1Cu;
    // 8004AD1C: bl      0x8001EAA4
    {
            ctx->lr = 0x8004AD20u;
            ctx->pc = 0x8001EAA4u;
            return;
    }

label_8004AD20:
    ctx->pc = 0x8004AD20u;
    ctx->downcount -= 4;
    // 8004AD20: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004AD24:
    ctx->pc = 0x8004AD24u;
    // 8004AD24: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_8004AD28:
    ctx->pc = 0x8004AD28u;
    // 8004AD28: addi    r4, r4, -16712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16712);

label_8004AD2C:
    ctx->pc = 0x8004AD2Cu;
    // 8004AD2C: bl      0x8001EAA4
    {
            ctx->lr = 0x8004AD30u;
            ctx->pc = 0x8001EAA4u;
            return;
    }

label_8004AD30:
    ctx->pc = 0x8004AD30u;
    ctx->downcount -= 1;
    // 8004AD30: bl      0x8002A1B8
    {
            ctx->lr = 0x8004AD34u;
            ctx->pc = 0x8002A1B8u;
            return;
    }

label_8004AD34:
    ctx->pc = 0x8004AD34u;
    ctx->downcount -= 21;
    // 8004AD34: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AD38:
    ctx->pc = 0x8004AD38u;
    // 8004AD38: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004AD3C:
    ctx->pc = 0x8004AD3Cu;
    // 8004AD3C: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004AD40:
    ctx->pc = 0x8004AD40u;
    // 8004AD40: addi    r7, r31, 0
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AD44:
    ctx->pc = 0x8004AD44u;
    // 8004AD44: addi    r0, r4, -8684
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8684);

label_8004AD48:
    ctx->pc = 0x8004AD48u;
    // 8004AD48: stw     r6, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8004AD4C:
    ctx->pc = 0x8004AD4Cu;
    // 8004AD4C: stw     r5, 36(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004AD50:
    ctx->pc = 0x8004AD50u;
    // 8004AD50: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004AD54:
    ctx->pc = 0x8004AD54u;
    // 8004AD54: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004AD58:
    ctx->pc = 0x8004AD58u;
    // 8004AD58: stw     r5, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004AD5C:
    ctx->pc = 0x8004AD5Cu;
    // 8004AD5C: stw     r4, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004AD60:
    ctx->pc = 0x8004AD60u;
    // 8004AD60: lwz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004AD64:
    ctx->pc = 0x8004AD64u;
    // 8004AD64: lwz     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004AD68:
    ctx->pc = 0x8004AD68u;
    // 8004AD68: stw     r5, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004AD6C:
    ctx->pc = 0x8004AD6Cu;
    // 8004AD6C: stw     r4, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004AD70:
    ctx->pc = 0x8004AD70u;
    // 8004AD70: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004AD74:
    ctx->pc = 0x8004AD74u;
    // 8004AD74: lwz     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004AD78:
    ctx->pc = 0x8004AD78u;
    // 8004AD78: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004AD7C:
    ctx->pc = 0x8004AD7Cu;
    // 8004AD7C: stw     r5, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004AD80:
    ctx->pc = 0x8004AD80u;
    // 8004AD80: stw     r4, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004AD84:
    ctx->pc = 0x8004AD84u;
    // 8004AD84: bl      0x8004DDEC
    {
            ctx->lr = 0x8004AD88u;
            ctx->pc = 0x8004DDECu;
            return;
    }

label_8004AD88:
    ctx->pc = 0x8004AD88u;
    ctx->downcount -= 2;
    // 8004AD88: cmplwi  r3, 0x0000
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

label_8004AD8C:
    ctx->pc = 0x8004AD8Cu;
    // 8004AD8C: bc    12, 2, 0x8004AD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AD94;
        }
    }

label_8004AD90:
    ctx->pc = 0x8004AD90u;
    ctx->downcount -= 1;
    // 8004AD90: bl      0x8004DDEC
    {
            ctx->lr = 0x8004AD94u;
            ctx->pc = 0x8004DDECu;
            return;
    }

label_8004AD94:
    ctx->pc = 0x8004AD94u;
    ctx->downcount -= 3;
    // 8004AD94: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004AD98:
    ctx->pc = 0x8004AD98u;
    // 8004AD98: addi    r3, r3, -8636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8636);

label_8004AD9C:
    ctx->pc = 0x8004AD9Cu;
    // 8004AD9C: bl      0x8004DE00
    {
            ctx->lr = 0x8004ADA0u;
            ctx->pc = 0x8004DE00u;
            return;
    }

label_8004ADA0:
    ctx->pc = 0x8004ADA0u;
    ctx->downcount -= 2;
    // 8004ADA0: cmplwi  r3, 0x0000
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

label_8004ADA4:
    ctx->pc = 0x8004ADA4u;
    // 8004ADA4: bc    12, 2, 0x8004ADAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004ADAC;
        }
    }

label_8004ADA8:
    ctx->pc = 0x8004ADA8u;
    ctx->downcount -= 1;
    // 8004ADA8: bl      0x8004DE00
    {
            ctx->lr = 0x8004ADACu;
            ctx->pc = 0x8004DE00u;
            return;
    }

label_8004ADAC:
    ctx->pc = 0x8004ADACu;
    ctx->downcount -= 1;
    // 8004ADAC: bl      0x8002C9F0
    {
            ctx->lr = 0x8004ADB0u;
            ctx->pc = 0x8002C9F0u;
            return;
    }

label_8004ADB0:
    ctx->pc = 0x8004ADB0u;
    ctx->downcount -= 2;
    // 8004ADB0: cmpwi   r3, 2
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

label_8004ADB4:
    ctx->pc = 0x8004ADB4u;
    // 8004ADB4: bc    12, 2, 0x8004ADD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004ADD8;
        }
    }

label_8004ADB8:
    ctx->pc = 0x8004ADB8u;
    ctx->downcount -= 1;
    // 8004ADB8: bc    4, 0, 0x8004ADCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004ADCC;
        }
    }

label_8004ADBC:
    ctx->pc = 0x8004ADBCu;
    ctx->downcount -= 2;
    // 8004ADBC: cmpwi   r3, 0
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

label_8004ADC0:
    ctx->pc = 0x8004ADC0u;
    // 8004ADC0: bc    12, 2, 0x8004ADD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004ADD8;
        }
    }

label_8004ADC4:
    ctx->pc = 0x8004ADC4u;
    ctx->downcount -= 1;
    // 8004ADC4: bc    4, 0, 0x8004AE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AE34;
        }
    }

label_8004ADC8:
    ctx->pc = 0x8004ADC8u;
    ctx->downcount -= 1;
    // 8004ADC8: b       0x8004AE48
    {
            goto label_8004AE48;
    }

label_8004ADCC:
    ctx->pc = 0x8004ADCCu;
    ctx->downcount -= 2;
    // 8004ADCC: cmpwi   r3, 5
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

label_8004ADD0:
    ctx->pc = 0x8004ADD0u;
    // 8004ADD0: bc    12, 2, 0x8004AE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AE34;
        }
    }

label_8004ADD4:
    ctx->pc = 0x8004ADD4u;
    ctx->downcount -= 1;
    // 8004ADD4: b       0x8004AE48
    {
            goto label_8004AE48;
    }

label_8004ADD8:
    ctx->pc = 0x8004ADD8u;
    ctx->downcount -= 1;
    // 8004ADD8: bl      0x800223D4
    {
            ctx->lr = 0x8004ADDCu;
            ctx->pc = 0x800223D4u;
            return;
    }

label_8004ADDC:
    ctx->pc = 0x8004ADDCu;
    ctx->downcount -= 5;
    // 8004ADDC: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8004ADE0:
    ctx->pc = 0x8004ADE0u;
    // 8004ADE0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8004ADE4:
    ctx->pc = 0x8004ADE4u;
    // 8004ADE4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8004ADE8:
    ctx->pc = 0x8004ADE8u;
    // 8004ADE8: rlwinm. r0, r0, 27, 5, 31
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

label_8004ADEC:
    ctx->pc = 0x8004ADECu;
    // 8004ADEC: bc    12, 2, 0x8004AE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AE18;
        }
    }

label_8004ADF0:
    ctx->pc = 0x8004ADF0u;
    ctx->downcount -= 1;
    // 8004ADF0: bl      0x8002CA58
    {
            ctx->lr = 0x8004ADF4u;
            ctx->pc = 0x8002CA58u;
            return;
    }

label_8004ADF4:
    ctx->pc = 0x8004ADF4u;
    ctx->downcount -= 2;
    // 8004ADF4: cmplwi  r3, 0x0000
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

label_8004ADF8:
    ctx->pc = 0x8004ADF8u;
    // 8004ADF8: bc    12, 2, 0x8004AE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AE18;
        }
    }

label_8004ADFC:
    ctx->pc = 0x8004ADFCu;
    ctx->downcount -= 1;
    // 8004ADFC: bl      0x800230D8
    {
            ctx->lr = 0x8004AE00u;
            ctx->pc = 0x800230D8u;
            return;
    }

label_8004AE00:
    ctx->pc = 0x8004AE00u;
    ctx->downcount -= 2;
    // 8004AE00: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004AE04:
    ctx->pc = 0x8004AE04u;
    // 8004AE04: bc    4, 2, 0x8004AE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AE18;
        }
    }

label_8004AE08:
    ctx->pc = 0x8004AE08u;
    ctx->downcount -= 4;
    // 8004AE08: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AE0C:
    ctx->pc = 0x8004AE0Cu;
    // 8004AE0C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8004AE10:
    ctx->pc = 0x8004AE10u;
    // 8004AE10: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AE14:
    ctx->pc = 0x8004AE14u;
    // 8004AE14: b       0x8004AE24
    {
            goto label_8004AE24;
    }

label_8004AE18:
    ctx->pc = 0x8004AE18u;
    ctx->downcount -= 3;
    // 8004AE18: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AE1C:
    ctx->pc = 0x8004AE1Cu;
    // 8004AE1C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8004AE20:
    ctx->pc = 0x8004AE20u;
    // 8004AE20: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AE24:
    ctx->pc = 0x8004AE24u;
    ctx->downcount -= 4;
    // 8004AE24: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AE28:
    ctx->pc = 0x8004AE28u;
    // 8004AE28: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_8004AE2C:
    ctx->pc = 0x8004AE2Cu;
    // 8004AE2C: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AE30:
    ctx->pc = 0x8004AE30u;
    // 8004AE30: b       0x8004AE48
    {
            goto label_8004AE48;
    }

label_8004AE34:
    ctx->pc = 0x8004AE34u;
    ctx->downcount -= 5;
    // 8004AE34: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AE38:
    ctx->pc = 0x8004AE38u;
    // 8004AE38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004AE3C:
    ctx->pc = 0x8004AE3Cu;
    // 8004AE3C: li      r0, 50
    ctx->gpr[0] = (u32)(s32)(50);

label_8004AE40:
    ctx->pc = 0x8004AE40u;
    // 8004AE40: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004AE44:
    ctx->pc = 0x8004AE44u;
    // 8004AE44: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AE48:
    ctx->pc = 0x8004AE48u;
    ctx->downcount -= 10;
    // 8004AE48: addi    r29, r31, 0
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(0);

label_8004AE4C:
    ctx->pc = 0x8004AE4Cu;
    // 8004AE4C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8004AE50:
    ctx->pc = 0x8004AE50u;
    // 8004AE50: lwz     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004AE54:
    ctx->pc = 0x8004AE54u;
    // 8004AE54: addi    r0, r3, 28312
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28312);

label_8004AE58:
    ctx->pc = 0x8004AE58u;
    // 8004AE58: mulli   r3, r4, 60
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)60);

label_8004AE5C:
    ctx->pc = 0x8004AE5Cu;
    // 8004AE5C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004AE60:
    ctx->pc = 0x8004AE60u;
    // 8004AE60: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AE64:
    ctx->pc = 0x8004AE64u;
    // 8004AE64: bl      0x8001D734
    {
            ctx->lr = 0x8004AE68u;
            ctx->pc = 0x8001D734u;
            return;
    }

label_8004AE68:
    ctx->pc = 0x8004AE68u;
    ctx->downcount -= 2;
    // 8004AE68: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004AE6C:
    ctx->pc = 0x8004AE6Cu;
    // 8004AE6C: bl      0x8001D72C
    {
            ctx->lr = 0x8004AE70u;
            ctx->pc = 0x8001D72Cu;
            return;
    }

label_8004AE70:
    ctx->pc = 0x8004AE70u;
    ctx->downcount -= 5;
    // 8004AE70: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004AE74:
    ctx->pc = 0x8004AE74u;
    // 8004AE74: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004AE78:
    ctx->pc = 0x8004AE78u;
    // 8004AE78: subf   r5, r28, r0
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8004AE7C:
    ctx->pc = 0x8004AE7Cu;
    // 8004AE7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004AE80:
    ctx->pc = 0x8004AE80u;
    // 8004AE80: bl      0x800050B4
    {
            ctx->lr = 0x8004AE84u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004AE84:
    ctx->pc = 0x8004AE84u;
    ctx->downcount -= 23;
    // 8004AE84: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004AE88:
    ctx->pc = 0x8004AE88u;
    // 8004AE88: cmplwi  r30, 0x0000
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

label_8004AE8C:
    ctx->pc = 0x8004AE8Cu;
    // 8004AE8C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8004AE90:
    ctx->pc = 0x8004AE90u;
    // 8004AE90: lhz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004AE94:
    ctx->pc = 0x8004AE94u;
    // 8004AE94: lhz     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004AE98:
    ctx->pc = 0x8004AE98u;
    // 8004AE98: addi    r3, r3, 15
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15);

label_8004AE9C:
    ctx->pc = 0x8004AE9Cu;
    // 8004AE9C: rlwinm r3, r3, 0, 16, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFF0u;
    }

label_8004AEA0:
    ctx->pc = 0x8004AEA0u;
    // 8004AEA0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8004AEA4:
    ctx->pc = 0x8004AEA4u;
    // 8004AEA4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8004AEA8:
    ctx->pc = 0x8004AEA8u;
    // 8004AEA8: stw     r0, 6060(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AEAC:
    ctx->pc = 0x8004AEACu;
    // 8004AEAC: lhz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004AEB0:
    ctx->pc = 0x8004AEB0u;
    // 8004AEB0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8004AEB4:
    ctx->pc = 0x8004AEB4u;
    // 8004AEB4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8004AEB8:
    ctx->pc = 0x8004AEB8u;
    // 8004AEB8: stw     r0, 6064(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004AEBC:
    ctx->pc = 0x8004AEBCu;
    // 8004AEBC: bc    12, 2, 0x8004AF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AF80;
        }
    }

label_8004AEC0:
    ctx->pc = 0x8004AEC0u;
    ctx->downcount -= 3;
    // 8004AEC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004AEC4:
    ctx->pc = 0x8004AEC4u;
    // 8004AEC4: cmpwi   r0, 1
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

label_8004AEC8:
    ctx->pc = 0x8004AEC8u;
    // 8004AEC8: bc    12, 2, 0x8004AEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AEF4;
        }
    }

label_8004AECC:
    ctx->pc = 0x8004AECCu;
    ctx->downcount -= 1;
    // 8004AECC: bc    4, 0, 0x8004AEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AEDC;
        }
    }

label_8004AED0:
    ctx->pc = 0x8004AED0u;
    ctx->downcount -= 2;
    // 8004AED0: cmpwi   r0, 0
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

label_8004AED4:
    ctx->pc = 0x8004AED4u;
    // 8004AED4: bc    4, 0, 0x8004AEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AEE4;
        }
    }

label_8004AED8:
    ctx->pc = 0x8004AED8u;
    ctx->downcount -= 1;
    // 8004AED8: b       0x8004AEF4
    {
            goto label_8004AEF4;
    }

label_8004AEDC:
    ctx->pc = 0x8004AEDCu;
    ctx->downcount -= 2;
    // 8004AEDC: cmpwi   r0, 3
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

label_8004AEE0:
    ctx->pc = 0x8004AEE0u;
    // 8004AEE0: bc    4, 0, 0x8004AEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AEF4;
        }
    }

label_8004AEE4:
    ctx->pc = 0x8004AEE4u;
    ctx->downcount -= 4;
    // 8004AEE4: lwz     r3, 6064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6064);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004AEE8:
    ctx->pc = 0x8004AEE8u;
    // 8004AEE8: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8004AEEC:
    ctx->pc = 0x8004AEECu;
    // 8004AEEC: rlwinm r3, r0, 0, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004AEF0:
    ctx->pc = 0x8004AEF0u;
    // 8004AEF0: b       0x8004AF00
    {
            goto label_8004AF00;
    }

label_8004AEF4:
    ctx->pc = 0x8004AEF4u;
    ctx->downcount -= 3;
    // 8004AEF4: lwz     r3, 6060(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6060);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004AEF8:
    ctx->pc = 0x8004AEF8u;
    // 8004AEF8: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8004AEFC:
    ctx->pc = 0x8004AEFCu;
    // 8004AEFC: rlwinm r3, r0, 0, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004AF00:
    ctx->pc = 0x8004AF00u;
    ctx->downcount -= 6;
    // 8004AF00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004AF04:
    ctx->pc = 0x8004AF04u;
    // 8004AF04: stw     r30, 5900(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004AF08:
    ctx->pc = 0x8004AF08u;
    // 8004AF08: cmpwi   r0, 1
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

label_8004AF0C:
    ctx->pc = 0x8004AF0Cu;
    // 8004AF0C: add   r30, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8004AF10:
    ctx->pc = 0x8004AF10u;
    // 8004AF10: addi    r4, r5, 4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(4);

label_8004AF14:
    ctx->pc = 0x8004AF14u;
    // 8004AF14: b       0x8004AF40
    {
            goto label_8004AF40;
    }

label_8004AF18:
    ctx->pc = 0x8004AF18u;
    ctx->downcount -= 1;
    // 8004AF18: bc    4, 0, 0x8004AF28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF28;
        }
    }

label_8004AF1C:
    ctx->pc = 0x8004AF1Cu;
    ctx->downcount -= 2;
    // 8004AF1C: cmpwi   r0, 0
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

label_8004AF20:
    ctx->pc = 0x8004AF20u;
    // 8004AF20: bc    4, 0, 0x8004AF30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF30;
        }
    }

label_8004AF24:
    ctx->pc = 0x8004AF24u;
    ctx->downcount -= 1;
    // 8004AF24: b       0x8004AF40
    {
            goto label_8004AF40;
    }

label_8004AF28:
    ctx->pc = 0x8004AF28u;
    ctx->downcount -= 2;
    // 8004AF28: cmpwi   r0, 3
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

label_8004AF2C:
    ctx->pc = 0x8004AF2Cu;
    // 8004AF2C: bc    4, 0, 0x8004AF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF40;
        }
    }

label_8004AF30:
    ctx->pc = 0x8004AF30u;
    ctx->downcount -= 4;
    // 8004AF30: lwz     r3, 6064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6064);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004AF34:
    ctx->pc = 0x8004AF34u;
    // 8004AF34: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8004AF38:
    ctx->pc = 0x8004AF38u;
    // 8004AF38: rlwinm r3, r0, 0, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004AF3C:
    ctx->pc = 0x8004AF3Cu;
    // 8004AF3C: b       0x8004AF4C
    {
            goto label_8004AF4C;
    }

label_8004AF40:
    ctx->pc = 0x8004AF40u;
    ctx->downcount -= 3;
    // 8004AF40: lwz     r3, 6060(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6060);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004AF44:
    ctx->pc = 0x8004AF44u;
    // 8004AF44: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8004AF48:
    ctx->pc = 0x8004AF48u;
    // 8004AF48: rlwinm r3, r0, 0, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004AF4C:
    ctx->pc = 0x8004AF4Cu;
    ctx->downcount -= 6;
    // 8004AF4C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8004AF50:
    ctx->pc = 0x8004AF50u;
    // 8004AF50: stw     r30, 5900(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004AF54:
    ctx->pc = 0x8004AF54u;
    // 8004AF54: cmpwi   r0, 1
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

label_8004AF58:
    ctx->pc = 0x8004AF58u;
    // 8004AF58: add   r30, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8004AF5C:
    ctx->pc = 0x8004AF5Cu;
    // 8004AF5C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8004AF60:
    ctx->pc = 0x8004AF60u;
    // 8004AF60: bc    12, 2, 0x8004AF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AF78;
        }
    }

label_8004AF64:
    ctx->pc = 0x8004AF64u;
    ctx->downcount -= 1;
    // 8004AF64: bc    4, 0, 0x8004AF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF74;
        }
    }

label_8004AF68:
    ctx->pc = 0x8004AF68u;
    ctx->downcount -= 2;
    // 8004AF68: cmpwi   r0, 0
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

label_8004AF6C:
    ctx->pc = 0x8004AF6Cu;
    // 8004AF6C: bc    4, 0, 0x8004AF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF78;
        }
    }

label_8004AF70:
    ctx->pc = 0x8004AF70u;
    ctx->downcount -= 1;
    // 8004AF70: b       0x8004AF78
    {
            goto label_8004AF78;
    }

label_8004AF74:
    ctx->pc = 0x8004AF74u;
    ctx->downcount -= 1;
    // 8004AF74: cmpwi   r0, 3
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

label_8004AF78:
    ctx->pc = 0x8004AF78u;
    ctx->downcount -= 2;
    // 8004AF78: stw     r30, 5900(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004AF7C:
    ctx->pc = 0x8004AF7Cu;
    // 8004AF7C: b       0x8004B050
    {
            goto label_8004B050;
    }

label_8004AF80:
    ctx->pc = 0x8004AF80u;
    ctx->downcount -= 3;
    // 8004AF80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004AF84:
    ctx->pc = 0x8004AF84u;
    // 8004AF84: cmpwi   r4, 1
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

label_8004AF88:
    ctx->pc = 0x8004AF88u;
    // 8004AF88: bc    12, 2, 0x8004AFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004AFAC;
        }
    }

label_8004AF8C:
    ctx->pc = 0x8004AF8Cu;
    ctx->downcount -= 1;
    // 8004AF8C: bc    4, 0, 0x8004AF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AF9C;
        }
    }

label_8004AF90:
    ctx->pc = 0x8004AF90u;
    ctx->downcount -= 2;
    // 8004AF90: cmpwi   r4, 0
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

label_8004AF94:
    ctx->pc = 0x8004AF94u;
    // 8004AF94: bc    4, 0, 0x8004AFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AFA4;
        }
    }

label_8004AF98:
    ctx->pc = 0x8004AF98u;
    ctx->downcount -= 1;
    // 8004AF98: b       0x8004AFAC
    {
            goto label_8004AFAC;
    }

label_8004AF9C:
    ctx->pc = 0x8004AF9Cu;
    ctx->downcount -= 2;
    // 8004AF9C: cmpwi   r4, 3
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

label_8004AFA0:
    ctx->pc = 0x8004AFA0u;
    // 8004AFA0: bc    4, 0, 0x8004AFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AFAC;
        }
    }

label_8004AFA4:
    ctx->pc = 0x8004AFA4u;
    ctx->downcount -= 2;
    // 8004AFA4: lwz     r6, 6064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6064);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AFA8:
    ctx->pc = 0x8004AFA8u;
    // 8004AFA8: b       0x8004AFB0
    {
            goto label_8004AFB0;
    }

label_8004AFAC:
    ctx->pc = 0x8004AFACu;
    ctx->downcount -= 1;
    // 8004AFAC: lwz     r6, 6060(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6060);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AFB0:
    ctx->pc = 0x8004AFB0u;
    ctx->downcount -= 8;
    // 8004AFB0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004AFB4:
    ctx->pc = 0x8004AFB4u;
    // 8004AFB4: addi    r0, r6, 31
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(31);

label_8004AFB8:
    ctx->pc = 0x8004AFB8u;
    // 8004AFB8: cmpwi   r4, 1
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

label_8004AFBC:
    ctx->pc = 0x8004AFBCu;
    // 8004AFBC: stw     r28, 5900(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004AFC0:
    ctx->pc = 0x8004AFC0u;
    // 8004AFC0: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004AFC4:
    ctx->pc = 0x8004AFC4u;
    // 8004AFC4: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_8004AFC8:
    ctx->pc = 0x8004AFC8u;
    // 8004AFC8: rlwinm r28, r0, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004AFCC:
    ctx->pc = 0x8004AFCCu;
    // 8004AFCC: b       0x8004AFF0
    {
            goto label_8004AFF0;
    }

label_8004AFD0:
    ctx->pc = 0x8004AFD0u;
    ctx->downcount -= 1;
    // 8004AFD0: bc    4, 0, 0x8004AFE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AFE0;
        }
    }

label_8004AFD4:
    ctx->pc = 0x8004AFD4u;
    ctx->downcount -= 2;
    // 8004AFD4: cmpwi   r4, 0
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

label_8004AFD8:
    ctx->pc = 0x8004AFD8u;
    // 8004AFD8: bc    4, 0, 0x8004AFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AFE8;
        }
    }

label_8004AFDC:
    ctx->pc = 0x8004AFDCu;
    ctx->downcount -= 1;
    // 8004AFDC: b       0x8004AFF0
    {
            goto label_8004AFF0;
    }

label_8004AFE0:
    ctx->pc = 0x8004AFE0u;
    ctx->downcount -= 2;
    // 8004AFE0: cmpwi   r4, 3
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

label_8004AFE4:
    ctx->pc = 0x8004AFE4u;
    // 8004AFE4: bc    4, 0, 0x8004AFF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004AFF0;
        }
    }

label_8004AFE8:
    ctx->pc = 0x8004AFE8u;
    ctx->downcount -= 2;
    // 8004AFE8: lwz     r6, 6064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6064);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AFEC:
    ctx->pc = 0x8004AFECu;
    // 8004AFEC: b       0x8004AFF4
    {
            goto label_8004AFF4;
    }

label_8004AFF0:
    ctx->pc = 0x8004AFF0u;
    ctx->downcount -= 1;
    // 8004AFF0: lwz     r6, 6060(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6060);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004AFF4:
    ctx->pc = 0x8004AFF4u;
    ctx->downcount -= 8;
    // 8004AFF4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8004AFF8:
    ctx->pc = 0x8004AFF8u;
    // 8004AFF8: addi    r0, r6, 31
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(31);

label_8004AFFC:
    ctx->pc = 0x8004AFFCu;
    // 8004AFFC: cmpwi   r4, 1
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

label_8004B000:
    ctx->pc = 0x8004B000u;
    // 8004B000: stw     r28, 5900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B004:
    ctx->pc = 0x8004B004u;
    // 8004B004: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004B008:
    ctx->pc = 0x8004B008u;
    // 8004B008: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8004B00C:
    ctx->pc = 0x8004B00Cu;
    // 8004B00C: rlwinm r28, r0, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004B010:
    ctx->pc = 0x8004B010u;
    // 8004B010: bc    12, 2, 0x8004B034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B034;
        }
    }

label_8004B014:
    ctx->pc = 0x8004B014u;
    ctx->downcount -= 1;
    // 8004B014: bc    4, 0, 0x8004B024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B024;
        }
    }

label_8004B018:
    ctx->pc = 0x8004B018u;
    ctx->downcount -= 2;
    // 8004B018: cmpwi   r4, 0
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

label_8004B01C:
    ctx->pc = 0x8004B01Cu;
    // 8004B01C: bc    4, 0, 0x8004B02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B02C;
        }
    }

label_8004B020:
    ctx->pc = 0x8004B020u;
    ctx->downcount -= 1;
    // 8004B020: b       0x8004B034
    {
            goto label_8004B034;
    }

label_8004B024:
    ctx->pc = 0x8004B024u;
    ctx->downcount -= 2;
    // 8004B024: cmpwi   r4, 3
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

label_8004B028:
    ctx->pc = 0x8004B028u;
    // 8004B028: bc    4, 0, 0x8004B034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B034;
        }
    }

label_8004B02C:
    ctx->pc = 0x8004B02Cu;
    ctx->downcount -= 2;
    // 8004B02C: lwz     r6, 6064(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6064);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B030:
    ctx->pc = 0x8004B030u;
    // 8004B030: b       0x8004B038
    {
            goto label_8004B038;
    }

label_8004B034:
    ctx->pc = 0x8004B034u;
    ctx->downcount -= 1;
    // 8004B034: lwz     r6, 6060(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6060);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B038:
    ctx->pc = 0x8004B038u;
    ctx->downcount -= 6;
    // 8004B038: addi    r0, r6, 31
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(31);

label_8004B03C:
    ctx->pc = 0x8004B03Cu;
    // 8004B03C: stw     r28, 5900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5900);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B040:
    ctx->pc = 0x8004B040u;
    // 8004B040: add   r0, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004B044:
    ctx->pc = 0x8004B044u;
    // 8004B044: rlwinm r28, r0, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004B048:
    ctx->pc = 0x8004B048u;
    // 8004B048: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004B04C:
    ctx->pc = 0x8004B04Cu;
    // 8004B04C: bl      0x8001D744
    {
            ctx->lr = 0x8004B050u;
            ctx->pc = 0x8001D744u;
            return;
    }

label_8004B050:
    ctx->pc = 0x8004B050u;
    ctx->downcount -= 1;
    // 8004B050: bl      0x8001D734
    {
            ctx->lr = 0x8004B054u;
            ctx->pc = 0x8001D734u;
            return;
    }

label_8004B054:
    ctx->pc = 0x8004B054u;
    ctx->downcount -= 2;
    // 8004B054: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B058:
    ctx->pc = 0x8004B058u;
    // 8004B058: bl      0x8001D72C
    {
            ctx->lr = 0x8004B05Cu;
            ctx->pc = 0x8001D72Cu;
            return;
    }

label_8004B05C:
    ctx->pc = 0x8004B05Cu;
    ctx->downcount -= 5;
    // 8004B05C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B060:
    ctx->pc = 0x8004B060u;
    // 8004B060: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B064:
    ctx->pc = 0x8004B064u;
    // 8004B064: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8004B068:
    ctx->pc = 0x8004B068u;
    // 8004B068: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004B06C:
    ctx->pc = 0x8004B06Cu;
    // 8004B06C: bl      0x8001D54C
    {
            ctx->lr = 0x8004B070u;
            ctx->pc = 0x8001D54Cu;
            return;
    }

label_8004B070:
    ctx->pc = 0x8004B070u;
    ctx->downcount -= 2;
    // 8004B070: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B074:
    ctx->pc = 0x8004B074u;
    // 8004B074: bl      0x8001D744
    {
            ctx->lr = 0x8004B078u;
            ctx->pc = 0x8001D744u;
            return;
    }

label_8004B078:
    ctx->pc = 0x8004B078u;
    ctx->downcount -= 7;
    // 8004B078: addi    r0, r28, 31
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(31);

label_8004B07C:
    ctx->pc = 0x8004B07Cu;
    // 8004B07C: rlwinm r27, r27, 0, 0, 26
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0xFFFFFFE0u;
    }

label_8004B080:
    ctx->pc = 0x8004B080u;
    // 8004B080: rlwinm r26, r0, 0, 0, 26
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8004B084:
    ctx->pc = 0x8004B084u;
    // 8004B084: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B088:
    ctx->pc = 0x8004B088u;
    // 8004B088: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B08C:
    ctx->pc = 0x8004B08Cu;
    // 8004B08C: subf   r5, r26, r27
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[27];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8004B090:
    ctx->pc = 0x8004B090u;
    // 8004B090: bl      0x800050B4
    {
            ctx->lr = 0x8004B094u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004B094:
    ctx->pc = 0x8004B094u;
    ctx->downcount -= 3;
    // 8004B094: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B098:
    ctx->pc = 0x8004B098u;
    // 8004B098: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004B09C:
    ctx->pc = 0x8004B09Cu;
    // 8004B09C: bl      0x8001D5BC
    {
            ctx->lr = 0x8004B0A0u;
            ctx->pc = 0x8001D5BCu;
            return;
    }

label_8004B0A0:
    ctx->pc = 0x8004B0A0u;
    ctx->downcount -= 1;
    // 8004B0A0: bl      0x8001D53C
    {
            ctx->lr = 0x8004B0A4u;
            ctx->pc = 0x8001D53Cu;
            return;
    }

label_8004B0A4:
    ctx->pc = 0x8004B0A4u;
    ctx->downcount -= 2;
    // 8004B0A4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004B0A8:
    ctx->pc = 0x8004B0A8u;
    // 8004B0A8: bl      0x8001D744
    {
            ctx->lr = 0x8004B0ACu;
            ctx->pc = 0x8001D744u;
            return;
    }

label_8004B0AC:
    ctx->pc = 0x8004B0ACu;
    ctx->downcount -= 2;
    // 8004B0AC: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B0B0:
    ctx->pc = 0x8004B0B0u;
    // 8004B0B0: bl      0x8002BB14
    {
            ctx->lr = 0x8004B0B4u;
            ctx->pc = 0x8002BB14u;
            return;
    }

label_8004B0B4:
    ctx->pc = 0x8004B0B4u;
    ctx->downcount -= 5;
    // 8004B0B4: addi    r28, r31, 0
    ctx->gpr[28] = ctx->gpr[31] + (u32)(s32)(0);

label_8004B0B8:
    ctx->pc = 0x8004B0B8u;
    // 8004B0B8: lwz     r3, 5900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B0BC:
    ctx->pc = 0x8004B0BCu;
    // 8004B0BC: stw     r3, 5892(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B0C0:
    ctx->pc = 0x8004B0C0u;
    // 8004B0C0: stw     r3, 5888(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B0C4:
    ctx->pc = 0x8004B0C4u;
    // 8004B0C4: bl      0x8002C800
    {
            ctx->lr = 0x8004B0C8u;
            ctx->pc = 0x8002C800u;
            return;
    }

label_8004B0C8:
    ctx->pc = 0x8004B0C8u;
    ctx->downcount -= 6;
    // 8004B0C8: lwz     r0, 5908(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5908);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B0CC:
    ctx->pc = 0x8004B0CCu;
    // 8004B0CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B0D0:
    ctx->pc = 0x8004B0D0u;
    // 8004B0D0: stw     r3, 5884(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5884);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B0D4:
    ctx->pc = 0x8004B0D4u;
    // 8004B0D4: or   r30, r28, r28
    {
        ctx->gpr[30] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004B0D8:
    ctx->pc = 0x8004B0D8u;
    // 8004B0D8: stw     r0, 6056(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B0DC:
    ctx->pc = 0x8004B0DCu;
    // 8004B0DC: bl      0x8002C6D0
    {
            ctx->lr = 0x8004B0E0u;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8004B0E0:
    ctx->pc = 0x8004B0E0u;
    ctx->downcount -= 1;
    // 8004B0E0: bl      0x8002B64C
    {
            ctx->lr = 0x8004B0E4u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004B0E4:
    ctx->pc = 0x8004B0E4u;
    ctx->downcount -= 6;
    // 8004B0E4: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8004B0E8:
    ctx->pc = 0x8004B0E8u;
    // 8004B0E8: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_8004B0EC:
    ctx->pc = 0x8004B0ECu;
    // 8004B0EC: addi    r5, r4, 28552
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28552);

label_8004B0F0:
    ctx->pc = 0x8004B0F0u;
    // 8004B0F0: li      r6, 668
    ctx->gpr[6] = (u32)(s32)(668);

label_8004B0F4:
    ctx->pc = 0x8004B0F4u;
    // 8004B0F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B0F8:
    ctx->pc = 0x8004B0F8u;
    // 8004B0F8: bl      0x8004DD4C
    {
            ctx->lr = 0x8004B0FCu;
            ctx->pc = 0x8004DD4Cu;
            return;
    }

label_8004B0FC:
    ctx->pc = 0x8004B0FCu;
    ctx->downcount -= 10;
    // 8004B0FC: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_8004B100:
    ctx->pc = 0x8004B100u;
    // 8004B100: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8004B104:
    ctx->pc = 0x8004B104u;
    // 8004B104: stw     r3, 6124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B108:
    ctx->pc = 0x8004B108u;
    // 8004B108: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_8004B10C:
    ctx->pc = 0x8004B10Cu;
    // 8004B10C: addi    r5, r4, 28552
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28552);

label_8004B110:
    ctx->pc = 0x8004B110u;
    // 8004B110: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B114:
    ctx->pc = 0x8004B114u;
    // 8004B114: stw     r0, 6128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B118:
    ctx->pc = 0x8004B118u;
    // 8004B118: addi    r3, r3, -24576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24576);

label_8004B11C:
    ctx->pc = 0x8004B11Cu;
    // 8004B11C: li      r6, 671
    ctx->gpr[6] = (u32)(s32)(671);

label_8004B120:
    ctx->pc = 0x8004B120u;
    // 8004B120: bl      0x8004DD4C
    {
            ctx->lr = 0x8004B124u;
            ctx->pc = 0x8004DD4Cu;
            return;
    }

label_8004B124:
    ctx->pc = 0x8004B124u;
    ctx->downcount -= 10;
    // 8004B124: lwz     r0, 6108(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B128:
    ctx->pc = 0x8004B128u;
    // 8004B128: or   r27, r28, r28
    {
        ctx->gpr[27] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004B12C:
    ctx->pc = 0x8004B12Cu;
    // 8004B12C: stw     r3, 6116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B130:
    ctx->pc = 0x8004B130u;
    // 8004B130: lis     r5, 16
    ctx->gpr[5] = ((u32)(s32)(16) << 16);

label_8004B134:
    ctx->pc = 0x8004B134u;
    // 8004B134: addi    r26, r27, 6124
    ctx->gpr[26] = ctx->gpr[27] + (u32)(s32)(6124);

label_8004B138:
    ctx->pc = 0x8004B138u;
    // 8004B138: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004B13C:
    ctx->pc = 0x8004B13Cu;
    // 8004B13C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B140:
    ctx->pc = 0x8004B140u;
    // 8004B140: lwzx    r3, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B144:
    ctx->pc = 0x8004B144u;
    // 8004B144: addi    r5, r5, -24576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24576);

label_8004B148:
    ctx->pc = 0x8004B148u;
    // 8004B148: bl      0x80040C28
    {
            ctx->lr = 0x8004B14Cu;
            ctx->pc = 0x80040C28u;
            return;
    }

label_8004B14C:
    ctx->pc = 0x8004B14Cu;
    ctx->downcount -= 7;
    // 8004B14C: lwz     r0, 6108(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B150:
    ctx->pc = 0x8004B150u;
    // 8004B150: lis     r3, 15
    ctx->gpr[3] = ((u32)(s32)(15) << 16);

label_8004B154:
    ctx->pc = 0x8004B154u;
    // 8004B154: addi    r4, r3, 24576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24576);

label_8004B158:
    ctx->pc = 0x8004B158u;
    // 8004B158: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004B15C:
    ctx->pc = 0x8004B15Cu;
    // 8004B15C: addi    r5, r3, -8192
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8192);

label_8004B160:
    ctx->pc = 0x8004B160u;
    // 8004B160: lwzx    r3, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B164:
    ctx->pc = 0x8004B164u;
    // 8004B164: bl      0x80040D04
    {
            ctx->lr = 0x8004B168u;
            ctx->pc = 0x80040D04u;
            return;
    }

label_8004B168:
    ctx->pc = 0x8004B168u;
    ctx->downcount -= 6;
    // 8004B168: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8004B16C:
    ctx->pc = 0x8004B16Cu;
    // 8004B16C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_8004B170:
    ctx->pc = 0x8004B170u;
    // 8004B170: addi    r5, r4, 28552
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28552);

label_8004B174:
    ctx->pc = 0x8004B174u;
    // 8004B174: li      r6, 681
    ctx->gpr[6] = (u32)(s32)(681);

label_8004B178:
    ctx->pc = 0x8004B178u;
    // 8004B178: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B17C:
    ctx->pc = 0x8004B17Cu;
    // 8004B17C: bl      0x8004DD4C
    {
            ctx->lr = 0x8004B180u;
            ctx->pc = 0x8004DD4Cu;
            return;
    }

label_8004B180:
    ctx->pc = 0x8004B180u;
    ctx->downcount -= 3;
    // 8004B180: stw     r3, 10280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B184:
    ctx->pc = 0x8004B184u;
    // 8004B184: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_8004B188:
    ctx->pc = 0x8004B188u;
    // 8004B188: bl      0x8003FA24
    {
            ctx->lr = 0x8004B18Cu;
            ctx->pc = 0x8003FA24u;
            return;
    }

label_8004B18C:
    ctx->pc = 0x8004B18Cu;
    ctx->downcount -= 10;
    // 8004B18C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004B190:
    ctx->pc = 0x8004B190u;
    // 8004B190: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B194:
    ctx->pc = 0x8004B194u;
    // 8004B194: stw     r0, 6072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6072);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B198:
    ctx->pc = 0x8004B198u;
    // 8004B198: or   r26, r28, r28
    {
        ctx->gpr[26] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004B19C:
    ctx->pc = 0x8004B19Cu;
    // 8004B19C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B1A0:
    ctx->pc = 0x8004B1A0u;
    // 8004B1A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B1A4:
    ctx->pc = 0x8004B1A4u;
    // 8004B1A4: stw     r0, 10284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B1A8:
    ctx->pc = 0x8004B1A8u;
    // 8004B1A8: lhz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004B1AC:
    ctx->pc = 0x8004B1ACu;
    // 8004B1AC: lhz     r6, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004B1B0:
    ctx->pc = 0x8004B1B0u;
    // 8004B1B0: bl      0x8004D778
    {
            ctx->lr = 0x8004B1B4u;
            ctx->pc = 0x8004D778u;
            return;
    }

label_8004B1B4:
    ctx->pc = 0x8004B1B4u;
    ctx->downcount -= 6;
    // 8004B1B4: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B1B8:
    ctx->pc = 0x8004B1B8u;
    // 8004B1B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B1BC:
    ctx->pc = 0x8004B1BCu;
    // 8004B1BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B1C0:
    ctx->pc = 0x8004B1C0u;
    // 8004B1C0: lhz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004B1C4:
    ctx->pc = 0x8004B1C4u;
    // 8004B1C4: lhz     r6, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004B1C8:
    ctx->pc = 0x8004B1C8u;
    // 8004B1C8: bl      0x8004310C
    {
            ctx->lr = 0x8004B1CCu;
            ctx->pc = 0x8004310Cu;
            return;
    }

label_8004B1CC:
    ctx->pc = 0x8004B1CCu;
    ctx->downcount -= 4;
    // 8004B1CC: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B1D0:
    ctx->pc = 0x8004B1D0u;
    // 8004B1D0: lhz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004B1D4:
    ctx->pc = 0x8004B1D4u;
    // 8004B1D4: lhz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8004B1D8:
    ctx->pc = 0x8004B1D8u;
    // 8004B1D8: bl      0x80043204
    {
            ctx->lr = 0x8004B1DCu;
            ctx->pc = 0x80043204u;
            return;
    }

label_8004B1DC:
    ctx->pc = 0x8004B1DCu;
    ctx->downcount -= 32;
    // 8004B1DC: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B1E0:
    ctx->pc = 0x8004B1E0u;
    // 8004B1E0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_8004B1E4:
    ctx->pc = 0x8004B1E4u;
    // 8004B1E4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004B1E8:
    ctx->pc = 0x8004B1E8u;
    // 8004B1E8: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B1EC:
    ctx->pc = 0x8004B1ECu;
    // 8004B1EC: lhz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004B1F0:
    ctx->pc = 0x8004B1F0u;
    // 8004B1F0: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004B1F4:
    ctx->pc = 0x8004B1F4u;
    // 8004B1F4: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B1F8:
    ctx->pc = 0x8004B1F8u;
    // 8004B1F8: lfd     f2, 12536(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004B1F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004B1FC:
    ctx->pc = 0x8004B1FCu;
    // 8004B1FC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004B1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004B200:
    ctx->pc = 0x8004B200u;
    // 8004B200: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B204:
    ctx->pc = 0x8004B204u;
    // 8004B204: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004B204u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_8004B208:
    ctx->pc = 0x8004B208u;
    // 8004B208: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B20C:
    ctx->pc = 0x8004B20Cu;
    // 8004B20C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004B20Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004B210:
    ctx->pc = 0x8004B210u;
    // 8004B210: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004B210u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004B214:
    ctx->pc = 0x8004B214u;
    // 8004B214: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004B214u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_8004B218:
    ctx->pc = 0x8004B218u;
    // 8004B218: bl      0x800433E4
    {
            ctx->lr = 0x8004B21Cu;
            ctx->pc = 0x800433E4u;
            return;
    }

label_8004B21C:
    ctx->pc = 0x8004B21Cu;
    ctx->downcount -= 6;
    // 8004B21C: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004B220:
    ctx->pc = 0x8004B220u;
    // 8004B220: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8004B224:
    ctx->pc = 0x8004B224u;
    // 8004B224: lbz     r3, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004B228:
    ctx->pc = 0x8004B228u;
    // 8004B228: addi    r4, r6, 26
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(26);

label_8004B22C:
    ctx->pc = 0x8004B22Cu;
    // 8004B22C: addi    r6, r6, 50
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(50);

label_8004B230:
    ctx->pc = 0x8004B230u;
    // 8004B230: bl      0x80043528
    {
            ctx->lr = 0x8004B234u;
            ctx->pc = 0x80043528u;
            return;
    }

label_8004B234:
    ctx->pc = 0x8004B234u;
    ctx->downcount -= 2;
    // 8004B234: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8004B238:
    ctx->pc = 0x8004B238u;
    // 8004B238: bl      0x8004338C
    {
            ctx->lr = 0x8004B23Cu;
            ctx->pc = 0x8004338Cu;
            return;
    }

label_8004B23C:
    ctx->pc = 0x8004B23Cu;
    ctx->downcount -= 3;
    // 8004B23C: lwz     r3, 6072(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(6072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B240:
    ctx->pc = 0x8004B240u;
    // 8004B240: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B244:
    ctx->pc = 0x8004B244u;
    // 8004B244: bl      0x8004634C
    {
            ctx->lr = 0x8004B248u;
            ctx->pc = 0x8004634Cu;
            return;
    }

label_8004B248:
    ctx->pc = 0x8004B248u;
    ctx->downcount -= 2;
    // 8004B248: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B24C:
    ctx->pc = 0x8004B24Cu;
    // 8004B24C: bl      0x80046420
    {
            ctx->lr = 0x8004B250u;
            ctx->pc = 0x80046420u;
            return;
    }

label_8004B250:
    ctx->pc = 0x8004B250u;
    ctx->downcount -= 6;
    // 8004B250: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B254:
    ctx->pc = 0x8004B254u;
    // 8004B254: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_8004B258:
    ctx->pc = 0x8004B258u;
    // 8004B258: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8004B25C:
    ctx->pc = 0x8004B25Cu;
    // 8004B25C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B260:
    ctx->pc = 0x8004B260u;
    // 8004B260: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004B264:
    ctx->pc = 0x8004B264u;
    // 8004B264: bl      0x800434B0
    {
            ctx->lr = 0x8004B268u;
            ctx->pc = 0x800434B0u;
            return;
    }

label_8004B268:
    ctx->pc = 0x8004B268u;
    ctx->downcount -= 2;
    // 8004B268: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B26C:
    ctx->pc = 0x8004B26Cu;
    // 8004B26C: bl      0x8004628C
    {
            ctx->lr = 0x8004B270u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_8004B270:
    ctx->pc = 0x8004B270u;
    ctx->downcount -= 2;
    // 8004B270: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B274:
    ctx->pc = 0x8004B274u;
    // 8004B274: bl      0x800462B8
    {
            ctx->lr = 0x8004B278u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_8004B278:
    ctx->pc = 0x8004B278u;
    ctx->downcount -= 3;
    // 8004B278: lwz     r3, 5900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B27C:
    ctx->pc = 0x8004B27Cu;
    // 8004B27C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B280:
    ctx->pc = 0x8004B280u;
    // 8004B280: bl      0x80043744
    {
            ctx->lr = 0x8004B284u;
            ctx->pc = 0x80043744u;
            return;
    }

label_8004B284:
    ctx->pc = 0x8004B284u;
    ctx->downcount -= 3;
    // 8004B284: lwz     r3, 5900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B288:
    ctx->pc = 0x8004B288u;
    // 8004B288: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B28C:
    ctx->pc = 0x8004B28Cu;
    // 8004B28C: bl      0x80043744
    {
            ctx->lr = 0x8004B290u;
            ctx->pc = 0x80043744u;
            return;
    }

label_8004B290:
    ctx->pc = 0x8004B290u;
    ctx->downcount -= 3;
    // 8004B290: lwz     r3, 5908(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B294:
    ctx->pc = 0x8004B294u;
    // 8004B294: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B298:
    ctx->pc = 0x8004B298u;
    // 8004B298: bl      0x80043744
    {
            ctx->lr = 0x8004B29Cu;
            ctx->pc = 0x80043744u;
            return;
    }

label_8004B29C:
    ctx->pc = 0x8004B29Cu;
    ctx->downcount -= 4;
    // 8004B29C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B2A0:
    ctx->pc = 0x8004B2A0u;
    // 8004B2A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B2A4:
    ctx->pc = 0x8004B2A4u;
    // 8004B2A4: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8004B2A8:
    ctx->pc = 0x8004B2A8u;
    // 8004B2A8: bl      0x8004B498
    {
            ctx->lr = 0x8004B2ACu;
            goto label_8004B498;
    }

label_8004B2AC:
    ctx->pc = 0x8004B2ACu;
    ctx->downcount -= 4;
    // 8004B2AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B2B0:
    ctx->pc = 0x8004B2B0u;
    // 8004B2B0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B2B4:
    ctx->pc = 0x8004B2B4u;
    // 8004B2B4: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8004B2B8:
    ctx->pc = 0x8004B2B8u;
    // 8004B2B8: bl      0x8004B498
    {
            ctx->lr = 0x8004B2BCu;
            goto label_8004B498;
    }

label_8004B2BC:
    ctx->pc = 0x8004B2BCu;
    ctx->downcount -= 2;
    // 8004B2BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B2C0:
    ctx->pc = 0x8004B2C0u;
    // 8004B2C0: bl      0x8004628C
    {
            ctx->lr = 0x8004B2C4u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_8004B2C4:
    ctx->pc = 0x8004B2C4u;
    ctx->downcount -= 2;
    // 8004B2C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B2C8:
    ctx->pc = 0x8004B2C8u;
    // 8004B2C8: bl      0x800462B8
    {
            ctx->lr = 0x8004B2CCu;
            ctx->pc = 0x800462B8u;
            return;
    }

label_8004B2CC:
    ctx->pc = 0x8004B2CCu;
    ctx->downcount -= 1;
    // 8004B2CC: bl      0x800429C0
    {
            ctx->lr = 0x8004B2D0u;
            ctx->pc = 0x800429C0u;
            return;
    }

label_8004B2D0:
    ctx->pc = 0x8004B2D0u;
    ctx->downcount -= 4;
    // 8004B2D0: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B2D4:
    ctx->pc = 0x8004B2D4u;
    // 8004B2D4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B2D8:
    ctx->pc = 0x8004B2D8u;
    // 8004B2D8: rlwinm. r0, r0, 0, 31, 31
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

label_8004B2DC:
    ctx->pc = 0x8004B2DCu;
    // 8004B2DC: bc    12, 2, 0x8004B2E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B2E4;
        }
    }

label_8004B2E0:
    ctx->pc = 0x8004B2E0u;
    ctx->downcount -= 1;
    // 8004B2E0: bl      0x8002B64C
    {
            ctx->lr = 0x8004B2E4u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004B2E4:
    ctx->pc = 0x8004B2E4u;
    ctx->downcount -= 2;
    // 8004B2E4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8004B2E8:
    ctx->pc = 0x8004B2E8u;
    // 8004B2E8: bl      0x8002EEE4
    {
            ctx->lr = 0x8004B2ECu;
            ctx->pc = 0x8002EEE4u;
            return;
    }

label_8004B2EC:
    ctx->pc = 0x8004B2ECu;
    ctx->downcount -= 1;
    // 8004B2EC: bl      0x8004B394
    {
            ctx->lr = 0x8004B2F0u;
            goto label_8004B394;
    }

label_8004B2F0:
    ctx->pc = 0x8004B2F0u;
    ctx->downcount -= 4;
    // 8004B2F0: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004B2F4:
    ctx->pc = 0x8004B2F4u;
    // 8004B2F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B2F8:
    ctx->pc = 0x8004B2F8u;
    // 8004B2F8: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_8004B2FC:
    ctx->pc = 0x8004B2FCu;
    // 8004B2FC: bl      0x800234B0
    {
            ctx->lr = 0x8004B300u;
            ctx->pc = 0x800234B0u;
            return;
    }

label_8004B300:
    ctx->pc = 0x8004B300u;
    ctx->downcount -= 4;
    // 8004B300: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8004B304:
    ctx->pc = 0x8004B304u;
    // 8004B304: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B308:
    ctx->pc = 0x8004B308u;
    // 8004B308: addi    r3, r3, 76
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(76);

label_8004B30C:
    ctx->pc = 0x8004B30Cu;
    // 8004B30C: bl      0x800234B0
    {
            ctx->lr = 0x8004B310u;
            ctx->pc = 0x800234B0u;
            return;
    }

label_8004B310:
    ctx->pc = 0x8004B310u;
    ctx->downcount -= 3;
    // 8004B310: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004B314:
    ctx->pc = 0x8004B314u;
    // 8004B314: addi    r3, r3, -14884
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14884);

label_8004B318:
    ctx->pc = 0x8004B318u;
    // 8004B318: bl      0x80041194
    {
            ctx->lr = 0x8004B31Cu;
            ctx->pc = 0x80041194u;
            return;
    }

label_8004B31C:
    ctx->pc = 0x8004B31Cu;
    ctx->downcount -= 3;
    // 8004B31C: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004B320:
    ctx->pc = 0x8004B320u;
    // 8004B320: addi    r3, r3, -14592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14592);

label_8004B324:
    ctx->pc = 0x8004B324u;
    // 8004B324: bl      0x80042C54
    {
            ctx->lr = 0x8004B328u;
            ctx->pc = 0x80042C54u;
            return;
    }

label_8004B328:
    ctx->pc = 0x8004B328u;
    ctx->downcount -= 3;
    // 8004B328: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004B32C:
    ctx->pc = 0x8004B32Cu;
    // 8004B32C: addi    r3, r3, -16412
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16412);

label_8004B330:
    ctx->pc = 0x8004B330u;
    // 8004B330: bl      0x8002AE74
    {
            ctx->lr = 0x8004B334u;
            ctx->pc = 0x8002AE74u;
            return;
    }

label_8004B334:
    ctx->pc = 0x8004B334u;
    ctx->downcount -= 3;
    // 8004B334: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004B338:
    ctx->pc = 0x8004B338u;
    // 8004B338: addi    r3, r3, -15760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15760);

label_8004B33C:
    ctx->pc = 0x8004B33Cu;
    // 8004B33C: bl      0x8002AEB8
    {
            ctx->lr = 0x8004B340u;
            ctx->pc = 0x8002AEB8u;
            return;
    }

label_8004B340:
    ctx->pc = 0x8004B340u;
    ctx->downcount -= 12;
    // 8004B340: addi    r26, r31, 0
    ctx->gpr[26] = ctx->gpr[31] + (u32)(s32)(0);

label_8004B344:
    ctx->pc = 0x8004B344u;
    // 8004B344: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004B348:
    ctx->pc = 0x8004B348u;
    // 8004B348: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B34C:
    ctx->pc = 0x8004B34Cu;
    // 8004B34C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004B350:
    ctx->pc = 0x8004B350u;
    // 8004B350: addi    r26, r26, 984
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(984);

label_8004B354:
    ctx->pc = 0x8004B354u;
    // 8004B354: addi    r4, r3, -16680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16680);

label_8004B358:
    ctx->pc = 0x8004B358u;
    // 8004B358: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B35C:
    ctx->pc = 0x8004B35Cu;
    // 8004B35C: li      r7, 4092
    ctx->gpr[7] = (u32)(s32)(4092);

label_8004B360:
    ctx->pc = 0x8004B360u;
    // 8004B360: li      r8, 31
    ctx->gpr[8] = (u32)(s32)(31);

label_8004B364:
    ctx->pc = 0x8004B364u;
    // 8004B364: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8004B368:
    ctx->pc = 0x8004B368u;
    // 8004B368: addi    r6, r6, 5868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(5868);

label_8004B36C:
    ctx->pc = 0x8004B36Cu;
    // 8004B36C: bl      0x80023F70
    {
            ctx->lr = 0x8004B370u;
            ctx->pc = 0x80023F70u;
            return;
    }

label_8004B370:
    ctx->pc = 0x8004B370u;
    ctx->downcount -= 2;
    // 8004B370: cmpwi   r3, 0
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

label_8004B374:
    ctx->pc = 0x8004B374u;
    // 8004B374: bc    12, 2, 0x8004B380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B380;
        }
    }

label_8004B378:
    ctx->pc = 0x8004B378u;
    ctx->downcount -= 2;
    // 8004B378: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004B37C:
    ctx->pc = 0x8004B37Cu;
    // 8004B37C: bl      0x800243F8
    {
            ctx->lr = 0x8004B380u;
            ctx->pc = 0x800243F8u;
            return;
    }

label_8004B380:
    ctx->pc = 0x8004B380u;
    ctx->downcount -= 16;
    // 8004B380: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004B384:
    ctx->pc = 0x8004B384u;
    // 8004B384: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B388:
    ctx->pc = 0x8004B388u;
    // 8004B388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B38C:
    ctx->pc = 0x8004B38Cu;
    // 8004B38C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8004B390:
    ctx->pc = 0x8004B390u;
    // 8004B390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B394:
    ctx->pc = 0x8004B394u;
    ctx->downcount -= 6;
    // 8004B394: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B398:
    ctx->pc = 0x8004B398u;
    // 8004B398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B39C:
    ctx->pc = 0x8004B39Cu;
    // 8004B39C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B3A0:
    ctx->pc = 0x8004B3A0u;
    // 8004B3A0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004B3A4:
    ctx->pc = 0x8004B3A4u;
    // 8004B3A4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004B3A8:
    ctx->pc = 0x8004B3A8u;
    // 8004B3A8: bl      0x80042974
    {
            ctx->lr = 0x8004B3ACu;
            ctx->pc = 0x80042974u;
            return;
    }

label_8004B3AC:
    ctx->pc = 0x8004B3ACu;
    ctx->downcount -= 7;
    // 8004B3AC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B3B0:
    ctx->pc = 0x8004B3B0u;
    // 8004B3B0: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B3B4:
    ctx->pc = 0x8004B3B4u;
    // 8004B3B4: lwz     r0, 6108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B3B8:
    ctx->pc = 0x8004B3B8u;
    // 8004B3B8: addi    r30, r31, 6124
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(6124);

label_8004B3BC:
    ctx->pc = 0x8004B3BCu;
    // 8004B3BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004B3C0:
    ctx->pc = 0x8004B3C0u;
    // 8004B3C0: lwzx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B3C4:
    ctx->pc = 0x8004B3C4u;
    // 8004B3C4: bl      0x80040D10
    {
            ctx->lr = 0x8004B3C8u;
            ctx->pc = 0x80040D10u;
            return;
    }

label_8004B3C8:
    ctx->pc = 0x8004B3C8u;
    ctx->downcount -= 4;
    // 8004B3C8: lwz     r0, 6108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B3CC:
    ctx->pc = 0x8004B3CCu;
    // 8004B3CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004B3D0:
    ctx->pc = 0x8004B3D0u;
    // 8004B3D0: lwzx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B3D4:
    ctx->pc = 0x8004B3D4u;
    // 8004B3D4: bl      0x80040E38
    {
            ctx->lr = 0x8004B3D8u;
            ctx->pc = 0x80040E38u;
            return;
    }

label_8004B3D8:
    ctx->pc = 0x8004B3D8u;
    ctx->downcount -= 7;
    // 8004B3D8: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004B3DC:
    ctx->pc = 0x8004B3DCu;
    // 8004B3DC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8004B3E0:
    ctx->pc = 0x8004B3E0u;
    // 8004B3E0: addi    r6, r4, -6800
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-6800);

label_8004B3E4:
    ctx->pc = 0x8004B3E4u;
    // 8004B3E4: li      r5, 465
    ctx->gpr[5] = (u32)(s32)(465);

label_8004B3E8:
    ctx->pc = 0x8004B3E8u;
    // 8004B3E8: addi    r4, r3, 28552
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28552);

label_8004B3EC:
    ctx->pc = 0x8004B3ECu;
    // 8004B3EC: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B3F0:
    ctx->pc = 0x8004B3F0u;
    // 8004B3F0: bl      0x8004DDC0
    {
            ctx->lr = 0x8004B3F4u;
            ctx->pc = 0x8004DDC0u;
            return;
    }

label_8004B3F4:
    ctx->pc = 0x8004B3F4u;
    ctx->downcount -= 1;
    // 8004B3F4: bl      0x800414D8
    {
            ctx->lr = 0x8004B3F8u;
            ctx->pc = 0x800414D8u;
            return;
    }

label_8004B3F8:
    ctx->pc = 0x8004B3F8u;
    ctx->downcount -= 3;
    // 8004B3F8: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8004B3FC:
    ctx->pc = 0x8004B3FCu;
    // 8004B3FC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8004B400:
    ctx->pc = 0x8004B400u;
    // 8004B400: bl      0x800410FC
    {
            ctx->lr = 0x8004B404u;
            ctx->pc = 0x800410FCu;
            return;
    }

label_8004B404:
    ctx->pc = 0x8004B404u;
    ctx->downcount -= 2;
    // 8004B404: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004B408:
    ctx->pc = 0x8004B408u;
    // 8004B408: bl      0x800411D8
    {
            ctx->lr = 0x8004B40Cu;
            ctx->pc = 0x800411D8u;
            return;
    }

label_8004B40C:
    ctx->pc = 0x8004B40Cu;
    ctx->downcount -= 10;
    // 8004B40C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B410:
    ctx->pc = 0x8004B410u;
    // 8004B410: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B414:
    ctx->pc = 0x8004B414u;
    // 8004B414: addi    r5, r3, -17080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B418:
    ctx->pc = 0x8004B418u;
    // 8004B418: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B41C:
    ctx->pc = 0x8004B41Cu;
    // 8004B41C: stw     r3, 188(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B420:
    ctx->pc = 0x8004B420u;
    // 8004B420: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B424:
    ctx->pc = 0x8004B424u;
    // 8004B424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B428:
    ctx->pc = 0x8004B428u;
    // 8004B428: stw     r0, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B42C:
    ctx->pc = 0x8004B42Cu;
    // 8004B42C: stw     r0, 6120(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B430:
    ctx->pc = 0x8004B430u;
    // 8004B430: bl      0x800424DC
    {
            ctx->lr = 0x8004B434u;
            ctx->pc = 0x800424DCu;
            return;
    }

label_8004B434:
    ctx->pc = 0x8004B434u;
    ctx->downcount -= 7;
    // 8004B434: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B438:
    ctx->pc = 0x8004B438u;
    // 8004B438: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004B43C:
    ctx->pc = 0x8004B43Cu;
    // 8004B43C: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004B440:
    ctx->pc = 0x8004B440u;
    // 8004B440: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B444:
    ctx->pc = 0x8004B444u;
    // 8004B444: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004B448:
    ctx->pc = 0x8004B448u;
    // 8004B448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B44C:
    ctx->pc = 0x8004B44Cu;
    ctx->downcount -= 5;
    // 8004B44C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B450:
    ctx->pc = 0x8004B450u;
    // 8004B450: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004B454:
    ctx->pc = 0x8004B454u;
    // 8004B454: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B458:
    ctx->pc = 0x8004B458u;
    // 8004B458: stw     r0, 10264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B45C:
    ctx->pc = 0x8004B45Cu;
    // 8004B45C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B460:
    ctx->pc = 0x8004B460u;
    ctx->downcount -= 4;
    // 8004B460: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B464:
    ctx->pc = 0x8004B464u;
    // 8004B464: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B468:
    ctx->pc = 0x8004B468u;
    // 8004B468: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B46C:
    ctx->pc = 0x8004B46Cu;
    // 8004B46C: bl      0x80044BC8
    {
            ctx->lr = 0x8004B470u;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_8004B470:
    ctx->pc = 0x8004B470u;
    ctx->downcount -= 6;
    // 8004B470: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B474:
    ctx->pc = 0x8004B474u;
    // 8004B474: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B478:
    ctx->pc = 0x8004B478u;
    // 8004B478: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B47C:
    ctx->pc = 0x8004B47Cu;
    // 8004B47C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8004B480:
    ctx->pc = 0x8004B480u;
    // 8004B480: addi    r3, r3, 6008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6008);

label_8004B484:
    ctx->pc = 0x8004B484u;
    // 8004B484: bl      0x800050B4
    {
            ctx->lr = 0x8004B488u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004B488:
    ctx->pc = 0x8004B488u;
    ctx->downcount -= 5;
    // 8004B488: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B48C:
    ctx->pc = 0x8004B48Cu;
    // 8004B48C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B490:
    ctx->pc = 0x8004B490u;
    // 8004B490: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004B494:
    ctx->pc = 0x8004B494u;
    // 8004B494: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B498:
    ctx->pc = 0x8004B498u;
    ctx->downcount -= 10;
    // 8004B498: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B49C:
    ctx->pc = 0x8004B49Cu;
    // 8004B49C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B4A0:
    ctx->pc = 0x8004B4A0u;
    // 8004B4A0: cmpwi   r4, 4
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

label_8004B4A4:
    ctx->pc = 0x8004B4A4u;
    // 8004B4A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B4A8:
    ctx->pc = 0x8004B4A8u;
    // 8004B4A8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004B4AC:
    ctx->pc = 0x8004B4ACu;
    // 8004B4AC: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004B4B0:
    ctx->pc = 0x8004B4B0u;
    // 8004B4B0: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004B4B4:
    ctx->pc = 0x8004B4B4u;
    // 8004B4B4: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B4B8:
    ctx->pc = 0x8004B4B8u;
    // 8004B4B8: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004B4BC:
    ctx->pc = 0x8004B4BCu;
    // 8004B4BC: bc    4, 2, 0x8004B510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B510;
        }
    }

label_8004B4C0:
    ctx->pc = 0x8004B4C0u;
    ctx->downcount -= 6;
    // 8004B4C0: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004B4C4:
    ctx->pc = 0x8004B4C4u;
    // 8004B4C4: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_8004B4C8:
    ctx->pc = 0x8004B4C8u;
    // 8004B4C8: addi    r0, r4, -17080
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004B4CC:
    ctx->pc = 0x8004B4CCu;
    // 8004B4CC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8004B4D0:
    ctx->pc = 0x8004B4D0u;
    // 8004B4D0: add   r30, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8004B4D4:
    ctx->pc = 0x8004B4D4u;
    // 8004B4D4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8004B4D8:
    ctx->downcount -= 3;
    // 8004B4D8: cmpwi   r28, -1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004B4DC:
    ctx->pc = 0x8004B4DCu;
    // 8004B4DC: stw     r28, 5912(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5912);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B4E0:
    // 8004B4E0: bc    12, 2, 0x8004B4FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B4FC;
        }
    }

label_8004B4E4:
    ctx->pc = 0x8004B4E4u;
    ctx->downcount -= 3;
    // 8004B4E4: lwz     r0, 6008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B4E8:
    // 8004B4E8: cmpwi   r0, 0
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

label_8004B4EC:
    // 8004B4EC: bc    12, 2, 0x8004B4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B4F8;
        }
    }

label_8004B4F0:
    ctx->downcount -= 1;
    // 8004B4F0: bl      0x8004B460
    {
            ctx->lr = 0x8004B4F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B460u;
                return;
            }
            goto label_8004B460;
    }

label_8004B4F4:
    ctx->downcount -= 1;
    // 8004B4F4: b       0x8004B4FC
    {
            goto label_8004B4FC;
    }

label_8004B4F8:
    ctx->pc = 0x8004B4F8u;
    ctx->downcount -= 1;
    // 8004B4F8: stw     r31, 6008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6008);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004B4FC:
    ctx->downcount -= 4;
    // 8004B4FC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8004B500:
    // 8004B500: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8004B504:
    // 8004B504: cmpwi   r29, 4
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

label_8004B508:
    // 8004B508: bc    12, 0, 0x8004B4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B4D8u;
                return;
            }
            goto label_8004B4D8;
        }
    }

label_8004B50C:
    ctx->pc = 0x8004B50Cu;
    ctx->downcount -= 1;
    // 8004B50C: b       0x8004B568
    {
            goto label_8004B568;
    }

label_8004B510:
    ctx->pc = 0x8004B510u;
    ctx->downcount -= 9;
    // 8004B510: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004B514:
    ctx->pc = 0x8004B514u;
    // 8004B514: rlwinm r6, r3, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_8004B518:
    ctx->pc = 0x8004B518u;
    // 8004B518: addi    r0, r5, -17080
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004B51C:
    ctx->pc = 0x8004B51Cu;
    // 8004B51C: rlwinm r3, r4, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8004B520:
    ctx->pc = 0x8004B520u;
    // 8004B520: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004B524:
    ctx->pc = 0x8004B524u;
    // 8004B524: cmpwi   r28, -1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004B528:
    ctx->pc = 0x8004B528u;
    // 8004B528: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004B52C:
    ctx->pc = 0x8004B52Cu;
    // 8004B52C: stw     r28, 5912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5912);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B530:
    ctx->pc = 0x8004B530u;
    // 8004B530: bc    12, 2, 0x8004B568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B568;
        }
    }

label_8004B534:
    ctx->pc = 0x8004B534u;
    ctx->downcount -= 3;
    // 8004B534: lwzu     r0, 6008(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6008);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_8004B538:
    ctx->pc = 0x8004B538u;
    // 8004B538: cmpwi   r0, 0
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

label_8004B53C:
    ctx->pc = 0x8004B53Cu;
    // 8004B53C: bc    12, 2, 0x8004B560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B560;
        }
    }

label_8004B540:
    ctx->pc = 0x8004B540u;
    ctx->downcount -= 1;
    // 8004B540: bl      0x80044BC8
    {
            ctx->lr = 0x8004B544u;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_8004B544:
    ctx->pc = 0x8004B544u;
    ctx->downcount -= 6;
    // 8004B544: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B548:
    ctx->pc = 0x8004B548u;
    // 8004B548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B54C:
    ctx->pc = 0x8004B54Cu;
    // 8004B54C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B550:
    ctx->pc = 0x8004B550u;
    // 8004B550: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8004B554:
    ctx->pc = 0x8004B554u;
    // 8004B554: addi    r3, r3, 6008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6008);

label_8004B558:
    ctx->pc = 0x8004B558u;
    // 8004B558: bl      0x800050B4
    {
            ctx->lr = 0x8004B55Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004B55C:
    ctx->pc = 0x8004B55Cu;
    ctx->downcount -= 1;
    // 8004B55C: b       0x8004B568
    {
            goto label_8004B568;
    }

label_8004B560:
    ctx->pc = 0x8004B560u;
    ctx->downcount -= 2;
    // 8004B560: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004B564:
    ctx->pc = 0x8004B564u;
    // 8004B564: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B568:
    ctx->pc = 0x8004B568u;
    ctx->downcount -= 9;
    // 8004B568: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B56C:
    ctx->pc = 0x8004B56Cu;
    // 8004B56C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004B570:
    ctx->pc = 0x8004B570u;
    // 8004B570: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004B574:
    ctx->pc = 0x8004B574u;
    // 8004B574: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004B578:
    ctx->pc = 0x8004B578u;
    // 8004B578: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004B57C:
    ctx->pc = 0x8004B57Cu;
    // 8004B57C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B580:
    ctx->pc = 0x8004B580u;
    // 8004B580: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004B584:
    ctx->pc = 0x8004B584u;
    // 8004B584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B588:
    ctx->pc = 0x8004B588u;
    ctx->downcount -= 11;
    // 8004B588: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B58C:
    ctx->pc = 0x8004B58Cu;
    // 8004B58C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B590:
    ctx->pc = 0x8004B590u;
    // 8004B590: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004B594:
    ctx->pc = 0x8004B594u;
    // 8004B594: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B598:
    ctx->pc = 0x8004B598u;
    // 8004B598: addi    r5, r5, -17080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004B59C:
    ctx->pc = 0x8004B59Cu;
    // 8004B59C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004B5A0:
    ctx->pc = 0x8004B5A0u;
    // 8004B5A0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004B5A4:
    ctx->pc = 0x8004B5A4u;
    // 8004B5A4: lwz     r4, 6056(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6056);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B5A8:
    ctx->pc = 0x8004B5A8u;
    // 8004B5A8: lwz     r0, 5900(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B5AC:
    ctx->pc = 0x8004B5ACu;
    // 8004B5AC: cmplw   r4, r0
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

label_8004B5B0:
    ctx->pc = 0x8004B5B0u;
    // 8004B5B0: bc    4, 2, 0x8004B694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B694;
        }
    }

label_8004B5B4:
    ctx->pc = 0x8004B5B4u;
    ctx->downcount -= 2;
    // 8004B5B4: cmpwi   r3, 2
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

label_8004B5B8:
    ctx->pc = 0x8004B5B8u;
    // 8004B5B8: bc    12, 2, 0x8004B64C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B64C;
        }
    }

label_8004B5BC:
    ctx->pc = 0x8004B5BCu;
    ctx->downcount -= 1;
    // 8004B5BC: bc    4, 0, 0x8004B5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B5D0;
        }
    }

label_8004B5C0:
    ctx->pc = 0x8004B5C0u;
    ctx->downcount -= 2;
    // 8004B5C0: cmpwi   r3, 0
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

label_8004B5C4:
    ctx->pc = 0x8004B5C4u;
    // 8004B5C4: bc    12, 2, 0x8004B604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B604;
        }
    }

label_8004B5C8:
    ctx->pc = 0x8004B5C8u;
    ctx->downcount -= 1;
    // 8004B5C8: bc    4, 0, 0x8004B628
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B628;
        }
    }

label_8004B5CC:
    ctx->pc = 0x8004B5CCu;
    ctx->downcount -= 1;
    // 8004B5CC: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B5D0:
    ctx->pc = 0x8004B5D0u;
    ctx->downcount -= 2;
    // 8004B5D0: cmpwi   r3, 4
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

label_8004B5D4:
    ctx->pc = 0x8004B5D4u;
    // 8004B5D4: bc    12, 2, 0x8004B5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B5E0;
        }
    }

label_8004B5D8:
    ctx->pc = 0x8004B5D8u;
    ctx->downcount -= 1;
    // 8004B5D8: bc    4, 0, 0x8004B770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B770;
        }
    }

label_8004B5DC:
    ctx->pc = 0x8004B5DCu;
    ctx->downcount -= 1;
    // 8004B5DC: b       0x8004B670
    {
            goto label_8004B670;
    }

label_8004B5E0:
    ctx->pc = 0x8004B5E0u;
    ctx->downcount -= 4;
    // 8004B5E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B5E4:
    ctx->pc = 0x8004B5E4u;
    // 8004B5E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B5E8:
    ctx->pc = 0x8004B5E8u;
    // 8004B5E8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B5EC:
    ctx->pc = 0x8004B5ECu;
    // 8004B5EC: bl      0x8004B498
    {
            ctx->lr = 0x8004B5F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B5F0:
    ctx->pc = 0x8004B5F0u;
    ctx->downcount -= 4;
    // 8004B5F0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B5F4:
    ctx->pc = 0x8004B5F4u;
    // 8004B5F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B5F8:
    ctx->pc = 0x8004B5F8u;
    // 8004B5F8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B5FC:
    ctx->pc = 0x8004B5FCu;
    // 8004B5FC: bl      0x8004B498
    {
            ctx->lr = 0x8004B600u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B600:
    ctx->pc = 0x8004B600u;
    ctx->downcount -= 1;
    // 8004B600: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B604:
    ctx->pc = 0x8004B604u;
    ctx->downcount -= 4;
    // 8004B604: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B608:
    ctx->pc = 0x8004B608u;
    // 8004B608: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B60C:
    ctx->pc = 0x8004B60Cu;
    // 8004B60C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B610:
    ctx->pc = 0x8004B610u;
    // 8004B610: bl      0x8004B498
    {
            ctx->lr = 0x8004B614u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B614:
    ctx->pc = 0x8004B614u;
    ctx->downcount -= 4;
    // 8004B614: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B618:
    ctx->pc = 0x8004B618u;
    // 8004B618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B61C:
    ctx->pc = 0x8004B61Cu;
    // 8004B61C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B620:
    ctx->pc = 0x8004B620u;
    // 8004B620: bl      0x8004B498
    {
            ctx->lr = 0x8004B624u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B624:
    ctx->pc = 0x8004B624u;
    ctx->downcount -= 1;
    // 8004B624: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B628:
    ctx->pc = 0x8004B628u;
    ctx->downcount -= 4;
    // 8004B628: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B62C:
    ctx->pc = 0x8004B62Cu;
    // 8004B62C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B630:
    ctx->pc = 0x8004B630u;
    // 8004B630: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B634:
    ctx->pc = 0x8004B634u;
    // 8004B634: bl      0x8004B498
    {
            ctx->lr = 0x8004B638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B638:
    ctx->pc = 0x8004B638u;
    ctx->downcount -= 4;
    // 8004B638: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B63C:
    ctx->pc = 0x8004B63Cu;
    // 8004B63C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B640:
    ctx->pc = 0x8004B640u;
    // 8004B640: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8004B644:
    ctx->pc = 0x8004B644u;
    // 8004B644: bl      0x8004B498
    {
            ctx->lr = 0x8004B648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B648:
    ctx->pc = 0x8004B648u;
    ctx->downcount -= 1;
    // 8004B648: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B64C:
    ctx->pc = 0x8004B64Cu;
    ctx->downcount -= 4;
    // 8004B64C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B650:
    ctx->pc = 0x8004B650u;
    // 8004B650: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B654:
    ctx->pc = 0x8004B654u;
    // 8004B654: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B658:
    ctx->pc = 0x8004B658u;
    // 8004B658: bl      0x8004B498
    {
            ctx->lr = 0x8004B65Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B65C:
    ctx->pc = 0x8004B65Cu;
    ctx->downcount -= 4;
    // 8004B65C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B660:
    ctx->pc = 0x8004B660u;
    // 8004B660: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B664:
    ctx->pc = 0x8004B664u;
    // 8004B664: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B668:
    ctx->pc = 0x8004B668u;
    // 8004B668: bl      0x8004B498
    {
            ctx->lr = 0x8004B66Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B66C:
    ctx->pc = 0x8004B66Cu;
    ctx->downcount -= 1;
    // 8004B66C: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B670:
    ctx->pc = 0x8004B670u;
    ctx->downcount -= 4;
    // 8004B670: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B674:
    ctx->pc = 0x8004B674u;
    // 8004B674: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B678:
    ctx->pc = 0x8004B678u;
    // 8004B678: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8004B67C:
    ctx->pc = 0x8004B67Cu;
    // 8004B67C: bl      0x8004B498
    {
            ctx->lr = 0x8004B680u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B680:
    ctx->pc = 0x8004B680u;
    ctx->downcount -= 4;
    // 8004B680: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B684:
    ctx->pc = 0x8004B684u;
    // 8004B684: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B688:
    ctx->pc = 0x8004B688u;
    // 8004B688: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8004B68C:
    ctx->pc = 0x8004B68Cu;
    // 8004B68C: bl      0x8004B498
    {
            ctx->lr = 0x8004B690u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B690:
    ctx->pc = 0x8004B690u;
    ctx->downcount -= 1;
    // 8004B690: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B694:
    ctx->pc = 0x8004B694u;
    ctx->downcount -= 2;
    // 8004B694: cmpwi   r3, 2
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

label_8004B698:
    ctx->pc = 0x8004B698u;
    // 8004B698: bc    12, 2, 0x8004B72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B72C;
        }
    }

label_8004B69C:
    ctx->pc = 0x8004B69Cu;
    ctx->downcount -= 1;
    // 8004B69C: bc    4, 0, 0x8004B6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B6B0;
        }
    }

label_8004B6A0:
    ctx->pc = 0x8004B6A0u;
    ctx->downcount -= 2;
    // 8004B6A0: cmpwi   r3, 0
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

label_8004B6A4:
    ctx->pc = 0x8004B6A4u;
    // 8004B6A4: bc    12, 2, 0x8004B6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B6E4;
        }
    }

label_8004B6A8:
    ctx->pc = 0x8004B6A8u;
    ctx->downcount -= 1;
    // 8004B6A8: bc    4, 0, 0x8004B708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B708;
        }
    }

label_8004B6AC:
    ctx->pc = 0x8004B6ACu;
    ctx->downcount -= 1;
    // 8004B6AC: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B6B0:
    ctx->pc = 0x8004B6B0u;
    ctx->downcount -= 2;
    // 8004B6B0: cmpwi   r3, 4
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

label_8004B6B4:
    ctx->pc = 0x8004B6B4u;
    // 8004B6B4: bc    12, 2, 0x8004B6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B6C0;
        }
    }

label_8004B6B8:
    ctx->pc = 0x8004B6B8u;
    ctx->downcount -= 1;
    // 8004B6B8: bc    4, 0, 0x8004B770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B770;
        }
    }

label_8004B6BC:
    ctx->pc = 0x8004B6BCu;
    ctx->downcount -= 1;
    // 8004B6BC: b       0x8004B750
    {
            goto label_8004B750;
    }

label_8004B6C0:
    ctx->pc = 0x8004B6C0u;
    ctx->downcount -= 4;
    // 8004B6C0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B6C4:
    ctx->pc = 0x8004B6C4u;
    // 8004B6C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B6C8:
    ctx->pc = 0x8004B6C8u;
    // 8004B6C8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B6CC:
    ctx->pc = 0x8004B6CCu;
    // 8004B6CC: bl      0x8004B498
    {
            ctx->lr = 0x8004B6D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B6D0:
    ctx->pc = 0x8004B6D0u;
    ctx->downcount -= 4;
    // 8004B6D0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B6D4:
    ctx->pc = 0x8004B6D4u;
    // 8004B6D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B6D8:
    ctx->pc = 0x8004B6D8u;
    // 8004B6D8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004B6DC:
    ctx->pc = 0x8004B6DCu;
    // 8004B6DC: bl      0x8004B498
    {
            ctx->lr = 0x8004B6E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B6E0:
    ctx->pc = 0x8004B6E0u;
    ctx->downcount -= 1;
    // 8004B6E0: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B6E4:
    ctx->pc = 0x8004B6E4u;
    ctx->downcount -= 4;
    // 8004B6E4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B6E8:
    ctx->pc = 0x8004B6E8u;
    // 8004B6E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B6EC:
    ctx->pc = 0x8004B6ECu;
    // 8004B6EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B6F0:
    ctx->pc = 0x8004B6F0u;
    // 8004B6F0: bl      0x8004B498
    {
            ctx->lr = 0x8004B6F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B6F4:
    ctx->pc = 0x8004B6F4u;
    ctx->downcount -= 4;
    // 8004B6F4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B6F8:
    ctx->pc = 0x8004B6F8u;
    // 8004B6F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B6FC:
    ctx->pc = 0x8004B6FCu;
    // 8004B6FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B700:
    ctx->pc = 0x8004B700u;
    // 8004B700: bl      0x8004B498
    {
            ctx->lr = 0x8004B704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B704:
    ctx->pc = 0x8004B704u;
    ctx->downcount -= 1;
    // 8004B704: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B708:
    ctx->pc = 0x8004B708u;
    ctx->downcount -= 4;
    // 8004B708: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B70C:
    ctx->pc = 0x8004B70Cu;
    // 8004B70C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B710:
    ctx->pc = 0x8004B710u;
    // 8004B710: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B714:
    ctx->pc = 0x8004B714u;
    // 8004B714: bl      0x8004B498
    {
            ctx->lr = 0x8004B718u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B718:
    ctx->pc = 0x8004B718u;
    ctx->downcount -= 4;
    // 8004B718: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B71C:
    ctx->pc = 0x8004B71Cu;
    // 8004B71C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B720:
    ctx->pc = 0x8004B720u;
    // 8004B720: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8004B724:
    ctx->pc = 0x8004B724u;
    // 8004B724: bl      0x8004B498
    {
            ctx->lr = 0x8004B728u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B728:
    ctx->pc = 0x8004B728u;
    ctx->downcount -= 1;
    // 8004B728: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B72C:
    ctx->pc = 0x8004B72Cu;
    ctx->downcount -= 4;
    // 8004B72C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B730:
    ctx->pc = 0x8004B730u;
    // 8004B730: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B734:
    ctx->pc = 0x8004B734u;
    // 8004B734: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004B738:
    ctx->pc = 0x8004B738u;
    // 8004B738: bl      0x8004B498
    {
            ctx->lr = 0x8004B73Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B73C:
    ctx->pc = 0x8004B73Cu;
    ctx->downcount -= 4;
    // 8004B73C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B740:
    ctx->pc = 0x8004B740u;
    // 8004B740: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B744:
    ctx->pc = 0x8004B744u;
    // 8004B744: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004B748:
    ctx->pc = 0x8004B748u;
    // 8004B748: bl      0x8004B498
    {
            ctx->lr = 0x8004B74Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B74C:
    ctx->pc = 0x8004B74Cu;
    ctx->downcount -= 1;
    // 8004B74C: b       0x8004B770
    {
            goto label_8004B770;
    }

label_8004B750:
    ctx->pc = 0x8004B750u;
    ctx->downcount -= 4;
    // 8004B750: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B754:
    ctx->pc = 0x8004B754u;
    // 8004B754: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B758:
    ctx->pc = 0x8004B758u;
    // 8004B758: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8004B75C:
    ctx->pc = 0x8004B75Cu;
    // 8004B75C: bl      0x8004B498
    {
            ctx->lr = 0x8004B760u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B760:
    ctx->pc = 0x8004B760u;
    ctx->downcount -= 4;
    // 8004B760: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004B764:
    ctx->pc = 0x8004B764u;
    // 8004B764: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B768:
    ctx->pc = 0x8004B768u;
    // 8004B768: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8004B76C:
    ctx->pc = 0x8004B76Cu;
    // 8004B76C: bl      0x8004B498
    {
            ctx->lr = 0x8004B770u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B770:
    ctx->pc = 0x8004B770u;
    ctx->downcount -= 6;
    // 8004B770: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B774:
    ctx->pc = 0x8004B774u;
    // 8004B774: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004B778:
    ctx->pc = 0x8004B778u;
    // 8004B778: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B77C:
    ctx->pc = 0x8004B77Cu;
    // 8004B77C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004B780:
    ctx->pc = 0x8004B780u;
    // 8004B780: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B784:
    ctx->pc = 0x8004B784u;
    ctx->downcount -= 10;
    // 8004B784: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B788:
    ctx->pc = 0x8004B788u;
    // 8004B788: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B78C:
    ctx->pc = 0x8004B78Cu;
    // 8004B78C: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004B790:
    ctx->pc = 0x8004B790u;
    // 8004B790: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B794:
    ctx->pc = 0x8004B794u;
    // 8004B794: addi    r6, r5, -17080
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004B798:
    ctx->pc = 0x8004B798u;
    // 8004B798: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004B79C:
    ctx->pc = 0x8004B79Cu;
    // 8004B79C: lwz     r4, 6056(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6056);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B7A0:
    ctx->pc = 0x8004B7A0u;
    // 8004B7A0: lwz     r0, 5900(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B7A4:
    ctx->pc = 0x8004B7A4u;
    // 8004B7A4: cmplw   r4, r0
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

label_8004B7A8:
    ctx->pc = 0x8004B7A8u;
    // 8004B7A8: bc    4, 2, 0x8004B7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B7BC;
        }
    }

label_8004B7AC:
    ctx->pc = 0x8004B7ACu;
    ctx->downcount -= 3;
    // 8004B7AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B7B0:
    ctx->pc = 0x8004B7B0u;
    // 8004B7B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B7B4:
    ctx->pc = 0x8004B7B4u;
    // 8004B7B4: bl      0x8004B498
    {
            ctx->lr = 0x8004B7B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B7B8:
    ctx->pc = 0x8004B7B8u;
    ctx->downcount -= 1;
    // 8004B7B8: b       0x8004B7C8
    {
            goto label_8004B7C8;
    }

label_8004B7BC:
    ctx->pc = 0x8004B7BCu;
    ctx->downcount -= 3;
    // 8004B7BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B7C0:
    ctx->pc = 0x8004B7C0u;
    // 8004B7C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004B7C4:
    ctx->pc = 0x8004B7C4u;
    // 8004B7C4: bl      0x8004B498
    {
            ctx->lr = 0x8004B7C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B7C8:
    ctx->pc = 0x8004B7C8u;
    ctx->downcount -= 5;
    // 8004B7C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B7CC:
    ctx->pc = 0x8004B7CCu;
    // 8004B7CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B7D0:
    ctx->pc = 0x8004B7D0u;
    // 8004B7D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004B7D4:
    ctx->pc = 0x8004B7D4u;
    // 8004B7D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B7D8:
    ctx->pc = 0x8004B7D8u;
    ctx->downcount -= 7;
    // 8004B7D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B7DC:
    ctx->pc = 0x8004B7DCu;
    // 8004B7DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B7E0:
    ctx->pc = 0x8004B7E0u;
    // 8004B7E0: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004B7E4:
    ctx->pc = 0x8004B7E4u;
    // 8004B7E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B7E8:
    ctx->pc = 0x8004B7E8u;
    // 8004B7E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B7EC:
    ctx->pc = 0x8004B7ECu;
    // 8004B7EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B7F0:
    ctx->pc = 0x8004B7F0u;
    // 8004B7F0: bl      0x8004B498
    {
            ctx->lr = 0x8004B7F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B498u;
                return;
            }
            goto label_8004B498;
    }

label_8004B7F4:
    ctx->pc = 0x8004B7F4u;
    ctx->downcount -= 5;
    // 8004B7F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B7F8:
    ctx->pc = 0x8004B7F8u;
    // 8004B7F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B7FC:
    ctx->pc = 0x8004B7FCu;
    // 8004B7FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004B800:
    ctx->pc = 0x8004B800u;
    // 8004B800: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B804:
    ctx->pc = 0x8004B804u;
    ctx->downcount -= 2;
    // 8004B804: cmpwi   r4, 4
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

label_8004B808:
    ctx->pc = 0x8004B808u;
    // 8004B808: bc    4, 2, 0x8004B830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B830;
        }
    }

label_8004B80C:
    ctx->pc = 0x8004B80Cu;
    ctx->downcount -= 9;
    // 8004B80C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004B810:
    ctx->pc = 0x8004B810u;
    // 8004B810: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_8004B814:
    ctx->pc = 0x8004B814u;
    // 8004B814: addi    r0, r4, -17080
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004B818:
    ctx->pc = 0x8004B818u;
    // 8004B818: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004B81C:
    ctx->pc = 0x8004B81Cu;
    // 8004B81C: stw     r5, 5960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5960);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B820:
    ctx->pc = 0x8004B820u;
    // 8004B820: stw     r5, 5964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5964);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B824:
    ctx->pc = 0x8004B824u;
    // 8004B824: stw     r5, 5968(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5968);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B828:
    ctx->pc = 0x8004B828u;
    // 8004B828: stw     r5, 5972(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5972);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B82C:
    ctx->pc = 0x8004B82Cu;
    // 8004B82C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B830:
    ctx->pc = 0x8004B830u;
    ctx->downcount -= 8;
    // 8004B830: lis     r6, -32735
    ctx->gpr[6] = ((u32)(s32)(-32735) << 16);

label_8004B834:
    ctx->pc = 0x8004B834u;
    // 8004B834: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_8004B838:
    ctx->pc = 0x8004B838u;
    // 8004B838: addi    r6, r6, -17080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17080);

label_8004B83C:
    ctx->pc = 0x8004B83Cu;
    // 8004B83C: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8004B840:
    ctx->pc = 0x8004B840u;
    // 8004B840: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004B844:
    ctx->pc = 0x8004B844u;
    // 8004B844: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004B848:
    ctx->pc = 0x8004B848u;
    // 8004B848: stw     r5, 5960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5960);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004B84C:
    ctx->pc = 0x8004B84Cu;
    // 8004B84C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B850:
    ctx->pc = 0x8004B850u;
    ctx->downcount -= 7;
    // 8004B850: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B854:
    ctx->pc = 0x8004B854u;
    // 8004B854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B858:
    ctx->pc = 0x8004B858u;
    // 8004B858: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004B85C:
    ctx->pc = 0x8004B85Cu;
    // 8004B85C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B860:
    ctx->pc = 0x8004B860u;
    // 8004B860: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B864:
    ctx->pc = 0x8004B864u;
    // 8004B864: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B868:
    ctx->pc = 0x8004B868u;
    // 8004B868: bl      0x8004B804
    {
            ctx->lr = 0x8004B86Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B804u;
                return;
            }
            goto label_8004B804;
    }

label_8004B86C:
    ctx->pc = 0x8004B86Cu;
    ctx->downcount -= 5;
    // 8004B86C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B870:
    ctx->pc = 0x8004B870u;
    // 8004B870: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004B874:
    ctx->pc = 0x8004B874u;
    // 8004B874: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004B878:
    ctx->pc = 0x8004B878u;
    // 8004B878: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B87C:
    ctx->pc = 0x8004B87Cu;
    ctx->downcount -= 6;
    // 8004B87C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B880:
    ctx->pc = 0x8004B880u;
    // 8004B880: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B884:
    ctx->pc = 0x8004B884u;
    // 8004B884: lwz     r0, 6056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B888:
    ctx->pc = 0x8004B888u;
    // 8004B888: lwz     r4, 5900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5900);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B88C:
    ctx->pc = 0x8004B88Cu;
    // 8004B88C: cmplw   r0, r4
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004B890:
    ctx->pc = 0x8004B890u;
    // 8004B890: bc    4, 2, 0x8004B8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B8A0;
        }
    }

label_8004B894:
    ctx->pc = 0x8004B894u;
    ctx->downcount -= 3;
    // 8004B894: lwz     r0, 5908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5908);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B898:
    ctx->pc = 0x8004B898u;
    // 8004B898: stw     r0, 6056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B89C:
    ctx->pc = 0x8004B89Cu;
    // 8004B89C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B8A0:
    ctx->pc = 0x8004B8A0u;
    ctx->downcount -= 2;
    // 8004B8A0: stw     r4, 6056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6056);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004B8A4:
    ctx->pc = 0x8004B8A4u;
    // 8004B8A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004B8A8:
    ctx->pc = 0x8004B8A8u;
    ctx->downcount -= 10;
    // 8004B8A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004B8AC:
    ctx->pc = 0x8004B8ACu;
    // 8004B8AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004B8B0:
    ctx->pc = 0x8004B8B0u;
    // 8004B8B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B8B4:
    ctx->pc = 0x8004B8B4u;
    // 8004B8B4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004B8B8:
    ctx->pc = 0x8004B8B8u;
    // 8004B8B8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004B8BC:
    ctx->pc = 0x8004B8BCu;
    // 8004B8BC: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004B8C0:
    ctx->pc = 0x8004B8C0u;
    // 8004B8C0: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B8C4:
    ctx->pc = 0x8004B8C4u;
    // 8004B8C4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B8C8:
    ctx->pc = 0x8004B8C8u;
    // 8004B8C8: cmpwi   r28, -1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004B8CC:
    ctx->pc = 0x8004B8CCu;
    // 8004B8CC: bc    12, 2, 0x8004B918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004B918;
        }
    }

label_8004B8D0:
    ctx->pc = 0x8004B8D0u;
    ctx->downcount -= 5;
    // 8004B8D0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B8D4:
    ctx->pc = 0x8004B8D4u;
    // 8004B8D4: addi    r29, r3, -17080
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B8D8:
    ctx->pc = 0x8004B8D8u;
    // 8004B8D8: lwz     r0, 10264(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B8DC:
    ctx->pc = 0x8004B8DCu;
    // 8004B8DC: cmpwi   r0, 0
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

label_8004B8E0:
    ctx->pc = 0x8004B8E0u;
    // 8004B8E0: bc    4, 2, 0x8004B8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B8E8;
        }
    }

label_8004B8E4:
    ctx->pc = 0x8004B8E4u;
    ctx->downcount -= 1;
    // 8004B8E4: bl      0x8004A75C
    {
            ctx->lr = 0x8004B8E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A75Cu;
                return;
            }
            goto label_8004A75C;
    }

label_8004B8E8:
    ctx->pc = 0x8004B8E8u;
    ctx->downcount -= 3;
    // 8004B8E8: lwz     r0, 10264(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B8EC:
    ctx->pc = 0x8004B8ECu;
    // 8004B8EC: cmpwi   r0, 0
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

label_8004B8F0:
    ctx->pc = 0x8004B8F0u;
    // 8004B8F0: bc    4, 2, 0x8004B8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B8F8;
        }
    }

label_8004B8F4:
    ctx->pc = 0x8004B8F4u;
    ctx->downcount -= 1;
    // 8004B8F4: bl      0x8004A7F4
    {
            ctx->lr = 0x8004B8F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A7F4u;
                return;
            }
            goto label_8004A7F4;
    }

label_8004B8F8:
    ctx->pc = 0x8004B8F8u;
    ctx->downcount -= 4;
    // 8004B8F8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B8FC:
    ctx->pc = 0x8004B8FCu;
    // 8004B8FC: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B900:
    ctx->pc = 0x8004B900u;
    // 8004B900: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_8004B904:
    ctx->pc = 0x8004B904u;
    // 8004B904: bl      0x80023508
    {
            ctx->lr = 0x8004B908u;
            ctx->pc = 0x80023508u;
            return;
    }

label_8004B908:
    ctx->pc = 0x8004B908u;
    ctx->downcount -= 3;
    // 8004B908: lwz     r0, 10264(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B90C:
    ctx->pc = 0x8004B90Cu;
    // 8004B90C: cmpwi   r0, 0
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

label_8004B910:
    ctx->pc = 0x8004B910u;
    // 8004B910: bc    4, 2, 0x8004B918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B918;
        }
    }

label_8004B914:
    ctx->pc = 0x8004B914u;
    ctx->downcount -= 1;
    // 8004B914: bl      0x8004A834
    {
            ctx->lr = 0x8004B918u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A834u;
                return;
            }
            goto label_8004A834;
    }

label_8004B918:
    ctx->pc = 0x8004B918u;
    ctx->downcount -= 9;
    // 8004B918: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B91C:
    ctx->pc = 0x8004B91Cu;
    // 8004B91C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B920:
    ctx->pc = 0x8004B920u;
    // 8004B920: addi    r31, r3, 5872
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(5872);

label_8004B924:
    ctx->pc = 0x8004B924u;
    // 8004B924: lwz     r0, 5872(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5872);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B928:
    ctx->pc = 0x8004B928u;
    // 8004B928: mulli   r0, r0, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004B92C:
    ctx->pc = 0x8004B92Cu;
    // 8004B92C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004B930:
    ctx->pc = 0x8004B930u;
    // 8004B930: addi    r3, r3, 88
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(88);

label_8004B934:
    loop_8004B934(ctx);
    if (ctx->pc == 0x8004B940u) goto label_8004B940;
    return;
label_8004B938:
    // 8004B938: cmplwi  r0, 0x0000
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

label_8004B93C:
    // 8004B93C: bc    4, 2, 0x8004B934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B934u;
                return;
            }
            goto label_8004B934;
        }
    }

label_8004B940:
    ctx->pc = 0x8004B940u;
    ctx->downcount -= 1;
    // 8004B940: bl      0x80020680
    {
            ctx->lr = 0x8004B944u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8004B944:
    ctx->pc = 0x8004B944u;
    ctx->downcount -= 12;
    // 8004B944: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B948:
    ctx->pc = 0x8004B948u;
    // 8004B948: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004B94C:
    ctx->pc = 0x8004B94Cu;
    // 8004B94C: addi    r4, r4, -17080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004B950:
    ctx->pc = 0x8004B950u;
    // 8004B950: cmpwi   r28, -1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004B954:
    ctx->pc = 0x8004B954u;
    // 8004B954: mulli   r30, r0, 24
    ctx->gpr[30] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004B958:
    ctx->pc = 0x8004B958u;
    // 8004B958: lwz     r0, 6056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004B95C:
    ctx->pc = 0x8004B95Cu;
    // 8004B95C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004B960:
    ctx->pc = 0x8004B960u;
    // 8004B960: add   r5, r4, r30
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8004B964:
    ctx->pc = 0x8004B964u;
    // 8004B964: stw     r0, 108(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B968:
    ctx->pc = 0x8004B968u;
    // 8004B968: bc    4, 2, 0x8004B988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B988;
        }
    }

label_8004B96C:
    ctx->pc = 0x8004B96Cu;
    ctx->downcount -= 7;
    // 8004B96C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004B970:
    ctx->pc = 0x8004B970u;
    // 8004B970: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004B974:
    ctx->pc = 0x8004B974u;
    // 8004B974: stw     r3, 92(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B978:
    ctx->pc = 0x8004B978u;
    // 8004B978: stw     r0, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B97C:
    ctx->pc = 0x8004B97Cu;
    // 8004B97C: stw     r3, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B980:
    ctx->pc = 0x8004B980u;
    // 8004B980: stw     r3, 104(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B984:
    ctx->pc = 0x8004B984u;
    // 8004B984: b       0x8004B9B0
    {
            goto label_8004B9B0;
    }

label_8004B988:
    ctx->pc = 0x8004B988u;
    ctx->downcount -= 9;
    // 8004B988: stw     r28, 92(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004B98C:
    ctx->pc = 0x8004B98Cu;
    // 8004B98C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004B990:
    ctx->pc = 0x8004B990u;
    // 8004B990: cmpwi   r28, 1
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

label_8004B994:
    ctx->pc = 0x8004B994u;
    // 8004B994: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004B998:
    ctx->pc = 0x8004B998u;
    // 8004B998: lwz     r4, 10264(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10264);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B99C:
    ctx->pc = 0x8004B99Cu;
    // 8004B99C: stw     r4, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004B9A0:
    ctx->pc = 0x8004B9A0u;
    // 8004B9A0: stw     r3, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004B9A4:
    ctx->pc = 0x8004B9A4u;
    // 8004B9A4: stw     r0, 104(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004B9A8:
    ctx->pc = 0x8004B9A8u;
    // 8004B9A8: bc    4, 2, 0x8004B9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004B9B0;
        }
    }

label_8004B9AC:
    ctx->pc = 0x8004B9ACu;
    ctx->downcount -= 1;
    // 8004B9AC: bl      0x8004B87C
    {
            ctx->lr = 0x8004B9B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B87Cu;
                return;
            }
            goto label_8004B87C;
    }

label_8004B9B0:
    ctx->pc = 0x8004B9B0u;
    ctx->downcount -= 1;
    // 8004B9B0: bl      0x800428DC
    {
            ctx->lr = 0x8004B9B4u;
            ctx->pc = 0x800428DCu;
            return;
    }

label_8004B9B4:
    ctx->pc = 0x8004B9B4u;
    ctx->downcount -= 1;
    // 8004B9B4: bl      0x80042210
    {
            ctx->lr = 0x8004B9B8u;
            ctx->pc = 0x80042210u;
            return;
    }

label_8004B9B8:
    ctx->pc = 0x8004B9B8u;
    ctx->downcount -= 1;
    // 8004B9B8: bl      0x80044BC8
    {
            ctx->lr = 0x8004B9BCu;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_8004B9BC:
    ctx->pc = 0x8004B9BCu;
    ctx->downcount -= 8;
    // 8004B9BC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004B9C0:
    ctx->pc = 0x8004B9C0u;
    // 8004B9C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004B9C4:
    ctx->pc = 0x8004B9C4u;
    // 8004B9C4: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004B9C8:
    ctx->pc = 0x8004B9C8u;
    // 8004B9C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004B9CC:
    ctx->pc = 0x8004B9CCu;
    // 8004B9CC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004B9D0:
    ctx->pc = 0x8004B9D0u;
    // 8004B9D0: lhz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004B9D4:
    ctx->pc = 0x8004B9D4u;
    // 8004B9D4: lhz     r4, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8004B9D8:
    ctx->pc = 0x8004B9D8u;
    // 8004B9D8: bl      0x8004D778
    {
            ctx->lr = 0x8004B9DCu;
            ctx->pc = 0x8004D778u;
            return;
    }

label_8004B9DC:
    ctx->pc = 0x8004B9DCu;
    ctx->downcount -= 1;
    // 8004B9DC: bl      0x80042570
    {
            ctx->lr = 0x8004B9E0u;
            ctx->pc = 0x80042570u;
            return;
    }

label_8004B9E0:
    ctx->pc = 0x8004B9E0u;
    ctx->downcount -= 1;
    // 8004B9E0: bl      0x800414D8
    {
            ctx->lr = 0x8004B9E4u;
            ctx->pc = 0x800414D8u;
            return;
    }

label_8004B9E4:
    ctx->pc = 0x8004B9E4u;
    ctx->downcount -= 6;
    // 8004B9E4: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004B9E8:
    ctx->pc = 0x8004B9E8u;
    // 8004B9E8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8004B9EC:
    ctx->pc = 0x8004B9ECu;
    // 8004B9EC: addi    r5, r5, -17080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004B9F0:
    ctx->pc = 0x8004B9F0u;
    // 8004B9F0: addi    r28, r5, 6120
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(6120);

label_8004B9F4:
    ctx->pc = 0x8004B9F4u;
    // 8004B9F4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004B9F8:
    ctx->pc = 0x8004B9F8u;
    // 8004B9F8: bl      0x800410FC
    {
            ctx->lr = 0x8004B9FCu;
            ctx->pc = 0x800410FCu;
            return;
    }

label_8004B9FC:
    ctx->pc = 0x8004B9FCu;
    ctx->downcount -= 10;
    // 8004B9FC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BA00:
    ctx->pc = 0x8004BA00u;
    // 8004BA00: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BA04:
    ctx->pc = 0x8004BA04u;
    // 8004BA04: addi    r6, r3, -17080
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BA08:
    ctx->pc = 0x8004BA08u;
    // 8004BA08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004BA0C:
    ctx->pc = 0x8004BA0Cu;
    // 8004BA0C: lwz     r5, 6104(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004BA10:
    ctx->pc = 0x8004BA10u;
    // 8004BA10: add   r4, r6, r30
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8004BA14:
    ctx->pc = 0x8004BA14u;
    // 8004BA14: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_8004BA18:
    ctx->pc = 0x8004BA18u;
    // 8004BA18: stw     r5, 6104(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004BA1C:
    ctx->pc = 0x8004BA1Cu;
    // 8004BA1C: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BA20:
    ctx->pc = 0x8004BA20u;
    // 8004BA20: bl      0x8004BA74
    {
            ctx->lr = 0x8004BA24u;
            goto label_8004BA74;
    }

label_8004BA24:
    ctx->pc = 0x8004BA24u;
    ctx->downcount -= 5;
    // 8004BA24: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BA28:
    ctx->pc = 0x8004BA28u;
    // 8004BA28: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BA2C:
    ctx->pc = 0x8004BA2Cu;
    // 8004BA2C: lwz     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BA30:
    ctx->pc = 0x8004BA30u;
    // 8004BA30: cmpwi   r0, 2
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

label_8004BA34:
    ctx->pc = 0x8004BA34u;
    // 8004BA34: bc    12, 0, 0x8004BA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BA48;
        }
    }

label_8004BA38:
    ctx->pc = 0x8004BA38u;
    ctx->downcount -= 3;
    // 8004BA38: lwz     r0, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BA3C:
    ctx->pc = 0x8004BA3Cu;
    // 8004BA3C: cmpwi   r0, 0
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

label_8004BA40:
    ctx->pc = 0x8004BA40u;
    // 8004BA40: bc    4, 2, 0x8004BA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BA48;
        }
    }

label_8004BA44:
    ctx->pc = 0x8004BA44u;
    ctx->downcount -= 1;
    // 8004BA44: bl      0x8004C0A8
    {
            ctx->lr = 0x8004BA48u;
            goto label_8004C0A8;
    }

label_8004BA48:
    ctx->pc = 0x8004BA48u;
    ctx->downcount -= 2;
    // 8004BA48: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8004BA4C:
    ctx->pc = 0x8004BA4Cu;
    // 8004BA4C: bl      0x800206A8
    {
            ctx->lr = 0x8004BA50u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8004BA50:
    ctx->pc = 0x8004BA50u;
    ctx->downcount -= 1;
    // 8004BA50: bl      0x8004C584
    {
            ctx->lr = 0x8004BA54u;
            goto label_8004C584;
    }

label_8004BA54:
    ctx->pc = 0x8004BA54u;
    ctx->downcount -= 9;
    // 8004BA54: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BA58:
    ctx->pc = 0x8004BA58u;
    // 8004BA58: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004BA5C:
    ctx->pc = 0x8004BA5Cu;
    // 8004BA5C: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004BA60:
    ctx->pc = 0x8004BA60u;
    // 8004BA60: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004BA64:
    ctx->pc = 0x8004BA64u;
    // 8004BA64: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004BA68:
    ctx->pc = 0x8004BA68u;
    // 8004BA68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BA6C:
    ctx->pc = 0x8004BA6Cu;
    // 8004BA6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004BA70:
    ctx->pc = 0x8004BA70u;
    // 8004BA70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BA74:
    ctx->pc = 0x8004BA74u;
    ctx->downcount -= 6;
    // 8004BA74: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004BA78:
    ctx->pc = 0x8004BA78u;
    // 8004BA78: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8004BA7C:
    ctx->pc = 0x8004BA7Cu;
    // 8004BA7C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BA80:
    ctx->pc = 0x8004BA80u;
    // 8004BA80: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BA84:
    ctx->pc = 0x8004BA84u;
    // 8004BA84: cmplwi  r0, 0x0004
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

label_8004BA88:
    ctx->pc = 0x8004BA88u;
    // 8004BA88: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BA8C:
    ctx->pc = 0x8004BA8Cu;
    ctx->downcount -= 3;
    // 8004BA8C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004BA90:
    ctx->pc = 0x8004BA90u;
    // 8004BA90: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BA94:
    ctx->pc = 0x8004BA94u;
    // 8004BA94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BA98:
    ctx->pc = 0x8004BA98u;
    ctx->downcount -= 7;
    // 8004BA98: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BA9C:
    ctx->pc = 0x8004BA9Cu;
    // 8004BA9C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BAA0:
    ctx->pc = 0x8004BAA0u;
    // 8004BAA0: lwz     r4, 6104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004BAA4:
    ctx->pc = 0x8004BAA4u;
    // 8004BAA4: lwz     r3, 6100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004BAA8:
    ctx->pc = 0x8004BAA8u;
    // 8004BAA8: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004BAAC:
    ctx->pc = 0x8004BAACu;
    // 8004BAAC: cmplw   r0, r3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004BAB0:
    ctx->pc = 0x8004BAB0u;
    // 8004BAB0: bc    12, 2, 0x8004BABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BABC;
        }
    }

label_8004BAB4:
    ctx->pc = 0x8004BAB4u;
    ctx->downcount -= 2;
    // 8004BAB4: cmplw   r4, r3
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004BAB8:
    ctx->pc = 0x8004BAB8u;
    // 8004BAB8: bc    4, 2, 0x8004BAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BAC4;
        }
    }

label_8004BABC:
    ctx->pc = 0x8004BABCu;
    ctx->downcount -= 2;
    // 8004BABC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004BAC0:
    ctx->pc = 0x8004BAC0u;
    // 8004BAC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BAC4:
    ctx->pc = 0x8004BAC4u;
    ctx->downcount -= 2;
    // 8004BAC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004BAC8:
    ctx->pc = 0x8004BAC8u;
    // 8004BAC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BACC:
    ctx->pc = 0x8004BACCu;
    ctx->downcount -= 8;
    // 8004BACC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BAD0:
    ctx->pc = 0x8004BAD0u;
    // 8004BAD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BAD4:
    ctx->pc = 0x8004BAD4u;
    // 8004BAD4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BAD8:
    ctx->pc = 0x8004BAD8u;
    // 8004BAD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BADC:
    ctx->pc = 0x8004BADCu;
    // 8004BADC: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BAE0:
    ctx->pc = 0x8004BAE0u;
    // 8004BAE0: lwz     r0, 10264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BAE4:
    ctx->pc = 0x8004BAE4u;
    // 8004BAE4: cmpwi   r0, 0
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

label_8004BAE8:
    ctx->pc = 0x8004BAE8u;
    // 8004BAE8: bc    4, 2, 0x8004BAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BAF0;
        }
    }

label_8004BAEC:
    ctx->pc = 0x8004BAECu;
    ctx->downcount -= 1;
    // 8004BAEC: bl      0x8004A71C
    {
            ctx->lr = 0x8004BAF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A71Cu;
                return;
            }
            goto label_8004A71C;
    }

label_8004BAF0:
    ctx->pc = 0x8004BAF0u;
    ctx->downcount -= 6;
    // 8004BAF0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BAF4:
    ctx->pc = 0x8004BAF4u;
    // 8004BAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004BAF8:
    ctx->pc = 0x8004BAF8u;
    // 8004BAF8: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BAFC:
    ctx->pc = 0x8004BAFCu;
    // 8004BAFC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8004BB00:
    ctx->pc = 0x8004BB00u;
    // 8004BB00: addi    r3, r3, 6008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6008);

label_8004BB04:
    ctx->pc = 0x8004BB04u;
    // 8004BB04: bl      0x800050B4
    {
            ctx->lr = 0x8004BB08u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8004BB08:
    ctx->pc = 0x8004BB08u;
    ctx->downcount -= 11;
    // 8004BB08: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BB0C:
    ctx->pc = 0x8004BB0Cu;
    // 8004BB0C: lis     r4, -32763
    ctx->gpr[4] = ((u32)(s32)(-32763) << 16);

label_8004BB10:
    ctx->pc = 0x8004BB10u;
    // 8004BB10: addi    r6, r3, -17080
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BB14:
    ctx->pc = 0x8004BB14u;
    // 8004BB14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004BB18:
    ctx->pc = 0x8004BB18u;
    // 8004BB18: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004BB1C:
    ctx->pc = 0x8004BB1Cu;
    // 8004BB1C: stw     r0, 6068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BB20:
    ctx->pc = 0x8004BB20u;
    // 8004BB20: addi    r5, r3, -8932
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8932);

label_8004BB24:
    ctx->pc = 0x8004BB24u;
    // 8004BB24: lwz     r3, 6056(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6056);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004BB28:
    ctx->pc = 0x8004BB28u;
    // 8004BB28: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BB2C:
    ctx->pc = 0x8004BB2Cu;
    // 8004BB2C: addi    r4, r4, -8980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8980);

label_8004BB30:
    ctx->pc = 0x8004BB30u;
    // 8004BB30: bl      0x8000697C
    {
            ctx->lr = 0x8004BB34u;
            ctx->pc = 0x8000697Cu;
            return;
    }

label_8004BB34:
    ctx->pc = 0x8004BB34u;
    ctx->downcount -= 5;
    // 8004BB34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BB38:
    ctx->pc = 0x8004BB38u;
    // 8004BB38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BB3C:
    ctx->pc = 0x8004BB3Cu;
    // 8004BB3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004BB40:
    ctx->pc = 0x8004BB40u;
    // 8004BB40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BB44:
    ctx->pc = 0x8004BB44u;
    ctx->downcount -= 5;
    // 8004BB44: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BB48:
    ctx->pc = 0x8004BB48u;
    // 8004BB48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BB4C:
    ctx->pc = 0x8004BB4Cu;
    // 8004BB4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BB50:
    ctx->pc = 0x8004BB50u;
    // 8004BB50: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BB54:
    ctx->pc = 0x8004BB54u;
    // 8004BB54: bl      0x8002C9F0
    {
            ctx->lr = 0x8004BB58u;
            ctx->pc = 0x8002C9F0u;
            return;
    }

label_8004BB58:
    ctx->pc = 0x8004BB58u;
    ctx->downcount -= 2;
    // 8004BB58: cmpwi   r3, 2
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

label_8004BB5C:
    ctx->pc = 0x8004BB5Cu;
    // 8004BB5C: bc    12, 2, 0x8004BB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BB80;
        }
    }

label_8004BB60:
    ctx->pc = 0x8004BB60u;
    ctx->downcount -= 1;
    // 8004BB60: bc    4, 0, 0x8004BB74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BB74;
        }
    }

label_8004BB64:
    ctx->pc = 0x8004BB64u;
    ctx->downcount -= 2;
    // 8004BB64: cmpwi   r3, 0
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

label_8004BB68:
    ctx->pc = 0x8004BB68u;
    // 8004BB68: bc    12, 2, 0x8004BB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BB80;
        }
    }

label_8004BB6C:
    ctx->pc = 0x8004BB6Cu;
    ctx->downcount -= 1;
    // 8004BB6C: bc    4, 0, 0x8004BB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BB9C;
        }
    }

label_8004BB70:
    ctx->pc = 0x8004BB70u;
    ctx->downcount -= 1;
    // 8004BB70: b       0x8004BBB4
    {
            goto label_8004BBB4;
    }

label_8004BB74:
    ctx->pc = 0x8004BB74u;
    ctx->downcount -= 2;
    // 8004BB74: cmpwi   r3, 5
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

label_8004BB78:
    ctx->pc = 0x8004BB78u;
    // 8004BB78: bc    12, 2, 0x8004BB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BB9C;
        }
    }

label_8004BB7C:
    ctx->pc = 0x8004BB7Cu;
    ctx->downcount -= 1;
    // 8004BB7C: b       0x8004BBB4
    {
            goto label_8004BBB4;
    }

label_8004BB80:
    ctx->pc = 0x8004BB80u;
    ctx->downcount -= 7;
    // 8004BB80: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BB84:
    ctx->pc = 0x8004BB84u;
    // 8004BB84: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8004BB88:
    ctx->pc = 0x8004BB88u;
    // 8004BB88: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BB8C:
    ctx->pc = 0x8004BB8Cu;
    // 8004BB8C: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_8004BB90:
    ctx->pc = 0x8004BB90u;
    // 8004BB90: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004BB94:
    ctx->pc = 0x8004BB94u;
    // 8004BB94: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BB98:
    ctx->pc = 0x8004BB98u;
    // 8004BB98: b       0x8004BBB4
    {
            goto label_8004BBB4;
    }

label_8004BB9C:
    ctx->pc = 0x8004BB9Cu;
    ctx->downcount -= 6;
    // 8004BB9C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BBA0:
    ctx->pc = 0x8004BBA0u;
    // 8004BBA0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004BBA4:
    ctx->pc = 0x8004BBA4u;
    // 8004BBA4: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BBA8:
    ctx->pc = 0x8004BBA8u;
    // 8004BBA8: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_8004BBAC:
    ctx->pc = 0x8004BBACu;
    // 8004BBAC: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004BBB0:
    ctx->pc = 0x8004BBB0u;
    // 8004BBB0: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BBB4:
    ctx->pc = 0x8004BBB4u;
    ctx->downcount -= 11;
    // 8004BBB4: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004BBB8:
    ctx->pc = 0x8004BBB8u;
    // 8004BBB8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8004BBBC:
    ctx->pc = 0x8004BBBCu;
    // 8004BBBC: addi    r31, r4, -17080
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004BBC0:
    ctx->pc = 0x8004BBC0u;
    // 8004BBC0: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004BBC4:
    ctx->pc = 0x8004BBC4u;
    // 8004BBC4: addi    r0, r3, 28312
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28312);

label_8004BBC8:
    ctx->pc = 0x8004BBC8u;
    // 8004BBC8: mulli   r3, r4, 60
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)60);

label_8004BBCC:
    ctx->pc = 0x8004BBCCu;
    // 8004BBCC: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004BBD0:
    ctx->pc = 0x8004BBD0u;
    // 8004BBD0: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004BBD4:
    ctx->pc = 0x8004BBD4u;
    // 8004BBD4: bl      0x8002BB14
    {
            ctx->lr = 0x8004BBD8u;
            ctx->pc = 0x8002BB14u;
            return;
    }

label_8004BBD8:
    ctx->pc = 0x8004BBD8u;
    ctx->downcount -= 6;
    // 8004BBD8: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004BBDC:
    ctx->pc = 0x8004BBDCu;
    // 8004BBDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004BBE0:
    ctx->pc = 0x8004BBE0u;
    // 8004BBE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004BBE4:
    ctx->pc = 0x8004BBE4u;
    // 8004BBE4: lhz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004BBE8:
    ctx->pc = 0x8004BBE8u;
    // 8004BBE8: lhz     r6, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004BBEC:
    ctx->pc = 0x8004BBECu;
    // 8004BBEC: bl      0x8004D778
    {
            ctx->lr = 0x8004BBF0u;
            ctx->pc = 0x8004D778u;
            return;
    }

label_8004BBF0:
    ctx->pc = 0x8004BBF0u;
    ctx->downcount -= 6;
    // 8004BBF0: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004BBF4:
    ctx->pc = 0x8004BBF4u;
    // 8004BBF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004BBF8:
    ctx->pc = 0x8004BBF8u;
    // 8004BBF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004BBFC:
    ctx->pc = 0x8004BBFCu;
    // 8004BBFC: lhz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004BC00:
    ctx->pc = 0x8004BC00u;
    // 8004BC00: lhz     r6, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004BC04:
    ctx->pc = 0x8004BC04u;
    // 8004BC04: bl      0x8004310C
    {
            ctx->lr = 0x8004BC08u;
            ctx->pc = 0x8004310Cu;
            return;
    }

label_8004BC08:
    ctx->pc = 0x8004BC08u;
    ctx->downcount -= 4;
    // 8004BC08: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004BC0C:
    ctx->pc = 0x8004BC0Cu;
    // 8004BC0C: lhz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004BC10:
    ctx->pc = 0x8004BC10u;
    // 8004BC10: lhz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8004BC14:
    ctx->pc = 0x8004BC14u;
    // 8004BC14: bl      0x80043204
    {
            ctx->lr = 0x8004BC18u;
            ctx->pc = 0x80043204u;
            return;
    }

label_8004BC18:
    ctx->pc = 0x8004BC18u;
    ctx->downcount -= 32;
    // 8004BC18: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004BC1C:
    ctx->pc = 0x8004BC1Cu;
    // 8004BC1C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_8004BC20:
    ctx->pc = 0x8004BC20u;
    // 8004BC20: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8004BC24:
    ctx->pc = 0x8004BC24u;
    // 8004BC24: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004BC28:
    ctx->pc = 0x8004BC28u;
    // 8004BC28: lhz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004BC2C:
    ctx->pc = 0x8004BC2Cu;
    // 8004BC2C: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004BC30:
    ctx->pc = 0x8004BC30u;
    // 8004BC30: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004BC34:
    ctx->pc = 0x8004BC34u;
    // 8004BC34: lfd     f2, 12536(r4)
    if (!ppc_fp_available_inline(ctx, 0x8004BC34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004BC38:
    ctx->pc = 0x8004BC38u;
    // 8004BC38: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BC38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004BC3C:
    ctx->pc = 0x8004BC3Cu;
    // 8004BC3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BC40:
    ctx->pc = 0x8004BC40u;
    // 8004BC40: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004BC40u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_8004BC44:
    ctx->pc = 0x8004BC44u;
    // 8004BC44: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004BC48:
    ctx->pc = 0x8004BC48u;
    // 8004BC48: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BC48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004BC4C:
    ctx->pc = 0x8004BC4Cu;
    // 8004BC4C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8004BC4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_8004BC50:
    ctx->pc = 0x8004BC50u;
    // 8004BC50: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8004BC50u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_8004BC54:
    ctx->pc = 0x8004BC54u;
    // 8004BC54: bl      0x800433E4
    {
            ctx->lr = 0x8004BC58u;
            ctx->pc = 0x800433E4u;
            return;
    }

label_8004BC58:
    ctx->pc = 0x8004BC58u;
    ctx->downcount -= 6;
    // 8004BC58: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004BC5C:
    ctx->pc = 0x8004BC5Cu;
    // 8004BC5C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8004BC60:
    ctx->pc = 0x8004BC60u;
    // 8004BC60: lbz     r3, 25(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(25);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004BC64:
    ctx->pc = 0x8004BC64u;
    // 8004BC64: addi    r4, r6, 26
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(26);

label_8004BC68:
    ctx->pc = 0x8004BC68u;
    // 8004BC68: addi    r6, r6, 50
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(50);

label_8004BC6C:
    ctx->pc = 0x8004BC6Cu;
    // 8004BC6C: bl      0x80043528
    {
            ctx->lr = 0x8004BC70u;
            ctx->pc = 0x80043528u;
            return;
    }

label_8004BC70:
    ctx->pc = 0x8004BC70u;
    ctx->downcount -= 2;
    // 8004BC70: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8004BC74:
    ctx->pc = 0x8004BC74u;
    // 8004BC74: bl      0x8004338C
    {
            ctx->lr = 0x8004BC78u;
            ctx->pc = 0x8004338Cu;
            return;
    }

label_8004BC78:
    ctx->pc = 0x8004BC78u;
    ctx->downcount -= 1;
    // 8004BC78: bl      0x8002C6D0
    {
            ctx->lr = 0x8004BC7Cu;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8004BC7C:
    ctx->pc = 0x8004BC7Cu;
    ctx->downcount -= 1;
    // 8004BC7C: bl      0x8002B64C
    {
            ctx->lr = 0x8004BC80u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004BC80:
    ctx->pc = 0x8004BC80u;
    ctx->downcount -= 4;
    // 8004BC80: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004BC84:
    ctx->pc = 0x8004BC84u;
    // 8004BC84: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BC88:
    ctx->pc = 0x8004BC88u;
    // 8004BC88: rlwinm. r0, r0, 0, 31, 31
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

label_8004BC8C:
    ctx->pc = 0x8004BC8Cu;
    // 8004BC8C: bc    12, 2, 0x8004BC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BC94;
        }
    }

label_8004BC90:
    ctx->pc = 0x8004BC90u;
    ctx->downcount -= 1;
    // 8004BC90: bl      0x8002B64C
    {
            ctx->lr = 0x8004BC94u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004BC94:
    ctx->pc = 0x8004BC94u;
    ctx->downcount -= 2;
    // 8004BC94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004BC98:
    ctx->pc = 0x8004BC98u;
    // 8004BC98: bl      0x8004C53C
    {
            ctx->lr = 0x8004BC9Cu;
            goto label_8004C53C;
    }

label_8004BC9C:
    ctx->pc = 0x8004BC9Cu;
    ctx->downcount -= 6;
    // 8004BC9C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BCA0:
    ctx->pc = 0x8004BCA0u;
    // 8004BCA0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004BCA4:
    ctx->pc = 0x8004BCA4u;
    // 8004BCA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BCA8:
    ctx->pc = 0x8004BCA8u;
    // 8004BCA8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004BCAC:
    ctx->pc = 0x8004BCACu;
    // 8004BCAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BCB0:
    ctx->pc = 0x8004BCB0u;
    ctx->downcount -= 4;
    // 8004BCB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BCB4:
    ctx->pc = 0x8004BCB4u;
    // 8004BCB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BCB8:
    ctx->pc = 0x8004BCB8u;
    // 8004BCB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BCBC:
    ctx->pc = 0x8004BCBCu;
    // 8004BCBC: bl      0x8004BCE8
    {
            ctx->lr = 0x8004BCC0u;
            goto label_8004BCE8;
    }

label_8004BCC0:
    ctx->pc = 0x8004BCC0u;
    ctx->downcount -= 13;
    // 8004BCC0: lis     r3, 12295
    ctx->gpr[3] = ((u32)(s32)(12295) << 16);

label_8004BCC4:
    ctx->pc = 0x8004BCC4u;
    // 8004BCC4: addi    r3, r3, 12295
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12295);

label_8004BCC8:
    ctx->pc = 0x8004BCC8u;
    // 8004BCC8: mtgqr6    r3
    ctx->gqr[6] = ctx->gpr[3];

label_8004BCCC:
    ctx->pc = 0x8004BCCCu;
    // 8004BCCC: lis     r3, 3591
    ctx->gpr[3] = ((u32)(s32)(3591) << 16);

label_8004BCD0:
    ctx->pc = 0x8004BCD0u;
    // 8004BCD0: addi    r3, r3, 3591
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3591);

label_8004BCD4:
    ctx->pc = 0x8004BCD4u;
    // 8004BCD4: mtgqr7    r3
    ctx->gqr[7] = ctx->gpr[3];

label_8004BCD8:
    ctx->pc = 0x8004BCD8u;
    // 8004BCD8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BCDC:
    ctx->pc = 0x8004BCDCu;
    // 8004BCDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BCE0:
    ctx->pc = 0x8004BCE0u;
    // 8004BCE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004BCE4:
    ctx->pc = 0x8004BCE4u;
    // 8004BCE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BCE8:
    ctx->pc = 0x8004BCE8u;
    ctx->downcount -= 17;
    // 8004BCE8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8004BCEC:
    ctx->pc = 0x8004BCECu;
    // 8004BCEC: oris    r3, r3, 0x0004
    ctx->gpr[3] = ctx->gpr[3] | (0x0004u << 16);

label_8004BCF0:
    ctx->pc = 0x8004BCF0u;
    // 8004BCF0: mtgqr2    r3
    ctx->gqr[2] = ctx->gpr[3];

label_8004BCF4:
    ctx->pc = 0x8004BCF4u;
    // 8004BCF4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8004BCF8:
    ctx->pc = 0x8004BCF8u;
    // 8004BCF8: oris    r3, r3, 0x0005
    ctx->gpr[3] = ctx->gpr[3] | (0x0005u << 16);

label_8004BCFC:
    ctx->pc = 0x8004BCFCu;
    // 8004BCFC: mtgqr3    r3
    ctx->gqr[3] = ctx->gpr[3];

label_8004BD00:
    ctx->pc = 0x8004BD00u;
    // 8004BD00: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8004BD04:
    ctx->pc = 0x8004BD04u;
    // 8004BD04: oris    r3, r3, 0x0006
    ctx->gpr[3] = ctx->gpr[3] | (0x0006u << 16);

label_8004BD08:
    ctx->pc = 0x8004BD08u;
    // 8004BD08: mtgqr4    r3
    ctx->gqr[4] = ctx->gpr[3];

label_8004BD0C:
    ctx->pc = 0x8004BD0Cu;
    // 8004BD0C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_8004BD10:
    ctx->pc = 0x8004BD10u;
    // 8004BD10: oris    r3, r3, 0x0007
    ctx->gpr[3] = ctx->gpr[3] | (0x0007u << 16);

label_8004BD14:
    ctx->pc = 0x8004BD14u;
    // 8004BD14: mtgqr5    r3
    ctx->gqr[5] = ctx->gpr[3];

label_8004BD18:
    ctx->pc = 0x8004BD18u;
    // 8004BD18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD1C:
    ctx->pc = 0x8004BD1Cu;
    ctx->downcount -= 1;
    // 8004BD1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD20:
    ctx->pc = 0x8004BD20u;
    ctx->downcount -= 1;
    // 8004BD20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD24:
    ctx->pc = 0x8004BD24u;
    ctx->downcount -= 1;
    // 8004BD24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD28:
    ctx->pc = 0x8004BD28u;
    ctx->downcount -= 1;
    // 8004BD28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD2C:
    ctx->pc = 0x8004BD2Cu;
    ctx->downcount -= 1;
    // 8004BD2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD30:
    ctx->pc = 0x8004BD30u;
    ctx->downcount -= 2;
    // 8004BD30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004BD34:
    ctx->pc = 0x8004BD34u;
    // 8004BD34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BD38:
    ctx->pc = 0x8004BD38u;
    ctx->downcount -= 18;
    // 8004BD38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BD3C:
    ctx->pc = 0x8004BD3Cu;
    // 8004BD3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BD40:
    ctx->pc = 0x8004BD40u;
    // 8004BD40: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BD44:
    ctx->pc = 0x8004BD44u;
    // 8004BD44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BD48:
    ctx->pc = 0x8004BD48u;
    // 8004BD48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BD4C:
    ctx->pc = 0x8004BD4Cu;
    // 8004BD4C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8004BD50:
    ctx->pc = 0x8004BD50u;
    // 8004BD50: addi    r6, r3, -17080
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BD54:
    ctx->pc = 0x8004BD54u;
    // 8004BD54: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004BD58:
    ctx->pc = 0x8004BD58u;
    // 8004BD58: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004BD5C:
    ctx->pc = 0x8004BD5Cu;
    // 8004BD5C: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8004BD60:
    ctx->pc = 0x8004BD60u;
    // 8004BD60: stw     r31, 6132(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6132);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BD64:
    ctx->pc = 0x8004BD64u;
    // 8004BD64: addi    r5, r4, 28552
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28552);

label_8004BD68:
    ctx->pc = 0x8004BD68u;
    // 8004BD68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004BD6C:
    ctx->pc = 0x8004BD6Cu;
    // 8004BD6C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004BD70:
    ctx->pc = 0x8004BD70u;
    // 8004BD70: lwz     r0, 408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BD74:
    ctx->pc = 0x8004BD74u;
    // 8004BD74: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_8004BD78:
    ctx->pc = 0x8004BD78u;
    // 8004BD78: stw     r0, 6136(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BD7C:
    ctx->pc = 0x8004BD7Cu;
    // 8004BD7C: bl      0x8004BD30
    {
            ctx->lr = 0x8004BD80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BD30u;
                return;
            }
            goto label_8004BD30;
    }

label_8004BD80:
    ctx->pc = 0x8004BD80u;
    ctx->downcount -= 2;
    // 8004BD80: cmplwi  r31, 0x0000
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

label_8004BD84:
    ctx->pc = 0x8004BD84u;
    // 8004BD84: bc    4, 2, 0x8004BD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BD98;
        }
    }

label_8004BD88:
    ctx->pc = 0x8004BD88u;
    ctx->downcount -= 4;
    // 8004BD88: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004BD8C:
    ctx->pc = 0x8004BD8Cu;
    // 8004BD8C: addi    r0, r3, -17124
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17124);

label_8004BD90:
    ctx->pc = 0x8004BD90u;
    // 8004BD90: stw     r0, 408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BD94:
    ctx->pc = 0x8004BD94u;
    // 8004BD94: b       0x8004BDA4
    {
            goto label_8004BDA4;
    }

label_8004BD98:
    ctx->pc = 0x8004BD98u;
    ctx->downcount -= 3;
    // 8004BD98: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004BD9C:
    ctx->pc = 0x8004BD9Cu;
    // 8004BD9C: addi    r0, r3, -17120
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17120);

label_8004BDA0:
    ctx->pc = 0x8004BDA0u;
    // 8004BDA0: stw     r0, 408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BDA4:
    ctx->pc = 0x8004BDA4u;
    ctx->downcount -= 7;
    // 8004BDA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BDA8:
    ctx->pc = 0x8004BDA8u;
    // 8004BDA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004BDAC:
    ctx->pc = 0x8004BDACu;
    // 8004BDAC: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004BDB0:
    ctx->pc = 0x8004BDB0u;
    // 8004BDB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BDB4:
    ctx->pc = 0x8004BDB4u;
    // 8004BDB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004BDB8:
    ctx->pc = 0x8004BDB8u;
    // 8004BDB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BDBC:
    ctx->pc = 0x8004BDBCu;
    ctx->downcount -= 6;
    // 8004BDBC: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BDC0:
    ctx->pc = 0x8004BDC0u;
    // 8004BDC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BDC4:
    ctx->pc = 0x8004BDC4u;
    // 8004BDC4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BDC8:
    ctx->pc = 0x8004BDC8u;
    // 8004BDC8: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BDCC:
    ctx->pc = 0x8004BDCCu;
    // 8004BDCC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004BDD0:
    ctx->pc = 0x8004BDD0u;
    // 8004BDD0: bc    4, 6, 0x8004BDF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BDF4;
        }
    }

label_8004BDD4:
    ctx->pc = 0x8004BDD4u;
    ctx->downcount -= 8;
    // 8004BDD4: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8004BDD8:
    ctx->pc = 0x8004BDD8u;
    // 8004BDD8: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8004BDDC:
    ctx->pc = 0x8004BDDCu;
    // 8004BDDC: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8004BDE0:
    ctx->pc = 0x8004BDE0u;
    // 8004BDE0: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8004BDE4:
    ctx->pc = 0x8004BDE4u;
    // 8004BDE4: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8004BDE8:
    ctx->pc = 0x8004BDE8u;
    // 8004BDE8: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8004BDEC:
    ctx->pc = 0x8004BDECu;
    // 8004BDEC: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8004BDF0:
    ctx->pc = 0x8004BDF0u;
    // 8004BDF0: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BDF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8004BDF4:
    ctx->pc = 0x8004BDF4u;
    ctx->downcount -= 18;
    // 8004BDF4: lis     r11, -32735
    ctx->gpr[11] = ((u32)(s32)(-32735) << 16);

label_8004BDF8:
    ctx->pc = 0x8004BDF8u;
    // 8004BDF8: lwz     r0, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BDFC:
    ctx->pc = 0x8004BDFCu;
    // 8004BDFC: addi    r12, r11, -17080
    ctx->gpr[12] = ctx->gpr[11] + (u32)(s32)(-17080);

label_8004BE00:
    ctx->pc = 0x8004BE00u;
    // 8004BE00: lis     r11, -32738
    ctx->gpr[11] = ((u32)(s32)(-32738) << 16);

label_8004BE04:
    ctx->pc = 0x8004BE04u;
    // 8004BE04: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004BE08:
    ctx->pc = 0x8004BE08u;
    // 8004BE08: addi    r11, r11, 28552
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(28552);

label_8004BE0C:
    ctx->pc = 0x8004BE0Cu;
    // 8004BE0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004BE10:
    ctx->pc = 0x8004BE10u;
    // 8004BE10: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004BE14:
    ctx->pc = 0x8004BE14u;
    // 8004BE14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004BE18:
    ctx->pc = 0x8004BE18u;
    // 8004BE18: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004BE1C:
    ctx->pc = 0x8004BE1Cu;
    // 8004BE1C: addi    r5, r11, 16
    ctx->gpr[5] = ctx->gpr[11] + (u32)(s32)(16);

label_8004BE20:
    ctx->pc = 0x8004BE20u;
    // 8004BE20: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8004BE24:
    ctx->pc = 0x8004BE24u;
    // 8004BE24: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8004BE28:
    ctx->pc = 0x8004BE28u;
    // 8004BE28: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8004BE2C:
    ctx->pc = 0x8004BE2Cu;
    // 8004BE2C: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8004BE30:
    ctx->pc = 0x8004BE30u;
    // 8004BE30: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8004BE34:
    ctx->pc = 0x8004BE34u;
    // 8004BE34: stw     r0, 6136(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(6136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BE38:
    ctx->pc = 0x8004BE38u;
    // 8004BE38: bl      0x8004BD30
    {
            ctx->lr = 0x8004BE3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BD30u;
                return;
            }
            goto label_8004BD30;
    }

label_8004BE3C:
    ctx->pc = 0x8004BE3Cu;
    ctx->downcount -= 9;
    // 8004BE3C: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004BE40:
    ctx->pc = 0x8004BE40u;
    // 8004BE40: addi    r0, r3, -17116
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17116);

label_8004BE44:
    ctx->pc = 0x8004BE44u;
    // 8004BE44: stw     r0, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BE48:
    ctx->pc = 0x8004BE48u;
    // 8004BE48: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004BE4C:
    ctx->pc = 0x8004BE4Cu;
    // 8004BE4C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BE50:
    ctx->pc = 0x8004BE50u;
    // 8004BE50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BE54:
    ctx->pc = 0x8004BE54u;
    // 8004BE54: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8004BE58:
    ctx->pc = 0x8004BE58u;
    // 8004BE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BE5C:
    ctx->pc = 0x8004BE5Cu;
    ctx->downcount -= 2;
    // 8004BE5C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BE60:
    ctx->pc = 0x8004BE60u;
    // 8004BE60: bc    4, 6, 0x8004BE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BE84;
        }
    }

label_8004BE64:
    ctx->pc = 0x8004BE64u;
    ctx->downcount -= 8;
    // 8004BE64: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8004BE68:
    ctx->pc = 0x8004BE68u;
    // 8004BE68: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8004BE6C:
    ctx->pc = 0x8004BE6Cu;
    // 8004BE6C: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8004BE70:
    ctx->pc = 0x8004BE70u;
    // 8004BE70: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8004BE74:
    ctx->pc = 0x8004BE74u;
    // 8004BE74: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8004BE78:
    ctx->pc = 0x8004BE78u;
    // 8004BE78: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8004BE7C:
    ctx->pc = 0x8004BE7Cu;
    // 8004BE7C: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8004BE80:
    ctx->pc = 0x8004BE80u;
    // 8004BE80: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004BE80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8004BE84:
    ctx->pc = 0x8004BE84u;
    ctx->downcount -= 13;
    // 8004BE84: lis     r11, -32763
    ctx->gpr[11] = ((u32)(s32)(-32763) << 16);

label_8004BE88:
    ctx->pc = 0x8004BE88u;
    // 8004BE88: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004BE8C:
    ctx->pc = 0x8004BE8Cu;
    // 8004BE8C: addi    r0, r11, -17112
    ctx->gpr[0] = ctx->gpr[11] + (u32)(s32)(-17112);

label_8004BE90:
    ctx->pc = 0x8004BE90u;
    // 8004BE90: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004BE94:
    ctx->pc = 0x8004BE94u;
    // 8004BE94: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8004BE98:
    ctx->pc = 0x8004BE98u;
    // 8004BE98: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8004BE9C:
    ctx->pc = 0x8004BE9Cu;
    // 8004BE9C: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8004BEA0:
    ctx->pc = 0x8004BEA0u;
    // 8004BEA0: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8004BEA4:
    ctx->pc = 0x8004BEA4u;
    // 8004BEA4: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8004BEA8:
    ctx->pc = 0x8004BEA8u;
    // 8004BEA8: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8004BEAC:
    ctx->pc = 0x8004BEACu;
    // 8004BEAC: stw     r0, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BEB0:
    ctx->pc = 0x8004BEB0u;
    // 8004BEB0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8004BEB4:
    ctx->pc = 0x8004BEB4u;
    // 8004BEB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BEB8:
    ctx->pc = 0x8004BEB8u;
    ctx->downcount -= 8;
    // 8004BEB8: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004BEBC:
    ctx->pc = 0x8004BEBCu;
    // 8004BEBC: lis     r3, -32763
    ctx->gpr[3] = ((u32)(s32)(-32763) << 16);

label_8004BEC0:
    ctx->pc = 0x8004BEC0u;
    // 8004BEC0: addis   r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + ((u32)(s32)(-32768) << 16);

label_8004BEC4:
    ctx->pc = 0x8004BEC4u;
    // 8004BEC4: addi    r5, r5, -17080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004BEC8:
    ctx->pc = 0x8004BEC8u;
    // 8004BEC8: addi    r0, r3, -17108
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17108);

label_8004BECC:
    ctx->pc = 0x8004BECCu;
    // 8004BECC: stw     r6, 6132(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6132);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8004BED0:
    ctx->pc = 0x8004BED0u;
    // 8004BED0: stw     r0, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BED4:
    ctx->pc = 0x8004BED4u;
    // 8004BED4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BED8:
    ctx->pc = 0x8004BED8u;
    ctx->downcount -= 3;
    // 8004BED8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BEDC:
    ctx->pc = 0x8004BEDCu;
    // 8004BEDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BEE0:
    ctx->pc = 0x8004BEE0u;
    // 8004BEE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BEE4:
    ctx->downcount -= 1;
    // 8004BEE4: bl      0x8004BEF0
    {
            ctx->lr = 0x8004BEE8u;
            goto label_8004BEF0;
    }

label_8004BEE8:
    ctx->downcount -= 1;
    // 8004BEE8: bl      0x80023F34
    {
            ctx->lr = 0x8004BEECu;
            ctx->pc = 0x80023F34u;
            return;
    }

label_8004BEEC:
    ctx->downcount -= 1;
    // 8004BEEC: b       0x8004BEE4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BEE4u;
                return;
            }
            goto label_8004BEE4;
    }

label_8004BEF0:
    ctx->pc = 0x8004BEF0u;
    ctx->downcount -= 7;
    // 8004BEF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BEF4:
    ctx->pc = 0x8004BEF4u;
    // 8004BEF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BEF8:
    ctx->pc = 0x8004BEF8u;
    // 8004BEF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BEFC:
    ctx->pc = 0x8004BEFCu;
    // 8004BEFC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BF00:
    ctx->pc = 0x8004BF00u;
    // 8004BF00: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004BF04:
    ctx->pc = 0x8004BF04u;
    // 8004BF04: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004BF08:
    ctx->pc = 0x8004BF08u;
    // 8004BF08: bl      0x80020680
    {
            ctx->lr = 0x8004BF0Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8004BF0C:
    ctx->pc = 0x8004BF0Cu;
    ctx->downcount -= 10;
    // 8004BF0C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004BF10:
    ctx->pc = 0x8004BF10u;
    // 8004BF10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004BF14:
    ctx->pc = 0x8004BF14u;
    // 8004BF14: addi    r6, r4, -17080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004BF18:
    ctx->pc = 0x8004BF18u;
    // 8004BF18: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8004BF1C:
    ctx->pc = 0x8004BF1Cu;
    // 8004BF1C: lwz     r0, 6108(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BF20:
    ctx->pc = 0x8004BF20u;
    // 8004BF20: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8004BF24:
    ctx->pc = 0x8004BF24u;
    // 8004BF24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004BF28:
    ctx->pc = 0x8004BF28u;
    // 8004BF28: add   r3, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004BF2C:
    ctx->pc = 0x8004BF2Cu;
    // 8004BF2C: lwz     r3, 6124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004BF30:
    ctx->pc = 0x8004BF30u;
    // 8004BF30: bl      0x800410FC
    {
            ctx->lr = 0x8004BF34u;
            ctx->pc = 0x800410FCu;
            return;
    }

label_8004BF34:
    ctx->pc = 0x8004BF34u;
    ctx->downcount -= 5;
    // 8004BF34: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BF38:
    ctx->pc = 0x8004BF38u;
    // 8004BF38: addi    r29, r3, -17080
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BF3C:
    ctx->pc = 0x8004BF3Cu;
    // 8004BF3C: lwz     r0, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BF40:
    ctx->pc = 0x8004BF40u;
    // 8004BF40: cmpwi   r0, 2
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

label_8004BF44:
    ctx->pc = 0x8004BF44u;
    // 8004BF44: bc    12, 0, 0x8004BFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BFC0;
        }
    }

label_8004BF48:
    ctx->pc = 0x8004BF48u;
    ctx->downcount -= 3;
    // 8004BF48: lwz     r0, 5884(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BF4C:
    ctx->pc = 0x8004BF4Cu;
    // 8004BF4C: cmpwi   r0, 0
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

label_8004BF50:
    ctx->pc = 0x8004BF50u;
    // 8004BF50: bc    4, 2, 0x8004BFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BFC0;
        }
    }

label_8004BF54:
    ctx->pc = 0x8004BF54u;
    ctx->downcount -= 1;
    // 8004BF54: bl      0x8004C0A8
    {
            ctx->lr = 0x8004BF58u;
            goto label_8004C0A8;
    }

label_8004BF58:
    ctx->pc = 0x8004BF58u;
    ctx->downcount -= 2;
    // 8004BF58: cmpwi   r3, 0
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

label_8004BF5C:
    ctx->pc = 0x8004BF5Cu;
    // 8004BF5C: bc    4, 2, 0x8004BFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004BFC0;
        }
    }

label_8004BF60:
    ctx->pc = 0x8004BF60u;
    ctx->downcount -= 1;
    // 8004BF60: bl      0x800414E8
    {
            ctx->lr = 0x8004BF64u;
            ctx->pc = 0x800414E8u;
            return;
    }

label_8004BF64:
    ctx->pc = 0x8004BF64u;
    ctx->downcount -= 2;
    // 8004BF64: cmplwi  r3, 0x0000
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

label_8004BF68:
    ctx->pc = 0x8004BF68u;
    // 8004BF68: bc    12, 2, 0x8004BFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BFC0;
        }
    }

label_8004BF6C:
    ctx->pc = 0x8004BF6Cu;
    ctx->downcount -= 3;
    // 8004BF6C: lwz     r0, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BF70:
    ctx->pc = 0x8004BF70u;
    // 8004BF70: cmpwi   r0, 0
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

label_8004BF74:
    ctx->pc = 0x8004BF74u;
    // 8004BF74: bc    12, 2, 0x8004BFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BFC0;
        }
    }

label_8004BF78:
    ctx->pc = 0x8004BF78u;
    ctx->downcount -= 1;
    // 8004BF78: bl      0x800414F0
    {
            ctx->lr = 0x8004BF7Cu;
            ctx->pc = 0x800414F0u;
            return;
    }

label_8004BF7C:
    ctx->pc = 0x8004BF7Cu;
    ctx->downcount -= 5;
    // 8004BF7C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BF80:
    ctx->pc = 0x8004BF80u;
    // 8004BF80: addi    r30, r3, -17080
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BF84:
    ctx->pc = 0x8004BF84u;
    // 8004BF84: lwz     r0, 10268(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BF88:
    ctx->pc = 0x8004BF88u;
    // 8004BF88: cmpwi   r0, 0
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

label_8004BF8C:
    ctx->pc = 0x8004BF8Cu;
    // 8004BF8C: bc    12, 2, 0x8004BF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004BF9C;
        }
    }

label_8004BF90:
    ctx->pc = 0x8004BF90u;
    ctx->downcount -= 1;
    // 8004BF90: bl      0x8004A8AC
    {
            ctx->lr = 0x8004BF94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A8ACu;
                return;
            }
            goto label_8004A8AC;
    }

label_8004BF94:
    ctx->pc = 0x8004BF94u;
    ctx->downcount -= 2;
    // 8004BF94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004BF98:
    ctx->pc = 0x8004BF98u;
    // 8004BF98: stw     r0, 10268(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BF9C:
    ctx->pc = 0x8004BF9Cu;
    ctx->downcount -= 1;
    // 8004BF9C: bl      0x8004A924
    {
            ctx->lr = 0x8004BFA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A924u;
                return;
            }
            goto label_8004A924;
    }

label_8004BFA0:
    ctx->pc = 0x8004BFA0u;
    ctx->downcount -= 4;
    // 8004BFA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004BFA4:
    ctx->pc = 0x8004BFA4u;
    // 8004BFA4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004BFA8:
    ctx->pc = 0x8004BFA8u;
    // 8004BFA8: stw     r0, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BFAC:
    ctx->pc = 0x8004BFACu;
    // 8004BFAC: bl      0x800411D8
    {
            ctx->lr = 0x8004BFB0u;
            ctx->pc = 0x800411D8u;
            return;
    }

label_8004BFB0:
    ctx->pc = 0x8004BFB0u;
    ctx->downcount -= 4;
    // 8004BFB0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004BFB4:
    ctx->pc = 0x8004BFB4u;
    // 8004BFB4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BFB8:
    ctx->pc = 0x8004BFB8u;
    // 8004BFB8: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004BFBC:
    ctx->pc = 0x8004BFBCu;
    // 8004BFBC: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BFC0:
    ctx->pc = 0x8004BFC0u;
    ctx->downcount -= 2;
    // 8004BFC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004BFC4:
    ctx->pc = 0x8004BFC4u;
    // 8004BFC4: bl      0x800206A8
    {
            ctx->lr = 0x8004BFC8u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8004BFC8:
    ctx->pc = 0x8004BFC8u;
    ctx->downcount -= 8;
    // 8004BFC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004BFCC:
    ctx->pc = 0x8004BFCCu;
    // 8004BFCC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004BFD0:
    ctx->pc = 0x8004BFD0u;
    // 8004BFD0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004BFD4:
    ctx->pc = 0x8004BFD4u;
    // 8004BFD4: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004BFD8:
    ctx->pc = 0x8004BFD8u;
    // 8004BFD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004BFDC:
    ctx->pc = 0x8004BFDCu;
    // 8004BFDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004BFE0:
    ctx->pc = 0x8004BFE0u;
    // 8004BFE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004BFE4:
    ctx->pc = 0x8004BFE4u;
    ctx->downcount -= 11;
    // 8004BFE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004BFE8:
    ctx->pc = 0x8004BFE8u;
    // 8004BFE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004BFEC:
    ctx->pc = 0x8004BFECu;
    // 8004BFEC: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004BFF0:
    ctx->pc = 0x8004BFF0u;
    // 8004BFF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004BFF4:
    ctx->pc = 0x8004BFF4u;
    // 8004BFF4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004BFF8:
    ctx->pc = 0x8004BFF8u;
    // 8004BFF8: addi    r31, r4, -17080
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004BFFC:
    ctx->pc = 0x8004BFFCu;
    // 8004BFFC: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C000:
    ctx->pc = 0x8004C000u;
    // 8004C000: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C004:
    ctx->pc = 0x8004C004u;
    // 8004C004: lwz     r0, 5884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C008:
    ctx->pc = 0x8004C008u;
    // 8004C008: cmpwi   r0, 1
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

label_8004C00C:
    ctx->pc = 0x8004C00Cu;
    // 8004C00C: bc    4, 2, 0x8004C070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C070;
        }
    }

label_8004C010:
    ctx->pc = 0x8004C010u;
    ctx->downcount -= 3;
    // 8004C010: lwz     r3, 5892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C014:
    ctx->pc = 0x8004C014u;
    // 8004C014: stw     r3, 5888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004C018:
    ctx->pc = 0x8004C018u;
    // 8004C018: bl      0x8002C800
    {
            ctx->lr = 0x8004C01Cu;
            ctx->pc = 0x8002C800u;
            return;
    }

label_8004C01C:
    ctx->pc = 0x8004C01Cu;
    ctx->downcount -= 5;
    // 8004C01C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C020:
    ctx->pc = 0x8004C020u;
    // 8004C020: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C024:
    ctx->pc = 0x8004C024u;
    // 8004C024: lwz     r3, 5896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5896);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C028:
    ctx->pc = 0x8004C028u;
    // 8004C028: cmpwi   r3, 0
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

label_8004C02C:
    ctx->pc = 0x8004C02Cu;
    // 8004C02C: bc    4, 1, 0x8004C044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C044;
        }
    }

label_8004C030:
    ctx->pc = 0x8004C030u;
    ctx->downcount -= 3;
    // 8004C030: addic.  r0, r3, -1
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

label_8004C034:
    ctx->pc = 0x8004C034u;
    // 8004C034: stw     r0, 5896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C038:
    ctx->pc = 0x8004C038u;
    // 8004C038: bc    4, 2, 0x8004C044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C044;
        }
    }

label_8004C03C:
    ctx->pc = 0x8004C03Cu;
    ctx->downcount -= 2;
    // 8004C03C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C040:
    ctx->pc = 0x8004C040u;
    // 8004C040: bl      0x8002C86C
    {
            ctx->lr = 0x8004C044u;
            ctx->pc = 0x8002C86Cu;
            return;
    }

label_8004C044:
    ctx->pc = 0x8004C044u;
    ctx->downcount -= 1;
    // 8004C044: bl      0x8002C6D0
    {
            ctx->lr = 0x8004C048u;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8004C048:
    ctx->pc = 0x8004C048u;
    ctx->downcount -= 1;
    // 8004C048: bl      0x8004AA40
    {
            ctx->lr = 0x8004C04Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004AA40u;
                return;
            }
            goto label_8004AA40;
    }

label_8004C04C:
    ctx->pc = 0x8004C04Cu;
    ctx->downcount -= 9;
    // 8004C04C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C050:
    ctx->pc = 0x8004C050u;
    // 8004C050: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8004C054:
    ctx->pc = 0x8004C054u;
    // 8004C054: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C058:
    ctx->pc = 0x8004C058u;
    // 8004C058: stw     r0, 5884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C05C:
    ctx->pc = 0x8004C05Cu;
    // 8004C05C: lwz     r3, 6100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C060:
    ctx->pc = 0x8004C060u;
    // 8004C060: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004C064:
    ctx->pc = 0x8004C064u;
    // 8004C064: stw     r0, 10268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C068:
    ctx->pc = 0x8004C068u;
    // 8004C068: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8004C06C:
    ctx->pc = 0x8004C06Cu;
    // 8004C06C: stw     r0, 6100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C070:
    ctx->pc = 0x8004C070u;
    ctx->downcount -= 5;
    // 8004C070: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C074:
    ctx->pc = 0x8004C074u;
    // 8004C074: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C078:
    ctx->pc = 0x8004C078u;
    // 8004C078: lwz     r12, 10244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8004C07C:
    ctx->pc = 0x8004C07Cu;
    // 8004C07C: cmplwi  r12, 0x0000
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

label_8004C080:
    ctx->pc = 0x8004C080u;
    // 8004C080: bc    12, 2, 0x8004C090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C090;
        }
    }

label_8004C084:
    ctx->pc = 0x8004C084u;
    ctx->downcount -= 4;
    // 8004C084: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C088:
    ctx->pc = 0x8004C088u;
    // 8004C088: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8004C08C:
    ctx->pc = 0x8004C08Cu;
    // 8004C08C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8004C090u;
            ctx->pc = target;
            return;
        }
    }

label_8004C090:
    ctx->pc = 0x8004C090u;
    ctx->downcount -= 7;
    // 8004C090: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C094:
    ctx->pc = 0x8004C094u;
    // 8004C094: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C098:
    ctx->pc = 0x8004C098u;
    // 8004C098: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C09C:
    ctx->pc = 0x8004C09Cu;
    // 8004C09C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C0A0:
    ctx->pc = 0x8004C0A0u;
    // 8004C0A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C0A4:
    ctx->pc = 0x8004C0A4u;
    // 8004C0A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C0A8:
    ctx->pc = 0x8004C0A8u;
    ctx->downcount -= 18;
    // 8004C0A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C0AC:
    ctx->pc = 0x8004C0ACu;
    // 8004C0AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C0B0:
    ctx->pc = 0x8004C0B0u;
    // 8004C0B0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C0B4:
    ctx->pc = 0x8004C0B4u;
    // 8004C0B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C0B8:
    ctx->pc = 0x8004C0B8u;
    // 8004C0B8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C0BC:
    ctx->pc = 0x8004C0BCu;
    // 8004C0BC: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C0C0:
    ctx->pc = 0x8004C0C0u;
    // 8004C0C0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C0C4:
    ctx->pc = 0x8004C0C4u;
    // 8004C0C4: addi    r30, r31, 5876
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(5876);

label_8004C0C8:
    ctx->pc = 0x8004C0C8u;
    // 8004C0C8: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004C0CC:
    ctx->pc = 0x8004C0CCu;
    // 8004C0CC: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004C0D0:
    ctx->pc = 0x8004C0D0u;
    // 8004C0D0: lwz     r0, 5876(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5876);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C0D4:
    ctx->pc = 0x8004C0D4u;
    // 8004C0D4: mulli   r0, r0, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004C0D8:
    ctx->pc = 0x8004C0D8u;
    // 8004C0D8: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C0DC:
    ctx->pc = 0x8004C0DCu;
    // 8004C0DC: lwz     r28, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004C0E0:
    ctx->pc = 0x8004C0E0u;
    // 8004C0E0: cmplwi  r28, 0x0000
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

label_8004C0E4:
    ctx->pc = 0x8004C0E4u;
    // 8004C0E4: bc    12, 2, 0x8004C158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C158;
        }
    }

label_8004C0E8:
    ctx->pc = 0x8004C0E8u;
    ctx->downcount -= 4;
    // 8004C0E8: addi    r29, r31, 104
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(104);

label_8004C0EC:
    ctx->pc = 0x8004C0ECu;
    // 8004C0EC: lwzx    r0, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C0F0:
    ctx->pc = 0x8004C0F0u;
    // 8004C0F0: cmpwi   r0, 0
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

label_8004C0F4:
    ctx->pc = 0x8004C0F4u;
    // 8004C0F4: bc    4, 2, 0x8004C158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C158;
        }
    }

label_8004C0F8:
    ctx->pc = 0x8004C0F8u;
    ctx->downcount -= 3;
    // 8004C0F8: lwz     r0, 10268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C0FC:
    ctx->pc = 0x8004C0FCu;
    // 8004C0FC: cmpwi   r0, 0
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

label_8004C100:
    ctx->pc = 0x8004C100u;
    // 8004C100: bc    12, 2, 0x8004C110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C110;
        }
    }

label_8004C104:
    ctx->pc = 0x8004C104u;
    ctx->downcount -= 1;
    // 8004C104: bl      0x8004A8AC
    {
            ctx->lr = 0x8004C108u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A8ACu;
                return;
            }
            goto label_8004A8AC;
    }

label_8004C108:
    ctx->pc = 0x8004C108u;
    ctx->downcount -= 2;
    // 8004C108: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C10C:
    ctx->pc = 0x8004C10Cu;
    // 8004C10C: stw     r0, 10268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C110:
    ctx->pc = 0x8004C110u;
    ctx->downcount -= 1;
    // 8004C110: bl      0x8004A924
    {
            ctx->lr = 0x8004C114u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A924u;
                return;
            }
            goto label_8004A924;
    }

label_8004C114:
    ctx->pc = 0x8004C114u;
    ctx->downcount -= 6;
    // 8004C114: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C118:
    ctx->pc = 0x8004C118u;
    // 8004C118: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C11C:
    ctx->pc = 0x8004C11Cu;
    // 8004C11C: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C120:
    ctx->pc = 0x8004C120u;
    // 8004C120: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004C124:
    ctx->pc = 0x8004C124u;
    // 8004C124: stw     r0, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C128:
    ctx->pc = 0x8004C128u;
    // 8004C128: bl      0x800411D8
    {
            ctx->lr = 0x8004C12Cu;
            ctx->pc = 0x800411D8u;
            return;
    }

label_8004C12C:
    ctx->pc = 0x8004C12Cu;
    ctx->downcount -= 11;
    // 8004C12C: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C130:
    ctx->pc = 0x8004C130u;
    // 8004C130: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C134:
    ctx->pc = 0x8004C134u;
    // 8004C134: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C138:
    ctx->pc = 0x8004C138u;
    // 8004C138: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004C13C:
    ctx->pc = 0x8004C13Cu;
    // 8004C13C: mulli   r0, r0, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004C140:
    ctx->pc = 0x8004C140u;
    // 8004C140: stw     r28, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004C144:
    ctx->pc = 0x8004C144u;
    // 8004C144: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C148:
    ctx->pc = 0x8004C148u;
    // 8004C148: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004C14C:
    ctx->pc = 0x8004C14Cu;
    // 8004C14C: bl      0x8004BA74
    {
            ctx->lr = 0x8004C150u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BA74u;
                return;
            }
            goto label_8004BA74;
    }

label_8004C150:
    ctx->pc = 0x8004C150u;
    ctx->downcount -= 2;
    // 8004C150: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004C154:
    ctx->pc = 0x8004C154u;
    // 8004C154: b       0x8004C15C
    {
            goto label_8004C15C;
    }

label_8004C158:
    ctx->pc = 0x8004C158u;
    ctx->downcount -= 1;
    // 8004C158: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C15C:
    ctx->pc = 0x8004C15Cu;
    ctx->downcount -= 9;
    // 8004C15C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C160:
    ctx->pc = 0x8004C160u;
    // 8004C160: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C164:
    ctx->pc = 0x8004C164u;
    // 8004C164: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C168:
    ctx->pc = 0x8004C168u;
    // 8004C168: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004C16C:
    ctx->pc = 0x8004C16Cu;
    // 8004C16C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004C170:
    ctx->pc = 0x8004C170u;
    // 8004C170: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C174:
    ctx->pc = 0x8004C174u;
    // 8004C174: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004C178:
    ctx->pc = 0x8004C178u;
    // 8004C178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C17C:
    ctx->pc = 0x8004C17Cu;
    ctx->downcount -= 10;
    // 8004C17C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C180:
    ctx->pc = 0x8004C180u;
    // 8004C180: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C184:
    ctx->pc = 0x8004C184u;
    // 8004C184: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C188:
    ctx->pc = 0x8004C188u;
    // 8004C188: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C18C:
    ctx->pc = 0x8004C18Cu;
    // 8004C18C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C190:
    ctx->pc = 0x8004C190u;
    // 8004C190: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C194:
    ctx->pc = 0x8004C194u;
    // 8004C194: lwz     r0, 10248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C198:
    ctx->pc = 0x8004C198u;
    // 8004C198: lwz     r4, 5880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C19C:
    ctx->pc = 0x8004C19Cu;
    // 8004C19C: cmpw    r0, r4
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

label_8004C1A0:
    ctx->pc = 0x8004C1A0u;
    // 8004C1A0: bc    4, 2, 0x8004C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C240;
        }
    }

label_8004C1A4:
    ctx->pc = 0x8004C1A4u;
    ctx->downcount -= 1;
    // 8004C1A4: bl      0x800414E0
    {
            ctx->lr = 0x8004C1A8u;
            ctx->pc = 0x800414E0u;
            return;
    }

label_8004C1A8:
    ctx->pc = 0x8004C1A8u;
    ctx->downcount -= 3;
    // 8004C1A8: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8004C1AC:
    ctx->pc = 0x8004C1ACu;
    // 8004C1AC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8004C1B0:
    ctx->pc = 0x8004C1B0u;
    // 8004C1B0: bl      0x800410FC
    {
            ctx->lr = 0x8004C1B4u;
            ctx->pc = 0x800410FCu;
            return;
    }

label_8004C1B4:
    ctx->pc = 0x8004C1B4u;
    ctx->downcount -= 6;
    // 8004C1B4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C1B8:
    ctx->pc = 0x8004C1B8u;
    // 8004C1B8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C1BC:
    ctx->pc = 0x8004C1BCu;
    // 8004C1BC: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C1C0:
    ctx->pc = 0x8004C1C0u;
    // 8004C1C0: lwz     r3, 10252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C1C4:
    ctx->pc = 0x8004C1C4u;
    // 8004C1C4: cmplw   r3, r0
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

label_8004C1C8:
    ctx->pc = 0x8004C1C8u;
    // 8004C1C8: bc    4, 2, 0x8004C234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C234;
        }
    }

label_8004C1CC:
    ctx->pc = 0x8004C1CCu;
    ctx->downcount -= 2;
    // 8004C1CC: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_8004C1D0:
    ctx->pc = 0x8004C1D0u;
    // 8004C1D0: bl      0x800235D8
    {
            ctx->lr = 0x8004C1D4u;
            ctx->pc = 0x800235D8u;
            return;
    }

label_8004C1D4:
    ctx->pc = 0x8004C1D4u;
    ctx->downcount -= 2;
    // 8004C1D4: cmpwi   r3, 0
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

label_8004C1D8:
    ctx->pc = 0x8004C1D8u;
    // 8004C1D8: bc    4, 2, 0x8004C1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C1F4;
        }
    }

label_8004C1DC:
    ctx->pc = 0x8004C1DCu;
    ctx->downcount -= 6;
    // 8004C1DC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C1E0:
    ctx->pc = 0x8004C1E0u;
    // 8004C1E0: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C1E4:
    ctx->pc = 0x8004C1E4u;
    // 8004C1E4: lwz     r4, 10260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10260);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C1E8:
    ctx->pc = 0x8004C1E8u;
    // 8004C1E8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8004C1EC:
    ctx->pc = 0x8004C1ECu;
    // 8004C1EC: rlwinm r0, r0, 0, 4, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0FFFFFFFu;
    }

label_8004C1F0:
    ctx->pc = 0x8004C1F0u;
    // 8004C1F0: stw     r0, 10260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C1F4:
    ctx->pc = 0x8004C1F4u;
    ctx->downcount -= 6;
    // 8004C1F4: lis     r3, -32728
    ctx->gpr[3] = ((u32)(s32)(-32728) << 16);

label_8004C1F8:
    ctx->pc = 0x8004C1F8u;
    // 8004C1F8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C1FC:
    ctx->pc = 0x8004C1FCu;
    // 8004C1FC: addi    r3, r3, -7132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7132);

label_8004C200:
    ctx->pc = 0x8004C200u;
    // 8004C200: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C204:
    ctx->pc = 0x8004C204u;
    // 8004C204: cmplw   r3, r0
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

label_8004C208:
    ctx->pc = 0x8004C208u;
    // 8004C208: bc    12, 2, 0x8004C234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C234;
        }
    }

label_8004C20C:
    ctx->pc = 0x8004C20Cu;
    ctx->downcount -= 5;
    // 8004C20C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C210:
    ctx->pc = 0x8004C210u;
    // 8004C210: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C214:
    ctx->pc = 0x8004C214u;
    // 8004C214: lwz     r0, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C218:
    ctx->pc = 0x8004C218u;
    // 8004C218: cmpwi   r0, 0
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

label_8004C21C:
    ctx->pc = 0x8004C21Cu;
    // 8004C21C: bc    4, 2, 0x8004C234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C234;
        }
    }

label_8004C220:
    ctx->pc = 0x8004C220u;
    ctx->downcount -= 5;
    // 8004C220: lwz     r4, 10256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C224:
    ctx->pc = 0x8004C224u;
    // 8004C224: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8004C228:
    ctx->pc = 0x8004C228u;
    // 8004C228: rlwinm r0, r0, 0, 4, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0FFFFFFFu;
    }

label_8004C22C:
    ctx->pc = 0x8004C22Cu;
    // 8004C22C: stw     r0, 10256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C230:
    ctx->pc = 0x8004C230u;
    // 8004C230: b       0x8004C25C
    {
            goto label_8004C25C;
    }

label_8004C234:
    ctx->pc = 0x8004C234u;
    ctx->downcount -= 3;
    // 8004C234: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C238:
    ctx->pc = 0x8004C238u;
    // 8004C238: stw     r0, 10252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C23C:
    ctx->pc = 0x8004C23Cu;
    // 8004C23C: b       0x8004C24C
    {
            goto label_8004C24C;
    }

label_8004C240:
    ctx->pc = 0x8004C240u;
    ctx->downcount -= 3;
    // 8004C240: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C244:
    ctx->pc = 0x8004C244u;
    // 8004C244: stw     r4, 10248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10248);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004C248:
    ctx->pc = 0x8004C248u;
    // 8004C248: stw     r0, 10252(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C24C:
    ctx->pc = 0x8004C24Cu;
    ctx->downcount -= 4;
    // 8004C24C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C250:
    ctx->pc = 0x8004C250u;
    // 8004C250: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C254:
    ctx->pc = 0x8004C254u;
    // 8004C254: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C258:
    ctx->pc = 0x8004C258u;
    // 8004C258: stw     r0, 10256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C25C:
    ctx->pc = 0x8004C25Cu;
    ctx->downcount -= 6;
    // 8004C25C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C260:
    ctx->pc = 0x8004C260u;
    // 8004C260: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C264:
    ctx->pc = 0x8004C264u;
    // 8004C264: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C268:
    ctx->pc = 0x8004C268u;
    // 8004C268: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004C26C:
    ctx->pc = 0x8004C26Cu;
    // 8004C26C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C270:
    ctx->pc = 0x8004C270u;
    ctx->downcount -= 10;
    // 8004C270: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C274:
    ctx->pc = 0x8004C274u;
    // 8004C274: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C278:
    ctx->pc = 0x8004C278u;
    // 8004C278: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C27C:
    ctx->pc = 0x8004C27Cu;
    // 8004C27C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C280:
    ctx->pc = 0x8004C280u;
    // 8004C280: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C284:
    ctx->pc = 0x8004C284u;
    // 8004C284: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C288:
    ctx->pc = 0x8004C288u;
    // 8004C288: addi    r3, r4, -17080
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C28C:
    ctx->pc = 0x8004C28Cu;
    // 8004C28C: lwz     r0, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C290:
    ctx->pc = 0x8004C290u;
    // 8004C290: cmpwi   r0, 2
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

label_8004C294:
    ctx->pc = 0x8004C294u;
    // 8004C294: bc    4, 2, 0x8004C2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C2A4;
        }
    }

label_8004C298:
    ctx->pc = 0x8004C298u;
    ctx->downcount -= 3;
    // 8004C298: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C29C:
    ctx->pc = 0x8004C29Cu;
    // 8004C29C: stw     r0, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C2A0:
    ctx->pc = 0x8004C2A0u;
    // 8004C2A0: stw     r0, 10272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C2A4:
    ctx->pc = 0x8004C2A4u;
    ctx->downcount -= 1;
    // 8004C2A4: bl      0x8004BEF0
    {
            ctx->lr = 0x8004C2A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BEF0u;
                return;
            }
            goto label_8004BEF0;
    }

label_8004C2A8:
    ctx->pc = 0x8004C2A8u;
    ctx->downcount -= 5;
    // 8004C2A8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C2AC:
    ctx->pc = 0x8004C2ACu;
    // 8004C2AC: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C2B0:
    ctx->pc = 0x8004C2B0u;
    // 8004C2B0: lwz     r12, 10240(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10240);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8004C2B4:
    ctx->pc = 0x8004C2B4u;
    // 8004C2B4: cmplwi  r12, 0x0000
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

label_8004C2B8:
    ctx->pc = 0x8004C2B8u;
    // 8004C2B8: bc    12, 2, 0x8004C2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C2C8;
        }
    }

label_8004C2BC:
    ctx->pc = 0x8004C2BCu;
    ctx->downcount -= 4;
    // 8004C2BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004C2C0:
    ctx->pc = 0x8004C2C0u;
    // 8004C2C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8004C2C4:
    ctx->pc = 0x8004C2C4u;
    // 8004C2C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8004C2C8u;
            ctx->pc = target;
            return;
        }
    }

label_8004C2C8:
    ctx->pc = 0x8004C2C8u;
    ctx->downcount -= 4;
    // 8004C2C8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C2CC:
    ctx->pc = 0x8004C2CCu;
    // 8004C2CC: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C2D0:
    ctx->pc = 0x8004C2D0u;
    // 8004C2D0: addi    r3, r3, 76
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(76);

label_8004C2D4:
    ctx->pc = 0x8004C2D4u;
    // 8004C2D4: bl      0x80023578
    {
            ctx->lr = 0x8004C2D8u;
            ctx->pc = 0x80023578u;
            return;
    }

label_8004C2D8:
    ctx->pc = 0x8004C2D8u;
    ctx->downcount -= 1;
    // 8004C2D8: bl      0x8004C17C
    {
            ctx->lr = 0x8004C2DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C17Cu;
                return;
            }
            goto label_8004C17C;
    }

label_8004C2DC:
    ctx->pc = 0x8004C2DCu;
    ctx->downcount -= 6;
    // 8004C2DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C2E0:
    ctx->pc = 0x8004C2E0u;
    // 8004C2E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C2E4:
    ctx->pc = 0x8004C2E4u;
    // 8004C2E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C2E8:
    ctx->pc = 0x8004C2E8u;
    // 8004C2E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C2EC:
    ctx->pc = 0x8004C2ECu;
    // 8004C2EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C2F0:
    ctx->pc = 0x8004C2F0u;
    ctx->downcount -= 13;
    // 8004C2F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C2F4:
    ctx->pc = 0x8004C2F4u;
    // 8004C2F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C2F8:
    ctx->pc = 0x8004C2F8u;
    // 8004C2F8: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C2FC:
    ctx->pc = 0x8004C2FCu;
    // 8004C2FC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C300:
    ctx->pc = 0x8004C300u;
    // 8004C300: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C304:
    ctx->pc = 0x8004C304u;
    // 8004C304: addi    r31, r4, -17080
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C308:
    ctx->pc = 0x8004C308u;
    // 8004C308: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C30C:
    ctx->pc = 0x8004C30Cu;
    // 8004C30C: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004C310:
    ctx->pc = 0x8004C310u;
    // 8004C310: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004C314:
    ctx->pc = 0x8004C314u;
    // 8004C314: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C318:
    ctx->pc = 0x8004C318u;
    // 8004C318: lwz     r0, 10264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C31C:
    ctx->pc = 0x8004C31Cu;
    // 8004C31C: cmpwi   r0, 0
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

label_8004C320:
    ctx->pc = 0x8004C320u;
    // 8004C320: bc    4, 2, 0x8004C328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C328;
        }
    }

label_8004C324:
    ctx->pc = 0x8004C324u;
    ctx->downcount -= 1;
    // 8004C324: bl      0x8004AAD8
    {
            ctx->lr = 0x8004C328u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004AAD8u;
                return;
            }
            goto label_8004AAD8;
    }

label_8004C328:
    ctx->pc = 0x8004C328u;
    ctx->downcount -= 5;
    // 8004C328: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C32C:
    ctx->pc = 0x8004C32Cu;
    // 8004C32C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8004C330:
    ctx->pc = 0x8004C330u;
    // 8004C330: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C334:
    ctx->pc = 0x8004C334u;
    // 8004C334: addi    r30, r3, 76
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(76);

label_8004C338:
    ctx->pc = 0x8004C338u;
    // 8004C338: b       0x8004C348
    {
            goto label_8004C348;
    }

label_8004C33C:
    ctx->downcount -= 2;
    // 8004C33C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C340:
    // 8004C340: bl      0x80023508
    {
            ctx->lr = 0x8004C344u;
            ctx->pc = 0x80023508u;
            return;
    }

label_8004C344:
    ctx->downcount -= 1;
    // 8004C344: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8004C348:
    ctx->downcount -= 2;
    // 8004C348: cmpw    r29, r28
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

label_8004C34C:
    // 8004C34C: bc    12, 0, 0x8004C33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C33Cu;
                return;
            }
            goto label_8004C33C;
        }
    }

label_8004C350:
    ctx->pc = 0x8004C350u;
    ctx->downcount -= 3;
    // 8004C350: lwz     r0, 10264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C354:
    ctx->pc = 0x8004C354u;
    // 8004C354: cmpwi   r0, 0
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

label_8004C358:
    ctx->pc = 0x8004C358u;
    // 8004C358: bc    4, 2, 0x8004C360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C360;
        }
    }

label_8004C35C:
    ctx->pc = 0x8004C35Cu;
    ctx->downcount -= 1;
    // 8004C35C: bl      0x8004AB18
    {
            ctx->lr = 0x8004C360u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004AB18u;
                return;
            }
            goto label_8004AB18;
    }

label_8004C360:
    ctx->pc = 0x8004C360u;
    ctx->downcount -= 11;
    // 8004C360: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C364:
    ctx->pc = 0x8004C364u;
    // 8004C364: stw     r0, 10264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C368:
    ctx->pc = 0x8004C368u;
    // 8004C368: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C36C:
    ctx->pc = 0x8004C36Cu;
    // 8004C36C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C370:
    ctx->pc = 0x8004C370u;
    // 8004C370: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C374:
    ctx->pc = 0x8004C374u;
    // 8004C374: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004C378:
    ctx->pc = 0x8004C378u;
    // 8004C378: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004C37C:
    ctx->pc = 0x8004C37Cu;
    // 8004C37C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C380:
    ctx->pc = 0x8004C380u;
    // 8004C380: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004C384:
    ctx->pc = 0x8004C384u;
    // 8004C384: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C388:
    ctx->pc = 0x8004C388u;
    ctx->downcount -= 8;
    // 8004C388: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C38C:
    ctx->pc = 0x8004C38Cu;
    // 8004C38C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C390:
    ctx->pc = 0x8004C390u;
    // 8004C390: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C394:
    ctx->pc = 0x8004C394u;
    // 8004C394: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004C398:
    ctx->pc = 0x8004C398u;
    // 8004C398: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C39C:
    ctx->pc = 0x8004C39Cu;
    // 8004C39C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C3A0:
    ctx->pc = 0x8004C3A0u;
    // 8004C3A0: addi    r3, r3, 76
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(76);

label_8004C3A4:
    ctx->pc = 0x8004C3A4u;
    // 8004C3A4: bl      0x800234B0
    {
            ctx->lr = 0x8004C3A8u;
            ctx->pc = 0x800234B0u;
            return;
    }

label_8004C3A8:
    ctx->pc = 0x8004C3A8u;
    ctx->downcount -= 5;
    // 8004C3A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C3AC:
    ctx->pc = 0x8004C3ACu;
    // 8004C3AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C3B0:
    ctx->pc = 0x8004C3B0u;
    // 8004C3B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C3B4:
    ctx->pc = 0x8004C3B4u;
    // 8004C3B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C3B8:
    ctx->pc = 0x8004C3B8u;
    ctx->downcount -= 6;
    // 8004C3B8: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C3BC:
    ctx->pc = 0x8004C3BCu;
    // 8004C3BC: addi    r4, r4, -17080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C3C0:
    ctx->pc = 0x8004C3C0u;
    // 8004C3C0: lwz     r0, 10244(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C3C4:
    ctx->pc = 0x8004C3C4u;
    // 8004C3C4: stw     r3, 10244(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004C3C8:
    ctx->pc = 0x8004C3C8u;
    // 8004C3C8: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004C3CC:
    ctx->pc = 0x8004C3CCu;
    // 8004C3CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C3D0:
    ctx->pc = 0x8004C3D0u;
    ctx->downcount -= 5;
    // 8004C3D0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C3D4:
    ctx->pc = 0x8004C3D4u;
    // 8004C3D4: addi    r5, r3, -17080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C3D8:
    ctx->pc = 0x8004C3D8u;
    // 8004C3D8: lwz     r0, 5976(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C3DC:
    ctx->pc = 0x8004C3DCu;
    // 8004C3DC: cmpwi   r0, 1
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

label_8004C3E0:
    ctx->pc = 0x8004C3E0u;
    // 8004C3E0: bc    4, 2, 0x8004C3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C3EC;
        }
    }

label_8004C3E4:
    ctx->pc = 0x8004C3E4u;
    ctx->downcount -= 2;
    // 8004C3E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C3E8:
    ctx->pc = 0x8004C3E8u;
    // 8004C3E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C3EC:
    ctx->pc = 0x8004C3ECu;
    ctx->downcount -= 4;
    // 8004C3EC: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_8004C3F0:
    ctx->pc = 0x8004C3F0u;
    // 8004C3F0: lwz     r0, 5980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C3F4:
    ctx->pc = 0x8004C3F4u;
    // 8004C3F4: cmpwi   r0, 1
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

label_8004C3F8:
    ctx->pc = 0x8004C3F8u;
    // 8004C3F8: bc    4, 2, 0x8004C404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C404;
        }
    }

label_8004C3FC:
    ctx->pc = 0x8004C3FCu;
    ctx->downcount -= 2;
    // 8004C3FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C400:
    ctx->pc = 0x8004C400u;
    // 8004C400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C404:
    ctx->pc = 0x8004C404u;
    ctx->downcount -= 4;
    // 8004C404: lwz     r0, 5980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C408:
    ctx->pc = 0x8004C408u;
    // 8004C408: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8004C40C:
    ctx->pc = 0x8004C40Cu;
    // 8004C40C: cmpwi   r0, 1
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

label_8004C410:
    ctx->pc = 0x8004C410u;
    // 8004C410: bc    4, 2, 0x8004C41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C41C;
        }
    }

label_8004C414:
    ctx->pc = 0x8004C414u;
    ctx->downcount -= 2;
    // 8004C414: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C418:
    ctx->pc = 0x8004C418u;
    // 8004C418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C41C:
    ctx->pc = 0x8004C41Cu;
    ctx->downcount -= 3;
    // 8004C41C: lwz     r0, 5980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C420:
    ctx->pc = 0x8004C420u;
    // 8004C420: cmpwi   r0, 1
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

label_8004C424:
    ctx->pc = 0x8004C424u;
    // 8004C424: bc    4, 2, 0x8004C430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C430;
        }
    }

label_8004C428:
    ctx->pc = 0x8004C428u;
    ctx->downcount -= 2;
    // 8004C428: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C42C:
    ctx->pc = 0x8004C42Cu;
    // 8004C42C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C430:
    ctx->pc = 0x8004C430u;
    ctx->downcount -= 7;
    // 8004C430: lwz     r4, 6068(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6068);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C434:
    ctx->pc = 0x8004C434u;
    // 8004C434: lwz     r3, 6056(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6056);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C438:
    ctx->pc = 0x8004C438u;
    // 8004C438: lwz     r0, 5908(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5908);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C43C:
    ctx->pc = 0x8004C43Cu;
    // 8004C43C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8004C440:
    ctx->pc = 0x8004C440u;
    // 8004C440: stw     r4, 6068(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6068);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004C444:
    ctx->pc = 0x8004C444u;
    // 8004C444: cmplw   r3, r0
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

label_8004C448:
    ctx->pc = 0x8004C448u;
    // 8004C448: bc    4, 2, 0x8004C454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C454;
        }
    }

label_8004C44C:
    ctx->pc = 0x8004C44Cu;
    ctx->downcount -= 2;
    // 8004C44C: lwz     r3, 5904(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5904);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C450:
    ctx->pc = 0x8004C450u;
    // 8004C450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C454:
    ctx->pc = 0x8004C454u;
    ctx->downcount -= 2;
    // 8004C454: lwz     r3, 5900(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C458:
    ctx->pc = 0x8004C458u;
    // 8004C458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C45C:
    ctx->pc = 0x8004C45Cu;
    ctx->downcount -= 11;
    // 8004C45C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C460:
    ctx->pc = 0x8004C460u;
    // 8004C460: cmpwi   r3, 4
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

label_8004C464:
    ctx->pc = 0x8004C464u;
    // 8004C464: addi    r4, r4, -17080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C468:
    ctx->pc = 0x8004C468u;
    // 8004C468: lwz     r0, 6060(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6060);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C46C:
    ctx->pc = 0x8004C46Cu;
    // 8004C46C: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8004C470:
    ctx->pc = 0x8004C470u;
    // 8004C470: mullw   r4, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_8004C474:
    ctx->pc = 0x8004C474u;
    // 8004C474: bc    4, 2, 0x8004C47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C47C;
        }
    }

label_8004C478:
    ctx->pc = 0x8004C478u;
    ctx->downcount -= 1;
    // 8004C478: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004C47C:
    ctx->pc = 0x8004C47Cu;
    ctx->downcount -= 5;
    // 8004C47C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C480:
    ctx->pc = 0x8004C480u;
    // 8004C480: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C484:
    ctx->pc = 0x8004C484u;
    // 8004C484: lwz     r0, 5904(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5904);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C488:
    ctx->pc = 0x8004C488u;
    // 8004C488: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C48C:
    ctx->pc = 0x8004C48Cu;
    // 8004C48C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C490:
    ctx->pc = 0x8004C490u;
    ctx->downcount -= 10;
    // 8004C490: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C494:
    ctx->pc = 0x8004C494u;
    // 8004C494: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C498:
    ctx->pc = 0x8004C498u;
    // 8004C498: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C49C:
    ctx->pc = 0x8004C49Cu;
    // 8004C49C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C4A0:
    ctx->pc = 0x8004C4A0u;
    // 8004C4A0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C4A4:
    ctx->pc = 0x8004C4A4u;
    // 8004C4A4: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004C4A8:
    ctx->pc = 0x8004C4A8u;
    // 8004C4A8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004C4AC:
    ctx->pc = 0x8004C4ACu;
    // 8004C4AC: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8004C4B0:
    ctx->pc = 0x8004C4B0u;
    // 8004C4B0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004C4B4:
    ctx->pc = 0x8004C4B4u;
    // 8004C4B4: bl      0x8004C45C
    {
            ctx->lr = 0x8004C4B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C45Cu;
                return;
            }
            goto label_8004C45C;
    }

label_8004C4B8:
    ctx->pc = 0x8004C4B8u;
    ctx->downcount -= 10;
    // 8004C4B8: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C4BC:
    ctx->pc = 0x8004C4BCu;
    // 8004C4BC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C4C0:
    ctx->pc = 0x8004C4C0u;
    // 8004C4C0: addi    r31, r4, -17080
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C4C4:
    ctx->pc = 0x8004C4C4u;
    // 8004C4C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C4C8:
    ctx->pc = 0x8004C4C8u;
    // 8004C4C8: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004C4CC:
    ctx->pc = 0x8004C4CCu;
    // 8004C4CC: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004C4D0:
    ctx->pc = 0x8004C4D0u;
    // 8004C4D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004C4D4:
    ctx->pc = 0x8004C4D4u;
    // 8004C4D4: lhz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004C4D8:
    ctx->pc = 0x8004C4D8u;
    // 8004C4D8: lhz     r6, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004C4DC:
    ctx->pc = 0x8004C4DCu;
    // 8004C4DC: bl      0x80043188
    {
            ctx->lr = 0x8004C4E0u;
            ctx->pc = 0x80043188u;
            return;
    }

label_8004C4E0:
    ctx->pc = 0x8004C4E0u;
    ctx->downcount -= 10;
    // 8004C4E0: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C4E4:
    ctx->pc = 0x8004C4E4u;
    // 8004C4E4: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004C4E8:
    ctx->pc = 0x8004C4E8u;
    // 8004C4E8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8004C4EC:
    ctx->pc = 0x8004C4ECu;
    // 8004C4EC: lhz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004C4F0:
    ctx->pc = 0x8004C4F0u;
    // 8004C4F0: lhz     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004C4F4:
    ctx->pc = 0x8004C4F4u;
    // 8004C4F4: srawi r3, r3, 1
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

label_8004C4F8:
    ctx->pc = 0x8004C4F8u;
    // 8004C4F8: srawi r0, r0, 1
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

label_8004C4FC:
    ctx->pc = 0x8004C4FCu;
    // 8004C4FC: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8004C500:
    ctx->pc = 0x8004C500u;
    // 8004C500: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8004C504:
    ctx->pc = 0x8004C504u;
    // 8004C504: bl      0x80043238
    {
            ctx->lr = 0x8004C508u;
            ctx->pc = 0x80043238u;
            return;
    }

label_8004C508:
    ctx->pc = 0x8004C508u;
    ctx->downcount -= 3;
    // 8004C508: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C50C:
    ctx->pc = 0x8004C50Cu;
    // 8004C50C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8004C510:
    ctx->pc = 0x8004C510u;
    // 8004C510: bl      0x800438AC
    {
            ctx->lr = 0x8004C514u;
            ctx->pc = 0x800438ACu;
            return;
    }

label_8004C514:
    ctx->pc = 0x8004C514u;
    ctx->downcount -= 1;
    // 8004C514: bl      0x80042A40
    {
            ctx->lr = 0x8004C518u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_8004C518:
    ctx->pc = 0x8004C518u;
    ctx->downcount -= 10;
    // 8004C518: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C51C:
    ctx->pc = 0x8004C51Cu;
    // 8004C51C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C520:
    ctx->pc = 0x8004C520u;
    // 8004C520: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C524:
    ctx->pc = 0x8004C524u;
    // 8004C524: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C528:
    ctx->pc = 0x8004C528u;
    // 8004C528: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004C52C:
    ctx->pc = 0x8004C52Cu;
    // 8004C52C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004C530:
    ctx->pc = 0x8004C530u;
    // 8004C530: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C534:
    ctx->pc = 0x8004C534u;
    // 8004C534: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004C538:
    ctx->pc = 0x8004C538u;
    // 8004C538: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C53C:
    ctx->pc = 0x8004C53Cu;
    ctx->downcount -= 9;
    // 8004C53C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C540:
    ctx->pc = 0x8004C540u;
    // 8004C540: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C544:
    ctx->pc = 0x8004C544u;
    // 8004C544: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C548:
    ctx->pc = 0x8004C548u;
    // 8004C548: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C54C:
    ctx->pc = 0x8004C54Cu;
    // 8004C54C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C550:
    ctx->pc = 0x8004C550u;
    // 8004C550: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C554:
    ctx->pc = 0x8004C554u;
    // 8004C554: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C558:
    ctx->pc = 0x8004C558u;
    // 8004C558: lwz     r31, -6792(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6792);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C55C:
    ctx->pc = 0x8004C55Cu;
    // 8004C55C: bl      0x8002C86C
    {
            ctx->lr = 0x8004C560u;
            ctx->pc = 0x8002C86Cu;
            return;
    }

label_8004C560:
    ctx->pc = 0x8004C560u;
    ctx->downcount -= 10;
    // 8004C560: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C564:
    ctx->pc = 0x8004C564u;
    // 8004C564: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004C568:
    ctx->pc = 0x8004C568u;
    // 8004C568: stw     r30, -6792(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6792);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C56C:
    ctx->pc = 0x8004C56Cu;
    // 8004C56C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C570:
    ctx->pc = 0x8004C570u;
    // 8004C570: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C574:
    ctx->pc = 0x8004C574u;
    // 8004C574: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C578:
    ctx->pc = 0x8004C578u;
    // 8004C578: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C57C:
    ctx->pc = 0x8004C57Cu;
    // 8004C57C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C580:
    ctx->pc = 0x8004C580u;
    // 8004C580: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C584:
    ctx->pc = 0x8004C584u;
    ctx->downcount -= 11;
    // 8004C584: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C588:
    ctx->pc = 0x8004C588u;
    // 8004C588: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C58C:
    ctx->pc = 0x8004C58Cu;
    // 8004C58C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C590:
    ctx->pc = 0x8004C590u;
    // 8004C590: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C594:
    ctx->pc = 0x8004C594u;
    // 8004C594: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C598:
    ctx->pc = 0x8004C598u;
    // 8004C598: addi    r5, r4, -6796
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6796);

label_8004C59C:
    ctx->pc = 0x8004C59Cu;
    // 8004C59C: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C5A0:
    ctx->pc = 0x8004C5A0u;
    // 8004C5A0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C5A4:
    ctx->pc = 0x8004C5A4u;
    // 8004C5A4: lwz     r0, 6072(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6072);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C5A8:
    ctx->pc = 0x8004C5A8u;
    // 8004C5A8: cmpw    r3, r0
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

label_8004C5AC:
    ctx->pc = 0x8004C5ACu;
    // 8004C5AC: bc    12, 2, 0x8004C5BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C5BC;
        }
    }

label_8004C5B0:
    ctx->pc = 0x8004C5B0u;
    ctx->downcount -= 3;
    // 8004C5B0: stw     r3, 6072(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6072);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004C5B4:
    ctx->pc = 0x8004C5B4u;
    // 8004C5B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004C5B8:
    ctx->pc = 0x8004C5B8u;
    // 8004C5B8: bl      0x8004634C
    {
            ctx->lr = 0x8004C5BCu;
            ctx->pc = 0x8004634Cu;
            return;
    }

label_8004C5BC:
    ctx->pc = 0x8004C5BCu;
    ctx->downcount -= 5;
    // 8004C5BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C5C0:
    ctx->pc = 0x8004C5C0u;
    // 8004C5C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C5C4:
    ctx->pc = 0x8004C5C4u;
    // 8004C5C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C5C8:
    ctx->pc = 0x8004C5C8u;
    // 8004C5C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C5CC:
    ctx->pc = 0x8004C5CCu;
    ctx->downcount -= 4;
    // 8004C5CC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C5D0:
    ctx->pc = 0x8004C5D0u;
    // 8004C5D0: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C5D4:
    ctx->pc = 0x8004C5D4u;
    // 8004C5D4: lwz     r3, 6072(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6072);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C5D8:
    ctx->pc = 0x8004C5D8u;
    // 8004C5D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C5DC:
    ctx->pc = 0x8004C5DCu;
    ctx->downcount -= 6;
    // 8004C5DC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C5E0:
    ctx->pc = 0x8004C5E0u;
    // 8004C5E0: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C5E4:
    ctx->pc = 0x8004C5E4u;
    // 8004C5E4: lwz     r3, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C5E8:
    ctx->pc = 0x8004C5E8u;
    // 8004C5E8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8004C5EC:
    ctx->pc = 0x8004C5ECu;
    // 8004C5EC: stw     r0, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C5F0:
    ctx->pc = 0x8004C5F0u;
    // 8004C5F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C5F4:
    ctx->pc = 0x8004C5F4u;
    ctx->downcount -= 7;
    // 8004C5F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C5F8:
    ctx->pc = 0x8004C5F8u;
    // 8004C5F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C5FC:
    ctx->pc = 0x8004C5FCu;
    // 8004C5FC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C600:
    ctx->pc = 0x8004C600u;
    // 8004C600: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C604:
    ctx->pc = 0x8004C604u;
    // 8004C604: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C608:
    ctx->pc = 0x8004C608u;
    // 8004C608: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_8004C60C:
    ctx->pc = 0x8004C60Cu;
    // 8004C60C: bl      0x800235D8
    {
            ctx->lr = 0x8004C610u;
            ctx->pc = 0x800235D8u;
            return;
    }

label_8004C610:
    ctx->pc = 0x8004C610u;
    ctx->downcount -= 6;
    // 8004C610: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C614:
    ctx->pc = 0x8004C614u;
    // 8004C614: subfic  r3, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8004C618:
    ctx->pc = 0x8004C618u;
    // 8004C618: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C61C:
    ctx->pc = 0x8004C61Cu;
    // 8004C61C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C620:
    ctx->pc = 0x8004C620u;
    // 8004C620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C624:
    ctx->pc = 0x8004C624u;
    ctx->downcount -= 17;
    // 8004C624: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C628:
    ctx->pc = 0x8004C628u;
    // 8004C628: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C62C:
    ctx->pc = 0x8004C62Cu;
    // 8004C62C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C630:
    ctx->pc = 0x8004C630u;
    // 8004C630: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C634:
    ctx->pc = 0x8004C634u;
    // 8004C634: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C638:
    ctx->pc = 0x8004C638u;
    // 8004C638: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C63C:
    ctx->pc = 0x8004C63Cu;
    // 8004C63C: addi    r31, r4, 5880
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(5880);

label_8004C640:
    ctx->pc = 0x8004C640u;
    // 8004C640: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C644:
    ctx->pc = 0x8004C644u;
    // 8004C644: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8004C648:
    ctx->pc = 0x8004C648u;
    // 8004C648: lwz     r0, 5880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5880);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C64C:
    ctx->pc = 0x8004C64Cu;
    // 8004C64C: mulli   r30, r0, 24
    ctx->gpr[30] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004C650:
    ctx->pc = 0x8004C650u;
    // 8004C650: add   r3, r4, r30
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C654:
    ctx->pc = 0x8004C654u;
    // 8004C654: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C658:
    ctx->pc = 0x8004C658u;
    // 8004C658: cmpwi   r0, 0
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

label_8004C65C:
    ctx->pc = 0x8004C65Cu;
    // 8004C65C: bc    12, 2, 0x8004C678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C678;
        }
    }

label_8004C660:
    ctx->pc = 0x8004C660u;
    ctx->downcount -= 5;
    // 8004C660: lwz     r3, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C664:
    ctx->pc = 0x8004C664u;
    // 8004C664: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004C668:
    ctx->pc = 0x8004C668u;
    // 8004C668: stw     r3, 5892(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004C66C:
    ctx->pc = 0x8004C66Cu;
    // 8004C66C: stw     r0, 5884(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C670:
    ctx->pc = 0x8004C670u;
    // 8004C670: bl      0x8004AA00
    {
            ctx->lr = 0x8004C674u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004AA00u;
                return;
            }
            goto label_8004AA00;
    }

label_8004C674:
    ctx->pc = 0x8004C674u;
    ctx->downcount -= 1;
    // 8004C674: b       0x8004C684
    {
            goto label_8004C684;
    }

label_8004C678:
    ctx->pc = 0x8004C678u;
    ctx->downcount -= 3;
    // 8004C678: lwz     r3, 6100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C67C:
    ctx->pc = 0x8004C67Cu;
    // 8004C67C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8004C680:
    ctx->pc = 0x8004C680u;
    // 8004C680: stw     r0, 6100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C684:
    ctx->pc = 0x8004C684u;
    ctx->downcount -= 6;
    // 8004C684: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C688:
    ctx->pc = 0x8004C688u;
    // 8004C688: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C68C:
    ctx->pc = 0x8004C68Cu;
    // 8004C68C: add   r29, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8004C690:
    ctx->pc = 0x8004C690u;
    // 8004C690: lwzu     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[29] = ea;
    }

label_8004C694:
    ctx->pc = 0x8004C694u;
    // 8004C694: cmpwi   r0, -1
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

label_8004C698:
    ctx->pc = 0x8004C698u;
    // 8004C698: bc    12, 2, 0x8004C6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C6B0;
        }
    }

label_8004C69C:
    ctx->pc = 0x8004C69Cu;
    ctx->downcount -= 4;
    // 8004C69C: add   r3, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C6A0:
    ctx->pc = 0x8004C6A0u;
    // 8004C6A0: lwz     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C6A4:
    ctx->pc = 0x8004C6A4u;
    // 8004C6A4: cmpwi   r0, 0
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

label_8004C6A8:
    ctx->pc = 0x8004C6A8u;
    // 8004C6A8: bc    4, 2, 0x8004C6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C6B0;
        }
    }

label_8004C6AC:
    ctx->pc = 0x8004C6ACu;
    ctx->downcount -= 1;
    // 8004C6AC: bl      0x8004A950
    {
            ctx->lr = 0x8004C6B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A950u;
                return;
            }
            goto label_8004A950;
    }

label_8004C6B0:
    ctx->pc = 0x8004C6B0u;
    ctx->downcount -= 9;
    // 8004C6B0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8004C6B4:
    ctx->pc = 0x8004C6B4u;
    // 8004C6B4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C6B8:
    ctx->pc = 0x8004C6B8u;
    // 8004C6B8: addi    r0, r3, -17080
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C6BC:
    ctx->pc = 0x8004C6BCu;
    // 8004C6BC: stw     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004C6C0:
    ctx->pc = 0x8004C6C0u;
    // 8004C6C0: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C6C4:
    ctx->pc = 0x8004C6C4u;
    // 8004C6C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C6C8:
    ctx->pc = 0x8004C6C8u;
    // 8004C6C8: stw     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C6CC:
    ctx->pc = 0x8004C6CCu;
    // 8004C6CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004C6D0:
    ctx->pc = 0x8004C6D0u;
    // 8004C6D0: bl      0x8004BA74
    {
            ctx->lr = 0x8004C6D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004BA74u;
                return;
            }
            goto label_8004BA74;
    }

label_8004C6D4:
    ctx->pc = 0x8004C6D4u;
    ctx->downcount -= 8;
    // 8004C6D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C6D8:
    ctx->pc = 0x8004C6D8u;
    // 8004C6D8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C6DC:
    ctx->pc = 0x8004C6DCu;
    // 8004C6DC: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C6E0:
    ctx->pc = 0x8004C6E0u;
    // 8004C6E0: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8004C6E4:
    ctx->pc = 0x8004C6E4u;
    // 8004C6E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C6E8:
    ctx->pc = 0x8004C6E8u;
    // 8004C6E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8004C6EC:
    ctx->pc = 0x8004C6ECu;
    // 8004C6EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C6F0:
    ctx->pc = 0x8004C6F0u;
    ctx->downcount -= 4;
    // 8004C6F0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C6F4:
    ctx->pc = 0x8004C6F4u;
    // 8004C6F4: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C6F8:
    ctx->pc = 0x8004C6F8u;
    // 8004C6F8: lwz     r3, 6056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6056);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C6FC:
    ctx->pc = 0x8004C6FCu;
    // 8004C6FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C700:
    ctx->pc = 0x8004C700u;
    ctx->downcount -= 13;
    // 8004C700: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C704:
    ctx->pc = 0x8004C704u;
    // 8004C704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C708:
    ctx->pc = 0x8004C708u;
    // 8004C708: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C70C:
    ctx->pc = 0x8004C70Cu;
    // 8004C70C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C710:
    ctx->pc = 0x8004C710u;
    // 8004C710: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C714:
    ctx->pc = 0x8004C714u;
    // 8004C714: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C718:
    ctx->pc = 0x8004C718u;
    // 8004C718: lwz     r0, 5880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5880);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C71C:
    ctx->pc = 0x8004C71Cu;
    // 8004C71C: mulli   r0, r0, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_8004C720:
    ctx->pc = 0x8004C720u;
    // 8004C720: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004C724:
    ctx->pc = 0x8004C724u;
    // 8004C724: lwz     r31, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C728:
    ctx->pc = 0x8004C728u;
    // 8004C728: bl      0x8004C624
    {
            ctx->lr = 0x8004C72Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C624u;
                return;
            }
            goto label_8004C624;
    }

label_8004C72C:
    ctx->pc = 0x8004C72Cu;
    ctx->downcount -= 7;
    // 8004C72C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C730:
    ctx->pc = 0x8004C730u;
    // 8004C730: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8004C734:
    ctx->pc = 0x8004C734u;
    // 8004C734: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C738:
    ctx->pc = 0x8004C738u;
    // 8004C738: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C73C:
    ctx->pc = 0x8004C73Cu;
    // 8004C73C: lwz     r0, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C740:
    ctx->pc = 0x8004C740u;
    // 8004C740: cmpwi   r0, 0
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

label_8004C744:
    ctx->pc = 0x8004C744u;
    // 8004C744: bc    4, 2, 0x8004C74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004C74C;
        }
    }

label_8004C748:
    ctx->pc = 0x8004C748u;
    ctx->downcount -= 1;
    // 8004C748: bl      0x8004C0A8
    {
            ctx->lr = 0x8004C74Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C0A8u;
                return;
            }
            goto label_8004C0A8;
    }

label_8004C74C:
    ctx->pc = 0x8004C74Cu;
    ctx->downcount -= 2;
    // 8004C74C: cmpwi   r31, 0
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

label_8004C750:
    ctx->pc = 0x8004C750u;
    // 8004C750: bc    12, 2, 0x8004C774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C774;
        }
    }

label_8004C754:
    ctx->pc = 0x8004C754u;
    ctx->downcount -= 4;
    // 8004C754: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C758:
    ctx->pc = 0x8004C758u;
    // 8004C758: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C75C:
    ctx->pc = 0x8004C75Cu;
    // 8004C75C: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_8004C760:
    ctx->pc = 0x8004C760u;
    // 8004C760: bl      0x80023578
    {
            ctx->lr = 0x8004C764u;
            ctx->pc = 0x80023578u;
            return;
    }

label_8004C764:
    ctx->pc = 0x8004C764u;
    ctx->downcount -= 4;
    // 8004C764: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C768:
    ctx->pc = 0x8004C768u;
    // 8004C768: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004C76C:
    ctx->pc = 0x8004C76Cu;
    // 8004C76C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C770:
    ctx->pc = 0x8004C770u;
    // 8004C770: stw     r0, 10260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C774:
    ctx->pc = 0x8004C774u;
    ctx->downcount -= 6;
    // 8004C774: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C778:
    ctx->pc = 0x8004C778u;
    // 8004C778: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C77C:
    ctx->pc = 0x8004C77Cu;
    // 8004C77C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C780:
    ctx->pc = 0x8004C780u;
    // 8004C780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C784:
    ctx->pc = 0x8004C784u;
    // 8004C784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C788:
    ctx->pc = 0x8004C788u;
    ctx->downcount -= 7;
    // 8004C788: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C78C:
    ctx->pc = 0x8004C78Cu;
    // 8004C78C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C790:
    ctx->pc = 0x8004C790u;
    // 8004C790: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C794:
    ctx->pc = 0x8004C794u;
    // 8004C794: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C798:
    ctx->pc = 0x8004C798u;
    // 8004C798: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C79C:
    ctx->pc = 0x8004C79Cu;
    // 8004C79C: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C7A0:
    ctx->pc = 0x8004C7A0u;
    // 8004C7A0: b       0x8004C7B4
    {
            goto label_8004C7B4;
    }

label_8004C7A4:
    ctx->pc = 0x8004C7A4u;
    ctx->downcount -= 3;
    // 8004C7A4: lwz     r0, 5884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C7A8:
    // 8004C7A8: cmpwi   r0, 0
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

label_8004C7AC:
    // 8004C7AC: bc    12, 2, 0x8004C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C7B4;
        }
    }

label_8004C7B0:
    ctx->downcount -= 1;
    // 8004C7B0: bl      0x8002B64C
    {
            ctx->lr = 0x8004C7B4u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004C7B4:
    ctx->downcount -= 1;
    // 8004C7B4: bl      0x8004C5F4
    {
            ctx->lr = 0x8004C7B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C5F4u;
                return;
            }
            goto label_8004C5F4;
    }

label_8004C7B8:
    ctx->downcount -= 2;
    // 8004C7B8: cmpwi   r3, 0
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

label_8004C7BC:
    // 8004C7BC: bc    12, 1, 0x8004C7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C7A4u;
                return;
            }
            goto label_8004C7A4;
        }
    }

label_8004C7C0:
    ctx->pc = 0x8004C7C0u;
    ctx->downcount -= 6;
    // 8004C7C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C7C4:
    ctx->pc = 0x8004C7C4u;
    // 8004C7C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C7C8:
    ctx->pc = 0x8004C7C8u;
    // 8004C7C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C7CC:
    ctx->pc = 0x8004C7CCu;
    // 8004C7CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C7D0:
    ctx->pc = 0x8004C7D0u;
    // 8004C7D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C7D4:
    ctx->pc = 0x8004C7D4u;
    ctx->downcount -= 7;
    // 8004C7D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C7D8:
    ctx->pc = 0x8004C7D8u;
    // 8004C7D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C7DC:
    ctx->pc = 0x8004C7DCu;
    // 8004C7DC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C7E0:
    ctx->pc = 0x8004C7E0u;
    // 8004C7E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C7E4:
    ctx->pc = 0x8004C7E4u;
    // 8004C7E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C7E8:
    ctx->pc = 0x8004C7E8u;
    // 8004C7E8: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C7EC:
    ctx->pc = 0x8004C7ECu;
    // 8004C7EC: b       0x8004C800
    {
            goto label_8004C800;
    }

label_8004C7F0:
    ctx->pc = 0x8004C7F0u;
    ctx->downcount -= 3;
    // 8004C7F0: lwz     r0, 5884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C7F4:
    // 8004C7F4: cmpwi   r0, 0
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

label_8004C7F8:
    // 8004C7F8: bc    12, 2, 0x8004C800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C800;
        }
    }

label_8004C7FC:
    ctx->downcount -= 1;
    // 8004C7FC: bl      0x8002B64C
    {
            ctx->lr = 0x8004C800u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_8004C800:
    ctx->downcount -= 1;
    // 8004C800: bl      0x8004C5F4
    {
            ctx->lr = 0x8004C804u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C5F4u;
                return;
            }
            goto label_8004C5F4;
    }

label_8004C804:
    ctx->downcount -= 2;
    // 8004C804: cmpwi   r3, 0
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

label_8004C808:
    // 8004C808: bc    12, 1, 0x8004C7F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C7F0u;
                return;
            }
            goto label_8004C7F0;
        }
    }

label_8004C80C:
    ctx->pc = 0x8004C80Cu;
    ctx->downcount -= 6;
    // 8004C80C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C810:
    ctx->pc = 0x8004C810u;
    // 8004C810: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C814:
    ctx->pc = 0x8004C814u;
    // 8004C814: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C818:
    ctx->pc = 0x8004C818u;
    // 8004C818: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C81C:
    ctx->pc = 0x8004C81Cu;
    // 8004C81C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C820:
    ctx->pc = 0x8004C820u;
    ctx->downcount -= 4;
    // 8004C820: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C824:
    ctx->pc = 0x8004C824u;
    // 8004C824: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8004C828:
    ctx->pc = 0x8004C828u;
    // 8004C828: stw     r0, -17080(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C82C:
    ctx->pc = 0x8004C82Cu;
    // 8004C82C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C830:
    ctx->pc = 0x8004C830u;
    ctx->downcount -= 8;
    // 8004C830: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C834:
    ctx->pc = 0x8004C834u;
    // 8004C834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C838:
    ctx->pc = 0x8004C838u;
    // 8004C838: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C83C:
    ctx->pc = 0x8004C83Cu;
    // 8004C83C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C840:
    ctx->pc = 0x8004C840u;
    // 8004C840: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004C844:
    ctx->pc = 0x8004C844u;
    // 8004C844: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C848:
    ctx->pc = 0x8004C848u;
    // 8004C848: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C84C:
    ctx->pc = 0x8004C84Cu;
    // 8004C84C: bl      0x8004DCDC
    {
            ctx->lr = 0x8004C850u;
            ctx->pc = 0x8004DCDCu;
            return;
    }

label_8004C850:
    ctx->pc = 0x8004C850u;
    ctx->downcount -= 2;
    // 8004C850: cmpwi   r3, 0
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

label_8004C854:
    ctx->pc = 0x8004C854u;
    // 8004C854: bc    12, 2, 0x8004C860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C860;
        }
    }

label_8004C858:
    ctx->pc = 0x8004C858u;
    ctx->downcount -= 2;
    // 8004C858: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8004C85C:
    ctx->pc = 0x8004C85Cu;
    // 8004C85C: b       0x8004C880
    {
            goto label_8004C880;
    }

label_8004C860:
    ctx->pc = 0x8004C860u;
    ctx->downcount -= 5;
    // 8004C860: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C864:
    ctx->pc = 0x8004C864u;
    // 8004C864: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C868:
    ctx->pc = 0x8004C868u;
    // 8004C868: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C86C:
    ctx->pc = 0x8004C86Cu;
    // 8004C86C: rlwinm. r0, r3, 0, 28, 28
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

label_8004C870:
    ctx->pc = 0x8004C870u;
    // 8004C870: bc    12, 2, 0x8004C880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C880;
        }
    }

label_8004C874:
    ctx->pc = 0x8004C874u;
    ctx->downcount -= 3;
    // 8004C874: rlwinm r0, r3, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF7u;
    }

label_8004C878:
    ctx->pc = 0x8004C878u;
    // 8004C878: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8004C87C:
    ctx->pc = 0x8004C87Cu;
    // 8004C87C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C880:
    ctx->pc = 0x8004C880u;
    ctx->downcount -= 1;
    // 8004C880: bl      0x8004A6CC
    {
            ctx->lr = 0x8004C884u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004A6CCu;
                return;
            }
            goto label_8004A6CC;
    }

label_8004C884:
    ctx->pc = 0x8004C884u;
    ctx->downcount -= 4;
    // 8004C884: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004C888:
    ctx->pc = 0x8004C888u;
    // 8004C888: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8004C88C:
    ctx->pc = 0x8004C88Cu;
    // 8004C88C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8004C890:
    ctx->pc = 0x8004C890u;
    // 8004C890: bl      0x800462E4
    {
            ctx->lr = 0x8004C894u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_8004C894:
    ctx->pc = 0x8004C894u;
    ctx->downcount -= 2;
    // 8004C894: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004C898:
    ctx->pc = 0x8004C898u;
    // 8004C898: bl      0x8004628C
    {
            ctx->lr = 0x8004C89Cu;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_8004C89C:
    ctx->pc = 0x8004C89Cu;
    ctx->downcount -= 2;
    // 8004C89C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004C8A0:
    ctx->pc = 0x8004C8A0u;
    // 8004C8A0: bl      0x800462B8
    {
            ctx->lr = 0x8004C8A4u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_8004C8A4:
    ctx->pc = 0x8004C8A4u;
    ctx->downcount -= 2;
    // 8004C8A4: cmpwi   r30, 0
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

label_8004C8A8:
    ctx->pc = 0x8004C8A8u;
    // 8004C8A8: bc    12, 2, 0x8004C8CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004C8CC;
        }
    }

label_8004C8AC:
    ctx->pc = 0x8004C8ACu;
    ctx->downcount -= 3;
    // 8004C8AC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8004C8B0:
    ctx->pc = 0x8004C8B0u;
    // 8004C8B0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8004C8B4:
    ctx->pc = 0x8004C8B4u;
    // 8004C8B4: bl      0x8004B784
    {
            ctx->lr = 0x8004C8B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004B784u;
                return;
            }
            goto label_8004B784;
    }

label_8004C8B8:
    ctx->pc = 0x8004C8B8u;
    ctx->downcount -= 5;
    // 8004C8B8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C8BC:
    ctx->pc = 0x8004C8BCu;
    // 8004C8BC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004C8C0:
    ctx->pc = 0x8004C8C0u;
    // 8004C8C0: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C8C4:
    ctx->pc = 0x8004C8C4u;
    // 8004C8C4: lwz     r3, 6056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6056);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C8C8:
    ctx->pc = 0x8004C8C8u;
    // 8004C8C8: bl      0x80043744
    {
            ctx->lr = 0x8004C8CCu;
            ctx->pc = 0x80043744u;
            return;
    }

label_8004C8CC:
    ctx->pc = 0x8004C8CCu;
    ctx->downcount -= 10;
    // 8004C8CC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C8D0:
    ctx->pc = 0x8004C8D0u;
    // 8004C8D0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8004C8D4:
    ctx->pc = 0x8004C8D4u;
    // 8004C8D4: stw     r0, -17080(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C8D8:
    ctx->pc = 0x8004C8D8u;
    // 8004C8D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C8DC:
    ctx->pc = 0x8004C8DCu;
    // 8004C8DC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C8E0:
    ctx->pc = 0x8004C8E0u;
    // 8004C8E0: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C8E4:
    ctx->pc = 0x8004C8E4u;
    // 8004C8E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C8E8:
    ctx->pc = 0x8004C8E8u;
    // 8004C8E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C8EC:
    ctx->pc = 0x8004C8ECu;
    // 8004C8EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C8F0:
    ctx->pc = 0x8004C8F0u;
    ctx->downcount -= 9;
    // 8004C8F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C8F4:
    ctx->pc = 0x8004C8F4u;
    // 8004C8F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C8F8:
    ctx->pc = 0x8004C8F8u;
    // 8004C8F8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C8FC:
    ctx->pc = 0x8004C8FCu;
    // 8004C8FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C900:
    ctx->pc = 0x8004C900u;
    // 8004C900: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C904:
    ctx->pc = 0x8004C904u;
    // 8004C904: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004C908:
    ctx->pc = 0x8004C908u;
    // 8004C908: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8004C90C:
    ctx->pc = 0x8004C90Cu;
    // 8004C90C: lwz     r30, 5904(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5904);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C910:
    ctx->pc = 0x8004C910u;
    // 8004C910: bl      0x8004C7D4
    {
            ctx->lr = 0x8004C914u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C7D4u;
                return;
            }
            goto label_8004C7D4;
    }

label_8004C914:
    ctx->pc = 0x8004C914u;
    ctx->downcount -= 5;
    // 8004C914: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C918:
    ctx->pc = 0x8004C918u;
    // 8004C918: addi    r31, r3, -17080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C91C:
    ctx->pc = 0x8004C91Cu;
    // 8004C91C: lwz     r3, 5888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C920:
    ctx->pc = 0x8004C920u;
    // 8004C920: lwz     r4, 6064(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6064);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C924:
    ctx->pc = 0x8004C924u;
    // 8004C924: bl      0x8001DA20
    {
            ctx->lr = 0x8004C928u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_8004C928:
    ctx->pc = 0x8004C928u;
    ctx->downcount -= 3;
    // 8004C928: lwz     r3, 5888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C92C:
    ctx->pc = 0x8004C92Cu;
    // 8004C92C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C930:
    ctx->pc = 0x8004C930u;
    // 8004C930: bl      0x8004CB44
    {
            ctx->lr = 0x8004C934u;
            goto label_8004CB44;
    }

label_8004C934:
    ctx->pc = 0x8004C934u;
    ctx->downcount -= 5;
    // 8004C934: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C938:
    ctx->pc = 0x8004C938u;
    // 8004C938: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C93C:
    ctx->pc = 0x8004C93Cu;
    // 8004C93C: addi    r4, r4, -17080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C940:
    ctx->pc = 0x8004C940u;
    // 8004C940: lwz     r4, 6060(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6060);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C944:
    ctx->pc = 0x8004C944u;
    // 8004C944: bl      0x8001DA4C
    {
            ctx->lr = 0x8004C948u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_8004C948:
    ctx->pc = 0x8004C948u;
    ctx->downcount -= 8;
    // 8004C948: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004C94C:
    ctx->pc = 0x8004C94Cu;
    // 8004C94C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004C950:
    ctx->pc = 0x8004C950u;
    // 8004C950: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004C954:
    ctx->pc = 0x8004C954u;
    // 8004C954: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004C958:
    ctx->pc = 0x8004C958u;
    // 8004C958: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004C95C:
    ctx->pc = 0x8004C95Cu;
    // 8004C95C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004C960:
    ctx->pc = 0x8004C960u;
    // 8004C960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004C964:
    ctx->pc = 0x8004C964u;
    ctx->downcount -= 24;
    // 8004C964: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004C968:
    ctx->pc = 0x8004C968u;
    // 8004C968: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004C96C:
    ctx->pc = 0x8004C96Cu;
    // 8004C96C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8004C970:
    ctx->pc = 0x8004C970u;
    // 8004C970: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004C974:
    ctx->pc = 0x8004C974u;
    // 8004C974: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004C978:
    ctx->pc = 0x8004C978u;
    // 8004C978: addi    r31, r4, -17080
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-17080);

label_8004C97C:
    ctx->pc = 0x8004C97Cu;
    // 8004C97C: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004C980:
    ctx->pc = 0x8004C980u;
    // 8004C980: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004C984:
    ctx->pc = 0x8004C984u;
    // 8004C984: lwz     r28, 5904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5904);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004C988:
    ctx->pc = 0x8004C988u;
    // 8004C988: lhz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004C98C:
    ctx->pc = 0x8004C98Cu;
    // 8004C98C: lhz     r30, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[30] = mem_read16(ctx, ea);
    }

label_8004C990:
    ctx->pc = 0x8004C990u;
    // 8004C990: or   r26, r28, r28
    {
        ctx->gpr[26] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004C994:
    ctx->pc = 0x8004C994u;
    // 8004C994: rlwinm r29, r0, 1, 0, 30
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8004C998:
    ctx->pc = 0x8004C998u;
    // 8004C998: bl      0x8004C7D4
    {
            ctx->lr = 0x8004C99Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C7D4u;
                return;
            }
            goto label_8004C7D4;
    }

label_8004C99C:
    ctx->pc = 0x8004C99Cu;
    ctx->downcount -= 6;
    // 8004C99C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004C9A0:
    ctx->pc = 0x8004C9A0u;
    // 8004C9A0: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004C9A4:
    ctx->pc = 0x8004C9A4u;
    // 8004C9A4: lwz     r27, 5888(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5888);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8004C9A8:
    ctx->pc = 0x8004C9A8u;
    // 8004C9A8: lwz     r4, 6064(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6064);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004C9AC:
    ctx->pc = 0x8004C9ACu;
    // 8004C9AC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004C9B0:
    ctx->pc = 0x8004C9B0u;
    // 8004C9B0: bl      0x8001DA20
    {
            ctx->lr = 0x8004C9B4u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_8004C9B4:
    ctx->pc = 0x8004C9B4u;
    ctx->downcount -= 5;
    // 8004C9B4: subf   r0, r24, r30
    {
        u32 a = ~ctx->gpr[24];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8004C9B8:
    ctx->pc = 0x8004C9B8u;
    // 8004C9B8: srawi r0, r0, 1
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

label_8004C9BC:
    ctx->pc = 0x8004C9BCu;
    // 8004C9BC: or   r25, r0, r0
    {
        ctx->gpr[25] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004C9C0:
    ctx->pc = 0x8004C9C0u;
    // 8004C9C0: add   r30, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8004C9C4:
    ctx->pc = 0x8004C9C4u;
    // 8004C9C4: b       0x8004C9F8
    {
            goto label_8004C9F8;
    }

label_8004C9C8:
    ctx->pc = 0x8004C9C8u;
    ctx->downcount -= 57;
    // 8004C9C8: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004C9CC:
    // 8004C9CC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8004C9D0:
    // 8004C9D0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8004C9D4:
    ctx->pc = 0x8004C9D4u;
    // 8004C9D4: lhz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8004C9D8:
    ctx->pc = 0x8004C9D8u;
    // 8004C9D8: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004C9DC:
    // 8004C9DC: mullw   r4, r25, r4
    {
        s64 product = (s64)(s32)ctx->gpr[25] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_8004C9E0:
    // 8004C9E0: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8004C9E4:
    // 8004C9E4: mullw   r0, r29, r0
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8004C9E8:
    // 8004C9E8: add   r4, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8004C9EC:
    // 8004C9EC: bl      0x8000519C
    {
            ctx->lr = 0x8004C9F0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8004C9F0:
    ctx->downcount -= 2;
    // 8004C9F0: add   r26, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8004C9F4:
    // 8004C9F4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8004C9F8:
    ctx->downcount -= 2;
    // 8004C9F8: cmpw    r25, r30
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004C9FC:
    // 8004C9FC: bc    12, 0, 0x8004C9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004C9C8u;
                return;
            }
            goto label_8004C9C8;
        }
    }

label_8004CA00:
    ctx->pc = 0x8004CA00u;
    ctx->downcount -= 17;
    // 8004CA00: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8004CA04:
    ctx->pc = 0x8004CA04u;
    // 8004CA04: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004CA08:
    ctx->pc = 0x8004CA08u;
    // 8004CA08: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004CA0C:
    ctx->pc = 0x8004CA0Cu;
    // 8004CA0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004CA10:
    ctx->pc = 0x8004CA10u;
    // 8004CA10: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8004CA14:
    ctx->pc = 0x8004CA14u;
    // 8004CA14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004CA18:
    ctx->pc = 0x8004CA18u;
    ctx->downcount -= 4;
    // 8004CA18: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004CA1C:
    ctx->pc = 0x8004CA1Cu;
    // 8004CA1C: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004CA20:
    ctx->pc = 0x8004CA20u;
    // 8004CA20: lwz     r3, 5888(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004CA24:
    ctx->pc = 0x8004CA24u;
    // 8004CA24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004CA28:
    ctx->pc = 0x8004CA28u;
    ctx->downcount -= 23;
    // 8004CA28: lbz     r8, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_8004CA2C:
    ctx->pc = 0x8004CA2Cu;
    // 8004CA2C: lis     r7, 4194
    ctx->gpr[7] = ((u32)(s32)(4194) << 16);

label_8004CA30:
    ctx->pc = 0x8004CA30u;
    // 8004CA30: lbz     r9, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_8004CA34:
    ctx->pc = 0x8004CA34u;
    // 8004CA34: addi    r10, r7, 19923
    ctx->gpr[10] = ctx->gpr[7] + (u32)(s32)(19923);

label_8004CA38:
    ctx->pc = 0x8004CA38u;
    // 8004CA38: addi    r0, r8, -128
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(-128);

label_8004CA3C:
    ctx->pc = 0x8004CA3Cu;
    // 8004CA3C: addi    r8, r9, -16
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(-16);

label_8004CA40:
    ctx->pc = 0x8004CA40u;
    // 8004CA40: mulli   r7, r0, 1596
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)1596);

label_8004CA44:
    ctx->pc = 0x8004CA44u;
    // 8004CA44: mulli   r8, r8, 1164
    ctx->gpr[8] = (u32)((s64)(s32)ctx->gpr[8] * (s64)(s32)1164);

label_8004CA48:
    ctx->pc = 0x8004CA48u;
    // 8004CA48: addi    r0, r7, 500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(500);

label_8004CA4C:
    ctx->pc = 0x8004CA4Cu;
    // 8004CA4C: add   r0, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CA50:
    ctx->pc = 0x8004CA50u;
    // 8004CA50: mulhw   r0, r10, r0
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8004CA54:
    ctx->pc = 0x8004CA54u;
    // 8004CA54: srawi r0, r0, 6
    {
        u32 sh = 6u;
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

label_8004CA58:
    ctx->pc = 0x8004CA58u;
    // 8004CA58: rlwinm r7, r0, 1, 31, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8004CA5C:
    ctx->pc = 0x8004CA5Cu;
    // 8004CA5C: add.   r7, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[7];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004CA60:
    ctx->pc = 0x8004CA60u;
    // 8004CA60: bc    4, 0, 0x8004CA6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004CA6C;
        }
    }

label_8004CA64:
    ctx->pc = 0x8004CA64u;
    ctx->downcount -= 2;
    // 8004CA64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004CA68:
    ctx->pc = 0x8004CA68u;
    // 8004CA68: b       0x8004CA7C
    {
            goto label_8004CA7C;
    }

label_8004CA6C:
    ctx->pc = 0x8004CA6Cu;
    ctx->downcount -= 3;
    // 8004CA6C: cmpwi   r7, 255
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CA70:
    ctx->pc = 0x8004CA70u;
    // 8004CA70: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_8004CA74:
    ctx->pc = 0x8004CA74u;
    // 8004CA74: bc    12, 1, 0x8004CA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CA7C;
        }
    }

label_8004CA78:
    ctx->pc = 0x8004CA78u;
    ctx->downcount -= 1;
    // 8004CA78: or   r0, r7, r7
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8004CA7C:
    ctx->pc = 0x8004CA7Cu;
    ctx->downcount -= 30;
    // 8004CA7C: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CA80:
    ctx->pc = 0x8004CA80u;
    // 8004CA80: lis     r4, 4194
    ctx->gpr[4] = ((u32)(s32)(4194) << 16);

label_8004CA84:
    ctx->pc = 0x8004CA84u;
    // 8004CA84: addi    r9, r4, 19923
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(19923);

label_8004CA88:
    ctx->pc = 0x8004CA88u;
    // 8004CA88: lbz     r7, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8004CA8C:
    ctx->pc = 0x8004CA8Cu;
    // 8004CA8C: lbz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8004CA90:
    ctx->pc = 0x8004CA90u;
    // 8004CA90: lbz     r8, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_8004CA94:
    ctx->pc = 0x8004CA94u;
    // 8004CA94: addi    r7, r7, -128
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-128);

label_8004CA98:
    ctx->pc = 0x8004CA98u;
    // 8004CA98: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_8004CA9C:
    ctx->pc = 0x8004CA9Cu;
    // 8004CA9C: addi    r8, r8, -128
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-128);

label_8004CAA0:
    ctx->pc = 0x8004CAA0u;
    // 8004CAA0: mulli   r4, r7, 813
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[7] * (s64)(s32)813);

label_8004CAA4:
    ctx->pc = 0x8004CAA4u;
    // 8004CAA4: mulli   r0, r0, 1164
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)1164);

label_8004CAA8:
    ctx->pc = 0x8004CAA8u;
    // 8004CAA8: mulli   r7, r8, 391
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[8] * (s64)(s32)391);

label_8004CAAC:
    ctx->pc = 0x8004CAACu;
    // 8004CAAC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8004CAB0:
    ctx->pc = 0x8004CAB0u;
    // 8004CAB0: subf   r4, r7, r0
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8004CAB4:
    ctx->pc = 0x8004CAB4u;
    // 8004CAB4: addi    r0, r4, 500
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(500);

label_8004CAB8:
    ctx->pc = 0x8004CAB8u;
    // 8004CAB8: mulhw   r0, r9, r0
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8004CABC:
    ctx->pc = 0x8004CABCu;
    // 8004CABC: srawi r0, r0, 6
    {
        u32 sh = 6u;
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

label_8004CAC0:
    ctx->pc = 0x8004CAC0u;
    // 8004CAC0: rlwinm r4, r0, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8004CAC4:
    ctx->pc = 0x8004CAC4u;
    // 8004CAC4: add.   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004CAC8:
    ctx->pc = 0x8004CAC8u;
    // 8004CAC8: bc    4, 0, 0x8004CAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004CAD4;
        }
    }

label_8004CACC:
    ctx->pc = 0x8004CACCu;
    ctx->downcount -= 2;
    // 8004CACC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004CAD0:
    ctx->pc = 0x8004CAD0u;
    // 8004CAD0: b       0x8004CAE4
    {
            goto label_8004CAE4;
    }

label_8004CAD4:
    ctx->pc = 0x8004CAD4u;
    ctx->downcount -= 3;
    // 8004CAD4: cmpwi   r4, 255
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CAD8:
    ctx->pc = 0x8004CAD8u;
    // 8004CAD8: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_8004CADC:
    ctx->pc = 0x8004CADCu;
    // 8004CADC: bc    12, 1, 0x8004CAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CAE4;
        }
    }

label_8004CAE0:
    ctx->pc = 0x8004CAE0u;
    ctx->downcount -= 1;
    // 8004CAE0: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004CAE4:
    ctx->pc = 0x8004CAE4u;
    ctx->downcount -= 24;
    // 8004CAE4: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CAE8:
    ctx->pc = 0x8004CAE8u;
    // 8004CAE8: lis     r4, 4194
    ctx->gpr[4] = ((u32)(s32)(4194) << 16);

label_8004CAEC:
    ctx->pc = 0x8004CAECu;
    // 8004CAEC: addi    r5, r4, 19923
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19923);

label_8004CAF0:
    ctx->pc = 0x8004CAF0u;
    // 8004CAF0: lbz     r4, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8004CAF4:
    ctx->pc = 0x8004CAF4u;
    // 8004CAF4: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CAF8:
    ctx->pc = 0x8004CAF8u;
    // 8004CAF8: addi    r0, r4, -128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-128);

label_8004CAFC:
    ctx->pc = 0x8004CAFCu;
    // 8004CAFC: addi    r4, r3, -16
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16);

label_8004CB00:
    ctx->pc = 0x8004CB00u;
    // 8004CB00: mulli   r3, r0, 2018
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)2018);

label_8004CB04:
    ctx->pc = 0x8004CB04u;
    // 8004CB04: mulli   r4, r4, 1164
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)1164);

label_8004CB08:
    ctx->pc = 0x8004CB08u;
    // 8004CB08: addi    r0, r3, 500
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(500);

label_8004CB0C:
    ctx->pc = 0x8004CB0Cu;
    // 8004CB0C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CB10:
    ctx->pc = 0x8004CB10u;
    // 8004CB10: mulhw   r0, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8004CB14:
    ctx->pc = 0x8004CB14u;
    // 8004CB14: srawi r0, r0, 6
    {
        u32 sh = 6u;
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

label_8004CB18:
    ctx->pc = 0x8004CB18u;
    // 8004CB18: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8004CB1C:
    ctx->pc = 0x8004CB1Cu;
    // 8004CB1C: add.   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004CB20:
    ctx->pc = 0x8004CB20u;
    // 8004CB20: bc    4, 0, 0x8004CB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004CB2C;
        }
    }

label_8004CB24:
    ctx->pc = 0x8004CB24u;
    ctx->downcount -= 2;
    // 8004CB24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004CB28:
    ctx->pc = 0x8004CB28u;
    // 8004CB28: b       0x8004CB3C
    {
            goto label_8004CB3C;
    }

label_8004CB2C:
    ctx->pc = 0x8004CB2Cu;
    ctx->downcount -= 3;
    // 8004CB2C: cmpwi   r3, 255
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

label_8004CB30:
    ctx->pc = 0x8004CB30u;
    // 8004CB30: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_8004CB34:
    ctx->pc = 0x8004CB34u;
    // 8004CB34: bc    12, 1, 0x8004CB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CB3C;
        }
    }

label_8004CB38:
    ctx->pc = 0x8004CB38u;
    ctx->downcount -= 1;
    // 8004CB38: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004CB3C:
    ctx->pc = 0x8004CB3Cu;
    ctx->downcount -= 2;
    // 8004CB3C: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CB40:
    ctx->pc = 0x8004CB40u;
    // 8004CB40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004CB44:
    ctx->pc = 0x8004CB44u;
    ctx->downcount -= 27;
    // 8004CB44: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004CB48:
    ctx->pc = 0x8004CB48u;
    // 8004CB48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004CB4C:
    ctx->pc = 0x8004CB4Cu;
    // 8004CB4C: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004CB50:
    ctx->pc = 0x8004CB50u;
    // 8004CB50: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004CB54:
    ctx->pc = 0x8004CB54u;
    // 8004CB54: stmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004CB58:
    ctx->pc = 0x8004CB58u;
    // 8004CB58: addi    r30, r5, -17080
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004CB5C:
    ctx->pc = 0x8004CB5Cu;
    // 8004CB5C: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004CB60:
    ctx->pc = 0x8004CB60u;
    // 8004CB60: or   r20, r4, r4
    {
        ctx->gpr[20] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004CB64:
    ctx->pc = 0x8004CB64u;
    // 8004CB64: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8004CB68:
    ctx->pc = 0x8004CB68u;
    // 8004CB68: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004CB6C:
    ctx->pc = 0x8004CB6Cu;
    // 8004CB6C: lwz     r23, 10272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10272);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_8004CB70:
    ctx->pc = 0x8004CB70u;
    // 8004CB70: lhz     r25, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[25] = mem_read16(ctx, ea);
    }

label_8004CB74:
    ctx->pc = 0x8004CB74u;
    // 8004CB74: lhz     r24, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[24] = mem_read16(ctx, ea);
    }

label_8004CB78:
    ctx->pc = 0x8004CB78u;
    // 8004CB78: srawi r17, r25, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[17] = value;
        } else if (sh > 31) {
            ctx->gpr[17] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[17] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004CB7C:
    ctx->pc = 0x8004CB7Cu;
    // 8004CB7C: rlwinm r18, r25, 1, 0, 30
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[25], 1u) & 0xFFFFFFFEu;
    }

label_8004CB80:
    ctx->pc = 0x8004CB80u;
    // 8004CB80: addi    r31, r25, -2
    ctx->gpr[31] = ctx->gpr[25] + (u32)(s32)(-2);

label_8004CB84:
    ctx->pc = 0x8004CB84u;
    // 8004CB84: b       0x8004CCEC
    {
            goto label_8004CCEC;
    }

label_8004CB88:
    ctx->pc = 0x8004CB88u;
    ctx->downcount -= 66;
    // 8004CB88: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004CB8C:
    // 8004CB8C: srawi r0, r26, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[26];
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

label_8004CB90:
    // 8004CB90: mullw   r4, r0, r17
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[17];
        ctx->gpr[4] = (u32)product;
    }

label_8004CB94:
    // 8004CB94: rlwinm r28, r26, 3, 27, 28
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[26], 3u) & 0x00000018u;
    }

label_8004CB98:
    ctx->pc = 0x8004CB98u;
    // 8004CB98: lhz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004CB9C:
    // 8004CB9C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8004CBA0:
    ctx->pc = 0x8004CBA0u;
    // 8004CBA0: lhz     r0, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004CBA4:
    // 8004CBA4: mullw   r3, r26, r3
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[3] = (u32)product;
    }

label_8004CBA8:
    // 8004CBA8: rlwinm r4, r4, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 5u) & 0xFFFFFFE0u;
    }

label_8004CBAC:
    // 8004CBAC: add   r22, r20, r4
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_8004CBB0:
    // 8004CBB0: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8004CBB4:
    // 8004CBB4: mullw   r0, r18, r0
    {
        s64 product = (s64)(s32)ctx->gpr[18] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8004CBB8:
    // 8004CBB8: add   r0, r19, r0
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CBBC:
    // 8004CBBC: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004CBC0:
    // 8004CBC0: b       0x8004CCE0
    {
            goto label_8004CCE0;
    }

label_8004CBC4:
    ctx->pc = 0x8004CBC4u;
    ctx->downcount -= 14;
    // 8004CBC4: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CBC8:
    // 8004CBC8: srawi r4, r27, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[27];
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

label_8004CBCC:
    // 8004CBCC: rlwinm r3, r27, 1, 29, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[27], 1u) & 0x00000006u;
    }

label_8004CBD0:
    // 8004CBD0: cmpwi   r23, 0
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

label_8004CBD4:
    ctx->pc = 0x8004CBD4u;
    // 8004CBD4: stb     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CBD8:
    // 8004CBD8: rlwinm r4, r4, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 5u) & 0xFFFFFFE0u;
    }

label_8004CBDC:
    // 8004CBDC: add   r21, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8004CBE0:
    ctx->pc = 0x8004CBE0u;
    // 8004CBE0: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CBE4:
    // 8004CBE4: add   r21, r21, r4
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8004CBE8:
    // 8004CBE8: add   r21, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8004CBEC:
    ctx->pc = 0x8004CBECu;
    // 8004CBEC: stb     r0, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CBF0:
    ctx->pc = 0x8004CBF0u;
    // 8004CBF0: lbz     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CBF4:
    ctx->pc = 0x8004CBF4u;
    // 8004CBF4: stb     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CBF8:
    // 8004CBF8: bc    12, 2, 0x8004CC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CC04;
        }
    }

label_8004CBFC:
    ctx->downcount -= 2;
    // 8004CBFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004CC00:
    // 8004CC00: b       0x8004CC34
    {
            goto label_8004CC34;
    }

label_8004CC04:
    ctx->downcount -= 5;
    // 8004CC04: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8004CC08:
    // 8004CC08: addi    r4, r1, 10
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(10);

label_8004CC0C:
    // 8004CC0C: addi    r5, r1, 9
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(9);

label_8004CC10:
    // 8004CC10: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_8004CC14:
    // 8004CC14: bl      0x8004CA28
    {
            ctx->lr = 0x8004CC18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CA28u;
                return;
            }
            goto label_8004CA28;
    }

label_8004CC18:
    ctx->pc = 0x8004CC18u;
    ctx->downcount -= 7;
    // 8004CC18: lbz     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC1C:
    ctx->pc = 0x8004CC1Cu;
    // 8004CC1C: lbz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CC20:
    // 8004CC20: rlwinm r0, r0, 3, 21, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0x000007E0u;
    }

label_8004CC24:
    ctx->pc = 0x8004CC24u;
    // 8004CC24: lbz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8004CC28:
    // 8004CC28: rlwimi r0, r3, 8, 16, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000F800u) | (rot & 0x0000F800u);
    }

label_8004CC2C:
    // 8004CC2C: rlwimi r0, r4, 29, 27, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 29u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000001Fu) | (rot & 0x0000001Fu);
    }

label_8004CC30:
    // 8004CC30: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8004CC34:
    ctx->pc = 0x8004CC34u;
    ctx->downcount -= 5;
    // 8004CC34: sth     r0, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8004CC38:
    // 8004CC38: cmpw    r27, r31
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CC3C:
    ctx->pc = 0x8004CC3Cu;
    // 8004CC3C: lbz     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC40:
    ctx->pc = 0x8004CC40u;
    // 8004CC40: stb     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CC44:
    // 8004CC44: bc    12, 2, 0x8004CC84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CC84;
        }
    }

label_8004CC48:
    ctx->pc = 0x8004CC48u;
    ctx->downcount -= 15;
    // 8004CC48: lbz     r3, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CC4C:
    ctx->pc = 0x8004CC4Cu;
    // 8004CC4C: lbz     r0, 5(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC50:
    // 8004CC50: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004CC54:
    // 8004CC54: rlwinm r0, r3, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_8004CC58:
    // 8004CC58: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CC5C:
    // 8004CC5C: srawi r0, r0, 1
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

label_8004CC60:
    ctx->pc = 0x8004CC60u;
    // 8004CC60: stb     r0, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CC64:
    ctx->pc = 0x8004CC64u;
    // 8004CC64: lbz     r3, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CC68:
    ctx->pc = 0x8004CC68u;
    // 8004CC68: lbz     r0, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC6C:
    // 8004CC6C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8004CC70:
    // 8004CC70: rlwinm r0, r3, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_8004CC74:
    // 8004CC74: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CC78:
    // 8004CC78: srawi r0, r0, 1
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

label_8004CC7C:
    ctx->pc = 0x8004CC7Cu;
    // 8004CC7C: stb     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CC80:
    // 8004CC80: b       0x8004CC94
    {
            goto label_8004CC94;
    }

label_8004CC84:
    ctx->pc = 0x8004CC84u;
    ctx->downcount -= 4;
    // 8004CC84: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC88:
    ctx->pc = 0x8004CC88u;
    // 8004CC88: stb     r0, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CC8C:
    ctx->pc = 0x8004CC8Cu;
    // 8004CC8C: lbz     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CC90:
    ctx->pc = 0x8004CC90u;
    // 8004CC90: stb     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CC94:
    ctx->downcount -= 2;
    // 8004CC94: cmpwi   r23, 0
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

label_8004CC98:
    // 8004CC98: bc    12, 2, 0x8004CCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CCA4;
        }
    }

label_8004CC9C:
    ctx->downcount -= 2;
    // 8004CC9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8004CCA0:
    // 8004CCA0: b       0x8004CCD4
    {
            goto label_8004CCD4;
    }

label_8004CCA4:
    ctx->downcount -= 5;
    // 8004CCA4: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8004CCA8:
    // 8004CCA8: addi    r4, r1, 10
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(10);

label_8004CCAC:
    // 8004CCAC: addi    r5, r1, 9
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(9);

label_8004CCB0:
    // 8004CCB0: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_8004CCB4:
    // 8004CCB4: bl      0x8004CA28
    {
            ctx->lr = 0x8004CCB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CA28u;
                return;
            }
            goto label_8004CA28;
    }

label_8004CCB8:
    ctx->pc = 0x8004CCB8u;
    ctx->downcount -= 7;
    // 8004CCB8: lbz     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CCBC:
    ctx->pc = 0x8004CCBCu;
    // 8004CCBC: lbz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CCC0:
    // 8004CCC0: rlwinm r0, r0, 3, 21, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0x000007E0u;
    }

label_8004CCC4:
    ctx->pc = 0x8004CCC4u;
    // 8004CCC4: lbz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8004CCC8:
    // 8004CCC8: rlwimi r0, r3, 8, 16, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000F800u) | (rot & 0x0000F800u);
    }

label_8004CCCC:
    // 8004CCCC: rlwimi r0, r4, 29, 27, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 29u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000001Fu) | (rot & 0x0000001Fu);
    }

label_8004CCD0:
    // 8004CCD0: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8004CCD4:
    ctx->pc = 0x8004CCD4u;
    ctx->downcount -= 3;
    // 8004CCD4: sth     r0, 2(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8004CCD8:
    // 8004CCD8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_8004CCDC:
    // 8004CCDC: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

label_8004CCE0:
    ctx->downcount -= 2;
    // 8004CCE0: cmpw    r27, r25
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CCE4:
    // 8004CCE4: bc    12, 0, 0x8004CBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CBC4u;
                return;
            }
            goto label_8004CBC4;
        }
    }

label_8004CCE8:
    ctx->downcount -= 1;
    // 8004CCE8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8004CCEC:
    ctx->downcount -= 2;
    // 8004CCEC: cmpw    r26, r24
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CCF0:
    // 8004CCF0: bc    12, 0, 0x8004CB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CB88u;
                return;
            }
            goto label_8004CB88;
        }
    }

label_8004CCF4:
    ctx->pc = 0x8004CCF4u;
    ctx->downcount -= 16;
    // 8004CCF4: lmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004CCF8:
    ctx->pc = 0x8004CCF8u;
    // 8004CCF8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004CCFC:
    ctx->pc = 0x8004CCFCu;
    // 8004CCFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004CD00:
    ctx->pc = 0x8004CD00u;
    // 8004CD00: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8004CD04:
    ctx->pc = 0x8004CD04u;
    // 8004CD04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004CD08:
    ctx->pc = 0x8004CD08u;
    ctx->downcount -= 26;
    // 8004CD08: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004CD0C:
    ctx->pc = 0x8004CD0Cu;
    // 8004CD0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004CD10:
    ctx->pc = 0x8004CD10u;
    // 8004CD10: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004CD14:
    ctx->pc = 0x8004CD14u;
    // 8004CD14: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004CD18:
    ctx->pc = 0x8004CD18u;
    // 8004CD18: addi    r5, r5, -17080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004CD1C:
    ctx->pc = 0x8004CD1Cu;
    // 8004CD1C: stmw     r19, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004CD20:
    ctx->pc = 0x8004CD20u;
    // 8004CD20: or   r19, r4, r4
    {
        ctx->gpr[19] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8004CD24:
    ctx->pc = 0x8004CD24u;
    // 8004CD24: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8004CD28:
    ctx->pc = 0x8004CD28u;
    // 8004CD28: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8004CD2C:
    ctx->pc = 0x8004CD2Cu;
    // 8004CD2C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004CD30:
    ctx->pc = 0x8004CD30u;
    // 8004CD30: lhz     r26, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[26] = mem_read16(ctx, ea);
    }

label_8004CD34:
    ctx->pc = 0x8004CD34u;
    // 8004CD34: lhz     r25, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[25] = mem_read16(ctx, ea);
    }

label_8004CD38:
    ctx->pc = 0x8004CD38u;
    // 8004CD38: srawi r0, r26, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[26];
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

label_8004CD3C:
    ctx->pc = 0x8004CD3Cu;
    // 8004CD3C: addi    r31, r26, -2
    ctx->gpr[31] = ctx->gpr[26] + (u32)(s32)(-2);

label_8004CD40:
    ctx->pc = 0x8004CD40u;
    // 8004CD40: rlwinm r24, r0, 6, 0, 25
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8004CD44:
    ctx->pc = 0x8004CD44u;
    // 8004CD44: b       0x8004CE34
    {
            goto label_8004CE34;
    }

label_8004CD48:
    ctx->downcount -= 11;
    // 8004CD48: srawi r0, r28, 2
    {
        u32 sh = 2u;
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

label_8004CD4C:
    // 8004CD4C: rlwinm r3, r28, 3, 27, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 3u) & 0x00000018u;
    }

label_8004CD50:
    // 8004CD50: mullw   r0, r0, r24
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[24];
        ctx->gpr[0] = (u32)product;
    }

label_8004CD54:
    // 8004CD54: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8004CD58:
    // 8004CD58: add   r0, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CD5C:
    // 8004CD5C: add   r30, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8004CD60:
    // 8004CD60: b       0x8004CE28
    {
            goto label_8004CE28;
    }

label_8004CD64:
    ctx->pc = 0x8004CD64u;
    ctx->downcount -= 19;
    // 8004CD64: lbz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CD68:
    // 8004CD68: srawi r4, r29, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[29];
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

label_8004CD6C:
    // 8004CD6C: rlwinm r3, r29, 1, 29, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 1u) & 0x00000006u;
    }

label_8004CD70:
    ctx->pc = 0x8004CD70u;
    // 8004CD70: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CD74:
    // 8004CD74: add   r23, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004CD78:
    // 8004CD78: rlwinm r4, r4, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_8004CD7C:
    // 8004CD7C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8004CD80:
    ctx->pc = 0x8004CD80u;
    // 8004CD80: lbz     r0, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CD84:
    // 8004CD84: add   r23, r4, r23
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004CD88:
    // 8004CD88: addi    r21, r23, 32
    ctx->gpr[21] = ctx->gpr[23] + (u32)(s32)(32);

label_8004CD8C:
    ctx->pc = 0x8004CD8Cu;
    // 8004CD8C: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CD90:
    // 8004CD90: addi    r22, r23, 1
    ctx->gpr[22] = ctx->gpr[23] + (u32)(s32)(1);

label_8004CD94:
    // 8004CD94: addi    r20, r21, 1
    ctx->gpr[20] = ctx->gpr[21] + (u32)(s32)(1);

label_8004CD98:
    // 8004CD98: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8004CD9C:
    ctx->pc = 0x8004CD9Cu;
    // 8004CD9C: lbz     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CDA0:
    // 8004CDA0: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8004CDA4:
    // 8004CDA4: or   r6, r20, r20
    {
        ctx->gpr[6] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8004CDA8:
    ctx->pc = 0x8004CDA8u;
    // 8004CDA8: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDAC:
    // 8004CDAC: bl      0x8004CA28
    {
            ctx->lr = 0x8004CDB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CA28u;
                return;
            }
            goto label_8004CA28;
    }

label_8004CDB0:
    ctx->downcount -= 6;
    // 8004CDB0: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_8004CDB4:
    // 8004CDB4: cmpw    r29, r31
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CDB8:
    ctx->pc = 0x8004CDB8u;
    // 8004CDB8: stb     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDBC:
    ctx->pc = 0x8004CDBCu;
    // 8004CDBC: lbz     r0, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CDC0:
    ctx->pc = 0x8004CDC0u;
    // 8004CDC0: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDC4:
    // 8004CDC4: bc    12, 2, 0x8004CDF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CDF4;
        }
    }

label_8004CDC8:
    ctx->pc = 0x8004CDC8u;
    ctx->downcount -= 11;
    // 8004CDC8: lbz     r3, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CDCC:
    ctx->pc = 0x8004CDCCu;
    // 8004CDCC: lbz     r0, 5(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CDD0:
    // 8004CDD0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CDD4:
    // 8004CDD4: srawi r0, r0, 1
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

label_8004CDD8:
    ctx->pc = 0x8004CDD8u;
    // 8004CDD8: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDDC:
    ctx->pc = 0x8004CDDCu;
    // 8004CDDC: lbz     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8004CDE0:
    ctx->pc = 0x8004CDE0u;
    // 8004CDE0: lbz     r0, 7(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CDE4:
    // 8004CDE4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004CDE8:
    // 8004CDE8: srawi r0, r0, 1
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

label_8004CDEC:
    ctx->pc = 0x8004CDECu;
    // 8004CDEC: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDF0:
    // 8004CDF0: b       0x8004CE04
    {
            goto label_8004CE04;
    }

label_8004CDF4:
    ctx->pc = 0x8004CDF4u;
    ctx->downcount -= 4;
    // 8004CDF4: lbz     r0, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CDF8:
    ctx->pc = 0x8004CDF8u;
    // 8004CDF8: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CDFC:
    ctx->pc = 0x8004CDFCu;
    // 8004CDFC: lbz     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CE00:
    ctx->pc = 0x8004CE00u;
    // 8004CE00: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CE04:
    ctx->downcount -= 5;
    // 8004CE04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8004CE08:
    // 8004CE08: addi    r4, r22, 2
    ctx->gpr[4] = ctx->gpr[22] + (u32)(s32)(2);

label_8004CE0C:
    // 8004CE0C: addi    r5, r21, 2
    ctx->gpr[5] = ctx->gpr[21] + (u32)(s32)(2);

label_8004CE10:
    // 8004CE10: addi    r6, r20, 2
    ctx->gpr[6] = ctx->gpr[20] + (u32)(s32)(2);

label_8004CE14:
    // 8004CE14: bl      0x8004CA28
    {
            ctx->lr = 0x8004CE18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CA28u;
                return;
            }
            goto label_8004CA28;
    }

label_8004CE18:
    ctx->downcount -= 4;
    // 8004CE18: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_8004CE1C:
    // 8004CE1C: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_8004CE20:
    ctx->pc = 0x8004CE20u;
    // 8004CE20: stb     r0, 2(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CE24:
    // 8004CE24: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_8004CE28:
    ctx->downcount -= 2;
    // 8004CE28: cmpw    r29, r26
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CE2C:
    // 8004CE2C: bc    12, 0, 0x8004CD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CD64u;
                return;
            }
            goto label_8004CD64;
        }
    }

label_8004CE30:
    ctx->downcount -= 1;
    // 8004CE30: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8004CE34:
    ctx->downcount -= 2;
    // 8004CE34: cmpw    r28, r25
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CE38:
    // 8004CE38: bc    12, 0, 0x8004CD48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CD48u;
                return;
            }
            goto label_8004CD48;
        }
    }

label_8004CE3C:
    ctx->pc = 0x8004CE3Cu;
    ctx->downcount -= 8;
    // 8004CE3C: mullw   r0, r26, r25
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[0] = (u32)product;
    }

label_8004CE40:
    ctx->pc = 0x8004CE40u;
    // 8004CE40: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_8004CE44:
    ctx->pc = 0x8004CE44u;
    // 8004CE44: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004CE48:
    ctx->pc = 0x8004CE48u;
    // 8004CE48: bl      0x8001DA4C
    {
            ctx->lr = 0x8004CE4Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_8004CE4C:
    ctx->pc = 0x8004CE4Cu;
    ctx->downcount -= 16;
    // 8004CE4C: lmw     r19, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004CE50:
    ctx->pc = 0x8004CE50u;
    // 8004CE50: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004CE54:
    ctx->pc = 0x8004CE54u;
    // 8004CE54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004CE58:
    ctx->pc = 0x8004CE58u;
    // 8004CE58: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8004CE5C:
    ctx->pc = 0x8004CE5Cu;
    // 8004CE5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004CE60:
    ctx->pc = 0x8004CE60u;
    ctx->downcount -= 19;
    // 8004CE60: stwu     r1, -576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-576);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004CE64:
    ctx->pc = 0x8004CE64u;
    // 8004CE64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004CE68:
    ctx->pc = 0x8004CE68u;
    // 8004CE68: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004CE6C:
    ctx->pc = 0x8004CE6Cu;
    // 8004CE6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8004CE70:
    ctx->pc = 0x8004CE70u;
    // 8004CE70: stw     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004CE74:
    ctx->pc = 0x8004CE74u;
    // 8004CE74: addi    r10, r1, 296
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(296);

label_8004CE78:
    ctx->pc = 0x8004CE78u;
    // 8004CE78: stmw     r26, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004CE7C:
    ctx->pc = 0x8004CE7Cu;
    // 8004CE7C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8004CE80:
    ctx->pc = 0x8004CE80u;
    // 8004CE80: b       0x8004D044
    {
            goto label_8004D044;
    }

label_8004CE84:
    ctx->downcount -= 8;
    // 8004CE84: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_8004CE88:
    ctx->pc = 0x8004CE88u;
    // 8004CE88: lbz     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read8(ctx, ea);
    }

label_8004CE8C:
    // 8004CE8C: addi    r28, r1, 296
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(296);

label_8004CE90:
    // 8004CE90: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8004CE94:
    ctx->pc = 0x8004CE94u;
    // 8004CE94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8004CE98:
    // 8004CE98: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8004CE9C:
    // 8004CE9C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8004CEA0:
    loop_8004CEA0(ctx);
    if (ctx->pc == 0x8004CF28u) goto label_8004CF28;
    return;
label_8004CEA4:
    // 8004CEA4: addi    r29, r26, 1
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(1);

label_8004CEA8:
    // 8004CEA8: addi    r30, r26, 2
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(2);

label_8004CEAC:
    // 8004CEAC: addi    r12, r26, 3
    ctx->gpr[12] = ctx->gpr[26] + (u32)(s32)(3);

label_8004CEB0:
    ctx->pc = 0x8004CEB0u;
    // 8004CEB0: stb     r29, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_8004CEB4:
    // 8004CEB4: addi    r11, r26, 4
    ctx->gpr[11] = ctx->gpr[26] + (u32)(s32)(4);

label_8004CEB8:
    // 8004CEB8: addi    r9, r26, 5
    ctx->gpr[9] = ctx->gpr[26] + (u32)(s32)(5);

label_8004CEBC:
    // 8004CEBC: addi    r8, r26, 6
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(6);

label_8004CEC0:
    ctx->pc = 0x8004CEC0u;
    // 8004CEC0: stb     r30, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_8004CEC4:
    // 8004CEC4: addi    r0, r26, 7
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(7);

label_8004CEC8:
    // 8004CEC8: addi    r29, r26, 9
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(9);

label_8004CECC:
    // 8004CECC: addi    r30, r26, 10
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(10);

label_8004CED0:
    ctx->pc = 0x8004CED0u;
    // 8004CED0: stb     r12, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_8004CED4:
    // 8004CED4: addi    r12, r26, 11
    ctx->gpr[12] = ctx->gpr[26] + (u32)(s32)(11);

label_8004CED8:
    ctx->pc = 0x8004CED8u;
    // 8004CED8: stb     r11, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_8004CEDC:
    // 8004CEDC: addi    r11, r26, 12
    ctx->gpr[11] = ctx->gpr[26] + (u32)(s32)(12);

label_8004CEE0:
    ctx->pc = 0x8004CEE0u;
    // 8004CEE0: stb     r9, 5(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_8004CEE4:
    // 8004CEE4: addi    r9, r26, 13
    ctx->gpr[9] = ctx->gpr[26] + (u32)(s32)(13);

label_8004CEE8:
    ctx->pc = 0x8004CEE8u;
    // 8004CEE8: stb     r8, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8004CEEC:
    // 8004CEEC: addi    r8, r26, 14
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(14);

label_8004CEF0:
    ctx->pc = 0x8004CEF0u;
    // 8004CEF0: stb     r0, 7(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CEF4:
    // 8004CEF4: addi    r0, r26, 15
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(15);

label_8004CEF8:
    // 8004CEF8: addi    r26, r26, 8
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8);

label_8004CEFC:
    ctx->pc = 0x8004CEFCu;
    // 8004CEFC: stb     r26, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_8004CF00:
    // 8004CF00: addi    r26, r26, 8
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8);

label_8004CF04:
    ctx->pc = 0x8004CF04u;
    // 8004CF04: stb     r29, 9(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_8004CF08:
    ctx->pc = 0x8004CF08u;
    // 8004CF08: stb     r30, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_8004CF0C:
    ctx->pc = 0x8004CF0Cu;
    // 8004CF0C: stb     r12, 11(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_8004CF10:
    ctx->pc = 0x8004CF10u;
    // 8004CF10: stb     r11, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_8004CF14:
    ctx->pc = 0x8004CF14u;
    // 8004CF14: stb     r9, 13(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_8004CF18:
    ctx->pc = 0x8004CF18u;
    // 8004CF18: stb     r8, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8004CF1C:
    ctx->pc = 0x8004CF1Cu;
    // 8004CF1C: stb     r0, 15(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CF20:
    // 8004CF20: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_8004CF24:
    // 8004CF24: bc    16, 0, 0x8004CEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CEA0u;
                return;
            }
            goto label_8004CEA0;
        }
    }

label_8004CF28:
    ctx->downcount -= 1;
    // 8004CF28: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_8004CF2C:
    ctx->downcount -= 2;
    // 8004CF2C: cmpwi   r27, 127
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CF30:
    // 8004CF30: bc    4, 1, 0x8004CF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004CF40;
        }
    }

label_8004CF34:
    ctx->downcount -= 3;
    // 8004CF34: add   r11, r27, r11
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_8004CF38:
    // 8004CF38: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8004CF3C:
    // 8004CF3C: addi    r11, r11, -127
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-127);

label_8004CF40:
    ctx->downcount -= 2;
    // 8004CF40: cmpwi   r11, 256
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CF44:
    // 8004CF44: bc    12, 2, 0x8004CFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CFBC;
        }
    }

label_8004CF48:
    ctx->downcount -= 9;
    // 8004CF48: addi    r8, r1, 296
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(296);

label_8004CF4C:
    // 8004CF4C: addi    r9, r1, 40
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(40);

label_8004CF50:
    // 8004CF50: addi    r0, r27, 1
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(1);

label_8004CF54:
    // 8004CF54: add   r8, r8, r11
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8004CF58:
    // 8004CF58: add   r9, r9, r11
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_8004CF5C:
    ctx->pc = 0x8004CF5Cu;
    // 8004CF5C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8004CF60:
    // 8004CF60: cmpwi   r27, 0
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

label_8004CF64:
    // 8004CF64: bc    12, 0, 0x8004CFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CFA4;
        }
    }

label_8004CF68:
    ctx->pc = 0x8004CF68u;
    ctx->downcount -= 7;
    // 8004CF68: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CF6C:
    // 8004CF6C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8004CF70:
    // 8004CF70: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8004CF74:
    ctx->pc = 0x8004CF74u;
    // 8004CF74: stb     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CF78:
    ctx->pc = 0x8004CF78u;
    // 8004CF78: lbz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CF7C:
    // 8004CF7C: cmpw    r11, r0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CF80:
    // 8004CF80: bc    12, 2, 0x8004CF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CF94;
        }
    }

label_8004CF84:
    ctx->pc = 0x8004CF84u;
    ctx->downcount -= 4;
    // 8004CF84: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CF88:
    // 8004CF88: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8004CF8C:
    // 8004CF8C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8004CF90:
    ctx->pc = 0x8004CF90u;
    // 8004CF90: stb     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004CF94:
    ctx->downcount -= 4;
    // 8004CF94: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8004CF98:
    // 8004CF98: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8004CF9C:
    // 8004CF9C: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_8004CFA0:
    // 8004CFA0: bc    16, 0, 0x8004CF68
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CF68u;
                return;
            }
            goto label_8004CF68;
        }
    }

label_8004CFA4:
    ctx->downcount -= 2;
    // 8004CFA4: cmpwi   r11, 256
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CFA8:
    // 8004CFA8: bc    12, 2, 0x8004CFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CFBC;
        }
    }

label_8004CFAC:
    ctx->pc = 0x8004CFACu;
    ctx->downcount -= 4;
    // 8004CFAC: lbz     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read8(ctx, ea);
    }

label_8004CFB0:
    // 8004CFB0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8004CFB4:
    // 8004CFB4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8004CFB8:
    // 8004CFB8: b       0x8004CF2C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CF2Cu;
                return;
            }
            goto label_8004CF2C;
    }

label_8004CFBC:
    ctx->pc = 0x8004CFBCu;
    ctx->downcount -= 7;
    // 8004CFBC: lbz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_8004CFC0:
    // 8004CFC0: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_8004CFC4:
    ctx->pc = 0x8004CFC4u;
    // 8004CFC4: lbz     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CFC8:
    // 8004CFC8: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_8004CFCC:
    // 8004CFCC: rlwinm r26, r8, 8, 16, 23
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[8], 8u) & 0x0000FF00u;
    }

label_8004CFD0:
    // 8004CFD0: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_8004CFD4:
    // 8004CFD4: add   r26, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8004CFD8:
    ctx->downcount -= 2;
    // 8004CFD8: cmpwi   r12, 0
    {
        s32 val_a = (s32)(ctx->gpr[12]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004CFDC:
    // 8004CFDC: bc    12, 2, 0x8004CFF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004CFF0;
        }
    }

label_8004CFE0:
    ctx->downcount -= 4;
    // 8004CFE0: addi    r12, r12, -1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(-1);

label_8004CFE4:
    // 8004CFE4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_8004CFE8:
    ctx->pc = 0x8004CFE8u;
    // 8004CFE8: lbzx    r0, r8, r12
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[12];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004CFEC:
    // 8004CFEC: b       0x8004D008
    {
            goto label_8004D008;
    }

label_8004CFF0:
    ctx->downcount -= 3;
    // 8004CFF0: cmpwi   r26, 0
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

label_8004CFF4:
    // 8004CFF4: addi    r26, r26, -1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-1);

label_8004CFF8:
    // 8004CFF8: bc    12, 2, 0x8004D044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D044;
        }
    }

label_8004CFFC:
    ctx->pc = 0x8004CFFCu;
    ctx->downcount -= 3;
    // 8004CFFC: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004D000:
    // 8004D000: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8004D004:
    // 8004D004: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8004D008:
    ctx->pc = 0x8004D008u;
    ctx->downcount -= 3;
    // 8004D008: lbzx    r11, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_8004D00C:
    // 8004D00C: cmpw    r0, r11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[11]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D010:
    // 8004D010: bc    4, 2, 0x8004D024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D024;
        }
    }

label_8004D014:
    ctx->pc = 0x8004D014u;
    ctx->downcount -= 4;
    // 8004D014: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004D018:
    // 8004D018: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_8004D01C:
    // 8004D01C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8004D020:
    // 8004D020: b       0x8004CFD8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CFD8u;
                return;
            }
            goto label_8004CFD8;
    }

label_8004D024:
    ctx->downcount -= 8;
    // 8004D024: addi    r9, r1, 40
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(40);

label_8004D028:
    // 8004D028: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_8004D02C:
    ctx->pc = 0x8004D02Cu;
    // 8004D02C: lbzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004D030:
    ctx->pc = 0x8004D030u;
    // 8004D030: stbx    r0, r8, r12
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[12];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004D034:
    // 8004D034: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_8004D038:
    ctx->pc = 0x8004D038u;
    // 8004D038: stbx    r11, r8, r12
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[12];
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_8004D03C:
    // 8004D03C: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_8004D040:
    // 8004D040: b       0x8004CFD8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CFD8u;
                return;
            }
            goto label_8004CFD8;
    }

label_8004D044:
    ctx->downcount -= 2;
    // 8004D044: cmplw   r7, r4
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D048:
    // 8004D048: bc    12, 0, 0x8004CE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004CE84u;
                return;
            }
            goto label_8004CE84;
        }
    }

label_8004D04C:
    ctx->pc = 0x8004D04Cu;
    ctx->downcount -= 3;
    // 8004D04C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004D050:
    ctx->pc = 0x8004D050u;
    // 8004D050: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004D054:
    ctx->pc = 0x8004D054u;
    // 8004D054: bl      0x8001DA4C
    {
            ctx->lr = 0x8004D058u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_8004D058:
    ctx->pc = 0x8004D058u;
    ctx->downcount -= 17;
    // 8004D058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004D05C:
    ctx->pc = 0x8004D05Cu;
    // 8004D05C: lmw     r26, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8004D060:
    ctx->pc = 0x8004D060u;
    // 8004D060: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004D064:
    ctx->pc = 0x8004D064u;
    // 8004D064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004D068:
    ctx->pc = 0x8004D068u;
    // 8004D068: addi    r1, r1, 576
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(576);

label_8004D06C:
    ctx->pc = 0x8004D06Cu;
    // 8004D06C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004D070:
    ctx->pc = 0x8004D070u;
    ctx->downcount -= 5;
    // 8004D070: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004D074:
    ctx->pc = 0x8004D074u;
    // 8004D074: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004D078:
    ctx->pc = 0x8004D078u;
    // 8004D078: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004D07C:
    ctx->pc = 0x8004D07Cu;
    // 8004D07C: lhz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004D080:
    ctx->pc = 0x8004D080u;
    // 8004D080: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004D084:
    ctx->pc = 0x8004D084u;
    ctx->downcount -= 5;
    // 8004D084: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004D088:
    ctx->pc = 0x8004D088u;
    // 8004D088: addi    r3, r3, -17080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004D08C:
    ctx->pc = 0x8004D08Cu;
    // 8004D08C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004D090:
    ctx->pc = 0x8004D090u;
    // 8004D090: lhz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004D094:
    ctx->pc = 0x8004D094u;
    // 8004D094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004D098:
    ctx->pc = 0x8004D098u;
    ctx->downcount -= 17;
    // 8004D098: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004D09C:
    ctx->pc = 0x8004D09Cu;
    // 8004D09C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004D0A0:
    ctx->pc = 0x8004D0A0u;
    // 8004D0A0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8004D0A4:
    ctx->pc = 0x8004D0A4u;
    // 8004D0A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004D0A8:
    ctx->pc = 0x8004D0A8u;
    // 8004D0A8: addi    r4, r3, -17080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17080);

label_8004D0AC:
    ctx->pc = 0x8004D0ACu;
    // 8004D0AC: addi    r3, r4, 8
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(8);

label_8004D0B0:
    ctx->pc = 0x8004D0B0u;
    // 8004D0B0: lwz     r0, 5896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004D0B4:
    ctx->pc = 0x8004D0B4u;
    // 8004D0B4: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004D0B8:
    ctx->pc = 0x8004D0B8u;
    // 8004D0B8: cmpwi   r0, 0
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

label_8004D0BC:
    ctx->pc = 0x8004D0BCu;
    // 8004D0BC: lwz     r0, 5888(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5888);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004D0C0:
    ctx->pc = 0x8004D0C0u;
    // 8004D0C0: lhz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8004D0C4:
    ctx->pc = 0x8004D0C4u;
    // 8004D0C4: lhz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004D0C8:
    ctx->pc = 0x8004D0C8u;
    // 8004D0C8: addi    r4, r4, -64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-64);

label_8004D0CC:
    ctx->pc = 0x8004D0CCu;
    // 8004D0CC: srawi r4, r4, 1
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

label_8004D0D0:
    ctx->pc = 0x8004D0D0u;
    // 8004D0D0: addi    r5, r5, -512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-512);

label_8004D0D4:
    ctx->pc = 0x8004D0D4u;
    // 8004D0D4: srawi r11, r5, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[11] = value;
        } else if (sh > 31) {
            ctx->gpr[11] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[11] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D0D8:
    ctx->pc = 0x8004D0D8u;
    // 8004D0D8: bc    12, 2, 0x8004D154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D154;
        }
    }

label_8004D0DC:
    ctx->pc = 0x8004D0DCu;
    ctx->downcount -= 3;
    // 8004D0DC: or   r10, r0, r0
    {
        ctx->gpr[10] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004D0E0:
    ctx->pc = 0x8004D0E0u;
    // 8004D0E0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8004D0E4:
    ctx->pc = 0x8004D0E4u;
    // 8004D0E4: b       0x8004D140
    {
            goto label_8004D140;
    }

label_8004D0E8:
    ctx->downcount -= 3;
    // 8004D0E8: rlwinm r6, r9, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x0000FFFFu;
    }

label_8004D0EC:
    // 8004D0EC: cmpw    r6, r4
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D0F0:
    // 8004D0F0: bc    12, 0, 0x8004D100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D100;
        }
    }

label_8004D0F4:
    ctx->downcount -= 3;
    // 8004D0F4: addi    r5, r4, 64
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(64);

label_8004D0F8:
    // 8004D0F8: cmpw    r6, r5
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D0FC:
    // 8004D0FC: bc    4, 1, 0x8004D12C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D12C;
        }
    }

label_8004D100:
    ctx->downcount -= 3;
    // 8004D100: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004D104:
    // 8004D104: li      r7, 4224
    ctx->gpr[7] = (u32)(s32)(4224);

label_8004D108:
    // 8004D108: b       0x8004D118
    {
            goto label_8004D118;
    }

label_8004D10C:
    loop_8004D10C(ctx);
    if (ctx->pc == 0x8004D12Cu) goto label_8004D12C;
    return;
label_8004D110:
    // 8004D110: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8004D114:
    ctx->pc = 0x8004D114u;
    // 8004D114: sthx    r7, r10, r5
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_8004D118:
    ctx->pc = 0x8004D118u;
    ctx->downcount -= 5;
    // 8004D118: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004D11C:
    // 8004D11C: rlwinm r6, r8, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x0000FFFFu;
    }

label_8004D120:
    ctx->pc = 0x8004D120u;
    // 8004D120: lhz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004D124:
    // 8004D124: cmplw   r6, r5
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D128:
    // 8004D128: bc    12, 0, 0x8004D10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004D10Cu;
                return;
            }
            goto label_8004D10C;
        }
    }

label_8004D12C:
    ctx->pc = 0x8004D12Cu;
    ctx->downcount -= 5;
    // 8004D12C: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004D130:
    // 8004D130: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8004D134:
    ctx->pc = 0x8004D134u;
    // 8004D134: lhz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004D138:
    // 8004D138: rlwinm r5, r5, 1, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_8004D13C:
    // 8004D13C: add   r10, r10, r5
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_8004D140:
    ctx->pc = 0x8004D140u;
    ctx->downcount -= 5;
    // 8004D140: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004D144:
    // 8004D144: rlwinm r6, r9, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x0000FFFFu;
    }

label_8004D148:
    ctx->pc = 0x8004D148u;
    // 8004D148: lhz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8004D14C:
    // 8004D14C: cmplw   r6, r5
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D150:
    // 8004D150: bc    12, 0, 0x8004D0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004D0E8u;
                return;
            }
            goto label_8004D0E8;
        }
    }

label_8004D154:
    ctx->pc = 0x8004D154u;
    ctx->downcount -= 17;
    // 8004D154: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004D158:
    ctx->pc = 0x8004D158u;
    // 8004D158: rlwinm r5, r11, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0x00000001u;
    }

label_8004D15C:
    ctx->pc = 0x8004D15Cu;
    // 8004D15C: add   r5, r5, r11
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8004D160:
    ctx->pc = 0x8004D160u;
    // 8004D160: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004D164:
    ctx->pc = 0x8004D164u;
    // 8004D164: lhz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8004D168:
    ctx->pc = 0x8004D168u;
    // 8004D168: srawi r5, r5, 1
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

label_8004D16C:
    ctx->pc = 0x8004D16Cu;
    // 8004D16C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_8004D170:
    ctx->pc = 0x8004D170u;
    // 8004D170: rlwinm r6, r6, 31, 1, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 31u) & 0x7FFFFFFFu;
    }

label_8004D174:
    ctx->pc = 0x8004D174u;
    // 8004D174: mullw   r4, r4, r6
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[4] = (u32)product;
    }

label_8004D178:
    ctx->pc = 0x8004D178u;
    // 8004D178: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8004D17C:
    ctx->pc = 0x8004D17Cu;
    // 8004D17C: add   r7, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8004D180:
    ctx->pc = 0x8004D180u;
    // 8004D180: add   r7, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8004D184:
    ctx->pc = 0x8004D184u;
    // 8004D184: b       0x8004D1F4
    {
            goto label_8004D1F4;
    }

label_8004D188:
    ctx->downcount -= 5;
    // 8004D188: rlwinm r6, r8, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x0000FFFFu;
    }

label_8004D18C:
    // 8004D18C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8004D190:
    // 8004D190: li      r5, 10368
    ctx->gpr[5] = (u32)(s32)(10368);

label_8004D194:
    // 8004D194: li      r4, 4224
    ctx->gpr[4] = (u32)(s32)(4224);

label_8004D198:
    // 8004D198: b       0x8004D1D4
    {
            goto label_8004D1D4;
    }

label_8004D19C:
    ctx->downcount -= 2;
    // 8004D19C: rlwinm. r0, r9, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D1A0:
    // 8004D1A0: bc    12, 2, 0x8004D1BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D1BC;
        }
    }

label_8004D1A4:
    ctx->downcount -= 2;
    // 8004D1A4: cmplwi  r6, 0x0000
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

label_8004D1A8:
    // 8004D1A8: bc    12, 2, 0x8004D1BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D1BC;
        }
    }

label_8004D1AC:
    ctx->downcount -= 2;
    // 8004D1AC: cmplwi  r0, 0x01FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x01FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D1B0:
    // 8004D1B0: bc    12, 2, 0x8004D1BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D1BC;
        }
    }

label_8004D1B4:
    ctx->downcount -= 2;
    // 8004D1B4: cmplwi  r6, 0x003F
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x003Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D1B8:
    // 8004D1B8: bc    4, 2, 0x8004D1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D1C8;
        }
    }

label_8004D1BC:
    ctx->downcount -= 3;
    // 8004D1BC: rlwinm r0, r9, 1, 15, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 1u) & 0x0001FFFEu;
    }

label_8004D1C0:
    ctx->pc = 0x8004D1C0u;
    // 8004D1C0: sthx    r5, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8004D1C4:
    // 8004D1C4: b       0x8004D1D0
    {
            goto label_8004D1D0;
    }

label_8004D1C8:
    ctx->downcount -= 2;
    // 8004D1C8: rlwinm r0, r9, 1, 15, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 1u) & 0x0001FFFEu;
    }

label_8004D1CC:
    ctx->pc = 0x8004D1CCu;
    // 8004D1CC: sthx    r4, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8004D1D0:
    ctx->downcount -= 1;
    // 8004D1D0: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8004D1D4:
    ctx->downcount -= 3;
    // 8004D1D4: rlwinm r0, r9, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x0000FFFFu;
    }

label_8004D1D8:
    // 8004D1D8: cmplwi  r0, 0x0200
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0200u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D1DC:
    // 8004D1DC: bc    12, 0, 0x8004D19C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004D19Cu;
                return;
            }
            goto label_8004D19C;
        }
    }

label_8004D1E0:
    ctx->pc = 0x8004D1E0u;
    ctx->downcount -= 5;
    // 8004D1E0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8004D1E4:
    // 8004D1E4: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8004D1E8:
    ctx->pc = 0x8004D1E8u;
    // 8004D1E8: lhz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004D1EC:
    // 8004D1EC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8004D1F0:
    // 8004D1F0: add   r7, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8004D1F4:
    ctx->downcount -= 3;
    // 8004D1F4: rlwinm r0, r8, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x0000FFFFu;
    }

label_8004D1F8:
    // 8004D1F8: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D1FC:
    // 8004D1FC: bc    12, 0, 0x8004D188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8004D188u;
                return;
            }
            goto label_8004D188;
        }
    }

label_8004D200:
    ctx->pc = 0x8004D200u;
    ctx->downcount -= 2;
    // 8004D200: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004D204:
    ctx->pc = 0x8004D204u;
    // 8004D204: bl      0x8002C86C
    {
            ctx->lr = 0x8004D208u;
            ctx->pc = 0x8002C86Cu;
            return;
    }

label_8004D208:
    ctx->pc = 0x8004D208u;
    ctx->downcount -= 1;
    // 8004D208: bl      0x8002C6D0
    {
            ctx->lr = 0x8004D20Cu;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8004D20C:
    ctx->pc = 0x8004D20Cu;
    ctx->downcount -= 5;
    // 8004D20C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004D210:
    ctx->pc = 0x8004D210u;
    // 8004D210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8004D214:
    ctx->pc = 0x8004D214u;
    // 8004D214: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8004D218:
    ctx->pc = 0x8004D218u;
    // 8004D218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800495E0;
        }
    }

label_8004D21C:
    ctx->pc = 0x8004D21Cu;
    ctx->downcount -= 41;
    // 8004D21C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004D220:
    ctx->pc = 0x8004D220u;
    // 8004D220: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8004D224:
    ctx->pc = 0x8004D224u;
    // 8004D224: lis     r5, -32735
    ctx->gpr[5] = ((u32)(s32)(-32735) << 16);

label_8004D228:
    ctx->pc = 0x8004D228u;
    // 8004D228: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004D22C:
    ctx->pc = 0x8004D22Cu;
    // 8004D22C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8004D230:
    ctx->pc = 0x8004D230u;
    // 8004D230: addi    r29, r5, -17080
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(-17080);

label_8004D234:
    ctx->pc = 0x8004D234u;
    // 8004D234: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8004D238:
    ctx->pc = 0x8004D238u;
    // 8004D238: addi    r7, r29, 6140
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(6140);

label_8004D23C:
    ctx->pc = 0x8004D23Cu;
    // 8004D23C: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004D240:
    ctx->pc = 0x8004D240u;
    // 8004D240: lwz     r28, 5888(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5888);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8004D244:
    ctx->pc = 0x8004D244u;
    // 8004D244: lhz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004D248:
    ctx->pc = 0x8004D248u;
    // 8004D248: lhz     r8, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_8004D24C:
    ctx->pc = 0x8004D24Cu;
    // 8004D24C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8004D250:
    ctx->pc = 0x8004D250u;
    // 8004D250: srawi r5, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8004D254:
    ctx->pc = 0x8004D254u;
    // 8004D254: rlwinm r0, r8, 31, 17, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 31u) & 0x00007FFFu;
    }

label_8004D258:
    ctx->pc = 0x8004D258u;
    // 8004D258: mullw   r6, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[6] = (u32)product;
    }

label_8004D25C:
    ctx->pc = 0x8004D25Cu;
    // 8004D25C: subf   r0, r3, r8
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8004D260:
    ctx->pc = 0x8004D260u;
    // 8004D260: srawi r5, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8004D264:
    ctx->pc = 0x8004D264u;
    // 8004D264: rlwinm r0, r5, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
    }

label_8004D268:
    ctx->pc = 0x8004D268u;
    // 8004D268: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004D26C:
    ctx->pc = 0x8004D26Cu;
    // 8004D26C: rlwinm r5, r6, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_8004D270:
    ctx->pc = 0x8004D270u;
    // 8004D270: srawi r0, r0, 1
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

label_8004D274:
    ctx->pc = 0x8004D274u;
    // 8004D274: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8004D278:
    ctx->pc = 0x8004D278u;
    // 8004D278: srawi r9, r3, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[9] = value;
        } else if (sh > 31) {
            ctx->gpr[9] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[9] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D27C:
    ctx->pc = 0x8004D27Cu;
    // 8004D27C: add   r12, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8004D280:
    ctx->pc = 0x8004D280u;
    // 8004D280: add   r12, r28, r12
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[12];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8004D284:
    ctx->pc = 0x8004D284u;
    // 8004D284: b       0x8004D680
    {
            ctx->pc = 0x8004D680u;
            return;
    }

label_8004D288:
    ctx->pc = 0x8004D288u;
    ctx->downcount -= 11;
    // 8004D288: subf   r10, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[10] = res;
    }

label_8004D28C:
    ctx->pc = 0x8004D28Cu;
    // 8004D28C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004D290:
    ctx->pc = 0x8004D290u;
    // 8004D290: addi    r11, r10, -1
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(-1);

label_8004D294:
    ctx->pc = 0x8004D294u;
    // 8004D294: mullw   r5, r9, r11
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[11];
        ctx->gpr[5] = (u32)product;
    }

label_8004D298:
    ctx->pc = 0x8004D298u;
    // 8004D298: addi    r0, r10, -2
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(-2);

label_8004D29C:
    ctx->pc = 0x8004D29Cu;
    // 8004D29C: add   r31, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8004D2A0:
    ctx->pc = 0x8004D2A0u;
    // 8004D2A0: b       0x8004D660
    {
            ctx->pc = 0x8004D660u;
            return;
    }

label_8004D2A4:
    ctx->pc = 0x8004D2A4u;
    ctx->downcount -= 3;
    // 8004D2A4: cmpwi   r5, 0
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

label_8004D2A8:
    ctx->pc = 0x8004D2A8u;
    // 8004D2A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004D2AC:
    ctx->pc = 0x8004D2ACu;
    // 8004D2AC: bc    4, 0, 0x8004D2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D2B8;
        }
    }

label_8004D2B0:
    ctx->pc = 0x8004D2B0u;
    ctx->downcount -= 2;
    // 8004D2B0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D2B4:
    ctx->pc = 0x8004D2B4u;
    // 8004D2B4: b       0x8004D2CC
    {
            goto label_8004D2CC;
    }

label_8004D2B8:
    ctx->pc = 0x8004D2B8u;
    ctx->downcount -= 4;
    // 8004D2B8: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D2BC:
    ctx->pc = 0x8004D2BCu;
    // 8004D2BC: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004D2C0:
    ctx->pc = 0x8004D2C0u;
    // 8004D2C0: cmpw    r5, r23
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D2C4:
    ctx->pc = 0x8004D2C4u;
    // 8004D2C4: bc    4, 1, 0x8004D2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D2CC;
        }
    }

label_8004D2C8:
    ctx->pc = 0x8004D2C8u;
    ctx->downcount -= 1;
    // 8004D2C8: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D2CC:
    ctx->pc = 0x8004D2CCu;
    ctx->downcount -= 6;
    // 8004D2CC: cmpwi   r10, 0
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

label_8004D2D0:
    ctx->pc = 0x8004D2D0u;
    // 8004D2D0: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D2D4:
    ctx->pc = 0x8004D2D4u;
    // 8004D2D4: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D2D8:
    ctx->pc = 0x8004D2D8u;
    // 8004D2D8: srawi r25, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D2DC:
    ctx->pc = 0x8004D2DCu;
    // 8004D2DC: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D2E0:
    ctx->pc = 0x8004D2E0u;
    // 8004D2E0: bc    4, 0, 0x8004D2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D2EC;
        }
    }

label_8004D2E4:
    ctx->pc = 0x8004D2E4u;
    ctx->downcount -= 2;
    // 8004D2E4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D2E8:
    ctx->pc = 0x8004D2E8u;
    // 8004D2E8: b       0x8004D300
    {
            goto label_8004D300;
    }

label_8004D2EC:
    ctx->pc = 0x8004D2ECu;
    ctx->downcount -= 4;
    // 8004D2EC: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D2F0:
    ctx->pc = 0x8004D2F0u;
    // 8004D2F0: or   r24, r10, r10
    {
        ctx->gpr[24] = ctx->gpr[10] | ctx->gpr[10];
    }

label_8004D2F4:
    ctx->pc = 0x8004D2F4u;
    // 8004D2F4: cmpw    r10, r23
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D2F8:
    ctx->pc = 0x8004D2F8u;
    // 8004D2F8: bc    4, 1, 0x8004D300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D300;
        }
    }

label_8004D2FC:
    ctx->pc = 0x8004D2FCu;
    ctx->downcount -= 1;
    // 8004D2FC: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D300:
    ctx->pc = 0x8004D300u;
    ctx->downcount -= 9;
    // 8004D300: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D304:
    ctx->pc = 0x8004D304u;
    // 8004D304: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D308:
    ctx->pc = 0x8004D308u;
    // 8004D308: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D30C:
    ctx->pc = 0x8004D30Cu;
    // 8004D30C: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D310:
    ctx->pc = 0x8004D310u;
    // 8004D310: bc    12, 2, 0x8004D318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D318;
        }
    }

label_8004D314:
    ctx->pc = 0x8004D314u;
    ctx->downcount -= 1;
    // 8004D314: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

label_8004D318:
    ctx->pc = 0x8004D318u;
    ctx->downcount -= 2;
    // 8004D318: cmpwi   r5, 0
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

label_8004D31C:
    ctx->pc = 0x8004D31Cu;
    // 8004D31C: bc    4, 0, 0x8004D328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D328;
        }
    }

label_8004D320:
    ctx->pc = 0x8004D320u;
    ctx->downcount -= 2;
    // 8004D320: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D324:
    ctx->pc = 0x8004D324u;
    // 8004D324: b       0x8004D33C
    {
            goto label_8004D33C;
    }

label_8004D328:
    ctx->pc = 0x8004D328u;
    ctx->downcount -= 4;
    // 8004D328: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D32C:
    ctx->pc = 0x8004D32Cu;
    // 8004D32C: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8004D330:
    ctx->pc = 0x8004D330u;
    // 8004D330: cmpw    r5, r23
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D334:
    ctx->pc = 0x8004D334u;
    // 8004D334: bc    4, 1, 0x8004D33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D33C;
        }
    }

label_8004D338:
    ctx->pc = 0x8004D338u;
    ctx->downcount -= 1;
    // 8004D338: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D33C:
    ctx->pc = 0x8004D33Cu;
    ctx->downcount -= 6;
    // 8004D33C: cmpwi   r0, 0
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

label_8004D340:
    ctx->pc = 0x8004D340u;
    // 8004D340: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D344:
    ctx->pc = 0x8004D344u;
    // 8004D344: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D348:
    ctx->pc = 0x8004D348u;
    // 8004D348: srawi r25, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D34C:
    ctx->pc = 0x8004D34Cu;
    // 8004D34C: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D350:
    ctx->pc = 0x8004D350u;
    // 8004D350: bc    4, 0, 0x8004D35C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D35C;
        }
    }

label_8004D354:
    ctx->pc = 0x8004D354u;
    ctx->downcount -= 2;
    // 8004D354: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D358:
    ctx->pc = 0x8004D358u;
    // 8004D358: b       0x8004D370
    {
            goto label_8004D370;
    }

label_8004D35C:
    ctx->pc = 0x8004D35Cu;
    ctx->downcount -= 4;
    // 8004D35C: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D360:
    ctx->pc = 0x8004D360u;
    // 8004D360: or   r24, r0, r0
    {
        ctx->gpr[24] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004D364:
    ctx->pc = 0x8004D364u;
    // 8004D364: cmpw    r0, r23
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D368:
    ctx->pc = 0x8004D368u;
    // 8004D368: bc    4, 1, 0x8004D370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D370;
        }
    }

label_8004D36C:
    ctx->pc = 0x8004D36Cu;
    ctx->downcount -= 1;
    // 8004D36C: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D370:
    ctx->pc = 0x8004D370u;
    ctx->downcount -= 9;
    // 8004D370: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D374:
    ctx->pc = 0x8004D374u;
    // 8004D374: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D378:
    ctx->pc = 0x8004D378u;
    // 8004D378: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D37C:
    ctx->pc = 0x8004D37Cu;
    // 8004D37C: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D380:
    ctx->pc = 0x8004D380u;
    // 8004D380: bc    12, 2, 0x8004D388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D388;
        }
    }

label_8004D384:
    ctx->pc = 0x8004D384u;
    ctx->downcount -= 1;
    // 8004D384: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D388:
    ctx->pc = 0x8004D388u;
    ctx->downcount -= 2;
    // 8004D388: addic.  r27, r5, 1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(1);
        u64 res = a + b;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D38C:
    ctx->pc = 0x8004D38Cu;
    // 8004D38C: bc    4, 0, 0x8004D398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D398;
        }
    }

label_8004D390:
    ctx->pc = 0x8004D390u;
    ctx->downcount -= 2;
    // 8004D390: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D394:
    ctx->pc = 0x8004D394u;
    // 8004D394: b       0x8004D3AC
    {
            goto label_8004D3AC;
    }

label_8004D398:
    ctx->pc = 0x8004D398u;
    ctx->downcount -= 4;
    // 8004D398: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D39C:
    ctx->pc = 0x8004D39Cu;
    // 8004D39C: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004D3A0:
    ctx->pc = 0x8004D3A0u;
    // 8004D3A0: cmpw    r27, r23
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D3A4:
    ctx->pc = 0x8004D3A4u;
    // 8004D3A4: bc    4, 1, 0x8004D3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D3AC;
        }
    }

label_8004D3A8:
    ctx->pc = 0x8004D3A8u;
    ctx->downcount -= 1;
    // 8004D3A8: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D3AC:
    ctx->pc = 0x8004D3ACu;
    ctx->downcount -= 6;
    // 8004D3AC: cmpwi   r10, 0
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

label_8004D3B0:
    ctx->pc = 0x8004D3B0u;
    // 8004D3B0: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D3B4:
    ctx->pc = 0x8004D3B4u;
    // 8004D3B4: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D3B8:
    ctx->pc = 0x8004D3B8u;
    // 8004D3B8: srawi r25, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D3BC:
    ctx->pc = 0x8004D3BCu;
    // 8004D3BC: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D3C0:
    ctx->pc = 0x8004D3C0u;
    // 8004D3C0: bc    4, 0, 0x8004D3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D3CC;
        }
    }

label_8004D3C4:
    ctx->pc = 0x8004D3C4u;
    ctx->downcount -= 2;
    // 8004D3C4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D3C8:
    ctx->pc = 0x8004D3C8u;
    // 8004D3C8: b       0x8004D3E0
    {
            goto label_8004D3E0;
    }

label_8004D3CC:
    ctx->pc = 0x8004D3CCu;
    ctx->downcount -= 4;
    // 8004D3CC: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D3D0:
    ctx->pc = 0x8004D3D0u;
    // 8004D3D0: or   r24, r10, r10
    {
        ctx->gpr[24] = ctx->gpr[10] | ctx->gpr[10];
    }

label_8004D3D4:
    ctx->pc = 0x8004D3D4u;
    // 8004D3D4: cmpw    r10, r23
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D3D8:
    ctx->pc = 0x8004D3D8u;
    // 8004D3D8: bc    4, 1, 0x8004D3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D3E0;
        }
    }

label_8004D3DC:
    ctx->pc = 0x8004D3DCu;
    ctx->downcount -= 1;
    // 8004D3DC: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D3E0:
    ctx->pc = 0x8004D3E0u;
    ctx->downcount -= 9;
    // 8004D3E0: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D3E4:
    ctx->pc = 0x8004D3E4u;
    // 8004D3E4: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D3E8:
    ctx->pc = 0x8004D3E8u;
    // 8004D3E8: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D3EC:
    ctx->pc = 0x8004D3ECu;
    // 8004D3EC: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D3F0:
    ctx->pc = 0x8004D3F0u;
    // 8004D3F0: bc    12, 2, 0x8004D3F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D3F8;
        }
    }

label_8004D3F4:
    ctx->pc = 0x8004D3F4u;
    ctx->downcount -= 1;
    // 8004D3F4: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D3F8:
    ctx->pc = 0x8004D3F8u;
    ctx->downcount -= 2;
    // 8004D3F8: cmpwi   r27, 0
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

label_8004D3FC:
    ctx->pc = 0x8004D3FCu;
    // 8004D3FC: bc    4, 0, 0x8004D408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D408;
        }
    }

label_8004D400:
    ctx->pc = 0x8004D400u;
    ctx->downcount -= 2;
    // 8004D400: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D404:
    ctx->pc = 0x8004D404u;
    // 8004D404: b       0x8004D41C
    {
            goto label_8004D41C;
    }

label_8004D408:
    ctx->pc = 0x8004D408u;
    ctx->downcount -= 4;
    // 8004D408: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D40C:
    ctx->pc = 0x8004D40Cu;
    // 8004D40C: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004D410:
    ctx->pc = 0x8004D410u;
    // 8004D410: cmpw    r27, r23
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D414:
    ctx->pc = 0x8004D414u;
    // 8004D414: bc    4, 1, 0x8004D41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D41C;
        }
    }

label_8004D418:
    ctx->pc = 0x8004D418u;
    ctx->downcount -= 1;
    // 8004D418: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D41C:
    ctx->pc = 0x8004D41Cu;
    ctx->downcount -= 6;
    // 8004D41C: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D420:
    ctx->pc = 0x8004D420u;
    // 8004D420: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D424:
    ctx->pc = 0x8004D424u;
    // 8004D424: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D428:
    ctx->pc = 0x8004D428u;
    // 8004D428: srawi r25, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D42C:
    ctx->pc = 0x8004D42Cu;
    // 8004D42C: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D430:
    ctx->pc = 0x8004D430u;
    // 8004D430: bc    4, 0, 0x8004D43C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D43C;
        }
    }

label_8004D434:
    ctx->pc = 0x8004D434u;
    ctx->downcount -= 2;
    // 8004D434: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D438:
    ctx->pc = 0x8004D438u;
    // 8004D438: b       0x8004D450
    {
            goto label_8004D450;
    }

label_8004D43C:
    ctx->pc = 0x8004D43Cu;
    ctx->downcount -= 4;
    // 8004D43C: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D440:
    ctx->pc = 0x8004D440u;
    // 8004D440: or   r24, r11, r11
    {
        ctx->gpr[24] = ctx->gpr[11] | ctx->gpr[11];
    }

label_8004D444:
    ctx->pc = 0x8004D444u;
    // 8004D444: cmpw    r11, r23
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D448:
    ctx->pc = 0x8004D448u;
    // 8004D448: bc    4, 1, 0x8004D450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D450;
        }
    }

label_8004D44C:
    ctx->pc = 0x8004D44Cu;
    ctx->downcount -= 1;
    // 8004D44C: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D450:
    ctx->pc = 0x8004D450u;
    ctx->downcount -= 9;
    // 8004D450: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D454:
    ctx->pc = 0x8004D454u;
    // 8004D454: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D458:
    ctx->pc = 0x8004D458u;
    // 8004D458: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D45C:
    ctx->pc = 0x8004D45Cu;
    // 8004D45C: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D460:
    ctx->pc = 0x8004D460u;
    // 8004D460: bc    12, 2, 0x8004D468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D468;
        }
    }

label_8004D464:
    ctx->pc = 0x8004D464u;
    ctx->downcount -= 1;
    // 8004D464: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D468:
    ctx->pc = 0x8004D468u;
    ctx->downcount -= 2;
    // 8004D468: cmpwi   r27, 0
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

label_8004D46C:
    ctx->pc = 0x8004D46Cu;
    // 8004D46C: bc    4, 0, 0x8004D478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D478;
        }
    }

label_8004D470:
    ctx->pc = 0x8004D470u;
    ctx->downcount -= 2;
    // 8004D470: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8004D474:
    ctx->pc = 0x8004D474u;
    // 8004D474: b       0x8004D488
    {
            goto label_8004D488;
    }

label_8004D478:
    ctx->pc = 0x8004D478u;
    ctx->downcount -= 3;
    // 8004D478: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D47C:
    ctx->pc = 0x8004D47Cu;
    // 8004D47C: cmpw    r27, r23
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D480:
    ctx->pc = 0x8004D480u;
    // 8004D480: bc    4, 1, 0x8004D488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D488;
        }
    }

label_8004D484:
    ctx->pc = 0x8004D484u;
    ctx->downcount -= 1;
    // 8004D484: or   r27, r23, r23
    {
        ctx->gpr[27] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D488:
    ctx->pc = 0x8004D488u;
    ctx->downcount -= 6;
    // 8004D488: cmpwi   r0, 0
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

label_8004D48C:
    ctx->pc = 0x8004D48Cu;
    // 8004D48C: rlwinm r23, r27, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000007u;
    }

label_8004D490:
    ctx->pc = 0x8004D490u;
    // 8004D490: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D494:
    ctx->pc = 0x8004D494u;
    // 8004D494: srawi r25, r27, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[27];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D498:
    ctx->pc = 0x8004D498u;
    // 8004D498: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D49C:
    ctx->pc = 0x8004D49Cu;
    // 8004D49C: bc    4, 0, 0x8004D4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D4A8;
        }
    }

label_8004D4A0:
    ctx->pc = 0x8004D4A0u;
    ctx->downcount -= 2;
    // 8004D4A0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D4A4:
    ctx->pc = 0x8004D4A4u;
    // 8004D4A4: b       0x8004D4BC
    {
            goto label_8004D4BC;
    }

label_8004D4A8:
    ctx->pc = 0x8004D4A8u;
    ctx->downcount -= 4;
    // 8004D4A8: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D4AC:
    ctx->pc = 0x8004D4ACu;
    // 8004D4AC: or   r24, r0, r0
    {
        ctx->gpr[24] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004D4B0:
    ctx->pc = 0x8004D4B0u;
    // 8004D4B0: cmpw    r0, r23
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D4B4:
    ctx->pc = 0x8004D4B4u;
    // 8004D4B4: bc    4, 1, 0x8004D4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D4BC;
        }
    }

label_8004D4B8:
    ctx->pc = 0x8004D4B8u;
    ctx->downcount -= 1;
    // 8004D4B8: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D4BC:
    ctx->pc = 0x8004D4BCu;
    ctx->downcount -= 9;
    // 8004D4BC: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D4C0:
    ctx->pc = 0x8004D4C0u;
    // 8004D4C0: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D4C4:
    ctx->pc = 0x8004D4C4u;
    // 8004D4C4: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D4C8:
    ctx->pc = 0x8004D4C8u;
    // 8004D4C8: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D4CC:
    ctx->pc = 0x8004D4CCu;
    // 8004D4CC: bc    12, 2, 0x8004D4D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D4D4;
        }
    }

label_8004D4D0:
    ctx->pc = 0x8004D4D0u;
    ctx->downcount -= 1;
    // 8004D4D0: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D4D4:
    ctx->pc = 0x8004D4D4u;
    ctx->downcount -= 2;
    // 8004D4D4: addic.  r27, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D4D8:
    ctx->pc = 0x8004D4D8u;
    // 8004D4D8: bc    4, 0, 0x8004D4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D4E4;
        }
    }

label_8004D4DC:
    ctx->pc = 0x8004D4DCu;
    ctx->downcount -= 2;
    // 8004D4DC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D4E0:
    ctx->pc = 0x8004D4E0u;
    // 8004D4E0: b       0x8004D4F8
    {
            goto label_8004D4F8;
    }

label_8004D4E4:
    ctx->pc = 0x8004D4E4u;
    ctx->downcount -= 4;
    // 8004D4E4: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D4E8:
    ctx->pc = 0x8004D4E8u;
    // 8004D4E8: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004D4EC:
    ctx->pc = 0x8004D4ECu;
    // 8004D4EC: cmpw    r27, r23
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D4F0:
    ctx->pc = 0x8004D4F0u;
    // 8004D4F0: bc    4, 1, 0x8004D4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D4F8;
        }
    }

label_8004D4F4:
    ctx->pc = 0x8004D4F4u;
    ctx->downcount -= 1;
    // 8004D4F4: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D4F8:
    ctx->pc = 0x8004D4F8u;
    ctx->downcount -= 6;
    // 8004D4F8: cmpwi   r10, 0
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

label_8004D4FC:
    ctx->pc = 0x8004D4FCu;
    // 8004D4FC: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D500:
    ctx->pc = 0x8004D500u;
    // 8004D500: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D504:
    ctx->pc = 0x8004D504u;
    // 8004D504: srawi r25, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[25] = value;
        } else if (sh > 31) {
            ctx->gpr[25] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[25] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D508:
    ctx->pc = 0x8004D508u;
    // 8004D508: slw   r26, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[26] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D50C:
    ctx->pc = 0x8004D50Cu;
    // 8004D50C: bc    4, 0, 0x8004D518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D518;
        }
    }

label_8004D510:
    ctx->pc = 0x8004D510u;
    ctx->downcount -= 2;
    // 8004D510: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8004D514:
    ctx->pc = 0x8004D514u;
    // 8004D514: b       0x8004D52C
    {
            goto label_8004D52C;
    }

label_8004D518:
    ctx->pc = 0x8004D518u;
    ctx->downcount -= 4;
    // 8004D518: addi    r23, r4, -1
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D51C:
    ctx->pc = 0x8004D51Cu;
    // 8004D51C: or   r24, r10, r10
    {
        ctx->gpr[24] = ctx->gpr[10] | ctx->gpr[10];
    }

label_8004D520:
    ctx->pc = 0x8004D520u;
    // 8004D520: cmpw    r10, r23
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D524:
    ctx->pc = 0x8004D524u;
    // 8004D524: bc    4, 1, 0x8004D52C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D52C;
        }
    }

label_8004D528:
    ctx->pc = 0x8004D528u;
    ctx->downcount -= 1;
    // 8004D528: or   r24, r23, r23
    {
        ctx->gpr[24] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D52C:
    ctx->pc = 0x8004D52Cu;
    ctx->downcount -= 9;
    // 8004D52C: mullw   r23, r24, r9
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[23] = (u32)product;
    }

label_8004D530:
    ctx->pc = 0x8004D530u;
    // 8004D530: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8004D534:
    ctx->pc = 0x8004D534u;
    // 8004D534: lbzx    r23, r7, r23
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[23];
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_8004D538:
    ctx->pc = 0x8004D538u;
    // 8004D538: and.   r23, r26, r23
    {
        ctx->gpr[23] = ctx->gpr[26] & ctx->gpr[23];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D53C:
    ctx->pc = 0x8004D53Cu;
    // 8004D53C: bc    12, 2, 0x8004D544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D544;
        }
    }

label_8004D540:
    ctx->pc = 0x8004D540u;
    ctx->downcount -= 1;
    // 8004D540: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D544:
    ctx->pc = 0x8004D544u;
    ctx->downcount -= 2;
    // 8004D544: cmpwi   r27, 0
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

label_8004D548:
    ctx->pc = 0x8004D548u;
    // 8004D548: bc    4, 0, 0x8004D554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D554;
        }
    }

label_8004D54C:
    ctx->pc = 0x8004D54Cu;
    ctx->downcount -= 2;
    // 8004D54C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D550:
    ctx->pc = 0x8004D550u;
    // 8004D550: b       0x8004D568
    {
            goto label_8004D568;
    }

label_8004D554:
    ctx->pc = 0x8004D554u;
    ctx->downcount -= 4;
    // 8004D554: addi    r23, r3, -1
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D558:
    ctx->pc = 0x8004D558u;
    // 8004D558: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8004D55C:
    ctx->pc = 0x8004D55Cu;
    // 8004D55C: cmpw    r27, r23
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D560:
    ctx->pc = 0x8004D560u;
    // 8004D560: bc    4, 1, 0x8004D568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D568;
        }
    }

label_8004D564:
    ctx->pc = 0x8004D564u;
    ctx->downcount -= 1;
    // 8004D564: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8004D568:
    ctx->pc = 0x8004D568u;
    ctx->downcount -= 6;
    // 8004D568: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D56C:
    ctx->pc = 0x8004D56Cu;
    // 8004D56C: rlwinm r23, r25, 0, 29, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x00000007u;
    }

label_8004D570:
    ctx->pc = 0x8004D570u;
    // 8004D570: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8004D574:
    ctx->pc = 0x8004D574u;
    // 8004D574: srawi r26, r25, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[25];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[26] = value;
        } else if (sh > 31) {
            ctx->gpr[26] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[26] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8004D578:
    ctx->pc = 0x8004D578u;
    // 8004D578: slw   r23, r24, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[23] = sh > 31 ? 0u : (ctx->gpr[24] << sh);
    }

label_8004D57C:
    ctx->pc = 0x8004D57Cu;
    // 8004D57C: bc    4, 0, 0x8004D588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D588;
        }
    }

label_8004D580:
    ctx->pc = 0x8004D580u;
    ctx->downcount -= 2;
    // 8004D580: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004D584:
    ctx->pc = 0x8004D584u;
    // 8004D584: b       0x8004D59C
    {
            goto label_8004D59C;
    }

label_8004D588:
    ctx->pc = 0x8004D588u;
    ctx->downcount -= 4;
    // 8004D588: addi    r24, r4, -1
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(-1);

label_8004D58C:
    ctx->pc = 0x8004D58Cu;
    // 8004D58C: or   r25, r11, r11
    {
        ctx->gpr[25] = ctx->gpr[11] | ctx->gpr[11];
    }

label_8004D590:
    ctx->pc = 0x8004D590u;
    // 8004D590: cmpw    r11, r24
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D594:
    ctx->pc = 0x8004D594u;
    // 8004D594: bc    4, 1, 0x8004D59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D59C;
        }
    }

label_8004D598:
    ctx->pc = 0x8004D598u;
    ctx->downcount -= 1;
    // 8004D598: or   r25, r24, r24
    {
        ctx->gpr[25] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8004D59C:
    ctx->pc = 0x8004D59Cu;
    ctx->downcount -= 9;
    // 8004D59C: mullw   r24, r25, r9
    {
        s64 product = (s64)(s32)ctx->gpr[25] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[24] = (u32)product;
    }

label_8004D5A0:
    ctx->pc = 0x8004D5A0u;
    // 8004D5A0: add   r24, r26, r24
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_8004D5A4:
    ctx->pc = 0x8004D5A4u;
    // 8004D5A4: lbzx    r24, r7, r24
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[24];
        ctx->gpr[24] = mem_read8(ctx, ea);
    }

label_8004D5A8:
    ctx->pc = 0x8004D5A8u;
    // 8004D5A8: and.   r24, r23, r24
    {
        ctx->gpr[24] = ctx->gpr[23] & ctx->gpr[24];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8004D5AC:
    ctx->pc = 0x8004D5ACu;
    // 8004D5AC: bc    12, 2, 0x8004D5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8004D5B4;
        }
    }

label_8004D5B0:
    ctx->pc = 0x8004D5B0u;
    ctx->downcount -= 1;
    // 8004D5B0: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_8004D5B4:
    ctx->pc = 0x8004D5B4u;
    ctx->downcount -= 2;
    // 8004D5B4: cmpwi   r27, 0
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

label_8004D5B8:
    ctx->pc = 0x8004D5B8u;
    // 8004D5B8: bc    4, 0, 0x8004D5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D5C4;
        }
    }

label_8004D5BC:
    ctx->pc = 0x8004D5BCu;
    ctx->downcount -= 2;
    // 8004D5BC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8004D5C0:
    ctx->pc = 0x8004D5C0u;
    // 8004D5C0: b       0x8004D5D4
    {
            goto label_8004D5D4;
    }

label_8004D5C4:
    ctx->pc = 0x8004D5C4u;
    ctx->downcount -= 3;
    // 8004D5C4: addi    r24, r3, -1
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(-1);

label_8004D5C8:
    ctx->pc = 0x8004D5C8u;
    // 8004D5C8: cmpw    r27, r24
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004D5CC:
    ctx->pc = 0x8004D5CCu;
    // 8004D5CC: bc    4, 1, 0x8004D5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004D5D4;
        }
    }

label_8004D5D0:
    ctx->pc = 0x8004D5D0u;
    ctx->downcount -= 1;
    // 8004D5D0: or   r27, r24, r24
    {
        ctx->gpr[27] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8004D5D4:
    ctx->pc = 0x8004D5D4u;
    ctx->downcount -= 3;
    // 8004D5D4: cmpwi   r0, 0
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

label_8004D5D8:
    ctx->pc = 0x8004D5D8u;
    // 8004D5D8: rlwinm r24, r27, 0, 29, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000007u;
    }

label_8004D5DC:
    ctx->pc = 0x8004D5DCu;
    // 8004D5DC: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

    ctx->pc = 0x8004D5E0u;
    return;
return_dispatch_800495E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x800496D4u: goto label_800496D4;
    case 0x800496E0u: goto label_800496E0;
    case 0x800497DCu: goto label_800497DC;
    case 0x80049874u: goto label_80049874;
    case 0x800498A4u: goto label_800498A4;
    case 0x800498E0u: goto label_800498E0;
    case 0x8004991Cu: goto label_8004991C;
    case 0x8004994Cu: goto label_8004994C;
    case 0x80049988u: goto label_80049988;
    case 0x80049B18u: goto label_80049B18;
    case 0x80049B20u: goto label_80049B20;
    case 0x80049B30u: goto label_80049B30;
    case 0x80049B38u: goto label_80049B38;
    case 0x80049B40u: goto label_80049B40;
    case 0x80049D8Cu: goto label_80049D8C;
    case 0x80049DB0u: goto label_80049DB0;
    case 0x80049DC0u: goto label_80049DC0;
    case 0x80049DFCu: goto label_80049DFC;
    case 0x80049E18u: goto label_80049E18;
    case 0x80049E34u: goto label_80049E34;
    case 0x80049E50u: goto label_80049E50;
    case 0x80049E6Cu: goto label_80049E6C;
    case 0x80049E88u: goto label_80049E88;
    case 0x80049EA4u: goto label_80049EA4;
    case 0x80049EACu: goto label_80049EAC;
    case 0x80049EB4u: goto label_80049EB4;
    case 0x80049EBCu: goto label_80049EBC;
    case 0x80049EC4u: goto label_80049EC4;
    case 0x80049ECCu: goto label_80049ECC;
    case 0x80049ED4u: goto label_80049ED4;
    case 0x80049EDCu: goto label_80049EDC;
    case 0x80049F6Cu: goto label_80049F6C;
    case 0x80049F74u: goto label_80049F74;
    case 0x80049F80u: goto label_80049F80;
    case 0x80049FA8u: goto label_80049FA8;
    case 0x80049FB0u: goto label_80049FB0;
    case 0x80049FBCu: goto label_80049FBC;
    case 0x80049FC8u: goto label_80049FC8;
    case 0x80049FD0u: goto label_80049FD0;
    case 0x80049FDCu: goto label_80049FDC;
    case 0x80049FE8u: goto label_80049FE8;
    case 0x80049FF0u: goto label_80049FF0;
    case 0x80049FFCu: goto label_80049FFC;
    case 0x8004A0F8u: goto label_8004A0F8;
    case 0x8004A14Cu: goto label_8004A14C;
    case 0x8004A198u: goto label_8004A198;
    case 0x8004A1A0u: goto label_8004A1A0;
    case 0x8004A1A8u: goto label_8004A1A8;
    case 0x8004A1B0u: goto label_8004A1B0;
    case 0x8004A1B8u: goto label_8004A1B8;
    case 0x8004A1CCu: goto label_8004A1CC;
    case 0x8004A1E0u: goto label_8004A1E0;
    case 0x8004A1F0u: goto label_8004A1F0;
    case 0x8004A204u: goto label_8004A204;
    case 0x8004A20Cu: goto label_8004A20C;
    case 0x8004A22Cu: goto label_8004A22C;
    case 0x8004A234u: goto label_8004A234;
    case 0x8004A248u: goto label_8004A248;
    case 0x8004A260u: goto label_8004A260;
    case 0x8004A278u: goto label_8004A278;
    case 0x8004A294u: goto label_8004A294;
    case 0x8004A2B0u: goto label_8004A2B0;
    case 0x8004A2B4u: goto label_8004A2B4;
    case 0x8004A2C0u: goto label_8004A2C0;
    case 0x8004A2CCu: goto label_8004A2CC;
    case 0x8004A2D8u: goto label_8004A2D8;
    case 0x8004A2E0u: goto label_8004A2E0;
    case 0x8004A2F0u: goto label_8004A2F0;
    case 0x8004A300u: goto label_8004A300;
    case 0x8004A30Cu: goto label_8004A30C;
    case 0x8004A318u: goto label_8004A318;
    case 0x8004A324u: goto label_8004A324;
    case 0x8004A330u: goto label_8004A330;
    case 0x8004A33Cu: goto label_8004A33C;
    case 0x8004A348u: goto label_8004A348;
    case 0x8004A354u: goto label_8004A354;
    case 0x8004A360u: goto label_8004A360;
    case 0x8004A36Cu: goto label_8004A36C;
    case 0x8004A378u: goto label_8004A378;
    case 0x8004A384u: goto label_8004A384;
    case 0x8004A390u: goto label_8004A390;
    case 0x8004A394u: goto label_8004A394;
    case 0x8004A3A4u: goto label_8004A3A4;
    case 0x8004A3B8u: goto label_8004A3B8;
    case 0x8004A3CCu: goto label_8004A3CC;
    case 0x8004A3E4u: goto label_8004A3E4;
    case 0x8004A3F8u: goto label_8004A3F8;
    case 0x8004A410u: goto label_8004A410;
    case 0x8004A424u: goto label_8004A424;
    case 0x8004A438u: goto label_8004A438;
    case 0x8004A43Cu: goto label_8004A43C;
    case 0x8004A448u: goto label_8004A448;
    case 0x8004A458u: goto label_8004A458;
    case 0x8004A464u: goto label_8004A464;
    case 0x8004A46Cu: goto label_8004A46C;
    case 0x8004A478u: goto label_8004A478;
    case 0x8004A484u: goto label_8004A484;
    case 0x8004A48Cu: goto label_8004A48C;
    case 0x8004A498u: goto label_8004A498;
    case 0x8004A4A4u: goto label_8004A4A4;
    case 0x8004A4ACu: goto label_8004A4AC;
    case 0x8004A4B8u: goto label_8004A4B8;
    case 0x8004A4C4u: goto label_8004A4C4;
    case 0x8004A4CCu: goto label_8004A4CC;
    case 0x8004A4D8u: goto label_8004A4D8;
    case 0x8004A4E4u: goto label_8004A4E4;
    case 0x8004A4ECu: goto label_8004A4EC;
    case 0x8004A4F8u: goto label_8004A4F8;
    case 0x8004A4FCu: goto label_8004A4FC;
    case 0x8004A50Cu: goto label_8004A50C;
    case 0x8004A550u: goto label_8004A550;
    case 0x8004A558u: goto label_8004A558;
    case 0x8004A564u: goto label_8004A564;
    case 0x8004A570u: goto label_8004A570;
    case 0x8004A578u: goto label_8004A578;
    case 0x8004A584u: goto label_8004A584;
    case 0x8004A598u: goto label_8004A598;
    case 0x8004A5A8u: goto label_8004A5A8;
    case 0x8004A5E8u: goto label_8004A5E8;
    case 0x8004A5F0u: goto label_8004A5F0;
    case 0x8004A5FCu: goto label_8004A5FC;
    case 0x8004A610u: goto label_8004A610;
    case 0x8004A618u: goto label_8004A618;
    case 0x8004A624u: goto label_8004A624;
    case 0x8004A634u: goto label_8004A634;
    case 0x8004A63Cu: goto label_8004A63C;
    case 0x8004A648u: goto label_8004A648;
    case 0x8004A64Cu: goto label_8004A64C;
    case 0x8004A6BCu: goto label_8004A6BC;
    case 0x8004A70Cu: goto label_8004A70C;
    case 0x8004A740u: goto label_8004A740;
    case 0x8004A748u: goto label_8004A748;
    case 0x8004A780u: goto label_8004A780;
    case 0x8004A784u: goto label_8004A784;
    case 0x8004A7D8u: goto label_8004A7D8;
    case 0x8004A7E0u: goto label_8004A7E0;
    case 0x8004A818u: goto label_8004A818;
    case 0x8004A820u: goto label_8004A820;
    case 0x8004A850u: goto label_8004A850;
    case 0x8004A854u: goto label_8004A854;
    case 0x8004A8C8u: goto label_8004A8C8;
    case 0x8004A8CCu: goto label_8004A8CC;
    case 0x8004A940u: goto label_8004A940;
    case 0x8004A978u: goto label_8004A978;
    case 0x8004A980u: goto label_8004A980;
    case 0x8004A994u: goto label_8004A994;
    case 0x8004A9A0u: goto label_8004A9A0;
    case 0x8004AA24u: goto label_8004AA24;
    case 0x8004AA2Cu: goto label_8004AA2C;
    case 0x8004AA60u: goto label_8004AA60;
    case 0x8004AA64u: goto label_8004AA64;
    case 0x8004AABCu: goto label_8004AABC;
    case 0x8004AAC4u: goto label_8004AAC4;
    case 0x8004AAFCu: goto label_8004AAFC;
    case 0x8004AB04u: goto label_8004AB04;
    case 0x8004AB34u: goto label_8004AB34;
    case 0x8004AB38u: goto label_8004AB38;
    case 0x8004ABD4u: goto label_8004ABD4;
    case 0x8004ABDCu: goto label_8004ABDC;
    case 0x8004AC0Cu: goto label_8004AC0C;
    case 0x8004AC10u: goto label_8004AC10;
    case 0x8004AC94u: goto label_8004AC94;
    case 0x8004ACA4u: goto label_8004ACA4;
    case 0x8004ACC4u: goto label_8004ACC4;
    case 0x8004ACC8u: goto label_8004ACC8;
    case 0x8004ACD0u: goto label_8004ACD0;
    case 0x8004ACD4u: goto label_8004ACD4;
    case 0x8004ACD8u: goto label_8004ACD8;
    case 0x8004ACE0u: goto label_8004ACE0;
    case 0x8004ACE8u: goto label_8004ACE8;
    case 0x8004ACECu: goto label_8004ACEC;
    case 0x8004ACF0u: goto label_8004ACF0;
    case 0x8004AD00u: goto label_8004AD00;
    case 0x8004AD10u: goto label_8004AD10;
    case 0x8004AD20u: goto label_8004AD20;
    case 0x8004AD30u: goto label_8004AD30;
    case 0x8004AD34u: goto label_8004AD34;
    case 0x8004AD88u: goto label_8004AD88;
    case 0x8004AD94u: goto label_8004AD94;
    case 0x8004ADA0u: goto label_8004ADA0;
    case 0x8004ADACu: goto label_8004ADAC;
    case 0x8004ADB0u: goto label_8004ADB0;
    case 0x8004ADDCu: goto label_8004ADDC;
    case 0x8004ADF4u: goto label_8004ADF4;
    case 0x8004AE00u: goto label_8004AE00;
    case 0x8004AE68u: goto label_8004AE68;
    case 0x8004AE70u: goto label_8004AE70;
    case 0x8004AE84u: goto label_8004AE84;
    case 0x8004B050u: goto label_8004B050;
    case 0x8004B054u: goto label_8004B054;
    case 0x8004B05Cu: goto label_8004B05C;
    case 0x8004B070u: goto label_8004B070;
    case 0x8004B078u: goto label_8004B078;
    case 0x8004B094u: goto label_8004B094;
    case 0x8004B0A0u: goto label_8004B0A0;
    case 0x8004B0A4u: goto label_8004B0A4;
    case 0x8004B0ACu: goto label_8004B0AC;
    case 0x8004B0B4u: goto label_8004B0B4;
    case 0x8004B0C8u: goto label_8004B0C8;
    case 0x8004B0E0u: goto label_8004B0E0;
    case 0x8004B0E4u: goto label_8004B0E4;
    case 0x8004B0FCu: goto label_8004B0FC;
    case 0x8004B124u: goto label_8004B124;
    case 0x8004B14Cu: goto label_8004B14C;
    case 0x8004B168u: goto label_8004B168;
    case 0x8004B180u: goto label_8004B180;
    case 0x8004B18Cu: goto label_8004B18C;
    case 0x8004B1B4u: goto label_8004B1B4;
    case 0x8004B1CCu: goto label_8004B1CC;
    case 0x8004B1DCu: goto label_8004B1DC;
    case 0x8004B21Cu: goto label_8004B21C;
    case 0x8004B234u: goto label_8004B234;
    case 0x8004B23Cu: goto label_8004B23C;
    case 0x8004B248u: goto label_8004B248;
    case 0x8004B250u: goto label_8004B250;
    case 0x8004B268u: goto label_8004B268;
    case 0x8004B270u: goto label_8004B270;
    case 0x8004B278u: goto label_8004B278;
    case 0x8004B284u: goto label_8004B284;
    case 0x8004B290u: goto label_8004B290;
    case 0x8004B29Cu: goto label_8004B29C;
    case 0x8004B2ACu: goto label_8004B2AC;
    case 0x8004B2BCu: goto label_8004B2BC;
    case 0x8004B2C4u: goto label_8004B2C4;
    case 0x8004B2CCu: goto label_8004B2CC;
    case 0x8004B2D0u: goto label_8004B2D0;
    case 0x8004B2E4u: goto label_8004B2E4;
    case 0x8004B2ECu: goto label_8004B2EC;
    case 0x8004B2F0u: goto label_8004B2F0;
    case 0x8004B300u: goto label_8004B300;
    case 0x8004B310u: goto label_8004B310;
    case 0x8004B31Cu: goto label_8004B31C;
    case 0x8004B328u: goto label_8004B328;
    case 0x8004B334u: goto label_8004B334;
    case 0x8004B340u: goto label_8004B340;
    case 0x8004B370u: goto label_8004B370;
    case 0x8004B380u: goto label_8004B380;
    case 0x8004B3ACu: goto label_8004B3AC;
    case 0x8004B3C8u: goto label_8004B3C8;
    case 0x8004B3D8u: goto label_8004B3D8;
    case 0x8004B3F4u: goto label_8004B3F4;
    case 0x8004B3F8u: goto label_8004B3F8;
    case 0x8004B404u: goto label_8004B404;
    case 0x8004B40Cu: goto label_8004B40C;
    case 0x8004B434u: goto label_8004B434;
    case 0x8004B470u: goto label_8004B470;
    case 0x8004B488u: goto label_8004B488;
    case 0x8004B4F4u: goto label_8004B4F4;
    case 0x8004B544u: goto label_8004B544;
    case 0x8004B55Cu: goto label_8004B55C;
    case 0x8004B5F0u: goto label_8004B5F0;
    case 0x8004B600u: goto label_8004B600;
    case 0x8004B614u: goto label_8004B614;
    case 0x8004B624u: goto label_8004B624;
    case 0x8004B638u: goto label_8004B638;
    case 0x8004B648u: goto label_8004B648;
    case 0x8004B65Cu: goto label_8004B65C;
    case 0x8004B66Cu: goto label_8004B66C;
    case 0x8004B680u: goto label_8004B680;
    case 0x8004B690u: goto label_8004B690;
    case 0x8004B6D0u: goto label_8004B6D0;
    case 0x8004B6E0u: goto label_8004B6E0;
    case 0x8004B6F4u: goto label_8004B6F4;
    case 0x8004B704u: goto label_8004B704;
    case 0x8004B718u: goto label_8004B718;
    case 0x8004B728u: goto label_8004B728;
    case 0x8004B73Cu: goto label_8004B73C;
    case 0x8004B74Cu: goto label_8004B74C;
    case 0x8004B760u: goto label_8004B760;
    case 0x8004B770u: goto label_8004B770;
    case 0x8004B7B8u: goto label_8004B7B8;
    case 0x8004B7C8u: goto label_8004B7C8;
    case 0x8004B7F4u: goto label_8004B7F4;
    case 0x8004B86Cu: goto label_8004B86C;
    case 0x8004B8E8u: goto label_8004B8E8;
    case 0x8004B8F8u: goto label_8004B8F8;
    case 0x8004B908u: goto label_8004B908;
    case 0x8004B918u: goto label_8004B918;
    case 0x8004B944u: goto label_8004B944;
    case 0x8004B9B0u: goto label_8004B9B0;
    case 0x8004B9B4u: goto label_8004B9B4;
    case 0x8004B9B8u: goto label_8004B9B8;
    case 0x8004B9BCu: goto label_8004B9BC;
    case 0x8004B9DCu: goto label_8004B9DC;
    case 0x8004B9E0u: goto label_8004B9E0;
    case 0x8004B9E4u: goto label_8004B9E4;
    case 0x8004B9FCu: goto label_8004B9FC;
    case 0x8004BA24u: goto label_8004BA24;
    case 0x8004BA48u: goto label_8004BA48;
    case 0x8004BA50u: goto label_8004BA50;
    case 0x8004BA54u: goto label_8004BA54;
    case 0x8004BAF0u: goto label_8004BAF0;
    case 0x8004BB08u: goto label_8004BB08;
    case 0x8004BB34u: goto label_8004BB34;
    case 0x8004BB58u: goto label_8004BB58;
    case 0x8004BBD8u: goto label_8004BBD8;
    case 0x8004BBF0u: goto label_8004BBF0;
    case 0x8004BC08u: goto label_8004BC08;
    case 0x8004BC18u: goto label_8004BC18;
    case 0x8004BC58u: goto label_8004BC58;
    case 0x8004BC70u: goto label_8004BC70;
    case 0x8004BC78u: goto label_8004BC78;
    case 0x8004BC7Cu: goto label_8004BC7C;
    case 0x8004BC80u: goto label_8004BC80;
    case 0x8004BC94u: goto label_8004BC94;
    case 0x8004BC9Cu: goto label_8004BC9C;
    case 0x8004BCC0u: goto label_8004BCC0;
    case 0x8004BD80u: goto label_8004BD80;
    case 0x8004BE3Cu: goto label_8004BE3C;
    case 0x8004BEE8u: goto label_8004BEE8;
    case 0x8004BEECu: goto label_8004BEEC;
    case 0x8004BF0Cu: goto label_8004BF0C;
    case 0x8004BF34u: goto label_8004BF34;
    case 0x8004BF58u: goto label_8004BF58;
    case 0x8004BF64u: goto label_8004BF64;
    case 0x8004BF7Cu: goto label_8004BF7C;
    case 0x8004BF94u: goto label_8004BF94;
    case 0x8004BFA0u: goto label_8004BFA0;
    case 0x8004BFB0u: goto label_8004BFB0;
    case 0x8004BFC8u: goto label_8004BFC8;
    case 0x8004C01Cu: goto label_8004C01C;
    case 0x8004C044u: goto label_8004C044;
    case 0x8004C048u: goto label_8004C048;
    case 0x8004C04Cu: goto label_8004C04C;
    case 0x8004C090u: goto label_8004C090;
    case 0x8004C108u: goto label_8004C108;
    case 0x8004C114u: goto label_8004C114;
    case 0x8004C12Cu: goto label_8004C12C;
    case 0x8004C150u: goto label_8004C150;
    case 0x8004C1A8u: goto label_8004C1A8;
    case 0x8004C1B4u: goto label_8004C1B4;
    case 0x8004C1D4u: goto label_8004C1D4;
    case 0x8004C2A8u: goto label_8004C2A8;
    case 0x8004C2C8u: goto label_8004C2C8;
    case 0x8004C2D8u: goto label_8004C2D8;
    case 0x8004C2DCu: goto label_8004C2DC;
    case 0x8004C328u: goto label_8004C328;
    case 0x8004C344u: goto label_8004C344;
    case 0x8004C360u: goto label_8004C360;
    case 0x8004C3A8u: goto label_8004C3A8;
    case 0x8004C4B8u: goto label_8004C4B8;
    case 0x8004C4E0u: goto label_8004C4E0;
    case 0x8004C508u: goto label_8004C508;
    case 0x8004C514u: goto label_8004C514;
    case 0x8004C518u: goto label_8004C518;
    case 0x8004C560u: goto label_8004C560;
    case 0x8004C5BCu: goto label_8004C5BC;
    case 0x8004C610u: goto label_8004C610;
    case 0x8004C674u: goto label_8004C674;
    case 0x8004C6B0u: goto label_8004C6B0;
    case 0x8004C6D4u: goto label_8004C6D4;
    case 0x8004C72Cu: goto label_8004C72C;
    case 0x8004C74Cu: goto label_8004C74C;
    case 0x8004C764u: goto label_8004C764;
    case 0x8004C7B4u: goto label_8004C7B4;
    case 0x8004C7B8u: goto label_8004C7B8;
    case 0x8004C800u: goto label_8004C800;
    case 0x8004C804u: goto label_8004C804;
    case 0x8004C850u: goto label_8004C850;
    case 0x8004C884u: goto label_8004C884;
    case 0x8004C894u: goto label_8004C894;
    case 0x8004C89Cu: goto label_8004C89C;
    case 0x8004C8A4u: goto label_8004C8A4;
    case 0x8004C8B8u: goto label_8004C8B8;
    case 0x8004C8CCu: goto label_8004C8CC;
    case 0x8004C914u: goto label_8004C914;
    case 0x8004C928u: goto label_8004C928;
    case 0x8004C934u: goto label_8004C934;
    case 0x8004C948u: goto label_8004C948;
    case 0x8004C99Cu: goto label_8004C99C;
    case 0x8004C9B4u: goto label_8004C9B4;
    case 0x8004C9F0u: goto label_8004C9F0;
    case 0x8004CC18u: goto label_8004CC18;
    case 0x8004CCB8u: goto label_8004CCB8;
    case 0x8004CDB0u: goto label_8004CDB0;
    case 0x8004CE18u: goto label_8004CE18;
    case 0x8004CE4Cu: goto label_8004CE4C;
    case 0x8004D058u: goto label_8004D058;
    case 0x8004D208u: goto label_8004D208;
    case 0x8004D20Cu: goto label_8004D20C;
    default: return;
    }
}

